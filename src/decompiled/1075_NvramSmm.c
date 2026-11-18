// decompiled by r2ghidra: 1075_NvramSmm.pe32
// functions: 191

/* entry0 @ 0x11320 */

int64_t entry0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    fcn.000113c4(noname_0,arg1);
    arg1_00 = 0x21ea0;
    *0x21fa0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x21ea0);
    if (iVar1 == 0) {
        iVar1 = fcn.000118cc(arg1_00,arg1);
        if ((-1 < iVar1) || (*0x21fa0 < 0)) {
            *0x21fa0 = iVar1;
        }
        fcn.000110d0(0x21ea0,-1);
    }
    iVar1 = *0x21fa0;
    if (*0x21fa0 < 0) {
        if (*0x21d48 != 0) {
            (**(*(arg1 + 0x60) + 0x48))();
            *0x21d48 = 0;
        }
        fcn.00019f20(*0x26030);
    }
    return iVar1;
}


/* fcn.00018fe4 @ 0x18fe4 */

void fcn.00018fe4(void)

{
    return;
}


/* fcn.000113c4 @ 0x113c4 */

//WARNING: Variable defined which should be unmapped: var_18h

void fcn.000113c4(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int iVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint in_register_0000000c;
    uint64_t uVar10;
    uint16_t *puVar11;
    uint64_t uStackX_8;
    ulong *puStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    uchar auStack_48 [24];
    int64_t var_18h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    *0x21d30 = *(arg2 + 0x60);
    puVar11 = NULL;
    puStackX_10 = NULL;
    *0x21d28 = arg2;
    (**(*0x21d30 + 0x140))(0x20260,0,&puStackX_10);
    (*puStackX_10[1])(puStackX_10,0x21d38);
    (**(*0x21d30 + 0x140))(0x20280,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x26030 = fcn.00019e24();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x26030);
    *0x26028 = uStackX_8 >> 5;
    fcn.00019fb8();
    puVar6 = fcn.00019fb8();
    do {
        uVar2 = *puVar6;
        uVar10 = uVar2;
        if (uVar2 == 0xffff) {
            puVar6 = puVar11;
code_r0x000114b4:
            if (puVar6 == NULL) {
                uVar7 = fcn.00011290();
                fcn.00011240();
                uVar4 = in(0x1808);
                fcn.000111f0(uVar10,0x1808);
                while( true ) {
                    iVar5 = in(0x1808);
                    uVar9 = ((uVar4 & 0xffffff) + 0x16b) - iVar5;
                    if ((uVar9 >> 0x17 & 1) != 0) break;
                    func_0x000111e0();
                }
                fcn.000111f0(uVar9,0x1808);
                if ((uVar7 >> 9 & 1) == 0) {
                    fcn.00011240();
                }
                else {
                    fcn.00011230();
                }
code_r0x0001151d:
                if (*0x21d48 == NULL) {
                    *0x26020 = 0x2000;
                    iVar8 = (**(*(arg2 + 0x60) + 0x40))(4);
                    if (iVar8 < 0) {
                        *0x21d48 = puVar11;
                    }
                }
                fcn.00011200(1,0,0,&uStackX_8);
                *0x21db0 = 0x10000;
                if ((*0x21da8 != NULL) ||
                   ((*0x21da8 = fcn.00019e24(0x10000,0x10000), *0x21da8 != NULL && (0x37 < *0x21db0)))) {
                    uVar10 = *0x21db0;
                    piVar3 = *0x21da8;
                    piVar1 = *0x21da8 + 5;
                    (*0x21da8)[2] = 0;
                    *piVar3 = piVar1;
                    piVar3[1] = uVar10 - 0x28;
                    piVar3[4] = piVar1;
                    piVar3[3] = piVar3 + (uVar10 - 0x10);
                }
                uStackX_8 = 0;
                (**(*(arg2 + 0x60) + 0x140))(0x200e0,0,&uStackX_8);
                (**(uStackX_8 + 8))(uStackX_8,0x21db8);
                iVar8 = (**(*0x21d38 + 0xd0))(0x201e0,0,0x21dc0);
                if (iVar8 < 0) {
                    *0x21dc0 = puVar11;
                }
                fcn.00019f58(0x20270,0x21e58);
                if (*0x21e30 == NULL) {
                    *0x21e38 = 0;
                    *0x21e30 = fcn.000157b8;
                    *0x21e4c = 0;
                    *0x21e40 = 0;
                    *0x21e48 = 0;
                    *0x21e3c = 0;
                    *0x21e50 = 0;
                    fcn.0001a9a8(0x1b05c);
                    aiStackX_18[0] = 0;
                    (**(*0x21db8 + 0xe0))(0x1b2c4,0x20150,aiStackX_18);
                }
                if (*0x21de8 == '\0') {
                    fcn.0001a8ac(0x21df0,0x21e20,0x21df8,0x1b66c);
                }
                iVar8 = (**(*0x21d30 + 0x140))(0x20260,0,&puStackX_10);
                if ((((iVar8 < 0) || (iVar8 = (**puStackX_10)(puStackX_10,&uStackX_8), iVar8 < 0)) ||
                    (uStackX_8 == '\0')) || (iVar8 = (*puStackX_10[1])(puStackX_10,0x21e78), iVar8 < 0)) {
                    (**(*0x21d30 + 0x170))(0x200,0x10,0x1b704,0,0x20230,auStack_48);
                }
                else {
                    aiStackX_18[1] = 0;
                    (**(*0x21e78 + 0xc0))(0x200f0,0x1b6f8,aiStackX_18 + 1);
                }
                return;
            }
            if ((*0x208b0 == *(puVar6 + 4)) && (*0x208b8 == *(puVar6 + 8))) goto code_r0x0001151d;
        }
        else if (uVar2 == 4) goto code_r0x000114b4;
        puVar6 = puVar6 + puVar6[1];
    } while( true );
}


/* section..text @ 0x11000 */

ulong section..text(int64_t arg1)

{
    ulong unaff_RBX;
    ulong unaff_RBP;
    ulong unaff_RSI;
    ulong unaff_RDI;
    ulong unaff_R12;
    ulong unaff_R13;
    ulong unaff_R14;
    ulong unaff_R15;
    uint32_t in_CR4;
    int64_t in_SSP;
    ulong unaff_XMM6_Qa;
    ulong unaff_XMM6_Qb;
    ulong unaff_XMM7_Qa;
    ulong unaff_XMM7_Qb;
    ulong unaff_XMM8_Qa;
    ulong unaff_XMM8_Qb;
    ulong unaff_XMM9_Qa;
    ulong unaff_XMM9_Qb;
    ulong unaff_XMM10_Qa;
    ulong unaff_XMM10_Qb;
    ulong unaff_XMM11_Qa;
    ulong unaff_XMM11_Qb;
    ulong unaff_XMM12_Qa;
    ulong unaff_XMM12_Qb;
    ulong unaff_XMM13_Qa;
    ulong unaff_XMM13_Qb;
    ulong unaff_XMM14_Qa;
    ulong unaff_XMM14_Qb;
    ulong unaff_XMM15_Qa;
    ulong unaff_XMM15_Qb;
    ulong unaff_retaddr;
    uchar auStackX_8 [32];
    
    //[00] -r-x section size 61440 named .text
    fcn.00018fe4();
    *(arg1 + 0xf8) = 0;
    if ((*0x20b80 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
        *(arg1 + 0xf8) = in_SSP + 8;
    }
    *arg1 = unaff_RBX;
    *(arg1 + 8) = auStackX_8;
    *(arg1 + 0x10) = unaff_RBP;
    *(arg1 + 0x18) = unaff_RDI;
    *(arg1 + 0x20) = unaff_RSI;
    *(arg1 + 0x28) = unaff_R12;
    *(arg1 + 0x30) = unaff_R13;
    *(arg1 + 0x38) = unaff_R14;
    *(arg1 + 0x40) = unaff_R15;
    *(arg1 + 0x48) = unaff_retaddr;
    *(arg1 + 0x50) = *0x1094;
    *(arg1 + 0x58) = unaff_XMM6_Qa;
    *(arg1 + 0x60) = unaff_XMM6_Qb;
    *(arg1 + 0x68) = unaff_XMM7_Qa;
    *(arg1 + 0x70) = unaff_XMM7_Qb;
    *(arg1 + 0x78) = unaff_XMM8_Qa;
    *(arg1 + 0x80) = unaff_XMM8_Qb;
    *(arg1 + 0x88) = unaff_XMM9_Qa;
    *(arg1 + 0x90) = unaff_XMM9_Qb;
    *(arg1 + 0x98) = unaff_XMM10_Qa;
    *(arg1 + 0xa0) = unaff_XMM10_Qb;
    *(arg1 + 0xa8) = unaff_XMM11_Qa;
    *(arg1 + 0xb0) = unaff_XMM11_Qb;
    *(arg1 + 0xb8) = unaff_XMM12_Qa;
    *(arg1 + 0xc0) = unaff_XMM12_Qb;
    *(arg1 + 200) = unaff_XMM13_Qa;
    *(arg1 + 0xd0) = unaff_XMM13_Qb;
    *(arg1 + 0xd8) = unaff_XMM14_Qa;
    *(arg1 + 0xe0) = unaff_XMM14_Qb;
    *(arg1 + 0xe8) = unaff_XMM15_Qa;
    *(arg1 + 0xf0) = unaff_XMM15_Qb;
    //WARNING: Treating indirect jump as return
    return 0;
}


/* fcn.000118cc @ 0x118cc */

int64_t fcn.000118cc(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char16_t *arg1_00;
    int64_t arg2_00;
    ulong uStackX_8;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_20h_2;
    code *pcStack_20;
    int64_t var_bp_10h;
    uint32_t var_bp_8h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    var_28h = 0;
    var_20h = 0;
    if (*0x21d60 == 0) {
        *0x21d68 = *(arg2 + 0x60);
        *0x21d50 = *(arg2 + 0x58);
        *0x21d60 = arg2;
    }
    if ((*0x21d98 != NULL) || (iVar3 = (**(*0x21d68 + 0x140))(0x208e0,0,0x21d98), -1 < iVar3)) {
        (***0x21d98)(*0x21d98,&uStackX_8);
        if ((uStackX_8 != '\0') && (iVar3 = (*(*0x21d98)[1])(*0x21d98,0x21d58), -1 < iVar3)) {
            iVar3 = fcn.0001a278();
            *0x21d70 = 1;
            if (iVar3 != 0) {
                *0x21d50 = iVar3;
            }
            *0x21d80 = 0;
            fcn.0001a040();
            fcn.0001a140();
            *0x21d80 = 1;
        }
    }
    *0x21c90 = 1;
    var_20h = 0x20;
    iVar3 = (**(*(*0x21d60 + 0x58) + 0x48))(L"NvramMailBox",0x20170,0,&var_20h,&var_20h_2);
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = fcn.0001684c();
    if (iVar3 < 0) {
        return iVar3;
    }
    if (var_bp_8h != '\0') {
        fcn.000144c8(*0x26680,*(var_20h_2 + 0x2e0));
    }
    *0x266a0 = var_bp_10h;
    puVar1 = *(var_20h_2 + 0x2e0);
    *0x266a8 = *puVar1;
    *0x266b0 = puVar1[1];
    *0x266c8 = (*(var_20h_2 + 0x2e8))[1];
    *0x266c0 = **(var_20h_2 + 0x2e8);
    *0x266b8 = *(puVar1 + 0x3c);
    if ((*0x26688)[1] == *0x266c8) {
        fcn.0001fe00(**0x26688,*0x266c0,(*0x26688)[1]);
        piVar2 = *0x26688;
        fcn.00017ec8(*0x26688);
        fcn.00015c30(piVar2);
        if ((*0x263a0 & 8) != 0) {
            if ((*0x26680)[1] != (*(var_20h_2 + 0x2e0))[1]) goto code_r0x00011a7c;
            fcn.0001fe00(**0x26680,**(var_20h_2 + 0x2e0),(*0x26680)[1]);
            piVar2 = *0x26680;
            fcn.00017ec8(*0x26680);
            fcn.00015c30(piVar2);
            fcn.00015d0c();
        }
        fcn.00012a58();
        arg2_00 = 0x20170;
        arg1_00 = L"NvramMailBox";
        fcn.00015ab8(0x20b88,0x20170,0,0);
        iVar3 = fcn.000171d4();
        if (-1 < iVar3) {
            fcn.00016a60(arg1_00,arg2_00);
            fcn.0001178c(CONCAT71(arg1_00 >> 8,1),CONCAT71(arg2_00 >> 8,1));
            iVar3 = (*pcStack_20)();
            if (-1 < iVar3) {
                *(*0x21d50 + 0x50) = fcn.0001588c;
                *(*0x21d50 + 0x48) = fcn.000157b8;
                *(*0x21d50 + 0x58) = fcn.0001708c;
                *(*0x21d50 + 0x80) = fcn.00015f78;
                iVar3 = (**(*0x21d58 + 0xa8))(&var_28h,0x20170,0,0x202b0);
            }
        }
    }
    else {
code_r0x00011a7c:
        iVar3 = -0x7ffffffffffffffe;
    }
    return iVar3;
}


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00019f20 @ 0x19f20 */

void fcn.00019f20(uint32_t arg1)

{
    char cVar1;
    uint in_register_0000000c;
    
    cVar1 = fcn.00019de0(CONCAT44(in_register_0000000c,arg1));
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00019f41. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x21d38 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00019f51. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x21d30 + 0x48))(CONCAT44(in_register_0000000c,arg1));
    return;
}


/* fcn.00019de0 @ 0x19de0 */

uint64_t fcn.00019de0(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x26028 != 0) {
        puVar2 = *0x26030 + 8;
        in_RAX = *0x26030;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x26028);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00019e24 @ 0x19e24 */

