// decompiled by r2ghidra: 1057_Usb_Lan_Ax88179.pe32
// functions: 33

/* entry0 @ 0x102cc */

//WARNING: Removing unreachable block (ram,0x0001043a)

int64_t entry0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg2_00;
    bool bVar3;
    int64_t aiStack_30 [2];
    
    iVar2 = arg1;
    *0x15e40 = arg1;
    cVar1 = fcn.00010240();
    bVar3 = cVar1 != '\0';
    if ((iVar2 == 0) && (bVar3)) {
        fcn.0001024a(0x14f04,0x33,0x14ee7);
    }
    *0x15e58 = arg2;
    if ((arg2 == 0) && (bVar3)) {
        fcn.0001024a(0x14f04,0x39,0x14f5b);
    }
    *0x15e50 = *(arg2 + 0x60);
    if ((*0x15e50 == 0) && (bVar3)) {
        fcn.0001024a(0x14f04,0x3f,0x14f6f);
    }
    *0x15e48 = *(arg2 + 0x58);
    if ((*0x15e48 == 0) && (bVar3)) {
        fcn.0001024a(0x14f97,0x2f,0x14f83);
    }
    iVar2 = (**(*0x15e50 + 0x98))(*0x15e40,0x15bc0,aiStack_30);
    if (-1 < iVar2) {
        *(aiStack_30[0] + 0x58) = 0x145c4;
    }
    *0x15e20 = arg1;
    *0x15e28 = arg1;
    if (*0x15abb == 0) {
        arg2_00 = 0x15de0;
        iVar2 = (**(*0x15e50 + 0x148))(0x15e28,0x15df0,0x15e00,0x15de0,0x15dc0,0x15db0,0x15d90,0);
    }
    else if (*0x15abb == 0) {
        arg2_00 = 0x15db0;
        iVar2 = (**(*0x15e50 + 0x148))(0x15e28,0x15df0,0x15e00,0x15db0,0x15d90,0);
    }
    else {
        arg2_00 = 0;
        iVar2 = (**(*0x15e50 + 0x148))(0x15e28,0x15df0,0x15e00);
    }
    if ((cVar1 != '\0') && (iVar2 < 0)) {
        if ((*0x15abb & 2) != 0) {
            fcn.00013475(0x80000000,0x14ff4,iVar2,arg2_00);
        }
        fcn.0001024a(0x15029,0x11f,0x15015);
    }
    return iVar2;
}


/* fcn.0001344c @ 0x1344c */

void fcn.0001344c(int64_t arg1)

{
    int64_t in_RCX;
    int64_t iStackX_20;
    
    iStackX_20 = arg1;
    fcn.00010966(in_RCX,0x200,0x14ecf,&iStackX_20);
    return;
}


/* fcn.00010966 @ 0x10966 */

void fcn.00010966(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    
    cVar1 = fcn.00010240();
    if ((cVar1 != '\0') && ((arg1 & 1U) != 0)) {
        fcn.0001024a(0x152ac,0xf0,0x15284);
    }
    fcn.000123e1(arg3,0x40,arg4);
    return;
}


/* fcn.00010240 @ 0x10240 */

uint8_t fcn.00010240(void)

{
    //[00] -r-x section size 22912 named .text
    return *0x15abb & 1;
}


/* fcn.0001024a @ 0x1024a */

void fcn.0001024a(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    uchar auStack_208 [512];
    
    fcn.0001344c(0x14ec7);
    if ((*0x15e58 != 0) && (iVar1 = *(*0x15e58 + 0x50), iVar1 != 0)) {
        (**(iVar1 + 8))(iVar1,auStack_208);
    }
    if ((*0x15abb & 0x10) != 0) {
        pcVar2 = swi(3);
        (*pcVar2)();
        return;
    }
    if ((*0x15abb & 0x20) != 0) {
        do {
        } while( true );
    }
    return;
}


/* fcn.000123e1 @ 0x123e1 */

