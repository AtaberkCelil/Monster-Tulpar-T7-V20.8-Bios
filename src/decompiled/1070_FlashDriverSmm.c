// decompiled by r2ghidra: 1070_FlashDriverSmm.pe32
// functions: 67

/* entry0 @ 0x11354 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong noname_0;
    
    fcn.000113f8(param_1,param_2);
    noname_0 = 0x16820;
    *0x16920 = -0x7fffffffffffffff;
    iVar1 = section..text(0x16820);
    if (iVar1 == 0) {
        iVar1 = fcn.00011848(noname_0,param_2);
        if ((-1 < iVar1) || (*0x16920 < 0)) {
            *0x16920 = iVar1;
        }
        fcn.000110d0(0x16820,-1);
    }
    iVar1 = *0x16920;
    if (*0x16920 < 0) {
        if ((*0x167d8 == '\0') && (*0x16760 != 0)) {
            (**(*0x16760 + 0x70))(*0x167d0);
            (**(*0x16760 + 0x70))(*0x167c0);
        }
        fcn.000124e8();
    }
    return iVar1;
}


/* fcn.00012430 @ 0x12430 */

void fcn.00012430(void)

{
    return;
}


/* fcn.000113f8 @ 0x113f8 */

void fcn.000113f8(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t arg2_00;
    uint32_t uVar7;
    ulong noname_0;
    uint64_t uVar8;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_38h;
    int64_t var_40h;
    
    *0x16760 = *(arg2 + 0x60);
    *0x16768 = *(arg2 + 0x58);
    iStackX_10 = 0;
    *0x16758 = arg2;
    uStackX_8 = arg1;
    (**(*0x16760 + 0x140))(0x16050,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x16770);
    (**(*0x16760 + 0x140))(0x16070,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x16998 = fcn.00012478();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x16998);
    *0x16990 = uStackX_8 >> 5;
    fcn.00012584();
    noname_0 = 0x160d8;
    iVar5 = fcn.000125b4(0x160d8);
    if (iVar5 == 0) {
        cVar2 = fcn.00012f80();
        uVar3 = in(0x1808);
        fcn.000111d0(noname_0,0x1808);
        while( true ) {
            iVar4 = in(0x1808);
            uVar7 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar7 >> 0x17 & 1) != 0) break;
            fcn.000111c0();
        }
        fcn.000111d0(uVar7,0x1808);
        if (cVar2 == '\0') {
            fcn.00011250();
        }
        else {
            fcn.00011240();
        }
    }
    if ((*0x16780 != NULL) || (iVar5 = (**(*0x16760 + 0x140))(0x16050,0,0x16780), -1 < iVar5)) {
        (***0x16780)(*0x16780,0x16788);
    }
    uVar8 = 0;
    if (*(*0x16770 + 0x98) != 0) {
        piVar6 = *(*0x16770 + 0xa0);
        do {
            if ((*0x16030 == *piVar6) && (*0x16038 == piVar6[1])) {
                iVar5 = (*(*0x16770 + 0xa0))[uVar8 * 3 + 2];
                if (iVar5 != 0) {
                    *0x16768 = iVar5;
                }
                break;
            }
            uVar8 = uVar8 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar8 < *(*0x16770 + 0x98));
    }
    fcn.00012524(0x16060,0x16790);
    fcn.00012880(*0x160e8);
    arg2_00 = 0;
    bVar1 = false;
    iVar5 = *(*0x16770 + 0x98);
    if (iVar5 == 0) {
code_r0x00011621:
        arg2_00 = fcn.000125b4(0x16010);
        bVar1 = true;
        if (arg2_00 == 0) goto code_r0x00011708;
    }
    else {
        piVar6 = *(*0x16770 + 0xa0);
        do {
            if ((*piVar6 == *0x16010) && (piVar6[1] == *0x16018)) {
                arg2_00 = piVar6[2];
            }
            piVar6 = piVar6 + 3;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (arg2_00 == 0) goto code_r0x00011621;
    }
    *0x167b0 = *(arg2_00 + 0x1c);
    *0x167a4 = ((*(arg2_00 + 2) - 0x28) / *(arg2_00 + 0x20)) * *0x167b0;
    iVar5 = fcn.00012478(*(arg2_00 + 0x20),*0x167a4);
    *0x167b8 = iVar5;
    if (iVar5 != 0) {
        uVar8 = arg2_00 + 0x28;
        *0x167a8 = *0x167a4 + iVar5;
        if (uVar8 < *(arg2_00 + 2) + arg2_00) {
            uVar3 = *0x167b0;
            do {
                if ((uVar3 != 0) && (iVar5 != uVar8 + 8)) {
                    fcn.00011180(iVar5,uVar8 + 8,uVar3);
                    uVar3 = *0x167b0;
                }
                uVar8 = uVar8 + *(arg2_00 + 0x20);
                iVar5 = iVar5 + uVar3;
            } while (uVar8 < *(arg2_00 + 2) + arg2_00);
        }
        if ((bVar1) && (iVar5 = fcn.000124a8(*(arg2_00 + 2),arg2_00), iVar5 != 0)) {
            (**(*0x16770 + 0x28))(*0x16770,0x16010,iVar5,*(arg2_00 + 2));
        }
    }
code_r0x00011708:
    iVar5 = (**(*0x16760 + 0x140))(0x16050,0,0x167e8);
    if (((iVar5 < 0) || ((***0x167e8)(*0x167e8,0x167d8), *0x167d8 == '\0')) ||
       (iVar5 = (*(*0x167e8)[1])(*0x167e8,0x16928), iVar5 < 0)) {
        (**(*0x16760 + 0x50))(0x201,8,0x12f50,0,0x167d0);
        (**(*0x16760 + 0x50))(0x60000202,8,0x12f6c,0,0x167c0);
    }
    else {
        uStackX_8 = 0;
        (**(*0x16928 + 0xc0))(0x16020,0x12f34,&uStackX_8);
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
    
    //[00] -r-x section size 20480 named .text
    fcn.00012430();
    *(arg1 + 0xf8) = 0;
    if ((*0x16250 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011848 @ 0x11848 */

void fcn.00011848(ulong noname_0,int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    if (*0x167e0 == NULL) {
        str._CS_[4] = 0;
        *0x167e0 = "_CS_";
        *0x169a0 = "_CS_";
    }
    *0x1674c = 0;
    *0x160d0 = 0xffffffffffffffff;
    fcn.00011180(0x16a60,0x16098,0x30);
    (**(*0x16760 + 0x80))(auStackX_10,0x16000,0,0x16098);
    auStackX_10[0] = 0;
    (**(*0x16770 + 0xa8))(auStackX_10,0x16000,0,0x16098);
    (**(*0x16770 + 0xa8))(0x16740,0x16088,0,0x16080);
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


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.000124e8 @ 0x124e8 */

void fcn.000124e8(void)

{
    char cVar1;
    
    cVar1 = fcn.00012434(*0x16998);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001250e. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x16770 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x0001251d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16760 + 0x48))(*0x16998);
    return;
}


/* fcn.00012434 @ 0x12434 */

uint64_t fcn.00012434(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x16990 != 0) {
        puVar2 = *0x16998 + 8;
        in_RAX = *0x16998;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x16990);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012478 @ 0x12478 */

ulong fcn.00012478(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16770 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012584 @ 0x12584 */

int64_t fcn.00012584(void)

{
    if (*0x16778 == 0) {
        fcn.00012524(0x16040,0x16778);
    }
    return *0x16778;
}


/* fcn.00012524 @ 0x12524 */

ulong fcn.00012524(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x16758;
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


/* fcn.000125b4 @ 0x125b4 */

void fcn.000125b4(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012584();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000125e2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000125e2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00012f80 @ 0x12f80 */

uint8_t fcn.00012f80(void)

{
    unkuint7 extraout_RAX;
    
    fcn.00011260();
    fcn.00011250();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.00011260 @ 0x11260 */

uint64_t fcn.00011260(void)

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


/* fcn.00011250 @ 0x11250 */

void fcn.00011250(void)

{
    return;
}


/* fcn.000111d0 @ 0x111d0 */

uint64_t fcn.000111d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000111c2 @ 0x111c2 */

void fcn.000111c2(void)

{
    return;
}


/* fcn.00011240 @ 0x11240 */

void fcn.00011240(void)

{
    return;
}


/* fcn.00012880 @ 0x12880 */

ulong fcn.00012880(int64_t arg1)

{
    char cVar1;
    ulong *puVar2;
    
    puVar2 = 0x16260;
    do {
        if (*puVar2 == NULL) {
            return 0;
        }
        cVar1 = (**puVar2)(arg1,0x16798);
        puVar2 = puVar2 + 1;
    } while (cVar1 == '\0');
    return 0;
}


/* fcn.000124a8 @ 0x124a8 */

void fcn.000124a8(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012478(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011180(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00012d14 @ 0x12d14 */

uint64_t fcn.00012d14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t auStack_18 [4];
    
    uVar3 = arg3 & 0xffffffff;
    if (*0x16798 == NULL) {
        fcn.00012880(arg1);
        uVar1 = 0;
        if (*0x16798 == NULL) goto code_r0x00012d8a;
    }
    auStack_18[0] = arg3;
    while( true ) {
        uVar1 = (***0x16798)(arg1,arg2,auStack_18,arg4);
        if (auStack_18[0] == uVar3) break;
        uVar2 = uVar3 - auStack_18[0];
        uVar3 = auStack_18[0];
        arg1 = arg1 + uVar2;
        arg2 = arg2 + uVar2;
        if (auStack_18[0] == 0) {
            return CONCAT71(uVar2 >> 8,1);
        }
    }
code_r0x00012d8a:
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.000128c0 @ 0x128c0 */

void fcn.000128c0(void)

{
    code *pcVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    pcVar1 = *0x16110;
    while (pcVar1 != NULL) {
        (*pcVar1)();
        uVar2 = uVar2 + 1;
        pcVar1 = *(uVar2 * 8 + 0x16110);
    }
    if ((*0x16798 == 0) && (fcn.00012880(*0x160e8), *0x16798 == 0)) {
        return;
    }
    (**(*0x16798 + 0x30))();
    return;
}


/* fcn.00012bd0 @ 0x12bd0 */

ulong fcn.00012bd0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    char cVar1;
    
    if (((*0x16798 != 0) || (fcn.00012880(arg1), *0x16798 != 0)) &&
       (cVar1 = fcn.000127ec(arg1,noname_1), cVar1 != '\0')) {
        (**(*0x16798 + 0x20))(arg1,0x1000,arg2);
        return 1;
    }
    return 0;
}


/* fcn.00012970 @ 0x12970 */

bool fcn.00012970(uint32_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *0x160f0;
    if ((*0x16798 == 0) && (fcn.00012880(arg1_00), *0x16798 == 0)) {
        return false;
    }
    iVar2 = (**(*0x16798 + 0x10))(arg1_00,0x1000,uVar1 <= arg1_00);
    return -1 < iVar2;
}


/* fcn.00012c2c @ 0x12c2c */

ulong fcn.00012c2c(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    char cVar1;
    
    if (((*0x16798 != 0) || (fcn.00012880(arg1), *0x16798 != 0)) &&
       (cVar1 = fcn.000127ec(arg1,noname_1), cVar1 != '\0')) {
        (**(*0x16798 + 0x28))(arg1,0x1000,arg2);
        return 1;
    }
    return 0;
}


/* fcn.00012918 @ 0x12918 */

void fcn.00012918(void)

{
    code *pcVar1;
    uint8_t uVar2;
    
    if ((*0x16798 == 0) && (fcn.00012880(*0x160e8), *0x16798 == 0)) {
        return;
    }
    (**(*0x16798 + 0x38))();
    uVar2 = 0;
    pcVar1 = *0x16100;
    while (pcVar1 != NULL) {
        (*pcVar1)();
        uVar2 = uVar2 + 1;
        pcVar1 = *(uVar2 * 8 + 0x16100);
    }
    return;
}


/* fcn.0001191c @ 0x1191c */

uint64_t fcn.0001191c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    unkbyte7 in_R9;
    
    if (((*0x1674c & 3) == 3) ||
       ((((*0x1674c & 1) != 0 && (*0x160c8 != 0)) || ((*0xc00fd0dc & *0xc00f80dc & 0x10) != 0)))) {
        cVar1 = fcn.00012d14(arg1,arg3,arg2 & 0xffffffff,CONCAT71(in_R9,*0x160f0 <= arg1));
        uVar2 = ~-(cVar1 != '\0') & 0x8000000000000007;
    }
    else {
        if ((arg2 != 0) && (arg3 != arg1)) {
            fcn.00011180(arg3,arg1,arg2);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012c88 @ 0x12c88 */

uint64_t fcn.00012c88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t auStack_18 [4];
    
    if (*0x16798 == 0) {
        fcn.00012880(arg1);
        uVar2 = 0;
        if (*0x16798 == 0) goto code_r0x00012cfd;
    }
    auStack_18[0] = arg3;
    uVar3 = arg3 & 0xffffffff;
    while (uVar2 = (**(*0x16798 + 0x18))(arg1,arg2,auStack_18,arg4), uVar2 != '\0') {
        uVar1 = uVar3 - auStack_18[0];
        arg1 = arg1 + uVar1;
        arg2 = arg2 + uVar1;
        if (auStack_18[0] == 0) {
            return CONCAT71(uVar1 >> 8,1);
        }
        uVar3 = auStack_18[0];
    }
code_r0x00012cfd:
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.000129d4 @ 0x129d4 */

char * fcn.000129d4(int64_t arg1,int64_t arg2,char *noname_2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    char *arg2_00;
    char *pcVar8;
    char cVar9;
    char *pcVar10;
    int64_t arg2_01;
    char cVar11;
    char *pcVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    char *pcVar15;
    char acStack_128 [256];
    
    pcVar8 = NULL;
    pcVar10 = 0x1;
    uVar13 = 0x1000;
    cVar11 = arg3;
    uVar5 = 1;
    if (cVar11 == '\0') {
        pcVar15 = 0x1000;
        pcVar6 = 0x100;
        do {
            bVar3 = pcVar6 < pcVar15;
            pcVar6 = pcVar15;
            if (bVar3) {
                pcVar6 = 0x100;
            }
            noname_2 = pcVar6 & 0xffffffff;
            arg2_00 = acStack_128;
            fcn.00012d14((arg1 - pcVar15) + 0x1000,arg2_00,noname_2,0);
            pcVar12 = pcVar8;
            if (pcVar6 != NULL) {
                do {
                    cVar9 = acStack_128[pcVar12];
                    arg2_00 = CONCAT71(arg2_00 >> 8,cVar9);
                    if (cVar9 != *0x160f8) {
                        pcVar10 = pcVar8;
                    }
                    noname_2 = pcVar12 + -pcVar15;
                    uVar4 = 0;
                    if (cVar9 == noname_2[arg2 + 0x1000]) {
                        uVar4 = uVar5;
                    }
                    uVar5 = uVar4;
                    if ((uVar5 == 0) && (cVar9 = '\0', pcVar10 == '\0')) goto code_r0x00012b3b;
                    noname_2 = pcVar12 + 1;
                    pcVar12 = noname_2;
                } while (noname_2 < pcVar6);
            }
            cVar9 = pcVar10;
            pcVar15 = pcVar15 + -pcVar6;
        } while (pcVar15 != NULL);
    }
    else {
        if (((arg1 | arg2) & 7) == 0) {
            pcVar12 = arg2 - arg1;
            piVar14 = arg1;
            do {
                noname_2 = *piVar14;
                piVar1 = pcVar12 + piVar14;
                piVar14 = piVar14 + 1;
                if (noname_2 != CONCAT71(*0x160f9,*0x160f8)) {
                    pcVar10 = pcVar8;
                }
                cVar9 = pcVar10;
                arg2_00 = pcVar8;
                if (noname_2 == *piVar1) {
                    arg2_00 = uVar5;
                }
                uVar5 = arg2_00;
                if ((uVar5 == 0) && (cVar9 == '\0')) goto code_r0x00012b46;
                uVar13 = uVar13 - 8;
            } while (7 < uVar13);
            if (uVar13 == 0) goto code_r0x00012b3b;
        }
        pcVar12 = arg2 - arg1;
        pcVar6 = arg1;
        do {
            cVar2 = *pcVar6;
            noname_2 = CONCAT71(noname_2 >> 8,cVar2);
            pcVar15 = pcVar12 + pcVar6;
            if (cVar2 != *0x160f8) {
                pcVar10 = pcVar8;
            }
            cVar9 = pcVar10;
            pcVar6 = pcVar6 + 1;
            arg2_00 = pcVar8;
            if (cVar2 == *pcVar15) {
                arg2_00 = uVar5;
            }
            uVar5 = arg2_00;
            if ((uVar5 == 0) && (cVar9 == '\0')) goto code_r0x00012b46;
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
    }
code_r0x00012b3b:
    if (uVar5 == 1) {
        return 0x1;
    }
code_r0x00012b46:
    arg2_01 = CONCAT71(noname_2 >> 8,cVar11);
    fcn.00012bd0(arg1,arg2_00,arg2_01);
    if (cVar9 == '\0') {
        if (*0x16798 == 0) {
            fcn.00012880(arg1);
            if (*0x16798 == 0) goto code_r0x00012b9f;
        }
        arg2_01 = CONCAT71(arg2_01 >> 8,cVar11);
        arg2_00 = 0x1000;
        iVar7 = (**(*0x16798 + 0x10))(arg1,0x1000,arg2_01);
        if (iVar7 < 0) goto code_r0x00012b9f;
    }
    arg2_01 = 0x1000;
    uVar5 = fcn.00012c88(arg1,arg2,0x1000,CONCAT71(pcVar12 >> 8,cVar11));
    pcVar8 = uVar5;
    arg2_00 = arg2;
code_r0x00012b9f:
    fcn.00012c2c(arg1,arg2_00,CONCAT71(arg2_01 >> 8,cVar11));
    return pcVar8;
}


/* fcn.00012da4 @ 0x12da4 */

uint64_t fcn.00012da4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if ((((uVar2 != 0) && (*0x167b8 <= uVar2)) && (uVar2 <= *0x167a8)) && (uVar1 = 0, uVar2 + *0x167b0 < *0x167a8)) {
        uVar1 = uVar2 + *0x167b0;
    }
    return uVar1;
}


/* fcn.00011bac @ 0x11bac */

uint64_t fcn.00011bac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    uint64_t arg3_00;
    int64_t arg2_00;
    ulong uVar3;
    unkbyte7 in_R9;
    uint64_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    
    bVar6 = false;
    uVar4 = arg1 - (arg1 - *0x160e8 & 0xfff);
    *0x160c8 = *0x160c8 + 1;
    cVar1 = '\x01';
    iVar2 = arg2;
    arg2_00 = arg3;
    if (*0x160c8 == 1) {
        fcn.000128c0();
    }
    if (uVar4 == arg1) goto code_r0x00011cbc;
    uVar5 = (uVar4 - arg1) + 0x1000;
    if (arg2 < uVar5) {
        uVar5 = arg2;
    }
    fcn.00012bd0(uVar4,iVar2,CONCAT71(arg2_00 >> 8,*0x160f0 <= uVar4));
    arg3_00 = uVar5 & 0xffffffff;
    iVar2 = arg3;
    cVar1 = fcn.00012c88(arg1,arg3,arg3_00,CONCAT71(in_R9,*0x160f0 <= arg1));
    bVar6 = cVar1 == '\0';
    if (bVar6) {
        fcn.000128c0();
        fcn.00012bd0(uVar4,iVar2,CONCAT71(arg3_00 >> 8,*0x160f0 <= uVar4));
        arg3_00 = uVar5 & 0xffffffff;
        iVar2 = arg3;
        cVar1 = fcn.00012c88(arg1,arg3,arg3_00,CONCAT71(in_R9,*0x160f0 <= arg1));
    }
    arg2_00 = CONCAT71(arg3_00 >> 8,*0x160f0 <= uVar4);
    fcn.00012c2c(uVar4,iVar2,arg2_00);
    arg2 = arg2 - uVar5;
    arg3 = arg3 + uVar5;
    arg1 = uVar4;
    while( true ) {
        arg1 = arg1 + 0x1000;
        if (cVar1 == '\0') break;
code_r0x00011cbc:
        if (arg2 < 0x1000) break;
        fcn.00012bd0(arg1,iVar2,CONCAT71(arg2_00 >> 8,*0x160f0 <= arg1));
        uVar3 = 0x1000;
        iVar2 = arg3;
        cVar1 = fcn.00012c88(arg1,arg3,0x1000,CONCAT71(in_R9,*0x160f0 <= arg1));
        if ((cVar1 == '\0') && (!bVar6)) {
            fcn.000128c0();
            fcn.00012bd0(arg1,iVar2,CONCAT71(uVar3 >> 8,*0x160f0 <= arg1));
            uVar3 = 0x1000;
            bVar6 = true;
            iVar2 = arg3;
            cVar1 = fcn.00012c88(arg1,arg3,0x1000,CONCAT71(in_R9,*0x160f0 <= arg1));
        }
        arg2_00 = CONCAT71(uVar3 >> 8,*0x160f0 <= arg1);
        fcn.00012c2c(arg1,iVar2,arg2_00);
        arg2 = arg2 - 0x1000;
        arg3 = arg3 + 0x1000;
    }
    if ((arg2 != 0) && (cVar1 != '\0')) {
        fcn.00012bd0(arg1,iVar2,CONCAT71(arg2_00 >> 8,*0x160f0 <= arg1));
        uVar4 = arg2 & 0xffffffff;
        iVar2 = arg3;
        cVar1 = fcn.00012c88(arg1,arg3,uVar4,CONCAT71(in_R9,*0x160f0 <= arg1));
        if ((cVar1 == '\0') && (!bVar6)) {
            fcn.000128c0();
            fcn.00012bd0(arg1,iVar2,CONCAT71(uVar4 >> 8,*0x160f0 <= arg1));
            uVar4 = arg2 & 0xffffffff;
            cVar1 = fcn.00012c88(arg1,arg3,uVar4,CONCAT71(in_R9,*0x160f0 <= arg1));
            iVar2 = arg3;
        }
        fcn.00012c2c(arg1,iVar2,CONCAT71(uVar4 >> 8,*0x160f0 <= arg1));
    }
    if ((*0x160c8 != 0) && (*0x160c8 = *0x160c8 + -1, *0x160c8 == 0)) {
        fcn.00012918();
    }
    return ~-(cVar1 != '\0') & 0x8000000000000007;
}


/* fcn.00012dd4 @ 0x12dd4 */

ulong fcn.00012dd4(int64_t arg1)

{
    uint8_t uVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uStackX_8;
    
    piVar2 = *0x169a0;
    if ((*0x169a0 == NULL) || (**0x169a0 != 0x5f53435f)) {
        return 0x8000000000000002;
    }
    if ((*0x169a0)[1] != '\0') {
        return 0x800000000000000f;
    }
    uVar3 = in(0x1830);
    if (*0x167f0 != '\0') {
        if ((uVar3 & 1) != 0) {
            *0x167f0 = '\0';
        }
        if (*0x167f0 != '\0') {
            goto code_r0x00012e58;
        }
    }
    *0x167f0 = '\x01';
    *0x167f1 = uVar3 & 1;
code_r0x00012e58:
    uVar1 = *0x167f1;
    uVar3 = in(0x1830);
    out(0x1830,uVar3 & 0xfffffffc);
    if (*0x167c8 == '\0') {
        *0x16940 = *(*0x16120 + 0x10);
        if ((*0x16940 & 1) != 0) {
            uStackX_8 = *0x16940 & 0xfffffffffffffffe;
            *(*0x16120 + 0x10) = uStackX_8;
        }
    }
    *(piVar2 + 1) = 1;
    *(piVar2 + 5) = uVar1;
    return 0;
}


/* fcn.00012eb8 @ 0x12eb8 */

ulong fcn.00012eb8(void)

{
    int *piVar1;
    uint32_t uVar2;
    
    piVar1 = *0x169a0;
    if ((*0x169a0 != NULL) && (**0x169a0 == 0x5f53435f)) {
        if ((*0x169a0)[1] == '\0') {
            return 0x8000000000000013;
        }
        *(*0x169a0 + 1) = 0;
        if (*(piVar1 + 5) != '\0') {
            uVar2 = in(0x1830);
            out(0x1830,uVar2 | 2);
            uVar2 = in(0x1830);
            out(0x1830,uVar2 | 1);
        }
        if ((*0x167c8 == '\0') && (((*0x16940 ^ *(*0x16120 + 0x10)) & 1) != 0)) {
            *(*0x16120 + 0x10) = *0x16940;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00011f40 @ 0x11f40 */

void fcn.00011f40(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t auStackX_10 [6];
    
    iVar2 = *0x16750;
    if ((*0x16750 != 10) && (iVar1 = *0x167b8, *0x167b8 != 0)) {
        do {
            if ((*(iVar1 + 0x10) <= arg1) && (arg1 <= *(iVar1 + 0x1c) + *(iVar1 + 0x10))) break;
            iVar1 = fcn.00012da4(iVar1);
        } while (iVar1 != 0);
        if (((iVar1 != 0) && (*(iVar1 + 0x20) == 0)) && (*(iVar1 + 0x10) == arg1)) {
            *0x16750 = iVar2 + 1;
            *(iVar2 * 0x10 + 0x169c8) = *(iVar1 + 0x1c);
            auStackX_10[0] = *0x160d0;
            *(iVar2 * 0x10 + 0x169c0) = iVar1;
            auStackX_10[0] = ~auStackX_10[0];
            *(iVar2 * 0x10 + 0x169cc) = 0;
            fcn.00011bac(arg1 + 0x28,4,auStackX_10);
        }
    }
    return;
}


/* fcn.000119ac @ 0x119ac */

uint64_t fcn.000119ac(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    char cVar2;
    ulong noname_1;
    uint64_t uVar3;
    int64_t *arg1_00;
    int64_t *in_R8;
    int64_t arg2_00;
    char acStackX_8 [8];
    int64_t aiStackX_18 [2];
    
    bVar1 = false;
    *0x160c8 = *0x160c8 + 1;
    cVar2 = '\x01';
    if (*0x160c8 == 1) {
        fcn.000128c0();
    }
code_r0x000119ef:
    if (arg2 != 0) {
        uVar3 = 0x1000;
        arg1_00 = arg1;
        if ((arg1 & 7U) != 0) goto code_r0x00011b47;
        do {
            noname_1 = 0xc00fd0dc;
            if (((*0x1674c & 1) == 0) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
                if (*arg1_00 != CONCAT71(*0x160d1,*0x160d0)) goto code_r0x00011a33;
            }
            else {
                aiStackX_18[0] = 0;
                in_R8 = aiStackX_18;
                noname_1 = 8;
                fcn.0001191c(arg1_00,8,in_R8);
                if (aiStackX_18[0] != CONCAT71(*0x160d1,*0x160d0)) goto code_r0x00011a33;
            }
            uVar3 = uVar3 - 8;
            arg1_00 = arg1_00 + 1;
        } while (7 < uVar3);
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
code_r0x00011b47:
            noname_1 = 0xc00fd0dc;
            if (((*0x1674c & 1) == 0) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
                if (*arg1_00 != *0x160d0) goto code_r0x00011a33;
            }
            else {
                in_R8 = acStackX_8;
                acStackX_8[0] = '\0';
                noname_1 = 1;
                fcn.0001191c(arg1_00,1,in_R8);
                if (acStackX_8[0] != *0x160d0) goto code_r0x00011a33;
            }
            arg1_00 = arg1_00 + 1;
        }
        goto code_r0x00011a99;
    }
    goto code_r0x00011ab7;
code_r0x00011a33:
    arg2_00 = CONCAT71(in_R8 >> 8,*0x160f0 <= arg1);
    fcn.00012bd0(arg1,noname_1,arg2_00);
    cVar2 = fcn.00012970(arg1);
    if ((cVar2 == '\0') && (!bVar1)) {
        fcn.000128c0();
        arg2_00 = CONCAT71(arg2_00 >> 8,*0x160f0 <= arg1);
        fcn.00012bd0(arg1,noname_1,arg2_00);
        bVar1 = true;
        cVar2 = fcn.00012970(arg1);
    }
    in_R8 = CONCAT71(arg2_00 >> 8,*0x160f0 <= arg1);
    fcn.00012c2c(arg1,noname_1,in_R8);
code_r0x00011a99:
    arg1 = arg1 + 0x1000;
    arg2 = arg2 + -0x1000;
    if (cVar2 == '\0') {
code_r0x00011ab7:
        if ((*0x160c8 != 0) && (*0x160c8 = *0x160c8 + -1, *0x160c8 == 0)) {
            fcn.00012918();
        }
        return ~-(cVar2 != '\0') & 0x8000000000000007;
    }
    goto code_r0x000119ef;
}


/* fcn.00011fe4 @ 0x11fe4 */

void fcn.00011fe4(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint in_R8;
    int iVar2;
    int64_t *piVar3;
    
    iVar2 = 0;
    if (0 < *0x16750) {
        piVar3 = 0x169c0;
        do {
            if (*(*piVar3 + 0x10) == CONCAT44(in_register_0000000c,arg1)) {
                if ((0x3f < arg2) && (*(CONCAT44(in_R8,arg3) + 0x28) == 0x4856465f)) {
                    *(CONCAT44(in_R8,arg3) + 0x28) = *0x160d0;
                    *(iVar2 * 0x10 + 0x169c8) = *(CONCAT44(in_R8,arg3) + 0x20);
                    *(iVar2 * 0x10 + 0x169cc) = 1;
                    return;
                }
                *0x16750 = *0x16750 + -1;
                uVar1 = *(*0x16750 * 0x10 + 0x169c8);
                *(iVar2 * 0x10 + 0x169c0) = *(*0x16750 * 0x10 + 0x169c0);
                *(iVar2 * 0x10 + 0x169c8) = uVar1;
                return;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 2;
        } while (iVar2 < *0x16750);
    }
    return;
}


/* fcn.0001206c @ 0x1206c */

void fcn.0001206c(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    uint auStackX_8 [2];
    
    iVar3 = 0;
    if (0 < *0x16750) {
        piVar2 = 0x169c0;
        iVar4 = *0x16750;
        do {
            if (*(*piVar2 + 0x10) == arg1) {
                *(arg2 + 0x28) = 0x4856465f;
            }
            if (*(piVar2 + 1) + *(*piVar2 + 0x10) == arg1 + noname_1) {
                auStackX_8[0] = 0x4856465f;
                fcn.00011bac(*(*piVar2 + 0x10) + 0x28,4,auStackX_8);
                iVar4 = *0x16750 + -1;
                iVar1 = *(iVar4 * 0x10 + 0x169c8);
                *0x16750 = iVar4;
                *piVar2 = *(iVar4 * 0x10 + 0x169c0);
                piVar2[1] = iVar1;
            }
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 2;
        } while (iVar3 < iVar4);
    }
    return;
}


/* fcn.00011e4c @ 0x11e4c */

uint64_t fcn.00011e4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    bool bVar1;
    char cVar2;
    int64_t noname_2;
    unkbyte7 in_R9;
    
    bVar1 = false;
    *0x160c8 = *0x160c8 + 1;
    cVar2 = '\x01';
    noname_2 = arg3;
    if (*0x160c8 == 1) {
        fcn.000128c0();
    }
    arg3 = arg3 - arg1;
    do {
        if (arg2 < 0x1000) break;
        arg2_00 = arg3 + arg1;
        cVar2 = fcn.000129d4(arg1,arg2_00,noname_2,CONCAT71(in_R9,*0x160f0 <= arg1));
        if ((cVar2 == '\0') && (!bVar1)) {
            fcn.000128c0();
            bVar1 = true;
            cVar2 = fcn.000129d4(arg1,arg2_00,noname_2,CONCAT71(in_R9,*0x160f0 <= arg1));
        }
        arg1 = arg1 + 0x1000;
        arg2 = arg2 - 0x1000;
    } while (cVar2 != '\0');
    if ((*0x160c8 != 0) && (*0x160c8 = *0x160c8 + -1, *0x160c8 == 0)) {
        fcn.00012918();
    }
    return ~-(cVar2 != '\0') & 0x8000000000000007;
}


/* fcn.000111c0 @ 0x111c0 */

void fcn.000111c0(void)

{
    return;
}


/* fcn.00012600 @ 0x12600 */

void fcn.00012600(int64_t arg1)

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
            fcn.000111c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000127ec @ 0x127ec */

uint64_t fcn.000127ec(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t *puStackX_8;
    uint32_t uStackX_10;
    
    uStackX_10 = arg2;
    if (((*0x16798 == 0) && (fcn.00012880(*0x160e8), *0x16798 == 0)) ||
       (cVar1 = (**(*0x16798 + 0x40))(&puStackX_8), cVar1 != '\x01')) {
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


/* fcn.000147fc @ 0x147fc */

bool fcn.000147fc(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    bool bVar1;
    
    bVar1 = (*0xc00fd010 & 0xfffff000) == *0x16248;
    if (bVar1) {
        *(*0x16248 + 8) = 0;
        arg2 = 0;
        *(*0x16248 + 6) = 0x20d;
        fcn.00013f68(0x201,0);
        fcn.00012660(arg2 + 10,arg2);
        *arg1 = *(*0x16248 + 0x10) & 0xffffff;
    }
    return bVar1;
}


/* fcn.000147b0 @ 0x147b0 */

void fcn.000147b0(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0xc00fd010 & 0xfffff000) == *0x16248) {
        iVar1 = fcn.00014304();
        if (iVar1 < 0) {
            fcn.00014410(arg1);
        }
        fcn.0001462c();
        fcn.00014e30(0);
        fcn.000146d0();
    }
    return;
}


/* fcn.00014304 @ 0x14304 */

int64_t fcn.00014304(void)

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
    fcn.00011290(puVar4,0x40,0);
    iVar2 = fcn.00013e50(puVar4,iVar2,0xefc,4);
    if ((-1 < iVar2) && (auStack_48[0] - 1 < 0xfffffffe)) {
        uVar8 = 0;
        uVar6 = auStack_48[0] >> 6 & 0x3fc;
        if (uVar6 != 0) {
            do {
                puVar4 = auStack_48;
                iVar2 = 0x40;
                fcn.00011290(puVar4,0x40,0);
                uVar7 = uVar6 - uVar8;
                if (0x3f < uVar6 - uVar8) {
                    uVar7 = 0x40;
                }
                iVar2 = fcn.00013e50(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x161ce) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x16248 + 0xc4) = uVar1;
                            *(*0x16248 + 200) = uVar1;
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


/* fcn.00014410 @ 0x14410 */

void fcn.00014410(uint32_t arg1)

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
    fcn.00011290(&uStack_108,0x100,0);
    uVar3 = 0;
    do {
        iVar4 = 0;
        *(*0x16248 + 8) = uVar3;
        *(*0x16248 + 6) = 0x3f0b;
        fcn.00013f68(0x3f01,0);
        fcn.00012660(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x16248);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x16248 + 0xcc) = 0;
                fcn.00012660(1,iVar4);
                if (*(*0x16248 + 0xd4) == 0x50444653) goto code_r0x00014560;
                goto code_r0x000145c8;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x00014560:
        uVar3 = *0x161ce & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x161ce & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x161ce >> 8 != '@') goto code_r0x000145c8;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x000145c8;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x000145c8;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x000145c8;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x000145c8:
    *(*0x16248 + 0xc4) = uVar2;
    *(*0x16248 + 200) = uVar2;
    return;
}


/* fcn.0001462c @ 0x1462c */

void fcn.0001462c(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x161d3 == '\x01') {
        uVar1 = *(*0x16248 + 0xaf);
        uVar2 = *(*0x16248 + 0xa7);
        *(*0x16248 + 0xaf) = 0x98;
        if (*(*0x16248 + 0xaf) == -0x68) {
            *(*0x16248 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x16248 + 0xa1) = 0x72;
            fcn.00013f68(0,CONCAT71(param_2 >> 8,1));
            *(*0x16248 + 0xaf) = uVar1;
            *(*0x16248 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.00013f68 @ 0x13f68 */

void fcn.00013f68(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x16248 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x16248 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x16248 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x16248 + 0xa0) = 0x1c;
    }
    return;
}


/* fcn.00014e30 @ 0x14e30 */

void fcn.00014e30(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.00013fd0(arg1);
    uVar3 = *0x161ce & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x00014f6b;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x161ce & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x161ca < 0x800000;
                goto code_r0x00014f63;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x00014f6b;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x161ce & 0xffff) != 0x609d) {
            bVar4 = (*0x161ce & 0xffff) == 0x709d;
code_r0x00014f2e:
            if (!bVar4) goto code_r0x00014f6b;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x00014f6b;
        if (uVar3 == 0xc2) {
            uVar3 = *0x161ce & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x00014f2e;
                }
                goto code_r0x00014f65;
            }
            bVar4 = *0x161ca < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x161ce & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x00014f6b;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x161ce & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x00014f6b;
            bVar4 = *0x161ca < 0x2000000;
        }
code_r0x00014f63:
        if (bVar4) goto code_r0x00014f6b;
    }
code_r0x00014f65:
    uVar2 = 0x3c;
code_r0x00014f6b:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.00013fd0(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.00013f68(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x16248 + 0x10) = uVar1;
        *(*0x16248 + 8) = arg1;
        if ((*(*0x16248 + 4) & 0x800) == 0) {
            *(*0x16248 + 6) = 0xf;
            fcn.00013f68(CONCAT71(arg1_01 >> 8,1),0);
            fcn.0001400c();
        }
    }
    return;
}


/* fcn.000146d0 @ 0x146d0 */

void fcn.000146d0(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    iVar1 = *0x16248;
    *(*0x16248 + 0xb4) = 0;
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
        if (iVar3 != *0x161ca) {
            *0x161ca = iVar3;
        }
    }
    return;
}


/* fcn.0001326c @ 0x1326c */

ulong fcn.0001326c(int64_t arg1)

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


/* fcn.0001331c @ 0x1331c */

ulong fcn.0001331c(int64_t arg1)

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


/* fcn.00013374 @ 0x13374 */

ulong fcn.00013374(int64_t arg1)

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


/* fcn.00013dcc @ 0x13dcc */

ulong fcn.00013dcc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x16248 < 0) {
                uVar2 = (*0x16248)[0x1b];
            }
            else {
                uVar2 = (*0x16248)[0x16];
            }
        }
        else {
            uVar2 = (*0x16248)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x16248)[iVar1 + -0xc + 0x38];
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


/* fcn.00014d24 @ 0x14d24 */

void fcn.00014d24(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
    
    if ((*0xc00fd010 & 0xfffff000) == *0x16248) {
        iVar6 = 0;
        if (arg4 == '\x01') {
            arg2_00 = auStack_28;
            iVar2 = fcn.000141d0(arg1,arg2_00);
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
        fcn.00013f68(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
        uVar7 = uVar8;
        iVar4 = (uVar8 & 0xffff) * 0x100;
        *(*0x16248 + 8) = uVar1;
        iVar3 = iVar4 + -0xff;
        *(*0x16248 + 6) = iVar3;
        fcn.00013f68(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
        if (uVar7 != 0) {
            uVar5 = uVar7;
            do {
                *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x16248);
                iVar6 = iVar6 + 1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        *arg3 = *arg3 - uVar7;
    }
    return;
}


/* fcn.00011290 @ 0x11290 */

int64_t fcn.00011290(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00013e50 @ 0x13e50 */

ulong fcn.00013e50(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

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
    if ((*0xc00fd010 & 0xfffff000) == *0x16248) {
        uVar3 = 0;
        iVar5 = 0xff0a55a;
        *(*0x16248 + 0xb4) = 0;
        if ((((*(*0x16248 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.00013dcc(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
            (uVar2 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
           ((*(*0x16248 + 0xb4) = uVar3, *(*0x16248 + 0xb8) == iVar5 &&
            (iVar1 = fcn.00013dcc(1,0,auStack_18), -1 < iVar1)))) {
            auStackX_10[0] = uVar2;
            if (uVar2 != 0) {
                do {
                    fcn.00014d24((uVar3 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                                 (uVar3 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                    uVar3 = uVar2 - auStackX_10[0];
                } while (uVar2 - auStackX_10[0] < uVar2);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00012660 @ 0x12660 */

int64_t fcn.00012660(int64_t arg1,int64_t arg2)

{
    fcn.00012600((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000141d0 @ 0x141d0 */

ulong fcn.000141d0(int64_t arg1,int64_t arg2)

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
    uStackX_20 = *0x16800;
    uStackX_18 = *0x16810;
    if (*0x16810 != 0) goto code_r0x000142c8;
    *(*0x16248 + 0xb4) = 0;
    if (*(*0x16248 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.00013dcc(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x000142a0;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x16248 + 0xb4) = 0;
            if (*(*0x16248 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.00013dcc(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x000142a0:
        uVar4 = *0x161ca - 1U;
        uStackX_18 = *0x161ca - 1U;
    }
    *0x16800 = uStackX_20;
    *0x167f8 = uVar4;
    *0x16810 = uStackX_18;
code_r0x000142c8:
    if (*0x16808 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x160e8);
    }
    uVar1 = *0x16810 + 1 + iVar6;
    if (*0x167f8 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00014050 @ 0x14050 */

ulong fcn.00014050(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

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
    if ((((uVar1 != 0) && (*0x16810 != 0)) && (*0x16808 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x16800 + (0xffffffff - *0x167f8) <= arg1) && (arg1 <= *0x16810 + (0xffffffff - *0x167f8))) {
                uVar1 = 0;
            }
        }
        else if (*0x16800 <= arg1) {
            uVar1 = -(*0x16810 < arg1) & uVar1;
        }
    }
    uVar6 = 0;
    auStackX_20[0] = uVar7;
    if (uVar7 != 0) {
        do {
            fcn.00011290(acStack_68,0x40,0);
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
                    fcn.00011180(acStack_68,uVar6 + arg1,uVar9 - auStackX_20[0]);
                }
            }
            else {
                arg4_00 = CONCAT31(arg4_00 >> 8,in_stack_00000028);
                fcn.00014d24(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
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


/* fcn.0001400c @ 0x1400c */

void fcn.0001400c(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x16248 + 6) = 0x11;
        fcn.00013f68(1,0);
        if ((*(*0x16248 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.000150b8 @ 0x150b8 */

int64_t fcn.000150b8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.00011210(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.000112f0();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.00011340(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.00014868 @ 0x14868 */

ulong fcn.00014868(int64_t arg1,int64_t arg2,int64_t arg3)

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
    if ((arg4 == *0x16248) && (uVar6 = arg2, (arg2 & 0xffffffffU) % *(*0x16798 + 0x54) == 0)) {
        uVar2 = *0x16240;
        uVar5 = 0;
        if (*0x16240 == 1) {
            uVar2 = *(*0x16248 + 0xc4) >> 0x1d & 0xffffff01;
            *0x16240 = uVar2;
        }
        if (uVar6 != 0) {
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar6 - uVar5 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.000141d0(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x000148a2;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.00014050(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.00013f68(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x16248 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x16798 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x16248 + 6) = uVar8;
                        fcn.00013f68(CONCAT71(iVar4 >> 8,1),0);
                        fcn.0001400c();
                        if ((*0x16800 <= auStackX_20[0]) && (auStackX_20[0] <= *0x16810)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x16798 + 0x54);
                                if (arg2_01 == 0) goto code_r0x00014a27;
                            }
                            fcn.000150b8((auStackX_20[0] - *0x16810) + 0xffffffff,arg2_01);
                        }
code_r0x00014a27:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.00014050(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x16240 = 0;
                    }
                    else {
                        fcn.00012660(10,arg2_00);
                    }
                }
                uVar5 = uVar5 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar6 <= uVar5) break;
                uVar2 = *0x16240;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x000148a2:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00013fd0 @ 0x13fd0 */

uchar fcn.00013fd0(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x16248 + 8) = arg1;
    }
    *(*0x16248 + 6) = 0x11;
    fcn.00013f68(1,0);
    return *(*0x16248 + 0x10);
}


/* fcn.00011210 @ 0x11210 */

uint64_t fcn.00011210(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011340 @ 0x11340 */

int64_t fcn.00011340(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


