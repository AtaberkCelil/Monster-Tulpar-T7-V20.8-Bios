// decompiled by r2ghidra: 0195_SerialOverLan.pe32
// functions: 28

/* entry0 @ 0x10324 */

int64_t entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t iVar1;
    
    fcn.000103bc(arg1,in_RDX);
    if (*0xc00b0040 == -1) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        *0x126e0 = arg1;
        *0x126e8 = arg1;
        iVar1 = (**(*0x127c8 + 0x148))(0x126e8,0x126a0,0x126c0,0x126b0,0x126f0,0);
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    if (*0x127d8 != 0) {
        (**(*0x127c8 + 0x70))();
    }
    return iVar1;
}


/* fcn.000103bc @ 0x103bc */

void fcn.000103bc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    
    *0x127c8 = *(arg2 + 0x60);
    *0x127c0 = arg2;
    iStackX_8 = arg1;
    fcn.000124bc();
    noname_0 = 0x12728;
    iVar3 = fcn.00012528(0x12728);
    if (iVar3 == 0) {
        uVar4 = fcn.00010320();
        fcn.00010310();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.000102e0();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010310();
        }
        else {
            fcn.00010300();
        }
    }
    if (*0x127e0 == 0) {
        iVar3 = (**(*0x127c8 + 0x140))(0x12690,0,&iStackX_8);
        if (iVar3 < 0) {
            (**(*0x127c8 + 0x50))(0x200,8,fcn.000125d4,0,0x127d8);
            (**(*0x127c8 + 0xa8))(0x12690,*0x127d8,auStackX_10);
        }
        else {
            fcn.000125d4(0,0);
        }
    }
    return;
}


/* fcn.000124bc @ 0x124bc */

int64_t fcn.000124bc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x127d0 == 0) {
        *0x127d0 = 0;
        if (*(*0x127c0 + 0x68) != 0) {
            piVar2 = *(*0x127c0 + 0x70);
            do {
                if ((*0x12680 == *piVar2) && (*0x12688 == piVar2[1])) {
                    *0x127d0 = (*(*0x127c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x127d0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x127c0 + 0x68));
        }
    }
    return *0x127d0;
}


/* fcn.00012528 @ 0x12528 */

void fcn.00012528(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000124bc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012556:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012556;
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


/* fcn.000125d4 @ 0x125d4 */

void fcn.000125d4(void)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x127c8 + 0x140))(0x12690,0,aiStackX_18);
    if (-1 < iVar1) {
        arg1 = fcn.00011f3c();
        iVar1 = 0;
        if (arg1 != 0) {
            iVar1 = fcn.000102c0(arg1,0xd);
        }
        *0x127e0 = iVar1;
        if ((iVar1 != 0) && (iVar1 != aiStackX_18[0])) {
            section..text(iVar1,aiStackX_18[0],0xd);
        }
    }
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 9152 named .text
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


/* fcn.00011f3c @ 0x11f3c */

ulong fcn.00011f3c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x127c8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* fcn.00011eb0 @ 0x11eb0 */

ulong fcn.00011eb0(int64_t arg1)

{
    char16_t cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar2 = fcn.00011e84();
    if (0x12 < uVar2) {
        return 0x8000000000000005;
    }
    if (L"PCI Serial Port # " <= arg1) {
        if (arg1 < L"PCI Serial Port # " + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (L"PCI Serial Port # " + 1 <= arg1) goto code_r0x00011f14;
    }
    if (L"PCI Serial Port # " + 1 <= arg1 + 0x26) {
        return 0x800000000000000f;
    }
code_r0x00011f14:
    cVar1 = L'P';
    iVar3 = L"PCI Serial Port # " - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar3 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar4;
    return 0;
}


/* fcn.0001228c @ 0x1228c */

ulong fcn.0001228c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    ulong uVar2;
    ulong *arg1_00;
    ulong *puVar3;
    ulong *noname_0;
    int64_t iVar4;
    int64_t iVar5;
    
    iVar4 = 0;
    if ((arg4 == 0) || (arg3 == 0)) {
code_r0x00012425:
        uVar2 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg4 == 0) goto code_r0x00012425;
            if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) {
                        noname_0 = *arg3;
                        iVar5 = iVar4;
                        if (noname_0 != NULL) {
                            for (; *noname_0 != NULL; noname_0 = noname_0 + 2) {
                                if ((*arg1 & 0xffffff) == (**noname_0 & 0xffffff)) {
                                    return 0x8000000000000014;
                                }
                                iVar5 = iVar5 + 1;
                            }
                        }
                        arg1_00 = fcn.00011f3c(noname_0,(iVar5 + 2) * 0x10);
                        if (arg1_00 != NULL) {
                            puVar3 = *arg3;
                            if (((puVar3 != NULL) && (iVar5 << 4 != 0)) && (arg1_00 != puVar3)) {
                                noname_0 = arg1_00;
                                section..text(arg1_00,puVar3,iVar5 << 4);
                            }
                            puVar3 = fcn.00011f3c();
                            if ((puVar3 != NULL) && (puVar3 != arg1)) {
                                noname_0 = puVar3;
                                puVar3 = section..text(puVar3,arg1,3);
                            }
                            arg1_00[iVar5 * 2] = puVar3;
                            if (puVar3 != NULL) {
                                iVar1 = *arg4;
                                while (iVar1 != 0) {
                                    iVar4 = iVar4 + 1;
                                    iVar1 = *(arg4 + iVar4 * 2);
                                }
                                iVar4 = fcn.00011f6c(noname_0,iVar4 * 2 + 2,arg4);
                                arg1_00[iVar5 * 2 + 1] = iVar4;
                                if (iVar4 != 0) {
                                    arg1_00[iVar5 * 2 + 2] = 0;
                                    arg1_00[iVar5 * 2 + 3] = 0;
                                    if (*arg3 != 0) {
                                        (**(*0x127c8 + 0x48))();
                                    }
                                    *arg3 = arg1_00;
                                    return 0;
                                }
                                (**(*0x127c8 + 0x48))(arg1_00[iVar5 * 2]);
                            }
                            (**(*0x127c8 + 0x48))(arg1_00);
                        }
                        return 0x8000000000000009;
                    }
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00011d64 @ 0x11d64 */

