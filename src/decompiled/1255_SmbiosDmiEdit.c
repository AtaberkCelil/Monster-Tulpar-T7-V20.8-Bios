// decompiled by r2ghidra: 1255_SmbiosDmiEdit.pe32
// functions: 53

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112c0(arg1,arg2);
    *0x154e0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x153e0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011450(arg1,arg2);
        if ((-1 < iVar1) || (*0x154e0 < 0)) {
            *0x154e0 = iVar1;
        }
        fcn.000110d0(0x153e0,-1);
    }
    iVar1 = *0x154e0;
    if (*0x154e0 < 0) {
        fcn.00013d40(*0x154f0);
    }
    return iVar1;
}


/* fcn.00013c88 @ 0x13c88 */

void fcn.00013c88(void)

{
    return;
}


/* fcn.000112c0 @ 0x112c0 */

void fcn.000112c0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x15368 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x15360 = arg2;
    uStackX_8 = arg1;
    (**(*0x15368 + 0x140))(0x15090,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x15370);
    (**(*0x15368 + 0x140))(0x150a0,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x154f0 = fcn.00013cd0();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x154f0);
    *0x154e8 = uStackX_8 >> 5;
    fcn.00013d78();
    puVar4 = fcn.00013d78();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113ab:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                fcn.000111f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    func_0x000111e0();
                }
                fcn.000111f0(uVar7,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011210();
                }
                else {
                    fcn.00011200();
                }
code_r0x00011414:
                iVar6 = (**(*0x15370 + 0xd0))(0x15050,0,87000);
                if (iVar6 < 0) {
                    *0x153d8 = NULL;
                }
                return;
            }
            if ((*0x15160 == *(puVar4 + 4)) && (*0x15168 == *(puVar4 + 8))) goto code_r0x00011414;
        }
        else if (uVar1 == 4) goto code_r0x000113ab;
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
    fcn.00013c88();
    *(arg1 + 0xf8) = 0;
    if ((*0x151c0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011450 @ 0x11450 */

int64_t fcn.00011450(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x153d0 == 0) {
        *0x15380 = *(arg2 + 0x60);
        *0x15388 = *(arg2 + 0x58);
        *0x153d0 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x153d0 == 0) {
        *0x15380 = *(arg2 + 0x60);
        *0x15388 = *(arg2 + 0x58);
        *0x153d0 = arg2;
    }
    iVar1 = (**(*0x15380 + 0x140))(0x15190,0,0x153c0);
    if (((-1 < iVar1) && ((***0x153c0)(*0x153c0,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x153c0)[1])(*0x153c0,0x153b8), -1 < iVar1)) {
        iVar1 = fcn.00013fcc();
        *0x15390 = 1;
        if (iVar1 != 0) {
            *0x15388 = iVar1;
        }
        *0x153a0 = 0;
        fcn.00013e60();
        fcn.00013ee8();
        *0x153a0 = 1;
        iVar1 = fcn.00011570(arg1,arg2);
    }
    return iVar1;
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


/* fcn.00013d40 @ 0x13d40 */

void fcn.00013d40(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00013c8c(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00013d61. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x15370 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00013d71. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15368 + 0x48))(arg1);
    return;
}


/* fcn.00013c8c @ 0x13c8c */

uint64_t fcn.00013c8c(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x154e8 != 0) {
        puVar2 = *0x154f0 + 8;
        in_RAX = *0x154f0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x154e8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00013cd0 @ 0x13cd0 */

ulong fcn.00013cd0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x15370 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00013d78 @ 0x13d78 */

int64_t fcn.00013d78(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15378 == 0) {
        *0x15378 = 0;
        if (*(*0x15360 + 0x68) != 0) {
            piVar2 = *(*0x15360 + 0x70);
            do {
                if ((*0x15060 == *piVar2) && (*0x15068 == piVar2[1])) {
                    *0x15378 = (*(*0x15360 + 0x70))[uVar1 * 3 + 2];
                    return *0x15378;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x15360 + 0x68));
        }
    }
    return *0x15378;
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


/* fcn.00013fcc @ 0x13fcc */

ulong fcn.00013fcc(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x153b8 != 0) {
        iVar3 = *(*0x153b8 + 0xa0);
        for (iVar2 = *(*0x153b8 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00013de4(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00013e60 @ 0x13e60 */

ulong fcn.00013e60(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x15390 == '\0') {
        if (*0x153b0 == 0) {
            if (*0x153a0 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x15380 + 0x140))(0x15170,0,0x153b0);
        }
    }
    else if (*0x15398 == 0) {
        if ((*0x153a0 == '\0') && (*0x153b8 != 0)) {
    //WARNING: Could not recover jumptable at 0x00013e9f. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x153b8 + 0xd0))(0x15180,0,0x15398);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00013ee8 @ 0x13ee8 */

int64_t fcn.00013ee8(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x15390 == '\0') {
        if (*0x153c8 == 0) {
            if (*0x153a0 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x15380 + 0x18))(0x1f);
            (**(*0x15380 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x15380 + 0x140))(str.6_6v,0,0x153c8);
            if (iVar1 < 0) {
                *0x153c8 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x153a8 == 0) {
        if (*0x153b8 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x153b8 + 0xd0))(0x15020,0,0x153a8);
        if (iVar1 < 0) {
            *0x153a8 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011570 @ 0x11570 */

int64_t fcn.00011570(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    var_28h = 0;
    iVar1 = (**(*0x15380 + 0x140))(0x15090,0,&var_bp_8h);
    if (-1 < iVar1) {
        (**(var_bp_8h + 8))(var_bp_8h,0x15530);
        iVar1 = (**(*0x15380 + 0x140))(0x15040,0,0x15538);
        if (-1 < iVar1) {
            (***0x15538)(*0x15538,0x15518,0x15508);
            iVar1 = (**(*0x15530 + 0xd0))(0x15030,0,0x15528);
            if (((-1 < iVar1) && (iVar1 = (**(*0x15530 + 0xd0))(0x15010,0,0x15310), -1 < iVar1)) &&
               (iVar1 = (**(*0x15530 + 0xd0))(0x150b0,0,&var_10h), -1 < iVar1)) {
                var_20h = 0x50;
                iVar1 = (**var_10h)(var_10h,0x118d0,&var_20h,&var_28h);
                if (-1 < iVar1) {
                    var_20h = 0x51;
                    iVar1 = (**var_10h)(var_10h,0x118d0,&var_20h,&var_28h);
                    if (-1 < iVar1) {
                        var_20h = 0x52;
                        iVar1 = (**var_10h)(var_10h,0x118d0,&var_20h,&var_28h);
                        if (-1 < iVar1) {
                            var_20h = 0x53;
                            iVar2 = (**var_10h)(var_10h,0x118d0,&var_20h,&var_28h);
                            iVar1 = 0;
                            if (iVar2 < 0) {
                                iVar1 = iVar2;
                            }
                        }
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.0001170c @ 0x1170c */

uint64_t fcn.0001170c(void)

{
    uint64_t uVar1;
    ulong uStackX_8;
    
    uStackX_8 = 8;
    uVar1 = (**(*0x15388 + 0x48))(L"SmbiosEntryPointTable",0x15070,0,&uStackX_8,0x15338);
    if (((((uVar1 == 0) && (uVar1 = 0, *0x153d8 != NULL)) && (uVar1 = (***0x153d8)(*0x15338,0x1f), uVar1 == 0)) &&
        (uVar1 = (**(*0x15388 + 0x48))(L"SmbiosEntryPointTableF000",0x15070,0,&uStackX_8,0x15328), uVar1 == 0)) &&
       ((*0x15328 == 0 || ((uVar1 = 0, *0x153d8 != NULL && (uVar1 = (***0x153d8)(*0x15328,0x1f), uVar1 == 0)))))) {
        uStackX_8 = 8;
        uVar1 = (**(*0x15388 + 0x48))(L"SmbiosV3EntryPointTable",0x15070,0,&uStackX_8,0x15320);
        if ((uVar1 == 0) && ((uVar1 = 0, *0x153d8 != NULL && (uVar1 = (***0x153d8)(*0x15320,0x18), uVar1 == 0)))) {
            uStackX_8 = 2;
            uVar1 = (**(*0x15388 + 0x48))(L"MaximumTableSize",0x15070,0,&uStackX_8,0x15520);
            if (uVar1 == 0) {
                uStackX_8 = 8;
                uVar1 = (**(*0x15388 + 0x48))(L"SmbiosScratchBuffer",0x15070,0,&uStackX_8,0x15330);
                if (((uVar1 == 0) && (uVar1 = 0, *0x153d8 != NULL)) &&
                   (uVar1 = (***0x153d8)(*0x15330,*0x15520), uVar1 == 0)) {
                    return 1;
                }
            }
        }
    }
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.000127b8 @ 0x127b8 */

uint64_t fcn.000127b8(uint32_t arg1,int64_t arg2)

{
    uint64_t extraout_RAX;
    uint64_t extraout_RAX_00;
    uint64_t uVar1;
    uint in_register_0000000c;
    char cVar2;
    unkbyte7 Var3;
    int16_t iVar4;
    char *arg1_00;
    char *pcVar5;
    
    cVar2 = arg2;
    Var3 = arg2 >> 8;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    if (cVar2 == '\0') {
        pcVar5 = arg1_00 + *0x15520;
    }
    else {
        pcVar5 = *0x15510;
    }
    if (arg1_00 < pcVar5) {
        do {
            if (*arg1_00 == '\x7f') break;
            fcn.000126f0(arg1_00,CONCAT71(Var3,cVar2));
            if (0xfffd < extraout_RAX - 1U) {
                return extraout_RAX;
            }
            iVar4 = iVar4 + extraout_RAX;
            arg1_00 = arg1_00 + (extraout_RAX & 0xffff);
        } while (arg1_00 < pcVar5);
    }
    fcn.000126f0(arg1_00,CONCAT71(Var3,cVar2));
    uVar1 = extraout_RAX_00;
    if (extraout_RAX_00 - 1U < 0xfffe) {
        uVar1 = extraout_RAX_00 + iVar4;
    }
    return uVar1;
}


/* fcn.000126f0 @ 0x126f0 */

int64_t fcn.000126f0(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *(arg1 + 1) + arg1;
    if (*piVar1 != 0) {
        iVar2 = piVar1 - arg1;
        do {
            piVar1 = piVar1 + 1;
            iVar2 = iVar2 + 1;
            if (arg2 == '\0') {
                if (iVar2 == 0xfffd) {
                    return 0xffff;
                }
            }
            else if (*0x15510 <= piVar1) {
                return 0;
            }
        } while (*piVar1 != 0);
    }
    return piVar1 + (2 - arg1);
}


/* fcn.00013d00 @ 0x13d00 */

void fcn.00013d00(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013cd0(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011180(arg1_00,arg2,arg1);
    }
    return;
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


/* fcn.00014018 @ 0x14018 */

void fcn.00014018(int64_t arg1)

{
    if (arg1 == '\0') {
        if (*0x151b2 == 0xff) {
            return;
        }
        *0xc0000080 = *0x151b2;
        *0xc0000085 = *0x151b1;
        *0xc0000086 = *0x151b0;
    }
    else {
        *0x151b2 = *0xc0000080;
        *0xc0000080 = *0xc0000080 | 0x30;
        *0x151b1 = *0xc0000085;
        *0x151b0 = *0xc0000086;
        *0xc0000085 = *0xc0000085 | 0x33;
        *0xc0000086 = *0xc0000086 | 0x33;
    }
    return;
}


/* fcn.00013ba4 @ 0x13ba4 */

ushort fcn.00013ba4(int64_t arg1)

{
    uchar uVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t auStack_28 [10];
    uint16_t uStack_1e;
    
    if (*0x15500 == 0) {
        uVar2 = 0x82;
    }
    else {
        iVar4 = 0x10;
        if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 2),0x10), iVar3 == 0)) {
            if (auStack_28 != *(arg1 + 2)) {
                fcn.00011180(auStack_28,*(arg1 + 2),0x10);
            }
            if (auStack_28[0] < 7) {
                if ((auStack_28[0] == 3) || (4 < auStack_28[0])) {
                    iVar4 = uStack_1e + 0x10;
                }
                if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 2),iVar4), iVar3 == 0)) {
                    iVar3 = *(arg1 + 2);
                    uVar1 = *(arg1 + 0x12);
                    iVar4 = fcn.00013d00(iVar4,iVar3);
                    if (iVar4 != 0) {
                        uVar2 = fcn.000138c0(iVar4,CONCAT71(iVar3 >> 8,uVar1));
                        fcn.00013d40(iVar4);
                        return uVar2;
                    }
                }
            }
        }
        uVar2 = 0x84;
    }
    return uVar2;
}


/* fcn.0001261c @ 0x1261c */

ulong fcn.0001261c(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    
    if (*0x15500 == 0) {
        return 0x82;
    }
    if (*0x153d8 != NULL) {
        uVar4 = 0;
        iVar3 = (***0x153d8)(*(arg1 + 2),2);
        if (iVar3 == 0) {
            *0x154f8 = fcn.000124c4(*(arg1 + 2));
            if (*0x154f8 == NULL) {
                return 0x83;
            }
            uVar2 = fcn.000126f0(*0x154f8,CONCAT71(uVar4 >> 8,1));
            uVar5 = uVar2;
            if ((((uVar2 != 0) && (uVar2 != 0xffff)) && (*0x153d8 != NULL)) &&
               (iVar3 = (***0x153d8)(*(arg1 + 10),uVar2), iVar3 == 0)) {
                puVar6 = *(arg1 + 10);
                do {
                    uVar1 = **0x154f8;
                    *0x154f8 = *0x154f8 + 1;
                    *puVar6 = uVar1;
                    puVar6 = puVar6 + 1;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
                return 0;
            }
        }
    }
    return 0x84;
}


/* fcn.00012314 @ 0x12314 */

ulong fcn.00012314(int64_t arg1)

{
    ushort uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    if (*0x15500 == 0) {
        uVar2 = 0x82;
    }
    else {
        if ((((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 2),1), iVar3 == 0)) &&
            (**(arg1 + 2) = 0x35, *0x153d8 != NULL)) && (iVar3 = (***0x153d8)(*(arg1 + 10),2), iVar3 == 0)) {
            uVar1 = fcn.0001282c(*0x15500);
            **(arg1 + 10) = uVar1;
            if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 0x12),2), iVar3 == 0)) {
                uVar1 = fcn.00012880(*0x15500);
                **(arg1 + 0x12) = uVar1;
                if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 0x1a),8), iVar3 == 0)) {
                    if (*0x15348 == 0) {
                        **(arg1 + 0x1a) = *0x15500;
                    }
                    else {
                        **(arg1 + 0x1a) = *0x15348;
                    }
                    if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 0x22),2), iVar3 == 0)) {
                        **(arg1 + 0x22) = *0x15520;
                        return 0;
                    }
                }
            }
        }
        uVar2 = 0x84;
    }
    return uVar2;
}


