// decompiled by r2ghidra: 0284_TestPointStubDxe.pe32
// functions: 13

/* entry0 @ 0x102e0 */

void entry0(ulong noname_0,int64_t arg1)

{
    *0x10f08 = *(arg1 + 0x60);
    *0x10f00 = arg1;
    fcn.00010824();
    fcn.00010308(noname_0,arg1);
    return;
}


/* fcn.00010824 @ 0x10824 */

int64_t fcn.00010824(void)

{
    if (*0x10f10 == 0) {
        fcn.000107c4(0x10ea0,0x10f10);
    }
    return *0x10f10;
}


/* fcn.000107c4 @ 0x107c4 */

ulong fcn.000107c4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10f00;
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


/* fcn.00010308 @ 0x10308 */

ulong fcn.00010308(ulong noname_0,int64_t arg1)

{
    int16_t *piVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    piVar1 = fcn.00010824();
    do {
        for (; *piVar1 != -1; piVar1 = piVar1 + piVar1[1]) {
            if (*piVar1 == 4) goto code_r0x0001034b;
code_r0x0001033a:
        }
        piVar1 = NULL;
code_r0x0001034b:
        if (piVar1 == NULL) break;
        if ((*0x10eb0 != *(piVar1 + 4)) || (*0x10eb8 != *(piVar1 + 8))) goto code_r0x0001033a;
        if (piVar1 == NULL) break;
        fcn.00010b2c(piVar1 + 0xc,piVar1[1] - 0x18);
        piVar1 = piVar1[1] + piVar1;
    } while (piVar1 != NULL);
    if (0x1ffff < *(*0x10f00 + 8)) {
        (**(*0x10f08 + 0x170))(0x200,8,0x106dc,0,0x10e80,aiStackX_10);
    }
    return 0;
}


/* fcn.00010b2c @ 0x10b2c */

int64_t fcn.00010b2c(int64_t arg1,int64_t arg2)

{
    uint *arg1_00;
    char cVar1;
    int64_t iVar2;
    uint *puVar3;
    int64_t in_R8;
    int64_t in_R9;
    ulong auStackX_18 [2];
    
    cVar1 = fcn.00010a00(arg1,arg2);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffffffffff6;
    }
    else {
        iVar2 = fcn.00010854(*(arg1 + 4),arg1 + 8,in_R8,in_R9);
        if (iVar2 == 0) {
            iVar2 = fcn.00010728();
            if ((iVar2 != 0) && (puVar3 = fcn.000102c0(iVar2,0x38), puVar3 != NULL)) {
                iVar2 = fcn.00010784(iVar2,arg2,arg1);
                *(puVar3 + 8) = iVar2;
                if (iVar2 != 0) {
                    arg1_00 = puVar3 + 2;
                    *puVar3 = 0x54505354;
                    if (arg1_00 != 0x10ec0) {
                        section..text(arg1_00,0x10ec0,0x18);
                    }
                    iVar2 = *0x10f08;
                    *(puVar3 + 10) = arg2;
                    *(puVar3 + 0xc) = arg2;
                    auStackX_18[0] = 0;
                    iVar2 = (**(iVar2 + 0x148))(auStackX_18,0x10e90,arg1_00,0);
                    if (iVar2 < 0) {
                        (**(*0x10f08 + 0x48))(*(puVar3 + 8));
                        (**(*0x10f08 + 0x48))(puVar3);
                    }
                    return iVar2;
                }
                (**(*0x10f08 + 0x48))(puVar3);
            }
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            iVar2 = -0x7fffffffffffffec;
        }
    }
    return iVar2;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3040 named .text
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


/* fcn.00010758 @ 0x10758 */

