// decompiled by r2ghidra: 2174_CpuFeaturesPei.pe32
// functions: 82

/* entry0 @ 0x103a6 */

uint entry0(void)

{
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    fcn.00011c90();
    fcn.00013081();
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_8h);
    if (var_8h != 0x11) {
        fcn.00011229();
        fcn.000105d6();
        fcn.000104d4();
        fcn.000104b2();
    }
    return 0;
}


/* fcn.00011c90 @ 0x11c90 */

uint fcn.00011c90(void)

{
    char cVar1;
    
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3ba8,0x227c,0x228a,0x22b5,0,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bb0,0,0x27cf,0x27dd,2,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bb8,0x250b,0x2517,0x2556,3,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bc0,0,0x21ed,0x21fb,4,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bc8,0,0,0x29e9,6,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bd4,0,0x238b,0x238e,10,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bf4,0,0x23fa,0x2408,8,0x200000a,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bf8,0,0x230a,0x2318,7,0x200000a,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bfc,0,0x2681,0x26a5,0xb,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c18,0,0x1f72,0x1f80,0xc,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c30,0,0x1fb7,0x1fd3,0xd,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c48,0,0x20f1,0x211c,0xe,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c50,0,0x2732,0x278b,0xf,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c60,0,0x297b,0x29a3,0x10,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c64,0x288f,0x2898,0x28bc,0x18,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c6c,0x227c,0x25b2,0x2611,0x2b,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c74,0,0x2153,0x217d,9,0x200000a,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c7c,0x2a5e,0x2aaa,0x2b7a,0x2c,0xffffffff);
    }
    return 0;
}


/* fcn.00013081 @ 0x13081 */

uint fcn.00013081(void)

{
    char cVar1;
    
    fcn.00012f4d();
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c88,0,0x3145,0x3156,0x19,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c8c,0,0,0x31d2,0x26,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3ca4,0,0,0x320b,0x27,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3cbc,0,0,0x319a,0x29,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3cd4,0,0,0x3244,0x28,0xffffffff);
    }
    return 0;
}


/* fcn.00011229 @ 0x11229 */

void fcn.00011229(void)

{
    int iVar1;
    int iVar2;
    
    iVar1 = fcn.00010585();
    fcn.000106b8();
    if (1 < *(iVar1 + 0x1c)) {
        iVar2 = fcn.00010585();
        (**(*(iVar2 + 0x3c) + 8))(*(iVar2 + 0x3c),0xaa8,0,0,iVar2);
    }
    fcn.00010aa8(iVar1);
    fcn.00010b4d();
    return;
}


/* fcn.00010585 @ 0x10585 */

int32_t fcn.00010585(void)

{
    int iVar1;
    int32_t iVar2;
    int32_t *piVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010447();
    if (iVar1 == 0) {
        iVar2 = fcn.000135b4();
        var_4h = 0;
        var_8h = iVar2;
        piVar3 = fcn.000104b2();
        if ((piVar3 != NULL) && (piVar3 != &var_8h)) {
            section..text(piVar3,&var_8h,8);
        }
    }
    else {
        iVar2 = *(iVar1 + 0x18);
    }
    return iVar2;
}


/* fcn.000106b8 @ 0x106b8 */

void fcn.000106b8(void)

{
    uchar *puVar1;
    char *pcVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    uint32_t *puVar7;
    int iVar8;
    int iVar9;
    uint noname_0;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uchar *puVar13;
    uint *puVar14;
    uint32_t uVar15;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    int iStack_40;
    int iStack_3c;
    uchar auStack_38 [4];
    uchar auStack_34 [12];
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    iVar4 = fcn.00010585();
    fcn.000104fd(noname_0,&iStack_40);
    *(iVar4 + 0x3c) = iStack_40;
    iVar5 = fcn.00010585();
    (***(iVar5 + 0x3c))(*(iVar5 + 0x3c),&uStack_54,auStack_38);
    uVar6 = fcn.00013493();
    *(iVar4 + 0x10) = uVar6;
    fcn.0001346b();
    for (puVar14 = *(iVar4 + 8); puVar14 != iVar4 + 8; puVar14 = *puVar14) {
        if (puVar14[4] != NULL) {
            uVar6 = (*puVar14[4])(uStack_54);
            puVar14[0xd] = uVar6;
        }
    }
    *(iVar4 + 0x1c) = uStack_54;
    iVar5 = fcn.0001197f();
    *(iVar4 + 0x20) = iVar5;
    iStack_40 = iVar5;
    puVar7 = fcn.00013493();
    fcn.0001346b();
    *(iVar5 + 0x74) = 0;
    iStack_3c = 0;
    *(iVar5 + 0x70) = puVar7;
    uVar12 = 0;
    if (uStack_54 != 0) {
        uVar12 = 0;
        uStack_44 = 0;
        do {
            puVar13 = *(iVar4 + 0x10) + uStack_44;
            uVar6 = fcn.000135b4();
            *(puVar13 + 0x50) = uVar6;
            puVar1 = puVar13 + 0x54;
            *puVar1 = puVar1;
            *(puVar13 + 0x58) = puVar1;
            iVar5 = fcn.00010585();
            (**(*(iVar5 + 0x3c) + 4))(*(iVar5 + 0x3c),uVar12,auStack_34);
            if (puVar13 != auStack_34) {
                section..text(puVar13,auStack_34,0x30);
            }
            if (puVar7 != &uStack_28) {
                section..text(puVar7,&uStack_28,0xc);
            }
            if (uStack_50 < uStack_28) {
                uStack_50 = uStack_28;
            }
            if (uStack_48 < uStack_24) {
                uStack_48 = uStack_24;
            }
            if (uStack_4c < uStack_20) {
                uStack_4c = uStack_20;
            }
            uVar12 = uVar12 + 1;
            uStack_44 = uStack_44 + 0x60;
            puVar7 = puVar7 + 3;
        } while (uVar12 < uStack_54);
        iVar5 = iStack_40;
        uVar12 = uStack_48;
    }
    *(iVar5 + 0x54) = uVar12 + 1;
    *(iVar5 + 0x50) = uStack_50 + 1;
    *(iVar5 + 0x58) = uStack_4c + 1;
    iVar8 = fcn.00013493();
    fcn.0001346b();
    *(iVar5 + 100) = 0;
    *(iVar5 + 0x60) = iVar8;
    iVar9 = fcn.00013493();
    iStack_3c = iVar9;
    fcn.0001346b();
    *(iVar5 + 0x6c) = 0;
    *(iVar5 + 0x68) = iVar9;
    uVar12 = 0;
    if (uStack_54 != 0) {
        iVar9 = 0;
        do {
            iVar10 = *(iVar4 + 0x10);
            piVar3 = iVar8 + *(iVar9 + 0xc + iVar10) * 4;
            *piVar3 = *piVar3 + 1;
            pcVar2 = *(iVar9 + 0xc + iVar10) * *(iVar5 + 0x54) + *(iVar9 + 0x10 + iVar10) + iStack_3c;
            *pcVar2 = *pcVar2 + '\x01';
            uVar12 = uVar12 + 1;
            iVar9 = iVar9 + 0x60;
        } while (uVar12 < uStack_54);
    }
    uVar6 = fcn.000135b4();
    *(iVar4 + 0x34) = uVar6;
    uVar6 = fcn.000135b4();
    *(iVar4 + 0x38) = uVar6;
    uVar12 = (*(iVar5 + 0x54) + 1) * *(iVar5 + 0x50);
    iStack_3c = ((uVar12 * 4 & 0xfff) != 0) + ((uVar12 & 0x3fffffff) >> 10);
    uVar12 = fcn.00013493();
    uStack_4c = 0xffffffff;
    uStack_48 = *(iVar5 + 0x50) * 4 + uVar12;
    uStack_50 = uVar12;
    fcn.0001347c(*(iVar5 + 0x50));
    fcn.0001347c();
    uStack_44 = 0;
    if (uStack_54 != 0) {
        iVar8 = 0;
        do {
            iVar9 = *(iVar4 + 0x10);
            uVar11 = *(iVar8 + 0xc + iVar9);
            if (uVar11 < uStack_4c) {
                uStack_4c = uVar11;
            }
            uVar15 = *(iVar8 + 0x10 + iVar9);
            if (*(uVar12 + uVar11 * 4) <= uVar15) {
                uVar15 = *(uVar12 + uVar11 * 4);
            }
            *(uVar12 + uVar11 * 4) = uVar15;
            iVar10 = *(iVar8 + 0xc + iVar9) * *(iVar5 + 0x54) + *(iVar8 + 0x10 + iVar9);
            uVar11 = *(iVar8 + 0x14 + iVar9);
            if (*(uStack_48 + iVar10 * 4) <= uVar11) {
                uVar11 = *(uStack_48 + iVar10 * 4);
            }
            *(uStack_48 + iVar10 * 4) = uVar11;
            iVar8 = iVar8 + 0x60;
            uStack_44 = uStack_44 + 1;
        } while (uStack_44 < uStack_54);
    }
    uVar12 = 0;
    if (uStack_54 != 0) {
        iVar5 = 0;
        do {
            iVar8 = *(iVar4 + 0x10);
            if (*(iVar5 + 0xc + iVar8) == uStack_4c) {
                puVar7 = iVar5 + 0x30 + iVar8;
                *puVar7 = *puVar7 | 0x20;
            }
            puVar7 = iVar5 + 0x30 + *(iVar4 + 0x10);
            *puVar7 = *puVar7 | 0x10;
            puVar7 = iVar5 + 0x30 + *(iVar4 + 0x10);
            *puVar7 = *puVar7 | 8;
            puVar7 = iVar5 + 0x30 + *(iVar4 + 0x10);
            *puVar7 = *puVar7 | 4;
            if (*(iVar5 + 0x10 + iVar8) == *(uStack_50 + *(iVar5 + 0xc + iVar8) * 4)) {
                puVar7 = iVar5 + 0x30 + *(iVar4 + 0x10);
                *puVar7 = *puVar7 | 2;
            }
            if (*(iVar5 + 0x14 + iVar8) ==
                *(uStack_48 + (*(iVar5 + 0xc + iVar8) * *(iStack_40 + 0x54) + *(iVar5 + 0x10 + iVar8)) * 4)) {
                puVar7 = iVar5 + 0x30 + *(iVar4 + 0x10);
                *puVar7 = *puVar7 | 1;
            }
            uVar12 = uVar12 + 1;
            iVar5 = iVar5 + 0x60;
        } while (uVar12 < uStack_54);
    }
    fcn.00010556(uStack_50,0);
    return;
}