uint64_t fcn.000123e1(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t unaff_RSI;
    uint64_t uVar9;
    uint64_t unaff_RDI;
    int64_t iVar10;
    uint8_t uVar11;
    uint64_t uVar12;
    bool bVar13;
    ulong *puVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t *puVar17;
    bool bVar18;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    uint32_t uStack_e4;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    int64_t iStack_a8;
    uint64_t uStack_70;
    uint64_t uStack_68;
    ulong uStack_5e;
    
    if (unaff_RSI == 0) {
        if ((arg2 & 0x2000U) != 0) goto code_r0x00012454;
    }
    else {
        uVar15 = arg2 & 0x2000;
        if ((arg2 & 0x2000U) == 0) {
            cVar2 = fcn.00010240();
            if (cVar2 == '\0') {
                if (unaff_RDI == 0) {
                    return 0;
                }
            }
            else if (unaff_RDI == 0) {
                iVar10 = 0x15583;
                iVar6 = 0x242;
                goto code_r0x0001251d;
            }
        }
code_r0x00012454:
        cVar2 = fcn.00010240();
        if (cVar2 == '\0') {
            if (arg1 == 0) {
                return 0;
            }
        }
        else if (arg1 == 0) {
            iVar10 = 0x155df;
            iVar6 = 0x24a;
            goto code_r0x000124c0;
        }
    }
    uVar15 = arg2 & 0x40;
    if ((arg2 & 0x40U) == 0) {
        cVar2 = fcn.00010240();
        if (cVar2 == '\0') {
            if (1000000 < unaff_RSI) {
                return 0;
            }
            uStack_e4 = 1;
        }
        else {
            uStack_e4 = 1;
            if (1000000 < unaff_RSI) {
                iVar10 = 0x1563b;
                iVar6 = 600;
code_r0x0001251d:
                fcn.0001024a(0x1559c,iVar6,iVar10);
                return uVar15;
            }
        }
    }
    else {
        cVar2 = fcn.00010240();
        if (cVar2 == '\0') {
            if (1000000 < unaff_RSI) {
                return 0;
            }
            uStack_e4 = 2;
        }
        else {
            uStack_e4 = 2;
            if (1000000 < unaff_RSI) {
                iVar10 = 0x155f8;
                iVar6 = 0x253;
code_r0x000124c0:
                fcn.0001024a(0x1559c,iVar6,iVar10);
                return 0;
            }
        }
    }
    if ((arg2 & 0x100U) == 0) {
        cVar2 = fcn.00010240();
        if ((cVar2 != '\0') && (uVar3 = fcn.00010dfc(arg1,0xf4241), 1000000 < uVar3)) {
            fcn.0001024a(0x1559c,0x269,0x15708);
        }
        uVar3 = fcn.00010dfc(arg1,0xf4241);
        if (1000000 < uVar3) {
            return 0;
        }
        uStack_c8 = 0xff;
        iStack_f8 = 1;
    }
    else {
        cVar2 = fcn.00010240();
        if ((cVar2 != '\0') && (uVar3 = fcn.00010e22(arg1,0xf4241), 1000000 < uVar3)) {
            fcn.0001024a(0x1559c,0x263,0x1567c);
        }
        uVar3 = fcn.00010e22(arg1,0xf4241);
        if (1000000 < uVar3) {
            return 0;
        }
        uStack_c8 = 0xffff;
        iStack_f8 = 2;
    }
    if ((arg2 & 0x2000U) == 0) {
        if (unaff_RSI == 0) {
            return 0;
        }
    }
    else if (unaff_RSI == 0) {
        uStack_e0 = 0;
        unaff_RDI = 0;
        goto code_r0x000126a2;
    }
    uStack_e0 = 0;
    if (unaff_RDI != 0) {
        uStack_e0 = (unaff_RSI - 1) * uStack_e4 + unaff_RDI;
    }
code_r0x000126a2:
    uVar15 = 0;
    if (iStack_f8 != 1) {
        uVar15 = *(arg1 + 1) << 8;
    }
    uVar15 = uVar15 | *arg1;
    uStack_f0 = 0;
    uVar3 = unaff_RDI;
    do {
        uStack_70 = uVar15 & uStack_c8;
        if ((uStack_70 == 0) || ((uVar3 != 0 && (uStack_e0 <= uVar3)))) {
            if ((arg2 & 0x2000U) == 0) {
                cVar2 = fcn.00010240();
                if ((cVar2 != '\0') && (uVar3 == 0)) {
                    fcn.0001024a(0x1559c,0x4c0,0x1547d);
                }
                fcn.00010a4e(0,1,uStack_e4);
                uStack_f0 = (uVar3 - unaff_RDI) / uStack_e4;
            }
            else {
                uStack_f0 = uStack_f0 / uStack_e4;
            }
            return uStack_f0;
        }
        uVar15 = arg2 & 0x2140;
        uVar8 = uVar15;
        if (uStack_70 == 0xd) {
            arg1 = arg1 + iStack_f8;
            uVar15 = 0;
            if (iStack_f8 != 1) {
                uVar15 = *(arg1 + 1) << 8;
            }
            uStack_70 = (uVar15 | *arg1) & uStack_c8;
            if (uStack_70 == 10) {
code_r0x00012ec6:
                puVar17 = 0x1557e;
            }
            else {
                arg1 = arg1 + -iStack_f8;
                puVar17 = 0x15581;
            }
code_r0x00012ee2:
            uStack_100 = 0;
            uVar16 = 0;
            bVar18 = false;
            bVar13 = false;
            uVar11 = 0;
            uStack_d0 = 0;
            arg2 = uVar8;
            uVar9 = 1;
        }
        else {
            if (uStack_70 != 0x25) {
                if (uStack_70 == 10) {
                    arg1 = arg1 + iStack_f8;
                    uVar15 = 0;
                    if (iStack_f8 != 1) {
                        uVar15 = *(arg1 + 1) << 8;
                    }
                    uStack_70 = (uVar15 | *arg1) & uStack_c8;
                    if (uStack_70 != 0xd) {
                        arg1 = arg1 + -iStack_f8;
                    }
                    goto code_r0x00012ec6;
                }
                uVar8 = uVar15 | 0x400;
                puVar17 = &uStack_70;
                goto code_r0x00012ee2;
            }
            uStack_100 = 0;
            uStack_d0 = 0;
            uVar9 = 1;
            puVar7 = arg3;
code_r0x00012742:
            while( true ) {
                while( true ) {
                    while( true ) {
                        while( true ) {
                            arg1 = arg1 + iStack_f8;
                            uVar15 = 0;
                            if (iStack_f8 != 1) {
                                uVar15 = *(arg1 + 1) << 8;
                            }
                            uStack_70 = (uVar15 | *arg1) & uStack_c8;
                            if (uStack_70 != 0x2d) break;
                            uVar8 = uVar8 | 1;
                        }
                        uVar1 = uVar8;
                        arg3 = puVar7;
                        if (0x2d < uStack_70) break;
                        if (uStack_70 == 0x2a) {
                            if ((uVar8 & 0x800) == 0) {
                                uVar8 = uVar8 | 0x200;
                                uStack_d0 = *puVar7;
                            }
                            else {
                                uVar9 = *puVar7;
                            }
                            puVar7 = puVar7 + 1;
                        }
                        else if (uStack_70 < 0x2b) {
                            if (uStack_70 == 0) {
                                uStack_70 = 0;
                                arg1 = arg1 + -iStack_f8;
                                uVar9 = 0;
                                goto code_r0x00012d9b;
                            }
                            if (uStack_70 != 0x20) goto code_r0x000127e4;
                            uVar8 = uVar8 | 4;
                        }
                        else if (uStack_70 == 0x2b) {
                            uVar8 = uVar8 | 2;
                        }
                        else {
                            if (uStack_70 != 0x2c) goto code_r0x000127e4;
                            uVar8 = uVar8 | 8;
                        }
                    }
                    if (uStack_70 < 0x3a) break;
                    if ((uStack_70 != 0x4c) && (uStack_70 != 0x6c)) goto code_r0x000127e4;
                    uVar8 = uVar8 | 0x10;
                }
                if (uStack_70 < 0x31) break;
code_r0x000128f2:
                uStack_100 = 0;
                while (uStack_70 - 0x30 < 10) {
                    arg1 = arg1 + iStack_f8;
                    uStack_100 = (uStack_70 - 0x30) + uStack_100 * 10;
                    uVar15 = 0;
                    if (iStack_f8 != 1) {
                        uVar15 = *(arg1 + 1) << 8;
                    }
                    uStack_70 = (uVar15 | *arg1) & uStack_c8;
                }
                arg1 = arg1 + -iStack_f8;
                if ((uVar8 & 0x800) == 0) {
                    uStack_d0 = uStack_100;
                    uVar8 = uVar8 | 0x200;
                }
                else {
                    uVar9 = uStack_100;
                }
            }
            if (uStack_70 == 0x2e) {
                uVar8 = uVar8 | 0x800;
                goto code_r0x00012742;
            }
            if (uStack_70 == 0x30) {
                if ((uVar8 & 0x800) == 0) {
                    uVar8 = uVar8 | 0x20;
                }
                goto code_r0x000128f2;
            }
code_r0x000127e4:
            if (uStack_70 == 100) {
code_r0x00012995:
                arg3 = puVar7 + 1;
                if ((uVar8 & 0x10) == 0) {
                    uVar16 = *puVar7;
                }
                else {
                    uVar16 = *puVar7;
                }
                uVar11 = ~-((uVar8 & 4) == 0) & 0x20;
                if ((uVar8 & 2) != 0) {
                    uVar11 = 0x2b;
                }
                bVar18 = (uVar8 & 8) != 0;
                if ((uVar8 & 0x80) == 0) {
                    if ((uVar8 & 8) != 0) {
                        uVar8 = uVar8 & 0xffffffffffffffdf;
                        uVar9 = 1;
                    }
                    if ((uVar16 < 0) && ((uVar8 & 0x4000) == 0)) {
                        uVar12 = 10;
                        uVar11 = 0x2d;
                        uVar16 = -uVar16;
                    }
                    else {
                        uVar12 = 10;
                        if ((uVar8 & 0x4010) == 0x4000) {
                            uVar16 = uVar16 & 0xffffffff;
                        }
                    }
                }
                else {
                    if (((uVar8 & 0x10) == 0) && (uVar16 < 0)) {
                        uVar16 = uVar16 & 0xffffffff;
                    }
                    uVar12 = 0x10;
                    bVar18 = false;
                }
                puVar14 = &uStack_5e;
                uStack_5e._0_1_ = 0;
                uVar4 = uVar16;
                do {
                    puVar14 = puVar14 + 1;
                    uVar5 = uVar4 / uVar12;
                    *puVar14 = *(uVar4 % uVar12 + 0x15aa0);
                    uVar4 = uVar5;
                } while (uVar5 != 0);
                if ((uVar16 != 0) || (uStack_100 = 0, uVar9 != 0)) {
                    uStack_100 = puVar14 - &uStack_5e;
                }
                puVar17 = &uStack_5e + uStack_100;
                uVar16 = 3 - uStack_100 % 3;
                if (uStack_100 % 3 == 0) {
                    uVar16 = 0;
                }
                if ((uStack_100 != 0) && (bVar18)) {
                    uStack_100 = uStack_100 + (uStack_100 - 1) / 3;
                }
                if (uVar11 != 0) {
                    uStack_100 = uStack_100 + 1;
                    uVar9 = uVar9 + 1;
                }
                bVar13 = true;
                arg2 = uVar8 | 0x1000;
                if ((uVar8 & 0x20) != 0) {
                    if ((uVar8 & 1) == 0) {
                        if (((uVar8 & 0x200) != 0) && ((uVar8 & 0x800) == 0)) {
                            uVar9 = uStack_d0;
                        }
                    }
                }
            }
            else {
                arg2 = uVar8;
                if (100 < uStack_70) {
                    if (uStack_70 == 0x73) goto code_r0x00012b05;
                    uVar15 = &uStack_5e;
                    if (uStack_70 < 0x74) {
                        if (uStack_70 != 0x70) {
                            if (uStack_70 != 0x72) {
                                if (uStack_70 != 0x67) goto code_r0x00012d9b;
                                arg3 = puVar7 + 1;
                                uVar8 = *puVar7;
                                if (uVar8 == 0) {
                                    uVar16 = 0;
                                    bVar18 = false;
                                    bVar13 = false;
                                    uVar11 = 0;
                                    puVar17 = 0x15566;
                                }
                                else {
                                    fcn.00010ab7(uVar8 + 4);
                                    fcn.00010ab7(uVar8 + 6);
                                    uVar16 = 0;
                                    fcn.00014e0f(uVar15,0x26,0,0x1578b);
                                    bVar18 = false;
                                    bVar13 = false;
                                    uVar11 = 0;
                                    puVar17 = &uStack_5e;
                                }
                                goto code_r0x00012ef0;
                            }
                            uVar8 = *puVar7;
                            arg3 = puVar7 + 1;
                            if (uVar8 < 0) {
                                if ((uVar8 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    puVar17 = *(uVar8 * 8 + 0x15c08);
                                    goto code_r0x00012cb5;
                                }
                            }
                            else if (uVar8 < 6) {
                                puVar17 = *(uVar8 * 8 + 0x15be0);
code_r0x00012cb5:
                                if (puVar17 != &uStack_5e) {
                                    bVar18 = false;
                                    uVar16 = 0;
                                    bVar13 = false;
                                    uVar11 = 0;
                                    goto code_r0x00012ef0;
                                }
                            }
                            fcn.00014e0f(uVar15,0x26,0,0x157d6);
                            goto code_r0x00012ce8;
                        }
                        uVar8 = uVar8 & 0xffffffffffffffc9 | 0x10;
code_r0x0001297a:
                        uVar8 = uVar8 | 0x20;
code_r0x0001297e:
                        uVar8 = uVar8 | 0x80;
                    }
                    else if (uStack_70 != 0x75) {
                        if (0x74 < uStack_70) {
                            if (uStack_70 != 0x78) goto code_r0x00012d9b;
                            goto code_r0x0001297e;
                        }
                        arg3 = puVar7 + 1;
                        if (*puVar7 == 0) {
                            bVar18 = false;
                            uVar16 = 0;
                            bVar13 = false;
                            uVar11 = 0;
                            puVar17 = 0x15572;
                            goto code_r0x00012ef0;
                        }
                        fcn.00014e0f(uVar15,0x26,0,0x157bc);
code_r0x00012ce8:
                        arg3 = puVar7 + 1;
                        bVar18 = false;
                        uVar16 = 0;
                        bVar13 = false;
                        uVar11 = 0;
                        puVar17 = &uStack_5e;
                        goto code_r0x00012ef0;
                    }
                    if ((uVar8 & 0x80) == 0) {
                        uVar8 = uVar8 & 0xfffd | 0x4000;
                    }
                    goto code_r0x00012995;
                }
                if (uStack_70 == 0x53) {
code_r0x00012b05:
                    arg2 = uVar1 | 0x400;
code_r0x00012b08:
                    puVar17 = *puVar7;
                    arg3 = puVar7 + 1;
                    if (puVar17 == NULL) {
                        puVar17 = 0x15558;
                        arg2 = arg2 & 0xfbff;
                    }
                    uVar16 = 0;
                    bVar18 = false;
                    bVar13 = false;
                    uVar11 = 0;
                    if ((arg2 & 0x800U) == 0) {
                        uVar9 = 0;
                    }
                }
                else if (uStack_70 < 0x54) {
                    if (uStack_70 == 10) {
                        arg1 = arg1 + iStack_f8;
                        uVar15 = 0;
                        if (iStack_f8 != 1) {
                            uVar15 = *(arg1 + 1) << 8;
                        }
                        uStack_70 = (uVar15 | *arg1) & uStack_c8;
                        if (uStack_70 != 0xd) {
                            arg1 = arg1 + -iStack_f8;
                        }
                    }
                    else {
                        if (uStack_70 != 0xd) goto code_r0x00012d9b;
                        arg1 = arg1 + iStack_f8;
                        uVar15 = 0;
                        if (iStack_f8 != 1) {
                            uVar15 = *(arg1 + 1) << 8;
                        }
                        uStack_70 = (uVar15 | *arg1) & uStack_c8;
                        if (uStack_70 != 10) {
                            arg1 = arg1 + -iStack_f8;
                            uVar16 = 0;
                            bVar18 = false;
                            bVar13 = false;
                            uVar11 = 0;
                            puVar17 = 0x15581;
                            goto code_r0x00012ef0;
                        }
                    }
                    uVar16 = 0;
                    bVar18 = false;
                    bVar13 = false;
                    uVar11 = 0;
                    puVar17 = 0x1557e;
                }
                else {
                    if (uStack_70 == 0x61) goto code_r0x00012b08;
                    if (uStack_70 == 99) {
                        arg3 = puVar7 + 1;
                        uVar16 = 0;
                        bVar18 = false;
                        bVar13 = false;
                        uVar11 = 0;
                        uStack_68 = *puVar7;
                        arg2 = uVar1 | 0x400;
                        puVar17 = &uStack_68;
                    }
                    else {
                        if (uStack_70 == 0x58) goto code_r0x0001297a;
code_r0x00012d9b:
                        uVar16 = 0;
                        bVar18 = false;
                        bVar13 = false;
                        uVar11 = 0;
                        arg2 = uVar1 | 0x400;
                        puVar17 = &uStack_70;
                    }
                }
            }
        }
code_r0x00012ef0:
        uVar12 = -((arg2 & 0x400U) == 0);
        uVar8 = (uVar12 & 0xffffffffffff0100) + 0xffff;
        iStack_a8 = uVar12 + 2;
        if ((arg2 & 0x1000U) == 0) {
            uStack_100 = 0;
            puVar7 = puVar17;
            while (((uStack_100 < uVar9 || ((arg2 & 0x800U) == 0)) && ((uVar8 & *puVar7) != 0))) {
                uStack_100 = uStack_100 + 1;
                puVar7 = puVar7 + iStack_a8;
            }
        }
        else {
            iStack_a8 = -iStack_a8;
        }
        if (uVar9 < uStack_100) {
            uVar9 = uStack_100;
        }
        uVar15 = arg2 & 0x201;
        if (uVar15 == 0x200) {
            uVar12 = uStack_e4;
            uStack_f0 = uStack_f0 + uVar12 * (uStack_d0 - uVar9);
            if ((arg2 & 0x2000U) == 0) {
                if (uVar3 == 0) {
                    if (!bVar13) {
                        uStack_f0 = uStack_f0 + (uVar9 - uStack_100) * uVar12;
                        goto code_r0x00013400;
                    }
                    goto code_r0x0001303c;
                }
                uVar3 = fcn.00010a4e(0x20,uStack_d0 - uVar9,uStack_e4);
                if (!bVar13) {
                    iVar6 = uVar9 - uStack_100;
                    uStack_f0 = uStack_f0 + uVar12 * iVar6;
                    goto code_r0x0001310a;
                }
                if (uVar11 != 0) {
                    uStack_f0 = uStack_f0 + uVar12;
                    goto code_r0x0001304f;
                }
            }
            else {
                if (!bVar13) {
                    uStack_f0 = uStack_f0 + (uVar9 - uStack_100) * uVar12;
                    goto code_r0x000133c0;
                }
code_r0x0001303c:
                if ((uVar11 != 0) && (uStack_f0 = uStack_f0 + uStack_e4, (arg2 & 0x2000U) == 0)) {
code_r0x0001304f:
                    if (uVar3 != 0) {
                        uVar3 = fcn.00010a4e(uVar11,1,uStack_e4);
                    }
                }
            }
            uStack_f0 = uStack_f0 + uStack_e4 * (uVar9 - uStack_100);
            if (((arg2 & 0x2000U) == 0) && (uVar3 != 0)) {
                uVar3 = fcn.00010a4e(0x30,uVar9 - uStack_100,uStack_e4);
            }
            uVar12 = uVar11 != 0;
        }
        else {
            if (bVar13) goto code_r0x0001303c;
            iVar6 = uVar9 - uStack_100;
            uStack_f0 = uStack_f0 + uStack_e4 * iVar6;
            if ((arg2 & 0x2000U) == 0) {
code_r0x0001310a:
                uStack_d8 = uStack_e4;
                if (uVar3 == 0) {
code_r0x00013400:
                    uStack_d8 = uStack_e4;
                    if (uVar11 == 0) {
                        uVar12 = 0;
                        uVar3 = 0;
                        goto code_r0x00013173;
                    }
                    uVar3 = 0;
                    uStack_f0 = uStack_f0 + uStack_d8;
                }
                else {
                    uVar3 = fcn.00010a4e(0x20,iVar6,uStack_e4);
                    if (uVar11 == 0) goto code_r0x000133da;
                    uStack_f0 = uStack_f0 + uStack_d8;
                    if (uVar3 != 0) {
                        uVar3 = fcn.00010a4e(uVar11,1,uStack_e4);
                    }
                }
code_r0x000133cf:
                uVar12 = 1;
            }
            else {
code_r0x000133c0:
                uStack_d8 = uStack_e4;
                if (uVar11 != 0) {
                    uStack_f0 = uStack_f0 + uStack_d8;
                    goto code_r0x000133cf;
                }
code_r0x000133da:
                uVar12 = 0;
            }
        }
code_r0x00013173:
        while (uVar12 < uStack_100) {
            uStack_f0 = uStack_f0 + uStack_e4;
            if (((arg2 & 0x2000U) == 0) && (uVar3 != 0)) {
                uVar3 = fcn.00010a4e(*puVar17 & uVar8,1,uStack_e4);
            }
            puVar17 = puVar17 + iStack_a8;
            uVar4 = uVar12 + 1;
            if ((bVar18) && (uVar16 = uVar16 + 1, uVar16 == 3)) {
                uVar4 = uVar12 + 2;
                uVar16 = 0;
                if (uVar4 < uStack_100) {
                    uStack_f0 = uStack_f0 + uStack_e4;
                    if ((arg2 & 0x2000U) == 0) {
                        uVar16 = uVar3;
                        if (uVar3 != 0) {
                            uVar3 = fcn.00010a4e(0x2c,1,uStack_e4);
                            uVar16 = 0;
                        }
                    }
                }
            }
            uVar12 = uVar4;
        }
        if (uVar15 == 0x201) {
            uStack_f0 = uStack_f0 + uStack_e4 * (uStack_d0 - uVar9);
            if (((arg2 & 0x2000U) == 0) && (uVar3 != 0)) {
                uVar3 = fcn.00010a4e(0x20,uStack_d0 - uVar9,uStack_e4);
            }
        }
        arg1 = arg1 + iStack_f8;
        uVar15 = 0;
        if (iStack_f8 != 1) {
            uVar15 = *(arg1 + 1) << 8;
        }
        uVar15 = uVar15 | *arg1;
    } while( true );
}


/* fcn.00013475 @ 0x13475 */

void fcn.00013475(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uchar auStack_208 [512];
    
    iStackX_18 = arg1;
    iStackX_20 = arg2;
    fcn.00010966(auStack_208,0x100,0x14ff4,&iStackX_18);
    if ((*0x15e58 != 0) && (iVar1 = *(*0x15e58 + 0x50), iVar1 != 0)) {
        (**(iVar1 + 8))(iVar1,auStack_208);
    }
    return;
}


/* fcn.00010ab7 @ 0x10ab7 */

ushort fcn.00010ab7(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    
    iVar2 = arg1;
    cVar1 = fcn.00010240();
    if ((iVar2 == 0) && (cVar1 != '\0')) {
        fcn.0001024a(0x152e7,0x26,0x1547d);
    }
    return *arg1;
}


/* fcn.00010aee @ 0x10aee */

ushort fcn.00010aee(int64_t arg1)

{
    char cVar1;
    ushort uVar2;
    int64_t iVar3;
    
    iVar3 = arg1;
    cVar1 = fcn.00010240();
    if ((iVar3 == 0) && (cVar1 != '\0')) {
        fcn.0001024a(0x1507b,0xad,0x15066);
    }
    uVar2 = fcn.00010ab7(arg1 + 2);
    return uVar2;
}


/* fcn.0001359b @ 0x1359b */

bool fcn.0001359b(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    cVar2 = fcn.00010240();
    if ((arg1 == 0) && (cVar2 != '\0')) {
        fcn.0001024a(0x1507b,0x3e,0x15854);
    }
    uVar4 = 0;
    while( true ) {
        cVar2 = fcn.0001051e(arg1);
        if (cVar2 != '\0') {
            iVar1 = fcn.00010aee(arg1);
            return iVar1 == 4;
        }
        uVar3 = fcn.00010aee(arg1);
        if (uVar3 < 4) {
            return false;
        }
        if (~uVar4 < uVar3) {
            return false;
        }
        uVar4 = uVar4 + uVar3;
        if (0xfffffffffffffffb < uVar4) break;
        arg1 = fcn.00010b2e(arg1);
    }
    return false;
}


/* fcn.0001051e @ 0x1051e */

bool fcn.0001051e(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    bool bVar3;
    
    iVar2 = arg1;
    cVar1 = fcn.00010240();
    if ((cVar1 != '\0') && (iVar2 == 0)) {
        fcn.0001024a(0x1507b,0xfe,0x15066);
        fcn.0001024a(0x1507b,0xe3,0x15066);
        fcn.0001024a(0x1507b,0x7e,0x15066);
    }
    bVar3 = false;
    if (*arg1 == '\x7f') {
        bVar3 = *(arg1 + 1) == -1;
    }
    return bVar3;
}


/* fcn.00010b2e @ 0x10b2e */

int64_t fcn.00010b2e(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    
    iVar2 = arg1;
    cVar1 = fcn.00010240();
    if ((iVar2 == 0) && (cVar1 != '\0')) {
        fcn.0001024a(0x1507b,0xc5,0x15066);
    }
    iVar2 = fcn.00010aee(arg1);
    return iVar2 + arg1;
}


/* fcn.00010b6d @ 0x10b6d */

int64_t fcn.00010b6d(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (arg1 != 0) {
        cVar1 = fcn.0001359b(arg1);
        iVar2 = arg1;
        if (cVar1 == '\0') {
            iVar2 = 0;
        }
        else {
            while( true ) {
                cVar1 = fcn.0001051e(iVar2);
                if (cVar1 != '\0') break;
                iVar2 = fcn.00010b2e(iVar2);
            }
            iVar3 = fcn.00010aee(iVar2);
            iVar2 = (iVar3 - arg1) + iVar2;
        }
        return iVar2;
    }
    return 0;
}


/* fcn.00013564 @ 0x13564 */

ulong fcn.00013564(void)

{
    int64_t iVar1;
    ulong uStack_10;
    
    iVar1 = (**(*0x15e50 + 0x40))(4);
    if (iVar1 < 0) {
        uStack_10 = 0;
    }
    return uStack_10;
}


/* fcn.000108e1 @ 0x108e1 */

uint64_t fcn.000108e1(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    iVar3 = arg1;
    cVar2 = fcn.00010240();
    if ((iVar3 == 0) && (cVar2 != '\0')) {
        fcn.0001024a(0x15218,0x43a,0x15201);
    }
    uVar1 = *0x15ab0;
    uVar5 = *0x15ab0;
    for (uVar4 = 0; *(arg1 + uVar4) != '\0'; uVar4 = uVar4 + 1) {
        if (((uVar1 != 0) && (cVar2 != '\0')) && (uVar5 <= uVar4)) {
            fcn.0001024a(0x15218,0x442,0x1524c);
        }
    }
    return uVar4;
}


/* fcn.00010592 @ 0x10592 */

int64_t fcn.00010592(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint *puVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint *puVar8;
    uint32_t uVar9;
    
    if (arg3 != 0) {
        uVar5 = arg1;
        iVar4 = arg3;
        cVar3 = fcn.00010240();
        if (cVar3 != '\0') {
            if (~uVar5 < iVar4 - 1U) {
                fcn.0001024a(0x15109,0x38,0x150c6);
            }
            if (~arg2 < iVar4 - 1U) {
                fcn.0001024a(0x15109,0x39,0x1514b);
            }
        }
        if (arg1 != arg2) {
            uVar9 = arg3;
            if ((((arg1 | arg2) & 7U) == 0) && (7 < arg3)) {
                if (arg1 < arg2) {
                    iVar4 = 0;
                    do {
                        puVar7 = arg2 + iVar4;
                        puVar1 = arg1 + iVar4;
                        iVar4 = iVar4 + 8;
                        *puVar1 = *puVar7;
                    } while (7 < arg3 - iVar4);
                    iVar4 = (arg3 - 8U & 0xfffffffffffffff8) + 8;
                    for (uVar5 = 0; (uVar9 & 7) != uVar5; uVar5 = uVar5 + 1) {
                        *(uVar5 + iVar4 + arg1) = *(arg2 + iVar4 + uVar5);
                    }
                }
                else if (arg2 < arg1) {
                    puVar7 = arg3 + arg1;
                    arg2 = arg2 + arg3;
                    uVar5 = uVar9 & 7;
                    if ((arg3 & 7U) != 0) {
                        uVar6 = uVar5;
                        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffffffffffff) {
                            *(puVar7 + (uVar6 - uVar5)) = *((arg2 - uVar5) + uVar6);
                        }
                        arg3 = arg3 - uVar5;
                        puVar7 = puVar7 + -uVar5;
                        arg2 = -uVar5 + arg2;
                    }
                    arg2 = arg2 - arg3;
                    do {
                        puVar1 = arg2 + -8 + arg3;
                        puVar7 = puVar7 + -1;
                        arg3 = arg3 + -8;
                        *puVar7 = *puVar1;
                    } while (arg3 != 0);
                }
            }
            else if ((((arg1 | arg2) & 3U) == 0) && (3 < arg3)) {
                if (arg1 < arg2) {
                    iVar4 = 0;
                    do {
                        puVar8 = arg2 + iVar4;
                        puVar2 = arg1 + iVar4;
                        iVar4 = iVar4 + 4;
                        *puVar2 = *puVar8;
                    } while (3 < arg3 - iVar4);
                    iVar4 = (arg3 - 4U & 0xfffffffffffffffc) + 4;
                    for (uVar5 = 0; uVar5 != (uVar9 & 3); uVar5 = uVar5 + 1) {
                        *(uVar5 + iVar4 + arg1) = *(arg2 + iVar4 + uVar5);
                    }
                }
                else if (arg2 < arg1) {
                    puVar8 = arg1 + arg3;
                    arg2 = arg2 + arg3;
                    uVar5 = uVar9 & 3;
                    if ((arg3 & 3U) != 0) {
                        uVar6 = uVar5;
                        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffffffffffff) {
                            *(puVar8 + (uVar6 - uVar5)) = *((arg2 - uVar5) + uVar6);
                        }
                        arg3 = arg3 - uVar5;
                        puVar8 = puVar8 + -uVar5;
                        arg2 = -uVar5 + arg2;
                    }
                    arg2 = arg2 - arg3;
                    do {
                        puVar2 = arg2 + -4 + arg3;
                        puVar8 = puVar8 + -1;
                        arg3 = arg3 + -4;
                        *puVar8 = *puVar2;
                    } while (arg3 != 0);
                }
            }
            else {
                iVar4 = 0;
                if (arg1 < arg2) {
                    for (; arg3 != iVar4; iVar4 = iVar4 + 1) {
                        *(arg1 + iVar4) = *(arg2 + iVar4);
                    }
                }
                else if (arg2 < arg1) {
                    while( true ) {
                        iVar4 = arg3 + -1;
                        if (iVar4 == -1) break;
                        *(arg3 + -1 + arg1) = *(arg2 + iVar4);
                        arg3 = iVar4;
                    }
                }
            }
        }
    }
    return arg1;
}


