// decompiled by r2ghidra: 1943_Mtftp4Dxe.pe32
// functions: 65

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x16d70 = *(arg2 + 0x60);
    *0x16d78 = *(arg2 + 0x58);
    *0x16d68 = arg2;
    (**(*0x16d70 + 0x140))(0x16540,0,0x16d88);
    arg2_00 = 0x164a0;
    (**(*0x16d70 + 0x98))(arg1,0x164a0,aiStackX_8);
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
    iVar1 = (**(*0x16d78 + 0x48))(L"NetworkStackVar",0x16550,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x16580 = arg1;
        *0x16588 = arg1;
        uVar2 = (**(*0x16d70 + 0x148))(0x16588,0x16510,0x16560,0x16530,0x165a8,0x164c0,0x16590,0);
    }
    return uVar2;
}


/* fcn.00014bec @ 0x14bec */

ulong fcn.00014bec(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16d70 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001603c @ 0x1603c */

uint * fcn.0001603c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint *puVar3;
    uint *puVar4;
    int64_t iVar5;
    ulong in_stack_00000028;
    ulong *apuStack_28 [2];
    
    puVar3 = fcn.00014bec(arg1,0x328);
    if (puVar3 != NULL) {
        *(puVar3 + 8) = 4;
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
        iVar5 = *0x16d70;
        *(puVar3 + 0xb8) = 0;
        *piVar1 = 0;
        iVar5 = (**(iVar5 + 0x118))(arg1,0x164d0,apuStack_28,arg2,arg1,2);
        if ((-1 < iVar5) && (iVar5 = (**apuStack_28[0])(apuStack_28[0],piVar1), -1 < iVar5)) {
            iVar5 = (**(*0x16d70 + 0x118))(*piVar1,0x16520,puVar3 + 0xba,arg2,arg1,0x10);
            if (-1 < iVar5) {
                iVar5 = (*arg3)(puVar3,in_stack_00000028);
                if ((-1 < iVar5) &&
                   (puVar2 = *(puVar3 + 0xba), iVar5 = (**puVar2)(puVar2,0,0,0,puVar3 + 0x10), -1 < iVar5)) {
                    return puVar3;
                }
                (**(*0x16d70 + 0x120))(*piVar1,0x16520,arg2,arg1);
            }
            fcn.00015230(arg1,arg2,0x164d0,*piVar1);
        }
        (**(*0x16d70 + 0x48))(puVar3);
    }
    return NULL;
}


/* fcn.00010658 @ 0x10658 */

int64_t fcn.00010658(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint *puVar8;
    uint *puVar9;
    int64_t iVar10;
    
    *arg3 = 0;
    puVar8 = fcn.00014bec(arg1,0x60);
    uVar7 = *0x1665c;
    uVar6 = *0x16658;
    uVar5 = *0x16654;
    uVar4 = *0x16650;
    if (puVar8 == NULL) {
        return -0x7ffffffffffffff7;
    }
    *puVar8 = 0x50544654;
    puVar1 = puVar8 + 0xc;
    *(puVar8 + 6) = 0;
    puVar2 = puVar8 + 0xe;
    puVar8[2] = uVar4;
    puVar8[3] = uVar5;
    puVar8[4] = uVar6;
    puVar8[5] = uVar7;
    puVar9 = puVar8 + 8;
    puVar3 = puVar8 + 0x10;
    *puVar9 = puVar9;
    *(puVar8 + 10) = puVar9;
    iVar10 = *0x16d70;
    *puVar1 = 0;
    *puVar2 = 0;
    *puVar3 = 0;
    *(puVar8 + 0x12) = arg1;
    *(puVar8 + 0x14) = arg2;
    *(puVar8 + 0x16) = 0;
    iVar10 = (**(iVar10 + 0x50))(0x80000200,8,fcn.00011534,puVar8,puVar1);
    if (-1 < iVar10) {
        iVar10 = (**(*0x16d70 + 0x50))(0x80000200,0x10,0x114f4,puVar8,puVar2);
        if (-1 < iVar10) {
            iVar10 = (**(*0x16d70 + 0x50))(0x80000000,8,0,0,puVar3);
            if (-1 < iVar10) {
                iVar10 = fcn.0001603c(arg1,arg2,0x10654);
                *(puVar8 + 0x16) = iVar10;
                if (iVar10 != 0) {
                    *arg3 = puVar8;
                    return 0;
                }
                (**(*0x16d70 + 0x70))(*puVar3);
                iVar10 = -0x7ffffffffffffff9;
            }
            (**(*0x16d70 + 0x70))(*puVar2);
            (**(*0x16d70 + 0x70))(*puVar1);
            (**(*0x16d70 + 0x48))(puVar8);
            return iVar10;
        }
        (**(*0x16d70 + 0x70))(*puVar1);
    }
    (**(*0x16d70 + 0x48))(puVar8);
    return iVar10;
}


/* fcn.00016220 @ 0x16220 */