/* fcn.00010aa8 @ 0x10aa8 */

void fcn.00010aa8(int param_1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    int iVar6;
    uint *puVar7;
    int iStack_4;
    
    (**(*(param_1 + 0x3c) + 0x18))(*(param_1 + 0x3c),&iStack_4);
    iVar1 = *(param_1 + 0x10);
    iVar3 = iStack_4 * 0x60;
    fcn.0001062a();
    for (puVar7 = *(param_1 + 8); puVar7 != param_1 + 8; puVar7 = *puVar7) {
        if (puVar7[5] == NULL) {
            puVar5 = puVar7[2];
            puVar4 = *(*(param_1 + 0x10) + 0x50 + iVar3);
            for (iVar6 = *(param_1 + 4); iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar4 = *puVar4 | *puVar5;
                puVar5 = puVar5 + 1;
                puVar4 = puVar4 + 1;
            }
        }
        else {
            cVar2 = (*puVar7[5])(iStack_4,iVar1 + iVar3,puVar7[0xd]);
            if (cVar2 != '\0') {
                puVar5 = puVar7[2];
                puVar4 = *(*(param_1 + 0x10) + 0x50 + iVar3);
                for (iVar6 = *(param_1 + 4); iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar4 = *puVar4 | *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar4 = puVar4 + 1;
                }
            }
        }
    }
    return;
}


/* fcn.00010b4d @ 0x10b4d */

void __fastcall fcn.00010b4d(uint32_t param_1)

{
    uint *puVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    int iVar6;
    uint8_t *puVar7;
    int iVar8;
    uint8_t *puVar9;
    int iVar10;
    int *piVar11;
    uint *puVar12;
    uint32_t uStack_20;
    int iStack_18;
    int iStack_10;
    int iStack_c;
    uint *puStack_8;
    uint32_t uStack_4;
    
    uStack_4 = param_1;
    iVar3 = fcn.00010585();
    uVar4 = fcn.0001357d();
    *(iVar3 + 0x14) = uVar4;
    if (*(iVar3 + 4) != 0) {
        fcn.00010280(uVar4,*(iVar3 + 4),0xff);
    }
    if (param_1 != 0) {
        iVar8 = 0;
        do {
            puVar7 = *(iVar3 + 0x14);
            puVar9 = *(iVar8 + 0x50 + *(iVar3 + 0x10));
            for (iVar10 = *(iVar3 + 4); iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar7 = *puVar7 & *puVar9;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
            }
            iVar8 = iVar8 + 0x60;
            param_1 = param_1 - 1;
        } while (param_1 != 0);
        param_1 = uStack_4;
    }
    uVar4 = fcn.000135cc();
    iVar8 = *(iVar3 + 4);
    *(iVar3 + 0x18) = uVar4;
    puVar9 = fcn.00013609();
    puVar7 = *(iVar3 + 0x18);
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar7 = *puVar7 & *puVar9;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
    }
    puStack_8 = *(iVar3 + 4);
    uVar4 = *(iVar3 + 0x14);
    iVar8 = fcn.000135ed();
    (**(iVar8 + 0x30))(0x3b40,0x18,&puStack_8,uVar4);
    puStack_8 = *(iVar3 + 4);
    uVar4 = *(iVar3 + 0x18);
    iVar8 = fcn.000135ed();
    (**(iVar8 + 0x30))(0x3b40,0x19,&puStack_8,uVar4);
    uStack_20 = 0;
    if (param_1 != 0) {
        iStack_18 = 0;
        do {
            piVar11 = *(iVar3 + 8);
            iVar8 = *(iVar3 + 0x10) + iStack_18;
            if (piVar11 != iVar3 + 8) {
                do {
                    cVar2 = fcn.00010a84(*(iVar3 + 4));
                    if (cVar2 != '\0') {
                        iVar10 = fcn.000135cc();
                        piVar5 = iVar10 + 4;
                        *piVar5 = iVar8 + 0x54;
                        puVar1 = *(iVar8 + 0x58);
                        *(iVar10 + 8) = puVar1;
                        *puVar1 = piVar5;
                        *(iVar8 + 0x58) = piVar5;
                    }
                    piVar11 = *piVar11;
                } while (piVar11 != iVar3 + 8);
            }
            iVar10 = *(iVar3 + 0x10) + iStack_18;
            puVar1 = iVar8 + 0x54;
            for (puVar12 = *puVar1; puStack_8 = puVar12, puVar12 != puVar1; puVar12 = *puVar12) {
                cVar2 = fcn.00010a84(*(iVar3 + 4));
                if (cVar2 == '\0') {
                    iVar8 = (*puVar12[6])(uStack_20,iVar10,puVar12[0xd],0);
                    if (-1 < iVar8) goto code_r0x00010cfe;
                }
                else {
                    iVar8 = (*puVar12[6])(uStack_20,iVar10,puVar12[0xd],1);
                    if (iVar8 < 0) {
                        puVar7 = *(iVar3 + 0x18);
                        puVar9 = puVar12[2];
                        for (iVar8 = *(iVar3 + 4); iVar8 != 0; iVar8 = iVar8 + -1) {
                            *puVar7 = *puVar7 & ~*puVar9;
                            puVar9 = puVar9 + 1;
                            puVar7 = puVar7 + 1;
                        }
                    }
                    else {
code_r0x00010cfe:
                        if (*puVar12 == puVar1) {
                            iVar8 = 0;
                            iStack_10 = 0;
                            iStack_c = 0;
                        }
                        else {
                            iVar8 = fcn.000112f1((*puVar12)[2]);
                            iStack_10 = fcn.000112f1(puVar12[2]);
                            iStack_c = fcn.00011373(puVar1);
                            puVar12 = puStack_8;
                        }
                        iVar6 = fcn.00011373(puVar1);
                        if (iVar8 <= iStack_10) {
                            iVar8 = iStack_10;
                        }
                        if (iVar8 <= iVar6) {
                            iVar8 = iVar6;
                        }
                        if (iVar8 <= iStack_c) {
                            iVar8 = iStack_c;
                        }
                        if (1 < iVar8) {
                            fcn.00011bc6(0,0,-1,0,iVar8,iVar8 >> 0x1f);
                        }
                    }
                }
            }
            fcn.00010585();
            uStack_20 = uStack_20 + 1;
            iStack_18 = iStack_18 + 0x60;
        } while (uStack_20 < uStack_4);
    }
    return;
}


