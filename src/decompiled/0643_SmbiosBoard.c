// decompiled by r2ghidra: 0643_SmbiosBoard.pe32
// functions: 42

/* entry0 @ 0x10480 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iStackX_8;
    
    fcn.000104f4(arg1,arg2);
    if (*0x135c8 == 0) {
        *0x135b8 = *(arg2 + 0x60);
        *0x135c0 = *(arg2 + 0x58);
        *0x135c8 = arg2;
    }
    iStackX_8 = arg1;
    (**(*0x135b8 + 0x80))(&iStackX_8,0x12ec0,0,0x12f00);
    return;
}


/* fcn.000104f4 @ 0x104f4 */

void fcn.000104f4(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x135b0 = *(arg1 + 0x60);
    *0x135a8 = arg1;
    fcn.000106d4();
    iVar3 = fcn.00010740();
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010370(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010360();
        }
        fcn.00010370(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    if ((*0x135d8 != NULL) || (iVar3 = (**(*0x135b0 + 0x140))(0x12ef0,0,0x135d8), -1 < iVar3)) {
        (***0x135d8)(*0x135d8,0x135e0);
    }
    fcn.00010824();
    if (*0x135c8 == 0) {
        *0x135b8 = *(arg1 + 0x60);
        *0x135c0 = *(arg1 + 0x58);
        *0x135c8 = arg1;
    }
    return;
}


/* fcn.000106d4 @ 0x106d4 */

int64_t fcn.000106d4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x135d0 == 0) {
        *0x135d0 = 0;
        if (*(*0x135a8 + 0x68) != 0) {
            piVar2 = *(*0x135a8 + 0x70);
            do {
                if ((*0x12ee0 == *piVar2) && (*0x12ee8 == piVar2[1])) {
                    *0x135d0 = (*(*0x135a8 + 0x70))[uVar1 * 3 + 2];
                    return *0x135d0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x135a8 + 0x68));
        }
    }
    return *0x135d0;
}


/* fcn.00010740 @ 0x10740 */

