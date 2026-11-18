// decompiled by r2ghidra: 1339_UFSProvisioningTool.pe32
// functions: 28

/* entry0 @ 0x10310 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg1_00;
    ulong unaff_RDI;
    int64_t *piStackX_10;
    int64_t iStackX_18;
    
    fcn.0001033c(arg1,arg2);
    piStackX_10 = NULL;
    iStackX_18 = 0;
    iVar1 = (**(*(arg2 + 0x60) + 0x118))(arg1,str.61_u,&piStackX_10,arg1,0,2,unaff_RDI);
    if (iVar1 < 0) {
        iVar1 = (**(*(arg2 + 0x60) + 0x118))(arg1,0x12c50,&iStackX_18,arg1,0,2);
        if (iVar1 < 0) {
            return 0xffffffffffffffff;
        }
        iVar1 = *(iStackX_18 + 0x10);
        arg1_00 = *(iStackX_18 + 0x18);
    }
    else {
        iVar1 = *piStackX_10;
        arg1_00 = piStackX_10[1];
    }
    uVar2 = fcn.00011274(arg1_00,iVar1);
    return uVar2;
}


/* fcn.0001033c @ 0x1033c */

void fcn.0001033c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x15ea8 = *(arg1 + 0x60);
    *0x15ea0 = arg1;
    fcn.000104b8();
    puVar4 = fcn.000104b8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010390:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102a0();
                fcn.00010290();
                uVar2 = in(0x1808);
                fcn.00010270(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00010260();
                }
                fcn.00010270(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010290();
                }
                else {
                    fcn.00010280();
                }
                return;
            }
            if ((*0x12c60 == *(puVar4 + 4)) && (*0x12c68 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010390;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000104b8 @ 0x104b8 */

int64_t fcn.000104b8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15eb0 == 0) {
        *0x15eb0 = 0;
        if (*(*0x15ea0 + 0x68) != 0) {
            piVar2 = *(*0x15ea0 + 0x70);
            do {
                if ((*0x12c30 == *piVar2) && (*0x12c38 == piVar2[1])) {
                    *0x15eb0 = (*(*0x15ea0 + 0x70))[uVar1 * 3 + 2];
                    return *0x15eb0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x15ea0 + 0x68));
        }
    }
    return *0x15eb0;
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


/* fcn.00011274 @ 0x11274 */

//WARNING: Variable defined which should be unmapped: var_13h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00011274(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uchar auVar2 [16];
    int64_t iVar3;
    char cVar4;
    int iVar5;
    int arg2_00;
    uint32_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    char cVar10;
    int64_t in_R8;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t in_R9;
    uint64_t arg4;
    uint64_t arg3;
    uint8_t uVar14;
    uint16_t uVar15;
    int16_t var_bp_10h;
    uint32_t auStackX_18 [2];
    int iStackX_20;
    int32_t var_2fh;
    int8_t var_35h;
    int8_t var_36h;
    int64_t var_bp_40h;
    int8_t var_bp_48h;
    int16_t var_49h;
    int32_t var_4ch;
    int16_t var_50h;
    int32_t var_52h;
    int64_t var_56h;
    int16_t var_5eh;
    int8_t var_60h;
    int16_t var_61h;
    int32_t var_6ch;
    int64_t var_130h;
    int64_t var_140h;
    int64_t var_17fh;
    int32_t var_1d0h;
    int32_t var_1e0h;
    uint32_t var_1e8h;
    uint32_t auStack_288 [4];
    uint uStack_278;
    uint uStack_274;
    uchar uStack_270;
    ushort uStack_26f;
    uint uStack_26c;
    char acStack_268 [4];
    uint32_t uStack_264;
    ushort uStack_260;
    uchar uStack_25e;
    ushort auStack_25d [58];
    uchar auStack_1e8 [4];
    uint64_t uStack_1e4;
    int iStack_1db;
    uint8_t uStack_1d7;
    uint16_t uStack_1b8;
    uint32_t uStack_199;
    char cStack_193;
    char cStack_192;
    uint uStack_188;
    uint uStack_184;
    uchar uStack_180;
    ushort uStack_17f;
    uint uStack_17c;
    ushort uStack_178;
    uint32_t uStack_176;
    char acStack_172 [4];
    uint32_t uStack_16e;
    ushort uStack_16a;
    uchar uStack_168;
    ushort auStack_167 [5];
    uint auStack_15c [49];
    uchar auStack_98 [6];
    char cStack_92;
    uint16_t uStack_88;
    uchar auStack_86 [6];
    uchar auStack_80 [5];
    uchar auStack_7b [5];
    uchar auStack_76 [3];
    uchar auStack_73 [42];
    uint32_t uStack_49;
    uchar auStack_43 [11];
    int64_t var_bp_20h;
    int var_13h;
    int8_t var_fh;
    
    auStack_288[1] = 4;
    iVar3 = arg2;
    fcn.00011e68(0x14630,arg2,in_R8,in_R9);
    iVar5 = iVar3;
    fcn.00011e68(0x146a8,iVar5,in_R8,in_R9);
    fcn.00011e68(0x146c0,iVar5,in_R8,in_R9);
    fcn.00011e68(0x14740,iVar5,in_R8,in_R9);
    fcn.00011e68(0x147e0,iVar5,in_R8,in_R9);
    if (1 < arg1) {
        if (**(arg2 + 8) == 0x46) {
            *0x15eb8 = '\x01';
        }
        else if (**(arg2 + 8) == 0x4c) {
            *0x15ed0 = '\x01';
        }
    }
    uVar11 = 0x15ed8;
    uVar7 = 0;
    iVar3 = (**(*0x15ea8 + 0x140))(0x12c40,0);
    if (iVar3 < 0) {
        iVar5 = 0x14880;
    }
    else {
        iStackX_20 = 0xff;
        in_R9 = 0;
        uVar11 = CONCAT71(uVar11 >> 8,0xb);
        uVar6 = CONCAT71(uVar7 >> 8,1);
        iVar3 = (*(*0x15ed8)[2])(*0x15ed8);
        if (-1 < iVar3) {
            if (iStackX_20 == 1) {
                iVar5 = 0x14a60;
                goto code_r0x00011d39;
            }
            auStack_288[2] = 0x59;
            fcn.000102f0(auStack_98,0x59);
            in_R9 = 0;
            uVar11 = 0;
            iVar3 = (***0x15ed8)(*0x15ed8,1,0,0,0,auStack_98,auStack_288 + 2);
            arg2_00 = iVar3;
            if (iVar3 < 0) {
                iVar5 = 0x14ad0;
                goto code_r0x00011344;
            }
            uVar11 = auStack_288[2];
            in_R9 = 0x59;
            fcn.00011e68(0x14b80,arg2_00,uVar11,0x59);
            iVar3 = 2;
            fcn.00010584(&uStack_88,2);
            fcn.00010584(auStack_86,iVar3);
            fcn.00010584(auStack_80,iVar3);
            fcn.00010584(auStack_7b,iVar3);
            fcn.00010584(auStack_76,iVar3);
            iVar3 = 4;
            fcn.00010584(auStack_73,4);
            if ((uStack_88 == 0x220) || (0x30f < uStack_88)) {
                fcn.00010584(&uStack_49,iVar3);
                fcn.00010584(auStack_43,iVar3);
            }
            *0x12cec = uStack_88;
            fcn.000105c4(auStack_98,uStack_88,uVar11,in_R9);
            uVar6 = *0x12cec;
            fcn.00011e68(0x14c60,uVar6,uVar11,in_R9);
            *0x15eb9 = cStack_92;
            if ((cStack_92 != '\0') && (*0x15eb8 == '\0')) {
                fcn.00011e68(0x14cc0,uVar6,uVar11,in_R9);
                iVar5 = 0x14d20;
                goto code_r0x00011d39;
            }
            if ((*0x12cec == 0x220) || (auStack_288[0] = 0x48, 0x30f < *0x12cec)) {
                auStack_288[0] = 0x57;
            }
            fcn.000102f0(auStack_1e8,0x57);
            cVar10 = '\a';
            iVar13 = 0;
            iVar12 = CONCAT71(uVar11 >> 8,7);
            iVar3 = (***0x15ed8)(*0x15ed8,1,iVar12,0,0,auStack_1e8,auStack_288);
            if (iVar3 < 0) {
                iVar5 = 0x14da0;
code_r0x00011579:
                fcn.00011e68(iVar5,iVar3,iVar12,iVar13);
                return iVar3;
            }
            uVar11 = auStack_288[0];
            fcn.00011e68(0x14e40,iVar3,uVar11,iVar13);
            fcn.000110b0(auStack_1e8);
            fcn.00010938(auStack_1e8,*0x12cec,uVar11,iVar13);
            *0x15ec8 = uStack_1e4 / (uStack_1d7 * iStack_1db);
            if ((*0x12cec == 0x220) || (0x30f < *0x12cec)) {
                auStackX_18[0] = 0xe6;
                fcn.000102f0(&uStack_188,0xe6);
                iVar13 = 0;
                iVar12 = CONCAT71(uVar11 >> 8,1);
                iVar3 = (***0x15ed8)(*0x15ed8,1,iVar12,0,0,&uStack_188,auStackX_18);
                if (iVar3 < 0) {
                    iVar5 = 0x14f10;
                    goto code_r0x00011579;
                }
                uVar8 = auStackX_18[0];
                uVar11 = 0xe6;
                fcn.00011e68(0x14fd0,iVar3,uVar8,0xe6);
                fcn.000111b0(&uStack_188);
                fcn.00010c10(&uStack_188,iVar3,uVar8,uVar11);
                uStack_188 = 0x10001e6;
                uStack_184 = 0x7f0101;
                uStack_180 = 0xf;
                uStack_17f = 0;
                if (0x30f < *0x12cec) {
                    uStack_17c = 0;
                }
                if ((((uStack_49 & 0x100) != 0) && (cStack_193 - 1U < 2)) && (cStack_192 - 1U < 2)) {
                    uVar11 = uStack_199;
                    *0x12cf0 = *0x12c71;
                    *0x15ec0 = uStack_199;
                    auVar2._8_8_ = 0;
                    auVar2._0_8_ = *0x12c71;
                    auVar2 = auVar2 / ZEXT416(uStack_1d7 * iStack_1db * 0x200);
                    *0x15ebc = auVar2._0_4_;
                    if (uVar11 < auVar2._0_8_) {
                        *0x15ebc = uStack_199;
                    }
                    uVar8 = *0x15ebc;
                    fcn.00011e68(0x150a0,uStack_199,uVar8,uVar11);
                    uStack_176 = *0x15ebc;
                    uStack_178 = 0x101;
                }
                arg3 = *0x15ec8;
                uVar14 = uStack_1d7;
                iVar5 = iStack_1db;
                uVar15 = *0x12cec;
                do {
                    iVar3 = cVar10;
                    iVar12 = iVar3 * 0xe;
                    if ((*(iVar12 + 0x12c79) == '\0') ||
                       ((uVar11 = *(iVar12 + 0x12c7f), uVar11 == 0 && (cVar10 != '\0')))) {
                        uVar9 = 0x1a;
                        fcn.000102f0(acStack_172 + iVar3 * 0x1a,0x1a);
                        arg3 = *0x15ec8;
                        uVar14 = uStack_1d7;
                        iVar5 = iStack_1db;
                        uVar15 = *0x12cec;
                    }
                    else {
                        uVar8 = iVar3 * 0x1a;
                        cVar1 = *(iVar12 + 0x12c7a);
                        cVar4 = cVar10;
                        if (cVar10 != '\x01' && cVar10 != '\x02') {
                            cVar4 = '\0';
                        }
                        acStack_172[uVar8] = '\x01';
                        acStack_172[uVar8 + 1] = cVar4;
                        acStack_172[uVar8 + 2] = cVar1;
                        if (cVar10 == '\0') {
                            acStack_172[3] = *0x12c7b;
                            uStack_16e = arg3;
                            uVar9 = 0;
                        }
                        else {
                            uVar9 = uVar14 * iVar5 * 0x200;
                            if (*(iVar12 + 0x12c7b) == 3) {
                                acStack_172[uVar8 + 3] = '\x03';
                                uVar6 = (uVar11 / uVar9) * (uStack_1b8 >> 8);
                                arg4 = uVar6;
                                *(&uStack_16e + uVar8) = uVar6;
                            }
                            else {
                                acStack_172[uVar8 + 3] = '\0';
                                arg4 = uVar11 / uVar9 & 0xffffffff;
                                *(&uStack_16e + uVar8) = uVar11 / uVar9;
                            }
                            uVar9 = uVar11 % uVar9;
                            if (arg3 == arg4) goto code_r0x00011bb4;
                            arg3 = arg3 - *(&uStack_16e + uVar8);
                            uVar11 = arg4;
                            *0x15ec8 = arg3;
                        }
                        (&uStack_16a)[iVar3 * 0xd] = 0xc01;
                        *(auStack_167 + (uVar8 - 1)) = 2;
                        auStack_167[iVar3 * 0xd] = 0;
                        if (uVar15 != 0x220) {
                            if (uVar15 < 0x310) goto code_r0x00011b2b;
                        }
                        *(auStack_15c + uVar8) = 0;
                    }
code_r0x00011b2b:
                    cVar10 = cVar10 + -1;
                } while (-1 < cVar10);
                fcn.00011e68(0x15250,uVar9,uVar8,uVar11);
                fcn.000111b0(&uStack_188);
                fcn.00010c10(&uStack_188,uVar9,uVar8,uVar11);
                fcn.00011e68(0x152f0,uVar9,uVar8,uVar11);
                auStackX_18[0] = 0xe6;
                in_R9 = 0;
                uVar11 = CONCAT71(uVar8 >> 8,1);
                iVar3 = (***0x15ed8)(*0x15ed8,0,uVar11,0,0,&uStack_188,auStackX_18);
                fcn.00010524(0x57642);
                if (iVar3 < 0) goto code_r0x00011ba8;
                uVar11 = auStackX_18[0];
                fcn.00011e68(0x15450,iVar3,uVar11,0xe6);
                auStackX_18[0] = 0xe6;
                fcn.000102f0(&uStack_188,0xe6);
                in_R9 = 0;
                uVar11 = CONCAT71(uVar11 >> 8,1);
                iVar3 = (***0x15ed8)(*0x15ed8,1,uVar11,0,0,&uStack_188,auStackX_18);
                if (iVar3 < 0) goto code_r0x00011c38;
                uVar11 = auStackX_18[0];
                iVar12 = 0xe6;
                fcn.00011e68(0x14fd0,iVar3,uVar11,0xe6);
                fcn.000111b0(&uStack_188);
                fcn.00010c10(&uStack_188,iVar3,uVar11,iVar12);
            }
            else {
                _var_bp_10h = 0x90;
                fcn.000102f0(&uStack_278,4);
                iVar13 = 0;
                iVar12 = CONCAT71(uVar11 >> 8,1);
                iVar3 = (***0x15ed8)(*0x15ed8,1,iVar12,0,0,&uStack_278,&var_bp_10h);
                if (iVar3 < 0) {
                    iVar5 = 0x15520;
                    goto code_r0x00011579;
                }
                uVar8 = _var_bp_10h;
                uVar11 = 0x90;
                fcn.00011e68(0x155d0,iVar3,uVar8,0x90);
                fcn.00011220(&uStack_278);
                fcn.00010e9c(&uStack_278,iVar3,uVar8,uVar11);
                uStack_278 = 0x1000190;
                uStack_274 = 0x7f0101;
                uStack_270 = 0xf;
                uStack_26f = 0;
                if (*0x12cec == 0x300) {
                    uStack_26c = 0;
                }
                arg3 = *0x15ec8;
                uVar14 = uStack_1d7;
                iVar5 = iStack_1db;
                do {
                    iVar12 = cVar10;
                    iVar3 = iVar12 * 0xe;
                    if ((*(iVar3 + 0x12c79) == '\0') ||
                       ((uVar11 = *(iVar3 + 0x12c7f), uVar11 == 0 && (cVar10 != '\0')))) {
                        iVar13 = iVar12 * 0x10;
                        uVar8 = 0x10;
                        fcn.000102f0(acStack_268 + iVar13,0x10);
                        arg3 = *0x15ec8;
                        uVar14 = uStack_1d7;
                        iVar5 = iStack_1db;
                    }
                    else {
                        iVar13 = iVar12 * 2;
                        cVar1 = *(iVar3 + 0x12c7a);
                        acStack_268[iVar12 * 0x10] = '\x01';
                        cVar4 = cVar10;
                        if (cVar10 != '\x01' && cVar10 != '\x02') {
                            cVar4 = '\0';
                        }
                        acStack_268[iVar12 * 0x10 + 2] = cVar1;
                        acStack_268[iVar12 * 0x10 + 1] = cVar4;
                        if (cVar10 == '\0') {
                            acStack_268[3] = *0x12c7b;
                            uStack_264 = arg3;
                            uVar8 = 0;
                        }
                        else {
                            uVar8 = uVar14 * iVar5 * 0x200;
                            if (*(iVar3 + 0x12c7b) == 3) {
                                acStack_268[iVar12 * 0x10 + 3] = '\x03';
                                uVar6 = (uVar11 / uVar8) * (uStack_1b8 >> 8);
                                arg4 = uVar6;
                                (&uStack_264)[iVar12 * 4] = uVar6;
                            }
                            else {
                                acStack_268[iVar12 * 0x10 + 3] = '\0';
                                arg4 = uVar11 / uVar8 & 0xffffffff;
                                (&uStack_264)[iVar12 * 4] = uVar11 / uVar8;
                            }
                            uVar8 = uVar11 % uVar8;
                            if (arg3 == arg4) {
code_r0x00011bb4:
                                fcn.00011e68(0x15160,cVar10,arg3,arg4);
                                return -0x7ffffffffffffffd;
                            }
                            arg3 = arg3 - (&uStack_264)[iVar12 * 4];
                            uVar11 = arg4;
                            *0x15ec8 = arg3;
                        }
                        (&uStack_260)[iVar12 * 8] = 0xc01;
                        *(auStack_25d + iVar12 * 0x10 + -1) = 2;
                        auStack_25d[iVar12 * 8] = 0;
                    }
                    cVar10 = cVar10 + -1;
                } while (-1 < cVar10);
                fcn.00011e68(0x15250,uVar8,iVar13,uVar11);
                fcn.00011220(&uStack_278);
                fcn.00010e9c(&uStack_278,uVar8,iVar13,uVar11);
                fcn.00011e68(0x152f0,uVar8,iVar13,uVar11);
                _var_bp_10h = 0x90;
                in_R9 = 0;
                uVar11 = CONCAT71(iVar13 >> 8,1);
                iVar3 = (***0x15ed8)(*0x15ed8,0,uVar11,0,0,&uStack_278,&var_bp_10h);
                fcn.00010524(0x57642);
                if (iVar3 < 0) {
code_r0x00011ba8:
                    arg2_00 = iVar3;
                    iVar5 = 0x15390;
                    goto code_r0x00011344;
                }
                uVar11 = _var_bp_10h;
                fcn.00011e68(0x156b0,iVar3,uVar11,0x90);
                _var_bp_10h = 0x90;
                fcn.000102f0(&uStack_278,0x90);
                in_R9 = 0;
                uVar11 = CONCAT71(uVar11 >> 8,1);
                iVar3 = (***0x15ed8)(*0x15ed8,1,uVar11,0,0,&uStack_278,&var_bp_10h);
                if (iVar3 < 0) {
code_r0x00011c38:
                    arg2_00 = iVar3;
                    iVar5 = 0x14f10;
                    goto code_r0x00011344;
                }
                uVar11 = _var_bp_10h;
                iVar12 = 0x90;
                fcn.00011e68(0x155d0,iVar3,uVar11,0x90);
                fcn.00011220(&uStack_278);
                fcn.00010e9c(&uStack_278,iVar3,uVar11,iVar12);
            }
            iStackX_20 = 1;
            in_R9 = 0;
            uVar11 = 0;
            iVar3 = (*(*0x15ed8)[2])(*0x15ed8,0,0,0,0,&iStackX_20,auStack_288 + 1);
            arg2_00 = iVar3;
            if (iVar3 < 0) {
                iVar5 = 0x15790;
                goto code_r0x00011344;
            }
            fcn.00011e68(0x15840,arg2_00,uVar11,in_R9);
            uVar6 = iVar3;
            if (*0x15ed0 == '\x01') {
                fcn.00011e68(0x158d0,uVar6,uVar11,in_R9);
                iStackX_20 = 1;
                in_R9 = 0;
                uVar11 = CONCAT71(uVar11 >> 8,0xb);
                uVar6 = 0;
                iVar3 = (*(*0x15ed8)[2])(*0x15ed8);
                if (iVar3 < 0) {
                    iVar5 = 0x15930;
                    goto code_r0x00011341;
                }
                fcn.00011e68(0x159c0,uVar6,uVar11,in_R9);
            }
            iVar5 = 0x15a30;
code_r0x00011d39:
            fcn.00011e68(iVar5,uVar6,uVar11,in_R9);
            return 0;
        }
        iVar5 = 0x149d0;
    }
code_r0x00011341:
    arg2_00 = iVar3;
code_r0x00011344:
    fcn.00011e68(iVar5,arg2_00,uVar11,in_R9);
    return iVar3;
}