ulong fcn.00019e24(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x21d38 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00019fb8 @ 0x19fb8 */

int64_t fcn.00019fb8(void)

{
    if (*0x21d40 == 0) {
        fcn.00019f58(0x20200,0x21d40);
    }
    return *0x21d40;
}


/* fcn.00019f58 @ 0x19f58 */

ulong fcn.00019f58(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x21d28;
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


/* fcn.00011290 @ 0x11290 */

uint64_t fcn.00011290(void)

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


/* fcn.00011240 @ 0x11240 */

void fcn.00011240(void)

{
    return;
}


/* fcn.000111f0 @ 0x111f0 */

uint64_t fcn.000111f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000111e2 @ 0x111e2 */

void fcn.000111e2(void)

{
    return;
}


/* fcn.00011230 @ 0x11230 */

void fcn.00011230(void)

{
    return;
}


/* fcn.00011200 @ 0x11200 */

uint64_t fcn.00011200(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001a9a8 @ 0x1a9a8 */

ulong fcn.0001a9a8(int64_t arg1)

{
    int64_t iVar1;
    
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    if (*0x21de8 == '\0') {
        if (*0x21df8 == *0x21e20) {
            iVar1 = fcn.00019e94(0x21df0,*0x21e20 * 8,*0x21e20 * 8 + 0x40,*0x21df0);
            if (iVar1 == 0) {
                return 0x8000000000000009;
            }
            *0x21e20 = *0x21e20 + 8;
            *0x21df0 = iVar1;
        }
        *(*0x21df0 + *0x21df8 * 8) = arg1;
        *0x21df8 = *0x21df8 + 1;
        return 0;
    }
    return 0x800000000000000f;
}


/* fcn.00019e94 @ 0x19e94 */

int64_t fcn.00019e94(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00019e24(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000111c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.00011180(arg1_00,arg3,arg2);
            }
            fcn.00019f20(arg3);
        }
    }
    return arg1_00;
}


/* fcn.0001a8ac @ 0x1a8ac */

ulong fcn.0001a8ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if (*arg3 == *arg2) {
        iVar1 = *arg2 * 8;
        iVar1 = fcn.00019e94(arg1,iVar1,iVar1 + 0x40,*arg1);
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


/* fcn.0001fe00 @ 0x1fe00 */

int64_t fcn.0001fe00(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00015ab8 @ 0x15ab8 */

int64_t fcn.00015ab8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg3_00;
    int64_t *piVar3;
    
    arg3_00 = arg3 & 0xffffffff;
    iVar1 = fcn.00014b68(arg1,arg2,arg3,arg4);
    if (-1 < iVar1) {
        iVar1 = -0x7ffffffffffffffd;
        piVar3 = 0x211a0;
        do {
            if (iVar1 != -0x7ffffffffffffffd) goto code_r0x00015b5d;
            iVar1 = (**piVar3)(arg1,arg2,arg3_00,arg4);
            piVar3 = piVar3 + 1;
        } while (*piVar3 != 0);
        if (iVar1 == -0x7ffffffffffffffd) {
            iVar1 = fcn.0001503c(arg1,arg2,arg3_00,arg4);
        }
code_r0x00015b5d:
        iVar2 = -0x7ffffffffffffffd;
        if (*0x21ce8 != 0) {
            piVar3 = 0x21ce8;
            do {
                if (iVar2 != -0x7ffffffffffffffd) break;
                iVar2 = (**piVar3)(arg1,arg2,arg3_00,arg4);
                piVar3 = piVar3 + 1;
            } while (*piVar3 != 0);
        }
    }
    return iVar1;
}


/* fcn.0001178c @ 0x1178c */

ulong * fcn.0001178c(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    ulong *puVar2;
    int64_t arg1_00;
    int64_t arg3;
    ulong *puVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint8_t uVar8;
    
    arg3 = *0x266b0;
    arg1_00 = *0x266a8;
    puVar2 = *0x266a0;
    uVar8 = 0;
    if (((*0x266b0 != (*0x26680)[1]) || (*0x266c8 != (*0x26688)[1])) ||
       (puVar3 = *(*0x26680 + 0x3c), *0x266b8 != *(*0x26680 + 0x3c))) {
        *0x21c80 = 1;
        **0x266a0 = 1;
        return puVar2;
    }
    if (arg1 != '\0') {
        *(*0x266a0 + 1) = *(*0x266a0 + 1) | 1;
        puVar3 = fcn.0001fe00(arg1_00,**0x26680,arg3);
    }
    uVar5 = *0x266c8;
    puVar2 = *0x266c0;
    if (arg2 == '\0') {
        return puVar3;
    }
    *(*0x266a0 + 1) = *(*0x266a0 + 1) | 2;
    puVar7 = **0x26688;
    bVar1 = false;
    uVar4 = puVar7 - puVar2;
    puVar3 = puVar2;
    if (puVar7 < puVar2) {
        uVar4 = -uVar4;
        if (puVar2 <= uVar5 + puVar7) {
            puVar3 = uVar5 + puVar2;
            bVar1 = true;
            uVar8 = 1;
            puVar7 = uVar5 + puVar7;
        }
    }
    if ((7 < uVar5) && (7 < uVar4)) {
        uVar4 = puVar7 & 7;
        uVar6 = puVar3 & 7;
        if (bVar1) {
            puVar7 = puVar7 + -1;
            puVar3 = puVar3 + -1;
        }
        if ((uVar4 == uVar6) && (uVar4 != 0)) {
            if (!bVar1) {
                uVar4 = 8 - uVar4;
            }
            uVar5 = uVar5 - uVar4;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar3 = *puVar7;
                puVar7 = puVar7 + uVar8 * -2 + 1;
                puVar3 = puVar3 + uVar8 * -2 + 1;
            }
        }
        if (bVar1) {
            puVar7 = puVar7 + -7;
            puVar3 = puVar3 + -7;
        }
        for (uVar4 = uVar5 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar7;
            puVar7 = puVar7 + uVar8 * -2 + 1;
            puVar3 = puVar3 + uVar8 * -2 + 1;
        }
        uVar5 = uVar5 & 7;
        if (uVar5 == 0) {
            return puVar2;
        }
        if (bVar1) {
            puVar7 = puVar7 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    if (bVar1) {
        puVar7 = puVar7 + -1;
        puVar3 = puVar3 + -1;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar7;
        puVar7 = puVar7 + uVar8 * -2 + 1;
        puVar3 = puVar3 + uVar8 * -2 + 1;
    }
    return puVar2;
}


/* fcn.0001a278 @ 0x1a278 */

ulong fcn.0001a278(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x21d58 != 0) {
        iVar3 = *(*0x21d58 + 0xa0);
        for (iVar2 = *(*0x21d58 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.0001a2d8(iVar3,0x208f0,0x10);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.0001a040 @ 0x1a040 */

ulong fcn.0001a040(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x21d70 == '\0') {
        if (*0x21d90 == 0) {
            if (*0x21d80 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x21d68 + 0x140))(0x208c0,0,0x21d90);
        }
    }
    else if (*0x21d78 == 0) {
        if ((*0x21d80 == '\0') && (*0x21d58 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001a07f. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x21d58 + 0xd0))(0x208d0,0,0x21d78);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.0001a140 @ 0x1a140 */

int64_t fcn.0001a140(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x21d70 == '\0') {
        if (*0x21da0 == 0) {
            if (*0x21d80 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x21d68 + 0x18))(0x1f);
            (**(*0x21d68 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x21d68 + 0x140))(str.6_6v,0,0x21da0);
            if (iVar1 < 0) {
                *0x21da0 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x21d88 == 0) {
        if (*0x21d58 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x21d58 + 0xd0))(0x20100,0,0x21d88);
        if (iVar1 < 0) {
            *0x21d88 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.0001684c @ 0x1684c */

int64_t fcn.0001684c(void)

{
    int64_t iVar1;
    bool bVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t arg1;
    uint64_t *puVar5;
    uint64_t uVar6;
    int64_t *arg1_00;
    ulong *arg1_01;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iStackX_10;
    ulong uStack_38;
    ulong uStack_30;
    uint uStack_28;
    uint32_t uStack_24;
    
    iStackX_10 = fcn.00019fe8();
    if ((iStackX_10 == 0) || (iVar3 = fcn.0001a350(0x212a8,&iStackX_10), -1 < iVar3)) {
        uStack_38 = *(iStackX_10 + 0x18);
        uStack_30 = *(iStackX_10 + 0x20);
        uStack_28 = *(iStackX_10 + 0x28);
        uStack_24 = *(iStackX_10 + 0x30);
        *(iStackX_10 + 0x30) = *(iStackX_10 + 0x30) & 0xfffffffd;
        puVar4 = NULL;
    }
    else {
        puVar4 = 0x800000000000000e;
    }
    arg1_01 = &uStack_38;
    if (puVar4 < 0) {
        arg1_01 = NULL;
    }
    if (arg1_01 == NULL) {
        uVar6 = 0x30000;
    }
    else {
        uVar6 = *(arg1_01 + 2);
        if (uVar6 < 0x10000) {
            uVar6 = 0x10000;
        }
    }
    uVar7 = 0;
    iVar3 = 0x300;
    fcn.0001fdae(0x263a0,0x300,0);
    *0x26698 = uVar6 * 3;
    *0x26690 = fcn.00016e00(*0x26698);
    if (*0x26690 != 0) {
        iVar3 = fcn.0001659c(arg1_01,iVar3);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar1 = *0x263a4 * 0x48;
        arg1_00 = iVar1 + 0x263b0;
        arg1 = fcn.00016e00(0x10000);
        *arg1_00 = arg1;
        if (arg1 != 0) {
            *(iVar1 + 0x263b8) = 0x10000;
            fcn.0001fdae(arg1,0x10000,CONCAT71(uVar7 >> 8,0xff));
            *(iVar1 + 0x263e8) = 0;
            *(iVar1 + 0x263f0) = 0x20430;
            *(iVar1 + 0x263ec) = 0;
            fcn.00017ec8(arg1_00);
            *0x263a4 = *0x263a4 + 1;
            *0x26688 = arg1_00;
            *0x26300 = fcn.00016e00(0x10000);
            if (*0x26300 != 0) {
                *0x26310 = 0x10000;
                *0x21cd8 = 0x26060;
                fcn.00012a58();
            }
            bVar2 = false;
            if (*0x263a4 != 0) {
                puVar5 = 0x263b8;
                uVar8 = *0x263a4;
                do {
                    if (((puVar5[6] & 2) == 0) && (uVar6 < *puVar5)) {
                        uVar6 = *puVar5;
                        bVar2 = true;
                    }
                    puVar5 = puVar5 + 9;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                if (bVar2) {
                    (**(*0x21d58 + 0x68))(*0x26690,((*0x26698 & 0xfff) != 0) + (*0x26698 >> 0xc));
                    *0x26698 = uVar6 * 3;
                    *0x26690 = fcn.00016e00(*0x26698);
                    if (*0x26690 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                }
            }
            return iVar3;
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.000144c8 @ 0x144c8 */

uint64_t fcn.000144c8(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    char cVar2;
    char cVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    puVar1 = *(arg1 + 0x40);
    if (puVar1 == NULL) {
        return 0x8000000000000003;
    }
    if (puVar1[4] == NULL) {
code_r0x000145d1:
        uVar4 = fcn.00013ec8(arg2,arg1,0,0);
    }
    else {
        uVar4 = (*puVar1[4])(puVar1,*arg1);
        if (uVar4 < 0) {
            return uVar4;
        }
        fcn.00017ec8(arg1);
        if (uVar4 == 0x4000000000000001) goto code_r0x000145d1;
        cVar2 = (**puVar1)(puVar1,*arg1,*(arg1 + 8));
        cVar3 = '\0';
        if (cVar2 != '\0') {
            iVar6 = *(arg2 + 0x18) - *(arg2 + 0x20);
            cVar2 = (*puVar1[3])(puVar1,*(arg1 + 0x20),iVar6);
            cVar3 = '\0';
            if (cVar2 != '\0') {
                *(arg1 + 0x18) = *(arg1 + 0x20) + iVar6;
                *(arg1 + 0x28) = *(arg2 + 0x28);
                iVar6 = *(arg2 + 0x28);
                cVar3 = (*puVar1[3])(puVar1,*(arg1 + 0x10) + iVar6 * -0x10 + 0x10,iVar6 * 0x10,
                                     *(arg2 + 0x10) + iVar6 * -0x10 + 0x10);
            }
        }
        (*puVar1[1])(puVar1,*arg1,*(arg1 + 8));
        uVar4 = ~-(cVar3 != '\0') & 0x8000000000000007;
    }
    uVar5 = uVar4;
    if (puVar1[5] != NULL) {
        uVar5 = (*puVar1[5])(puVar1,uVar4 >> 0x3f,*arg1);
        if (uVar4 < 0) {
            return uVar4;
        }
        if (-1 < uVar5) goto code_r0x00014620;
        (*puVar1[5])(puVar1,1,*arg1);
    }
    if (uVar5 < 0) {
        return uVar5;
    }
code_r0x00014620:
    *0x263a8 = 0;
    if (arg1 == *0x26680) {
        fcn.00015d0c();
    }
    fcn.00012a58();
    return uVar5;
}


/* fcn.00017ec8 @ 0x17ec8 */

void fcn.00017ec8(int64_t arg1)

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
    iVar3 = fcn.00017678(arg1);
    if (iVar2 != iVar3) {
        if (iVar3 == 0) {
            cVar1 = fcn.0001752c(iVar2,arg1);
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


/* fcn.00015c30 @ 0x15c30 */

void fcn.00015c30(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    
    iVar5 = *(arg1 + 0x20);
    uVar6 = 0;
    cVar3 = fcn.0001752c(iVar5,arg1);
    iVar4 = iVar5;
    if (cVar3 != '\0') {
        while (iVar2 = iVar4, iVar2 != 0) {
            if (((*(iVar2 + 6) & 0xc000000) == 0) && (uVar6 < *(iVar2 + 10))) {
                uVar6 = *(iVar2 + 10);
            }
            iVar4 = fcn.000175cc(iVar2,arg1);
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


/* fcn.00015d0c @ 0x15d0c */

void fcn.00015d0c(void)

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
    
    arg2 = *0x26680;
    apcStack_28[2] = NULL;
    uVar5 = ~*0x263a0 & 1;
    uVar7 = 0;
    apcStack_28[0] = L"MfgDefaults";
    apcStack_28[1] = L"StdDefaults";
    uVar4 = *0x263a4;
    if (*0x263a4 != 0) {
        do {
            iVar1 = uVar7 * 0x48;
            arg3 = iVar1 + 0x263b0;
            if (((*(iVar1 + 0x263e8) == '\a') && (*arg2 <= *arg3)) && (*arg3 <= *arg2 + arg2[1])) {
                iVar3 = fcn.00017f38(apcStack_28[uVar5],arg2,arg3);
                if (iVar3 == 0) {
                    uVar2 = *arg2;
                    *(iVar1 + 0x263b8) = 0;
                    *arg3 = uVar2;
                    fcn.00017ec8(arg3);
                    uVar5 = uVar5 + 1;
                    if (apcStack_28[uVar5] == NULL) {
                        return;
                    }
                }
                uVar4 = *0x263a4;
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < uVar4);
    }
    return;
}


/* fcn.00012a58 @ 0x12a58 */

void fcn.00012a58(void)

{
    char cVar1;
    int64_t arg1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = *0x21cd8;
    if (*0x21cd8 != 0) {
        *(*0x21cd8 + 0x2a8) = 0;
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
        iVar4 = *0x263a4 - 1;
        if (-1 < iVar4) {
            iVar3 = iVar4 * 0x48 + 0x263b0;
            do {
                arg1 = *(iVar3 + 0x20);
                cVar1 = fcn.0001752c(arg1,iVar3);
                if (cVar1 != '\0') {
                    for (; arg1 != 0; arg1 = fcn.00017648(arg1,iVar3)) {
                        fcn.00012830(arg1,iVar3);
                    }
                }
                iVar3 = iVar3 + -0x48;
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
    }
    return;
}


/* fcn.000171d4 @ 0x171d4 */

//WARNING: Removing unreachable block (ram,0x000171ef)

void fcn.000171d4(void)

{
    int64_t iVar1;
    ulong uStackX_8;
    ulong uStackX_10;
    uchar auStackX_18 [16];
    ulong *puVar2;
    
    uStackX_10 = 0;
    *0x21d08 = 0x26048;
    *0x26048 = 0;
    iVar1 = fcn.0001c780();
    if (-1 < iVar1) {
        (**(*0x21d58 + 0xd0))(0x20130,0,0x21e98);
        if (*0x21e98 == 0) {
            (**(*0x21d58 + 0xc0))(0x20130,0x1c724,&uStackX_8);
        }
        uStackX_8 = 0;
        (**(*0x21d58 + 0xc0))(0x20240,0x1c744,&uStackX_8);
    }
    uStackX_8 = CONCAT62(uStackX_8._2_6_,1);
    puVar2 = &uStackX_8;
    fcn.00015ab8(0x20eb0,0x20020,7,2);
    if ((*0x21cc0 == '\0') && (fcn.000159d8(0x20eb0,0x20020), *0x21cc0 == '\0')) {
        fcn.000159d8(0x21180,0x202a0);
    }
    iVar1 = (**(*0x21d58 + 0xe0))(0x18b84,0x20170,0x21d18);
    if (-1 < iVar1) {
        (**(*0x21d58 + 0xc0))(0x201f0,0x17128,auStackX_18);
        (**(*0x21d58 + 0xa8))(&uStackX_10,0x20120,0,0x20880,puVar2);
        (**(*0x21d58 + 0xa8))(&uStackX_10,0x200b0,0,0x205d0);
        (**(*0x21d58 + 0xa8))(&uStackX_10,0x20000,0,0x20830);
        (**(*0x21d58 + 0xa8))(&uStackX_10,0x20190,0,0x20850);
    }
    return;
}


/* fcn.00016a60 @ 0x16a60 */

int64_t fcn.00016a60(int64_t arg1,int64_t arg2)

{
    uint16_t *arg1_00;
    int64_t iVar1;
    uint16_t *puVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *arg2_00;
    uint16_t *puVar6;
    int16_t *piVar7;
    uint32_t uVar8;
    uint16_t *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint16_t uVar12;
    uint16_t **in_R8;
    uint16_t ***in_R9;
    uint16_t uVar13;
    uint16_t *puVar14;
    char cVar15;
    uint16_t *arg2_01;
    uint16_t **arg3;
    uint16_t **ppuStackX_8;
    uint64_t uStackX_10;
    uint16_t *puStackX_18;
    int64_t iStackX_20;
    int64_t var_58h;
    int64_t var_60h;
    
    puVar6 = NULL;
    ppuStackX_8 = arg1;
    uStackX_10 = arg2;
    iStackX_20 = fcn.00019fe8();
    if (iStackX_20 != 0) {
        ppuStackX_8 = 0x8;
        uVar13 = 0;
        puStackX_18 = NULL;
        puVar9 = puVar6;
code_r0x00016ab5:
        uVar8 = puVar9;
        iVar1 = fcn.0001a350(0x20820,&iStackX_20);
        if (-1 < iVar1) {
            if (puStackX_18 == NULL) {
                in_R9 = &ppuStackX_8;
                iVar1 = fcn.000157b8(0x21180,0x202a0,0,in_R9);
                if (iVar1 == -0x7ffffffffffffffb) {
                    in_R9 = NULL;
                    in_R8 = NULL;
                    fcn.00015ab8(0x21180,0x202a0,0,0);
                    goto code_r0x00016c35;
                }
                in_R8 = &puStackX_18;
                iVar1 = (**(*0x21d68 + 0x40))(4,0xc000);
                if (iVar1 < 0) goto code_r0x00016c35;
                puVar9 = uVar8 + 2;
                puVar6 = puStackX_18;
                puStackX_18 = puStackX_18 + 1;
            }
            iVar1 = iStackX_20;
            arg1_00 = puStackX_18;
            arg2_01 = iStackX_20 + 0x18;
            uVar8 = puVar9;
            arg3 = *arg2_01 + 0x12;
            ppuStackX_8 = arg3;
            if (0xc000 < puVar9 + arg3) {
                (**(*0x21d68 + 0x48))(puVar6);
                puVar6 = NULL;
                goto code_r0x00016c35;
            }
            puVar14 = puVar6 + 1;
            uVar12 = 0;
            uStackX_10 = uStackX_10 & 0xffffffffffff0000;
            if (uVar13 != 0) {
                do {
                    puVar2 = iVar1 + 0x2a;
                    for (puVar3 = puVar14 + 9; (*puVar3 != 0 && (*puVar3 == *puVar2)); puVar3 = puVar3 + 1) {
                        puVar2 = puVar2 + 1;
                    }
                    if (*puVar3 == *puVar2) {
                        in_R8 = 0x10;
                        iVar4 = fcn.0001a2d8(puVar14 + 2,iVar1 + 0x1a,0x10);
                        in_R9 = NULL;
                        if (iVar4 == 0) goto code_r0x00016ab5;
                        uVar12 = uStackX_10;
                    }
                    uVar12 = uVar12 + 1;
                    uStackX_10 = CONCAT62(uStackX_10._2_6_,uVar12);
                    puVar14 = puVar14 + *puVar14 + 0x12;
                } while (uVar12 < uVar13);
            }
            in_R9 = NULL;
            fcn.0001fe00(arg1_00,arg2_01,arg3);
            uVar13 = uVar13 + 1;
            puVar9 = uVar8 + ppuStackX_8;
            puStackX_18 = puStackX_18 + ppuStackX_8;
            in_R8 = arg3;
            goto code_r0x00016ab5;
        }
code_r0x00016c35:
        if (puVar6 != NULL) {
            in_R9 = uVar8;
            in_R8 = 0x3;
            *puVar6 = uVar13;
            fcn.00015ab8(0x21180,0x202a0,3,in_R9);
            (**(*0x21d68 + 0x48))(puVar6);
        }
    }
    cVar15 = '\x01';
    uStackX_10 = fcn.00019fe8();
    if (uStackX_10 != 0) {
        arg2_00 = &uStackX_10;
        iVar1 = fcn.0001a350(0x201b0,arg2_00);
        if (iVar1 < 0) {
            uStackX_10 = fcn.00019fe8();
            uVar11 = uStackX_10;
            if (uStackX_10 != 0) {
                arg2_00 = &uStackX_10;
                iVar1 = fcn.0001a350(0x20110,arg2_00);
                uVar11 = uStackX_10;
                if (iVar1 < 0) {
                    uVar11 = 0;
                }
            }
            cVar15 = '\0';
        }
        else {
            uVar11 = uStackX_10;
        }
        if (uVar11 != 0) {
            uVar5 = uVar11 + 0x37;
            uVar10 = uStackX_10;
            do {
                piVar7 = uVar5 & 0xfffffffffffffffc;
                if (piVar7 == NULL) {
                    return uVar10;
                }
                if ((uVar11 + 0x1b + *(uVar11 + 0x28) & 0xfffffffffffffffc) <= piVar7) {
                    return uVar10;
                }
                if (*piVar7 != 0x55aa) {
                    return uVar10;
                }
                if (piVar7[1] == '?') {
                    iVar1 = (-(cVar15 != '\0') & 0x1c) + 0x10;
                    fcn.0001831c(piVar7,CONCAT71(arg2_00 >> 8,cVar15),in_R8,in_R9);
                    in_R9 = *(piVar7 + 6);
                    arg2_00 = iVar1 + piVar7;
                    in_R8 = *(piVar7 + 2);
                    uVar5 = fcn.00015ab8((-(cVar15 != '\0') & 0x1c) + 0x20 + piVar7,arg2_00,in_R8,in_R9);
                    if (uVar5 < 0) {
                        uVar10 = uVar5;
                    }
                }
                arg2_00 = CONCAT71(arg2_00 >> 8,cVar15);
                iVar1 = fcn.0001831c(piVar7,arg2_00,in_R8,in_R9);
                if (cVar15 == '\0') {
                    if ((((piVar7[1] == -1) || (*(piVar7 + 6) == -1)) || (*(piVar7 + 4) == -1)) || (*(piVar7 + 2) == -1)
                       ) goto code_r0x00016db1;
                    uVar5 = *(piVar7 + 6);
                }
                else if (((piVar7[1] == -1) || (*(piVar7 + 0x14) == -1)) ||
                        ((*(piVar7 + 0x12) == -1 || (*(piVar7 + 2) == -1)))) {
code_r0x00016db1:
                    uVar5 = 0;
                }
                else {
                    uVar5 = *(piVar7 + 0x14);
                }
                uVar5 = iVar1 + 3 + uVar5;
            } while( true );
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0001a0c8 @ 0x1a0c8 */

int64_t fcn.0001a0c8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x21d70 == '\0') {
        iVar1 = fcn.0001a040();
        if (-1 < iVar1) {
            iVar1 = (***0x21d90)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x21d78 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x21d78)(*0x21d78,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.00018230 @ 0x18230 */

int fcn.00018230(uint32_t arg1)

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


/* fcn.0001fdae @ 0x1fdae */

int64_t fcn.0001fdae(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011cf4 @ 0x11cf4 */

int64_t fcn.00011cf4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    if ((*0x26690 != 0) && (CONCAT44(in_register_0000000c,arg1) <= *0x26698 / 3)) {
        do {
            if ((*0x21ce0 >> (uVar2 & 0x1f) & 1) == 0) {
                *0x21ce0 = *0x21ce0 | 1 << (uVar2 & 0x1f);
                return uVar2 * (*0x26698 / 3) + *0x26690;
            }
            uVar1 = uVar2 + 1;
            uVar2 = uVar1;
        } while (uVar1 < 3);
    }
    return 0;
}


/* fcn.00011ca4 @ 0x11ca4 */

bool fcn.00011ca4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    bool bVar2;
    
    if (arg3 == 0) {
        bVar2 = true;
    }
    else {
        iVar1 = (**(arg1 + 0x10))(arg2,arg3,arg4);
        bVar2 = -1 < iVar1;
        if ((*0x21cc1 == '\0') && (!bVar2)) {
            fcn.0001a0c8(0x80000002,0x51008);
        }
    }
    return bVar2;
}


/* fcn.00011d4c @ 0x11d4c */

void fcn.00011d4c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    do {
        if (CONCAT44(in_register_0000000c,arg1) == uVar2 * (*0x26698 / 3) + *0x26690) {
            *0x21ce0 = *0x21ce0 & ~(1 << (uVar2 & 0x1f));
            return;
        }
        uVar1 = uVar2 + 1;
        uVar2 = uVar1;
    } while (uVar1 < 3);
    return;
}


/* fcn.00011d90 @ 0x11d90 */

char fcn.00011d90(int64_t arg1,int64_t arg2,int64_t arg3)

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
       (((arg4 = fcn.00011cf4(arg3_01 + arg3_00,arg2), arg4 == 0 ||
         (iVar1 = (**arg1)(arg2_01,arg3_00,arg4), iVar1 < 0)) ||
        (iVar1 = (**arg1)(arg2_00,arg3_01,arg4 + arg3_00), iVar1 < 0)))) {
        return '\0';
    }
    iVar1 = (**(arg1 + 8))(arg2);
    cVar2 = -1 < iVar1;
    if (cVar2) {
        if (arg3_00 != 0) {
            cVar2 = fcn.00011ca4(arg1,arg2_01,arg3_00,arg4);
            arg3 = arg2_01;
        }
        if ((cVar2 != '\0') && (arg3_01 != 0)) {
            cVar2 = fcn.00011ca4(arg1,arg2_00,arg3_01,arg4 + arg3_00);
            arg3 = arg2_00;
        }
    }
    if (arg4 != 0) {
        fcn.00011d4c(arg4,arg3);
    }
    if (cVar2 == '\0') {
        fcn.0001a0c8(0x80000002,0x51008);
    }
    return cVar2;
}


/* fcn.0001828c @ 0x1828c */

uint8_t fcn.0001828c(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t *puVar3;
    
    uVar1 = fcn.00018230(arg1);
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


/* fcn.00012140 @ 0x12140 */

uint8_t fcn.00012140(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000182c4 @ 0x182c4 */

uint8_t fcn.000182c4(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000140b4 @ 0x140b4 */

ulong fcn.000140b4(int64_t arg1,uint32_t *arg2)

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
        uVar2 = fcn.00018230(iVar1);
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


/* fcn.0001752c @ 0x1752c */

uchar fcn.0001752c(uint32_t arg1,int64_t arg2)

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
        cVar2 = fcn.0001741c(arg1);
        if (cVar2 == '\0') {
            return 1;
        }
    }
    return 0;
}


/* fcn.0001782c @ 0x1782c */

uint64_t fcn.0001782c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

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
        if ((*puVar5 != *puVar3) || (iVar2 < 1)) goto code_r0x00017922;
        puVar5 = puVar5 + 1;
    }
    else {
        for (; ((*puVar5 != 0 && (*puVar5 == *puVar3)) && (0 < iVar2)); iVar2 = iVar2 + -1) {
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
        }
        uVar1 = 0;
        if ((*puVar5 != *puVar3) || (iVar2 < 1)) goto code_r0x00017922;
        puVar5 = puVar5 + 1;
    }
    uVar1 = fcn.0001a2d8(arg1_00,arg3,0x10);
    if (uVar1 == 0) {
        if (arg4 != 0) {
            *arg4 = puVar5 - puVar4;
        }
        return 1;
    }
code_r0x00017922:
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.000173bc @ 0x173bc */

int64_t fcn.000173bc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = 0;
    while( true ) {
        iVar2 = arg1;
        cVar1 = fcn.0001752c(iVar2,arg2);
        if (cVar1 == '\0') {
            return iVar3;
        }
        if ((*(iVar2 + 6) & 0xffffff) == 0xffffff) break;
        arg1 = iVar2 + (*(iVar2 + 6) & 0xffffff);
        iVar3 = iVar2;
    }
    return iVar2;
}


/* fcn.000124b8 @ 0x124b8 */

int64_t fcn.000124b8(int64_t arg1,int64_t arg2)

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
            return *0x21cd8 + 0x270;
        }
        uVar2 = iVar1 - 0x61;
    }
    return *0x21cd8 + uVar2 * 0x18;
}


/* fcn.000176c8 @ 0x176c8 */

uint64_t fcn.000176c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        uVar4 = fcn.0001a2d8(arg1_00,arg2_00,0x10);
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
                if (*pcVar6 != *pcVar7) goto code_r0x000177fa;
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
code_r0x000177fa:
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.000126b8 @ 0x126b8 */

void fcn.000126b8(int64_t arg1,int64_t arg2)

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
    if (*0x21cd8 != 0) {
        iVar7 = *0x21cd8;
        piVar4 = fcn.000124b8(arg1,arg2);
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
            *(puVar8 + 4) = (arg2 + -0x263b0) / 0x48;
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


/* fcn.0001251c @ 0x1251c */

int64_t * fcn.0001251c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        puVar9 = *0x21cd8 + uVar4 * 0x18;
    }
    else {
        puVar9 = *0x21cd8 + 0x270;
    }
    uVar8 = 0;
    bVar2 = false;
    piVar11 = puVar9[1];
    uVar12 = uVar8;
    if (puVar9[1] == NULL) {
code_r0x0001268f:
        if (*puVar9 <= uVar12) goto code_r0x0001269a;
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
                cVar3 = fcn.0001752c(piVar10[2],*(piVar10 + 4) * 0x48 + 0x263b0);
                if (cVar3 == '\0') {
                    bVar2 = true;
                }
                else {
                    cVar3 = fcn.0001782c(piVar10[2],arg1,arg2,arg3);
                    piVar11 = piVar10;
                    if (cVar3 != '\0') break;
                }
            }
            piVar11 = *piVar10;
            uVar12 = uVar12 + 1;
        } while (piVar11 != NULL);
        if (piVar11 != NULL) {
            iVar6 = (*(piVar10 + 4) * 9 + 2) * 8 + 0x263a0;
            arg1_00 = piVar10[3];
            *arg4 = iVar6;
            if (arg1_00 == 0) {
                arg1_00 = piVar10[2];
            }
            iVar6 = fcn.000173bc(arg1_00,iVar6);
            piVar10[3] = iVar6;
            return piVar10;
        }
        if (!bVar2) goto code_r0x0001268f;
    }
    uVar8 = 1;
code_r0x0001269a:
    *in_stack_00000028 = uVar8;
    return NULL;
}


/* fcn.00017940 @ 0x17940 */

int64_t fcn.00017940(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t arg1_00;
    
    arg1_00 = fcn.00017678(arg4);
    while( true ) {
        if (arg1_00 == 0) {
            return 0;
        }
        cVar1 = fcn.0001782c(arg1_00,arg1,arg2,arg3);
        if (cVar1 != '\0') break;
        arg1_00 = fcn.00017648(arg1_00,arg4);
    }
    return arg1_00;
}


/* fcn.000128fc @ 0x128fc */

void fcn.000128fc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    if (arg1 != 0) {
        piVar2 = fcn.000124b8(*(arg1 + 0x10),arg2);
        iVar1 = *0x21cd8;
        if (*0x21cd8 != 0) {
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


/* fcn.00012830 @ 0x12830 */

void fcn.00012830(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    char cVar2;
    int64_t iVar3;
    
    if (*0x21cd8 != 0) {
        iVar3 = fcn.000124b8(arg1,arg2);
        for (puVar1 = *(iVar3 + 8); puVar1 != NULL; puVar1 = *puVar1) {
            iVar3 = *(puVar1 + 4) * 0x48 + 0x263b0;
            cVar2 = fcn.0001752c(puVar1[2],iVar3);
            if ((cVar2 != '\0') && (cVar2 = fcn.000176c8(puVar1[2],iVar3,arg1,arg2), cVar2 != '\0')) {
                puVar1[2] = arg1;
                puVar1[3] = 0;
                *(puVar1 + 4) = (arg2 + -0x263b0) / 0x48;
                return;
            }
        }
        fcn.000126b8(arg1,arg2);
    }
    return;
}


/* fcn.00017648 @ 0x17648 */

void fcn.00017648(int64_t noname_0,int64_t arg1)

{
    do {
        noname_0 = fcn.000175cc(noname_0,arg1);
        if (noname_0 == 0) {
            return;
        }
    } while ((-1 < *(noname_0 + 9)) || ((*(noname_0 + 6) & 0x8000000) != 0));
    return;
}


/* fcn.0001a2d8 @ 0x1a2d8 */

int64_t fcn.0001a2d8(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00012d78 @ 0x12d78 */

void fcn.00012d78(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int *piVar1;
    uint in_register_00000014;
    int *piVar2;
    uint in_R8;
    
    piVar1 = CONCAT44(in_register_00000014,arg2);
    piVar2 = *(arg1 + 0x18);
    if (piVar1 != piVar2) {
        if (*(piVar2 + 1) == CONCAT44(in_R8,arg3)) {
            if ((*piVar2 == 0x5241564e) && (piVar1 = fcn.000173bc(arg4,arg1), piVar1 != piVar2)) {
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


/* fcn.000174ac @ 0x174ac */

int64_t fcn.000174ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar1 = fcn.000173bc(arg1,arg4);
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


/* fcn.00017afc @ 0x17afc */

ulong fcn.00017afc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        arg1_00 = fcn.00017940(arg1,arg2,&iStackX_10,in_stack_00000030);
        if ((in_stack_00000038 != NULL) && (arg1_00 != 0)) {
            *in_stack_00000038 = arg1_00;
        }
        uVar1 = fcn.00017a40(arg1_00,iStackX_10,arg3,arg4);
    }
    return uVar1;
}


/* fcn.00012df8 @ 0x12df8 */

void fcn.00012df8(int64_t arg1,int64_t arg2,int64_t arg3)

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
            iVar1 = fcn.000173bc(arg1,arg2);
            puVar2 = iVar1 + -2 + *(iVar1 + 4);
            *(arg3 + 8) = *(puVar2 + (3 - *puVar2));
            puVar2 = arg1 + -2 + *(arg1 + 4);
            fcn.0001fe00(arg3 + 0x10,puVar2 + (0xb - *puVar2),0x20);
        }
    }
    return;
}


/* fcn.00012e90 @ 0x12e90 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00012e90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                     int64_t arg_70h,int64_t arg_78h,int64_t arg_80h,int64_t arg_88h)

{
    int16_t iVar1;
    char cVar2;
    char cVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int16_t *piVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t arg3_00;
    int16_t *arg2_00;
    int64_t iVar11;
    int64_t in_stack_00000028;
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
            iVar5 = fcn.0001a2d8(uVar9,arg2,0x10);
            if (iVar5 == 0) break;
            aiStack_84[0] = iVar1 + 1;
            uVar9 = uVar9 - 0x10;
        } while (uVar4 < uVar9);
    }
    arg2_00 = _var_48h;
    puVar10 = puStack_60;
    if (((in_stack_00000038 == 0) || ((*(in_stack_00000038 + 6) & 0x4000000) == 0)) &&
       ((in_stack_00000030[5] < 0x100 || (aiStack_84[0] < in_stack_00000030[5])))) {
        iVar5 = stack0xffffffffffffffb8 + 1;
        uVar8 = uStack_70;
    }
    else {
        uStack_7a = uStack_70 | 0x4000000;
        iVar5 = stack0xffffffffffffffb8 + 0x10;
        uVar8 = uStack_7a;
    }
    iVar1 = *_var_48h;
    piVar7 = _var_48h;
    while ((iVar1 != 0 && (*(piVar7 + 1) == '\0'))) {
        piVar7 = piVar7 + 1;
        iVar1 = *piVar7;
    }
    if (*piVar7 == 0) {
        uStack_7a = uVar8 | 0x2000000;
        iVar6 = piVar7 - _var_48h >> 1;
        iVar5 = iVar5 + 1;
    }
    else {
        do {
            iVar1 = *piVar7;
            piVar7 = piVar7 + 1;
        } while (iVar1 != 0);
        iVar6 = piVar7 - _var_48h;
    }
    if (iStack_68 + arg4 <= -(iVar5 + iVar6) - 1U) {
        iVar11 = iVar5 + iVar6 + iStack_68 + arg4;
        iVar5 = in_stack_00000030[3];
        iVar6 = iVar11;
        if (aiStack_84[0] == in_stack_00000030[5]) {
            iVar6 = iVar11 + 0x10;
        }
        if (iVar6 + iVar5 <= *in_stack_00000030 + (in_stack_00000030[5] + 1) * -0x10 + -10 + in_stack_00000030[1]) {
            uStack_7c = iVar11;
            cVar2 = (**puStack_60)(puStack_60,*in_stack_00000030);
            cVar3 = '\0';
            if (cVar2 != '\0') {
                fcn.0001fe00(iVar5,&uStack_80,10);
                iVar5 = iVar5 + 10;
                if ((uStack_7a & 0x4000000) == 0) {
                    if (aiStack_84[0] == in_stack_00000030[5]) {
                        cVar2 = (*puVar10[3])(puVar10,in_stack_00000030[2] + in_stack_00000030[5] * -0x10,0x10,arg2);
                        *(in_stack_00000030 + 5) = in_stack_00000030[5] + 1;
                        if (cVar2 == '\0') {
                            fcn.0001fdae(in_stack_00000030[3],iVar5 - in_stack_00000030[3],0xff);
                            cVar3 = '\0';
                            goto code_r0x0001329c;
                        }
                    }
                    arg3_00 = 1;
                    arg2 = aiStack_84;
                }
                fcn.0001fe00(iVar5,arg2,arg3_00);
                iVar5 = iVar5 + arg3_00;
                if ((uStack_7a & 0x2000000) == 0) {
                    while ((*arg2_00 != 0 && (cVar2 != '\0'))) {
                        fcn.0001fe00(iVar5,arg2_00,2);
                        arg2_00 = arg2_00 + 1;
                        iVar5 = iVar5 + 2;
                    }
                    fcn.0001fe00(iVar5,arg2_00,2);
                    iVar5 = iVar5 + 2;
                }
                else {
                    if (*arg2_00 != 0) {
                        do {
                            if (cVar2 == '\0') break;
                            fcn.0001fe00(iVar5,arg2_00,1);
                            arg2_00 = arg2_00 + 1;
                            iVar5 = iVar5 + 1;
                        } while (*arg2_00 != 0);
                        puVar10 = puStack_60;
                    }
                    fcn.0001fe00(iVar5,arg2_00,1);
                    iVar5 = iVar5 + 1;
                }
                if ((arg3 & 0x40U) != 0) {
                    fcn.0001fe00(iVar5,_var_50h_2,var_58h);
                    iVar5 = iVar5 + var_58h;
                }
                fcn.0001fe00(iVar5,in_stack_00000028,arg4);
                iVar5 = iVar5 + arg4;
                if (uStack_6c != 0) {
                    fcn.0001fe00(iVar5,auStack_88,1);
                    fcn.0001fe00(iVar5 + 1,var_48h_2 + 8,8);
                    fcn.0001fe00(iVar5 + 9,var_48h_2 + 0x10,0x20);
                    iVar5 = in_stack_00000030[3] + -2 + iVar11;
                    fcn.0001fe00(iVar5,&iStack_68,2);
                }
                cVar2 = (*puVar10[3])(puVar10,in_stack_00000030[3],uStack_7c,in_stack_00000030[3]);
                cVar3 = '\0';
                if (cVar2 != '\0') {
                    cVar3 = (*puVar10[3])(puVar10,in_stack_00000030[3],4,str.NVARx);
                }
            }
code_r0x0001329c:
            (*puVar10[1])(puVar10,*in_stack_00000030,in_stack_00000030[1]);
            if (cVar3 == '\0') {
                fcn.00012d78(in_stack_00000030,iVar5,iVar11,in_stack_00000030[3]);
            }
            else {
                in_stack_00000030[3] = in_stack_00000030[3] + iVar11;
                *(in_stack_00000030 + 0x2a) = iVar11;
            }
            return ~-(cVar3 != '\0') & 0x8000000000000007;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00013854 @ 0x13854 */

int64_t fcn.00013854(int64_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00018e2c @ 0x18e2c */

int64_t fcn.00018e2c(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00013a40 @ 0x13a40 */

uint64_t fcn.00013a40(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char16_t *pcVar2;
    char16_t *pcVar3;
    char16_t cVar4;
    char16_t cVar5;
    
    uVar1 = fcn.0001a2d8(arg2,0x21298,0x10);
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
            if (*arg1 != *pcVar3) goto code_r0x00013aca;
        }
        uVar1 = CONCAT71(uVar1 >> 8,1);
    }
    else {
code_r0x00013aca:
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    return uVar1;
}


/* fcn.000139e0 @ 0x139e0 */

ulong fcn.000139e0(uint32_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000137a4 @ 0x137a4 */

uint64_t fcn.000137a4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint16_t *puVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (((arg2 != 0) && (arg3 != 0)) && (*piVar2 != 0)) {
        do {
            *0x20 = fcn.0001a2d8(piVar2 + 8,arg3,0x10);
            if (*0x20 == NULL) {
                *0x20 = *piVar2;
                if ((**0x20 == 0x2a) && (*(*0x20 + 2) == 0)) {
code_r0x0001384f:
                    return CONCAT71(*0x20 >> 8,1);
                }
                puVar3 = arg2;
                for (; (**0x20 != 0 && (**0x20 == *puVar3)); *0x20 = *0x20 + 2) {
                    puVar3 = puVar3 + 1;
                }
                uVar1 = **0x20;
                *0x20 = *puVar3;
                if (uVar1 == *puVar3) goto code_r0x0001384f;
            }
            piVar2 = piVar2 + 3;
        } while (*piVar2 != 0);
    }
    return *0x20 & 0xffffffffffffff00;
}


/* fcn.00018fe8 @ 0x18fe8 */

void fcn.00018fe8(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001904c(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001904c @ 0x1904c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001904c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000190ab;
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
code_r0x000190ab:
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
        uVar5 = fcn.00018e68(arg4,0xf4241);
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
            pcVar9 = 0x2136c;
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
code_r0x0001946e:
                iVar4 = puVar22[1] << 8;
                puVar23 = puStackX_20;
                puStackX_20 = puVar22;
            }
code_r0x00019476:
            uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
            if (uStack_a8 == 10) {
                pcVar9 = 0x2136c;
                puVar23 = puStackX_20;
            }
            else {
                pcVar9 = 0x21370;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar17 = puStack_b0;
            puVar19 = in_stack_00000028;
            puVar23 = puStackX_20;
code_r0x0001921b:
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
                        if (uStack_a8 < 0x31) goto code_r0x000193d5;
                        if (0x39 < uStack_a8) {
                            if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                uVar5 = uVar5 | 0x10;
                                goto code_r0x000193be;
                            }
                            goto code_r0x000193d5;
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
                    goto code_r0x0001921b;
                }
                uVar5 = uVar5 | 0x800;
code_r0x000193be:
                puVar23 = puStackX_20;
                uStackX_18 = uVar5;
                goto code_r0x0001921b;
            }
            if (uStack_a8 == 0x2d) {
                uVar5 = uVar5 | 1;
                goto code_r0x000193be;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar5 = uVar5 | 4;
                    goto code_r0x000193be;
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
                    goto code_r0x0001921b;
                }
                if (uStack_a8 != 0x2b) {
                    if (uStack_a8 == 0x2c) {
                        uVar5 = uVar5 | 8;
                        goto code_r0x000193be;
                    }
                    goto code_r0x000193d5;
                }
                uVar5 = uVar5 | 2;
                goto code_r0x000193be;
            }
            uVar20 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar23;
code_r0x000193d5:
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
                        fcn.00019dbc(&var_68h_2,0x26,0,0x21300);
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
                            if (var_78h != 1) goto code_r0x0001946e;
                            iVar4 = 0;
                            puStackX_20 = puVar22;
                            goto code_r0x00019476;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001966d;
                        if (uStack_a8 == 0x58) goto code_r0x00019762;
                        if (uStack_a8 == 0x61) goto code_r0x00019676;
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
                            goto code_r0x00019200;
                        }
                        if (uStack_a8 != 100) goto code_r0x000191fc;
                        goto code_r0x00019779;
                    }
                    puVar23 = puStackX_20 + var_78h;
                    pcVar9 = 0x2136c;
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
                goto code_r0x0001998d;
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
                            iVar14 = 0x2140b;
                            goto code_r0x00019729;
                        }
                    }
                    else if (uVar11 < 6) {
                        iVar14 = uVar11 * 0x19;
                        pcVar9 = "Success";
code_r0x00019729:
                        pcVar9 = pcVar9 + iVar14;
                        if (pcVar9 != &var_68h_2) goto code_r0x0001998d;
                    }
                    fcn.00019dbc(&var_68h_2,0x26,0,0x21364);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001966d:
                        uVar5 = uVar5 | 0x400;
                        uStackX_18 = uVar5;
code_r0x00019676:
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
                        goto code_r0x0001998d;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000191fc;
                            goto code_r0x00019766;
                        }
                        goto code_r0x0001976b;
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
                        goto code_r0x0001998d;
                    }
                    fcn.00019dbc(&var_68h_2,0x26,0,0x21348);
                    pcVar9 = &var_68h_2;
                }
                uVar6 = uStack_c0;
                goto code_r0x0001998d;
            }
            uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00019762:
            uVar5 = uVar5 | 0x20;
code_r0x00019766:
            uVar5 = uVar5 | 0x80;
code_r0x0001976b:
            if (-1 < uVar5) {
                uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00019779:
            if ((uVar5 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar6 = *puVar17;
                    goto code_r0x000197bb;
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
code_r0x000197bb:
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
code_r0x00019843:
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
                    if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00019843;
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
code_r0x000191fc:
            pcVar9 = &uStack_a8;
code_r0x00019200:
            uVar5 = uVar5 | 0x400;
            uStackX_18 = uVar5;
            puVar23 = puStackX_20;
        }
code_r0x0001998d:
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
                arg1 = fcn.00019018(arg1,pcStack_d8,uStack_a0 - uVar20,0x20);
            }
        }
        if (cVar18 == '\0') {
            uVar7 = uVar13;
            uStack_d0 = uStack_d0 + (uVar20 - uVar6) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00019018(arg1,pcVar15,uVar20 - uVar6,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00019018(arg1,pcStack_d8,uVar20 - uVar6,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00019018(arg1,pcStack_d8,uStack_a0 - uVar20,0x20);
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


/* fcn.00017e44 @ 0x17e44 */

void fcn.00017e44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_10;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00017d40(arg2,arg3,arg4,0);
    }
    if (-1 < iVar1) {
        fcn.00017b94(iStackX_10,arg2,arg1,arg3);
    }
    return;
}


/* fcn.000135fc @ 0x135fc */

int64_t fcn.000135fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        iVar1 = fcn.00017afc(arg1,arg2,0,&stack0xffffffffffffff98);
    }
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar4 = -0x7fffffffffffffec;
    }
    else {
        iVar1 = *(arg3 + 8);
        arg_60h = iVar1;
        iVar2 = fcn.00011cf4(iVar1,iVar3);
        if (iVar2 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            if (arg1 != 0) {
                iVar3 = arg2;
                iVar1 = arg_60h;
                iVar4 = fcn.00017afc(arg1,arg2,auStackX_8,&stack0xffffffffffffff98);
                arg_60h = iVar1;
            }
            if (iVar4 < 0) {
                fcn.00011d4c(iVar2,iVar3);
            }
            else {
                if (in_stack_ffffffffffffffa0 != 0) {
                    fcn.00012df8(in_stack_ffffffffffffffa0,arg3,&stack0xffffffffffffffa8);
                }
                iVar4 = fcn.00012e90(arg1,arg2,auStackX_8[0],iVar1,arg_60h,in_stack_ffffffffffffffa0,
                                     CONCAT71(in_stack_ffffffffffffffa9,uVar5),arg_78h,CONCAT71(Var7,uVar6),
                                     CONCAT71(Var9,uVar8));
                fcn.00011d4c(iVar2,arg2);
            }
        }
    }
    return iVar4;
}


/* fcn.00015bb8 @ 0x15bb8 */

ulong fcn.00015bb8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    ulong uVar1;
    uint uVar2;
    
    uVar2 = arg3;
    arg1_00 = fcn.00011cf4(arg2,arg2);
    *arg1 = arg1_00;
    if (arg1_00 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        *(arg1 + 8) = arg2;
        fcn.0001fdae(arg1_00,arg2,CONCAT44(arg3 >> 0x20,CONCAT31(arg3 >> 8,0xff)));
        *(arg1 + 0x38) = arg4;
        *(arg1 + 0x40) = 0x20430;
        *(arg1 + 0x3c) = uVar2;
        fcn.00017ec8(arg1);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00013ec8 @ 0x13ec8 */

int64_t fcn.00013ec8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    arg2_00 = fcn.00011cf4(uVar1,arg2);
    if (arg2_00 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *arg2_00 = 0;
        arg2_01 = arg2_00;
        uStackX_8 = uVar1;
        iVar3 = fcn.00017e44(&uStackX_8,arg2_00,auStack_38,arg1);
        while (-1 < iVar3) {
            if ((arg3 == 0) || (cVar2 = (*arg3)(arg4,arg2_00,auStack_38), cVar2 != '\0')) {
                arg2_01 = auStack_38;
                iVar3 = fcn.000135fc(arg2_00,arg2_01,arg1,arg2);
                if ((iVar3 < 0) && ((iVar3 != -0x7ffffffffffffff2 && (iVar3 != -0x7fffffffffffffec))))
                goto code_r0x0001400f;
            }
            arg2_01 = arg2_00;
            uStackX_8 = uVar1;
            iVar3 = fcn.00017e44(&uStackX_8,arg2_00,auStack_38,arg1);
        }
        if ((iVar3 == -0x7ffffffffffffff2) || (iVar3 == -0x7fffffffffffffec)) {
            iVar3 = 0;
        }
        if ((-1 < iVar3) && (in_stack_00000028 != NULL)) {
            arg2_01 = 0x13d08;
            *0x21cc8 = arg1;
            *0x21cf8 = arg2;
            iVar3 = (*in_stack_00000028)(0x13cbc);
            *0x21cc8 = 0;
            *0x21cf8 = 0;
        }
code_r0x0001400f:
        fcn.00011d4c(arg2_00,arg2_01);
    }
    return iVar3;
}


/* fcn.0001410c @ 0x1410c */

ulong fcn.0001410c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uchar *puVar4;
    
    iVar1 = fcn.00018230(arg1);
    if ((iVar1 == 0) || (*(arg1 + 0x20) != arg2)) {
        if (arg3 != '\0') {
            *(arg1 + 0x28) = 0x4856465f;
            *(arg1 + 0x30) = 0x48;
            *(arg1 + 0x34) = 0;
            *(arg1 + 0x20) = arg2;
            uVar2 = fcn.00018230(arg1);
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


/* fcn.00018374 @ 0x18374 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00018374(int64_t arg1,int64_t arg2)

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
        iVar2 = (**(*0x21d68 + 0x138))(2,0x20140,0,&uStackX_18,&iStack_30);
        if ((-1 < iVar2) && (uVar3 = 0, uStackX_18 != 0)) {
            do {
                iVar2 = (**(*0x21d68 + 0x98))(*(iStack_30 + uVar3 * 8),0x20140,&var_bp_20h);
                if (-1 < iVar2) {
                    var_28h = 0;
                    uStack_38 = 0;
                    iVar2 = (**(var_bp_20h + 0x18))(var_bp_20h,0x208a0,0x19,0,&var_28h,&uStack_38,auStackX_10);
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


/* fcn.00017f38 @ 0x17f38 */

int64_t fcn.00017f38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = fcn.00017940(arg1,0x21298,&iStackX_20,arg2);
    if (iVar1 != 0) {
        iVar1 = fcn.000174ac(iVar1,iStackX_20,arg3 + 8,arg2);
        *arg3 = iVar1;
        if (iVar1 != 0) {
            *(arg3 + 0x3c) = 0;
            *(arg3 + 0x40) = 0;
            *(arg3 + 0x38) = 7;
            fcn.00017ec8(arg3);
            return arg3;
        }
    }
    return 0;
}


/* fcn.00012b38 @ 0x12b38 */

ulong fcn.00012b38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    if (*0x21cd8 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.0001251c(arg1,arg2,&uStack_50,aiStack_48);
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
    uVar3 = *0x263a4;
    if (uVar5 < *0x263a4) {
        do {
            iVar1 = uVar5 * 0x48;
            arg4_00 = iVar1 + 0x263b0;
            if (((*(iVar1 + 0x263e8) & 2) == 0) || (!bVar6)) {
                arg1_00 = fcn.00017940(arg1,arg2,&uStack_50,arg4_00);
                if (arg1_00 != 0) {
                    iVar2 = 0;
                    if (bVar6) {
code_r0x00012d09:
                        *in_stack_00000038 = arg1_00;
                        if (in_stack_00000040 != NULL) {
                            if (iVar2 == 0) {
                                iVar2 = fcn.000173bc(arg1_00,arg4_00);
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
                        iVar2 = fcn.000173bc(arg1_00,arg4_00);
                        *in_stack_00000028 = iVar2;
                    }
                    if (in_stack_00000038 == NULL) {
                        return 1;
                    }
                    if ((*(iVar1 + 0x263e8) & 2) == 0) goto code_r0x00012d09;
                }
                uVar3 = *0x263a4;
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


/* fcn.00017a40 @ 0x17a40 */

ulong fcn.00017a40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    char cVar2;
    int64_t arg2_00;
    uint64_t uStackX_8;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    if ((arg1 == 0) || (cVar2 = fcn.0001752c(arg1,in_stack_00000030), cVar2 == '\0')) {
        return 0x800000000000000e;
    }
    if (arg3 != 0) {
        fcn.000179c0(arg1,in_stack_00000030,arg3);
    }
    arg2_00 = fcn.000174ac(arg1,arg2,&uStackX_8,in_stack_00000030);
    if (arg2_00 == 0) {
        return 0x8000000000000015;
    }
    uVar1 = *arg4;
    *arg4 = uStackX_8;
    if (uVar1 < uStackX_8) {
        return 0x8000000000000005;
    }
    fcn.0001fe00(in_stack_00000028,arg2_00,uStackX_8);
    return 0;
}


/* fcn.000179c0 @ 0x179c0 */

ulong fcn.000179c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000138c4 @ 0x138c4 */

uint64_t fcn.000138c4(int64_t arg1,int64_t arg2)

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
    
    uVar4 = fcn.00013854(0x205e0,arg1,arg2);
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
                if (*0x203d0 != NULL) {
                    piVar6 = *0x203d0;
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
                        if (((uVar5 + 1 == uVar4) && (iVar7 = fcn.00018e2c(piVar6,arg1,iVar11), iVar7 == 0)) &&
                           (*(uVar10 + 0x203d8) == arg2)) {
                            piVar6 = arg1 + iVar11 * 2;
                            uVar4 = 0;
                            if (piVar6 != NULL) goto code_r0x000139d2;
                            break;
                        }
                        uVar8 = uVar9 + 1;
                        uVar9 = uVar8;
                        uVar10 = uVar8 * 0x10;
                        piVar6 = *(uVar10 + 0x203d0);
                        uVar4 = 0;
                    } while (piVar6 != NULL);
                }
            }
        }
code_r0x0001398b:
        return CONCAT71(uVar4 >> 8,1);
    }
code_r0x000138fa:
    return uVar4 & 0xffffffffffffff00;
code_r0x000139d2:
    if (*piVar6 == 0) goto code_r0x000139da;
    uVar3 = *piVar6 - 0x30;
    uVar4 = uVar3;
    if ((0x36 < uVar3) || (uVar4 = uVar3, (0x7e0000007e03ffU >> (uVar4 & 0x3f) & 1) == 0)) goto code_r0x0001398b;
    piVar6 = piVar6 + 1;
    goto code_r0x000139d2;
code_r0x000139da:
    uVar4 = 0;
    goto code_r0x000138fa;
}


/* fcn.0001ab98 @ 0x1ab98 */

int64_t fcn.0001ab98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong in_stack_00000028;
    int in_stack_00000030;
    
    if (*0x21de8 != '\0') {
        piVar1 = fcn.0001a6b4(arg1,arg2,CONCAT71(arg3 >> 8,1));
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
        if (*0x21df8 != 0) {
            do {
                iVar2 = (**(*0x21df0 + uVar3 * 8))(arg1,arg2,arg3 & 0xffffffff,arg4,in_stack_00000028);
                if (((iVar2 != -0x7ffffffffffffff8) || (in_stack_00000030 != 2)) && (iVar2 < 0)) {
                    return iVar2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *0x21df8);
        }
    }
    return 0;
}


/* fcn.00014b68 @ 0x14b68 */

int64_t fcn.00014b68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    uint32_t arg1_00;
    uint32_t arg3_00;
    int64_t in_stack_00000028;
    
    iVar5 = 0;
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
    if ((*0x21cc1 != '\0') && (arg3_00 != 0)) {
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
        iVar3 = fcn.0001a2d8(arg1_00,0x20020,0x10);
        if (iVar3 == 0) {
            cVar1 = fcn.000138c4(arg1,arg3_00);
        }
        else {
            iVar3 = fcn.0001a2d8(arg1_00,0x20090,0x10);
            if (iVar3 != 0) {
                if ((arg3 & 8U) != 0) {
                    iVar3 = fcn.0001a2d8(arg1_00,0x20080,0x10);
                    if (iVar3 != 0) {
                        return -0x7ffffffffffffffe;
                    }
                    piVar4 = arg1;
                    do {
                        piVar4 = piVar4 + 1;
                        iVar5 = iVar5 + 1;
                    } while (*piVar4 != 0);
                    if (iVar5 != 0xc) {
                        return -0x7ffffffffffffffe;
                    }
                    iVar5 = fcn.0001a2d8(arg1,0x21160,0x10);
                    if (iVar5 != 0) {
                        return -0x7ffffffffffffffe;
                    }
                    piVar4 = arg1 + 0x10;
                    if (piVar4 == NULL) {
                        return -0x7ffffffffffffffe;
                    }
                    for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
                        uVar2 = *piVar4 - 0x30;
                        if (0x36 < uVar2) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((0x7e0000007e03ffU >> (uVar2 & 0x3f) & 1) == 0) {
                            return -0x7ffffffffffffffe;
                        }
                    }
                }
                goto code_r0x00014d20;
            }
            cVar1 = fcn.00013854(0x202e0,arg1,arg3_00);
        }
        if (cVar1 != '\0') {
            return -0x7ffffffffffffffe;
        }
    }
code_r0x00014d20:
    if ((arg3_00 & 0x10) != 0) {
        arg4 = (arg4 - *(in_stack_00000028 + 0x10)) + -0x10;
    }
    iVar5 = fcn.0001ab98(arg1,arg2,arg3_00,arg4);
    if ((iVar5 < 0) && (iVar5 != -0x7ffffffffffffffa)) {
        return iVar5;
    }
    return 0;
}


/* fcn.000148b4 @ 0x148b4 */

int64_t fcn.000148b4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t *arg2_00;
    code *arg3;
    ulong in_R9;
    bool bVar3;
    int64_t aiStack_58 [10];
    
    if ((arg1 == 0) || (iVar2 = *(arg1 + 0x40), iVar2 == 0)) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        iVar1 = (**(iVar2 + 0x38))(iVar2,*arg1);
        if (iVar1 < 0) {
            iVar2 = fcn.00015bb8(aiStack_58,*(arg1 + 8),*(arg1 + 0x3c),CONCAT71(in_R9 >> 8,*(arg1 + 0x38)));
            if (-1 < iVar2) {
                fcn.0001fe00(aiStack_58[0],*arg1,*(arg1 + 8));
                fcn.00017ec8(aiStack_58);
                fcn.00015c30(aiStack_58);
                arg2 = *arg1;
                iVar2 = (**(*(arg1 + 0x40) + 0x40))(*(arg1 + 0x40),arg2,*(arg1 + 8),0,arg1 + 0x3c);
                if (iVar2 < 0) {
                    fcn.00011d4c(aiStack_58[0],arg2);
                }
                else {
                    bVar3 = iVar2 != 3;
                    fcn.00017ec8(arg1);
                    fcn.00015c30(arg1);
                    if (bVar3 && iVar1 == -0x7ffffffffffffff3) {
                        iVar2 = 0x20360;
                        arg3 = fcn.000139e0;
                    }
                    else {
                        iVar2 = 0;
                        arg3 = NULL;
                    }
                    arg2_00 = arg1;
                    iVar2 = fcn.00013ec8(aiStack_58,arg1,arg3,iVar2);
                    if (iVar2 < 0) {
                        arg2_00 = aiStack_58;
                        iVar2 = fcn.000144c8(arg1,arg2_00);
                    }
                    fcn.00011d4c(aiStack_58[0],arg2_00);
                    if (-1 < iVar2) {
                        *0x263a8 = 0;
                        if (arg1 == *0x26680) {
                            fcn.00015d0c();
                        }
                        fcn.00012a58();
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


/* fcn.00014848 @ 0x14848 */

uchar fcn.00014848(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t arg2_00;
    uchar uVar2;
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if ((*(arg2_00 + 0x2a) != 0) &&
       (cVar1 = fcn.0001752c(*(arg2_00 + 0x18) - *(arg2_00 + 0x2a),arg2_00), cVar1 == '\0')) {
        return 0;
    }
    if (((**(arg2_00 + 0x18) == -1) && ((*(arg2_00 + 0x18))[1] == -1)) &&
       (*(*(arg2_00 + 0x10) + *(arg2_00 + 0x28) * -0x10) == -1)) {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.0001d4b8 @ 0x1d4b8 */

ulong fcn.0001d4b8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
                if (*0x21e98 != 0) {
                    if ((uVar3 & 0x20) != 0) {
                        fcn.0001d9d8(arg1,arg2,uVar3,CONCAT44(in_R9,arg4));
                        return extraout_RAX;
                    }
                    fcn.0001defc(arg1,arg2,uVar3,CONCAT44(in_R9,arg4));
                    return extraout_RAX_00;
                }
                goto code_r0x0001d4c9;
            }
        }
        uVar2 = 0x800000000000001a;
    }
    else {
code_r0x0001d4c9:
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00012998 @ 0x12998 */

void fcn.00012998(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t arg2_00;
    uint32_t uVar2;
    uint64_t uVar3;
    uchar auStack_28 [8];
    uchar auStack_20 [8];
    
    if ((*0x21cd8 != 0) && (arg2_00 = arg2, arg1_00 = fcn.0001251c(arg1,arg2,auStack_28,auStack_20), arg1_00 != 0))
    {
        if ((*(arg3 + 0x38) & 1) != 0) {
            arg2_00 = *0x263a4;
            uVar3 = 0;
            if (*0x263a4 != 0) {
                do {
                    iVar1 = uVar3 * 0x48 + 0x263b0;
                    if ((iVar1 != arg3) && ((*(uVar3 * 0x48 + 0x263e8) & 3) == 3)) {
                        iVar1 = fcn.00017940(arg1,arg2,auStack_28,iVar1);
                        if (iVar1 != 0) {
                            *(arg1_00 + 0x18) = 0;
                            *(arg1_00 + 0x10) = iVar1;
                            *(arg1_00 + 0x20) = uVar3;
                            return;
                        }
                        arg2_00 = *0x263a4;
                    }
                    uVar2 = uVar3 + 1;
                    uVar3 = uVar2;
                } while (uVar2 < arg2_00);
            }
        }
        fcn.000128fc(arg1_00,arg2_00);
    }
    return;
}


/* fcn.00014d90 @ 0x14d90 */

//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00014d90(int64_t arg1,int64_t arg2,int64_t arg3)

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
    fcn.00017ec8(&iStack_d8);
    iVar6 = *0x26680;
    iVar4 = fcn.00017f38(arg1,*0x26680,auStack_88);
    if (iVar4 == 0) {
        iVar5 = -0x7ffffffffffffff2;
    }
    else {
        iVar4 = iStack_d0 - stack0xffffffffffffff80;
        arg1_00 = arg2;
        arg2_00 = fcn.00011cf4(arg1_00,iVar6);
        if (((arg2_00 == NULL) || (arg2_01 = fcn.00011cf4(arg1_00,iVar6), arg2_01 == NULL)) ||
           (iVar6 = fcn.00011cf4(arg1_00,iVar6), iVar6 == 0)) {
            iVar5 = -0x7ffffffffffffff7;
        }
        else {
            *arg2_00 = L'\0';
            do {
                do {
                    arg2_02 = arg2_00;
                    iStackX_20 = arg2;
                    iVar7 = fcn.00017e44(&iStackX_20,arg2_00,acStack_f0,&iStack_d8);
                    if (iVar7 < 0) {
                        iVar5 = 0;
                        if (iVar7 != -0x7ffffffffffffff2) {
                            iVar5 = iVar7;
                        }
                        goto code_r0x00014ffb;
                    }
                    arg2_02 = acStack_f0;
                    iStackX_20 = arg2;
                    iVar5 = fcn.00017afc(arg2_00,arg2_02,auStackX_10,&iStackX_20);
                    iVar7 = iStackX_20;
                    if (iVar5 < 0) {
code_r0x00014fbf:
                        if (iVar5 != -0x7ffffffffffffff2) goto code_r0x00014ffb;
                        goto code_r0x00014fd8;
                    }
                    iVar5 = fcn.00014b68(arg2_00,acStack_f0,auStackX_10[0],iStackX_20);
                    arg2_02 = NULL;
                    bVar1 = false;
                    if (iVar5 < 0) {
                        if (iVar5 != -0x7ffffffffffffff8) goto code_r0x00014fd8;
                        bVar1 = true;
                    }
                    arg2_02 = acStack_f0;
                    iStackX_20 = arg2;
                    iVar5 = fcn.00017afc(arg2_00,arg2_02,auStackX_18,&iStackX_20);
                    iVar2 = iStackX_20;
                    if (iVar5 < 0) goto code_r0x00014fbf;
                    if (iStackX_20 != iVar7) {
                        arg2_02 = L"PlatformLang";
                        pcVar8 = arg2_00;
                        cVar3 = str.PlatformLang[0];
                        while ((cVar3 != L'\0' && (cVar3 == *pcVar8))) {
                            arg2_02 = arg2_02 + 1;
                            pcVar8 = pcVar8 + 1;
                            cVar3 = *arg2_02;
                        }
                        if (*arg2_02 != *pcVar8) goto code_r0x00014fd8;
                        arg2_02 = 0x20020;
                        iVar5 = fcn.0001a2d8(acStack_f0,0x20020,0x10);
                        if ((iVar5 != 0) || (iVar4 != iVar7 - iVar2)) goto code_r0x00014fd8;
                        iVar4 = 0;
                    }
                    if (auStackX_18[0] != auStackX_10[0]) goto code_r0x00014fd8;
                } while (!bVar1);
                arg2_02 = arg2_01;
                iVar7 = fcn.0001a2d8(iVar6,arg2_01,iVar2);
            } while (iVar7 == 0);
code_r0x00014fd8:
            iVar5 = -0x7ffffffffffffff1;
code_r0x00014ffb:
            iVar7 = -0x7ffffffffffffff1;
            fcn.00011d4c(arg2_00,arg2_02);
            fcn.00011d4c(arg2_01,arg2_02);
            fcn.00011d4c(iVar6,arg2_02);
            if (iVar4 != 0) {
                iVar5 = iVar7;
            }
        }
    }
    return iVar5;
}


/* fcn.000132fc @ 0x132fc */

//WARNING: Variable defined which should be unmapped: var_ah
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.000132fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                     int64_t arg_70h,int64_t arg_78h,int64_t arg_80h)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uchar auStackX_18 [16];
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
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
    aiStack_60[2] = fcn.000174ac(in_stack_00000030,arg2,aiStack_60,in_stack_00000040);
    if (aiStack_60[2] == 0) {
        return 0x8000000000000015;
    }
    if ((((arg3 & 0x40U) == 0) && (aiStack_60[0] == arg4)) &&
       (iVar2 = fcn.0001a2d8(aiStack_60[2],in_stack_00000028,arg4), iVar2 == 0)) {
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
        fcn.0001fe00(iVar2,&uStack_48,10);
        iVar2 = iVar2 + 10;
        if ((arg3 & 0x40U) != 0) {
            fcn.0001fe00(iVar2,aiStack_60[2],aiStack_60[0]);
            iVar2 = iVar2 + aiStack_60[0];
        }
        fcn.0001fe00(iVar2,in_stack_00000028,arg4);
        iVar2 = iVar2 + arg4;
        if ((arg3 & 0x30U) != 0) {
            fcn.0001fe00(iVar2,auStackX_18,1);
            fcn.0001fe00(iVar2 + 1,in_stack_00000038 + 8,8);
            iVar2 = in_stack_00000040[3] + -2 + iVar4;
            fcn.0001fe00(iVar2,aiStack_60 + 1,2);
        }
        uVar3 = iVar2;
        cVar1 = (*_var_50h[3])(_var_50h,in_stack_00000040[3],uStack_44,in_stack_00000040[3]);
        if ((cVar1 != '\0') && (cVar1 = (*_var_50h[3])(_var_50h,in_stack_00000040[3],4,str.NVARx), cVar1 != '\0')) {
            auStack_42[0] = auStack_42[0] ^ (in_stack_00000040[3] - in_stack_00000030 ^ auStack_42[0]) & 0xffffff;
            cVar1 = (*_var_50h[3])(_var_50h,in_stack_00000030 + 6,3,auStack_42);
            goto code_r0x00013590;
        }
    }
    cVar1 = '\0';
    uVar3 = iVar2;
    in_stack_00000030 = arg1;
code_r0x00013590:
    (*_var_50h[1])(_var_50h,*in_stack_00000040,in_stack_00000040[1]);
    if (cVar1 == '\0') {
        fcn.00012d78(in_stack_00000040,uVar3,iVar4,in_stack_00000030);
    }
    else {
        in_stack_00000040[3] = in_stack_00000040[3] + iVar4;
        *(in_stack_00000040 + 0x2a) = iVar4;
    }
    return ~-(cVar1 != '\0') & 0x8000000000000007;
}


/* fcn.00014038 @ 0x14038 */

int64_t fcn.00014038(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    
    iVar1 = fcn.00015bb8(arg4,*(arg1 + 8),*(arg1 + 0x3c),CONCAT71(arg4 >> 8,*(arg1 + 0x38)));
    if (-1 < iVar1) {
        arg2_00 = arg4;
        iVar1 = fcn.00013ec8(arg1,arg4,arg2,arg3);
        if (iVar1 < 0) {
            fcn.00011d4c(*arg4,arg2_00);
        }
    }
    return iVar1;
}


/* fcn.00014a50 @ 0x14a50 */

int64_t fcn.00014a50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        cVar1 = fcn.00012b38(arg1,arg2,&iStack_30,&iStackX_10);
        if ((cVar1 == '\0') || ((*0x21cc1 != '\0' && ((*(iStackX_10 + 9) & 1) == 0)))) {
            iVar2 = -0x7ffffffffffffff2;
        }
        else {
            iVar2 = fcn.00017a40(iStack_28,iStack_30,0,arg4);
            if ((((-1 < iVar2) || (iVar2 == -0x7ffffffffffffffb)) && (arg3 != 0)) &&
               (iVar3 = fcn.000179c0(iStackX_10,iStack_38,arg3), iVar3 < 0)) {
                return iVar3;
            }
        }
    }
    return iVar2;
}


/* fcn.00017fa4 @ 0x17fa4 */

int64_t fcn.00017fa4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg3_00;
    int64_t arg1_00;
    int16_t iVar1;
    char cVar2;
    int64_t iVar3;
    int64_t arg3_01;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    char in_stack_00000038;
    int64_t iStack_50;
    
    uVar6 = arg4;
    uVar5 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = *arg2;
        iVar3 = arg1;
        if (in_stack_00000030 != NULL) {
            if (iVar1 == 0) {
                *in_stack_00000030 = 0;
            }
            uVar5 = *in_stack_00000030;
            iVar3 = -0x7ffffffffffffffe;
        }
        for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
            arg4 = CONCAT71(arg4 >> 8,in_stack_00000038);
            arg3_00 = in_stack_00000028 + uVar5 * 0x48;
            iVar3 = fcn.00017d40(arg2,arg3,arg3_00,arg4);
            if (-1 < iVar3) {
                if ((*(arg3_00 + 0x38) & 4) != 0) {
                    if (iStack_50 != 0) {
                        do {
                            uVar4 = 0;
                            uVar7 = 0;
                            if (uVar5 != 0) {
                                do {
                                    uVar7 = uVar4;
                                    arg1_00 = in_stack_00000028 + uVar4 * 0x48;
                                    for (arg3_01 = fcn.00017678(arg1_00); arg3_01 != 0;
                                        arg3_01 = fcn.00017648(arg3_01,arg1_00)) {
                                        arg4 = arg1_00;
                                        cVar2 = fcn.000176c8(iStack_50,arg3_00,arg3_01,arg1_00);
                                        if (cVar2 != '\0') goto code_r0x000180e4;
                                    }
                                    arg3_01 = 0;
code_r0x000180e4:
                                    if (arg3_01 != 0) break;
                                    uVar7 = uVar7 + 1;
                                    uVar4 = uVar7;
                                } while (uVar7 < uVar5);
                            }
                            if (uVar7 == uVar5) break;
                            iStack_50 = fcn.00017648(iStack_50,arg3_00);
                            if (in_stack_00000038 != '\0') {
                                for (; (iStack_50 != 0 && ((*(iStack_50 + 6) & 0x1000000) == 0));
                                    iStack_50 = fcn.00017648(iStack_50,arg3_00)) {
                                }
                            }
                        } while (iStack_50 != 0);
                        if (iStack_50 != 0) goto code_r0x00018164;
                    }
                    *(arg3_00 + 0x30) = 0;
                    iVar3 = -0x7ffffffffffffff2;
                }
code_r0x00018164:
                if (-1 < iVar3) {
                    arg4 = arg3;
                    iVar3 = fcn.00017b94(iStack_50,arg2,arg1,arg3);
                    if (iVar3 != -0x7ffffffffffffff2) {
                        if (iVar3 < 0) {
                            *arg2 = iVar1;
                        }
                        if (in_stack_00000030 != NULL) {
                            *in_stack_00000030 = uVar5;
                        }
                        goto code_r0x00018216;
                    }
                    *(arg3_00 + 0x30) = 0;
                }
            }
            if (iVar3 == -0x7ffffffffffffff2) {
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
code_r0x00018216:
    return iVar3;
}


/* fcn.0001a5bc @ 0x1a5bc */

ulong fcn.0001a5bc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint *puVar3;
    uint in_register_00000014;
    uint *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t arg3_00;
    
    puVar4 = CONCAT44(in_register_00000014,arg2);
    if (arg3 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        arg3_00 = 0;
        uVar6 = 0x2c;
        if (puVar4 != NULL) {
            uVar5 = 0xffff;
            iVar2 = fcn.00018e68(arg2,0xffff);
            arg3_00 = iVar2 * 2 + 2;
            uVar6 = iVar2 * 2 + 0x2e;
            if (uVar5 < uVar6) {
                return 0x8000000000000005;
            }
        }
        puVar3 = fcn.00019e24();
        *arg3 = puVar3;
        if (puVar3 == NULL) {
            uVar1 = 0x8000000000000009;
        }
        else {
            *puVar3 = 0x10000;
            *(puVar3 + 2) = *arg1;
            *(puVar3 + 4) = *(arg1 + 8);
            puVar3[6] = 0;
            puVar3[7] = 0xffffffff;
            puVar3[8] = 0;
            puVar3[9] = 0;
            *(puVar3 + 10) = 1;
            *(puVar3 + 1) = uVar6;
            *(puVar3 + 6) = 0x2c;
            if (((puVar4 != NULL) && (arg3_00 != 0)) && (puVar3 + 0xb != puVar4)) {
                fcn.00011180(puVar3 + 0xb,arg2,arg3_00);
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.0001aea8 @ 0x1aea8 */

ulong fcn.0001aea8(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong in_RDX;
    uint64_t uVar6;
    int64_t in_R8;
    uint64_t arg3;
    char acStackX_10 [8];
    
    if (*0x21e30 == 0) {
        return 0x8000000000000006;
    }
    if (*0x21e38 != '\0') {
        return 0x8000000000000008;
    }
    cVar1 = fcn.0001acb4(arg1,in_RDX,in_R8);
    if (cVar1 == '\0') {
        return 0x8000000000000002;
    }
    iVar2 = fcn.0001ad94(*(arg1 + 6) + arg1,arg1 + 8,acStackX_10);
    if ((iVar2 != 0) && (acStackX_10[0] == '\0')) {
        return 0x8000000000000014;
    }
    arg3 = *0x21e3c;
    uVar4 = *(arg1 + 4) + *0x21e3c;
    uVar5 = 0xffffffff;
    if (uVar4 >= *0x21e3c) {
        uVar5 = uVar4;
    }
    if (-(uVar4 < *0x21e3c) < 0) {
code_r0x0001af62:
        uVar3 = 0x8000000000000015;
    }
    else {
        if (*0x21e48 < uVar5) {
            if ((uVar5 & 0xfff) == 0) {
                uVar5 = uVar5 >> 0xc;
            }
            else {
                uVar5 = (uVar5 >> 0xc) + 1;
            }
            uVar6 = uVar5 << 0xc;
            if (0xffffffff < uVar6) goto code_r0x0001af62;
            iVar2 = fcn.00019e24(0x8000000000000005,uVar6 & 0xffffffff);
            if (iVar2 == 0) {
                return 0x8000000000000009;
            }
            arg3 = *0x21e3c;
            if ((*0x21e3c != 0) && (iVar2 != *0x21e40)) {
                fcn.00011180(iVar2,*0x21e40,arg3);
                arg3 = *0x21e3c;
            }
            *0x21e48 = uVar6;
            if (*0x21e40 != 0) {
                fcn.00019f20(*0x21e40);
                arg3 = *0x21e3c;
            }
            *0x21e40 = iVar2;
        }
        uVar5 = arg3;
        if ((*(arg1 + 4) != 0) && (arg3 + *0x21e40 != arg1)) {
            fcn.00011180(arg3 + *0x21e40,arg1,*(arg1 + 4));
            uVar5 = *0x21e3c;
        }
        *0x21e50 = *0x21e50 + 1;
        *0x21e3c = uVar5 + *(arg1 + 4);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001b05c @ 0x1b05c */

ulong fcn.0001b05c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    bool bVar6;
    char acStack_28 [8];
    ulong uStack_20;
    
    pcVar2 = *0x21e30;
    uVar5 = 0;
    if (*0x21e30 == NULL) {
        uVar5 = 0x8000000000000006;
    }
    else if (*0x21e4c == '\0') {
        if ((arg4 != 0) || (bVar6 = true, (arg3 & 0x40U) != 0)) {
            bVar6 = false;
        }
        iVar3 = fcn.0001ad94(arg1,arg2,0);
        if (iVar3 != 0) {
            if ((bVar6) ||
               ((((*(iVar3 + 0x18) == 0 || (*(iVar3 + 0x18) <= arg4)) &&
                 ((*(iVar3 + 0x1c) == 0 || (arg4 <= *(iVar3 + 0x1c))))) &&
                (((*(iVar3 + 0x20) & arg3) == *(iVar3 + 0x20) && ((*(iVar3 + 0x24) & arg3) == 0)))))) {
                cVar1 = *(iVar3 + 0x28);
                if (cVar1 != '\x01') {
                    if (cVar1 == '\x02') {
                        uStack_20 = 0;
                        iVar3 = (*pcVar2)(arg1,arg2,0,&uStack_20,0);
                        bVar6 = iVar3 == -0x7ffffffffffffffb;
                    }
                    else {
                        if (cVar1 != '\x03') {
                            return 0;
                        }
                        uStack_20 = 1;
                        iVar4 = (*pcVar2)(iVar3 + 0x3e,iVar3 + 0x2c,0,&uStack_20,acStack_28);
                        if (iVar4 < 0) {
                            if (iVar4 == -0x7ffffffffffffff2) {
                                return 0;
                            }
                            if (iVar4 == -0x7ffffffffffffffb) {
                                return 0;
                            }
                            return 0x8000000000000015;
                        }
                        bVar6 = acStack_28[0] == *(iVar3 + 0x3c);
                    }
                    if (!bVar6) {
                        return 0;
                    }
                }
                uVar5 = 0x8000000000000008;
            }
            else {
                uVar5 = 0x8000000000000002;
            }
        }
    }
    return uVar5;
}


/* fcn.0001503c @ 0x1503c */

uint64_t fcn.0001503c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *puVar1;
    ulong *puVar2;
    bool bVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    uint32_t arg2_00;
    int64_t iVar10;
    int64_t *arg2_01;
    uint32_t uVar11;
    int64_t arg2_02;
    uint64_t uVar12;
    int64_t iVar13;
    uint32_t auStackX_18 [2];
    uint64_t uStackX_20;
    int64_t in_stack_00000028;
    uint64_t *puVar14;
    uchar *puVar15;
    unkbyte7 in_stack_fffffffffffffee9;
    int64_t iVar16;
    int64_t arg1_00;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint uVar20;
    uint64_t arg_78h;
    int64_t in_stack_ffffffffffffff10;
    int64_t iStack_e8;
    code *pcStack_e0;
    int64_t aiStack_d8 [4];
    uchar auStack_b8 [8];
    ulong uStack_b0;
    uchar uStack_a8;
    ulong uStack_a7;
    ulong uStack_9f;
    ulong uStack_97;
    uint uStack_8f;
    ushort uStack_8b;
    uchar uStack_89;
    int64_t aiStack_88 [10];
    
    uVar11 = 0;
    iVar16 = 0;
    iVar19 = 0;
    uVar18 = 0;
    auStack_b8[0] = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_9f = 0;
    uStack_97 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    uStack_89 = 0;
    if (0xffff < arg4) {
        return 0x8000000000000009;
    }
    auStackX_18[0] = arg3;
    uStackX_20 = arg4;
    uVar6 = fcn.00014b68(arg1,arg2,arg3,arg4);
    if (uVar6 < 0) {
        return uVar6;
    }
    do {
        arg2_02 = iVar19;
        iVar19 = arg2;
        cVar4 = fcn.00012b38(arg1,arg2,&iStack_e8,aiStack_d8);
        arg2_00 = iVar19;
        arg1_00 = iVar16;
        if (cVar4 == '\0') {
            aiStack_d8[0] = 0;
            arg1_00 = 0;
        }
        iVar13 = aiStack_d8[0];
        iVar16 = arg1_00;
        if (arg1_00 == 0) {
            if (aiStack_d8[0] == 0) {
                uVar18 = 0;
                iVar7 = 0;
            }
            else {
                if ((arg3 & 3) == 2) {
                    return 0x8000000000000002;
                }
                fcn.00012df8(aiStack_d8[0],in_stack_ffffffffffffff10,auStack_b8);
                iVar19 = iStack_e8;
                iVar7 = fcn.000174ac(iVar13,iStack_e8,&stack0xfffffffffffffef8,in_stack_ffffffffffffff10);
                arg2_00 = iVar19;
            }
            arg2_02 = *0x26688;
            if ((arg3 & 1U) != 0) {
                arg2_02 = *0x26680;
            }
            iVar19 = arg2_02;
            if (arg2_02 == 0) {
                return 0x8000000000000002;
            }
        }
        else {
            if ((*0x21cc1 != '\0') && ((*(arg1_00 + 6) & 0x1000000) == 0)) {
                return 0x8000000000000002;
            }
            if ((arg3 & 2U) != 0) {
                iVar19 = *0x26688;
                if ((arg3 & 1U) != 0) {
                    iVar19 = *0x26680;
                }
                if (arg2_02 != iVar19) {
                    return 0x8000000000000002;
                }
            }
            iVar19 = arg2_02;
            fcn.00012df8(arg1_00,arg2_02,auStack_b8);
            iVar10 = iStack_e8;
            iVar7 = fcn.000174ac(aiStack_d8[2],iStack_e8,&stack0xfffffffffffffef8,arg2_02);
            arg2_00 = iVar10;
        }
        uVar6 = fcn.000148b4(arg2_02);
        if (uVar6 < 0) {
            return uVar6;
        }
        if (uVar6 == 0) break;
        uVar11 = uVar11 + 1;
    } while (uVar11 < 2);
    if (uVar11 == 2) {
        return 0x8000000000000007;
    }
    cVar4 = fcn.00014848(arg2_02,arg2_00);
    uVar20 = iVar19 >> 0x20;
    uVar9 = *(arg2_02 + 8);
    uVar6 = 0;
    if (arg1 != 0) {
        for (piVar8 = arg1; piVar8 < uVar9 + arg1; piVar8 = piVar8 + 1) {
            if (*piVar8 == 0) {
                uVar6 = (piVar8 - arg1 >> 1) * 2 + 2;
                goto code_r0x0001527d;
            }
        }
        uVar6 = uVar9 + 1;
    }
code_r0x0001527d:
    if (uVar9 < uVar6) {
        return 0x8000000000000009;
    }
    puVar15 = auStack_b8;
    puVar14 = &uStackX_20;
    uVar6 = uVar18;
    iVar16 = iVar7;
    uVar9 = fcn.0001d4b8(arg1,arg2,auStackX_18,&stack0x00000028);
    if (uVar9 < 0) {
        if (uVar9 == 0x8000000000000014) {
            return 0;
        }
        return uVar9;
    }
    uVar12 = -(arg3 != 0) & uStackX_20;
    uVar17 = uVar12;
    cVar5 = fcn.00013a40(arg1,arg2);
    arg_78h = CONCAT44(uVar20,auStackX_18[0]) & 0xffffffff00000040;
    if ((((auStackX_18[0] & 0x40) == 0) && (uVar12 == 0)) || ((auStackX_18[0] & 2) == 0)) {
        if (arg1_00 == 0) {
            return 0x800000000000000e;
        }
        if ((*0x21cc1 != '\0') && ((*(arg2_02 + 0x38) & 1) == 0)) {
            return 0x8000000000000002;
        }
        if (cVar5 != '\0') {
            return 0x8000000000000008;
        }
        puVar1 = arg1_00 + 9;
        puVar2 = *(arg2_02 + 0x40);
        uStackX_20 = CONCAT71(uStackX_20._1_7_,*puVar1) ^ 0x80;
        if (puVar2 != NULL) {
            cVar4 = (**puVar2)(puVar2,puVar1,1);
            if (cVar4 == '\0') {
                return 0x8000000000000007;
            }
            cVar4 = (*puVar2[3])(puVar2,puVar1,1,&uStackX_20,puVar14,iVar7,uVar18,puVar15);
            (*puVar2[1])(puVar2,puVar1,1);
            uVar18 = ~-(cVar4 != '\0') & 0x8000000000000007;
            if (-1 < uVar18) {
                if (in_stack_ffffffffffffff10 == arg2_02) {
                    fcn.00012998(arg1,arg2,arg2_02);
                    return uVar18;
                }
                return uVar18;
            }
            return uVar18;
        }
        return 0x8000000000000003;
    }
    uVar18 = uVar17;
    if (arg1_00 == 0) {
        if (((iVar16 != 0) && ((auStackX_18[0] & 0x40) == 0)) && (uVar6 == uVar17)) {
            iVar19 = fcn.0001a2d8(iVar16,in_stack_00000028,uVar17);
            uVar18 = uVar17;
            if (iVar19 == 0) {
                return 0;
            }
        }
        if (cVar4 != '\0') {
            iVar19 = arg2;
            uVar9 = fcn.00012e90(arg1,arg2,auStackX_18[0],uVar18,CONCAT71(in_stack_fffffffffffffee9,cVar4),uVar18
                                 ,uVar6,arg_78h,iVar16,in_stack_ffffffffffffff10);
            uVar11 = iVar19;
            if (-1 < uVar9) {
                if (cVar5 != '\0') goto code_r0x000155b7;
                if (iVar13 == 0) {
                    iVar19 = arg2_02;
                    fcn.000126b8(*(arg2_02 + 0x18) - *(arg2_02 + 0x2a),arg2_02);
                    uVar11 = iVar19;
                }
                else if ((*0x263a0 & 5) == 0) {
                    iVar19 = arg2_02;
                    fcn.00012830(*(arg2_02 + 0x18) - *(arg2_02 + 0x2a),arg2_02);
                    uVar11 = iVar19;
                }
            }
code_r0x000155c4:
            if ((uVar9 == 0x8000000000000007) && (cVar5 = fcn.00014848(arg2_02,uVar11), cVar5 == '\0'))
            goto code_r0x000155f7;
            goto code_r0x000155e2;
        }
        bVar3 = false;
    }
    else {
        if ((cVar5 != '\0') && (uVar9 = fcn.00014d90(arg1,uVar17,in_stack_00000028), uVar9 < 0)) {
            return uVar9;
        }
        bVar3 = false;
        if (cVar4 != '\0') {
            if (*(arg2_02 + 0x40) != 0) {
                uVar9 = fcn.000132fc(arg1_00,iStack_e8,auStackX_18[0],uVar17,
                                     CONCAT71(in_stack_fffffffffffffee9,cVar4),uVar18,uVar6,arg_78h,iVar16);
                uVar11 = iStack_e8;
                if ((-1 < uVar9) && (cVar5 != '\0')) {
code_r0x000155b7:
                    fcn.00015d0c();
                    fcn.00012a58();
                }
                goto code_r0x000155c4;
            }
            uVar9 = 0x8000000000000003;
code_r0x000155e2:
            bVar3 = true;
        }
    }
    if ((uVar9 != 0x8000000000000009) && (bVar3)) {
        return uVar9;
    }
code_r0x000155f7:
    iVar19 = 0;
    iStack_e8 = 0;
    pcStack_e0 = fcn.000139e0;
    aiStack_d8[1] = 0x20370;
    aiStack_d8[3] = 0x13da0;
    aiStack_d8[0] = 0;
    aiStack_d8[2] = 0;
    if (arg1_00 != 0) {
        *(arg1_00 + 9) = *(arg1_00 + 9) ^ 0x80;
    }
    uStackX_20 = uStackX_20 & 0xffffffff00000000;
    iVar13 = iVar19;
    uVar17 = uVar18;
    do {
        arg2_01 = *(&iStack_e8 + iVar13);
        aiStack_88[0] = iVar19;
        iVar19 = fcn.00014038(arg2_02,arg2_01,*(aiStack_d8 + iVar13),aiStack_88);
        if (iVar19 < 0) {
            if (aiStack_88[0] != 0) goto code_r0x0001576e;
code_r0x00015773:
            if (-1 < uVar9) {
                return uVar9;
            }
            break;
        }
        arg2_01 = arg2;
        uVar9 = fcn.00012e90(arg1,arg2,auStackX_18[0],uVar18,CONCAT71(in_stack_fffffffffffffee9,cVar4),uVar17,
                             uVar6,arg_78h,iVar16,in_stack_ffffffffffffff10);
        if (uVar9 != 0x8000000000000009) {
            if (-1 < uVar9) {
                arg2_01 = aiStack_88;
                uVar9 = fcn.000144c8(arg2_02,arg2_01);
            }
code_r0x0001576e:
            fcn.00011d4c(aiStack_88[0],arg2_01);
            goto code_r0x00015773;
        }
        if ((0x1ff < uVar18 - uVar6) && (0x3ff < uVar18)) {
            arg2_01 = arg1;
            cVar5 = fcn.000137a4(0x20480,arg1,arg2);
            if (cVar5 == '\0') {
                arg2_01 = arg1;
                cVar5 = fcn.000137a4(0x203a0,arg1,arg2);
                if (cVar5 == '\0') goto code_r0x0001576e;
            }
        }
        iVar19 = 0;
        fcn.00011d4c(aiStack_88[0],arg2_01);
        iVar13 = iVar13 + 8;
        uVar11 = uStackX_20 + 1;
        uStackX_20 = CONCAT44(uStackX_20._4_4_,uVar11);
    } while (uVar11 < 2);
    if (arg1_00 != 0) {
        *(arg1_00 + 9) = *(arg1_00 + 9) ^ 0x80;
    }
    fcn.000148b4(arg2_02);
    return uVar9;
}


/* fcn.000175cc @ 0x175cc */

uint64_t fcn.000175cc(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((uVar2 != 0) && (uVar2 < *(arg2 + 0x18))) {
        cVar1 = fcn.0001752c(arg1,arg2);
        if (cVar1 != '\0') {
            uVar2 = uVar2 + *(uVar2 + 4);
        }
        for (; uVar2 < *(arg2 + 0x18); uVar2 = uVar2 + *(uVar2 + 4)) {
            cVar1 = fcn.0001752c(uVar2,arg2);
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


/* fcn.00016e00 @ 0x16e00 */

ulong fcn.00016e00(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    iVar1 = (**(*0x21d58 + 0x60))(0,6,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc),auStackX_8);
    if (iVar1 < 0) {
        auStackX_8[0] = 0;
    }
    return auStackX_8[0];
}


/* fcn.0001229c @ 0x1229c */

int64_t fcn.0001229c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        uVar1 = fcn.0001828c(arg2);
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
        uVar1 = fcn.0001828c(arg2);
        if (iVar5 == 0) {
            uVar2 = 0x20;
        }
        else {
            uVar2 = fcn.0001828c(iVar5);
            iVar7 = iVar5;
        }
        iVar6 = CONCAT71(uVar8 >> 8,uVar2);
        iVar5 = CONCAT71(iVar7 >> 8,uVar1);
    }
    cVar3 = fcn.000182c4(iVar5,iVar6,acStackX_8);
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
                goto code_r0x000123f5;
            }
            iVar5 = 3;
            goto code_r0x000123fa;
        }
        iVar5 = -0x7ffffffffffffff6;
    }
    else {
code_r0x000123f5:
        if (-1 < iVar5) {
code_r0x000123fa:
            if (*(arg2 + 0x20) != arg3) {
                iVar5 = -0x7ffffffffffffffe;
            }
        }
    }
    if (((arg4 == '\0') && (-1 < iVar5)) && (cVar3 = fcn.0001828c(arg2), cVar3 == '\a')) {
        acStackX_8[0] = '\b';
        iStackX_18 = arg2;
        iVar6 = fcn.000140b4(&iStackX_18,acStackX_8);
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
                goto code_r0x00012482;
            }
        }
        return -0x7ffffffffffffff9;
    }
code_r0x00012482:
    if (in_stack_00000028 != NULL) {
        iVar4 = fcn.00018230(arg2);
        if (iVar4 != 0) {
            iVar4 = iVar4 + 0x18;
        }
        *in_stack_00000028 = iVar4;
    }
    return iVar5;
}


/* fcn.00014658 @ 0x14658 */

int64_t * fcn.00014658(int64_t arg1,int64_t arg2,int64_t arg3)

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
    fcn.0001a0c8(1,0x3108002);
    piVar2 = fcn.00015bb8(aiStack_118,*(arg1 + 8),*(arg1 + 0x3c),CONCAT71(in_R9 >> 8,*(arg1 + 0x38)));
    if (piVar2 < 0) {
        return piVar2;
    }
    fcn.0001fe00(aiStack_118[0],*arg1,uVar1);
    if (arg2 == '\0') {
        iStack_c8 = 0;
        arg3_00 = arg1;
    }
    else {
        arg2_00 = aiStack_c0;
        iVar3 = fcn.00018374(&iStack_c8,arg2_00);
        if (iVar3 < 0) {
            arg3_00 = piVar4;
            goto code_r0x000147e8;
        }
        uStack_90 = 7;
        uStack_8c = 0;
        uStack_88 = 0;
        fcn.00017ec8(&iStack_c8);
        arg3_00 = &iStack_c8;
    }
    iVar3 = iStack_c8;
    arg2_00 = 0x21298;
    piVar2 = fcn.000135fc(0x21260,0x21298,arg3_00,aiStack_118);
    if (piVar2 == 0x800000000000000e) {
        piVar2 = piVar4;
    }
    if (-1 < piVar2) {
        arg2_00 = 0x21298;
        piVar2 = fcn.000135fc(0x21280,0x21298,arg3_00,aiStack_118);
        if (piVar2 == 0x800000000000000e) {
            piVar2 = piVar4;
        }
        if (-1 < piVar2) {
            uStack_128 = fcn.00017f38(0x21260,arg3_00,auStack_78);
            uStack_120 = arg3;
            arg2_00 = aiStack_118;
            piVar2 = fcn.00013ec8(arg1,arg2_00,0x13ad4,&uStack_128);
        }
    }
    if (iVar3 != 0) {
        (**(*0x21d68 + 0x48))(iVar3);
    }
    if (iStack_100 == iStack_f8) {
        arg3_00 = piVar4;
    }
code_r0x000147e8:
    if (((-1 < piVar2) && (arg3_00 != NULL)) &&
       ((*(arg1 + 0x18) - *arg1 != iStack_100 - aiStack_118[0] || (arg3_00 != arg1)))) {
        arg2_00 = aiStack_118;
        piVar2 = fcn.000144c8(arg1,arg2_00);
    }
    fcn.00011d4c(aiStack_118[0],arg2_00);
    return piVar2;
}


