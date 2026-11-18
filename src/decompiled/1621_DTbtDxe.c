// decompiled by r2ghidra: 1621_DTbtDxe.pe32
// functions: 31

/* entry0 @ 0x10434 */

void entry0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t arg1_00;
    
    *0x12c68 = *(arg1 + 0x60);
    *0x12c70 = *(arg1 + 0x58);
    *0x12c60 = arg1;
    fcn.00011e70();
    arg1_00 = 0x127a8;
    iVar3 = fcn.00011edc(0x127a8);
    if (iVar3 == 0) {
        uVar4 = fcn.00010380();
        fcn.00010370();
        uVar1 = in(0x1808);
        fcn.00010350(arg1_00,0x1808);
        while( true ) {
            arg1 = 0x1808;
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            arg1_00 = uVar5;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010340();
        }
        fcn.00010350(arg1_00,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010370();
        }
        else {
            fcn.00010360();
        }
    }
    fcn.00010d80(arg1_00,arg1);
    return;
}


/* fcn.00011e70 @ 0x11e70 */

int64_t fcn.00011e70(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12c80 == 0) {
        *0x12c80 = 0;
        if (*(*0x12c60 + 0x68) != 0) {
            piVar2 = *(*0x12c60 + 0x70);
            do {
                if ((*0x12740 == *piVar2) && (*0x12748 == piVar2[1])) {
                    *0x12c80 = (*(*0x12c60 + 0x70))[uVar1 * 3 + 2];
                    return *0x12c80;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12c60 + 0x68));
        }
    }
    return *0x12c80;
}


/* fcn.00011edc @ 0x11edc */

void fcn.00011edc(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011e70();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011f0a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011f0a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00010d80 @ 0x10d80 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00010d80(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    char *pcStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uchar auStack_30 [8];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uStackX_8 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    pcStackX_20 = NULL;
    iStackX_10 = arg2;
    *0x12c50 = fcn.00011edc(0x12710);
    if (*0x12c50 == 0) {
        return -0x7ffffffffffffff2;
    }
    iStackX_10 = 0xffffffff;
    (**(*0x12c68 + 0x28))(1,10,1,&iStackX_10);
    *0x12c88 = iStackX_10;
    fcn.00010280(iStackX_10,0x2e,0);
    fcn.000104d8();
    fcn.00010738();
    uStackX_8 = 0;
    (**(*0x12c68 + 0x148))(&uStackX_8,0x12730,0x12c88,0);
    (**(*0x12c68 + 0x170))(0x200,8,0x10910,0,0x12770,&uStack_40);
    uStack_38 = 0xca9;
    iVar1 = fcn.00011df0();
    if ((iVar1 == 0) || (iVar1 = fcn.000102e0(iVar1,0xca9), iVar1 == 0)) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        iVar2 = (**(*0x12c70 + 0x48))(L"Setup",0x12700,auStackX_18,&uStack_38,iVar1);
        if (-1 < iVar2) {
            if ((((*(iVar1 + 0x702) != '\0') && (*(iVar1 + 0x79c) != '\0')) && (*(iVar1 + 0x9a0) != '\0')) &&
               ((*(iVar1 + 0x52) != '\0' && (*(iVar1 + 0x3e) != '\0')))) {
                *0x12c58 = 1;
            }
            if (*(iVar1 + 0x7a0) != '\0') {
                (**(*0x12c68 + 0x170))(0x200,0x10,0x10b68,0,0x126d0,auStack_30);
            }
            iVar2 = (**(*0x12c68 + 0x140))(0x12790,0,&pcStackX_20);
            if ((-1 < iVar2) && (*pcStackX_20 == '\x01')) {
                iVar2 = (**(*0x12c68 + 0x170))(0x200,8,0x10694,0,0x12750,&uStack_48);
                if (iVar2 < 0) {
                    (**(*0x12c68 + 0x70))(uStack_48);
                }
                else {
                    iStackX_10 = 0;
                    (**(*0x12c68 + 0x148))(&iStackX_10,0x12760,0x127a0,0);
                }
            }
        }
    }
    return iVar2;
}


/* fcn.0001228c @ 0x1228c */

