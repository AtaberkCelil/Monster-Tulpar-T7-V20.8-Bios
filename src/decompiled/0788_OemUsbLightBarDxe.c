// decompiled by r2ghidra: 0788_OemUsbLightBarDxe.pe32
// functions: 11

/* entry0 @ 0x103c0 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103f8(arg1,arg2);
    if (*0x109a8 == 0) {
        *0x109a0 = *(arg2 + 0x58);
        *0x109a8 = arg2;
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
    
    *0x10998 = *(arg1 + 0x60);
    *0x10990 = arg1;
    fcn.000106cc();
    iVar3 = fcn.00010738();
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
    if ((*0x109b8 != NULL) || (iVar3 = (**(*0x10998 + 0x140))(0x10910,0,0x109b8), -1 < iVar3)) {
        (***0x109b8)(*0x109b8,0x109c0);
    }
    return;
}


/* fcn.000104c8 @ 0x104c8 */

int64_t fcn.000104c8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t var_10h;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    ulong uStackX_20;
    int8_t var_c7fh;
    uint32_t var_ce0h;
    int32_t var_ce8h;
    int64_t var_cf0h;
    int64_t var_cf8h;
    uint uStack_da8;
    uint uStack_da4;
    uint uStack_da0;
    uint uStack_d9c;
    ulong auStack_d98 [2];
    uchar auStack_d88 [33];
    char cStack_d67;
    char cStack_d5f;
    uchar auStack_cc8 [3183];
    uchar uStack_59;
    
    uStackX_20 = 0xca9;
    uStack_da8 = 0xec87d643;
    uStack_da4 = 0x4bb5eba4;
    uStack_da0 = 0x3e3fe5a1;
    uStack_d9c = 0xa90db236;
    auStack_d98[0] = 0xb4;
    auStackX_10[0] = 7;
    iVar1 = (**(*0x109a0 + 0x48))(L"Setup",&uStack_da8,auStackX_18,&uStackX_20,auStack_cc8);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = (**(*0x109a0 + 0x48))(L"UniWillVariable",0x10920,auStackX_10,auStack_d98,auStack_d88);
    if (iVar1 < 0) {
        return iVar1;
    }
    fcn.000102b0(&var_10h,0xfe410d3b,1);
    if ((cStack_d67 != -1) && (var_10h != cStack_d67)) {
        var_10h._0_1_ = cStack_d67;
    }
    if (var_10h == '\0') {
        uStack_59 = 0;
    }
    else {
        fcn.000102b0(&var_10h,0xfe410d2b,1);
        if ((cStack_d5f != -1) && (var_10h != cStack_d5f)) {
            var_10h._0_1_ = cStack_d5f;
        }
        if (var_10h == '\x01') {
            uStack_59 = 1;
        }
        else if (var_10h == '\x02') {
            uStack_59 = 2;
        }
        else if (var_10h == '\x05') {
            uStack_59 = 5;
        }
        else if (var_10h == '\n') {
            uStack_59 = 10;
        }
        else {
            if (var_10h != '\r') {
                if (var_10h == '\x13') {
                    uStack_59 = 0x13;
                    goto code_r0x00010687;
                }
                if (var_10h == ' ') {
                    uStack_59 = 0x20;
                    goto code_r0x00010687;
                }
                if (var_10h == '!') {
                    uStack_59 = 0x21;
                    goto code_r0x00010687;
                }
            }
            uStack_59 = 0xd;
        }
    }
code_r0x00010687:
    iVar2 = (**(*0x109a0 + 0x58))(L"Setup",&uStack_da8,auStackX_18[0],uStackX_20,auStack_cc8);
    iVar1 = 0;
    if (iVar2 < 0) {
        iVar1 = iVar2;
    }
    return iVar1;
}


/* fcn.000106cc @ 0x106cc */

int64_t fcn.000106cc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x109b0 == 0) {
        *0x109b0 = 0;
        if (*(*0x10990 + 0x68) != 0) {
            piVar2 = *(*0x10990 + 0x70);
            do {
                if ((*0x10900 == *piVar2) && (*0x10908 == piVar2[1])) {
                    *0x109b0 = (*(*0x10990 + 0x70))[uVar1 * 3 + 2];
                    return *0x109b0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10990 + 0x68));
        }
    }
    return *0x109b0;
}


/* fcn.00010738 @ 0x10738 */

void fcn.00010738(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000106cc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001076f:
            if ((piVar1 == NULL) || ((*0x10930 == *(piVar1 + 4) && (*0x10938 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001076f;
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