/* fcn.00013ac8 @ 0x13ac8 */

ushort fcn.00013ac8(int64_t arg1)

{
    uchar uVar1;
    ushort uVar2;
    int64_t iVar3;
    uint64_t arg2;
    int64_t iVar4;
    uint8_t auStack_28 [10];
    uint16_t uStack_1e;
    
    if (*0x15500 == 0) {
        uVar2 = 0x82;
    }
    else {
        iVar4 = 0x10;
        if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 2),0x10), iVar3 == 0)) {
            if (auStack_28 != *(arg1 + 2)) {
                fcn.00011180(auStack_28,*(arg1 + 2),0x10);
            }
            if (auStack_28[0] < 7) {
                if ((auStack_28[0] == 3) || (4 < auStack_28[0])) {
                    iVar4 = uStack_1e + 0x10;
                }
                if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 2),iVar4), iVar3 == 0)) {
                    arg2 = *(arg1 + 2);
                    uVar1 = *(arg1 + 10);
                    iVar4 = fcn.00013d00(iVar4,arg2);
                    if (iVar4 != 0) {
                        uVar2 = fcn.000138c0(iVar4,CONCAT71(arg2 >> 8,uVar1));
                        fcn.00013d40(iVar4);
                        return uVar2;
                    }
                }
            }
        }
        uVar2 = 0x84;
    }
    return uVar2;
}


/* fcn.00012550 @ 0x12550 */

