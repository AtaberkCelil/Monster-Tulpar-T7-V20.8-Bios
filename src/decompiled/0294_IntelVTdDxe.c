// decompiled by r2ghidra: 0294_IntelVTdDxe.pe32
// functions: 48

/* entry0 @ 0x10338 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong auStackX_8 [4];
    
    *0x14068 = *(arg2 + 0x60);
    *0x14060 = arg2;
    *0x14070 = arg1;
    iVar1 = fcn.00013b68();
    uVar2 = (**(iVar1 + 8))(0x16d);
    if ((uVar2 & 1) == 0) {
        uVar3 = 0x8000000000000003;
    }
    else {
        fcn.00011590();
        auStackX_8[0] = 0;
        uVar3 = (**(*0x14068 + 0x148))(auStackX_8,0x13f50,0x13f90,0);
    }
    return uVar3;
}


/* fcn.00013b68 @ 0x13b68 */

int64_t fcn.00013b68(void)

{
    if (*0x14078 == 0) {
        (**(*0x14068 + 0x140))(0x13ef0,0,0x14078);
    }
    return *0x14078;
}


/* fcn.00011590 @ 0x11590 */

void fcn.00011590(void)

{
    ulong uStackX_8;
    ulong uStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    (**(*0x14068 + 0x170))(0x200,0x10,0x11418,0,0x13f20,&uStackX_10);
    (**(*0x14068 + 0x170))(0x200,0x10,0x11418,0,0x13f70,&uStackX_8);
    (**(*0x14068 + 0x68))(uStackX_8);
    (**(*0x14068 + 0x68))(uStackX_10);
    (**(*0x14068 + 0x170))(0x200,8,0x11474,0,0x13f60,auStackX_18);
    if (0x1ffff < *(*0x14060 + 8)) {
        (**(*0x14068 + 0x170))(0x200,8,0x11540,0,0x13ee0,auStackX_20);
    }
    return;
}


/* fcn.00013e20 @ 0x13e20 */

ulong fcn.00013e20(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x14080 == NULL) {
        if ((*0x14068 != 0) && (*(*0x14068 + 0x140) != NULL)) {
            iVar1 = (**(*0x14068 + 0x140))(0x13ed0,0,0x14080);
            if (iVar1 < 0) {
                *0x14080 = NULL;
            }
            if (*0x14080 != NULL) goto code_r0x00013e89;
        }
        return 0x8000000000000003;
    }
code_r0x00013e89:
    //WARNING: Could not recover jumptable at 0x00013ea6. Too many branches
    //WARNING: Treating indirect jump as call
    uVar2 = (***0x14080)(2,0x2008000,0,0x13f80);
    return uVar2;
}


/* fcn.00012f94 @ 0x12f94 */

ulong fcn.00012f94(int64_t noname_0,ulong noname_1,int64_t arg1)

{
    int64_t iVar1;
    
    noname_0 = noname_0 * 0x78;
    for (iVar1 = (*(*(noname_0 + *0x14090) + 8) >> 0x28 & 0xff) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    }
    return *(*(noname_0 + *0x14090) + 8 + (*(noname_0 + 0x18 + *0x14090) & 0x3ff) * 0x10);
}


/* fcn.00010bc4 @ 0x10bc4 */

ulong fcn.00010bc4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t in_stack_00000028;
    
    if ((in_stack_00000028 == 0) && (uVar4 = 0, *0x14040 != 0)) {
        piVar1 = *0x14050 + 8;
        do {
            if ((((piVar1[-1] == arg1) && (*(piVar1 + -6) == arg2)) && (*piVar1 == arg3)) &&
               ((piVar1[1] == arg4 && (piVar1[2] != 0)))) {
                if (uVar4 != *0x14040 - 1) {
                    iVar2 = uVar4 * 0x20 + *0x14050;
                    iVar3 = (*0x14040 - uVar4) * 0x20 + -0x20;
                    if ((iVar3 != 0) && (iVar2 != iVar2 + 0x20)) {
                        section..text(iVar2,iVar2 + 0x20,iVar3);
                    }
                }
                fcn.000102c0(*0x14040 * 0x20 + -0x20 + *0x14050,0x20);
                *0x14040 = *0x14040 - 1;
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar1 = piVar1 + 4;
        } while (uVar4 < *0x14040);
    }
    if (*0x14048 <= *0x14040) {
        iVar2 = fcn.00013c14((*0x14048 + 0x100) * 0x20);
        if (iVar2 == 0) {
            return 0x8000000000000009;
        }
        *0x14048 = *0x14048 + 0x100;
        if (*0x14050 != 0) {
            if ((*0x14040 << 5 != 0) && (iVar2 != *0x14050)) {
                section..text(iVar2,*0x14050,*0x14040 << 5);
            }
            (**(*0x14068 + 0x48))(*0x14050);
        }
        *0x14050 = iVar2;
    }
    iVar2 = *0x14050;
    iVar3 = *0x14040 * 0x20;
    *0x14040 = *0x14040 + 1;
    *(iVar3 + *0x14050) = arg1;
    *(iVar3 + 2 + iVar2) = arg2;
    *(iVar3 + 8 + iVar2) = arg3;
    *(iVar3 + 0x10 + iVar2) = arg4;
    *(iVar3 + 0x18 + iVar2) = in_stack_00000028;
    return 0;
}


/* fcn.00012688 @ 0x12688 */

int64_t fcn.00012688(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint64_t arg3_00;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t **arg4_00;
    uint32_t *puStack_38;
    uint32_t *puStack_30;
    
    arg4_00 = &puStack_30;
    arg3_00 = 0;
    arg1_00 = fcn.000138b4(arg1,arg2,&puStack_38,arg4_00);
    if (arg1_00 == -1) {
        return -0x7ffffffffffffff9;
    }
    iVar2 = fcn.000130c4(arg1_00,arg1 & 0xffff,arg2 & 0xffff);
    iVar3 = *0x14090;
    iVar4 = arg1_00 * 0x78;
    piVar1 = *(iVar4 + 0x58 + *0x14090) + 0x10 + iVar2 * 0x18;
    *piVar1 = *piVar1 + 1;
    if (puStack_38 == NULL) {
        if (puStack_30 == NULL) goto code_r0x000127e1;
        puStack_38 = puStack_30;
        if ((*puStack_30 & 1) != 0) goto code_r0x000127cd;
        arg3_00 = fcn.00011f8c(arg1_00,0,*(iVar4 + 0x60 + iVar3));
        *puStack_30 = *puStack_30 & 0xfff;
        iVar3 = 0x10;
        *puStack_30 = *puStack_30 | (arg3_00 >> 0xc) << 0xc;
        puStack_30[1] = arg3_00 >> 0x20;
    }
    else {
        if ((*puStack_38 & 1) != 0) {
code_r0x000127cd:
            arg3_00 = puStack_38[1] << 0x20 | *puStack_38 & 0xfffffffffffff000;
            goto code_r0x000127e1;
        }
        arg3_00 = fcn.00011f8c(arg1_00,0,*(iVar4 + 0x60 + iVar3));
        *puStack_38 = *puStack_38 & 0xfff;
        *puStack_38 = *puStack_38 | (arg3_00 >> 0xc) << 0xc;
        puStack_38[1] = arg3_00 >> 0x20;
        iVar3 = 0x20;
    }
    puStack_38[2] = puStack_38[2] & 0xff0000ff;
    puStack_38[2] = puStack_38[2] | iVar2 + 1 << 8;
    *puStack_38 = *puStack_38 | 1;
    fcn.000129cc(arg1_00,puStack_38,iVar3,arg4_00);
    iVar3 = *0x14090;
    *(iVar4 + 0x38 + *0x14090) = 1;
code_r0x000127e1:
    if (arg3_00 != *(iVar4 + 0x30 + iVar3)) {
        if (arg3_00 == 0) {
            return -0x7ffffffffffffff2;
        }
        iVar3 = fcn.000123ec(arg1_00,iVar3,arg3_00,arg3);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = *0x14090;
    }
    if ((((*(iVar4 + 0x38 + iVar3) != '\0') || (*(iVar4 + 0x39 + iVar3) != '\0')) && (*0x14088 != '\0')) &&
       (((fcn.000129f8(arg1_00,iVar3), *(iVar4 + 0x38 + *0x14090) != '\0' &&
         (fcn.00012b34(arg1_00,*0x14090), *(iVar4 + 0x38 + *0x14090) != '\0')) ||
        (iVar3 = *0x14090, *(iVar4 + 0x39 + *0x14090) != '\0')))) {
        fcn.00012bc4(arg1_00,*0x14090);
        iVar3 = *0x14090;
    }
    *(iVar4 + 0x38 + iVar3) = 0;
    return 0;
}


/* fcn.000106f8 @ 0x106f8 */

void fcn.000106f8(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint *puVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    
    uVar4 = (**(*0x14068 + 0x18))(0x10);
    piVar3 = *0x13fc0;
    if (*0x13fc0 != 0x13fc0) {
        do {
            piVar8 = piVar3;
            if (piVar8[6] == arg2) goto code_r0x00010757;
            piVar3 = *piVar8;
        } while (*piVar8 != 0x13fc0);
        if (piVar8[6] == arg2) {
code_r0x00010757:
            piVar7 = piVar8 + 7;
            piVar3 = *piVar7;
            if (*piVar7 != piVar7) {
                do {
                    piVar5 = piVar3;
                    if (piVar5[2] == arg1) goto code_r0x0001077b;
                    piVar3 = *piVar5;
                } while (*piVar5 != piVar7);
                if (piVar5[2] == arg1) {
code_r0x0001077b:
                    piVar5[3] = arg3;
                    goto code_r0x000107b4;
                }
            }
            puVar6 = fcn.00013be4();
            if (puVar6 != NULL) {
                puVar1 = puVar6 + 2;
                *puVar6 = 0x50414d48;
                *(puVar6 + 6) = arg1;
                *(puVar6 + 8) = arg3;
                *puVar1 = piVar7;
                puVar2 = piVar8[8];
                *(puVar6 + 4) = puVar2;
                *puVar2 = puVar1;
                piVar8[8] = puVar1;
            }
        }
    }
code_r0x000107b4:
    //WARNING: Could not recover jumptable at 0x000107d8. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14068 + 0x20))(uVar4);
    return;
}


