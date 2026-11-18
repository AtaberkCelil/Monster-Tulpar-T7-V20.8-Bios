// decompiled by r2ghidra: 1584_PchSmiDispatcher.pe32
// functions: 70

/* entry0 @ 0x11334 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.000113ac(arg1,in_RDX);
    *0x18d10 = -0x7fffffffffffffff;
    iVar1 = fcn.000110c0(0x18c10);
    if (iVar1 == 0) {
        iVar1 = fcn.00011514(arg1,in_RDX);
        if ((-1 < iVar1) || (*0x18d10 < 0)) {
            *0x18d10 = iVar1;
        }
        fcn.000111b0(0x18c10,-1);
    }
    iVar1 = *0x18d10;
    if (*0x18d10 < 0) {
        fcn.00016ae0();
    }
    return iVar1;
}


/* fcn.00016a68 @ 0x16a68 */

void fcn.00016a68(void)

{
    return;
}


/* fcn.000113ac @ 0x113ac */

ulong fcn.000113ac(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x18bc8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x18bc0 = arg2;
    uStackX_8 = arg1;
    (**(*0x18bc8 + 0x140))(0x17130,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x18bd0);
    (**(*0x18bc8 + 0x140))(0x17180,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x18d38 = fcn.00016ab0();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x18d38);
    *0x18d30 = uStackX_8 >> 5;
    fcn.00016b7c();
    iVar3 = fcn.00016bac();
    if (iVar3 == 0) {
        uVar4 = fcn.000112f0();
        fcn.000112e0();
        uVar1 = in(0x1808);
        fcn.00011190(iStackX_18,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00011260();
        }
        fcn.00011190(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000112e0();
        }
        else {
            fcn.000112d0();
        }
    }
    (**(*0x18bd0 + 0xd0))(0x170b0,0);
    *0x18d28 = 0;
    uVar4 = 0;
    if (*(*0x18bc0 + 0x68) != 0) {
        piVar6 = *(*0x18bc0 + 0x70);
        do {
            if ((*0x17140 == *piVar6) && (*0x17148 == piVar6[1])) {
                *0x18c00 = (*(*0x18bc0 + 0x70))[uVar4 * 3 + 2];
                *0x18d28 = 0;
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x18bc0 + 0x68));
    }
    *0x18c00 = 0;
    return 0x800000000000000e;
}


/* fcn.000110c0 @ 0x110c0 */

