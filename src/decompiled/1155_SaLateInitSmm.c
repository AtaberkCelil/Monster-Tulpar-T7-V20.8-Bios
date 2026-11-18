// decompiled by r2ghidra: 1155_SaLateInitSmm.pe32
// functions: 74

/* entry0 @ 0x112d4 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.0001134c(arg1,in_RDX);
    *0x167f0 = -0x7fffffffffffffff;
    iVar1 = fcn.00011040(0x166f0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011cf8(arg1,in_RDX);
        if ((-1 < iVar1) || (*0x167f0 < 0)) {
            *0x167f0 = iVar1;
        }
        fcn.00011170(0x166f0,-1);
    }
    iVar1 = *0x167f0;
    if (*0x167f0 < 0) {
        fcn.00012954();
    }
    return iVar1;
}


/* fcn.00012218 @ 0x12218 */

void fcn.00012218(void)

{
    return;
}


/* fcn.0001134c @ 0x1134c */

void fcn.0001134c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x166b8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x166b0 = arg2;
    uStackX_8 = arg1;
    (**(*0x166b8 + 0x140))(0x16090,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x166c0);
    (**(*0x166b8 + 0x140))(0x160d0,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x16800 = fcn.00012924();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x16800);
    *0x167f8 = uStackX_8 >> 5;
    fcn.000129f0();
    noname_0 = 0x16110;
    iVar3 = fcn.00012a20(0x16110);
    if (iVar3 == 0) {
        uVar4 = fcn.00011280();
        fcn.00011270();
        uVar1 = in(0x1808);
        fcn.00011250(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00011220();
        }
        fcn.00011250(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00011270();
        }
        else {
            fcn.00011260();
        }
    }
    fcn.00012990(0x160a0,0x166d8);
    //WARNING: Could not recover jumptable at 0x000114a0. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x166c0 + 0xd0))(0x16040,0,0x166e0);
    return;
}


/* fcn.00011040 @ 0x11040 */

