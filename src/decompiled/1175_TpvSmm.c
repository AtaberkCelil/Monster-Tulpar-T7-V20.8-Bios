// decompiled by r2ghidra: 1175_TpvSmm.pe32
// functions: 14

/* entry0 @ 0x11230 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    
    fcn.00011290(param_1,param_2);
    *0x12190 = -0x7fffffffffffffff;
    iVar1 = section..text(0x12090);
    if (iVar1 == 0) {
        *0x12190 = 0;
        fcn.000110d0(0x12090,-1);
    }
    iVar1 = *0x12190;
    if (*0x12190 < 0) {
        fcn.00011468();
    }
    return iVar1;
}


/* fcn.000113f0 @ 0x113f0 */

void fcn.000113f0(void)

{
    return;
}


/* fcn.00011290 @ 0x11290 */

void fcn.00011290(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x12078 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x12070 = arg2;
    uStackX_8 = arg1;
    (**(*0x12078 + 0x140))(0x12010,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x12080);
    (**(*0x12078 + 0x140))(0x12020,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x121a0 = fcn.00011438();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x121a0);
    *0x12198 = uStackX_8 >> 5;
    fcn.000114a4();
    puVar4 = fcn.000114a4();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001137c:
            if (puVar4 == NULL) {
                uVar5 = fcn.000111c0();
                fcn.000111b0();
                uVar2 = in(0x1808);
                fcn.00011190(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00011180();
                }
                fcn.00011190(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000111b0();
                }
                else {
                    fcn.000111a0();
                }
                return;
            }
            if ((*0x12030 == *(puVar4 + 4)) && (*0x12038 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001137c;
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
    
    //[00] -r-x section size 4096 named .text
    fcn.000113f0();
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


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011468 @ 0x11468 */

void fcn.00011468(void)

{
    char cVar1;
    
    cVar1 = fcn.000113f4(*0x121a0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001148e. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x12080 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x0001149d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12078 + 0x48))(*0x121a0);
    return;
}


/* fcn.000113f4 @ 0x113f4 */

uint64_t fcn.000113f4(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x12198 != 0) {
        puVar2 = *0x121a0 + 8;
        in_RAX = *0x121a0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x12198);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011438 @ 0x11438 */

ulong fcn.00011438(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12080 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000114a4 @ 0x114a4 */

int64_t fcn.000114a4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12088 == 0) {
        *0x12088 = 0;
        if (*(*0x12070 + 0x68) != 0) {
            piVar2 = *(*0x12070 + 0x70);
            do {
                if ((*0x12000 == *piVar2) && (*0x12008 == piVar2[1])) {
                    *0x12088 = (*(*0x12070 + 0x70))[uVar1 * 3 + 2];
                    return *0x12088;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12070 + 0x68));
        }
    }
    return *0x12088;
}


/* fcn.000111c0 @ 0x111c0 */

uint64_t fcn.000111c0(void)

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


/* fcn.000111b0 @ 0x111b0 */

void fcn.000111b0(void)

{
    return;
}


/* fcn.00011190 @ 0x11190 */

uint64_t fcn.00011190(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011182 @ 0x11182 */

void fcn.00011182(void)

{
    return;
}


/* fcn.000111a0 @ 0x111a0 */

void fcn.000111a0(void)

{
    return;
}


