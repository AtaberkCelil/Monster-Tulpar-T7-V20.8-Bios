// decompiled by r2ghidra: 1085_SmmLockBox.pe32
// functions: 19

/* entry0 @ 0x11274 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.000112a0(arg1,in_RDX);
    iVar1 = fcn.000114b8(arg1,in_RDX);
    if (iVar1 < 0) {
        fcn.00011414();
    }
    return iVar1;
}


/* fcn.000112a0 @ 0x112a0 */

void fcn.000112a0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    
    *0x120f0 = *(arg2 + 0x60);
    iStackX_8 = 0;
    *0x120e8 = arg2;
    (**(*0x120f0 + 0x140))(0x12080,0,&iStackX_8);
    (**(iStackX_8 + 8))(iStackX_8,0x120f8);
    iStackX_8 = 0;
    (**(*(arg2 + 0x60) + 0x140))(0x12020,0,&iStackX_8);
    (**(iStackX_8 + 8))(iStackX_8,0x12100);
    iVar1 = (**(*0x120f8 + 0xd0))(0x12050,0,0x12108);
    if (iVar1 < 0) {
        *0x12108 = 0;
    }
    (**(*0x12100 + 0xc0))(0x12030,0x119b0,0x12120);
    (**(*0x12100 + 0xc0))(0x12090,0x119c8,0x12130);
    (**(*0x12100 + 0xc0))(0x12070,0x11a20,74000);
    iVar1 = fcn.0001195c();
    if (iVar1 == 0) {
        *0x12250 = 0x34365f424b434f4c;
        *0x12258 = 0x120a0;
        (**(*0x12100 + 0x28))(*0x12100,0x12040,0x12250,0x10);
        *0x12138 = 1;
    }
    return;
}


/* fcn.0001195c @ 0x1195c */

int64_t fcn.0001195c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*(*0x12100 + 0x98) != 0) {
        piVar2 = *(*0x12100 + 0xa0);
        do {
            if ((*piVar2 == *0x12040) && (piVar2[1] == *0x12048)) {
                return (*(*0x12100 + 0xa0))[uVar1 * 3 + 2];
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x12100 + 0x98));
    }
    return 0;
}


/* fcn.000114b8 @ 0x114b8 */

int64_t fcn.000114b8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    *0x12240 = -0x7fffffffffffffff;
    iStackX_10 = arg2;
    iVar1 = fcn.00011040(0x12140);
    if (iVar1 == 0) {
        iStackX_10 = arg1;
        (**(*0x120f8 + 0xe0))(0x117ac,0x12040,auStackX_18);
        (**(*0x120f8 + 0xc0))(0x12060,0x1194c,auStackX_20);
        iStackX_10 = 0;
        iVar1 = (**(*0x120f0 + 0x80))(&iStackX_10,0x12010,0,0);
        if ((-1 < iVar1) || (*0x12240 < 0)) {
            *0x12240 = iVar1;
        }
        fcn.00011110(0x12140,-1);
    }
    return *0x12240;
}


/* fcn.00011414 @ 0x11414 */

void fcn.00011414(void)

{
    if (*0x12138 != '\0') {
        (**(*0x12100 + 0x28))(*0x12100,0x12040,0,0);
    }
    if (*0x12120 != 0) {
        (**(*0x12100 + 0xc0))(0x12030,0,0x12120);
    }
    if (*0x12130 != 0) {
        (**(*0x12100 + 0xc0))(0x12090,0,0x12130);
    }
    if (*0x12110 != 0) {
        (**(*0x12100 + 0xc0))(0x12070,0,74000);
    }
    return;
}


/* fcn.00011958 @ 0x11958 */

void fcn.00011958(void)