/* fcn.00015dd4 @ 0x15dd4 */

void fcn.00015dd4(int64_t arg1)

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
    *0x263a8 = 0;
    *0x263a4 = 0;
    if ((*0x263a0 & 1) != 0) {
        iVar8 = fcn.00017f38(0x21280,arg1,0x263b0);
        if (iVar8 == 0) {
            uVar7 = *0x263a4;
        }
        else {
            *0x263a4 = *0x263a4 + 1;
            uVar7 = *0x263a4;
        }
    }
    if ((*0x263a0 & 4) == 0) {
        uVar3 = *(arg1 + 8);
        *(uVar7 * 0x48 + 0x263b0) = *arg1;
        *(uVar7 * 0x48 + 0x263b8) = uVar3;
        uVar3 = *(arg1 + 0x18);
        *(uVar7 * 0x48 + 0x263c0) = *(arg1 + 0x10);
        *(uVar7 * 0x48 + 0x263c8) = uVar3;
        uVar3 = *(arg1 + 0x28);
        *(uVar7 * 0x48 + 0x263d0) = *(arg1 + 0x20);
        *(uVar7 * 0x48 + 0x263d8) = uVar3;
        uVar3 = *(arg1 + 0x38);
        *(uVar7 * 0x48 + 0x263e0) = *(arg1 + 0x30);
        *(uVar7 * 0x48 + 0x263e8) = uVar3;
        *(uVar7 * 0x48 + 0x263f0) = *(arg1 + 0x40);
        *0x26680 = *0x263a4 * 0x48 + 0x263b0;
        if ((*0x263a0 & 1) != 0) {
            puVar1 = *0x263a4 * 0x48 + 0x263e8;
            *puVar1 = *puVar1 | 4;
        }
        *0x263a4 = *0x263a4 + 1;
        iVar8 = fcn.00017f38(0x21260,arg1,(*0x263a4 * 8 + 2 + *0x263a4) * 8 + 0x263a0);
        if (iVar8 == 0) goto code_r0x00015c30;
    }
    else {
        iVar8 = fcn.00017f38(0x21260,arg1,(uVar7 * 9 + 2) * 8 + 0x263a0);
        if (iVar8 != 0) {
            *0x263a4 = *0x263a4 + 1;
        }
        uVar7 = *0x263a4;
        uVar3 = *(arg1 + 8);
        *(uVar7 * 0x48 + 0x263b0) = *arg1;
        *(uVar7 * 0x48 + 0x263b8) = uVar3;
        uVar3 = *(arg1 + 0x18);
        *(uVar7 * 0x48 + 0x263c0) = *(arg1 + 0x10);
        *(uVar7 * 0x48 + 0x263c8) = uVar3;
        uVar3 = *(arg1 + 0x28);
        *(uVar7 * 0x48 + 0x263d0) = *(arg1 + 0x20);
        *(uVar7 * 0x48 + 0x263d8) = uVar3;
        uVar3 = *(arg1 + 0x38);
        *(uVar7 * 0x48 + 0x263e0) = *(arg1 + 0x30);
        *(uVar7 * 0x48 + 0x263e8) = uVar3;
        *(uVar7 * 0x48 + 0x263f0) = *(arg1 + 0x40);
        *0x26680 = *0x263a4 * 0x48 + 0x263b0;
        puVar1 = *0x263a4 * 0x48 + 0x263e8;
        *puVar1 = *puVar1 | 4;
    }
    *0x263a4 = *0x263a4 + 1;
