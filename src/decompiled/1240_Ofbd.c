// decompiled by r2ghidra: 1240_Ofbd.pe32
// functions: 85

/* entry0 @ 0x11360 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000113e8(arg1,arg2);
    *0x195f0 = -0x7fffffffffffffff;
    iVar1 = fcn.000110a0(0x194f0);
    if (iVar1 == 0) {
        iVar1 = fcn.0001195c(arg1,arg2);
        if ((-1 < iVar1) || (*0x195f0 < 0)) {
            *0x195f0 = iVar1;
        }
        fcn.00011170(0x194f0,-1);
    }
    iVar1 = *0x195f0;
    if (*0x195f0 < 0) {
        fcn.00014b70();
    }
    return iVar1;
}


/* fcn.0001324c @ 0x1324c */

void fcn.0001324c(void)

{
    return;
}


/* fcn.000113e8 @ 0x113e8 */

ulong fcn.000113e8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    char cVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong *puVar10;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x19420 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x19418 = arg2;
    uStackX_8 = arg1;
    (**(*0x19420 + 0x140))(0x18070,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x19428);
    (**(*0x19420 + 0x140))(0x18080,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x19678 = fcn.00014b40();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x19678);
    *0x19670 = uStackX_8 >> 5;
    fcn.00014bac();
    iVar6 = fcn.00014c18();
    if (iVar6 == 0) {
        uVar7 = fcn.00011280();
        fcn.00011270();
        uVar4 = in(0x1808);
        fcn.00011250(aiStackX_18[0],0x1808);
        while( true ) {
            iVar5 = in(0x1808);
            uVar8 = ((uVar4 & 0xffffff) + 0x16b) - iVar5;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            fcn.00011240();
        }
        fcn.00011250(uVar8,0x1808);
        if ((uVar7 >> 9 & 1) == 0) {
            fcn.00011270();
        }
        else {
            fcn.00011260();
        }
    }
    piVar9 = *(*0x19428 + 0xa0);
    uVar7 = 0;
    if (*(*0x19428 + 0x98) != 0) {
        do {
            if ((*0x18040 == *piVar9) && (*0x18048 == piVar9[1])) break;
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 3;
        } while (uVar7 < *(*0x19428 + 0x98));
    }
    if ((*0x19490 != NULL) || (iVar6 = (**(*0x19420 + 0x140))(0x18070,0,0x19490), -1 < iVar6)) {
        (***0x19490)(*0x19490,0x19498);
    }
    *0x194d0 = 0x10000;
    if ((*0x194c8 != NULL) || ((*0x194c8 = fcn.00014b40(0x10000,0x10000), *0x194c8 != NULL && (0x37 < *0x194d0)))) {
        uVar7 = *0x194d0;
        piVar2 = *0x194c8;
        piVar9 = *0x194c8 + 5;
        (*0x194c8)[2] = 0;
        *piVar2 = piVar9;
        piVar2[1] = uVar7 - 0x28;
        piVar2[4] = piVar9;
        piVar2[3] = piVar2 + (uVar7 - 0x10);
    }
    iVar6 = (**(*0x19428 + 0xd0))(0x18050,0,0x194d8);
    uVar1 = *0x18700;
    if (iVar6 < 0) {
        *0x194d8 = 0;
    }
    puVar10 = 0x18ef0;
    do {
        if (*puVar10 == NULL) {
            return 0;
        }
        cVar3 = (**puVar10)(uVar1,0x194e0);
        puVar10 = puVar10 + 1;
    } while (cVar3 == '\0');
    return 0;
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
    
    fcn.0001324c();
    *(arg1 + 0xf8) = 0;
    if ((*0x18790 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.0001195c @ 0x1195c */

int64_t fcn.0001195c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x19480 == 0) {
        *0x19430 = *(arg2 + 0x60);
        *0x19470 = *(arg2 + 0x58);
        *0x19480 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x19480 == 0) {
        *0x19430 = *(arg2 + 0x60);
        *0x19470 = *(arg2 + 0x58);
        *0x19480 = arg2;
    }
    iVar1 = (**(*0x19430 + 0x140))(0x18138,0,0x19440);
    if (((-1 < iVar1) && ((***0x19440)(*0x19440,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x19440)[1])(*0x19440,0x19438), -1 < iVar1)) {
        iVar1 = fcn.000143e4();
        *0x19448 = 1;
        if (iVar1 != 0) {
            *0x19470 = iVar1;
        }
        *0x19458 = 0;
        fcn.00014278();
        fcn.00014300();
        *0x19458 = 1;
        iVar1 = fcn.00011794(arg1,arg2);
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


/* fcn.00014b70 @ 0x14b70 */

void fcn.00014b70(void)

{
    char cVar1;
    
    cVar1 = fcn.00014afc(*0x19678);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00014b96. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x19428 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00014ba5. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x19420 + 0x48))(*0x19678);
    return;
}


/* fcn.00014afc @ 0x14afc */

uint64_t fcn.00014afc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x19670 != 0) {
        puVar2 = *0x19678 + 8;
        in_RAX = *0x19678;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x19670);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00014b40 @ 0x14b40 */

ulong fcn.00014b40(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x19428 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00014bac @ 0x14bac */

int64_t fcn.00014bac(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x19488 == 0) {
        *0x19488 = 0;
        if (*(*0x19418 + 0x68) != 0) {
            piVar2 = *(*0x19418 + 0x70);
            do {
                if ((*0x18060 == *piVar2) && (*0x18068 == piVar2[1])) {
                    *0x19488 = (*(*0x19418 + 0x70))[uVar1 * 3 + 2];
                    return *0x19488;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x19418 + 0x68));
        }
    }
    return *0x19488;
}


/* fcn.00014c18 @ 0x14c18 */

