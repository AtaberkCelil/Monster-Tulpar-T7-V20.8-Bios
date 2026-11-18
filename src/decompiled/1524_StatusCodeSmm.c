// decompiled by r2ghidra: 1524_StatusCodeSmm.pe32
// functions: 42

/* entry0 @ 0x11260 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    
    fcn.000112d8(noname_0,arg1);
    arg1_00 = 0x14bf0;
    *0x14cf0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x14bf0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011884(arg1_00,arg1);
        if ((-1 < iVar1) || (*0x14cf0 < 0)) {
            *0x14cf0 = iVar1;
        }
        fcn.000110d0(0x14bf0,-1);
    }
    iVar1 = *0x14cf0;
    if (*0x14cf0 < 0) {
        fcn.00012e50();
    }
    return iVar1;
}


/* fcn.00011f2c @ 0x11f2c */

void fcn.00011f2c(void)

{
    return;
}


/* fcn.000112d8 @ 0x112d8 */

void fcn.000112d8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    ulong noname_0;
    bool bVar8;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x14a48 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x14a40 = arg2;
    uStackX_8 = arg1;
    (**(*0x14a48 + 0x140))(0x14070,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x14a50);
    (**(*0x14a48 + 0x140))(0x14090,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x14d30 = fcn.00012e20();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x14d30);
    *0x14d28 = uStackX_8 >> 5;
    fcn.00012e8c();
    noname_0 = 0x14358;
    iVar3 = fcn.00012ef8(0x14358);
    if (iVar3 == 0) {
        uVar4 = fcn.000111f0();
        fcn.000111e0();
        uVar1 = in(0x1808);
        fcn.000111c0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar7 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar7 >> 0x17 & 1) != 0) break;
            fcn.00011180();
        }
        fcn.000111c0(uVar7,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000111e0();
        }
        else {
            fcn.000111d0();
        }
    }
    if (((*0x14a40 != 0) && (iVar3 = fcn.00012ef8(0x140a0), iVar3 != 0)) && (iVar3 != -0x18)) {
        bVar8 = *(iVar3 + 0x1b) != '\0';
        *0x14a60 = 1;
        uVar6 = bVar8 | 2;
        if (*(iVar3 + 0x1c) == '\0') {
            uVar6 = bVar8;
        }
        uVar5 = uVar6 | 8;
        if (*(iVar3 + 0x1d) == '\0') {
            uVar5 = uVar6;
        }
        uVar6 = uVar5 | 0x10;
        if (*(iVar3 + 0x1e) == '\0') {
            uVar6 = uVar5;
        }
        *0x14368 = uVar6 | 0x20;
        if (*(iVar3 + 0x1f) == '\0') {
            *0x14368 = uVar6;
        }
    }
    return;
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
    
    //[00] -r-x section size 12288 named .text
    fcn.00011f2c();
    *(arg1 + 0xf8) = 0;
    if ((*0x143b0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011884 @ 0x11884 */

void fcn.00011884(int64_t arg1,int64_t arg2)

{
    ushort *puVar1;
    int64_t iVar2;
    ulong auStackX_8 [2];
    ulong auStackX_18 [2];
    
    auStackX_8[0] = 0;
    if (*0x14a78 == 0) {
        *0x14a68 = *(arg2 + 0x60);
        *0x14a70 = *(arg2 + 0x58);
        *0x14a78 = arg2;
    }
    iVar2 = (**(*0x14a50 + 0x50))(6,0x878,0x14d98);
    if (-1 < iVar2) {
        (**(*0x14a68 + 0x168))(*0x14d98,0x878,0);
        auStackX_18[0] = 0;
        **0x14d98 = 0x14;
        (*0x14d98)[1] = 0x864;
        puVar1 = *0x14d98;
        *(*0x14d98 + 2) = *0x14050;
        *(puVar1 + 6) = *0x14058;
        *0x149e8 = *0x14d98 + 0x3c;
        *0x14cf8 = 0x10000;
        *0x14d00 = 0x11764;
        *0x14d08 = 0x11848;
        (**(*0x14a50 + 0xa8))(auStackX_18,0x14020,0,0x14cf8);
        *0x14d40 = 0;
        (**(*0x14a50 + 0xa8))(auStackX_8,0x14040,0,0x14140);
        (**(*0x14a50 + 0xa8))(auStackX_8,0x14010,0,0x140b0);
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


/* fcn.00012e50 @ 0x12e50 */

void fcn.00012e50(void)

{
    char cVar1;
    
    cVar1 = fcn.00012ddc(*0x14d30);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00012e76. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x14a50 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00012e85. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14a48 + 0x48))(*0x14d30);
    return;
}


/* fcn.00012ddc @ 0x12ddc */

uint64_t fcn.00012ddc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x14d28 != 0) {
        puVar2 = *0x14d30 + 8;
        in_RAX = *0x14d30;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x14d28);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012e20 @ 0x12e20 */

ulong fcn.00012e20(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14a50 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012e8c @ 0x12e8c */

int64_t fcn.00012e8c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14a58 == 0) {
        *0x14a58 = 0;
        if (*(*0x14a40 + 0x68) != 0) {
            piVar2 = *(*0x14a40 + 0x70);
            do {
                if ((*0x14060 == *piVar2) && (*0x14068 == piVar2[1])) {
                    *0x14a58 = (*(*0x14a40 + 0x70))[uVar1 * 3 + 2];
                    return *0x14a58;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14a40 + 0x68));
        }
    }
    return *0x14a58;
}