ulong fcn.000110c0(int64_t arg1)

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
    
    fcn.00016a68();
    *(arg1 + 0xf8) = 0;
    if ((*0x17f20 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011514 @ 0x11514 */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.00011514(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *puStackX_8;
    int64_t iStackX_10;
    ulong uStackX_18;
    uchar auStackX_20 [8];
    int64_t var_bp_50h;
    int64_t var_60h;
    int64_t var_68h;
    uchar auStack_128 [16];
    uint auStack_118 [8];
    uchar auStack_f8 [104];
    ulong uStack_90;
    int64_t var_48h;
    int32_t var_8h;
    
    *0x18eb0 = 0;
    *0x173c8 = 0xfd00dc;
    *0x173e0 = 0xfd00dc;
    *0x17340 = 0xfd00dc;
    *0x17370 = 0xfd00dc;
    *0x18ebc = 0x1800;
    *0x174e8 = 0xf800dc;
    *0x17798 = 0xf800dc;
    *0x177b8 = 0xf800dc;
    *0x178f8 = 0xf800dc;
    *0x17910 = 0xf800dc;
    *0x18eba = *0xfd882778 & 0xffe0;
    iStackX_10 = arg2;
    uVar1 = fcn.00016388();
    *0x18eb4 = uVar1;
    (**(*0x18bd0 + 0xe0))(0x11efc,0,0x171d0);
    *0x171c0 = 0x171c0;
    *0x171c8 = 0x171c0;
    fcn.0001271c();
    uVar2 = in(*0x18ebc + 0x30);
    out(*0x18ebc + 0x30,uVar2 | 1);
    fcn.0001271c();
    (**(*0x18bd0 + 0xd0))(0x17050,0,0x18e58);
    *0x18d18 = 0x18d18;
    *0x18d20 = 0x18d18;
    fcn.00011040(auStack_118,0xf0);
    auStack_118[0] = 0x43524244;
    uStack_90 = 0x14f08;
    var_48h._0_4_ = 2;
    section..text(auStack_f8,0x18a90,0x68);
    fcn.00011950(auStack_118,auStackX_20);
    uVar5 = 0;
    do {
        (**(*0x18bd0 + 0xa8))(0x171d8,*(uVar5 + 0x171f0),0,uVar5 + 0x171f8);
        uVar5 = uVar5 + 0x38;
    } while (uVar5 < 0x150);
    iStackX_10 = 0;
    (**(*0x18bd0 + 0xa8))(&iStackX_10,0x171b0,0,0x17440);
    (**(*0x18bd0 + 0xa8))(&iStackX_10,str.V_G_,0,0x17490);
    (**(*0x18bd0 + 0xa8))(&iStackX_10,0x17090,0,0x17408);
    (**(*0x18bd0 + 0xa8))(&iStackX_10,0x17120,0,0x17528);
    *0x18d70 = 0x15af4;
    iVar4 = 4;
    *0x18d60 = 0x50544f49;
    *0x18d78 = 0x15b28;
    *0x18d90 = 0x15b30;
    *0x18d98 = 0x15b28;
    *0x18d80 = 0x15b90;
    *0x18d88 = 0x15da8;
    iVar3 = 0x18da8;
    *0x18d40 = arg1;
    do {
        *iVar3 = iVar3;
        *(iVar3 + 8) = iVar3;
        iVar3 = iVar3 + 0x28;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *0x18dc0 = 0x15444;
    *0x18de8 = 0x1544c;
    *0x18e10 = 0x15458;
    *0x18e38 = 0x15464;
    (**(*0x18bc8 + 0x140))(0x170d0,0,&puStackX_8);
    *0x18e50 = *puStackX_8;
    *0x18d68 = 0;
    (**(*0x18bd0 + 0xa8))(0x18d68,0x17080,0,0x18d70);
    (**(*0x18bd0 + 0xa8))(0x18d68,0x170a0,0,0x18d90);
    (**(*0x18bd0 + 0xa8))(0x18d68,0x170e0,0,0x18d80);
    iVar3 = 0x17688;
    do {
        *iVar3 = iVar3;
        *(iVar3 + 8) = iVar3;
        iVar3 = iVar3 + 0x10;
    } while (iVar3 < 0x17728);
    iVar3 = (**(*0x18bd0 + 0xa8))(0x17608,0x17040,0,0x17610);
    if (-1 < iVar3) {
        iVar3 = fcn.00014694();
        if (-1 < iVar3) {
            fcn.0001439c(8);
            fcn.000141a0(8);
        }
    }
    uStackX_18 = *0x171d8;
    (**(*0x18bd0 + 0xa8))(&uStackX_18,0x17060,0,0x175f0);
    (**(*0x18bd0 + 0xc0))(0x170f0,0x11508,auStack_128);
    return 0;
}


/* fcn.00016388 @ 0x16388 */

uchar fcn.00016388(void)

{
    char cVar1;
    
    cVar1 = fcn.00016314();
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


/* fcn.0001271c @ 0x1271c */

ulong fcn.0001271c(ulong param_1,ulong param_2,uint64_t param_3,uint64_t param_4)

{
    char cVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t arg1;
    uint32_t uVar6;
    uint64_t noname_2;
    uint64_t uVar7;
    int aiStackX_8 [2];
    
    uVar4 = in(*0x18ebc + 4);
    if ((uVar4 & 1) == 0) {
        uVar2 = in(*0x18ebc);
        param_4 = uVar2;
        uVar4 = in(*0x18ebc + 0x6c);
        param_3 = uVar4 & 0xfffbffff;
        out(*0x18ebc,uVar2 | 0x8d21);
        out(*0x18ebc + 0x6c,uVar4 & 0xfffbffff);
    }
    uVar4 = in(*0x18ebc + 0x34);
    uVar2 = in(*0x18ebc + 0x44);
    uVar3 = in(*0x18eba + 4);
    cVar1 = fcn.00016350(param_1,*0x18eba + 4,param_3);
    uVar7 = ((cVar1 != '\0') + 8) * 0x100;
    fcn.00016900(aiStackX_8);
    cVar1 = fcn.00016350();
    for (; uVar7 <= (((cVar1 != '\0') + 8) * 0x100 | aiStackX_8[0] - 1U); uVar7 = uVar7 + 1) {
        noname_2 = 0;
        arg1 = uVar7 & 0xffffffff;
        fcn.000169a8(arg1);
        do {
            fcn.00016930(arg1,uVar7 & 0xffffffff,noname_2,param_4);
            arg1 = uVar7 & 0xffffffff;
            uVar6 = noname_2 + 1;
            noname_2 = uVar6;
            uVar5 = fcn.000169a8(arg1);
        } while (uVar6 <= uVar5 >> 5);
    }
    out(*0x18eba + 4,uVar3 | 0x178e);
    out(*0x18eba + 6,0xfffe);
    out(*0x18ebc + 0x34,uVar4 | 0x16874);
    out(*0x18ebc + 0x44,uVar2 | 0x13c0);
    uVar4 = in(*0x18ebc + 0x30);
    out(*0x18ebc + 0x30,uVar4 | 2);
    in(*0x18ebc + 0x30);
    return 0;
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


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 24576 named .text
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


/* fcn.00011950 @ 0x11950 */

ulong fcn.00011950(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int *piVar3;
    int *piStackX_8;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar3 == 0x43524244) {
        iVar2 = (**(*0x18bd0 + 0x50))(6,0xf0,&piStackX_8);
        if (iVar2 < 0) {
            uVar1 = 0x8000000000000009;
        }
        else {
            if (piStackX_8 != piVar3) {
                section..text(piStackX_8,piVar3,0xf0);
            }
            piVar3 = piStackX_8 + 2;
            piVar3[0] = 0x171c0;
            piVar3[1] = 0;
            *(piStackX_8 + 4) = *0x171c8;
            **0x171c8 = piVar3;
            *0x171c8 = piVar3;
            *arg2 = piStackX_8 + 2;
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00014694 @ 0x14694 */

int64_t fcn.00014694(void)

{
    int64_t iVar1;
    
    if ((*0x17678 == 0) && (iVar1 = fcn.00012eb4(0x18270,0x1451c,0x10,0x17678), iVar1 < 0)) {
        return iVar1;
    }
    return 0;
}


/* fcn.0001439c @ 0x1439c */

void fcn.0001439c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = arg1 * 0x20;
    if (*(iVar1 + 0x17790) == 4) {
        iVar2 = (*(iVar1 + 0x1779b) << 0x14 | *(iVar1 + 0x17798) >> 4 & 0xff000) + (*(iVar1 + 0x17798) & 0xffff);
        *(iVar2 + 0xc0000000) = *(iVar2 + 0xc0000000) & *(iVar1 + 0x177a8) | *(iVar1 + 0x177ac);
    }
    else if (*(iVar1 + 0x17790) == 5) {
        *(*(iVar1 + 0x17798) | 0xfd000000) =
             *(*(iVar1 + 0x17798) | 0xfd000000) & *(iVar1 + 0x177a8) | *(iVar1 + 0x177ac);
        return;
    }
    return;
}


/* fcn.000141a0 @ 0x141a0 */

void fcn.000141a0(uint32_t arg1)

{
    if (arg1 == 1) {
        *0xc00f80dc = *0xc00f80dc & 0xfffffaff | 0x800;
        return;
    }
    if (arg1 == 2) {
        *0xfd724020 = *0xfd724020 & 0xfeffefef | 0x6000;
    }
    else {
        if (arg1 != 3) {
            if (arg1 == 4) {
                *0xfd724030 = *0xfd724030 & 0xffffefef | 0x6000;
            }
            else {
                if (arg1 != 5) {
                    if (arg1 == 6) {
                        *0xfd724040 = *0xfd724040 & 0xffffefef | 0x6000;
                    }
                    else {
                        if (arg1 != 7) {
                            if (arg1 != 8) {
                                return;
                            }
                            *0xfd724050 = *0xfd724050 & 0x7f8fffff | 0x600000;
                            if ((*0xfd72c210 >> 0xc & 1) == 0) {
                                return;
                            }
                            *0xfd724054 = *0xfd724054 & 0x7f8fffff | 0x600000;
                            return;
                        }
                        *0xfd724040 = *0xfd724040 & 0xffffefef | 0x60;
                    }
                    return;
                }
                *0xfd724030 = *0xfd724030 & 0xffffefef | 0x60;
            }
            return;
        }
        *0xfd724020 = *0xfd724020 & 0xfeffefef | 0x60;
    }
    return;
}


/* fcn.000111b0 @ 0x111b0 */

void fcn.000111b0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011259. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00016ae0 @ 0x16ae0 */

void fcn.00016ae0(void)

{
    char cVar1;
    
    cVar1 = fcn.00016a6c(*0x18d38);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00016b06. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x18bd0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00016b15. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x18bc8 + 0x48))(*0x18d38);
    return;
}


/* fcn.00016a6c @ 0x16a6c */

uint64_t fcn.00016a6c(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x18d30 != 0) {
        puVar2 = *0x18d38 + 8;
        in_RAX = *0x18d38;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x18d30);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00016ab0 @ 0x16ab0 */

ulong fcn.00016ab0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x18bd0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00016b7c @ 0x16b7c */

int64_t fcn.00016b7c(void)

{
    if (*0x18be8 == 0) {
        fcn.00016b1c(0x17100,0x18be8);
    }
    return *0x18be8;
}


/* fcn.00016b1c @ 0x16b1c */

ulong fcn.00016b1c(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x18bc0;
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


/* fcn.00016bac @ 0x16bac */

void fcn.00016bac(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00016b7c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00016be3:
            if ((piVar1 == NULL) || ((*0x17f08 == *(piVar1 + 4) && (*0x17f10 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00016be3;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000112f0 @ 0x112f0 */

uint64_t fcn.000112f0(void)

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


/* fcn.000112e0 @ 0x112e0 */

void fcn.000112e0(void)

{
    return;
}


/* fcn.00011190 @ 0x11190 */

uint64_t fcn.00011190(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011262 @ 0x11262 */

void fcn.00011262(void)

{
    return;
}


/* fcn.000112d0 @ 0x112d0 */

void fcn.000112d0(void)

{
    return;
}


/* fcn.00013d74 @ 0x13d74 */

int64_t fcn.00013d74(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint64_t *puVar3;
    
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 8);
    puVar3 = 0x17570;
    uVar2 = 0;
    while (((uVar1 != 0 || (*CONCAT44(in_register_0000000c,arg1) < *puVar3)) && (uVar1 != *puVar3))) {
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 2;
        if (7 < uVar2) {
            return 0;
        }
    }
    return uVar2 * 0x10 + 0x17570;
}


/* fcn.00013e30 @ 0x13e30 */

//WARNING: Removing unreachable block (ram,0x00013eed)

void fcn.00013e30(int64_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t in_RDX;
    unkbyte7 in_R8;
    int64_t iVar5;
    
    puVar2 = 0x18e80;
    do {
        puVar2[1] = 0xffffffffffffffff;
        *puVar2 = 0;
        puVar2 = puVar2 + 3;
    } while (puVar2 < 0x18eb0);
    iVar3 = *0x171c0;
    do {
        if (iVar3 == 0x171c0) {
            if (*0x18e80 == 0) {
                fcn.00013cb4(0x18950);
            }
            else {
                if (*0x18e88 == 80000000) {
                    *0xfe001020 = *0xfe001020 | 6;
                    *0x18e90 = 3;
                }
                else if (*0x18e88 == 160000000) {
                    *0xfe001020 = *0xfe001020 & 0xfd | 4;
                    *0x18e90 = 2;
                }
                else if (*0x18e88 == 320000000) {
                    *0xfe001020 = *0xfe001020 & 0xfb | 2;
                    *0x18e90 = 1;
                }
                else if (*0x18e88 == 640000000) {
                    *0xfe001020 = *0xfe001020 & 0xf9;
                    *0x18e90 = 0;
                }
                if (*(arg1 + 0x49) == '\x0e') {
                    in_RDX = CONCAT71(in_RDX >> 8,1);
                    fcn.00012b28(0x18988,in_RDX,CONCAT71(in_R8,1));
                }
            }
            if (*0x18e98 == 0) {
                fcn.00013cb4(0x189b8);
            }
            else {
                if (*0x18ea0 == 15000) {
                    *0xfe001020 = *0xfe001020 & 0x3f;
                    *0x18ea8 = 7;
                }
                else if (*0x18ea0 == 160000) {
                    *0xfe001020 = *0xfe001020 & 0x3f | 0x40;
                    *0x18ea8 = 6;
                }
                else if (*0x18ea0 == 320000) {
                    *0xfe001020 = *0xfe001020 & 0x3f | 0x80;
                    *0x18ea8 = 5;
                }
                else if (*0x18ea0 == 640000) {
                    *0xfe001020 = *0xfe001020 | 0xc0;
                    *0x18ea8 = 4;
                }
                if (*(arg1 + 0x49) == '\x06') {
                    fcn.00013cb4(0x189b8);
                    fcn.00012b28(0x189f0,CONCAT71(in_RDX >> 8,1),CONCAT71(in_R8,1));
                    fcn.00013c58(0x189b8);
                }
            }
            return;
        }
        iVar5 = iVar3 + -8;
        if ((*(iVar3 + 0xc0) == 5) && (*(iVar3 + 0xd0) != '\0')) {
            iVar3 = fcn.00013d74(iVar3 + 0x88);
            if (iVar3 == 0) {
                return;
            }
            uVar4 = *(iVar3 + 8);
            if (1 < *(iVar3 + 8)) {
                do {
                    fcn.00011260();
                } while( true );
            }
            in_RDX = uVar4 * 3;
            if (*(iVar5 + 0x98) < *(uVar4 * 0x18 + 0x18e88)) {
                *(uVar4 * 0x18 + 0x18e88) = *(iVar5 + 0x98);
            }
            piVar1 = uVar4 * 0x18 + 0x18e80;
            *piVar1 = *piVar1 + 1;
        }
        iVar3 = *(iVar5 + 8);
    } while( true );
}


/* fcn.00013cf0 @ 0x13cf0 */

ulong fcn.00013cf0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint in_R8;
    
    cVar1 = *CONCAT44(in_R8,arg3);
    *arg1 = CONCAT44(in_R8,arg3);
    if (((((cVar1 == '\x02') && (*(CONCAT44(in_R8,arg3) + 1) == '\x01')) && (*(CONCAT44(in_R8,arg3) + 2) == 0xc)) &&
        ((*(CONCAT44(in_R8,arg3) + 4) == 0xa0341d0 && (uVar3 = 0, *(CONCAT44(in_R8,arg3) + 8) == 0)))) &&
       ((*(CONCAT44(in_R8,arg3) + 0xc) == '\x01' &&
        ((*(CONCAT44(in_R8,arg3) + 0xd) == '\x01' && (*(CONCAT44(in_R8,arg3) + 0xe) == 6)))))) {
        do {
            if ((*(CONCAT44(in_R8,arg3) + 0x11) == *(uVar3 * 8 + 0x17561)) &&
               (*(CONCAT44(in_R8,arg3) + 0x10) == *(uVar3 * 8 + 0x17560))) {
                *arg2 = *(uVar3 * 8 + 0x17564);
                return 0;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 2);
    }
    return 0x8000000000000003;
}


/* fcn.00013be0 @ 0x13be0 */

ulong fcn.00013be0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t in_RAX;
    uint64_t uVar3;
    char *pcVar4;
    uchar uVar5;
    
    pcVar4 = arg2 + 0x19;
    uVar3 = 0;
    arg1 = arg1 - arg2;
    uVar5 = 1;
    do {
        in_RAX = CONCAT71(in_RAX >> 8,*pcVar4);
        if ((pcVar4[arg1] != *pcVar4) || (in_RAX = *(pcVar4 + -0x11), *(pcVar4 + arg1 + -0x11) != *(pcVar4 + -0x11)))
        goto code_r0x00013c4f;
        uVar2 = *(pcVar4 + -9);
        in_RAX = uVar2;
        if (*(pcVar4 + arg1 + -9) != uVar2) goto code_r0x00013c4f;
        uVar3 = uVar3 + 1;
        pcVar4 = pcVar4 + 0x18;
    } while (uVar3 < 2);
    cVar1 = *(arg2 + 0x49);
    in_RAX = CONCAT31(uVar2 >> 8,cVar1);
    if ((((arg2 + 0x49)[arg1] != cVar1) || (in_RAX = *(arg2 + 0x38), *(arg2 + 0x38 + arg1) != *(arg2 + 0x38))) ||
       (in_RAX = *(arg2 + 0x40), *(arg2 + 0x40 + arg1) != *(arg2 + 0x40))) {
code_r0x00013c4f:
        uVar5 = 0;
    }
    return CONCAT71(in_RAX >> 8,uVar5);
}


/* fcn.00012b28 @ 0x12b28 */

void fcn.00012b28(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint uVar10;
    ulong uStackX_8;
    
    if (arg1 != 0) {
        uVar3 = *(arg1 + 0x11);
        uVar10 = 0;
        uStackX_8 = 0;
        uVar9 = 1LL << (uVar3 & 0x3f);
        if (arg3 == '\0') {
            uVar9 = ~uVar9;
        }
        uVar5 = (arg2 & 0xffU) << (uVar3 & 0x3f);
        if (-1 < *arg1) {
            if (*arg1 < 2) {
                uVar4 = *0x18ebc;
                if (*arg1 != 0) {
                    uVar4 = *0x18eba;
                }
                cVar1 = *(arg1 + 0x10);
                uVar2 = *(arg1 + 8);
                if (cVar1 != '\x01') {
                    if (cVar1 == '\x02') {
                        uVar10 = 1;
                    }
                    else if (cVar1 == '\x04') {
                        uVar10 = 2;
                    }
                    else if ((cVar1 == '\b') && (uVar10 = 2, 0x1f < uVar3)) {
                        uVar2 = uVar2 + 4;
                        uVar9 = 1LL << (uVar3 - 0x20 & 0x3f);
                        if (arg3 == '\0') {
                            uVar9 = ~uVar9;
                        }
                        uVar5 = (arg2 & 0xffU) << (uVar3 - 0x20 & 0x3f);
                    }
                }
                (**(*0x18bd0 + 0x40))(*0x18bd0 + 0x30,uVar10,uVar4 + uVar2,1,&uStackX_8);
                uStackX_8 = uVar9 & uStackX_8 | uVar5;
                (**(*0x18bd0 + 0x48))(*0x18bd0 + 0x30,uVar10,uVar4 + uVar2,1,&uStackX_8);
            }
            else {
                uVar6 = uVar9;
                uVar7 = uVar9;
                uVar8 = uVar9;
                uVar3 = uVar5;
                uVar4 = uVar5;
                uVar2 = uVar5;
                if (*arg1 < 4) {
                    cVar1 = *(arg1 + 0x10);
                    if (cVar1 == '\x01') {
                        **(arg1 + 8) = **(arg1 + 8) & uVar6 | uVar3;
                    }
                    else if (cVar1 == '\x02') {
                        **(arg1 + 8) = **(arg1 + 8) & uVar7 | uVar4;
                    }
                    else if (cVar1 == '\x04') {
                        **(arg1 + 8) = **(arg1 + 8) & uVar8 | uVar2;
                    }
                    else if (cVar1 == '\b') {
                        uStackX_8 = CONCAT44(*(*(arg1 + 8) + 4),**(arg1 + 8));
                        uVar5 = uVar9 & uStackX_8 | uVar5;
                        **(arg1 + 8) = uVar5;
                        *(*(arg1 + 8) + 4) = uVar5 >> 0x20;
                    }
                }
                else if (*arg1 == 4) {
                    cVar1 = *(arg1 + 0x10);
                    uVar5 = *(arg1 + 8);
                    uVar9 = *(arg1 + 8) >> 4 & 0xff000 | *(arg1 + 0xb) << 0x14;
                    if (cVar1 == '\x01') {
                        *(uVar9 + uVar5 + 0xc0000000) = *(uVar9 + uVar5 + 0xc0000000) & uVar6 | uVar3;
                    }
                    else if (cVar1 == '\x02') {
                        *(uVar9 + uVar5 + 0xc0000000) = *(uVar9 + uVar5 + 0xc0000000) & uVar7 | uVar4;
                    }
                    else if (cVar1 == '\x04') {
                        *(uVar9 + uVar5 + 0xc0000000) = *(uVar9 + uVar5 + 0xc0000000) & uVar8 | uVar2;
                    }
                }
                else if (*arg1 == 5) {
                    cVar1 = *(arg1 + 0x10);
                    if (cVar1 == '\x01') {
                        *(*(arg1 + 8) | 0xfd000000) = *(*(arg1 + 8) | 0xfd000000) & uVar6 | uVar3;
                    }
                    else if (cVar1 == '\x02') {
                        *(*(arg1 + 8) | 0xfd000000) = *(*(arg1 + 8) | 0xfd000000) & uVar7 | uVar4;
                    }
                    else if (cVar1 == '\x04') {
                        *(*(arg1 + 8) | 0xfd000000) = *(*(arg1 + 8) | 0xfd000000) & uVar8 | uVar2;
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00013c58 @ 0x13c58 */

void fcn.00013c58(int64_t arg1)

{
    unkbyte7 in_RDX;
    int *arg1_00;
    int64_t iVar1;
    ulong in_R8;
    
    arg1_00 = arg1 + 8;
    iVar1 = 2;
    do {
        if (*arg1_00 != -1) {
            in_R8 = 0;
            fcn.00012b28(arg1_00,CONCAT71(in_RDX,1),0);
        }
        arg1_00 = arg1_00 + 6;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (*(arg1 + 0x38) != -1) {
        fcn.00012b28(arg1 + 0x38,CONCAT71(in_RDX,1),CONCAT71(in_R8 >> 8,1));
    }
    return;
}


/* fcn.00012f60 @ 0x12f60 */

//WARNING: Removing unreachable block (ram,0x00012b64)
//WARNING: Removing unreachable block (ram,0x00012e39)

void fcn.00012f60(int64_t arg1)

{
    int *arg1_00;
    uint32_t *puVar1;
    uint16_t *puVar2;
    uint8_t *puVar3;
    char cVar4;
    uint32_t uVar5;
    ulong in_RDX;
    uint8_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong in_R8;
    uint uVar13;
    ulong uStackX_8;
    
    arg1_00 = arg1 + 0x38;
    if (*arg1_00 != -1) {
        fcn.00012b28(arg1_00,CONCAT71(in_RDX >> 8,1),CONCAT71(in_R8 >> 8,1));
        do {
            cVar4 = fcn.000128ac(arg1_00);
        } while (cVar4 != '\0');
    }
    uVar13 = 0;
    uStackX_8 = 0;
    uVar12 = 1LL << (*0x18689 & 0x3f);
    uVar8 = 1LL << (*0x18689 & 0x3f);
    if (-1 < *0x18678) {
        if (*0x18678 < 2) {
            uVar7 = *0x18ebc;
            if (*0x18678 != 0) {
                uVar7 = *0x18eba;
            }
            uVar5 = *0x18680;
            if (*0x18688 != '\x01') {
                if (*0x18688 == '\x02') {
                    uVar13 = 1;
                }
                else if (*0x18688 == '\x04') {
                    uVar13 = 2;
                }
                else if ((*0x18688 == '\b') && (uVar13 = 2, 0x1f < *0x18689)) {
                    uVar5 = uVar5 + 4;
                    uVar12 = 1LL << (*0x18689 - 0x20 & 0x3f);
                    uVar8 = 1LL << (*0x18689 - 0x20 & 0x3f);
                }
            }
            (**(*0x18bd0 + 0x40))(*0x18bd0 + 0x30,uVar13,uVar7 + uVar5,1,&uStackX_8);
            uStackX_8 = uVar12 & uStackX_8 | uVar8;
            (**(*0x18bd0 + 0x48))(*0x18bd0 + 0x30,uVar13,uVar7 + uVar5,1,&uStackX_8);
        }
        else {
            uVar9 = uVar12;
            uVar10 = uVar12;
            uVar11 = uVar12;
            uVar6 = uVar8;
            uVar7 = uVar8;
            uVar5 = uVar8;
            if (*0x18678 < 4) {
                if (*0x18688 == '\x01') {
                    puVar3 = CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680)));
                    *puVar3 = *puVar3 & uVar9 | uVar6;
                }
                else if (*0x18688 == '\x02') {
                    puVar2 = CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680)));
                    *puVar2 = *puVar2 & uVar10 | uVar7;
                }
                else if (*0x18688 == '\x04') {
                    puVar1 = CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680)));
                    *puVar1 = *puVar1 & uVar11 | uVar5;
                }
                else if (*0x18688 == '\b') {
                    uStackX_8 = CONCAT44(*(CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))) + 4),
                                         *CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))));
                    uVar8 = uVar12 & uStackX_8 | uVar8;
                    *CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))) = uVar8;
                    *(CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))) + 4) = uVar8 >> 0x20;
                }
            }
            else if (*0x18678 == 4) {
                uVar12 = *0x18680;
                uVar8 = (CONCAT12(*0x18682,*0x18680) & 0xff0000) >> 4 | *0x18683 << 0x14;
                if (*0x18688 == '\x01') {
                    *(uVar8 + uVar12 + 0xc0000000) = *(uVar8 + uVar12 + 0xc0000000) & uVar9 | uVar6;
                }
                else if (*0x18688 == '\x02') {
                    *(uVar8 + uVar12 + 0xc0000000) = *(uVar8 + uVar12 + 0xc0000000) & uVar10 | uVar7;
                }
                else if (*0x18688 == '\x04') {
                    *(uVar8 + uVar12 + 0xc0000000) = *(uVar8 + uVar12 + 0xc0000000) & uVar11 | uVar5;
                }
            }
            else if (*0x18678 == 5) {
                if (*0x18688 == '\x01') {
                    *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) =
                         *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) & uVar9 | uVar6;
                }
                else if (*0x18688 == '\x02') {
                    *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) =
                         *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) & uVar10 | uVar7;
                }
                else if (*0x18688 == '\x04') {
                    *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) =
                         *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) & uVar11 | uVar5;
                }
            }
        }
    }
    return;
}


