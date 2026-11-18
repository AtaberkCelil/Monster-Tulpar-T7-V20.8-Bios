// decompiled by r2ghidra: 1130_BiosGuardServices.pe32
// functions: 36

/* entry0 @ 0x11334 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong noname_0;
    
    fcn.000113a8(param_1,param_2);
    noname_0 = 0x14740;
    *0x14840 = -0x7fffffffffffffff;
    iVar1 = fcn.00011060(0x14740);
    if (iVar1 == 0) {
        iVar1 = fcn.0001166c(noname_0,param_2);
        if ((-1 < iVar1) || (*0x14840 < 0)) {
            *0x14840 = iVar1;
        }
        fcn.000111f0(0x14740,-1);
    }
    iVar1 = *0x14840;
    if (*0x14840 < 0) {
        fcn.00012260();
    }
    return iVar1;
}


/* fcn.000121e8 @ 0x121e8 */

void fcn.000121e8(void)

{
    return;
}


/* fcn.000113a8 @ 0x113a8 */

void fcn.000113a8(int64_t arg1,int64_t arg2)

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
    
    *0x145b0 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x145a8 = arg2;
    uStackX_8 = arg1;
    (**(*0x145b0 + 0x140))(82000,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x145b8);
    (**(*0x145b0 + 0x140))(0x14080,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x14858 = fcn.00012230();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x14858);
    *0x14850 = uStackX_8 >> 5;
    fcn.0001229c();
    noname_0 = 0x140b0;
    iVar3 = fcn.00012308(0x140b0);
    if (iVar3 == 0) {
        uVar4 = fcn.000112c0();
        fcn.000112b0();
        uVar1 = in(0x1808);
        fcn.00011140(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00011130();
        }
        fcn.00011140(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000112b0();
        }
        else {
            fcn.000112a0();
        }
    }
    *0x1484a = 0;
    return;
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
    
    fcn.000121e8();
    *(arg1 + 0xf8) = 0;
    if ((*0x140c0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.0001166c @ 0x1166c */

int64_t fcn.0001166c(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    bool bVar3;
    int64_t iStackX_10;
    
    bVar3 = false;
    iStackX_10 = arg1;
    iVar2 = (**(*0x145b8 + 0x50))(6,0x60,&iStackX_10);
    if ((-1 < iVar2) && (iStackX_10 != 0)) {
        fcn.00011040(iStackX_10,0x60);
        *(iStackX_10 + 8) = 0;
        iVar2 = 0;
        uVar1 = rdmsr(0xce);
        if (((uVar1 >> 0x23 & 1) != 0) && (uVar1 = rdmsr(0x110), (uVar1 & 2) != 0)) {
            iVar2 = fcn.0001229c();
            *0x28918 = *(iVar2 + 0xc);
            iVar2 = fcn.000117a8(iStackX_10);
            if (iVar2 < 0) {
                return iVar2;
            }
            bVar3 = *0x28860 == '\0';
            iVar2 = iStackX_10 + 0x10;
        }
        iVar2 = (**(*0x145b8 + 0xa8))(iStackX_10 + 8,0x14020,0,iVar2);
        if (iVar2 < 0) {
            (**(*0x145b8 + 0x58))(iStackX_10);
        }
        else if (bVar3) {
            iVar2 = (**(*0x145b0 + 0x140))(0x14010,0,0x145a0);
            if (iVar2 < 0) {
                return iVar2;
            }
            fcn.00011528();
        }
    }
    return iVar2;
}


/* fcn.000111f0 @ 0x111f0 */

void fcn.000111f0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011299. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00012260 @ 0x12260 */

void fcn.00012260(void)

{
    char cVar1;
    
    cVar1 = fcn.000121ec(*0x14858);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00012286. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x145b8 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00012295. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x145b0 + 0x48))(*0x14858);
    return;
}


/* fcn.000121ec @ 0x121ec */

uint64_t fcn.000121ec(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x14850 != 0) {
        puVar2 = *0x14858 + 8;
        in_RAX = *0x14858;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x14850);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012230 @ 0x12230 */