/* fcn.000107f2 @ 0x107f2 */

int64_t fcn.000107f2(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint *puVar3;
    char cVar4;
    uchar *puVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint *puVar8;
    uchar *puVar9;
    
    iVar6 = arg1;
    cVar4 = fcn.00010240();
    if (cVar4 != '\0') {
        if (iVar6 == 0) {
            fcn.0001024a(0x15189,0x35,0x1547d);
        }
        if (-arg1 < arg2) {
            fcn.0001024a(0x15189,0x36,0x151cb);
        }
    }
    if (((arg1 & 7U) == 0) && (7 < arg2)) {
        puVar7 = arg1;
        do {
            puVar1 = puVar7 + 1;
            *puVar7 = 0;
            puVar7 = puVar1;
        } while (7 < (arg2 - puVar1) + arg1);
        uVar2 = arg2 - 8;
        arg2 = arg2 & 7;
        puVar5 = arg1 + 8 + (uVar2 & 0xfffffffffffffff8);
    }
    else if (((arg1 & 3U) == 0) && (puVar8 = arg1, 3 < arg2)) {
        do {
            puVar3 = puVar8 + 1;
            *puVar8 = 0;
            puVar8 = puVar3;
        } while (3 < (arg2 - puVar3) + arg1);
        uVar2 = arg2 - 4;
        arg2 = arg2 & 3;
        puVar5 = arg1 + 4 + (uVar2 & 0xfffffffffffffffc);
    }
    else {
        puVar5 = arg1;
    }
    puVar9 = puVar5 + arg2;
    for (; puVar9 != puVar5; puVar5 = puVar5 + 1) {
        *puVar5 = 0;
    }
    return arg1;
}