/* fcn.000128ac @ 0x128ac */

bool fcn.000128ac(int64_t arg1)

{
    char cVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uStackX_8;
    
    uVar3 = 0;
    if (arg1 == 0) {
        return false;
    }
    uStackX_8 = 0;
    if (*arg1 < 0) {
        return false;
    }
    if (*arg1 < 2) {
        uVar2 = *0x18ebc;
        if (*arg1 != 0) {
            uVar2 = *0x18eba;
        }
        uVar5 = *(arg1 + 8);
        cVar1 = *(arg1 + 0x10);
        if (cVar1 != '\x01') {
            if (cVar1 == '\x02') {
                uVar3 = 1;
            }
            else if (cVar1 == '\x04') {
                uVar3 = 2;
            }
            else if (cVar1 == '\b') {
                uVar3 = 3;
            }
        }
        uVar4 = *(arg1 + 0x11);
        if ((uVar3 == 3) && (uVar3 = 2, 0x1f < *(arg1 + 0x11))) {
            uVar5 = uVar5 + 4;
            uVar4 = uVar4 - 0x20;
        }
        (**(*0x18bd0 + 0x40))(*0x18bd0 + 0x30,uVar3,uVar2 + uVar5,1,&uStackX_8);
        uVar3 = uStackX_8 >> (uVar4 & 0x3f);
code_r0x00012b1b:
        uStackX_8 = uVar3 & 1;
    }
    else {
        uStackX_8 = uVar3;
        if (*arg1 < 4) {
            cVar1 = *(arg1 + 0x10);
            if (cVar1 == '\x01') {
                uStackX_8 = **(arg1 + 8);
            }
            else if (cVar1 == '\x02') {
                uStackX_8 = **(arg1 + 8);
            }
            else if (cVar1 == '\x04') {
                uStackX_8 = **(arg1 + 8);
            }
            else if (cVar1 == '\b') {
                uStackX_8 = CONCAT44(*(*(arg1 + 8) + 4),**(arg1 + 8));
            }
        }
        else {
            if (*arg1 == 4) {
                cVar1 = *(arg1 + 0x10);
                uVar6 = *(arg1 + 8);
                uVar4 = *(arg1 + 8) >> 4 & 0xff000 | *(arg1 + 0xb) << 0x14;
                if (cVar1 == '\x01') {
                    uVar3 = *(uVar4 + uVar6 + 0xc0000000);
                }
                else if (cVar1 == '\x02') {
                    uVar3 = *(uVar4 + uVar6 + 0xc0000000);
                }
                else if (cVar1 == '\x04') {
                    uVar3 = *(uVar4 + uVar6 + 0xc0000000);
                }
                uVar3 = uVar3 >> (*(arg1 + 0x11) & 0x3f);
                goto code_r0x00012b1b;
            }
            if (*arg1 != 5) {
                return false;
            }
            cVar1 = *(arg1 + 0x10);
            if (cVar1 == '\x01') {
                uStackX_8 = *(*(arg1 + 10) << 0x10 | 0xfd000000 | *(arg1 + 8));
            }
            else if (cVar1 == '\x02') {
                uStackX_8 = *(*(arg1 + 10) << 0x10 | 0xfd000000 | *(arg1 + 8));
            }
            else {
                if (cVar1 != '\x04') goto code_r0x00012a84;
                uStackX_8 = *(*(arg1 + 10) << 0x10 | 0xfd000000 | *(arg1 + 8));
            }
        }
code_r0x00012a84:
        uStackX_8 = uStackX_8 & 1LL << (*(arg1 + 0x11) & 0x3f);
    }
    return uStackX_8 != 0;
}


