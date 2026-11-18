// decompiled by r2ghidra: 1135_SmbusSmm.pe32
// functions: 19

/* entry0 @ 0x11224 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.0001124c(arg1,arg2);
    iVar1 = fcn.000113ac();
    if (iVar1 < 0) {
        fcn.000115b4();
    }
    return iVar1;
}


/* fcn.0001124c @ 0x1124c */

void fcn.0001124c(int64_t arg1,int64_t arg2)

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
    
    *0x12088 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x12080 = arg2;
    uStackX_8 = arg1;
    (**(*0x12088 + 0x140))(0x12020,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x12090);
    (**(*0x12088 + 0x140))(0x12030,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x121b0 = fcn.00011584();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x121b0);
    *0x121a8 = uStackX_8 >> 5;
    fcn.000115f0();
    puVar4 = fcn.000115f0();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00011338:
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
            if ((*0x12040 == *(puVar4 + 4)) && (*0x12048 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00011338;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113ac @ 0x113ac */

int64_t fcn.000113ac(void)

{
    int64_t iVar1;
    
    *0x121a0 = -0x7fffffffffffffff;
    iVar1 = fcn.00011020(0x120a0);
    if (iVar1 != 0) {
        return *0x121a0;
    }
    iVar1 = (**(*0x12090 + 0x50))(6,0x30,0x121b8);
    if (iVar1 < 0) {
        if (-1 < *0x121a0) goto code_r0x0001149b;
    }
    else {
        fcn.00011000(*0x121b8,0x30);
        **0x121b8 = 0x626d7370;
        (*0x121b8)[2] = 0x114b8;
        (*0x121b8)[3] = 0x11530;
        (*0x121b8)[4] = 0x11530;
        (*0x121b8)[5] = 0x11530;
        (**(*0x12090 + 0xa8))(*0x121b8 + 1,0x12000,0,*0x121b8 + 2);
        iVar1 = 0;
    }
    *0x121a0 = iVar1;
code_r0x0001149b:
    fcn.000110f0(0x120a0,-1);
    return *0x121a0;
}


/* fcn.000115b4 @ 0x115b4 */

void fcn.000115b4(void)

{
    char cVar1;
    
    cVar1 = fcn.00011540(*0x121b0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000115da. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x12090 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000115e9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12088 + 0x48))(*0x121b0);
    return;
}


/* fcn.00011540 @ 0x11540 */

uint64_t fcn.00011540(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x121a8 != 0) {
        puVar2 = *0x121b0 + 8;
        in_RAX = *0x121b0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x121a8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001153c @ 0x1153c */

void fcn.0001153c(void)

{
    return;
}


/* fcn.00011584 @ 0x11584 */

ulong fcn.00011584(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12090 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000115f0 @ 0x115f0 */

int64_t fcn.000115f0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12098 == 0) {
        *0x12098 = 0;
        if (*(*0x12080 + 0x68) != 0) {
            piVar2 = *(*0x12080 + 0x70);
            do {
                if ((*0x12010 == *piVar2) && (*0x12018 == piVar2[1])) {
                    *0x12098 = (*(*0x12080 + 0x70))[uVar1 * 3 + 2];
                    return *0x12098;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12080 + 0x68));
        }
    }
    return *0x12098;
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


/* fcn.00011020 @ 0x11020 */

ulong fcn.00011020(int64_t arg1)

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
    
    fcn.0001153c();
    *(arg1 + 0xf8) = 0;
    if ((*0x12050 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 4096 named .text
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


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011199. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.0001165c @ 0x1165c */

int64_t fcn.0001165c(int64_t arg1,int64_t arg2,int arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h)

{
    uchar uVar1;
    ushort uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char cVar9;
    int64_t var_bp_10h;
    
    uVar3 = 0;
    var_bp_10h = 0;
    if ((1 < arg3) && ((arg_30h == 0 || (arg_38h == 0)))) {
        return -0x7ffffffffffffffe;
    }
    uVar4 = arg1;
    cVar9 = arg4;
    if (arg3 < 7) {
        if (arg3 != 6) {
            if (arg3 == 0) {
                uVar7 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                uVar8 = -(cVar9 != '\0') & 0x400000;
                if ((uVar8 != 0) || ((uVar7 & 0xff00) != 0)) {
                    return -0x7ffffffffffffffe;
                }
                uVar7 = uVar7 | uVar8 | 1;
code_r0x0001181a:
                fcn.00011a68(0,uVar7,0,&var_bp_10h);
                return var_bp_10h;
            }
            if (arg3 == 1) {
                uVar8 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                uVar6 = -(cVar9 != '\0') & 0x400000;
                uVar7 = uVar8 | uVar6;
                if (uVar6 != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((uVar8 & 0xff00) != 0) {
                    return -0x7ffffffffffffffe;
                }
                goto code_r0x0001181a;
            }
            if (arg3 == 2) {
                if (*arg_30h == 0) {
                    return -0x7ffffffffffffffb;
                }
                *arg_30h = 1;
                uVar7 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                if ((uVar7 & 0xff00) != 0) {
code_r0x000117cb:
                    var_bp_10h = -0x7ffffffffffffffe;
                    uVar1 = 0;
                    goto code_r0x000117dc;
                }
                uVar8 = 0;
                uVar7 = uVar7 | -(cVar9 != '\0') & 0x400000 | 1;
code_r0x000117be:
                iVar5 = 4;
            }
            else {
                if (arg3 == 3) {
                    if (*arg_30h == 0) {
                        return -0x7ffffffffffffffb;
                    }
                    *arg_30h = 1;
                    uVar8 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                    uVar7 = uVar8 | -(cVar9 != '\0') & 0x400000;
                    if ((uVar8 & 0xff00) != 0) goto code_r0x000117cb;
                    uVar8 = *arg_38h;
                    goto code_r0x000117be;
                }
                if (arg3 == 4) {
                    if (*arg_30h == 0) {
                        return -0x7ffffffffffffffb;
                    }
                    uVar8 = 0;
                    uVar6 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
                    *arg_30h = 1;
                    uVar7 = (-(cVar9 != '\0') & 0x400000) + 1;
                }
                else {
                    if (arg3 != 5) {
                        return -0x7ffffffffffffffe;
                    }
                    if (*arg_30h == 0) {
                        return -0x7ffffffffffffffb;
                    }
                    uVar6 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
                    *arg_30h = 1;
                    uVar8 = *arg_38h;
                    uVar7 = -(cVar9 != '\0') & 0x400000;
                }
                uVar7 = uVar6 * 2 | uVar7;
                iVar5 = 8;
            }
            uVar1 = fcn.00011a68(iVar5,uVar7,uVar8,&var_bp_10h);
code_r0x000117dc:
            *arg_38h = uVar1;
            return var_bp_10h;
        }
        if (*arg_30h < 2) {
            return -0x7ffffffffffffffb;
        }
        uVar6 = 0;
        uVar8 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
        *arg_30h = 2;
        uVar7 = (-(cVar9 != '\0') & 0x400000) + 1;
    }
    else {
        if (arg3 != 7) {
            iVar5 = arg_38h;
            if (arg3 == 8) {
                if (arg_38h == 0) goto code_r0x000119f9;
                uVar7 = (-(cVar9 != '\0') & 0x400000) + 1 | ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                arg_38h = 0;
code_r0x000119e4:
                arg1_00 = 0x14;
            }
            else {
                if (arg3 == 9) {
                    uVar7 = (((*arg_30h & 0x3f) << 8 | arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2 |
                            -(cVar9 != '\0') & 0x400000;
                    if ((arg_38h != 0) && ((uVar7 >> 0x10 & 0x3f) - 1 < 0x20)) {
                        iVar5 = 0;
                        goto code_r0x000119e4;
                    }
code_r0x000119f9:
                    var_bp_10h = -0x7ffffffffffffffe;
                    goto code_r0x00011a07;
                }
                if (arg3 == 10) {
                    if (*arg_30h < 2) {
                        return -0x7ffffffffffffffb;
                    }
                    uVar8 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
                    *arg_30h = 2;
                    uVar6 = *arg_38h;
                    iVar5 = 0x10;
                    uVar7 = -(cVar9 != '\0') & 0x400000;
                    goto code_r0x00011a3f;
                }
                if (arg3 != 0xb) {
                    return -0x7ffffffffffffffe;
                }
                uVar7 = (((*arg_30h & 0x3f) << 8 | arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2 | -(cVar9 != '\0') & 0x400000;
                if ((arg_38h == 0) || (0x1f < (uVar7 >> 0x10 & 0x3f) - 1)) goto code_r0x000119f9;
                arg1_00 = 0x1c;
            }
            uVar3 = fcn.00011b8c(arg1_00,uVar7,arg_38h,iVar5);
code_r0x00011a07:
            *arg_30h = uVar3;
            return var_bp_10h;
        }
        if (*arg_30h < 2) {
            return -0x7ffffffffffffffb;
        }
        uVar8 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
        *arg_30h = 2;
        uVar6 = *arg_38h;
        uVar7 = -(cVar9 != '\0') & 0x400000;
    }
    iVar5 = 0xc;
code_r0x00011a3f:
    uVar2 = fcn.00011a68(iVar5,uVar8 * 2 | uVar7,uVar6,&var_bp_10h);
    *arg_38h = uVar2;
    return var_bp_10h;
}


/* fcn.00011a68 @ 0x11a68 */

ushort fcn.00011a68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    ushort uVar6;
    
    iVar4 = 0;
    uVar6 = arg3;
    if (*0xc00fc020 - 1 < 0xfffe) {
        uVar5 = *0xc00fc020 & 0xffe0;
    }
    else {
        uVar5 = 0;
    }
    uVar1 = in(uVar5);
    if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 1) == 0) {
            out(uVar5,uVar1);
            if ((arg1 == '\x04') && ((arg2 & 1U) == 0)) {
                out(uVar5 + 3,arg3);
            }
            else {
                out(uVar5 + 3,arg2 >> 8);
                out(uVar5 + 5,arg3);
                out(uVar5 + 6,arg3 >> 8);
            }
            out(uVar5 + 0xd,arg2 >> 0x16 & 1);
            out(uVar5 + 4,arg2);
            out(uVar5 + 2,arg1 + '@');
            do {
                uVar1 = in(uVar5);
            } while ((uVar1 & 0x9e) == 0);
            if ((uVar1 & 0x1c) != 0) {
                out(uVar5,0x1c);
                uVar1 = in(uVar5 + 0xc);
                iVar4 = (-((uVar1 & 1) != 0) & 0x14) + 0x8000000000000007;
            }
            uVar2 = in(uVar5 + 6);
            uVar3 = in(uVar5 + 5);
            uVar6 = CONCAT11(uVar2,uVar3);
            out(uVar5,0xff);
            out(uVar5 + 0xc,1);
            goto code_r0x00011b73;
        }
        out(uVar5,0xff);
    }
    iVar4 = -0x7fffffffffffffee;
code_r0x00011b73:
    if (arg4 != 0) {
        *arg4 = iVar4;
    }
    return uVar6;
}


/* fcn.00011b8c @ 0x11b8c */

uint64_t fcn.00011b8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint64_t *in_stack_00000028;
    
    uVar6 = 0;
    if (*0xc00fc020 - 1 < 0xfffe) {
        uVar7 = *0xc00fc020 & 0xffe0;
    }
    else {
        uVar7 = 0;
    }
    uVar4 = arg2 >> 0x10 & 0x3f;
    uVar5 = uVar4;
    uVar1 = in(uVar7);
    if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 1) == 0) {
            out(uVar7,uVar1);
            out(uVar7 + 3,arg2 >> 8);
            out(uVar7 + 0xd,arg2 >> 0x16 & 1 | 2);
            in(uVar7 + 2);
            if ((arg3 != 0) && (out(uVar7 + 5,uVar4), uVar5 != 0)) {
                uVar3 = uVar6;
                do {
                    out(uVar7 + 7,*(uVar3 + arg3));
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar5);
            }
            out(uVar7 + 4,arg2);
            out(uVar7 + 2,arg1 + '@');
            do {
                uVar1 = in(uVar7);
            } while ((uVar1 & 0x9e) == 0);
            if ((uVar1 & 0x1c) == 0) {
                uVar3 = uVar6;
                if (arg4 != 0) {
                    uVar1 = in(uVar7 + 5);
                    uVar5 = uVar1;
                    if (uVar1 != 0) {
                        do {
                            uVar2 = in(uVar7 + 7);
                            *(uVar6 + arg4) = uVar2;
                            uVar6 = uVar6 + 1;
                            uVar3 = 0;
                        } while (uVar6 < uVar5);
                    }
                }
            }
            else {
                out(uVar7,0x1c);
                uVar1 = in(uVar7 + 0xc);
                uVar3 = (-((uVar1 & 1) != 0) & 0x14) + 0x8000000000000007;
            }
            goto code_r0x00011cc3;
        }
        out(uVar7,0xff);
    }
    uVar3 = 0x8000000000000012;
code_r0x00011cc3:
    out(uVar7,0xff);
    out(uVar7 + 0xc,1);
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar3;
    }
    return uVar5;
}