/* fcn.00010260 @ 0x10260 */

void fcn.00010260(void)

{
    return;
}


/* fcn.00011e68 @ 0x11e68 */

void fcn.00011e68(int arg1,int arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    ulong uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.00011de4(CONCAT44(in_register_0000000c,arg1),*(*0x15ea0 + 0x40),&uStackX_10);
    return;
}


/* fcn.00011de4 @ 0x11de4 */

int64_t fcn.00011de4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    arg1_00 = fcn.00011dac(arg1,arg2);
    iVar1 = fcn.00011ecc(arg1_00,0x141,0x140,arg1,in_stack_00000038,in_stack_00000040);
    if ((arg2 != 0) && (iVar1 != 0)) {
        iVar2 = (**(arg2 + 8))(arg2,arg1_00);
        if (iVar2 < 0) {
            iVar1 = 0;
        }
    }
    (**(*0x15ea8 + 0x48))(arg1_00);
    return iVar1;
}


/* fcn.00011dac @ 0x11dac */

int64_t fcn.00011dac(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x15ea8 + 0x40))(4,0x282,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* fcn.00011ecc @ 0x11ecc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011ecc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011f27;
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
code_r0x00011f27:
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
        uVar5 = fcn.00011d88(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00011d5c(arg4);
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
            pcVar9 = 0x15afc;
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
code_r0x000122b1:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x15afc;
                }
                else {
                    pcVar9 = 0x15b00;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00012070:
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
                            goto code_r0x00012213;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001222a;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00012213;
                                }
                                goto code_r0x0001222a;
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
code_r0x00012213:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00012070;
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
                                goto code_r0x00012070;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001222a;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00012213;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001222a:
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
                                fcn.00012bf8(&var_68h_2,0x26,0,0x15a90);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x000122b1;
                                if (uStack_a8 == 0x53) goto code_r0x000124c0;
                                if (uStack_a8 == 0x58) goto code_r0x000125b6;
                                if (uStack_a8 == 0x61) goto code_r0x000124c9;
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
                                    goto code_r0x00012055;
                                }
                                if (uStack_a8 != 100) goto code_r0x00012051;
                                goto code_r0x000125cd;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x15afc;
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
                        goto code_r0x000127c8;
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
                                    iVar13 = 0x15b9b;
                                    goto code_r0x0001257d;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x0001257d:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x000127c8;
                            }
                            fcn.00012bf8(&var_68h_2,0x26,0,0x15af4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x000124c0:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x000124c9:
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
                                goto code_r0x000127c8;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00012051;
                                    goto code_r0x000125ba;
                                }
                                goto code_r0x000125bf;
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
                                goto code_r0x000127c8;
                            }
                            fcn.00012bf8(&var_68h_2,0x26,0,0x15ad8);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x000127c8;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x000125b6:
                    uVar5 = uVar5 | 0x20;