ulong fcn.0001228c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar3 = 0x8000000000000002;
    if (arg1 == '\x02') {
        cVar1 = fcn.00012590();
        if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar2 = 1, cVar1 != '\x02')) {
            uVar2 = 3;
        }
        if (uVar2 <= arg2) {
            return 0x8000000000000002;
        }
        uVar3 = fcn.00012424(arg2,arg3,arg4);
    }
    if (arg1 != '\x01') {
        return uVar3;
    }
    cVar1 = fcn.000124c8();
    if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
            uVar2 = 0x1c;
            goto code_r0x0001231d;
        }
        if (cVar1 != '\x05') {
            return uVar3;
        }
    }
    uVar2 = 0xc;
code_r0x0001231d:
    if (arg2 < uVar2) {
        uVar3 = fcn.00012504(arg2);
    }
    return uVar3;
}


/* fcn.00012004 @ 0x12004 */

void fcn.00012004(int64_t arg1)

{
    char cVar1;
    int iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    
    uVar8 = arg1;
    uVar4 = fcn.00011f28(arg1);
    uVar9 = 0x10000000;
    iVar10 = 0xc0000000;
    iVar7 = 0;
    iVar2 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000);
    if ((iVar2 != 0) && (iVar2 != 0xff)) {
        if (0xffffff < uVar8) {
            uVar4 = (uVar8 >> 0x18) + 2 + uVar4;
            uVar3 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) >> 4;
            if (uVar3 == 5) {
                iVar7 = 2;
            }
            else if ((uVar3 - 4 & 0xfd) == 0) {
                iVar7 = 3;
            }
            else {
                iVar7 = 1;
                fcn.00011f84(arg1 & 0xffffffff);
            }
        }
        uVar8 = uVar8 & 0xff | 0xff0000;
        iVar5 = fcn.00011f28(arg1 & 0xffffffff);
        if ((*((iVar5 + 0xbU >> 4 & uVar9 | iVar5 + 0xbU & 0xffffffff) + iVar10) == '\x06') &&
           (uVar6 = *((iVar5 + 0x18U >> 4 & uVar9 | iVar5 + 0x18U & 0xffffffff) + iVar10),
           uVar8 = (uVar6 >> 8 & 0xff) << 8 | uVar8, uVar6 >> 8 != '\0')) {
            while (iVar7 != 1) {
                uVar6 = (uVar8 & 0xff00) << 0xc;
                if (uVar8 == '\0') {
                    uVar4 = uVar6 | uVar8 >> 1 & 0xf8000;
                }
                else {
                    uVar4 = CONCAT44(uVar8,uVar6) & 0xffffffffff | uVar8 >> 1 & 0xf8000;
                }
                if (((uVar8 & 0x1f0000) == 0x1f0000) && ((uVar8 & 0xe00000) == 0xe00000)) {
                    uVar8 = uVar8 & 0xff00ffff;
                }
                else {
                    uVar6 = uVar8 >> 0x15 & 7;
                    if ((uVar6 == 7) ||
                       ((uVar6 == 0 &&
                        ((cVar1 = *((uVar4 + 0xe >> 4 & uVar9 | uVar4 + 0xe & 0xffffffff) + iVar10), cVar1 == -1 ||
                         (-1 < cVar1)))))) {
                        uVar6 = 0x1f;
                        if (iVar7 != 2) {
                            uVar6 = 0;
                        }
                        if ((uVar8 >> 0x10 & 0x1f) == uVar6) break;
                        uVar8 = (uVar8 & 0xffff0000) + 0x10000 & 0x1f0000 | uVar8 & 0xff00ffff;
                    }
                    else {
                        uVar8 = uVar8 ^ ((uVar8 & 0xffe00000) + 0x200000 ^ uVar8) & 0xe00000;
                    }
                }
                uVar4 = fcn.00011f28(uVar8);
                if (*((uVar4 >> 4 & uVar9 | uVar4 & 0xffffffff) + iVar10) != -1) {
                    uVar3 = fcn.00012358(uVar4);
                    uVar9 = 0x10000000;
                    iVar10 = 0xc0000000;
                    if (uVar3 != 0) {
                        uVar8 = uVar3 << 0x18 | uVar8 & 0xffffff;
                        fcn.00012004(uVar8);
                        uVar9 = 0x10000000;
                        iVar10 = 0xc0000000;
                    }
                }
            }
        }
        if (iVar7 != 1) {
            fcn.00011f84(arg1 & 0xffffffff);
        }
    }
    return;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(void)

