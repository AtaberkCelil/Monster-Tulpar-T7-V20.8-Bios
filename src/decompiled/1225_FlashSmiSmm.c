// decompiled by r2ghidra: 1225_FlashSmiSmm.pe32
// functions: 10

/* entry0 @ 0x111e0 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong noname_0;
    
    fcn.00011254(param_1,param_2);
    noname_0 = 0x120c0;
    *0x121c0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x120c0);
    if (iVar1 == 0) {
        iVar1 = fcn.000114a0(noname_0,param_2);
        if ((-1 < iVar1) || (*0x121c0 < 0)) {
            *0x121c0 = iVar1;
        }
        fcn.000110d0(0x120c0,-1);
    }
    iVar1 = *0x121c0;
    if (*0x121c0 < 0) {
        fcn.000115dc();
    }
    return iVar1;
}


/* fcn.00011564 @ 0x11564 */

void fcn.00011564(void)

{
    return;
}


/* fcn.00011254 @ 0x11254 */

void fcn.00011254(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x120a0 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x12098 = arg2;
    uStackX_8 = arg1;
    (**(*0x120a0 + 0x140))(0x12030,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x120a8);
    (**(*0x120a0 + 0x140))(0x12040,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x121d0 = fcn.000115ac();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x121d0);
    *0x121c8 = uStackX_8 >> 5;
    fcn.00011618();
    iVar1 = (**(*0x120a8 + 0xd0))(0x12010,0,0x120b8);
    if (iVar1 < 0) {
        *0x120b8 = 0;
    }
    return;
}


/* fcn.000115ac @ 0x115ac */

ulong fcn.000115ac(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x120a8 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011618 @ 0x11618 */

int64_t fcn.00011618(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x120b0 == 0) {
        *0x120b0 = 0;
        if (*(*0x12098 + 0x68) != 0) {
            piVar2 = *(*0x12098 + 0x70);
            do {
                if ((*0x12020 == *piVar2) && (*0x12028 == piVar2[1])) {
                    *0x120b0 = (*(*0x12098 + 0x70))[uVar1 * 3 + 2];
                    return *0x120b0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12098 + 0x68));
        }
    }
    return *0x120b0;
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
    fcn.00011564();
    *(arg1 + 0xf8) = 0;
    if ((*0x12060 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000114a0 @ 0x114a0 */

ulong fcn.000114a0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = fcn.00011618();
    if ((*(iVar1 + 0xc) == 0x12) || (*(iVar1 + 0xc) == 0x20)) {
        iVar1 = (**(*0x120a8 + 0xd0))(0x12000,0,0x12090);
        if (iVar1 < 0) {
            *0x12090 = 0;
        }
        if (*0x12090 != 0) {
            *0x121d8 = *(*0x12090 + 8);
            *0x121f8 = *(*0x12090 + 0x10);
            *0x121e8 = *(*0x12090 + 0x18);
            *0x121e0 = *(*0x12090 + 0x20);
            *0x121f0 = *(*0x12090 + 0x28);
        }
        aiStackX_10[0] = 0;
        uVar2 = (**(*0x120a8 + 0xe0))(0x11344,0x12050,aiStackX_10);
    }
    else {
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
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


/* fcn.000115dc @ 0x115dc */

void fcn.000115dc(void)

{
    char cVar1;
    
    cVar1 = fcn.00011568(*0x121d0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011602. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x120a8 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011611. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x120a0 + 0x48))(*0x121d0);
    return;
}


/* fcn.00011568 @ 0x11568 */

uint64_t fcn.00011568(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x121c8 != 0) {
        puVar2 = *0x121d0 + 8;
        in_RAX = *0x121d0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x121c8);
    }
    return in_RAX & 0xffffffffffffff00;
}