{
    return;
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
    
    fcn.00011958();
    *(arg1 + 0xf8) = 0;
    if ((*0x120b0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 4096 named .text
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.00011a2c @ 0x11a2c */

int64_t * fcn.00011a2c(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = fcn.0001195c();
    piVar3 = NULL;
    if (iVar1 != 0) {
        piVar3 = *(iVar1 + 8);
    }
    piVar2 = *piVar3;
    if (piVar2 != piVar3) {
        do {
            if ((piVar2[-6] == *arg1) && (piVar2[-5] == *(arg1 + 8))) {
                return piVar2 + -7;
            }
            piVar2 = *piVar2;
        } while (piVar2 != piVar3);
    }
    return NULL;
}


/* fcn.000111c3 @ 0x111c3 */

void fcn.000111c3(void)

{
    return;
}


/* fcn.00011bdc @ 0x11bdc */

ulong fcn.00011bdc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_R9;
    uint64_t arg3_00;
    int64_t aiStackX_18 [2];
    
    arg3_00 = CONCAT44(in_R9,arg4);
    if (((arg3 == 0) || (arg3_00 == 0)) || (-arg2 - 1U < arg3_00)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        iVar3 = fcn.00011a2c(arg1);
        if (iVar3 == 0) {
            uVar4 = 0x800000000000000e;
        }
        else {
            uVar2 = *(iVar3 + 0x20);
            uVar1 = arg2 + arg3_00;
            if (uVar2 < uVar1) {
                if ((*(iVar3 + 0x28) & 2) == 0) {
                    return 0x8000000000000005;
                }
                if (((uVar2 & 0xfff) != 0) * 0x1000 + (uVar2 & 0xfffffffffffff000) < uVar1) {
                    iVar5 = (**(*0x12100 + 0x60))(0,6,((uVar1 & 0xfff) != 0) + (uVar1 >> 0xc),aiStackX_18);
                    if (iVar5 < 0) {
                        return 0x8000000000000009;
                    }
                    if ((*(iVar3 + 0x20) != 0) && (aiStackX_18[0] != *(iVar3 + 0x30))) {
                        section..text(aiStackX_18[0],*(iVar3 + 0x30),*(iVar3 + 0x20));
                    }
                    if (*(iVar3 + 0x20) != 0) {
                        fcn.00011200(*(iVar3 + 0x30),*(iVar3 + 0x20));
                    }
                    (**(*0x12100 + 0x68))(*(iVar3 + 0x30),(*(iVar3 + 0x20) >> 0xc) + ((*(iVar3 + 0x20) & 0xfff) != 0));
                    *(iVar3 + 0x30) = aiStackX_18[0];
                }
                uVar2 = *(iVar3 + 0x20);
                if ((uVar2 < arg2) && (arg2 - uVar2 != 0)) {
                    fcn.00011200(uVar2 + *(iVar3 + 0x30),arg2 - uVar2);
                }
                *(iVar3 + 0x20) = uVar1;
            }
            arg2 = *(iVar3 + 0x30) + arg2;
            if (arg2 != arg3) {
                section..text(arg2,arg3,arg3_00);
            }
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00011d78 @ 0x11d78 */

ulong fcn.00011d78(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (arg2 == 0) {
        if (arg3 != 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg3 == 0) {
        return 0x8000000000000002;
    }
    iVar3 = fcn.00011a2c(arg1);
    if (iVar3 == 0) {
        uVar4 = 0x800000000000000e;
    }
    else if ((((*(iVar3 + 0x28) & 2) == 0) || (*0x12118 == '\0')) || (*0x12128 != '\0')) {
        if (arg2 == 0) {
            if ((*(iVar3 + 0x28) & 1) == 0) {
                return 0x8000000000000008;
            }
            arg2 = *(iVar3 + 0x18);
        }
        if ((arg3 == 0) || (uVar1 = *(iVar3 + 0x20), uVar2 = *arg3, *arg3 = uVar1, uVar1 <= uVar2)) {
            if ((*(iVar3 + 0x20) != 0) && (arg2 != *(iVar3 + 0x30))) {
                section..text(arg2,*(iVar3 + 0x30),*(iVar3 + 0x20));
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000005;
        }
    }
    else {
        uVar4 = 0x800000000000000f;
    }
    return uVar4;
}


/* fcn.00011588 @ 0x11588 */

void fcn.00011588(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStack_38 [16];
    uchar auStack_28 [16];
    uint64_t uStack_18;
    
    uVar2 = 0;
    if (*0x120e0 != '\0') {
        *(arg1 + 8) = 0x800000000000000f;
        return;
    }
    if (auStack_38 != arg1) {
        section..text(auStack_38,arg1,0x28);
    }
    if (((uStack_18 & 0xfffffffffffffffc) == 0) && ((uStack_18 & 3) != 3)) {
        iVar1 = fcn.00011a2c(auStack_28);
        if (iVar1 == 0) {
            uVar2 = 0x800000000000000e;
            goto code_r0x0001162b;
        }
        if ((((uStack_18 & 1) == 0) || ((*(iVar1 + 0x28) & 2) == 0)) &&
           (((*(iVar1 + 0x28) & 1) == 0 || ((uStack_18 & 2) == 0)))) {
            *(iVar1 + 0x28) = uStack_18;
            goto code_r0x0001162b;
        }
    }
    uVar2 = 0x8000000000000002;
code_r0x0001162b:
    *(arg1 + 8) = uVar2;
    return;
}


/* fcn.000116e8 @ 0x116e8 */

void fcn.000116e8(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uchar *puVar2;
    uchar auStack_38 [16];
    uchar auStack_28 [16];
    int64_t iStack_18;
    int64_t iStack_10;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (auStack_38 != puVar2) {
        section..text(auStack_38,arg1,0x30);
    }
    if ((iStack_10 == 0) && (iStack_18 == 0)) {
        iVar1 = fcn.00011d78(auStack_28,0,0);
    }
    else {
        if (*0x12108 == NULL) {
            iVar1 = -0x7ffffffffffffff1;
        }
        else {
            iVar1 = (***0x12108)();
        }
        if (iVar1 < 0) {
            *(puVar2 + 8) = 0x800000000000000f;
            return;
        }
        iVar1 = fcn.00011d78(auStack_28,iStack_18,&iStack_10);
        if ((iVar1 == -0x7ffffffffffffffb) || (iVar1 == 0)) {
            *(puVar2 + 0x28) = iStack_10;
        }
    }
    *(puVar2 + 8) = iVar1;
    return;
}


/* fcn.00011640 @ 0x11640 */

void fcn.00011640(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStack_48 [16];
    uchar auStack_38 [16];
    int64_t iStack_28;
    int64_t iStack_20;
    ulong uStack_18;
    
    if (*0x120e0 == '\0') {
        if (auStack_48 != arg1) {
            section..text(auStack_48,arg1,0x38);
        }
        if (*0x12108 == NULL) {
            iVar1 = -0x7ffffffffffffff1;
        }
        else {
            iVar1 = (***0x12108)(iStack_20,uStack_18);
        }
        if (iVar1 < 0) {
            *(arg1 + 8) = 0x800000000000000f;
        }
        else {
            fcn.000111c0();
            uVar2 = fcn.00011bdc(auStack_38,iStack_28,iStack_20,uStack_18);
            *(arg1 + 8) = uVar2;
        }
    }
    else {
        *(arg1 + 8) = 0x800000000000000f;
    }
    return;
}


/* fcn.000111c0 @ 0x111c0 */

void fcn.000111c0(void)

{
    return;
}


/* fcn.00011a74 @ 0x11a74 */

ulong fcn.00011a74(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *apuStackX_10 [2];
    int64_t iStackX_20;
    int64_t var_38h;
    int64_t var_48h;
    
    iVar5 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        apuStackX_10[0] = fcn.00011a2c(arg1);
        if (apuStackX_10[0] == NULL) {
            iVar6 = (arg3 >> 0xc) + ((arg3 & 0xfffU) != 0);
            iVar3 = (**(*0x12100 + 0x60))(0,6,iVar6,&iStackX_20);
            if (-1 < iVar3) {
                iVar3 = (**(*0x12100 + 0x50))(6,0x48,apuStackX_10);
                if (-1 < iVar3) {
                    if (iStackX_20 != arg2) {
                        section..text(iStackX_20,arg2,arg3);
                    }
                    *apuStackX_10[0] = 0x44584f424b434f4c;
                    if (apuStackX_10[0] + 1 != arg1) {
                        section..text(apuStackX_10[0] + 1,arg1,0x10);
                    }
                    apuStackX_10[0][3] = arg2;
                    apuStackX_10[0][4] = arg3;
                    apuStackX_10[0][5] = 0;
                    apuStackX_10[0][6] = iStackX_20;
                    iVar3 = fcn.0001195c();
                    if (iVar3 != 0) {
                        iVar5 = *(iVar3 + 8);
                    }
                    piVar4 = apuStackX_10[0] + 7;
                    *piVar4 = iVar5;
                    puVar1 = *(iVar5 + 8);
                    apuStackX_10[0][8] = puVar1;
                    *puVar1 = piVar4;
                    *(iVar5 + 8) = piVar4;
                    return 0;
                }
                (**(*0x12100 + 0x68))(iStackX_20,iVar6);
            }
            uVar2 = 0x8000000000000009;
        }
        else {
            uVar2 = 0x8000000000000014;
        }
    }
    return uVar2;
}


/* fcn.00011200 @ 0x11200 */

int64_t fcn.00011200(int64_t arg1,int64_t arg2)

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


