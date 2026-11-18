// decompiled by r2ghidra: 0398_PciHotPlug.pe32
// functions: 36

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010338(arg1,in_RDX);
    fcn.00010444(arg1,in_RDX);
    return;
}


/* fcn.00010338 @ 0x10338 */

void fcn.00010338(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    ulong noname_0_00;
    int64_t iVar7;
    
    *0x16388 = *(arg1 + 0x60);
    *0x16390 = *(arg1 + 0x58);
    *0x16380 = arg1;
    fcn.000136f4();
    noname_0_00 = 0x14850;
    iVar3 = fcn.00013760(0x14850);
    if (iVar3 == 0) {
        uVar4 = fcn.00010320();
        fcn.00010310();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar6 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar6,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010310();
        }
        else {
            fcn.00010300();
        }
    }
    iVar3 = fcn.00013760(0x14720);
    if ((iVar3 != 0) && ((*(iVar3 + 0x18) & 1) != 0)) {
        uVar1 = *(iVar3 + 0x2c);
        iVar7 = 0;
        uVar5 = 0;
        uVar4 = 0;
        do {
            *(uVar4 + 0x14860) = 0;
            *(uVar4 + 0x14863) = uVar1 >> (uVar5 & 0x1f) & 7;
            if (*(iVar3 + 0x30 + iVar7) == '\0') {
                *(uVar4 + 0x14864) = 0;
            }
            else {
                *(uVar4 + 0x14864) = 1;
            }
            iVar7 = iVar7 + 1;
            uVar4 = uVar4 + 5;
            uVar5 = uVar5 + 3;
        } while (uVar4 < 0x14);
        *0x163a0 = 1;
    }
    return;
}


/* fcn.00010444 @ 0x10444 */

