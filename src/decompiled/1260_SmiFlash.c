// decompiled by r2ghidra: 1260_SmiFlash.pe32
// functions: 66

/* entry0 @ 0x11360 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000113e8(arg1,arg2);
    *0x16b70 = -0x7fffffffffffffff;
    iVar1 = fcn.000110a0(0x16a70);
    if (iVar1 == 0) {
        iVar1 = fcn.00012ba4(arg1,arg2);
        if ((-1 < iVar1) || (*0x16b70 < 0)) {
            *0x16b70 = iVar1;
        }
        fcn.00011170(0x16a70,-1);
    }
    iVar1 = *0x16b70;
    if (*0x16b70 < 0) {
        fcn.000130b0();
    }
    return iVar1;
}


/* fcn.00012ff8 @ 0x12ff8 */

void fcn.00012ff8(void)

{
    return;
}


/* fcn.000113e8 @ 0x113e8 */

void fcn.000113e8(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint64_t arg2_00;
    uint32_t uVar7;
    ulong noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x16990 = *(arg2 + 0x60);
    arg2_00 = 0;
    iStackX_10 = 0;
    *0x16988 = arg2;
    uStackX_8 = arg1;
    (**(*0x16990 + 0x140))(0x16130,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x16998);
    (**(*0x16990 + 0x140))(0x16150,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x16bf8 = fcn.00013040();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x16bf8);
    *0x16bf0 = uStackX_8 >> 5;
    fcn.0001314c();
    noname_0 = 0x16210;
    iVar4 = fcn.0001317c(0x16210);
    if (iVar4 == 0) {
        uVar5 = fcn.00011280();
        fcn.00011270();
        uVar2 = in(0x1808);
        fcn.00011250(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar7 >> 0x17 & 1) != 0) break;
            fcn.00011240();
        }
        fcn.00011250(uVar7,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.00011270();
        }
        else {
            fcn.00011260();
        }
    }
    piVar6 = *(*0x16998 + 0xa0);
    uVar5 = arg2_00;
    if (*(*0x16998 + 0x98) != 0) {
        do {
            if ((*0x160b0 == *piVar6) && (*0x160b8 == piVar6[1])) break;
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar5 < *(*0x16998 + 0x98));
    }
    if ((*0x16a00 != NULL) || (iVar4 = (**(*0x16990 + 0x140))(0x16130,0,0x16a00), -1 < iVar4)) {
        (***0x16a00)(*0x16a00,0x16a08);
    }
    fcn.000130ec(0x16140,0x16a10);
    iVar4 = (**(*0x16998 + 0xd0))(0x160e0,0,0x16a18);
    if (iVar4 < 0) {
        *0x16a18 = arg2_00;
    }
    fcn.0001325c(*0x16220);
    bVar1 = false;
    iVar4 = *(*0x16998 + 0x98);
    if (iVar4 != 0) {
        piVar6 = *(*0x16998 + 0xa0);
        do {
            if ((*piVar6 == *0x16070) && (piVar6[1] == *0x16078)) {
                arg2_00 = piVar6[2];
            }
            piVar6 = piVar6 + 3;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (arg2_00 != 0) goto code_r0x00011644;
    }
    arg2_00 = fcn.0001317c(0x16070);
    bVar1 = true;
    if (arg2_00 == 0) {
        return;
    }
code_r0x00011644:
    *0x16a30 = *(arg2_00 + 0x18);
    *0x16a34 = *(arg2_00 + 0x1c);
    *0x16a2c = ((*(arg2_00 + 2) - 0x28) / *(arg2_00 + 0x20)) * *0x16a34;
    iVar4 = fcn.00013040(*(arg2_00 + 0x20),*0x16a2c);
    *0x16a38 = iVar4;
    if (iVar4 != 0) {
        uVar5 = arg2_00 + 0x28;
        if (uVar5 < *(arg2_00 + 2) + arg2_00) {
            uVar2 = *0x16a34;
            do {
                if ((uVar2 != 0) && (iVar4 != uVar5 + 8)) {
                    section..text(iVar4,uVar5 + 8,uVar2);
                    uVar2 = *0x16a34;
                }
                uVar5 = uVar5 + *(arg2_00 + 0x20);
                iVar4 = iVar4 + uVar2;
            } while (uVar5 < *(arg2_00 + 2) + arg2_00);
        }
        if ((bVar1) && (iVar4 = fcn.00013070(*(arg2_00 + 2),arg2_00), iVar4 != 0)) {
            (**(*0x16998 + 0x28))(*0x16998,0x16070,iVar4,*(arg2_00 + 2));
        }
    }
    return;
}


/* fcn.000110a0 @ 0x110a0 */

ulong fcn.000110a0(int64_t arg1)

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
    
    fcn.00012ff8();
    *(arg1 + 0xf8) = 0;
    if ((*0x16340 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00012ba4 @ 0x12ba4 */

int64_t fcn.00012ba4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x169f0 == 0) {
        *0x169d0 = *(arg2 + 0x60);
        *0x169a0 = *(arg2 + 0x58);
        *0x169f0 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x169f0 == 0) {
        *0x169d0 = *(arg2 + 0x60);
        *0x169a0 = *(arg2 + 0x58);
        *0x169f0 = arg2;
    }
    iVar1 = (**(*0x169d0 + 0x140))(0x161e8,0,0x169e0);
    if (((-1 < iVar1) && ((***0x169e0)(*0x169e0,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x169e0)[1])(*0x169e0,0x169d8), -1 < iVar1)) {
        iVar1 = fcn.00012f28(0x16200);
        *0x169a8 = 1;
        if (iVar1 != 0) {
            *0x169a0 = iVar1;
        }
        *0x169b8 = 0;
        fcn.00012dbc();
        fcn.00012e44();
        *0x169b8 = 1;
        iVar1 = fcn.00012908(arg1,arg2);
    }
    return iVar1;
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


/* fcn.000130b0 @ 0x130b0 */

void fcn.000130b0(void)

{
    char cVar1;
    
    cVar1 = fcn.00012ffc(*0x16bf8);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000130d6. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x16998 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000130e5. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16990 + 0x48))(*0x16bf8);
    return;
}


/* fcn.00012ffc @ 0x12ffc */

uint64_t fcn.00012ffc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x16bf0 != 0) {
        puVar2 = *0x16bf8 + 8;
        in_RAX = *0x16bf8;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x16bf0);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00013040 @ 0x13040 */

