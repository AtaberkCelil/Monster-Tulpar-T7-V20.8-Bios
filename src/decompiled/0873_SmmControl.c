// decompiled by r2ghidra: 0873_SmmControl.pe32
// functions: 24

/* entry0 @ 0x11104 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.00011130(arg1,in_RDX);
    iVar1 = fcn.000113a0(arg1,in_RDX);
    if (iVar1 < 0) {
        fcn.00011330();
    }
    return iVar1;
}


/* fcn.00011130 @ 0x11130 */

void fcn.00011130(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x13500 = *(arg1 + 0x58);
    *0x134f8 = *(arg1 + 0x60);
    *0x134f0 = arg1;
    *0x13508 = *0x13500;
    *0x13520 = *0x134f8;
    (**(*0x134f8 + 0x50))(0x201,8,0x11be4,0,0x13510);
    (**(*0x13520 + 0x50))(0x60000202,8,0x11bf0,0,0x13518);
    fcn.00011c18();
    puVar4 = fcn.00011c18();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000111e9:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011100();
                fcn.000110f0();
                uVar2 = in(0x1808);
                fcn.000110d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000110c0();
                }
                fcn.000110d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000110f0();
                }
                else {
                    fcn.000110e0();
                }
code_r0x00011252:
                *0x13588 = *0x13500;
                (**(*0x134f8 + 0x50))(0x60000202,0x10,0x11c88,0,0x13580);
                (**(*0x134f8 + 0x50))(0x201,0x10,0x11c84,0,0x13590);
                fcn.00011c9c();
                (**(*0x134f8 + 0x170))(0x200,0x10,0x11cfc,0,0x13040,0x13570);
                (**(*0x134f8 + 0x170))(0x200,0x10,0x11d24,0,0x13030,0x13578);
                return;
            }
            if ((*0x13050 == *(puVar4 + 4)) && (*0x13058 == *(puVar4 + 8))) goto code_r0x00011252;
        }
        else if (uVar1 == 4) goto code_r0x000111e9;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113a0 @ 0x113a0 */

ulong fcn.000113a0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t aiStackX_10 [3];
    
    *0x13568 = 0;
    *0x13598 = 0x1800;
    *0x13548 = 0x63733469;
    *0x13558 = 0x11488;
    *0x13560 = 0x11508;
    *0x13550 = arg1;
    aiStackX_10[0] = arg2;
    (**(*0x134f8 + 0x148))(0x13550,0x13010,0x13558,0);
    uVar1 = (**(*0x134f8 + 0x170))(0x200,0x10,0x11458,0,0x13040,aiStackX_10);
    fcn.0001154c();
    return uVar1;
}


/* fcn.0001154c @ 0x1154c */

uint32_t fcn.0001154c(uint64_t param_1)

{
    char cVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int aiStackX_8 [2];
    
    uVar5 = *0x13598 + 4;
    uVar3 = in(uVar5);
    if ((uVar3 & 1) == 0) {
        out(*0x13598,0xffff);
        out(*0x13598 + 2,0);
        out(*0x13598 + 4,0);
        out(*0x13598 + 0x6c,0x32d04);
        param_1 = *0x13598 + 0x7c;
        uVar5 = param_1 & 0xffff;
        uVar4 = in(param_1);
        out(param_1,uVar4 & 0xfffbffff);
    }
    cVar1 = fcn.00011d78(param_1,uVar5);
    fcn.00011db0(aiStackX_8);
    cVar2 = fcn.00011d78();
    uVar4 = aiStackX_8[0] - 1;
    for (uVar6 = ((cVar1 != '\0') + 8) * 0x100; uVar6 <= (((cVar2 != '\0') + 8) * 0x100 | uVar4); uVar6 = uVar6 + 1) {
        uVar5 = 0;
        fcn.00011bb0(uVar6);
        do {
            fcn.00011784(3,uVar6);
            fcn.000118a8(0,uVar6,uVar5,0xffffffff);
            uVar7 = uVar5 + 1;
            uVar5 = uVar7;
            uVar8 = fcn.00011bb0(uVar6);
        } while (uVar7 <= uVar8 >> 5);
    }
    cVar1 = fcn.00011d78();
    fcn.00011db0(aiStackX_8);
    cVar2 = fcn.00011d78();
    for (uVar4 = ((cVar1 != '\0') + 8) * 0x100; uVar4 <= (((cVar2 != '\0') + 8) * 0x100 | aiStackX_8[0] - 1U);
        uVar4 = uVar4 + 1) {
        uVar5 = 0;
        fcn.00011bb0(uVar4);
        do {
            fcn.000118a8(4,uVar4,uVar5,0);
            uVar8 = uVar5 + 1;
            uVar5 = uVar8;
            uVar6 = fcn.00011bb0(uVar4);
        } while (uVar8 <= uVar6 >> 5);
    }
    out(*0x13598 + 0x44,0xffff);
    out(*0x13598 + 0x34,0xffffffff);
    uVar4 = in(*0x13598 + 0x30);
    uVar4 = uVar4 & 0x80 | 0x21;
    out(*0x13598 + 0x30,uVar4);
    return uVar4;
}