/* fcn.000139e4 @ 0x139e4 */

void fcn.000139e4(int64_t arg1,int64_t arg2)

{
    fcn.00013902(arg1,arg1);
    return;
}


/* fcn.00013902 @ 0x13902 */

int64_t fcn.00013902(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t unaff_RDI;
    int iVar3;
    
    puVar1 = *(unaff_RDI + 0x10);
    iVar3 = 0;
    iVar2 = -0x7fffffffffffffee;
    while ((iVar3 < 3 && (iVar2 == -0x7fffffffffffffee))) {
        iVar3 = iVar3 + 1;
        iVar2 = (**puVar1)(puVar1);
    }
    if (iVar2 < 0) {
        iVar2 = -0x7ffffffffffffff9;
    }
    return iVar2;
}


/* fcn.000139a7 @ 0x139a7 */

void fcn.000139a7(int64_t arg1,int64_t arg2)

{
    fcn.00013902(arg1,arg1);
    return;
}


/* fcn.000134da @ 0x134da */

int64_t fcn.000134da(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uchar *puVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint32_t uVar5;
    
    cVar1 = fcn.00010240();
    if ((cVar1 != '\0') && (0xfffffffffffffffa < arg1)) {
        fcn.0001024a(0x15813,0x36,0x157db);
    }
    if ((arg1 & 3U) == 0) {
        uVar5 = arg2 & 0xff;
        iVar3 = 2;
        *arg1 = uVar5 << 8 | uVar5 << 0x10 | arg2 << 0x18 | uVar5;
        puVar2 = arg1 + 4;
    }
    else {
        iVar3 = 6;
        puVar2 = arg1;
    }
    puVar4 = puVar2 + iVar3;
    for (; puVar4 != puVar2; puVar2 = puVar2 + 1) {
        *puVar2 = arg2;
    }
    return arg1;
}


