// decompiled by r2ghidra: 1185_SmmS3SaveState.pe32
// functions: 49

/* entry0 @ 0x11284 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112ac(arg1,arg2);
    iVar1 = fcn.000116a4(arg1,arg2);
    if (iVar1 < 0) {
        fcn.000114ec();
    }
    return iVar1;
}


/* fcn.000112ac @ 0x112ac */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.000112ac(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_48h;
    ulong *puStack_38;
    uchar auStack_30 [8];
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    *0x141c8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x141c0 = arg2;
    uStackX_8 = arg1;
    (**(*0x141c8 + 0x140))(0x140d0,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x141d0);
    (**(*0x141c8 + 0x140))(0x140f0,0,&var_20h);
    uStackX_8 = 0;
    (**(var_20h + 0x18))(var_20h,&uStackX_8,0);
    *0x14398 = fcn.00012d68();
    (**(var_20h + 0x18))(var_20h,&uStackX_8,*0x14398);
    *0x14390 = uStackX_8;
    uStackX_8 = 0;
    *0x14390 = *0x14390 >> 5;
    (**(*(arg2 + 0x60) + 0x140))(0x14030,0,&uStackX_8);
    (**(uStackX_8 + 8))(uStackX_8,0x141e0);
    fcn.00012dd4();
    (**(*0x141e0 + 0xc0))(82000,0x12e94,0x14200);
    (**(*0x141e0 + 0xc0))(0x140e0,0x12eac,0x14210);
    (**(*0x141e0 + 0xc0))(0x140c0,0x12f04,0x141f0);
    iVar5 = fcn.00012e40();
    if (iVar5 == 0) {
        *0x14380 = 0x34365f424b434f4c;
        *0x14388 = 0x14120;
        (**(*0x141e0 + 0x28))(*0x141e0,0x14080,0x14380,0x10);
        *0x14218 = 1;
    }
    puVar6 = fcn.00012dd4();
    do {
        uVar1 = *puVar6;
        uVar10 = uVar1;
        if (uVar1 == 0xffff) {
            puVar6 = NULL;
code_r0x00011475:
            if (puVar6 == NULL) {
                uVar7 = fcn.00011200();
                fcn.000111f0();
                uVar3 = in(0x1808);
                fcn.000111d0(uVar10,0x1808);
                while( true ) {
                    iVar5 = 0x1808;
                    iVar4 = in(0x1808);
                    uVar9 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
                    uVar10 = uVar9;
                    if ((uVar9 >> 0x17 & 1) != 0) break;
                    func_0x000111c0();
                }
                fcn.000111d0(uVar10,0x1808);
                if ((uVar7 >> 9 & 1) == 0) {
                    fcn.000111f0();
                }
                else {
                    fcn.000111e0();
                }
code_r0x000114de:
                uStackX_8 = uVar10;
                iStackX_10 = iVar5;
                iVar5 = fcn.00012ce4();
                cVar2 = (**(iVar5 + 0x30))(0x14090,0x1100000);
                if (cVar2 == '\0') {
                    *0x14160 = 0;
                }
                else {
                    iVar5 = fcn.00012ce4();
                    iVar5 = (**(iVar5 + 0x20))(0x14090,0x30000);
                    if (iVar5 == 0) {
                        var_28h = 0xffffffff;
                        (**(*0x141c8 + 0x28))(1,0,1,&var_28h);
                        iVar5 = var_28h;
                        *0x14228 = 1;
                        iVar8 = fcn.00012ce4();
                        (**(iVar8 + 0x58))(0x14090,0x30000,iVar5);
                        fcn.00011210(iVar5,0x20);
                        (**(*0x141c8 + 0x50))(0x200,8,fcn.000133e8,0,&var_20h);
                        (**(*0x141c8 + 0xa8))(0x14020,var_20h,auStack_30);
                        (**(*0x141c8 + 0x68))(var_20h);
                        *0x14230 = var_20h;
                    }
                    *0x14368 = iVar5;
                    iVar5 = (**(*0x141c8 + 0x140))(0x140d0,0,&puStack_38);
                    if ((((-1 < iVar5) && (iVar5 = (**puStack_38)(puStack_38,&iStackX_10), -1 < iVar5)) &&
                        (iStackX_10 != '\0')) && (iVar5 = (*puStack_38[1])(puStack_38,0x14238), -1 < iVar5)) {
                        iVar5 = fcn.00012ce4();
                        uStackX_8 = (**(iVar5 + 0x20))(0x14090,0x30001);
                        if (uStackX_8 == 0) {
                            (**(*0x14238 + 0x50))(6,0x20,&uStackX_8);
                            uVar10 = uStackX_8;
                            *0x14250 = 1;
                            iVar5 = fcn.00012ce4();
                            (**(iVar5 + 0x58))(0x14090,0x30001,uVar10);
                            fcn.00011210(uStackX_8,0x20);
                            (**(*0x14238 + 0xc0))(0x14040,0x134d8,0x14240);
                            (**(*0x14238 + 0xc0))(0x14010,0x134d8,0x14220);
                        }
                        *0x14370 = uStackX_8;
                        (**(*0x14238 + 0xc0))(0x140a0,0x13478,0x14248);
                    }
                }
                return 0;
            }
            if ((*0x14130 == *(puVar6 + 4)) && (iVar5 = *0x14138, *0x14138 == *(puVar6 + 8))) goto code_r0x000114de;
        }
        else if (uVar1 == 4) goto code_r0x00011475;
        puVar6 = puVar6 + puVar6[1];
    } while( true );
}


/* fcn.000116a4 @ 0x116a4 */

int64_t fcn.000116a4(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t aiStackX_10 [3];
    
    *0x14360 = -0x7fffffffffffffff;
    aiStackX_10[0] = arg1;
    iVar2 = section..text(0x14260);
    if (iVar2 != 0) {
        return *0x14360;
    }
    iVar2 = fcn.00012ce4();
    cVar1 = (**(iVar2 + 0x30))(0x14090);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffffffffffd;
code_r0x00011721:
        if (-1 < *0x14360) goto code_r0x00011732;
    }
    else {
        aiStackX_10[0] = 0;
        iVar2 = (**(*0x141d0 + 0xa8))(aiStackX_10,0x14060,0,0x14100);
        if (iVar2 < 0) goto code_r0x00011721;
    }
    *0x14360 = iVar2;
