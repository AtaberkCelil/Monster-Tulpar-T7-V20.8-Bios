// decompiled by r2ghidra: 0140_AmiMemoryInfoConfig.pe32
// functions: 9

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    
    *0x10968 = *(arg2 + 0x60);
    *0x10960 = arg2;
    fcn.000106bc();
    noname_0 = 0x10930;
    iVar3 = fcn.00010728(0x10930);
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
    fcn.000103c8(arg1,arg2);
    return;
}


/* fcn.000106bc @ 0x106bc */

int64_t fcn.000106bc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10970 == 0) {
        *0x10970 = 0;
        if (*(*0x10960 + 0x68) != 0) {
            piVar2 = *(*0x10960 + 0x70);
            do {
                if ((*0x10910 == *piVar2) && (*0x10918 == piVar2[1])) {
                    *0x10970 = (*(*0x10960 + 0x70))[uVar1 * 3 + 2];
                    return *0x10970;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10960 + 0x68));
        }
    }
    return *0x10970;
}


/* fcn.00010728 @ 0x10728 */

void fcn.00010728(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000106bc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010756:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010756;
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


/* fcn.000103c8 @ 0x103c8 */

uint64_t fcn.000103c8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int iVar11;
    uchar *puVar12;
    uint16_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t *piVar16;
    uint8_t *puVar17;
    uint8_t *puVar18;
    uint64_t uVar19;
    uint8_t uStackX_8;
    uint8_t uStackX_18;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    
    uVar7 = 0;
    if (*0x10988 == 0) {
        *0x10978 = *(arg2 + 0x60);
        *0x10980 = *(arg2 + 0x58);
        *0x10988 = arg2;
    }
    iVar10 = *0x10978;
    aiStack_48[0] = arg1;
    iVar2 = fcn.00010728(0x10920);
    if (iVar2 != 0) {
        uVar3 = (**(iVar10 + 0x140))(0x108f0,0,&iStack_50);
        if (uVar3 < 0) {
            return uVar3;
        }
        iVar11 = 0;
        uVar6 = 0;
        if (*(iStack_50 + 0x1e) != 0) {
            uVar3 = uVar7;
            do {
                if (*(iStack_50 + 2) < uVar3 + 0x24U) {
                    return 0x800000000000000e;
                }
                if ((*(uVar3 + 0x2c + iStack_50) == *0x108e0) && (*(uVar3 + 0x34 + iStack_50) == *0x108e8)) {
                    cVar1 = *(iVar2 + 0x1b);
                    if (cVar1 == '\0') {
                        iVar11 = 7;
                    }
                    else if (cVar1 == '\x01') {
                        iVar11 = 9;
                    }
                    else if (cVar1 == '\x02') {
                        iVar11 = 10;
                    }
                    else if (cVar1 == '\x03') {
                        iVar11 = 8;
                    }
                    uVar6 = 0;
                    piVar16 = *(uVar3 + 0x5c + iStack_50);
                    iVar10 = 2;
                    do {
                        uVar8 = 0;
                        uVar19 = uVar7;
                        uVar13 = uVar6;
                        do {
                            uVar4 = uVar19 >> 1;
                            uVar5 = uVar8 & 1;
                            uVar8 = uVar8 + 1;
                            uVar19 = uVar19 + 1;
                            uVar6 = uVar13 + 1;
                            if ((1 << uVar5 & *(uVar4 + *piVar16)) == 0) {
                                uVar6 = uVar13;
                            }
                            uVar13 = uVar6;
                        } while (uVar8 < 8);
                        piVar16 = piVar16 + 1;
                        iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                    if ((iVar11 == 7) || (iVar11 == 9)) {
                        *0x109a4 = uVar6 << 0x19;
                    }
                    else {
                        *0x109a4 = uVar6 << 0x17;
                    }
                    puVar12 = 0x109b4;
                    *0x109a4 = *0x109a4 >> 10;
                    uVar14 = 0;
                    *0x109ac = *(iVar2 + 0x1e);
                    *0x109a8 = *(iVar2 + 0x28);
                    uStackX_18 = 0;
                    iStack_58 = -0x1a;
                    *0x109a0 = iVar11;
                    do {
                        puVar17 = iVar2 + 0x1fe;
                        uVar15 = 0;
                        uStackX_8 = 0;
                        do {
                            uVar9 = 0;
                            puVar18 = puVar17;
                            do {
                                uVar19 = uVar9 + (uVar15 + uVar14 * 4) * 2;
                                iVar10 = uVar19 * 7;
                                *(iVar10 + 0x109b0) = *(puVar18 + iStack_58);
                                *(iVar10 + 0x109b5) = *(iVar2 + 0x25);
                                *(iVar10 + 0x109b6) = *(uVar19 + *(uVar3 + 0x40 + iStack_50));
                                if (((*puVar18 & 1) == 0) || (*puVar18 == 0)) {
                                    *puVar12 = 0;
                                }
                                else {
                                    *puVar12 = 1;
                                }
                                uVar8 = uVar9 + 1;
                                uVar9 = uVar8;
                                puVar12 = puVar12 + 7;
                                puVar18 = puVar18 + 0x40;
                            } while (uVar8 < 2);
                            puVar17 = puVar17 + 0x1c5;
                            uStackX_8 = uStackX_8 + 1;
                            uVar15 = uStackX_8;
                        } while (uStackX_8 < 4);
                        iStack_58 = iStack_58 + 0x719;
                        uStackX_18 = uStackX_18 + 1;
                        uVar14 = uStackX_18;
                    } while (uStackX_18 < 2);
                    uVar3 = (**(*0x10978 + 0x148))(aiStack_48,0x10900,68000,0);
                    if (uVar3 < 0) {
                        uVar7 = uVar3;
                    }
                    return uVar7;
                }
                uVar6 = uVar6 + 1;
                uVar3 = uVar3 + *(uVar3 + 0x26 + iStack_50);
            } while (uVar6 < *(iStack_50 + 0x1e));
        }
    }
    return 0x800000000000000e;
}


