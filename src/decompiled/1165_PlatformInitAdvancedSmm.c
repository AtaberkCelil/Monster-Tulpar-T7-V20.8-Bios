// decompiled by r2ghidra: 1165_PlatformInitAdvancedSmm.pe32
// functions: 58

/* entry0 @ 0x11284 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.000112f8(param_1,param_2);
    arg1 = 0x15c20;
    *0x15d20 = -0x7fffffffffffffff;
    iVar1 = section..text(0x15c20);
    if (iVar1 == 0) {
        iVar1 = fcn.00011c68(arg1,param_2);
        if ((-1 < iVar1) || (*0x15d20 < 0)) {
            *0x15d20 = iVar1;
        }
        fcn.000110d0(0x15c20,-1);
    }
    iVar1 = *0x15d20;
    if (*0x15d20 < 0) {
        fcn.00012a38();
    }
    return iVar1;
}


/* fcn.000120b0 @ 0x120b0 */

void fcn.000120b0(void)

{
    return;
}


/* fcn.000112f8 @ 0x112f8 */

void fcn.000112f8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x15a80 = *(arg2 + 0x60);
    *0x15a88 = *(arg2 + 0x58);
    iStackX_10 = 0;
    *0x15a78 = arg2;
    uStackX_8 = arg1;
    (**(*0x15a80 + 0x140))(0x15090,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x15a90);
    (**(*0x15a80 + 0x140))(0x150c0,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x15d30 = fcn.00012a08();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x15d30);
    *0x15d28 = uStackX_8 >> 5;
    fcn.00012a74();
    puVar4 = fcn.00012a74();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113f0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                fcn.000111f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00011180();
                }
                fcn.000111f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011210();
                }
                else {
                    fcn.00011200();
                }
                return;
            }
            if ((*0x150f0 == *(puVar4 + 4)) && (*0x150f8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000113f0;
        puVar4 = puVar4 + puVar4[1];
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
    
    //[00] -r-x section size 16384 named .text
    fcn.000120b0();
    *(arg1 + 0xf8) = 0;
    if ((*0x15560 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011c68 @ 0x11c68 */

//WARNING: Variable defined which should be unmapped: var_6h
//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00011c68(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    int64_t in_R8;
    int64_t in_R9;
    ulong ***arg4;
    char cVar9;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    uint uStackX_20;
    uint uStackX_24;
    int64_t var_77h;
    int32_t var_83h;
    ulong ***pppuStack_c8;
    ulong *puStack_c0;
    ulong *puStack_b8;
    ulong uStack_b0;
    ulong *puStack_a8;
    ulong *puStack_a0;
    uchar auStack_98 [8];
    int64_t iStack_90;
    uchar auStack_88 [23];
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    uint32_t var_6h;
    
    uStack_b0 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    cVar9 = '\0';
    out(0x80,0x8600);
    unique0x100004aa = arg1;
    unique0x100004b2 = arg2;
    fcn.00012b40(0x155b8,0x8600,in_R8,in_R9);
    iVar4 = fcn.000120b4();
    cVar2 = (**(iVar4 + 0x30))(0x14b);
    *0x15a70 = cVar2 != '\0';
    iVar4 = fcn.000120b4();
    *0x15a60 = (**(iVar4 + 0x18))(499);
    iVar4 = fcn.000120b4();
    *0x15d48 = (**(iVar4 + 8))(0xf7);
    iVar4 = fcn.000120b4();
    *0x15d39 = (**(iVar4 + 0x30))(0x45);
    iVar4 = fcn.000120b4();
    *0x15d38 = (**(iVar4 + 0x30))(0x1fd);
    pppuStack_c8 = 0xca9;
    *0x15d40 = *0x15a90;
    (**(*0x15a88 + 0x48))(L"Setup",0x15030,0,&pppuStack_c8,0x15d60);
    *0x15d49 = 0;
    if (*0x16580 == '\x01') {
        iVar4 = fcn.000120b4();
        cVar2 = (**(iVar4 + 0x30))(0x1f);
        if (cVar2 == '\0') {
            *0x15d49 = 1;
        }
    }
    pppuStack_c8 = 0x80d;
    (**(*0x15a88 + 0x48))(L"PchSetup",0x15080,0,&pppuStack_c8,0x16a20);
    *0x1722e = 0x1800;
    iVar4 = *0x15d40 + 0x30;
    (**(*0x15d40 + 0x40))(iVar4,1,0x1800,1,&var_17h + 1);
    if ((stack0x00000010 & 0x400) != 0) {
        fcn.000116e4(iVar4);
    }
    (**(*0x15d40 + 0xd0))(0x15050,0,&puStack_a8);
    stack0x00000008 = stack0x00000008 & 0xffffffff00000000;
    (**puStack_a8)(puStack_a8,0x11b58,&var_fh + 1,&uStack_b0);
    (**(*0x15a80 + 0x140))(0x15060,0,&puStack_a0);
    *0x15a68 = *puStack_a0;
    (**(*0x15d40 + 0xd0))(0x15000,0,&var_17h + 1);
    (**stack0x00000010)(stack0x00000010,0x11464,auStack_98);
    (**(*0x15d40 + 0xd0))(0x150e0,0,&puStack_b8);
    (**puStack_b8)(puStack_b8,0x115c4,auStack_98);
    iVar4 = (**(*0x15d40 + 0xd0))(str.Y_mEK,0,&puStack_c0);
    if (-1 < iVar4) {
        uStackX_24 = 0;
        uStackX_20 = 3;
        (**puStack_c0)(puStack_c0,0x11a00,&uStackX_20,&var_49h + 1);
        uStackX_24 = 0;
        uStackX_20 = 4;
        (**puStack_c0)(puStack_c0,0x11ac0,&uStackX_20,&var_41h + 1);
        uStackX_24 = 0;
        uStackX_20 = 5;
        (**puStack_c0)(puStack_c0,0x11ae0,&uStackX_20,&var_39h + 1);
        pppuStack_c8 = 0x37;
        arg4 = &pppuStack_c8;
        iVar4 = (**(*0x15a88 + 0x48))(L"SetupCpuFeatures",0x15030,&var_1fh + 1,arg4,auStack_88);
        uVar1 = rdmsr(0x17d);
        uVar3 = uVar1 >> 0x20;
        uVar5 = uVar1 >> 0x38;
        if (((((uVar3 >> 0x18 & 1) != 0) || ((uVar3 >> 0x19 & 1) != 0)) || ((uVar3 >> 0x1a & 1) != 0)) ||
           ((uVar3 >> 0x1b & 1) != 0)) {
            cVar9 = '\x01';
            uVar6 = uVar5 >> 1 & 1;
            uVar7 = uVar5 & 1;
            uVar8 = uVar5 >> 3 & 1;
        }
        if (((iVar4 < 0) || (cVar9 != var_61h._4_1_)) ||
           ((uVar7 != var_61h._5_1_ || ((uVar6 != var_61h._6_1_ || (uVar8 != var_61h._7_1_)))))) {
            var_61h._4_1_ = cVar9;
            var_61h._5_1_ = uVar7;
            var_61h._6_1_ = uVar6;
            var_61h._7_1_ = uVar8;
            (**(*0x15d40 + 0xd0))(0x15020,0,&iStack_90);
            arg4 = pppuStack_c8;
            (**(iStack_90 + 0x10))(L"SetupCpuFeatures",0x15030,var_1fh._1_4_,pppuStack_c8,auStack_88);
        }
        *0x17230 = 0;
        (**(*0x15a90 + 0xd0))(0x15040,0,0x15aa8);
        (**(*0x15d40 + 0xd0))(0x150d0,0,&puStack_b8);
        iVar4 = &var_17h + 1;
        stack0x00000010 = NULL;
        (*puStack_b8[3])(puStack_b8,0x11c30);
        out(0x80,0x867f);
        fcn.00012b40(0x155b8,0x867f,iVar4,arg4);
        iVar4 = 0;
    }
    return iVar4;
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


/* fcn.00012a38 @ 0x12a38 */

void fcn.00012a38(void)

{
    char cVar1;
    
    cVar1 = fcn.000129c4(*0x15d30);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00012a5e. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x15a90 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00012a6d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15a80 + 0x48))(*0x15d30);
    return;
}


/* fcn.000129c4 @ 0x129c4 */

uint64_t fcn.000129c4(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x15d28 != 0) {
        puVar2 = *0x15d30 + 8;
        in_RAX = *0x15d30;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x15d28);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012a08 @ 0x12a08 */

ulong fcn.00012a08(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x15a90 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012a74 @ 0x12a74 */

int64_t fcn.00012a74(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15aa0 == 0) {
        *0x15aa0 = 0;
        if (*(*0x15a78 + 0x68) != 0) {
            piVar2 = *(*0x15a78 + 0x70);
            do {
                if ((*0x15070 == *piVar2) && (*0x15078 == piVar2[1])) {
                    *0x15aa0 = (*(*0x15a78 + 0x70))[uVar1 * 3 + 2];
                    return *0x15aa0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x15a78 + 0x68));
        }
    }
    return *0x15aa0;
}


/* fcn.00011220 @ 0x11220 */

uint64_t fcn.00011220(void)

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


/* fcn.00011210 @ 0x11210 */

void fcn.00011210(void)

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


/* fcn.00011182 @ 0x11182 */

void fcn.00011182(void)

{
    return;
}


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(void)

{
    return;
}


/* fcn.0001162c @ 0x1162c */

uchar fcn.0001162c(int64_t arg1)

{
    uchar auStackX_8 [8];
    uchar auStackX_10 [24];
    
    auStackX_8[0] = 0xb;
    (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,0,0x74,1,auStackX_8);
    (**(*0x15d40 + 0x40))(*0x15d40 + 0x30,0,0x75,1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00011688 @ 0x11688 */

void fcn.00011688(int64_t arg1,int64_t arg2)

{
    uchar auStackX_8 [8];
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    auStackX_8[0] = 0xb;
    (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,0,0x74,1,auStackX_8);
    (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,0,0x75,1,auStackX_10);
    return;
}


/* fcn.000116e4 @ 0x116e4 */

void fcn.000116e4(int64_t arg1)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    ulong in_RDX;
    ulong uVar3;
    ushort auStackX_8 [16];
    
    uVar2 = fcn.0001162c(arg1);
    if ((uVar2 & 0x20) == 0) {
        auStackX_8[0] = 0x400;
        (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,1,*0x1722e,1,auStackX_8);
    }
    else {
        uVar1 = fcn.0001162c(arg1);
        fcn.00011688(arg1,CONCAT71(in_RDX >> 8,uVar1) & 0xffffffffffffffdf);
        auStackX_8[0] = 0x400;
        uVar3 = 0;
        arg1_00 = *0x15d40 + 0x30;
        (**(*0x15d40 + 0x48))(arg1_00,1,*0x1722e,1,auStackX_8);
        uVar1 = fcn.0001162c(arg1_00);
        fcn.00011688(arg1_00,CONCAT71(uVar3 >> 8,uVar1) | 0x20);
    }
    return;
}


/* fcn.00012b40 @ 0x12b40 */

//WARNING: Type propagation algorithm not settling

void fcn.00012b40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    char cVar2;
    uint64_t uVar4;
    uint64_t uVar3;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.00013048(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    out(0x72,3);
    cVar2 = in(0x73);
    if ((cVar2 == '\x01') && (uVar4 = 0, uStackY_108 != '\0')) {
        do {
            uVar3 = uVar4 + 1;
            uVar1 = uVar4 + 1;
            uVar4 = uVar3;
        } while (*(&uStackY_108 + uVar1) != '\0');
        if (uVar3 != 0) {
            fcn.00013e5c(&uStackY_108,uVar3 & 0xffff);
        }
    }
    return;
}


/* fcn.00013048 @ 0x13048 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013048(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
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
    int64_t iStack_98;
    uint64_t uStack_90;
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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000130a3;
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
code_r0x000130a3:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00013e38(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00013e0c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
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
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x1565c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x0001342d:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1565c;
                }
                else {
                    pcVar9 = 0x15660;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000131ec:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x0001338f;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x000133a6;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x0001338f;
                                }
                                goto code_r0x000133a6;
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
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x0001338f:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000131ec;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x000131ec;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x000133a6;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x0001338f;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x000133a6:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00013d74(&var_68h_2,0x26,0,0x155f0);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x0001342d;
                                if (uStack_a8 == 0x53) goto code_r0x0001363c;
                                if (uStack_a8 == 0x58) goto code_r0x00013732;
                                if (uStack_a8 == 0x61) goto code_r0x00013645;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x000131d1;
                                }
                                if (uStack_a8 != 100) goto code_r0x000131cd;
                                goto code_r0x00013749;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1565c;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x00013944;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x156fb;
                                    goto code_r0x000136f9;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000136f9:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00013944;
                            }
                            fcn.00013d74(&var_68h_2,0x26,0,0x15654);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x0001363c:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00013645:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x00013944;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000131cd;
                                    goto code_r0x00013736;
                                }
                                goto code_r0x0001373b;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x00013944;
                            }
                            fcn.00013d74(&var_68h_2,0x26,0,0x15638);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00013944;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00013732:
                    uVar5 = uVar5 | 0x20;
code_r0x00013736:
                    uVar5 = uVar5 | 0x80;
code_r0x0001373b:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00013749:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001378b;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x0001378b:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x00013813:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00013813;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF\b\x04\x02"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x000131cd:
                    pcVar9 = &uStack_a8;
code_r0x000131d1:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00013944:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013014(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013014(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013014(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
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
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
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
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013014(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.00013e5c @ 0x13e5c */

ulong fcn.00013e5c(uint32_t *arg1,int64_t arg2)

{
    ulong uVar1;
    uint uStack_108;
    uint uStack_104;
    uchar auStack_f8 [12];
    uint32_t uStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_88;
    uchar auStack_78 [32];
    uint32_t var_50h;
    int64_t var_40h;
    
    if (((*0xfe1000e8 == 0xff) || ((*0xfe1000e8 & 1) == 0)) || (1 < (*0xfe1000e8 >> 1 & 3) - 2)) {
        uVar1 = 0x8000000000000015;
    }
    else {
        uStack_108 = 0x48;
        uStack_104 = 0xe;
        fcn.00014074(auStack_78);
        if (&stack0x00000000 != 0xf8) {
            fcn.000140c8(auStack_78,auStack_f8,&uStack_108);
        }
        if (iStack_88 == 0) {
            uVar1 = 0x8000000000000007;
        }
        else {
            uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
            uStack_e8 = *0x150b0;
            uStack_e0 = *0x150b8;
            fcn.00013f40(auStack_f8);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.000117fc @ 0x117fc */

void fcn.000117fc(void)

{
    uint16_t auStackX_8 [16];
    
    (**(*0x15d40 + 0x40))(*0x15d40 + 0x30,1,*0x1722e + 2,1,auStackX_8);
    auStackX_8[0] = auStackX_8[0] & 0xbfff;
    (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,1,*0x1722e + 2,1,auStackX_8);
    return;
}


/* fcn.000124d4 @ 0x124d4 */

int64_t fcn.000124d4(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint8_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    
    uVar6 = *0x15a60;
    fcn.000111d0(&uStack_28,0x10);
    fcn.000111d0(&uStack_38,0x10);
    uVar3 = uVar6 & 0x1f;
    uVar8 = (uVar6 & 0x1ff) >> 5;
    uVar7 = uVar6 >> 0x10 & 0xf1f;
    cVar1 = fcn.00012d24(uVar6);
    if ((cVar1 == '\0') || (cVar1 = fcn.00012d00(uVar6), cVar1 == '\0')) {
        return -0x7ffffffffffffffd;
    }
    if (((*arg1 & 0x48000) == 0x48000) && ((*(arg1 + 4) & 0x600) != 0x600)) {
        return -0x7ffffffffffffffe;
    }
    fcn.00012bc0(uVar6,arg1,&uStack_28,&uStack_38);
    uVar4 = 0;
    fcn.00012d94(uVar6,0,~uStack_38,uStack_28);
    iVar2 = CONCAT71(uVar4 >> 8,1);
    fcn.00012d94(uVar6,iVar2,~uStack_34,uStack_24);
    fcn.00012d94(uVar6,CONCAT71(iVar2 >> 8,2),~uStack_30,uStack_20);
    if ((*arg1 & 0x28000) == 0x28000) {
        uVar6 = 1 << uVar3;
    }
    else {
        uVar6 = (*arg1 >> 5 & 1) << uVar3;
    }
    fcn.00012298(0,uVar7,uVar8,~uVar6);
    fcn.00012298(1,uVar7,uVar8,~((*arg1 >> 0xf & 1) << uVar3));
    uVar6 = *arg1;
    iVar2 = fcn.00012298(5,uVar7,uVar8,~((uVar6 >> 0xf & 1) << uVar3));
    if ((iVar2 == -0x7ffffffffffffffd) && ((uVar6 >> 0x10 & 1) << uVar3 != 0)) {
        return -0x7ffffffffffffffd;
    }
    uVar6 = *arg1;
    iVar2 = fcn.00012298(3,uVar7,uVar8,~((uVar6 >> 0xf & 1) << uVar3));
    if (iVar2 == -0x7ffffffffffffffd) {
        if ((uVar6 >> 0x11 & 1) << uVar3 != 0) {
            return -0x7ffffffffffffffd;
        }
        iVar2 = 0;
    }
    iVar5 = 0;
    if ((*(arg1 + 4) & 0x1e00) == 0) {
        iVar5 = iVar2;
    }
    return iVar5;
}


/* fcn.00011778 @ 0x11778 */

ulong fcn.00011778(void)

{
    ulong uVar1;
    uint16_t auStackX_8 [16];
    
    if (*0x15d38 == '\0') {
        uVar1 = 0x8000000000000003;
    }
    else {
        (**(*0x15d40 + 0x40))(*0x15d40 + 0x30,1,*0x1722e + 0x7c,1,auStackX_8);
        auStackX_8[0] = auStackX_8[0] | 0x8000;
        (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,1,*0x1722e + 0x7c,1,auStackX_8);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001186c @ 0x1186c */

void fcn.0001186c(void)

{
    uint32_t uVar1;
    uint32_t auStackX_8 [2];
    
    auStackX_8[0] = 0;
    (**(*0x15d40 + 0x40))(*0x15d40 + 0x30,2,*0x1722e + 0x7c,1,auStackX_8);
    uVar1 = *(*0x15a68 + 0xa10) << 0x13;
    while ((auStackX_8[0] & 0x80000) != uVar1) {
        auStackX_8[0] = auStackX_8[0] & 0xfff7ffff | uVar1;
        (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,2,*0x1722e + 0x7c,1,auStackX_8);
        (**(*0x15d40 + 0x40))(*0x15d40 + 0x30,2,*0x1722e + 0x7c,1,auStackX_8);
    }
    return;
}


/* fcn.0001193c @ 0x1193c */

void fcn.0001193c(int64_t arg1)

{
    uint8_t uVar1;
    int64_t arg1_00;
    uint16_t auStackX_8 [4];
    
    uVar1 = fcn.0001162c(arg1);
    if ((*0x15d9c == '\x01') && ((uVar1 & 0x20) != 0)) {
        arg1_00 = *0x15d40 + 0x30;
        (**(*0x15d40 + 0x40))(arg1_00,1,*0x1722e,1,auStackX_8);
        if ((auStackX_8[0] & 0x400) != 0) {
            fcn.000116e4(arg1_00);
        }
        (**(*0x15d40 + 0x40))(*0x15d40 + 0x30,1,*0x1722e + 2,1,auStackX_8);
        auStackX_8[0] = auStackX_8[0] | 0x400;
        (**(*0x15d40 + 0x48))(*0x15d40 + 0x30,1,*0x1722e + 2,1,auStackX_8);
    }
    return;
}


/* fcn.00012ae0 @ 0x12ae0 */

void fcn.00012ae0(int64_t arg1)

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
            fcn.00011180();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011180 @ 0x11180 */

void fcn.00011180(void)

{
    return;
}


/* fcn.000120b4 @ 0x120b4 */

int64_t fcn.000120b4(void)

{
    if (*0x15a98 == 0) {
        (**(*0x15a80 + 0x140))(0x15010,0,0x15a98);
    }
    return *0x15a98;
}


/* fcn.00012fe4 @ 0x12fe4 */

ulong fcn.00012fe4(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013dd4();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x15100;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x15340;
    }
    return uVar2;
}


/* fcn.00013dd4 @ 0x13dd4 */

ulong fcn.00013dd4(void)

{
    char cVar1;
    
    cVar1 = fcn.00013d98();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00013d98(), cVar1 != '\x05')) && (cVar1 = fcn.00013d98(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00013d98(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000127d4 @ 0x127d4 */

ulong fcn.000127d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000120f0(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00012178(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00012874 @ 0x12874 */

ulong fcn.00012874(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000120f0(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000123f8(6,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.000128c8 @ 0x128c8 */

ulong fcn.000128c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000120f0(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000123f8(6,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00012824 @ 0x12824 */

ulong fcn.00012824(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000120f0(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00012178(7,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00014380 @ 0x14380 */

ulong fcn.00014380(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint *in_stack_00000048;
    uint8_t *in_stack_00000050;
    
    uVar7 = arg4;
    if ((uVar7 < 0x14) && ((0x800f3U >> (uVar7 & 0x1f) & 1) != 0)) {
        if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar1 = arg1 + 0xd8;
            iVar8 = 0xfffffff;
            iVar5 = 0xfffffff;
            do {
                if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
                iVar5 = iVar5 + -1;
            } while (0 < iVar5);
            if (iVar5 != 0) {
                *in_stack_00000050 = 4;
                *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) =
                     arg2 << 0x18 | arg3 & 0xffff;
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
                *(uVar6 + 0xc0000000) = arg4 << 8 | *(uVar6 + 0xc0000000) & 0x7f;
                *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) = 0xf000;
                if ((((uVar7 == 1) || (uVar7 == 5)) || (uVar7 == 7)) || (uVar7 == 0x13)) {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000048;
                }
                else {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
                }
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
                do {
                    uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                    if ((uVar2 & 1) == 0) break;
                    iVar8 = iVar8 + -1;
                } while (0 < iVar8);
                if (iVar8 != 0) {
                    uVar4 = uVar2 >> 1 & 3;
                    *in_stack_00000050 = uVar4;
                    if (uVar4 == 0) {
                        if (((arg4 & 0xfffffff9U) == 0) && (uVar7 != 2)) {
                            *in_stack_00000048 =
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
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.000111d0 @ 0x111d0 */

int64_t fcn.000111d0(int64_t arg1,int64_t arg2)

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


/* fcn.00012d24 @ 0x12d24 */

uint64_t fcn.00012d24(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.00013dd4();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.00012fe4(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.00012fe4(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00012d00 @ 0x12d00 */

bool fcn.00012d00(int64_t param_1)

{
    unkint7 extraout_RAX;
    int aiStackX_10 [6];
    
    fcn.00012714(param_1,aiStackX_10);
    return -1 < extraout_RAX && aiStackX_10[0] == 0;
}


/* fcn.00012bc0 @ 0x12bc0 */

int64_t fcn.00012bc0(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int aiStackX_10 [6];
    
    iVar3 = fcn.00012f70(noname_0,*(arg1 + 3),aiStackX_10);
    if (-1 < iVar3) {
        uVar1 = *arg1;
        *arg3 = *arg3 | -((uVar1 & 0x3f000000) != 0) & 0xc0000000;
        *arg2 = *arg2 | aiStackX_10[0] << 0x1e;
        *arg3 = *arg3 | -((uVar1 & 0x700000) != 0) & 0x6000000;
        *arg2 = *arg2 | (uVar1 & 0x600000) << 4;
        *arg3 = *arg3 | -((uVar1 & 0xf8000) != 0) & 0x1e0000;
        *arg2 = *arg2 | (uVar1 & 0xf0000) * 2;
        *arg3 = *arg3 | -((uVar1 & 0x380) != 0) & 0x300;
        *arg2 = *arg2 | uVar1 & 0x300;
        uVar2 = *(arg1 + 4);
        *arg3 = *arg3 | -((uVar1 & 0xc00) != 0) & 0x800000;
        *arg2 = *arg2 | (uVar1 & 0x800) << 0xc;
        *arg3 = *arg3 | (uVar1 & 0x6000) != 0;
        *arg2 = *arg2 | uVar1 >> 0xe & 1;
        *arg3 = *arg3 | -((uVar2 & 0x6000) != 0) & 0x10000000;
        *arg2 = *arg2 | (uVar2 & 0x4000) << 0xe;
        *arg3 = *arg3 | -((uVar1 & 0xf) != 0) & 0x1c00;
        *arg2 = *arg2 | (uVar1 & 0xe) << 9;
        *(arg3 + 4) = *(arg3 + 4) | -((uVar2 & 0x1f) != 0) & 0x3c00;
        *(arg2 + 4) = *(arg2 + 4) | (uVar2 & 0x1e) << 9;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00012f70 @ 0x12f70 */

ulong fcn.00012f70(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xf1f;
    if (arg2 == 0) {
code_r0x00012fdb:
        *arg3 = 0;
    }
    else {
        if (arg2 == 1) {
            if ((uVar1 != 0x905) && (uVar1 != 0x809)) goto code_r0x00012fdb;
        }
        else {
            if (arg2 == 3) {
                *arg3 = 1;
                return 0;
            }
            if (arg2 == 5) {
                *arg3 = 2;
                return 0;
            }
            if (arg2 == 7) {
                if ((uVar1 != 0x905) && (uVar1 != 0x809)) {
                    return 0x8000000000000002;
                }
                goto code_r0x00012fdb;
            }
            if (arg2 != 9) {
                return 0x8000000000000002;
            }
        }
        *arg3 = 3;
    }
    return 0;
}


/* fcn.00012d94 @ 0x12d94 */

void fcn.00012d94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uStackX_8;
    uint32_t uStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    uStackX_10 = CONCAT31(uStackX_10._1_3_,arg2);
    uVar9 = 0;
    uVar6 = ~arg3 | arg4;
    uVar10 = arg1;
    uVar1 = arg1 >> 0x10;
    uVar8 = uVar9;
    if ((uVar6 & 0xfffffffe) != 0) {
        cVar2 = fcn.00012d24(arg1);
        uVar8 = 0;
        if (cVar2 != '\0') {
            uVar8 = uVar10 & 0x1ff;
            iVar3 = fcn.00012178(6,uVar1 & 0xf1f);
            if ((-1 < iVar3) && (uVar9 = uStackX_8 >> (uVar8 & 0x1f) & 1, uVar9 != 0)) {
                fcn.00012874(uVar1 & 0xf1f,uVar8 >> 5,1 << (uVar8 & 0x1f));
            }
            uVar8 = uVar9;
        }
    }
    uVar9 = 0;
    if ((uVar6 & 1) != 0) {
        cVar2 = fcn.00012d24(arg1 & 0xffffffff);
        uVar9 = 0;
        if (cVar2 != '\0') {
            uVar6 = uVar10 & 0x1ff;
            iVar3 = fcn.00012178(7,uVar1 & 0xf1f);
            if ((-1 < iVar3) && (uVar9 = uStackX_10 >> (uVar6 & 0x1f) & 1, uVar9 != 0)) {
                fcn.0001291c(uVar1 & 0xf1f,uVar6 >> 5,1 << (uVar6 & 0x1f));
            }
        }
    }
    iVar3 = fcn.00012fe4(auStackX_18);
    iVar4 = fcn.00012fe4(auStackX_20);
    uVar6 = uVar10 & 0x1ff;
    iVar7 = (uVar1 & 0x1f) * 0x1e;
    puVar5 = *(iVar7 + iVar3) << 0x10 | 0xfd000000 | *(iVar7 + 0x1a + iVar4) + (arg2 + uVar6 * 4) * 4 & 0xffff;
    *puVar5 = *puVar5 & arg3 | arg4;
    if (uVar8 != 0) {
        fcn.000128c8(uVar1 & 0xf1f,uVar6 >> 5,1 << (uVar6 & 0x1f));
    }
    if (uVar9 != 0) {
        fcn.00012970(uVar10 >> 0x10 & 0xf1f,uVar6 >> 5,1 << (uVar6 & 0x1f));
    }
    return;
}


/* fcn.00012298 @ 0x12298 */

ulong fcn.00012298(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uchar auStackX_10 [8];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    bVar1 = false;
    iVar2 = fcn.00012fe4(auStackX_10);
    if (iVar6 == 0) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar4 = *(puVar5 + 4);
    }
    else {
        if (iVar6 == 1) {
            puVar5 = uVar4 * 0x1e + iVar2;
            uVar4 = *(puVar5 + 0xc);
        }
        else {
            if (iVar6 == 2) {
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 10);
                goto code_r0x0001234b;
            }
            if (iVar6 == 3) {
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 0x10);
            }
            else {
                if (iVar6 == 4) {
                    puVar5 = uVar4 * 0x1e + iVar2;
                    uVar4 = *(puVar5 + 0xe);
                    goto code_r0x0001234b;
                }
                if (iVar6 != 5) {
                    return 0x8000000000000003;
                }
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 0x14);
            }
        }
        bVar1 = true;
    }
code_r0x0001234b:
    if (uVar4 == 0xffff) {
        return 0x8000000000000003;
    }
    if (bVar1) {
        fcn.000127d4(arg2 & 0xffffffffU,arg3 & 0xffffffffU,auStackX_8);
        if (auStackX_8[0] != 0) {
            if ((auStackX_8[0] & (~arg4 | in_stack_00000028)) == 0) {
                auStackX_8[0] = 0;
            }
            else {
                fcn.00012874(arg2 & 0xffffffff,arg3 & 0xffffffff,auStackX_8[0]);
            }
        }
    }
    uVar4 = uVar4 + arg3 * 4;
    puVar3 = *puVar5 << 0x10 | (uVar4 & 0xffff0000 | 0xfffd0000) << 8 | uVar4 & 0xffff;
    *puVar3 = *puVar3 & arg4 | in_stack_00000028;
    if ((bVar1) && (auStackX_8[0] != 0)) {
        fcn.000128c8(arg2 & 0xffffffffU,arg3 & 0xffffffffU,auStackX_8[0]);
    }
    return 0;
}


/* fcn.000120f0 @ 0x120f0 */

uint64_t fcn.000120f0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStackX_8;
    uint32_t auStackX_18 [4];
    
    uVar6 = arg1;
    uVar7 = arg2;
    iVar2 = fcn.00012fe4(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.00013dd4();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.00012fe4();
        cVar1 = fcn.00013dd4();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00012178 @ 0x12178 */

ulong fcn.00012178(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    int iVar5;
    int in_R8D;
    uint *in_R9;
    uchar auStackX_8 [8];
    
    uVar3 = arg2 & 0x1f;
    iVar1 = fcn.00012fe4(auStackX_8);
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 4);
    }
    else if (iVar5 == 1) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xc);
    }
    else if (iVar5 == 2) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 10);
    }
    else if (iVar5 == 3) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x10);
    }
    else if (iVar5 == 4) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xe);
    }
    else if (iVar5 == 5) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x14);
    }
    else if (iVar5 == 6) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x16);
    }
    else {
        if (iVar5 != 7) {
            return 0x8000000000000003;
        }
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x18);
    }
    if (uVar2 == 0xffff) {
        return 0x8000000000000003;
    }
    if (iVar5 - 6U < 2) {
        in_R8D = in_R8D * 8;
    }
    else {
        in_R8D = in_R8D * 4;
    }
    *in_R9 = *(*puVar4 << 0x10 | (uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.000123f8 @ 0x123f8 */

ulong fcn.000123f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    iVar2 = fcn.00012fe4(auStackX_10);
    if (iVar6 == 6) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x16);
        fcn.000127d4(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    else {
        if (iVar6 != 7) {
            return 0x8000000000000003;
        }
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x18);
        fcn.00012824(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    if (uVar1 == 0xffff) {
        return 0x8000000000000003;
    }
    auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
    uVar3 = fcn.00014380(0xf9000,CONCAT71(arg2_00 >> 8,*puVar5),uVar1 + arg3 * 8,0x13);
    return uVar3;
}


/* fcn.00012714 @ 0x12714 */

uint64_t fcn.00012714(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int8_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    
    uVar2 = arg1 & 0xffffffff;
    cVar1 = fcn.00012d24(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar7 = uVar2 & 0x1ff;
        uVar2 = uVar2 >> 0x10 & 0x1f;
        iVar3 = fcn.00012fe4(auStackX_18);
        iVar5 = (uVar2 & 0xffffffff) * 0x1e;
        if (*(iVar5 + 2 + iVar3) == -1) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar6 = *(iVar5 + 2 + iVar3) + (uVar7 >> 3 & 0x1fffffff) * 4;
            iVar4 = (uVar7 & 7) << 2;
            *arg2 = (*((uVar6 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar5 + iVar3) << 0x10 | uVar6 & 0xffff) & 3 << iVar4)
                    >> iVar4;
            uVar2 = 0 >> iVar4;
        }
    }
    return uVar2;
}


/* fcn.0001291c @ 0x1291c */

ulong fcn.0001291c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000120f0(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000123f8(7,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00012970 @ 0x12970 */

ulong fcn.00012970(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000120f0(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000123f8(7,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00013e0c @ 0x13e0c */

uint64_t fcn.00013e0c(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00013e38 @ 0x13e38 */

uint64_t fcn.00013e38(uint32_t arg1)

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


/* fcn.00013d74 @ 0x13d74 */

void fcn.00013d74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013048(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013014 @ 0x13014 */

uchar * fcn.00013014(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00013d98 @ 0x13d98 */

void fcn.00013d98(void)

{
    if (*0x1555c == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x1555c = '\x05';
        }
        else {
            *0x1555c = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00014074 @ 0x14074 */

void fcn.00014074(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x15bb0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x15b30) {
        fcn.00011190(arg1_00,0x15b30,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x14214;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x14134;
    *(arg1_00 + 4) = fcn.000120b0;
    *(arg1_00 + 8) = 0x141d8;
    *(arg1_00 + 10) = 0x141d0;
    *(arg1_00 + 0xc) = 0x141e0;
    *(arg1_00 + 0xe) = 0x141e8;
    *(arg1_00 + 0x10) = 0x141f0;
    *(arg1_00 + 0x12) = 0x141f8;
    *(arg1_00 + 0x14) = 0x1420c;
    *(arg1_00 + 0x16) = 0x14200;
    return;
}


/* fcn.000140c8 @ 0x140c8 */

int64_t fcn.000140c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x15bb0;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x15b30) {
        fcn.00011190(arg2,0x15b30,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.00013f40 @ 0x13f40 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00013f40(uint32_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    uint16_t uVar4;
    uint *puVar5;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    int64_t iStack_54;
    int64_t iStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    int32_t var_9h;
    int64_t var_5h;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (piVar3 != 0x15ab0) {
        puVar5 = &uStack_88;
        uVar2 = *(piVar3 + 0xc) & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((*(piVar3 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar3[2];
            iStack_4c = piVar3[3];
            puVar5 = &stack0xffffffffffffff7c;
            uStack_88 = *0x159e0;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar3[4];
            *(piVar3 + 4) = _auStack_44 + 1;
            *puVar5 = *0x159e4;
            puVar5 = puVar5 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar4 = 0;
            do {
                cVar1 = *(uVar4 + in_stack_00000030);
                acStack_28[uVar4] = cVar1;
                if (cVar1 == '\0') break;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x18);
            if ((uVar4 < 0x18) && (0x18 - uVar4 != 0)) {
                fcn.000111d0(acStack_28 + uVar4,0x18 - uVar4);
            }
            *puVar5 = *0x159f8;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar5 = *0x159f4;
            puVar5[1] = *0x159fc;
            *(puVar5 + 6) = in_stack_00000028;
            puVar5 = puVar5 + 1;
        }
        puVar5[1] = *0x15a20;
        (**(*piVar3 + 0x18))(piVar3,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00011190 @ 0x11190 */

int64_t fcn.00011190(int64_t arg1,int64_t arg2,int64_t arg3)

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


