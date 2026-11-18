// decompiled by r2ghidra: 1934_Dhcp4Dxe.pe32
// functions: 73

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    fcn.00010530(arg1,in_RDX);
    arg2 = 0x16720;
    (**(*0x17948 + 0x98))(arg1,0x16720,aiStackX_18);
    *(aiStackX_18[0] + 0x58) = 0x10364;
    fcn.00010600(arg1,arg2);
    return;
}


/* fcn.00010530 @ 0x10530 */

void fcn.00010530(ulong noname_0,int64_t arg1)

{
    *0x17948 = *(arg1 + 0x60);
    *0x17950 = *(arg1 + 0x58);
    *0x17940 = arg1;
    (**(*0x17948 + 0x140))(0x167d0,0,0x17958);
    (**(*0x17948 + 0x140))(0x167c0,0,0x17978);
    (**(*0x17948 + 0x140))(0x16780,0,0x17968);
    (**(*0x17948 + 0x140))(0x16860,0,0x17960);
    (**(*0x17948 + 0x140))(0x167a0,0,0x17970);
    //WARNING: Could not recover jumptable at 0x000105f7. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x17948 + 0x140))(0x16830,0,0x17988);
    return;
}


/* fcn.00010600 @ 0x10600 */

ulong fcn.00010600(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    iVar1 = (**(*0x17950 + 0x48))(L"NetworkStackVar",0x16850,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x16890 = arg1;
        *0x16898 = arg1;
        uVar2 = (**(*0x17948 + 0x148))(0x16898,0x16800,0x16870,0x16820,0x168c8,0x16730,0x168b0,0);
    }
    return uVar2;
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


/* fcn.00011744 @ 0x11744 */

ulong * fcn.00011744(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    
    *(arg1 + 0x58) = *(arg1 + 0x58) + 1;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 100) = 0;
    *(arg1 + 0x48) = 1;
    if (*(arg1 + 0x68) != 0) {
        (**(*0x17948 + 0x48))();
        *(arg1 + 0x68) = 0;
    }
    if (*(arg1 + 0x70) != 0) {
        (**(*0x17948 + 0x48))();
        *(arg1 + 0x70) = 0;
    }
    if (*(arg1 + 0x78) != 0) {
        (**(*0x17948 + 0x48))();
        *(arg1 + 0x78) = 0;
    }
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x90) = 0;
    if (*(arg1 + 0xa0) != 0) {
        fcn.00016408(*(arg1 + 0xa0));
        *(arg1 + 0xa0) = 0;
    }
    if (*(arg1 + 0xa8) != 0) {
        (**(*0x17948 + 0x48))();
        *(arg1 + 0xa8) = 0;
    }
    *(arg1 + 0x148) = 0;
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x158) = 0;
    *(arg1 + 0x160) = 0;
    if (*(arg1 + 0xf8) != 0) {
        (**(*0x17948 + 0x48))();
    }
    if (*(arg1 + 0x108) != 0) {
        (**(*0x17948 + 0x48))();
    }
    if (*(arg1 + 0x130) != 0) {
        uVar4 = 0;
        if (*(arg1 + 0x128) != 0) {
            do {
                if (*(*(arg1 + 0x130) + uVar4 * 8) != 0) {
                    (**(*0x17948 + 0x48))();
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
            } while (uVar2 < *(arg1 + 0x128));
        }
        (**(*0x17948 + 0x48))(*(arg1 + 0x130));
    }
    puVar3 = arg1 + 0xf0;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1 + 0xf0;
}


/* fcn.00016408 @ 0x16408 */

int64_t fcn.00016408(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    fcn.000163b0(arg1);
    iVar2 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x17948 + 0x120))(*(arg1 + 0x38),0x16810,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x16790;
    }
    else {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x17948 + 0x120))(*(arg1 + 0x38),0x167b0,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x167e0;
    }
    iVar2 = fcn.00014d30(*(arg1 + 0x28),*(arg1 + 0x30),iVar2,*(arg1 + 0x38));
    if (-1 < iVar2) {
        piVar1 = arg1 + 8;
        if (*piVar1 != piVar1) {
            *(*piVar1 + 8) = *(arg1 + 0x10);
            **(arg1 + 0x10) = *piVar1;
        }
        (**(*0x17948 + 0x48))(arg1);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001469c @ 0x1469c */

void fcn.0001469c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001466c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.0001466c @ 0x1466c */

ulong fcn.0001466c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x17948 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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
    
    //[00] -r-x section size 25760 named .text
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


/* fcn.00016224 @ 0x16224 */

uint * fcn.00016224(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint *puVar3;
    uint *puVar4;
    int64_t iVar5;
    ulong in_stack_00000028;
    ulong *apuStack_28 [2];
    
    puVar3 = fcn.0001466c(arg1,0x328);
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
        iVar5 = *0x17948;
        *(puVar3 + 0xb8) = 0;
        *piVar1 = 0;
        iVar5 = (**(iVar5 + 0x118))(arg1,0x16790,apuStack_28,arg2,arg1,2);
        if ((-1 < iVar5) && (iVar5 = (**apuStack_28[0])(apuStack_28[0],piVar1), -1 < iVar5)) {
            iVar5 = (**(*0x17948 + 0x118))(*piVar1,0x16810,puVar3 + 0xba,arg2,arg1,0x10);
            if (-1 < iVar5) {
                iVar5 = (*arg3)(puVar3,in_stack_00000028);
                if ((-1 < iVar5) &&
                   (puVar2 = *(puVar3 + 0xba), iVar5 = (**puVar2)(puVar2,0,0,0,puVar3 + 0x10), -1 < iVar5)) {
                    return puVar3;
                }
                (**(*0x17948 + 0x120))(*piVar1,0x16810,arg2,arg1);
            }
            fcn.00014d30(arg1,arg2,0x16790,*piVar1);
        }
        (**(*0x17948 + 0x48))(puVar3);
    }
    return NULL;
}


/* fcn.0001077c @ 0x1077c */

ulong fcn.0001077c(int64_t arg1)

{
    fcn.00011744(arg1);
    if (*(arg1 + 0x98) != 0) {
        fcn.00016408(*(arg1 + 0x98));
        *(arg1 + 0x98) = 0;
    }
    if (*(arg1 + 0x140) != 0) {
        (**(*0x17948 + 0x58))(*(arg1 + 0x140),0,0);
        (**(*0x17948 + 0x70))(*(arg1 + 0x140));
        *(arg1 + 0x140) = 0;
    }
    return 0;
}


/* fcn.000107e0 @ 0x107e0 */

int64_t fcn.000107e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *arg1_00;
    int64_t iVar1;
    uint *puVar2;
    int aiStackX_18 [4];
    uint16_t uStack_28;
    ushort uStack_25;
    uchar uStack_23;
    uchar uStack_22;
    uint32_t uStack_20;
    
    *arg3 = 0;
    arg1_00 = fcn.0001469c(0x168);
    if (arg1_00 == NULL) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        *(arg1_00 + 6) = 0;
        *arg1_00 = 0x50434844;
        *(arg1_00 + 8) = arg1;
        *(arg1_00 + 10) = arg2;
        puVar2 = arg1_00 + 0xc;
        *puVar2 = puVar2;
        *(arg1_00 + 0xe) = puVar2;
        iVar1 = *0x17950;
        *(arg1_00 + 0x12) = 0;
        (**(iVar1 + 0x18))(&uStack_28);
        (**(*0x17948 + 0xf0))(aiStackX_18);
        arg1_00[0x16] =
             ((aiStackX_18[0] + (CONCAT31(CONCAT21(uStack_25,uStack_23),uStack_22) ^ uStack_28 << 7 ^ uStack_20)) *
              0x41c64e6d + 0x3039) % 0xffffffff;
        if (arg1_00 + 2 != 0x168a0) {
            section..text(arg1_00 + 2,0x168a0,0x10);
        }
        iVar1 = (**(*0x17948 + 0x50))(0x80000200,8,0x125c0,arg1_00,arg1_00 + 0x50);
        if (-1 < iVar1) {
            iVar1 = fcn.00016224(arg1,arg2,0x106f4);
            *(arg1_00 + 0x26) = iVar1;
            if (iVar1 != 0) {
                *(arg1_00 + 0xd1) = *(iVar1 + 0x44);
                *(arg1_00 + 0x34) = *(iVar1 + 0x2c8);
                if (arg1_00 + 0x2c != iVar1 + 0x268) {
                    section..text(arg1_00 + 0x2c,iVar1 + 0x268,0x20);
                }
                *arg3 = arg1_00;
                return 0;
            }
            iVar1 = -0x7ffffffffffffff7;
        }
        fcn.0001077c(arg1_00);
        (**(*0x17948 + 0x48))(arg1_00);
    }
    return iVar1;
}


/* fcn.00016640 @ 0x16640 */

int64_t fcn.00016640(uint32_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    int64_t in_RDX;
    int64_t in_R8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_01 + 0x2e0) == 0) {
        arg1_00 = fcn.00015ed0(arg1_01,in_RDX,in_R8);
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
                fcn.00015b50(arg1_00);
            }
        }
    }
    else {
        iVar1 = -0x7fffffffffffffec;
    }
    return iVar1;
}


/* fcn.00014c6c @ 0x14c6c */

//WARNING: Removing unreachable block (ram,0x00014c99)

int64_t fcn.00014c6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    iVar1 = 0;
code_r0x00014cb4:
    do {
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            if ((puVar4 == NULL) || (arg2 == 0)) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = (**(arg2 + 8))(arg2,puVar4[2]);
            }
            if (iVar3 < 0) {
                return iVar3;
            }
            for (puVar2 = *arg1; puVar2 != arg1; puVar2 = *puVar2) {
                if (puVar2 == puVar4) goto code_r0x00014cf8;
            }
            if (puVar2 != puVar4) goto code_r0x00014cb4;
code_r0x00014cf8:
        }
        iVar3 = 0;
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            iVar3 = iVar3 + 1;
        }
        bVar5 = iVar3 == iVar1;
        iVar1 = iVar3;
        if (bVar5) {
            if (arg3 != 0) {
                *arg3 = iVar3;
            }
            return 0;
        }
    } while( true );
}


/* fcn.00014a88 @ 0x14a88 */