/* fcn.000105d6 @ 0x105d6 */

void fcn.000105d6(void)

{
    int iVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar1 = fcn.00010585();
    (**(*(iVar1 + 0x3c) + 0x18))(*(iVar1 + 0x3c),&var_4h);
    *(iVar1 + 0x2c) = var_4h;
    iVar2 = fcn.00010585();
    (**(*(iVar2 + 0x3c) + 0x1c))(*(iVar2 + 0x3c),0x11da,0,iVar2);
    iVar1 = *(iVar1 + 0x2c);
    if (iVar1 != var_4h) {
        iVar2 = fcn.00010585();
        (**(*(iVar2 + 0x3c) + 0x10))(*(iVar2 + 0x3c),iVar1,1);
    }
    return;
}


/* fcn.000104d4 @ 0x104d4 */

void fcn.000104d4(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0x3b80);
    return;
}


/* fcn.000104b2 @ 0x104b2 */

int fcn.000104b2(void)

{
    int iVar1;
    
    iVar1 = fcn.00010479();
    if (iVar1 != 0) {
        fcn.0001340f();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00010479 @ 0x10479 */

int32_t __fastcall fcn.00010479(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.0001340f @ 0x1340f */

uint * __fastcall fcn.0001340f(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00013b12 @ 0x13b12 */

uint fcn.00013b12(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.000103fb @ 0x103fb */

int32_t fcn.000103fb(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00013428 @ 0x13428 */

uint32_t __fastcall fcn.00013428(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x3b8c;
    if ((((*0x3b8c == *param_2) && (uVar1 = *0x3b90, *0x3b90 == param_2[1])) &&
        (uVar1 = *0x3b94, *0x3b94 == param_2[2])) && (uVar1 = *0x3b98, *0x3b98 == param_2[3])) {
        return CONCAT31(*0x3b98 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00010426 @ 0x10426 */

int16_t * __fastcall fcn.00010426(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00010447 @ 0x10447 */

uint fcn.00010447(void)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.000103fb();
    do {
        iVar2 = fcn.00010426();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00013428();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


/* fcn.000135b4 @ 0x135b4 */

int __fastcall fcn.000135b4(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0001357d();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.00010260(iVar1,param_1);
    return iVar1;
}


/* fcn.00010260 @ 0x10260 */

uint * fcn.00010260(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return param_1;
}


/* fcn.0001357d @ 0x1357d */

int32_t __fastcall fcn.0001357d(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),param_1,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* section..text @ 0x10220 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 14624 named .text
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.000137fb @ 0x137fb */

int __cdecl fcn.000137fb(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    uint uVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (in_ECX == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (in_ECX == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (in_ECX == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (in_ECX == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (in_ECX == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (in_ECX == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (in_ECX == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (in_ECX == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (in_ECX == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (in_ECX == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (in_ECX == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (in_ECX == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (in_ECX == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (in_ECX == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (in_ECX == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(in_ECX);
    }
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar4;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar3;
    }
    return in_ECX;
}


/* fcn.000104fd @ 0x104fd */

void __cdecl fcn.000104fd(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00013493 @ 0x13493 */

int32_t __fastcall fcn.00013493(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.0001052a(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.0001346b @ 0x1346b */

uint __fastcall fcn.0001346b(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00010260(param_1,param_2);
    return uVar1;
}


/* fcn.0001197f @ 0x1197f */

int fcn.0001197f(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    uint32_t uVar5;
    uint32_t uStack_3c;
    uchar auStack_38 [4];
    uint auStack_34 [13];
    
    iVar1 = fcn.000135ed();
    iVar1 = (**(iVar1 + 0x10))(0x3b40,0x60000010);
    if (iVar1 == 0) {
        iVar1 = fcn.00013493();
        fcn.00010260(iVar1,0x78);
        iVar2 = fcn.000135ed();
        (**(iVar2 + 0x2c))(0x3b40,0x60000010,iVar1,0);
        iVar2 = fcn.00010585();
        (***(iVar2 + 0x3c))(*(iVar2 + 0x3c),&uStack_3c,auStack_38);
        *(iVar1 + 0x24) = uStack_3c;
    }
    if ((*(iVar1 + 0x48) == 0 && *(iVar1 + 0x4c) == 0) || (*(iVar1 + 0x40) == 0 && *(iVar1 + 0x44) == 0)) {
        uStack_3c = *(iVar1 + 0x24);
        iVar2 = fcn.00013493();
        uVar5 = 0;
        if (uStack_3c != 0) {
            puVar4 = iVar2 + 8;
            do {
                iVar3 = fcn.00010585();
                (**(*(iVar3 + 0x3c) + 4))(*(iVar3 + 0x3c),uVar5,auStack_34);
                puVar4[1] = auStack_34[0];
                puVar4[-2] = 0;
                *puVar4 = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                *((uStack_3c + uVar5) * 0x18 + 0xc + iVar2) = auStack_34[0];
                *((uStack_3c + uVar5) * 0x18 + iVar2) = 0;
                *((uStack_3c + uVar5) * 0x18 + 8 + iVar2) = 0;
                iVar3 = (uStack_3c + uVar5) * 0x18;
                uVar5 = uVar5 + 1;
                *(iVar3 + 0x10 + iVar2) = 0;
                *(iVar3 + 0x14 + iVar2) = 0;
                puVar4 = puVar4 + 6;
            } while (uVar5 < uStack_3c);
        }
        if (*(iVar1 + 0x48) == 0 && *(iVar1 + 0x4c) == 0) {
            *(iVar1 + 0x48) = iVar2;
            *(iVar1 + 0x4c) = 0;
        }
        if (*(iVar1 + 0x40) == 0 && *(iVar1 + 0x44) == 0) {
            *(iVar1 + 0x44) = 0;
            *(iVar1 + 0x40) = uStack_3c * 0x18 + iVar2;
        }
    }
    return iVar1;
}


/* fcn.0001347c @ 0x1347c */

uint __fastcall fcn.0001347c(uint param_1,uint32_t param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000102a0(param_1,param_2 >> 2,0xffffffff);
    return uVar1;
}


/* fcn.000102a0 @ 0x102a0 */

uint * fcn.000102a0(uint *param_1,int param_2,uint param_3)

{
    uint *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00010556 @ 0x10556 */

void __cdecl fcn.00010556(uint32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.0001062a @ 0x1062a */

void __fastcall fcn.0001062a(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    fcn.000137fb(0,&uStack_8,&uStack_4);
    uVar3 = uStack_c >> 8 & 0xf;
    uVar2 = uVar3;
    if (uVar3 == 0xf) {
        uVar2 = uStack_c >> 0x10 & 0xff0 | 0xf;
    }
    uVar1 = uStack_c >> 4 & 0xf;
    if ((uVar3 == 6) || (uVar3 == 0xf)) {
        uVar1 = uVar1 | uStack_c >> 0xc & 0xf0;
    }
    *(param_1 + 0x34) = uVar2;
    *(param_1 + 0x38) = uVar1;
    *(param_1 + 0x40) = uStack_c >> 0xc & 3;
    *(param_1 + 0x44) = uStack_8;
    *(param_1 + 0x3c) = uStack_c & 0xf;
    *(param_1 + 0x48) = uStack_4;
    return;
}


/* fcn.00010280 @ 0x10280 */

uchar * fcn.00010280(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.000135cc @ 0x135cc */

void __fastcall fcn.000135cc(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0001357d();
    if ((iVar1 != 0) && (param_1 != 0)) {
        fcn.00013455(param_1);
    }
    return;
}


/* fcn.00013455 @ 0x13455 */

int __fastcall fcn.00013455(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00013609 @ 0x13609 */

void fcn.00013609(void)

{
    int iVar1;
    
    iVar1 = fcn.000135ed();
    (**(iVar1 + 0x14))(0x3b40,0x19);
    return;
}


/* fcn.000135ed @ 0x135ed */

int32_t __fastcall fcn.000135ed(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000104fd(param_1,&var_4h);
    return var_4h;
}


/* fcn.00010a84 @ 0x10a84 */

uchar __fastcall fcn.00010a84(uint8_t *param_1,int param_2,uint32_t param_3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    if (param_3 != 0) {
        param_2 = param_2 - param_1;
        do {
            puVar1 = param_1 + param_2;
            uVar2 = *param_1;
            param_1 = param_1 + 1;
            if ((*puVar1 & uVar2) != 0) {
                return 1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_3);
    }
    return 0;
}


/* fcn.000112f1 @ 0x112f1 */

uint __fastcall fcn.000112f1(int param_1,char param_2,int param_3)

{
    char cVar1;
    int iVar2;
    
    if (param_3 == 0) {
        return 0;
    }
    if (param_2 == '\0') {
        if ((*(param_1 + 0x34) != 0) && (cVar1 = fcn.00011270(), cVar1 != '\0')) {
            return 3;
        }
        if ((*(param_1 + 0x2c) == 0) || (cVar1 = fcn.00011270(), cVar1 == '\0')) {
            iVar2 = *(param_1 + 0x24);
            goto code_r0x0001135a;
        }
    }
    else {
        if ((*(param_1 + 0x30) != 0) && (cVar1 = fcn.00011270(), cVar1 != '\0')) {
            return 3;
        }
        if ((*(param_1 + 0x28) == 0) || (cVar1 = fcn.00011270(), cVar1 == '\0')) {
            iVar2 = *(param_1 + 0x20);
code_r0x0001135a:
            if ((iVar2 != 0) && (cVar1 = fcn.00011270(), cVar1 != '\0')) {
                return 1;
            }
            return 0;
        }
    }
    return 2;
}


/* fcn.00011373 @ 0x11373 */

uint __cdecl fcn.00011373(int32_t arg_8h)

{
    char cVar1;
    int in_ECX;
    char in_DL;
    
    if (in_DL == '\0') {
        if ((*(in_ECX + 0x34) == 0) || (cVar1 = fcn.000112a0(1,*(in_ECX + 0x34)), cVar1 == '\0')) {
            if ((*(in_ECX + 0x2c) != 0) && (cVar1 = fcn.000112a0(1,*(in_ECX + 0x2c)), cVar1 != '\0')) {
                return 2;
            }
            if (*(in_ECX + 0x24) == 0) {
                return 0;
            }
            cVar1 = fcn.000112a0(1,*(in_ECX + 0x24));
            if (cVar1 != '\0') {
                return 1;
            }
            return 0;
        }
    }
    else if ((*(in_ECX + 0x30) == 0) || (cVar1 = fcn.000112a0(0,*(in_ECX + 0x30)), cVar1 == '\0')) {
        if ((*(in_ECX + 0x28) != 0) && (cVar1 = fcn.000112a0(0,*(in_ECX + 0x28)), cVar1 != '\0')) {
            return 2;
        }
        if ((*(in_ECX + 0x20) != 0) && (cVar1 = fcn.000112a0(0,*(in_ECX + 0x20)), cVar1 != '\0')) {
            return 1;
        }
        return 0;
    }
    return 3;
}


/* fcn.00011bc6 @ 0x11bc6 */

void __cdecl
fcn.00011bc6(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    int8_t arg_14h_00;
    char cVar1;
    int32_t in_EDX;
    int8_t var_8h;
    int8_t var_4h;
    
    arg_14h_00 = fcn.000138da(arg_10h,arg_14h);
    cVar1 = fcn.00013920(arg_10h,arg_14h);
    fcn.00011b0f(in_EDX,arg_8h,arg_ch,arg_14h_00,cVar1 + ('\x01' - arg_14h_00),arg_18h,arg_1ch,0);
    return;
}


/* fcn.000138da @ 0x138da */

int __cdecl fcn.000138da(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int iVar2;
    
    if (arg_8h == 0 && arg_ch == 0) {
        iVar2 = -1;
    }
    else {
        iVar2 = 0;
        uVar1 = arg_8h;
        while ((uVar1 & 1) == 0) {
            iVar2 = iVar2 + 1;
            uVar1 = arg_8h >> 1;
            arg_8h = uVar1 | arg_ch << 0x1f;
            arg_ch = arg_ch >> 1;
        }
    }
    return iVar2;
}


/* fcn.00013920 @ 0x13920 */

//WARNING: Possible PIC construction at 0x00013933: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00013938)

int fcn.00013920(int param_1,int param_2)

{
    int iVar1;
    
    if (param_2 != 0) {
        param_1 = param_2;
    }
    if (param_1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < param_1; param_1 = param_1 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.00011b0f @ 0x11b0f */

//WARNING: Removing unreachable block (ram,0x00011b7e)

void __cdecl
fcn.00011b0f(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int8_t arg_14h,int8_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h,int8_t arg_24h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    char in_CL;
    int in_EDX;
    uint32_t *puVar5;
    
    iVar3 = fcn.00010585();
    if (*(iVar3 + 0x24) == 0) {
        iVar4 = fcn.0001197f();
        *(iVar3 + 0x24) = *(iVar4 + 0x48);
        *(iVar3 + 0x28) = *(iVar4 + 0x40);
    }
    if (in_CL == '\0') {
        iVar3 = *(iVar3 + 0x24);
    }
    else {
        iVar3 = *(iVar3 + 0x28);
    }
    puVar5 = in_EDX * 0x18 + iVar3;
    if (*puVar5 == puVar5[2] / 0x18) {
        fcn.00011ac6();
    }
    uVar1 = puVar5[4];
    *(*puVar5 * 0x18 + uVar1) = arg_8h;
    *(*puVar5 * 0x18 + 4 + uVar1) = arg_ch;
    *(*puVar5 * 0x18 + 0xc + uVar1) = arg_10h;
    *(*puVar5 * 0x18 + 8 + uVar1) = arg_14h;
    *(*puVar5 * 0x18 + 9 + uVar1) = arg_18h;
    uVar2 = *puVar5;
    *(uVar2 * 0x18 + 0x10 + uVar1) = arg_1ch;
    *(uVar2 * 0x18 + 0x14 + uVar1) = arg_20h;
    *(*puVar5 * 0x18 + 10 + uVar1) = arg_24h;
    *puVar5 = *puVar5 + 1;
    return;
}


/* fcn.00010dd9 @ 0x10dd9 */

void __fastcall fcn.00010dd9(int *param_1)

{
    int iVar1;
    int iVar2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    do {
        do {
            iVar1 = *param_1;
        } while (iVar1 == 0);
        LOCK();
        if (iVar1 == *param_1) {
            *param_1 = iVar1 + -1;
            iVar2 = iVar1;
        }
        else {
            iVar2 = *param_1;
        }
        UNLOCK();
    } while (iVar2 != iVar1);
    return;
}


/* fcn.0001330b @ 0x1330b */

int * __fastcall fcn.0001330b(int *param_1)

{
    int iVar1;
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    iVar1 = 1;
    LOCK();
    if (*param_1 == 1) {
        *param_1 = 2;
    }
    else {
        iVar1 = *param_1;
    }
    UNLOCK();
    if (iVar1 != 1) {
        rdtsc();
        fcn.00013396();
        while( true ) {
            iVar1 = 1;
            LOCK();
            if (*param_1 == 1) {
                *param_1 = 2;
            }
            else {
                iVar1 = *param_1;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            rdtsc();
        }
    }
    return param_1;
}


/* fcn.00013661 @ 0x13661 */

uint32_t __fastcall fcn.00013661(uint32_t param_1,uint8_t param_2,uint8_t param_3,uint param_4,int param_5)

{
    uint32_t uVar1;
    
    uVar1 = ~(-2 << (param_3 & 0x1f));
    return ~(-1 << (param_2 & 0x1f) & uVar1) & param_1 | param_5 << (param_2 & 0x1f) & uVar1;
}


/* fcn.00010e0c @ 0x10e0c */

uint __cdecl fcn.00010e0c(int32_t arg_8h)

{
    int in_ECX;
    char in_DL;
    uint in_CR0;
    uint in_CR2;
    uint in_CR3;
    uint in_CR4;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        if (in_DL == '\0') {
            return 0;
        }
    }
    else if (in_ECX == 2) {
        if (in_DL == '\0') {
            return 0;
        }
        in_CR0 = in_CR2;
    }
    else if (in_ECX == 3) {
        if (in_DL == '\0') {
            return 0;
        }
        in_CR0 = in_CR3;
    }
    else {
        if (in_ECX != 4) {
            return 0x80000003;
        }
        if (in_DL == '\0') {
            return 0;
        }
        in_CR0 = in_CR4;
    }
    *arg_8h = in_CR0;
    return 0;
}


/* fcn.0001368e @ 0x1368e */

ulong __cdecl fcn.0001368e(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t in_CL;
    uint8_t in_DL;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = 0;
    uVar3 = 0xfffffffe;
    if ((in_DL & 0x20) == 0) {
        uVar3 = 0xffffffff;
        uVar1 = 0xfffffffe;
    }
    uVar3 = arg_ch & ~(uVar3 << (in_DL & 0x1f) | uVar1 >> 0x20 - (in_DL & 0x1f));
    uVar2 = uVar3;
    uVar4 = 0;
    if ((in_CL & 0x20) == 0) {
        uVar2 = arg_8h & ~(uVar1 << (in_DL & 0x1f));
        uVar4 = uVar3;
    }
    return CONCAT44(uVar4 >> (in_CL & 0x1f),uVar2 >> (in_CL & 0x1f) | uVar4 << 0x20 - (in_CL & 0x1f));
}


/* fcn.000136e1 @ 0x136e1 */

void __thiscall fcn.000136e1(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    fcn.000137c8(param_2,param_3,param_1,param_1,param_4,param_5,param_1);
    return;
}


/* fcn.000137c8 @ 0x137c8 */

void fcn.000137c8(int32_t param_1,int32_t param_2,uint param_3,uint param_4,int32_t param_5,int32_t param_6)

{
    ulong uVar1;
    
    uVar1 = fcn.0001375d(param_1,param_2);
    fcn.000136fe(uVar1,uVar1 >> 0x20,param_5,param_6);
    return;
}


/* fcn.0001375d @ 0x1375d */

ulong __cdecl fcn.0001375d(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t in_CL;
    uint8_t in_DL;
    uint32_t uVar3;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = 0;
    if ((in_CL & 0x20) == 0) {
        uVar1 = 0xffffffff;
    }
    uVar2 = 0;
    uVar3 = 0xfffffffe;
    if ((in_DL & 0x20) == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0xfffffffe;
    }
    return CONCAT44(~(~(uVar3 << (in_DL & 0x1f) | uVar2 >> 0x20 - (in_DL & 0x1f)) &
                     (-1 << (in_CL & 0x1f) | uVar1 >> 0x20 - (in_CL & 0x1f))) & arg_ch,
                    ~(~(uVar2 << (in_DL & 0x1f)) & uVar1 << (in_CL & 0x1f)) & arg_8h);
}


/* fcn.000136fe @ 0x136fe */

ulong __cdecl fcn.000136fe(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t in_CL;
    uint8_t in_DL;
    uint32_t uVar3;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = 0;
    if ((in_CL & 0x20) == 0) {
        uVar1 = arg_10h;
        arg_10h = arg_14h;
    }
    uVar2 = 0;
    uVar3 = 0xfffffffe;
    if ((in_DL & 0x20) == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0xfffffffe;
    }
    return CONCAT44(~(uVar3 << (in_DL & 0x1f) | uVar2 >> 0x20 - (in_DL & 0x1f)) &
                    (arg_10h << (in_CL & 0x1f) | uVar1 >> 0x20 - (in_CL & 0x1f)) | arg_ch,
                    ~(uVar2 << (in_DL & 0x1f)) & uVar1 << (in_CL & 0x1f) | arg_8h);
}


/* fcn.0001361b @ 0x1361b */

ulong __cdecl fcn.0001361b(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint in_ECX;
    ulong uVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = rdmsr(in_ECX);
    uVar1 = fcn.000136e1(uVar1,uVar1 >> 0x20,arg_ch,arg_10h);
    wrmsr(in_ECX,uVar1);
    return uVar1;
}


/* fcn.00013a7a @ 0x13a7a */

uint32_t fcn.00013a7a(void)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00013a54();
    if (iVar1 == 1) {
        fcn.000137fb(0,0,0);
        if (10 < var_8h) {
            fcn.0001393c(0xb,&var_4h,0,&var_ch);
            if (var_4h != 0) {
                return var_ch;
            }
        }
        fcn.000137fb(&var_4h,0,0);
        uVar2 = var_4h >> 0x18;
    }
    else {
        uVar2 = fcn.00013ae9();
    }
    return uVar2;
}


/* fcn.00010e9f @ 0x10e9f */

//WARNING: Removing unreachable block (ram,0x0001107d)

void __cdecl fcn.00010e9f(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    int *piVar2;
    uint uVar3;
    int iVar4;
    uint32_t *in_ECX;
    int *in_EDX;
    uint32_t uVar5;
    int *piVar6;
    int iVar7;
    int32_t iVar8;
    ulong uVar9;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    if (*in_ECX != 0) {
        piVar6 = in_ECX[4] + 0x10;
        do {
            iVar8 = var_4h;
            iVar4 = piVar6[-4];
            if (iVar4 != 0) {
                if (iVar4 == 1) {
                    iVar4 = fcn.00010e0c(&var_8h);
                    if (-1 < iVar4) {
                        if (*(piVar6 + -6) != '\0') {
                            uVar9 = fcn.0001368e(var_8h,0);
                            if ((uVar9 == *piVar6) && (uVar9 >> 0x20 == piVar6[1])) goto code_r0x00010f8c;
                        }
                        var_8h = fcn.000136e1(var_8h,0,*piVar6,piVar6[1]);
                        fcn.00010e0c(&var_8h);
                    }
                }
                else {
                    if (iVar4 == 2) {
                        fcn.0001330b();
                        puVar1 = piVar6[-3];
                        uVar3 = fcn.00013661((*(piVar6 + -7) - 1) + *(piVar6 + -2),*puVar1,*piVar6);
                        *puVar1 = uVar3;
                        *arg_ch = 1;
                    }
                    else {
                        if ((iVar4 == 3) || (iVar4 != 4)) goto code_r0x00010f8c;
                        if ((*piVar6 == 2) && (piVar6[1] == 0)) {
                            iVar4 = *(arg_8h + 0x18);
                            iVar7 = *(arg_8h + 4) * *in_EDX + in_EDX[1];
                            uVar5 = 0;
                            if (*(arg_8h + 8) != 0) {
                                piVar2 = *(arg_ch + 4) + *(arg_8h + 8) * iVar7 * 4;
                                do {
                                    LOCK();
                                    *piVar2 = *piVar2 + 1;
                                    UNLOCK();
                                    uVar5 = uVar5 + 1;
                                    piVar2 = piVar2 + 1;
                                } while (uVar5 < *(arg_8h + 8));
                            }
                            uVar5 = 0;
                            if (*(iVar7 + iVar4) == '\0') goto code_r0x000111d2;
                            do {
                                fcn.00010dd9();
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < *(iVar7 + iVar4));
                        }
                        else {
                            if ((*piVar6 != 3) || (piVar6[1] != 0)) goto code_r0x00010f8c;
                            iVar4 = *(arg_8h + 0x10);
                            iVar7 = *(arg_8h + 4) * *(arg_8h + 8);
                            uVar5 = 0;
                            if (iVar7 != 0) {
                                piVar2 = *(arg_ch + 8) + *in_EDX * iVar7 * 4;
                                do {
                                    LOCK();
                                    *piVar2 = *piVar2 + 1;
                                    UNLOCK();
                                    uVar5 = uVar5 + 1;
                                    piVar2 = piVar2 + 1;
                                } while (uVar5 < *(arg_8h + 4) * *(arg_8h + 8));
                            }
                            uVar5 = 0;
                            if (*(iVar4 + *in_EDX * 4) != 0) {
                                do {
                                    fcn.00010dd9();
                                    uVar5 = uVar5 + 1;
                                } while (uVar5 < *(iVar4 + *in_EDX * 4));
                            }
                        }
                    }
                    iVar8 = var_4h;
                }
                goto code_r0x00010f8c;
            }
            if (*(piVar6 + -6) == '\0') {
code_r0x00011160:
                iVar8 = var_4h;
                if (*(piVar6 + -7) < 0x40) {
                    fcn.0001361b((*(piVar6 + -7) - 1) + *(piVar6 + -2),*piVar6,piVar6[1]);
                }
                else {
                    wrmsr(piVar6[-3],*piVar6);
                }
            }
            else {
                uVar9 = rdmsr(piVar6[-3]);
                var_8h = uVar9;
                if (*(piVar6 + -7) < 0x40) {
                    uVar9 = fcn.0001368e(var_8h,0);
                    if ((uVar9 != *piVar6) || (iVar8 = var_4h, uVar9 >> 0x20 != piVar6[1])) goto code_r0x00011160;
                }
                else {
                    if ((var_8h != *piVar6) || (piVar6[1] != 0)) goto code_r0x00011160;
code_r0x000111d2:
                }
            }
code_r0x00010f8c:
            var_4h = iVar8 + 1;
            piVar6 = piVar6 + 6;
        } while (var_4h < *in_ECX);
    }
    return;
}


/* fcn.00011270 @ 0x11270 */

uint __fastcall fcn.00011270(uint8_t *param_1,int param_2)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar3 = fcn.00010585();
    uVar4 = 0;
    if (*(iVar3 + 4) != 0) {
        param_2 = param_2 - param_1;
        do {
            puVar1 = param_1 + param_2;
            uVar2 = *param_1;
            param_1 = param_1 + 1;
            if ((*puVar1 & uVar2) != 0) {
                return 1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 4));
    }
    return 0;
}


/* fcn.000112a0 @ 0x112a0 */

uchar __fastcall fcn.000112a0(uint *param_1,uint *param_2,char param_3)

{
    char cVar1;
    
    if (param_3 == '\0') {
        param_2 = *param_2;
        if ((param_2 != param_1) && (*param_2 != param_1)) goto code_r0x000112bc;
    }
    else {
        param_2 = param_2[1];
        if ((param_2 != param_1) && (param_2[1] != param_1)) {
            param_2 = param_2 + 1;
code_r0x000112bc:
            do {
                param_2 = *param_2;
                while( true ) {
                    if (param_2 == param_1) {
                        return 0;
                    }
                    cVar1 = fcn.00011270();
                    if (cVar1 != '\0') {
                        return 1;
                    }
                    if (param_3 == '\0') break;
                    param_2 = param_2[1];
                }
            } while( true );
        }
    }
    return 0;
}


/* fcn.0001143d @ 0x1143d */

void __fastcall fcn.0001143d(int *param_1,int *param_2,int *param_3,char param_4)

{
    uint *puVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    
    piVar4 = param_2 + 1;
    if (param_4 == '\0') {
        piVar4 = param_2;
    }
    piVar4 = *piVar4;
    *(*param_3 + 4) = param_3[1];
    *param_3[1] = *param_3;
    if (piVar4 != param_1) {
        iVar2 = fcn.000112f1(param_2[2]);
        iVar3 = fcn.000112f1(param_2[2]);
        if ((iVar2 != 0) && (iVar3 <= iVar2)) {
            if (param_4 != '\0') {
                *param_3 = piVar4;
                puVar1 = piVar4[1];
                param_3[1] = puVar1;
                *puVar1 = param_3;
                piVar4[1] = param_3;
                return;
            }
            iVar2 = *piVar4;
            *param_3 = iVar2;
            param_3[1] = piVar4;
            *(iVar2 + 4) = param_3;
            *piVar4 = param_3;
            return;
        }
    }
    if (param_4 == '\0') {
        iVar2 = *param_2;
        *param_3 = iVar2;
        param_3[1] = param_2;
        *(iVar2 + 4) = param_3;
        *param_2 = param_3;
    }
    else {
        *param_3 = param_2;
        puVar1 = param_2[1];
        param_3[1] = puVar1;
        *puVar1 = param_3;
        param_2[1] = param_3;
    }
    return;
}


/* fcn.000114e0 @ 0x114e0 */

uchar __fastcall fcn.000114e0(uint *param_1,uint *param_2)

{
    char cVar1;
    
    param_1 = *param_1;
    while( true ) {
        if (param_1 == param_2) {
            return 0;
        }
        cVar1 = fcn.00011270();
        if (cVar1 != '\0') break;
        param_1 = *param_1;
    }
    fcn.0001143d(param_2,1);
    return 1;
}


/* fcn.0001151e @ 0x1151e */

uchar __fastcall fcn.0001151e(uint *param_1,uint *param_2)

{
    char cVar1;
    uint *puVar2;
    
    puVar2 = *param_2;
    while( true ) {
        if (puVar2 == param_1) {
            return 0;
        }
        cVar1 = fcn.00011270();
        if (cVar1 != '\0') break;
        puVar2 = *puVar2;
    }
    fcn.0001143d(param_2,0);
    return 1;
}


/* fcn.000102c0 @ 0x102c0 */

int fcn.000102c0(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.0001155b @ 0x1155b */

void __fastcall fcn.0001155b(int *param_1)

{
    int *piVar1;
    uint *puVar2;
    int iVar3;
    int *piVar4;
    char cVar5;
    int *piVar6;
    
    piVar4 = *param_1;
joined_r0x00011563:
    do {
        if (piVar4 == param_1) {
            return;
        }
        piVar1 = *piVar4;
        if (piVar4[0xe] != '\0') {
            for (piVar6 = *param_1; piVar6 != piVar4; piVar6 = *piVar6) {
                if (piVar6[0xe] == '\0') {
                    piVar1[1] = piVar4[1];
                    *piVar4[1] = *piVar4;
                    *piVar4 = piVar6;
                    puVar2 = piVar6[1];
                    piVar4[1] = puVar2;
                    *puVar2 = piVar4;
                    piVar6[1] = piVar4;
                    piVar4 = piVar1;
                    goto joined_r0x00011563;
                }
            }
        }
        if (*(piVar4 + 0x39) != '\0') {
            for (piVar6 = piVar1; piVar6 != param_1; piVar6 = *piVar6) {
                if (*(piVar6 + 0x39) == '\0') {
                    piVar1[1] = piVar4[1];
                    *piVar4[1] = *piVar4;
                    iVar3 = *piVar6;
                    *piVar4 = iVar3;
                    piVar4[1] = piVar6;
                    *(iVar3 + 4) = piVar4;
                    *piVar6 = piVar4;
                    piVar4 = piVar1;
                    goto joined_r0x00011563;
                }
            }
        }
        if ((((piVar4[7] == 0) || (cVar5 = fcn.000114e0(piVar4[7]), cVar5 == '\0')) &&
            ((piVar4[8] == 0 || (cVar5 = fcn.0001151e(piVar4[8]), cVar5 == '\0')))) &&
           ((((piVar4[9] == 0 || (cVar5 = fcn.000114e0(piVar4[9]), cVar5 == '\0')) &&
             ((piVar4[10] == 0 || (cVar5 = fcn.0001151e(piVar4[10]), cVar5 == '\0')))) &&
            (((piVar4[0xb] == 0 || (cVar5 = fcn.000114e0(piVar4[0xb]), cVar5 == '\0')) &&
             ((piVar4[0xc] == 0 || (cVar5 = fcn.0001151e(piVar4[0xc]), cVar5 == '\0')))))))) {
            piVar4 = *piVar4;
        }
    } while( true );
}


/* fcn.00013875 @ 0x13875 */

uint __thiscall fcn.00013875(char *param_1,char *param_2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == NULL) {
        uVar2 = 0x80000002;
    }
    else {
        uVar3 = fcn.00013858();
        if (uVar3 < 0x80) {
            cVar1 = fcn.00013832(param_2,uVar3 + 1);
            if (cVar1 == '\0') {
                cVar1 = *param_2;
                if (cVar1 != '\0') {
                    iVar4 = param_2 - param_1;
                    do {
                        *param_1 = cVar1;
                        param_1 = param_1 + 1;
                        cVar1 = param_1[iVar4];
                    } while (cVar1 != '\0');
                }
                *param_1 = '\0';
                uVar2 = 0;
            }
            else {
                uVar2 = 0x8000000f;
            }
        }
        else {
            uVar2 = 0x80000005;
        }
    }
    return uVar2;
}


/* fcn.00013858 @ 0x13858 */

uint32_t __fastcall fcn.00013858(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if ((param_1 != NULL) && (*param_1 != '\0')) {
        while (uVar1 < 0x7f) {
            uVar1 = uVar1 + 1;
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0x80;
    }
    return uVar1;
}


/* fcn.00013832 @ 0x13832 */

uint32_t __thiscall fcn.00013832(uint32_t param_1,uint32_t param_2,int param_3)

{
    uint32_t uVar1;
    
    if (param_2 <= param_1) {
        uVar1 = param_3 + param_2;
        if (param_1 < uVar1) goto code_r0x00013852;
        if (param_2 < param_1) goto code_r0x00013855;
    }
    uVar1 = param_1 + 0x80;
    if (uVar1 <= param_2) {
code_r0x00013855:
        return uVar1 & 0xffffff00;
    }
code_r0x00013852:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.0001175e @ 0x1175e */

void __fastcall fcn.0001175e(int *param_1,uint32_t param_2)

{
    int iVar1;
    uint8_t *puVar2;
    
    iVar1 = *param_1;
    if (iVar1 == 0) {
        iVar1 = fcn.000135b4();
        *param_1 = iVar1;
    }
    puVar2 = iVar1 + (param_2 >> 3);
    *puVar2 = *puVar2 | 1 << (param_2 & 7);
    return;
}


/* fcn.00011673 @ 0x11673 */

uint __fastcall fcn.00011673(int *param_1,int param_2)

{
    int *piVar1;
    uint *puVar2;
    int iVar3;
    int *piVar4;
    
    piVar1 = param_1 + 2;
    piVar4 = *piVar1;
    do {
        if (piVar4 == piVar1) {
            piVar4 = param_2 + 4;
            *piVar4 = piVar1;
            puVar2 = param_1[3];
            *(param_2 + 8) = puVar2;
            *puVar2 = piVar4;
            param_1[3] = piVar4;
            *param_1 = *param_1 + 1;
code_r0x000116c0:
            fcn.0001155b();
            return 0;
        }
        if ((param_1[1] == 0) || (*(param_2 + 0xc) == piVar4[2])) {
            iVar3 = 0;
        }
        else {
            iVar3 = fcn.000102c0(*(param_2 + 0xc),piVar4[2],param_1[1]);
        }
        if (iVar3 == 0) {
            if (*(param_2 + 0x14) != 0) {
                piVar4[4] = *(param_2 + 0x14);
            }
            if (*(param_2 + 0x18) != 0) {
                piVar4[5] = *(param_2 + 0x18);
            }
            if (*(param_2 + 0x1c) != 0) {
                piVar4[6] = *(param_2 + 0x1c);
            }
            if (*(param_2 + 0x10) != 0) {
                if (piVar4[3] == 0) {
                    iVar3 = fcn.0001357d();
                    piVar4[3] = iVar3;
                }
                fcn.00013875(*(param_2 + 0x10));
            }
            if (*(param_2 + 0x20) != 0) {
                piVar4[7] = *(param_2 + 0x20);
            }
            if (*(param_2 + 0x24) != 0) {
                piVar4[8] = *(param_2 + 0x24);
            }
            if (*(param_2 + 0x28) != 0) {
                piVar4[9] = *(param_2 + 0x28);
            }
            if (*(param_2 + 0x2c) != 0) {
                piVar4[10] = *(param_2 + 0x2c);
            }
            if (*(param_2 + 0x30) != 0) {
                piVar4[0xb] = *(param_2 + 0x30);
            }
            if (*(param_2 + 0x34) != 0) {
                piVar4[0xc] = *(param_2 + 0x34);
            }
            *(piVar4 + 0xe) = *(param_2 + 0x3c);
            *(piVar4 + 0x39) = *(param_2 + 0x3d);
            goto code_r0x000116c0;
        }
        piVar4 = *piVar4;
    } while( true );
}


/* fcn.00011ac6 @ 0x11ac6 */

void __fastcall fcn.00011ac6(int param_1)

{
    uint uVar1;
    
    uVar1 = fcn.00013493();
    if (*(param_1 + 8) != 0) {
        fcn.00013455(*(param_1 + 8));
        fcn.00010556(*(param_1 + 0x10),0);
    }
    *(param_1 + 8) = *(param_1 + 8) + 0x1000;
    *(param_1 + 0x14) = 0;
    *(param_1 + 0x10) = uVar1;
    return;
}


/* fcn.00011c71 @ 0x11c71 */

uint32_t __fastcall fcn.00011c71(uint32_t param_1)

{
    uint32_t in_EAX;
    int iVar1;
    
    if (7 < param_1 >> 3) {
        return in_EAX & 0xffffff00;
    }
    iVar1 = 1 << (param_1 & 7);
    return CONCAT31(iVar1 >> 8,(*((param_1 >> 3) + 0x3ba0) & iVar1) != 0);
}


/* fcn.0001178a @ 0x1178a */

uint fcn.0001178a(int param_1,uint param_2,uint param_3,uint param_4,uint32_t param_5)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint *puVar5;
    uint uVar6;
    uint32_t *puVar7;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    uStack_8 = 0;
    uStack_8._0_1_ = 0;
    uStack_4 = 0;
    uStack_4._0_1_ = 0;
    piVar2 = fcn.00010585();
    if (*piVar2 == 0) {
        piVar1 = piVar2 + 2;
        *piVar1 = piVar1;
        piVar2[3] = piVar1;
        piVar2[0xc] = 1;
        iVar3 = fcn.000135ed();
        iVar3 = (**(iVar3 + 0x1c))(0x3b40,0x19);
        piVar2[1] = iVar3;
    }
    if (param_5 != 0xffffffff) {
        puVar7 = &param_5;
        uVar4 = param_5;
        do {
            if (uVar4 < 0x2000000) {
                uStack_8 = uVar4 >> 0x17 & 0xffffff01;
                uStack_4 = uVar4 >> 0x18 & 0xffffff01;
code_r0x000118a7:
                fcn.0001175e(piVar2[1]);
            }
            else if (((((uVar4 & 0x2000000) != 0) || ((uVar4 & 0x4000000) != 0)) || ((uVar4 & 0x8000000) != 0)) ||
                    ((((uVar4 & 0x10000000) != 0 || ((uVar4 & 0x20000000) != 0)) || ((uVar4 & 0x40000000) != 0))))
            goto code_r0x000118a7;
            puVar7 = puVar7 + 1;
            uVar4 = *puVar7;
        } while (uVar4 != 0xffffffff);
    }
    puVar5 = fcn.000135b4();
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(puVar5 + 0xf) = uStack_8;
    *(puVar5 + 0x3d) = uStack_4;
    puVar5[5] = param_2;
    puVar5[6] = param_3;
    *puVar5 = 0x53454643;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[7] = param_4;
    if (param_1 != 0) {
        uVar6 = fcn.0001357d();
        puVar5[4] = uVar6;
        fcn.00013875(param_1);
    }
    fcn.00011673();
    return 0;
}


/* fcn.00011fb7 @ 0x11fb7 */

uint32_t fcn.00011fb7(uint param_1,int param_2)

{
    uint32_t uVar1;
    unkuint3 Var2;
    
    uVar1 = *(param_2 + 0x48);
    Var2 = uVar1 >> 0xf;
    if ((uVar1 >> 7 & 1) == 0) {
        return Var2 << 8;
    }
    return CONCAT31(Var2,uVar1 >> 0xe) & 0xffffff01;
}


/* fcn.00011c1f @ 0x11c1f */

void __cdecl
fcn.00011c1f(uint noname_0,uint noname_1,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    int8_t arg_14h_00;
    char cVar1;
    char extraout_DL;
    int8_t var_8h;
    int8_t var_4h;
    
    arg_14h_00 = fcn.000138da(arg_10h,arg_14h);
    cVar1 = fcn.00013920(arg_10h,arg_14h);
    fcn.00011b0f(0,0x3a,0,arg_14h_00,cVar1 + ('\x01' - extraout_DL),arg_18h,arg_1ch,1);
    return;
}


/* fcn.00013a54 @ 0x13a54 */

char __fastcall fcn.00013a54(uint param_1)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.000139ae(param_1,param_1);
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.0001393c @ 0x1393c */

//WARNING: Removing unreachable block (ram,0x0001395c)

int __cdecl fcn.0001393c(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int in_ECX;
    uint uVar2;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        iVar1 = cpuid_basic_info(0);
    }
    else if (in_ECX == 1) {
        iVar1 = cpuid_Version_info(1);
    }
    else if (in_ECX == 2) {
        iVar1 = cpuid_cache_tlb_info(2);
    }
    else if (in_ECX == 3) {
        iVar1 = cpuid_serial_info(3);
    }
    else if (in_ECX == 4) {
        iVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (in_ECX == 5) {
        iVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (in_ECX == 6) {
        iVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (in_ECX == 7) {
        iVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (in_ECX == 9) {
        iVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (in_ECX == 10) {
        iVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (in_ECX == 0xb) {
        iVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (in_ECX == 0xd) {
        iVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (in_ECX == 0xf) {
        iVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (in_ECX == -0x7ffffffe) {
        iVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (in_ECX == -0x7ffffffd) {
        iVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (in_ECX == -0x7ffffffc) {
        iVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        iVar1 = cpuid(in_ECX);
    }
    uVar3 = *(iVar1 + 8);
    uVar2 = *(iVar1 + 0xc);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 4);
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    if (arg_14h != 0) {
        *arg_14h = uVar3;
    }
    return in_ECX;
}


/* fcn.000134b8 @ 0x134b8 */

uint32_t __fastcall fcn.000134b8(uint param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_8;
    int32_t iStack_4;
    
    if (param_2 != 0) {
        if (param_3 < 0x1001) {
            iVar1 = fcn.0001052a(&uStack_8);
            if (-1 < iVar1) {
                return uStack_8;
            }
        }
        else {
            iVar1 = fcn.0001052a(&uStack_8);
            if (-1 < iVar1) {
                uVar2 = uStack_8 + (param_3 - 1) & ~(param_3 - 1);
                iVar1 = ((uVar2 - uStack_8 & 0xfff) != 0) + (uVar2 - uStack_8 >> 0xc);
                if (iVar1 != 0) {
                    fcn.00010556(uStack_8,iStack_4);
                }
                iStack_4 = 0;
                uStack_8 = param_2 * 0x1000 + uVar2;
                if (((param_3 >> 0xc) + ((param_3 & 0xfff) != 0) + param_2) - iVar1 != param_2) {
                    fcn.00010556(uStack_8,0);
                }
                return uVar2;
            }
        }
    }
    return 0;
}


/* fcn.00012f4d @ 0x12f4d */

void fcn.00012f4d(void)

{
    char cVar1;
    
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c48,0,0x2f4a,0,0xe,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c50,0,0x2f4a,0,0xf,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c60,0,0x2f4a,0,0x10,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bb8,0,0x2f4a,0,3,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bc8,0,0x2f4a,0,6,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c74,0,0x2f4a,0,9,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bfc,0,0x2f4a,0,0xb,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3bc0,0,0x2f4a,0,4,0xffffffff);
    }
    cVar1 = fcn.00011c71();
    if (cVar1 != '\0') {
        fcn.0001178a(0x3c6c,0x227c,0x327f,0x3290,0x2b,0xffffffff);
    }
    return;
}


/* fcn.00013396 @ 0x13396 */

ulong fcn.00013396(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.000137fb(&var_8h,&var_ch,0);
    if ((var_4h == 0) || (var_8h == 0)) {
        uVar3 = 0;
        uVar2 = 0;
    }
    else {
        var_18h = 24000000;
        if (var_ch != 0) {
            var_18h = var_ch;
        }
        uVar1 = var_8h * var_18h + (var_4h >> 1);
        var_14h = uVar1 >> 0x20;
        uVar2 = var_14h / var_4h;
        uVar3 = (var_14h % var_4h << 0x20 | uVar1 & 0xffffffff) / var_4h;
    }
    return CONCAT44(uVar2,uVar3);
}


/* fcn.0001052a @ 0x1052a */

void __cdecl fcn.0001052a(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000139ae @ 0x139ae */

uint __fastcall fcn.000139ae(uint32_t param_1)

{
    uint uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    fcn.000137fb(0,0,0);
    uVar2 = param_1 >> 8 & 0xf;
    if ((uVar2 == 4) || (uVar2 == 5)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.000139e2 @ 0x139e2 */

//WARNING: Removing unreachable block (ram,0x00013a14)
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint32_t __fastcall fcn.000139e2(uint param_1)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    cVar2 = fcn.000139ae(param_1,param_1);
    if (cVar2 == '\0') {
        uVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        uVar3 = uVar1 & 0xfffff000;
    }
    return uVar3;
}


/* fcn.00013ae9 @ 0x13ae9 */

uint32_t fcn.00013ae9(void)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = fcn.00013a2b();
    iVar2 = fcn.00013a54();
    uVar3 = uVar1;
    if ((iVar2 == 1) && (uVar3 = fcn.00013a7a(), uVar3 < 0x100)) {
        uVar3 = uVar1 >> 0x18;
    }
    return uVar3;
}


/* fcn.00013a2b @ 0x13a2b */

//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.00013a2b(uint param_1)

{
    ulong uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_4h;
    
    iVar2 = fcn.00013a54(param_1,param_1);
    if (iVar2 == 1) {
        iVar2 = fcn.000139e2();
        uVar3 = *(iVar2 + 0x20);
    }
    else {
        uVar1 = rdmsr(0x802);
        uVar3 = uVar1;
    }
    return uVar3;
}