void fcn.00014c18(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00014bac();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00014c4f:
            if ((piVar1 == NULL) || ((*0x18650 == *(piVar1 + 4) && (*0x18658 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00014c4f;
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


/* fcn.000143e4 @ 0x143e4 */

ulong fcn.000143e4(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x19438 != 0) {
        iVar3 = *(*0x19438 + 0xa0);
        for (iVar2 = *(*0x19438 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00014444(iVar3,0x18150,0x10);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00014278 @ 0x14278 */

ulong fcn.00014278(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x19448 == '\0') {
        if (*0x19468 == 0) {
            if (*0x19458 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x19430 + 0x140))(0x18118,0,0x19468);
        }
    }
    else if (*0x19450 == 0) {
        if ((*0x19458 == '\0') && (*0x19438 != 0)) {
    //WARNING: Could not recover jumptable at 0x000142b7. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x19438 + 0xd0))(0x18128,0,0x19450);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00014300 @ 0x14300 */

int64_t fcn.00014300(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x19448 == '\0') {
        if (*0x19478 == 0) {
            if (*0x19458 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x19430 + 0x18))(0x1f);
            (**(*0x19430 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x19430 + 0x140))(0x18000,0,0x19478);
            if (iVar1 < 0) {
                *0x19478 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x19460 == 0) {
        if (*0x19438 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x19438 + 0xd0))(0x18020,0,0x19460);
        if (iVar1 < 0) {
            *0x19460 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011794 @ 0x11794 */

ulong fcn.00011794(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    uint16_t uVar4;
    char acStackX_18 [8];
    ulong *puStackX_20;
    ulong uStack_18;
    ulong uStack_10;
    
    uStack_10 = 0x26;
    uStack_18 = 0;
    puStackX_20 = NULL;
    if (*0x19480 == 0) {
        *0x19430 = *(arg1 + 0x60);
        *0x19470 = *(arg1 + 0x58);
        *0x19480 = arg1;
    }
    if ((((*0x19440 != NULL) || (iVar1 = (**(*0x19430 + 0x140))(0x18138,0,0x19440), -1 < iVar1)) &&
        ((***0x19440)(*0x19440,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x19440)[1])(*0x19440,0x19438), -1 < iVar1)) {
        iVar1 = fcn.000143e4();
        *0x19448 = 1;
        if (iVar1 != 0) {
            *0x19470 = iVar1;
        }
        *0x19458 = 0;
        fcn.00014278();
        fcn.00014300();
        *0x19458 = 1;
    }
    iVar1 = (**(*0x19430 + 0x140))(0x18070,0,0x193d0);
    if (((-1 < iVar1) && (iVar1 = (*(*0x19440)[1])(*0x193d0,0x19438), -1 < iVar1)) &&
       (iVar1 = (**(*0x19438 + 0xd0))(0x18090,0,&puStackX_20), -1 < iVar1)) {
        *0x196c0 = 1;
        iVar1 = (**(*0x19438 + 0xd0))(0x180a0,0,0x196b8);
        if (-1 < iVar1) {
            uVar2 = (**puStackX_20)(puStackX_20,0x11628,&uStack_10,&uStack_18);
            uVar4 = 0;
            pcVar3 = 0x11a9c;
            while (pcVar3 != NULL) {
                (*pcVar3)();
                uVar4 = uVar4 + 1;
                pcVar3 = *(uVar4 * 8 + 0x187d0);
            }
            return uVar2;
        }
    }
    return 0;
}


/* fcn.000171d0 @ 0x171d0 */

int64_t fcn.000171d0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013210 @ 0x13210 */

int64_t fcn.00013210(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg2);
    pcVar1 = "GMxPG5x";
    if (uVar2 == 0) {
        return 0;
    }
    do {
        if (((*arg1 == '\0') || (*pcVar1 != *arg1)) || (uVar2 < 2)) break;
        pcVar1 = pcVar1 + 1;
        arg1 = arg1 + 1;
        uVar2 = uVar2 - 1;
    } while (*pcVar1 != '\0');
    return *pcVar1 - *arg1;
}


/* fcn.00014604 @ 0x14604 */

void fcn.00014604(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_18 = arg2;
    iStackX_20 = arg3;
    fcn.000146f4(noname_0,0,arg1,&iStackX_18);
    return;
}


/* fcn.000146f4 @ 0x146f4 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.000146f4(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *arg4_00;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint in_register_00000014;
    uint8_t *puVar6;
    uint8_t uVar7;
    uint32_t arg3_00;
    uint8_t *puVar8;
    int64_t arg2_00;
    uint8_t *arg1_00;
    uint32_t *puStackX_18;
    int64_t var_77h;
    uint8_t *puStack_68;
    uint8_t *puStack_60;
    uint8_t auStack_58 [32];
    int64_t var_9h;
    int64_t var_1h;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    if ((arg1 == 0) || (arg3 == 0)) {
        arg1 = -1;
    }
    else {
        arg1_00 = arg1;
        if (arg2_00 != 1) {
            puStackX_18 = arg4 + -8;
            arg4_00 = arg4;
            while (uVar7 = *arg3, uVar7 != 0) {
                puVar8 = arg3 + 1;
                if (uVar7 == 0x25) {
                    if (*puVar8 == 0x25) {
                        puVar8 = arg3 + 2;
                        *arg1_00 = 0x25;
                        goto code_r0x00014760;
                    }
                    uVar7 = 0x20;
                    if (*puVar8 == 0x30) {
                        uVar7 = 0x30;
                        puVar8 = arg3 + 2;
                    }
                    if (*puVar8 == 0x2a) {
                        puStackX_18 = puStackX_18 + 2;
                        uVar2 = *puStackX_18;
                        puVar8 = puVar8 + 1;
                    }
                    else {
                        uVar2 = fcn.00014530(puVar8,&puStack_68);
                        puVar8 = puStack_68;
                    }
                    if ((*puVar8 == 0x73) || (*puVar8 == 0x61)) {
                        for (puVar6 = *(puStackX_18 + 2); *puVar6 != 0; puVar6 = puVar6 + 1) {
                            arg2_00 = arg2_00 + -1;
                            if (arg2_00 == 0) goto code_r0x00014aa4;
                            *arg1_00 = *puVar6;
                            arg1_00 = arg1_00 + 1;
                        }
code_r0x00014a93:
                        puStackX_18 = puStackX_18 + 2;
                        puVar8 = puVar8 + 1;
                    }
                    else {
                        if (*puVar8 == 0x53) {
                            for (puVar6 = *(puStackX_18 + 2); *puVar6 != 0; puVar6 = puVar6 + 2) {
                                arg2_00 = arg2_00 + -1;
                                if (arg2_00 == 0) goto code_r0x00014aa4;
                                *arg1_00 = *puVar6;
                                arg1_00 = arg1_00 + 1;
                            }
                            goto code_r0x00014a93;
                        }
                        if (*puVar8 == 99) {
                            *arg1_00 = puStackX_18[2];
                            arg1_00 = arg1_00 + 1;
                            goto code_r0x00014a93;
                        }
                        if ((*puVar8 & 0xdf) == 0x47) {
                            arg4_00 = **(puStackX_18 + 2);
                            puStack_60 = arg1_00;
                            iVar3 = fcn.00014adc(arg1_00,arg2_00,0x18ae0,arg4_00);
                            arg1_00 = arg1_00 + iVar3;
                            if (*puVar8 == 0x47) {
                                for (puVar6 = puStack_60; *puVar6 != 0; puVar6 = puVar6 + 1) {
                                    if (*puVar6 + 0x9f < 0x1a) {
                                        *puVar6 = *puVar6 - 0x20;
                                    }
                                }
                            }
                            arg2_00 = arg2_00 - iVar3;
                            goto code_r0x00014a93;
                        }
                        if (*puVar8 == 0x72) {
                            arg4_00 = fcn.0001462c(*(puStackX_18 + 2));
                            if (arg4_00 == NULL) {
                                arg4_00 = "Status Code";
                                iVar3 = fcn.00014adc(arg1_00,arg2_00,0x18edc,0x18290);
                            }
                            else {
                                iVar3 = fcn.00014adc(arg1_00,arg2_00,0x18ee4,arg4_00);
                            }
                            arg1_00 = arg1_00 + iVar3;
                            arg2_00 = arg2_00 - iVar3;
                            goto code_r0x00014a93;
                        }
                        uVar1 = *puVar8;
                        if (uVar1 == 0x6c) {
                            puVar8 = puVar8 + 1;
                        }
                        if ((*puVar8 == 100) || (*puVar8 == 0x69)) {
                            arg3_00 = 10;
code_r0x0001498b:
                            puVar6 = auStack_58;
                            if (*puVar8 != 0x70 && uVar1 != 0x6c) {
                                arg4_00 = NULL;
                                puVar4 = fcn.000144bc(puStackX_18[2],auStack_58,arg3_00,0);
                                if (auStack_58 < puVar4) {
                                    do {
                                        uVar1 = *puVar6;
                                        *puVar6 = *puVar4;
                                        puVar6 = puVar6 + 1;
                                        *puVar4 = uVar1;
                                        puVar4 = puVar4 + -1;
                                    } while (puVar6 < puVar4);
                                }
                            }
                            else {
                                arg4_00 = CONCAT71(arg4_00 >> 8,1);
                                puVar4 = fcn.000144bc(*(puStackX_18 + 2),auStack_58,arg3_00,arg4_00);
                                if (auStack_58 < puVar4) {
                                    do {
                                        uVar1 = *puVar6;
                                        *puVar6 = *puVar4;
                                        puVar6 = puVar6 + 1;
                                        *puVar4 = uVar1;
                                        puVar4 = puVar4 + -1;
                                    } while (puVar6 < puVar4);
                                }
                            }
                            if ((*puVar8 == 0x58) || (*puVar8 == 0x70)) {
                                puVar6 = auStack_58;
                                uVar1 = auStack_58[0];
                                while (uVar1 != 0) {
                                    if (*puVar6 + 0x9f < 0x1a) {
                                        *puVar6 = *puVar6 - 0x20;
                                    }
                                    puVar6 = puVar6 + 1;
                                    uVar1 = *puVar6;
                                }
                            }
                            uVar5 = 0;
                            uVar1 = auStack_58[0];
                            while (uVar1 != 0) {
                                uVar1 = auStack_58[uVar5 + 1];
                                uVar5 = uVar5 + 1;
                            }
                            while (uVar5 < uVar2) {
                                uVar5 = uVar5 + 1;
                                arg2_00 = arg2_00 + -1;
                                if (arg2_00 == 0) goto code_r0x00014aa4;
                                *arg1_00 = uVar7;
                                arg1_00 = arg1_00 + 1;
                            }
                            puVar6 = auStack_58;
                            uVar7 = auStack_58[0];
                            while (uVar7 != 0) {
                                arg2_00 = arg2_00 + -1;
                                if (arg2_00 == 0) goto code_r0x00014aa4;
                                uVar7 = *puVar6;
                                puVar6 = puVar6 + 1;
                                *arg1_00 = uVar7;
                                arg1_00 = arg1_00 + 1;
                                uVar7 = *puVar6;
                            }
                            goto code_r0x00014a93;
                        }
                        if (((*puVar8 & 0xdf) == 0x58) || (*puVar8 == 0x70)) {
                            arg3_00 = 0x10;
                            goto code_r0x0001498b;
                        }
                    }
                }
                else {
                    *arg1_00 = uVar7;
code_r0x00014760:
                    arg1_00 = arg1_00 + 1;
                    arg2_00 = arg2_00 + -1;
                }
                if (arg2_00 == 1) break;
                arg3 = puVar8;
            }
        }
        *arg1_00 = 0;
        arg1 = arg1_00 - arg1;
    }
code_r0x00014ac0:
    return arg1;
code_r0x00014aa4:
    *arg1_00 = 0;
    arg1 = arg1_00 - arg1;
    goto code_r0x00014ac0;
}


/* fcn.00017230 @ 0x17230 */

int64_t fcn.00017230(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011c7c @ 0x11c7c */

void fcn.00011c7c(int64_t arg1)

{
    uint8_t *puVar1;
    char cVar2;
    int64_t iVar3;
    int iVar4;
    char *pcVar5;
    int64_t iVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    uint64_t uVar10;
    bool bVar11;
    ulong uStack_108;
    
    fcn.000171d0(&uStack_108,0,0x100);
    uVar10 = *(arg1 + 0xe);
    pcVar8 = *(arg1 + 6) + arg1;
    pcVar9 = *(pcVar8 + -4);
    do {
        pcVar7 = "OFWH";
        for (pcVar5 = pcVar9; pcVar5 < pcVar9 + 4; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 != *pcVar7) {
                iVar4 = *pcVar5 - *pcVar7;
                goto code_r0x00011cd4;
            }
            pcVar7 = pcVar7 + 1;
        }
        iVar4 = 0;
code_r0x00011cd4:
        pcVar7 = pcVar9;
    } while ((iVar4 != 0) &&
            (pcVar7 = pcVar9 + 1, bVar11 = pcVar9 < *(uVar10 + 6 + arg1) + *(pcVar8 + -4), pcVar9 = pcVar7, bVar11));
    if (pcVar7 < *(uVar10 + 6 + arg1) + *(pcVar8 + -4)) {
        iVar6 = 0;
        do {
            iVar3 = iVar6 + 1;
            pcVar9 = iVar6 + 0x18859;
            iVar6 = iVar3;
        } while (*pcVar9 != '\0');
        pcVar9 = pcVar7 + 4;
        iVar6 = 0;
        cVar2 = *pcVar9;
        while (cVar2 != '\0') {
            iVar6 = iVar6 + 1;
            cVar2 = pcVar9[iVar6];
        }
        if (iVar3 == iVar6) {
            iVar3 = 0;
            cVar2 = *pcVar9;
            while (cVar2 != '\0') {
                iVar3 = iVar3 + 1;
                cVar2 = pcVar9[iVar3];
            }
            iVar6 = fcn.00013210(iVar6,pcVar9,iVar3);
            if (iVar6 == 0) {
                if (*(pcVar7 + 0x14) < 2) {
                    *(uVar10 + 5 + arg1) = 1;
                    *(arg1 + 0xc) = *(arg1 + 0xc) | 0x10;
                    fcn.00014604(&uStack_108,0x187e8,1,0xd);
                    if (uStack_108 != '\0') {
                        iVar6 = &uStack_108 - pcVar8;
                        do {
                            *pcVar8 = uStack_108;
                            pcVar8 = pcVar8 + 1;
                            uStack_108 = pcVar8[iVar6];
                        } while (pcVar8[iVar6] != 0);
                    }
                }
                else {
                    puVar1 = uVar10 + 5 + arg1;
                    *puVar1 = *puVar1 | 2;
                    *(arg1 + 0xc) = *(arg1 + 0xc) | 0x10;
                    cVar2 = 'E';
                    iVar6 = "Error: Cannot update BIOS with different platform sku!!" - pcVar8;
                    do {
                        *pcVar8 = cVar2;
                        pcVar8 = pcVar8 + 1;
                        cVar2 = pcVar8[iVar6];
                    } while (cVar2 != '\0');
                }
                goto code_r0x00011e26;
            }
        }
        puVar1 = uVar10 + 5 + arg1;
        *puVar1 = *puVar1 | 2;
        *(arg1 + 0xc) = *(arg1 + 0xc) | 0x10;
        cVar2 = 'E';
        iVar6 = "Error: Cannot update BIOS with different platform name!!" - pcVar8;
        do {
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
            cVar2 = pcVar8[iVar6];
        } while (cVar2 != '\0');
    }
    else {
        puVar1 = uVar10 + 5 + arg1;
        *puVar1 = *puVar1 | 2;
        *(arg1 + 0xc) = *(arg1 + 0xc) | 0x10;
        cVar2 = 'E';
        iVar6 = "Error: Cannot find BIOS information!!" - pcVar8;
        do {
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
            cVar2 = pcVar8[iVar6];
        } while (cVar2 != '\0');
    }
code_r0x00011e26:
    *pcVar8 = '\0';
    return;
}


/* fcn.00012838 @ 0x12838 */

int fcn.00012838(void)

{
    uint64_t uVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *0x18660;
    uVar4 = *0xc00fd010;
    if (((uVar4 & 0xfffff000) == *0x18660) && (*(*0x18660 + 0xb4) = 0, *(uVar1 + 0xb8) == 0xff0a55a)) {
        *(uVar1 + 0xb4) = 4;
        *(uVar1 + 0xb4) = 0x1000;
        uVar6 = *(uVar1 + 0xb8);
        uVar4 = CONCAT71((uVar4 & 0xfffff000) >> 8,uVar6) & 0xffffffffffffff0f;
        uVar5 = *(uVar1 + 0xb8) >> 8 & 3;
        iVar2 = fcn.000127d8(uVar4);
        if (uVar5 == 1) {
            iVar3 = fcn.000127d8(CONCAT71(uVar4 >> 8,uVar6 >> 4) & 0xffffffffffffff0f);
            iVar2 = iVar2 + iVar3;
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001259c @ 0x1259c */

int fcn.0001259c(void)

{
    uint32_t uVar1;
    int iVar2;
    bool bVar3;
    
    uVar1 = *0xfdba019c;
    bVar3 = (*0xfdba019c >> 8 & 1) != 0;
    if (bVar3) {
        *0xfdba019c = *0xfdba019c & 0xfffffeff;
    }
    iVar2 = *0xc00b0040;
    if (((*0xc00b0040 == -1) && (*0xc00b0000 == -1)) && (*0xc00b0002 == -1)) {
        iVar2 = 0x40000;
    }
    if (bVar3) {
        *0xfdba019c = uVar1;
    }
    return iVar2;
}


/* fcn.00012704 @ 0x12704 */

ulong fcn.00012704(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    
    uVar2 = *0x18660;
    uVar3 = arg1;
    if ((*0xc00fd010 & 0xfffff000) != *0x18660) {
        return 0x8000000000000003;
    }
    *(*0x18660 + 0xb4) = 0;
    if (*(uVar2 + 0xb8) != 0xff0a55a) {
        return 0x8000000000000003;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 1) {
        uVar3 = 4;
    }
    else {
        if (arg1 == 2) {
            uVar3 = 3;
            goto code_r0x00012787;
        }
        if (arg1 == 3) {
            uVar3 = 2;
            goto code_r0x00012787;
        }
        if (arg1 == 5) {
            uVar3 = 1;
            goto code_r0x00012787;
        }
        if (arg1 == 6) {
            uVar3 = 5;
            goto code_r0x00012787;
        }
        if (arg1 == 0x10) {
            uVar3 = 6;
            goto code_r0x00012787;
        }
    }
    if (uVar3 == 0xff) {
        return 0x8000000000000003;
    }
code_r0x00012787:
    *(uVar2 + 0xb4) = uVar3 * 4 + 0x2000;
    uVar1 = *(uVar2 + 0xb8);
    if (uVar1 == 0x7fff) {
        return 0x8000000000000003;
    }
    *arg2 = (uVar1 & 0x7fff) * 0x1000;
    *arg3 = (uVar1 >> 4 & 0x7fff000) + (uVar1 & 0x7fff) * -0x1000 + 0x1000;
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
    
    //[00] -r-x section size 28672 named .text
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


/* fcn.00012f28 @ 0x12f28 */

//WARNING: Possible PIC construction at 0x00012bf2: Changing call to branch
//WARNING: Possible PIC construction at 0x00012f07: Changing call to branch
//WARNING: Possible PIC construction at 0x000131ff: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00012bf7)
//WARNING: Removing unreachable block (ram,0x00012f0c)
//WARNING: Removing unreachable block (ram,0x00012f0e)

void fcn.00012f28(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int16_t *piVar6;
    ushort uVar7;
    int16_t iVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    char *pcVar11;
    ulong in_RDX;
    uint8_t uVar12;
    uint64_t unaff_RBX;
    uint64_t uVar13;
    int64_t iVar14;
    ulong in_R9;
    int16_t *apiStackX_8 [2];
    ulong auStack_b0 [5];
    char acStack_88 [88];
    ulong auStack_30 [3];
    
    iVar14 = *0x193f8;
    arg1 = *arg1;
    uVar12 = *(arg1 + 10);
    iVar4 = CONCAT71(in_R9 >> 8,uVar12);
    uVar9 = uVar12 >> 6 & 1;
    if (uVar9 == 0) {
        *0x19605 = uVar12 & 0xbf;
    }
    *0x196a0 = arg1;
    if (*0x19605 == 1) {
        unaff_RBX = 0;
        if (*0x193f8 != 0) {
            *0x195f8 = 0;
            return;
        }
        *0x19610 = *(arg1 + 2);
        auStack_30[0] = 0x131cd;
        iVar14 = (**(*0x19428 + 0x60))(0,6,*0x19610,0x19618);
        if (iVar14 < 0) {
            *0x193f8 = *0x193e8;
        }
        else {
            *0x193f0 = '\x01';
            *0x193f8 = *0x19618;
        }
        if (*0x193f8 != 0) {
            *0x195f8 = 0;
            return;
        }
        uVar7 = 5;
        pcVar11 = "Error : No memory allocated!!";
        *0x20 = &stack0xffffffffffffffd0;
        auStack_30[0] = 0x13204;
        *0x193f8 = 0;
        goto code_r0x00012918;
    }
    if (*0x19605 == 2) {
        if (uVar9 == 1) {
            *0x195f8 = *0x195f8 - *(arg1 + 0x12);
        }
        if (*0x193f0 == '\x01') {
            if ((*(arg1 + 0x12) + *0x195f8 <= *0x19610 * 0x1000) && (*0x194d8 != NULL)) {
                auStack_30[0] = 0x130a4;
                iVar14 = (*(*0x194d8)[2])(*0x195f8 + *0x193f8,*(arg1 + 0x12));
                goto code_r0x000130ec;
            }
        }
        else {
            auStack_30[0] = 0x130ab;
            iVar3 = fcn.00012838();
            if ((*(*0x196a0 + 0x12) + *0x195f8 <= iVar3 - 0x1000000U) && (*0x194d8 != NULL)) {
                auStack_30[0] = 0x130ec;
                iVar14 = (***0x194d8)(*0x195f8 + *0x193f8);
code_r0x000130ec:
                uVar10 = 0;
                if (-1 < iVar14) {
                    if (*0x194d8 != NULL) {
                        auStack_30[0] = 0x13114;
                        iVar14 = (***0x194d8)(*(*0x196a0 + 0xe),*(*0x196a0 + 0x12));
                        if (-1 < iVar14) {
                            uVar1 = *(*0x196a0 + 0x12);
                            uVar13 = uVar1 >> 1;
                            if (uVar13 != 0) {
                                piVar6 = *(*0x196a0 + 0xe);
                                do {
                                    uVar10 = uVar10 + *piVar6;
                                    piVar6 = piVar6 + 1;
                                    uVar13 = uVar13 - 1;
                                } while (uVar13 != 0);
                            }
                            if (uVar10 == *(*0x196a0 + 0x16)) {
                                if ((uVar1 != 0) && (*0x195f8 + *0x193f8 != *(*0x196a0 + 0xe))) {
                                    auStack_30[0] = 0x1317d;
                                    section..text(*0x195f8 + *0x193f8,*(*0x196a0 + 0xe),uVar1);
                                }
                                *0x195f8 = *0x195f8 + *(*0x196a0 + 0x12);
                                return;
                            }
                            pcVar11 = "Data checksum is invalid";
                            goto code_r0x00012fe4;
                        }
                    }
                }
            }
        }
        pcVar11 = "Invalid memory usage";
    }
    else {
        if (*0x19605 != 3) {
            if (*0x19605 != 4) {
                if (*0x19605 == 5) goto code_r0x00012fcf;
                if (*0x19605 != 8) {
                    if (*0x19605 != 0x10) {
                        return;
                    }
                    if (*0x193f0 == '\0') {
                        return;
                    }
                    auStack_30[0] = 0x12fb2;
                    (**(*0x19428 + 0x68))(*0x193f8,*0x19610);
                    *0x193f8 = 0;
                    *0x19618 = 0;
                    return;
                }
            }
            piVar6 = NULL;
            unaff_RBX = 0;
            *0x18100 = 1;
            apiStackX_8[0] = piVar6;
            if ((*(arg1 + 10) & 4) != 0) {
                auStack_b0[0] = 0x12be0;
                iVar5 = fcn.00012974(0,CONCAT71(in_RDX >> 8,uVar12 >> 6) & 0xffffffffffffff01,arg1);
                if (iVar5 < 0) {
                    uVar7 = 4;
                    pcVar11 = "Unsupported type";
                    *0x20 = &stack0xffffffffffffff50;
                    auStack_b0[0] = 0x12bf7;
                    goto code_r0x00012918;
                }
                *0x19608 = *0x195fc + *0x193f8;
                *0x19604 = '\x01';
                *0x19606 = '\0';
            }
            if (*(*0x196a0 + 0xb) == '\x02') {
                if (*0x19604 != '\0') {
                    if (*0x195fc + iVar14 != 0x19698) {
                        auStack_b0[0] = 0x12c61;
                        section..text(*0x195fc + iVar14,0x19698,6);
                    }
                    iVar5 = iVar14 + 0x16 + *0x195fc;
                    if (iVar5 != 0x19690) {
                        auStack_b0[0] = 0x12c82;
                        section..text(iVar5,0x19690,2);
                    }
                    iVar5 = iVar14 + 0x18 + *0x195fc;
                    if (iVar5 != 0x19680) {
                        auStack_b0[0] = 0x12ca3;
                        section..text(iVar5,0x19680,2);
                    }
                    iVar8 = 0;
                    iVar5 = 0x3f;
                    piVar6 = *0x195fc + iVar14;
                    do {
                        iVar8 = iVar8 + *piVar6;
                        piVar6 = piVar6 + 1;
                        iVar5 = iVar5 + -1;
                    } while (iVar5 != 0);
                    piVar6 = *0x195fc + iVar14 + 0x3f;
                    apiStackX_8[0] = CONCAT62(apiStackX_8[0]._2_6_,-0x4546 - iVar8);
                    arg1 = 0;
                    if (piVar6 != &stack0x00000008) {
                        arg1 = 2;
                        auStack_b0[0] = 0x12cf1;
                        section..text(piVar6,&stack0x00000008,2);
                    }
                    goto code_r0x00012cf1;
                }
            }
            else {
code_r0x00012cf1:
                if (*0x19604 != '\0') {
                    *0x19604 = '\0';
                    auStack_b0[0] = 0x12d0e;
                    *0x19606 = fcn.0001260c(CONCAT71(piVar6 >> 8,*(*0x196a0 + 0xb)));
                }
            }
            iVar14 = -*0x19688 + *0x195fc;
            if (*0x19606 == '\x01') {
                auStack_b0[0] = 0x12d3a;
                fcn.0001610c(iVar14);
                iVar5 = 0;
                auStack_b0[0] = 0x12d44;
                cVar2 = fcn.00012ae0(iVar14,0);
                if (cVar2 == '\0') {
                    auStack_b0[0] = 0x12d57;
                    iVar5 = *0x19608;
                    cVar2 = fcn.00012ae0(iVar14,*0x19608);
                    if (cVar2 == '\0') {
                        auStack_b0[0] = 0x12d68;
                        fcn.000160bc(iVar14);
                        goto code_r0x00012d6b;
                    }
                    uVar13 = unaff_RBX;
                }
                else {
code_r0x00012d6b:
                    auStack_b0[0] = 0x12d70;
                    fcn.000161cc(iVar14,iVar5,arg1,iVar4);
                    auStack_b0[0] = 0x12d7f;
                    cVar2 = fcn.00012ae0(iVar14,*0x19608);
                    uVar13 = ~-(cVar2 != '\0') & 0x8000000000000007;
                }
                auStack_b0[0] = 0x12d9c;
                fcn.0001616c(iVar14);
                if (uVar13 < 0) {
                    do {
                        if (*(unaff_RBX * 6 + 0x180d0) == *(*0x196a0 + 0xb)) goto code_r0x00012e4f;
                        uVar12 = unaff_RBX + 1;
                        unaff_RBX = uVar12;
                    } while (uVar12 < 8);
                    unaff_RBX = 0x11;
code_r0x00012e4f:
                    if (unaff_RBX == '\x11') {
                        auStack_b0[0] = 0x12e8f;
                        fcn.000134cc(&stack0xffffffffffffff78,100,0x18a10,iVar4);
                    }
                    else {
                        auStack_b0[0] = 0x12e78;
                        fcn.000134cc(&stack0xffffffffffffff78,100,0x189f8,unaff_RBX * 6 + 0x180d1);
                    }
                    uVar7 = 5;
                    goto code_r0x00012f03;
                }
                *0x19608 = *0x19608 + 0x1000;
                *0x19600 = *0x19600 + -0x1000;
                *0x195fc = *0x195fc + 0x1000;
                if (*0x19600 == 0) {
                    *0x19604 = '\x01';
                    do {
                        if (*(unaff_RBX * 6 + 0x180d0) == *(*0x196a0 + 0xb)) goto code_r0x00012dfb;
                        uVar12 = unaff_RBX + 1;
                        unaff_RBX = uVar12;
                    } while (uVar12 < 8);
                    unaff_RBX = 0x11;
code_r0x00012dfb:
                    if (unaff_RBX == '\x11') {
                        pcVar11 = "Update success.";
                        goto code_r0x00012ef0;
                    }
                    pcVar11 = "Update success for %a.";
                    goto code_r0x00012eca;
                }
                uVar7 = 2;
                pcVar11 = 0x189c8;
            }
            else {
                do {
                    if (*(unaff_RBX * 6 + 0x180d0) == *(*0x196a0 + 0xb)) goto code_r0x00012ebe;
                    uVar12 = unaff_RBX + 1;
                    unaff_RBX = uVar12;
                } while (uVar12 < 8);
                unaff_RBX = 0x11;
code_r0x00012ebe:
                if (unaff_RBX == '\x11') {
                    pcVar11 = "There is locked region, skip updating.";
code_r0x00012ef0:
                    auStack_b0[0] = 0x12efe;
                    fcn.000134cc(&stack0xffffffffffffff78,100,pcVar11,iVar4);
                }
                else {
                    pcVar11 = "%a is locked, skip updating.";
code_r0x00012eca:
                    auStack_b0[0] = 0x12ee7;
                    fcn.000134cc(&stack0xffffffffffffff78,100,pcVar11,unaff_RBX * 6 + 0x180d1);
                }
                uVar7 = 4;
code_r0x00012f03:
                pcVar11 = &stack0xffffffffffffff78;
            }
            *0x20 = &stack0xffffffffffffff50;
            auStack_b0[0] = 0x12f0c;
            goto code_r0x00012918;
        }
code_r0x00012fcf:
        if (*0x19408 == 0) {
            pcVar11 = "Error : Function is not supported!!";
        }
        else {
            *0x193f8 = 0;
            *0x195f8 = 0;
            if ((uVar12 == 3) && (*0x193f8 = 0, *(arg1 + 2) < 0x1005)) {
                *0x193f8 = *0x19408;
            }
            if ((uVar12 == 5) && (*(arg1 + 2) < 5)) {
                *0x193f8 = *0x19408 + 0x1000000;
            }
            if (*0x193f8 != 0) {
                *0x195f8 = 0;
                return;
            }
            pcVar11 = "Error : Buffer is too small!!";
        }
    }
code_r0x00012fe4:
    uVar7 = 5;
code_r0x00012918:
    iVar4 = *0x196a0;
    *(*0x20 + -8) = unaff_RBX;
    iVar14 = 0;
    *(*0x196a0 + 0xc) = uVar7;
    cVar2 = *pcVar11;
    while (cVar2 != '\0') {
        iVar14 = iVar14 + 1;
        cVar2 = pcVar11[iVar14];
    }
    uVar1 = *(iVar4 + 0x1a);
    if ((iVar14 != 0) && (uVar1 != pcVar11)) {
        *(*0x20 + -0x30) = 0x12950;
        section..text(uVar1,pcVar11,iVar14);
        iVar4 = *0x196a0;
    }
    iVar14 = 0;
    cVar2 = *pcVar11;
    while (cVar2 != '\0') {
        iVar14 = iVar14 + 1;
        cVar2 = pcVar11[iVar14];
    }
    *(*(iVar4 + 0x1a) + iVar14) = 0;
    return;
}


/* fcn.00013404 @ 0x13404 */

int64_t fcn.00013404(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    ushort uVar8;
    
    uVar1 = arg2;
    cVar5 = arg1;
    iVar4 = fcn.000133a0(arg1);
    uVar7 = 0;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg1_00 = CONCAT71(arg1 >> 8,cVar5);
    fcn.00013318(arg1_00);
    uVar6 = CONCAT71(arg1_00 >> 8,cVar5);
    fcn.000132a0(uVar6,CONCAT71(arg2 >> 8,uVar1));
    fcn.000133a0(CONCAT71(uVar6 >> 8,cVar5));
    uVar8 = 0x60;
    uVar2 = 100;
    uVar6 = 0;
    if (cVar5 != '`') {
        uVar2 = 0x66;
    }
    arg2_00 = uVar2;
    uVar3 = in(uVar2);
    if ((uVar3 & 2) != 0) {
        do {
            if (0x1ffff < uVar7) goto code_r0x000134a6;
            uVar6 = 0;
            fcn.00014cc8(0xf,arg2_00);
            arg2_00 = uVar2;
            uVar3 = in(uVar2);
            uVar7 = uVar7 + 1;
        } while ((uVar3 & 2) != 0);
        if (0x1ffff < uVar7) goto code_r0x000134a6;
    }
    if (cVar5 != '`') {
        uVar8 = 0x62;
    }
    out(uVar8,arg3);
code_r0x000134a6:
    fcn.00013318(CONCAT71(uVar6 >> 8,cVar5));
    return iVar4;
}


/* fcn.000132a0 @ 0x132a0 */

ulong fcn.000132a0(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar4 = uVar1;
    uVar2 = in(uVar4);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.00014cc8(0xf,uVar1);
            uVar2 = in(uVar4);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    out(uVar4,arg2);
    return 0;
}


/* fcn.00014cc8 @ 0x14cc8 */

int64_t fcn.00014cc8(int64_t arg1,int64_t arg2)

{
    fcn.00014c68((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00014c68 @ 0x14c68 */

void fcn.00014c68(int64_t arg1)

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


/* fcn.00012454 @ 0x12454 */

int64_t fcn.00012454(int64_t arg1)

{
    uint8_t *puVar1;
    uint16_t uVar2;
    uint8_t uVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar4;
    int64_t iVar5;
    char cVar6;
    ulong in_RDX;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    unkbyte7 in_R8;
    
    uVar2 = *(arg1 + 0xe);
    pcVar8 = *(arg1 + 6) + arg1;
    iVar5 = CONCAT71(arg1 >> 8,0x62);
    iVar7 = CONCAT71(in_RDX >> 8,0xa3);
    uVar9 = 0;
    fcn.00013404(iVar5,iVar7,CONCAT71(in_R8,4));
    iVar4 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar7 = CONCAT71(iVar7 >> 8,0xa2);
        iVar5 = CONCAT71(iVar5 >> 8,0x62);
        fcn.00013404(iVar5,iVar7,CONCAT71(in_R8,0x3c));
        iVar4 = extraout_RAX_00;
        if ((-1 < extraout_RAX_00) &&
           (iVar4 = fcn.000132a0(CONCAT71(iVar5 >> 8,0x62),CONCAT71(iVar7 >> 8,0xa4)), -1 < iVar4)) {
            uVar3 = in(0x66);
            if ((uVar3 & 1) == 0) {
                do {
                    if (0x1ffff < uVar9) goto code_r0x000124df;
                    fcn.00014cc8(0xf,0x66);
                    uVar3 = in(0x66);
                    uVar9 = uVar9 + 1;
                } while ((uVar3 & 1) == 0);
                if (0x1ffff < uVar9) {
code_r0x000124df:
                    iVar4 = -0x7ffffffffffffff9;
                    goto code_r0x000124e9;
                }
            }
            uVar3 = in(0x62);
            iVar4 = 0;
            if ((uVar3 & 1) != 0) {
                puVar1 = uVar2 + 5 + arg1;
                *puVar1 = *puVar1 | 1;
                return 0;
            }
            cVar6 = 'A';
            iVar5 = "AC adapter is not connected.For an update, the AC adapter has to be connected." - pcVar8;
            do {
                *pcVar8 = cVar6;
                pcVar8 = pcVar8 + 1;
                cVar6 = pcVar8[iVar5];
            } while (cVar6 != '\0');
            goto code_r0x00012501;
        }
    }
code_r0x000124e9:
    cVar6 = 'R';
    iVar5 = "Read AC/DC status from EC error." - pcVar8;
    do {
        *pcVar8 = cVar6;
        pcVar8 = pcVar8 + 1;
        cVar6 = pcVar8[iVar5];
    } while (cVar6 != '\0');
code_r0x00012501:
    *pcVar8 = '\0';
    *(arg1 + 0xc) = *(arg1 + 0xc) | 0x10;
    puVar1 = uVar2 + 5 + arg1;
    *puVar1 = *puVar1 | 2;
    return iVar4;
}


/* fcn.00016268 @ 0x16268 */

uint64_t fcn.00016268(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t auStack_18 [4];
    
    uVar3 = arg3 & 0xffffffff;
    if (*0x194e0 == NULL) {
        fcn.0001607c(arg1);
        uVar1 = 0;
        if (*0x194e0 == NULL) goto code_r0x000162de;
    }
    auStack_18[0] = arg3;
    while( true ) {
        uVar1 = (***0x194e0)(arg1,arg2,auStack_18,arg4);
        if (auStack_18[0] == uVar3) break;
        uVar2 = uVar3 - auStack_18[0];
        uVar3 = auStack_18[0];
        arg1 = arg1 + uVar2;
        arg2 = arg2 + uVar2;
        if (auStack_18[0] == 0) {
            return CONCAT71(uVar2 >> 8,1);
        }
    }
code_r0x000162de:
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.000127d8 @ 0x127d8 */

ulong fcn.000127d8(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 & 0xff;
    if (arg1 == '\0') {
        return 0x80000;
    }
    if (uVar1 == 1) {
        return 0x100000;
    }
    if (uVar1 == 2) {
        return 0x200000;
    }
    if (uVar1 == 3) {
        return 0x400000;
    }
    if (uVar1 == 4) {
        return 0x800000;
    }
    if (uVar1 == 5) {
        return 0x1000000;
    }
    if (uVar1 == 6) {
        return 0x2000000;
    }
    if (uVar1 != 7) {
        return 0;
    }
    return 0x4000000;
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00012974 @ 0x12974 */

int64_t fcn.00012974(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t in_register_0000000c;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    
    uStackX_10 = arg2 & 0xffffffff00000000;
    iStackX_8 = in_register_0000000c << 0x20;
    aiStackX_18[0] = arg3;
    uVar2 = fcn.0001259c();
    uVar1 = *(*0x196a0 + 0xb);
    uVar6 = 0;
    iVar4 = uVar1 - 2;
    if (iVar4 == 0) {
        iVar3 = fcn.00012704(uVar1,&uStackX_10,&iStackX_8);
        if (iVar3 == -0x7ffffffffffffff2) {
            return -0x7ffffffffffffffd;
        }
        if (iStackX_8 != 0) {
            uVar5 = uStackX_10 & 0xffffffff;
            iVar7 = CONCAT71(uVar6 >> 8,*0x18100);
            iVar3 = -*0x19688 + uVar5;
            fcn.00016268(iVar3 + 0x16,0x19690,2,iVar7);
            iVar7 = CONCAT71(iVar7 >> 8,*0x18100);
            fcn.00016268(iVar3 + 0x18,0x19680,2,iVar7);
            iVar7 = CONCAT71(iVar7 >> 8,*0x18100);
            fcn.00016268(iVar3 + 0x27,aiStackX_18,1,iVar7);
            if ((aiStackX_18[0] & 0xc0) != 0x80) {
                iVar3 = uVar5 + 0x1000 + -*0x19688;
            }
            fcn.00016268(iVar3,0x19698,6,CONCAT71(iVar7 >> 8,*0x18100));
        }
    }
    else {
        arg1_00 = CONCAT31(iVar4 >> 8,uVar1);
        if (iVar4 == 1) {
            iVar3 = fcn.00012704(arg1_00,&uStackX_10,&iStackX_8);
            if (iVar3 < 0) {
                return iVar3;
            }
            *0x19400 = ((uVar2 & 0x420) != 0) + '\x01';
            goto code_r0x00012ac4;
        }
        iVar3 = fcn.00012704(arg1_00,&uStackX_10,&iStackX_8);
        if (iVar3 < 0) {
            return -0x7ffffffffffffffd;
        }
    }
    *0x19400 = '\0';
code_r0x00012ac4:
    *0x195fc = uStackX_10;
    *0x19600 = iStackX_8;
    return 0;
}


/* fcn.0001260c @ 0x1260c */

bool fcn.0001260c(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    unkbyte7 in_R9;
    uint32_t auStackX_10 [6];
    
    uVar2 = arg1;
    if ((*(*0x18660 + 4) & 0x2000) == 0) {
        return true;
    }
    if (*0x19414 == 0) {
        fcn.00016268(-*0x19688 + 0x18,auStackX_10,4,CONCAT71(in_R9,1));
        fcn.00016268(auStackX_10[0] * 0x10 + -*0x19688,auStackX_10,4,CONCAT71(in_R9,1));
    }
    else {
        auStackX_10[0] = *0x19414;
    }
    if (uVar2 == 3) {
        *0x19414 = auStackX_10[0];
        uVar1 = fcn.0001259c();
        return ((uVar1 & 0xf0000) >> 0x10) - 3 < 3;
    }
    uVar1 = arg1 & 0xff;
    if (uVar1 == 1) {
        uVar2 = 4;
code_r0x000126e5:
        if ((uVar2 == 0xff) || (uVar2 == 0x11)) {
            *0x19414 = auStackX_10[0];
            return true;
        }
        if (0xb < uVar2) {
            uVar2 = uVar2 - 8;
            goto code_r0x000126c8;
        }
    }
    else if (uVar1 == 2) {
        uVar2 = 3;
    }
    else if (uVar1 == 3) {
        uVar2 = 2;
    }
    else if (uVar1 == 5) {
        uVar2 = 1;
    }
    else if (uVar1 == 6) {
        uVar2 = 5;
    }
    else {
        if (uVar1 != 0x10) goto code_r0x000126e5;
        uVar2 = 6;
    }
    uVar2 = uVar2 + 0x14;
code_r0x000126c8:
    *0x19414 = auStackX_10[0];
    return auStackX_10[0] >> (uVar2 & 0x1f) & 1;
}


/* fcn.0001610c @ 0x1610c */

ulong fcn.0001610c(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    int64_t in_RDX;
    
    uVar1 = *0x18100;
    if (((*0x194e0 != 0) || (fcn.0001607c(arg1), *0x194e0 != 0)) &&
       (cVar2 = fcn.00015fe8(arg1,in_RDX), cVar2 != '\0')) {
        (**(*0x194e0 + 0x20))(arg1,0x1000,uVar1);
        return 1;
    }
    return 0;
}


/* fcn.00012ae0 @ 0x12ae0 */

ulong fcn.00012ae0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    unkbyte7 in_R9;
    char acStack_108 [256];
    
    uVar3 = 0;
    iVar4 = 0x1000;
    do {
        fcn.00011040(acStack_108,0x100,0);
        fcn.00016268(uVar3 + arg1,acStack_108,0x100,CONCAT71(in_R9,*0x18100));
        uVar6 = 0;
        iVar5 = iVar4 + -0x100;
        if (iVar4 != iVar5) {
            iVar1 = 0;
            do {
                if (arg2 == 0) {
                    cVar2 = -1;
                }
                else {
                    cVar2 = *(uVar3 + iVar1 + arg2);
                }
                if (acStack_108[iVar1] != cVar2) {
                    return 0;
                }
                uVar6 = uVar6 + 1;
                iVar1 = iVar1 + 1;
            } while (uVar6 < iVar4 - iVar5);
        }
        uVar3 = 0x1000U - iVar5;
        iVar4 = iVar5;
        if (0xfff < 0x1000U - iVar5) {
            return 1;
        }
    } while( true );
}


/* fcn.000160bc @ 0x160bc */

bool fcn.000160bc(int64_t arg1)

{
    uchar uVar1;
    int64_t iVar2;
    
    uVar1 = *0x18100;
    if ((*0x194e0 == 0) && (fcn.0001607c(arg1), *0x194e0 == 0)) {
        return false;
    }
    iVar2 = (**(*0x194e0 + 0x10))(arg1,0x1000,uVar1);
    return -1 < iVar2;
}


/* fcn.000161cc @ 0x161cc */

uint64_t fcn.000161cc(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int aiStackX_20 [2];
    
    iVar5 = *0x19608;
    uVar1 = *0x18100;
    aiStackX_20[0] = CONCAT31(aiStackX_20[0]._1_3_,arg2);
    if (*0x194e0 == 0) {
        fcn.0001607c(arg1);
        uVar4 = 0;
        if (*0x194e0 == 0) goto code_r0x0001624f;
    }
    aiStackX_20[0] = 0x1000;
    while (iVar2 = aiStackX_20[0], uVar4 = (**(*0x194e0 + 0x18))(arg1,iVar5,aiStackX_20,uVar1), uVar4 != '\0') {
        uVar3 = iVar2 - aiStackX_20[0];
        arg1 = arg1 + uVar3;
        iVar5 = iVar5 + uVar3;
        if (aiStackX_20[0] == 0) {
            return CONCAT71(uVar3 >> 8,1);
        }
    }
code_r0x0001624f:
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.0001616c @ 0x1616c */

ulong fcn.0001616c(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    int64_t in_RDX;
    
    uVar1 = *0x18100;
    if (((*0x194e0 != 0) || (fcn.0001607c(arg1), *0x194e0 != 0)) &&
       (cVar2 = fcn.00015fe8(arg1,in_RDX), cVar2 != '\0')) {
        (**(*0x194e0 + 0x28))(arg1,0x1000,uVar1);
        return 1;
    }
    return 0;
}


/* fcn.000134cc @ 0x134cc */

void fcn.000134cc(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013528(noname_0,noname_1,0,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013528 @ 0x13528 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013528(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00013583;
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
code_r0x00013583:
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
        uVar5 = fcn.0001327c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00013250(arg4);
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
            pcVar9 = 0x18b4c;
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
code_r0x0001390d:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x18b4c;
                }
                else {
                    pcVar9 = 0x18b50;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000136cc:
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
                            goto code_r0x0001386f;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00013886;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x0001386f;
                                }
                                goto code_r0x00013886;
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
code_r0x0001386f:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000136cc;
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
                                goto code_r0x000136cc;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00013886;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x0001386f;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00013886:
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
                                fcn.00014254(&var_68h_2,0x26,0,0x18ae0);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x0001390d;
                                if (uStack_a8 == 0x53) goto code_r0x00013b1c;
                                if (uStack_a8 == 0x58) goto code_r0x00013c12;
                                if (uStack_a8 == 0x61) goto code_r0x00013b25;
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
                                    goto code_r0x000136b1;
                                }
                                if (uStack_a8 != 100) goto code_r0x000136ad;
                                goto code_r0x00013c29;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x18b4c;
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
                        goto code_r0x00013e24;
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
                                    iVar13 = 0x18beb;
                                    goto code_r0x00013bd9;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00013bd9:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00013e24;
                            }
                            fcn.00014254(&var_68h_2,0x26,0,0x18b44);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00013b1c:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00013b25:
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
                                goto code_r0x00013e24;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000136ad;
                                    goto code_r0x00013c16;
                                }
                                goto code_r0x00013c1b;
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
                                goto code_r0x00013e24;
                            }
                            fcn.00014254(&var_68h_2,0x26,0,0x18b28);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00013e24;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00013c12:
                    uVar5 = uVar5 | 0x20;
code_r0x00013c16:
                    uVar5 = uVar5 | 0x80;
code_r0x00013c1b:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00013c29:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00013c6b;
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
code_r0x00013c6b:
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
code_r0x00013cf3:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00013cf3;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEFEFI_SUCCESS"[uVar11 % uVar17];
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
code_r0x000136ad:
                    pcVar9 = &uStack_a8;
code_r0x000136b1:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00013e24:
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
                arg1 = fcn.000134f4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000134f4(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.000134f4(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.000134f4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.000133a0 @ 0x133a0 */

ulong fcn.000133a0(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.00014cc8(0xf,uVar1);
            uVar2 = in(uVar1);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00013318 @ 0x13318 */

ulong fcn.00013318(int64_t arg1)

{
    ushort uVar1;
    uint8_t uVar2;
    uchar uVar3;
    ushort uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 1) != 0) {
        do {
            if (0x1ffff < uVar5) {
                return 0x8000000000000007;
            }
            uVar4 = 0x60;
            if (arg1 != '`') {
                uVar4 = 0x62;
            }
            uVar3 = in(uVar4);
            out(0x80,uVar3);
            fcn.00014cc8(5000,0x80);
            uVar2 = in(uVar1);
            uVar5 = uVar5 + 1;
        } while ((uVar2 & 1) != 0);
        if (0x1ffff < uVar5) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00013250 @ 0x13250 */

uint64_t fcn.00013250(uint32_t arg1)

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


/* fcn.0001327c @ 0x1327c */

uint64_t fcn.0001327c(uint32_t arg1)

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


/* fcn.00014254 @ 0x14254 */

void fcn.00014254(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013528(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000134f4 @ 0x134f4 */

uchar * fcn.000134f4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00014444 @ 0x14444 */

int64_t fcn.00014444(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00014530 @ 0x14530 */

int fcn.00014530(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    bool bVar2;
    char cVar3;
    uint in_register_0000000c;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    char cVar7;
    
    bVar2 = false;
    cVar7 = '\x01';
    for (puVar4 = CONCAT44(in_register_0000000c,arg1); (*puVar4 == 0x20 || (*puVar4 == 9)); puVar4 = puVar4 + 1) {
    }
    if (*puVar4 == 0) {
        *arg2 = puVar4;
        return 0;
    }
    if (*puVar4 == 0x2d) {
        cVar7 = -1;
        puVar4 = puVar4 + 1;
    }
    puVar5 = puVar4 + 1;
    uVar6 = 0;
    if (*puVar4 != 0x2b) {
        puVar5 = puVar4;
        uVar6 = 0;
    }
    do {
        uVar1 = *puVar5;
        if (uVar1 - 0x30 < 10) {
            cVar3 = uVar1 - 0x30;
        }
        else {
            if (0x19 < (uVar1 & 0xdf) + 0xbf) {
code_r0x000145d6:
                *arg2 = puVar5;
                if ((bVar2) && (uVar6 = 0x7fffffff, cVar7 == -1)) {
                    uVar6 = 0x80000000;
                }
                return cVar7 * uVar6;
            }
            cVar3 = (uVar1 & 0xdf) - 0x37;
        }
        if (9 < cVar3) goto code_r0x000145d6;
        uVar6 = cVar3 + uVar6 * 10;
        if (cVar7 == '\x01') {
            if (0x7fffffff < uVar6) {
                bVar2 = true;
            }
        }
        else if (0x80000000 < uVar6) {
            bVar2 = true;
        }
        puVar5 = puVar5 + 1;
    } while( true );
}


/* fcn.00014adc @ 0x14adc */

void fcn.00014adc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    fcn.000146f4(arg1,arg2,arg3,&iStackX_20);
    return;
}


/* fcn.0001462c @ 0x1462c */

char * fcn.0001462c(uint32_t arg1)

{
    int64_t iVar1;
    uint32_t in_register_0000000c;
    char *pcVar2;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (uVar3 == 0) {
        return 0x18ed0;
    }
    if (in_register_0000000c < 0) {
        uVar3 = uVar3 & 0x1fffffffffffffff;
        if ((in_register_0000000c & 0xa0000000) == 0xa0000000) {
            if (2 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19;
            pcVar2 = "EFI_INTERRUPT_PENDING";
            goto code_r0x000146ef;
        }
        if ((in_register_0000000c & 0xc0000000) == 0xc0000000) {
            if (2 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19 + 0x8287;
        }
        else {
            if (0x23 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19 + 0x82c7;
        }
    }
    else {
        if ((in_register_0000000c & 0x20000000) != 0) {
            if (1 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x23;
            pcVar2 = "EFI_WARN_INTERRUPT_SOURCE_PENDING";
            goto code_r0x000146ef;
        }
        if (5 < uVar3) {
            return NULL;
        }
        iVar1 = uVar3 * 0x1a + 0x8146;
    }
    pcVar2 = 0x10000;
code_r0x000146ef:
    return pcVar2 + iVar1;
}


/* fcn.000144bc @ 0x144bc */

char * fcn.000144bc(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint64_t uVar3;
    char cVar4;
    
    uVar3 = arg1 & 0xffffffff;
    if (arg4 != '\0') {
        uVar3 = arg1;
    }
    if (arg3 == 10) {
        uVar3 = -arg1;
    }
    if (-1 < arg1) {
        uVar3 = arg1;
    }
    if (uVar3 == 0) {
        *arg2 = 0x30;
        arg2 = arg2 + 1;
    }
    else {
        do {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg3;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar3;
            uVar3 = uVar3 / arg3;
            cVar4 = SUB161(auVar2 % auVar1,0);
            if (SUB168(auVar2 % auVar1,0) < 10) {
                cVar4 = cVar4 + '0';
            }
            else {
                cVar4 = cVar4 + 'W';
            }
            *arg2 = cVar4;
            arg2 = arg2 + 1;
        } while (uVar3 != 0);
    }
    if ((arg3 == 10) && (arg1 < 0)) {
        *arg2 = '-';
        arg2 = arg2 + 1;
    }
    *arg2 = '\0';
    return arg2 + -1;
}


/* fcn.00011240 @ 0x11240 */

void fcn.00011240(void)

{
    return;
}


/* fcn.00014cfc @ 0x14cfc */

ulong fcn.00014cfc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x18660 < 0) {
                uVar2 = (*0x18660)[0x1b];
            }
            else {
                uVar2 = (*0x18660)[0x16];
            }
        }
        else {
            uVar2 = (*0x18660)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x18660)[iVar1 + -0xc + 0x38];
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


/* fcn.00015c54 @ 0x15c54 */

void fcn.00015c54(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
    
    if ((*0xc00fd010 & 0xfffff000) == *0x18660) {
        iVar6 = 0;
        if (arg4 == '\x01') {
            arg2_00 = auStack_28;
            iVar2 = fcn.00015100(arg1,arg2_00);
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
        fcn.00014e98(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
        uVar7 = uVar8;
        iVar4 = (uVar8 & 0xffff) * 0x100;
        *(*0x18660 + 8) = uVar1;
        iVar3 = iVar4 + -0xff;
        *(*0x18660 + 6) = iVar3;
        fcn.00014e98(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
        if (uVar7 != 0) {
            uVar5 = uVar7;
            do {
                *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x18660);
                iVar6 = iVar6 + 1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        *arg3 = *arg3 - uVar7;
    }
    return;
}


/* fcn.00014e98 @ 0x14e98 */

void fcn.00014e98(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x18660 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x18660 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x18660 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x18660 + 0xa0) = 0x1c;
    }
    return;
}


/* fcn.00014d80 @ 0x14d80 */

ulong fcn.00014d80(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

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
    if ((*0xc00fd010 & 0xfffff000) == *0x18660) {
        uVar3 = 0;
        iVar5 = 0xff0a55a;
        *(*0x18660 + 0xb4) = 0;
        if ((((*(*0x18660 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.00014cfc(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
            (uVar2 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
           ((*(*0x18660 + 0xb4) = uVar3, *(*0x18660 + 0xb8) == iVar5 &&
            (iVar1 = fcn.00014cfc(1,0,auStack_18), -1 < iVar1)))) {
            auStackX_10[0] = uVar2;
            if (uVar2 != 0) {
                do {
                    fcn.00015c54((uVar3 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                                 (uVar3 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                    uVar3 = uVar2 - auStackX_10[0];
                } while (uVar2 - auStackX_10[0] < uVar2);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00015234 @ 0x15234 */

int64_t fcn.00015234(void)

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
    iVar2 = fcn.00014d80(puVar4,iVar2,0xefc,4);
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
                iVar2 = fcn.00014d80(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x1868e) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x18660 + 0xc4) = uVar1;
                            *(*0x18660 + 200) = uVar1;
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


/* fcn.00015340 @ 0x15340 */

void fcn.00015340(uint32_t arg1)

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
        *(*0x18660 + 8) = uVar3;
        *(*0x18660 + 6) = 0x3f0b;
        fcn.00014e98(0x3f01,0);
        fcn.00014cc8(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x18660);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x18660 + 0xcc) = 0;
                fcn.00014cc8(1,iVar4);
                if (*(*0x18660 + 0xd4) == 0x50444653) goto code_r0x00015490;
                goto code_r0x000154f8;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x00015490:
        uVar3 = *0x1868e & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x1868e & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x1868e >> 8 != '@') goto code_r0x000154f8;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x000154f8;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x000154f8;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x000154f8;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x000154f8:
    *(*0x18660 + 0xc4) = uVar2;
    *(*0x18660 + 200) = uVar2;
    return;
}


/* fcn.0001555c @ 0x1555c */

void fcn.0001555c(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x18693 == '\x01') {
        uVar1 = *(*0x18660 + 0xaf);
        uVar2 = *(*0x18660 + 0xa7);
        *(*0x18660 + 0xaf) = 0x98;
        if (*(*0x18660 + 0xaf) == -0x68) {
            *(*0x18660 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x18660 + 0xa1) = 0x72;
            fcn.00014e98(0,CONCAT71(param_2 >> 8,1));
            *(*0x18660 + 0xaf) = uVar1;
            *(*0x18660 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.00015d60 @ 0x15d60 */

void fcn.00015d60(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.00014f00(arg1);
    uVar3 = *0x1868e & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x00015e9b;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x1868e & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x1868a < 0x800000;
                goto code_r0x00015e93;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x00015e9b;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x1868e & 0xffff) != 0x609d) {
            bVar4 = (*0x1868e & 0xffff) == 0x709d;
code_r0x00015e5e:
            if (!bVar4) goto code_r0x00015e9b;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x00015e9b;
        if (uVar3 == 0xc2) {
            uVar3 = *0x1868e & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x00015e5e;
                }
                goto code_r0x00015e95;
            }
            bVar4 = *0x1868a < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x1868e & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x00015e9b;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x1868e & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x00015e9b;
            bVar4 = *0x1868a < 0x2000000;
        }
code_r0x00015e93:
        if (bVar4) goto code_r0x00015e9b;
    }
code_r0x00015e95:
    uVar2 = 0x3c;
code_r0x00015e9b:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.00014f00(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.00014e98(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x18660 + 0x10) = uVar1;
        *(*0x18660 + 8) = arg1;
        if ((*(*0x18660 + 4) & 0x800) == 0) {
            *(*0x18660 + 6) = 0xf;
            fcn.00014e98(CONCAT71(arg1_01 >> 8,1),0);
            fcn.00014f3c();
        }
    }
    return;
}


/* fcn.00015600 @ 0x15600 */

void fcn.00015600(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    iVar1 = *0x18660;
    *(*0x18660 + 0xb4) = 0;
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
        if (iVar3 != *0x1868a) {
            *0x1868a = iVar3;
        }
    }
    return;
}


/* fcn.00015100 @ 0x15100 */

ulong fcn.00015100(int64_t arg1,int64_t arg2)

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
    uStackX_20 = *0x194a8;
    uStackX_18 = *0x194b8;
    if (*0x194b8 != 0) goto code_r0x000151f8;
    *(*0x18660 + 0xb4) = 0;
    if (*(*0x18660 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.00014cfc(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x000151d0;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x18660 + 0xb4) = 0;
            if (*(*0x18660 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.00014cfc(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x000151d0:
        uVar4 = *0x1868a - 1U;
        uStackX_18 = *0x1868a - 1U;
    }
    *0x194a8 = uStackX_20;
    *0x194a0 = uVar4;
    *0x194b8 = uStackX_18;
code_r0x000151f8:
    if (*0x194b0 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x18700);
    }
    uVar1 = *0x194b8 + 1 + iVar6;
    if (*0x194a0 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00014f80 @ 0x14f80 */

ulong fcn.00014f80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

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
    if ((((uVar1 != 0) && (*0x194b8 != 0)) && (*0x194b0 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x194a8 + (0xffffffff - *0x194a0) <= arg1) && (arg1 <= *0x194b8 + (0xffffffff - *0x194a0))) {
                uVar1 = 0;
            }
        }
        else if (*0x194a8 <= arg1) {
            uVar1 = -(*0x194b8 < arg1) & uVar1;
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
                fcn.00015c54(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
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


/* fcn.00014f3c @ 0x14f3c */

void fcn.00014f3c(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x18660 + 6) = 0x11;
        fcn.00014e98(1,0);
        if ((*(*0x18660 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.000162f8 @ 0x162f8 */

int64_t fcn.000162f8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.000112c0(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.00011290();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.000112a0(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.00015798 @ 0x15798 */

ulong fcn.00015798(int64_t arg1,int64_t arg2,int64_t arg3)

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
    if ((arg4 == *0x18660) && (uVar6 = arg2, (arg2 & 0xffffffffU) % *(*0x194e0 + 0x54) == 0)) {
        uVar2 = *0x18668;
        uVar5 = 0;
        if (*0x18668 == 1) {
            uVar2 = *(*0x18660 + 0xc4) >> 0x1d & 0xffffff01;
            *0x18668 = uVar2;
        }
        if (uVar6 != 0) {
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar6 - uVar5 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.00015100(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x000157d2;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.00014f80(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.00014e98(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x18660 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x194e0 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x18660 + 6) = uVar8;
                        fcn.00014e98(CONCAT71(iVar4 >> 8,1),0);
                        fcn.00014f3c();
                        if ((*0x194a8 <= auStackX_20[0]) && (auStackX_20[0] <= *0x194b8)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x194e0 + 0x54);
                                if (arg2_01 == 0) goto code_r0x00015957;
                            }
                            fcn.000162f8((auStackX_20[0] - *0x194b8) + 0xffffffff,arg2_01);
                        }
code_r0x00015957:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.00014f80(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x18668 = 0;
                    }
                    else {
                        fcn.00014cc8(10,arg2_00);
                    }
                }
                uVar5 = uVar5 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar6 <= uVar5) break;
                uVar2 = *0x18668;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x000157d2:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00014f00 @ 0x14f00 */

uchar fcn.00014f00(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x18660 + 8) = arg1;
    }
    *(*0x18660 + 6) = 0x11;
    fcn.00014e98(1,0);
    return *(*0x18660 + 0x10);
}


/* fcn.0001607c @ 0x1607c */

ulong fcn.0001607c(int64_t arg1)

{
    char cVar1;
    ulong *puVar2;
    
    puVar2 = 0x18ef0;
    do {
        if (*puVar2 == NULL) {
            return 0;
        }
        cVar1 = (**puVar2)(arg1,0x194e0);
        puVar2 = puVar2 + 1;
    } while (cVar1 == '\0');
    return 0;
}


/* fcn.00015fe8 @ 0x15fe8 */

uint64_t fcn.00015fe8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t *puStackX_8;
    uint32_t uStackX_10;
    
    uStackX_10 = arg2;
    if (((*0x194e0 == 0) && (fcn.0001607c(*0x18700), *0x194e0 == 0)) ||
       (cVar1 = (**(*0x194e0 + 0x40))(&puStackX_8), cVar1 != '\x01')) {
        uVar3 = 0x1000;
    }
    else {
        uVar3 = *puStackX_8;
        if (uStackX_10 != 0) {
            uVar2 = uStackX_10;
            do {
                if (*puStackX_8 < uVar3) {
                    uVar3 = *puStackX_8;
                }
                puStackX_8 = puStackX_8 + 1;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    uVar2 = arg1 / uVar3;
    if ((arg1 % uVar3 == 0) && (uVar2 = 0x1000 / uVar3, 0x1000 % uVar3 == 0)) {
        uVar2 = CONCAT71(uVar2 >> 8,1);
    }
    else {
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    return uVar2;
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


/* fcn.00011290 @ 0x11290 */

void fcn.00011290(void)

{
    return;
}


/* fcn.000112a0 @ 0x112a0 */

int64_t fcn.000112a0(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


/* fcn.0001572c @ 0x1572c */

bool fcn.0001572c(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    bool bVar1;
    
    bVar1 = (*0xc00fd010 & 0xfffff000) == *0x18660;
    if (bVar1) {
        *(*0x18660 + 8) = 0;
        arg2 = 0;
        *(*0x18660 + 6) = 0x20d;
        fcn.00014e98(0x201,0);
        fcn.00014cc8(arg2 + 10,arg2);
        *arg1 = *(*0x18660 + 0x10) & 0xffffff;
    }
    return bVar1;
}


/* fcn.000156e0 @ 0x156e0 */

void fcn.000156e0(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0xc00fd010 & 0xfffff000) == *0x18660) {
        iVar1 = fcn.00015234();
        if (iVar1 < 0) {
            fcn.00015340(arg1);
        }
        fcn.0001555c();
        fcn.00015d60(0);
        fcn.00015600();
    }
    return;
}


/* fcn.00016630 @ 0x16630 */

ulong fcn.00016630(int64_t arg1)

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


/* fcn.000166e0 @ 0x166e0 */

ulong fcn.000166e0(int64_t arg1)

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


/* fcn.00016738 @ 0x16738 */

ulong fcn.00016738(int64_t arg1)

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