ulong fcn.00012550(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uchar *puVar6;
    
    if (*0x15500 == 0) {
        uVar3 = 0x82;
    }
    else {
        if (*0x153d8 != NULL) {
            uVar3 = 0;
            iVar4 = (***0x153d8)(*(arg1 + 2),2);
            if (iVar4 == 0) {
                *0x154f8 = fcn.000124c4(*(arg1 + 2));
                if (*0x154f8 == NULL) {
                    return 0x83;
                }
                uVar2 = fcn.000126f0(*0x154f8,CONCAT71(uVar3 >> 8,1));
                uVar5 = uVar2;
                if ((((uVar2 != 0) && (uVar2 != 0xffff)) && (*0x153d8 != NULL)) &&
                   (iVar4 = (***0x153d8)(*(arg1 + 6),uVar2), iVar4 == 0)) {
                    puVar6 = *(arg1 + 6);
                    do {
                        uVar1 = **0x154f8;
                        *0x154f8 = *0x154f8 + 1;
                        *puVar6 = uVar1;
                        puVar6 = puVar6 + 1;
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                    return 0;
                }
            }
        }
        uVar3 = 0x84;
    }
    return uVar3;
}


/* fcn.000121e0 @ 0x121e0 */

ulong fcn.000121e0(int64_t arg1)

{
    ushort uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    if (CONCAT44(*0x15504,*0x15500) == 0) {
        uVar2 = 0x82;
    }
    else {
        if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 2),1), iVar3 == 0)) {
            **(arg1 + 2) = 0x28;
            if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 6),2), iVar3 == 0)) {
                uVar1 = fcn.0001282c(*0x15500);
                **(arg1 + 6) = uVar1;
                if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 10),2), iVar3 == 0)) {
                    uVar1 = fcn.00012880(*0x15500);
                    **(arg1 + 10) = uVar1;
                    if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 0xe),4), iVar3 == 0)) {
                        if (*0x15350 == 0) {
                            **(arg1 + 0xe) = *0x15500;
                        }
                        else {
                            **(arg1 + 0xe) = *0x15350;
                        }
                        if ((*0x153d8 != NULL) && (iVar3 = (***0x153d8)(*(arg1 + 0x12),2), iVar3 == 0)) {
                            **(arg1 + 0x12) = *0x15520;
                            return 0;
                        }
                    }
                }
            }
        }
        uVar2 = 0x84;
    }
    return uVar2;
}


/* fcn.00014140 @ 0x14140 */

int64_t fcn.00014140(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011ca0 @ 0x11ca0 */

int64_t fcn.00011ca0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x15310 + 0x20))();
    if (-1 < iVar1) {
        iVar1 = (**(*0x15310 + 0x10))(arg1,arg3,arg2);
        (**(*0x15310 + 0x28))();
    }
    return iVar1;
}


/* fcn.0001282c @ 0x1282c */

uint64_t fcn.0001282c(uint32_t arg1)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    char *arg1_00;
    uint64_t in_RDX;
    uint64_t uVar2;
    char *pcVar3;
    
    uVar2 = 1;
    pcVar3 = *0x15510;
    for (arg1_00 = CONCAT44(in_register_0000000c,arg1); (arg1_00 < pcVar3 && (*arg1_00 != '\x7f'));
        arg1_00 = arg1_00 + in_RDX) {
        uVar2 = uVar2 + 1;
        uVar1 = fcn.000126f0(arg1_00,CONCAT71(in_RDX >> 8,1));
        in_RDX = uVar1;
        if (0xfffd < uVar1 - 1) {
            return 0;
        }
    }
    return uVar2 & 0xffff;
}


/* fcn.00012880 @ 0x12880 */

uint16_t fcn.00012880(uint32_t arg1)

{
    int16_t *piVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint in_register_0000000c;
    int16_t *piVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    while ((piVar1 < *0x15510 && (*piVar1 != '\x7f'))) {
        for (piVar4 = piVar1 + *(piVar1 + 1); *piVar4 != 0; piVar4 = piVar4 + 1) {
        }
        piVar4 = piVar4 + 1;
        uVar3 = piVar4 - piVar1;
        piVar1 = piVar4;
        if (uVar2 < uVar3) {
            uVar2 = uVar3;
        }
    }
    return uVar2;
}


/* fcn.000124c4 @ 0x124c4 */

char * fcn.000124c4(int64_t arg1)

{
    uint16_t uVar1;
    char *arg1_00;
    char *in_RDX;
    char *pcVar2;
    
    if ((*0x15500 != NULL) && (*0x154f8 = *0x15500, arg1_00 = *0x15500, pcVar2 = *0x15510, *0x15500 < *0x15510)) {
        do {
            *0x154f8 = arg1_00;
            uVar1 = fcn.000126f0(arg1_00,CONCAT71(in_RDX >> 8,1));
            if (uVar1 == 0) {
                return NULL;
            }
            if (uVar1 == 0xffff) {
                return NULL;
            }
            in_RDX = arg1_00 + uVar1;
            if (*(arg1_00 + 2) == *arg1) {
                if ((in_RDX < pcVar2) && (*arg1_00 != '\x7f')) {
                    *arg1 = *(in_RDX + 2);
                }
                else {
                    *arg1 = -1;
                }
                return arg1_00;
            }
            arg1_00 = in_RDX;
            *0x154f8 = in_RDX;
        } while (in_RDX < pcVar2);
    }
    return NULL;
}


/* fcn.0001245c @ 0x1245c */

char * fcn.0001245c(int64_t arg1)

{
    uint16_t uVar1;
    char *arg1_00;
    uint64_t in_RDX;
    char *pcVar2;
    
    if (*0x15500 != NULL) {
        pcVar2 = *0x15510;
        for (arg1_00 = *0x15500; (*0x154f8 = arg1_00, arg1_00 < pcVar2 && (*arg1_00 != '\x7f'));
            arg1_00 = arg1_00 + uVar1) {
            uVar1 = fcn.000126f0(arg1_00,CONCAT71(in_RDX >> 8,1));
            in_RDX = uVar1;
            if (uVar1 == 0) {
                return NULL;
            }
            if (uVar1 == 0xffff) {
                return NULL;
            }
            if (*(arg1_00 + 2) == *arg1) {
                return arg1_00;
            }
        }
    }
    return NULL;
}


/* fcn.0001273c @ 0x1273c */