/* fcn.00014be0 @ 0x14be0 */

int64_t fcn.00014be0(void)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t arg2;
    uint32_t uVar7;
    int iVar8;
    int64_t unaff_RDI;
    uint32_t uVar9;
    uint32_t uVar10;
    uint uStack_1c;
    
    cVar3 = fcn.00010240();
    if ((cVar3 == '\0') || (*(unaff_RDI + -0x18) == 0x38385841)) {
        arg2 = unaff_RDI + -0x18;
    }
    else {
        fcn.0001024a(0x15501,0x2d,0x154ec);
        arg2 = unaff_RDI;
    }
    iVar6 = *(unaff_RDI + 0x78);
    iVar5 = 0;
    do {
        *(arg2 + 0x378 + iVar5) = 0;
        iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    if ((*(iVar6 + 0x1c) & 2) != 0) {
        for (uVar7 = 0; uVar7 < *(iVar6 + 0x24); uVar7 = uVar7 + 1) {
            iVar5 = 0;
            uVar4 = 0xffffffff;
            do {
                uVar9 = *(iVar6 + 8 + (uVar7 + 1) * 0x20 + iVar5);
                iVar8 = 8;
                do {
                    uVar2 = uVar4 * 2;
                    uVar10 = uVar4 >> 0x1f;
                    uVar4 = uVar2;
                    if (uVar10 != (uVar9 & 1)) {
                        uVar4 = uVar2 ^ 0x4c11db7;
                    }
                    uVar9 = uVar9 >> 1;
                    iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
                iVar5 = iVar5 + 1;
            } while (iVar5 != 6);
            puVar1 = arg2 + 0x378 + (uVar4 >> 0x1d);
            *puVar1 = *puVar1 | 1 << (uVar4 >> 0x1a & 7);
        }
    }
    uVar7 = *(iVar6 + 0x1c);
    iVar6 = 0;
    uStack_1c = uStack_1c;
    if (uVar7 == 0) goto code_r0x00014d7d;
    iVar6 = fcn.000139e4(&uStack_1c,arg2);
    if ((iVar6 < 0) || (*(arg2 + 0x3a0) == uStack_1c)) goto code_r0x00014d7d;
    uStack_1c._0_2_ = 0x104;
    if (*(arg2 + 0x32f) != '\0') {
        uStack_1c._0_2_ = 0x136;
    }
    if (*(arg2 + 0x32d) == '\0') {
        if (*(arg2 + 0x32c) == '\0') goto code_r0x00014d53;
        uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_1c) | 0x200;
    }
    else {
        uStack_1c._0_2_ = uStack_1c | 9;
code_r0x00014d53:
    }
    iVar6 = fcn.000139a7(&uStack_1c,arg2);
    if (-1 < iVar6) {
        *(arg2 + 0x3a0) = uStack_1c;
    }
code_r0x00014d7d:
    if ((uVar7 & 2) == 0) {
        uStack_1c._2_2_ = 0x280;
    }
    else {
        uStack_1c._2_2_ = 0x290;
        iVar6 = fcn.000139a7(arg2 + 0x378,arg2);
    }
    if ((uVar7 & 0x10) != 0) {
        uStack_1c._2_2_ = uStack_1c._2_2_ | 2;
    }
    if ((uVar7 & 4) != 0) {
        uStack_1c._2_2_ = uStack_1c._2_2_ | 8;
    }
    if ((uVar7 & 8) != 0) {
        uStack_1c._2_2_ = uStack_1c._2_2_ | 1;
    }
    if ((*(arg2 + 0x3a2) != uStack_1c._2_2_) && (iVar6 = fcn.000139a7(&uStack_1c + 2,arg2), -1 < iVar6)) {
        *(arg2 + 0x3a2) = uStack_1c._2_2_;
    }
    return iVar6;
}


