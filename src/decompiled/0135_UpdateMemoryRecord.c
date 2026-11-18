// decompiled by r2ghidra: 0135_UpdateMemoryRecord.pe32
// functions: 15

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001032c(arg1,arg2);
    fcn.0001063c(arg1,arg2);
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
    
    *0x10cf0 = *(arg1 + 0x60);
    *0x10ce8 = arg1;
    fcn.00010a70();
    puVar4 = fcn.00010a70();
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
            if ((*0x10c98 == *(puVar4 + 4)) && (*0x10ca0 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.0001063c @ 0x1063c */

ulong fcn.0001063c(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint64_t auStackX_8 [2];
    uint64_t uStackX_18;
    int64_t iStackX_20;
    
    uVar3 = 0;
    if (*0x10d10 == 0) {
        *0x10d00 = *(arg2 + 0x60);
        *0x10d08 = *(arg2 + 0x58);
        *0x10d10 = arg2;
    }
    auStackX_8[0] = arg1;
    (**(*0x10d00 + 0x140))(0x10c60,0,0x10d18);
    (***0x10d18)();
    (**(*0x10d00 + 0x140))(0x10c70,0,0x10cd8);
    (**(*0x10d00 + 0x140))(0x10c50,0,&iStackX_20);
    uVar6 = 0;
    if (*(iStackX_20 + 0x1e) != 0) {
        do {
            if (*(iStackX_20 + 2) < uVar3 + 0x24U) break;
            iVar2 = iStackX_20 + 0x24 + uVar3;
            if ((*(iVar2 + 8) == *0x10c40) && (*(iVar2 + 0x10) == *0x10c48)) {
                *0x10cd0 = iVar2;
                break;
            }
            uVar6 = uVar6 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar6 < *(iStackX_20 + 0x1e));
    }
    iVar2 = 6;
    uVar6 = *(*0x10cd8 + 0x178);
    puVar1 = *0x10cd8 + 0x17a;
    uVar4 = uVar6;
    do {
        if (*puVar1 != 0) {
            if (uVar4 < *puVar1) {
                uVar4 = *puVar1;
            }
            if ((*puVar1 < uVar6) || (uVar6 == 0)) {
                uVar6 = *puVar1;
            }
        }
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar5 = 1;
    do {
        iVar2 = (*(*0x10d18)[8])(0x11,uVar5,&uStackX_18,auStackX_8);
        if (iVar2 < 0) break;
        if (*(uStackX_18 + 0xc) != 0) {
            *(uStackX_18 + 0x22) = uVar6;
            *(uStackX_18 + 0x24) = uVar4;
            (*(*0x10d18)[9])(*(uStackX_18 + 2),uStackX_18,auStackX_8[0] & 0xffff);
        }
        (**(*0x10d00 + 0x48))(uStackX_18);
        uVar5 = uVar5 + 1;
    } while (uVar5 < 0x11);
    fcn.000103f4();
    return 0;
}


/* fcn.00010a70 @ 0x10a70 */

int64_t fcn.00010a70(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10cf8 == 0) {
        *0x10cf8 = 0;
        if (*(*0x10ce8 + 0x68) != 0) {
            piVar2 = *(*0x10ce8 + 0x70);
            do {
                if ((*0x10c80 == *piVar2) && (*0x10c88 == piVar2[1])) {
                    *0x10cf8 = (*(*0x10ce8 + 0x70))[uVar1 * 3 + 2];
                    return *0x10cf8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10ce8 + 0x68));
        }
    }
    return *0x10cf8;
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


/* fcn.00010b30 @ 0x10b30 */

int64_t fcn.00010b30(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010a38 @ 0x10a38 */

int64_t fcn.00010a38(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10cf0 + 0x40))(4,0x123,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
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


/* fcn.000107f4 @ 0x107f4 */

ushort fcn.000107f4(ulong noname_0,int64_t arg1)

{
    ushort uVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    auStackX_10[0] = arg1;
    iVar2 = (**(*0x10d18 + 0x40))(noname_0,1,aiStackX_18,auStackX_10);
    if (iVar2 < 0) {
        uVar1 = 0xffff;
    }
    else {
        uVar1 = *(aiStackX_18[0] + 2);
        (**(*0x10d00 + 0x48))();
    }
    return uVar1;
}


/* fcn.0001083c @ 0x1083c */

//WARNING: Variable defined which should be unmapped: var_18h

void fcn.0001083c(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong in_RDX;
    int64_t arg1_00;
    uint64_t uVar7;
    uint8_t uVar8;
    ushort uVar9;
    int64_t iVar10;
    uint64_t uStackX_8;
    ushort uStackX_10;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    int16_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t aiStack_58 [3];
    int64_t var_18h;
    
    uVar9 = 0xffff;
    uStackX_10 = 0xffff;
    uVar8 = 1;
    arg1_00 = CONCAT71(in_RDX >> 8,1);
    uVar5 = CONCAT71(arg1 >> 8,0x13);
    uStackX_8 = arg1;
    iVar4 = (**(*0x10d18 + 0x40))(uVar5,arg1_00,&iStackX_20,&uStackX_8);
    iVar2 = iStackX_20;
    iVar10 = 0;
    if (-1 < iVar4) {
        uVar9 = *(iStackX_20 + 2);
        uStackX_10 = uVar9;
        if ((*(iStackX_20 + 0xc) == -1) && (iVar3 = fcn.000107f4(CONCAT71(uVar5 >> 8,0x10),arg1_00), iVar3 != -1)) {
            *(iVar2 + 0xc) = iVar3;
            (**(*0x10d18 + 0x48))(uVar9,iStackX_20,uStackX_8 & 0xffff);
        }
        (**(*0x10d00 + 0x48))(iStackX_20);
    }
    do {
        iVar4 = (**(*0x10d18 + 0x40))(0x14,uVar8,&iStackX_20,&uStackX_8);
        iVar2 = iStackX_20;
        if (-1 < iVar4) {
            *(iStackX_20 + 0xe) = uVar9;
            if (*(iStackX_20 + 0xc) == -1) {
                uVar1 = uVar8;
                if ((*(iStackX_20 + 8) == -1) && (*(iStackX_20 + 4) == -1)) {
                    uVar7 = (*(iStackX_20 + 0x1b) - *(iStackX_20 + 0x13)) + 1U >> 10;
                }
                else {
                    uVar7 = (*(iStackX_20 + 8) - *(iStackX_20 + 4)) + 1;
                }
                for (; uVar1 < 0x10; uVar1 = uVar1 + 1) {
                    iVar4 = (**(*0x10d18 + 0x40))(0x11,uVar1,aiStack_58,auStackX_18);
                    if (-1 < iVar4) {
                        uVar6 = *(aiStack_58[0] + 0xc) & 0x7fff;
                        if (uVar6 == 0x7fff) {
                            uVar6 = *(aiStack_58[0] + 0x1c) << 10;
                        }
                        else {
                            iVar4 = 0x400;
                            if (*(aiStack_58[0] + 0xc) < 0) {
                                iVar4 = 1;
                            }
                            uVar6 = uVar6 * iVar4;
                        }
                        if ((uVar6 == uVar7) && (*0x10ce0 == '\0')) {
                            iVar3 = *(aiStack_58[0] + 2);
                            if (*0x10c90 != iVar3) {
                                *(iVar2 + 0xc) = iVar3;
                                *0x10ce0 = '\x01';
                                *0x10c90 = iVar3;
                            }
                        }
                        (**(*0x10d00 + 0x48))(aiStack_58[0]);
                    }
                    uVar9 = uStackX_10;
                }
            }
            (**(*0x10d18 + 0x48))(*(iVar2 + 2),iStackX_20,uStackX_8 & 0xffff);
            (**(*0x10d00 + 0x48))(iStackX_20);
            iVar10 = iVar10 + 1;
        }
    } while ((iVar10 != 0) && (uVar8 = uVar8 + 1, uVar8 < 0x10));
    return;
}


/* fcn.000103f4 @ 0x103f4 */

void fcn.000103f4(void)

{
    uint16_t uVar1;
    uint64_t uVar2;
    ushort uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ushort *puVar6;
    int16_t *piVar7;
    ushort *arg1;
    ulong uVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint16_t auStackX_8 [4];
    int64_t iStackX_10;
    uint64_t auStack_138 [16];
    uint64_t auStack_b8 [16];
    
    uVar13 = 0;
    fcn.00010b30(auStack_138,0,0x80);
    uVar8 = 0;
    fcn.00010b30(auStack_b8,0,0x80);
    uVar9 = CONCAT71(uVar8 >> 8,1);
    iVar4 = (*(*0x10d18)[8])(0x10,uVar9,&iStackX_10,auStackX_8);
    if (iVar4 < 0) {
        uVar10 = auStackX_8[0];
    }
    else {
        uVar10 = *(iStackX_10 + 0xd);
        (**(*0x10d00 + 0x48))();
    }
    uVar12 = 0;
    iVar14 = 0x158;
    iVar4 = *0x10cd8;
    uVar15 = uVar13;
    do {
        if (*(uVar13 + 0x186 + iVar4) == '\x02') {
            uVar1 = *(iVar14 + iVar4);
            uVar5 = uVar1 * 0x100000;
            auStack_138[uVar13] = uVar15;
            uVar15 = uVar15 + uVar5;
            auStack_b8[uVar13] = uVar5;
            if (uVar1 != 0) {
                iVar4 = fcn.00010a38(iVar4,uVar9);
                puVar6 = NULL;
                if (iVar4 != 0) {
                    puVar6 = fcn.000102a0(iVar4,0x123);
                }
                uVar9 = auStack_b8[uVar13];
                uVar5 = 0x3fffffffc00;
                *puVar6 = 0x2314;
                if ((uVar9 & 0xfffffffffffffc00) < 0x3fffffffc01) {
                    uVar5 = auStack_138[uVar13];
                    *(puVar6 + 0x13) = 0;
                    *(puVar6 + 2) = uVar5 >> 10;
                    *(puVar6 + 0x1b) = 0;
                    *(puVar6 + 4) = (uVar9 - 1) + uVar5 >> 10;
                }
                else {
                    *(puVar6 + 2) = 0xffffffff;
                    *(puVar6 + 4) = 0xffffffff;
                    uVar2 = auStack_138[uVar13];
                    *(puVar6 + 0x13) = uVar2;
                    *(puVar6 + 0x1b) = (uVar2 - 1) + uVar9;
                }
                puVar6[6] = 0xffff;
                uVar3 = fcn.000107f4(CONCAT71(uVar5 >> 8,0x13),uVar9);
                puVar6[7] = uVar3;
                *(puVar6 + 8) = 0xff;
                if (uVar12 < 8) {
                    if (*(uVar13 + 0x18e + *0x10cd8) < 3) goto code_r0x000105a3;
code_r0x00010584:
                    *(puVar6 + 0x11) = 0;
                }
                else {
                    if (2 < *((uVar12 - 8) + 0x186 + *0x10cd8)) goto code_r0x00010584;
code_r0x000105a3:
                    *(puVar6 + 9) = uVar10 >> 1;
                    *(puVar6 + 0x11) = '\x01' << (uVar10 >> 1 <= uVar12);
                }
                for (piVar7 = *(puVar6 + 1) + puVar6; *piVar7 != 0; piVar7 = piVar7 + 1) {
                }
                auStackX_8[0] = (piVar7 - puVar6) + 2;
                uVar9 = auStackX_8[0];
                arg1 = puVar6;
                (*(*0x10d18)[4])();
                *0x10ce0 = 0;
                (***0x10d18)();
                fcn.0001083c(arg1);
                (**(*0x10d00 + 0x48))(puVar6);
                iVar4 = *0x10cd8;
            }
        }
        uVar11 = uVar12 + 1;
        uVar12 = uVar11;
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 2;
        if (0xf < uVar11) {
            return;
        }
    } while( true );
}


