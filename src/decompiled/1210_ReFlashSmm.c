// decompiled by r2ghidra: 1210_ReFlashSmm.pe32
// functions: 13

/* entry0 @ 0x111e0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00011208(arg1,arg2);
    iVar1 = fcn.000112f4(arg1,arg2);
    if (iVar1 < 0) {
        fcn.0001193c();
    }
    return iVar1;
}


/* fcn.00011208 @ 0x11208 */

int64_t fcn.00011208(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x120e8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x120e0 = arg2;
    uStackX_8 = arg1;
    (**(*0x120e8 + 0x140))(0x12050,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x120f0);
    (**(*0x120e8 + 0x140))(0x12060,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x12238 = fcn.0001190c();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x12238);
    *0x12230 = uStackX_8 >> 5;
    iVar1 = (**(*0x120f0 + 0xd0))(0x12020,0,0x120f8);
    if (iVar1 < 0) {
        *0x120f8 = 0;
    }
    uVar2 = 0;
    if (*0x12100 == 0) {
        *0x12100 = 0;
        if (*(*0x120e0 + 0x68) != 0) {
            piVar3 = *(*0x120e0 + 0x70);
            do {
                if ((*0x12030 == *piVar3) && (*0x12038 == piVar3[1])) {
                    *0x12100 = (*(*0x120e0 + 0x70))[uVar2 * 3 + 2];
                    return *0x12100;
                }
                uVar2 = uVar2 + 1;
                piVar3 = piVar3 + 3;
            } while (uVar2 < *(*0x120e0 + 0x68));
        }
    }
    return *0x12100;
}


/* fcn.000112f4 @ 0x112f4 */

int64_t fcn.000112f4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    *0x12210 = -0x7fffffffffffffff;
    aiStackX_10[0] = arg1;
    iVar1 = section..text(74000);
    if (iVar1 == 0) {
        fcn.00011978();
        *0x12218 = 0;
        (**(*0x120e8 + 0x40))(6,0x28,0x12220);
        iVar1 = (**(*0x120f0 + 0xc0))(0x12040,0x118ac,aiStackX_10);
        if (((-1 < iVar1) && (iVar1 = (**(*0x120f0 + 0xe0))(0x11614,0x12070,0x12228), -1 < iVar1)) || (*0x12210 < 0))
        {
            *0x12210 = iVar1;
        }
        fcn.000110d0(74000,-1);
        return *0x12210;
    }
    return *0x12210;
}


/* fcn.0001193c @ 0x1193c */

void fcn.0001193c(void)

{
    char cVar1;
    
    cVar1 = fcn.000118c8(*0x12238);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011962. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x120f0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011971. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x120e8 + 0x48))(*0x12238);
    return;
}


/* fcn.000118c8 @ 0x118c8 */

uint64_t fcn.000118c8(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x12230 != 0) {
        puVar2 = *0x12238 + 8;
        in_RAX = *0x12238;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x12230);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000118c4 @ 0x118c4 */

void fcn.000118c4(void)

{
    return;
}


/* fcn.0001190c @ 0x1190c */

ulong fcn.0001190c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x120f0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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
    
    //[00] -r-x section size 4096 named .text
    fcn.000118c4();
    *(arg1 + 0xf8) = 0;
    if ((*0x120a0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011978 @ 0x11978 */

int64_t fcn.00011978(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12100 == 0) {
        *0x12100 = 0;
        if (*(*0x120e0 + 0x68) != 0) {
            piVar2 = *(*0x120e0 + 0x70);
            do {
                if ((*0x12030 == *piVar2) && (*0x12038 == piVar2[1])) {
                    *0x12100 = (*(*0x120e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x12100;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x120e0 + 0x68));
        }
    }
    return *0x12100;
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


/* fcn.000113c4 @ 0x113c4 */

ulong fcn.000113c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x12090 != '\0') {
        *0x12090 = '\0';
        iVar1 = (**(*0x120f0 + 0xd0))(0x12080,0,0x120d0);
        if (iVar1 < 0) {
            *0x120d0 = NULL;
        }
    }
    if (*0x120d0 == NULL) {
        uVar2 = 0x8000000000000003;
    }
    else {
        **0x12220 = arg1;
        *(*0x12220 + 1) = arg2;
        *(*0x12220 + 0xc) = arg3;
        *(*0x12220 + 2) = 0;
        uVar2 = (***0x120d0)(*0x12220);
    }
    return uVar2;
}


/* fcn.00011490 @ 0x11490 */

ulong fcn.00011490(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    uVar3 = arg2 & 0xffffffff;
    if (arg4 - 4U < 2) goto code_r0x00011558;
    if (0x1000000 < arg2) {
        return 0x8000000000000002;
    }
    if ((arg3 != 0) && (arg2 != 0)) {
        if (*0x120f8 == NULL) {
            return 0x8000000000000002;
        }
        iVar1 = (***0x120f8)(arg3,uVar3);
        if (iVar1 != 0) {
            return 0x8000000000000002;
        }
    }
    if (*0x120f8 == NULL) {
        iVar1 = -0x7ffffffffffffff1;
code_r0x00011524:
        if ((((*0x12218 & 1) != 0) && (0xfeffffff < arg1)) && (arg1 + -1 + uVar3 < 0x100000000)) {
            iVar1 = 0;
        }
    }
    else {
        iVar1 = (*(*0x120f8)[1])(arg1,uVar3);
        if (iVar1 < 0) goto code_r0x00011524;
    }
    if (iVar1 != 0) {
        return 0x8000000000000002;
    }
code_r0x00011558:
    if ((*0x120d8 != NULL) || (iVar1 = (**(*0x120f0 + 0xd0))(0x12000,0,0x120d8), iVar1 == 0)) {
        if (arg4 == 0) {
            uVar2 = (***0x120d8)(arg1,uVar3,arg3);
            return uVar2;
        }
        if (arg4 == 1) {
            uVar2 = (*(*0x120d8)[1])(arg1,uVar3);
            return uVar2;
        }
        if (arg4 == 2) {
            uVar2 = (*(*0x120d8)[2])(arg1,uVar3,arg3);
            return uVar2;
        }
        if (arg4 == 3) {
            uVar2 = (*(*0x120d8)[3])(arg1,uVar3,arg3);
            return uVar2;
        }
        if (arg4 == 4) {
            uVar2 = (*(*0x120d8)[4])();
            return uVar2;
        }
        if (arg4 == 5) {
            uVar2 = (*(*0x120d8)[5])();
            return uVar2;
        }
    }
    return 0x8000000000000003;
}


