// decompiled by r2ghidra: 0084_PciHostBridgeDxe.pe32
// functions: 34

/* entry0 @ 0x10370 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010384(arg1,arg2);
    fcn.00010928(arg1,arg2);
    return;
}


/* fcn.00010384 @ 0x10384 */

ulong fcn.00010384(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    
    *0x13990 = *(arg2 + 0x60);
    *0x139a0 = *(arg2 + 0x58);
    *0x13988 = arg2;
    *0x13998 = arg1;
    fcn.000132b0();
    puVar4 = fcn.000132b0();
    do {
        uVar1 = *puVar4;
        uVar9 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103ef:
            if (puVar4 == NULL) goto code_r0x00010412;
            if ((*0x137e0 == *(puVar4 + 4)) && (*0x137e8 == *(puVar4 + 8))) {
                if (puVar4 == NULL) {
code_r0x00010412:
                    uVar5 = fcn.00010300();
                    fcn.000102f0();
                    uVar2 = in(0x1808);
                    iVar6 = fcn.000102d0(uVar9,0x1808);
                    while( true ) {
                        iVar3 = in(0x1808);
                        uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                        if ((uVar8 >> 0x17 & 1) != 0) break;
                        func_0x000102c0();
                    }
                    iVar7 = fcn.000102d0(uVar8,0x1808);
                    if ((uVar5 >> 9 & 1) == 0) {
                        fcn.000102f0();
                    }
                    else {
                        fcn.000102e0();
                    }
                    *0x139b0 = (iVar7 - iVar6) * 0x2685;
                }
                else {
                    *0x139b0 = *(puVar4 + 0xc);
                }
                uVar9 = 0;
                if (*(*0x13988 + 0x68) != 0) {
                    piVar10 = *(*0x13988 + 0x70);
                    do {
                        if ((*0x137c0 == *piVar10) && (*0x137c8 == piVar10[1])) {
                            *0x139c0 = (*(*0x13988 + 0x70))[uVar9 * 3 + 2];
                            return 0;
                        }
                        uVar9 = uVar9 + 1;
                        piVar10 = piVar10 + 3;
                    } while (uVar9 < *(*0x13988 + 0x68));
                }
                *0x139c0 = 0;
                return 0x800000000000000e;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103ef;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010928 @ 0x10928 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00010928(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    char cVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t aiStack_70 [5];
    int64_t var_39h;
    uint32_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    uStackX_8 = arg1;
    uStackX_10 = arg2;
    iVar3 = fcn.000133b0(&uStack_90);
    uVar13 = uStack_90;
    if ((iVar3 == 0) || (uStack_90 == 0)) {
        return -0x7ffffffffffffffd;
    }
    iStack_78 = iVar3;
    iVar4 = (**(*0x13990 + 0x140))(0x137a0,0,0x139d8);
    iVar5 = fcn.00012fec();
    puVar6 = NULL;
    if (iVar5 != 0) {
        puVar6 = fcn.000102a0(iVar5,0x68);
    }
    *puVar6 = 0x67626870;
    puVar8 = puVar6 + 2;
    *(puVar6 + 4) = 1;
    cVar12 = '\0';
    *puVar8 = puVar8;
    uVar15 = 0;
    puVar6[3] = puVar8;
    uStackX_10 = uStackX_10 & 0xffffffffffffff00;
    *0x139d0 = *(*0x139c0 + 0x58);
    *(*0x139c0 + 0x58) = 0x104a0;
    if (uVar13 != 0) {
        do {
            iVar5 = uVar15 * 0xc0 + iVar3;
            iStack_80 = fcn.00011a4c(iVar5);
            if (iStack_80 != 0) {
                if (uVar15 == 0) {
                    cVar12 = *(iVar3 + 0x1a);
                    uStackX_10 = CONCAT71(uStackX_10._1_7_,cVar12);
                }
                if (*(iVar5 + 0x40) <= *(iVar5 + 0x48)) {
                    uStackX_8 = *(iVar5 + 0x40) - *(iVar5 + 0x50);
                    iVar4 = fcn.00010808(uStackX_8,(*(iVar5 + 0x48) - *(iVar5 + 0x40)) + 1);
                    if (cVar12 != '\0') {
                        iVar4 = (**(*0x139c0 + 0x58))
                                          (2,2,0,(*(iVar5 + 0x48) - *(iVar5 + 0x40)) + 1,&uStackX_8,*0x13998,0);
                    }
                }
                cVar12 = uStackX_10;
                aiStack_70[0] = iVar5 + 0x58;
                uVar13 = 0;
                aiStack_70[1] = iVar5 + 0x70;
                aiStack_70[2] = iVar5 + 0x88;
                aiStack_70[3] = iVar5 + 0xa0;
                do {
                    puVar2 = aiStack_70[uVar13];
                    if (*puVar2 <= puVar2[1]) {
                        uVar14 = *puVar2 - puVar2[2];
                        iStack_88 = (puVar2[1] - *puVar2) + 1;
                        uStackX_8 = uVar14;
                        iVar3 = (**(*0x139c0 + 0x48))(&uStackX_18);
                        if (-1 < iVar3) {
                            uStackX_20 = 0;
                            if (uStackX_18 != 0) {
                                iVar3 = 0;
                                uVar10 = uStackX_18;
                                do {
                                    iVar1 = *(iVar3 + 0x20 + iStack_98);
                                    if ((iVar1 != 3) || ((*(iVar3 + 0x10 + iStack_98) & 1) == 0)) {
                                        uVar9 = *(iVar3 + iStack_98);
                                        uVar11 = uVar9;
                                        if (uVar9 < uVar14) {
                                            uVar11 = uVar14;
                                        }
                                        uVar9 = *(iVar3 + 8 + iStack_98) + uVar9;
                                        if (iStack_88 + uVar14 < uVar9) {
                                            uVar9 = iStack_88 + uVar14;
                                        }
                                        if (uVar11 < uVar9) {
                                            if (iVar1 == 0) {
                                                iVar5 = (**(*0x139c0 + 0x18))(3,uVar11,uVar9 - uVar11,1);
                                                uVar10 = uStackX_18;
                                            }
                                            else {
                                                iVar5 = -0x7ffffffffffffffe;
                                            }
                                            if (iVar5 < 0) break;
                                        }
                                    }
                                    uStackX_20 = uStackX_20 + 1;
                                    iVar3 = iVar3 + 0x38;
                                } while (uStackX_20 < uVar10);
                            }
                            (**(*0x13990 + 0x48))(iStack_98);
                        }
                        iVar4 = (**(*0x139c0 + 0x40))(uStackX_8,(puVar2[1] - *puVar2) + 1);
                        if (cVar12 != '\0') {
                            iVar4 = (**(*0x139c0 + 0x20))(2,3,0,(puVar2[1] - *puVar2) + 1,&uStackX_8,*0x13998,0);
                        }
                    }
                    uVar13 = uVar13 + 1;
                } while (uVar13 < 4);
                puVar7 = iStack_80 + 8;
                *puVar7 = puVar6 + 2;
                puVar8 = puVar6[3];
                *(iStack_80 + 0x10) = puVar8;
                *puVar8 = puVar7;
                puVar6[3] = puVar7;
                iVar3 = iStack_78;
                cVar12 = uStackX_10;
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < uStack_90);
        if (cVar12 != '\0') goto code_r0x00010ccb;
    }
    puVar6[5] = 0x10e80;
    puVar6[6] = 0x1159c;
    puVar6[7] = 0x115f4;
    puVar6[8] = 0x11628;
    puVar6[9] = 0x116d4;
    puVar6[10] = 0x11754;
    puVar6[0xb] = 0x118c4;
    puVar6[0xc] = 0x11a20;
    iVar4 = (**(*0x13990 + 0x148))(puVar6 + 1,0x13770,puVar6 + 5,0);
code_r0x00010ccb:
    for (puVar8 = puVar6[2]; puVar8 != puVar6 + 2; puVar8 = *puVar8) {
        puVar8[0x3a] = puVar6[1];
        iVar4 = (**(*0x13990 + 0x148))(puVar8 + 2,0x13760,puVar8[0x38],0x13740,puVar8 + 0x3a,0);
    }
    (**(*0x13990 + 0x48))(*(iVar3 + 0xb8));
    if (-1 < iVar4) {
        (**(*0x13990 + 0x50))(0x200,8,0x108ec,0,&uStackX_10);
        (**(*0x13990 + 0xa8))(0x13790,uStackX_10,0x139e0);
        (**(*0x13990 + 0x68))(uStackX_10);
        *0x13a38 = uStackX_10;
    }
    return iVar4;
}


/* fcn.000132b0 @ 0x132b0 */

int64_t fcn.000132b0(void)

{
    if (*0x139a8 == 0) {
        fcn.00013250(0x13780,0x139a8);
    }
    return *0x139a8;
}


/* fcn.00013250 @ 0x13250 */

ulong fcn.00013250(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x13988;
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


/* fcn.000133b0 @ 0x133b0 */

int64_t fcn.000133b0(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong noname_0;
    uint8_t uVar7;
    uint64_t uVar8;
    
    iVar5 = fcn.0001359c();
    uVar1 = (**(iVar5 + 8))(0x176);
    iVar5 = fcn.0001301c(uVar1 * 0xc0);
    if (iVar5 == 0) {
        *arg1 = 0;
    }
    else {
        iVar6 = fcn.0001359c();
        uVar3 = (**(iVar6 + 0x18))(0x170);
        *0x13868 = uVar3;
        iVar6 = fcn.0001359c();
        iVar4 = (**(iVar6 + 0x18))(0x171);
        if (iVar4 == 0) {
            *0x13870 = 0xbfffffff;
        }
        else {
            iVar6 = fcn.0001359c();
            uVar3 = (**(iVar6 + 0x18))(0x171);
            *0x13870 = uVar3;
        }
        iVar6 = fcn.0001359c();
        *0x13880 = (**(iVar6 + 0x20))(0x16e);
        iVar6 = fcn.0001359c();
        *0x13888 = (**(iVar6 + 0x20))(0x16f);
        iVar6 = fcn.0001359c();
        uVar3 = (**(iVar6 + 0x18))(0x174);
        *0x13898 = uVar3;
        iVar6 = fcn.0001359c();
        uVar3 = (**(iVar6 + 0x18))(0x175);
        *0x138a0 = uVar3;
        iVar6 = fcn.0001359c();
        *0x138b0 = (**(iVar6 + 0x20))(0x172);
        iVar6 = fcn.0001359c();
        *0x138b8 = (**(iVar6 + 0x20))(0x173);
        if (*0x13880 < *0x13888) {
            *0x13830 = *0x13830 | 2;
        }
        *0x13828 = 0;
        uVar8 = 0;
        *0x13850 = 0x2000;
        *0x13858 = 0xffff;
        *0x1382a = 0;
        iVar6 = fcn.0001359c();
        noname_0 = 0x176;
        cVar2 = (**(iVar6 + 8))();
        if (cVar2 != '\0') {
            do {
                *0x138c8 = 0;
                *0x13808 = uVar8;
                *0x13810 = *0x13808;
                *0x138c8 = fcn.0001311c(noname_0,0x13800);
                iVar6 = uVar8 * 0xc0 + iVar5;
                if (iVar6 != 0x13810) {
                    section..text(iVar6,0x13810,0xc0);
                }
                uVar7 = uVar8 + 1;
                uVar8 = uVar7;
                iVar6 = fcn.0001359c();
                noname_0 = 0x176;
                uVar1 = (**(iVar6 + 8))();
            } while (uVar7 < uVar1);
        }
        iVar6 = fcn.0001359c();
        uVar1 = (**(iVar6 + 8))(0x176);
        *arg1 = uVar1;
    }
    return iVar5;
}


/* fcn.00012fec @ 0x12fec */

ulong fcn.00012fec(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13990 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* fcn.00011a4c @ 0x11a4c */

uint * fcn.00011a4c(uint32_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint *puVar8;
    int64_t arg1_00;
    ulong uVar9;
    uint in_register_0000000c;
    uint *puVar10;
    int64_t noname_0;
    uint64_t *puVar11;
    int64_t *piVar12;
    int iVar13;
    
    puVar10 = CONCAT44(in_register_0000000c,arg1);
    uVar9 = 0;
    if (*(puVar10 + 0xe) == 0) {
        puVar1 = puVar10 + 0x16;
        if ((*(puVar10 + 0x18) < *puVar1) || (*(puVar10 + 0x18) < 0x100000000)) {
            puVar2 = puVar10 + 0x1c;
            if ((*(puVar10 + 0x1e) < *puVar2) || (0xffffffff < *puVar2)) {
                uVar5 = *(puVar10 + 0x24);
                puVar3 = puVar10 + 0x22;
                if ((uVar5 < *puVar3) || (uVar5 < 0x100000000)) {
                    puVar11 = puVar10 + 0x28;
                    uVar6 = *(puVar10 + 0x2a);
                    if (((uVar6 < *puVar11) || (0xffffffff < *puVar11)) &&
                       ((*(puVar10 + 0x1a) != '\0' ||
                        ((((*(puVar10 + 8) & 1) == 0 || ((uVar5 < *puVar3 && (uVar6 < *puVar11)))) &&
                         (((*(puVar10 + 8) & 2) != 0 || ((*(puVar10 + 0x1e) < *puVar2 && (uVar6 < *puVar11)))))))))) {
                        iVar7 = fcn.00012fec(uVar6,0x288);
                        puVar8 = NULL;
                        if (iVar7 != 0) {
                            puVar8 = fcn.000102a0(iVar7,0x288);
                        }
                        *puVar8 = 0x6272705f;
                        *(puVar8 + 0xc) = *(puVar10 + 2);
                        *(puVar8 + 10) = *(puVar10 + 4);
                        *(puVar8 + 0x6e) = *(puVar10 + 6);
                        *(puVar8 + 0x1b9) = *(puVar10 + 0x19);
                        *(puVar8 + 8) = *(puVar10 + 8);
                        iVar7 = *(puVar10 + 0x2e);
                        noname_0 = iVar7;
                        arg1_00 = fcn.000130cc(iVar7);
                        if (arg1_00 != 0) {
                            uVar9 = fcn.00013048(noname_0,arg1_00,iVar7);
                        }
                        *(puVar8 + 0x72) = uVar9;
                        *(puVar8 + 0x74) = 0;
                        uVar9 = fcn.00012fec();
                        *(puVar8 + 0x70) = uVar9;
                        puVar4 = puVar8 + 0x9e;
                        *puVar4 = puVar4;
                        *(puVar8 + 0xa0) = puVar4;
                        if (puVar8 + 0x4a != puVar10 + 10) {
                            section..text(puVar8 + 0x4a,puVar10 + 10,0x18);
                        }
                        if (puVar8 + 0x50 != puVar10 + 0x10) {
                            section..text(puVar8 + 0x50,puVar10 + 0x10,0x18);
                        }
                        if (puVar8 + 0x56 != puVar1) {
                            section..text(puVar8 + 0x56,puVar1,0x18);
                        }
                        puVar1 = puVar8 + 0x62;
                        if (puVar1 != puVar2) {
                            section..text(puVar1,puVar2,0x18);
                        }
                        puVar2 = puVar8 + 0x5c;
                        if (puVar2 != puVar3) {
                            section..text(puVar2,puVar3,0x18);
                        }
                        puVar3 = puVar8 + 0x68;
                        if (puVar3 != puVar11) {
                            section..text(puVar3,puVar11,0x18);
                        }
                        piVar12 = puVar8 + 0x10;
                        puVar11 = NULL;
                        do {
                            iVar13 = puVar11;
                            if (iVar13 == 0) {
                                puVar11 = puVar8 + 0x50;
                            }
                            else if (iVar13 == 1) {
                                puVar11 = puVar8 + 0x56;
                            }
                            else if (iVar13 == 2) {
                                puVar11 = puVar2;
                            }
                            else if (iVar13 == 3) {
                                puVar11 = puVar1;
                            }
                            else if (iVar13 == 4) {
                                puVar11 = puVar3;
                            }
                            else if (iVar13 == 5) {
                                puVar11 = puVar8 + 0x4a;
                            }
                            else {
                                puVar11 = NULL;
                            }
                            *(piVar12 + -1) = iVar13;
                            if ((*(puVar10 + 0x1a) == '\0') || (puVar11[1] < *puVar11)) {
                                *piVar12 = 0;
                                piVar12[1] = 0;
                                *(piVar12 + 3) = 0;
                            }
                            else {
                                *piVar12 = *puVar11 - puVar11[2];
                                uVar5 = puVar11[1];
                                uVar6 = *puVar11;
                                *(piVar12 + 3) = 2;
                                piVar12[1] = (uVar5 - uVar6) + 1;
                            }
                            puVar11 = iVar13 + 1U;
                            piVar12 = piVar12 + 5;
                        } while (iVar13 + 1U < 6);
                        puVar8[0x9a] = *puVar10;
                        *(puVar8 + 0x78) = 0x121a0;
                        *(puVar8 + 0x7a) = 0x122cc;
                        *(puVar8 + 0x7c) = fcn.000123f8;
                        *(puVar8 + 0x7e) = fcn.00012490;
                        *(puVar8 + 0x80) = 0x1252c;
                        *(puVar8 + 0x82) = 0x125ac;
                        *(puVar8 + 0x88) = 0x1262c;
                        *(puVar8 + 0x84) = 0x12a80;
                        *(puVar8 + 0x86) = 0x12aa8;
                        *(puVar8 + 0x8a) = 0x12ad0;
                        *(puVar8 + 0x8c) = 0x12cc0;
                        *(puVar8 + 0x8e) = 0x12d8c;
                        *(puVar8 + 0x90) = 0x12e64;
                        *(puVar8 + 0x92) = 0x12e88;
                        *(puVar8 + 0x94) = 0x12e8c;
                        *(puVar8 + 0x96) = 0x12ec4;
                        *(puVar8 + 0x98) = 0x12ee8;
                        return puVar8;
                    }
                }
            }
        }
    }
    return NULL;
}


/* fcn.00010808 @ 0x10808 */

int64_t fcn.00010808(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    
    iVar2 = (**(*0x139c0 + 0x78))(&uStackX_18,&iStackX_20);
    if (-1 < iVar2) {
        uVar4 = 0;
        if (uStackX_18 != 0) {
            iVar5 = 0;
            uVar3 = uStackX_18;
            do {
                iVar1 = *(iVar5 + 0x10 + iStackX_20);
                if (iVar1 == 2) {
code_r0x0001085d:
                    iVar2 = 0;
                }
                else {
                    uVar6 = *(iVar5 + iStackX_20);
                    uVar7 = uVar6;
                    if (uVar6 < arg1) {
                        uVar7 = arg1;
                    }
                    uVar6 = *(iVar5 + 8 + iStackX_20) + uVar6;
                    if (arg1 + arg2 < uVar6) {
                        uVar6 = arg1 + arg2;
                    }
                    if (uVar6 <= uVar7) goto code_r0x0001085d;
                    if (iVar1 == 0) {
                        iVar2 = (**(*0x139c0 + 0x50))(2,uVar7,uVar6 - uVar7);
                        uVar3 = uStackX_18;
                    }
                    else {
                        iVar2 = -0x7ffffffffffffffe;
                    }
                    if (iVar2 < 0) break;
                }
                uVar4 = uVar4 + 1;
                iVar5 = iVar5 + 0x28;
            } while (uVar4 < uVar3);
        }
        (**(*0x13990 + 0x48))(iStackX_20);
    }
    return iVar2;
}


/* fcn.000132e0 @ 0x132e0 */

ulong fcn.000132e0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong auStackX_18 [2];
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    uint uStack_18;
    ushort uStack_14;
    
    auStackX_18[0] = 0x36;
    if (arg2 == '\0') {
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
        uVar1 = (**(*0x139b8 + 0x58))(L"AmiOutOfRes",0x137f0,2,0x36,arg1);
    }
    else {
        uVar1 = (**(*0x139b8 + 0x48))(L"AmiOutOfRes",0x137f0,0,auStackX_18,&uStack_48);
    }
    if ((arg2 != '\0') && (arg1 != 0)) {
        *arg1 = uStack_48;
        *(arg1 + 8) = uStack_40;
        *(arg1 + 0x10) = uStack_38;
        *(arg1 + 0x18) = uStack_30;
        *(arg1 + 0x20) = uStack_28;
        *(arg1 + 0x28) = uStack_20;
        *(arg1 + 0x30) = uStack_18;
        *(arg1 + 0x34) = uStack_14;
    }
    return uVar1;
}


/* fcn.00010558 @ 0x10558 */

ulong fcn.00010558(int64_t arg1)

{
    uint64_t uVar1;
    int *piVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    bool bVar9;
    uint64_t uStackX_10;
    uint64_t auStackX_18 [2];
    uint32_t var_fah;
    int64_t var_538h;
    int64_t var_540h;
    int64_t var_548h;
    ulong uStack_5f8;
    int64_t iStack_5f0;
    int64_t aiStack_5e8 [3];
    int iStack_5d0;
    int iStack_5cc;
    int iStack_5c8;
    int iStack_5c4;
    uint64_t uStack_5c0;
    uchar auStack_5b8 [394];
    char cStack_42e;
    
    auStackX_18[1] = 0x578;
    uVar5 = 0xffffffff;
    uStackX_10 = 0xffffffff;
    uVar4 = 0xffffffff;
    uStack_5f8 = 4;
    uVar8 = 0;
    auStackX_18[0] = 0;
    iVar7 = 0;
    (**(*0x139a0 + 0x48))(L"SaSetup",0x137b0,0,auStackX_18 + 1,auStack_5b8);
    if (cStack_42e != '\0') {
        (**(*0x139a0 + 0x48))(L"MemCeil.",str.__1_,0,&uStack_5f8,auStackX_18);
        (**(*0x139c0 + 0x48))(aiStack_5e8,&iStack_5f0);
        uVar1 = *(arg1 + 0x160);
        if (aiStack_5e8[0] != 0) {
            piVar2 = iStack_5f0 + 0x20;
            do {
                uVar3 = *(piVar2 + -8);
                iVar6 = *(piVar2 + -6);
                if (*piVar2 == 3) {
                    if (0xfffff < uVar3) {
                        if (uVar3 < uVar5) {
                            uVar5 = uVar3;
                        }
                        if ((uVar3 < uVar4) && (*(piVar2 + 2) != 0)) {
                            uVar4 = uVar3;
                        }
                        if (((*(arg1 + 0x158) <= uVar3) && ((uVar3 - 1) + iVar6 <= uVar1)) && (*(piVar2 + 2) != 0)) {
                            iVar7 = iVar7 + iVar6;
                        }
                    }
                }
                else if (((uVar3 < uVar5) && (uVar3 = iVar6 + -1 + uVar3, uVar8 < uVar3)) && (uVar3 < 0x100000000)) {
                    uVar8 = uVar3;
                }
                piVar2 = piVar2 + 0xe;
                aiStack_5e8[0] = aiStack_5e8[0] + -1;
            } while (aiStack_5e8[0] != 0);
        }
        (**(*0x13990 + 0x48))(iStack_5f0);
        piVar2 = arg1 + 0x38;
        iVar6 = 6;
        uVar4 = (uVar1 - iVar7) + 1;
        do {
            uStack_5c0 = *(piVar2 + 8);
            iStack_5d0 = *(piVar2 + 4);
            iStack_5cc = piVar2[5];
            iStack_5c8 = *(piVar2 + 6);
            iStack_5c4 = piVar2[7];
            bVar9 = (uStack_5c0 & 0xfffffffd) != 0;
            if ((((*piVar2 == 1) && (bVar9)) || ((*piVar2 == 2 && (bVar9)))) &&
               (uVar4 = uVar4 - *(piVar2 + 4) & ~*(piVar2 + 6), uVar4 < uStackX_10)) {
                uStackX_10 = uVar4;
            }
            piVar2 = piVar2 + 10;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (uStackX_10 < 0xffffffff) {
            uStackX_10 = uStackX_10 & 0xfffffffff0000000;
            if (auStackX_18[0] < uStackX_10) {
                uStackX_10 = auStackX_18[0];
            }
            if (auStackX_18[0] != uStackX_10) {
                if (uStackX_10 == 0) {
                    return 0x8000000000000003;
                }
                (**(*0x139a0 + 0x58))(L"MemCeil.",str.__1_,3,4,&uStackX_10);
                (**(*0x139a0 + 0x68))(0,0,0,0);
            }
        }
    }
    return 0;
}


/* fcn.000107b8 @ 0x107b8 */

ulong fcn.000107b8(int64_t arg1,uint32_t arg2)

{
    if (arg2 == 0) {
        return *(arg1 + 0x150);
    }
    if (arg2 == 1) {
        return *(arg1 + 0x168);
    }
    if (arg2 == 2) {
        return *(arg1 + 0x180);
    }
    if (arg2 != 3) {
        if (arg2 == 4) {
            return *(arg1 + 0x1b0);
        }
        if (arg2 != 5) {
            return 0;
        }
        return *(arg1 + 0x138);
    }
    return *(arg1 + 0x198);
}


/* fcn.00010db4 @ 0x10db4 */

int64_t fcn.00010db4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_R9;
    uint64_t uVar3;
    int64_t iStackX_20;
    uint64_t in_stack_00000028;
    
    uVar3 = CONCAT44(in_R9,arg4);
    if (uVar3 < in_stack_00000028) {
        iVar2 = 1LL << (arg3 & 0x3f);
        for (iStackX_20 = uVar3 + (iVar2 - uVar3 & iVar2 - 1U); arg2 + iStackX_20 <= in_stack_00000028 + 1;
            iStackX_20 = iStackX_20 + iVar2) {
            if (arg1 == '\0') {
                iVar1 = (**(*0x139c0 + 0x58))(2,2,arg3,arg2,&iStackX_20,*0x13998,0);
            }
            else {
                iVar1 = (**(*0x139c0 + 0x20))(2);
            }
            if (-1 < iVar1) {
                return iStackX_20;
            }
        }
    }
    return -1;
}


/* fcn.00013088 @ 0x13088 */

int64_t fcn.00013088(uint32_t arg1)

{
    int64_t iVar1;
    int in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 != arg1) {
        if (in_register_0000000c == 0) {
            iVar1 = -1;
        }
        else {
            iVar1 = 0x1f;
            for (; 0 < in_register_0000000c; in_register_0000000c = in_register_0000000c * 2) {
                iVar1 = iVar1 + -1;
            }
        }
        return iVar1 + 0x20;
    }
    if (arg1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < uVar2; uVar2 = uVar2 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 13536 named .text
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


/* fcn.0001301c @ 0x1301c */

void fcn.0001301c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012fec(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.000130cc @ 0x130cc */

char * fcn.000130cc(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000131f4(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00013048 @ 0x13048 */

void fcn.00013048(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012fec();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00012070 @ 0x12070 */

uint64_t fcn.00012070(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t auStackX_8 [2];
    
    uVar2 = arg3 & 0xffffffff;
    if (0xffffffffffffffffU / arg2 < arg1) {
        uVar4 = arg1;
        if (arg1 < arg2) {
            uVar4 = arg2;
            arg2 = arg1;
        }
        iVar1 = fcn.00012070(uVar4 >> 1,arg2,arg3 & 0xffffffff,auStackX_8);
        uVar3 = 0;
        iVar1 = iVar1 * 2;
        if ((uVar4 & 1) != 0) {
            uVar3 = arg2 % uVar2;
            iVar1 = iVar1 + arg2 / uVar2;
        }
        uVar3 = uVar3 + auStackX_8[0] * 2;
        if (arg4 != 0) {
            *arg4 = uVar3 % uVar2;
        }
        uVar2 = uVar3 / uVar2 + iVar1;
    }
    else {
        if (arg4 != 0) {
            *arg4 = (arg1 * arg2) % uVar2;
        }
        uVar2 = (arg1 * arg2) / uVar2;
    }
    return uVar2;
}


/* fcn.00012130 @ 0x12130 */

int64_t fcn.00012130(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *arg1;
    uVar2 = fcn.000102d0(arg1,arg2);
    *arg1 = uVar2;
    if (arg2 < arg3) {
        if (uVar1 < uVar2) {
            arg3 = uVar2 - uVar1;
        }
        else {
            arg3 = ((uVar2 - uVar1) - arg2) + arg3;
        }
    }
    else if (uVar2 < uVar1) {
        arg3 = uVar1 - uVar2;
    }
    else {
        arg3 = ((uVar1 - uVar2) - arg3) + arg2;
    }
    return arg3;
}


/* fcn.00011e10 @ 0x11e10 */

//WARNING: Variable defined which should be unmapped: var_1h

uint64_t fcn.00011e10(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uStackX_21;
    uint8_t uStackX_22;
    uint32_t uStackX_24;
    uint64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int32_t var_1h;
    
    if ((in_stack_00000030 != 0) && (arg3 < 0xc)) {
        if (arg3 - 4 < 4) {
            in_stack_00000028 = 1;
        }
        uVar1 = 1 << (arg3 & 3);
        if ((in_stack_00000028 <= 0xffffffffffffffff / uVar1) && (uVar3 = uVar1 * in_stack_00000028, arg4 <= ~uVar3)) {
            iVar2 = arg2;
            if (iVar2 == 0) {
                if ((uVar3 + arg4 < 0x1001) && ((*(arg1 + -0x1b0) & 0x70076) != 0)) {
                    return 0;
                }
                uVar5 = *(arg1 + -0x98);
                iVar4 = *(arg1 + -0x90);
            }
            else if (iVar2 == 1) {
                if (((0x9ffff < arg4) && (uVar3 + arg4 < 0xc0001)) && ((*(arg1 + -0x1b0) & 8) != 0)) {
                    return 0;
                }
                uVar5 = *(arg1 + -0x80);
                if ((((arg4 < uVar5) || (iVar4 = *(arg1 + -0x78), iVar4 + 1U < uVar3 + arg4)) &&
                    ((uVar5 = *(arg1 + -0x68), arg4 < uVar5 || (iVar4 = *(arg1 + -0x60), iVar4 + 1U < uVar3 + arg4))))
                   && ((uVar5 = *(arg1 + -0x50), arg4 < uVar5 || (iVar4 = *(arg1 + -0x48), iVar4 + 1U < uVar3 + arg4))
                      )) {
                    uVar5 = *(arg1 + -0x38);
                    iVar4 = *(arg1 + -0x30);
                }
            }
            else {
                uVar5 = arg4 >> 0x18 & 0xff;
                if (uVar5 < *(arg1 + -0xb0)) {
                    return 0x8000000000000002;
                }
                if (*(arg1 + -0xa8) < uVar5) {
                    return 0x8000000000000002;
                }
                uStackX_22 = arg4 >> 0x10;
                if (0x1f < uStackX_22) {
                    return 0x8000000000000002;
                }
                uStackX_21 = arg4 >> 8;
                if (7 < uStackX_21) {
                    return 0x8000000000000002;
                }
                uStackX_24 = arg4 >> 0x20;
                if (uStackX_24 == 0) {
                    arg4 = arg4 & 0xff;
                }
                else {
                    arg4 = uStackX_24;
                }
                uVar5 = 0;
                iVar4 = (-(*(arg1 + -0x1f) != '\0') & 0xfffffffffffff100) + 0xfff;
            }
            if ((arg4 & uVar1 - 1) != 0) {
                return (iVar2 != 2) + 0x8000000000000002;
            }
            if (uVar5 <= arg4) {
                return -(iVar4 + 1U < uVar3 + arg4) & 0x8000000000000002;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00011ff4 @ 0x11ff4 */

ulong fcn.00011ff4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if ((arg2 < *(CONCAT44(in_register_0000000c,arg1) + 0x158)) ||
       (*(CONCAT44(in_register_0000000c,arg1) + 0x160) < arg2)) {
        if ((arg2 < *(CONCAT44(in_register_0000000c,arg1) + 0x170)) ||
           (*(CONCAT44(in_register_0000000c,arg1) + 0x178) < arg2)) {
            if ((arg2 < *(CONCAT44(in_register_0000000c,arg1) + 0x188)) ||
               (*(CONCAT44(in_register_0000000c,arg1) + 400) < arg2)) {
                if ((arg2 < *(CONCAT44(in_register_0000000c,arg1) + 0x1a0)) ||
                   (*(CONCAT44(in_register_0000000c,arg1) + 0x1a8) < arg2)) {
                    return 0x8000000000000002;
                }
                uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x1b0);
            }
            else {
                uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x198);
            }
        }
        else {
            uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x180);
        }
    }
    else {
        uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x168);
    }
    *arg3 = uVar1;
    return 0;
}


/* fcn.000123f8 @ 0x123f8 */

void fcn.000123f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = fcn.00011e10(arg1,1,arg2,arg3);
    if (-1 < iVar1) {
        iVar1 = fcn.00011ff4(arg1 - 0x1d8,arg3,aiStack_18);
        if (-1 < iVar1) {
            (***0x139d8)(*0x139d8,arg2 & 0xffffffff,arg3 - aiStack_18[0],arg4);
        }
    }
    return;
}


/* fcn.00012490 @ 0x12490 */

void fcn.00012490(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = fcn.00011e10(arg1,1,arg2,arg3);
    if (-1 < iVar1) {
        iVar1 = fcn.00011ff4(arg1 - 0x1d8,arg3,aiStack_18);
        if (-1 < iVar1) {
            (**(*0x139d8 + 8))(*0x139d8,arg2 & 0xffffffff,arg3 - aiStack_18[0],arg4);
        }
    }
    return;
}


/* fcn.00012738 @ 0x12738 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00012738(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ushort uVar3;
    uint uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t arg3_00;
    uint64_t uVar10;
    uint *puVar11;
    uint64_t uVar12;
    uint64_t uStackX_20;
    int64_t in_stack_00000028;
    uint *in_stack_00000030;
    int64_t var_48h;
    uint8_t uStack_38;
    uint8_t uStack_37;
    uint8_t uStack_36;
    uint8_t uStack_35;
    uint32_t uStack_34;
    int64_t var_10h;
    
    arg3_00 = arg3;
    uStackX_20 = arg4;
    iVar5 = fcn.00011e10(arg1,2,arg3_00,arg4);
    if (-1 < iVar5) {
        section..text(&uStack_38,&uStackX_20,8);
        if (uStack_34 == 0) {
            uStack_34 = uStack_38;
        }
        if (*(arg1 + 0x90) == 0) {
            uVar6 = uStack_35;
        }
        else {
            uVar6 = (*(arg1 + 0x90) & 0xffff) << 0xc | uStack_35;
        }
        uStackX_20 = ((uVar6 << 5 | uStack_36 & 0x1f) << 3 | uStack_37 & 7) << 0xc | uStack_34 & 0xfff;
        uVar1 = *(arg3_00 + 0x13910);
        uVar2 = *(arg3_00 + 0x13920);
        uVar6 = 1 << (arg3 & 3);
        if (in_stack_00000028 != 0) {
            do {
                if (arg2 == '\0') {
                    if (in_stack_00000030 != NULL) {
                        uVar10 = uStackX_20;
                        uVar9 = uVar6;
                        puVar11 = in_stack_00000030;
                        if ((uStackX_20 & 1) != 0) {
                            uVar9 = uVar6 - 1;
                            puVar11 = in_stack_00000030 + 1;
                            uVar10 = uStackX_20 + 1;
                            *((uStackX_20 >> 4 & 0x10000000 | uStackX_20 & 0xffffffff) + 0xc0000000) =
                                 *in_stack_00000030;
                        }
                        if ((1 < uVar9) && ((uVar10 & 2) != 0)) {
                            uVar3 = *puVar11;
                            uVar7 = uVar10 >> 4;
                            uVar9 = uVar9 - 2;
                            uVar12 = uVar10 & 0xffffffff;
                            uVar10 = uVar10 + 2;
                            puVar11 = puVar11 + 2;
                            *((uVar7 & 0x10000000 | uVar12) + 0xc0000000) = uVar3;
                        }
                        if (3 < uVar9) {
                            uVar12 = uVar9 >> 2;
                            uVar9 = uVar9 + uVar12 * -4;
                            do {
                                uVar4 = *puVar11;
                                uVar8 = uVar10 >> 4;
                                puVar11 = puVar11 + 1;
                                uVar7 = uVar10 & 0xffffffff;
                                uVar10 = uVar10 + 4;
                                *((uVar8 & 0x10000000 | uVar7) + 0xc0000000) = uVar4;
                                uVar12 = uVar12 - 1;
                            } while (uVar12 != 0);
                        }
                        if (1 < uVar9) {
                            uVar3 = *puVar11;
                            uVar7 = uVar10 >> 4;
                            uVar9 = uVar9 - 2;
                            uVar12 = uVar10 & 0xffffffff;
                            uVar10 = uVar10 + 2;
                            puVar11 = puVar11 + 2;
                            *((uVar7 & 0x10000000 | uVar12) + 0xc0000000) = uVar3;
                        }
                        if (uVar9 != 0) {
                            *((uVar10 >> 4 & 0x10000000 | uVar10 & 0xffffffff) + 0xc0000000) = *puVar11;
                        }
                    }
                }
                else if (in_stack_00000030 != NULL) {
                    uVar9 = uVar6;
                    uVar10 = uStackX_20;
                    puVar11 = in_stack_00000030;
                    if ((uStackX_20 & 1) != 0) {
                        uVar9 = uVar6 - 1;
                        puVar11 = in_stack_00000030 + 1;
                        uVar10 = uStackX_20 + 1;
                        *in_stack_00000030 = *((uStackX_20 >> 4 & 0x10000000 | uStackX_20 & 0xffffffff) + 0xc0000000);
                    }
                    if ((1 < uVar9) && ((uVar10 & 2) != 0)) {
                        uVar12 = uVar10 & 0xffffffff;
                        uVar7 = uVar10 >> 4;
                        uVar10 = uVar10 + 2;
                        uVar9 = uVar9 - 2;
                        *puVar11 = *((uVar7 & 0x10000000 | uVar12) + 0xc0000000);
                        puVar11 = puVar11 + 2;
                    }
                    if (3 < uVar9) {
                        uVar12 = uVar9 >> 2;
                        uVar9 = uVar9 + uVar12 * -4;
                        do {
                            uVar7 = uVar10 & 0xffffffff;
                            uVar8 = uVar10 >> 4;
                            uVar10 = uVar10 + 4;
                            *puVar11 = *((uVar8 & 0x10000000 | uVar7) + 0xc0000000);
                            puVar11 = puVar11 + 1;
                            uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                    }
                    if (1 < uVar9) {
                        uVar12 = uVar10 & 0xffffffff;
                        uVar7 = uVar10 >> 4;
                        uVar10 = uVar10 + 2;
                        uVar9 = uVar9 - 2;
                        *puVar11 = *((uVar7 & 0x10000000 | uVar12) + 0xc0000000);
                        puVar11 = puVar11 + 2;
                    }
                    if (uVar9 != 0) {
                        *puVar11 = *((uVar10 >> 4 & 0x10000000 | uVar10 & 0xffffffff) + 0xc0000000);
                    }
                }
                uStackX_20 = uStackX_20 + uVar1;
                in_stack_00000030 = in_stack_00000030 + uVar2;
                in_stack_00000028 = in_stack_00000028 + -1;
            } while (in_stack_00000028 != 0);
        }
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.000131f4 @ 0x131f4 */

bool fcn.000131f4(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.0001359c @ 0x1359c */

int64_t fcn.0001359c(void)

{
    if (*0x139c8 == 0) {
        (**(*0x13990 + 0x140))(0x13750,0,0x139c8);
    }
    return *0x139c8;
}


/* fcn.0001311c @ 0x1311c */

ulong fcn.0001311c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    ulong noname_0_00;
    int64_t iVar4;
    
    uVar3 = 0;
    if (arg1 == 0) {
        noname_0_00 = 0x1392c;
        iVar2 = fcn.000130cc(0x1392c);
        if (iVar2 != 0) {
            uVar3 = fcn.00013048(noname_0_00,iVar2,0x1392c);
        }
    }
    else {
        uVar1 = *(arg1 + 2);
        iVar2 = fcn.00012fec(noname_0,uVar1 + 4);
        if (iVar2 != 0) {
            if ((uVar1 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,uVar1);
            }
            iVar4 = *(iVar2 + 2) + iVar2;
            if (iVar4 != 0x1392c) {
                section..text(iVar4,0x1392c,4);
            }
            iVar4 = iVar2;
            arg1_00 = fcn.000130cc(iVar2);
            if (arg1_00 != 0) {
                uVar3 = fcn.00013048(iVar4,arg1_00,iVar2);
            }
            (**(*0x13990 + 0x48))(iVar2);
        }
    }
    return uVar3;
}


