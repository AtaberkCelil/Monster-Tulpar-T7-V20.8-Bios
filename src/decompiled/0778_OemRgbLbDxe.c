// decompiled by r2ghidra: 0778_OemRgbLbDxe.pe32
// functions: 11

/* entry0 @ 0x103c0 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103f8(arg1,arg2);
    if (*0x10938 == 0) {
        *0x10930 = *(arg2 + 0x58);
        *0x10938 = arg2;
    }
    fcn.000104c8();
    return 0;
}


/* fcn.000103f8 @ 0x103f8 */

void fcn.000103f8(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x10928 = *(arg1 + 0x60);
    *0x10920 = arg1;
    fcn.0001066c();
    iVar3 = fcn.000106d8();
    if (iVar3 == 0) {
        uVar4 = fcn.000102a0();
        fcn.00010290();
        uVar1 = in(0x1808);
        fcn.00010270(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010260();
        }
        fcn.00010270(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010290();
        }
        else {
            fcn.00010280();
        }
    }
    if ((*0x10948 != NULL) || (iVar3 = (**(*0x10928 + 0x140))(0x108b0,0,0x10948), -1 < iVar3)) {
        (***0x10948)(*0x10948,0x10950);
    }
    return;
}


/* fcn.000104c8 @ 0x104c8 */

void fcn.000104c8(void)

{
    int64_t iVar1;
    uint8_t auStackX_8 [8];
    uint auStackX_10 [2];
    uint32_t uStackX_18;
    uint uStackX_1c;
    ulong uStackX_20;
    int64_t var_67h;
    int64_t var_6fh;
    int32_t var_77h;
    int32_t var_7bh;
    int64_t var_7fh;
    uchar auStack_d8 [9];
    uint8_t uStack_cf;
    uint8_t uStack_ce;
    char cStack_cd;
    uint8_t uStack_cc;
    int64_t var_79h;
    int8_t var_70h;
    int8_t var_6fh_2;
    int8_t var_6eh;
    int8_t var_6dh;
    
    uStackX_18 = 0;
    uStackX_20 = 0xb4;
    uStackX_1c = 0;
    auStackX_10[0] = 7;
    iVar1 = (**(*0x10930 + 0x48))(L"UniWillVariable",0x108c0,auStackX_10,&uStackX_20,auStack_d8);
    if (-1 < iVar1) {
        fcn.000102b0(auStackX_8,0xfe410d00,1);
        if ((auStackX_8[0] != 0xff) && ((auStackX_8[0] & 8) != 0)) {
            *0xfe41078e = *0xfe41078e | 0x10;
            auStackX_8[0] = *0xfe41078e;
        }
        fcn.000102b0(&uStackX_18,0xfe410d20,1);
        if (uStackX_18 != 0xff) {
            if (uStack_cf != uStackX_18) {
                uStackX_18 = uStack_cf;
            }
        }
        if (uStackX_18 != 0) {
            if (uStackX_18 == 0xff) {
                *0xfe410748 = *0xfe410748 | 0x80;
            }
            else {
                fcn.000102b0(&uStackX_1c,0xfe410d24,1);
                if ((uStackX_1c & 0x7f) == 0) {
                    *0xfe410748 = *0xfe410748 & 0x7f;
                    if ((uStackX_1c & 0x80) != 0) {
                        *0xfe410748 = *0xfe410748 | 0x80;
                    }
                    auStackX_8[0] = *0xfe410748;
                }
                fcn.000102b0(&uStackX_1c + 1,0xfe410d21,1);
                if ((uStackX_1c._1_1_ < 0xc9) && (uStack_ce != uStackX_1c._1_1_)) {
                    uStackX_1c._0_2_ = CONCAT11(uStack_ce,uStackX_1c);
                    *0xfe410749 = uStack_ce;
                }
                fcn.000102b0(&uStackX_1c + 2,0xfe410d22,1);
                if ((uStackX_1c._1_1_ < 0xc9) && (cStack_cd != uStackX_1c._2_1_)) {
                    uStackX_1c._0_3_ = CONCAT12(cStack_cd,uStackX_1c);
                    *0xfe41074a = cStack_cd;
                }
                fcn.000102b0(&uStackX_1c + 3,0xfe410d23,1);
                if ((uStackX_1c._3_1_ < 0xc9) && (uStack_cc != uStackX_1c._3_1_)) {
                    *0xfe41074b = uStack_cc;
                }
            }
        }
    }
    return;
}


/* fcn.0001066c @ 0x1066c */

int64_t fcn.0001066c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10940 == 0) {
        *0x10940 = 0;
        if (*(*0x10920 + 0x68) != 0) {
            piVar2 = *(*0x10920 + 0x70);
            do {
                if ((*0x108a0 == *piVar2) && (*0x108a8 == piVar2[1])) {
                    *0x10940 = (*(*0x10920 + 0x70))[uVar1 * 3 + 2];
                    return *0x10940;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10920 + 0x68));
        }
    }
    return *0x10940;
}


/* fcn.000106d8 @ 0x106d8 */

void fcn.000106d8(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001066c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001070f:
            if ((piVar1 == NULL) || ((*0x108d0 == *(piVar1 + 4) && (*0x108d8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001070f;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000102a0 @ 0x102a0 */

uint64_t fcn.000102a0(void)

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


/* fcn.00010290 @ 0x10290 */

void fcn.00010290(void)

{
    return;
}


/* fcn.00010270 @ 0x10270 */

uint64_t fcn.00010270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2,int64_t arg3)

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


