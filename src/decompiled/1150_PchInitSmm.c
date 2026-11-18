// decompiled by r2ghidra: 1150_PchInitSmm.pe32
// functions: 79

/* entry0 @ 0x112d4 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.0001134c(arg1,in_RDX);
    *0x16800 = -0x7fffffffffffffff;
    iVar1 = fcn.00011060(0x16700);
    if (iVar1 == 0) {
        iVar1 = fcn.00011758(arg1,in_RDX);
        if ((-1 < iVar1) || (*0x16800 < 0)) {
            *0x16800 = iVar1;
        }
        fcn.00011130(0x16700,-1);
    }
    iVar1 = *0x16800;
    if (*0x16800 < 0) {
        fcn.00012898();
    }
    return iVar1;
}


/* fcn.00011a24 @ 0x11a24 */

void fcn.00011a24(void)

{
    return;
}


/* fcn.0001134c @ 0x1134c */

ulong fcn.0001134c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t *piVar6;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x166d0 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x166c8 = arg2;
    uStackX_8 = arg1;
    (**(*0x166d0 + 0x140))(0x160b0,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x166d8);
    (**(*0x166d0 + 0x140))(0x160e0,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x16810 = fcn.00012868();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x16810);
    *0x16808 = uStackX_8 >> 5;
    fcn.00012934();
    noname_0 = 0x16140;
    iVar3 = fcn.00012964(0x16140);
    if (iVar3 == 0) {
        uVar4 = fcn.00011220();
        fcn.00011210();
        uVar1 = in(0x1808);
        fcn.000111f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.000111e0();
        }
        fcn.000111f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00011210();
        }
        else {
            fcn.00011200();
        }
    }
    (**(*0x166d8 + 0xd0))(0x16060,0);
    uVar4 = 0;
    if (*(*0x166c8 + 0x68) != 0) {
        piVar6 = *(*0x166c8 + 0x70);
        do {
            if ((*0x160c0 == *piVar6) && (*0x160c8 == piVar6[1])) {
                *0x166f0 = (*(*0x166c8 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x166c8 + 0x68));
    }
    *0x166f0 = 0;
    return 0x800000000000000e;
}


/* fcn.00011060 @ 0x11060 */

ulong fcn.00011060(int64_t arg1)

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
    
    fcn.00011a24();
    *(arg1 + 0xf8) = 0;
    if ((*0x165d0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011758 @ 0x11758 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00011758(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int iVar1;
    int aiStackX_8 [2];
    int64_t iStackX_10;
    ushort var_20h;
    int32_t var_24h;
    ushort *puStackX_20;
    int64_t var_30h_2;
    int64_t var_38h;
    ulong uStack_48;
    ulong *puStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h_2;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    iStackX_10 = arg2;
    (**(*0x166d8 + 0xd0))(0x16040,0,0x19e30);
    (**(*0x166d8 + 0xd0))(str.Y_mEK,0,0x19e38);
    (**(*0x166d0 + 0x140))(0x16070,0,&var_28h);
    *0x19e50 = fcn.00012964(0x16100);
    *0x19e50 = *0x19e50 + 0x18;
    iVar1 = 3;
    aiStackX_8[1] = 0;
    *0x19e58 = 0x1800;
    *0x19e40 = 0xfe600000;
    do {
        arg2_00 = 0x114a8;
        aiStackX_8[0] = iVar1;
        (***0x19e38)(*0x19e38,0x114a8,aiStackX_8,&var_20h_2);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    fcn.00011e60(arg1,arg2_00);
    if ((*(*0x19e50 + 0x3a74) & 4) != 0) {
        *0x19e10 = 0;
        *0x19e20 = 0xf8000;
        (**(*0x166d8 + 0xd0))(0x16110,0,0x19e10);
        iStackX_10 = 0;
        (**(*0x19e10 + 0x38))(*0x19e10,0x11ac8,&iStackX_10);
        if ((*0xfd72c00c & 1) == 0) {
            iStackX_10 = 0;
            (**(*0x19e10 + 0x40))(*0x19e10,0x11adc,&iStackX_10);
        }
        else {
            *0x19e18 = 0;
            (**(*0x166d8 + 0xd0))(0x16030,0,0x19e18);
            iStackX_10 = 0;
            (**(*0x19e18 + 0x10))(*0x19e18,0x11adc,&iStackX_10);
        }
    }
    *0x19e28 = 0;
    (**(*0x166d8 + 0xd0))(0x16090,0,0x19e28);
    uStack_48 = 0;
    (**(*0x19e28 + 0x28))(*0x19e28,fcn.00011a24,&uStack_48);
    var_30h = arg1;
    if (*0x166d8 != 0) {
        (**(*0x166d8 + 0xd0))(0x160f0,0,&puStack_40);
        _var_20h = 0xffffffffffffffff;
        (**puStack_40)(puStack_40,0x11a28,&stack0x00000018,&var_18h);
        (**(*0x166d0 + 0x40))(4,2,&puStackX_20);
        if (puStackX_20 != NULL) {
            *puStackX_20 = var_20h;
            (**(*0x166d0 + 0x148))(&var_30h,0x16020,puStackX_20,0);
        }
    }
    *0x16818 = 0xfb000;
    if (((*(*0x19e50 + 0x3a7c) & 4) == 0) || (*0x166c1 = 1, *0xc00fb000 == -1)) {
        *0x166c1 = 0;
    }
    if (*0x19e50 + 0x3ca3 != 0x19e48) {
        section..text(0x19e48,*0x19e50 + 0x3ca3,8);
    }
    return 0;
}


/* fcn.00011130 @ 0x11130 */

void fcn.00011130(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x000111d9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00012898 @ 0x12898 */

void fcn.00012898(void)

{
    char cVar1;
    
    cVar1 = fcn.00012824(*0x16810);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000128be. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x166d8 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000128cd. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x166d0 + 0x48))(*0x16810);
    return;
}


/* fcn.00012824 @ 0x12824 */

uint64_t fcn.00012824(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x16808 != 0) {
        puVar2 = *0x16810 + 8;
        in_RAX = *0x16810;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x16808);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012868 @ 0x12868 */

ulong fcn.00012868(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x166d8 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012934 @ 0x12934 */

int64_t fcn.00012934(void)

{
    if (*0x166e0 == 0) {
        fcn.000128d4(0x16080,0x166e0);
    }
    return *0x166e0;
}


/* fcn.000128d4 @ 0x128d4 */

ulong fcn.000128d4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x166c8;
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


/* fcn.00012964 @ 0x12964 */

void fcn.00012964(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012934();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012992:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012992;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.00014ab4 @ 0x14ab4 */

int64_t fcn.00014ab4(int64_t arg1)

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


/* fcn.000123a0 @ 0x123a0 */

void fcn.000123a0(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    
    uVar1 = *0x19e40;
    if (((*0xc00fe000 != -1) && ((*0xc00fe0cc & 3) == 0)) && (*0x19e40 != 0)) {
        *0xc00fe010 = *0x19e40;
        *0xc00fe004 = *0xc00fe004 & 0xfffd | 2;
        if ((*(*0x19e40 + 0x5800) & 1) != 0) {
            iVar2 = fcn.00012a88(*0x19e40);
            if (-1 < iVar2) {
                fcn.0001218c(uVar1);
                puVar3 = uVar1 + 0xf00;
                *puVar3 = *puVar3 & 0xffffffdf;
            }
        }
        *0xc00fe004 = *0xc00fe004 & 0xfffd;
        *0xc00fe010 = 0;
    }
    return;
}


/* fcn.00012a88 @ 0x12a88 */

ulong fcn.00012a88(int64_t arg1)

{
    uint32_t uVar1;
    int64_t in_RDX;
    uint32_t uVar2;
    
    uVar1 = arg1 + 0xf00;
    uVar2 = 0;
    *uVar1 = *uVar1 | 0x20;
    do {
        if ((*uVar1 & 0x20) != 0) {
            return 0;
        }
        fcn.00012a10(0x32,in_RDX);
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4000);
    return 0x8000000000000012;
}


/* fcn.0001218c @ 0x1218c */

void fcn.0001218c(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t arg1_00;
    uint *puVar6;
    ulong in_R8;
    ulong noname_2;
    uint16_t auStackX_10 [4];
    
    uVar5 = 0x301;
    arg1_00 = arg1 & 0xffffffff;
    iVar4 = fcn.00012ad8(arg1,0x301);
    if (-1 < iVar4) {
        iVar4 = fcn.00012ba8(arg1_00,uVar5,in_R8,auStackX_10);
        if (-1 < iVar4) {
            iVar4 = fcn.00012b74(arg1 & 0xffffffff,uVar5,0x110000,auStackX_10[0] & 0xffffffef | 4);
            if (-1 < iVar4) {
                iVar3 = arg1;
                uVar5 = 800;
                uVar1 = *(iVar3 + 0x5400);
                uVar2 = *(iVar3 + 0x5404);
                iVar4 = fcn.00012ad8(arg1_00,800);
                if (-1 < iVar4) {
                    puVar6 = iVar3 + 0x20U;
                    *(iVar3 + 0x20U) = 0x4310010;
                    iVar4 = fcn.00012a44(arg1 & 0xffffffff);
                    if (-1 < iVar4) {
                        iVar4 = fcn.00012b74(arg1 & 0xffffffff,uVar5,0x120000,uVar1 & 0xffff);
                        if (-1 < iVar4) {
                            *puVar6 = 0x4310011;
                            iVar4 = fcn.00012a44(arg1 & 0xffffffff);
                            if (-1 < iVar4) {
                                iVar4 = fcn.00012b74(arg1_00,uVar5,0x120000,uVar1 >> 0x10);
                                if (-1 < iVar4) {
                                    *puVar6 = 0x4310012;
                                    iVar4 = fcn.00012a44(arg1 & 0xffffffff);
                                    if (-1 < iVar4) {
                                        iVar4 = fcn.00012b74(arg1 & 0xffffffff,uVar5,0x120000,uVar2 & 0xffff);
                                        if (-1 < iVar4) {
                                            *puVar6 = 0x4310013;
                                            iVar4 = fcn.00012a44(arg1 & 0xffffffff);
                                            if (-1 < iVar4) {
                                                iVar4 = fcn.00012b74(arg1 & 0xffffffff,uVar5,0x120000,0x8000);
                                                if (-1 < iVar4) {
                                                    *puVar6 = 0x4310001;
                                                    iVar4 = fcn.00012a44(arg1 & 0xffffffff);
                                                    if (-1 < iVar4) {
                                                        iVar4 = fcn.00012b74(arg1 & 0xffffffff,uVar5,0x120000,
                                                                             *(iVar3 + 0x5800) & 0xffff);
                                                        if (-1 < iVar4) {
                                                            uVar5 = 0x323;
                                                            iVar4 = fcn.00012ad8(arg1 & 0xffffffff,0x323);
                                                            if (-1 < iVar4) {
                                                                *puVar6 = 0x4310042;
                                                                iVar4 = fcn.00012a44(arg1_00);
                                                                if (-1 < iVar4) {
                                                                    noname_2 = 0x120000;
                                                                    iVar4 = fcn.00012b74(arg1 & 0xffffffff,uVar5,
                                                                                         0x120000,0);
                                                                    if (-1 < iVar4) {
                                                                        uVar5 = 0x301;
                                                                        iVar4 = fcn.00012ad8(arg1 & 0xffffffff,0x301);
                                                                        if (-1 < iVar4) {
                                                                            *puVar6 = 0x4310011;
                                                                            iVar4 = fcn.00012a44(arg1 & 0xffffffff);
                                                                            if (-1 < iVar4) {
                                                                                iVar4 = fcn.00012ba8(arg1 & 0xffffffff,
                                                                                                     uVar5,noname_2,
                                                                                                     auStackX_10);
                                                                                if (-1 < iVar4) {
                                                                                    fcn.00012b74(arg1 & 0xffffffff,
                                                                                                 uVar5,0x110000,
                                                                                                 auStackX_10[0] &
                                                                                                 0xfffffffb | 0x10);
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
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00012ad8 @ 0x12ad8 */

int64_t fcn.00012ad8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t arg2_00;
    
    uVar1 = arg1 + 0x20;
    uVar4 = arg2 << 5;
    arg2_00 = uVar4;
    uVar4 = uVar4 & 0xffff | 0x43f0000;
    *uVar1 = uVar4;
    iVar3 = fcn.00012a44(arg1);
    if (iVar3 == -0x7fffffffffffffee) {
        uVar2 = arg1 + 0x18;
        *uVar2 = *uVar2 | 0x800;
        *uVar1 = uVar4;
        iVar3 = fcn.00012a44(arg1 & 0xffffffff);
        if (iVar3 == -0x7fffffffffffffee) {
            return -0x7ffffffffffffff9;
        }
    }
    fcn.00012a10(4000,arg2_00);
    return iVar3;
}


/* fcn.00012ba8 @ 0x12ba8 */

void fcn.00012ba8(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    uVar1 = arg1 + 0x20;
    *uVar1 = 0x8310000;
    iVar2 = fcn.00012a44(arg1);
    if (iVar2 == 0) {
        *arg2 = *uVar1;
    }
    return;
}


/* fcn.00012a44 @ 0x12a44 */

ulong fcn.00012a44(int64_t arg1)

{
    int64_t in_RDX;
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if ((*(arg1 + 0x20) >> 0x1c & 1) != 0) {
            return 0;
        }
        fcn.00012a10(0x32,in_RDX);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 4000);
    return 0x8000000000000012;
}


/* fcn.00012b74 @ 0x12b74 */

ulong fcn.00012b74(int64_t arg1,int64_t noname_1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    
    if ((arg2 & 0xffe0ffff) != 0) {
        return 0x8000000000000002;
    }
    *(arg1 + 0x20) = arg2 & 0xefffffff | arg3 & 0xffff | 0x4200000;
    uVar1 = 0;
    do {
        if ((*(arg1 + 0x20) >> 0x1c & 1) != 0) {
            return 0;
        }
        fcn.00012a10(0x32,noname_1);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 4000);
    return 0x8000000000000012;
}


/* fcn.00011e60 @ 0x11e60 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

ulong fcn.00011e60(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int16_t *piVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t arg3;
    uint32_t uVar6;
    uint64_t arg1_00;
    uint16_t uVar7;
    int64_t iStackX_8;
    ulong uStackX_10;
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_58h;
    int64_t var_60h;
    int64_t iStack_78;
    ushort *puStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    uchar auStack_58 [8];
    uchar auStack_50 [16];
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    iStackX_8 = arg1;
    uStackX_10 = arg2;
    uVar1 = fcn.000127f8();
    *0x16824 = uVar1;
    (**(*0x166d8 + 0xd0))(str.V_G_,0,&iStack_78);
    arg1_00 = 0;
    *0x16830 = 10;
    *0x16820 = 0;
    *0x16838 = 0x12;
    if (*0x19e50 + 0x408 != 0x16840) {
        section..text(0x16840,*0x19e50 + 0x408,0x35d0);
    }
    *0x16828 = 0;
    *0x16834 = 0;
    (**(*0x166d0 + 0x140))(0x160a0,0,&iStack_60);
    uVar7 = 0;
    if (*(iStack_60 + 0x1e) != 0) {
        uVar4 = arg1_00;
        do {
            if (*(iStack_60 + 2) < uVar4 + 0x24U) break;
            uVar3 = iStack_60 + 0x24 + uVar4;
            if ((*(uVar3 + 8) == *0x16050) && (*(uVar3 + 0x10) == *0x16058)) goto code_r0x00011f67;
            uVar7 = uVar7 + 1;
            uVar4 = uVar4 + *(uVar3 + 2);
        } while (uVar7 < *(iStack_60 + 0x1e));
    }
    uVar3 = uStackX_10;
code_r0x00011f67:
    iVar5 = *(uVar3 + 0x1c);
    if ((iVar5 != 0) && (piVar2 = iVar5 + 2, uVar4 = arg1_00, *piVar2 != 0)) {
        do {
            uVar4 = uVar4 + 1;
            piVar2 = piVar2 + 0xc;
        } while (*piVar2 != 0);
        if (uVar4 != 0) {
            arg3 = uVar4 * 0x18;
            (**(*0x166d8 + 0x50))(6,arg3,0x16828);
            if ((arg3 != 0) && (*0x16828 != iVar5)) {
                section..text(*0x16828,iVar5,arg3);
            }
            *0x16834 = uVar4;
        }
    }
    if (*0x16824 != 0) {
        do {
            uVar1 = fcn.00012674(arg1_00);
            uVar4 = (uVar1 & 0x1f) << 3;
            uVar1 = fcn.00012728(arg1_00);
            iVar5 = (uVar4 | uVar1 & 7) * 0x1000;
            if (*((uVar4 | uVar1 & 7) * 0x1000 + 0xc0000000) != -1) {
                if ((*(iVar5 + 0xc0000054) & 0x40) != 0) {
                    uStackX_20 = 0;
                    (**(iStack_78 + 0x10))(iStack_78,0x11d74,arg1_00,&uStackX_20);
                    (**(iStack_78 + 0x18))(iStack_78,fcn.00011a24,arg1_00,&uStackX_20);
                    uVar6 = *(iVar5 + 0xc00000d8);
                    *(iVar5 + 0xc00000d8) = uVar6 | 2;
                    uStackX_10 = CONCAT44(uStackX_10._4_4_,uVar6) | 2;
                    fcn.00012bdc(iVar5 + 0xd8,iVar5 + 0xd8,&uStackX_10);
                }
                if ((*(iVar5 + 0xc000004c) & 0xf) == 3) {
                    (**(iStack_78 + 0x20))(iStack_78,fcn.00011a24,arg1_00,&uStackX_20);
                }
            }
            uVar6 = arg1_00 + 1;
            arg1_00 = uVar6;
        } while (uVar6 < *0x16824);
    }
    uStackX_18 = 0x40000;
    (***0x19e30)(*0x19e30,0x11e30,&uStackX_18,auStack_58);
    (**(*0x166d0 + 0x40))(4,2,&puStack_70);
    *puStack_70 = uStackX_18;
    (**(*0x166d0 + 0x148))(&iStackX_8,0x16010,puStack_70,0);
    uStack_68 = 3;
    (***0x19e38)(*0x19e38,0x11e54,&uStack_68,auStack_50);
    return 0;
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 20480 named .text
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


/* fcn.00012a10 @ 0x12a10 */

int64_t fcn.00012a10(int64_t arg1,int64_t arg2)

{
    fcn.000129b0((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000129b0 @ 0x129b0 */

void fcn.000129b0(int64_t arg1)

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
            fcn.000111e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00014484 @ 0x14484 */

void fcn.00014484(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uchar uVar3;
    char cVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong uVar9;
    int64_t arg2_00;
    uint32_t arg1_00;
    uint32_t auStackX_10 [2];
    uint auStack_e8 [52];
    
    uVar1 = *0x16838;
    uVar3 = *0x16830;
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg1);
    uVar8 = arg2;
    uVar5 = arg3 & 7;
    uVar7 = (uVar8 & 0x1f) << 3;
    uVar9 = 0xffff;
    if (*((uVar7 | uVar5) * 0x1000 + 0xc0000000) != -1) {
        uVar2 = fcn.00012458((uVar7 | uVar5) << 0xc);
        auStack_e8[0] = 0;
        iVar6 = CONCAT71(uVar9 >> 8,uVar3);
        arg1_00 = ((uVar2 << 3 | arg3 & 7) << 5 | uVar8 & 0x1f) << 0x10;
        fcn.00013608(arg1_00,iVar6,CONCAT71(arg2 >> 8,uVar1),auStack_e8);
        uVar2 = fcn.00013d90(arg1_00);
        fcn.00013e2c(arg1_00,CONCAT71(iVar6 >> 8,uVar2));
        iVar6 = fcn.00012c4c(arg1_00);
        uVar7 = iVar6 + 0xd0U >> 4 & 0x10000000 | iVar6 + 0xd0U & 0xffffffff;
        uVar8 = uVar2 << 4 | *(uVar7 + 0xc0000000) & 0xffffff8f;
        uVar5 = uVar8;
        *(uVar7 + 0xc0000000) = uVar8;
        uVar3 = fcn.00013cc4(arg1_00);
        arg2_00 = CONCAT71(uVar5 >> 8,uVar3);
        fcn.00014c88(iVar6,arg2_00);
        fcn.00013fc8(arg1_00,CONCAT71(arg2_00 >> 8,1));
        cVar4 = fcn.000141f0(arg1_00);
        if (cVar4 != '\0') {
            uVar8 = fcn.00012ca8(arg1_00);
            cVar4 = fcn.00012d10(arg1_00,auStackX_10);
            if (cVar4 != '\0') {
                cVar4 = fcn.00012e34(uVar8,auStackX_10);
                if (cVar4 != '\0') {
                    cVar4 = fcn.000141f0(auStackX_10[0]);
                    if (cVar4 != '\0') {
                        fcn.000143ec(arg1_00,0,0);
                    }
                }
            }
        }
        fcn.000135c0(auStack_e8);
    }
    return;
}


/* fcn.00012458 @ 0x12458 */

uint64_t fcn.00012458(int64_t arg1)

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


/* fcn.00013608 @ 0x13608 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

uchar fcn.00013608(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    iVar5 = fcn.00012c4c(arg1 & 0xffffffff);
    _var_18h = iVar5;
    uStack_2c = fcn.00012ca8(uVar11);
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
            cVar2 = fcn.00012e34(uStack_2c,puVar7);
            if (cVar2 != '\0') {
                do {
                    arg3_00 = CONCAT71(arg3_00 >> 8,arg3);
                    uVar3 = fcn.00013608(uStack_34,CONCAT71(puVar7 >> 8,cVar10),arg3_00,arg4);
                    if (uStack_38 <= uVar3) {
                        cVar10 = uVar3 + 1;
                        uStack_38 = uVar3;
                    }
                    uVar11 = uStack_38;
                    puVar7 = &uStack_34;
                    cVar2 = fcn.00012e34(uStack_2c,puVar7);
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
            cVar2 = fcn.00012e34(uStack_2c,puVar7);
            if (cVar2 != '\0') {
                uVar11 = _var_20h_2;
                do {
                    arg3_00 = CONCAT71(arg3_00 >> 8,uStack_30);
                    uVar4 = fcn.00013608(uStack_34,CONCAT71(puVar7 >> 8,iVar8),arg3_00,arg4);
                    if (uVar11 <= uVar4) {
                        uVar11 = uVar4 & 0xff;
                        iVar8 = uVar4 + 1;
                    }
                    puVar7 = &uStack_34;
                    cVar2 = fcn.00012e34(uStack_2c,puVar7);
                } while (cVar2 != '\0');
            }
        }
    }
    else {
        uStack_30._0_1_ = arg1 >> 8;
    }
    return uStack_30;
}


/* fcn.00013d90 @ 0x13d90 */

uint8_t fcn.00013d90(int64_t arg1)

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
    iVar4 = fcn.00012c4c(arg1);
    uVar5 = ((uVar5 & 0xffffffff) >> 0x18) + iVar4 + 4;
    uVar1 = *((uVar5 >> 4 & 0x10000000 | uVar5 & 0xffffffff) + 0xc0000000);
    uVar6 = uVar1 & 7;
    if ((uVar1 & 7) == 0) {
        uVar6 = 0;
    }
    else {
        cVar2 = fcn.00012d10(arg1 & 0xffffffff,auStackX_10);
        if (cVar2 != '\0') {
            arg1_00 = fcn.00012ca8(arg1);
            while (cVar2 = fcn.00012e34(arg1_00,auStackX_10), cVar2 != '\0') {
                uVar3 = fcn.00013d90(auStackX_10[0]);
                if (uVar6 < uVar3) {
                    uVar3 = uVar6;
                }
                uVar6 = uVar3;
            }
        }
    }
    return uVar6;
}


/* fcn.00013e2c @ 0x13e2c */

void fcn.00013e2c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t arg1_00;
    int64_t iVar2;
    uint32_t *arg2_00;
    uint64_t uVar3;
    uint32_t auStackX_10 [2];
    
    cVar1 = fcn.00012d10(arg1,auStackX_10);
    if (cVar1 != '\0') {
        arg1_00 = fcn.00012ca8(arg1);
        while( true ) {
            arg2_00 = auStackX_10;
            cVar1 = fcn.00012e34(arg1_00,arg2_00);
            if (cVar1 == '\0') break;
            fcn.00013e2c(auStackX_10[0],CONCAT71(arg2_00 >> 8,arg2));
        }
    }
    iVar2 = fcn.00012c4c(arg1 & 0xffffffff);
    uVar3 = (arg1 >> 0x18) + 8 + iVar2;
    uVar3 = uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff;
    *(uVar3 + 0xc0000000) = (arg2 & 0xff) << 5 | *(uVar3 + 0xc0000000) & 0xff1f;
    return;
}


/* fcn.00012c4c @ 0x12c4c */

uint64_t fcn.00012c4c(int64_t arg1)

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


/* fcn.00013cc4 @ 0x13cc4 */

char fcn.00013cc4(int64_t arg1)

{
    char cVar1;
    char cVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uint32_t auStackX_10 [2];
    
    cVar2 = '\0';
    iVar3 = fcn.00012c4c(arg1);
    if (((*((iVar3 + 0xbU >> 4 & 0x10000000 | iVar3 + 0xbU & 0xffffffff) + 0xc0000000) == '\b') &&
        (*((iVar3 + 10U >> 4 & 0x10000000 | iVar3 + 10U & 0xffffffff) + 0xc0000000) == '\0')) &&
       ((*((iVar3 + 9U >> 4 & 0x10000000 | iVar3 + 9U & 0xffffffff) + 0xc0000000) - 0x10U & 0xef) == 0)) {
        cVar2 = '\x01';
    }
    else {
        cVar1 = fcn.00012d10(arg1 & 0xffffffff,auStackX_10);
        if (cVar1 != '\0') {
            arg1_00 = fcn.00012ca8(arg1);
            cVar2 = '\0';
            do {
                cVar1 = fcn.00012e34(arg1_00,auStackX_10);
                if (cVar1 == '\0') break;
                cVar2 = fcn.00013cc4(auStackX_10[0]);
            } while (cVar2 == '\0');
        }
    }
    return cVar2;
}


/* fcn.00014c88 @ 0x14c88 */

void fcn.00014c88(int64_t arg1,int64_t arg2)

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
    cVar1 = fcn.000127c0();
    if (cVar1 == '\0') {
        if (uVar8 < 0x18) {
            uVar3 = *(uVar8 * 4 + 0x16600);
        }
    }
    else if (uVar8 < 0xc) {
        uVar3 = *(uVar8 * 4 + 0x16660);
    }
    puVar6 = 0x16408;
    uVar7 = 0;
    if (*0x16280 != 0) {
        do {
            arg3 = uVar7 * 0x10 + 0x16284;
            if (*arg3 == *0x16408) goto code_r0x00014f76;
            uVar7 = uVar7 + 1;
        } while (uVar7 < *0x16280);
    }
    arg3 = NULL;
code_r0x00014f76:
    fcn.00014e60(*0x16410,uVar3,arg3);
    uVar7 = uVar3 >> 0x10 & 0xff;
    if (uVar7 != *0x16408) {
        uVar4 = 0;
        if (*0x16400 != 0) {
            do {
                if (*puVar6 == uVar7) {
                    iVar5 = uVar4 * 0x10 + 0x16408;
                    goto code_r0x00014fad;
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                puVar6 = puVar6 + 4;
            } while (uVar2 < *0x16400);
        }
        iVar5 = 0;
code_r0x00014fad:
        uVar4 = 0;
        if (*0x16280 != 0) {
            puVar6 = 0x16284;
            do {
                if (*puVar6 == uVar7) {
                    arg3_00 = uVar4 * 0x10 + 0x16284;
                    goto code_r0x00014fce;
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                puVar6 = puVar6 + 4;
            } while (uVar2 < *0x16280);
        }
        arg3_00 = 0;
code_r0x00014fce:
        if ((iVar5 != 0) && (arg3_00 != 0)) {
            fcn.00014e60(*(iVar5 + 8),uVar3,arg3_00);
        }
    }
    return;
}


/* fcn.000127c0 @ 0x127c0 */

ulong fcn.000127c0(void)

{
    char cVar1;
    
    cVar1 = fcn.00012784();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00012784(), cVar1 != '\x05')) && (cVar1 = fcn.00012784(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00012784(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00014e60 @ 0x14e60 */

void fcn.00014e60(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013fc8 @ 0x13fc8 */

//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.00013fc8(int64_t arg1,int64_t arg2)

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
    arg1_00 = fcn.00012c4c(arg1);
    uVar7 = arg1_00 + (uVar4 >> 0x18) + 0x12;
    uVar1 = *((uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff) + 0xc0000000) >> 0xc;
    uVar5 = fcn.00012d10(arg1 & 0xffffffff,auStackX_20);
    if (uVar5 != '\0') {
        uVar4 = fcn.00012ca8(arg1_01);
        arg2_00 = auStackX_20;
        uVar5 = fcn.00012e34(uVar4,arg2_00);
        cVar3 = uVar5;
        while (cVar3 != '\0') {
            uVar2 = fcn.00013fc8(auStackX_20[0],CONCAT71(arg2_00 >> 8,arg2));
            arg2_00 = auStackX_20;
            uVar8 = uVar8 | uVar2;
            uVar5 = fcn.00012e34(uVar4,arg2_00);
            cVar3 = uVar5;
        }
        if ((uVar4 == 3) && ((uVar8 & uVar1 & 1) != 0)) {
            uVar4 = arg1_01;
            iVar6 = fcn.00012c4c(arg1 & 0xffffffff);
            uVar7 = (uVar4 >> 0x18) + 0x10 + iVar6;
            uVar7 = uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff;
            *(uVar7 + 0xc0000000) = *(uVar7 + 0xc0000000) | 0x40;
            while (cVar3 = fcn.00012e34(3,auStackX_20), cVar3 != '\0') {
                uVar4 = auStackX_20[0];
                iVar6 = fcn.00012c4c(auStackX_20[0]);
                uVar7 = (uVar4 >> 0x18) + 0x10 + iVar6;
                in_R8 = uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff;
                *(in_R8 + 0xc0000000) = *(in_R8 + 0xc0000000) | 0x40;
            }
            uVar5 = fcn.000125b8(arg1_00,arg1_01 >> 0x18,CONCAT71(in_R8 >> 8,arg2));
        }
    }
    return CONCAT71(uVar5 >> 8,uVar1) & 0xffffffffffffff01;
}


/* fcn.000141f0 @ 0x141f0 */

bool fcn.000141f0(int64_t arg1)

{
    int16_t iVar1;
    uint64_t uVar2;
    
    if (arg1 == '\0') {
        uVar2 = arg1 >> 8 & 0xff;
    }
    else {
        uVar2 = (arg1 & 0xffU) << 0xc | arg1 >> 8 & 0xff;
    }
    iVar1 = fcn.00012524(((uVar2 << 5 | arg1 >> 0x10 & 0x1f) << 3 | arg1 >> 0x15 & 7) << 0xc,0x1f);
    return iVar1 != 0;
}


/* fcn.00012ca8 @ 0x12ca8 */

int fcn.00012ca8(uint32_t arg1)

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
        iVar3 = fcn.00012c4c(uVar4);
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


/* fcn.00012d10 @ 0x12d10 */

uint64_t fcn.00012d10(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    char cVar2;
    uint64_t uVar3;
    
    *arg2 = arg1;
    *arg2 = *arg2 | 0xff0000;
    uVar3 = fcn.00012c4c(arg1);
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


/* fcn.00012e34 @ 0x12e34 */

ulong fcn.00012e34(uint32_t arg1,int64_t arg2)

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
code_r0x00012f3f:
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
                goto code_r0x00012f3f;
            }
            *arg2 = ((uVar3 & 0xffe00000) + 0x200000 ^ uVar3) & 0xe00000 ^ uVar3;
        }
        uVar4 = fcn.00012c4c(*arg2);
        if (*((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + iVar5) != -1) {
            cVar1 = fcn.00012458(uVar4);
            iVar5 = 0xc0000000;
            if (cVar1 != '\0') {
                *(arg2 + 3) = cVar1;
                return 1;
            }
        }
    } while( true );
}


/* fcn.000143ec @ 0x143ec */

void fcn.000143ec(int64_t arg1,int64_t arg2,int64_t arg3)

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
    arg1_00 = fcn.00012ca8(arg1);
    cVar1 = fcn.000141f0(arg1 & 0xffffffff);
    if (cVar1 == '\0') {
        cVar1 = fcn.000141f0(arg1 & 0xffffffffU);
        if ((cVar1 == '\0') && (arg1_00 == 2)) {
            uVar3 = 0;
            uVar2 = 0;
        }
    }
    else {
        arg3 = auStackX_18;
        fcn.00014254(arg1 & 0xffffffffU,auStackX_10,arg3);
        uVar3 = auStackX_18[0];
        uVar2 = auStackX_10[0];
    }
    cVar1 = fcn.00012d10(arg1 & 0xffffffff,auStackX_20);
    if (cVar1 != '\0') {
        while( true ) {
            arg2_00 = auStackX_20;
            cVar1 = fcn.00012e34(arg1_00,arg2_00);
            if (cVar1 == '\0') break;
            arg3 = CONCAT71(arg3 >> 8,uVar3);
            fcn.000143ec(auStackX_20[0],CONCAT71(arg2_00 >> 8,uVar2),arg3);
        }
    }
    return;
}


/* fcn.000135c0 @ 0x135c0 */

void fcn.000135c0(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int *piVar3;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *piVar3;
    while (iVar1 != 0) {
        iVar2 = fcn.00012c4c(piVar3[(*piVar3 - 1) + 1]);
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3;
        *((iVar2 + 0x18U >> 4 & 0x10000000 | iVar2 + 0x18U & 0xffffffff) + 0xc0000000) = 0;
    }
    return;
}


/* fcn.000148a8 @ 0x148a8 */

void fcn.000148a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    unkuint3 Var4;
    uint8_t uVar5;
    uchar uVar6;
    uint32_t arg2_00;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t *arg2_01;
    uint32_t arg1_00;
    uint64_t uVar9;
    uint *arg3_00;
    uint64_t uVar10;
    int64_t iVar11;
    uint auStackX_8 [2];
    uint uStackX_10;
    int64_t in_stack_00000038;
    uint32_t auStack_118 [2];
    ulong uStack_110;
    uint auStack_108 [52];
    
    uVar6 = *0x16838;
    Var4 = uStackX_10 >> 8;
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,arg1);
    uStackX_10 = CONCAT31(Var4,*0x16830);
    uVar9 = *0x16834;
    uVar10 = (arg3 & 0x1f) << 3;
    uVar7 = arg4 & 7;
    iVar11 = (uVar10 | uVar7) << 0xc;
    if (*((uVar10 | uVar7) * 0x1000 + 0xc0000000) != -1) {
        auStack_118[0] = *0x16834;
        uStack_110 = *0x16828;
        uVar1 = *(in_stack_00000038 + 0x12);
        uVar2 = *(in_stack_00000038 + 0x10);
        uVar8 = *0x16828;
        uVar5 = fcn.00012458(iVar11);
        auStack_108[0] = 0;
        uVar3 = uVar5;
        arg2_00 = arg3 & 0x1f;
        arg1_00 = ((uVar3 << 3 | arg4 & 7) << 5 | arg2_00) << 0x10;
        fcn.00013608(arg1_00,CONCAT71(uVar8 >> 8,uStackX_10),CONCAT71(uVar9 >> 8,uVar6),auStack_108);
        fcn.0001412c(arg1_00,(uVar1 & 0x1fff) << 0xd | uVar2 & 0x1fff | (Var4 & 0xfc0000) << 8);
        auStackX_8[0] = fcn.00014664(arg1_00,auStack_118);
        arg3_00 = auStackX_8;
        fcn.00014b00(iVar11,arg2_00,arg3_00,in_stack_00000038 + 0x10);
        if (*(in_stack_00000038 + 0xe) != '\0') {
            fcn.00013ed0(arg1_00);
        }
        arg2_01 = auStack_118;
        fcn.00013b10(arg1_00,arg2_01);
        uVar6 = fcn.00014614(arg1_00);
        fcn.00014d50(iVar11,CONCAT71(arg2_01 >> 8,uVar6),CONCAT71(arg3_00 >> 8,*(in_stack_00000038 + 0x23)));
        fcn.000137fc(arg1_00,0,auStack_118);
        iVar11 = fcn.00012c4c(arg1_00);
        uVar7 = uVar3 + 0x10 + iVar11;
        if (((*((uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff) + 0xc0000000) & 3) - 1 & 0xfffd) == 0) {
            uVar7 = uVar3 + 0x418 + iVar11;
            uVar7 = uVar7 >> 4 & 0x10000000 | uVar7 & 0xffffffff;
            *(uVar7 + 0xc0000000) = *(uVar7 + 0xc0000000) | 3;
        }
        fcn.000135c0(auStack_108);
    }
    return;
}


/* fcn.00012674 @ 0x12674 */

uchar fcn.00012674(uint32_t arg1)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1);
    if (0xe < uVar1) {
        if (uVar1 < 0x16) {
            if (uVar1 != 0x15) {
                if (uVar1 == 0xf) {
                    return 0x1d;
                }
                if ((((uVar1 != 0x10) && (uVar1 != 0x11)) && (uVar1 != 0x12)) && ((uVar1 != 0x13 && (uVar1 != 0x14)))) {
                    return 0xff;
                }
            }
        }
        else if ((uVar1 != 0x16) && (uVar1 != 0x17)) {
            return 0xff;
        }
        return 0x1b;
    }
    if (uVar1 == 0xe) {
        return 0x1d;
    }
    if (uVar1 < 8) {
        if (((uVar1 == 7) || (uVar1 == 0)) ||
           ((uVar1 == 1 || ((((uVar1 == 2 || (uVar1 == 3)) || (uVar1 == 4)) || ((uVar1 == 5 || (uVar1 == 6)))))))) {
            return 0x1c;
        }
    }
    else {
        if (uVar1 == 8) {
            return 0x1d;
        }
        if (uVar1 == 9) {
            return 0x1d;
        }
        if (uVar1 == 10) {
            return 0x1d;
        }
        if (uVar1 == 0xb) {
            return 0x1d;
        }
        if (uVar1 == 0xc) {
            return 0x1d;
        }
        if (uVar1 == 0xd) {
            return 0x1d;
        }
    }
    return 0xff;
}


/* fcn.00012728 @ 0x12728 */

uint8_t fcn.00012728(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uStackX_8;
    
    uVar2 = fcn.000127f8();
    if (arg1 < (uVar2 & 0xff)) {
        iVar1 = (arg1 >> 2) * 3;
        uStackX_8 = *((*(iVar1 + 0x16129) | 0xfd00) << 0x10) >> ((arg1 - *(iVar1 + 0x1612a)) * '\x04' & 0x3fU) & 7;
    }
    return uStackX_8;
}


/* fcn.00011d84 @ 0x11d84 */

void fcn.00011d84(ulong param_1,ulong param_2,ulong param_3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uchar uVar3;
    int64_t arg2;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t arg1;
    unkbyte7 Var6;
    int64_t iVar7;
    
    Var6 = param_3 >> 8;
    arg1 = 0;
    if (*0x16824 != 0) {
        do {
            uVar5 = arg1;
            uVar1 = fcn.00012674(arg1);
            uVar2 = fcn.00012728(arg1);
            uVar4 = (uVar1 & 0x1f) << 3;
            iVar7 = (uVar2 & 7 | uVar4) << 0xc;
            arg2 = (uVar2 & 7 | uVar4) * 0x1000;
            if (*(arg2 + 0xc0000000) != -1) {
                uVar5 = uVar5 & 0xffffffff;
                uVar3 = fcn.00012728(uVar5);
                fcn.000148a8(uVar5,arg2,CONCAT71(Var6,uVar1),CONCAT71(iVar7 >> 8,uVar3));
            }
            arg1 = arg1 + 1;
        } while (arg1 < *0x16824);
    }
    return;
}


/* fcn.000127f8 @ 0x127f8 */

uchar fcn.000127f8(void)

{
    char cVar1;
    
    cVar1 = fcn.00012784();
    if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
            return 0x1c;
        }
        if (cVar1 != '\x05') {
            return 0;
        }
    }
    return 0xc;
}


/* fcn.00012bdc @ 0x12bdc */

void fcn.00012bdc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = arg1;
    (***0x166e8)(*0x166e8,0xb,2,arg1 >> 0x20 & 0xffff,
                 CONCAT44(uVar1,((uVar1 & 0xfff00000) << 3 | uVar1 & 0xf8000) * 2 | arg1 >> 4 & 0x700) & 0xfffffffffff
                 ,1,arg2);
    return;
}


/* fcn.00012784 @ 0x12784 */

void fcn.00012784(void)

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


/* fcn.000111e0 @ 0x111e0 */

void fcn.000111e0(void)

{
    return;
}


/* fcn.00012524 @ 0x12524 */

uint64_t fcn.00012524(int64_t arg1,int64_t arg2)

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


/* fcn.00012fac @ 0x12fac */

ushort fcn.00012fac(int64_t arg1,uint32_t arg2)

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


/* fcn.00013060 @ 0x13060 */

uint64_t fcn.00013060(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013460 @ 0x13460 */

void fcn.00013460(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    int16_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    
    uVar4 = fcn.00012c4c(arg1);
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


/* fcn.00013408 @ 0x13408 */

uint64_t fcn.00013408(int64_t arg1,int64_t arg2)

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


/* fcn.000137fc @ 0x137fc */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h

uint64_t fcn.000137fc(int64_t arg1,int64_t arg2,int64_t arg3)

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
    arg1_00 = fcn.00012ca8(arg1_01);
    if (arg1_00 == 2) {
        uStackX_10 = uStackX_10 + 1;
        uVar10 = uStackX_10;
    }
    uVar13 = 0;
    iVar8 = fcn.00012c4c(arg1 & 0xffffffff);
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
    iVar7 = fcn.00012ca8(arg1_01);
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
        fcn.00013460(arg1 & 0xffffffff,puVar12,arg3);
    }
    uVar6 = uStack_34;
    if (arg1_00 == 1) {
        uVar10 = fcn.00013408(uStack_34,CONCAT71(puVar12 >> 8,-uVar10));
    }
    else {
        cVar5 = fcn.00012d10(arg1 & 0xffffffff,auStackX_20);
        if (cVar5 != '\0') {
            puVar12 = auStackX_20;
            cVar5 = fcn.00012e34(arg1_00,puVar12);
            if (cVar5 != '\0') {
                uVar14 = arg1_01;
                do {
                    uVar13 = fcn.000137fc(auStackX_20[0],CONCAT71(puVar12 >> 8,uVar10),arg3);
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
                    cVar5 = fcn.00012e34(arg1_00,puVar12);
                    uVar14 = uVar6;
                } while (cVar5 != '\0');
            }
            if (arg1_00 == 3) {
                while( true ) {
                    fcn.00013530(arg1_01,uVar6);
                    cVar5 = fcn.00012e34(3,auStackX_20);
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


/* fcn.00013530 @ 0x13530 */

void fcn.00013530(int64_t arg1,uint32_t arg2)

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
    iVar1 = fcn.00012c4c(uVar2);
    uVar2 = (uVar2 >> 0x18) + iVar1 + 0x10;
    uVar2 = uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff;
    *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfffc | uVar3;
    return;
}


/* fcn.00013b10 @ 0x13b10 */

void fcn.00013b10(int64_t arg1,int64_t arg2)

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
    arg1_00 = fcn.00012c4c(arg1);
    cVar1 = fcn.00012d10(uVar3 & 0xffffffff,auStackX_18);
    if (cVar1 != '\0') {
        uStackX_20 = fcn.00012ca8(uVar6);
        cVar1 = fcn.00012e34(uStackX_20,auStackX_18);
        if (cVar1 != '\0') {
            do {
                uVar2 = fcn.00013b10(auStackX_18[0],arg2);
                if ((uStackX_20 == 3) && ((auStackX_18[0] & 0xe00000) == 0)) {
                    uVar3 = fcn.00013188(arg1_00,arg2);
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
                        uVar4 = *(uVar4 + 0x165d4) * (uVar3 >> 0xe & 0x3f);
                    }
                    else {
                        uVar4 = 0;
                    }
                    uVar5 = uVar2 >> 0xc & 3;
                    if (uVar5 < 3) {
                        uVar5 = *(uVar5 + 0x165d4) * (uVar2 >> 0xe & 0x3f);
                    }
                    else {
                        uVar5 = 0;
                    }
                    if (uVar5 < uVar4) {
                        uVar2 = uVar3;
                    }
                    uVar6 = uVar6 ^ (uVar6 ^ uVar2) & 0xff000;
                    fcn.00013258(arg1 & 0xffffffff,uVar6,arg2);
                    fcn.00013258(auStackX_18[0],uVar6,arg2);
                }
                cVar1 = fcn.00012e34(uStackX_20,auStackX_18);
            } while (cVar1 != '\0');
        }
    }
    fcn.00013188(arg1_00,arg2);
    return;
}


/* fcn.00013188 @ 0x13188 */

uint32_t fcn.00013188(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint32_t auStackX_18 [4];
    
    auStackX_18[0] = 0;
    uVar2 = fcn.00012fac(arg1,arg2);
    if ((uVar2 == 0) && (uVar2 = fcn.00012524(arg1,0x1e), uVar2 == 0)) {
        return 0;
    }
    uVar3 = arg1 + 4 + uVar2;
    uVar1 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
    if ((uVar1 & 0x10) != 0) {
        auStackX_18[0] =
             (((uVar1 >> 1 & 0x7c0000 | uVar1 & 0x3ff00) >> 1 | uVar1 & 8) >> 2 | uVar1 & 4) >> 1 |
             ((uVar1 & 1) << 2 | uVar1 & 2) * 2;
    }
    fcn.00013060(arg1,arg2,auStackX_18);
    return auStackX_18[0];
}


/* fcn.00013258 @ 0x13258 */

void fcn.00013258(int64_t arg1,int64_t arg2,int64_t arg3)

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
    arg1_00 = fcn.00012c4c(arg1);
    uVar2 = fcn.00012fac(arg1_00,uVar8);
    if ((uVar2 == 0) && (uVar2 = fcn.00012524(arg1_00,0x1e), uVar2 == 0)) {
        return;
    }
    uVar5 = uVar2;
    uVar8 = (uVar6 >> 2 & 2 | uVar6 & 4) >> 1 | ((uVar6 & 1) << 2 | uVar6 & 2) * 2;
    iVar3 = fcn.00012ca8(arg1);
    if (iVar3 == 3) {
        uVar8 = uVar8 | (uVar6 & 0xff0) << 4;
    }
    uVar4 = uVar6 >> 0xc & 3;
    if (uVar4 < 3) {
        iVar3 = *(uVar4 + 0x165d4) * (uVar6 >> 0xe & 0x3f);
    }
    else {
        iVar3 = 0;
    }
    uVar8 = ((iVar3 + 10) * 0x10 + (uVar6 & 0xff0)) * 0x1000 | uVar8;
    uVar4 = uVar8 | 0x40000000;
    if (((*0xc00f8002 & 0xffe0) != 0x7a00) && (cVar1 = fcn.00012784(), cVar1 == '\x04')) {
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


/* fcn.00013ed0 @ 0x13ed0 */

uint32_t fcn.00013ed0(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t auStackX_10 [2];
    
    cVar1 = fcn.00012d10(arg1,auStackX_10);
    if (cVar1 != '\0') {
        uVar5 = 1;
        arg1_00 = fcn.00012ca8(arg1);
        cVar1 = fcn.00012e34(arg1_00,auStackX_10);
        if (cVar1 != '\0') {
            do {
                uVar2 = fcn.00013ed0(auStackX_10[0]);
                uVar5 = uVar5 & uVar2;
                cVar1 = fcn.00012e34(arg1_00,auStackX_10);
            } while (cVar1 != '\0');
            if (uVar5 == 0) goto code_r0x00013f84;
        }
        while (cVar1 = fcn.00012e34(arg1_00,auStackX_10), cVar1 != '\0') {
            iVar3 = fcn.00012c4c(auStackX_10[0]);
            uVar4 = (auStackX_10[0] >> 0x18) + 0x10 + iVar3;
            uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
            *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 0x100;
        }
    }
code_r0x00013f84:
    iVar3 = fcn.00012c4c(arg1 & 0xffffffff);
    uVar4 = (arg1 >> 0x18) + 0xc + iVar3;
    return *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) >> 0x12 & 1;
}


/* fcn.000125b8 @ 0x125b8 */

void fcn.000125b8(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00014614 @ 0x14614 */

uint64_t fcn.00014614(uint32_t arg1)

{
    uint64_t in_RAX;
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg1;
    if (arg1 < 0x1000000) {
        uVar2 = in_RAX & 0xffffffffffffff00;
    }
    else {
        iVar1 = fcn.00012c4c(uVar2);
        uVar2 = (uVar2 >> 0x18) + iVar1 + 0x24;
        uVar2 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) >> 0xb & 1;
    }
    return uVar2;
}


/* fcn.0001412c @ 0x1412c */

void fcn.0001412c(int64_t arg1,int64_t arg2)

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
    arg1_00 = fcn.00012c4c(arg1);
    cVar1 = fcn.00014614(uVar2);
    if (cVar1 != '\0') {
        if (0xffffff < uVar2) {
            iVar3 = fcn.00012c4c(arg1 & 0xffffffff);
            uVar4 = (arg1_01 >> 0x18) + 0x28 + iVar3;
            uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
            *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 0x400;
        }
        cVar1 = fcn.00012d10(arg1 & 0xffffffff,auStackX_18);
        if (cVar1 != '\0') {
            uVar2 = fcn.00012ca8(arg1_01);
            while( true ) {
                cVar1 = fcn.00012e34(uVar2,auStackX_18);
                if (cVar1 == '\0') break;
                fcn.0001412c(auStackX_18[0],arg2 & 0xffffffff);
            }
        }
        fcn.00012d7c(arg1_00,arg2 & 0xffffffff);
    }
    return;
}


/* fcn.00012d7c @ 0x12d7c */

void fcn.00012d7c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar1 = fcn.00012524(arg1,0x18);
    if (uVar1 != 0) {
        uVar2 = arg1 + 4 + uVar1;
        uVar3 = arg1 + 6 + uVar1;
        *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) = (arg2 >> 10 & 7) << 10 | arg2 & 0x3ff;
        *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) =
             ((arg2 >> 0x10) >> 7 & 7) << 10 | arg2 >> 0xd & 0x3ff;
    }
    return;
}


/* fcn.00014254 @ 0x14254 */

void fcn.00014254(int64_t arg1,int64_t arg2,int64_t arg3)

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
    uVar1 = fcn.00012524(((uVar3 << 5 | arg1 >> 0x10 & 0x1f) << 3 | arg1 >> 0x15 & 7) << 0xc,0x1f);
    uVar8 = 0;
    if (uVar1 != 0) {
        iVar2 = fcn.00012c4c(arg1 & 0xffffffff);
        uVar3 = uVar1 + iVar2 + 8;
        uVar8 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
    }
    uVar3 = 0;
    uVar6 = uVar8;
    if (uVar1 != 0) {
        iVar2 = fcn.00012c4c(arg1 & 0xffffffff);
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
        iVar2 = fcn.00012c4c(arg1 & 0xffffffff);
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


/* fcn.00014664 @ 0x14664 */

uint32_t fcn.00014664(int64_t arg1,int64_t arg2)

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
    
    uVar8 = fcn.00012c4c(arg1);
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
    cVar5 = fcn.00012d10(arg1 & 0xffffffff,auStackX_20);
    if (cVar5 != '\0') {
        uVar9 = fcn.00012ca8(arg1);
        cVar5 = fcn.00012e34(uVar9,auStackX_20);
        while (cVar5 != '\0') {
            uVar6 = fcn.00014664(auStackX_20[0],arg2);
            fcn.00011040(auStackX_18,4);
            uVar4 = uVar7;
            if (((uVar6 & 0x2000) != 0) &&
               ((*((uVar6 >> 10 & 7) * 4 + 0x165d8) * (uVar6 & 0x3ff) <=
                 *((uVar7 >> 10 & 7) * 4 + 0x165d8) * (uVar7 & 0x3ff) || ((uVar7 & 0x2000) == 0)))) {
                uVar4 = uVar6;
            }
            auStackX_18[0] = auStackX_18[0] ^ (auStackX_18[0] ^ uVar4) & 0x3fff;
            uVar4 = uVar7;
            if (((uVar6 & 0x8000000) != 0) &&
               ((*((uVar6 >> 0x18 & 7) * 4 + 0x165d8) * (uVar6 >> 0xe & 0x3ff) <=
                 *((uVar7 >> 0x18 & 7) * 4 + 0x165d8) * (uVar7 >> 0xe & 0x3ff) || ((uVar7 & 0x8000000) == 0)))) {
                uVar4 = uVar6;
            }
            uVar6 = uVar6 | uVar7;
            uVar7 = auStackX_18[0] ^ (auStackX_18[0] ^ uVar4) & 0xfffc000;
            if ((uVar6 >> 0x1c & 1) != 0) {
                uVar7 = uVar7 | 0x10000000;
            }
            auStackX_18[0] = uVar7;
            cVar5 = fcn.00012e34(uVar9,auStackX_20);
        }
    }
    return uVar7;
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t arg2)

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


/* fcn.00014b00 @ 0x14b00 */

void fcn.00014b00(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

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


/* fcn.00014d50 @ 0x14d50 */

void fcn.00014d50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar4 = arg1 + 0x420;
    uVar1 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000);
    uVar2 = fcn.00012524(arg1,0x1e);
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


/* fcn.00015628 @ 0x15628 */

uint fcn.00015628(uint32_t arg1,int64_t arg2)

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
        iVar1 = fcn.0001500c(**(iVar1 + 0x88),CONCAT71(arg2 >> 8,*(iVar1 + 0x7c)),arg2 & 0xffffffff,arg4);
        if (iVar1 < 0) {
            uStackX_18 = 0xffffffff;
        }
    }
    else {
        uStackX_18 = 0xffffffff;
    }
    return uStackX_18;
}


/* fcn.00015854 @ 0x15854 */

uint32_t fcn.00015854(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.00015628(arg1,arg2);
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
        iVar3 = fcn.0001500c(**(arg1 + 0x88),CONCAT31(arg2 >> 8,*(arg1 + 0x7c)),arg2 & 0xffffffff,iVar3);
        if (iVar3 < 0) {
            uVar1 = 0xffffffff;
        }
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.00015294 @ 0x15294 */

uint32_t fcn.00015294(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.00015628(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.00015454 @ 0x15454 */

uint32_t fcn.00015454(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.00015628(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xffff;
    }
    return uVar1;
}


/* fcn.0001500c @ 0x1500c */

ulong fcn.0001500c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