int64_t fcn.00016220(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    fcn.000161c8(arg1);
    iVar2 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x16d70 + 0x120))(*(arg1 + 0x38),0x16520,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x164d0;
    }
    else {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x16d70 + 0x120))(*(arg1 + 0x38),0x164e0,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x164f0;
    }
    iVar2 = fcn.00015230(*(arg1 + 0x28),*(arg1 + 0x30),iVar2,*(arg1 + 0x38));
    if (-1 < iVar2) {
        piVar1 = arg1 + 8;
        if (*piVar1 != piVar1) {
            *(*piVar1 + 8) = *(arg1 + 0x10);
            **(arg1 + 0x10) = *piVar1;
        }
        (**(*0x16d70 + 0x48))(arg1);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00010940 @ 0x10940 */

ulong fcn.00010940(int64_t arg1,int64_t arg2)

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
                if (*(arg1 + 0x68) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x0001097f. Too many branches
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


/* fcn.00015090 @ 0x15090 */

ulong fcn.00015090(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x16d60;
    if (*0x16d60 != NULL) {
        iVar2 = 0;
        if (**0x16d60 != 0) {
            piVar3 = *0x16d60;
            do {
                (**(*0x16d70 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x16d70 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x16d70 + 0x48))(piVar1);
    }
    return 0;
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
    
    //[00] -r-x section size 25120 named .text
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


/* fcn.000118e8 @ 0x118e8 */

void fcn.000118e8(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar2 = *(arg1 + 0x98);
    if (piVar2 != NULL) {
        *piVar2 = arg2;
        if (piVar2[1] != 0) {
            (**(*0x16d70 + 0x68))();
        }
        *(arg1 + 0x98) = 0;
    }
    arg1_00 = *(arg1 + 0xf8);
    fcn.000161c8(arg1_00);
    iVar1 = *(arg1_00 + 0x2e0);
    if (*(arg1_00 + 0x20) == '\x04') {
        if (iVar1 != 0) {
            (**(*(arg1_00 + 0x2e8) + 0x30))(*(arg1_00 + 0x2e8),iVar1 + 0x28);
        }
    }
    else if (iVar1 != 0) {
        (**(*(arg1_00 + 0x2e8) + 0x28))(*(arg1_00 + 0x2e8),iVar1 + 0x28);
    }
    (**(*(arg1_00 + 0x2e8) + 8))(*(arg1_00 + 0x2e8),0);
    if (*(arg1 + 0x100) != 0) {
        fcn.00015424(*(arg1 + 0x100));
        *(arg1 + 0x100) = 0;
    }
    if (*(arg1 + 0x128) != 0) {
        (**(*0x16d70 + 0x120))(*(*(arg1 + 0x128) + 0x38),0x16520,*0x16588,*(arg1 + 0x70));
        fcn.00016220(*(arg1 + 0x128));
        *(arg1 + 0x128) = 0;
    }
    piVar2 = *(arg1 + 0xc0);
    piVar3 = *piVar2;
    while (piVar2 != arg1 + 0xc0) {
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        (**(*0x16d70 + 0x48))();
        piVar2 = piVar3;
        piVar3 = *piVar3;
    }
    fcn.000102c0(arg1 + 0xa0,0x18);
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xe0) = 0;
    *(arg1 + 0xbc) = 0;
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0xec) = 0;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x118) = 0;
    *(arg1 + 0x120) = 0;
    *(arg1 + 0xd0) = 1;
    *(arg1 + 0x122) = 1;
    *(arg1 + 0xb8) = 0x2000000;
    return;
}


/* fcn.00014c1c @ 0x14c1c */

void fcn.00014c1c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014bec(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00015320 @ 0x15320 */

int64_t fcn.00015320(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.0001527c(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.00014bec();
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
        (**(*0x16d70 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.000157c4 @ 0x157c4 */

int64_t fcn.000157c4(int64_t arg1,int64_t arg2,int64_t arg3)

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
        fcn.00015450(arg1,*(arg1 + 0x84) - 1,auStackX_18);
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


/* fcn.00013d60 @ 0x13d60 */

ulong fcn.00013d60(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00013d34(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00013dd1;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00013dd1:
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


/* fcn.00011424 @ 0x11424 */

void fcn.00011424(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint16_t *puVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uchar auStack_38 [20];
    uint uStack_24;
    ushort uStack_14;
    
    if (*(arg1 + 0x100) != 0) {
        fcn.00015424(*(arg1 + 0x100));
    }
    *(arg1 + 0x110) = 0;
    iVar1 = *(arg1 + 0x118);
    *(arg1 + 0x100) = arg2;
    if (*(arg1 + 0x122) == '\0') {
        iVar1 = iVar1 * 2;
    }
    *(arg1 + 0x108) = iVar1;
    fcn.000102c0(auStack_38,0x28);
    uStack_24 = *(arg1 + 0xe8);
    iVar1 = 0;
    puVar2 = fcn.00015450(arg2,0,0);
    uVar4 = *puVar2 << 8 | *puVar2 >> 8;
    uVar5 = iVar1 + 1U;
    if ((uVar5 < uVar4 - uVar5) && (uVar4 != 7)) {
        uStack_14 = *(arg1 + 0xee);
    }
    else {
        uStack_14 = *(arg1 + 0xec);
    }
    *(arg2 + 8) = *(arg2 + 8) + iVar1 + 1U;
    iVar3 = fcn.0001631c(*(arg1 + 0xf8));
    if (iVar3 < 0) {
        *(arg2 + 8) = *(arg2 + 8) + -1;
    }
    return;
}


/* fcn.00015424 @ 0x15424 */

void fcn.00015424(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.000153b0(*(arg1 + 0x78));
        (**(*0x16d70 + 0x48))(arg1);
    }
    return;
}


/* fcn.000153b0 @ 0x153b0 */

void fcn.000153b0(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x16d70 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x16d70 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x16d70 + 0x48))(arg1);
    }
    return;
}


/* fcn.00015450 @ 0x15450 */

int64_t fcn.00015450(uint32_t arg1,uint32_t arg2,int64_t arg3)

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


/* fcn.0001631c @ 0x1631c */

int64_t fcn.0001631c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    
    iVar4 = fcn.00015dfc(arg1,in_RDX,in_R8,in_R9);
    if (iVar4 == 0) {
        iVar5 = -0x7ffffffffffffff7;
    }
    else {
        piVar1 = iVar4 + 8;
        piVar2 = arg1 + 0x2d0;
        iVar5 = *piVar2;
        *(iVar4 + 0x10) = piVar2;
        *piVar1 = iVar5;
        *(iVar5 + 8) = piVar1;
        *piVar2 = piVar1;
        iVar5 = *(arg1 + 0x2e8);
        if (*(arg1 + 0x20) == '\x04') {
            iVar5 = (**(iVar5 + 0x20))();
        }
        else {
            iVar5 = (**(iVar5 + 0x18))(iVar5,iVar4 + 0x60);
        }
        if (iVar5 < 0) {
            *(*piVar1 + 8) = *(iVar4 + 0x10);
            **(iVar4 + 0x10) = *piVar1;
            cVar3 = *(*(iVar4 + 0x18) + 0x20);
            if ((cVar3 == '\x04') || (cVar3 == '\x06')) {
                (**(*0x16d70 + 0x70))(*(iVar4 + 0x60));
            }
            (**(*0x16d70 + 0x48))(iVar4);
        }
        else {
            iVar5 = 0;
        }
    }
    return iVar5;
}


/* fcn.0001137c @ 0x1137c */

ulong fcn.0001137c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ushort *puVar4;
    uint32_t arg2_00;
    uint in_R8;
    char *arg3_00;
    char *arg3_01;
    
    arg3_00 = CONCAT44(in_R8,arg3);
    iVar2 = 0;
    cVar1 = *arg3_00;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = arg3_00[iVar2];
    }
    arg2_00 = iVar2 + 5;
    arg3_01 = arg3_00;
    iVar2 = fcn.00015320(arg2_00);
    if (iVar2 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        puVar4 = fcn.000157c4(iVar2,arg2_00,arg3_01);
        *puVar4 = 0x500;
        puVar4[1] = arg2 << 8 | arg2 >> 8;
        fcn.00013d60(puVar4 + 2,arg2_00,arg3_00);
        uVar3 = fcn.00011424(arg1,iVar2);
    }
    return uVar3;
}


/* fcn.00014d1c @ 0x14d1c */

ulong fcn.00014d1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.00014c88(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00014e21:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x00014e17:
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
code_r0x00014e2f:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00014e2f;
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
                            goto code_r0x00014e17;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00014e21;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00013df4 @ 0x13df4 */

void fcn.00013df4(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013e58(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013e58 @ 0x13e58 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013e58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
    int64_t iVar10;
    int64_t iVar11;
    uint64_t *puVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    uint8_t *puVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    uint64_t uStack_d8;
    char *pcStack_d0;
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
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00013eb6;
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
code_r0x00013eb6:
    uVar17 = 1000000;
    uVar20 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar20;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar20 = fcn.00013d34(arg4,0xf4241);
        if (uVar17 < uVar20) {
            return 0;
        }
        uVar20 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00013d08(arg4);
        if (uVar17 < uVar5) {
            return 0;
        }
        uStack_98 = 0xffff;
    }
    var_78h = uVar20;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d8 = 0;
    pcStack_d0 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d0 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar20 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d0 <= arg1)))) break;
        uStack_a0 = 0;
        uVar20 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar17 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar17;
        if (uStack_a8 == 10) {
            puVar21 = puStackX_20 + var_78h;
            pcVar8 = 0x1690c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar21[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar21) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar21 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar21[1] << 8;
            }
            uVar5 = iVar4 | *puVar21;
code_r0x00014273:
            uStack_a8 = uVar5 & uStack_98;
            if ((uVar5 & uStack_98) == 10) {
                pcVar8 = 0x1690c;
            }
            else {
                pcVar8 = 0x16910;
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar12 = puStack_b0;
            puVar18 = in_stack_00000028;
            puVar21 = puStackX_20;
code_r0x0001400b:
            while( true ) {
                puStackX_20 = puVar21 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar17 = uVar17 | 0x800;
                    goto code_r0x000141ae;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar17 & 0x800) == 0) {
                        uVar17 = uVar17 | 0x20;
                        uStackX_18 = uVar17;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000141c5;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar17 = uVar17 | 0x10;
                            goto code_r0x000141ae;
                        }
                        goto code_r0x000141c5;
                    }
                }
                uVar20 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar20 = uStack_a8 + (uVar20 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar20;
                }
                puVar21 = puStackX_20 + -var_78h;
                uVar20 = uStack_c0;
                if ((uVar17 & 0x800) == 0) {
                    uVar17 = uVar17 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar17;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar17 = uVar17 | 1;
code_r0x000141ae:
                puVar21 = puStackX_20;
                uStackX_18 = uVar17;
                goto code_r0x0001400b;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar17 = uVar17 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar17 & 0x800) == 0) {
                            uVar17 = uVar17 | 0x200;
                            if (puVar12 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar12;
                                puVar12 = puVar12 + 1;
                                puStack_b0 = puVar12;
                            }
                            puVar21 = puStackX_20;
                            uStackX_18 = uVar17;
                        }
                        else {
                            if (puVar12 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar12;
                                puVar12 = puVar12 + 1;
                                puStack_b0 = puVar12;
                            }
                            puVar21 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x0001400b;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar17 = uVar17 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000141c5;
                        uVar17 = uVar17 | 8;
                    }
                }
                goto code_r0x000141ae;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar21;
code_r0x000141c5:
            puVar21 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar12 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00014bc8(&var_68h_2,0x26,0,0x168a0);
                        pcVar8 = &var_68h_2;
                        uVar20 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar21 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar21[1] << 8;
                            }
                            uVar5 = iVar4 | *puVar21;
                            goto code_r0x00014273;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001445b;
                        if (uStack_a8 == 0x58) goto code_r0x00014551;
                        if (uStack_a8 == 0x61) goto code_r0x00014464;
                        if (uStack_a8 == 99) {
                            if (puVar12 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar12;
                                puStack_b0 = puVar12 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x00013fec;
                        }
                        if (uStack_a8 != 100) goto code_r0x00013fe8;
                        goto code_r0x00014568;
                    }
                    puVar21 = puStackX_20 + var_78h;
                    pcVar8 = 0x1690c;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar21[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar21) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar21 = puStackX_20;
                    }
                }
                goto code_r0x00014795;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar12 == NULL) {
                        uVar5 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar5 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar5 < 0) {
                        if ((uVar5 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar5 & 0x7fffffffffffffff) * 0x15;
                            iVar11 = 0x169ab;
                            goto code_r0x00014518;
                        }
                    }
                    else if (uVar5 < 6) {
                        iVar11 = uVar5 * 0x19;
                        pcVar8 = "Success";
code_r0x00014518:
                        pcVar8 = pcVar8 + iVar11;
                        if (pcVar8 != &var_68h_2) goto code_r0x00014795;
                    }
                    fcn.00014bc8(&var_68h_2,0x26,0,0x16904);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001445b:
                        uVar17 = uVar17 | 0x400;
                        uStackX_18 = uVar17;