/* fcn.00012ef8 @ 0x12ef8 */

void fcn.00012ef8(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012e8c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012f26:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012f26;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000111f0 @ 0x111f0 */

uint64_t fcn.000111f0(void)

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


/* fcn.000111e0 @ 0x111e0 */

void fcn.000111e0(void)

{
    return;
}


/* fcn.000111c0 @ 0x111c0 */

uint64_t fcn.000111c0(ulong noname_0,int64_t arg1)

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


/* fcn.000111d0 @ 0x111d0 */

void fcn.000111d0(void)

{
    return;
}


/* fcn.00011564 @ 0x11564 */

ulong fcn.00011564(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    if (*0x14d40 != 0) {
        iVar2 = 0;
        LOCK();
        if (*0x149f0 == 0) {
            *0x149f0 = 1;
        }
        else {
            iVar2 = *0x149f0;
        }
        UNLOCK();
        if (iVar2 != 1) {
            uVar5 = 0;
            uVar3 = *0x14d40;
            if (*0x14d40 != 0) {
                do {
                    pcVar1 = *(uVar5 * 8 + 0x14d48);
                    if (pcVar1 != NULL) {
                        (*pcVar1)(arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,arg4);
                        uVar3 = *0x14d40;
                    }
                    uVar4 = uVar5 + 1;
                    uVar5 = uVar4;
                } while (uVar4 != uVar3);
            }
            LOCK();
            if (*0x149f0 == 1) {
                *0x149f0 = 0;
            }
            UNLOCK();
            return 0;
        }
    }
    return 0x800000000000000f;
}


/* fcn.00011a74 @ 0x11a74 */

ulong fcn.00011a74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    int16_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t arg1_00;
    int16_t *piVar6;
    uint16_t uVar7;
    int16_t *piVar8;
    char *arg4_00;
    uint64_t uVar9;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    iVar5 = 0;
    uVar9 = arg1 & 0xffffffff;
    uVar7 = 0;
    if (arg3 == 0) {
code_r0x00011c15:
        if (uVar9 != '\x02') {
            return 0;
        }
code_r0x00011c1b:
        fcn.000119ec(arg2 & 0xffffffffU,arg4);
    }
    else {
        arg1_00 = arg3 + 4;
        iVar4 = fcn.00013028(arg1_00,0x14030);
        if (iVar4 == 0) {
            piVar6 = *(arg3 + 0x18);
            piVar8 = piVar6;
            for (; (((iVar2 = *(arg3 + 0x14), iVar2 == 0 && (*piVar6 != '\0')) || ((iVar2 == 1 && (*piVar8 != 0)))) &&
                   (uVar7 < 0x7ff)); uVar7 = uVar7 + iVar3) {
                if (iVar2 == 0) {
                    iVar3 = *piVar6;
                    piVar6 = piVar6 + 1;
                    *(uVar7 + arg4) = iVar3;
                    iVar3 = 1;
                }
                else {
                    if (iVar2 != 1) {
                        return 0x8000000000000003;
                    }
                    iVar3 = *piVar8;
                    piVar8 = piVar8 + 1;
                    *(uVar7 + arg4) = iVar3;
                    iVar3 = 2;
                }
            }
            *(uVar7 + arg4) = 0;
            return 0;
        }
        iVar4 = fcn.00013028(arg1_00,82000);
        if (iVar4 == 0) {
            fcn.00011f90(arg4,0x800,0,arg3 + 0x78,in_stack_00000028,in_stack_00000030);
            return 0;
        }
        iVar4 = fcn.00013028(arg1_00,0x14000);
        if (iVar4 == 0) {
            if (uVar9 != '\x02') {
                return 0;
            }
            if (((uVar9 & 0xff000000) != 0x90000000) || ((arg2 & 0xffffffffU) != 7)) goto code_r0x00011c1b;
            arg4_00 = arg3 + 0x3c;
            cVar1 = *arg4_00;
            while (cVar1 != '\0') {
                iVar5 = iVar5 + 1;
                cVar1 = arg4_00[iVar5];
            }
        }
        else {
            iVar4 = fcn.00013028(arg1_00,0x14150);
            if (iVar4 != 0) goto code_r0x00011c15;
            arg4_00 = arg3 + 0x50;
            cVar1 = *arg4_00;
            while (cVar1 != '\0') {
                iVar5 = iVar5 + 1;
                cVar1 = arg4_00[iVar5];
            }
        }
        fcn.00011f30(arg4,0x800,0x144c0,arg4_00);
    }
    return 0;
}


/* fcn.00011cb4 @ 0x11cb4 */

void fcn.00011cb4(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    
    iVar2 = 0;
    pcVar1 = 0x11c40;
    while (pcVar1 != NULL) {
        (*pcVar1)(0,arg1);
        iVar2 = iVar2 + 1;
        pcVar1 = *(iVar2 * 8 + 0x144b0);
    }
    return;
}


