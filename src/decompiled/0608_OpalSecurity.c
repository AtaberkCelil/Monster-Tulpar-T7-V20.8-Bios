// decompiled by r2ghidra: 0608_OpalSecurity.pe32
// functions: 13

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001032c(arg1,arg2);
    fcn.000103f4(arg1,arg2);
    return;
}


/* fcn.0001032c @ 0x1032c */

void fcn.0001032c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x11178 = *(arg1 + 0x60);
    *0x11170 = arg1;
    fcn.00010ee8();
    puVar4 = fcn.00010ee8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010380:
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
            if ((*0x110f8 == *(puVar4 + 4)) && (*0x11100 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000103f4 @ 0x103f4 */

int64_t fcn.000103f4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t var_20h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    uStackX_8 = 0;
    var_bp_10h = -0x1df6c642;
    var_ch = 0x41be32d4;
    var_bp_8h = 0x7f8950a1;
    var_4h = 0x2998d485;
    var_20h = 1;
    if (*0x11198 == 0) {
        *0x11188 = *(arg2 + 0x60);
        *0x11190 = *(arg2 + 0x58);
        *0x11198 = arg2;
    }
    iVar1 = (**(*0x11188 + 0x40))(4,0x10,0x111a0);
    if (-1 < iVar1) {
        **0x111a0 = 0x10500;
        (*0x111a0)[1] = 0x106c8;
        iVar1 = (**(*0x11188 + 0x80))(&uStackX_8,0x110c0,0,*0x111a0);
        if (-1 < iVar1) {
            (**(*0x11190 + 0x48))(L"MemoryOverwriteRequestControl",&var_bp_10h,0,&var_20h,0x110f0);
        }
    }
    return iVar1;
}


/* fcn.00010ee8 @ 0x10ee8 */

int64_t fcn.00010ee8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11180 == 0) {
        *0x11180 = 0;
        if (*(*0x11170 + 0x68) != 0) {
            piVar2 = *(*0x11170 + 0x70);
            do {
                if ((*0x110d0 == *piVar2) && (*0x110d8 == piVar2[1])) {
                    *0x11180 = (*(*0x11170 + 0x70))[uVar1 * 3 + 2];
                    return *0x11180;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11170 + 0x68));
        }
    }
    return *0x11180;
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


/* fcn.00010fb0 @ 0x10fb0 */

int64_t fcn.00010fb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00010744 @ 0x10744 */