uint64_t fcn.0001273c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint64_t in_RAX;
    uint64_t uVar2;
    char *arg1_00;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    
    uVar4 = 0;
    uVar2 = in_RAX;
    if (*0x15500 != NULL) {
        uVar3 = arg1;
        pcVar6 = *0x15510;
        for (arg1_00 = *0x15500; (uVar2 = in_RAX, *0x154f8 = arg1_00, arg1_00 < pcVar6 && (*arg1_00 != '\x7f'));
            arg1_00 = arg1_00 + in_RAX) {
            uVar5 = uVar4 + 1U & 0xff;
            if (*arg1_00 != '\x03') {
                uVar5 = uVar4;
            }
            if (*(arg1_00 + 2) == arg1) {
                return uVar5;
            }
            uVar1 = fcn.000126f0(arg1_00,CONCAT71(uVar3 >> 8,1));
            in_RAX = uVar1;
            uVar2 = uVar1 - 1;
            if (0xfffd < uVar1 - 1) break;
            uVar4 = uVar5 & 0xff;
            uVar3 = in_RAX;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00012a18 @ 0x12a18 */

uint8_t * fcn.00012a18(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    bool bVar3;
    uint8_t uVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    uint in_register_0000000c;
    uint8_t *puVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    uint8_t uVar11;
    
    puVar8 = CONCAT44(in_register_0000000c,arg1);
    uVar11 = 0;
    puVar6 = NULL;
    uVar1 = puVar8[arg2 & 0xff];
    uVar4 = *puVar8;
    if (uVar4 < 5) {
code_r0x00012a36:
        if (uVar4 == 0xff) {
            puVar5 = puVar6;
            goto code_r0x00012a75;
        }
    }
    else if (uVar4 == 0x16) {
        uVar4 = 5;
    }
    else {
        if (uVar4 != 0x27) {
            uVar4 = 0xff;
            goto code_r0x00012a36;
        }
        uVar4 = 6;
    }
    puVar5 = *(uVar4 * 8 + 0x152b0);
code_r0x00012a75:
    for (; uVar4 = *puVar5, uVar4 != 0xff; puVar5 = puVar5 + 3) {
        uVar2 = puVar8[uVar4];
        if (uVar1 < uVar2) {
            puVar8[uVar4] = uVar2 - 1;
        }
        if (uVar2 == uVar1) {
            puVar8[*puVar5] = 0;
        }
    }
    puVar8 = puVar8 + puVar8[1];
    puVar5 = puVar8;
    while (uVar1 = uVar1 - 1, uVar1 != 0) {
        for (; *puVar5 != 0; puVar5 = puVar5 + 1) {
        }
        puVar5 = puVar5 + 1;
    }
    puVar8 = puVar8 + (puVar5 - puVar8);
    uVar1 = *puVar8;
    while (uVar1 != 0) {
        puVar6 = puVar6 + 1;
        uVar1 = puVar6[puVar8];
    }
    puVar6 = puVar6 + puVar8;
    puVar5 = puVar6 + 1;
    for (; *puVar6 != 0; puVar6 = puVar6 + 1) {
    }
    puVar8[0] = 0x20;
    puVar8[1] = 0;
    puVar6 = puVar6 + (2 - puVar5);
    puVar8 = puVar8 + 2;
    bVar3 = false;
    uVar7 = puVar5 - puVar8;
    puVar10 = puVar8;
    if (puVar5 < puVar8) {
        uVar7 = -uVar7;
        if (puVar8 <= puVar5 + puVar6) {
            puVar10 = puVar8 + puVar6;
            bVar3 = true;
            uVar11 = 1;
            puVar5 = puVar5 + puVar6;
        }
    }
    if ((0x7 < puVar6) && (7 < uVar7)) {
        uVar7 = puVar5 & 7;
        uVar9 = puVar10 & 7;
        if (bVar3) {
            puVar5 = puVar5 + -1;
            puVar10 = puVar10 + -1;
        }
        if ((uVar7 == uVar9) && (uVar7 != 0)) {
            if (!bVar3) {
                uVar7 = 8 - uVar7;
            }
            puVar6 = puVar6 + -uVar7;
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar10 = *puVar5;
                puVar5 = puVar5 + uVar11 * -2 + 1;
                puVar10 = puVar10 + uVar11 * -2 + 1;
            }
        }
        if (bVar3) {
            puVar5 = puVar5 + -7;
            puVar10 = puVar10 + -7;
        }
        for (uVar7 = puVar6 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + uVar11 * -0x10 + 8;
            puVar10 = puVar10 + uVar11 * -0x10 + 8;
        }
        puVar6 = puVar6 & 7;
        if (puVar6 == NULL) {
            return puVar8;
        }
        if (bVar3) {
            puVar5 = puVar5 + 8;
            puVar10 = puVar10 + 8;
        }
    }
    if (bVar3) {
        puVar5 = puVar5 + -1;
        puVar10 = puVar10 + -1;
    }
    for (; puVar6 != NULL; puVar6 = puVar6 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + uVar11 * -2 + 1;
        puVar10 = puVar10 + uVar11 * -2 + 1;
    }
    return puVar8;
}


/* fcn.000128d0 @ 0x128d0 */

ulong fcn.000128d0(void)

{
    int16_t iVar1;
    ushort uVar2;
    uint16_t uVar3;
    char *pcVar4;
    char cVar5;
    uint32_t arg1;
    int iVar6;
    uint64_t uVar7;
    char cVar8;
    int16_t iVar9;
    uint64_t uVar10;
    
    iVar6 = 0;
    arg1 = *0x15500;
    iVar1 = fcn.000127b8(arg1,0);
    uVar10 = iVar6 + 1U;
    iVar9 = iVar6 + 1U;
    if (iVar1 - iVar9 < 0xfffe) {
        uVar7 = iVar6 + 0xf;
        cVar8 = '\0';
        *(*0x15338 + 0x16) = iVar1;
        cVar5 = '\0';
        (*0x15338)[0x15] = '\0';
        pcVar4 = *0x15338 + 0x10;
        do {
            cVar5 = cVar5 + *pcVar4;
            pcVar4 = pcVar4 + uVar10;
            uVar7 = uVar7 - uVar10;
        } while (uVar7 != 0);
        (*0x15338)[0x15] = -cVar5;
        uVar2 = fcn.00012880(arg1);
        *(*0x15338 + 8) = uVar2;
        (*0x15338)[4] = '\0';
        cVar5 = '\0';
        if ((*0x15338)[5] != '\0') {
            uVar7 = (*0x15338)[5];
            pcVar4 = *0x15338;
            cVar5 = '\0';
            do {
                cVar5 = cVar5 + *pcVar4;
                pcVar4 = pcVar4 + uVar10;
                uVar7 = uVar7 - uVar10;
            } while (uVar7 != 0);
        }
        (*0x15338)[4] = -cVar5;
        if (*0x15328 != 0) {
            fcn.00014140(*0x15328,*0x15338,0x1f);
            arg1 = *0x15500;
        }
        uVar3 = fcn.000127b8(arg1,0);
        if (uVar3 - iVar9 < 0xfffe) {
            *(*0x15320 + 0xc) = uVar3;
            (*0x15320)[5] = '\0';
            if ((*0x15320)[6] != '\0') {
                uVar7 = (*0x15320)[6];
                pcVar4 = *0x15320;
                do {
                    cVar8 = cVar8 + *pcVar4;
                    pcVar4 = pcVar4 + uVar10;
                    uVar7 = uVar7 - uVar10;
                } while (uVar7 != 0);
            }
            (*0x15320)[5] = -cVar8;
            return 0;
        }
    }
    return 0x95;
}


/* fcn.00013014 @ 0x13014 */

void fcn.00013014(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ushort uVar2;
    
    uVar2 = 0;
    *arg3 = *(arg2 + 0xc);
    *(arg3 + 1) = *(arg2 + 1);
    *(arg3 + 2) = 0x8000;
    *(arg3 + 4) = 9;
    cVar1 = *arg2;
    if (cVar1 == '\0') {
        uVar2 = 1;
    }
    else if (cVar1 == '\x01') {
        uVar2 = 2;
    }
    else if (cVar1 == '\x02') {
        uVar2 = 4;
    }
    else if (cVar1 != '\x04') {
        uVar2 = *(arg2 + 10);
    }
    *(arg3 + 5) = uVar2;
    *(arg3 + 7) = arg1;
    return;
}


/* fcn.00011cfc @ 0x11cfc */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_2fh
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

ulong fcn.00011cfc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    ulong *puVar8;
    char *pcVar9;
    int iVar10;
    char *pcVar11;
    uint32_t uVar12;
    uint16_t uVar13;
    uint32_t uVar14;
    uchar *puVar15;
    uint64_t uVar16;
    ulong *arg1_00;
    uint16_t uStackX_8;
    ulong *puStackX_18;
    ulong *puStackX_20;
    int32_t var_67h;
    int64_t var_77h;
    int64_t var_7fh;
    char *pcStack_98;
    ulong uStack_80;
    int aiStack_78 [4];
    int64_t iStack_68;
    uint uStack_60;
    uint uStack_5c;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int16_t var_31h;
    int64_t var_2fh;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_9h;
    int32_t var_1h;
    int32_t var_3h;
    
    pcVar11 = NULL;
    pcStack_98 = NULL;
    uVar7 = 0;
    iVar2 = *(*0x15518 + 7);
    pcVar9 = *0x15518;
    uVar13 = uVar7;
    if (iVar2 != -1) {
        do {
            if ((((*pcVar9 == *arg1) && (iVar2 == *(arg1 + 7))) && (pcVar9[1] == *(arg1 + 1))) &&
               (pcVar9[3] == *(arg1 + 3))) {
                uVar13 = *(pcVar9 + 5);
                pcVar11 = pcVar9;
            }
            pcVar9 = pcVar9 + *(pcVar9 + 5) + 9;
            iVar2 = *(pcVar9 + 7);
        } while (iVar2 != -1);
        pcStack_98 = pcVar11;
    }
    uVar3 = pcVar9;
    uVar14 = (*0x15518 - uVar3) + *0x15508;
    if (pcStack_98 != NULL) {
        uVar14 = uVar14 + 9 + uVar13;
    }
    if (uVar14 < *(arg1 + 5) + 9) {
        return 0x87;
    }
    iVar5 = 2;
    piVar4 = aiStack_78;
    do {
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        piVar4[0] = 0;
        piVar4[1] = 0;
        *(piVar4 + 2) = 0;
        piVar4 = piVar4 + 6;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (**(*0x15530 + 0x60))(0,6,1,&puStackX_18);
    if (iVar5 < 0) {
        return 0x87;
    }
    *puStackX_18 = *arg1;
    *(puStackX_18 + 1) = *(arg1 + 8);
    puVar15 = puStackX_18 + 9;
    if (*(arg1 + 5) != 0) {
        do {
            uVar16 = uVar7;
            uVar7 = uVar7 + 1;
            *puVar15 = *(uVar16 + arg2);
            puVar15 = puVar15 + 1;
        } while (uVar7 < *(arg1 + 5));
    }
    if (pcStack_98 == NULL) {
        uVar12 = puVar15 - puStackX_18;
        uVar14 = (uVar3 & 0xffff) + uVar12;
        if (uVar14 < 0x10001) {
            uVar16 = puVar15 - puStackX_18;
            puVar8 = puStackX_18;
        }
        else {
            uVar14 = uVar14 - 0x10000;
            iVar5 = fcn.00011ca0(pcVar9,puStackX_18,uVar12 - uVar14);
            if (iVar5 != 0) {
                return 0x87;
            }
            uVar16 = uVar14;
            pcVar9 = (uVar3 & 0xffff0000) + 0x10000;
            puVar8 = (uVar12 - uVar16) + puStackX_18;
        }
        iVar5 = fcn.00011ca0(pcVar9,puVar8,uVar16);
        (**(*0x15530 + 0x68))(puStackX_18,1);
        if (iVar5 == 0) {
            return 0;
        }
        return 0x87;
    }
    iVar5 = (**(*0x15530 + 0x60))(0,6,0xb,&puStackX_20);
    if (-1 < iVar5) {
        *puStackX_20 = 0xa01a;
        iVar5 = (***0x15528)(puStackX_20);
        if (iVar5 != 0) {
            (**(*0x15530 + 0x68))(puStackX_18,1);
            uVar3 = 0xb;
code_r0x00011eb3:
            puStackX_18 = puStackX_20;
            goto code_r0x00011e74;
        }
        iVar10 = 1;
        uVar16 = 0;
        uStackX_8 = 1;
        if (*(puStackX_20 + 6) != 0) {
            do {
                if (pcStack_98 + 0x1000000U <= *(puStackX_20 + uVar16 * 9 + 0x1e) + *(puStackX_20 + uVar16 * 9 + 0x1a))
                {
                    aiStack_78[1] = *(puStackX_20 + uVar16 * 9 + 0x1e);
                    aiStack_78[0] = *(puStackX_20 + uVar16 * 9 + 0x1a);
                    if (*(uVar16 * 9 + 0x23 + puStackX_20) < *0x15518 + 0x1000800U) {
                        iVar10 = 2;
                        uVar3 = uVar16 + 1;
                        uStackX_8 = 2;
                        uStack_5c = *(puStackX_20 + uVar3 * 9 + 0x1e);
                        uStack_60 = *(puStackX_20 + uVar3 + 0x1a + uVar3 * 8);
                    }
                    break;
                }
                uVar13 = uVar16 + 1;
                uVar16 = uVar13;
            } while (uVar13 < *(puStackX_20 + 6));
        }
        iVar1 = aiStack_78[1];
        (**(*0x15530 + 0x68))(puStackX_20,0xb);
        uVar3 = iVar10 * iVar1 >> 0xc;
        iVar5 = (**(*0x15530 + 0x60))(0,6,uVar3,&puStackX_20);
        puVar8 = puStackX_20;
        if (-1 < iVar5) {
            iStack_68 = iVar1 + puStackX_20;
            uVar13 = 0;
            do {
                iVar5 = (***0x15310)(aiStack_78[uVar13 * 6] + -0x1000000,aiStack_78[uVar13 * 6 + 1]);
                iVar6 = 0;
                if (iVar5 != 0) {
                    (**(*0x15530 + 0x68))(puStackX_18,1);
                    goto code_r0x00011eb3;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < iVar10);
            iVar5 = 0x800;
            do {
                iVar6 = iVar6 + 1;
                *(iVar6 + puStackX_18) = 0xff;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            pcVar9 = CONCAT44(*0x1551c,*0x15518);
            iVar2 = *(pcVar9 + 5);
            arg1_00 = puStackX_18;
            if (iVar2 != -1) {
                do {
                    if (iVar2 == 0) break;
                    if (((*pcVar9 == *arg1) && (*(pcVar9 + 7) == *(arg1 + 7))) && (pcVar9[1] == *(arg1 + 1))) {
                        fcn.00014140(arg1_00,arg1,9);
                        uVar13 = *(arg1 + 5);
                        fcn.00014140(arg1_00 + 9,arg2,uVar13);
                        uVar13 = uVar13 + 9;
                    }
                    else {
                        uVar13 = iVar2 + 9;
                        fcn.00014140(arg1_00,pcVar9,uVar13);
                    }
                    pcVar9 = pcVar9 + *(pcVar9 + 5) + 9;
                    iVar2 = *(pcVar9 + 5);
                    arg1_00 = arg1_00 + uVar13;
                } while (iVar2 != -1);
                pcVar9 = CONCAT44(*0x1551c,*0x15518);
            }
            fcn.00014140((pcStack_98 - aiStack_78[0]) + 0x1000000 + puVar8,
                         ((pcStack_98 & 0xffffffff) - (pcVar9 & 0xffffffff)) + puStackX_18,
                         (pcVar9 - pcStack_98) + 0x800);
            uVar13 = 0;
            do {
                uVar16 = uVar13;
                iVar5 = (*(*0x15310)[3])(aiStack_78[uVar16 * 6] + -0x1000000,aiStack_78[uVar16 * 6 + 1],
                                         *(aiStack_78 + uVar16 * 6 + -2));
                if (iVar5 < 0) break;
                uVar13 = uVar13 + 1;
            } while (uVar13 < uStackX_8);
            (**(*0x15530 + 0x68))(puStackX_20,uVar3);
            return 0;
        }
    }
    uVar3 = 1;
code_r0x00011e74:
    (**(*0x15530 + 0x68))(puStackX_18,uVar3);
    return 0x87;
}


/* fcn.00012ae8 @ 0x12ae8 */

ulong fcn.00012ae8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t arg1_00;
    uint8_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int16_t iVar6;
    uint8_t *puVar7;
    char *pcVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    int64_t iVar12;
    int16_t *piVar13;
    char *pcVar14;
    int16_t *arg1_01;
    uint8_t *puVar15;
    uint8_t uVar16;
    char cVar17;
    uint in_R8;
    int16_t *piVar18;
    uint64_t uVar19;
    uint8_t *puVar20;
    ushort auStackX_8 [4];
    uint8_t *puStackX_10;
    uint8_t *puStackX_18;
    
    puVar11 = CONCAT44(in_R8,arg3);
    auStackX_8[0] = arg1;
    puVar15 = NULL;
    uVar1 = *puVar11;
    puVar10 = puVar15;
    while (uVar1 != 0) {
        puVar10 = puVar10 + 1;
        uVar1 = puVar10[puVar11];
    }
    if (*0x15520 - *0x15340 < puVar10 + 1) {
        return 0x84;
    }
    iVar12 = arg2;
    puStackX_10 = arg2;
    puVar10 = fcn.0001245c(auStackX_8);
    if (puVar10 == NULL) {
        return 0x83;
    }
    if (*puVar10 < 5) {
        uVar1 = *puVar10;
code_r0x00012b87:
        if (uVar1 == 0xff) goto code_r0x00012b97;
    }
    else if (*puVar10 == 0x16) {
        uVar1 = 5;
    }
    else {
        if (*puVar10 != 0x27) {
            uVar1 = 0xff;
            goto code_r0x00012b87;
        }
        uVar1 = 6;
    }
    puVar15 = *(uVar1 * 8 + 0x152b0);
code_r0x00012b97:
    puStackX_18 = puVar10;
    if (*puVar10 == 3) {
        uVar1 = fcn.0001273c(0x152b0,arg1 & 0xffff);
        iVar12 = (uVar1 + uVar1 * 2) * 2 + -6;
        puVar15 = puVar15 + iVar12 * 3;
    }
    arg1_00 = *0x15330;
    if ((puVar15 == NULL) || (uVar3 = fcn.000126f0(puVar10,CONCAT71(iVar12 >> 8,1)), 0xfffd < uVar3 - 1)) {
        return 0x84;
    }
    puVar9 = puVar10;
    fcn.00014140(arg1_00,puVar10,uVar3);
    uVar19 = 0;
    puVar7 = puVar10;
    if (*puVar15 != 0xff) {
        puVar7 = puVar15;
        do {
            puVar20 = NULL;
            uVar1 = *(arg2 + 1);
            if (*puVar7 == uVar1) {
                puVar7 = puVar20;
                if (*puVar11 != 0) {
                    do {
                        puVar7 = puVar7 + 1;
                    } while (puVar7[puVar11] != 0);
                    if (puVar7 != NULL) {
                        cVar17 = *(uVar1 + arg1_00);
                        if (cVar17 == '\0') {
                            uVar2 = *arg2;
                            uVar16 = 0;
                            if (uVar2 < 5) {
code_r0x00012c71:
                                if (uVar2 != 0xff) goto code_r0x00012c75;
                                puVar9 = puVar20;
                            }
                            else {
                                if (uVar2 == 0x16) {
                                    uVar2 = 5;
                                }
                                else {
                                    if (uVar2 != 0x27) {
                                        uVar2 = 0xff;
                                        goto code_r0x00012c71;
                                    }
                                    uVar2 = 6;
                                }
code_r0x00012c75:
                                puVar9 = *(uVar2 * 8 + 0x152b0);
                            }
                            if (puVar9 == NULL) {
                                cVar17 = -1;
                            }
                            else {
                                while (uVar2 = *puVar9, uVar2 != 0xff) {
                                    puVar9 = puVar9 + 3;
                                    uVar2 = *(uVar2 + arg1_00);
                                    if (uVar16 < uVar2) {
                                        uVar16 = uVar2;
                                    }
                                }
                                cVar17 = uVar16 + 1;
                                *(uVar1 + arg1_00) = cVar17;
                            }
                        }
                        pcVar14 = *(arg1_00 + 1) + arg1_00;
                        pcVar8 = pcVar14;
                        while (cVar17 = cVar17 + -1, cVar17 != '\0') {
                            for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
                            }
                            pcVar8 = pcVar8 + 1;
                        }
                        arg1_01 = pcVar14 + (pcVar8 - pcVar14);
                        cVar17 = *arg1_01;
                        piVar13 = arg1_01;
                        while (cVar17 != '\0') {
                            piVar13 = piVar13 + 1;
                            cVar17 = *piVar13;
                        }
                        iVar6 = *arg1_01;
                        piVar18 = arg1_01;
                        while (iVar6 != 0) {
                            piVar18 = piVar18 + 1;
                            iVar6 = *piVar18;
                        }
                        uVar1 = *puVar11;
                        puVar9 = puVar11;
                        while (uVar1 != 0) {
                            puVar9 = puVar9 + 1;
                            puVar20 = puVar20 + 1;
                            uVar1 = *puVar9;
                        }
                        fcn.00014140(puVar20 + 1 + arg1_01,piVar13 + 1,piVar18 + (2 - (piVar13 + 1)));
                        puVar9 = puVar11;
                        fcn.00014140(arg1_01,puVar11,puVar20 + 1);
                        arg2 = puStackX_10;
                        goto code_r0x00012d6c;
                    }
                }
                puVar9 = CONCAT71(puVar9 >> 8,uVar1);
                fcn.00012a18(arg1_00,puVar9);
            }
code_r0x00012d6c:
            uVar19 = uVar19 + 1;
            puVar7 = puVar15 + uVar19 * 3;
        } while (*puVar7 != 0xff);
        puVar7 = puStackX_18;
    }
    puVar11 = NULL;
    while( true ) {
        uVar1 = *puVar15;
        if (uVar1 == 0xff) break;
        puVar15 = puVar15 + 3;
        uVar1 = *(uVar1 + arg1_00);
        if (puVar11 < uVar1) {
            puVar11 = uVar1;
        }
        puVar9 = puVar11;
    }
    pcVar8 = *(arg1_00 + 1) + arg1_00;
    if (puVar11 != 0) {
        do {
            for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
            }
            pcVar8 = pcVar8 + 1;
            puVar11 = puVar11 + -1;
        } while (puVar11 != NULL);
    }
    *pcVar8 = '\0';
    uVar4 = fcn.000127b8(puVar10 + uVar3,CONCAT71(puVar9 >> 8,1));
    if ((uVar4 - 1 < 0xfffe) && (uVar5 = fcn.000126f0(arg1_00,0), uVar5 - 1 < 0xfffe)) {
        fcn.00014140(uVar5 + arg1_00,puVar10 + uVar3,uVar4);
        iVar6 = fcn.000126f0(arg1_00,0);
        if (iVar6 - 1U < 0xfffe) {
            fcn.00014140(puVar7,arg1_00,iVar6 + uVar4);
            fcn.000128d0();
            return 0;
        }
    }
    return 0x95;
}


