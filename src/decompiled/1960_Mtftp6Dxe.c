// decompiled by r2ghidra: 1960_Mtftp6Dxe.pe32
// functions: 70

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x17150 = *(arg2 + 0x60);
    *0x17158 = *(arg2 + 0x58);
    *0x17148 = arg2;
    (**(*0x17150 + 0x140))(0x16980,0,0x17160);
    arg2_00 = 0x168e0;
    (**(*0x17150 + 0x98))(arg1,0x168e0,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010560(arg1,arg2_00);
    return;
}


/* fcn.00010560 @ 0x10560 */

ulong fcn.00010560(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    iVar1 = (**(*0x17158 + 0x48))(L"NetworkStackVar",0x16990,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x169d0 = arg1;
        *0x169d8 = arg1;
        uVar2 = (**(*0x17150 + 0x148))(0x169d8,0x16950,0x169b0,0x16970,0x169f8,0x168f0,0x169e0,0);
    }
    return uVar2;
}


/* fcn.00015054 @ 0x15054 */

void fcn.00015054(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015024(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00015024 @ 0x15024 */

ulong fcn.00015024(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x17150 + 0x40))(4,param_2,auStackX_18);
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 26208 named .text
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.00016378 @ 0x16378 */

uint * fcn.00016378(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint *puVar3;
    uint *puVar4;
    int64_t iVar5;
    ulong in_stack_00000028;
    ulong *apuStack_28 [2];
    
    puVar3 = fcn.00015024(arg1,0x328);
    if (puVar3 != NULL) {
        *(puVar3 + 8) = 6;
        piVar1 = puVar3 + 0xe;
        *puVar3 = 0x49504455;
        puVar4 = puVar3 + 2;
        *puVar4 = puVar4;
        *(puVar3 + 4) = puVar4;
        puVar4 = puVar3 + 0xb4;
        *(puVar3 + 6) = 1;
        *(puVar3 + 10) = arg1;
        *(puVar3 + 0xc) = arg2;
        *puVar4 = puVar4;
        *(puVar3 + 0xb6) = puVar4;
        iVar5 = *0x17150;
        *(puVar3 + 0xb8) = 0;
        *piVar1 = 0;
        iVar5 = (**(iVar5 + 0x118))(arg1,0x16940,apuStack_28,arg2,arg1,2);
        if ((-1 < iVar5) && (iVar5 = (**apuStack_28[0])(apuStack_28[0],piVar1), -1 < iVar5)) {
            iVar5 = (**(*0x17150 + 0x118))(*piVar1,0x16930,puVar3 + 0xba,arg2,arg1,0x10);
            if (-1 < iVar5) {
                iVar5 = (*arg3)(puVar3,in_stack_00000028);
                if ((-1 < iVar5) &&
                   (puVar2 = *(puVar3 + 0xba), iVar5 = (**puVar2)(puVar2,0,0,0,puVar3 + 0x10), -1 < iVar5)) {
                    return puVar3;
                }
                (**(*0x17150 + 0x120))(*piVar1,0x16930,arg2,arg1);
            }
            fcn.000155f0(arg1,arg2,0x16940,*piVar1);
        }
        (**(*0x17150 + 0x48))(puVar3);
    }
    return NULL;
}


/* fcn.000159a0 @ 0x159a0 */

void fcn.000159a0(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.0001592c(*(arg1 + 0x78));
        (**(*0x17150 + 0x48))(arg1);
    }
    return;
}


/* fcn.0001592c @ 0x1592c */

void fcn.0001592c(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x17150 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x17150 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x17150 + 0x48))(arg1);
    }
    return;
}


/* fcn.0001655c @ 0x1655c */

int64_t fcn.0001655c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    fcn.00016504(arg1);
    iVar2 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x17150 + 0x120))(*(arg1 + 0x38),0x16960,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x16910;
    }
    else {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x17150 + 0x120))(*(arg1 + 0x38),0x16930,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x16940;
    }
    iVar2 = fcn.000155f0(*(arg1 + 0x28),*(arg1 + 0x30),iVar2,*(arg1 + 0x38));
    if (-1 < iVar2) {
        piVar1 = arg1 + 8;
        if (*piVar1 != piVar1) {
            *(*piVar1 + 8) = *(arg1 + 0x10);
            **(arg1 + 0x10) = *piVar1;
        }
        (**(*0x17150 + 0x48))(arg1);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001061c @ 0x1061c */

int64_t fcn.0001061c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    uint *puVar2;
    int64_t iVar3;
    
    *arg3 = 0;
    puVar2 = fcn.00015054(0x50);
    if (puVar2 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *puVar2 = 0x5336464d;
        *(puVar2 + 6) = arg1;
        *(puVar2 + 8) = arg2;
        *(puVar2 + 10) = 0;
        if (puVar2 + 2 != 0x169a0) {
            section..text(puVar2 + 2,0x169a0,0x10);
        }
        puVar1 = puVar2 + 0xc;
        *puVar1 = puVar1;
        *(puVar2 + 0xe) = puVar1;
        iVar3 = (**(*0x17150 + 0x50))(0x80000200,8,0x11e24,puVar2,puVar2 + 0x10);
        if (-1 < iVar3) {
            iVar3 = fcn.00016378(arg1,arg2,0x11254);
            *(puVar2 + 0x12) = iVar3;
            if (iVar3 != 0) {
                *arg3 = puVar2;
                return 0;
            }
            (**(*0x17150 + 0x70))(*(puVar2 + 0x10));
            iVar3 = -0x7ffffffffffffff9;
        }
        (**(*0x17150 + 0x48))(puVar2);
    }
    return iVar3;
}


/* fcn.0001080c @ 0x1080c */