{
    if (*0x12c78 == 0) {
        (**(*0x12c68 + 0x140))(0x126e0,0,0x12c78);
    }
    return *0x12c78;
}


/* fcn.0001103c @ 0x1103c */

void fcn.0001103c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000110a0(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000110a0 @ 0x110a0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000110a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000110fb;
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
code_r0x000110fb:
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
        uVar5 = fcn.00011e4c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00011e20(arg4);
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
            pcVar9 = 0x128ac;
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
code_r0x00011485:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x128ac;
                }
                else {
                    pcVar9 = 0x128b0;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00011244:
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
                            goto code_r0x000113e7;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x000113fe;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x000113e7;
                                }
                                goto code_r0x000113fe;
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
code_r0x000113e7:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00011244;
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
                                goto code_r0x00011244;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x000113fe;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x000113e7;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x000113fe:
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
                                fcn.00011dcc(&var_68h_2,0x26,0,0x12840);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00011485;
                                if (uStack_a8 == 0x53) goto code_r0x00011694;
                                if (uStack_a8 == 0x58) goto code_r0x0001178a;
                                if (uStack_a8 == 0x61) goto code_r0x0001169d;
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
                                    goto code_r0x00011229;
                                }
                                if (uStack_a8 != 100) goto code_r0x00011225;
                                goto code_r0x000117a1;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x128ac;
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
                        goto code_r0x0001199c;
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
                                    iVar13 = 0x1294b;
                                    goto code_r0x00011751;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00011751:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x0001199c;
                            }
                            fcn.00011dcc(&var_68h_2,0x26,0,0x128a4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00011694:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x0001169d:
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
                                goto code_r0x0001199c;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00011225;
                                    goto code_r0x0001178e;
                                }
                                goto code_r0x00011793;
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
                                goto code_r0x0001199c;
                            }
                            fcn.00011dcc(&var_68h_2,0x26,0,0x12888);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x0001199c;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001178a:
                    uVar5 = uVar5 | 0x20;
code_r0x0001178e:
                    uVar5 = uVar5 | 0x80;
code_r0x00011793:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x000117a1:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x000117e3;
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
code_r0x000117e3:
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
code_r0x0001186b:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001186b;
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
code_r0x00011225:
                    pcVar9 = &uStack_a8;
