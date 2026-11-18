// decompiled by r2ghidra: 0354_PowerLostNotifyDxe.pe32
// functions: 33

/* entry0 @ 0x10364 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010378(arg1,in_RDX);
    fcn.0001044c(arg1,in_RDX);
    return;
}


/* fcn.00010378 @ 0x10378 */

void fcn.00010378(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x119a8 = *(arg1 + 0x60);
    *0x119b0 = *(arg1 + 0x58);
    *0x119a0 = arg1;
    fcn.00010e90();
    puVar4 = fcn.00010e90();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d7:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102c0();
                }
                fcn.000102d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
                return;
            }
            if ((*0x114e0 == *(puVar4 + 4)) && (*0x114e8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d7;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.0001044c @ 0x1044c */

ulong fcn.0001044c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t aiStackX_10 [3];
    uchar auStack_cb8 [2720];
    char cStack_218;
    
    uStackX_8 = 0xca9;
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x119b0 + 0x48))(L"Setup",0x114c0,0,&uStackX_8,auStack_cb8);
    if ((-1 < iVar1) && (cStack_218 != '\x02')) {
        (**(*0x119a8 + 0x50))(0x200,8,0x10738,0,aiStackX_10);
        (**(*0x119a8 + 0xa8))(0x114b0,aiStackX_10[0],0x11990);
        (**(*0x119a8 + 0x68))(aiStackX_10[0]);
    }
    return 0;
}


/* fcn.00010e90 @ 0x10e90 */

int64_t fcn.00010e90(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x119c0 == 0) {
        *0x119c0 = 0;
        if (*(*0x119a0 + 0x68) != 0) {
            piVar2 = *(*0x119a0 + 0x70);
            do {
                if ((*0x114d0 == *piVar2) && (*0x114d8 == piVar2[1])) {
                    *0x119c0 = (*(*0x119a0 + 0x70))[uVar1 * 3 + 2];
                    return *0x119c0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x119a0 + 0x68));
        }
    }
    return *0x119c0;
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
    
    //[00] -r-x section size 4672 named .text
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


/* fcn.00010508 @ 0x10508 */

int64_t fcn.00010508(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t auStackX_8 [2];
    uint8_t auStack_88 [12];
    uint32_t uStack_7c;
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint32_t uStack_64;
    uint32_t uStack_60;
    ulong auStack_48 [4];
    uchar uStack_24;
    uint32_t *puStack_20;
    uint8_t *puStack_18;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.000102a0(auStack_48,0x38);
        fcn.000102a0(&uStack_78,0x2c);
        fcn.000102a0(auStack_88,0x10);
        fcn.000102a0(auStackX_8,4);
        puStack_20 = &uStack_78;
        uStack_70 = 0;
        puStack_18 = auStack_88;
        uStack_74 = 0xc;
        uStack_78 = uStack_78 & 0xffffff09 | 9;
        auStackX_8[0] = auStackX_8[0] & 0xffffffd8 | 0x800000d8;
        auStack_48[0] = 50000000;
        uStack_60 = arg3 & 1;
        uStack_24 = 0;
        uStack_64 = auStackX_8[0];
        iVar1 = (**(arg1 + 8))(arg1,arg2 & 0xffffffff,auStack_48,0);
        if (-1 < iVar1) {
            if ((((uStack_7c & 0x1fe0000) == 0) && ((uStack_7c & 0xe000000) == 0)) && ((auStack_88[0] & 1) == arg3)) {
                iVar1 = 0;
            }
            else {
                iVar1 = -0x7ffffffffffffffd;
            }
        }
    }
    return iVar1;
}


/* fcn.0001061c @ 0x1061c */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_dh

int64_t fcn.0001061c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t var_fh;
    uint32_t auStackX_20 [2];
    int8_t var_33h;
    int64_t var_37h;
    int64_t var_3fh;
    int64_t var_7fh;
    uint8_t auStack_98 [8];
    uchar auStack_90 [16];
    uint32_t uStack_80;
    uchar uStack_7c;
    uint uStack_78;
    uint32_t uStack_6c;
    ulong uStack_50;
    int8_t var_39h;
    int64_t var_31h;
    uchar uStack_2c;
    int64_t var_21h;
    int32_t var_19h;
    int32_t var_dh;
    
    uVar1 = arg3;
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        fcn.000102a0(&uStack_50,0x38);
        fcn.000102a0(&uStack_80,0x2c);
        fcn.000102a0(auStack_90,0x10);
        fcn.000102a0(auStackX_20,4);
        unique0x00008f00 = &uStack_80;
        uStack_78 = 0;
        arg3 = &uStack_50;
        unique0x00008f00 = auStack_90;
        uStack_7c = 4;
        uStack_80 = uStack_80 & 0xffffff0a | 10;
        auStackX_20[0] = auStackX_20[0] & 0xfffff8d8 | 0xd8;
        uStack_50 = 50000000;
        uStack_2c = 0;
        uStack_6c = auStackX_20[0];
        iVar2 = (**(arg1 + 8))(arg1,arg2 & 0xffffffffU,arg3,0);
        if (-1 < iVar2) {
            arg3 = 0;
            section..text(auStack_98,auStack_90,4);
        }
    }
    if ((-1 < iVar2) && (uVar1 != (auStack_98[0] & 1))) {
        iVar2 = fcn.00010508(arg1,arg2 & 0xffffffffU,CONCAT71(arg3 >> 8,uVar1));
    }
    return iVar2;
}