ulong fcn.00014a88(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x17930;
    if (*0x17930 != NULL) {
        iVar2 = 0;
        if (**0x17930 != 0) {
            piVar3 = *0x17930;
            do {
                (**(*0x17948 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x17948 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x17948 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.00010c54 @ 0x10c54 */

void fcn.00010c54(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    *arg2 = 0x70636864;
    if (arg2 + 8 != 0x16910) {
        section..text(arg2 + 8,0x16910,0x48);
    }
    iVar1 = arg2 + 0x50;
    *iVar1 = iVar1;
    *(arg2 + 0x58) = iVar1;
    iVar1 = arg2 + 0xb0;
    *(arg2 + 0x60) = 0;
    *(arg2 + 0x68) = arg1;
    *(arg2 + 0x70) = 0;
    *(arg2 + 0x78) = 0;
    *(arg2 + 0x80) = 0;
    *(arg2 + 0x88) = 0;
    *(arg2 + 0x90) = 0;
    *(arg2 + 0x9c) = 0;
    *(arg2 + 0xa0) = 0x7571626e;
    *(arg2 + 0xa8) = 1;
    *iVar1 = iVar1;
    *(arg2 + 0xb8) = iVar1;
    iVar1 = arg2 + 0xc0;
    *iVar1 = iVar1;
    *(arg2 + 200) = iVar1;
    *(arg2 + 0xd0) = 0;
    return;
}


/* fcn.00012c04 @ 0x12c04 */

void fcn.00012c04(int64_t arg1)

{
    *(arg1 + 0x18) = 0;
    *(arg1 + 0xe8) = 0;
    if (*(arg1 + 0xf8) != 0) {
        (**(*0x17948 + 0x48))();
        *(arg1 + 0xf0) = 0;
        *(arg1 + 0xf8) = 0;
    }
    if (*(arg1 + 0x108) != 0) {
        (**(*0x17948 + 0x48))();
        *(arg1 + 0x100) = 0;
        *(arg1 + 0x108) = 0;
    }
    *(arg1 + 0x118) = 0;
    *(arg1 + 0x120) = 0;
    return;
}


/* fcn.00016504 @ 0x16504 */

void fcn.00016504(int64_t arg1)

{
    int64_t iVar1;
    
    fcn.000163b0(arg1);
    iVar1 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if (iVar1 != 0) {
            (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar1 + 0x28);
        }
    }
    else if (iVar1 != 0) {
        (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar1 + 0x28);
    }
    //WARNING: Could not recover jumptable at 0x0001655e. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*(arg1 + 0x2e8) + 8))(*(arg1 + 0x2e8),0);
    return;
}


/* fcn.00014778 @ 0x14778 */

ulong fcn.00014778(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    char *arg1_00;
    int64_t iVar5;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.00014708(arg2,arg1);
                if (iVar5 == 0) {
code_r0x0001484b:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
code_r0x00014840:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar5 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar5 = iVar5 + 1;
                                cVar1 = arg1_00[iVar5];
                            }
                            iVar3 = fcn.00014638(arg1_00,arg1,iVar5);
                            if (iVar3 == 0) {
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            arg1_00 = arg1_00 + iVar5;
                            if (*arg1_00 != '\0') {
                                cVar1 = *arg1_00;
                                pcVar4 = arg1_00;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar4 = pcVar4 + 1;
                                    cVar1 = *pcVar4;
                                } while (cVar1 != '\0');
                            }
                            goto code_r0x00014840;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x0001484b;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.0001487c @ 0x1487c */

ulong fcn.0001487c(uint32_t arg1,uint32_t arg2,ulong noname_2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint32_t *arg2_00;
    uint32_t *arg1_00;
    uint in_register_00000014;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    char *pcVar10;
    char in_stack_00000028;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = 0;
    if ((arg2_00 == NULL) || (arg3 == 0)) {
code_r0x00014a6b:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg1_00 != NULL) {
            if (*arg3 == 0) goto code_r0x00014a6b;
            if (in_stack_00000028 == '\0') {
                iVar8 = fcn.00014708(arg1_00,arg2_00);
                if (iVar8 == 0) {
code_r0x00014907:
                    iVar8 = iVar7;
                    puVar9 = *0x17930;
                    if (*0x17930 != NULL) {
                        for (; pcVar10 = *puVar9, pcVar10 != NULL; puVar9 = puVar9 + 4) {
code_r0x00014979:
                            cVar3 = *pcVar10;
                            if (cVar3 != '\0') {
                                iVar6 = iVar7;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    iVar6 = iVar6 + 1;
                                    cVar3 = pcVar10[iVar6];
                                }
                                arg1_00 = arg2_00;
                                iVar5 = fcn.00014638(arg2_00,pcVar10,iVar6);
                                if (iVar5 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar10 = pcVar10 + iVar6;
                                cVar3 = *pcVar10;
                                if (cVar3 == '\0') goto code_r0x00014980;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar10 = pcVar10 + 1;
                                    cVar3 = *pcVar10;
                                } while (cVar3 != '\0');
                                goto code_r0x00014979;
                            }
code_r0x00014980:
                            iVar8 = iVar8 + 1;
                        }
                    }
                    puVar9 = fcn.0001466c();
                    if (puVar9 != NULL) {
                        if (((*0x17930 != NULL) && (iVar8 << 4 != 0)) && (puVar9 != *0x17930)) {
                            arg1_00 = puVar9;
                            section..text(puVar9,*0x17930,iVar8 << 4);
                        }
                        cVar3 = *arg2_00;
                        iVar6 = iVar7;
                        while (cVar3 != '\0') {
                            iVar6 = iVar6 + 1;
                            cVar3 = *(iVar6 + arg2_00);
                        }
                        iVar6 = fcn.000146c8(arg1_00,iVar6 + 1,arg2_00);
                        *(puVar9 + iVar8 * 4) = iVar6;
                        if (iVar6 != 0) {
                            iVar1 = *arg3;
                            piVar2 = arg3;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                iVar7 = iVar7 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.000146c8(arg1_00,iVar7 * 2 + 2,arg3);
                            *(puVar9 + iVar8 * 4 + 2) = iVar7;
                            if (iVar7 != 0) {
                                (puVar9 + iVar8 * 4 + 4)[0] = 0;
                                (puVar9 + iVar8 * 4 + 4)[1] = 0;
                                (puVar9 + iVar8 * 4 + 6)[0] = 0;
                                (puVar9 + iVar8 * 4 + 6)[1] = 0;
                                if (*0x17930 != NULL) {
                                    (**(*0x17948 + 0x48))();
                                }
                                *0x17930 = puVar9;
                                return 0;
                            }
                            (**(*0x17948 + 0x48))(*(puVar9 + iVar8 * 4));
                        }
                        (**(*0x17948 + 0x48))(puVar9);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg1_00 != '\0') {
                puVar9 = arg1_00;
                do {
                    arg1_00 = *arg2_00 & 0xffffff;
                    if ((*arg2_00 & 0xffffff) == (*puVar9 & 0xffffff)) goto code_r0x00014907;
                    puVar9 = puVar9 + 3;
                } while (*puVar9 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.0001108c @ 0x1108c */

int64_t fcn.0001108c(int64_t arg1)

{
    int64_t iVar1;
    ulong in_R8;
    int aiStack_98 [36];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**arg1)(arg1,aiStack_98);
        if (-1 < iVar1) {
            if (*0x17930 != 0) {
                fcn.00014a88();
                *0x17930 = 0;
            }
            if (aiStack_98[0] < 9) {
                iVar1 = fcn.0001487c(0x17520,*0x168d8,in_R8,*(aiStack_98[0] * 8 + 0x17760));
                if (-1 < iVar1) {
                    iVar1 = fcn.0001487c(0x17524,*0x168c0,in_R8,*(aiStack_98[0] * 8 + 0x17760));
                }
            }
            else {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00011418 @ 0x11418 */

int64_t fcn.00011418(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_00000014;
    int64_t iVar4;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    if (arg3 != '\0') {
        if (iVar4 == 5) {
            uVar3 = arg2 + 4;
        }
        else if (iVar4 == 6) {
            uVar3 = arg2 + 4;
        }
        else {
            if (iVar4 != 4) goto code_r0x00011467;
            uVar3 = 8;
        }
        iVar2 = fcn.00011320(arg1,uVar3,0,0);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
code_r0x00011467:
    if (iVar4 == 2) {
        uVar1 = *(arg1 + 0xf0);
    }
    else {
        uVar1 = *(arg1 + 0x100);
    }
    uVar3 = uVar1;
    *(arg1 + 0x158) = uVar3;
    *(arg1 + 0x48) = iVar4;
    if (uVar3 == 0) {
        uVar3 = 4;
    }
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x148) = 0;
    *(arg1 + 0x14c) = 0;
    *(arg1 + 0x158) = uVar3;
    return 0;
}


/* fcn.0001201c @ 0x1201c */

//WARNING: Variable defined which should be unmapped: var_4h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.0001201c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4,int64_t arg_60h)

{
    uint uVar1;
    uchar *puVar2;
    char *arg4_00;
    uint64_t uVar3;
    int *arg3_00;
    uchar *arg1_00;
    int64_t iVar4;
    uint16_t uVar5;
    int64_t iVar6;
    char cVar7;
    uint16_t uVar8;
    int *piVar9;
    unkbyte7 Var11;
    int64_t iVar10;
    int iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t auStackX_8 [2];
    char acStackX_20 [8];
    ushort in_stack_00000028;
    unkbyte6 in_stack_0000002a;
    int64_t var_40h;
    int *piStack_78;
    int aiStack_70 [2];
    int *piStack_68;
    uint uStack_60;
    ushort uStack_50;
    uint uStack_4c;
    uint32_t var_40h_2;
    int64_t var_38h;
    int64_t var_30h;
    int32_t var_bp_28h;
    int16_t var_18h;
    int32_t var_14h;
    int16_t var_4h;
    
    acStackX_20[0] = arg4;
    uVar14 = 0;
    arg4_00 = CONCAT62(in_stack_0000002a,in_stack_00000028);
    iVar12 = *(arg1 + 0x138) + 0x179;
    if (arg4_00 != NULL) {
        cVar7 = *arg4_00;
        uVar3 = uVar14;
        while (cVar7 != '\0') {
            uVar3 = uVar3 + 1;
            cVar7 = arg4_00[uVar3];
        }
        iVar12 = iVar12 + uVar3;
    }
    arg3_00 = fcn.0001466c(arg1,iVar12);
    if (arg3_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    *arg3_00 = iVar12;
    arg3_00[1] = 0xf0;
    fcn.000102c0(arg3_00 + 2,0xec);
    *(arg3_00 + 2) = 1;
    *(arg3_00 + 9) = *(arg1 + 0xd0);
    *(arg3_00 + 10) = *(arg1 + 0xd1);
    uVar5 = *(arg1 + 0x58) >> 0x10;
    uVar8 = *(arg1 + 0x58);
    *(arg3_00 + 0x12) = 0x80;
    arg3_00[3] = CONCAT22(uVar8 << 8 | uVar8 >> 8,uVar5 << 8 | uVar5 >> 8);
    uVar5 = *(arg1 + 0x5c) >> 0x10;
    uVar8 = *(arg1 + 0x5c);
    piVar9 = arg1 + 0xb0;
    arg3_00[5] = CONCAT22(uVar8 << 8 | uVar8 >> 8,uVar5 << 8 | uVar5 >> 8);
    if ((*(arg1 + 0xd1) != 0) && (arg3_00 + 9 != piVar9)) {
        section..text(arg3_00 + 9,piVar9,*(arg1 + 0xd1));
    }
    if ((acStackX_20[0] == '\x04') || (acStackX_20[0] == '\a')) {
        *(arg3_00 + 4) = 0;
    }
    else {
        if ((acStackX_20[0] == '\x03') && (*(arg1 + 0x48) == 3)) {
            uVar5 = *(*(arg1 + 0xa8) + 0x10);
        }
        else {
            uVar5 = *(*(arg1 + 0xe8) + 0x9c);
            uVar5 = uVar5 << 8 | uVar5 >> 8;
        }
        *(arg3_00 + 4) = uVar5;
    }
    arg3_00[0x3d] = 0x63538263;
    iVar10 = CONCAT71(piVar9 >> 8,0x35);
    arg1_00 = fcn.00014368(arg3_00 + 0x3e,iVar10,1,acStackX_20);
    Var11 = iVar10 >> 8;
    if (((acStackX_20[0] == '\x04') || (acStackX_20[0] == '\a')) ||
       ((acStackX_20[0] == '\x03' && (*(arg1 + 0x48) == 3)))) {
        uVar5 = *(arg3 + 0xc) >> 0x10;
        uVar8 = *(arg3 + 0xc);
        iVar12 = CONCAT22(uVar5,uVar8 << 8 | uVar8 >> 8);
        iVar10 = CONCAT71(iVar12 >> 8,0x36);
        auStackX_8[0] = uVar5 << 8 | uVar5 >> 8 | iVar12 << 0x10;
        arg1_00 = fcn.00014368(arg1_00,iVar10,4,auStackX_8);
        Var11 = iVar10 >> 8;
    }
    auStackX_8[0] = 0;
    if (acStackX_20[0] == '\x03') {
        if (*(arg1 + 0x48) != 8) {
            if (*(arg1 + 0x48) == 3) goto code_r0x0001220e;
            goto code_r0x0001223d;
        }
        auStackX_8[0] = *(arg1 + 0x110);
code_r0x00012212:
        if (auStackX_8[0] != 0) {
            iVar10 = CONCAT71(Var11,0x32);
            arg1_00 = fcn.00014368(arg1_00,iVar10,4,auStackX_8);
            Var11 = iVar10 >> 8;
        }
        if (acStackX_20[0] != '\x04') goto code_r0x00012238;
    }
    else {
        if (acStackX_20[0] == '\x04') {
code_r0x0001220e:
            auStackX_8[0] = *((-(arg2 != 0) & arg2 + 8U) + 0x10);
            goto code_r0x00012212;
        }
code_r0x00012238:
        if (acStackX_20[0] != '\a') {
code_r0x0001223d:
            in_stack_00000028 = 0xff;
            iVar10 = CONCAT71(Var11,0x39);
            arg1_00 = fcn.00014368(arg1_00,iVar10,2,&stack0x00000028);
            Var11 = iVar10 >> 8;
        }
    }
    if (arg4_00 != NULL) {
        uVar3 = uVar14;
        if (*arg4_00 == '\0') {
code_r0x0001227c:
            cVar7 = *arg4_00;
            uVar3 = uVar14;
            while (cVar7 != '\0') {
                uVar3 = uVar3 + 1;
                cVar7 = arg4_00[uVar3];
            }
        }
        else {
            do {
                uVar3 = uVar3 + 1;
            } while (arg4_00[uVar3] != '\0');
            if (uVar3 < 0xff) goto code_r0x0001227c;
            uVar3 = 0xff;
        }
        arg1_00 = fcn.00014368(arg1_00,CONCAT71(Var11,0x38),uVar3 & 0xffff,arg4_00);
    }
    if ((*(arg1 + 0x138) != 0) && (cVar7 = acStackX_20[0], *(arg1 + 0x128) != 0)) {
        do {
            if (((cVar7 != '\x04') && (cVar7 != '\a')) || (**(*(arg1 + 0x130) + uVar14 * 8) == '=')) {
                puVar2 = *(*(arg1 + 0x130) + uVar14 * 8);
                arg1_00 = fcn.00014368(arg1_00,CONCAT71(puVar2 >> 8,*puVar2),puVar2[1],puVar2 + 2);
                cVar7 = acStackX_20[0];
            }
            uVar13 = uVar14 + 1;
            uVar14 = uVar13;
        } while (uVar13 < *(arg1 + 0x128));
    }
    *arg1_00 = 0xff;
    arg3_00[1] = arg3_00[1] + (arg1_00 - arg3_00) + -0xf7;
    piStack_78 = NULL;
    if (acStackX_20[0] == '\x01') {
        iVar10 = 1;
code_r0x0001233c:
        iVar10 = fcn.00011320(arg1,iVar10,arg3_00,&piStack_78);
        if (iVar10 < 0) goto code_r0x000123ca;
        if (piStack_78 != NULL) {
            (**(*0x17948 + 0x48))(arg3_00);
            arg3_00 = piStack_78;
        }
    }
    else {
        if (acStackX_20[0] == '\x03') {
            iVar10 = 4;
            goto code_r0x0001233c;
        }
        if (acStackX_20[0] == '\x04') {
            iVar10 = 7;
            goto code_r0x0001233c;
        }
    }
    uVar14 = *(arg3_00 + 10);
    if ((uVar14 != 0) && (arg1 + 0xd2 != arg3_00 + 9)) {
        section..text(arg1 + 0xd2,arg3_00 + 9,uVar14);
    }
    piStack_68 = arg3_00 + 2;
    aiStack_70[0] = arg3_00[1];
    iVar10 = fcn.000154c0(aiStack_70,1,uVar14,0);
    if (iVar10 != 0) {
        if (*(arg1 + 0xa8) != 0) {
            (**(*0x17948 + 0x48))();
        }
        *(arg1 + 0xa8) = arg3_00;
        if (*(arg1 + 0x48) == 2) {
            iVar4 = *(arg1 + 0xf8);
        }
        else {
            iVar4 = *(arg1 + 0x108);
        }
        iVar6 = 0x16900;
        if (iVar4 != 0) {
            iVar6 = iVar4;
        }
        uVar1 = *(iVar6 + *(arg1 + 0x150) * 4);
        uStack_4c = 0xffffffff;
        var_38h._4_2_ = 0x43;
        *(arg1 + 0x148) = uVar1;
        *(arg1 + 0x14c) = uVar1;
        iVar4 = *(arg1 + 0x98);
        uStack_50 = 0x44;
        uStack_60 = 0;
        if ((*(arg1 + 0x48) == 5) || (acStackX_20[0] == '\a')) {
            uStack_4c = *(arg1 + 100);
            iVar4 = *(arg1 + 0xa0);
            uStack_60 = *(arg1 + 0x5c);
        }
        iVar4 = fcn.00016564(iVar4);
        if (iVar4 < 0) {
            fcn.00015434(iVar10);
            return -0x7ffffffffffffff1;
        }
        return 0;
    }
    iVar10 = -0x7ffffffffffffff7;
code_r0x000123ca:
    (**(*0x17948 + 0x48))(arg3_00);
    return iVar10;
}


/* fcn.00011320 @ 0x11320 */

int64_t fcn.00011320(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar2 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    if (*(arg1 + 0x118) == NULL) {
        if (arg2 == 2) {
            iVar2 = -0x7ffffffffffffffa;
        }
    }
    else {
        iVar1 = (**(arg1 + 0x118))(*(arg1 + 0xe8) + 8,*(arg1 + 0x120),*(arg1 + 0x48),arg2 & 0xffffffff,arg3,arg4);
        if ((iVar1 == 0) || (iVar2 = -0x7fffffffffffffeb, iVar1 == -0x7ffffffffffffffa)) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


/* fcn.000114c0 @ 0x114c0 */

void fcn.000114c0(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint in_register_00000014;
    uint32_t uVar2;
    
    uVar2 = *(CONCAT44(in_register_00000014,arg2) + 0x10);
    *(arg1 + 0x80) = uVar2;
    uVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x18);
    *(arg1 + 0x88) = uVar1;
    *(arg1 + 0x84) = *(CONCAT44(in_register_00000014,arg2) + 0x14);
    if (uVar2 == 0) {
        uVar2 = 0x93a80;
    }
    *(arg1 + 0x80) = uVar2;
    if ((uVar1 == 0) || (*(CONCAT44(in_register_00000014,arg2) + 0x10) <= uVar1)) {
        uVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x10);
        *(arg1 + 0x88) = uVar1 - (uVar1 >> 3);
    }
    if ((*(arg1 + 0x84) == 0) || (*(CONCAT44(in_register_00000014,arg2) + 0x18) <= *(arg1 + 0x84))) {
        *(arg1 + 0x84) = uVar2 >> 1;
    }
    return;
}


/* fcn.00014150 @ 0x14150 */

int64_t fcn.00014150(int64_t noname_0,int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *arg1_00;
    uint8_t *noname_1;
    uint8_t *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    int64_t iStackX_10;
    uint8_t *puStackX_18;
    uchar auStack_38 [32];
    
    if (arg1 != 0) {
        *arg1 = 0;
    }
    puStackX_18 = NULL;
    iVar2 = fcn.00014014(noname_0,&iStackX_10,&puStackX_18);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (iStackX_10 == 0) {
        return iVar2;
    }
    bVar1 = false;
    fcn.000102c0(auStack_38,0x1c);
    iVar10 = 0;
    if (0 < iStackX_10) {
        puVar5 = puStackX_18;
code_r0x000141c1:
        iVar6 = 0;
        iVar8 = 0x4a;
        do {
            iVar3 = (iVar8 + iVar6) / 2;
            puVar9 = iVar3 * 0x28 + 0x16960;
            if (*puVar5 == *puVar9) goto code_r0x000141fe;
            if (*puVar5 < *puVar9) {
                iVar8 = iVar3 + -1;
            }
            else {
                iVar6 = iVar3 + 1;
            }
        } while (iVar6 <= iVar8);
        puVar9 = NULL;
code_r0x000141fe:
        if (puVar9 == NULL) {
code_r0x000142da:
            iVar10 = iVar10 + 1;
            puVar5 = puVar5 + 0x10;
            if (iStackX_10 <= iVar10) goto code_r0x000142ec;
            goto code_r0x000141c1;
        }
        iVar8 = *(puVar9 + 8);
        if (iVar8 < 1) goto code_r0x0001435b;
        if (iVar8 < 3) {
            uVar7 = 1;
code_r0x00014256:
            uVar4 = *(puVar5 + 2) / uVar7;
            if (((*(puVar5 + 2) % uVar7 == 0) && ((*(puVar9 + 0x10) == -1 || (*(puVar9 + 0x10) <= uVar4)))) &&
               ((*(puVar9 + 0x18) == -1 || (uVar4 <= *(puVar9 + 0x18))))) {
                noname_1 = NULL;
                if ((iVar8 == 1) && (uVar4 != 0)) {
                    noname_1 = *(puVar5 + 8);
                    do {
                        if (1 < *noname_1) goto code_r0x0001435b;
                        noname_1 = noname_1 + 1;
                    } while (noname_1 - *(puVar5 + 8) < uVar4);
                }
                if ((puVar9[0x20] != 0) && (arg1 != 0)) {
                    bVar1 = true;
                    iVar2 = fcn.00013d50(CONCAT71(iVar8 >> 8,*puVar5),noname_1,*(puVar5 + 8),auStack_38);
                    if (-1 < iVar2) goto code_r0x000142da;
                    goto code_r0x00014335;
                }
                goto code_r0x000142da;
            }
        }
        else {
            if (iVar8 == 3) {
                uVar7 = 2;
                goto code_r0x00014256;
            }
            if (3 < iVar8) {
                if (iVar8 < 6) {
                    uVar7 = 4;
                }
                else {
                    if (iVar8 != 6) goto code_r0x0001435b;
                    uVar7 = 8;
                }
                goto code_r0x00014256;
            }
        }
code_r0x0001435b:
        iVar2 = -0x7ffffffffffffffe;
    }
code_r0x00014335:
    (**(*0x17948 + 0x48))(puStackX_18);
    return iVar2;
code_r0x000142ec:
    if ((bVar1) && (arg1 != 0)) {
        arg1_00 = fcn.0001466c();
        if ((arg1_00 != NULL) && (arg1_00 != auStack_38)) {
            arg1_00 = section..text(arg1_00,auStack_38,0x1c);
        }
        *arg1 = arg1_00;
        if (arg1_00 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
    }
    goto code_r0x00014335;
}


/* fcn.00011678 @ 0x11678 */

//WARNING: Removing unreachable block (ram,0x0001143d)
//WARNING: Removing unreachable block (ram,0x00011448)
//WARNING: Removing unreachable block (ram,0x0001146d)

int64_t fcn.00011678(int64_t arg1)

{
    uint uVar1;
    uint *puVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint16_t uVar6;
    
    uVar1 = *(*(arg1 + 0x70) + 0x18);
    uVar3 = uVar1 >> 0x10;
    uVar6 = uVar1;
    *(arg1 + 0x5c) = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar3 << 8 | uVar3 >> 8);
    puVar2 = *(arg1 + 0x78);
    if (puVar2 != NULL) {
        *(arg1 + 0x60) = *puVar2;
        *(arg1 + 100) = puVar2[3];
    }
    if (*(arg1 + 0x60) == 0) {
        return -0x7fffffffffffffeb;
    }
    if (*(arg1 + 0xa0) != 0) {
        fcn.00016408(*(arg1 + 0xa0));
    }
    iVar5 = fcn.00016224(*(arg1 + 0x20),*(arg1 + 0x28),0x1152c);
    *(arg1 + 0xa0) = iVar5;
    if (iVar5 != 0) {
        iVar5 = *(arg1 + 0x78);
        if ((iVar5 != 0) && (*(iVar5 + 8) != '\0')) {
            fcn.000114c0(arg1,iVar5);
        }
        iVar5 = fcn.00011320(arg1,8,0,0);
        if (-1 < iVar5) {
            uVar4 = *(arg1 + 0x100);
            *(arg1 + 0x158) = uVar4;
            *(arg1 + 0x48) = 4;
            if (uVar4 == 0) {
                uVar4 = 4;
            }
            *(arg1 + 0x150) = 0;
            *(arg1 + 0x148) = 0;
            *(arg1 + 0x14c) = 0;
            *(arg1 + 0x158) = uVar4;
            iVar5 = 0;
        }
        return iVar5;
    }
    return -0x7ffffffffffffff7;
}


/* fcn.000113a8 @ 0x113a8 */

void fcn.000113a8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0xe8);
    if (iVar1 != 0) {
        if ((*(iVar1 + 0x78) != 0) && ((arg2 - 1U & 0xfffffffffffffffd) == 0)) {
            (**(*0x17948 + 0x68))();
            *(iVar1 + 0x78) = 0;
        }
        if ((*(iVar1 + 0x80) != 0) && (arg2 - 2U < 2)) {
            (**(*0x17948 + 0x68))();
            *(iVar1 + 0x80) = 0;
        }
    }
    return;
}


/* fcn.00011824 @ 0x11824 */

int64_t fcn.00011824(int64_t arg1)

{
    int64_t *arg1_00;
    int64_t iVar1;
    uint32_t *arg1_01;
    int64_t unaff_RSI;
    uint32_t *arg2;
    uint64_t arg3;
    uint32_t **arg4;
    uint32_t *puStackX_8;
    
    arg3 = *(arg1 + 0x68);
    arg4 = &puStackX_8;
    puStackX_8 = NULL;
    iVar1 = fcn.00011320(arg1,3,arg3,arg4);
    if (-1 < iVar1) {
        arg2 = *(arg1 + 0x68);
        if (puStackX_8 != NULL) {
            iVar1 = fcn.00014150(puStackX_8,0);
            if (-1 < iVar1) {
                arg1_01 = fcn.0001466c();
                if (arg1_01 != NULL) {
                    arg3 = *puStackX_8;
                    if ((arg3 != 0) && (arg1_01 != puStackX_8)) {
                        section..text(arg1_01,puStackX_8,arg3);
                    }
                    (**(*0x17948 + 0x48))(arg2);
                    arg2 = arg1_01;
                }
            }
        }
        *(arg1 + 0x68) = 0;
        arg1_00 = arg1 + 0x78;
        *arg1_00 = 0;
        *(arg1 + 0x70) = arg2;
        iVar1 = fcn.00014150(arg2,arg1_00);
        if (-1 < iVar1) {
            if ((*arg1_00 == 0) || (*(*arg1_00 + 8) == '\0')) {
                iVar1 = fcn.00011678(arg1);
                if (-1 < iVar1) {
                    *(arg1 + 0x50) = 0;
                    fcn.000113a8(arg1,3);
                    iVar1 = 0;
                }
            }
            else {
                iVar1 = fcn.00011418(arg1,3,CONCAT71(arg3 >> 8,1));
                if (-1 < iVar1) {
                    iVar1 = fcn.0001201c(arg1,arg2,*arg1_00,CONCAT71(arg4 >> 8,3),unaff_RSI);
                }
            }
        }
    }
    return iVar1;
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


/* fcn.00011264 @ 0x11264 */

int64_t fcn.00011264(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint in_R9D;
    int64_t in_stack_00000018;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    *(*(arg1_00 + 0xe8) + 0x9c) = 0;
    if (*(arg1_00 + 0x48) == 1) {
        fcn.00011418(arg1_00,2,0);
        iVar1 = fcn.0001201c(arg1_00,0,0,CONCAT31(in_R9D >> 8,1),in_stack_00000018);
        if (iVar1 < 0) {
            *(arg1_00 + 0x48) = 1;
            return iVar1;
        }
    }
    else {
        uVar2 = *(arg1_00 + 0x100);
        *(arg1_00 + 0x158) = uVar2;
        *(arg1_00 + 0x150) = 0;
        if (uVar2 == 0) {
            uVar2 = 4;
        }
        *(arg1_00 + 0x148) = 0;
        *(arg1_00 + 0x158) = uVar2;
        *(arg1_00 + 0x48) = 8;
        iVar1 = fcn.0001201c(arg1_00,0,0,CONCAT31(in_R9D >> 8,3),in_stack_00000018);
        if (iVar1 < 0) {
            *(arg1_00 + 0x48) = 7;
            return iVar1;
        }
    }
    return 0;
}


/* fcn.00015434 @ 0x15434 */

void fcn.00015434(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.000153c0(*(arg1 + 0x78));
        (**(*0x17948 + 0x48))(arg1);
    }
    return;
}


/* fcn.000153c0 @ 0x153c0 */

void fcn.000153c0(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x17948 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x17948 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x17948 + 0x48))(arg1);
    }
    return;
}


/* fcn.00015894 @ 0x15894 */

uint32_t fcn.00015894(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    
    uVar6 = arg3;
    if ((uVar6 == 0) || (*(arg1 + 0x84) <= arg2)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x84) - arg2;
        if (uVar1 < uVar6) {
            uVar6 = uVar1;
        }
        uVar4 = 0;
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if (*piVar2 != 0) {
                    uVar1 = *piVar2 + uVar4;
                    if (arg2 < uVar1) break;
                    uVar4 = uVar1;
                }
                uVar1 = uVar5 + 1;
                uVar5 = uVar1;
                piVar2 = piVar2 + 10;
            } while (uVar1 < *(arg1 + 0x80));
        }
        uVar1 = *(arg1 + 0xa8 + uVar5 * 0x28) - (arg2 - uVar4);
        iVar3 = (arg2 - uVar4) + *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar1 < uVar6) {
            if ((uVar1 != 0) && (arg4 != iVar3)) {
                section..text(arg4,iVar3,uVar1);
            }
            arg4 = arg4 + uVar1;
            uVar6 = uVar6 - uVar1;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (uVar6 <= uVar4) {
                    uVar1 = uVar1 + uVar6;
                    iVar3 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((uVar6 != 0) && (arg4 != iVar3)) {
                        section..text(arg4,iVar3,uVar6);
                    }
                    break;
                }
                iVar3 = *(arg1 + 0x98 + uVar5 * 0x28);
                uVar6 = uVar6 - uVar4;
                uVar1 = uVar1 + uVar4;
                if ((uVar4 != 0) && (arg4 != iVar3)) {
                    section..text(arg4,iVar3,uVar4);
                }
                arg4 = arg4 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((uVar6 != 0) && (arg4 != iVar3)) {
                section..text(arg4,iVar3,uVar6);
            }
            uVar1 = uVar6;
        }
    }
    return uVar1;
}


/* fcn.00011ca8 @ 0x11ca8 */

int64_t fcn.00011ca8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint in_R8;
    
    iVar3 = CONCAT44(in_R8,arg3);
    if ((iVar3 == 0) || (1 < *(iVar3 + 8) - 5U)) {
        iVar2 = 0;
    }
    else if (*(iVar3 + 8) == '\x06') {
        fcn.00011320(arg1,6,arg2,0);
        *(arg1 + 0x5c) = 0;
        *(arg1 + 0x48) = 1;
        iVar2 = fcn.00011264(arg1);
    }
    else {
        uVar1 = *(arg2 + 0x18) >> 0x10;
        uVar4 = *(arg2 + 0x18);
        if (CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8) == *(arg1 + 0x5c)) {
            iVar2 = fcn.00011320(arg1,5,arg2,0);
            if (-1 < iVar2) {
                iVar2 = fcn.0001466c();
                if ((iVar2 != 0) && (iVar2 != iVar3)) {
                    iVar2 = section..text(iVar2,arg3,0x1c);
                }
                *(arg1 + 0x78) = iVar2;
                if (iVar2 != 0) {
                    *(arg1 + 0x70) = arg2;
                    iVar3 = fcn.00011678(arg1);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    *(arg1 + 0x50) = 0;
                    fcn.000113a8(arg1,1);
                    return 0;
                }
                iVar2 = -0x7ffffffffffffff7;
            }
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    (**(*0x17948 + 0x48))(arg2);
    return iVar2;
}


/* fcn.00011b88 @ 0x11b88 */

int64_t fcn.00011b88(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_R8;
    
    iVar3 = CONCAT44(in_R8,arg3);
    if ((((iVar3 == 0) || (cVar1 = *(iVar3 + 8), cVar1 == '\0')) || (*(iVar3 + 0xc) != *(*(arg1 + 0x78) + 0xc))) ||
       (1 < cVar1 - 5U)) {
        iVar3 = 0;
    }
    else {
        iVar3 = -0x7ffffffffffffff9;
        if (cVar1 == '\x06') {
            fcn.00011320(arg1,6,arg2,0);
        }
        else {
            iVar2 = *(arg1 + 0x70) + 0x18;
            if (arg2 + 0x18 != iVar2) {
                iVar2 = fcn.000102e0(arg2 + 0x18,iVar2,4);
                if (iVar2 != 0) goto code_r0x00011c82;
            }
            iVar2 = arg2;
            iVar3 = fcn.00011320(arg1,5,arg2,0);
            if (-1 < iVar3) {
                fcn.000114c0(arg1,arg3);
                *(arg1 + 0x160) = 0;
                fcn.00011418(arg1,4,CONCAT71(iVar2 >> 8,1));
                if (*(arg1 + 0x90) != 0) {
                    *(arg1 + 0x90) = 0;
                    *(arg1 + 0x50) = 0;
                    fcn.000113a8(arg1,2);
                }
            }
        }
    }
code_r0x00011c82:
    (**(*0x17948 + 0x48))(arg2);
    return iVar3;
}


/* fcn.00011a58 @ 0x11a58 */

int64_t fcn.00011a58(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t unaff_RSI;
    int64_t iVar3;
    uint in_R8;
    ulong in_R9;
    
    iVar1 = CONCAT44(in_R8,arg3);
    iVar2 = 0;
    if ((((iVar1 != 0) && (*(iVar1 + 8) != '\0')) && (*(iVar1 + 0xc) == *(*(arg1 + 0x78) + 0xc))) &&
       (*(iVar1 + 8) - 5U < 2)) {
        iVar3 = -0x7ffffffffffffff9;
        if (*(iVar1 + 8) == '\x06') {
            fcn.00011320(arg1,6,arg2,0);
            iVar2 = iVar3;
        }
        else {
            iVar1 = *(arg1 + 0x70) + 0x18;
            if ((arg2 + 0x18 == iVar1) || (iVar1 = fcn.000102e0(arg2 + 0x18,iVar1,4), iVar1 == 0)) {
                in_R9 = 0;
                iVar3 = fcn.00011320(arg1,5,arg2,0);
                if ((-1 < iVar3) && (iVar3 = fcn.00011678(arg1), -1 < iVar3)) {
                    *(arg1 + 0x50) = 0;
                    fcn.000113a8(arg1,1);
                    goto code_r0x00011b63;
                }
            }
            fcn.0001201c(arg1,*(arg1 + 0x70),*(arg1 + 0x78),CONCAT71(in_R9 >> 8,4),unaff_RSI);
            iVar2 = iVar3;
        }
    }
code_r0x00011b63:
    (**(*0x17948 + 0x48))(arg2);
    return iVar2;
}


/* fcn.00011994 @ 0x11994 */

int64_t fcn.00011994(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint in_R8;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_R8,arg3);
    iVar1 = 0;
    if (((iVar2 == 0) || (*(iVar2 + 8) == '\0')) || ((*(iVar2 + 8) == '\x02' && (*(iVar2 + 0xc) != 0)))) {
        iVar1 = fcn.00011320(arg1,2,arg2,0);
        if (iVar1 == 0) {
            if (*(arg1 + 0x68) != 0) {
                (**(*0x17948 + 0x48))();
            }
            *(arg1 + 0x68) = arg2;
            iVar1 = fcn.00011824(arg1);
            return iVar1;
        }
        if (iVar1 == -0x7ffffffffffffffa) {
            if (*(arg1 + 0x68) != 0) {
                (**(*0x17948 + 0x48))();
            }
            *(arg1 + 0x68) = arg2;
        }
        else if (iVar1 == -0x7fffffffffffffeb) goto code_r0x00011a44;
        iVar1 = 0;
    }
    else {
code_r0x00011a44:
        (**(*0x17948 + 0x48))(arg2);
    }
    return iVar1;
}


/* fcn.00011940 @ 0x11940 */

void fcn.00011940(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    
    uVar2 = 0xc;
    if (*(arg1 + 0x48) - 4U < 3) {
        uVar2 = 0xb;
    }
    fcn.00011320(arg1,uVar2,0,0);
    fcn.00011744(arg1);
    *(arg1 + 0x50) = arg2;
    iVar1 = *(arg1 + 0xe8);
    if (iVar1 != 0) {
        if (*(iVar1 + 0x78) != 0) {
            (**(*0x17948 + 0x68))();
            *(iVar1 + 0x78) = 0;
        }
        if (*(iVar1 + 0x80) != 0) {
            (**(*0x17948 + 0x68))();
            *(iVar1 + 0x80) = 0;
        }
    }
    return;
}


/* fcn.00014368 @ 0x14368 */

uchar * fcn.00014368(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *arg1_00;
    uint64_t uVar1;
    uint64_t arg3_00;
    uint64_t uVar2;
    
    uVar2 = ((arg3 & 0xffff) + 0xfe) / 0xff;
    if (uVar2 != 0) {
        uVar1 = arg3 & 0xffff;
        do {
            *arg1 = arg2;
            arg3_00 = uVar1;
            if (0xff < uVar1) {
                arg3_00 = 0xff;
            }
            *(arg1 + 1) = arg3_00;
            arg1_00 = arg1 + 2;
            if ((arg3_00 != 0) && (arg1_00 != arg4)) {
                section..text(arg1_00,arg4,arg3_00);
            }
            arg1 = arg1_00 + arg3_00;
            uVar1 = uVar1 - 0xff;
            arg4 = arg4 + 0xff;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return arg1;
}


/* fcn.000154c0 @ 0x154c0 */

int64_t fcn.000154c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    ulong in_stack_00000028;
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
        iVar8 = fcn.0001466c(arg1,uVar16);
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
                    goto code_r0x000155bc;
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
code_r0x000155bc:
        }
    }
    iVar19 = fcn.0001528c(uVar7,uVar7);
    if (iVar19 == 0) {
        if (iVar8 != 0) {
            (**(*0x17948 + 0x48))(iVar8);
        }
        return 0;
    }
    iVar5 = *(iVar19 + 0x78);
    *(iVar5 + 0x10) = in_stack_00000028;
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


/* fcn.00016564 @ 0x16564 */

int64_t fcn.00016564(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t in_RDX;
    int32_t unaff_EBX;
    int64_t unaff_RBP;
    int64_t in_R8;
    int64_t in_R9;
    
    iVar4 = fcn.00015f84(arg1,in_RDX,in_R8,in_R9,unaff_EBX,unaff_RBP);
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
                (**(*0x17948 + 0x70))(*(iVar4 + 0x60));
            }
            (**(*0x17948 + 0x48))(iVar4);
        }
        else {
            iVar5 = 0;
        }
    }
    return iVar5;
}


/* fcn.000124c0 @ 0x124c0 */

ulong fcn.000124c0(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_01;
    uint auStack_48 [2];
    int64_t iStack_40;
    uint uStack_38;
    ushort uStack_28;
    uint uStack_24;
    ushort uStack_14;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x48) != 3) {
        uVar1 = *(*(iVar3 + 0xe8) + 0x9c);
        *(*(iVar3 + 0xa8) + 0x10) = uVar1 << 8 | uVar1 >> 8;
    }
    iStack_40 = *(iVar3 + 0xa8) + 8;
    auStack_48[0] = *(*(iVar3 + 0xa8) + 4);
    arg1_00 = fcn.000154c0(auStack_48,1,arg2,0);
    if (arg1_00 == 0) {
        uVar2 = 0x8000000000000009;
    }
    else {
        uStack_24 = 0xffffffff;
        uStack_38 = 0;
        arg1_01 = *(iVar3 + 0x98);
        uStack_14 = 0x43;
        uStack_28 = 0x44;
        if (*(iVar3 + 0x48) == 5) {
            uStack_24 = *(iVar3 + 100);
            arg1_01 = *(iVar3 + 0xa0);
            uStack_38 = *(iVar3 + 0x5c);
        }
        iVar3 = fcn.00016564(arg1_01);
        if (iVar3 < 0) {
            fcn.00015434(arg1_00);
            uVar2 = 0x800000000000000f;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00013788 @ 0x13788 */

void fcn.00013788(int64_t arg1)

{
    int iVar1;
    ulong *puVar2;
    int64_t arg3;
    ulong uVar3;
    uint64_t noname_1;
    
    iVar1 = *(arg1 + 0xd4);
    puVar2 = *(arg1 + 0x88);
    *(puVar2 + 7) = iVar1;
    if (iVar1 == 0) {
        puVar2[8] = 0;
        uVar3 = 0x8000000000000012;
    }
    else {
        noname_1 = *(arg1 + 0xd0);
        arg3 = fcn.0001466c();
        puVar2[8] = arg3;
        if (arg3 != 0) {
            fcn.00015a04(arg1 + 0xa0,noname_1,*(arg1 + 0xd0),arg3);
            *puVar2 = 0;
            goto code_r0x000137f7;
        }
        uVar3 = 0x8000000000000009;
    }
    *puVar2 = uVar3;
code_r0x000137f7:
    fcn.00015af0(arg1 + 0xa0);
    fcn.00016504(*(arg1 + 0x90));
    (**(*0x17948 + 0x120))(*(*(arg1 + 0x90) + 0x38),0x16810,*(*(arg1 + 0x68) + 0x28),*(arg1 + 0x60));
    fcn.00016408(*(arg1 + 0x90));
    *(arg1 + 0x90) = 0;
    *(arg1 + 0x88) = 0;
    if (puVar2[1] != 0) {
        (**(*0x17948 + 0x68))();
    }
    return;
}


/* fcn.000129f8 @ 0x129f8 */

int64_t fcn.000129f8(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    
    if (*(arg1 + 8) != 0) {
        (**(*0x17948 + 0x48))();
    }
    if (*(arg1 + 0x18) != 0) {
        (**(*0x17948 + 0x48))();
    }
    if (*(arg1 + 0x40) != 0) {
        uVar4 = 0;
        if (*(arg1 + 0x38) != 0) {
            do {
                if (*(*(arg1 + 0x40) + uVar4 * 8) != 0) {
                    (**(*0x17948 + 0x48))();
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
            } while (uVar2 < *(arg1 + 0x38));
        }
        (**(*0x17948 + 0x48))(*(arg1 + 0x40));
    }
    puVar3 = arg1;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1;
}


/* fcn.00012a7c @ 0x12a7c */

ulong fcn.00012a7c(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg1_00;
    uint uVar5;
    int iVar6;
    uint in_register_0000000c;
    int64_t arg1_01;
    int64_t arg3;
    uint64_t uVar7;
    uint32_t uVar8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_01 != arg2) {
        section..text(arg1_01,arg2,0x48);
    }
    *(arg1_01 + 8) = 0;
    *(arg1_01 + 0x18) = 0;
    *(arg1_01 + 0x40) = 0;
    if (*(arg2 + 8) != 0) {
        iVar4 = fcn.0001466c();
        *(arg1_01 + 8) = iVar4;
        if (iVar4 == 0) {
            return 0x8000000000000009;
        }
        uVar7 = 0;
        if (*arg2 != 0) {
            do {
                uVar5 = 1;
                if (1 < *(*(arg2 + 8) + uVar7 * 4)) {
                    uVar5 = *(*(arg2 + 8) + uVar7 * 4);
                }
                *(*(arg1_01 + 8) + uVar7 * 4) = uVar5;
                uVar8 = uVar7 + 1;
                uVar7 = uVar8;
            } while (uVar8 < *arg2);
        }
    }
    if (*(arg2 + 0x18) != 0) {
        iVar4 = fcn.0001466c();
        *(arg1_01 + 0x18) = iVar4;
        if (iVar4 == 0) goto code_r0x00012bf7;
        uVar7 = 0;
        if (*(arg2 + 0x10) != 0) {
            do {
                uVar5 = 1;
                if (1 < *(*(arg2 + 0x18) + uVar7 * 4)) {
                    uVar5 = *(*(arg2 + 0x18) + uVar7 * 4);
                }
                *(*(arg1_01 + 0x18) + uVar7 * 4) = uVar5;
                uVar8 = uVar7 + 1;
                uVar7 = uVar8;
            } while (uVar8 < *(arg2 + 0x10));
        }
    }
    if (*(arg2 + 0x40) == 0) {
        return 0;
    }
    iVar4 = fcn.0001469c(*(arg2 + 0x38) << 3);
    *(arg1_01 + 0x40) = iVar4;
    if (iVar4 != 0) {
        iVar2 = *(arg2 + 0x40);
        uVar7 = 0;
        if (*(arg2 + 0x38) == 0) {
            return 0;
        }
        while( true ) {
            uVar1 = *(*(iVar2 + uVar7 * 8) + 1);
            if (uVar1 < 2) {
                iVar6 = 0;
            }
            else {
                iVar6 = uVar1 - 1;
            }
            arg3 = iVar6 + 3;
            arg1_00 = fcn.0001466c(iVar6,arg3);
            *(iVar4 + uVar7 * 8) = arg1_00;
            if (arg1_00 == 0) break;
            iVar3 = *(iVar2 + uVar7 * 8);
            if ((arg3 != 0) && (arg1_00 != iVar3)) {
                section..text(arg1_00,iVar3,arg3);
            }
            uVar8 = uVar7 + 1;
            uVar7 = uVar8;
            if (*(arg2 + 0x38) <= uVar8) {
                return 0;
            }
        }
    }
code_r0x00012bf7:
    fcn.000129f8(arg1_01);
    return 0x8000000000000009;
}


/* fcn.00015044 @ 0x15044 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00015044(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    ulong uStack_48;
    ulong *puStack_40;
    uchar auStack_38 [16];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    *arg3 = 0;
    puStackX_20 = NULL;
    uStackX_18 = 0;
    iVar1 = fcn.00014d7c(arg1,&uStackX_18);
    if (iVar1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = (**(*0x17948 + 0x98))(iVar1,0x16740,&puStack_40);
    if (-1 < iVar1) {
        iVar1 = (**puStack_40)(puStack_40,0x167f0,&puStackX_20,auStack_38);
        if (-1 < iVar1) {
            *arg3 = *puStackX_20;
            (**(*0x17948 + 0x48))();
            if ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2)) {
                uStack_48 = 0;
                iVar1 = (**(*0x17948 + 0x50))(0x80000000,8,0,0,&uStack_48);
                if (iVar1 < 0) {
                    return -0x7ffffffffffffff9;
                }
                do {
                    iVar1 = (**(*0x17948 + 0x58))(uStack_48,2,1000000);
                    if (iVar1 < 0) {
                        iVar1 = -0x7ffffffffffffff9;
code_r0x0001523a:
                        (**(*0x17948 + 0x70))(uStack_48);
                        return iVar1;
                    }
                    do {
                        iVar2 = (**(*0x17948 + 0x78))(uStack_48);
                        if (-1 < iVar2) {
                            arg2 = arg2 - 1000000;
                            iVar1 = (**puStack_40)(puStack_40,0x167f0,&puStackX_20,auStack_38);
                            if (iVar1 < 0) {
                                if (puStackX_20 != NULL) {
                                    (**(*0x17948 + 0x48))();
                                }
                                goto code_r0x0001523a;
                            }
                            *arg3 = *puStackX_20;
                            (**(*0x17948 + 0x48))();
                        }
                    } while (iVar2 == -0x7ffffffffffffffa);
                } while ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2));
                (**(*0x17948 + 0x70))(uStack_48);
                if ((*arg3 == -0x7ffffffffffffffa) && (arg2 < 1000000)) {
                    return -0x7fffffffffffffee;
                }
            }
            return 0;
        }
        if (puStackX_20 != NULL) {
            (**(*0x17948 + 0x48))();
        }
        if (iVar1 != -0x7ffffffffffffffd) {
            return iVar1;
        }
    }
    uStackX_18 = CONCAT71(uStackX_18._1_7_,1);
    iVar1 = fcn.00014e44(arg1,&uStackX_18);
    if (-1 < iVar1) {
        *arg3 = ~-(uStackX_18 != '\0') & 0x800000000000000c;
    }
    return iVar1;
}


/* fcn.00014414 @ 0x14414 */

int64_t fcn.00014414(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint8_t uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint32_t uVar6;
    uchar *puVar7;
    int64_t iVar8;
    int *piVar9;
    int *arg1_00;
    uchar *puVar10;
    uint8_t *puVar11;
    uint64_t uVar12;
    int *arg2_00;
    uint16_t *puVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    int64_t iVar16;
    int iVar17;
    uint extraout_XMM0_Da;
    uint uVar18;
    ulong *in_stack_00000028;
    int64_t *in_stack_00000030;
    uint8_t *puStack_28;
    uint64_t uStack_20;
    
    uVar12 = arg2 & 0xffffffff;
    uVar14 = arg4 & 0xffffffff;
    puVar7 = fcn.0001466c();
    uVar6 = 0;
    if (puVar7 == NULL) {
        iVar8 = -0x7ffffffffffffff7;
    }
    else {
        iVar16 = 0x100;
        puVar10 = puVar7;
        do {
            *puVar10 = uVar6;
            uVar6 = uVar6 + 1;
            *(puVar10 + 2) = 0;
            puVar10 = puVar10 + 0x10;
        } while (uVar6 < 0x100);
        puStack_28 = NULL;
        iVar8 = fcn.00014014(arg1,&uStack_20,&puStack_28);
        if (-1 < iVar8) {
            uVar18 = extraout_XMM0_Da;
            if ((puStack_28 != NULL) && (uStack_20 != 0)) {
                uStack_20 = uStack_20 & 0xffffffff;
                puVar11 = puStack_28;
                do {
                    uVar2 = *puVar11;
                    uVar18 = *puVar11;
                    uVar3 = *(puVar11 + 4);
                    uVar4 = *(puVar11 + 8);
                    uVar5 = *(puVar11 + 0xc);
                    puVar11 = puVar11 + 0x10;
                    puVar1 = puVar7 + uVar2 * 0x10;
                    *puVar1 = uVar18;
                    puVar1[1] = uVar3;
                    puVar1[2] = uVar4;
                    puVar1[3] = uVar5;
                    uStack_20 = uStack_20 - 1;
                } while (uStack_20 != 0);
            }
            if (arg2 != 0) {
                do {
                    uVar2 = *arg3;
                    arg3 = arg3 + 1;
                    *(puVar7 + uVar2 * 0x10 + 2) = 0;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            if (arg4 != 0) {
                do {
                    *(puVar7 + **in_stack_00000028 * 0x10 + 2) = (*in_stack_00000028)[1];
                    puVar11 = *in_stack_00000028;
                    in_stack_00000028 = in_stack_00000028 + 1;
                    *(puVar7 + *puVar11 * 0x10 + 8) = puVar11 + 2;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            puVar13 = puVar7 + 2;
            iVar17 = 0xf9;
            iVar8 = 0x100;
            puVar15 = puVar13;
            do {
                if (*puVar15 != 0) {
                    iVar17 = iVar17 + *puVar15 + ((*puVar15 + 0xfe) / 0xff) * 2;
                }
                puVar15 = puVar15 + 8;
                iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            iVar8 = -0x7ffffffffffffff7;
            piVar9 = fcn.0001466c(uVar18,iVar17);
            if (piVar9 != NULL) {
                arg2_00 = arg1 + 8;
                *piVar9 = iVar17;
                piVar9[1] = 0;
                if (piVar9 + 2 != arg2_00) {
                    section..text(piVar9 + 2,arg2_00,0xec);
                }
                piVar9[0x3d] = 0x63538263;
                arg1_00 = piVar9 + 0x3e;
                do {
                    if (*puVar13 != 0) {
                        arg2_00 = CONCAT71(arg2_00 >> 8,puVar13[-1]);
                        arg1_00 = fcn.00014368(arg1_00,arg2_00,*puVar13,*(puVar13 + 3));
                    }
                    puVar13 = puVar13 + 8;
                    iVar16 = iVar16 + -1;
                } while (iVar16 != 0);
                *arg1_00 = 0xff;
                iVar8 = 0;
                piVar9[1] = (arg1_00 - piVar9) + -7;
                *in_stack_00000030 = piVar9;
            }
        }
        if (puStack_28 != NULL) {
            (**(*0x17948 + 0x48))(puStack_28);
        }
        (**(*0x17948 + 0x48))(puVar7);
    }
    return iVar8;
}


/* fcn.00015330 @ 0x15330 */

int64_t fcn.00015330(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.0001528c(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001466c();
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
        (**(*0x17948 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.000157dc @ 0x157dc */

int64_t fcn.000157dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t auStackX_18 [4];
    
    uVar2 = *(arg1 + 0x84);
    uVar6 = 0;
    uVar5 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    if (uVar2 != 0) {
        if (uVar2 - 1 < uVar2) {
            fcn.00015460(arg1,uVar2 - 1,auStackX_18);
            uVar6 = auStackX_18[0];
        }
        if ((*(arg1 + 0x90 + uVar6 * 0x28) - *(arg1 + 0xa0 + uVar6 * 0x28) < uVar5) && (uVar6 < *(arg1 + 0x80) - 1U)) {
            uVar6 = uVar6 + 1;
        }
    }
    uVar3 = uVar6;
    iVar4 = *(arg1 + 0xa0 + uVar3 * 0x28);
    if (*(arg1 + 0x90 + uVar3 * 0x28) - iVar4 < uVar5) {
        iVar4 = 0;
    }
    else {
        piVar1 = arg1 + 0xa8 + uVar3 * 0x28;
        *piVar1 = *piVar1 + arg2;
        *(arg1 + 0xa0 + uVar3 * 0x28) = uVar5 + iVar4;
        *(arg1 + 0x84) = *(arg1 + 0x84) + arg2;
    }
    return iVar4;
}


/* fcn.00015a04 @ 0x15a04 */

uint64_t fcn.00015a04(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *arg1_00;
    uint32_t uVar4;
    ulong *puVar5;
    uint32_t uVar6;
    ulong *puVar7;
    
    uVar4 = arg2;
    if ((uVar4 == 0) || (uVar6 = *(arg1 + 0x30), uVar6 == 0)) {
        uVar3 = 0;
    }
    else {
        if (uVar6 < uVar4) {
            uVar4 = uVar6;
        }
        arg1_00 = NULL;
        puVar7 = arg1 + 0x20;
        for (puVar5 = *puVar7; (puVar5 != puVar7 && (arg1_00 = puVar5 + -2, *(puVar5 + 0x74) == 0)); puVar5 = *puVar5)
        {
        }
        uVar6 = *(arg1_00 + 0x84);
        if (uVar4 < uVar6) {
            uVar3 = fcn.00015894(arg1_00,0,uVar4,arg3);
        }
        else {
            fcn.00015894(arg1_00,0,uVar6,arg3);
            puVar5 = *puVar5;
            arg3 = arg3 + uVar6;
            uVar4 = uVar4 - uVar6;
            while( true ) {
                if ((uVar4 == 0) || (puVar5 == puVar7)) goto code_r0x00015ace;
                uVar2 = *(puVar5 + 0x74);
                if (uVar4 <= uVar2) break;
                uVar4 = uVar4 - uVar2;
                uVar6 = uVar6 + uVar2;
                fcn.00015894(puVar5 + -2,0,uVar2,arg3);
                puVar1 = puVar5 + 0x74;
                puVar5 = *puVar5;
                arg3 = arg3 + *puVar1;
            }
            fcn.00015894(puVar5 + -2,0,uVar4,arg3);
            uVar6 = uVar6 + uVar4;
code_r0x00015ace:
            uVar3 = uVar6;
        }
    }
    return uVar3;
}


/* fcn.00015af0 @ 0x15af0 */

void fcn.00015af0(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar3 = *(arg1 + 0x20);
    piVar1 = *piVar3;
    while (piVar2 = piVar1, piVar3 != arg1 + 0x20) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        fcn.00015434(piVar3 + -2);
        piVar1 = *piVar2;
        piVar3 = piVar2;
    }
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x30) = 0;
    return;
}


/* fcn.00013564 @ 0x13564 */

int64_t fcn.00013564(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    
    iVar1 = fcn.00016224(*(*(arg1 + 0x68) + 0x20),*(*(arg1 + 0x68) + 0x28),0x133dc);
    *(arg1 + 0x90) = iVar1;
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        iVar1 = (**(*0x17948 + 0x118))
                          (*(iVar1 + 0x38),0x16810,auStackX_8,*(*(arg1 + 0x68) + 0x28),*(arg1 + 0x60),8);
        if (iVar1 < 0) {
            fcn.00016408(*(arg1 + 0x90));
            *(arg1 + 0x90) = 0;
        }
    }
    return iVar1;
}


/* fcn.00013eb8 @ 0x13eb8 */

//WARNING: Removing unreachable block (ram,0x00013f0e)
//WARNING: Removing unreachable block (ram,0x00013f35)

int64_t fcn.00013eb8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = fcn.00013e04(arg1 + 0xf8,*(arg1 + 4) - 0xf0,arg2,arg3);
    if (-1 < iVar1) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00014c28 @ 0x14c28 */

uint fcn.00014c28(uint32_t arg1)

{
    uint in_register_0000000c;
    uchar auStackX_8 [32];
    
    if (auStackX_8 != CONCAT44(in_register_0000000c,arg1)) {
        section..text(auStackX_8,arg1,4);
    }
    return CONCAT22(auStackX_8._0_4_ << 8 | auStackX_8._0_4_ >> 8,
                    SUB42(auStackX_8._0_4_,2) << 8 | SUB42(auStackX_8._0_4_,2) >> 8);
}


/* fcn.00013e04 @ 0x13e04 */

ulong fcn.00013e04(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *in_stack_00000028;
    
    iVar3 = 0;
    if (0 < arg2) {
        do {
            cVar1 = *(iVar3 + arg1);
            if (cVar1 == '\0') {
                iVar3 = iVar3 + 1;
            }
            else {
                if (cVar1 == -1) {
                    return 0;
                }
                if (iVar3 + 1 == arg2) {
                    return 0x8000000000000002;
                }
                uVar2 = *(iVar3 + 1 + arg1);
                iVar4 = iVar3 + 2;
                iVar3 = iVar4 + uVar2;
                if (arg2 < iVar3) {
                    return 0x8000000000000002;
                }
                if ((cVar1 == '4') && (in_stack_00000028 != NULL)) {
                    if (uVar2 != 1) {
                        return 0x8000000000000002;
                    }
                    *in_stack_00000028 = *(iVar4 + arg1);
                }
                if ((arg3 != 0) && (iVar4 = (*arg3)(cVar1,uVar2,iVar4 + arg1,arg4), iVar4 < 0)) {
                    return 0x8000000000000002;
                }
            }
        } while (iVar3 < arg2);
    }
    return 0x8000000000000002;
}


/* fcn.00014014 @ 0x14014 */

int64_t fcn.00014014(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int64_t iVar1;
    int16_t *piVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    arg3_00 = fcn.0001469c(0x400);
    iVar4 = 0;
    if (arg3_00 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        iVar1 = fcn.00013eb8(arg1,0x13f6c,arg3_00);
        if (-1 < iVar1) {
            uVar3 = 0;
            piVar2 = arg3_00 + 2;
            iVar5 = 0x100;
            do {
                if (*piVar2 != 0) {
                    uVar3 = uVar3 + *piVar2;
                    *(piVar2 + -1) = iVar4;
                    *piVar2 = uVar3 - *piVar2;
                    iVar4 = iVar4 + 1;
                }
                piVar2 = piVar2 + 2;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            *arg2 = iVar4;
            *arg3 = 0;
            if (iVar4 != 0) {
                iVar5 = fcn.0001469c(uVar3 + iVar4 * 0x10);
                if (iVar5 == 0) {
                    iVar1 = -0x7ffffffffffffff7;
                }
                else {
                    iStack_28 = iVar5 + iVar4 * 0x10;
                    iStack_38 = arg3_00;
                    iStack_30 = iVar5;
                    iVar1 = fcn.00013eb8(arg1,0x13f7c,&iStack_38);
                    if (iVar1 < 0) {
                        (**(*0x17948 + 0x48))(iVar5);
                    }
                    else {
                        *arg3 = iVar5;
                    }
                }
            }
        }
        (**(*0x17948 + 0x48))(arg3_00);
    }
    return iVar1;
}


/* fcn.00013d50 @ 0x13d50 */

ulong fcn.00013d50(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uint uVar3;
    uint32_t arg1_00;
    uint32_t uVar4;
    bool bVar5;
    bool bVar6;
    
    uVar4 = arg1 & 0xff;
    arg1_00 = arg2;
    if (uVar4 == 1) {
        uVar3 = fcn.00014c28(arg1_00);
        *arg3 = uVar3;
    }
    else if (uVar4 == 3) {
        uVar3 = fcn.00014c28(arg1_00);
        *(arg3 + 4) = uVar3;
    }
    else if (uVar4 == 0x33) {
        uVar3 = fcn.00014c28(arg1_00);
        *(arg3 + 0x10) = uVar3;
    }
    else {
        if (uVar4 == 0x34) {
            cVar1 = *arg2;
            *(arg3 + 9) = cVar1;
            uVar2 = cVar1 - 1;
            bVar5 = uVar2 < 2;
            bVar6 = uVar2 == 2;
        }
        else {
            if (uVar4 != 0x35) {
                if (uVar4 == 0x36) {
                    uVar3 = fcn.00014c28(arg1_00);
                    *(arg3 + 0xc) = uVar3;
                    return 0;
                }
                if (uVar4 != 0x3a) {
                    if (uVar4 != 0x3b) {
                        return 0;
                    }
                    uVar3 = fcn.00014c28(arg1_00);
                    *(arg3 + 0x18) = uVar3;
                    return 0;
                }
                uVar3 = fcn.00014c28(arg1_00);
                *(arg3 + 0x14) = uVar3;
                return 0;
            }
            cVar1 = *arg2;
            *(arg3 + 8) = cVar1;
            uVar2 = cVar1 - 1;
            bVar5 = uVar2 < 8;
            bVar6 = uVar2 == 8;
        }
        if (!bVar5 && !bVar6) {
            return 0x8000000000000002;
        }
    }
    return 0;
}


/* fcn.00014638 @ 0x14638 */

int64_t fcn.00014638(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.00014708 @ 0x14708 */

ulong fcn.00014708(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    cVar1 = *arg1;
    do {
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        iVar3 = 0;
        while ((cVar1 != '\0' && (cVar1 != ';'))) {
            iVar3 = iVar3 + 1;
            cVar1 = *(arg1 + iVar3);
        }
        iVar2 = fcn.00014638(arg1,arg2,iVar3);
        if ((iVar2 == 0) && (*(iVar3 + arg2) == '\0')) {
            return 0;
        }
        arg1 = arg1 + iVar3;
        cVar1 = *arg1;
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar1 != ';') break;
            arg1 = arg1 + 1;
            cVar1 = *arg1;
        } while (cVar1 != '\0');
        cVar1 = *arg1;
    } while( true );
}


/* fcn.000146c8 @ 0x146c8 */

void fcn.000146c8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001466c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000166d0 @ 0x166d0 */

ulong fcn.000166d0(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x17948 + 0x98))(param_1,92000,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00014d7c @ 0x14d7c */

int64_t fcn.00014d7c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x17948 + 0x98))(arg1,0x16770,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.000166d0(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x17948 + 0xb8))(0x16770,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x17948 + 0x98))(iStackX_20,0x16770,&uStackX_18), -1 < iVar1)) {
                if (arg2 != 0) {
                    *arg2 = uStackX_18;
                }
                return iStackX_20;
            }
        }
        arg1 = 0;
    }
    else if (arg2 != 0) {
        *arg2 = uStackX_18;
    }
    return arg1;
}