code_r0x000125ba:
                    uVar5 = uVar5 | 0x80;
code_r0x000125bf:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x000125cd:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001260f;
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
code_r0x0001260f:
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
code_r0x00012697:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00012697;
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
code_r0x00012051:
                    pcVar9 = &uStack_a8;
code_r0x00012055:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x000127c8:
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
                arg1 = fcn.00011e98(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011e98(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00011e98(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00011e98(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00010584 @ 0x10584 */

void fcn.00010584(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    
    uVar5 = arg2 >> 1;
    uVar4 = 0;
    if (uVar5 != 0) {
        puVar6 = arg1;
        do {
            uVar1 = *puVar6;
            iVar2 = arg2 - uVar4;
            uVar4 = uVar4 + 1;
            uVar3 = iVar2 - 1;
            *puVar6 = *(uVar3 + arg1);
            puVar6 = puVar6 + 1;
            *(uVar3 + arg1) = uVar1;
        } while (uVar4 < uVar5);
    }
    return;
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,int64_t arg2)

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


/* fcn.000105c4 @ 0x105c4 */

void fcn.000105c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int arg2_00;
    uint8_t *puVar1;
    uint8_t uVar2;
    uint32_t arg2_01;
    uint8_t uVar3;
    uint64_t arg3_00;
    
    arg2_00 = arg2;
    fcn.00011e68(0x12d00,arg2_00,arg3,arg4);
    fcn.00011e68(0x12d68,*arg1,arg3,arg4);
    fcn.00011e68(0x12d88,*(arg1 + 1),arg3,arg4);
    fcn.00011e68(0x12db8,*(arg1 + 2),arg3,arg4);
    fcn.00011e68(0x12dd8,*(arg1 + 3),arg3,arg4);
    fcn.00011e68(0x12e00,*(arg1 + 4),arg3,arg4);
    fcn.00011e68(0x12e30,*(arg1 + 5),arg3,arg4);
    fcn.00011e68(0x12e50,*(arg1 + 6),arg3,arg4);
    fcn.00011e68(0x12e70,*(arg1 + 7),arg3,arg4);
    fcn.00011e68(0x12e98,*(arg1 + 8),arg3,arg4);
    fcn.00011e68(0x12ec0,*(arg1 + 9),arg3,arg4);
    fcn.00011e68(0x12ef0,*(arg1 + 10),arg3,arg4);
    fcn.00011e68(0x12f20,*(arg1 + 0xb),arg3,arg4);
    fcn.00011e68(0x12f50,*(arg1 + 0xc),arg3,arg4);
    fcn.00011e68(0x12f88,*(arg1 + 0xd),arg3,arg4);
    fcn.00011e68(0x12fb0,*(arg1 + 0xe),arg3,arg4);
    fcn.00011e68(0x12fe8,*(arg1 + 0xf),arg3,arg4);
    fcn.00011e68(0x13020,*(arg1 + 0x10),arg3,arg4);
    fcn.00011e68(0x13048,*(arg1 + 0x12),arg3,arg4);
    fcn.00011e68(0x13078,*(arg1 + 0x14),arg3,arg4);
    fcn.00011e68(0x130a8,*(arg1 + 0x15),arg3,arg4);
    fcn.00011e68(0x130d0,*(arg1 + 0x16),arg3,arg4);
    fcn.00011e68(0x130f8,*(arg1 + 0x17),arg3,arg4);
    fcn.00011e68(0x13118,*(arg1 + 0x18),arg3,arg4);
    fcn.00011e68(0x13148,*(arg1 + 0x1a),arg3,arg4);
    fcn.00011e68(0x13178,*(arg1 + 0x1b),arg3,arg4);
    fcn.00011e68(0x131a8,*(arg1 + 0x1c),arg3,arg4);
    fcn.00011e68(0x131d0,*(arg1 + 0x1d),arg3,arg4);
    fcn.00011e68(0x13208,*(arg1 + 0x1f),arg3,arg4);
    fcn.00011e68(0x13240,*(arg1 + 0x20),arg3,arg4);
    fcn.00011e68(0x13268,*(arg1 + 0x21),arg3,arg4);
    fcn.00011e68(0x13290,*(arg1 + 0x22),arg3,arg4);
    fcn.00011e68(0x132c0,*(arg1 + 0x24),arg3,arg4);
    fcn.00011e68(0x132f8,*(arg1 + 0x25),arg3,arg4);
    fcn.00011e68(0x13328,*(arg1 + 0x29),arg3,arg4);
    fcn.00011e68(0x13360,*(arg1 + 0x2a),arg3,arg4);
    uVar3 = 0;
    puVar1 = arg1 + 0x2b;
    uVar2 = 0;
    do {
        fcn.00011e68(0x133a0,uVar2,*puVar1,arg4);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 1;
    } while (uVar2 < 5);
    arg2_01 = 0;
    puVar1 = arg1 + 0x30;
    do {
        fcn.00011e68(0x133c8,arg2_01,*puVar1,arg4);
        uVar2 = arg2_01 + 1;
        arg2_01 = uVar2;
        puVar1 = puVar1 + 1;
    } while (uVar2 < 0x10);
    if ((arg2_00 == 0x220) || (0x30f < arg2_00)) {
        uVar2 = 0;
        puVar1 = arg1 + 0x40;
        do {
            fcn.00011e68(0x133f0,uVar2,*puVar1,arg4);
            uVar2 = uVar2 + 1;
            puVar1 = puVar1 + 1;
        } while (uVar2 < 3);
        puVar1 = arg1 + 0x43;
        do {
            arg3_00 = *puVar1;
            fcn.00011e68(0x13418,uVar3,arg3_00,arg4);
            uVar3 = uVar3 + 1;
            puVar1 = puVar1 + 1;
        } while (uVar3 < 0xc);
        fcn.00011e68(0x13440,*(arg1 + 0x4f),arg3_00,arg4);
        fcn.00011e68(0x13490,*(arg1 + 0x53),arg3_00,arg4);
        fcn.00011e68(0x134f0,*(arg1 + 0x54),arg3_00,arg4);
        fcn.00011e68(0x13530,*(arg1 + 0x55),arg3_00,arg4);
    }
    fcn.00011de4(0x13590,*(*0x15ea0 + 0x40),&stack0x00000010);
    return;
}


/* fcn.000110b0 @ 0x110b0 */

void fcn.000110b0(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    
    iVar2 = 8;
    fcn.00010584(arg1 + 4,8);
    uVar4 = iVar2 - 4;
    fcn.00010584(arg1 + 0xd,uVar4);
    uVar1 = iVar2 - 6;
    uVar3 = uVar1;
    fcn.00010584(arg1 + 0x1e,uVar3);
    fcn.00010584(arg1 + 0x20,uVar4);
    fcn.00010584(arg1 + 0x24,uVar1);
    fcn.00010584(arg1 + 0x26,uVar4);
    fcn.00010584(arg1 + 0x2a,uVar3);
    fcn.00010584(arg1 + 0x2c,uVar4);
    fcn.00010584(arg1 + 0x30,uVar1);
    fcn.00010584(arg1 + 0x32,uVar4);
    fcn.00010584(arg1 + 0x36,uVar1);
    fcn.00010584(arg1 + 0x38,uVar4);
    fcn.00010584(arg1 + 0x3c,uVar1);
    fcn.00010584(arg1 + 0x3e,uVar4);
    fcn.00010584(arg1 + 0x42,uVar3);
    uVar3 = uVar4;
    fcn.00010584(arg1 + 0x44,uVar3);
    if ((*0x12cec == 0x220) || (0x30f < *0x12cec)) {
        fcn.00010584(arg1 + 0x4f,uVar3);
    }
    return;
}


/* fcn.00010938 @ 0x10938 */

void fcn.00010938(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int arg2_00;
    uint8_t *puVar1;
    uint8_t uVar2;
    uint32_t arg2_01;
    uint64_t arg3_00;
    
    arg2_00 = arg2;
    fcn.00011e68(0x13670,arg2_00,arg3,arg4);
    fcn.00011e68(0x12d68,*arg1,arg3,arg4);
    fcn.00011e68(0x12d88,*(arg1 + 1),arg3,arg4);
    fcn.00011e68(0x136e0,*(arg1 + 2),arg3,arg4);
    fcn.00011e68(0x13710,*(arg1 + 3),arg3,arg4);
    fcn.00011e68(0x13730,*(arg1 + 4),arg3,arg4);
    fcn.00011e68(0x13770,*(arg1 + 0xc),arg3,arg4);
    fcn.00011e68(0x13798,*(arg1 + 0xd),arg3,arg4);
    fcn.00011e68(0x137c0,*(arg1 + 0x11),arg3,arg4);
    fcn.00011e68(0x137f8,*(arg1 + 0x12),arg3,arg4);
    fcn.00011e68(0x13828,*(arg1 + 0x13),arg3,arg4);
    fcn.00011e68(0x13860,*(arg1 + 0x14),arg3,arg4);
    fcn.00011e68(0x138a0,*(arg1 + 0x15),arg3,arg4);
    fcn.00011e68(0x138d0,*(arg1 + 0x16),arg3,arg4);
    fcn.00011e68(0x13900,*(arg1 + 0x17),arg3,arg4);
    fcn.00011e68(0x13940,*(arg1 + 0x18),arg3,arg4);
    fcn.00011e68(0x13990,*(arg1 + 0x19),arg3,arg4);
    fcn.00011e68(0x139b8,*(arg1 + 0x1a),arg3,arg4);
    fcn.00011e68(0x139f0,*(arg1 + 0x1b),arg3,arg4);
    fcn.00011e68(0x13a28,*(arg1 + 0x1c),arg3,arg4);
    fcn.00011e68(0x13a60,*(arg1 + 0x1d),arg3,arg4);
    fcn.00011e68(0x13a98,*(arg1 + 0x1e),arg3,arg4);
    fcn.00011e68(0x13ad0,*(arg1 + 0x20),arg3,arg4);
    fcn.00011e68(0x13b08,*(arg1 + 0x24),arg3,arg4);
    fcn.00011e68(0x13b40,*(arg1 + 0x26),arg3,arg4);
    fcn.00011e68(0x13b78,*(arg1 + 0x2a),arg3,arg4);
    fcn.00011e68(0x13bb0,*(arg1 + 0x2c),arg3,arg4);
    fcn.00011e68(0x13be8,*(arg1 + 0x30),arg3,arg4);
    fcn.00011e68(0x13c20,*(arg1 + 0x32),arg3,arg4);
    fcn.00011e68(0x13c58,*(arg1 + 0x36),arg3,arg4);
    fcn.00011e68(0x13c90,*(arg1 + 0x38),arg3,arg4);
    fcn.00011e68(0x13cc8,*(arg1 + 0x3c),arg3,arg4);
    fcn.00011e68(0x13d00,*(arg1 + 0x3e),arg3,arg4);
    fcn.00011e68(0x13d38,*(arg1 + 0x42),arg3,arg4);
    fcn.00011e68(0x13d70,*(arg1 + 0x44),arg3,arg4);
    if ((arg2_00 == 0x220) || (0x30f < arg2_00)) {
        arg2_01 = 0;
        puVar1 = arg1 + 0x48;
        do {
            arg3_00 = *puVar1;
            fcn.00011e68(0x13db0,arg2_01,arg3_00,arg4);
            uVar2 = arg2_01 + 1;
            arg2_01 = uVar2;
            puVar1 = puVar1 + 1;
        } while (uVar2 < 7);
        fcn.00011e68(0x13dd0,*(arg1 + 0x4f),arg3_00,arg4);
        fcn.00011e68(0x13e20,*(arg1 + 0x53),arg3_00,arg4);
        fcn.00011e68(0x13e60,*(arg1 + 0x54),arg3_00,arg4);
        fcn.00011e68(0x13eb0,*(arg1 + 0x55),arg3_00,arg4);
        fcn.00011e68(0x13f30,*(arg1 + 0x56),arg3_00,arg4);
    }
    fcn.00011de4(0x13f80,*(*0x15ea0 + 0x40),&stack0x00000010);
    return;
}


/* fcn.00011220 @ 0x11220 */

void fcn.00011220(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    
    iVar1 = 2;
    fcn.00010584(arg1 + 9,2);
    arg1 = arg1 + 0x1b;
    uVar2 = iVar1 + 6;
    do {
        fcn.00010584(arg1 + -7,4);
        fcn.00010584(arg1,2);
        arg1 = arg1 + 0x10;
        uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return;
}


/* fcn.00010e9c @ 0x10e9c */

void fcn.00010e9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint32_t arg2_00;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    fcn.00011e68(0x14060,arg2,arg3,arg4);
    fcn.00011e68(0x12d68,*arg1,arg3,arg4);
    fcn.00011e68(0x12d88,*(arg1 + 1),arg3,arg4);
    fcn.00011e68(0x140d8,*(arg1 + 2),arg3,arg4);
    fcn.00011e68(0x12e98,*(arg1 + 3),arg3,arg4);
    fcn.00011e68(0x12ec0,*(arg1 + 4),arg3,arg4);
    fcn.00011e68(0x12ef0,*(arg1 + 5),arg3,arg4);
    fcn.00011e68(0x12f20,*(arg1 + 6),arg3,arg4);
    fcn.00011e68(0x12f50,*(arg1 + 7),arg3,arg4);
    fcn.00011e68(0x12fe8,*(arg1 + 8),arg3,arg4);
    fcn.00011e68(0x131d0,*(arg1 + 9),arg3,arg4);
    if (*0x12cec == 0x300) {
        fcn.00011e68(0x145b8,*(arg1 + 0xb),arg3,arg4);
        fcn.00011e68(0x14120,*(arg1 + 0xc),arg3,arg4);
        fcn.00011e68(0x14150,*(arg1 + 0xd),arg3,arg4);
        fcn.00011e68(0x14180,*(arg1 + 0xe),arg3,arg4);
        fcn.00011e68(0x141b0,*(arg1 + 0xf),arg3,arg4);
    }
    arg2_00 = 0;
    puVar2 = arg1 + 0x11;
    do {
        fcn.00011e68(0x142e0,arg2_00,arg3,arg4);
        fcn.00011e68(0x142f8,puVar2[-1],arg3,arg4);
        fcn.00011e68(0x14318,*puVar2,arg3,arg4);
        fcn.00011e68(0x14340,puVar2[1],arg3,arg4);
        fcn.00011e68(0x14370,puVar2[2],arg3,arg4);
        fcn.00011e68(0x14398,*(puVar2 + 3),arg3,arg4);
        fcn.00011e68(0x143c8,puVar2[7],arg3,arg4);
        fcn.00011e68(0x143f8,puVar2[8],arg3,arg4);
        fcn.00011e68(0x14428,puVar2[9],arg3,arg4);
        fcn.00011e68(0x14458,*(puVar2 + 10),arg3,arg4);
        fcn.00011e68(0x145d0,puVar2[0xc],arg3,arg4);
        fcn.00011e68(0x145f0,puVar2[0xd],arg3,arg4);
        uVar1 = puVar2[0xe];
        fcn.00011e68(0x14610,puVar2[0xe],arg3,arg4);
        uVar3 = arg2_00 + 1;
        arg2_00 = uVar3;
        puVar2 = puVar2 + 0x10;
    } while (uVar3 < 8);
    uStackX_10 = uVar1;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.00011de4(0x144f0,*(*0x15ea0 + 0x40),&uStackX_10);
    return;
}


/* fcn.00010524 @ 0x10524 */

void fcn.00010524(int64_t arg1)

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
            fcn.00010260();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000111b0 @ 0x111b0 */

void fcn.000111b0(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    
    fcn.00010584(arg1 + 9,2);
    iVar1 = 4;
    fcn.00010584(arg1 + 0x12,4);
    arg1 = arg1 + 0x21;
    uVar2 = iVar1 + 4;
    do {
        fcn.00010584(arg1 + -7,4);
        fcn.00010584(arg1,2);
        fcn.00010584(arg1 + 0xb,4);
        arg1 = arg1 + 0x1a;
        uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return;
}


/* fcn.00010c10 @ 0x10c10 */

void fcn.00010c10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint32_t arg2_00;
    
    fcn.00011e68(0x14060,arg2,arg3,arg4);
    fcn.00011e68(0x12d68,*arg1,arg3,arg4);
    fcn.00011e68(0x12d88,*(arg1 + 1),arg3,arg4);
    fcn.00011e68(0x140d8,*(arg1 + 2),arg3,arg4);
    fcn.00011e68(0x12e98,*(arg1 + 3),arg3,arg4);
    fcn.00011e68(0x12ec0,*(arg1 + 4),arg3,arg4);
    fcn.00011e68(0x12ef0,*(arg1 + 5),arg3,arg4);
    fcn.00011e68(0x12f20,*(arg1 + 6),arg3,arg4);
    fcn.00011e68(0x12f50,*(arg1 + 7),arg3,arg4);
    fcn.00011e68(0x12fe8,*(arg1 + 8),arg3,arg4);
    fcn.00011e68(0x131d0,*(arg1 + 9),arg3,arg4);
    fcn.00011e68(0x14108,*(arg1 + 0xb),arg3,arg4);
    fcn.00011e68(0x14120,*(arg1 + 0xc),arg3,arg4);
    fcn.00011e68(0x14150,*(arg1 + 0xd),arg3,arg4);
    fcn.00011e68(0x14180,*(arg1 + 0xe),arg3,arg4);
    fcn.00011e68(0x141b0,*(arg1 + 0xf),arg3,arg4);
    fcn.00011e68(0x141e0,*(arg1 + 0x10),arg3,arg4);
    fcn.00011e68(0x14240,*(arg1 + 0x11),arg3,arg4);
    fcn.00011e68(0x14280,*(arg1 + 0x12),arg3,arg4);
    arg2_00 = 0;
    puVar1 = arg1 + 0x17;
    do {
        fcn.00011e68(0x142e0,arg2_00,arg3,arg4);
        fcn.00011e68(0x142f8,puVar1[-1],arg3,arg4);
        fcn.00011e68(0x14318,*puVar1,arg3,arg4);
        fcn.00011e68(0x14340,puVar1[1],arg3,arg4);
        fcn.00011e68(0x14370,puVar1[2],arg3,arg4);
        fcn.00011e68(0x14398,*(puVar1 + 3),arg3,arg4);
        fcn.00011e68(0x143c8,puVar1[7],arg3,arg4);
        fcn.00011e68(0x143f8,puVar1[8],arg3,arg4);
        fcn.00011e68(0x14428,puVar1[9],arg3,arg4);
        fcn.00011e68(0x14458,*(puVar1 + 10),arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0xc],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0xd],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0xe],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0xf],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0x10],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0x11],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0x12],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0x13],arg3,arg4);
        fcn.00011e68(0x14108,puVar1[0x14],arg3,arg4);
        fcn.00011e68(0x14490,*(puVar1 + 0x15),arg3,arg4);
        uVar2 = arg2_00 + 1;
        arg2_00 = uVar2;
        puVar1 = puVar1 + 0x1a;
    } while (uVar2 < 8);
    fcn.00011de4(0x144f0,*(*0x15ea0 + 0x40),&stack0x00000010);
    return;
}


/* fcn.00011d5c @ 0x11d5c */

uint64_t fcn.00011d5c(uint32_t arg1)

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


/* fcn.00011d88 @ 0x11d88 */

uint64_t fcn.00011d88(uint32_t arg1)

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


/* fcn.00012bf8 @ 0x12bf8 */

void fcn.00012bf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011ecc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011e98 @ 0x11e98 */

uchar * fcn.00011e98(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


