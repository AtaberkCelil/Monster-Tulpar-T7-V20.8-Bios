// decompiled by r2ghidra: 1325_OemACPIDriverSmm.pe32
// functions: 18

/* entry0 @ 0x112d4 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.00011348(param_1,param_2);
    arg1 = 0x120f0;
    *0x121f0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x120f0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011530(arg1,param_2);
        if ((-1 < iVar1) || (*0x121f0 < 0)) {
            *0x121f0 = iVar1;
        }
        fcn.000110d0(0x120f0,-1);
    }
    iVar1 = *0x121f0;
    if (*0x121f0 < 0) {
        fcn.0001169c();
    }
    return iVar1;
}


/* fcn.00011600 @ 0x11600 */

void fcn.00011600(void)

{
    return;
}


/* fcn.00011348 @ 0x11348 */

void fcn.00011348(int64_t arg1,int64_t arg2)

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
    
    *0x120c8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x120c0 = arg2;
    uStackX_8 = arg1;
    (**(*0x120c8 + 0x140))(0x12050,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x120d0);
    (**(*0x120c8 + 0x140))(0x12060,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x12200 = fcn.0001166c();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8);
    *0x121f8 = uStackX_8 >> 5;
    fcn.000116d8();
    iVar3 = fcn.00011744();
    if (iVar3 == 0) {
        uVar4 = fcn.00011200();
        fcn.000111f0();
        uVar1 = in(0x1808);
        fcn.000111d0(iStackX_18,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000111c0();
        }
        fcn.000111d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000111f0();
        }
        else {
            fcn.000111e0();
        }
    }
    uVar4 = 0;
    piVar6 = *(*0x120d0 + 0xa0);
    if (*(*0x120d0 + 0x98) != 0) {
        do {
            if ((*0x12020 == *piVar6) && (*0x12028 == piVar6[1])) break;
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x120d0 + 0x98));
    }
    if ((*0x120e0 != NULL) || (iVar3 = (**(*0x120c8 + 0x140))(0x12050,0,0x120e0), -1 < iVar3)) {
        (***0x120e0)(*0x120e0,0x120e8);
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
    
    //[00] -r-x section size 4096 named .text
    fcn.00011600();
    *(arg1 + 0xf8) = 0;
    if ((*0x12090 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011530 @ 0x11530 */

int64_t fcn.00011530(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piStackX_8;
    int64_t iStackX_10;
    ulong *puStackX_18;
    ulong uStackX_20;
    uchar auStack_18 [16];
    
    uStackX_20 = 0;
    piStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x120c8 + 0x140))(0x12040,0,&piStackX_8);
    if ((-1 < iVar1) && (iVar1 = (**(*0x120d0 + 0xd0))(0x12070,0,&puStackX_18), -1 < iVar1)) {
        iStackX_10 = -1;
        iVar1 = (**puStackX_18)(puStackX_18,0x114f0,&iStackX_10,auStack_18);
        if (-1 < iVar1) {
            *(*piStackX_8 + 4) = iStackX_10;
            fcn.00011604(piStackX_8,8);
            iVar2 = (**(*0x120d0 + 0xa8))(&uStackX_20,0x12000,0,0x12210);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
        }
    }
    return iVar1;
}


/* fcn.00011604 @ 0x11604 */

void fcn.00011604(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0x12210) {
        fcn.00011180(0x12210,arg1,arg2);
    }
    return;
}


/* fcn.00011180 @ 0x11180 */

int64_t fcn.00011180(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.0001169c @ 0x1169c */

void fcn.0001169c(void)

{
    char cVar1;
    
    cVar1 = fcn.00011628(*0x12200);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000116c2. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x120d0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000116d1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x120c8 + 0x48))(*0x12200);
    return;
}


/* fcn.00011628 @ 0x11628 */

uint64_t fcn.00011628(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x121f8 != 0) {
        puVar2 = *0x12200 + 8;
        in_RAX = *0x12200;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x121f8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001166c @ 0x1166c */

ulong fcn.0001166c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x120d0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000116d8 @ 0x116d8 */

int64_t fcn.000116d8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x120d8 == 0) {
        *0x120d8 = 0;
        if (*(*0x120c0 + 0x68) != 0) {
            piVar2 = *(*0x120c0 + 0x70);
            do {
                if ((*0x12030 == *piVar2) && (*0x12038 == piVar2[1])) {
                    *0x120d8 = (*(*0x120c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x120d8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x120c0 + 0x68));
        }
    }
    return *0x120d8;
}


/* fcn.00011744 @ 0x11744 */

void fcn.00011744(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000116d8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001177b:
            if ((piVar1 == NULL) || ((*0x12080 == *(piVar1 + 4) && (*0x12088 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001177b;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011200 @ 0x11200 */

uint64_t fcn.00011200(void)

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


/* fcn.000111f0 @ 0x111f0 */

void fcn.000111f0(void)

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


/* fcn.000111e0 @ 0x111e0 */

void fcn.000111e0(void)

{
    return;
}


