// decompiled by r2ghidra: 0373_RetimerCapsuleUpdate.pe32
// functions: 12

/* entry0 @ 0x10304 */

void entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    int64_t aiStackX_8 [2];
    uchar auStackX_18 [16];
    
    fcn.000103ac(arg1,in_RDX);
    aiStackX_8[0] = arg1;
    fcn.00010474();
    *0x10be0 = 0x1064c;
    *0x10be8 = 0x10708;
    *0x10bf0 = 0x1079c;
    iVar1 = (**(*0x10b10 + 0x148))(aiStackX_8,0x10ac0,0x10be0,0);
    if (-1 < iVar1) {
        (**(*0x10b10 + 0x170))(0x200,8,0x10824,0,0x10ab0,auStackX_18);
    }
    return;
}


/* fcn.000103ac @ 0x103ac */

void fcn.000103ac(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10b10 = *(arg1 + 0x60);
    *0x10b08 = arg1;
    fcn.000109a4();
    puVar4 = fcn.000109a4();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010400:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102c0();
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
            if ((*0x10ad0 == *(puVar4 + 4)) && (*0x10ad8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010400;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010474 @ 0x10474 */

ulong fcn.00010474(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ushort *puVar5;
    ulong uVar6;
    uchar *puVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    char cVar11;
    uint8_t *puVar12;
    uint8_t uVar13;
    
    iVar3 = fcn.00010968();
    iVar3 = (**(iVar3 + 0x20))(0x1e8);
    iVar4 = fcn.00010968();
    uVar1 = (**(iVar4 + 0x18))(0x1e7);
    uVar13 = 0;
    if ((iVar3 == 0) || (uVar1 == 0)) {
        *0x10b04 = 0;
        uVar6 = 0x8000000000000006;
    }
    else {
        uVar9 = 0;
        puVar7 = 0x10bc1;
        do {
            puVar7[-1] = uVar9;
            uVar9 = uVar9 + 1;
            *puVar7 = 0;
            *(puVar7 + 1) = 0;
            puVar7 = puVar7 + 0x10;
        } while (uVar9 < 2);
        if (6 < *0x10b00 - 1) {
            *0x10b00 = 0;
            puVar5 = 0x10b31;
            iVar4 = 8;
            do {
                *(puVar5 + -1) = 0xff;
                *puVar5 = 0;
                puVar5 = puVar5 + 8;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (uVar1 != 0) {
                puVar12 = iVar3 + 5;
                uVar10 = *0x10bc2;
                *0x10b00 = 0;
                cVar11 = *0x10bc1;
                do {
                    if (((puVar12[-1] == 1) && ((puVar12[1] & 0xf) < 8)) && (*puVar12 < 8)) {
                        if (7 < *0x10b00) break;
                        iVar2 = *(puVar12 + -5);
                        if (iVar2 == 0) {
                            if (((uVar10 & 0xffff) >> (*puVar12 & 0x1f) & 1) == 0) {
                                uVar10 = uVar10 & 0xffff | 1 << (*puVar12 & 0x1f);
                                cVar11 = cVar11 + '\x01';
                                *0x10bc2 = uVar10;
                                *0x10bc1 = cVar11;
                            }
                            iVar2 = *(puVar12 + -5);
                            if (iVar2 != 0) goto code_r0x00010593;
                        }
                        else {
code_r0x00010593:
                            if (iVar2 != 1) goto code_r0x000105e2;
                        }
                        uVar8 = 0;
                        if (*0x10b00 != 0) {
                            do {
                                if (*(uVar8 * 0x10 + 0x10b30) == (puVar12[1] & 0xf)) {
                                    *(uVar8 * 0x10 + 0x10b31) = *(uVar8 * 0x10 + 0x10b31) | 1 << (*puVar12 & 0x1f);
                                    goto code_r0x000105e2;
                                }
                                uVar9 = uVar8 + 1;
                                uVar8 = uVar9;
                            } while (uVar9 < *0x10b00);
                        }
                        *(*0x10b00 * 0x10 + 0x10b30) = puVar12[1] & 0xf;
                        *(*0x10b00 * 0x10 + 0x10b31) = 1 << (*puVar12 & 0x1f);
                        *0x10b00 = *0x10b00 + 1;
                    }
code_r0x000105e2:
                    uVar13 = uVar13 + 1;
                    puVar12 = puVar12 + 0x14;
                } while (uVar13 < uVar1);
            }
        }
        uVar6 = 0;
        *0x10b04 = 1;
    }
    return uVar6;
}


/* fcn.000109a4 @ 0x109a4 */

int64_t fcn.000109a4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10b20 == 0) {
        *0x10b20 = 0;
        if (*(*0x10b08 + 0x68) != 0) {
            piVar2 = *(*0x10b08 + 0x70);
            do {
                if ((*0x10aa0 == *piVar2) && (*0x10aa8 == piVar2[1])) {
                    *0x10b20 = (*(*0x10b08 + 0x70))[uVar1 * 3 + 2];
                    return *0x10b20;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10b08 + 0x68));
        }
    }
    return *0x10b20;
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


/* fcn.00010968 @ 0x10968 */

int64_t fcn.00010968(void)

{
    if (*0x10b18 == 0) {
        (**(*0x10b10 + 0x140))(0x10a90,0,0x10b18);
    }
    return *0x10b18;
}


/* fcn.00010a10 @ 0x10a10 */

void fcn.00010a10(int64_t arg1)

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
            fcn.000102c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