/* fcn.00011e4c @ 0x11e4c */

void fcn.00011e4c(uint32_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    
    if (((arg1 >> 0xd & 1) != 0) && (uVar1 = in(*0x18eba + 4), uVar1 < '\0')) {
        fcn.00012f60(0x180b0);
    }
    uVar2 = in(*0x18ebc);
    if ((uVar2 & 0x800) != 0) {
        out(*0x18ebc,0x800);
    }
    if (((arg2 == '\0') && (uVar3 = in(*0x18ebc + 0x7c), (uVar3 & 0x40000) != 0)) &&
       (uVar3 = in(*0x18ebc + 0x6c), (uVar3 & 0x40000) != 0)) {
        out(*0x18ebc + 0x6c,0x40000);
    }
    if ((arg1 & 0x8000000) != 0) {
        out(*0x18ebc + 0x34,0x8000000);
    }
    return;
}


/* fcn.000169dc @ 0x169dc */

ulong fcn.000169dc(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x18bd8 == NULL) {
        iVar1 = (**(*0x18bd0 + 0xd0))(0x17010,0,0x18be0);
        if ((iVar1 < 0) || (*0x18be0 == NULL)) {
            *0x18bd8 = NULL;
        }
        else {
            *0x18bd8 = **0x18be0;
        }
        if (*0x18bd8 == NULL) {
            return 0x8000000000000003;
        }
    }
    uVar2 = (**0x18bd8)(*0x18be0,1,arg1 & 0xffffffff,0,0x17170,0);
    return uVar2;
}


/* fcn.00016cac @ 0x16cac */

