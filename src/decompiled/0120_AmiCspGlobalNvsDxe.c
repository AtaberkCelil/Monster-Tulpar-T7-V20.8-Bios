// decompiled by r2ghidra: 0120_AmiCspGlobalNvsDxe.pe32
// functions: 10

/* entry0 @ 0x102c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10998 = *(arg2 + 0x60);
    *0x10990 = arg2;
    fcn.000102e0(arg1,arg2);
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong uStackX_10;
    uchar auStackX_18 [16];
    
    uStackX_10 = 0xffffffff;
    iStackX_8 = arg1;
    iVar1 = (**(*0x10998 + 0x28))(1,0,1,&uStackX_10);
    if (-1 < iVar1) {
        (**(*0x10998 + 0x168))(uStackX_10,0x20);
        iStackX_8 = 0;
        *0x109b8 = uStackX_10;
        iVar1 = (**(*0x10998 + 0x148))(&iStackX_8,0x10900,0x109b8,0);
        if (-1 < iVar1) {
            (**(*0x10998 + 0x170))(0x200,8,0x104c4,0,0x10950,auStackX_18);
        }
    }
    return;
}


/* fcn.00010614 @ 0x10614 */

void fcn.00010614(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000105e4();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000105e4 @ 0x105e4 */

ulong fcn.000105e4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10998 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1664 named .text
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


/* fcn.000103ac @ 0x103ac */

void fcn.000103ac(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t iStackX_10;
    uint auStackX_18 [4];
    
    if ((*0x10988 != NULL) && (iStackX_10 = arg2, piVar1 = fcn.00010614(arg1,*(arg1 + 4),arg1), piVar1 != NULL)) {
        auStackX_18[0] = *0x109b8;
        for (piVar2 = piVar1; piVar2 < piVar1[1] + piVar1; piVar2 = piVar2 + 1) {
            if (((*piVar2 == 0x42564e43) && (*(piVar2 + -1) == '\b')) && (piVar2[1] == '\f')) {
                if (piVar2 + 5 != auStackX_18) {
                    section..text(piVar2 + 5,auStackX_18,4);
                }
                iStackX_10 = CONCAT62(iStackX_10._2_6_,0x20);
                piVar2 = piVar1;
                while( true ) {
                    if (piVar1[1] + piVar1 <= piVar2) {
                        return;
                    }
                    if (((*piVar2 == 0x4c564e43) && (*(piVar2 + -1) == '\b')) && (piVar2[1] == '\v')) break;
                    piVar2 = piVar2 + 1;
                }
                if (piVar2 + 5 != &iStackX_10) {
                    section..text(piVar2 + 5,&iStackX_10,2);
                }
                iVar3 = (*(*0x10988)[1])(*0x10988,*0x109b0);
                if (iVar3 < 0) {
                    return;
                }
                *0x109b0 = 0;
                (***0x10988)(*0x10988,piVar1,piVar1[1],0x109b0);
                return;
            }
        }
    }
    return;
}


/* fcn.00010744 @ 0x10744 */

ulong fcn.00010744(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    ulong uStackX_10;
    uchar auStack_58 [80];
    
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puVar1 = fcn.00010654();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.000106a4();
            arg1_00 = auStack_58;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x10910) {
                section..text(arg1_00,0x10910,0x10);
            }
            *(arg1_00 + 0x10) = 0x30;
            *(arg1_00 + 0x20) = 0xffffffffffffffff;
            *(arg1_00 + 0x18) = 1;
            *(arg1_00 + 0x1c) = 0x30;
            if (arg1_00 + 0x28 != arg1) {
                section..text(arg1_00 + 0x28,arg1,0x10);
            }
            *(arg1_00 + 0x38) = arg2;
            *(arg1_00 + 0x40) = 4;
            uStackX_10 = 0x48;
            (**puVar1)(puVar1,arg1_00,&uStackX_10);
            uVar2 = *(arg1_00 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.0001082c @ 0x1082c */

ulong fcn.0001082c(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    int64_t aiStackX_10 [3];
    uchar auStack_48 [64];
    
    aiStackX_10[0] = arg1;
    puVar1 = fcn.00010654();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.000106a4();
        arg1_00 = auStack_48;
        if (puVar3 != NULL) {
            arg1_00 = puVar3;
        }
        if (arg1_00 != 0x10910) {
            section..text(arg1_00,0x10910,0x10);
        }
        *(arg1_00 + 0x10) = 0x28;
        *(arg1_00 + 0x20) = 0xffffffffffffffff;
        *(arg1_00 + 0x18) = 4;
        *(arg1_00 + 0x1c) = 0x28;
        if (arg1_00 + 0x28 != 0x10940) {
            section..text(arg1_00 + 0x28,0x10940,0x10);
        }
        *(arg1_00 + 0x38) = 2;
        aiStackX_10[0] = 0x40;
        (**puVar1)(puVar1,arg1_00,aiStackX_10);
        uVar2 = *(arg1_00 + 0x20);
    }
    return uVar2;
}


/* fcn.00010654 @ 0x10654 */

int64_t fcn.00010654(void)

{
    int64_t iVar1;
    
    if (*0x109a8 == 0) {
        iVar1 = (**(*0x10998 + 0x140))(0x108f0,0,0x109a8);
        if (iVar1 < 0) {
            *0x109a8 = 0;
        }
    }
    return *0x109a8;
}


/* fcn.000106a4 @ 0x106a4 */

uint64_t fcn.000106a4(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int *piVar5;
    uint32_t uVar6;
    
    uVar3 = 0;
    if (*0x109a0 != 0) {
        return *0x109a0;
    }
    uVar6 = 0;
    if (*(*0x10990 + 0x68) == 0) {
        *0x109a0 = 0;
        return 0;
    }
    uVar2 = uVar3;
    piVar4 = *(*0x10990 + 0x70);
    while ((*0x108e0 != *piVar4 || (*0x108e8 != piVar4[1]))) {
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 3;
        if (*(*0x10990 + 0x68) <= uVar2) {
            *0x109a0 = 0;
            return 0;
        }
    }
    iVar1 = (*(*0x10990 + 0x70))[uVar2 * 3 + 2];
    piVar5 = iVar1 + 0x10;
    uVar2 = uVar3;
    if (*(iVar1 + 4) != 0) {
        do {
            uVar6 = uVar2;
            if ((*piVar5 == 7) && (0x4f < *(piVar5 + 6) << 0xc)) break;
            uVar6 = uVar6 + 1;
            uVar2 = uVar6;
            piVar5 = piVar5 + *(iVar1 + 8);
        } while (uVar6 < *(iVar1 + 4));
    }
    if (uVar6 < *(iVar1 + 4)) {
        uVar3 = *(piVar5 + 2);
    }
    *0x109a0 = uVar3;
    return uVar3;
}


