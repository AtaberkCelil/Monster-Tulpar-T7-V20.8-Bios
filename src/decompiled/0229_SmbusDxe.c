// decompiled by r2ghidra: 0229_SmbusDxe.pe32
// functions: 18

/* entry0 @ 0x10304 */

void entry0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t noname_0_00;
    
    *0x11568 = *(arg1 + 0x60);
    *0x11560 = arg1;
    if (*0x11570 == 0) {
        arg1 = 0x11570;
        fcn.00010d50(noname_0,0x11570);
    }
    noname_0_00 = 0x11500;
    iVar3 = fcn.00010dac(0x11500);
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0_00,0x1808);
        while( true ) {
            arg1 = 0x1808;
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            noname_0_00 = uVar5;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(noname_0_00,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    fcn.000103b0(noname_0_00,arg1);
    return;
}


/* fcn.00010d50 @ 0x10d50 */

ulong fcn.00010d50(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x11560;
    uVar4 = 0;
    *arg1 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*0x114d0 == *piVar5) && (*0x114d8 == piVar5[1])) {
                *arg1 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00010dac @ 0x10dac */

void fcn.00010dac(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = *0x11570;
    if (*0x11570 == NULL) {
        fcn.00010d50(arg1,0x11570);
        piVar1 = *0x11570;
    }
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010df2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010df2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.000103b0 @ 0x103b0 */

ulong fcn.000103b0(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    int16_t iVar2;
    int16_t *piVar3;
    int64_t arg1_00;
    ulong *puVar4;
    int64_t iVar5;
    uint64_t arg3;
    ulong uVar6;
    int16_t *piStackX_10;
    
    if (*0xc00fc000 == -1) {
        uVar6 = 0;
    }
    else {
        iVar5 = 0x114e0;
        piStackX_10 = arg1;
        piVar3 = fcn.00010dac(0x114e0);
        piStackX_10 = piVar3;
        arg1_00 = fcn.00010d20();
        puVar4 = NULL;
        if (arg1_00 != 0) {
            puVar4 = fcn.000102a0(arg1_00,0xa68);
            iVar5 = arg1_00;
        }
        if (puVar4 != NULL) {
            *0x11578 = puVar4;
            *puVar4 = 0x626d7370;
            puVar4[2] = 0x10554;
            puVar4[3] = 0x105cc;
            puVar4[4] = 0x10634;
            puVar4[5] = 0x10658;
            iVar2 = piVar3[0x1dd1];
            puVar4[0x149] = piVar3 + 0x3ba3;
            *(puVar4 + 0x148) = iVar2;
            fcn.00010d50(iVar5,&piStackX_10);
            piVar3 = piStackX_10;
            do {
                if (*piVar3 == -1) {
                    piVar3 = NULL;
code_r0x000104b8:
                    if (piVar3 == NULL) goto code_r0x0001050b;
                    if ((*0x114f0 == *(piVar3 + 4)) && (*0x114f8 == *(piVar3 + 8))) {
                        if (piVar3 != NULL) {
                            arg3 = piVar3[1] - 0x18;
                            if ((arg3 != 0) && (puVar4 + 7 != piVar3 + 0xc)) {
                                section..text(puVar4 + 7,piVar3 + 0xc,arg3);
                                puVar4 = *0x11578;
                            }
                            *(puVar4 + 6) = arg3 / 0x18;
                        }
code_r0x0001050b:
                        iVar5 = *0x11568;
                        puVar1 = puVar4 + 0x14a;
                        *puVar1 = puVar1;
                        puVar4[0x14b] = puVar1;
                        (**(iVar5 + 0x148))(puVar4 + 1,0x114c0,puVar4 + 2,0);
                        return 0;
                    }
                }
                else if (*piVar3 == 4) goto code_r0x000104b8;
                piVar3 = piVar3 + piVar3[1];
            } while( true );
        }
        uVar6 = 0x8000000000000009;
        *0x11578 = NULL;
    }
    return uVar6;
}


/* fcn.00010d20 @ 0x10d20 */

ulong fcn.00010d20(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11568 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 4704 named .text
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


/* fcn.00010e10 @ 0x10e10 */

int64_t fcn.00010e10(int64_t arg1,int64_t arg2,int arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h)

{
    uchar uVar1;
    ushort uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char cVar9;
    int64_t var_bp_10h;
    
    uVar3 = 0;
    var_bp_10h = 0;
    if ((1 < arg3) && ((arg_30h == 0 || (arg_38h == 0)))) {
        return -0x7ffffffffffffffe;
    }
    uVar4 = arg1;
    cVar9 = arg4;
    if (arg3 < 7) {
        if (arg3 != 6) {
            if (arg3 == 0) {
                uVar7 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                uVar8 = -(cVar9 != '\0') & 0x400000;
                if ((uVar8 != 0) || ((uVar7 & 0xff00) != 0)) {
                    return -0x7ffffffffffffffe;
                }
                uVar7 = uVar7 | uVar8 | 1;
code_r0x00010fce:
                fcn.0001121c(0,uVar7,0,&var_bp_10h);
                return var_bp_10h;
            }
            if (arg3 == 1) {
                uVar8 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                uVar6 = -(cVar9 != '\0') & 0x400000;
                uVar7 = uVar8 | uVar6;
                if (uVar6 != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((uVar8 & 0xff00) != 0) {
                    return -0x7ffffffffffffffe;
                }
                goto code_r0x00010fce;
            }
            if (arg3 == 2) {
                if (*arg_30h == 0) {
                    return -0x7ffffffffffffffb;
                }
                *arg_30h = 1;
                uVar7 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                if ((uVar7 & 0xff00) != 0) {
code_r0x00010f7f:
                    var_bp_10h = -0x7ffffffffffffffe;
                    uVar1 = 0;
                    goto code_r0x00010f90;
                }
                uVar8 = 0;
                uVar7 = uVar7 | -(cVar9 != '\0') & 0x400000 | 1;
code_r0x00010f72:
                iVar5 = 4;
            }
            else {
                if (arg3 == 3) {
                    if (*arg_30h == 0) {
                        return -0x7ffffffffffffffb;
                    }
                    *arg_30h = 1;
                    uVar8 = ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                    uVar7 = uVar8 | -(cVar9 != '\0') & 0x400000;
                    if ((uVar8 & 0xff00) != 0) goto code_r0x00010f7f;
                    uVar8 = *arg_38h;
                    goto code_r0x00010f72;
                }
                if (arg3 == 4) {
                    if (*arg_30h == 0) {
                        return -0x7ffffffffffffffb;
                    }
                    uVar8 = 0;
                    uVar6 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
                    *arg_30h = 1;
                    uVar7 = (-(cVar9 != '\0') & 0x400000) + 1;
                }
                else {
                    if (arg3 != 5) {
                        return -0x7ffffffffffffffe;
                    }
                    if (*arg_30h == 0) {
                        return -0x7ffffffffffffffb;
                    }
                    uVar6 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
                    *arg_30h = 1;
                    uVar8 = *arg_38h;
                    uVar7 = -(cVar9 != '\0') & 0x400000;
                }
                uVar7 = uVar6 * 2 | uVar7;
                iVar5 = 8;
            }
            uVar1 = fcn.0001121c(iVar5,uVar7,uVar8,&var_bp_10h);
code_r0x00010f90:
            *arg_38h = uVar1;
            return var_bp_10h;
        }
        if (*arg_30h < 2) {
            return -0x7ffffffffffffffb;
        }
        uVar6 = 0;
        uVar8 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
        *arg_30h = 2;
        uVar7 = (-(cVar9 != '\0') & 0x400000) + 1;
    }
    else {
        if (arg3 != 7) {
            iVar5 = arg_38h;
            if (arg3 == 8) {
                if (arg_38h == 0) goto code_r0x000111ad;
                uVar7 = (-(cVar9 != '\0') & 0x400000) + 1 | ((arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2;
                arg_38h = 0;
code_r0x00011198:
                arg1_00 = 0x14;
            }
            else {
                if (arg3 == 9) {
                    uVar7 = (((*arg_30h & 0x3f) << 8 | arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2 |
                            -(cVar9 != '\0') & 0x400000;
                    if ((arg_38h != 0) && ((uVar7 >> 0x10 & 0x3f) - 1 < 0x20)) {
                        iVar5 = 0;
                        goto code_r0x00011198;
                    }
code_r0x000111ad:
                    var_bp_10h = -0x7ffffffffffffffe;
                    goto code_r0x000111bb;
                }
                if (arg3 == 10) {
                    if (*arg_30h < 2) {
                        return -0x7ffffffffffffffb;
                    }
                    uVar8 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
                    *arg_30h = 2;
                    uVar6 = *arg_38h;
                    iVar5 = 0x10;
                    uVar7 = -(cVar9 != '\0') & 0x400000;
                    goto code_r0x000111f3;
                }
                if (arg3 != 0xb) {
                    return -0x7ffffffffffffffe;
                }
                uVar7 = (((*arg_30h & 0x3f) << 8 | arg2 & 0xffU) << 7 | uVar4 & 0x7f) * 2 | -(cVar9 != '\0') & 0x400000;
                if ((arg_38h == 0) || (0x1f < (uVar7 >> 0x10 & 0x3f) - 1)) goto code_r0x000111ad;
                arg1_00 = 0x1c;
            }
            uVar3 = fcn.00011340(arg1_00,uVar7,arg_38h,iVar5);
code_r0x000111bb:
            *arg_30h = uVar3;
            return var_bp_10h;
        }
        if (*arg_30h < 2) {
            return -0x7ffffffffffffffb;
        }
        uVar8 = (arg2 & 0xffU) << 7 | uVar4 & 0x7f;
        *arg_30h = 2;
        uVar6 = *arg_38h;
        uVar7 = -(cVar9 != '\0') & 0x400000;
    }
    iVar5 = 0xc;
code_r0x000111f3:
    uVar2 = fcn.0001121c(iVar5,uVar8 * 2 | uVar7,uVar6,&var_bp_10h);
    *arg_38h = uVar2;
    return var_bp_10h;
}


/* fcn.00010c80 @ 0x10c80 */

ulong fcn.00010c80(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    uVar4 = 0;
    if (*(iVar1 + 0x30) != '\0') {
        do {
            if ((arg2 & 0x7f) == (*(iVar1 + 0x38 + uVar4 * 0x18) & 0x7f)) {
                return 0;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < *(iVar1 + 0x30));
    }
    uVar4 = 0;
    if (*(iVar1 + 0xa40) != 0) {
        do {
            if ((arg2 & 0x7f) * 2 == *(uVar4 + *(iVar1 + 0xa48))) {
                return 0;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < *(iVar1 + 0xa40));
    }
    do {
        if ((arg2 & 0x7f) * 2 == *(uVar2 + 0x11510)) {
            return 0;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x26);
    return 1;
}


/* fcn.00010c28 @ 0x10c28 */

ulong fcn.00010c28(int64_t arg1,int64_t arg2)

{
    char cVar1;
    
    *arg2 = *arg2 & 0xffffffffffffff83;
    *arg2 = *arg2 | 3;
    do {
        cVar1 = fcn.00010c80(arg1,*arg2);
        if (cVar1 != '\0') {
            return 0;
        }
        *arg2 = *arg2 ^ (*arg2 + 1U ^ *arg2) & 0x7f;
    } while ((*arg2 & 0x7f) < 0x7f);
    return 0x8000000000000009;
}


/* fcn.00010894 @ 0x10894 */

void fcn.00010894(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    unkbyte7 in_R9;
    ulong auStackX_8 [4];
    int8_t var_20h;
    int8_t var_1fh;
    int8_t var_1eh;
    int8_t var_1dh;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_1ah;
    int8_t var_19h;
    int8_t var_18h;
    int8_t var_17h;
    int8_t var_16h;
    int8_t var_15h;
    int8_t var_14h;
    int8_t var_13h;
    int8_t var_12h;
    int8_t var_11h;
    int8_t var_10h;
    
    var_20h = *(arg2 + 0x17);
    uVar1 = *(arg2 + 8);
    var_1fh = *(arg2 + 0x16);
    var_1eh = *(arg2 + 0x15);
    var_1dh = *(arg2 + 0x14);
    var_1ch = *(arg2 + 0x13);
    var_1bh = *(arg2 + 0x12);
    var_1ah = *(arg2 + 0x11);
    var_19h = *(arg2 + 0x10);
    var_18h = *(arg2 + 0xf);
    var_17h = *(arg2 + 0xe);
    var_16h = *(arg2 + 0xd);
    var_15h = *(arg2 + 0xc);
    var_14h = uVar1 >> 0x18;
    var_13h = uVar1 >> 0x10;
    var_11h = *(arg2 + 8);
    var_10h = *arg2 * '\x02';
    var_12h = uVar1 >> 8;
    auStackX_8[0] = 0x11;
    fcn.00010e10(arg1 & 0xffffffffffffffe1U | 0x61,4,9,CONCAT71(in_R9,1),auStackX_8,&var_20h);
    return;
}


/* fcn.0001121c @ 0x1121c */

ushort fcn.0001121c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    ushort uVar6;
    
    iVar4 = 0;
    uVar6 = arg3;
    if (*0xc00fc020 - 1 < 0xfffe) {
        uVar5 = *0xc00fc020 & 0xffe0;
    }
    else {
        uVar5 = 0;
    }
    uVar1 = in(uVar5);
    if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 1) == 0) {
            out(uVar5,uVar1);
            if ((arg1 == '\x04') && ((arg2 & 1U) == 0)) {
                out(uVar5 + 3,arg3);
            }
            else {
                out(uVar5 + 3,arg2 >> 8);
                out(uVar5 + 5,arg3);
                out(uVar5 + 6,arg3 >> 8);
            }
            out(uVar5 + 0xd,arg2 >> 0x16 & 1);
            out(uVar5 + 4,arg2);
            out(uVar5 + 2,arg1 + '@');
            do {
                uVar1 = in(uVar5);
            } while ((uVar1 & 0x9e) == 0);
            if ((uVar1 & 0x1c) != 0) {
                out(uVar5,0x1c);
                uVar1 = in(uVar5 + 0xc);
                iVar4 = (-((uVar1 & 1) != 0) & 0x14) + 0x8000000000000007;
            }
            uVar2 = in(uVar5 + 6);
            uVar3 = in(uVar5 + 5);
            uVar6 = CONCAT11(uVar2,uVar3);
            out(uVar5,0xff);
            out(uVar5 + 0xc,1);
            goto code_r0x00011327;
        }
        out(uVar5,0xff);
    }
    iVar4 = -0x7fffffffffffffee;
code_r0x00011327:
    if (arg4 != 0) {
        *arg4 = iVar4;
    }
    return uVar6;
}


/* fcn.00011340 @ 0x11340 */

uint64_t fcn.00011340(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint64_t *in_stack_00000028;
    
    uVar6 = 0;
    if (*0xc00fc020 - 1 < 0xfffe) {
        uVar7 = *0xc00fc020 & 0xffe0;
    }
    else {
        uVar7 = 0;
    }
    uVar4 = arg2 >> 0x10 & 0x3f;
    uVar5 = uVar4;
    uVar1 = in(uVar7);
    if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 1) == 0) {
            out(uVar7,uVar1);
            out(uVar7 + 3,arg2 >> 8);
            out(uVar7 + 0xd,arg2 >> 0x16 & 1 | 2);
            in(uVar7 + 2);
            if ((arg3 != 0) && (out(uVar7 + 5,uVar4), uVar5 != 0)) {
                uVar3 = uVar6;
                do {
                    out(uVar7 + 7,*(uVar3 + arg3));
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar5);
            }
            out(uVar7 + 4,arg2);
            out(uVar7 + 2,arg1 + '@');
            do {
                uVar1 = in(uVar7);
            } while ((uVar1 & 0x9e) == 0);
            if ((uVar1 & 0x1c) == 0) {
                uVar3 = uVar6;
                if (arg4 != 0) {
                    uVar1 = in(uVar7 + 5);
                    uVar5 = uVar1;
                    if (uVar1 != 0) {
                        do {
                            uVar2 = in(uVar7 + 7);
                            *(uVar6 + arg4) = uVar2;
                            uVar6 = uVar6 + 1;
                            uVar3 = 0;
                        } while (uVar6 < uVar5);
                    }
                }
            }
            else {
                out(uVar7,0x1c);
                uVar1 = in(uVar7 + 0xc);
                uVar3 = (-((uVar1 & 1) != 0) & 0x14) + 0x8000000000000007;
            }
            goto code_r0x00011477;
        }
        out(uVar7,0xff);
    }
    uVar3 = 0x8000000000000012;
code_r0x00011477:
    out(uVar7,0xff);
    out(uVar7 + 0xc,1);
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar3;
    }
    return uVar5;
}