int64_t fcn.00016cac(int64_t arg1)

{
    int64_t iVar1;
    uint in_stack_00000028;
    
    iVar1 = fcn.00016c5c();
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else if (*0x18bf8 != NULL) {
        iVar1 = (***0x18bf8)(0,0,"SmmFunction",arg1,0,in_stack_00000028,0);
    }
    return iVar1;
}


/* fcn.00016d04 @ 0x16d04 */

int64_t fcn.00016d04(int64_t arg1)

{
    int64_t iVar1;
    uint in_stack_00000028;
    
    iVar1 = fcn.00016c5c();
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else if (*0x18bf8 != NULL) {
        iVar1 = (***0x18bf8)(0,0,"SmmFunction",arg1,0,in_stack_00000028,1);
    }
    return iVar1;
}


/* fcn.00012480 @ 0x12480 */

void fcn.00012480(void)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t arg1;
    uint32_t *arg3;
    ulong uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    ulong uStackX_20;
    
    arg1 = 0;
    uStackX_20 = 0;
    uVar5 = arg1;
    if (*0x18eb4 != 0) {
        do {
            uVar1 = fcn.000163b4(uVar5);
            iVar7 = uVar5;
            uVar8 = (uVar1 & 0x1f) << 3;
            uVar1 = fcn.00016468(uVar5 & 0xffffffff);
            iVar9 = (uVar8 | uVar1 & 7) * 0x1000;
            if (*(((uVar8 & 0x100000) << 8 | (uVar8 & 0xfffff | uVar1 & 7) << 0xc) + 0xc0000000) != -1) {
                uVar5 = iVar9 + 0xdb;
                uVar5 = uVar5 >> 4 & 0x10000000 | uVar5 & 0xffffffff;
                *(uVar5 + 0xc0000000) = *(uVar5 + 0xc0000000) & 0x7f;
                uVar5 = iVar9 + 0xdc;
                *((uVar5 >> 4 & 0x10000000 | uVar5 & 0xffffffff) + 0xc0000000) = 0x80000000;
            }
            uVar5 = iVar7 + 1U;
        } while (iVar7 + 1U < *0x18eb4);
    }
    cVar2 = fcn.00016d5c();
    if (((cVar2 == '\0') || (cVar2 == '\x01')) || (uVar4 = 1, cVar2 != '\x02')) {
        uVar4 = 3;
    }
    uVar5 = uVar4;
    do {
        arg3 = auStackX_18;
        fcn.00016270(arg1,auStackX_10,arg3);
        uVar8 = ((auStackX_10[0] & 0x1f) << 3 | auStackX_18[0] & 7) << 0xc;
        if (*(uVar8 + 0xc0000000) != -1) {
            *(uVar8 + 0xc00000db) = *(uVar8 + 0xc00000db) & 0x7f;
            *(uVar8 + 0xc00000dc) = 0x80000000;
        }
        arg1 = arg1 + 1;
        uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    out(*0x18ebc,0x4000);
    fcn.00012b28(0x18008,CONCAT31(*0x18ebc >> 8,1),CONCAT71(arg3 >> 8,1));
    fcn.00013cb4(0x17fd0);
    uVar4 = in(*0x18ebc + 4);
    if ((uVar4 & 0x1c00) == 0x1400) {
        fcn.000169dc(0x1400,0x3078001);
        *0x18eb0 = 0;
        fcn.000111a0();
    }
    uVar6 = 0;
    (**(*0x18bd0 + 0xa8))(&uStackX_20,0x171a0,0,0);
    out(*0x18ebc + 4,uVar4 | 0x2000);
    if ((uVar4 & 0x1c00) != 0x400) {
        do {
            fcn.00011260();
        } while( true );
    }
    do {
        iVar3 = in(*0x18ebc);
    } while (-1 < iVar3);
    iVar9 = *0x18ebc + 4;
    uVar4 = in(iVar9);
    if ((uVar4 & 1) == 0) {
        iVar9 = *0x18ebc + 4;
        out(iVar9,uVar4 & 0xffffe3ff);
    }
    fcn.00012b28(0x18008,CONCAT71(iVar9 >> 8,1),CONCAT71(uVar6 >> 8,1));
    fcn.00013c58(0x17fd0);
    return;
}


/* fcn.000163b4 @ 0x163b4 */

uchar fcn.000163b4(uint32_t arg1)

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


/* fcn.00016468 @ 0x16468 */

uint8_t fcn.00016468(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uStackX_8;
    
    uVar2 = fcn.00016388();
    if (arg1 < (uVar2 & 0xff)) {
        iVar1 = (arg1 >> 2) * 3;
        uStackX_8 = *((*(iVar1 + 0x17ef1) | 0xfd00) << 0x10) >> ((arg1 - *(iVar1 + 0x17ef2)) * '\x04' & 0x3fU) & 7;
    }
    return uStackX_8;
}


/* fcn.00016d5c @ 0x16d5c */

ulong fcn.00016d5c(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.000112a0(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x00016e77;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x00016e77;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x00016dbb;
                    }
                }
code_r0x00016db9:
                uVar3 = 2;
                goto code_r0x00016dbb;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x00016db9;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x00016dbb;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x00016dbb;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x00016dbb;
            goto code_r0x00016db9;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x00016dbb;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x00016dbb;
        }
    }
code_r0x00016e77:
    uVar3 = 0;
code_r0x00016dbb:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.00016270 @ 0x16270 */

ulong fcn.00016270(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00016d5c();
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
            cVar1 = fcn.00016d5c();
            if (cVar1 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x000162f5;
        }
    }
    *arg3 = 0;
code_r0x000162f5:
    *arg2 = 6;
    return 0;
}


/* fcn.00013cb4 @ 0x13cb4 */

void fcn.00013cb4(int64_t arg1)

