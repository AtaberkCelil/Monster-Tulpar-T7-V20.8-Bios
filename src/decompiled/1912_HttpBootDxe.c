// decompiled by r2ghidra: 1912_HttpBootDxe.pe32
// functions: 131

/* entry0 @ 0x10508 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    fcn.00010550(arg1,in_RDX);
    arg2 = 0x1bc60;
    (**(*0x1d5f8 + 0x98))(arg1,0x1bc60,aiStackX_18);
    *(aiStackX_18[0] + 0x58) = 0x10384;
    fcn.00010638(arg1,arg2);
    return;
}


/* fcn.00010550 @ 0x10550 */

ulong fcn.00010550(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    
    iVar1 = *(arg1 + 0x60);
    *0x1d600 = *(arg1 + 0x58);
    *0x1d5f0 = arg1;
    *0x1d5f8 = iVar1;
    fcn.000189a0();
    (**(iVar1 + 0x140))(0x1be00,0,0x1d620);
    (**(*0x1d5f8 + 0x140))(0x1bde0,0,0x1d638);
    (**(*0x1d5f8 + 0x140))(0x1bd80,0,0x1d618);
    (**(*0x1d5f8 + 0x140))(0x1c160,0,0x1d628);
    (**(*0x1d5f8 + 0x140))(0x1bdc0,0,0x1d630);
    (**(*0x1d5f8 + 0x140))(0x1c0f0,0);
    uVar2 = 0;
    if (*(*0x1d5f0 + 0x68) != 0) {
        piVar3 = *(*0x1d5f0 + 0x70);
        do {
            if ((*0x1c100 == *piVar3) && (*0x1c108 == piVar3[1])) {
                *0x1d648 = (*(*0x1d5f0 + 0x70))[uVar2 * 3 + 2];
                return 0;
            }
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar2 < *(*0x1d5f0 + 0x68));
    }
    *0x1d648 = 0;
    return 0x800000000000000e;
}


/* fcn.00010638 @ 0x10638 */

int64_t fcn.00010638(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_1;
    ulong uStackX_10;
    ulong uStackX_18;
    char acStackX_20 [8];
    ulong auStack_18 [2];
    
    uStackX_18 = 8;
    uStackX_10 = arg2;
    iVar1 = (**(*0x1d600 + 0x48))(L"NetworkStackVar",0x1c130,0,&uStackX_18,acStackX_20);
    if ((iVar1 == 0) && (acStackX_20[0] == '\0')) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        auStack_18[0] = 8;
        noname_1 = 0x1c130;
        iVar1 = (**(*0x1d600 + 0x48))(L"NetworkStackVar",0x1c130,0,auStack_18,&uStackX_10);
        if (iVar1 == 0) {
            *0x1d662 = uStackX_10._6_1_;
            *0x1d661 = uStackX_10._7_1_;
            *0x1d660 = uStackX_10._5_1_;
        }
        else {
            *0x1d662 = 0;
            *0x1d661 = 0;
            *0x1d660 = 1;
        }
        iVar1 = fcn.00018354(arg1,noname_1,0x1c1a0,arg1);
        if (-1 < iVar1) {
            iVar1 = fcn.00018354(arg1,noname_1,0x1c170,0);
            if (iVar1 < 0) {
                (**(*0x1d5f8 + 0x150))(*0x1c1c8,0x1c0a0,0x1c1a0,0x1c0e0,0x1c200,0x1bcc0,0x1c1e8,0);
            }
        }
    }
    return iVar1;
}


/* fcn.000189a0 @ 0x189a0 */

int64_t fcn.000189a0(void)

{
    if (*0x1d610 == 0) {
        fcn.00017f74(0x1c070,0x1d610);
    }
    return *0x1d610;
}


/* fcn.00017f74 @ 0x17f74 */

ulong fcn.00017f74(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1d5f0;
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


/* fcn.00018354 @ 0x18354 */

void fcn.00018354(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    (**(*0x1d5f8 + 0x148))(arg2 + 0x28,0x1c0a0,arg2,0x1c0e0,0x1c200,0x1bcc0,0x1c1e8,0);
    return;
}


/* fcn.00018a68 @ 0x18a68 */

int64_t fcn.00018a68(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x1d5f8 + 0x98))(arg1,0x1bd70,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.00017f40(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x1d5f8 + 0xb8))(0x1bd70,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x1d5f8 + 0x98))(iStackX_20,0x1bd70,&uStackX_18), -1 < iVar1)) {
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


/* fcn.00018a1c @ 0x18a1c */

void fcn.00018a1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x1d5f8 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.0001aba0 @ 0x1aba0 */

void fcn.0001aba0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 != 0) {
        if (*(iVar2 + 0x38) != 0) {
            (**(*0x1d5f8 + 0x70))();
        }
        if (*(iVar2 + 0x78) != 0) {
            (**(*0x1d5f8 + 0x70))();
        }
        if (*(iVar2 + 0xc0) != 0) {
            (**(*0x1d5f8 + 0x70))();
        }
        iVar1 = *(iVar2 + 0x20);
        if (iVar1 != 0) {
            (**(iVar1 + 8))(iVar1,0);
            (**(*0x1d5f8 + 0x120))(*(iVar2 + 0x18),0x1bcd0,*(iVar2 + 8),*(iVar2 + 0x10));
        }
        fcn.00018a1c(*(iVar2 + 0x10),*(iVar2 + 8),0x1c060,*(iVar2 + 0x18));
    }
    return;
}


/* fcn.0001b87c @ 0x1b87c */

ulong fcn.0001b87c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    char *pcStackX_10;
    int64_t var_bp_20h;
    uchar auStack_28 [8];
    int16_t var_18h;
    int16_t var_16h;
    
    iVar2 = 0;
    var_bp_20h = 0;
    if (arg1 != 0) {
        iStackX_8 = arg1;
        pcStackX_10 = arg2;
        iVar1 = (**(*0x1d5f8 + 0x98))(arg1,0x1bd50,&pcStackX_10);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1d5f8 + 0xb8))(0x1bda0,&pcStackX_10,&iStackX_8);
            if (iVar1 < 0) {
                while( true ) {
                    if ((*pcStackX_10 == '\x7f') && (pcStackX_10[1] == -1)) {
                        return 0;
                    }
                    if ((*pcStackX_10 == '\x03') && (pcStackX_10[1] == '\x05')) break;
                    pcStackX_10 = pcStackX_10 + *(pcStackX_10 + 2);
                }
                return 1;
            }
            iVar1 = (**(*0x1d5f8 + 0x98))(iStackX_8,0x1bda0,&var_bp_20h);
            if (((-1 < iVar1) && (iVar1 = (**(var_bp_20h + 0x30))(var_bp_20h,auStack_28), -1 < iVar1)) &&
               (*0x1c1d0 != -1)) {
                iVar1 = iVar2;
                do {
                    if (*(iVar2 + 0x1c1d2) == -1) {
                        return 0;
                    }
                    if ((*(iVar2 + 0x1c1d0) == var_18h) && (*(iVar2 + 0x1c1d2) == var_16h)) {
                        return 1;
                    }
                    iVar1 = iVar1 + 1;
                    iVar2 = iVar1 * 4;
                } while (*(iVar2 + 0x1c1d0) != -1);
            }
        }
    }
    return 0;
}


/* fcn.00017c5c @ 0x17c5c */

void fcn.00017c5c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00017c2c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00017c2c @ 0x17c2c */

ulong fcn.00017c2c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1d5f8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.0001333c @ 0x1333c */

int64_t fcn.0001333c(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    int64_t *arg3;
    uchar *arg3_00;
    int64_t arg4;
    int64_t iStackX_8;
    uint uStack_128;
    ulong uStack_124;
    ulong uStack_11c;
    uchar auStack_108 [256];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar4 + 0x18c) != '\0') {
        return 0;
    }
    *(iVar4 + 0x188) = 0x63664248;
    fcn.000102c0(&uStack_128,0x14);
    uStack_124 = *0x1c110;
    uStack_11c = *0x1c118;
    uStack_128 = 0x140401;
    iVar1 = fcn.00017e78(*(iVar4 + 0x140),&uStack_128);
    *(iVar4 + 0x198) = iVar1;
    if (iVar1 != 0) {
        *(iVar4 + 0x1a8) = 0x12f54;
        iVar2 = *0x1d5f8;
        *(iVar4 + 0x1b0) = 0x13118;
        *(iVar4 + 0x1b8) = 0x131d0;
        iVar1 = (**(iVar2 + 0x148))(iVar4 + 400,0x1bd50,iVar1,0x1c050,iVar4 + 0x1a8,0);
        if (iVar1 < 0) goto code_r0x000133ca;
        iVar1 = *(iVar4 + 400);
        arg4 = 0x1c2b0;
        iVar2 = fcn.00019634(0x1bd20,iVar1,0x1be20,0x1c2b0);
        *(iVar4 + 0x1a0) = iVar2;
        if (iVar2 != 0) {
            arg3 = &iStackX_8;
            iVar1 = fcn.00018c7c(*(iVar4 + 8),iVar1,arg3);
            if (-1 < iVar1) {
                iVar1 = fcn.00019460(*(iVar4 + 0x1a0),3,arg3,arg4);
                fcn.00016cac(auStack_108,0x80,0x1cdf8,iVar1);
                arg3_00 = auStack_108;
                fcn.00019348(*(iVar4 + 0x1a0),3,arg3_00);
                uVar3 = fcn.00019460(*(iVar4 + 0x1a0),2,arg3_00,iVar1);
                fcn.00016cac(auStack_108,0x80,0x1ce10,iStackX_8);
                fcn.00019348(*(iVar4 + 0x1a0),2,auStack_108);
                (**(*0x1d5f8 + 0x48))(iStackX_8);
                (**(*0x1d5f8 + 0x48))(uVar3);
                *(iVar4 + 0x18c) = 1;
                return 0;
            }
            goto code_r0x000133ca;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x000133ca:
    fcn.00013558(arg1);
    return iVar1;
}


/* fcn.000189d0 @ 0x189d0 */

void fcn.000189d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *apuStack_18 [2];
    
    iVar1 = (**(*0x1d5f8 + 0x118))(arg1,arg3,apuStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**apuStack_18[0])(apuStack_18[0],arg4);
    }
    return;
}


/* fcn.00017e78 @ 0x17e78 */

ulong fcn.00017e78(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x1d390;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        uVar2 = fcn.00017d74(iVar3);
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00017c2c(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            arg1_00 = *(iVar3 + 2) + iVar3;
            if (arg1_00 != 0x1d390) {
                section..text(arg1_00,0x1d390,4);
            }
            uVar2 = fcn.00017d9c(arg1,iVar3);
            (**(*0x1d5f8 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 47584 named .text
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


/* fcn.000108c0 @ 0x108c0 */

void fcn.000108c0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*(arg2 + 0x28) != 0) {
        (**(*0x1d5f8 + 0x120))(*(arg2 + 0x28),0x1c120,*(arg1 + 0x28),*(arg2 + 8));
        fcn.00018a1c(*(arg2 + 8),*(arg1 + 0x28),0x1bd40,*(arg2 + 0x28));
    }
    if ((*(arg2 + 0x18) == 0) && (*(arg2 + 0x108) != '\0')) {
        fcn.0001aba0(arg2 + 0x38);
        *(arg2 + 0x108) = 0;
    }
    if (*(arg2 + 0x10) != 0) {
        (**(*0x1d5f8 + 0x120))(*(arg2 + 8),0x1c110,*(arg1 + 0x28),*(*(arg2 + 0x10) + 8));
        iVar1 = *(arg2 + 0x10);
        (**(*0x1d5f8 + 0x150))(*(iVar1 + 8),0x1bd00,iVar1 + 0x18,0x1bd50,*(iVar1 + 0x20),0);
        (**(*0x1d5f8 + 0x48))(*(arg2 + 0x10));
        *(arg2 + 0x10) = 0;
    }
    return;
}


/* fcn.00013558 @ 0x13558 */

ulong fcn.00013558(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar1 + 0x10) == 0) && (*(iVar1 + 0x18) == 0)) {
        if (*(iVar1 + 400) != 0) {
            (**(*0x1d5f8 + 0x150))(*(iVar1 + 400),0x1bd50,*(iVar1 + 0x198),0x1c050,iVar1 + 0x1a8,0);
            *(iVar1 + 400) = 0;
        }
        if (*(iVar1 + 0x198) != 0) {
            (**(*0x1d5f8 + 0x48))();
            *(iVar1 + 0x198) = 0;
        }
        if (*(iVar1 + 0x1a0) != 0) {
            (**(*0x1d638 + 8))(*0x1d638);
            *(iVar1 + 0x1a0) = 0;
        }
    }
    return 0;
}


/* fcn.00012370 @ 0x12370 */

int64_t fcn.00012370(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uchar auStack_18 [16];
    
    iVar1 = (**(*0x1d5f8 + 0x128))(arg1,0x1bcd0,auStackX_18,auStackX_10);
    if ((-1 < iVar1) && (iVar1 = fcn.00019218(auStackX_18,auStackX_10), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1d5f8 + 0x128))(arg1,0x1c120,auStack_18,auStackX_20);
    if ((-1 < iVar1) && (iVar1 = fcn.00019218(auStack_18,auStackX_20), iVar1 != 0)) {
        return iVar1;
    }
    return 0;
}


/* fcn.00011d68 @ 0x11d68 */

ulong fcn.00011d68(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t *piVar2;
    int64_t iVar3;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else if (*(arg1_00 + 0x459) == '\0') {
        uVar1 = 0x8000000000000013;
    }
    else {
        if (*(arg1_00 + 0x108) != '\0') {
            fcn.0001aba0(arg1 + 0x38);
            *(arg1_00 + 0x108) = 0;
        }
        iVar3 = 0x10;
        *(arg1_00 + 0x459) = 0;
        fcn.000102c0(arg1_00 + 0x45c,0x10);
        fcn.000102c0(arg1_00 + 0x46c,0x10);
        fcn.000102c0(arg1_00 + 0x47c,0x10);
        *(arg1_00 + 0x49c) = 0;
        *(arg1_00 + 0x4b0) = 0;
        *(arg1_00 + 0x4b8) = 0;
        *(arg1_00 + 0x4c0) = 0;
        *(arg1_00 + 0x4f0) = 0;
        *(arg1_00 + 0x4f4) = 8;
        if (*(arg1_00 + 0x458) == '\0') {
            (**(*(arg1_00 + 0x130) + 0x28))(*(arg1_00 + 0x130));
            (**(*(arg1_00 + 0x130) + 8))(*(arg1_00 + 0x130),0);
            piVar2 = arg1_00 + 0xac8;
            do {
                if (*piVar2 != 0) {
                    (**(*0x1d5f8 + 0x48))();
                }
                piVar2 = piVar2 + 0xc2;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        else {
            (**(*(arg1_00 + 0x138) + 0x38))(*(arg1_00 + 0x138));
            (**(*(arg1_00 + 0x138) + 8))(*(arg1_00 + 0x138),0);
            piVar2 = arg1_00 + 0xaf0;
            do {
                if (*piVar2 != 0) {
                    (**(*0x1d5f8 + 0x48))();
                }
                piVar2 = piVar2 + 0xc2;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        if (*(arg1_00 + 0x4a8) != 0) {
            (**(*0x1d5f8 + 0x48))();
            *(arg1_00 + 0x4a8) = 0;
        }
        if (*(arg1_00 + 0x4d0) != 0) {
            (**(*0x1d5f8 + 0x48))();
            (**(*0x1d5f8 + 0x48))(*(arg1_00 + 0x4d8));
            *(arg1_00 + 0x4d0) = 0;
            *(arg1_00 + 0x4d8) = 0;
        }
        fcn.000102c0(arg1_00 + 0x4f8,0x6100);
        *(arg1_00 + 0x65f8) = 0;
        fcn.000102c0(arg1_00 + 0x65fc,0x20);
        fcn.000102c0(arg1_00 + 0x661c,0x200);
        fcn.00014180(arg1_00);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014180 @ 0x14180 */

void fcn.00014180(int64_t arg1)

{
    int64_t *arg1_00;
    int64_t *piVar1;
    
    arg1_00 = *(arg1 + 0x4e0);
    piVar1 = *arg1_00;
    while (arg1_00 != arg1 + 0x4e0) {
        *(*arg1_00 + 8) = arg1_00[1];
        *arg1_00[1] = *arg1_00;
        fcn.00014060(arg1_00);
        arg1_00 = piVar1;
        piVar1 = *piVar1;
    }
    return;
}


/* fcn.00010794 @ 0x10794 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00010794(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *apuStackX_8 [2];
    int64_t var_20h;
    uint64_t uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    uchar *puStack_28;
    ulong uStack_20;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar2 = fcn.00018a68(*(arg1 + 8),0);
    if (iVar2 != 0) {
        apuStackX_8[0] = NULL;
        iVar2 = (**(*0x1d5f8 + 0x98))(iVar2,0x1bcf0,apuStackX_8);
        if ((-1 < iVar2) && (apuStackX_8[0] != NULL)) {
            var_20h = 0;
            uStackX_20 = 0;
            iVar2 = (*apuStackX_8[0][2])(apuStackX_8[0],&var_20h,&uStackX_20);
            if ((-1 < iVar2) && (var_20h != 0)) {
                bVar1 = false;
                uVar4 = 0;
                if (uStackX_20 != 0) {
                    piVar3 = var_20h;
                    do {
                        if ((*piVar3 == *0x1bc70) && (piVar3[1] == *0x1bc78)) {
                            bVar1 = true;
                            break;
                        }
                        uVar4 = uVar4 + 1;
                        piVar3 = piVar3 + 2;
                    } while (uVar4 < uStackX_20);
                }
                (**(*0x1d5f8 + 0x48))();
                if (!bVar1) {
                    return 0x800000000000000e;
                }
                puStack_28 = NULL;
                uStack_20 = 0;
                iVar2 = (**apuStackX_8[0])(apuStackX_8[0],0x1bc70,&puStack_28,&uStack_20);
                if ((-1 < iVar2) && (puStack_28 != NULL)) {
                    *arg2 = *puStack_28;
                    (**(*0x1d5f8 + 0x48))();
                    return 0;
                }
            }
            (**(*0x1d5f8 + 0x48))();
        }
    }
    return 0x800000000000000e;
}


/* fcn.000109ac @ 0x109ac */

void fcn.000109ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*(arg2 + 0x20) != 0) {
        (**(*0x1d5f8 + 0x120))(*(arg2 + 0x20),0x1c0b0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.00018a1c(*(arg2 + 8),*(arg1 + 0x28),0x1be10,*(arg2 + 0x20));
    }
    if (*(arg2 + 0x30) != 0) {
        (**(*0x1d5f8 + 0x120))(*(arg2 + 0x30),0x1bd10,*(arg1 + 0x28),*(arg2 + 8));
        fcn.00018a1c(*(arg2 + 8),*(arg1 + 0x28),0x1bc80,*(arg2 + 0x30));
    }
    if ((*(arg2 + 0x10) == 0) && (*(arg2 + 0x108) != '\0')) {
        fcn.0001aba0(arg2 + 0x38);
        *(arg2 + 0x108) = 0;
    }
    if (*(arg2 + 0x18) != 0) {
        (**(*0x1d5f8 + 0x120))(*(arg2 + 8),0x1c110,*(arg1 + 0x28),*(*(arg2 + 0x18) + 8));
        iVar1 = *(arg2 + 0x18);
        (**(*0x1d5f8 + 0x150))(*(iVar1 + 8),0x1bd00,iVar1 + 0x18,0x1bd50,*(iVar1 + 0x20),0);
        (**(*0x1d5f8 + 0x48))(*(arg2 + 0x18));
        *(arg2 + 0x18) = 0;
    }
    return;
}


/* fcn.000123f4 @ 0x123f4 */

int64_t fcn.000123f4(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uchar auStack_18 [16];
    
    iVar1 = (**(*0x1d5f8 + 0x128))(arg1,0x1bcd0,auStackX_18,auStackX_10);
    if ((-1 < iVar1) && (iVar1 = fcn.00019218(auStackX_18,auStackX_10), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1d5f8 + 0x128))(arg1,0x1bd10,auStack_18,auStackX_20);
    if ((-1 < iVar1) && (iVar1 = fcn.00019218(auStack_18,auStackX_20), iVar1 != 0)) {
        return iVar1;
    }
    return 0;
}


/* fcn.00019ee8 @ 0x19ee8 */

int64_t fcn.00019ee8(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint32_t uVar1;
    uint16_t *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t arg2_00;
    uint32_t uVar5;
    uint64_t uVar6;
    uchar *puVar7;
    uchar uVar8;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        uVar4 = 0;
        puVar2 = fcn.00017c5c(0x44);
        if (puVar2 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            uVar5 = 8;
            uVar8 = 0;
            arg2_00 = 0;
            uVar6 = 8;
            for (puVar7 = arg1; puVar7 < (arg2 & 0xffffffffU) + arg1; puVar7 = puVar7 + 1) {
                uVar4 = CONCAT71(uVar4 >> 8,*puVar7);
                uVar1 = fcn.00019dfc(uVar4,arg2_00);
                arg2_00 = uVar1;
                if (uVar1 < 9) {
                    if (uVar1 != 8) {
                        if (uVar1 == 1) {
                            uVar6 = 0;
                        }
                        else if (1 < uVar1) {
                            if (uVar1 < 5) goto code_r0x0001a009;
                            if (uVar1 != 5) {
                                if (uVar1 != 6) {
                                    if (uVar1 == 7) {
                                        uVar6 = 2;
                                    }
                                    goto code_r0x00019fda;
                                }
                                uVar8 = 1;
                            }
                            uVar6 = 1;
                        }
                        goto code_r0x00019fda;
                    }
                }
                else {
                    if (uVar1 == 9) {
                        uVar6 = 3;
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = uVar1 - 10;
                        if (uVar1 - 10 == 0) goto code_r0x0001a009;
                        uVar1 = uVar1 - 0xb;
                        uVar4 = uVar1;
                        if (uVar1 == 0) {
                            uVar6 = 4;
                        }
                        else if (uVar1 == 7) {
                            iVar3 = -0x7ffffffffffffffe;
                            goto code_r0x0001a02f;
                        }
                    }
code_r0x00019fda:
                    uVar1 = uVar6;
                    if (uVar1 == uVar5) {
                        *(puVar2 + (uVar6 & 0xffffffff) * 4 + 4) = *(puVar2 + (uVar6 & 0xffffffff) * 4 + 4) + 1;
                    }
                    else {
                        uVar4 = uVar6 & 0xffffffff;
                        *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
                        *(puVar2 + uVar4 * 4 + 2) = puVar7 - arg1;
                        (puVar2 + uVar4 * 4 + 4)[0] = 1;
                        (puVar2 + uVar4 * 4 + 4)[1] = 0;
                        uVar5 = uVar1;
                    }
                }
code_r0x0001a009:
            }
            if (((*puVar2 & 2) != 0) && (iVar3 = fcn.00019c88(arg1,CONCAT71(arg2_00 >> 8,uVar8),puVar2), iVar3 < 0))
            {
code_r0x0001a02f:
                (**(*0x1d5f8 + 0x48))(puVar2);
                return iVar3;
            }
            *arg3 = puVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00018434 @ 0x18434 */

void fcn.00018434(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.000183ac(arg1,*(*0x1d5f0 + 0x40),&iStackX_10);
    return;
}


/* fcn.000183ac @ 0x183ac */

int64_t fcn.000183ac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    arg1_00 = fcn.00017c2c(arg1,0x282);
    iVar1 = fcn.00016ea0(arg1_00,0x141,0x140,arg1,in_stack_00000038,in_stack_00000040);
    if ((arg2 != 0) && (iVar1 != 0)) {
        iVar2 = (**(arg2 + 8))(arg2,arg1_00);
        if (iVar2 < 0) {
            iVar1 = 0;
        }
    }
    (**(*0x1d5f8 + 0x48))(arg1_00);
    return iVar1;
}


/* fcn.00016ea0 @ 0x16ea0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00016ea0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00016eff;
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
code_r0x00016eff:
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
        uVar21 = fcn.000167b8(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00016534(arg4,0xf4241);
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
            pcVar8 = 0x1d00c;
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
code_r0x000172ba:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1d00c;
            }
            else {
                pcVar8 = 0x1d010;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00017051:
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
                    goto code_r0x000171f4;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x0001720b;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000171f4;
                        }
                        goto code_r0x0001720b;
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
code_r0x000171f4:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00017051;
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
                        goto code_r0x00017051;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x0001720b;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000171f4;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x0001720b:
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
                        fcn.00017c08(&var_68h_2,0x26,0,0x1cfa0);
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
                            goto code_r0x000172ba;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000174a3;
                        if (uStack_a8 == 0x58) goto code_r0x00017598;
                        if (uStack_a8 == 0x61) goto code_r0x000174ac;
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
                            goto code_r0x00017032;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001702e;
                        goto code_r0x000175af;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1d00c;
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
                goto code_r0x000177dc;
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
                            iVar12 = 0x1d0ab;
                            goto code_r0x0001755f;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001755f:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x000177dc;
                    }
                    fcn.00017c08(&var_68h_2,0x26,0,0x1d004);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000174a3:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000174ac:
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
                        goto code_r0x000177dc;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001702e;
                            goto code_r0x0001759c;
                        }
                        goto code_r0x000175a1;
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
                        goto code_r0x000177dc;
                    }
                    fcn.00017c08(&var_68h_2,0x26,0,0x1cfe8);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x000177dc;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00017598:
            uVar21 = uVar21 | 0x20;
code_r0x0001759c:
            uVar21 = uVar21 | 0x80;
code_r0x000175a1:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000175af:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000175f1;
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
code_r0x000175f1:
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
code_r0x00017679:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00017679;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar10 % uVar16];
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
code_r0x0001702e:
            pcVar8 = &uStack_a8;
code_r0x00017032:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x000177dc:
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
                arg1 = fcn.00016cdc(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00016cdc(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00016cdc(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00016cdc(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00018b30 @ 0x18b30 */

int64_t fcn.00018b30(int64_t arg1,int64_t arg2,uint32_t *arg3)

{
    int64_t iVar1;
    uchar *puVar2;
    uint64_t arg3_00;
    ulong uStackX_20;
    ulong *puStack_2b8;
    int64_t iStack_2b0;
    ulong *apuStack_2a8 [2];
    uchar auStack_298 [656];
    
    iStack_2b0 = 0;
    iVar1 = fcn.00018a68(arg1,&iStack_2b0);
    if (iVar1 == 0) {
        uStackX_20 = 0;
        iVar1 = (**(*0x1d5f8 + 0x98))(arg1,0x1c090,&puStack_2b8);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**puStack_2b8)(puStack_2b8,&uStackX_20);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*0x1d5f8 + 0x98))(uStackX_20,0x1c140,apuStack_2a8);
        if ((iVar1 < 0) ||
           ((iVar1 = (**apuStack_2a8[0])(apuStack_2a8[0],0,auStack_298), iVar1 < 0 && (iVar1 != -0x7fffffffffffffed))
           )) {
            (*puStack_2b8[1])(puStack_2b8,uStackX_20);
            return iVar1;
        }
        puVar2 = auStack_298;
        (*puStack_2b8[1])(puStack_2b8,uStackX_20);
    }
    else {
        puVar2 = *(iStack_2b0 + 0x78);
    }
    arg3_00 = *(puVar2 + 4);
    *arg3 = arg3_00;
    if ((arg3_00 != 0) && (arg2 != puVar2 + 0x228)) {
        section..text(arg2,puVar2 + 0x228,arg3_00);
    }
    return 0;
}


/* fcn.000184e8 @ 0x184e8 */

void fcn.000184e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.00018464(arg1,*(*0x1d5f0 + 0x40),&iStackX_10);
    return;
}


/* fcn.00018464 @ 0x18464 */

ulong fcn.00018464(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iVar2;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    arg1_00 = fcn.00017c2c(arg1,0x282);
    uVar1 = fcn.00016ea0(arg1_00,0x141,0x40,arg1,in_stack_00000038,in_stack_00000040);
    if (arg2 != 0) {
        iVar2 = (**(arg2 + 8))(arg2,arg1_00);
        if (iVar2 < 0) {
            uVar1 = 0;
        }
    }
    (**(*0x1d5f8 + 0x48))(arg1_00);
    return uVar1;
}


/* fcn.00011728 @ 0x11728 */

int64_t fcn.00011728(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong uStackX_8;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x458) == '\0') {
        iVar1 = *(iVar3 + 0x10);
    }
    else {
        iVar1 = *(iVar3 + 0x18);
    }
    uStackX_8 = *(iVar1 + 8);
    iVar1 = (**(*0x1d5f8 + 0x98))(uStackX_8,0x1c0c0,iVar3 + 0x160);
    if (iVar1 == -0x7ffffffffffffffd) {
        iVar1 = iVar3 + 0x168;
        if (iVar1 != 0x1c1e0) {
            section..text(iVar1,0x1c1e0,8);
        }
        iVar2 = (**(*0x1d5f8 + 0x80))(&uStackX_8,0x1c0c0,0,iVar1);
        if (iVar2 < 0) {
            return iVar2;
        }
        *(iVar3 + 0x160) = iVar1;
    }
    return 0;
}


