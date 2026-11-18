// decompiled by r2ghidra: 0937_Thc.pe32
// functions: 46

/* entry0 @ 0x1042c */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    
    *0x139c8 = *(arg2 + 0x60);
    *0x139c0 = arg2;
    fcn.0001362c();
    noname_0 = 0x138e8;
    iVar3 = fcn.00013698(0x138e8);
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
    iVar3 = 0x13780;
    (**(*0x139c8 + 0x98))(arg1,0x13780,&iStackX_8);
    *(iStackX_8 + 0x58) = 0x10324;
    fcn.00010500(arg1,iVar3);
    return;
}


/* fcn.0001362c @ 0x1362c */

int64_t fcn.0001362c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x139d0 == 0) {
        *0x139d0 = 0;
        if (*(*0x139c0 + 0x68) != 0) {
            piVar2 = *(*0x139c0 + 0x70);
            do {
                if ((*0x137f0 == *piVar2) && (*0x137f8 == piVar2[1])) {
                    *0x139d0 = (*(*0x139c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x139d0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x139c0 + 0x68));
        }
    }
    return *0x139d0;
}


/* fcn.00013698 @ 0x13698 */

void fcn.00013698(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001362c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000136c6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000136c6;
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


/* fcn.00010500 @ 0x10500 */

ulong fcn.00010500(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t aiStackX_10 [3];
    
    *0x13880 = arg1;
    *0x13888 = arg1;
    aiStackX_10[0] = arg1;
    (**(*0x139c8 + 0x148))(0x13888,0x13800,0x13860,0x13820,0x13890,0x137c0,0x138a8,0);
    uVar1 = (**(*0x139c8 + 0x148))(aiStackX_10,0x137a0,0x13850,0);
    iVar2 = fcn.00013698(0x13830);
    *0x13858 = *(iVar2 + 0x3c3c);
    *0x139d8 = iVar2 + 0x18;
    *0x13859 = *(iVar2 + 0x3c80);
    return uVar1;
}


/* fcn.000126a0 @ 0x126a0 */

void fcn.000126a0(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint32_t uStackX_8;
    
    if (arg1 != 0) {
        *(*(arg1 + 0x28) + 0x120c) = uStackX_8 & 0xfffffffe | 0x80000000;
        *(arg1 + 0x204d8) = 0;
        if (*(arg1 + 0x204f0) != 0) {
            (**(*0x139c8 + 0x70))();
        }
        if (*(arg1 + 0x20470) != 0) {
            (**(*0x139c8 + 0x70))();
        }
        (**(*0x139c8 + 0x120))(*(arg1 + 8),0x137d0,arg1 + 0x20460,*(arg1 + 8));
        (**(*0x139c8 + 0x150))(*(arg1 + 8),0x13840,arg1 + 0x20460,0);
        fcn.00011b0c(arg1);
        fcn.000130ac(*(arg1 + 0x28));
        piVar1 = arg1 + 0x71;
        if (*piVar1 != 0) {
            (**(*(arg1 + 0x18) + 0x50))(*(arg1 + 0x18),*(arg1 + 0x81));
            (**(*(arg1 + 0x18) + 0x60))(*(arg1 + 0x18),0x10,*piVar1);
            fcn.00012618(arg1,piVar1);
        }
        piVar1 = arg1 + 0x10251;
        if (*piVar1 != 0) {
            (**(*(arg1 + 0x18) + 0x50))(*(arg1 + 0x18),*(arg1 + 0x10261));
            (**(*(arg1 + 0x18) + 0x60))(*(arg1 + 0x18),1,*piVar1);
            fcn.00012618(arg1,piVar1);
        }
        piVar1 = arg1 + 0x18;
        (**(*piVar1 + 0x78))(*piVar1,1,*(arg1 + 0x20));
        (**(*0x139c8 + 0x120))(*(arg1 + 8),0x137d0,piVar1,*(arg1 + 8));
        (**(*0x139c8 + 0x150))(*(arg1 + 8),0x137d0,piVar1,0);
        piVar1 = *(arg1 + 0x10);
        if (piVar1 != NULL) {
            iVar3 = 0;
            if (*piVar1 != 0) {
                piVar2 = piVar1;
                do {
                    (**(*0x139c8 + 0x48))(*piVar2);
                    if (piVar2[1] != 0) {
                        (**(*0x139c8 + 0x48))();
                    }
                    iVar3 = iVar3 + 1;
                    piVar2 = piVar1 + iVar3 * 2;
                } while (*piVar2 != 0);
            }
            (**(*0x139c8 + 0x48))(piVar1);
        }
        fcn.000102c0(arg1,0x20520);
        (**(*0x139c8 + 0x48))(arg1);
    }
    return;
}


/* fcn.000131c8 @ 0x131c8 */

ulong fcn.000131c8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x139c8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00013404 @ 0x13404 */

ulong fcn.00013404(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *arg2_00;
    char cVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    char16_t *pcVar5;
    uint32_t uVar6;
    uint in_register_0000000c;
    uint32_t *arg2_01;
    uint32_t *puVar7;
    uint in_register_00000014;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    char in_stack_00000028;
    
    puVar7 = CONCAT44(in_register_00000014,arg2);
    arg2_01 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    if ((arg2_01 == NULL) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if (puVar7 != NULL) {
            if (in_stack_00000028 == '\0') {
                iVar4 = fcn.00013238(puVar7,arg2_01);
                if (iVar4 == 0) {
code_r0x00013485:
                    puVar13 = *arg3;
                    uVar11 = uVar10;
                    if (puVar13 != NULL) {
                        for (; pcVar8 = *puVar13, pcVar8 != NULL; puVar13 = puVar13 + 2) {
code_r0x00013527:
                            cVar1 = *pcVar8;
                            if (cVar1 != '\0') {
                                uVar9 = uVar10;
                                while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                    uVar9 = uVar9 + 1;
                                    cVar1 = pcVar8[uVar9];
                                }
                                if (uVar9 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar1 = *arg2_01;
                                puVar7 = arg2_01;
                                pcVar3 = pcVar8;
                                for (uVar14 = uVar9;
                                    (((cVar1 != '\0' && (*pcVar3 != '\0')) && (*puVar7 == *pcVar3)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    puVar7 = puVar7 + 1;
                                    pcVar3 = pcVar3 + 1;
                                    cVar1 = *puVar7;
                                }
                                uVar6 = *puVar7 - *pcVar3;
                                puVar7 = uVar6;
                                if (uVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar8 = pcVar8 + uVar9;
                                cVar1 = *pcVar8;
                                if (cVar1 == '\0') goto code_r0x0001352d;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar8 = pcVar8 + 1;
                                    cVar1 = *pcVar8;
                                } while (cVar1 != '\0');
                                goto code_r0x00013527;
                            }
code_r0x0001352d:
                            uVar11 = uVar11 + 1;
                        }
                    }
                    puVar12 = fcn.000131c8();
                    if (puVar12 != NULL) {
                        arg2_00 = *arg3;
                        if (((arg2_00 != NULL) && (uVar11 << 4 != 0)) && (puVar12 != arg2_00)) {
                            puVar7 = puVar12;
                            section..text(puVar12,arg2_00,uVar11 << 4);
                        }
                        cVar1 = *arg2_01;
                        uVar9 = uVar10;
                        while (cVar1 != '\0') {
                            uVar9 = uVar9 + 1;
                            cVar1 = *(uVar9 + arg2_01);
                        }
                        iVar4 = fcn.000131f8(puVar7,uVar9 + 1,arg2_01);
                        *(puVar12 + uVar11 * 4) = iVar4;
                        if (iVar4 != 0) {
                            pcVar5 = L"Intel Touch Host Controller Driver";
                            do {
                                pcVar5 = pcVar5 + 1;
                                uVar10 = uVar10 + 1;
                            } while (*pcVar5 != L'\0');
                            iVar4 = fcn.000131f8(puVar7,uVar10 * 2 + 2,0x13900);
                            *(puVar12 + uVar11 * 4 + 2) = iVar4;
                            if (iVar4 != 0) {
                                (puVar12 + uVar11 * 4 + 4)[0] = 0;
                                (puVar12 + uVar11 * 4 + 4)[1] = 0;
                                (puVar12 + uVar11 * 4 + 6)[0] = 0;
                                (puVar12 + uVar11 * 4 + 6)[1] = 0;
                                if (*arg3 != 0) {
                                    (**(*0x139c8 + 0x48))();
                                }
                                *arg3 = puVar12;
                                return 0;
                            }
                            (**(*0x139c8 + 0x48))(*(puVar12 + uVar11 * 4));
                        }
                        (**(*0x139c8 + 0x48))(puVar12);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*puVar7 != '\0') {
                puVar12 = puVar7;
                do {
                    puVar7 = *arg2_01 & 0xffffff;
                    if ((*arg2_01 & 0xffffff) == (*puVar12 & 0xffffff)) goto code_r0x00013485;
                    puVar12 = puVar12 + 3;
                } while (*puVar12 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00011778 @ 0x11778 */

int64_t fcn.00011778(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    int iVar5;
    
    iVar2 = *(arg1 + 0x28);
    cVar4 = '\x02';
    iVar5 = 100;
    while ((*(iVar2 + 0x1008) >> 0x1d & 1) == 0) {
        (**(*0x139c8 + 0xf8))(1000);
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
            return -0x7ffffffffffffff9;
        }
    }
    if (((*(*(arg1 + 0x28) + 0x1008) & 6) == 0) && (iVar2 = fcn.00012e7c(*(arg1 + 0x28)), iVar2 < 0)) {
        return iVar2;
    }
    iVar3 = 0x1128;
    *(*(arg1 + 0x28) + 0x1010) = *(*(arg1 + 0x28) + 0x1010) & 0xffffffaf | 0x800020;
    *(*(arg1 + 0x28) + 0x1010) = *(*(arg1 + 0x28) + 0x1010) & 0xffafffff | 0xa00000;
    iVar2 = *(arg1 + 0x28);
    *(iVar2 + 0x1010) = *(iVar2 + 0x1010) & 0xfffffff3;
    *(iVar2 + 0x1010) = *(iVar2 + 0x1010) & 0xfff3ffff;
    *(*(arg1 + 0x28) + 0x1128) = *(*(arg1 + 0x28) + 0x1128) | 0x80000000;
    cVar1 = fcn.00013150();
    if (cVar1 != '\x04') {
        cVar1 = fcn.00013150();
        if (cVar1 != '\x03') {
            if (*0x138e0 == -1) {
                *0x138e0 = *0xc00f8008;
            }
            if (*0x138e0 == '\0') goto code_r0x00011899;
        }
        *(*(arg1 + 0x28) + iVar3) = *(*(arg1 + 0x28) + iVar3) | 0x20;
    }
code_r0x00011899:
    fcn.00012f90(*(arg1 + 0x28));
    iVar2 = *(arg1 + 0x28);
    iVar5 = 700;
    *(iVar2 + 0x1008) = *(iVar2 + 0x1008) & 0xfffffffd;
    do {
        if ((*(iVar2 + 0x1008) & 4) == 0) {
            do {
                iVar2 = *(arg1 + 0x28);
                iVar5 = 0xfa;
                do {
                    if ((*(iVar2 + 0x10bc) & 0xf) == 2) {
                        return 0;
                    }
                    (**(*0x139c8 + 0xf8))(1000);
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                fcn.00012f90(*(arg1 + 0x28));
                cVar4 = cVar4 + -1;
            } while (cVar4 != '\0');
            return -0x7fffffffffffffee;
        }
        (**(*0x139c8 + 0xf8))(1000);
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return -0x7ffffffffffffff9;
}


/* fcn.00011940 @ 0x11940 */

int64_t fcn.00011940(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint *puVar3;
    uint64_t uVar4;
    
    iVar2 = fcn.00013060(*(arg1 + 0x28));
    if (-1 < iVar2) {
        iVar2 = *(arg1 + 0x28);
        *(iVar2 + 0x1044) = *(iVar2 + 0x1044) | 3;
        *(iVar2 + 0x1040) = *(iVar2 + 0x1040) & 0xff | 0x400400;
        *(iVar2 + 0x1048) = 0;
        *(*(arg1 + 0x28) + 0x1040) = *(*(arg1 + 0x28) + 0x1040) | 1;
        iVar2 = fcn.00012fdc(*(arg1 + 0x28));
        if (-1 < iVar2) {
            iVar2 = *(arg1 + 0x28);
            uVar1 = *(iVar2 + 0x1040);
            if ((uVar1 >> 0x10) - 1 < 0x40) {
                if (uVar1 >> 0x12 != 0) {
                    uVar4 = uVar1 >> 0x12;
                    puVar3 = arg1 + 0x31;
                    do {
                        *puVar3 = *((iVar2 - arg1) + 0x101b + puVar3);
                        puVar3 = puVar3 + 1;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                }
                *(iVar2 + 0x1044) = *(iVar2 + 0x1044) | 3;
                iVar2 = 0;
            }
            else {
                iVar2 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar2;
}


/* fcn.000116d8 @ 0x116d8 */

ulong fcn.000116d8(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t arg3;
    
    uVar1 = *(arg1 + 0x49) >> 1 & 0xf;
    if (uVar1 == 10) {
        arg3 = 5;
    }
    else if (uVar1 == 9) {
        arg3 = 6;
    }
    else {
        arg3 = 7;
        if (uVar1 != 7) {
            if (uVar1 == 6) {
                arg3 = 8;
            }
            else if (uVar1 == 5) {
                arg3 = 9;
            }
            else if (uVar1 == 4) {
                arg3 = 10;
            }
            else {
                if (uVar1 != 3) {
                    return 0x8000000000000007;
                }
                arg3 = 0xb;
            }
        }
    }
    fcn.00012ed8(*(arg1 + 0x28),4,arg3);
    fcn.00012ed8(*(arg1 + 0x28),0x14,arg3);
    return 0;
}


/* fcn.00011a1c @ 0x11a1c */

void fcn.00011a1c(int64_t arg1)

{
    int64_t iVar1;
    
    fcn.000116d8(arg1);
    iVar1 = fcn.00013060(*(arg1 + 0x28));
    if (-1 < iVar1) {
        iVar1 = *(arg1 + 0x28);
        *(iVar1 + 0x1044) = *(iVar1 + 0x1044) | 3;
        *(iVar1 + 0x1040) = *(iVar1 + 0x1040) & 0xff | 0x40600;
        *(iVar1 + 0x1048) = 0xc;
        *(arg1 + 0x3d) = *(arg1 + 0x3d) & 0xffffffdd;
        *(arg1 + 0x3d) = *(arg1 + 0x3d) | 0x1c;
        *(*(arg1 + 0x28) + 0x104c) = *(arg1 + 0x3d);
        *(*(arg1 + 0x28) + 0x1040) = *(*(arg1 + 0x28) + 0x1040) | 1;
        iVar1 = fcn.00012fdc(*(arg1 + 0x28));
        if (-1 < iVar1) {
            iVar1 = *(arg1 + 0x28);
            *(iVar1 + 0x1044) = *(iVar1 + 0x1044) | 3;
            *(iVar1 + 0x1040) = *(iVar1 + 0x1040) & 0xff | 0x40600;
            *(iVar1 + 0x1048) = 0xc;
            *(arg1 + 0x3d) = *(arg1 + 0x3d) | 1;
            *(*(arg1 + 0x28) + 0x104c) = *(arg1 + 0x3d);
            *(*(arg1 + 0x28) + 0x1040) = *(*(arg1 + 0x28) + 0x1040) | 1;
            fcn.00012fdc(*(arg1 + 0x28));
        }
    }
    return;
}


/* fcn.00013060 @ 0x13060 */

ulong fcn.00013060(int64_t arg1)

{
    int iVar1;
    
    iVar1 = 1000;
    do {
        if ((*(arg1 + 0x1044) & 8) == 0) {
            return 0;
        }
        (**(*0x139c8 + 0xf8))(1000);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x8000000000000012;
}


/* fcn.00012fdc @ 0x12fdc */

uint64_t fcn.00012fdc(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    
    iVar2 = 1000;
    do {
        if ((*(arg1 + 0x1044) & 8) == 0) break;
        (**(*0x139c8 + 0xf8))(1000);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar2 == 0) {
        uVar1 = 0x8000000000000012;
    }
    else if ((*(arg1 + 0x1044) & 2) == 0) {
        uVar1 = ~-((*(arg1 + 0x1044) & 1) != 0) & 0x8000000000000007;
    }
    else {
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.00011e58 @ 0x11e58 */

int64_t fcn.00011e58(int64_t arg1)

{
    uint64_t *arg1_00;
    int64_t *piVar1;
    uint64_t *arg1_01;
    uint8_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t arg2;
    int64_t iStackX_8;
    
    iVar5 = *(arg1 + 0x18);
    arg1_00 = arg1 + 0x71;
    arg2 = 0;
    iVar4 = (**(iVar5 + 0x58))(iVar5,0,4,0x10,arg1_00,0);
    if (-1 < iVar4) {
        iStackX_8 = 0x10000;
        iVar4 = (**(iVar5 + 0x48))(iVar5,2,*arg1_00,&iStackX_8,arg1 + 0x79,arg1 + 0x81);
        if ((iVar4 < 0) || (iStackX_8 != 0x10000)) {
            iVar5 = -0x7ffffffffffffff7;
code_r0x00011f85:
            if (iVar5 < 0) {
                return iVar5;
            }
            uVar7 = *arg1_00;
            arg1_01 = arg1 + 0x10251;
            uVar3 = *arg1_01;
            iVar5 = *(arg1 + 0x28);
            if (((uVar3 | uVar7) & 0xfff) != 0) {
                return -0x7ffffffffffffffe;
            }
            *(iVar5 + 0x1090) = uVar3 & 0xfffff000;
            *(iVar5 + 0x1094) = uVar3 >> 0x20;
            *(iVar5 + 0x1200) = uVar7 & 0xfffff000;
            *(iVar5 + 0x1204) = uVar7 >> 0x20;
            *(arg1 + 0x10249) = 0x10;
            *(arg1 + 0x20429) = 1;
            *(arg1 + 0x2042d) = ((*(arg1 + 0x39) >> 0xe & 0x3ff) + 1) * 0x40;
            *(arg1 + 0x1024d) = ((*(arg1 + 0x39) & 0x3fff) + 1) * 0x40;
            iVar5 = fcn.00011c8c(arg1,arg1_00);
            if (iVar5 < 0) {
                return iVar5;
            }
            uVar7 = arg2;
            if (*(arg1 + 0x10249) != 0) {
                do {
                    fcn.00011bfc(arg1_00,uVar7);
                    uVar6 = uVar7 + 1;
                    uVar7 = uVar6;
                } while (uVar6 < *(arg1 + 0x10249));
            }
            iVar5 = fcn.00011c8c(arg1,arg1_01);
            if (-1 < iVar5) {
                if (*(arg1 + 0x20429) != 0) {
                    do {
                        fcn.00011bfc(arg1_01,arg2);
                        uVar6 = arg2 + 1;
                        arg2 = uVar6;
                    } while (uVar6 < *(arg1 + 0x20429));
                }
                iVar5 = *(arg1 + 0x28);
                uVar2 = *(arg1 + 0x11281);
                *(iVar5 + 0x1208) = (*(arg1 + 0x10a1) - 1 & 0xff) << 8 | *(iVar5 + 0x1208) & 0xffff008f | 0xf;
                *(iVar5 + 0x1098) = (uVar2 - 1) * 0x1000000 | *(iVar5 + 0x1098) & 0xffffff;
                *(*(arg1 + 0x28) + 0x120c) = *(*(arg1 + 0x28) + 0x120c) & 0xff80ffff | 0x800021;
                return 0;
            }
            return iVar5;
        }
        fcn.000102c0(*arg1_00,0x10000);
        piVar1 = arg1 + 0x10251;
        iVar4 = (**(iVar5 + 0x58))(iVar5,0,4,1,piVar1,0);
        if (-1 < iVar4) {
            iStackX_8 = 0x1000;
            iVar5 = (**(iVar5 + 0x48))(iVar5,2,*piVar1,&iStackX_8,arg1 + 0x10259,arg1 + 0x10261);
            if ((-1 < iVar5) && (iStackX_8 == 0x1000)) {
                fcn.000102c0(*piVar1,0x1000);
                goto code_r0x00011f85;
            }
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00012cac @ 0x12cac */

void fcn.00012cac(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    
    *(arg1 + 0x20488) = 0;
    *(arg1 + 0x20490) = 0;
    *(arg1 + 0x20480) = 0;
    *(arg1 + 0x204a8) = 0;
    puVar1 = arg1 + 0x20460;
    *(arg1 + 0x204b0) = 0;
    *(arg1 + 0x20498) = 0x7fff;
    *(arg1 + 0x204a0) = 0x7fff;
    *(arg1 + 0x20478) = arg1 + 0x20480;
    *puVar1 = 0x12c2c;
    iVar2 = *0x139c8;
    *(arg1 + 0x20468) = 0x12c38;
    iVar2 = (**(iVar2 + 0x50))(0x100,0x10,0x12c28,arg1,arg1 + 0x20470);
    if (-1 < iVar2) {
        if (*(arg1 + 0x2050c) == 1) {
            (**(*0x139c8 + 0x148))(arg1 + 8,0x13840,puVar1,0x137e0,0,0);
        }
        if (*(arg1 + 0x20510) == 1) {
            (**(*0x139c8 + 0x148))(arg1 + 8,0x13840,puVar1,0);
        }
    }
    return;
}


/* fcn.00012aec @ 0x12aec */

int64_t fcn.00012aec(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    ulong in_RDX;
    uint *puVar2;
    int iVar3;
    int64_t in_R8;
    uint uStackX_8;
    uint uStackX_c;
    uint uStack_18;
    uchar auStack_14 [3];
    int32_t var_9h;
    
    uStack_18 = 0;
    _auStack_14 = 0;
    uStackX_8 = 7;
    uStackX_c = 9;
    *(arg1 + 0x204e8) = 1;
    arg1_00 = fcn.0001318c(arg1,in_RDX,in_R8);
    *(arg1 + 0x204e0) = arg1_00;
    if (arg1_00 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        fcn.000102c0(arg1_00,0x1000);
        puVar2 = &uStack_18;
        iVar1 = fcn.00012418(arg1,puVar2,&uStackX_8);
        if (-1 < iVar1) {
            iVar3 = 10000;
            do {
                if ((*(arg1 + 0x204e9) == '\x01') && (*(arg1 + 0x20506) == '\x01')) {
                    iVar1 = 0;
                    break;
                }
                fcn.00013744(1000,puVar2);
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            if (iVar3 == 0) {
                iVar1 = -0x7fffffffffffffee;
            }
            else {
                *(arg1 + 0x204e8) = 0;
                puVar2 = arg1_00 + 0x40;
                *(arg1 + 0x204e0) = arg1_00;
                iVar3 = *(arg1_00 + 4);
                *(arg1 + 0x204e0) = puVar2;
                if (&uStack_18 != puVar2) {
                    section..text(&uStack_18,puVar2,9);
                }
                if (_auStack_14 == 0) {
                    *(arg1 + 0x204e0) = *(arg1 + 0x204e0) + 8;
                    fcn.000111fc(arg1,*(arg1 + 0x204e0),iVar3 - 9);
                }
                else {
                    iVar1 = -0x7ffffffffffffff0;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00012418 @ 0x12418 */

ulong fcn.00012418(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t arg2_00;
    int64_t iVar7;
    uint64_t arg1_00;
    uint8_t uVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t *puVar11;
    
    uVar8 = 0;
    piVar1 = *(arg1 + 0x10251);
    uVar10 = 0;
    if ((*(arg3 + 4) & 3) != 0) {
        uVar8 = 4 - (*(arg3 + 4) & 3);
    }
    puVar11 = piVar1 + 1;
    uVar4 = *(arg3 + 4) + uVar8;
    arg2_00 = uVar4;
    if ((*puVar11 & 0xffffff) << 8 < arg2_00 + 8) {
        uVar5 = 0x8000000000000005;
    }
    else {
        iVar7 = *piVar1 * 0x400;
        if (uVar8 != 0) {
            *(arg3 + 4) = uVar4;
        }
        if (iVar7 != arg3) {
            arg2_00 = arg3;
            section..text(iVar7,arg3,8);
        }
        *(arg3 + 4) = *(arg3 + 4) - uVar8;
        arg1_00 = iVar7 + 8;
        uVar4 = (*(piVar1 + 1) & 0xffffff) - 8;
        do {
            *puVar11 = *puVar11 & 0xfffffffffeffffff;
            uVar3 = *(arg3 + 4);
            if (uVar4 <= *(arg3 + 4)) {
                uVar3 = uVar4;
            }
            if ((uVar3 != 0) && (arg1_00 != arg2)) {
                arg2_00 = arg2;
                section..text(arg1_00,arg2,uVar3);
            }
            *(arg3 + 4) = *(arg3 + 4) - uVar3;
            uVar6 = uVar3 + 8;
            if (uVar10 != 0) {
                uVar6 = uVar3;
            }
            *puVar11 = *puVar11 & 0xffffffffff000000;
            *puVar11 = *puVar11 | uVar6 & 0xffffff;
            if (*(arg3 + 4) == 0) break;
            uVar10 = uVar10 + 1;
            arg2 = arg2 + uVar6;
            puVar11 = piVar1 + uVar10 * 2 + 1;
            uVar4 = *puVar11 & 0xffffff;
            arg1_00 = piVar1[uVar10 * 2] << 10;
        } while (uVar10 < *(arg1 + 0x11281));
        if (uVar8 != 0) {
            arg2_00 = uVar8;
            uVar2 = piVar1[uVar10 * 2 + 1];
            piVar1[uVar10 * 2 + 1] = (uVar2 + arg2_00 ^ uVar2) & 0xffffff ^ uVar2;
            if (uVar8 != 0) {
                fcn.000102c0(arg1_00 + uVar6,arg2_00);
            }
        }
        iVar9 = 100;
        piVar1[uVar10 * 2 + 1] = piVar1[uVar10 * 2 + 1] | 0x1000000;
        *(*(arg1 + 0x28) + 0x1098) = *(*(arg1 + 0x28) + 0x1098) | 9;
        iVar7 = *(arg1 + 0x28);
        do {
            if ((*(iVar7 + 0x1098) & 1) == 0) {
                *(iVar7 + 0x109c) = *(iVar7 + 0x109c) | 1;
                fcn.00011bfc(arg1 + 0x10251,0);
                return 0;
            }
            fcn.00013744(1,arg2_00);
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar5 = 0x8000000000000012;
    }
    return uVar5;
}


/* fcn.00013744 @ 0x13744 */

int64_t fcn.00013744(int64_t arg1,int64_t arg2)

{
    fcn.000136e4((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000136e4 @ 0x136e4 */

void fcn.000136e4(int64_t arg1)

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


/* fcn.00010bd0 @ 0x10bd0 */

int64_t fcn.00010bd0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x20440) == 0) {
        if (*(arg1_00 + 0x204e8) == '\x01') {
            iVar1 = -0x7fffffffffffffec;
        }
        else if (*(arg1_00 + 0x20506) == '\0') {
            iVar1 = -0x5ffffffffffffffe;
        }
        else {
            if (arg4 != 0) {
                *(arg1_00 + 0x204e8) = 1;
                *(arg1_00 + 0x204e0) = arg3;
            }
            iVar1 = fcn.00012418(arg1_00,arg3,arg2);
            if ((-1 < iVar1) && (arg4 != 0)) {
                do {
                    if ((*(arg1_00 + 0x204e9) == '\x01') && (*(arg1_00 + 0x20506) == '\x01')) {
                        iVar1 = 0;
                        break;
                    }
                    fcn.00013744(1000,arg3);
                    arg4 = arg4 + -1;
                } while (arg4 != 0);
                if (arg4 == 0) {
                    iVar1 = -0x7fffffffffffffee;
                }
            }
            *(arg1_00 + 0x204e8) = 0;
            *(arg1_00 + 0x204e0) = 0;
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffa;
    }
    return iVar1;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 13568 named .text
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


/* fcn.00010d84 @ 0x10d84 */

void fcn.00010d84(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x34) != 0) {
        *(arg2 + 4) = 1;
    }
    if (*(iVar2 + 0x38) != 0) {
        *(arg2 + 8) = 1;
    }
    if ((*(iVar2 + 0xc) != 0) && (*(iVar2 + 0x10) != 0)) {
        iVar1 = fcn.000131c8(iVar2,(*arg2 + 1) * 0x2d14);
        if (iVar1 != 0) {
            if (*arg2 != 0) {
                if ((*arg2 * 0x2d14 != 0) && (iVar1 != *(arg2 + 0xc))) {
                    section..text(iVar1,*(arg2 + 0xc),*arg2 * 0x2d14);
                }
                (**(*0x139c8 + 0x48))(*(arg2 + 0xc));
            }
            *(arg2 + 0xc) = iVar1;
            iVar1 = *arg2 * 0x2d14 + iVar1;
            if (iVar1 != iVar2 + 0x40) {
                section..text(iVar1,iVar2 + 0x40,0x2d14);
            }
            *arg2 = *arg2 + 1;
        }
    }
    return;
}


/* fcn.00010e40 @ 0x10e40 */

void fcn.00010e40(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int *piVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t *puVar3;
    int64_t iVar4;
    uint32_t in_register_00000014;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 1) {
        *puVar3 = in_register_00000014;
        if (in_register_00000014 != 9) {
            return;
        }
        puVar3[1] = puVar3[1] + 1;
        puVar3[2] = puVar3[1];
        return;
    }
    if (arg2 == 2) {
        if (0xffff < in_register_00000014) {
            *puVar3 = in_register_00000014 >> 0x10;
            in_register_00000014 = in_register_00000014 & 0xffff;
        }
        puVar3[1] = puVar3[1] + 1;
        uVar2 = puVar3[1];
        if (*puVar3 == 0xd) {
            if (in_register_00000014 == 4) {
                puVar3[0xd] = 1;
                puVar3[0x12] = 1;
            }
            if (in_register_00000014 == 5) {
                puVar3[0xe] = 1;
                puVar3[0x13] = 1;
            }
            if (in_register_00000014 == 2) {
                puVar3[0xf] = 1;
                puVar3[0x14] = 1;
            }
            if (in_register_00000014 == 0x42) {
                puVar3[2] = uVar2;
            }
        }
        if (*puVar3 != 1) {
            return;
        }
        if (in_register_00000014 == 0x30) {
            puVar3[3] = uVar2;
        }
        if (in_register_00000014 != 0x31) {
            return;
        }
        puVar3[4] = uVar2;
        return;
    }
    if (arg2 == 5) {
        puVar3[6] = in_register_00000014;
        return;
    }
    if (arg2 == 9) {
        puVar3[5] = in_register_00000014;
        return;
    }
    if (arg2 == 0x1d) {
        puVar3[7] = in_register_00000014;
        return;
    }
    if (arg2 != 0x20) {
        if (arg2 == 0x21) {
            if (puVar3[0x10] != 0xffff) {
                fcn.00010d84(arg1,arg3);
            }
            puVar3[0x10] = in_register_00000014;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            fcn.000102c0(puVar3 + 0x15,0x2d00);
            puVar3[0x11] = 1;
            *(puVar3 + 0x20) = 0;
            return;
        }
        if (arg2 == 0x25) {
            puVar3[8] = in_register_00000014;
            return;
        }
        if (arg2 != 0x28) {
            return;
        }
        if (in_register_00000014 != 2) {
            return;
        }
        uVar2 = puVar3[0x11];
        if (*((uVar2 - 1) * 0x2d + 0x80 + puVar3) == '\x01') {
            puVar3[0x11] = uVar2 + 1;
            *(uVar2 * 0x2d + 0x7c + puVar3) = *((uVar2 - 1) * 0x2d + 0x7c + puVar3);
        }
        *((puVar3[0x11] - 1) * 0x2d + 0x80 + puVar3) = 1;
        return;
    }
    iVar4 = (puVar3[0x11] - 1) * 0x2d;
    if (((*(iVar4 + 0x68 + puVar3) == 0) && (puVar3[2] != 0)) && (puVar3[1] == puVar3[2])) {
        *(iVar4 + 100 + puVar3) = *(iVar4 + 0x7c + puVar3);
        iVar4 = (puVar3[0x11] - 1) * 0x2d;
        *(iVar4 + 0x68 + puVar3) = puVar3[7] * puVar3[8] + *(iVar4 + 0x7c + puVar3);
    }
    else {
        if (*(iVar4 + 0x70 + puVar3) == 0) {
            if (((*(iVar4 + 0x78 + puVar3) == 0) && (puVar3[3] != 0)) && (puVar3[4] != 0)) {
                *(iVar4 + 0x6c + puVar3) = *(iVar4 + 0x7c + puVar3);
                iVar4 = (puVar3[0x11] - 1) * 0x2d;
                *(iVar4 + 0x70 + puVar3) = *(iVar4 + 0x7c + puVar3) + puVar3[7];
                *((puVar3[0x11] - 1) * 0x2d + 0x54 + puVar3) = puVar3[5];
                *((puVar3[0x11] - 1) * 0x2d + 0x58 + puVar3) = puVar3[6];
                piVar1 = (puVar3[0x11] - 1) * 0x2d + 0x7c + puVar3;
                *piVar1 = *piVar1 + puVar3[7];
                iVar4 = (puVar3[0x11] - 1) * 0x2d;
                *(iVar4 + 0x74 + puVar3) = *(iVar4 + 0x7c + puVar3);
                iVar4 = (puVar3[0x11] - 1) * 0x2d;
                *(iVar4 + 0x78 + puVar3) = *(iVar4 + 0x7c + puVar3) + puVar3[7];
                *((puVar3[0x11] - 1) * 0x2d + 0x5c + puVar3) = puVar3[5];
                *((puVar3[0x11] - 1) * 0x2d + 0x60 + puVar3) = puVar3[6];
                iVar4 = (puVar3[0x11] - 1) * 0x2d;
                uVar2 = puVar3[7];
                goto code_r0x00010fab;
            }
            if (((*(iVar4 + 0x70 + puVar3) == 0) && (puVar3[3] != 0)) && (puVar3[1] == puVar3[3])) {
                *(iVar4 + 0x6c + puVar3) = *(iVar4 + 0x7c + puVar3);
                iVar4 = (puVar3[0x11] - 1) * 0x2d;
                *(iVar4 + 0x70 + puVar3) = puVar3[7] * puVar3[8] + *(iVar4 + 0x7c + puVar3);
                *((puVar3[0x11] - 1) * 0x2d + 0x54 + puVar3) = puVar3[5];
                *((puVar3[0x11] - 1) * 0x2d + 0x58 + puVar3) = puVar3[6];
                goto code_r0x00010f96;
            }
        }
        if (((*(iVar4 + 0x78 + puVar3) != 0) || (puVar3[4] == 0)) || (puVar3[1] != puVar3[4])) {
            uVar2 = puVar3[8] * puVar3[7];
            goto code_r0x00010fab;
        }
        *(iVar4 + 0x74 + puVar3) = *(iVar4 + 0x7c + puVar3);
        iVar4 = (puVar3[0x11] - 1) * 0x2d;
        *(iVar4 + 0x78 + puVar3) = puVar3[7] * puVar3[8] + *(iVar4 + 0x7c + puVar3);
        *((puVar3[0x11] - 1) * 0x2d + 0x5c + puVar3) = puVar3[5];
        *((puVar3[0x11] - 1) * 0x2d + 0x60 + puVar3) = puVar3[6];
    }
code_r0x00010f96:
    puVar3[5] = 0;
    puVar3[6] = 0;
    iVar4 = (puVar3[0x11] - 1) * 0x2d;
    uVar2 = puVar3[7] * puVar3[8];
code_r0x00010fab:
    piVar1 = iVar4 + 0x7c + puVar3;
    *piVar1 = *piVar1 + uVar2;
    return;
}


/* fcn.00012ed8 @ 0x12ed8 */

void fcn.00012ed8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = 6;
    uVar2 = 0x800000;
    if (arg3 < 7) {
        if (arg3 == 6) {
            iVar1 = 1;
            goto code_r0x00012f64;
        }
        if (arg3 == 0) goto code_r0x00012f61;
        iVar1 = 6;
        if (arg3 == 1) goto code_r0x00012f64;
        if (arg3 == 2) goto code_r0x00012f2c;
        if (arg3 == 3) goto code_r0x00012f24;
        if (arg3 != 4) {
            if (arg3 != 5) {
                return;
            }
            iVar1 = 2;
            goto code_r0x00012f64;
        }
    }
    else {
        uVar2 = 0;
        if (arg3 == 7) {
code_r0x00012f61:
            iVar1 = 7;
            goto code_r0x00012f64;
        }
        if (arg3 == 8) goto code_r0x00012f64;
        if (arg3 == 9) {
code_r0x00012f2c:
            iVar1 = 5;
            goto code_r0x00012f64;
        }
        if (arg3 == 10) {
code_r0x00012f24:
            iVar1 = 4;
            goto code_r0x00012f64;
        }
        if (arg3 != 0xb) {
            return;
        }
    }
    iVar1 = 3;
code_r0x00012f64:
    *(arg1 + 0x1010) = ~(7 << (arg2 & 0x1f) | 0x800000U) & *(arg1 + 0x1010) | iVar1 << (arg2 & 0x1f) | uVar2;
    return;
}


/* fcn.00012e7c @ 0x12e7c */

ulong fcn.00012e7c(int64_t arg1)

{
    int iVar1;
    
    iVar1 = 300;
    *(arg1 + 0x1008) = *(arg1 + 0x1008) | 2;
    do {
        if ((*(arg1 + 0x1008) & 4) != 0) {
            return 0;
        }
        (**(*0x139c8 + 0xf8))(1000);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x8000000000000007;
}


/* fcn.00013150 @ 0x13150 */

void fcn.00013150(void)

{
    if (*0x138e1 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x138e1 = '\x05';
        }
        else {
            *0x138e1 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00012f90 @ 0x12f90 */

void fcn.00012f90(int64_t arg1)

{
    if ((*(arg1 + 0x1008) & 8) != 0) {
        *(arg1 + 0x1008) = *(arg1 + 0x1008) & 0xfffffff7;
        (**(*0x139c8 + 0xf8))(3000000);
    }
    *(arg1 + 0x1008) = *(arg1 + 0x1008) | 8;
    return;
}


/* fcn.00011c8c @ 0x11c8c */

ulong fcn.00011c8c(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    uint64_t *puVar12;
    uint64_t uStackX_8;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    iVar1 = *(arg1 + 0x18);
    uVar9 = 0;
    if (*(iVar4 + 0x101d8) != 0) {
        do {
            uVar7 = (*(iVar4 + 0x101dc) >> 0xc) + ((*(iVar4 + 0x101dc) & 0xfff) != 0);
            iVar6 = uVar9 * 0x101c;
            puVar12 = iVar4 + 0x18 + iVar6;
            iVar3 = (**(iVar1 + 0x58))(iVar1,0,4,uVar7,puVar12,0);
            if (iVar3 < 0) {
                return 0x8000000000000009;
            }
            uVar8 = uVar7 << 0xc;
            uStackX_8 = uVar8;
            iVar3 = (**(iVar1 + 0x48))(iVar1,2,*puVar12,&uStackX_8,iVar4 + 0x20 + iVar6,iVar4 + 0x28 + iVar6);
            if (iVar3 < 0) {
                return 0x8000000000000009;
            }
            if (uStackX_8 != uVar8) {
                return 0x8000000000000009;
            }
            if (uStackX_8 != 0) {
                fcn.000102c0(*puVar12,uStackX_8);
            }
            uVar8 = *puVar12;
            uVar11 = 0;
            uVar10 = uStackX_8;
            while( true ) {
                if ((uVar10 == 0) || (0xff < uVar11)) goto code_r0x00011e0d;
                iVar5 = uVar11 * 0x10 + iVar6;
                iVar3 = (uVar11 + 3) * 0x10 + iVar6;
                puVar12 = iVar3 + iVar4;
                *puVar12 = *puVar12 & 0xffc0000000000000;
                puVar12 = iVar3 + iVar4;
                *puVar12 = *puVar12 | uVar8 >> 10;
                uVar2 = *(iVar5 + 0x38 + iVar4);
                *(iVar5 + 0x38 + iVar4) = uVar2 & 0xfffffffffe001000 | 0x1000;
                if (uVar10 < 0x1001) break;
                uVar11 = uVar11 + 1;
                uVar8 = uVar8 + 0x1000;
                uVar10 = uVar10 - 0x1000;
            }
            *(uVar11 * 0x10 + iVar6 + 0x38 + iVar4) = uVar10 & 0xffffff | uVar2 & 0xfffffffffe000000 | 0x1000000;
code_r0x00011e0d:
            uVar7 = uVar9 + 1;
            uVar9 = uVar7;
            *(iVar4 + 0x1030 + iVar6) = uVar11 + 1;
        } while (uVar7 < *(iVar4 + 0x101d8));
    }
    return 0;
}


/* fcn.00011bfc @ 0x11bfc */

void fcn.00011bfc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t arg2_00;
    uint32_t uVar3;
    int64_t iVar4;
    
    iVar2 = *arg1;
    uVar3 = 0;
    iVar4 = (arg2 & 0xffffffffU) * 0x101c;
    iVar1 = *(iVar4 + 0x1030 + arg1);
    if (iVar1 != 0) {
        do {
            arg1_00 = (iVar1 * arg2 + uVar3) * 0x10 + iVar2;
            arg2_00 = (uVar3 + 3) * 0x10 + iVar4 + arg1;
            if (arg1_00 != arg2_00) {
                section..text(arg1_00,arg2_00,0x10);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar4 + 0x1030 + arg1));
    }
    return;
}


/* fcn.00011338 @ 0x11338 */

ulong fcn.00011338(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    char cVar7;
    int16_t iVar8;
    int iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    int64_t iVar19;
    uint32_t uStack_48;
    
    iVar5 = fcn.000131c8(arg1,0xc);
    uVar10 = 0;
    if ((iVar5 == 0) || (iVar5 = fcn.000102c0(iVar5,0xc), iVar5 == 0)) {
        uVar6 = 0x8000000000000009;
    }
    else {
        if (iVar5 != arg3) {
            section..text(iVar5,arg3,0xc);
        }
        *(arg3 + 4) = 0;
        *arg3 = 0;
        *(arg4 + 8) = 0;
        *arg4 = 0;
        *(arg4 + 0x18) = 0;
        *(arg4 + 0x10) = 0;
        if (*arg1 != 0) {
            iVar1 = *(arg1 + 0xc);
            uVar14 = uVar10;
            do {
                if (*(arg2 + 3) == *(uVar14 * 0x2d14 + iVar1)) {
                    iVar19 = uVar14 * 0x2d14;
                    uStack_48 = 0;
                    if (*(iVar19 + 4 + iVar1) == 0) {
                        return 0;
                    }
                    do {
                        uVar15 = 0;
                        uVar11 = 0;
                        if ((*(arg3 + 4) != 0) && (*(arg3 + 8) != 0)) {
                            return 0;
                        }
                        *arg3 = 0;
                        *(arg3 + 8) = 0;
                        *(arg4 + 8) = 0;
                        iVar17 = uVar10 * 0x2d + iVar19;
                        *arg4 = 0;
                        *(arg4 + 0x18) = 0;
                        *(arg4 + 0x10) = 0;
                        uVar18 = *(iVar1 + 0x2c + iVar17);
                        if (uVar18 < *(iVar1 + 0x30 + iVar17)) {
                            iVar2 = *(arg1 + 0xc);
                            uVar11 = uVar15;
                            do {
                                uVar11 = uVar11 + 1;
                                uVar15 = uVar15 + (((*((uVar18 >> 3) + 4 + arg2) & 1 << (uVar18 & 7)) != 0) <<
                                                  (uVar18 - *(iVar17 + 0x2c + iVar2) & 0x1f));
                                uVar18 = uVar18 + 1;
                                *(arg3 + 4) = uVar15;
                            } while (uVar18 < *(iVar1 + 0x30 + iVar17));
                        }
                        uVar16 = 0;
                        uVar15 = *(iVar1 + 0x34 + iVar17);
                        uVar18 = 0;
                        if (uVar15 < *(iVar1 + 0x38 + iVar17)) {
                            iVar2 = *(arg1 + 0xc);
                            uVar18 = uVar16;
                            do {
                                uVar18 = uVar18 + 1;
                                uVar16 = uVar16 + (((*((uVar15 >> 3) + 4 + arg2) & 1 << (uVar15 & 7)) != 0) <<
                                                  (uVar15 - *(iVar17 + 0x34 + iVar2) & 0x1f));
                                uVar15 = uVar15 + 1;
                                *(arg3 + 8) = uVar16;
                            } while (uVar15 < *(iVar1 + 0x38 + iVar17));
                        }
                        uVar15 = *(iVar1 + 0x24 + iVar17);
                        if (uVar15 < *(iVar1 + 0x28 + iVar17)) {
                            iVar2 = *(arg1 + 0xc);
                            do {
                                uVar3 = uVar15;
                                uVar16 = uVar15 >> 3;
                                uVar15 = uVar15 + 1;
                                *arg3 = *arg3 + (((*(uVar16 + 4 + arg2) & 1 << (uVar3 & 7)) != 0) <<
                                                (uVar3 - *(iVar2 + 0x24 + iVar17) & 0x1f));
                            } while (uVar15 < *(iVar1 + 0x28 + iVar17));
                        }
                        if (*(iVar19 + 8 + iVar1) == 1) {
                            *arg4 = *(iVar1 + 0x18 + iVar17);
                            *(arg4 + 8) = *(iVar1 + 0x14 + iVar17);
                            *(arg4 + 0x10) = *(iVar1 + 0x20 + iVar17);
                            *(arg4 + 0x18) = *(iVar1 + 0x1c + iVar17);
                        }
                        if ((*(iVar19 + 0xc + iVar1) == 1) || (*(iVar19 + 0x10 + iVar1) == 1)) {
                            iVar9 = *(arg3 + 4);
                            *arg4 = 0;
                            *(arg4 + 8) = 0x400;
                            *(arg4 + 0x10) = 0;
                            *(arg4 + 0x18) = 0x400;
                            cVar7 = iVar9;
                            iVar8 = iVar9;
                            if (uVar11 < 0x11) {
                                iVar4 = iVar8;
                                if (uVar11 < 9) {
                                    iVar4 = cVar7;
                                }
                            }
                            else {
                                iVar4 = iVar9;
                            }
                            iVar13 = *(iVar5 + 4);
                            iVar12 = 0;
                            if (iVar4 + iVar13 < 1) {
                                iVar4 = 0;
                            }
                            else {
                                if (uVar11 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar11 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                iVar4 = iVar13 + iVar4;
                            }
                            if (iVar4 < 0x400) {
                                if (uVar11 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar11 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                if (0 < iVar4 + iVar13) {
                                    if (uVar11 < 0x11) {
                                        if (uVar11 < 9) {
                                            iVar9 = cVar7;
                                        }
                                        else {
                                            iVar9 = iVar8;
                                        }
                                    }
                                    iVar12 = iVar13 + iVar9;
                                }
                            }
                            else {
                                iVar12 = 0x400;
                            }
                            iVar9 = *(arg3 + 8);
                            *(arg3 + 4) = iVar12;
                            cVar7 = iVar9;
                            iVar8 = iVar9;
                            if (uVar18 < 0x11) {
                                iVar4 = iVar8;
                                if (uVar18 < 9) {
                                    iVar4 = cVar7;
                                }
                            }
                            else {
                                iVar4 = iVar9;
                            }
                            iVar12 = *(iVar5 + 8);
                            iVar13 = 0;
                            if (iVar4 + iVar12 < 1) {
                                iVar4 = iVar13;
                            }
                            else {
                                if (uVar18 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar18 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                iVar4 = iVar12 + iVar4;
                            }
                            if (iVar4 < 0x400) {
                                if (uVar18 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar18 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                if (0 < iVar4 + iVar12) {
                                    if (uVar18 < 0x11) {
                                        if (uVar18 < 9) {
                                            iVar9 = cVar7;
                                        }
                                        else {
                                            iVar9 = iVar8;
                                        }
                                    }
                                    iVar13 = iVar12 + iVar9;
                                }
                            }
                            else {
                                iVar13 = 0x400;
                            }
                            *(arg3 + 8) = iVar13;
                        }
                        uStack_48 = uStack_48 + 1;
                        uVar10 = uStack_48;
                    } while (uStack_48 < *(iVar19 + 4 + iVar1));
                    return 0;
                }
                uVar11 = uVar14 + 1;
                uVar14 = uVar11;
            } while (uVar11 < *arg1);
        }
        uVar6 = 0x800000000000000e;
    }
    return uVar6;
}


/* fcn.00011b0c @ 0x11b0c */

void fcn.00011b0c(int64_t arg1)

{
    int64_t iVar1;
    
    fcn.000116d8(arg1);
    iVar1 = fcn.00013060(*(arg1 + 0x28));
    if (-1 < iVar1) {
        iVar1 = *(arg1 + 0x28);
        *(iVar1 + 0x1044) = *(iVar1 + 0x1044) | 3;
        *(iVar1 + 0x1040) = *(iVar1 + 0x1040) & 0xff | 0x40600;
        *(iVar1 + 0x1048) = 0xc;
        *(arg1 + 0x3d) = *(arg1 + 0x3d) & 0xffffffc5;
        *(arg1 + 0x3d) = *(arg1 + 0x3d) | 4;
        *(*(arg1 + 0x28) + 0x104c) = *(arg1 + 0x3d);
        *(*(arg1 + 0x28) + 0x1040) = *(*(arg1 + 0x28) + 0x1040) | 1;
        iVar1 = fcn.00012fdc(*(arg1 + 0x28));
        if (-1 < iVar1) {
            iVar1 = *(arg1 + 0x28);
            *(iVar1 + 0x1044) = *(iVar1 + 0x1044) | 3;
            *(iVar1 + 0x1040) = *(iVar1 + 0x1040) & 0xff | 0x40600;
            *(iVar1 + 0x1048) = 0xc;
            *(arg1 + 0x3d) = *(arg1 + 0x3d) & 0xfffffffe;
            *(*(arg1 + 0x28) + 0x104c) = *(arg1 + 0x3d);
            *(*(arg1 + 0x28) + 0x1040) = *(*(arg1 + 0x28) + 0x1040) | 1;
            fcn.00012fdc(*(arg1 + 0x28));
        }
    }
    return;
}


/* fcn.000130ac @ 0x130ac */

void fcn.000130ac(int64_t arg1)

{
    *(arg1 + 0x120c) = *(arg1 + 0x120c) & 0xff00ffde;
    *(arg1 + 0x1098) = *(arg1 + 0x1098) & 0xfffff6;
    *(arg1 + 0x109c) = *(arg1 + 0x109c) | 1;
    *(arg1 + 0x120c) = *(arg1 + 0x120c) & 0xff00ffff;
    *(arg1 + 0x1090) = 0;
    *(arg1 + 0x1094) = 0;
    *(arg1 + 0x1200) = 0;
    *(arg1 + 0x1204) = 0;
    *(arg1 + 0x1208) = *(arg1 + 0x1208) & 0xffff0080;
    *(arg1 + 0x1098) = *(arg1 + 0x1098) & 0xffffff;
    fcn.00012e7c(arg1);
    *(arg1 + 0x1008) = *(arg1 + 0x1008) & 0xfffffff7;
    return;
}


/* fcn.00012618 @ 0x12618 */

void fcn.00012618(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    int64_t iVar1;
    uint32_t uVar2;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    uVar2 = 0;
    if (*(iVar1 + 0x101d8) != 0) {
        do {
            (**(*(arg1 + 0x18) + 0x50))(*(arg1 + 0x18),*(uVar2 * 0x101c + 0x28 + iVar1));
            (**(*(arg1 + 0x18) + 0x60))
                      (*(arg1 + 0x18),(*(iVar1 + 0x101dc) >> 0xc) + ((*(iVar1 + 0x101dc) & 0xfff) != 0),
                       *(uVar2 * 0x101c + 0x18 + iVar1));
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x101d8));
    }
    return;
}


/* fcn.0001211c @ 0x1211c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

uint64_t fcn.0001211c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t arg1_00;
    int *arg1_01;
    int *arg1_02;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t arg3_00;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int *arg2_00;
    int64_t var_38h;
    uint uStack_78;
    int iStack_74;
    int iStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t var_50h;
    int32_t var_48h;
    int64_t var_40h;
    ulong uStack_40;
    int32_t var_30h;
    ulong uStack_30;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    iVar4 = *arg2;
    iVar3 = (arg3 & 0xffffU) * 0x101c;
    uVar9 = (arg3 & 0xffff) * *(iVar3 + 0x1030 + arg2);
    arg1_00 = fcn.000131c8(arg1,0x41);
    uVar7 = 0;
    if ((arg1_00 == 0) || (arg1_01 = fcn.000102c0(arg1_00,0x41), arg1_01 == NULL)) {
        return 0x8000000000000009;
    }
    uVar1 = *(iVar3 + 0x1030 + arg2);
    uVar8 = uVar7;
    arg3_00 = uVar7;
    if (uVar1 != 0) {
        do {
            uVar5 = uVar8 + uVar9;
            arg3_00 = arg3_00 + (*(iVar4 + 8 + uVar5 * 0x10) & 0xffffff);
            if ((*(iVar4 + 8 + uVar5 * 0x10) & 0x1000000) != 0) break;
            uVar6 = uVar8 + 1;
            uVar8 = uVar6;
        } while (uVar6 < uVar1);
        if (0x3f < arg3_00) {
            if ((*(iVar3 + 0x38 + arg2) & 0xffffff) < (*(iVar4 + 8 + uVar9 * 0x10) & 0xffffff)) {
                uVar8 = 0x8000000000000005;
                goto code_r0x000123dd;
            }
            arg2_00 = *(iVar4 + uVar9 * 0x10) * 0x400;
            if (arg1_01 != arg2_00) {
                section..text(arg1_01,arg2_00,0x41);
            }
            iVar2 = *arg1_01;
            uVar8 = uVar7;
            if ((iVar2 == 3) && (arg1_01[0x10] == '@')) {
                if (arg1 + 0x20500 != arg2_00 + 0x10) {
                    section..text(arg1 + 0x20500,arg2_00 + 0x10,6);
                }
code_r0x000123b9:
                iVar4 = *0x139c8;
                *(arg1 + 0x204d8) = 1;
                (**(iVar4 + 0x68))(*(arg1 + 0x20470));
                uVar8 = uVar7;
                goto code_r0x000123dd;
            }
            if (((iVar2 == 4) && (*(arg1 + 0x204e8) == '\x01')) && (arg1_02 = *(arg1 + 0x204e0), arg1_02 != NULL)) {
code_r0x000122b5:
                arg2_00 = arg2_00 + 0x10;
                if ((arg3_00 != 0) && (arg1_02 != arg2_00)) {
code_r0x000122c3:
                    section..text(arg1_02,arg2_00,arg3_00);
                }
            }
            else {
                if (((iVar2 != 5) || (*(arg1 + 0x204e8) != '\x01')) || (arg1_02 = *(arg1 + 0x204e0), arg1_02 == NULL))
                {
                    if ((((iVar2 - 3U & 0xfffffffb) != 0) || (*(arg1 + 0x204e8) != '\x01')) ||
                       (arg1_02 = *(arg1 + 0x204e0), arg1_02 == NULL)) {
                        if (iVar2 != 3) goto code_r0x000123dd;
                        uStack_68 = *(arg1 + 0x20508);
                        uStack_60 = *(arg1 + 0x20510);
                        iStack_74 = *(arg1 + 0x20503) * 0x100 + *(arg1 + 0x20502);
                        uStack_78 = 0;
                        iStack_70 = *(arg1 + 0x20505) * 0x100 + *(arg1 + 0x20504);
                        var_50h._0_4_ = *(arg1 + 0x20518);
                        iVar4 = fcn.00011338(&uStack_68,arg2_00 + 0x10,&uStack_78,&var_40h);
                        uVar8 = 0;
                        if (iVar4 != 0) goto code_r0x000123dd;
                        *(arg1 + 0x20503) = iStack_74 >> 8;
                        *(arg1 + 0x20502) = iStack_74;
                        *(arg1 + 0x20505) = iStack_70 >> 8;
                        *(arg1 + 0x20504) = iStack_70;
                        *(arg1 + 0x20501) = uStack_78;
                        *(*(arg1 + 0x20478) + 0x18) = uStack_40;
                        **(arg1 + 0x20478) = var_40h;
                        *(*(arg1 + 0x20478) + 0x20) = uStack_30;
                        *(*(arg1 + 0x20478) + 8) = _var_30h;
                        goto code_r0x000123b9;
                    }
                    goto code_r0x000122b5;
                }
                if ((arg3_00 != 0) && (arg1_02 != arg2_00)) goto code_r0x000122c3;
            }
            *(arg1 + 0x204e0) = *(arg1 + 0x204e0) + arg3_00;
            *(arg1 + 0x204e9) = 1;
            goto code_r0x000123dd;
        }
    }
    uVar8 = 0x8000000000000004;
code_r0x000123dd:
    (**(*0x139c8 + 0x48))(arg1_01);
    return uVar8;
}


/* fcn.0001318c @ 0x1318c */

int64_t fcn.0001318c(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg1;
    iVar1 = (**(*0x139c8 + 0x28))(0,4,1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    return aiStackX_18[0];
}


/* fcn.000111fc @ 0x111fc */

void fcn.000111fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint32_t uStackX_8;
    uchar auStack_2d68 [64];
    uint uStack_2d28;
    
    fcn.000102c0(auStack_2d68,0x2d54);
    uStack_2d28 = 0xffff;
    for (uVar6 = arg3 & 0xffffffff; uVar6 != 0; uVar6 = uVar6 + iVar3) {
        uVar1 = *arg2;
        uVar2 = uVar1 >> 2;
        uVar5 = uVar1 & 3;
        if (uVar1 == 0xfe) {
            uVar4 = *(arg2 + 1);
            uVar2 = *(arg2 + 2);
            iVar3 = -*(arg2 + 1);
        }
        else {
            if ((((uVar5 != 0) && (uVar5 != 1)) && (uVar5 != 2)) && (uVar5 == 3)) {
                uVar5 = 4;
            }
            uVar4 = uVar5 + 1;
            iVar3 = -1 - uVar5;
        }
        arg2 = arg2 + uVar4;
        uStackX_8 = uVar2;
        fcn.00010e40(auStack_2d68,uStackX_8,arg1 + 0x20508);
    }
    fcn.00010d84(auStack_2d68,arg1 + 0x20508);
    return;
}


/* fcn.000132cc @ 0x132cc */

ulong fcn.000132cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.00013238(arg2,arg1);
                if (iVar5 == 0) {
code_r0x000133d1:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x000133c7:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x000133df:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x000133df;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x000133c7;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x000133d1;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00013238 @ 0x13238 */

ulong fcn.00013238(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00013298:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00013298;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* fcn.000131f8 @ 0x131f8 */

void fcn.000131f8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000131c8();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