/* fcn.00012e70 @ 0x12e70 */

ulong fcn.00012e70(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    char *arg2_00;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    uint16_t uVar7;
    int64_t iVar8;
    uint16_t uVar9;
    char *arg2_01;
    uint8_t uVar10;
    uint32_t uVar11;
    uchar *arg1_00;
    ushort auStackX_8 [4];
    int64_t iStackX_10;
    
    auStackX_8[0] = arg1;
    iStackX_10 = arg2;
    arg2_00 = fcn.0001245c(auStackX_8);
    iVar8 = *0x15330;
    if (arg2_00 == NULL) {
        uVar4 = 0x83;
    }
    else {
        iVar5 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            iVar5 = iVar5 + 1;
            cVar1 = *(iVar5 + arg3);
        }
        if (*0x15520 - *0x15340 < iVar5 + 1U) {
            uVar4 = 0x84;
        }
        else {
            uVar3 = arg2_00[1];
            pcVar6 = arg2_00;
            fcn.00014140(*0x15330,arg2_00,uVar3);
            iVar5 = iStackX_10;
            arg2_01 = arg2_00 + uVar3;
            uVar11 = *(iVar8 + 4) + 1;
            arg1_00 = iVar8 + uVar3;
            uVar10 = 1;
            if (1 < uVar11) {
                do {
                    iVar8 = 0;
                    cVar1 = *arg2_01;
                    while (cVar1 != '\0') {
                        iVar8 = iVar8 + 1;
                        cVar1 = arg2_01[iVar8];
                    }
                    uVar7 = iVar8 + 1;
                    if (*(iVar5 + 1) == uVar10) {
                        iVar8 = 0;
                        cVar1 = *arg3;
                        while (cVar1 != '\0') {
                            iVar8 = iVar8 + 1;
                            cVar1 = *(iVar8 + arg3);
                        }
                        uVar9 = iVar8 + 1;
                        pcVar6 = arg3;
                        fcn.00014140(arg1_00,arg3,uVar9);
                    }
                    else {
                        pcVar6 = arg2_01;
                        fcn.00014140(arg1_00,arg2_01,uVar7);
                        uVar9 = uVar7;
                    }
                    uVar10 = uVar10 + 1;
                    arg2_01 = arg2_01 + uVar7;
                    arg1_00 = arg1_00 + uVar9;
                } while (uVar10 < uVar11);
            }
            *arg1_00 = 0;
            uVar7 = fcn.000127b8(arg2_01 + 1,CONCAT71(pcVar6 >> 8,1));
            if (uVar7 - 1 < 0xfffe) {
                fcn.00014140(arg1_00 + 1,arg2_01 + 1,uVar7);
                iVar8 = *0x15330;
                iVar2 = fcn.000126f0(*0x15330,0);
                if (iVar2 - 1U < 0xfffe) {
                    fcn.00014140(arg2_00,iVar8,iVar2 + uVar7);
                    fcn.000128d0();
                    return 0;
                }
            }
            uVar4 = 0x95;
        }
    }
    return uVar4;
}


