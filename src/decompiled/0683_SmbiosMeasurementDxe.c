// decompiled by r2ghidra: 0683_SmbiosMeasurementDxe.pe32
// functions: 11

/* entry0 @ 0x10344 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11018 = *(arg2 + 0x60);
    *0x11010 = arg2;
    fcn.00010364(arg1,arg2);
    return;
}


/* fcn.00010364 @ 0x10364 */

ulong fcn.00010364(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t aiStackX_10 [3];
    
    uVar3 = 0;
    while ((*(uVar3 + 0x10fd0) != *0xfed40f00 || (*(uVar3 + 0x10fd2) != *0xfed40f02))) {
        uVar3 = uVar3 + 4;
        if (0xb < uVar3) {
            aiStackX_10[0] = arg1;
            (**(*0x11018 + 0x140))(0x10ac0,0,0x11020);
            uVar1 = *(*0x11020 + 0x20);
            if ((uVar1 < 2) || ((uVar1 == 2 && (*(*0x11020 + 0x21) < 7)))) {
                *0x11028 = 0x40;
            }
            else {
                *0x11028 = (-(uVar1 < 3) & 0xffffffff00010000) + 0xffffffff;
            }
            if (*(*0x11010 + 8) < 0x20000) {
                uVar2 = 0x8000000000000003;
            }
            else {
                uVar2 = (**(*0x11018 + 0x170))(0x200,8,0x10838,0,0x10aa0,aiStackX_10);
            }
            return uVar2;
        }
    }
    return 0;
}


/* fcn.00010468 @ 0x10468 */

int64_t fcn.00010468(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    char *pcVar3;
    
    uVar1 = *(arg1 + 1);
    pcVar3 = uVar1 + arg1;
    do {
        if (*pcVar3 == '\0') {
            pcVar3 = pcVar3 + 1;
            if (*pcVar3 == '\0') {
                return uVar1 + 2;
            }
            uVar1 = uVar1 + 1;
        }
        uVar2 = 0;
        if (*0x11028 != 0) {
            do {
                if (pcVar3[uVar2] == '\0') break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < *0x11028);
        }
        if (uVar2 == *0x11028) {
            return 0;
        }
        pcVar3 = pcVar3 + uVar2;
        uVar1 = uVar1 + uVar2;
    } while( true );
}


/* fcn.00010290 @ 0x10290 */

int64_t fcn.00010290(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t arg2)

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


/* fcn.00010a30 @ 0x10a30 */