code_r0x00015c30:
    arg2 = *0x26680;
    iVar8 = *(*0x26680 + 0x20);
    uVar9 = 0;
    cVar5 = fcn.0001752c(iVar8,*0x26680);
    iVar6 = iVar8;
    if (cVar5 != '\0') {
        while (iVar4 = iVar6, iVar4 != 0) {
            if ((*(iVar4 + 6) & 0xc000000) == 0) {
                if (uVar9 < *(iVar4 + 10)) {
                    uVar9 = *(iVar4 + 10);
                }
            }
            iVar6 = fcn.000175cc(iVar4,arg2);
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


/* fcn.00019fe8 @ 0x19fe8 */

ulong fcn.00019fe8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x21d60 + 0x68);
    iVar2 = *(*0x21d60 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.0001a2d8(iVar2,0x20200,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.0001a350 @ 0x1a350 */

ulong fcn.0001a350(int64_t arg1,int64_t arg2)

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
            iVar3 = fcn.0001a2d8(piVar4 + 8,arg1,0x10);
        } while (iVar3 != 0);
        *arg2 = piVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001659c @ 0x1659c */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.0001659c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *******arg2_00;
    uint64_t in_R8;
    uchar uVar4;
    int64_t arg3;
    int64_t iStackX_8;
    ulong *puStackX_10;
    int64_t var_67h;
    ulong *******pppppppuStack_c8;
    ulong *******pppppppuStack_c0;
    uchar uStack_90;
    uint uStack_8c;
    ulong uStack_88;
    uchar auStack_78 [7];
    int64_t var_69h;
    int64_t var_61h;
    int8_t var_31h;
    int32_t var_2dh;
    int64_t var_29h;
    int64_t var_19h;
    
    uVar4 = 0;
    arg3 = 0;
    puStackX_10 = arg2;
    if (arg1 == 0) {
        uStack_8c = 0;
        iVar2 = 0;
        pppppppuStack_c0 = 0x30000;
        *0x263a0 = 8;
    }
    else {
        *0x263a0 = *(arg1 + 0x14);
        iVar2 = *arg1;
        pppppppuStack_c0 = *(arg1 + 0x10);
        arg2 = *(arg1 + 8);
        if ((iVar2 == 0) || (pppppppuStack_c0 == NULL)) {
            return -0x7ffffffffffffffe;
        }
        if ((*0x21c90 == 1) &&
           (((iVar1 = (**(*0x21e58 + 0x38))(iVar2,0x21c88), iVar1 < 0 ||
             (in_R8 = *0x21c88 + *0x21c90, in_R8 < iVar2 + pppppppuStack_c0)) || (in_R8 < arg2 + pppppppuStack_c0)))) {
            *0x21c88 = 0;
            *0x21c90 = 0;
        }
    }
    pppppppuStack_c8 = fcn.00016e00(pppppppuStack_c0);
    if (pppppppuStack_c8 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (iVar2 == 0) {
        arg2_00 = pppppppuStack_c0;
        fcn.0001fdae(pppppppuStack_c8,pppppppuStack_c0,CONCAT71(in_R8 >> 8,0xff));
        iVar2 = 0;
    }
    else {
        iVar1 = (**(*0x21d58 + 0xd0))(0x202d0,0,&puStackX_10);
        if (((iVar1 < 0) || (iVar1 = (**puStackX_10)(&iStackX_8), iVar1 < 0)) || (iStackX_8 == 0)) {
            return -0x7ffffffffffffff2;
        }
        *0x26320 = *0x211e0;
        *0x26328 = *0x211e8;
        *0x26380 = iStackX_8;
        *0x26330 = *0x211f0;
        *0x26338 = *0x211f8;
        *0x26340 = *0x21200;
        *0x26348 = *0x21208;
        *0x26360 = *0x21220;
        *0x26350 = *0x21210;
        *0x26358 = *0x21218;
        *0x26370 = *0x21230;
        arg2_00 = pppppppuStack_c8;
        *0x26368 = arg2;
        *0x26378 = iVar2;
        iVar2 = fcn.0001229c(0x26320,pppppppuStack_c8,pppppppuStack_c0,(*0x263a0 & 0xff) >> 3 & 1);
        uStack_88 = 0x26320;
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    uStack_90 = 1;
    uVar3 = 0x20430;
    if ((*0x263a0 & 8) == 0) {
        uVar3 = uStack_88;
    }
    uStack_88 = uVar3;
    fcn.00017ec8(&pppppppuStack_c8);
    if (-1 < iVar2) {
        arg2_00 = &pppppppuStack_c8;
        iVar2 = fcn.00017f38(0x21260,arg2_00,auStack_78);
        if (iVar2 == 0) {
            arg3 = 1;
            uVar4 = 1;
            *0x263a0 = *0x263a0 | 2;
        }
    }
    if ((*0x263a0 & 2) != 0) {
        fcn.00014658(&pppppppuStack_c8,CONCAT71(arg2_00 >> 8,uVar4),arg3);
        *0x263a0 = *0x263a0 & 0xfffffffd;
        if (arg1 != 0) {
            *(arg1 + 0x14) = *(arg1 + 0x14) & 0xfffffffd;
        }
    }
    fcn.00015dd4(&pppppppuStack_c8);
    return 0;
}


/* fcn.000157b8 @ 0x157b8 */

int64_t fcn.000157b8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t in_stack_00000028;
    
    if ((((arg1 == 0) || (arg2 == 0)) || (arg4 == NULL)) || ((in_stack_00000028 == 0 && (*arg4 != 0)))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
        piVar2 = 0x21250;
        do {
            if (iVar1 != -0x7ffffffffffffffd) {
                return iVar1;
            }
            iVar1 = (**piVar2)(arg1,arg2,arg3,arg4);
            piVar2 = piVar2 + 1;
        } while (*piVar2 != 0);
        if (iVar1 == -0x7ffffffffffffffd) {
            iVar1 = fcn.00014a50(arg1,arg2,arg3,arg4);
        }
    }
    return iVar1;
}


/* fcn.0001831c @ 0x1831c */

int64_t fcn.0001831c(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint in_register_0000000c;
    uint64_t uVar2;
    uint64_t uVar1;
    
    uVar2 = 0;
    uVar1 = 0;
    if (arg2 == '\0') {
        uVar2 = uVar1;
        if ((((*(CONCAT44(in_register_0000000c,arg1) + 2) != -1) &&
             (*(CONCAT44(in_register_0000000c,arg1) + 0xc) != -1)) &&
            (*(CONCAT44(in_register_0000000c,arg1) + 8) != -1)) && (*(CONCAT44(in_register_0000000c,arg1) + 4) != -1))
        {
            uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 8);
        }
    }
    else if (((*(CONCAT44(in_register_0000000c,arg1) + 2) != -1) &&
             (*(CONCAT44(in_register_0000000c,arg1) + 0x28) != -1)) &&
            ((*(CONCAT44(in_register_0000000c,arg1) + 0x24) != -1 &&
             (uVar2 = uVar1, *(CONCAT44(in_register_0000000c,arg1) + 4) != -1)))) {
        uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x24);
    }
    return uVar2 + (-(arg2 != '\0') & 0x1c) + 0x20 + CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00011838 @ 0x11838 */

int64_t fcn.00011838(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar uVar2;
    unkbyte7 Var3;
    uchar uVar4;
    
    Var3 = arg2 >> 8;
    iVar1 = fcn.00015ab8(arg1,arg2,arg3,arg4);
    uVar4 = 0;
    if ((-1 < iVar1) && (*0x21c80 == '\0')) {
        if (**0x266a0 == '\0') {
            uVar2 = 0;
            if ((((arg3 & 0x40U) == 0) && (arg4 == 0)) || ((arg3 & 2U) == 0)) {
                uVar2 = 1;
                uVar4 = uVar2;
            }
            else if ((arg3 & 1U) == 0) {
                uVar2 = 1;
            }
            else {
                uVar4 = 1;
            }
            fcn.0001178c(CONCAT71(*0x266a0 >> 8,uVar4),CONCAT71(Var3,uVar2));
        }
        else {
            *0x21c80 = '\x01';
        }
    }
    return iVar1;
}


/* fcn.00016e4c @ 0x16e4c */

int64_t fcn.00016e4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    char16_t *pcVar3;
    int64_t iVar4;
    char16_t *pcVar5;
    char16_t cVar6;
    char16_t cVar7;
    int iVar8;
    uint8_t *in_stack_00000028;
    
    cVar2 = *0x21d01;
    if (*0x21d00 == '\0') {
        return -0x7ffffffffffffffd;
    }
    cVar7 = *arg1;
    pcVar3 = L"MemoryOverwriteRequestControlLock";
    pcVar5 = arg1;
    if (cVar7 != L'\0') {
        cVar6 = cVar7;
        do {
            if (cVar6 != *pcVar3) break;
            pcVar5 = pcVar5 + 1;
            pcVar3 = pcVar3 + 1;
            cVar6 = *pcVar5;
        } while (cVar6 != L'\0');
    }
    iVar8 = arg3;
    if ((*pcVar5 == *pcVar3) && (iVar4 = fcn.0001a2d8(arg2,0x20350,0x10), iVar4 == 0)) {
        if ((arg4 != 0) && (in_stack_00000028 == NULL)) {
            return -0x7ffffffffffffffe;
        }
        if (((iVar8 == 0) || (arg4 == 0)) || (in_stack_00000028 == NULL)) {
            return -0x7ffffffffffffff8;
        }
        if (iVar8 != 7) {
            return -0x7ffffffffffffffe;
        }
        if ((arg4 != 1) && (arg4 != 8)) {
            return -0x7ffffffffffffffe;
        }
        if (cVar2 == '\0') {
            if (arg4 == 1) {
                if (*in_stack_00000028 == 0) {
                    return -0x7ffffffffffffffd;
                }
                if (*in_stack_00000028 == 1) {
                    *0x21d01 = 1;
                    return -0x7ffffffffffffffd;
                }
                return -0x7ffffffffffffffe;
            }
            if (arg4 != 8) goto code_r0x00016ff9;
            *0x21d01 = 1;
            **0x21d08 = *in_stack_00000028;
        }
        else {
            if (((arg4 != 8) || (iVar4 = **0x21d08, iVar4 == 0)) ||
               (iVar1 = *in_stack_00000028, **0x21d08 = 0, iVar4 != iVar1)) {
                return -0x7ffffffffffffff1;
            }
            *0x21d01 = 0;
        }
        iVar4 = fcn.00011838(arg1,arg2,7,1);
        return iVar4;
    }
code_r0x00016ff9:
    pcVar5 = L"MemoryOverwriteRequestControl";
    while ((cVar7 != L'\0' && (cVar7 == *pcVar5))) {
        arg1 = arg1 + 2;
        pcVar5 = pcVar5 + 1;
        cVar7 = *arg1;
    }
    if ((*arg1 == *pcVar5) && (iVar4 = fcn.0001a2d8(arg2,0x20390,0x10), iVar4 == 0)) {
        if (((iVar8 == 7) && (arg4 == 1)) &&
           ((in_stack_00000028 == NULL || (((*in_stack_00000028 & 0xee) == 0 && (*in_stack_00000028 != 0x10)))))) {
            return (-(cVar2 != '\0') & 0xc) + 0x8000000000000003;
        }
        return -0x7ffffffffffffffe;
    }
    return -0x7ffffffffffffffd;
}