/* fcn.000103a8 @ 0x103a8 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000103a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t noname_1;
    uint64_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t arg1_00;
    int64_t iVar8;
    bool bVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uStackX_8;
    int8_t var_31h;
    int16_t var_32h;
    int64_t in_stack_00000028;
    uint16_t uStack_65;
    int64_t iStack_60;
    uint16_t auStack_58 [4];
    uchar auStack_50 [8];
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar7 = 0;
    uStackX_8 = arg1;
    if (*0x14098 != 0) {
        iVar6 = 0;
        do {
            uVar1 = *(*(iVar6 + *0x14090) + 0x34);
            arg1_00 = uVar1;
            uVar2 = *(*(iVar6 + *0x14090) + 0x38);
            noname_1 = uVar2;
            bVar9 = (uVar2 >> 0x1e & 1) != 0 || uVar1 != 0;
            uVar3 = *(*(iVar6 + *0x14090) + 8);
            iVar11 = (uVar3 >> 0x28 & 0xff) + 1;
            uStack_65 = uVar3 >> 0x18;
            if (iVar11 != 0) {
                uVar4 = uStack_65 & 0x3ff;
                noname_1 = uVar4 * 2;
                arg1_00 = 0;
                do {
                    var_30h = *(*(iVar6 + *0x14090) + arg1_00 + uVar4 * 0x10);
                    var_28h = *(*(iVar6 + *0x14090) + arg1_00 + 8 + uVar4 * 0x10);
                    if (var_28h < 0) {
                        bVar9 = true;
                    }
                    arg1_00 = arg1_00 + 0x10;
                    iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
            }
            if (bVar9) {
                fcn.00013e20();
                fcn.00012f94(uVar7,noname_1,arg1_00);
                iVar12 = (uVar3 >> 0x28 & 0xff) + 1;
                iVar11 = *0x14090;
                if (iVar12 != 0) {
                    iVar10 = 0;
                    iVar8 = *0x14090;
                    do {
                        iVar11 = *0x14090;
                        var_28h = *(*(iVar6 + iVar8) + iVar10 + 8 + (uStack_65 & 0x3ff) * 0x10);
                        if (var_28h < 0) {
                            *(*(iVar6 + *0x14090) + iVar10 + 8 + (uStack_65 & 0x3ff) * 0x10) = var_28h;
                        }
                        iVar10 = iVar10 + 0x10;
                        iVar12 = iVar12 + -1;
                        iVar8 = iVar11;
                    } while (iVar12 != 0);
                }
                *(*(iVar6 + *0x14090) + 0x34) = *(*(iVar6 + iVar11) + 0x34);
            }
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 0x78;
        } while (uVar7 < *0x14098);
    }
    if ((*0x140b0 == 0) || (iVar6 = (**(*0x140b0 + 8))(*0x140b0,arg2,&uStackX_8), iVar6 < 0)) {
        iVar6 = (**(*0x14068 + 0x98))(arg2,0x13f10,&iStack_60);
        if ((iVar6 < 0) ||
           (iVar6 = (**(iStack_60 + 0x70))(iStack_60,auStack_58,auStack_50,&var_38h,&var_40h), iVar6 < 0)) {
            return -0x7ffffffffffffffd;
        }
        uStackX_8 = CONCAT71(CONCAT61(uStackX_8._2_6_,auStack_50[0]),var_40h & 7 | var_38h << 3);
        uVar5 = uStackX_8;
    }
    else {
        auStack_58[0] = uStackX_8;
        uVar5 = uStackX_8._2_2_;
    }
    iVar6 = arg3;
    if (*0x14058 == 0) {
        iVar11 = fcn.00013b68();
        uVar7 = (**(iVar11 + 8))(0x16d);
        if ((uVar7 & 4) != 0) {
            return -0x7ffffffffffffffa;
        }
        iVar11 = fcn.00010bc4(auStack_58[0],uVar5,arg3,arg4);
    }
    else {
        iVar11 = fcn.00012688(auStack_58[0],uVar5,arg3,arg4);
    }
    if (-1 < iVar11) {
        fcn.000106f8(arg2,arg3,iVar6,in_stack_00000028);
    }
    return iVar11;
}


/* fcn.00013be4 @ 0x13be4 */

ulong fcn.00013be4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14068 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 15424 named .text
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


/* fcn.00013c14 @ 0x13c14 */

void fcn.00013c14(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013be4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
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


/* fcn.000116a4 @ 0x116a4 */

ulong fcn.000116a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uint8_t *puVar6;
    uint8_t *in_stack_00000028;
    
    uVar3 = *(arg2 + 5);
    puVar6 = arg2 + 6;
    uVar4 = *(arg2 + 7);
    uVar1 = *puVar6;
    if (*arg2 - 1U < 2) {
        for (uVar5 = arg2 + 8; uVar5 < *(arg2 + 1) + arg2; uVar5 = uVar5 + 2) {
            uVar2 = ((uVar1 & 0x1f | uVar3 << 5) << 3 | uVar4 & 7) << 0xc | 0x19;
            if (arg1 != 0) {
                uVar2 = uVar2 | (arg1 & 0xffffU) << 0x20;
            }
            puVar6 = puVar6 + 2;
            uVar3 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000);
            uVar1 = *puVar6;
            uVar4 = *(uVar5 + 1);
        }
    }
    *arg3 = uVar3;
    *in_stack_00000028 = uVar4;
    *arg4 = uVar1;
    return 0;
}


/* fcn.00013568 @ 0x13568 */

int64_t fcn.00013568(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int16_t iVar5;
    uint64_t uVar6;
    char cVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    uint32_t uVar11;
    uint8_t uStack_28;
    
    iVar5 = arg2;
    uVar11 = 0;
    uStack_28 = 0;
    do {
        uVar8 = 0;
        do {
            uVar10 = uVar11;
            cVar7 = uVar8;
            uVar9 = arg3 & 0xff;
            if (iVar5 == 0) {
                uVar2 = uVar9;
            }
            else {
                uVar2 = (arg2 & 0xffffU) << 0xc | uVar9;
            }
            uVar6 = uVar9 << 5 | uVar11 & 0x1f;
            uVar9 = (uVar6 << 3 | uVar8 & 7) << 0xc;
            if (iVar5 == 0) {
                uVar4 = uVar9;
            }
            else {
                uVar4 = (arg2 & 0xffffU) << 0x20 | uVar9;
            }
            if ((*((uVar2 << 0x10 & 0x10000000 | (((uVar2 & 0xfff) << 5 | uVar11 & 0x1f) << 3 | uVar8 & 7) << 0xc) +
                  0xc0000000) == -1) && (*((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff | 2) + 0xc0000000) == -1)) {
                if (cVar7 == '\0') break;
            }
            else {
                uVar2 = arg3 & 0xff;
                iVar3 = (*arg4)(arg1,arg2 & 0xffff,uVar2,uVar11,cVar7);
                if (iVar3 < 0) {
                    return iVar3;
                }
                if (iVar5 == 0) {
                    uVar4 = uVar9;
                }
                else {
                    uVar4 = (arg2 & 0xffffU) << 0x20 | uVar9;
                }
                if (*((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff | 0xb) + 0xc0000000) == '\x06') {
                    if (iVar5 == 0) {
                        uVar4 = uVar9;
                    }
                    else {
                        uVar4 = (arg2 & 0xffffU) << 0x20 | uVar9;
                    }
                    if (*((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff | 10) + 0xc0000000) == '\x04') {
                        if (iVar5 != 0) {
                            uVar9 = (arg2 & 0xffffU) << 0x20 | uVar9;
                        }
                        cVar1 = *((uVar9 >> 4 & 0x10000000 | uVar9 & 0xffffffff | 0x19) + 0xc0000000);
                        if ((cVar1 != '\0') &&
                           (iVar3 = fcn.00013568(arg1,arg2 & 0xffff,CONCAT71(uVar2 >> 8,cVar1),arg4), iVar3 < 0)) {
                            return iVar3;
                        }
                    }
                }
                if (cVar7 == '\0') {
                    uVar9 = uVar6 << 0xf | 0xe;
                    if (iVar5 != 0) {
                        uVar9 = uVar9 | (arg2 & 0xffffU) << 0x20;
                    }
                    uVar10 = uStack_28;
                    if (-1 < *((uVar9 >> 4 & 0x10000000 | uVar9 & 0xffffffff) + 0xc0000000)) break;
                }
                uVar11 = uStack_28;
            }
            uVar10 = uVar11;
            uVar8 = cVar7 + 1U;
        } while (cVar7 + 1U < 8);
        uStack_28 = uVar10 + 1;
        uVar11 = uStack_28;
        if (0x1f < uStack_28) {
            return 0;
        }
    } while( true );
}


/* fcn.000128a8 @ 0x128a8 */