/* fcn.00010e54 @ 0x10e54 */

int64_t fcn.00010e54(void)

{
    if (*0x119b8 == 0) {
        (**(*0x119a8 + 0x140))(0x114a0,0,0x119b8);
    }
    return *0x119b8;
}


/* fcn.00010b4c @ 0x10b4c */

ulong fcn.00010b4c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    int64_t arg2_00;
    
    arg2_00 = arg2;
    cVar1 = fcn.00010fd0(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        cVar1 = fcn.00010fac(arg1 & 0xffffffff);
        if (cVar1 == '\0') {
            uVar2 = 0x8000000000000003;
        }
        else {
            fcn.00011040(arg1 & 0xffffffff,arg2_00,0xfffffffe,arg2 & 0xffffffff);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00011208 @ 0x11208 */

ulong fcn.00011208(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010f38();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x11500;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x11740;
    }
    return uVar2;
}


/* fcn.00010f38 @ 0x10f38 */

ulong fcn.00010f38(void)

{
    char cVar1;
    
    cVar1 = fcn.00010efc();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00010efc(), cVar1 != '\x05')) && (cVar1 = fcn.00010efc(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00010efc(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00010cb4 @ 0x10cb4 */

ulong fcn.00010cb4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000108c8(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010950(7,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00010c64 @ 0x10c64 */

ulong fcn.00010c64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000108c8(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010950(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00011238 @ 0x11238 */

ulong fcn.00011238(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint *in_stack_00000048;
    uint8_t *in_stack_00000050;
    
    uVar7 = arg4;
    if ((uVar7 < 0x14) && ((0x800f3U >> (uVar7 & 0x1f) & 1) != 0)) {
        if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar1 = arg1 + 0xd8;
            iVar8 = 0xfffffff;
            iVar5 = 0xfffffff;
            do {
                if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
                iVar5 = iVar5 + -1;
            } while (0 < iVar5);
            if (iVar5 != 0) {
                *in_stack_00000050 = 4;
                *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) =
                     arg2 << 0x18 | arg3 & 0xffff;
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
                *(uVar6 + 0xc0000000) = arg4 << 8 | *(uVar6 + 0xc0000000) & 0x7f;
                *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) = 0xf000;
                if ((((uVar7 == 1) || (uVar7 == 5)) || (uVar7 == 7)) || (uVar7 == 0x13)) {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000048;
                }
                else {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
                }
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
                do {
                    uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                    if ((uVar2 & 1) == 0) break;
                    iVar8 = iVar8 + -1;
                } while (0 < iVar8);
                if (iVar8 != 0) {
                    uVar4 = uVar2 >> 1 & 3;
                    *in_stack_00000050 = uVar4;
                    if (uVar4 == 0) {
                        if (((arg4 & 0xfffffff9U) == 0) && (uVar7 != 2)) {
                            *in_stack_00000048 =
                                 *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000);
                        }
                        return 0;
                    }
                    if (uVar4 != 2) {
                        return 0x8000000000000007;
                    }
                    return 0x8000000000000010;
                }
            }
            uVar3 = 0x8000000000000012;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00010fd0 @ 0x10fd0 */

uint64_t fcn.00010fd0(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.00010f38();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.00011208(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.00011208(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00010fac @ 0x10fac */

bool fcn.00010fac(int64_t param_1)

{
    unkint7 extraout_RAX;
    int aiStackX_10 [6];
    
    fcn.00010ba4(param_1,aiStackX_10);
    return -1 < extraout_RAX && aiStackX_10[0] == 0;
}


/* fcn.00011040 @ 0x11040 */

void fcn.00011040(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uStackX_8;
    uint32_t uStackX_10;
    uchar auStackX_18 [8];
    
    uStackX_10 = CONCAT31(uStackX_10._1_3_,arg2);
    uVar5 = ~arg3 | arg4;
    uVar8 = arg1;
    uVar1 = arg1 >> 0x10;
    uVar7 = 0;
    if ((uVar5 & 0xfffffffe) != 0) {
        cVar2 = fcn.00010fd0(arg1);
        uVar7 = 0;
        if (cVar2 != '\0') {
            uVar6 = uVar8 & 0x1ff;
            arg2 = uVar1 & 0xf1f;
            iVar3 = fcn.00010950(6,arg2);
            if ((-1 < iVar3) && (uVar7 = uStackX_10 >> (uVar6 & 0x1f) & 1, uVar7 != 0)) {
                arg2 = uVar6 >> 5;
                fcn.00010d04(uVar1 & 0xf1f,arg2,1 << (uVar6 & 0x1f));
            }
        }
    }
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
        cVar2 = fcn.00010fd0(arg1 & 0xffffffff);
        uVar6 = 0;
        if (cVar2 != '\0') {
            uVar5 = uVar8 & 0x1ff;
            arg2 = uVar1 & 0xf1f;
            iVar3 = fcn.00010950(7,arg2);
            if ((-1 < iVar3) && (uVar6 = uStackX_8 >> (uVar5 & 0x1f) & 1, uVar6 != 0)) {
                arg2 = uVar5 >> 5;
                fcn.00010dac(uVar1 & 0xf1f,arg2,1 << (uVar5 & 0x1f));
            }
        }
    }
    iVar3 = fcn.00011208(auStackX_18);
    uVar5 = fcn.00010f70(arg1 & 0xffffffff,arg2);
    puVar4 = *((uVar1 & 0x1f) * 0x1e + iVar3) << 0x10 | (uVar5 & 0xffff0000 | 0xfffd0000) << 8 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & arg3 | arg4;
    if (uVar7 != 0) {
        fcn.00010d58(uVar1 & 0xf1f,(uVar8 & 0x1ff) >> 5,1 << (uVar8 & 0x1ff & 0x1f));
    }
    if (uVar6 != 0) {
        fcn.00010e00(uVar8 >> 0x10 & 0xf1f,(uVar8 & 0x1ff) >> 5,1 << (uVar8 & 0x1ff & 0x1f));
    }
    return;
}


/* fcn.000108c8 @ 0x108c8 */

uint64_t fcn.000108c8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStackX_8;
    uint32_t auStackX_18 [4];
    
    uVar6 = arg1;
    uVar7 = arg2;
    iVar2 = fcn.00011208(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.00010f38();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.00011208();
        cVar1 = fcn.00010f38();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00010950 @ 0x10950 */

ulong fcn.00010950(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    int iVar5;
    int in_R8D;
    uint *in_R9;
    uchar auStackX_8 [8];
    
    uVar3 = arg2 & 0x1f;
    iVar1 = fcn.00011208(auStackX_8);
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 4);
    }
    else if (iVar5 == 1) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xc);
    }
    else if (iVar5 == 2) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 10);
    }
    else if (iVar5 == 3) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x10);
    }
    else if (iVar5 == 4) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xe);
    }
    else if (iVar5 == 5) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x14);
    }
    else if (iVar5 == 6) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x16);
    }
    else {
        if (iVar5 != 7) {
            return 0x8000000000000003;
        }
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x18);
    }
    if (uVar2 == 0xffff) {
        return 0x8000000000000003;
    }
    if (iVar5 - 6U < 2) {
        in_R8D = in_R8D * 8;
    }
    else {
        in_R8D = in_R8D * 4;
    }
    *in_R9 = *(*puVar4 << 0x10 | (uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.00010a70 @ 0x10a70 */

ulong fcn.00010a70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    iVar2 = fcn.00011208(auStackX_10);
    if (iVar6 == 6) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x16);
        fcn.00010c64(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    else {
        if (iVar6 != 7) {
            return 0x8000000000000003;
        }
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x18);
        fcn.00010cb4(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    if (uVar1 == 0xffff) {
        return 0x8000000000000003;
    }
    auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
    uVar3 = fcn.00011238(0xf9000,CONCAT71(arg2_00 >> 8,*puVar5),uVar1 + arg3 * 8,0x13);
    return uVar3;
}


/* fcn.00010efc @ 0x10efc */

void fcn.00010efc(void)

{
    if (*0x114f0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x114f0 = '\x05';
        }
        else {
            *0x114f0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00010ba4 @ 0x10ba4 */

uint64_t fcn.00010ba4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int8_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    
    uVar2 = arg1 & 0xffffffff;
    cVar1 = fcn.00010fd0(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar7 = uVar2 & 0x1ff;
        uVar2 = uVar2 >> 0x10 & 0x1f;
        iVar3 = fcn.00011208(auStackX_18);
        iVar5 = (uVar2 & 0xffffffff) * 0x1e;
        if (*(iVar5 + 2 + iVar3) == -1) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar6 = *(iVar5 + 2 + iVar3) + (uVar7 >> 3 & 0x1fffffff) * 4;
            iVar4 = (uVar7 & 7) << 2;
            *arg2 = (*((uVar6 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar5 + iVar3) << 0x10 | uVar6 & 0xffff) & 3 << iVar4)
                    >> iVar4;
            uVar2 = 0 >> iVar4;
        }
    }
    return uVar2;
}


/* fcn.00010d04 @ 0x10d04 */

ulong fcn.00010d04(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000108c8(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010a70(6,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00010dac @ 0x10dac */

ulong fcn.00010dac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000108c8(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010a70(7,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00010f70 @ 0x10f70 */

int fcn.00010f70(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.00011208(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10;
}


/* fcn.00010d58 @ 0x10d58 */

ulong fcn.00010d58(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000108c8(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010a70(6,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00010e00 @ 0x10e00 */

ulong fcn.00010e00(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000108c8(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010a70(7,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