ulong fcn.00012230(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x145b8 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001229c @ 0x1229c */

int64_t fcn.0001229c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x145c0 == 0) {
        *0x145c0 = 0;
        if (*(*0x145a8 + 0x68) != 0) {
            piVar2 = *(*0x145a8 + 0x70);
            do {
                if ((*0x14030 == *piVar2) && (*0x14038 == piVar2[1])) {
                    *0x145c0 = (*(*0x145a8 + 0x70))[uVar1 * 3 + 2];
                    return *0x145c0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x145a8 + 0x68));
        }
    }
    return *0x145c0;
}


/* fcn.00012308 @ 0x12308 */

void fcn.00012308(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001229c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012336:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012336;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000112c0 @ 0x112c0 */

uint64_t fcn.000112c0(void)

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


/* fcn.000112b0 @ 0x112b0 */

void fcn.000112b0(void)

{
    return;
}


/* fcn.00011140 @ 0x11140 */

uint64_t fcn.00011140(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011132 @ 0x11132 */

void fcn.00011132(void)

{
    return;
}


/* fcn.000112a0 @ 0x112a0 */

void fcn.000112a0(void)

{
    return;
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 12288 named .text
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


/* fcn.000117a8 @ 0x117a8 */

int64_t fcn.000117a8(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *arg2;
    uint64_t arg1_00;
    uint64_t uStackX_10;
    uint32_t *puStackX_18;
    
    uStackX_10 = 0;
    *0x28860 = '\0';
    *0x288d8 = fcn.00012308(0x14090);
    if ((*0x288d8 != 0) && (*(*0x288d8 + 0x308) != 0)) {
        uVar2 = *(*0x288d8 + 800);
        if (uVar2 != 0) {
            iVar3 = (**(*0x145b8 + 0x60))(0,6,0x80,&uStackX_10);
            if ((-1 < iVar3) && (uStackX_10 != 0)) {
                arg1_00 = uStackX_10 & 0xfffffffffffc0000;
                if (arg1_00 < uStackX_10) {
                    arg1_00 = arg1_00 + 0x40000;
                }
                if ((uStackX_10 == arg1_00) ||
                   (iVar3 = (**(*0x145b8 + 0x68))
                                      (uStackX_10,((arg1_00 - uStackX_10 & 0xfff) != 0) + (arg1_00 - uStackX_10 >> 0xc)
                                      ), -1 < iVar3)) {
                    uVar1 = (uStackX_10 - arg1_00) + 0x40000;
                    if ((uVar1 == 0) ||
                       (iVar3 = (**(*0x145b8 + 0x68))
                                          (arg1_00 + 0x40000,((uStackX_10 - arg1_00 & 0xfff) != 0) + (uVar1 >> 0xc)),
                       -1 < iVar3)) {
                        uVar1 = *(*0x288d8 + 0x308);
                        if (uVar2 != *(uVar1 + 0x10)) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((uVar2 != 0) && (arg1_00 != uVar1)) {
                            section..text(arg1_00,uVar1,uVar2);
                        }
                        iVar3 = *0x288d8;
                        iVar4 = fcn.00012308(0x140a0);
                        if (iVar4 == 0) {
                            return -0x7ffffffffffffff2;
                        }
                        iVar3 = (**(*0x145b8 + 0x50))(6,*(iVar3 + 0x18),&puStackX_18);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        arg2 = *0x288d8 + 0x18;
                        if ((*arg2 != 0) && (puStackX_18 != arg2)) {
                            section..text(puStackX_18,arg2,*arg2);
                        }
                        iVar3 = *0x288d8;
                        if (*(*0x288d8 + 0x318) == '\0') {
                            *0x28860 = '\x01';
                        }
                        if (*0x28860 == '\0') {
                            iVar5 = fcn.00012308(0x14040);
                            if (iVar5 == 0) {
                                return -0x7ffffffffffffff2;
                            }
                            *0x288b8 = (*(iVar5 + 0x24) - (*(iVar4 + 0x19) + *(iVar3 + 0x318))) * 0x100000;
                            iVar3 = *(iVar3 + 0x318) * 0x100000;
                            *0x28928 = iVar3;
                            *0x288e8 = iVar3 + -0x28000 + *0x288b8;
                            *0x288e0 = iVar3 + -0x20000 + *0x288b8;
                        }
                        else {
                            *0x28928 = 0x14000;
                            iVar3 = (**(*0x145b8 + 0x60))(0,6,0x14,0x288b8);
                            if (iVar3 != 0) {
                                return iVar3;
                            }
                            *0x288e8 = 0;
                            *0x288e0 = 0;
                        }
                        *0x28920 = *0x288b8;
                        if (*0x288d8 + 0x2f0 != 0x28900) {
                            section..text(0x28900,*0x288d8 + 0x2f0,0x18);
                        }
                        if (*0x288d8 + 0x2c0 != 0x28880) {
                            section..text(0x28880,*0x288d8 + 0x2c0,0x30);
                        }
                        if (*0x28928 != 0) {
                            fcn.00011040(*0x28920,*0x28928);
                        }
                        if (*0x28920 != *0x288d8 + 0x2c0U) {
                            section..text(*0x28920,*0x288d8 + 0x2c0U,0x30);
                        }
                        uVar1 = *0x28920;
                        *(*0x28920 + 0x1c) = 0;
                        *(uVar1 + 0x20) = 0;
                        *(uVar1 + 0x30) = 1;
                        *(arg1 + 0x10) = 0x120d0;
                        *(arg1 + 0x18) = 0x1219c;
                        *(arg1 + 0x20) = 0x11cf4;
                        *arg1 = 0x44524742;
                        *(arg1 + 0x30) = puStackX_18 | 0x100000000000000;
                        *(arg1 + 0x38) = uVar1;
                        *(arg1 + 0x38) = *(arg1 + 0x38) | 0x200000000000000;
                        *(arg1 + 0x28) = arg1_00;
                        *(arg1 + 0x40) = 0xfe00000000000000;
                        *(arg1 + 0x48) = 0xfe00000000000000;
                        *(arg1 + 0x50) = 0xff00000000000000;
                        *0x14848 = 1;
                        return 0;
                    }
                }
            }
            return -0x7ffffffffffffff7;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00011528 @ 0x11528 */

void fcn.00011528(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uStackX_8;
    uint uStackX_c;
    ulong *puStackX_10;
    uchar auStackX_18 [16];
    
    iVar1 = (**(*0x145b8 + 0xd0))(0x14000,0,&puStackX_10);
    if (-1 < iVar1) {
        iVar1 = (**(*0x145b8 + 0xd0))(0x14020,0,0x288d0);
        if ((-1 < iVar1) && (*0x288d0 != 0)) {
            uStackX_c = 2;
            uStackX_8 = 0x40000;
            iVar1 = (**puStackX_10)(puStackX_10,0x114dc,&uStackX_8,auStackX_18);
            if (-1 < iVar1) {
                uVar2 = *0x28928 >> 0x14;
                ***0x145a0 = *0x288b8;
                *(**0x145a0 + 8) = uVar2;
                *(**0x145a0 + 9) = uStackX_8;
                *(**0x145a0 + 0xb) = uStackX_8._2_1_;
                iVar1 = *0x288d8;
                *(*0x288d8 + 0x310) = ***0x145a0;
                *(iVar1 + 0x318) = *(**0x145a0 + 8);
                *(iVar1 + 0x31c) = *(**0x145a0 + 9);
                *(iVar1 + 0x31e) = *(**0x145a0 + 0xb);
            }
        }
    }
    return;
}


/* fcn.00012484 @ 0x12484 */

int64_t fcn.00012484(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    uint in_stack_00000028;
    
    iVar1 = fcn.00012434();
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else if (*0x145c8 != NULL) {
        iVar1 = (***0x145c8)(0,0,arg1,arg2,0,in_stack_00000028,0);
    }
    return iVar1;
}


/* fcn.00011130 @ 0x11130 */

void fcn.00011130(void)

{
    return;
}


/* fcn.00012354 @ 0x12354 */

void fcn.00012354(int64_t arg1)

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
            fcn.00011130();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000124e4 @ 0x124e4 */

int64_t fcn.000124e4(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    uint in_stack_00000028;
    
    iVar1 = fcn.00012434();
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else if (*0x145c8 != NULL) {
        iVar1 = (***0x145c8)(0,0,arg1,arg2,0,in_stack_00000028,1);
    }
    return iVar1;
}


/* fcn.000123b4 @ 0x123b4 */

//WARNING: Type propagation algorithm not settling

void fcn.000123b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    char cVar2;
    uint64_t uVar4;
    uint64_t uVar3;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.00012578(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    out(0x72,3);
    cVar2 = in(0x73);
    if ((cVar2 == '\x01') && (uVar4 = 0, uStackY_108 != '\0')) {
        do {
            uVar3 = uVar4 + 1;
            uVar1 = uVar4 + 1;
            uVar4 = uVar3;
        } while (*(&uStackY_108 + uVar1) != '\0');
        if (uVar3 != 0) {
            fcn.00013318(&uStackY_108,uVar3 & 0xffff);
        }
    }
    return;
}


/* fcn.00012578 @ 0x12578 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00012578(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000125d3;
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
code_r0x000125d3:
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
        uVar5 = fcn.000132f4(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000132c8(arg4);
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
            pcVar9 = 0x141a4;
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
code_r0x0001295d:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x141a4;
                }
                else {
                    pcVar9 = 0x141a8;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x0001271c:
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
                            goto code_r0x000128bf;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x000128d6;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x000128bf;
                                }
                                goto code_r0x000128d6;
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
code_r0x000128bf:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x0001271c;
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
                                goto code_r0x0001271c;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x000128d6;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x000128bf;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x000128d6:
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
                                fcn.000132a4(&var_68h_2,0x26,0,0x14138);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x0001295d;
                                if (uStack_a8 == 0x53) goto code_r0x00012b6c;
                                if (uStack_a8 == 0x58) goto code_r0x00012c62;
                                if (uStack_a8 == 0x61) goto code_r0x00012b75;
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
                                    goto code_r0x00012701;
                                }
                                if (uStack_a8 != 100) goto code_r0x000126fd;
                                goto code_r0x00012c79;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x141a4;
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
                        goto code_r0x00012e74;
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
                                    iVar13 = 0x1423b;
                                    goto code_r0x00012c29;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00012c29:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00012e74;
                            }
                            fcn.000132a4(&var_68h_2,0x26,0,0x1419c);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00012b6c:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00012b75:
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
                                goto code_r0x00012e74;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000126fd;
                                    goto code_r0x00012c66;
                                }
                                goto code_r0x00012c6b;
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
                                goto code_r0x00012e74;
                            }
                            fcn.000132a4(&var_68h_2,0x26,0,0x14180);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00012e74;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00012c62:
                    uVar5 = uVar5 | 0x20;
code_r0x00012c66:
                    uVar5 = uVar5 | 0x80;
code_r0x00012c6b:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00012c79:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00012cbb;
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
code_r0x00012cbb:
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
code_r0x00012d43:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00012d43;
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
code_r0x000126fd:
                    pcVar9 = &uStack_a8;
code_r0x00012701:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00012e74:
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
                arg1 = fcn.00012544(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012544(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00012544(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00012544(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00013318 @ 0x13318 */

ulong fcn.00013318(uint32_t *arg1,int64_t arg2)

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
        fcn.00013530(auStack_78);
        if (&stack0x00000000 != 0xf8) {
            fcn.00013584(auStack_78,auStack_f8,&uStack_108);
        }
        if (iStack_88 == 0) {
            uVar1 = 0x8000000000000007;
        }
        else {
            uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
            uStack_e8 = *0x14070;
            uStack_e0 = *0x14078;
            fcn.000133fc(auStack_f8);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.00011b7c @ 0x11b7c */

uint64_t fcn.00011b7c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t arg2_00;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char cVar5;
    ulong in_R8;
    bool bVar6;
    
    if (*0x1484a != '\0') {
        iVar3 = arg1;
        arg2_00 = fcn.00011140(arg1,arg2);
        fcn.00012484(iVar3,0x140c8,in_R8,arg2_00);
    }
    uVar4 = rdmsr(0x1b);
    uVar1 = uVar4 & 0x100;
    if ((uVar4 & 0x100) == 0) {
        LOCK();
        *0x288b0 = *0x288b0 + 1;
        UNLOCK();
        while (*0x288c0 == '\0') {
            uVar2 = fcn.00011130();
            uVar4 = CONCAT71(uVar2 >> 8,*0x288c0);
        }
    }
    else {
        for (cVar5 = '\0'; (*0x288b0 < *(*0x145b8 + 0x80) - 1U && (cVar5 != 'd')); cVar5 = cVar5 + '\x01') {
            fcn.00012354(3);
        }
        *0x288c0 = (cVar5 == 'd') + '\x01';
        uVar4 = 0;
    }
    uVar4 = CONCAT71(uVar4 >> 8,*0x288c0);
    if (*0x288c0 != '\x02') {
        if (uVar1 == 0) {
            LOCK();
            *0x288b0 = *0x288b0 - 1;
            UNLOCK();
            wrmsr(0x115,arg1 + 0x28);
            uVar4 = 0;
            wrmsr(0x116,0);
        }
        else {
            while (*0x288b0 != 0) {
                fcn.00011130();
            }
            fcn.00012354(3);
            wrmsr(0x115,arg1 + 0x28);
            wrmsr(0x116,0);
            uVar2 = 0x115;
            uVar4 = rdmsr(0x115);
            bVar6 = *0x1484a != '\0';
            *(arg1 + 0x58) = uVar4;
            *0x288c0 = '\x01';
            if (bVar6) {
                iVar3 = fcn.00011140(0x115,uVar4 & 0xffffffff00000000);
                uVar4 = fcn.000124e4(uVar2,0x140c8,in_R8,iVar3);
            }
        }
    }
    return uVar4;
}


/* fcn.00012434 @ 0x12434 */

ulong fcn.00012434(void)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    if (*0x145c8 == 0) {
        iVar1 = (**(*0x145b8 + 0xd0))(0x14060,0,aiStackX_8);
        if (iVar1 < 0) {
            return 0x800000000000000e;
        }
        *0x145c8 = aiStackX_8[0];
    }
    return 0;
}


/* fcn.000132c8 @ 0x132c8 */

uint64_t fcn.000132c8(uint32_t arg1)

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


/* fcn.000132f4 @ 0x132f4 */

uint64_t fcn.000132f4(uint32_t arg1)

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


/* fcn.000132a4 @ 0x132a4 */

void fcn.000132a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012578(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012544 @ 0x12544 */

uchar * fcn.00012544(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00013530 @ 0x13530 */

void fcn.00013530(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x146d0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x14650) {
        section..text(arg1_00,0x14650,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x136d0;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x135f0;
    *(arg1_00 + 4) = fcn.000121e8;
    *(arg1_00 + 8) = 0x13694;
    *(arg1_00 + 10) = 0x1368c;
    *(arg1_00 + 0xc) = 0x1369c;
    *(arg1_00 + 0xe) = 0x136a4;
    *(arg1_00 + 0x10) = 0x136ac;
    *(arg1_00 + 0x12) = 0x136b4;
    *(arg1_00 + 0x14) = 0x136c8;
    *(arg1_00 + 0x16) = 0x136bc;
    return;
}


/* fcn.00013584 @ 0x13584 */

int64_t fcn.00013584(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x146d0;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x14650) {
        section..text(arg2,0x14650,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.000133fc @ 0x133fc */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.000133fc(uint32_t arg1)

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
    if (piVar3 != 0x145d0) {
        puVar5 = &uStack_88;
        uVar2 = *(piVar3 + 0xc) & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((*(piVar3 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar3[2];
            iStack_4c = piVar3[3];
            puVar5 = &stack0xffffffffffffff7c;
            uStack_88 = *0x14520;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar3[4];
            *(piVar3 + 4) = _auStack_44 + 1;
            *puVar5 = *0x14524;
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
                fcn.00011040(acStack_28 + uVar4,0x18 - uVar4);
            }
            *puVar5 = *0x14538;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar5 = *0x14534;
            puVar5[1] = *0x1453c;
            *(puVar5 + 6) = in_stack_00000028;
            puVar5 = puVar5 + 1;
        }
        puVar5[1] = *0x14560;
        (**(*piVar3 + 0x18))(piVar3,&uStack_88,&uStack_58);
    }
    return;
}