/* fcn.00010e22 @ 0x10e22 */

uint64_t fcn.00010e22(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    uVar2 = arg1;
    cVar1 = fcn.00010240();
    if ((cVar1 != '\0') && ((uVar2 & 1) != 0)) {
        fcn.0001024a(0x15441,0x80,0x1541e);
    }
    uVar2 = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        for (; *(arg1 + uVar2 * 2) != 0; uVar2 = uVar2 + 1) {
            if (arg2 - 1U <= uVar2) {
                return arg2;
            }
        }
    }
    return uVar2;
}


/* fcn.00010dfc @ 0x10dfc */

uint64_t fcn.00010dfc(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) {
        while( true ) {
            if (*(CONCAT44(in_register_0000000c,arg1) + uVar1) == '\0') {
                return uVar1;
            }
            if (arg2 - 1U <= uVar1) break;
            uVar1 = uVar1 + 1;
        }
        return arg2;
    }
    return 0;
}


/* fcn.00014e0f @ 0x14e0f */

void fcn.00014e0f(uint32_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    fcn.000123e1(arg2,0,&stack0x00000028);
    return;
}


/* fcn.00010a4e @ 0x10a4e */

void fcn.00010a4e(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar *unaff_RSI;
    uchar *unaff_RDI;
    int64_t iVar1;
    uint in_R8;
    
    iVar1 = 0;
    for (; (iVar1 < arg2 && (unaff_RDI < unaff_RSI)); unaff_RDI = unaff_RDI + CONCAT44(in_R8,arg3)) {
        *unaff_RDI = arg1;
        if (CONCAT44(in_R8,arg3) != 1) {
            unaff_RDI[1] = arg1 >> 8;
        }
        iVar1 = iVar1 + 1;
    }
    return;
}


/* fcn.00010a7c @ 0x10a7c */

uint32_t fcn.00010a7c(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    
    iVar2 = arg1;
    cVar1 = fcn.00010240();
    if ((iVar2 == 0) && (cVar1 != '\0')) {
        fcn.0001024a(0x152e7,0x59,0x1547d);
    }
    return *arg1 & 0xffffff;
}


/* fcn.00010d29 @ 0x10d29 */

int64_t fcn.00010d29(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char *pcVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t uVar5;
    
    iVar4 = arg1;
    cVar3 = fcn.00010240();
    if (cVar3 != '\0') {
        iVar4 = fcn.000108e1(iVar4);
        if (iVar4 == -1) {
            fcn.0001024a(0x15218,0x528,0x153ae);
        }
        iVar4 = fcn.000108e1(arg2);
        if (iVar4 == -1) {
            fcn.0001024a(0x15218,0x529,0x153c9);
        }
        if ((*0x15ab0 != 0) && (*0x15ab0 < arg3)) {
            fcn.0001024a(0x15218,0x52c,0x153e5);
        }
    }
    iVar4 = 0;
    do {
        cVar3 = *(arg1 + iVar4);
        pcVar1 = arg2 + iVar4;
        if (cVar3 == '\0') break;
        pcVar2 = arg2 + iVar4;
        uVar5 = arg3 - iVar4;
        iVar4 = iVar4 + 1;
    } while ((cVar3 == *pcVar2 && *pcVar2 != '\0') && 1 < uVar5);
    return cVar3 - *pcVar1;
}


