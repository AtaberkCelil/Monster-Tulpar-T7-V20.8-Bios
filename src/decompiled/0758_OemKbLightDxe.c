// decompiled by r2ghidra: 0758_OemKbLightDxe.pe32
// functions: 13

/* entry0 @ 0x103c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103dc(arg1,arg2);
    fcn.000104ac(arg1,arg2);
    return;
}


/* fcn.000103dc @ 0x103dc */

void fcn.000103dc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x10dd8 = *(arg1 + 0x60);
    *0x10dd0 = arg1;
    fcn.00010b14();
    iVar3 = fcn.00010b80();
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
    if ((*0x10e00 != NULL) || (iVar3 = (**(*0x10dd8 + 0x140))(0x10d50,0,0x10e00), -1 < iVar3)) {
        (***0x10e00)(*0x10e00,0x10e08);
    }
    return;
}


/* fcn.000104ac @ 0x104ac */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.000104ac(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    unkbyte7 Var4;
    uint64_t *arg1_00;
    uint8_t uVar5;
    uint16_t uVar6;
    uint64_t uStackX_8;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t iStack_48;
    uint uStack_40;
    uint uStack_3c;
    int64_t var_30h_2;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_bp_20h;
    int32_t var_1ch;
    int64_t var_18h;
    uint32_t var_bp_10h;
    
    uVar3 = 0;
    if (*0x10df0 == 0) {
        *0x10de0 = *(arg2 + 0x60);
        *0x10de8 = *(arg2 + 0x58);
        *0x10df0 = arg2;
    }
    Var4 = arg1 >> 8;
    arg1_00 = CONCAT71(Var4,*0xfe41073c) & 0xffffffffffffff01;
    uStackX_8 = CONCAT71(Var4,*0xfe41073c) & 0xffffffffffffff01;
    if ((*0xfe41073c & 1) == 0) {
        uVar5 = 3;
    }
    else {
        uStackX_8 = CONCAT71(uStackX_8._1_7_,*0xfe41073c) & 0xfffffffffffffff8;
        uVar1 = (*0xfe41073c & 0xf8) - 0x10;
        if (((uVar1 < 0x39) && (arg1_00 = 0x100010101010101, (0x100010101010101U >> (uVar1 & 0x3f) & 1) != 0)) ||
           ((*0xfe41073c & 0xf8) == 0x50)) {
            uVar5 = 4;
        }
        else {
            arg1_00 = &uStackX_8;
            fcn.000102b0(arg1_00,0xfe410d00,1);
            if ((uStackX_8 & 0x10) == 0) {
                uVar5 = uStackX_8 & 1;
            }
            else {
                uVar5 = 2;
            }
            fcn.00010630();
        }
    }
    fcn.000106d0(CONCAT71(arg1_00 >> 8,uVar5));
    uStack_40 = 0x2b2f68d6;
    uStack_3c = 0x44cf0cd2;
    var_30h_2._0_4_ = 0xa2bb8b8e;
    var_30h_2._4_4_ = 0x755b1b0b;
    iStackX_20 = 0;
    uStackX_18 = 0;
    iVar2 = (**(*0x10de0 + 0x138))(2,&uStack_40,0,&uStackX_18,&iStackX_20);
    if ((-1 < iVar2) && (uVar6 = 0, uStackX_18 != 0)) {
        do {
            iVar2 = (**(*0x10de0 + 0x98))(*(iStackX_20 + uVar3 * 8),&uStack_40,&iStack_48);
            if (iVar2 < 0) {
                return 0;
            }
            iVar2 = (**(iStack_48 + 0x30))(iStack_48,&var_28h);
            if (iVar2 < 0) {
                return 0;
            }
            if ((var_bp_20h == 0x48d) && (var_bp_20h._2_2_ == 0x600a)) {
                *0xfe4107c9 = *0xfe4107c9 | 0x40;
            }
            uVar6 = uVar6 + 1;
            uVar3 = uVar6;
        } while (uVar3 < uStackX_18);
    }
    return 0;
}