ulong fcn.0001080c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar2 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = *(arg2 + 8);
        if (((uVar1 != 0) && (*(arg2 + 0x10) != 0)) && (uVar1 != 0)) {
            do {
                if (*(arg1 + -8) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x0001084b. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar3 = (**(*arg2 + 8))(*arg2);
                    return uVar3;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00010740 @ 0x10740 */

void fcn.00010740(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (*(arg1 + 0x68) != 0) {
        (**(*0x17150 + 0x48))();
    }
    if ((*(arg1 + 0x70) != 0) && (*(*(arg1 + 0x70) + 8) != 0)) {
        (**(*0x17150 + 0x68))();
    }
    if (*(arg1 + 0x108) != 0) {
        fcn.000159a0(*(arg1 + 0x108));
    }
    if (*(arg1 + 0xe0) != 0) {
        fcn.0001655c(*(arg1 + 0xe0));
    }
    if (*(arg1 + 0x100) != 0) {
        fcn.0001655c(*(arg1 + 0x100));
    }
    piVar1 = *(arg1 + 0xa0);
    piVar2 = *piVar1;
    while (piVar1 != arg1 + 0xa0) {
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x17150 + 0x48))();
        piVar1 = piVar2;
        piVar2 = *piVar2;
    }
    //WARNING: Could not recover jumptable at 0x00010806. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x17150 + 0x48))(arg1);
    return;
}


/* fcn.000110d4 @ 0x110d4 */

int64_t fcn.000110d4(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    uchar auStack_a8 [60];
    char cStack_6c;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_40;
    int64_t iStack_30;
    int64_t iStack_20;
    int64_t iStack_10;
    
    puVar1 = *(arg1 + 0x2e8);
    iStackX_8 = 0;
    iVar2 = (**(*0x17150 + 0x50))(0x80000000,8,0,0,&iStackX_8);
    if ((-1 < iVar2) && (iVar2 = (**(*0x17150 + 0x58))(iStackX_8,2,30000000), -1 < iVar2)) {
        while (iVar3 = (**(*0x17150 + 0x78))(iStackX_8), iVar3 < 0) {
            (*puVar1[6])(puVar1);
            iVar2 = (**puVar1)(puVar1,0,auStack_a8,0,0);
            if (-1 < iVar2) {
                if (iStack_60 != 0) {
                    (**(*0x17150 + 0x48))();
                }
                if (iStack_50 != 0) {
                    (**(*0x17150 + 0x48))();
                }
                if (iStack_40 != 0) {
                    (**(*0x17150 + 0x48))();
                }
                if (iStack_30 != 0) {
                    (**(*0x17150 + 0x48))();
                }
                if (iStack_20 != 0) {
                    (**(*0x17150 + 0x48))();
                }
                if (iStack_10 != 0) {
                    (**(*0x17150 + 0x48))();
                }
                if (cStack_6c == '\0') {
                    iVar2 = -0x7fffffffffffffef;
                }
                else {
                    iVar2 = (*puVar1[1])(puVar1);
                }
            }
        }
    }
    if (iStackX_8 != 0) {
        (**(*0x17150 + 0x70))();
    }
    return iVar2;
}


/* fcn.0001589c @ 0x1589c */

int64_t fcn.0001589c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.000157f8(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.00015024();
        if (iVar3 != 0) {
            iVar1 = *(iVar2 + 0x78);
            *(iVar1 + 0x24) = arg1;
            *(iVar1 + 0x38) = iVar3;
            *(iVar1 + 0x30) = arg1;
            *(iVar2 + 0xa8) = 0;
            *(iVar2 + 0x90) = (arg1 & 0xffffffffU) + iVar3;
            *(iVar2 + 0x88) = iVar3;
            *(iVar2 + 0x98) = iVar3;
            *(iVar2 + 0xa0) = iVar3;
            return iVar2;
        }
        (**(*0x17150 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.00015d40 @ 0x15d40 */

int64_t fcn.00015d40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t auStackX_18 [4];
    
    uVar4 = 0;
    uVar3 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    if (*(arg1 + 0x84) != 0) {
        fcn.000159cc(arg1,*(arg1 + 0x84) - 1,auStackX_18);
        uVar4 = auStackX_18[0];
        if ((*(arg1 + 0x90 + uVar4 * 0x28) - *(arg1 + 0xa0 + uVar4 * 0x28) < uVar3) &&
           (auStackX_18[0] < *(arg1 + 0x80) - 1U)) {
            uVar4 = auStackX_18[0] + 1;
        }
    }
    iVar2 = *(arg1 + 0xa0 + uVar4 * 0x28);
    if (*(arg1 + 0x90 + uVar4 * 0x28) - iVar2 < uVar3) {
        iVar2 = 0;
    }
    else {
        piVar1 = arg1 + 0xa8 + uVar4 * 0x28;
        *piVar1 = *piVar1 + arg2;
        *(arg1 + 0xa0 + uVar4 * 0x28) = uVar3 + iVar2;
        *(arg1 + 0x84) = *(arg1 + 0x84) + arg2;
    }
    return iVar2;
}


/* fcn.00013e00 @ 0x13e00 */

ulong fcn.00013e00(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00013dd4(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00013e71;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00013e71:
    cVar1 = *arg3;
    if (cVar1 != '\0') {
        arg3 = arg3 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg3);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.00011600 @ 0x11600 */

int64_t fcn.00011600(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int iVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    ulong uVar5;
    uint16_t uVar6;
    uint64_t arg3;
    uchar *arg4;
    int64_t arg3_00;
    uint32_t uVar7;
    uchar auStack_48 [16];
    uchar auStack_38 [34];
    int16_t iStack_16;
    
    fcn.000102c0(auStack_48,0x34);
    puVar1 = *(*(arg1 + 0xe0) + 0x2e8);
    iVar2 = *(arg1 + 0x11c);
    if (*(arg1 + 0x129) == '\0') {
        iVar2 = iVar2 * 2;
    }
    arg3 = 0;
    *(arg1 + 0x118) = iVar2;
    puVar3 = fcn.000159cc(arg2,0,0);
    uVar7 = arg3 + 1;
    uVar6 = *puVar3 << 8 | *puVar3 >> 8;
    if ((uVar7 < uVar6 - uVar7) && (uVar6 != 7)) {
        arg4 = NULL;
        iVar4 = (**puVar1)(puVar1,auStack_48);
        if (iVar4 < 0) {
            return iVar4;
        }
        if (iStack_16 != *(arg1 + 0xda)) {
            iVar4 = (*puVar1[1])(puVar1,0);
            if (iVar4 < 0) {
                return iVar4;
            }
            arg3 = *(arg1 + 0xda);
            arg4 = auStack_38;
            iVar4 = fcn.00011258(*(arg1 + 0xe0),arg1 + 200,arg3,arg4);
            if (iVar4 < 0) {
                return iVar4;
            }
        }
        *(arg2 + 8) = *(arg2 + 8) + uVar7;
        *(arg1 + 0x128) = '\0';
        iVar4 = fcn.00016658(*(arg1 + 0xe0),arg2,arg3,arg4);
        if (iVar4 < 0) {
            *(arg2 + 8) = *(arg2 + 8) + -1;
        }
        (**(*0x17150 + 0x20))(*(arg1 + 0x120));
        while (*(arg1 + 0x128) == '\0') {
            (*puVar1[6])(puVar1);
        }
        uVar5 = (**(*0x17150 + 0x18))(8);
        *(arg1 + 0x120) = uVar5;
    }
    else {
        iVar4 = (*puVar1[1])(puVar1,0);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = fcn.00011258(*(arg1 + 0xe0),arg1 + 200,*(arg1 + 0xd8),*(arg1 + 0x68));
        if (iVar4 < 0) {
            return iVar4;
        }
        arg3_00 = 0;
        uVar5 = 0;
        iVar4 = (**puVar1)(puVar1,auStack_48,0,0,0);
        if (iVar4 < 0) {
            return iVar4;
        }
        *(arg2 + 8) = *(arg2 + 8) + uVar7;
        *(arg1 + 0x128) = '\0';
        iVar4 = fcn.00016658(*(arg1 + 0xe0),arg2,uVar5,arg3_00);
        if (iVar4 < 0) {
            *(arg2 + 8) = *(arg2 + 8) + -1;
            return iVar4;
        }
        (**(*0x17150 + 0x20))(*(arg1 + 0x120));
        while (*(arg1 + 0x128) == '\0') {
            (*puVar1[6])(puVar1);
        }
        uVar5 = (**(*0x17150 + 0x18))(8);
        *(arg1 + 0x120) = uVar5;
        iVar4 = (*puVar1[1])(puVar1,0);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = fcn.00011258(*(arg1 + 0xe0),arg1 + 200,*(arg1 + 0xda),auStack_38);
    }
    return iVar4;
}


/* fcn.000159cc @ 0x159cc */

int64_t fcn.000159cc(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 < *(iVar3 + 0x84)) {
        uVar4 = 0;
        if (*(iVar3 + 0x80) != 0) {
            piVar5 = iVar3 + 0xa8;
            uVar6 = 0;
            do {
                iVar1 = *piVar5;
                if (arg2 < iVar1 + uVar6) {
                    if (arg3 != 0) {
                        *arg3 = uVar4;
                    }
                    return (arg2 - uVar6) + *(iVar3 + 0x98 + uVar4 * 0x28);
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                piVar5 = piVar5 + 10;
                uVar6 = iVar1 + uVar6;
            } while (uVar2 < *(iVar3 + 0x80));
        }
    }
    return 0;
}


/* fcn.00011258 @ 0x11258 */

void fcn.00011258(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *arg1_00;
    int64_t iVar1;
    ushort in_stack_00000028;
    
    iVar1 = *(arg1 + 0x2e8);
    arg1_00 = arg1 + 0x2f0;
    fcn.000102c0(arg1_00,0x34);
    *(arg1 + 0x322) = arg3;
    *arg1_00 = 0;
    *(arg1 + 0x2f8) = 0;
    *(arg1 + 0x310) = in_stack_00000028;
    *(arg1 + 0x2f4) = 0x80;
    if (arg1 + 0x300 != arg4) {
        section..text(arg1 + 0x300,arg4,0x10);
    }
    if (arg1 + 0x312 != arg2) {
        section..text(arg1 + 0x312,arg2,0x10);
    }
    iVar1 = (**(iVar1 + 8))(iVar1,arg1_00);
    if (iVar1 == -0x7fffffffffffffef) {
        fcn.000110d4(arg1,arg1_00);
    }
    return;
}


/* fcn.00016658 @ 0x16658 */

int64_t fcn.00016658(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t *piVar3;
    char cVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t iStackX_20;
    ulong in_stack_00000030;
    
    iStackX_20 = arg3;
    puVar5 = fcn.00015024(arg1,((*(arg2 + 0x80) - 1) + 10) * 0x10);
    if (puVar5 != NULL) {
        *puVar5 = 0x54504455;
        piVar1 = puVar5 + 2;
        *piVar1 = piVar1;
        puVar2 = puVar5 + 0x18;
        *(puVar5 + 4) = piVar1;
        *(puVar5 + 6) = arg1;
        *(puVar5 + 10) = arg2;
        *(puVar5 + 8) = 0x115e8;
        *(puVar5 + 0xc) = in_stack_00000030;
        cVar4 = *(arg1 + 0x20);
        iStackX_20 = CONCAT44(iStackX_20._4_4_,*(arg2 + 0x80));
        *(puVar5 + 0x1a) = 0x8000000000000006;
        if (cVar4 == '\x04') {
            iVar6 = (**(*0x17150 + 0x50))();
            if (-1 < iVar6) {
                *(puVar5 + 0x1c) = puVar5 + 0x1e;
                *(puVar5 + 0x1e) = 0;
                *(puVar5 + 0x20) = 0;
                puVar5[0x22] = *(arg2 + 0x84);
                fcn.00015ccc(arg2,puVar5 + 0x24,&iStackX_20);
                puVar5[0x23] = iStackX_20;
code_r0x000167b0:
                piVar3 = arg1 + 0x2d0;
                iVar6 = *piVar3;
                *(puVar5 + 4) = piVar3;
                *piVar1 = iVar6;
                *(iVar6 + 8) = piVar1;
                *piVar3 = piVar1;
                iVar6 = *(arg1 + 0x2e8);
                if (*(arg1 + 0x20) == '\x04') {
                    iVar6 = (**(iVar6 + 0x20))();
                }
                else {
                    iVar6 = (**(iVar6 + 0x18))(iVar6,puVar2);
                }
                if (iVar6 < 0) {
                    *(*piVar1 + 8) = *(puVar5 + 4);
                    **(puVar5 + 4) = *piVar1;
                    if ((*(*(puVar5 + 6) + 0x20) == '\x04') || (*(*(puVar5 + 6) + 0x20) == '\x06')) {
                        (**(*0x17150 + 0x70))(*puVar2);
                    }
                    (**(*0x17150 + 0x48))(puVar5);
                    return iVar6;
                }
                return 0;
            }
        }
        else {
            iVar6 = (**(*0x17150 + 0x50))(0x200,0x10,0x16000,puVar5,puVar2);
            if (-1 < iVar6) {
                *(puVar5 + 0x1c) = puVar5 + 0x1e;
                *(puVar5 + 0x1e) = 0;
                puVar5[0x20] = *(arg2 + 0x84);
                fcn.00015ccc(arg2,puVar5 + 0x22,&iStackX_20);
                puVar5[0x21] = iStackX_20;
                goto code_r0x000167b0;
            }
        }
        (**(*0x17150 + 0x48))(puVar5);
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00016504 @ 0x16504 */

void fcn.00016504(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar2 = *(arg1 + 0x2d0);
    puVar3 = *puVar2;
    while (puVar2 != arg1 + 0x2d0) {
        iVar1 = *(arg1 + 0x2e8);
        if (*(arg1 + 0x20) == '\x04') {
            (**(iVar1 + 0x30))();
        }
        else {
            (**(iVar1 + 0x28))(iVar1,puVar2 + 0xb);
        }
        puVar2 = puVar3;
        puVar3 = *puVar3;
    }
    return;
}


/* fcn.000138e0 @ 0x138e0 */

int64_t fcn.000138e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *arg1_00;
    ushort *arg2_00;
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ushort *in_stack_00000028;
    uchar auStack_38 [8];
    uint auStack_30 [2];
    uchar auStack_28 [16];
    
    arg2_00 = in_stack_00000028;
    uVar2 = 0;
    *(in_stack_00000028 + 0x10) = 0;
    if (arg2 != 0) {
        puVar3 = arg1 + 8;
        do {
            if ((puVar3[-1] == 0) || (arg1_00 = *puVar3, arg1_00 == NULL)) {
                return -0x7ffffffffffffffe;
            }
            iVar1 = fcn.00013c98(puVar3[-1],0x16ca8);
            if (iVar1 == 0) {
                fcn.00013e94(arg1_00,0,&stack0x00000028);
                if (0xffb0 < in_stack_00000028 - 8U) {
                    return -0x7ffffffffffffffe;
                }
                *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | 1;
                *arg2_00 = in_stack_00000028;
            }
            else {
                iVar1 = fcn.00013c98(puVar3[-1],0x16cc0);
                if (iVar1 == 0) {
                    fcn.00013e94(arg1_00,0,auStack_38);
                    if (0xfe < auStack_38._0_4_ - 1U) {
                        return -0x7ffffffffffffffe;
                    }
                    *(arg2_00 + 2) = auStack_38[0];
                    *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | 2;
                }
                else {
                    iVar1 = fcn.00013c98(puVar3[-1],0x16cc8);
                    if (iVar1 == 0) {
                        fcn.00013e94(arg1_00,0,auStack_30);
                        *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | 4;
                        *(arg2_00 + 4) = auStack_30[0];
                    }
                    else {
                        iVar1 = fcn.00013c98(puVar3[-1],0x16cd0);
                        if (iVar1 == 0) {
                            if (arg3 == '\0') {
                                iVar1 = fcn.00013760(arg1_00,arg2_00);
                                if (iVar1 < 0) {
                                    return iVar1;
                                }
                            }
                            else if (*arg1_00 != '\0') {
                                return -0x7ffffffffffffffe;
                            }
                            *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | 8;
                        }
                        else {
                            iVar1 = fcn.00013c98(puVar3[-1],0x16cb0);
                            if (iVar1 == 0) {
                                if (arg4 == 2) {
                                    return -0x7ffffffffffffffd;
                                }
                                fcn.00013e94(arg1_00,0,auStack_28);
                                if (auStack_28._0_8_ == 0) {
                                    return -0x7ffffffffffffffe;
                                }
                                *(arg2_00 + 0x10) = *(arg2_00 + 0x10) | 0x10;
                                arg2_00[1] = auStack_28._0_8_;
                            }
                            else if (arg3 != '\0') {
                                return -0x7ffffffffffffffd;
                            }
                        }
                    }
                }
            }
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 2;
        } while (uVar2 < arg2);
    }
    return 0;
}


/* fcn.00010ecc @ 0x10ecc */

ulong fcn.00010ecc(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.00015054(0x30);
    if (piVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        piVar2[1] = piVar2;
        piVar2[3] = 0xffff;
        piVar2[5] = 0xffff;
        piVar2[2] = arg2 & 0xffff;
        *piVar2 = arg1;
        piVar1 = *(arg1 + 8);
        piVar2[1] = piVar1;
        *piVar1 = piVar2;
        *(arg1 + 8) = piVar2;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001131c @ 0x1131c */

ulong fcn.0001131c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint16_t *puVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    uint64_t uVar14;
    char *pcVar15;
    
    iVar2 = *(arg1 + 0x70);
    iVar5 = 0;
    pcVar15 = "octet";
    if (*(iVar2 + 0x20) != 0) {
        pcVar15 = *(iVar2 + 0x20);
    }
    puVar3 = *(iVar2 + 0x30);
    cVar1 = **(iVar2 + 0x18);
    iVar11 = iVar5;
    while (cVar1 != '\0') {
        iVar11 = iVar11 + 1;
        cVar1 = (*(iVar2 + 0x18))[iVar11];
    }
    cVar1 = *pcVar15;
    iVar13 = iVar5;
    while (cVar1 != '\0') {
        iVar13 = iVar13 + 1;
        cVar1 = pcVar15[iVar13];
    }
    uVar14 = *(iVar2 + 0x28);
    uVar10 = iVar13 + 4 + iVar11;
    if (uVar14 != 0) {
        puVar9 = puVar3;
        do {
            cVar1 = **puVar9;
            iVar8 = iVar5;
            while (cVar1 != '\0') {
                iVar8 = iVar8 + 1;
                cVar1 = (*puVar9)[iVar8];
            }
            cVar1 = *puVar9[1];
            iVar4 = iVar5;
            while (cVar1 != '\0') {
                iVar4 = iVar4 + 1;
                cVar1 = puVar9[1][iVar4];
            }
            uVar10 = uVar10 + 2 + iVar4 + iVar8;
            puVar9 = puVar9 + 2;
            uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
    }
    iVar8 = 0;
    iVar5 = fcn.0001589c(uVar10);
    if (iVar5 == 0) {
        uVar6 = 0x8000000000000009;
    }
    else {
        puVar7 = fcn.00015d40(iVar5,uVar10,iVar8);
        *puVar7 = arg2 << 8 | arg2 >> 8;
        puVar7 = puVar7 + 1;
        fcn.00013e00(puVar7,uVar10 - 2,*(iVar2 + 0x18));
        iVar8 = puVar7 + iVar11 + 1;
        uVar10 = (uVar10 - 2) + (-1 - iVar11);
        fcn.00013e00(iVar8,uVar10,pcVar15);
        uVar14 = 0;
        uVar10 = uVar10 + (-1 - iVar13);
        iVar8 = iVar13 + 1 + iVar8;
        if (*(iVar2 + 0x28) != 0) {
            piVar12 = puVar3 + 1;
            do {
                iVar13 = 0;
                pcVar15 = piVar12[-1];
                cVar1 = *pcVar15;
                iVar11 = iVar13;
                while (cVar1 != '\0') {
                    iVar11 = iVar11 + 1;
                    cVar1 = pcVar15[iVar11];
                }
                cVar1 = **piVar12;
                while (cVar1 != '\0') {
                    iVar13 = iVar13 + 1;
                    cVar1 = (*piVar12)[iVar13];
                }
                fcn.00013e00(iVar8,uVar10,pcVar15);
                uVar10 = uVar10 + (-1 - iVar11);
                iVar11 = iVar11 + iVar8 + 1;
                fcn.00013e00(iVar11,uVar10,*piVar12);
                iVar8 = iVar13 + 1 + iVar11;
                uVar14 = uVar14 + 1;
                uVar10 = uVar10 + (-1 - iVar13);
                piVar12 = piVar12 + 2;
            } while (uVar14 < *(iVar2 + 0x28));
        }
        if (*(arg1 + 0x108) != 0) {
            fcn.000159a0(*(arg1 + 0x108));
        }
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x108) = iVar5;
        uVar6 = fcn.00011600(arg1,iVar5);
    }
    return uVar6;
}


/* fcn.0001683c @ 0x1683c */

int64_t fcn.0001683c(uint32_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    int64_t in_RDX;
    int64_t in_R8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_01 + 0x2e0) == 0) {
        arg1_00 = fcn.000162c4(arg1_01,in_RDX,in_R8);
        if (arg1_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = *(arg1_01 + 0x2e8);
            *(arg1_01 + 0x2e0) = arg1_00;
            if (*(arg1_01 + 0x20) == '\x04') {
                iVar1 = (**(iVar1 + 0x28))();
            }
            else {
                iVar1 = (**(iVar1 + 0x20))(iVar1,arg1_00 + 0x28);
            }
            if (iVar1 < 0) {
                *(arg1_01 + 0x2e0) = 0;
                fcn.00015f5c(arg1_00);
            }
        }
    }
    else {
        iVar1 = -0x7fffffffffffffec;
    }
    return iVar1;
}


/* fcn.000130b4 @ 0x130b4 */

void fcn.000130b4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00010ecc(arg1 + 0xa0,1);
    if (-1 < iVar1) {
        iVar1 = fcn.0001131c(arg1,arg2 & 0xffff);
        if (-1 < iVar1) {
            fcn.0001683c(*(arg1 + 0xe0));
        }
    }
    return;
}


/* fcn.0001193c @ 0x1193c */

void fcn.0001193c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    if (*(arg1 + 0x70) != NULL) {
        **(arg1 + 0x70) = arg2;
        if (*(*(arg1 + 0x70) + 8) != 0) {
            (**(*0x17150 + 0x68))();
        }
        *(arg1 + 0x70) = 0;
    }
    iVar1 = *(arg1 + 0xe0);
    if (iVar1 != 0) {
        fcn.00016504(iVar1);
        iVar2 = *(iVar1 + 0x2e0);
        if (*(iVar1 + 0x20) == '\x04') {
            if (iVar2 != 0) {
                (**(*(iVar1 + 0x2e8) + 0x30))(*(iVar1 + 0x2e8),iVar2 + 0x28);
            }
        }
        else if (iVar2 != 0) {
            (**(*(iVar1 + 0x2e8) + 0x28))(*(iVar1 + 0x2e8),iVar2 + 0x28);
        }
        (**(*(iVar1 + 0x2e8) + 8))(*(iVar1 + 0x2e8),0);
    }
    iVar1 = *(arg1 + 0x100);
    if (iVar1 != 0) {
        (**(*0x17150 + 0x120))(*(iVar1 + 0x38),0x16930,*(iVar1 + 0x30),*(arg1 + 8));
        fcn.0001655c(*(arg1 + 0x100));
        *(arg1 + 0x100) = 0;
    }
    if (*(arg1 + 0x108) != 0) {
        fcn.000159a0(*(arg1 + 0x108));
        *(arg1 + 0x108) = 0;
    }
    piVar3 = *(arg1 + 0xa0);
    piVar4 = *piVar3;
    while (piVar3 != arg1 + 0xa0) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        (**(*0x17150 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    fcn.000102c0(arg1 + 0x78,0x24);
    fcn.000102c0(arg1 + 200,0x10);
    fcn.000102c0(arg1 + 0xe8,0x10);
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x9c) = 0;
    *(arg1 + 0xb8) = 0;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 0x114) = 0;
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x11c) = 0;
    *(arg1 + 0x129) = 1;
    *(arg1 + 0xb0) = 0x10000;
    return;
}


/* fcn.00011508 @ 0x11508 */

ulong fcn.00011508(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    int64_t iVar2;
    ushort *puVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_R8;
    char *arg3_00;
    char *arg3_01;
    uint32_t uVar6;
    
    arg3_00 = CONCAT44(in_R8,arg3);
    iVar2 = 0;
    cVar1 = *arg3_00;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = arg3_00[iVar2];
    }
    uVar6 = iVar2 + 5;
    arg3_01 = arg3_00;
    iVar2 = fcn.0001589c(uVar6);
    if (iVar2 != 0) {
        puVar3 = fcn.00015d40(iVar2,uVar6,arg3_01);
        if (puVar3 != NULL) {
            iVar5 = 0;
            *puVar3 = 0x500;
            puVar3[1] = arg2 << 8 | arg2 >> 8;
            cVar1 = *arg3_00;
            while (cVar1 != '\0') {
                iVar5 = iVar5 + 1;
                cVar1 = arg3_00[iVar5];
            }
            fcn.00013e00(puVar3 + 2,iVar5 + 1,arg3_00);
            if (*(arg1 + 0x108) != 0) {
                fcn.000159a0(*(arg1 + 0x108));
            }
            *(arg1 + 0x110) = 0;
            *(arg1 + 0x108) = iVar2;
            uVar4 = fcn.00011600(arg1,iVar2);
            return uVar4;
        }
        fcn.000159a0(iVar2);
    }
    return 0x8000000000000009;
}


/* fcn.00015154 @ 0x15154 */

ulong fcn.00015154(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.000150c0(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00015259:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x0001524f:
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
code_r0x00015267:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00015267;
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
                            goto code_r0x0001524f;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00015259;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.0001563c @ 0x1563c */

ulong fcn.0001563c(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t noname_1;
    ushort *noname_0;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint16_t auStack_78 [8];
    ushort auStack_68 [40];
    
    uVar5 = 0;
    if (arg2 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        fcn.000102c0(auStack_78,0x10);
        uVar2 = uVar5;
        do {
            uVar7 = uVar2 + 1;
            puVar1 = auStack_78 + (uVar2 & 0xfffffffffffffffe);
            *puVar1 = *puVar1 | *(uVar2 + arg1) << ((uVar2 & 1) * -8 + 8 & 0x1f);
            uVar2 = uVar7;
        } while (uVar7 < 0x10);
        uVar7 = 0xffffffffffffffff;
        uVar6 = 0xffffffffffffffff;
        uVar2 = uVar5;
        noname_1 = uVar5;
        uVar8 = uVar5;
        do {
            if (auStack_78[noname_1] == 0) {
                if (uVar7 == 0xffffffffffffffff) {
                    uVar2 = 1;
                    uVar7 = noname_1;
                }
                else {
                    uVar2 = uVar2 + 1;
                }
            }
            else if (uVar7 != 0xffffffffffffffff) {
                if ((2 < uVar2) && ((uVar6 == 0xffffffffffffffff || (uVar8 < uVar2)))) {
                    uVar6 = uVar7;
                    uVar8 = uVar2;
                }
                uVar7 = 0xffffffffffffffff;
                uVar2 = uVar5;
            }
            noname_1 = noname_1 + 1;
        } while (noname_1 < 8);
        if (((uVar7 != 0xffffffffffffffff) && (2 < uVar2)) && ((uVar6 == 0xffffffffffffffff || (uVar8 < uVar2)))) {
            uVar6 = uVar7;
            uVar8 = uVar2;
        }
        noname_0 = auStack_68;
        do {
            if (((uVar6 == 0xffffffffffffffff) || (uVar5 < uVar6)) || (uVar8 + uVar6 <= uVar5)) {
                if (uVar5 != 0) {
                    *noname_0 = 0x3a;
                    noname_0 = noname_0 + 1;
                }
                noname_1 = 10;
                iVar3 = fcn.00014234(noname_0,10,0x170f0,auStack_78[uVar5]);
                noname_0 = noname_0 + iVar3;
            }
            else if (uVar5 == uVar6) {
                *noname_0 = 0x3a;
                noname_0 = noname_0 + 1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 8);
        if ((uVar6 != 0xffffffffffffffff) && (uVar8 + uVar6 == 8)) {
            *noname_0 = 0x3a;
            noname_0 = noname_0 + 1;
        }
        *noname_0 = 0;
        if (noname_0 - auStack_68 < 0x51) {
            fcn.00013d3c(arg2,noname_1,auStack_68);
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000005;
        }
    }
    return uVar4;
}


/* fcn.00014234 @ 0x14234 */

void fcn.00014234(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014298(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014298 @ 0x14298 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00014298(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000142f7;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x000142f7:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.00013dd4(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00013d10(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x16d6c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x000146b2:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x16d6c;
            }
            else {
                pcVar8 = 0x16d70;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00014449:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x000145ec;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00014603;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000145ec;
                        }
                        goto code_r0x00014603;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x000145ec:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00014449;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x00014449;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00014603;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000145ec;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00014603:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00015000(&var_68h_2,0x26,0,0x16d00);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x000146b2;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001489b;
                        if (uStack_a8 == 0x58) goto code_r0x00014990;
                        if (uStack_a8 == 0x61) goto code_r0x000148a4;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x0001442a;
                        }
                        if (uStack_a8 != 100) goto code_r0x00014426;
                        goto code_r0x000149a7;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x16d6c;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x00014bd4;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x16e0b;
                            goto code_r0x00014957;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00014957:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00014bd4;
                    }
                    fcn.00015000(&var_68h_2,0x26,0,0x16d64);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001489b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000148a4:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00014bd4;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00014426;
                            goto code_r0x00014994;
                        }
                        goto code_r0x00014999;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00014bd4;
                    }
                    fcn.00015000(&var_68h_2,0x26,0,0x16d48);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00014bd4;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00014990:
            uVar21 = uVar21 | 0x20;
code_r0x00014994:
            uVar21 = uVar21 | 0x80;
code_r0x00014999:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000149a7:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000149e9;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x000149e9:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x00014a71:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00014a71;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF%"[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x00014426:
            pcVar8 = &uStack_a8;
code_r0x0001442a:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00014bd4:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014264(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014264(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014264(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014264(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.0001528c @ 0x1528c */

ulong fcn.0001528c(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    char *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint in_R8;
    int16_t *arg2_00;
    uint32_t *puVar13;
    uint64_t uVar14;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    uVar11 = 0;
    if (arg2_00 == NULL) {
code_r0x000154ab:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x000154ab;
            if (arg4 == '\0') {
                iVar7 = fcn.000150c0(arg2,arg1);
                if (iVar7 == 0) {
code_r0x0001530d:
                    uVar12 = uVar11;
                    puVar5 = *0x17140;
                    if (*0x17140 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x000153b3:
                            cVar3 = *pcVar9;
                            if (cVar3 != '\0') {
                                uVar10 = uVar11;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    uVar10 = uVar10 + 1;
                                    cVar3 = pcVar9[uVar10];
                                }
                                if (uVar10 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar3 = *arg1;
                                pcVar8 = arg1;
                                pcVar6 = pcVar9;
                                for (uVar14 = uVar10;
                                    (((cVar3 != '\0' && (*pcVar6 != '\0')) && (*pcVar8 == *pcVar6)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    pcVar8 = pcVar8 + 1;
                                    pcVar6 = pcVar6 + 1;
                                    cVar3 = *pcVar8;
                                }
                                arg2 = *pcVar8 - *pcVar6;
                                if (*pcVar8 - *pcVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar9 = pcVar9 + uVar10;
                                cVar3 = *pcVar9;
                                if (cVar3 == '\0') goto code_r0x000153b9;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x000153b3;
                            }
code_r0x000153b9:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00015024();
                    if (puVar5 != NULL) {
                        if (((*0x17140 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x17140)) {
                            arg2 = puVar5;
                            section..text(puVar5,*0x17140,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.00015080(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00015080(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x17140 != NULL) {
                                    (**(*0x17150 + 0x48))();
                                }
                                *0x17140 = puVar5;
                                return 0;
                            }
                            (**(*0x17150 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x17150 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x0001530d;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00011f24 @ 0x11f24 */

int64_t fcn.00011f24(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uchar *arg3;
    int64_t *piVar3;
    uchar auStack_198 [18];
    uchar auStack_186 [46];
    uchar auStack_158 [80];
    uchar auStack_108 [256];
    
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        arg3 = (**arg1)(arg1,auStack_198);
        if (arg3 < 0) {
            fcn.00014234(auStack_108,0x100,0x16b78,arg3);
        }
        else {
            iVar2 = fcn.0001563c(auStack_186,auStack_158);
            if (iVar2 < 0) {
                return iVar2;
            }
            arg3 = auStack_158;
            fcn.00014234(auStack_108,0x100,0x16b20,arg3);
        }
        piVar1 = *0x17140;
        if (*0x17140 != NULL) {
            iVar2 = 0;
            if (**0x17140 != 0) {
                piVar3 = *0x17140;
                do {
                    (**(*0x17150 + 0x48))(*piVar3);
                    if (piVar3[1] != 0) {
                        (**(*0x17150 + 0x48))();
                    }
                    iVar2 = iVar2 + 1;
                    piVar3 = piVar1 + iVar2 * 2;
                } while (*piVar3 != 0);
            }
            (**(*0x17150 + 0x48))(piVar1);
            *0x17140 = NULL;
        }
        iVar2 = fcn.0001528c(0x16ad0,*0x16a08,auStack_108,CONCAT71(arg3 >> 8,1));
        if (-1 < iVar2) {
            iVar2 = fcn.0001528c(0x16ad4,*0x169f0,auStack_108,0);
        }
    }
    return iVar2;
}


/* fcn.00011af8 @ 0x11af8 */

int64_t fcn.00011af8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    char *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint in_register_00000014;
    int64_t *piVar7;
    int16_t iVar8;
    
    piVar7 = CONCAT44(in_register_00000014,arg2);
    iVar8 = arg3;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (piVar7 == NULL) {
        return -0x7ffffffffffffffe;
    }
    if (piVar7[3] == 0) {
        return -0x7ffffffffffffffe;
    }
    if ((piVar7[5] != 0) && (piVar7[6] == 0)) {
        return -0x7ffffffffffffffe;
    }
    pcVar1 = piVar7[2];
    if (pcVar1 != NULL) {
        if (*pcVar1 == -1) {
            return -0x7ffffffffffffffe;
        }
        uVar6 = 0;
        do {
            if (pcVar1[uVar6] != '\0') goto code_r0x00011b87;
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < 0xf);
        if (pcVar1[uVar5] < 2) {
            return -0x7ffffffffffffffe;
        }
    }
code_r0x00011b87:
    if (((((iVar8 == 1) || (iVar8 == 7)) && (piVar7[8] == 0)) && (piVar7[10] == 0)) ||
       (((iVar8 == 2 && (piVar7[8] == 0)) && (piVar7[0xc] == 0)))) {
        return -0x7ffffffffffffffe;
    }
    arg1_00 = arg1 + -0x20;
    if (*(arg1 + 0x48) == 0) {
        return -0x7fffffffffffffed;
    }
    if (*(arg1 + 0x50) != 0) {
        return -0x7ffffffffffffff1;
    }
    iVar4 = arg3;
    uVar3 = (**(*0x17150 + 0x18))(8);
    *(arg1 + 0x100) = uVar3;
    *(arg1 + 0x90) = iVar8;
    if ((*(piVar7 + 5) != 0) &&
       (iVar4 = fcn.000138e0(piVar7[6],*(piVar7 + 5),CONCAT71(iVar4 >> 8,1),arg3 & 0xffff), iVar4 < 0))
    goto code_r0x00011dae;
    iVar2 = *(arg1 + 0x48);
    iVar4 = arg1 + 0xa8;
    *(arg1 + 0x50) = piVar7;
    *(arg1 + 0xb8) = *(iVar2 + 0x22);
    *(arg1 + 0xba) = 0;
    *(arg1 + 0xf4) = *(iVar2 + 0x24);
    *(arg1 + 0xfc) = *(iVar2 + 0x26);
    *(arg1 + 0x109) = 1;
    if (iVar4 != iVar2 + 0x12) {
        section..text(iVar4,iVar2 + 0x12,0x10);
    }
    if (piVar7[2] != 0) {
        *(arg1 + 0xb8) = *(piVar7[2] + 0x10);
        *(arg1 + 0xf4) = *(piVar7[2] + 0x12);
        *(arg1 + 0xfc) = *(piVar7[2] + 0x14);
        if (iVar4 != piVar7[2]) {
            section..text(iVar4,piVar7[2],0x10);
        }
    }
    if (*(arg1 + 0xb8) == 0) {
        *(arg1 + 0xb8) = 0x45;
    }
    if (*(arg1 + 0x7c) == 0) {
        *(arg1 + 0x7c) = 0x200;
    }
    if (*(arg1 + 0x92) == 0) {
        *(arg1 + 0x92) = 1;
    }
    if (*(arg1 + 0xf4) == 0) {
        *(arg1 + 0xf4) = 5;
    }
    if (*(arg1 + 0xfc) == 0) {
        *(arg1 + 0xfc) = 3;
    }
    *piVar7 = -0x7ffffffffffffffa;
    if (iVar8 == 1) {
code_r0x00011d9b:
        iVar4 = fcn.000130b4(arg1_00,arg3 & 0xffff);
    }
    else {
        if (iVar8 != 2) {
            if (iVar8 != 7) {
                iVar4 = -0x7ffffffffffffff9;
                goto code_r0x00011dae;
            }
            goto code_r0x00011d9b;
        }
        iVar4 = fcn.00010ecc(arg1 + 0x80,0);
        if ((-1 < iVar4) && (iVar4 = fcn.0001131c(arg1_00,arg3 & 0xffff), -1 < iVar4)) {
            iVar4 = fcn.0001683c(*(arg1 + 0xc0));
        }
    }
    if (-1 < iVar4) {
        (**(*0x17150 + 0x20))(*(arg1 + 0x100));
        if (piVar7[1] != 0) {
            return 0;
        }
        while (*piVar7 == -0x7ffffffffffffffa) {
            (**(arg1 + 0x38))(arg1);
        }
        return *piVar7;
    }
code_r0x00011dae:
    fcn.0001193c(arg1_00,iVar4);
    (**(*0x17150 + 0x20))(*(arg1 + 0x100));
    return iVar4;
}


/* fcn.00010f30 @ 0x10f30 */

void fcn.00010f30(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar2 != piVar2) {
        uVar3 = arg2 & 0xffff;
        do {
            piVar1 = piVar2[1];
            if (piVar1[2] <= uVar3) {
                if (piVar1[3] <= uVar3) {
                    return;
                }
                piVar1[3] = uVar3;
                return;
            }
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            (**(*0x17150 + 0x48))();
        } while (*piVar2 != piVar2);
    }
    return;
}


/* fcn.00010f8c @ 0x10f8c */

ulong fcn.00010f8c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint in_register_0000000c;
    int64_t *piVar5;
    uint64_t uVar6;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    piVar5 = *piVar4;
    uVar3 = arg2 & 0xffff;
    if (piVar5 != piVar4) {
        uVar6 = arg2 & 0xffff;
        do {
            if (uVar6 <= piVar5[3]) {
                uVar1 = piVar5[2];
                if (uVar6 < uVar1) {
                    return 0x800000000000000e;
                }
                if (uVar1 == uVar6) {
                    iVar2 = piVar5[4];
                    piVar5[2] = uVar1 + 1;
                    *arg4 = uVar6;
                    if (0 < iVar2) {
                        *arg4 = (piVar5[5] + 1) * (iVar2 + -1) + 1 + uVar6 + piVar5[5];
                    }
                    if (piVar5[5] < uVar1 + 1) {
                        piVar5[2] = 0;
                        piVar5[4] = iVar2 + 1;
                    }
                    if ((piVar5[3] < piVar5[2]) || (arg3 != '\0')) {
                        *(*piVar5 + 8) = piVar5[1];
                        *piVar5[1] = *piVar5;
                        (**(*0x17150 + 0x48))(piVar5);
                    }
                }
                else {
                    uVar1 = piVar5[3];
                    if (uVar1 == uVar6) {
                        piVar5[3] = uVar1 - 1;
                    }
                    else {
                        piVar4 = fcn.00015054(0x30);
                        if (piVar4 == NULL) {
                            return 0x8000000000000009;
                        }
                        *piVar4 = piVar4;
                        piVar4[1] = piVar4;
                        piVar4[2] = uVar3 + 1 & 0xffff;
                        piVar4[3] = uVar1 & 0xffff;
                        piVar4[5] = uVar1 & 0xffff;
                        piVar5[3] = uVar3 - 1;
                        piVar4[1] = piVar5;
                        *piVar4 = *piVar5;
                        *(*piVar5 + 8) = piVar4;
                        *piVar5 = piVar4;
                    }
                }
                return 0;
            }
            piVar5 = *piVar5;
        } while (piVar5 != piVar4);
    }
    return 0x800000000000000e;
}


/* fcn.00012630 @ 0x12630 */

int64_t fcn.00012630(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ushort *puVar2;
    int64_t in_R8;
    
    iVar1 = fcn.0001589c(4);
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        puVar2 = fcn.00015d40(iVar1,4,in_R8);
        *puVar2 = 0x400;
        puVar2[1] = arg2 << 8 | arg2 >> 8;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x108) = iVar1;
        iVar1 = fcn.00011600(arg1,iVar1);
        if (-1 < iVar1) {
            *(arg1 + 0xc0) = *(arg1 + 0xb8);
        }
    }
    return iVar1;
}


/* fcn.000126bc @ 0x126bc */

int64_t fcn.000126bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    int64_t iStackX_8;
    
    uVar5 = arg3 - 4;
    iVar2 = *(arg1 + 0x70);
    uVar4 = *(arg2 + 2) << 8 | *(arg2 + 2) >> 8;
    bVar6 = uVar5 < *(arg1 + 0x9c);
    iVar3 = arg3;
    if (bVar6) {
        *(arg1 + 0x9e) = uVar4;
        fcn.00010f30(arg1 + 0xa0,uVar4);
    }
    iVar3 = fcn.00010f8c(arg1 + 0xa0,uVar4,CONCAT71(iVar3 >> 8,bVar6),&iStackX_8);
    if (iVar3 != -0x7ffffffffffffff2) {
        if (iVar3 < 0) {
            return iVar3;
        }
        if ((*(iVar2 + 0x50) != NULL) &&
           (iVar3 = (**(iVar2 + 0x50))(arg1 + 0x20,iVar2,arg3 & 0xffff,arg2), iVar3 < 0)) {
            fcn.000159a0(*arg4);
            *arg4 = 0;
            fcn.00011508(arg1,4,0x16b90);
            return -0x7fffffffffffffeb;
        }
        if (*(iVar2 + 0x40) != 0) {
            iVar3 = (iStackX_8 + -1) * *(arg1 + 0x9c);
            uVar1 = uVar5 + iVar3;
            if (*(iVar2 + 0x38) < uVar1) {
                if (*(arg1 + 0x9e) != 0) {
                    *(iVar2 + 0x38) = uVar1;
                    fcn.000159a0(*arg4);
                    *arg4 = 0;
                    fcn.00011508(arg1,3,0x16ba8);
                    return -0x7ffffffffffffffb;
                }
            }
            else {
                iVar3 = *(iVar2 + 0x40) + iVar3;
                if ((uVar5 != 0) && (iVar3 != arg2 + 4)) {
                    section..text(iVar3,arg2 + 4,uVar5);
                }
                if ((*(arg1 + 0x9e) == uVar4) && (bVar6)) {
                    *(iVar2 + 0x38) = uVar1;
                }
            }
        }
    }
    return 0;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013b6c @ 0x13b6c */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.00013b6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t arg3_00;
    uint32_t var_1h;
    
    if ((arg1 != 0) && (arg3 != 0)) {
        *arg3 = 0;
        if (arg4 != 0) {
            *arg4 = 0;
        }
        if ((*arg1 << 8 | *arg1 >> 8) == 6) {
            if (*(((arg2 & 0xffffffffU) - 1) + arg1) != '\0') {
                return -0x7fffffffffffffe8;
            }
            arg3_00 = arg3;
            iVar1 = fcn.00013ac8(arg1,arg2 & 0xffffffffU,arg3_00,0);
            if (iVar1 != -0x7ffffffffffffffb) {
                return iVar1;
            }
            if (*arg3 == 0) {
                return -0x7ffffffffffffff2;
            }
            if (arg4 == 0) {
                return 0;
            }
            iVar1 = fcn.00015054(*arg3 << 4);
            *arg4 = iVar1;
            if (iVar1 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = fcn.00013ac8(arg1,arg2 & 0xffffffff,arg3_00,iVar1);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
            return iVar1;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00012988 @ 0x12988 */

ulong fcn.00012988(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    
    uVar1 = *(arg2 + 0x20);
    if (((uVar1 & 1) != 0) && (*arg3 < *arg2)) {
        return 0;
    }
    if (((uVar1 & 0x10) != 0) && (*arg3 < *arg2)) {
        return 0;
    }
    if (((uVar1 & 2) != 0) && (*(arg2 + 4) != *(arg3 + 4))) {
        return 0;
    }
    if ((uVar1 & 8) == 0) {
        return 1;
    }
    uVar3 = 0;
    while (*(uVar3 + 0xe8 + arg1) == '\0') {
        uVar3 = uVar3 + 1;
        if (0xf < uVar3) {
            return 1;
        }
    }
    uVar4 = 0;
    do {
        if (*(uVar4 + 0xc + arg2) != '\0') {
            if ((arg2 + 0xc != arg1 + 0xe8) && (iVar2 = fcn.000102e0(arg2 + 0xc,arg1 + 0xe8,0x10), iVar2 != 0)) {
                return 0;
            }
            break;
        }
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
    } while (uVar3 < 0x10);
    if ((*(arg2 + 0x1c) != 0) && (*(arg2 + 0x1c) != *(arg1 + 0xf8))) {
        return 0;
    }
    return 1;
}


/* fcn.000154c8 @ 0x154c8 */

//WARNING: Variable defined which should be unmapped: var_20h

uint64_t * fcn.000154c8(uint32_t arg1)

{
    uint64_t *arg1_00;
    uint16_t uVar1;
    uint in_register_0000000c;
    uint64_t *arg1_01;
    uint16_t uVar2;
    uint16_t uVar3;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (&uStackX_10 != arg1_01) {
        section..text(&uStackX_10,arg1,8);
    }
    arg1_00 = arg1_01 + 1;
    if (&uStackX_8 != arg1_00) {
        section..text(&uStackX_8,arg1_00,8);
    }
    uVar1 = uStackX_10 >> 0x10;
    uVar2 = uStackX_10 >> 0x20;
    uVar3 = uStackX_10 >> 0x30;
    uStackX_10 = CONCAT62(CONCAT42(CONCAT22(uStackX_10 << 8 | uStackX_10 >> 8,uVar1 << 8 | uVar1 >> 8),
                                   uVar2 << 8 | uVar2 >> 8),uVar3 << 8 | uVar3 >> 8);
    uVar1 = uStackX_8 >> 0x10;
    uVar2 = uStackX_8 >> 0x20;
    uVar3 = uStackX_8 >> 0x30;
    uStackX_8 = CONCAT22(uStackX_8 << 8 | uStackX_8 >> 8,uVar1 << 8 | uVar1 >> 8) << 0x20 |
                (uVar2 << 8 | uVar2 >> 8) << 0x10 | uVar3 << 8 | uVar3 >> 8;
    if (arg1_01 != &uStackX_8) {
        section..text(arg1_01,&uStackX_8,8);
    }
    if (arg1_00 != &uStackX_10) {
        section..text(arg1_00,&uStackX_10,8);
    }
    return arg1_01;
}


/* fcn.00015dec @ 0x15dec */

uint32_t fcn.00015dec(int64_t arg1,ulong noname_1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    if ((arg2 == 0) || (uVar3 = *(arg1 + 0x84), uVar3 == 0)) {
        uVar3 = 0;
    }
    else {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if ((*piVar2 != 0) && (*piVar2 != 0)) break;
                uVar3 = uVar5 + 1;
                uVar5 = uVar3;
                piVar2 = piVar2 + 10;
            } while (uVar3 < *(arg1 + 0x80));
        }
        uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
        iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar3 < arg2) {
            if ((uVar3 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,uVar3);
            }
            arg3 = arg3 + uVar3;
            arg2 = arg2 - uVar3;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (arg2 <= uVar4) {
                    uVar3 = uVar3 + arg2;
                    iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((arg2 != 0) && (arg3 != iVar1)) {
                        section..text(arg3,iVar1,arg2);
                    }
                    break;
                }
                iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                arg2 = arg2 - uVar4;
                uVar3 = uVar3 + uVar4;
                if ((uVar4 != 0) && (arg3 != iVar1)) {
                    section..text(arg3,iVar1,uVar4);
                }
                arg3 = arg3 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((arg2 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,arg2);
            }
            uVar3 = arg2;
        }
    }
    return uVar3;
}


/* fcn.00012b04 @ 0x12b04 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.00012b04(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    int64_t *piVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint32_t arg3_00;
    int64_t iVar7;
    int64_t iStackX_8;
    int64_t var_30h;
    uchar auStack_58 [8];
    int16_t iStack_50;
    int16_t iStack_4e;
    uint8_t uStack_4c;
    char acStack_44 [12];
    int64_t var_30h_2;
    int64_t var_28h;
    uint32_t var_1ch;
    int16_t var_ch;
    int8_t var_ah;
    int32_t var_8h;
    
    iVar4 = 0;
    iStackX_8 = 0;
    *CONCAT44(var_30h._4_4_,var_30h) = 0;
    piVar1 = *(arg1 + 0xa0);
    if (piVar1 == arg1 + 0xa0) {
        iVar7 = -1;
    }
    else {
        iVar7 = piVar1[2];
    }
    if ((*(arg1 + 0x129) != '\0') && (iVar7 != 1)) {
        return 0;
    }
    fcn.000102c0(&iStack_50,0x24);
    if (arg3 == 0) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar3 = fcn.00013b6c(arg2,arg3 & 0xffffffff,&var_30h,&iStackX_8);
        iVar4 = iStackX_8;
    }
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar4 = fcn.000138e0(iVar4,var_30h,0,*(arg1 + 0xb0));
    if (((iVar4 < 0) || ((var_28h & ~*(arg1 + 0x98)) != 0)) ||
       (cVar2 = fcn.00012988(arg1,&iStack_50,arg1 + 0x78), cVar2 == '\0')) {
        if (iVar4 == -0x7ffffffffffffff7) {
            return -0x7fffffffffffffe9;
        }
        fcn.000159a0(*arg4);
        arg3_00 = 0x16bd0;
    }
    else {
        if ((var_28h & 8) == 0) {
            *(arg1 + 0x129) = 1;
code_r0x00012d76:
            if (iStack_50 != 0) {
                *(arg1 + 0x9c) = iStack_50;
            }
            if (iStack_4e != 0) {
                *(arg1 + 0xb2) = iStack_4e;
            }
            if (uStack_4c != 0) {
                *(arg1 + 0x11c) = uStack_4c;
            }
code_r0x00012da6:
            fcn.000159a0(*arg4);
            *arg4 = 0;
            iVar4 = fcn.00012630(arg1,iVar7 - 1);
            return iVar4;
        }
        *(arg1 + 0x129) = var_30h_2._6_1_;
        uVar6 = 0;
        do {
            if (*(uVar6 + 0xe8 + arg1) != '\0') goto code_r0x00012da6;
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < 0x10);
        uVar6 = 0;
        do {
            if (acStack_44[uVar6] != '\0') {
                if (var_30h_2._4_2_ != 0) {
                    if (arg1 + 0xe8 != acStack_44) {
                        section..text(arg1 + 0xe8,acStack_44,0x10);
                    }
                    *(arg1 + 0xf8) = var_30h_2._4_2_;
                    if (*(arg1 + 0x100) == 0) {
                        iVar4 = fcn.00016378(*(*(arg1 + 0x60) + 0x18),*(*(arg1 + 0x60) + 0x20),0x12a4c);
                        *(arg1 + 0x100) = iVar4;
                        if ((iVar4 != 0) &&
                           (iVar4 = (**(*0x17150 + 0x118))
                                              (*(iVar4 + 0x38),0x16930,auStack_58,*(*(arg1 + 0x60) + 0x20),
                                               *(arg1 + 8),8), iVar4 < 0)) {
                            fcn.0001655c(*(arg1 + 0x100));
                            *(arg1 + 0x100) = 0;
                            return -0x7ffffffffffffff9;
                        }
                    }
                    if (*(arg1 + 0x100) == 0) {
                        return -0x7ffffffffffffff9;
                    }
                    iVar4 = fcn.0001683c(*(arg1 + 0x100));
                    if (iVar4 < 0) {
                        fcn.000159a0(*arg4);
                        *arg4 = 0;
                        fcn.00011508(arg1,2,0x16c10);
                        return iVar4;
                    }
                    goto code_r0x00012d76;
                }
                break;
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < 0x10);
        fcn.000159a0(*arg4);
        arg3_00 = 0x16bf0;
    }
    *arg4 = 0;
    fcn.00011508(arg1,4,arg3_00);
    return -0x7fffffffffffffe9;
}


/* fcn.0001284c @ 0x1284c */

int64_t fcn.0001284c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uchar *in_stack_00000028;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = arg1_00 + 0xa0;
    uVar4 = *(arg2 + 2);
    iVar6 = -1;
    piVar2 = *piVar1;
    *in_stack_00000028 = 0;
    if (piVar2 == piVar1) {
        uVar5 = 0xffffffffffffffff;
    }
    else {
        uVar5 = piVar2[2];
    }
    if ((*(arg1_00 + 0x129) == '\0') || (uVar5 == (uVar4 << 8 | uVar4 >> 8))) {
        iVar3 = fcn.000126bc(arg1_00,arg2,arg3,arg4);
        if (-1 < iVar3) {
            *(arg1_00 + 0xb8) = *(arg1_00 + 0xb8) + 1;
            if (*(arg1_00 + 0x129) == '\0') {
                *(arg1_00 + 0x118) = *(arg1_00 + 0x11c) * 2;
            }
            if (*piVar1 != piVar1) {
                iVar6 = (*piVar1)[2];
            }
            if ((*(arg1_00 + 0x129) != '\0') || (iVar6 < 0)) {
                if (iVar6 < 0) {
                    uVar4 = *(arg1_00 + 0x9e);
                    *in_stack_00000028 = 1;
                }
                else {
                    uVar4 = iVar6 - 1;
                }
                fcn.000159a0(*arg4);
                *arg4 = 0;
                if ((*(arg1_00 + 0xb2) == *(arg1_00 + 0xb8) - *(arg1_00 + 0xc0)) || (iVar6 < 0)) {
                    iVar3 = fcn.00012630(arg1_00,uVar4);
                }
            }
        }
    }
    else {
        fcn.000159a0(*arg4);
        *arg4 = 0;
        iVar3 = fcn.00012630(arg1_00,uVar5 - 1);
    }
    return iVar3;
}


/* fcn.0001310c @ 0x1310c */

ulong fcn.0001310c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ushort *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint16_t uVar4;
    ushort *puVar5;
    int64_t in_R8;
    uint16_t *arg3;
    int64_t iVar6;
    uint16_t auStackX_8 [4];
    ushort *apuStackX_18 [2];
    int16_t var_40h;
    int64_t var_50h;
    
    uVar4 = arg2;
    arg1_00 = fcn.0001589c(*(arg1 + 0x9c) + 4);
    if (arg1_00 == 0) {
        return 0x8000000000000009;
    }
    puVar1 = fcn.00015d40(arg1_00,4,in_R8);
    *puVar1 = 0x300;
    puVar1[1] = uVar4 << 8 | uVar4 >> 8;
    iVar2 = *(arg1 + 0x70);
    auStackX_8[0] = *(arg1 + 0x9c);
    if (*(iVar2 + 0x40) == 0) {
        apuStackX_18[0] = NULL;
        arg3 = auStackX_8;
        iVar2 = (**(iVar2 + 0x60))(arg1 + 0x20,iVar2,arg3,apuStackX_18);
        if ((iVar2 < 0) || (*(arg1 + 0x9c) < auStackX_8[0])) {
            if (apuStackX_18[0] != NULL) {
                (**(*0x17150 + 0x48))();
            }
            fcn.00011508(arg1,8,0x16c48);
            return 0x8000000000000015;
        }
        if (auStackX_8[0] < *(arg1 + 0x9c)) {
            *(arg1 + 0x9e) = uVar4;
            fcn.00010f30(arg1 + 0xa0,arg2 & 0xffff);
        }
        if (auStackX_8[0] != 0) {
            fcn.00015d40(arg1_00,auStackX_8[0],arg3);
            if ((auStackX_8[0] != 0) && (puVar1 + 2 != apuStackX_18[0])) {
                section..text(puVar1 + 2,apuStackX_18[0],auStackX_8[0]);
            }
            (**(*0x17150 + 0x48))(apuStackX_18[0]);
        }
    }
    else {
        iVar6 = (uVar4 - 1) * auStackX_8[0];
        if (*(iVar2 + 0x38) < auStackX_8[0] + iVar6) {
            auStackX_8[0] = *(iVar2 + 0x38) - iVar6;
            *(arg1 + 0x9e) = uVar4;
            fcn.00010f30(arg1 + 0xa0,arg2 & 0xffff);
        }
        if (auStackX_8[0] != 0) {
            fcn.00015d40(arg1_00,auStackX_8[0],in_R8);
            puVar5 = *(iVar2 + 0x40) + iVar6;
            if ((auStackX_8[0] != 0) && (puVar1 + 2 != puVar5)) {
                section..text(puVar1 + 2,puVar5,auStackX_8[0]);
            }
        }
    }
    *(arg1 + 0x110) = 0;
    uVar3 = fcn.00011600(arg1,arg1_00);
    return uVar3;
}


/* fcn.000132f8 @ 0x132f8 */

ulong fcn.000132f8(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uchar *in_stack_00000028;
    
    piVar1 = arg1 + 0xa0;
    piVar2 = *piVar1;
    uVar5 = *(arg2 + 2) << 8 | *(arg2 + 2) >> 8;
    *in_stack_00000028 = 0;
    if (piVar2 == piVar1) {
        uVar4 = 0xffffffffffffffff;
    }
    else {
        uVar4 = piVar2[2];
    }
    if (uVar4 == uVar5) {
        fcn.00010f8c(piVar1,uVar5,0,&stack0x00000028);
        if ((*piVar1 != piVar1) && (uVar4 = (*piVar1)[2], -1 < uVar4)) {
            fcn.000159a0(*arg3);
            *arg3 = 0;
            uVar3 = fcn.0001310c(arg1,uVar4 & 0xffff);
            return uVar3;
        }
        if (*(arg1 + 0x9e) != uVar5) {
            fcn.000159a0(*arg3);
            *arg3 = 0;
            fcn.00011508(arg1,8,0x16c68);
            return 0x8000000000000017;
        }
        *in_stack_00000028 = 1;
    }
    return 0;
}


/* fcn.000133dc @ 0x133dc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000133dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t var_30h;
    uint auStack_68 [4];
    uint16_t auStack_58 [2];
    uint8_t uStack_54;
    int32_t var_40h;
    int64_t var_30h_2;
    int32_t var_bp_10h;
    
    iVar3 = 0;
    piVar1 = *(arg1 + 0xa0);
    iStackX_8 = 0;
    *CONCAT44(var_30h._4_4_,var_30h) = 0;
    if ((piVar1 == arg1 + 0xa0) || (piVar1[2] != 0)) {
        iVar2 = 0;
    }
    else {
        fcn.000102c0(auStack_58,0x24);
        if (arg3 == 0) {
            iVar2 = -0x7ffffffffffffffe;
        }
        else {
            iVar2 = fcn.00013b6c(arg2,arg3 & 0xffffffff,&var_30h,&iStackX_8);
            iVar3 = iStackX_8;
        }
        if (-1 < iVar2) {
            iVar3 = fcn.000138e0(iVar3,var_30h,0,*(arg1 + 0xb0));
            if ((((iVar3 < 0) || ((var_30h_2 & ~*(arg1 + 0x98)) != 0)) ||
                (((var_30h_2 & 1) != 0 && (*(arg1 + 0x78) < auStack_58[0])))) ||
               (((var_30h_2 & 2) != 0 && (uStack_54 != *(arg1 + 0x7c))))) {
                if (iVar3 != -0x7ffffffffffffff7) {
                    fcn.000159a0(*arg4);
                    *arg4 = 0;
                    fcn.00011508(arg1,4,0x16bd0);
                }
                iVar2 = -0x7fffffffffffffe9;
            }
            else {
                if (auStack_58[0] != 0) {
                    *(arg1 + 0x9c) = auStack_58[0];
                }
                if (uStack_54 != 0) {
                    *(arg1 + 0x11c) = uStack_54;
                }
                auStack_68[0] = 0x400;
                iVar2 = fcn.000132f8(arg1,auStack_68,iVar3,arg4);
            }
        }
    }
    return iVar2;
}


/* fcn.00015080 @ 0x15080 */

void fcn.00015080(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015024();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00014054 @ 0x14054 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00014054(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uchar *arg1_00;
    uint64_t arg3_00;
    uint64_t uVar3;
    char *arg1_01;
    uint in_R9;
    uint64_t uStackX_8;
    char *pcStackX_20;
    uint32_t var_40h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    pcStackX_20 = CONCAT44(in_R9,arg4);
    bVar1 = false;
    arg3_00 = 0x10;
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0;
    do {
        arg1_01 = arg1;
        if (((9 < *arg1 - 0x30U) && (5 < *arg1 + 0xbfU)) && (5 < *arg1 + 0x9fU)) {
            if (*arg1 != ':') {
                return 0x8000000000000003;
            }
            if (bVar1) {
                return 0x8000000000000003;
            }
            if (arg3_00 != 0x10) {
                return 0x8000000000000003;
            }
            if (uVar3 == 0x10) {
                return 0x8000000000000003;
            }
            arg1_01 = arg1 + 1;
            arg3_00 = uVar3;
            if (uVar3 == 0) {
                if (*arg1_01 != ':') {
                    return 0x8000000000000003;
                }
                arg1_01 = arg1 + 2;
            }
        }
        if (((*arg1_01 - 0x30U < 10) || (*arg1_01 + 0xbfU < 6)) || (*arg1_01 + 0x9fU < 6)) {
            if (bVar1) {
                iVar2 = fcn.00013e94(arg1_01,&pcStackX_20,&uStackX_8);
                if (iVar2 < 0) {
                    return 0x8000000000000003;
                }
                if (pcStackX_20 == arg1_01) {
                    return 0x8000000000000003;
                }
                if (0x80 < uStackX_8) {
                    return 0x8000000000000003;
                }
                arg1_01 = pcStackX_20;
                break;
            }
            iVar2 = fcn.00013f60(arg1_01,&pcStackX_20,&uStackX_8);
            if (iVar2 < 0) {
                return 0x8000000000000003;
            }
            if (4 < pcStackX_20 - arg1_01) {
                return 0x8000000000000003;
            }
            auStack_48[uVar3] = uStackX_8 >> 8;
            auStack_48[uVar3 + 1] = uStackX_8;
            uVar3 = uVar3 + 2;
            arg1_01 = pcStackX_20;
        }
        else {
            if (*arg1_01 != '/') break;
            if (arg3_00 != uVar3) {
                return 0x8000000000000003;
            }
        }
        if (*arg1_01 == '/') {
            bVar1 = true;
        }
        else {
            if (*arg1_01 != ':') break;
            if (uVar3 == 0x10) goto code_r0x000141b4;
        }
        arg1 = arg1_01 + 1;
        arg1_01 = arg1;
    } while (uVar3 < 0x11);
    if (uVar3 == 0x10) {
code_r0x000141b4:
        if (arg3_00 != 0x10) {
            return 0x8000000000000003;
        }
        if (uVar3 != 0x10) goto code_r0x000141c2;
    }
    else {
code_r0x000141c2:
        if (arg3_00 == 0x10) {
            return 0x8000000000000003;
        }
        if (arg3_00 == 0) goto code_r0x000141e8;
    }
    if (arg3 != auStack_48) {
        section..text(arg3,auStack_48,arg3_00);
    }
code_r0x000141e8:
    if (0x10 - uVar3 != 0) {
        fcn.000102c0(arg3_00 + arg3,0x10 - uVar3);
    }
    if (arg3_00 < uVar3) {
        arg1_00 = arg3 + 0x10 + (arg3_00 - uVar3);
        if ((uVar3 - arg3_00 != 0) && (arg1_00 != auStack_48 + arg3_00)) {
            section..text(arg1_00,auStack_48 + arg3_00,uVar3 - arg3_00);
        }
    }
    if (arg2 != 0) {
        *arg2 = arg1_01;
    }
    return 0;
}


/* fcn.00013e94 @ 0x13e94 */

ulong fcn.00013e94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    char *pcVar3;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar3 = arg1, uVar2 = fcn.00013dd4(arg1,0xf4241), uVar2 < 0xf4241)) {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1) {
        }
        for (; *pcVar3 == '0'; pcVar3 = pcVar3 + 1) {
        }
        *arg3 = 0;
        while( true ) {
            if (9 < *pcVar3 - 0x30U) {
                if (arg2 != NULL) {
                    *arg2 = pcVar3;
                }
                return 0;
            }
            cVar1 = *pcVar3;
            if (~(cVar1 + -0x30) / 10 < *arg3) break;
            pcVar3 = pcVar3 + 1;
            *arg3 = cVar1 + -0x30 + *arg3 * 10;
        }
        *arg3 = 0xffffffffffffffff;
        if (arg2 != NULL) {
            *arg2 = pcVar3;
        }
        return 0x8000000000000003;
    }
    return 0x8000000000000002;
}


/* fcn.00013c98 @ 0x13c98 */

int64_t fcn.00013c98(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    char cVar3;
    
    cVar3 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar3 = cVar3 + -0x20;
    }
    cVar2 = *arg2;
    if (cVar2 + 0x9fU < 0x1a) {
        cVar1 = cVar2 + -0x20;
    }
    else {
        cVar1 = cVar2;
    }
    if (*arg1 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if ((cVar2 == '\0') || (cVar3 != cVar1)) break;
            arg2 = arg2 + 1;
            cVar3 = *(arg2 + arg1);
            if (cVar3 + 0x9fU < 0x1a) {
                cVar3 = cVar3 + -0x20;
            }
            cVar2 = *arg2;
            cVar1 = cVar2;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar1 = cVar2 + -0x20;
            }
        } while (*(arg2 + arg1) != '\0');
    }
    return cVar3 - cVar1;
}


/* fcn.00013760 @ 0x13760 */

uint64_t fcn.00013760(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    char *arg1_00;
    char *pcVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    uint64_t uVar6;
    uint32_t in_R9D;
    uint32_t uStackX_8;
    uint uStackX_c;
    
    cVar1 = *arg1;
    uVar6 = 0;
    uVar2 = uVar6;
    if (cVar1 == ',') {
        fcn.000102c0(arg2 + 0xc,0x10);
    }
    else {
        while (cVar1 != '\0') {
            cVar1 = *(uVar2 + 1 + arg1);
            uVar2 = uVar2 + 1;
        }
        arg1_00 = fcn.00015080(arg1,uVar2 + 1,arg1);
        pcVar3 = arg1_00;
        if (arg1_00 == NULL) {
            return 0x8000000000000009;
        }
        for (; (*pcVar3 != '\0' && (*pcVar3 != ',')); pcVar3 = pcVar3 + 1) {
        }
        *pcVar3 = '\0';
        iVar4 = fcn.00014054(arg1_00,&uStackX_8,arg2 + 0xc,in_R9D);
        if ((iVar4 < 0) || (*CONCAT44(uStackX_c,uStackX_8) != '\0')) {
            uVar6 = 0x8000000000000002;
        }
        (**(*0x17150 + 0x48))(arg1_00);
        if (uVar6 < 0) {
            return uVar6;
        }
        for (; *arg1 != '\0'; arg1 = arg1 + 1) {
            if (*arg1 == ',') goto code_r0x00013840;
        }
    }
    if (*arg1 == ',') {
code_r0x00013840:
        puVar5 = arg1 + 1;
        if (*puVar5 == 0x2c) {
            *(arg2 + 0x1c) = 0;
        }
        else {
            fcn.00013e94(puVar5,0,&uStackX_8);
            if (0xffff < uStackX_8) {
                return 0x8000000000000002;
            }
            *(arg2 + 0x1c) = uStackX_8;
            for (; (0x2f < *puVar5 && (*puVar5 < 0x3a)); puVar5 = puVar5 + 1) {
            }
        }
        if (*puVar5 == 0x2c) {
            puVar5 = puVar5 + 1;
            fcn.00013e94(puVar5,0,&uStackX_8);
            if (uStackX_8 < 2) {
                *(arg2 + 0x1e) = uStackX_8 == 1;
                for (; (0x2f < *puVar5 && (*puVar5 < 0x3a)); puVar5 = puVar5 + 1) {
                }
                return -(*puVar5 != 0) & 0x8000000000000002;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00013ac8 @ 0x13ac8 */

ulong fcn.00013ac8(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    ulong uVar1;
    char *pcVar2;
    uint in_R8;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    uint8_t uVar6;
    
    pcVar5 = arg1 + 2;
    uVar6 = 0;
    pcVar2 = arg1 + -1 + (arg2 & 0xffffffffU);
    while( true ) {
        pcVar3 = pcVar5;
        if (pcVar2 <= pcVar5) {
            if ((*CONCAT44(in_R8,arg3) < uVar6) || (arg4 == 0)) {
                *CONCAT44(in_R8,arg3) = uVar6;
                uVar1 = 0x8000000000000005;
            }
            else {
                *CONCAT44(in_R8,arg3) = uVar6;
                uVar1 = 0;
            }
            return uVar1;
        }
        for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
        }
        if (pcVar3 == pcVar2) break;
        for (pcVar4 = pcVar3 + 1; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        }
        uVar6 = uVar6 + 1;
        if ((arg4 != 0) && (uVar6 <= *CONCAT44(in_R8,arg3))) {
            *(arg4 + (uVar6 - 1) * 0x10) = pcVar5;
            *(arg4 + 8 + (uVar6 - 1) * 0x10) = pcVar3 + 1;
        }
        pcVar5 = pcVar4 + 1;
    }
    return 0x8000000000000018;
}


/* fcn.00013d10 @ 0x13d10 */

uint64_t fcn.00013d10(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00013dd4 @ 0x13dd4 */

uint64_t fcn.00013dd4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00013c68 @ 0x13c68 */

int64_t fcn.00013c68(int64_t arg1)

{
    char cVar1;
    int iVar2;
    
    cVar1 = arg1;
    if (cVar1 - 0x30U < 10) {
        iVar2 = cVar1 + -0x30;
    }
    else {
        if (cVar1 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        iVar2 = cVar1 + -0x37;
    }
    return iVar2;
}


/* fcn.00013f60 @ 0x13f60 */

ulong fcn.00013f60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char cVar4;
    char *pcVar5;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar5 = arg1, uVar2 = fcn.00013dd4(arg1,0xf4241), uVar2 < 0xf4241)) {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*pcVar5 == ' ' || (*pcVar5 == '\t')); pcVar5 = pcVar5 + 1) {
        }
        cVar4 = '0';
        for (; *pcVar5 == '0'; pcVar5 = pcVar5 + 1) {
        }
        cVar1 = *pcVar5;
        if (*pcVar5 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        if (cVar1 == 'X') {
            if (pcVar5[-1] != '0') {
                *arg3 = 0;
                return 0;
            }
            pcVar5 = pcVar5 + 1;
        }
        *arg3 = 0;
        for (; ((*pcVar5 - cVar4 < 10 || (*pcVar5 + 0xbfU < 6)) || (*pcVar5 + 0x9fU < 6)); pcVar5 = pcVar5 + 1) {
            iVar3 = fcn.00013c68(CONCAT71(arg1 >> 8,*pcVar5));
            arg1 = -iVar3 - 1U >> 4;
            if (arg1 < *arg3) {
                *arg3 = 0xffffffffffffffff;
                if (arg2 != NULL) {
                    *arg2 = pcVar5;
                }
                return 0x8000000000000003;
            }
            *arg3 = *arg3 * 0x10 + iVar3;
        }
        if (arg2 != NULL) {
            *arg2 = pcVar5;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00015000 @ 0x15000 */

void fcn.00015000(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014298(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014264 @ 0x14264 */

uchar * fcn.00014264(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.000150c0 @ 0x150c0 */

ulong fcn.000150c0(int64_t arg1,int64_t arg2)

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
code_r0x00015120:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00015120;
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


/* fcn.00013d3c @ 0x13d3c */

ulong fcn.00013d3c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0x28;
    uVar2 = fcn.00013d10(arg2,0x28);
    if (uVar3 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x00013da9;
    }
    if (arg2 < arg1 + 0x50) {
        return 0x800000000000000f;
    }
code_r0x00013da9:
    iVar1 = *arg2;
    if (iVar1 != 0) {
        arg2 = arg2 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg2 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000157f8 @ 0x157f8 */

uint * fcn.000157f8(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.00015054((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x0001588a;
        puVar2 = fcn.00015054(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x0001588a;
        }
        (**(*0x17150 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x0001588a:
    return puVar1;
}


/* fcn.00015a28 @ 0x15a28 */

int64_t fcn.00015a28(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    int iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint32_t *puVar17;
    int iVar18;
    int64_t iVar19;
    uint32_t uStackX_8;
    int iStackX_10;
    uint32_t uStackX_18;
    ulong in_stack_00000030;
    uint64_t uStack_58;
    uint64_t uStack_50;
    
    uStack_50 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    uVar10 = 0;
    uVar12 = arg2;
    iStackX_10 = 0;
    uStackX_18 = 0;
    iVar8 = 0;
    uVar15 = 0;
    uStackX_8 = 0;
    iVar18 = 0;
    uVar16 = arg4 & 0xffffffff;
    if ((arg4 <= *arg1) || (uVar12 == 1)) {
        uVar16 = 0;
    }
    iVar13 = uVar16;
    uVar7 = uVar12;
    if (iVar13 != 0) {
        iVar8 = fcn.00015024(arg1,uVar16);
        if (iVar8 == 0) {
            return 0;
        }
        uVar7 = uVar12 + 1;
        iStackX_10 = iVar13;
        if (uVar12 == 0) {
            uVar10 = 0;
            uVar15 = 0;
            iVar18 = 0;
        }
        else {
            iVar19 = iVar8;
            puVar17 = arg1;
            do {
                uVar14 = uVar16;
                if (uVar14 < *puVar17) {
                    uVar9 = uVar15;
                    iVar5 = *(arg1 + 8 + uVar9 * 0x10);
                    if ((uVar14 != 0) && (iVar19 != iVar5)) {
                        section..text(iVar19,iVar5,uVar16);
                    }
                    puVar3 = arg1 + uVar9 * 0x10;
                    uStack_58 = *puVar3;
                    uStack_50 = puVar3[1];
                    iVar18 = iVar18 + uVar14;
                    piVar1 = arg1 + 8 + uVar9 * 0x10;
                    *piVar1 = *piVar1 + uVar16;
                    uVar10 = uStackX_18 + uVar14;
                    piVar2 = arg1 + uVar9 * 0x10;
                    *piVar2 = *piVar2 - uVar14;
                    uStackX_8 = uVar15;
                    goto code_r0x00015b24;
                }
                if ((*puVar17 != 0) && (iVar19 != *(puVar17 + 2))) {
                    section..text(iVar19,*(puVar17 + 2),*puVar17);
                }
                uVar4 = *puVar17;
                uVar15 = uVar15 + 1;
                uVar10 = uStackX_18 + uVar4;
                uVar16 = uVar14 - uVar4;
                iVar19 = iVar19 + uVar4;
                iVar18 = iVar18 + uVar4;
                uVar7 = uVar7 - 1;
            } while ((uVar14 - uVar4 != 0) && (puVar17 = puVar17 + 4, uStackX_18 = uVar10, uVar15 < uVar12));
code_r0x00015b24:
        }
    }
    iVar19 = fcn.000157f8(uVar7,uVar7);
    if (iVar19 == 0) {
        if (iVar8 != 0) {
            (**(*0x17150 + 0x48))(iVar8);
        }
        return 0;
    }
    iVar5 = *(iVar19 + 0x78);
    *(iVar5 + 0x10) = 0x1601c;
    *(iVar5 + 0x18) = in_stack_00000030;
    *(iVar5 + 0x20) = iStackX_10 != 0;
    if (iStackX_10 != 0) {
        iVar6 = *(iVar19 + 0x78);
        *(iVar6 + 0x30) = uVar10;
        *(iVar6 + 0x38) = iVar8;
        *(iVar19 + 0x88) = iVar8;
        *(iVar19 + 0x90) = uVar10 + iVar8;
        *(iVar19 + 0x98) = iVar8;
        *(iVar19 + 0xa0) = uVar10 + iVar8;
        *(iVar19 + 0xa8) = uVar10;
    }
    uVar10 = iStackX_10 != 0;
    if (uVar15 < uVar12) {
        puVar17 = uVar15 * 0x10 + arg1;
        uVar16 = uVar12 - uVar15;
        do {
            uVar15 = *puVar17;
            iVar8 = *(puVar17 + 2);
            uVar9 = uVar10;
            uVar10 = uVar10 + 1;
            puVar11 = (uVar9 + 3) * 0x10 + *(iVar19 + 0x78);
            *puVar11 = uVar15;
            *(puVar11 + 2) = iVar8;
            *(iVar19 + 0x90 + uVar9 * 0x28) = iVar8 + uVar15;
            *(iVar19 + 0xa0 + uVar9 * 0x28) = iVar8 + uVar15;
            *(iVar19 + 0x88 + uVar9 * 0x28) = iVar8;
            *(iVar19 + 0x98 + uVar9 * 0x28) = iVar8;
            *(iVar19 + 0xa8 + uVar9 * 0x28) = uVar15;
            iVar18 = iVar18 + *puVar17;
            puVar17 = puVar17 + 4;
            uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
    }
    *(iVar5 + 0x24) = iVar18;
    *(iVar19 + 0x84) = iVar18;
    if (uStackX_8 != 0) {
        puVar3 = arg1 + uStackX_8 * 0x10;
        *puVar3 = uStack_58;
        puVar3[1] = uStack_50;
    }
    return iVar19;
}


/* fcn.00015f5c @ 0x15f5c */

void fcn.00015f5c(int64_t arg1)

{
    char cVar1;
    
    cVar1 = *(*(arg1 + 8) + 0x20);
    if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
        (**(*0x17150 + 0x70))(*(arg1 + 0x28));
    }
    //WARNING: Could not recover jumptable at 0x00015f93. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x17150 + 0x48))(arg1);
    return;
}


/* fcn.000155f0 @ 0x155f0 */

void fcn.000155f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x17150 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.00015ccc @ 0x15ccc */

ulong fcn.00015ccc(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint in_R8;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar5 = 0;
    if (*(iVar1 + 0x80) != 0) {
        do {
            if (*(iVar1 + 0xa8 + uVar5 * 0x28) != 0) {
                if (*CONCAT44(in_R8,arg3) <= uVar3) {
                    return 0x8000000000000005;
                }
                uVar2 = uVar3;
                uVar3 = uVar3 + 1;
                *(arg2 + 8 + uVar2 * 0x10) = *(iVar1 + 0x98 + uVar5 * 0x28);
                *(arg2 + uVar2 * 0x10) = *(iVar1 + 0xa8 + uVar5 * 0x28);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *(iVar1 + 0x80));
    }
    *CONCAT44(in_R8,arg3) = uVar3;
    return 0;
}


/* fcn.000162c4 @ 0x162c4 */

uint * fcn.000162c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int64_t iVar2;
    
    puVar1 = fcn.00015024(arg1,0x40);
    if (puVar1 != NULL) {
        puVar1[8] = 0;
        *puVar1 = 0x52504455;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 4) = arg2;
        *(puVar1 + 6) = arg3;
        *(puVar1 + 0xe) = 0;
        *(puVar1 + 0xc) = 0x8000000000000006;
        iVar2 = (**(*0x17150 + 0x50))(0x200,0x10,0x162a8,puVar1,puVar1 + 10);
        if (-1 < iVar2) {
            return puVar1;
        }
        (**(*0x17150 + 0x48))(puVar1);
    }
    return NULL;
}