{
    int *arg1_00;
    int64_t iVar1;
    
    arg1_00 = arg1 + 8;
    iVar1 = 2;
    do {
        if (*arg1_00 != -1) {
            fcn.00012b28(arg1_00,0,0);
        }
        arg1_00 = arg1_00 + 6;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.000111a0 @ 0x111a0 */

void fcn.000111a0(void)

{
    return;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.00016350 @ 0x16350 */

ulong fcn.00016350(void)

{
    char cVar1;
    
    cVar1 = fcn.00016314();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00016314(), cVar1 != '\x05')) && (cVar1 = fcn.00016314(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00016314(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00016900 @ 0x16900 */

ulong fcn.00016900(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00016350();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x17a90;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x17cd0;
    }
    return uVar2;
}


/* fcn.000169a8 @ 0x169a8 */

ushort fcn.000169a8(int64_t arg1)

{
    ushort uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t auStackX_8 [8];
    
    uVar3 = arg1;
    iVar2 = fcn.00016900(auStackX_8);
    if ((uVar3 & 0x1f) < auStackX_8[0]) {
        uVar1 = *((uVar3 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00016930 @ 0x16930 */

ulong fcn.00016930(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint auStackX_8 [6];
    uint uStackX_20;
    
    auStackX_8[0] = arg1;
    uStackX_20 = 0;
    uVar5 = arg2 & 0x1f;
    iVar2 = fcn.00016900(auStackX_8);
    iVar6 = (uVar5 & 0xffffffff) * 0x1e;
    uVar1 = *(iVar6 + 0xe + iVar2);
    if (uVar1 == 0xffff) {
        uVar3 = 0x8000000000000003;
    }
    else {
        uVar4 = uVar1 + noname_2 * 4;
        uVar3 = 0;
        *((uVar4 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar6 + iVar2) << 0x10 | uVar4 & 0xffff) = 0xffffffff;
    }
    return uVar3;
}


/* fcn.00012eb4 @ 0x12eb4 */

ulong fcn.00012eb4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint auStack_f8 [8];
    uchar auStack_d8 [168];
    uint uStack_30;
    int64_t iStack_18;
    uint uStack_10;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        fcn.00011040(auStack_f8,0xf0);
        auStack_f8[0] = 0x43524244;
        uStack_30 = 6;
        uStack_10 = arg3;
        iStack_18 = arg2;
        if (auStack_d8 != arg1) {
            section..text(auStack_d8,arg1,0x68);
        }
        fcn.00011950(auStack_f8,arg4);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001324c @ 0x1324c */

//WARNING: Removing unreachable block (ram,0x00012b64)
//WARNING: Removing unreachable block (ram,0x00012e39)

void fcn.0001324c(void)

{
    uint32_t *puVar1;
    uint16_t *puVar2;
    uint8_t *puVar3;
    int iVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint uVar13;
    ulong uStackX_8;
    
    iVar4 = 1000;
    *0xc00fd0dc = *0xc00fd0dc & 0xfffffbff | 0x100;
    do {
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar13 = 0;
    uStackX_8 = 0;
    uVar12 = 1LL << (*0x18689 & 0x3f);
    uVar8 = 1LL << (*0x18689 & 0x3f);
    if (-1 < *0x18678) {
        if (*0x18678 < 2) {
            uVar7 = *0x18ebc;
            if (*0x18678 != 0) {
                uVar7 = *0x18eba;
            }
            uVar5 = *0x18680;
            if (*0x18688 != '\x01') {
                if (*0x18688 == '\x02') {
                    uVar13 = 1;
                }
                else if (*0x18688 == '\x04') {
                    uVar13 = 2;
                }
                else if ((*0x18688 == '\b') && (uVar13 = 2, 0x1f < *0x18689)) {
                    uVar5 = uVar5 + 4;
                    uVar12 = 1LL << (*0x18689 - 0x20 & 0x3f);
                    uVar8 = 1LL << (*0x18689 - 0x20 & 0x3f);
                }
            }
            (**(*0x18bd0 + 0x40))(*0x18bd0 + 0x30,uVar13,uVar7 + uVar5,1,&uStackX_8);
            uStackX_8 = uVar12 & uStackX_8 | uVar8;
            (**(*0x18bd0 + 0x48))(*0x18bd0 + 0x30,uVar13,uVar7 + uVar5,1,&uStackX_8);
        }
        else {
            uVar9 = uVar12;
            uVar10 = uVar12;
            uVar11 = uVar12;
            uVar6 = uVar8;
            uVar7 = uVar8;
            uVar5 = uVar8;
            if (*0x18678 < 4) {
                if (*0x18688 == '\x01') {
                    puVar3 = CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680)));
                    *puVar3 = *puVar3 & uVar9 | uVar6;
                }
                else if (*0x18688 == '\x02') {
                    puVar2 = CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680)));
                    *puVar2 = *puVar2 & uVar10 | uVar7;
                }
                else if (*0x18688 == '\x04') {
                    puVar1 = CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680)));
                    *puVar1 = *puVar1 & uVar11 | uVar5;
                }
                else if (*0x18688 == '\b') {
                    uStackX_8 = CONCAT44(*(CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))) + 4),
                                         *CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))));
                    uVar8 = uVar12 & uStackX_8 | uVar8;
                    *CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))) = uVar8;
                    *(CONCAT44(*0x18684,CONCAT13(*0x18683,CONCAT12(*0x18682,*0x18680))) + 4) = uVar8 >> 0x20;
                }
            }
            else if (*0x18678 == 4) {
                uVar12 = *0x18680;
                uVar8 = (CONCAT12(*0x18682,*0x18680) & 0xff0000) >> 4 | *0x18683 << 0x14;
                if (*0x18688 == '\x01') {
                    *(uVar8 + uVar12 + 0xc0000000) = *(uVar8 + uVar12 + 0xc0000000) & uVar9 | uVar6;
                }
                else if (*0x18688 == '\x02') {
                    *(uVar8 + uVar12 + 0xc0000000) = *(uVar8 + uVar12 + 0xc0000000) & uVar10 | uVar7;
                }
                else if (*0x18688 == '\x04') {
                    *(uVar8 + uVar12 + 0xc0000000) = *(uVar8 + uVar12 + 0xc0000000) & uVar11 | uVar5;
                }
            }
            else if (*0x18678 == 5) {
                if (*0x18688 == '\x01') {
                    *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) =
                         *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) & uVar9 | uVar6;
                }
                else if (*0x18688 == '\x02') {
                    *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) =
                         *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) & uVar10 | uVar7;
                }
                else if (*0x18688 == '\x04') {
                    *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) =
                         *(CONCAT12(*0x18682,*0x18680) | 0xfd000000) & uVar11 | uVar5;
                }
            }
        }
    }
    return;
}


/* fcn.0001622c @ 0x1622c */

uint64_t fcn.0001622c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    if (3 < arg1 - 0x40U) {
        uVar1 = fcn.000163b4(arg1);
        *arg2 = uVar1;
        uVar4 = fcn.00016468(arg1);
        *arg3 = uVar4 & 0xff;
        return uVar4;
    }
    uVar4 = arg1 - 0x40;
    cVar2 = fcn.00016d5c();
    if (((cVar2 == '\0') || (cVar2 == '\x01')) || (uVar3 = 1, cVar2 != '\x02')) {
        uVar3 = 3;
    }
    if (uVar3 < uVar4) {
        return 0x8000000000000002;
    }
    if (arg1 != 0x40) {
        if (uVar4 == 1) {
            *arg2 = 1;
            *arg3 = 0;
            return 0;
        }
        if (uVar4 == 2) {
            cVar2 = fcn.00016d5c();
            if (cVar2 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x000162f5;
        }
    }
    *arg3 = 0;
code_r0x000162f5:
    *arg2 = 6;
    return 0;
}


/* fcn.00013a7c @ 0x13a7c */

void fcn.00013a7c(void)

{
    uint32_t uVar1;
    
    uVar1 = *0xc00fd010 & 0xfffff000;
    if (uVar1 != 0xfe010000) {
        uVar1 = 0xfe010000;
        *0xc00fd010 = 0xfe010000;
        *0xc00fd004 = *0xc00fd004 & 0xfd | 2;
    }
    *(uVar1 + 4) = *(uVar1 + 4) | 1;
    return;
}


/* fcn.00011060 @ 0x11060 */

