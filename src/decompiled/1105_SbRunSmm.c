// decompiled by r2ghidra: 1105_SbRunSmm.pe32
// functions: 40

/* entry0 @ 0x11340 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000113c8(arg1,arg2);
    *0x134a0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x133a0);
    if (iVar1 == 0) {
        iVar1 = fcn.000118ec(arg1,arg2);
        if ((-1 < iVar1) || (*0x134a0 < 0)) {
            *0x134a0 = iVar1;
        }
        fcn.000110d0(0x133a0,-1);
    }
    iVar1 = *0x134a0;
    if (*0x134a0 < 0) {
        fcn.00011a84();
    }
    return iVar1;
}


/* fcn.00011a0c @ 0x11a0c */

void fcn.00011a0c(void)

{
    return;
}


/* fcn.000113c8 @ 0x113c8 */

void fcn.000113c8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x132d8 = *(arg2 + 0x60);
    *0x132e0 = *(arg2 + 0x58);
    iStackX_10 = 0;
    *0x132d0 = arg2;
    uStackX_8 = arg1;
    (**(*0x132d8 + 0x140))(0x13090,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x132e8);
    (**(*0x132d8 + 0x140))(0x130c0,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x134b8 = fcn.00011a54();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x134b8);
    *0x134b0 = uStackX_8 >> 5;
    fcn.00011ac0();
    iVar4 = fcn.00011b2c();
    if (iVar4 == 0) {
        cVar1 = fcn.00012b80();
        uVar2 = in(0x1808);
        fcn.00011250(aiStackX_18[0],0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x00011240();
        }
        fcn.00011250(uVar6,0x1808);
        if (cVar1 == '\0') {
            fcn.000112d0();
        }
        else {
            fcn.000112c0();
        }
    }
    uVar7 = 0;
    if (*(*0x132e8 + 0x98) != 0) {
        piVar5 = *(*0x132e8 + 0xa0);
        do {
            if ((*0x13050 == *piVar5) && (*0x13058 == piVar5[1])) {
                iVar4 = (*(*0x132e8 + 0xa0))[uVar7 * 3 + 2];
                if (iVar4 != 0) {
                    *0x132e0 = iVar4;
                }
                break;
            }
            uVar7 = uVar7 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar7 < *(*0x132e8 + 0x98));
    }
    if (*0x132f8 == NULL) {
        noname_0 = 0x13090;
        iVar4 = (**(*0x132d8 + 0x140))(0x13090,0,0x132f8);
        if (iVar4 < 0) goto code_r0x00011589;
    }
    noname_0 = *0x132f8;
    (***0x132f8)(*0x132f8,0x13300);
code_r0x00011589:
    fcn.00012934(noname_0,arg2);
    //WARNING: Could not recover jumptable at 0x000115af. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x132e8 + 0xd0))(0x13060,0,0x13378);
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
    
    //[00] -r-x section size 8192 named .text
    fcn.00011a0c();
    *(arg1 + 0xf8) = 0;
    if ((*0x13210 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000118ec @ 0x118ec */

int64_t fcn.000118ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x13358 == 0) {
        *0x13340 = *(arg2 + 0x60);
        *0x13308 = *(arg2 + 0x58);
        *0x13358 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x13358 == 0) {
        *0x13340 = *(arg2 + 0x60);
        *0x13308 = *(arg2 + 0x58);
        *0x13358 = arg2;
    }
    iVar1 = (**(*0x13340 + 0x140))(0x131f0,0,0x13348);
    if (((-1 < iVar1) && ((***0x13348)(*0x13348,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x13348)[1])(*0x13348,0x13310), -1 < iVar1)) {
        iVar1 = fcn.00011da4();
        *0x13318 = 1;
        if (iVar1 != 0) {
            *0x13308 = iVar1;
        }
        *0x13328 = 0;
        fcn.00011bc4();
        fcn.00011cc0();
        *0x13328 = 1;
        iVar1 = fcn.000117ec(arg1,arg2);
    }
    return iVar1;
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


/* fcn.00011a84 @ 0x11a84 */

void fcn.00011a84(void)

{
    char cVar1;
    
    cVar1 = fcn.00011a10(*0x134b8);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011aaa. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x132e8 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011ab9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x132d8 + 0x48))(*0x134b8);
    return;
}


/* fcn.00011a10 @ 0x11a10 */