/* fcn.000136d1 @ 0x136d1 */

ulong fcn.000136d1(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    char in_stack_00000028;
    
    do {
        while( true ) {
            if (*arg2 == '\0') {
                return 0x8000000000000003;
            }
            pcVar6 = arg2;
            if (in_stack_00000028 != '\0') break;
            do {
                pcVar7 = pcVar6;
                iVar5 = pcVar7 - arg2;
                if (*pcVar7 == '\0') break;
                pcVar6 = pcVar7 + 1;
            } while (*pcVar7 != ';');
            if (((iVar5 == 0) || (iVar3 = fcn.00010d29(arg2,arg1,iVar5), iVar3 == 0)) && (*(arg1 + iVar5) == '\0'))
            goto code_r0x00013766;
            for (; arg2 = pcVar7, *pcVar7 == ';'; pcVar7 = pcVar7 + 1) {
            }
        }
        iVar1 = fcn.00010a7c(arg1);
        iVar2 = fcn.00010a7c(arg2);
        if (iVar1 == iVar2) {
code_r0x00013766:
            do {
                pcVar6 = *arg3;
                if (*arg3 == NULL) {
                    return 0x8000000000000003;
                }
                while (*pcVar6 != '\0') {
                    pcVar7 = pcVar6;
                    do {
                        pcVar4 = pcVar7;
                        if (*pcVar4 == '\0') break;
                        pcVar7 = pcVar4 + 1;
                    } while (*pcVar4 != ';');
                    if ((pcVar4 - pcVar6 == 0) || (iVar5 = fcn.00010d29(pcVar6,arg1,pcVar4 - pcVar6), iVar5 == 0)) {
                        *arg4 = *(arg3 + 8);
                        return 0;
                    }
                    pcVar6 = pcVar4;
                }
                arg3 = arg3 + 0x10;
            } while( true );
        }
        arg2 = arg2 + 3;
    } while( true );
}


/* fcn.00010bbb @ 0x10bbb */

uint64_t fcn.00010bbb(int64_t arg1)

{
    ulong *puVar1;
    uint *puVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    uint *puVar10;
    uint32_t uVar11;
    
    uVar7 = fcn.00010b6d(arg1);
    if (uVar7 != 0) {
        cVar3 = fcn.00010240();
        if (cVar3 != '\0') {
            if (arg1 == 0) {
                fcn.0001024a(0x1531e,0x239,0x1547d);
            }
            if (-arg1 < uVar7) {
                fcn.0001024a(0x1531e,0x23a,0x1536f);
            }
        }
        uVar8 = fcn.00013564();
        if (uVar8 != 0) {
            if (uVar7 != 0) {
                uVar6 = uVar8;
                uVar5 = uVar7;
                cVar3 = fcn.00010240();
                if (cVar3 != '\0') {
                    if (~uVar6 < uVar5 - 1) {
                        fcn.0001024a(0x15109,0x38,0x150c6);
                    }
                    if (~arg1 < uVar5 - 1) {
                        fcn.0001024a(0x15109,0x39,0x1514b);
                    }
                }
                if (uVar8 != arg1) {
                    uVar11 = uVar7;
                    if ((((uVar8 | arg1) & 7) == 0) && (7 < uVar7)) {
                        if (uVar8 < arg1) {
                            iVar4 = 0;
                            do {
                                puVar9 = arg1 + iVar4;
                                puVar1 = uVar8 + iVar4;
                                iVar4 = iVar4 + 8;
                                *puVar1 = *puVar9;
                            } while (7 < uVar7 - iVar4);
                            iVar4 = (uVar7 - 8 & 0xfffffffffffffff8) + 8;
                            for (uVar7 = 0; (uVar11 & 7) != uVar7; uVar7 = uVar7 + 1) {
                                *(uVar7 + iVar4 + uVar8) = *(arg1 + iVar4 + uVar7);
                            }
                        }
                        else if (arg1 < uVar8) {
                            puVar9 = uVar7 + uVar8;
                            arg1 = arg1 + uVar7;
                            uVar6 = uVar11 & 7;
                            if ((uVar7 & 7) != 0) {
                                uVar5 = uVar6;
                                while (uVar5 = uVar5 - 1, uVar5 != 0xffffffffffffffff) {
                                    *(puVar9 + (uVar5 - uVar6)) = *((arg1 - uVar6) + uVar5);
                                }
                                uVar7 = uVar7 - uVar6;
                                puVar9 = puVar9 + -uVar6;
                                arg1 = -uVar6 + arg1;
                            }
                            arg1 = arg1 - uVar7;
                            do {
                                puVar1 = arg1 + -8 + uVar7;
                                puVar9 = puVar9 + -1;
                                uVar7 = uVar7 - 8;
                                *puVar9 = *puVar1;
                            } while (uVar7 != 0);
                        }
                    }
                    else if ((((uVar8 | arg1) & 3) == 0) && (3 < uVar7)) {
                        if (uVar8 < arg1) {
                            iVar4 = 0;
                            do {
                                puVar10 = arg1 + iVar4;
                                puVar2 = uVar8 + iVar4;
                                iVar4 = iVar4 + 4;
                                *puVar2 = *puVar10;
                            } while (3 < uVar7 - iVar4);
                            iVar4 = (uVar7 - 4 & 0xfffffffffffffffc) + 4;
                            for (uVar7 = 0; uVar7 != (uVar11 & 3); uVar7 = uVar7 + 1) {
                                *(uVar7 + iVar4 + uVar8) = *(arg1 + iVar4 + uVar7);
                            }
                        }
                        else if (arg1 < uVar8) {
                            puVar10 = uVar8 + uVar7;
                            arg1 = arg1 + uVar7;
                            uVar6 = uVar11 & 3;
                            if ((uVar7 & 3) != 0) {
                                uVar5 = uVar6;
                                while (uVar5 = uVar5 - 1, uVar5 != 0xffffffffffffffff) {
                                    *(puVar10 + (uVar5 - uVar6)) = *((arg1 - uVar6) + uVar5);
                                }
                                uVar7 = uVar7 - uVar6;
                                puVar10 = puVar10 + -uVar6;
                                arg1 = -uVar6 + arg1;
                            }
                            arg1 = arg1 - uVar7;
                            do {
                                puVar2 = arg1 + -4 + uVar7;
                                puVar10 = puVar10 + -1;
                                uVar7 = uVar7 - 4;
                                *puVar10 = *puVar2;
                            } while (uVar7 != 0);
                        }
                    }
                    else {
                        uVar6 = 0;
                        if (uVar8 < arg1) {
                            for (; uVar7 != uVar6; uVar6 = uVar6 + 1) {
                                *(uVar8 + uVar6) = *(arg1 + uVar6);
                            }
                        }
                        else if (arg1 < uVar8) {
                            uVar6 = uVar7;
                            while( true ) {
                                uVar5 = uVar6 - 1;
                                if (uVar5 == 0xffffffffffffffff) break;
                                *((uVar6 - uVar7) + (uVar7 - 1) + uVar8) = *(arg1 + uVar5);
                                uVar6 = uVar5;
                            }
                        }
                    }
                }
            }
            return uVar8;
        }
    }
    return 0;
}


/* fcn.00014300 @ 0x14300 */

