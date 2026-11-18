// decompiled by r2ghidra: 1860_TcgLegacy.pe32
// functions: 9

/* entry0 @ 0x102dc */

void entry0(int64_t noname_0,int64_t arg1)

{
    *0x10ea8 = *(arg1 + 0x60);
    *0x10ea0 = arg1;
    fcn.00010d28();
    fcn.00010790(noname_0,arg1);
    return;
}


/* fcn.00010d28 @ 0x10d28 */

int64_t fcn.00010d28(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10eb0 == 0) {
        *0x10eb0 = 0;
        if (*(*0x10ea0 + 0x68) != 0) {
            piVar2 = *(*0x10ea0 + 0x70);
            do {
                if ((*0x10e10 == *piVar2) && (*0x10e18 == piVar2[1])) {
                    *0x10eb0 = (*(*0x10ea0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10eb0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10ea0 + 0x68));
        }
    }
    return *0x10eb0;
}


/* fcn.00010790 @ 0x10790 */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.00010790(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    bool bVar2;
    uint64_t uVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int *piVar9;
    char *pcVar10;
    uint *arg1_00;
    ulong noname_0;
    uint32_t uVar11;
    char *pcVar12;
    char *pcVar13;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_77h;
    int64_t var_7fh;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    uchar auStack_98 [8];
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uchar auStack_74 [3];
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_21h;
    int64_t var_11h;
    
    pcVar12 = NULL;
    uStack_c8 = 0;
    bVar2 = false;
    uStack_90 = *0x10e40;
    uStack_8c = *0x10e44;
    uStack_88 = *0x10e48;
    uStack_84 = *0x10e4c;
    uStack_b0 = 0;
    uStack_80 = *0x10e50;
    uStack_7c = *0x10e54;
    uStack_78 = *0x10e58;
    _auStack_74 = *0x10e5c;
    pcVar10 = pcVar12;
    do {
        if ((*(pcVar10 + 0x10e30) == *0xfed40f00) && (*(pcVar10 + 0x10e32) == *0xfed40f02)) {
            return 0;
        }
        pcVar10 = pcVar10 + 4;
    } while (pcVar10 < 0xc);
    if (*0x10e88 == 0) {
        iStackX_8 = arg1;
        iStackX_10 = arg2;
        iVar5 = (**(*0x10ea8 + 0x140))(0x10e20,0,&iStack_a8);
        if (iVar5 < 0) {
            iStack_a8 = 0;
            iVar5 = (**(*0x10ea8 + 0x140))(0x10dc0,0,0x10e98);
            if (iVar5 < 0) {
                return iVar5;
            }
            *0x10e90 = 1;
        }
        iVar5 = (**(*0x10ea8 + 0x140))(0x10dd0,0,&iStackX_18);
        if ((-1 < iVar5) && (iVar5 = (**(*0x10ea8 + 0x140))(0x10df0,0,&iStackX_20), -1 < iVar5)) {
            iStackX_8 = 0;
            iVar5 = fcn.000104e0(&uStack_90,&iStackX_8,&iStack_a0);
            iVar8 = iStackX_8;
            if ((-1 < iVar5) &&
               (iVar5 = (**(iStackX_18 + 0x48))(iStackX_18,iStack_a0 + 0x10,0,0x10,&uStack_b8), -1 < iVar5)) {
                arg1_00 = &uStack_80;
                iVar5 = fcn.000104e0(arg1_00,&iStackX_8,&uStack_c0);
                if (-1 < iVar5) {
                    iVar5 = fcn.00010610(arg1_00,uStack_c0);
                    if (iVar5 != 0xffffffff) {
                        iVar6 = iVar5;
                        (**(*0x10ea8 + 0x160))(iVar5,iStackX_8,uStack_c0);
                        iVar6 = fcn.00010610(iVar6,0x400);
                        if (iVar6 != 0xffffffff) {
                            *(iVar5 + 0xc) = iVar6;
                            *(iVar5 + 0x10) = 0x400;
                            pcVar10 = pcVar12;
                            do {
                                if ((*(pcVar10 + 0x10e30) == *0xfed40f00) && (*(pcVar10 + 0x10e32) == *0xfed40f02)) {
                                    piVar9 = fcn.00010684(*(*0x10ea0 + 0x68),*(*0x10ea0 + 0x70),0xfed40f02);
                                    uVar7 = *piVar9 - piVar9[2];
                                    goto code_r0x00010a2d;
                                }
                                pcVar10 = pcVar10 + 4;
                            } while (pcVar10 < 0xc);
                            noname_0 = 0x10e00;
                            iVar6 = fcn.000104e0(0x10e00,&iStackX_8,&uStack_c8);
                            if ((-1 < iVar6) && (uVar7 = fcn.00010610(noname_0,uStack_c8), uVar7 != 0xffffffff)) {
                                bVar2 = true;
                                (**(*0x10ea8 + 0x160))(uVar7,iStackX_8,uStack_c8);
code_r0x00010a2d:
                                *(iVar5 + 8) = uVar7;
                                *(*(iVar8 + 8) + iVar8) = *(iVar5 + 4) + iVar5;
                                *(iVar8 + 4) = iVar5;
                                fcn.0001032c(iVar5,iStack_a8);
                                *(iVar8 + 0x16) = 0xe300;
                                iVar6 = (**(iStackX_18 + 0x50))(iStackX_18,iStack_a0,uStack_b8,iVar8);
                                uVar3 = uStack_b8;
                                if ((-1 < iVar6) &&
                                   (iVar6 = (**(iStackX_20 + 0x18))(iStackX_20,0xe0000,0x20000,&iStackX_10),
                                   -1 < iVar6)) {
                                    (**(*0x10ea8 + 0x168))(&var_69h + 1,0x30);
                                    (**(iStackX_18 + 8))
                                              (iStackX_18,uStack_b8 >> 4 & 0xffff,*(uVar3 + 0x12),&var_69h + 1,0,0)
                                    ;
                                    *0x10eba = *(uVar3 + 10);
                                    *0x10ebc = *(uVar3 + 0xc);
                                    *0x10ebe = *(uVar3 + 0xe);
                                    *0x10ec0 = *(uVar3 + 0x10);
                                    *0x10eb8 = uStack_b8 >> 4;
                                    iVar8 = (**(iStackX_18 + 0x48))(iStackX_18,0x1a,0,0x10,&uStack_b0);
                                    if ((-1 < iVar8) &&
                                       ((iVar8 = (**(iStackX_18 + 0x50))(iStackX_18,10,uStack_b0,0x10eb8),
                                        -1 < iVar8 &&
                                        (iVar8 = (**(iStackX_20 + 0x18))(iStackX_20,0xe0000,0x20000,&iStackX_10),
                                        -1 < iVar8)))) {
                                        pcVar10 = pcVar12;
                                        pcVar13 = pcVar12;
                                        do {
                                            uVar11 = pcVar13;
                                            if (*(pcVar13 * 4 + 0xe0000) == 0x24454649) {
                                                uVar7 = uVar11 << 2;
                                                cVar4 = '\0';
                                                pcVar10 = uVar7 + 0xe0000;
                                                if (*(uVar7 + 0xe0005) == '\0') break;
                                                uVar7 = *(uVar7 + 0xe0005);
                                                pcVar13 = pcVar10;
                                                do {
                                                    cVar4 = cVar4 + *pcVar13;
                                                    pcVar13 = pcVar13 + 1;
                                                    uVar7 = uVar7 - 1;
                                                } while (uVar7 != 0);
                                                if (cVar4 == '\0') break;
                                            }
                                            uVar11 = uVar11 + 4;
                                            pcVar13 = uVar11;
                                        } while (uVar11 < 0x8000);
                                        if ((uVar11 != 0x8000) && (pcVar10 != NULL)) {
                                            puVar1 = pcVar10 + 4;
                                            *(pcVar10 + 0x46) = uStack_b0 >> 4;
                                            pcVar10[0x48] = '\0';
                                            pcVar10[0x49] = '\0';
                                            *puVar1 = 0;
                                            if (pcVar10[5] != '\0') {
                                                uVar7 = pcVar10[5];
                                                do {
                                                    pcVar12 = pcVar12 + *pcVar10;
                                                    pcVar10 = pcVar10 + 1;
                                                    uVar7 = uVar7 - 1;
                                                } while (uVar7 != 0);
                                            }
                                            *puVar1 = ~(pcVar12 - 1U);
                                        }
                                        (**(iStackX_20 + 8))(iStackX_20,0xe0000,0x20000,&iStackX_10);
                                        *0x10e88 = iVar5;
                                        (**(*0x10ea8 + 0x170))(0x200,8,0x103ec,iVar5,0x10db0,auStack_98);
                                        return 0;
                                    }
                                    iVar6 = (**(iStackX_20 + 8))(iStackX_20,0xe0000,0x20000,&iStackX_10);
                                }
                                if (bVar2) {
                                    (**(*0x10ea8 + 0x30))(uVar7,((uStack_c8 & 0xfff) != 0) + (uStack_c8 >> 0xc));
                                }
                            }
                            (**(*0x10ea8 + 0x30))(iVar5,(uStack_c0 >> 0xc) + ((uStack_c0 & 0xfff) != 0));
                            (**(*0x10ea8 + 0x30))(*(iVar5 + 0xc),1);
                            return iVar6;
                        }
                        (**(*0x10ea8 + 0x30))(iVar5,(uStack_c0 >> 0xc) + ((uStack_c0 & 0xfff) != 0));
                    }
                    iVar5 = -0x7ffffffffffffff7;
                }
            }
        }
    }
    else {
        iVar5 = -0x7ffffffffffffffd;
    }
    return iVar5;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 2880 named .text
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


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000104e0 @ 0x104e0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

uint64_t fcn.000104e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_20 [8];
    int64_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_20h;
    uint32_t var_18h;
    int64_t var_bp_10h;
    
    iStack_38 = 0;
    uStack_30 = 0;
    iVar1 = (**(*0x10ea8 + 0x138))(2,0x10de0,0,&uStack_30,&iStack_38);
    if ((iVar1 < 0) || (uStack_30 == 0)) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar2 = 0;
        if (uStack_30 != 0) {
            do {
                iVar1 = (**(*0x10ea8 + 0x98))(*(iStack_38 + uVar2 * 8),0x10de0,&var_20h);
                if (iVar1 < 0) {
                    (**(*0x10ea8 + 0x48))(iStack_38);
                    return 0x8000000000000001;
                }
                *arg2 = 0;
                *arg3 = 0;
                iVar1 = (**(var_20h + 0x18))(var_20h,arg1,0x19,0,arg2,arg3,auStackX_20);
            } while ((iVar1 < 0) && (uVar2 = uVar2 + 1, uVar2 < uStack_30));
        }
        (**(*0x10ea8 + 0x48))(iStack_38);
        uVar2 = ~-(uVar2 < uStack_30) & 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.00010610 @ 0x10610 */

int64_t fcn.00010610(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = 0xffffffff;
    iVar2 = (**(*0x10ea8 + 0x28))(1,5,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc),aiStackX_10);
    iVar1 = aiStackX_10[0];
    if ((iVar2 == 0) && (arg1 != 0)) {
        fcn.00010260(aiStackX_10[0],arg1);
    }
    return iVar1;
}


/* fcn.0001032c @ 0x1032c */

void fcn.0001032c(int64_t arg1,int64_t arg2)

{
    uchar auStackX_8 [8];
    int64_t aiStackX_10 [3];
    uchar auStack_18 [16];
    
    aiStackX_10[0] = 0;
    aiStackX_10[1] = 0;
    *(arg1 + 0x3d) = 0;
    *(arg1 + 0x21) = 0;
    auStackX_8[0] = 1;
    *0x10e80 = arg2;
    if (*0x10e90 == '\0') {
        *(arg1 + 0x42) = 0x10304;
        (**arg2)(arg2,auStack_18,0,aiStackX_10,aiStackX_10 + 1);
        *(arg1 + 0x25) = aiStackX_10[0];
        *(arg1 + 0x29) = *(aiStackX_10[0] + -0x28);
    }
    else {
        if (*0x10e98 == 0) {
            return;
        }
        *(arg1 + 0x42) = 0x10328;
        (**(*0x10e98 + 8))(*0x10e98,1,aiStackX_10,aiStackX_10 + 1,auStackX_8);
        *(arg1 + 0x21) = 0;
        *(arg1 + 0x25) = aiStackX_10[0];
        *(arg1 + 0x29) = 0x10000;
    }
    *(arg1 + 0x3d) = 0;
    return;
}


/* fcn.00010684 @ 0x10684 */

int16_t * fcn.00010684(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int64_t arg1_00;
    int64_t iVar5;
    
    if (arg1 != 0) {
        iVar5 = arg2 + arg1 * 0x18;
        do {
            arg1 = arg1 + -1;
            arg1_00 = iVar5 + -0x18;
            if (((arg1_00 == 0x10e10) || (iVar2 = fcn.00010280(arg1_00,0x10e10,0x10), iVar2 == 0)) &&
               (piVar3 = *(iVar5 + -8), piVar3 != NULL)) {
                iVar5 = -0x7ffffffffffffff2;
                while (iVar1 = *piVar3, iVar1 != -1) {
                    piVar4 = piVar3;
                    do {
                        if (iVar1 == 4) break;
                        piVar4 = piVar4 + piVar4[1];
                        iVar1 = *piVar4;
                    } while (iVar1 != -1);
                    if (*piVar4 == -1) {
                        piVar4 = piVar3;
                    }
                    if ((*piVar4 == 4) &&
                       ((piVar4 + 4 == 0x10da0 || (iVar2 = fcn.00010280(0x10da0,piVar4 + 4,0x10), iVar2 == 0)))) {
                        iVar5 = 0;
                        arg3 = piVar4 + 0xc;
                    }
                    piVar3 = piVar4[1] + piVar4;
                    if (-1 < iVar5) {
                        return arg3;
                    }
                }
            }
            iVar5 = arg1_00;
        } while (arg1 != 0);
    }
    return NULL;
}