/* fcn.00011f90 @ 0x11f90 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h_2
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011f90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int64_t arg_88h)

{
    uint16_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    char cVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    char *pcVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    uint64_t uVar19;
    int32_t *piVar20;
    uint8_t *puVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    int64_t var_18h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    uint64_t *in_stack_00000030;
    int8_t var_68h_2;
    int64_t var_70h;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int8_t var_70h_2;
    int32_t var_6ch;
    int32_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h_2;
    
    if (arg2 == 0) {
        uVar9 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011fe5;
    }
    else {
        uVar9 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00011fe5:
    uVar16 = 1000000;
    uVar11 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar19 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar19 = uVar11;
    }
    uVar22 = uVar19;
    if ((arg3 >> 8 & 1) == 0) {
        uVar11 = fcn.00013628(arg4);
        if (uVar16 < uVar11) {
            return 0;
        }
        uVar11 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar6 = fcn.000135fc(arg4);
        if (uVar16 < uVar6) {
            return 0;
        }
        uStack_98 = 0xffff;
    }
    var_78h = uVar11;
    if (uVar9 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h_2 = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h_2 = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar22 & 0xffffffff);
    }
    if (uVar11 == 1) {
        iVar5 = 0;
    }
    else {
        iVar5 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar5) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar9 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar11 = 0;
        iStack_90 = 0;
        cVar4 = '\0';
        uVar22 = arg3 & 0x2140;
        uStack_b0 = 1;
        uVar16 = 1;
        bVar2 = false;
        bVar23 = false;
        uStack_b8 = 0;
        uStackX_18 = uVar22;
        if (uStack_a8 == 10) {
            puVar21 = puStackX_20 + var_78h;
            pcVar8 = 0x14508;
            if (var_78h == 1) {
                iVar5 = 0;
            }
            else {
                iVar5 = puVar21[1] << 8;
            }
            uStack_a8 = (iVar5 | *puVar21) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar21 = puStackX_20;
            }
        }
        else {
            uVar16 = uVar9;
            if (uStack_a8 == 0xd) {
                puVar21 = puStackX_20 + var_78h;
                if (var_78h == 1) {
                    iVar5 = 0;
                }
                else {
                    iVar5 = puVar21[1] << 8;
                }
                uVar9 = iVar5 | *puVar21;
code_r0x000123ad:
                uStack_a8 = uVar9 & uStack_98;
                if ((uVar9 & uStack_98) == 10) {
                    pcVar8 = 0x14508;
                }
                else {
                    pcVar8 = 0x145dc;
                    puVar21 = puStackX_20;
                }
            }
            else if (uStack_a8 == 0x25) {
                puVar17 = in_stack_00000030;
                puVar18 = in_stack_00000028;
                puVar21 = puStackX_20;
code_r0x0001213b:
                while( true ) {
                    puStackX_20 = puVar21 + var_78h;
                    if (var_78h == 1) {
                        iVar5 = 0;
                    }
                    else {
                        iVar5 = puStackX_20[1] << 8;
                    }
                    uStack_a8 = (*puStackX_20 | iVar5) & uStack_98;
                    if (uStack_a8 < 0x2e) break;
                    if (uStack_a8 == 0x2e) {
                        uVar22 = uVar22 | 0x800;
                        goto code_r0x000122e4;
                    }
                    if (uStack_a8 == 0x30) {
                        if ((uVar22 & 0x800) == 0) {
                            uVar22 = uVar22 | 0x20;
                            uStackX_18 = uVar22;
                        }
                    }
                    else {
                        if (uStack_a8 < 0x31) goto code_r0x000122fb;
                        if (0x39 < uStack_a8) {
                            if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                uVar22 = uVar22 | 0x10;
                                goto code_r0x000122e4;
                            }
                            goto code_r0x000122fb;
                        }
                    }
                    uVar9 = 0;
                    uStack_b8 = 0;
                    if (0x2f < uStack_a8) {
                        do {
                            if (0x39 < uStack_a8) break;
                            puStackX_20 = puStackX_20 + var_78h;
                            uVar9 = uStack_a8 + (uVar9 * 5 + -0x18) * 2;
                            if (var_78h == 1) {
                                iVar5 = 0;
                            }
                            else {
                                iVar5 = puStackX_20[1] << 8;
                            }
                            uStack_a8 = (*puStackX_20 | iVar5) & uStack_98;
                        } while (0x2f < uStack_a8);
                        uStack_b8 = uVar9;
                    }
                    puVar21 = puStackX_20 + -var_78h;
                    uVar11 = uStack_b8;
                    if ((uVar22 & 0x800) == 0) {
                        uVar22 = uVar22 | 0x200;
                        uStack_a0 = uStack_b8;
                        uStackX_18 = uVar22;
                    }
                    else {
                        uVar16 = uStack_b8;
                        uStack_b0 = uStack_b8;
                    }
                }
                if (uStack_a8 == 0x2d) {
                    uVar22 = uVar22 | 1;
code_r0x000122e4:
                    puVar21 = puStackX_20;
                    uStackX_18 = uVar22;
                    goto code_r0x0001213b;
                }
                if (uStack_a8 != 0) {
                    if (uStack_a8 == 0x20) {
                        uVar22 = uVar22 | 4;
                    }
                    else {
                        if (uStack_a8 == 0x2a) {
                            if ((uVar22 & 0x800) == 0) {
                                uVar22 = uVar22 | 0x200;
                                if (puVar17 == NULL) {
                                    uStack_a0 = *puVar18;
                                    puVar18 = puVar18 + 1;
                                    in_stack_00000028 = puVar18;
                                }
                                else {
                                    uStack_a0 = *puVar17;
                                    puVar17 = puVar17 + 1;
                                    in_stack_00000030 = puVar17;
                                }
                                puVar21 = puStackX_20;
                                uStackX_18 = uVar22;
                            }
                            else {
                                if (puVar17 == NULL) {
                                    uStack_b0 = *puVar18;
                                    puVar18 = puVar18 + 1;
                                    in_stack_00000028 = puVar18;
                                }
                                else {
                                    uStack_b0 = *puVar17;
                                    puVar17 = puVar17 + 1;
                                    in_stack_00000030 = puVar17;
                                }
                                puVar21 = puStackX_20;
                                uVar16 = uStack_b0;
                            }
                            goto code_r0x0001213b;
                        }
                        if (uStack_a8 == 0x2b) {
                            uVar22 = uVar22 | 2;
                        }
                        else {
                            if (uStack_a8 != 0x2c) goto code_r0x000122fb;
                            uVar22 = uVar22 | 8;
                        }
                    }
                    goto code_r0x000122e4;
                }
                uVar16 = 0;
                uStack_b0 = 0;
                puStackX_20 = puVar21;
code_r0x000122fb:
                puVar21 = puStackX_20;
                if (uStack_a8 < 0x68) {
                    if (uStack_a8 == 0x67) {
                        if (puVar17 == NULL) {
                            uVar9 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            uVar9 = *puVar17;
                            in_stack_00000030 = puVar17 + 1;
                        }
                        if (uVar9 == 0) {
                            pcVar8 = "<null guid>";
                        }
                        else {
                            fcn.00012cfc(&var_68h,0x26,0,0x14570);
                            pcVar8 = &var_68h;
                            uVar11 = uStack_b8;
                        }
                        bVar2 = false;
                        uVar16 = uStack_b0;
                    }
                    else {
                        if (uStack_a8 != 10) {
                            if (uStack_a8 == 0xd) {
                                puVar21 = puStackX_20 + var_78h;
                                if (var_78h == 1) {
                                    iVar5 = 0;
                                }
                                else {
                                    iVar5 = puVar21[1] << 8;
                                }
                                uVar9 = iVar5 | *puVar21;
                                goto code_r0x000123ad;
                            }
                            if (uStack_a8 == 0x53) goto code_r0x00012599;
                            if (uStack_a8 == 0x58) goto code_r0x00012694;
                            if (uStack_a8 == 0x61) goto code_r0x000125a2;
                            if (uStack_a8 == 99) {
                                if (puVar17 == NULL) {
                                    uVar1 = *puVar18;
                                    in_stack_00000028 = puVar18 + 1;
                                }
                                else {
                                    uVar1 = *puVar17;
                                    in_stack_00000030 = puVar17 + 1;
                                }
                                var_80h = uVar1;
                                pcVar8 = &var_80h;
                                goto code_r0x00012115;
                            }
                            if (uStack_a8 != 100) goto code_r0x00012111;
                            goto code_r0x000126ab;
                        }
                        puVar21 = puStackX_20 + var_78h;
                        pcVar8 = 0x14508;
                        if (var_78h == 1) {
                            iVar5 = 0;
                        }
                        else {
                            iVar5 = puVar21[1] << 8;
                        }
                        uStack_a8 = (iVar5 | *puVar21) & uStack_98;
                        if (uStack_a8 != 0xd) {
                            puVar21 = puStackX_20;
                        }
                    }
                    goto code_r0x000128db;
                }
                if (uStack_a8 != 0x70) {
                    if (uStack_a8 == 0x72) {
                        if (puVar17 == NULL) {
                            uVar9 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            uVar9 = *puVar17;
                            in_stack_00000030 = puVar17 + 1;
                        }
                        pcVar8 = &var_68h;
                        if (uVar9 < 0) {
                            if ((uVar9 & 0x7fffffffffffffff) - 1 < 0x21) {
                                pcVar8 = (uVar9 & 0x7fffffffffffffff) * 0x15;
                                iVar13 = 0x1466b;
                                goto code_r0x0001265b;
                            }
                        }
                        else if (uVar9 < 6) {
                            iVar13 = uVar9 * 0x19;
                            pcVar8 = "Success";
code_r0x0001265b:
                            pcVar8 = pcVar8 + iVar13;
                            if (pcVar8 != &var_68h) goto code_r0x000128db;
                        }
                        fcn.00012cfc(&var_68h,0x26,0,0x145d4);
                    }
                    else {
                        if (uStack_a8 == 0x73) {
code_r0x00012599:
                            uVar22 = uVar22 | 0x400;
                            uStackX_18 = uVar22;
code_r0x000125a2:
                            if (puVar17 == NULL) {
                                pcVar8 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                pcVar8 = *puVar17;
                                in_stack_00000030 = puVar17 + 1;
                            }
                            if (pcVar8 == NULL) {
                                uVar22 = uVar22 & 0xfffffffffffffbff;
                                pcVar8 = "<null string>";
                                uStackX_18 = uVar22;
                            }
                            uVar16 = uVar16 & -((uVar22 & 0x800) != 0);
                            goto code_r0x000128db;
                        }
                        if (uStack_a8 != 0x74) {
                            if (uStack_a8 != 0x75) {
                                if (uStack_a8 != 0x78) goto code_r0x00012111;
                                goto code_r0x00012698;
                            }
                            goto code_r0x0001269d;
                        }
                        if (puVar17 == NULL) {
                            uVar9 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            in_stack_00000030 = puVar17 + 1;
                            uVar9 = *puVar17;
                        }
                        if (uVar9 == 0) {
                            pcVar8 = "<null time>";
                            goto code_r0x000128db;
                        }
                        fcn.00012cfc(&var_68h,0x26,0,0x145b8);
                        pcVar8 = &var_68h;
                    }
                    uVar11 = uStack_b8;
                    goto code_r0x000128db;
                }
                uVar22 = uVar22 & 0xffffffffffffffd9 | 0x10;
code_r0x00012694:
                uVar22 = uVar22 | 0x20;
code_r0x00012698:
                uVar22 = uVar22 | 0x80;
code_r0x0001269d:
                if (-1 < uVar22) {
                    uVar22 = uVar22 & 0xfffffffffffffffd | 0x4000;
                }
code_r0x000126ab:
                if ((uVar22 & 0x10) == 0) {
                    if (puVar17 != NULL) {
                        uVar9 = *puVar17;
                        goto code_r0x000126ed;
                    }
                    uVar9 = *puVar18;
                    in_stack_00000028 = puVar18 + 1;
                }
                else if (puVar17 == NULL) {
                    uVar9 = *puVar18;
                    in_stack_00000028 = puVar18 + 1;
                }
                else {
                    uVar9 = *puVar17;
code_r0x000126ed:
                    in_stack_00000030 = puVar17 + 1;
                }
                cVar4 = (uVar22 & 4) << 3;
                if ((uVar22 & 2) != 0) {
                    cVar4 = '+';
                }
                bVar23 = (uVar22 & 8) != 0;
                if (uVar22 < '\0') {
                    uVar15 = 0x10;
                    bVar23 = false;
                    if (((uVar22 & 0x10) == 0) && (uVar3 = 0x10, uVar9 < 0)) {
code_r0x00012778:
                        uVar15 = uVar3;
                        uVar9 = uVar9 & 0xffffffff;
                    }
                }
                else {
                    uVar15 = 10;
                    if ((uVar22 & 8) != 0) {
                        uVar22 = uVar22 & 0xffffffffffffffdf;
                        uVar16 = 1;
                    }
                    if ((uVar9 < 0) && (uVar22 >> 0xe == 0)) {
                        cVar4 = '-';
                        uVar9 = -uVar9;
                    }
                    else {
                        uVar3 = 10;
                        if ((uVar22 & 0x4010) == 0x4000) goto code_r0x00012778;
                    }
                }
                var_68h._0_1_ = 0;
                piVar20 = &var_68h;
                uVar11 = uVar9;
                do {
                    uVar6 = uVar11 / uVar15;
                    piVar20 = piVar20 + 1;
                    *piVar20 = "0123456789ABCDEFPOSTCODE = <%08x>\n"[uVar11 % uVar15];
                    uVar11 = uVar6;
                } while (uVar6 != 0);
                uStack_b8 = piVar20 - &var_68h;
                if (uVar9 == 0) {
                    uStack_b8 = uStack_b8 & -(uVar16 != 0);
                }
                pcVar8 = &var_68h + uStack_b8;
                iStack_90 = 3 - uStack_b8 % 3;
                if (uStack_b8 % 3 == 0) {
                    iStack_90 = 0;
                }
                if ((bVar23) && (uStack_b8 != 0)) {
                    uStack_b8 = uStack_b8 + (uStack_b8 - 1) / 3;
                }
                if (cVar4 != '\0') {
                    uStack_b8 = uStack_b8 + 1;
                    uVar16 = uVar16 + 1;
                }
                uVar22 = uVar22 | 0x1000;
                bVar2 = true;
                uVar11 = uStack_b8;
                uStackX_18 = uVar22;
                if ((uVar22 & 0xa21) == 0x220) {
                    uVar16 = uStack_a0;
                }
            }
            else {
code_r0x00012111:
                pcVar8 = &uStack_a8;
code_r0x00012115:
                uVar22 = uVar22 | 0x400;
                uStackX_18 = uVar22;
                puVar21 = puStackX_20;
            }
        }
code_r0x000128db:
        puStackX_20 = puVar21;
        uVar15 = uVar22;
        iVar13 = ((uVar22 & 0x400) != 0) + 1;
        var_40h = (-((uVar22 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar22 >> 0xc & 1) == 0) {
            uVar11 = 0;
            pcVar14 = pcVar8 + 1;
            while ((((pcVar14[-1] != '\0' || (((uVar22 & 0x400) != 0 && (*pcVar14 != '\0')))) &&
                    ((uVar11 < uVar16 || ((uVar22 >> 0xb & 1) == 0)))) &&
                   ((var_40h & (*pcVar14 << 8 | pcVar14[-1])) != 0))) {
                uVar11 = uVar11 + 1;
                pcVar14 = pcVar14 + iVar13;
            }
            uStack_b8 = uVar11;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar16 < uVar11) {
            uVar16 = uVar11;
        }
        uVar9 = uVar15 & 0x201;
        var_38h = uVar9;
        pcVar14 = pcStack_d8;
        if (uVar9 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar16) * uVar19;
            if (((uVar22 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f5c(arg1,pcStack_d8,uStack_a0 - uVar16,0x20);
            }
        }
        uVar6 = uVar19;
        if (bVar2) {
            if (((cVar4 != '\0') && (uStack_d0 = uStack_d0 + uVar19, (uVar22 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar4;
                    if (uVar19 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar19;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar16 - uVar11) * uVar19;
            if (((uVar22 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f5c(arg1,pcStack_d8,uVar16 - uVar11,(uVar15 & 0x2000) + 0x30);
            }
        }
        else {
            uStack_d0 = uStack_d0 + (uVar16 - uVar11) * uVar19;
            if (((uVar22 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f5c(arg1,pcVar14,uVar16 - uVar11,(uVar15 & 0x2000) + 0x20);
            }
            if (((cVar4 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar22 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar4;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        arg3 = uVar22;
        if ((cVar4 != '\0') < uStack_b8) {
            uVar9 = cVar4 != '\0';
            iVar10 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar13 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar11 = *pcVar8 & var_40h;
                if (((uVar22 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar8 = pcVar8 + iVar13;
                uVar11 = uVar9 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar9 + 2;
                    if (uStack_b8 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar10 = iVar12;
                    if (((uVar22 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar10 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar9 = uVar11;
            } while (uVar11 < uStack_b8);
            arg3 = uStackX_18;
            uVar9 = var_38h;
        }
        if (uVar9 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar16) * uVar6;
            if (((uVar22 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f5c(arg1,pcStack_d8,uStack_a0 - uVar16,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar5 = 0;
        }
        else {
            iVar5 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar5 | *puStackX_20) & uStack_98;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar19;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar19 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar19 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar19;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h_2) / uVar19;
}


/* fcn.00011d98 @ 0x11d98 */