ulong fcn.000128a8(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    int64_t arg1;
    ulong uVar2;
    uint32_t uVar4;
    int iVar3;
    int64_t iVar5;
    uint32_t **arg3;
    int64_t iVar6;
    uint32_t **arg4;
    uint32_t *puStackX_18;
    uint32_t *puStackX_20;
    
    arg4 = &puStackX_20;
    arg3 = &puStackX_18;
    arg1 = fcn.000138b4(param_1,param_2,arg3,arg4);
    iVar6 = *0x14090;
    if (arg1 == -1) {
        return 0x8000000000000007;
    }
    iVar5 = arg1 * 0x78;
    if (*(iVar5 + 0x30 + *0x14090) == 0) {
        uVar2 = fcn.00011f8c(arg1,3,CONCAT71(arg3 >> 8,*(iVar5 + 0x60 + *0x14090)));
        *(iVar5 + 0x30 + iVar6) = uVar2;
    }
    uVar1 = *(iVar5 + 0x30 + iVar6);
    iVar3 = uVar1 >> 0xc;
    uVar4 = uVar1 >> 0x20;
    if (puStackX_18 == NULL) {
        if (puStackX_20 == NULL) {
            return 0;
        }
        *puStackX_20 = *puStackX_20 & 0xfff;
        *puStackX_20 = *puStackX_20 | iVar3 << 0xc;
        puStackX_20[1] = uVar4;
        puStackX_20[2] =
             puStackX_20[2] ^
             (((1 << ((*(iVar5 + 0xf + iVar6) & 7) + 2) * '\x02') + -1) * 0x100 ^ puStackX_20[2]) & 0xffff00;
        iVar6 = 0x10;
        puStackX_18 = puStackX_20;
    }
    else {
        *puStackX_18 = *puStackX_18 & 0xfff;
        *puStackX_18 = *puStackX_18 | iVar3 << 0xc;
        puStackX_18[1] = uVar4;
        puStackX_18[2] =
             puStackX_18[2] ^
             (((1 << ((*(iVar5 + 0xf + iVar6) & 7) + 2) * '\x02') + -1) * 0x100 ^ puStackX_18[2]) & 0xffff00;
        iVar6 = 0x20;
    }
    *puStackX_18 = *puStackX_18 | 1;
    fcn.000129cc(arg1,puStackX_18,iVar6,arg4);
    return 0;
}


/* fcn.00011000 @ 0x11000 */

ulong fcn.00011000(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    
    uVar4 = 0;
    if (*0x14098 != 0) {
        iVar5 = 0x48;
        uVar2 = *0x14098;
        iVar6 = *0x14090;
        do {
            uVar7 = 0;
            if (*(iVar5 + iVar6) != 0) {
                iVar3 = 0;
                do {
                    iVar1 = *(iVar5 + 0x10 + iVar6);
                    if ((((((*arg1 == -1) || (*arg1 == *(iVar3 + 3 + iVar1))) &&
                          ((*(arg1 + 2) == -1 || (*(arg1 + 2) == *(iVar3 + 5 + iVar1))))) &&
                         ((*(arg1 + 4) == -1 || (*(arg1 + 4) == *(iVar3 + 7 + iVar1))))) &&
                        ((*(arg1 + 5) == -1 || (*(arg1 + 5) == *(iVar3 + 8 + iVar1))))) &&
                       ((*(arg1 + 7) == -1 || (*(arg1 + 7) == *(iVar3 + 10 + iVar1))))) {
                        fcn.000128a8(*(iVar5 + -0x40 + iVar6),*(iVar3 + 1 + iVar1));
                        iVar6 = *0x14090;
                    }
                    uVar7 = uVar7 + 1;
                    iVar3 = iVar3 + 0x18;
                } while (uVar7 < *(iVar5 + iVar6));
                uVar2 = *0x14098;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x78;
        } while (uVar4 < uVar2);
    }
    return 0;
}


/* fcn.00010f3c @ 0x10f3c */

void fcn.00010f3c(int64_t arg1)

{
    uint64_t uVar1;
    ushort *arg3;
    ushort auStackX_8 [4];
    uint8_t auStackX_10 [8];
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    arg3 = auStackX_8;
    fcn.000116a4(*arg1,arg1 + 2,arg3,auStackX_10);
    if (*(arg1 + 2) == '\x02') {
        uVar1 = ((auStackX_10[0] & 0x1f | auStackX_8[0] << 5) << 3 | var_bp_20h & 7) << 0xc | 0x19;
        if (*arg1 != 0) {
            uVar1 = uVar1 | *arg1 << 0x20;
        }
        fcn.00013568(0,*arg1,CONCAT71(arg3 >> 8,*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000)),
                     0x10f18);
    }
    else {
        auStackX_8[0] = CONCAT11(auStackX_8[0],auStackX_10[0] << 3 | var_bp_20h & 7);
        fcn.000128a8(*arg1,auStackX_8[0]);
    }
    return;
}


/* fcn.00010d60 @ 0x10d60 */

//WARNING: Variable defined which should be unmapped: var_38h

void fcn.00010d60(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    uint64_t *arg2_00;
    uint64_t *arg2_01;
    uchar auStackX_8 [8];
    int64_t iStackX_10;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t auStack_78 [7];
    int64_t var_38h;
    
    iVar3 = *0x14068;
    *arg1 = 0;
    *arg2 = 0;
    iStackX_18 = 0;
    (**(iVar3 + 0x38))(&iStackX_18,0,auStackX_20,&iStackX_10,auStackX_8);
    do {
        puVar2 = fcn.00013be4();
        if (puVar2 == NULL) {
            return;
        }
        iVar3 = (**(*0x14068 + 0x38))(&iStackX_18,puVar2,auStackX_20,&iStackX_10,auStackX_8);
        if (iVar3 < 0) {
            (**(*0x14068 + 0x48))(puVar2);
        }
    } while (iVar3 == -0x7ffffffffffffffb);
    puVar4 = puVar2 + iStackX_18;
    arg2_01 = iStackX_10 + puVar2;
    iVar3 = iStackX_10;
    arg2_00 = puVar2;
    if (puVar2 < puVar4) {
        do {
            while (arg2_01 < puVar4) {
                if (arg2_01[1] < arg2_00[1]) {
                    if (auStack_78 != arg2_00) {
                        section..text(auStack_78,arg2_00,0x28);
                        iVar3 = iStackX_10;
                    }
                    if (arg2_00 != arg2_01) {
                        section..text(arg2_00,arg2_01,0x28);
                        iVar3 = iStackX_10;
                    }
                    if (arg2_01 != auStack_78) {
                        section..text(arg2_01,auStack_78,0x28);
                        iVar3 = iStackX_10;
                    }
                }
                arg2_01 = arg2_01 + iVar3;
            }
            arg2_00 = arg2_00 + iVar3;
            arg2_01 = arg2_00 + iVar3;
        } while (arg2_00 < puVar4);
    }
    if (puVar2 < puVar2 + iStackX_18) {
        puVar4 = puVar2 + 1;
        do {
            if ((puVar4[-1] < 8) || (puVar4[-1] - 9 < 2)) {
                uVar1 = *puVar4 + puVar4[2] * 0x1000;
                if (0x100000 < uVar1) {
                    if (*puVar4 < 0x100000000) {
                        if (*arg1 < uVar1) {
                            *arg1 = uVar1;
                        }
                    }
                    else if (*arg2 < uVar1) {
                        *arg2 = uVar1;
                    }
                }
            }
            puVar4 = puVar4 + iVar3;
        } while (puVar4 + -1 < puVar2 + iStackX_18);
    }
    (**(*0x14068 + 0x48))(puVar2);
    return;
}


/* fcn.00011770 @ 0x11770 */

int16_t * fcn.00011770(int64_t arg1)

{
    int16_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    int16_t *piVar7;
    int16_t *arg1_00;
    int16_t *piVar8;
    int16_t *arg2;
    uint8_t *arg2_00;
    uint8_t *arg4;
    ulong unaff_R13;
    int16_t *piVar9;
    uint8_t auStackX_8 [8];
    uint8_t uStackX_10;
    uint8_t auStackX_18 [8];
    ushort uStackX_20;
    
    piVar9 = NULL;
    arg2_00 = *0x14058 + 0x30;
    piVar4 = piVar9;
    while (arg2_00 < *(*0x14058 + 4) + *0x14058) {
        iVar1 = *arg2_00;
        arg2_00 = arg2_00 + *(arg2_00 + 2);
        piVar7 = piVar4 + 1;
        if (iVar1 != 0) {
            piVar7 = piVar4;
        }
        piVar4 = piVar7;
    }
    *0x14098 = piVar4;
    if (piVar4 == NULL) {
        piVar4 = 0x8000000000000007;
    }
    else {
        *0x14090 = fcn.00013c14(piVar4 * 0x78);
        if (*0x14090 == 0) {
            piVar4 = 0x8000000000000009;
        }
        else {
            piVar7 = *0x14058 + 0x30;
            if (piVar7 < *(*0x14058 + 4) + *0x14058) {
                arg1_00 = piVar9;
                piVar8 = piVar9;
                do {
                    iVar2 = *0x14090;
                    if (*piVar7 == 0) {
                        *(piVar8 + *0x14090) = *(piVar7 + 4);
                        *(piVar8 + iVar2 + 8) = piVar7[3];
                        if ((*(piVar7 + 2) & 1) == 0) {
                            *(piVar8 + iVar2 + 0x40) = '\0';
code_r0x0001185d:
                            for (arg2 = piVar7 + 8; arg2 < piVar7[1] + piVar7; arg2 = arg2 + *(arg2 + 1)) {
                                arg4 = auStackX_8;
                                arg2_00 = auStackX_18;
                                piVar4 = arg2;
                                piVar5 = fcn.000116a4(piVar7[3],arg2,arg2_00,arg4);
                                uVar3 = auStackX_18[0];
                                if (piVar5 < 0) goto code_r0x0001197d;
                                piVar4 = piVar7[3];
                                uStackX_20 = CONCAT11(auStackX_18[0],auStackX_8[0] << 3 | uStackX_10 & 7);
                                arg2_00 = uStackX_20;
                                piVar5 = fcn.00013128(arg1_00,piVar4,arg2_00,CONCAT71(arg4 >> 8,*arg2),unaff_R13);
                                if ((piVar5 < 0) && (*arg2 - 1U < 2)) goto code_r0x0001197d;
                                if (*arg2 == '\x02') {
                                    uVar6 = ((auStackX_8[0] & 0x1f | uVar3 << 5) << 3 | uStackX_10 & 7) << 0xc | 0x19;
                                    if (piVar7[3] != 0) {
                                        uVar6 = uVar6 | piVar7[3] << 0x20;
                                    }
                                    arg2_00 = CONCAT71(arg2_00 >> 8,
                                                       *((uVar6 >> 4 & 0x10000000 | uVar6 & 0xffffffff) + 0xc0000000));
                                    piVar4 = piVar7[3];
                                    piVar5 = fcn.00013568(arg1_00,piVar4,arg2_00,0x13468);
                                    if (piVar5 < 0) goto code_r0x0001197d;
                                }
                            }
                            piVar5 = piVar9;
                        }
                        else {
                            *(piVar8 + iVar2 + 0x40) = '\x01';
                            piVar5 = fcn.000137c0(arg1_00,piVar4,arg2_00);
                            if (-1 < piVar5) goto code_r0x0001185d;
                        }
code_r0x0001197d:
                        if (piVar5 < 0) {
                            return piVar5;
                        }
                        arg1_00 = arg1_00 + 1;
                        piVar8 = piVar8 + 0x3c;
                    }
                    piVar7 = piVar7 + piVar7[1];
                } while (piVar7 < *(*0x14058 + 4) + *0x14058);
            }
            piVar4 = NULL;
        }
    }
    return piVar4;
}