/* fcn.00014e44 @ 0x14e44 */

int64_t fcn.00014e44(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar uVar9;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    
    iVar7 = 0;
    iStackX_20 = 0;
    iVar5 = fcn.00014d7c(arg1,&iStackX_20);
    iVar8 = iStackX_20;
    if (iVar5 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*(*(iStackX_20 + 0x78) + 0x28b) == '\0') {
        return -0x7ffffffffffffffd;
    }
    iVar5 = iStackX_20;
    iVar6 = (**(iStackX_20 + 0x58))(iStackX_20,auStackX_18,0);
    if (iVar6 < 0) {
        return iVar6;
    }
    puVar4 = *(iVar8 + 0x78);
    if (puVar4[0xa3] == '\0') {
        uVar1 = *puVar4;
        if (2 < uVar1) {
            return -0x7ffffffffffffff9;
        }
        if (uVar1 == 2) {
            uVar1 = puVar4[6];
            uVar2 = puVar4[7];
            uVar3 = puVar4[9];
            uVar9 = 1;
            if ((uVar3 != 0) && (iVar7 = fcn.000146c8(iVar5,uVar3 << 5,puVar4 + 10), uVar9 = 0, iVar7 == 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar5 = (**(iVar8 + 0x28))(iVar8);
            if ((((-1 < iVar5) && (iVar5 = (**(iVar8 + 0x10))(iVar8), -1 < iVar5)) &&
                (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) && (iVar5 = (**(iVar8 + 0x18))(iVar8,0,0), -1 < iVar5)
               ) {
                *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                iVar8 = (**(iVar8 + 0x30))(iVar8,uVar2,uVar1 ^ uVar2,uVar9,uVar3,iVar7);
                if (iVar7 != 0) {
                    (**(*0x17948 + 0x48))(iVar7);
                }
                return iVar8;
            }
        }
        else {
            if ((uVar1 != 0) || (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) {
                iVar5 = (**(iVar8 + 0x18))(iVar8,0,0);
                if (iVar5 < 0) {
                    iVar5 = -0x7ffffffffffffff9;
                }
                else {
                    *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                    (**(iVar8 + 0x28))(iVar8);
                }
                if (uVar1 != 0) {
                    return iVar5;
                }
            }
            (**(iVar8 + 0x10))(iVar8);
        }
        if (iVar7 != 0) {
            (**(*0x17948 + 0x48))(iVar7);
        }
        return iVar5;
    }
    *arg2 = 1;
    return 0;
}


/* fcn.0001528c @ 0x1528c */

uint * fcn.0001528c(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.0001469c((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x0001531e;
        puVar2 = fcn.0001469c(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x0001531e;
        }
        (**(*0x17948 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x0001531e:
    return puVar1;
}


/* fcn.00015460 @ 0x15460 */

int64_t fcn.00015460(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if (*(iVar2 + 0x80) != 0) {
        piVar5 = iVar2 + 0xa8;
        uVar6 = 0;
        do {
            iVar1 = *piVar5;
            if (arg2 < iVar1 + uVar6) {
                if (arg3 != 0) {
                    *arg3 = uVar4;
                }
                return (arg2 - uVar6) + *(iVar2 + 0x98 + uVar4 * 0x28);
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
            piVar5 = piVar5 + 10;
            uVar6 = iVar1 + uVar6;
        } while (uVar3 < *(iVar2 + 0x80));
    }
    return 0;
}


/* fcn.00014b00 @ 0x14b00 */

//WARNING: Variable defined which should be unmapped: var_20h

uint64_t * fcn.00014b00(uint32_t arg1)

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


/* fcn.00015b50 @ 0x15b50 */

void fcn.00015b50(int64_t arg1)

{
    char cVar1;
    
    cVar1 = *(*(arg1 + 8) + 0x20);
    if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
        (**(*0x17948 + 0x70))(*(arg1 + 0x28));
    }
    //WARNING: Could not recover jumptable at 0x00015b87. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x17948 + 0x48))(arg1);
    return;
}


/* fcn.00015768 @ 0x15768 */

ulong fcn.00015768(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00014d30 @ 0x14d30 */

void fcn.00014d30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x17948 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.000163b0 @ 0x163b0 */

void fcn.000163b0(int64_t arg1)

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


/* fcn.00015f84 @ 0x15f84 */

uint * fcn.00015f84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_50h,int64_t arg_58h)

{
    ulong *puVar1;
    char cVar2;
    int iVar3;
    uint16_t uVar4;
    uint *puVar5;
    uint *puVar6;
    int64_t iVar7;
    uint16_t uVar8;
    uint auStackX_8 [2];
    int64_t var_30h;
    ulong in_stack_00000030;
    
    puVar5 = fcn.0001466c(arg1,((*(arg2 + 0x80) - 1) + 10) * 0x10);
    if (puVar5 != NULL) {
        *puVar5 = 0x54504455;
        puVar6 = puVar5 + 2;
        *puVar6 = puVar6;
        *(puVar5 + 4) = puVar6;
        *(puVar5 + 8) = 0x12014;
        *(puVar5 + 0xc) = in_stack_00000030;
        *(puVar5 + 6) = arg1;
        *(puVar5 + 10) = arg2;
        var_30h._0_4_ = *(arg2 + 0x80);
        cVar2 = *(arg1 + 0x20);
        *(puVar5 + 0x1a) = 0x8000000000000006;
        if (cVar2 == '\x04') {
            iVar7 = (**(*0x17948 + 0x50))(0x200,0x10);
            if (-1 < iVar7) {
                puVar1 = puVar5 + 0x1e;
                *(puVar5 + 0x1c) = puVar1;
                *puVar1 = 0;
                *(puVar5 + 0x20) = 0;
                puVar5[0x22] = *(arg2 + 0x84);
                fcn.00015768(arg2,puVar5 + 0x24,&var_30h);
                puVar5[0x23] = var_30h;
                if (arg3 != 0) {
                    puVar6 = puVar5 + 0xf;
                    uVar8 = *arg3;
                    uVar4 = *arg3 >> 0x10;
                    auStackX_8[0] = CONCAT22(uVar8 << 8 | uVar8 >> 8,uVar4 << 8 | uVar4 >> 8);
                    if (puVar6 != auStackX_8) {
                        section..text(puVar6,auStackX_8,4);
                    }
                    uVar4 = *(arg3 + 0x14) >> 0x10;
                    uVar8 = *(arg3 + 0x14);
                    auStackX_8[0] = CONCAT22(uVar8 << 8 | uVar8 >> 8,uVar4 << 8 | uVar4 >> 8);
                    if (puVar5 + 0x42 != auStackX_8) {
                        section..text(puVar5 + 0x42,auStackX_8,4);
                    }
                    *(puVar5 + 0x10) = *(arg3 + 0x10);
                    *(puVar5 + 0x46) = *(arg3 + 0x24);
                    *puVar1 = puVar6;
                }
                if ((arg4 != 0) && (iVar3 = *arg4, iVar3 != 0)) {
                    puVar6 = puVar5 + 0xe;
                    uVar4 = iVar3 >> 0x10;
                    auStackX_8[0] = CONCAT22(iVar3 << 8 | iVar3 >> 8,uVar4 << 8 | uVar4 >> 8);
                    if (puVar6 != auStackX_8) {
                        section..text(puVar6,auStackX_8,4);
                    }
                    *(puVar5 + 0x20) = puVar6;
                }
                return puVar5;
            }
        }
        else {
            iVar7 = (**(*0x17948 + 0x50))(0x200,0x10,0x15bf4,puVar5,puVar5 + 0x18);
            if (-1 < iVar7) {
                puVar1 = puVar5 + 0x1e;
                *(puVar5 + 0x1c) = puVar1;
                *puVar1 = 0;
                puVar5[0x20] = *(arg2 + 0x84);
                fcn.00015768(arg2,puVar5 + 0x22,&var_30h);
                puVar5[0x21] = var_30h;
                if (arg3 == 0) {
                    return puVar5;
                }
                puVar6 = puVar5 + 0xf;
                if (puVar6 != arg3) {
                    section..text(puVar6,arg3,0x10);
                }
                if (puVar5 + 0x4e != arg3 + 0x14) {
                    section..text(puVar5 + 0x4e,arg3 + 0x14,0x10);
                }
                *(puVar5 + 0x13) = *(arg3 + 0x10);
                *(puVar5 + 0x5e) = *(arg3 + 0x24);
                *puVar1 = puVar6;
                return puVar5;
            }
        }
        (**(*0x17948 + 0x48))(puVar5);
    }
    return NULL;
}


/* fcn.00015ed0 @ 0x15ed0 */

uint * fcn.00015ed0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int64_t iVar2;
    
    puVar1 = fcn.0001466c(arg1,0x40);
    if (puVar1 != NULL) {
        puVar1[8] = 0;
        *puVar1 = 0x52504455;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 4) = arg2;
        *(puVar1 + 6) = arg3;
        *(puVar1 + 0xe) = 0;
        *(puVar1 + 0xc) = 0x8000000000000006;
        iVar2 = (**(*0x17948 + 0x50))(0x200,0x10,0x15eb4,puVar1,puVar1 + 10);
        if (-1 < iVar2) {
            return puVar1;
        }
        (**(*0x17948 + 0x48))(puVar1);
    }
    return NULL;
}


