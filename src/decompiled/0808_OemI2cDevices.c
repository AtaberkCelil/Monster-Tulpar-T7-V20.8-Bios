// decompiled by r2ghidra: 0808_OemI2cDevices.pe32
// functions: 17

/* entry0 @ 0x103c0 */

void entry0(ulong noname_0,int64_t arg1)

{
    uchar auStackX_18 [16];
    
    fcn.00010434(noname_0,arg1);
    if (*0x10d10 == 0) {
        *0x10d00 = *(arg1 + 0x60);
        *0x10d08 = *(arg1 + 0x58);
        *0x10d10 = arg1;
    }
    (**(*0x10d00 + 0x170))(0x200,8,0x10504,0,0x10c60,auStackX_18);
    return;
}


/* fcn.00010434 @ 0x10434 */

void fcn.00010434(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x10cf8 = *(arg1 + 0x60);
    *0x10cf0 = arg1;
    fcn.000109cc();
    iVar3 = fcn.00010a38();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x10d20 != NULL) || (iVar3 = (**(*0x10cf8 + 0x140))(0x10c80,0,0x10d20), -1 < iVar3)) {
        (***0x10d20)(*0x10d20,0x10d28);
    }
    return;
}


/* fcn.000109cc @ 0x109cc */

int64_t fcn.000109cc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10d18 == 0) {
        *0x10d18 = 0;
        if (*(*0x10cf0 + 0x68) != 0) {
            piVar2 = *(*0x10cf0 + 0x70);
            do {
                if ((*0x10c70 == *piVar2) && (*0x10c78 == piVar2[1])) {
                    *0x10d18 = (*(*0x10cf0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10d18;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10cf0 + 0x68));
        }
    }
    return *0x10d18;
}


/* fcn.00010a38 @ 0x10a38 */

void fcn.00010a38(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000109cc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010a6f:
            if ((piVar1 == NULL) || ((*0x10ca0 == *(piVar1 + 4) && (*0x10ca8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010a6f;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.000108fc @ 0x108fc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000108fc(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_38 [16];
    int64_t var_bp_10h;
    
    iVar2 = 0;
    piStackX_18 = NULL;
    uVar3 = 0;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x10d00 + 0x140))(0x10c90,0,&iStackX_20);
    if (iVar1 < 0) {
        iVar1 = -0x5ffffffffffffffe;
    }
    else {
        iVar4 = 0;
        iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_38);
        if (-1 < iVar1) {
            do {
                if (*piStackX_18 == 0x50434146) {
                    if (auStackX_10[0] == 2) {
                        uVar3 = piStackX_18[10];
                    }
                    if ((auStackX_10[0] & 0x1c) != 0) {
                        iVar2 = *(piStackX_18 + 0x23);
                    }
                }
                if ((uVar3 != 0) && (iVar2 != 0)) goto code_r0x000109af;
                iVar4 = iVar4 + 1;
                iVar1 = (**(iStackX_20 + 8))(iVar4,&piStackX_18,auStackX_10,auStack_38);
            } while (-1 < iVar1);
            if (iVar2 == 0) {
                if (uVar3 == 0) {
                    return iVar1;
                }
                *arg1 = uVar3;
            }
            else {
code_r0x000109af:
                *arg1 = iVar2;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010818 @ 0x10818 */

int64_t fcn.00010818(int64_t arg1)

{
    int64_t iVar1;
    uint32_t in_ECX;
    int64_t in_RDX;
    int64_t in_R8;
    uint8_t *puStack_28;
    
    iVar1 = fcn.00010600(in_ECX,in_RDX,in_R8,3);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (*puStack_28 < 2) {
        if (1 < arg1) {
            return -0x7ffffffffffffffe;
        }
        *puStack_28 = arg1;
    }
    else if (*puStack_28 == 10) {
        puStack_28[1] = arg1;
    }
    else if (*puStack_28 == 0xb) {
        *(puStack_28 + 1) = arg1;
    }
    else if (*puStack_28 == 0xc) {
        *(puStack_28 + 1) = arg1;
    }
    else {
        if (*puStack_28 != 0xe) {
            return -0x7ffffffffffffffe;
        }
        *(puStack_28 + 1) = arg1;
    }
    return 0;
}


/* fcn.0001088c @ 0x1088c */

int64_t fcn.0001088c(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    
    if (*CONCAT44(in_register_0000000c,arg1) == 0x54445344) {
        iVar1 = fcn.00010600(arg1 + 0x24,CONCAT44(in_register_0000000c,arg1)[1] - 0x25,0x10cc0,6);
        if (-1 < iVar1) {
            iVar1 = fcn.00010818(arg3);
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffe;
    }
    return iVar1;
}


/* fcn.000105a8 @ 0x105a8 */

ulong fcn.000105a8(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    uVar1 = in(0x66);
    if ((uVar1 & 2) != 0) {
        do {
            if (0x1ffff < uVar2) {
                return 0x8000000000000007;
            }
            fcn.00010a88(0x35);
            uVar1 = in(0x66);
            uVar2 = uVar2 + 1;
        } while ((uVar1 & 2) != 0);
        if (0x1ffff < uVar2) {
            return 0x8000000000000007;
        }
    }
    out(0x66,0xaa);
    return 0;
}


/* fcn.00010a88 @ 0x10a88 */

void fcn.00010a88(int64_t arg1)

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
            fcn.000102c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010ba0 @ 0x10ba0 */

int64_t fcn.00010ba0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00010600 @ 0x10600 */

ulong fcn.00010600(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    char *pcVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    int *piVar5;
    char *pcVar6;
    char cVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int *piVar10;
    char cVar11;
    int64_t iVar12;
    char *pcVar13;
    int *piVar14;
    int iVar15;
    int aiStackX_8 [2];
    int64_t *in_stack_00000028;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    do {
        iVar12 = 0;
        cVar11 = *arg3;
        while (cVar11 != '\0') {
            iVar12 = iVar12 + 1;
            cVar11 = *(iVar12 + arg3);
        }
        aiStackX_8[0] = 0x5f5f5f5f;
        fcn.00010ba0(aiStackX_8,arg3,iVar12);
        uVar8 = 0;
        if (arg2 != NULL) {
            pcVar13 = NULL;
            do {
                piVar10 = pcVar13 + piVar5;
                if (*piVar10 == aiStackX_8[0]) goto code_r0x00010666;
                uVar8 = uVar8 + 1;
                pcVar13 = uVar8;
            } while (pcVar13 < arg2);
        }
        piVar10 = NULL;
code_r0x00010666:
        if (piVar10 == NULL) {
            return 0x800000000000000e;
        }
        iVar15 = arg4;
        if (iVar15 == 1) {
            cVar11 = '\x10';
code_r0x000106e9:
            iVar12 = 0;
code_r0x000106ec:
            cVar7 = '\0';
        }
        else {
            if (iVar15 == 3) {
                cVar11 = '\b';
                goto code_r0x000106e9;
            }
            if (iVar15 != 4) {
                if (iVar15 == 5) {
                    iVar12 = 0;
                    cVar7 = '[';
                    cVar11 = -0x7b;
                    goto code_r0x000106ee;
                }
                if (iVar15 == 6) {
                    iVar12 = 0;
                    cVar7 = '[';
                    cVar11 = -0x7e;
                    goto code_r0x000106ee;
                }
                if (iVar15 != 7) {
                    if (iVar15 == 8) {
                        iVar12 = 3;
                        cVar7 = '[';
                        cVar11 = -0x7c;
                    }
                    else {
                        if (iVar15 != 9) {
                            return 0x800000000000000e;
                        }
                        iVar12 = 0;
                        cVar7 = '[';
                        cVar11 = -0x80;
                    }
                    goto code_r0x000106ee;
                }
                iVar12 = 1;
                cVar11 = '\x14';
                goto code_r0x000106ec;
            }
            iVar12 = 6;
            cVar7 = '[';
            cVar11 = -0x7d;
        }
code_r0x000106ee:
        piVar14 = piVar10;
        if ((*(piVar10 + -1) + 0xa4U & 0xfd) == 0) {
            piVar14 = piVar10 + -1;
        }
        if (cVar11 == '\b') {
            if (cVar7 == '\0') {
                pcVar13 = piVar14 + -1;
                cVar7 = *pcVar13;
code_r0x00010710:
                if (cVar7 == cVar11) {
                    *(in_stack_00000028 + 0x1c) = 0;
                    *in_stack_00000028 = pcVar13;
code_r0x000107e3:
                    in_stack_00000028[1] = piVar14;
                    *(in_stack_00000028 + 3) = iVar15;
                    in_stack_00000028[2] = piVar10 + iVar12 + 4;
                    return 0;
                }
            }
            else {
code_r0x0001073c:
                iVar2 = 2;
                pcVar13 = piVar14 + -2;
                do {
                    if (cVar7 == '\0') {
                        pcVar6 = NULL;
                    }
                    else {
                        pcVar6 = pcVar13 + -1;
                    }
                    if (((pcVar6 == NULL) || (*pcVar6 == cVar7)) && (*pcVar13 == cVar11)) {
                        pcVar3 = pcVar13;
                        if (pcVar6 != NULL) {
                            pcVar3 = pcVar6;
                        }
                        *in_stack_00000028 = pcVar3;
                        uVar1 = pcVar13[1];
                        if ((uVar1 & 0xc0) == 0) {
                            uVar9 = uVar1 & 0x3f;
                        }
                        else {
                            uVar9 = uVar1 & 0xf;
                            uVar1 = uVar1 >> 6;
                            if (uVar1 == 1) {
                                uVar8 = pcVar13[2];
code_r0x000107d7:
                                uVar4 = uVar8 << 4;
                            }
                            else {
                                if (uVar1 == 2) {
                                    uVar8 = *(pcVar13 + 2);
                                    goto code_r0x000107d7;
                                }
                                if (uVar1 != 3) goto code_r0x000107df;
                                uVar4 = (*(pcVar13 + 2) & 0xffffff) << 4;
                            }
                            uVar9 = uVar9 | uVar4;
                        }
code_r0x000107df:
                        *(in_stack_00000028 + 0x1c) = uVar9;
                        goto code_r0x000107e3;
                    }
                    iVar2 = iVar2 + 1;
                    pcVar13 = pcVar13 + -1;
                } while (iVar2 < 6);
            }
        }
        else {
            if ((cVar11 != -0x80) || (cVar7 == '\0')) goto code_r0x0001073c;
            pcVar13 = piVar14 + -2;
            if (*pcVar13 == cVar7) {
                cVar7 = *(piVar14 + -1);
                goto code_r0x00010710;
            }
        }
        arg2 = piVar5 + arg2 + (4 - piVar10);
        piVar5 = piVar10 + 1;
    } while( true );
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