void fcn.00011d98(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t arg1_00;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint *puVar6;
    uint8_t uVar7;
    uchar uVar8;
    int64_t noname_0_00;
    uint64_t arg1_01;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t uStackX_10;
    
    arg1_00 = *0x149e8;
    uStackX_10 = arg1 & 0xffffffffffff0000;
    cVar3 = '\0';
    fcn.00011f30(*0x149e8,0x800,0x14510,arg2);
    *(arg1_00 + -100) = 0x80000000;
    noname_0_00 = 3;
    fcn.00011564(3,0x3050000,0,0);
    iVar9 = 0;
    pcVar5 = *0x149e0;
    while (pcVar5 != NULL) {
        noname_0_00 = arg1_00;
        (*pcVar5)(arg1_00,arg2,arg3);
        iVar9 = iVar9 + 1;
        pcVar5 = *(iVar9 * 8 + 0x149e0);
    }
    fcn.00011cb4(noname_0_00,arg1_00);
    do {
        uVar7 = 0x22;
        if (*0x14a60 != '\0') {
            uVar7 = *0x14368;
        }
        if ((uVar7 & 2) != 0) {
            in(0x3fc);
            do {
                uVar2 = in(0x3fd);
            } while ((uVar2 & 1) == 0);
            cVar3 = in(0x3f8);
            uStackX_10 = CONCAT71(uStackX_10._1_7_,cVar3);
        }
        if ((uVar7 & 0x10) != 0) {
            puVar10 = &uStackX_10;
            arg1_01 = *0x1437c;
            if ((*0xfdcb0618 & 2) == 0) {
                arg1_01 = 0xf1000;
            }
            puVar6 = fcn.00013958(arg1_01);
            if (((puVar6 & 0xffffff00) != 0) && ((puVar6 & 0xfffff000) != 0xfffff000)) {
                fcn.0001364c(puVar6 & 0xfffff000,arg1_01);
                iVar1 = puVar6[0x3f];
                do {
                    if (iVar1 == 0x44570110) {
                        uVar4 = puVar6[5];
                    }
                    else {
                        uVar4 = *(puVar6 + 5);
                    }
                    if ((uVar4 & 1) == 0) break;
                    if (iVar1 == 0x44570110) {
                        uVar8 = *puVar6;
                    }
                    else {
                        uVar8 = *puVar6;
                    }
                    if ((uVar4 & 0x10) == 0) {
                        *puVar10 = uVar8;
                        puVar10 = puVar10 + 1;
                    }
                } while (puVar10 - &uStackX_10 != 1);
            }
            cVar3 = uStackX_10;
        }
        if (cVar3 != '\0') {
            return;
        }
    } while( true );
}


