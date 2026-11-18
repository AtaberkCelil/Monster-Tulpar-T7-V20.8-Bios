// decompiled by r2ghidra: 1562_CpuInitDxe.pe32
// functions: 24

/* entry0 @ 0x103b4 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    
    *0x11920 = *(arg2 + 0x60);
    *0x11918 = arg2;
    fcn.00011760();
    noname_0 = 0x118a0;
    iVar3 = fcn.00011790(0x118a0);
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010370(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010360();
        }
        fcn.00010370(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    iVar3 = 0x11938;
    fcn.00011700(0x11880,0x11938);
    fcn.00010470(arg1,iVar3);
    return;
}


/* fcn.00011760 @ 0x11760 */

int64_t fcn.00011760(void)

{
    if (*0x11930 == 0) {
        fcn.00011700(0x11860,0x11930);
    }
    return *0x11930;
}


/* fcn.00011700 @ 0x11700 */

ulong fcn.00011700(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x11918;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00011790 @ 0x11790 */

void fcn.00011790(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011760();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000117be:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000117be;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010362 @ 0x10362 */

void fcn.00010362(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.00010470 @ 0x10470 */

ulong fcn.00010470(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iStackX_10;
    int64_t *piStackX_18;
    uchar auStackX_20 [8];
    uchar auStack_18 [8];
    uchar auStack_10 [8];
    
    iStackX_10 = arg2;
    iVar3 = fcn.00011790(0x11820);
    uVar4 = 0;
    if (iVar3 == 0) {
        uVar4 = 0x800000000000000e;
    }
    else {
        uVar1 = rdmsr(0x1aa);
        *0x118d8 = iVar3 + 0x18;
        *0x11960 = uVar1 >> 10 & 1;
        *0x11900 = iVar3 + 0x40;
        fcn.00010a9c();
        (**(*0x11920 + 0x50))(0x200,8,0x106e4,0,&iStackX_10);
        (**(*0x11920 + 0xa8))(0x11810,iStackX_10,auStackX_20);
        (**(*0x11920 + 0x68))(iStackX_10);
        fcn.00010eb4(arg1);
        iVar3 = (**(*0x11920 + 0x140))(0x11840,0,&piStackX_18);
        if (iVar3 == 0) {
            uVar2 = rdmsr(0x3a);
            if ((uVar2 & 0xff03) == 0xff03) {
                *(*piStackX_18 + 0x58) = 1;
            }
            else {
                *(*piStackX_18 + 0x58) = 0;
            }
        }
        (**(*0x11920 + 0x50))(0x201,0x10,0x105f0,0,auStack_18);
        (**(*0x11920 + 0x170))(0x200,0x10,0x105f0,0,0x11800,auStack_10);
    }
    return uVar4;
}


/* fcn.00010a9c @ 0x10a9c */

ulong fcn.00010a9c(void)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uchar *puVar4;
    int64_t iVar5;
    ulong uVar6;
    char cVar7;
    uint8_t uVar8;
    uchar *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    char cVar13;
    int64_t iVar14;
    uint8_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    bool bVar22;
    ulong uStackX_8;
    
    uVar12 = 0;
    uStackX_8 = 0;
    *0x11958 = fcn.000114a0(0x28);
    if (*0x11958 != NULL) {
        iVar5 = fcn.000114a0(0xb6);
        puVar9 = *0x11958;
        *(*0x11958 + 0x10) = iVar5;
        if (iVar5 != 0) {
            uVar11 = uVar12;
            while( true ) {
                uVar6 = fcn.000114a0(0x31);
                *(uVar11 + 0xc + *(puVar9 + 0x10)) = uVar6;
                puVar4 = *0x11958;
                if (*(uVar11 + 0xc + *(puVar9 + 0x10)) == 0) break;
                uVar6 = fcn.000114a0(0x48);
                *(uVar11 + 0x24 + *(puVar4 + 0x10)) = uVar6;
                if (*(uVar11 + 0x24 + *(puVar4 + 0x10)) == 0) {
                    return 0x8000000000000009;
                }
                uVar11 = uVar11 + 0x5b;
                if (0xb5 < uVar11) {
                    (**(*0x11920 + 0x140))(0x117e0,0,0x11948);
                    (***0x11948)(*0x11948,0x118e0,0x11908);
                    *0x118f0 = fcn.000114a0(*0x118e0);
                    if (*0x118f0 == NULL) {
                        return 0x8000000000000009;
                    }
                    fcn.00010968();
                    (*(*0x11948)[2])(*0x11948,fcn.00010968,1,0,0,0,0);
                    puVar20 = *0x118f0;
                    if (*0x11908 != 0) {
                        puVar15 = *0x118f0;
                        do {
                            cVar7 = '\0';
                            if (*0x11908 != 0) {
                                uVar11 = uVar12;
                                cVar13 = '\0';
                                do {
                                    puVar1 = puVar20 + uVar11;
                                    uVar11 = uVar11 + 1;
                                    cVar7 = cVar13 + '\x01';
                                    if ((*puVar15 & 0xf) != (*puVar1 & 0xf)) {
                                        cVar7 = cVar13;
                                    }
                                    cVar13 = cVar7;
                                } while (uVar11 < *0x11908);
                            }
                            *puVar15 = *puVar15 | cVar7 << 4;
                            puVar15 = puVar15 + 1;
                        } while (puVar15 - puVar20 < *0x11908);
                    }
                    puVar9 = *0x11958;
                    iVar5 = fcn.00011790(0x11870);
                    uVar3 = *0x11910;
                    uVar2 = *0x118e8;
                    if (iVar5 == 0) goto code_r0x00010d84;
                    iVar10 = 0;
                    uVar11 = 0;
                    uVar8 = *(iVar5 + 2) - 0x18U >> 4;
                    if (uVar8 == 0) goto code_r0x00010d84;
                    puVar20 = iVar5 + 0x1d;
                    uVar21 = uVar8;
                    uVar16 = 0;
                    uVar18 = 0;
                    do {
                        uVar17 = uVar16;
                        uVar19 = uVar18;
                        if (puVar20[-1] == 0) {
                            if (uVar3 != 0) {
                                bVar22 = uVar2 == 0;
                                goto code_r0x00010cbc;
                            }
                            if (uVar2 != 0) goto code_r0x00010cce;
                        }
                        else if (puVar20[-1] == 0x20) {
code_r0x00010cce:
                            iVar10 = 0;
                            uVar19 = uVar18 + 1;
                            uVar11 = uVar18;
                        }
                        else {
                            bVar22 = puVar20[-1] == 0x40;
code_r0x00010cbc:
                            if (bVar22) {
                                iVar10 = 1;
                                uVar17 = uVar16 + 1;
                                uVar11 = uVar16;
                            }
                        }
                        iVar14 = iVar10 * 0x5b;
                        iVar5 = uVar11 * 9;
                        *(*(iVar14 + 0x24 + *(puVar9 + 0x10)) + 2 + iVar5) = *puVar20 >> 3;
                        *(*(iVar14 + 0x24 + *(puVar9 + 0x10)) + 1 + iVar5) = *puVar20 & 7;
                        *(*(iVar14 + 0x24 + *(puVar9 + 0x10)) + 7 + iVar5) = (*(puVar20 + 1) & 0x3ff) + 1;
                        puVar15 = puVar20 + 3;
                        puVar20 = puVar20 + 0x10;
                        *(*(iVar14 + 0x24 + *(puVar9 + 0x10)) + 3 + iVar5) = *puVar15;
                        uVar21 = uVar21 - 1;
                        uVar16 = uVar17;
                        uVar18 = uVar19;
                        if (uVar21 == 0) {
                            if (uVar19 != '\0') {
                                *(*(puVar9 + 0x10) + 0x2c) = uVar19 + -1;
                            }
                            if (uVar17 != '\0') {
                                *(*(puVar9 + 0x10) + 0x87) = uVar17 + -1;
                            }
code_r0x00010d84:
                            if (uVar2 == 0) {
                                *(*(puVar9 + 0x10) + 0x17) = 0;
                                *(*(puVar9 + 0x10) + 0x16) = 0;
                            }
                            else {
                                *(*(puVar9 + 0x10) + 0x17) = *0x118f9 / uVar2;
                                *(*(puVar9 + 0x10) + 0x16) = uVar2;
                            }
                            if (uVar3 == 0) {
                                *(*(puVar9 + 0x10) + 0x72) = 0;
                                *(*(puVar9 + 0x10) + 0x71) = 0;
                            }
                            else {
                                *(*(puVar9 + 0x10) + 0x72) = *0x118f8 / uVar3;
                                *(*(puVar9 + 0x10) + 0x71) = uVar3;
                            }
                            iVar5 = *0x118d8;
                            *(puVar9 + 8) = *0x11960 << 10 | *0x11950;
                            *puVar9 = 6;
                            if (*(iVar5 + 0x26) != '\0') {
                                uVar11 = uVar12;
                                do {
                                    *(*(puVar9 + 0x10) + 0x42 + uVar11) = *(iVar5 + 0x26);
                                    uVar11 = uVar11 + 0x5b;
                                } while (uVar11 < 0xb6);
                                uVar11 = uVar12;
                                do {
                                    *(*(puVar9 + 0x10) + 0x9e + uVar11) = *(iVar5 + 0x410 + uVar11);
                                    uVar11 = uVar11 + 1;
                                } while (uVar11 < 8);
                                do {
                                    *(*(puVar9 + 0x10) + 0x43 + uVar12) = *(iVar5 + 0x428 + uVar12);
                                    uVar12 = uVar12 + 1;
                                } while (uVar12 < 4);
                            }
                            (**(*0x11920 + 0x148))(&uStackX_8,0x11850,puVar9,0);
                            return 0;
                        }
                    } while( true );
                }
                puVar9 = *0x11958;
            }
        }
    }
    return 0x8000000000000009;
}


/* fcn.00010eb4 @ 0x10eb4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

ulong fcn.00010eb4(int64_t arg1)

{
    uint *puVar1;
    ushort uVar2;
    char cVar3;
    uchar *puVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint16_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    int16_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ushort *puVar15;
    int16_t iVar16;
    int16_t iVar17;
    int16_t iVar18;
    int64_t iStackX_8;
    int16_t aiStackX_10 [4];
    uint32_t auStackX_18 [2];
    uint32_t uStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t var_60h;
    ulong uVar19;
    uint32_t *puVar20;
    int16_t iStack_58;
    int16_t var_18h;
    int64_t var_10h;
    
    uVar13 = 0;
    iVar12 = 0;
    iStack_58 = 0;
    iStackX_8 = arg1;
    iVar7 = fcn.00011790(0x11820);
    if (iVar7 == 0) {
        uVar8 = 0x800000000000000e;
    }
    else {
        puVar1 = iVar7 + 0x18;
        uVar5 = fcn.000114f8();
        uStackX_20 = uVar5;
        (**(*0x11920 + 0x28))(1,10);
        *0x11940 = 0xffffffff;
        fcn.00010300(0xffffffff,0xaa);
        fcn.00010290(1,auStackX_18,0,0);
        uVar11 = auStackX_18[0] & 0xf;
        uVar6 = fcn.000114cc();
        *(*0x11940 + 9) = uVar6 | uVar11;
        **0x11940 = 1;
        uVar8 = rdmsr(0x194);
        (*0x11940)[0x57] = uVar8 >> 0x11 & 7;
        if (*(iVar7 + 0x3d) != '\0') {
            uVar8 = rdmsr(0x1a2);
            cVar3 = uVar8 >> 0x10;
            (*0x11940)[6] = cVar3 + '\x05';
            (*0x11940)[8] = cVar3 - (uVar8 >> 8);
            (*0x11940)[7] = (*0x11940)[6] + '\x03';
        }
        *(*0x11940 + 1) = *puVar1;
        iVar17 = iVar12;
        iVar16 = iVar12;
        iVar18 = iVar12;
        if (uStackX_20 < 4) {
            iStack_58 = 0x104;
            iVar12 = 0x7f;
            iVar17 = 0x1e7;
            iVar16 = 0x418;
            iVar18 = 0xfd;
        }
        (*0x11940)[0x29] = *(*0x11940 + 1) >> 0x10 & 1 | 0x20;
        if ((*(*0x11940 + 1) & 0x20) != 0) {
            (*0x11940)[0x2a] = *(*0x11940 + 1) >> 0x11 & 1 | 0x30;
        }
        if ((*(*0x11940 + 1) & 0x40) != 0) {
            (*0x11940)[0x2a] = *(*0x11940 + 1) >> 0x12 & 1 | 0x32;
        }
        if (iVar12 != 0) {
            *(*0x11940 + 0x2e) = iVar12;
        }
        if (iVar18 != 0) {
            *(*0x11940 + 0x30) = iVar18;
        }
        if ((*(*0x11940 + 1) & 0x200000) == 0) {
            if ((*(*0x11940 + 1) & 0x100000) == 0) {
                if ((*(*0x11940 + 1) & 0x80000) != 0) {
                    *(*0x11940 + 0x34) = 0x1817;
                    *(*0x11940 + 0x36) = 200;
                    (*0x11940)[0x2b] = 0x40;
                    if (iStack_58 != 0) {
                        *(*0x11940 + 0x32) = iStack_58;
                    }
                }
            }
            else {
                *(*0x11940 + 0x34) = 0x1818;
                *(*0x11940 + 0x36) = 200;
                (*0x11940)[0x2b] = 0x50;
                if (iVar17 != 0) {
                    *(*0x11940 + 0x32) = iVar17;
                }
            }
        }
        else {
            *(*0x11940 + 0x34) = 0x1819;
            *(*0x11940 + 0x36) = 200;
            (*0x11940)[0x2b] = 0x60;
            if (iVar16 != 0) {
                *(*0x11940 + 0x32) = iVar16;
            }
        }
        if ((*(*0x11940 + 1) & 0x400000) != 0) {
            (*0x11940)[0x59] = *(iVar7 + 0x445);
        }
        puVar15 = iVar7 + 0x2c;
        (*0x11940)[0xe] = *(iVar7 + 0x1c);
        (*0x11940)[0xf] = *(iVar7 + 0x24);
        uVar14 = uVar13;
        do {
            (*0x11940)[uVar14 + 0x22] = *(iVar7 + 0x21 + uVar14);
            *(*0x11940 + (-4 - puVar1) + puVar15) = puVar15[-3];
            iVar10 = (2 - puVar1) + puVar15;
            uVar2 = *puVar15;
            puVar15 = puVar15 + 1;
            *(*0x11940 + iVar10) = uVar2;
            (*0x11940)[uVar14 + 0x1c] = *(iVar7 + 0x32 + uVar14);
            (*0x11940)[uVar14 + 0x1f] = *(iVar7 + 0x35 + uVar14);
            (*0x11940)[uVar14 + 0x25] = *(iVar7 + 0x38 + uVar14);
            uVar14 = uVar14 + 1;
        } while (uVar14 < 3);
        (*0x11940)[0x56] = *(iVar7 + 0x3b);
        (*0x11940)[0x55] = *(iVar7 + 0x1e);
        (*0x11940)[0xd] = *(iVar7 + 0x1f);
        (*0x11940)[0xa5] = 1;
        puVar20 = auStackX_18;
        section..text(7,0,0,0);
        (*0x11940)[0x5a] = auStackX_18[0] >> 0xf & 1;
        uVar14 = rdmsr(0xce);
        uVar14 = uVar14 & 0xffffffff;
        uVar19 = 0;
        iVar10 = 0;
        uVar8 = 0;
        fcn.00010290(0x16,0,0,aiStackX_10);
        if (((*(iVar7 + 0x1c) < 2) || (uVar8 = CONCAT71(uVar8 >> 8,*(iVar7 + 0x20)), *(iVar7 + 0x20) == -1)) ||
           (*(iVar7 + 0x1d) != '\x01')) {
            uVar9 = *(iVar7 + 0x444);
            if (*(iVar7 + 0x444) == 0) {
                uVar9 = uVar14 >> 8 & 0xff;
            }
            *(*0x11940 + 0x9f) = uVar9;
            *(*0x11940 + 0xa1) = ((uVar14 >> 8 & 0xff) * 0x7f) / 100;
            *(*0x11940 + 0xa3) = (uVar14 >> 8) * aiStackX_10[0];
            *(*0x11940 + 0xa6) = 0;
            *(*0x11940 + 0xa8) = 0;
        }
        else {
            if (*(iVar7 + 0x444) == 0) {
                uVar5 = fcn.00011688(uVar8,iVar10);
                *(*0x11940 + 0x9f) = uVar5;
            }
            else {
                uVar8 = 0;
                *(*0x11940 + 0x9f) = *(iVar7 + 0x444);
            }
            uVar5 = fcn.00011688(CONCAT71(uVar8 >> 8,*(iVar7 + 0x20)),iVar10);
            puVar4 = *0x11940;
            uVar6 = (uVar5 * 0x7f) / 100;
            *(*0x11940 + 0xa1) = uVar6;
            uVar5 = fcn.00011688(CONCAT71(puVar4 >> 8,*(iVar7 + 0x20)),uVar6);
            uVar14 = uVar14 >> 8 & 0xff;
            *(*0x11940 + 0xa3) = uVar5 * aiStackX_10[0];
            *(*0x11940 + 0xa6) = (uVar14 * 0x7f) / 100;
            *(*0x11940 + 0xa8) = uVar14;
        }
        *(*0x11940 + 0x9b) = *0x118d0;
        iVar7 = *0x118f0;
        if (*0x118e0 != 0) {
            do {
                (*0x11940)[uVar13 + 0x5b] = *(iVar7 + uVar13);
                uVar13 = uVar13 + 1;
            } while (uVar13 < *0x118e0);
        }
        (**(*0x11920 + 0x148))(&iStackX_8,0x11840,72000,0,uVar19,puVar20);
        uVar8 = 0;
    }
    return uVar8;
}


/* fcn.00010290 @ 0x10290 */

uint64_t fcn.00010290(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != 0) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.000116c4 @ 0x116c4 */

int64_t fcn.000116c4(void)

{
    if (*0x11928 == 0) {
        (**(*0x11920 + 0x140))(0x11830,0,0x11928);
    }
    return *0x11928;
}


/* section..text @ 0x10260 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    //[00] -r-x section size 5504 named .text
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = puVar1[3];
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00011688 @ 0x11688 */

uint64_t fcn.00011688(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t in_RAX;
    char cVar2;
    uint uVar3;
    
    cVar2 = arg1;
    if (cVar2 == '\0') {
        uVar1 = rdmsr(0x648);
        return uVar1;
    }
    if (cVar2 == '\x01') {
        uVar3 = 0x649;
    }
    else {
        if (cVar2 != '\x02') {
            return in_RAX & 0xffffffffffffff00;
        }
        uVar3 = 0x64a;
    }
    uVar1 = rdmsr(uVar3);
    return uVar1 >> 0x10 & 0xffff;
}


/* fcn.000114cc @ 0x114cc */

uint32_t fcn.000114cc(void)

{
    uint32_t auStackX_8 [8];
    
    fcn.00010290(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.00010768 @ 0x10768 */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_18h

ulong fcn.00010768(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    uint *puVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uchar auStack_38 [4];
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_18h;
    int64_t var_ch;
    
    puVar5 = *(arg1 + 0xc);
    if (puVar5 == NULL) {
        uVar3 = 0x8000000000000002;
    }
    else {
        fcn.00010290(0x80000002,auStackX_8,auStackX_10,auStackX_18);
        *puVar5 = auStackX_8[0];
        puVar5[1] = auStackX_10[0];
        puVar5[2] = auStackX_18[0];
        puVar5[3] = var_28h;
        fcn.00010290(0x80000003,auStackX_8,auStackX_10,auStackX_18);
        puVar5[4] = auStackX_8[0];
        puVar5[5] = auStackX_10[0];
        puVar5[6] = auStackX_18[0];
        puVar5[7] = var_28h;
        fcn.00010290(0x80000004,auStackX_8,auStackX_10,auStackX_18);
        puVar5[8] = auStackX_8[0];
        puVar5[9] = auStackX_10[0];
        puVar5[10] = auStackX_18[0];
        puVar5[0xb] = var_28h;
        *(puVar5 + 0xc) = 0;
        pcVar4 = *(arg1 + 0xc);
        while (*pcVar4 == ' ') {
            pcVar4 = pcVar4 + 1;
            *(arg1 + 0xc) = pcVar4;
        }
        section..text(0xb,0,0,auStack_38);
        iVar1 = *0x118d8;
        *(arg1 + 0x15) = auStack_38[0];
        iVar2 = *0x11900;
        *(arg1 + 0x20) = 0;
        *(arg1 + 0x2e) = *(iVar2 + 6);
        *(arg1 + 0x32) = *(iVar1 + 0x400);
        uVar6 = 0;
        if (*(iVar1 + 0x400) != '\0') {
            do {
                uVar7 = uVar6 + 1;
                *(arg1 + 0x33 + uVar6) = *(iVar1 + 0x401 + uVar6);
                uVar6 = uVar7;
            } while (uVar7 < *(iVar1 + 0x400));
        }
        *(arg1 + 0x4b) = *(iVar1 + 0x418);
        uVar6 = 0;
        if (*(iVar1 + 0x418) != '\0') {
            do {
                uVar7 = uVar6 + 1;
                *(arg1 + 0x4c + uVar6) = *(iVar1 + 0x419 + uVar6);
                uVar6 = uVar7;
            } while (uVar7 < *(iVar1 + 0x418));
        }
        puVar5 = &uStack_34;
        fcn.00010290(1,puVar5,0,&uStack_30);
        *arg1 = uStack_34;
        iVar1 = *0x118d8;
        *(arg1 + 4) = CONCAT44(uStack_30,uStack_2c);
        if (((*(iVar1 + 4) < 2) || (*(iVar1 + 8) == -1)) || (*(iVar1 + 5) != '\x01')) {
            uVar3 = rdmsr(0xce);
            *(arg1 + 0x18) = (uVar3 >> 8 & 0xff) * 100;
        }
        else {
            uVar7 = fcn.00011688(CONCAT71(CONCAT44(uStack_30,uStack_2c) >> 8,*(iVar1 + 8)),puVar5);
            *(arg1 + 0x18) = uVar7 * 100;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001161c @ 0x1161c */

uint64_t fcn.0001161c(void)

{
    uint64_t uVar1;
    uint32_t uStackX_8;
    uint8_t auStackX_10 [8];
    uint32_t uStackX_18;
    
    uVar1 = fcn.00010290(1,0,0,0);
    if ((uStackX_8 & 0x10000000) == 0) {
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    else {
        section..text(0xb,0,auStackX_10,0);
        uVar1 = (uStackX_18 & ~(-1 << (auStackX_10[0] & 0x1f))) != 0;
    }
    return uVar1;
}


/* fcn.000114a0 @ 0x114a0 */

void fcn.000114a0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011470(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010300(arg1_00,arg1);
    }
    return;
}


/* fcn.00011470 @ 0x11470 */

ulong fcn.00011470(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11920 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2)

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


/* fcn.00010968 @ 0x10968 */

//WARNING: Variable defined which should be unmapped: var_6h

void fcn.00010968(void)

{
    char cVar1;
    int iVar2;
    uint uStackX_8;
    uchar auStackX_10 [3];
    char cStackX_13;
    int64_t iStackX_18;
    int32_t var_1fh;
    int32_t var_6h;
    
    (**(*0x11948 + 0x30))(*0x11948);
    section..text(7,0,0,0);
    if ((uStackX_8 >> 0xf & 1) == 0) {
        iVar2 = fcn.000114cc();
        cVar1 = '@';
        if (iVar2 == 0xb06e0) {
            cVar1 = ' ';
        }
    }
    else {
        fcn.00010290(0x1a,auStackX_10,0,0);
        cVar1 = cStackX_13;
    }
    fcn.00010290(1,0,&uStackX_8,0);
    *(*0x118f0 + iStackX_18) = uStackX_8._3_1_ >> 3;
    if (cVar1 == ' ') {
        if (*0x118e8 == '\0') {
            fcn.00010768(*(*0x11958 + 0x10));
        }
        *0x118f9 = *0x118f9 + '\x01';
        cVar1 = fcn.0001161c();
        if (cVar1 == '\0') {
            *0x118e8 = *0x118e8 + '\x01';
        }
    }
    else if (cVar1 == '@') {
        if (*0x11910 == '\0') {
            fcn.00010768(*(*0x11958 + 0x10) + 0x5b);
        }
        *0x118f8 = *0x118f8 + '\x01';
        cVar1 = fcn.0001161c();
        if (cVar1 == '\0') {
            *0x11910 = *0x11910 + '\x01';
        }
        *0x118d0 = *0x118d0 | 1 << (iStackX_18 & 0x1f);
    }
    return;
}


/* fcn.000114f8 @ 0x114f8 */

ulong fcn.000114f8(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.00010290(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x00011613;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x00011613;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x00011557;
                    }
                }
code_r0x00011555:
                uVar3 = 2;
                goto code_r0x00011557;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x00011555;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x00011557;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x00011557;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x00011557;
            goto code_r0x00011555;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x00011557;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x00011557;
        }
    }
code_r0x00011613:
    uVar3 = 0;
code_r0x00011557:
    return CONCAT71(uVar2 >> 8,uVar3);
}


