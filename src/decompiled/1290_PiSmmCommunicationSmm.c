// decompiled by r2ghidra: 1290_PiSmmCommunicationSmm.pe32
// functions: 6

/* entry0 @ 0x11234 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x12088 = *(arg2 + 0x60);
    aiStackX_8[0] = 0;
    *0x12080 = arg2;
    (**(*0x12088 + 0x140))(0x12020,0,aiStackX_8);
    (**(aiStackX_8[0] + 8))(aiStackX_8[0]);
    arg2_00 = 0;
    iVar1 = (**(*0x12090 + 0xd0))(0x12010,0,0x12098);
    if (iVar1 < 0) {
        *0x12098 = 0;
    }
    *0x121a0 = -0x7fffffffffffffff;
    arg1_00 = 0x120a0;
    iVar1 = fcn.00011020(0x120a0);
    if (iVar1 == 0) {
        iVar1 = fcn.000113c0(arg1_00,arg2_00);
        if ((-1 < iVar1) || (*0x121a0 < 0)) {
            *0x121a0 = iVar1;
        }
        fcn.000110f0(0x120a0,-1);
    }
    return *0x121a0;
}


/* fcn.00011484 @ 0x11484 */

void fcn.00011484(void)

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
    
    fcn.00011484();
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


/* fcn.000113c0 @ 0x113c0 */

ulong fcn.000113c0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    int64_t iStackX_10;
    ulong *puStackX_18;
    uchar auStackX_20 [8];
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    (**(*0x12090 + 0xd0))(0x12030,0,&puStackX_18);
    iStackX_8 = -1;
    uVar2 = (**puStackX_18)(puStackX_18,0x11308,&iStackX_8,auStackX_20);
    iStackX_10 = 0xffffffff;
    (**(*0x12088 + 0x28))(1,10,1,&iStackX_10);
    iVar1 = iStackX_10;
    fcn.00011000(iStackX_10,8);
    *0x12044 = iStackX_8;
    *0x12048 = iVar1;
    (**(*0x12090 + 0x28))(*0x12090,0x12000,"SMMC",0x10);
    return uVar2;
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