/* fcn.0001708c @ 0x1708c */

void fcn.0001708c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = fcn.00016e4c(arg1,arg2,arg3,arg4);
    if (iVar1 == -0x7ffffffffffffffd) {
        fcn.00011838(arg1,arg2,arg3 & 0xffffffff,arg4);
    }
    return;
}


/* fcn.0001b290 @ 0x1b290 */

ulong fcn.0001b290(void)

{
    if (*0x21e30 == 0) {
        return 0x8000000000000006;
    }
    if (*0x21e38 != '\0') {
        return 0x8000000000000008;
    }
    *0x21e38 = 1;
    return 0;
}


/* fcn.0001a920 @ 0x1a920 */

ulong fcn.0001a920(void)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if (*0x21e28 != 0) {
        do {
            (**(*0x21dc8 + uVar1 * 8))();
            uVar1 = uVar1 + 1;
        } while (uVar1 < *0x21e28);
    }
    if (*0x21dc8 != 0) {
        *0x21e28 = 0;
        *0x21e08 = 0;
        fcn.00019f20(*0x21dc8);
        *0x21dc8 = 0;
    }
    *0x21de8 = 1;
    if (*0x21de0 != 0) {
        *0x21e00 = 0;
        *0x21dd0 = 0;
        fcn.00019f20(*0x21de0);
        *0x21de0 = 0;
    }
    return 0;
}


