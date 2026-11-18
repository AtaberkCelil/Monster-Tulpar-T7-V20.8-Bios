// decompiled by r2ghidra: 0568_UsbRtDxe.pe32
// functions: 236

/* entry0 @ 0x103a4 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    int64_t *apiStackX_18 [2];
    
    fcn.00010434(arg1,in_RDX);
    iVar1 = (**(*0x2a900 + 0x140))(0x2a210,0,apiStackX_18);
    if (-1 < iVar1) {
        *0x2afc0 = *apiStackX_18[0];
        if (*(*0x2afc0 + 0x6cf) == '\0') {
            apiStackX_18[0][9] = 0x11388;
            apiStackX_18[0][10] = 0x11738;
            apiStackX_18[0][0xb] = 0x11810;
        }
        apiStackX_18[0][0xf] = 0x10794;
    }
    fcn.0001054c();
    return iVar1;
}


/* fcn.00010434 @ 0x10434 */

void fcn.00010434(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x2a900 = *(arg1 + 0x60);
    *0x2a8f8 = arg1;
    fcn.00029748();
    puVar4 = fcn.00029748();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010488:
            if (puVar4 == NULL) {
                uVar5 = fcn.000103a0();
                fcn.00010390();
                uVar2 = in(0x1808);
                fcn.00010370(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010360();
                }
                fcn.00010370(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010390();
                }
                else {
                    fcn.00010380();
                }
                return;
            }
            if ((*0x2a448 == *(puVar4 + 4)) && (*0x2a450 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010488;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.0001054c @ 0x1054c */

ulong fcn.0001054c(void)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong uStackX_8;
    
    uVar4 = 0x2ab20;
    if ((*(*0x2afc0 + 0x6c9) & 1) == 0) {
        iVar2 = *0x2afc0;
        fcn.000147ec(0x2ab20);
    }
    else {
        fcn.0001c7e4();
        iVar2 = *0x2afc0;
    }
    if ((*(iVar2 + 0x6c9) & 2) == 0) {
        fcn.000147ec(0x2abe8);
    }
    else {
        fcn.00016cc4(0x2abe8);
    }
    if ((*(iVar2 + 0x6c9) & 4) == 0) {
        fcn.000147ec(0x2acb0);
    }
    else {
        fcn.000238c4(0x2acb0);
    }
    if ((*(iVar2 + 0x6c9) & 8) == 0) {
        fcn.000147ec(0x2ad78);
    }
    else {
        fcn.0001efc4(0x2ad78);
    }
    uStackX_8 = 0;
    *0x2afb0 = 0x104fc;
    *0x2afb8 = 0x1052c;
    *0x2a910 = uVar4;
    (**(*0x2a900 + 0x80))(&uStackX_8,str.CuJm,0,uVar4);
    if (*0x2afc0 == 0) {
        uVar4 = 0x8000000000000003;
    }
    else {
        if (*(*0x2afc0 + 0x6a1) != 0) {
            *0x2a8b8 = *(*0x2afc0 + 0x6a1);
        }
        if (*(*0x2a8b8 + 8) != 0) {
            *0x2a8c8 = *(*0x2a8b8 + 8);
        }
        piVar3 = 0x2a590;
        iVar2 = 0;
        pcVar1 = 0x2ae60;
        do {
            if (iVar2 == 0x150) break;
            (**piVar3)(pcVar1);
            if (*(pcVar1 + 8) != NULL) {
                (**(pcVar1 + 8))();
            }
            if (*pcVar1 != '\0') {
                iVar2 = iVar2 + 0x30;
                pcVar1 = pcVar1 + 0x30;
                piVar3 = piVar3 + 1;
            }
        } while (*piVar3 != 0);
        piVar3 = 0x2a6b0;
        iVar2 = 0;
        pcVar1 = 0x2afe0;
        do {
            if (iVar2 == 0x150) break;
            (**piVar3)(pcVar1);
            if (*(pcVar1 + 8) != NULL) {
                (**(pcVar1 + 8))();
            }
            if (*pcVar1 != '\0') {
                iVar2 = iVar2 + 0x30;
                pcVar1 = pcVar1 + 0x30;
                piVar3 = piVar3 + 1;
            }
        } while (*piVar3 != 0);
        *(*0x2afc0 + 0x5ad) = 0;
        if (*0x2a8b8 != 0) {
            if (*(*0x2a8b8 + 0x3b2) == 0) {
                uVar4 = fcn.00012f1c(1);
                *(*0x2a8b8 + 0x3b2) = uVar4;
            }
            if (*(*0x2a8b8 + 0x3ba) == 0) {
                uVar4 = fcn.00012f1c(1);
                *(*0x2a8b8 + 0x3ba) = uVar4;
            }
        }
        *0x2ae40 = 0x1e;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00029748 @ 0x29748 */

int64_t fcn.00029748(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x2a908 == 0) {
        *0x2a908 = 0;
        if (*(*0x2a8f8 + 0x68) != 0) {
            piVar2 = *(*0x2a8f8 + 0x70);
            do {
                if ((*0x2a220 == *piVar2) && (*0x2a228 == piVar2[1])) {
                    *0x2a908 = (*(*0x2a8f8 + 0x70))[uVar1 * 3 + 2];
                    return *0x2a908;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x2a8f8 + 0x68));
        }
    }
    return *0x2a908;
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


/* fcn.00012f1c @ 0x12f1c */

int64_t fcn.00012f1c(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    bool bVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    uint32_t uVar14;
    
    uVar7 = 0;
    uVar9 = 0;
    bVar3 = false;
    uVar12 = 0;
    uVar10 = 0;
    if (arg1 != 0) {
        uVar11 = arg1 + 1;
        if ((arg1 & 1U) == 0) {
            uVar11 = arg1 & 0xffff;
        }
        uVar5 = *(*0x2afc0 + 0x5ae);
        uVar2 = (*(*0x2afc0 + 0x5b2) >> 2) / uVar5;
        if (uVar5 != 0) {
            uVar6 = uVar12;
            uVar13 = uVar12;
            do {
                if (bVar3) goto code_r0x00013057;
                if (uVar11 < 0x81) {
                    uVar10 = 0;
                }
                uVar8 = 0;
                uVar14 = uVar2;
                if (uVar14 != 0) {
                    uVar4 = uVar7;
                    do {
                        uVar6 = uVar4;
                        uVar9 = 0;
                        do {
                            uVar12 = uVar12 + 1;
                            if ((*(*(*0x2a8b8 + 0x1a) + uVar6 * 4) & 1LL << (uVar9 & 0x3f)) == 0) {
                                uVar10 = 0;
                            }
                            else {
                                uVar10 = uVar10 + 1;
                                if (uVar10 == uVar11) {
                                    uVar12 = uVar12 - uVar10;
                                    bVar3 = true;
                                    goto code_r0x00013032;
                                }
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < 0x20);
                        uVar8 = uVar8 + 1;
                        uVar4 = uVar6 + 1;
                    } while (uVar8 < uVar14);
                }
code_r0x00013032:
                uVar13 = uVar13 + 1;
                uVar7 = uVar7 + uVar2;
            } while (uVar13 < uVar5);
            if (bVar3) {
code_r0x00013057:
                do {
                    uVar10 = uVar9 + 1;
                    if ((uVar11 & 0xffff) - 1 <= uVar9) {
                        uVar10 = uVar11;
                    }
                    uVar9 = (uVar9 - uVar10) + 1;
                    uVar5 = -(uVar10 + uVar9 < 0x20) & -1 << (uVar10 + uVar9 & 0x1f);
                    if (uVar9 != 0) {
                        uVar5 = uVar5 | ~(-1 << (uVar9 & 0x1f));
                    }
                    uVar9 = 0x1f;
                    puVar1 = *(*0x2a8b8 + 0x1a) + uVar6 * 4;
                    *puVar1 = *puVar1 & uVar5;
                    uVar6 = uVar6 - 1;
                    uVar10 = uVar11 - uVar10;
                    uVar11 = uVar10;
                } while (uVar10 != 0);
                return uVar12 * 0x20 + *(*0x2a8b8 + 0x12);
            }
        }
    }
    return 0;
}


/* fcn.000130f0 @ 0x130f0 */

ulong fcn.000130f0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint64_t arg1_00;
    int16_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = arg2 + 1;
    if ((arg2 & 1U) == 0) {
        uVar8 = arg2 & 0xffff;
    }
    iVar1 = uVar8;
    if (((arg1_00 != 0) && (*(*0x2a8b8 + 0x12) <= arg1_00)) &&
       (uVar4 = *(*0x2afc0 + 0x5ae) * 0x80, arg1_00 <= (uVar4 + 1) * 0x20 + *(*0x2a8b8 + 0x12))) {
        uVar6 = arg1 - *(*0x2a8b8 + 0x12);
        uVar7 = uVar6 >> 5;
        if (uVar7 < uVar4) {
            uVar2 = 0;
            uVar6 = uVar6 >> 10;
            uVar5 = uVar7 & 0x1f;
            do {
                uVar3 = uVar2 + 1;
                *(*(*0x2a8b8 + 0x1a) + uVar6 * 4) = *(*(*0x2a8b8 + 0x1a) + uVar6 * 4) | 1 << (uVar2 + uVar5 & 0x1f);
                iVar1 = iVar1 + -1;
                uVar2 = uVar3;
                if ((uVar3 + uVar5 != 0) && ((uVar3 + uVar5 & 0x1f) == 0)) {
                    uVar6 = uVar6 + 1;
                    uVar2 = 0;
                    uVar5 = 0;
                }
            } while (iVar1 != 0);
            if ((uVar8 & 0xffff) != 0) {
                fcn.000102c0(arg1_00,(uVar8 & 0xffff) << 5);
            }
            return 0;
        }
    }
    return 0xff;
}


/* fcn.0001c7e4 @ 0x1c7e4 */

uint64_t fcn.0001c7e4(void)

{
    uint64_t uVar1;
    
    *0x2ab28 = 0x1c964;
    *0x2ab30 = 0x1cb84;
    *0x2ab38 = 0x1ccd0;
    *0x2ab40 = fcn.0001cdec;
    *0x2ab48 = 0x13d7c;
    *0x2ab50 = 0x1ce2c;
    *0x2ab58 = 0x1cef8;
    *0x2ab60 = 0x1cfec;
    *0x2ab68 = 0x1d044;
    *0x2ab70 = 0x1d338;
    *0x2ab78 = 0x1d83c;
    *0x2ab80 = 0x14914;
    *0x2ab88 = 0x1dba8;
    *0x2ab90 = 0x1dde8;
    *0x2ab98 = 0x1df04;
    *0x2aba8 = 0x1e138;
    *0x2abb0 = 0x1e208;
    *0x2aba0 = 0x13d7c;
    *0x2abb8 = 0x13d7c;
    *0x2abc0 = 0x13d7c;
    *0x2abc8 = 0x13d7c;
    *0x2abd0 = 0x13d7c;
    *0x2abd8 = 0x1d12c;
    *0x2abe0 = 0x1d22c;
    fcn.00013210(0x1ed98);
    fcn.00013210(0x1ed40);
    uVar1 = fcn.00013210(0x1eb34);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00013210 @ 0x13210 */

int fcn.00013210(uint32_t arg1)

{
    uint in_register_0000000c;
    uint8_t uVar1;
    unkbyte7 in_RDX;
    unkbyte7 in_R8;
    
    uVar1 = 0;
    do {
        if (*(uVar1 * 8 + 0x2a980) == 0) break;
        if (*(uVar1 * 8 + 0x2a980) == CONCAT44(in_register_0000000c,arg1)) goto code_r0x00013243;
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x32);
    if (uVar1 == 0x32) {
        return 0;
    }
    *(uVar1 * 8 + 0x2a980) = CONCAT44(in_register_0000000c,arg1);
code_r0x00013243:
    return CONCAT71(in_R8,1) + CONCAT71(in_RDX,uVar1);
}


/* fcn.000147ec @ 0x147ec */

ulong fcn.000147ec(int64_t arg1)

{
    *(arg1 + 8) = 0x13d7c;
    *(arg1 + 0x10) = 0x13d7c;
    *(arg1 + 0x18) = 0x13d7c;
    *(arg1 + 0x20) = 0x13d7c;
    *(arg1 + 0x28) = 0x13d7c;
    *(arg1 + 0x30) = 0x13d7c;
    *(arg1 + 0x38) = 0x14914;
    *(arg1 + 0x40) = 0x13d7c;
    *(arg1 + 0x48) = 0x13d7c;
    *(arg1 + 0x50) = 0x14914;
    *(arg1 + 0x58) = 0x14914;
    *(arg1 + 0x60) = 0x14914;
    *(arg1 + 0x68) = 0x14914;
    *(arg1 + 0x70) = 0x13d7c;
    *(arg1 + 0x78) = 0x13d7c;
    *(arg1 + 0x88) = 0x13d7c;
    *(arg1 + 0x90) = 0x13d7c;
    *(arg1 + 0x80) = 0x13d7c;
    *(arg1 + 0x98) = 0x13d7c;
    *(arg1 + 0xa0) = 0x13d7c;
    *(arg1 + 0xa8) = 0x13d7c;
    *(arg1 + 0xb0) = 0x13d7c;
    *(arg1 + 0xb8) = 0x13d7c;
    *(arg1 + 0xc0) = 0x13d7c;
    return 0x13d00;
}


/* fcn.00016cc4 @ 0x16cc4 */

uint64_t fcn.00016cc4(int64_t arg1)

{
    uint64_t uVar1;
    
    *(arg1 + 8) = fcn.00016e24;
    *(arg1 + 0x10) = fcn.00016ff0;
    *(arg1 + 0x18) = 0x18694;
    *(arg1 + 0x20) = fcn.000171ec;
    *(arg1 + 0x28) = 0x17230;
    *(arg1 + 0x30) = fcn.00017274;
    *(arg1 + 0x38) = 0x174e8;
    *(arg1 + 0x40) = 0x17624;
    *(arg1 + 0x48) = 0x13d7c;
    *(arg1 + 0x50) = 0x17804;
    *(arg1 + 0x58) = 0x17b7c;
    *(arg1 + 0x60) = 0x14914;
    *(arg1 + 0x68) = 0x17f00;
    *(arg1 + 0x70) = 0x18300;
    *(arg1 + 0x78) = 0x18150;
    *(arg1 + 0x88) = 0x1852c;
    *(arg1 + 0x90) = 0x185d0;
    *(arg1 + 0x80) = 0x13d7c;
    *(arg1 + 0x98) = 0x13d7c;
    *(arg1 + 0xa0) = 0x13d7c;
    *(arg1 + 0xa8) = 0x1765c;
    *(arg1 + 0xb0) = 0x13d7c;
    *(arg1 + 0xb8) = 0x17728;
    *(arg1 + 0xc0) = 0x177b4;
    fcn.00013210(0x18bd4);
    fcn.00013210(0x18bcc);
    fcn.00013210(0x183f4);
    uVar1 = fcn.00013210(0x1712c);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.000238c4 @ 0x238c4 */

uint64_t fcn.000238c4(int64_t arg1)

{
    uint64_t uVar1;
    
    *(arg1 + 8) = fcn.00023ae0;
    *(arg1 + 0x10) = fcn.00024088;
    *(arg1 + 0x18) = fcn.00023ee8;
    *(arg1 + 0x20) = 0x24358;
    *(arg1 + 0x28) = 0x24398;
    *(arg1 + 0x30) = fcn.000243d8;
    *(arg1 + 0x38) = 0x24844;
    *(arg1 + 0x40) = 0x24a04;
    *(arg1 + 0x48) = 0x13d7c;
    *(arg1 + 0x50) = 0x24f64;
    *(arg1 + 0x58) = 0x25358;
    *(arg1 + 0x60) = 0x25cf0;
    *(arg1 + 0x68) = 0x25e90;
    *(arg1 + 0x70) = 0x26174;
    *(arg1 + 0x78) = 0x26274;
    *(arg1 + 0x88) = 0x26478;
    *(arg1 + 0x90) = 0x26520;
    *(arg1 + 0x80) = 0x13d7c;
    *(arg1 + 0x98) = 0x13d7c;
    *(arg1 + 0xa0) = 0x13d7c;
    *(arg1 + 0xa8) = 0x24aa4;
    *(arg1 + 0xb0) = 0x13d7c;
    *(arg1 + 0xb8) = 0x24cb8;
    *(arg1 + 0xc0) = 0x24c64;
    fcn.00013210(0x27338);
    uVar1 = fcn.00013210(0x2719c);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.0001efc4 @ 0x1efc4 */

ulong fcn.0001efc4(int64_t arg1)

{
    *(arg1 + 8) = fcn.0001f0ec;
    *(arg1 + 0x10) = fcn.0001f58c;
    *(arg1 + 0x18) = fcn.0001f70c;
    *(arg1 + 0x20) = 0x13d7c;
    *(arg1 + 0x28) = 0x13d7c;
    *(arg1 + 0x30) = fcn.000204d0;
    *(arg1 + 0x38) = fcn.00020c4c;
    *(arg1 + 0x40) = 0x20f94;
    *(arg1 + 0x48) = 0x13d7c;
    *(arg1 + 0x50) = 0x215d8;
    *(arg1 + 0x58) = 0x21a1c;
    *(arg1 + 0x60) = 0x21f84;
    *(arg1 + 0x68) = 0x222a0;
    *(arg1 + 0x70) = 0x2255c;
    *(arg1 + 0x78) = 0x22718;
    *(arg1 + 0x88) = 0x228ec;
    *(arg1 + 0x90) = 0x22964;
    *(arg1 + 0x80) = 0x22a50;
    *(arg1 + 0x98) = 0x22f80;
    *(arg1 + 0xa0) = 0x23080;
    *(arg1 + 0xa8) = 0x211b8;
    *(arg1 + 0xb0) = fcn.00023240;
    *(arg1 + 0xb8) = 0x21228;
    *(arg1 + 0xc0) = 0x213b4;
    return 0x21300;
}


/* fcn.00011c9c @ 0x11c9c */

void fcn.00011c9c(int64_t arg1)

{
    int64_t arg1_00;
    uint8_t uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    iVar2 = *0x2a8b8;
    if (*(*0x2a8b8 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2a8c8 + uVar1 * 8);
            if (((arg1_00 != 0) && (*(arg1_00 + 1) == arg1)) && ((*(arg1_00 + 0x58) & 1) != 0)) {
                fcn.00029b44(arg1_00);
                iVar2 = *0x2a8b8;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return;
}


/* fcn.000133f0 @ 0x133f0 */

uint64_t fcn.000133f0(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    bool bVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    char cVar7;
    uint8_t uVar8;
    bool bVar9;
    
    bVar2 = false;
    uVar5 = 0;
    cVar3 = arg1;
    cVar7 = arg3;
    if (cVar3 == -0x80) {
        if (arg2 == 0) {
            if (cVar7 == '~') {
                return *0x2afc0 + 0x65;
            }
            if (cVar7 == '}') {
                return *0x2afc0 + 0x225;
            }
            if (cVar7 == '\x7f') {
                return *0x2afc0 + 0x3e5;
            }
            if (cVar7 != '\0') {
                return (arg3 & 0xff) * 0x1c0 + *(*0x2a8b8 + 0x42);
            }
        }
        else {
            uVar5 = 1;
            if (1 < *(*0x2afc0 + 0x716)) {
                do {
                    if (uVar5 * 0x1c0 + *(*0x2a8b8 + 0x42) == arg2) {
                        return uVar5;
                    }
                    uVar8 = uVar5 + 1;
                    uVar5 = uVar8;
                } while (uVar8 < *(*0x2afc0 + 0x716));
            }
        }
    }
    else {
        uVar6 = 1;
        if (1 < *(*0x2afc0 + 0x716)) {
            do {
                iVar4 = uVar6 * 0x1c0;
                if (arg2 == 0) {
                    iVar1 = *(*0x2a8b8 + 0x42);
                    if (cVar3 == '1') {
                        if ((*(iVar4 + 0x57 + iVar1) == cVar7) &&
                           (((arg4 == 0 || (*(iVar4 + 0xb + iVar1) == *arg4)) && ((*(iVar4 + iVar1) & 2) != 0)))) {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    else {
                        if ((*(iVar1 + iVar4) & 3) == 3) {
                            if (cVar3 == '\x10') {
                                if (*(iVar1 + 10 + iVar4) == cVar7) {
                                    if (arg4 != 0) goto code_r0x000135a8;
                                    goto code_r0x000135b7;
                                }
                            }
                            else {
                                if (cVar3 == ' ') {
                                    bVar9 = *(iVar1 + 4 + iVar4) == cVar7;
                                }
                                else {
                                    if (cVar3 == '0') {
                                        if ((*(iVar1 + 4 + iVar4) == cVar7) &&
                                           ((arg4 == 0 || (*(iVar1 + 0xb + iVar4) == *arg4)))) {
                                            uVar5 = uVar5 + 1;
                                        }
                                        goto code_r0x000135ba;
                                    }
                                    if (cVar3 != '@') {
                                        return 0;
                                    }
                                    if (arg4 == 0) {
                                        return 0;
                                    }
code_r0x000135a8:
                                    bVar9 = *(*0x2a8c8 + (*(iVar1 + 0xb + iVar4) - 1) * 8) == arg4;
                                }
                                if (bVar9) {
code_r0x000135b7:
                                    bVar2 = true;
                                }
                            }
                        }
code_r0x000135ba:
                        if (bVar2) {
                            return iVar4 + iVar1;
                        }
                    }
                }
                else if (iVar4 + *(*0x2a8b8 + 0x42) == arg2) {
                    arg2 = 0;
                }
                uVar8 = uVar6 + 1;
                uVar6 = uVar8;
            } while (uVar8 < *(*0x2afc0 + 0x716));
        }
        if (cVar3 - 0x30U < 2) {
            return uVar5;
        }
    }
    return 0;
}


/* fcn.00019694 @ 0x19694 */

int64_t fcn.00019694(int64_t arg1)

{
    char cVar1;
    int iVar2;
    uchar *puVar3;
    int64_t iVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    do {
        puVar3 = fcn.00012f1c(1);
        if (puVar3 != NULL) {
            *puVar3 = 0x12;
            puVar3[4] = 0x24;
            *0x2a8a8 = 0;
            iVar2 = fcn.000195f4(arg1);
            fcn.000130f0(puVar3,1);
            if (iVar2 == 0) {
                iVar4 = 0;
            }
            else {
                iVar4 = *(*0x2a8b8 + 0x62) + 0x40;
            }
            if (iVar4 != 0) {
                *(arg1 + 0x5e) = 0xffff;
                cVar1 = fcn.0001a3b8(arg1,iVar4);
                if (cVar1 == -1) {
                    iVar4 = 0;
                }
                return iVar4;
            }
        }
        if (((*(*0x2afc0 + 0x6c2) & 1) == 0) || (uVar5 = uVar5 + 1, 1 < uVar5)) {
            return 0;
        }
    } while( true );
}


/* fcn.0001b8d0 @ 0x1b8d0 */

ulong fcn.0001b8d0(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    uVar1 = *(*0x2a8b8 + 0x12);
    uVar3 = (*(*0x2afc0 + 0x5ae) << 0xc) + uVar1;
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        uVar4 = *(*0x2afc0 + 0x716);
        uVar2 = 0;
        if (uVar4 != 0) {
            iVar5 = *(*0x2a8b8 + 0x42);
            do {
                if (CONCAT44(in_register_0000000c,arg1) == iVar5) break;
                uVar2 = uVar2 + 1;
                iVar5 = iVar5 + 0x1c0;
            } while (uVar2 < uVar4);
        }
        if ((uVar2 != uVar4) &&
           ((*(*0x2afc0 + 0x6cf) == '\0' ||
            ((((uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x28), uVar2 == 0 ||
               ((uVar1 <= uVar2 && (uVar2 + 0x20 <= uVar3)))) &&
              ((uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x20), uVar2 == 0 ||
               ((uVar1 <= uVar2 && (uVar2 + 0x20 <= uVar3)))))) &&
             ((uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x108), uVar2 == 0 ||
              ((uVar1 <= uVar2 && (*(CONCAT44(in_register_0000000c,arg1) + 0x132) + uVar2 <= uVar3)))))))))) {
            return 0;
        }
    }
    return 0x800000000000000f;
}


/* fcn.000195f4 @ 0x195f4 */

uint64_t fcn.000195f4(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t in_RDX;
    
    if (*(arg1 + 0x59) < 2) {
        uVar5 = fcn.0001b65c(arg1,in_RDX);
    }
    else if (*(arg1 + 0x59) == 0x50) {
        *(*0x2afc0 + 0x6c4) = 0;
        uVar3 = fcn.0001b3e8(arg1,in_RDX);
        uVar5 = uVar3;
        *(*0x2afc0 + 0x6c4) = 1;
        iVar1 = *(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8);
        iVar4 = fcn.00029ab0();
        if ((-1 < iVar4) && (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x30 + *0x2a910), pcVar2 != NULL)) {
            (*pcVar2)(iVar1);
        }
    }
    else {
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.000197b4 @ 0x197b4 */

uchar fcn.000197b4(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t arg1_00;
    uint in_R8D;
    
    arg1_00 = fcn.000133f0(CONCAT71(arg1 >> 8,0x80),0,CONCAT31(in_R8D >> 8,*arg1),0);
    if (arg1_00 == 0) {
        uVar2 = 0xff;
    }
    else {
        uVar1 = *(arg1_00 + 0xa0);
        fcn.0001ae48(arg1_00);
        if (((*(arg1_00 + 0xa0) ^ uVar1) & 1) != 0) {
            *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) | 2;
        }
        *(arg1 + 1) = *(arg1_00 + 0xa0);
        if ((*(arg1_00 + 0xa0) & 2) != 0) {
            *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) & 0xfd;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001ab50 @ 0x1ab50 */

ulong fcn.0001ab50(int64_t arg1)

{
    uchar *puVar1;
    ulong uVar2;
    
    if ((*(arg1 + 0x7c) & 0x20) == 0) {
        puVar1 = fcn.00012f1c(1);
        if (puVar1 == NULL) {
            uVar2 = 0xff;
        }
        else {
            *puVar1 = 0x1b;
            puVar1[4] = 1;
            *(*0x2afc0 + 0x6ae) = 10000;
            fcn.000195f4(arg1);
            fcn.000130f0(puVar1,1);
            uVar2 = fcn.0001ad30(arg1);
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00011c34 @ 0x11c34 */

uint64_t fcn.00011c34(uint32_t arg1)

{
    unkuint3 Var1;
    uint16_t uVar2;
    char cVar3;
    unkuint7 Var5;
    uint64_t uVar4;
    char cVar6;
    
    uVar4 = arg1 >> 8;
    cVar3 = arg1 >> 8;
    uVar2 = arg1 >> 0x10;
    Var5 = uVar2;
    if (cVar3 == '(') {
        return CONCAT71(Var5,0xaa);
    }
    if (arg1 == '\a') {
        return CONCAT71(Var5,3);
    }
    cVar6 = arg1 >> 0x10;
    Var1 = uVar2;
    if ((cVar6 == -0x80) && (cVar3 == -0x80)) {
        return CONCAT21(uVar2,0x80);
    }
    if (cVar3 == '\x18') {
        return CONCAT71(Var5,0x11);
    }
    if (cVar3 == '\x06') {
        if (cVar6 == '\0') {
            return CONCAT71(Var5,2);
        }
    }
    else if (cVar3 == ':') {
        if (cVar6 == '\0') {
            return CONCAT71(Var5,0x31);
        }
    }
    else if (cVar3 == '\x11') {
        if (cVar6 == '\0') {
            return CONCAT71(Var5,4);
        }
        if (cVar6 == '\x06') {
            return CONCAT71(Var1,0x10);
        }
    }
    else {
        if (cVar3 == '0') {
            return CONCAT71(Var1,10);
        }
        uVar4 = CONCAT71(Var1,7);
        if (cVar3 - 0x20U < 7) {
            return uVar4;
        }
    }
    return CONCAT71(uVar4 >> 8,0x20);
}


/* fcn.00010e4c @ 0x10e4c */

void fcn.00010e4c(int64_t arg1)

{
    char *arg3;
    uint32_t *puVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t arg1_00;
    uint8_t *arg1_01;
    ulong uVar4;
    uint64_t uVar5;
    ulong in_R8;
    
    puVar1 = *0x2afc0;
    arg3 = arg1 + 3;
    if ((((*arg3 != '~') || ((**0x2afc0 & 0x200) != 0)) && ((*arg3 != '}' || ((**0x2afc0 & 0x400) != 0)))) &&
       ((*arg3 != '\x7f' || ((**0x2afc0 & 0x800) != 0)))) {
        uVar4 = 0;
        arg1_01 = fcn.000133f0(CONCAT71(arg1 >> 8,0x80),0,CONCAT71(in_R8 >> 8,*arg3),0);
        if ((arg1_01 != NULL) && ((*arg1_01 & 2) != 0)) {
            if (((*(puVar1 + 0x6c9) & 0x400000) == 0) || (arg1_00 = fcn.0001ae48(arg1_01), arg1_00 == 0)) {
                uVar5 = CONCAT71(uVar4 >> 8,-((*(arg1_01 + 0x60) & 0xffffffff00000000) != 0)) & 0xffffffffffffff60;
                iVar3 = fcn.0001a828(arg1_01,CONCAT71(uVar5 >> 8,uVar5 + '('),arg3);
                if (iVar3 != 0) {
                    *(arg1 + 2) = 0;
                    return;
                }
                arg1_00 = *(arg1 + 4);
            }
            else {
                *(arg1 + 4) = arg1_00;
            }
            uVar2 = fcn.00011c34(arg1_00);
            *(arg1 + 2) = uVar2;
            return;
        }
        *(arg1 + 2) = 0x80;
        return;
    }
    *(arg1 + 2) = 0xaa;
    return;
}


/* fcn.0001ae48 @ 0x1ae48 */

uint32_t fcn.0001ae48(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uchar *puVar3;
    ulong uVar4;
    int16_t iVar5;
    char cVar6;
    char cVar7;
    char cVar8;
    
    uVar2 = 0;
    cVar6 = '\x03';
    cVar8 = '\x03';
    cVar7 = *(*0x2afc0 + 0x6ad);
    do {
        if (cVar7 == '\0') {
            return uVar2;
        }
        if ((*(arg1 + 0x7c) & 8) != 0) {
code_r0x0001afbe:
            if (cVar7 == '\0') {
                return uVar2;
            }
            uVar1 = fcn.0001b208(arg1);
            return uVar1;
        }
        puVar3 = fcn.00012f1c(1);
        if (puVar3 == NULL) {
            return 0xff;
        }
        *puVar3 = 0;
        uVar2 = fcn.000195f4(arg1);
        fcn.000130f0(puVar3,1);
        if ((uVar2 == 0xff) || (*(arg1 + 0x59) < 2)) {
            uVar2 = fcn.0001ad30(arg1);
        }
        if (uVar2 == '\0') goto code_r0x0001afbe;
        iVar5 = uVar2;
        if (iVar5 == 0x2806) {
            if (*(arg1 + 0x58) == '\x04') {
code_r0x0001af21:
                fcn.0001ab50(arg1);
            }
code_r0x0001af29:
            uVar4 = 100000;
        }
        else if (iVar5 == 0x3a02) {
            cVar6 = cVar6 + -1;
            if (cVar6 == '\0') {
                return uVar2;
            }
code_r0x0001af3f:
            uVar4 = 20000;
        }
        else {
            if (uVar2 == 0x20402) goto code_r0x0001af21;
            if (iVar5 == 0x1103) goto code_r0x0001af29;
            if (uVar2 != 0x10402) {
                if (uVar2 == '\a') goto code_r0x0001afbe;
                if ((uVar2 - 2 & 0xfb) != 0) {
                    return uVar2;
                }
            }
            if (uVar2 == 2) {
                cVar8 = cVar8 + -1;
                if (cVar8 == '\0') {
                    return 2;
                }
                goto code_r0x0001af3f;
            }
            uVar4 = 1000000;
        }
        (**(*0x2a900 + 0xf8))(uVar4);
        cVar7 = cVar7 + -1;
    } while( true );
}


/* fcn.0001a828 @ 0x1a828 */

uint32_t fcn.0001a828(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint8_t *arg1_00;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    uint32_t uVar11;
    
    *0x2a8a8 = 0;
    uVar7 = arg2;
    *(arg3 + 1) = 0;
    uVar11 = 0;
    arg1_00 = fcn.00012f1c(1);
    if (arg1_00 == NULL) {
        uVar4 = 0;
    }
    else {
        uVar10 = 0;
        do {
            *arg1_00 = uVar7;
            uVar6 = *(arg1 + 0x60) - *(arg3 + 0xd);
            uVar9 = *(arg3 + 5);
            if (uVar6 < *(arg3 + 5)) {
                uVar9 = uVar6;
            }
            if ((*(arg1 + 0x74) == '\x04') && ((**0x2afc0 & 2) == 0)) {
                uVar9 = uVar9 + *(arg1 + 0x5c);
            }
            if (*(arg1 + 0x5e) != -1) {
                uVar4 = uVar9;
                if ((uVar7 < 0x30) && ((0x850000000000U >> (arg2 & 0x3fU) & 1) != 0)) {
                    *(arg1_00 + 2) =
                         (uVar4 & 0xff0000 | uVar9 >> 0x10 & 0xffff) >> 8 | (uVar4 & 0xff00 | uVar4 << 0x10) << 8;
                    *(arg1_00 + 7) = *(arg3 + 0xd) * 0x100 + (*(arg3 + 0xd) >> 8);
                }
                else {
                    uVar8 = uVar9 >> 0x20;
                    *(arg1_00 + 2) =
                         ((((uVar4 << 0x10 | uVar4 & 0xff00) << 8) << 8 | uVar9 & 0xff0000) << 0x10 | uVar9 & 0xff000000
                         ) << 8 | (uVar8 << 0x10 | uVar8 & 0xff00) << 8 |
                         (uVar9 >> 0x20 & 0xff0000 | uVar9 >> 0x30) >> 8;
                    *(arg1_00 + 10) = (*(arg3 + 0xd) & 0xff00) << 8 | *(arg3 + 0xd) << 0x18;
                }
                uVar8 = 0;
                puVar3 = *0x2afc0;
                puVar3[0x6ae] = 0;
                puVar3[0x6af] = 0;
                if ((uVar7 != 0x2f) && (uVar7 != 0x8f)) {
                    puVar3 = *0x2afc0;
                    puVar3[0x6ae] = 0x20;
                    puVar3[0x6af] = 0x4e;
                    uVar8 = *(arg1 + 0x5e) * *(arg3 + 0xd);
                }
                uVar4 = fcn.000195f4(arg1);
                if ((uVar4 != 0) && ((uVar10 != 0 || (uVar4 == uVar8)))) {
                    if (0xffff < uVar4) {
                        uVar4 = 0xffff;
                    }
                    if ((((*(arg1 + 0x74) == '\x04') && (uVar7 == 0x28)) && (*(arg3 + 5) == 0)) &&
                       ((**0x2afc0 & 2) == 0)) {
                        *(*(arg3 + 0x13) + 0x1c) = 0;
                        iVar2 = *(arg3 + 0x13);
                        if (((*(iVar2 + 3) == 0x65657246) && (*(iVar2 + 7) == 0x20534f44)) &&
                           (*(iVar2 + 0x3a) != 0x20202032)) {
                            *(iVar2 + 0x42) = *(iVar2 + 0x42) - *(arg1 + 0x5c);
                            piVar1 = *(arg3 + 0x13) + 0x46;
                            *piVar1 = *piVar1 - *(arg1 + 0x5c);
                            piVar1 = *(arg3 + 0x13) + 0x4a;
                            *piVar1 = *piVar1 - *(arg1 + 0x5c);
                        }
                        iVar2 = *(arg3 + 0x13);
                        if (*(iVar2 + 0x52) == 0x33544146) {
                            *(iVar2 + 0x40) = 0;
                        }
                        else {
                            *(iVar2 + 0x24) = 0;
                        }
                    }
                    break;
                }
                iVar5 = fcn.0001ad30(arg1);
                *(arg3 + 1) = iVar5;
                uVar4 = uVar11;
                if (iVar5 == '\a') break;
                if (((uVar7 == 0x2f) || (uVar7 == 0x8f)) && (iVar5 == 0)) {
                    uVar4 = 0xffff;
                    break;
                }
            }
            iVar5 = fcn.0001ae48(arg1);
            *(arg3 + 1) = iVar5;
            uVar4 = uVar11;
            if (iVar5 != 0) break;
            fcn.000102c0(arg1_00,0x10);
            uVar10 = uVar10 + 1;
        } while (uVar10 < 2);
        fcn.000130f0(arg1_00,1);
        uVar4 = uVar4 & 0xffff;
    }
    return uVar4;
}


/* fcn.00010f9c @ 0x10f9c */

void fcn.00010f9c(int64_t arg1)

{
    char *arg3;
    uint32_t *puVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t arg1_00;
    uint8_t *arg1_01;
    ulong uVar4;
    uint64_t uVar5;
    ulong in_R8;
    
    puVar1 = *0x2afc0;
    arg3 = arg1 + 3;
    if ((((*arg3 != '~') || ((**0x2afc0 & 0x200) != 0)) && ((*arg3 != '}' || ((**0x2afc0 & 0x400) != 0)))) &&
       ((*arg3 != '\x7f' || ((**0x2afc0 & 0x800) != 0)))) {
        uVar4 = 0;
        arg1_01 = fcn.000133f0(CONCAT71(arg1 >> 8,0x80),0,CONCAT71(in_R8 >> 8,*arg3),0);
        if ((arg1_01 != NULL) && ((*arg1_01 & 2) != 0)) {
            if (((*(puVar1 + 0x6c9) & 0x400000) == 0) || (arg1_00 = fcn.0001ae48(arg1_01), arg1_00 == 0)) {
                uVar5 = CONCAT71(uVar4 >> 8,-((*(arg1_01 + 0x60) & 0xffffffff00000000) != 0)) & 0xffffffffffffff60;
                iVar3 = fcn.0001a828(arg1_01,CONCAT71(uVar5 >> 8,uVar5 + '*'),arg3);
                if (iVar3 != 0) {
                    *(arg1 + 2) = 0;
                    return;
                }
                arg1_00 = *(arg1 + 4);
            }
            else {
                *(arg1 + 4) = arg1_00;
            }
            uVar2 = fcn.00011c34(arg1_00);
            *(arg1 + 2) = uVar2;
            return;
        }
        *(arg1 + 2) = 0x80;
        return;
    }
    *(arg1 + 2) = 0xaa;
    return;
}


/* fcn.000110ec @ 0x110ec */

void fcn.000110ec(int64_t arg1)

{
    char *arg3;
    uint32_t *puVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t arg1_00;
    uint8_t *arg1_01;
    ulong uVar4;
    uint64_t uVar5;
    ulong in_R8;
    
    puVar1 = *0x2afc0;
    arg3 = arg1 + 3;
    if ((((*arg3 != '~') || ((**0x2afc0 & 0x200) != 0)) && ((*arg3 != '}' || ((**0x2afc0 & 0x400) != 0)))) &&
       ((*arg3 != '\x7f' || ((**0x2afc0 & 0x800) != 0)))) {
        uVar4 = 0;
        arg1_01 = fcn.000133f0(CONCAT71(arg1 >> 8,0x80),0,CONCAT71(in_R8 >> 8,*arg3),0);
        if ((arg1_01 != NULL) && ((*arg1_01 & 2) != 0)) {
            if (((*(puVar1 + 0x6c9) & 0x400000) == 0) || (arg1_00 = fcn.0001ae48(arg1_01), arg1_00 == 0)) {
                uVar5 = CONCAT71(uVar4 >> 8,-((*(arg1_01 + 0x60) & 0xffffffff00000000) != 0)) & 0xffffffffffffff60;
                iVar3 = fcn.0001a828(arg1_01,CONCAT71(uVar5 >> 8,uVar5 + '/'),arg3);
                if (iVar3 != 0) {
                    *(arg1 + 2) = 0;
                    return;
                }
                arg1_00 = *(arg1 + 4);
            }
            else {
                *(arg1 + 4) = arg1_00;
            }
            uVar2 = fcn.00011c34(arg1_00);
            *(arg1 + 2) = uVar2;
            return;
        }
        *(arg1 + 2) = 0x80;
        return;
    }
    *(arg1 + 2) = 0xaa;
    return;
}


/* fcn.00019834 @ 0x19834 */

ulong fcn.00019834(int64_t arg1)

{
    ushort uVar1;
    uint uVar2;
    uint8_t *arg1_00;
    uchar *puVar3;
    uchar *puVar4;
    uchar *puVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    uint in_R8D;
    
    arg1_00 = fcn.000133f0(CONCAT71(arg1 >> 8,0x80),0,CONCAT31(in_R8D >> 8,*arg1),0);
    if ((arg1_00 != NULL) && ((*arg1_00 & 2) != 0)) {
        uVar6 = *(arg1 + 9) + 0x1f >> 5;
        fcn.0001ae48(arg1_00);
        puVar3 = fcn.00012f1c((uVar6 & 0xff) + 0x1f >> 5);
        if (puVar3 != NULL) {
            puVar4 = *(arg1 + 5);
            uVar7 = 0;
            puVar5 = puVar3;
            if (*(arg1 + 9) != 0) {
                do {
                    uVar7 = uVar7 + 1;
                    *puVar5 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar5 = puVar5 + 1;
                } while (uVar7 < *(arg1 + 9));
            }
            uVar1 = fcn.000195f4(arg1_00);
            *(arg1 + 0xf) = uVar1;
            uVar2 = fcn.0001ad30(arg1_00);
            *(arg1 + 1) = uVar2;
            fcn.000130f0(puVar3,(uVar6 & 0xff) + 0x1f >> 5);
            return 0;
        }
    }
    return 0xff;
}


/* fcn.000166c4 @ 0x166c4 */

uint8_t fcn.000166c4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t arg1_00;
    uint64_t uVar2;
    int64_t iVar3;
    int16_t iVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    int64_t iVar10;
    ushort uVar11;
    uint64_t uVar12;
    ushort uStackX_8;
    uint16_t uStackX_a;
    uint16_t uStackX_c;
    ushort uStackX_e;
    
    uVar9 = 0;
    arg1_00 = *(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8);
    iVar10 = 0;
    uVar12 = (*(*0x2afc0 + 0x5ae) << 0xc) + *(*0x2a8b8 + 0x12);
    fcn.00010300(&uStackX_8,8,0);
    if (((*(arg1 + 0x110) & 9) == 1) || (puVar5 = fcn.00012f1c(1), puVar5 == NULL)) {
        return 0xff;
    }
    uVar8 = arg2 & 7;
    *puVar5 = uVar8;
    uVar11 = 1;
    if ((*(arg1 + 0x110) & 1) != 0) {
        iVar10 = *(arg1 + 0x120);
        if (iVar10 == 0) {
code_r0x00016776:
            fcn.000130f0(puVar5,1);
            return 0xff;
        }
        uVar7 = 0;
        uVar11 = 1;
        if (*(arg1 + 0x118) != 0) {
            do {
                uVar2 = *(iVar10 + uVar7 * 8);
                if ((uVar2 < *(*0x2a8b8 + 0x12)) || (uVar12 < uVar2 + 0x30)) goto code_r0x00016776;
                if (((*(uVar2 + 2) == 8) && (*(uVar2 + 1) != '\0')) && (**(uVar2 + 0x20) == 1)) {
                    iVar3 = *(iVar10 + uVar7 * 8);
                    uVar7 = *(iVar3 + 0x20);
                    if ((uVar7 < *(*0x2a8b8 + 0x12)) || (uVar12 < uVar7 + 2)) {
                        uVar8 = 0xff;
                        goto code_r0x0001689f;
                    }
                    uVar6 = *(iVar3 + 1);
                    uVar9 = uVar6;
                    uVar11 = 2;
                    *puVar5 = uVar6;
                    puVar5[1] = uVar8;
                    break;
                }
                uVar6 = uVar7 + 1;
                uVar7 = uVar6;
            } while (uVar6 < *(arg1 + 0x118));
        }
    }
    cVar1 = *(arg1 + 0x54);
    if (cVar1 == '\0') {
        uStackX_8 = 0x921;
        uStackX_a = uVar9 | 0x200;
        uStackX_c = *(arg1 + 0x13);
        uStackX_e = uVar11;
        uVar8 = fcn.00014760(arg1_00,arg1,
                             CONCAT26(uVar11,CONCAT14(*(arg1 + 0x13),CONCAT22(uVar9,0x921))) | 0x2000000,100);
    }
    else {
        uVar9 = *(arg1 + 0x52);
        uVar11 = *(*0x2afc0 + 0x6c0);
        *(*0x2afc0 + 0x6c0) = 100;
        iVar4 = fcn.00029c7c(arg1_00,arg1,CONCAT71(iVar10 >> 8,cVar1),uVar9);
        *(*0x2afc0 + 0x6c0) = uVar11;
        uVar8 = ~-(iVar4 != 0);
    }
code_r0x0001689f:
    fcn.000130f0(puVar5,1);
    return uVar8;
}


/* fcn.00015a00 @ 0x15a00 */

void fcn.00015a00(void)

{
    uint8_t uVar1;
    int64_t arg1;
    uint8_t uVar2;
    int64_t iVar3;
    
    uVar2 = 0;
    *(*0x2afc0 + 0x66a) = *(*0x2afc0 + 0x66a) | 1;
    uVar1 = *(*0x2afc0 + 0x667);
    iVar3 = *0x2afc0;
    if (*(*0x2afc0 + 0x717) != '\0') {
        do {
            arg1 = *(*(*0x2a8b8 + 0x4a) + uVar2 * 8);
            if (arg1 != 0) {
                fcn.000166c4(arg1,uVar1 >> 4 & 7);
                iVar3 = *0x2afc0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar3 + 0x717));
    }
    *(iVar3 + 0x66a) = *(iVar3 + 0x66a) & 0xfe;
    return;
}


/* fcn.000139f0 @ 0x139f0 */

void fcn.000139f0(uint32_t arg1,uint32_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    code *pcVar3;
    char cVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    char *pcVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    while( true ) {
        cVar4 = *0x2a8d0;
        arg2 = arg2 & 0xff;
        if (arg2 == 0) {
            if (*0x2a8d0 != '\0') {
                return;
            }
            if (pcVar6 != NULL) {
                *(*0x2afc0 + 0x686) = *pcVar6;
                return;
            }
            return;
        }
        if (arg2 == 1) {
            if (*0x2a8d0 == '\0') {
                return;
            }
            if ((((*(*0x2afc0 + 0x6cd) == '\0') && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) &&
                (*(*0x2afc0 + 0x6cf) != '\0')) && (uVar7 = 0, *(*0x2a8b8 + 0x10) != '\0')) {
                do {
                    if ((*(*(*0x2a8c8 + uVar7 * 8) + 0x58) & 0x11) == 0x11) {
                        *0x2a8d0 = 0;
                        return;
                    }
                    uVar8 = uVar7 + 1;
                    uVar7 = uVar8;
                } while (uVar8 < *(*0x2a8b8 + 0x10));
            }
            if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
                if (*(*0x2afc0 + 0x686) != 0) {
                    iVar2 = *(*0x2a8c8 + (*(*0x2afc0 + 0x686) - 1) * 8);
                    iVar5 = fcn.00029ab0();
                    if ((-1 < iVar5) &&
                       (pcVar3 = *((*(iVar2 + 1) - 0x10 >> 4 & 3) * 200 + 0x88 + *0x2a910), pcVar3 != NULL)) {
                        (*pcVar3)(iVar2);
                    }
                }
            }
            else {
                iVar2 = *(*0x2a8b8 + 0x3a);
                if (iVar2 != 0) {
                    fcn.00029bdc(*(*0x2a8c8 + (*(iVar2 + 0xb) - 1) * 8),iVar2,0xa21,*(iVar2 + 0x13));
                }
            }
            *0x2a8d0 = 0;
            return;
        }
        if (arg2 == 2) {
            if (*0x2a8d0 != '\0') {
                return;
            }
            if (((*(*0x2afc0 + 0x6cd) == '\0') && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) &&
               ((*(*0x2afc0 + 0x6cf) != '\0' && (uVar7 = 0, *(*0x2a8b8 + 0x10) != '\0')))) {
                do {
                    if ((*(*(*0x2a8c8 + uVar7 * 8) + 0x58) & 0x11) == 0x11) {
                        *0x2a8d0 = 1;
                        return;
                    }
                    uVar8 = uVar7 + 1;
                    uVar7 = uVar8;
                } while (uVar8 < *(*0x2a8b8 + 0x10));
            }
            if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
                if (*(*0x2afc0 + 0x686) != 0) {
                    iVar2 = *(*0x2a8c8 + (*(*0x2afc0 + 0x686) - 1) * 8);
                    iVar5 = fcn.00029ab0();
                    if ((-1 < iVar5) &&
                       (pcVar3 = *((*(iVar2 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2a910), pcVar3 != NULL)) {
                        (*pcVar3)(iVar2);
                    }
                }
            }
            else {
                iVar2 = *(*0x2a8b8 + 0x3a);
                if (iVar2 != 0) {
                    fcn.00029bdc(*(*0x2a8c8 + (*(iVar2 + 0xb) - 1) * 8),iVar2,0xa21,*(iVar2 + 0x13));
                }
            }
            *0x2a8d0 = 1;
            return;
        }
        if (arg2 != 3) {
            return;
        }
        if (pcVar6 == NULL) {
            return;
        }
        if (*(*0x2afc0 + 0x686) != *pcVar6) {
            return;
        }
        *(*0x2afc0 + 0x686) = 0;
        uVar7 = 0;
        while( true ) {
            if (*(*0x2a8b8 + 0x10) <= uVar7) {
                return;
            }
            pcVar1 = *(*0x2a8c8 + uVar7 * 8);
            if ((((pcVar1 != NULL) && (pcVar1 != pcVar6)) && (*(pcVar1 + 0x90) != 0)) && ((pcVar1[0x58] & 1U) != 0))
            break;
            uVar7 = uVar7 + 1;
        }
        *(*0x2afc0 + 0x686) = **(*0x2a8c8 + uVar7 * 8);
        if (cVar4 == '\0') break;
        *0x2a8d0 = '\0';
        arg2 = 2;
        pcVar6 = NULL;
    }
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


/* fcn.00012b74 @ 0x12b74 */

ulong fcn.00012b74(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uchar uVar2;
    int64_t iVar3;
    uint32_t *arg2_00;
    uint8_t uVar4;
    uint64_t uVar5;
    
    uVar5 = 1;
    uVar2 = 0xff;
    uVar1 = 0xff;
    if (1 < *(*0x2afc0 + 0x716)) {
        do {
            uVar2 = uVar1;
            arg2_00 = uVar5 * 0x1c0 + *(*0x2a8b8 + 0x42);
            if ((((*arg2_00 & 0x21) == 1) && (arg2_00[3] == arg2)) && (*(arg2_00 + 0xd) == arg3)) {
                iVar3 = fcn.00013248(*(arg2_00 + 0x26));
                if ((iVar3 == 0) || (*(iVar3 + 0x20) == NULL)) {
                    if (arg2_00[0x14] != '\0') {
                        fcn.00029dd4(arg1,arg2_00);
                        *(arg2_00 + 0x14) = 0;
                    }
                }
                else {
                    (**(iVar3 + 0x20))(arg2_00);
                    arg2_00[0x26] = 0xffffffff;
                    arg2_00[0x27] = 0;
                }
                uVar2 = fcn.00029ea8(arg1,arg2_00);
                *arg2_00 = *arg2_00 & 0xffffff7f;
                if (*(arg2_00 + 10) != '\0') {
                    *(*0x2afc0 + 0x5a5) = *(*0x2afc0 + 0x5a5) | 1LL << (*(arg2_00 + 10) & 0x3f);
                    *(arg2_00 + 10) = 0;
                }
                if ((*(arg2_00 + 0xc) != 0) && (arg2_00[0xe] != 0)) {
                    fcn.000130f0(*(arg2_00 + 0xc),arg2_00[0xe] + 0x1f >> 5);
                }
                *arg2_00 = *arg2_00 & 0xfffffffd;
                if ((*arg2_00 & 0x44) == 0) {
                    *arg2_00 = *arg2_00 & 0xfffffffe;
                }
            }
            if (((((*arg2_00 & 0x21) == 0x21) && (arg2_00[3] == arg2)) && (*(arg2_00 + 0xd) == arg3)) &&
               (*(arg2_00 + 0x2a) != 0)) {
                *arg2_00 = *arg2_00 | 0x1000;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            uVar1 = uVar2;
        } while (uVar4 < *(*0x2afc0 + 0x716));
    }
    return CONCAT71(*0x2afc0 >> 8,uVar2);
}


/* fcn.000114d8 @ 0x114d8 */

void fcn.000114d8(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint *puVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar3 = 1;
    arg1_00 = arg1;
    iVar4 = *0x2afc0;
    if (1 < *(*0x2afc0 + 0x716)) {
        do {
            puVar1 = uVar3 * 0x1c0 + *(*0x2a8b8 + 0x42);
            if ((*puVar1 & 3) == 3) {
                arg1_00 = *(*0x2a8c8 + (*(puVar1 + 0xb) - 1) * 8);
                fcn.00012b74(arg1_00,CONCAT71(puVar1 >> 8,*(puVar1 + 3)),CONCAT71(iVar4 >> 8,*(puVar1 + 0xd)));
                iVar4 = *0x2afc0;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < *(iVar4 + 0x716));
    }
    if ((*(iVar4 + 0x6c9) & 8) != 0) {
        arg1_00 = CONCAT71(arg1_00 >> 8,0x40);
        fcn.00011c9c(arg1_00);
        iVar4 = *0x2afc0;
    }
    if ((*(iVar4 + 0x6c9) & 4) != 0) {
        arg1_00 = CONCAT71(arg1_00 >> 8,0x30);
        fcn.00011c9c(arg1_00);
        iVar4 = *0x2afc0;
    }
    if ((*(iVar4 + 0x6c9) & 1) != 0) {
        arg1_00 = CONCAT71(arg1_00 >> 8,0x10);
        fcn.00011c9c(arg1_00);
        iVar4 = *0x2afc0;
    }
    if ((*(iVar4 + 0x6c9) & 2) != 0) {
        fcn.00011c9c(CONCAT71(arg1_00 >> 8,0x20));
    }
    *(arg1 + 2) = 0;
    return;
}


/* fcn.00015b08 @ 0x15b08 */

void fcn.00015b08(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint32_t uVar6;
    
    cVar4 = (*0x2afc0 - arg1) + -0x3b;
    uVar1 = 0;
    cVar5 = cVar4;
    do {
        uVar3 = uVar1 + 1;
        *(uVar1 + arg1) = *(uVar3 + arg1);
        cVar5 = cVar5 + -1;
        uVar1 = uVar3;
    } while (cVar5 != '\0');
    uVar2 = (arg1 - *0x2afc0) - 0x5b6;
    cVar5 = cVar4;
    uVar6 = uVar2;
    do {
        uVar6 = uVar6 + 1;
        *(uVar2 + 0x5c6 + *0x2afc0) = *(uVar6 + 0x5c6 + *0x2afc0);
        uVar2 = uVar2 + 1;
        cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    uVar2 = (arg1 - *0x2afc0) - 0x5b6;
    uVar6 = uVar2;
    do {
        uVar6 = uVar6 + 1;
        *(uVar2 + 0x5d6 + *0x2afc0) = *(uVar6 + 0x5d6 + *0x2afc0);
        uVar2 = uVar2 + 1;
        cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    return;
}


/* fcn.00011cf8 @ 0x11cf8 */

void fcn.00011cf8(int64_t arg1)

{
    int64_t arg1_00;
    uint8_t uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    iVar2 = *0x2a8b8;
    if (*(*0x2a8b8 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2a8c8 + uVar1 * 8);
            if (((arg1_00 != 0) && ((*(arg1_00 + 0x58) & 0xc) == 0xc)) && (*(arg1_00 + 1) == arg1)) {
                fcn.00029af8(arg1_00);
                iVar2 = *0x2a8b8;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return;
}


/* fcn.00011f28 @ 0x11f28 */

uint64_t fcn.00011f28(int64_t arg1)

{
    int64_t arg1_00;
    uint64_t in_RAX;
    uint8_t uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    iVar2 = *0x2a8b8;
    if (*(*0x2a8b8 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2a8c8 + uVar1 * 8);
            in_RAX = *0x2a8c8;
            if (((arg1_00 != 0) && (*(arg1_00 + 1) == arg1)) && ((*(arg1_00 + 0x58) & 1) != 0)) {
                in_RAX = fcn.00029b90(arg1_00);
                iVar2 = *0x2a8b8;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00029b44 @ 0x29b44 */

ulong fcn.00029b44(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00029ab0();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x10 + *0x2a910);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x00029b8d. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.000115b0 @ 0x115b0 */

void fcn.000115b0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint8_t uVar4;
    
    cVar1 = *(arg1 + 1);
    *0x2a8a8 = 0;
    uVar4 = (*(*0x2a8b8 + 0x32) - *0x2afc0) + 0x2a;
    puVar3 = arg1;
    if (cVar1 == '\0') {
        fcn.000114d8(arg1,arg2);
        puVar3 = *0x2a8b0;
        for (; *0x2a8b0 = puVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
            fcn.00015b08((uVar4 - 1) + *0x2afc0 + 0x5b6);
            puVar3 = *0x2a8b0;
        }
        if (puVar3 == NULL) {
            return;
        }
        (*puVar3[1])(puVar3);
    }
    if (cVar1 == '\x01') {
        *(*0x2afc0 + 0x6c5) = 0;
        if ((*(*0x2afc0 + 0x6c9) & 8) != 0) {
            iVar2 = CONCAT71(puVar3 >> 8,0x40);
            fcn.00011cf8(iVar2);
            puVar3 = CONCAT71(iVar2 >> 8,0x40);
            fcn.00011f28(puVar3);
        }
        if ((*(*0x2afc0 + 0x6c9) & 4) != 0) {
            iVar2 = CONCAT71(puVar3 >> 8,0x30);
            fcn.00011cf8(iVar2);
            puVar3 = CONCAT71(iVar2 >> 8,0x30);
            fcn.00011f28(puVar3);
        }
        if ((*(*0x2afc0 + 0x6c9) & 1) != 0) {
            iVar2 = CONCAT71(puVar3 >> 8,0x10);
            fcn.00011cf8(iVar2);
            puVar3 = CONCAT71(iVar2 >> 8,0x10);
            fcn.00011f28(puVar3);
        }
        if ((*(*0x2afc0 + 0x6c9) & 2) != 0) {
            iVar2 = CONCAT71(puVar3 >> 8,0x20);
            fcn.00011cf8(iVar2);
            fcn.00011f28(CONCAT71(iVar2 >> 8,0x20));
        }
        puVar3 = *0x2a8b0;
        *(arg1 + 2) = 0;
        if (puVar3 != NULL) {
            (**puVar3)(puVar3);
        }
    }
    return;
}


/* fcn.00013248 @ 0x13248 */

int64_t fcn.00013248(uint32_t arg1)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    int64_t iVar2;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1);
    if (uVar1 == 0xffffffff) {
        return 0;
    }
    if ((arg1 & 0x80000000) == 0) {
        iVar2 = 0x2afe0;
    }
    else {
        uVar1 = arg1 & 0x7fffffff;
        iVar2 = 0x2ae60;
    }
    return uVar1 * 0x30 + iVar2;
}


/* fcn.00011d58 @ 0x11d58 */

uint64_t fcn.00011d58(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    
    uVar7 = 0;
    uVar8 = *(*0x2a8b8 + 0x10);
    uVar6 = *0x2a8b8;
    uVar4 = 0;
    if (uVar8 != 0) {
        do {
            uVar6 = uVar4;
            uVar7 = uVar6;
            iVar2 = *(*0x2a8c8 + uVar6 * 8);
            if (((iVar2 != 0) && (arg1 != iVar2)) &&
               (((uVar6 = *(arg1 + 0x10), uVar6 != 0 && (uVar6 == *(iVar2 + 0x10))) ||
                (((uVar6 = *(arg1 + 0x60), uVar6 != 0 && (uVar6 == *(iVar2 + 0x60))) ||
                 ((*(*0x2afc0 + 0x6cf) != '\0' &&
                  ((uVar6 = *(iVar2 + 0x2a), *(arg1 + 0x2a) == *(iVar2 + 0x2a) &&
                   (uVar6 = *(iVar2 + 0x30), *(arg1 + 0x30) == uVar6)))))))))) break;
            uVar7 = uVar7 + 1;
            uVar4 = uVar7;
        } while (uVar7 < uVar8);
    }
    if (uVar7 == uVar8) {
        *(arg1 + 0x58) = *(arg1 + 0x58) | 8;
        fcn.00029af8(arg1);
        if ((*(arg1 + 0x58) & 1) != 0) {
            uVar6 = 0;
            iVar2 = *(*0x2a8b8 + 0x3a2);
            while( true ) {
                if ((*(iVar2 + 0x1c + uVar6 * 6) == 0) && (*(iVar2 + 0x1e + uVar6 * 6) == 0)) goto code_r0x00011e82;
                if ((*(iVar2 + 0x1c + uVar6 * 6) == *(arg1 + 0x88)) && (*(iVar2 + 0x1e + uVar6 * 6) == *(arg1 + 0x8a)))
                break;
                uVar8 = uVar6 + 1;
                uVar6 = uVar8;
                if (2 < uVar8) {
code_r0x00011e82:
                    fcn.00029b90(arg1);
                    uVar6 = *0x2afc0;
                    if ((((*(*0x2afc0 + 0x6cf) == '\x02') && ((*(*0x2afc0 + 0x921) & 0x10) == 0)) &&
                        (uVar6 = fcn.00029ab0(), -1 < uVar6)) &&
                       (pcVar3 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xc0 + *0x2a910), uVar6 = *0x2a910,
                       pcVar3 != NULL)) {
                        uVar6 = (*pcVar3)(arg1,0);
                    }
                    return uVar6 & 0xffffffffffffff00;
                }
            }
            uVar1 = *(iVar2 + 0x20 + uVar6 * 6);
            if (uVar1 != 0) {
                (**(*0x2a900 + 0xf8))(uVar1 * 1000);
            }
            goto code_r0x00011e82;
        }
        uVar5 = *(arg1 + 0x58) & 0xfffffff7;
        uVar6 = uVar5;
        *(arg1 + 0x58) = uVar5;
    }
    return CONCAT71(uVar6 >> 8,0xff);
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 106368 named .text
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


/* fcn.000119fc @ 0x119fc */

ulong fcn.000119fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iStackX_8;
    code *pcStackX_10;
    
    iStackX_8 = arg1;
    section..text(&pcStackX_10,&iStackX_8,8);
    uVar1 = (arg3 & 0xffffffffU) >> 3;
    if (uVar1 == 0) {
        uVar2 = (*pcStackX_10)();
    }
    else if (uVar1 == 1) {
        uVar2 = (*pcStackX_10)(*arg2);
    }
    else if (uVar1 == 2) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8));
    }
    else if (uVar1 == 3) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10));
    }
    else if (uVar1 == 4) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18));
    }
    else if (uVar1 == 5) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18),*(arg2 + 0x20));
    }
    else if (uVar1 == 6) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18),*(arg2 + 0x20),*(arg2 + 0x28));
    }
    else if (uVar1 == 7) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18),*(arg2 + 0x20),*(arg2 + 0x28),
                               *(arg2 + 0x30));
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00029af8 @ 0x29af8 */

ulong fcn.00029af8(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00029ab0();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 8 + *0x2a910);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x00029b41. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.00029b90 @ 0x29b90 */

ulong fcn.00029b90(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00029ab0();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x18 + *0x2a910);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x00029bd9. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.00029ab0 @ 0x29ab0 */

ulong fcn.00029ab0(void)

{
    if ((*0x2a910 == 0) && ((**(*0x2a900 + 0x140))(str.CuJm,0,0x2a910), *0x2a910 == 0)) {
        return 0x8000000000000003;
    }
    return 0;
}


/* fcn.0001bf54 @ 0x1bf54 */

uint32_t fcn.0001bf54(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint16_t *arg2_00;
    char cVar1;
    int64_t arg2_01;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    uint8_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint16_t *arg2_02;
    uint32_t uVar9;
    uint8_t uVar10;
    uint16_t uVar11;
    uint32_t uStack_38;
    
    uVar11 = arg3;
    uVar7 = CONCAT71(arg3 >> 8,arg2);
    uStack_38 = 0x40;
    arg2_00 = *(*0x2a8b8 + 0x3b2);
    uVar9 = 0x10;
    arg2_01 = fcn.000133f0(CONCAT71(arg1 >> 8,0x10),0,uVar7,arg1);
    uVar10 = 0;
    if ((arg2_01 == 0) || ((cVar5 = arg3, (*(arg2_01 + 0x7c) & 0x800) != 0 && (cVar5 == *(arg1 + 0x5d))))) {
        return 0;
    }
    iVar8 = CONCAT71(uVar7 >> 8,cVar5);
    arg2_02 = arg2_00;
    cVar1 = fcn.0001c75c(arg1,arg2_01,iVar8,arg2_00);
    if (cVar1 == -1) {
        return 0xff;
    }
    if ((*(arg2_01 + 0xe) != '\x04') && (*(arg2_01 + 0xe) != '@')) {
        iVar8 = 0x200;
        uVar2 = *(arg2_01 + 0x134);
        uVar3 = (arg2_00[1] & 1 | 4) << 4;
        if ((*arg2_00 & 1) == 0) {
            *(arg2_01 + 0x134) = uVar2 & ~(1 << (uVar11 & 0xf));
        }
        else {
            if ((uVar2 >> (uVar11 & 0xf) & 1) == 0) {
                uVar3 = uVar3 | 0x10;
                *(arg2_01 + 0x134) = uVar2 | 1 << (uVar11 & 0xf);
            }
            uVar11 = *arg2_00;
            uVar4 = uVar3 | 1;
            if ((uVar11 & 0x200) == 0) {
                if ((uVar11 & 0x400) == 0) {
                    uVar4 = uVar3 | 5;
                }
            }
            else {
                uVar4 = uVar3 | 3;
            }
            uVar3 = uVar4 | 0x20;
            if ((uVar11 & 2) == 0) {
                uVar3 = uVar4;
            }
        }
        uVar4 = uVar3 | 0x100;
        if ((*arg2_00 & 4) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x200;
        if ((*arg2_00 & 8) == 0) {
            uVar3 = uVar4;
        }
        uVar4 = uVar3 | 0x400;
        if ((*arg2_00 & 0x10) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x800;
        if ((*arg2_00 & 0x100) == 0) {
            uVar3 = uVar4;
        }
        if (((arg2_00[1] & 8) != 0) && ((*arg2_00 & 0x108) == 0)) {
            iVar8 = CONCAT71(2,cVar5);
            fcn.0001c7a8(arg1,arg2_01,iVar8,8);
            (**(*0x2a900 + 0xf8))(*(arg2_01 + 0x3b) * 2000);
        }
        uVar4 = uVar3 | 0x1000;
        if ((arg2_00[1] & 2) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x2000;
        if ((arg2_00[1] & 4) == 0) {
            uVar3 = uVar4;
        }
        if ((arg2_00[1] & 0x10) != 0) {
            uVar3 = uVar3 | 0x8000;
        }
        goto code_r0x0001c397;
    }
    uVar6 = 0;
    do {
        if ((*arg2_00 & 0x10) == 0) break;
        (**(*0x2a900 + 0xf8))(10000);
        iVar8 = CONCAT71(iVar8 >> 8,cVar5);
        arg2_02 = *(*0x2a8b8 + 0x3b2);
        fcn.0001c75c(arg1,arg2_01,iVar8,arg2_02);
        uVar6 = uVar6 + 1;
    } while (uVar6 < 0x14);
    uVar2 = *arg2_00 >> 5 & 0xf;
    if ((*arg2_00 >> 5 & 0xf) != 0) {
        if (uVar2 == 3) {
            uStack_38 = 0x140;
        }
        else if (uVar2 != 5) {
            if (uVar2 == 6) {
code_r0x0001c252:
                (**(*0x2a900 + 0xf8))(12000);
                iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                arg2_02 = *(*0x2a8b8 + 0x3b2);
                fcn.0001c75c(arg1,arg2_01,iVar8,arg2_02);
                if ((*arg2_00 & 0x1e0) != 0xa0) {
code_r0x0001c28c:
                    iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                    fcn.0001c504(arg1,arg2_01,iVar8,CONCAT71(arg2_02 >> 8,1));
                    iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                    fcn.0001c75c(arg1,arg2_01,iVar8,*(*0x2a8b8 + 0x3b2));
                }
            }
            else if (uVar2 == 7) {
                do {
                    (**(*0x2a900 + 0xf8))(10000);
                    iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                    fcn.0001c75c(arg1,arg2_01,iVar8,*(*0x2a8b8 + 0x3b2));
                    if ((*arg2_00 & 0x1e0) != 0xe0) break;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x32);
                if (((*arg2_00 & 0x1e0) != 0) && ((*arg2_00 & 0x1e0) != 0xa0)) goto code_r0x0001c252;
            }
            else if (uVar2 == 8) {
                do {
                    (**(*0x2a900 + 0xf8))(10000);
                    iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                    fcn.0001c75c(arg1,arg2_01,iVar8,*(*0x2a8b8 + 0x3b2));
                    if ((*arg2_00 & 0x1e0) != 0x100) break;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x14);
            }
            else {
                if (uVar2 == 10) goto code_r0x0001c28c;
                uStack_38 = 0x41;
            }
        }
    }
    uVar3 = uStack_38 | 0x10;
    if ((arg2_00[1] & 1) == 0) {
        uVar3 = uStack_38;
    }
    uVar2 = *(arg2_01 + 0x134);
    if ((*arg2_00 & 1) == 0) {
        *(arg2_01 + 0x134) = uVar2 & ~(1 << (uVar11 & 0xf));
    }
    else {
        if ((uVar2 >> (uVar11 & 0xf) & 1) == 0) {
            uVar3 = uVar3 | 0x10;
            *(arg2_01 + 0x134) = uVar2 | 1 << (uVar11 & 0xf);
        }
        uVar4 = uVar3 | 0x8019;
        if ((arg2_00[1] & 0x30) == 0) {
            uVar4 = uVar3 | 9;
        }
        uVar3 = uVar4 | 0x20;
        if ((*arg2_00 & 2) == 0) {
            uVar3 = uVar4;
        }
    }
    if (((arg2_00[1] & 8) != 0) && (uVar3 = uVar3 | 0x4000, (*arg2_00 & 0x208) == 0)) {
        fcn.0001c7a8(arg1,arg2_01,CONCAT71(iVar8 >> 8,cVar5),8);
        (**(*0x2a900 + 0xf8))(*(arg2_01 + 0x3b) * 2000);
    }
    iVar8 = 0x200;
    uVar4 = uVar3 | 0x200;
    if ((*arg2_00 & 8) == 0) {
        uVar4 = uVar3;
    }
    uVar3 = uVar4 | 0x400;
    if ((*arg2_00 & 0x10) == 0) {
        uVar3 = uVar4;
    }
    if ((*arg2_00 & 0x200) != 0) {
        uVar3 = uVar3 | 0x800;
    }
code_r0x0001c397:
    if (arg4 == '\x01') {
        uVar11 = arg2_00[1];
        do {
            if ((uVar11 & 1) != 0) {
                iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                fcn.0001c6d0(arg1,arg2_01,iVar8,uVar9);
            }
            uVar11 = uVar11 >> 1;
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x15);
        if ((*(arg2_01 + 0xe) == '\x04') || (*(arg2_01 + 0xe) == '@')) {
            if ((arg2_00[1] & 0x40) != 0) {
                iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                fcn.0001c6d0(arg1,arg2_01,iVar8,0x19);
            }
            if ((arg2_00[1] & 0x80) != 0) {
                iVar8 = CONCAT71(iVar8 >> 8,cVar5);
                fcn.0001c6d0(arg1,arg2_01,iVar8,0x1a);
            }
            if ((arg2_00[1] & 0x20) != 0) {
                fcn.0001c6d0(arg1,arg2_01,CONCAT71(iVar8 >> 8,cVar5),0x1d);
            }
        }
    }
    return uVar3;
}


/* fcn.0001c75c @ 0x1c75c */

ulong fcn.0001c75c(ulong noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (arg2 == 0) {
        uVar1 = 0xff;
    }
    else {
        *arg2 = 0;
        uVar1 = fcn.00014760(noname_0,noname_1,CONCAT26(4,CONCAT24(arg1,0xa3) & 0xffffffffff),0x96);
    }
    return uVar1;
}


/* fcn.0001c6d0 @ 0x1c6d0 */

void fcn.0001c6d0(ulong noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    fcn.00014760(noname_0,noname_1,CONCAT24(arg1,CONCAT22(arg2,0x123)) & 0xffffffffff,0x32);
    return;
}


/* fcn.00014760 @ 0x14760 */

ulong fcn.00014760(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    int16_t iVar2;
    ulong uVar3;
    int16_t iStackX_1e;
    
    uVar1 = *(*0x2afc0 + 0x6c0);
    *(*0x2afc0 + 0x6c0) = arg3;
    iVar2 = fcn.00029bdc(noname_0,arg1,arg2 & 0xffff,arg2 >> 0x20);
    uVar3 = 0;
    *(*0x2afc0 + 0x6c0) = uVar1;
    iStackX_1e = arg2 >> 0x30;
    if ((iStackX_1e != 0) && (iVar2 == 0)) {
        uVar3 = 0xff;
    }
    return uVar3;
}


/* fcn.00029bdc @ 0x29bdc */

ulong fcn.00029bdc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ushort in_stack_00000028;
    ulong in_stack_00000030;
    ushort in_stack_00000038;
    
    iVar2 = fcn.00029ab0();
    if ((iVar2 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x50 + *0x2a910), pcVar1 == NULL)) {
        uVar3 = 0;
    }
    else {
        uVar3 = (*pcVar1)(arg1,arg2,arg3 & 0xffff,arg4 & 0xffff,in_stack_00000028,in_stack_00000030,
                          in_stack_00000038);
    }
    return uVar3;
}


/* fcn.00013284 @ 0x13284 */

int64_t fcn.00013284(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = fcn.0001b874(arg1);
    if ((-1 < iVar2) && (iVar2 = fcn.0001b8d0(arg2), -1 < iVar2)) {
        uVar3 = 0;
        *0x2a8a8 = 0;
        do {
            iVar1 = fcn.00029bdc(arg1,arg2,0x680,0);
            if (iVar1 != 0) {
                return arg3;
            }
            if ((*(arg2 + 0x1bc) & 0x40) != 0) {
                return 0;
            }
            (**(*0x2a900 + 0xf8))(10000);
            uVar3 = uVar3 + 1;
        } while (uVar3 < 5);
    }
    return 0;
}


/* fcn.0001c504 @ 0x1c504 */

ulong fcn.0001c504(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    char cVar2;
    char extraout_AL;
    ulong uVar3;
    uint32_t uVar4;
    uchar uVar5;
    unkbyte7 Var6;
    
    uVar5 = arg3;
    Var6 = arg3 >> 8;
    puVar1 = *(*0x2a8b8 + 0x3b2);
    if ((arg4 == '\0') || ((*(arg2 + 0xe) != '\x04' && (*(arg2 + 0xe) != '@')))) {
        cVar2 = fcn.0001c7a8(arg1,arg2,arg3,4);
        if (cVar2 == '\0') {
            (**(*0x2a900 + 0xf8))(20000);
            uVar4 = 0;
            while (cVar2 = fcn.0001c75c(arg1,arg2,CONCAT71(Var6,uVar5),*(*0x2a8b8 + 0x3b2)), cVar2 == '\0') {
                if ((puVar1[1] >> 4 & 1) != 0) {
                    if ((puVar1[1] >> 4 & 1) == 0) {
                        return 0xff;
                    }
                    cVar2 = fcn.0001c6d0(arg1,arg2,CONCAT71(Var6,uVar5),0x14);
                    if (cVar2 != '\0') {
                        return 0xff;
                    }
                    if (*(arg2 + 0xe) == '\x04') {
                        return 0;
                    }
                    if (*(arg2 + 0xe) != '@') {
                        if ((*(arg2 + 0x7c) & 0x800) == 0) {
                            uVar3 = 20000;
                        }
                        else {
                            if ((*puVar1 & 0x200) == 0) {
                                return 0;
                            }
                            uVar3 = 1000;
                        }
                        (**(*0x2a900 + 0xf8))(uVar3);
                        return 0;
                    }
                    return 0;
                }
                (**(*0x2a900 + 0xf8))(5000);
                uVar4 = uVar4 + 1;
                if (9 < uVar4) {
                    return 0xff;
                }
            }
        }
    }
    else {
        cVar2 = fcn.0001c7a8(arg1,arg2,arg3,0x1c);
        if (cVar2 == '\0') {
            uVar4 = 0;
            do {
                (**(*0x2a900 + 0xf8))(10000);
                fcn.0001c75c(arg1,arg2,CONCAT71(Var6,uVar5),*(*0x2a8b8 + 0x3b2));
                if (extraout_AL != '\0') {
                    return 0xff;
                }
                if ((puVar1[1] & 0x20) != 0) goto code_r0x0001c5a5;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x32);
            if ((puVar1[1] & 0x20) != 0) {
code_r0x0001c5a5:
                cVar2 = fcn.0001c6d0(arg1,arg2,CONCAT71(Var6,uVar5),0x1d);
                if ((cVar2 == '\0') && (cVar2 = fcn.0001c6d0(arg1,arg2,CONCAT71(Var6,uVar5),0x14), cVar2 == '\0'))
                {
                    return 0;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.00029e2c @ 0x29e2c */

ulong fcn.00029e2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.00029ab0();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x98 + *0x2a910), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2,arg3 & 0xffffffff,arg4);
        return uVar3;
    }
    return 0xff;
}


/* fcn.0001baa4 @ 0x1baa4 */

uint8_t * fcn.0001baa4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    
    puVar2 = *0x2afc0;
    if (((*(*0x2afc0 + 0x6c9) & 0x200000) != 0) && ((**0x2afc0 & 1) != 0)) {
        out(0x43,0xb6);
        out(0x42,arg1);
        out(0x42,arg1);
        uVar1 = in(0x61);
        out(0x61,uVar1 | 3);
        (**(*0x2a900 + 0xf8))((arg2 & 0xffffU) * 0xf);
        puVar2 = uVar1;
        out(0x61,uVar1);
    }
    return puVar2;
}


/* fcn.00013368 @ 0x13368 */

ulong fcn.00013368(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    do {
        fcn.00029bdc(arg1,arg2,0x500,0);
        if ((*(*0x2afc0 + 0x6c2) & 4) == 0) {
            return 0;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    return 0xff;
}


/* fcn.00012184 @ 0x12184 */

ulong fcn.00012184(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    
    iVar2 = fcn.00012f1c(1);
    if (iVar2 == 0) {
code_r0x000121b0:
        uVar3 = 0x8000000000000004;
    }
    else {
        iVar4 = fcn.00013284(arg1,arg2,iVar2,8);
        if (iVar4 != 0) {
            uVar1 = *(iVar4 + 2);
            fcn.000130f0(iVar2,1);
            iVar2 = fcn.00012f1c(uVar1 + 0x1f >> 5);
            if (iVar2 == 0) goto code_r0x000121b0;
            iVar4 = fcn.00013284(arg1,arg2,iVar2,uVar1);
            if (iVar4 != 0) {
                *(arg2 + 0x30) = iVar2;
                *(arg2 + 0x38) = *(iVar4 + 2);
                return 0;
            }
        }
        uVar3 = 0x8000000000000003;
    }
    return uVar3;
}


/* fcn.00029d10 @ 0x29d10 */

ulong fcn.00029d10(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.00029ab0();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x80 + *0x2a910), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2,arg3);
        return uVar3;
    }
    return 0xff;
}


/* fcn.00013918 @ 0x13918 */

void fcn.00013918(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    
    piVar3 = 0x2a460;
    arg2 = (arg3 & 0xffffU) + arg2;
    uVar4 = *0x2a462;
    iVar2 = *0x2a460;
    do {
        if (iVar2 == 0 && uVar4 == 0) {
code_r0x00013984:
            piVar3 = *0x2afc0 + 0x6e4;
            while( true ) {
                iVar2 = *piVar3;
                iVar1 = piVar3[1];
                if (iVar2 == 0 && iVar1 == 0) {
                    return;
                }
                if ((iVar1 == 0) && (iVar2 == 0)) break;
                if ((iVar1 == *(arg1 + 8)) && (iVar2 == *(arg1 + 6))) {
                    *(arg1 + 0x7c) = *(piVar3 + 7);
                    if (piVar3[2] != '\0') {
                        *(arg2 + 5) = piVar3[2];
                    }
                    if (*(piVar3 + 5) != '\0') {
                        *(arg2 + 6) = *(piVar3 + 5);
                    }
                    if (piVar3[3] != '\0') {
                        *(arg2 + 7) = piVar3[3];
                    }
                    return;
                }
                piVar3 = piVar3 + 9;
            }
            return;
        }
        if ((uVar4 == *(arg1 + 8)) && (*piVar3 == *(arg1 + 6))) {
            *(arg1 + 0x7c) = *(piVar3 + 7);
            if (piVar3[2] != '\0') {
                *(arg2 + 5) = piVar3[2];
            }
            if (*(piVar3 + 5) != '\0') {
                *(arg2 + 6) = *(piVar3 + 5);
            }
            if (piVar3[3] != '\0') {
                *(arg2 + 7) = piVar3[3];
            }
            goto code_r0x00013984;
        }
        uVar4 = *(piVar3 + 0xb);
        piVar3 = piVar3 + 9;
        iVar2 = *piVar3;
    } while( true );
}


/* fcn.00029fb0 @ 0x29fb0 */

uint64_t fcn.00029fb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    char cVar3;
    unkbyte7 Var5;
    uint64_t uVar4;
    uchar uVar6;
    uint32_t uVar7;
    int16_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    int16_t iVar13;
    uint8_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    bool bVar17;
    char in_stack_00000028;
    uint8_t uStack_48;
    
    iVar13 = arg3;
    uVar6 = arg1;
    cVar3 = arg4;
    pcVar10 = *(*0x2a8b8 + 0x39a);
    uVar4 = *0x2a8b8;
    if ((pcVar10 != NULL) &&
       (((iVar8 = *(pcVar10 + 2), iVar8 != 0 || (pcVar10[0xc] != '\0')) && (uStack_48 = 1, iVar8 != 0)))) {
        uVar1 = *(*0x2afc0 + 0x767);
        Var5 = *0x2afc0 >> 8;
        uVar9 = arg2;
        while( true ) {
            uVar4 = CONCAT71(Var5,uVar1);
            uVar15 = 0;
            if (uVar1 <= uStack_48) break;
            uVar16 = *(pcVar10 + 8);
            uVar11 = 1;
            uVar4 = uVar16;
            uVar12 = uVar11;
            do {
                if (uVar4 == 0) break;
                uVar12 = uVar12 + 1;
                uVar4 = uVar4 >> 4;
            } while (uVar12 < 5);
            arg3 = CONCAT71(arg3 >> 8,arg1);
            uVar9 = uVar9 & 0xff;
            do {
                uVar14 = uVar9;
                if (arg3 < '\0') break;
                arg1 = CONCAT71(arg1 >> 8,0x10);
                uVar15 = uVar15 << 4 | uVar9;
                uVar4 = fcn.000133f0(arg1,0,arg3,0);
                if (uVar4 == 0) break;
                arg3 = CONCAT71(arg3 >> 8,*(uVar4 + 0xc));
                uVar11 = uVar11 + 1;
                uVar14 = *(uVar4 + 0xd);
                uVar9 = uVar14;
            } while (uVar11 < 5);
            if (*pcVar10 == '\x01') {
                if (pcVar10[1] == '\x02') {
                    bVar17 = uVar12 == uVar11;
code_r0x0002a0a3:
                    if (!bVar17) goto code_r0x0002a1ae;
                }
code_r0x0002a0a9:
                cVar2 = pcVar10[0xc];
                uVar4 = CONCAT71(uVar4 >> 8,cVar2);
                if ((cVar2 == '\0') || (cVar2 == cVar3)) {
code_r0x0002a0b9:
                    return CONCAT71(uVar4 >> 8,1);
                }
            }
            else if (iVar8 == iVar13) {
                if (pcVar10[4] == '\0') goto code_r0x0002a0a9;
                if (pcVar10[1] == '\x03') {
                    uVar7 = (8 - uVar12) * 4;
                    arg1 = uVar7;
                    uVar15 = (0xffffffffU >> (uVar7 & 0x1f)) >> 4 & uVar15;
                    uVar4 = uVar15;
                    if (uVar15 == uVar16) {
                        bVar17 = uVar14 == pcVar10[4];
                        goto code_r0x0002a0a3;
                    }
                }
                else if (uVar12 == uVar11) {
                    if (pcVar10[1] == '\x02') {
                        cVar2 = pcVar10[0xc];
                        uVar4 = CONCAT71(uVar4 >> 8,cVar2);
                        if ((cVar2 == '\0') || (cVar2 == cVar3)) goto code_r0x0002a0b9;
                    }
                    if (uVar12 != 0) {
                        arg3 = uVar12 - 1;
                        uVar9 = 0;
                        do {
                            uVar4 = uVar9;
                            iVar8 = uVar4;
                            if (uVar4 == uVar12 - 1) {
                                Var5 = uVar4 >> 8;
                                if (pcVar10[1] == 0) {
                                    arg1 = 0;
                                    if ((uVar15 == uVar16) && (uVar14 == pcVar10[4])) {
                                        cVar2 = pcVar10[0xc];
                                        uVar4 = CONCAT71(Var5,cVar2);
                                        if ((cVar2 == '\0') || (cVar2 == cVar3)) goto code_r0x0002a0b9;
                                    }
                                }
                                else {
                                    uVar7 = pcVar10[1] - 1;
                                    arg1 = uVar7;
                                    if ((uVar7 == 0) && (uVar14 == pcVar10[4])) {
                                        if (uVar15 != uVar16) goto code_r0x0002a0b9;
                                        cVar2 = pcVar10[0xc];
                                        uVar4 = CONCAT71(Var5,cVar2);
                                        if (((cVar2 != '\0') && (in_stack_00000028 == '\x01')) && (cVar2 != cVar3))
                                        goto code_r0x0002a0b9;
                                    }
                                }
                            }
                            else {
                                uVar4 = uVar15 ^ uVar16;
                                if (((uVar15 ^ uVar16) & 0xf) != 0) break;
                            }
                            uVar11 = iVar8 + 1;
                            uVar15 = uVar15 >> 4;
                            uVar16 = uVar16 >> 4;
                            uVar9 = uVar11;
                        } while (uVar11 < uVar12);
                    }
                }
            }
code_r0x0002a1ae:
            uStack_48 = uStack_48 + 1;
            iVar8 = *(pcVar10 + 0x12);
            if (iVar8 == 0) break;
            Var5 = uVar4 >> 8;
            uVar9 = arg2 & 0xff;
            arg1 = CONCAT71(arg1 >> 8,uVar6);
            pcVar10 = pcVar10 + 0x10;
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.0001371c @ 0x1371c */

uint32_t * fcn.0001371c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = arg2;
    arg2_00 = fcn.0001363c(arg2,0);
    if (arg2_00 == NULL) {
code_r0x0001374f:
        arg2_00 = NULL;
    }
    else {
        uVar1 = *arg2_00;
        if ((uVar1 & 1) == 0) {
            cVar2 = fcn.000146e0(CONCAT71(iVar4 >> 8,*(arg2 + 0x57)));
            if (cVar2 == '\x01') goto code_r0x0001374f;
        }
        else {
            *arg2 = *arg2 | uVar1;
            *(arg2 + 0x128) = *(arg2_00 + 0x4a);
            arg2_00[0x12] = 0;
            iVar4 = *(*0x2a8c8 + (*(arg2_00 + 0xb) - 1) * 8);
            iVar3 = fcn.00013248(*(arg2_00 + 0x26));
            if ((iVar3 == 0) || (*(iVar3 + 0x20) == NULL)) {
                if (arg2_00[0x14] != '\0') {
                    fcn.00029dd4(iVar4,arg2_00);
                    *(arg2_00 + 0x14) = 0;
                }
            }
            else {
                (**(iVar3 + 0x20))(arg2_00);
                arg2_00[0x26] = 0xffffffff;
                arg2_00[0x27] = 0;
            }
            if ((*(arg2_00 + 0x3e) != 0) && (*(arg2_00 + 0x3e) != *(arg2 + 0xf8))) {
                fcn.00029ea8(iVar4,arg2_00);
            }
            if (((*arg2_00 & 2) != 0) && (*(arg2_00 + 10) != 0)) {
                *(*0x2afc0 + 0x5a5) = *(*0x2afc0 + 0x5a5) | 1LL << (*(arg2_00 + 10) & 0x3f);
                *(arg2_00 + 10) = 0;
            }
        }
        if ((*arg2_00 & 4) == 0) {
            *(arg2 + 0x110) = arg2_00[0x44];
            if (arg2_00 != arg2) {
                section..text(arg2_00,arg2,0x1c0);
            }
            *arg2_00 = *arg2_00 & 0x347;
            if ((uVar1 & 0x800) != 0) {
                *arg2_00 = *arg2_00 | 0x800;
            }
        }
        else {
            *(arg2_00 + 0xb) = *(arg2 + 0xb);
            *(arg2_00 + 3) = *(arg2 + 0xc);
            *(arg2_00 + 0xd) = *(arg2 + 0xd);
            *(arg2_00 + 0xe) = *(arg2 + 0xe);
            *(arg2_00 + 4) = *(arg2 + 0x10);
            *(arg2_00 + 0x3e) = *(arg2 + 0xf8);
            *(arg2_00 + 10) = *(arg2 + 10);
        }
        *arg2_00 = *arg2_00 | 3;
        if (((*arg2 & 8) == 0) && (fcn.00029bdc(arg1,arg2_00,0x900,0), (*arg2 & 0x200) != 0)) {
            fcn.00029bdc(arg1,arg2_00,0xb01,0);
        }
    }
    return arg2_00;
}


/* fcn.00029ea8 @ 0x29ea8 */

ulong fcn.00029ea8(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.00029ab0();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xa0 + *0x2a910), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.00012014 @ 0x12014 */

uint64_t fcn.00012014(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    code *pcVar2;
    uint8_t *arg2_00;
    char cVar3;
    uint64_t uVar4;
    int64_t noname_1;
    ulong uVar5;
    int64_t arg1_00;
    
    cVar3 = arg3;
    if (arg2 < '\0') {
        uVar4 = fcn.00029ab0();
        if (-1 < uVar4) {
            pcVar2 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x40 + *0x2a910);
            uVar4 = *0x2a910;
            if (pcVar2 != NULL) {
                uVar4 = (*pcVar2)(arg1,arg3 & 0xff);
            }
        }
    }
    else {
        uVar4 = *0x2afc0;
        if ((*(*0x2afc0 + 0x711) & 4) != 0) {
            uVar5 = CONCAT71(arg3 >> 8,arg2);
            arg2_00 = *(*0x2a8b8 + 0x3b2);
            noname_1 = fcn.000133f0(CONCAT71(arg1 >> 8,0x10),0,uVar5,arg1);
            uVar4 = 0;
            if ((noname_1 != 0) && ((uVar4 = 0x800, (*(noname_1 + 0x7c) & 0x800) == 0 || (cVar3 != *(arg1 + 0x5d))))) {
                cVar1 = *(noname_1 + 0xe);
                uVar4 = CONCAT71(8,cVar1);
                if ((cVar1 != '\x04') && (cVar1 != '@')) {
                    arg1_00 = CONCAT71(uVar5 >> 8,cVar3);
                    uVar4 = fcn.0001c75c(arg1,noname_1,arg1_00,arg2_00);
                    if ((*arg2_00 & 2) != 0) {
                        uVar4 = fcn.0001c6d0(arg1,noname_1,CONCAT71(arg1_00 >> 8,cVar3),1);
                    }
                }
            }
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00029dd4 @ 0x29dd4 */

ulong fcn.00029dd4(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.00029ab0();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x70 + *0x2a910), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.00011f84 @ 0x11f84 */

ulong fcn.00011f84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong extraout_RAX;
    
    if (arg2 < '\0') {
        iVar2 = fcn.00029ab0();
        if ((iVar2 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x38 + *0x2a910), pcVar1 == NULL)) {
            uVar3 = 0xff;
        }
        else {
            uVar3 = (*pcVar1)(arg1,arg3,arg4);
        }
    }
    else if ((*(*0x2afc0 + 0x711) & 4) == 0) {
        uVar3 = 0;
    }
    else {
        fcn.0001bf54(arg1,arg2,arg3,arg4);
        uVar3 = extraout_RAX;
    }
    return uVar3;
}


/* fcn.00012258 @ 0x12258 */

uchar fcn.00012258(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uchar uVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (arg2 < '\0') {
        iVar3 = fcn.00029ab0();
        if ((iVar3 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xa8 + *0x2a910), pcVar1 == NULL)) {
            return 0xff;
        }
        uVar2 = (*pcVar1)(arg1,arg3 & 0xff);
    }
    else {
        if ((*(*0x2afc0 + 0x711) & 4) == 0) {
            return 0xff;
        }
        uVar4 = CONCAT71(arg3 >> 8,arg2);
        iVar3 = fcn.000133f0(CONCAT71(arg1 >> 8,0x10),0,uVar4,arg1);
        if (iVar3 == 0) {
            return 0xff;
        }
        if (((*(iVar3 + 0x7c) & 0x800) != 0) && (arg3 == *(arg1 + 0x5d))) {
            return 0;
        }
        uVar2 = fcn.0001c504(arg1,iVar3,CONCAT71(uVar4 >> 8,arg3),0);
    }
    return uVar2;
}


/* fcn.00012108 @ 0x12108 */

uint8_t fcn.00012108(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint8_t uVar2;
    int64_t iVar3;
    
    if (arg2 < '\0') {
        iVar3 = fcn.00029ab0();
        if ((iVar3 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x48 + *0x2a910), pcVar1 == NULL)) {
            uVar2 = 0xff;
        }
        else {
            uVar2 = (*pcVar1)(arg1,arg3);
        }
        return uVar2;
    }
    return ~-((*(*0x2afc0 + 0x711) & 4) != 0);
}


/* fcn.00012314 @ 0x12314 */

uint64_t fcn.00012314(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int16_t iVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    uint16_t uVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint8_t *arg3_00;
    int64_t iVar9;
    uint8_t *arg3_01;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t *puVar13;
    uint32_t *arg1_00;
    unkbyte7 Var14;
    uint8_t uVar15;
    uint64_t uVar16;
    uint8_t uVar17;
    uint64_t uVar18;
    uint8_t *puVar19;
    ulong uVar20;
    uint64_t uVar21;
    ulong *puVar22;
    char cStackX_10;
    uint8_t uStackX_20;
    ushort uVar23;
    uint16_t uStack_88;
    int64_t iStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    uint8_t *puStack_60;
    char *pcStack_58;
    
    uStack_68 = 0;
    bVar4 = false;
    uVar16 = 1;
    bVar3 = false;
    puVar13 = *(*0x2a8b8 + 0x42);
    *puVar13 = 1;
    *(puVar13 + 10) = 0;
    *(puVar13 + 1) = 0;
    *(puVar13 + 0x1f) = 0;
    puVar13[0x3e] = 0;
    puVar13[0x3f] = 0;
    *(puVar13 + 3) = arg2;
    *(puVar13 + 0xd) = arg3;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    *(puVar13 + 0xe) = 0;
    iVar9 = arg1;
    if (((*(*0x2afc0 + 0x921) & 4) != 0) && ((**0x2afc0 & 0x4000000) == 0)) {
        uVar7 = fcn.00010370(arg1,arg2);
        *(puVar13 + 0x20) = uVar7;
    }
    uVar18 = (arg4 & 0xffffffffU) >> 1;
    uVar15 = uVar18 & 0x47;
    *(puVar13 + 0xe) = uVar15;
    if ((*(*0x2afc0 + 0x6c9) & 0x20000000) != 0) {
        uVar17 = 0;
        puVar8 = puVar13;
        while (arg3 = CONCAT71(arg3 >> 8,puVar8[3]), -1 < puVar8[3]) {
            iVar9 = CONCAT71(iVar9 >> 8,0x10);
            puVar8 = fcn.000133f0(iVar9,0,arg3,0);
            if ((puVar8 == NULL) || (uVar17 = uVar17 + 1, 4 < uVar17)) break;
        }
    }
    puVar19 = NULL;
    if ((uVar18 & 0x47) == 0) {
        *(puVar13 + 4) = 0x40;
    }
    else if (uVar15 < 3) {
        *(puVar13 + 4) = 8;
    }
    else if ((uVar15 == 4) || (uVar15 == 0x40)) {
        *(puVar13 + 4) = 0x200;
    }
    *(puVar13 + 0xb) = *arg1;
    cStackX_10 = '\0';
    arg3_00 = fcn.00012f1c(0x40);
    puStack_60 = arg3_00;
    if (arg3_00 != NULL) {
        uStack_70 = 2;
        cVar5 = fcn.00029e2c(arg1,puVar13,arg4 & 0xffffffff,&uStack_68);
        if (cVar5 == '\0') {
            *(puVar13 + 0x3e) = uStack_68;
            uVar12 = (*0x2afc0)[0x1b0];
            *(*0x2afc0 + 0x1b0) = 1000;
            puVar19 = arg3_00;
            iVar9 = fcn.00013284(arg1,puVar13,arg3_00,8);
            *(*0x2afc0 + 0x1b0) = uVar12;
            if (iVar9 != 0) {
                uStack_70 = 3;
                if (*(iVar9 + 2) < 0x300) {
                    if (*(iVar9 + 7) == '\0') {
                        uVar6 = 0x40;
                    }
                    else {
                        uVar6 = *(iVar9 + 7);
                    }
                }
                else {
                    uVar6 = 1 << (*(iVar9 + 7) & 0x1f);
                }
                *(puVar13 + 4) = uVar6;
                if (*(puVar13 + 0xe) < 3) {
                    (**(*0x2a900 + 0xf8))(10000);
                }
                uVar16 = 1;
                do {
                    uVar15 = uVar16;
                    if ((*(*0x2afc0 + 0x5a5) >> (uVar16 & 0x3f) & 1) != 0) break;
                    uVar15 = uVar15 + 1;
                    uVar16 = uVar15;
                } while (uVar15 < 0x40);
                if (uVar15 != 0x40) {
                    puVar19 = CONCAT71(puVar19 >> 8,uVar15);
                    cVar5 = fcn.00013368(arg1,puVar13,puVar19);
                    iVar9 = *0x2a900;
                    if (cVar5 != -1) {
                        *(*0x2afc0 + 0x5a5) = *(*0x2afc0 + 0x5a5) & ~(1LL << (uVar15 & 0x3f));
                        *(puVar13 + 10) = uVar15;
                        (**(iVar9 + 0xf8))(2000);
                        puVar19 = arg3_00;
                        puVar8 = fcn.00013284(arg1,puVar13,arg3_00,0x12);
                        if ((puVar8 != NULL) && (0x11 < *puVar8)) {
                            if (*(puVar8 + 0x11) == '\0') {
                                *(puVar8 + 0x11) = 1;
                            }
                            if (puVar13 + 0x66 != puVar8) {
                                section..text(puVar13 + 0x66,puVar8,0x12);
                            }
                            uVar12 = puVar8[2];
                            *(puVar13 + 6) = uVar12;
                            iVar2 = *(puVar8 + 10);
                            *(puVar13 + 2) = iVar2;
                            uStack_70 = 5;
                            uStackX_20 = 0;
                            for (puVar22 = *(*0x2afc0 + 0x756); puVar22 != *0x2afc0 + 0x756; puVar22 = *puVar22) {
                                if ((*(puVar22 + 2) == uVar12) && (*(puVar22 + 0x12) == iVar2)) {
                                    uStackX_20 = *(puVar22 + 0x14) - 1;
                                    break;
                                }
                            }
                            if (*(puVar13 + 0xe) == '\x02') {
                                (**(*0x2a900 + 0xf8))(100);
                            }
                            if (((*(*0x2afc0 + 0x921) & 1) != 0) && (0x2ff < *(puVar13 + 0x19a))) {
                                fcn.00012184(arg1,puVar13);
                            }
                            while( true ) {
                                puVar19 = arg3_00;
                                arg3_01 = fcn.00013284(arg1,puVar13,arg3_00,0xff);
                                if (arg3_01 == NULL) break;
                                uVar6 = *(arg3_01 + 2);
                                if (0xff < uVar6) {
                                    if (0x7ff < uVar6) {
                                        uVar6 = 0x7ff;
                                    }
                                    puVar19 = arg3_00;
                                    arg3_01 = fcn.00013284(arg1,puVar13,arg3_00,uVar6);
                                    if (arg3_01 == NULL) break;
                                }
                                if (*(puVar13 + 0xe) == '\x02') {
                                    (**(*0x2a900 + 0xf8))(100);
                                }
                                if (arg3_01[1] == 2) {
                                    if (*arg3_01 == 0) {
                                        *arg3_01 = 9;
                                    }
                                    puVar8 = arg1;
                                    puVar19 = arg3_01;
                                    fcn.00029d10(arg1,puVar13,arg3_01);
                                    arg1_00 = *arg3_01;
                                    *(puVar13 + 0x12) = arg3_01[5];
                                    while( true ) {
                                        if (((uVar6 <= arg1_00) || (puVar19 = arg1_00 + arg3_01, *puVar19 == 0)) ||
                                           (uVar12 = *puVar19 + arg1_00, puVar8 = uVar12, uVar6 < uVar12))
                                        goto code_r0x00012771;
                                        if ((puVar19[1] == 4) && (puVar19[3] != 0)) break;
                                        arg1_00 = arg1_00 + *puVar19;
                                    }
                                    *puVar13 = *puVar13 | 0x200;
code_r0x00012771:
                                    uVar16 = *arg3_01;
                                    uStack_88 = *arg3_01;
                                    if (uStack_88 < uVar6) {
                                        while ((arg3_01[uVar16] != 0 &&
                                               (uVar12 = arg3_01[uVar16] + uVar16, puVar8 = uVar12, uVar12 <= uVar6)))
                                        {
                                            uVar18 = uVar16;
                                            if ((arg3_01[uVar16 + 1] == 4) && (arg3_01[uVar16 + 3] == 0)) {
                                                *(puVar13 + 0x13) = arg3_01[uVar16 + 2];
                                                *(puVar13 + 5) = 0;
                                                if (((bVar3) && ((*(*0x2afc0 + 0x921) & 4) != 0)) &&
                                                   ((**0x2afc0 & 0x4000000) == 0)) {
                                                    uVar7 = fcn.00010370(puVar8,arg1_00);
                                                    *(puVar13 + 0x20) = uVar7;
                                                }
                                                arg1_00 = puVar13;
                                                puVar19 = arg3_01;
                                                uVar21 = uVar16;
                                                fcn.00013918(puVar8,puVar13,arg3_01,uVar16);
                                                if ((puVar13[0x1f] & 4) == 0) {
                                                    uVar15 = arg3_01[uVar16 + 5];
                                                    puVar19 = *(arg1 + 0x2a);
                                                    arg1_00 = CONCAT71(arg1_00 >> 8,*(puVar13 + 0xd));
                                                    puVar8 = CONCAT71(puVar8 >> 8,puVar13[3]);
                                                    uVar23 = 1;
                                                    cVar5 = fcn.00029fb0(puVar8,arg1_00,puVar19,
                                                                         CONCAT71(uVar21 >> 8,uVar15));
                                                    if (cVar5 != '\0') goto code_r0x000129f1;
                                                    uVar17 = arg3_01[uVar16 + 6];
                                                    Var14 = arg1_00 >> 8;
                                                    puVar22 = 0x2aff0;
                                                    uVar1 = arg3_01[uVar16 + 7];
                                                    puVar19 = CONCAT71(puVar19 >> 8,uVar1);
                                                    cVar5 = -1;
                                                    iStack_78 = 0;
                                                    uVar18 = 0;
                                                    do {
                                                        pcStack_58 = puVar22 + -2;
                                                        if (*pcStack_58 != '\0') {
                                                            if (*puVar22 == NULL) {
                                                                if (((*(puVar22 + -0xf) == uVar15) ||
                                                                    (*(puVar22 + -0xe) == uVar17)) ||
                                                                   (*(puVar22 + -0xd) == puVar19)) {
                                                                    cVar5 = *pcStack_58;
                                                                    if (cVar5 != -1) goto code_r0x000128e2;
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                uVar20 = CONCAT71(puVar19 >> 8,uVar17);
                                                                uVar7 = CONCAT71(Var14,uVar15);
                                                                cVar5 = (**puVar22)(puVar13,uVar7,uVar20,
                                                                                    CONCAT71(iStack_78 >> 8,puVar19),
                                                                                    uVar23);
                                                                Var14 = uVar7 >> 8;
                                                                puVar19 = CONCAT71(uVar20 >> 8,uVar1);
                                                                if (cVar5 != -1) {
code_r0x000128e2:
                                                                    *(puVar13 + 1) = cVar5;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        iStack_78 = iStack_78 + 1;
                                                        uVar18 = uVar18 + 0x30;
                                                        puVar22 = puVar22 + 6;
                                                    } while (uVar18 < 0x150);
                                                    *(puVar13 + 0x16) = uVar17;
                                                    *(puVar13 + 0x57) = uVar15;
                                                    *(puVar13 + 0x59) = puVar19;
                                                    puVar8 = arg1;
                                                    arg1_00 = puVar13;
                                                    puVar10 = fcn.0001371c(arg1,puVar13);
                                                    puVar11 = puVar10;
                                                    if (cVar5 != -1) {
                                                        if (puVar10 != NULL) {
                                                            *(puVar10 + 0x26) = iStack_78;
                                                            puVar8 = arg1;
                                                            puVar19 = arg3_01;
                                                            puVar11 = (**(pcStack_58 + 0x18))
                                                                                (arg1,puVar10,arg3_01,uStack_88,
                                                                                 uVar6);
                                                            arg1_00 = puVar10;
                                                            if ((puVar11 != NULL) && ((*puVar11 & 1) != 0))
                                                            goto code_r0x0001295c;
                                                        }
code_r0x000129ec:
                                                        uVar18 = uStack_88;
                                                        goto code_r0x000129f1;
                                                    }
code_r0x0001295c:
                                                    if (puVar11 == NULL) goto code_r0x000129ec;
                                                    bVar3 = true;
                                                    puVar13 = *0x2afc0;
                                                    if (((*(*0x2afc0 + 0x921) & 4) != 0) &&
                                                       ((**0x2afc0 & 0x4000000) == 0)) {
                                                        uVar7 = fcn.00010370(*0x2afc0,arg1_00);
                                                        *(puVar11 + 0x22) = uVar7;
                                                    }
                                                    puVar8 = CONCAT71(puVar13 >> 8,1);
                                                    cStackX_10 = '\x01';
                                                    if (((**0x2afc0 & 0x10000) != 0) && (*(puVar11 + 0x57) == '\b')) {
                                                        bVar4 = true;
                                                    }
                                                    uVar18 = uStack_88;
                                                    puVar13 = puVar11;
                                                }
                                                else {
code_r0x000129f1:
                                                    puVar8 = CONCAT71(puVar8 >> 8,cStackX_10);
                                                }
                                                if ((1 < arg3_01[4]) && (puVar8 != '\0')) {
                                                    puVar8 = *(*0x2a8b8 + 0x42);
                                                    *puVar8 = *puVar8 | 8;
                                                }
                                            }
                                            if ((arg3_01[uVar16] == 0) ||
                                               ((arg3_01[uVar16 + 1] == 4 && (arg3_01[uVar16 + 5] == 9)))) break;
                                            uStack_88 = uVar18 + arg3_01[uVar16];
                                            uVar16 = uStack_88;
                                            if (uVar6 <= uStack_88) break;
                                            puVar13 = *(*0x2a8b8 + 0x42);
                                        }
                                        arg3_00 = puStack_60;
                                        if (cStackX_10 != '\0') {
                                            uStack_70 = *(*0x2a8b8 + 0x42);
                                            if (!bVar4) {
                                                fcn.0001baa4(CONCAT71(puVar8 >> 8,4),0x1000);
                                            }
                                            goto code_r0x00012b50;
                                        }
                                    }
                                }
                                uStackX_20 = uStackX_20 + 1;
                                if (*(puVar13 + 0x1a9) <= uStackX_20) break;
                            }
                        }
                    }
                }
            }
            puVar8 = *0x2afc0;
            if ((*0x2afc0)[0x19] < 0x30) {
                *(*0x2afc0 + (*0x2afc0)[0x19] * 2 + 4) = uStack_70;
                *(*0x2afc0 + 0x19) = (*0x2afc0)[0x19] + '\x01';
            }
            fcn.0001baa4(CONCAT71(puVar8 >> 8,8),0x2000);
            puVar8 = puVar13;
            fcn.00029ea8(arg1,puVar13);
            if ((*(puVar13 + 0xc) != 0) && (puVar13[0xe] != 0)) {
                puVar8 = puVar13[0xe] + 0x1f >> 5;
                fcn.000130f0(*(puVar13 + 0xc),puVar8);
            }
            if (4 < uStack_70) {
                fcn.00012014(arg1,CONCAT71(puVar8 >> 8,puVar13[3]),CONCAT71(puVar19 >> 8,*(puVar13 + 0xd)));
                uStack_70 = 0;
            }
            if (*(puVar13 + 10) != '\0') {
                *(*0x2afc0 + 0x5a5) = *(*0x2afc0 + 0x5a5) | 1LL << (*(puVar13 + 10) & 0x3f);
            }
code_r0x00012b50:
            fcn.000130f0(puStack_60,0x40);
            return uStack_70;
        }
        fcn.000130f0(arg3_00,0x40);
        uVar16 = 2;
        puVar19 = arg3_00;
    }
    fcn.0001baa4(CONCAT71(puVar19 >> 8,8),0x2000);
    return uVar16;
}


/* fcn.00012cf8 @ 0x12cf8 */

uchar fcn.00012cf8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    unkbyte7 Var1;
    unkbyte7 Var2;
    
    Var2 = arg3 >> 8;
    Var1 = arg2 >> 8;
    fcn.00012014(arg1,arg2,arg3);
    fcn.00012b74(arg1,CONCAT71(Var1,arg2),CONCAT71(Var2,arg3));
    return 0;
}


/* fcn.0001b874 @ 0x1b874 */

uint64_t fcn.0001b874(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        uVar1 = *(*0x2a8b8 + 0x10);
        if (uVar1 != 0) {
            do {
                if (arg1 == *(*0x2a8c8 + uVar2 * 8)) break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        if (uVar2 != uVar1) {
            return -((*(arg1 + 0x58) & 0xc) != 0xc) & 0x800000000000000f;
        }
    }
    return 0x800000000000000f;
}


/* fcn.0001363c @ 0x1363c */

uint32_t * fcn.0001363c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    bool bVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    puVar3 = NULL;
    uVar4 = 1;
    if (1 < (*0x2afc0)[0x716]) {
        do {
            puVar2 = uVar4 * 0x1c0 + *(*0x2a8b8 + 0x42);
            if ((*puVar2 & 0x20) == 0) {
                if ((*puVar2 & 1) == 0) {
                    if (puVar3 != NULL) {
                        puVar2 = puVar3;
                    }
                    puVar3 = puVar2;
                }
                else if (((*puVar2 & 2) == 0) || ((puVar2[3] == *(iVar1 + 0xc) && (*(puVar2 + 0xd) == *(iVar1 + 0xd)))))
                {
                    if ((**0x2afc0 & 2) == 0) {
                        if ((*(puVar2 + 6) == *(iVar1 + 6)) && (puVar2[2] == *(iVar1 + 8))) {
                            bVar5 = *(puVar2 + 0x13) == *(iVar1 + 0x13);
                            goto code_r0x000136f1;
                        }
                    }
                    else if (((*(puVar2 + 6) == *(iVar1 + 6)) && (puVar2[2] == *(iVar1 + 8))) &&
                            (*(puVar2 + 0x13) == *(iVar1 + 0x13))) {
                        bVar5 = *(puVar2 + 0xe) == *(iVar1 + 0xe);
code_r0x000136f1:
                        if ((bVar5) && (*(puVar2 + 0xf) == arg2)) {
                            *puVar2 = *puVar2 | 0x800;
                            return puVar2;
                        }
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (*0x2afc0)[0x716]);
    }
    return puVar3;
}


/* fcn.000146e0 @ 0x146e0 */

ulong fcn.000146e0(int64_t arg1)

{
    char cVar1;
    char cVar2;
    uint in_R8D;
    
    cVar2 = arg1;
    cVar1 = fcn.000133f0(CONCAT71(arg1 >> 8,0x31),0,CONCAT31(in_R8D >> 8,cVar2),0);
    if (cVar1 != '\0') {
        if (cVar2 == '\x03') {
            cVar2 = *(*0x2afc0 + 0x717);
        }
        else if (cVar2 == '\t') {
            cVar2 = *(*0x2afc0 + 0x718);
        }
        else {
            if (cVar2 != '\b') {
                return 0;
            }
            cVar2 = *(*0x2afc0 + 0x719);
        }
        if ((cVar2 == '\0') || (cVar1 == cVar2)) {
            return 1;
        }
    }
    return 0;
}


/* fcn.00013fa8 @ 0x13fa8 */

ulong fcn.00013fa8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    unkbyte7 Var8;
    ulong uVar7;
    ulong *puVar9;
    int64_t iVar10;
    unkbyte7 Var12;
    ulong uVar11;
    char *pcVar13;
    uint64_t uVar14;
    int64_t iStack_30;
    
    iStack_30 = 0;
    pcVar13 = NULL;
    iVar5 = fcn.0001b874(arg1);
    if ((-1 < iVar5) && (iVar5 = arg2, iVar6 = fcn.0001b8d0(arg2), -1 < iVar6)) {
        *0x2a8a8 = 0;
        iVar6 = arg2;
        iVar10 = arg3;
        fcn.00013918(iVar5,arg2,arg3,*arg3);
        if ((*(arg2 + 0x7c) & 4) == 0) {
            cVar1 = *(arg4 + 6);
            Var8 = iVar6 >> 8;
            puVar9 = 0x2ae70;
            cVar2 = *(arg4 + 7);
            Var12 = iVar10 >> 8;
            iVar5 = 0;
            cVar3 = *(arg4 + 5);
            uVar14 = 0;
            cVar4 = -1;
            do {
                if (cVar4 != -1) goto code_r0x000140b3;
                pcVar13 = puVar9 + -2;
                if (*pcVar13 != '\0') {
                    if (*puVar9 == NULL) {
                        if (((*(puVar9 + -0xf) == cVar3) && (*(puVar9 + -0xe) == cVar1)) && (*(puVar9 + -0xd) == cVar2))
                        {
                            cVar4 = *pcVar13;
                        }
                    }
                    else {
                        uVar11 = CONCAT71(Var12,cVar1);
                        uVar7 = CONCAT71(Var8,cVar3);
                        cVar4 = (**puVar9)(arg2,uVar7,uVar11,cVar2);
                        Var8 = uVar7 >> 8;
                        Var12 = uVar11 >> 8;
                        if (cVar4 != -1) {
                            iStack_30 = iVar5;
                        }
                    }
                }
                iVar5 = iVar5 + 1;
                uVar14 = uVar14 + 0x30;
                puVar9 = puVar9 + 6;
            } while (uVar14 < 0x150);
            if (cVar4 != -1) {
code_r0x000140b3:
                *(arg2 + 4) = cVar4;
                *(arg2 + 0x98) = iStack_30 + 0x80000000;
                iVar5 = (**(pcVar13 + 0x18))(arg1,arg2,arg3,arg4 - arg3,*(arg3 + 2));
                if ((iVar5 != 0) && (*(arg2 + 0x98) == iStack_30 + 0x80000000)) {
                    return 0;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.00013db4 @ 0x13db4 */

uint fcn.00013db4(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint uVar2;
    int64_t iVar3;
    uint8_t *arg3;
    uint16_t uVar4;
    uint8_t uVar5;
    uint8_t *arg4;
    
    iVar3 = fcn.0001b874(arg1);
    if ((-1 < iVar3) && (iVar3 = fcn.0001b8d0(arg2), -1 < iVar3)) {
        *0x2a8a8 = 0;
        if ((*(arg2 + 4) != '\0') && (*(arg2 + 4) != '\x06')) {
            *0x2a8a8 = 0;
            return 0;
        }
        iVar3 = fcn.00012f1c(0x40);
        if (iVar3 != 0) {
            uVar5 = 0;
            uVar2 = 0xff;
            if (*(arg2 + 0x1a9) != '\0') {
                do {
                    uVar1 = *(*0x2afc0 + 0x6c0);
                    *(*0x2afc0 + 0x6c0) = 500;
                    arg3 = fcn.00013284(arg1,arg2,iVar3,0xff);
                    if (arg3 == NULL) {
                        *(*0x2afc0 + 0x6c0) = uVar1;
                        break;
                    }
                    uVar4 = *(arg3 + 2);
                    if (0xff < uVar4) {
                        if (0x7ff < uVar4) {
                            uVar4 = 0x7ff;
                        }
                        arg3 = fcn.00013284(arg1,arg2,iVar3,uVar4);
                        if (arg3 != NULL) goto code_r0x00013eb5;
                        *(*0x2afc0 + 0x6c0) = uVar1;
code_r0x00013f0f:
                        if (arg3 != NULL) {
                            if (0x7ff < *(arg3 + 2)) {
                                arg3[2] = 0xff;
                                arg3[3] = 7;
                            }
                            uVar4 = *arg3;
                            goto code_r0x00013f23;
                        }
                        break;
                    }
code_r0x00013eb5:
                    *(*0x2afc0 + 0x6c0) = uVar1;
                    if (*(arg2 + 0xe) == '\x02') {
                        (**(*0x2a900 + 0xf8))(1000);
                    }
                    if (((arg3 != NULL) && (arg3[1] == 2)) && (*(arg2 + 0x12) == arg3[5])) goto code_r0x00013f0f;
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(arg2 + 0x1a9));
            }
code_r0x00013f79:
            fcn.000130f0(iVar3,0x40);
            return uVar2;
        }
    }
    return 0xff;
code_r0x00013f23:
    if (*(arg3 + 2) <= uVar4) goto code_r0x00013f79;
    arg4 = arg3 + uVar4;
    if (*arg4 == 0) goto code_r0x00013f79;
    if (((arg4[1] == 4) && (*(arg2 + 0x13) == arg4[2])) && (*(arg2 + 0x14) == arg4[3])) {
        uVar2 = fcn.00013fa8(arg1,arg2,arg3,arg4);
        goto code_r0x00013f79;
    }
    uVar4 = uVar4 + *arg4;
    goto code_r0x00013f23;
}


/* fcn.00014a00 @ 0x14a00 */

char fcn.00014a00(void)

{
    uint8_t uVar1;
    int16_t iVar2;
    char cVar3;
    
    cVar3 = '\x10';
    iVar2 = -1;
    do {
        while( true ) {
            uVar1 = in(100);
            uVar1 = uVar1 & 2;
            if ((uVar1 == 0) || (iVar2 == 0)) break;
            iVar2 = iVar2 + -1;
        }
        cVar3 = cVar3 + -1;
    } while ((cVar3 != '\0') && (uVar1 != 0));
    return -(uVar1 != 0);
}


/* fcn.00014ba4 @ 0x14ba4 */

ulong fcn.00014ba4(void)

{
    uchar uVar1;
    uint64_t uVar2;
    
    uVar1 = **(*0x2a8b8 + 0x5a);
    uVar2 = *0x2a8b8 >> 8;
    **(*0x2a8b8 + 0x5a) = 0;
    *(*0x2a8b8 + 0x5a) = *(*0x2a8b8 + 0x5a) + 1;
    if (*(*0x2a8b8 + 0x5a) == *0x2afc0 + 0x6a0) {
        *(*0x2a8b8 + 0x5a) = *0x2afc0 + 0x694;
    }
    return CONCAT71(uVar2,uVar1);
}


/* fcn.00014a68 @ 0x14a68 */

char fcn.00014a68(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uchar uVar3;
    int16_t iVar4;
    uchar uVar5;
    
    uVar5 = arg2;
    uVar3 = arg1;
    cVar2 = fcn.00014a00();
    if (cVar2 == '\0') {
        cVar2 = fcn.00014a00();
        if (cVar2 == '\0') {
            out(100,uVar3);
        }
        cVar2 = fcn.00014a00();
        if (cVar2 == '\0') {
            out(0x60,uVar5);
        }
    }
    cVar2 = '\x10';
    iVar4 = -1;
    do {
        while( true ) {
            uVar1 = in(100);
            uVar1 = uVar1 & 2;
            if ((uVar1 == 0) || (iVar4 == 0)) break;
            iVar4 = iVar4 + -1;
        }
        cVar2 = cVar2 + -1;
    } while ((cVar2 != '\0') && (uVar1 != 0));
    return -(uVar1 != 0);
}


/* fcn.00014a34 @ 0x14a34 */

uint8_t fcn.00014a34(void)

{
    uint8_t uVar1;
    int16_t iVar2;
    char cVar3;
    
    cVar3 = '\x10';
    iVar2 = -1;
    do {
        while( true ) {
            uVar1 = in(100);
            uVar1 = uVar1 & 1;
            if ((uVar1 != 0) || (iVar2 == 0)) break;
            iVar2 = iVar2 + -1;
        }
        cVar3 = cVar3 + -1;
    } while ((cVar3 != '\0') && (uVar1 == 0));
    return ~-(uVar1 != 0);
}


/* fcn.00014aa8 @ 0x14aa8 */

ulong fcn.00014aa8(ulong param_1)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    
    iVar3 = *0x2afc0;
    iVar4 = *0x40e * 0x10;
    uVar2 = CONCAT71(param_1 >> 8,*(iVar4 + 0x27)) & 0xffffffffffffff07;
    if (*(*0x2a8b8 + 0x52) != *(*0x2a8b8 + 0x5a)) {
        if ((*(*0x2afc0 + 0x684) & 0x22) == 2) {
            *(iVar4 + 0x26) = *(iVar4 + 0x26) & 0xf8;
            if (((*(*0x2afc0 + 0x6c9) & 0x20000) != 0) && (iVar5 = 0, uVar2 != '\0')) {
                uVar6 = *(iVar4 + 0x27) & 7;
                do {
                    uVar1 = fcn.00014ba4();
                    *(iVar5 + 0x28 + iVar4) = uVar1;
                    iVar5 = iVar5 + 1;
                    *(iVar4 + 0x26) = *(iVar4 + 0x26) + '\x01';
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            uVar1 = fcn.00014ba4();
            fcn.00014a68(CONCAT71(uVar2 >> 8,0xd3),CONCAT71(iVar3 >> 8,uVar1));
            fcn.00014a34();
            return 0xff;
        }
        *(*0x2a8b8 + 0x52) = *0x2afc0 + 0x694;
        *(*0x2a8b8 + 0x5a) = *0x2afc0 + 0x694;
    }
    return 0;
}


/* fcn.00014be8 @ 0x14be8 */

ulong fcn.00014be8(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char cVar5;
    uint32_t arg2;
    char *pcVar6;
    uchar uVar7;
    uint16_t uVar8;
    bool bVar9;
    uchar uStackX_8;
    
    cVar5 = '\0';
    if (*(*0x2afc0 + 0x754) != '\0') {
        return 0x8000000000000006;
    }
    if ((*0x2a8b0 != NULL) && (cVar2 = (*(*0x2a8b0)[1])(), cVar2 == '\0')) goto code_r0x00014e5c;
    param_2 = 0;
    out(0x20,0xb);
    uVar3 = in(0x20);
    if ((uVar3 & 2) != 0) goto code_r0x00014e5c;
    param_2 = 0;
    out(0xa0,0xb);
    uVar3 = in(0xa0);
    if ((uVar3 & 0x10) != 0) goto code_r0x00014e5c;
    param_2 = 0;
    uVar3 = in(100);
    if ((uVar3 & 1) != 0) goto code_r0x00014e5c;
    uVar8 = 0xc000;
    param_2 = *0x2afc0;
    if ((*(*0x2afc0 + 0x66e) & 0xc000) == 0x8000) {
        uVar3 = 0xd2;
        if (*(*0x2a8b8 + 0x22) != *(*0x2a8b8 + 0x2a)) goto code_r0x00014cf2;
        if ((*(*0x2afc0 + 0x711) & 2) != 0) {
            uVar3 = 0xd3;
            bVar9 = *(*0x2a8b8 + 0x52) == *(*0x2a8b8 + 0x5a);
            goto code_r0x00014cbe;
        }
code_r0x00014cc0:
        if (*(*0x2a8b8 + 0x32) != *0x2afc0 + 0x5d6) goto code_r0x00014e5c;
        arg2 = CONCAT71(*0x2afc0 >> 8,1);
code_r0x00014cd3:
        fcn.000139f0(0,arg2);
code_r0x00014cda:
        if (*0x2a8b0 != NULL) {
            (***0x2a8b0)(*0x2a8b0);
        }
        return 0;
    }
    if (((*(*0x2afc0 + 0x711) & 2) == 0) || (uVar3 = 0xd3, *(*0x2a8b8 + 0x52) == *(*0x2a8b8 + 0x5a))) {
        uVar3 = 0xd2;
        bVar9 = *(*0x2a8b8 + 0x22) == *(*0x2a8b8 + 0x2a);
code_r0x00014cbe:
        if (bVar9) goto code_r0x00014cc0;
    }
code_r0x00014cf2:
    cVar2 = fcn.00014a00();
    if (cVar2 != '\0') goto code_r0x00014e5c;
    out(100,*(*0x2afc0 + 0x715));
    do {
        param_2 = 0;
        uVar4 = in(100);
        if ((uVar4 & 1) != 0) {
            uVar7 = 0xae;
            if ((uVar4 & 0x20) == 0) goto code_r0x00014e48;
            goto code_r0x00014e5c;
        }
    } while ((uVar4 & 2) != 0);
    *(*0x2afc0 + 0x66e) = *(*0x2afc0 + 0x66e) + 0x4000;
    if ((uVar8 & *(*0x2afc0 + 0x66e)) == 0) {
        param_2 = 0x3fff;
        *(*0x2afc0 + 0x66e) = *(*0x2afc0 + 0x66e) & 0x3fff;
    }
    if (((*0x2a8b0 == NULL) || ((*(*0x2afc0 + 0x684) & 0x22) != 2)) || ((uVar3 & 1) == 0)) {
        cVar2 = fcn.00014a00();
        if (cVar2 == '\0') {
            param_2 = 0;
            out(100,0x20);
        }
        cVar2 = fcn.00014a00();
        if (cVar2 != '\0') goto code_r0x00014e5c;
        cVar2 = fcn.00014a34();
        if (cVar2 == '\0') {
            param_2 = 0;
            uStackX_8 = in(0x60);
        }
        *(*0x2afc0 + 0x684) = uStackX_8;
        iVar1 = *0x2afc0;
        if ((uVar3 & 1) != 0) goto code_r0x00014e24;
        if ((*(*0x2afc0 + 0x684) & 0x10) == 0) {
            if ((*(*0x2afc0 + 0x66e) & 0x400) == 0) {
                cVar5 = **(*0x2a8b8 + 0x2a);
                pcVar6 = *(*0x2a8b8 + 0x2a) + 1;
                if (pcVar6 == *0x2afc0 + 0x666) {
                    pcVar6 = *0x2afc0 + 0x5e6;
                }
                *(*0x2a8b8 + 0x2a) = pcVar6;
                if (cVar5 == -1) goto code_r0x00014e5c;
            }
            param_2 = CONCAT71(param_2 >> 8,cVar5);
            fcn.00014a68(CONCAT71(iVar1 >> 8,uVar3),param_2);
            fcn.00014a34();
            goto code_r0x00014e1d;
        }
    }
    else {
code_r0x00014e24:
        if ((*(*0x2afc0 + 0x711) & 2) != 0) {
            cVar5 = fcn.00014aa8();
            if (cVar5 == '\0') goto code_r0x00014cda;
code_r0x00014e1d:
            arg2 = CONCAT71(param_2 >> 8,2);
            goto code_r0x00014cd3;
        }
    }
    uVar7 = 0xff;
code_r0x00014e48:
    cVar5 = fcn.00014a00();
    if (cVar5 == '\0') {
        param_2 = 0;
        out(100,uVar7);
    }
    fcn.00014a00();
code_r0x00014e5c:
    fcn.000139f0(0,CONCAT71(param_2 >> 8,2));
    if (*0x2a8b0 != NULL) {
        (***0x2a8b0)(*0x2a8b0);
    }
    return 0x8000000000000006;
}


/* fcn.00015bbc @ 0x15bbc */

//WARNING: Removing unreachable block (ram,0x00013cca)
//WARNING: Removing unreachable block (ram,0x00013ccf)
//WARNING: Removing unreachable block (ram,0x00013bc9)
//WARNING: Removing unreachable block (ram,0x00013bd2)
//WARNING: Removing unreachable block (ram,0x00013bf0)
//WARNING: Removing unreachable block (ram,0x00013bff)
//WARNING: Removing unreachable block (ram,0x00013c08)
//WARNING: Removing unreachable block (ram,0x00013c11)
//WARNING: Removing unreachable block (ram,0x00013c27)
//WARNING: Removing unreachable block (ram,0x00013c30)
//WARNING: Removing unreachable block (ram,0x00013c73)
//WARNING: Removing unreachable block (ram,0x00013c7d)
//WARNING: Removing unreachable block (ram,0x00013c92)
//WARNING: Removing unreachable block (ram,0x00013cbb)
//WARNING: Removing unreachable block (ram,0x00013c3c)
//WARNING: Removing unreachable block (ram,0x00013c45)
//WARNING: Removing unreachable block (ram,0x00013cc1)
//WARNING: Removing unreachable block (ram,0x00013a20)
//WARNING: Removing unreachable block (ram,0x00013a29)
//WARNING: Removing unreachable block (ram,0x00013a32)
//WARNING: Removing unreachable block (ram,0x00013a47)
//WARNING: Removing unreachable block (ram,0x00013a63)
//WARNING: Removing unreachable block (ram,0x00013a6c)
//WARNING: Removing unreachable block (ram,0x00013a78)
//WARNING: Removing unreachable block (ram,0x00013a7d)
//WARNING: Removing unreachable block (ram,0x00013a86)
//WARNING: Removing unreachable block (ram,0x00013a91)
//WARNING: Removing unreachable block (ram,0x00013ab0)
//WARNING: Removing unreachable block (ram,0x00013a8d)
//WARNING: Removing unreachable block (ram,0x00013cd4)

void fcn.00015bbc(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uchar *puVar7;
    
    puVar4 = *0x2afc0 + 0x666;
    puVar7 = *(*0x2a8b8 + 0x22);
    *puVar7 = arg1;
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar4) {
        puVar7 = *0x2afc0 + 0x5e6;
    }
    *(*0x2a8b8 + 0x22) = puVar7;
    if (*0x2a8d0 == '\0') {
        if ((((*(*0x2afc0 + 0x6cd) == '\0') && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) && (*(*0x2afc0 + 0x6cf) != '\0'))
           && (uVar6 = 0, *(*0x2a8b8 + 0x10) != '\0')) {
            do {
                if ((*(*(*0x2a8c8 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00013bbd;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
            } while (uVar5 < *(*0x2a8b8 + 0x10));
        }
        if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
            if (*(*0x2afc0 + 0x686) != 0) {
                iVar1 = *(*0x2a8c8 + (*(*0x2afc0 + 0x686) - 1) * 8);
                iVar3 = fcn.00029ab0();
                if ((-1 < iVar3) &&
                   (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2a910), pcVar2 != NULL)) {
                    (*pcVar2)(iVar1);
                }
            }
        }
        else {
            iVar1 = *(*0x2a8b8 + 0x3a);
            if (iVar1 != 0) {
                fcn.00029bdc(*(*0x2a8c8 + (*(iVar1 + 0xb) - 1) * 8),iVar1,0xa21,*(iVar1 + 0x13));
            }
        }
code_r0x00013bbd:
        *0x2a8d0 = '\x01';
    }
    return;
}


/* fcn.00015220 @ 0x15220 */

uint64_t fcn.00015220(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int16_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char cVar6;
    int16_t iVar7;
    uint16_t uVar8;
    uint8_t *puVar9;
    ulong uVar10;
    uint8_t uVar11;
    int64_t iVar12;
    uint16_t uVar13;
    int16_t iVar14;
    uint16_t uVar15;
    int64_t iVar16;
    uint8_t uVar17;
    
    uVar5 = 0;
    uVar17 = 0;
    *(*0x2afc0 + 0x66e) = *(*0x2afc0 + 0x66e) & 0xdfff;
    if (arg1 != ' ') {
        *(*0x2afc0 + 0x66e) = *(*0x2afc0 + 0x66e) | 0x2000;
    }
    *(*0x2afc0 + 0x666) = arg2;
    cVar6 = *((arg2 & 0xffU) + 0x2a6f0);
    *(*0x2afc0 + 0x66b) = cVar6;
    iVar7 = 2;
    uVar8 = 0;
    if (cVar6 != '\x12') {
        iVar7 = 0;
    }
    if (cVar6 == 'Y') {
        iVar7 = 1;
    }
    if (cVar6 == '\x14') {
        iVar7 = 4;
    }
    iVar14 = 0x94;
    if (cVar6 != '\x14') {
        iVar14 = 0;
    }
    if (cVar6 == -0x6c) {
        iVar14 = 0x14;
    }
    iVar2 = 4;
    if (cVar6 != -0x6c) {
        iVar2 = iVar7;
    }
    if (cVar6 == '\x11') {
        iVar2 = 8;
        iVar14 = 0x91;
    }
    if (cVar6 == -0x6f) {
        iVar14 = 0x11;
    }
    iVar7 = 8;
    if (cVar6 != -0x6f) {
        iVar7 = iVar2;
    }
    uVar3 = 0xff;
    uVar13 = iVar7 * 0x100 + iVar14;
    if (uVar13 >> 8 != 0) {
        uVar11 = uVar13 >> 8;
        if ((*(*0x2afc0 + 0x66e) & 0x2000) == 0) {
            *(*0x2afc0 + 0x667) = *(*0x2afc0 + 0x667) | uVar11;
        }
        else {
            uVar15 = uVar13 >> 8 & 3;
            if (uVar15 == 0) {
                puVar9 = *(*0x2a8b8 + 0x32);
                if (puVar9 != *0x2afc0 + 0x5d6) {
                    do {
                        puVar9 = puVar9 + -1;
                        uVar17 = *(*puVar9 + 0x2a6f0);
                        if ((uVar13 & 0xff) == 0) break;
                    } while (puVar9 != *0x2afc0 + 0x5d6);
                }
            }
            uVar3 = uVar17;
            if ((uVar17 != uVar13) || (uVar15 != 0)) {
                uVar11 = ~uVar11;
                *(*0x2afc0 + 0x667) = *(*0x2afc0 + 0x667) & uVar11;
                uVar3 = *0x2afc0;
                puVar9 = (arg3 & 0xffffU) + 0x5b6 + *0x2afc0;
                *puVar9 = *puVar9 & uVar11;
            }
        }
    }
    uVar17 = *(*0x2afc0 + 0x66b);
    if (uVar17 == 0xfe) {
        if ((*(*0x2afc0 + 0x66e) & 0x2000) != 0) {
            return uVar3;
        }
        uVar3 = 0;
        uVar8 = (*(*0x2a8b8 + 0x32) - *0x2afc0) + 0x2a;
        if (uVar8 != 0) {
            do {
                if (((*(uVar3 + 0x5c6 + *0x2afc0) & *(*0x2afc0 + 0x66d)) != 0) &&
                   (cVar6 = *(uVar3 + 0x5d6 + *0x2afc0), *(*0x2afc0 + 0x666) == cVar6)) {
                    return CONCAT71(uVar3 >> 8,cVar6);
                }
                uVar13 = uVar3 + 1;
                uVar3 = uVar13;
            } while (uVar13 < uVar8);
        }
        uVar11 = *(*0x2afc0 + 0x667) & 4;
        iVar4 = 0x2a2c8;
        iVar16 = 0x2a23c;
code_r0x00015507:
        if (uVar11 != 0) {
            iVar16 = iVar4;
        }
    }
    else {
        if (uVar17 == 0xfc) {
            if ((*(*0x2afc0 + 0x667) & 8) == 0) {
                iVar16 = 0x2a238;
                if ((*(*0x2afc0 + 0x667) & 7) == 0) {
                    iVar16 = 0x2a234;
                }
                goto code_r0x000155a0;
            }
        }
        else {
            uVar3 = 0;
            do {
                if (*(uVar3 + 0x2a6d8) == uVar17) {
                    uVar11 = *(*0x2afc0 + 0x667);
                    if (((uVar11 & 0x13) == 0) || ((uVar11 & 0x11) == 0x11 || (uVar11 & 0x12) == 0x12))
                    goto code_r0x00015599;
                    if ((uVar11 & 0x10) == 0) {
                        iVar16 = 0x2a230;
                        goto code_r0x000155a0;
                    }
                    iVar16 = 0x2a234;
                    if (((*(*0x2afc0 + 0x66e) & 0x2000) != 0) ||
                       (uVar13 = (*(*0x2a8b8 + 0x32) - *0x2afc0) + 0x2a, uVar13 == 0)) goto code_r0x000155a0;
                    goto code_r0x00015567;
                }
                uVar11 = uVar3 + 1;
                uVar3 = uVar11;
            } while (uVar11 < 10);
            uVar3 = 0;
            do {
                if (*(uVar3 + 0x2a7f0) == uVar17) goto code_r0x00015599;
                uVar11 = uVar3 + 1;
                uVar3 = uVar11;
            } while (uVar11 < 6);
            if (uVar17 == 0xca) {
                uVar11 = *(*0x2afc0 + 0x667) & 3;
                iVar4 = 0x2a230;
                iVar16 = 0x2a238;
                goto code_r0x00015507;
            }
        }
        iVar16 = 0x2a2cc;
    }
    goto code_r0x000155a0;
code_r0x00015599:
    iVar16 = 0x2a238;
    goto code_r0x000155a0;
    while (uVar13 = uVar5 + 1, uVar5 = uVar13, uVar13 < uVar8) {
code_r0x0001584b:
        if (((*(uVar5 + 0x5c6 + *0x2afc0) & *(*0x2afc0 + 0x66d)) != 0) &&
           (*(*0x2afc0 + 0x666) == *(uVar5 + 0x5d6 + *0x2afc0))) goto code_r0x000156ae;
    }
    goto code_r0x00015875;
    while (uVar8 = uVar8 + 1, uVar8 < uVar13) {
code_r0x00015567:
        if (((*(uVar8 + 0x5c6 + *0x2afc0) & *(*0x2afc0 + 0x66d)) != 0) &&
           (*(*0x2afc0 + 0x666) == *(uVar8 + 0x5d6 + *0x2afc0))) goto code_r0x00015599;
    }
code_r0x000155a0:
    iVar12 = *(*0x2a8b8 + 0x22);
    uVar11 = *(*0x2afc0 + 0x66e) >> 0xc & 2;
    iVar4 = iVar12 + 0x80;
    uVar3 = uVar11 + 1;
    if ((*(*0x2afc0 + 0x684) & 0x40) != 0) {
        uVar3 = uVar11;
    }
    cVar6 = *(uVar3 + iVar16) + '\x01';
    do {
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar4) {
            iVar12 = *0x2afc0 + 0x5e6;
        }
        if (iVar12 == *(*0x2a8b8 + 0x2a)) {
            return uVar3;
        }
        cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    if (uVar17 == 0xfe) {
        if ((*(*0x2afc0 + 0x667) & 4) == 0) {
            uVar10 = 0;
            fcn.00015bbc(0xe1);
            *(*0x2afc0 + 0x66b) = 0x14;
            fcn.00015a80();
            *(*0x2afc0 + 0x66b) = 0x77;
            fcn.00015a80();
            fcn.00015bbc(CONCAT71(uVar10 >> 8,0xe1));
            *(*0x2afc0 + 0x66b) = 0x14;
            fcn.00015ab8();
            *(*0x2afc0 + 0x66b) = 0x77;
        }
        else {
            iVar16 = 0;
            *(*0x2afc0 + 0x66b) = 0x7e;
            fcn.00015bbc(0xe0);
            fcn.00015a80();
code_r0x0001567a:
            fcn.00015bbc(CONCAT71(iVar16 >> 8,0xe0));
        }
code_r0x00015681:
        uVar5 = fcn.00015ab8();
    }
    else {
        if (uVar17 == 0xfc) {
            *(*0x2afc0 + 0x66b) = 0x7c;
            if ((*(*0x2afc0 + 0x667) & 8) == 0) {
                if ((*(*0x2afc0 + 0x667) & 7) == 0) {
code_r0x00015875:
                    if ((*(*0x2afc0 + 0x66e) & 0x2000) == 0) {
                        uVar1 = *(*0x2afc0 + 0x66b);
                        iVar16 = 0;
                        *(*0x2afc0 + 0x66b) = 0x12;
                        fcn.00015bbc(0xe0);
                        fcn.00015a80();
                        *(*0x2afc0 + 0x66b) = uVar1;
                        goto code_r0x000156b8;
                    }
code_r0x000158aa:
                    iVar16 = 0;
                    fcn.00015bbc(0xe0);
                    fcn.00015ab8();
                    *(*0x2afc0 + 0x66b) = 0x12;
                }
                else {
code_r0x000156ae:
                    iVar16 = 0;
                    if ((*(*0x2afc0 + 0x66e) & 0x2000) == 0) goto code_r0x000156b8;
                }
                goto code_r0x0001567a;
            }
            *(*0x2afc0 + 0x66b) = 0x84;
code_r0x00015732:
            if ((*(*0x2afc0 + 0x66e) & 0x2000) != 0) goto code_r0x00015681;
        }
        else {
            uVar3 = 0;
            do {
                if (*(uVar3 + 0x2a6d8) == uVar17) {
                    *(*0x2afc0 + 0x66b) = uVar17 & 0x7f;
                    uVar17 = *(*0x2afc0 + 0x667);
                    if (((uVar17 & 0x13) == 0) || ((uVar17 & 0x11) == 0x11 || (uVar17 & 0x12) == 0x12))
                    goto code_r0x000156ae;
                    if ((uVar17 & 0x10) == 0) goto code_r0x0001575d;
                    if ((*(*0x2afc0 + 0x66e) & 0x2000) != 0) goto code_r0x000158aa;
                    uVar8 = (*(*0x2a8b8 + 0x32) - *0x2afc0) + 0x2a;
                    if (uVar8 == 0) goto code_r0x00015875;
                    goto code_r0x0001584b;
                }
                uVar11 = uVar3 + 1;
                uVar3 = uVar11;
            } while (uVar11 < 10);
            do {
                if (*(uVar5 + 0x2a7f0) == uVar17) {
                    *(*0x2afc0 + 0x66b) = uVar17 & 0x7f;
                    goto code_r0x000156ae;
                }
                uVar11 = uVar5 + 1;
                uVar5 = uVar11;
            } while (uVar11 < 6);
            if (uVar17 != 0xca) goto code_r0x00015732;
            *(*0x2afc0 + 0x66b) = 0x4a;
            if ((*(*0x2afc0 + 0x66e) & 3) == 0) goto code_r0x000156ae;
code_r0x0001575d:
            iVar16 = 0;
            if ((*(*0x2afc0 + 0x66e) & 0x2000) == 0) {
                uVar1 = *(*0x2afc0 + 0x66b);
                if ((*(*0x2afc0 + 0x667) & 2) != 0) {
                    iVar16 = 0;
                    *(*0x2afc0 + 0x66b) = 0x12;
                    fcn.00015bbc(0xe0);
                    fcn.00015ab8();
                }
                if ((*(*0x2afc0 + 0x667) & 1) != 0) {
                    iVar16 = CONCAT71(iVar16 >> 8,0xe0);
                    *(*0x2afc0 + 0x66b) = 0x59;
                    fcn.00015bbc(iVar16);
                    fcn.00015ab8();
                }
                *(*0x2afc0 + 0x66b) = uVar1;
            }
            else {
                iVar16 = 0;
                fcn.00015bbc(0xe0);
                fcn.00015ab8();
                if ((*(*0x2afc0 + 0x667) & 1) != 0) {
                    iVar16 = CONCAT71(iVar16 >> 8,0xe0);
                    *(*0x2afc0 + 0x66b) = 0x59;
                    fcn.00015bbc(iVar16);
                    fcn.00015a80();
                }
                if ((*(*0x2afc0 + 0x667) & 2) == 0) {
                    return *0x2afc0;
                }
                *(*0x2afc0 + 0x66b) = 0x12;
            }
code_r0x000156b8:
            fcn.00015bbc(CONCAT71(iVar16 >> 8,0xe0));
        }
        uVar5 = fcn.00015a80();
    }
    return uVar5;
}


/* fcn.00015a80 @ 0x15a80 */

//WARNING: Removing unreachable block (ram,0x00013cca)
//WARNING: Removing unreachable block (ram,0x00013ccf)
//WARNING: Removing unreachable block (ram,0x00013bc9)
//WARNING: Removing unreachable block (ram,0x00013bd2)
//WARNING: Removing unreachable block (ram,0x00013bf0)
//WARNING: Removing unreachable block (ram,0x00013bff)
//WARNING: Removing unreachable block (ram,0x00013c08)
//WARNING: Removing unreachable block (ram,0x00013c11)
//WARNING: Removing unreachable block (ram,0x00013c27)
//WARNING: Removing unreachable block (ram,0x00013c30)
//WARNING: Removing unreachable block (ram,0x00013c73)
//WARNING: Removing unreachable block (ram,0x00013c7d)
//WARNING: Removing unreachable block (ram,0x00013c92)
//WARNING: Removing unreachable block (ram,0x00013cbb)
//WARNING: Removing unreachable block (ram,0x00013c3c)
//WARNING: Removing unreachable block (ram,0x00013c45)
//WARNING: Removing unreachable block (ram,0x00013cc1)
//WARNING: Removing unreachable block (ram,0x00013a20)
//WARNING: Removing unreachable block (ram,0x00013a29)
//WARNING: Removing unreachable block (ram,0x00013a32)
//WARNING: Removing unreachable block (ram,0x00013a47)
//WARNING: Removing unreachable block (ram,0x00013a63)
//WARNING: Removing unreachable block (ram,0x00013a6c)
//WARNING: Removing unreachable block (ram,0x00013a78)
//WARNING: Removing unreachable block (ram,0x00013a7d)
//WARNING: Removing unreachable block (ram,0x00013a86)
//WARNING: Removing unreachable block (ram,0x00013a91)
//WARNING: Removing unreachable block (ram,0x00013ab0)
//WARNING: Removing unreachable block (ram,0x00013a8d)
//WARNING: Removing unreachable block (ram,0x00013cd4)

void fcn.00015a80(void)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    
    if ((*(*0x2afc0 + 0x684) & 0x40) == 0) {
        uVar5 = *(*0x2afc0 + 0x66b);
    }
    else {
        uVar5 = *(*(*0x2afc0 + 0x66b) + 0x2a240);
        uVar5 = uVar5 << 4 | uVar5 >> 4;
        uVar5 = ~(uVar5 << 1 | uVar5 < '\0');
    }
    puVar4 = *0x2afc0 + 0x666;
    puVar7 = *(*0x2a8b8 + 0x22);
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar4) {
        puVar7 = *0x2afc0 + 0x5e6;
    }
    *(*0x2a8b8 + 0x22) = puVar7;
    if (*0x2a8d0 == '\0') {
        if ((((*(*0x2afc0 + 0x6cd) == '\0') && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) && (*(*0x2afc0 + 0x6cf) != '\0'))
           && (uVar6 = 0, *(*0x2a8b8 + 0x10) != '\0')) {
            do {
                if ((*(*(*0x2a8c8 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00013bbd;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
            } while (uVar5 < *(*0x2a8b8 + 0x10));
        }
        if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
            if (*(*0x2afc0 + 0x686) != 0) {
                iVar1 = *(*0x2a8c8 + (*(*0x2afc0 + 0x686) - 1) * 8);
                iVar3 = fcn.00029ab0();
                if ((-1 < iVar3) &&
                   (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2a910), pcVar2 != NULL)) {
                    (*pcVar2)(iVar1);
                }
            }
        }
        else {
            iVar1 = *(*0x2a8b8 + 0x3a);
            if (iVar1 != 0) {
                fcn.00029bdc(*(*0x2a8c8 + (*(iVar1 + 0xb) - 1) * 8),iVar1,0xa21,*(iVar1 + 0x13));
            }
        }
code_r0x00013bbd:
        *0x2a8d0 = '\x01';
    }
    return;
}


/* fcn.00015ab8 @ 0x15ab8 */

//WARNING: Removing unreachable block (ram,0x00013cca)
//WARNING: Removing unreachable block (ram,0x00013ccf)
//WARNING: Removing unreachable block (ram,0x00013bc9)
//WARNING: Removing unreachable block (ram,0x00013bd2)
//WARNING: Removing unreachable block (ram,0x00013bf0)
//WARNING: Removing unreachable block (ram,0x00013bff)
//WARNING: Removing unreachable block (ram,0x00013c08)
//WARNING: Removing unreachable block (ram,0x00013c11)
//WARNING: Removing unreachable block (ram,0x00013c27)
//WARNING: Removing unreachable block (ram,0x00013c30)
//WARNING: Removing unreachable block (ram,0x00013c73)
//WARNING: Removing unreachable block (ram,0x00013c7d)
//WARNING: Removing unreachable block (ram,0x00013c92)
//WARNING: Removing unreachable block (ram,0x00013cbb)
//WARNING: Removing unreachable block (ram,0x00013c3c)
//WARNING: Removing unreachable block (ram,0x00013c45)
//WARNING: Removing unreachable block (ram,0x00013cc1)
//WARNING: Removing unreachable block (ram,0x00013a20)
//WARNING: Removing unreachable block (ram,0x00013a29)
//WARNING: Removing unreachable block (ram,0x00013a32)
//WARNING: Removing unreachable block (ram,0x00013a47)
//WARNING: Removing unreachable block (ram,0x00013a63)
//WARNING: Removing unreachable block (ram,0x00013a6c)
//WARNING: Removing unreachable block (ram,0x00013a78)
//WARNING: Removing unreachable block (ram,0x00013a7d)
//WARNING: Removing unreachable block (ram,0x00013a86)
//WARNING: Removing unreachable block (ram,0x00013a91)
//WARNING: Removing unreachable block (ram,0x00013ab0)
//WARNING: Removing unreachable block (ram,0x00013a8d)
//WARNING: Removing unreachable block (ram,0x00013cd4)

void fcn.00015ab8(ulong param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    
    if ((*(*0x2afc0 + 0x684) & 0x40) == 0) {
        fcn.00015bbc(CONCAT71(param_1 >> 8,0xf0));
        uVar5 = *(*0x2afc0 + 0x66b);
    }
    else {
        uVar5 = *(*(*0x2afc0 + 0x66b) + 0x2a240);
        uVar5 = uVar5 << 4 | uVar5 >> 4;
        uVar5 = ~(uVar5 << 1 | uVar5 < '\0') | 0x80;
    }
    puVar4 = *0x2afc0 + 0x666;
    puVar7 = *(*0x2a8b8 + 0x22);
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar4) {
        puVar7 = *0x2afc0 + 0x5e6;
    }
    *(*0x2a8b8 + 0x22) = puVar7;
    if (*0x2a8d0 == '\0') {
        if ((((*(*0x2afc0 + 0x6cd) == '\0') && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) && (*(*0x2afc0 + 0x6cf) != '\0'))
           && (uVar6 = 0, *(*0x2a8b8 + 0x10) != '\0')) {
            do {
                if ((*(*(*0x2a8c8 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00013bbd;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
            } while (uVar5 < *(*0x2a8b8 + 0x10));
        }
        if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
            if (*(*0x2afc0 + 0x686) != 0) {
                iVar1 = *(*0x2a8c8 + (*(*0x2afc0 + 0x686) - 1) * 8);
                iVar3 = fcn.00029ab0();
                if ((-1 < iVar3) &&
                   (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2a910), pcVar2 != NULL)) {
                    (*pcVar2)(iVar1);
                }
            }
        }
        else {
            iVar1 = *(*0x2a8b8 + 0x3a);
            if (iVar1 != 0) {
                fcn.00029bdc(*(*0x2a8c8 + (*(iVar1 + 0xb) - 1) * 8),iVar1,0xa21,*(iVar1 + 0x13));
            }
        }
code_r0x00013bbd:
        *0x2a8d0 = '\x01';
    }
    return;
}


/* fcn.00015918 @ 0x15918 */

void fcn.00015918(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    
    uVar2 = (*0x2afc0)[0x668];
    if ((uVar2 & 1) == 0) {
        uVar1 = (uVar2 & 7) >> 1;
    }
    else {
        uVar1 = 4;
    }
    (*0x2afc0)[0x668] = uVar2 & 0xf8;
    (*0x2afc0)[0x668] = (*0x2afc0)[0x668] | uVar1;
    if ((*(*0x2afc0 + 0x66e) & 0x400) == 0) {
        if ((**0x2afc0 & 0x10) == 0) {
            uVar1 = *0x417 >> 1 & 0x38;
            uVar2 = uVar1 ^ 0x48;
            if ((*0x417 >> 1 & 8) == 0) {
                uVar2 = uVar1;
            }
            if (uVar2 == ((*0x2afc0)[0x667] & 0x70)) {
                return;
            }
            (*0x2afc0)[0x667] = (*0x2afc0)[0x667] & 0x8f;
            (*0x2afc0)[0x667] = (*0x2afc0)[0x667] | uVar2;
            goto code_r0x000159f4;
        }
        uVar2 = (*0x2afc0)[0x669] & 0x70;
    }
    else {
        uVar2 = ((*0x2afc0)[0x668] & 7) << 4;
    }
    if (((*0x2afc0)[0x667] & 0x70) == uVar2) {
        return;
    }
    (*0x2afc0)[0x667] = (*0x2afc0)[0x667] & 0x8f;
    (*0x2afc0)[0x667] = (*0x2afc0)[0x667] | uVar2;
code_r0x000159f4:
    fcn.00015a00();
    return;
}


/* fcn.00014ebc @ 0x14ebc */

void fcn.00014ebc(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    char *pcVar2;
    uint8_t uVar3;
    char cVar4;
    char *pcVar5;
    char *pcVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    int16_t iVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    int16_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    char *pcVar16;
    uint8_t *puVar17;
    
    iVar14 = *0x2afc0;
    *(*0x2afc0 + 0x66d) = '\x01' << (*(arg1 + 10) - 1U & 0x1f);
    puVar17 = iVar14 + 0x674;
    uVar7 = *arg2;
    uVar3 = 0xe0;
    do {
        cVar4 = '\x01';
        if ((uVar7 & 1) != 0) {
            *puVar17 = uVar3;
            puVar17 = puVar17 + 1;
        }
        uVar7 = uVar7 >> 1;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe8);
    puVar10 = arg2 + 2;
    iVar12 = 6;
    while( true ) {
        uVar7 = *puVar10;
        if (uVar7 != 0) {
            if (uVar7 == 1) {
                iVar13 = *(*0x2a8b8 + 0x22);
                iVar14 = iVar13 + 0x80;
                while( true ) {
                    iVar13 = iVar13 + 1;
                    if (iVar13 == iVar14) {
                        iVar13 = *0x2afc0 + 0x5e6;
                    }
                    if (iVar13 == *(*0x2a8b8 + 0x2a)) break;
                    cVar4 = cVar4 + -1;
                    if (cVar4 == '\0') {
                        fcn.00015bbc(CONCAT71(puVar10 >> 8,0xff));
                        return;
                    }
                }
                return;
            }
            *puVar17 = uVar7;
            puVar17 = puVar17 + 1;
        }
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) break;
        puVar10 = puVar10 + 1;
    }
    *puVar17 = 0;
    iVar12 = (puVar17 - *0x2afc0) + -0x673;
    pcVar5 = *0x2afc0 + 0x674;
    if (iVar12 != 0) {
        do {
            if (*pcVar5 != '\0') break;
            pcVar5 = pcVar5 + 1;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        if (iVar12 != 0) goto code_r0x00014fd9;
    }
    *(*0x2afc0 + 0x66c) = *(*0x2afc0 + 0x66c) | *(*0x2afc0 + 0x66d);
code_r0x00014fd9:
    pcVar5 = *0x2afc0 + 0x674;
code_r0x00014fe6:
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    iVar12 = *0x2afc0;
    if (cVar4 != '\0') {
        uVar15 = 0;
        uVar8 = (*(*0x2a8b8 + 0x32) - iVar12) - 0x5d6;
        uVar11 = uVar8;
        if (uVar8 != 0) goto code_r0x0001500c;
        goto code_r0x00015031;
    }
code_r0x000150f0:
    iVar14 = *0x2afc0;
    pcVar2 = *0x2afc0 + 0x5d6;
code_r0x000151e0:
    do {
        pcVar16 = pcVar2;
        if (*(*0x2a8b8 + 0x32) <= pcVar16) {
            *(iVar14 + 0x66c) = *(iVar14 + 0x66c) & ~*(iVar14 + 0x66d);
            return;
        }
        pcVar6 = iVar14 + 0x674;
        for (iVar9 = (pcVar5 - iVar12) + -0x675; pcVar2 = pcVar16 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
            if (*pcVar16 == *pcVar6) goto code_r0x000151e0;
            pcVar6 = pcVar6 + 1;
        }
        uVar11 = (pcVar16 - iVar14) - 0x5d6;
        puVar17 = uVar11 + 0x5c6 + iVar14;
        *puVar17 = *puVar17 & ~*(iVar14 + 0x66d);
        iVar14 = *0x2afc0;
        if (*(uVar11 + 0x5c6 + *0x2afc0) == '\0') {
            uVar1 = *(uVar11 + 0x5b6 + *0x2afc0);
            *(uVar11 + 0x5b6 + *0x2afc0) = *(*0x2afc0 + 0x667);
            *(*0x2afc0 + 0x667) = uVar1;
            fcn.00015220(0x30,CONCAT71(iVar14 >> 8,*pcVar16),uVar11);
            uVar1 = *(uVar11 + 0x5b6 + *0x2afc0);
            *(uVar11 + 0x5b6 + *0x2afc0) = *(*0x2afc0 + 0x667);
            *(*0x2afc0 + 0x667) = uVar1;
            fcn.00015b08(*0x2afc0 + 0x5b6 + uVar11);
            *(*0x2a8b8 + 0x32) = *(*0x2a8b8 + 0x32) + -1;
            iVar14 = *0x2afc0;
            pcVar2 = pcVar16;
        }
        else {
        }
    } while( true );
code_r0x0001500c:
    do {
        if (cVar4 == *(uVar15 + 0x5d6 + *0x2afc0)) {
            puVar17 = uVar15 + 0x5c6 + *0x2afc0;
            *puVar17 = *puVar17 | *(*0x2afc0 + 0x66d);
            goto code_r0x00014fe6;
        }
        uVar7 = uVar15 + 1;
        uVar15 = uVar7;
        uVar8 = uVar11 - 1;
        uVar11 = uVar8;
    } while (uVar8 != 0);
    uVar11 = 0;
    if (0xf < uVar7) goto code_r0x000150f0;
code_r0x00015031:
    fcn.00015220(CONCAT71(uVar11 >> 8,0x20),CONCAT71(*0x2afc0 >> 8,cVar4),0);
    *(uVar15 + 0x5d6 + *0x2afc0) = cVar4;
    *(uVar15 + 0x5c6 + *0x2afc0) = *(*0x2afc0 + 0x66d);
    *(uVar15 + 0x5b6 + *0x2afc0) = *(*0x2afc0 + 0x667);
    *(*0x2a8b8 + 0x32) = *(*0x2a8b8 + 0x32) + 1;
    if (*(*0x2afc0 + 0x6c7) == '\0') {
        uVar8 = *(*0x2afc0 + 0x66e) >> 6 & 7;
    }
    else {
        uVar8 = *(*0x2afc0 + 0x66e) >> 4 & 5;
    }
    *(*0x2afc0 + 0x672) = *(uVar8 + 0x2a7f8);
    *(*0x2afc0 + 0x670) = 0;
    goto code_r0x00014fe6;
}


/* fcn.00015c04 @ 0x15c04 */

void fcn.00015c04(ulong param_1,ulong param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    
    uVar3 = (*(*0x2a8b8 + 0x32) - *0x2afc0) + 0x2a;
    if (uVar3 != 0) {
        *(*0x2afc0 + 0x670) = *(*0x2afc0 + 0x670) + 1;
        if (*(*0x2afc0 + 0x672) <= *(*0x2afc0 + 0x670)) {
            if (*(*0x2afc0 + 0x6c7) == '\0') {
                uVar1 = *(*0x2afc0 + 0x66e) >> 2 & 7;
            }
            else {
                uVar1 = *(*0x2afc0 + 0x66e) >> 1 & 5;
            }
            *(*0x2afc0 + 0x672) = *(uVar1 + 0x2a7f8);
            *(*0x2afc0 + 0x670) = 0;
            if (*(*0x2a8b8 + 0x22) == *(*0x2a8b8 + 0x2a)) {
                iVar2 = uVar3 - 1;
                fcn.00015220(CONCAT71(iVar2 >> 8,0x20),CONCAT71(param_2 >> 8,*(iVar2 + 0x5d6 + *0x2afc0)),0);
            }
        }
    }
    return;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00015f00 @ 0x15f00 */

uint16_t fcn.00015f00(uint32_t arg1)

{
    uint in_register_0000000c;
    uint16_t uVar1;
    
    uVar1 = 0;
    if (*(*0x2afc0 + 0x717) != 0) {
        do {
            if (*(*(*0x2a8b8 + 0x4a) + uVar1 * 8) == CONCAT44(in_register_0000000c,arg1)) {
                return uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(*0x2afc0 + 0x717));
    }
    return 0xffff;
}


/* fcn.00028bd4 @ 0x28bd4 */

//WARNING: Removing unreachable block (ram,0x00013a32)
//WARNING: Removing unreachable block (ram,0x00013a47)
//WARNING: Removing unreachable block (ram,0x00013a63)
//WARNING: Removing unreachable block (ram,0x00013a6c)
//WARNING: Removing unreachable block (ram,0x00013a78)
//WARNING: Removing unreachable block (ram,0x00013a7d)
//WARNING: Removing unreachable block (ram,0x00013a86)
//WARNING: Removing unreachable block (ram,0x00013a91)
//WARNING: Removing unreachable block (ram,0x00013ab0)
//WARNING: Removing unreachable block (ram,0x00013a8d)
//WARNING: Removing unreachable block (ram,0x00013cd4)

void fcn.00028bd4(int64_t arg1)

{
    code *pcVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    char *pcVar5;
    unkbyte7 Var7;
    uint64_t uVar6;
    char cVar8;
    char *pcVar9;
    int64_t iVar10;
    char *pcVar11;
    uint8_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    
    pcVar11 = arg1 + 2;
    *0x2a960 = *pcVar11;
    pcVar9 = 0x2a960;
    *0x2a964 = *(arg1 + 6);
    iVar10 = 6;
    uVar3 = *0x417 >> 4;
    iVar14 = 6;
    pcVar5 = arg1;
    do {
        if (*pcVar9 != '\0') {
            iVar13 = 6;
            pcVar5 = pcVar11;
            do {
                if ((*pcVar5 != '\0') && (*pcVar5 == *pcVar9)) {
                    *pcVar5 = '\0';
                }
                pcVar5 = pcVar5 + 1;
                iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
        }
        pcVar9 = pcVar9 + 1;
        iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    Var7 = pcVar5 >> 8;
    uVar3 = uVar3 & 7;
    uVar12 = *0x2a966 & 7;
    if (uVar3 != uVar12) {
        uVar6 = CONCAT71(Var7,*0x2a966) & 0xfffffffffffffff8;
        Var7 = uVar6 >> 8;
        *0x2a966 = uVar6 | uVar3;
        fcn.00028a7c();
        uVar12 = *0x2a966 & 7;
    }
    iVar14 = 6;
    pcVar5 = pcVar11;
    uVar3 = *0x2a966;
    do {
        if (*pcVar5 == '9') {
            *0x417 = *0x417 ^ 0x40;
            uVar3 = 4;
code_r0x00028cd8:
            uVar3 = *0x2a966 ^ uVar3;
            *0x2a966 = uVar3;
        }
        else {
            if (*pcVar5 == 'G') {
                *0x417 = *0x417 ^ 0x10;
                uVar3 = 1;
                goto code_r0x00028cd8;
            }
            if (*pcVar5 == 'S') {
                *0x417 = *0x417 ^ 0x20;
                uVar3 = 2;
                goto code_r0x00028cd8;
            }
        }
        pcVar5 = pcVar5 + 1;
        iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    uVar6 = CONCAT71(Var7,uVar3) & 0xfffffffffffffff7;
    uVar6 = CONCAT71(uVar6 >> 8,((*arg1 & 0x22) != 0) << 5 | ((*arg1 & 0x11) != 0) << 3 | uVar6 & 0xdf) &
            0xffffffffffffffef;
    uVar3 = ((*arg1 & 0x44) != 0) << 4;
    *0x2a966 = uVar3 | uVar6;
    if ((uVar3 | uVar6 & 0x18) == 0x18) {
        uVar6 = CONCAT71(uVar6 >> 8,2);
        do {
            if (((*((uVar6 & 0xff) + arg1) == 'L') || (*((uVar6 & 0xff) + arg1) == 'c')) && ((**0x2afc0 & 2) == 0)) {
                out(0xcf9,6);
                do {
    //WARNING: Do nothing block with infinite loop
                } while( true );
            }
            uVar3 = uVar6 + 1;
            uVar6 = CONCAT71(uVar6 >> 8,uVar3);
        } while (uVar3 < 6);
    }
    do {
        uVar6 = CONCAT71(uVar6 >> 8,*pcVar11);
        if (*pcVar11 != '\0') {
            fcn.00028b28(uVar6);
        }
        pcVar11 = pcVar11 + 1;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (uVar12 != (*0x2a966 & 7)) {
        fcn.00028a7c();
    }
    if ((*0x2afc0)[0x6c7] == 0) {
        uVar4 = *(*0x2afc0 + 0x66e) >> 6 & 7;
    }
    else {
        uVar4 = *(*0x2afc0 + 0x66e) >> 4 & 5;
    }
    cVar8 = '\x01';
    *(*0x2afc0 + 0x672) = *(uVar4 + 0x2a7f8);
    puVar2 = *0x2afc0;
    puVar2[0x670] = 0;
    puVar2[0x671] = 0;
    if (*0x2a960 != '\0') {
        cVar8 = '\x02';
    }
    if (cVar8 != '\0') {
        if (cVar8 == '\x01') {
            if (*0x2a8d0 != '\0') {
                if ((((*0x2afc0)[0x6cd] == 0) && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) &&
                   (((*0x2afc0)[0x6cf] != 0 && (uVar6 = 0, *(*0x2a8b8 + 0x10) != '\0')))) {
                    do {
                        if ((*(*(*0x2a8c8 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00013cc1;
                        uVar3 = uVar6 + 1;
                        uVar6 = uVar3;
                    } while (uVar3 < *(*0x2a8b8 + 0x10));
                }
                if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
                    if ((*0x2afc0)[0x686] != 0) {
                        iVar10 = *(*0x2a8c8 + ((*0x2afc0)[0x686] - 1) * 8);
                        iVar14 = fcn.00029ab0();
                        if ((-1 < iVar14) &&
                           (pcVar1 = *((*(iVar10 + 1) - 0x10 >> 4 & 3) * 200 + 0x88 + *0x2a910), pcVar1 != NULL)) {
                            (*pcVar1)(iVar10);
                        }
                    }
                }
                else {
                    iVar10 = *(*0x2a8b8 + 0x3a);
                    if (iVar10 != 0) {
                        fcn.00029bdc(*(*0x2a8c8 + (*(iVar10 + 0xb) - 1) * 8),iVar10,0xa21,*(iVar10 + 0x13));
                    }
                }
code_r0x00013cc1:
                *0x2a8d0 = '\0';
            }
        }
        else if ((cVar8 == '\x02') && (*0x2a8d0 == '\0')) {
            if (((*0x2afc0)[0x6cd] == 0) &&
               ((((*(*0x2afc0 + 0x6c9) & 0x400) != 0 && ((*0x2afc0)[0x6cf] != 0)) &&
                (uVar6 = 0, *(*0x2a8b8 + 0x10) != '\0')))) {
                do {
                    if ((*(*(*0x2a8c8 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00013bbd;
                    uVar3 = uVar6 + 1;
                    uVar6 = uVar3;
                } while (uVar3 < *(*0x2a8b8 + 0x10));
            }
            if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
                if ((*0x2afc0)[0x686] != 0) {
                    iVar10 = *(*0x2a8c8 + ((*0x2afc0)[0x686] - 1) * 8);
                    iVar14 = fcn.00029ab0();
                    if ((-1 < iVar14) &&
                       (pcVar1 = *((*(iVar10 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2a910), pcVar1 != NULL)) {
                        (*pcVar1)(iVar10);
                    }
                }
            }
            else {
                iVar10 = *(*0x2a8b8 + 0x3a);
                if (iVar10 != 0) {
                    fcn.00029bdc(*(*0x2a8c8 + (*(iVar10 + 0xb) - 1) * 8),iVar10,0xa21,*(iVar10 + 0x13));
                }
            }
code_r0x00013bbd:
            *0x2a8d0 = '\x01';
        }
    }
    return;
}


/* fcn.00016690 @ 0x16690 */

//WARNING: Removing unreachable block (ram,0x00013a32)
//WARNING: Removing unreachable block (ram,0x00013a47)
//WARNING: Removing unreachable block (ram,0x00013a63)
//WARNING: Removing unreachable block (ram,0x00013a6c)
//WARNING: Removing unreachable block (ram,0x00013a78)
//WARNING: Removing unreachable block (ram,0x00013a7d)
//WARNING: Removing unreachable block (ram,0x00013a86)
//WARNING: Removing unreachable block (ram,0x00013a91)
//WARNING: Removing unreachable block (ram,0x00013ab0)
//WARNING: Removing unreachable block (ram,0x00013a8d)
//WARNING: Removing unreachable block (ram,0x00013cd4)
//WARNING: Removing unreachable block (ram,0x00013a29)
//WARNING: Removing unreachable block (ram,0x00013a17)
//WARNING: Removing unreachable block (ram,0x00013a20)
//WARNING: Removing unreachable block (ram,0x00013ac4)
//WARNING: Removing unreachable block (ram,0x00013acd)
//WARNING: Removing unreachable block (ram,0x00013af1)
//WARNING: Removing unreachable block (ram,0x00013afa)
//WARNING: Removing unreachable block (ram,0x00013b03)
//WARNING: Removing unreachable block (ram,0x00013b0c)
//WARNING: Removing unreachable block (ram,0x00013b22)
//WARNING: Removing unreachable block (ram,0x00013b2b)
//WARNING: Removing unreachable block (ram,0x00013b6f)
//WARNING: Removing unreachable block (ram,0x00013b79)
//WARNING: Removing unreachable block (ram,0x00013b8e)
//WARNING: Removing unreachable block (ram,0x00013bb7)
//WARNING: Removing unreachable block (ram,0x00013b37)
//WARNING: Removing unreachable block (ram,0x00013b40)
//WARNING: Removing unreachable block (ram,0x00013bbd)
//WARNING: Removing unreachable block (ram,0x00013cca)
//WARNING: Removing unreachable block (ram,0x00013ccf)

void fcn.00016690(int64_t arg1)

{
    code *pcVar1;
    int *piVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    char cVar10;
    int *piVar11;
    unkbyte7 Var13;
    ulong uVar12;
    uint64_t uVar14;
    ulong in_R8;
    uchar uStackX_10;
    uchar uStackX_11;
    uchar uStackX_12;
    int aiStackX_18 [4];
    
    uVar4 = *0x417;
    if ((**0x2afc0 & 2) != 0) {
        if (*0x2a8d0 != '\0') {
            if ((((*(*0x2afc0 + 0x6cd) == '\0') && ((*(*0x2afc0 + 0x6c9) & 0x400) != 0)) &&
                (*(*0x2afc0 + 0x6cf) != '\0')) && (uVar14 = 0, (*0x2a8b8)[4] != '\0')) {
                do {
                    if ((*(*(*0x2a8c8 + uVar14 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00013cc1;
                    uVar4 = uVar14 + 1;
                    uVar14 = uVar4;
                } while (uVar4 < *(*0x2a8b8 + 4));
            }
            if ((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) {
                if (*(*0x2afc0 + 0x686) != 0) {
                    iVar8 = *(*0x2a8c8 + (*(*0x2afc0 + 0x686) - 1) * 8);
                    iVar7 = fcn.00029ab0();
                    if ((-1 < iVar7) &&
                       (pcVar1 = *((*(iVar8 + 1) - 0x10 >> 4 & 3) * 200 + 0x88 + *0x2a910), pcVar1 != NULL)) {
                        (*pcVar1)(iVar8);
                    }
                }
            }
            else {
                iVar8 = *(*0x2a8b8 + 0x3a);
                if (iVar8 != 0) {
                    fcn.00029bdc(*(*0x2a8c8 + (*(iVar8 + 0xb) - 1) * 8),iVar8,0xa21,*(iVar8 + 0x13));
                }
            }
code_r0x00013cc1:
            *0x2a8d0 = '\0';
        }
        return;
    }
    if ((*(*0x2afc0 + 0x6c6) == '\0') && ((**0x2afc0 & 0x108) != 0x108)) {
        *(*0x2afc0 + 0x19c) = (*0x2afc0)[0x19c] + 1;
        if (*(*0x2afc0 + 0x672) <= (*0x2afc0)[0x19c]) {
            if (*(*0x2afc0 + 0x6c7) == '\0') {
                uVar5 = *(*0x2afc0 + 0x66e) >> 2 & 7;
            }
            else {
                uVar5 = *(*0x2afc0 + 0x66e) >> 1 & 5;
            }
            uVar12 = 0x106;
            *(*0x2afc0 + 0x672) = *(uVar5 + 0x2a7f8);
            *(*0x2afc0 + 0x19c) = 0;
            do {
                if (*(((uVar12 & 0xff) - 1) + 0x2a960) != '\0') break;
                cVar10 = uVar12 + -1;
                uVar12 = CONCAT71(uVar12 >> 8,cVar10);
            } while (cVar10 != '\0');
            if (uVar12 != '\0') {
                iVar6 = (uVar12 & 0xff) - 1;
                cVar10 = *(iVar6 + 0x2a960);
                if (cVar10 == *0x2a967) {
                    fcn.00028b28(CONCAT71(iVar6 >> 8,*0x2a967));
                }
                else {
                    *0x2a967 = cVar10;
                }
                fcn.000139f0(0,CONCAT71(uVar12 >> 8,2));
            }
        }
        uVar4 = uVar4 >> 4 & 7;
        if (uVar4 != (*0x2a966 & 7)) {
            *0x2a966 = *0x2a966 & 0xf8 | uVar4;
            fcn.00028a7c();
        }
        return;
    }
    iVar8 = arg1;
    fcn.00015918();
    puVar3 = *0x2afc0;
    uVar4 = (*0x2afc0)[0x19b];
    if (uVar4 != 0) {
        uVar12 = CONCAT71(in_R8 >> 8,1);
        uVar5 = uVar12;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
            uVar12 = CONCAT71(uVar12 >> 8,uVar12 + '\x01');
            uVar5 = uVar12;
        }
        iVar8 = fcn.000133f0(CONCAT71(iVar8 >> 8,0x10),0,uVar5,arg1);
        if (iVar8 == 0) {
            return;
        }
        *(puVar3 + 0x19d) = 0;
        fcn.00014ebc(iVar8,puVar3 + 0x19d);
    }
    fcn.00015c04();
    if (*(*0x2a8b8 + 0x2a) == *(*0x2a8b8 + 0x22)) {
        if (*(*0x2a8b8 + 0x52) == *(*0x2a8b8 + 0x5a)) {
            Var13 = *0x2a8b8 >> 8;
            uVar5 = CONCAT71(Var13,2);
            if (*(*0x2a8b8 + 0x32) == *0x2afc0 + 0x5d6) {
                uVar5 = CONCAT71(Var13,1);
            }
            goto code_r0x00015e4f;
        }
        uStackX_10 = **(*0x2a8b8 + 0x5a);
        uStackX_11 = *(*(*0x2a8b8 + 0x5a) + 1);
        uStackX_12 = *(*(*0x2a8b8 + 0x5a) + 2);
        piVar11 = &uStackX_10;
        if (**0x2a8c0 == 0x14eb4) {
            (*0x14eb4)();
        }
        else {
            iVar8 = (***0x2a8c0)(*0x2a8c0,piVar11);
            if (-1 < iVar8) {
                fcn.00014ba4();
                fcn.00014ba4();
                fcn.00014ba4();
            }
        }
    }
    else {
        *0x2a920 = **(*0x2a8b8 + 0x2a);
        piVar11 = 0x2a920;
        if (**0x2a8a0 == 0x14e8c) {
            (*0x14e8c)();
        }
        else {
            iVar8 = (***0x2a8a0)(*0x2a8a0,0x2a920,1);
            piVar2 = *0x2a8b8;
            if (-1 < iVar8) {
                *0x2a920 = **(*0x2a8b8 + 0x2a);
                puVar9 = *(*0x2a8b8 + 0x2a) + 1;
                if (puVar9 == *0x2afc0 + 0x666) {
                    puVar9 = *0x2afc0 + 0x5e6;
                }
                *(*0x2a8b8 + 0x2a) = puVar9;
                piVar11 = piVar2;
            }
        }
        if (*0x2a8a0 != NULL) {
            piVar11 = aiStackX_18;
            (*(*0x2a8a0)[1])(*0x2a8a0,piVar11);
            *(*0x2afc0 + 0x1a1) = (aiStackX_18[0] != 1) - 1U & 0x40;
        }
    }
    uVar5 = CONCAT71(piVar11 >> 8,2);
code_r0x00015e4f:
    fcn.000139f0(0,uVar5);
    return;
}


/* fcn.00016924 @ 0x16924 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00016924(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t arg1_00;
    uint8_t *arg1_01;
    uint64_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint32_t arg1_02;
    uint64_t uVar6;
    uint64_t *puVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    bool bVar12;
    uint8_t auStackX_8 [8];
    int64_t var_30h;
    uint8_t auStack_38 [16];
    uint32_t var_bp_10h;
    
    puVar10 = NULL;
    uVar11 = (*(*0x2afc0 + 0x5ae) << 0xc) + *(*0x2a8b8 + 0x12);
    fcn.00010300(auStack_38,0x10,0);
    uVar6 = 2;
    fcn.00010300(auStackX_8,2,0);
    puVar1 = arg1 + 0x148;
    if (((((*puVar1 == 0) || (puVar7 = arg1 + 0x138, *puVar7 == 0)) || (*puVar1 < *(*0x2a8b8 + 0x12))) ||
        ((uVar11 < *puVar1 || (*puVar7 < *(*0x2a8b8 + 0x12))))) || (uVar11 < *puVar7)) {
        return 0xff;
    }
    uVar11 = *arg2;
    uVar4 = 0xe0;
    uVar2 = 0;
    do {
        uVar9 = uVar2;
        if ((uVar11 & 1) != 0) {
            uVar9 = uVar2 + 1;
            auStack_38[uVar2] = uVar4;
        }
        uVar4 = uVar4 + 1;
        uVar11 = uVar11 >> 1;
        uVar2 = uVar9;
    } while (uVar4 < 0xe8);
    do {
        uVar4 = *(uVar6 + arg2);
        arg1_02 = puVar1;
        uVar11 = uVar9;
        if (uVar4 == 0) break;
        if (uVar4 == 1) {
            auStackX_8[1] = 1;
            auStackX_8[0] = *(uVar6 + arg2);
            if (puVar1 != NULL) {
                fcn.000168cc(arg1_02,auStackX_8);
                return 0;
            }
            return 0;
        }
        uVar8 = uVar6 + 1;
        uVar6 = uVar8;
        uVar11 = uVar9 + 1;
        auStack_38[uVar9] = uVar4;
        uVar9 = uVar11;
    } while (uVar8 < 8);
code_r0x00016a29:
    bVar12 = false;
    uVar4 = uVar11;
    if ((puVar7 == NULL) || (uVar6 = *puVar7, uVar6 == 0)) {
        puVar10 = NULL;
    }
    else {
        uVar2 = *(arg1 + 0x141);
        uVar8 = *(arg1 + 0x140);
        if (*(arg1 + 0x141) != uVar8) {
            do {
                if ((puVar10 == NULL) || (bVar12)) goto code_r0x00016abc;
                bVar12 = *(uVar6 + uVar2 * 8) == puVar10;
                uVar2 = (uVar2 + 1) % *(arg1 + 0x142);
            } while (uVar2 != uVar8);
            if (bVar12) goto code_r0x00016bcb;
        }
        if (*(arg1 + 0x141) == uVar8) goto code_r0x00016bcb;
        uVar2 = *(arg1 + 0x141);
code_r0x00016abc:
        puVar10 = *(uVar6 + uVar2 * 8);
    }
    if (puVar10 == NULL) goto code_r0x00016bcb;
    uVar8 = *puVar10;
    uVar6 = 0;
    uVar5 = 0;
    if (uVar4 != 0) {
        do {
            uVar5 = uVar6;
            if (uVar8 == auStack_38[uVar6]) break;
            uVar5 = uVar5 + 1;
            uVar6 = uVar5;
        } while (uVar5 < uVar4);
    }
    if (uVar5 == uVar4) {
        if (((puVar7 != NULL) && (*puVar7 != 0)) && (uVar6 = *(arg1 + 0x141), *(arg1 + 0x141) != *(arg1 + 0x140))) {
            do {
                if (*(*puVar7 + uVar6 * 8) == puVar10) break;
                uVar6 = (uVar6 + 1) % *(arg1 + 0x142);
            } while (uVar6 != *(arg1 + 0x140));
            if (uVar6 != *(arg1 + 0x140)) {
                if (uVar6 != *(arg1 + 0x141)) {
                    do {
                        iVar3 = *(*puVar7 + (((*(arg1 + 0x142) - 1) + uVar6) % *(arg1 + 0x142) & 0xffU) * 8);
                        arg1_00 = *(*puVar7 + uVar6 * 8);
                        if ((*(arg1 + 0x144) != 0) && (arg1_00 != iVar3)) {
                            section..text(arg1_00,iVar3,*(arg1 + 0x144));
                        }
                        uVar2 = ((*(arg1 + 0x142) - 1) + uVar6) % *(arg1 + 0x142);
                        uVar6 = uVar2 & 0xff;
                    } while (uVar2 != *(arg1 + 0x141));
                }
                *(arg1 + 0x141) = (*(arg1 + 0x141) + 1) % *(arg1 + 0x142);
            }
        }
        auStackX_8[1] = 0;
        auStackX_8[0] = uVar8;
        if (puVar1 != NULL) {
            fcn.000168cc(arg1_02,auStackX_8);
        }
    }
    goto code_r0x00016a29;
code_r0x00016bcb:
    uVar6 = 0;
    if (uVar4 != 0) {
        do {
            puVar10 = auStack_38 + uVar6;
            if (*puVar10 == 0) {
                return 0;
            }
            if (((puVar7 == NULL) || (*puVar7 == 0)) || (puVar10 == NULL)) {
                iVar3 = 0;
code_r0x00016c5c:
                if (iVar3 == 0) goto code_r0x00016c61;
            }
            else {
                uVar11 = *(arg1 + 0x141);
                if (*(arg1 + 0x141) != *(arg1 + 0x140)) {
                    do {
                        arg1_01 = *(*puVar7 + uVar11 * 8);
                        if ((*(arg1 + 0x144) == 0) || (arg1_01 == puVar10)) {
                            iVar3 = 0;
                        }
                        else {
                            iVar3 = fcn.000102e0(arg1_01,puVar10,*(arg1 + 0x144));
                        }
                        if (iVar3 == 0) {
                            iVar3 = *(*puVar7 + uVar11 * 8);
                            goto code_r0x00016c5c;
                        }
                        uVar11 = (uVar11 + 1) % *(arg1 + 0x142);
                    } while (uVar11 != *(arg1 + 0x140));
                }
code_r0x00016c61:
                if (puVar7 != NULL) {
                    fcn.000168cc(puVar7,puVar10);
                }
                auStackX_8[0] = *puVar10;
                auStackX_8[1] = 1;
                if (puVar1 != NULL) {
                    fcn.000168cc(arg1_02,auStackX_8);
                }
            }
            uVar8 = uVar6 + 1;
            uVar6 = uVar8;
        } while (uVar8 < uVar4);
    }
    return 0;
}


/* fcn.00029c7c @ 0x29c7c */

ulong fcn.00029c7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong in_stack_00000028;
    ushort in_stack_00000030;
    
    iVar2 = fcn.00029ab0();
    if ((iVar2 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x68 + *0x2a910), pcVar1 == NULL)) {
        uVar3 = 0;
    }
    else {
        uVar3 = (*pcVar1)(arg1,arg2,arg3,arg4 & 0xffff,in_stack_00000028,in_stack_00000030);
    }
    return uVar3;
}


/* fcn.000168cc @ 0x168cc */

void fcn.000168cc(uint32_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    char cVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_register_00000014;
    int64_t arg2_00;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((*piVar2 != 0) && (arg2_00 != 0)) {
        arg1_00 = *(*piVar2 + *(piVar2 + 1) * 8);
        if ((*(piVar2 + 0xc) != 0) && (arg1_00 != arg2_00)) {
            section..text(arg1_00,arg2_00,*(piVar2 + 0xc));
        }
        cVar1 = (*(piVar2 + 1) + 1) % *(piVar2 + 10);
        *(piVar2 + 1) = cVar1;
        if (cVar1 == *(piVar2 + 9)) {
            *(piVar2 + 9) = (*(piVar2 + 9) + 1) % *(piVar2 + 10);
        }
    }
    return;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.000297b4 @ 0x297b4 */

uint fcn.000297b4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    iVar1 = (**(*(arg1 + 0x80) + 0x30))(*(arg1 + 0x80),2,arg2 & 0xffffffff,1,auStackX_8);
    if (iVar1 < 0) {
        auStackX_8[0] = 0xffffffff;
    }
    return auStackX_8[0];
}


/* fcn.00029860 @ 0x29860 */

uint fcn.00029860(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint auStackX_10 [6];
    
    auStackX_10[0] = 0;
    iVar1 = (**(*(arg1 + 0x80) + 0x10))(*(arg1 + 0x80),2,0,arg2 & 0xffffffff,1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0xffffffff;
    }
    return auStackX_10[0];
}


/* fcn.000188e4 @ 0x188e4 */

uint64_t fcn.000188e4(int64_t arg1)

{
    uchar uVar1;
    int64_t *piVar2;
    uint *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t arg1_00;
    int64_t *piVar7;
    int64_t iVar8;
    
    piVar2 = fcn.00012f1c(3);
    if (piVar2 != NULL) {
        *(arg1 + 0x40) = piVar2;
        puVar3 = fcn.00012f1c(1);
        if (puVar3 != NULL) {
            *piVar2 = puVar3;
            *puVar3 = 0x4000;
            *(*piVar2 + 0xc) = 0;
            *(*piVar2 + 0x10) = 1;
            arg1_00 = arg1;
            fcn.00018798(arg1_00,*piVar2);
            iVar4 = fcn.00012f1c(6);
            if (iVar4 != 0) {
                piVar7 = piVar2 + 3;
                iVar8 = 4;
                do {
                    iVar5 = iVar4;
                    *piVar7 = iVar5;
                    piVar7 = piVar7 + 1;
                    iVar8 = iVar8 + -1;
                    iVar4 = iVar5 + 0x20;
                } while (iVar8 != 0);
                piVar2[9] = iVar5 + 0x20;
                uVar6 = iVar5 + 0x40;
                piVar2[10] = uVar6;
                if ((*(arg1 + 0x58) & 0x10) == 0) {
                    iVar4 = fcn.00012f1c(1);
                    piVar2[1] = iVar4;
                    iVar4 = fcn.00012f1c(1);
                    piVar2[2] = iVar4;
                    *piVar2[1] = *(*0x2afc0 + 0x716) + 1 | 0x85000;
                    *(piVar2[1] + 8) = piVar2[2];
                    *(piVar2[1] + 0xc) = 0;
                    *(piVar2[1] + 4) = 0;
                    if (*(*0x2afc0 + 0x6c7) == '\0') {
                        *(piVar2[1] + 0x10) = 8;
                    }
                    else {
                        *(piVar2[1] + 0x10) = 0x10;
                    }
                    *piVar2[2] = 0xf8140000;
                    *(piVar2[2] + 0x10) = 0xf8140000;
                    *(piVar2[2] + 4) = piVar2[2] + 0x18;
                    *(piVar2[2] + 0xc) = piVar2[2] + 0x18;
                    *(piVar2[2] + 8) = 0;
                    uVar1 = fcn.00013210(0x1712c);
                    *(piVar2[2] + 0x14) = uVar1;
                    *(piVar2[2] + 0x15) = 0;
                    fcn.00018798(arg1_00,piVar2[1]);
                    uVar6 = fcn.000139f0(arg1_00,0);
                }
                return uVar6 & 0xffffffffffffff00;
            }
        }
    }
    return 0xff;
}


/* fcn.000171ec @ 0x171ec */

uchar fcn.000171ec(int64_t arg1)

{
    uchar uVar1;
    unkint7 extraout_RAX;
    
    fcn.0001b874(arg1);
    if (extraout_RAX < 0) {
        uVar1 = 0xff;
    }
    else {
        fcn.000298a8(arg1,0x14,0x80000000);
        fcn.000298a8(arg1,4,0x3c);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000298a8 @ 0x298a8 */

void fcn.000298a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x80) + 0x18))(*(arg1 + 0x80),2,0,arg2 & 0xffffffff,1,auStackX_18);
    return;
}


/* fcn.00011eec @ 0x11eec */

void fcn.00011eec(void)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(*0x2a8b8 + 0x10) != 0) {
        do {
            iVar1 = *(*0x2a8c8 + uVar2 * 8);
            if ((iVar1 != 0) && ((*(iVar1 + 0x58) & 1) != 0)) {
                return;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*0x2a8b8 + 0x10));
    }
    **0x2afc0 = **0x2afc0 & 0xffffff7f;
    return;
}


/* fcn.0001b98c @ 0x1b98c */

void fcn.0001b98c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 & 0xffffffffU) <= *(arg1_00 + 0x20)) {
        uVar1 = fcn.00029860(arg1_00,arg2 & 0xffffffffU);
        fcn.000298a8(arg1_00,arg2 & 0xffffffff,uVar1 | arg3);
    }
    return;
}


/* fcn.00016ff0 @ 0x16ff0 */

ulong fcn.00016ff0(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint64_t in_RDX;
    uint8_t uVar6;
    int64_t in_R8;
    
    iVar2 = fcn.0001b874(arg1);
    if ((iVar2 < 0) || (uVar6 = 1, (*(arg1 + 0x58) & 1) == 0)) {
        uVar3 = 0xff;
    }
    else {
        if (*(arg1 + 0x28) != '\0') {
            do {
                in_R8 = CONCAT71(in_R8 >> 8,uVar6);
                in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                fcn.00012cf8(arg1,in_RDX,in_R8);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(arg1 + 0x28));
        }
        fcn.000298a8(arg1,4,0);
        (**(*0x2a900 + 0xf8))(*(*(*0x2a8b8 + 0x3a2) + 10) * 1000);
        fcn.000298a8(arg1,0x14,0xffffffff);
        fcn.000298a8(arg1,0x100,0);
        uVar5 = 0;
        iVar2 = *(arg1 + 0x10);
        if (*(arg1 + 0x48) != 0) {
            do {
                uVar4 = uVar5;
                uVar5 = uVar5 + 1;
                *(iVar2 + uVar4 * 4) = 0;
            } while (uVar5 < *(arg1 + 0x48));
        }
        puVar1 = *(arg1 + 0x40);
        fcn.000130f0(*puVar1,1);
        if (puVar1[1] != 0) {
            fcn.000130f0(puVar1[1],1);
        }
        if (puVar1[2] != 0) {
            fcn.000130f0(puVar1[2],1);
        }
        fcn.000130f0(puVar1[3],6);
        uVar3 = 0;
        fcn.000130f0(puVar1,3);
        fcn.000139f0(arg1,CONCAT71(uVar3 >> 8,3));
        *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffffe;
        fcn.00011eec();
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00016e24 @ 0x16e24 */

ulong fcn.00016e24(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    uint8_t uVar7;
    
    iVar4 = fcn.0001b874(arg1);
    uVar7 = 0;
    if ((-1 < iVar4) && (uVar3 = fcn.000297b4(arg1,8), (uVar3 & 0xffffff00) == 0xc031000)) {
        *(arg1 + 0x4c) = 0x1000;
        *(arg1 + 0x48) = 0x20;
        uVar3 = fcn.000297b4(arg1,0x10);
        *(arg1 + 0x18) = uVar3 & 0xfffffff0;
        uVar1 = fcn.00029860(arg1,0x48);
        uVar6 = 0;
        iVar4 = *(arg1 + 0x10);
        *(arg1 + 0x28) = uVar1;
        if (*(arg1 + 0x48) != 0) {
            do {
                uVar5 = uVar6;
                uVar6 = uVar6 + 1;
                *(iVar4 + uVar5 * 4) = 0;
            } while (uVar6 < *(arg1 + 0x48));
        }
        cVar2 = fcn.000188e4(arg1);
        if ((cVar2 != -1) && (cVar2 = fcn.000171ec(arg1), cVar2 != -1)) {
            uVar3 = fcn.00029860(arg1,0x34);
            uVar3 = uVar3 & 0x3fff;
            fcn.000298a8(arg1,8,1);
            do {
                (**(*0x2a900 + 0xf8))(1);
                uVar5 = fcn.00029860(arg1,8);
                if ((uVar5 & 1) == 0) {
                    fcn.000298a8(arg1,0x34,uVar3 | ((uVar3 * 6 - 0x4ec) / 7 & 0x7fff) << 0x10);
                    fcn.000298a8(arg1,0x18,*(arg1 + 0x10));
                    fcn.000298a8(arg1,0x40,(uVar3 * 9) / 10 & 0x3fff);
                    fcn.000298a8(arg1,4,0xb4);
                    fcn.000298a8(arg1,0x10,0xc0000042);
                    *(arg1 + 0x58) = *(arg1 + 0x58) | 1;
                    if (-1 < **0x2afc0) {
                        **0x2afc0 = **0x2afc0 | 0x80;
                    }
                    return 0;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 100);
        }
    }
    return 0xff;
}


/* fcn.0001b9d0 @ 0x1b9d0 */

void fcn.0001b9d0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 & 0xffffffffU) <= *(arg1_00 + 0x20)) {
        uVar1 = fcn.00029860(arg1_00,arg2 & 0xffffffffU);
        fcn.000298a8(arg1_00,arg2 & 0xffffffff,uVar1 & ~arg3);
    }
    return;
}


/* fcn.00018a60 @ 0x18a60 */

ulong fcn.00018a60(int64_t arg1)

{
    uchar uVar1;
    ulong uVar2;
    uint64_t arg2;
    uint8_t uVar3;
    int64_t arg3;
    
    if (*(*0x2afc0 + 0x5ad) == '\x01') {
        uVar2 = 0xff;
    }
    else {
        (**(*0x2a900 + 0xf8))(100000);
        arg2 = 0;
        arg3 = 0x80000000;
        *(*0x2afc0 + 0x5ad) = 1;
        fcn.000298a8(arg1,0x14,0x80000000);
        uVar1 = *arg1;
        uVar3 = 1;
        if (*(arg1 + 0x28) != '\0') {
            do {
                arg3 = CONCAT71(arg3 >> 8,uVar3);
                arg2 = CONCAT71(arg2 >> 8,uVar1) | 0x80;
                fcn.00012d38(arg1,arg2,arg3);
                uVar3 = uVar3 + 1;
            } while (uVar3 <= *(arg1 + 0x28));
        }
        fcn.000298a8(arg1,0xc,0x40);
        fcn.000298a8(arg1,0x10,0x80000000);
        *(*0x2afc0 + 0x5ad) = 0;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000299cc @ 0x299cc */

ulong fcn.000299cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uStackX_8;
    int64_t *in_stack_00000028;
    int64_t aiStack_18 [2];
    
    if (*0x2a8b8 == 0) {
        *in_stack_00000028 = arg3;
    }
    else if (((((**0x2afc0 & 0x1000000) == 0) || (*(arg1 + 200) == 0)) || (uVar1 = *(*0x2a8b8 + 0x12), arg3 < uVar1))
            || (uVar1 + 0x103ff + (*(*0x2afc0 + 0x5ae) << 0xc) < arg3)) {
        uStackX_8 = arg4 & 0xffffffffU;
        iVar2 = (**(*(arg1 + 0x80) + 0x48))(*(arg1 + 0x80),(arg2 & 0xffU) >> 7,arg3,&uStackX_8,aiStack_18);
        if ((iVar2 < 0) || (uStackX_8 != (arg4 & 0xffffffffU))) {
            *in_stack_00000028 = arg3;
            return 0xff;
        }
        *in_stack_00000028 = aiStack_18[0];
    }
    else {
        *in_stack_00000028 = (*(arg1 + 200) - uVar1) + arg3;
    }
    return 0;
}


/* fcn.00018b2c @ 0x18b2c */

char fcn.00018b2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    
    uVar1 = *(*0x2afc0 + 0x6c0);
    uVar2 = 0;
    while( true ) {
        if ((uVar1 != 0) && (uVar1 << 4 <= uVar2)) {
            *arg2 = *arg2 | 0x4000;
            fcn.00017274(arg1);
            return -(*(arg3 + 0x15) != '\0');
        }
        fcn.00017274(arg1);
        if (*(arg3 + 0x15) == '\0') {
            return '\0';
        }
        if ((*arg4 & 3) == 0) break;
        (**(*0x2a900 + 0xf8))(0x3c);
        uVar2 = uVar2 + 1;
    }
    return -1;
}


/* fcn.00014918 @ 0x14918 */

uint64_t fcn.00014918(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    iVar2 = *(arg1 + 0x40);
    if (iVar2 != 0) {
        uVar1 = fcn.0001b8d0(iVar2);
        arg1 = iVar2;
        if (uVar1 < 0) {
            return uVar1 & 0xffffffffffffff00;
        }
    }
    iVar2 = 0x4a;
    if (arg2 < '\0') {
        iVar2 = 0x48;
    }
    return *(iVar2 + arg1) >> ((arg2 & 0xf) - 1 & 0x1f) & 0xffffffffffffff01;
}


/* fcn.0001497c @ 0x1497c */

void fcn.0001497c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    
    iVar3 = *(arg1 + 0x40);
    uVar4 = (arg2 & 0xf) - 1;
    if (iVar3 == 0) {
        iVar3 = arg1;
    }
    else {
        iVar2 = fcn.0001b8d0(iVar3);
        if (iVar2 < 0) {
            return;
        }
    }
    uVar1 = 0x4a;
    if (arg2 < '\0') {
        uVar1 = 0x48;
    }
    *(uVar1 + iVar3) = (arg3 & 0xff) << (uVar4 & 0x1f) | *(uVar1 + iVar3) & ~(1 << (uVar4 & 0xf));
    return;
}


/* fcn.00018798 @ 0x18798 */

ulong fcn.00018798(uint32_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint in_register_00000014;
    uint16_t uVar5;
    uint32_t *puVar6;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if ((CONCAT44(in_register_00000014,arg2) == 0) ||
       (uVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x10), uVar1 == 0)) {
        uVar3 = 0xff;
    }
    else {
        uVar5 = 0;
        if (*(iVar4 + 0x48) != 0) {
            do {
                puVar6 = *(iVar4 + 0x10) + uVar5 * 4;
                while( true ) {
                    uVar2 = *puVar6;
                    if ((uVar2 == 0) || (*(uVar2 + 0x10) <= uVar1)) break;
                    puVar6 = uVar2 + 0xc;
                }
                if (uVar2 != CONCAT44(in_register_00000014,arg2)) {
                    *(CONCAT44(in_register_00000014,arg2) + 0xc) = *puVar6;
                    *puVar6 = arg2;
                }
                uVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x10);
                uVar5 = uVar5 + uVar1;
            } while (uVar5 < *(iVar4 + 0x48));
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00018804 @ 0x18804 */

ulong fcn.00018804(uint32_t arg1,uint32_t arg2)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint in_register_00000014;
    uint32_t *puVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t *puVar7;
    
    puVar4 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    if ((puVar4 == NULL) || (puVar4[4] == '\0')) {
        uVar3 = 0xff;
    }
    else {
        *puVar4 = *puVar4 | 0x4000;
        uVar6 = 0;
        if (*(arg1_00 + 0x48) != 0) {
            do {
                puVar7 = *(arg1_00 + 0x10) + uVar6 * 4;
                puVar1 = *puVar7;
                if (puVar1 != NULL) {
                    do {
                        if (puVar1 == puVar4) break;
                        puVar7 = puVar1 + 3;
                        puVar1 = *puVar7;
                    } while (puVar1 != NULL);
                    if (puVar1 != NULL) {
                        *puVar7 = puVar4[3];
                    }
                }
                uVar6 = uVar6 + puVar4[4];
            } while (uVar6 < *(arg1_00 + 0x48));
        }
        fcn.000298a8(arg1_00,0xc,4);
        fcn.000298a8(arg1_00,0x10,4);
        do {
            uVar2 = fcn.00029860(arg1_00,0xc);
            if ((uVar2 & 4) != 0) break;
            (**(*0x2a900 + 0xf8))(10);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 100);
        fcn.000298a8(arg1_00,0x14,4);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00012d38 @ 0x12d38 */

ulong fcn.00012d38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uchar uVar6;
    int64_t iVar7;
    unkbyte7 Var8;
    uchar uVar9;
    unkbyte7 Var10;
    uint64_t in_R9;
    uint8_t uVar11;
    
    uVar9 = arg3;
    uVar6 = arg2;
    uVar11 = 0;
    do {
        iVar7 = CONCAT71(arg2 >> 8,uVar6);
        iVar5 = arg1;
        uVar2 = fcn.00011f84(arg1,iVar7,CONCAT71(arg3 >> 8,uVar9),CONCAT71(in_R9 >> 8,1));
        if ((((uVar2 >> 9 & 1) != 0) || ((uVar2 >> 0xe & 1) != 0)) || (uVar2 == 0xff)) goto code_r0x00012eb8;
        if ((uVar2 & 0x40) == 0) goto code_r0x00012f16;
        arg3 = *(arg1 + 0x2a);
        uVar4 = 0;
        arg2 = CONCAT71(iVar7 >> 8,uVar9);
        cVar1 = fcn.00029fb0(CONCAT71(iVar5 >> 8,uVar6),arg2,arg3,0);
        if ((cVar1 != '\0') || ((uVar11 == 0 && ((uVar2 & 0x10) == 0)))) goto code_r0x00012f16;
        Var10 = arg3 >> 8;
        Var8 = arg2 >> 8;
        if ((uVar2 & 1) == 0) {
            fcn.00012cf8(arg1,CONCAT71(Var8,uVar6),CONCAT71(Var10,uVar9));
            fcn.0001baa4(CONCAT71(arg1 >> 8,8),0x1000);
            goto code_r0x00012f16;
        }
        if (*(*0x2afc0 + 0x6c5) != '\0') {
            fcn.00012014(arg1,CONCAT71(Var8,uVar6),CONCAT71(Var10,uVar9));
            goto code_r0x00012f16;
        }
        if (((uVar11 == 0) && ((uVar2 & 0x20) != 0)) && ((*(*0x2afc0 + 0x6c9) & 0x8000) == 0)) {
code_r0x00012e48:
            in_R9 = uVar2;
            arg3 = CONCAT71(arg3 >> 8,uVar9);
            arg2 = CONCAT71(arg2 >> 8,uVar6);
            uVar3 = fcn.00012314(arg1,arg2,arg3,in_R9);
            if (2 < uVar3 - 2) {
                if (uVar3 == 0) goto code_r0x00012eb8;
                if (5 < uVar3) goto code_r0x00012f16;
                fcn.0001baa4(CONCAT71(uVar3 >> 8,0x10),0x4000);
                goto code_r0x00012eb8;
            }
            if (2 < uVar11) {
                arg3 = CONCAT71(arg3 >> 8,uVar9);
                arg2 = CONCAT71(arg2 >> 8,uVar6);
                fcn.00012014(arg1,arg2,arg3);
            }
        }
        else {
            iVar5 = CONCAT71(Var10,uVar9);
            iVar7 = CONCAT71(Var8,uVar6);
            fcn.00012258(arg1,iVar7,iVar5);
            iVar5 = CONCAT71(iVar5 >> 8,uVar9);
            iVar7 = CONCAT71(iVar7 >> 8,uVar6);
            fcn.00012108(arg1,iVar7,iVar5);
            in_R9 = CONCAT71(uVar4 >> 8,1);
            arg3 = CONCAT71(iVar5 >> 8,uVar9);
            arg2 = CONCAT71(iVar7 >> 8,uVar6);
            uVar2 = fcn.00011f84(arg1,arg2,arg3,in_R9);
            if (uVar2 == 0xff) goto code_r0x00012eb8;
            if ((uVar2 & 0x40) == 0) goto code_r0x00012f16;
            if (((uVar2 & 1) != 0) && ((uVar2 & 0x20) != 0)) goto code_r0x00012e48;
        }
        (**(*0x2a900 + 0xf8))(100000);
        uVar11 = uVar11 + 1;
    } while (uVar11 < 6);
    if (uVar11 == 6) {
        iVar5 = CONCAT71(arg3 >> 8,uVar9);
        iVar7 = CONCAT71(arg2 >> 8,uVar6);
        fcn.00012014(arg1,iVar7,iVar5);
        fcn.00011f84(arg1,CONCAT71(iVar7 >> 8,uVar6),CONCAT71(iVar5 >> 8,uVar9),CONCAT71(in_R9 >> 8,1));
code_r0x00012eb8:
        uVar4 = 0xff;
    }
    else {
code_r0x00012f16:
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00017274 @ 0x17274 */

ulong fcn.00017274(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    
    iVar6 = fcn.0001b874(arg1);
    if (((-1 < iVar6) && (uVar3 = fcn.000297b4(arg1,4), (uVar3 & 6) == 6)) &&
       (uVar4 = fcn.000297b4(arg1,0x10), (uVar4 & 0xffffff80) == *(arg1 + 0x18))) {
        uVar7 = fcn.00029860(arg1,0xc);
        if ((uVar7 & 0x40000000) != 0) {
            fcn.000298a8(arg1,0xc,0x40000000);
            iVar5 = fcn.00029860(arg1,0x18);
            if (iVar5 == *(arg1 + 0x10)) {
                **0x2afc0 = **0x2afc0 & 0xfffffffe;
                if ((*(*(*0x2a8b8 + 0x3aa) + 2) != '\0') && (uVar7 = 0, iVar6 = *0x2a8b8, *(*0x2a8b8 + 0x10) != '\0'))
                {
                    do {
                        iVar1 = *(*0x2a8c8 + uVar7 * 8);
                        if (((iVar1 != 0) && (((*(iVar1 + 0x58) & 5) == 5 && (*(iVar1 + 1) == '0')))) &&
                           (((*(iVar1 + 0x2a) ^ *(arg1 + 0x2a)) & 0xfff8) == 0)) {
                            *(*0x2afc0 + 0x6c5) = 1;
                            fcn.00029b44(*(*0x2a8c8 + uVar7 * 8));
                            iVar6 = *0x2a8b8;
                        }
                        uVar3 = uVar7 + 1;
                        uVar7 = uVar3;
                    } while (uVar3 < *(iVar6 + 0x10));
                }
                fcn.00016ff0(arg1);
            }
            else {
                *(*0x2afc0 + 0x6c5) = 0;
                **0x2afc0 = **0x2afc0 | 1;
                fcn.00016e24(arg1);
            }
            return 0;
        }
        if ((*(arg1 + 0x58) & 1) != 0) {
            uVar3 = fcn.00029860(arg1,4);
            if ((uVar3 & 0xc0) == 0x80) {
                uVar4 = fcn.00029860(arg1,0x18);
                if ((uVar4 & 0xffffff00) == *(arg1 + 0x10)) {
                    uVar7 = fcn.00029860(arg1,0xc);
                    if ((uVar7 & 0x40) != 0) {
                        fcn.0001b9d0(arg1,4,4);
                        fcn.00018a60(arg1);
                        fcn.0001b98c(arg1,4,4);
                    }
                    uVar7 = fcn.00029860(arg1,0xc);
                    if ((uVar7 & 2) == 0) {
                        return 0;
                    }
                    while( true ) {
                        uVar7 = *(*(arg1 + 0x10) + 0x84);
                        *(*(arg1 + 0x10) + 0x84) = 0;
                        fcn.000298a8(arg1,0xc,2);
                        if (uVar7 == 0) break;
                        do {
                            uVar8 = uVar7 & 0xfffffff0;
                            uVar7 = *(uVar8 + 8);
                            if (((*(uVar8 + 0x15) == '\x01') && (*(uVar8 + 0x14) - 1U < 0x32)) &&
                               (pcVar2 = *((*(uVar8 + 0x14) - 1) * 8 + 0x2a980), pcVar2 != NULL)) {
                                (*pcVar2)(arg1,0,uVar8,0,0);
                            }
                        } while ((uVar8 != uVar7) && (uVar7 != 0));
                    }
                    return 0;
                }
            }
            else {
                uVar4 = fcn.00029860(arg1,0xc);
                fcn.000298a8(arg1,0xc,uVar4);
            }
        }
    }
    return 0xff;
}


/* fcn.00018ce8 @ 0x18ce8 */

void fcn.00018ce8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    char cVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    char cVar10;
    uint8_t uVar11;
    int32_t var_20h;
    int8_t var_24h;
    int32_t var_28h;
    int16_t var_2ch;
    uint32_t var_40h;
    
    uVar11 = 0;
    uVar6 = 0;
    do {
        if (*(uVar6 + 0xb8 + arg1) != '\0') {
            return;
        }
        uVar4 = uVar6 + 1;
        uVar6 = uVar4;
    } while (uVar4 < 0x40);
    uVar9 = 0;
    iVar2 = 0x20;
    do {
        if (*arg2 == '\0') {
            arg2 = arg2 + 1;
            uVar9 = uVar9 + 1;
        }
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    cVar5 = *(*0x2afc0 + 0x6ce);
    if (cVar5 != '\0') {
        if (cVar5 == '\x01') {
            uVar4 = 0x18;
            goto code_r0x00018d5c;
        }
        if (cVar5 == '\x02') {
            uVar4 = 8;
            goto code_r0x00018d5c;
        }
    }
    uVar4 = 0x1c;
code_r0x00018d5c:
    uVar6 = 0;
    if (0 < 0x20 - uVar9) {
        do {
            cVar5 = uVar6;
            if (uVar4 <= uVar11) break;
            if ((((cVar5 == '\0') || (*(uVar6 + -1 + 0xb8 + arg1) != ' ')) || (*(arg2 + uVar11) != ' ')) &&
               ((uVar1 = *(arg2 + uVar11), 0x1e < uVar1 - 1 && (uVar1 < 0x7f)))) {
                *(uVar6 + 0xb8 + arg1) = uVar1;
            }
            else {
                cVar5 = cVar5 + -1;
            }
            uVar6 = cVar5 + 1U;
            uVar11 = uVar11 + 1;
        } while (cVar5 + 1U < 0x20 - uVar9);
    }
    if ((*(*0x2afc0 + 0x6c9) & 0x100) != 0) {
        var_20h = 0x2d0055;
        cVar10 = 'U';
        var_24h = 0;
        var_28h = 0x2d000055;
        var_2ch = 0;
        cVar5 = *(arg1 + 0xb8);
        uVar6 = 0;
        while (cVar5 != '\0') {
            uVar7 = uVar6 + 1;
            *(&var_40h + uVar6) = *(arg1 + 0xb8 + uVar6);
            uVar6 = uVar7;
            cVar5 = *(uVar7 + 0xb8 + arg1);
        }
        *(&var_40h + uVar6) = 0;
        if (*0x2a50b < 10) {
            var_20h = CONCAT22(0x2d,CONCAT11(*0x2a50b + 0x30,0x55));
            uVar6 = 0;
            do {
                uVar7 = uVar6 + 1;
                *(arg1 + 0xb8 + uVar6) = cVar10;
                cVar10 = *(&var_20h + uVar7);
                uVar6 = uVar7;
            } while (cVar10 != '\0');
        }
        else {
            var_28h = CONCAT13(0x2d,CONCAT12(*0x2a50b % 10 + 0x30,CONCAT11(*0x2a50b / 10 + 0x30,0x55)));
            uVar6 = 0;
            do {
                uVar7 = uVar6 + 1;
                *(arg1 + 0xb8 + uVar6) = cVar10;
                cVar10 = *(&var_28h + uVar7);
                uVar6 = uVar7;
            } while (cVar10 != '\0');
        }
        uVar6 = 0;
        if (var_40h != '\0') {
            puVar3 = &var_40h;
            uVar8 = uVar7;
            do {
                uVar6 = uVar6 + 1;
                uVar7 = uVar8 + 1;
                *(uVar8 + 0xb8 + arg1) = *puVar3;
                puVar3 = &var_40h + uVar6;
                uVar8 = uVar7;
            } while (*puVar3 != '\0');
        }
        *0x2a50b = *0x2a50b + 1;
        *(uVar7 + 0xb8 + arg1) = 0;
    }
    return;
}


/* fcn.00019dbc @ 0x19dbc */

uint8_t fcn.00019dbc(int64_t arg1)

{
    int iVar1;
    uchar *puVar2;
    int64_t iVar3;
    
    puVar2 = fcn.00012f1c(1);
    if ((puVar2 != NULL) && (iVar3 = fcn.00012f1c(1), iVar3 != 0)) {
        *(puVar2 + 7) = 0x800;
        *puVar2 = 0x46;
        iVar1 = fcn.000195f4(arg1);
        fcn.000130f0(iVar3,1);
        fcn.000130f0(puVar2,1);
        return ~-(iVar1 != 0);
    }
    return 0xff;
}


/* fcn.0001b3e8 @ 0x1b3e8 */

uint32_t fcn.0001b3e8(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint *arg3;
    uint8_t uVar2;
    char cVar3;
    int16_t iVar4;
    uint32_t uVar5;
    uchar *puVar6;
    uchar *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    
    uVar2 = *(arg2 + 8);
    uVar9 = uVar2;
    arg3 = *arg2;
    puVar6 = arg3 + (uVar9 - 1);
    puVar7 = puVar6 + 0xf;
    if (uVar2 != 0) {
        do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + -1;
            *puVar7 = uVar1;
            puVar7 = puVar7 + -1;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    *arg3 = 0x43425355;
    iVar8 = *0x2afc0;
    *(*0x2afc0 + 0x6a9) = *(*0x2afc0 + 0x6a9) + 1;
    arg3[1] = *(iVar8 + 0x6a9);
    arg3[2] = *(arg2 + 0x12);
    *(arg3 + 3) = *(arg2 + 9);
    uVar1 = *(arg1 + 0xf);
    *(arg3 + 0xe) = uVar2;
    *(arg3 + 0xd) = uVar1;
    iVar4 = fcn.0001b7d4(arg1,0,arg3,0x1f);
    if (iVar4 == 0) {
        if ((*(*0x2afc0 + 0x6c2) & 3) == 0) {
            return 0;
        }
    }
    else {
        if (*(arg2 + 0x12) == 0) {
            if (*(*0x2afc0 + 0x6ae) != 0) {
                (**(*0x2a900 + 0xf8))(100000);
                *(*0x2afc0 + 0x6ae) = 0;
            }
            uVar2 = fcn.0001b54c(arg1,arg2);
            return uVar2;
        }
        iVar8 = arg2;
        uVar5 = fcn.0001a5f4(arg1,arg2);
        if ((*(*0x2afc0 + 0x6c2) & 3) == 0) {
            cVar3 = fcn.0001b54c(arg1,arg2);
            if (cVar3 == -1) {
                return 0;
            }
            if ((*(*0x2afc0 + 0x6c2) & 2) != 0) {
                return 0;
            }
            return uVar5;
        }
        if ((*(*0x2afc0 + 0x6c2) & 2) == 0) {
            fcn.0001950c(arg1,CONCAT71(iVar8 >> 8,*(arg2 + 9)));
            fcn.0001b54c(arg1,arg2);
            return uVar5;
        }
    }
    fcn.0001b600(arg1);
    return 0;
}


/* fcn.0001b65c @ 0x1b65c */

int fcn.0001b65c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int iVar2;
    int64_t iVar3;
    
    iVar2 = 0;
    iVar1 = fcn.00029bdc(*(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8),arg1,0x21,*(arg1 + 0x13));
    if (iVar1 == 0) {
code_r0x0001b6bc:
        iVar2 = 0;
    }
    else {
        if (*(arg2 + 0x12) != 0) {
            iVar3 = arg2;
            iVar2 = fcn.0001a5f4(arg1,arg2);
            if ((iVar2 == 0) && ((*(*0x2afc0 + 0x6c2) & 1) != 0)) {
                fcn.0001950c(arg1,CONCAT71(iVar3 >> 8,*(arg2 + 9)));
                goto code_r0x0001b6bc;
            }
        }
        if ((*(arg1 + 0x59) != '\x01') && (*(arg1 + 0x50) != '\0')) {
            fcn.0001b720(arg1);
        }
    }
    return iVar2;
}


/* fcn.0001a3b8 @ 0x1a3b8 */

ulong fcn.0001a3b8(uint32_t arg1,int arg2)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    int iVar4;
    uint in_register_0000000c;
    uint8_t *arg1_00;
    uint in_register_00000014;
    char *pcVar5;
    uint8_t uVar6;
    int16_t iVar7;
    int16_t iVar8;
    int16_t aiStackX_8 [4];
    
    pcVar5 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar8 = 0;
    uVar6 = 0;
    if (*pcVar5 == '\0') {
        if (arg1_00[0x58] == 4) {
            arg1_00[0x75] = 4;
        }
        else {
            uVar1 = (pcVar5[1] | 0x40U) >> 6;
code_r0x0001a413:
            arg1_00[0x75] = uVar1;
        }
    }
    else if (*pcVar5 == '\x05') {
        arg1_00[0x75] = 2;
    }
    else {
        if (*pcVar5 != '\a') {
            uVar1 = (*pcVar5 != '\x0e') - 1U & 3;
            goto code_r0x0001a413;
        }
        arg1_00[0x75] = 5;
    }
    if (((*arg1_00 & 0x10) == 0) || (*(arg1_00 + 0x5a) != 0)) {
        iVar8 = *(*(arg1_00 + 0x5a) * 2 + 0x2a800);
    }
    if (((*(*0x2afc0 + 0x6c9) & 0x2000) == 0) || (pcVar5[1] < '\0')) {
        arg1_00[0xa0] = arg1_00[0xa0] | 8;
    }
    arg1_00[0xa0] = arg1_00[0xa0] | 1;
    if (*pcVar5 == '\x05') {
        arg1_00[0x5e] = 0;
        arg1_00[0x5f] = 8;
        iVar7 = 0x302;
        goto code_r0x0001a5c3;
    }
    if ((*(*0x2afc0 + 0x6c9) & 0x100000) != 0) {
        fcn.0001ab50(arg1_00);
    }
    if (arg1_00[0x58] == 4) {
        iVar7 = 0x103;
        aiStackX_8[0] = 0x103;
    }
    else {
        iVar7 = 0x201;
        aiStackX_8[0] = 0x201;
    }
    (**(*0x2a900 + 0xf8))(*(*(*0x2a8b8 + 0x3a2) + 0x18) * 1000);
    if (arg1_00[0x58] != 4) {
        do {
            if (((*arg1_00 & 3) == 0) || (cVar2 = fcn.00019ad0(arg1_00), cVar2 == '\0')) break;
            uVar1 = *(*0x2afc0 + 0x6c2);
            iVar3 = fcn.0001ad30(arg1_00);
            if (iVar3 == 0x3a02) break;
            if (((*(*0x2afc0 + 0x6c2) & 2) != 0) && ((uVar1 & 2) != 0)) {
                return 0xff;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x1e);
    }
    iVar4 = fcn.0001ae48(arg1_00);
    if ((iVar4 == 0x3a02) && ((arg1_00[0x7c] & 0x40) == 0)) {
        fcn.00019c58(arg1_00);
        if (*(arg1_00 + 0x60) - 1U < 0xb40) {
            iVar7 = 0x103;
            goto code_r0x0001a5c3;
        }
        if ((**0x2afc0 & 0x40000) != 0) goto code_r0x0001a5c3;
    }
    else {
        if (iVar4 != 0) goto code_r0x0001a5c3;
        cVar2 = fcn.0001a0b4(arg1_00,*(arg1_00 + 0x60),aiStackX_8);
        if ((cVar2 != -1) ||
           (((*(*0x2afc0 + 0x71b) <= *(arg1_00 + 0x60) >> 0xb && ((**0x2afc0 & 0x1000) == 0)) || (arg1_00[0x58] == 4))))
        {
            iVar7 = aiStackX_8[0];
            goto code_r0x0001a5c3;
        }
    }
    iVar7 = 0x403;
code_r0x0001a5c3:
    if (iVar8 != 0) {
        iVar7 = iVar8;
    }
    arg1_00[0x4c] = iVar7;
    arg1_00[0x74] = iVar7 >> 8;
    return 0;
}


/* fcn.0001ad30 @ 0x1ad30 */

int fcn.0001ad30(int64_t arg1)

{
    int iVar1;
    uchar *puVar2;
    int64_t iVar3;
    
    puVar2 = fcn.00012f1c(1);
    if ((puVar2 == NULL) || (iVar3 = fcn.00012f1c(1), iVar3 == 0)) {
        iVar1 = 0xff;
    }
    else {
        *puVar2 = 3;
        puVar2[4] = 0x12;
        iVar1 = fcn.000195f4(arg1);
        if (iVar1 == 0) {
            iVar1 = 0xff;
        }
        else {
            iVar1 = *(iVar3 + 0xd) * 0x10000 + *(iVar3 + 0xc) * 0x100 + *(iVar3 + 2);
            if (iVar1 == 0x3a02) {
                *(arg1 + 0xa0) = *(arg1 + 0xa0) & 0xfe;
            }
            if (iVar1 == 0x2806) {
                *(arg1 + 0xa0) = *(arg1 + 0xa0) | 3;
            }
            if (iVar1 == 0) {
                *(arg1 + 0xa0) = *(arg1 + 0xa0) | 1;
            }
        }
        fcn.000130f0(puVar2,1);
        fcn.000130f0(iVar3,1);
    }
    return iVar1;
}


/* fcn.00019954 @ 0x19954 */

ulong fcn.00019954(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ushort *puVar3;
    uint32_t uVar4;
    
    if (((*arg1 & 3) != 0) && (puVar3 = fcn.00012f1c(1), puVar3 != NULL)) {
        *puVar3 = 0x109e;
        *(puVar3 + 5) = 0xc000000;
        *(*0x2afc0 + 0x6ae) = 10000;
        iVar2 = fcn.000195f4(arg1);
        *(*0x2afc0 + 0x6ae) = 0;
        if (iVar2 != 0) {
            uVar1 = *(*(*0x2a8b8 + 0x62) + 8);
            uVar4 = uVar1 & 0xff0000 | uVar1 >> 0x10;
            if (uVar4 >> 8 != 0 || ((uVar1 & 0xff00) != 0 || (uVar1 & 0xff) != 0)) {
                *(arg1 + 0x5e) = uVar4 >> 8;
                uVar1 = **(*0x2a8b8 + 0x62);
                *(arg1 + 0x60) =
                     ((((uVar1 & 0xff00 | uVar1 << 0x10) << 8) << 8 | uVar1 & 0xff0000) << 0x10 |
                     uVar1 & 0xffffffffff000000) << 8;
                uVar1 = *(*(*0x2a8b8 + 0x62) + 4);
                *(arg1 + 0x60) =
                     *(arg1 + 0x60) | (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
                return 0;
            }
        }
        fcn.000130f0(puVar3,1);
    }
    return 0xff;
}


/* fcn.00019e6c @ 0x19e6c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

uchar fcn.00019e6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uchar *arg1_00;
    uchar uVar2;
    char cVar3;
    uint32_t uVar4;
    bool bVar5;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int32_t var_bp_8h;
    
    uVar2 = 0xff;
    arg1_00 = fcn.00012f1c(1);
    if (arg1_00 != NULL) {
        uVar4 = arg2;
        cVar3 = '\n';
        do {
            *arg1_00 = 0x28;
            *(arg1_00 + 7) = 0x100;
            *(arg1_00 + 2) = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            iVar1 = fcn.000195f4(arg1);
            if (iVar1 != 0) {
                uVar2 = 0;
                break;
            }
            iVar1 = fcn.0001ae48(arg1);
            uVar2 = 0xff;
            if (iVar1 != 0) break;
            fcn.000102c0(arg1_00,0xc);
            bVar5 = cVar3 != '\0';
            cVar3 = cVar3 + -1;
        } while (bVar5);
        fcn.000130f0(arg1_00,1);
    }
    return uVar2;
}


/* fcn.0001a314 @ 0x1a314 */

uint64_t fcn.0001a314(uint32_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x58) == '\x04') {
        uVar1 = 2;
        *(iVar3 + 0x6a) = 0x12;
        *(iVar3 + 0x70) = 0x12;
    }
    else {
        *(iVar3 + 0x6a) = 0x3f;
        *(iVar3 + 0x70) = 0x3f;
        if (arg2 < 0x1f7821) {
            uVar1 = 0x20;
        }
        else if (arg2 < 0x3ef041) {
            uVar1 = 0x40;
        }
        else {
            uVar1 = 0x80;
            if (0x7de080 < arg2) {
                uVar1 = 0xff;
            }
        }
    }
    *(iVar3 + 0x68) = uVar1;
    *(iVar3 + 0x6e) = uVar1;
    uVar2 = 0;
    if ((*(iVar3 + 0x6a) != '\0') && (*(iVar3 + 0x68) != 0)) {
        uVar2 = arg2 / (*(iVar3 + 0x68) * *(iVar3 + 0x6a));
    }
    if (uVar2 < 2) {
        uVar2 = uVar2 + 1;
    }
    if (0xffff < uVar2) {
        uVar2 = 0xffff;
    }
    *(iVar3 + 0x6c) = uVar2;
    *(iVar3 + 0x72) = uVar2;
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00019f6c @ 0x19f6c */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00019f6c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint in_R8;
    int64_t iVar3;
    uint32_t auStackX_18 [2];
    int aiStackX_20 [2];
    int32_t var_40h;
    uint32_t var_48h;
    int aiStack_38 [4];
    uint32_t var_10h;
    
    iVar3 = CONCAT44(in_R8,arg3);
    uVar2 = 0;
    auStackX_18[0] = 0;
    aiStackX_20[0] = 0;
    aiStack_38[0] = 0;
    if (*(iVar3 + 0x1fe) != -0x55ab) {
        return 0xff;
    }
    if ((auStackX_18 == iVar3 + 3) ||
       (((section..text(auStackX_18,iVar3 + 3,4), auStackX_18[0] != 0x4f44534d && (auStackX_18[0] != 0x4957534d)) &&
        (auStackX_18[0] != 0x5346544e)))) {
        *(iVar3 + 0x39) = 0x20;
        if (aiStackX_20 != iVar3 + 0x36) {
            section..text(aiStackX_20,iVar3 + 0x36,4);
        }
        if (aiStack_38 != iVar3 + 0x52) {
            section..text(aiStack_38,iVar3 + 0x52,4);
        }
        if ((aiStackX_20[0] != 0x20544146) && (aiStack_38[0] != 0x33544146)) {
            return 0xff;
        }
    }
    if (*(iVar3 + 0x18) != 0) {
        *(arg1 + 0x6a) = *(iVar3 + 0x18);
        *(arg1 + 0x70) = *(iVar3 + 0x18);
        uVar1 = *(iVar3 + 0x1a);
        if (uVar1 != 0) {
            *(arg1 + 0x68) = uVar1;
            *(arg1 + 0x6e) = *(iVar3 + 0x1a);
            *(arg1 + 0x136) = *(iVar3 + 0x15);
            if ((*(arg1 + 0x6a) != '\0') && (uVar1 != 0)) {
                uVar2 = arg2 / (uVar1 * *(arg1 + 0x6a));
            }
            if (uVar2 < 2) {
                uVar2 = uVar2 + 1;
            }
            if (0xffff < uVar2) {
                uVar2 = 0xffff;
            }
            *(arg1 + 0x6c) = uVar2;
            *(arg1 + 0x72) = uVar2;
            return 0;
        }
    }
    return 0xff;
}


/* fcn.00019ad0 @ 0x19ad0 */

ulong fcn.00019ad0(int64_t arg1)

{
    int iVar1;
    uchar *puVar2;
    uint32_t arg1_00;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int32_t var_bh;
    
    if ((*arg1 & 3) != 0) {
        if ((*(arg1 + 0x60) & 0xffffffff00000000) != 0) {
code_r0x00019b03:
            fcn.00019954(arg1);
            return 0;
        }
        puVar2 = fcn.00012f1c(1);
        uVar5 = 0;
        if (puVar2 != NULL) {
            *puVar2 = 0x25;
            *(*0x2afc0 + 0x6ae) = 10000;
            iVar1 = fcn.000195f4(arg1);
            *(*0x2afc0 + 0x6ae) = 0;
            arg1_00 = puVar2;
            if (iVar1 != 0) {
                if (**(*0x2a8b8 + 0x62) == -1) {
                    fcn.000130f0(arg1_00,1);
                    goto code_r0x00019b03;
                }
                uVar3 = (*(*0x2a8b8 + 0x62))[1];
                uVar4 = uVar3 & 0xff0000 | uVar3 >> 0x10;
                if (uVar4 >> 8 != 0 || ((uVar3 & 0xff00) != 0 || (uVar3 & 0xff) != 0)) {
                    *(arg1 + 0x5e) = uVar4 >> 8;
                    uVar3 = **(*0x2a8b8 + 0x62);
                    uVar3 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 & 0xff00 | uVar3 << 0x10) << 8;
                    if (uVar3 == 0) {
                        uVar5 = 0xff;
                    }
                    else {
                        *(arg1 + 0x60) = uVar3 + 1;
                    }
                    fcn.000130f0(arg1_00,1);
                    return uVar5;
                }
            }
            fcn.000130f0(arg1_00,1);
        }
    }
    return 0xff;
}


/* fcn.00019c58 @ 0x19c58 */

//WARNING: Variable defined which should be unmapped: var_2h

ulong fcn.00019c58(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uchar *puVar3;
    char *pcVar4;
    int32_t var_ah;
    int32_t var_50h;
    int32_t var_2h;
    
    puVar3 = fcn.00012f1c(1);
    if ((puVar3 != NULL) && (pcVar4 = fcn.00012f1c(8), pcVar4 != NULL)) {
        *(puVar3 + 7) = 0xfc00;
        *puVar3 = 0x23;
        uVar2 = fcn.000195f4(arg1);
        if (((0xb < uVar2) && (((*pcVar4 == '\0' && (pcVar4[1] == '\0')) && (pcVar4[2] == '\0')))) &&
           ((7 < pcVar4[3] && (uVar1 = *(pcVar4 + 10), uVar1 != 0)))) {
            *(arg1 + 0x5e) = uVar1 * 0x100 + (uVar1 >> 8);
            uVar2 = *(pcVar4 + 4);
            if (uVar2 != 0) {
                uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
                *(arg1 + 0x60) = uVar2;
                if (uVar2 == 0xb40) {
                    *(arg1 + 0x6c) = 0x20050;
                    *(arg1 + 0x68) = 2;
                    *(arg1 + 0x72) = 0x50;
                    *(arg1 + 0x6a) = 0x12;
                    *(arg1 + 0x70) = 0x12;
                    *(arg1 + 0x76) = 0x94;
                }
                fcn.000130f0(pcVar4,8);
                fcn.000130f0(puVar3,1);
                return 0;
            }
        }
        fcn.000130f0(pcVar4,8);
        fcn.000130f0(puVar3,1);
    }
    return 0xff;
}


/* fcn.0001a0b4 @ 0x1a0b4 */

ulong fcn.0001a0b4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int64_t iVar1;
    char cVar2;
    ushort uVar3;
    uint8_t uVar4;
    uint32_t arg1_00;
    uint64_t uVar5;
    uint8_t uVar6;
    uchar *arg2_00;
    uchar auStack_18 [8];
    uint32_t uStack_10;
    
    fcn.000102c0(auStack_18,0x10);
    arg3_00 = *(*0x2a8b8 + 0x6a);
    cVar2 = fcn.00019e6c(arg1,0,arg3_00);
    if (cVar2 == -1) {
        return 0xff;
    }
    *(arg1 + 0x5c) = 0;
    iVar1 = *(*0x2a8b8 + 0x6a);
    arg1_00 = arg1;
    if (*(iVar1 + 0x1fe) != -0x55ab) {
        fcn.0001a314(arg1_00,arg2);
        return 0xff;
    }
    uVar6 = 0;
    if ((((*(iVar1 + 0x1ca) == 0) && (*(iVar1 + 0x1da) == 0)) && (*(iVar1 + 0x1ea) == 0)) && (*(iVar1 + 0x1fa) == 0)) {
code_r0x0001a272:
        uVar3 = 0x403;
        if (*(arg1 + 0x58) == '\x04') {
            uVar3 = 0x103;
        }
        *arg3 = uVar3;
        cVar2 = fcn.00019f6c(arg1,arg2,iVar1);
        if (cVar2 != '\0') {
            fcn.0001a314(arg1_00,arg2);
            if (arg2 >> 0xb < *(*0x2afc0 + 0x71b)) {
                return 0;
            }
            if ((**0x2afc0 & 0x1000) != 0) {
                return 0;
            }
            if (*(arg1 + 0x58) != '\x04') {
                *arg3 = 0x201;
            }
            *(arg1 + 0x5c) = 0;
            return 0;
        }
        if ((**0x2afc0 & 0x20000) == 0) {
            return 0;
        }
        if (*(arg1 + 0x58) == '\x04') {
            return 0;
        }
        if (arg2 >> 0xb < *(*0x2afc0 + 0x71b)) {
            return 0;
        }
        uVar3 = 0x201;
    }
    else {
        uVar5 = 0;
        do {
            uVar4 = *(iVar1 + 0x1be + uVar5 * 0x10);
            if (((uVar4 & 0x7f) != 0) || (arg2 < *(iVar1 + 0x1c6 + uVar5 * 0x10))) goto code_r0x0001a272;
            if (uVar4 < '\0') {
                uVar6 = uVar5;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < 4);
        arg2_00 = iVar1 + 0x1be + uVar6 * 0x10;
        if (auStack_18 != arg2_00) {
            section..text(auStack_18,arg2_00,0x10);
        }
        *(arg1 + 0x5c) = uStack_10;
        cVar2 = fcn.00019e6c(arg1,uStack_10,arg3_00);
        if (cVar2 == -1) {
            return 0xff;
        }
        cVar2 = fcn.00019f6c(arg1,arg2,*(*0x2a8b8 + 0x6a));
        if (cVar2 == '\0') {
            if (*(*0x2afc0 + 0x71b) <= arg2 >> 0xb) {
                return 0;
            }
            if ((**0x2afc0 & 0x1000) != 0) {
                return 0;
            }
            if (*(arg1 + 0x58) == '\x04') {
                return 0;
            }
        }
        else {
            fcn.0001a314(arg1_00,arg2);
            *(arg1 + 0x5c) = 0;
            if ((**0x2afc0 & 0x20000) == 0) {
                return 0;
            }
            if (*(arg1 + 0x58) == '\x04') {
                return 0;
            }
            if (*(*0x2afc0 + 0x71b) <= arg2 >> 0xb) {
                return 0;
            }
        }
        uVar3 = 0x403;
    }
    *arg3 = uVar3;
    return 0;
}


/* fcn.0001b7d4 @ 0x1b7d4 */

uint fcn.0001b7d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    uint uVar3;
    int64_t iVar4;
    
    iVar1 = *(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8);
    iVar4 = fcn.00029ab0();
    uVar3 = 0;
    if ((-1 < iVar4) && (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x58 + *0x2a910), pcVar2 != NULL)) {
        uVar3 = (*pcVar2)(iVar1,arg1,arg2,arg3,arg4);
    }
    return uVar3;
}


/* fcn.0001b208 @ 0x1b208 */

ulong fcn.0001b208(uint32_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar3;
    char cVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (((((*(arg1_00 + 0x68) != 0) && (*(arg1_00 + 0x6a) != '\0')) && (*(arg1_00 + 0x6c) != 0)) &&
        (uVar6 = *(arg1_00 + 0xa0), (uVar6 & 2) == 0)) &&
       ((((uVar6 & 4) == 0 || (*(arg1_00 + 0x58) != '\x04')) &&
        (*(arg1_00 + 0xa0) = uVar6 & 0xfb, *(arg1_00 + 0x5e) - 1U < 0xfffe)))) {
        return 0;
    }
    *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) & 0xfb;
    *(*0x2afc0 + 0x6bf) = 0xf0;
    *(*0x2afc0 + 0x6b0) = *(*0x2afc0 + 0x6b0) & 0xfc;
    if (*(arg1_00 + 0x58) == '\x04') {
        fcn.0001afd0(arg1);
    }
    fcn.0001b0d8(arg1_00);
    if ((*(*0x2afc0 + 0x6b0) & 3) != 0) {
        if ((*(*0x2afc0 + 0x6b0) & 2) == 0) {
            *(arg1_00 + 0x5e) = *(*0x2afc0 + 0x6b5);
            *(arg1_00 + 0x60) = *(*0x2afc0 + 0x6b7);
        }
        if (((*(arg1_00 + 0x68) == 0) || (*(arg1_00 + 0x6a) == '\0')) || (*(arg1_00 + 0x6c) == 0)) {
            *(arg1_00 + 0x76) = *(*0x2afc0 + 0x6bf);
            uVar3 = *(*0x2afc0 + 0x6b3);
            uVar6 = *(*0x2afc0 + 0x6b1);
            uVar1 = *(*0x2afc0 + 0x6b2);
            if (uVar3 * uVar6 * uVar1 == 0) {
                uVar1 = *(*0x2afc0 + 0x6bc);
                uVar6 = *(*0x2afc0 + 0x6bb);
                uVar3 = *(*0x2afc0 + 0x6bd);
            }
            uVar7 = uVar6;
            uVar5 = uVar1;
            uVar2 = *(arg1_00 + 0x60);
            *(arg1_00 + 0x68) = uVar1;
            *(arg1_00 + 0x6a) = uVar6;
            *(arg1_00 + 0x6c) = uVar3;
            if (*(arg1_00 + 0x4c) < 2) {
                if (0xfbfff < uVar2) {
                    uVar7 = 0x3f;
                    uVar5 = 0x20;
                    if (((0x1f7fff < uVar2) && (uVar5 = 0x40, 0x3effff < uVar2)) && (uVar5 = 0x80, 0x7dffff < uVar2))
                    {
                        uVar5 = 0xff;
                    }
                }
                uVar6 = uVar7;
                while( true ) {
                    cVar4 = uVar5;
                    if ((uVar6 == 0) || (cVar4 == '\0')) {
                        uVar3 = 0;
                    }
                    else {
                        uVar3 = uVar2 / (uVar7 * uVar5);
                    }
                    if ((uVar3 < 0x401) || (uVar3 = 0x400, cVar4 == -1)) break;
                    uVar5 = cVar4 * '\x02';
                    if (cVar4 * '\x02' == 0) {
                        uVar5 = 0xff;
                    }
                }
            }
            *(arg1_00 + 0x6e) = uVar5;
            *(arg1_00 + 0x70) = uVar6;
            *(arg1_00 + 0x72) = uVar3;
        }
        return 0;
    }
    return 0xff;
}


/* fcn.0001abf0 @ 0x1abf0 */

uchar fcn.0001abf0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    uchar *puVar6;
    uchar uVar7;
    uint64_t uVar8;
    
    uVar7 = 0xff;
    puVar6 = fcn.00012f1c(1);
    if (puVar6 != NULL) {
        *puVar6 = 0x5a;
        *(puVar6 + 7) = 0x2800;
        puVar6[2] = 5;
        iVar4 = fcn.000195f4(arg1);
        uVar7 = 0xff;
        if (iVar4 == 0) {
            fcn.0001ad30(arg1);
        }
        else {
            iVar3 = *(*0x2a8b8 + 0x62);
            uVar8 = *(iVar3 + 6);
            *(arg2 + 0xb) = *(iVar3 + 2);
            if (*(uVar8 + 8 + iVar3) == '\x05') {
                uVar1 = *(uVar8 + 0xe + iVar3);
                *(arg2 + 5) = *(uVar8 + 0xc + iVar3);
                uVar7 = *(uVar8 + 0xd + iVar3);
                uVar2 = *(uVar8 + 0x10 + iVar3);
                *(arg2 + 9) = uVar1 * 0x100 + (uVar1 >> 8);
                *(arg2 + 8) = uVar7;
                *(arg2 + 6) = uVar2 * 0x100 + (uVar2 >> 8);
                uVar7 = 0;
            }
            uVar5 = fcn.0001ad30(arg1);
            *(arg2 + 1) = uVar5;
        }
        fcn.000130f0(puVar6,1);
    }
    return uVar7;
}


/* fcn.0001afd0 @ 0x1afd0 */

ulong fcn.0001afd0(uint32_t arg1)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar auStack_18 [5];
    uint8_t uStack_13;
    uint16_t uStack_12;
    uint8_t uStack_10;
    ushort uStack_f;
    uchar uStack_d;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    *(*0x2afc0 + 0x6b1) = 0;
    *(*0x2afc0 + 0x6b2) = 0;
    *(*0x2afc0 + 0x6b3) = 0;
    if ((*(arg1_00 + 0x7c) & 1) == 0) {
        if (*(arg1_00 + 0x4c) != '\x02') {
            cVar1 = fcn.0001abf0(arg1_00,auStack_18);
            if (cVar1 == '\0') {
                *(*0x2afc0 + 0x6b3) = uStack_12;
                *(*0x2afc0 + 0x6b2) = uStack_13;
                *(*0x2afc0 + 0x6b1) = uStack_10;
                *(*0x2afc0 + 0x6b5) = uStack_f;
                *(*0x2afc0 + 0x6bf) = uStack_d;
                if (*(arg1_00 + 0x4c) == '\x01') {
                    *(*0x2afc0 + 0x6bf) = 0xf0;
                }
                *(*0x2afc0 + 0x6b7) = uStack_10 * uStack_13 * uStack_12;
                *(*0x2afc0 + 0x6b0) = *(*0x2afc0 + 0x6b0) | 1;
                goto code_r0x0001b0cb;
            }
        }
        uVar2 = 0xff;
    }
    else {
code_r0x0001b0cb:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001b0d8 @ 0x1b0d8 */

ulong fcn.0001b0d8(int64_t arg1)

{
    uint64_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    
    cVar2 = fcn.00019ad0(arg1);
    if (cVar2 != '\0') {
        return 0xff;
    }
    *(*0x2afc0 + 0x6b0) = *(*0x2afc0 + 0x6b0) | 2;
    uVar1 = *(arg1 + 0x60);
    if (uVar1 < 0x4000) {
        if (uVar1 == 0x5a0) {
            *(*0x2afc0 + 0x6bc) = 2;
            *(*0x2afc0 + 0x6bb) = 9;
            *(*0x2afc0 + 0x6bd) = 0x50;
            *(*0x2afc0 + 0x6bf) = 0x1e;
            return 0;
        }
        if (uVar1 == 0xb40) {
            *(*0x2afc0 + 0x6bc) = 2;
            *(*0x2afc0 + 0x6bb) = 0x12;
            *(*0x2afc0 + 0x6bd) = 0x50;
            *(*0x2afc0 + 0x6bf) = 0x94;
            return 0;
        }
    }
    if (uVar1 < 0x400) {
        uVar4 = 1;
        uVar3 = 1;
    }
    else if (uVar1 < 0x200000) {
        uVar4 = 0x20;
        uVar3 = 0x40;
    }
    else {
        uVar4 = 0x3f;
        uVar3 = 0xff;
    }
    *(*0x2afc0 + 0x6bb) = uVar4;
    *(*0x2afc0 + 0x6bc) = uVar3;
    *(*0x2afc0 + 0x6bd) = *(arg1 + 0x60) / (uVar3 * uVar4);
    return 0;
}


/* fcn.0001b600 @ 0x1b600 */

//WARNING: Removing unreachable block (ram,0x0001958a)
//WARNING: Removing unreachable block (ram,0x000195bc)

void fcn.0001b600(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    
    iVar3 = arg1;
    fcn.00029bdc(*(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8),arg1,0xff21,*(arg1 + 0x13));
    fcn.0001950c(arg1,CONCAT71(iVar3 >> 8,0x80));
    uVar1 = *(arg1 + 0x56);
    fcn.00029bdc(*(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8),arg1,0x102,uVar1);
    uVar4 = (uVar1 & 0xf) - 1;
    *(arg1 + 0x4a) = *(arg1 + 0x4a) & ~(1 << (uVar4 & 0xf));
    iVar3 = *(arg1 + 0x40);
    if ((iVar3 != 0) && (iVar2 = fcn.0001b8d0(iVar3), -1 < iVar2)) {
        *(iVar3 + 0x4a) = *(iVar3 + 0x4a) & ~(1 << (uVar4 & 0xf));
    }
    return;
}


/* fcn.0001b54c @ 0x1b54c */

ulong fcn.0001b54c(int64_t arg1,int64_t arg2)

{
    int *arg3;
    int16_t extraout_AX;
    int16_t extraout_AX_00;
    unkbyte7 Var1;
    
    Var1 = arg2 >> 8;
    arg3 = *arg2;
    fcn.0001b7d4(arg1,CONCAT71(Var1,0x80),arg3,0xd);
    if (extraout_AX != 0xd) {
        if ((*(*0x2afc0 + 0x6c2) & 1) != 0) {
            fcn.0001950c(arg1,CONCAT71(Var1,0x80));
        }
        fcn.0001b7d4(arg1,CONCAT71(Var1,0x80),arg3,0xd);
        if ((*(*0x2afc0 + 0x6c2) & 1) != 0) goto code_r0x0001b5b2;
        if (extraout_AX_00 != 0xd) {
            return 0xff;
        }
    }
    if (*arg3 != 0x53425355) {
        return 0xff;
    }
    if (arg3[1] != *(*0x2afc0 + 0x6a9)) {
        return 0xff;
    }
    if (*(arg3 + 3) == 0) {
        return 0;
    }
    if (*(arg3 + 3) < 2) {
        return 0xff;
    }
code_r0x0001b5b2:
    fcn.0001b600(arg1);
    return 0xff;
}


/* fcn.0001a5f4 @ 0x1a5f4 */

uint32_t fcn.0001a5f4(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint in_register_00000014;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    
    uVar6 = CONCAT44(in_register_00000014,arg2);
    if (*(uVar6 + 0x12) == 0) {
        uVar2 = 0;
    }
    else {
        uVar1 = (*0x2afc0)[0x1b0];
        if (*(*0x2afc0 + 0x6ae) != 0) {
            *(*0x2afc0 + 0x1b0) = *(*0x2afc0 + 0x6ae);
        }
        if ((*(uVar6 + 0x16) == 0) && (*(uVar6 + 0x18) == 0)) {
            if ((**0x2afc0 & 0x1000000) == 0) {
                uVar2 = fcn.0001b7d4(arg1,CONCAT71(uVar6 >> 8,*(uVar6 + 9)),*(uVar6 + 10),*(uVar6 + 0x12));
            }
            else {
                uVar10 = *(uVar6 + 10);
                uVar7 = uVar6;
                if (uVar10 < 0x100000) {
                    uVar5 = *(*0x2a8b8 + 0x6a);
                    if (((*(uVar6 + 9) != -0x80) && (*(uVar6 + 0x12) != 0)) && (uVar5 != uVar10)) {
                        section..text(uVar5,uVar10,*(uVar6 + 0x12));
                        uVar7 = uVar10;
                    }
                }
                else {
                    uVar5 = uVar10;
                }
                uVar2 = fcn.0001b7d4(arg1,CONCAT71(uVar7 >> 8,*(uVar6 + 9)),uVar5,*(uVar6 + 0x12));
                if (((uVar2 != 0) && (uVar10 = *(uVar6 + 10), uVar10 < 0x100000)) && (*(uVar6 + 9) == -0x80)) {
                    if ((*(uVar6 + 0x12) != 0) && (uVar10 != *(*0x2a8b8 + 0x6a))) {
                        section..text(uVar10,*(*0x2a8b8 + 0x6a),*(uVar6 + 0x12));
                    }
                }
            }
        }
        else {
            uVar7 = uVar6;
            uVar5 = fcn.00012f1c(*(arg1 + 0x5e) + 0x1f >> 5);
            uVar9 = *(uVar6 + 0x12);
            uVar2 = 0;
            uVar8 = *(uVar6 + 0x16);
            uVar10 = *(uVar6 + 10);
            uVar11 = (uVar9 - *(uVar6 + 0x18)) - uVar8;
            if (uVar9 != 0) {
                do {
                    uVar7 = CONCAT71(uVar7 >> 8,*(uVar6 + 9));
                    if (*(arg1 + 0x5e) <= uVar9) {
                        uVar9 = *(arg1 + 0x5e);
                    }
                    iVar3 = fcn.0001b7d4(arg1,uVar7,uVar5,uVar9);
                    if (iVar3 == 0) {
                        uVar2 = 0;
                        break;
                    }
                    uVar2 = uVar2 + uVar9;
                    if (uVar11 != 0) {
                        uVar7 = uVar5;
                        if (uVar8 != 0) {
                            uVar4 = uVar8;
                            if (uVar9 <= uVar4) {
                                uVar8 = uVar8 - uVar9;
                                goto code_r0x0001a7ca;
                            }
                            uVar7 = uVar8;
                            uVar8 = 0;
                            uVar7 = uVar7 + uVar5;
                            uVar9 = uVar9 - uVar4;
                        }
                        if (uVar11 < uVar9) {
                            uVar9 = uVar11;
                        }
                        if ((uVar9 != 0) && (uVar10 != uVar7)) {
                            section..text(uVar10,uVar7,uVar9);
                        }
                        uVar10 = uVar10 + uVar9;
                        uVar11 = uVar11 - uVar9;
                    }
code_r0x0001a7ca:
                    uVar9 = *(uVar6 + 0x12);
                } while (uVar2 < uVar9);
            }
            fcn.000130f0(uVar5,*(arg1 + 0x5e) + 0x1f >> 5);
        }
        *(*0x2afc0 + 0x1b0) = uVar1;
        *(*0x2afc0 + 0x6ae) = 0;
    }
    return uVar2;
}


/* fcn.0001950c @ 0x1950c */

void fcn.0001950c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    
    uVar1 = *(arg1 + 0x55) | 0x80;
    if ((arg2 & 0x80U) == 0) {
        uVar1 = *(arg1 + 0x56);
    }
    fcn.00029bdc(*(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8),arg1,0x102,uVar1);
    uVar4 = (uVar1 & 0xf) - 1;
    if ((arg2 & 0x80U) == 0) {
        *(arg1 + 0x4a) = *(arg1 + 0x4a) & ~(1 << (uVar4 & 0xf));
    }
    else {
        *(arg1 + 0x48) = *(arg1 + 0x48) & ~(1 << (uVar4 & 0xf));
    }
    iVar3 = *(arg1 + 0x40);
    if (iVar3 != 0) {
        iVar2 = fcn.0001b8d0(iVar3);
        if (-1 < iVar2) {
            if (arg2 < '\0') {
                *(iVar3 + 0x48) = *(iVar3 + 0x48) & ~(1 << (uVar4 & 0xf));
            }
            else {
                *(iVar3 + 0x4a) = *(iVar3 + 0x4a) & ~(1 << (uVar4 & 0xf));
            }
        }
    }
    return;
}


/* fcn.0001b720 @ 0x1b720 */

ushort fcn.0001b720(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    unkbyte7 in_R8;
    
    piVar1 = *0x2a8b8 + 0x3ba;
    if (*piVar1 == 0) {
        uVar2 = fcn.00012f1c(1);
        *(*0x2a8b8 + 0x3ba) = uVar2;
        piVar1 = *0x2a8b8 + 0x3ba;
        if (*piVar1 == 0) {
            return 0;
        }
    }
    **piVar1 = 0;
    fcn.00029c7c(*(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8),arg1,CONCAT71(in_R8,*(arg1 + 0x50)),*(arg1 + 0x4e));
    return **(*0x2a8b8 + 0x3ba);
}


/* fcn.0001c70c @ 0x1c70c */

void fcn.0001c70c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    
    if ((*(arg2 + 0xe) == '\x04') || (uVar1 = 0x2900, *(arg2 + 0xe) == '@')) {
        uVar1 = 0x2a00;
    }
    fcn.00014760(arg1,arg2,CONCAT44(0x200000,CONCAT22(uVar1,0x6a0)),0x96);
    return;
}


/* fcn.0001c7a8 @ 0x1c7a8 */

void fcn.0001c7a8(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    fcn.00014760(arg1,noname_1,CONCAT24(arg2,CONCAT22(arg3,0x323)) & 0xffffffffff,100);
    return;
}


/* fcn.00029d7c @ 0x29d7c */

ulong fcn.00029d7c(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.00029ab0();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x78 + *0x2a910), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.0002982c @ 0x2982c */

void fcn.0002982c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort auStackX_18 [8];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x80) + 0x38))(*(arg1 + 0x80),1,arg2 & 0xffffffff,1,auStackX_18);
    return;
}


/* fcn.0001cdec @ 0x1cdec */

uchar fcn.0001cdec(int64_t arg1)

{
    uchar uVar1;
    unkint7 extraout_RAX;
    unkbyte7 in_R8;
    
    fcn.0001b874(arg1);
    if (extraout_RAX < 0) {
        uVar1 = 0xff;
    }
    else {
        uVar1 = fcn.000298e0(arg1,4);
        fcn.0002991c(arg1,4,CONCAT71(in_R8,uVar1) & 0xfffffffffffffffb);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000298e0 @ 0x298e0 */

uchar fcn.000298e0(int64_t arg1,int64_t arg2)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = 0;
    (**(*(arg1 + 0x80) + 0x20))(*(arg1 + 0x80),0,4,arg2 & 0xffffffff,1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0002991c @ 0x2991c */

void fcn.0002991c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStackX_18 [16];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x80) + 0x28))(*(arg1 + 0x80),0,4,arg2 & 0xffffffff,1,auStackX_18);
    return;
}


/* fcn.0001e444 @ 0x1e444 */

uint64_t fcn.0001e444(int64_t arg1)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint *puVar3;
    uchar uVar4;
    int64_t *piVar5;
    uint *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t arg1_00;
    
    piVar5 = fcn.00012f1c(1);
    if (piVar5 != NULL) {
        *(arg1 + 0x40) = piVar5;
        puVar6 = fcn.00012f1c(2);
        *piVar5 = puVar6;
        if (puVar6 != NULL) {
            *puVar6 = 1;
            puVar6[1] = 1;
            *(puVar6 + 2) = 0;
            *(puVar6 + 4) = 0;
            *(puVar6 + 0x11) = 0;
            *(puVar6 + 0x15) = 0;
            *(puVar6 + 0x1a) = 0;
            *(puVar6 + 0x22) = 0;
            *(puVar6 + 9) = 0;
            *(puVar6 + 0x25) = 0;
            *(*piVar5 + 0x16) = 2;
            *(*piVar5 + 0x22) = 1;
            arg1_00 = arg1;
            uVar7 = fcn.0001e2dc(arg1_00,*piVar5);
            if ((*(arg1 + 0x58) & 0x10) != 0) {
code_r0x0001e6ad:
                return uVar7 & 0xffffffffffffff00;
            }
            iVar8 = fcn.00012f1c(3);
            piVar5[2] = iVar8;
            if (iVar8 != 0) {
                puVar6 = iVar8 + 0x40;
                *puVar6 = 1;
                *(iVar8 + 0x44) = 0x8000000;
                uVar2 = *(*0x2afc0 + 0x716);
                *(iVar8 + 0x4c) = puVar6 + 0x18;
                *(iVar8 + 0x50) = 0x8000000;
                *(iVar8 + 0x55) = 0;
                *(iVar8 + 0x48) = (uVar2 + 1) * 0x100 | 0xe00069;
                puVar3 = piVar5[2];
                *puVar3 = 1;
                puVar3[1] = 1;
                *(puVar3 + 2) = 0;
                *(puVar3 + 4) = 0;
                *(puVar3 + 0x11) = 0;
                *(puVar3 + 0x15) = 0;
                *(puVar3 + 0x1a) = 0;
                *(puVar3 + 0x22) = 0;
                *(puVar3 + 9) = 0;
                *(puVar3 + 0x25) = 0;
                *(piVar5[2] + 0x16) = 2;
                *(piVar5[2] + 0x1a) = puVar6;
                if (*(*0x2afc0 + 0x6c7) == '\0') {
                    *(piVar5[2] + 0x22) = 8;
                }
                else {
                    *(piVar5[2] + 0x22) = 0x10;
                }
                uVar4 = fcn.00013210(0x1ed40);
                *(piVar5[2] + 0x23) = uVar4;
                *(piVar5[2] + 0x24) = 0;
                fcn.0001e2dc(arg1_00,piVar5[2]);
                fcn.000139f0(arg1_00,0);
                iVar8 = fcn.00012f1c(3);
                piVar5[1] = iVar8;
                if (iVar8 != 0) {
                    puVar1 = iVar8 + 0x40;
                    *puVar1 = 1;
                    uVar2 = *(*0x2afc0 + 0x716);
                    *(iVar8 + 0x4c) = puVar1 + 0x18;
                    *(iVar8 + 0x50) = 0;
                    *(iVar8 + 0x55) = 0;
                    *(iVar8 + 0x48) = (uVar2 + 1) * 0x100 | 0xe00069;
                    puVar6 = piVar5[1];
                    *puVar6 = 1;
                    puVar6[1] = 1;
                    *(puVar6 + 2) = 0;
                    *(puVar6 + 4) = 0;
                    *(puVar6 + 0x11) = 0;
                    *(puVar6 + 0x15) = 0;
                    *(puVar6 + 0x1a) = 0;
                    *(puVar6 + 0x22) = 0;
                    *(puVar6 + 9) = 0;
                    *(puVar6 + 0x25) = 0;
                    *(piVar5[1] + 0x16) = 2;
                    *(piVar5[1] + 0x1a) = puVar1;
                    *(piVar5[1] + 0x22) = 0x80;
                    uVar4 = fcn.00013210(0x1eb34);
                    *(piVar5[1] + 0x23) = uVar4;
                    *(piVar5[1] + 0x24) = 0;
                    uVar7 = fcn.0001e2dc(arg1_00,piVar5[1]);
                    if (*(*0x2a8b8 + 0x72) == 0) {
                        *(iVar8 + 0x55) = 1;
                        *(iVar8 + 0x50) = 0x9800000;
                        *(iVar8 + 0x44) = 0x9800000;
                        *(piVar5[1] + 4) = puVar1;
                        *(piVar5[1] + 8) = puVar1;
                        *(piVar5[1] + 0x24) = 1;
                        uVar7 = *0x2a8b8;
                        *(*0x2a8b8 + 0x72) = arg1;
                    }
                    goto code_r0x0001e6ad;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.00029994 @ 0x29994 */

void fcn.00029994(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort auStackX_18 [8];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x80) + 0x28))(*(arg1 + 0x80),1,4,arg2 & 0xffffffff,1,auStackX_18);
    return;
}


/* fcn.0001e6cc @ 0x1e6cc */

uint64_t fcn.0001e6cc(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    char *pcVar3;
    uint64_t *puVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t *puVar8;
    uint8_t uVar9;
    uint64_t *puVar10;
    
    puVar10 = *(arg1 + 0x40);
    puVar1 = *(*0x2a8b8 + 0x12);
    puVar8 = (*(*0x2afc0 + 0x5ae) << 0xc) + puVar1;
    puVar5 = *0x2afc0;
    if (((((puVar10 == NULL) || (puVar10 < puVar1)) || (puVar5 = puVar10 + 3, puVar8 < puVar5)) ||
        (((puVar2 = *puVar10, puVar2 < puVar1 || (puVar5 = puVar2 + 8, puVar8 < puVar5)) ||
         ((puVar5 = puVar10[1], puVar5 < puVar1 ||
          ((puVar5 = puVar5 + 8, puVar8 < puVar5 || (puVar5 = puVar10[2], puVar5 < puVar1)))))))) ||
       (puVar5 = puVar5 + 8, puVar8 < puVar5)) {
code_r0x0001e8ed:
        uVar6 = CONCAT71(puVar5 >> 8,0xff);
    }
    else {
        fcn.000130f0(puVar2,2);
        if (puVar10[1] != 0) {
            fcn.000130f0(puVar10[1],3);
        }
        if (puVar10[2] != 0) {
            fcn.000130f0(puVar10[2],3);
        }
        uVar7 = 0;
        fcn.000130f0(puVar10,1);
        fcn.000139f0(arg1,CONCAT71(uVar7 >> 8,3));
        puVar5 = *0x2a8b8;
        if (*(*0x2a8b8 + 0x72) == arg1) {
            *(*0x2a8b8 + 0x72) = 0;
            uVar9 = 0;
            puVar10 = *0x2a8b8;
            if ((*0x2a8b8)[2] != '\0') {
                do {
                    pcVar3 = (*0x2a8c8)[uVar9];
                    puVar5 = *0x2a8c8;
                    if ((((pcVar3 != NULL) && (*pcVar3 != '\0')) && (pcVar3[1] == '\x10')) &&
                       (((pcVar3[0x58] & 1U) != 0 && (arg1 != pcVar3)))) {
                        puVar1 = *(pcVar3 + 0x40);
                        puVar10 = *(puVar10 + 0x12);
                        if ((((puVar1 < puVar10) ||
                             ((puVar5 = puVar1 + 3, puVar8 < puVar5 || (puVar2 = puVar1[1], puVar2 < puVar10)))) ||
                            (puVar5 = puVar2 + 8, puVar8 < puVar5)) ||
                           ((((puVar4 = *(puVar2 + 0x1a), puVar4 < puVar10 || (puVar5 = puVar4 + 4, puVar8 < puVar5))
                             || (puVar5 = puVar2[1], puVar5 < puVar10)) || (puVar5 = puVar5 + 4, puVar8 < puVar5))))
                        goto code_r0x0001e8ed;
                        *(puVar4 + 2) = 0x9800000;
                        *(*(puVar1[1] + 0x1a) + 0x15) = 1;
                        *(*(puVar1[1] + 0x1a) + 4) = *(*(puVar1[1] + 0x1a) + 0x10);
                        *(puVar1[1] + 4) = *(puVar1[1] + 0x1a);
                        *(puVar1[1] + 8) = *(puVar1[1] + 0x1a);
                        *(puVar1[1] + 0x24) = 1;
                        puVar5 = *0x2a8b8;
                        *(*0x2a8b8 + 0x72) = (*0x2a8c8)[uVar9];
                        puVar10 = *0x2a8b8;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < puVar10[2]);
            }
        }
        uVar6 = puVar5 & 0xffffffffffffff00;
    }
    return uVar6;
}


/* fcn.00029954 @ 0x29954 */

ushort fcn.00029954(int64_t arg1,int64_t arg2)

{
    ushort auStackX_10 [12];
    
    auStackX_10[0] = 0;
    (**(*(arg1 + 0x80) + 0x20))(*(arg1 + 0x80),1,4,arg2 & 0xffffffff,1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001ea60 @ 0x1ea60 */

uint64_t fcn.0001ea60(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint8_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    puVar4 = *(arg1 + 0x10);
    uVar6 = arg1;
    for (uVar1 = *puVar4; (uVar1 & 1) == 0; uVar1 = *(uVar1 & 0xfffffff0)) {
        if ((uVar1 & 2) == 0) {
            uVar7 = uVar1 & 0xfffffff0;
            if ((((uVar1 & 0xfffffff0) != 0) && (*(uVar7 + 0x15) != '\0')) && ((*(uVar7 + 4) & 0x800000) == 0)) {
                uVar3 = *(uVar7 + 0x14) - 1;
                puVar4 = CONCAT71(puVar4 >> 8,uVar3);
                *(uVar7 + 0x15) = 0;
                if (uVar3 < 0x32) {
                    puVar4 = fcn.000133f0(CONCAT71(uVar6 >> 8,0x10),0,*(uVar7 + 8) >> 8 & 0xffffff7f,arg1);
                    uVar5 = *(uVar7 + 0x14) - 1;
                    uVar6 = uVar5;
                    pcVar2 = *(uVar5 * 8 + 0x2a980);
                    if ((pcVar2 != NULL) && (puVar4 != NULL)) {
                        uVar6 = arg1;
                        puVar4 = (*pcVar2)(arg1,puVar4,uVar7,0,0);
                    }
                }
            }
        }
        else {
            uVar6 = arg1;
            puVar4 = fcn.0001e900(arg1,uVar1 & 0xfffffff0);
        }
    }
    return puVar4 & 0xffffffffffffff00;
}


/* fcn.0001eb34 @ 0x1eb34 */

uint64_t fcn.0001eb34(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uchar *arg1_00;
    char cVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t arg3;
    
    iVar5 = 0;
    if (arg2 != 0) {
        *(*(arg2 + 0x1a) + 0x15) = 0;
        iVar5 = arg2;
    }
    uVar6 = 0;
    if (*(*0x2a8b8 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2a8c8 + uVar6 * 8);
            if (((arg1_00 != NULL) && (arg1_00[1] == '\x10')) && ((arg1_00[0x58] & 1) != 0)) {
                (**(*(arg1 + 0x80) + 0x20))(*(arg1 + 0x80));
                if (*(arg1_00 + 0x10) == 0) {
                    cVar1 = fcn.000298e0(arg1,0);
                    if ((cVar1 != -1) && (*(*0x2afc0 + 0x5ad) == '\0')) {
                        arg3 = 0;
                        *(*0x2afc0 + 0x5ad) = 1;
                        fcn.00029994(arg1,4,0);
                        uVar4 = 0;
                        uVar3 = fcn.00029954(arg1,0x10);
                        if ((uVar3 & 2) != 0) {
                            if ((uVar3 & 1) != 0) {
                                (**(*0x2a900 + 0xf8))(100000);
                            }
                            fcn.00012d38(arg1_00,CONCAT71(uVar4 >> 8,*arg1_00) | 0x80,CONCAT71(arg3 >> 8,1));
                            uVar2 = fcn.00029954(arg1,0x10);
                            arg3 = uVar2;
                            fcn.00029994(arg1,0x10,arg3);
                        }
                        uVar4 = 0;
                        uVar3 = fcn.00029954(arg1,0x12);
                        if ((uVar3 & 2) != 0) {
                            if ((uVar3 & 1) != 0) {
                                (**(*0x2a900 + 0xf8))(100000);
                            }
                            fcn.00012d38(arg1_00,CONCAT71(uVar4 >> 8,*arg1_00) | 0x80,CONCAT71(arg3 >> 8,2));
                            uVar2 = fcn.00029954(arg1,0x12);
                            fcn.00029994(arg1,0x12,uVar2);
                        }
                        fcn.00029994(arg1,4,4);
                        *(*0x2afc0 + 0x5ad) = 0;
                    }
                }
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(*0x2a8b8 + 0x10));
    }
    uVar3 = *0x2a8b8;
    if (arg2 != 0) {
        *(*(iVar5 + 0x1a) + 4) = *(*(iVar5 + 0x1a) + 0x10);
        *(*(iVar5 + 0x1a) + 0x15) = 1;
        *(iVar5 + 4) = *(iVar5 + 0x1a);
        uVar3 = *(iVar5 + 0x1a);
        *(iVar5 + 8) = uVar3;
        *(iVar5 + 0x24) = 1;
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.0001e2dc @ 0x1e2dc */

ulong fcn.0001e2dc(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    bool bVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint in_register_00000014;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar6 = NULL;
    if (((CONCAT44(in_register_00000014,arg2) == 0) ||
        (iVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x16), iVar1 < 0)) ||
       ((bVar2 = false, 1 < iVar1 &&
        ((iVar1 != 2 || (bVar2 = true, *(CONCAT44(in_register_00000014,arg2) + 0x22) == '\0')))))) {
        uVar4 = 0xff;
    }
    else {
        uVar9 = 0;
        if (*(iVar5 + 0x48) != 0) {
            do {
                puVar7 = *(iVar5 + 0x10) + uVar9 * 4;
                uVar3 = *puVar7;
                if ((uVar3 & 1) == 0) {
                    do {
                        puVar6 = uVar3 & 0xfffffff0;
                        if ((*(puVar6 + 0x16) <= *(CONCAT44(in_register_00000014,arg2) + 0x16)) &&
                           ((!bVar2 || (*(puVar6 + 0x22) <= *(CONCAT44(in_register_00000014,arg2) + 0x22))))) break;
                        uVar3 = *puVar6;
                        puVar7 = puVar6;
                    } while ((uVar3 & 1) == 0);
                }
                if (puVar6 != CONCAT44(in_register_00000014,arg2)) {
                    *CONCAT44(in_register_00000014,arg2) = *puVar7;
                    *puVar7 = arg2 | 2;
                }
                if (bVar2) {
                    uVar8 = *(CONCAT44(in_register_00000014,arg2) + 0x22);
                }
                else {
                    uVar8 = 1;
                }
                uVar8 = uVar9 + uVar8;
                uVar9 = uVar8;
            } while (uVar8 < *(iVar5 + 0x48));
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001e900 @ 0x1e900 */

ulong fcn.0001e900(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint in_register_00000014;
    int64_t iVar7;
    bool bVar8;
    
    iVar7 = CONCAT44(in_register_00000014,arg2);
    if (iVar7 == 0) {
code_r0x0001e921:
        uVar3 = 0xff;
    }
    else {
        if ((*(iVar7 + 0x24) != '\0') && (*(iVar7 + 0x1a) != 0)) {
            if (*(iVar7 + 8) == 0) {
                *(iVar7 + 8) = *(iVar7 + 0x1a);
            }
            puVar5 = *(iVar7 + 8);
            while (puVar5 != NULL) {
                *(iVar7 + 8) = puVar5;
                *(iVar7 + 0x10) = puVar5[2] >> 0x13 & 1;
                if ((puVar5[1] & 0x800000) != 0) goto code_r0x0001e921;
                uVar6 = puVar5[1] + 1U & 0x7ff;
                *(iVar7 + 0x11) = *(iVar7 + 0x11) + uVar6;
                if ((puVar5[1] & 0xfe0000) != 0) break;
                *(iVar7 + 0x10) = *(iVar7 + 0x10) ^ 1;
                bVar8 = uVar6 < ((puVar5[2] >> 0x15) + 1 & 0x7ff);
                *(iVar7 + 0x15) = bVar8;
                if (bVar8) {
                    if (*(iVar7 + 0x16) != 1) break;
                    for (; (*puVar5 & 1) == 0; puVar5 = *puVar5 & 0xfffffff0) {
                    }
                    *(iVar7 + 4) = puVar5;
                }
                else {
                    if ((*puVar5 & 1) != 0) break;
                    puVar5 = *puVar5 & 0xfffffff0;
                }
            }
            uVar1 = *(iVar7 + 0x23);
            *(iVar7 + 0x24) = 0;
            if (((uVar1 != 0) && (uVar1 < 0x33)) && (pcVar2 = *((uVar1 - 1) * 8 + 0x2a980), pcVar2 != NULL)) {
                if (((pcVar2 != 0x1ed40) && (pcVar2 != fcn.0001eb34)) &&
                   (iVar4 = fcn.0001b8d0(*(iVar7 + 0x25)), iVar4 < 0)) goto code_r0x0001e921;
                (*pcVar2)(arg1,*(iVar7 + 0x25),iVar7,0,0);
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001e39c @ 0x1e39c */

ulong fcn.0001e39c(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    bool bVar2;
    uint16_t uVar3;
    ulong uVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    uint in_register_00000014;
    uint16_t uVar8;
    uint32_t *puVar9;
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    if (((CONCAT44(in_register_00000014,arg2) == 0) ||
        (iVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x16), iVar1 < 0)) ||
       ((bVar2 = false, 1 < iVar1 &&
        ((iVar1 != 2 || (bVar2 = true, *(CONCAT44(in_register_00000014,arg2) + 0x22) == '\0')))))) {
        uVar4 = 0xff;
    }
    else {
        *(CONCAT44(in_register_00000014,arg2) + 4) = 1;
        uVar8 = 0;
        if (*(iVar7 + 0x48) != 0) {
            do {
                puVar9 = *(iVar7 + 0x10) + uVar8 * 4;
                uVar6 = *puVar9;
                while (((uVar6 & 1) == 0 &&
                       (puVar5 = uVar6 & 0xfffffff0, puVar5 != CONCAT44(in_register_00000014,arg2)))) {
                    puVar9 = puVar5;
                    uVar6 = *puVar5;
                }
                if ((uVar6 & 1) == 0) {
                    *puVar9 = *CONCAT44(in_register_00000014,arg2);
                }
                if (bVar2) {
                    uVar3 = *(CONCAT44(in_register_00000014,arg2) + 0x22);
                }
                else {
                    uVar3 = 1;
                }
                uVar8 = uVar8 + uVar3;
            } while (uVar8 < *(iVar7 + 0x48));
        }
        *CONCAT44(in_register_00000014,arg2) = 1;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001d2a4 @ 0x1d2a4 */

uint fcn.0001d2a4(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    int64_t iVar1;
    int iVar2;
    int iVar3;
    bool bVar4;
    
    iVar2 = *(*0x2afc0 + 0x6c0) * 100;
    *(arg2 + 0x24) = 1;
    arg2_00 = arg2;
    fcn.0001e2dc(arg1,arg2_00);
    iVar3 = iVar2;
    do {
        if (iVar2 != 0) {
            bVar4 = iVar3 == 0;
            iVar3 = iVar3 + -1;
            if (bVar4) {
code_r0x0001d30d:
                iVar1 = arg2;
                fcn.0001e39c(arg1,arg2_00);
                fcn.0001e900(arg1,iVar1);
                return *(arg2 + 0x11);
            }
        }
        fcn.0001e900(arg1,arg2_00);
        if (*(arg2 + 0x24) == '\0') goto code_r0x0001d30d;
        (**(*0x2a900 + 0xf8))(10);
    } while( true );
}


/* fcn.0001d748 @ 0x1d748 */

int64_t fcn.0001d748(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint8_t uVar8;
    uint8_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint16_t in_stack_00000038;
    
    iVar7 = *arg4;
    bVar2 = false;
    uVar4 = 0;
    uVar8 = *in_stack_00000028;
    if (in_stack_00000038 != 0) {
        uVar5 = arg2 & 0xffff;
        do {
            uVar1 = *in_stack_00000030;
            if (uVar5 < uVar1) {
                uVar6 = uVar5;
            }
            else {
                bVar2 = true;
                uVar6 = uVar1;
            }
            uVar3 = (uVar6 - 1) * 0x200000 | *(arg1 + 8) & 0x17ffff;
            *(arg1 + 8) = uVar3;
            if (uVar8 == 1) {
                *(arg1 + 8) = uVar3 | 0x80000;
            }
            *(arg1 + 4) = arg3 | 0x18800000;
            if (*(arg1 + 8) == 'i') {
                *(arg1 + 4) = arg3 | 0x38800000;
            }
            *(arg1 + 0xc) = iVar7;
            iVar7 = iVar7 + uVar5;
            *in_stack_00000030 = uVar1 - uVar6;
            arg1 = arg1 + 0x20;
            uVar8 = uVar8 ^ 1;
        } while ((!bVar2) && (uVar4 = uVar4 + 1, uVar4 < in_stack_00000038));
    }
    *(arg1 + -0x20) = 1;
    *in_stack_00000028 = uVar8;
    *arg4 = iVar7;
    return arg1 + -0x20;
}


/* fcn.0001ee6c @ 0x1ee6c */

uint32_t * fcn.0001ee6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint16_t in_stack_00000028;
    int64_t *in_stack_00000030;
    uint *in_stack_00000038;
    uint8_t *in_stack_00000040;
    int64_t in_stack_00000048;
    uint32_t in_stack_00000050;
    uint8_t in_stack_00000058;
    
    uVar1 = in_stack_00000050 / in_stack_00000028;
    if (in_stack_00000050 % in_stack_00000028 != 0) {
        uVar1 = uVar1 + 1;
    }
    puVar3 = fcn.00012f1c(uVar1 * 0x20 + 0x1f >> 5);
    if (puVar3 != NULL) {
        puVar4 = puVar3;
        while( true ) {
            *puVar4 = 1;
            uVar5 = in_stack_00000050 & 0xffff;
            if (in_stack_00000028 < in_stack_00000050) {
                uVar5 = in_stack_00000028;
            }
            uVar2 = (((uVar5 - 1) * 0x40 | arg4) << 7 | arg1) << 8 | arg3;
            puVar4[2] = uVar2;
            if (in_stack_00000058 != 0) {
                puVar4[2] = uVar2 | 0x80000;
            }
            puVar4[4] = 0x18800000;
            uVar2 = puVar4[4];
            if (arg2 != '\0') {
                uVar2 = 0x1c800000;
            }
            puVar4[3] = in_stack_00000048;
            puVar4[4] = uVar2;
            in_stack_00000058 = in_stack_00000058 ^ 1;
            puVar4[4] = puVar4[4] | 0x20000000;
            in_stack_00000048 = in_stack_00000048 + uVar5;
            puVar4[1] = puVar4[4];
            *(puVar4 + 0x15) = 1;
            in_stack_00000050 = in_stack_00000050 - uVar5;
            if (in_stack_00000050 == 0) break;
            uVar5 = puVar4 + 0x20U | 4;
            *puVar4 = uVar5;
            puVar4 = uVar5 & 0xfffffff0;
        }
        uVar5 = puVar4[4] | 0x1000000;
        puVar4[4] = uVar5;
        puVar4[1] = uVar5;
        *in_stack_00000038 = 0;
        *in_stack_00000030 = in_stack_00000048;
        *in_stack_00000040 = in_stack_00000058;
    }
    return puVar3;
}


/* fcn.0001ba5c @ 0x1ba5c */

void fcn.0001ba5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t auStackX_18 [4];
    
    auStackX_18[0] = fcn.00029860(arg1,*(arg1 + 0x4a) + arg2);
    auStackX_18[0] = auStackX_18[0] & ~arg3;
    (**(*(arg1 + 0x80) + 0x18))(*(arg1 + 0x80),2,0,*(arg1 + 0x4a) + arg2,1,auStackX_18);
    return;
}


/* fcn.00021058 @ 0x21058 */

ulong fcn.00021058(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int iVar4;
    
    uVar3 = 0;
    iVar4 = ((arg3 & 0xff) + 0x3f) * 0x10;
    if ((arg4 == '\0') || (cVar1 = fcn.000237f0(arg2,CONCAT71(arg2 >> 8,arg3)), cVar1 == '\0')) {
        fcn.000298a8(arg1,*(arg1 + 0x4a) + iVar4,0x210);
        do {
            uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar4);
            if ((uVar2 & 0x200000) != 0) break;
            (**(*0x2a900 + 0xf8))(100);
            uVar3 = uVar3 + 1;
        } while (uVar3 < 3000);
        if ((uVar2 & 0x200000) != 0) goto code_r0x00021175;
    }
    else {
        fcn.000298a8(arg1,*(arg1 + 0x4a) + iVar4,0x80000200);
        do {
            uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar4);
            if ((uVar2 & 0x280000) != 0) break;
            (**(*0x2a900 + 0xf8))(100);
            uVar3 = uVar3 + 1;
        } while (uVar3 < 6000);
        if ((uVar2 & 0x280000) != 0) {
            if ((*(arg2 + 100) == 0x1b6f) && (*(arg2 + 0x66) == 0x7023)) {
                (**(*0x2a900 + 0xf8))(20000);
            }
code_r0x00021175:
            fcn.000298a8(arg1,*(arg1 + 0x4a) + iVar4,0x280200);
            (**(*0x2a900 + 0xf8))(10000);
            return 0;
        }
    }
    return 0xff;
}


/* fcn.00021428 @ 0x21428 */

ulong fcn.00021428(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    uVar5 = 0;
    iVar1 = *(arg1 + 0x60);
    uVar2 = 0;
    if ((*(*0x2afc0 + 0x6c9) & 0x10000) != 0) {
        uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a));
    }
    iVar3 = *(iVar1 + 0x60);
    if ((iVar3 == 0) || (iVar3 = fcn.00029860(arg1,iVar3 + 0x20), -1 < iVar3)) {
        fcn.0001ba18(arg1,0,2);
        (**(*0x2a900 + 0xf8))(1000);
        do {
            uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a));
            if ((uVar4 & 2) == 0) break;
            (**(*0x2a900 + 0xf8))(100);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 8000);
        uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a));
        if ((uVar4 & 2) != 0) {
            return 0xff;
        }
        if (((*(*0x2afc0 + 0x6c9) & 0x10000) != 0) && ((uVar2 & 8) != 0)) {
            fcn.0001ba18(arg1,0,8);
        }
    }
    return 0;
}


/* fcn.00029f5c @ 0x29f5c */

void fcn.00029f5c(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar1;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = arg2 - *(arg1_00 + 0x18);
    if (uVar1 + 8 <= *(arg1_00 + 0x20)) {
        fcn.000298a8(arg1_00,uVar1,arg3 & 0xffffffff);
        fcn.000298a8(arg1_00,uVar1 + 4,arg3 >> 0x20);
    }
    return;
}


/* fcn.00029f04 @ 0x29f04 */

ulong fcn.00029f04(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = arg2 - *(arg1_00 + 0x18);
    if (*(arg1_00 + 0x20) < uVar4 + 8) {
        uVar3 = 0;
    }
    else {
        uVar1 = fcn.00029860(arg1_00,uVar4);
        uVar2 = fcn.00029860(arg1_00,uVar4 + 4);
        uVar3 = CONCAT44(uVar2,uVar1);
    }
    return uVar3;
}


/* fcn.00023758 @ 0x23758 */

ulong fcn.00023758(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t noname_1;
    int64_t iVar2;
    char in_stack_00000028;
    
    iVar2 = (arg3 - *(arg1 + 0x80)) + *(arg1 + 0x88);
    *arg2 = iVar2;
    *(arg2 + 8) = arg4;
    noname_1 = (arg4 & 0xffffffffU) * 0x10;
    *(arg2 + 0x1c) = 1;
    *(arg2 + 0x14) = iVar2;
    *(arg2 + 0xc) = noname_1 + -0x10 + iVar2;
    if ((arg4 & 0xffffffffU) != 0) {
        fcn.00010300(arg3,noname_1,0);
    }
    if (in_stack_00000028 != '\0') {
        piVar1 = (*(arg1 + 0x80) - *(arg1 + 0x88)) + *(arg2 + 0xc);
        *piVar1 = iVar2;
        *(piVar1 + 0xc) = *(piVar1 + 0xc) & 0xffff1bff | 0x1802;
    }
    return 0;
}


/* fcn.0001ba18 @ 0x1ba18 */

void fcn.0001ba18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t auStackX_18 [4];
    
    auStackX_18[0] = fcn.00029860(arg1,*(arg1 + 0x4a) + arg2);
    auStackX_18[0] = auStackX_18[0] | arg3;
    (**(*(arg1 + 0x80) + 0x18))(*(arg1 + 0x80),2,0,*(arg1 + 0x4a) + arg2,1,auStackX_18);
    return;
}


/* fcn.0001f8fc @ 0x1f8fc */

char fcn.0001f8fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    char cVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint8_t in_stack_00000028;
    char *in_stack_00000030;
    uint16_t in_stack_00000038;
    uint32_t *in_stack_00000040;
    
    uVar8 = arg3;
    bVar4 = false;
    iVar3 = *(arg1 + 0x60);
    cVar7 = '\x10';
    for (uVar12 = 0; (in_stack_00000038 * 100 == 0 || (uVar12 < in_stack_00000038 * 100)); uVar12 = uVar12 + 1) {
        iVar9 = *(iVar3 + 0x88);
        iVar10 = *(iVar3 + 0x80);
        uVar11 = *(iVar3 + 0xd4);
        piVar6 = (*(iVar3 + 0xcc) - iVar9) + iVar10;
        do {
            uVar2 = *(piVar6 + 0xc);
            if ((uVar2 & 1) != uVar11) goto code_r0x0001fafc;
            if ((uVar2 >> 10 & 0x3f) == uVar8) {
                if (uVar8 == 0x20) {
                    if ((*(piVar6 + 0xf) == arg4) && ((uVar2 >> 0x10 & 0x1f) == in_stack_00000028)) {
                        if ((in_stack_00000040 != NULL) &&
                           (*in_stack_00000040 = *(piVar6 + 1) & 0xffffff, *(piVar6 + 0xb) == '\r')) {
                            piVar5 = (*piVar6 - *(iVar3 + 0x88)) + *(iVar3 + 0x80);
                            while (*(piVar5 + 0xc) = *(piVar5 + 0xc) & 0xffffffdb, (*(piVar5 + 0xc) & 0x10) != 0) {
                                puVar1 = piVar5 + 0x1c;
                                piVar5 = piVar5 + 2;
                                if ((*puVar1 & 0xfc00) == 0x1800) {
                                    piVar5 = (*(iVar3 + 0x80) - *(iVar3 + 0x88)) + *piVar5;
                                }
                                *in_stack_00000040 = *in_stack_00000040 + (*(piVar5 + 1) & 0x1ffff);
                            }
                        }
                        cVar7 = *(piVar6 + 0xb);
                        *in_stack_00000030 = cVar7;
                        if ((cVar7 == '\x01') || (cVar7 == '\r')) {
                            cVar7 = '\0';
                        }
                        else {
                            cVar7 = -1;
                        }
                        bVar4 = true;
                    }
                }
                else if (uVar8 == 0x21) {
                    if (arg2 == 0) {
                        if ((*in_stack_00000030 != '\0') && (*(piVar6 + 0xb) == *in_stack_00000030)) {
                            cVar7 = '\0';
                            goto code_r0x0001fb27;
                        }
                    }
                    else if (*piVar6 == (iVar9 - iVar10) + arg2) {
                        if (in_stack_00000040 != NULL) {
                            *in_stack_00000040 = *(piVar6 + 0xf);
                        }
                        cVar7 = *(piVar6 + 0xb);
                        *in_stack_00000030 = cVar7;
                        cVar7 = -(cVar7 != '\x01');
                        goto code_r0x0001fb27;
                    }
                }
            }
            if (bVar4) goto code_r0x0001fb1c;
            iVar9 = *(iVar3 + 0x88);
            iVar10 = *(iVar3 + 0x80);
            if (piVar6 == (*(iVar3 + 0xc4) - iVar9) + iVar10) {
                piVar6 = (*(iVar3 + 0xb8) - iVar9) + iVar10;
                uVar11 = uVar11 ^ 1;
            }
            else {
                piVar6 = piVar6 + 2;
            }
        } while (piVar6 != (*(iVar3 + 0xcc) - iVar9) + iVar10);
        *in_stack_00000030 = '\x15';
        cVar7 = -1;
code_r0x0001fafc:
        if (bVar4) break;
        (**(*0x2a900 + 0xf8))(10);
    }
code_r0x0001fb1c:
    if (!bVar4) {
        *in_stack_00000030 = -1;
        cVar7 = -1;
    }
code_r0x0001fb27:
    fcn.000204d0(arg1);
    return cVar7;
}


/* fcn.000204d0 @ 0x204d0 */

ulong fcn.000204d0(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    uchar auVar4 [16];
    uint8_t uVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *puVar15;
    int iVar16;
    uint64_t uVar17;
    uint8_t uVar18;
    bool bVar19;
    
    iVar11 = fcn.0001b874(arg1);
    if (iVar11 < 0) {
        return 0xff;
    }
    iVar11 = *(arg1 + 0x60);
    uVar7 = fcn.000297b4(arg1,4);
    if (uVar7 == 0xff) {
        return 0;
    }
    if ((uVar7 & 2) == 0) {
        if ((**0x2afc0 & 0x10) == 0) {
            return 0;
        }
        uVar12 = fcn.000297b4(arg1,0x10);
        uVar17 = uVar12 & 0xffffffff;
        if ((uVar12 & 6) == 4) {
            uVar8 = fcn.000297b4(arg1,0x14);
            uVar17 = uVar17 | uVar8 << 0x20;
        }
        if ((uVar17 & 0xffffffffffffff80) != *(arg1 + 0x18)) {
            return 0;
        }
        if (*(iVar11 + 0x38) == 0) {
            return 0;
        }
        fcn.0002982c(arg1,4,6);
        fcn.0001f58c(arg1);
        if (((*(*(*0x2a8b8 + 0x3aa) + 0x2b) == '\0') && (*0x2a8b0 != NULL)) && ((**0x2afc0 & 2) == 0)) {
            (*(*0x2a8b0)[1])(*0x2a8b0);
        }
        fcn.0002982c(arg1,4,uVar7);
        return 0;
    }
    uVar8 = fcn.000297b4(arg1,0x10);
    uVar12 = uVar8;
    if ((uVar8 & 6) == 4) {
        uVar9 = fcn.000297b4(arg1,0x14);
        uVar12 = CONCAT44(uVar9,uVar8);
    }
    uVar12 = uVar12 & 0xffffffffffffff80;
    if (uVar12 != *(arg1 + 0x18)) {
        *(arg1 + 0x18) = uVar12;
        *(iVar11 + 0x28) = *(iVar11 + 8) + uVar12;
        *(iVar11 + 0x30) = *(iVar11 + 0x20) + uVar12;
    }
    uVar12 = fcn.00029860(arg1,*(arg1 + 0x4a) + 8);
    if ((uVar12 & 0xffffffff) != *(iVar11 + 0x70)) {
        return 0;
    }
    uVar8 = arg1;
    if ((*(iVar11 + 0x38) != 0) &&
       (uVar10 = fcn.00029860(arg1,*(iVar11 + 0x38) + 4), (uVar10 & 0x20002000) == 0x20002000)) {
        fcn.0001b98c(uVar8,*(iVar11 + 0x38) + 4,0x20000000);
        uVar8 = fcn.00029860(arg1,*(iVar11 + 0x38));
        if ((uVar8 >> 0x18 & 1) == 0) {
            if ((*(arg1 + 0x58) & 1) != 0) {
                return 0;
            }
            **0x2afc0 = **0x2afc0 | 1;
            fcn.0001f0ec(arg1);
            fcn.0001f70c(arg1);
            if (*(*(*0x2a8b8 + 0x3aa) + 0x2b) != '\0') {
                return 0;
            }
            if (*0x2a8b0 == NULL) {
                return 0;
            }
            if ((**0x2afc0 & 2) != 0) {
                return 0;
            }
            (***0x2a8b0)(*0x2a8b0);
            return 0;
        }
        if ((*(arg1 + 0x58) & 1) == 0) {
            return 0;
        }
        **0x2afc0 = **0x2afc0 & 0xfffffffe;
        fcn.0001f58c(arg1);
        if (*(*(*0x2a8b8 + 0x3aa) + 0x2b) != '\0') {
            return 0;
        }
        if (*0x2a8b0 == NULL) {
            return 0;
        }
        if ((**0x2afc0 & 2) != 0) {
            return 0;
        }
        (*(*0x2a8b0)[1])(*0x2a8b0);
        return 0;
    }
    if ((*(arg1 + 0x58) & 1) == 0) {
        return 0;
    }
    uVar17 = *(arg1 + 0x4a) + 4;
    uVar12 = fcn.00029860(arg1,uVar17);
    if ((uVar12 & 1) != 0) {
        return 0xff;
    }
    iVar13 = fcn.00029f04(uVar8,uVar17,*(iVar11 + 0x28) + 0x30);
    if (iVar13 != *(iVar11 + 0x88)) {
        return 0;
    }
    if ((*0x2afc0)[0x1b1] == '\x01') {
        uVar18 = 0;
        do {
            iVar13 = uVar18 + 0x10;
            puVar15 = *(iVar11 + iVar13 * 0x10);
            if (((puVar15 != NULL) && (iVar14 = fcn.00023868(*puVar15,0x18), iVar14 != 0)) &&
               ((*(iVar11 + iVar13 * 0x10) = 0, *(iVar14 + 0x15) - 1U < 0x32 && (*(iVar14 + 0x20) != 0)))) {
                pcVar3 = *((*(iVar14 + 0x15) - 1) * 8 + 0x2a980);
                if (pcVar3 != NULL) {
                    (*pcVar3)(arg1,iVar14,0,*(iVar14 + 0x20),*(iVar11 + 0x108 + uVar18 * 0x10));
                }
                uVar1 = *(iVar14 + 0x50);
                if (uVar1 != 0) {
                    uVar12 = *(iVar14 + 0xf8);
                    uVar17 = *(iVar11 + 0xe8);
                    if ((uVar17 <= uVar12) &&
                       (uVar2 = *(iVar11 + 0x79), uVar12 <= *(iVar11 + 0xc) * uVar2 * 0x20 + uVar17)) {
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = uVar12 - uVar17;
                        uVar6 = (uVar1 & 0xf) * '\x02';
                        uVar5 = uVar6 + 1;
                        if (-1 < uVar1) {
                            uVar5 = uVar6;
                        }
                        uVar12 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                        if ((uVar12 & 1) != 0) {
                            return 0xff;
                        }
                        uVar10 = SUB161(auVar4 / (ZEXT416(uVar2) << 5),0) + 1;
                        uVar12 = *(iVar11 + 0x1c) + uVar10 * 4;
                        iVar13 = (uVar10 * 0x20 + -0x20 + (uVar5 - 1)) * 0x20 + *(iVar11 + 0xd8);
                        puVar15 = fcn.0001f89c(arg1,iVar13);
                        if (puVar15 != NULL) {
                            *(puVar15 + 0xc) = *(puVar15 + 0xc) & 0xffff07ff;
                            *(puVar15 + 0xc) = *(puVar15 + 0xc) | 0x400;
                            uVar10 = *(puVar15 + 0xc) | 0x24;
                            *puVar15 = *(iVar14 + 0x18);
                            uVar7 = *(iVar14 + 0x132);
                            *(puVar15 + 0xc) = uVar10;
                            *(puVar15 + 1) = uVar7 | *(puVar15 + 1) & 0xfffe0000;
                            *(puVar15 + 0xc) = (*(iVar13 + 0x1c) ^ uVar10) & 1 ^ uVar10;
                            fcn.000298a8(arg1,uVar12 & 0xffffffff,uVar5);
                        }
                    }
                }
            }
            uVar18 = uVar18 + 1;
        } while (uVar18 < 0x10);
    }
    uVar17 = 8;
    uVar12 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((uVar12 & 0x10) != 0) {
        fcn.0001fd80(arg1,iVar11);
    }
    uVar18 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((((uVar18 & 8) != 0) && (fcn.000298a8(arg1,*(arg1 + 0x4a) + 4,8), *(*0x2afc0 + 0x686) == *arg1)) &&
       ((*0x2afc0)[0x1b1] == '\x01')) {
        uVar10 = fcn.00029860(arg1,(*(iVar11 + 0x30) - *(arg1 + 0x18)) + 0x24);
        if (*(*0x2afc0 + 0x6c7) == '\0') {
            bVar19 = (uVar10 & 32000) == 32000;
        }
        else {
            bVar19 = (uVar10 & 64000) == 64000;
        }
        if (bVar19) {
            fcn.00016690(arg1);
        }
    }
    if ((*((*(iVar11 + 0xcc) - *(iVar11 + 0x88)) + 0xc + *(iVar11 + 0x80)) & 1) == *(iVar11 + 0xd4)) {
        while( true ) {
            iVar13 = *(iVar11 + 0xcc);
            iVar14 = (*(iVar11 + 0x80) - *(iVar11 + 0x88)) + iVar13;
            if ((*(iVar14 + 0xc) & 1) != *(iVar11 + 0xd4)) break;
            if (iVar13 == *(iVar11 + 0xc4)) {
                iVar13 = *(iVar11 + 0xb8);
                *(iVar11 + 0xd4) = *(iVar11 + 0xd4) ^ 1;
            }
            else {
                iVar13 = iVar13 + 0x10;
            }
            *(iVar11 + 0xcc) = iVar13;
            uVar10 = *(iVar14 + 0xc) >> 10 & 0x3f;
            if (uVar10 == 0x20) {
                fcn.00020168(iVar11,arg1,iVar14);
            }
            else if ((uVar10 != 0x21) && (uVar10 == 0x22)) {
                fcn.000203fc(iVar11,arg1,iVar14);
            }
        }
        if ((*(*0x2afc0 + 0x686) == *arg1) &&
           (((uVar10 = fcn.00029860(arg1,(*(iVar11 + 0x30) - *(arg1 + 0x18)) + 0x24), (uVar10 & 64000) == 64000 &&
             (*(*0x2afc0 + 0x6c7) == '\x01')) ||
            ((uVar10 = fcn.00029860(arg1,(*(iVar11 + 0x30) - *(arg1 + 0x18)) + 0x24), (uVar10 & 32000) == 32000 &&
             (*(*0x2afc0 + 0x6c7) == '\0')))))) {
            uVar12 = (*(iVar11 + 0x30) - *(arg1 + 0x18)) + 0x20;
            fcn.0001b98c(uVar8,uVar12,1);
        }
        else {
            uVar12 = (*(iVar11 + 0x30) - *(arg1 + 0x18)) + 0x20;
            fcn.0001b98c(uVar8,uVar12,1);
            uVar17 = *(iVar11 + 0xcc) | 8;
        }
        fcn.00029f5c(uVar8,uVar12,*(iVar11 + 0x30) + 0x38,uVar17);
        uVar12 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        if ((uVar12 & 0x10) == 0) {
            return 0;
        }
        fcn.0001fd80(arg1,iVar11);
        return 0;
    }
    iVar16 = *(iVar11 + 0x30) - *(arg1 + 0x18);
    if (*(*0x2afc0 + 0x686) == *arg1) {
        uVar10 = fcn.00029860(arg1,iVar16 + 0x24);
        if ((((uVar10 & 64000) == 64000) && (*(*0x2afc0 + 0x6c7) == '\x01')) ||
           (((uVar10 & 32000) == 32000 && (*(*0x2afc0 + 0x6c7) == '\0')))) {
            uVar12 = (*(iVar11 + 0x30) - *(arg1 + 0x18)) + 0x20;
            fcn.0001b98c(uVar8,uVar12,1);
            goto code_r0x00020ac7;
        }
        iVar16 = *(iVar11 + 0x30) - *(arg1 + 0x18);
    }
    uVar12 = iVar16 + 0x20;
    fcn.0001b98c(uVar8,uVar12,1);
    uVar17 = *(iVar11 + 0xcc) | 8;
code_r0x00020ac7:
    fcn.00029f5c(uVar8,uVar12,*(iVar11 + 0x30) + 0x38,uVar17);
    return 0;
}


/* fcn.0001f89c @ 0x1f89c */

ulong * fcn.0001f89c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    
    iVar1 = *(arg1 + 0x60);
    puVar2 = (*(arg2 + 0x14) - *(iVar1 + 0x88)) + *(iVar1 + 0x80);
    if ((*(puVar2 + 0xc) & 0xfc00) == 0x1800) {
        *(puVar2 + 0xc) = *(puVar2 + 0xc) ^ (*(arg2 + 0x1c) ^ *(puVar2 + 0xc)) & 1;
        *(arg2 + 0x1c) = *(arg2 + 0x1c) ^ 1;
        *(arg2 + 0x14) = *arg2;
        puVar2 = (*arg2 - *(iVar1 + 0x88)) + *(iVar1 + 0x80);
    }
    *(puVar2 + 0xc) = *(puVar2 + 0xc) & 1;
    *puVar2 = 0;
    *(puVar2 + 1) = 0;
    *(arg2 + 0x14) = *(arg2 + 0x14) + 0x10;
    return puVar2;
}


/* fcn.00020c4c @ 0x20c4c */

uint32_t fcn.00020c4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong in_R9;
    uint32_t uVar10;
    bool bVar11;
    
    cVar1 = arg3;
    iVar7 = ((arg2 & 0xff) + 0x3f) * 0x10;
    iVar4 = fcn.0001b874(arg1);
    if (iVar4 < 0) {
        return 0xff;
    }
    iVar4 = *(arg1 + 0x60);
    uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((uVar5 & 1) != 0) {
        return 0xff;
    }
    uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar7);
    uVar5 = 0;
    uVar8 = (-((uVar3 & 8) != 0) & 0x200) + 0x40;
    bVar11 = (uVar3 >> 0x14 & 1) != 0;
    if (bVar11) {
        uVar8 = uVar8 | 0x4000;
    }
    if (bVar11 || (uVar3 & 8) != 0) {
        fcn.000298a8(arg1,*(arg1 + 0x4a) + 4,0x10);
        uVar10 = 0x20000;
        if ((uVar3 & 0x20000) == 0) {
            return uVar8;
        }
        goto code_r0x00020f64;
    }
    uVar10 = 0;
    do {
        if ((uVar3 & 0x10) == 0) break;
        (**(*0x2a900 + 0xf8))(1000);
        uVar5 = *(arg1 + 0x4a) + iVar7;
        uVar3 = fcn.00029860(arg1,uVar5);
        uVar10 = uVar10 + 1;
    } while (uVar10 < 200);
    uVar6 = uVar3 >> 5 & 0xf;
    if ((uVar3 >> 5 & 0xf) != 0) {
        if (uVar6 == 3) {
            uVar8 = uVar8 | 0x100;
        }
        else if (uVar6 != 5) {
            if (uVar6 == 6) {
                uVar3 = 0;
                do {
                    (**(*0x2a900 + 0xf8))(1000);
                    uVar10 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar7);
                    uVar6 = uVar10 >> 5 & 0xf;
                    if (uVar6 != 6) break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < 0xc);
code_r0x00020e0c:
                if (uVar6 != 5) {
code_r0x00020e10:
                    fcn.00021058(arg1,iVar4,CONCAT71(arg3 >> 8,arg2),CONCAT71(in_R9 >> 8,1));
                }
            }
            else if (uVar6 == 7) {
                cVar2 = fcn.000237f0(iVar4,CONCAT71(uVar5 >> 8,arg2));
                if (cVar2 != '\0') {
                    uVar3 = 0;
                    do {
                        (**(*0x2a900 + 0xf8))(1000);
                        uVar10 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar7);
                        uVar6 = uVar10 >> 5 & 0xf;
                        if (uVar6 != 7) break;
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < 500);
                    if ((uVar10 >> 5 & 0xf) != 0) goto code_r0x00020e0c;
                }
            }
            else if (uVar6 == 8) {
                uVar3 = 0;
                do {
                    (**(*0x2a900 + 0xf8))(1000);
                    uVar10 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar7);
                    if ((uVar10 >> 5 & 0xf) != 8) break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < 200);
            }
            else {
                if (uVar6 == 10) goto code_r0x00020e10;
                uVar8 = uVar8 | 1;
            }
        }
    }
    uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar7);
    if ((uVar3 & 1) != 0) {
        uVar9 = uVar8 | 1;
        uVar10 = uVar3 >> 10 & 0xf;
        if (uVar10 != 0) {
            if (uVar10 == 1) {
                uVar9 = uVar8 | 5;
            }
            else if (uVar10 == 2) {
                uVar9 = uVar8 | 3;
            }
            else if (uVar10 != 3) {
                if (uVar10 == 4) {
code_r0x00020eaa:
                    uVar9 = uVar8 | 9;
                }
                else {
                    if (uVar10 != 5) {
                        if (uVar10 == 6) goto code_r0x00020eaa;
                        if (uVar10 != 7) goto code_r0x00020eba;
                    }
                    uVar9 = uVar8 | 0x81;
                }
            }
        }
code_r0x00020eba:
        uVar8 = uVar9 | 0x10;
        if (*(*0x2afc0 + 0x6c3) != '\x01') {
            uVar8 = uVar9;
        }
        if ((uVar3 & 2) != 0) {
            uVar8 = uVar8 | 0x20;
        }
    }
    uVar10 = uVar8 | 0x400;
    if ((uVar3 & 0x80000010) == 0) {
        uVar10 = uVar8;
    }
    uVar8 = uVar10 | 0x800;
    if ((uVar3 & 0x200) == 0) {
        uVar8 = uVar10;
    }
    uVar10 = uVar8 | 0x1000;
    if ((uVar3 & 0x40000) == 0) {
        uVar10 = uVar8;
    }
    uVar8 = uVar10 | 0x8000;
    if ((uVar3 & 0x280000) == 0) {
        uVar8 = uVar10;
    }
    if ((uVar3 & 0x20000) == 0) {
code_r0x00020f4d:
        if (cVar1 != '\x01') {
            return uVar8;
        }
    }
    else {
        uVar8 = uVar8 | 0x10;
        if (cVar1 != '\x01') {
            return uVar8;
        }
        if ((uVar3 >> 0x14 & 1) == 0) {
            fcn.000298a8(arg1,*(arg1 + 0x4a) + iVar7,0x20200);
            goto code_r0x00020f4d;
        }
    }
    uVar10 = fcn.00029860(arg1,*(arg1 + 0x4a) + iVar7);
    uVar10 = uVar10 & 0xfffffffd;
code_r0x00020f64:
    fcn.000298a8(arg1,*(arg1 + 0x4a) + iVar7,uVar10);
    return uVar8;
}


/* fcn.0001fb48 @ 0x1fb48 */

//WARNING: Removing unreachable block (ram,0x0001fce3)

ulong fcn.0001fb48(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar uVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t *arg2_00;
    uint64_t uVar5;
    uint32_t uVar6;
    uchar uStackX_20;
    
    iVar1 = *(arg1 + 0x60);
    arg2_00 = fcn.0001f89c(arg1,iVar1 + 0x98);
    if (arg2_00 == NULL) {
        return 0xff;
    }
    uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((uVar5 & 1) != 0) {
        return 0xff;
    }
    *(arg2_00 + 0xc) = *(arg2_00 + 0xc) & 0xffff03ff;
    uVar6 = arg2;
    *(arg2_00 + 0xc) = *(arg2_00 + 0xc) | (uVar6 & 0x3f) << 10;
    uVar4 = *(arg2_00 + 0xc);
    if (uVar6 == 10) {
        uVar2 = *arg3;
code_r0x0001fc7d:
        *(arg2_00 + 0xf) = uVar2;
    }
    else {
        if (uVar6 == 0xb) {
            *arg2_00 = (*(iVar1 + 0xf0) - *(iVar1 + 0x80)) + *(iVar1 + 0x88);
            *(arg2_00 + 0xf) = *arg3;
            uVar4 = (*(arg3 + 1) << 9 ^ *(arg2_00 + 0xc)) & 0x200;
        }
        else {
            if (uVar6 < 0xc) goto code_r0x0001fc80;
            if (uVar6 < 0xe) {
                *arg2_00 = (*(iVar1 + 0xf0) - *(iVar1 + 0x80)) + *(iVar1 + 0x88);
                *(arg2_00 + 0xf) = *arg3;
                *(arg2_00 + 0xc) = *(arg2_00 + 0xc) & 0xfffffdff;
                goto code_r0x0001fc80;
            }
            if (uVar6 == 0xe) {
                *(arg2_00 + 0xc) = uVar4 & 0xfffffdff;
            }
            else if (uVar6 != 0xf) {
                if (uVar6 != 0x10) goto code_r0x0001fc80;
                *arg2_00 = *arg3;
                *(arg2_00 + 0xc) = (uVar4 ^ *(arg3 + 0xc)) & 0x1f0000 ^ uVar4;
                uVar2 = *(arg3 + 0xf);
                goto code_r0x0001fc7d;
            }
            *(arg2_00 + 0xf) = *arg3;
            uVar4 = (*(arg3 + 1) << 0x10 ^ *(arg2_00 + 0xc)) & 0x1f0000;
        }
        *(arg2_00 + 0xc) = *(arg2_00 + 0xc) ^ uVar4;
    }
code_r0x0001fc80:
    *(arg2_00 + 0xc) = *(arg2_00 + 0xc) ^ (*(iVar1 + 0xb4) ^ *(arg2_00 + 0xc)) & 1;
    fcn.000298a8(arg1,*(iVar1 + 0x1c),0);
    cVar3 = fcn.0001f8fc(arg1,arg2_00,0x21,0);
    if (cVar3 == -1) {
        return 0xff;
    }
    if (uVar6 == 9) {
        *arg3 = uStackX_20;
    }
    else if ((((uVar6 != 10) && (uVar6 != 0xc)) && (uVar6 != 0xd)) && (uVar6 == 0xe)) {
        (**(*0x2a900 + 0xf8))(10000);
    }
    return 0;
}


/* fcn.00023868 @ 0x23868 */

uint * fcn.00023868(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint *puVar1;
    uint8_t uVar2;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        uVar2 = 1;
        if (1 < *(*0x2afc0 + 0x716)) {
            do {
                puVar1 = uVar2 * 0x1c0 + *(*0x2a8b8 + 0x42);
                if ((((*puVar1 & 3) == 3) && (*(puVar1 + arg2) != 0)) &&
                   (*(puVar1 + arg2) == CONCAT44(in_register_0000000c,arg1))) {
                    return puVar1;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(*0x2afc0 + 0x716));
        }
    }
    return NULL;
}


/* fcn.00020038 @ 0x20038 */

void fcn.00020038(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int *piVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint8_t in_stack_00000028;
    
    iVar1 = fcn.00023868(*arg3,400);
    uVar6 = 0;
    if (iVar1 != 0) {
        iVar7 = *(arg1 + 0x88);
        uVar2 = 0;
        iVar8 = *(arg1 + 0x80);
        piVar5 = *(iVar1 + 0x170);
        piVar3 = (*(arg1 + 0xb8) - iVar7) + iVar8;
        if (*(arg1 + 0xc0) != 0) {
            do {
                if ((*piVar3 - iVar7) + iVar8 == *(iVar1 + 0x180)) break;
                uVar2 = uVar2 + 1;
                piVar3 = piVar3 + 2;
            } while (uVar2 < *(arg1 + 0xc0));
            if (*(arg1 + 0xc0) != 0) {
                do {
                    piVar4 = piVar3;
                    if ((*(piVar3 + 0xf) == arg4) && ((*(piVar3 + 0xe) & 0x1f) == in_stack_00000028)) {
                        *piVar5 = (*((*piVar3 - iVar7) + 8 + iVar8) & 0x1ffff) - (*(piVar3 + 1) & 0xffffff);
                        piVar5 = piVar5 + 1;
                        if (piVar3 == arg2) break;
                        iVar7 = *(arg1 + 0x88);
                        piVar4 = piVar3 + 2;
                        iVar8 = *(arg1 + 0x80);
                        if (piVar3 == (*(arg1 + 0xc4) - iVar7) + iVar8) {
                            piVar4 = (*(arg1 + 0xb8) - iVar7) + iVar8;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    piVar3 = piVar4;
                } while (uVar6 < *(arg1 + 0xc0));
            }
        }
        **(iVar1 + 0x178) = 1;
    }
    return;
}


/* fcn.0001ff40 @ 0x1ff40 */

uint64_t fcn.0001ff40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    int16_t aiStackX_18 [8];
    int64_t iStack_28;
    uint32_t uStack_1c;
    
    uVar5 = arg3 & 0xff;
    puVar4 = ((uVar5 - 1) * *(arg1 + 0x79) * 0x20 & 0xffffffff) + (arg4 & 0xffU) * *(arg1 + 0x79) + *(arg1 + 0xe8);
    if ((*puVar4 & 7) == 2) {
        aiStackX_18[0] = arg4 * 0x100 + uVar5;
        fcn.0001fb48(arg2,0xe,aiStackX_18);
    }
    uVar1 = (*puVar4 & 7) - 3;
    uVar2 = uVar1;
    if (uVar1 < 2) {
        iVar3 = (uVar5 * 0x20 + -0x20 + ((arg4 & 0xffU) - 1U & 0xff)) * 0x20 + *(arg1 + 0xd8);
        iStack_28 = *(iVar3 + 0x1c) + *(iVar3 + 0x14);
        uStack_1c = (arg4 & 0x1f | uVar5 << 8) << 0x10 | uStack_1c & 0xe0ffff;
        uVar2 = fcn.0001fb48(arg2,0x10,&iStack_28);
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.0001f58c @ 0x1f58c */

ulong fcn.0001f58c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint32_t arg1_00;
    uint64_t in_RDX;
    uint8_t uVar5;
    uint32_t uVar6;
    int64_t in_R8;
    
    iVar1 = *(arg1 + 0x60);
    iVar2 = fcn.0001b874(arg1);
    if ((iVar2 < 0) || ((*(arg1 + 0x58) & 1) == 0)) {
        uVar3 = 0xff;
    }
    else {
        uVar5 = 1;
        *(*0x2afc0 + 0x5ad) = 1;
        if (*(iVar1 + 0xf) != '\0') {
            do {
                in_R8 = CONCAT71(in_R8 >> 8,uVar5);
                in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                fcn.00012cf8(arg1,in_RDX,in_R8);
                uVar5 = uVar5 + 1;
            } while (uVar5 <= *(iVar1 + 0xf));
        }
        arg1_00 = arg1;
        uVar4 = fcn.00029f04(arg1_00,in_RDX,*(iVar1 + 0x28) + 0x18);
        if ((uVar4 & 8) != 0) {
            fcn.00029f5c(arg1_00,in_RDX,*(iVar1 + 0x28) + 0x18,2);
            fcn.0001f8fc(arg1,0,0x21,0);
        }
        fcn.000204d0(arg1);
        *(*0x2afc0 + 0x5ad) = 0;
        if ((((*(arg1 + 0x58) & 0x10) == 0) || (*(*0x2afc0 + 0x6cd) != '\0')) && ((*(arg1 + 0x58) & 0x80) == 0)) {
            fcn.0001ba5c(arg1,0,4);
        }
        fcn.0001b9d0(arg1_00,(*(iVar1 + 0x30) - *(arg1 + 0x18)) + 0x20,2);
        fcn.0001ba5c(arg1,0,1);
        uVar6 = 0;
        do {
            uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
            if ((uVar4 & 1) != 0) break;
            (**(*0x2a900 + 0xf8))(100);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x140);
        if (*(iVar1 + 0x38) != 0) {
            fcn.0001b9d0(arg1_00,*(iVar1 + 0x38),0x10000);
        }
        *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffffe;
        fcn.00011eec();
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001f0ec @ 0x1f0ec */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_4h

ulong fcn.0001f0ec(int64_t arg1)

{
    int64_t *arg2;
    int64_t arg2_00;
    bool bVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *noname_1;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int64_t in_R8;
    uint8_t uVar12;
    int32_t var_bp_8h;
    int32_t var_bp_10h;
    int32_t var_14h;
    int32_t var_4h;
    
    arg2_00 = *(arg1 + 0x60);
    uVar11 = 0;
    bVar1 = false;
    iVar6 = fcn.0001b874(arg1);
    if (((-1 < iVar6) && (arg2_00 != 0)) && (uVar4 = fcn.000297b4(arg1,8), (uVar4 & 0xffffff00) == 0xc033000)) {
        uVar7 = fcn.000297b4(arg1,0x10);
        uVar10 = uVar7 & 0xffffffff;
        if ((uVar7 & 6) == 4) {
            uVar4 = fcn.000297b4(arg1,0x14);
            uVar10 = uVar10 | uVar4 << 0x20;
        }
        uVar10 = uVar10 & 0xffffffffffffff80;
        *(arg1 + 0x18) = uVar10;
        if ((uVar10 <= *(arg2_00 + 0x28)) && (*(arg2_00 + 0x28) + 0x3c <= *(arg1 + 0x20) + uVar10)) {
            uVar4 = 0;
            iVar6 = 0;
            do {
                uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                if ((uVar5 >> 0xb & 1) == 0) break;
                (**(*0x2a900 + 0xf8))(100);
                uVar4 = uVar4 + 1;
            } while (uVar4 < 1000);
            uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
            if ((uVar4 >> 0xb & 1) == 0) {
                uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                uVar12 = 1;
                if ((uVar2 & 1) == 0) {
                    fcn.0001ba5c(arg1,0,1);
                    uVar4 = 0;
                    do {
                        uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                        in_R8 = iVar6;
                        if ((uVar2 & 1) != 0) break;
                        (**(*0x2a900 + 0xf8))(100);
                        uVar4 = uVar4 + 1;
                        in_R8 = iVar6;
                    } while (uVar4 < 0x140);
                    uVar7 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                    if ((uVar7 & 1) == 0) {
                        return 0xff;
                    }
                }
                if (((*(*0x2afc0 + 0x6c9) & 0x10000000) != 0) && (uVar2 = uVar12, *(arg2_00 + 0xf) != '\0')) {
                    do {
                        uVar4 = fcn.00029860(arg1,(uVar2 + 0x3f) * 0x10 + *(arg1 + 0x4a));
                        if ((uVar4 & 0x1e0) == 0x140) {
                            in_R8 = CONCAT71(in_R8 >> 8,uVar2);
                            fcn.00021058(arg1,arg2_00,in_R8,0);
                        }
                        uVar2 = uVar2 + 1;
                    } while (uVar2 <= *(arg2_00 + 0xf));
                }
                if ((*(arg1 + 0x58) >> 8 & 1) == 0) {
                    cVar3 = fcn.00021428(arg1);
                    if (cVar3 == -1) {
                        return 0xff;
                    }
                }
                else {
                    *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffeff;
                }
                if (((*(arg2_00 + 0xc) >> 8 & 0x7ff) + 1) * 0x20 + *(arg2_00 + 0x20) <= *(arg1 + 0x20)) {
                    *(arg2_00 + 0x30) = *(arg2_00 + 0x20) + *(arg1 + 0x18);
                    uVar7 = *(arg1 + 0x4a) + 0x38;
                    fcn.000298a8(arg1,uVar7,*(arg2_00 + 0xc) & 0xff);
                    uVar4 = arg1;
                    fcn.00029f5c(uVar4,uVar7,*(arg2_00 + 0x28) + 0x30,*(arg2_00 + 0x88));
                    if ((*(arg2_00 + 0x18) & 1) != 0) {
                        iVar6 = *(arg2_00 + 0x88);
                        iVar8 = fcn.00029f04(uVar4,uVar7,*(arg2_00 + 0x28) + 0x30);
                        if (iVar8 != iVar6) {
                            *(arg2_00 + 0x18) = *(arg2_00 + 0x18) & 0xfffffffe;
                            fcn.00029f5c(uVar4,uVar7,*(arg2_00 + 0x28) + 0x30,iVar6);
                        }
                    }
                    arg2 = arg2_00 + 0x98;
                    noname_1 = arg2;
                    fcn.00023758(arg2_00,arg2,*(arg2_00 + 0x80) + 0x2000,0x40);
                    fcn.00029f5c(uVar4,noname_1,*(arg2_00 + 0x28) + 0x18,*arg2 + 1);
                    fcn.00023758(arg2_00,arg2_00 + 0xb8,*(arg2_00 + 0x80) + 0x2400,0x400);
                    iVar6 = *(arg2_00 + 0x80);
                    *(iVar6 + 0x1200) = *(arg2_00 + 0xb8);
                    *(iVar6 + 0x1208) = 0x400;
                    iVar6 = *(arg2_00 + 0x30);
                    uVar7 = (iVar6 - *(arg1 + 0x18)) + 0x28;
                    fcn.000298a8(arg1,uVar7,1);
                    fcn.00029f5c(uVar4,uVar7,iVar6 + 0x38,*(arg2_00 + 0xcc));
                    fcn.00029f5c(uVar4,uVar7,iVar6 + 0x30,*(arg2_00 + 0x88) + 0x1200);
                    fcn.000298a8(arg1,(*(arg2_00 + 0x30) - *(arg1 + 0x18)) + 0x24,4000);
                    if ((((*(arg1 + 0x58) & 0x10) == 0) || (*(*0x2afc0 + 0x6cd) != '\0')) &&
                       ((*(arg1 + 0x58) & 0x80) == 0)) {
                        fcn.0001ba18(arg1,0,4);
                    }
                    fcn.0001b98c(uVar4,(*(arg2_00 + 0x30) - *(arg1 + 0x18)) + 0x20,2);
                    if (((*(arg2_00 + 0x18) & 8) != 0) && (*(arg2_00 + 0xf) != '\0')) {
                        do {
                            uVar9 = (uVar12 + 0x3f) * 0x10;
                            uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a) + uVar9);
                            if ((uVar5 & 0x200) == 0) {
                                fcn.0001ba18(arg1,uVar9,0x200);
                                bVar1 = true;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 <= *(arg2_00 + 0xf));
                        if (bVar1) {
                            (**(*0x2a900 + 0xf8))(20000);
                        }
                    }
                    if (*(arg2_00 + 0x38) != 0) {
                        fcn.0001b98c(uVar4,*(arg2_00 + 0x38),0x10000);
                    }
                    fcn.0001ba18(arg1,0,1);
                    do {
                        uVar12 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                        if ((uVar12 & 1) == 0) break;
                        (**(*0x2a900 + 0xf8))(100);
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < 100);
                    if ((*(*0x2afc0 + 0x6c9) & 0x10000) != 0) {
                        fcn.0001ba18(arg1,0,8);
                    }
                    *(arg1 + 0x58) = *(arg1 + 0x58) | 1;
                    if ((**0x2afc0 & 0x80) == 0) {
                        **0x2afc0 = **0x2afc0 | 0x80;
                    }
                    return 0;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.0001f70c @ 0x1f70c */

ulong fcn.0001f70c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t arg2;
    uint8_t uVar4;
    char cVar5;
    uint64_t uVar6;
    unkbyte7 in_R8;
    unkbyte7 in_R9;
    
    if (*(*0x2afc0 + 0x5ad) == '\x01') {
code_r0x0001f881:
        uVar2 = 0;
    }
    else {
        iVar1 = fcn.0001b874(arg1);
        if ((-1 < iVar1) && ((*(arg1 + 0x58) & 1) != 0)) {
            arg2 = *(arg1 + 0x4a) + 4;
            uVar3 = fcn.00029860(arg1,arg2);
            if ((uVar3 & 1) == 0) {
                uVar3 = *(arg1 + 0x60);
                *(*0x2afc0 + 0x6c3) = 1;
                *(*0x2afc0 + 0x5ad) = 1;
                if ((*(uVar3 + 0x45) != '\0') && (uVar4 = 0, *(uVar3 + 0x45) != '\0')) {
                    do {
                        arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                        fcn.00012d38(arg1,arg2,CONCAT71(in_R8,*(uVar3 + 0x44) + uVar4));
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < *(uVar3 + 0x45));
                }
                if ((*(uVar3 + 0x51) != '\0') && (uVar4 = 0, *(uVar3 + 0x51) != '\0')) {
                    do {
                        cVar5 = *(uVar3 + 0x50) + uVar4;
                        if ((*(uVar3 + 100) == 0x1106) && (*(uVar3 + 0x66) == 0x3432)) {
                            arg2 = uVar3;
                            fcn.00021058(arg1,uVar3,CONCAT71(in_R8,cVar5),CONCAT71(in_R9,1));
                        }
                        arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                        fcn.00012d38(arg1,arg2,CONCAT71(in_R8,cVar5));
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < *(uVar3 + 0x51));
                }
                if ((*(uVar3 + 0x200) != '\0') && (uVar6 = 0, *(uVar3 + 0x200) != '\0')) {
                    do {
                        iVar1 = *(uVar3 + 0x58);
                        cVar5 = *(iVar1 + 9 + uVar6 * 0xc);
                        if ((cVar5 != '\0') && (uVar4 = 0, cVar5 != '\0')) {
                            do {
                                arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                                fcn.00012d38(arg1,arg2,CONCAT71(in_R8,*(iVar1 + 8 + uVar6 * 0xc) + uVar4));
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < *(iVar1 + 9 + uVar6 * 0xc));
                        }
                        uVar4 = uVar6 + 1;
                        uVar6 = uVar4;
                    } while (uVar4 < *(uVar3 + 0x200));
                }
                *(*0x2afc0 + 0x6c3) = 0;
                *(*0x2afc0 + 0x5ad) = 0;
                fcn.000204d0(arg1);
                goto code_r0x0001f881;
            }
        }
        uVar2 = 0xff;
    }
    return uVar2;
}


/* fcn.0001fd80 @ 0x1fd80 */

ulong fcn.0001fd80(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    unkbyte7 Var5;
    uint8_t uVar6;
    uint8_t uVar7;
    int64_t in_R8;
    
    if (*(*0x2afc0 + 0x5ad) == '\x01') {
        return 0;
    }
    *(*0x2afc0 + 0x5ad) = 1;
    uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((uVar4 & 1) != 0) {
        return 0xff;
    }
    (**(*0x2a900 + 0xf8))(100000);
    do {
        uVar6 = 0;
        uVar7 = 1;
        if (*(arg2 + 0xf) == '\0') break;
        do {
            uVar4 = (uVar7 + 0x3f) * 0x10 + *(arg1 + 0x4a);
            uVar2 = fcn.00029860(arg1,uVar4);
            Var5 = uVar4 >> 8;
            if ((uVar2 >> 0x11 & 1) == 0) {
                in_R8 = 0;
                fcn.00020c4c(arg1,CONCAT71(Var5,uVar7),0);
            }
            else {
                in_R8 = CONCAT71(in_R8 >> 8,uVar7);
                fcn.00012d38(arg1,CONCAT71(Var5,*arg1) | 0x80,in_R8);
                uVar6 = 1;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 <= *(arg2 + 0xf));
    } while (uVar6 != 0);
    bVar1 = false;
    uVar2 = 1;
    if (*(arg2 + 0xf) != '\0') {
        do {
            uVar3 = fcn.00029860(arg1,(uVar2 + 0x3f) * 0x10 + *(arg1 + 0x4a));
            if ((uVar3 >> 0x11 & 1) != 0) {
                bVar1 = true;
            }
            uVar7 = uVar2 + 1;
            uVar2 = uVar7;
        } while (uVar7 <= *(arg2 + 0xf));
        if (bVar1) goto code_r0x0001fe95;
    }
    fcn.000298a8(arg1,*(arg1 + 0x4a) + 4,0x10);
code_r0x0001fe95:
    *(*0x2afc0 + 0x5ad) = 0;
    return 0;
}


/* fcn.000203fc @ 0x203fc */

void fcn.000203fc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (((*(iVar3 + 100) == 0x1b73) && ((*(iVar3 + 0x66) == 0x1000 || (*(iVar3 + 0x66) == 0x1009)))) ||
       (*(iVar3 + 100) == -0x7f7a)) {
        uVar2 = fcn.00029860(arg2,(*(arg3 + 3) + 0x3f) * 0x10 + *(arg2 + 0x4a));
        if ((uVar2 & 1) == 0) {
            uVar4 = 1;
            iVar3 = *0x2afc0;
            if (1 < *(*0x2afc0 + 0x716)) {
                do {
                    puVar5 = uVar4 * 0x1c0 + *(*0x2a8b8 + 0x42);
                    uVar1 = *puVar5;
                    if (((((uVar1 & 3) == 3) && (puVar5[3] == (*arg2 | 0x80))) && (*(puVar5 + 0xd) == *(arg3 + 3))) &&
                       ((uVar1 & 0x20) == 0)) {
                        *puVar5 = uVar1 | 0x80;
                        iVar3 = *0x2afc0;
                    }
                    uVar2 = uVar4 + 1;
                    uVar4 = uVar2;
                } while (uVar2 < *(iVar3 + 0x716));
            }
        }
    }
    return;
}


/* fcn.00020168 @ 0x20168 */

void fcn.00020168(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t arg2_00;
    int64_t *piVar11;
    int64_t iVar12;
    ulong in_R9;
    ulong uVar13;
    uint8_t uVar14;
    ulong *puVar15;
    
    if (*(arg3 + 0xb) - 0xbU < 2) {
        return;
    }
    uVar7 = 0x20;
    uVar1 = *(arg3 + 0xf);
    iVar5 = *(arg1 + 0x1c);
    uVar2 = *(arg3 + 0xe);
    puVar15 = (*(arg1 + 0x80) - *(arg1 + 0x88)) + *arg3;
    uVar14 = uVar2 & 0x1f;
    arg2_00 = (uVar1 * 0x20 + -0x20 + (uVar14 - 1)) * 0x20 + *(arg1 + 0xd8);
    if ((*(puVar15 + 0xc) & 0xfc00) == 0x1400) {
        fcn.00020038(arg1,arg3,puVar15,CONCAT71(in_R9 >> 8,uVar1));
        return;
    }
    iVar12 = arg3;
    iVar9 = fcn.00023868(*puVar15,0x18);
    uVar8 = 0;
    if (iVar9 == 0) {
        return;
    }
    uVar3 = *(arg3 + 0xb);
    if (uVar3 == 1) {
code_r0x000202a1:
        if (((*(iVar9 + 0x15) - 1U < 0x32) && (*(iVar9 + 0x20) != 0)) &&
           (pcVar6 = *((*(iVar9 + 0x15) - 1) * 8 + 0x2a980), pcVar6 != NULL)) {
            if (*(*0x2afc0 + 0x6c4) == '\0') {
                piVar11 = arg1 + 0x100;
                do {
                    if (*piVar11 == 0) break;
                    uVar8 = uVar8 + 1;
                    piVar11 = piVar11 + 2;
                } while (uVar8 < 0x10);
                if (uVar8 != 0x10) {
                    *(arg1 + (uVar8 + 0x10) * 0x10) = puVar15;
                    *(arg1 + 0x108 + uVar8 * 0x10) = *(iVar9 + 0x132) - *(arg3 + 8);
                    return;
                }
            }
            (*pcVar6)(arg2,iVar9,0,*(iVar9 + 0x20),*(iVar9 + 0x132) - *(arg3 + 8));
        }
    }
    else {
        if (uVar3 < 3) goto code_r0x00020347;
        if ((4 < uVar3) && (uVar3 != 6)) {
            if (uVar3 == 0xd) goto code_r0x000202a1;
            if (uVar3 != 0x24) goto code_r0x00020347;
        }
        iVar12 = CONCAT71(iVar12 >> 8,*(iVar9 + 0xd));
        uVar13 = 0;
        uVar7 = fcn.00011f84(arg2,*(iVar9 + 0xc),iVar12,0);
        if (uVar7 == 0xff) {
            uVar7 = 0;
        }
        if ((uVar7 & 0x20) == 0) {
            return;
        }
        fcn.0001ff40(arg1,arg2,CONCAT71(iVar12 >> 8,uVar1),CONCAT71(uVar13 >> 8,uVar2) & 0xffffffffffffff1f);
    }
code_r0x00020347:
    if ((((uVar7 & 0x20) != 0) && (*(iVar9 + 0x20) != 0)) &&
       ((uVar10 = fcn.00029860(arg2,*(arg2 + 0x4a) + 4), (uVar10 & 1) == 0 &&
        (puVar15 = fcn.0001f89c(arg2,arg2_00), puVar15 != NULL)))) {
        *(puVar15 + 0xc) = *(puVar15 + 0xc) & 0xffff07ff;
        *(puVar15 + 0xc) = *(puVar15 + 0xc) | 0x400;
        uVar7 = *(puVar15 + 0xc) | 0x24;
        *puVar15 = *(iVar9 + 0x18);
        uVar4 = *(iVar9 + 0x132);
        *(puVar15 + 0xc) = uVar7;
        *(puVar15 + 1) = uVar4 | *(puVar15 + 1) & 0xfffe0000;
        *(puVar15 + 0xc) = (*(arg2_00 + 0x1c) ^ uVar7) & 1 ^ uVar7;
        fcn.000298a8(arg2,iVar5 + uVar1 * 4,uVar14);
    }
    return;
}


/* fcn.000237f0 @ 0x237f0 */

uint64_t fcn.000237f0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ulong in_RAX;
    uint64_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *(arg1 + 0x51);
    uVar3 = CONCAT71(in_RAX >> 8,uVar1);
    if (uVar1 != 0) {
        uVar5 = *(arg1 + 0x50) & 0xff;
        uVar6 = arg2 & 0xff;
        if ((uVar5 <= uVar6) && (uVar5 = uVar1 + uVar5, uVar3 = uVar5, uVar6 < uVar5)) {
code_r0x00023816:
            return CONCAT71(uVar3 >> 8,1);
        }
    }
    uVar1 = *(arg1 + 0x200);
    if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
        do {
            uVar2 = *(*(arg1 + 0x58) + 9 + uVar4 * 0xc);
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar5 = *(*(arg1 + 0x58) + 8 + uVar4 * 0xc) & 0xff;
                uVar6 = arg2 & 0xff;
                if ((uVar5 <= uVar6) && (uVar5 = uVar2 + uVar5, uVar3 = uVar5, uVar6 < uVar5)) goto code_r0x00023816;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.000233c8 @ 0x233c8 */

char fcn.000233c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t arg1_01;
    uint32_t *puVar1;
    uchar auVar2 [16];
    uchar auVar3 [16];
    uchar uVar4;
    char cVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint8_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint16_t auStackX_8 [4];
    uint8_t auStackX_18 [16];
    
    uVar13 = arg3;
    arg1_00 = *(arg1 + 0x60);
    uVar16 = arg3 & 0xff;
    uVar14 = *(arg1_00 + 0x79);
    arg1_01 = *(arg1_00 + 0xf0);
    iVar15 = ((uVar16 - 1) * uVar14 * 0x20 & 0xffffffff) + *(arg1_00 + 0xe8);
    if ((*(iVar15 + 0xc) & 0xf8000000) < 0x10000000) {
        uVar8 = *(arg1_00 + 0x79) * 0x21;
        uVar10 = uVar8;
        auStackX_18[0] = uVar13;
        if (uVar8 != 0) {
            fcn.000102c0(arg1_01,uVar10);
        }
        *(arg1_01 + 4) = 3;
        puVar12 = *(arg1_00 + 0x79) + arg1_01;
        *puVar12 = *puVar12 & 0x7f00000;
        *puVar12 = *puVar12 | 0x8000000;
        uVar8 = *puVar12;
        uVar4 = fcn.00022f24(arg2,uVar10,uVar14);
        *(puVar12 + 6) = uVar4;
        if (*(arg2 + 0xe) == 0) {
            uVar8 = uVar8 & 0xff3fffff | 0x300000;
            uVar10 = 0;
code_r0x000234ba:
            *puVar12 = uVar8;
        }
        else {
            uVar9 = *(arg2 + 0xe);
            if (uVar9 == 1) {
                uVar8 = uVar8 & 0xff2fffff | 0x200000;
                uVar10 = 0;
                goto code_r0x000234ba;
            }
            if (uVar9 == 2) {
                uVar8 = uVar8 & 0xff1fffff | 0x100000;
                uVar10 = 0;
                goto code_r0x000234ba;
            }
            uVar9 = uVar9 - 4;
            uVar10 = uVar9;
            if (uVar9 == 0) {
                uVar8 = uVar8 & 0xff4fffff | 0x400000;
                goto code_r0x000234ba;
            }
            if (uVar9 == 0x3c) {
                uVar8 = uVar8 & 0xff5fffff | 0x500000;
                goto code_r0x000234ba;
            }
        }
        uVar11 = 0;
        iVar6 = fcn.000133f0(CONCAT71(uVar10 >> 8,0x10),0,CONCAT71(uVar14 >> 8,*(arg2 + 0xc)),0);
        if (iVar6 == 0) {
code_r0x0002359b:
            uVar8 = *(*(arg1_00 + 0x79) + iVar15) & 7;
            if (uVar8 == 0) {
                iVar6 = fcn.000229ec(arg1_00,CONCAT71(uVar11 >> 8,uVar13),0);
            }
            else {
                if ((uVar8 != 1) && (uVar8 != 3)) goto code_r0x00023421;
                iVar6 = (uVar16 * 0x20 + -0x20) * 0x20 + *(arg1_00 + 0xd8);
            }
            if (iVar6 == 0) goto code_r0x00023421;
            uVar10 = *(arg1_00 + 0x79);
            puVar1 = arg1_01 + 4 + uVar10 * 2;
            *puVar1 = *puVar1 & 0xffffffe7;
            puVar1 = arg1_01 + 4 + uVar10 * 2;
            *puVar1 = *puVar1 | 0x20;
            *(arg1_01 + 6 + uVar10 * 2) = *(arg2 + 0x10);
            uVar13 = *(iVar6 + 0x1c);
            uVar14 = *(iVar6 + 0x14);
            puVar1 = arg1_01 + 4 + uVar10 * 2;
            *puVar1 = *puVar1 | 6;
            *(arg1_01 + 8 + uVar10 * 2) = uVar13 | uVar14;
            *(arg1_01 + 0x10 + uVar10 * 2) = 8;
            if ((((*puVar12 & 0xf00000) - 0x400000 & 0xffefffff) == 0) || (0x7ffffff < *(iVar15 + 0xc))) {
                auStackX_8[0] = 0;
            }
            else {
                auStackX_8[0] = 0x100;
            }
            auStackX_8[0] = uVar16 | auStackX_8[0];
            cVar5 = fcn.0001fb48(arg1,0xb,auStackX_8);
            if (cVar5 != '\0') {
                fcn.0001fb48(arg1,10,auStackX_18);
                *(*(arg1_00 + 0x80) + 8 + (auStackX_18[0] - 1) * 8) = 0;
                return cVar5;
            }
        }
        else {
            puVar1 = *(iVar6 + 0xf8);
            if ((*(arg1_00 + 0xe8) <= puVar1) &&
               (puVar1 <= *(arg1_00 + 0xc) * *(arg1_00 + 0x79) * 0x20 + *(arg1_00 + 0xe8))) {
                uVar7 = *(arg2 + 0xd);
                if (0xf < *(arg2 + 0xd)) {
                    uVar7 = 0xf;
                }
                uVar8 = ((uVar7 << ((*(iVar6 + 0x100) & 7) << 2) | *puVar1) ^ *puVar12) & 0xfffff;
                uVar11 = uVar8;
                *puVar12 = *puVar12 ^ uVar8;
                if (((*puVar12 & 0xf00000) - 0x100000 & 0xffefffff) == 0) {
                    if ((*puVar1 & 0xf00000) == 0x300000) {
                        auVar2 = ZEXT116(*(arg1_00 + 0x79)) << 5;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = *(iVar6 + 0xf8) - *(arg1_00 + 0xe8);
                        uVar11 = SUB168(auVar3 % auVar2,0);
                        *(puVar12 + 2) = SUB161(auVar3 / auVar2,0) + '\x01';
                        uVar4 = *(arg2 + 0xd);
                    }
                    else {
                        *(puVar12 + 2) = puVar1[2];
                        uVar4 = puVar1[2] >> 8;
                    }
                    *(puVar12 + 9) = uVar4;
                    *puVar12 = *puVar12 ^ (*puVar1 ^ *puVar12) & 0x2000000;
                }
                goto code_r0x0002359b;
            }
        }
        cVar5 = '\0';
    }
    else {
code_r0x00023421:
        cVar5 = -1;
    }
    return cVar5;
}


/* fcn.000236ac @ 0x236ac */

char fcn.000236ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    uint8_t uVar4;
    
    uVar4 = arg3;
    fcn.000298a8(arg2,*(arg1 + 0x1c) + uVar4 * 4,arg4 & 0xffU);
    uVar2 = 0;
    if (uVar4 == 0) {
        cVar1 = -1;
    }
    else {
        puVar3 = ((uVar4 - 1) * *(arg1 + 0x79) * 0x20 & 0xffffffff) + (arg4 & 0xffU) * *(arg1 + 0x79) + *(arg1 + 0xe8);
        do {
            if ((*puVar3 & 7) == 1) break;
            (**(*0x2a900 + 0xf8))(1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 10000);
        cVar1 = -((*puVar3 & 7) != 1);
    }
    return cVar1;
}


/* fcn.00023240 @ 0x23240 */

//WARNING: Variable defined which should be unmapped: var_fh

uchar fcn.00023240(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uchar auVar3 [16];
    uchar uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t *puVar8;
    uint8_t uVar9;
    int32_t var_fh;
    int16_t aiStackX_20 [4];
    int64_t iStack_28;
    uint32_t uStack_1c;
    
    uVar4 = 0;
    iVar5 = fcn.0001b874(arg1);
    if (((-1 < iVar5) && ((*(arg1 + 0x58) & 1) != 0)) &&
       (uVar6 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4), (uVar6 & 1) == 0)) {
        iVar5 = *(arg1 + 0x60);
        uVar6 = *(arg2 + 0xf8);
        uVar2 = *(iVar5 + 0xe8);
        if (uVar2 <= uVar6) {
            uVar1 = *(iVar5 + 0x79);
            if (uVar6 <= *(iVar5 + 0xc) * uVar1 * 0x20 + uVar2) {
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar6 - uVar2;
                uVar9 = SUB161(auVar3 / (ZEXT116(uVar1) << 5),0) + 1;
                uVar7 = arg3;
                if (uVar7 == 0) {
                    uVar7 = 1;
                }
                else {
                    uVar7 = (uVar7 & 0xf) * '\x02' - (uVar7 >> 7);
                }
                puVar8 = uVar7 * uVar1 + uVar6;
                if ((*puVar8 & 7) == 1) {
                    aiStackX_20[0] = uVar7 * 0x100 + uVar9;
                    uVar4 = fcn.0001fb48(arg1,0xf,aiStackX_20);
                }
                if ((*puVar8 & 7) - 3 < 2) {
                    iVar5 = (uVar9 * 0x20 + -0x20 + (uVar7 - 1)) * 0x20 + *(iVar5 + 0xd8);
                    iStack_28 = *(iVar5 + 0x1c) + *(iVar5 + 0x14);
                    uStack_1c = CONCAT11(uVar9,uVar7) << 0x10 | uStack_1c & 0xe0ffff;
                    uVar4 = fcn.0001fb48(arg1,0x10,&iStack_28);
                }
                return uVar4;
            }
        }
    }
    return 0xff;
}


/* fcn.00021520 @ 0x21520 */

void fcn.00021520(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint32_t *puVar4;
    ushort auStackX_10 [4];
    
    iVar2 = *(arg1 + 0x60);
    uVar1 = *(iVar2 + 0x79);
    puVar4 = (((arg2 & 0xffU) - 1) * uVar1 * 0x20 & 0xffffffff) + *(iVar2 + 0xe8);
    if (((*puVar4 & 0xf00000) == 0x100000) && (uVar3 = arg3 & 0xff, *(uVar1 + 6 + puVar4) != uVar3)) {
        if (uVar1 * 0x21 != 0) {
            fcn.000102c0(*(iVar2 + 0xf0),uVar1 * 0x21);
        }
        *(*(iVar2 + 0xf0) + 4) = 2;
        *(*(iVar2 + 0xf0) + 6 + *(iVar2 + 0x79) * 2) = uVar3;
        auStackX_10[0] = arg2 & 0xffU;
        fcn.0001fb48(arg1,0xd,auStackX_10);
    }
    return;
}


/* fcn.0001fec0 @ 0x1fec0 */

uchar fcn.0001fec0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int16_t aiStackX_18 [8];
    
    uVar1 = 0;
    if ((*((((arg3 & 0xffU) - 1) * *(arg1 + 0x79) * 0x20 & 0xffffffff) + (arg4 & 0xffU) * *(arg1 + 0x79) +
          *(arg1 + 0xe8)) & 7) == 2) {
        aiStackX_18[0] = arg4 * 0x100 + (arg3 & 0xff);
        uVar1 = fcn.0001fb48(arg2,0xe,aiStackX_18);
    }
    return uVar1;
}


/* fcn.00021ee0 @ 0x21ee0 */

void fcn.00021ee0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    ulong in_stack_00000028;
    uint16_t in_stack_00000030;
    uint32_t *in_stack_00000038;
    
    *(arg2 + 8) = *(arg2 + 8) & 0xfffe0000;
    *(arg2 + 0xc) = *(arg2 + 0xc) & 0xfffffffe;
    uVar3 = arg3 & 0xffff;
    *(arg2 + 0xc) = *(arg2 + 0xc) | arg4 & 1;
    *(arg2 + 8) = *(arg2 + 8) | uVar3;
    uVar1 = *(arg2 + 8);
    *arg2 = in_stack_00000028;
    if (*(CONCAT44(in_register_0000000c,arg1) + 10) < 0x100) {
        uVar2 = *in_stack_00000038 >> 10;
        if (0x1f < uVar2) {
            uVar2 = 0x1f;
        }
        *in_stack_00000038 = *in_stack_00000038 - uVar3;
    }
    else {
        *in_stack_00000038 = *in_stack_00000038 - uVar3;
        uVar2 = *in_stack_00000038 / in_stack_00000030;
        if (0x1f < uVar2) {
            uVar2 = 0x1f;
        }
        *(arg2 + 0xc) = *(arg2 + 0xc) | 0x200;
    }
    *(arg2 + 8) = (uVar2 << 0x11 ^ uVar1) & 0x3e0000 ^ uVar1;
    return;
}


/* fcn.000229ec @ 0x229ec */

int64_t fcn.000229ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    int iVar1;
    
    iVar1 = (arg2 & 0xff) * 0x20;
    arg2_00 = (iVar1 + -0x20 + (arg3 & 0xffU)) * 0x20 + *(arg1 + 0xd8);
    fcn.00023758(arg1,arg2_00,(((arg3 & 0xff) - 0x20) + iVar1) * 0x40 * 0x10 + *(arg1 + 0xe0),0x40);
    return arg2_00;
}


/* fcn.00022f24 @ 0x22f24 */

uchar fcn.00022f24(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    char cVar3;
    
    cVar3 = *(arg1 + 0xc);
    if (-1 < cVar3) {
        do {
            uVar2 = 1;
            while( true ) {
                if (*(*0x2afc0 + 0x716) <= uVar2) {
                    return 0;
                }
                iVar1 = *(*0x2a8b8 + 0x42);
                arg1 = uVar2 * 0x1c0;
                if (((*(iVar1 + arg1) & 3) == 3) && (*(iVar1 + 10 + arg1) == cVar3)) break;
                uVar2 = uVar2 + 1;
            }
            arg1 = arg1 + iVar1;
            cVar3 = *(arg1 + 0xc);
        } while (-1 < cVar3);
    }
    return *(arg1 + 0xd);
}


/* fcn.00023a0c @ 0x23a0c */

void fcn.00023a0c(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t auStackX_8 [2];
    
    *(arg1 + 0x5d) = 0;
    uVar4 = *(arg1 + 0x50) >> 0x14;
    uVar3 = uVar4 & 0xf;
    if ((((uVar4 & 0xf) != 0) && (uVar3 <= (*(arg1 + 0x50) & 0xf))) &&
       (uVar4 = fcn.000297b4(arg1,4), (uVar4 >> 0x14 & 1) != 0)) {
        uVar4 = fcn.000297b4(arg1,0x34);
        cVar1 = uVar4;
        while ((cVar1 != '\0' && (uVar4 = fcn.000297b4(arg1,uVar4 & 0xff), uVar4 != '\n'))) {
            cVar1 = uVar4 >> 8;
            uVar4 = uVar4 >> 8;
        }
        if (uVar4 != '\0') {
            auStackX_8[0] = 0;
            iVar2 = (**(*(arg1 + 0x80) + 0x10))
                              (*(arg1 + 0x80),2,(uVar4 >> 0x1d) - 1,uVar4 >> 0x10 & 0x1fff,1,auStackX_8);
            if (iVar2 < 0) {
                auStackX_8[0] = 0xffffffff;
            }
            if ((auStackX_8[0] >> 0x1c & 1) != 0) {
                *(arg1 + 0x5d) = uVar3;
            }
        }
    }
    return;
}


/* fcn.00026694 @ 0x26694 */

ulong fcn.00026694(uint32_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if (*(arg1_00 + 0x5d) == '\0') {
        uVar1 = fcn.00029860(arg1_00,*(arg1_00 + 0x4a) + 4);
        if ((uVar1 >> 0xc & 1) != 0) {
            fcn.0001ba18(arg1_00,0,2);
            do {
                uVar3 = fcn.00029860(arg1_00,*(arg1_00 + 0x4a));
                if ((uVar3 & 2) == 0) goto code_r0x000266a9;
                (**(*0x2a900 + 0xf8))(100);
                uVar4 = uVar4 + 1;
            } while (uVar4 < 500);
        }
        if (*(*0x2afc0 + 100) < 0x30) {
            *(*0x2afc0 + 4 + *(*0x2afc0 + 100) * 2) = 0x24;
            *(*0x2afc0 + 100) = *(*0x2afc0 + 100) + '\x01';
        }
        uVar2 = 0xff;
    }
    else {
code_r0x000266a9:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00026730 @ 0x26730 */

uint64_t fcn.00026730(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    piVar1 = fcn.00012f1c(1);
    if (piVar1 != NULL) {
        *(arg1 + 0x40) = piVar1;
        fcn.00026a90(arg1);
        iVar2 = fcn.00012f1c(4);
        if (iVar2 != 0) {
            *piVar1 = iVar2;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x18) = 0;
            *(iVar2 + 4) = 0;
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x20) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0x28) = 0;
            *(iVar2 + 0x2c) = 0;
            *(iVar2 + 0x10) = 1;
            *(iVar2 + 0x14) = 1;
            *(iVar2 + 8) = 0x40000000;
            *(iVar2 + 0x5a) = 0;
            *(*piVar1 + 0x10) = 1;
            *(*piVar1 + 0x14) = 1;
            *(*piVar1 + 4) = 0x402000;
            **piVar1 = 1;
            *(*piVar1 + 0x18) = 0x40;
            *(*piVar1 + 0x6f) = 1;
            uVar3 = fcn.00026b64(arg1,*piVar1);
            return uVar3 & 0xffffffffffffff00;
        }
    }
    return 0xff;
}


/* fcn.00023e70 @ 0x23e70 */

uchar fcn.00023e70(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    
    uVar2 = 0;
    if (*(arg1 + 0x5c) != 0) {
        uVar3 = fcn.000297b4(arg1,*(arg1 + 0x5c));
        uVar1 = uVar3 & 0xfffeffff | 0x10000;
        if (arg2 == '\0') {
            uVar1 = uVar3 & 0xfffeffff;
        }
        uVar3 = uVar1 & 0xfeffffff;
        if ((**0x2afc0 & 2) == 0) {
            uVar3 = uVar1;
        }
        fcn.000297f8(arg1,*(arg1 + 0x5c),uVar3);
        fcn.000297f8(arg1,*(arg1 + 0x5c) + 4,0xe0002000);
        uVar2 = *(arg1 + 0x5c);
    }
    return uVar2;
}


/* fcn.000297f8 @ 0x297f8 */

void fcn.000297f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x80) + 0x38))(*(arg1 + 0x80),2,arg2 & 0xffffffff,1,auStackX_18);
    return;
}


/* fcn.00023ff0 @ 0x23ff0 */

uint64_t fcn.00023ff0(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    
    uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a));
    uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if (((uVar1 & 0x10) == 0) || ((uVar2 >> 0xe & 1) != 0)) {
        if ((*(arg1 + 0xa8) == 0) || (*(arg1 + 0xb0) == 0)) {
            uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 0x14);
            bVar3 = *(arg1 + 0x10) == (uVar1 & 0xfffff000);
        }
        else {
            uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 0x14);
            bVar3 = *(arg1 + 0xa8) == (uVar1 & 0xfffff000);
        }
        uVar2 = 0xfffff000;
        if (!bVar3) {
            return 0xfffff0ff;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.000269ac @ 0x269ac */

ulong fcn.000269ac(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    
    uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((uVar1 >> 0xf & 1) != 0) {
        fcn.0001ba5c(arg1,0,0x20);
        uVar3 = 0;
        uVar2 = 0;
        do {
            uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
            if ((uVar1 >> 0xf & 1) == 0) break;
            (**(*0x2a900 + 0xf8))(10);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 1000);
        uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        if ((uVar1 >> 0xf & 1) != 0) {
            fcn.0001ba5c(arg1,0,1);
            do {
                uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                if ((uVar1 >> 0xc & 1) != 0) {
                    return 0xff;
                }
                (**(*0x2a900 + 0xf8))(0x7d);
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x10);
            return 0xff;
        }
    }
    return 0;
}


/* fcn.0002686c @ 0x2686c */

uint fcn.0002686c(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    
    fcn.0001ba5c(arg1,0,0x10);
    uVar2 = 0;
    do {
        uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        if ((uVar1 >> 0xe & 1) == 0) break;
        (**(*0x2a900 + 0xf8))(10);
        uVar2 = uVar2 + 1;
    } while (uVar2 < 1000);
    uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    return CONCAT31(-(uVar1 & 0x4000) >> 8,-((uVar1 & 0x4000) != 0));
}


/* fcn.000268e0 @ 0x268e0 */

ulong fcn.000268e0(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    
    fcn.0001ba18(arg1,0,0x20);
    uVar4 = 0;
    uVar3 = 0;
    do {
        uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        if ((uVar1 >> 0xf & 1) != 0) break;
        (**(*0x2a900 + 0xf8))(10);
        uVar3 = uVar3 + 1;
    } while (uVar3 < 1000);
    uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    if ((uVar1 >> 0xf & 1) == 0) {
        fcn.0001ba5c(arg1,0,1);
        do {
            uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
            if ((uVar1 >> 0xc & 1) != 0) break;
            (**(*0x2a900 + 0xf8))(0x7d);
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x10);
        uVar2 = 0xff;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000267f8 @ 0x267f8 */

uint fcn.000267f8(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    
    fcn.0001ba18(arg1,0,0x10);
    uVar2 = 0;
    do {
        uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        if ((uVar1 >> 0xe & 1) != 0) break;
        (**(*0x2a900 + 0xf8))(10);
        uVar2 = uVar2 + 1;
    } while (uVar2 < 1000);
    uVar1 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
    return CONCAT31(-(uVar1 & 0x4000) >> 8,~-((uVar1 & 0x4000) != 0));
}


/* fcn.000246c0 @ 0x246c0 */

void fcn.000246c0(int64_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    if (*(arg1 + 0x5c) == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = fcn.000297b4(arg1,*(arg1 + 0x5c));
    }
    *(arg1 + 0x58) = *(arg1 + 0x58) | 0x20;
    if ((uVar1 >> 0x18 & 1) == 0) {
        **0x2afc0 = **0x2afc0 | 1;
        uVar4 = 1;
        puVar5 = *0x2afc0;
        if (1 < *(*0x2afc0 + 0x716)) {
            do {
                puVar2 = uVar4 * 0x1c0 + *(*0x2a8b8 + 0x42);
                if (((((*puVar2 & 3) == 3) && (arg1_00 = *(*0x2a8c8 + (puVar2[0xb] - 1) * 8), *(arg1_00 + 1) == '\x10')
                     ) && ((*puVar2 & 1) != 0)) && (((*(arg1_00 + 0x2a) ^ *(arg1 + 0x2a)) & 0xfff8) == 0)) {
                    fcn.00012b74(arg1_00,CONCAT71(puVar2 >> 8,puVar2[0xc]),CONCAT71(puVar5 >> 8,puVar2[0xd]));
                    puVar5 = *0x2afc0;
                }
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
            } while (uVar3 < *(puVar5 + 0x716));
        }
        fcn.00023ae0(arg1);
    }
    else {
        **0x2afc0 = **0x2afc0 & 0xfffffffe;
        fcn.00024088(arg1);
    }
    *(arg1 + 0x58) = *(arg1 + 0x58) & 0xffffffdf;
    return;
}


/* fcn.00023ae0 @ 0x23ae0 */

ulong fcn.00023ae0(int64_t arg1)

{
    bool bVar1;
    uchar uVar2;
    char cVar3;
    ushort uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    
    uVar11 = 0;
    bVar1 = false;
    iVar8 = fcn.0001b874(arg1);
    if ((-1 < iVar8) && (uVar5 = fcn.000297b4(arg1,8), (uVar5 & 0xffffff00) == 0xc032000)) {
        uVar9 = fcn.000297b4(arg1,0x10);
        *(arg1 + 0x18) = uVar9 & 0xfffffff0;
        uVar6 = fcn.00029860(arg1,4);
        *(arg1 + 0x50) = uVar6;
        *(arg1 + 0x28) = uVar6 & 0xf;
        fcn.00023a0c(arg1);
        uVar2 = fcn.00029860(arg1,0);
        *(arg1 + 0x4a) = uVar2;
        uVar5 = fcn.00029860(arg1,8);
        *(arg1 + 0x54) = uVar5;
        uVar12 = 1;
        *(arg1 + 0x5c) = 0;
        if (((*(*0x2afc0 + 0x6c9) >> 0x12 & 1) == 0) && ((uVar5 & 1) != 0)) {
            if ((*0x2afc0)[0x19] < 0x30) {
                *(*0x2afc0 + (*0x2afc0)[0x19] * 2 + 4) = 0x8105;
                *(*0x2afc0 + 0x19) = (*0x2afc0)[0x19] + '\x01';
            }
        }
        else if ((((*(*0x2afc0 + 0x6c9) & 0x200) != 0) || (*(*(*0x2a8b8 + 0x3aa) + 0x2e) != '\0')) ||
                ((*(arg1 + 0x50) & 0xf000) == 0)) {
            uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
            if ((uVar5 & 0x1000) == 0) {
                fcn.0001ba5c(arg1,0,1);
                uVar5 = uVar11;
                do {
                    uVar7 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                    if ((uVar7 & 0x1000) != 0) break;
                    (**(*0x2a900 + 0xf8))(0x7d);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < 0x10);
            }
            cVar3 = fcn.00026694(arg1);
            if (cVar3 == -1) {
                return 0xff;
            }
            uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a));
            uVar5 = uVar5 >> 2 & 3;
            if (uVar5 == 0) {
                uVar4 = 0x400;
            }
            else {
                if (uVar5 == 1) {
                    *(arg1 + 0x48) = 0x200;
                    goto code_r0x00023c99;
                }
                if (uVar5 != 2) {
                    return 0xff;
                }
                uVar4 = 0x100;
            }
            *(arg1 + 0x48) = uVar4;
code_r0x00023c99:
            uVar10 = 0;
            iVar8 = *(arg1 + 0x10);
            *(arg1 + 0x4c) = 0x4000;
            if (*(arg1 + 0x48) != 0) {
                do {
                    uVar9 = uVar10;
                    uVar10 = uVar10 + 1;
                    *(iVar8 + uVar9 * 4) = 1;
                } while (uVar10 < *(arg1 + 0x48));
            }
            if ((*(arg1 + 0xa8) == 0) || (*(arg1 + 0xb0) == 0)) {
                uVar5 = *(arg1 + 0x10);
            }
            else {
                uVar5 = *(arg1 + 0xa8);
            }
            fcn.000298a8(arg1,*(arg1 + 0x4a) + 0x14,uVar5);
            fcn.00026730(arg1);
            uVar9 = *(arg1 + 0x4a) + 4;
            fcn.000298a8(arg1,uVar9,0x3f);
            if (*(arg1 + 0x5c) != '\0') {
                fcn.00023e70(arg1,CONCAT71(uVar9 >> 8,1));
                fcn.000297f8(arg1,*(arg1 + 0x5c) + 4,0x2005);
            }
            fcn.0001ba18(arg1,0,0x11);
            uVar5 = uVar11;
            do {
                uVar7 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                if ((uVar7 & 0x1000) == 0) break;
                (**(*0x2a900 + 0xf8))(100);
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x14);
            if (((*(arg1 + 0x50) & 0x10) != 0) && (uVar9 = 0x44, *(arg1 + 0x28) != '\0')) {
                do {
                    if (((*(arg1 + 0x5d) == '\0') || (*(arg1 + 0x5d) != uVar12)) &&
                       (uVar5 = fcn.00029860(arg1,*(arg1 + 0x4a) + uVar9), (uVar5 & 0x1000) == 0)) {
                        fcn.0001ba18(arg1,uVar9,0x1000);
                        bVar1 = true;
                    }
                    uVar12 = uVar12 + 1;
                    uVar9 = uVar9 + 4;
                } while (uVar12 <= *(arg1 + 0x28));
                if (bVar1) {
                    (**(*0x2a900 + 0xf8))(20000);
                }
            }
            *(arg1 + 0x58) = *(arg1 + 0x58) | 1;
            if (-1 < **0x2afc0) {
                **0x2afc0 = **0x2afc0 | 0x80;
            }
            fcn.0001ba18(arg1,0x40,1);
            if ((*(arg1 + 0x58) & 0x40) == 0) {
                (**(*0x2a900 + 0xf8))(100);
            }
            else {
                do {
                    uVar9 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                    if ((uVar9 & 4) != 0) {
                        return 0;
                    }
                    (**(*0x2a900 + 0xf8))(100);
                    uVar11 = uVar11 + 1;
                } while (uVar11 < 0x32);
            }
            return 0;
        }
        fcn.0001ba5c(arg1,0x40,1);
    }
    return 0xff;
}


/* fcn.00023ee8 @ 0x23ee8 */

ulong fcn.00023ee8(int64_t arg1)

{
    uchar uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    iVar3 = fcn.0001b874(arg1);
    if ((-1 < iVar3) && ((*(arg1 + 0x58) & 1) != 0)) {
        uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        if ((uVar2 >> 0xc & 1) == 0) {
            uVar1 = *arg1;
            if (*(*0x2afc0 + 0x5ad) == '\0') {
                *(*0x2afc0 + 0x6c3) = 1;
                *(*0x2afc0 + 0x5ad) = 1;
                do {
                    iVar3 = 0;
                    uVar4 = *(arg1 + 0x4a) + 4;
                    fcn.000298a8(arg1,uVar4,4);
                    uVar5 = 1;
                    if (*(arg1 + 0x28) != '\0') {
                        do {
                            if ((*(arg1 + 0x5d) == 0) || (*(arg1 + 0x5d) != uVar5)) {
                                iVar3 = CONCAT71(iVar3 >> 8,uVar5);
                                uVar4 = CONCAT71(uVar4 >> 8,uVar1) | 0x80;
                                fcn.00012d38(arg1,uVar4,iVar3);
                            }
                            uVar5 = uVar5 + 1;
                        } while (uVar5 <= *(arg1 + 0x28));
                    }
                    uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                } while ((uVar4 & 4) != 0);
                *(*0x2afc0 + 0x6c3) = 0;
                *(*0x2afc0 + 0x5ad) = 0;
            }
            fcn.000298a8(arg1,*(arg1 + 0x4a) + 8,5);
            return 0;
        }
    }
    return 0xff;
}


/* fcn.00026f7c @ 0x26f7c */

void fcn.00026f7c(int64_t arg1)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    uint *puVar11;
    int64_t iVar12;
    uint16_t uVar13;
    uint32_t uVar14;
    uint64_t uStackX_8;
    int64_t var_30h;
    
    puVar11 = NULL;
    uStackX_8 = 0;
    uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + 0xc);
    puVar1 = *0x2afc0;
    uVar14 = 1;
    iVar6 = *(arg1 + 0x10);
    uVar13 = uVar3 >> 3 & *(arg1 + 0x48) - 1U;
    iVar12 = -0x7ffffffffffffffe;
    uVar8 = *(iVar6 + uVar13 * 4) & 0xffffffe0;
    uVar3 = **0x2afc0 & 0x1000000;
    if (uVar3 == 0) {
        uStackX_8 = uVar8;
    }
    else {
        iVar5 = arg1;
        iVar4 = fcn.0002752c(arg1,uVar8,&uStackX_8);
        if (iVar4 == iVar12) {
            fcn.000274c8(iVar5,uVar8,&uStackX_8);
            iVar12 = -0x7ffffffffffffffe;
        }
    }
    uVar10 = 0;
    do {
        if ((*(uStackX_8 + 4 + uVar10 * 4) & 0x8000) != 0) break;
        uVar9 = uVar10 + 1;
        uVar10 = uVar9;
    } while (uVar9 < 8);
    if (uVar10 == '\b') {
        if (uVar13 == 0) {
            uVar13 = *(arg1 + 0x48);
        }
        uVar13 = uVar13 - 1;
        uVar8 = *(iVar6 + uVar13 * 4) & 0xffffffe0;
        if (uVar3 == 0) {
            uStackX_8 = uVar8;
        }
        else {
            iVar6 = arg1;
            iVar5 = fcn.0002752c(arg1,uVar8,&uStackX_8);
            if (iVar5 == iVar12) {
                fcn.000274c8(iVar6,uVar8,&uStackX_8);
            }
        }
        uVar10 = 0;
        do {
            if ((*(uStackX_8 + 4 + uVar10 * 4) & 0x8000) != 0) break;
            uVar9 = uVar10 + 1;
            uVar10 = uVar9;
        } while (uVar9 < 8);
        if (uVar10 == '\b') {
            return;
        }
    }
    if (uVar3 == 0) {
        uVar7 = uVar8;
    }
    else {
        iVar6 = fcn.0002752c(arg1,uVar8,&uStackX_8);
        if (iVar6 == -0x7ffffffffffffffe) {
            fcn.000274c8(arg1,uVar8,&uStackX_8);
        }
        uVar7 = uStackX_8;
    }
    uVar9 = *(puVar1 + 0x716);
    if (uVar3 != 0) {
        uVar8 = uVar7;
    }
    if (1 < uVar9) {
        do {
            puVar11 = uVar14 * 0x1c0 + *(*0x2a8b8 + 0x42);
            if (((*puVar11 & 3) == 3) && (*(puVar11 + 100) == uVar8)) break;
            uVar14 = uVar14 + 1;
        } while (uVar14 < uVar9);
    }
    if (uVar14 != uVar9) {
        puVar1 = uVar8 + 4 + uVar10 * 4;
        *puVar1 = *puVar1 & 0xffff7fff;
        uVar2 = *(puVar11 + 0x60);
        if (uVar13 < uVar2) {
            uVar13 = uVar13 + *(arg1 + 0x48);
        }
        fcn.00025bc0(arg1,uVar2,uVar10 + (uVar13 - uVar2) * 8 + 1,*(puVar11 + 0x5c));
        **(puVar11 + 0x5e) = 1;
    }
    return;
}


/* fcn.000274c8 @ 0x274c8 */

ulong fcn.000274c8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    
    uVar1 = *(arg1 + 200);
    if ((uVar1 <= CONCAT44(in_register_00000014,arg2)) &&
       (uVar2 = uVar1 + 0x103ff + (*(*0x2afc0 + 0x5ae) << 0xc),
       CONCAT44(in_register_00000014,arg2) < uVar2 || CONCAT44(in_register_00000014,arg2) == uVar2)) {
        if (((**0x2afc0 & 0x1000000) == 0) || (uVar1 == 0)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(*0x2a8b8 + 0x12) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.0002752c @ 0x2752c */

ulong fcn.0002752c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    
    uVar1 = *(arg1 + 0xa8);
    if ((uVar1 <= CONCAT44(in_register_00000014,arg2)) &&
       (CONCAT44(in_register_00000014,arg2) < uVar1 + 0x20fff ||
        CONCAT44(in_register_00000014,arg2) == uVar1 + 0x20fff)) {
        if (((**0x2afc0 & 0x1000000) == 0) || (uVar1 == 0)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(arg1 + 0x10) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00026e84 @ 0x26e84 */

ulong fcn.00026e84(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    code *pcVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint32_t *puStackX_10;
    
    puVar3 = *0x2afc0;
    puVar4 = *(arg2 + 0x51);
    while( true ) {
        if ((puVar4 == NULL) || ((puVar4[2] & 0x80) != 0)) {
            return 0xff;
        }
        if ((puVar4[2] & 0x40) != 0) break;
        arg2_00 = *puVar4;
        puVar4 = arg2_00;
        if ((arg2_00 & 1) != 0) {
            *(arg2 + 0x59) = 0;
            goto code_r0x00026f0e;
        }
        puStackX_10 = puVar4;
        if ((*puVar3 & 0x1000000) != 0) {
            fcn.000274c8(arg1,arg2_00,&puStackX_10);
            puVar4 = puStackX_10;
        }
    }
    *(arg2 + 0x59) = 0x4000;
code_r0x00026f0e:
    if ((*(arg2 + 0x50) - 1U < 0x32) && (pcVar1 = *((*(arg2 + 0x50) - 1) * 8 + 0x2a980), pcVar1 != NULL)) {
        uVar2 = *(arg2 + 0x5b);
        iVar5 = 0;
        if ((uVar2 != 0) && (iVar5 = 0, uVar2 < *(*0x2afc0 + 0x716))) {
            iVar5 = uVar2 * 0x1c0 + *(*0x2a8b8 + 0x42);
        }
        (*pcVar1)(arg1,iVar5,arg2,0,0);
    }
    return 0;
}


/* fcn.00024088 @ 0x24088 */

ulong fcn.00024088(int64_t arg1)

{
    ulong *puVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    ulong *arg2;
    ulong uVar7;
    uint32_t uVar8;
    uint8_t uVar9;
    uint8_t uVar10;
    uint8_t uVar11;
    ulong *arg3;
    
    iVar4 = fcn.0001b874(arg1);
    if ((-1 < iVar4) && (uVar10 = 1, (*(arg1 + 0x58) & 1) != 0)) {
        puVar1 = *(arg1 + 0x40);
        arg3 = *(*0x2a8b8 + 0x12);
        if (arg3 <= puVar1) {
            arg2 = (*(*0x2afc0 + 0x5ae) << 0xc) + arg3;
            if (puVar1 + 3 <= arg2) {
                cVar2 = fcn.00023ff0(arg1);
                if (cVar2 == '\0') {
                    uVar11 = 0;
                    if (((*(*0x2afc0 + 0x6c9) & 0x4000000) == 0) || ((*(arg1 + 0x58) & 0x20) == 0)) {
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                arg3 = CONCAT71(arg3 >> 8,uVar10);
                                arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                                fcn.00012cf8(arg1,arg2,arg3);
                                uVar10 = uVar10 + 1;
                            } while (uVar10 <= *(arg1 + 0x28));
                        }
                        if (*(arg1 + 0x5d) == '\0') {
                            fcn.0001ba5c(arg1,0,1);
                            do {
                                uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                                if ((uVar3 >> 0xc & 1) != 0) break;
                                (**(*0x2a900 + 0xf8))(0x7d);
                                uVar11 = uVar11 + 1;
                            } while (uVar11 < 0x10);
                            fcn.00026694(arg1);
                        }
                    }
                    else {
                        uVar9 = uVar10;
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                arg3 = CONCAT71(arg3 >> 8,uVar9);
                                arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                                fcn.00012b74(arg1,arg2,arg3);
                                uVar9 = uVar9 + 1;
                            } while (uVar9 <= *(arg1 + 0x28));
                        }
                        fcn.000269ac(arg1);
                        fcn.0002686c(arg1);
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                uVar8 = (uVar10 + 0x10) * 4;
                                uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + uVar8);
                                if ((uVar3 & 4) != 0) {
                                    fcn.000298a8(arg1,*(arg1 + 0x4a) + uVar8,uVar3 | 0x80);
                                }
                                uVar10 = uVar10 + 1;
                            } while (uVar10 <= *(arg1 + 0x28));
                        }
                        (**(*0x2a900 + 0xf8))(0xfa);
                        fcn.0001ba5c(arg1,0,1);
                        do {
                            uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                            if ((uVar3 >> 0xc & 1) != 0) break;
                            (**(*0x2a900 + 0xf8))(0x7d);
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < 0x10);
                        if (*(arg1 + 0x5c) != 0) {
                            uVar3 = fcn.000297b4(arg1,*(arg1 + 0x5c) + 4);
                            fcn.000297f8(arg1,*(arg1 + 0x5c) + 4,uVar3 & 0xffffffc0);
                        }
                        uVar3 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
                        fcn.000298a8(arg1,*(arg1 + 0x4a) + 4,uVar3);
                        fcn.0001ba5c(arg1,0x40,1);
                    }
                    fcn.00023e70(arg1,0);
                    iVar4 = *(arg1 + 0x10);
                    uVar6 = 0;
                    if (*(arg1 + 0x48) != 0) {
                        do {
                            uVar5 = uVar6 + 1;
                            *(iVar4 + uVar6 * 4) = 1;
                            uVar6 = uVar5;
                        } while (uVar5 < *(arg1 + 0x48));
                    }
                    if (puVar1[1] != 0) {
                        fcn.000130f0(puVar1[1],6);
                    }
                    fcn.000130f0(*puVar1,4);
                    uVar7 = 0;
                    fcn.000130f0(puVar1,1);
                    fcn.000139f0(arg1,CONCAT71(uVar7 >> 8,3));
                }
                else {
                    fcn.00023e70(arg1,0);
                }
                *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffffe;
                fcn.00011eec();
                return 0;
            }
        }
    }
    return 0xff;
}


/* fcn.000247a0 @ 0x247a0 */

ulong fcn.000247a0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    uVar1 = ((arg2 & 0xff) + 0x10) * 4;
    if ((*(arg1 + 0x50) & 0xf000) != 0) {
        uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + uVar1);
        if ((uVar2 & 1) == 0) {
            return 0xff;
        }
        fcn.0001ba18(arg1,uVar1,0x2000);
        uVar3 = 0;
        do {
            uVar2 = fcn.00029860(arg1,*(arg1 + 0x4a) + uVar1);
            if ((uVar2 & 2) != 0) break;
            (**(*0x2a900 + 0xf8))(100);
            uVar3 = uVar3 + 1;
        } while (uVar3 < 200);
        fcn.0001ba18(arg1,uVar1,2);
    }
    return 0;
}


/* fcn.00027464 @ 0x27464 */

ulong fcn.00027464(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    
    uVar1 = *(*0x2a8b8 + 0x12);
    if ((uVar1 <= CONCAT44(in_register_00000014,arg2)) &&
       (uVar2 = uVar1 + 0x103ff + (*(*0x2afc0 + 0x5ae) << 0xc),
       CONCAT44(in_register_00000014,arg2) < uVar2 || CONCAT44(in_register_00000014,arg2) == uVar2)) {
        if (((**0x2afc0 & 0x1000000) == 0) || (*(arg1 + 200) == 0)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(arg1 + 200) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.000243d8 @ 0x243d8 */

ulong fcn.000243d8(int64_t arg1)

{
    char cVar1;
    ushort uVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    uint32_t *puVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uint32_t *puStackX_10;
    
    iVar5 = fcn.0001b874(arg1);
    if (iVar5 < 0) {
        return 0xff;
    }
    if (*(arg1 + 0x5c) != 0) {
        uVar3 = fcn.000297b4(arg1,*(arg1 + 0x5c) + 4);
        uVar9 = uVar3 >> 0x10 & uVar3;
        if ((uVar9 & 0x2000) != 0) {
            if (*(arg1 + 0x5c) != 0) {
                uVar2 = fcn.000297b4(arg1,*(arg1 + 0x5c) + 4);
                fcn.000297f8(arg1,*(arg1 + 0x5c) + 4,CONCAT22(uVar9,uVar2));
            }
            fcn.000246c0(arg1);
            return 0;
        }
    }
    cVar1 = fcn.00023ff0(arg1);
    if (cVar1 == -1) {
        if (*(arg1 + 0x5c) != 0) {
            uVar4 = fcn.000297b4(arg1,*(arg1 + 0x5c) + 4);
            fcn.000297f8(arg1,*(arg1 + 0x5c) + 4,uVar4 & 0xe0002000);
        }
    }
    else if ((*(arg1 + 0x58) & 1) != 0) {
        while( true ) {
            while (uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4), (uVar4 & 0x10) != 0) {
                **0x2afc0 = **0x2afc0 & 0xfffffffe;
                fcn.00023ae0(arg1);
                fcn.00023ee8(arg1);
                **0x2afc0 = **0x2afc0 | 1;
            }
            if ((uVar4 >> 0xc & 1) != 0) break;
            if (((*0x2afc0)[0x1b1] == '\x01') && ((uVar4 & 1) != 0)) {
                fcn.000298a8(arg1,*(arg1 + 0x4a) + 4,1);
                if (((uVar4 >> 0xe & 1) != 0) && (uVar6 = fcn.00029860(arg1,*(arg1 + 0x4a)), (uVar6 & 0x10) != 0)) {
                    if (*(arg1 + 0xa0) != 0) {
                        fcn.00026f7c(arg1);
                    }
                    iVar11 = 0;
                    iVar5 = 8;
                    do {
                        puVar12 = *(arg1 + 0x10) + iVar11;
                        uVar4 = *puVar12;
                        while ((uVar4 & 1) == 0) {
                            puVar10 = uVar4 & 0xffffffe0;
                            if ((**0x2afc0 & 0x1000000) == 0) {
                                puStackX_10 = puVar10;
                            }
                            else {
                                iVar7 = fcn.000274c8(arg1,puVar10,&puStackX_10);
                                if (iVar7 == -0x7ffffffffffffffe) {
                                    fcn.0002752c(arg1,puVar10,&puStackX_10);
                                }
                            }
                            puVar10 = puStackX_10;
                            uVar4 = *puStackX_10;
                            if (((uVar4 & 6) == 2) && (*(puStackX_10 + 0x59) == '\x01')) {
                                fcn.00026e84(arg1,puStackX_10);
                                if (*puVar10 != uVar4) {
                                    puVar10 = puVar12;
                                }
                            }
                            uVar4 = *puVar10;
                        }
                        iVar11 = iVar11 + 4;
                        iVar5 = iVar5 + -1;
                    } while (iVar5 != 0);
                }
            }
            else {
                if ((uVar4 & 4) == 0) {
                    return 0;
                }
                if (*(*0x2afc0 + 0x5ad) == '\x01') {
                    return 0;
                }
                (**(*0x2a900 + 0xf8))(100000);
                iVar5 = 0;
                uVar6 = *(arg1 + 0x4a) + 4;
                fcn.000298a8(arg1,uVar6,4);
                uVar8 = 1;
                *(*0x2afc0 + 0x5ad) = 1;
                if (*(arg1 + 0x28) != '\0') {
                    do {
                        if ((*(arg1 + 0x5d) == 0) || (*(arg1 + 0x5d) != uVar8)) {
                            iVar5 = CONCAT71(iVar5 >> 8,uVar8);
                            uVar6 = CONCAT71(uVar6 >> 8,*arg1) | 0x80;
                            fcn.00012d38(arg1,uVar6,iVar5);
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar8 <= *(arg1 + 0x28));
                }
                *(*0x2afc0 + 0x5ad) = 0;
            }
        }
        uVar4 = fcn.00029860(arg1,*(arg1 + 0x4a) + 4);
        fcn.000298a8(arg1,*(arg1 + 0x4a) + 4,uVar4);
    }
    return 0;
}


/* fcn.00024e08 @ 0x24e08 */

uint16_t fcn.00024e08(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_R8D;
    uint32_t arg3;
    
    if ((*arg1 & 3) != 0) {
        arg3 = CONCAT31(in_R8D >> 8,*(arg1 + 0xc));
        uVar3 = CONCAT71(arg1 >> 8,0x10);
        iVar1 = fcn.000133f0(uVar3,0,arg3,0);
        while (iVar2 = iVar1, iVar2 != 0) {
            if ((*(iVar2 + 0xe) & 0x47) == 0) {
                return *(arg1 + 0xd) << 7 | *(arg1 + 0xc);
            }
            arg3 = CONCAT31(arg3 >> 8,*(iVar2 + 0xc));
            uVar3 = CONCAT71(uVar3 >> 8,0x10);
            iVar1 = fcn.000133f0(uVar3,0,arg3,0);
            arg1 = iVar2;
        }
    }
    return 0;
}


/* fcn.00026e28 @ 0x26e28 */

void fcn.00026e28(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    uint *puVar2;
    
    *(arg1 + 4) = 1;
    *(arg1 + 0x10) = 0;
    puVar2 = arg1 + 0xc;
    *puVar2 = 0;
    *(arg1 + 0x18) = 0;
    if (arg3 != 0) {
        if (0x4000 < arg3) {
            arg3 = 0x4000;
        }
        while( true ) {
            *puVar2 = arg2;
            uVar1 = (arg2 + 0x1000U & 0xf000) - arg2;
            if (arg3 <= uVar1) break;
            arg3 = arg3 - uVar1;
            puVar2 = puVar2 + 1;
            arg2 = arg2 + uVar1;
        }
    }
    return;
}


/* fcn.00024e70 @ 0x24e70 */

char fcn.00024e70(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uStackX_8;
    
    uStackX_8 = 0;
    uVar5 = (*0x2afc0)[0x1b0] * 100;
    iVar2 = arg1;
    if ((**0x2afc0 & 0x1000000) == 0) {
        uVar4 = arg2;
    }
    else {
        fcn.00027464(arg1,arg2,&uStackX_8);
        uVar4 = uStackX_8;
    }
    fcn.000298a8(iVar2,*(iVar2 + 0x4a) + 0x18,uVar4 & 0xffffffff);
    *(arg2 + 0x59) = 1;
    *arg2 = uVar4 | 2;
    cVar1 = fcn.000268e0(arg1);
    if (cVar1 == -1) {
        cVar1 = -1;
    }
    else {
        for (uVar3 = 0; (uVar5 == 0 || (uVar3 < uVar5)); uVar3 = uVar3 + 1) {
            fcn.00026e84(arg1,arg2);
            if (*(arg2 + 0x59) == '\0') break;
            (**(*0x2a900 + 0xf8))(10);
        }
        fcn.000269ac(arg1);
        if (*(arg2 + 0x59) == '\x01') {
            *(arg2 + 0x59) = 0;
            cVar1 = -1;
        }
        fcn.000243d8(arg1);
    }
    return cVar1;
}


/* fcn.00025838 @ 0x25838 */

ulong fcn.00025838(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    iVar4 = 8;
    do {
        uVar1 = *arg2;
        uVar3 = uVar1 & 0xfff;
        *arg1 = uVar1;
        *(arg1 + 4) = 0x3ff < uVar3;
        *arg2 = uVar1 + 0xc00;
        iVar4 = iVar4 + -1;
        arg1 = arg1 + 8;
    } while (iVar4 != 0);
    uVar2 = 0;
    if ((0x3ff < uVar3) && (uVar3 != 0x400)) {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00025888 @ 0x25888 */

int16_t fcn.00025888(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int16_t iVar12;
    uint16_t uVar13;
    uint16_t uStackX_20;
    uint32_t in_stack_00000028;
    char in_stack_00000030;
    uint in_stack_00000038;
    uint in_stack_0000003c;
    int iStack_a8;
    uint32_t uStack_a4;
    uint64_t uStack_a0;
    int iStack_98;
    uint32_t uStack_94;
    uint32_t uStack_88;
    char acStack_84 [4];
    uint32_t auStack_80 [16];
    
    iStack_a8 = arg4;
    iVar4 = CONCAT44(in_stack_0000003c,in_stack_00000038);
    uVar6 = 0;
    uStack_a0 = 0;
    iVar12 = 1;
    uStack_a4 = 0;
    uStackX_20 = 0;
    uVar8 = arg3 & 0xffff;
    uVar2 = *(arg2 + 0x168);
    uVar7 = *(arg1 + 0x48);
    iStack_98 = *(arg2 + 0x16c) * *(arg2 + 0x16a);
    if (uVar7 != 0) {
        do {
            iVar5 = fcn.00025838(&uStack_88,&iStack_a8);
            if (iVar5 < 0) {
                iStack_a8 = (uStack_88 & 0xfffff000) + 0x1000;
                fcn.00025838(&uStack_88,&iStack_a8);
            }
            uVar10 = 0;
            uVar13 = uVar8 + 1;
            uVar3 = *(*(arg1 + 0x10) + uVar8 * 4);
            uVar6 = uVar3;
            uVar11 = **0x2afc0 & 0x1000000;
            if (uVar11 == 0) {
                uStack_a0 = uVar6;
            }
            else {
                iVar5 = fcn.000274c8(arg1,uVar3,&uStack_a0);
                if (iVar5 == -0x7ffffffffffffffe) {
                    fcn.0002752c(arg1,uVar6,&uStack_a0);
                }
            }
            uStack_94 = 0;
            if (uVar11 != 0) {
                uVar6 = uStack_a0;
            }
            uVar9 = 0;
            if (uVar13 != uVar7) {
                uStack_94 = uVar13;
            }
            *(uVar6 + 0x24) = uStack_88 & 0xfffff000;
            do {
                uVar8 = uVar9;
                uVar3 = *(acStack_84 + uVar8 * 8 + -4);
                *(uVar6 + 4 + uVar8 * 4) = 0xc000000;
                *(uVar6 + 4 + uVar8 * 4) = uVar3 & 0xfff | *(uVar6 + 4 + uVar8 * 4);
                *(uVar6 + 4 + uVar8 * 4) = uVar10 << 0xc | *(uVar6 + 4 + uVar8 * 4);
                if (iVar4 != 0) {
                    puVar1 = uVar6 + 4 + uVar8 * 4;
                    *puVar1 = *puVar1 | 0x8000;
                }
                if ((acStack_84[uVar8 * 8] != '\0') && (uVar9 != 7)) {
                    uVar10 = uVar10 + 1;
                    *(uVar6 + 0x24 + uVar10 * 4) = auStack_80[uVar8 * 2] & 0xfffff000;
                }
                uStack_a4 = uStack_a4 + iStack_98;
                if (in_stack_00000028 <= uStack_a4) break;
                uVar9 = uVar9 + 1;
                iVar12 = iVar12 + 1;
            } while (uVar9 < 8);
            uVar8 = uStack_94;
            *(uVar6 + 0x24) = *(arg2 + 10) | *(uVar6 + 0x24) | (uVar2 & 0xf) << 8;
            *(uVar6 + 0x28) = *(uVar6 + 0x28) | *(arg2 + 0x16a);
            *(uVar6 + 0x2c) = *(uVar6 + 0x2c) | *(arg2 + 0x16c);
            if (in_stack_00000030 != '\0') {
                *(uVar6 + 0x28) = *(uVar6 + 0x28) | 0x800;
            }
            if (in_stack_00000028 <= uStack_a4) break;
            uStackX_20 = uStackX_20 + 1;
            uVar7 = *(arg1 + 0x48);
        } while (uStackX_20 < uVar7);
        arg3 = arg3 & 0xffff;
    }
    *(arg2 + 0x178) = iVar4;
    if (iVar4 != 0) {
        *(arg2 + 0x180) = arg3 & 0xffff;
        *(arg2 + 400) = uVar6;
    }
    return iVar12;
}


/* fcn.00025aec @ 0x25aec */

uint64_t fcn.00025aec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t *puVar2;
    uint32_t arg2_00;
    int64_t iVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint64_t uStackX_8;
    char in_stack_00000028;
    
    uVar5 = arg2;
    uVar6 = 0;
    do {
        arg2_00 = *(*(arg1 + 0x10) + uVar5 * 4);
        uStackX_8 = arg2_00;
        uVar1 = uVar5 + 1;
        uVar5 = 0;
        if (uVar1 != *(arg1 + 0x48)) {
            uVar5 = uVar1;
        }
        if (((**0x2afc0 & 0x1000000) != 0) &&
           (iVar3 = fcn.0002752c(arg1,arg2_00,&uStackX_8), iVar3 == -0x7ffffffffffffffe)) {
            fcn.000274c8(arg1,uStackX_8,&uStackX_8);
        }
        uVar4 = 0;
        do {
            if (in_stack_00000028 == '\0') {
                puVar2 = uStackX_8 + 4 + uVar4 * 4;
                *puVar2 = *puVar2 & 0x7fffffff;
            }
            else {
                puVar2 = uStackX_8 + 4 + uVar4 * 4;
                *puVar2 = *puVar2 | 0x80000000;
            }
            uVar6 = uVar6 + 1;
            if (uVar6 == arg3) {
                if (arg4 != NULL) {
                    *arg4 = uVar4;
                }
                return uStackX_8;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
    } while( true );
}


/* fcn.00025bc0 @ 0x25bc0 */

uint64_t fcn.00025bc0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    uint16_t uVar12;
    uint64_t uVar13;
    uint64_t uStackX_8;
    
    uVar12 = *(arg1 + 0x48);
    uVar13 = arg2 & 0xffff;
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = uVar7;
    if (uVar12 != 0) {
        do {
            uVar5 = *(*(arg1 + 0x10) + uVar13 * 4);
            uVar6 = uVar5;
            uVar3 = uVar13 + 1;
            uVar13 = 0;
            if (uVar3 != uVar12) {
                uVar13 = uVar3;
            }
            uVar2 = **0x2afc0;
            if ((uVar2 & 0x1000000) == 0) {
                uStackX_8 = uVar6;
            }
            else {
                iVar4 = fcn.000274c8(arg1,uVar5,&uStackX_8);
                if (iVar4 == -0x7ffffffffffffffe) {
                    fcn.0002752c(arg1,uVar6,&uStackX_8);
                }
            }
            uVar11 = 0;
            if ((uVar2 & 0x1000000) != 0) {
                uVar6 = uStackX_8;
            }
            do {
                uVar10 = uVar11;
                if (*(uVar6 + 4 + uVar10 * 4) < 0) {
                    puVar1 = uVar6 + 4 + uVar10 * 4;
                    *puVar1 = *puVar1 & 0x7fffffff;
                    uVar5 = 0;
                }
                else {
                    uVar5 = *(uVar6 + 4 + uVar10 * 4) >> 0x10 & 0xfff;
                    uVar9 = uVar9 + uVar5;
                }
                uVar7 = uVar7 + 1;
                if (arg4 != NULL) {
                    *arg4 = uVar5;
                    arg4 = arg4 + 4;
                }
                if (uVar7 == arg3) {
                    return uVar9;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < 8);
            uVar12 = *(arg1 + 0x48);
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar12);
    }
    return 0;
}


/* fcn.00027414 @ 0x27414 */

uint32_t fcn.00027414(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    if (arg1 == '\0') {
        uVar5 = 1;
        uVar4 = (1 << (arg2 - 1U & 0x1f)) >> 3;
        if (uVar4 != 0) {
            uVar5 = uVar4 & 0xffff;
        }
    }
    else {
        if (arg2 == '\0') {
            return 1;
        }
        uVar1 = 0;
        do {
            uVar2 = uVar1;
            uVar3 = arg2 >> 1;
            arg2 = uVar3;
            uVar1 = uVar2 + 1;
        } while (uVar3 != 0);
        uVar5 = 1 << (uVar2 & 0x1f);
    }
    return uVar5 & 0xffff;
}


/* fcn.00026b64 @ 0x26b64 */

ulong fcn.00026b64(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t *puVar5;
    uint16_t uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t *puStackX_10;
    uint32_t *puStackX_18;
    uint32_t *puStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    
    puStackX_18 = NULL;
    puStackX_10 = NULL;
    if ((arg2 == 0) || (*(arg2 + 0x6f) == 0)) {
        uVar4 = 0xff;
    }
    else {
        iVar3 = arg1;
        if ((**0x2afc0 & 0x1000000) == 0) {
            puStackX_20 = arg2;
        }
        else {
            fcn.00027464(arg1,arg2,&puStackX_10);
            puStackX_20 = puStackX_10;
        }
        uVar6 = *(iVar3 + 0x98);
        puVar7 = *0x2afc0;
        if (uVar6 < *(iVar3 + 0x48)) {
            do {
                puVar5 = *(arg1 + 0x10) + uVar6 * 4;
                if (*(arg1 + 0xa0) != 0) {
                    uVar8 = *puVar5;
                    puStackX_10 = uVar8;
                    puVar5 = puStackX_10;
                    if (((uVar8 & 1) == 0) && ((*puVar7 & 0x1000000) != 0)) {
                        iVar3 = fcn.0002752c(arg1,uVar8,&puStackX_10);
                        if (iVar3 == -0x7ffffffffffffffe) {
                            fcn.000274c8(arg1,puStackX_10,&puStackX_10);
                        }
                        puVar5 = puStackX_10;
                    }
                }
                uVar8 = *puVar5;
                if ((uVar8 & 1) == 0) {
                    uVar1 = *puVar7;
                    uVar2 = *(arg2 + 0x6f);
                    do {
                        if ((uVar1 & 0x1000000) == 0) {
                            puStackX_18 = uVar8 & 0xffffffe0;
                        }
                        else {
                            fcn.000274c8(arg1,uVar8 & 0xffffffe0,&puStackX_18);
                            uVar2 = *(arg2 + 0x6f);
                        }
                    } while ((uVar2 < *(puStackX_18 + 0x6f)) &&
                            (uVar8 = *puStackX_18, puVar5 = puStackX_18, (uVar8 & 1) == 0));
                    if (((uVar8 & 1) != 0) || (puStackX_18 != arg2)) goto code_r0x00026ca8;
                }
                else {
code_r0x00026ca8:
                    *arg2 = *puVar5;
                    *puVar5 = puStackX_20 | 2;
                    puVar7 = *0x2afc0;
                }
                uVar6 = uVar6 + *(arg2 + 0x6f);
            } while (uVar6 < *(arg1 + 0x48));
        }
        if (*(arg1 + 0x98) == 7) {
            *(arg1 + 0x98) = 0;
        }
        else {
            *(arg1 + 0x98) = *(arg1 + 0x98) + 1;
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00026d08 @ 0x26d08 */

ulong fcn.00026d08(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_00000014;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    int16_t iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t *puStackX_10;
    
    puVar4 = CONCAT44(in_register_00000014,arg2);
    if ((puVar4 == NULL) || (*(puVar4 + 0x6f) == 0)) {
        uVar3 = 0xff;
    }
    else {
        fcn.0002686c(arg1);
        uVar8 = 0;
        if (*(arg1 + 0x48) != 0) {
            puVar9 = *0x2afc0;
            do {
                iVar7 = uVar8;
                puVar10 = *(arg1 + 0x10) + uVar8 * 4;
                uVar6 = *puVar10;
                if ((uVar6 & 1) == 0) {
                    uVar1 = *puVar9;
                    do {
                        puVar5 = uVar6 & 0xffffffe0;
                        if ((uVar1 & 0x1000000) == 0) {
code_r0x00026db1:
                            puStackX_10 = puVar5;
                        }
                        else {
                            iVar2 = fcn.000274c8(arg1,puVar5,&puStackX_10);
                            if (iVar2 == -0x7ffffffffffffffe) {
                                if ((*puVar9 & 0x1000000) == 0) goto code_r0x00026db1;
                                fcn.0002752c(arg1,puVar5,&puStackX_10);
                            }
                        }
                        iVar7 = uVar8;
                        if (puStackX_10 == puVar4) break;
                        uVar6 = *puStackX_10;
                        puVar10 = puStackX_10;
                    } while ((uVar6 & 1) == 0);
                    if ((uVar6 & 1) == 0) {
                        *puVar10 = *puVar4;
                        puVar9 = *0x2afc0;
                    }
                }
                uVar8 = iVar7 + 1U;
            } while (iVar7 + 1U < *(arg1 + 0x48));
        }
        *puVar4 = 1;
        fcn.000267f8(arg1);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00026a90 @ 0x26a90 */

void fcn.00026a90(uint32_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint *puVar4;
    uint16_t uVar5;
    uint *puStackX_8;
    
    puVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0xa0);
    uVar5 = 0;
    if (puVar4 != NULL) {
        if ((**0x2afc0 & 0x1000000) != 0) {
            fcn.0002752c(CONCAT44(in_register_0000000c,arg1),puVar4,&puStackX_8);
            puVar4 = puStackX_8;
        }
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x48) != 0) {
            do {
                iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
                *puVar4 = *(iVar1 + uVar5 * 4);
                if ((**0x2afc0 & 0x1000000) == 0) {
code_r0x00026af7:
                    puStackX_8 = puVar4;
                }
                else {
                    puVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
                    if ((puVar4 < puVar2) || (puVar2 + 0x20fffU < puVar4)) {
                        fcn.00027464(CONCAT44(in_register_0000000c,arg1),puVar4,&puStackX_8);
                    }
                    else {
                        iVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0xa8);
                        if (iVar3 == 0) goto code_r0x00026af7;
                        puStackX_8 = (iVar3 - puVar2) + puVar4;
                    }
                }
                puVar4 = puVar4 + 0x20;
                *(iVar1 + uVar5 * 4) = puStackX_8;
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(CONCAT44(in_register_0000000c,arg1) + 0x48));
        }
    }
    return;
}


/* fcn.000282a8 @ 0x282a8 */

void fcn.000282a8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint8_t *arg2_00;
    uint8_t *puVar3;
    uint8_t auStackX_8 [8];
    uint8_t uStackX_10;
    uint8_t uStackX_11;
    uint8_t uStackX_12;
    uint8_t auStackX_14 [4];
    int32_t var_570h;
    int64_t var_578h;
    uchar auStack_648 [32];
    uchar *puStack_628;
    ushort uStack_620;
    uchar auStack_618 [1536];
    
    puVar3 = *(arg1 + 0x116) + arg2;
    auStackX_8[0] = 0;
    auStackX_8[1] = 1;
    auStackX_8[2] = 2;
    auStackX_8[3] = 4;
    fcn.00010300(auStack_618,0x600,0);
    fcn.00010300(auStack_648,0x30,0);
    fcn.00010300(&uStackX_10,8,0);
    puStack_628 = auStack_618;
    uStack_620 = 0x300;
    while( true ) {
        if (puVar3 <= arg2) {
            return;
        }
        uVar1 = *arg2;
        arg2_00 = arg2 + 1;
        uStackX_12 = uVar1 >> 4;
        uStackX_11 = uVar1 >> 2 & 3;
        uStackX_10 = auStackX_8[uVar1 & 3];
        uVar2 = uStackX_10;
        if (puVar3 < arg2_00 + uVar2) break;
        if ((uVar2 != 0) && (auStackX_14 != arg2_00)) {
            section..text(auStackX_14,arg2_00,uStackX_10);
            uVar2 = uStackX_10;
        }
        arg2 = arg2_00 + uVar2;
        (**(uStackX_11 * 8 + 0x2a810))(arg1,auStack_648,&uStackX_10);
    }
    return;
}


/* fcn.000283d4 @ 0x283d4 */

uint16_t fcn.000283d4(int64_t arg1)

{
    uint8_t *puVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t *puVar4;
    uint16_t uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    uint16_t auStack_208 [256];
    
    uVar5 = 0;
    fcn.00010300(auStack_208,0x200,0);
    if (*(arg1 + 0x118) != 0) {
        puVar6 = *(arg1 + 0x120);
        uVar7 = *(arg1 + 0x118);
        do {
            puVar1 = *puVar6;
            if ((*puVar1 & 0x10) != 0) {
                auStack_208[puVar1[1]] = auStack_208[puVar1[1]] + puVar1[8] * *(puVar1 + 4);
            }
            puVar6 = puVar6 + 1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    puVar4 = auStack_208;
    uVar2 = uVar5;
    do {
        if (*puVar4 != 0) {
            uVar3 = *puVar4 + 7 >> 3;
            if (uVar2 != 0) {
                uVar3 = uVar3 + 1;
            }
            if (uVar5 < uVar3) {
                uVar5 = uVar3;
            }
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
    } while (uVar2 < 0x100);
    return uVar5;
}


/* fcn.00015e64 @ 0x15e64 */

ulong fcn.00015e64(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t noname_1_00;
    uint64_t uVar4;
    
    iVar1 = fcn.00012f1c((arg2 + 8) * 0x20 + 0x1f >> 5);
    if (iVar1 == 0) {
        uVar2 = 0xff;
    }
    else {
        *(arg1 + 0xc) = arg2;
        *arg1 = iVar1;
        *(arg1 + 10) = 0x20;
        noname_1_00 = (arg2 & 0xffffU) * 0x20 + 0x100;
        if (noname_1_00 != 0) {
            fcn.00010300(iVar1,noname_1_00,0);
        }
        uVar4 = 0;
        iVar1 = iVar1 + *(arg1 + 10) * 8;
        if (*(arg1 + 10) != 0) {
            do {
                *(*arg1 + uVar4 * 8) = iVar1;
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
                iVar1 = iVar1 + *(arg1 + 0xc);
            } while (uVar3 < *(arg1 + 10));
        }
        *(arg1 + 8) = 0;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00015f40 @ 0x15f40 */

uint64_t fcn.00015f40(int64_t arg1)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    uVar5 = 0;
    uVar7 = (*(*0x2a8b8 + 0x32) - *0x2afc0) + 0x2a;
    uVar11 = (*(*0x2afc0 + 0x5ae) << 0xc) + *(*0x2a8b8 + 0x12);
    iVar6 = arg1;
    iVar9 = *0x2afc0;
    iVar10 = *0x2a8b8;
    uVar3 = fcn.00015f00(arg1);
    iVar4 = 0xffff;
    if (uVar3 == 0xffff) {
        if (*(iVar9 + 100) < 0x30) {
            *(iVar9 + 4 + *(iVar9 + 100) * 2) = 0x23;
            iVar4 = *0x2afc0;
            *(*0x2afc0 + 100) = *(*0x2afc0 + 100) + '\x01';
        }
        uVar5 = CONCAT71(iVar4 >> 8,0xff);
    }
    else {
        uVar8 = '\x01' << (*(iVar6 + 10) - 1U & 0x1f);
        if (uVar7 != 0) {
            do {
                if (uVar7 == 0) break;
                uVar2 = *(uVar5 + 0x5c6 + iVar9);
                if ((uVar8 & uVar2) == 0) {
code_r0x00016054:
                    uVar5 = uVar5 + 1;
                }
                else {
                    *(uVar5 + 0x5c6 + iVar9) = ~uVar8 & uVar2;
                    iVar9 = *0x2afc0;
                    if (*(uVar5 + 0x5c6 + *0x2afc0) != '\0') goto code_r0x00016054;
                    if ((*(uVar5 + 0x5d6 + *0x2afc0) + 0x1fU & 0xfb) == 0) {
                        *(*0x2afc0 + 0x667) = *(*0x2afc0 + 0x667) & 0xfc;
                    }
                    fcn.00015b08(uVar5 + *0x2afc0 + 0x5b6);
                    *(*0x2a8b8 + 0x32) = *(*0x2a8b8 + 0x32) + -1;
                    uVar7 = uVar7 - 1;
                    iVar9 = *0x2afc0;
                }
            } while (uVar5 < uVar7);
            iVar10 = *0x2a8b8;
        }
        puVar1 = arg1 + 0x148;
        uVar5 = *puVar1;
        if ((((*(iVar10 + 0x12) < uVar5) && (uVar5 < uVar11)) && (puVar1 != NULL)) && (uVar5 != 0)) {
            fcn.000130f0(uVar5,10);
            fcn.00010300(puVar1,0x10,0);
            iVar10 = *0x2a8b8;
        }
        puVar1 = arg1 + 0x138;
        uVar5 = *puVar1;
        if (((*(iVar10 + 0x12) < uVar5) && (uVar5 < uVar11)) && ((puVar1 != NULL && (uVar5 != 0)))) {
            fcn.000130f0(uVar5,9);
            fcn.00010300(puVar1,0x10,0);
            iVar10 = *0x2a8b8;
        }
        uVar5 = *(iVar10 + 0x4a);
        *(uVar5 + uVar3 * 8) = 0;
        uVar5 = uVar5 & 0xffffffffffffff00;
    }
    return uVar5;
}


/* fcn.000285e4 @ 0x285e4 */

void fcn.000285e4(int64_t arg1,int64_t arg2)

{
    ulong noname_0;
    uint16_t uVar1;
    uchar *puVar2;
    bool bVar3;
    ushort uStackX_8;
    uint16_t uStackX_a;
    uint16_t uStackX_c;
    ushort uStackX_e;
    
    noname_0 = *(*0x2a8c8 + (*(arg1 + 0xb) - 1) * 8);
    fcn.00010300(&uStackX_8,8,0);
    bVar3 = *(arg2 + 0x1e) != 0;
    uVar1 = 0;
    do {
        if (!bVar3) {
            return;
        }
        if (*(arg2 + 2) == 0xd) {
            if ((*(*(arg2 + 0x20) + uVar1 * 2) == 0x52) && (*(*(arg2 + 0x20) + 2 + uVar1 * 2) == 0x53)) {
                uStackX_8 = 0x921;
                uStackX_a = *(arg2 + 1) | 0x300;
                uStackX_c = *(arg1 + 0x13);
                uStackX_e = 3;
                puVar2 = fcn.00012f1c(1);
                if (puVar2 == NULL) {
                    return;
                }
                *puVar2 = *(arg2 + 1);
                *(puVar2 + 1) = 2;
                fcn.00014760(noname_0,arg1,CONCAT26(uStackX_e,CONCAT24(uStackX_c,CONCAT22(uStackX_a,uStackX_8))),
                             100);
                fcn.000130f0(puVar2,1);
                return;
            }
        }
        uVar1 = uVar1 + 1;
        bVar3 = uVar1 < *(arg2 + 0x1e);
    } while( true );
}


/* fcn.00027d14 @ 0x27d14 */

void fcn.00027d14(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    
    uVar1 = *arg1;
    if (arg3 < *arg1) {
        uVar1 = arg3;
    }
    if (arg3 != 0) {
        fcn.000102c0(arg2,arg3);
    }
    if ((uVar1 != 0) && (arg2 != arg1 + 4)) {
        section..text(arg2,arg1 + 4,uVar1);
    }
    return;
}


/* fcn.00027d6c @ 0x27d6c */

void fcn.00027d6c(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    uint8_t *arg1_00;
    int64_t iVar1;
    uint16_t uVar2;
    
    arg1_00 = fcn.00012f1c(2);
    if (arg1_00 != NULL) {
        if (*(arg2 + 1) != '\0') {
            *arg1 = *arg1 | 2;
        }
        if (arg1_00 != arg2) {
            section..text(arg1_00,arg2,0x30);
        }
        arg1_00[0x20] = 0;
        arg1_00[0x21] = 0;
        arg1_00[0x22] = 0;
        arg1_00[0x23] = 0;
        arg1_00[0x24] = 0;
        arg1_00[0x25] = 0;
        arg1_00[0x26] = 0;
        arg1_00[0x27] = 0;
        uVar2 = 0;
        if (*(arg1_00 + 0x1e) != 0) {
            iVar1 = fcn.00012f1c(*(arg1_00 + 0x1e) * 2 + 0x1f >> 5);
            *(arg1_00 + 0x20) = iVar1;
            if (iVar1 == 0) {
                return;
            }
            if ((*(arg1_00 + 0x1e) != 0) && (iVar1 != *(arg2 + 0x20))) {
                section..text(iVar1,*(arg2 + 0x20),*(arg1_00 + 0x1e) * 2);
            }
            if (*(arg1_00 + 0x1e) != 0) {
                do {
                    if (*(arg1_00 + 2) == 1) {
                        if (*(*(arg1_00 + 0x20) + uVar2 * 2) == 0x30) {
                            if ((*arg1_00 & 4) == 0) {
                                *arg1 = *arg1 | 0x20;
                            }
                            else {
                                *arg1 = *arg1 | 0x10;
                            }
                            *(arg1 + 2) = *(arg1_00 + 0x10);
                        }
                        if ((*(arg1_00 + 2) == 1) && (*(*(arg1_00 + 0x20) + uVar2 * 2) == 0x31)) {
                            *(arg1 + 4) = *(arg1_00 + 0x10);
                        }
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(arg1_00 + 0x1e));
            }
        }
        iVar1 = fcn.00012f1c(*(arg1 + 8) * 8 + 0x27 >> 5);
        if (iVar1 != 0) {
            arg2_00 = *(arg1 + 0x10);
            if (arg2_00 != 0) {
                if ((*(arg1 + 8) != 0) && (iVar1 != arg2_00)) {
                    section..text(iVar1,arg2_00,*(arg1 + 8) << 3);
                }
                fcn.000130f0(*(arg1 + 0x10),*(arg1 + 8) * 8 + 0x1f >> 5);
            }
            *(arg1 + 0x10) = iVar1;
            *(iVar1 + *(arg1 + 8) * 8) = arg1_00;
            *(arg1 + 8) = *(arg1 + 8) + '\x01';
        }
    }
    return;
}


/* fcn.00028df8 @ 0x28df8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.00028df8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_68h)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint8_t *puVar6;
    char cVar7;
    char cVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    int64_t arg3_00;
    uint8_t uVar11;
    uint8_t uVar12;
    uint64_t uVar13;
    char cVar14;
    char cStack0000000000000028;
    uint32_t var_48h;
    int64_t var_50h;
    int8_t var_58h;
    int64_t var_60h;
    ushort uStack_56;
    uint16_t uStack_54;
    uint8_t auStack_50 [2];
    uint uStack_4e;
    int8_t var_18h;
    int16_t var_16h;
    int16_t var_14h;
    int8_t var_10h;
    int32_t var_eh;
    
    uStack_56 = 0;
    uVar9 = 0;
    uStack_54 = 0;
    cVar14 = '\0';
    cVar8 = '\0';
    uVar13 = 0;
    cStack0000000000000028 = '\0';
    bVar3 = false;
    bVar4 = false;
    uStack_4e = 0;
    auStack_50[0] = 0;
    uVar12 = 0;
    puVar6 = NULL;
    if (*(arg2 + 0x118) != '\0') {
        do {
            puVar6 = *(arg2 + 0x120);
            uVar11 = uVar13;
            puVar2 = *(puVar6 + uVar13 * 8);
            if ((*puVar2 & 0x10) != 0) {
                uVar1 = puVar2[1];
                puVar6 = CONCAT71(puVar6 >> 8,uVar1);
                if ((uVar1 == 0) || (uVar1 == *arg4)) {
                    if ((*puVar2 & 1) == 0) {
                        if (*(puVar2 + 2) == 0xd) {
                            if (*(puVar2 + 0x1e) != 0) {
                                uVar10 = 0;
                                if (*(puVar2 + 0x1e) != 0) {
                                    do {
                                        if (*(*(puVar2 + 0x20) + uVar10 * 2) == 0x42) {
                                            if (cVar8 == '\x01') break;
                                            cVar8 = cVar14 + '\b';
                                            if (puVar2[1] == 0) {
                                                cVar8 = cVar14;
                                            }
                                            fcn.00029154(arg4,auStack_50,CONCAT71(0xff,cVar8),
                                                         CONCAT31(puVar2[8] * puVar2[4] >> 8,
                                                                  puVar2[8] * puVar2[4] + cVar8));
                                            cVar8 = '\x01';
                                            uVar9 = auStack_50[0] & 3;
                                            auStack_50[0] = uVar9;
                                        }
                                        uVar10 = uVar10 + 1;
                                    } while (uVar10 < *(puVar2 + 0x1e));
                                    uVar11 = uVar12;
                                    cStack0000000000000028 = cVar8;
                                }
                            }
                        }
                        arg3_00 = 0xffff;
                        if ((*(puVar2 + 2) == 9) && (*(puVar2 + 0x1e) != 0)) {
                            puVar6 = *(puVar2 + 0x20);
                            if (*puVar6 == 1) {
                                if (cVar8 == '\x01') break;
                                cVar8 = cVar14 + '\b';
                                if (puVar2[1] == 0) {
                                    cVar8 = cVar14;
                                }
                                arg3_00 = CONCAT71(0xff,cVar8);
                                fcn.00029154(arg4,auStack_50,arg3_00,
                                             CONCAT31(puVar2[8] * puVar2[4] >> 8,puVar2[8] * puVar2[4] + cVar8));
                                cVar8 = '\x01';
                                cStack0000000000000028 = '\x01';
                                uVar9 = auStack_50[0];
                            }
                        }
                        if (*(puVar2 + 2) == 1) {
                            if (*(puVar2 + 0x1e) != 0) {
                                uVar10 = 0;
                                if (*(puVar2 + 0x1e) != 0) {
                                    bVar5 = bVar4;
                                    do {
                                        if (*(*(puVar2 + 0x20) + uVar10 * 2) == 0x30) {
                                            if (bVar3) break;
                                            cVar7 = puVar2[8] * uVar10 + cVar14;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar2[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            fcn.00029154(arg4,&uStack_4e,arg3_00,cVar8 + puVar2[8]);
                                            uStack_56 = *(puVar2 + 0x10);
                                            bVar3 = true;
                                        }
                                        if (*(*(puVar2 + 0x20) + uVar10 * 2) == 0x31) {
                                            if (bVar4) break;
                                            uStack_54 = *(puVar2 + 0x10);
                                            cVar7 = puVar2[8] * uVar10 + cVar14;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar2[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            fcn.00029154(arg4,&uStack_4e + 2,arg3_00,cVar8 + puVar2[8]);
                                            bVar4 = true;
                                            bVar5 = true;
                                        }
                                        uVar10 = uVar10 + 1;
                                    } while (uVar10 < *(puVar2 + 0x1e));
                                    bVar4 = bVar5;
                                    cVar8 = cStack0000000000000028;
                                    uVar9 = auStack_50[0];
                                    uVar11 = uVar12;
                                }
                            }
                        }
                    }
                    puVar6 = NULL;
                    cVar14 = cVar14 + puVar2[8] * puVar2[4];
                }
            }
            uVar12 = uVar11 + 1;
            uVar13 = uVar12;
        } while (uVar12 < *(arg2 + 0x118));
        if ((((uVar9 != 0) || (uStack_4e != 0)) || (uStack_4e._2_2_ != 0)) && (puVar6 = *0x2afc0, (**0x2afc0 & 2) != 0)
           ) {
            *(arg2 + 0x160) = uStack_56;
            puVar6 = uStack_54;
            *(arg2 + 0x162) = uStack_54;
            *(arg2 + 0x159) = uVar9;
            *(arg2 + 0x15a) = uStack_4e;
            *(arg2 + 0x15c) = uStack_4e._2_2_;
            *(arg2 + 0x15e) = 0;
        }
    }
    return puVar6 & 0xffffffffffffff00;
}


/* fcn.00029208 @ 0x29208 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.00029208(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_60h)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint8_t *puVar6;
    char cVar7;
    char cVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint8_t *puVar15;
    int64_t arg3_00;
    uint8_t uVar16;
    uint8_t uVar17;
    char cVar18;
    uint8_t uVar19;
    char cVar20;
    uint16_t uVar21;
    char cStack0000000000000028;
    int8_t var_40h;
    int64_t var_48h;
    int8_t var_50h;
    uint8_t uStack_50;
    uchar uStack_4f;
    uchar uStack_4e;
    uchar uStack_4d;
    int16_t iStack_4c;
    int16_t iStack_4a;
    uchar uStack_48;
    int8_t var_20h;
    int8_t var_1fh;
    int64_t var_18h;
    int8_t var_10h;
    
    bVar1 = false;
    bVar2 = false;
    bVar4 = false;
    cVar18 = '\0';
    bVar3 = false;
    uVar11 = 0;
    cStack0000000000000028 = '\0';
    puVar6 = *0x2afc0;
    if ((*0x2afc0)[0x754] != 0) goto code_r0x00029619;
    puVar10 = &uStack_50;
    fcn.000102c0(puVar10,10);
    if ((*(arg2 + 0x110) & 1) == 0) {
        iStack_4c = *(arg4 + 1);
        puVar6 = *(arg4 + 2);
        iStack_4a = *(arg4 + 2);
    }
    else {
        uVar19 = 0;
        puVar6 = NULL;
        bVar4 = false;
        bVar5 = false;
        if (*(arg2 + 0x118) != '\0') {
            do {
                bVar2 = bVar5;
                bVar1 = bVar4;
                puVar10 = puVar6;
                iVar13 = 0;
                arg3_00 = 0;
                uVar16 = puVar10;
                puVar6 = *(*(arg2 + 0x120) + puVar10 * 8);
                if (((*puVar6 & 0x10) != 0) && ((uVar17 = puVar6[1], uVar17 == 0 || (uVar17 == *arg4)))) {
                    cVar20 = uVar11;
                    if ((*puVar6 & 1) == 0) {
                        if (((*(puVar6 + 2) == 9) && (*(puVar6 + 0x1e) != 0)) && (**(puVar6 + 0x20) == 1)) {
                            bVar1 = true;
                            uVar12 = uVar11 + 8U & 0xff;
                            if (uVar17 == 0) {
                                uVar12 = uVar11;
                            }
                            uStack_50 = *((uVar12 >> 3) + arg4);
                        }
                        if (*(puVar6 + 2) == 1) {
                            if (*(puVar6 + 0x1e) != 0) {
                                uVar11 = 0;
                                if (*(puVar6 + 0x1e) != 0) {
                                    do {
                                        cVar18 = uVar11;
                                        if (*(*(puVar6 + 0x20) + uVar11 * 2) == 0x30) {
                                            bVar2 = true;
                                            cVar7 = puVar6[8] * cVar18 + cVar20;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar6[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            iVar13 = CONCAT71(iVar13 >> 8,cVar8 + puVar6[8]);
                                            uStack_48 = 0x30;
                                            fcn.00029634(arg4,&uStack_50,arg3_00,iVar13);
                                        }
                                        if (*(*(puVar6 + 0x20) + uVar11 * 2) == 0x31) {
                                            bVar3 = true;
                                            cVar7 = puVar6[8] * cVar18 + cVar20;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar6[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            iVar13 = CONCAT71(iVar13 >> 8,cVar8 + puVar6[8]);
                                            uStack_48 = 0x31;
                                            fcn.00029634(arg4,&uStack_50,arg3_00,iVar13);
                                        }
                                        if (*(*(puVar6 + 0x20) + uVar11 * 2) == 0x38) {
                                            cStack0000000000000028 = '\x01';
                                            uVar14 = puVar6[8] * cVar18 + cVar20 >> 3;
                                            uVar9 = uVar14 + 1;
                                            if (puVar6[1] == 0) {
                                                uVar9 = uVar14;
                                            }
                                            uStack_4d = *(uVar9 + arg4);
                                        }
                                        uVar21 = uVar11 + 1;
                                        uVar11 = uVar21;
                                    } while (uVar21 < *(puVar6 + 0x1e));
                                    cVar18 = cStack0000000000000028;
                                    uVar16 = uVar19;
                                }
                            }
                        }
                    }
                    puVar10 = puVar6[8] * puVar6[4];
                    uVar11 = cVar20 + puVar6[8] * puVar6[4];
                }
                uVar19 = uVar16 + 1;
                puVar6 = uVar19;
                bVar4 = bVar1;
                bVar5 = bVar2;
            } while (uVar19 < *(arg2 + 0x118));
        }
        *arg4 = 0;
        puVar6 = *0x2afc0;
        if (bVar1) {
            *arg4 = uStack_50;
            puVar6 = *0x2afc0;
            (*0x2afc0)[0x755] = uStack_50;
        }
        else {
            *arg4 = (*0x2afc0)[0x755];
        }
        puVar10 = puVar10 & 0xffffffffffffff00;
        if (bVar2) {
            puVar6 = CONCAT71(puVar6 >> 8,uStack_4f);
            *(arg4 + 1) = uStack_4f;
        }
        if (bVar3) {
            puVar6 = CONCAT71(puVar6 >> 8,uStack_4e);
            *(arg4 + 2) = uStack_4e;
        }
        bVar4 = bVar3;
        if (cVar18 == '\x01') {
            puVar6 = CONCAT71(puVar6 >> 8,uStack_4d);
            *(arg4 + 3) = uStack_4d;
        }
    }
    if (((*(arg2 + 0x110) & 1) == 0) && (puVar6 = 0x2000, (*(arg2 + 0x7c) & 0x2000) != 0)) {
        arg4 = arg4 + 1;
    }
    if ((((*(*0x2afc0 + 0x6c9) & 0x1000000) == 0) && (-1 < *(arg2 + 0x7c))) &&
       ((!bVar1 && (((!bVar2 && (!bVar4)) && (cVar18 == '\0')))))) goto code_r0x00029619;
    if ((**0x2afc0 & 2) != 0) {
        (*0x2afc0)[0x687] = *arg4;
        *(*0x2afc0 + 0x688) = *(*0x2afc0 + 0x688) + iStack_4c;
        *(*0x2afc0 + 0x68c) = *(*0x2afc0 + 0x68c) + iStack_4a;
        puVar6 = *(arg4 + 3);
        *(*0x2afc0 + 0x690) = *(*0x2afc0 + 0x690) + *(arg4 + 3);
        goto code_r0x00029619;
    }
    puVar6 = 0x410;
    if (((*0x410 & 4) == 0) || (*0x2a8c0 == 0)) goto code_r0x00029619;
    uVar11 = CONCAT71(puVar10 >> 8,*arg4) & 0xffffffffffffff07;
    uVar19 = *(arg4 + 1);
    uVar12 = uVar11 | 8;
    uVar16 = -*(arg4 + 2);
    if (0x7f < uVar19) {
        uVar12 = CONCAT71(uVar11 >> 8,uVar12) | 0x10;
    }
    if (0x7f < uVar16) {
        uVar12 = uVar12 | 0x20;
    }
    if (((*0x2afc0)[0x6c6] == 0) && ((**0x2afc0 & 8) == 0)) goto code_r0x00029619;
    puVar6 = *(*0x2a8b8 + 0x52);
    uVar17 = (((*0x2afc0)[0x6a0] & 0x10) != 0) + 3;
    puVar10 = *(*0x2a8b8 + 0x5a);
    puVar15 = *0x2afc0;
    if (puVar10 == puVar6) {
code_r0x000295e3:
        fcn.00014b64(uVar12);
        iVar13 = CONCAT71(uVar12 >> 8,uVar19);
        fcn.00014b64(iVar13);
        fcn.00014b64(CONCAT71(iVar13 >> 8,uVar16));
        if (((*0x2afc0)[0x6a0] & 0x10) != 0) {
            fcn.00014b64(0);
        }
    }
    else {
        if (*0x2afc0 + 0x6a0 < puVar6 + uVar17) {
            puVar6 = *0x2afc0 + 0x694;
        }
        if ((puVar10 < puVar6) || (puVar6 + uVar17 < puVar10)) goto code_r0x000295e3;
    }
    puVar6 = fcn.000139f0(0,CONCAT71(puVar15 >> 8,2));
code_r0x00029619:
    return puVar6 & 0xffffffffffffff00;
}


/* fcn.00016114 @ 0x16114 */

uint64_t fcn.00016114(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    int64_t *piVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uchar *puVar9;
    char *pcVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    char cVar14;
    uint8_t *puVar15;
    uint8_t uVar16;
    int16_t iVar17;
    uint64_t uVar18;
    uint16_t uVar19;
    int16_t iVar20;
    uint32_t *puVar21;
    int64_t iVar22;
    uint32_t *puVar23;
    char cStack0000000000000028;
    unkbyte3 Stack0000000000000029;
    uint8_t auStack_58 [32];
    
    _cStack0000000000000028 = _cStack0000000000000028 & 0xffffff00;
    iVar11 = 0;
    uVar18 = 0;
    puVar21 = (*(*0x2afc0 + 0x5ae) << 0xc) + *(*0x2a8b8 + 0x12);
    puVar4 = fcn.00010300(auStack_58,0x20,0);
    iVar13 = 8;
    if ((*(arg2 + 0x110) & 1) != 0) {
        uVar6 = *(arg2 + 0x118);
        puVar23 = NULL;
        if (uVar6 == 0) goto code_r0x00016674;
        iVar12 = *(arg2 + 0x120);
        do {
            uVar3 = 0;
            puVar15 = *(iVar12 + puVar23 * 8);
            puVar4 = puVar23;
            if (puVar15 < *(*0x2a8b8 + 0x12)) goto code_r0x00016674;
            puVar4 = puVar15 + 0x30;
            if (puVar21 < puVar4) goto code_r0x00016674;
            if ((*puVar15 & 0x10) != 0) {
                uVar16 = puVar15[1];
                if ((uVar16 == 0) || (uVar16 == *arg4)) {
                    if (((*puVar15 & 1) == 0) && (*(puVar15 + 2) == 7)) {
                        _cStack0000000000000028 = CONCAT31(Stack0000000000000029,1);
                        uVar19 = 0;
                        iVar2 = iVar11 + 8;
                        if (uVar16 == 0) {
                            iVar2 = iVar11;
                        }
                        iVar11 = iVar2;
                        if (*(puVar15 + 4) != 0) {
                            do {
                                uVar3 = uVar3 * puVar15[8] + iVar11;
                                uVar16 = *((uVar3 >> 3) + arg4) >> (uVar3 & 7) & ('\x01' << (puVar15[8] & 0x1f)) - 1U;
                                if ((*(puVar15 + 0xc) <= uVar16) &&
                                   (uVar16 < *(puVar15 + 0x10) || uVar16 == *(puVar15 + 0x10))) {
                                    uVar7 = *(puVar15 + 0x20);
                                    if ((uVar7 != 0) &&
                                       ((puVar4 = *0x2a8b8, uVar7 < *(*0x2a8b8 + 0x12) ||
                                        (puVar4 = uVar7 + 2, puVar21 < puVar4)))) goto code_r0x00016674;
                                    if ((*puVar15 & 2) == 0) {
                                        if (uVar7 != 0) {
                                            uVar16 = *(uVar7 + (uVar16 - *(puVar15 + 0xc)) * 2);
                                        }
                                    }
                                    else {
                                        if (uVar16 == 0) goto code_r0x000162eb;
                                        if (uVar7 != 0) {
                                            uVar16 = *(uVar7 + uVar19 * 2);
                                        }
                                    }
                                    if ((uVar16 != 0) && (uVar18 < 0x20)) {
                                        auStack_58[uVar18] = uVar16;
                                        uVar18 = uVar18 + 1;
                                    }
                                }
code_r0x000162eb:
                                uVar19 = uVar19 + 1;
                                uVar3 = uVar19;
                            } while (uVar19 < *(puVar15 + 4));
                        }
                        if (puVar15[1] != 0) {
                            iVar11 = iVar11 + -8;
                        }
                    }
                    puVar4 = puVar15[8] * *(puVar15 + 4);
                    iVar11 = iVar11 + puVar15[8] * *(puVar15 + 4);
                }
                iVar12 = *(arg2 + 0x120);
            }
            uVar16 = puVar23 + 1;
            puVar23 = uVar16;
        } while (uVar16 < uVar6);
        puVar4 = CONCAT71(puVar4 >> 8,cStack0000000000000028);
        if (cStack0000000000000028 == '\0') goto code_r0x00016674;
        fcn.000102c0(arg4,8);
        if (uVar18 != 0) {
            puVar15 = auStack_58;
            uVar7 = 0;
            do {
                uVar6 = *puVar15;
                uVar8 = uVar7;
                if (uVar6 + 0x20 < 8) {
                    *arg4 = *arg4 | 1 << (uVar6 - 0xe0 & 0x1f);
                }
                else if (uVar7 < 6) {
                    uVar8 = uVar7 + 1;
                    *(uVar7 + 2 + arg4) = uVar6;
                }
                puVar15 = puVar15 + 1;
                uVar18 = uVar18 - 1;
                uVar7 = uVar8;
            } while (uVar18 != 0);
        }
    }
    bVar1 = false;
    iVar22 = 6;
    iVar12 = 0;
    if (*0x2a8d8 != 0) {
        piVar5 = 0x2a8d8;
        do {
            puVar4 = (**piVar5)(arg2,arg4);
            if (puVar4 != '\0') goto code_r0x00016674;
            iVar12 = iVar12 + 1;
            piVar5 = iVar12 * 8 + 0x2a8d8;
        } while (*piVar5 != 0);
    }
    if ((*0x2afc0)[0x1d5] != 0) {
        puVar4 = *0x2afc0;
        if (((**0x2afc0 & 2) == 0) || (*(*0x2afc0 + 0x752) == 0)) goto code_r0x00016674;
        fcn.000102c0(arg4,8);
    }
    uVar18 = 0;
    cVar14 = '\b';
    *(*0x2a8b8 + 0x3a) = arg2;
    do {
        if (*(uVar18 + arg4) != '\0') break;
        uVar6 = uVar18 + 1;
        uVar18 = uVar6;
        cVar14 = cVar14 + -1;
    } while (uVar6 < 8);
    if ((**0x2afc0 & 2) == 0) {
        if (cVar14 != '\0') {
            *(*0x2afc0 + 0x753) = 1;
            goto code_r0x0001649a;
        }
code_r0x00016483:
        *(*0x2afc0 + 0x753) = 0;
    }
    else {
        if (cVar14 != '\0') {
            *(*0x2afc0 + 0x752) = 1;
            goto code_r0x00016483;
        }
code_r0x0001649a:
        *(*0x2afc0 + 0x752) = 0;
    }
    puVar4 = *0x2afc0;
    iVar20 = 0;
    iVar12 = 8;
    puVar15 = arg4;
    iVar17 = iVar20;
    do {
        uVar6 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar17 = iVar17 + uVar6;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar9 = 0x2a968;
    iVar12 = 8;
    puVar15 = 0x2a968;
    do {
        uVar6 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar20 = iVar20 + uVar6;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    uVar18 = 0;
    do {
        uVar6 = uVar18;
        if (*(uVar18 + arg4) != *(uVar18 + 0x2a968)) break;
        uVar6 = uVar6 + 1;
        uVar18 = uVar6;
    } while (uVar6 < 8);
    if ((((uVar6 != 8) && (iVar17 != 0)) && (iVar20 != 0)) && ((*0x2a968 != *arg4 && (*0x2a96a == *(arg4 + 2))))) {
        bVar1 = true;
    }
    if ((((*(*0x2afc0 + 0x6c9) & 0x800000) == 0) || (uVar6 != 8)) || (*0x2a8d0 == '\0')) {
        do {
            *puVar9 = puVar9[arg4 + -0x2a968];
            puVar9 = puVar9 + 1;
            iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        if (bVar1) {
            *(arg4 + 2) = 0;
            *(arg4 + 6) = 0;
            puVar4 = *0x2afc0;
        }
        if ((((*puVar4 & 2) != 0) && (*(puVar4 + 0x753) == 0)) || (*(puVar4 + 0x752) != 0)) {
            if (cVar14 == '\0') {
                *(puVar4 + 0x752) = 0;
            }
            puVar4 = fcn.00016924(arg2,arg4);
            goto code_r0x00016674;
        }
        if (cVar14 == '\0') {
            *(puVar4 + 0x753) = 0;
            puVar4 = *0x2afc0;
        }
        if ((*(puVar4 + 0x6c6) == 0) && ((*puVar4 & 0x108) != 0x108)) {
            fcn.00028bd4(arg4);
        }
        else {
            if (*0x2a8a0 != 0) {
                (**(*0x2a8a0 + 8))(*0x2a8a0,&stack0x00000028);
                *(*0x2afc0 + 0x1a1) = (_cStack0000000000000028 != 1) - 1U & 0x40;
            }
            fcn.00014ebc(arg2,arg4);
            if ((**0x2afc0 & 0x10) != 0) {
                pcVar10 = arg4 + 2;
                puVar4 = *0x2afc0;
                do {
                    if (*pcVar10 == '9') {
                        *(puVar4 + 0x669) = *(puVar4 + 0x669) ^ 0x20;
code_r0x0001663a:
                        puVar4 = *0x2afc0;
                    }
                    else {
                        if (*pcVar10 == 'G') {
                            *(puVar4 + 0x669) = *(puVar4 + 0x669) ^ 0x40;
                            goto code_r0x0001663a;
                        }
                        if (*pcVar10 == 'S') {
                            *(puVar4 + 0x669) = *(puVar4 + 0x669) ^ 0x10;
                            goto code_r0x0001663a;
                        }
                    }
                    pcVar10 = pcVar10 + 1;
                    iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
            }
            fcn.00015918();
        }
    }
    puVar4 = fcn.00016690(arg1);
code_r0x00016674:
    return puVar4 & 0xffffffffffffff00;
}


/* fcn.00028b28 @ 0x28b28 */

void fcn.00028b28(uint32_t arg1)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint8_t *puVar7;
    uint8_t uVar8;
    uint in_register_0000000c;
    
    uVar8 = arg1;
    if (uVar8 == 0x2c) {
        uVar6 = 0x3920;
    }
    else {
        puVar7 = 0x2a320;
        iVar1 = *0x2a328;
        while (iVar1 != 0) {
            if ((*puVar7 <= uVar8) && (uVar8 <= puVar7[1])) {
                uVar6 = (**(puVar7 + 8))(CONCAT71(CONCAT44(in_register_0000000c,arg1) >> 8,uVar8 - *puVar7));
                if ((*0x2a966 & 0x10) != 0) {
                    uVar6 = uVar6 & 0xff00;
                }
                goto code_r0x00028b80;
            }
            iVar1 = *(puVar7 + 0x18);
            puVar7 = puVar7 + 0x10;
        }
        uVar6 = 0;
code_r0x00028b80:
        if (uVar6 == 0) {
            return;
        }
    }
    uVar5 = *0x482;
    uVar4 = *0x480;
    uVar3 = *0x41c;
    uVar2 = *0x41a;
    *(*0x41c + 0x400) = uVar6;
    uVar6 = uVar3 + 2;
    if (uVar5 <= uVar3 + 2) {
        uVar6 = uVar4;
    }
    if (uVar6 != uVar2) {
        *0x41c = uVar6;
    }
    return;
}


/* fcn.00028a7c @ 0x28a7c */

void fcn.00028a7c(void)

{
    int64_t arg1;
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    
    uVar1 = *0x2a966 >> 1 & 1;
    if ((*0x2a966 & 4) != 0) {
        uVar1 = uVar1 | 2;
    }
    if ((*0x2a966 & 1) != 0) {
        uVar1 = uVar1 | 4;
    }
    uVar2 = 0;
    *0x497 = (*0x497 ^ *0x2a966) & 7 ^ *0x497;
    iVar3 = *0x2afc0;
    if (*(*0x2afc0 + 0x717) != '\0') {
        do {
            arg1 = *(*(*0x2a8b8 + 0x4a) + uVar2 * 8);
            if (arg1 != 0) {
                fcn.000166c4(arg1,uVar1);
                iVar3 = *0x2afc0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar3 + 0x717));
    }
    return;
}


/* fcn.00029154 @ 0x29154 */

void fcn.00029154(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t *arg2_00;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t auStackX_18 [4];
    uint16_t in_stack_00000028;
    
    auStackX_18[0] = 0;
    uVar3 = arg4 - arg3;
    uVar1 = uVar3 >> 3;
    uVar2 = uVar1 + 1;
    if ((uVar3 & 7) == 0) {
        uVar2 = uVar1;
    }
    if (uVar2 - 1 < 4) {
        arg2_00 = ((arg3 & 0xffU) >> 3) + arg1;
        uVar4 = 0;
        if ((uVar2 != 0) && (uVar4 = 0, auStackX_18 != arg2_00)) {
            section..text(auStackX_18,arg2_00,uVar2);
            uVar4 = auStackX_18[0];
        }
        uVar2 = arg4 & 7;
        if ((arg3 & 7U) != 0) {
            uVar4 = uVar4 >> (arg3 & 7);
        }
        if ((arg4 & 7U) != 0) {
            uVar4 = (uVar4 << uVar2) >> uVar2;
        }
        if (in_stack_00000028 < uVar4) {
            uVar4 = uVar4 & in_stack_00000028;
        }
        *arg2 = uVar4;
    }
    return;
}


/* fcn.00029634 @ 0x29634 */

void fcn.00029634(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint16_t *arg2_00;
    uint8_t uVar3;
    uint16_t uVar4;
    uint16_t auStackX_18 [4];
    int64_t in_stack_00000028;
    
    auStackX_18[0] = 0;
    if ((*(in_stack_00000028 + 0x14) == 0) && (*(in_stack_00000028 + 0x18) == 0)) {
        *(in_stack_00000028 + 0x14) = *(in_stack_00000028 + 0x10);
        *(in_stack_00000028 + 0x18) = *(in_stack_00000028 + 0xc);
    }
    uVar2 = arg4 - arg3;
    uVar1 = (uVar2 >> 3) + 1;
    if ((uVar2 & 7) == 0) {
        uVar1 = uVar2 >> 3;
    }
    if (uVar1 == '\x01' || uVar1 == '\x02') {
        arg2_00 = ((arg3 & 0xffU) >> 3) + arg1;
        uVar4 = 0;
        if ((uVar1 != 0) && (auStackX_18 != arg2_00)) {
            section..text(auStackX_18,arg2_00,uVar1);
            uVar4 = auStackX_18[0];
        }
        uVar3 = arg4 & 7;
        if ((arg3 & 7U) != 0) {
            uVar4 = uVar4 >> (arg3 & 7);
        }
        if ((arg4 & 7U) != 0) {
            uVar4 = (uVar4 << uVar3) >> uVar3;
        }
        if (*(in_stack_00000028 + 0x10) < uVar4) {
            uVar4 = uVar4 | -1LL << (uVar2 & 0x3f);
        }
        if (*(arg2 + 8) == '0') {
            *(arg2 + 4) = uVar4;
            *(arg2 + 1) = uVar4;
        }
        if (*(arg2 + 8) == '1') {
            *(arg2 + 6) = uVar4;
            *(arg2 + 2) = uVar4;
        }
    }
    return;
}


/* fcn.00014b64 @ 0x14b64 */

void fcn.00014b64(int64_t arg1)

{
    **(*0x2a8b8 + 0x52) = arg1;
    *(*0x2a8b8 + 0x52) = *(*0x2a8b8 + 0x52) + 1;
    if (*(*0x2a8b8 + 0x52) == *0x2afc0 + 0x6a0) {
        *(*0x2a8b8 + 0x52) = *0x2afc0 + 0x694;
    }
    return;
}