code_r0x00014464:
                        if (puVar12 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            puStack_b0 = puVar12 + 1;
                            pcVar8 = *puVar12;
                        }
                        if (pcVar8 == NULL) {
                            uVar17 = uVar17 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar17;
                        }
                        uVar22 = uVar22 & -((uVar17 & 0x800) != 0);
                        goto code_r0x00014795;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00013fe8;
                            goto code_r0x00014555;
                        }
                        goto code_r0x0001455a;
                    }
                    if (puVar12 == NULL) {
                        in_stack_00000028 = puVar18 + 1;
                        uVar5 = *puVar18;
                    }
                    else {
                        uVar5 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    if (uVar5 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00014795;
                    }
                    fcn.00014bc8(&var_68h_2,0x26,0,0x168e8);
                    pcVar8 = &var_68h_2;
                }
                uVar20 = uStack_c0;
                goto code_r0x00014795;
            }
            uVar17 = uVar17 & 0xffffffffffffffd9 | 0x10;
code_r0x00014551:
            uVar17 = uVar17 | 0x20;
code_r0x00014555:
            uVar17 = uVar17 | 0x80;
code_r0x0001455a:
            if (-1 < uVar17) {
                uVar17 = uVar17 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00014568:
            if ((uVar17 & 0x10) == 0) {
                if (puVar12 != NULL) {
                    uVar20 = *puVar12;
                    goto code_r0x000145aa;
                }
                uVar20 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar12 == NULL) {
                uVar20 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar20 = *puVar12;
code_r0x000145aa:
                puStack_b0 = puVar12 + 1;
            }
            cVar3 = (uVar17 & 4) << 3;
            if ((uVar17 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar17 & 8) != 0;
            if (uVar17 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar17 & 0x10) == 0) && (uVar2 = 0x10, uVar20 < 0)) {
code_r0x00014632:
                    uVar16 = uVar2;
                    uVar20 = uVar20 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar17 & 8) != 0) {
                    uVar17 = uVar17 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar20 < 0) && (uVar17 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar20 = -uVar20;
                }
                else {
                    uVar2 = 10;
                    if ((uVar17 & 0x4010) == 0x4000) goto code_r0x00014632;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar5 = uVar20;
            do {
                uVar6 = uVar5 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF"[uVar5 % uVar16];
                uVar5 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar20 == 0) {
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
            uVar17 = uVar17 | 0x1000;
            cVar13 = '\x01';
            uVar20 = uStack_c0;
            uStackX_18 = uVar17;
            if ((uVar17 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x00013fe8:
            pcVar8 = &uStack_a8;
code_r0x00013fec:
            uVar17 = uVar17 | 0x400;
            uStackX_18 = uVar17;
            puVar21 = puStackX_20;
        }
code_r0x00014795:
        puStackX_20 = puVar21;
        uVar16 = uVar17;
        iVar11 = ((uVar17 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar17 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar17 >> 0xc & 1) == 0) {
            uVar20 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar17 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar20 < uVar22 || ((uVar17 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar20 = uVar20 + 1;
                pcVar15 = pcVar15 + iVar11;
            }
            uStack_c0 = uVar20;
        }
        else {
            iVar11 = -iVar11;
        }
        if (uVar22 < uVar20) {
            uVar22 = uVar20;
        }
        uVar5 = uVar16 & 0x201;
        var_40h = uVar5;
        pcVar15 = pcStack_d0;
        if (uVar5 == 0x200) {
            uStack_d8 = uStack_d8 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e24(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e24(arg1,pcVar15,uVar22 - uVar20,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d8 = uStack_d8 + uVar6, (uVar17 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d0 <= arg1) break;
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
            if (((cVar3 != '\0') && (uStack_d8 = uStack_d8 + uVar14, (uVar17 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d0 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e24(arg1,pcStack_d0,uVar22 - uVar20,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar17;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar20 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar11 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d8 = uStack_d8 + uVar6;
                uVar5 = *pcVar8 & _cStack0000000000000030;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar10 = 0;
                    do {
                        if (pcStack_d0 <= arg1) break;
                        *arg1 = uVar5;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar5 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar10 = iVar10 + 1;
                    } while (iVar10 < 1);
                }
                pcVar8 = pcVar8 + iVar11;
                uVar5 = uVar20 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar10 = 0;
                    uVar5 = uVar20 + 2;
                    if (uStack_c0 <= uVar5) break;
                    uStack_d8 = uStack_d8 + uVar6;
                    iVar9 = iVar10;
                    if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar10;
                            if (pcStack_d0 <= arg1) break;
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
                uVar20 = uVar5;
            } while (uVar5 < uStack_c0);
            arg3 = uStackX_18;
            uVar5 = var_40h;
        }
        if (uVar5 == 0x201) {
            uStack_d8 = uStack_d8 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e24(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
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
    }
    iVar11 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d8 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d0 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar11 = iVar11 + 1;
    } while (iVar11 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.00014e54 @ 0x14e54 */

ulong fcn.00014e54(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

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
code_r0x00015073:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x00015073;
            if (arg4 == '\0') {
                iVar7 = fcn.00014c88(arg2,arg1);
                if (iVar7 == 0) {
code_r0x00014ed5:
                    uVar12 = uVar11;
                    puVar5 = *0x16d60;
                    if (*0x16d60 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x00014f7b:
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
                                if (cVar3 == '\0') goto code_r0x00014f81;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x00014f7b;
                            }
code_r0x00014f81:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00014bec();
                    if (puVar5 != NULL) {
                        if (((*0x16d60 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x16d60)) {
                            arg2 = puVar5;
                            section..text(puVar5,*0x16d60,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.00014c48(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00014c48(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x16d60 != NULL) {
                                    (**(*0x16d70 + 0x48))();
                                }
                                *0x16d60 = puVar5;
                                return 0;
                            }
                            (**(*0x16d70 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x16d70 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x00014ed5;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000116ec @ 0x116ec */

int64_t fcn.000116ec(int64_t arg1)

{
    int64_t iVar1;
    uint64_t arg3;
    uchar auStack_e8 [16];
    uint8_t uStack_d8;
    uchar auStack_a8 [168];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**arg1)(arg1,auStack_e8);
        if (-1 < iVar1) {
            arg3 = uStack_d8;
            fcn.00013df4(auStack_a8,0xa0,0x166d0,arg3);
            if (*0x16d60 != 0) {
                fcn.00015090();
                *0x16d60 = 0;
            }
            iVar1 = fcn.00014e54(0x16690,*0x165b8,auStack_a8,CONCAT71(arg3 >> 8,1));
            if (-1 < iVar1) {
                iVar1 = fcn.00014e54(0x16694,*0x165a0,auStack_a8,0);
            }
        }
    }
    return iVar1;
}


/* fcn.000161c8 @ 0x161c8 */

void fcn.000161c8(int64_t arg1)

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


/* fcn.00011b5c @ 0x11b5c */

uint64_t fcn.00011b5c(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint in_register_00000014;
    uint32_t *puVar7;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    
    puVar7 = CONCAT44(in_register_00000014,arg2) + 1;
    if (auStackX_10 != puVar7) {
        section..text(auStackX_10,puVar7,4);
    }
    uVar1 = auStackX_10[0] >> 0x10;
    uVar2 = auStackX_10[0] << 8 | auStackX_10[0] >> 8;
    uVar5 = uVar2;
    if (0xfffffffd < CONCAT22(uVar2,uVar1 << 8 | uVar1 >> 8) - 1U) goto code_r0x00011cd0;
    if (auStackX_18 != CONCAT44(in_register_00000014,arg2)) {
        section..text(auStackX_18,arg2,4);
    }
    uVar1 = auStackX_18[0] >> 0x10;
    uVar5 = (auStackX_18[0] << 8 | auStackX_18[0] >> 8) << 0x10;
    auStackX_18[0] = uVar1 << 8 | uVar1 >> 8 | uVar5;
    if ((*(arg1 + 0x78) == '\0') && (auStackX_18[0] != 0)) {
        if (&var_28h != arg1 + 0x7d) {
            section..text(&var_28h,arg1 + 0x7d,4);
        }
        if (auStackX_10 != arg1 + 0x79) {
            section..text(auStackX_10,arg1 + 0x79,4);
        }
        uVar1 = var_28h >> 0x10;
        uVar6 = CONCAT22(var_28h << 8 | var_28h >> 8,uVar1 << 8 | uVar1 >> 8);
        uVar1 = auStackX_10[0] >> 0x10;
        if (uVar6 == 0) {
code_r0x00011cc0:
            uVar5 = uVar6 & auStackX_18[0];
            if ((uVar6 & auStackX_18[0]) ==
                (uVar6 & CONCAT22(auStackX_10[0] << 8 | auStackX_10[0] >> 8,uVar1 << 8 | uVar1 >> 8)))
            goto code_r0x00011ccc;
        }
        else {
            uVar5 = auStackX_18[0] - 1;
            if (auStackX_18[0] - 1 < 0xfffffffe) {
                iVar4 = 0;
                do {
                    if (uVar6 == *(iVar4 * 4 + 0x16c90)) break;
                    iVar4 = iVar4 + 1;
                } while (iVar4 < 0x21);
                if (iVar4 < 0x1f) {
                    uVar3 = ~uVar6;
                    uVar5 = uVar3;
                    if (((uVar3 & auStackX_18[0]) == uVar3) || ((uVar3 & auStackX_18[0]) == 0)) goto code_r0x00011cd0;
                }
                goto code_r0x00011cc0;
            }
        }
code_r0x00011cd0:
        uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
code_r0x00011ccc:
        uVar5 = CONCAT71(uVar5 >> 8,1);
    }
    return uVar5;
}


/* fcn.00012b24 @ 0x12b24 */

int64_t fcn.00012b24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    ulong *puVar7;
    uint8_t *puVar8;
    ushort *in_stack_00000028;
    
    uVar6 = 0;
    *(in_stack_00000028 + 10) = 0;
    if (arg2 != 0) {
        puVar7 = arg1 + 8;
        do {
            iVar3 = puVar7[-1];
            if (iVar3 == 0) {
                return -0x7ffffffffffffffe;
            }
            puVar8 = *puVar7;
            if (puVar8 == NULL) {
                return -0x7ffffffffffffffe;
            }
            cVar1 = fcn.000127dc(iVar3,0x16730);
            uVar2 = iVar3;
            if (cVar1 == '\0') {
                cVar1 = fcn.000127dc(uVar2,0x16748);
                if (cVar1 == '\0') {
                    cVar1 = fcn.000127dc(uVar2,0x16750);
                    if (cVar1 == '\0') {
                        cVar1 = fcn.000127dc(uVar2,0x16758);
                        if (cVar1 == '\0') {
                            cVar1 = fcn.000127dc(uVar2,0x16738);
                            if (cVar1 == '\0') {
                                if (arg3 != '\0') {
                                    return -0x7ffffffffffffffd;
                                }
                            }
                            else {
                                if (arg4 == 2) {
                                    return -0x7ffffffffffffffd;
                                }
                                uVar5 = *puVar8;
                                iVar4 = 0;
                                if (uVar5 < 0x30) {
                                    return -0x7ffffffffffffffe;
                                }
                                do {
                                    if (0x39 < uVar5) break;
                                    puVar8 = puVar8 + 1;
                                    uVar2 = uVar5;
                                    uVar5 = *puVar8;
                                    iVar4 = uVar2 + iVar4 * 10 + -0x30;
                                } while (0x2f < uVar5);
                                if (iVar4 == 0) {
                                    return -0x7ffffffffffffffe;
                                }
                                *(in_stack_00000028 + 10) = *(in_stack_00000028 + 10) | 0x10;
                                in_stack_00000028[1] = iVar4;
                            }
                        }
                        else {
                            if (arg3 == '\0') {
                                iVar3 = fcn.0001297c(puVar8,in_stack_00000028);
                                if (iVar3 < 0) {
                                    return iVar3;
                                }
                            }
                            else if (*puVar8 != 0) {
                                return -0x7ffffffffffffffe;
                            }
                            *(in_stack_00000028 + 10) = *(in_stack_00000028 + 10) | 8;
                        }
                    }
                    else {
                        iVar4 = 0;
                        for (; (uVar5 = *puVar8, 0x2f < uVar5 && (uVar5 < 0x3a)); puVar8 = puVar8 + 1) {
                            iVar4 = uVar5 + (iVar4 * 5 + -0x18) * 2;
                        }
                        *(in_stack_00000028 + 10) = *(in_stack_00000028 + 10) | 4;
                        *(in_stack_00000028 + 4) = iVar4;
                    }
                }
                else {
                    iVar4 = 0;
                    for (; (uVar5 = *puVar8, 0x2f < uVar5 && (uVar5 < 0x3a)); puVar8 = puVar8 + 1) {
                        iVar4 = uVar5 + (iVar4 * 5 + -0x18) * 2;
                    }
                    if (0xfe < iVar4 - 1U) {
                        return -0x7ffffffffffffffe;
                    }
                    *(in_stack_00000028 + 2) = iVar4;
                }
            }
            else {
                iVar4 = 0;
                for (; (uVar5 = *puVar8, 0x2f < uVar5 && (uVar5 < 0x3a)); puVar8 = puVar8 + 1) {
                    iVar4 = uVar5 + (iVar4 * 5 + -0x18) * 2;
                }
                if (0xffb0 < iVar4 - 8U) {
                    return -0x7ffffffffffffffe;
                }
                *(in_stack_00000028 + 10) = *(in_stack_00000028 + 10) | 1;
                *in_stack_00000028 = iVar4;
            }
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 2;
        } while (uVar6 < arg2);
    }
    return 0;
}


/* fcn.00011ce0 @ 0x11ce0 */

int64_t fcn.00011ce0(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    uint in_register_00000014;
    int64_t iVar7;
    bool bVar8;
    uint auStackX_8 [2];
    uint uStack_b8;
    ushort uStack_b4;
    uchar uStack_b2;
    ulong uStack_b0;
    uchar uStack_a8;
    uchar auStack_a7 [4];
    uchar auStack_a3 [5];
    ushort uStack_9e;
    uchar auStack_9c [4];
    ushort uStack_98;
    uchar auStack_88 [36];
    char cStack_64;
    
    iVar7 = CONCAT44(in_register_00000014,arg2);
    uStack_a8 = *(iVar7 + 0x78);
    uStack_b8 = 0;
    uStack_b4 = 0x4000;
    uStack_b2 = 0;
    uStack_b0 = 0;
    if (auStack_a7 != iVar7 + 0x79) {
        section..text(auStack_a7,iVar7 + 0x79,4);
    }
    if (auStack_a3 != iVar7 + 0x7d) {
        section..text(auStack_a3,iVar7 + 0x7d,4);
    }
    uStack_9e = *(iVar7 + 0x82);
    uVar2 = *(iVar7 + 0xe8) >> 0x10;
    uVar6 = *(iVar7 + 0xe8);
    auStackX_8[0] = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar2 << 8 | uVar2 >> 8);
    uStack_98 = 0;
    section..text(auStack_9c,auStackX_8,4);
    iVar3 = (**(*(arg1 + 0x2e8) + 8))(*(arg1 + 0x2e8),&uStack_b8);
    if (iVar3 == -0x7fffffffffffffef) {
        iVar5 = *(iVar7 + 0x68);
        puVar1 = *(arg1 + 0x2e8);
        iVar4 = (**(*0x16d70 + 0x58))(*(iVar5 + 0x40),2,50000000);
        if (-1 < iVar4) {
            do {
                iVar4 = (**(*0x16d70 + 0x78))(*(iVar5 + 0x40));
                if (-1 < iVar4) {
                    bVar8 = false;
                    goto code_r0x00011e41;
                }
                (*puVar1[7])(puVar1);
                iVar4 = (**puVar1)(puVar1,0,auStack_88,0,0);
            } while ((iVar4 < 0) || (cStack_64 == '\0'));
            (*puVar1[1])(puVar1,0);
            iVar5 = (*puVar1[1])(puVar1,&uStack_b8);
            bVar8 = iVar5 == 0;
code_r0x00011e41:
            if (bVar8) {
                return 0;
            }
        }
    }
    if ((((*(iVar7 + 0x78) == '\0') && (iVar7 = iVar7 + 0x84, iVar7 != 0x16d80)) &&
        (iVar5 = fcn.000102e0(0x16d80,iVar7,4), iVar5 != 0)) &&
       (iVar3 = (**(*(arg1 + 0x2e8) + 0x18))(*(arg1 + 0x2e8),0,0x16d80,0x16d80,iVar7), iVar3 < 0)) {
        (**(*(arg1 + 0x2e8) + 8))(*(arg1 + 0x2e8),0);
    }
    return iVar3;
}


/* fcn.00010fa8 @ 0x10fa8 */

ulong fcn.00010fa8(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.00014c1c(0x30);
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


/* fcn.000111b0 @ 0x111b0 */

ulong fcn.000111b0(int64_t arg1)

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
    char *pcVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    uint64_t uVar15;
    
    iVar2 = *(arg1 + 0x98);
    iVar5 = 0;
    pcVar11 = "octet";
    if (*(iVar2 + 0x20) != 0) {
        pcVar11 = *(iVar2 + 0x20);
    }
    puVar3 = *(iVar2 + 0x30);
    cVar1 = **(iVar2 + 0x18);
    iVar12 = iVar5;
    while (cVar1 != '\0') {
        iVar12 = iVar12 + 1;
        cVar1 = (*(iVar2 + 0x18))[iVar12];
    }
    cVar1 = *pcVar11;
    iVar14 = iVar5;
    while (cVar1 != '\0') {
        iVar14 = iVar14 + 1;
        cVar1 = pcVar11[iVar14];
    }
    uVar15 = *(iVar2 + 0x28);
    uVar10 = iVar14 + 4 + iVar12;
    if (uVar15 != 0) {
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
            uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
    }
    iVar8 = 0;
    iVar5 = fcn.00015320(uVar10);
    if (iVar5 == 0) {
        uVar6 = 0x8000000000000009;
    }
    else {
        puVar7 = fcn.000157c4(iVar5,uVar10,iVar8);
        *puVar7 = *(arg1 + 0xb8) << 8 | *(arg1 + 0xb8) >> 8;
        puVar7 = puVar7 + 1;
        fcn.00013d60(puVar7,uVar10 - 2,*(iVar2 + 0x18));
        iVar8 = puVar7 + iVar12 + 1;
        uVar10 = (uVar10 - 2) + (-1 - iVar12);
        fcn.00013d60(iVar8,uVar10,pcVar11);
        uVar15 = 0;
        uVar10 = uVar10 + (-1 - iVar14);
        iVar8 = iVar14 + 1 + iVar8;
        if (*(iVar2 + 0x28) != 0) {
            piVar13 = puVar3 + 1;
            do {
                iVar14 = 0;
                pcVar11 = piVar13[-1];
                cVar1 = *pcVar11;
                iVar12 = iVar14;
                while (cVar1 != '\0') {
                    iVar12 = iVar12 + 1;
                    cVar1 = pcVar11[iVar12];
                }
                cVar1 = **piVar13;
                while (cVar1 != '\0') {
                    iVar14 = iVar14 + 1;
                    cVar1 = (*piVar13)[iVar14];
                }
                fcn.00013d60(iVar8,uVar10,pcVar11);
                uVar10 = uVar10 + (-1 - iVar12);
                iVar12 = iVar12 + iVar8 + 1;
                fcn.00013d60(iVar12,uVar10,*piVar13);
                iVar8 = iVar14 + 1 + iVar12;
                uVar15 = uVar15 + 1;
                uVar10 = uVar10 + (-1 - iVar14);
                piVar13 = piVar13 + 2;
            } while (uVar15 < *(iVar2 + 0x28));
        }
        uVar6 = fcn.00011424(arg1,iVar5);
    }
    return uVar6;
}


/* fcn.000163f8 @ 0x163f8 */

int64_t fcn.000163f8(uint32_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    int64_t in_RDX;
    int64_t in_R8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_01 + 0x2e0) == 0) {
        arg1_00 = fcn.00015d48(arg1_01,in_RDX,in_R8);
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
                fcn.000159e0(arg1_00);
            }
        }
    }
    else {
        iVar1 = -0x7fffffffffffffec;
    }
    return iVar1;
}


/* fcn.000128c4 @ 0x128c4 */

int64_t fcn.000128c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t arg3_00;
    
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    if ((*arg1 << 8 | *arg1 >> 8) == 6) {
        if (arg2 != 2) {
            if (*(((arg2 & 0xffffffffU) - 1) + arg1) != '\0') goto code_r0x000128fe;
            arg3_00 = arg3;
            iVar1 = fcn.00012820(arg1,arg2 & 0xffffffff,arg3_00,0);
            if (iVar1 != -0x7ffffffffffffffb) {
                return iVar1;
            }
            if (arg4 != 0) {
                iVar1 = fcn.00014bec(0x8000000000000005,*arg3 << 4);
                *arg4 = iVar1;
                if (iVar1 == 0) {
                    return -0x7ffffffffffffff7;
                }
                fcn.00012820(arg1,arg2 & 0xffffffffU,arg3_00,iVar1);
            }
        }
        iVar1 = 0;
    }
    else {
code_r0x000128fe:
        iVar1 = -0x7ffffffffffffffe;
    }
    return iVar1;
}


/* fcn.00011ecc @ 0x11ecc */

uint64_t fcn.00011ecc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    uint *arg1_01;
    uint *arg1_02;
    uint *puVar1;
    char cVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    ulong uVar5;
    uint16_t uVar6;
    uint in_register_00000014;
    uint64_t *puVar7;
    uint64_t uVar8;
    int16_t iVar9;
    int64_t iVar10;
    
    puVar7 = CONCAT44(in_register_00000014,arg2);
    iVar9 = arg3;
    if ((((((arg1 == 0) || (puVar7 == NULL)) || (puVar7[3] == 0)) || ((puVar7[5] != 0 && (puVar7[6] == 0)))) ||
        (((iVar9 == 1 || (iVar9 == 7)) && ((puVar7[8] == 0 && (puVar7[10] == 0)))))) ||
       ((iVar9 == 2 && ((puVar7[8] == 0 && (puVar7[0xc] == 0)))))) {
        return 0x8000000000000002;
    }
    arg1_00 = arg1 + -0x18;
    iVar10 = arg3;
    uVar5 = (**(*0x16d70 + 0x18))(8);
    uVar8 = -(*(arg1 + 0x40) != 1) & 0x8000000000000013;
    if (*(arg1 + 0xa0) != 0) {
        uVar8 = 0x800000000000000f;
    }
    if ((puVar7[2] != 0) && (cVar2 = fcn.00011b5c(arg1_00,puVar7[2]), cVar2 == '\0')) {
        uVar8 = 0x8000000000000002;
    }
    if (uVar8 < 0) {
        (**(*0x16d70 + 0x20))(uVar5);
        return uVar8;
    }
    *(arg1 + 0xa0) = iVar9;
    puVar1 = puVar7[2];
    if ((puVar7[5] != 0) &&
       (uVar8 = fcn.00012b24(puVar7[6],puVar7[5],CONCAT71(iVar10 >> 8,1),arg3 & 0xffff), uVar8 < 0))
    goto code_r0x00012279;
    *(arg1 + 0x80) = puVar7;
    *(arg1 + 0xa2) = 0x200;
    arg1_01 = arg1 + 0xd0;
    *(arg1 + 0xb8) = 1;
    if (arg1_01 != arg1 + 0x70) {
        section..text(arg1_01,arg1 + 0x70,4);
    }
    uVar3 = *arg1_01 >> 0x10;
    uVar4 = *arg1_01;
    *arg1_01 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar3 << 8 | uVar3 >> 8);
    *(arg1 + 0xd6) = 0;
    arg1_02 = arg1 + 0xd8;
    *(arg1 + 0xd4) = *(arg1 + 0x74);
    if (arg1_02 != arg1 + 0x6c) {
        section..text(arg1_02,arg1 + 0x6c,4);
    }
    uVar3 = *arg1_02 >> 0x10;
    uVar4 = *arg1_02;
    *arg1_02 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar3 << 8 | uVar3 >> 8);
    *(arg1 + 0xfc) = *(arg1 + 0x76);
    *(arg1 + 0x100) = *(arg1 + 0x78);
    *(arg1 + 0x10a) = 1;
    if (puVar1 != NULL) {
        if (arg1_01 != puVar1 + 1) {
            section..text(arg1_01,puVar1 + 1,4);
        }
        if (arg1_02 != puVar1) {
            section..text(arg1_02,puVar1,4);
        }
        uVar3 = *arg1_01 >> 0x10;
        uVar6 = *arg1_01;
        uVar4 = *arg1_02 >> 0x10;
        *arg1_01 = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar3 << 8 | uVar3 >> 8);
        uVar3 = *arg1_02;
        *arg1_02 = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar4 << 8 | uVar4 >> 8);
        *(arg1 + 0xd4) = *(puVar1 + 2);
        *(arg1 + 0xfc) = *(puVar1 + 10);
        *(arg1 + 0x100) = *(puVar1 + 3);
    }
    if (*(arg1 + 0xd4) == 0) {
        *(arg1 + 0xd4) = 0x45;
    }
    if (*(arg1 + 0xfc) == 0) {
        *(arg1 + 0xfc) = 5;
    }
    if (*(arg1 + 0x100) == 0) {
        *(arg1 + 0x100) = 3;
    }
    uVar8 = fcn.00011ce0(*(arg1 + 0xe0),arg1_00);
    if (uVar8 < 0) goto code_r0x00012279;
    *puVar7 = 0x8000000000000006;
    if (iVar9 == 2) {
        uVar8 = fcn.00010fa8(arg1 + 0xa8,0);
        if (-1 < uVar8) {
            uVar8 = fcn.000111b0(arg1_00);
joined_r0x00012231:
            if (-1 < uVar8) {
                uVar8 = fcn.000163f8(*(arg1 + 0xe0));
            }
        }
    }
    else {
        uVar8 = fcn.00010fa8(arg1 + 0xa8,1);
        if (-1 < uVar8) {
            uVar8 = fcn.000111b0(arg1_00);
            goto joined_r0x00012231;
        }
    }
    if (-1 < uVar8) {
        (**(*0x16d70 + 0x20))(uVar5);
        if (puVar7[1] == 0) {
            while (*puVar7 == 0x8000000000000006) {
                (**(arg1 + 0x38))(arg1);
            }
            return *puVar7;
        }
        return 0;
    }
code_r0x00012279:
    fcn.000118e8(arg1_00,-0x7ffffffffffffff9);
    (**(*0x16d70 + 0x20))(uVar5);
    return uVar8;
}


/* fcn.00011534 @ 0x11534 */

void fcn.00011534(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    code *pcVar2;
    ulong *puVar3;
    ulong *puVar4;
    int iVar5;
    int64_t iVar6;
    uint16_t *puVar7;
    uint16_t uVar8;
    uchar auStack_38 [20];
    uint uStack_24;
    ushort uStack_14;
    
    puVar1 = *(arg1 + 0x20);
    puVar4 = *puVar1;
    do {
        puVar3 = puVar4;
        if (puVar1 == arg1 + 0x20) {
            return;
        }
        if (*(puVar1 + 0x104) != '\0') {
            *(puVar1 + 0x104) = 0;
            if (((puVar1[0x12] == 0) || (pcVar2 = *(puVar1[0x12] + 0x58), pcVar2 == NULL)) ||
               (iVar6 = (*pcVar2)(puVar1 + 2), -1 < iVar6)) {
                *(puVar1 + 0x21) = *(puVar1 + 0x21) + 1;
                if (*(puVar1 + 0x21) < *(puVar1 + 0x10c)) {
                    fcn.000102c0(auStack_38,0x28);
                    uStack_24 = *(puVar1 + 0x1c);
                    puVar7 = fcn.00015450(puVar1[0x1f],0,0);
                    uVar8 = *puVar7 << 8 | *puVar7 >> 8;
                    if ((uVar8 - 1 < 2) || (uVar8 == 7)) {
                        uStack_14 = *(puVar1 + 0xe4);
                    }
                    else {
                        uStack_14 = *(puVar1 + 0xe6);
                    }
                    *(puVar1[0x1f] + 8) = *(puVar1[0x1f] + 8) + 1;
                    iVar6 = fcn.0001631c(puVar1[0x1e]);
                    if (iVar6 < 0) {
                        *(puVar1[0x1f] + 8) = *(puVar1[0x1f] + 8) + -1;
                    }
                    iVar5 = *(puVar1 + 0x22);
                    if (*(puVar1 + 0x11a) == '\0') {
                        iVar5 = iVar5 * 2;
                    }
                    *(puVar1 + 0x20) = iVar5;
                    goto code_r0x00011692;
                }
                iVar6 = -0x7fffffffffffffee;
            }
            else {
                fcn.0001137c(puVar1 + -1,8,0x16668);
                iVar6 = -0x7fffffffffffffeb;
            }
            fcn.000118e8(puVar1 + -1,iVar6);
        }
code_r0x00011692:
        puVar4 = *puVar3;
        puVar1 = puVar3;
    } while( true );
}


/* fcn.00012820 @ 0x12820 */

ulong fcn.00012820(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

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
    return 0x8000000000000002;
}


/* fcn.000127dc @ 0x127dc */

bool fcn.000127dc(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    char *pcVar1;
    char cVar2;
    char cVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    while( true ) {
        cVar3 = *pcVar1;
        if ((cVar3 == '\0') || (cVar2 = *arg2, cVar2 == '\0')) {
            return *pcVar1 == *arg2;
        }
        if (cVar3 + 0xbfU < 0x1a) {
            cVar3 = cVar3 + ' ';
        }
        if (cVar2 + 0xbfU < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if (cVar3 != cVar2) break;
        pcVar1 = pcVar1 + 1;
        arg2 = arg2 + 1;
    }
    return false;
}


/* fcn.0001297c @ 0x1297c */

uint64_t fcn.0001297c(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    uint8_t *puVar12;
    
    puVar8 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    uVar9 = 0;
    if (*puVar8 == 0x2c) {
        *(arg2 + 0xc) = 0;
    }
    else {
        *(arg2 + 0xc) = 0;
        puVar5 = puVar8;
        uVar4 = uVar10;
        uVar7 = uVar10;
        do {
            uVar11 = *puVar5;
            if (uVar11 < 0x30) {
                return 0x8000000000000002;
            }
            if (0x39 < uVar11) {
                return 0x8000000000000002;
            }
            uVar3 = uVar10;
            puVar12 = puVar5;
            uVar6 = uVar11;
            do {
                uVar2 = uVar3;
                if (0x39 < uVar6) break;
                puVar12 = puVar12 + 1;
                uVar1 = uVar6;
                uVar6 = *puVar12;
                uVar2 = (uVar1 + uVar2 * 10) - 0x30;
                uVar3 = uVar2;
            } while (0x2f < uVar6);
            if (0xff < uVar2) {
                return 0x8000000000000002;
            }
            uVar2 = uVar4 << 8 | uVar2;
            uVar4 = uVar2;
            do {
                if (0x39 < uVar11) break;
                puVar5 = puVar5 + 1;
                uVar11 = *puVar5;
            } while (0x2f < uVar11);
            if ((uVar7 < 3) && (*puVar5 != 0x2e)) {
                return 0x8000000000000002;
            }
            puVar5 = puVar5 + 1;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        *(arg2 + 0xc) = uVar2;
        for (; *puVar8 != 0; puVar8 = puVar8 + 1) {
            if (*puVar8 == 0x2c) goto code_r0x00012a4d;
        }
    }
    if (*puVar8 == 0x2c) {
code_r0x00012a4d:
        puVar8 = puVar8 + 1;
        uVar11 = *puVar8;
        if (uVar11 == 0x2c) {
            *(arg2 + 0x10) = 0;
        }
        else {
            uVar4 = uVar10;
            puVar5 = puVar8;
            if (0x2f < uVar11) {
                do {
                    if (0x39 < uVar11) break;
                    puVar5 = puVar5 + 1;
                    uVar4 = uVar11 + (uVar4 * 5 + -0x18) * 2;
                    uVar11 = *puVar5;
                } while (0x2f < uVar11);
                if (0xffff < uVar4) {
                    return 0x8000000000000002;
                }
            }
            *(arg2 + 0x10) = uVar4;
            for (; (0x2f < *puVar8 && (*puVar8 < 0x3a)); puVar8 = puVar8 + 1) {
            }
        }
        if (*puVar8 == 0x2c) {
            puVar8 = puVar8 + 1;
            uVar11 = *puVar8;
            puVar5 = puVar8;
            if (0x2f < uVar11) {
                do {
                    uVar9 = uVar10;
                    if (0x39 < uVar11) break;
                    puVar5 = puVar5 + 1;
                    uVar9 = uVar11 + (uVar9 * 5 + -0x18) * 2;
                    uVar10 = uVar9;
                    uVar11 = *puVar5;
                } while (0x2f < uVar11);
                if (1 < uVar9) {
                    return 0x8000000000000002;
                }
            }
            *(arg2 + 0x12) = uVar9 == 1;
            for (; (0x2f < *puVar8 && (*puVar8 < 0x3a)); puVar8 = puVar8 + 1) {
            }
            return -(*puVar8 != 0) & 0x8000000000000002;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001100c @ 0x1100c */

void fcn.0001100c(uint32_t arg1,int64_t arg2)

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
            (**(*0x16d70 + 0x48))();
        } while (*piVar2 != piVar2);
    }
    return;
}


/* fcn.00011068 @ 0x11068 */

ulong fcn.00011068(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                        (**(*0x16d70 + 0x48))(piVar5);
                    }
                }
                else {
                    uVar1 = piVar5[3];
                    if (uVar1 == uVar6) {
                        piVar5[3] = uVar1 - 1;
                    }
                    else {
                        piVar4 = fcn.00014c1c(0x30);
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


/* fcn.00012d74 @ 0x12d74 */

int64_t fcn.00012d74(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ushort *puVar2;
    int64_t in_R8;
    
    iVar1 = fcn.00015320(4);
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        puVar2 = fcn.000157c4(iVar1,4,in_R8);
        *puVar2 = 0x400;
        puVar2[1] = arg2 << 8 | arg2 >> 8;
        iVar1 = fcn.00011424(arg1,iVar1);
        if (-1 < iVar1) {
            *(arg1 + 0xe0) = *(arg1 + 0xd8);
        }
    }
    return iVar1;
}


/* fcn.00012df4 @ 0x12df4 */

int64_t fcn.00012df4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    int64_t iStackX_8;
    
    uVar5 = arg3 - 4;
    iVar2 = *(arg1 + 0x98);
    uVar4 = *(arg2 + 2) << 8 | *(arg2 + 2) >> 8;
    bVar6 = uVar5 < *(arg1 + 0xba);
    iVar3 = arg3;
    if (bVar6) {
        *(arg1 + 0xbc) = uVar4;
        fcn.0001100c(arg1 + 0xc0,uVar4);
    }
    iVar3 = fcn.00011068(arg1 + 0xc0,uVar4,CONCAT71(iVar3 >> 8,bVar6),&iStackX_8);
    if (iVar3 != -0x7ffffffffffffff2) {
        if (iVar3 < 0) {
            return iVar3;
        }
        if ((*(iVar2 + 0x50) != NULL) &&
           (iVar3 = (**(iVar2 + 0x50))(arg1 + 0x18,iVar2,arg3 & 0xffff,arg2), iVar3 < 0)) {
            fcn.0001137c(arg1,4,0x16768);
            return -0x7fffffffffffffeb;
        }
        if (*(iVar2 + 0x40) != 0) {
            iVar3 = (iStackX_8 + -1) * *(arg1 + 0xba);
            uVar1 = uVar5 + iVar3;
            if (*(iVar2 + 0x38) < uVar1) {
                if (*(arg1 + 0xbc) != 0) {
                    *(iVar2 + 0x38) = uVar1;
                    fcn.0001137c(arg1,3,0x16780);
                    return -0x7ffffffffffffffb;
                }
            }
            else {
                iVar3 = *(iVar2 + 0x40) + iVar3;
                if ((uVar5 != 0) && (iVar3 != arg2 + 4)) {
                    section..text(iVar3,arg2 + 4,uVar5);
                }
                if ((*(arg1 + 0xbc) == uVar4) && (bVar6)) {
                    *(iVar2 + 0x38) = uVar1;
                }
            }
        }
    }
    return 0;
}


/* fcn.00012d0c @ 0x12d0c */

int64_t fcn.00012d0c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t auStackX_20 [2];
    int64_t aiStack_18 [2];
    
    *(arg4 + 0x14) = 0;
    iVar1 = fcn.000128c4(arg1,arg2,auStackX_20,aiStack_18);
    if ((-1 < iVar1) && (auStackX_20[0] != 0)) {
        iVar1 = fcn.00012b24(aiStack_18[0],auStackX_20[0],0,arg3 & 0xffff);
        (**(*0x16d70 + 0x48))(aiStack_18[0]);
    }
    return iVar1;
}


/* fcn.00015870 @ 0x15870 */

uint32_t fcn.00015870(int64_t arg1,ulong noname_1,uint32_t arg2,int64_t arg3)

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


/* fcn.00013200 @ 0x13200 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00013200(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg_40h)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint32_t arg3_00;
    uchar *in_stack_00000028;
    uint16_t uStack_38;
    uint16_t uStack_36;
    uint8_t uStack_34;
    int iStack_2c;
    int64_t var_20h;
    int32_t var_14h;
    int16_t var_10h;
    int8_t var_eh;
    int32_t var_ch;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    *in_stack_00000028 = 0;
    piVar1 = *(iVar3 + 0xc0);
    if (piVar1 == iVar3 + 0xc0) {
        iVar4 = -1;
    }
    else {
        iVar4 = piVar1[2];
    }
    if ((*(iVar3 + 0x122) != '\0') && (iVar4 != 1)) {
        return 0;
    }
    fcn.000102c0(&uStack_38,0x18);
    iVar2 = fcn.00012d0c(arg2,arg3 & 0xffffffff,*(iVar3 + 0xb8),&uStack_38);
    if (((((iVar2 < 0) || ((var_20h._4_4_ & ~*(iVar3 + 0xb4)) != 0)) ||
         (((var_20h._4_4_ & 1) != 0 && (*(iVar3 + 0xa0) < uStack_38)))) ||
        ((((var_20h._4_4_ & 0x10) != 0 && (*(iVar3 + 0xa2) < uStack_36)) ||
         (((var_20h._4_4_ & 2) != 0 && (uStack_34 != *(iVar3 + 0xa4))))))) ||
       ((((var_20h._4_4_ & 8) != 0 && (*(iVar3 + 0x11c) != 0)) &&
        (((iStack_2c != 0 && (iStack_2c != *(iVar3 + 0x11c))) || ((var_20h != 0 && (var_20h != *(iVar3 + 0x120)))))))))
    {
        if (iVar2 == -0x7ffffffffffffff7) {
            return -0x7fffffffffffffe9;
        }
        arg3_00 = 0x167a8;
code_r0x000134c1:
        fcn.0001137c(iVar3,4,arg3_00);
        return -0x7fffffffffffffe9;
    }
    if ((var_20h._4_4_ & 8) == 0) {
        *(iVar3 + 0x122) = 1;
        if (uStack_38 != 0) {
            *(iVar3 + 0xba) = uStack_38;
        }
        if (uStack_36 != 0) {
            *(iVar3 + 0xd0) = uStack_36;
        }
    }
    else {
        *(iVar3 + 0x122) = var_20h._2_1_;
        if (*(iVar3 + 0x11c) != 0) goto code_r0x0001349a;
        if ((iStack_2c == 0) || (var_20h == 0)) {
            arg3_00 = 0x167c8;
            goto code_r0x000134c1;
        }
        *(iVar3 + 0x11c) = iStack_2c;
        *(iVar3 + 0x120) = var_20h;
        if (*(iVar3 + 0x128) == 0) {
            iVar2 = fcn.0001603c(*(*(iVar3 + 0x68) + 0x48),*(*(iVar3 + 0x68) + 0x50),0x13074);
            *(iVar3 + 0x128) = iVar2;
            if ((iVar2 != 0) &&
               (iVar2 = (**(*0x16d70 + 0x118))
                                  (*(iVar2 + 0x38),0x16520,&stack0x00000028,*(*(iVar3 + 0x68) + 0x50),
                                   *(iVar3 + 0x70),8), iVar2 < 0)) {
                fcn.00016220(*(iVar3 + 0x128));
                *(iVar3 + 0x128) = 0;
                return -0x7ffffffffffffff9;
            }
        }
        if (*(iVar3 + 0x128) == 0) {
            return -0x7ffffffffffffff9;
        }
        iVar2 = fcn.000163f8(*(iVar3 + 0x128));
        if (iVar2 < 0) {
            fcn.0001137c(iVar3,2,0x167e8);
            return iVar2;
        }
        if (uStack_38 != 0) {
            *(iVar3 + 0xba) = uStack_38;
        }
        if (uStack_36 != 0) {
            *(iVar3 + 0xd0) = uStack_36;
        }
    }
    if (uStack_34 != 0) {
        *(iVar3 + 0x118) = uStack_34;
    }
code_r0x0001349a:
    iVar3 = fcn.00012d74(iVar3,iVar4 - 1);
    return iVar3;
}


/* fcn.00012f68 @ 0x12f68 */

int64_t fcn.00012f68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    int64_t iVar7;
    uchar *in_stack_00000028;
    
    piVar1 = arg1 + 0xc0;
    uVar6 = *(arg2 + 2);
    piVar2 = *piVar1;
    iVar7 = -1;
    *in_stack_00000028 = 0;
    if (piVar2 == piVar1) {
        uVar5 = 0xffffffffffffffff;
    }
    else {
        uVar5 = piVar2[2];
    }
    if ((*(arg1 + 0x122) == '\0') || (uVar5 == (uVar6 << 8 | uVar6 >> 8))) {
        iVar4 = fcn.00012df4(arg1,arg2,arg3);
        if (-1 < iVar4) {
            *(arg1 + 0xd8) = *(arg1 + 0xd8) + 1;
            iVar3 = *(arg1 + 0xd8);
            if (*(arg1 + 0x122) == '\0') {
                *(arg1 + 0x108) = *(arg1 + 0x118) * 2;
            }
            if (*piVar1 != piVar1) {
                iVar7 = (*piVar1)[2];
            }
            if ((*(arg1 + 0x122) != '\0') || (iVar7 < 0)) {
                if (iVar7 < 0) {
                    uVar6 = *(arg1 + 0xbc);
                    *in_stack_00000028 = 1;
                }
                else {
                    uVar6 = iVar7 - 1;
                }
                if ((*(arg1 + 0xd0) == iVar3 - *(arg1 + 0xe0)) || (iVar7 < 0)) {
                    iVar4 = fcn.00012d74(arg1,uVar6);
                }
            }
        }
    }
    else {
        iVar4 = fcn.00012d74(arg1,uVar5 - 1);
    }
    return iVar4;
}


/* fcn.0001373c @ 0x1373c */

ulong fcn.0001373c(int64_t arg1,int64_t arg2)

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
    arg1_00 = fcn.00015320(*(arg1 + 0xba) + 4);
    if (arg1_00 == 0) {
        return 0x8000000000000009;
    }
    puVar1 = fcn.000157c4(arg1_00,4,in_R8);
    *puVar1 = 0x300;
    puVar1[1] = uVar4 << 8 | uVar4 >> 8;
    iVar2 = *(arg1 + 0x98);
    auStackX_8[0] = *(arg1 + 0xba);
    if (*(iVar2 + 0x40) == 0) {
        apuStackX_18[0] = NULL;
        arg3 = auStackX_8;
        iVar2 = (**(iVar2 + 0x60))(arg1 + 0x18,iVar2,arg3,apuStackX_18);
        if ((iVar2 < 0) || (*(arg1 + 0xba) < auStackX_8[0])) {
            if (apuStackX_18[0] != NULL) {
                (**(*0x16d70 + 0x48))();
            }
            fcn.00015424(arg1_00);
            fcn.0001137c(arg1,8,0x16820);
            return 0x8000000000000015;
        }
        if (auStackX_8[0] < *(arg1 + 0xba)) {
            *(arg1 + 0xbc) = uVar4;
            fcn.0001100c(arg1 + 0xc0,arg2 & 0xffff);
        }
        if (auStackX_8[0] != 0) {
            fcn.000157c4(arg1_00,auStackX_8[0],arg3);
            if ((auStackX_8[0] != 0) && (puVar1 + 2 != apuStackX_18[0])) {
                section..text(puVar1 + 2,apuStackX_18[0],auStackX_8[0]);
            }
            (**(*0x16d70 + 0x48))(apuStackX_18[0]);
        }
    }
    else {
        iVar6 = (uVar4 - 1) * auStackX_8[0];
        if (*(iVar2 + 0x38) < auStackX_8[0] + iVar6) {
            auStackX_8[0] = *(iVar2 + 0x38) - iVar6;
            *(arg1 + 0xbc) = uVar4;
            fcn.0001100c(arg1 + 0xc0,arg2 & 0xffff);
        }
        if (auStackX_8[0] != 0) {
            fcn.000157c4(arg1_00,auStackX_8[0],in_R8);
            puVar5 = *(iVar2 + 0x40) + iVar6;
            if ((auStackX_8[0] != 0) && (puVar1 + 2 != puVar5)) {
                section..text(puVar1 + 2,puVar5,auStackX_8[0]);
            }
        }
    }
    uVar3 = fcn.00011424(arg1,arg1_00);
    return uVar3;
}


/* fcn.0001392c @ 0x1392c */

ulong fcn.0001392c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uchar auStackX_8 [8];
    
    piVar1 = arg1 + 0xc0;
    uVar5 = *(arg2 + 2) << 8 | *(arg2 + 2) >> 8;
    piVar2 = *piVar1;
    *arg3 = 0;
    if (piVar2 == piVar1) {
        uVar4 = 0xffffffffffffffff;
    }
    else {
        uVar4 = piVar2[2];
    }
    if (uVar4 == uVar5) {
        fcn.00011068(piVar1,uVar5,0,auStackX_8);
        piVar2 = *piVar1;
        if ((piVar2 != piVar1) && (-1 < piVar2[2])) {
            uVar3 = fcn.0001373c(arg1,*(piVar2 + 2));
            return uVar3;
        }
        if (*(arg1 + 0xbc) != uVar5) {
            fcn.0001137c(arg1,8,0x16840);
            return 0x8000000000000017;
        }
        *arg3 = 1;
    }
    return 0;
}


/* fcn.000139ec @ 0x139ec */

ulong fcn.000139ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t noname_2;
    ulong uVar2;
    uint auStack_38 [4];
    uint16_t auStack_28 [2];
    uint8_t uStack_24;
    uint32_t uStack_14;
    
    *arg4 = 0;
    piVar1 = *(arg1 + 0xc0);
    if ((piVar1 == arg1 + 0xc0) || (piVar1[2] != 0)) {
        uVar2 = 0;
    }
    else {
        fcn.000102c0(auStack_28,0x18);
        noname_2 = fcn.00012d0c(arg2,arg3 & 0xffffffff,*(arg1 + 0xb8),auStack_28);
        if ((((noname_2 < 0) || ((uStack_14 & ~*(arg1 + 0xb4)) != 0)) ||
            (((uStack_14 & 1) != 0 && (*(arg1 + 0xa0) < auStack_28[0])))) ||
           (((uStack_14 & 2) != 0 && (uStack_24 != *(arg1 + 0xa4))))) {
            if (noname_2 != -0x7ffffffffffffff7) {
                fcn.0001137c(arg1,4,0x167a8);
            }
            uVar2 = 0x8000000000000017;
        }
        else {
            if (auStack_28[0] != 0) {
                *(arg1 + 0xba) = auStack_28[0];
            }
            if (uStack_24 != 0) {
                *(arg1 + 0x118) = uStack_24;
            }
            auStack_38[0] = 0x400;
            uVar2 = fcn.0001392c(arg1,auStack_38,noname_2,arg4);
        }
    }
    return uVar2;
}


/* fcn.00013d34 @ 0x13d34 */

uint64_t fcn.00013d34(uint32_t arg1,int64_t arg2)

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


/* fcn.00013d08 @ 0x13d08 */

uint64_t fcn.00013d08(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00014bc8 @ 0x14bc8 */

void fcn.00014bc8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013e58(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013e24 @ 0x13e24 */

uchar * fcn.00013e24(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00014c88 @ 0x14c88 */

ulong fcn.00014c88(int64_t arg1,int64_t arg2)

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
code_r0x00014ce8:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00014ce8;
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


/* fcn.00014c48 @ 0x14c48 */

void fcn.00014c48(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014bec();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001527c @ 0x1527c */

uint * fcn.0001527c(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.00014c1c((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x0001530e;
        puVar2 = fcn.00014c1c(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x0001530e;
        }
        (**(*0x16d70 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x0001530e:
    return puVar1;
}


/* fcn.000154ac @ 0x154ac */

int64_t fcn.000154ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        iVar8 = fcn.00014bec(arg1,uVar16);
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
                    goto code_r0x000155a8;
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
code_r0x000155a8:
        }
    }
    iVar19 = fcn.0001527c(uVar7,uVar7);
    if (iVar19 == 0) {
        if (iVar8 != 0) {
            (**(*0x16d70 + 0x48))(iVar8);
        }
        return 0;
    }
    iVar5 = *(iVar19 + 0x78);
    *(iVar5 + 0x10) = 0x15aa0;
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


/* fcn.00015108 @ 0x15108 */

//WARNING: Variable defined which should be unmapped: var_20h

uint64_t * fcn.00015108(uint32_t arg1)

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


/* fcn.000159e0 @ 0x159e0 */

void fcn.000159e0(int64_t arg1)

{
    char cVar1;
    
    cVar1 = *(*(arg1 + 8) + 0x20);
    if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
        (**(*0x16d70 + 0x70))(*(arg1 + 0x28));
    }
    //WARNING: Could not recover jumptable at 0x00015a17. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16d70 + 0x48))(arg1);
    return;
}


/* fcn.00015750 @ 0x15750 */

ulong fcn.00015750(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00015230 @ 0x15230 */

void fcn.00015230(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x16d70 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.00015dfc @ 0x15dfc */

uint * fcn.00015dfc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint16_t uVar2;
    uint *puVar3;
    uint *puVar4;
    int64_t iVar5;
    uint16_t uVar6;
    uint auStackX_8 [2];
    int64_t iStackX_20;
    ulong in_stack_00000030;
    
    iStackX_20 = arg4;
    puVar3 = fcn.00014bec(arg1,((*(arg2 + 0x80) - 1) + 10) * 0x10);
    if (puVar3 == NULL) {
        return NULL;
    }
    *puVar3 = 0x54504455;
    puVar4 = puVar3 + 2;
    *puVar4 = puVar4;
    *(puVar3 + 4) = puVar4;
    *(puVar3 + 8) = 0x1141c;
    *(puVar3 + 0xc) = in_stack_00000030;
    *(puVar3 + 6) = arg1;
    *(puVar3 + 10) = arg2;
    auStackX_8[0] = *(arg2 + 0x80);
    cVar1 = *(arg1 + 0x20);
    *(puVar3 + 0x1a) = 0x8000000000000006;
    if (cVar1 == '\x04') {
        iVar5 = (**(*0x16d70 + 0x50))(0x200,0x10);
        if (-1 < iVar5) {
            *(puVar3 + 0x1c) = puVar3 + 0x1e;
            *(puVar3 + 0x1e) = 0;
            *(puVar3 + 0x20) = 0;
            puVar3[0x22] = *(arg2 + 0x84);
            fcn.00015750(arg2,puVar3 + 0x24,auStackX_8);
            puVar3[0x23] = auStackX_8[0];
            if (arg3 == 0) {
                return puVar3;
            }
            uVar6 = *arg3;
            uVar2 = *arg3 >> 0x10;
            if (puVar3 + 0xf != &iStackX_20) {
                iStackX_20._0_4_ = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar2 << 8 | uVar2 >> 8);
                section..text(puVar3 + 0xf,&iStackX_20,4);
            }
            uVar2 = *(arg3 + 0x14) >> 0x10;
            uVar6 = *(arg3 + 0x14);
            iStackX_20 = CONCAT44(iStackX_20._4_4_,CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar2 << 8 | uVar2 >> 8));
            if (puVar3 + 0x42 != &iStackX_20) {
                section..text(puVar3 + 0x42,&iStackX_20,4);
            }
            *(puVar3 + 0x10) = *(arg3 + 0x10);
            *(puVar3 + 0x46) = *(arg3 + 0x24);
code_r0x00016024:
            *(puVar3 + 0x1e) = puVar3 + 0xf;
            return puVar3;
        }
    }
    else {
        iVar5 = (**(*0x16d70 + 0x50))(0x200,0x10,0x15a84,puVar3,puVar3 + 0x18);
        if (-1 < iVar5) {
            *(puVar3 + 0x1c) = puVar3 + 0x1e;
            *(puVar3 + 0x1e) = 0;
            puVar3[0x20] = *(arg2 + 0x84);
            fcn.00015750(arg2,puVar3 + 0x22,auStackX_8);
            puVar3[0x21] = auStackX_8[0];
            if (arg3 == 0) {
                return puVar3;
            }
            if (puVar3 + 0xf != arg3) {
                section..text(puVar3 + 0xf,arg3,0x10);
            }
            if (puVar3 + 0x4e != arg3 + 0x14) {
                section..text(puVar3 + 0x4e,arg3 + 0x14,0x10);
            }
            *(puVar3 + 0x13) = *(arg3 + 0x10);
            *(puVar3 + 0x5e) = *(arg3 + 0x24);
            goto code_r0x00016024;
        }
    }
    (**(*0x16d70 + 0x48))(puVar3);
    return NULL;
}


/* fcn.00015d48 @ 0x15d48 */

uint * fcn.00015d48(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int64_t iVar2;
    
    puVar1 = fcn.00014bec(arg1,0x40);
    if (puVar1 != NULL) {
        puVar1[8] = 0;
        *puVar1 = 0x52504455;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 4) = arg2;
        *(puVar1 + 6) = arg3;
        *(puVar1 + 0xe) = 0;
        *(puVar1 + 0xc) = 0x8000000000000006;
        iVar2 = (**(*0x16d70 + 0x50))(0x200,0x10,0x15d2c,puVar1,puVar1 + 10);
        if (-1 < iVar2) {
            return puVar1;
        }
        (**(*0x16d70 + 0x48))(puVar1);
    }
    return NULL;
}