uchar fcn.00011d64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStackX_18 [16];
    
    (**(arg1 + 0x20))(arg1,0,arg2,arg3 & 0xffff,1,auStackX_18);
    return auStackX_18[0];
}


/* fcn.00011d98 @ 0x11d98 */

void fcn.00011d98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auStackX_20 [8];
    
    auStackX_20[0] = arg4;
    (**(arg1 + 0x28))(arg1,0,arg2,arg3 & 0xffff,1,auStackX_20);
    return;
}


/* fcn.00012148 @ 0x12148 */

ulong fcn.00012148(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x12794;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00012008(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00011f6c(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00011f3c(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x12794) {
                section..text(iVar4,0x12794,4);
            }
            uVar2 = fcn.00012058(arg1,iVar3);
            (**(*0x127c8 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00012448 @ 0x12448 */

ulong fcn.00012448(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (piVar1 != NULL) {
        iVar2 = 0;
        if (*piVar1 != 0) {
            piVar3 = piVar1;
            do {
                (**(*0x127c8 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x127c8 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x127c8 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.00012574 @ 0x12574 */

void fcn.00012574(int64_t arg1)

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
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010ee4 @ 0x10ee4 */

ulong fcn.00010ee4(uint32_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar uVar3;
    uint8_t uVar4;
    int iVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    unkbyte7 in_R9;
    uint64_t uVar7;
    bool bVar8;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(iVar6 + 0xe4) != '\0') {
        while( true ) {
            if (*(iVar6 + 0xd0) == 0x10) {
                return 0;
            }
            if (*(iVar6 + 0xd0) != 0x10) {
                uVar2 = *(*(iVar6 + 200) + 0xd4 + iVar6);
                *(iVar6 + 0xd0) = *(iVar6 + 0xd0) + 1;
                iVar5 = *(iVar6 + 200) + 1;
                if (iVar5 == 0x10) {
                    iVar5 = 0;
                }
                *(iVar6 + 200) = iVar5;
            }
            if (*(iVar6 + 0xb4) == 0) break;
            if (*(iVar6 + 0xb4) != 0) {
                *(*(iVar6 + 0xb0) + 0xb8 + iVar6) = uVar2;
                *(iVar6 + 0xb0) = *(iVar6 + 0xb0) + 1;
                *(iVar6 + 0xb4) = *(iVar6 + 0xb4) + -1;
                iVar5 = *(iVar6 + 0xb0);
                if (*(iVar6 + 0xb0) == 0x10) {
                    iVar5 = 0;
                }
                *(iVar6 + 0xb0) = iVar5;
            }
            if (*(iVar6 + 0xd0) == 0x10) {
                return 0;
            }
        }
        return 0x8000000000000009;
    }
    bVar8 = *(iVar6 + 0xb4) == 0;
    do {
        uVar1 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),5);
        if ((((uVar1 & 1) == 0) || (bVar8)) || (bVar8 = *(iVar6 + 0xb4) == 0, *(iVar6 + 0xb4) == 0)) {
            if ((uVar1 & 0x20) == 0) {
                return 0;
            }
            if (*(iVar6 + 0xd0) != 0x10) {
                if (*(iVar6 + 0xe5) == '\0') {
code_r0x000111f0:
                    if (*(iVar6 + 0xd0) != 0x10) {
                        uVar2 = *(*(iVar6 + 200) + 0xd4 + iVar6);
                        *(iVar6 + 0xd0) = *(iVar6 + 0xd0) + 1;
                        iVar5 = *(iVar6 + 200) + 1;
                        if (iVar5 == 0x10) {
                            iVar5 = 0;
                        }
                        *(iVar6 + 200) = iVar5;
                    }
                    fcn.00011d98(*(iVar6 + 0xa0),*(iVar6 + 0xa8),0,CONCAT71(in_R9,uVar2));
                    if (*(iVar6 + 0xe5) == '\0') goto code_r0x00011274;
                }
                else {
                    uVar3 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4);
                    fcn.00011d98(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4,CONCAT71(in_R9,uVar3) | 2);
                    uVar7 = 0;
                    do {
                        uVar4 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),6);
                        if ((uVar4 & 0x10) != 0) break;
                        fcn.00012574(0x431);
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < 6);
                    if ((uVar4 & 0x10) != 0) {
                        if (*(iVar6 + 0xd0) != 0x10) {
                            uVar2 = *(*(iVar6 + 200) + 0xd4 + iVar6);
                            *(iVar6 + 0xd0) = *(iVar6 + 0xd0) + 1;
                            iVar5 = *(iVar6 + 200) + 1;
                            if (iVar5 == 0x10) {
                                iVar5 = 0;
                            }
                            *(iVar6 + 200) = iVar5;
                        }
                        fcn.00011d98(*(iVar6 + 0xa0),*(iVar6 + 0xa8),0,CONCAT71(in_R9,uVar2));
                    }
                    if (*(iVar6 + 0xe5) == '\0') goto code_r0x000111f0;
                }
                uVar3 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4);
                fcn.00011d98(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4,CONCAT71(in_R9,uVar3) & 0xfffffffffffffffd);
            }
        }
        else if ((uVar1 < '\0') || (((uVar1 & 0x1e) != 0 && ((uVar1 & 0x1c) != 0)))) {
            uVar2 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),0);
        }
        else {
            if (*(iVar6 + 0xe5) != '\0') {
                uVar2 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4);
                fcn.00011d98(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4,CONCAT71(in_R9,uVar2) & 0xfffffffffffffffe);
            }
            uVar2 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),0);
            if (*(iVar6 + 0xe5) != '\0') {
                uVar3 = fcn.00011d64(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4);
                fcn.00011d98(*(iVar6 + 0xa0),*(iVar6 + 0xa8),4,CONCAT71(in_R9,uVar3) | 1);
            }
            if (*(iVar6 + 0xb4) != 0) {
                *(*(iVar6 + 0xb0) + 0xb8 + iVar6) = uVar2;
                *(iVar6 + 0xb0) = *(iVar6 + 0xb0) + 1;
                *(iVar6 + 0xb4) = *(iVar6 + 0xb4) + -1;
                iVar5 = *(iVar6 + 0xb0);
                if (*(iVar6 + 0xb0) == 0x10) {
                    iVar5 = 0;
                }
                *(iVar6 + 0xb0) = iVar5;
            }
        }
code_r0x00011274:
        if ((uVar1 & 0x20) == 0) {
            return 0;
        }
        if (*(iVar6 + 0xd0) == 0x10) {
            return 0;
        }
    } while( true );
}