void fcn.00010740(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000106d4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010777:
            if ((piVar1 == NULL) || ((*0x12f78 == *(piVar1 + 4) && (*0x12f80 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010777;
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


/* fcn.00010824 @ 0x10824 */

ulong fcn.00010824(void)

{
    ulong uVar1;
    char cVar2;
    ulong *puVar3;
    
    uVar1 = *0x12f88;
    puVar3 = 0x130c0;
    do {
        if (*puVar3 == NULL) {
            return 0;
        }
        cVar2 = (**puVar3)(uVar1,0x135e8);
        puVar3 = puVar3 + 1;
    } while (cVar2 == '\0');
    return 0;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00010790 @ 0x10790 */

void fcn.00010790(int64_t arg1)

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
            fcn.00010360();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010b28 @ 0x10b28 */

int64_t fcn.00010b28(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    ushort uVar8;
    
    uVar1 = arg2;
    cVar5 = arg1;
    iVar4 = fcn.00010ac4(arg1);
    uVar7 = 0;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg1_00 = CONCAT71(arg1 >> 8,cVar5);
    fcn.00010a3c(arg1_00);
    uVar6 = CONCAT71(arg1_00 >> 8,cVar5);
    fcn.000109c4(uVar6,CONCAT71(arg2 >> 8,uVar1));
    fcn.00010ac4(CONCAT71(uVar6 >> 8,cVar5));
    uVar8 = 0x60;
    uVar2 = 100;
    uVar6 = 0;
    if (cVar5 != '`') {
        uVar2 = 0x66;
    }
    arg2_00 = uVar2;
    uVar3 = in(uVar2);
    if ((uVar3 & 2) != 0) {
        do {
            if (0x1ffff < uVar7) goto code_r0x00010bca;
            uVar6 = 0;
            fcn.000107f0(0xf,arg2_00);
            arg2_00 = uVar2;
            uVar3 = in(uVar2);
            uVar7 = uVar7 + 1;
        } while ((uVar3 & 2) != 0);
        if (0x1ffff < uVar7) goto code_r0x00010bca;
    }
    if (cVar5 != '`') {
        uVar8 = 0x62;
    }
    out(uVar8,arg3);
code_r0x00010bca:
    fcn.00010a3c(CONCAT71(uVar6 >> 8,cVar5));
    return iVar4;
}


/* fcn.000109c4 @ 0x109c4 */

ulong fcn.000109c4(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar4 = uVar1;
    uVar2 = in(uVar4);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.000107f0(0xf,uVar1);
            uVar2 = in(uVar4);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    out(uVar4,arg2);
    return 0;
}


/* fcn.000107f0 @ 0x107f0 */

int64_t fcn.000107f0(int64_t arg1,int64_t arg2)

{
    fcn.00010790((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00010868 @ 0x10868 */

ulong fcn.00010868(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    unkbyte7 in_R8;
    uint8_t uStackX_18;
    
    iVar4 = CONCAT71(arg2 >> 8,0xa3);
    iVar3 = CONCAT71(arg1 >> 8,0x62);
    uVar5 = 0;
    fcn.00010b28(iVar3,iVar4,CONCAT71(in_R8,4));
    iVar2 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar4 = CONCAT71(iVar4 >> 8,0xa2);
        iVar3 = CONCAT71(iVar3 >> 8,0x62);
        fcn.00010b28(iVar3,iVar4,CONCAT71(in_R8,0x54));
        iVar2 = extraout_RAX_00;
        if ((-1 < extraout_RAX_00) &&
           (iVar2 = fcn.000109c4(CONCAT71(iVar3 >> 8,0x62),CONCAT71(iVar4 >> 8,0xa4)), -1 < iVar2)) {
            uVar1 = in(0x66);
            if ((uVar1 & 1) == 0) {
                do {
                    if (0x1ffff < uVar5) {
                        return 0x8000000000000003;
                    }
                    fcn.000107f0(0xf,0x66);
                    uVar1 = in(0x66);
                    uVar5 = uVar5 + 1;
                } while ((uVar1 & 1) == 0);
                if (0x1ffff < uVar5) {
                    return 0x8000000000000003;
                }
            }
            uStackX_18 = in(0x62);
            iVar2 = 0;
        }
    }
    if (-1 < iVar2) {
        *arg1 = uStackX_18 >> 6;
        *arg2 = uStackX_18 & 0x3f;
        return 0;
    }
    return 0x8000000000000003;
}


/* fcn.00010ac4 @ 0x10ac4 */

ulong fcn.00010ac4(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.000107f0(0xf,uVar1);
            uVar2 = in(uVar1);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00010a3c @ 0x10a3c */

ulong fcn.00010a3c(int64_t arg1)

{
    ushort uVar1;
    uint8_t uVar2;
    uchar uVar3;
    ushort uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 1) != 0) {
        do {
            if (0x1ffff < uVar5) {
                return 0x8000000000000007;
            }
            uVar4 = 0x60;
            if (arg1 != '`') {
                uVar4 = 0x62;
            }
            uVar3 = in(uVar4);
            out(0x80,uVar3);
            fcn.000107f0(5000,0x80);
            uVar2 = in(uVar1);
            uVar5 = uVar5 + 1;
        } while ((uVar2 & 1) != 0);
        if (0x1ffff < uVar5) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.0001240c @ 0x1240c */

ulong fcn.0001240c(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    
    arg2 = 0;
    *0x130a8 = *0xc00fd010 & 0xfffff000;
    *(*0x130a8 + 8) = 0;
    *(*0x130a8 + 6) = 0x20d;
    fcn.00011b7c(0x201,0);
    fcn.000107f0(arg2 + 10,arg2);
    *arg1 = *(*0x130a8 + 0x10) & 0xffffff;
    return 1;
}


/* fcn.00011b7c @ 0x11b7c */

void fcn.00011b7c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x130a8 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x130a8 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x130a8 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x130a8 + 0xa0) = 0x1c;
    }
    return;
}


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 11296 named .text
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


/* fcn.000123c4 @ 0x123c4 */

void fcn.000123c4(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    *0x130a8 = *0xc00fd010 & 0xfffff000;
    iVar3 = fcn.00011f18();
    if (iVar3 < 0) {
        fcn.00012024(arg1);
    }
    fcn.00012240();
    fcn.00012a24(0);
    uVar1 = *0x130a8;
    *(*0x130a8 + 0xb4) = 0;
    if (*(uVar1 + 0xb8) == 0xff0a55a) {
        *(uVar1 + 0xb4) = 4;
        uVar5 = 0;
        *(uVar1 + 0xb4) = 0x1000;
        uVar6 = *(uVar1 + 0xb8);
        iVar4 = 0;
        uVar7 = *(uVar1 + 0xb8) >> 8 & 3;
        if (uVar7 != 0xffffffff) {
            do {
                uVar2 = uVar6 & 7;
                if (uVar2 == 0) {
                    iVar4 = iVar4 + 0x80000;
                }
                else if (uVar2 == 1) {
                    iVar4 = iVar4 + 0x100000;
                }
                else if (uVar2 == 2) {
                    iVar4 = iVar4 + 0x200000;
                }
                else if (uVar2 == 3) {
                    iVar4 = iVar4 + 0x400000;
                }
                else if (uVar2 == 4) {
                    iVar4 = iVar4 + 0x800000;
                }
                else if (uVar2 == 5) {
                    iVar4 = iVar4 + 0x1000000;
                }
                else if (uVar2 == 6) {
                    iVar4 = iVar4 + 0x2000000;
                }
                else if (uVar2 == 7) {
                    iVar4 = iVar4 + 0x4000000;
                }
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 >> 4;
            } while (uVar5 < uVar7 + 1);
        }
        if (iVar4 != *0x1302a) {
            *0x1302a = iVar4;
        }
    }
    return;
}


/* fcn.00010ea0 @ 0x10ea0 */

ulong fcn.00010ea0(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (0x19 < uVar1) {
        if (uVar1 == 0x1a) {
            return 0x4000000;
        }
        if (uVar1 != 0x1b) {
            if (uVar1 == 0x20) {
                return 0x4000000;
            }
            if (uVar1 != 0x21) {
                if (uVar1 == 0x36) {
                    return 0x400000;
                }
                if (uVar1 == 0x37) {
                    return 0x800000;
                }
                if (uVar1 != 0x38) {
                    if (uVar1 == 0x39) {
                        return 0x2000000;
                    }
                    if (uVar1 == 0x3a) {
                        return 0x4000000;
                    }
                }
                return 0x1000000;
            }
        }
        return 0x8000000;
    }
    if (uVar1 == 0x19) {
        return 0x2000000;
    }
    if (uVar1 == 0x10) {
        return 0x10000;
    }
    if (uVar1 == 0x11) {
        return 0x20000;
    }
    if (uVar1 != 0x12) {
        if (uVar1 == 0x13) {
            return 0x80000;
        }
        if (uVar1 == 0x14) {
            return 0x100000;
        }
        if (uVar1 == 0x15) {
            return 0x200000;
        }
        if (uVar1 == 0x16) {
            return 0x400000;
        }
        if (uVar1 == 0x17) {
            return 0x800000;
        }
        return 0x1000000;
    }
    return 0x40000;
}


/* fcn.00010f50 @ 0x10f50 */

ulong fcn.00010f50(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 == 0x12) {
        return 0x80000;
    }
    if (uVar1 == 0x13) {
        return 0x100000;
    }
    if (uVar1 == 0x14) {
        return 0x200000;
    }
    if (uVar1 == 0x15) {
        return 0x400000;
    }
    if (uVar1 == 0x16) {
        return 0x800000;
    }
    if (uVar1 != 0x17) {
        if (uVar1 == 0x20) {
            return 0x4000000;
        }
        if (uVar1 == 0x46) {
            return 0x400000;
        }
    }
    return 0x1000000;
}


/* fcn.00010fa8 @ 0x10fa8 */

ulong fcn.00010fa8(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            return 0x400000;
        }
        if (uVar1 != 0x41) {
            if (uVar1 != 0x43) {
                if (uVar1 == 0x4a) {
                    return 0x400000;
                }
                if (uVar1 != 0x4b) {
                    if (uVar1 == 0x8c) {
                        return 0x40000;
                    }
                    if (uVar1 == 0x8d) {
                        return 0x80000;
                    }
                    if (uVar1 == 0x8e) {
                        return 0x100000;
                    }
                    return 0x1000000;
                }
            }
            return 0x800000;
        }
    }
    return 0x200000;
}


/* fcn.000119e8 @ 0x119e8 */

ulong fcn.000119e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x130a8 < 0) {
                uVar2 = (*0x130a8)[0x1b];
            }
            else {
                uVar2 = (*0x130a8)[0x16];
            }
        }
        else {
            uVar2 = (*0x130a8)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x130a8)[iVar1 + -0xc + 0x38];
    }
    if (uVar2 == 0x7fff) {
        return 0x8000000000000003;
    }
    if (arg2 != 0) {
        *arg2 = (uVar2 & 0xffff) << 0xc;
    }
    if (arg3 != 0) {
        *arg3 = (uVar2 | 0xfff0) >> 4;
    }
    return 0;
}