ulong fcn.00010444(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    uchar uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *arg1_00;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    char *pcVar14;
    uint64_t uVar15;
    uint uStackX_8;
    uint uStackX_c;
    uint uStackX_10;
    uint uStackX_14;
    int64_t iStackX_18;
    ulong uStackX_20;
    uint32_t var_19fh;
    int64_t var_7c0h;
    int64_t var_7c8h;
    ulong uStack_878;
    uint32_t auStack_870 [2];
    int64_t iStack_868;
    uchar auStack_858 [591];
    char acStack_609 [1481];
    
    uVar9 = 0;
    _uStackX_10 = CONCAT44(arg2 >> 0x20,0x6010101);
    iStackX_18 = 0;
    uStackX_20 = 0;
    _uStackX_8 = CONCAT44(arg1 >> 0x20,0x20100);
    iVar5 = fcn.00013760(0x14730);
    iStack_868 = iVar5;
    fcn.000102c0(0x16b40,0x3000);
    fcn.000102c0(0x163c0,0x780);
    uStack_878 = 0x80d;
    (**(*0x16390 + 0x48))(L"PchSetup",0x14790,0,&uStack_878,auStack_858);
    uVar10 = uVar9;
    do {
        if (acStack_609[uVar10] != '\0') {
            fcn.0001195c(uVar10);
            iVar6 = fcn.000135f4();
            if (iVar6 == 0) goto code_r0x00010662;
            if (iVar6 != 84000) {
                section..text(iVar6,84000,0x16);
            }
            *(iVar6 + 0x11) = iStackX_18;
            iVar1 = *0x16368;
            *(iVar6 + 0x10) = uStackX_20;
            iVar7 = *0x16368 * 0x10;
            *0x16368 = *0x16368 + 1;
            *(iVar7 + 0x19b40) = iVar6;
            *(iVar1 * 0x10 + 0x19b48) = iVar6;
        }
        uVar10 = uVar10 + 1;
    } while (uVar10 < 0x18);
    (**(*0x16388 + 0x140))(0x146f0,0,auStack_870);
    fcn.000118f4(auStack_870[0],0x147e0,&iStackX_18);
    iVar6 = iStackX_18 - &uStackX_10;
    do {
        if ((&uStackX_10 + uVar9)[iVar6 + 0x20] != '\0') {
            uVar2 = *(&uStackX_10 + uVar9);
            uVar3 = *(&uStackX_8 + uVar9);
            iVar7 = fcn.000135f4();
            if (iVar7 == 0) goto code_r0x00010662;
            if (iVar7 != 84000) {
                section..text(iVar7,84000,0x16);
            }
            iVar4 = *0x16368;
            *(iVar7 + 0x10) = uVar3;
            *(iVar7 + 0x11) = uVar2;
            iVar1 = *0x16368 * 0x10;
            *0x16368 = *0x16368 + 1;
            *(iVar1 + 0x19b40) = iVar7;
            *(iVar4 * 0x10 + 0x19b48) = iVar7;
        }
        uVar10 = 0;
        uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
    pcVar14 = iVar5 + 0x18;
    uVar9 = uVar10;
    uVar12 = uVar10;
    do {
        uVar15 = 0;
        if ((iVar5 != 0) && (*pcVar14 != '\0')) {
            uVar11 = uVar15;
            uVar13 = uVar15;
            if (uVar9 < 4) {
                if (*0x163a0 == '\x01') {
                    if (*(uVar10 + 0x14864) == '\x01') {
                        uVar15 = *(uVar10 + 0x14863);
                        uVar11 = *(uVar10 + 0x14860);
                        uVar13 = *(uVar10 + 0x14862);
                    }
                }
                else {
                    iVar5 = fcn.00013760(0x14720);
                    uVar11 = 0;
                    uVar13 = 0;
                    if ((iVar5 != 0) && (*(iVar5 + 0x30 + uVar9) != '\0')) {
                        uVar13 = *(uVar10 + 0x14862);
                        uVar11 = 0;
                        uVar15 = *(iVar5 + 0x2c) >> (uVar12 & 0x3f) & 7;
                    }
                }
            }
            *0x16378 = uVar11;
            iVar5 = fcn.000135f4();
            if (iVar5 == 0) goto code_r0x00010662;
            if (iVar5 != 84000) {
                section..text(iVar5,84000,0x16);
            }
            iVar7 = *0x16368;
            *(iVar5 + 0x11) = uVar13;
            *(iVar5 + 0x10) = uVar15;
            iVar6 = *0x16368 * 0x10;
            *0x16368 = *0x16368 + 1;
            *(iVar6 + 0x19b40) = iVar5;
            *(iVar7 * 0x10 + 0x19b48) = iVar5;
            iVar5 = iStack_868;
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 5;
        pcVar14 = pcVar14 + 4;
        uVar12 = uVar12 + 3;
    } while (uVar10 < 0x14);
    arg1_00 = fcn.000135f4();
    if (arg1_00 == NULL) {
code_r0x00010662:
        uVar8 = 0x8000000000000009;
    }
    else {
        fcn.000102c0(arg1_00,0x28);
        *arg1_00 = 0x504c5547;
        arg1_00[2] = 0x10828;
        arg1_00[3] = 0x10840;
        arg1_00[4] = 0x10ed4;
        (**(*0x16388 + 0x80))(arg1_00 + 1,0x14740,0);
        uVar8 = 0;
    }
    return uVar8;
}


/* fcn.000136f4 @ 0x136f4 */

int64_t fcn.000136f4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x16398 == 0) {
        *0x16398 = 0;
        if (*(*0x16380 + 0x68) != 0) {
            piVar2 = *(*0x16380 + 0x70);
            do {
                if ((*0x14760 == *piVar2) && (*0x14768 == piVar2[1])) {
                    *0x16398 = (*(*0x16380 + 0x70))[uVar1 * 3 + 2];
                    return *0x16398;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x16380 + 0x68));
        }
    }
    return *0x16398;
}


/* fcn.00013760 @ 0x13760 */

void fcn.00013760(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000136f4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001378e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001378e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.0001195c @ 0x1195c */

ulong fcn.0001195c(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t *in_RDX;
    uint64_t *in_R8;
    
    cVar2 = fcn.00014664();
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            uVar3 = 0x1c;
            goto code_r0x00011983;
        }
        if (cVar2 != '\x05') {
            return 0x8000000000000002;
        }
    }
    uVar3 = 0xc;
code_r0x00011983:
    if (uVar3 <= arg1) {
        return 0x8000000000000002;
    }
    iVar1 = (arg1 >> 2) * 3;
    cVar2 = *(iVar1 + 0x1483a);
    *in_RDX = *(iVar1 + 0x14838);
    *in_R8 = *((*(iVar1 + 0x14839) | 0xfd00) << 0x10) >> ((arg1 - cVar2) * '\x04' & 0x3fU) & 7;
    return 0;
}


/* fcn.000135f4 @ 0x135f4 */

ulong fcn.000135f4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16388 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 17440 named .text
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


/* fcn.000118f4 @ 0x118f4 */