/* fcn.0001366c @ 0x1366c */

ulong fcn.0001366c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    uint16_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    unkbyte7 Var6;
    uchar *arg2_00;
    char *arg1_00;
    char *pcVar7;
    uchar auStackX_8 [8];
    uchar uStack_28;
    uchar uStack_27;
    ushort uStack_26;
    uchar uStack_24;
    uint16_t uStack_23;
    ushort uStack_21;
    
    cVar1 = arg2;
    iVar4 = fcn.0001245c(arg1 + 0xe);
    if (iVar4 == 0) {
        pcVar7 = *0x15510;
        for (arg1_00 = *0x15500; (Var6 = arg2 >> 8, arg1_00 < pcVar7 && (*arg1_00 != '\x7f'));
            arg1_00 = arg1_00 + uVar3) {
            arg2 = CONCAT71(Var6,1);
            uVar3 = fcn.000126f0(arg1_00,arg2);
            if (0xfffd < uVar3 - 1) goto code_r0x000137b6;
        }
        iVar2 = fcn.000126f0(arg1_00,CONCAT71(Var6,1));
        if ((iVar2 - 1U < 0xfffe) && (uStack_23 = *(arg1 + 10), uStack_23 <= *0x15520 - *0x15340)) {
            if (cVar1 != '\0') {
                arg2_00 = arg1 + 0xc;
                uStack_28 = *arg2_00;
                uStack_27 = *(arg1 + 1);
                uStack_21 = *(arg1 + 0xe);
                uStack_26 = 0x8400;
                uStack_24 = 9;
                uVar5 = fcn.00011cfc(&uStack_28,arg2_00);
                if (uVar5 != 0) {
                    return uVar5;
                }
                fcn.00014140(auStackX_8,arg1_00,4);
                fcn.00014140(arg1_00,arg2_00,*(arg1 + 10));
                uVar3 = fcn.000126f0(arg1_00,CONCAT71(arg2_00 >> 8,1));
                if (0xfffd < uVar3 - 1) {
                    return 0x95;
                }
                fcn.00014140(arg1_00 + uVar3,auStackX_8,4);
                fcn.000128d0();
            }
            uVar5 = 0;
        }
        else {
code_r0x000137b6:
            uVar5 = 0x87;
        }
    }
    else {
        uVar5 = 0x83;
    }
    return uVar5;
}


/* fcn.000137d4 @ 0x137d4 */

uint64_t fcn.000137d4(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint16_t uVar2;
    uchar *arg1_00;
    uint64_t uVar3;
    uchar *puVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uchar uStack_18;
    ushort uStack_17;
    uint uStack_15;
    ushort uStack_11;
    
    arg1_00 = fcn.0001245c(arg1 + 0xe);
    if (arg1_00 == NULL) {
        uVar5 = 0x83;
    }
    else {
        uVar5 = 0;
        if (arg2 != '\0') {
            uStack_11 = *(arg1 + 0xe);
            puVar4 = arg1 + 0xc;
            uStack_18 = *puVar4;
            uStack_17 = 0xff;
            uStack_15 = 0x982;
            uVar3 = fcn.00011cfc(&uStack_18,puVar4);
            if (uVar3 != 0) {
                return uVar3;
            }
            iVar6 = 1;
            uVar2 = fcn.000126f0(arg1_00,CONCAT71(puVar4 >> 8,1));
            if (0xfffd < uVar2 - iVar6) {
                return 0x95;
            }
            puVar4 = arg1_00 + uVar2;
            uVar2 = *0x15510 - puVar4;
            if (uVar2 != 0) {
                uVar3 = uVar2;
                do {
                    uVar1 = *puVar4;
                    puVar4 = puVar4 + iVar6;
                    *arg1_00 = uVar1;
                    arg1_00 = arg1_00 + iVar6;
                    uVar3 = uVar3 - iVar6;
                } while (uVar3 != 0);
            }
            fcn.000128d0();
            uVar5 = 0;
        }
    }
    return uVar5;
}