int64_t fcn.00014300(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    int64_t aiStack_50 [2];
    
    if (arg3 == 0) {
        iVar3 = (**(*0x15e50 + 0x118))(arg2,0x15d80,aiStack_50,*(arg1 + 0x28),arg2,2);
        if (-1 < iVar3) {
            cVar2 = fcn.00010240();
            if ((cVar2 == '\0') || (*(aiStack_50[0] + -0x18) == 0x38385841)) {
                aiStack_50[0] = aiStack_50[0] + -0x18;
            }
            else {
                fcn.0001024a(0x15b56,0x166,0x154ec);
            }
            iVar3 = (**(*0x15e50 + 0x150))
                              (arg2,0x15e30,aiStack_50[0],0x15d80,aiStack_50[0] + 0x18,0x15d70,
                               *(aiStack_50[0] + 0x3b0),0);
            if (iVar3 < 0) {
                return iVar3;
            }
        }
        (**(*0x15e50 + 0x120))(arg2,0x15d70,*(arg1 + 0x28),arg2);
        (**(*0x15e50 + 0x120))(arg2,0x15d60,*(arg1 + 0x28),arg2);
        iVar3 = 0;
    }
    else {
        iVar3 = 0;
        bVar1 = true;
        do {
            iVar4 = (**(*0x15e50 + 0x118))(*(arg4 + iVar3 * 8),0x15d80,aiStack_50,*(arg1 + 0x28),arg2,2);
            if (iVar4 < 0) {
                bVar1 = false;
            }
            else {
                cVar2 = fcn.00010240();
                if ((cVar2 == '\0') || (*(aiStack_50[0] + -0x18) == 0x38385841)) {
                    iVar4 = aiStack_50[0] + -0x18;
                }
                else {
                    fcn.0001024a(0x15b56,0x19a,0x154ec);
                    iVar4 = aiStack_50[0];
                }
                (**(*0x15e50 + 0x120))(arg2,0x15d60,*(arg1 + 0x28),*(arg4 + iVar3 * 8));
                uVar6 = 0;
                iVar5 = (**(*0x15e50 + 0x150))
                                  (*(arg4 + iVar3 * 8),0x15e30,iVar4,0x15d80,iVar4 + 0x18,0x15d70,*(iVar4 + 0x3b0)
                                   ,0);
                if (iVar5 < 0) {
                    (**(*0x15e50 + 0x118))
                              (arg2,0x15d60,iVar4 + 0x10,*(arg1 + 0x28),*(arg4 + iVar3 * 8),CONCAT44(uVar6,8));
                }
                else {
                    if (*(iVar4 + 0x350) != 0) {
                        (**(*0x15e50 + 0x48))();
                    }
                    if (*(iVar4 + 0x370) != 0) {
                        (**(*0x15e50 + 0x48))();
                    }
                    if (*(iVar4 + 0x3b0) != 0) {
                        (**(*0x15e50 + 0x48))();
                    }
                    (**(*0x15e50 + 0x48))(iVar4);
                }
            }
            iVar3 = iVar3 + 1;
        } while (arg3 != iVar3);
        iVar3 = -0x7ffffffffffffff9;
        if (bVar1) {
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00011f5d @ 0x11f5d */

int64_t fcn.00011f5d(int64_t arg1)

{
    char cVar1;
    ulong uVar2;
    uint16_t *puVar3;
    uint16_t *arg1_00;
    int64_t iVar4;
    uint16_t auStack_f2 [89];
    
    iVar4 = -0x7ffffffffffffffe;
    uVar2 = (**(*0x15e50 + 0x18))(8);
    if (((arg1 != 0) && (*(arg1 + 0x78) != NULL)) && (iVar4 = -0x7fffffffffffffed, **(arg1 + 0x78) == 2)) {
        cVar1 = fcn.00010240();
        if ((cVar1 == '\0') || (*(arg1 + -0x18) == 0x38385841)) {
            arg1 = arg1 + -0x18;
        }
        else {
            fcn.0001024a(0x15501,0x38a,0x154ec);
        }
        iVar4 = 0;
        if (*(arg1 + 0x3b9) != '\0') {
            arg1_00 = auStack_f2 + 1;
            puVar3 = auStack_f2;
            fcn.000139e4(auStack_f2,arg1);
            auStack_f2[1] = 0x9140;
            auStack_f2[2] = 0xff;
            auStack_f2[3] = 0;
            auStack_f2[4] = 0;
            *(arg1 + 0x3bb) = auStack_f2[0] & 0x70;
            iVar4 = fcn.00013902(puVar3,0);
            if (-1 < iVar4) {
                auStack_f2[0] = auStack_f2[0] & 0xff00;
                iVar4 = fcn.000139e4(auStack_f2,arg1);
                if (-1 < iVar4) {
                    auStack_f2[1] = 0;
                    *(arg1 + 0x3c0) = (-((auStack_f2[0] & 4) == 0) & 0xfffffffffffffe00) + 0x400;
                    iVar4 = fcn.000139a7(arg1_00,arg1);
                    if (-1 < iVar4) {
                        (**(*0x15e50 + 0xf8))(10000);
                        auStack_f2[1] = 0x20;
                        iVar4 = fcn.000139a7(arg1_00,arg1);
                        if (-1 < iVar4) {
                            (**(*0x15e50 + 0xf8))(200000);
                            auStack_f2[1] = 3;
                            iVar4 = fcn.000139a7(arg1_00,arg1);
                            if (-1 < iVar4) {
                                (**(*0x15e50 + 0xf8))(100000);
                                auStack_f2[1] = 0x52;
                                iVar4 = fcn.000139a7(arg1_00,arg1);
                                if (-1 < iVar4) {
                                    auStack_f2[1] = 0x34;
                                    puVar3 = arg1_00;
                                    iVar4 = fcn.000139a7(arg1_00,arg1);
                                    if (-1 < iVar4) {
                                        if (*(arg1 + 0x3bb) != '`') {
                                            auStack_f2[1] = 7;
                                            iVar4 = fcn.000139a7(arg1_00,arg1);
                                            if (iVar4 < 0) goto code_r0x00012374;
                                            auStack_f2[1] = 0;
                                            iVar4 = fcn.000139a7(arg1_00,arg1);
                                            if (iVar4 < 0) goto code_r0x00012374;
                                            auStack_f2[1] = 0;
                                            iVar4 = fcn.000139a7(arg1_00,arg1);
                                            if (iVar4 < 0) goto code_r0x00012374;
                                            auStack_f2[1] = 0xc;
                                            iVar4 = fcn.000139a7(arg1_00,arg1);
                                            if (iVar4 < 0) goto code_r0x00012374;
                                            auStack_f2[1] = 0xf;
                                            iVar4 = fcn.000139a7(arg1_00,arg1);
                                            puVar3 = arg1_00;
                                        }
                                        if (-1 < iVar4) {
                                            iVar4 = fcn.00014be0();
                                            if (((-1 < iVar4) && (*(arg1 + 0x330) == '\0')) && (*(arg1 + 0x3b9) != '\0')
                                               ) {
                                                auStack_f2[0] = 0x1240;
                                                if (*(arg1 + 0x32d) == '\0') {
                                                    auStack_f2[0] = (-(*(arg1 + 0x32c) == '\0') & 0xe000) + 0x3200;
                                                }
                                                auStack_f2[1] = 0x240;
                                                auStack_f2[3] = 0;
                                                auStack_f2[4] = 2;
                                                if (*(arg1 + 0x32f) != '\0') {
                                                    auStack_f2[0] = auStack_f2[0] | 0x100;
                                                }
                                                auStack_f2[2] = *(arg1 + 0x32a);
                                                iVar4 = fcn.00013902(puVar3,auStack_f2);
                                                if (-1 < iVar4) {
                                                    (**(*0x15e50 + 0xf8))(3000000);
                                                }
                                                *(arg1 + 0x3b9) = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x00012374:
    (**(*0x15e50 + 0x20))(uVar2);
    return iVar4;
}


/* fcn.000141b3 @ 0x141b3 */

void fcn.000141b3(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00013902(arg1,in_RDX);
    return;
}