ulong fcn.000118f4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar4 = 0;
    if (*(iVar1 + 0x1e) != 0) {
        do {
            if (*(iVar1 + 2) < uVar3 + 0x24) {
                return 0x800000000000000e;
            }
            iVar2 = iVar1 + 0x24 + uVar3;
            if ((*(iVar2 + 8) == *arg2) && (*(iVar2 + 0x10) == *(arg2 + 8))) {
                *arg3 = iVar2;
                return 0;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar4 < *(iVar1 + 0x1e));
    }
    return 0x800000000000000e;
}


/* fcn.000137ac @ 0x137ac */

ulong fcn.000137ac(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    bool bVar5;
    int64_t *in_stack_00000028;
    
    iVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    do {
        if (*0x163a0 == '\x01') {
            if (((*(uVar2 + 0x14860) == *0x16378) && (*(uVar2 + 0x14861) == arg1)) &&
               ((*(uVar2 + 0x14862) == arg2 && (*(uVar2 + 0x14863) == arg3)))) {
                bVar5 = *(uVar2 + 0x14864) == '\x01';
code_r0x00013861:
                if (bVar5) {
                    *in_stack_00000028 = iVar4;
                    return 0;
                }
            }
        }
        else {
            iVar1 = fcn.00013760(0x14720);
            if ((((iVar1 != 0) && (*0x16378 == 0)) && (*(uVar2 + 0x14861) == arg1)) && (*(uVar2 + 0x14862) == arg2)) {
                bVar5 = (*(iVar1 + 0x2c) >> (uVar3 & 0x1f) & 7) == arg3;
                goto code_r0x00013861;
            }
        }
        iVar4 = iVar4 + 1;
        uVar2 = uVar2 + 5;
        uVar3 = uVar3 + 3;
        if (0x13 < uVar2) {
            return 0x8000000000000003;
        }
    } while( true );
}


/* fcn.0001086c @ 0x1086c */