/* fcn.00012c94 @ 0x12c94 */

void fcn.00012c94(void)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    
    uVar5 = 0;
    if (*0x14098 != 0) {
        uVar6 = uVar5;
        iVar7 = *0x14090;
        do {
            iVar4 = *0x14090;
            *(uVar5 + 10 + *0x14090) = **(uVar5 + iVar7);
            iVar3 = *0x14090;
            *(uVar5 + 0xf + *0x14090) = *(*(uVar5 + iVar4) + 8);
            iVar7 = *0x14090;
            puVar1 = uVar5 + 0x10 + *0x14090;
            *(uVar5 + 0x17 + *0x14090) = *(*(uVar5 + iVar3) + 0x10);
            if ((*puVar1 & 0xc) == 0) {
                return;
            }
            if (1LL << ((*(uVar5 + 0xf + iVar7) & 7) + 2) * '\x02' <= *(uVar5 + 0x48 + iVar7)) {
                return;
            }
            if ((*(uVar5 + 10 + iVar7) & 0xf0) < 0x61) {
                *(uVar5 + 0x61 + iVar7) = 0;
            }
            else {
                if ((*(uVar5 + 0x17 + iVar7) & 2) == 0) {
                    return;
                }
                *(uVar5 + 0x61 + iVar7) = 1;
                iVar4 = *0x14090;
                uVar2 = *(*(uVar5 + iVar7) + 0x1c);
                if ((uVar2 & 0x4000000) != 0) {
                    *(*(uVar5 + *0x14090) + 0x18) = uVar2 & 0xfbffffff;
                    while ((*(*(uVar5 + iVar4) + 0x1c) & 0x4000000) != 0) {
                        iVar4 = *0x14090;
                    }
                }
                iVar7 = *0x14090;
                *(*(uVar5 + *0x14090) + 0x88) = 0;
                *(uVar5 + 0x62 + iVar7) = 0x100;
                iVar4 = fcn.00013ba4(iVar7,1);
                iVar7 = *0x14090;
                *(uVar5 + 0x68 + *0x14090) = iVar4;
                if (iVar4 == 0) {
                    *(uVar6 * 0x78 + 0x62 + iVar7) = 0;
                    return;
                }
                *(*(uVar5 + iVar7) + 0x90) = iVar4;
                iVar4 = *0x14090;
                *(*(uVar5 + *0x14090) + 0x18) = *(*(uVar5 + iVar7) + 0x1c) | 0x4000000;
                iVar7 = *0x14090;
                while ((*(*(uVar5 + iVar4) + 0x1c) & 0x4000000) == 0) {
                    iVar4 = *0x14090;
                }
                *(uVar5 + 0x70 + *0x14090) = 0;
            }
            uVar6 = uVar6 + 1;
            uVar5 = uVar5 + 0x78;
        } while (uVar6 < *0x14098);
    }
    return;
}


/* fcn.00012004 @ 0x12004 */