code_r0x00011229:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x0001199c:
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
                arg1 = fcn.0001106c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001106c(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.0001106c(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.0001106c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00011df0 @ 0x11df0 */

ulong fcn.00011df0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12c68 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 9280 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000104d8 @ 0x104d8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000104d8(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uchar auStackX_8 [8];
    uint auStackX_10 [2];
    int64_t var_20h_2;
    int64_t var_28h_2;
    int64_t var_30h_2;
    int64_t var_38h;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    var_28h_2 = 0;
    iVar1 = (**(*0x12c68 + 0x140))(0x12720,0,&var_18h);
    if (iVar1 == 0) {
        iVar1 = (**(*0x12c68 + 0x138))(2,0x126f0,0,&uStack_40,&var_30h);
        uVar2 = 0;
        if (uStack_40 != 0) {
            do {
                (**(*0x12c68 + 0x98))(*(var_30h + uVar2 * 8),0x126f0,&var_28h_2);
                _var_28h = 0;
                auStackX_10[0] = 0;
                iVar1 = (**(var_28h_2 + 0x10))(var_28h_2,0x12780,0,&var_28h,auStackX_8,&var_20h_2,auStackX_10);
                if (iVar1 == 0) break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStack_40);
        }
        (**(*0x12c68 + 0x48))(var_30h);
        if (var_28h_2 != 0) {
            iVar3 = 0;
            uStack_48 = 0;
            if (iVar1 == 0) {
                do {
                    iVar1 = (**(var_28h_2 + 0x18))(var_28h_2,0x12780,0x19,iVar3,&uStack_48,&var_28h,auStackX_10);
                    if (-1 < iVar1) {
                        if (*(uStack_48 + 0x10) == 0x7464735374625444) {
                            for (uVar2 = uStack_48; uVar2 <= *(uStack_48 + 4) + uStack_48; uVar2 = uVar2 + 1) {
                                if (*(uVar2 + 3) == 0x564e5444) {
                                    *(uVar2 + 9) = *0x12c88;
                                    *(uVar2 + 0xe) = 0x2e;
                                    var_20h = 0;
                                    (**var_18h)(var_18h,uStack_48,*(uStack_48 + 4),&var_20h);
                                    return 0;
                                }
                            }
                        }
                        iVar3 = iVar3 + 1;
                        uStack_48 = 0;
                    }
                } while (iVar1 == 0);
            }
            return iVar1;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00010738 @ 0x10738 */

void fcn.00010738(void)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t aiStackX_8 [4];
    
    (**(*0x12c68 + 0x140))(0x12790,0,aiStackX_8);
    iVar2 = *0x12c50;
    *(*0x12c88 + 2) = 0;
    if ((*(iVar2 + 0x20) == '\x01') || (*(iVar2 + 0x40) == '\x01')) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    *(*0x12c88 + 4) = uVar1;
    *(*0x12c88 + 5) = *(aiStackX_8[0] + 4) & 1;
    *(*0x12c88 + 3) = *(aiStackX_8[0] + 4) >> 1 & 1;
    *(*0x12c88 + 0x23) = *(aiStackX_8[0] + 4) >> 2 & 1;
    *(*0x12c88 + 0x2d) = *(aiStackX_8[0] + 8) >> 0x11 & 1;
    *(*0x12c88 + 0x24) = *(aiStackX_8[0] + 4) >> 3;
    *(*0x12c88 + 0x26) = *(aiStackX_8[0] + 4) >> 0x13 & 1;
    *(*0x12c88 + 0x27) = *(aiStackX_8[0] + 8);
    *(*0x12c88 + 0x29) = *(aiStackX_8[0] + 10) & 1;
    *(*0x12c88 + 0x10) = *(iVar2 + 0x22);
    *(*0x12c88 + 0x11) = *(iVar2 + 0x21);
    *(*0x12c88 + 0x14) = *(iVar2 + 0x20);
    *(*0x12c88 + 6) = *(iVar2 + 0x23);
    *(*0x12c88 + 10) = *(iVar2 + 0x2f);
    *(*0x12c88 + 0xe) = *(iVar2 + 0x33);
    *(*0x12c88 + 0x12) = *(iVar2 + 0x42);
    *(*0x12c88 + 0x13) = *(iVar2 + 0x41);
    *(*0x12c88 + 0x15) = *(iVar2 + 0x40);
    *(*0x12c88 + 0x16) = *(iVar2 + 0x43);
    *(*0x12c88 + 0x1a) = *(iVar2 + 0x4f);
    *(*0x12c88 + 0x1e) = *(iVar2 + 0x53);
    *(*0x12c88 + 0x1f) = *(iVar2 + 0x1b);
    *(*0x12c88 + 0x2b) = 0;
    iVar2 = fcn.00011000();
    uVar1 = (**(iVar2 + 8))(0x31);
    *(*0x12c88 + 0x2c) = uVar1;
    return;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2)

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


/* fcn.00011e20 @ 0x11e20 */

uint64_t fcn.00011e20(uint32_t arg1)

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


/* fcn.00011e4c @ 0x11e4c */

uint64_t fcn.00011e4c(uint32_t arg1)

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


/* fcn.00011dcc @ 0x11dcc */

void fcn.00011dcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000110a0(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001106c @ 0x1106c */

uchar * fcn.0001106c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011f28 @ 0x11f28 */

uint64_t fcn.00011f28(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar1 = arg1;
    uVar2 = arg1 >> 8 & 0xe000;
    if (arg1 == '\0') {
        uVar3 = (uVar2 | uVar1 & 0x1f0000) >> 1 | (uVar1 & 0xff00) << 0xc;
    }
    else {
        uVar3 = (uVar2 | uVar1 & 0x1f0000) >> 1 | (uVar1 & 0xff00) << 0xc | (arg1 & 0xffU) << 0x20;
    }
    return uVar3;
}


/* fcn.00011f84 @ 0x11f84 */

void fcn.00011f84(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = arg1;
    uVar1 = (arg1 >> 8 & 0xe000 | uVar3 & 0x1f0000) >> 1;
    if (arg1 == '\0') {
        uVar2 = (uVar3 & 0xff00) << 0xc;
    }
    else {
        uVar1 = uVar1 | (uVar3 & 0xff00) << 0xc;
        uVar2 = (arg1 & 0xffU) << 0x20;
    }
    uVar2 = uVar2 >> 4 & 0x10000000 | uVar1 | uVar2 & 0xffffffff | 4;
    if ((*(uVar2 + 0xc0000000) & 4) != 0) {
        *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfffb;
    }
    return;
}


/* fcn.00012358 @ 0x12358 */

uint64_t fcn.00012358(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    
    uVar2 = arg1 + 6U & 0xffffffff;
    uVar3 = *((arg1 + 6U >> 4 & 0x10000000 | uVar2) + 0xc0000000);
    uVar2 = CONCAT71(uVar2 >> 8,uVar3);
    if ((uVar3 & 0x10) != 0) {
        uVar5 = 0;
        uVar1 = 0x14;
        if ((*((arg1 + 0xeU >> 4 & 0x10000000 | arg1 + 0xeU & 0xffffffff) + 0xc0000000) & 0x7f) != 2) {
            uVar1 = 0x34;
        }
        uVar2 = uVar1 + arg1 & 0xffffffff;
        uVar3 = *((uVar1 + arg1 >> 4 & 0x10000000 | uVar2) + 0xc0000000) & 0xfc;
        uVar4 = uVar3;
        while ((uVar3 != 0 && (uVar5 != -1))) {
            uVar2 = uVar4 + arg1 & 0xffffffff;
            uVar5 = *((uVar4 + arg1 >> 4 & 0x10000000 | uVar2) + 0xc0000000);
            if (uVar5 == '\x10') {
                uVar3 = 0;
                if (0x3f < uVar4) {
                    uVar3 = uVar4;
                }
                return CONCAT71(uVar2 >> 8,uVar3);
            }
            uVar4 = uVar5 >> 8;
            uVar3 = uVar5 >> 8;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00012590 @ 0x12590 */

ulong fcn.00012590(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.000103c0(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x000126ab;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x000126ab;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x000125ef;
                    }
                }
code_r0x000125ed:
                uVar3 = 2;
                goto code_r0x000125ef;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x000125ed;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x000125ef;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x000125ef;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x000125ef;
            goto code_r0x000125ed;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x000125ef;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x000125ef;
        }
    }
code_r0x000126ab:
    uVar3 = 0;
code_r0x000125ef:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.00012424 @ 0x12424 */

ulong fcn.00012424(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00012590();
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar2 = 1, cVar1 != '\x02')) {
        uVar2 = 3;
    }
    if (uVar2 < arg1) {
        return 0x8000000000000002;
    }
    if (arg1 != 0) {
        if (arg1 == 1) {
            *arg2 = 1;
            *arg3 = 0;
            return 0;
        }
        if (arg1 == 2) {
            cVar1 = fcn.00012590();
            if (cVar1 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x000124a9;
        }
    }
    *arg3 = 0;
code_r0x000124a9:
    *arg2 = 6;
    return 0;
}


/* fcn.000124c8 @ 0x124c8 */

void fcn.000124c8(void)

{
    if (*0x127b8 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x127b8 = '\x05';
        }
        else {
            *0x127b8 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00012504 @ 0x12504 */

ulong fcn.00012504(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t *in_RDX;
    uint64_t *in_R8;
    
    cVar2 = fcn.000124c8();
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            uVar3 = 0x1c;
            goto code_r0x0001252b;
        }
        if (cVar2 != '\x05') {
            return 0x8000000000000002;
        }
    }
    uVar3 = 0xc;
code_r0x0001252b:
    if (uVar3 <= arg1) {
        return 0x8000000000000002;
    }
    iVar1 = (arg1 >> 2) * 3;
    cVar2 = *(iVar1 + 0x127c2);
    *in_RDX = *(iVar1 + 0x127c0);
    *in_R8 = *((*(iVar1 + 0x127c1) | 0xfd00) << 0x10) >> ((arg1 - cVar2) * '\x04' & 0x3fU) & 7;
    return 0;
}


/* fcn.000103c0 @ 0x103c0 */

uint64_t fcn.000103c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