ulong fcn.00011040(int64_t arg1)

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
    
    fcn.00012218();
    *(arg1 + 0xf8) = 0;
    if ((*0x165b0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011cf8 @ 0x11cf8 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00011cf8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int32_t var_2ch;
    int64_t var_30h;
    int64_t var_38h;
    int64_t iStack_28;
    uchar auStack_20 [8];
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    if ((((*0xc0010002 == 0x469f) || (*0xc0010002 == 0x46ff)) || (*0xc0010002 == -0x5861)) || (*0xc0010002 == -0x5801))
    {
        uStackX_18 = rdmsr(0x118);
        uStackX_18 = uStackX_18 | 1;
        wrmsr(0x118,uStackX_18);
    }
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar2 = fcn.00012a20(0x16060);
    if (iVar2 == 0) {
        uVar3 = 0x800000000000000e;
    }
    else {
        cVar1 = *(iVar2 + 0x7e4);
        (**(*0x166c0 + 0xd0))(0x16030,0,0x16ff8);
        arg2_00 = 0;
        iVar2 = (**(*0x166c0 + 0xd0))(str.Y_mEK,0,0x17008);
        if (iVar2 == 0) {
            if (cVar1 == '\x01') {
                arg2_00 = 0x11b4c;
                iStackX_10 = 0x200040000;
                iVar2 = (***0x16ff8)(*0x16ff8,0x11b4c,&iStackX_10,auStack_20);
                if (iVar2 == 0) {
                    (**(*0x166b8 + 0x140))(0x16020,0,&iStack_28);
                    if (iStack_28 != 0) {
                        fcn.00011c00(iStack_28);
                    }
                    (**(*0x166b8 + 0x40))(4,4,&stack0x00000020);
                    arg2_00 = 0x16080;
                    *(iStackX_20 + 2) = iStackX_10;
                    (**(*0x166b8 + 0x148))(&iStackX_8,0x16080,iStackX_20,0);
                }
            }
            else {
                *0x166a8 = 4;
            }
        }
        iVar2 = fcn.0001224c(iStackX_8,arg2_00);
        if (iVar2 != 0) {
            uStackX_18 = 0;
            while (uStackX_18 == 0) {
                fcn.00011220();
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011170 @ 0x11170 */

void fcn.00011170(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011219. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00012954 @ 0x12954 */

void fcn.00012954(void)

{
    char cVar1;
    
    cVar1 = fcn.000128e0(*0x16800);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001297a. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x166c0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00012989. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x166b8 + 0x48))(*0x16800);
    return;
}


/* fcn.000128e0 @ 0x128e0 */

uint64_t fcn.000128e0(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x167f8 != 0) {
        puVar2 = *0x16800 + 8;
        in_RAX = *0x16800;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x167f8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012924 @ 0x12924 */

ulong fcn.00012924(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x166c0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000129f0 @ 0x129f0 */

int64_t fcn.000129f0(void)

{
    if (*0x166d0 == 0) {
        fcn.00012990(0x16070,0x166d0);
    }
    return *0x166d0;
}


/* fcn.00012990 @ 0x12990 */

ulong fcn.00012990(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x166b0;
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


/* fcn.00012a20 @ 0x12a20 */

void fcn.00012a20(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000129f0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012a4e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012a4e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011280 @ 0x11280 */

uint64_t fcn.00011280(void)

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


/* fcn.00011270 @ 0x11270 */

void fcn.00011270(void)

{
    return;
}


/* fcn.00011250 @ 0x11250 */

uint64_t fcn.00011250(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011222 @ 0x11222 */

void fcn.00011222(void)

{
    return;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.000128a4 @ 0x128a4 */

int64_t fcn.000128a4(void)

{
    if (*0x166c8 == 0) {
        (**(*0x166b8 + 0x140))(0x16050,0,0x166c8);
    }
    return *0x166c8;
}


/* fcn.000114a8 @ 0x114a8 */

void fcn.000114a8(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    int32_t var_30h;
    int32_t var_38h;
    
    uVar1 = arg1 & 0xff;
    if ((*(uVar1 * 4 + 0x18540) != 0) && (*(uVar1 + 0x166a0) == '\x01')) {
        iVar3 = uVar1 * 0x600;
        uVar1 = (*(iVar3 + 0x19d80) & 0xffffffffffffff00) + 0xac;
        uVar1 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
        *(uVar1 + 0xc0000000) = *(uVar1 + 0xc0000000) | 0xc00;
        auStackX_10[0] = 0xc00;
        auStackX_8[0] = 0xfffff3ff;
        iVar2 = fcn.000128a4();
        iVar2 = (**(iVar2 + 0x20))(0x160f0,0x200002);
        (***0x166e0)(*0x166e0,3,2,(*(iVar3 + 0x19d80) & 0xffffffffffffff00) + 0xac + iVar2,auStackX_10,auStackX_8);
        uVar1 = (*(iVar3 + 0x19d80) & 0xffffffffffffff00) + 0x200;
        uVar1 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
        *(uVar1 + 0xc0000000) = *(uVar1 + 0xc0000000) & 0xf3ffffff;
        auStackX_10[0] = 0;
        auStackX_8[0] = 0xf3ffffff;
        iVar2 = fcn.000128a4();
        iVar2 = (**(iVar2 + 0x20))(0x160f0,0x200002);
        (***0x166e0)(*0x166e0,3,2,(*(iVar3 + 0x19d80) & 0xffffff00) + 0x200 + iVar2,auStackX_10,auStackX_8);
        uVar1 = (*(iVar3 + 0x19d80) & 0xffffffffffffff00) + 600;
        uVar1 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
        *(uVar1 + 0xc0000000) = *(uVar1 + 0xc0000000) | 4;
        auStackX_10[0] = 4;
        auStackX_8[0] = 0xfffffffb;
        iVar2 = fcn.000128a4();
        iVar2 = (**(iVar2 + 0x20))(0x160f0,0x200002);
        (***0x166e0)(*0x166e0,3,2,(*(iVar3 + 0x19d80) & 0xffffffffffffff00) + 600 + iVar2,auStackX_10,auStackX_8);
    }
    return;
}


/* fcn.000116dc @ 0x116dc */

void fcn.000116dc(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uchar *puVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    
    puVar5 = 0x19d60;
    uVar4 = 0x80;
    iVar1 = 7;
    if (arg1 == '\x01') {
        uVar7 = 0;
        do {
            *puVar5 = *(uVar7 + 0x80 + 0xc0000000);
            iVar1 = fcn.000128a4();
            iVar1 = (**(iVar1 + 0x20))(0x160f0,0x200002);
            (***0x166e0)(*0x166e0,2,0,uVar7 + 0x80 + iVar1,1,puVar5);
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
            puVar5 = puVar5 + 1;
        } while (uVar6 < 7);
    }
    else {
        do {
            puVar5 = uVar4 + 0x19ce0;
            uVar3 = uVar4 >> 4;
            uVar2 = uVar4 & 0xffffffff;
            uVar4 = uVar4 + 1;
            *((uVar3 & 0x10000000 | uVar2) + 0xc0000000) = *puVar5;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    return;
}


/* fcn.000117b0 @ 0x117b0 */

void fcn.000117b0(uint64_t param_1)

{
    uint *puVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint8_t uVar9;
    uint8_t *puVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    int64_t *piStackX_20;
    
    iVar6 = 0;
    if (*0x17320 == 0) {
        puVar10 = 0x166a4;
        piVar13 = 0x19d80;
        iVar8 = 4;
        do {
            if ((*piVar13 != 0) && (uVar5 = 0, *puVar10 != 0)) {
                do {
                    uVar11 = uVar5 + 1;
                    param_1 = (*((uVar5 + iVar6) * 8 + 0x19d80) & 0xffffff00) + 0x18;
                    *(param_1 + 0xc0000000) = *((uVar5 + iVar6) * 4 + 0x19160);
                    uVar5 = uVar11;
                } while (uVar11 < *puVar10);
            }
            iVar7 = 0;
            piVar13 = piVar13 + 0xc0;
            iVar6 = iVar6 + 0xc0;
            puVar10 = puVar10 + 1;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        piStackX_20 = 0x19d80;
        uVar11 = 0;
        iVar6 = iVar7;
        do {
            piVar13 = piStackX_20;
            if (*piStackX_20 != 0) {
                param_1 = CONCAT71(param_1 >> 8,uVar11);
                fcn.000114a8(param_1);
                uVar5 = 0;
                if (*(iVar7 + 0x166a4) != '\0') {
                    do {
                        iVar8 = uVar5 + iVar6;
                        uVar3 = *(iVar8 * 8 + 0x19d80) + 8;
                        uVar12 = *(iVar8 * 8 + 0x19d80) & 0xffffff00;
                        uVar4 = *(iVar8 * 8 + 0x19d80) + 0x10;
                        *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = *(iVar8 * 2 + 0x18b60);
                        uVar3 = *(iVar8 * 8 + 0x19d80) + 0x28;
                        *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) = *(iVar8 + 0x17020);
                        param_1 = uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff;
                        *(param_1 + 0xc0000000) = *(param_1 + 0xc0000000) & 0x9bff | *(iVar8 * 2 + 0x18560);
                        iVar2 = *(iVar8 * 4 + 0x1b880);
                        if (iVar2 != 0) {
                            uVar3 = iVar2 + 4 + uVar12;
                            iVar2 = *(iVar8 * 4 + 0x1b880);
                            *(uVar3 + 0xc0000000) = *(uVar3 + 0xc0000000) & 0xe000 | *(iVar8 * 2 + 0x17340);
                            param_1 = iVar2 + 6 + uVar12;
                            *(param_1 + 0xc0000000) = *(param_1 + 0xc0000000) & 0xe000 | *(iVar8 * 2 + 0x1c4a0);
                        }
                        iVar2 = *(iVar8 * 4 + 0x17940);
                        if (iVar2 != 0) {
                            param_1 = iVar2 + 0x14;
                            *(param_1 + 0xc0000000) = *(iVar8 + 0x1b580);
                        }
                        uVar9 = uVar5 + 1;
                        uVar5 = uVar9;
                    } while (uVar9 < *(iVar7 + 0x166a4));
                    piVar13 = piStackX_20;
                }
                if (*(iVar7 + 0x166a0) == '\x01') {
                    uVar5 = *piVar13 + 0x10U >> 4 & 0x10000000 | *piVar13 + 0x10U & 0xffffffff;
                    *(uVar5 + 0xc0000000) = *(uVar5 + 0xc0000000) | 0x20;
                    do {
                        param_1 = 0x800;
                    } while ((*((*piVar13 + 0x12U >> 4 & 0x10000000 | *piVar13 + 0x12U & 0xffffffff) + 0xc0000000) &
                             0x800) != 0);
                }
            }
            uVar11 = uVar11 + 1;
            piStackX_20 = piVar13 + 0xc0;
            iVar6 = iVar6 + 0xc0;
            iVar7 = iVar7 + 1;
        } while (uVar11 < 4);
    }
    auStackX_18[0] = 0;
    if (*0x17000 != 0) {
        *0x17000 = *0x17000 | 0x4000;
    }
    if (*0x18550 != 0) {
        *0x18550 = *0x18550 | 0x4000;
    }
    puVar1 = (CONCAT44(*0xc000004c,*0xc0000048) & 0xfffffffffffffffe) + 0x5d30;
    auStackX_10[0] = CONCAT22(*0x17000,*0x18550);
    *puVar1 = auStackX_10[0];
    (***0x166e0)(*0x166e0,3,2,puVar1,auStackX_10,auStackX_18);
    return;
}


/* fcn.00011c00 @ 0x11c00 */

void fcn.00011c00(uint32_t arg1)

{
    uint8_t uVar1;
    bool bVar2;
    uint in_register_0000000c;
    uint8_t *puVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int64_t iStackX_8;
    
    iVar8 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    uVar7 = 0;
    if (*(iVar8 + 0x1e) != 0) {
        do {
            if (*(iVar8 + 2) < uVar4 + 0x24) break;
            iVar6 = iVar8 + 0x24 + uVar4;
            if ((*(iVar6 + 8) == *0x160b0) && (*(iVar6 + 0x10) == *0x160b8)) goto code_r0x00011c66;
            uVar7 = uVar7 + 1;
            uVar4 = uVar4 + *(iVar6 + 2);
        } while (uVar7 < *(iVar8 + 0x1e));
    }
    iVar6 = iStackX_8;
code_r0x00011c66:
    fcn.00012a20(0x160e0);
    bVar2 = false;
    while (!bVar2) {
        *0x16100 = *0x165b8 & 0xfff;
        bVar2 = true;
    }
    *0x1c480 = *(iVar6 + 0x24);
    *0x1c488 = *(iVar6 + 0x2c);
    puVar3 = iVar6 + 0x1c;
    iVar8 = 4;
    *0x1c490 = *(iVar6 + 0x34);
    *0x1c498 = *(iVar6 + 0x3c);
    puVar5 = 0x18540;
    do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *0x17000 = 0;
    *0x18550 = 0;
    return;
}


/* fcn.0001224c @ 0x1224c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.0001224c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint auStackX_18 [2];
    ulong uStackX_20;
    int32_t var_50h;
    int64_t var_58h;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t aiStack_68 [2];
    uint32_t auStack_58 [2];
    uint32_t auStack_50 [2];
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    cVar1 = fcn.00012780();
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar4 = 1, cVar1 != '\x02')) {
        uVar4 = 3;
    }
    (**(*0x166c0 + 0xd0))(str.V_G_,0,&iStack_70);
    *0x16fe8 = 10;
    *0x16ff0 = 0x12;
    iVar2 = fcn.00012a20(0x16060);
    if (iVar2 != 0) {
        fcn.0001275c(iVar2 + 0x18,0x7c0);
    }
    iVar2 = 0x40;
    uVar6 = uVar4;
    do {
        fcn.000126b8(iVar2 + -0x40,auStack_58,auStack_50);
        uVar5 = ((auStack_58[0] & 0x1f) << 3 | auStack_50[0] & 7) << 0xc;
        if (*(uVar5 + 0xc0000000) != -1) {
            if ((*(uVar5 + 0xc0000054) & 0x40) != 0) {
                uStack_78 = 0;
                (**(iStack_70 + 0x10))(iStack_70,0x12208,iVar2,&uStack_78);
                (**(iStack_70 + 0x18))(iStack_70,fcn.00012218,iVar2,&uStack_78);
                auStackX_18[0] = 2;
                iStackX_10 = CONCAT44(iStackX_10._4_4_,0xfffffffd);
                iVar3 = fcn.000128a4();
                iVar3 = (**(iVar3 + 0x20))(0x160f0,0x200002);
                (***0x166e0)(*0x166e0,3,2,uVar5 + 0xd8 + iVar3,auStackX_18,&iStackX_10);
            }
            if ((*(uVar5 + 0xc000004c) & 0xf) == 3) {
                (**(iStack_70 + 0x20))(iStack_70,fcn.00012218,iVar2,&uStack_78);
            }
        }
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uStackX_20 = 0x40000;
    (***0x16ff8)(*0x16ff8,0x1221c,&uStackX_20,&var_40h);
    (**(*0x166b8 + 0x40))(4,4,aiStack_68);
    *(aiStack_68[0] + 2) = uStackX_20;
    (**(*0x166b8 + 0x148))(&iStackX_8,0x16010,aiStack_68[0],0);
    aiStack_68[1] = 3;
    (***0x17008)(*0x17008,0x12240,aiStack_68 + 1,&var_38h);
    return 0;
}


/* fcn.00011220 @ 0x11220 */

void fcn.00011220(void)

{
    return;
}


/* fcn.00012780 @ 0x12780 */

ulong fcn.00012780(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.00011140(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x0001289b;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x0001289b;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x000127df;
                    }
                }
code_r0x000127dd:
                uVar3 = 2;
                goto code_r0x000127df;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x000127dd;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x000127df;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x000127df;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x000127df;
            goto code_r0x000127dd;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x000127df;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x000127df;
        }
    }
code_r0x0001289b:
    uVar3 = 0;
code_r0x000127df:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.000126b8 @ 0x126b8 */

ulong fcn.000126b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00012780();
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
            cVar1 = fcn.00012780();
            if (cVar1 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x0001273d;
        }
    }
    *arg3 = 0;
code_r0x0001273d:
    *arg2 = 6;
    return 0;
}


/* fcn.0001461c @ 0x1461c */

void fcn.0001461c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    unkuint3 Var4;
    uint8_t uVar5;
    uchar uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uchar *arg2_00;
    uint32_t arg1_00;
    uint *arg3_00;
    uint64_t uVar9;
    int64_t iVar10;
    uint auStackX_8 [2];
    uint uStackX_10;
    int64_t in_stack_00000038;
    uchar auStack_118 [16];
    uint auStack_108 [52];
    
    uVar6 = *0x16ff0;
    Var4 = uStackX_10 >> 8;
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,arg1);
    uStackX_10 = CONCAT31(Var4,*0x16fe8);
    uVar7 = arg3;
    uVar8 = arg4 & 7;
    uVar9 = (uVar7 & 0x1f) << 3;
    iVar10 = (uVar9 | uVar8) << 0xc;
    if (*((uVar9 | uVar8) * 0x1000 + 0xc0000000) != -1) {
        uVar1 = *(in_stack_00000038 + 0x12);
        uVar2 = *(in_stack_00000038 + 0x10);
        uVar5 = fcn.0001249c(iVar10);
        auStack_108[0] = 0;
        uVar3 = uVar5;
        uVar7 = uVar7 & 0x1f;
        arg1_00 = ((uVar3 << 3 | arg4 & 7) << 5 | uVar7) << 0x10;
        fcn.00013488(arg1_00,CONCAT71(arg2 >> 8,uStackX_10),CONCAT71(arg3 >> 8,uVar6),auStack_108);
        fcn.00013ee0(arg1_00,(uVar1 & 0x1fff) << 0xd | uVar2 & 0x1fff | (Var4 & 0xfc0000) << 8);
        auStackX_8[0] = fcn.000143d8(arg1_00,auStack_118);
        arg3_00 = auStackX_8;
        fcn.0001489c(iVar10,uVar7,arg3_00,in_stack_00000038 + 0x10);
        if (*(in_stack_00000038 + 0xe) != '\0') {
            fcn.00013c84(arg1_00);
        }
        arg2_00 = auStack_118;
        fcn.00013990(arg1_00,arg2_00);
        uVar6 = fcn.00014388(arg1_00);
        fcn.00014aec(iVar10,CONCAT71(arg2_00 >> 8,uVar6),CONCAT71(arg3_00 >> 8,*(in_stack_00000038 + 0x23)));
        fcn.0001367c(arg1_00,0,auStack_118);
        iVar10 = fcn.00012acc(arg1_00);
        uVar8 = uVar3 + 0x10 + iVar10;
        if (((*((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000) & 3) - 1 & 0xfffd) == 0) {
            uVar8 = uVar3 + 0x418 + iVar10;
            uVar8 = uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff;
            *(uVar8 + 0xc0000000) = *(uVar8 + 0xc0000000) | 3;
        }
        fcn.00013440(auStack_108);
    }
    return;
}


/* fcn.00012a6c @ 0x12a6c */

void fcn.00012a6c(int64_t arg1)

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
            fcn.00011220();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00014238 @ 0x14238 */

void fcn.00014238(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uchar uVar3;
    char cVar4;
    uint32_t arg1_00;
    uint64_t uVar5;
    int64_t arg2_00;
    ulong uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t arg1_01;
    uint32_t auStackX_10 [2];
    uint auStack_e8 [52];
    
    uVar1 = *0x16ff0;
    uVar3 = *0x16fe8;
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg1);
    uVar7 = arg2;
    uVar5 = arg3 & 7;
    uVar8 = (uVar7 & 0x1f) << 3;
    arg1_01 = (uVar8 | uVar5) << 0xc;
    if (*((uVar8 | uVar5) * 0x1000 + 0xc0000000) != -1) {
        uVar2 = fcn.0001249c(arg1_01);
        auStack_e8[0] = 0;
        arg2_00 = CONCAT71(arg1 >> 8,uVar3);
        uVar7 = ((uVar2 << 3 | arg3 & 7) << 5 | uVar7 & 0x1f) << 0x10;
        fcn.00013488(uVar7,arg2_00,CONCAT71(arg2 >> 8,uVar1),auStack_e8);
        uVar3 = fcn.00013b44(uVar7);
        fcn.00013be0(uVar7,CONCAT71(arg2_00 >> 8,uVar3));
        uVar6 = 0;
        fcn.00014a24(arg1_01,0);
        fcn.00013d7c(uVar7,CONCAT71(uVar6 >> 8,1));
        cVar4 = fcn.00013fa4(uVar7);
        if (cVar4 != '\0') {
            arg1_00 = fcn.00012b28(uVar7);
            cVar4 = fcn.00012b90(uVar7,auStackX_10);
            if (cVar4 != '\0') {
                cVar4 = fcn.00012cb4(arg1_00,auStackX_10);
                if (cVar4 != '\0') {
                    cVar4 = fcn.00013fa4(auStackX_10[0]);
                    if (cVar4 != '\0') {
                        fcn.000141a0(uVar7,0,0);
                    }
                }
            }
        }
        fcn.00013440(auStack_e8);
    }
    return;
}


/* fcn.0001249c @ 0x1249c */

uint64_t fcn.0001249c(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    
    uVar2 = arg1 + 6U & 0xffffffff;
    uVar3 = *((arg1 + 6U >> 4 & 0x10000000 | uVar2) + 0xc0000000);
    uVar2 = CONCAT71(uVar2 >> 8,uVar3);
    if ((uVar3 & 0x10) != 0) {
        uVar5 = 0;
        uVar1 = 0x14;
        if ((*((arg1 + 0xeU >> 4 & 0x10000000 | arg1 + 0xeU & 0xffffffff) + 0xc0000000) & 0x7f) != 2) {
            uVar1 = 0x34;
        }
        uVar2 = uVar1 + arg1 & 0xffffffff;
        uVar3 = *((uVar1 + arg1 >> 4 & 0x10000000 | uVar2) + 0xc0000000) & 0xfc;
        uVar4 = uVar3;
        while ((uVar3 != 0 && (uVar5 != -1))) {
            uVar2 = uVar4 + arg1 & 0xffffffff;
            uVar5 = *((uVar4 + arg1 >> 4 & 0x10000000 | uVar2) + 0xc0000000);
            if (uVar5 == '\x10') {
                uVar3 = 0;
                if (0x3f < uVar4) {
                    uVar3 = uVar4;
                }
                return CONCAT71(uVar2 >> 8,uVar3);
            }
            uVar4 = uVar5 >> 8;
            uVar3 = uVar5 >> 8;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00013488 @ 0x13488 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

uchar fcn.00013488(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    int iVar8;
    uint32_t uVar9;
    char cVar10;
    uint64_t arg3_00;
    uint32_t uVar11;
    int32_t var_20h;
    int8_t var_30h;
    int64_t var_38h;
    uint8_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    int8_t var_20h_2;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int64_t var_8h;
    
    uVar4 = arg1;
    uVar9 = arg3 & 0xff;
    uStack_34 = uStack_34 & 0xffffff00 | uVar4 & 0xff | 0xff0000;
    puVar7 = arg4;
    uVar11 = uVar4;
    iVar5 = fcn.00012acc(arg1 & 0xffffffff);
    _var_18h = iVar5;
    uStack_2c = fcn.00012b28(uVar11);
    arg3_00 = uStack_2c;
    uVar11 = uVar4 >> 8 & 0xff;
    if ((uVar11 < uVar9) && (1 < uStack_2c)) {
        uVar1 = iVar5 + 0x18;
        uVar6 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
        _var_20h_2 = uVar6 >> 8;
        uStack_30 = uVar6 >> 0x10;
        if (uVar6 >> 8 == '\0') {
            uStack_38 = arg2;
            uVar6 = (arg2 & 0xff) * 0x100;
            uVar9 = uVar9 * 0x10000 + uVar11 + uVar6;
            uVar11 = *puVar7;
            *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) = uVar9;
            if (uVar11 < 0x32) {
                puVar7[*puVar7 + 1] = uVar4;
                *puVar7 = *puVar7 + 1;
            }
            uVar11 = arg2 & 0xff;
            uStack_34 = uStack_34 & 0xffff00ff | uVar6;
            puVar7 = &uStack_34;
            cVar10 = uStack_38 + 1;
            _var_20h_2 = uVar9;
            cVar2 = fcn.00012cb4(uStack_2c,puVar7);
            if (cVar2 != '\0') {
                do {
                    arg3_00 = CONCAT71(arg3_00 >> 8,arg3);
                    uVar3 = fcn.00013488(uStack_34,CONCAT71(puVar7 >> 8,cVar10),arg3_00,arg4);
                    if (uStack_38 <= uVar3) {
                        cVar10 = uVar3 + 1;
                        uStack_38 = uVar3;
                    }
                    uVar11 = uStack_38;
                    puVar7 = &uStack_34;
                    cVar2 = fcn.00012cb4(uStack_2c,puVar7);
                } while (cVar2 != '\0');
                uVar9 = _var_20h_2;
            }
            uStack_30._0_1_ = uVar11;
            *((_var_18h + 0x18U >> 4 & 0x10000000 | _var_18h + 0x18U & 0xffffffff) + 0xc0000000) =
                 uVar11 << 0x10 | uVar9 & 0xff00ffff;
        }
        else {
            iVar8 = _var_20h_2 + 1;
            puVar7 = &uStack_34;
            uStack_34 = (_var_20h_2 & 0xff) << 8 | uStack_34 & 0xffff00ff;
            cVar2 = fcn.00012cb4(uStack_2c,puVar7);
            if (cVar2 != '\0') {
                uVar11 = _var_20h_2;
                do {
                    arg3_00 = CONCAT71(arg3_00 >> 8,uStack_30);
                    uVar4 = fcn.00013488(uStack_34,CONCAT71(puVar7 >> 8,iVar8),arg3_00,arg4);
                    if (uVar11 <= uVar4) {
                        uVar11 = uVar4 & 0xff;
                        iVar8 = uVar4 + 1;
                    }
                    puVar7 = &uStack_34;
                    cVar2 = fcn.00012cb4(uStack_2c,puVar7);
                } while (cVar2 != '\0');
            }
        }
    }
    else {
        uStack_30._0_1_ = arg1 >> 8;
    }
    return uStack_30;
}


/* fcn.00013b44 @ 0x13b44 */

uint8_t fcn.00013b44(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t arg1_00;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint32_t auStackX_10 [2];
    
    uVar5 = arg1 & 0xffffffff;
    iVar4 = fcn.00012acc(arg1);
    uVar5 = ((uVar5 & 0xffffffff) >> 0x18) + iVar4 + 4;
    uVar1 = *((uVar5 >> 4 & 0x10000000 | uVar5 & 0xffffffff) + 0xc0000000);
    uVar6 = uVar1 & 7;
    if ((uVar1 & 7) == 0) {
        uVar6 = 0;
    }
    else {
        cVar2 = fcn.00012b90(arg1 & 0xffffffff,auStackX_10);
        if (cVar2 != '\0') {
            arg1_00 = fcn.00012b28(arg1);
            while (cVar2 = fcn.00012cb4(arg1_00,auStackX_10), cVar2 != '\0') {
                uVar3 = fcn.00013b44(auStackX_10[0]);
                if (uVar6 < uVar3) {
                    uVar3 = uVar6;
                }
                uVar6 = uVar3;
            }
        }
    }
    return uVar6;
}


/* fcn.00013be0 @ 0x13be0 */

void fcn.00013be0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t arg1_00;
    int64_t iVar2;
    uint32_t *arg2_00;
    uint64_t uVar3;
    uint32_t auStackX_10 [2];
    
    cVar1 = fcn.00012b90(arg1,auStackX_10);
    if (cVar1 != '\0') {
        arg1_00 = fcn.00012b28(arg1);
        while( true ) {
            arg2_00 = auStackX_10;
            cVar1 = fcn.00012cb4(arg1_00,arg2_00);
            if (cVar1 == '\0') break;
            fcn.00013be0(auStackX_10[0],CONCAT71(arg2_00 >> 8,arg2));
        }
    }
    iVar2 = fcn.00012acc(arg1 & 0xffffffff);
    uVar3 = (arg1 >> 0x18) + 8 + iVar2;
    uVar3 = uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff;
    *(uVar3 + 0xc0000000) = (arg2 & 0xff) << 5 | *(uVar3 + 0xc0000000) & 0xff1f;
    return;
}


/* fcn.00014a24 @ 0x14a24 */

void fcn.00014a24(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t *arg3;
    uint32_t *puVar6;
    uint32_t uVar7;
    int64_t arg3_00;
    uint64_t uVar8;
    
    uVar3 = 0;
    uVar4 = arg1 + 0xd4;
    uVar8 = (*((arg1 + 0x4cU >> 4 & 0x10000000 | arg1 + 0x4cU & 0xffffffff) + 0xc0000000) >> 0x18) - 1;
    if (arg2 == '\0') {
        uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
        *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 2;
        return;
    }
    uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
    *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) & 0xfffffffd;
    cVar1 = fcn.00014864();
    if (cVar1 == '\0') {
        if (uVar8 < 0x18) {
            uVar3 = *(uVar8 * 4 + 0x165f0);
        }
    }
    else if (uVar8 < 0xc) {
        uVar3 = *(uVar8 * 4 + 0x16650);
    }
    puVar6 = 0x163e8;
    uVar7 = 0;
    if (*0x16260 != 0) {
        do {
            arg3 = uVar7 * 0x10 + 0x16264;
            if (*arg3 == *0x163e8) goto code_r0x00014d12;
            uVar7 = uVar7 + 1;
        } while (uVar7 < *0x16260);
    }
    arg3 = NULL;
code_r0x00014d12:
    fcn.00014bfc(*0x163f0,uVar3,arg3);
    uVar7 = uVar3 >> 0x10 & 0xff;
    if (uVar7 != *0x163e8) {
        uVar4 = 0;
        if (*0x163e0 != 0) {
            do {
                if (*puVar6 == uVar7) {
                    iVar5 = uVar4 * 0x10 + 0x163e8;
                    goto code_r0x00014d49;
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                puVar6 = puVar6 + 4;
            } while (uVar2 < *0x163e0);
        }
        iVar5 = 0;
code_r0x00014d49:
        uVar4 = 0;
        if (*0x16260 != 0) {
            puVar6 = 0x16264;
            do {
                if (*puVar6 == uVar7) {
                    arg3_00 = uVar4 * 0x10 + 0x16264;
                    goto code_r0x00014d6a;
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                puVar6 = puVar6 + 4;
            } while (uVar2 < *0x16260);
        }
        arg3_00 = 0;
code_r0x00014d6a:
        if ((iVar5 != 0) && (arg3_00 != 0)) {
            fcn.00014bfc(*(iVar5 + 8),uVar3,arg3_00);
        }
    }
    return;
}


/* fcn.00014864 @ 0x14864 */

ulong fcn.00014864(void)

{
    char cVar1;
    
    cVar1 = fcn.00014828();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00014828(), cVar1 != '\x05')) && (cVar1 = fcn.00014828(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00014828(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00014bfc @ 0x14bfc */

void fcn.00014bfc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    
    if (arg3 != 0) {
        uVar3 = arg2;
        uVar4 = 0;
        if (arg1 != 0) {
            uVar1 = (**(*arg1 + 0x50))(*arg1,*(arg3 + 6));
            uVar5 = uVar1 >> 1;
            if (uVar5 != 0) {
                do {
                    uVar2 = (**(*arg1 + 0x50))(*arg1,*(arg3 + 4) + uVar4 * 4);
                    if (uVar2 == uVar3) {
                        return;
                    }
                    if (((uVar2 ^ uVar3) & 0xff0000) == 0) {
                        return;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar5);
            }
            uVar1 = uVar1 >> 1 & 0xff;
            if (uVar1 < *(arg3 + 8)) {
                (**(*arg1 + 0x58))(*arg1,*(arg3 + 4) + uVar1 * 4,uVar3);
                (**(*arg1 + 0x58))(*arg1,*(arg3 + 6),(uVar5 + 1) * 2 | 1);
            }
        }
    }
    return;
}


/* fcn.00013d7c @ 0x13d7c */

//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.00013d7c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t arg1_00;
    ulong uVar5;
    int64_t iVar6;
    uint32_t arg1_01;
    uint64_t uVar7;
    uint32_t *arg2_00;
    uint8_t uVar8;
    uint64_t in_R8;
    uint32_t auStackX_20 [2];
    int16_t var_38h;
    int64_t var_40h;
    int64_t var_18h;
    
    arg1_01 = arg1;
    uVar8 = 0;
    uVar4 = arg1_01;
    arg1_00 = fcn.00012acc(arg1);
    uVar7 = arg1_00 + (uVar4 >> 0x18) + 0x12;
    uVar1 = *((uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff) + 0xc0000000) >> 0xc;
    uVar5 = fcn.00012b90(arg1 & 0xffffffff,auStackX_20);
    if (uVar5 != '\0') {
        uVar4 = fcn.00012b28(arg1_01);
        arg2_00 = auStackX_20;
        uVar5 = fcn.00012cb4(uVar4,arg2_00);
        cVar3 = uVar5;
        while (cVar3 != '\0') {
            uVar2 = fcn.00013d7c(auStackX_20[0],CONCAT71(arg2_00 >> 8,arg2));
            arg2_00 = auStackX_20;
            uVar8 = uVar8 | uVar2;
            uVar5 = fcn.00012cb4(uVar4,arg2_00);
            cVar3 = uVar5;
        }
        if ((uVar4 == 3) && ((uVar8 & uVar1 & 1) != 0)) {
            uVar4 = arg1_01;
            iVar6 = fcn.00012acc(arg1 & 0xffffffff);
            uVar7 = (uVar4 >> 0x18) + 0x10 + iVar6;
            uVar7 = uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff;
            *(uVar7 + 0xc0000000) = *(uVar7 + 0xc0000000) | 0x40;
            while (cVar3 = fcn.00012cb4(3,auStackX_20), cVar3 != '\0') {
                uVar4 = auStackX_20[0];
                iVar6 = fcn.00012acc(auStackX_20[0]);
                uVar7 = (uVar4 >> 0x18) + 0x10 + iVar6;
                in_R8 = uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff;
                *(in_R8 + 0xc0000000) = *(in_R8 + 0xc0000000) | 0x40;
            }
            uVar5 = fcn.000125fc(arg1_00,arg1_01 >> 0x18,CONCAT71(in_R8 >> 8,arg2));
        }
    }
    return CONCAT71(uVar5 >> 8,uVar1) & 0xffffffffffffff01;
}


/* fcn.00013fa4 @ 0x13fa4 */

bool fcn.00013fa4(int64_t arg1)

{
    int16_t iVar1;
    uint64_t uVar2;
    
    if (arg1 == '\0') {
        uVar2 = arg1 >> 8 & 0xff;
    }
    else {
        uVar2 = (arg1 & 0xffU) << 0xc | arg1 >> 8 & 0xff;
    }
    iVar1 = fcn.00012568(((uVar2 << 5 | arg1 >> 0x10 & 0x1f) << 3 | arg1 >> 0x15 & 7) << 0xc,0x1f);
    return iVar1 != 0;
}


/* fcn.00012b28 @ 0x12b28 */

int fcn.00012b28(uint32_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    uVar4 = arg1;
    if (arg1 < 0x1000000) {
        iVar2 = 0;
    }
    else {
        iVar3 = fcn.00012acc(uVar4);
        uVar4 = (uVar4 >> 0x18) + iVar3 + 2;
        uVar1 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) >> 4;
        if (uVar1 == 5) {
            iVar2 = 2;
        }
        else {
            iVar2 = (-((uVar1 - 4 & 0xfd) != 0) & 0xfffffffe) + 3;
        }
    }
    return iVar2;
}


/* fcn.00012b90 @ 0x12b90 */

uint64_t fcn.00012b90(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    char cVar2;
    uint64_t uVar3;
    
    *arg2 = arg1;
    *arg2 = *arg2 | 0xff0000;
    uVar3 = fcn.00012acc(arg1);
    if (*((uVar3 + 0xb >> 4 & 0x10000000 | uVar3 + 0xb & 0xffffffff) + 0xc0000000) == '\x06') {
        uVar1 = *((uVar3 + 0x18 >> 4 & 0x10000000 | uVar3 + 0x18 & 0xffffffff) + 0xc0000000);
        cVar2 = uVar1 >> 8;
        *(arg2 + 1) = cVar2;
        uVar3 = CONCAT21(uVar1 >> 0x10,cVar2 != '\0');
    }
    else {
        uVar3 = uVar3 & 0xffffffffffffff00;
    }
    return uVar3;
}


/* fcn.00012cb4 @ 0x12cb4 */

ulong fcn.00012cb4(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    iVar5 = 0xc0000000;
    do {
        if (arg1 == 1) {
            return 0;
        }
        uVar3 = *arg2;
        if (uVar3 == '\0') {
            uVar4 = uVar3 >> 1 & 0xf8000 | (uVar3 & 0xff00) << 0xc;
        }
        else {
            uVar4 = (uVar3 & 0xff00) << 0xc | (uVar3 & 0xff) << 0x20 | uVar3 >> 1 & 0xf8000;
        }
        if (((uVar3 & 0x1f0000) == 0x1f0000) && ((uVar3 & 0xe00000) == 0xe00000)) {
            uVar3 = uVar3 & 0xff00ffff;
code_r0x00012dbf:
            *arg2 = uVar3;
        }
        else {
            if (((uVar3 & 0xe00000) == 0xe00000) ||
               (((uVar3 & 0xe00000) == 0 &&
                ((cVar1 = *((uVar4 + 0xe >> 4 & 0x10000000 | uVar4 + 0xe & 0xffffffff) + iVar5), cVar1 == -1 ||
                 (-1 < cVar1)))))) {
                uVar2 = 0x1f;
                if (arg1 != 2) {
                    uVar2 = 0;
                }
                if ((uVar3 >> 0x10 & 0x1f) == uVar2) {
                    *arg2 = *arg2 | 0xff0000;
                    return 0;
                }
                uVar3 = (uVar3 & 0xffff0000) + 0x10000 & 0x1f0000 | *arg2 & 0xff00ffff;
                goto code_r0x00012dbf;
            }
            *arg2 = ((uVar3 & 0xffe00000) + 0x200000 ^ uVar3) & 0xe00000 ^ uVar3;
        }
        uVar4 = fcn.00012acc(*arg2);
        if (*((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + iVar5) != -1) {
            cVar1 = fcn.0001249c(uVar4);
            iVar5 = 0xc0000000;
            if (cVar1 != '\0') {
                *(arg2 + 3) = cVar1;
                return 1;
            }
        }
    } while( true );
}


/* fcn.000141a0 @ 0x141a0 */

void fcn.000141a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t arg1_00;
    uchar uVar2;
    uint32_t *arg2_00;
    uchar uVar3;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uint32_t auStackX_20 [2];
    int64_t var_40h;
    
    uVar3 = arg3;
    uVar2 = arg2;
    auStackX_10[0] = uVar2;
    auStackX_18[0] = uVar3;
    arg1_00 = fcn.00012b28(arg1);
    cVar1 = fcn.00013fa4(arg1 & 0xffffffff);
    if (cVar1 == '\0') {
        cVar1 = fcn.00013fa4(arg1 & 0xffffffffU);
        if ((cVar1 == '\0') && (arg1_00 == 2)) {
            uVar3 = 0;
            uVar2 = 0;
        }
    }
    else {
        arg3 = auStackX_18;
        fcn.00014008(arg1 & 0xffffffffU,auStackX_10,arg3);
        uVar3 = auStackX_18[0];
        uVar2 = auStackX_10[0];
    }
    cVar1 = fcn.00012b90(arg1 & 0xffffffff,auStackX_20);
    if (cVar1 != '\0') {
        while( true ) {
            arg2_00 = auStackX_20;
            cVar1 = fcn.00012cb4(arg1_00,arg2_00);
            if (cVar1 == '\0') break;
            arg3 = CONCAT71(arg3 >> 8,uVar3);
            fcn.000141a0(auStackX_20[0],CONCAT71(arg2_00 >> 8,uVar2),arg3);
        }
    }
    return;
}


/* fcn.00013440 @ 0x13440 */

void fcn.00013440(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int *piVar3;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *piVar3;
    while (iVar1 != 0) {
        iVar2 = fcn.00012acc(piVar3[(*piVar3 - 1) + 1]);
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3;
        *((iVar2 + 0x18U >> 4 & 0x10000000 | iVar2 + 0x18U & 0xffffffff) + 0xc0000000) = 0;
    }
    return;
}


/* fcn.00011ea0 @ 0x11ea0 */

void fcn.00011ea0(void)

{
    char cVar1;
    uint32_t *arg2;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t arg1;
    uint32_t *arg3;
    ulong in_R9;
    unkbyte7 Var4;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    
    Var4 = in_R9 >> 8;
    cVar1 = fcn.00012780();
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar2 = 1, cVar1 != '\x02')) {
        uVar2 = 3;
    }
    arg1 = 0;
    do {
        arg3 = auStackX_8;
        arg2 = auStackX_10;
        fcn.000126b8(arg1,arg2,arg3);
        if (*((((auStackX_10[0] & 0x1f) << 3 | auStackX_8[0] & 7) << 0xc) + 0xc0000000) != -1) {
            *0x16fe0 = 0;
            *0x16fec = 0;
            fcn.0001461c(0x1682c,arg2,CONCAT71(arg3 >> 8,auStackX_10[0]),CONCAT71(Var4,auStackX_8[0]));
        }
        uVar3 = arg1 + 1;
        arg1 = uVar3;
    } while (uVar3 < uVar2);
    return;
}


/* fcn.0001275c @ 0x1275c */

void fcn.0001275c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0x16820) {
        section..text(0x16820,arg1,arg2);
    }
    return;
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 20480 named .text
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


/* fcn.00011140 @ 0x11140 */

uint64_t fcn.00011140(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012acc @ 0x12acc */

uint64_t fcn.00012acc(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar1 = arg1;
    uVar2 = arg1 >> 8 & 0xe000;
    if (arg1 == '\0') {
        uVar3 = (uVar2 | uVar1 & 0x1f0000) >> 1 | (uVar1 & 0xff00) << 0xc;
    }
    else {
        uVar3 = (uVar2 | uVar1 & 0x1f0000) >> 1 | (uVar1 & 0xff00) << 0xc | (arg1 & 0xffU) << 0x20;
    }
    return uVar3;
}


/* fcn.00012568 @ 0x12568 */

uint64_t fcn.00012568(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int16_t iVar4;
    
    iVar4 = 0;
    uVar3 = 0x100;
    while( true ) {
        if (iVar4 == -1) {
            return 0;
        }
        uVar2 = uVar3 + arg1;
        iVar4 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000);
        if (iVar4 == arg2) break;
        uVar1 = *((uVar2 + 2 >> 4 & 0x10000000 | uVar2 + 2 & 0xffffffff) + 0xc0000000) >> 4 & 0xffc;
        uVar3 = uVar1;
        if (uVar1 == 0) {
            return 0;
        }
    }
    return uVar3;
}


/* fcn.00012e2c @ 0x12e2c */

ushort fcn.00012e2c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint in_register_00000014;
    
    uVar2 = *CONCAT44(in_register_00000014,arg2);
    uVar5 = 0;
    if (uVar2 != 0) {
        iVar3 = *(CONCAT44(in_register_00000014,arg2) + 2);
        do {
            if (((((*(iVar3 + 8 + uVar5 * 0x18) & 2) != 0) &&
                 (*(iVar3 + uVar5 * 0x18) == *((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000))) &&
                (*(iVar3 + 2 + uVar5 * 0x18) == *((arg1 + 2U >> 4 & 0x10000000 | arg1 + 2U & 0xffffffff) + 0xc0000000)))
               && ((cVar1 = *(iVar3 + 4 + uVar5 * 0x18),
                   cVar1 == *((arg1 + 8U >> 4 & 0x10000000 | arg1 + 8U & 0xffffffff) + 0xc0000000) || (cVar1 == -1)))) {
                return *(iVar3 + 10 + uVar5 * 0x18);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < uVar2);
    }
    return 0;
}


/* fcn.00012ee0 @ 0x12ee0 */

uint64_t fcn.00012ee0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    
    uVar5 = arg1 + 8U & 0xffffffff;
    uVar6 = arg1 + 8U >> 4 & 0x10000000 | uVar5;
    uVar8 = 0;
    if (*arg2 != 0) {
        iVar4 = *(arg2 + 8);
        do {
            uVar5 = uVar8;
            if ((((*(iVar4 + 8 + uVar8 * 0x18) & 2) != 0) &&
                (*(iVar4 + uVar8 * 0x18) == *((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000))) &&
               (*(iVar4 + 2 + uVar8 * 0x18) == *((arg1 + 2U >> 4 & 0x10000000 | arg1 + 2U & 0xffffffff) + 0xc0000000)))
            {
                cVar1 = *(iVar4 + 4 + uVar8 * 0x18);
                uVar5 = CONCAT71(uVar8 >> 8,cVar1);
                if ((cVar1 == *(uVar6 + 0xc0000000)) || (cVar1 == -1)) {
                    uVar2 = *(iVar4 + 0xc + uVar8 * 0x18);
                    uVar7 = uVar2 * 2 | 0xfffffffb;
                    uVar3 = *(iVar4 + 0xf + uVar8 * 0x18);
                    *arg3 = *arg3 & (uVar2 << 3 | 0xfffffff7) & (uVar2 >> 3 | 0xfffffffe) & (uVar2 >> 1 | 0xfffffffd) &
                                    uVar7;
                    if (uVar3 == 0) {
                        return CONCAT31(uVar7 >> 8,uVar3);
                    }
                    uVar7 = *(iVar4 + 0xd + uVar8 * 0x18) << 4 | *arg3 & 0xfff0000f;
                    *arg3 = ((uVar3 & 0x3f) << 2 | *(iVar4 + 0xe + uVar8 * 0x18) & 3) << 0xc | uVar7;
                    return uVar7;
                }
            }
            uVar7 = uVar8 + 1;
            uVar8 = uVar7;
        } while (uVar7 < *arg2);
    }
    return uVar5;
}


/* fcn.00014828 @ 0x14828 */

void fcn.00014828(void)

{
    if (*0x16121 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x16121 = '\x05';
        }
        else {
            *0x16121 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.000132e0 @ 0x132e0 */

void fcn.000132e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    int16_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    
    uVar4 = fcn.00012acc(arg1);
    iVar2 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000);
    iVar3 = *((uVar4 + 2 >> 4 & 0x10000000 | uVar4 + 2 & 0xffffffff) + 0xc0000000);
    cVar1 = *((uVar4 + 8 >> 4 & 0x10000000 | uVar4 + 8 & 0xffffffff) + 0xc0000000);
    if (*arg3 != 0) {
        uVar4 = *arg3;
        pcVar5 = *(arg3 + 8) + 4;
        do {
            if (((((pcVar5[4] & 1U) != 0) && (*(pcVar5 + -4) == iVar2)) && (*(pcVar5 + -2) == iVar3)) &&
               ((*pcVar5 == cVar1 || (*pcVar5 == -1)))) {
                if ((*arg2 & 1) != 0) {
                    *arg2 = *arg2 ^ (pcVar5[3] ^ *arg2) & 1;
                }
                if ((*arg2 & 2) != 0) {
                    *arg2 = *arg2 ^ (pcVar5[3] ^ *arg2) & 2;
                }
            }
            pcVar5 = pcVar5 + 0x18;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return;
}


/* fcn.00013288 @ 0x13288 */

uint64_t fcn.00013288(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    
    uVar1 = arg1;
    if ((uVar1 & 0x1fe0) != 0x1fe0) {
        cVar2 = arg2;
        if (cVar2 < '\x01') {
            if (-cVar2 < (arg1 >> 5 & 0xff)) {
                arg1 = uVar1 ^ (cVar2 * 0x20 + uVar1 ^ uVar1) & 0x1fe0;
            }
            else {
                arg1 = uVar1 & 0xffffe01f;
            }
        }
        else {
            arg1 = uVar1 ^ (cVar2 * 0x20 + uVar1 ^ uVar1) & 0x1fe0;
        }
    }
    return arg1 & 0xffffffff;
}


/* fcn.0001367c @ 0x1367c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h

uint64_t fcn.0001367c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    uint32_t arg1_00;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t arg1_01;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint8_t uStackX_10;
    uint32_t auStackX_20 [2];
    int64_t var_40h;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t var_bp_18h;
    int32_t var_14h;
    int32_t var_bp_10h;
    int32_t var_ch;
    
    uStackX_10 = arg2;
    arg1_01 = arg1;
    uVar10 = arg2 & 0xff;
    arg1_00 = fcn.00012b28(arg1_01);
    if (arg1_00 == 2) {
        uStackX_10 = uStackX_10 + 1;
        uVar10 = uStackX_10;
    }
    uVar13 = 0;
    iVar8 = fcn.00012acc(arg1 & 0xffffffff);
    uVar11 = (arg1_01 >> 0x18) + 0xc + iVar8;
    uVar9 = iVar8 + 4 + (arg1_01 >> 0x18);
    uVar6 = *((uVar11 >> 4 & 0x10000000 | uVar11 & 0xffffffff) + 0xc0000000);
    uVar14 = *((uVar9 >> 4 & 0x10000000 | uVar9 & 0xffffffff) + 0xc0000000);
    uVar9 = uVar14;
    if ((uVar14 >> 0xf & 1) != 0) {
        uVar13 = uVar6 >> 10 & 1;
    }
    uVar14 = uVar6 >> 0xf & 7;
    uVar13 = (uVar6 & 0x7000) * 2 | uVar6 >> 10 & 2 | uVar13;
    puVar12 = uVar13;
    if (uVar14 < 7) {
        uVar6 = 1 << uVar14;
    }
    else {
        uVar6 = 0xff;
    }
    uVar14 = 0xff;
    uVar13 = (uVar6 & 0xff) << 0x10 | uVar13;
    iVar7 = fcn.00012b28(arg1_01);
    if (iVar7 == 1) {
        uVar6 = uVar9 >> 9 & 7;
        if (uVar6 < 7) {
            uVar14 = 1 << uVar6;
        }
        uStack_34 = (uVar14 & 0xff) << 5 | uVar9 >> 4 & 0x1c | uVar13;
    }
    else {
        uStack_34 = uVar13 | 0x1ffc;
    }
    if (arg3 != 0) {
        puVar12 = &uStack_34;
        fcn.000132e0(arg1 & 0xffffffff,puVar12,arg3);
    }
    uVar6 = uStack_34;
    if (arg1_00 == 1) {
        uVar10 = fcn.00013288(uStack_34,CONCAT71(puVar12 >> 8,-uVar10));
    }
    else {
        cVar5 = fcn.00012b90(arg1 & 0xffffffff,auStackX_20);
        if (cVar5 != '\0') {
            puVar12 = auStackX_20;
            cVar5 = fcn.00012cb4(arg1_00,puVar12);
            if (cVar5 != '\0') {
                uVar14 = arg1_01;
                do {
                    uVar13 = fcn.0001367c(auStackX_20[0],CONCAT71(puVar12 >> 8,uVar10),arg3);
                    if (arg1_00 == 3) {
                        uStack_34 = uVar13 >> 5;
                        uStack_2c = uVar13 >> 2;
                        uStack_30 = uVar6 >> 2;
                        uVar4 = uVar13;
                        if (uVar13 >> 0x10 < uVar6 >> 0x10) {
                            uVar4 = uVar6;
                        }
                        uVar1 = uVar13 >> 0xd;
                        if ((uVar13 >> 0xd & 7) < (uVar6 >> 0xd & 7)) {
                            uVar1 = uVar6 >> 0xd;
                        }
                        uVar2 = uStack_34;
                        if (uVar6 >> 5 < uStack_34) {
                            uVar2 = uVar6 >> 5;
                        }
                        uVar10 = uStackX_10;
                        uVar3 = uStack_2c;
                        if ((uStack_30 & 7) < (uStack_2c & 7)) {
                            uVar3 = uStack_30;
                        }
                        uVar6 = ((((uVar4 >> 0x10 & 0xff) << 3 | uVar1 & 7) << 8 | uVar2 & 0xff) << 3 | uVar3 & 7) << 2
                                | uVar13 & uVar6 & 3;
                    }
                    else {
                        uVar4 = uVar13 >> 5;
                        if (uVar6 >> 5 < uVar13 >> 5) {
                            uVar4 = uVar6 >> 5;
                        }
                        uVar1 = uVar13 >> 2;
                        if ((uVar6 >> 2 & 7) < (uVar13 >> 2 & 7)) {
                            uVar1 = uVar6 >> 2;
                        }
                        uVar6 = ((uVar4 & 0xff) << 3 | uVar1 & 7) << 2 | uVar6 & 0xffe003;
                    }
                    puVar12 = auStackX_20;
                    uVar6 = uVar6 | uVar14 & 0xff000000;
                    cVar5 = fcn.00012cb4(arg1_00,puVar12);
                    uVar14 = uVar6;
                } while (cVar5 != '\0');
            }
            if (arg1_00 == 3) {
                while( true ) {
                    fcn.000133b0(arg1_01,uVar6);
                    cVar5 = fcn.00012cb4(3,auStackX_20);
                    if (cVar5 == '\0') break;
                    arg1_01 = auStackX_20[0];
                }
                if ((((uVar6 & 2) == 0) || ((uVar6 & 0x1fe0) < (uVar6 >> 0xb & 0x1fe0))) && ((uVar6 & 0x1fe0) != 0x1fe0)
                   ) {
                    uVar6 = uVar6 ^ ((uVar6 & 0xffffffe0) + 0x20 ^ uVar6) & 0x1fe0;
                }
            }
        }
        uVar10 = uVar6;
    }
    return uVar10;
}


/* fcn.000133b0 @ 0x133b0 */

void fcn.000133b0(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    uVar3 = 0;
    uVar2 = arg1 & 0xffffffff;
    if (((arg2 & 1) != 0) && ((arg2 >> 0xb & 0x1c) <= (arg2 & 0x1c))) {
        uVar3 = 1;
    }
    if (((arg2 & 2) != 0) && ((arg2 >> 0xb & 0x1fe0) <= (arg2 & 0x1fe0))) {
        uVar3 = uVar3 | 2;
    }
    iVar1 = fcn.00012acc(uVar2);
    uVar2 = (uVar2 >> 0x18) + iVar1 + 0x10;
    uVar2 = uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff;
    *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfffc | uVar3;
    return;
}


/* fcn.00013990 @ 0x13990 */

void fcn.00013990(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint32_t auStackX_18 [2];
    uint32_t uStackX_20;
    
    uVar6 = arg1;
    uVar3 = arg1 & 0xffffffff;
    arg1_00 = fcn.00012acc(arg1);
    cVar1 = fcn.00012b90(uVar3 & 0xffffffff,auStackX_18);
    if (cVar1 != '\0') {
        uStackX_20 = fcn.00012b28(uVar6);
        cVar1 = fcn.00012cb4(uStackX_20,auStackX_18);
        if (cVar1 != '\0') {
            do {
                uVar2 = fcn.00013990(auStackX_18[0],arg2);
                if ((uStackX_20 == 3) && ((auStackX_18[0] & 0xe00000) == 0)) {
                    uVar3 = fcn.00013008(arg1_00,arg2);
                    if (((uVar3 & 8) == 0) || ((uVar2 & 8) == 0)) {
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = 8;
                    }
                    uVar8 = uVar3 & uVar2;
                    uVar7 = uVar3 >> 4 & 0xfffffff;
                    uVar5 = uVar2 >> 4;
                    if (uVar2 >> 4 < uVar7) {
                        uVar5 = uVar7;
                    }
                    uVar6 = uVar6 & 0xfffff000 | uVar4 | -((uVar8 & 4) != 0) & 4 | -((uVar8 & 2) != 0) & 2 |
                            (uVar5 & 0xff) << 4 | (uVar8 & 1) != 0;
                    uVar4 = uVar3 >> 0xc & 3;
                    if (uVar4 < 3) {
                        uVar4 = *(uVar4 + 0x165c0) * (uVar3 >> 0xe & 0x3f);
                    }
                    else {
                        uVar4 = 0;
                    }
                    uVar5 = uVar2 >> 0xc & 3;
                    if (uVar5 < 3) {
                        uVar5 = *(uVar5 + 0x165c0) * (uVar2 >> 0xe & 0x3f);
                    }
                    else {
                        uVar5 = 0;
                    }
                    if (uVar5 < uVar4) {
                        uVar2 = uVar3;
                    }
                    uVar6 = uVar6 ^ (uVar6 ^ uVar2) & 0xff000;
                    fcn.000130d8(arg1 & 0xffffffff,uVar6,arg2);
                    fcn.000130d8(auStackX_18[0],uVar6,arg2);
                }
                cVar1 = fcn.00012cb4(uStackX_20,auStackX_18);
            } while (cVar1 != '\0');
        }
    }
    fcn.00013008(arg1_00,arg2);
    return;
}


/* fcn.00013008 @ 0x13008 */

uint32_t fcn.00013008(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint32_t auStackX_18 [4];
    
    auStackX_18[0] = 0;
    uVar2 = fcn.00012e2c(arg1,arg2);
    if ((uVar2 == 0) && (uVar2 = fcn.00012568(arg1,0x1e), uVar2 == 0)) {
        return 0;
    }
    uVar3 = arg1 + 4 + uVar2;
    uVar1 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
    if ((uVar1 & 0x10) != 0) {
        auStackX_18[0] =
             (((uVar1 >> 1 & 0x7c0000 | uVar1 & 0x3ff00) >> 1 | uVar1 & 8) >> 2 | uVar1 & 4) >> 1 |
             ((uVar1 & 1) << 2 | uVar1 & 2) * 2;
    }
    fcn.00012ee0(arg1,arg2,auStackX_18);
    return auStackX_18[0];
}


/* fcn.000130d8 @ 0x130d8 */

void fcn.000130d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t arg1_00;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    
    uVar8 = arg3;
    uVar6 = arg2;
    arg1_00 = fcn.00012acc(arg1);
    uVar2 = fcn.00012e2c(arg1_00,uVar8);
    if ((uVar2 == 0) && (uVar2 = fcn.00012568(arg1_00,0x1e), uVar2 == 0)) {
        return;
    }
    uVar5 = uVar2;
    uVar8 = (uVar6 >> 2 & 2 | uVar6 & 4) >> 1 | ((uVar6 & 1) << 2 | uVar6 & 2) * 2;
    iVar3 = fcn.00012b28(arg1);
    if (iVar3 == 3) {
        uVar8 = uVar8 | (uVar6 & 0xff0) << 4;
    }
    uVar4 = uVar6 >> 0xc & 3;
    if (uVar4 < 3) {
        iVar3 = *(uVar4 + 0x165c0) * (uVar6 >> 0xe & 0x3f);
    }
    else {
        iVar3 = 0;
    }
    uVar8 = ((iVar3 + 10) * 0x10 + (uVar6 & 0xff0)) * 0x1000 | uVar8;
    uVar4 = uVar8 | 0x40000000;
    if (((*0xc00f8002 & 0xffe0) != 0x7a00) && (cVar1 = fcn.00014828(), cVar1 == '\x04')) {
        if (*0x16120 == -1) {
            *0x16120 = *0xc00f8008;
        }
        if (*0x16120 == '\0') {
            uVar4 = uVar8 | 0x409d0000;
        }
    }
    uVar7 = arg1_00 + 8 + (uVar5 & 0xffff);
    uVar5 = arg1_00 + 0xc + (uVar5 & 0xffff);
    *((uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff) + 0xc0000000) = 0;
    *((uVar5 >> 4 & 0x10000000 | uVar5 & 0xffffffff) + 0xc0000000) = (uVar6 >> 1 & 0x1800 | uVar6 & 0xfc000) >> 0xb;
    *((uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff) + 0xc0000000) = uVar4 | 0x10;
    return;
}


/* fcn.00013c84 @ 0x13c84 */

uint32_t fcn.00013c84(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t auStackX_10 [2];
    
    cVar1 = fcn.00012b90(arg1,auStackX_10);
    if (cVar1 != '\0') {
        uVar5 = 1;
        arg1_00 = fcn.00012b28(arg1);
        cVar1 = fcn.00012cb4(arg1_00,auStackX_10);
        if (cVar1 != '\0') {
            do {
                uVar2 = fcn.00013c84(auStackX_10[0]);
                uVar5 = uVar5 & uVar2;
                cVar1 = fcn.00012cb4(arg1_00,auStackX_10);
            } while (cVar1 != '\0');
            if (uVar5 == 0) goto code_r0x00013d38;
        }
        while (cVar1 = fcn.00012cb4(arg1_00,auStackX_10), cVar1 != '\0') {
            iVar3 = fcn.00012acc(auStackX_10[0]);
            uVar4 = (auStackX_10[0] >> 0x18) + 0x10 + iVar3;
            uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
            *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 0x100;
        }
    }
code_r0x00013d38:
    iVar3 = fcn.00012acc(arg1 & 0xffffffff);
    uVar4 = (arg1 >> 0x18) + 0xc + iVar3;
    return *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) >> 0x12 & 1;
}


/* fcn.000125fc @ 0x125fc */

void fcn.000125fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    int iVar4;
    
    iVar3 = 1000;
    iVar4 = 1000;
    uVar2 = arg1 + 0x12 + (arg2 & 0xffU);
    do {
        iVar4 = iVar4 + -1;
        if ((*((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) & 0x800) == 0) break;
    } while (iVar4 != 0);
    uVar1 = arg1 + 0x10 + (arg2 & 0xffU);
    uVar1 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
    *(uVar1 + 0xc0000000) = *(uVar1 + 0xc0000000) | 0x20;
    if (arg3 != '\0') {
        do {
            iVar3 = iVar3 + -1;
            if ((*((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) & 0x800) == 0) {
                return;
            }
        } while (iVar3 != 0);
    }
    return;
}


/* fcn.00014388 @ 0x14388 */

uint64_t fcn.00014388(uint32_t arg1)

{
    uint64_t in_RAX;
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg1;
    if (arg1 < 0x1000000) {
        uVar2 = in_RAX & 0xffffffffffffff00;
    }
    else {
        iVar1 = fcn.00012acc(uVar2);
        uVar2 = (uVar2 >> 0x18) + iVar1 + 0x24;
        uVar2 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) >> 0xb & 1;
    }
    return uVar2;
}


/* fcn.00013ee0 @ 0x13ee0 */

void fcn.00013ee0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint32_t arg1_01;
    uint64_t uVar4;
    uint32_t auStackX_18 [2];
    
    arg1_01 = arg1;
    uVar2 = arg1_01;
    arg1_00 = fcn.00012acc(arg1);
    cVar1 = fcn.00014388(uVar2);
    if (cVar1 != '\0') {
        if (0xffffff < uVar2) {
            iVar3 = fcn.00012acc(arg1 & 0xffffffff);
            uVar4 = (arg1_01 >> 0x18) + 0x28 + iVar3;
            uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
            *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 0x400;
        }
        cVar1 = fcn.00012b90(arg1 & 0xffffffff,auStackX_18);
        if (cVar1 != '\0') {
            uVar2 = fcn.00012b28(arg1_01);
            while( true ) {
                cVar1 = fcn.00012cb4(uVar2,auStackX_18);
                if (cVar1 == '\0') break;
                fcn.00013ee0(auStackX_18[0],arg2 & 0xffffffff);
            }
        }
        fcn.00012bfc(arg1_00,arg2 & 0xffffffff);
    }
    return;
}


/* fcn.00012bfc @ 0x12bfc */

void fcn.00012bfc(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar1 = fcn.00012568(arg1,0x18);
    if (uVar1 != 0) {
        uVar2 = arg1 + 4 + uVar1;
        uVar3 = arg1 + 6 + uVar1;
        *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) = (arg2 >> 10 & 7) << 10 | arg2 & 0x3ff;
        *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) =
             ((arg2 >> 0x10) >> 7 & 7) << 10 | arg2 >> 0xd & 0x3ff;
    }
    return;
}


/* fcn.00014008 @ 0x14008 */

void fcn.00014008(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    
    if (arg1 == '\0') {
        uVar3 = arg1 >> 8 & 0xff;
    }
    else {
        uVar3 = (arg1 & 0xffU) << 0xc | arg1 >> 8 & 0xff;
    }
    uVar1 = fcn.00012568(((uVar3 << 5 | arg1 >> 0x10 & 0x1f) << 3 | arg1 >> 0x15 & 7) << 0xc,0x1f);
    uVar8 = 0;
    if (uVar1 != 0) {
        iVar2 = fcn.00012acc(arg1 & 0xffffffff);
        uVar3 = uVar1 + iVar2 + 8;
        uVar8 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
    }
    uVar3 = 0;
    uVar6 = uVar8;
    if (uVar1 != 0) {
        iVar2 = fcn.00012acc(arg1 & 0xffffffff);
        uVar3 = uVar1 + iVar2 + 4;
        uVar3 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
    }
    if ((*arg3 == '\0') && ((uVar3 & 4) != 0)) {
        uVar6 = uVar6 | 2;
        *arg2 = uVar3 >> 8;
        *arg3 = 1;
    }
    uVar7 = uVar6;
    if ((*arg3 == '\x01') && (uVar7 = uVar6 | 1, (uVar3 & 1) != 0)) {
        uVar7 = *arg2 << 8 | uVar6 & 0xffff00ff | 1;
    }
    if ((uVar8 != uVar7) && (uVar1 != 0)) {
        iVar2 = fcn.00012acc(arg1 & 0xffffffff);
        uVar4 = uVar1 + iVar2 + 8;
        *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) = uVar7;
    }
    if ((((uVar3 & 0xff00) == 0) && ((uVar3 & 1) != 0)) || (*arg2 == '\0')) {
        *arg2 = 0;
    }
    else {
        uVar5 = uVar3 >> 8;
        if (uVar5 < *arg2) {
            uVar5 = *arg2;
        }
        *arg2 = uVar5;
    }
    return;
}


/* fcn.000143d8 @ 0x143d8 */

uint32_t fcn.000143d8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    char cVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    int64_t var_38h;
    int64_t var_40h;
    
    uVar8 = fcn.00012acc(arg1);
    uVar7 = 0;
    uVar10 = 0;
    if (*arg2 != 0) {
        iVar3 = *(arg2 + 8);
        do {
            if (((((*(iVar3 + 8 + uVar10 * 0x18) & 4) != 0) &&
                 (*(iVar3 + uVar10 * 0x18) == *((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000))) &&
                ((*(iVar3 + 2 + uVar10 * 0x18) == *((uVar8 + 2 >> 4 & 0x10000000 | uVar8 + 2 & 0xffffffff) + 0xc0000000)
                 || (*(iVar3 + 2 + uVar10 * 0x18) == -1)))) &&
               ((uVar1 = *(iVar3 + 4 + uVar10 * 0x18),
                uVar1 == *((uVar8 + 8 >> 4 & 0x10000000 | uVar8 + 8 & 0xffffffff) + 0xc0000000) || (uVar1 == 0xff)))) {
                uVar2 = *(iVar3 + 0x10 + uVar10 * 0x18);
                if (uVar2 < 0) {
                    uVar7 = uVar2 & 0x1fff | 0x2000;
                }
                uVar2 = *(iVar3 + 0x12 + uVar10 * 0x18);
                if (uVar2 < 0) {
                    uVar7 = uVar7 | (uVar2 & 0x1fff | 0x2000) << 0xe;
                }
                uVar7 = uVar7 | (*(iVar3 + 0x14 + uVar10 * 0x18) & 1) << 0x1c;
                break;
            }
            uVar9 = uVar10 + 1;
            uVar10 = uVar9;
        } while (uVar9 < *arg2);
    }
    cVar5 = fcn.00012b90(arg1 & 0xffffffff,auStackX_20);
    if (cVar5 != '\0') {
        uVar9 = fcn.00012b28(arg1);
        cVar5 = fcn.00012cb4(uVar9,auStackX_20);
        while (cVar5 != '\0') {
            uVar6 = fcn.000143d8(auStackX_20[0],arg2);
            fcn.00011230(auStackX_18,4);
            uVar4 = uVar7;
            if (((uVar6 & 0x2000) != 0) &&
               ((*((uVar6 >> 10 & 7) * 4 + 0x165c8) * (uVar6 & 0x3ff) <=
                 *((uVar7 >> 10 & 7) * 4 + 0x165c8) * (uVar7 & 0x3ff) || ((uVar7 & 0x2000) == 0)))) {
                uVar4 = uVar6;
            }
            auStackX_18[0] = auStackX_18[0] ^ (auStackX_18[0] ^ uVar4) & 0x3fff;
            uVar4 = uVar7;
            if (((uVar6 & 0x8000000) != 0) &&
               ((*((uVar6 >> 0x18 & 7) * 4 + 0x165c8) * (uVar6 >> 0xe & 0x3ff) <=
                 *((uVar7 >> 0x18 & 7) * 4 + 0x165c8) * (uVar7 >> 0xe & 0x3ff) || ((uVar7 & 0x8000000) == 0)))) {
                uVar4 = uVar6;
            }
            uVar6 = uVar6 | uVar7;
            uVar7 = auStackX_18[0] ^ (auStackX_18[0] ^ uVar4) & 0xfffc000;
            if ((uVar6 >> 0x1c & 1) != 0) {
                uVar7 = uVar7 | 0x10000000;
            }
            auStackX_18[0] = uVar7;
            cVar5 = fcn.00012cb4(uVar9,auStackX_20);
        }
    }
    return uVar7;
}


/* fcn.00011230 @ 0x11230 */

int64_t fcn.00011230(int64_t arg1,int64_t arg2)

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


/* fcn.0001489c @ 0x1489c */

void fcn.0001489c(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    bool bVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint in_R9;
    uint32_t uVar5;
    uint32_t uVar6;
    
    bVar2 = false;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    if ((arg2 == 1) || (arg2 == 6)) {
        bVar2 = true;
    }
    uVar3 = arg1 + 0x404;
    if (*((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) != 0) {
        *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = 0;
    }
    if ((*(CONCAT44(in_R9,arg4) + 0xd) != '\0') || ((*arg3 & 0x10000000) != 0)) {
        uVar6 = 8;
    }
    if (*(CONCAT44(in_R9,arg4) + 0xc) == '\x01') {
        uVar6 = uVar6 | 4;
        uVar4 = 0;
        if (bVar2) {
            uVar4 = 0x10000;
        }
    }
    cVar1 = *(CONCAT44(in_R9,arg4) + 4);
    if (cVar1 == '\x01') {
        uVar6 = uVar6 | 1;
        uVar5 = (*(CONCAT44(in_R9,arg4) + 5) | 0x20) << 10 | *(CONCAT44(in_R9,arg4) + 6);
    }
    else if ((cVar1 == '\x02') && ((*arg3 & 0x2000) != 0)) {
        uVar6 = uVar6 | 1;
        uVar5 = *arg3 & 0x1fff | 0x8000;
    }
    cVar1 = *(CONCAT44(in_R9,arg4) + 8);
    if (cVar1 == '\x01') {
        uVar6 = uVar6 | 2;
        uVar5 = uVar5 | (*(CONCAT44(in_R9,arg4) + 9) << 10 | *(CONCAT44(in_R9,arg4) + 10)) << 0x10 | 0x80000000;
    }
    else if ((cVar1 == '\x02') && ((*arg3 >> 0x1b & 1) != 0)) {
        uVar6 = uVar6 | 2;
        uVar5 = uVar5 | (*arg3 & 0x7ffc000 | 0xe0000000) << 2;
    }
    *((arg1 + 0x400U >> 4 & 0x10000000 | arg1 + 0x400U & 0xffffffff) + 0xc0000000) = uVar5;
    *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = uVar6;
    if (bVar2) {
        uVar3 = arg1 + 0xc8cU >> 4 & 0x10000000 | arg1 + 0xc8cU & 0xffffffff;
        *(uVar3 + 0xc0000000) = *(uVar3 + 0xc0000000) | uVar4;
    }
    return;
}


/* fcn.00014aec @ 0x14aec */

void fcn.00014aec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar4 = arg1 + 0x420;
    uVar1 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000);
    uVar2 = fcn.00012568(arg1,0x1e);
    if (uVar2 == 0) {
        uVar5 = 0;
    }
    else {
        uVar3 = arg1 + 8 + uVar2;
        uVar5 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) & 0xf;
    }
    if (((((uVar1 >> 0x1e & 1) == 0) || (arg2 == '\0')) || (uVar5 != 0)) || (arg3 == '\0')) {
        uVar3 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
        *(uVar3 + 0xc0000000) = *(uVar3 + 0xc0000000) & 0xfffdffff;
        if (uVar5 == 0) {
            return;
        }
    }
    else {
        uVar3 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
        *(uVar3 + 0xc0000000) = *(uVar3 + 0xc0000000) | 0x20000;
    }
    uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
    *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 1;
    return;
}