/* fcn.0001291c @ 0x1291c */

void fcn.0001291c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int iVar4;
    uint *arg2_00;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint auStack_28 [4];
    
    iVar6 = 0;
    *0x130a8 = *0xc00fd010 & 0xfffff000;
    if (arg4 == '\x01') {
        arg2_00 = auStack_28;
        iVar2 = fcn.00011de4(arg1,arg2_00);
        if (iVar2 < 0) {
            return;
        }
    }
    else {
        arg2_00 = arg2;
        auStack_28[0] = arg1;
    }
    uVar1 = auStack_28[0];
    uVar7 = 0x100 - (auStack_28[0] & 0xff);
    uVar8 = uVar7;
    if (0x40 < uVar7) {
        uVar8 = 0x40;
    }
    if (*arg3 < uVar8) {
        uVar8 = *arg3;
    }
    fcn.00011b7c(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
    uVar7 = uVar8;
    iVar4 = (uVar8 & 0xffff) * 0x100;
    *(*0x130a8 + 8) = uVar1;
    iVar3 = iVar4 + -0xff;
    *(*0x130a8 + 6) = iVar3;
    fcn.00011b7c(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
    if (uVar7 != 0) {
        uVar5 = uVar7;
        do {
            *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x130a8);
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    *arg3 = *arg3 - uVar7;
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


/* fcn.00011a6c @ 0x11a6c */

ulong fcn.00011a6c(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t auStackX_10 [2];
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [16];
    
    auStackX_10[0] = arg1;
    uVar5 = 0;
    uVar4 = arg2 & 0xffffffff;
    iVar6 = 0xff0a55a;
    *0x130a8 = *0xc00fd010 & 0xfffff000;
    *(*0x130a8 + 0xb4) = 0;
    if ((((*(*0x130a8 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.000119e8(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
        (uVar3 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
       ((*(*0x130a8 + 0xb4) = uVar5, *(*0x130a8 + 0xb8) == iVar6 &&
        (iVar1 = fcn.000119e8(1,0,auStack_18), -1 < iVar1)))) {
        auStackX_10[0] = uVar3;
        if (uVar3 != 0) {
            do {
                fcn.0001291c((uVar5 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                             (uVar5 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                uVar5 = uVar3 - auStackX_10[0];
            } while (uVar3 - auStackX_10[0] < uVar3);
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00011f18 @ 0x11f18 */

int64_t fcn.00011f18(void)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t auStack_48 [16];
    
    puVar4 = auStack_48;
    iVar2 = 0x40;
    fcn.00010300(puVar4,0x40,0);
    iVar2 = fcn.00011a6c(puVar4,iVar2,0xefc,4);
    if ((-1 < iVar2) && (auStack_48[0] - 1 < 0xfffffffe)) {
        uVar8 = 0;
        uVar6 = auStack_48[0] >> 6 & 0x3fc;
        if (uVar6 != 0) {
            do {
                puVar4 = auStack_48;
                iVar2 = 0x40;
                fcn.00010300(puVar4,0x40,0);
                uVar7 = uVar6 - uVar8;
                if (0x3f < uVar6 - uVar8) {
                    uVar7 = 0x40;
                }
                iVar2 = fcn.00011a6c(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x1302e) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x130a8 + 0xc4) = uVar1;
                            *(*0x130a8 + 200) = uVar1;
                            return 0;
                        }
                        uVar3 = uVar5 + 8;
                        uVar5 = uVar3;
                    } while (uVar3 < uVar7);
                }
                uVar8 = uVar8 + 0x40;
            } while (uVar8 < uVar6);
        }
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00012024 @ 0x12024 */

void fcn.00012024(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uStackX_8;
    uint32_t uStack_108;
    uchar uStack_104;
    char acStack_fe [246];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *(iVar4 + 4) << 8;
    if (*(iVar4 + 0x16) == 0x1000) {
        uVar3 = uVar3 | 1;
    }
    else if (*(iVar4 + 0x16) == 0x2000) {
        uVar3 = uVar3 | 2;
    }
    else if (*(iVar4 + 0x16) == 0x10000) {
        uVar3 = uVar3 | 3;
    }
    uVar1 = uVar3 | 4;
    if (*(iVar4 + 0x12) == 1) {
        uVar1 = uVar3;
    }
    uVar3 = uVar1 | 8;
    if (*(iVar4 + 0xe) != 'P') {
        uVar3 = uVar1;
    }
    uVar1 = uVar3 | 0x10;
    if (*(iVar4 + 0xe) != '9') {
        uVar1 = uVar3;
    }
    fcn.00010300(&uStack_108,0x100,0);
    uVar3 = 0;
    do {
        iVar4 = 0;
        *(*0x130a8 + 8) = uVar3;
        *(*0x130a8 + 6) = 0x3f0b;
        fcn.00011b7c(0x3f01,0);
        fcn.000107f0(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x130a8);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x130a8 + 0xcc) = 0;
                fcn.000107f0(1,iVar4);
                if (*(*0x130a8 + 0xd4) == 0x50444653) goto code_r0x00012174;
                goto code_r0x000121dc;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x00012174:
        uVar3 = *0x1302e & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x1302e & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x1302e >> 8 != '@') goto code_r0x000121dc;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x000121dc;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x000121dc;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x000121dc;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x000121dc:
    *(*0x130a8 + 0xc4) = uVar2;
    *(*0x130a8 + 200) = uVar2;
    return;
}


/* fcn.00012240 @ 0x12240 */

void fcn.00012240(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x13033 == '\x01') {
        uVar1 = *(*0x130a8 + 0xaf);
        uVar2 = *(*0x130a8 + 0xa7);
        *(*0x130a8 + 0xaf) = 0x98;
        if (*(*0x130a8 + 0xaf) == -0x68) {
            *(*0x130a8 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x130a8 + 0xa1) = 0x72;
            fcn.00011b7c(0,CONCAT71(param_2 >> 8,1));
            *(*0x130a8 + 0xaf) = uVar1;
            *(*0x130a8 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.00012a24 @ 0x12a24 */

void fcn.00012a24(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.00011be4(arg1);
    uVar3 = *0x1302e & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x00012b5f;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x1302e & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x1302a < 0x800000;
                goto code_r0x00012b57;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x00012b5f;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x1302e & 0xffff) != 0x609d) {
            bVar4 = (*0x1302e & 0xffff) == 0x709d;
code_r0x00012b22:
            if (!bVar4) goto code_r0x00012b5f;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x00012b5f;
        if (uVar3 == 0xc2) {
            uVar3 = *0x1302e & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x00012b22;
                }
                goto code_r0x00012b59;
            }
            bVar4 = *0x1302a < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x1302e & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x00012b5f;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x1302e & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x00012b5f;
            bVar4 = *0x1302a < 0x2000000;
        }
code_r0x00012b57:
        if (bVar4) goto code_r0x00012b5f;
    }
code_r0x00012b59:
    uVar2 = 0x3c;
code_r0x00012b5f:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.00011be4(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.00011b7c(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x130a8 + 0x10) = uVar1;
        *(*0x130a8 + 8) = arg1;
        if ((*(*0x130a8 + 4) & 0x800) == 0) {
            *(*0x130a8 + 6) = 0xf;
            fcn.00011b7c(CONCAT71(arg1_01 >> 8,1),0);
            fcn.00011c20();
        }
    }
    return;
}


/* fcn.00011de4 @ 0x11de4 */

ulong fcn.00011de4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t auStackX_8 [2];
    uint64_t uStackX_18;
    ulong uStackX_20;
    
    iVar6 = arg1;
    uStackX_20 = *0x13600;
    uStackX_18 = *0x13610;
    if (*0x13610 != 0) goto code_r0x00011edc;
    *(*0x130a8 + 0xb4) = 0;
    if (*(*0x130a8 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.000119e8(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x00011eb4;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x130a8 + 0xb4) = 0;
            if (*(*0x130a8 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.000119e8(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x00011eb4:
        uVar4 = *0x1302a - 1U;
        uStackX_18 = *0x1302a - 1U;
    }
    *0x13600 = uStackX_20;
    *0x135f8 = uVar4;
    *0x13610 = uStackX_18;
code_r0x00011edc:
    if (*0x13608 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x12f88);
    }
    uVar1 = *0x13610 + 1 + iVar6;
    if (*0x135f8 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011c64 @ 0x11c64 */

ulong fcn.00011c64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t arg4_00;
    uint32_t uVar9;
    uint32_t auStackX_20 [2];
    char in_stack_00000028;
    int32_t var_48h;
    char acStack_68 [32];
    uint32_t var_40h;
    
    arg4_00 = arg4;
    uVar7 = arg3;
    uVar1 = arg4;
    uVar5 = arg3 & 0xffffffff;
    if ((((uVar1 != 0) && (*0x13610 != 0)) && (*0x13608 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x13600 + (0xffffffff - *0x135f8) <= arg1) && (arg1 <= *0x13610 + (0xffffffff - *0x135f8))) {
                uVar1 = 0;
            }
        }
        else if (*0x13600 <= arg1) {
            uVar1 = -(*0x13610 < arg1) & uVar1;
        }
    }
    uVar6 = 0;
    auStackX_20[0] = uVar7;
    if (uVar7 != 0) {
        do {
            fcn.00010300(acStack_68,0x40,0);
            uVar9 = uVar5;
            if (uVar1 == 0) {
                if (uVar9 < 0x41) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = uVar9 - 0x40;
                }
                auStackX_20[0] = uVar5;
                if ((uVar9 - auStackX_20[0] != 0) && (acStack_68 != uVar6 + arg1)) {
                    section..text(acStack_68,uVar6 + arg1,uVar9 - auStackX_20[0]);
                }
            }
            else {
                arg4_00 = CONCAT31(arg4_00 >> 8,in_stack_00000028);
                fcn.0001291c(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
                uVar5 = auStackX_20[0];
            }
            uVar8 = 0;
            uVar4 = uVar5;
            if (uVar9 != uVar4) {
                iVar2 = 0;
                do {
                    if (arg2 == 0) {
                        cVar3 = -1;
                    }
                    else {
                        cVar3 = *(uVar6 + iVar2 + arg2);
                    }
                    if (acStack_68[iVar2] != cVar3) {
                        return 0;
                    }
                    uVar8 = uVar8 + 1;
                    iVar2 = iVar2 + 1;
                } while (uVar8 < uVar9 - uVar4);
            }
            uVar6 = uVar7 - uVar4;
        } while (uVar7 - uVar4 < uVar7);
    }
    return 1;
}


/* fcn.00011c20 @ 0x11c20 */

void fcn.00011c20(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x130a8 + 6) = 0x11;
        fcn.00011b7c(1,0);
        if ((*(*0x130a8 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.00012cbc @ 0x12cbc */

int64_t fcn.00012cbc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.000103e0(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.00010410();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.00010420(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.00012470 @ 0x12470 */

ulong fcn.00012470(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    uint64_t arg2_01;
    uint32_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    int64_t arg4;
    ushort uVar8;
    ulong unaff_R15;
    uint32_t auStackX_20 [2];
    int64_t iStackY_38;
    
    *0x130a8 = *0xc00fd010 & 0xfffff000;
    uVar5 = arg2;
    if ((arg2 & 0xffffffffU) % *(*0x135e8 + 0x54) == 0) {
        uVar2 = *0x130a0;
        uVar6 = 0;
        if (*0x130a0 == 1) {
            uVar2 = *(*0x130a8 + 0xc4) >> 0x1d & 0xffffff01;
            *0x130a0 = uVar2;
        }
        if (uVar5 != 0) {
            arg4 = *0x135e8;
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar5 - uVar6 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.00011de4(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x000124b8;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.00011c64(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.00011b7c(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x130a8 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x135e8 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x130a8 + 6) = uVar8;
                        fcn.00011b7c(CONCAT71(iVar4 >> 8,1),0);
                        fcn.00011c20();
                        if ((*0x13600 <= auStackX_20[0]) && (auStackX_20[0] <= *0x13610)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x135e8 + 0x54);
                                if (arg2_01 == 0) goto code_r0x00012628;
                            }
                            fcn.00012cbc((auStackX_20[0] - *0x13610) + 0xffffffff,arg2_01);
                        }
code_r0x00012628:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.00011c64(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x130a0 = 0;
                    }
                    else {
                        fcn.000107f0(10,arg2_00);
                    }
                }
                uVar6 = uVar6 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar5 <= uVar6) break;
                uVar2 = *0x130a0;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x000124b8:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00011be4 @ 0x11be4 */

uchar fcn.00011be4(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x130a8 + 8) = arg1;
    }
    *(*0x130a8 + 6) = 0x11;
    fcn.00011b7c(1,0);
    return *(*0x130a8 + 0x10);
}


/* fcn.000103e0 @ 0x103e0 */

uint64_t fcn.000103e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010410 @ 0x10410 */

void fcn.00010410(void)

{
    return;
}


/* fcn.00010420 @ 0x10420 */

int64_t fcn.00010420(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