/* fcn.000152f8 @ 0x152f8 */

//WARNING: Variable defined which should be unmapped: var_14h

uint64_t fcn.000152f8(int64_t arg1)

{
    uint32_t *arg1_00;
    ulong *puVar1;
    ulong *puVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t arg2;
    uint64_t arg2_00;
    uint *puVar6;
    uint64_t uVar7;
    uchar *arg3;
    uint32_t *arg4;
    uint32_t *arg1_01;
    uint32_t auStackX_8 [2];
    ulong uStackX_10;
    int64_t var_80h;
    uint32_t var_1f0h;
    int64_t var_1f8h;
    uint auStack_2c8 [2];
    ulong uStack_2c0;
    ulong uStack_2a0;
    int64_t iStack_298;
    uint uStack_290;
    uchar *puStack_288;
    uchar auStack_278 [80];
    uint32_t auStack_228 [10];
    uint32_t uStack_200;
    uint32_t auStack_1fc [5];
    uchar auStack_1e8 [128];
    uchar auStack_168 [288];
    int64_t var_40h;
    int64_t var_14h;
    
    puVar1 = *(arg1 + 0x120);
    arg4 = auStackX_8;
    puVar2 = *(arg1 + 0x130);
    uStackX_10 = 4;
    uVar4 = (*puVar1[1])(puVar1,1,&uStackX_10);
    uVar7 = 0;
    if (uVar4 < 0) {
        return uVar4;
    }
    if (auStackX_8[0] != 0) {
        arg4 = auStackX_8;
        auStackX_8[0] = 0;
        uVar4 = (**puVar1)(puVar1,1,4);
        if (uVar4 < 0) {
            return uVar4;
        }
    }
    arg3 = auStack_168;
    uVar3 = fcn.00014a1c(arg1,auStack_1e8,arg3);
    fcn.000102c0(auStack_2c8,0x48);
    uStack_2a0 = 0x151b8;
    auStack_2c8[0] = 4;
    uStack_2c0 = 0x1c298;
    iStack_298 = arg1;
    uStack_290 = uVar3;
    puStack_288 = auStack_1e8;
    uVar4 = (*puVar2[1])(puVar2,auStack_2c8);
    if (-1 < uVar4) {
        *(arg1 + 0x65f8) = 0;
        fcn.000102c0(arg1 + 0x65fc,0x20);
        fcn.000102c0(arg1 + 0x661c,0x200);
        uVar4 = (*puVar2[2])(puVar2,0);
        if ((-1 < uVar4) && (uVar4 = (**puVar2)(puVar2,auStack_278), -1 < uVar4)) {
            arg1_00 = arg1 + 0x45c;
            if (arg1_00 != auStack_228) {
                arg3 = 0x4;
                section..text(arg1_00,auStack_228,4);
            }
            if (arg1 + 0x46c != auStack_1fc) {
                arg3 = 0x4;
                section..text(arg1 + 0x46c,auStack_1fc,4);
            }
            arg1_01 = arg1 + 0x47c;
            if (arg1_01 != &uStack_200) {
                arg3 = 0x4;
                section..text(arg1_01,&uStack_200,4);
            }
            puVar1 = *(arg1 + 0x120);
            arg2 = 0x1d640;
            if (arg1_01 == 0x1d640) {
code_r0x000154e3:
                uVar4 = uVar7;
            }
            else {
                arg3 = 0x4;
                iVar5 = fcn.000102e0(arg1_01,0x1d640,4);
                if (iVar5 == 0) goto code_r0x000154e3;
                arg3 = 0x4;
                arg2 = 3;
                uVar4 = (**puVar1)(puVar1);
                arg4 = arg1_01;
                if (-1 < uVar4) goto code_r0x000154e3;
            }
            if (-1 < uVar4) {
                fcn.000184e8(0x1cf38,arg2,arg3,arg4);
                do {
                    arg2_00 = *(arg1_00 + uVar7);
                    fcn.000184e8(0x1c74c,arg2_00,arg3,arg4);
                    if (uVar7 < 3) {
                        fcn.000184e8(0x1c750,arg2_00,arg3,arg4);
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 4);
                fcn.000184e8(0x1c760,arg2_00,arg3,arg4);
                fcn.000102c0(auStack_2c8,0x48);
                puVar6 = auStack_2c8;
                goto code_r0x0001554c;
            }
        }
    }
    (*puVar2[5])(puVar2);
    puVar6 = NULL;
code_r0x0001554c:
    (*puVar2[1])(puVar2,puVar6);
    return uVar4;
}


/* fcn.000160cc @ 0x160cc */

int64_t fcn.000160cc(int64_t arg1)

{
    ulong *puVar1;
    uint uVar2;
    uint *puVar3;
    int64_t iVar4;
    uint32_t *arg2;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t *arg1_00;
    int64_t arg3;
    int64_t in_R9;
    int aiStackX_8 [2];
    int64_t var_170h;
    uint16_t uStack_248;
    ushort uStack_245;
    uchar uStack_243;
    uchar uStack_242;
    uint32_t uStack_240;
    int64_t iStack_238;
    int64_t iStack_230;
    ulong uStack_228;
    int64_t iStack_220;
    uint uStack_218;
    uchar *puStack_210;
    ushort uStack_208;
    uint32_t uStack_204;
    ulong uStack_200;
    ushort uStack_1f8;
    uint *puStack_1f0;
    uchar auStack_1e8 [128];
    uchar auStack_168 [224];
    int64_t var_80h;
    
    puVar1 = *(arg1 + 0x138);
    uVar2 = fcn.00015574(arg1,auStack_1e8,auStack_168);
    puVar3 = fcn.00017c5c(0x10);
    if (puVar3 == NULL) {
        return -0x7ffffffffffffff7;
    }
    fcn.000102c0(&iStack_238,0x10);
    fcn.000102c0(&uStack_228,0x40);
    uStack_200 = 0;
    puStack_210 = auStack_1e8;
    uStack_1f8 = 0;
    uStack_228 = 0x15a24;
    iStack_220 = arg1;
    uStack_218 = uVar2;
    (**(*0x1d600 + 0x18))(&uStack_248);
    (**(*0x1d5f8 + 0xf0))(aiStackX_8);
    uStack_204 = ((aiStackX_8[0] +
                  (CONCAT31(CONCAT21(uStack_245,uStack_243),uStack_242) ^ uStack_248 << 7 ^ uStack_240)) * 0x41c64e6d
                 + 0x3039) % 0xffffffff;
    uStack_208 = 3;
    *puVar3 = 4;
    puVar3[1] = 4;
    puVar3[3] = 0x3c;
    puVar3[2] = 0x20;
    puStack_1f0 = puVar3;
    iVar4 = (*puVar1[1])(puVar1,&uStack_228);
    (**(*0x1d5f8 + 0x48))(puVar3);
    if (-1 < iVar4) {
        *(arg1 + 0x65f8) = 0;
        *(arg1 + 0x4f0) = 0;
        fcn.000102c0(arg1 + 0x65fc,0x20);
        fcn.000102c0(arg1 + 0x661c,0x200);
        iVar4 = (*puVar1[2])(puVar1);
        if (-1 < iVar4) {
            arg3 = 0;
            iVar4 = (**puVar1)(puVar1,&iStack_238);
            if (-1 < iVar4) {
                arg1_00 = arg1 + 0x45c;
                arg2 = iStack_230 + 0x1c;
                if (arg1_00 != arg2) {
                    arg3 = 0x10;
                    section..text(arg1_00,arg2,0x10);
                }
                fcn.000184e8(0x1cf60,arg2,arg3,in_R9);
                uVar6 = 0;
                do {
                    if (*(uVar6 + arg1_00) != 0) {
                        arg2 = *(uVar6 + arg1_00);
                        fcn.000184e8(0x1c754,arg2,arg3,in_R9);
                    }
                    uVar5 = uVar6 + 1;
                    if (0xf < uVar5) break;
                    if (((*(uVar5 + arg1_00) & 0xf0) == 0) && (*(uVar6 + arg1_00) != '\0')) {
                        fcn.000184e8(0x1c758,arg2,arg3,in_R9);
                    }
                    arg2 = *(uVar5 + arg1_00);
                    fcn.000184e8(0x1c754,arg2,arg3,in_R9);
                    if (uVar5 < 0xf) {
                        fcn.000184e8(0x1c75c,arg2,arg3,in_R9);
                    }
                    uVar6 = uVar6 + 2;
                } while (uVar6 < 0x10);
                fcn.000184e8(0x1c760,arg2,arg3,in_R9);
                fcn.000102c0(&uStack_228,0x40);
                (*puVar1[1])(puVar1,&uStack_228);
                if (iStack_238 != 0) {
                    (**(*0x1d5f8 + 0x48))();
                }
                if (iStack_230 == 0) {
                    return iVar4;
                }
                (**(*0x1d5f8 + 0x48))();
                return iVar4;
            }
        }
    }
    (*puVar1[7])(puVar1);
    (*puVar1[1])(puVar1,0);
    return iVar4;
}


/* fcn.00013970 @ 0x13970 */

int64_t fcn.00013970(int64_t arg1)

{
    int16_t *arg3;
    uint32_t *arg2;
    int64_t iVar1;
    uint32_t uVar2;
    char *arg1_00;
    uint32_t *arg1_01;
    int64_t in_RDX;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t in_R8;
    int64_t in_R9;
    
    uVar3 = 0;
    iVar4 = (*(arg1 + 0x4f0) - 1) * 0x610 + arg1;
    if (*(arg1 + 0x4d0) == 0) {
        if (*(iVar4 + 0xac0) < 3) {
            in_RDX = iVar4 + 0x4f8;
        }
        else {
            in_RDX = arg1 + 0x4f8 + *(*(arg1 + 0x4f4) * 0x40 + 0x661c + arg1) * 0x610;
        }
        *(arg1 + 0x4b8) = *(in_RDX + 0x5d0);
        *(arg1 + 0x4b0) = *(in_RDX + 0x600) + 2;
    }
    else {
        *(arg1 + 0x4b8) = *(arg1 + 0x4d8);
        *(arg1 + 0x4b0) = *(arg1 + 0x4d0);
    }
    iVar1 = fcn.00012a14(*(arg1 + 0x4b0));
    if (iVar1 < 0) {
        if (iVar1 == -0x7ffffffffffffffe) {
            arg1_00 = "\n  Error: Invalid URI address.\n";
        }
        else {
            if (iVar1 != -0x7ffffffffffffff1) {
                return iVar1;
            }
            arg1_00 = "\n  Error: Access forbidden, only HTTPS connection is allowed.\n";
        }
        fcn.000184e8(arg1_00,in_RDX,in_R8,in_R9);
        return iVar1;
    }
    if (*(iVar4 + 0xac0) - 1U < 3) {
        iVar4 = *(iVar4 + 0xb00);
        uVar2 = *(iVar4 + 1) >> 2;
        *(arg1 + 0x4a0) = uVar2;
        iVar1 = fcn.00017c5c(uVar2 << 4);
        *(arg1 + 0x4a8) = iVar1;
        if (iVar1 == 0) {
            return -0x7ffffffffffffff7;
        }
        if (*(arg1 + 0x4a0) != 0) {
            do {
                arg2 = iVar4 + 2 + uVar3 * 4;
                arg1_01 = uVar3 * 0x10 + *(arg1 + 0x4a8);
                if (arg1_01 != arg2) {
                    section..text(arg1_01,arg2,4);
                }
                uVar2 = uVar3 + 1;
                uVar3 = uVar2;
            } while (uVar2 < *(arg1 + 0x4a0));
        }
        iVar4 = (***(arg1 + 0x120))(*(arg1 + 0x120),4,*(iVar4 + 1),iVar4 + 2);
        if (iVar4 < 0) {
            iVar1 = *(arg1 + 0x4a8);
            goto code_r0x00013b5a;
        }
    }
    arg3 = arg1 + 0x49c;
    iVar4 = fcn.0001a254(*(arg1 + 0x4b0),*(arg1 + 0x4b8),arg3);
    if ((iVar4 < 0) || (*arg3 == 0)) {
        *arg3 = 0x50;
    }
    iVar4 = fcn.00013608(arg1);
    if (-1 < iVar4) {
        return iVar4;
    }
    iVar1 = *(arg1 + 0x4a8);
    if (iVar1 == 0) {
        return iVar4;
    }
code_r0x00013b5a:
    (**(*0x1d5f8 + 0x48))(iVar1);
    *(arg1 + 0x4a8) = 0;
    return iVar4;
}


/* fcn.00013b84 @ 0x13b84 */

int64_t fcn.00013b84(int64_t arg1)

{
    int16_t *arg3;
    char cVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    int64_t in_RDX;
    uint32_t *arg2;
    int64_t arg2_00;
    char *pcVar8;
    int64_t iVar9;
    int64_t in_R8;
    int64_t in_R9;
    char *pcStackX_8;
    uint32_t auStack_28 [4];
    
    pcVar5 = NULL;
    pcStackX_8 = NULL;
    iVar9 = (*(arg1 + 0x4f0) - 1) * 0x610 + arg1;
    if (*(arg1 + 0x4d0) == 0) {
        if (*(iVar9 + 0xac0) < 3) {
            in_RDX = iVar9 + 0x4f8;
        }
        else {
            in_RDX = arg1 + 0x4f8 + *(*(arg1 + 0x4f4) * 0x40 + 0x661c + arg1) * 0x610;
        }
        *(arg1 + 0x4b8) = *(in_RDX + 0x5f8);
        *(arg1 + 0x4b0) = *(in_RDX + 0x5d8) + 4;
    }
    else {
        *(arg1 + 0x4b8) = *(arg1 + 0x4d8);
        *(arg1 + 0x4b0) = *(arg1 + 0x4d0);
    }
    iVar2 = fcn.00012a14(*(arg1 + 0x4b0));
    if (iVar2 < 0) {
        if (iVar2 == -0x7ffffffffffffffe) {
            pcVar5 = "\n  Error: Invalid URI address.\n";
        }
        else {
            if (iVar2 != -0x7ffffffffffffff1) {
                return iVar2;
            }
            pcVar5 = "\n  Error: Access forbidden, only HTTPS connection is allowed.\n";
        }
        fcn.000184e8(pcVar5,in_RDX,in_R8,in_R9);
        return iVar2;
    }
    iVar2 = fcn.00015e34(arg1);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (*(arg1 + 0x4c8) == '\0') {
        uVar6 = 0;
        do {
            if (*(uVar6 + 0x47c + arg1) != '\0') {
                in_R9 = arg1 + 0x47c;
                iVar2 = (***(arg1 + 0x128))(*(arg1 + 0x128),5,0x10);
                if (iVar2 < 0) {
                    return iVar2;
                }
                break;
            }
            uVar3 = uVar6 + 1;
            uVar6 = uVar3;
        } while (uVar3 < 0x10);
    }
    if (*(iVar9 + 0xac0) - 1U < 3) {
        iVar9 = *(iVar9 + 0xae8);
        uVar4 = (*(iVar9 + 2) << 8 | *(iVar9 + 2) >> 8) >> 4;
        *(arg1 + 0x4a0) = uVar4;
        iVar2 = fcn.00017c5c(uVar4 << 4);
        *(arg1 + 0x4a8) = iVar2;
        if (iVar2 == 0) {
            return -0x7ffffffffffffff7;
        }
        pcVar8 = pcVar5;
        if (*(arg1 + 0x4a0) != 0) {
            do {
                arg2 = iVar9 + 4 + pcVar8 * 0x10;
                puVar7 = pcVar8 * 0x10 + *(arg1 + 0x4a8);
                if (puVar7 != arg2) {
                    section..text(puVar7,arg2,0x10);
                }
                uVar4 = pcVar8 + 1;
                pcVar8 = uVar4;
            } while (uVar4 < *(arg1 + 0x4a0));
        }
        in_R9 = iVar9 + 4;
        iVar9 = (***(arg1 + 0x128))(*(arg1 + 0x128),6,*(iVar9 + 2) << 8 | *(iVar9 + 2) >> 8);
        if (iVar9 < 0) goto code_r0x00013ee5;
    }
    iVar9 = -0x7ffffffffffffffe;
    if (*(arg1 + 0x4b0) == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001a138(*(arg1 + 0x4b0),*(arg1 + 0x4b8),auStack_28);
    }
    if (iVar2 < 0) {
        pcVar8 = pcVar5;
        if (*(arg1 + 0x4b0) != 0) {
            iVar9 = fcn.0001a070(*(arg1 + 0x4b0),*(arg1 + 0x4b8),&pcStackX_8);
            pcVar8 = pcStackX_8;
        }
        if (iVar9 < 0) goto code_r0x00013ee5;
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
            pcVar5 = pcVar5 + 1;
            cVar1 = pcVar5[pcVar8];
        }
        iVar2 = fcn.00017c5c((pcVar5 + 1) * 2);
        if (iVar2 == 0) {
            iVar9 = -0x7ffffffffffffff7;
            goto code_r0x00013ee5;
        }
        fcn.00016a38(pcVar8,iVar2,pcVar5 + 1);
        (**(*0x1d5f8 + 0x48))(pcVar8);
        puVar7 = auStack_28;
        arg2_00 = iVar2;
        iVar9 = fcn.000126f4(arg1,iVar2,puVar7);
        (**(*0x1d5f8 + 0x48))(iVar2);
        if (iVar9 < 0) {
            fcn.000184e8(0x1ce90,arg2_00,puVar7,in_R9);
            goto code_r0x00013ee5;
        }
    }
    if (arg1 + 0x48c != auStack_28) {
        section..text(arg1 + 0x48c,auStack_28,0x10);
    }
    arg3 = arg1 + 0x49c;
    iVar9 = fcn.0001a254(*(arg1 + 0x4b0),*(arg1 + 0x4b8),arg3);
    if ((iVar9 < 0) || (*arg3 == 0)) {
        *arg3 = 0x50;
    }
    iVar9 = fcn.00013608(arg1);
    if (-1 < iVar9) {
        return iVar9;
    }
code_r0x00013ee5:
    if (*(arg1 + 0x4a8) != 0) {
        (**(*0x1d5f8 + 0x48))();
        *(arg1 + 0x4a8) = 0;
    }
    return iVar9;
}


/* fcn.00013f58 @ 0x13f58 */

//WARNING: Variable defined which should be unmapped: var_17h

int64_t fcn.00013f58(int64_t arg1)

