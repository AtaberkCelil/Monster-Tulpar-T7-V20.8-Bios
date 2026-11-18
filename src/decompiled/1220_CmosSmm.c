// decompiled by r2ghidra: 1220_CmosSmm.pe32
// functions: 39

/* entry0 @ 0x11230 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    fcn.000112a8(noname_0,arg1);
    arg1_00 = 0x14550;
    *0x14650 = -0x7fffffffffffffff;
    iVar1 = section..text(0x14550);
    if (iVar1 == 0) {
        iVar1 = fcn.00011554(arg1_00,arg1);
        if ((-1 < iVar1) || (*0x14650 < 0)) {
            *0x14650 = iVar1;
        }
        fcn.000110d0(0x14550,-1);
    }
    iVar1 = *0x14650;
    if (*0x14650 < 0) {
        fcn.00013004();
    }
    return iVar1;
}


/* fcn.00012f8c @ 0x12f8c */

void fcn.00012f8c(void)

{
    return;
}


/* fcn.000112a8 @ 0x112a8 */

void fcn.000112a8(int64_t arg1,int64_t arg2)

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
    
    *0x144d8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x144d0 = arg2;
    uStackX_8 = arg1;
    (**(*0x144d8 + 0x140))(0x14060,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x144e0);
    (**(*0x144d8 + 0x140))(0x14070,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x14660 = fcn.00012fd4();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x14660);
    *0x14658 = uStackX_8 >> 5;
    fcn.00013040();
    puVar4 = fcn.00013040();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00011393:
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
code_r0x000113fc:
                iVar6 = (**(*0x144e0 + 0xd0))(0x14040,0,0x14548);
                if (iVar6 < 0) {
                    *0x14548 = NULL;
                }
                return;
            }
            if ((*0x142a0 == *(puVar4 + 4)) && (*0x142a8 == *(puVar4 + 8))) goto code_r0x000113fc;
        }
        else if (uVar1 == 4) goto code_r0x00011393;
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
    
    //[00] -r-x section size 12288 named .text
    fcn.00012f8c();
    *(arg1 + 0xf8) = 0;
    if ((*0x142f0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011554 @ 0x11554 */

ulong fcn.00011554(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint in_register_0000000c;
    ulong *arg1_00;
    ulong uStackX_8;
    ulong uStackX_18;
    ulong *puStackX_20;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    if (*0x14540 == 0) {
        *0x144f0 = *(arg2 + 0x60);
        *0x14528 = *(arg2 + 0x58);
        *0x14540 = arg2;
    }
    if (*0x14530 == NULL) {
        arg1_00 = 0x142d0;
        iVar2 = (**(*0x144f0 + 0x140))(0x142d0,0,0x14530);
        if (iVar2 < 0) goto code_r0x00011624;
    }
    arg1_00 = *0x14530;
    (***0x14530)(*0x14530,&uStackX_8);
    if (uStackX_8 != '\0') {
        arg1_00 = *0x14530;
        iVar2 = (*(*0x14530)[1])(*0x14530,0x144f8);
        if (-1 < iVar2) {
            puVar3 = fcn.00013268();
            *0x14500 = 1;
            arg1_00 = *0x14528;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            *0x14510 = 0;
            *0x14528 = arg1_00;
            fcn.000130fc();
            fcn.00013184();
            *0x14510 = 1;
        }
    }
code_r0x00011624:
    uStackX_8 = 0;
    iVar2 = fcn.00011c88(arg1_00);
    if ((iVar2 != 0) && (cVar1 = (**(iVar2 + 0x132))(iVar2,8), cVar1 != '\0')) {
        cVar1 = (**(iVar2 + 0x132))(iVar2,2);
        if (cVar1 != '\0') {
            return 0;
        }
        cVar1 = (**(iVar2 + 0x132))(iVar2,0x1000);
        if (cVar1 == '\0') {
            (**(iVar2 + 0x13a))(iVar2,0x2080);
        }
        (**(iVar2 + 0x40))(iVar2);
        cVar1 = (**(iVar2 + 0x132))(iVar2,1);
        if (cVar1 != '\0') {
            *0x144c8 = iVar2;
            (**(*0x144f8 + 0xd0))(0x14080,0,&puStackX_20);
            uStackX_18 = 0x61;
            (**puStackX_20)(puStackX_20,0x11438,&uStackX_18,&uStackX_8);
            return 0;
        }
    }
    return 0x8000000000000003;
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


/* fcn.00013004 @ 0x13004 */

void fcn.00013004(void)

{
    char cVar1;
    
    cVar1 = fcn.00012f90(*0x14660);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001302a. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x144e0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00013039. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x144d8 + 0x48))(*0x14660);
    return;
}


/* fcn.00012f90 @ 0x12f90 */

uint64_t fcn.00012f90(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x14658 != 0) {
        puVar2 = *0x14660 + 8;
        in_RAX = *0x14660;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x14658);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012fd4 @ 0x12fd4 */

ulong fcn.00012fd4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x144e0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00013040 @ 0x13040 */

int64_t fcn.00013040(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x144e8 == 0) {
        *0x144e8 = 0;
        if (*(*0x144d0 + 0x68) != 0) {
            piVar2 = *(*0x144d0 + 0x70);
            do {
                if ((*0x14050 == *piVar2) && (*0x14058 == piVar2[1])) {
                    *0x144e8 = (*(*0x144d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x144e8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x144d0 + 0x68));
        }
    }
    return *0x144e8;
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


/* fcn.00013268 @ 0x13268 */

ulong fcn.00013268(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x144f8 != 0) {
        iVar3 = *(*0x144f8 + 0xa0);
        for (iVar2 = *(*0x144f8 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.000132b4(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.000130fc @ 0x130fc */

ulong fcn.000130fc(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x14500 == '\0') {
        if (*0x14520 == 0) {
            if (*0x14510 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x144f0 + 0x140))(0x142b0,0,0x14520);
        }
    }
    else if (*0x14508 == 0) {
        if ((*0x14510 == '\0') && (*0x144f8 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001313b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x144f8 + 0xd0))(0x142c0,0,0x14508);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00013184 @ 0x13184 */

int64_t fcn.00013184(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x14500 == '\0') {
        if (*0x14538 == 0) {
            if (*0x14510 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x144f0 + 0x18))(0x1f);
            (**(*0x144f0 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x144f0 + 0x140))(str.6_6v,0,0x14538);
            if (iVar1 < 0) {
                *0x14538 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x14518 == 0) {
        if (*0x144f8 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x144f8 + 0xd0))(0x14020,0,0x14518);
        if (iVar1 < 0) {
            *0x14518 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011c88 @ 0x11c88 */

ulong * fcn.00011c88(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    char cVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong *puStackX_8;
    
    puStackX_8 = arg1;
    iVar6 = (**(*0x144f8 + 0xd0))(0x14030,0,&puStackX_8);
    if (iVar6 == 0) {
        (**(puStackX_8 + 0x122))(puStackX_8,2);
    }
    else {
        iVar6 = (**(*0x144f8 + 0x50))(6,0x194);
        if (iVar6 < 0) {
            return NULL;
        }
        puVar7 = puStackX_8;
        fcn.0001349e(puStackX_8,0x194,0);
        fcn.00011b74(puVar7,puStackX_8);
        uVar4 = *0x1403c;
        uVar3 = *0x14038;
        uVar2 = *0x14034;
        uVar1 = *0x14030;
        *(puStackX_8 + 0xcc) = 0x14110;
        *(puStackX_8 + 0xd4) = 0x11;
        puStackX_8[0x1c] = 0x14300;
        *(puStackX_8 + 0xea) = 0x14460;
        *(puStackX_8 + 0xd6) = 0x14140;
        *(puStackX_8 + 0x162) = 0x140c0;
        *(puStackX_8 + 0x16a) = 0x140e0;
        *(puStackX_8 + 0x172) = 0x14100;
        *(puStackX_8 + 0x17a) = 0x140f0;
        *(puStackX_8 + 0x182) = 0x140d0;
        *(puStackX_8 + 0x18a) = 0x14090;
        *(puStackX_8 + 0x192) = 3;
        *(puStackX_8 + 0xb) = uVar1;
        *(puStackX_8 + 0x5c) = uVar2;
        *(puStackX_8 + 0xc) = uVar3;
        *(puStackX_8 + 100) = uVar4;
        *(puStackX_8 + 0x19) = 0xf20040;
        *(puStackX_8 + 0x1d) = 0xaf;
        *(puStackX_8 + 0xf2) = 6;
        *(puStackX_8 + 0xde) = 0xaf;
        puVar7 = *(puStackX_8 + 0x162);
        puVar9 = *(puStackX_8 + 0x16a);
        puVar8 = *(puStackX_8 + 0x172);
        for (puVar10 = *(puStackX_8 + 0x17a); *puVar10 != NULL; puVar10 = puVar10 + 1) {
            cVar5 = (**puVar10)(*puStackX_8);
            if (cVar5 == '\0') {
                (**(puStackX_8 + 0x12a))(puStackX_8,0x80000);
            }
            else {
                (**(puStackX_8 + 0x122))();
            }
        }
        for (; *puVar7 != NULL; puVar7 = puVar7 + 1) {
            cVar5 = (**puVar7)(*puStackX_8);
            if (cVar5 != '\0') {
                (**(puStackX_8 + 0x122))(puStackX_8,0x10);
            }
        }
        for (; *puVar9 != NULL; puVar9 = puVar9 + 1) {
            cVar5 = (**puVar9)(*puStackX_8);
            if (cVar5 != '\0') {
                (**(puStackX_8 + 0x122))(puStackX_8,0x10000);
            }
        }
        for (; *puVar8 != NULL; puVar8 = puVar8 + 1) {
            cVar5 = (**puVar8)(*puStackX_8);
            if (cVar5 != '\0') {
                (**(puStackX_8 + 0x122))(puStackX_8,0x20000);
            }
        }
        (**(puStackX_8 + 0x122))(puStackX_8,0x40000);
        (**(puStackX_8 + 0xfe))(puStackX_8,puStackX_8 + 0xfc);
        fcn.00012758(puStackX_8);
    }
    return puStackX_8;
}


/* fcn.00012804 @ 0x12804 */

ulong fcn.00012804(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t var_bp_18h;
    
    if (arg2 < '\0') {
        fcn.00011f88(arg1,1,0xe,&var_bp_18h);
        if (arg3 == 1) {
            var_bp_18h._0_1_ = var_bp_18h | 0x40;
        }
        else if (*arg1 == 0) {
            var_bp_18h._0_1_ = var_bp_18h & 0xbf;
        }
        fcn.00011f88(arg1,0,0xe,&var_bp_18h);
    }
    if ((arg2 >> 0xc & 1) != 0) {
        fcn.00011f88(arg1,1,0xe,&var_bp_18h);
        if (arg3 == 1) {
            var_bp_18h._0_1_ = var_bp_18h | 0x80;
        }
        else if (*arg1 == 0) {
            var_bp_18h._0_1_ = var_bp_18h & 0x7f;
        }
        fcn.00011f88(arg1,0,0xe,&var_bp_18h);
    }
    return 0;
}


/* fcn.00011f88 @ 0x11f88 */

ulong fcn.00011f88(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    uchar uVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    
    uVar6 = 1;
    if (1 < *(arg1 + 0x192)) {
        iVar2 = *(arg1 + 0x18a);
        do {
            if ((*(iVar2 + 4 + uVar6 * 0x10) <= arg3) && (arg3 <= *(iVar2 + 6 + uVar6 * 0x10))) {
                if (*(iVar2 + 8 + uVar6 * 0x10) != 0) {
                    uVar4 = (**(iVar2 + 8 + uVar6 * 0x10))(*arg1);
                    return uVar4;
                }
                if ((*(iVar2 + uVar6 * 0x10) != 0) && (*(iVar2 + 2 + uVar6 * 0x10) != 0)) {
                    out(*(iVar2 + uVar6 * 0x10),arg3);
                    uVar1 = *(*(arg1 + 0x18a) + 2 + uVar6 * 0x10);
                    if (arg2 == 1) {
                        uVar3 = in(uVar1);
                        *arg4 = uVar3;
                    }
                    else {
                        out(uVar1,*arg4);
                    }
                    return 0;
                }
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < *(arg1 + 0x192));
    }
    return 0x800000000000000e;
}


/* fcn.000134f0 @ 0x134f0 */

int64_t fcn.000134f0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012068 @ 0x12068 */

ulong fcn.00012068(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    uint8_t *arg4_00;
    uint8_t auStackX_10 [8];
    uint8_t *in_stack_00000028;
    uint8_t auStack_28 [4];
    uint16_t uStack_24;
    
    uStack_24 = 0;
    arg4_00 = auStackX_10;
    iVar2 = arg3;
    fcn.00011f88(arg1,1,arg3,arg4_00);
    if (arg2 == 1) {
        *in_stack_00000028 = auStackX_10[0];
    }
    else {
        auStack_28[0] = ~arg4 & auStackX_10[0] | *in_stack_00000028;
        cVar1 = (**(arg1 + 0x132))(arg1);
        if (cVar1 == '\0') {
            fcn.00012938(arg1,arg3 & 0xffff,CONCAT71(iVar2 >> 8,auStackX_10[0]),
                         CONCAT71(arg4_00 >> 8,auStack_28[0]));
        }
        fcn.00011f88(arg1,0,arg3,auStack_28);
        cVar1 = (**(arg1 + 0x132))(arg1,0x400);
        if (cVar1 == '\0') {
            cVar1 = (**(arg1 + 0x132))(arg1,0x100);
            if (cVar1 != '\0') {
                (**(arg1 + 0x122))(arg1,0x400);
                fcn.000126f0(arg1,uStack_24);
                (**(arg1 + 0x12a))(arg1,0x400);
            }
        }
    }
    return 0;
}


/* fcn.00011830 @ 0x11830 */

//WARNING: Removing unreachable block (ram,0x000117e9)

void fcn.00011830(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    *(arg1 + 0x11e) = *(arg1 + 0x11e) | uVar2;
    cVar1 = (**(arg1 + 0x132))(arg1,0x80000);
    if (cVar1 != '\0') {
        if ((uVar2 >> 0xc & 1) != 0) {
            (**(arg1 + 0x10))(arg1,0x1230,1);
            *(arg1 + 0x11e) = *(arg1 + 0x11e) | 0x80;
            (**(arg1 + 0x10))(arg1,0x1231,1);
        }
        if ((arg2 & 0xffffffffU) < '\0') {
            (**(arg1 + 0x10))(arg1,0x1231,1);
        }
        if ((uVar2 >> 0xe & 1) != 0) {
            (**(arg1 + 0x10))(arg1,0x1232,1);
        }
        if ((arg2 & 0x10U) != 0) {
            (**(arg1 + 0x10))(arg1,0x1233,1);
        }
    }
    if ((arg2 & 0x1080U) != 0) {
        fcn.00012804(arg1,arg2 & 0xffffffffU,1);
    }
    if (*(arg1 + 0x142) != 0) {
        *(*(arg1 + 0x142) + 0x18) = *(arg1 + 0x11e);
    }
    return;
}


/* fcn.0001349e @ 0x1349e */

int64_t fcn.0001349e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00011b74 @ 0x11b74 */

ulong fcn.00011b74(ulong noname_0,int64_t arg1)

{
    *arg1 = 0;
    *(arg1 + 8) = 0x12458;
    *(arg1 + 0x10) = 0x12a68;
    *(arg1 + 0x18) = 0x11f0c;
    *(arg1 + 0x20) = 0x12520;
    *(arg1 + 0x28) = 0x12ee8;
    *(arg1 + 0x30) = 0x12dcc;
    *(arg1 + 0x48) = 0x11700;
    *(arg1 + 0x40) = 0x11afc;
    *(arg1 + 0xfe) = fcn.000129b0;
    *(arg1 + 0x106) = fcn.000126b4;
    *(arg1 + 0x10e) = fcn.000126f0;
    *(arg1 + 0xf4) = 0x118f4;
    *(arg1 + 0x132) = 0x11734;
    *(arg1 + 0x13a) = 0x11744;
    *(arg1 + 0x122) = fcn.00011830;
    *(arg1 + 0x12a) = 0x1183c;
    *(arg1 + 0x116) = 0x12b38;
    *(arg1 + 0x14a) = 0x119e8;
    *(arg1 + 0x152) = 0x11a74;
    fcn.00011830(arg1,8);
    return 0;
}


/* fcn.00012758 @ 0x12758 */

ulong fcn.00012758(int64_t arg1)

{
    char cVar1;
    code *pcVar2;
    uint8_t uVar3;
    code *pcVar4;
    int64_t *piVar5;
    code *apcStack_18 [2];
    
    apcStack_18[1] = NULL;
    pcVar4 = fcn.00012f8c;
    piVar5 = *(arg1 + 0x182);
    uVar3 = 0;
    apcStack_18[0] = fcn.00012f8c;
    pcVar2 = *piVar5;
    if (pcVar2 != NULL) {
        do {
            cVar1 = (*pcVar2)(*arg1);
            piVar5 = piVar5 + 1;
            pcVar2 = *piVar5;
        } while (pcVar2 != NULL);
        if (cVar1 != '\0') {
            (**(arg1 + 0x12a))(arg1,0x1000);
            return 0;
        }
    }
    (**(arg1 + 0x122))(arg1,0x1000);
    (**(arg1 + 0x122))(arg1,0x80);
    while (pcVar4 != NULL) {
        (*pcVar4)();
        uVar3 = uVar3 + 1;
        pcVar4 = apcStack_18[uVar3];
    }
    return 0;
}


/* fcn.00012938 @ 0x12938 */

ulong fcn.00012938(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t *in_stack_00000028;
    
    cVar1 = fcn.000128c0(arg1,noname_1);
    if (cVar1 == '\0') {
        (**(arg1 + 0x12a))(arg1,0x100);
    }
    else {
        fcn.000126b4(arg1,in_stack_00000028);
        *in_stack_00000028 = *in_stack_00000028 + ((arg3 & 0xff) - (arg2 & 0xff));
        (**(arg1 + 0x122))(arg1,0x100);
    }
    return 0;
}


/* fcn.000126f0 @ 0x126f0 */

ulong fcn.000126f0(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x142) != 0) {
        *(*(arg1 + 0x142) + 0x1c) = arg2;
    }
    (**(arg1 + 0x122))(arg1,0x400);
    (**(arg1 + 0x10))(arg1,0x8208,arg2);
    (**(arg1 + 0x10))(arg1,0x8200,arg2 >> 8);
    (**(arg1 + 0x12a))(arg1,0x400);
    return 0;
}


/* fcn.0001216c @ 0x1216c */

ulong fcn.0001216c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    ulong uVar3;
    uint8_t uVar4;
    unkbyte7 Var5;
    uint64_t uVar6;
    int32_t var_40h;
    
    Var5 = arg4 >> 8;
    uVar3 = 0;
    if (arg3 - 0x40U < 0xb3) {
        uVar6 = arg3 - 0x3f;
        uVar1 = *(*(arg1 + 0xd6) + uVar6 * 2);
        if (arg2 == 1) {
            *_var_40h = uVar1;
        }
        else {
            uVar4 = ~arg4 & uVar1 | *_var_40h;
            cVar2 = (**(arg1 + 0x132))(arg1,0x400);
            if (cVar2 == '\0') {
                fcn.00012938(arg1,arg3 & 0xffff,CONCAT71(uVar3 >> 8,uVar1),CONCAT71(Var5,uVar4));
            }
            *(*(arg1 + 0xd6) + uVar6 * 2) = uVar4;
            cVar2 = (**(arg1 + 0x132))(arg1,0x400);
            if (cVar2 == '\0') {
                cVar2 = (**(arg1 + 0x132))(arg1,0x100);
                if (cVar2 != '\0') {
                    (**(arg1 + 0x122))(arg1,0x400);
                    fcn.000126f0(arg1,0);
                    (**(arg1 + 0x12a))(arg1,0x400);
                }
            }
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00012284 @ 0x12284 */

void fcn.00012284(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    char cVar2;
    uint16_t uVar3;
    
    uVar1 = arg4;
    cVar2 = (**(arg1 + 0x132))(arg1,0x2000);
    if (cVar2 == '\0') {
code_r0x00012339:
        fcn.00012068(arg1,arg2 & 0xffffffff,arg3 & 0xffff,CONCAT71(arg4 >> 8,uVar1));
    }
    else {
        cVar2 = (**(arg1 + 0x132))(arg1,0x80000);
        if (cVar2 != '\0') {
            cVar2 = (**(arg1 + 0x132))(arg1,0x8000);
            if (cVar2 != '\0') {
                arg4 = 0;
                uVar3 = 1;
                if (1 < *(arg1 + 0xe8)) {
                    do {
                        if (arg3 <= *(*(arg1 + 0xe0) + uVar3 * 2)) break;
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < *(arg1 + 0xe8));
                }
                if (arg3 == *(*(arg1 + 0xe0) + uVar3 * 2)) goto code_r0x00012339;
            }
        }
        fcn.0001216c(arg1,arg2,arg3 & 0xffff,CONCAT71(arg4 >> 8,uVar1));
    }
    return;
}


/* fcn.0001236c @ 0x1236c */

ulong fcn.0001236c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    char cVar3;
    uint64_t uVar4;
    
    iVar2 = *(arg1 + 0xcc);
    cVar3 = '\0';
    uVar4 = arg3 & 0xffff;
    if (arg2 == 0) {
        uVar1 = *(iVar2 + uVar4 * 2);
        if ((*arg4 & ~(0xff >> (8 - (uVar1 >> 0xc) & 0x1f))) != 0) {
            return 0x8000000000000002;
        }
        *arg4 = *arg4 << (uVar1 & 7);
        uVar1 = *(iVar2 + uVar4 * 2);
        cVar3 = (0xff >> (8 - (uVar1 >> 0xc) & 0x1f)) << (uVar1 & 7);
    }
    fcn.00012284(arg1,arg2 & 0xffffffff,*(iVar2 + uVar4 * 2) >> 3 & 0x1ff,CONCAT71(arg4 >> 8,cVar3));
    if (arg2 == 1) {
        *arg4 = *arg4 >> (*(iVar2 + uVar4 * 2) & 7);
        *arg4 = *arg4 & 0xff >> (8 - (*(iVar2 + uVar4 * 2) >> 0xc) & 0x1f);
    }
    return 0;
}


/* fcn.000128c0 @ 0x128c0 */

ulong fcn.000128c0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 1;
    if (1 < *(iVar1 + 0xe8)) {
        do {
            if (arg2 == *(*(iVar1 + 0xe0) + uVar3 * 2)) {
                return 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar1 + 0xe8));
    }
    uVar2 = 1;
    if (1 < *(iVar1 + 0xf2)) {
        do {
            if (arg2 == *(*(iVar1 + 0xea) + uVar2 * 2)) {
                return 0;
            }
            uVar3 = uVar2 + 1;
            uVar2 = uVar3;
        } while (uVar3 < *(iVar1 + 0xf2));
    }
    return 1;
}


/* fcn.000126b4 @ 0x126b4 */

ulong fcn.000126b4(int64_t arg1,int64_t arg2)

{
    (**(arg1 + 8))(arg1,0x8200,arg2);
    *arg2 = *arg2 << 8;
    (**(arg1 + 8))(arg1,0x8208,arg2);
    return 0;
}


/* fcn.000129b0 @ 0x129b0 */

//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.000129b0(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar2;
    int16_t aiStackX_10 [4];
    int32_t var_1h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    *arg2 = 0;
    uVar2 = *(arg1_00 + 200);
    if (uVar2 <= *(arg1_00 + 0xca)) {
        do {
            cVar1 = fcn.000128c0(arg1,uVar2);
            if (cVar1 != '\0') {
                fcn.00012284(arg1_00,1,uVar2,0);
                *arg2 = *arg2;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 <= *(arg1_00 + 0xca));
    }
    fcn.000126b4(arg1_00,aiStackX_10);
    if (*arg2 == aiStackX_10[0]) {
        (**(arg1_00 + 0x12a))(arg1_00,0x80);
    }
    else {
        (**(arg1_00 + 0x122))();
    }
    return 0;
}


/* fcn.00012d8c @ 0x12d8c */

void fcn.00012d8c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t auStackX_18 [16];
    
    cVar1 = (arg3 & 0xffU) / 10;
    auStackX_18[0] = cVar1 << 4 | arg3 + cVar1 * -10;
    fcn.00011f88(arg1,0,arg2 & 0xff,auStackX_18);
    return;
}


/* fcn.00012d54 @ 0x12d54 */

char fcn.00012d54(int64_t arg1,int64_t arg2)

{
    uint8_t auStackX_10 [24];
    
    auStackX_10[0] = 0;
    fcn.00011f88(arg1,1,arg2 & 0xff,auStackX_10);
    return (auStackX_10[0] >> 4) * '\n' + (auStackX_10[0] & 0xf);
}


/* fcn.000132b4 @ 0x132b4 */

int64_t fcn.000132b4(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x142e0;
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