/* fcn.00011f30 @ 0x11f30 */

void fcn.00011f30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int64_t in_stack_00000040;
    
    fcn.00011f90(arg1,arg2,0,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013028 @ 0x13028 */

int64_t fcn.00013028(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1 = arg1 & 7;
    piVar2 = piVar1;
    if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
        iVar3 = 8 - arg1;
        for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 1;
            iVar3 = iVar3 + -1;
        }
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
        arg2 = arg2 + 8;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.000119ec @ 0x119ec */

ulong fcn.000119ec(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    uVar1 = *0x140c0;
    while( true ) {
        if (uVar1 == 0) {
            fcn.00011f30(arg2,0x800,0x144d8,arg1 & 0xff000000);
            return 0;
        }
        if (uVar1 == arg1) break;
        uVar2 = uVar2 + 1;
        uVar1 = *(uVar2 * 0x10 + 0x140c0);
    }
    fcn.00011f30(arg2,0x800,0x14478,*(uVar2 * 0x10 + 0x140c8));
    return 0;
}


/* fcn.00012d20 @ 0x12d20 */

uint64_t fcn.00012d20(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int64_t noname_0;
    uint64_t uVar4;
    uchar *puVar5;
    
    uVar3 = 0;
    uVar1 = 0x22;
    if (*0x14a60 != '\0') {
        uVar1 = *0x14368;
    }
    noname_0 = arg1;
    if (((uVar1 & 2) != 0) && (noname_0 = arg2, puVar5 = arg1, arg1 != 0)) {
        while (noname_0 != 0) {
            do {
                uVar2 = in(0x3fd);
            } while ((uVar2 & 0x20) == 0);
            uVar4 = uVar3;
            do {
                if (noname_0 == 0) goto code_r0x00012d94;
                out(0x3f8,*puVar5);
                uVar4 = uVar4 + 1;
                noname_0 = noname_0 + -1;
                puVar5 = puVar5 + 1;
            } while (uVar4 < 0x10);
        }
code_r0x00012d94:
        uVar3 = arg2;
    }
    if ((uVar1 & 0x10) != 0) {
        uVar3 = fcn.00013680(noname_0,arg1,arg2);
    }
    if ((uVar1 & 0x20) != 0) {
        fcn.0001309c(4,arg1,arg2);
    }
    return uVar3;
}


/* fcn.00013958 @ 0x13958 */

int64_t fcn.00013958(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (uVar3 < 0xfe020000) {
        uVar1 = *((uVar3 + 0x10 >> 4 & 0x10000000 | uVar3 + 0x10 & 0xffffffff) + 0xc0000000);
        uVar2 = *((uVar3 + 0x14 >> 4 & 0x10000000 | uVar3 + 0x14 & 0xffffffff) + 0xc0000000);
    }
    else {
        uVar1 = *(uVar3 + 0x10);
        uVar2 = *(uVar3 + 0x14);
    }
    return (uVar1 & 0xfffff000) + (uVar2 << 0x20);
}


/* fcn.0001364c @ 0x1364c */

void fcn.0001364c(ulong noname_0,int64_t arg1)

{
    if ((((*arg1 != -1) && ((*(arg1 + 4) & 2) == 0)) && ((*(arg1 + 0x10) & 0xfffff000) != 0)) &&
       ((*(arg1 + 0x10) & 0xfffff000) != 0xfffff000)) {
        *(arg1 + 4) = *(arg1 + 4) | 2;
    }
    return;
}


/* fcn.000135fc @ 0x135fc */

uint64_t fcn.000135fc(uint32_t arg1)

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


/* fcn.00013628 @ 0x13628 */

uint64_t fcn.00013628(uint32_t arg1)

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


/* fcn.00012cfc @ 0x12cfc */

void fcn.00012cfc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int64_t in_stack_00000040;
    
    fcn.00011f90(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011f5c @ 0x11f5c */

uchar * fcn.00011f5c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00013680 @ 0x13680 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00013680(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *arg1_00;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int aiStackX_20 [2];
    uint32_t var_48h;
    int aiStack_48 [2];
    uint32_t *puStack_40;
    int64_t aiStack_38 [2];
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    cVar1 = fcn.00013780(noname_0,&puStack_40,aiStackX_20);
    if ((cVar1 != '\0') && (arg1 != 0)) {
        if (aiStackX_20[0] == 1) {
            uVar2 = puStack_40[0x1f];
        }
        else {
            uVar2 = *(puStack_40 + 0x1f);
        }
        if (uVar2 != 0xff) {
            uVar8 = 0;
            iVar6 = 1000000;
            if (arg2 == 0) {
                return 0;
            }
            uVar7 = 0;
            do {
                while( true ) {
                    if (aiStackX_20[0] == 1) {
                        uVar5 = puStack_40[0x1f];
                    }
                    else {
                        uVar5 = *(puStack_40 + 0x1f);
                    }
                    if ((uVar5 & 2) == 0) break;
                    if (aiStackX_20[0] == 1) {
                        *puStack_40 = *(uVar7 + arg1);
                    }
                    else {
                        *puStack_40 = *(uVar7 + arg1);
                    }
                    uVar8 = uVar8 + 1;
                    uVar7 = uVar8;
                    if (arg2 <= uVar7) {
                        return arg2;
                    }
                }
                if (iVar6 == 0) {
                    arg1_00 = aiStack_38;
                    puVar3 = puStack_40;
                    cVar1 = fcn.00013780(puStack_40,arg1_00,aiStack_48);
                    if (cVar1 == '\0') {
                        return 0;
                    }
                    if (aiStack_48[0] == 1) {
                        uVar4 = *(aiStack_38[0] + 0x10);
                    }
                    else {
                        uVar4 = CONCAT71(puVar3 >> 8,*(aiStack_38[0] + 4));
                    }
                    uVar2 = uVar4 >> 5;
                    if ((uVar2 & 1) == 0) {
                        return 0;
                    }
                    fcn.00013904(CONCAT71(uVar4 >> 8,uVar2) & 0xffffffffffffff01,arg1_00);
                    iVar6 = 1000000;
                }
                fcn.00012f44(0x23);
                iVar6 = iVar6 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.0001309c @ 0x1309c */

ulong fcn.0001309c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg2_00;
    uint8_t uVar1;
    uchar *arg2_01;
    uint *arg3_00;
    bool bVar2;
    bool bVar3;
    uint uStack_108;
    uint uStack_104;
    uchar auStack_f8 [12];
    uint32_t uStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_88;
    uchar auStack_78 [112];
    
    if (arg3 == 0) {
        return 0;
    }
    if (*0xfe1000e8 == 0xff) {
        return 0x8000000000000015;
    }
    if ((*0xfe1000e8 & 1) == 0) {
        return 0x8000000000000015;
    }
    uVar1 = *0xfe1000e8 >> 1 & 3;
    arg2_00 = arg1;
    if (uVar1 == 0) {
        bVar2 = arg2_00 == 1;
        bVar3 = arg2_00 == 2;
    }
    else if (uVar1 == 1) {
        bVar2 = arg2_00 - 1 < 2;
        bVar3 = arg2_00 - 1 == 2;
    }
    else {
        if (uVar1 != 2) {
            if (uVar1 != 3) {
                return 0x8000000000000015;
            }
            goto code_r0x00013123;
        }
        bVar2 = arg2_00 - 1 < 3;
        bVar3 = arg2_00 - 1 == 3;
    }
    if (!bVar2 && !bVar3) {
        return 0x8000000000000015;
    }
code_r0x00013123:
    uStack_108 = 0x48;
    uStack_104 = 0xe;
    fcn.000132f0(auStack_78);
    arg3_00 = &uStack_108;
    arg2_01 = auStack_f8;
    fcn.00013344(auStack_78,arg2_01,arg3_00);
    if (iStack_88 != 0) {
        uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
        uStack_e8 = *0x14080;
        uStack_e0 = *0x14088;
        fcn.000131ac(auStack_f8,arg2_01,arg3_00,arg2_00);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00011180 @ 0x11180 */

void fcn.00011180(void)

{
    return;
}


/* fcn.000132f0 @ 0x132f0 */

void fcn.000132f0(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x14b80;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x14b00) {
        fcn.00011200(arg1_00,0x14b00,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x13490;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x133b0;
    *(arg1_00 + 4) = fcn.00011f2c;
    *(arg1_00 + 8) = 0x13454;
    *(arg1_00 + 10) = 0x1344c;
    *(arg1_00 + 0xc) = 0x1345c;
    *(arg1_00 + 0xe) = 0x13464;
    *(arg1_00 + 0x10) = 0x1346c;
    *(arg1_00 + 0x12) = 0x13474;
    *(arg1_00 + 0x14) = 0x13488;
    *(arg1_00 + 0x16) = 0x1347c;
    return;
}


/* fcn.00013344 @ 0x13344 */

int64_t fcn.00013344(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x14b80;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x14b00) {
        fcn.00011200(arg2,0x14b00,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.000131ac @ 0x131ac */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.000131ac(uint32_t arg1,ulong noname_1,ulong noname_2,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint16_t uVar3;
    uint *puVar4;
    uint32_t uVar5;
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
    uint32_t var_9h;
    int64_t var_5h;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 != 0x14a80) {
        puVar4 = &uStack_88;
        uVar5 = (arg2 & 7) << 4 | *(piVar2 + 0xc) & 0xffff80;
        uStack_58 = uVar5 | 0x1000002;
        if ((*(piVar2 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar2[2];
            iStack_4c = piVar2[3];
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x14970;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar2[4];
            *(piVar2 + 4) = _auStack_44 + 1;
            *puVar4 = *0x14974;
            puVar4 = puVar4 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar3 = 0;
            do {
                cVar1 = *(uVar3 + in_stack_00000030);
                acStack_28[uVar3] = cVar1;
                if (cVar1 == '\0') break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
            if ((uVar3 < 0x18) && (0x18 - uVar3 != 0)) {
                fcn.00011240(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x14988;
        }
        else {
            uStack_58 = uVar5 | 0x1000202;
            *puVar4 = *0x14984;
            puVar4[1] = *0x1498c;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x149b0;
        (**(*piVar2 + 0x18))(piVar2,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00011240 @ 0x11240 */

int64_t fcn.00011240(int64_t arg1,int64_t arg2)

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


/* fcn.00011200 @ 0x11200 */

int64_t fcn.00011200(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013780 @ 0x13780 */

uint64_t fcn.00013780(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0xfdcb0618 & 2) == 0) {
        uVar2 = fcn.00013958(0xf1000);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) goto code_r0x000138f0;
        if ((*0xc00f1004 & 2) == 0) {
            *0xc00f1004 = *0xc00f1004 | 2;
            *0xc00f1084 = *0xc00f1084 & 0xfc;
            iVar3 = 0x81;
            if (*(uVar2 + 0xfc) == 0x44570110) {
                iVar3 = 0x204;
            }
            *(iVar3 + uVar2) = *(iVar3 + uVar2) | 7;
        }
    }
    else {
        uVar4 = *0x1437c;
        uVar2 = fcn.00013958(*0x1437c);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) {
code_r0x000138f0:
            return uVar2 & 0xffffffffffffff00;
        }
        if ((*(uVar4 + 0x84) & 3) != 0) {
            *(uVar4 + 0x84) = *(uVar4 + 0x84) & 0xfc;
            iVar3 = 0x81;
            if (*(uVar2 + 0xfc) == 0x44570110) {
                iVar3 = 0x204;
            }
            *(iVar3 + uVar2) = *(iVar3 + uVar2) | 7;
        }
    }
    iVar1 = *(*arg1 + 0xfc);
    *arg2 = iVar1 == 0x44570110;
    return CONCAT71(iVar1 >> 8,1);
}


/* fcn.00013904 @ 0x13904 */

void fcn.00013904(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,arg2);
    cVar1 = fcn.00013780(arg1,aiStackX_18,aiStackX_10);
    if (cVar1 != '\0') {
        if (aiStackX_10[0] == 1) {
            uVar2 = *(aiStackX_18[0] + 0x10);
        }
        else {
            uVar2 = *(aiStackX_18[0] + 4);
        }
        uVar2 = uVar2 & 0xdf | 2;
        if (aiStackX_10[0] == 1) {
            *(aiStackX_18[0] + 0x10) = uVar2;
        }
        else {
            *(aiStackX_18[0] + 4) = uVar2;
        }
    }
    return;
}


/* fcn.00012f44 @ 0x12f44 */

void fcn.00012f44(int64_t arg1)

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