ulong fcn.00010744(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uStackX_8;
    ulong uStackX_10;
    
    puVar1 = *0x111a8;
    uStackX_10 = 0;
    uStackX_8 = 0x200;
    iVar2 = (**(*0x11188 + 0x40))(4,0x200,&uStackX_10);
    if (iVar2 < 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        iVar2 = (**puVar1)(puVar1,0,0,0,0,0x200,uStackX_10,&uStackX_8);
        if (iVar2 < 0) {
            uVar3 = 0x8000000000000003;
        }
        else {
            puVar1[3] = uStackX_10;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000107f0 @ 0x107f0 */

ulong fcn.000107f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int64_t arg1_00;
    ulong *puVar8;
    ulong uVar9;
    int64_t iVar10;
    uint16_t uVar11;
    ulong *puVar12;
    uint16_t uVar13;
    int64_t iVar14;
    bool bVar15;
    int64_t iStackX_8;
    ulong uStack_208;
    uint8_t uStack_17e;
    
    arg1_00 = *0x111a8;
    iStackX_8 = arg1;
    fcn.00010fb0(&uStack_208 + 2,0,0x1fe);
    iVar10 = *(arg1_00 + 0x18);
    if (arg3 == 1) {
        puVar8 = arg2 + 0x23;
        iVar14 = 4;
        puVar12 = &uStack_208;
        do {
            uVar9 = puVar8[1];
            uVar5 = puVar8[2];
            uVar6 = puVar8[3];
            *puVar12 = *puVar8;
            puVar12[1] = uVar9;
            uVar9 = puVar8[4];
            uVar7 = puVar8[5];
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
            uVar5 = puVar8[6];
            uVar6 = puVar8[7];
            puVar12[4] = uVar9;
            puVar12[5] = uVar7;
            uVar9 = puVar8[8];
            uVar7 = puVar8[9];
            puVar12[6] = uVar5;
            puVar12[7] = uVar6;
            uVar5 = puVar8[10];
            uVar6 = puVar8[0xb];
            puVar12[8] = uVar9;
            puVar12[9] = uVar7;
            uVar1 = *(puVar8 + 0xc);
            uVar2 = *(puVar8 + 100);
            uVar3 = *(puVar8 + 0xd);
            uVar4 = *(puVar8 + 0x6c);
            puVar12[10] = uVar5;
            puVar12[0xb] = uVar6;
            uVar9 = puVar8[0xe];
            uVar5 = puVar8[0xf];
            puVar8 = puVar8 + 0x10;
            *(puVar12 + 0xc) = uVar1;
            *(puVar12 + 100) = uVar2;
            *(puVar12 + 0xd) = uVar3;
            *(puVar12 + 0x6c) = uVar4;
            puVar12[0xe] = uVar9;
            puVar12[0xf] = uVar5;
            iVar14 = iVar14 + -1;
            puVar12 = puVar12 + 0x10;
        } while (iVar14 != 0);
    }
    uVar11 = CONCAT11(*(iVar10 + 6),*(iVar10 + 7));
    if (uVar11 == 0) {
        uVar9 = 0x8000000000000003;
    }
    else {
        uVar13 = 0;
        bVar15 = uVar11 != 0;
        while (bVar15) {
            if (*(uVar13 + 8 + iVar10) == '\x02') {
                iStackX_8 = 0;
                iVar10 = (**(*0x11188 + 0x40))(4,0x200,&iStackX_8);
                if (-1 < iVar10) {
                    (**(*0x11188 + 0x168))(iStackX_8,0x200,0);
                    (**(arg1_00 + 8))(arg1_00,0,0,2,0x400,0x200,iStackX_8);
                    (**(*0x11188 + 0x48))(iStackX_8);
                }
                break;
            }
            if ((*(uVar13 + 8 + iVar10) == -0x12) && ((uStack_17e & 0x80) == 0)) {
                fcn.00010988(arg1_00);
                break;
            }
            uVar13 = uVar13 + 1;
            bVar15 = uVar13 < uVar11;
        }
        uVar9 = 0;
    }
    return uVar9;
}


/* fcn.00010988 @ 0x10988 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00010988(int64_t arg1)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iStackX_10;
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    ulong auStack_38 [2];
    int64_t var_10h;
    
    uStackX_20 = 0;
    iStackX_10 = 0;
    auStack_38[0] = 4;
    iVar1 = (**(*0x11188 + 0x40))(4,4,&uStackX_20);
    if (iVar1 < 0) {
code_r0x000109cb:
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        uVar2 = 0x100;
        iVar1 = (**(arg1 + 8))(arg1,0,0,0xee,0x100,0x200,uStackX_20);
        if (-1 < iVar1) {
            iVar1 = (**(*0x11188 + 0x40))(4,auStack_38[0],&iStackX_10);
            if (iVar1 < 0) goto code_r0x000109cb;
            iVar1 = (**arg1)(arg1,0,0,0xee,0x100,0x200,iStackX_10,auStack_38);
            if (-1 < iVar1) {
                do {
                    if (uVar2 == CONCAT11(*(iStackX_10 + 2),*(iStackX_10 + 3))) {
                        uStackX_18 = 0;
                        iVar1 = (**(*0x11188 + 0x40))(4,4,&uStackX_18);
                        if (iVar1 < 0) {
                            iVar1 = -0x7ffffffffffffff7;
                        }
                        else {
                            iVar1 = (**(arg1 + 8))(arg1,0,0,0xee,0x500,0x200,uStackX_18);
                            (**(*0x11188 + 0x48))(uStackX_18);
                        }
                        return iVar1;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < 0x200);
            }
            (**(*0x11188 + 0x48))(iStackX_10);
        }
        (**(*0x11188 + 0x48))(uStackX_20);
    }
    return iVar1;
}