{
    uint32_t *arg2;
    uint uVar1;
    int64_t iVar2;
    ulong in_R8;
    uint64_t uVar3;
    int64_t var_20h;
    int64_t var_17h;
    uint32_t var_fh;
    int64_t in_stack_fffffffffffffff0;
    
    iVar2 = fcn.00016398();
    uVar1 = (**(iVar2 + 0x18))(0x231);
    fcn.000102c0(&var_20h,0x1c);
    arg2 = arg1 + 0x45c;
    var_20h._0_4_ = 1;
    var_20h._4_4_ = uVar1;
    if (*(arg1 + 0x458) == '\0') {
        if (&var_17h + 4 != arg2) {
            in_R8 = 0;
            section..text(&var_17h + 4,arg2,4);
        }
        if (&var_fh != arg1 + 0x46c) {
            in_R8 = 0;
            section..text(&var_fh,arg1 + 0x46c,4);
        }
        iVar2 = *(arg1 + 0x10);
    }
    else {
        if (&var_17h != arg2) {
            in_R8 = 0;
            section..text(&var_17h,arg2,0x10);
        }
        iVar2 = *(arg1 + 0x18);
    }
    uVar3 = CONCAT71(in_R8 >> 8,-(*(arg1 + 0x458) != '\0')) & 0xffffffffffffff02;
    if (*(iVar2 + 0x10) == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001ac3c(*(iVar2 + 0x10),*(arg1 + 8),CONCAT71(uVar3 >> 8,uVar3 + '\x04'),&var_20h,
                             stack0xffffffffffffffe8,in_stack_fffffffffffffff0);
    }
    if (-1 < iVar2) {
        *(arg1 + 0x108) = 1;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00014418 @ 0x14418 */

uint64_t fcn.00014418(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t *arg1_00;
    int64_t *piVar7;
    ulong *puVar8;
    uint32_t *puVar9;
    uint32_t *arg3_00;
    char cVar10;
    int64_t arg2_00;
    uint32_t uVar11;
    uint64_t uVar12;
    uint *in_stack_00000028;
    uchar *puVar13;
    uint64_t *puVar14;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    ulong *puStack_b8;
    uchar auStack_b0 [24];
    uint64_t uStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    uint32_t *puStack_80;
    uchar auStack_78 [8];
    int64_t *piStack_70;
    uchar uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    
    cVar10 = arg2;
    iVar4 = 0;
    if (((arg3 == 0) || (in_stack_00000028 == NULL)) || ((*arg3 != 0 && (arg4 == 0)))) {
        return 0x8000000000000002;
    }
    pcVar2 = *(arg1 + 0x4b0);
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
        cVar1 = pcVar2[iVar4];
    }
    uVar5 = fcn.00017c2c(pcVar2,(iVar4 + 1) * 2);
    if (uVar5 == 0) {
        return 0x8000000000000009;
    }
    uStack_c0 = uVar5;
    fcn.00016a38(*(arg1 + 0x4b0),uVar5,iVar4 + 1);
    if (((cVar10 == '\0') && (arg4 != 0)) &&
       (uVar6 = fcn.000141cc(arg1,uVar5,arg3,arg4), uVar6 != 0x800000000000000e)) goto code_r0x000144f7;
    arg1_00 = NULL;
    if ((cVar10 == '\0') && (*arg3 == 0)) {
        arg1_00 = fcn.00017c5c(0x40);
        if (arg1_00 == NULL) {
            uVar6 = 0x8000000000000009;
            goto code_r0x000149e4;
        }
        *(arg1_00 + 4) = 3;
        piVar7 = arg1_00 + 6;
        *piVar7 = piVar7;
        arg1_00[7] = piVar7;
    }
    puVar8 = fcn.00017c5c(0x48);
    puStack_b8 = puVar8;
    if (puVar8 != NULL) {
        *puVar8 = 3;
        puVar8[2] = puVar8 + 3;
        uStack_c8 = 0;
        if (*(arg1 + 0x4b0) == 0) {
            uVar6 = 0x8000000000000002;
        }
        else {
            uVar6 = fcn.0001a070(*(arg1 + 0x4b0),*(arg1 + 0x4b8),&uStack_c8);
        }
        uVar5 = uStack_c8;
        if (-1 < uVar6) {
            uVar6 = fcn.0001a9e0(puVar8,0x1ced0,uStack_c8);
            (**(*0x1d5f8 + 0x48))(uVar5);
            if (-1 < uVar6) {
                uVar6 = fcn.0001a9e0(puVar8,0x1cedc,0x1ced8);
                if (-1 < uVar6) {
                    uVar6 = fcn.0001a9e0(puVar8,0x1cf00,0x1cee8);
                    if (-1 < uVar6) {
                        puVar9 = fcn.00017c2c();
                        puStack_80 = puVar9;
                        if (puVar9 != NULL) {
                            *(puVar9 + 2) = uStack_c0;
                            uVar11 = -(cVar10 != '\0') & 5;
                            *puVar9 = uVar11;
                            if (arg1_00 != NULL) {
                                arg1_00[2] = puVar9;
                            }
                            iVar4 = puVar8[2];
                            uStack_c8 = arg1 + 0x38;
                            uVar6 = fcn.0001aef4(uStack_c8,puVar9,puVar8[1],iVar4);
                            if (-1 < uVar6) {
                                arg3_00 = fcn.00017c5c(0x30);
                                if (arg3_00 != NULL) {
                                    iVar3 = arg1;
                                    arg2_00 = CONCAT71(puVar9 >> 8,1);
                                    puVar9 = arg3_00;
                                    uVar6 = fcn.0001afac(iVar3 + 0x38,arg2_00,arg3_00);
                                    if (uVar6 < 0) {
                                        if (-1 < *(arg3_00 + 10)) goto code_r0x0001499b;
                                    }
                                    else if (-1 < *(arg3_00 + 10)) {
                                        uVar6 = fcn.00012b2c(*(arg1 + 0x4b0),*(arg1 + 0x4b8),*(arg3_00 + 2),
                                                             *(arg3_00 + 4));
                                        if (uVar6 < 0) goto code_r0x0001499b;
                                        if (arg1_00 != NULL) {
                                            arg1_00[3] = arg3_00;
                                            *(arg1_00 + 4) = *in_stack_00000028;
                                        }
                                        iStack_50 = *arg3;
                                        puVar14 = &uStack_c8;
                                        uStack_68 = 0;
                                        iStack_60 = 0;
                                        uStack_58 = 0;
                                        puVar13 = auStack_78;
                                        uStack_c8 = 0;
                                        piStack_70 = arg1_00;
                                        iStack_48 = arg4;
                                        iStack_40 = arg1;
                                        uVar6 = fcn.0001a4b8(uVar11,*arg3_00,*(arg3_00 + 2),*(arg3_00 + 4));
                                        uVar5 = uStack_c8;
                                        if (-1 < uVar6) {
                                            if (cVar10 == '\0') {
                                                uStack_c8 = 0;
                                                if (uVar5 == 0) {
                                                    iVar4 = -0x7ffffffffffffffe;
                                                }
                                                else if (*(uVar5 + 2) == '\0') {
                                                    iVar4 = -0x7ffffffffffffffa;
                                                }
                                                else {
                                                    uStack_c8 = *(uVar5 + 8);
                                                    iVar4 = 0;
                                                }
                                                fcn.000102c0(auStack_b0,0x30);
                                                if (iVar4 < 0) {
                                                    iVar4 = 0;
                                                    do {
                                                        if ((uVar5 != 0) && (*(uVar5 + 0x28) == 0xc))
                                                        goto code_r0x00014857;
                                                        if ((iVar4 == 0) || (iStack_50 == 0)) {
                                                            iVar4 = fcn.00017c2c();
                                                            if (iVar4 == 0) {
                                                                uVar6 = 0x8000000000000009;
                                                                break;
                                                            }
                                                            uStack_68 = 1;
                                                            iStack_60 = iVar4;
                                                        }
                                                        else {
                                                            uStack_68 = 0;
                                                        }
                                                        uStack_98 = 0x5dc;
                                                        iStack_90 = iVar4;
                                                        uVar6 = fcn.0001afac(iVar3 + 0x38,0,auStack_b0);
                                                        if (uVar6 < 0) goto code_r0x000148aa;
                                                        if (uStack_88 < 0) goto code_r0x000148b3;
                                                        uVar6 = fcn.0001a5e0(uVar5,uStack_98,iStack_90);
                                                    } while (-1 < uVar6);
                                                    goto code_r0x0001494a;
                                                }
                                                uVar12 = 0;
                                                if (uStack_c8 != 0) {
                                                    do {
                                                        iStack_90 = arg4 + uVar12;
                                                        uStack_98 = *arg3 - uVar12;
                                                        uVar6 = fcn.0001afac(iVar3 + 0x38,0,auStack_b0);
                                                        if (uVar6 < 0) goto code_r0x000148aa;
                                                        if (uStack_88 < 0) goto code_r0x000148b3;
                                                        uVar12 = uVar12 + uStack_98;
                                                        puVar8 = *(arg1 + 0x160);
                                                        if (puVar8 != NULL) {
                                                            uVar6 = (**puVar8)(puVar8,4,1,uStack_98 & 0xffffffff,
                                                                               iStack_90,puVar13,puVar14);
                                                            if (uVar6 < 0) goto code_r0x0001494a;
                                                        }
                                                    } while (uVar12 < uStack_c8);
                                                }
                                            }
code_r0x00014857:
                                            uStack_88 = 0x8000000000000006;
                                            if (uVar5 != 0) {
                                                if (*(uVar5 + 2) != '\0') {
                                                    uVar12 = *(uVar5 + 8);
                                                    uVar6 = *arg3;
                                                    *arg3 = uVar12;
                                                    uVar6 = -(uVar6 < uVar12) & 0x8000000000000005;
                                                    if (arg1_00 != NULL) {
                                                        arg1_00[5] = uVar12;
                                                        *arg1_00 = arg1 + 0x4e0;
                                                        puVar8 = *(arg1 + 0x4e8);
                                                        arg1_00[1] = puVar8;
                                                        *puVar8 = arg1_00;
                                                        *(arg1 + 0x4e8) = arg1_00;
                                                    }
code_r0x000144f7:
                                                    (**(*0x1d5f8 + 0x48))(uVar5);
                                                    return uVar6;
                                                }
                                                goto code_r0x000148b3;
                                            }
                                            uVar6 = 0x8000000000000002;
                                        }
                                        goto code_r0x0001494a;
                                    }
                                    fcn.000124b0(***(uStack_c8 + 0x88),arg2_00,puVar9,iVar4);
                                    uVar6 = *(arg3_00 + 10);
                                    goto code_r0x0001499b;
                                }
                                uVar6 = 0x8000000000000009;
                                goto code_r0x000149a8;
                            }
                            goto code_r0x000149ac;
                        }
                        uVar6 = 0x8000000000000009;
                    }
                }
            }
        }
        goto code_r0x000149ba;
    }
    uVar6 = 0x8000000000000009;
code_r0x000149ce:
    if (arg1_00 != NULL) {
        (**(*0x1d5f8 + 0x48))(arg1_00);
    }
    uVar5 = uStack_c0;
code_r0x000149e4:
    (**(*0x1d5f8 + 0x48))(uVar5);
    return uVar6;
code_r0x000148aa:
    if (-1 < uStack_88) goto code_r0x0001494a;
code_r0x000148b3:
    uVar6 = uStack_88;
code_r0x0001494a:
    if (uVar5 != 0) {
        (**(*0x1d5f8 + 0x48))(uVar5);
    }
    if (iStack_60 != 0) {
        (**(*0x1d5f8 + 0x48))();
    }
    fcn.00014060(arg1_00);
code_r0x0001499b:
    (**(*0x1d5f8 + 0x48))(arg3_00);
code_r0x000149a8:
    puVar8 = puStack_b8;
code_r0x000149ac:
    (**(*0x1d5f8 + 0x48))(puStack_80);
code_r0x000149ba:
    fcn.0001a93c(puVar8);
    goto code_r0x000149ce;
}


/* fcn.0001ba20 @ 0x1ba20 */

ulong fcn.0001ba20(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *arg3;
    int64_t iStackX_8;
    
    uVar1 = *0x1d660;
    iStackX_8 = CONCAT44(in_register_0000000c,arg1);
    if ((*0x1d650 != 0) || (iVar2 = (**(*0x1d5f8 + 0x140))(0x1c370,0,0x1d650), -1 < iVar2)) {
        (**(*0x1d650 + 0x28))();
    }
    (**(*(*0x1d5f0 + 0x40) + 0x28))(*(*0x1d5f0 + 0x40),0xf);
    (**(*(*0x1d5f0 + 0x40) + 0x30))(*(*0x1d5f0 + 0x40));
    iVar5 = 0;
    iVar3 = 0;
    iVar2 = *(*0x1d5f0 + 0x40);
    (**(iVar2 + 0x38))(iVar2);
    fcn.0001b9a4();
    fcn.000184e8(0x1d558,iVar3,iVar5,iVar2);
    iStackX_8 = 0;
    uVar6 = uVar1;
    while( true ) {
        arg3 = &iStackX_8;
        iVar5 = 200000000;
        iVar3 = fcn.00018fd4(arg2,200000000,arg3);
        if (uVar6 < 2) break;
        if (iStackX_8 == 0) goto code_r0x0001bb23;
        (**(*0x1d5f8 + 0xf8))(500000);
        uVar6 = uVar6 - 1;
    }
    if (iStackX_8 == 0) {
code_r0x0001bb23:
        if (-1 < iVar3) {
            fcn.000184e8(0x1d5a0,iVar5,arg3,iVar2);
        }
        uVar4 = 0;
    }
    else {
        fcn.000184e8(0x1d580,iVar5,arg3,iVar2);
        uVar4 = 0x800000000000000c;
    }
    return uVar4;
}


/* fcn.000117d4 @ 0x117d4 */

int64_t fcn.000117d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong *puVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint8_t *arg2_00;
    uint64_t arg2_01;
    uint32_t *puVar6;
    uint *arg1_00;
    uint32_t *in_R9;
    char *pcVar7;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_20 [2];
    uint8_t auStack_48 [32];
    
    puVar6 = NULL;
    if ((arg1 == 0) || (arg3 == 0)) {
        return -0x7ffffffffffffffe;
    }
    puVar3 = puVar6;
    pcVar7 = arg3;
    do {
        if ((*pcVar7 == '\x7f') && (pcVar7[1] == -1)) break;
        if ((*pcVar7 == '\x03') && (pcVar7[1] == '\x18')) {
            if (*(pcVar7 + 2) == 4) break;
            puVar3 = fcn.00017c2c();
            if (puVar3 == NULL) {
                return -0x7ffffffffffffffe;
            }
            arg3 = *(pcVar7 + 2) - 4;
            if ((arg3 != NULL) && (puVar3 != pcVar7 + 4)) {
                section..text(puVar3,pcVar7 + 4,arg3);
            }
            *((*(pcVar7 + 2) - 4) + puVar3) = 0;
        }
        pcVar7 = pcVar7 + *(pcVar7 + 2);
    } while( true );
    if (*(arg1 + 0x459) != '\0') {
        if (arg2 == *(arg1 + 0x458)) {
            if (puVar3 == NULL) {
                return -0x7fffffffffffffec;
            }
            arg3 = puVar3;
            for (pcVar7 = *(arg1 + 0x4b0); (*pcVar7 != '\0' && (*pcVar7 == *arg3)); pcVar7 = pcVar7 + 1) {
                arg3 = arg3 + 1;
            }
            if (*pcVar7 == *arg3) {
                (**(*0x1d5f8 + 0x48))(puVar3);
                return -0x7fffffffffffffec;
            }
        }
        iVar4 = fcn.00011d68(arg1);
        if (iVar4 < 0) {
            if (puVar3 != NULL) {
                (**(*0x1d5f8 + 0x48))(puVar3);
            }
            return iVar4;
        }
    }
    if (arg2 == '\0') {
        if (*(arg1 + 0x10) == 0) goto code_r0x00011a9e;
        *(arg1 + 0x458) = 0;
    }
    else {
        if (*(arg1 + 0x18) == 0) {
code_r0x00011a9e:
            if (puVar3 != NULL) {
                (**(*0x1d5f8 + 0x48))(puVar3);
            }
            return -0x7ffffffffffffffd;
        }
        *(arg1 + 0x458) = 1;
    }
    *(arg1 + 0x4d0) = puVar3;
    if (puVar3 != NULL) {
        cVar1 = *puVar3;
        puVar5 = puVar6;
        while (cVar1 != '\0') {
            puVar5 = puVar5 + 1;
            cVar1 = *(puVar5 + puVar3);
        }
        in_R9 = arg1 + 0x4d8;
        iVar4 = fcn.00019ee8(puVar3,puVar5 & 0xffffffff,arg3,in_R9);
        if (iVar4 < 0) {
            (**(*0x1d5f8 + 0x48))(*(arg1 + 0x4d0));
            return iVar4;
        }
    }
    arg1_00 = arg1 + 0x4f8;
    fcn.000102c0(arg1_00,0x6100);
    iVar4 = 0x10;
    if (*(arg1 + 0x458) == '\0') {
        do {
            *arg1_00 = 0x5c8;
            arg1_00 = arg1_00 + 0x184;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    else {
        do {
            *arg1_00 = 0x5c8;
            arg1_00 = arg1_00 + 0x184;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    if (*(arg1 + 0x458) != '\0') {
        puVar2 = *(arg1 + 0x128);
        in_R9 = auStackX_8;
        arg3 = auStackX_20;
        auStackX_20[0] = 4;
        auStackX_20[1] = 0;
        iVar4 = (*puVar2[1])(puVar2);
        if (iVar4 < 0) {
            return iVar4;
        }
        if (auStackX_8[0] == 0) {
            in_R9 = auStackX_8;
            auStackX_8[0] = 1;
            arg3 = 4;
            iVar4 = (**puVar2)(puVar2);
            if (iVar4 < 0) {
                return iVar4;
            }
        }
    }
    *(arg1 + 0x459) = 1;
    fcn.00018434(0x1c380,(-(*(arg1 + 0x458) != '\0') & 2) + 4,arg3,in_R9);
    fcn.000102c0(auStack_48,0x20);
    puVar3 = auStackX_8;
    arg2_00 = auStack_48;
    fcn.00018b30(*(arg1 + 8),arg2_00,puVar3);
    fcn.000184e8(0x1d5b8,arg2_00,puVar3,in_R9);
    do {
        arg2_01 = auStack_48[puVar6];
        fcn.000184e8(0x1d5c4,arg2_01,puVar3,in_R9);
        if (puVar6 < 0x5) {
            fcn.000184e8(0x1d5cc,arg2_01,puVar3,in_R9);
        }
        puVar6 = puVar6 + 1;
    } while (puVar6 < 0x6);
    return 0;
}


/* fcn.00011ad8 @ 0x11ad8 */

int64_t fcn.00011ad8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char *arg1_00;
    int64_t arg2_00;
    uint64_t *arg3_00;
    int64_t arg4_00;
    
    if (((arg4 == 0) || (arg2 == 0)) || ((*arg2 != 0 && (arg3 == 0)))) {
        return -0x7ffffffffffffffe;
    }
    if (*(arg1 + 0x459) == '\0') {
        return -0x7fffffffffffffed;
    }
    arg2_00 = arg2;
    arg3_00 = arg3;
    arg4_00 = arg4;
    iVar2 = fcn.00011728(arg1);
    if (iVar2 < 0) goto code_r0x00011c69;
    if (*(arg1 + 0x4b0) == 0) {
        if (*(arg1 + 0x459) == '\0') {
            iVar2 = -0x7fffffffffffffed;
        }
        else {
            if (*(arg1 + 0x458) == '\0') {
                iVar2 = fcn.000152f8(arg1);
            }
            else {
                iVar2 = fcn.000160cc(arg1);
            }
            if (-1 < iVar2) {
                if (*(arg1 + 0x458) == '\0') {
                    iVar2 = fcn.00013970(arg1);
                }
                else {
                    iVar2 = fcn.00013b84(arg1);
                }
            }
        }
        if (-1 < iVar2) goto code_r0x00011bc2;
code_r0x00011bb1:
        fcn.000184e8(0x1c3c0,arg2_00,arg3_00,arg4_00);
    }
    else {
code_r0x00011bc2:
        if ((*(arg1 + 0x108) == '\0') && (iVar2 = fcn.00013f58(arg1), iVar2 < 0)) goto code_r0x00011c69;
        puVar1 = arg1 + 0x4c0;
        if (*puVar1 == 0) {
            arg4_00 = 0;
            arg2_00 = CONCAT71(arg2_00 >> 8,1);
            arg3_00 = puVar1;
            iVar2 = fcn.00014418(arg1,arg2_00,puVar1,0);
            if ((iVar2 < 0) && (iVar2 != -0x7ffffffffffffffb)) {
                arg4_00 = 0;
                arg2_00 = 0;
                arg3_00 = puVar1;
                iVar2 = fcn.00014418(arg1,0,puVar1,0);
                if ((iVar2 < 0) && (iVar2 != -0x7ffffffffffffffb)) goto code_r0x00011bb1;
            }
        }
        if (*arg2 < *puVar1) {
            *arg2 = *puVar1;
            iVar2 = -0x7ffffffffffffffb;
            *arg4 = *(arg1 + 0x4cc);
        }
        else {
            arg2_00 = 0;
            arg4_00 = arg3;
            iVar2 = fcn.00014418(arg1,0,arg2,arg3);
            arg3_00 = arg2;
        }
    }
code_r0x00011c69:
    puVar1 = arg1 + 0x160;
    if (*puVar1 == arg1 + 0x168U) {
        arg2_00 = 0x1c0c0;
        arg3_00 = puVar1;
        (**(*0x1d5f8 + 0x90))(*(arg1 + 8));
        *puVar1 = 0;
    }
    if (iVar2 < 0) {
        if (iVar2 == -0x7ffffffffffffff1) {
            arg1_00 = "\n  Error: Could not establish connection with HTTP server.\n";
        }
        else if (iVar2 == -0x7ffffffffffffffb) {
            if (arg3 == 0) {
                return -0x7ffffffffffffffb;
            }
            arg1_00 = "\n  Error: Buffer size is smaller than the requested file.\n";
        }
        else if (iVar2 == -0x7ffffffffffffff7) {
            arg1_00 = "\n  Error: Could not allocate I/O buffers.\n";
        }
        else if (iVar2 == -0x7ffffffffffffff9) {
            arg1_00 = "\n  Error: Network device error.\n";
        }
        else if (iVar2 == -0x7fffffffffffffee) {
            arg1_00 = "\n  Error: Server response timeout.\n";
        }
        else {
            arg1_00 = "\n  Error: Remote boot cancelled.\n";
            if (iVar2 != -0x7fffffffffffffeb) {
                arg1_00 = "\n  Error: Unexpected network error.\n";
            }
        }
        fcn.000184e8(arg1_00,arg2_00,arg3_00,arg4_00);
    }
    return iVar2;
}


/* fcn.0001a44c @ 0x1a44c */

int64_t * fcn.0001a44c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) && (uVar2 = 0, arg1 != 0)) {
        do {
            iVar1 = fcn.00016488(*arg2,arg3);
            if (iVar1 == 0) {
                return arg2;
            }
            uVar2 = uVar2 + 1;
            arg2 = arg2 + 0x10;
        } while (uVar2 < arg1);
    }
    return NULL;
}


/* fcn.000167e4 @ 0x167e4 */