/* fcn.0001c780 @ 0x1c780 */

ulong fcn.0001c780(void)

{
    int64_t iVar1;
    ulong uVar2;
    uint8_t *apuStackX_8 [4];
    
    *0x21fac = 0;
    *0x20aa9 = 4;
    iVar1 = fcn.0001c5d4(0x219c0,0x200c0,0,apuStackX_8);
    if (-1 < iVar1) {
        *0x21fac = *apuStackX_8[0];
    }
    *0x21fa8 = 1;
    iVar1 = fcn.0001c5d4(0x219f0,0x201d0,0,apuStackX_8);
    if (-1 < iVar1) {
        *0x21fa8 = *apuStackX_8[0];
    }
    if (*0x20aa8 == '\0') {
        uVar2 = 0;
    }
    else {
        apuStackX_8[0] = 0x7;
        uVar2 = fcn.00014a50(0x21890,0x20ab8,0,apuStackX_8);
    }
    return uVar2;
}


/* fcn.000159d8 @ 0x159d8 */

uint64_t fcn.000159d8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int16_t *arg1_00;
    int64_t iStackX_8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (((arg1_00 == NULL) || (arg2 == 0)) || (*arg1_00 == 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iStackX_8 = 0;
        uVar1 = fcn.0001a5bc(arg2,arg1,&iStackX_8);
        if ((-1 < uVar1) && (uVar1 = fcn.0001aea8(iStackX_8), uVar1 == 0x8000000000000014)) {
            iVar2 = fcn.0001b05c(arg1_00,arg2,0,0);
            uVar1 = -(iVar2 != -0x7ffffffffffffff8) & 0x800000000000000f;
        }
        if (iStackX_8 != 0) {
            fcn.00019f20(iStackX_8);
        }
    }
    return uVar1;
}


/* fcn.0001741c @ 0x1741c */

uint64_t fcn.0001741c(uint32_t arg1)

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


/* fcn.00017678 @ 0x17678 */

int64_t fcn.00017678(int64_t arg1)

{
    char cVar1;
    int64_t noname_0;
    
    noname_0 = *(arg1 + 0x20);
    cVar1 = fcn.0001752c(noname_0,arg1);
    if (cVar1 == '\0') {
        noname_0 = 0;
    }
    else if ((-1 < *(noname_0 + 9)) || ((*(noname_0 + 6) & 0x8000000) != 0)) {
        noname_0 = fcn.00017648(noname_0,arg1);
    }
    return noname_0;
}


/* fcn.00017d40 @ 0x17d40 */

ulong fcn.00017d40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        iVar2 = fcn.00017678(arg3);
    }
    else {
        if (((*(arg3 + 0x30) == 0) || (cVar1 = fcn.0001752c(*(arg3 + 0x30),arg3), cVar1 == '\0')) ||
           (cVar1 = fcn.0001782c(*(arg3 + 0x30),arg1,arg2,0), cVar1 == '\0')) {
            iVar2 = fcn.00017940(arg1,arg2,auStackX_10,arg3);
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
        iVar2 = fcn.00017648(iVar2,arg3);
    }
    if (iVar2 == 0) {
code_r0x00017df0:
        *(arg3 + 0x30) = 0;
        uVar3 = 0x800000000000000e;
    }
    else {
        if (arg4 != '\0') {
            do {
                if ((*(iVar2 + 9) & 1) != 0) break;
                iVar2 = fcn.00017648(iVar2,arg3);
            } while (iVar2 != 0);
            if (iVar2 == 0) goto code_r0x00017df0;
        }
        if (in_stack_00000028 != NULL) {
            *in_stack_00000028 = iVar2;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00017b94 @ 0x17b94 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00017b94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint8_t *puVar3;
    bool bVar4;
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
                if (iVar8 < 1) goto code_r0x00017c4f;
                iVar8 = iVar8 + -2;
            }
            if (0 < iVar8) {
                puVar5 = puVar5 + (2 - puVar6);
                goto code_r0x00017ca0;
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
code_r0x00017ca0:
                puVar3 = *arg3;
                *arg3 = puVar5;
                if (puVar3 < puVar5) {
                    uVar7 = 0x8000000000000005;
                }
                else {
                    if ((*(arg1 + 6) & 0x4000000) == 0) {
                        iVar8 = *(var_30h + 0x10) + *(arg1 + 10) * -0x10;
                    }
                    else {
                        iVar8 = arg1 + 10;
                    }
                    if ((*(arg1 + 6) & 0x2000000) == 0) {
                        iVar9 = puVar6 - arg2;
                        do {
                            iVar2 = *(iVar9 + arg2);
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
                    fcn.0001fe00(arg4,iVar8,0x10);
                    *(var_30h + 0x30) = arg1;
                }
                return uVar7;
            }
        }
code_r0x00017c4f:
        arg1 = fcn.00017648(arg1,var_30h);
        if (in_stack_00000030 != '\0') {
            for (; (arg1 != 0 && ((*(arg1 + 6) & 0x1000000) == 0)); arg1 = fcn.00017648(arg1,var_30h)) {
            }
        }
        if (arg1 == 0) {
            return 0x800000000000000e;
        }
    } while( true );
}


/* fcn.0001a6b4 @ 0x1a6b4 */

int64_t * fcn.0001a6b4(int64_t arg1,int64_t arg2,int64_t arg3)

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
    if (*0x21e10 != NULL) {
        piVar10 = piVar8;
        do {
            piVar9 = *(*0x21e18 + piVar10 * 8);
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
        } while (piVar10 < *0x21e10);
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
        if ((*piVar8[0x4120] == iVar3) && (piVar8[0x4120][1] == *(arg2 + 8))) {
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
                for (piVar5 = piVar8[0x4121]; *piVar5 != piVar10; piVar5 = piVar5 + 1) {
                    piVar6 = piVar6 + 1;
                }
                if ((((((piVar9 == piVar6) && (iVar4 = fcn.00018e2c(arg1,piVar8[0x4121],iVar1), iVar4 == 0)) &&
                      ((iVar2 = *(arg1 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6)))) &&
                     ((iVar2 = *(arg1 + 2 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6)))) &&
                    ((iVar2 = *(arg1 + 4 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6)))) &&
                   ((iVar2 = *(arg1 + 6 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6))))
                goto code_r0x0001a87a;
            }
            piVar7 = arg1;
            for (piVar5 = piVar8[0x4121]; (*piVar5 != 0 && (*piVar5 == *piVar7)); piVar5 = piVar5 + 1) {
                piVar7 = piVar7 + 1;
            }
            if (*piVar5 == *piVar7) {
code_r0x0001a87a:
                return (piVar11 * 5 + 2) * 8 + 0x20900;
            }
        }
        piVar11 = piVar11 + 1;
        piVar8 = piVar8 + 5;
        if (0xef < piVar8) {
            return piVar10;
        }
    } while( true );
}


/* fcn.00011180 @ 0x11180 */