/* fcn.00012224 @ 0x12224 */

ulong fcn.00012224(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_00000014;
    uint32_t *puVar1;
    
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (arg4 == 0) {
        return 0x8000000000000002;
    }
    if (((puVar1 != NULL) && (arg3 != 0)) && (*puVar1 != '\0')) {
        do {
            if ((*arg1 & 0xffffff) == (*puVar1 & 0xffffff)) {
                while( true ) {
                    if (*arg3 == NULL) {
                        return 0x8000000000000003;
                    }
                    if ((*arg1 & 0xffffff) == (**arg3 & 0xffffff)) break;
                    arg3 = arg3 + 0x10;
                }
                *arg4 = *(arg3 + 8);
                return 0;
            }
            puVar1 = puVar1 + 3;
        } while (*puVar1 != '\0');
    }
    return 0x8000000000000003;
}


/* fcn.00011e84 @ 0x11e84 */

uint64_t fcn.00011e84(void)

{
    int16_t *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    do {
        if (0x23 < uVar3) {
            return 0x13;
        }
        uVar2 = uVar2 + 1;
        piVar1 = uVar3 + 0x12742;
        uVar3 = uVar3 + 2;
    } while (*piVar1 != 0);
    return uVar2;
}


/* fcn.00011fac @ 0x11fac */

bool fcn.00011fac(uint32_t arg1)

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


/* fcn.00012008 @ 0x12008 */

char * fcn.00012008(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00011fac(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00011f6c @ 0x11f6c */

void fcn.00011f6c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011f3c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00012058 @ 0x12058 */

int64_t fcn.00012058(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x12794;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00011fac(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00011fac(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00012008(arg1);
        iVar4 = fcn.00012008(arg2);
        iVar2 = fcn.00011f3c();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00012008(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00011f6c(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


