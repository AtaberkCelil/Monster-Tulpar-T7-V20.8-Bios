// decompiled by r2ghidra: 0919_NhltInstallTable.pe32
// functions: 15

/* entry0 @ 0x10330 */

uint64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    uchar auStackX_10 [24];
    
    iVar1 = *(arg2 + 0x60);
    *0x10cd8 = *(arg2 + 0x58);
    *0x10cc0 = arg2;
    *0x10cc8 = iVar1;
    *0x10cd0 = arg1;
    fcn.00010988();
    fcn.00010928(0x10b30,0x10cf0);
    (**(iVar1 + 0x50))(0x200,8,0x107a0,0,&iStackX_8);
    (**(*0x10cc8 + 0xa8))(0x10b10,iStackX_8,auStackX_10);
    (**(*0x10cc8 + 0x68))(iStackX_8);
    return ~-(iStackX_8 != 0) & 0x8000000000000015;
}


/* fcn.00010988 @ 0x10988 */

int64_t fcn.00010988(void)

{
    if (*0x10ce8 == 0) {
        fcn.00010928(0x10b20,0x10ce8);
    }
    return *0x10ce8;
}


/* fcn.00010928 @ 0x10928 */

ulong fcn.00010928(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10cc0;
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


/* fcn.000109b8 @ 0x109b8 */

ulong fcn.000109b8(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x10cc8 + 0x98))(*0x10cd0,0x10ac0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.000109f8 @ 0x109f8 */

ulong fcn.000109f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg3;
    if (arg1 != 0) {
        iStackX_20 = arg4;
        iVar1 = (**(*0x10cc8 + 0x98))(arg1,0x10af0,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,arg2,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* fcn.000103e0 @ 0x103e0 */

ulong fcn.000103e0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t in_R8;
    int64_t in_R9;
    
    *arg2 = 0;
    iVar1 = fcn.000109b8(arg1);
    iVar1 = fcn.000109f8(iVar1,arg1,in_R8,in_R9);
    if ((-1 < iVar1) && (_pe_dos_header != 0x544c484e)) {
        (**(*0x10cc8 + 0x48))(0);
    }
    return 0;
}


/* fcn.00010a7c @ 0x10a7c */

uint32_t * fcn.00010a7c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar2 != 0) && (puVar1 = iVar2 + 0x25, arg2 <= *(iVar2 + 0x24))) {
        if (arg2 != 0) {
            uVar3 = arg2 & 0xff;
            do {
                puVar1 = puVar1 + *puVar1;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        if (arg3 * 0x83 + iVar2 < puVar1) {
            puVar1 = NULL;
        }
        return puVar1;
    }
    return NULL;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2144 named .text
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


/* fcn.000108fc @ 0x108fc */

void fcn.000108fc(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000108cc(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010310(arg1_00,arg1);
    }
    return;
}


/* fcn.000108cc @ 0x108cc */

ulong fcn.000108cc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10cc8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010310 @ 0x10310 */

int64_t fcn.00010310(int64_t arg1,int64_t arg2)

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


/* fcn.00010890 @ 0x10890 */

int64_t fcn.00010890(void)

{
    if (*0x10ce0 == 0) {
        (**(*0x10cc8 + 0x140))(0x10ad0,0,0x10ce0);
    }
    return *0x10ce0;
}


/* fcn.00010448 @ 0x10448 */

ulong fcn.00010448(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint32_t *arg2_00;
    uint32_t *arg1_00;
    int64_t arg2_01;
    uint32_t *arg2_02;
    uint64_t uVar4;
    ulong *puVar5;
    uint8_t uVar6;
    int64_t iStackX_8;
    ulong uStack_48;
    ulong uStack_40;
    
    iStackX_8 = 0;
    if (arg1 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar4 = 0;
        puVar5 = 0x10b50;
        do {
            if (*(uVar4 + arg1) == '\x01') {
                uStack_48 = *puVar5;
                uStack_40 = puVar5[1];
                arg2_02 = &iStackX_8;
                iVar3 = fcn.000103e0(&uStack_48,arg2_02);
                if ((iVar3 != 0) && (uVar6 = 0, *(iVar3 + 0x24) != '\0')) {
                    do {
                        arg2_01 = CONCAT71(arg2_02 >> 8,uVar6);
                        arg2_00 = fcn.00010a7c(iVar3,arg2_01,iStackX_8);
                        if (arg2_00 == NULL) {
                            return 0x800000000000000e;
                        }
                        arg2_02 = CONCAT71(arg2_01 >> 8,*(arg2 + 0x24));
                        *(arg2 + 0x24) = *(arg2 + 0x24) + '\x01';
                        uVar1 = *arg2_00;
                        arg1_00 = fcn.00010a7c(arg2,arg2_02,arg3);
                        if ((uVar1 != 0) && (arg1_00 != arg2_00)) {
                            section..text(arg1_00,arg2_00,uVar1);
                            arg2_02 = arg2_00;
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(iVar3 + 0x24));
                }
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 2;
        } while (uVar4 < 0x10);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001054c @ 0x1054c */

int64_t fcn.0001054c(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int *piVar2;
    uint *arg2_00;
    int64_t iVar3;
    ulong uVar4;
    uint *puVar5;
    uint8_t uVar6;
    int64_t *arg2_01;
    uint64_t arg2_02;
    uint64_t uVar7;
    int iVar8;
    ulong *puVar9;
    int64_t iStackX_8;
    ulong uStack_28;
    ulong uStack_20;
    
    iStackX_8 = 0;
    if (arg1 == 0) {
        uVar7 = 0;
    }
    else {
        iVar8 = 0x25;
        puVar9 = 0x10b50;
        uVar7 = 0;
        do {
            if (*(uVar7 + arg1) == '\x01') {
                uStack_28 = *puVar9;
                uStack_20 = puVar9[1];
                arg2_01 = &iStackX_8;
                iVar3 = fcn.000103e0(&uStack_28,arg2_01);
                if ((iVar3 != 0) && (arg2_02 = arg2_01 & 0xffffffffffffff00, *(iVar3 + 0x24) != '\0')) {
                    do {
                        piVar2 = fcn.00010a7c(iVar3,arg2_02,iStackX_8);
                        if (piVar2 != NULL) {
                            iVar8 = iVar8 + *piVar2;
                        }
                        uVar6 = arg2_02 + 1;
                        arg2_02 = CONCAT71(arg2_02 >> 8,uVar6);
                    } while (uVar6 < *(iVar3 + 0x24));
                }
            }
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 2;
        } while (uVar7 < 0x10);
        uVar7 = iVar8 + 8;
    }
    arg2_00 = fcn.000108fc(uVar7);
    if (arg2_00 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *(arg2_00 + 2) = 0;
        *arg2_00 = 0x544c484e;
        arg2_00[1] = uVar7;
        iVar3 = fcn.00010890();
        uVar4 = (**(iVar3 + 0x20))(0x163);
        *(arg2_00 + 4) = uVar4;
        iVar3 = fcn.00010890();
        uVar1 = (**(iVar3 + 0x18))(0x226);
        arg2_00[6] = uVar1;
        iVar3 = fcn.00010890();
        uVar1 = (**(iVar3 + 0x18))(0x224);
        arg2_00[7] = uVar1;
        arg2_00[8] = 0x1000013;
        iVar3 = fcn.00010890();
        iVar3 = (**(iVar3 + 0x28))(0x225);
        if (arg2_00 + 10 != iVar3) {
            section..text(arg2_00 + 10,iVar3,6);
        }
        puVar5 = arg2_00;
        iVar3 = fcn.00010448(arg1,arg2_00,uVar7);
        if (-1 < iVar3) {
            puVar5 = fcn.00010a7c(arg2_00,CONCAT71(puVar5 >> 8,*(arg2_00 + 9)),arg2_00[1]);
            if ((puVar5 != NULL) && (puVar5 <= uVar7 * 0x83 + arg2_00)) {
                *puVar5 = 4;
                if (puVar5 + 1 != 0x10b40) {
                    section..text(puVar5 + 1,0x10b40,4);
                }
                *arg2 = arg2_00;
                return 0;
            }
            iVar3 = -0x7ffffffffffffff2;
        }
        (**(*0x10cc8 + 0x48))(arg2_00);
    }
    return iVar3;
}


/* fcn.000106fc @ 0x106fc */

int64_t fcn.000106fc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_10;
    ulong *puStackX_18;
    ulong uStackX_20;
    
    puStackX_18 = NULL;
    iStackX_10 = 0;
    uStackX_20 = 0;
    iVar1 = fcn.0001054c(arg1,&iStackX_10);
    if (-1 < iVar1) {
        iVar2 = (**(*0x10cc8 + 0x140))(0x10b10,0,&puStackX_18);
        iVar1 = iStackX_10;
        if ((iVar2 < 0) || (puStackX_18 == NULL)) {
            (**(*0x10cc8 + 0x48))(iStackX_10);
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            iVar2 = (**puStackX_18)(puStackX_18,iStackX_10,*(iStackX_10 + 4),&uStackX_20);
            (**(*0x10cc8 + 0x48))(iVar1);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
        }
    }
    return iVar1;
}