/* fcn.00010b14 @ 0x10b14 */

int64_t fcn.00010b14(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10df8 == 0) {
        *0x10df8 = 0;
        if (*(*0x10dd0 + 0x68) != 0) {
            piVar2 = *(*0x10dd0 + 0x70);
            do {
                if ((*0x10d40 == *piVar2) && (*0x10d48 == piVar2[1])) {
                    *0x10df8 = (*(*0x10dd0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10df8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10dd0 + 0x68));
        }
    }
    return *0x10df8;
}


/* fcn.00010b80 @ 0x10b80 */

void fcn.00010b80(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010b14();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010bb7:
            if ((piVar1 == NULL) || ((*0x10d70 == *(piVar1 + 4) && (*0x10d78 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010bb7;
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

uint32_t * fcn.000102b0(uint32_t *arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010630 @ 0x10630 */

void fcn.00010630(void)

{
    char cVar1;
    uint8_t auStackX_8 [32];
    
    cVar1 = '\x01';
    fcn.000102b0(auStackX_8,0xfe410d00,1);
    if ((auStackX_8[0] & 0x10) == 0) {
        cVar1 = (auStackX_8[0] & 1) * '\x02';
    }
    if (cVar1 == '\0') {
        *0xfe41073c = *0xfe41073c & 0xfd;
    }
    else {
        if (cVar1 != '\x01') {
            if (cVar1 != '\x02') {
                return;
            }
            *0xfe410766 = *0xfe410766 | 4;
            return;
        }
        *0xfe41073c = *0xfe41073c | 6;
    }
    *0xfe410766 = *0xfe410766 & 0xfb;
    return;
}


/* fcn.000106d0 @ 0x106d0 */

int64_t fcn.000106d0(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t var_10h;
    uint8_t auStackX_10 [8];
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    int8_t var_cb4h;
    int8_t var_cb6h;
    int8_t var_cb7h;
    int8_t var_cb8h;
    uint32_t var_ce8h;
    int32_t var_cf0h;
    int64_t var_cf8h;
    uint uStack_da8;
    uint uStack_da4;
    uint uStack_da0;
    uint uStack_d9c;
    ulong uStack_d98;
    ulong uStack_d90;
    uchar auStack_d88 [17];
    uint8_t uStack_d77;
    uint8_t uStack_d6f;
    uchar auStack_cc8 [3236];
    uint8_t uStack_24;
    uchar uStack_22;
    uchar uStack_21;
    uchar uStack_20;
    
    uStack_d98 = 0xca9;
    uVar1 = arg1;
    uStack_da8 = 0xec87d643;
    uStack_da4 = 0x4bb5eba4;
    uStack_da0 = 0x3e3fe5a1;
    uStack_d9c = 0xa90db236;
    uStack_d90 = 0xb4;
    auStackX_18[0] = 7;
    iVar2 = (**(*0x10de8 + 0x48))(L"Setup",&uStack_da8,auStackX_20,&uStack_d98,auStack_cc8);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = (**(*0x10de8 + 0x48))(L"UniWillVariable",0x10d60,auStackX_18,&uStack_d90,auStack_d88);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (uVar1 < 2) {
        uStack_24 = 0;
        goto code_r0x00010ad0;
    }
    if (uVar1 == 2) {
        uStack_24 = 2;
        fcn.000102b0(auStackX_10,0xfe410d16,1);
        if ((uStack_d77 != 0xff) && (auStackX_10[0] != uStack_d77)) {
            auStackX_10[0] = uStack_d77;
        }
        if (auStackX_10[0] == 0) {
            uStack_20 = 0;
        }
        else {
            fcn.000102b0(auStackX_10,0xfe410d06,1);
            if ((uStack_d6f != 0xff) && (auStackX_10[0] != uStack_d6f)) {
                auStackX_10[0] = uStack_d6f;
            }
            if (auStackX_10[0] == 1) {
                uStack_20 = 1;
            }
            else if (auStackX_10[0] == 2) {
                uStack_20 = 2;
            }
            else {
                if (auStackX_10[0] != 3) {
                    if (auStackX_10[0] == 5) {
                        uStack_20 = 4;
                        goto code_r0x00010ad0;
                    }
                    if (auStackX_10[0] == 0x12) {
                        uStack_20 = 5;
                        goto code_r0x00010ad0;
                    }
                    if (auStackX_10[0] == 0x13) {
                        uStack_20 = 6;
                        goto code_r0x00010ad0;
                    }
                }
                uStack_20 = 3;
            }
        }
        goto code_r0x00010ad0;
    }
    if (uVar1 == 3) {
        uStack_24 = uVar1;
        fcn.000102b0(auStackX_10,0xfe410d16,1);
        if ((uStack_d77 != 0xff) && (auStackX_10[0] != uStack_d77)) {
            auStackX_10[0] = uStack_d77;
        }
        if (auStackX_10[0] == 0) {
            uStack_22 = 0;
        }
        else {
            fcn.000102b0(auStackX_10,0xfe410d06,1);
            if ((uStack_d6f != 0xff) && (auStackX_10[0] != uStack_d6f)) {
                auStackX_10[0] = uStack_d6f;
            }
            if (auStackX_10[0] == 2) {
                uStack_22 = 1;
            }
            else {
                if (auStackX_10[0] != 3) {
                    if (auStackX_10[0] == 5) {
                        uStack_22 = 3;
                        goto code_r0x00010ad0;
                    }
                    if (auStackX_10[0] == 9) {
                        uStack_22 = 4;
                        goto code_r0x00010ad0;
                    }
                    if (auStackX_10[0] == 10) {
                        uStack_22 = 5;
                        goto code_r0x00010ad0;
                    }
                }
                uStack_22 = 2;
            }
        }
    }
    else if (uVar1 == 4) {
        uStack_24 = uVar1;
        fcn.000102b0(auStackX_10,0xfe410d16,1);
        if ((uStack_d77 != 0xff) && (auStackX_10[0] != uStack_d77)) {
            auStackX_10[0] = uStack_d77;
        }
        if (auStackX_10[0] == 0) {
            uStack_21 = 0;
        }
        else {
            fcn.000102b0(auStackX_10,0xfe410d06,1);
            if ((uStack_d6f != 0xff) && (auStackX_10[0] != uStack_d6f)) {
                auStackX_10[0] = uStack_d6f;
            }
            if (auStackX_10[0] < 7) {
                if (auStackX_10[0] == 6) {
                    uStack_21 = 8;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] == 1) {
                    uStack_21 = 6;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] == 2) {
                    uStack_21 = 1;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] != 3) {
                    if (auStackX_10[0] == 4) {
                        uStack_21 = 7;
                        goto code_r0x00010ad0;
                    }
                    if (auStackX_10[0] == 5) {
                        uStack_21 = 3;
                        goto code_r0x00010ad0;
                    }
                }
            }
            else {
                if (auStackX_10[0] == 9) {
                    uStack_21 = 4;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] == 10) {
                    uStack_21 = 5;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] == 0xe) {
                    uStack_21 = 9;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] == 0x11) {
                    uStack_21 = 10;
                    goto code_r0x00010ad0;
                }
                if (auStackX_10[0] == 0x15) {
                    uStack_21 = 0xb;
                    goto code_r0x00010ad0;
                }
            }
            uStack_21 = 2;
        }
    }
code_r0x00010ad0:
    iVar3 = (**(*0x10de8 + 0x58))(L"Setup",&uStack_da8,auStackX_20[0],uStack_d98,auStack_cc8);
    iVar2 = 0;
    if (iVar3 < 0) {
        iVar2 = iVar3;
    }
    return iVar2;
}