/* fcn.00011330 @ 0x11330 */

void fcn.00011330(void)

{
    (**(*0x134f8 + 0x70))(*0x13570);
    (**(*0x134f8 + 0x70))(*0x13578);
    (**(*0x134f8 + 0x70))(*0x13580);
    (**(*0x134f8 + 0x70))(*0x13590);
    (**(*0x13520 + 0x70))(*0x13510);
    //WARNING: Could not recover jumptable at 0x0001139b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13520 + 0x70))(*0x13518);
    return;
}


/* fcn.00011c18 @ 0x11c18 */

int64_t fcn.00011c18(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13530 == 0) {
        *0x13530 = 0;
        if (*(*0x134f0 + 0x68) != 0) {
            piVar2 = *(*0x134f0 + 0x70);
            do {
                if ((*0x13020 == *piVar2) && (*0x13028 == piVar2[1])) {
                    *0x13530 = (*(*0x134f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x13530;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x134f0 + 0x68));
        }
    }
    return *0x13530;
}


/* fcn.00011100 @ 0x11100 */

uint64_t fcn.00011100(void)

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


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(void)

{
    return;
}


/* fcn.000110d0 @ 0x110d0 */

uint64_t fcn.000110d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110c2 @ 0x110c2 */

void fcn.000110c2(void)

{
    return;
}


/* fcn.000110e0 @ 0x110e0 */

void fcn.000110e0(void)

{
    return;
}


/* fcn.00011c9c @ 0x11c9c */

void fcn.00011c9c(void)

{
    int64_t iVar1;
    
    if ((((*0x13540 == 0) && (*0x13538 == '\0')) && (*0x134f8 != 0)) && (*(*0x134f8 + 0x140) != NULL)) {
        iVar1 = (**(*0x134f8 + 0x140))(0x13000,0,0x13540);
        if (iVar1 < 0) {
            *0x13540 = 0;
        }
    }
    return;
}


/* fcn.00011d78 @ 0x11d78 */

ulong fcn.00011d78(void)

{
    char cVar1;
    
    cVar1 = fcn.00011d3c();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00011d3c(), cVar1 != '\x05')) && (cVar1 = fcn.00011d3c(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00011d3c(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00011db0 @ 0x11db0 */

ulong fcn.00011db0(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011d78();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x13070;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x132b0;
    }
    return uVar2;
}


/* fcn.00011bb0 @ 0x11bb0 */

ushort fcn.00011bb0(int64_t arg1)

{
    ushort uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t auStackX_8 [8];
    
    uVar3 = arg1;
    iVar2 = fcn.00011db0(auStackX_8);
    if ((uVar3 & 0x1f) < auStackX_8[0]) {
        uVar1 = *((uVar3 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00011784 @ 0x11784 */

ulong fcn.00011784(int64_t arg1,int64_t arg2)

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
    iVar1 = fcn.00011db0(auStackX_8);
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
    *in_R9 = *((uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | *puVar4 << 0x10 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.000118a8 @ 0x118a8 */

ulong fcn.000118a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uchar auStackX_10 [8];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    bVar1 = false;
    iVar2 = fcn.00011db0(auStackX_10);
    if (iVar6 == 0) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar4 = *(puVar5 + 4);
    }
    else {
        if (iVar6 == 1) {
            puVar5 = uVar4 * 0x1e + iVar2;
            uVar4 = *(puVar5 + 0xc);
        }
        else {
            if (iVar6 == 2) {
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 10);
                goto code_r0x0001195b;
            }
            if (iVar6 == 3) {
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 0x10);
            }
            else {
                if (iVar6 == 4) {
                    puVar5 = uVar4 * 0x1e + iVar2;
                    uVar4 = *(puVar5 + 0xe);
                    goto code_r0x0001195b;
                }
                if (iVar6 != 5) {
                    return 0x8000000000000003;
                }
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 0x14);
            }
        }
        bVar1 = true;
    }
code_r0x0001195b:
    if (uVar4 == 0xffff) {
        return 0x8000000000000003;
    }
    if (bVar1) {
        fcn.00011ac0(arg2 & 0xffffffffU,arg3 & 0xffffffffU,auStackX_8);
        if (auStackX_8[0] != 0) {
            if ((auStackX_8[0] & (~arg4 | in_stack_00000028)) == 0) {
                auStackX_8[0] = 0;
            }
            else {
                fcn.00011b10(arg2 & 0xffffffff,arg3 & 0xffffffff,auStackX_8[0]);
            }
        }
    }
    uVar4 = uVar4 + arg3 * 4;
    puVar3 = *puVar5 << 0x10 | (uVar4 & 0xffff0000 | 0xfffd0000) << 8 | uVar4 & 0xffff;
    *puVar3 = *puVar3 & arg4 | in_stack_00000028;
    if ((bVar1) && (auStackX_8[0] != 0)) {
        fcn.00011b60(arg2 & 0xffffffffU,arg3 & 0xffffffffU,auStackX_8[0]);
    }
    return 0;
}


/* fcn.00011ac0 @ 0x11ac0 */

ulong fcn.00011ac0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000116fc(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00011784(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00011b10 @ 0x11b10 */

ulong fcn.00011b10(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    uint64_t arg2_00;
    
    arg2_00 = arg1 & 0xffffffff;
    cVar1 = fcn.000116fc(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00011a08(arg1,arg2_00,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00011b60 @ 0x11b60 */

ulong fcn.00011b60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    uint64_t arg2_00;
    
    arg2_00 = arg1 & 0xffffffff;
    cVar1 = fcn.000116fc(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00011a08(arg1,arg2_00,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00011de0 @ 0x11de0 */

ulong fcn.00011de0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000116fc @ 0x116fc */

uint64_t fcn.000116fc(int64_t arg1,int64_t arg2)

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
    iVar2 = fcn.00011db0(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.00011d78();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.00011db0();
        cVar1 = fcn.00011d78();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00011a08 @ 0x11a08 */

ulong fcn.00011a08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    uVar5 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    uVar6 = arg2 & 0xffffffff;
    iVar2 = fcn.00011db0(auStackX_10);
    iVar4 = (uVar5 & 0xffffffff) * 0x1e;
    uVar1 = *(iVar4 + 0x16 + iVar2);
    fcn.00011ac0(uVar6 & 0xffffffff,arg2_00,auStackX_8);
    if (uVar1 == 0xffff) {
        uVar3 = 0x8000000000000003;
    }
    else {
        auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
        uVar3 = fcn.00011de0(0xf9000,CONCAT71(arg2_00 >> 8,*(iVar4 + iVar2)),uVar1 + arg3 * 8,0x13);
    }
    return uVar3;
}


/* fcn.00011d3c @ 0x11d3c */

void fcn.00011d3c(void)

{
    if (*0x13060 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x13060 = '\x05';
        }
        else {
            *0x13060 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