ulong fcn.00013040(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16998 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001314c @ 0x1314c */

int64_t fcn.0001314c(void)

{
    if (*0x169f8 == 0) {
        fcn.000130ec(0x16100,0x169f8);
    }
    return *0x169f8;
}


/* fcn.000130ec @ 0x130ec */

ulong fcn.000130ec(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x16988;
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


/* fcn.0001317c @ 0x1317c */

void fcn.0001317c(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001314c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000131aa:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000131aa;
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


/* fcn.00011242 @ 0x11242 */

void fcn.00011242(void)

{
    return;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.0001325c @ 0x1325c */

ulong fcn.0001325c(int64_t arg1)

{
    char cVar1;
    ulong *puVar2;
    
    puVar2 = 0x16400;
    do {
        if (*puVar2 == NULL) {
            return 0;
        }
        cVar1 = (**puVar2)(arg1,0x16a20);
        puVar2 = puVar2 + 1;
    } while (cVar1 == '\0');
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


/* fcn.00013070 @ 0x13070 */

void fcn.00013070(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013040(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011ebc @ 0x11ebc */

int64_t fcn.00011ebc(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    
    arg1_00 = *(arg1 + 8) - *0x161c0;
    uVar1 = *(arg1 + 0xc);
    uVar2 = *arg1;
    iVar3 = fcn.00011710(arg1_00,uVar1);
    if (((iVar3 < 0) || (*0x16a18 == NULL)) || (iVar3 = (***0x16a18)(uVar2), iVar3 < 0)) {
        iVar3 = -0x7ffffffffffffff1;
    }
    else {
        iVar3 = (***0x16c00)(arg1_00,uVar1,uVar2);
        if (-1 < iVar3) {
            return iVar3;
        }
    }
    *(arg1 + 0x10) = 1;
    return iVar3;
}


/* fcn.00011f44 @ 0x11f44 */

int64_t fcn.00011f44(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    
    arg1_00 = *(arg1 + 8) - *0x161c0;
    uVar1 = *(arg1 + 0xc);
    uVar2 = *arg1;
    iVar3 = fcn.00011710(arg1_00,uVar1);
    if (((iVar3 < 0) || (*0x16a18 == NULL)) || (iVar3 = (***0x16a18)(uVar2), iVar3 < 0)) {
        iVar3 = -0x7ffffffffffffff1;
    }
    else {
        iVar3 = (**(*0x16c00 + 0x10))(arg1_00,uVar1,uVar2);
        if (-1 < iVar3) {
            return iVar3;
        }
    }
    *(arg1 + 0x10) = 1;
    return iVar3;
}


/* fcn.00011710 @ 0x11710 */

ulong fcn.00011710(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 != 0) && (arg2 + -1 + uVar1 < uVar1)) {
        return 0x8000000000000002;
    }
    if ((0xfeffffff < uVar1) && ((uVar1 - 1) + arg2 < 0x100000000)) {
        return 0;
    }
    return 0x800000000000000f;
}


/* fcn.00011040 @ 0x11040 */

uchar * fcn.00011040(uint32_t arg1,int64_t noname_1,int64_t arg2)

{
    uint in_register_0000000c;
    uchar *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00011afc @ 0x11afc */

int64_t fcn.00011afc(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    int16_t iVar5;
    uint32_t uVar6;
    uint32_t **ppuVar7;
    uint32_t **arg1_00;
    uint32_t uVar8;
    char cVar9;
    uint16_t uVar10;
    uint64_t uVar12;
    uint64_t uVar11;
    uint32_t **ppuVar13;
    uint32_t *puStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_48h;
    int64_t var_50h;
    
    *(arg1 + 6) = 0x1000;
    if (*arg1 - 0x1aU < 0x9042) {
        *(arg1 + 6) = 0;
        *(arg1 + 4) = 1;
        return -0x7ffffffffffffffb;
    }
    puStackX_8 = arg1;
    iVar2 = (**(*0x16998 + 0x50))(6,*0x16950 * 2,&iStackX_10);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar3 = (**(*0x16998 + 0x50))(6,*0x16950 * 2,&iStackX_18);
    iVar2 = *0x16c08;
    uVar12 = *0x16950;
    if (iVar3 < 0) {
        (**(*0x16998 + 0x58))(iStackX_10);
        return iVar3;
    }
    uVar10 = 0;
    if (*0x16950 != 0) {
        uVar11 = 0;
        do {
            uVar10 = uVar10 + 1;
            iVar5 = *(iVar2 + 0x18 + uVar11 * 0x28) >> 0xc;
            *(iStackX_10 + uVar11 * 2) = iVar5;
            *(iStackX_18 + uVar11 * 2) = (*(iVar2 + 0x1c + uVar11 * 0x28) >> 0xc) + iVar5 + -1;
            uVar11 = uVar10;
        } while (uVar11 < uVar12);
    }
    cVar9 = *0x16940 + '\x7f';
    uVar6 = 0xffff;
    uVar8 = 0;
    arg1_00 = arg1 + 0x1a;
    do {
        ppuVar7 = arg1_00;
        uVar10 = uVar8;
        uVar11 = 0;
        *(ppuVar7 + 4) = 0x1000;
        *ppuVar7 = uVar8 << 0xc;
        if (uVar12 != 0) {
            do {
                if ((*(iStackX_10 + uVar11 * 2) <= uVar10) && (uVar10 <= *(iStackX_18 + uVar11 * 2))) {
                    *(ppuVar7 + 1) = *(iVar2 + 0x20 + uVar11 * 0x28);
                    goto code_r0x00011c88;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar12);
        }
        cVar4 = cVar9 + '\x01';
        if (uVar6 + 1 == uVar8) {
            cVar4 = cVar9;
        }
        *(ppuVar7 + 1) = cVar4;
        cVar9 = cVar4;
        uVar6 = uVar8;
code_r0x00011c88:
        arg1_00 = ppuVar7 + 9;
        uVar8 = uVar10 + 1;
        if (0xfff < uVar10 + 1) {
            (**(*0x16998 + 0x58))(iStackX_10);
            (**(*0x16998 + 0x58))(iStackX_18);
            ppuVar13 = *puStackX_8 + puStackX_8;
            if (ppuVar7 + 0xfU <= ppuVar13) {
                puStackX_8 = CONCAT44(puStackX_8._4_4_,0x54504224);
                uVar12 = 0;
                do {
                    uVar11 = uVar12 + 1;
                    pcVar1 = uVar12 + 0x16349;
                    uVar12 = uVar11;
                } while (*pcVar1 != '\0');
                if (arg1_00 != &puStackX_8) {
                    section..text(arg1_00,&puStackX_8,4);
                }
                *(ppuVar7 + 0xd) = uVar11;
                *(ppuVar7 + 0xe) = 0x56;
                arg1_00 = ppuVar7 + 0xf;
            }
            if (arg1_00 + 7 <= ppuVar13) {
                if (*0x16a20 == 0) {
                    fcn.00011040(0x16bc0,0x30,0);
                    fcn.0001325c(0xff000000);
                    if (*0x16a20 == 0) {
                        return 0;
                    }
                }
                if (*(*0x16a20 + 0x58) != 0) {
                    puStackX_8 = CONCAT44(puStackX_8._4_4_,0x53504624);
                    if (arg1_00 != &puStackX_8) {
                        section..text(arg1_00,&puStackX_8,4);
                    }
                    *(arg1_00 + 4) = 0x30;
                    if (arg1_00 + 1 != *(*0x16a20 + 0x58)) {
                        section..text(arg1_00 + 1,*(*0x16a20 + 0x58),0x30);
                    }
                }
            }
            return 0;
        }
    } while( true );
}


/* fcn.000117d4 @ 0x117d4 */

int64_t fcn.000117d4(uint32_t arg1)

{
    int *piVar1;
    uint32_t uVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint64_t arg2;
    int64_t *piVar8;
    int *piVar9;
    int64_t iVar10;
    int *piVar11;
    uint32_t uVar12;
    int64_t *piStackX_8;
    int *piStack_48;
    int iStack_40;
    uint uStack_3c;
    
    puVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = *puVar6;
    if (uVar2 < 0x10) {
code_r0x000117fa:
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        if (*(puVar6 + 5) < 0xe) {
            if (*0x16a18 != NULL) {
                iVar10 = 0x19;
                iVar4 = (***0x16a18)(puVar6,0x19);
                if (iVar4 < 0) {
                    return iVar4;
                }
                goto code_r0x0001185c;
            }
        }
        else if (*0x16a18 != NULL) {
            iVar4 = (***0x16a18)(puVar6 + 0x1a,9);
            if (iVar4 < 0) {
                return iVar4;
            }
            iVar10 = 0x23;
code_r0x0001185c:
            piVar11 = iVar10 + puVar6;
            if (*0x16a18 != NULL) {
                iVar4 = (***0x16a18)(piVar11,uVar2);
                if (iVar4 < 0) {
                    return iVar4;
                }
                if (*piVar11 == 0x4c4d4f52) {
                    piVar8 = piVar11 + 4;
                    uVar7 = ((uVar2 - 0x10) - 0x40) + piVar8;
                    bVar3 = false;
                    piVar9 = -(piVar11 + uVar2 < uVar7) & uVar7;
                    iVar4 = 0;
                    iVar10 = 0;
                    uVar7 = 0;
                    uVar12 = 0;
                    if (piVar11[3] != 0) {
                        piStackX_8 = piVar11 + (uVar2 - 0x10);
                        bVar3 = false;
                        do {
                            if (((piStackX_8 <= piVar8) || (iVar5 = piVar8[2], iVar5 == 0)) || (*(piVar8 + 0x1c) == 0))
                            goto code_r0x000117fa;
                            if (((*piVar8 == *0x160c0) && (piVar8[1] == *0x160c8)) &&
                               (uVar7 = *(piVar8 + 0x1c), iVar4 = iVar5, iVar5 != *0x16968)) {
                                bVar3 = true;
                            }
                            if (((*piVar8 == *0x16050) && (piVar8[1] == *0x16058)) &&
                               (iVar10 = iVar5, iVar5 != *0x16928)) {
                                bVar3 = true;
                            }
                            if ((piVar9 != NULL) && (piVar8[4] == 0)) {
                                iStack_40 = piVar8[3];
                                uStack_3c = 0x40;
                                piStack_48 = piVar9;
                                iVar5 = fcn.00011ebc(&piStack_48);
                                if ((-1 < iVar5) &&
                                   (((*(piVar9 + 4) == *0x160d0 && (*(piVar9 + 6) == *0x160d8)) &&
                                    (piVar1 = piVar9 + 10, *piVar1 == -1)))) {
                                    *piVar1 = 0x4856465f;
                                    iStack_40 = piVar8[3] + 0x28;
                                    uStack_3c = 4;
                                    piStack_48 = piVar1;
                                    fcn.00011f44(&piStack_48);
                                }
                            }
                            uVar12 = uVar12 + 1;
                            piVar8 = piVar8 + 5;
                        } while (uVar12 < piVar11[3]);
                    }
                    arg2 = uVar7;
                    iVar5 = fcn.00011710(iVar4,uVar7);
                    if (((-1 < iVar5) && (iVar5 = fcn.00011710(iVar10,arg2), -1 < iVar5)) &&
                       ((bVar3 && (iVar5 = (**(*0x16998 + 0xd0))(0x16060,0,&piStackX_8), -1 < iVar5)))) {
                        *0x16920 = 0;
                        (*piStackX_8[1])(piStackX_8,iVar4,iVar10,uVar7);
                    }
                    return 0;
                }
                goto code_r0x000117fa;
            }
        }
        iVar4 = -0x7ffffffffffffff1;
    }
    return iVar4;
}


/* fcn.00011fcc @ 0x11fcc */

int64_t fcn.00011fcc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    uchar auStack_48 [16];
    uint uStack_38;
    uint uStack_30;
    
    if (*0x16c20 == '\x01') {
        iVar1 = (**(*0x16c18 + 0x10))(*0x16c18,arg1 & 0xffffffff,auStack_48);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    else {
        iVar1 = (***0x16c28)(*0x16c28,4,0x27,arg1,auStackX_18);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (***0x16c28)(*0x16c28,4,0x28,arg1,auStackX_20);
        if (iVar1 < 0) {
            return iVar1;
        }
        uStack_38 = auStackX_18[0];
        uStack_30 = auStackX_20[0];
    }
    *arg2 = CONCAT44(uStack_30,uStack_38);
    return 0;
}


/* fcn.00011758 @ 0x11758 */

int64_t fcn.00011758(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (*0x16a18 != NULL) {
        iVar2 = (***0x16a18)(arg1,0x1a);
        if (iVar2 < 0) {
            return iVar2;
        }
        uVar1 = *arg1;
        if (uVar1 < 0x1b) {
            return -0x7fffffffffffffe6;
        }
        if (*0x16a18 != NULL) {
            iVar2 = (***0x16a18)(arg1,uVar1);
            if (iVar2 < 0) {
                return iVar2;
            }
            if (arg2 == 0) {
                return iVar2;
            }
            *arg2 = uVar1;
            return iVar2;
        }
    }
    return -0x7ffffffffffffff1;
}


/* fcn.00011dc0 @ 0x11dc0 */

void fcn.00011dc0(uint32_t arg1)

{
    unkint7 extraout_RAX;
    unkint7 extraout_RAX_00;
    unkint7 Var1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    out(0x80,0x25);
    if (*(arg1_00 + 4) == '\x02') {
        fcn.000117d4(arg1);
        Var1 = extraout_RAX_00;
    }
    else {
        *(arg1_00 + 8) = 0;
        *(arg1_00 + 0xc) = 0;
        *(arg1_00 + 0x14) = 0;
        *(arg1_00 + 0x10) = 0;
        *(arg1_00 + 5) = 0xe;
        fcn.00011040(arg1 + 0x18,2,0);
        fcn.00011afc(arg1_00);
        Var1 = extraout_RAX;
    }
    if (-1 < Var1) {
        *(arg1_00 + 4) = 0;
    }
    return;
}


/* fcn.00011a50 @ 0x11a50 */

void fcn.00011a50(void)

{
    int64_t iVar1;
    uint8_t uVar2;
    int64_t aiStackX_8 [4];
    
    if (*0x16920 == '\x01') {
        uVar2 = 0;
        *0x16920 = '\0';
        iVar1 = (**(*0x16998 + 0xd0))(0x16060,0,aiStackX_8);
        if (((-1 < iVar1) && (iVar1 = (**(aiStackX_8[0] + 8))(aiStackX_8[0],*0x16958,*0x16960,*0x16930), iVar1 < 0))
           && (iVar1 == -0x7fffffffffffffe6)) {
            do {
                if (*(uVar2 + *0x16960) != -1) break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x40);
            if (uVar2 < 0x40) {
                (**(aiStackX_8[0] + 8))(aiStackX_8[0],*0x16960,*0x16958,*0x16930);
            }
        }
    }
    return;
}


/* fcn.00011e34 @ 0x11e34 */

int64_t fcn.00011e34(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = *(arg1 + 8) - *0x161c0 & 0xfffff000;
    iVar1 = fcn.00011710(uVar2,*(arg1 + 0xc));
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffff1;
    }
    else {
        if (((*0x16920 == '\0') && (*0x16958 <= uVar2)) && (uVar2 < *0x16938)) {
            *0x16920 = '\x01';
        }
        iVar1 = (**(*0x16c00 + 8))(uVar2);
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    *(arg1 + 0x10) = 1;
    return iVar1;
}


/* fcn.00012084 @ 0x12084 */

//WARNING: Variable defined which should be unmapped: var_1h

uint64_t fcn.00012084(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    uint16_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int *piVar11;
    uint64_t uVar12;
    int32_t var_1h;
    
    uVar2 = *(arg3 + 6);
    uVar6 = arg2 - 0x1a;
    uVar5 = SUB168(ZEXT816(0xe38e38e38e38e38f) * ZEXT416(uVar6),0);
    if (*0x16a18 != NULL) {
        uVar5 = (***0x16a18)(arg3 + 0x1a,uVar2 * 9);
        if (-1 < uVar5) {
            uVar8 = 0;
            uVar12 = 0;
            uVar10 = 1;
            if (1 < uVar2) {
                piVar11 = arg3 + 0x27;
                do {
                    if (uVar6 / 9 <= uVar8) goto code_r0x00012238;
                    iVar9 = arg3 + uVar12 * 8;
                    if (*(uVar12 + 0x22 + iVar9) == piVar11[1]) {
                        piVar1 = uVar12 + 0x1e + iVar9;
                        *piVar1 = *piVar1 + *piVar11;
                        uVar5 = uVar2 - 1;
                        if (uVar10 == uVar2 - 1) {
                            iVar7 = arg1 + uVar8 * 8;
                            *(uVar8 + 0x1a + iVar7) = *(uVar12 + 0x1a + iVar9);
                            uVar3 = *(uVar12 + 0x1e + iVar9);
                            *(uVar8 + 0x1e + iVar7) = uVar3;
                            uVar4 = CONCAT31(uVar3 >> 8,*(uVar12 + 0x22 + iVar9));
                            goto code_r0x0001219d;
                        }
                    }
                    else {
                        iVar7 = arg1 + uVar8 * 8;
                        *(uVar8 + 0x1a + iVar7) = *(uVar12 + 0x1a + iVar9);
                        *(uVar8 + 0x1e + iVar7) = *(uVar12 + 0x1e + iVar9);
                        *(uVar8 + 0x22 + iVar7) = *(uVar12 + 0x22 + iVar9);
                        uVar8 = uVar8 + 1;
                        uVar5 = uVar2 - 1;
                        uVar12 = uVar10;
                        if (uVar10 == uVar2 - 1) {
                            uVar5 = uVar10;
                            iVar7 = arg1 + uVar8 * 8;
                            iVar9 = arg3 + uVar5 * 8;
                            *(uVar8 + 0x1a + iVar7) = *(uVar5 + 0x1a + iVar9);
                            uVar3 = *(uVar5 + 0x1e + iVar9);
                            *(uVar8 + 0x1e + iVar7) = uVar3;
                            uVar4 = CONCAT31(uVar3 >> 8,*(uVar5 + 0x22 + iVar9));
code_r0x0001219d:
                            uVar5 = uVar4;
                            *(uVar8 + 0x22 + iVar7) = uVar4;
                            uVar8 = uVar8 + 1;
                        }
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 9;
                } while (uVar10 < uVar2);
            }
            uVar5 = 0;
            if ((*0x16a18 != NULL) && (uVar5 = (***0x16a18)(arg1,0x1a), -1 < uVar5)) {
                if (arg1 != arg3) {
                    uVar5 = section..text(arg1,arg3,0x1a);
                }
                *(arg1 + 6) = uVar8;
                *(arg1 + 0x10) = 0x1000000;
                *(arg1 + 0x14) = 0x1000;
                if (*0x16a18 != NULL) {
                    iVar9 = arg1 + uVar8 * 9 + 0x1a;
                    uVar5 = (***0x16a18)(iVar9,0x42);
                    if (-1 < uVar5) {
                        iVar7 = arg3 + 0x1a + uVar2 * 9;
                        if (iVar9 == iVar7) {
                            return uVar5;
                        }
                        uVar5 = section..text(iVar9,iVar7,0x42);
                        return uVar5;
                    }
                }
code_r0x00012238:
                *(arg1 + 4) = 1;
            }
        }
    }
    return uVar5;
}


/* fcn.00012f28 @ 0x12f28 */

ulong fcn.00012f28(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x169d8 != 0) {
        iVar3 = *(*0x169d8 + 0xa0);
        for (iVar2 = *(*0x169d8 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00012f84(iVar3,arg1);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00012dbc @ 0x12dbc */

ulong fcn.00012dbc(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x169a8 == '\0') {
        if (*0x169c8 == 0) {
            if (*0x169b8 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x169d0 + 0x140))(0x161c8,0,0x169c8);
        }
    }
    else if (*0x169b0 == 0) {
        if ((*0x169b8 == '\0') && (*0x169d8 != 0)) {
    //WARNING: Could not recover jumptable at 0x00012dfb. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x169d8 + 0xd0))(0x161d8,0,0x169b0);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00012e44 @ 0x12e44 */

int64_t fcn.00012e44(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x169a8 == '\0') {
        if (*0x169e8 == 0) {
            if (*0x169b8 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x169d0 + 0x18))(0x1f);
            (**(*0x169d0 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x169d0 + 0x140))(str.6_6v,0,0x169e8);
            if (iVar1 < 0) {
                *0x169e8 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x169c0 == 0) {
        if (*0x169d8 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x169d8 + 0xd0))(0x16080,0,0x169c0);
        if (iVar1 < 0) {
            *0x169c0 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.0001258c @ 0x1258c */

ulong fcn.0001258c(void)

{
    uchar *puVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    bool bVar12;
    uchar auStack_38 [48];
    
    iVar9 = *0x16a38;
    if (*0x16a38 == 0) {
        uVar5 = 0x800000000000000e;
    }
    else {
        *0x16950 = *0x16a2c / *0x16a34;
        iVar4 = fcn.00013040();
        uVar11 = *0x16950;
        *0x16c08 = iVar4;
        if (iVar4 == 0) {
            uVar5 = 0x8000000000000009;
        }
        else {
            uVar7 = 0;
            if (*0x16950 != 0) {
                uVar6 = 0;
                do {
                    uVar7 = uVar7 + 1;
                    *(iVar4 + uVar6 * 0x28) = *(iVar9 + uVar6 * 0x28);
                    *(iVar4 + 8 + uVar6 * 0x28) = *(iVar9 + 8 + uVar6 * 0x28);
                    *(iVar4 + 0x10 + uVar6 * 0x28) = *(iVar9 + 0x10 + uVar6 * 0x28);
                    *(iVar4 + 0x18 + uVar6 * 0x28) = *(iVar9 + 0x18 + uVar6 * 0x28);
                    *(iVar4 + 0x1c + uVar6 * 0x28) = *(iVar9 + 0x1c + uVar6 * 0x28);
                    *(iVar4 + 0x20 + uVar6 * 0x28) = *(iVar9 + 0x20 + uVar6 * 0x28);
                    *(iVar4 + 0x24 + uVar6 * 0x28) = *(iVar9 + 0x24 + uVar6 * 0x28);
                    uVar6 = uVar7;
                } while (uVar6 < uVar11);
            }
            uVar7 = 0;
            if (uVar11 != 0) {
                uVar6 = 0;
                do {
                    if (uVar11 <= uVar6 + 1) break;
                    uVar8 = uVar7 + 1;
                    if (*(iVar4 + 0x18 + uVar6 * 0x28) <= *(iVar4 + 0x18 + uVar8 * 0x28)) {
                        uVar11 = uVar8;
                        *0x16950 = uVar8;
                        break;
                    }
                    uVar7 = uVar7 + 1;
                    uVar6 = uVar7;
                } while (uVar6 < uVar11);
                if (uVar11 != 0) {
                    uVar6 = 0;
                    uVar8 = 1;
                    do {
                        uVar10 = uVar8;
                        if (uVar8 < uVar11) {
                            do {
                                puVar1 = iVar4 + uVar10 * 0x28;
                                if (*(puVar1 + 0x18) < *(iVar4 + 0x18 + uVar6 * 0x28)) {
                                    if (auStack_38 != puVar1) {
                                        section..text(auStack_38,puVar1,0x28);
                                        iVar4 = *0x16c08;
                                        uVar11 = *0x16950;
                                    }
                                    iVar9 = iVar4 + uVar6 * 0x28;
                                    iVar2 = iVar4 + uVar10 * 0x28;
                                    if (iVar2 != iVar9) {
                                        section..text(iVar2,iVar9,0x28);
                                        iVar4 = *0x16c08;
                                        uVar11 = *0x16950;
                                    }
                                    puVar1 = iVar4 + uVar6 * 0x28;
                                    if (puVar1 != auStack_38) {
                                        section..text(puVar1,auStack_38,0x28);
                                        iVar4 = *0x16c08;
                                        uVar11 = *0x16950;
                                    }
                                }
                                uVar10 = uVar10 + 1;
                            } while (uVar10 < uVar11);
                        }
                        bVar12 = uVar8 < uVar11;
                        uVar6 = uVar8;
                        uVar8 = uVar8 + 1;
                    } while (bVar12);
                }
            }
            uVar7 = 0;
            if (uVar11 != 0) {
                uVar6 = 0;
                iVar9 = *0x16940;
                do {
                    iVar2 = *(iVar4 + uVar6 * 0x28);
                    if ((iVar2 == 0x4f54a69161c0f511) && (*(iVar4 + 8 + uVar6 * 0x28) == 0x53ce7221a4b94f97)) {
code_r0x00012889:
                        *(iVar4 + 0x20 + uVar6 * 0x28) = 0;
                    }
                    else if (((iVar2 == 0x419aa5055c60f367) && (*(iVar4 + 8 + uVar6 * 0x28) == -0x1a903509b0d5617b)) ||
                            ((iVar2 == 0x4d2ad8244f1c52d3 && (*(iVar4 + 8 + uVar6 * 0x28) == 0x16593cc240ecf0a2)))) {
                        *(iVar4 + 0x20 + uVar6 * 0x28) = 1;
                    }
                    else {
                        if ((iVar2 == *0x160c0) && (*(iVar4 + 8 + uVar6 * 0x28) == *0x160c8)) {
                            *0x16968 = *(iVar4 + 0x10 + uVar6 * 0x28);
                        }
                        else {
                            if ((iVar2 != *0x16050) || (*(iVar4 + 8 + uVar6 * 0x28) != *0x16058)) {
                                if ((*(iVar4 + 0x24 + uVar6 * 0x28) & 0x400) != 0) goto code_r0x00012889;
                                iVar3 = iVar9;
                                iVar9 = iVar9 + 1;
                                *0x16940 = iVar9;
                                *(iVar4 + 0x20 + uVar6 * 0x28) = iVar3 + 0x80;
                                goto code_r0x000128a6;
                            }
                            *0x16928 = *(iVar4 + 0x10 + uVar6 * 0x28);
                        }
                        *(iVar4 + 0x20 + uVar6 * 0x28) = 2;
                    }
code_r0x000128a6:
                    uVar7 = uVar7 + 1;
                    uVar6 = uVar7;
                } while (uVar6 < uVar11);
            }
            if (*0x16968 == 0) {
                *0x16968 = 0xff000000;
            }
            if (*0x16928 == 0) {
                *0x16928 = 0xff030000;
            }
            uVar5 = 0;
        }
    }
    return uVar5;
}


/* fcn.00012908 @ 0x12908 */

ulong fcn.00012908(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uStackX_18;
    ulong uStackX_20;
    ulong *puStack_18;
    ulong uStack_10;
    
    if (*0x169f0 == 0) {
        *0x169d0 = *(arg1 + 0x60);
        *0x169a0 = *(arg1 + 0x58);
        *0x169f0 = arg1;
    }
    if ((((*0x169e0 != NULL) || (iVar1 = (**(*0x169d0 + 0x140))(0x161e8,0,0x169e0), -1 < iVar1)) &&
        ((***0x169e0)(*0x169e0,&uStackX_18), uStackX_18 != '\0')) &&
       (iVar1 = (*(*0x169e0)[1])(*0x169e0,0x169d8), -1 < iVar1)) {
        iVar1 = fcn.00012f28(0x16200);
        *0x169a8 = 1;
        if (iVar1 != 0) {
            *0x169a0 = iVar1;
        }
        *0x169b8 = 0;
        fcn.00012dbc();
        fcn.00012e44();
        *0x169b8 = 1;
    }
    iVar1 = (**(*0x16998 + 0xd0))(0x16160,0,&puStack_18);
    if (iVar1 < 0) {
        return 0;
    }
    *0x16c20 = 1;
    iVar1 = (**(*0x16998 + 0xd0))(0x16110,0,0x16c18);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = (**(*0x16998 + 0xd0))(0x16030,0,0x16c00);
    if (iVar1 < 0) {
        return 0;
    }
    uVar4 = 0x20;
    do {
        uStackX_18 = uVar4;
        iVar1 = (**puStack_18)(puStack_18,0x1225c,&uStackX_18,&uStackX_20);
        if (iVar1 < 0) {
            return 0;
        }
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
    } while (uVar3 < 0x26);
    (**(*0x16998 + 0xe0))(0x1225c,0x16180,&uStackX_20);
    uStack_10 = 0;
    *0x16c10 = uStackX_20;
    (**(*0x16998 + 0xa8))(&uStack_10,0x16020,0,0x16190);
    fcn.0001258c();
    iVar1 = fcn.0001317c(0x16170);
    if (iVar1 != 0) {
        *0x16958 = *(iVar1 + 0x18);
        *0x16960 = *(iVar1 + 0x20);
        *0x16930 = *(iVar1 + 0x28);
        *0x16938 = *0x16958 + *0x16930;
    }
    iVar1 = (**(*0x16998 + 0xd0))(0x160f0,0,0x16b80);
    if (iVar1 < 0) {
        *0x16b78 = 0x905c;
        iVar1 = (**(*(arg1 + 0x60) + 0x40))(6,0x905c,0x16b80);
        if (-1 < iVar1) goto code_r0x00012b75;
    }
    *0x16b80 = 0;
    *0x16b78 = 0;
code_r0x00012b75:
    uVar4 = 0;
    pcVar2 = *0x16978;
    while (pcVar2 != NULL) {
        uVar4 = uVar4 + 1;
        (*pcVar2)();
        pcVar2 = *(uVar4 * 8 + 0x16978);
    }
    return 0;
}


/* fcn.00012f84 @ 0x12f84 */

int64_t fcn.00012f84(uint32_t arg1,int64_t arg2)

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


/* fcn.00011240 @ 0x11240 */

void fcn.00011240(void)

{
    return;
}


/* fcn.000131c8 @ 0x131c8 */

void fcn.000131c8(int64_t arg1)

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
            fcn.00011240();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000132ec @ 0x132ec */

int64_t fcn.000132ec(void)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    ulong auStackX_10 [3];
    int32_t var_150h;
    int64_t var_158h;
    uint uStack_218;
    uint uStack_214;
    uint uStack_210;
    uint uStack_20c;
    uchar auStack_208 [512];
    
    auStackX_8[0] = 0;
    auStackX_10[0] = 0x100;
    uStack_218 = 0x1bd378d6;
    uStack_214 = 0x417fd2d6;
    uStack_210 = 0x529ef687;
    uStack_20c = 0x2fcb8df2;
    *0x16b88 = fcn.00012f28(&uStack_218);
    if (*0x16b88 == 0) {
        fcn.00011040(auStack_208,0x100,0);
        iVar1 = (**(*0x169a0 + 0x48))(L"PlatformLang",0x16000,auStackX_8,auStackX_10,auStack_208);
        if (iVar1 == 0) {
            (**(*0x169a0 + 0x58))(L"PlatformLang",0x16000,auStackX_8[0],auStackX_10[0],auStack_208);
            *0x16b88 = fcn.00012f28(&uStack_218);
        }
    }
    return *0x16b88;
}


/* fcn.00015b60 @ 0x15b60 */

int64_t fcn.00015b60(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000151c4 @ 0x151c4 */

bool fcn.000151c4(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    bool bVar1;
    
    bVar1 = (*0xc00fd010 & 0xfffff000) == *0x16338;
    if (bVar1) {
        *(*0x16338 + 8) = 0;
        arg2 = 0;
        *(*0x16338 + 6) = 0x20d;
        fcn.00014930(0x201,0);
        fcn.00013228(arg2 + 10,arg2);
        *arg1 = *(*0x16338 + 0x10) & 0xffffff;
    }
    return bVar1;
}


/* fcn.00015178 @ 0x15178 */

void fcn.00015178(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0xc00fd010 & 0xfffff000) == *0x16338) {
        iVar1 = fcn.00014ccc();
        if (iVar1 < 0) {
            fcn.00014dd8(arg1);
        }
        fcn.00014ff4();
        fcn.000157f8(0);
        fcn.00015098();
    }
    return;
}


/* fcn.00014ccc @ 0x14ccc */

int64_t fcn.00014ccc(void)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t auStack_48 [16];
    
    puVar4 = auStack_48;
    iVar2 = 0x40;
    fcn.00011040(puVar4,0x40,0);
    iVar2 = fcn.00014818(puVar4,iVar2,0xefc,4);
    if ((-1 < iVar2) && (auStack_48[0] - 1 < 0xfffffffe)) {
        uVar8 = 0;
        uVar6 = auStack_48[0] >> 6 & 0x3fc;
        if (uVar6 != 0) {
            do {
                puVar4 = auStack_48;
                iVar2 = 0x40;
                fcn.00011040(puVar4,0x40,0);
                uVar7 = uVar6 - uVar8;
                if (0x3f < uVar6 - uVar8) {
                    uVar7 = 0x40;
                }
                iVar2 = fcn.00014818(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x162c6) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x16338 + 0xc4) = uVar1;
                            *(*0x16338 + 200) = uVar1;
                            return 0;
                        }
                        uVar3 = uVar5 + 8;
                        uVar5 = uVar3;
                    } while (uVar3 < uVar7);
                }
                uVar8 = uVar8 + 0x40;
            } while (uVar8 < uVar6);
        }
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00014dd8 @ 0x14dd8 */

void fcn.00014dd8(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uStackX_8;
    uint32_t uStack_108;
    uchar uStack_104;
    char acStack_fe [246];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *(iVar4 + 4) << 8;
    if (*(iVar4 + 0x16) == 0x1000) {
        uVar3 = uVar3 | 1;
    }
    else if (*(iVar4 + 0x16) == 0x2000) {
        uVar3 = uVar3 | 2;
    }
    else if (*(iVar4 + 0x16) == 0x10000) {
        uVar3 = uVar3 | 3;
    }
    uVar1 = uVar3 | 4;
    if (*(iVar4 + 0x12) == 1) {
        uVar1 = uVar3;
    }
    uVar3 = uVar1 | 8;
    if (*(iVar4 + 0xe) != 'P') {
        uVar3 = uVar1;
    }
    uVar1 = uVar3 | 0x10;
    if (*(iVar4 + 0xe) != '9') {
        uVar1 = uVar3;
    }
    fcn.00011040(&uStack_108,0x100,0);
    uVar3 = 0;
    do {
        iVar4 = 0;
        *(*0x16338 + 8) = uVar3;
        *(*0x16338 + 6) = 0x3f0b;
        fcn.00014930(0x3f01,0);
        fcn.00013228(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x16338);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x16338 + 0xcc) = 0;
                fcn.00013228(1,iVar4);
                if (*(*0x16338 + 0xd4) == 0x50444653) goto code_r0x00014f28;
                goto code_r0x00014f90;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x00014f28:
        uVar3 = *0x162c6 & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x162c6 & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x162c6 >> 8 != '@') goto code_r0x00014f90;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x00014f90;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x00014f90;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x00014f90;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x00014f90:
    *(*0x16338 + 0xc4) = uVar2;
    *(*0x16338 + 200) = uVar2;
    return;
}


/* fcn.00014ff4 @ 0x14ff4 */

void fcn.00014ff4(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x162cb == '\x01') {
        uVar1 = *(*0x16338 + 0xaf);
        uVar2 = *(*0x16338 + 0xa7);
        *(*0x16338 + 0xaf) = 0x98;
        if (*(*0x16338 + 0xaf) == -0x68) {
            *(*0x16338 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x16338 + 0xa1) = 0x72;
            fcn.00014930(0,CONCAT71(param_2 >> 8,1));
            *(*0x16338 + 0xaf) = uVar1;
            *(*0x16338 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.00014930 @ 0x14930 */

void fcn.00014930(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x16338 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x16338 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x16338 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x16338 + 0xa0) = 0x1c;
    }
    return;
}


/* fcn.000157f8 @ 0x157f8 */

void fcn.000157f8(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.00014998(arg1);
    uVar3 = *0x162c6 & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x00015933;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x162c6 & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x162c2 < 0x800000;
                goto code_r0x0001592b;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x00015933;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x162c6 & 0xffff) != 0x609d) {
            bVar4 = (*0x162c6 & 0xffff) == 0x709d;
code_r0x000158f6:
            if (!bVar4) goto code_r0x00015933;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x00015933;
        if (uVar3 == 0xc2) {
            uVar3 = *0x162c6 & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x000158f6;
                }
                goto code_r0x0001592d;
            }
            bVar4 = *0x162c2 < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x162c6 & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x00015933;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x162c6 & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x00015933;
            bVar4 = *0x162c2 < 0x2000000;
        }
code_r0x0001592b:
        if (bVar4) goto code_r0x00015933;
    }
code_r0x0001592d:
    uVar2 = 0x3c;
code_r0x00015933:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.00014998(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.00014930(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x16338 + 0x10) = uVar1;
        *(*0x16338 + 8) = arg1;
        if ((*(*0x16338 + 4) & 0x800) == 0) {
            *(*0x16338 + 6) = 0xf;
            fcn.00014930(CONCAT71(arg1_01 >> 8,1),0);
            fcn.000149d4();
        }
    }
    return;
}


/* fcn.00015098 @ 0x15098 */

void fcn.00015098(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    iVar1 = *0x16338;
    *(*0x16338 + 0xb4) = 0;
    if (*(iVar1 + 0xb8) == 0xff0a55a) {
        *(iVar1 + 0xb4) = 4;
        uVar4 = 0;
        *(iVar1 + 0xb4) = 0x1000;
        uVar5 = *(iVar1 + 0xb8);
        iVar3 = 0;
        uVar6 = *(iVar1 + 0xb8) >> 8 & 3;
        if (uVar6 != 0xffffffff) {
            do {
                uVar2 = uVar5 & 7;
                if (uVar2 == 0) {
                    iVar3 = iVar3 + 0x80000;
                }
                else if (uVar2 == 1) {
                    iVar3 = iVar3 + 0x100000;
                }
                else if (uVar2 == 2) {
                    iVar3 = iVar3 + 0x200000;
                }
                else if (uVar2 == 3) {
                    iVar3 = iVar3 + 0x400000;
                }
                else if (uVar2 == 4) {
                    iVar3 = iVar3 + 0x800000;
                }
                else if (uVar2 == 5) {
                    iVar3 = iVar3 + 0x1000000;
                }
                else if (uVar2 == 6) {
                    iVar3 = iVar3 + 0x2000000;
                }
                else if (uVar2 == 7) {
                    iVar3 = iVar3 + 0x4000000;
                }
                uVar4 = uVar4 + 1;
                uVar5 = uVar5 >> 4;
            } while (uVar4 < uVar6 + 1);
        }
        if (iVar3 != *0x162c2) {
            *0x162c2 = iVar3;
        }
    }
    return;
}


/* fcn.00013c4c @ 0x13c4c */

ulong fcn.00013c4c(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (0x19 < uVar1) {
        if (uVar1 == 0x1a) {
            return 0x4000000;
        }
        if (uVar1 != 0x1b) {
            if (uVar1 == 0x20) {
                return 0x4000000;
            }
            if (uVar1 != 0x21) {
                if (uVar1 == 0x36) {
                    return 0x400000;
                }
                if (uVar1 == 0x37) {
                    return 0x800000;
                }
                if (uVar1 != 0x38) {
                    if (uVar1 == 0x39) {
                        return 0x2000000;
                    }
                    if (uVar1 == 0x3a) {
                        return 0x4000000;
                    }
                }
                return 0x1000000;
            }
        }
        return 0x8000000;
    }
    if (uVar1 == 0x19) {
        return 0x2000000;
    }
    if (uVar1 == 0x10) {
        return 0x10000;
    }
    if (uVar1 == 0x11) {
        return 0x20000;
    }
    if (uVar1 != 0x12) {
        if (uVar1 == 0x13) {
            return 0x80000;
        }
        if (uVar1 == 0x14) {
            return 0x100000;
        }
        if (uVar1 == 0x15) {
            return 0x200000;
        }
        if (uVar1 == 0x16) {
            return 0x400000;
        }
        if (uVar1 == 0x17) {
            return 0x800000;
        }
        return 0x1000000;
    }
    return 0x40000;
}


/* fcn.00013cfc @ 0x13cfc */

ulong fcn.00013cfc(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 == 0x12) {
        return 0x80000;
    }
    if (uVar1 == 0x13) {
        return 0x100000;
    }
    if (uVar1 == 0x14) {
        return 0x200000;
    }
    if (uVar1 == 0x15) {
        return 0x400000;
    }
    if (uVar1 == 0x16) {
        return 0x800000;
    }
    if (uVar1 != 0x17) {
        if (uVar1 == 0x20) {
            return 0x4000000;
        }
        if (uVar1 == 0x46) {
            return 0x400000;
        }
    }
    return 0x1000000;
}


/* fcn.00013d54 @ 0x13d54 */

ulong fcn.00013d54(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            return 0x400000;
        }
        if (uVar1 != 0x41) {
            if (uVar1 != 0x43) {
                if (uVar1 == 0x4a) {
                    return 0x400000;
                }
                if (uVar1 != 0x4b) {
                    if (uVar1 == 0x8c) {
                        return 0x40000;
                    }
                    if (uVar1 == 0x8d) {
                        return 0x80000;
                    }
                    if (uVar1 == 0x8e) {
                        return 0x100000;
                    }
                    return 0x1000000;
                }
            }
            return 0x800000;
        }
    }
    return 0x200000;
}


/* fcn.00014794 @ 0x14794 */

ulong fcn.00014794(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x16338 < 0) {
                uVar2 = (*0x16338)[0x1b];
            }
            else {
                uVar2 = (*0x16338)[0x16];
            }
        }
        else {
            uVar2 = (*0x16338)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x16338)[iVar1 + -0xc + 0x38];
    }
    if (uVar2 == 0x7fff) {
        return 0x8000000000000003;
    }
    if (arg2 != 0) {
        *arg2 = (uVar2 & 0xffff) << 0xc;
    }
    if (arg3 != 0) {
        *arg3 = (uVar2 | 0xfff0) >> 4;
    }
    return 0;
}