uint64_t fcn.00011a10(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x134b0 != 0) {
        puVar2 = *0x134b8 + 8;
        in_RAX = *0x134b8;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x134b0);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011a54 @ 0x11a54 */

ulong fcn.00011a54(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x132e8 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011ac0 @ 0x11ac0 */

int64_t fcn.00011ac0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x132f0 == 0) {
        *0x132f0 = 0;
        if (*(*0x132d0 + 0x68) != 0) {
            piVar2 = *(*0x132d0 + 0x70);
            do {
                if ((*0x13070 == *piVar2) && (*0x13078 == piVar2[1])) {
                    *0x132f0 = (*(*0x132d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x132f0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x132d0 + 0x68));
        }
    }
    return *0x132f0;
}


/* fcn.00011b2c @ 0x11b2c */

void fcn.00011b2c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011ac0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011b63:
            if ((piVar1 == NULL) || ((*0x131c0 == *(piVar1 + 4) && (*0x131c8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011b63;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00012b80 @ 0x12b80 */

uint8_t fcn.00012b80(void)

{
    unkuint7 extraout_RAX;
    
    fcn.000112e0();
    fcn.000112d0();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.000112e0 @ 0x112e0 */

uint64_t fcn.000112e0(void)

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


/* fcn.000112d0 @ 0x112d0 */

void fcn.000112d0(void)

{
    return;
}


/* fcn.00011250 @ 0x11250 */

uint64_t fcn.00011250(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011242 @ 0x11242 */

void fcn.00011242(void)

{
    return;
}


/* fcn.000112c0 @ 0x112c0 */

void fcn.000112c0(void)

{
    return;
}


/* fcn.00012934 @ 0x12934 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00012934(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    char cVar2;
    int64_t iVar3;
    int16_t *piVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t iVar9;
    int16_t *piVar10;
    bool bVar11;
    uint32_t uStack_38;
    ushort uStack_34;
    uchar uStack_32;
    uchar uStack_31;
    uint uStack_30;
    ushort uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    int64_t var_20h;
    int32_t var_bp_18h;
    int16_t var_14h;
    int8_t var_12h;
    int64_t var_bp_10h;
    
    bVar11 = false;
    if (*0x13358 == 0) {
        *0x13340 = *(arg1 + 0x60);
        *0x13308 = *(arg1 + 0x58);
        *0x13358 = arg1;
    }
    fcn.00011c4c();
    fcn.000111e0(&uStack_38,0x10,0);
    iVar3 = fcn.00012c58();
    piVar6 = NULL;
    (**(iVar3 + 0x10))(4);
    piVar4 = fcn.00011b7c();
    do {
        iVar1 = *piVar4;
        while( true ) {
            if (iVar1 == -1) goto code_r0x000129eb;
            piVar4 = piVar4 + piVar4[1];
            if (*piVar4 == 4) break;
            iVar1 = *piVar4;
        }
        piVar6 = piVar4 + 4;
        piVar10 = piVar4;
        iVar3 = fcn.00011df8(piVar6,0x13010);
    } while (iVar3 != 0);
    bVar11 = piVar10[0xc] == '\0';
code_r0x000129eb:
    uVar7 = CONCAT71(piVar6 >> 8,0xd);
    uVar5 = fcn.00011fc0(uVar7);
    if ((uVar5 & 0x80) == 0) {
        bVar11 = true;
    }
    if (bVar11) {
        uVar7 = 0x80000002;
        fcn.00012ae0(0x80000002,0x61000);
        fcn.00012058();
    }
    fcn.000121b8(CONCAT71(uVar7 >> 8,1));
    iVar9 = 0;
    iVar3 = fcn.000121f8(&uStack_38,0);
    if (((-1 < iVar3) && (cVar2 = fcn.000120f0(&uStack_38,iVar9), cVar2 != '\0')) && (!bVar11)) {
        return iVar3;
    }
    uVar8 = 0x300000a;
    uVar7 = 0x40000002;
    fcn.00012ae0(0x40000002,0x300000a);
    iVar9 = CONCAT71(uVar8 >> 8,0x26);
    fcn.00012014(CONCAT71(uVar7 >> 8,10),iVar9);
    uStack_2a = 0;
    uStack_2c = 0x7ff;
    uStack_30 = 0;
    _var_bp_18h = CONCAT17(uStack_29,0x7ff00000000);
    var_20h = CONCAT17(uStack_31,uStack_38);
    cVar2 = fcn.000120f0(&var_20h,iVar9);
    if (cVar2 == '\0') {
        uStack_38 = 0x10107e5;
    }
    else {
        uStack_34 = 0;
        uStack_32 = 0;
    }
    cVar2 = fcn.000120f0(&uStack_38,iVar9);
    if (cVar2 == '\0') {
        uStack_34 = 0;
        uStack_32 = 0;
        uStack_38 = 0x10107e5;
    }
    fcn.000123e8(&uStack_38);
    return iVar3;
}


/* fcn.00011da4 @ 0x11da4 */

ulong fcn.00011da4(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x13310 != 0) {
        iVar2 = *(*0x13310 + 0xa0);
        for (iVar3 = *(*0x13310 + 0x98); iVar3 != 0; iVar3 = iVar3 + -1) {
            iVar1 = fcn.00011df8(iVar2,0x13200);
            if (iVar1 == 0) {
                return *(iVar2 + 0x10);
            }
            iVar2 = iVar2 + 0x18;
        }
    }
    return 0;
}


/* fcn.00011bc4 @ 0x11bc4 */

ulong fcn.00011bc4(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x13318 == '\0') {
        if (*0x13338 == 0) {
            if (*0x13328 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x13340 + 0x140))(0x131d0,0,0x13338);
        }
    }
    else if (*0x13320 == 0) {
        if ((*0x13328 == '\0') && (*0x13310 != 0)) {
    //WARNING: Could not recover jumptable at 0x00011c03. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x13310 + 0xd0))(0x131e0,0,0x13320);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011cc0 @ 0x11cc0 */

int64_t fcn.00011cc0(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x13318 == '\0') {
        if (*0x13350 == 0) {
            if (*0x13328 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x13340 + 0x18))(0x1f);
            (**(*0x13340 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x13340 + 0x140))(0x13020,0,0x13350);
            if (iVar1 < 0) {
                *0x13350 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x13330 == 0) {
        if (*0x13310 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x13310 + 0xd0))(0x13040,0,0x13330);
        if (iVar1 < 0) {
            *0x13330 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.000117ec @ 0x117ec */

int64_t fcn.000117ec(void)

{
    int64_t iVar1;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_28h_2;
    int64_t var_20h_2;
    int64_t var_18h;
    int64_t var_10h;
    
    var_20h = 0;
    var_28h = 0;
    var_30h = 0xbb;
    *(*0x13308 + 0x68) = 0x11e6c;
    *(*0x13308 + 0x18) = fcn.000121f8;
    *(*0x13308 + 0x20) = fcn.000123e8;
    *(*0x13308 + 0x28) = 0x12604;
    *(*0x13308 + 0x30) = 0x127b8;
    iVar1 = (**(*0x13310 + 0xd0))(0x130d0,0,&var_20h);
    if (-1 < iVar1) {
        (**var_20h)(var_20h,0x115b8,&var_30h,&var_28h);
        var_28h_2 = 0;
        var_18h = 0;
        var_20h_2 = 0xb3;
        var_10h = 0xb4;
        (**var_20h)(var_20h,0x117bc,&var_20h_2,&var_28h_2);
        (**var_20h)(var_20h,0x117d4,&var_10h,&var_18h);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00011df8 @ 0x11df8 */

int64_t fcn.00011df8(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1 = arg1 & 7;
    piVar2 = piVar1;
    if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
        iVar3 = 8 - arg1;
        for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 1;
            iVar3 = iVar3 + -1;
        }
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
        arg2 = arg2 + 8;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00012ba4 @ 0x12ba4 */

ulong fcn.00012ba4(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    uVar1 = in(0x1808);
    uVar6 = uVar1;
    uVar4 = uVar6 + 0x37f0;
    if (uVar4 < uVar6) {
        uVar3 = uVar4;
        uVar4 = 1;
    }
    else {
        uVar3 = uVar4 & 0xffffff;
        uVar4 = uVar4 >> 0x18;
        if (uVar4 == 0) goto code_r0x00012bfb;
    }
    do {
        uVar1 = in(0x1808);
        uVar5 = uVar6;
        uVar6 = uVar1;
        uVar2 = uVar4 - 1;
        if (uVar5 <= uVar1) {
            uVar2 = uVar4;
        }
        uVar4 = uVar2;
    } while (uVar2 != 0);
code_r0x00012bfb:
    while ((uVar6 < uVar3 && (uVar1 = in(0x1808), uVar6 <= uVar1))) {
        uVar6 = uVar1;
    }
    return 0;
}


/* fcn.00012c94 @ 0x12c94 */

void fcn.00012c94(void)

{
    int64_t iVar1;
    int32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h_2;
    char16_t acStack_20 [2];
    char16_t acStack_1c [2];
    int64_t var_10h_2;
    int32_t var_8h;
    int16_t var_4h;
    
    var_8h = str.SbWarmResetVar._24_4_;
    var_4h = str.SbWarmResetVar[0xe];
    var_40h._0_4_ = 0x711c703f;
    var_40h._4_4_ = 0x4b10c285;
    var_38h = -0x13c94f5d;
    var_34h = -0x1d74c343;
    var_18h = 8;
    var_30h = -0x4735057c;
    var_2ch = 0x4aa94593;
    var_28h = 0x688ef7ae;
    var_24h = 0x2073b06e;
    var_20h_2._0_4_ = str.SbWarmResetVar._0_4_;
    var_20h_2._4_4_ = str.SbWarmResetVar._4_4_;
    acStack_20 = str.SbWarmResetVar._8_4_;
    acStack_1c = str.SbWarmResetVar._12_4_;
    var_10h = 0x49735752;
    var_10h_2 = str.SbWarmResetVar._16_8_;
    iVar1 = (**(*0x132e0 + 0x48))(L"CapsuleUpdateData",&var_40h,0,&var_18h,&var_20h);
    if (iVar1 == 0) {
        (**(*0x132e0 + 0x58))(&var_20h_2,&var_30h,7,4,&var_10h);
        fcn.000112f0();
    }
    return;
}


/* fcn.000112f0 @ 0x112f0 */

void fcn.000112f0(void)

{
    return;
}


/* fcn.00012014 @ 0x12014 */

uint8_t fcn.00012014(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    
    uVar3 = arg2;
    uVar2 = arg1;
    if ((uVar2 < 10) || (uVar2 == 0x32)) {
        cVar1 = (arg2 & 0xffU) / 10;
        uVar3 = cVar1 << 4 | uVar3 + cVar1 * -10;
    }
    out(0x74,uVar2);
    out(0x75,uVar3);
    return uVar3;
}


/* fcn.00011fc0 @ 0x11fc0 */

ulong fcn.00011fc0(uint32_t arg1)

{
    uint32_t uVar1;
    ulong in_RAX;
    unkbyte7 Var3;
    uint64_t uVar2;
    uint8_t uVar4;
    uint8_t uStackX_8;
    
    Var3 = in_RAX >> 8;
    uVar4 = arg1;
    out(0x74,uVar4);
    uStackX_8 = in(0x75);
    uVar2 = CONCAT71(Var3,uStackX_8);
    if ((uVar4 < 10) || (uVar4 == 0x32)) {
        uVar2 = CONCAT71(Var3,uStackX_8);
        if ((uStackX_8 < 0xa0) && (uVar2 = CONCAT71(Var3,uStackX_8) & 0xffffffffffffff0f, uVar2 < 10)) {
            uVar1 = (uStackX_8 & 0xf) + ((uStackX_8 >> 4) + (uStackX_8 >> 4) * 4) * 2;
            uVar2 = uVar1;
            uStackX_8 = uVar1;
        }
        else {
            uStackX_8 = 0;
        }
    }
    return CONCAT71(uVar2 >> 8,uStackX_8);
}


/* fcn.00012c04 @ 0x12c04 */

uint8_t fcn.00012c04(void)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = in(0x1830);
    uVar1 = uVar2 & 1;
    if (*0x13390 != '\0') {
        if ((uVar2 & 1) != 0) {
            *0x13390 = '\0';
        }
        if (*0x13390 != '\0') {
            return *0x13391;
        }
    }
    *0x13391 = uVar1;
    *0x13390 = 1;
    return uVar1;
}


/* fcn.000120a8 @ 0x120a8 */

void fcn.000120a8(uint param_1)

{
    uint32_t arg1;
    uint64_t uVar1;
    char cStackX_8;
    
    uVar1 = 0;
    arg1 = CONCAT31(param_1 >> 8,10);
    cStackX_8 = fcn.00011fc0(arg1);
    do {
        if (-1 < cStackX_8) {
            *0x13360 = 0;
            return;
        }
        arg1 = CONCAT31(arg1 >> 8,10);
        cStackX_8 = fcn.00011fc0(arg1);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0xfffff);
    *0x13360 = 1;
    return;
}


/* fcn.00012058 @ 0x12058 */

void fcn.00012058(ulong param_1,ulong param_2)

{
    code *pcVar1;
    ulong uVar2;
    unkbyte7 Var3;
    uint64_t uVar4;
    
    Var3 = param_2 >> 8;
    uVar2 = CONCAT71(param_1 >> 8,0xb);
    fcn.00012014(uVar2,CONCAT71(Var3,0x82));
    uVar2 = CONCAT71(uVar2 >> 8,10);
    fcn.00012014(uVar2,CONCAT71(Var3,0x26));
    uVar2 = CONCAT71(uVar2 >> 8,0xc);
    fcn.00011fc0(uVar2);
    fcn.00012014(CONCAT71(uVar2 >> 8,0xb),CONCAT71(Var3,2));
    uVar4 = 0;
    pcVar1 = *0x13368;
    while (pcVar1 != NULL) {
        (*pcVar1)();
        uVar4 = uVar4 + 1;
        pcVar1 = *(uVar4 * 8 + 0x13368);
    }
    return;
}


/* fcn.000121b8 @ 0x121b8 */

ulong fcn.000121b8(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    uint32_t arg1_00;
    unkbyte7 in_RDX;
    
    cVar2 = arg1;
    arg1_00 = CONCAT31(arg1 >> 8,0xb);
    uVar1 = fcn.00011fc0(arg1_00);
    if ((uVar1 & 6) != 2) {
        if (cVar2 == '\0') {
            return 0x8000000000000007;
        }
        fcn.00012014(CONCAT31(arg1_00 >> 8,0xb),CONCAT71(in_RDX,uVar1) & 0xfffffffffffffffb | 2);
    }
    return 0;
}


/* fcn.000120f0 @ 0x120f0 */

uint64_t fcn.000120f0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    
    uVar4 = *(arg1 + 2) - 1;
    uVar6 = *(arg1 + 3) - 1;
    uVar3 = *arg1 - 0x76cU;
    if ((0x1fa3 < *arg1 - 0x76cU) || (0xb < uVar4)) goto code_r0x0001215e;
    if ((uVar4 == 1) && (uVar1 = *arg1, (uVar1 & 3) == 0)) {
        uVar5 = uVar1;
        uVar2 = uVar5 + (uVar1 / 100) * -100;
        if ((uVar2 == 0) && (uVar2 = (uVar5 / 400) * 400, uVar5 != uVar2)) goto code_r0x00012161;
        uVar3 = uVar2;
        if (0x1c < uVar6) goto code_r0x0001215e;
    }
    else {
code_r0x00012161:
        uVar3 = uVar4;
        if (*(uVar3 + 0x13250) < uVar6) goto code_r0x0001215e;
    }
    if ((((*(arg1 + 4) < 0x18) && (*(arg1 + 5) < 0x3c)) && (*(arg1 + 6) < 0x3c)) &&
       (((*(arg1 + 8) < 1000000000 && (uVar3 = 0xfffffa60, -0x5a1 < *(arg1 + 0xc))) &&
        ((uVar3 = 0x5a0, *(arg1 + 0xc) < 0x5a1 || (uVar3 = 0x7ff, *(arg1 + 0xc) == 0x7ff)))))) {
        return CONCAT71(uVar3 >> 8,1);
    }
code_r0x0001215e:
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00011c4c @ 0x11c4c */

int64_t fcn.00011c4c(void)

{
    int64_t iVar1;
    
    if (*0x13318 == '\0') {
        iVar1 = fcn.00011bc4();
        if (-1 < iVar1) {
            iVar1 = (***0x13338)(1,0x61007,0,0,0);
        }
    }
    else if (*0x13320 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x13320)(*0x13320,1,0x61007,0,0,0);
    }
    return iVar1;
}


/* fcn.000111e0 @ 0x111e0 */

int64_t fcn.000111e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00012c58 @ 0x12c58 */

int64_t fcn.00012c58(void)

{
    if (*0x13398 == 0) {
        (**(*0x132d8 + 0x140))(0x13030,0,0x13398);
    }
    return *0x13398;
}


/* fcn.00011b7c @ 0x11b7c */

ulong fcn.00011b7c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*0x13358 + 0x68);
    iVar3 = *(*0x13358 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.00011df8(iVar3,0x13070);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.00012ae0 @ 0x12ae0 */

ulong fcn.00012ae0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x13380 == NULL) {
            iVar1 = (**(*0x132e8 + 0xd0))(0x13000,0,0x13388);
            if ((iVar1 < 0) || (*0x13388 == NULL)) {
                *0x13380 = NULL;
            }
            else {
                *0x13380 = **0x13388;
            }
            if (*0x13380 == NULL) goto code_r0x00012b45;
        }
        uVar2 = (**0x13380)(*0x13388,arg1 & 0xffffffff,arg2 & 0xffffffff,0,78000,0);
    }
    else {
code_r0x00012b45:
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.000121f8 @ 0x121f8 */

ulong fcn.000121f8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uchar uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    ushort uStackX_8;
    uchar uStackX_a;
    ulong uStackX_18;
    
    uStackX_18 = 3;
    if (arg1 == 0) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar1 = fcn.00011fc0(CONCAT71(arg1 >> 8,0xb));
        if ((uVar1 & 6) == 2) {
            iVar6 = 0;
            cVar2 = fcn.00012c04();
            uVar4 = in(0x1830);
            out(0x1830,uVar4 & 0xfffffffc);
            fcn.000120a8();
            if (*0x13360 != '\0') {
                fcn.00012058();
            }
            uVar5 = 0;
            uVar3 = fcn.00011fc0(0);
            uVar5 = CONCAT71(uVar5 >> 8,9);
            *(arg1 + 6) = uVar3;
            uVar1 = fcn.00011fc0(uVar5);
            uVar5 = CONCAT71(uVar5 >> 8,8);
            uVar7 = uVar1;
            uVar3 = fcn.00011fc0(uVar5);
            uVar5 = CONCAT71(uVar5 >> 8,7);
            *(arg1 + 2) = uVar3;
            uVar3 = fcn.00011fc0(uVar5);
            uVar5 = CONCAT71(uVar5 >> 8,4);
            *(arg1 + 3) = uVar3;
            uVar3 = fcn.00011fc0(uVar5);
            *(arg1 + 4) = uVar3;
            uVar3 = fcn.00011fc0(CONCAT71(uVar5 >> 8,2));
            uVar5 = 0;
            *(arg1 + 5) = uVar3;
            uVar1 = fcn.00011fc0(0);
            if (uVar1 < *(arg1 + 6)) {
                uVar5 = CONCAT71(uVar5 >> 8,9);
                uVar1 = fcn.00011fc0(uVar5);
                uVar5 = CONCAT71(uVar5 >> 8,8);
                uVar7 = uVar1;
                uVar3 = fcn.00011fc0(uVar5);
                uVar5 = CONCAT71(uVar5 >> 8,7);
                *(arg1 + 2) = uVar3;
                uVar3 = fcn.00011fc0(uVar5);
                uVar5 = CONCAT71(uVar5 >> 8,4);
                *(arg1 + 3) = uVar3;
                uVar3 = fcn.00011fc0(uVar5);
                *(arg1 + 4) = uVar3;
                uVar3 = fcn.00011fc0(CONCAT71(uVar5 >> 8,2));
                uVar5 = 0;
                *(arg1 + 5) = uVar3;
                uVar3 = fcn.00011fc0(0);
                *(arg1 + 6) = uVar3;
            }
            if (cVar2 != '\0') {
                uVar4 = in(0x1830);
                out(0x1830,uVar4 | 2);
                uVar4 = in(0x1830);
                out(0x1830,uVar4 | 1);
            }
            uVar1 = fcn.00011fc0(CONCAT71(uVar5 >> 8,0x32));
            *(arg1 + 8) = 0;
            *arg1 = uVar1 * 100 + (uVar7 & 0xff);
            uVar1 = *0xc00fd0dc;
            if ((*0xc00fd0dc & 1) == 0) {
                iVar6 = (**(*0x13308 + 0x48))(L"EfiTime",0x130a0,0,&uStackX_18,&uStackX_8);
            }
            else {
                uStackX_a = *0x134aa;
                uStackX_8 = *0x134a8;
            }
            *0xc00fd0dc = uVar1;
            if (iVar6 < 0) {
                *(arg1 + 0xe) = 0;
                *(arg1 + 0xc) = 0x7ff;
            }
            else {
                *(arg1 + 0xc) = uStackX_8;
                *(arg1 + 0xe) = uStackX_a;
            }
            *0x134a8 = *(arg1 + 0xc);
            *0x134aa = *(arg1 + 0xe);
            if (arg2 != 0) {
                *(arg2 + 4) = 0;
                *arg2 = 1;
                *(arg2 + 8) = 0;
            }
            uVar5 = 0;
        }
        else {
            uVar5 = 0x8000000000000007;
        }
    }
    return uVar5;
}


/* fcn.000123e8 @ 0x123e8 */

int64_t fcn.000123e8(int64_t arg1)

{
    int16_t iVar1;
    char cVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    int64_t in_RDX;
    uint64_t uVar8;
    int16_t iStackX_8;
    char cStackX_a;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 3;
    fcn.000121b8(CONCAT71(arg1 >> 8,1));
    if ((arg1 != 0) && (iVar5 = arg1, cVar2 = fcn.000120f0(arg1,in_RDX), cVar2 != '\0')) {
        uVar7 = CONCAT71(iVar5 >> 8,0xb);
        cVar2 = fcn.00011fc0(uVar7);
        if (-1 < cVar2) {
            fcn.00012014(CONCAT71(uVar7 >> 8,0xb),CONCAT71(in_RDX >> 8,cVar2) | 0x80);
        }
        uVar8 = 0x51eb851f;
        fcn.00012014(CONCAT71(*arg1 >> 8,0x32),*arg1 / 100);
        iVar5 = (uVar8 & 0xffffffff) * *arg1;
        iVar6 = *arg1 + (iVar5 >> 0x25) * -100;
        iVar5 = CONCAT71(iVar5 >> 0x2d,iVar6);
        uVar7 = CONCAT71(iVar6 >> 8,9);
        fcn.00012014(uVar7,iVar5);
        iVar5 = CONCAT71(iVar5 >> 8,*(arg1 + 2));
        uVar7 = CONCAT71(uVar7 >> 8,8);
        fcn.00012014(uVar7,iVar5);
        fcn.00012014(CONCAT71(uVar7 >> 8,7),CONCAT71(iVar5 >> 8,*(arg1 + 3)));
        iVar1 = (0xe - *(arg1 + 2)) / 0xc;
        uVar4 = *arg1 - iVar1;
        uVar7 = 0;
        uVar8 = (*(arg1 + 3) +
                (uVar4 >> 2) + uVar4 +
                (((iVar1 * 0xc + -2 + *(arg1 + 2)) * 0x1f) / 0xc - ((uVar8 & 0xffffffff) * uVar4 >> 0x25)) +
                ((uVar8 & 0xffffffff) * uVar4 >> 0x27)) % 7 + 1;
        fcn.00012014(6,uVar8);
        iVar5 = CONCAT71(uVar8 >> 8,*(arg1 + 4));
        uVar7 = CONCAT71(uVar7 >> 8,4);
        fcn.00012014(uVar7,iVar5);
        iVar5 = CONCAT71(iVar5 >> 8,*(arg1 + 5));
        fcn.00012014(CONCAT71(uVar7 >> 8,2),iVar5);
        iVar5 = CONCAT71(iVar5 >> 8,*(arg1 + 6));
        uVar7 = 0;
        fcn.00012014(0,iVar5);
        uVar7 = CONCAT71(uVar7 >> 8,0xb);
        uVar3 = fcn.00011fc0(uVar7);
        if (0x7f < uVar3) {
            fcn.00012014(CONCAT71(uVar7 >> 8,0xb),CONCAT71(iVar5 >> 8,uVar3) & 0xffffffffffffff7f);
        }
        iVar5 = (**(*0x13308 + 0x48))(L"EfiTime",0x130a0,0,auStackX_10,&iStackX_8);
        if (((iVar5 < 0) || (iStackX_8 != *(arg1 + 0xc))) || (cStackX_a != *(arg1 + 0xe))) {
            iStackX_8 = *(arg1 + 0xc);
            cStackX_a = *(arg1 + 0xe);
            iVar5 = (**(*0x13308 + 0x58))(L"EfiTime",0x130a0,7,3,&iStackX_8);
            if (-1 < iVar5) {
                *0x134a8 = *(arg1 + 0xc);
                *0x134aa = *(arg1 + 0xe);
            }
        }
        return iVar5;
    }
    return -0x7ffffffffffffffe;
}