/* fcn.000153c4 @ 0x153c4 */

uint fcn.000153c4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg4;
    uint uStackX_18;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x78) == 0) {
        uStackX_18 = *(*(iVar1 + 0x7c) << 0x10 | (arg2 & 0xf0000) << 8 | *(*(iVar1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(iVar1 + 0x78) == 1) {
        if (*(iVar1 + 0x80) == 0) {
            arg4 = 0;
        }
        else if (*(iVar1 + 0x80) == 1) {
            arg4 = 4;
        }
        else {
            arg4 = 6;
        }
        iVar1 = fcn.00014da8(**(iVar1 + 0x88),CONCAT71(arg2 >> 8,*(iVar1 + 0x7c)),arg2 & 0xffffffff,arg4);
        if (iVar1 < 0) {
            uStackX_18 = 0xffffffff;
        }
    }
    else {
        uStackX_18 = 0xffffffff;
    }
    return uStackX_18;
}


/* fcn.000155f0 @ 0x155f0 */

uint32_t fcn.000155f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.000153c4(arg1,arg2);
    uVar1 = uVar1 & arg3 | arg4;
    if (*(arg1 + 0x78) == 0) {
        uVar2 = (arg2 & 0xf0000) << 8;
        *(*(arg1 + 0x7c) << 0x10 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU | uVar2) = uVar1;
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU | uVar2);
    }
    else if (*(arg1 + 0x78) == 1) {
        if (*(arg1 + 0x80) == 0) {
            iVar3 = 1;
        }
        else if (*(arg1 + 0x80) == 1) {
            iVar3 = 5;
        }
        else {
            iVar3 = 7;
        }
        iVar3 = fcn.00014da8(**(arg1 + 0x88),CONCAT31(arg2 >> 8,*(arg1 + 0x7c)),arg2 & 0xffffffff,iVar3);
        if (iVar3 < 0) {
            uVar1 = 0xffffffff;
        }
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.00015030 @ 0x15030 */

uint32_t fcn.00015030(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.000153c4(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.000151f0 @ 0x151f0 */

uint32_t fcn.000151f0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.000153c4(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xffff;
    }
    return uVar1;
}


/* fcn.00014da8 @ 0x14da8 */

ulong fcn.00014da8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int iVar7;
    uint8_t in_stack_00000028;
    uint16_t in_stack_00000030;
    uint *in_stack_00000038;
    uint8_t *in_stack_00000040;
    uint32_t in_stack_00000048;
    
    if (((in_stack_00000048 < 0x13) && ((0x7ff0cU >> (in_stack_00000048 & 0x1f) & 1) != 0)) ||
       (0x13 < in_stack_00000048)) {
        uVar3 = 0x8000000000000002;
    }
    else if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar1 = arg1 + 0xd8;
        iVar7 = 0xfffffff;
        iVar5 = 0xfffffff;
        do {
            if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
            iVar5 = iVar5 + -1;
        } while (0 < iVar5);
        if (iVar5 != 0) {
            *in_stack_00000040 = 4;
            *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) = arg2 << 0x18 | arg3 & 0xffff;
            uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
            *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
            *(uVar6 + 0xc0000000) = (arg4 * 2 | in_stack_00000028) << 7 | *(uVar6 + 0xc0000000) & 0x7f;
            *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) =
                 in_stack_00000030 & 0xff | 0xf000;
            iVar5 = arg4;
            if (((iVar5 == 1) || (iVar5 == 5)) || ((iVar5 == 7 || (iVar5 == 0x13)))) {
                *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000038;
            }
            else {
                *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
            }
            uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
            *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
            do {
                uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                if ((uVar2 & 1) == 0) break;
                iVar7 = iVar7 + -1;
            } while (0 < iVar7);
            if (iVar7 != 0) {
                uVar4 = uVar2 >> 1 & 3;
                *in_stack_00000040 = uVar4;
                if (uVar4 == 0) {
                    if (((arg4 & 0xfffffff9U) == 0) && (iVar5 != 2)) {
                        *in_stack_00000038 =
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
    return uVar3;
}