int64_t fcn.00011060(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00014c80 @ 0x14c80 */

void fcn.00014c80(void)

{
    uint32_t *puVar1;
    ulong uVar2;
    int64_t arg2;
    uint8_t uVar3;
    uint32_t uVar4;
    char cVar5;
    uint32_t arg1;
    ulong uVar6;
    int64_t arg3;
    
    arg1 = 0;
    uVar3 = *0xfd72c210 >> 0xc & 1;
    if (uVar3 != 0xff) {
        do {
            cVar5 = arg1;
            uVar4 = arg1 * 4 + 0x4050;
            if (*(uVar4 | 0xfd720000) < 0) {
                uVar6 = 0;
                fcn.000164c4(arg1,0,3,0);
                uVar2 = 0;
                arg3 = CONCAT71(uVar6 >> 8,cVar5);
                fcn.00014bb8(0x4020,0,arg3);
                arg2 = CONCAT71(uVar2 >> 8,1);
                fcn.00014bb8(0x4030,arg2,CONCAT71(arg3 >> 8,cVar5));
                if (cVar5 == '\0') {
                    fcn.00014bb8(0x4020,CONCAT71(arg2 >> 8,3),0);
                }
                puVar1 = uVar4 | 0xfd720000;
                *puVar1 = *puVar1 & 0xffefffff | 0x80000000;
            }
            arg1 = cVar5 + 1U;
        } while (cVar5 + 1U < uVar3 + 1);
    }
    return;
}


/* fcn.00014454 @ 0x14454 */

ulong fcn.00014454(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t arg1_00;
    int64_t *piVar4;
    uint *puStackX_20;
    
    arg1_00 = arg2;
    iVar2 = (**(*0x18bd0 + 0x50))(6);
    if (iVar2 < 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        fcn.00011060(puStackX_20,0x20,0);
        iVar2 = arg1_00 * 0x10;
        *(puStackX_20 + 6) = arg1;
        *puStackX_20 = 0x43525345;
        piVar4 = puStackX_20 + 2;
        *piVar4 = iVar2 + 0x17688;
        puVar1 = *(iVar2 + 0x17690);
        *(puStackX_20 + 4) = puVar1;
        *puVar1 = piVar4;
        *(iVar2 + 0x17690) = piVar4;
        fcn.0001439c(arg2 & 0xffffffff);
        fcn.000141a0(arg1_00);
        piVar4 = arg1_00 * 8 + 0x17728;
        *piVar4 = *piVar4 + 1;
        *arg3 = puStackX_20 + 2;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000142c4 @ 0x142c4 */

void fcn.000142c4(uint32_t arg1)

{
    if (arg1 == 2) {
        *0xfd724020 = *0xfd724020 & 0xfeff8fef;
    }
    else {
        if (arg1 != 3) {
            if (arg1 == 4) {
                *0xfd724030 = *0xfd724030 & 0xffff8fef;
                return;
            }
            if (arg1 == 5) {
                *0xfd724030 = *0xfd724030 & 0xffffef8f;
                return;
            }
            if (arg1 == 6) {
                *0xfd724040 = *0xfd724040 & 0xffff8fef;
                return;
            }
            if (arg1 != 7) {
                if (arg1 != 8) {
                    return;
                }
                *0xfd724050 = *0xfd724050 & 0x7fefffff;
                if ((*0xfd72c210 >> 0xc & 1) == 0) {
                    return;
                }
                *0xfd724054 = *0xfd724054 & 0x7fefffff;
                return;
            }
            *0xfd724040 = *0xfd724040 & 0xffffef8f;
            return;
        }
        *0xfd724020 = *0xfd724020 & 0xfeffef8f;
    }
    return;
}


/* fcn.00011d38 @ 0x11d38 */

uint64_t fcn.00011d38(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    uint64_t uVar2;
    int *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int *arg1_00;
    
    if (arg1 != 0) {
        if (*0x18eb8 == '\x01') {
            return 0x800000000000000f;
        }
        if (*arg1 != -0x5050505050505051) {
            arg1_00 = arg1 + 0x20;
            iVar5 = 2;
            *(*arg1 + 8) = *(arg1 + 8);
            **(arg1 + 8) = *arg1;
            do {
                if (*arg1_00 != -1) {
                    for (puVar1 = *0x171c0; puVar1 != 0x171c0; puVar1 = *puVar1) {
                        piVar3 = puVar1 + 5;
                        uVar4 = 0;
                        do {
                            if (((*arg1_00 == piVar3[-2]) && (arg1_00[2] == *piVar3)) &&
                               (*(arg1_00 + 0x11) == *(piVar3 + 9))) goto code_r0x00011e0f;
                            uVar4 = uVar4 + 1;
                            piVar3 = piVar3 + 6;
                        } while (uVar4 < 2);
                    }
                    fcn.00012b28(arg1_00,0,0);
                }
code_r0x00011e0f:
                arg1_00 = arg1_00 + 6;
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) {
                    uVar2 = (**(*0x18bd0 + 0x58))(arg1 + -8);
                    uVar4 = 0;
                    if (uVar2 < 0) {
                        uVar4 = uVar2;
                    }
                    return uVar4;
                }
            } while( true );
        }
    }
    return 0x8000000000000002;
}


/* fcn.000164c4 @ 0x164c4 */

ulong fcn.000164c4(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar3 = arg2;
    if (((1 < arg1) || (((arg1 == 1 && (cVar1 = fcn.00016350(), cVar1 != '\0')) || (0xfff < uVar3)))) ||
       ((uVar3 & 3) != 0)) {
        return 0x8000000000000002;
    }
    if (((arg3 == 1) && (uVar3 < 0x800)) &&
       ((-1 < *((arg1 + 0x1014) * 4 | 0xfd720000) && ((*0xfd724000 >> 0x1b & 1) != 0)))) {
        return 0x800000000000000f;
    }
    if (arg3 == 1) {
        *0xfd724004 = *arg4;
    }
    *0xfd724000 = *0xfd724000 & 0xffe4f000 | 0x70000000 | ((arg1 | 0xfffff000) << 3 | arg3) << 0x10 | uVar3;
    iVar2 = 1000;
    do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
    } while (*0xfd724000 < 0);
    if ((*0xfd724000 & 0x70000000) != 0x70000000) {
        return 0x8000000000000007;
    }
    if (arg3 == 0) {
        *arg4 = *0xfd724004;
    }
    return 0;
}


/* fcn.00016628 @ 0x16628 */

int64_t fcn.00016628(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    uint8_t uVar3;
    uint32_t uVar4;
    uint64_t arg1_01;
    uint32_t uVar5;
    int iVar6;
    char cVar7;
    uint32_t auStackX_8 [2];
    int64_t var_30h;
    
    uVar5 = 0;
    arg1_01 = arg1 & 0xff;
    uVar3 = arg2;
    cVar7 = 'd';
    bVar1 = false;
    arg1_00 = arg1_01;
    iVar2 = fcn.000164c4(arg1_00,8,0,auStackX_8);
    if ((-1 < iVar2) && (uVar3 < 8)) {
        if ((auStackX_8[0] & uVar5 + 1 << (uVar3 & 0x1f)) != 0) {
            uVar4 = ((arg2 & 0xff) + 1) * 0x10;
            if (uVar3 == 0) {
                iVar2 = fcn.000164c4(arg1_00,uVar4,uVar5,auStackX_8);
                if (iVar2 < 0) {
                    return iVar2;
                }
                if ((auStackX_8[0] & 4) != 0) {
                    auStackX_8[0] = auStackX_8[0] & 0xfffffffb;
                    iVar2 = fcn.000165e4(arg1_01,uVar4,auStackX_8[0]);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    bVar1 = true;
                }
            }
            iVar2 = fcn.000164c4(arg1_00,uVar4,0,auStackX_8);
            if (iVar2 < 0) {
                return iVar2;
            }
            auStackX_8[0] = auStackX_8[0] & 0xfffffffe;
            iVar2 = fcn.000165e4(arg1_01,uVar4,auStackX_8[0]);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.000164c4(arg1_00,uVar4,0,auStackX_8);
            uVar5 = auStackX_8[0];
            if (iVar2 < 0) {
                return iVar2;
            }
            auStackX_8[0] = auStackX_8[0] | 1;
            iVar2 = fcn.000165e4(arg1_01,uVar4,auStackX_8[0]);
            if (iVar2 < 0) {
                return iVar2;
            }
            if ((uVar5 & 2) == 0) {
                do {
                    if (cVar7 == '\0') {
                        return -0x7fffffffffffffee;
                    }
                    iVar6 = 0;
                    iVar2 = fcn.000164c4(arg1_00,uVar4,0,auStackX_8);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    fcn.00016bfc(iVar6 + 3);
                    cVar7 = cVar7 + -1;
                } while ((auStackX_8[0] & 2) == 0);
                if (cVar7 == '\0') {
                    return -0x7fffffffffffffee;
                }
            }
            if ((uVar3 == 0) && (bVar1)) {
                iVar2 = fcn.000164c4(arg1_00,uVar4,0,auStackX_8);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.000165e4(arg1_01,uVar4,auStackX_8[0] | 4);
                if (iVar2 < 0) {
                    return iVar2;
                }
            }
            return 0;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00014bb8 @ 0x14bb8 */

void fcn.00014bb8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint8_t auStackX_10 [8];
    
    uVar3 = arg2;
    iVar4 = 0;
    iVar1 = fcn.000164c4(arg3 & 0xffU,8,0,auStackX_10);
    if (((-1 < iVar1) && (uVar3 < 8)) && (iVar4 = iVar4 + 1 << (uVar3 & 0x1f), (auStackX_10[0] & iVar4) != 0)) {
        uVar6 = (arg3 & 0xffU) * 4 + arg1;
        puVar2 = uVar6 | 0xfd720000;
        if ((*puVar2 & 0x10) != 0) {
            iVar1 = fcn.00016628(CONCAT71(puVar2 >> 8,arg3),CONCAT31(iVar4 >> 8,uVar3));
            if (-1 < iVar1) {
                uVar5 = 0x1010;
                if (uVar3 == 0) {
                    uVar5 = 0x1001010;
                }
                else if (uVar3 == 3) {
                    uVar5 = 0x21010;
                }
                puVar2 = uVar6 | 0xfd720000;
                *puVar2 = ~uVar5 & *puVar2 | 0x10;
            }
        }
    }
    return;
}


/* fcn.000151b0 @ 0x151b0 */

void fcn.000151b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    
    auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,arg3);
    auStackX_10[0] = arg2;
    uVar1 = arg1 & 0xff;
    *(uVar1 * 8 + 0x1e84 | 0xfd890000) = auStackX_10[0];
    (***0x18bf0)(*0x18bf0,2,2,(arg1 & 0xffU) * 8 + 0x1e84 | 0xfd890000,1,auStackX_10);
    auStackX_18[0] = auStackX_10[0];
    *(uVar1 * 8 + 0x2754 | 0xfd880000) = auStackX_10[0];
    (***0x18bf0)(*0x18bf0,2,2,(arg1 & 0xffU) * 8 + 0x2754 | 0xfd880000,1,auStackX_18);
    return;
}


/* fcn.00015000 @ 0x15000 */

uint64_t fcn.00015000(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    int32_t var_38h;
    int32_t var_48h;
    int32_t var_50h;
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xff;
    *(uVar2 * 8 + 0x1e80 | 0xfd890000) = auStackX_10[0];
    if (arg3 != '\0') {
        auStackX_8[0] = 0;
        auStackX_18[0] = 0;
        uVar1 = (arg1 & 0xffU) * 8 + 0x1e80 | 0xfd890000;
        (***0x18bf0)(*0x18bf0,0xe,2,uVar1,auStackX_18,auStackX_8,10);
        (***0x18bf0)(*0x18bf0,2,2,uVar1,1,auStackX_10);
        (***0x18bf0)(*0x18bf0,0xe,2,uVar1,auStackX_18,auStackX_8,10);
    }
    uVar2 = uVar2 * 8 + 0x2750;
    auStackX_20[0] = auStackX_10[0];
    *(uVar2 | 0xfd880000) = auStackX_10[0];
    uVar1 = *(uVar2 | 0xfd880000);
    if (arg3 != '\0') {
        uVar1 = (***0x18bf0)(*0x18bf0,2,2,(arg1 & 0xffU) * 8 + 0x2750 | 0xfd880000,1,auStackX_20);
    }
    return uVar1;
}


/* fcn.00015470 @ 0x15470 */

ulong fcn.00015470(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint16_t uVar2;
    ulong *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint *puVar7;
    unkbyte7 Var8;
    uint32_t uVar9;
    uint8_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t arg1_00;
    int64_t *piVar13;
    int64_t arg3_00;
    uint16_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint8_t in_stack_00000038;
    uint8_t in_stack_00000040;
    uint64_t auStack_48 [2];
    
    if ((in_stack_00000030 < 3) && (in_stack_00000028 - 1 < 0x100)) {
        uVar12 = in_stack_00000028;
        if (((in_stack_00000028 & in_stack_00000028 - 1) == 0) || (in_stack_00000028 == 3)) {
            uVar2 = *arg4;
            if (in_stack_00000028 < 4) {
                if ((uVar2 & 3) + in_stack_00000028 < 5) goto code_r0x00015521;
            }
            else if (((uVar2 & 3) == 0) && ((in_stack_00000028 - 1 & uVar2) == 0)) {
code_r0x00015521:
                if (*0x18eb8 == '\x01') {
                    return 0x800000000000000f;
                }
                uVar11 = 0;
                while( true ) {
                    uVar10 = uVar11;
                    uVar4 = *(uVar11 * 8 + 0x1e80U | 0xfd890000);
                    uVar5 = in_stack_00000028;
                    if ((uVar4 & 0xfffc) == 0) break;
                    if ((uVar2 == 0) && (*(uVar11 * 0x28 + 0x18dbc) != '\x01')) {
                        auStack_48[0] = uVar4 & 0xfffc;
                        if (*arg4 == 0) {
                            uVar9 = *(uVar11 * 0x28 + 0x18db8);
                            if (((0xff < uVar9) || ((uVar4 >> 0x10 & 0xfc) + 4 < 0x100)) || (0x100 - uVar9 <= uVar5))
                            goto code_r0x000155e9;
                            *arg4 = *(uVar11 * 0x28 + 0x18db8) + (uVar4 & 0xfffc);
                            piVar1 = uVar11 * 0x28 + 0x18db8;
                            *piVar1 = *piVar1 + uVar5;
                        }
                        uVar4 = *(uVar11 * 8 + 0x1e84U | 0xfd890000);
                        if (((uVar4 & 0x20000) == 0) && ((uVar4 >> 0x10 & 1) != in_stack_00000030)) {
                            fcn.000151b0(CONCAT71(0x200,uVar10),uVar4 & 0xfffeffff | 0x20000,0);
                        }
                        goto code_r0x000155fc;
                    }
code_r0x000155e9:
                    uVar10 = uVar10 + 1;
                    uVar11 = uVar10;
                    if (3 < uVar10) goto code_r0x000155fc;
                }
                if (*arg4 == 0) {
                    auStack_48[0] = 0xffff;
                    iVar6 = (**(*0x18c00 + 0x58))(1,2,8,0x100,auStack_48,*0x18d40,0);
                    if (iVar6 < 0) {
                        return 0x8000000000000009;
                    }
                    *arg4 = auStack_48[0];
                    *(uVar11 * 0x28 + 0x18db8) = uVar5;
                    *(uVar11 * 0x28 + 0x18dbd) = 1;
                    iVar6 = *0x18e50;
                    *(*0x18e50 + 0x283 + uVar11 * 2) = auStack_48[0];
                    *(uVar11 + 0x28b + iVar6) = 1;
                    uVar12 = 0x100;
                }
                else {
                    auStack_48[0] = *arg4 & 0xfffc;
                }
                arg3_00 = 0x14;
                iVar6 = *(uVar11 * 0x28 + 0x18dc0);
                arg1_00 = uVar11 * 0x68 + 0x183c0;
                fcn.00012eb4(arg1_00,iVar6,0x14,0x18e48);
                piVar1 = uVar11 * 0x68 + 0x183f8;
                if (*piVar1 != -1) {
                    arg3_00 = CONCAT71(arg3_00 >> 8,1);
                    fcn.00012b28(piVar1,CONCAT71(iVar6 >> 8,1),arg3_00);
                }
                fcn.00013c58(arg1_00);
                Var8 = 0x100;
                *(uVar11 * 0x28 + 0x18da0) = *0x18e48;
                uVar4 = auStack_48[0];
                if (uVar12 < 4) {
                    Var8 = uVar12 >> 8;
                    uVar9 = (1 << (uVar12 & 0x1f)) + -1 << (*arg4 & 3) + 4;
                    uVar5 = in_stack_00000030 << 0x10;
                }
                else {
                    uVar9 = (in_stack_00000040 & 0xf | in_stack_00000030 << 0xc) << 4;
                    uVar5 = in_stack_00000038 & 0xf;
                }
                iVar6 = CONCAT71(Var8,uVar10);
                fcn.000151b0(iVar6,uVar9 | uVar5,arg3_00);
                fcn.00015000(CONCAT71(iVar6 >> 8,uVar10),(uVar12 - 1 & 0xfffffffc) << 0x10 | uVar4 | 1,
                             CONCAT71(arg3_00 >> 8,1));
                *(uVar11 * 0x28 + 0x18dbc) = uVar2 != 0;
code_r0x000155fc:
                if ((uVar10 < 4) && (iVar6 = (**(*0x18bd0 + 0x50))(6,0x40,0x18e40), -1 < iVar6)) {
                    **0x18e40 = 0x43525449;
                    *(*0x18e40 + 6) = *arg4;
                    *(*0x18e40 + 0x1a) = in_stack_00000028;
                    (*0x18e40)[7] = in_stack_00000030;
                    *(*0x18e40 + 8) = in_stack_00000038;
                    *(*0x18e40 + 0x21) = in_stack_00000040;
                    *(*0x18e40 + 10) = arg2;
                    *(*0x18e40 + 0xc) = arg3;
                    *(*0x18e40 + 0xe) = uVar10;
                    puVar7 = *0x18e40;
                    piVar13 = *0x18e40 + 2;
                    iVar6 = uVar10 * 0x28;
                    *piVar13 = iVar6 + 0x18da8;
                    puVar3 = *(iVar6 + 0x18db0);
                    *(puVar7 + 4) = puVar3;
                    *puVar3 = piVar13;
                    puVar7 = *0x18e40 + 2;
                    *(iVar6 + 0x18db0) = piVar13;
                    *arg1 = puVar7;
                    return 0;
                }
                return 0x8000000000000009;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.000167dc @ 0x167dc */

ulong fcn.000167dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint32_t *in_R9;
    uint32_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint64_t uVar11;
    uint32_t *in_stack_00000028;
    uint32_t uStack_18;
    
    iVar3 = fcn.00016900();
    uVar11 = 0;
    uVar9 = 0;
    uVar1 = arg1 & 0xffffffff;
    if (uStack_18 != 0) {
        do {
            uVar11 = uVar1;
            uVar5 = *(uVar9 * 0x1e + 0x1c + iVar3);
            if (uVar11 < uVar5) break;
            uVar8 = uVar9 + 1;
            uVar9 = uVar8;
            uVar1 = uVar11 - uVar5;
        } while (uVar8 < uStack_18);
    }
    uVar5 = uVar9;
    iVar7 = uVar9 * 0x1e;
    if ((uVar11 < *(iVar7 + 0x1c + iVar3)) && (*(iVar7 + 0x10 + iVar3) != -1)) {
        cVar2 = fcn.00016350();
        uVar5 = ((cVar2 != '\0') + 8) * 0x100 | uVar5;
        fcn.00016350();
        uVar6 = *(iVar7 + iVar3) << 0x10;
        *arg2 = uVar5 * 0x10000 + uVar11;
        *arg3 = uVar11 & 0x1f;
        iVar10 = (uVar11 >> 5 & 0x7ffffff) * 4;
        uVar5 = *(iVar7 + 4 + iVar3) + iVar10;
        uVar8 = *(iVar7 + 0xe + iVar3) + iVar10;
        *in_R9 = (uVar5 & 0xffff0000 | 0xfffd0000) << 8 | uVar5 & 0xffff | uVar6;
        *in_stack_00000028 = (uVar8 & 0xffff0000 | 0xfffd0000) << 8 | uVar8 & 0xffff | uVar6;
        uVar4 = 0;
    }
    else {
        uVar4 = 0x8000000000000002;
    }
    return uVar4;
}


/* fcn.00016314 @ 0x16314 */

void fcn.00016314(void)

{
    if (*0x17a88 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x17a88 = '\x05';
        }
        else {
            *0x17a88 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.000165e4 @ 0x165e4 */

void fcn.000165e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint auStackX_18 [2];
    uchar auStackX_20 [8];
    
    auStackX_18[0] = arg3;
    iVar1 = fcn.000164c4(arg1,arg2,1,auStackX_18);
    if (-1 < iVar1) {
        fcn.000164c4(arg1,arg2 & 0xffffffff,0,auStackX_20);
    }
    return;
}


/* fcn.00016bfc @ 0x16bfc */

void fcn.00016bfc(int64_t arg1)

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
            fcn.00011260();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00016c5c @ 0x16c5c */

ulong fcn.00016c5c(void)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    if (*0x18bf8 == 0) {
        iVar1 = (**(*0x18bd0 + 0xd0))(0x17150,0,aiStackX_8);
        if (iVar1 < 0) {
            return 0x800000000000000e;
        }
        *0x18bf8 = aiStackX_8[0];
    }
    return 0;
}


/* fcn.000112a0 @ 0x112a0 */

uint64_t fcn.000112a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