/* fcn.000134f8 @ 0x134f8 */

ulong fcn.000134f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint8_t uVar5;
    bool bVar6;
    ushort auStackX_8 [4];
    ulong uStack_28;
    uchar uStack_20;
    ulong uStack_18;
    uchar uStack_10;
    
    auStackX_8[0] = arg1;
    uVar5 = *(arg2 + 1);
    if (uVar5 == 4) {
        uVar5 = *arg2;
        bVar6 = uVar5 == 0;
    }
    else {
        if (uVar5 < 5) {
            return 0x84;
        }
        if (uVar5 < 0xc) {
            uVar5 = *arg2;
            bVar6 = uVar5 == 5;
        }
        else {
            if (8 < uVar5 - 0xc) {
                return 0x84;
            }
            if ((uVar5 - 0xc & 1) != 0) {
                return 0x84;
            }
            uVar5 = *arg2;
            bVar6 = uVar5 == 1;
        }
    }
    if (!bVar6) {
        return 0x84;
    }
    if (arg3 != '\0') {
        iVar3 = arg2;
        fcn.00013014(arg1 & 0xffff,arg2,&uStack_28);
        if (uVar5 < 2) {
            *(iVar3 + 0x10) = *(iVar3 + 6);
        }
        iVar2 = fcn.00011cfc(&uStack_28,iVar3 + 0x10);
        if (iVar2 == 0) {
            iVar3 = fcn.0001245c(auStackX_8);
            if (iVar3 != 0) {
                cVar1 = *(arg2 + 1);
                if (cVar1 == '\x04') {
                    *(iVar3 + 4) = *(iVar3 + 4) & *(arg2 + 2);
                    *(iVar3 + 4) = *(iVar3 + 4) | *(arg2 + 6);
                }
                else if (cVar1 == '\f') {
                    *(iVar3 + 0xc) = *(iVar3 + 0xc) & *(arg2 + 2);
                    *(iVar3 + 0xc) = *(iVar3 + 0xc) | *(arg2 + 6);
                }
                else if (cVar1 == '\x0e') {
                    *(iVar3 + 0xe) = *(iVar3 + 0xe) & *(arg2 + 2);
                    *(iVar3 + 0xe) = *(iVar3 + 0xe) | *(arg2 + 6);
                }
                else if (cVar1 == '\x10') {
                    *(iVar3 + 0x10) = *(iVar3 + 0x10) & *(arg2 + 2);
                    *(iVar3 + 0x10) = *(iVar3 + 0x10) | *(arg2 + 6);
                }
                else if (cVar1 == '\x12') {
                    *(iVar3 + 0x12) = *(iVar3 + 0x12) & *(arg2 + 2);
                    *(iVar3 + 0x12) = *(iVar3 + 0x12) | *(arg2 + 6);
                }
                else if (cVar1 == '\x14') {
                    *(iVar3 + 0x14) = *(iVar3 + 0x14) & *(arg2 + 2);
                    *(iVar3 + 0x14) = *(iVar3 + 0x14) | *(arg2 + 6);
                }
            }
            uStack_18 = uStack_28;
            uStack_10 = uStack_20;
            uVar4 = fcn.00012ae8(arg1 & 0xffff,&uStack_18,arg2 + 0x10);
            return uVar4;
        }
        return 0x86;
    }
    return 0;
}


/* fcn.00013438 @ 0x13438 */

uchar fcn.00013438(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uchar uVar1;
    int16_t iVar2;
    uint in_register_00000014;
    char *arg2_00;
    char cVar3;
    uchar uStack_28;
    char cStack_27;
    unkbyte6 Stack_26;
    uchar uStack_20;
    ulong uStack_18;
    uchar uStack_10;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    if (*arg2_00 == '\0') {
        if (arg2_00[1] == '\x04') {
            if (arg3 != '\0') {
                *0x15358 = arg2_00[6];
            }
            return 0;
        }
    }
    else if (((*arg2_00 == '\x05') && (arg2_00[1] == '\x04')) && (*0x15358 != '\0')) {
        if (arg3 == '\0') {
            return 0;
        }
        cVar3 = *0x15358;
        fcn.00013014(arg1 & 0xffff,arg2_00,&uStack_28);
        cStack_27 = cVar3;
        iVar2 = fcn.00011cfc(&uStack_28,arg2_00 + 0x10);
        if (iVar2 == 0) {
            uStack_18 = CONCAT62(Stack_26,CONCAT11(cStack_27,uStack_28));
            uStack_10 = uStack_20;
            uVar1 = fcn.00012e70(arg1 & 0xffff,&uStack_18,arg2_00 + 0x10);
            return uVar1;
        }
        return 0x86;
    }
    return 0x84;
}


/* fcn.0001337c @ 0x1337c */

uchar fcn.0001337c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int16_t iVar2;
    char cVar3;
    uchar uStack_28;
    char cStack_27;
    unkbyte6 Stack_26;
    uchar uStack_20;
    ulong uStack_18;
    uchar uStack_10;
    
    cVar3 = arg3;
    fcn.00013014(arg1,arg2,&uStack_28);
    if (*arg2 == '\0') {
        if (*(arg2 + 1) == '\x04') {
            if (cVar3 != '\0') {
                *0x15359 = *(arg2 + 6);
            }
            return 0;
        }
    }
    else if (((*arg2 == '\x05') && (*(arg2 + 1) == '\x04')) && (*0x15359 != '\0')) {
        if (cVar3 == '\0') {
            return 0;
        }
        cStack_27 = *0x15359;
        iVar2 = fcn.00011cfc(&uStack_28,arg2 + 0x10);
        if (iVar2 == 0) {
            uStack_18 = CONCAT62(Stack_26,CONCAT11(cStack_27,uStack_28));
            uStack_10 = uStack_20;
            uVar1 = fcn.00012e70(arg1 & 0xffff,&uStack_18,arg2 + 0x10);
            return uVar1;
        }
        return 0x86;
    }
    return 0x84;
}


/* fcn.000131e8 @ 0x131e8 */

ulong fcn.000131e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    bool bVar7;
    ushort auStackX_8 [4];
    ulong uStack_28;
    uchar uStack_20;
    ulong uStack_18;
    uchar uStack_10;
    
    auStackX_8[0] = arg1;
    uVar1 = *(arg2 + 1);
    if (uVar1 == 4) {
code_r0x00013288:
        uVar1 = *arg2;
    }
    else {
        if (uVar1 == 5) {
code_r0x00013280:
            uVar1 = *arg2;
            bVar7 = uVar1 == 0;
            goto code_r0x0001328f;
        }
        if (5 < uVar1) {
            if (uVar1 < 9) goto code_r0x00013288;
            if (uVar1 == 0xd) {
                uVar1 = *arg2;
                bVar7 = uVar1 == 2;
                goto code_r0x0001328f;
            }
            if (uVar1 - 0x11 < 2) goto code_r0x00013280;
        }
        uVar1 = fcn.0001273c(arg1,arg1 & 0xffff);
        pcVar6 = ((uVar1 + uVar1 * 2) * 2 + -6) * 3 + 0x150c0;
        if (0x150d1 < pcVar6) {
            return 0x84;
        }
        cVar2 = *pcVar6;
        if (cVar2 == -1) {
            return 0x84;
        }
        do {
            if (cVar2 == *(arg2 + 1)) break;
            pcVar6 = pcVar6 + 3;
            cVar2 = *pcVar6;
        } while (cVar2 != -1);
        if (*pcVar6 == -1) {
            return 0x84;
        }
        uVar1 = *arg2;
    }
    bVar7 = uVar1 == 5;