code_r0x00011732:
    fcn.000110d0(0x14260,-1);
    return *0x14360;
}


/* fcn.000114ec @ 0x114ec */

void fcn.000114ec(void)

{
    char cVar1;
    int64_t iVar2;
    
    if (*0x14160 != '\0') {
        if (*0x14230 != 0) {
            (**(*0x141c8 + 0x70))();
        }
        if (*0x14238 != 0) {
            if (*0x14240 != 0) {
                (**(*0x14238 + 0xc0))(0x14040,0,0x14240);
            }
            if (*0x14220 != 0) {
                (**(*0x14238 + 0xc0))(0x14010,0,0x14220);
            }
            if (*0x14248 != 0) {
                (**(*0x14238 + 0xc0))(0x140a0,0,0x14248);
            }
        }
        if (*0x14228 != '\0') {
            (**(*0x141c8 + 0x30))(*0x14368,1);
            iVar2 = fcn.00012ce4();
            (**(iVar2 + 0x58))(0x14090,0x30000,0);
        }
        if ((*0x14238 != 0) && (*0x14250 != '\0')) {
            (**(*0x14238 + 0x58))(*0x14370);
            iVar2 = fcn.00012ce4();
            (**(iVar2 + 0x58))(0x14090,0x30001,0);
        }
    }
    if (*0x14218 != '\0') {
        (**(*0x141e0 + 0x28))(*0x141e0,0x14080,0,0);
    }
    if (*0x14200 != 0) {
        (**(*0x141e0 + 0xc0))(82000,0,0x14200);
    }
    if (*0x14210 != 0) {
        (**(*0x141e0 + 0xc0))(0x140e0,0,0x14210);
    }
    if (*0x141f0 != 0) {
        (**(*0x141e0 + 0xc0))(0x140c0,0,0x141f0);
    }
    cVar1 = fcn.00012d24(*0x14398);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00012dbe. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x141d0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00012dcd. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x141c8 + 0x48))(*0x14398);
    return;
}


/* fcn.00012d20 @ 0x12d20 */

void fcn.00012d20(void)

{
    return;
}


/* fcn.00012d68 @ 0x12d68 */