ulong fcn.0001086c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    unkuint7 Var5;
    uint64_t uVar4;
    int64_t iVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    char cVar9;
    
    cVar9 = arg3;
    uVar7 = 0;
    uVar8 = 0;
    iVar3 = fcn.00013760(0x14710);
    Var5 = iVar3 >> 8;
    uVar4 = CONCAT71(Var5,cVar9 - 1U);
    uVar1 = 0xff;
    if (cVar9 - 1U < 2) {
        uVar1 = 0xff;
        if (iVar3 == 0) goto code_r0x00010920;
        uVar4 = Var5 << 8;
        do {
            uVar1 = uVar4;
            iVar6 = (uVar4 & 0xff) * 0x20;
            if ((*(iVar6 + 0x20 + iVar3) == '\x01') && (*(iVar6 + 0x21 + iVar3) == cVar9)) {
                if (*((uVar4 & 0xff) + 0x7a9 + arg1) == '\x01') {
                    uVar8 = *(iVar6 + 0x22 + iVar3) - 1;
                }
                if (uVar8 == arg2) break;
            }
            uVar2 = uVar1 + 1;
            uVar4 = CONCAT71(uVar4 >> 8,uVar2);
            uVar1 = 0xff;
        } while (uVar2 < 2);
    }
    if (cVar9 == -0x80) {
        do {
            uVar4 = 0;
            if (*(uVar7 + 1999 + arg1) == '\x01') {
                uVar8 = uVar7;
            }
            if (uVar8 == arg2) {
                uVar1 = uVar7;
                break;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
    }
code_r0x00010920:
    return CONCAT71(uVar4 >> 8,uVar1);
}


/* fcn.000112f0 @ 0x112f0 */

uint64_t fcn.000112f0(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    uint64_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    char cVar8;
    uint32_t uVar9;
    unkbyte7 in_R9;
    uint8_t auStackX_18 [8];
    
    cVar2 = arg1;
    uVar1 = 0;
    do {
        uVar7 = 0;
        do {
            uVar9 = 0;
            do {
                if (cVar2 == '\0') {
                    uVar4 = uVar7 & 0x1f;
                    uVar3 = uVar1 << 5;
                }
                else {
                    uVar4 = ((arg1 & 0xffU) << 0xc | uVar1) << 5;
                    uVar3 = uVar7 & 0x1f;
                }
                cVar8 = uVar9;
                iVar5 = ((uVar4 | uVar3) << 3 | uVar9 & 7) * 0x1000;
                if (*((iVar5 + 2U >> 4 & 0x10000000 | iVar5 + 2U & 0xffffffff) + 0xc0000000) == -1) {
                    if (cVar8 == '\0') break;
                }
                else if ((*((iVar5 + 0xbU >> 4 & 0x10000000 | iVar5 + 0xbU & 0xffffffff) + 0xc0000000) == '\x06') &&
                        (uVar3 = iVar5 + 10U >> 4 & 0x10000000 | iVar5 + 10U & 0xffffffff,
                        *(uVar3 + 0xc0000000) == '\x04')) {
                    uVar6 = fcn.00011658(CONCAT71(uVar3 >> 8,cVar2),CONCAT71(0x100000,uVar1),
                                         CONCAT71(0xc00000,uVar7),CONCAT71(in_R9,cVar8));
                    fcn.00011764(uVar6 + 2 + iVar5,2,auStackX_18);
                    if (((auStackX_18[0] & 0xf0) != 0) &&
                       (uVar3 = iVar5 + 0x19U >> 4 & 0x10000000 | iVar5 + 0x19U & 0xffffffff,
                       *(uVar3 + 0xc0000000) == CONCAT44(in_register_00000014,arg2))) {
                        if ((auStackX_18[0] & 0xf0) == 0x50) {
                            uVar1 = fcn.000112f0(CONCAT71(uVar3 >> 8,cVar2),uVar1);
                        }
                        else {
                            uVar1 = (uVar9 | (uVar1 << 8 | uVar7) << 8) << 8 | (arg1 & 0xffU) << 0x20;
                        }
                        return uVar1;
                    }
                }
                uVar9 = cVar8 + 1U;
            } while (cVar8 + 1U < 8);
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < 0x20);
        uVar1 = uVar1 + 1;
    } while( true );
}


/* fcn.00011494 @ 0x11494 */

ulong fcn.00011494(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    char cVar8;
    uint32_t uVar9;
    char cVar10;
    uint32_t uVar11;
    char cVar12;
    uint8_t auStackX_20 [8];
    
    cVar1 = arg1;
    uVar4 = 0;
    while( true ) {
        cVar10 = uVar4;
        cVar8 = *(uVar4 * 5 + 0x163c1);
        cVar12 = arg2;
        if (cVar8 == '\0') break;
        if ((cVar8 == cVar12) && (*(uVar4 * 5 + 0x163c0) == cVar1)) {
            *arg3 = cVar10;
            return 0;
        }
        uVar4 = cVar10 + 1;
    }
    uVar7 = 0;
    uVar11 = 0;
    iVar2 = uVar4 * 5;
    do {
        uVar9 = 0;
        do {
            if (cVar1 == '\0') {
                uVar5 = uVar11 & 0x1f;
                uVar4 = (arg2 & 0xffU) << 5;
            }
            else {
                uVar5 = ((arg1 & 0xffU) << 0xc | arg2 & 0xffU) << 5;
                uVar4 = uVar11 & 0x1f;
            }
            cVar8 = uVar9;
            iVar6 = ((uVar5 | uVar4) << 3 | uVar9 & 7) * 0x1000;
            if (*((iVar6 + 2U >> 4 & 0x10000000 | iVar6 + 2U & 0xffffffff) + 0xc0000000) == -1) {
                if (cVar8 == '\0') break;
            }
            else if ((*((iVar6 + 0xbU >> 4 & 0x10000000 | iVar6 + 0xbU & 0xffffffff) + 0xc0000000) == '\x06') &&
                    (uVar4 = iVar6 + 10U >> 4 & 0x10000000 | iVar6 + 10U & 0xffffffff, *(uVar4 + 0xc0000000) == '\x04')
                    ) {
                *(iVar2 + 0x163c0) = cVar1;
                *(iVar2 + 0x163c1) = cVar12;
                uVar3 = fcn.00011658(CONCAT71(uVar4 >> 8,cVar1),CONCAT71(0x163,cVar12),CONCAT71(0x100000,uVar7),
                                     CONCAT71(0xc00000,cVar8));
                fcn.00011764(uVar3 + 0x14 + iVar6,2,auStackX_20);
                if ((auStackX_20[0] & 0x40) == 0) {
                    *(iVar2 + 0x163c4) = *(iVar2 + 0x163c4) + '\x01';
                }
                else {
                    *(iVar2 + 0x163c3) = *(iVar2 + 0x163c3) + '\x01';
                    *(iVar2 + 0x163c2) = uVar7;
                }
                *arg3 = cVar10;
            }
            uVar9 = cVar8 + 1U;
        } while (cVar8 + 1U < 8);
        uVar7 = uVar7 + 1;
        uVar11 = uVar11 + 1;
        if (0x1f < uVar7) {
            return 0;
        }
    } while( true );
}


/* fcn.000119e8 @ 0x119e8 */

int64_t fcn.000119e8(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *arg1_00;
    code *pcVar5;
    int64_t in_R8;
    char *pcVar6;
    uchar in_R9B;
    unkbyte7 in_R9;
    int64_t iStack_28;
    uint32_t *puStack_20;
    
    iVar3 = 0;
    if (arg1 != 0) {
        fcn.000102c0(&iStack_28,0x18);
        for (; (*arg1 != '\x7f' || (*(arg1 + 1) != -1)); arg1 = arg1 + *(arg1 + 2)) {
            pcVar5 = 0x13520;
            iVar1 = iVar3;
            iVar4 = iVar3;
            do {
                if ((*arg1 == *(iVar1 + 0x15c00)) && (*(arg1 + 1) == *(iVar1 + 0x15c01))) {
                    pcVar5 = *(iVar4 * 0x10 + 0x15c08);
                    break;
                }
                iVar4 = iVar4 + 1;
                iVar1 = iVar4 * 0x10;
            } while (*(iVar1 + 0x15c08) != 0);
            arg1_00 = puStack_20;
            if (((puStack_20 != NULL) && (pcVar5 != 0x13514)) && (*(iStack_28 + puStack_20 * 2) != 0x2c)) {
                arg1_00 = &iStack_28;
                fcn.00011b2c(arg1_00,0x15b94,in_R8,CONCAT71(in_R9,in_R9B));
            }
            pcVar6 = arg1;
            uVar2 = fcn.00013624(arg1_00,*(arg1 + 2),arg1);
            in_R9B = 1;
            in_R8 = CONCAT71(pcVar6 >> 8,1);
            (*pcVar5)(&iStack_28,uVar2);
            (**(*0x16388 + 0x48))(uVar2);
        }
        if (iStack_28 == 0) {
            iVar1 = fcn.000135f4();
            iVar3 = 0;
            if (iVar1 != 0) {
                iVar3 = fcn.000102c0(iVar1,2);
            }
        }
        else {
            iVar3 = iStack_28;
        }
    }
    return iVar3;
}


/* fcn.00011868 @ 0x11868 */

int64_t fcn.00011868(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.0001093c @ 0x1093c */

void fcn.0001093c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char cVar9;
    uint64_t arg1_00;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    uchar *in_stack_00000028;
    ushort *in_stack_00000030;
    uchar *in_stack_00000038;
    uchar *in_stack_00000040;
    uint32_t auStack_1a88 [2];
    int64_t iStack_1a80;
    int64_t aiStack_1a78 [2];
    uchar auStack_1a68 [101];
    uchar auStack_1a03 [4];
    ushort auStack_19ff [4];
    uchar auStack_19f7 [1295];
    uchar auStack_14e8 [1311];
    uchar auStack_fc9 [28];
    ushort auStack_fad [28];
    uchar auStack_f75 [669];
    uchar auStack_cd8 [1948];
    char cStack_53c;
    char cStack_53b;
    char cStack_32e;
    
    uStackX_10 = 0;
    iStackX_8 = arg1;
    (**(*0x16388 + 0x140))(0x147f0,0,aiStack_1a78);
    iVar3 = (**(*0x16388 + 0x140))(0x147a0,0,auStack_1a88);
    if (iVar3 == 0) {
        iVar3 = fcn.000118f4(auStack_1a88[0],0x14810,&iStack_1a80);
    }
    iStackX_8 = 0xca9;
    iVar4 = (**(*0x16390 + 0x48))(L"Setup",0x14700,0,&iStackX_8,auStack_cd8);
    iStackX_8 = 0x578;
    iVar5 = (**(*0x16390 + 0x48))(L"SaSetup",0x147b0,0,&iStackX_8,auStack_1a68);
    iStackX_8 = 0x80d;
    uVar6 = (**(*0x16390 + 0x48))(L"PchSetup",0x14790,0,&iStackX_8,auStack_14e8);
    arg1_00 = arg2 >> 0x18 & 0xff;
    uVar8 = arg2 >> 0x10 & 0xff;
    uVar7 = arg2 >> 8 & 0xff;
    if (arg1_00 == 0) {
        if ((uVar8 != 1) && (uVar8 != 6)) {
            if ((uVar8 - 0x1b < 3) || (uVar8 == 0xff)) {
                cVar9 = '\x01';
                uVar2 = (*(((uVar8 & 0x1f) << 3 | uVar7 & 7) * 0x1000 + 0xc000004c) >> 0x18) - 1;
                uVar7 = uVar2;
                if (-1 < uVar6) {
                    *arg3 = auStack_fc9[uVar2];
                    *arg4 = auStack_fad[uVar7];
                    *in_stack_00000040 = auStack_f75[uVar7];
                }
                goto code_r0x00010b8a;
            }
            goto code_r0x00010b48;
        }
        cVar9 = '\x02';
        if (iVar5 < 0) goto code_r0x00010b7e;
        *arg3 = auStack_1a03[uVar7];
        *arg4 = auStack_19ff[uVar7];
        *in_stack_00000040 = auStack_19f7[uVar7];
    }
    else {
code_r0x00010b48:
        if ((uVar8 != 7) || (iVar3 != 0)) {
            *in_stack_00000040 = 0;
            return;
        }
        fcn.000137ac(uVar7,arg1_00,7,uVar7);
        cVar9 = -0x80;
        uVar7 = uStackX_10;
        uVar6 = uVar8;
code_r0x00010b7e:
        iVar4 = 0;
    }
    if (iVar4 < 0) {
        return;
    }
code_r0x00010b8a:
    uVar1 = fcn.0001086c(auStack_cd8,uVar7,CONCAT71(uVar6 >> 8,cVar9));
    if ((((cStack_53b == '\x01') && (cVar9 == -0x80)) && (cStack_32e == '\x01')) && (uVar1 < 4)) {
        if (iStack_1a80 == 0) {
            return;
        }
        uVar7 = uVar1;
        *in_stack_00000040 = 0;
        *arg3 = *(iStack_1a80 + 0x24 + uVar7 * 8);
        *arg4 = *(iStack_1a80 + 0x26 + uVar7 * 8);
        *in_stack_00000028 = *(iStack_1a80 + 0x25 + uVar7 * 8);
        *in_stack_00000030 = *(iStack_1a80 + 0x28 + uVar7 * 8);
        *in_stack_00000038 = *(iStack_1a80 + 0x2a + uVar7 * 8);
    }
    if (((cStack_53c == '\x01') && (cVar9 - 1U < 2)) &&
       ((cStack_32e == '\x01' && ((uVar1 < 2 && (aiStack_1a78[0] != 0)))))) {
        uVar7 = uVar1;
        *in_stack_00000040 = 0;
        *arg3 = *(aiStack_1a78[0] + 0x10 + uVar7 * 8);
        *arg4 = *(aiStack_1a78[0] + 0x12 + uVar7 * 8);
        *in_stack_00000028 = *(aiStack_1a78[0] + 0x11 + uVar7 * 8);
        *in_stack_00000030 = *(aiStack_1a78[0] + 0x14 + uVar7 * 8);
        *in_stack_00000038 = *(aiStack_1a78[0] + 0x16 + uVar7 * 8);
    }
    return;
}


/* fcn.00010c84 @ 0x10c84 */

uint64_t fcn.00010c84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uchar auVar3 [16];
    uint16_t uVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    char cVar11;
    uint64_t uVar12;
    uint8_t uVar13;
    uint64_t uStackX_8;
    uint16_t *in_stack_00000030;
    uint8_t *in_stack_00000040;
    
    uVar13 = arg2 >> 0x20;
    uVar12 = arg2 >> 0x18 & 0xff;
    uVar4 = 0;
    uVar6 = 0;
    *in_stack_00000040 = 0;
    uStackX_8 = arg1;
    uVar5 = fcn.000112f0(CONCAT71(arg1 >> 8,uVar13) & 0xffffffffffffff01,uVar12);
    do {
        uVar8 = *(uVar4 * 0x20 + 93000);
        if ((uVar8 != 0) && (uVar5 == uVar8)) {
            iVar7 = uVar4 * 0x20;
            *arg3 = *(iVar7 + 0x16b50);
            *arg4 = *(iVar7 + 0x16b52);
            *in_stack_00000030 = *(iVar7 + 0x16b56);
            *in_stack_00000040 = *(iVar7 + 0x16b59);
            break;
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x180);
    uVar8 = uVar5 >> 0x18 & 0xff;
    if ((uVar5 & 0x100000000) != 0) {
        uVar8 = (uVar5 >> 0x20 & 1) << 0xc | uVar8;
    }
    uVar8 = ((uVar8 << 5 | uVar5 >> 0x10 & 0x1f) << 3 | uVar5 >> 8 & 7) * 0x1000 + 0x19;
    uVar9 = uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff;
    uVar8 = CONCAT71(0xc00000,*(uVar9 + 0xc0000000));
    uStackX_8 = uStackX_8 & 0xffffffffffffff00;
    cVar11 = arg2 >> 0x18;
    if ((cVar11 != '\0') &&
       (uVar8 = fcn.00011494(CONCAT71(uVar9 >> 8,uVar13) & 0xffffffffffffff01,CONCAT71(uVar5 >> 0x10,cVar11),
                             &uStackX_8), uVar8 == 0)) {
        iVar7 = (uStackX_8 & 0xff) * 5;
        uVar1 = *(iVar7 + 0x163c3);
        uVar2 = *(iVar7 + 0x163c4);
        if (*arg3 < uVar1 + 2 + uVar2) {
            *arg3 = 0;
        }
        else {
            if (uVar1 == 0) {
                iVar10 = *0x16370;
            }
            else {
                auVar3._8_8_ = 0;
                auVar3._0_8_ = (*arg3 - uVar2) + -2;
                iVar10 = SUB164(auVar3 % ZEXT116(uVar1),0);
                *0x16370 = iVar10;
                *arg3 = SUB161(auVar3 / ZEXT116(uVar1),0);
            }
            if (iVar10 != 0) {
                while( true ) {
                    iVar7 = uVar6 * 5;
                    if (*(iVar7 + 0x163c1) == 0) break;
                    if (((*(iVar7 + 0x163c0) == (uVar13 & 1)) && (*(iVar7 + 0x163c1) == uVar12)) &&
                       (*(iVar7 + 0x163c2) == (arg2 >> 0x10 & 0xff))) {
                        *arg3 = *arg3 + iVar10;
                        break;
                    }
                    uVar6 = uVar6 + 1;
                }
            }
        }
        *arg4 = (*arg4 - uVar2) / uVar1;
        *in_stack_00000030 = *in_stack_00000030 / uVar1;
        uVar8 = *in_stack_00000040 / uVar1;
        *in_stack_00000040 = uVar8;
    }
    return uVar8;
}


/* fcn.00011658 @ 0x11658 */

ulong fcn.00011658(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    
    uVar7 = 0;
    if (arg1 == '\0') {
        uVar5 = arg3 & 0x1f;
        uVar1 = (arg2 & 0xffU) << 5;
    }
    else {
        uVar5 = ((arg1 & 0xffU) << 0xc | arg2 & 0xffU) << 5;
        uVar1 = arg3 & 0x1f;
    }
    iVar6 = ((uVar5 | uVar1) << 3 | arg4 & 7) * 0x1000;
    uVar1 = iVar6 + 6U & 0xffffffff;
    uVar3 = *((iVar6 + 6U >> 4 & 0x10000000 | uVar1) + 0xc0000000);
    uVar1 = CONCAT71(uVar1 >> 8,uVar3);
    if ((uVar3 & 0x10) != 0) {
        uVar4 = 0;
        iVar2 = 0x14;
        if ((*((iVar6 + 0xeU >> 4 & 0x10000000 | iVar6 + 0xeU & 0xffffffff) + 0xc0000000) & 0x7f) != 2) {
            iVar2 = 0x34;
        }
        uVar1 = iVar2 + iVar6 & 0xffffffff;
        uVar3 = *((iVar2 + iVar6 >> 4 & 0x10000000 | uVar1) + 0xc0000000) & 0xfc;
        uVar5 = uVar3;
        if (uVar3 != 0) {
            while (uVar4 != -1) {
                uVar1 = uVar5 + iVar6 & 0xffffffff;
                uVar4 = *((uVar5 + iVar6 >> 4 & 0x10000000 | uVar1) + 0xc0000000);
                if (uVar4 == '\x10') {
                    uVar1 = 0;
                    uVar7 = 0;
                    if (0x3f < uVar5) {
                        uVar7 = uVar5;
                    }
                    break;
                }
                uVar5 = uVar4 >> 8;
                if (uVar4 >> 8 == '\0') break;
            }
        }
    }
    return CONCAT71(uVar1 >> 8,uVar7);
}


/* fcn.00011764 @ 0x11764 */

uint64_t fcn.00011764(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar1 = CONCAT44(in_register_00000014,arg2);
    if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        uVar4 = uVar1;
        if ((arg1 & 1U) != 0) {
            uVar2 = arg1 >> 4;
            uVar4 = uVar1 - 1;
            uVar5 = arg1 & 0xffffffff;
            arg1 = arg1 + 1;
            *arg3 = *((uVar2 & 0x10000000 | uVar5) + 0xc0000000);
            arg3 = arg3 + 1;
        }
        if ((1 < uVar4) && ((arg1 & 2U) != 0)) {
            uVar5 = arg1 & 0xffffffff;
            uVar2 = arg1 >> 4;
            arg1 = arg1 + 2;
            uVar4 = uVar4 - 2;
            *arg3 = *((uVar2 & 0x10000000 | uVar5) + 0xc0000000);
            arg3 = arg3 + 2;
        }
        if (3 < uVar4) {
            uVar5 = uVar4 >> 2;
            uVar4 = uVar4 + uVar5 * -4;
            do {
                uVar2 = arg1 & 0xffffffff;
                uVar3 = arg1 >> 4;
                arg1 = arg1 + 4;
                *arg3 = *((uVar3 & 0x10000000 | uVar2) + 0xc0000000);
                arg3 = arg3 + 4;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        if (1 < uVar4) {
            uVar5 = arg1 & 0xffffffff;
            uVar2 = arg1 >> 4;
            arg1 = arg1 + 2;
            uVar4 = uVar4 - 2;
            *arg3 = *((uVar2 & 0x10000000 | uVar5) + 0xc0000000);
            arg3 = arg3 + 2;
        }
        if (uVar4 != 0) {
            *arg3 = *((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000);
        }
    }
    return uVar1;
}


/* fcn.00014664 @ 0x14664 */

void fcn.00014664(void)

{
    if (*0x14874 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x14874 = '\x05';
        }
        else {
            *0x14874 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00011b2c @ 0x11b2c */

ulong fcn.00011b2c(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    uVar3 = 0;
    iVar2 = fcn.00013914(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 2);
    if (*(arg1 + 4) < (iVar1 + iVar2) * 2 + 2U) {
        arg2_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 4) = arg2_00;
        uVar3 = fcn.00013664(uVar3,iVar1 * 2,arg2_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.00013914(*(arg1 + 2) * 2 + *arg1,*(arg1 + 4) + *(arg1 + 2) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 2) = *(arg1 + 2) + iVar2;
    return *arg1;
}


/* fcn.00013914 @ 0x13914 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013914(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001396f;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001396f:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.000118d0(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000118a4(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x15fac;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x00013cf9:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x15fac;
                }
                else {
                    pcVar9 = 0x15fb0;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00013ab8:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x00013c5b;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00013c72;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00013c5b;
                                }
                                goto code_r0x00013c72;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x00013c5b:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00013ab8;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x00013ab8;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00013c72;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00013c5b;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00013c72:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00014640(&var_68h_2,0x26,0,0x15f40);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00013cf9;
                                if (uStack_a8 == 0x53) goto code_r0x00013f08;
                                if (uStack_a8 == 0x58) goto code_r0x00013ffe;
                                if (uStack_a8 == 0x61) goto code_r0x00013f11;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00013a9d;
                                }
                                if (uStack_a8 != 100) goto code_r0x00013a99;
                                goto code_r0x00014015;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x15fac;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x00014210;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x1604b;
                                    goto code_r0x00013fc5;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00013fc5:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00014210;
                            }
                            fcn.00014640(&var_68h_2,0x26,0,0x15fa4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00013f08:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00013f11:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x00014210;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00013a99;
                                    goto code_r0x00014002;
                                }
                                goto code_r0x00014007;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x00014210;
                            }
                            fcn.00014640(&var_68h_2,0x26,0,0x15f88);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00014210;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00013ffe:
                    uVar5 = uVar5 | 0x20;
code_r0x00014002:
                    uVar5 = uVar5 | 0x80;
code_r0x00014007:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00014015:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00014057;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x00014057:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x000140df:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000140df;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x00013a99:
                    pcVar9 = &uStack_a8;
code_r0x00013a9d:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00014210:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000138e0(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000138e0(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000138e0(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000138e0(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.00013664 @ 0x13664 */

int64_t fcn.00013664(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000135f4(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                section..text(arg1_00,arg3,arg2);
            }
            (**(*0x16388 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.00013624 @ 0x13624 */

void fcn.00013624(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000135f4();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000138b0 @ 0x138b0 */

void fcn.000138b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013914(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000129a4 @ 0x129a4 */

void fcn.000129a4(int64_t arg1,int64_t arg2)

{
    fcn.00011b2c(arg1,0x15540,*arg2,*(arg2 + 1));
    return;
}


/* fcn.000118a4 @ 0x118a4 */

uint64_t fcn.000118a4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.000118d0 @ 0x118d0 */

uint64_t fcn.000118d0(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00014640 @ 0x14640 */

void fcn.00014640(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013914(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000138e0 @ 0x138e0 */

uchar * fcn.000138e0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