code_r0x0001328f:
    if (!bVar7) {
        return 0x84;
    }
    if (arg3 != '\0') {
        fcn.00013014(arg1 & 0xffff,arg2,&uStack_28);
        if ((uVar1 & 0xfd) == 0) {
            *(arg2 + 0x10) = *(arg2 + 6);
        }
        iVar3 = fcn.00011cfc(&uStack_28,arg2 + 0x10);
        if (iVar3 == 0) {
            iVar4 = fcn.0001245c(auStackX_8);
            if (iVar4 != 0) {
                cVar2 = *(arg2 + 1);
                if (cVar2 == '\x05') {
                    *(iVar4 + 5) = *(iVar4 + 5) & *(arg2 + 2);
                    *(iVar4 + 5) = *(iVar4 + 5) | *(arg2 + 6);
                }
                else if (cVar2 == '\r') {
                    *(iVar4 + 0xd) = *(iVar4 + 0xd) & *(arg2 + 2);
                    *(iVar4 + 0xd) = *(iVar4 + 0xd) | *(arg2 + 6);
                }
                else if (cVar2 == '\x11') {
                    *(iVar4 + 0x11) = *(iVar4 + 0x11) & *(arg2 + 2);
                    *(iVar4 + 0x11) = *(iVar4 + 0x11) | *(arg2 + 6);
                }
                else if (cVar2 == '\x12') {
                    *(iVar4 + 0x12) = *(iVar4 + 0x12) & *(arg2 + 2);
                    *(iVar4 + 0x12) = *(iVar4 + 0x12) | *(arg2 + 6);
                }
            }
            uStack_18 = uStack_28;
            uStack_10 = uStack_20;
            uVar5 = fcn.00012ae8(arg1 & 0xffff,&uStack_18,arg2 + 0x10);
            return uVar5;
        }
        return 0x86;
    }
    return 0;
}


/* fcn.00013078 @ 0x13078 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00013078(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int16_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    ushort auStackX_8 [4];
    uchar uStack_38;
    uint uStack_37;
    uint8_t uStack_33;
    uchar uStack_32;
    uchar uStack_31;
    uchar uStack_30;
    int64_t var_20h;
    uchar var_bp_18h;
    int64_t var_bp_10h;
    int8_t var_bp_8h;
    
    auStackX_8[0] = arg1;
    iVar3 = arg2;
    fcn.00013014(arg1,arg2,&uStack_38);
    uVar5 = *(iVar3 + 1);
    if ((uVar5 < 4) || ((7 < uVar5 && (1 < uVar5 - 0x19)))) {
        if (0xf < uVar5 - 8) {
            return 0x84;
        }
        iVar3 = fcn.0001245c(auStackX_8);
        iVar3 = iVar3 + 8;
        iVar1 = *(arg2 + 1) + iVar3;
        if (*arg2 < 3) {
            if (*arg2 == '\0') {
                *(iVar1 + -8) = *(iVar1 + -8) & *(arg2 + 2);
                *(iVar1 + -8) = *(arg2 + 6) | *(iVar1 + -8);
            }
            if (*arg2 == '\x01') {
                *(iVar1 + -8) = *(iVar1 + -8) & *(arg2 + 2);
                *(iVar1 + -8) = *(arg2 + 6) | *(iVar1 + -8);
            }
            if (*arg2 == '\x02') {
                *(iVar1 + -8) = *(iVar1 + -8) & *(arg2 + 2);
                *(iVar1 + -8) = *(arg2 + 6) | *(iVar1 + -8);
            }
        }
        else {
            if (*arg2 != '\x06') {
                return 0x84;
            }
            uVar6 = 0;
            if (uStack_33 != 0) {
                do {
                    uVar5 = uVar6 + 1;
                    *((uVar6 - 8) + iVar1) = *(uVar6 + 0x10 + arg2);
                    uVar6 = uVar5;
                } while (uVar5 < uStack_33);
            }
        }
        if (arg3 == '\0') {
            return 0;
        }
        uStack_37 = CONCAT31(uStack_37._1_3_,8);
        uStack_33 = 0x10;
        uStack_32 = 0;
    }
    else {
        if (*arg2 != '\x05') {
            return 0x84;
        }
        if (arg3 == '\0') {
            return 0;
        }
        iVar3 = arg2 + 0x10;
    }
    iVar2 = fcn.00011cfc(&uStack_38,iVar3);
    if (iVar2 != 0) {
        return 0x86;
    }
    if (*(arg2 + 1) - 8U < 0x10) {
        return 0;
    }
    var_20h = CONCAT17(uStack_31,CONCAT16(uStack_32,CONCAT15(uStack_33,CONCAT41(uStack_37,uStack_38))));
    var_bp_18h = uStack_30;
    uVar4 = fcn.00012ae8(arg1 & 0xffff,&var_20h,arg2 + 0x10);
    return uVar4;
}


/* fcn.000138c0 @ 0x138c0 */

//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.000138c0(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    int16_t iVar3;
    ulong uVar4;
    int16_t *piVar5;
    uint in_register_0000000c;
    char *arg2_00;
    uchar uVar6;
    ulong in_R8;
    unkbyte7 Var7;
    bool bVar8;
    uint16_t auStackX_8 [4];
    int16_t var_20h;
    int64_t iStack_38;
    int8_t iStack_30;
    int64_t var_20h_2;
    int8_t var_bp_18h;
    int64_t var_bp_10h;
    int8_t var_8h;
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = arg2;
    uVar2 = *(arg2_00 + 0xe);
    auStackX_8[0] = uVar2;
    if (*arg2_00 == '\x03') {
        uVar4 = fcn.0001366c(arg2_00,arg2 & 0xffffffffffffff01);
        return uVar4;
    }
    if (*arg2_00 == '\x04') {
        uVar4 = fcn.000137d4(arg2_00,arg2 & 0xffffffffffffff01);
        return uVar4;
    }
    piVar5 = fcn.0001245c(auStackX_8);
    if (piVar5 == NULL) {
        return 0x83;
    }
    if (*(arg2_00 + 0xc) != *piVar5) {
        return 0x84;
    }
    cVar1 = arg2_00[0xc];
    if (cVar1 == '\0') {
        if (*arg2_00 != '\x05') {
            return 0x84;
        }
        if ((arg2_00[1] - 4U & 0xfa) != 0) {
            return 0x84;
        }
        if (arg2_00[1] == '\t') {
            return 0x84;
        }
        if ((arg2_00[1] == '\b') && (*(arg2_00 + 10) != 0xb)) {
            return 0x84;
        }
        if ((arg2 & 1U) == 0) {
            return 0;
        }
        fcn.00013014(uVar2,arg2_00,&iStack_38);
        fcn.00011cfc(&iStack_38,arg2_00 + 0x10);
        goto code_r0x00013a8c;
    }
    Var7 = in_R8 >> 8;
    if (cVar1 == '\x01') {
        uVar4 = fcn.00013078(uVar2,arg2_00,CONCAT71(Var7,uVar6) & 0xffffffffffffff01);
        return uVar4;
    }
    if (cVar1 == '\x02') {
        if (*arg2_00 != '\x05') {
            return 0x84;
        }
        if (4 < arg2_00[1] - 4U) {
            bVar8 = arg2_00[1] == '\n';
            goto code_r0x00013a00;
        }
    }
    else {
        if (cVar1 == '\x03') {
            uVar4 = fcn.000131e8(uVar2,arg2_00,CONCAT71(Var7,uVar6) & 0xffffffffffffff01);
            return uVar4;
        }
        if (cVar1 != '\x04') {
            if (cVar1 == '\v') {
                uVar4 = fcn.0001337c(uVar2,arg2_00,CONCAT71(Var7,uVar6) & 0xffffffffffffff01);
                return uVar4;
            }
            if (cVar1 != '\f') {
                if (cVar1 != '\'') {
                    return 0x84;
                }
                uVar4 = fcn.000134f8(uVar2,arg2_00,CONCAT71(Var7,uVar6) & 0xffffffffffffff01);
                return uVar4;
            }
            uVar4 = fcn.00013438(uVar2,arg1,CONCAT71(Var7,uVar6) & 0xffffffffffffff01);
            return uVar4;
        }
        if (2 < arg2_00[1] - 0x20U) {
            return 0x84;
        }
        bVar8 = *arg2_00 == '\x05';
code_r0x00013a00:
        if (!bVar8) {
            return 0x84;
        }
    }
    if ((arg2 & 1U) == 0) {
        return 0;
    }
    fcn.00013014(uVar2,arg2_00,&iStack_38);
    iVar3 = fcn.00011cfc(&iStack_38,arg2_00 + 0x10);
    if (iVar3 != 0) {
        return 0x86;
    }
code_r0x00013a8c:
    var_20h_2 = iStack_38;
    var_bp_18h = iStack_30;
    uVar4 = fcn.00012ae8(uVar2,&var_20h_2,arg1 + 0x10);
    return uVar4;
}


/* fcn.00013de4 @ 0x13de4 */

int64_t fcn.00013de4(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x151a0;
    piVar2 = piVar1;
    if (((arg1 & 7) != 0) && ((arg1 & 7) == 0)) {
        iVar4 = 8;
        do {
            if (*piVar2 != *piVar3) break;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
        piVar3 = piVar3 + 1;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *piVar3) break;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
    }
    return *piVar2 - *piVar3;
}


