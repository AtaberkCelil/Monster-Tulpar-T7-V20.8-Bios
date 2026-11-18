// decompiled by r2ghidra: 1145_SpiSmmStub.pe32
// functions: 7

/* entry0 @ 0x11214 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t aiStackX_8 [4];
    
    *0x12078 = *(arg2 + 0x60);
    aiStackX_8[0] = 0;
    *0x12070 = arg2;
    (**(*0x12078 + 0x140))(0x12030,0,aiStackX_8);
    (**(aiStackX_8[0] + 8))(aiStackX_8[0]);
    arg1_00 = 0;
    iVar1 = (**(*0x12080 + 0xd0))(0x12010,0,0x12088);
    if (iVar1 < 0) {
        *0x12088 = 0;
    }
    fcn.0001129c(*0x12088,arg1_00);
    return;
}


/* fcn.0001129c @ 0x1129c */

ulong fcn.0001129c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    *0x12190 = 0x8000000000000001;
    aiStackX_10[0] = arg1;
    iVar1 = fcn.00011040(0x12090);
    if (iVar1 == 0) {
        (**(*0x12080 + 0xd0))(0x12000,0,0x121a0);
        (**(*0x12080 + 0xe0))(0x113c0,0x12000,0x12198);
        (**(*0x12080 + 0xc0))(0x12020,0x117fc,aiStackX_10);
        *0x12190 = 0;
        fcn.00011110(0x12090,-1);
    }
    return *0x12190;
}


/* fcn.00011040 @ 0x11040 */

ulong fcn.00011040(int64_t arg1)

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
    
    fcn.00011808();
    *(arg1 + 0xf8) = 0;
    if ((*0x12040 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011110 @ 0x11110 */

void fcn.00011110(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x000111b9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011808 @ 0x11808 */

void fcn.00011808(void)

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
    
    //[00] -r-x section size 4096 named .text
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


/* fcn.0001134c @ 0x1134c */

void fcn.0001134c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *arg1;
    if ((iVar1 == 1) || (iVar1 == 2)) {
        iVar1 = arg1 + 0x24;
    }
    else {
        if (iVar1 == 4) {
            *(arg1 + 0x19) = arg1 + 0x21;
            return;
        }
        if (iVar1 == 5) {
            *(arg1 + 0x15) = arg1 + 0x1d;
            return;
        }
        if ((iVar1 == 6) || (iVar1 == 7)) {
            *(arg1 + 0x14) = arg1 + 0x1c;
            return;
        }
        if (iVar1 != 8) {
            if ((iVar1 != 9) && (iVar1 != 10)) {
                return;
            }
            *(arg1 + 0x18) = arg1 + 0x20;
            return;
        }
        *(arg1 + 0x14) = arg1 + 0x24;
        iVar1 = arg1 + 0x28;
    }
    *(arg1 + 0x1c) = iVar1;
    return;
}