/* fcn.000156ec @ 0x156ec */

void fcn.000156ec(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int iVar4;
    uint *arg2_00;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint auStack_28 [4];
    
    if ((*0xc00fd010 & 0xfffff000) == *0x16338) {
        iVar6 = 0;
        if (arg4 == '\x01') {
            arg2_00 = auStack_28;
            iVar2 = fcn.00014b98(arg1,arg2_00);
            if (iVar2 < 0) {
                return;
            }
        }
        else {
            arg2_00 = arg2;
            auStack_28[0] = arg1;
        }
        uVar1 = auStack_28[0];
        uVar7 = 0x100 - (auStack_28[0] & 0xff);
        uVar8 = uVar7;
        if (0x40 < uVar7) {
            uVar8 = 0x40;
        }
        if (*arg3 < uVar8) {
            uVar8 = *arg3;
        }
        fcn.00014930(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
        uVar7 = uVar8;
        iVar4 = (uVar8 & 0xffff) * 0x100;
        *(*0x16338 + 8) = uVar1;
        iVar3 = iVar4 + -0xff;
        *(*0x16338 + 6) = iVar3;
        fcn.00014930(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
        if (uVar7 != 0) {
            uVar5 = uVar7;
            do {
                *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x16338);
                iVar6 = iVar6 + 1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        *arg3 = *arg3 - uVar7;
    }
    return;
}


/* fcn.00014818 @ 0x14818 */

ulong fcn.00014818(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int iVar5;
    uint32_t auStackX_10 [2];
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [16];
    
    auStackX_10[0] = arg1;
    uVar4 = arg2 & 0xffffffff;
    if ((*0xc00fd010 & 0xfffff000) == *0x16338) {
        uVar3 = 0;
        iVar5 = 0xff0a55a;
        *(*0x16338 + 0xb4) = 0;
        if ((((*(*0x16338 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.00014794(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
            (uVar2 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
           ((*(*0x16338 + 0xb4) = uVar3, *(*0x16338 + 0xb8) == iVar5 &&
            (iVar1 = fcn.00014794(1,0,auStack_18), -1 < iVar1)))) {
            auStackX_10[0] = uVar2;
            if (uVar2 != 0) {
                do {
                    fcn.000156ec((uVar3 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                                 (uVar3 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                    uVar3 = uVar2 - auStackX_10[0];
                } while (uVar2 - auStackX_10[0] < uVar2);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00013228 @ 0x13228 */

int64_t fcn.00013228(int64_t arg1,int64_t arg2)

{
    fcn.000131c8((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00014b98 @ 0x14b98 */

ulong fcn.00014b98(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t auStackX_8 [2];
    uint64_t uStackX_18;
    ulong uStackX_20;
    
    iVar6 = arg1;
    uStackX_20 = *0x16a50;
    uStackX_18 = *0x16a60;
    if (*0x16a60 != 0) goto code_r0x00014c90;
    *(*0x16338 + 0xb4) = 0;
    if (*(*0x16338 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.00014794(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x00014c68;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x16338 + 0xb4) = 0;
            if (*(*0x16338 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.00014794(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x00014c68:
        uVar4 = *0x162c2 - 1U;
        uStackX_18 = *0x162c2 - 1U;
    }
    *0x16a50 = uStackX_20;
    *0x16a48 = uVar4;
    *0x16a60 = uStackX_18;
code_r0x00014c90:
    if (*0x16a58 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x16220);
    }
    uVar1 = *0x16a60 + 1 + iVar6;
    if (*0x16a48 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00014a18 @ 0x14a18 */

ulong fcn.00014a18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t arg4_00;
    uint32_t uVar9;
    uint32_t auStackX_20 [2];
    char in_stack_00000028;
    int32_t var_48h;
    char acStack_68 [32];
    uint32_t var_40h;
    
    arg4_00 = arg4;
    uVar7 = arg3;
    uVar1 = arg4;
    uVar5 = arg3 & 0xffffffff;
    if ((((uVar1 != 0) && (*0x16a60 != 0)) && (*0x16a58 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x16a50 + (0xffffffff - *0x16a48) <= arg1) && (arg1 <= *0x16a60 + (0xffffffff - *0x16a48))) {
                uVar1 = 0;
            }
        }
        else if (*0x16a50 <= arg1) {
            uVar1 = -(*0x16a60 < arg1) & uVar1;
        }
    }
    uVar6 = 0;
    auStackX_20[0] = uVar7;
    if (uVar7 != 0) {
        do {
            fcn.00011040(acStack_68,0x40,0);
            uVar9 = uVar5;
            if (uVar1 == 0) {
                if (uVar9 < 0x41) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = uVar9 - 0x40;
                }
                auStackX_20[0] = uVar5;
                if ((uVar9 - auStackX_20[0] != 0) && (acStack_68 != uVar6 + arg1)) {
                    section..text(acStack_68,uVar6 + arg1,uVar9 - auStackX_20[0]);
                }
            }
            else {
                arg4_00 = CONCAT31(arg4_00 >> 8,in_stack_00000028);
                fcn.000156ec(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
                uVar5 = auStackX_20[0];
            }
            uVar8 = 0;
            uVar4 = uVar5;
            if (uVar9 != uVar4) {
                iVar2 = 0;
                do {
                    if (arg2 == 0) {
                        cVar3 = -1;
                    }
                    else {
                        cVar3 = *(uVar6 + iVar2 + arg2);
                    }
                    if (acStack_68[iVar2] != cVar3) {
                        return 0;
                    }
                    uVar8 = uVar8 + 1;
                    iVar2 = iVar2 + 1;
                } while (uVar8 < uVar9 - uVar4);
            }
            uVar6 = uVar7 - uVar4;
        } while (uVar7 - uVar4 < uVar7);
    }
    return 1;
}


/* fcn.000149d4 @ 0x149d4 */

void fcn.000149d4(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x16338 + 6) = 0x11;
        fcn.00014930(1,0);
        if ((*(*0x16338 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.00015a80 @ 0x15a80 */

int64_t fcn.00015a80(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.000112c0(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.000112f0();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.00011300(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.00015230 @ 0x15230 */

ulong fcn.00015230(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    uint64_t arg2_01;
    uint32_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    uint64_t arg4;
    ushort uVar8;
    ulong unaff_R15;
    uint32_t auStackX_20 [2];
    int64_t iStackY_38;
    
    arg4 = *0xc00fd010 & 0xfffff000;
    if ((arg4 == *0x16338) && (uVar6 = arg2, (arg2 & 0xffffffffU) % *(*0x16a20 + 0x54) == 0)) {
        uVar2 = *0x16330;
        uVar5 = 0;
        if (*0x16330 == 1) {
            uVar2 = *(*0x16338 + 0xc4) >> 0x1d & 0xffffff01;
            *0x16330 = uVar2;
        }
        if (uVar6 != 0) {
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar6 - uVar5 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.00014b98(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x0001526a;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.00014a18(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.00014930(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x16338 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x16a20 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x16338 + 6) = uVar8;
                        fcn.00014930(CONCAT71(iVar4 >> 8,1),0);
                        fcn.000149d4();
                        if ((*0x16a50 <= auStackX_20[0]) && (auStackX_20[0] <= *0x16a60)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x16a20 + 0x54);
                                if (arg2_01 == 0) goto code_r0x000153ef;
                            }
                            fcn.00015a80((auStackX_20[0] - *0x16a60) + 0xffffffff,arg2_01);
                        }
code_r0x000153ef:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.00014a18(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x16330 = 0;
                    }
                    else {
                        fcn.00013228(10,arg2_00);
                    }
                }
                uVar5 = uVar5 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar6 <= uVar5) break;
                uVar2 = *0x16330;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x0001526a:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00014998 @ 0x14998 */

uchar fcn.00014998(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x16338 + 8) = arg1;
    }
    *(*0x16338 + 6) = 0x11;
    fcn.00014930(1,0);
    return *(*0x16338 + 0x10);
}


/* fcn.000112c0 @ 0x112c0 */

uint64_t fcn.000112c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000112f0 @ 0x112f0 */

void fcn.000112f0(void)

{
    return;
}


/* fcn.00011300 @ 0x11300 */

int64_t fcn.00011300(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