ulong fcn.00010a30(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x11010;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.000109f0 @ 0x109f0 */

void fcn.000109f0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000109c0();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00010290(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000109c0 @ 0x109c0 */

ulong fcn.000109c0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11018 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000104b8 @ 0x104b8 */

void fcn.000104b8(uint32_t arg1)

{
    uint8_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t in_RDX;
    uint64_t uVar6;
    uint8_t *arg1_00;
    uint64_t noname_1;
    int64_t *piVar7;
    int64_t in_R8;
    uint8_t *arg1_01;
    int64_t iVar8;
    bool bVar9;
    uint8_t uStackX_8;
    unkbyte7 StackX_9;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = arg1_00 + in_RDX;
    if (arg1_00 < puVar1) {
        noname_1 = CONCAT71(StackX_9,uStackX_8);
        iVar8 = 0x10b00;
        do {
            iVar2 = fcn.00010468(arg1_00);
            if (iVar2 == 0) {
                return;
            }
            if (*arg1_00 < 0x80) {
                iVar4 = 0;
                uVar3 = 0;
                do {
                    if (*(uVar3 + iVar8) == *arg1_00) {
                        iVar4 = iVar8 + iVar4 * 0x18;
                        goto code_r0x00010533;
                    }
                    iVar4 = iVar4 + 1;
                    uVar3 = uVar3 + 0x18;
                } while (uVar3 < 0x150);
                iVar4 = 0;
code_r0x00010533:
                if (iVar4 != 0) {
                    if ((*(iVar4 + 8) == 0) || (*(iVar4 + 0x10) == 0)) goto code_r0x00010647;
                    uVar3 = 0;
                    if (*(iVar4 + 0x10) == 0) goto code_r0x0001065c;
                    piVar7 = *(iVar4 + 8) + 8;
                    do {
                        if (piVar7[1] + *piVar7 <= arg1_00[1]) {
                            if ((*(piVar7 + 2) & 1) != 0) {
                                if (&uStackX_8 != arg1_00 + *piVar7) {
                                    in_R8 = 0;
                                    fcn.00010290(&uStackX_8,arg1_00 + *piVar7,1);
                                }
                                if (uStackX_8 != 0) {
                                    uVar6 = 0;
                                    puVar5 = arg1_00 + arg1_00[1];
                                    arg1_01 = NULL;
                                    do {
                                        if ((*puVar5 == 0) && (puVar5[1] == 0)) break;
                                        arg1_01 = puVar5 + 1;
                                        if (*puVar5 != 0) {
                                            arg1_01 = puVar5;
                                        }
                                        noname_1 = 0;
                                        bVar9 = *0x11028 == 0;
                                        if (*0x11028 != 0) {
                                            do {
                                                if (arg1_01[noname_1] == 0) break;
                                                noname_1 = noname_1 + 1;
                                            } while (noname_1 < *0x11028);
                                            bVar9 = noname_1 == *0x11028;
                                        }
                                        if (bVar9) {
                                            arg1_01 = NULL;
                                            break;
                                        }
                                        puVar5 = arg1_01 + noname_1;
                                        uVar6 = uVar6 + 1;
                                    } while (uVar6 != uStackX_8);
                                    if (noname_1 != 0) {
                                        in_R8 = CONCAT71(in_R8 >> 8,0x20);
                                        fcn.000102f0(arg1_01,noname_1,in_R8);
                                    }
                                }
                            }
                            if (piVar7[1] != 0) {
                                fcn.000102d0(arg1_00 + *piVar7,piVar7[1]);
                            }
                        }
                        uVar3 = uVar3 + 1;
                        piVar7 = piVar7 + 4;
                    } while (uVar3 < *(iVar4 + 0x10));
                    goto code_r0x00010655;
                }
            }
            else {
code_r0x00010647:
                if (iVar2 + -4 != 0) {
                    fcn.000102d0(arg1_00 + 4,iVar2 + -4);
code_r0x00010655:
                    iVar8 = 0x10b00;
                }
            }
code_r0x0001065c:
            arg1_00 = arg1_00 + iVar2;
        } while (arg1_00 < puVar1);
    }
    return;
}


/* fcn.00010680 @ 0x10680 */

int64_t fcn.00010680(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2,int64_t arg_30h,int64_t arg_38h)

{
    int64_t iVar1;
    uint auStackX_20 [2];
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    auStackX_20[0] = arg2;
    var_bp_20h = 0;
    var_18h = 0;
    var_30h = 0;
    var_28h = 0;
    iVar1 = (**(*0x11018 + 0x140))(0x10ab0,0,&var_bp_20h);
    if (iVar1 < 0) {
        iVar1 = (**(*0x11018 + 0x140))(0x10af0,0,&var_18h);
        if (-1 < iVar1) {
            iVar1 = (**(*0x11018 + 0x40))(4,0x4d,&var_28h);
            if (iVar1 < 0) {
                return iVar1;
            }
            *(var_28h + 0x1c) = 0x2d;
            *var_28h = 1;
            *(var_28h + 4) = 0x8000000b;
            (**(*0x11018 + 0x160))(var_28h + 0x20,arg1);
            iVar1 = (**(var_18h + 0x20))(var_18h,arg_30h,arg_38h,4,var_28h,auStackX_20,&var_bp_10h);
            (**(*0x11018 + 0x48))(var_28h);
        }
    }
    else {
        (**(*0x11018 + 0x40))(4,0x3f,&var_30h);
        *(var_30h + 10) = 1;
        *(var_30h + 0xe) = 0x8000000b;
        *(var_30h + 4) = 0xe;
        *(var_30h + 8) = 1;
        (**(*0x11018 + 0x160))(var_30h + 0x12,arg1,0x2d);
        *var_30h = 0x3f;
        iVar1 = (**(var_bp_20h + 0x10))(var_bp_20h,0,arg_30h,arg_38h,var_30h);
        (**(*0x11018 + 0x48))(var_30h);
    }
    return iVar1;
}