int64_t fcn.00011180(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.00019e54 @ 0x19e54 */

void fcn.00019e54(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00019e24(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011180(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001588c @ 0x1588c */

int64_t fcn.0001588c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        return -0x7ffffffffffffffe;
    }
    uVar2 = *arg1;
    for (piVar3 = arg2; piVar3 < arg2 + 2 + uVar2; piVar3 = piVar3 + 1) {
        if (*piVar3 == 0) {
            uVar4 = (piVar3 - arg2 >> 1) * 2 + 2;
            goto code_r0x000158f9;
        }
    }
    uVar4 = uVar2 + 3;
code_r0x000158f9:
    if (uVar2 < uVar4) {
        return -0x7ffffffffffffffe;
    }
    uVar1 = *arg2;
    iVar5 = -0x7ffffffffffffffd;
    if (*0x21cd0 != 0) {
        piVar6 = 0x21cd0;
        do {
            if (iVar5 != -0x7ffffffffffffffd) break;
            iVar5 = (**piVar6)(arg1,arg2,arg3);
            if (iVar5 == -0x7ffffffffffffff2) {
                *arg2 = 0;
                iVar5 = -0x7ffffffffffffffd;
            }
            piVar6 = piVar6 + 1;
        } while (*piVar6 != 0);
        if (-1 < iVar5) goto code_r0x0001595b;
    }
    *arg2 = uVar1;
code_r0x0001595b:
    if (iVar5 == -0x7ffffffffffffffd) {
        iVar5 = fcn.00017fa4(arg1,arg2,arg3,*0x263a4);
        return iVar5;
    }
    return iVar5;
}


/* fcn.00018e9c @ 0x18e9c */

ulong fcn.00018e9c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00018e68(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00018f12;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00018f12:
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


/* fcn.00018728 @ 0x18728 */

uint64_t fcn.00018728(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char16_t *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char16_t cVar5;
    char16_t *pcVar6;
    int iStackX_8;
    uint32_t auStack_28 [4];
    
    pcVar2 = L"MonotonicCounter";
    cVar5 = *arg1;
    pcVar6 = arg1;
    while ((cVar5 != L'\0' && (cVar5 == *pcVar2))) {
        pcVar6 = pcVar6 + 1;
        pcVar2 = pcVar2 + 1;
        cVar5 = *pcVar6;
    }
    if ((*pcVar6 == *pcVar2) && (iVar3 = fcn.0001a2d8(0x202a0,arg2,0x10), iVar3 == 0)) {
        auStack_28[0] = 4;
        auStack_28[1] = 0;
        if (arg3 == 4) {
            iVar3 = fcn.000157b8(0x212b8,0x202a0,0,auStack_28);
            if (iVar3 < 0) {
                return 0x8000000000000007;
            }
            return -(*arg4 != iStackX_8 + 1) & 0x8000000000000008;
        }
code_r0x000187ac:
        uVar4 = 0x8000000000000008;
    }
    else {
        cVar1 = fcn.000139e0(0x20370,arg1,arg2);
        if (cVar1 != '\0') {
            iVar3 = fcn.0001a2d8(arg2,0x20350,0x10);
            if ((iVar3 != 0) && (iVar3 = fcn.0001a2d8(arg2,0x20390,0x10), iVar3 != 0)) goto code_r0x000187ac;
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00018480 @ 0x18480 */

ulong fcn.00018480(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    uint in_register_0000000c;
    ulong uVar2;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if ((((piVar1 == NULL) || (*piVar1 == 0)) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        piVar1 = fcn.0001a6b4(piVar1,arg2,CONCAT71(arg3 >> 8,1));
        if ((piVar1 == NULL) || (*piVar1 != 1)) {
            uVar2 = 0x800000000000000e;
        }
        else if (arg3 != piVar1) {
            fcn.00011180(arg3,piVar1,0x18);
        }
    }
    return uVar2;
}


/* fcn.00018aa4 @ 0x18aa4 */

int64_t fcn.00018aa4(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uchar *puVar3;
    uint in_register_00000014;
    uchar auStack_48 [8];
    uchar auStack_40 [16];
    uint64_t uStack_30;
    uchar auStack_28 [32];
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (0x38 < CONCAT44(in_register_00000014,arg2)) {
        if (auStack_48 != puVar3) {
            fcn.00011180(auStack_48,arg1,0x36);
        }
        if ((1 < uStack_30) && ((uStack_30 & 1) == 0)) {
            iVar1 = fcn.00019e54(uStack_30,puVar3 + 0x38);
            if (iVar1 == 0) {
                return -0x7ffffffffffffff7;
            }
            if (*(iVar1 + -2 + (uStack_30 & 0xfffffffffffffffe)) == 0) {
                iVar2 = fcn.00018480(iVar1,auStack_40,auStack_28);
                if ((-1 < iVar2) && (puVar3 + 0x20 != auStack_28)) {
                    fcn.00011180(puVar3 + 0x20,auStack_28,0x18);
                }
                fcn.00019f20(iVar1);
                return iVar2;
            }
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.0001a9ec @ 0x1a9ec */

int64_t fcn.0001a9ec(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t arg2_00;
    int16_t iVar1;
    int16_t *piVar2;
    ulong *arg1_00;
    uint in_register_0000000c;
    int16_t *arg1_01;
    int64_t iVar3;
    int64_t iVar4;
    uint in_R8;
    int16_t *piVar5;
    
    piVar5 = CONCAT44(in_R8,arg3);
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    if ((((arg1_01 == NULL) || (*arg1_01 == 0)) || (arg2 == 0)) || ((piVar5 == NULL || (*piVar5 != 1)))) {
        return -0x7ffffffffffffffe;
    }
    if (*0x21de8 != '\0') {
        return -0x7ffffffffffffff1;
    }
    piVar2 = fcn.0001a6b4(arg1_01,arg2,0);
    if (piVar2 == NULL) {
        piVar2 = arg1_01;
        iVar3 = iVar4;
        do {
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + 1;
        } while (*piVar2 != 0);
        arg2_00 = iVar3 * 2 + 0x2a;
        arg1_00 = fcn.00019e24(iVar3,arg2_00);
        if (arg1_00 != NULL) {
            if (arg2_00 != 0) {
                arg1_00 = fcn.000111c0(arg1_00,arg2_00);
            }
            if (arg1_00 != NULL) {
                iVar1 = *arg1_01;
                piVar2 = arg1_01;
                while (iVar1 != 0) {
                    piVar2 = piVar2 + 1;
                    iVar4 = iVar4 + 1;
                    iVar1 = *piVar2;
                }
                fcn.00018e9c(arg1_00 + 5,iVar4 * 2 + 2U >> 1,arg1_01);
                *arg1_00 = *arg2;
                arg1_00[1] = *(arg2 + 8);
                if (arg1_00 + 2 != piVar5) {
                    fcn.00011180(arg1_00 + 2,arg3,0x18);
                }
                iVar4 = fcn.0001a8ac(0x21e18,0x21dd8,0x21e10,arg1_00);
                if (iVar4 < 0) {
                    fcn.00019f20(arg1_00);
                }
                goto code_r0x0001ab77;
            }
        }
        iVar4 = -0x7ffffffffffffff7;
    }
    else if (piVar2 != piVar5) {
        fcn.00011180(piVar2,arg3,0x18);
    }
code_r0x0001ab77:
    return iVar4;
}


/* fcn.000189e0 @ 0x189e0 */

ulong fcn.000189e0(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    ulong uVar2;
    uchar auStack_28 [8];
    uint64_t uStack_20;
    uchar auStack_18 [16];
    
    if (0x20 < CONCAT44(in_register_00000014,arg2)) {
        if (auStack_28 != CONCAT44(in_register_0000000c,arg1)) {
            fcn.00011180(auStack_28,arg1,0x20);
        }
        if (((CONCAT44(in_register_00000014,arg2) - 0x20 == uStack_20) && (1 < uStack_20)) && ((uStack_20 & 1) == 0)) {
            iVar1 = fcn.00019e54(uStack_20,CONCAT44(in_register_0000000c,arg1) + 0x20);
            if (iVar1 == 0) {
                return 0x8000000000000009;
            }
            if (*(iVar1 + -2 + (uStack_20 & 0xfffffffffffffffe)) == 0) {
                if (*0x21cc0 == '\0') {
                    uVar2 = fcn.000159d8(iVar1,auStack_18);
                }
                else {
                    uVar2 = 0x800000000000000f;
                }
                fcn.00019f20(iVar1);
                return uVar2;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00015f78 @ 0x15f78 */

int64_t fcn.00015f78(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    if ((((arg1 == 0) || ((arg1 & 0xffffff80U) != 0)) || (arg1 == 1)) ||
       ((((arg1 & 6) == 4 || (arg2 == 0)) || ((arg3 == 0 || (arg4 == 0)))))) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = *0x26688;
        if ((arg1 & 1U) != 0) {
            iVar2 = *0x26680;
        }
        iVar3 = 0;
        uVar1 = *(iVar2 + 8);
        iStack_58 = 0;
        iVar2 = fcn.00014038(iVar2,0,0,&iStack_58);
        if (iVar2 < 0) {
            if (iStack_58 != 0) {
                fcn.00011d4c(iStack_58,iVar3);
            }
        }
        else {
            uVar5 = ((iStack_30 + 1) * -0x10 - iStack_40) + iStack_50 + iStack_58;
            fcn.00011d4c(iStack_58,iVar3);
            *arg2 = uVar1;
            *arg3 = uVar5;
            uVar4 = 0xffff;
            if (uVar5 < 0xffff) {
                uVar4 = uVar5;
            }
            iVar3 = 0;
            if (-1 < uVar4 - 0x1a) {
                iVar3 = uVar4 - 0x1a;
            }
            iVar2 = 0;
            *arg4 = iVar3;
        }
    }
    return iVar2;
}


/* fcn.00018874 @ 0x18874 */

int64_t fcn.00018874(uint32_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint in_register_0000000c;
    uchar *puVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    int64_t iVar5;
    uchar auStack_38 [8];
    uchar auStack_30 [16];
    uint32_t uStack_20;
    uint64_t uStack_18;
    int64_t iStack_10;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (CONCAT44(in_register_00000014,arg2) < 0x31) {
        return -0x7ffffffffffffffe;
    }
    uVar4 = CONCAT44(in_register_00000014,arg2) - 0x30;
    if (auStack_38 != puVar3) {
        fcn.00011180(auStack_38,arg1,0x30);
    }
    uVar1 = uStack_18;
    if (uStack_18 < 2) {
        return -0x7ffffffffffffffe;
    }
    if ((uStack_18 & 1) != 0) {
        return -0x7ffffffffffffffe;
    }
    if (uVar4 < uStack_18) {
        return -0x7ffffffffffffffe;
    }
    iVar5 = uVar4 - uStack_18;
    arg1_00 = fcn.00019e54(uStack_18,puVar3 + 0x30);
    if (arg1_00 == 0) {
        return -0x7ffffffffffffff7;
    }
    if (*(arg1_00 + -2 + (uStack_18 & 0xfffffffffffffffe)) != 0) {
        return -0x7ffffffffffffffe;
    }
    if (iVar5 != iStack_10) {
        return -0x7ffffffffffffffe;
    }
    iVar5 = iVar2;
    if ((uVar4 != uVar1) && (iVar5 = fcn.00019e54(iStack_10,puVar3 + uStack_18 + 0x30), iVar5 == 0)) {
        return -0x7ffffffffffffff7;
    }
    if (*0x21d10 == '\0') {
code_r0x0001897c:
        if (iVar2 < 0) goto code_r0x0001899e;
    }
    else if ((uStack_20 & 0x20) == 0) {
        iVar2 = fcn.00018728(arg1_00,auStack_30,iStack_10,iVar5);
        goto code_r0x0001897c;
    }
    iVar2 = fcn.0001708c(arg1_00,auStack_30,uStack_20,iStack_10);
code_r0x0001899e:
    fcn.00019f20(arg1_00);
    if (iVar5 != 0) {
        fcn.00019f20(iVar5);
    }
    return iVar2;
}


/* fcn.000185e8 @ 0x185e8 */

int64_t fcn.000185e8(int64_t arg1,uint32_t arg2)

{
    int16_t *arg2_00;
    int16_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_00000014;
    uchar auStack_28 [8];
    uint64_t uStack_20;
    uchar auStack_18 [16];
    
    if (0x20 < CONCAT44(in_register_00000014,arg2)) {
        if (auStack_28 != arg1) {
            fcn.00011180(auStack_28,arg1,0x20);
        }
        if ((CONCAT44(in_register_00000014,arg2) - 0x20 == uStack_20) && (1 < uStack_20)) {
            arg2_00 = fcn.00019e54(uStack_20,arg1 + 0x20);
            if (arg2_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            for (piVar1 = arg2_00; piVar1 < uStack_20 + arg2_00; piVar1 = piVar1 + 1) {
                if (*piVar1 == 0) {
                    uVar2 = (piVar1 - arg2_00 >> 1) * 2 + 2;
                    goto code_r0x00018694;
                }
            }
            uVar2 = uStack_20 + 1;
code_r0x00018694:
            if (uVar2 <= uStack_20) {
                iVar3 = fcn.0001588c(&uStack_20,arg2_00,auStack_18);
                if (-1 < iVar3) {
                    fcn.00018e9c(arg1 + 0x20,uStack_20,arg2_00);
                    if (arg1 + 0x10 != auStack_18) {
                        fcn.00011180(arg1 + 0x10,auStack_18,0x10);
                    }
                }
                *(arg1 + 8) = uStack_20;
                fcn.00019f20(arg2_00);
                return iVar3;
            }
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.000184f0 @ 0x184f0 */

ulong fcn.000184f0(uint32_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    uint in_register_0000000c;
    uchar *puVar2;
    uint in_register_00000014;
    uint64_t uVar3;
    int64_t iVar4;
    uchar auStack_38 [8];
    uchar auStack_30 [24];
    uint64_t uStack_18;
    int64_t iStack_10;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (0x30 < CONCAT44(in_register_00000014,arg2)) {
        if (auStack_38 != puVar2) {
            fcn.00011180(auStack_38,arg1,0x30);
        }
        uVar3 = CONCAT44(in_register_00000014,arg2) - 0x30;
        if (((1 < uStack_18) && ((uStack_18 & 1) == 0)) && (uStack_18 <= uVar3)) {
            iVar4 = uVar3 - uStack_18;
            arg1_00 = fcn.00019e54(uStack_18,puVar2 + 0x30);
            if (arg1_00 == 0) {
                return 0x8000000000000009;
            }
            if ((*(arg1_00 + -2 + (uStack_18 & 0xfffffffffffffffe)) == 0) && (iVar4 == iStack_10)) {
                uVar1 = fcn.000157b8(arg1_00,auStack_30,puVar2 + 0x18,&iStack_10);
                *(puVar2 + 0x28) = iStack_10;
                fcn.00019f20(arg1_00);
                return uVar1;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00018e68 @ 0x18e68 */

uint64_t fcn.00018e68(uint32_t arg1,int64_t arg2)

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


/* fcn.00019dbc @ 0x19dbc */

void fcn.00019dbc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001904c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00019018 @ 0x19018 */

uchar * fcn.00019018(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000111c0 @ 0x111c0 */

int64_t fcn.000111c0(int64_t arg1,int64_t arg2)

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


/* fcn.0001a564 @ 0x1a564 */

void fcn.0001a564(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x21da8;
    if (*0x21da8 != NULL) {
        if ((*0x21da8)[1] != 0) {
            fcn.000112a0(**0x21da8,(*0x21da8)[1],0);
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


/* fcn.000112a0 @ 0x112a0 */

int64_t fcn.000112a0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001acb4 @ 0x1acb4 */

uint64_t fcn.0001acb4(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    uint8_t uVar1;
    int *in_RAX;
    uint in_register_0000000c;
    int *piVar2;
    int *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int *piVar6;
    int *piVar7;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    if (((piVar2 != NULL) && (0x2b < *(piVar2 + 1))) && (*piVar2 == 0x10000)) {
        piVar3 = *(piVar2 + 1) + piVar2;
        piVar7 = 0xffffffffffffffff;
        if (piVar3 >= piVar2) {
            piVar7 = piVar3;
        }
        in_RAX = -(piVar3 < piVar2) & 0x8000000000000005;
        if ((-1 < in_RAX) && (piVar2[7] != 0)) {
            uVar1 = *(piVar2 + 10);
            in_RAX = CONCAT71(in_RAX >> 8,uVar1);
            if (uVar1 < 4) {
                if (uVar1 == 3) {
                    piVar3 = piVar2 + 0x3e;
                    piVar6 = 0xffffffffffffffff;
                    if (piVar3 >= piVar2 + 0xb) {
                        piVar6 = piVar3;
                    }
                    in_RAX = -(piVar3 < piVar2 + 0xb) & 0x8000000000000005;
                    if ((in_RAX < 0) || (piVar7 <= piVar6)) goto code_r0x0001ad22;
                    for (; *piVar6 != 0; piVar6 = piVar6 + 2) {
                        if (piVar7 <= piVar6) goto code_r0x0001ad22;
                    }
                    uVar4 = *(piVar2 + 6);
                    in_RAX = piVar2 + uVar4;
                    if (piVar6 + 2 != in_RAX) goto code_r0x0001ad22;
                }
                else {
                    uVar4 = *(piVar2 + 6);
                    if (*(piVar2 + 6) != 0x2c) goto code_r0x0001ad22;
                }
                if (piVar2[1] != uVar4) {
                    for (in_RAX = uVar4 + piVar2; *in_RAX != 0; in_RAX = in_RAX + 2) {
                        if (((*in_RAX == 0x23) && (uVar5 = uVar5 + 1, 0xff < uVar5)) || (piVar7 <= in_RAX))
                        goto code_r0x0001ad22;
                    }
                    in_RAX = in_RAX + 2;
                    if (in_RAX != piVar7) goto code_r0x0001ad22;
                }
                return CONCAT71(in_RAX >> 8,1);
            }
        }
    }
code_r0x0001ad22:
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001ad94 @ 0x1ad94 */

uint64_t fcn.0001ad94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint64_t uVar8;
    
    uVar4 = 0;
    uVar7 = 0;
    uVar8 = uVar4;
    if (*0x21e50 != 0) {
        uVar6 = *0x21e40;
        do {
            uVar2 = 0;
            if ((*(uVar6 + 8) == *arg2) && (*(uVar6 + 0x10) == *(arg2 + 8))) {
                if (*(uVar6 + 4) != *(uVar6 + 6)) {
                    piVar5 = arg1;
                    do {
                        iVar1 = *(((*(uVar6 + 6) + uVar6) - arg1) + piVar5);
                        if ((iVar1 == 0) && (*piVar5 == 0)) goto code_r0x0001adfa;
                        if ((iVar1 != *piVar5) || (iVar1 == 0x23)) {
                            if (((iVar1 != 0x23) || (uVar3 = *piVar5 - 0x30, 0x36 < uVar3)) ||
                               ((0x7e0000007e03ffU >> (uVar3 & 0x3f) & 1) == 0)) goto code_r0x0001ae0f;
                            if (uVar2 != 0xff) {
                                uVar2 = uVar2 + 1;
                            }
                        }
                        piVar5 = piVar5 + 1;
                    } while( true );
                }
                uVar2 = 0xff;
code_r0x0001adfa:
                if ((uVar8 == 0) || (uVar2 < uVar7)) {
                    uVar7 = uVar2;
                    uVar8 = uVar6;
                }
                if (uVar7 == 0) break;
            }
code_r0x0001ae0f:
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 + *(uVar6 + 4);
        } while (uVar4 < *0x21e50);
    }
    if (arg3 != 0) {
        *arg3 = uVar7;
    }
    return uVar8;
}


/* fcn.0001b214 @ 0x1b214 */

ulong fcn.0001b214(uint32_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint32_t *puVar2;
    
    puVar2 = CONCAT44(in_register_00000014,arg2);
    if (*0x21e30 == 0) {
        uVar1 = 0x8000000000000006;
    }
    else if ((puVar2 == NULL) || ((*puVar2 != 0 && (CONCAT44(in_register_0000000c,arg1) == 0)))) {
        uVar1 = 0x8000000000000002;
    }
    else if (*puVar2 < *0x21e3c) {
        *puVar2 = *0x21e3c;
        uVar1 = 0x8000000000000005;
    }
    else {
        if ((*0x21e3c != 0) && (CONCAT44(in_register_0000000c,arg1) != *0x21e40)) {
            fcn.00011180(CONCAT44(in_register_0000000c,arg1),*0x21e40,*0x21e3c);
        }
        *puVar2 = *0x21e3c;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001b1e0 @ 0x1b1e0 */

ulong fcn.0001b1e0(void)

{
    ulong uVar1;
    
    if (*0x21e30 == 0) {
        return 0x8000000000000006;
    }
    uVar1 = 0x8000000000000014;
    if (*0x21e4c == '\0') {
        uVar1 = 0x8000000000000008;
    }
    return uVar1;
}


/* fcn.0001ba50 @ 0x1ba50 */

int64_t fcn.0001ba50(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    *0x21e94 = 0;
    *0x22010 = 0;
    iVar1 = fcn.0001503c(0x218b0,0x20a68,2,8);
    iVar2 = 0;
    if (iVar1 < 0) {
        iVar2 = iVar1;
    }
    return iVar2;
}


/* fcn.0001c230 @ 0x1c230 */

ulong fcn.0001c230(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
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
    iVar1 = fcn.00014a50(0x21920,&uStack_148,auStackX_18,&uStackX_20);
    if (iVar1 == 0) {
        fcn.0001fdae(auStack_108,0x2a,0);
        iVar1 = fcn.0001a2d8(auStack_108,auStack_b0,0x28);
        if ((iVar1 != 0) || (iVar1 = fcn.0001a2d8(auStack_108,auStack_d8,0x28), iVar1 != 0)) {
            uVar2 = 2;
            if ((1 < arg2) && (*(arg1 + -2 + (arg2 & 0xfffffffffffffffeU)) == 0)) {
                arg2 = arg2 + -2;
            }
            if (arg2 - 6U < 0x23) {
                fcn.0001fdae(auStack_138,0x2a,0);
                fcn.0001fe00(auStack_138,arg1,arg2);
                fcn.0001c50c(auStack_138);
                iVar1 = fcn.0001a2d8(arg1,auStack_b0,0x28);
                if ((iVar1 != 0) && (iVar1 = fcn.0001a2d8(auStack_138,auStack_b0,0x28), iVar1 != 0)) {
                    iVar1 = fcn.0001a2d8(arg1,auStack_d8,0x28);
                    if ((iVar1 != 0) && (iVar1 = fcn.0001a2d8(auStack_138,auStack_d8,0x28), iVar1 != 0)) {
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


/* fcn.0001ba00 @ 0x1ba00 */

int64_t fcn.0001ba00(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    *0x21e94 = 1;
    *0x22010 = 1;
    iVar1 = fcn.0001503c(0x218b0,0x20a68,2,8);
    iVar2 = 0;
    if (iVar1 < 0) {
        iVar2 = iVar1;
    }
    return iVar2;
}


/* fcn.0001fda0 @ 0x1fda0 */

int64_t fcn.0001fda0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001b850 @ 0x1b850 */

void fcn.0001b850(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x21d68 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x21d68 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.0001a224 @ 0x1a224 */

void fcn.0001a224(int64_t arg1)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x21d68 + 0x50))(0x200,8,0x1b8f4,0,arg1);
    if (-1 < iVar1) {
        (**(*0x21d68 + 0xa8))(0x20010,*arg1,in_stack_00000028);
    }
    return;
}


/* fcn.0001c3cc @ 0x1c3cc */

void fcn.0001c3cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char16_t *pcVar2;
    uchar *arg1_00;
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
    iVar1 = fcn.00014a50(0x21920,&uStack_118,auStackX_20,&iStack_108);
    if (iVar1 == 0) {
        fcn.0001fdae(auStack_100,0x2a,0);
        fcn.0001fe00(auStack_100,arg2,arg3);
        fcn.0001c50c(auStack_100);
        pcVar2 = L"$SETADMINPASSWD";
        for (; (*arg1 != L'\0' && (*arg1 == *pcVar2)); arg1 = arg1 + 2) {
            pcVar2 = pcVar2 + 1;
        }
        if (*arg1 == *pcVar2) {
            fcn.0001fdae(auStack_a0,0x28,0);
            arg1_00 = auStack_a0;
        }
        else {
            fcn.0001fdae(auStack_c8,0x28,0);
            arg1_00 = auStack_c8;
        }
        fcn.0001fe00(arg1_00,auStack_100,0x28);
        fcn.0001503c(0x21920,&uStack_118,auStackX_20[0],iStack_108);
    }
    return;
}


/* fcn.0001c50c @ 0x1c50c */

void fcn.0001c50c(int64_t arg1)

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
    iVar1 = fcn.0001e2bc(&uStack_e8,arg1,0x28);
    if (iVar1 == 0) {
        iVar1 = fcn.0001e3b8(&uStack_e8,auStack_108);
        if (iVar1 == 0) {
            fcn.0001fdae(arg1,0x28,0);
            if (arg1 != auStack_108) {
                fcn.00011180(arg1,auStack_108,0x20);
            }
        }
    }
    return;
}


/* fcn.0001e2bc @ 0x1e2bc */

ulong fcn.0001e2bc(uint32_t arg1,int64_t arg2,int64_t arg3)

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
                    fcn.00011180(iVar3,arg2,0x40);
                }
                iVar1 = fcn.0001e0d0(arg1_00,iVar3);
                if (iVar1 < 0) goto code_r0x0001e2e4;
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
                    fcn.00011180(iVar3,arg2,uVar4);
                }
                *(arg1_00 + 5) = arg1_00[5] + uVar4;
                arg2 = arg2 + uVar4;
                uVar6 = uVar5 - uVar4;
                if (arg1_00[5] == 0x40) {
                    iVar1 = fcn.0001e0d0(arg1_00,arg1_00 + 0x2c);
                    if (iVar1 < 0) goto code_r0x0001e2e4;
                    *arg1_00 = *arg1_00 + 0x200;
                    *(arg1_00 + 5) = 0;
                }
            }
            iVar1 = uVar6;
        }
        uVar2 = 0;
    }
    else {
code_r0x0001e2e4:
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


/* fcn.0001e3b8 @ 0x1e3b8 */

ulong fcn.0001e3b8(int64_t arg1,int64_t arg2)

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
            fcn.0001e0d0(arg1,arg1 + 0x2c);
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
        fcn.0001e0d0(arg1,arg1 + 0x2c);
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


/* fcn.0001c5d4 @ 0x1c5d4 */

int64_t fcn.0001c5d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    int64_t iStack_10;
    
    cVar1 = fcn.00012b38(arg1,arg2,&iStack_18,&iStack_20);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffffffffff2;
    }
    else if ((arg4 == 0) || (in_stack_00000028 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        if ((arg3 != 0) && (iVar2 = fcn.000179c0(iStack_20,iStack_28,arg3), iVar2 < 0)) {
            return iVar2;
        }
        uVar3 = fcn.000174ac(iStack_10,iStack_18,in_stack_00000028,iStack_28);
        *arg4 = uVar3;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001c814 @ 0x1c814 */

void fcn.0001c814(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001503c(0x219c0,0x200c0,7,1);
    if (-1 < iVar1) {
        *0x21fac = arg1;
    }
    return;
}


/* fcn.0001f830 @ 0x1f830 */

int64_t fcn.0001f830(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

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
        iVar1 = (**(*0x21d50 + 0x48))(arg1,0x20020,0,&uStackX_20,0);
        if (iVar1 == -0x7ffffffffffffffb) {
            fcn.0001f8e0(auStack_30);
            iVar1 = (**(*0x21d50 + 0x58))(arg1,0x20020,0x27,0x28,auStack_30);
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


/* fcn.0001c684 @ 0x1c684 */

void fcn.0001c684(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t in_stack_00000028;
    
    iVar1 = fcn.0001c5d4(arg1,0x20020,0,&stack0x00000028);
    if ((iVar1 < 0) || (arg2 != 1)) {
        fcn.0001503c(arg1,0x20020,6,1);
    }
    else {
        if (in_stack_00000028 != arg3) {
            fcn.00011180(in_stack_00000028,arg3,1);
        }
        fcn.0001c5d4(arg1,0x20020,0,&stack0x00000028);
    }
    return;
}


/* fcn.0001c85c @ 0x1c85c */

int64_t fcn.0001c85c(int64_t arg1)

{
    int64_t iVar1;
    char16_t *arg1_00;
    ulong noname_0;
    int64_t in_RDX;
    int iVar2;
    ulong in_R8;
    uchar *arg4;
    uchar auStackX_18 [16];
    
    iVar1 = fcn.0001c814(arg1);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar2 = arg1;
    if (iVar2 != 1) {
        if (iVar2 != 2) {
            if (iVar2 != 3) {
                return iVar1;
            }
            iVar1 = 0x20aa4;
            arg1_00 = L"DeployedMode";
            goto code_r0x0001c92f;
        }
        in_R8 = 0;
        arg4 = auStackX_18;
        in_RDX = 0x20020;
        noname_0 = 0x20f40;
        iVar1 = fcn.0001c5d4(0x20f40,0x20020,0,arg4);
        if (-1 < iVar1) {
            in_RDX = 0x20f40;
            *0x20aa9 = 2;
            iVar1 = fcn.0001f830(noname_0,0x20f40,in_R8,arg4);
        }
        *0x20aa9 = 4;
        if (iVar1 < 0) {
            fcn.0001c814(0);
            return iVar1;
        }
        iVar1 = fcn.0001c684(0x21060,in_RDX,in_R8,0x20a9c);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    iVar1 = *0x21fac * 6 + 0x20a94;
    arg1_00 = L"SetupMode";
code_r0x0001c92f:
    iVar1 = fcn.0001c684(arg1_00,in_RDX,in_R8,iVar1);
    return iVar1;
}


/* fcn.0001ca94 @ 0x1ca94 */

ulong fcn.0001ca94(uint32_t arg1,uint32_t arg2)

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
        fcn.0001a2d8(arg1,CONCAT44(in_register_00000014,arg2),iVar4);
        if (extraout_RAX == 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0001cd3c @ 0x1cd3c */

ulong fcn.0001cd3c(void)

{
    ulong uVar1;
    ulong auStackX_8 [4];
    
    if (*0x20aa8 == '\0') {
        uVar1 = 0;
    }
    else {
        auStackX_8[0] = 7;
        uVar1 = fcn.00014a50(0x21890,0x20ab8,0,auStackX_8);
    }
    return uVar1;
}


/* fcn.0001c940 @ 0x1c940 */

int64_t fcn.0001c940(int64_t arg1)

{
    int64_t iVar1;
    char16_t *arg1_00;
    int64_t in_RDX;
    int iVar2;
    uint64_t arg1_01;
    ulong in_R8;
    
    arg1_01 = arg1 & 0xffffffff;
    iVar2 = arg1;
    if (*0x21fac == 0) {
        iVar1 = fcn.0001c85c(arg1_01);
        return iVar1;
    }
    if (*0x21fac == 1) {
        iVar1 = fcn.0001c814(arg1_01);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (iVar2 != 0) {
            if (iVar2 != 2) {
                return iVar1;
            }
            iVar1 = *0x21fac * 6 + 0x20a90;
            arg1_00 = L"AuditMode";
            goto code_r0x0001c9d5;
        }
        iVar1 = 0x20a94;
    }
    else if (*0x21fac == 2) {
        iVar1 = fcn.0001c814(arg1_01);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (iVar2 != 3) {
            return iVar1;
        }
        iVar1 = fcn.0001c684(0x21060,in_RDX,in_R8,0x20aa2);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = fcn.0001c684(0x21080,in_RDX,in_R8,0x20aa4);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = 0x20aa6;
    }
    else {
        if (*0x21fac != 3) {
            return -0x7ffffffffffffffe;
        }
        iVar1 = fcn.0001c814(arg1_01);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (iVar2 == 0) {
            iVar1 = 0x20a92;
            arg1_00 = L"DeployedMode";
            goto code_r0x0001c9d5;
        }
        if (iVar2 != 1) {
            return iVar1;
        }
        iVar1 = fcn.0001c684(0x21080,in_RDX,in_R8,0x20a98);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = 0x20a9a;
    }
    arg1_00 = L"SetupMode";
code_r0x0001c9d5:
    iVar1 = fcn.0001c684(arg1_00,in_RDX,in_R8,iVar1);
    return iVar1;
}


/* fcn.0001cc3c @ 0x1cc3c */

//WARNING: Type propagation algorithm not settling

bool fcn.0001cc3c(void)

{
    char cVar1;
    int64_t *piVar2;
    
    if (*0x20aa8 == '\0') {
        return false;
    }
    fcn.0001cd3c();
    cVar1 = '\0';
    piVar2 = 0x21a40;
    do {
        if (cVar1 != '\0') goto code_r0x0001cc8e;
        cVar1 = (**piVar2)();
        piVar2 = piVar2 + 1;
    } while (*piVar2 != 0);
    if (cVar1 != '\0') {
code_r0x0001cc8e:
        cVar1 = '\0';
        piVar2 = 0x21ab0;
        do {
            if (cVar1 != '\0') {
                return true;
            }
            cVar1 = (**piVar2)();
            piVar2 = piVar2 + 1;
        } while (*piVar2 != 0);
        if ((cVar1 != '\0') || (*0x20aad == '\x01')) {
            return true;
        }
    }
    return *0x21fac == 2 && *0x20aa9 == '\x02';
}


/* fcn.0001caf4 @ 0x1caf4 */

uchar fcn.0001caf4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    
    iVar1 = fcn.0001a2d8(arg2,0x20020,0x10);
    uVar2 = 0;
    if (iVar1 == 0) {
        iVar1 = fcn.0001ca94(arg1,0x20f40);
        uVar2 = 0;
        if (iVar1 == 0) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0001cb44 @ 0x1cb44 */

uchar fcn.0001cb44(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    
    iVar1 = fcn.0001a2d8(arg2,0x20020,0x10);
    uVar2 = 0;
    if (iVar1 == 0) {
        iVar1 = fcn.0001ca94(arg1,0x20f38);
        uVar2 = 0;
        if (iVar1 == 0) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0001cb94 @ 0x1cb94 */

uint64_t fcn.0001cb94(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t arg1_00;
    uint64_t uVar3;
    uchar auStack_48 [64];
    
    uVar3 = 0;
    iVar1 = fcn.0001a2d8(arg2,0x20020,0x10);
    arg1_00 = arg1;
    if ((iVar1 == 0) && (iVar1 = fcn.0001ca94(arg1_00,0x21040), iVar1 == 0)) {
        return 1;
    }
    uVar2 = fcn.0001ca94(arg1_00,0x21a10);
    if (uVar2 == 0) {
        for (; uVar3 < 0x10000; uVar3 = uVar3 + 1) {
            fcn.00018fe8(auStack_48,0x3c,0x21a28,0x21a10);
            uVar2 = fcn.0001ca94(arg1_00,auStack_48);
            if (uVar2 == 0) {
                return 1;
            }
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.0001ccf0 @ 0x1ccf0 */

uchar fcn.0001ccf0(void)

{
    int64_t iVar1;
    uchar uVar2;
    uint8_t auStackX_8 [16];
    uchar auStackX_18 [16];
    
    iVar1 = fcn.0001c5d4(0x20f40,0x20020,auStackX_8,auStackX_18);
    uVar2 = 0;
    if (-1 < iVar1) {
        uVar2 = 0;
        if ((auStackX_8[0] & 0x30) != 0) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0001d9d8 @ 0x1d9d8 */

int64_t fcn.0001d9d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    iVar6 = fcn.0001a2d8(uVar2 + 0x18,0x200d0,0x10);
    if (iVar6 != 0) {
        return -0x7fffffffffffffe6;
    }
    cVar3 = fcn.0001cc3c();
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
        iVar6 = fcn.0001fb0c(uVar2,&uStack_50);
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
    iVar6 = fcn.0001a2d8(arg2,0x20090,0x10);
    if (iVar6 == 0) {
        uVar8 = 2;
code_r0x0001dbca:
        if ((arg3 & 1U) == 0) {
            return -0x7ffffffffffffffe;
        }
        cVar5 = fcn.0001ccf0();
        if (cVar5 != '\0') {
            cVar5 = cVar3;
            goto code_r0x0001dbee;
        }
    }
    else {
        cVar4 = fcn.0001caf4(arg1,arg2);
        if (cVar4 != '\0') {
            uVar8 = 0;
            goto code_r0x0001dbca;
        }
        cVar4 = fcn.0001cb44(arg1,arg2);
        if (cVar4 != '\0') {
            uVar8 = 1;
            goto code_r0x0001dbca;
        }
        cVar4 = fcn.0001cb94(arg1,arg2);
        if (cVar4 != '\0') {
            uVar8 = 3;
            goto code_r0x0001dbca;
        }
code_r0x0001dbee:
        if (cVar5 == '\0') {
            iStack_70 = 0x21fb0;
            iVar6 = fcn.0001d858(arg1,arg2,arg3 & 0xffffffff,*arg4);
            if (iVar6 < 0) {
                return -0x7fffffffffffffe6;
            }
            if (uVar8 < 2) {
code_r0x0001dd49:
                iVar6 = fcn.0001d598(iStack_60,iVar9,iStack_70,iStack_68);
            }
            else {
                if (uVar8 == 2) {
code_r0x0001dd15:
                    iVar6 = fcn.0001d6e4(0x20f38,0x20020,iStack_60,iVar9);
                    if (-1 < iVar6) goto code_r0x0001dd90;
                    goto code_r0x0001dd49;
                }
                if (uVar8 == 3) {
                    iVar6 = fcn.0001d6e4(0x21140,0x20090,iStack_60,iVar9);
                    if (-1 < iVar6) goto code_r0x0001dd90;
                    goto code_r0x0001dd15;
                }
                if (uVar8 == 4) {
                    iVar6 = (**(*0x21e98 + 8))(*0x21e98,iStack_60,iVar9,0,0,&iStack_70,&iStack_68,9,2);
                    if (iVar6 < 0) {
                        return -0x7fffffffffffffe6;
                    }
                    if ((in_stack_00000030 != 0) &&
                       (iVar9 = fcn.0001a2d8(in_stack_00000040 + 0x10,iStack_70,0x20), iVar9 != 0)) {
                        return -0x7fffffffffffffe6;
                    }
                    fcn.0001fe00(in_stack_00000040 + 0x10,iStack_70,0x20);
                }
            }
            if (iVar6 < 0) {
                return -0x7fffffffffffffe6;
            }
            goto code_r0x0001dd90;
        }
    }
    iVar6 = 0;
code_r0x0001dd90:
    *in_stack_00000028 = *in_stack_00000028 - uStack_48;
    *arg4 = uStack_40 + uStack_48;
    if (((*in_stack_00000028 != 0) && (1 < uVar8 - 3)) &&
       (iVar6 = fcn.0001f978(uStack_40 + uStack_48,*in_stack_00000028,&uStack_40), -1 < iVar6)) {
        if ((uVar8 == 0) && (1 < uStack_40)) {
            return -0x7ffffffffffffffe;
        }
        if ((arg3 & 0x40U) != 0) {
            if (uVar8 == 0) {
                return -0x7ffffffffffffffe;
            }
            iVar6 = fcn.0001d2d0(*arg4,in_stack_00000028,in_stack_00000030,in_stack_00000038);
            if ((iVar6 < 0) && (iStack_58 != *(in_stack_00000040 + 8))) {
                *in_stack_00000028 = 0;
                iVar6 = 0;
            }
        }
    }
    return iVar6;
}


/* fcn.0001defc @ 0x1defc */

ulong fcn.0001defc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    iVar3 = fcn.0001a2d8(puVar1 + 0x10,0x201a0,0x10);
    if (iVar3 != 0) {
        return 0x800000000000001a;
    }
    if (*in_stack_00000028 < 0x230) {
        return 0x800000000000001a;
    }
    cVar2 = fcn.0001caf4(arg1,arg2);
    if (cVar2 != '\0') {
        return 0x8000000000000002;
    }
    cVar2 = fcn.0001cb44(arg1,arg2);
    if (cVar2 != '\0') {
        return 0x8000000000000002;
    }
    iVar3 = fcn.0001a2d8(arg2,0x20090,0x10);
    if (iVar3 == 0) {
        return 0x8000000000000002;
    }
    cVar2 = fcn.0001cb94(arg1,arg2);
    if (cVar2 != '\0') {
        return 0x8000000000000002;
    }
    if ((arg3 & 0x40U) == 0) {
        if ((in_stack_00000030 != 0) && (*puVar1 <= *(in_stack_00000040 + 8))) {
            return 0x800000000000001a;
        }
    }
    else if ((in_stack_00000030 != 0) && (*puVar1 < *(in_stack_00000040 + 8))) goto code_r0x0001e023;
    *(in_stack_00000040 + 8) = *puVar1;
code_r0x0001e023:
    puStack0000000000000038 = puVar1 + 6;
    iVar3 = fcn.0001de18(*arg4,*in_stack_00000028,puStack0000000000000038);
    if (-1 < iVar3) {
        uStackX_20 = 0x100;
        uVar4 = (**(*0x21e98 + 0x10))(*0x21e98,0x20060,1,&stack0x00000038,&uStackX_20,0x21ff0);
        if ((in_stack_00000030 == 0) || (iVar3 = fcn.0001a2d8(in_stack_00000040 + 0x10,0x21ff0,0x20), iVar3 == 0)) {
            fcn.0001fe00(in_stack_00000040 + 0x10,0x21ff0,0x20);
            *in_stack_00000028 = *in_stack_00000028 - 0x230;
            *arg4 = puVar1 + 0x46;
            return uVar4;
        }
    }
    return 0x800000000000001a;
}


/* fcn.0001fb0c @ 0x1fb0c */

ulong fcn.0001fb0c(uint32_t arg1,int64_t arg2)

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
        *arg2 = *arg2 + *((uVar4 + iVar10) * 4 + 0x21bc0) * 0x15180 + (uVar5 * 0x3c + uVar2) * 0x3c +
                        uVar1 * 0x15180 + -0x15180 + uVar6;
        uVar11 = 0;
    }
    return uVar11;
}


/* fcn.0001d858 @ 0x1d858 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h

int64_t fcn.0001d858(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    iVar3 = (**(*0x21e98 + 8))(*0x21e98,arg4 + 0x28,(iVar5 - (arg4 + 0x28)) + arg4,0,0,&pcStackX_20,aiStack_78,6
                               ,1);
    if (-1 < iVar3) {
        cVar1 = *pcStackX_20;
        if (cVar1 == '\x01') {
            uVar4 = 0x20060;
            *in_stack_00000038 = 0x20;
        }
        else if (cVar1 == '\x02') {
            uVar4 = 0x20210;
            *in_stack_00000038 = 0x30;
        }
        else {
            if (cVar1 != '\x03') {
                return -0x7ffffffffffffffd;
            }
            uVar4 = 0x20250;
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
        iVar3 = (**(*0x21e98 + 0x10))(*0x21e98,uVar4,5,&iStack_50,aiStack_78,0x21fb0);
    }
    return iVar3;
}


/* fcn.0001d6e4 @ 0x1d6e4 */

//WARNING: Removing unreachable block (ram,0x0001d748)
//WARNING: Removing unreachable block (ram,0x0001d74b)
//WARNING: Removing unreachable block (ram,0x0001d754)
//WARNING: Removing unreachable block (ram,0x0001d761)
//WARNING: Removing unreachable block (ram,0x0001d77f)
//WARNING: Removing unreachable block (ram,0x0001d7a3)
//WARNING: Removing unreachable block (ram,0x0001d804)
//WARNING: Removing unreachable block (ram,0x0001d7f3)
//WARNING: Removing unreachable block (ram,0x0001d802)
//WARNING: Removing unreachable block (ram,0x0001d807)
//WARNING: Removing unreachable block (ram,0x0001d819)
//WARNING: Removing unreachable block (ram,0x0001d826)
//WARNING: Removing unreachable block (ram,0x0001d82a)

ulong fcn.0001d6e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStack_30;
    
    fcn.0001c5d4(arg1,arg2,0,&iStack_30);
    return 0x800000000000001a;
}


/* fcn.0001d598 @ 0x1d598 */

//WARNING: Removing unreachable block (ram,0x0001d603)
//WARNING: Removing unreachable block (ram,0x0001d627)
//WARNING: Removing unreachable block (ram,0x0001d645)
//WARNING: Removing unreachable block (ram,0x0001d620)
//WARNING: Removing unreachable block (ram,0x0001d655)
//WARNING: Removing unreachable block (ram,0x0001d69f)
//WARNING: Removing unreachable block (ram,0x0001d6ac)

ulong fcn.0001d598(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStack_20;
    
    fcn.0001c5d4(0x20f40,0x20020,0,&iStack_20);
    return 0x800000000000001a;
}


/* fcn.0001f978 @ 0x1f978 */

//WARNING: Variable defined which should be unmapped: var_1ch

uint64_t fcn.0001f978(int64_t arg1,uint32_t arg2,int64_t arg3)

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
            iVar8 = 0x20ad0;
            do {
                iVar3 = fcn.0001a2d8(arg1,iVar8,0x10);
                if (iVar3 == 0) break;
                uVar2 = uVar2 + 1;
                iVar8 = iVar8 + 0x10;
            } while (uVar2 < 9);
            if ((((8 < uVar2) || (uVar1 < 0x2d)) || (0x30000 < uVar1)) ||
               ((*(arg1 + 0x14) != 0 || (uVar2 = *(arg1 + 0x18), (uVar5 - 0x1c) % uVar2 != 0)))) {
                return 0x8000000000000002;
            }
            if ((*arg1 == *0x201c0) && (*(arg1 + 8) == *0x201c8)) {
                fcn.0001a564();
                iVar8 = fcn.0001f1d8(arg1 + 0x2c,uVar2 - 0x10);
                uVar6 = ~-(iVar8 != 0) & 0x8000000000000002;
                fcn.0001a564();
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


/* fcn.0001d2d0 @ 0x1d2d0 */

ulong fcn.0001d2d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t arg3_00;
    int64_t arg2_00;
    int64_t iVar6;
    int64_t arg1_00;
    uint32_t uVar7;
    uint32_t uStackX_18;
    
    if (((arg3 != 0) && (arg4 != 0)) && (arg1 != arg3)) {
        for (; (arg4 != 0 && (*(arg3 + 0x10) <= arg4)); arg3 = arg3 + *(arg3 + 0x10)) {
            uVar5 = ((*(arg3 + 0x10) - *(arg3 + 0x14)) - 0x1c) / *(arg3 + 0x18);
            iVar6 = arg3 + 0x1c + *(arg3 + 0x14);
            if (uVar5 != 0) {
                uVar5 = uVar5 & 0xffffffff;
code_r0x0001d34f:
                arg3_00 = *arg2;
                arg2_00 = arg1;
joined_r0x0001d358:
                do {
                    if ((arg3_00 == 0) || (uVar1 = *(arg2_00 + 0x10), arg3_00 < uVar1)) goto code_r0x0001d437;
                    uVar2 = *(arg2_00 + 0x14);
                    uVar3 = *(arg2_00 + 0x18);
                    arg1_00 = arg2_00 + 0x1c + uVar2;
                    iVar4 = fcn.0001a2d8(arg3,arg2_00,0x10);
                    if ((iVar4 == 0) && (*(arg3 + 0x18) == uVar3)) {
                        uVar7 = 1;
                        uStackX_18 = ((uVar1 - uVar2) - 0x1c) / uVar3;
                        if (uStackX_18 != 0) {
                            do {
                                iVar4 = fcn.0001a2d8(iVar6 + 0x10,arg1_00 + 0x10,*(arg3 + 0x18) - 0x10);
                                if (iVar4 == 0) {
                                    if (uStackX_18 == 1) {
                                        uVar1 = *(arg2_00 + 0x10);
                                        *arg2 = *arg2 - uVar1;
                                        arg3_00 = arg3_00 - uVar1;
                                        fcn.0001fe00(arg2_00,*(arg2_00 + 0x10) + arg2_00,arg3_00);
                                        goto joined_r0x0001d358;
                                    }
                                    fcn.0001fe00(arg1_00,*(arg2_00 + 0x18) + arg1_00,
                                                 ((*arg2 - *(arg2_00 + 0x18)) - arg1_00) + arg1);
                                    *(arg2_00 + 0x10) = *(arg2_00 + 0x10) - *(arg2_00 + 0x18);
                                    *arg2 = *arg2 - *(arg2_00 + 0x18);
                                    if (*(arg2_00 + 0x10) - *(arg2_00 + 0x14) == 0x1c) break;
                                }
                                else {
                                    arg1_00 = arg1_00 + *(arg2_00 + 0x18);
                                }
                                uVar7 = uVar7 + 1;
                            } while (uVar7 <= uStackX_18);
                        }
                    }
                    arg3_00 = arg3_00 - *(arg2_00 + 0x10);
                    arg2_00 = arg2_00 + *(arg2_00 + 0x10);
                } while( true );
            }
code_r0x0001d44c:
            arg4 = arg4 - *(arg3 + 0x10);
        }
        if (*arg2 == 0) {
            return 0x8000000000000014;
        }
    }
    return 0;
code_r0x0001d437:
    iVar6 = iVar6 + *(arg3 + 0x18);
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) goto code_r0x0001d44c;
    goto code_r0x0001d34f;
}


/* fcn.0001de18 @ 0x1de18 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_17h

void fcn.0001de18(int64_t arg1,int64_t arg2,int64_t arg3)

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
    iVar1 = (*(*0x21e98)[2])(*0x21e98,0x20060,2,aiStack_88 + 2,aiStack_88,&var_21h + 1);
    if (-1 < iVar1) {
        iStack_50 = &var_21h + 1;
        uStack_38 = 0x100;
        uStack_48 = *0x20290;
        uStack_40 = *0x20298;
        uStack_68 = *0x20060;
        uStack_64 = *0x20064;
        uStack_60 = *0x20068;
        uStack_5c = *0x2006c;
        uStack_58 = 0x20;
        unique0x1000011a = arg3;
        (***0x21e98)(*0x21e98,&uStack_48,&uStack_68,arg1 + 0x130,0x100,1);
    }
    return;
}


/* fcn.0001e0d0 @ 0x1e0d0 */

ulong fcn.0001e0d0(int64_t arg1,int64_t arg2)

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
        piVar1 = iVar7 + 0x21ac0;
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


/* fcn.0001f3c8 @ 0x1f3c8 */

int fcn.0001f3c8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint in_register_00000014;
    uint8_t *puVar3;
    int iVar4;
    
    fcn.000112a0(arg3,0x18,0);
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


/* fcn.0001f598 @ 0x1f598 */

ulong fcn.0001f598(int64_t arg1,int64_t arg2,uint32_t arg3)

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
        fcn.000112a0(arg1,0x58,0);
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


/* fcn.0001e4ac @ 0x1e4ac */

int fcn.0001e4ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
            iVar1 = fcn.0001f3c8(arg1_00,uVar2 - arg1_00,auStack_28);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0001f598(arg3,&stack0x00000028,auStack_28);
            }
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.0001a4d0 @ 0x1a4d0 */

void fcn.0001a4d0(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    
    iVar3 = *0x21da8;
    iVar5 = 0;
    if (*0x21da8 != 0) {
        if (*(*0x21da8 + 0x10) == 0) {
            fcn.0001a564();
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
                    fcn.000112a0(iVar3,*(piVar1 + iVar5 * 2 + 1) << 7,0);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 2;
            } while (piVar1 + iVar5 * 2 <= piVar2);
        }
    }
    return;
}


/* fcn.0001a3ec @ 0x1a3ec */

int64_t fcn.0001a3ec(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    
    iVar1 = *0x21da8;
    if (*0x21da8 != 0) {
        if (*(*0x21da8 + 0x10) == 0) {
            fcn.0001a564();
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


/* fcn.0001f364 @ 0x1f364 */

uint64_t fcn.0001f364(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uint32_t arg2_00;
    uint64_t auStackX_18 [2];
    uchar auStack_18 [16];
    
    arg2_00 = arg2;
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 != '\0') && (auStack_18 != puVar1)) {
        fcn.00011180(auStack_18,arg1,arg2 & 0xffU);
        arg2_00 = puVar1;
    }
    auStack_18[arg2 & 0xffU] = 0;
    fcn.00018f3c(auStack_18,arg2_00,auStackX_18);
    *arg3 = auStackX_18[0];
    return auStackX_18[0] & 0xffffffff;
}


/* fcn.00018f3c @ 0x18f3c */

ulong fcn.00018f3c(int64_t arg1,uint32_t arg2,int64_t arg3)

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


/* fcn.0001f6cc @ 0x1f6cc */

uint fcn.0001f6cc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
                        if (uVar6 != (uVar6 / 400) * 400) goto code_r0x0001f78a;
                    }
                    iVar2 = 0x16e;
                }
                else {
code_r0x0001f78a:
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
             ((arg4 + (*((iVar5 + arg2) * 4 + 0x21bc0) + -1 + arg3) * 0x18) * 0x3c + in_stack_00000028) * 0x3c +
             in_stack_00000030;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001e98c @ 0x1e98c */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.0001e98c(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

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
        iVar2 = fcn.0001f364(uVar3,2,auStackX_18);
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
        iVar1 = fcn.0001f364(uVar3,iVar4,auStackX_18);
        if (iVar1 == -1) {
            return 0xffffffff;
        }
        uVar5 = auStackX_18[0];
    }
    uVar3 = uVar3 + iVar2;
    iVar4 = CONCAT71(iVar4 >> 8,2);
    iVar2 = fcn.0001f364(uVar3,iVar4,auStack_30);
    if (iVar2 != -1) {
        iVar4 = CONCAT71(iVar4 >> 8,2);
        iVar2 = fcn.0001f364(uVar3 + 2,iVar4,&uStack_34);
        if (iVar2 != -1) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
            iVar2 = fcn.0001f364(uVar3 + 4,iVar4,&uStack_38);
            if (iVar2 != -1) {
                iVar4 = CONCAT71(iVar4 >> 8,2);
                iVar2 = fcn.0001f364(uVar3 + 6,iVar4,auStackX_8);
                if ((iVar2 != -1) &&
                   (iVar2 = fcn.0001f364(uVar3 + 8,CONCAT71(iVar4 >> 8,2),auStackX_18), iVar2 != -1)) {
                    iVar2 = fcn.0001f6cc(uVar5,auStack_30[0],uStack_34,uStack_38);
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


/* fcn.0001ebd0 @ 0x1ebd0 */

ulong fcn.0001ebd0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t var_20h;
    uint32_t var_17h;
    uint32_t var_bp_10h;
    
    iVar2 = fcn.0001f3c8(arg2,arg3,&var_20h);
    uVar4 = 0;
    if (((-1 < iVar2) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) {
        *(arg1 + 0x400) = *(arg1 + 0x400) | 1;
        if (var_bp_10h == 0) {
            return 0;
        }
        uVar3 = var_bp_10h + var_20h;
        iVar2 = fcn.0001f3c8(var_20h,var_bp_10h,&var_20h);
        if ((-1 < iVar2) && (var_17h == '\0')) {
            if (stack0xffffffffffffffe4 == 1) {
                *(arg1 + 0x404) = *var_20h;
                arg1_00 = var_bp_10h + var_20h;
                if (uVar3 <= arg1_00) {
                    return 0;
                }
                iVar2 = fcn.0001f3c8(arg1_00,uVar3 - arg1_00,&var_20h);
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


/* fcn.0001f5d0 @ 0x1f5d0 */

uint32_t fcn.0001f5d0(int64_t arg1,uint32_t arg2)

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


/* fcn.0001e630 @ 0x1e630 */

ulong fcn.0001e630(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    iVar3 = fcn.0001f3c8(arg1,arg2,&pcStack_b8);
    if ((((iVar3 < 0) || (cStack_af != '\0')) || (iStack_ac != 0x10)) ||
       (pcVar9 = pcStack_b8 + uStack_a8, arg1 + arg2 < pcVar9)) {
        return 0xffffffff;
    }
    *arg4 = pcVar9;
    cStack_af = '\0';
    iStack_ac = 0x10;
    arg1_00 = pcStack_b8;
joined_r0x0001e6a2:
    do {
        if (pcVar9 <= arg1_00) {
            return 0;
        }
        iVar3 = fcn.0001f3c8(arg1_00,pcVar9 - arg1_00,&pcStack_b8);
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
        iVar3 = fcn.0001f3c8(pcStack_b8,arg1_00 - pcStack_b8,&pcStack_b8);
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
        iVar4 = fcn.0001f3c8(pcStack_b8,iVar3 - pcStack_b8,auStack_38);
        if (iVar4 < 0) {
            iVar4 = -1;
        }
        else {
            iVar4 = fcn.0001f598(&iStack_98,&pcStack_a0,auStack_38);
            pcVar6 = pcStack_a0;
        }
        if (iVar4 != 0) {
            return 0xffffffff;
        }
        iVar3 = fcn.0001f3c8(pcVar6,iVar3 - pcVar6,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_48 != 4) goto code_r0x0001e7fc;
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
            goto code_r0x0001e8e8;
        }
        if (iStack_8c != 0xb) goto joined_r0x0001e6a2;
        uVar8 = 7;
    }
    goto code_r0x0001e8e8;
code_r0x0001e7fc:
    if (iStack_48 != 7) goto joined_r0x0001e6a2;
    if (iStack_98 == 1) {
        if ((((iStack_94 == 2) && (iStack_90 == 0x348)) &&
            ((iStack_8c == 0x1bb8d && ((iStack_88 == 1 && (iStack_84 == 9)))))) && (iStack_80 == 1)) {
            fcn.0001a4d0(*(arg3 + 0x148));
            pcVar6 = fcn.0001a3ec(uStack_a8 + 1);
            *(arg3 + 0x148) = pcVar6;
            if (pcVar6 == NULL) {
                return 0xffffffff;
            }
            uVar7 = uStack_a8;
            if ((uStack_a8 != 0) && (pcVar6 != pcStack_b8)) {
                fcn.00011180(pcVar6,pcStack_b8,uStack_a8);
                uVar7 = uStack_a8;
            }
            *(uVar7 + *(arg3 + 0x148)) = 0;
        }
        goto joined_r0x0001e6a2;
    }
    if ((((iStack_98 != 0) || (iStack_94 != 9)) || (iStack_90 != 0x926)) ||
       (((iStack_8c != 0x124f92c || (iStack_88 != 100)) || ((iStack_84 != 1 || (iStack_80 != 0x19))))))
    goto joined_r0x0001e6a2;
    uVar8 = 1;
code_r0x0001e8e8:
    if ((*(arg3 + 0x140) == 0x14) ||
       (pcVar5 = fcn.0001a3ec(uStack_a8 + 1), pcVar6 = pcVar5, pcVar1 = pcStack_b8, uVar2 = uStack_a8,
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
    goto joined_r0x0001e6a2;
}


/* fcn.0001eae0 @ 0x1eae0 */

ulong fcn.0001eae0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t var_20h;
    uint32_t var_17h;
    int32_t var_10h;
    
    iVar1 = fcn.0001f3c8(arg1,arg2,&var_20h);
    if ((((-1 < iVar1) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) &&
       (var_10h <= (arg1 - var_20h) + arg2)) {
        *arg4 = var_10h + var_20h;
        iVar1 = fcn.0001f3c8(var_20h,var_10h,&var_20h);
        if ((((-1 < iVar1) && (var_17h == '\0')) &&
            ((iVar1 = fcn.0001e98c(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x328), -1 < iVar1 &&
             ((iVar1 = fcn.0001f3c8(var_10h + var_20h,*arg4 - (var_10h + var_20h),&var_20h), -1 < iVar1 &&
              (var_17h == '\0')))))) &&
           (iVar1 = fcn.0001e98c(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x32c), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.0001e518 @ 0x1e518 */

ulong fcn.0001e518(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

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
    
    iVar1 = fcn.0001f3c8(arg1,(arg1 + noname_1) - arg1,&iStack_48);
    arg1_00 = iStack_48;
    if (((-1 < iVar1) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
        uVar2 = var_30h + iStack_48;
        iStackX_8 = iStack_48;
        if (uVar2 <= arg1 + noname_1) {
            *arg3 = uVar2;
            arg2_00 = uVar2 - iStack_48;
            iVar1 = fcn.0001f3c8(iStack_48,arg2_00,&uStack_30);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0001e4ac(arg1_00,arg2_00,arg2 + 0x330,&iStackX_8);
                arg1_00 = iStackX_8;
            }
            if (((iVar1 == 0) && (iVar1 = fcn.0001f3c8(arg1_00,uVar2 - arg1_00,&iStack_48), -1 < iVar1)) &&
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


/* fcn.0001ecd8 @ 0x1ecd8 */

//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.0001ecd8(int64_t arg1,int64_t arg2,uint32_t arg3)

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
    
    iVar1 = fcn.0001f3c8(arg2,arg3,&uStack_a8);
    if (((-1 < iVar1) && (cStack_9f == '\0')) && (iStack_9c == 0x10)) {
        arg1_01 = uStack_a8;
code_r0x0001ed32:
        do {
            if (uStack_98 + uStack_a8 <= arg1_01) {
                return 0;
            }
            iVar1 = fcn.0001f3c8(arg1_01,(uStack_98 + uStack_a8) - arg1_01,&iStack_d8);
            arg1_00 = iStack_d8;
            if (((iVar1 < 0) || (cStack_cf != '\0')) || (iStack_cc != 0x10)) {
                iVar1 = -1;
            }
            else {
                arg1_01 = uStack_c8 + iStack_d8;
                iStackX_20 = iStack_d8;
                iVar1 = arg1_01;
                iVar2 = fcn.0001f3c8(iStack_d8,iVar1 - iStack_d8,auStack_90);
                if (iVar2 < 0) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = fcn.0001f598(&var_70h,&iStackX_20,auStack_90);
                    arg1_00 = iStackX_20;
                }
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                iVar2 = fcn.0001f3c8(arg1_00,iVar1 - arg1_00,&iStack_d8);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (cStack_cf != '\0') {
                    return 0xffffffff;
                }
                if (iStack_cc == 1) {
                    iVar1 = fcn.0001f3c8(iStack_d8,iVar1 - iStack_d8,&iStack_d8);
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
                goto code_r0x0001ed32;
                if (_auStack_6c == 0xf) {
                    iVar1 = fcn.0001f3c8(iStack_d8,uStack_c8,&iStack_c0);
                    if (((iVar1 < 0) || (cStack_b7 != '\0')) || ((iStack_b4 != 3 || (uStack_b0 == 0)))) {
                        iVar1 = -1;
                    }
                    else {
                        *(arg1 + 0x400) = *(arg1 + 0x400) | 4;
                        uVar3 = fcn.0001f5d0(iStack_c0,uStack_b0);
                        *(arg1 + 0x40c) = uVar3;
                        iVar1 = 0;
                    }
                }
                else {
                    if (_auStack_6c != 0x13) goto code_r0x0001ed32;
                    iVar1 = fcn.0001ebd0(arg1,iStack_d8,uStack_c8);
                }
                if (-1 < iVar1) goto code_r0x0001ed32;
            }
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.0001eed4 @ 0x1eed4 */

int fcn.0001eed4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    iVar2 = fcn.0001f3c8(arg1,arg2,&puStack_50);
    if (((-1 < iVar2) && (var_40h._1_1_ == '\0')) && (var_40h._4_4_ == 0x10)) {
        puVar5 = puStack_50 + var_38h;
        *arg4 = puVar5;
        iVar2 = puVar5;
        iVar3 = fcn.0001f3c8(puStack_50,iVar2 - puStack_50,&puStack_50);
        if (-1 < iVar3) {
            if (var_40h._1_1_ == '\x02') {
                iVar3 = fcn.0001f3c8(puStack_50,iVar2 - puStack_50,&puStack_50);
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
                iVar3 = fcn.0001f3c8(puStack_50 + 1,iVar2 - (puStack_50 + 1),&puStack_50);
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
                    fcn.00011180(arg3 + 0x14,puStack_50,arg3_00);
                    arg3_00 = var_38h;
                }
                *(arg3 + 0x28) = arg3_00;
                iVar3 = fcn.0001f3c8(puVar4,puVar5 - puVar4,&uStack_38);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.0001e4ac(puVar4,puVar5 - puVar4,arg3 + 0x30,&puStack_58);
                    puVar4 = puStack_58;
                }
                if ((((iVar3 == 0) &&
                     (iVar3 = fcn.0001e630(puVar4,puVar5 - puVar4,arg3 + 0x88,&puStack_58), iVar3 == 0)) &&
                    (iVar3 = fcn.0001eae0(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)) &&
                   ((iVar3 = fcn.0001e630(puStack_58,puVar5 - puStack_58,arg3 + 0x1d8,&puStack_58), iVar3 == 0 &&
                    (iVar3 = fcn.0001e518(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)))) {
                    if ((puStack_58 == puVar5) || (*(arg3 + 0x10) == 0)) {
                        return 0;
                    }
                    iVar3 = fcn.0001f3c8(puStack_58,iVar2 - puStack_58,&puStack_50);
                    if ((-1 < iVar3) && (var_40h._1_1_ == '\x02')) {
                        if (var_40h._4_4_ == 1) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar3 = fcn.0001f3c8(puVar4,iVar2 - puVar4,&puStack_50);
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
                            iVar2 = fcn.0001f3c8(puVar4,iVar2 - puVar4,&puStack_50);
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
                            iVar2 = fcn.0001ecd8(arg3,puStack_50,var_38h);
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


/* fcn.0001f8e0 @ 0x1f8e0 */

void fcn.0001f8e0(int64_t arg1)

{
    int32_t var_bp_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    var_bp_10h = 0xb0107e8;
    var_ch._0_4_ = 0x1a370d;
    var_ch._4_4_ = 0;
    var_4h = 0;
    if (*0x21d50 != 0) {
        (**(*0x21d50 + 0x18))(&var_bp_10h,0);
        var_ch._0_4_ = var_ch & 0xffffff;
    }
    var_4h = 0;
    var_ch._4_4_ = 0;
    if (arg1 != &var_bp_10h) {
        fcn.00011180(arg1,&var_bp_10h,0x10);
    }
    *(arg1 + 0x10) = 0x18;
    *(arg1 + 0x14) = 0xef10200;
    *(arg1 + 0x18) = *0x200d0;
    *(arg1 + 0x20) = *0x200d8;
    return;
}


/* fcn.0001f1d8 @ 0x1f1d8 */

int64_t fcn.0001f1d8(int64_t arg1,int64_t arg2)

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
    
    arg1_00 = fcn.0001a3ec(0x440);
    fcn.000112a0(arg1_00,0x440,0);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x418) = arg1;
        pcVar4 = arg1 + arg2;
        iVar2 = fcn.0001f3c8(arg1,arg2,&pcStack_48);
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
                iVar2 = fcn.0001eed4(pcStack_48,pcVar4 - pcStack_48,arg1_00,apcStackX_18);
                pcVar3 = apcStackX_18[0];
                if (iVar2 == 0) {
                    arg2_00 = pcVar4 - apcStackX_18[0];
                    *(arg1_00 + 0x430) = apcStackX_18[0] - pcVar1;
                    iVar2 = fcn.0001f3c8(apcStackX_18[0],arg2_00,&uStack_30);
                    if (iVar2 < 0) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.0001e4ac(pcVar3,arg2_00,arg1_00 + 0x398,apcStackX_18);
                        pcVar3 = apcStackX_18[0];
                    }
                    if ((((iVar2 == 0) && (iVar2 = fcn.0001f3c8(pcVar3,pcVar4 - pcVar3,&pcStack_48), -1 < iVar2)) &&
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