int64_t fcn.00012004(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    uint64_t arg1;
    int64_t iVar9;
    uint32_t *in_R9;
    uint64_t uVar10;
    int64_t iVar11;
    
    arg1 = 0;
    if (*0x14098 != 0) {
        iVar8 = 0;
        do {
            if ((*(iVar8 + 0x1a + *0x14090) & 1) == 0) {
                iVar3 = *(iVar8 + 0x48 + *0x14090);
                uVar5 = 0;
                if (iVar3 != 0) {
                    puVar7 = *(iVar8 + 0x58 + *0x14090) + 2;
                    do {
                        uVar1 = *puVar7;
                        puVar7 = puVar7 + 0x18;
                        if (uVar5 < uVar1) {
                            uVar5 = uVar1;
                        }
                        iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                }
                iVar4 = fcn.00011ac0(uVar5 + 2);
                iVar3 = *0x14090;
                if (iVar4 == 0) {
                    return -0x7ffffffffffffff7;
                }
                iVar9 = iVar4 + 0x1000;
                uVar10 = 0;
                *(iVar8 + 0x20 + *0x14090) = iVar4;
                iVar4 = *0x14058;
                if (*(iVar8 + 0x48 + iVar3) != 0) {
                    iVar11 = 0;
                    do {
                        iVar2 = *(iVar8 + 0x58 + iVar3);
                        uVar1 = *(iVar11 + 1 + iVar2);
                        in_R9 = *(iVar11 + 2 + iVar2) * 0x10 + *(iVar8 + 0x20 + iVar3);
                        if ((*in_R9 & 1) == 0) {
                            *in_R9 = *in_R9 & 0xffe;
                            in_R9[1] = iVar9 >> 0x20;
                            *in_R9 = *in_R9 | iVar9 & 0xfffff000 | 1;
                            iVar9 = iVar9 + 0x1000;
                        }
                        puVar6 = (in_R9[1] << 0x20 | *in_R9 & 0xfffffffffffff000) + uVar1 * 0x10;
                        *puVar6 = *puVar6 & 0xfffffff0;
                        uVar1 = *(iVar8 + 0x10 + iVar3);
                        *(iVar8 + 0x60 + iVar3) = 0;
                        if ((uVar1 & 8) == 0) {
                            if ((uVar1 & 4) == 0) {
                                return -0x7ffffffffffffffd;
                            }
code_r0x0001214f:
                            puVar6[2] = puVar6[2] & 0xfffffffa;
                            puVar6[2] = puVar6[2] | 2;
                        }
                        else {
                            *(iVar8 + 0x60 + iVar3) = 1;
                            if ((*(iVar4 + 0x24) < 0x31) && ((uVar1 & 4) != 0)) {
                                *(iVar8 + 0x60 + iVar3) = 0;
                                goto code_r0x0001214f;
                            }
                            puVar6[2] = puVar6[2] & 0xfffffffb;
                            puVar6[2] = puVar6[2] | 3;
                        }
                        uVar10 = uVar10 + 1;
                        iVar11 = iVar11 + 0x18;
                    } while (uVar10 < *(iVar8 + 0x48 + iVar3));
                }
                fcn.000129cc(arg1,*(iVar8 + 0x20 + iVar3),(uVar5 + 2) * 0x1000,in_R9);
                iVar3 = 0;
            }
            else {
                iVar3 = fcn.000139ac(arg1);
            }
            if (iVar3 < 0) {
                return iVar3;
            }
            arg1 = arg1 + 1;
            iVar8 = iVar8 + 0x78;
        } while (arg1 < *0x14098);
    }
    return 0;
}


/* fcn.000110f8 @ 0x110f8 */

void fcn.000110f8(void)

{
    int64_t iVar1;
    char *pcVar2;
    uint64_t uVar3;
    uint64_t uStackX_8;
    char *pcStackX_10;
    
    iVar1 = (**(*0x14068 + 0x140))(0x13f40,0,0x140b0);
    if ((-1 < iVar1) && (iVar1 = (**(*0x140b0 + 0x10))(*0x140b0,&uStackX_8,&pcStackX_10), -1 < iVar1)) {
        uVar3 = 0;
        pcVar2 = pcStackX_10;
        if (uStackX_8 != 0) {
            do {
                if (*pcVar2 == '\0') break;
                if (*pcVar2 == '\x01') {
                    fcn.00010f3c(pcVar2 + 2);
                }
                else if (*pcVar2 == '\x02') {
                    fcn.00011000(pcVar2 + 2);
                }
                uVar3 = uVar3 + 1;
                pcVar2 = pcVar2 + pcVar2[1];
            } while (uVar3 < uStackX_8);
        }
        (**(*0x14068 + 0x48))(pcStackX_10);
    }
    return;
}


/* fcn.000119bc @ 0x119bc */

int64_t fcn.000119bc(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int16_t *arg2;
    uchar auStackX_8 [8];
    char acStackX_10 [8];
    uint8_t uStackX_18;
    ushort uStackX_20;
    
    piVar3 = *0x14058 + 0x30;
    iVar2 = *0x14058;
    do {
        if (*(iVar2 + 4) + iVar2 <= piVar3) {
            return 0;
        }
        if (*piVar3 == 1) {
            arg2 = piVar3 + 0xc;
            if (arg2 < piVar3[1] + piVar3) {
                do {
                    if (*arg2 != '\x01') {
                        return -0x7ffffffffffffff9;
                    }
                    iVar1 = fcn.000116a4(piVar3[3],arg2,auStackX_8,acStackX_10);
                    if (iVar1 < 0) {
code_r0x00011a9f:
                        iVar2 = *0x14058;
                        goto code_r0x00011a8e;
                    }
                    uStackX_20 = CONCAT11(auStackX_8[0],acStackX_10[0] << 3 | uStackX_18 & 7);
                    iVar1 = fcn.00012688(piVar3[3],uStackX_20,*(piVar3 + 4),(*(piVar3 + 8) - *(piVar3 + 4)) + 1);
                    if (iVar1 < 0) goto code_r0x00011a9f;
                    arg2 = arg2 + *(arg2 + 1);
                } while (arg2 < piVar3[1] + piVar3);
                iVar2 = *0x14058;
            }
            iVar1 = 0;
code_r0x00011a8e:
            if (iVar1 < 0) {
                return iVar1;
            }
        }
        piVar3 = piVar3 + piVar3[1];
    } while( true );
}


/* fcn.000129f8 @ 0x129f8 */

void fcn.000129f8(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *0x14090;
    noname_0 = noname_0 * 0x78;
    if ((*(noname_0 + 0xf + *0x14090) & 0x10) != 0) {
        *(*(noname_0 + *0x14090) + 0x18) = *(*(noname_0 + *0x14090) + 0x1c) | 0x8000000;
        while ((*(*(noname_0 + iVar1) + 0x1c) & 0x8000000) != 0) {
            iVar1 = *0x14090;
        }
    }
    return;
}


/* fcn.00012b34 @ 0x12b34 */

ulong fcn.00012b34(int64_t noname_0,uint32_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uStack_18;
    ulong uStack_10;
    
    iVar4 = *0x14090;
    iVar3 = noname_0 * 0x78;
    if (*(iVar3 + 0x61 + *0x14090) == '\0') {
        uVar1 = *(*(iVar3 + *0x14090) + 0x28);
        if (uVar1 < 0) {
            uVar2 = 0x8000000000000007;
        }
        else {
            *(*(iVar3 + *0x14090) + 0x28) = uVar1 & 0x1fffffffffffffff | 0xa000000000000000;
            while (*(*(iVar3 + iVar4) + 0x28) < 0) {
                iVar4 = *0x14090;
            }
            uVar2 = 0;
        }
    }
    else {
        uStack_10 = 0;
        uStack_18 = 0x11;
        uVar2 = fcn.00012a40(noname_0,&uStack_18);
    }
    return uVar2;
}


/* fcn.00012bc4 @ 0x12bc4 */

ulong fcn.00012bc4(int64_t noname_0,uint32_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t auStack_18 [3];
    
    iVar4 = *0x14090;
    iVar3 = noname_0 * 0x78;
    if (*(iVar3 + 0x61 + *0x14090) == '\0') {
        uVar1 = *(*(iVar3 + *0x14090) + 8 + (*(iVar3 + 0x18 + *0x14090) & 0x3ff) * 0x10);
        if (uVar1 < 0) {
            uVar2 = 0x8000000000000007;
        }
        else {
            *(((*(iVar3 + 0x18 + *0x14090) & 0x3ff) << 4) + 8 + *(iVar3 + *0x14090)) =
                 uVar1 & 0xdfffffffffffffff | 0x9000000000000000;
            while (*(*(iVar3 + iVar4) + 8 + (*(iVar3 + 0x18 + iVar4) & 0x3ff) * 0x10) < 0) {
                iVar4 = *0x14090;
            }
            uVar2 = 0;
        }
    }
    else {
        auStack_18[1] = 0;
        auStack_18[0] = *(iVar3 + 0x15 + *0x14090) & 0xc0 | 0x12;
        uVar2 = fcn.00012a40(noname_0,auStack_18);
    }
    return uVar2;
}


/* fcn.00013ce0 @ 0x13ce0 */

int64_t fcn.00013ce0(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    
    if (arg2 != 0) {
        *arg2 = 0;
    }
    uVar4 = 0;
    if (*(*0x14060 + 0x68) != 0) {
        piVar3 = *(*0x14060 + 0x70);
        do {
            if ((*arg1 == *piVar3) && (*(arg1 + 8) == piVar3[1])) {
                iVar2 = (*(*0x14060 + 0x70))[uVar4 * 3 + 2];
                if (iVar2 == 0) {
                    return 0;
                }
                if ((1 < *(iVar2 + 0xf)) && (iVar1 = fcn.00013c40(*(iVar2 + 0x18),8,0x52414d44,arg1), iVar1 != 0)) {
                    return iVar1;
                }
                if ((arg2 != 0) && (*arg2 != '\0')) {
                    return 0;
                }
                iVar2 = fcn.00013c40(*(iVar2 + 0x10),4,0x52414d44,arg1);
                return iVar2;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar4 < *(*0x14060 + 0x68));
    }
    return 0;
}


/* fcn.000111a4 @ 0x111a4 */

void fcn.000111a4(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t *arg1;
    uint32_t uVar3;
    ulong *arg2;
    int64_t arg1_00;
    ulong *noname_0;
    ulong *puVar4;
    ulong *puVar5;
    uint64_t uStackX_8;
    ulong uStackX_10;
    uchar auStackX_18 [16];
    
    (**(*0x14068 + 0x140))(0x13f30,0,auStackX_18);
    arg2 = &uStackX_10;
    arg1 = &uStackX_8;
    fcn.00010d60(arg1,arg2);
    *0x140a0 = uStackX_8 + 0xfffffff & 0xfffffffff0000000;
    *0x140a8 = uStackX_10;
    uStackX_8 = *0x140a0;
    iVar1 = fcn.00011770(arg1);
    noname_0 = NULL;
    if (-1 < iVar1) {
        fcn.00012c94();
        iVar1 = fcn.00012004();
        if (-1 < iVar1) {
            fcn.000110f8();
            fcn.000119bc();
            iVar1 = fcn.00013b68();
            uVar2 = (**(iVar1 + 8))(0x16d);
            if ((uVar2 & 4) == 0) {
                if (*0x14040 != NULL) {
                    puVar4 = noname_0;
                    puVar5 = noname_0;
                    do {
                        arg2 = *(puVar5 + *0x14050 + 2);
                        fcn.00012688(*(puVar5 + *0x14050),arg2,*(puVar5 + *0x14050 + 8),*(puVar5 + *0x14050 + 0x10));
                        puVar4 = puVar4 + 1;
                        puVar5 = puVar5 + 4;
                    } while (puVar4 < *0x14040);
                }
                if (*0x14050 != 0) {
                    (**(*0x14068 + 0x48))();
                }
                *0x14050 = 0;
                *0x14040 = NULL;
                *0x14048 = 0;
            }
            if (*0x14098 != NULL) {
                puVar5 = noname_0;
                puVar4 = noname_0;
                do {
                    iVar1 = *0x14090;
                    uVar2 = *(puVar4 + *0x14090 + 0x28);
                    if (uVar2 == 0) {
                        uVar2 = *(puVar4 + *0x14090 + 0x20);
                    }
                    else {
                        uVar2 = uVar2 | 0x800;
                    }
                    *(*(puVar4 + *0x14090) + 0x20) = uVar2;
                    arg1_00 = *0x14090;
                    *(*(puVar4 + *0x14090) + 0x18) = *(*(puVar4 + iVar1) + 0x1c) | 0x40000000;
                    while ((*(*(puVar4 + arg1_00) + 0x1c) >> 0x1e & 1) == 0) {
                        arg1_00 = *0x14090;
                    }
                    fcn.000129f8(puVar5,arg1_00);
                    uVar3 = arg1_00;
                    fcn.00012b34(puVar5,uVar3);
                    fcn.00012bc4(puVar5,uVar3);
                    iVar1 = *0x14090;
                    uVar3 = *(*(puVar4 + *0x14090) + 0x1c) | 0x80000000;
                    arg2 = uVar3;
                    *(*(puVar4 + *0x14090) + 0x18) = uVar3;
                    while (-1 < *(*(puVar4 + iVar1) + 0x1c)) {
                        iVar1 = *0x14090;
                    }
                    puVar5 = puVar5 + 1;
                    puVar4 = puVar4 + 0xf;
                } while (puVar5 < *0x14098);
            }
            puVar5 = noname_0;
            if (*0x14098 != NULL) {
                arg2 = noname_0;
                do {
                    iVar1 = *0x14090;
                    if (((*(*(arg2 + *0x14090) + 8) & 0x60) == 0x60) && ((*(*(arg2 + *0x14090) + 100) & 1) != 0)) {
                        *(*(arg2 + *0x14090) + 100) = 0;
                        while ((*(*(arg2 + iVar1) + 100) & 1) != 0) {
                            iVar1 = *0x14090;
                        }
                    }
                    puVar5 = puVar5 + 1;
                    arg2 = arg2 + 0xf;
                } while (puVar5 < *0x14098);
            }
            *0x14088 = 1;
            if (*0x14098 != NULL) {
                do {
                    fcn.00012f94(noname_0,arg2,puVar5);
                    noname_0 = noname_0 + 1;
                } while (noname_0 < *0x14098);
            }
        }
    }
    return;
}


/* fcn.00012e38 @ 0x12e38 */

ulong fcn.00012e38(ulong param_1,uint64_t param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t noname_0;
    
    uVar5 = 0;
    if (*0x14098 != 0) {
        noname_0 = uVar5;
        do {
            fcn.000129f8(noname_0,param_2);
            iVar4 = *0x14090;
            *(*(uVar5 + *0x14090) + 0x18) = *(*(uVar5 + *0x14090) + 0x1c) & 0x16ffffff;
            iVar2 = *0x14090;
            while (*(*(uVar5 + iVar4) + 0x1c) < 0) {
                iVar4 = *0x14090;
            }
            uVar3 = *(*(uVar5 + *0x14090) + 0x1c) & 0xd6ffffff | 0x40000000;
            param_2 = uVar3;
            *(*(uVar5 + *0x14090) + 0x18) = uVar3;
            iVar4 = *0x14090;
            while ((*(*(uVar5 + iVar2) + 0x1c) >> 0x1e & 1) == 0) {
                iVar2 = *0x14090;
            }
            if (*(uVar5 + 0x61 + *0x14090) != '\0') {
                *(*(uVar5 + *0x14090) + 0x18) = *(*(uVar5 + *0x14090) + 0x1c) & 0xfbffffff;
                do {
                    piVar1 = uVar5 + iVar4;
                    iVar4 = *0x14090;
                } while ((*(*piVar1 + 0x1c) >> 0x1a & 1) != 0);
                param_2 = *0x14090 + uVar5;
                if (*(param_2 + 0x68) != 0) {
                    (**(*0x14068 + 0x30))
                              (*(param_2 + 0x68),((*(param_2 + 0x62) & 0xff) != 0) + (*(param_2 + 0x62) >> 8));
                    param_2 = *0x14090 + uVar5;
                    *(param_2 + 0x68) = 0;
                    *(param_2 + 0x62) = 0;
                }
                *(param_2 + 0x61) = 0;
            }
            noname_0 = noname_0 + 1;
            uVar5 = uVar5 + 0x78;
        } while (noname_0 < *0x14098);
    }
    *0x14088 = 0;
    return 0;
}


/* fcn.000137c0 @ 0x137c0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000137c0(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    char *pcStackX_18;
    int64_t iStackX_20;
    int64_t var_38h;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint32_t var_10h;
    int64_t var_bp_8h;
    
    pcStackX_18 = arg2;
    iVar1 = (**(*0x14068 + 0x138))(2,0x13ec0,0,&uStack_28,&iStack_20);
    uVar2 = 0;
    if (uStack_28 != 0) {
        do {
            piVar3 = &iStackX_20;
            (**(*0x14068 + 0x98))(*(iStack_20 + uVar2 * 8),0x13ec0,piVar3);
            iVar1 = (**(iStackX_20 + 0x88))(iStackX_20,&pcStackX_18);
            if (*pcStackX_18 != 'y') {
                do {
                    if (pcStackX_18[3] == '\x02') break;
                    pcStackX_18 = pcStackX_18 + 0x2e;
                } while (*pcStackX_18 != 'y');
                if (*pcStackX_18 != 'y') {
                    iVar1 = fcn.00013568(arg1,*(iStackX_20 + 0x90),CONCAT71(piVar3 >> 8,pcStackX_18[0xe]),0x13468);
                    if (iVar1 < 0) break;
                }
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uStack_28);
    }
    (**(*0x14068 + 0x48))(iStack_20);
    return iVar1;
}


/* fcn.00013128 @ 0x13128 */

ulong fcn.00013128(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    int64_t *piVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    int64_t iVar7;
    int64_t arg3_00;
    uint64_t uVar8;
    uint8_t uStackX_18;
    uint8_t uStackX_19;
    char in_stack_00000028;
    int8_t var_40h;
    int8_t var_41h;
    
    iVar3 = *0x14090;
    iVar7 = arg1 * 0x78;
    cVar2 = arg4;
    uVar6 = arg2;
    iVar5 = arg3;
    if ((*(iVar7 + 0x40 + *0x14090) != '\0') && (uVar8 = 0, arg1 != 0)) {
        do {
            iVar4 = fcn.000130c4(uVar8,uVar6,iVar5);
            if (iVar4 != -1) {
                return 0;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < arg1);
    }
    iVar5 = fcn.000130c4(arg1,uVar6,iVar5);
    if (iVar5 == -1) {
        uVar8 = *(iVar7 + 0x50 + iVar3);
        if (uVar8 <= *(iVar7 + 0x48 + iVar3)) {
            iVar5 = fcn.00013c14((uVar8 + 0x100) * 0x18);
            if (iVar5 == 0) {
                return 0x8000000000000009;
            }
            piVar1 = iVar7 + 0x50 + iVar3;
            *piVar1 = *piVar1 + 0x100;
            iVar4 = *(iVar7 + 0x58 + iVar3);
            if (iVar4 != 0) {
                arg3_00 = *(iVar7 + 0x48 + iVar3) * 0x18;
                if ((arg3_00 != 0) && (iVar5 != iVar4)) {
                    section..text(iVar5,iVar4,arg3_00);
                }
                (**(*0x14068 + 0x48))(*(iVar7 + 0x58 + iVar3));
            }
            *(iVar7 + 0x58 + iVar3) = iVar5;
        }
        iVar5 = *(iVar7 + 0x48 + iVar3);
        iVar4 = *(iVar7 + 0x58 + iVar3);
        uStackX_19 = arg3 >> 8;
        *(iVar4 + 2 + iVar5 * 0x18) = uStackX_19;
        uStackX_18 = arg3;
        *(iVar4 + 1 + iVar5 * 0x18) = (*(iVar4 + 1 + iVar5 * 0x18) ^ uStackX_18) & 7 ^ uStackX_18;
        *(iVar4 + 1 + iVar5 * 0x18) = uStackX_18;
        iVar5 = *(iVar7 + 0x48 + iVar3);
        iVar4 = *(iVar7 + 0x58 + iVar3);
        if (cVar2 - 1U < 2) {
            uVar8 = ((uStackX_18 >> 3 | uStackX_19 << 5) << 3 | uStackX_18 & 7) << 0xc;
            if (uVar6 != 0) {
                uVar8 = uVar8 | (arg2 & 0xffffU) << 0x20;
            }
            *(iVar4 + 3 + iVar5 * 0x18) = *((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000);
            uVar8 = ((uStackX_18 >> 3 | uStackX_19 << 5) << 3 | uStackX_18 & 7) << 0xc | 2;
            if (uVar6 != 0) {
                uVar8 = uVar8 | (arg2 & 0xffffU) << 0x20;
            }
            *(iVar4 + 5 + iVar5 * 0x18) = *((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000);
            uVar8 = ((uStackX_18 >> 3 | uStackX_19 << 5) << 3 | uStackX_18 & 7) << 0xc | 8;
            if (uVar6 != 0) {
                uVar8 = uVar8 | (arg2 & 0xffffU) << 0x20;
            }
            *(iVar4 + 7 + iVar5 * 0x18) = *((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000);
            if (cVar2 == '\x01') {
                uVar8 = ((uStackX_18 >> 3 | uStackX_19 << 5) << 3 | uStackX_18 & 7) << 0xc | 0x2c;
                if (uVar6 != 0) {
                    uVar8 = uVar8 | (arg2 & 0xffffU) << 0x20;
                }
                *(iVar4 + 8 + iVar5 * 0x18) = *((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000);
                uVar8 = ((uStackX_18 >> 3 | uStackX_19 << 5) << 3 | uStackX_18 & 7) << 0xc | 0x2e;
                if (uVar6 != 0) {
                    uVar8 = uVar8 | (arg2 & 0xffffU) << 0x20;
                }
                *(iVar4 + 10 + iVar5 * 0x18) = *((uVar8 >> 4 & 0x10000000 | uVar8 & 0xffffffff) + 0xc0000000);
            }
        }
        *(*(iVar7 + 0x58 + iVar3) + *(iVar7 + 0x48 + iVar3) * 0x18) = cVar2;
        piVar1 = iVar7 + 0x48 + iVar3;
        *piVar1 = *piVar1 + 1;
    }
    else if (in_stack_00000028 != '\0') {
        return 0x8000000000000014;
    }
    return 0;
}


/* fcn.00013ba4 @ 0x13ba4 */

ulong fcn.00013ba4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (arg1 == 0) {
        auStackX_10[0] = 0;
    }
    else {
        iVar1 = (**(*0x14068 + 0x28))(0,4,arg1,auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    return auStackX_10[0];
}


/* fcn.00011ac0 @ 0x11ac0 */

int64_t fcn.00011ac0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013ba4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 << 0xc != 0)) {
        fcn.000102c0(arg1_00,arg1 << 0xc);
    }
    return arg1_00;
}


/* fcn.000129cc @ 0x129cc */

void fcn.000129cc(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    if ((*(noname_0 * 0x78 + 0x17 + *0x14090) & 1) == 0) {
        fcn.00013d94(arg1,arg2);
    }
    return;
}


/* fcn.00013d94 @ 0x13d94 */

int64_t fcn.00013d94(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_10;
    uint32_t auStackX_18 [2];
    
    if (arg2 != 0) {
        fcn.00010310(1,0,auStackX_18,0);
        if ((uStackX_10 & 0x80000) == 0) {
            fcn.000102e0();
        }
        else {
            uVar2 = auStackX_18[0] >> 5 & 0x7f8;
            arg1_00 = ~(uVar2 - 1) & arg1;
            do {
                iVar1 = fcn.000102f0(arg1_00);
                arg1_00 = uVar2 + iVar1;
            } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
        }
    }
    return arg1;
}


/* fcn.00011b00 @ 0x11b00 */

int64_t fcn.00011b00(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t arg1_00;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint in_R9;
    uint64_t uVar14;
    uint64_t arg3_00;
    uint64_t arg3_01;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t in_stack_00000028;
    uint in_stack_0000002c;
    char in_stack_00000030;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_68;
    uint64_t uStack_48;
    
    uVar14 = CONCAT44(in_R9,arg4);
    if (uVar14 == 0) {
code_r0x00011b32:
        arg2 = 0;
    }
    else {
        uVar2 = uVar14 + 0x1fffff & 0xffffffffffe00000;
        iVar3 = 0;
        uStack_90 = 0;
        uStack_68 = 0;
        uVar16 = arg3 & 0xffffffffffe00000;
        uStack_98 = 0;
        if (arg2 == 0) {
            arg2 = fcn.00011ac0(1);
            if (arg2 == 0) goto code_r0x00011b32;
            fcn.000129cc(arg1,arg2,0x1000,iVar3);
        }
        if (CONCAT44(in_stack_0000002c,in_stack_00000028) != 0) {
            uVar9 = arg3 >> 0x30 & 0x1ff;
            uVar10 = arg3 >> 0x27 & 0x1ff;
            if (in_stack_00000030 == '\0') {
                uVar11 = uVar2 - 1 >> 0x27 & 0x1ff;
                uVar15 = uVar9;
                uVar17 = arg2;
            }
            else {
                uVar15 = uVar2 - 1 >> 0x30 & 0x1ff;
                uVar11 = uVar2 - 1 >> 0x27 & 0x1ff;
                uStack_68 = uVar15 << 9 | uVar11;
                uVar17 = 0;
                uStack_98 = arg2;
                uStack_90 = uVar10;
            }
            uStack_48 = uVar2 - 1;
            arg3_00 = uStack_68;
            if (uVar9 <= uVar15) {
                uVar7 = (uVar9 + 1) * 0x200;
                uVar5 = uVar9;
                do {
                    if (in_stack_00000030 != '\0') {
                        if (*(uStack_98 + uVar5 * 8) == 0) {
                            uVar10 = uStack_68;
                            iVar3 = fcn.00011ac0(1);
                            *(uStack_98 + uVar5 * 8) = iVar3;
                            if (iVar3 == 0) goto code_r0x00011b32;
                            fcn.000129cc(arg1,iVar3,0x1000,uVar10);
                            puVar1 = uStack_98 + uVar5 * 8;
                            *puVar1 = *puVar1 | 3;
                        }
                        uVar10 = uStack_90 & 0x1ff;
                        if (uStack_68 < uVar7) {
                            uVar11 = 0x1ff;
                            uStack_90 = uVar7;
                        }
                        else {
                            uVar11 = uStack_68 & 0x1ff;
                        }
                        uVar17 = (*(uStack_98 + 4 + uVar5 * 8) & 0xfffff) << 0x20 |
                                 *(uStack_98 + uVar5 * 8) & 0xfffffffffffff000;
                    }
                    arg3_00 = uStack_68;
                    for (uVar8 = uVar10; uVar8 <= uVar11; uVar8 = uVar8 + 1) {
                        if (*(uVar17 + uVar8 * 8) == 0) {
                            iVar3 = fcn.00011ac0(1);
                            *(uVar17 + uVar8 * 8) = iVar3;
                            if (iVar3 == 0) goto code_r0x00011b32;
                            fcn.000129cc(arg1,iVar3,0x1000,arg3_00);
                            puVar1 = uVar17 + uVar8 * 8;
                            *puVar1 = *puVar1 | 3;
                        }
                        arg3_00 = uVar16 >> 0x1e & 0x1ff;
                        if (uVar2 < (uVar16 + 0x40000000 & 0xffffffffc0000000)) {
                            uVar6 = uStack_48 >> 0x1e & 0x1ff;
                        }
                        else {
                            uVar6 = 0x1ff;
                        }
                        uVar12 = (*(uVar17 + 4 + uVar8 * 8) & 0xfffff) << 0x20 |
                                 *(uVar17 + uVar8 * 8) & 0xfffffffffffff000;
                        arg3_01 = arg3_00;
                        for (uVar4 = arg3_00; uVar4 <= uVar6; uVar4 = uVar4 + 1) {
                            if (*(uVar12 + uVar4 * 8) == 0) {
                                iVar3 = fcn.00011ac0(1);
                                *(uVar12 + uVar4 * 8) = iVar3;
                                if (iVar3 == 0) goto code_r0x00011b32;
                                fcn.000129cc(arg1,iVar3,0x1000,arg3_01);
                                puVar1 = uVar12 + uVar4 * 8;
                                *puVar1 = *puVar1 | 3;
                            }
                            uVar13 = 0;
                            arg3_01 = in_stack_00000028 & 1;
                            arg1_00 = (*(uVar12 + 4 + uVar4 * 8) & 0xfffff) << 0x20 |
                                      *(uVar12 + uVar4 * 8) & 0xfffffffffffff000;
                            do {
                                *(arg1_00 + uVar13 * 8) = uVar16;
                                puVar1 = arg1_00 + uVar13 * 8;
                                *puVar1 = *puVar1 & 0xfffffffe;
                                uVar16 = uVar16 + 0x200000;
                                *(arg1_00 + uVar13 * 8) =
                                     (in_stack_00000028 >> 1 & 1 | 0x40) * 2 |
                                     in_stack_00000028 & 1 | *(arg1_00 + uVar13 * 8) & 0xfffffffd;
                                if (uVar14 <= uVar16) break;
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < 0x200);
                            fcn.000129cc(arg1,arg1_00,0x1000,arg3_01);
                            if (uVar14 <= uVar16) break;
                        }
                        fcn.000129cc(arg1,uVar12 + arg3_00 * 8,(uVar6 - arg3_00) * 8 + 8,arg3_00);
                        if (uVar14 <= uVar16) break;
                    }
                    fcn.000129cc(arg1,uVar17 + uVar10 * 8,(uVar11 - uVar10) * 8 + 8,arg3_00);
                    uVar5 = uVar5 + 1;
                    uVar7 = uVar7 + 0x200;
                } while (uVar5 <= uVar15);
            }
            if (in_stack_00000030 != '\0') {
                fcn.000129cc(arg1,uStack_98 + uVar9 * 8,(uVar15 - uVar9) * 8 + 8,arg3_00);
            }
        }
    }
    return arg2;
}


/* fcn.000139ac @ 0x139ac */

ulong fcn.000139ac(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    int iVar7;
    int64_t iVar8;
    uint8_t *puVar9;
    uint32_t *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    
    uVar12 = 0;
    iVar8 = arg1 * 0x78;
    iVar11 = *(iVar8 + 0x48 + *0x14090);
    if (iVar11 != 0) {
        puVar9 = *(iVar8 + 0x58 + *0x14090) + 2;
        do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 0x18;
            if (uVar12 < uVar1) {
                uVar12 = uVar1;
            }
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
    }
    iVar11 = uVar12 * 2 + 3;
    iVar5 = fcn.00011ac0(iVar11);
    iVar4 = *0x14090;
    if (iVar5 == 0) {
        uVar6 = 0x8000000000000009;
    }
    else {
        uVar13 = 0;
        *(iVar8 + 0x28 + *0x14090) = iVar5;
        iVar3 = *0x14058;
        uVar12 = iVar5 + 0x1000;
        if (*(iVar8 + 0x48 + iVar4) != 0) {
            iVar5 = 0;
            do {
                iVar2 = *(iVar8 + 0x58 + iVar4);
                uVar1 = *(iVar5 + 1 + iVar2);
                puVar10 = *(iVar5 + 2 + iVar2) * 0x10 + *(iVar8 + 0x28 + iVar4);
                if ((*puVar10 & 1) == 0) {
                    *puVar10 = *puVar10 & 0xffe;
                    puVar10[2] = puVar10[2] & 0xffe;
                    puVar10[1] = uVar12 >> 0x20;
                    iVar7 = uVar12 >> 0xc;
                    *puVar10 = *puVar10 | iVar7 << 0xc | 1U;
                    puVar10[3] = (uVar12 >> 0xc) + 1 >> 0x14;
                    puVar10[2] = puVar10[2] | iVar7 * 0x1000 + 0x1000U | 1;
                    uVar12 = uVar12 + 0x2000;
                }
                puVar10 = (puVar10[1] << 0x20 | *puVar10 & 0xfffffffffffff000) + uVar1 * 0x20;
                *puVar10 = *puVar10 & 0xffffffe0;
                uVar1 = *(iVar8 + 0x10 + iVar4);
                *(iVar8 + 0x60 + iVar4) = 0;
                if ((uVar1 & 8) == 0) {
                    if ((uVar1 & 4) == 0) {
                        return 0x8000000000000003;
                    }
code_r0x00013b11:
                    puVar10[2] = puVar10[2] & 0xfffffffa;
                    puVar10[2] = puVar10[2] | 2;
                }
                else {
                    *(iVar8 + 0x60 + iVar4) = 1;
                    if ((*(iVar3 + 0x24) < 0x31) && ((uVar1 & 4) != 0)) {
                        *(iVar8 + 0x60 + iVar4) = 0;
                        goto code_r0x00013b11;
                    }
                    puVar10[2] = puVar10[2] & 0xfffffffb;
                    puVar10[2] = puVar10[2] | 3;
                }
                uVar13 = uVar13 + 1;
                iVar5 = iVar5 + 0x18;
            } while (uVar13 < *(iVar8 + 0x48 + iVar4));
        }
        fcn.000129cc(arg1,*(iVar8 + 0x28 + iVar4),iVar11 * 0x1000,uVar12);
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.000121d0 @ 0x121d0 */

uint64_t * fcn.000121d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t *puVar2;
    char cVar3;
    unkbyte7 Var4;
    uint *in_stack_00000028;
    
    cVar3 = arg4;
    Var4 = arg4 >> 8;
    if (cVar3 == '\0') {
code_r0x00012299:
        puVar2 = arg2 + (arg3 >> 0x27 & 0x1ff) * 8;
        if (*puVar2 == 0) {
            uVar1 = fcn.00011ac0(1);
            *puVar2 = uVar1;
            if (uVar1 == 0) goto code_r0x00012255;
            fcn.000129cc(arg1,uVar1,0x1000,CONCAT71(Var4,cVar3));
            *puVar2 = *puVar2 | 3;
            fcn.000129cc(arg1,puVar2,8,CONCAT71(Var4,cVar3));
        }
        puVar2 = (*puVar2 & 0xffffffffff000) + (arg3 >> 0x1e & 0x1ff) * 8;
        if (*puVar2 == 0) {
            uVar1 = fcn.00011ac0(1);
            *puVar2 = uVar1;
            if (uVar1 == 0) goto code_r0x00012255;
            fcn.000129cc(arg1,uVar1,0x1000,CONCAT71(Var4,cVar3));
            *puVar2 = *puVar2 | 3;
            fcn.000129cc(arg1,puVar2,8,CONCAT71(Var4,cVar3));
        }
        if ((*puVar2 & 0x80) != 0) {
            *in_stack_00000028 = 3;
            goto code_r0x000123cd;
        }
        puVar2 = (*puVar2 & 0xffffffffff000) + (arg3 >> 0x15 & 0x1ff) * 8;
        if (*puVar2 == 0) {
            *puVar2 = arg3 & 0xfffffffe00000;
            *puVar2 = *puVar2 & 0xfffffffc;
            *puVar2 = *puVar2 | 0x80;
            fcn.000129cc(arg1,puVar2,8,CONCAT71(Var4,cVar3));
        }
        if ((*puVar2 & 0x80) != 0) {
            *in_stack_00000028 = 2;
            goto code_r0x000123cd;
        }
        puVar2 = (*puVar2 & 0xffffffffff000) + (arg3 >> 0xc & 0x1ff) * 8;
        if ((*puVar2 != 0) || (arg3 == 0)) {
            *in_stack_00000028 = 1;
            return puVar2;
        }
    }
    else {
        puVar2 = arg2 + (arg3 >> 0x30 & 0x1ff) * 8;
        if (*puVar2 != 0) {
code_r0x00012293:
            arg2 = *puVar2 & 0xffffffffff000;
            goto code_r0x00012299;
        }
        uVar1 = fcn.00011ac0(1);
        *puVar2 = uVar1;
        if (uVar1 != 0) {
            fcn.000129cc(arg1,uVar1,0x1000,CONCAT71(Var4,cVar3));
            *puVar2 = *puVar2 | 3;
            fcn.000129cc(arg1,puVar2,8,CONCAT71(Var4,cVar3));
            goto code_r0x00012293;
        }
    }
code_r0x00012255:
    *in_stack_00000028 = 0;
    puVar2 = NULL;
code_r0x000123cd:
    return puVar2;
}


/* fcn.000138b4 @ 0x138b4 */

uint64_t fcn.000138b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint64_t noname_0;
    int64_t *piVar3;
    uint64_t arg2_00;
    
    noname_0 = 0;
    arg2_00 = arg2 & 0xffff;
    if (*0x14098 != 0) {
        piVar3 = *0x14090 + 0x28;
        do {
            if ((arg1 == *(piVar3 + -4)) && (iVar1 = fcn.000130c4(noname_0,arg1,arg2_00), iVar1 != -1)) {
                iVar1 = (arg2 >> 8 & 0xff) * 0x10;
                if (*piVar3 == 0) {
                    puVar2 = iVar1 + piVar3[-1];
                    iVar1 = (puVar2[1] << 0x20 | *puVar2 & 0xfffffffffffff000) + (arg2_00 & 0xff) * 0x10;
                    if ((*(iVar1 + 8) & 7) != 0) {
                        *arg3 = 0;
                        *arg4 = iVar1;
                        return noname_0;
                    }
                }
                else {
                    puVar2 = iVar1 + *piVar3;
                    iVar1 = (puVar2[1] << 0x20 | *puVar2 & 0xfffffffffffff000) + (arg2_00 & 0xff) * 0x20;
                    if ((*(iVar1 + 8) & 7) != 0) {
                        *arg4 = 0;
                        *arg3 = iVar1;
                        return noname_0;
                    }
                }
            }
            noname_0 = noname_0 + 1;
            piVar3 = piVar3 + 0xf;
        } while (noname_0 < *0x14098);
    }
    return 0xffffffffffffffff;
}


/* fcn.000130c4 @ 0x130c4 */

uint64_t fcn.000130c4(int64_t noname_0,uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint8_t *puVar3;
    uint8_t uStackX_19;
    
    noname_0 = noname_0 * 0x78;
    if (arg1 == *(noname_0 + 8 + *0x14090)) {
        uVar1 = *(noname_0 + 0x48 + *0x14090);
        uVar2 = 0;
        if (uVar1 != 0) {
            uStackX_19 = arg2 >> 8;
            puVar3 = *(noname_0 + 0x58 + *0x14090) + 1;
            do {
                if (puVar3[1] == uStackX_19) {
                    if ((((*puVar3 ^ arg2) & 0xf8) == 0) && (((*puVar3 ^ arg2) & 7) == 0)) {
                        return uVar2;
                    }
                }
                uVar2 = uVar2 + 1;
                puVar3 = puVar3 + 0x18;
            } while (uVar2 < uVar1);
        }
    }
    return 0xffffffffffffffff;
}


/* fcn.00011f8c @ 0x11f8c */

int64_t fcn.00011f8c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011b00(arg1,0,0,*0x140a0);
    if (iVar1 != 0) {
        if (*0x140a8 == 0) {
            return iVar1;
        }
        iVar1 = fcn.00011b00(arg1,iVar1,0x100000000,*0x140a8);
        if (iVar1 != 0) {
            return iVar1;
        }
    }
    return 0;
}


/* fcn.000123ec @ 0x123ec */

ulong fcn.000123ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t *arg1_00;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t arg4_00;
    int64_t iVar7;
    int64_t iVar8;
    int iStackX_10;
    uint64_t in_stack_00000028;
    uint32_t in_stack_00000030;
    
    iStackX_10 = CONCAT22(iStackX_10._2_2_,arg2);
    if ((arg4 == (-arg4 & 0xfffU) + arg4) && (in_stack_00000028 == (-in_stack_00000028 & 0xfff) + in_stack_00000028)) {
        if (in_stack_00000028 != 0) {
            iVar7 = arg1 * 0x78;
            iVar3 = *0x14090;
            arg4_00 = arg4;
            do {
                arg4_00 = CONCAT71(arg4_00 >> 8,*(iVar7 + 0x60 + iVar3));
                arg1_00 = fcn.000121d0(arg1,arg3,arg4,arg4_00);
                if (arg1_00 == NULL) goto code_r0x0001242b;
                iVar3 = 0;
                uVar2 = 0;
                do {
                    if (iStackX_10 == *(uVar2 + 0x13fd0)) {
                        iVar8 = *(iVar3 * 0x18 + 0x13fd8);
                        goto code_r0x000124bb;
                    }
                    iVar3 = iVar3 + 1;
                    uVar2 = uVar2 + 0x18;
                } while (uVar2 < 0x48);
                iVar8 = 0;
code_r0x000124bb:
                iVar3 = 0;
                uVar2 = 0;
                do {
                    if (iStackX_10 == *(uVar2 + 0x13fd0)) {
                        uVar2 = *(iVar3 * 0x18 + 0x13fd8);
                        goto code_r0x000124de;
                    }
                    iVar3 = iVar3 + 1;
                    uVar2 = uVar2 + 0x18;
                } while (uVar2 < 0x48);
                uVar2 = 0;
code_r0x000124de:
                if (((arg4 & uVar2 - 1) == 0) && (uVar2 <= in_stack_00000028)) {
                    uVar2 = *arg1_00;
                    *arg1_00 = (in_stack_00000030 >> 1 & 1) * 2 | uVar2 & 0xfffffffc | in_stack_00000030 & 1;
                    fcn.000129cc(arg1,arg1_00,8,arg4_00);
                    iVar3 = *0x14090;
                    if (uVar2 != *arg1_00) {
                        *(iVar7 + 0x39 + *0x14090) = 1;
                    }
                    arg4 = arg4 + iVar8;
                    in_stack_00000028 = in_stack_00000028 - iVar8;
                }
                else {
                    if (((arg4 & 0x1fffffU) != 0) || (iVar3 = 2, in_stack_00000028 < 0x200000)) {
                        iVar3 = 1;
                    }
                    if (iStackX_10 == 2) {
                        if ((iVar3 != 1) || (uVar2 = fcn.00011ac0(iVar3), uVar2 == 0)) goto code_r0x0001242b;
                        uVar5 = *arg1_00 & 0xfffffffe00000;
                        arg4_00 = 0x400000000000003b;
                        uVar6 = 0;
                        do {
                            uVar4 = *arg1_00 & 0x400000000000003b | uVar5;
                            uVar5 = uVar5 + 0x1000;
                            *(uVar2 + uVar6 * 8) = uVar4;
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < 0x200);
                    }
                    else {
                        if (((iStackX_10 != 3) || (1 < iVar3 - 1U)) || (uVar2 = fcn.00011ac0(1), uVar2 == 0))
                        goto code_r0x0001242b;
                        uVar6 = *arg1_00 & 0xfffffc0000000;
                        uVar5 = 0;
                        do {
                            uVar4 = *arg1_00 & 0x400000000000003b | uVar6;
                            uVar6 = uVar6 + 0x200000;
                            *(uVar2 + uVar5 * 8) = uVar4 | 0x80;
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < 0x200);
                    }
                    fcn.000129cc(arg1,uVar2,0x1000,arg4_00);
                    *arg1_00 = uVar2;
                    *arg1_00 = *arg1_00 | 3;
                    fcn.000129cc(arg1,arg1_00,8,arg4_00);
                    iVar3 = *0x14090;
                    *(iVar7 + 0x39 + *0x14090) = 1;
                }
            } while (in_stack_00000028 != 0);
        }
        uVar1 = 0;
    }
    else {
code_r0x0001242b:
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00012a40 @ 0x12a40 */

ulong fcn.00012a40(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    iVar7 = *0x14090;
    iVar5 = arg1 * 0x78;
    iVar6 = *(iVar5 + 0x68 + *0x14090);
    uVar2 = *(iVar5 + 0x62 + *0x14090);
    *(iVar6 + *(iVar5 + 0x70 + *0x14090) * 0x10) = *arg2;
    *(iVar6 + 8 + *(iVar5 + 0x70 + iVar7) * 0x10) = *(arg2 + 8);
    fcn.000129cc(arg1,*(iVar5 + 0x70 + iVar7) * 0x10 + iVar6,0x10,iVar7);
    iVar6 = *0x14090;
    uVar3 = (*(iVar5 + 0x70 + *0x14090) + 1) % uVar2;
    iVar7 = uVar3 << 4;
    piVar1 = iVar5 + *0x14090;
    *(iVar5 + 0x70 + *0x14090) = uVar3;
    *(*piVar1 + 0x88) = iVar7;
    do {
        uVar4 = *(*(iVar5 + iVar6) + 0x34);
        if ((uVar4 & 0x10) != 0) {
            uVar4 = uVar4 | 0x10;
code_r0x00012b12:
            *(*(iVar5 + *0x14090) + 0x34) = uVar4;
            return 0x8000000000000007;
        }
        if ((uVar4 & 0x40) != 0) {
            uVar4 = uVar4 | 0x40;
            goto code_r0x00012b12;
        }
        if ((uVar4 & 0x20) != 0) {
            uVar4 = uVar4 | 0x20;
            goto code_r0x00012b12;
        }
        if (iVar7 == *(*(iVar5 + *0x14090) + 0x80)) {
            return 0;
        }
        iVar6 = *0x14090;
    } while( true );
}


/* fcn.00013c40 @ 0x13c40 */

int * fcn.00013c40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int **arg2_00;
    uint64_t uVar2;
    int *piStackX_20;
    uchar *in_stack_00000028;
    
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = 0;
    }
    if (arg1 != 0) {
        uVar2 = 0;
        uVar1 = (*(arg1 + 4) - 0x24) / arg2;
        if (uVar1 != 0) {
            arg2_00 = arg1 + 0x24;
            do {
                piStackX_20 = NULL;
                if ((((arg2 != 0) && (&piStackX_20 != arg2_00)) &&
                    (section..text(&piStackX_20,arg2_00,arg2), piStackX_20 != NULL)) && (*piStackX_20 == arg3)) {
                    return piStackX_20;
                }
                uVar2 = uVar2 + 1;
                arg2_00 = arg2_00 + arg2;
            } while (uVar2 < uVar1);
        }
    }
    return NULL;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