ulong fcn.000167e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    char *pcVar3;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar3 = arg1, uVar2 = fcn.000167b8(arg1,0xf4241), uVar2 < 0xf4241)) {
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


/* fcn.00018044 @ 0x18044 */

ulong fcn.00018044(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.00017fd4(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00018117:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
code_r0x0001810c:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar5 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar5 = iVar5 + 1;
                                cVar1 = arg1_00[iVar5];
                            }
                            iVar3 = fcn.00016500(arg1_00,arg1,iVar5);
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
                            goto code_r0x0001810c;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00018117;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00019218 @ 0x19218 */

uint64_t fcn.00019218(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if (*arg2 != 0) {
        puVar2 = *arg1 + 0x10;
        uVar1 = uVar3;
        do {
            if ((*puVar2 & 0x10) != 0) {
                uVar3 = *(*arg1 + 8 + uVar1 * 0x18);
                break;
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 0x18;
        } while (uVar1 < *arg2);
    }
    (**(*0x1d5f8 + 0x48))(*arg1);
    return uVar3;
}


/* fcn.00016488 @ 0x16488 */

int64_t fcn.00016488(int64_t arg1,int64_t arg2)

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


/* fcn.0001a384 @ 0x1a384 */

int64_t fcn.0001a384(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg3_00;
    uint32_t auStackX_10 [2];
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if ((*arg2 & 4) == 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        arg3_00 = fcn.00017c2c(arg1,*(arg2 + 0x18) + 1);
        if (arg3_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            arg1 = *(arg2 + 0x14) + arg1;
            if (arg1 == 0) {
                iVar1 = -0x7ffffffffffffffe;
            }
            else {
                iVar1 = fcn.00019b6c(arg1,*(arg2 + 0x18),arg3_00,auStackX_10);
            }
            if (iVar1 < 0) {
                (**(*0x1d5f8 + 0x48))(arg3_00);
            }
            else {
                *arg3 = arg3_00;
                *(auStackX_10[0] + arg3_00) = 0;
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.000163d4 @ 0x163d4 */

int64_t fcn.000163d4(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    puVar1 = CONCAT44(in_register_00000014,arg2);
    for (uVar2 = CONCAT44(in_R8,arg3); (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2));
        uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.000169a4 @ 0x169a4 */

ulong fcn.000169a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00016534(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00016a26;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x00016a26:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.0001b650 @ 0x1b650 */

ulong fcn.0001b650(int64_t arg1,int64_t arg2,int64_t arg3,int32_t arg_58h)

{
    int16_t iVar1;
    int16_t *piVar2;
    ulong uVar3;
    int64_t noname_0;
    int64_t iVar4;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        noname_0 = arg1;
        fcn.000102c0(arg1,0x58);
        *arg1 = 0x10000;
        *(arg1 + 8) = 2;
        iVar4 = 0;
        *(arg1 + 0xc) = 1;
        iVar1 = *arg2;
        piVar2 = arg2;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar1 = *piVar2;
        }
        uVar3 = fcn.00017c88(noname_0,iVar4 * 2 + 2,arg2);
        *(arg1 + 0x10) = uVar3;
        uVar3 = fcn.00017d74(arg3);
        *(arg1 + 0x18) = uVar3;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001b5c0 @ 0x1b5c0 */

int64_t fcn.0001b5c0(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t *puVar3;
    int64_t in_R8;
    uint16_t auStackX_8 [4];
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3[1] < 3) {
        uVar2 = *puVar3;
        if (uVar2 == 0x10000) {
            iVar1 = fcn.0001b1b0(puVar3[1],auStackX_8);
            if (iVar1 < 0) {
                return iVar1;
            }
            uVar2 = auStackX_8[0];
            *puVar3 = uVar2;
        }
        if (uVar2 < 0x10000) {
            iVar1 = fcn.0001b4a8(*(puVar3[1] * 8 + 0x1d4f8),*puVar3,in_R8);
            if ((-1 < iVar1) && (iVar1 = fcn.0001b2a4(arg1), iVar1 < 0)) {
                fcn.0001b6f0(*puVar3,puVar3[1]);
            }
            return iVar1;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.0001b830 @ 0x1b830 */

ulong fcn.0001b830(int64_t arg1)

{
    if (*(arg1 + 0x10) != 0) {
        (**(*0x1d5f8 + 0x48))();
    }
    if (*(arg1 + 0x18) != 0) {
        (**(*0x1d5f8 + 0x48))();
    }
    if (*(arg1 + 0x20) != 0) {
        (**(*0x1d5f8 + 0x48))();
    }
    return 0;
}


/* fcn.00019a60 @ 0x19a60 */

uchar fcn.00019a60(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    int64_t arg1_00;
    ulong in_RDX;
    
    arg1_00 = fcn.00019750(arg1,in_RDX,0);
    uVar2 = 0;
    if (arg1_00 != 0) {
        cVar1 = fcn.000199c0(arg1,arg1_00,0x1d3c8,0x1d3d8);
        uVar2 = 0;
        if (cVar1 != '\0') {
            uVar2 = fcn.000199c0(arg1,arg1_00,0x1d3d8,0x1d3e8);
        }
        (**(*0x1d5f8 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.00019750 @ 0x19750 */

int16_t * fcn.00019750(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t arg2;
    int16_t iVar1;
    int64_t arg1_00;
    bool bVar2;
    uint16_t uVar3;
    uint16_t *puVar4;
    uint64_t arg1_01;
    uint64_t uVar5;
    int16_t *arg1_02;
    int64_t iVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    int16_t *piVar9;
    char16_t *pcVar10;
    uint16_t *puVar11;
    uint64_t uVar12;
    
    uVar12 = 0;
    puVar11 = 0x1c260;
    puVar4 = 0x1c260;
    uVar8 = uVar12;
    uVar3 = *0x1c260;
    while (uVar3 != 0) {
        puVar4 = puVar4 + 1;
        uVar8 = uVar8 + 1;
        uVar3 = *puVar4;
    }
    arg1_01 = uVar12;
    uVar5 = uVar12;
    if (arg1 != 0) {
        arg1_01 = fcn.00017f40(arg1);
        if (arg1_01 == 0) {
            return NULL;
        }
        uVar5 = fcn.00017d24(arg1_01);
    }
    arg2 = (uVar5 + uVar8 * 2) * 2 + 0x32;
    arg1_00 = arg2 * 2;
    arg1_02 = fcn.00017c5c(arg1_00);
    if (arg1_02 == NULL) {
        return NULL;
    }
    pcVar10 = L"GUID=";
    fcn.00016568(arg1_02,arg2,0x1d3c8);
    iVar1 = *arg1_02;
    piVar9 = arg1_02;
    uVar8 = uVar12;
    while (iVar1 != 0) {
        piVar9 = piVar9 + 1;
        uVar8 = uVar8 + 1;
        iVar1 = *piVar9;
    }
    piVar9 = arg1_02 + uVar8;
    do {
        fcn.00016d10(piVar9,(arg1_00 - piVar9) + arg1_02,pcVar10,*(uVar12 + 0x1bd20));
        iVar6 = fcn.00016534(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
        uVar12 = uVar12 + 1;
        piVar9 = piVar9 + iVar6;
    } while (uVar12 < 0x10);
    pcVar10 = L"&NAME=";
    fcn.000166e8(arg1_02,arg2,0x1d3d8);
    uVar12 = 0;
    iVar1 = *piVar9;
    piVar7 = piVar9;
    uVar8 = uVar12;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        uVar8 = uVar8 + 1;
        iVar1 = *piVar7;
    }
    piVar9 = piVar9 + uVar8;
    uVar3 = *0x1c260;
    while (uVar3 != 0) {
        fcn.00016d10(piVar9,(arg1_00 - piVar9) + arg1_02,pcVar10,uVar3);
        iVar6 = fcn.00016534(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
        puVar11 = puVar11 + 1;
        piVar9 = piVar9 + iVar6;
        uVar3 = *puVar11;
    }
    pcVar10 = L"&PATH=";
    fcn.000166e8(arg1_02,arg2,0x1d3e8);
    iVar6 = 0;
    iVar1 = *piVar9;
    piVar7 = piVar9;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = *piVar7;
    }
    piVar9 = piVar9 + iVar6;
    if (uVar5 != 0) {
        do {
            fcn.00016d10(piVar9,(arg1_00 - piVar9) + arg1_02,pcVar10,*(uVar12 + arg1_01));
            iVar6 = fcn.00016534(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + iVar6;
        } while (uVar12 < uVar5);
    }
    *piVar9 = 0;
    bVar2 = false;
    iVar1 = *arg1_02;
    piVar9 = arg1_02;
    while (iVar1 != 0) {
        iVar1 = *piVar9;
        if (iVar1 == 0x3d) {
            bVar2 = true;
        }
        else if (iVar1 == 0x26) {
            bVar2 = false;
        }
        else if ((bVar2) && (iVar1 - 0x41U < 6)) {
            *piVar9 = iVar1 + 0x20;
        }
        piVar9 = piVar9 + 1;
        iVar1 = *piVar9;
    }
    return arg1_02;
}


/* fcn.000199c0 @ 0x199c0 */

bool fcn.000199c0(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    
    arg2_00 = arg2;
    iVar1 = fcn.00016408(noname_0,arg2_00);
    if (iVar1 != 0) {
        iVar2 = fcn.00016408(arg1,arg2_00);
        if (iVar2 != 0) {
            iVar3 = fcn.00016408(iVar1,arg3);
            if (iVar3 != 0) {
                iVar4 = fcn.00016408(iVar2,arg3);
                if (iVar4 != 0) {
                    iVar3 = iVar3 - iVar1 >> 1;
                    if (iVar3 == iVar4 - iVar2 >> 1) {
                        if (iVar3 == 0) {
                            iVar1 = 0;
                        }
                        else {
                            iVar1 = fcn.000163d4(iVar1,iVar2,iVar3);
                        }
                        return iVar1 == 0;
                    }
                }
            }
        }
    }
    return false;
}


/* fcn.00016568 @ 0x16568 */

ulong fcn.00016568(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00016534(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x000165de;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x000165de:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00016408 @ 0x16408 */

int16_t * fcn.00016408(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    int16_t *piVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int16_t *piVar5;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar4 == 0) {
        return piVar2;
    }
    do {
        iVar1 = *piVar2;
        if (iVar1 == 0) {
            return NULL;
        }
        piVar3 = piVar2;
        piVar5 = piVar4;
        if (iVar1 == *piVar4) {
            do {
                if (iVar1 == 0) break;
                piVar3 = piVar3 + 1;
                piVar5 = piVar5 + 1;
                iVar1 = *piVar3;
            } while (iVar1 == *piVar5);
        }
        if (*piVar5 == 0) {
            return piVar2;
        }
        if (*piVar3 == 0) {
            return NULL;
        }
        piVar2 = piVar2 + 1;
    } while( true );
}


/* fcn.00016cac @ 0x16cac */

void fcn.00016cac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00016ea0(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012cb0 @ 0x12cb0 */

//WARNING: Type propagation algorithm not settling

int64_t fcn.00012cb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    uint *arg2_00;
    ushort *arg2_01;
    int64_t arg3_00;
    char cVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uchar auStackY_178 [40];
    int32_t in_stack_fffffffffffffeb0;
    uint uStack_118;
    
    uVar8 = 0;
    cVar4 = arg2;
    piVar2 = arg3;
    uVar7 = uVar8;
    if (*arg3 == 0) {
        return -0x7ffffffffffffffe;
    }
    do {
        piVar2 = piVar2 + 1;
        uVar7 = uVar7 + 1;
    } while (*piVar2 != 0);
    if (uVar7 == 0) {
        return -0x7ffffffffffffffe;
    }
    uVar7 = uVar8;
    while( true ) {
        piVar2 = arg4;
        uVar5 = uVar8;
        if (*arg4 == 0) break;
        do {
            piVar2 = piVar2 + 1;
            uVar5 = uVar5 + 1;
        } while (*piVar2 != 0);
        if ((uVar5 <= uVar7) || (iVar1 = *(arg4 + uVar7 * 2), iVar1 == 0x3a)) break;
        if (iVar1 - 0x41U < 0x1a) {
            *(arg4 + uVar7 * 2) = iVar1 + 0x20;
        }
        uVar7 = uVar7 + 1;
    }
    uVar7 = uVar8;
    piVar2 = arg4;
    if (*arg4 == 0) {
        return -0x7ffffffffffffffe;
    }
    do {
        piVar2 = piVar2 + 1;
        uVar7 = uVar7 + 1;
    } while (*piVar2 != 0);
    if (uVar7 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar3 = fcn.000163d4(arg4,0x1cd10,7);
    if ((iVar3 != 0) && (iVar3 = fcn.000163d4(arg4,0x1cd20,8), iVar3 != 0)) {
        return -0x7ffffffffffffffe;
    }
    if (cVar4 == '\0') {
        arg2_00 = fcn.00017c5c(0x1b);
        if (arg2_00 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *arg2_00 = 0x1b0c03;
    }
    else {
        arg2_00 = fcn.00017c5c(0x3c);
        if (arg2_00 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *arg2_00 = 0x3c0d03;
    }
    iVar3 = fcn.00017e78(*(arg1 + 0x140),arg2_00);
    (**(*0x1d5f8 + 0x48))(arg2_00);
    if (iVar3 == 0) {
        return -0x7ffffffffffffff7;
    }
    fcn.000169a4(arg4,&uStack_118,0xff);
    uVar7 = uVar8;
    cVar4 = uStack_118;
    while (cVar4 != '\0') {
        cVar4 = *(&uStack_118 + uVar7 + 1);
        uVar7 = uVar7 + 1;
    }
    arg2_01 = fcn.00017c2c();
    if (arg2_01 == NULL) {
        iVar6 = -0x7ffffffffffffff7;
        arg3_00 = iVar3;
    }
    else {
        *arg2_01 = 0x1803;
        arg2_01[1] = uVar7 + 5;
        while (uStack_118 != '\0') {
            uStack_118._0_1_ = *(&uStack_118 + uVar8 + 1);
            uVar8 = uVar8 + 1;
        }
        if ((uVar8 + 1 != 0) && (arg2_01 + 2 != &uStack_118)) {
            section..text(arg2_01 + 2,&uStack_118,uVar8 + 1);
        }
        arg3_00 = fcn.00017e78(iVar3,arg2_01);
        (**(*0x1d5f8 + 0x48))(arg2_01);
        (**(*0x1d5f8 + 0x48))(iVar3);
        if (arg3_00 == 0) {
            return -0x7ffffffffffffff7;
        }
        iVar6 = fcn.0001b650(auStackY_178,arg3,arg3_00,in_stack_fffffffffffffeb0);
        if (-1 < iVar6) {
            iVar6 = fcn.0001b5c0(auStackY_178);
            fcn.0001b830(auStackY_178);
        }
    }
    (**(*0x1d5f8 + 0x48))(arg3_00);
    return iVar6;
}


/* fcn.00019460 @ 0x19460 */

int64_t fcn.00019460(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iVar6 = arg2;
    iStackX_18 = arg3;
    arg1_00 = fcn.00019ae0(arg1);
    if (arg1_00 != NULL) {
        fcn.00018148(0x1d3a8,iVar6,aiStack_38,0);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x1d3c2;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.00018220(arg1_00,0,0x1d3c2,iVar3);
                if (iVar3 == 0) goto code_r0x000195e6;
                iStackX_18 = 0;
                iVar4 = (**(*0x1d620 + 8))(*0x1d620,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.00017c5c(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x1d620 + 8))(*0x1d620,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x1d5f8 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x000195e6;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x000195e6;
                if (iVar6 == 0) break;
                (**(*0x1d5f8 + 0x48))(iVar6);
                iVar6 = 0;
            }
            for (; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
            }
            cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            pcVar7 = NULL;
            if (cVar2 == ';') {
                pcVar7 = pcVar1;
            }
        } while (pcVar7 != NULL);
code_r0x000195e6:
        (**(*0x1d5f8 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x1d5f8 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x1d5f8 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.00012a14 @ 0x12a14 */

uint64_t fcn.00012a14(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    uint64_t uVar6;
    
    pcVar4 = arg1;
    while (uVar2 = 0, *arg1 != '\0') {
        do {
            uVar2 = uVar2 + 1;
        } while (*(uVar2 + arg1) != '\0');
        if ((uVar2 <= pcVar4 - arg1) || (cVar1 = *pcVar4, cVar1 == ':')) break;
        if (cVar1 + 0xbfU < 0x1a) {
            *pcVar4 = cVar1 + ' ';
        }
        pcVar4 = pcVar4 + 1;
    }
    cVar1 = *arg1;
    pcVar5 = 0x1cc88;
    uVar6 = 7;
    pcVar4 = 0x1cc88;
    pcVar3 = arg1;
    for (uVar2 = 7; (((cVar1 != '\0' && (*pcVar4 != '\0')) && (*pcVar3 == *pcVar4)) && (1 < uVar2)); uVar2 = uVar2 - 1)
    {
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar3;
    }
    if (*pcVar3 != *pcVar4) {
        cVar1 = *arg1;
        pcVar4 = 0x1cc90;
        pcVar3 = arg1;
        for (uVar2 = 8; ((cVar1 != '\0' && (*pcVar4 != '\0')) && ((*pcVar3 == *pcVar4 && (1 < uVar2))));
            uVar2 = uVar2 - 1) {
            pcVar3 = pcVar3 + 1;
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar3;
        }
        if (*pcVar3 != *pcVar4) {
            return 0x8000000000000002;
        }
    }
    for (; ((*arg1 != '\0' && (*pcVar5 != '\0')) && ((*arg1 == *pcVar5 && (1 < uVar6)))); uVar6 = uVar6 - 1) {
        arg1 = arg1 + 1;
        pcVar5 = pcVar5 + 1;
    }
    return ~-(*arg1 != *pcVar5) & 0x800000000000000f;
}


/* fcn.000185c0 @ 0x185c0 */

void fcn.000185c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ushort *arg1_00;
    int64_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uint32_t uStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    uchar uStack_7c;
    ulong *puStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [24];
    
    uStack_c8 = 0xf31fcbb5;
    uStack_c4 = 0x4215b53d;
    uStack_c0 = 0x3361db81;
    uStack_bc = 0x6a98d4e4;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    iVar1 = (**(*0x1d5f8 + 0x140))(&uStack_c8);
    uVar3 = 0;
    if (iVar1 < 0) {
        uVar9 = uVar3;
        if (iStackX_18 != 0) {
            piVar6 = &iStackX_18;
            iVar1 = iStackX_18;
            do {
                iVar8 = 0;
                uVar2 = fcn.00018518(iVar1,0,0,0);
                if (uVar3 <= uVar2 >> 1) {
                    uVar3 = fcn.00018518(iVar1,0,0,iVar8);
                    uVar3 = uVar3 >> 1;
                }
                piVar6 = piVar6 + 1;
                uVar9 = uVar9 + 1;
                iVar1 = *piVar6;
            } while (iVar1 != 0);
        }
        iVar1 = *(*0x1d5f0 + 0x40);
        if (&uStack_90 != *(iVar1 + 0x48)) {
            section..text(&uStack_90,*(iVar1 + 0x48),0x18);
        }
        (**(iVar1 + 0x18))(iVar1,iStack_8c,&iStack_68);
        (**(iVar1 + 0x40))(iVar1,0);
        (**(iVar1 + 0x28))(iVar1,arg1);
        uStack_b8 = iStack_70 - 3U;
        if (uVar9 < iStack_70 - 3U) {
            uStack_b8 = uVar9;
        }
        uVar9 = iStack_68 - 2U;
        if (uVar3 < iStack_68 - 2U) {
            uVar9 = uVar3;
        }
        uVar2 = (iStack_68 - uVar9) - 2 >> 1;
        uVar7 = (iStack_70 - uStack_b8) - 3 >> 1;
        uStack_a8 = uVar2;
        uStack_60 = uVar9;
        arg1_00 = fcn.00017c5c(uVar9 * 2 + 6);
        uVar3 = uVar9 * 2 + 4;
        if (uVar3 != 0) {
            fcn.00010300(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x250c;
        *(arg1_00 + uVar9 + 1) = 0x2510;
        (**(iVar1 + 0x38))(iVar1,uVar2,uVar7);
        iVar8 = uVar7 + 1;
        (**(iVar1 + 8))(iVar1,arg1_00);
        iStack_98 = iStackX_18;
        if (iStackX_18 != 0) {
            piStack_a0 = &iStackX_18;
            iVar4 = iStackX_18;
            do {
                iStack_98 = iVar4;
                if (uStack_b8 == 0) break;
                if (uVar3 != 0) {
                    fcn.00010300(arg1_00,uVar3 >> 1,0x20);
                }
                *arg1_00 = 0x2502;
                *(arg1_00 + uVar9 + 1) = 0x2502;
                (**(iVar1 + 0x38))(iVar1,uVar2);
                (**(iVar1 + 8))(iVar1);
                uVar5 = 0;
                uStack_b0 = fcn.00018518(iVar4,0,0,0);
                uStack_b0 = uStack_b0 >> 1;
                if (uVar9 < uStack_b0) {
                    fcn.00018518(iVar4,CONCAT71(uVar5 >> 8,1),uVar9,&uStack_b0);
                    uVar9 = uStack_b0;
                    iVar4 = fcn.00017c5c(uStack_b0 * 2 + 2);
                    fcn.00016608(iVar4,uVar9 + 1,iStack_98,uVar9 - 3);
                    fcn.000166e8(iVar4,uVar9 + 1,0x1d398);
                    (**(iVar1 + 0x38))(iVar1,uStack_a8 + 1,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                    (**(*0x1d5f8 + 0x48))();
                    uVar9 = uStack_60;
                    uVar2 = uStack_a8;
                }
                else {
                    (**(iVar1 + 0x38))(iVar1,(uVar9 - uStack_b0 >> 1) + 1 + uVar2,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                }
                iVar8 = iVar8 + 1;
                uStack_b8 = uStack_b8 - 1;
                piStack_a0 = piStack_a0 + 1;
                iVar4 = *piStack_a0;
                iStack_98 = iVar4;
            } while (iVar4 != 0);
        }
        if (uVar3 != 0) {
            fcn.00010300(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x2514;
        *(arg1_00 + uVar9 + 1) = 0x2518;
        (**(iVar1 + 0x38))(iVar1,uVar2,iVar8);
        (**(iVar1 + 8))(iVar1,arg1_00);
        (**(*0x1d5f8 + 0x48))(arg1_00);
        (**(iVar1 + 0x40))(iVar1,uStack_7c);
        (**(iVar1 + 0x38))(iVar1,iStack_84,iStack_80);
        (**(iVar1 + 0x28))(iVar1,iStack_88);
        if (arg2 != 0) {
            while (iVar1 = (**(*(*0x1d5f0 + 0x30) + 8))(*(*0x1d5f0 + 0x30),arg2), iVar1 < 0) {
                if (iVar1 == -0x7ffffffffffffffa) {
                    (**(*0x1d5f8 + 0x60))(1,*(*0x1d5f0 + 0x30) + 0x10,auStack_58);
                }
            }
        }
    }
    else {
        (**puStack_78)(arg1,arg2,&iStackX_18);
    }
    return;
}


/* fcn.00019634 @ 0x19634 */

uint64_t fcn.00019634(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t *arg1_00;
    int64_t *piVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t auStack_48 [2];
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        piVar1 = arg3;
        uVar5 = 0;
        do {
            piVar6 = piVar6 + 1;
            uVar4 = uVar5 + *piVar1 + -4;
            uVar5 = uVar4;
            piVar1 = *piVar6;
        } while (piVar1 != NULL);
        if (uVar4 != 0) {
            iStackX_18 = arg3;
            puVar2 = fcn.00017c5c(uVar4 + 0x18);
            if (puVar2 != NULL) {
                *puVar2 = *arg1;
                piVar6 = &iStackX_18;
                puVar2[1] = *(arg1 + 8);
                *(puVar2 + 2) = uVar4 + 0x18;
                arg1_00 = puVar2 + 0x14;
                do {
                    uVar4 = *arg3 - 4;
                    if ((uVar4 != 0) && (arg1_00 != arg3 + 4)) {
                        section..text(arg1_00,arg3 + 4,uVar4);
                    }
                    piVar6 = piVar6 + 1;
                    arg1_00 = arg1_00 + uVar4;
                    arg3 = *piVar6;
                } while (arg3 != NULL);
                if (arg1_00 != 0x1d3f8) {
                    section..text(arg1_00,0x1d3f8,4);
                }
                iVar3 = (***0x1d638)(*0x1d638,puVar2,arg2,auStack_48);
                if (iVar3 < 0) {
                    auStack_48[0] = 0;
                }
                (**(*0x1d5f8 + 0x48))(puVar2);
                return auStack_48[0];
            }
        }
    }
    return 0;
}


/* fcn.00018c7c @ 0x18c7c */

int64_t fcn.00018c7c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ushort *puVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t arg3_00;
    int64_t iVar5;
    uint32_t *arg3_01;
    ushort *puVar6;
    uint8_t *puVar7;
    int64_t iStackX_10;
    uint8_t auStack_48 [32];
    
    arg3_01 = &iStackX_10;
    iStackX_10 = arg2;
    iVar1 = fcn.00018b30(arg1,auStack_48,arg3_01);
    iVar5 = iStackX_10;
    if (-1 < iVar1) {
        iVar1 = iStackX_10 * 4 + 0xc;
        puVar2 = fcn.00017c5c(iVar1);
        if (puVar2 == NULL) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            *arg3 = puVar2;
            puVar7 = auStack_48;
            if (iVar5 != 0) {
                puVar6 = puVar2;
                do {
                    fcn.00016d10(puVar2,puVar6 + (iVar1 - puVar2),arg3_01,*puVar7);
                    puVar6 = *arg3;
                    puVar7 = puVar7 + 1;
                    iVar3 = fcn.00016534(puVar2,puVar6 + (iVar1 - puVar2) >> 1);
                    puVar2 = puVar2 + iVar3;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
            pcVar4 = fcn.00017f40(arg1);
            if (pcVar4 != NULL) {
                while( true ) {
                    if ((*pcVar4 == '\x7f') && (pcVar4[1] == -1)) {
                        arg3_00 = 0;
                        goto code_r0x00018d6e;
                    }
                    if ((*pcVar4 == '\x03') && (pcVar4[1] == '\x14')) break;
                    pcVar4 = pcVar4 + *(pcVar4 + 2);
                }
                arg3_00 = *(pcVar4 + 4);
code_r0x00018d6e:
                if (arg3_00 != 0) {
                    iVar5 = *arg3;
                    *puVar2 = 0x5c;
                    puVar2 = puVar2 + 1;
                    fcn.00016d10(puVar2,(iVar5 - puVar2) + iVar1,arg3_01,arg3_00);
                    iVar5 = fcn.00016534(puVar2,(*arg3 - puVar2) + iVar1 >> 1);
                    puVar2 = puVar2 + iVar5;
                }
            }
            *puVar2 = 0;
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00019348 @ 0x19348 */

int16_t fcn.00019348(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int16_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t aiStackX_10 [4];
    
    aiStackX_10[0] = arg2;
    pcVar4 = fcn.00019ae0(arg1);
    if (pcVar4 == NULL) {
        iVar3 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffe;
        cVar2 = *pcVar4;
        arg1_00 = pcVar4;
        while (cVar2 != '\0') {
            pcVar6 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar6 == ';') break;
                    pcVar6 = pcVar6 + 1;
                } while (*pcVar6 != '\0');
                if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                    pcVar6 = pcVar6 + 1;
                }
            }
            iVar5 = 0;
            do {
                iVar8 = iVar5 + 1;
                pcVar1 = iVar5 + 0x1d3a1;
                iVar5 = iVar8;
            } while (*pcVar1 != '\0');
            iVar5 = fcn.00016500(arg1_00,0x1d3a0,iVar8);
            if (iVar5 != 0) {
                if (aiStackX_10[0] == 0) {
                    iVar7 = (***0x1d620)(*0x1d620,arg1,aiStackX_10);
                }
                else {
                    iVar7 = (*(*0x1d620)[2])(*0x1d620,arg1);
                }
                if (iVar7 < 0) break;
            }
            arg1_00 = pcVar6;
            cVar2 = *pcVar6;
        }
        (**(*0x1d5f8 + 0x48))(pcVar4);
        iVar3 = 0;
        if (-1 < iVar7) {
            iVar3 = aiStackX_10[0];
        }
    }
    return iVar3;
}


/* fcn.0001a254 @ 0x1a254 */

int64_t fcn.0001a254(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char *arg3_00;
    char *pcVar2;
    uint64_t uVar3;
    uint32_t uStackX_8;
    uint uStackX_c;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        *arg3 = 0;
        if ((*arg2 & 0x80) == 0) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            arg3_00 = fcn.00017c2c(arg1,*(arg2 + 0x40) + 1);
            if (arg3_00 == NULL) {
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                iVar1 = *(arg2 + 0x3c) + arg1;
                if (iVar1 == 0) {
                    iVar1 = -0x7ffffffffffffffe;
                }
                else {
                    iVar1 = fcn.00019b6c(iVar1,*(arg2 + 0x40),arg3_00,&uStackX_8);
                }
                if (-1 < iVar1) {
                    uVar3 = uStackX_8;
                    arg3_00[uVar3] = '\0';
                    if (uVar3 != 0) {
                        pcVar2 = arg3_00;
                        do {
                            if (9 < *pcVar2 - 0x30U) goto code_r0x0001a35b;
                            pcVar2 = pcVar2 + 1;
                        } while (pcVar2 - arg3_00 < uVar3);
                    }
                    iVar1 = fcn.000167e4(*(arg2 + 0x3c) + arg1,0,&uStackX_8);
                    if (CONCAT44(uStackX_c,uStackX_8) < 0x10000) {
                        *arg3 = uStackX_8;
                    }
                    else {
code_r0x0001a35b:
                        iVar1 = -0x7ffffffffffffffe;
                    }
                }
                (**(*0x1d5f8 + 0x48))(arg3_00);
            }
        }
    }
    return iVar1;
}


/* fcn.00013608 @ 0x13608 */

int64_t fcn.00013608(uint32_t arg1)

{
    char cVar1;
    uint uVar2;
    char *pcVar3;
    uint *arg2;
    ushort *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint in_register_0000000c;
    uint32_t *puVar7;
    uint32_t *arg2_00;
    int64_t iVar8;
    int64_t arg1_00;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar6 + 0x458) == '\0') {
        arg2 = fcn.00017c5c(0x1b);
        if (arg2 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *arg2 = 0x1b0c03;
        iVar8 = 4;
        if (arg2 + 1 != iVar6 + 0x45c) {
            section..text(arg2 + 1,iVar6 + 0x45c,4);
        }
        *(arg2 + 0xe) = *(iVar6 + 0x49c);
        *(arg2 + 0x12) = 0;
        *(arg2 + 4) = 6;
        if (arg2 + 0x13 != iVar6 + 0x47c) {
            section..text(arg2 + 0x13,iVar6 + 0x47c,4);
        }
        arg2_00 = iVar6 + 0x46c;
        puVar7 = arg2 + 0x17;
    }
    else {
        arg2 = fcn.00017c5c(0x3c);
        if (arg2 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *arg2 = 0x3c0d03;
        *(arg2 + 0x2b) = 0x40;
        *(arg2 + 0x26) = *(iVar6 + 0x49c);
        *(arg2 + 10) = 6;
        *(arg2 + 0x2a) = 0;
        iVar8 = 0x10;
        if (arg2 + 1 != iVar6 + 0x45c) {
            section..text(arg2 + 1,iVar6 + 0x45c,0x10);
        }
        if (arg2 + 5 != iVar6 + 0x48c) {
            section..text(arg2 + 5,iVar6 + 0x48c,0x10);
        }
        arg2_00 = iVar6 + 0x47c;
        puVar7 = arg2 + 0xb;
    }
    if (puVar7 != arg2_00) {
        section..text(puVar7,arg2_00,iVar8);
    }
    iVar8 = fcn.00017e78(*(iVar6 + 0x140),arg2);
    (**(*0x1d5f8 + 0x48))(arg2);
    if (iVar8 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar5 = 0;
    arg1_00 = iVar8;
    if (*(iVar6 + 0x4a8) != 0) {
        uVar2 = *(iVar6 + 0x4a0);
        puVar4 = fcn.00017c2c();
        if (puVar4 == NULL) goto code_r0x00013787;
        *puVar4 = 0x1f03;
        puVar4[1] = uVar2 * 0x10 + 5;
        *(puVar4 + 2) = *(iVar6 + 0x458) != '\0';
        if ((*(iVar6 + 0x4a0) != 0) && (puVar4 + 5 != *(iVar6 + 0x4a8))) {
            section..text(puVar4 + 5,*(iVar6 + 0x4a8),*(iVar6 + 0x4a0) << 4);
        }
        iVar5 = fcn.00017e78(iVar8,puVar4);
        (**(*0x1d5f8 + 0x48))(puVar4);
        (**(*0x1d5f8 + 0x48))(iVar8);
        arg1_00 = 0;
        if (iVar5 == 0) {
            return -0x7ffffffffffffff7;
        }
    }
    iVar8 = iVar5;
    pcVar3 = *(iVar6 + 0x4b0);
    iVar5 = 0;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
        cVar1 = pcVar3[iVar5];
    }
    puVar4 = fcn.00017c2c(pcVar3,iVar5 + 5);
    if (puVar4 != NULL) {
        *puVar4 = 0x1803;
        puVar4[1] = iVar5 + 5;
        iVar5 = 0;
        puVar7 = *(iVar6 + 0x4b0);
        cVar1 = *puVar7;
        while (cVar1 != '\0') {
            iVar5 = iVar5 + 1;
            cVar1 = *(puVar7 + iVar5);
        }
        if ((iVar5 + 1 != 0) && (puVar4 + 2 != puVar7)) {
            section..text(puVar4 + 2,puVar7,iVar5 + 1);
        }
        if (iVar8 == 0) {
            iVar5 = fcn.00017e78(arg1_00,puVar4);
            (**(*0x1d5f8 + 0x48))(arg1_00);
        }
        else {
            iVar5 = fcn.00017e78(iVar8,puVar4);
            (**(*0x1d5f8 + 0x48))(iVar8);
        }
        (**(*0x1d5f8 + 0x48))(puVar4);
        if (iVar5 != 0) {
            if (*(iVar6 + 0x458) == '\0') {
                iVar8 = (**(*0x1d5f8 + 0x88))(*(*(iVar6 + 0x10) + 8),0x1bd50,*(*(iVar6 + 0x10) + 0x20));
                if (iVar8 < 0) {
                    return iVar8;
                }
                (**(*0x1d5f8 + 0x48))(*(*(iVar6 + 0x10) + 0x20));
                iVar6 = *(iVar6 + 0x10);
            }
            else {
                iVar8 = (**(*0x1d5f8 + 0x88))(*(*(iVar6 + 0x18) + 8),0x1bd50,*(*(iVar6 + 0x18) + 0x20),iVar5);
                if (iVar8 < 0) {
                    return iVar8;
                }
                (**(*0x1d5f8 + 0x48))(*(*(iVar6 + 0x18) + 0x20));
                iVar6 = *(iVar6 + 0x18);
            }
            *(iVar6 + 0x20) = iVar5;
            return 0;
        }
        return -0x7ffffffffffffff7;
    }
    if (arg1_00 != 0) {
        (**(*0x1d5f8 + 0x48))(arg1_00);
    }
    if (iVar8 == 0) {
        return -0x7ffffffffffffff7;
    }
code_r0x00013787:
    (**(*0x1d5f8 + 0x48))(iVar8);
    return -0x7ffffffffffffff7;
}


/* fcn.00015e34 @ 0x15e34 */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00015e34(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uchar *arg2;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    char acStackX_8 [4];
    int8_t var_14h;
    uchar auStackX_10 [3];
    int32_t var_1bh;
    int32_t var_1fh;
    int64_t iStackX_20;
    uint32_t var_67h;
    int32_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uint32_t auStack_98 [4];
    uint32_t auStack_88 [6];
    uchar auStack_70 [2];
    uchar uStack_6e;
    uchar uStack_4b;
    uchar auStack_44 [3];
    int64_t var_39h;
    int64_t var_29h;
    int64_t var_11h;
    
    puVar1 = *(arg1 + 0x128);
    iVar3 = *(arg1 + 0x118);
    puVar4 = NULL;
    puVar6 = NULL;
    iStackX_20 = 0;
    acStackX_8[0] = '\0';
    fcn.000102c0(auStack_88,0x12);
    if (auStack_88 != arg1 + 0x45c) {
        section..text(auStack_88,arg1 + 0x45c,0x10);
    }
    fcn.000102c0(auStack_70,0x34);
    uStack_6e = 1;
    arg2 = auStack_70;
    _auStack_44 = 50000;
    var_39h._1_4_ = 50000;
    auStack_70[0] = 0x3a;
    uStack_4b = 0x40;
    iVar2 = (**(iVar3 + 8))(iVar3);
    puVar7 = puVar4;
    if (-1 < iVar2) {
        iVar2 = fcn.00015b5c(arg1,arg2,auStack_98);
        if (iVar2 < 0) {
            *(arg1 + 0x4c8) = 1;
        }
        else if (arg1 + 0x47c != auStack_98) {
            section..text(arg1 + 0x47c,auStack_98,0x10);
        }
        _auStackX_10 = 0;
        iVar2 = (**puVar1)(puVar1,2,4,auStackX_10);
        if (((((-1 < iVar2) &&
              (iVar2 = (**(*0x1d5f8 + 0x50))(0x200,0x10,0x126f0,acStackX_8,&iStackX_20), -1 < iVar2)) &&
             (iVar2 = (*puVar1[2])(puVar1,4,iStackX_20), puVar7 = puVar6, -1 < iVar2)) &&
            ((iVar2 = (**puVar1)(puVar1,4,0x12,auStack_88), -1 < iVar2 || (iVar2 == -0x7ffffffffffffffa)))) &&
           (iVar2 == -0x7ffffffffffffffa)) {
            while (acStackX_8[0] == '\0') {
                (**(iVar3 + 0x40))(iVar3);
            }
            stack0x00000018 = 0;
            iVar3 = (*puVar1[1])(puVar1,4,&var_1fh + 1,0);
            if ((iVar3 == -0x7ffffffffffffffb) && (stack0x00000018 != 0)) {
                puVar4 = fcn.00017c2c();
                if (puVar4 == NULL) {
                    return -0x7ffffffffffffff7;
                }
                iVar2 = (*puVar1[1])(puVar1,4,&var_1fh + 1,puVar4);
                if (-1 < iVar2) {
                    uVar5 = 0;
                    if ((stack0x00000018 & 0xfffffffffffffff0) != 0) {
                        puVar6 = puVar4;
                        do {
                            if ((puVar6 == auStack_88) || (iVar3 = fcn.000102e0(puVar6,auStack_88,0x10), iVar3 == 0))
                            break;
                            uVar5 = uVar5 + 1;
                            puVar6 = puVar6 + 4;
                        } while (uVar5 < stack0x00000018 >> 4);
                    }
                    puVar7 = puVar4;
                    if (uVar5 == stack0x00000018 >> 4) {
                        iVar2 = -0x7fffffffffffffeb;
                    }
                    goto code_r0x00016082;
                }
            }
            iVar2 = -0x7ffffffffffffff9;
            puVar7 = puVar4;
        }
    }
code_r0x00016082:
    if (iStackX_20 != 0) {
        (*puVar1[3])(puVar1,4);
        (**(*0x1d5f8 + 0x70))(iStackX_20);
    }
    if (puVar7 != NULL) {
        (**(*0x1d5f8 + 0x48))(puVar7);
    }
    return iVar2;
}


/* fcn.0001a138 @ 0x1a138 */

int64_t fcn.0001a138(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t arg3_00;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    uint32_t in_R9D;
    uint32_t *arg4;
    uint32_t uStackX_10;
    uint uStackX_14;
    
    iVar4 = 0;
    if ((arg2 != 0) && (arg3 != 0)) {
        if ((*arg2 & 0x40) == 0) {
            return -0x7ffffffffffffff2;
        }
        uVar1 = *(arg2 + 0x38);
        if (((1 < uVar1) && (pcVar3 = *(arg2 + 0x34) + arg1, *pcVar3 == '[')) && (pcVar3[uVar1 - 1] == ']')) {
            arg3_00 = fcn.00017c2c(arg1,uVar1);
            if (arg3_00 == 0) {
                return -0x7ffffffffffffff7;
            }
            if (pcVar3 + 1 == NULL) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                arg4 = &uStackX_10;
                iVar2 = fcn.00019b6c(pcVar3 + 1,uVar1 - 2,arg3_00,arg4);
                in_R9D = arg4;
            }
            if (iVar2 < 0) {
                (**(*0x1d5f8 + 0x48))();
                return iVar2;
            }
            *(uStackX_10 + arg3_00) = 0;
            iVar2 = fcn.00016acc(arg3_00,&uStackX_10,arg3,in_R9D);
            if ((iVar2 < 0) || (*CONCAT44(uStackX_14,uStackX_10) != '\0')) {
                iVar4 = -0x7ffffffffffffffe;
            }
            (**(*0x1d5f8 + 0x48))(arg3_00);
            return iVar4;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.0001a070 @ 0x1a070 */

int64_t fcn.0001a070(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg3_00;
    uint32_t auStackX_10 [2];
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if ((*arg2 & 0x40) == 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        arg3_00 = fcn.00017c2c(arg1,*(arg2 + 0x38) + 1);
        if (arg3_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            arg1 = *(arg2 + 0x34) + arg1;
            if (arg1 == 0) {
                iVar1 = -0x7ffffffffffffffe;
            }
            else {
                iVar1 = fcn.00019b6c(arg1,*(arg2 + 0x38),arg3_00,auStackX_10);
            }
            if (iVar1 < 0) {
                (**(*0x1d5f8 + 0x48))(arg3_00);
            }
            else {
                *arg3 = arg3_00;
                *(auStackX_10[0] + arg3_00) = 0;
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00016a38 @ 0x16a38 */

ulong fcn.00016a38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.000167b8(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < uVar1 + 1 + arg1) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00016aba;
    }
    if (arg1 < arg2 + arg3 * 2) {
        return 0x800000000000000f;
    }
code_r0x00016aba:
    for (; *arg1 != 0; arg1 = arg1 + 1) {
        *arg2 = *arg1;
        arg2 = arg2 + 2;
    }
    *arg2 = uVar2;
    return 0;
}


/* fcn.000126f4 @ 0x126f4 */

//WARNING: Variable defined which should be unmapped: var_23h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h

int64_t fcn.000126f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *arg2_00;
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    int64_t var_fh;
    int32_t var_23h;
    int64_t var_27h;
    uint32_t var_67h;
    int64_t var_7fh;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int *piStack_58;
    ushort uStack_50;
    uint32_t auStack_4e [4];
    uint uStack_3c;
    uchar auStack_38 [7];
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    
    uVar3 = 0;
    stack0x00000020 = 0;
    iVar2 = 0;
    iStack_80 = 0;
    fcn.000102c0(&iStack_70,0x20);
    iVar1 = (**(*0x1d5f8 + 0x98))(*(arg1 + 8),0x1bd60,&iStack_78);
    if (-1 < iVar1) {
        uStack_88 = 0;
        iVar1 = (**(iStack_78 + 8))(iStack_78,6,&uStack_88,0);
        if (iVar1 == -0x7ffffffffffffffb) {
            iVar2 = fcn.00017c2c(0x8000000000000005,uStack_88);
            if (iVar2 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar1 = (**(iStack_78 + 8))(iStack_78,6,&uStack_88,iVar2);
            if (iVar1 < 0) {
                (**(*0x1d5f8 + 0x48))(iVar2);
                iVar2 = 0;
            }
            else {
                uVar3 = uStack_88 >> 4;
            }
        }
    }
    iVar1 = fcn.000189d0(*(arg1 + 8),*(*(arg1 + 0x18) + 0x10),0x1bd90,&iStack_80);
    if (-1 < iVar1) {
        iVar1 = (**(*0x1d5f8 + 0x118))(iStack_80,0x1c040,&var_27h + 1,*(*(arg1 + 0x18) + 0x10),*(arg1 + 8),0x10);
        if (-1 < iVar1) {
            fcn.000102c0(&uStack_50,0x28);
            uStack_50 = 0x1101;
            uStack_3c = uVar3;
            _auStack_38 = iVar2;
            if (auStack_4e != arg1 + 0x45c) {
                section..text(auStack_4e,arg1 + 0x45c,0x10);
            }
            iVar1 = (**(stack0x00000020 + 8))(stack0x00000020,&uStack_50);
            if (-1 < iVar1) {
                var_fh._1_1_ = '\0';
                iStack_68 = -0x7ffffffffffffffa;
                iVar1 = (**(*0x1d5f8 + 0x50))(0x200,0x10,0x126f0,&var_fh + 1,&iStack_70);
                if (-1 < iVar1) {
                    iVar1 = (**(stack0x00000020 + 0x10))(stack0x00000020,arg2,&iStack_70);
                    if (-1 < iVar1) {
                        while (var_fh._1_1_ == '\0') {
                            (**(stack0x00000020 + 0x30))(stack0x00000020);
                        }
                        iVar1 = iStack_68;
                        if (-1 < iStack_68) {
                            if (((piStack_58 == NULL) || (*piStack_58 == 0)) ||
                               (arg2_00 = *(piStack_58 + 2), arg2_00 == NULL)) {
                                iVar1 = -0x7ffffffffffffff9;
                            }
                            else {
                                if (arg3 != arg2_00) {
                                    section..text(arg3,arg2_00,0x10);
                                }
                                iVar1 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (iStack_70 != 0) {
        (**(*0x1d5f8 + 0x70))(iStack_70);
    }
    if (piStack_58 != NULL) {
        if (*(piStack_58 + 2) != 0) {
            (**(*0x1d5f8 + 0x48))(*(piStack_58 + 2));
        }
        (**(*0x1d5f8 + 0x48))(piStack_58);
    }
    if (stack0x00000020 != 0) {
        (**(stack0x00000020 + 8))(stack0x00000020,0);
        (**(*0x1d5f8 + 0x120))(iStack_80,0x1c040,*(*(arg1 + 0x18) + 0x10),*(arg1 + 8));
    }
    if (iStack_80 != 0) {
        fcn.00018a1c(*(arg1 + 8),*(*(arg1 + 0x18) + 0x10),0x1bd90,iStack_80);
    }
    if (iVar2 != 0) {
        (**(*0x1d5f8 + 0x48))(iVar2);
    }
    return iVar1;
}


/* fcn.00016398 @ 0x16398 */

int64_t fcn.00016398(void)

{
    if (*0x1d608 == 0) {
        (**(*0x1d5f8 + 0x140))(0x1bce0,0,0x1d608);
    }
    return *0x1d608;
}


/* fcn.0001ac3c @ 0x1ac3c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001ac3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    uint uVar1;
    int64_t iVar2;
    ulong uStackX_10;
    ulong in_stack_00000028;
    int64_t var_38h;
    int64_t iStack_78;
    uchar uStack_70;
    uint32_t uStack_6f;
    uint32_t uStack_6b;
    ushort uStack_66;
    uint32_t auStack_60 [2];
    int64_t var_50h;
    int8_t var_48h;
    int64_t var_47h;
    int16_t var_3eh;
    uint uStack_44;
    int64_t var_38h_2;
    uint32_t *puStack_38;
    int16_t var_bp_28h;
    int64_t var_20h;
    int8_t var_bp_18h;
    int64_t var_10h;
    
    if ((arg2 == 0) || (var_38h == 0)) {
        return -0x7ffffffffffffffe;
    }
    if (((arg3 & 0xff) - 4 & 0xfd) != 0) {
        return -0x7ffffffffffffffd;
    }
    fcn.000102c0(var_38h,0xd0);
    fcn.000102c0(&var_47h + 7,0x18);
    iVar2 = fcn.000189d0(arg2,arg1,0x1c060,var_38h + 0x18);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = (**(*0x1d5f8 + 0x118))(*(var_38h + 0x18),0x1bcd0,&iStack_78,arg1,arg2,0x10);
    if ((-1 < iVar2) && (iStack_78 != 0)) {
        *(var_38h + 0x20) = iStack_78;
        *(var_38h + 0x28) = 0x13f20;
        *(var_38h + 0x30) = in_stack_00000028;
        *(var_38h + 8) = arg1;
        *(var_38h + 0x10) = arg2;
        *var_38h = arg3;
        iVar2 = fcn.00016398();
        uVar1 = (**(iVar2 + 0x18))(0x231);
        *(var_38h + 200) = uVar1;
        if (arg4 != 0) {
            unique0x00023d00 = *arg4;
            uStack_44 = *(arg4 + 4);
            if (*var_38h == '\x04') {
                uStack_70 = *(arg4 + 0xc);
                uStack_66 = *(arg4 + 0x16);
                var_38h_2._0_1_ = 0;
                if (&uStack_6f != arg4 + 0xd) {
                    section..text(&uStack_6f,arg4 + 0xd,4);
                }
                if (&uStack_6b != arg4 + 0x11) {
                    section..text(&uStack_6b,arg4 + 0x11,4);
                }
                puStack_38 = &uStack_70;
            }
            else {
                _var_48h = *(arg4 + 0x1a);
                var_38h_2._0_1_ = 1;
                if (auStack_60 != arg4 + 9) {
                    section..text(auStack_60,arg4 + 9,0x10);
                }
                puStack_38 = auStack_60;
            }
            iVar2 = (**(iStack_78 + 8))(iStack_78,&var_47h + 7);
            if (iVar2 < 0) goto code_r0x0001aec1;
        }
        iVar2 = (**(*0x1d5f8 + 0x50))(0x200,0x10,0x1ab84,var_38h + 0xb8,&uStackX_10);
        if (-1 < iVar2) {
            *(var_38h + 0x38) = uStackX_10;
            *(var_38h + 0x48) = var_38h + 0x50;
            iVar2 = (**(*0x1d5f8 + 0x50))(0x200,0x10,0x1ab84,var_38h + 0xb9,&uStackX_10);
            if (-1 < iVar2) {
                *(var_38h + 0x78) = uStackX_10;
                *(var_38h + 0x88) = var_38h + 0x90;
                iVar2 = (**(*0x1d5f8 + 0x50))(0x80000000,8,0,0,&uStackX_10);
                if (-1 < iVar2) {
                    *(var_38h + 0xc0) = uStackX_10;
                    return 0;
                }
            }
        }
    }
code_r0x0001aec1:
    fcn.0001aba0(var_38h);
    return iVar2;
}


/* fcn.00014060 @ 0x14060 */

void fcn.00014060(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    
    if (arg1 != 0) {
        if (*(arg1 + 0x10) != 0) {
            if (*(*(arg1 + 0x10) + 8) != 0) {
                (**(*0x1d5f8 + 0x48))();
            }
            (**(*0x1d5f8 + 0x48))(*(arg1 + 0x10));
        }
        iVar1 = *(arg1 + 0x18);
        if ((iVar1 != 0) && (*(iVar1 + 0x10) != 0)) {
            uVar2 = 0;
            if (*(iVar1 + 8) != 0) {
                iVar3 = 0;
                do {
                    (**(*0x1d5f8 + 0x48))(*(*(iVar1 + 0x10) + iVar3));
                    (**(*0x1d5f8 + 0x48))(*(*(*(arg1 + 0x18) + 0x10) + 8 + iVar3));
                    iVar1 = *(arg1 + 0x18);
                    iVar3 = iVar3 + 0x10;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(iVar1 + 8));
            }
            (**(*0x1d5f8 + 0x48))(*(*(arg1 + 0x18) + 0x10));
        }
        piVar4 = *(arg1 + 0x30);
        piVar5 = *piVar4;
        while (piVar4 != arg1 + 0x30) {
            if (piVar4[2] != 0) {
                (**(*0x1d5f8 + 0x48))();
            }
            *(*piVar4 + 8) = piVar4[1];
            *piVar4[1] = *piVar4;
            (**(*0x1d5f8 + 0x48))(piVar4);
            piVar4 = piVar5;
            piVar5 = *piVar5;
        }
        (**(*0x1d5f8 + 0x48))(arg1);
    }
    return;
}


/* fcn.000141cc @ 0x141cc */

ulong fcn.000141cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    int16_t iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int16_t *piVar9;
    uint *in_stack_00000028;
    
    uVar8 = 0;
    if ((((arg2 == 0) || (arg3 == 0)) || (arg4 == 0)) || (in_stack_00000028 == NULL)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        for (puVar6 = *(arg1 + 0x4e0); puVar6 != arg1 + 0x4e0; puVar6 = *puVar6) {
            if ((puVar6[2] != 0) && (piVar1 = *(puVar6[2] + 8), piVar1 != NULL)) {
                iVar4 = *arg2;
                piVar9 = arg2;
                while ((iVar4 != 0 && (iVar4 == *piVar1))) {
                    piVar9 = piVar9 + 1;
                    piVar1 = piVar1 + 1;
                    iVar4 = *piVar9;
                }
                if (*piVar9 == *piVar1) {
                    *in_stack_00000028 = *(puVar6 + 4);
                    uVar5 = *arg3;
                    if (uVar5 < puVar6[5]) {
                        *arg3 = puVar6[5];
                        return 0x8000000000000005;
                    }
                    for (puVar7 = puVar6[6]; puVar7 != puVar6 + 6; puVar7 = *puVar7) {
                        if (uVar8 < uVar5) {
                            uVar2 = uVar5 - uVar8;
                            if (puVar7[4] < uVar5 - uVar8) {
                                uVar2 = puVar7[4];
                            }
                            if ((uVar2 != 0) && (uVar8 + arg4 != puVar7[3])) {
                                section..text(uVar8 + arg4,puVar7[3],uVar2);
                            }
                            uVar5 = *arg3;
                            uVar2 = uVar5 - uVar8;
                            if (puVar7[4] < uVar5 - uVar8) {
                                uVar2 = puVar7[4];
                            }
                            uVar8 = uVar8 + uVar2;
                        }
                    }
                    *arg3 = uVar8;
                    return 0;
                }
            }
        }
        uVar3 = 0x800000000000000e;
    }
    return uVar3;
}


/* fcn.0001a9e0 @ 0x1a9e0 */

ulong fcn.0001a9e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t arg1_01;
    int64_t *piVar4;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    arg1_00 = *(arg1 + 8);
    iVar2 = fcn.0001a44c(arg1_00,*(arg1 + 0x10),arg2);
    if (iVar2 == 0) {
        if (arg1_00 < *arg1) {
            iVar2 = 0;
            piVar4 = arg1_00 * 0x10 + *(arg1 + 0x10);
            cVar1 = *arg2;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = *(iVar2 + arg2);
            }
            iVar2 = iVar2 + 1;
            iVar3 = fcn.00017c2c();
            *piVar4 = iVar3;
            if (iVar3 != 0) {
                if ((iVar2 != 0) && (iVar3 != arg2)) {
                    section..text(iVar3,arg2,iVar2);
                }
                *(*piVar4 + -1 + iVar2) = 0;
                iVar2 = 0;
                cVar1 = *arg3;
                while (cVar1 != '\0') {
                    iVar2 = iVar2 + 1;
                    cVar1 = *(iVar2 + arg3);
                }
                iVar2 = iVar2 + 1;
                iVar3 = fcn.00017c2c();
                piVar4[1] = iVar3;
                if (iVar3 != 0) {
                    if ((iVar2 != 0) && (iVar3 != arg3)) {
                        section..text(iVar3,arg3,iVar2);
                    }
                    *(piVar4[1] + -1 + iVar2) = 0;
                    *(arg1 + 8) = *(arg1 + 8) + 1;
                    return 0;
                }
                (**(*0x1d5f8 + 0x48))(*piVar4);
            }
        }
    }
    else {
        iVar3 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            iVar3 = iVar3 + 1;
            cVar1 = *(iVar3 + arg3);
        }
        iVar3 = iVar3 + 1;
        arg1_01 = fcn.00017c2c();
        if (arg1_01 != 0) {
            if ((iVar3 != 0) && (arg1_01 != arg3)) {
                section..text(arg1_01,arg3,iVar3);
            }
            *(arg1_01 + -1 + iVar3) = 0;
            if (*(iVar2 + 8) != 0) {
                (**(*0x1d5f8 + 0x48))();
            }
            *(iVar2 + 8) = arg1_01;
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.0001aef4 @ 0x1aef4 */

int64_t fcn.0001aef4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar3 == 0) || (*(iVar3 + 0x20) == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        *(iVar3 + 0x40) = 0x8000000000000006;
        **(iVar3 + 0x48) = arg2;
        *(*(iVar3 + 0x48) + 8) = arg3;
        *(*(iVar3 + 0x48) + 0x10) = arg4;
        *(*(iVar3 + 0x48) + 0x18) = 0;
        *(*(iVar3 + 0x48) + 0x20) = 0;
        if ((*(iVar3 + 0x28) == NULL) || (iVar2 = (**(iVar3 + 0x28))(0,*(iVar3 + 0x48),*(iVar3 + 0x30)), -1 < iVar2))
        {
            iVar1 = *(iVar3 + 0x20);
            *(iVar3 + 0xb8) = 0;
            iVar2 = (**(iVar1 + 0x10))(iVar1,iVar3 + 0x38);
            if (-1 < iVar2) {
                while (*(iVar3 + 0xb8) == '\0') {
                    (**(iVar1 + 0x28))(iVar1);
                }
                iVar2 = *(iVar3 + 0x40);
            }
        }
    }
    return iVar2;
}


/* fcn.0001afac @ 0x1afac */

int64_t fcn.0001afac(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (((iVar4 == 0) || (*(iVar4 + 0x20) == 0)) || (arg3 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        *(iVar4 + 0x80) = 0x8000000000000006;
        if (arg2 == '\0') {
            **(iVar4 + 0x88) = 0;
        }
        else {
            **(iVar4 + 0x88) = arg3;
        }
        *(*(iVar4 + 0x88) + 8) = 0;
        *(*(iVar4 + 0x88) + 0x10) = 0;
        *(*(iVar4 + 0x88) + 0x18) = *(arg3 + 0x18);
        *(*(iVar4 + 0x88) + 0x20) = *(arg3 + 0x20);
        iVar2 = *0x1d5f8;
        iVar1 = *(iVar4 + 0x20);
        *(iVar4 + 0xb9) = 0;
        iVar2 = (**(iVar2 + 0x58))(*(iVar4 + 0xc0),2,*(iVar4 + 200) * 10000);
        if (-1 < iVar2) {
            iVar2 = (**(iVar1 + 0x20))(iVar1,iVar4 + 0x78);
            if (iVar2 < 0) {
                (**(*0x1d5f8 + 0x58))(*(iVar4 + 0xc0),0,0);
            }
            else {
                while ((*(iVar4 + 0xb9) == '\0' && (iVar3 = (**(*0x1d5f8 + 0x78))(*(iVar4 + 0xc0)), iVar3 < 0))) {
                    (**(iVar1 + 0x28))(iVar1);
                }
                (**(*0x1d5f8 + 0x58))(*(iVar4 + 0xc0),0,0);
                if (*(iVar4 + 0xb9) == '\0') {
                    (**(iVar1 + 0x18))(iVar1,iVar4 + 0x78);
                    return -0x7fffffffffffffee;
                }
                *(iVar4 + 0xb9) = 0;
                if (((*(iVar4 + 0x28) != NULL) && ((*(iVar4 + 0x80) == 0 || (*(iVar4 + 0x80) == -0x7fffffffffffffdd))))
                   && (iVar2 = (**(iVar4 + 0x28))(1,*(iVar4 + 0x88),*(iVar4 + 0x30)), iVar2 < 0)) {
                    return iVar2;
                }
                *(arg3 + 0x28) = *(iVar4 + 0x80);
                *(arg3 + 8) = *(*(iVar4 + 0x88) + 8);
                *(arg3 + 0x10) = *(*(iVar4 + 0x88) + 0x10);
                *(arg3 + 0x18) = *(*(iVar4 + 0x88) + 0x18);
            }
        }
    }
    return iVar2;
}


/* fcn.00012b2c @ 0x12b2c */

int64_t fcn.00012b2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    char *arg1_00;
    char *pcStackX_8;
    int *in_stack_00000028;
    
    if ((((arg1 == 0) || (arg2 == 0)) || (in_stack_00000028 == NULL)) || ((arg3 != 0 && (arg4 == 0)))) {
        return -0x7ffffffffffffffe;
    }
    iVar2 = fcn.0001a44c(arg3,arg4,0x1cca0);
    if (iVar2 == 0) {
code_r0x00012beb:
        iVar2 = fcn.0001a384(arg1,arg2,&pcStackX_8);
        if (-1 < iVar2) {
            cVar1 = *pcStackX_8;
            iVar2 = 0;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = pcStackX_8[iVar2];
            }
            arg1_00 = pcStackX_8 + iVar2 + -4;
            iVar2 = fcn.00016488(arg1_00,0x1ccf8);
            if (iVar2 == 0) {
                *in_stack_00000028 = 0;
            }
            else {
                iVar2 = fcn.00016488(arg1_00,0x1cd00);
                if (iVar2 == 0) {
                    *in_stack_00000028 = 1;
                }
                else {
                    iVar2 = fcn.00016488(arg1_00,0x1cd08);
                    *in_stack_00000028 = (iVar2 != 0) + 2;
                }
            }
            (**(*0x1d5f8 + 0x48))(pcStackX_8);
            iVar2 = -0x7ffffffffffffff2;
            if (*in_stack_00000028 < 3) {
                iVar2 = 0;
            }
        }
    }
    else {
        iVar3 = fcn.00016488(*(iVar2 + 8),0x1ccb0);
        if (iVar3 == 0) {
            *in_stack_00000028 = 0;
        }
        else {
            iVar3 = fcn.00016488(*(iVar2 + 8),0x1ccc0);
            if (iVar3 == 0) {
                *in_stack_00000028 = 1;
            }
            else {
                iVar2 = fcn.00016488(*(iVar2 + 8),0x1cce0);
                if (iVar2 != 0) goto code_r0x00012beb;
                *in_stack_00000028 = 2;
            }
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001a4b8 @ 0x1a4b8 */

ulong fcn.0001a4b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    bool bVar5;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    
    if (((arg3 == 0) || (arg4 != 0)) && (in_stack_00000038 != NULL)) {
        pcVar3 = fcn.00017c5c(0x40);
        if (pcVar3 == NULL) {
            uVar2 = 0x8000000000000009;
        }
        else {
            pcVar3[0x28] = '\0';
            pcVar3[0x29] = '\0';
            pcVar3[0x2a] = '\0';
            pcVar3[0x2b] = '\0';
            if ((arg1 == 5) || ((arg2 < 0xf && ((0x4086U >> (arg2 & 0x1f) & 1) != 0)))) {
                cVar1 = '\x01';
            }
            else {
                cVar1 = '\0';
            }
            *pcVar3 = cVar1;
            iVar4 = fcn.0001a44c(arg3,arg4,0x1d400);
            bVar5 = false;
            if (iVar4 != 0) {
                iVar4 = fcn.00016488(*(iVar4 + 8),0x1d418);
                bVar5 = iVar4 != 0;
            }
            pcVar3[1] = bVar5;
            iVar4 = fcn.0001a44c(arg3,arg4,0x1c630);
            if (iVar4 != 0) {
                iVar4 = fcn.000167e4(*(iVar4 + 8),0,pcVar3 + 8);
                if (-1 < iVar4) {
                    pcVar3[2] = '\x01';
                }
            }
            if (*pcVar3 == '\0') {
                pcVar3[0x10] = '\x1c';
                pcVar3[0x11] = 'C';
                pcVar3[0x12] = '\x01';
                pcVar3[0x13] = '\0';
                pcVar3[0x14] = '\0';
                pcVar3[0x15] = '\0';
                pcVar3[0x16] = '\0';
                pcVar3[0x17] = '\0';
                *(pcVar3 + 0x18) = in_stack_00000030;
            }
            else {
                pcVar3[0x28] = '\f';
                pcVar3[0x29] = '\0';
                pcVar3[0x2a] = '\0';
                pcVar3[0x2b] = '\0';
            }
            *in_stack_00000038 = pcVar3;
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.0001a5e0 @ 0x1a5e0 */

int64_t fcn.0001a5e0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    char *pcVar6;
    char *pcVar7;
    uint64_t uVar8;
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    if (((arg2 == 0) || (arg3 == 0)) || (pcVar6 == NULL)) {
code_r0x0001a912:
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        if (*pcVar6 == '\0') {
            if (*(pcVar6 + 0x28) == 0) {
                pcVar6[0x20] = '\0';
                pcVar6[0x21] = '\0';
                pcVar6[0x22] = '\0';
                pcVar6[0x23] = '\0';
                pcVar6[0x24] = '\0';
                pcVar6[0x25] = '\0';
                pcVar6[0x26] = '\0';
                pcVar6[0x27] = '\0';
                *(pcVar6 + 0x28) = (pcVar6[1] != '\0') + 1;
            }
            pcVar7 = arg3;
code_r0x0001a678:
            if (arg2 + arg3 <= pcVar7) {
                if (*(pcVar6 + 0x28) == 0xd) {
                    iVar4 = -0x7fffffffffffffeb;
                }
                return iVar4;
            }
            iVar2 = *(pcVar6 + 0x28);
            if (iVar2 < 8) {
                if (iVar2 == 7) {
                    uVar3 = 0xd;
                    if (*pcVar7 == '\r') {
                        uVar3 = 8;
                    }
                    *(pcVar6 + 0x28) = uVar3;
                    goto code_r0x0001a8f0;
                }
                if (iVar2 == 1) {
                    uVar8 = *(pcVar6 + 8) - *(pcVar6 + 0x20);
                    if (arg2 < *(pcVar6 + 8) - *(pcVar6 + 0x20)) {
                        uVar8 = arg2;
                    }
                    if (uVar8 == 0) {
                        *(pcVar6 + 8) = arg2;
                        uVar8 = arg2;
                    }
                    if ((*(pcVar6 + 0x10) != NULL) &&
                       (iVar5 = (**(pcVar6 + 0x10))(0,pcVar7,uVar8,*(pcVar6 + 0x18)), iVar5 < 0)) {
                        return iVar5;
                    }
                    *(pcVar6 + 0x20) = *(pcVar6 + 0x20) + uVar8;
                    pcVar7 = pcVar7 + uVar8;
                    if (*(pcVar6 + 0x20) == *(pcVar6 + 8)) {
code_r0x0001a855:
                        pcVar6[0x28] = '\f';
                        pcVar6[0x29] = '\0';
                        pcVar6[0x2a] = '\0';
                        pcVar6[0x2b] = '\0';
                        if ((*(pcVar6 + 0x10) != NULL) &&
                           (iVar5 = (**(pcVar6 + 0x10))(1,pcVar7,0,*(pcVar6 + 0x18)), iVar5 < 0)) {
                            return iVar5;
                        }
                    }
                    goto code_r0x0001a678;
                }
                if (iVar2 == 2) {
                    pcVar6[0x30] = '\0';
                    pcVar6[0x31] = '\0';
                    pcVar6[0x32] = '\0';
                    pcVar6[0x33] = '\0';
                    pcVar6[0x34] = '\0';
                    pcVar6[0x35] = '\0';
                    pcVar6[0x36] = '\0';
                    pcVar6[0x37] = '\0';
                    pcVar6[0x28] = '\x03';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                }
                else if (iVar2 != 3) {
                    if (iVar2 == 4) {
                        if (*pcVar7 != '\n') goto code_r0x0001a7f9;
                        pcVar7 = pcVar7 + 1;
                        if (*(pcVar6 + 0x30) == 0) {
                            pcVar6[2] = '\x01';
                            pcVar6[0x28] = '\n';
                            pcVar6[0x29] = '\0';
                            pcVar6[0x2a] = '\0';
                            pcVar6[0x2b] = '\0';
                        }
                        else {
                            pcVar6[0x28] = '\x06';
                            pcVar6[0x29] = '\0';
                            pcVar6[0x2a] = '\0';
                            pcVar6[0x2b] = '\0';
                            pcVar6[0x38] = '\0';
                            pcVar6[0x39] = '\0';
                            pcVar6[0x3a] = '\0';
                            pcVar6[0x3b] = '\0';
                            pcVar6[0x3c] = '\0';
                            pcVar6[0x3d] = '\0';
                            pcVar6[0x3e] = '\0';
                            pcVar6[0x3f] = '\0';
                        }
                    }
                    else {
                        if (iVar2 == 5) goto code_r0x0001a724;
                        if (iVar2 == 6) {
                            uVar8 = (arg2 - pcVar7) + arg3;
                            if (*(pcVar6 + 0x30) - *(pcVar6 + 0x38) < uVar8) {
                                uVar8 = *(pcVar6 + 0x30) - *(pcVar6 + 0x38);
                            }
                            if ((*(pcVar6 + 0x10) != NULL) &&
                               (iVar5 = (**(pcVar6 + 0x10))(0,pcVar7,uVar8,*(pcVar6 + 0x18)), iVar5 < 0)) {
                                return iVar5;
                            }
                            *(pcVar6 + 0x38) = *(pcVar6 + 0x38) + uVar8;
                            pcVar7 = pcVar7 + uVar8;
                            *(pcVar6 + 8) = *(pcVar6 + 8) + uVar8;
                            if (*(pcVar6 + 0x38) == *(pcVar6 + 0x30)) {
                                pcVar6[0x28] = '\a';
                                pcVar6[0x29] = '\0';
                                pcVar6[0x2a] = '\0';
                                pcVar6[0x2b] = '\0';
                            }
                        }
                    }
                    goto code_r0x0001a678;
                }
                if ((*pcVar7 - 0x30U < 0x37) && ((0x7e0000007e03ffU >> (*pcVar7 - 0x30U & 0x3fU) & 1) != 0)) {
                    if (*(pcVar6 + 0x30) < 0xfffffffffffffff) {
                        if (*pcVar7 - 0x30U < 10) {
                            iVar2 = *pcVar7 + -0x30;
                        }
                        else {
                            cVar1 = *pcVar7;
                            if (*pcVar7 + 0x9fU < 0x1a) {
                                cVar1 = cVar1 + -0x20;
                            }
                            iVar2 = cVar1 + -0x37;
                        }
                        *(pcVar6 + 0x30) = *(pcVar6 + 0x30) * 0x10 + iVar2;
                        goto code_r0x0001a8f0;
                    }
                    goto code_r0x0001a912;
                }
                if (*pcVar7 != ';') {
                    if (*pcVar7 == '\r') goto code_r0x0001a72d;
                    goto code_r0x0001a7f9;
                }
                pcVar6[0x28] = '\x05';
                pcVar6[0x29] = '\0';
                pcVar6[0x2a] = '\0';
                pcVar6[0x2b] = '\0';
            }
            else if (iVar2 == 8) {
                if (*pcVar7 != '\n') {
code_r0x0001a7f9:
                    pcVar6[0x28] = '\r';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                    goto code_r0x0001a678;
                }
                pcVar6[0x28] = '\x02';
                pcVar6[0x29] = '\0';
                pcVar6[0x2a] = '\0';
                pcVar6[0x2b] = '\0';
            }
            else if (iVar2 == 9) {
code_r0x0001a724:
                if (*pcVar7 == '\r') {
code_r0x0001a72d:
                    pcVar6[0x28] = '\x04';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                }
            }
            else {
                if (iVar2 != 10) {
                    if (iVar2 == 0xb) {
                        if (*pcVar7 == '\n') {
                            pcVar7 = pcVar7 + 1;
                            goto code_r0x0001a855;
                        }
                        goto code_r0x0001a7f9;
                    }
                    if (iVar2 == 0xd) {
                        return -0x7fffffffffffffeb;
                    }
                    goto code_r0x0001a678;
                }
                if (*pcVar7 != '\r') {
                    pcVar6[0x28] = '\t';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                    goto code_r0x0001a678;
                }
                pcVar6[0x28] = '\v';
                pcVar6[0x29] = '\0';
                pcVar6[0x2a] = '\0';
                pcVar6[0x2b] = '\0';
            }
code_r0x0001a8f0:
            pcVar7 = pcVar7 + 1;
            goto code_r0x0001a678;
        }
        pcVar6[0x28] = '\f';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        if ((*(pcVar6 + 0x10) == NULL) || (iVar4 = (**(pcVar6 + 0x10))(1,arg3,0,*(pcVar6 + 0x18)), -1 < iVar4)) {
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.000124b0 @ 0x124b0 */

void fcn.000124b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *arg1_00;
    int iVar1;
    
    fcn.000184e8(0x1c760,arg2,arg3,arg4);
    iVar1 = arg1;
    if (iVar1 < 0x1b) {
        if (iVar1 == 0x1a) {
            arg1_00 = "\n  Client Error: 409 Conflict";
        }
        else if (iVar1 < 0x13) {
            if (iVar1 == 0x12) {
                arg1_00 = "\n  Client Error: 401 Unauthorized";
            }
            else if (iVar1 == 10) {
                arg1_00 = "\n  Redirection: 300 Multiple Choices";
            }
            else if (iVar1 == 0xb) {
                arg1_00 = "\n  Redirection: 301 Moved Permanently";
            }
            else if (iVar1 == 0xc) {
                arg1_00 = "\n  Redirection: 302 Found";
            }
            else if (iVar1 == 0xd) {
                arg1_00 = "\n  Redirection: 303 See Other";
            }
            else if (iVar1 == 0xe) {
                arg1_00 = "\n  Redirection: 304 Not Modified";
            }
            else if (iVar1 == 0xf) {
                arg1_00 = "\n  Redirection: 305 Use Proxy";
            }
            else if (iVar1 == 0x10) {
                arg1_00 = "\n  Redirection: 307 Temporary Redirect";
            }
            else {
                if (iVar1 != 0x11) {
                    return;
                }
                arg1_00 = "\n  Client Error: 400 Bad Request";
            }
        }
        else if (iVar1 == 0x13) {
            arg1_00 = "\n  Client Error: 402 Payment Required";
        }
        else if (iVar1 == 0x14) {
            arg1_00 = "\n  Client Error: 403 Forbidden";
        }
        else if (iVar1 == 0x15) {
            arg1_00 = "\n  Client Error: 404 Not Found";
        }
        else if (iVar1 == 0x16) {
            arg1_00 = "\n  Client Error: 405 Method Not Allowed";
        }
        else if (iVar1 == 0x17) {
            arg1_00 = "\n  Client Error: 406 Not Acceptable";
        }
        else if (iVar1 == 0x18) {
            arg1_00 = "\n  Client Error: 407 Proxy Authentication Required";
        }
        else {
            if (iVar1 != 0x19) {
                return;
            }
            arg1_00 = "\n  Client Error: 408 Request Timeout";
        }
    }
    else if (iVar1 < 0x23) {
        if (iVar1 == 0x22) {
            arg1_00 = "\n  Client Error: 417 Expectation Failed";
        }
        else if (iVar1 == 0x1b) {
            arg1_00 = "\n  Client Error: 410 Gone";
        }
        else if (iVar1 == 0x1c) {
            arg1_00 = "\n  Client Error: 411 Length Required";
        }
        else if (iVar1 == 0x1d) {
            arg1_00 = "\n  Client Error: 412 Precondition Failed";
        }
        else if (iVar1 == 0x1e) {
            arg1_00 = "\n  Client Error: 413 Request Entity Too Large";
        }
        else if (iVar1 == 0x1f) {
            arg1_00 = "\n  Client Error: 414 Request URI Too Long";
        }
        else if (iVar1 == 0x20) {
            arg1_00 = "\n  Client Error: 415 Unsupported Media Type";
        }
        else {
            if (iVar1 != 0x21) {
                return;
            }
            arg1_00 = "\n  Client Error: 416 Requested Range Not Satisfiable";
        }
    }
    else if (iVar1 == 0x23) {
        arg1_00 = "\n  Server Error: 500 Internal Server Error";
    }
    else if (iVar1 == 0x24) {
        arg1_00 = "\n  Server Error: 501 Not Implemented";
    }
    else if (iVar1 == 0x25) {
        arg1_00 = "\n  Server Error: 502 Bad Gateway";
    }
    else if (iVar1 == 0x26) {
        arg1_00 = "\n  Server Error: 503 Service Unavailable";
    }
    else if (iVar1 == 0x27) {
        arg1_00 = "\n  Server Error: 504 Gateway Timeout";
    }
    else if (iVar1 == 0x28) {
        arg1_00 = "\n  Server Error: 505 HTTP Version Not Supported";
    }
    else {
        if (iVar1 != 0x29) {
            return;
        }
        arg1_00 = "\n  Redirection: 308 Permanent Redirect";
    }
    fcn.000184e8(arg1_00,arg2,arg3,arg4);
    return;
}


/* fcn.0001a93c @ 0x1a93c */

void fcn.0001a93c(int64_t arg1)

{
    char cVar1;
    char *arg1_00;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    if (arg1 != 0) {
        if ((*(arg1 + 8) != 0) && (uVar3 = 0, *(arg1 + 8) != 0)) {
            iVar4 = 0;
            do {
                (**(*0x1d5f8 + 0x48))(*(iVar4 + *(arg1 + 0x10)));
                arg1_00 = *(iVar4 + 8 + *(arg1 + 0x10));
                iVar2 = 0;
                cVar1 = *arg1_00;
                while (cVar1 != '\0') {
                    iVar2 = iVar2 + 1;
                    cVar1 = arg1_00[iVar2];
                }
                if (iVar2 + 1 != 0) {
                    fcn.000102c0(arg1_00,iVar2 + 1);
                }
                (**(*0x1d5f8 + 0x48))(*(iVar4 + 8 + *(arg1 + 0x10)));
                uVar3 = uVar3 + 1;
                iVar4 = iVar4 + 0x10;
            } while (uVar3 < *(arg1 + 8));
        }
        (**(*0x1d5f8 + 0x48))(arg1);
    }
    return;
}


/* fcn.00012478 @ 0x12478 */

void fcn.00012478(int64_t arg1,int64_t arg2,int64_t arg3)

{
    for (; 0 < arg3; arg3 = arg3 + -1) {
        *(arg2 + -1 + arg3) = arg1 + (arg1 / 10) * -10 + '0';
        arg1 = arg1 / 10;
    }
    return;
}


/* fcn.00014cb0 @ 0x14cb0 */

char * fcn.00014cb0(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    char *pcVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    pcVar1 = arg1;
    if (arg2 != 0) {
        do {
            if (*pcVar1 == -1) {
                return NULL;
            }
            if (*pcVar1 == arg3) {
                return pcVar1;
            }
            if (*pcVar1 == '\0') {
                uVar2 = uVar2 + 1;
            }
            else {
                uVar2 = uVar2 + 2 + pcVar1[1];
            }
            pcVar1 = uVar2 + arg1;
        } while (uVar2 < arg2);
    }
    return NULL;
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


/* fcn.00019b6c @ 0x19b6c */

ulong fcn.00019b6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    char cStackX_10;
    char cStackX_11;
    uchar uStackX_12;
    char acStack_38 [16];
    
    uVar3 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
code_r0x00019c60:
        uVar2 = 0x8000000000000002;
    }
    else {
        uStackX_12 = 0;
        uVar5 = arg2 & 0xffffffff;
        uVar6 = uVar3;
        if (arg2 != 0) {
            uVar4 = 2;
            uVar7 = 1;
            do {
                cVar1 = *(uVar3 + arg1);
                if (cVar1 == '%') {
                    if ((uVar5 <= uVar7) || (uVar5 <= uVar4)) goto code_r0x00019c60;
                    cStackX_10 = *(uVar3 + 1 + arg1);
                    if ((0x36 < cStackX_10 - 0x30U) || ((0x7e0000007e03ffU >> (cStackX_10 - 0x30U & 0x3fU) & 1) == 0))
                    goto code_r0x00019c60;
                    cStackX_11 = *(uVar3 + 2 + arg1);
                    if ((0x36 < cStackX_11 - 0x30U) || ((0x7e0000007e03ffU >> (cStackX_11 - 0x30U & 0x3fU) & 1) == 0))
                    goto code_r0x00019c60;
                    fcn.000168b0(&cStackX_10,0,acStack_38);
                    uVar3 = uVar3 + 3;
                    uVar7 = uVar7 + 3;
                    uVar4 = uVar4 + 3;
                    cVar1 = acStack_38[0];
                }
                else {
                    uVar3 = uVar3 + 1;
                    uVar7 = uVar7 + 1;
                    uVar4 = uVar4 + 1;
                }
                *(uVar6 + arg3) = cVar1;
                uVar6 = uVar6 + 1;
            } while (uVar3 < uVar5);
        }
        *arg4 = uVar6;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00019264 @ 0x19264 */

ulong fcn.00019264(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t auStackX_8 [2];
    int64_t var_20h;
    uint64_t uStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    
    if ((arg1 != 0) && (arg2 != 0)) {
        uVar2 = 0;
        var_20h = arg1;
        do {
            while( true ) {
                if (9 < *var_20h - 0x30U) goto code_r0x00019315;
                iVar1 = fcn.000167e4(var_20h,&var_20h,&uStackX_20);
                if (iVar1 < 0) {
                    return 0x8000000000000002;
                }
                if (uVar2 != 4) break;
                if (0x20 < uStackX_20) {
                    return 0x8000000000000002;
                }
code_r0x000192e7:
                if (*var_20h != '/') goto code_r0x0001931b;
                var_20h = var_20h + 1;
            }
            if (0xff < uStackX_20) {
                return 0x8000000000000002;
            }
            *(auStackX_8 + uVar2) = uStackX_20;
            uVar2 = uVar2 + 1;
            if (uVar2 == 4) goto code_r0x000192e7;
            if (uVar2 < 4) {
                if (*var_20h != '.') {
                    return 0x8000000000000002;
                }
                var_20h = var_20h + 1;
            }
        } while (uVar2 < 5);
code_r0x00019315:
        if (3 < uVar2) {
code_r0x0001931b:
            iVar1 = var_20h;
            if (arg2 != auStackX_8) {
                section..text(arg2,auStackX_8,4);
            }
            if (*iVar1 == '\0') {
                return 0;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00014ce8 @ 0x14ce8 */

ulong fcn.00014ce8(int64_t arg1)

{
    char cVar1;
    char cVar2;
    uint8_t *puVar3;
    bool bVar4;
    bool bVar5;
    ulong uVar6;
    char *pcVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t arg3;
    int64_t iVar10;
    uint32_t uVar11;
    char *pcVar12;
    ulong in_R8;
    char *pcVar13;
    char *pcVar14;
    uint32_t auStackX_8 [2];
    uchar auStackX_10 [8];
    
    pcVar9 = NULL;
    iVar8 = arg1 + 0x5d8;
    bVar5 = false;
    fcn.000102c0(iVar8,0x38);
    iVar10 = arg1 + 0xf8;
    pcVar14 = "\r456<C\x06";
    pcVar13 = pcVar9;
    do {
        in_R8 = CONCAT71(in_R8 >> 8,pcVar13[pcVar14]);
        uVar6 = fcn.00014cb0(iVar10,*(arg1 + 4) - 0xf0,in_R8);
        *(iVar8 + pcVar13 * 8) = uVar6;
        pcVar13 = pcVar13 + 1;
    } while (pcVar13 < 0x7);
    iVar10 = *(arg1 + 0x5e0);
    bVar4 = bVar5;
    if (iVar10 != 0) {
        bVar4 = false;
        if ((*(iVar10 + 2) & 1) != 0) {
            bVar4 = true;
            pcVar13 = pcVar9;
            do {
                if (*(iVar8 + pcVar13 * 8) == 0) {
                    pcVar7 = arg1 + 0x74;
                    pcVar12 = pcVar9;
                    do {
                        cVar1 = *pcVar7;
                        in_R8 = CONCAT71(in_R8 >> 8,cVar1);
                        if (cVar1 == -1) break;
                        if (cVar1 == pcVar13[pcVar14]) goto code_r0x00014da6;
                        if (cVar1 == '\0') {
                            uVar11 = pcVar12 + 1;
                        }
                        else {
                            uVar11 = pcVar12 + 2 + pcVar7[1];
                        }
                        pcVar12 = uVar11;
                        pcVar7 = pcVar12 + arg1 + 0x74;
                    } while (uVar11 < 0x80);
                    pcVar7 = pcVar9;
code_r0x00014da6:
                    *(iVar8 + pcVar13 * 8) = pcVar7;
                }
                pcVar13 = pcVar13 + 1;
            } while (pcVar13 < 0x7);
        }
        if ((*(iVar10 + 2) & 2) != 0) {
            pcVar13 = pcVar9;
            do {
                if (*(iVar8 + pcVar13 * 8) == 0) {
                    pcVar7 = arg1 + 0x34;
                    pcVar12 = pcVar9;
                    do {
                        cVar1 = *pcVar7;
                        in_R8 = CONCAT71(in_R8 >> 8,cVar1);
                        if (cVar1 == -1) break;
                        if (cVar1 == pcVar13[pcVar14]) goto code_r0x00014dfa;
                        if (cVar1 == '\0') {
                            uVar11 = pcVar12 + 1;
                        }
                        else {
                            uVar11 = pcVar12 + 2 + pcVar7[1];
                        }
                        pcVar12 = uVar11;
                        pcVar7 = pcVar12 + arg1 + 0x34;
                    } while (uVar11 < 0x40);
                    pcVar7 = pcVar9;
code_r0x00014dfa:
                    *(iVar8 + pcVar13 * 8) = pcVar7;
                }
                pcVar13 = pcVar13 + 1;
            } while (pcVar13 < 0x7);
        }
    }
    iVar8 = *(arg1 + 0x5f8);
    cVar1 = *(arg1 + 0x18);
    if (((iVar8 != 0) && (in_R8 = 10, 9 < *(iVar8 + 1))) &&
       ((iVar8 + 2 == "HTTPClient:Arch:xxxxx:UNDI:003000" || (iVar8 = fcn.000102e0(iVar8 + 2,0x1cf10,10), iVar8 == 0)
        ))) {
        bVar5 = true;
    }
    iVar8 = *(arg1 + 0x600);
    iVar10 = *(arg1 + 0x608);
    if (iVar8 == 0) {
        if ((!bVar4) && (*(arg1 + 0x74) != '\0')) {
            *(arg1 + 0x600) = arg1 + 0x72;
        }
    }
    else if (*(*(iVar8 + 1) + 1 + iVar8) != '\0') {
        *(*(iVar8 + 1) + 2 + iVar8) = 0;
    }
    if (bVar5) {
        if (*(arg1 + 0x600) != 0) {
            pcVar13 = *(arg1 + 0x600) + 2;
            cVar2 = *pcVar13;
            while (cVar2 != '\0') {
                pcVar9 = pcVar9 + 1;
                cVar2 = pcVar13[pcVar9];
            }
            iVar8 = fcn.00019ee8(pcVar13,pcVar9 & 0xffffffff,in_R8,arg1 + 0x5d0);
            if (-1 < iVar8) {
                puVar3 = *(arg1 + 0x5d0);
                iVar8 = *(arg1 + 0x600) + 2;
                if ((iVar8 == 0) || (puVar3 == NULL)) {
                    iVar8 = -0x7ffffffffffffffe;
                }
                else if ((*puVar3 & 0x40) == 0) {
                    iVar8 = -0x7ffffffffffffff2;
                }
                else {
                    arg3 = fcn.00017c2c();
                    if (arg3 == 0) {
                        iVar8 = -0x7ffffffffffffff7;
                    }
                    else {
                        iVar8 = *(puVar3 + 0x34) + iVar8;
                        if (iVar8 == 0) {
                            iVar8 = -0x7ffffffffffffffe;
                        }
                        else {
                            iVar8 = fcn.00019b6c(iVar8,*(puVar3 + 0x38),arg3,auStackX_8);
                        }
                        if (-1 < iVar8) {
                            *(auStackX_8[0] + arg3) = 0;
                            iVar8 = fcn.00019264(arg3,auStackX_10);
                        }
                        (**(*0x1d5f8 + 0x48))(arg3);
                    }
                }
                if (iVar8 < 0) {
                    if (cVar1 == '\0') {
                        uVar11 = 5;
                    }
                    else {
                        uVar11 = (-(iVar10 != 0) & 0xfffffffb) + 7;
                    }
                }
                else if (cVar1 == '\0') {
                    uVar11 = 6;
                }
                else {
                    uVar11 = iVar10 != 0;
                }
                goto code_r0x00014f9b;
            }
        }
    }
    else {
        if (cVar1 != '\0') {
            uVar11 = 4 - (iVar10 != 0);
code_r0x00014f9b:
            *(arg1 + 0x5c8) = uVar11;
            return 0;
        }
        if (*(arg1 + 0x5d0) != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
    }
    return 0x8000000000000007;
}


/* fcn.000150a0 @ 0x150a0 */

void fcn.000150a0(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    
    *(CONCAT44(in_register_0000000c,arg1) + 0x4f4) = 8;
    *(CONCAT44(in_register_0000000c,arg1) + 0x4f0) = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x4d0) == 0) {
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x65fc) != 0) {
code_r0x00015113:
            iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x661c);
            goto code_r0x000151ac;
        }
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x6600) == 0) {
            if (*(CONCAT44(in_register_0000000c,arg1) + 0x6604) == 0) {
                if ((*(CONCAT44(in_register_0000000c,arg1) + 0x660c) == 0) ||
                   (*(CONCAT44(in_register_0000000c,arg1) + 0x6614) == 0)) {
                    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x6608);
                    if (iVar1 == 0) {
                        return;
                    }
                    if (*(CONCAT44(in_register_0000000c,arg1) + 0x6614) == 0) {
                        if (iVar1 == 0) {
                            return;
                        }
                        if (*(CONCAT44(in_register_0000000c,arg1) + 0x6610) == 0) {
                            if (iVar1 == 0) {
                                return;
                            }
                            if (*(CONCAT44(in_register_0000000c,arg1) + 0x6618) == 0) {
                                return;
                            }
                            iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x66dc);
                            *(CONCAT44(in_register_0000000c,arg1) + 0x4f4) = 7;
                        }
                        else {
                            iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x66dc);
                            *(CONCAT44(in_register_0000000c,arg1) + 0x4f4) = 5;
                        }
                        goto code_r0x000151ac;
                    }
                    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x66dc);
                }
                else {
                    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x671c);
                }
                *(CONCAT44(in_register_0000000c,arg1) + 0x4f4) = 6;
                goto code_r0x000151ac;
            }
code_r0x000150e9:
            iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x669c);
            goto code_r0x000151ac;
        }
    }
    else {
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x6608) != 0) {
            iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x66dc);
            goto code_r0x000151ac;
        }
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x6600) == 0) {
            if (*(CONCAT44(in_register_0000000c,arg1) + 0x6604) != 0) goto code_r0x000150e9;
            if (*(CONCAT44(in_register_0000000c,arg1) + 0x660c) != 0) {
                iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x671c);
                goto code_r0x000151ac;
            }
            if (*(CONCAT44(in_register_0000000c,arg1) + 0x65fc) == 0) {
                return;
            }
            goto code_r0x00015113;
        }
    }
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x665c);
code_r0x000151ac:
    *(CONCAT44(in_register_0000000c,arg1) + 0x4f0) = iVar1 + 1;
    return;
}


/* fcn.00014fe0 @ 0x14fe0 */

ulong fcn.00014fe0(int64_t arg1,uint32_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    uVar2 = *(iVar3 + 4);
    iVar5 = *(arg1 + 0x65f8) * 0x610 + arg1;
    if (*(iVar5 + 0x4f8) < uVar2) {
        uVar4 = 0x8000000000000005;
    }
    else {
        if ((uVar2 != 0) && (iVar5 + 0x500 != iVar3 + 8)) {
            section..text(iVar5 + 0x500,iVar3 + 8,uVar2);
        }
        *(iVar5 + 0x4fc) = *(iVar3 + 4);
        iVar3 = fcn.00014ce8(iVar5 + 0x4f8);
        if (iVar3 < 0) {
            uVar4 = 0x8000000000000015;
        }
        else {
            iVar3 = *(iVar5 + 0xac0) + 0x197f;
            *(arg1 + 0x661c + (*(arg1 + iVar3 * 4) + *(iVar5 + 0xac0) * 0x10) * 4) = *(arg1 + 0x65f8);
            piVar1 = arg1 + iVar3 * 4;
            *piVar1 = *piVar1 + 1;
            *(arg1 + 0x65f8) = *(arg1 + 0x65f8) + 1;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00014a1c @ 0x14a1c */

ulong fcn.00014a1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    ushort *arg1_00;
    uchar *puVar4;
    char *pcVar5;
    char *pcVar6;
    uint32_t *puVar7;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    iStackX_10 = 0;
    *arg2 = arg3;
    *arg3 = 0x37;
    *(*arg2 + 1) = 0x1b;
    iVar1 = *arg2;
    *(iVar1 + 2) = 0x4030201;
    *(iVar1 + 6) = 0xd0c0605;
    *(iVar1 + 10) = 0x1612110f;
    *(iVar1 + 0xe) = 0x29281c17;
    *(iVar1 + 0x12) = 0x33322b2a;
    *(iVar1 + 0x16) = 0x3c3b3a36;
    *(iVar1 + 0x1b) = 0x6143;
    puVar4 = *arg2 + 2 + *(*arg2 + 1);
    *(arg2 + 8) = puVar4;
    *puVar4 = 0x61;
    *(*(arg2 + 8) + 1) = 0x11;
    iVar1 = *(arg2 + 8);
    *(iVar1 + 2) = 0;
    puVar7 = iVar1 + 3;
    iVar1 = fcn.00017f74(0x1bdf0,&iStackX_18);
    if ((iVar1 < 0) || (iStackX_18 == 0)) {
        iVar1 = fcn.00017f74(0x1c030,&iStackX_10);
        if ((iVar1 < 0) || (iStackX_10 == 0)) goto code_r0x00014b42;
        pcVar5 = *(iStackX_10 + 0x18);
        uVar2 = *(iStackX_10 + 0x16);
    }
    else {
        pcVar5 = *(iStackX_18 + 0x10);
        uVar2 = *(iStackX_18 + 0xc);
    }
    pcVar3 = pcVar5 + uVar2;
    do {
        if (*pcVar5 == '\x01') {
            if (0x18 < pcVar5[1]) {
                if (puVar7 != pcVar5 + 8) {
                    section..text(puVar7,pcVar5 + 8,0x10);
                }
                goto code_r0x00014b4d;
            }
            break;
        }
        pcVar5 = pcVar5 + pcVar5[1];
        pcVar6 = pcVar5;
        if (*pcVar5 == '\0') goto code_r0x00014b0f;
        do {
            do {
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar5;
            } while (*pcVar5 != '\0');
code_r0x00014b0f:
            pcVar5 = pcVar6 + 1;
        } while (*pcVar5 != '\0');
        pcVar5 = pcVar6 + 2;
    } while (pcVar5 < pcVar3);
code_r0x00014b42:
    fcn.000102c0(puVar7,0x10);
code_r0x00014b4d:
    puVar4 = *(arg2 + 8) + 2 + *(*(arg2 + 8) + 1);
    *(arg2 + 0x10) = puVar4;
    *puVar4 = 0x5e;
    *(*(arg2 + 0x10) + 1) = 3;
    iVar1 = *(arg2 + 0x10);
    if (*(arg1 + 0x110) == 0) {
        *(iVar1 + 2) = 0x301;
        *(iVar1 + 4) = 0;
    }
    else {
        *(iVar1 + 2) = *(*(arg1 + 0x110) + 0x20);
        *(iVar1 + 3) = *(*(arg1 + 0x110) + 0x21);
        *(iVar1 + 4) = *(*(arg1 + 0x110) + 0x22);
    }
    puVar4 = *(arg2 + 0x10) + 2 + *(*(arg2 + 0x10) + 1);
    *(arg2 + 0x18) = puVar4;
    *puVar4 = 0x5d;
    *(*(arg2 + 0x18) + 1) = 2;
    auStackX_8[0]._0_2_ = 0x1000;
    arg1_00 = *(arg2 + 0x18) + 2;
    if (arg1_00 != auStackX_8) {
        section..text(arg1_00,auStackX_8,2);
    }
    puVar4 = *(arg2 + 0x18) + 2 + *(*(arg2 + 0x18) + 1);
    *(arg2 + 0x20) = puVar4;
    *puVar4 = 0x3c;
    *(*(arg2 + 0x20) + 1) = 0x21;
    iVar1 = *(arg2 + 0x20);
    if (iVar1 + 2 != "HTTPClient:Arch:xxxxx:UNDI:003000") {
        section..text(iVar1 + 2,"HTTPClient:Arch:xxxxx:UNDI:003000",0x21);
    }
    fcn.00012478(0x10,iVar1 + 0x12,5);
    if (*(arg1 + 0x110) != 0) {
        puVar7 = *(arg1 + 0x110) + 0x1c;
        if (iVar1 + 0x18 != puVar7) {
            section..text(iVar1 + 0x18,puVar7,4);
        }
        fcn.00012478(*(*(arg1 + 0x110) + 0x21),iVar1 + 0x1d,3);
        fcn.00012478(*(*(arg1 + 0x110) + 0x22),iVar1 + 0x20,3);
    }
    return 5;
}


/* fcn.00015754 @ 0x15754 */

ulong fcn.00015754(int64_t arg1)

{
    char *arg1_00;
    int64_t *arg1_01;
    char cVar1;
    bool bVar2;
    bool bVar3;
    uint16_t uVar4;
    int64_t iVar5;
    uint16_t *puVar6;
    int64_t iVar7;
    uint16_t *puVar8;
    uint16_t *puVar9;
    uint32_t uVar10;
    uint16_t *noname_2;
    uchar auStack_28 [16];
    
    puVar6 = NULL;
    arg1_01 = arg1 + 0x5d0;
    bVar2 = false;
    fcn.000102c0(arg1_01,0x28);
    puVar8 = arg1 + 0xc;
    noname_2 = puVar6;
    if (*(arg1 + 4) != 4) {
        do {
            uVar4 = *puVar8 << 8 | *puVar8 >> 8;
            if (uVar4 == 3) {
                *arg1_01 = puVar8;
            }
            else if (uVar4 == 0x3b) {
                *(arg1 + 0x5d8) = puVar8;
            }
            else if (uVar4 == 0x3c) {
                *(arg1 + 0x5e0) = puVar8;
            }
            else if (uVar4 == 0x10) {
                *(arg1 + 0x5e8) = puVar8;
            }
            else if (uVar4 == 0x17) {
                *(arg1 + 0x5f0) = puVar8;
            }
            uVar10 = noname_2 + (puVar8[1] << 8 | puVar8[1] >> 8) + 4;
            noname_2 = uVar10;
            puVar8 = arg1 + 0xc + noname_2;
        } while (uVar10 < *(arg1 + 4) - 4U);
    }
    iVar5 = *arg1_01;
    bVar3 = true;
    if (iVar5 != 0) {
        noname_2 = iVar5 + 0x10;
        uVar4 = *(iVar5 + 2) << 8 | *(iVar5 + 2) >> 8;
        puVar8 = noname_2;
        puVar9 = puVar6;
        if (uVar4 != 0) {
            do {
                if ((*puVar8 << 8 | *puVar8 >> 8) == 0xd) goto code_r0x00015846;
                uVar10 = puVar9 + 4 + (puVar8[1] << 8 | puVar8[1] >> 8);
                puVar9 = uVar10;
                puVar8 = puVar9 + noname_2;
            } while (uVar10 < uVar4);
        }
        puVar8 = puVar6;
code_r0x00015846:
        if ((puVar8 == NULL) || (puVar8[2] == '\0')) {
            bVar3 = bVar2;
        }
    }
    iVar5 = *(arg1 + 0x5e8);
    if ((iVar5 != 0) && (0xf < (*(iVar5 + 2) << 8 | *(iVar5 + 2) >> 8))) {
        if (iVar5 + 10 != "HTTPClient:Arch:xxxxx:UNDI:003000") {
            noname_2 = 0xa;
            iVar5 = fcn.000102e0(iVar5 + 10,0x1cf10,10);
            if (iVar5 != 0) goto code_r0x0001588d;
        }
        bVar2 = true;
    }
code_r0x0001588d:
    iVar5 = *(arg1 + 0x5f0);
    if (bVar2) {
        if (*(arg1 + 0x5d8) != 0) {
            arg1_00 = *(arg1 + 0x5d8) + 4;
            cVar1 = *arg1_00;
            while (cVar1 != '\0') {
                puVar6 = puVar6 + 1;
                cVar1 = arg1_00[puVar6];
            }
            iVar7 = fcn.00019ee8(arg1_00,puVar6 & 0xffffffff,noname_2,arg1 + 0x5f8);
            if (-1 < iVar7) {
                iVar7 = *(arg1 + 0x5d8) + 4;
                if (iVar7 == 0) {
                    iVar7 = -0x7ffffffffffffffe;
                }
                else {
                    iVar7 = fcn.0001a138(iVar7,*(arg1 + 0x5f8),auStack_28);
                }
                if (iVar7 < 0) {
                    if (bVar3) {
                        uVar10 = 5;
                    }
                    else {
                        uVar10 = (-(iVar5 != 0) & 0xfffffffb) + 7;
                    }
                }
                else if (bVar3) {
                    uVar10 = 6;
                }
                else {
                    uVar10 = iVar5 != 0;
                }
                goto code_r0x00015935;
            }
        }
    }
    else if (!bVar3) {
        uVar10 = 4 - (iVar5 != 0);
code_r0x00015935:
        *(arg1 + 0x5c8) = uVar10;
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00015964 @ 0x15964 */

ulong fcn.00015964(int64_t arg1,uint32_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    uVar2 = *(iVar3 + 4);
    iVar5 = *(arg1 + 0x65f8) * 0x610 + arg1;
    if (*(iVar5 + 0x4f8) < uVar2) {
        uVar4 = 0x8000000000000005;
    }
    else {
        if ((uVar2 != 0) && (iVar5 + 0x500 != iVar3 + 8)) {
            section..text(iVar5 + 0x500,iVar3 + 8,uVar2);
        }
        *(iVar5 + 0x4fc) = *(iVar3 + 4);
        iVar3 = fcn.00015754(iVar5 + 0x4f8);
        if (iVar3 < 0) {
            uVar4 = 0x8000000000000015;
        }
        else {
            iVar3 = *(iVar5 + 0xac0) + 0x197f;
            *(arg1 + 0x661c + (*(arg1 + iVar3 * 4) + *(iVar5 + 0xac0) * 0x10) * 4) = *(arg1 + 0x65f8);
            piVar1 = arg1 + iVar3 * 4;
            *piVar1 = *piVar1 + 1;
            *(arg1 + 0x65f8) = *(arg1 + 0x65f8) + 1;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00015b5c @ 0x15b5c */

uint64_t fcn.00015b5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint32_t *arg2_00;
    uint64_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint64_t arg3_00;
    int64_t arg2_01;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *puVar11;
    int64_t iStack_108;
    uint64_t uStack_100;
    ulong *puStack_f8;
    int64_t iStack_f0;
    uchar auStack_e8 [72];
    int64_t iStack_a0;
    int64_t iStack_90;
    uint32_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_70;
    int64_t iStack_60;
    int64_t iStack_50;
    
    puVar11 = *(arg1 + 0x118);
    uVar6 = 0;
    bVar1 = false;
    uStack_100 = 0;
    iStack_108 = 0;
    puStack_f8 = puVar11;
    fcn.000102c0(arg3,0x10);
    uVar2 = (**puVar11)(puVar11,auStack_e8,0,0);
    uVar9 = uVar6;
    while (-1 < uVar2) {
        uVar7 = uStack_88;
        if (uStack_88 != 0) {
            iVar4 = arg1 + 0x48c;
            uVar9 = uVar6;
            uVar10 = uVar6;
            iStack_f0 = iVar4;
            do {
                uVar5 = *(uVar10 + 0x20 + iStack_80);
                arg2_01 = iStack_80 + 0x10 + uVar10;
                if (uVar5 == 0) {
code_r0x00015d80:
                    arg2_00 = uVar9 * 0x21 + iStack_80;
                    if (arg3 != arg2_00) {
                        section..text(arg3,arg2_00,0x10);
                    }
                    bVar1 = true;
                    uVar9 = uStack_100;
                    puVar11 = puStack_f8;
                    goto code_r0x00015c97;
                }
                uVar8 = uVar5 >> 3;
                arg3_00 = uVar8;
                if ((uVar8 == 0) || (iVar4 == arg2_01)) {
                    uVar3 = uVar6;
                }
                else {
                    uVar3 = fcn.000102e0(iVar4,arg2_01,arg3_00);
                    uVar7 = uStack_88;
                    iVar4 = iStack_f0;
                }
                if ((uVar3 == 0) &&
                   (((uVar5 & 7) == 0 ||
                    ((uVar5 = -1 << (8 - (uVar5 & 7) & 0x1f), uVar8 < 0x10 &&
                     ((*(arg3_00 + iVar4) & uVar5) == (*(arg3_00 + arg2_01) & uVar5))))))) goto code_r0x00015d80;
                uVar9 = uVar9 + 1;
                uVar10 = uVar10 + 0x21;
            } while (uVar9 < uVar7);
            uVar9 = uStack_100;
            puVar11 = puStack_f8;
        }
code_r0x00015c97:
        if (iStack_a0 != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
        if (iStack_90 != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
        if (iStack_80 != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
        if (iStack_70 != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
        if (iStack_60 != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
        if (iStack_50 != 0) {
            (**(*0x1d5f8 + 0x48))();
        }
        if ((bVar1) || (uVar9 == 10)) break;
        uVar9 = uVar9 + 1;
        uStack_100 = uVar9;
        if (((iStack_108 == 0) && (uVar2 = (**(*0x1d5f8 + 0x50))(0x80000000,8,0,0,&iStack_108), uVar2 < 0)) ||
           (uVar2 = (**(*0x1d5f8 + 0x58))(iStack_108,2,10000000), uVar2 < 0)) break;
        while (iVar4 = (**(*0x1d5f8 + 0x78))(iStack_108), iVar4 < 0) {
            (*puVar11[8])(puVar11);
        }
        uVar2 = (**puVar11)(puVar11,auStack_e8,0);
    }
    if (iStack_108 != 0) {
        (**(*0x1d5f8 + 0x70))();
    }
    if ((!bVar1) && (uVar6 = uVar2, uVar9 == 10)) {
        uVar6 = 0x8000000000000012;
    }
    return uVar6;
}


/* fcn.00015574 @ 0x15574 */

ulong fcn.00015574(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    uint32_t *arg2_00;
    uint32_t auStackX_8 [2];
    
    *arg2 = arg3;
    *arg3 = 0x600;
    *(*arg2 + 2) = 0x800;
    iVar2 = *arg2;
    *(iVar2 + 4) = 0x3c003b00;
    *(iVar2 + 8) = 0x10001700;
    uVar1 = *(*arg2 + 2);
    puVar3 = *arg2 + 4 + (uVar1 << 8 | uVar1 >> 8);
    *(arg2 + 8) = puVar3;
    *puVar3 = 0x3e00;
    *(*(arg2 + 8) + 2) = 0x300;
    iVar2 = *(arg2 + 8);
    if (*(arg1 + 0x110) == 0) {
        *(iVar2 + 4) = 0x301;
        *(iVar2 + 6) = 0;
    }
    else {
        *(iVar2 + 4) = *(*(arg1 + 0x110) + 0x20);
        *(iVar2 + 5) = *(*(arg1 + 0x110) + 0x21);
        *(iVar2 + 6) = *(*(arg1 + 0x110) + 0x22);
    }
    uVar1 = *(*(arg2 + 8) + 2);
    puVar3 = *(arg2 + 8) + 4 + (uVar1 << 8 | uVar1 >> 8);
    *(arg2 + 0x10) = puVar3;
    *puVar3 = 0x3d00;
    *(*(arg2 + 0x10) + 2) = 0x200;
    puVar3 = *(arg2 + 0x10) + 4;
    auStackX_8[0]._0_2_ = 0x1000;
    if (puVar3 != auStackX_8) {
        section..text(puVar3,auStackX_8,2);
    }
    uVar1 = *(*(arg2 + 0x10) + 2);
    puVar3 = *(arg2 + 0x10) + 4 + (uVar1 << 8 | uVar1 >> 8);
    *(arg2 + 0x18) = puVar3;
    *puVar3 = 0x1000;
    *(*(arg2 + 0x18) + 2) = 0x2700;
    iVar2 = *(arg2 + 0x18);
    *(iVar2 + 4) = 0x57010000;
    *(iVar2 + 8) = 0x2100;
    if (iVar2 + 10 != "HTTPClient:Arch:xxxxx:UNDI:003000") {
        section..text(iVar2 + 10,"HTTPClient:Arch:xxxxx:UNDI:003000",0x21);
    }
    fcn.00012478(0x10,iVar2 + 0x1a,5);
    if (*(arg1 + 0x110) != 0) {
        arg2_00 = *(arg1 + 0x110) + 0x1c;
        if (iVar2 + 0x20 != arg2_00) {
            section..text(iVar2 + 0x20,arg2_00,4);
        }
        fcn.00012478(*(*(arg1 + 0x110) + 0x21),iVar2 + 0x25,3);
        fcn.00012478(*(*(arg1 + 0x110) + 0x22),iVar2 + 0x28,3);
    }
    return 4;
}


/* fcn.00016534 @ 0x16534 */

uint64_t fcn.00016534(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
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


/* fcn.000167b8 @ 0x167b8 */

uint64_t fcn.000167b8(uint32_t arg1,int64_t arg2)

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


/* fcn.00016458 @ 0x16458 */

int64_t fcn.00016458(int64_t arg1)

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


/* fcn.000168b0 @ 0x168b0 */

ulong fcn.000168b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char cVar4;
    char *pcVar5;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar5 = arg1, uVar2 = fcn.000167b8(arg1,0xf4241), uVar2 < 0xf4241)) {
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
            iVar3 = fcn.00016458(CONCAT71(arg1 >> 8,*pcVar5));
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


/* fcn.00016cdc @ 0x16cdc */

uchar * fcn.00016cdc(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00017c08 @ 0x17c08 */

void fcn.00017c08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00016ea0(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00017cc8 @ 0x17cc8 */

bool fcn.00017cc8(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00017d24 @ 0x17d24 */

char * fcn.00017d24(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00017cc8(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00017c88 @ 0x17c88 */

void fcn.00017c88(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00017c2c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00017d74 @ 0x17d74 */

ulong fcn.00017d74(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t noname_0;
    
    noname_0 = arg1;
    arg1_00 = fcn.00017d24(arg1);
    uVar1 = 0;
    if (arg1_00 != 0) {
        uVar1 = fcn.00017c88(noname_0,arg1_00,arg1);
    }
    return uVar1;
}


/* fcn.00017d9c @ 0x17d9c */

int64_t fcn.00017d9c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        arg1 = 0x1d390;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00017cc8(arg1);
        if ((cVar1 == '\0') || (cVar1 = fcn.00017cc8(arg2), cVar1 == '\0')) {
            return 0;
        }
        iVar2 = fcn.00017d24(arg1);
        arg3 = fcn.00017d24(arg2);
        arg1_00 = fcn.00017c2c();
        if (arg1_00 == 0) {
            return 0;
        }
        if ((iVar2 != 0) && (arg1_00 != arg1)) {
            arg1_00 = section..text(arg1_00,arg1,iVar2);
        }
        iVar2 = iVar2 + -4 + arg1_00;
        if (arg3 == 0) {
            return arg1_00;
        }
        if (iVar2 == arg2) {
            return arg1_00;
        }
        section..text(iVar2,arg2,arg3);
        return arg1_00;
    }
    iVar2 = fcn.00017d74(arg1);
    return iVar2;
}


/* fcn.00016500 @ 0x16500 */

int64_t fcn.00016500(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00017fd4 @ 0x17fd4 */

ulong fcn.00017fd4(int64_t arg1,int64_t arg2)

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
        iVar2 = fcn.00016500(arg1,arg2,iVar3);
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


/* fcn.00018518 @ 0x18518 */

int64_t fcn.00018518(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 1;
        uVar3 = uVar2;
        do {
            while ((((iVar1 = *(arg1 + uVar2 * 2), iVar1 != -0x10 && (iVar1 != -0xf)) && (iVar1 != 0)) &&
                   ((uVar3 = uVar3 + iVar4, arg2 == '\0' || (uVar3 <= arg3))))) {
                uVar2 = uVar2 + 1;
            }
            if (*(arg1 + uVar2 * 2) == 0) break;
            if ((arg2 != '\0') && (arg3 < uVar3)) {
                *arg4 = uVar2;
                break;
            }
            iVar4 = (*(arg1 + uVar2 * 2) != -0x10) + 1;
            uVar2 = uVar2 + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
        iVar4 = uVar3 * 2;
    }
    return iVar4;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ushort *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00016608 @ 0x16608 */

ulong fcn.00016608(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.00016534(arg3,arg2_00);
    if ((arg2 <= arg4) && (arg2 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x000166b0;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x000166b0:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000166e8 @ 0x166e8 */

ulong fcn.000166e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.00016534(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00016534(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00016789;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00016789:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00017f40 @ 0x17f40 */

ulong fcn.00017f40(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1d5f8 + 0x98))(param_1,0x1bd50,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00016d10 @ 0x16d10 */

ulong fcn.00016d10(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = str.0123456789ABCDEF[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = str.0123456789ABCDEF[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00016cdc(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00018dd4 @ 0x18dd4 */

int64_t fcn.00018dd4(int64_t arg1,int64_t arg2)

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
    iVar5 = fcn.00018a68(arg1,&iStackX_20);
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
            if ((uVar3 != 0) && (iVar7 = fcn.00017c88(iVar5,uVar3 << 5,puVar4 + 10), uVar9 = 0, iVar7 == 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar5 = (**(iVar8 + 0x28))(iVar8);
            if ((((-1 < iVar5) && (iVar5 = (**(iVar8 + 0x10))(iVar8), -1 < iVar5)) &&
                (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) && (iVar5 = (**(iVar8 + 0x18))(iVar8,0,0), -1 < iVar5)
               ) {
                *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                iVar8 = (**(iVar8 + 0x30))(iVar8,uVar2,uVar1 ^ uVar2,uVar9,uVar3,iVar7);
                if (iVar7 != 0) {
                    (**(*0x1d5f8 + 0x48))(iVar7);
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
            (**(*0x1d5f8 + 0x48))(iVar7);
        }
        return iVar5;
    }
    *arg2 = 1;
    return 0;
}


/* fcn.00019ae0 @ 0x19ae0 */

int64_t fcn.00019ae0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x1d620 + 0x18))(*0x1d620,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00017c5c(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x1d620 + 0x18))(*0x1d620,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x1d5f8 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00018148 @ 0x18148 */

int64_t fcn.00018148(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uStackX_10;
    
    uStackX_10 = 0;
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x1d600 + 0x48))(arg1,0x1bc90,0,&uStackX_10,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00017c2c(0x8000000000000005,uStackX_10);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x1d600 + 0x48))(arg1,0x1bc90,0,&uStackX_10,iVar1);
            if (iVar1 < 0) {
                (**(*0x1d5f8 + 0x48))(*arg3);
                *arg3 = 0;
            }
            if (arg4 != 0) {
                *arg4 = uStackX_10;
            }
        }
    }
    return iVar1;
}


/* fcn.00018220 @ 0x18220 */

uint32_t * fcn.00018220(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *arg1_00;
    uint64_t uVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00018270:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x00018270;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x0001830b;
                }
            }
            else {
code_r0x0001830b:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    puVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*puVar5 != '\0' && (*puVar5 == ';')); puVar5 = puVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *puVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = *(puVar5 + arg3_00);
                            }
                            if (uVar4 <= arg3_00) goto code_r0x000182d8;
                        }
                        else {
code_r0x000182d8:
                            iVar3 = fcn.00016500(puVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.00017c5c(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != puVar5) {
                                        puVar5 = section..text(arg1_00,puVar5,arg3_00);
                                        return puVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        puVar5 = puVar5 + arg3_00;
                        cVar2 = *puVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x00018310;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x0001830b;
                }
            }
code_r0x00018310:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.00019dfc @ 0x19dfc */

uint64_t fcn.00019dfc(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    int iVar3;
    
    iVar3 = arg2;
    uVar2 = arg1;
    if ((uVar2 < 0x21) && ((0x100002400U >> (arg1 & 0x3f) & 1) != 0)) {
        return 0x12;
    }
    if (iVar3 < 6) {
        if (iVar3 < 4) {
            if (iVar3 == 0) {
                if (uVar2 == 0x2a) {
                    return 7;
                }
                if (uVar2 == 0x2f) {
                    return 7;
                }
                return 1;
            }
            if (iVar3 == 1) {
                if (uVar2 == 0x3a) {
                    return 2;
                }
            }
            else if (iVar3 == 2) {
                if (uVar2 == 0x2f) {
                    return 3;
                }
            }
            else if ((iVar3 == 3) && (uVar2 == 0x2f)) {
                return 4;
            }
code_r0x00019eb9:
            return arg2 & 0xffffffff;
        }
        if (uVar2 == 0x40) {
            return 6;
        }
    }
    else {
        if (iVar3 != 6) {
            if (iVar3 == 7) {
                if (uVar2 == 0x3f) {
                    return 8;
                }
                if (uVar2 == 0x23) {
                    return 10;
                }
            }
            else if (7 < iVar3) {
                if (iVar3 < 10) {
                    return 10 - (uVar2 != 0x23);
                }
                if (iVar3 == 10) {
                    return 0xb;
                }
            }
            goto code_r0x00019eb9;
        }
        if (uVar2 == 0x40) {
            return 0x12;
        }
    }
    if (uVar2 == 0x2f) {
        return 7;
    }
    if (uVar2 == 0x3f) {
        return 8;
    }
    uVar1 = 5;
    if (uVar2 == 0x23) {
        uVar1 = 10;
    }
    return uVar1;
}


/* fcn.00019c88 @ 0x19c88 */

ulong fcn.00019c88(int64_t arg1,int64_t arg2,int arg3)

{
    bool bVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    int iVar4;
    uint in_R8;
    uint16_t *puVar5;
    uint32_t uVar6;
    uint8_t *puVar7;
    
    puVar5 = CONCAT44(in_R8,arg3);
    puVar7 = *(puVar5 + 6) + arg1;
    puVar3 = puVar7 + *(puVar5 + 8);
    bVar1 = false;
    uVar6 = 8;
    uVar2 = 8;
    iVar4 = (-(arg2 != '\0') & 0xfffffffe) + 0xe;
    if (puVar7 < puVar3) {
        do {
            if ((*puVar7 < 0x21) && ((0x100002400U >> (*puVar7 & 0x3fU) & 1) != 0)) {
                iVar4 = 0x12;
            }
            else if (iVar4 == 0xc) {
                if (*puVar7 == 0x40) {
                    iVar4 = 0xd;
                }
            }
            else if (0xc < iVar4) {
                if (iVar4 < 0xf) {
                    if (*puVar7 == 0x5b) {
code_r0x00019d3f:
                        iVar4 = 0xf;
                    }
                    else {
                        iVar4 = 0xe;
                        if (*puVar7 == 0x3a) {
                            iVar4 = 0x10;
                        }
                    }
                }
                else if (iVar4 == 0xf) {
                    if (*puVar7 == 0x5d) {
                        bVar1 = true;
                    }
                    if ((*puVar7 != 0x3a) || (!bVar1)) goto code_r0x00019d3f;
                    iVar4 = 0x10;
                }
                else if (iVar4 - 0x10U < 2) {
                    iVar4 = 0x11;
                }
            }
            if (iVar4 == 0xc) {
                uVar6 = 5;
code_r0x00019da5:
                if (uVar6 == uVar2) {
                    *(puVar5 + uVar6 * 4 + 4) = *(puVar5 + uVar6 * 4 + 4) + 1;
                }
                else {
                    *puVar5 = *puVar5 | 1 << uVar6;
                    *(puVar5 + uVar6 * 4 + 2) = puVar7 - arg1;
                    (puVar5 + uVar6 * 4 + 4)[0] = 1;
                    (puVar5 + uVar6 * 4 + 4)[1] = 0;
                    uVar2 = uVar6;
                }
            }
            else if (iVar4 != 0xd) {
                if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
                    uVar6 = 6;
                }
                else {
                    if (iVar4 == 0x10) goto code_r0x00019dd5;
                    if (iVar4 == 0x11) {
                        uVar6 = 7;
                    }
                    else if (iVar4 == 0x12) {
                        return 0x8000000000000002;
                    }
                }
                goto code_r0x00019da5;
            }
code_r0x00019dd5:
            puVar7 = puVar7 + 1;
        } while (puVar7 < puVar3);
    }
    return 0;
}


/* fcn.00016acc @ 0x16acc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00016acc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t *arg1_00;
    uint64_t arg3_00;
    uint64_t uVar3;
    char *arg1_01;
    uint in_R9;
    uint64_t uStackX_8;
    char *pcStackX_20;
    uint32_t var_40h;
    uint uStack_48;
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
                iVar2 = fcn.000167e4(arg1_01,&pcStackX_20,&uStackX_8);
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
            iVar2 = fcn.000168b0(arg1_01,&pcStackX_20,&uStackX_8);
            if (iVar2 < 0) {
                return 0x8000000000000003;
            }
            if (4 < pcStackX_20 - arg1_01) {
                return 0x8000000000000003;
            }
            *(&uStack_48 + uVar3) = uStackX_8 >> 8;
            *(&uStack_48 + uVar3 + 1) = uStackX_8;
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
            if (uVar3 == 0x10) goto code_r0x00016c2c;
        }
        arg1 = arg1_01 + 1;
        arg1_01 = arg1;
    } while (uVar3 < 0x11);
    if (uVar3 == 0x10) {
code_r0x00016c2c:
        if (arg3_00 != 0x10) {
            return 0x8000000000000003;
        }
        if (uVar3 != 0x10) goto code_r0x00016c3a;
    }
    else {
code_r0x00016c3a:
        if (arg3_00 == 0x10) {
            return 0x8000000000000003;
        }
        if (arg3_00 == 0) goto code_r0x00016c60;
    }
    if (arg3 != &uStack_48) {
        section..text(arg3,&uStack_48,arg3_00);
    }
code_r0x00016c60:
    if (0x10 - uVar3 != 0) {
        fcn.000102c0(arg3_00 + arg3,0x10 - uVar3);
    }
    if (arg3_00 < uVar3) {
        arg1_00 = arg3 + 0x10 + (arg3_00 - uVar3);
        if ((uVar3 - arg3_00 != 0) && (arg1_00 != &uStack_48 + arg3_00)) {
            section..text(arg1_00,&uStack_48 + arg3_00,uVar3 - arg3_00);
        }
    }
    if (arg2 != 0) {
        *arg2 = arg1_01;
    }
    return 0;
}


/* fcn.0001bb44 @ 0x1bb44 */

ulong fcn.0001bb44(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t arg3;
    ulong uVar5;
    
    arg3 = 0;
    uVar4 = 0x2c;
    if (arg2 != 0) {
        uVar3 = 0xffff;
        iVar1 = fcn.00016534(arg2,0xffff);
        arg3 = iVar1 * 2 + 2;
        uVar4 = iVar1 * 2 + 0x2e;
        if (uVar3 < uVar4) {
            return 0x8000000000000005;
        }
    }
    puVar2 = fcn.00017c2c();
    if (puVar2 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        *puVar2 = 0x10000;
        *(puVar2 + 2) = *0x1bc90;
        *(puVar2 + 4) = *0x1bc98;
        puVar2[6] = 0;
        puVar2[7] = 0xffffffff;
        puVar2[8] = 0;
        puVar2[9] = 0;
        *(puVar2 + 10) = 1;
        *(puVar2 + 1) = uVar4;
        *(puVar2 + 6) = 0x2c;
        if (((arg2 != 0) && (arg3 != 0)) && (puVar2 + 0xb != arg2)) {
            section..text(puVar2 + 0xb,arg2,arg3);
        }
        uVar5 = (**(arg1 + 0x18))(puVar2);
        (**(*0x1d5f8 + 0x48))(puVar2);
    }
    return uVar5;
}


/* fcn.0001b1b0 @ 0x1b1b0 */

ulong fcn.0001b1b0(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t arg2_00;
    uint64_t uVar4;
    uint64_t uVar5;
    uint16_t *puStackX_18;
    uint64_t uStackX_20;
    int64_t aiStack_18 [2];
    
    arg2_00 = arg2;
    fcn.00018148(*(arg1 * 8 + 0x1d4f8),arg2,aiStack_18,&uStackX_20);
    puStackX_18 = NULL;
    if (arg1 == 2) {
        fcn.00018148(0x1d4d0,arg2_00,&puStackX_18,0);
    }
    puVar1 = puStackX_18;
    uVar4 = 0;
    uStackX_20 = uStackX_20 >> 1;
    uVar5 = (puStackX_18 != NULL) + uStackX_20;
    if (uVar5 != 0) {
        do {
            uVar3 = 0;
            if (uStackX_20 != 0) {
                do {
                    if (uVar4 == *(aiStack_18[0] + uVar3 * 2)) break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uStackX_20);
            }
        } while (((uVar3 != uStackX_20) || ((puStackX_18 != NULL && (uVar4 == *puStackX_18)))) &&
                (uVar4 = uVar4 + 1, uVar4 < uVar5));
    }
    if (aiStack_18[0] != 0) {
        (**(*0x1d5f8 + 0x48))(aiStack_18[0]);
    }
    if (puVar1 != NULL) {
        (**(*0x1d5f8 + 0x48))(puVar1);
    }
    if (uVar4 == 0x10000) {
        uVar2 = 0x8000000000000009;
    }
    else {
        *arg2 = uVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001b4a8 @ 0x1b4a8 */

ulong fcn.0001b4a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t *arg1_00;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t *arg1_01;
    ulong uVar5;
    int64_t arg3_00;
    uint64_t uVar6;
    uint64_t uStackX_18;
    uint32_t *puStackX_20;
    
    uStackX_18 = arg3;
    fcn.00018148(arg1,arg2,&puStackX_20,&uStackX_18);
    uVar3 = uStackX_18;
    uVar4 = 0;
    uVar6 = uStackX_18 >> 1;
    if (uVar6 != 0) {
        do {
            if (*(puStackX_20 + uVar4 * 2) == arg2) {
                uVar5 = 0x8000000000000014;
                goto code_r0x0001b588;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
    }
    iVar1 = uStackX_18 + 2;
    arg1_01 = fcn.00017c2c();
    if (uVar3 != 0) {
        iVar2 = uVar6 * 2;
        if ((uVar6 != 0) && (arg1_01 != puStackX_20)) {
            section..text(arg1_01,puStackX_20,iVar2);
        }
        arg1_00 = iVar2 + 2 + arg1_01;
        arg3_00 = uVar3 + uVar6 * -2;
        if ((arg3_00 != 0) && (arg1_00 != iVar2 + puStackX_20)) {
            section..text(arg1_00,iVar2 + puStackX_20,arg3_00);
        }
    }
    iVar2 = *0x1d600;
    *(arg1_01 + uVar6 * 2) = arg2;
    uVar5 = (**(iVar2 + 0x58))(arg1,0x1bc90,7,iVar1,arg1_01);
    (**(*0x1d5f8 + 0x48))(arg1_01);
code_r0x0001b588:
    if (puStackX_20 != NULL) {
        (**(*0x1d5f8 + 0x48))(puStackX_20);
    }
    return uVar5;
}


/* fcn.0001b2a4 @ 0x1b2a4 */

ulong fcn.0001b2a4(uint32_t arg1)

{
    uint32_t *puVar1;
    int16_t iVar2;
    uint32_t uVar3;
    ushort uVar4;
    int64_t iVar5;
    uint *puVar6;
    int64_t iVar7;
    uint in_register_0000000c;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t *arg1_00;
    uint32_t *arg2;
    ulong uVar11;
    ushort auStackX_8 [4];
    int64_t iStackX_10;
    uchar auStack_58 [48];
    
    piVar8 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar8 != 0x10000) {
        iVar7 = 0;
        if ((piVar8[3] != 0) && (*(piVar8 + 1) < 4)) {
            auStackX_8[0] = 0;
            arg2 = auStackX_8;
            if (piVar8[2] != 0) {
                arg2 = piVar8[2];
            }
            iVar2 = *arg2;
            puVar1 = arg2;
            iVar10 = iVar7;
            while (iVar2 != 0) {
                puVar1 = puVar1 + 2;
                iVar10 = iVar10 + 1;
                iVar2 = *puVar1;
            }
            iVar5 = fcn.00017d24(piVar8[3]);
            uVar3 = *(piVar8 + 5);
            puVar6 = fcn.00017c2c();
            *puVar6 = *(piVar8 + 0xc);
            uVar4 = fcn.00017d24(piVar8[3]);
            *(puVar6 + 1) = uVar4;
            arg1_00 = puVar6 + 6;
            iVar2 = *arg2;
            puVar1 = arg2;
            iVar9 = iVar7;
            while (iVar2 != 0) {
                puVar1 = puVar1 + 2;
                iVar9 = iVar9 + 1;
                iVar2 = *puVar1;
            }
            iVar9 = iVar9 * 2 + 2;
            if ((iVar9 != 0) && (arg1_00 != arg2)) {
                section..text(arg1_00,arg2,iVar9);
            }
            for (; *arg2 != 0; arg2 = arg2 + 2) {
                iVar7 = iVar7 + 1;
            }
            iVar7 = arg1_00 + (iVar7 + 1) * 2;
            iVar9 = fcn.00017d24(piVar8[3]);
            if ((iVar9 != 0) && (iVar7 != piVar8[3])) {
                section..text(iVar7,piVar8[3],iVar9);
            }
            iVar9 = fcn.00017d24(piVar8[3]);
            if ((*(piVar8 + 5) != 0) && (iVar7 + iVar9 != piVar8[4])) {
                section..text(iVar7 + iVar9,piVar8[4],*(piVar8 + 5));
            }
            fcn.00016cac(auStack_58,0x2a,0x1d4e8,*(piVar8[1] * 8 + 0x1d518));
            uVar11 = 7;
            if (piVar8[1] == 3) {
                iVar7 = (**(*0x1d5f8 + 0x140))(0x1c150,0,&iStackX_10);
                if ((-1 < iVar7) && (iStackX_10 != 0)) {
                    fcn.0001bb44(iStackX_10,auStack_58);
                }
                uVar11 = 6;
            }
            uVar11 = (**(*0x1d600 + 0x58))(auStack_58,0x1bc90,uVar11,iVar5 + (iVar10 + 4) * 2 + uVar3,puVar6);
            (**(*0x1d5f8 + 0x48))(puVar6);
            return uVar11;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001b6f0 @ 0x1b6f0 */

//WARNING: Variable defined which should be unmapped: var_2h

ulong fcn.0001b6f0(uint32_t arg1,int64_t arg2)

{
    uint32_t *arg1_00;
    ulong uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t arg3;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    uchar auStack_58 [48];
    int64_t var_2h;
    
    uVar3 = arg2;
    iVar4 = uVar3;
    if ((uVar3 < 4) && (CONCAT44(in_register_0000000c,arg1) < 0x10000)) {
        if (uVar3 < 3) {
            fcn.00018148(*(iVar4 * 8 + 0x1d4f8),arg2,&iStackX_20,&uStackX_18);
            uVar2 = 0;
            if (uStackX_18 >> 1 != 0) {
                do {
                    if (*(iStackX_20 + uVar2 * 2) == CONCAT44(in_register_0000000c,arg1)) {
                        arg1_00 = uVar2 * 2 + iStackX_20;
                        arg3 = (uStackX_18 - 2) + uVar2 * -2;
                        if ((arg3 != 0) && (arg1_00 != arg1_00 + 2)) {
                            section..text(arg1_00,arg1_00 + 2,arg3);
                        }
                        (**(*0x1d600 + 0x58))(*(iVar4 * 8 + 0x1d4f8),0x1bc90,7,uStackX_18 - 2,iStackX_20);
                        break;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uStackX_18 >> 1);
            }
            if (iStackX_20 != 0) {
                (**(*0x1d5f8 + 0x48))(iStackX_20);
            }
        }
        fcn.00016cac(auStack_58,0x2a,0x1d4e8,*(iVar4 * 8 + 0x1d518));
        uVar1 = (**(*0x1d600 + 0x58))(auStack_58,0x1bc90,0,0,0);
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.0001b9a4 @ 0x1b9a4 */

void fcn.0001b9a4(void)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    int64_t aiStackX_10 [3];
    
    auStackX_8[0] = 0;
    aiStackX_10[0] = 0;
    iVar1 = (**(*0x1d5f8 + 0x140))(0x1bdd0,0,aiStackX_10);
    if (-1 < iVar1) {
        iVar1 = *(*(aiStackX_10[0] + 0x18) + 8);
        (**(aiStackX_10[0] + 0x10))(aiStackX_10[0],auStackX_8,0,0,0,0,0,*(iVar1 + 4),*(iVar1 + 8),0);
    }
    return;
}


/* fcn.00018fd4 @ 0x18fd4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00018fd4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    char acStackX_18 [8];
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
    iVar1 = fcn.00018a68(arg1,acStackX_18);
    if (iVar1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = (**(*0x1d5f8 + 0x98))(iVar1,0x1bcf0,&puStack_40);
    if (-1 < iVar1) {
        iVar1 = (**puStack_40)(puStack_40,0x1c080,&puStackX_20,auStack_38);
        if (-1 < iVar1) {
            *arg3 = *puStackX_20;
            (**(*0x1d5f8 + 0x48))();
            if ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2)) {
                uStack_48 = 0;
                iVar1 = (**(*0x1d5f8 + 0x50))(0x80000000,8,0,0,&uStack_48);
                if (iVar1 < 0) {
                    return -0x7ffffffffffffff9;
                }
                do {
                    iVar1 = (**(*0x1d5f8 + 0x58))(uStack_48,2,1000000);
                    if (iVar1 < 0) {
                        iVar1 = -0x7ffffffffffffff9;
code_r0x000191c5:
                        (**(*0x1d5f8 + 0x70))(uStack_48);
                        return iVar1;
                    }
                    do {
                        iVar2 = (**(*0x1d5f8 + 0x78))(uStack_48);
                        if (-1 < iVar2) {
                            arg2 = arg2 - 1000000;
                            iVar1 = (**puStack_40)(puStack_40,0x1c080,&puStackX_20,auStack_38);
                            if (iVar1 < 0) {
                                if (puStackX_20 != NULL) {
                                    (**(*0x1d5f8 + 0x48))();
                                }
                                goto code_r0x000191c5;
                            }
                            *arg3 = *puStackX_20;
                            (**(*0x1d5f8 + 0x48))();
                        }
                    } while (iVar2 == -0x7ffffffffffffffa);
                } while ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2));
                (**(*0x1d5f8 + 0x70))(uStack_48);
                if ((*arg3 == -0x7ffffffffffffffa) && (arg2 < 1000000)) {
                    return -0x7fffffffffffffee;
                }
            }
            return 0;
        }
        if (puStackX_20 != NULL) {
            (**(*0x1d5f8 + 0x48))();
        }
        if (iVar1 != -0x7ffffffffffffffd) {
            return iVar1;
        }
    }
    acStackX_18[0] = '\x01';
    iVar1 = fcn.00018dd4(arg1,acStackX_18);
    if (-1 < iVar1) {
        *arg3 = ~-(acStackX_18[0] != '\0') & 0x800000000000000c;
    }
    return iVar1;
}