ulong fcn.00012d68(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x141d0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012dd4 @ 0x12dd4 */

int64_t fcn.00012dd4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x141e8 == 0) {
        *0x141e8 = 0;
        if (*(*0x141c0 + 0x68) != 0) {
            piVar2 = *(*0x141c0 + 0x70);
            do {
                if ((*0x140b0 == *piVar2) && (*0x140b8 == piVar2[1])) {
                    *0x141e8 = (*(*0x141c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x141e8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x141c0 + 0x68));
        }
    }
    return *0x141e8;
}


/* fcn.00012e40 @ 0x12e40 */

int64_t fcn.00012e40(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*(*0x141e0 + 0x98) != 0) {
        piVar2 = *(*0x141e0 + 0xa0);
        do {
            if ((*piVar2 == *0x14080) && (piVar2[1] == *0x14088)) {
                return (*(*0x141e0 + 0xa0))[uVar1 * 3 + 2];
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x141e0 + 0x98));
    }
    return 0;
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


/* fcn.00012ce4 @ 0x12ce4 */

int64_t fcn.00012ce4(void)

{
    if (*0x141d8 == 0) {
        (**(*0x141c8 + 0x140))(0x14070,0,0x141d8);
    }
    return *0x141d8;
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
    fcn.00012d20();
    *(arg1 + 0xf8) = 0;
    if ((*0x14190 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000138f4 @ 0x138f4 */

int64_t fcn.000138f4(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t auStackX_10 [3];
    
    iVar4 = 0;
    if (*0x14160 != '\0') {
        if (*(*0x14368 + 0x14) == '\0') {
            iVar4 = fcn.0001379c(arg1);
            goto code_r0x000139ab;
        }
        if (*(*0x14368 + 0xe) != '\0') {
            piVar3 = *0x14368;
            if (*(*0x14368 + 0x15) != '\0') {
                auStackX_10[0] = *(*0x14368 + 2);
                arg1_00 = 0x14150;
                fcn.000132b0(0x14150,**0x14368,auStackX_10);
                fcn.00013104(arg1_00,0,**0x14368,auStackX_10[0]);
                piVar3 = *0x14368;
                piVar1 = *0x14368 + 2;
                *(*0x14368 + 0x15) = 0;
                *(piVar3 + 1) = *piVar1 + -3;
            }
            uVar2 = *(piVar3 + 1);
            uVar5 = (arg1 & 0xff) + uVar2;
            if (uVar5 + 3 <= *(piVar3 + 0xc) << 0xc) {
                *(piVar3 + 1) = uVar5;
                iVar4 = uVar2 + *piVar3;
                fcn.00013380();
            }
            goto code_r0x000139ab;
        }
    }
    iVar4 = 0;
code_r0x000139ab:
    return iVar4;
}


/* fcn.00011180 @ 0x11180 */

uint32_t * fcn.00011180(uint32_t *arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + arg3 + -1;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 2;
            puVar3 = puVar3 + 2;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.000139b8 @ 0x139b8 */

void fcn.000139b8(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t arg1_00;
    int aiStackX_10 [6];
    
    if ((*(*0x14368 + 0x14) != '\0') && (*(*0x14368 + 0xe) != '\0')) {
        uVar1 = arg1 - **0x14368;
        arg1_00 = uVar1;
        aiStackX_10[0] = (*0x14368)[1] + 3;
        fcn.00013104(arg1_00,uVar1,**0x14368 + uVar1,aiStackX_10[0] - uVar1);
        fcn.00013104(arg1_00,5,aiStackX_10,4);
    }
    return;
}


/* fcn.00013104 @ 0x13104 */

ulong fcn.00013104(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint32_t *arg1_00;
    uint32_t *puStackX_8;
    
    if (((arg3 == 0) || (arg4 == 0)) || (~arg2 < arg4)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        puStackX_8 = arg1;
        iVar3 = fcn.00012f10(0x14178);
        if (iVar3 == 0) {
            uVar4 = 0x800000000000000e;
        }
        else {
            uVar2 = *(iVar3 + 0x20);
            uVar1 = arg2 + arg4;
            if (uVar2 < uVar1) {
                if ((*(iVar3 + 0x28) & 2) == 0) {
                    return 0x8000000000000005;
                }
                if ((-((uVar2 & 0xfff) != 0) & 0x1000) + (uVar2 & 0xfffffffffffff000) < uVar1) {
                    iVar5 = (**(*0x141e0 + 0x60))(0,6,((uVar1 & 0xfff) != 0) + (uVar1 >> 0xc),&puStackX_8);
                    if (iVar5 < 0) {
                        return 0x8000000000000009;
                    }
                    if ((*(iVar3 + 0x20) != 0) && (puStackX_8 != *(iVar3 + 0x30))) {
                        fcn.00011180(puStackX_8,*(iVar3 + 0x30),*(iVar3 + 0x20));
                    }
                    if (*(iVar3 + 0x20) != 0) {
                        fcn.00011210(*(iVar3 + 0x30),*(iVar3 + 0x20));
                    }
                    (**(*0x141e0 + 0x68))(*(iVar3 + 0x30),(*(iVar3 + 0x20) >> 0xc) + ((*(iVar3 + 0x20) & 0xfff) != 0));
                    *(iVar3 + 0x30) = puStackX_8;
                }
                uVar2 = *(iVar3 + 0x20);
                if ((uVar2 < arg2) && (arg2 - uVar2 != 0)) {
                    fcn.00011210(uVar2 + *(iVar3 + 0x30),arg2 - uVar2);
                }
                *(iVar3 + 0x20) = uVar1;
            }
            arg1_00 = *(iVar3 + 0x30) + arg2;
            if (arg1_00 != arg3) {
                fcn.00011180(arg1_00,arg3,arg4);
            }
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.000121a0 @ 0x121a0 */

ulong fcn.000121a0(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t *arg1_00;
    ulong uVar2;
    uchar auStack_18 [16];
    
    uVar1 = *arg1;
    arg1_00 = fcn.000138f4(CONCAT71(arg1 >> 8,0xb));
    uVar2 = 0;
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        auStack_18[2] = 0xb;
        auStack_18._0_2_ = 7;
        auStack_18._3_8_ = uVar1;
        if (arg1_00 != auStack_18) {
            fcn.00011180(arg1_00,auStack_18,0xb);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar2;
}


/* fcn.00011fc0 @ 0x11fc0 */

uint64_t fcn.00011fc0(int64_t arg1)

{
    int iVar1;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg3;
    uint64_t uVar5;
    uint64_t uVar6;
    char cVar7;
    uint32_t uStackX_8;
    uchar auStack_48 [11];
    int iStack_3d;
    uint uStack_39;
    
    iVar1 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x28);
    uVar5 = *(arg1 + 8) & 0xff;
    uVar3 = 0;
    uVar2 = -(*(arg1 + 0x18) != '\0') & 0x400000;
    uVar6 = (uVar5 << 7 | (uStackX_8 ^ (*arg1 ^ uStackX_8) & 0x7f) & 0x7f) * 2 | uVar2;
    if (*(arg1 + 0x20) == NULL) {
        arg3 = uVar3;
    }
    else {
        arg3 = **(arg1 + 0x20);
    }
    uVar4 = 2;
    if (iVar1 < 8) {
        if (iVar1 < 6) {
            if (iVar1 < 0) {
code_r0x000120c3:
                uVar3 = 0x8000000000000002;
            }
            else {
                if (1 < iVar1) {
                    if (iVar1 < 4) {
                        if (uVar5 != 0) {
                            return 0x8000000000000003;
                        }
                    }
                    else if (5 < iVar1) goto code_r0x000120c3;
                    uVar4 = 1;
                    goto code_r0x00012071;
                }
                if ((uVar2 != 0) || (uVar5 != 0)) {
                    return 0x8000000000000003;
                }
            }
        }
        else {
code_r0x00012071:
            if (arg2 == NULL) goto code_r0x00012170;
            uVar3 = -(arg3 < uVar4) & 0x8000000000000005;
            arg3 = uVar4;
        }
code_r0x000120e6:
        if (-1 < uVar3) {
            if (arg3 < 0xed) {
                cVar7 = arg3 + '\x13';
                arg1_00 = fcn.000138f4(CONCAT71(uVar3 >> 8,cVar7));
                if (arg1_00 != NULL) {
                    auStack_48._0_2_ = 6;
                    uStack_39 = arg3;
                    auStack_48[2] = cVar7;
                    auStack_48._3_8_ = uVar6;
                    iStack_3d = iVar1;
                    if (arg1_00 != auStack_48) {
                        fcn.00011180(arg1_00,auStack_48,0x13);
                    }
                    if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                        fcn.00011180(arg1_00 + 0x13,arg2,arg3);
                    }
                    fcn.000139b8(arg1_00);
                    return 0;
                }
            }
            return 0x8000000000000009;
        }
    }
    else {
        if (9 < iVar1) {
            if (iVar1 == 10) goto code_r0x00012071;
            if (iVar1 != 0xb) goto code_r0x000120c3;
        }
        if ((arg2 != NULL) && (arg3 - 1 < 0x20)) goto code_r0x000120e6;
code_r0x00012170:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00011c4c @ 0x11c4c */

ulong fcn.00011c4c(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uchar auStack_38 [7];
    ulong uStack_31;
    
    iVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    puVar3 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    if (((iVar1 - 3U & 0xfffffff3) == 0) && (iVar1 != 0xf)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        uVar6 = '\x01' << (iVar1 & 3);
        uVar5 = uVar6 * '\x02' + 0xf;
        arg1_00 = fcn.000138f4(uVar5);
        uVar4 = 0;
        if (arg1_00 == NULL) {
            uVar4 = 0x8000000000000009;
        }
        else {
            auStack_38._0_2_ = 5;
            auStack_38[2] = uVar5;
            auStack_38._3_4_ = iVar1;
            uStack_31 = uVar2;
            if (arg1_00 != auStack_38) {
                fcn.00011180(arg1_00,auStack_38,0xf);
            }
            if ((uVar6 != 0) && (arg1_00 + 0xf != puVar3)) {
                fcn.00011180(arg1_00 + 0xf,puVar3,uVar6);
            }
            puVar3 = uVar6 + 0xf + arg1_00;
            if ((uVar6 != 0) && (puVar3 != arg2)) {
                fcn.00011180(puVar3,arg2,uVar6);
            }
            fcn.000139b8(arg1_00);
        }
    }
    return uVar4;
}


/* fcn.00011b34 @ 0x11b34 */

ulong fcn.00011b34(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar3;
    ulong uVar4;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    
    iVar1 = *arg1;
    uVar4 = *(arg1 + 8);
    uVar2 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    if (((iVar1 - 3U & 0xfffffff3) == 0) && (iVar1 != 0xf)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        uVar3 = '\x01' << (iVar1 & 3);
        if ((uVar2 < 0x100) && (arg3 = uVar3 * uVar2, arg3 < 0xed)) {
            uVar3 = uVar2 * uVar3 + 0x13;
            arg1_00 = fcn.000138f4(uVar3);
            if (arg1_00 != NULL) {
                auStack_48._0_2_ = 4;
                uStack_41 = uVar2;
                auStack_48[2] = uVar3;
                auStack_48._3_4_ = iVar1;
                uStack_3d = uVar4;
                if (arg1_00 != auStack_48) {
                    fcn.00011180(arg1_00,auStack_48,0x13);
                }
                if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                    fcn.00011180(arg1_00 + 0x13,arg2,arg3);
                }
                fcn.000139b8(arg1_00);
                return 0;
            }
        }
        uVar4 = 0x8000000000000009;
    }
    return uVar4;
}


/* fcn.00011a3c @ 0x11a3c */

ulong fcn.00011a3c(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint8_t uVar6;
    uchar auStack_38 [7];
    ulong uStack_31;
    
    uVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    puVar3 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    uVar6 = '\x01' << (uVar1 & 3);
    uVar4 = uVar6 * '\x02' + 0xf;
    arg1_00 = fcn.000138f4(uVar4);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        auStack_38._0_2_ = 3;
        auStack_38[2] = uVar4;
        auStack_38._3_4_ = uVar1;
        uStack_31 = uVar2;
        if (arg1_00 != auStack_38) {
            fcn.00011180(arg1_00,auStack_38,0xf);
        }
        if ((uVar6 != 0) && (arg1_00 + 0xf != puVar3)) {
            fcn.00011180(arg1_00 + 0xf,puVar3,uVar6);
        }
        puVar3 = uVar6 + 0xf + arg1_00;
        if ((uVar6 != 0) && (puVar3 != arg2)) {
            fcn.00011180(puVar3,arg2,uVar6);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar5;
}


/* fcn.00011940 @ 0x11940 */

ulong fcn.00011940(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar4;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    
    uVar2 = *(arg1 + 0x10);
    uVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    arg2 = *(arg1 + 0x18);
    uVar4 = '\x01' << (uVar1 & 3);
    if ((uVar2 < 0x100) && (arg3 = uVar4 * uVar2, arg3 < 0xed)) {
        uVar4 = uVar2 * uVar4 + 0x13;
        arg1_00 = fcn.000138f4(uVar4);
        if (arg1_00 != NULL) {
            auStack_48._0_2_ = 2;
            uStack_41 = uVar2;
            auStack_48[2] = uVar4;
            auStack_48._3_4_ = uVar1;
            uStack_3d = uVar3;
            if (arg1_00 != auStack_48) {
                fcn.00011180(arg1_00,auStack_48,0x13);
            }
            if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                fcn.00011180(arg1_00 + 0x13,arg2,arg3);
            }
            fcn.000139b8(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00011848 @ 0x11848 */

ulong fcn.00011848(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint8_t uVar6;
    uchar auStack_38 [7];
    ulong uStack_31;
    
    uVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    puVar3 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    uVar6 = '\x01' << (uVar1 & 3);
    uVar4 = uVar6 * '\x02' + 0xf;
    arg1_00 = fcn.000138f4(uVar4);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        auStack_38._0_2_ = 1;
        auStack_38[2] = uVar4;
        auStack_38._3_4_ = uVar1;
        uStack_31 = uVar2;
        if (arg1_00 != auStack_38) {
            fcn.00011180(arg1_00,auStack_38,0xf);
        }
        if ((uVar6 != 0) && (arg1_00 + 0xf != puVar3)) {
            fcn.00011180(arg1_00 + 0xf,puVar3,uVar6);
        }
        puVar3 = uVar6 + 0xf + arg1_00;
        if ((uVar6 != 0) && (puVar3 != arg2)) {
            fcn.00011180(puVar3,arg2,uVar6);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar5;
}


/* fcn.00011750 @ 0x11750 */

ulong fcn.00011750(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar4;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    
    uVar2 = *(arg1 + 0x10);
    uVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    arg2 = *(arg1 + 0x18);
    uVar4 = '\x01' << (uVar1 & 3);
    if ((uVar2 < 0x100) && (arg3 = uVar4 * uVar2, arg3 < 0xed)) {
        uVar4 = uVar2 * uVar4 + 0x13;
        arg1_00 = fcn.000138f4(uVar4);
        if (arg1_00 != NULL) {
            auStack_48._0_2_ = 0;
            uStack_41 = uVar2;
            auStack_48[2] = uVar4;
            auStack_48._3_4_ = uVar1;
            uStack_3d = uVar3;
            if (arg1_00 != auStack_48) {
                fcn.00011180(arg1_00,auStack_48,0x13);
            }
            if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                fcn.00011180(arg1_00 + 0x13,arg2,arg3);
            }
            fcn.000139b8(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.0001221c @ 0x1221c */

ulong fcn.0001221c(int64_t arg1)

{
    ulong uVar1;
    uint32_t *arg1_00;
    ulong uVar2;
    uchar auStack_18 [16];
    
    uVar1 = *arg1;
    arg1_00 = fcn.000138f4(CONCAT71(arg1 >> 8,0xb));
    uVar2 = 0;
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        auStack_18[2] = 0xb;
        auStack_18._0_2_ = 8;
        auStack_18._3_8_ = uVar1;
        if (arg1_00 != auStack_18) {
            fcn.00011180(arg1_00,auStack_18,0xb);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar2;
}


/* fcn.00012698 @ 0x12698 */

ulong fcn.00012698(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *arg2;
    ulong uVar4;
    uint32_t *arg1_00;
    uint32_t *puVar5;
    ulong uVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    uchar auStack_58 [7];
    ulong uStack_51;
    ushort uStack_49;
    ulong uStack_47;
    
    uVar3 = *(arg1 + 0x10);
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    puVar5 = *(arg1 + 0x18);
    arg2 = *(arg1 + 0x20);
    uVar4 = *(arg1 + 0x28);
    if (((iVar2 - 3U & 0xfffffff3) == 0) && (iVar2 != 0xf)) {
        uVar6 = 0x8000000000000002;
    }
    else {
        uVar7 = '\x01' << (iVar2 & 3);
        uVar8 = uVar7 * '\x02' + 0x19;
        arg1_00 = fcn.000138f4(uVar8);
        uVar6 = 0;
        if (arg1_00 == NULL) {
            uVar6 = 0x8000000000000009;
        }
        else {
            auStack_58._0_2_ = 0x10;
            auStack_58[2] = uVar8;
            auStack_58._3_4_ = iVar2;
            uStack_51 = uVar3;
            uStack_49 = uVar1;
            uStack_47 = uVar4;
            if (arg1_00 != auStack_58) {
                fcn.00011180(arg1_00,auStack_58,0x19);
            }
            if ((uVar7 != 0) && (arg1_00 + 0x19 != puVar5)) {
                fcn.00011180(arg1_00 + 0x19,puVar5,uVar7);
            }
            puVar5 = uVar7 + 0x19 + arg1_00;
            if ((uVar7 != 0) && (puVar5 != arg2)) {
                fcn.00011180(puVar5,arg2,uVar7);
            }
            fcn.000139b8(arg1_00);
        }
    }
    return uVar6;
}


/* fcn.00012568 @ 0x12568 */

ulong fcn.00012568(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uchar auStack_48 [7];
    ulong uStack_41;
    ulong uStack_39;
    
    uVar2 = *(arg1 + 0x20);
    iVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    puVar4 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    if (((iVar1 - 3U & 0xfffffff3) == 0) && (iVar1 != 0xf)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar6 = '\x01' << (iVar1 & 3);
        uVar7 = uVar6 * '\x02' + 0x17;
        arg1_00 = fcn.000138f4(uVar7);
        uVar5 = 0;
        if (arg1_00 == NULL) {
            uVar5 = 0x8000000000000009;
        }
        else {
            auStack_48._0_2_ = 0xf;
            auStack_48[2] = uVar7;
            auStack_48._3_4_ = iVar1;
            uStack_41 = uVar3;
            uStack_39 = uVar2;
            if (arg1_00 != auStack_48) {
                fcn.00011180(arg1_00,auStack_48,0x17);
            }
            if ((uVar6 != 0) && (arg1_00 + 0x17 != puVar4)) {
                fcn.00011180(arg1_00 + 0x17,puVar4,uVar6);
            }
            puVar4 = uVar6 + 0x17 + arg1_00;
            if ((uVar6 != 0) && (puVar4 != arg2)) {
                fcn.00011180(puVar4,arg2,uVar6);
            }
            fcn.000139b8(arg1_00);
        }
    }
    return uVar5;
}


/* fcn.00012298 @ 0x12298 */

ulong fcn.00012298(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong uVar2;
    uint32_t *arg2_00;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uchar auStack_58 [7];
    ulong uStack_51;
    ulong uStack_49;
    uint64_t uStack_41;
    
    uVar2 = *(arg1 + 8);
    uVar1 = *arg1;
    puVar3 = *(arg1 + 0x10);
    arg2_00 = *(arg1 + 0x18);
    uVar6 = *(arg1 + 0x20) / 10;
    if (*(arg1 + 0x20) != uVar6 * 10) {
        uVar6 = uVar6 + 1;
    }
    uVar7 = '\x01' << (uVar1 & 3);
    uVar4 = uVar7 * '\x02' + 0x1f;
    arg1_00 = fcn.000138f4(uVar4);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        auStack_58._0_2_ = 0xe;
        uStack_49 = 1;
        auStack_58[2] = uVar4;
        auStack_58._3_4_ = uVar1;
        uStack_51 = uVar2;
        uStack_41 = uVar6;
        if ((uVar7 != 0) && (arg1_00 + 0x1f != puVar3)) {
            fcn.00011180(arg1_00 + 0x1f,puVar3,uVar7);
        }
        puVar3 = uVar7 + 0x1f + arg1_00;
        if ((uVar7 != 0) && (puVar3 != arg2_00)) {
            fcn.00011180(puVar3,arg2_00,uVar7);
        }
        if (arg1_00 != auStack_58) {
            fcn.00011180(arg1_00,auStack_58,0x1f);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar5;
}


/* fcn.0001245c @ 0x1245c */

ulong fcn.0001245c(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    uint8_t uVar5;
    ulong uVar6;
    uint8_t uVar7;
    uchar auStack_48 [7];
    ulong uStack_41;
    ulong uStack_39;
    
    uVar2 = *(arg1 + 0x20);
    uVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    puVar4 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    uVar7 = '\x01' << (uVar1 & 3);
    uVar5 = uVar7 * '\x02' + 0x17;
    arg1_00 = fcn.000138f4(uVar5);
    uVar6 = 0;
    if (arg1_00 == NULL) {
        uVar6 = 0x8000000000000009;
    }
    else {
        auStack_48._0_2_ = 0xd;
        auStack_48[2] = uVar5;
        auStack_48._3_4_ = uVar1;
        uStack_41 = uVar3;
        uStack_39 = uVar2;
        if (arg1_00 != auStack_48) {
            fcn.00011180(arg1_00,auStack_48,0x17);
        }
        if ((uVar7 != 0) && (arg1_00 + 0x17 != puVar4)) {
            fcn.00011180(arg1_00 + 0x17,puVar4,uVar7);
        }
        puVar4 = uVar7 + 0x17 + arg1_00;
        if ((uVar7 != 0) && (puVar4 != arg2)) {
            fcn.00011180(puVar4,arg2,uVar7);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar6;
}


/* fcn.00011e90 @ 0x11e90 */

ulong fcn.00011e90(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uchar auStack_48 [7];
    ulong uStack_41;
    ushort uStack_39;
    
    uVar3 = *(arg1 + 0x10);
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    puVar4 = *(arg1 + 0x18);
    arg2 = *(arg1 + 0x20);
    if (((iVar2 - 3U & 0xfffffff3) == 0) && (iVar2 != 0xf)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar7 = '\x01' << (iVar2 & 3);
        uVar6 = uVar7 * '\x02' + 0x11;
        arg1_00 = fcn.000138f4(uVar6);
        uVar5 = 0;
        if (arg1_00 == NULL) {
            uVar5 = 0x8000000000000009;
        }
        else {
            auStack_48._0_2_ = 0xc;
            auStack_48[2] = uVar6;
            auStack_48._3_4_ = iVar2;
            uStack_41 = uVar3;
            uStack_39 = uVar1;
            if (arg1_00 != auStack_48) {
                fcn.00011180(arg1_00,auStack_48,0x11);
            }
            if ((uVar7 != 0) && (arg1_00 + 0x11 != puVar4)) {
                fcn.00011180(arg1_00 + 0x11,puVar4,uVar7);
            }
            puVar4 = uVar7 + 0x11 + arg1_00;
            if ((uVar7 != 0) && (puVar4 != arg2)) {
                fcn.00011180(puVar4,arg2,uVar7);
            }
            fcn.000139b8(arg1_00);
        }
    }
    return uVar5;
}


/* fcn.00011d60 @ 0x11d60 */

ulong fcn.00011d60(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar4;
    ulong uVar5;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    ushort uStack_35;
    
    uVar5 = *(arg1 + 0x10);
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    uVar3 = *(arg1 + 0x18);
    arg2 = *(arg1 + 0x20);
    if (((iVar2 - 3U & 0xfffffff3) == 0) && (iVar2 != 0xf)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar4 = '\x01' << (iVar2 & 3);
        if ((uVar3 < 0x100) && (arg3 = uVar4 * uVar3, arg3 < 0xeb)) {
            uVar4 = uVar3 * uVar4 + 0x15;
            arg1_00 = fcn.000138f4(uVar4);
            if (arg1_00 != NULL) {
                auStack_48._0_2_ = 0xb;
                uStack_41 = uVar3;
                auStack_48[2] = uVar4;
                auStack_48._3_4_ = iVar2;
                uStack_3d = uVar5;
                uStack_35 = uVar1;
                if (arg1_00 != auStack_48) {
                    fcn.00011180(arg1_00,auStack_48,0x15);
                }
                if ((arg3 != 0) && (arg1_00 + 0x15 != arg2)) {
                    fcn.00011180(arg1_00 + 0x15,arg2,arg3);
                }
                fcn.000139b8(arg1_00);
                return 0;
            }
        }
        uVar5 = 0x8000000000000009;
    }
    return uVar5;
}


/* fcn.000123cc @ 0x123cc */

ulong fcn.000123cc(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t *arg1_00;
    ulong uVar3;
    uchar auStack_28 [11];
    ulong uStack_1d;
    
    uVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    arg1_00 = fcn.000138f4(CONCAT71(arg1 >> 8,0x13));
    uVar3 = 0;
    if (arg1_00 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        auStack_28[2] = 0x13;
        auStack_28._0_2_ = 9;
        auStack_28._3_8_ = uVar1;
        uStack_1d = uVar2;
        if (arg1_00 != auStack_28) {
            fcn.00011180(arg1_00,auStack_28,0x13);
        }
        fcn.000139b8(arg1_00);
    }
    return uVar3;
}


/* fcn.00013a0c @ 0x13a0c */

ulong fcn.00013a0c(uint32_t arg1,int64_t arg2)

{
    uint32_t *arg1_00;
    uint in_register_0000000c;
    char cVar1;
    uchar auStackX_18 [8];
    
    if (arg1 < 0xf9) {
        cVar1 = arg1 + '\a';
        arg1_00 = fcn.000138f4(CONCAT71(CONCAT44(in_register_0000000c,arg1) >> 8,cVar1));
        if (arg1_00 != NULL) {
            auStackX_18._0_2_ = 10;
            auStackX_18[2] = cVar1;
            auStackX_18._3_4_ = arg1;
            if (arg1_00 != auStackX_18) {
                fcn.00011180(arg1_00,auStackX_18,7);
            }
            if ((arg1 != 0) && (arg1_00 + 7 != arg2)) {
                fcn.00011180(arg1_00 + 7,arg2,arg1);
            }
            fcn.000139b8(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00013b90 @ 0x13b90 */

ulong fcn.00013b90(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t *arg1_00;
    uint32_t *arg2_00;
    uint32_t *arg2_01;
    uint64_t arg3;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int16_t iStackX_10;
    uint8_t uStackX_12;
    uint32_t *apuStackX_18 [2];
    uint32_t var_368h;
    int64_t var_370h;
    uint32_t auStack_438 [256];
    
    bVar2 = false;
    bVar1 = false;
    if (arg2 == 0) {
        puVar6 = NULL;
    }
    else {
        puVar6 = *arg2;
    }
    iVar3 = fcn.000138f4(0);
    if (iVar3 == 0) {
        uVar4 = 0x8000000000000009;
    }
    else {
        arg2_00 = **0x14368 + 0xd;
        puVar5 = (*0x14368)[2] + **0x14368;
        arg1_00 = *0x14368;
        arg2_01 = arg2_00;
        apuStackX_18[0] = arg2_00;
        if (arg2_00 < puVar5) {
            do {
                if (&iStackX_10 != arg2_00) {
                    arg1_00 = &iStackX_10;
                    fcn.00011180(arg1_00,arg2_00,7);
                }
                if (puVar6 != NULL) {
                    bVar1 = bVar2;
                    if (puVar6 == arg2_00) {
                        bVar2 = true;
                        bVar1 = true;
                    }
                }
                if (iStackX_10 != 0xff) {
                    arg2_01 = arg2_00;
                }
                arg2_00 = arg2_00 + uStackX_12;
            } while (arg2_00 < puVar5);
            apuStackX_18[0] = arg2_00;
        }
        if ((puVar6 == NULL) || (bVar1)) {
            if (&iStackX_10 != arg2_01) {
                arg1_00 = &iStackX_10;
                fcn.00011180(arg1_00,arg2_01,7);
            }
            arg3 = uStackX_12;
            if ((arg3 != 0) && (auStack_438 != arg2_01)) {
                arg1_00 = auStack_438;
                fcn.00011180(arg1_00,arg2_01,arg3);
            }
            fcn.00013ab4(CONCAT71(arg1_00 >> 8,uStackX_12),puVar6,CONCAT71(arg3 >> 8,arg1),apuStackX_18);
            puVar6 = apuStackX_18[0];
            if ((uStackX_12 != 0) && (apuStackX_18[0] != auStack_438)) {
                fcn.00011180(apuStackX_18[0],auStack_438,uStackX_12);
            }
            fcn.000139b8(puVar6);
            if (arg2 != 0) {
                *arg2 = puVar6;
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000002;
        }
    }
    return uVar4;
}


/* fcn.00013d34 @ 0x13d34 */

ulong fcn.00013d34(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg1_00;
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    uchar auStack_28 [16];
    
    uVar3 = arg3;
    if (uVar3 < 0xf9) {
        cVar2 = arg3 + '\a';
        arg1_00 = fcn.000138f4(CONCAT71(arg1 >> 8,cVar2));
        if (arg1_00 != NULL) {
            auStack_28._0_2_ = 0xfe;
            auStack_28[2] = cVar2;
            auStack_28._3_4_ = uVar3;
            if (arg1_00 != auStack_28) {
                fcn.00011180(arg1_00,auStack_28,7);
            }
            if ((uVar3 != 0) && (arg1_00 + 7 != arg4)) {
                fcn.00011180(arg1_00 + 7,arg4,arg3 & 0xffffffff);
            }
            fcn.000139b8(arg1_00);
            uVar1 = fcn.00013b90(CONCAT71(arg1_00 >> 8,arg1),arg2);
            return uVar1;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00012d24 @ 0x12d24 */

uint64_t fcn.00012d24(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x14390 != 0) {
        puVar2 = *0x14398 + 8;
        in_RAX = *0x14398;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x14390);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012f10 @ 0x12f10 */

int64_t * fcn.00012f10(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = fcn.00012e40();
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


/* fcn.00011210 @ 0x11210 */

int64_t fcn.00011210(int64_t arg1,int64_t arg2)

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


/* fcn.00013380 @ 0x13380 */

int64_t fcn.00013380(void)

{
    int64_t iVar1;
    uint uStackX_8;
    
    iVar1 = **0x14368;
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        uStackX_8._2_1_ = 3;
        uStackX_8._0_2_ = 0xff;
        if (*(*0x14368 + 1) + iVar1 != &uStackX_8) {
            fcn.00011180(*(*0x14368 + 1) + iVar1,&uStackX_8,3);
        }
        *(**0x14368 + 5) = (*0x14368)[1] + 3;
    }
    return iVar1;
}


/* fcn.00012f58 @ 0x12f58 */

ulong fcn.00012f58(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puStackX_8;
    uint32_t *puStackX_20;
    int64_t var_30h;
    int64_t var_48h;
    
    iVar5 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puStackX_8 = fcn.00012f10(arg1);
        if (puStackX_8 == NULL) {
            iVar6 = (arg3 >> 0xc) + ((arg3 & 0xfffU) != 0);
            iVar3 = (**(*0x141e0 + 0x60))(0,6,iVar6,&puStackX_20);
            if (-1 < iVar3) {
                iVar3 = (**(*0x141e0 + 0x50))(6,0x48,&puStackX_8);
                if (-1 < iVar3) {
                    if (puStackX_20 != arg2) {
                        fcn.00011180(puStackX_20,arg2,arg3);
                    }
                    *puStackX_8 = 0x44584f424b434f4c;
                    if (puStackX_8 + 1 != arg1) {
                        fcn.00011180(puStackX_8 + 1,arg1,0x10);
                    }
                    puStackX_8[3] = arg2;
                    puStackX_8[4] = arg3;
                    puStackX_8[5] = 0;
                    puStackX_8[6] = puStackX_20;
                    iVar3 = fcn.00012e40();
                    if (iVar3 != 0) {
                        iVar5 = *(iVar3 + 8);
                    }
                    piVar4 = puStackX_8 + 7;
                    *piVar4 = iVar5;
                    puVar1 = *(iVar5 + 8);
                    puStackX_8[8] = puVar1;
                    *puVar1 = piVar4;
                    *(iVar5 + 8) = piVar4;
                    return 0;
                }
                (**(*0x141e0 + 0x68))(puStackX_20,iVar6);
            }
            uVar2 = 0x8000000000000009;
        }
        else {
            uVar2 = 0x8000000000000014;
        }
    }
    return uVar2;
}


/* fcn.000130c8 @ 0x130c8 */

ulong fcn.000130c8(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00012f10(arg1);
    if (iVar1 == 0) {
        uVar2 = 0x800000000000000e;
    }
    else if ((*(iVar1 + 0x28) & 2) == 0) {
        *(iVar1 + 0x28) = 1;
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.000133e8 @ 0x133e8 */

void fcn.000133e8(void)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uchar auStackX_18 [16];
    
    iVar3 = (**(*0x141c8 + 0x140))(0x14020,0,auStackX_18);
    if ((-1 < iVar3) && (*(*0x14368 + 0x14) == '\0')) {
        fcn.00013380();
        piVar2 = *0x14368;
        puVar1 = *0x14368 + 0xc;
        *(*0x14368 + 0x14) = 1;
        fcn.00012f58(0x14178,*piVar2,*puVar1 << 0xc);
        fcn.000130c8(0x14178);
        fcn.00012f58(0x14168,*0x14368,8);
        fcn.000130c8(0x14168);
    }
    return;
}


/* fcn.000132b0 @ 0x132b0 */

ulong fcn.000132b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    if (arg1 != 0) {
        if (arg2 == 0) {
            if (arg3 == 0) {
code_r0x000132e9:
                iVar3 = fcn.00012f10(arg1);
                if (iVar3 == 0) {
                    return 0x800000000000000e;
                }
                if ((((*(iVar3 + 0x28) & 2) != 0) && (*0x141f8 != '\0')) && (*0x14208 == '\0')) {
                    return 0x800000000000000f;
                }
                if (arg2 == 0) {
                    if ((*(iVar3 + 0x28) & 1) == 0) {
                        return 0x8000000000000008;
                    }
                    arg2 = *(iVar3 + 0x18);
                }
                if ((arg3 != 0) && (uVar1 = *(iVar3 + 0x20), uVar2 = *arg3, *arg3 = uVar1, uVar2 < uVar1)) {
                    return 0x8000000000000005;
                }
                if ((*(iVar3 + 0x20) != 0) && (arg2 != *(iVar3 + 0x30))) {
                    fcn.00011180(arg2,*(iVar3 + 0x30),*(iVar3 + 0x20));
                }
                return 0;
            }
        }
        else if (arg3 != 0) goto code_r0x000132e9;
    }
    return 0x8000000000000002;
}


/* fcn.0001379c @ 0x1379c */

int64_t fcn.0001379c(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    uint32_t *puStackX_10;
    uint32_t *puStackX_18;
    int64_t var_38h;
    uint32_t var_40h;
    
    puStackX_10 = **0x14368;
    piVar6 = *0x14368;
    if (puStackX_10 == NULL) {
        puStackX_10 = 0xffffffff;
        iVar3 = (**(*0x141c8 + 0x28))(1,0,6,&puStackX_10);
        piVar6 = *0x14368;
        if (-1 < iVar3) {
            *(puStackX_10 + 5) = 0;
            *puStackX_10 = 0xaa;
            *(puStackX_10 + 2) = 0xd;
            *(puStackX_10 + 3) = 1;
            *(piVar6 + 1) = 0xd;
            *piVar6 = puStackX_10;
            *(piVar6 + 0xc) = 6;
            goto code_r0x00013835;
        }
code_r0x000137fa:
        iVar3 = 0;
    }
    else {
code_r0x00013835:
        iVar1 = *(piVar6 + 0xc);
        uVar2 = *(piVar6 + 1);
        uVar4 = iVar1 - 4;
        uVar5 = arg1 + uVar2;
        if (uVar4 << 0xc < uVar5 + 3) {
            puStackX_18 = 0xffffffff;
            iVar3 = (**(*0x141c8 + 0x28))(1,0,uVar4 + 6,&puStackX_18);
            if (iVar3 < 0) goto code_r0x000137fa;
            if ((uVar2 != 0) && (puStackX_18 != puStackX_10)) {
                fcn.00011180(puStackX_18,puStackX_10,uVar2);
            }
            (**(*0x141c8 + 0x30))(puStackX_10,*(*0x14368 + 0xc));
            piVar6 = *0x14368;
            **0x14368 = puStackX_18;
            *(piVar6 + 0xc) = iVar1 + 2;
        }
        *(piVar6 + 1) = uVar5;
        iVar3 = uVar2 + *piVar6;
    }
    return iVar3;
}


/* fcn.00013ab4 @ 0x13ab4 */

void fcn.00013ab4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint uStackX_10;
    
    iVar2 = **0x14368;
    uVar3 = (*0x14368)[1] - (arg1 & 0xff);
    if (arg2 == 0) {
        if (arg3 == '\0') {
            *arg4 = uVar3 + iVar2;
        }
        else {
            iVar5 = uVar3 - 0xd;
            puVar4 = iVar2 + 0xd + (arg1 & 0xffU);
            puVar1 = iVar2 + 0xd;
            if ((iVar5 != 0) && (puVar4 != puVar1)) {
                fcn.00011180(puVar4,puVar1,iVar5);
            }
            *arg4 = puVar1;
        }
    }
    else {
        iVar5 = arg2 - iVar2;
        if (arg3 == '\0') {
            if (&uStackX_10 != arg2) {
                fcn.00011180(&uStackX_10,arg2,7);
            }
            iVar5 = iVar5 + uStackX_10._2_1_;
        }
        puVar1 = iVar5 + iVar2;
        puVar4 = (arg1 & 0xffU) + iVar5 + iVar2;
        if ((uVar3 - iVar5 != 0) && (puVar4 != puVar1)) {
            fcn.00011180(puVar4,puVar1,uVar3 - iVar5);
        }
        *arg4 = puVar1;
    }
    return;
}