void fcn.00010758(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010728(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010728 @ 0x10728 */

ulong fcn.00010728(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10f08 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.000103d4 @ 0x103d4 */

void fcn.000103d4(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    int *piVar5;
    uint64_t uVar6;
    int64_t iStackX_8;
    ulong *puStackX_10;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x10f08 + 0x140))(0x10e70,0,&puStackX_10);
    if ((-1 < iVar1) && (iVar1 = fcn.000107c4(0x10e60,aiStackX_18), -1 < iVar1)) {
        uVar6 = 0;
        uVar4 = 0;
        piVar5 = aiStackX_18[0] + 0x10;
        if (*(aiStackX_18[0] + 4) != 0) {
            do {
                if ((*piVar5 == 7) && (uVar6 = *(piVar5 + 6) << 0xc, 0xfff < uVar6)) break;
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + *(aiStackX_18[0] + 8);
            } while (uVar4 < *(aiStackX_18[0] + 4));
        }
        iVar1 = *(piVar5 + 2);
        if (iVar1 != 0x10eb0) {
            section..text(iVar1,0x10eb0,0x10);
        }
        *(iVar1 + 0x10) = 0x18;
        *(iVar1 + 0x20) = 0xffffffffffffffff;
        *(iVar1 + 0x28) = 0;
        *(iVar1 + 0x18) = 1;
        *(iVar1 + 0x1c) = 0x18;
        iStackX_8 = *(iVar1 + 0x10) + 0x18;
        iVar2 = (**puStackX_10)(puStackX_10,iVar1,&iStackX_8);
        if ((-1 < iVar2) && (*(iVar1 + 0x20) == 0)) {
            *0x10f18 = *(iVar1 + 0x28);
            *0x10f20 = fcn.00010758(*0x10f18);
            if (*0x10f20 != 0) {
                if (iVar1 != 0x10eb0) {
                    section..text(iVar1,0x10eb0,0x10);
                }
                *(iVar1 + 0x10) = 0x28;
                *(iVar1 + 0x20) = 0xffffffffffffffff;
                *(iVar1 + 0x1c) = 0x28;
                *(iVar1 + 0x18) = 2;
                iStackX_8 = *(iVar1 + 0x10) + 0x18;
                uVar6 = uVar6 - iStackX_8;
                *(iVar1 + 0x38) = 0;
                *(iVar1 + 0x30) = iStackX_8 + iVar1;
                if (*0x10f18 != 0) {
                    do {
                        iVar2 = *(iVar1 + 0x38);
                        uVar3 = *0x10f18 - iVar2;
                        if (uVar3 < uVar6) {
                            *(iVar1 + 0x28) = uVar3;
                        }
                        else {
                            *(iVar1 + 0x28) = uVar6;
                        }
                        (**puStackX_10)(puStackX_10,iVar1,&iStackX_8);
                        if (*(iVar1 + 0x20) != 0) {
                            (**(*0x10f08 + 0x48))();
                            *0x10f20 = 0;
                            return;
                        }
                        iVar2 = *0x10f20 + iVar2;
                        if ((*(iVar1 + 0x28) != 0) && (iVar2 != *(iVar1 + 0x30))) {
                            section..text(iVar2,*(iVar1 + 0x30),*(iVar1 + 0x28));
                        }
                    } while (*(iVar1 + 0x38) < *0x10f18);
                }
            }
        }
    }
    return;
}


/* fcn.00010a00 @ 0x10a00 */

uint64_t fcn.00010a00(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t in_RAX;
    uint in_register_0000000c;
    int *piVar2;
    int *piVar3;
    uint in_register_00000014;
    uint16_t *arg2_00;
    uint64_t uVar4;
    uint64_t uVar5;
    uint16_t auStackX_8 [4];
    
    uVar5 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if ((piVar2 != NULL) && (0x20b < uVar5)) {
        in_RAX = uVar5 - 0x20c >> 1;
        if ((piVar2[0x82] <= in_RAX) && ((*piVar2 == 1 && (in_RAX = piVar2[1] - 1U, piVar2[1] - 1U < 4)))) {
            piVar3 = piVar2 + 2;
            in_RAX = uVar4;
            do {
                if (*piVar3 == 0) break;
                in_RAX = in_RAX + 1;
                piVar3 = piVar3 + 2;
            } while (in_RAX < 0x100);
            if (in_RAX != 0x100) {
                uVar1 = piVar2[0x82] * 2;
                in_RAX = uVar1;
                arg2_00 = piVar2 + (0x20c - uVar1);
                uVar5 = (uVar5 - uVar1) - 0x20c;
                if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
                    if (auStackX_8 != arg2_00) {
                        section..text(auStackX_8,arg2_00,2);
                    }
                    in_RAX = auStackX_8[0];
                    if (auStackX_8[0] != 0) {
                        do {
                            if (uVar5 >> 1 <= uVar4) break;
                            arg2_00 = arg2_00 + 1;
                            if (auStackX_8 != arg2_00) {
                                section..text(auStackX_8,arg2_00,2);
                                in_RAX = auStackX_8[0];
                            }
                            uVar4 = uVar4 + 1;
                        } while (in_RAX != 0);
                        if (in_RAX != 0) goto code_r0x00010b17;
                    }
                    return CONCAT71(in_RAX >> 8,uVar4 != uVar5 >> 1);
                }
            }
        }
    }
code_r0x00010b17:
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00010854 @ 0x10854 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.00010854(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *puVar5;
    int16_t *piVar6;
    int16_t *piVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *puVar10;
    int64_t *piStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    ulong *puStack_58;
    ulong *puStack_50;
    int64_t iStack_48;
    ulong *puStack_40;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    piStackX_18 = arg3;
    puStackX_20 = arg4;
    iVar2 = (**(*0x10f08 + 0x138))(2,0x10e90,0,&puStack_50,&iStack_48);
    puVar10 = NULL;
    if (iVar2 < 0) {
        uVar4 = 0;
    }
    else {
        puStackX_20 = NULL;
        puStack_58 = NULL;
        var_30h = 0;
        puVar8 = puVar10;
        puVar9 = puVar10;
        if (puStack_50 != NULL) {
            do {
                iVar2 = (**(*0x10f08 + 0x98))(*(iStack_48 + puVar9 * 8),0x10e90,&puStackX_20);
                if ((-1 < iVar2) && (iVar2 = (*puStackX_20[2])(puStackX_20,&piStackX_18,&puStack_40), -1 < iVar2)) {
                    puVar8 = puVar10;
                    if (puStack_40 != NULL) {
                        piVar3 = piStackX_18;
                        puVar5 = puVar10;
                        do {
                            if ((*piVar3 == *0x10eb0) && (piVar3[1] == *0x10eb8)) {
                                puVar8 = puStackX_20;
                                break;
                            }
                            puVar5 = puVar5 + 1;
                            piVar3 = piVar3 + 2;
                        } while (puVar5 < puStack_40);
                    }
                    (**(*0x10f08 + 0x48))(piStackX_18);
                    if ((puVar8 != NULL) &&
                       (puStackX_20 = puVar8, iVar2 = (**puVar8)(puVar8,0x10eb0,&puStack_58,&var_30h), -1 < iVar2))
                    {
                        if (*(puStack_58 + 4) == arg1) {
                            puVar8 = puStack_58;
                            if (arg2 == 0) break;
                            piVar6 = puStack_58 + 1;
                            iVar1 = *arg2;
                            piVar7 = arg2;
                            while ((iVar1 != 0 && (iVar1 == *piVar6))) {
                                piVar7 = piVar7 + 1;
                                piVar6 = piVar6 + 1;
                                iVar1 = *piVar7;
                            }
                            if (*piVar7 == *piVar6) break;
                        }
                        (**(*0x10f08 + 0x48))(puStack_58);
                    }
                }
                puVar9 = puVar9 + 1;
                puVar8 = NULL;
            } while (puVar9 < puStack_50);
        }
        (**(*0x10f08 + 0x48))(iStack_48);
        uVar4 = -(puVar8 != NULL) & puStackX_20;
    }
    return uVar4;
}


/* fcn.00010784 @ 0x10784 */

void fcn.00010784(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010728();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


