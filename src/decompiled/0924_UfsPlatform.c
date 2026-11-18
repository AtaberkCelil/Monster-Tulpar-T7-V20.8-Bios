// decompiled by r2ghidra: 0924_UfsPlatform.pe32
// functions: 15

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    ulong auStackX_18 [2];
    
    fcn.0001035c(arg1,in_RDX);
    auStackX_18[0] = 0;
    (**(*0x10da8 + 0x80))(auStackX_18,0x10d40,0,0x10d50);
    return;
}


/* fcn.0001035c @ 0x1035c */

void fcn.0001035c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10da8 = *(arg1 + 0x60);
    *0x10da0 = arg1;
    fcn.00010c54();
    puVar4 = fcn.00010c54();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103b0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
                return;
            }
            if ((*0x10d70 == *(puVar4 + 4)) && (*0x10d78 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103b0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010c54 @ 0x10c54 */

int64_t fcn.00010c54(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10db0 == 0) {
        *0x10db0 = 0;
        if (*(*0x10da0 + 0x68) != 0) {
            piVar2 = *(*0x10da0 + 0x70);
            do {
                if ((*0x10d30 == *piVar2) && (*0x10d38 == piVar2[1])) {
                    *0x10db0 = (*(*0x10da0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10db0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10da0 + 0x68));
        }
    }
    return *0x10db0;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00010cc0 @ 0x10cc0 */

void fcn.00010cc0(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000104b0 @ 0x104b0 */

void fcn.000104b0(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t var_bp_10h;
    int32_t var_bp_8h;
    uint32_t var_4h;
    
    var_bp_8h = 0;
    var_4h = 0;
    var_bp_10h._0_4_ = 1;
    var_bp_10h._4_4_ = 0x15810000;
    iVar2 = (**(arg1 + 8))(arg1,&var_bp_10h);
    uVar1 = var_4h;
    if (-1 < iVar2) {
        var_4h = 0;
        var_bp_8h = 0;
        var_bp_10h._0_4_ = 1;
        var_bp_10h._4_4_ = 0x15800000;
        iVar2 = (**(arg1 + 8))(arg1,&var_bp_10h);
        if (-1 < iVar2) {
            if (var_4h < uVar1) {
                var_bp_8h = 0;
                var_bp_10h._0_4_ = 2;
                var_bp_10h._4_4_ = 0x15800000;
                var_4h = uVar1;
                iVar2 = (**(arg1 + 8))(arg1,&var_bp_10h);
                if (iVar2 < 0) {
                    return;
                }
            }
            var_bp_8h = 0;
            var_4h = 0;
            var_bp_10h._0_4_ = 1;
            var_bp_10h._4_4_ = 0x15610000;
            iVar2 = (**(arg1 + 8))(arg1,&var_bp_10h);
            uVar1 = var_4h;
            if (-1 < iVar2) {
                var_4h = 0;
                var_bp_8h = 0;
                var_bp_10h._0_4_ = 1;
                var_bp_10h._4_4_ = 0x15600000;
                iVar2 = (**(arg1 + 8))(arg1,&var_bp_10h);
                if ((-1 < iVar2) && (var_4h < uVar1)) {
                    var_bp_8h = 0;
                    var_bp_10h._0_4_ = 2;
                    var_bp_10h._4_4_ = 0x15600000;
                    var_4h = uVar1;
                    (**(arg1 + 8))(arg1,&var_bp_10h);
                }
            }
        }
    }
    return;
}


/* fcn.00010844 @ 0x10844 */

void fcn.00010844(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_bp_10h;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_bp_8h = 0;
    var_bp_10h._4_4_ = 0x15b00000;
    var_bp_10h._0_4_ = 2;
    var_4h = 0x1fff;
    iVar1 = (**(arg1 + 8))(arg1,&var_bp_10h);
    if (-1 < iVar1) {
        var_bp_8h = 0;
        var_bp_10h._0_4_ = 2;
        var_bp_10h._4_4_ = 0x15b10000;
        var_4h = 0xffff;
        iVar1 = (**(arg1 + 8))(arg1,&var_bp_10h);
        if (-1 < iVar1) {
            var_bp_8h = 0;
            var_bp_10h._0_4_ = 2;
            var_bp_10h._4_4_ = 0x15b20000;
            var_4h = 0x7fff;
            iVar1 = (**(arg1 + 8))(arg1,&var_bp_10h);
            if (-1 < iVar1) {
                var_bp_8h = 0;
                var_bp_10h._0_4_ = 2;
                var_bp_10h._4_4_ = 0x156a0000;
                var_4h = 2;
                iVar1 = (**(arg1 + 8))(arg1,&var_bp_10h);
                if (-1 < iVar1) {
                    var_bp_8h = 0;
                    var_bp_10h._0_4_ = 2;
                    var_bp_10h._4_4_ = 0x15840000;
                    var_4h = 1;
                    iVar1 = (**(arg1 + 8))(arg1,&var_bp_10h);
                    if (-1 < iVar1) {
                        var_bp_8h = 0;
                        var_bp_10h._0_4_ = 2;
                        var_bp_10h._4_4_ = 0x15690000;
                        var_4h = 1;
                        (**(arg1 + 8))(arg1,&var_bp_10h);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00010424 @ 0x10424 */

int64_t fcn.00010424(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t auStackX_20 [2];
    uint64_t in_stack_00000028;
    
    auStackX_20[0] = arg3;
    iVar2 = in_stack_00000028 / 10 + 1;
    while( true ) {
        iVar1 = (**(*arg1 + 0x30))(*arg1,2,0x20,1,auStackX_20);
        if (iVar1 < 0) {
            return iVar1;
        }
        auStackX_20[0] = auStackX_20[0] & 0x10;
        if (auStackX_20[0] != 0) break;
        fcn.00010cc0(3);
        iVar2 = iVar2 + -1;
        if ((in_stack_00000028 != 0) && (iVar2 == 0)) {
            return -0x7fffffffffffffee;
        }
    }
    return 0;
}


/* fcn.000105c4 @ 0x105c4 */

ulong fcn.000105c4(int64_t arg1)

{
    int32_t var_bp_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    var_ch = 0x155e0000;
    var_bp_10h = 1;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15870000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 3;
    var_ch = 0x15870000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15860000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 3;
    var_ch = 0x15860000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15200000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15400000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15610000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15810000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15600000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15800000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15670000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15820000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15b00000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15b10000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15b20000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15680000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15690000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x156a0000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15830000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x15840000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    var_bp_10h = 1;
    var_ch = 0x156a0000;
    var_4h = 0;
    (**(arg1 + 8))(arg1,&var_bp_10h);
    return 0;
}


/* fcn.00010944 @ 0x10944 */

//WARNING: Variable defined which should be unmapped: var_4h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00010944(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint *arg2_00;
    int iVar7;
    uint32_t uVar8;
    int64_t in_R9;
    int32_t var_38h;
    uint uStack_38;
    ulong uStack_34;
    uint32_t uStack_2c;
    int64_t var_10h;
    uint32_t var_4h;
    
    iVar7 = 1;
    uVar8 = 1;
    iVar6 = arg2;
    iVar5 = fcn.000104b0(arg2);
    if (iVar5 < 0) {
        return iVar5;
    }
    uStack_38 = 1;
    uStack_34 = 0x15860000;
    uStack_2c = 0;
    iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
    uVar3 = uStack_2c;
    if (iVar5 < 0) {
        return iVar5;
    }
    uStack_2c = 0;
    uStack_38 = 1;
    uStack_34 = 0x15870000;
    iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
    uVar1 = uStack_2c;
    if (iVar5 < 0) {
        return iVar5;
    }
    uStack_38 = 3;
    uStack_34 = 0x15860000;
    uStack_2c = 0;
    iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
    uVar4 = uStack_2c;
    if (iVar5 < 0) {
        return iVar5;
    }
    uStack_2c = 0;
    uStack_38 = 3;
    uStack_34 = 0x15870000;
    iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
    uVar2 = uStack_2c;
    if (iVar5 < 0) {
        return iVar5;
    }
    if ((uVar1 == 0) || (uStack_2c == 0)) {
        iVar7 = 5;
        uStack_34 = 0x15830000;
        uVar8 = 5;
        uStack_38 = 2;
        uStack_2c = uVar3;
        iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
        if (iVar5 < 0) {
            return iVar5;
        }
        uStack_2c = uVar4;
    }
    else {
        uStack_38 = 1;
        uStack_34 = 0x15830000;
        uStack_2c = 0;
        if (3 < uVar1) {
            uVar1 = 3;
        }
        iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
        if (iVar5 < 0) {
            return iVar5;
        }
        if (uStack_2c < uVar1) {
            uStack_38 = 2;
            uStack_34 = 0x15830000;
            uStack_2c = uVar1;
            iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
            if (iVar5 < 0) {
                return iVar5;
            }
        }
        uStack_38 = 1;
        if (3 < uVar2) {
            uVar2 = 3;
        }
        uStack_34 = 0x15680000;
        uStack_2c = 0;
        iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
        if (iVar5 < 0) {
            return iVar5;
        }
        if (uVar1 <= uStack_2c) goto code_r0x00010ae8;
        iVar7 = 1;
        uStack_2c = uVar2;
    }
    uStack_38 = 2;
    uStack_34 = 0x15680000;
    iVar5 = (**(arg2 + 8))(arg2,&uStack_38);
    if (iVar5 < 0) {
        return iVar5;
    }
code_r0x00010ae8:
    fcn.00010844(arg2);
    arg2_00 = &uStack_38;
    uStack_38 = 2;
    uStack_2c = iVar7 << 4 | uVar8;
    uStack_34 = 0x15710000;
    iVar5 = (**(arg2 + 8))(arg2);
    if (-1 < iVar5) {
        iVar6 = fcn.00010424(arg2,arg2_00,iVar6,in_R9);
        if (iVar6 < 0) {
            iVar5 = -0x7ffffffffffffff9;
        }
        else {
            fcn.000105c4(arg2);
            iVar5 = 0;
        }
    }
    return iVar5;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


