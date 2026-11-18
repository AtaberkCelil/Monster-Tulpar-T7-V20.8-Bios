// decompiled by r2ghidra: 1310_OemHddHeadParkSmm.pe32
// functions: 32

/* entry0 @ 0x11230 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.000112a4(param_1,param_2);
    arg1 = 0x136f0;
    *0x137f0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x136f0);
    if (iVar1 == 0) {
        iVar1 = fcn.000114a4(arg1,param_2);
        if ((-1 < iVar1) || (*0x137f0 < 0)) {
            *0x137f0 = iVar1;
        }
        fcn.000110d0(0x136f0,-1);
    }
    iVar1 = *0x137f0;
    if (*0x137f0 < 0) {
        fcn.000115f8();
    }
    return iVar1;
}


/* fcn.00011580 @ 0x11580 */

void fcn.00011580(void)

{
    return;
}


/* fcn.000112a4 @ 0x112a4 */

void fcn.000112a4(int64_t arg1,int64_t arg2)

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
    
    *0x13568 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x13560 = arg2;
    uStackX_8 = arg1;
    (**(*0x13568 + 0x140))(0x13050,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x13570);
    (**(*0x13568 + 0x140))(0x13080,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x13800 = fcn.000115c8();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x13800);
    *0x137f8 = uStackX_8 >> 5;
    fcn.00011634();
    puVar4 = fcn.00011634();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00011390:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                fcn.000111f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000111e0();
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
            if ((*0x13090 == *(puVar4 + 4)) && (*0x13098 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00011390;
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
    
    //[00] -r-x section size 8192 named .text
    fcn.00011580();
    *(arg1 + 0xf8) = 0;
    if ((*0x130a0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000114a4 @ 0x114a4 */

void fcn.000114a4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int iStackX_8;
    int32_t var_14h;
    uint64_t uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_20h_2;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    _iStackX_8 = arg1;
    uStackX_10 = arg2;
    iVar2 = (**(*0x13570 + 0xd0))(0x13030,0,&var_20h);
    if (-1 < iVar2) {
        uStackX_10 = uStackX_10 & 0xffffffff00000000;
        (**var_20h)(var_20h,0x11894,&uStackX_10,&var_18h);
    }
    iVar2 = (**(*0x13570 + 0xd0))(str.Y_mEK,0,&var_28h);
    if (-1 < iVar2) {
        iVar1 = 3;
        _iStackX_8 = 3;
        do {
            if (iVar1 != 3) {
                (**var_28h)(var_28h,0x1189c,&stack0x00000008,&var_bp_10h);
                iVar1 = iStackX_8;
            }
            iVar1 = iVar1 + 1;
            _iStackX_8 = CONCAT44(var_14h,iVar1);
        } while (iVar1 < 6);
    }
    iVar2 = (**(*0x13570 + 0xd0))(0x13000,0,&var_20h_2);
    if (-1 < iVar2) {
        (**var_20h_2)(var_20h_2,0x11404,&var_bp_8h);
    }
    return;
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


/* fcn.000115f8 @ 0x115f8 */

void fcn.000115f8(void)

{
    char cVar1;
    
    cVar1 = fcn.00011584(*0x13800);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001161e. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x13570 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x0001162d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13568 + 0x48))(*0x13800);
    return;
}


/* fcn.00011584 @ 0x11584 */

uint64_t fcn.00011584(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x137f8 != 0) {
        puVar2 = *0x13800 + 8;
        in_RAX = *0x13800;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x137f8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000115c8 @ 0x115c8 */

ulong fcn.000115c8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13570 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011634 @ 0x11634 */

int64_t fcn.00011634(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13578 == 0) {
        *0x13578 = 0;
        if (*(*0x13560 + 0x68) != 0) {
            piVar2 = *(*0x13560 + 0x70);
            do {
                if ((*0x13040 == *piVar2) && (*0x13048 == piVar2[1])) {
                    *0x13578 = (*(*0x13560 + 0x70))[uVar1 * 3 + 2];
                    return *0x13578;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13560 + 0x68));
        }
    }
    return *0x13578;
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


/* fcn.000111e2 @ 0x111e2 */

void fcn.000111e2(void)

{
    return;
}


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(void)

{
    return;
}


/* fcn.000117b0 @ 0x117b0 */

void fcn.000117b0(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_10h = 0x55cfba41;
    var_ch = 0x4f3c34b8;
    var_bp_8h = 0x3ae0fbe;
    var_4h = 0x4e134975;
    iVar1 = (**(*0x13570 + 0xd0))(0x13010,0,&var_28h);
    if (-1 < iVar1) {
        var_20h = 10;
        (**var_28h)(L"OemHddHeadPark",&var_10h,&var_18h,&var_20h,arg1);
    }
    return;
}


/* fcn.0001182c @ 0x1182c */

void fcn.0001182c(void)

{
    int64_t iVar1;
    int64_t var_10h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h_2 = 0x55cfba41;
    var_ch = 0x4f3c34b8;
    var_8h = 0x3ae0fbe;
    var_4h = 0x4e134975;
    iVar1 = (**(*0x13570 + 0xd0))(0x13010,0,&var_10h);
    if (-1 < iVar1) {
        (**(var_10h + 0x10))(L"OemHddHeadPark",&var_10h_2,0,0,0);
    }
    return;
}


/* fcn.000118d4 @ 0x118d4 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.000118d4(ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    uint *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    uchar uVar7;
    unkbyte7 Var8;
    uchar auStackX_8 [7];
    int64_t var_17h;
    int64_t var_27h;
    int8_t var_37h;
    int64_t var_67h;
    uchar uStack_a8;
    uint8_t uStack_a7;
    int64_t iStack_a6;
    ulong uStack_98;
    ulong uStack_90;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    uchar uStack_68;
    uchar auStack_58 [7];
    int64_t var_49h;
    uint uStack_48;
    uchar auStack_44 [3];
    int64_t var_39h;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    int8_t var_22h;
    uint uStack_2c;
    uchar uStack_28;
    int64_t var_19h;
    int8_t var_9h;
    
    Var8 = param_4 >> 8;
    uVar7 = param_4;
    out(0x80,0x77);
    fcn.00011a4c(0x130c8,0x77,param_3,param_4);
    iVar3 = fcn.000117b0(&uStack_a8);
    uVar4 = 0;
    if (iVar3 < 0) {
        uVar2 = 0x78;
    }
    else {
        _auStackX_8 = NULL;
        iVar3 = fcn.000116a0(auStackX_8);
        puVar1 = _auStackX_8;
        if (-1 < iVar3) {
            if (uStack_a7 != 0) {
                uVar5 = uVar4;
                do {
                    uVar6 = 0;
                    *puVar1 = *(uVar5 + iStack_a6);
                    fcn.00012dc0(&uStack_98,0,0x31);
                    uStack_28 = uStack_68;
                    uVar7 = *(uVar5 + 9 + iStack_a6);
                    param_3 = CONCAT71(uVar6 >> 8,*(uVar5 + 8 + iStack_a6));
                    _auStack_58 = uStack_98;
                    stack0xffffffffffffffb0 = uStack_90;
                    uStack_84 = CONCAT13(0xe0,uStack_84);
                    uStack_38 = uStack_78;
                    uStack_34 = uStack_74;
                    uStack_30 = uStack_70;
                    uStack_2c = uStack_6c;
                    uStack_48 = uStack_88;
                    _auStack_44 = uStack_84;
                    var_39h._1_4_ = uStack_80;
                    stack0xffffffffffffffc4 = uStack_7c;
                    iVar3 = (**(puVar1 + 0x20))(puVar1,auStack_58,param_3,uVar7,*(uVar5 + 10 + iStack_a6));
                    uVar4 = uVar4 + 1;
                    uVar5 = uVar5 + 0xe;
                } while (uVar4 < uStack_a7);
            }
            fcn.0001182c();
            uVar2 = 0x88;
            out(0x80,0x88);
            goto code_r0x000119d1;
        }
        uVar2 = 0x79;
    }
    out(0x80,uVar2);
code_r0x000119d1:
    fcn.00011a4c(0x130c8,uVar2,param_3,CONCAT71(Var8,uVar7));
    return iVar3;
}


/* fcn.00011a4c @ 0x11a4c */

//WARNING: Type propagation algorithm not settling

void fcn.00011a4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    char cVar2;
    uint64_t uVar4;
    uint64_t uVar3;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.00011b00(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    out(0x72,3);
    cVar2 = in(0x73);
    if ((cVar2 == '\x01') && (uVar4 = 0, uStackY_108 != '\0')) {
        do {
            uVar3 = uVar4 + 1;
            uVar1 = uVar4 + 1;
            uVar4 = uVar3;
        } while (*(&uStackY_108 + uVar1) != '\0');
        if (uVar3 != 0) {
            fcn.00012850(&uStackY_108,uVar3 & 0xffff);
        }
    }
    return;
}


/* fcn.00011b00 @ 0x11b00 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011b00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011b5b;
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
code_r0x00011b5b:
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
        uVar5 = fcn.00011a28(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000119fc(arg4);
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
            pcVar9 = 0x1316c;
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
code_r0x00011ee5:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1316c;
                }
                else {
                    pcVar9 = 0x13170;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00011ca4:
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
                            goto code_r0x00011e47;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00011e5e;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00011e47;
                                }
                                goto code_r0x00011e5e;
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
code_r0x00011e47:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00011ca4;
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
                                goto code_r0x00011ca4;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00011e5e;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00011e47;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00011e5e:
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
                                fcn.0001282c(&var_68h_2,0x26,0,0x13100);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00011ee5;
                                if (uStack_a8 == 0x53) goto code_r0x000120f4;
                                if (uStack_a8 == 0x58) goto code_r0x000121ea;
                                if (uStack_a8 == 0x61) goto code_r0x000120fd;
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
                                    goto code_r0x00011c89;
                                }
                                if (uStack_a8 != 100) goto code_r0x00011c85;
                                goto code_r0x00012201;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1316c;
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
                        goto code_r0x000123fc;
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
                                    iVar13 = 0x1320b;
                                    goto code_r0x000121b1;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000121b1:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x000123fc;
                            }
                            fcn.0001282c(&var_68h_2,0x26,0,0x13164);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x000120f4:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x000120fd:
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
                                goto code_r0x000123fc;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00011c85;
                                    goto code_r0x000121ee;
                                }
                                goto code_r0x000121f3;
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
                                goto code_r0x000123fc;
                            }
                            fcn.0001282c(&var_68h_2,0x26,0,0x13148);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x000123fc;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x000121ea:
                    uVar5 = uVar5 | 0x20;
code_r0x000121ee:
                    uVar5 = uVar5 | 0x80;
code_r0x000121f3:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00012201:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00012243;
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
code_r0x00012243:
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
code_r0x000122cb:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000122cb;
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
code_r0x00011c85:
                    pcVar9 = &uStack_a8;
code_r0x00011c89:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x000123fc:
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
                arg1 = fcn.00011acc(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011acc(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00011acc(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00011acc(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00012850 @ 0x12850 */

ulong fcn.00012850(uint32_t *arg1,int64_t arg2)

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
        fcn.00012a68(auStack_78);
        if (&stack0x00000000 != 0xf8) {
            fcn.00012abc(auStack_78,auStack_f8,&uStack_108);
        }
        if (iStack_88 == 0) {
            uVar1 = 0x8000000000000007;
        }
        else {
            uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
            uStack_e8 = *0x13070;
            uStack_e0 = *0x13078;
            fcn.00012934(auStack_f8);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.000116a0 @ 0x116a0 */

ulong fcn.000116a0(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    
    uVar5 = 0;
    uVar1 = *(*0x13570 + 0x98);
    if (uVar1 != 0) {
        piVar7 = *(*0x13570 + 0xa0);
        piVar6 = piVar7 + 2;
        do {
            piVar8 = 0x13020;
            piVar4 = piVar7;
            if (((piVar7 & 7) != 0) && ((piVar7 & 7) == 0)) {
                iVar9 = 8;
                do {
                    if (*piVar4 != *piVar8) break;
                    piVar4 = piVar4 + 1;
                    piVar8 = piVar8 + 1;
                    iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
            }
            for (; (piVar4 <= piVar6 + -1 && (*piVar4 == *piVar8)); piVar4 = piVar4 + 1) {
                piVar8 = piVar8 + 1;
            }
            for (; piVar4 < piVar6; piVar4 = piVar4 + 1) {
                if (*piVar4 != *piVar8) {
                    iVar3 = *piVar4 - *piVar8;
                    goto code_r0x0001174b;
                }
                piVar8 = piVar8 + 1;
            }
            iVar3 = 0;
code_r0x0001174b:
            if (iVar3 == 0) break;
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 3;
            piVar6 = piVar6 + 3;
        } while (uVar5 < uVar1);
    }
    if (uVar5 < uVar1) {
        uVar2 = 0;
        *arg1 = *(*(*0x13570 + 0xa0) + 0x10 + uVar5 * 0x18);
    }
    else {
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.00012dc0 @ 0x12dc0 */

int64_t fcn.00012dc0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000119fc @ 0x119fc */

uint64_t fcn.000119fc(uint32_t arg1)

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


/* fcn.00011a28 @ 0x11a28 */

uint64_t fcn.00011a28(uint32_t arg1)

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


/* fcn.0001282c @ 0x1282c */

void fcn.0001282c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011b00(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011acc @ 0x11acc */

uchar * fcn.00011acc(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012a68 @ 0x12a68 */

void fcn.00012a68(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x13680;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x13600) {
        fcn.00011180(arg1_00,0x13600,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x12c08;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x12b28;
    *(arg1_00 + 4) = fcn.00011580;
    *(arg1_00 + 8) = 0x12bcc;
    *(arg1_00 + 10) = 0x12bc4;
    *(arg1_00 + 0xc) = 0x12bd4;
    *(arg1_00 + 0xe) = 0x12bdc;
    *(arg1_00 + 0x10) = 0x12be4;
    *(arg1_00 + 0x12) = 0x12bec;
    *(arg1_00 + 0x14) = 0x12c00;
    *(arg1_00 + 0x16) = 0x12bf4;
    return;
}


/* fcn.00012abc @ 0x12abc */

int64_t fcn.00012abc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x13680;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x13600) {
        fcn.00011180(arg2,0x13600,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.00012934 @ 0x12934 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00012934(uint32_t arg1)

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
    if (piVar3 != 0x13580) {
        puVar5 = &uStack_88;
        uVar2 = *(piVar3 + 0xc) & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((*(piVar3 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar3[2];
            iStack_4c = piVar3[3];
            puVar5 = &stack0xffffffffffffff7c;
            uStack_88 = *0x134f0;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar3[4];
            *(piVar3 + 4) = _auStack_44 + 1;
            *puVar5 = *0x134f4;
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
                fcn.000111c0(acStack_28 + uVar4,0x18 - uVar4);
            }
            *puVar5 = *0x13508;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar5 = *0x13504;
            puVar5[1] = *0x1350c;
            *(puVar5 + 6) = in_stack_00000028;
            puVar5 = puVar5 + 1;
        }
        puVar5[1] = *0x13530;
        (**(*piVar3 + 0x18))(piVar3,&uStack_88,&uStack_58);
    }
    return;
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


/* fcn.00011180 @ 0x11180 */

int64_t fcn.00011180(int64_t arg1,int64_t arg2,int64_t arg3)

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


