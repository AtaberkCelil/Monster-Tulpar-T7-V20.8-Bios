// decompiled by r2ghidra: 1904_UefiPxeBcDxe.pe32
// functions: 118

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    fcn.00010530(arg1,in_RDX);
    arg2 = 0x1dd40;
    (**(*0x1ebd8 + 0x98))(arg1,0x1dd40,aiStackX_18);
    *(aiStackX_18[0] + 0x58) = 0x10364;
    fcn.00010600(arg1,arg2);
    return;
}


/* fcn.00010530 @ 0x10530 */

void fcn.00010530(ulong noname_0,int64_t arg1)

{
    *0x1ebd8 = *(arg1 + 0x60);
    *0x1ebe0 = *(arg1 + 0x58);
    *0x1ebd0 = arg1;
    (**(*0x1ebd8 + 0x140))(0x1df10,0,0x1ebe8);
    (**(*0x1ebd8 + 0x140))(0x1def0,0,0x1ec08);
    (**(*0x1ebd8 + 0x140))(0x1de40,0,0x1ebf8);
    (**(*0x1ebd8 + 0x140))(0x1e050,0,0x1ebf0);
    (**(*0x1ebd8 + 0x140))(0x1dea0,0,0x1ec00);
    //WARNING: Could not recover jumptable at 0x000105f7. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1ebd8 + 0x140))(0x1dff0,0,0x1ec20);
    return;
}


/* fcn.00010600 @ 0x10600 */

int64_t fcn.00010600(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_1;
    ulong uStackX_10;
    ulong uStackX_18;
    char acStackX_20 [8];
    ulong auStack_18 [2];
    
    uStackX_18 = 8;
    uStackX_10 = arg2;
    iVar1 = (**(*0x1ebe0 + 0x48))(0x1e780,0x1e020,0,&uStackX_18,acStackX_20);
    if ((iVar1 == 0) && (acStackX_20[0] == '\0')) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        auStack_18[0] = 8;
        noname_1 = 0x1e020;
        iVar1 = (**(*0x1ebe0 + 0x48))(0x1e780,0x1e020,0,auStack_18,&uStackX_10);
        if (iVar1 == 0) {
            *0x1ec29 = uStackX_10._1_1_;
            *0x1ec2a = uStackX_10._2_1_;
            *0x1ec2b = uStackX_10._4_1_;
            *0x1ec28 = uStackX_10._5_1_;
        }
        else {
            *0x1ec29 = 1;
            *0x1ec2a = 1;
            *0x1ec2b = 0;
            *0x1ec28 = 1;
        }
        iVar1 = fcn.0001c014(arg1,noname_1,0x1e098,arg1);
        if (-1 < iVar1) {
            iVar1 = fcn.0001c014(arg1,noname_1,0x1e068,0);
            if (iVar1 < 0) {
                (**(*0x1ebd8 + 0x150))(*0x1e0c0,0x1dfa0,0x1e098,0x1dfe0,0x1e168,0x1dda0,0x1e150,0);
            }
        }
    }
    return iVar1;
}


/* fcn.0001c014 @ 0x1c014 */

void fcn.0001c014(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    (**(*0x1ebd8 + 0x148))(arg2 + 0x28,0x1dfa0,arg2,0x1dfe0,0x1e168,0x1dda0,0x1e150,0);
    return;
}


/* fcn.0001c9dc @ 0x1c9dc */

uint64_t fcn.0001c9dc(int64_t arg1,int64_t arg2)

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
    (**(*0x1ebd8 + 0x48))(*arg1);
    return uVar3;
}


/* fcn.0001c338 @ 0x1c338 */

void fcn.0001c338(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x1ebd8 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.0001c384 @ 0x1c384 */

int64_t fcn.0001c384(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x1ebd8 + 0x98))(arg1,0x1de30,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.0001be0c(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x1ebd8 + 0xb8))(0x1de30,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x1ebd8 + 0x98))(iStackX_20,0x1de30,&uStackX_18), -1 < iVar1)) {
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


/* fcn.0001c2ec @ 0x1c2ec */

void fcn.0001c2ec(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint in_R9;
    ulong *apuStack_18 [2];
    
    iVar1 = (**(*0x1ebd8 + 0x118))(arg1,arg3,apuStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**apuStack_18[0])(apuStack_18[0],CONCAT44(in_R9,arg4));
    }
    return;
}


/* fcn.0001bb28 @ 0x1bb28 */

void fcn.0001bb28(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001baf8(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.0001baf8 @ 0x1baf8 */

ulong fcn.0001baf8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1ebd8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.0001bd30 @ 0x1bd30 */

ulong fcn.0001bd30(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x1e62c;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.0001bbf0(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.0001bb54(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.0001baf8(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x1e62c) {
                section..text(iVar4,0x1e62c,4);
            }
            uVar2 = fcn.0001bc40(arg1,iVar3);
            (**(*0x1ebd8 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00010998 @ 0x10998 */

void fcn.00010998(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*(arg2 + 0x38) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0x38),0x1e040,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1dfb0,*(arg2 + 0x38));
    }
    if (*(arg2 + 0x40) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0x40),0x1df60,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1dec0,*(arg2 + 0x40));
    }
    if (*(arg2 + 0x60) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0x60),0x1dfc0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1de70,*(arg2 + 0x60));
    }
    if (*(arg2 + 0x58) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0x58),0x1dfc0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1de70,*(arg2 + 0x58));
    }
    if (*(arg2 + 0x50) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0x50),0x1dd90,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1df90,*(arg2 + 0x50));
    }
    if (*(arg2 + 0x48) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0x48),0x1e010,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1de00,*(arg2 + 0x48));
    }
    if (*(arg2 + 0x28) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 8),0x1e000,*(arg1 + 0x28),*(*(arg2 + 0x28) + 8));
        iVar1 = *(arg2 + 0x28);
        (**(*0x1ebd8 + 0x150))(*(iVar1 + 8),0x1de10,*(iVar1 + 0x18),0x1ddc0,iVar1 + 0x10,0x1dd80,arg2 + 0x108,0);
        (**(*0x1ebd8 + 0x48))(*(*(arg2 + 0x28) + 0x18));
        if (*(arg2 + 0x20) != 0) {
            uVar2 = *(*(arg2 + 0x28) + 8);
            (**(*0x1ebd8 + 0x120))(uVar2,0x1de30,*(arg1 + 0x28),uVar2);
            (**(*0x1ebd8 + 0x90))(*(*(arg2 + 0x28) + 8),0x1de30,*(arg2 + 0x20));
        }
        (**(*0x1ebd8 + 0x48))(*(arg2 + 0x28));
    }
    *(arg2 + 0x38) = 0;
    *(arg2 + 0x40) = 0;
    *(arg2 + 0x60) = 0;
    *(arg2 + 0x58) = 0;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x48) = 0;
    *(arg2 + 0x28) = 0;
    return;
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
    
    //[00] -r-x section size 56000 named .text
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


/* fcn.0001c284 @ 0x1c284 */

int fcn.0001c284(void)

{
    int aiStackX_8 [8];
    uint16_t uStack_18;
    ushort uStack_15;
    uchar uStack_13;
    uchar uStack_12;
    uint32_t uStack_10;
    
    (**(*0x1ebe0 + 0x18))(&uStack_18,0);
    (**(*0x1ebd8 + 0xf0))(aiStackX_8);
    return aiStackX_8[0] + (CONCAT31(CONCAT21(uStack_15,uStack_13),uStack_12) ^ uStack_18 << 7 ^ uStack_10);
}


/* fcn.00010c2c @ 0x10c2c */

void fcn.00010c2c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*(arg2 + 0xa0) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0xa0),0x1dfd0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1df30,*(arg2 + 0xa0));
    }
    if (*(arg2 + 0xc0) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0xc0),0x1dee0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1df20,*(arg2 + 0xc0));
    }
    if (*(arg2 + 0xb8) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0xb8),0x1dee0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1df20,*(arg2 + 0xb8));
    }
    if (*(arg2 + 0xb0) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0xb0),0x1deb0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1ddd0,*(arg2 + 0xb0));
    }
    if (*(arg2 + 0xa8) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 0xa8),0x1dde0,*(arg1 + 0x28),*(arg2 + 8));
        fcn.0001c338(*(arg2 + 8),*(arg1 + 0x28),0x1dd70,*(arg2 + 0xa8));
    }
    if (*(arg2 + 0x30) != 0) {
        (**(*0x1ebd8 + 0x120))(*(arg2 + 8),0x1e000,*(arg1 + 0x28),*(*(arg2 + 0x30) + 8));
        iVar1 = *(arg2 + 0x30);
        (**(*0x1ebd8 + 0x150))(*(iVar1 + 8),0x1de10,*(iVar1 + 0x18),0x1ddc0,iVar1 + 0x10,0x1dd80,arg2 + 0x108,0);
        (**(*0x1ebd8 + 0x48))(*(*(arg2 + 0x30) + 0x18));
        if (*(arg2 + 0x20) != 0) {
            uVar2 = *(*(arg2 + 0x30) + 8);
            (**(*0x1ebd8 + 0x120))(uVar2,0x1de30,*(arg1 + 0x28),uVar2);
            (**(*0x1ebd8 + 0x90))(*(*(arg2 + 0x30) + 8),0x1de30,*(arg2 + 0x20));
        }
        (**(*0x1ebd8 + 0x48))(*(arg2 + 0x30));
    }
    *(arg2 + 0xa0) = 0;
    *(arg2 + 0xc0) = 0;
    *(arg2 + 0xb8) = 0;
    *(arg2 + 0xb0) = 0;
    *(arg2 + 0xa8) = 0;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x199) = 0;
    return;
}


/* fcn.00010eb0 @ 0x10eb0 */

ulong fcn.00010eb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t var_bp_18h;
    int64_t var_28h;
    int64_t var_20h;
    uchar *puStack_20;
    int64_t var_10h;
    
    if (*(arg2 + 0x100) != 0) {
        *arg3 = *(*(arg2 + 0x100) + 0x23);
        return 0;
    }
    iVar2 = fcn.0001c384(arg1,0);
    if (iVar2 != 0) {
        var_bp_18h = 0;
        iVar2 = (**(*0x1ebd8 + 0x98))(iVar2,0x1ddb0,&var_bp_18h);
        if ((-1 < iVar2) && (var_bp_18h != 0)) {
            var_28h = 0;
            var_20h = 0;
            iVar2 = (**(var_bp_18h + 0x10))(var_bp_18h,&var_28h,&var_20h);
            if ((-1 < iVar2) && (var_28h != 0)) {
                bVar1 = false;
                uVar4 = 0;
                if (var_20h != 0) {
                    piVar3 = var_28h;
                    do {
                        if ((*piVar3 == *0x1dd50) && (piVar3[1] == *0x1dd58)) {
                            bVar1 = true;
                            break;
                        }
                        uVar4 = uVar4 + 1;
                        piVar3 = piVar3 + 2;
                    } while (uVar4 < var_20h);
                }
                (**(*0x1ebd8 + 0x48))();
                if (!bVar1) {
                    return 0x800000000000000e;
                }
                puStack_20 = NULL;
                var_10h = 0;
                iVar2 = (**var_bp_18h)(var_bp_18h,0x1dd50,&puStack_20,&var_10h);
                if ((-1 < iVar2) && (puStack_20 != NULL)) {
                    *arg3 = *puStack_20;
                    (**(*0x1ebd8 + 0x48))();
                    return 0;
                }
            }
            (**(*0x1ebd8 + 0x48))();
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001ce50 @ 0x1ce50 */

ulong fcn.0001ce50(int64_t arg1,int64_t arg2)

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
        iVar1 = (**(*0x1ebd8 + 0x98))(arg1,0x1de10,&pcStackX_10);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1ebd8 + 0xb8))(0x1de80,&pcStackX_10,&iStackX_8);
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
            iVar1 = (**(*0x1ebd8 + 0x98))(iStackX_8,0x1de80,&var_bp_20h);
            if (((-1 < iVar1) && (iVar1 = (**(var_bp_20h + 0x30))(var_bp_20h,auStack_28), -1 < iVar1)) &&
               (*0x1e060 != -1)) {
                iVar1 = iVar2;
                do {
                    if (*(iVar2 + 0x1e062) == -1) {
                        return 0;
                    }
                    if ((*(iVar2 + 0x1e060) == var_18h) && (*(iVar2 + 0x1e062) == var_16h)) {
                        return 1;
                    }
                    iVar1 = iVar1 + 1;
                    iVar2 = iVar1 * 4;
                } while (*(iVar2 + 0x1e060) != -1);
            }
        }
    }
    return 0;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_R8;
    int64_t arg2_00;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    ulong in_stack_ffffffffffffff40;
    uint uVar4;
    ulong uVar3;
    uint auStack_a8 [4];
    uchar uStack_96;
    uchar auStack_88 [4];
    uint uStack_84;
    
    uVar4 = in_stack_ffffffffffffff40 >> 0x20;
    arg2_00 = CONCAT44(in_R8,arg3);
    if (*(arg2_00 + 0x28) == 0) {
        iVar1 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1de00,arg3 + 0x48);
        if (-1 < iVar1) {
            uVar2 = CONCAT44(uVar4,0x10);
            iVar1 = (**(*0x1ebd8 + 0x118))(*(arg2_00 + 0x48),0x1e010,arg2_00 + 0x80,*(arg1 + 0x28),arg2,uVar2);
            uVar4 = uVar2 >> 0x20;
            if ((-1 < iVar1) && (iVar1 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1df90,arg3 + 0x50), -1 < iVar1)) {
                uVar2 = CONCAT44(uVar4,0x10);
                iVar1 = (**(*0x1ebd8 + 0x118))(*(arg2_00 + 0x50),0x1dd90,arg2_00 + 0x88,*(arg1 + 0x28),arg2,uVar2);
                uVar4 = uVar2 >> 0x20;
                if ((-1 < iVar1) && (iVar1 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1de70,arg3 + 0x58), -1 < iVar1)) {
                    uVar2 = CONCAT44(uVar4,0x10);
                    iVar1 = (**(*0x1ebd8 + 0x118))
                                      (*(arg2_00 + 0x58),0x1dfc0,arg2_00 + 0x90,*(arg1 + 0x28),arg2,uVar2);
                    uVar4 = uVar2 >> 0x20;
                    if ((-1 < iVar1) && (iVar1 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1de70,arg3 + 0x60), -1 < iVar1))
                    {
                        uVar2 = CONCAT44(uVar4,0x10);
                        iVar1 = (**(*0x1ebd8 + 0x118))
                                          (*(arg2_00 + 0x60),0x1dfc0,arg2_00 + 0x98,*(arg1 + 0x28),arg2,uVar2);
                        uVar4 = uVar2 >> 0x20;
                        if ((-1 < iVar1) &&
                           (iVar1 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1dfb0,arg3 + 0x38), -1 < iVar1)) {
                            uVar2 = CONCAT44(uVar4,0x10);
                            iVar1 = (**(*0x1ebd8 + 0x118))
                                              (*(arg2_00 + 0x38),0x1e040,arg2_00 + 0x68,*(arg1 + 0x28),arg2,uVar2);
                            uVar4 = uVar2 >> 0x20;
                            if ((((-1 < iVar1) &&
                                 (iVar1 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1dec0,arg3 + 0x40), -1 < iVar1)) &&
                                (iVar1 = (**(*0x1ebd8 + 0x118))
                                                   (*(arg2_00 + 0x40),0x1df60,arg2_00 + 0x70,*(arg1 + 0x28),arg2,
                                                    CONCAT44(uVar4,0x10)), -1 < iVar1)) &&
                               (iVar1 = (***(arg2_00 + 0x70))(*(arg2_00 + 0x70),auStack_88,0,0), -1 < iVar1)) {
                                *(arg2_00 + 0x2bb8) = uStack_84;
                                iVar1 = fcn.0001bb28(0x28);
                                *(arg2_00 + 0x28) = iVar1;
                                if (iVar1 == 0) {
                                    return -0x7ffffffffffffff7;
                                }
                                *(iVar1 + 0x20) = arg2_00;
                                **(arg2_00 + 0x28) = 0x56455850;
                                iVar1 = (**(*0x1ebd8 + 0x98))(arg2,0x1de90,arg2_00 + 0x78);
                                if (-1 < iVar1) {
                                    fcn.000102c0(auStack_a8,0x1b);
                                    auStack_a8[0] = 0x1b0c03;
                                    uStack_96 = 0;
                                    uVar2 = fcn.0001bd30(*(arg2_00 + 400),auStack_a8);
                                    *(*(arg2_00 + 0x28) + 0x18) = uVar2;
                                    if (*(*(arg2_00 + 0x28) + 0x18) == 0) {
                                        iVar1 = -0x7ffffffffffffff7;
                                    }
                                    else {
                                        iVar1 = *(arg2_00 + 0x28) + 0x10;
                                        if (iVar1 != 0x1e0c8) {
                                            section..text(iVar1,0x1e0c8,8);
                                        }
                                        iVar1 = *(arg2_00 + 0x28);
                                        uVar4 = 0;
                                        iVar1 = (**(*0x1ebd8 + 0x148))
                                                          (iVar1 + 8,0x1de10,*(iVar1 + 0x18),0x1ddc0,iVar1 + 0x10,
                                                           0x1dd80,arg2_00 + 0x108,0);
                                        if (-1 < iVar1) {
                                            if (*(arg2_00 + 0x20) == 0) {
code_r0x00011433:
                                                iVar1 = (**(*0x1ebd8 + 0x118))
                                                                  (arg2,0x1e000,auStackX_20,*(arg1 + 0x28),
                                                                   *(*(arg2_00 + 0x28) + 8),CONCAT44(uVar4,8));
                                                if (-1 < iVar1) {
                                                    iVar1 = *(arg2_00 + 0x170);
                                                    *(arg2_00 + 0x2a68) = 0;
                                                    *(arg2_00 + 0x2a6a) = 0x101;
                                                    *(arg2_00 + 0x2a6c) = *(iVar1 + 0x12);
                                                    *(arg2_00 + 0x2a6d) = *(iVar1 + 0x11);
                                                    *(arg2_00 + 0x2a70) = 50000;
                                                    *(arg2_00 + 0x2a74) = 50000;
                                                    *(arg2_00 + 0x2ac2) = 1;
                                                    *(arg2_00 + 0x2ac0) = 1;
                                                    *(arg2_00 + 0x2ace) = *(iVar1 + 0x12);
                                                    *(arg2_00 + 0x2acf) = *(iVar1 + 0x11);
                                                    *(arg2_00 + 0x2ad4) = 50000;
                                                    *(arg2_00 + 0x2ad8) = 50000;
                                                    goto code_r0x00011029;
                                                }
                                            }
                                            else {
                                                iVar1 = (**(*0x1ebd8 + 0x80))(*(arg2_00 + 0x28) + 8,0x1de30,0);
                                                if (-1 < iVar1) {
                                                    uVar3 = CONCAT44(uVar4,0x30);
                                                    uVar2 = *(*(arg2_00 + 0x28) + 8);
                                                    iVar1 = (**(*0x1ebd8 + 0x118))
                                                                      (uVar2,0x1de30,auStackX_18,*(arg1 + 0x28),
                                                                       uVar2,uVar3);
                                                    uVar4 = uVar3 >> 0x20;
                                                    if (-1 < iVar1) goto code_r0x00011433;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        fcn.00010998(arg1,arg2_00);
    }
    else {
code_r0x00011029:
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000114e0 @ 0x114e0 */

//WARNING: Variable defined which should be unmapped: var_18h_2
//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.000114e0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *arg3_00;
    uint8_t *puVar1;
    ulong *puVar2;
    uint8_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint in_R8;
    int64_t arg2_00;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t var_18h_2;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_60h;
    int64_t var_68h;
    ulong in_stack_fffffffffffffee0;
    uint uVar12;
    ulong uVar11;
    uint auStack_108 [10];
    uchar uStack_dd;
    uchar auStack_c8 [4];
    uint uStack_c4;
    int64_t var_80h;
    int64_t iStack_80;
    int64_t iStack_70;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t var_38h;
    int64_t var_bp_28h;
    int64_t var_18h;
    int64_t var_bp_8h;
    
    uVar12 = in_stack_fffffffffffffee0 >> 0x20;
    arg2_00 = CONCAT44(in_R8,arg3);
    if (*(arg2_00 + 0x30) == 0) {
        iVar5 = fcn.0001bb28(0x28);
        *(arg2_00 + 0x30) = iVar5;
        if (iVar5 == 0) {
            return -0x7ffffffffffffff7;
        }
        *(iVar5 + 0x20) = arg2_00;
        **(arg2_00 + 0x30) = 0x56455850;
        iVar5 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1dd70,arg3 + 0xa8);
        if ((-1 < iVar5) && (iVar5 = (**(*0x1ebd8 + 0x118))(), -1 < iVar5)) {
            iVar4 = fcn.0001c284();
            iVar5 = *(arg2_00 + 0x20);
            uVar10 = (iVar4 * 0x41c64e6d + 0x3039) % 0xffffffff;
            *(arg2_00 + 0x2bb4) = uVar10;
            if (iVar5 != 0) {
                iVar7 = *(iVar5 + 0x78);
                uVar8 = 0;
                if (*(iVar7 + 4) != 0) {
                    do {
                        puVar1 = iVar7 + 0x228 + uVar8;
                        uVar3 = uVar8;
                        uVar8 = uVar8 + 1;
                        uVar9 = uVar10 | *puVar1 << ((uVar3 & 3) << 3);
                        uVar10 = uVar9;
                        *(arg2_00 + 0x2bb4) = uVar9;
                        iVar7 = *(iVar5 + 0x78);
                    } while (uVar8 < *(iVar7 + 4));
                }
            }
            iVar5 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1ddd0,arg2_00 + 0xb0);
            if (-1 < iVar5) {
                uVar6 = CONCAT44(uVar12,0x10);
                iVar5 = (**(*0x1ebd8 + 0x118))(*(arg2_00 + 0xb0),0x1deb0,arg2_00 + 0xe0,*(arg1 + 0x28),arg2,uVar6);
                uVar12 = uVar6 >> 0x20;
                if (-1 < iVar5) {
                    iVar5 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1df20,arg2_00 + 0xb8);
                    if (-1 < iVar5) {
                        uVar6 = CONCAT44(uVar12,0x10);
                        iVar5 = (**(*0x1ebd8 + 0x118))
                                          (*(arg2_00 + 0xb8),0x1dee0,arg2_00 + 0xe8,*(arg1 + 0x28),arg2,uVar6);
                        uVar12 = uVar6 >> 0x20;
                        if (-1 < iVar5) {
                            iVar5 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1df20,arg2_00 + 0xc0);
                            if (-1 < iVar5) {
                                uVar6 = CONCAT44(uVar12,0x10);
                                iVar5 = (**(*0x1ebd8 + 0x118))
                                                  (*(arg2_00 + 0xc0),0x1dee0,arg2_00 + 0xf0,*(arg1 + 0x28),arg2,
                                                   uVar6);
                                uVar12 = uVar6 >> 0x20;
                                if (-1 < iVar5) {
                                    iVar5 = fcn.0001c2ec(arg2,*(arg1 + 0x28),0x1df30,arg2_00 + 0xa0);
                                    if (-1 < iVar5) {
                                        iVar5 = (**(*0x1ebd8 + 0x118))
                                                          (*(arg2_00 + 0xa0),0x1dfd0,arg2_00 + 200,*(arg1 + 0x28),
                                                           arg2,CONCAT44(uVar12,0x10));
                                        if ((-1 < iVar5) &&
                                           (puVar2 = *(arg2_00 + 200), iVar5 = (**puVar2)(puVar2,auStack_c8,0,0),
                                           -1 < iVar5)) {
                                            *(arg2_00 + 0x2bbc) = uStack_c4;
                                            if (iStack_80 != 0) {
                                                (**(*0x1ebd8 + 0x48))();
                                            }
                                            if (iStack_70 != 0) {
                                                (**(*0x1ebd8 + 0x48))();
                                            }
                                            if (iStack_60 != 0) {
                                                (**(*0x1ebd8 + 0x48))();
                                            }
                                            if (iStack_50 != 0) {
                                                (**(*0x1ebd8 + 0x48))();
                                            }
                                            if (var_38h != 0) {
                                                (**(*0x1ebd8 + 0x48))();
                                            }
                                            if (var_bp_28h != 0) {
                                                (**(*0x1ebd8 + 0x48))();
                                            }
                                            iVar5 = (**(*0x1ebd8 + 0x98))(arg2,0x1de20,arg2_00 + 0xd0);
                                            if (-1 < iVar5) {
                                                fcn.000102c0(auStack_108,0x3c);
                                                auStack_108[0] = 0x3c0d03;
                                                uStack_dd = 0x40;
                                                uVar6 = fcn.0001bd30(*(arg2_00 + 400),auStack_108);
                                                *(*(arg2_00 + 0x30) + 0x18) = uVar6;
                                                if (*(*(arg2_00 + 0x30) + 0x18) == 0) {
                                                    iVar5 = -0x7ffffffffffffff7;
                                                }
                                                else {
                                                    iVar5 = *(arg2_00 + 0x30) + 0x10;
                                                    if (iVar5 != 0x1e0c8) {
                                                        section..text(iVar5,0x1e0c8,8);
                                                    }
                                                    iVar5 = *(arg2_00 + 0x30);
                                                    uVar12 = 0;
                                                    iVar5 = (**(*0x1ebd8 + 0x148))
                                                                      (iVar5 + 8,0x1de10,*(iVar5 + 0x18),0x1ddc0,
                                                                       iVar5 + 0x10,0x1dd80,arg2_00 + 0x108,0);
                                                    if (-1 < iVar5) {
                                                        if (*(arg2_00 + 0x20) == 0) {
code_r0x000119b5:
                                                            iVar5 = (**(*0x1ebd8 + 0x118))
                                                                              (arg2,0x1e000,auStackX_20,
                                                                               *(arg1 + 0x28),*(*(arg2_00 + 0x30) + 8)
                                                                               ,CONCAT44(uVar12,8));
                                                            if (-1 < iVar5) {
                                                                arg3_00 = arg2_00 + 0x199;
                                                                iVar5 = fcn.00010eb0(arg2,arg2_00,arg3_00);
                                                                if (iVar5 < 0) {
                                                                    *arg3_00 = '\x01';
                                                                }
                                                                if (*arg3_00 != '\0') {
                                                                    *(arg2_00 + 0x2a8d) = 0x101;
                                                                    *(arg2_00 + 0x2a94) = 50000;
                                                                    *(arg2_00 + 0x2a98) = 50000;
                                                                    *(arg2_00 + 0x2a90) = 0x40;
                                                                    *(arg2_00 + 0x2ade) = 1;
                                                                    *(arg2_00 + 0x2adc) = 0x3a;
                                                                    *(arg2_00 + 0x2b01) = 0x40;
                                                                    *(arg2_00 + 0x2b08) = 50000;
                                                                    *(arg2_00 + 0x2b0c) = 50000;
                                                                    goto code_r0x0001150e;
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            iVar5 = (**(*0x1ebd8 + 0x80))
                                                                              (*(arg2_00 + 0x30) + 8,0x1de30,0);
                                                            if (-1 < iVar5) {
                                                                uVar11 = CONCAT44(uVar12,0x30);
                                                                uVar6 = *(*(arg2_00 + 0x30) + 8);
                                                                iVar5 = (**(*0x1ebd8 + 0x118))
                                                                                  (uVar6,0x1de30,auStackX_18,
                                                                                   *(arg1 + 0x28),uVar6,uVar11);
                                                                uVar12 = uVar11 >> 0x20;
                                                                if (-1 < iVar5) goto code_r0x000119b5;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        fcn.00010c2c(arg1,arg2_00);
    }
    else {
code_r0x0001150e:
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.00010770 @ 0x10770 */

int64_t fcn.00010770(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_10h;
    
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1e040,&var_20h,&var_18h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_20h,&var_18h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1df60,&var_10h,&var_28h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_10h,&var_28h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1dfc0,&var_20h,&var_18h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_20h,&var_18h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1e010,&var_10h,&var_28h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_10h,&var_28h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1dd90,&var_20h,&var_18h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_20h,&var_18h), iVar1 != 0)) {
        return iVar1;
    }
    return 0;
}


/* fcn.000108a0 @ 0x108a0 */

int64_t fcn.000108a0(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_10h;
    
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1dfd0,&var_20h,&var_18h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_20h,&var_18h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1dee0,&var_10h,&var_28h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_10h,&var_28h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1dde0,&var_20h,&var_18h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_20h,&var_18h), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x1ebd8 + 0x128))(arg1,0x1deb0,&var_10h,&var_28h);
    if ((-1 < iVar1) && (iVar1 = fcn.0001c9dc(&var_10h,&var_28h), iVar1 != 0)) {
        return iVar1;
    }
    return 0;
}


/* fcn.00011da0 @ 0x11da0 */

int64_t fcn.00011da0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_18;
    int64_t iStackX_20;
    char in_stack_00000028;
    
    iStackX_20 = 0;
    iStackX_18 = 0;
    iVar1 = (**(*0x1ebd8 + 0x118))(arg2,0x1ddc0,&iStackX_20,*(arg1 + 0x28),arg2,2);
    if (iVar1 < 0) {
        if (in_stack_00000028 == '\x04') {
            iVar2 = fcn.00010770(arg2);
        }
        else {
            iVar2 = fcn.000108a0(arg2);
        }
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = (**(*0x1ebd8 + 0x118))(iVar2,0x1e000,&iStackX_18,*(arg1 + 0x28),arg2,2);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = iStackX_18 + -0x18;
    }
    else {
        iVar1 = (**(*0x1ebd8 + 0x118))(arg2,0x1ddc0,&iStackX_20,*(arg1 + 0x28),arg2,2);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = *(iStackX_20 + 0x10);
        iVar2 = *(iVar1 + 8);
    }
    iVar3 = (**(iVar1 + 0x118))(iVar1 + 0x108);
    if ((iVar3 != 0) && (iVar3 != -0x7fffffffffffffed)) {
        return iVar3;
    }
    if ((*(iVar1 + 0x28) != 0) && (in_stack_00000028 == '\x04')) {
        fcn.00010998(arg1,iVar1);
    }
    if ((*(iVar1 + 0x30) != 0) && (in_stack_00000028 == '\x06')) {
        fcn.00010c2c(arg1,iVar1);
    }
    if ((*(iVar1 + 0x28) == 0) && (*(iVar1 + 0x30) == 0)) {
        (**(*0x1ebd8 + 0x90))(iVar2,0x1e000,iVar1 + 0x18);
        (**(*0x1ebd8 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.0001c44c @ 0x1c44c */

int64_t fcn.0001c44c(int64_t arg1,int64_t arg2,int64_t arg3)

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
    iVar1 = fcn.0001c384(arg1,&iStack_2b0);
    if (iVar1 == 0) {
        uStackX_20 = 0;
        iVar1 = (**(*0x1ebd8 + 0x98))(arg1,0x1df80,&puStack_2b8);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**puStack_2b8)(puStack_2b8,&uStackX_20);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*0x1ebd8 + 0x98))(uStackX_20,0x1e030,apuStack_2a8);
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


/* fcn.0001c0f0 @ 0x1c0f0 */

void fcn.0001c0f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.0001c06c(arg1,*(*0x1ebd0 + 0x40),&iStackX_10);
    return;
}


/* fcn.0001c06c @ 0x1c06c */

ulong fcn.0001c06c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iVar2;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    arg1_00 = fcn.0001baf8(arg1,0x282);
    uVar1 = fcn.0001cfac(arg1_00,0x141,0x40,arg1,in_stack_00000038,in_stack_00000040);
    if (arg2 != 0) {
        iVar2 = (**(arg2 + 8))(arg2,arg1_00);
        if (iVar2 < 0) {
            uVar1 = 0;
        }
    }
    (**(*0x1ebd8 + 0x48))(arg1_00);
    return uVar1;
}


/* fcn.0001cfac @ 0x1cfac */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001cfac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001d00a;
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
code_r0x0001d00a:
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
        uVar20 = fcn.0001b69c(arg4,0xf4241);
        if (uVar17 < uVar20) {
            return 0;
        }
        uVar20 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001b670(arg4);
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
            pcVar8 = 0x1e82c;
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
code_r0x0001d3c7:
            uStack_a8 = uVar5 & uStack_98;
            if ((uVar5 & uStack_98) == 10) {
                pcVar8 = 0x1e82c;
            }
            else {
                pcVar8 = 0x1e830;
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar12 = puStack_b0;
            puVar18 = in_stack_00000028;
            puVar21 = puStackX_20;
code_r0x0001d15f:
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
                    goto code_r0x0001d302;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar17 & 0x800) == 0) {
                        uVar17 = uVar17 | 0x20;
                        uStackX_18 = uVar17;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x0001d319;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar17 = uVar17 | 0x10;
                            goto code_r0x0001d302;
                        }
                        goto code_r0x0001d319;
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
code_r0x0001d302:
                puVar21 = puStackX_20;
                uStackX_18 = uVar17;
                goto code_r0x0001d15f;
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
                        goto code_r0x0001d15f;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar17 = uVar17 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x0001d319;
                        uVar17 = uVar17 | 8;
                    }
                }
                goto code_r0x0001d302;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar21;
code_r0x0001d319:
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
                        fcn.0001dd1c(&var_68h_2,0x26,0,0x1e7c0);
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
                            goto code_r0x0001d3c7;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001d5af;
                        if (uStack_a8 == 0x58) goto code_r0x0001d6a5;
                        if (uStack_a8 == 0x61) goto code_r0x0001d5b8;
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
                            goto code_r0x0001d140;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001d13c;
                        goto code_r0x0001d6bc;
                    }
                    puVar21 = puStackX_20 + var_78h;
                    pcVar8 = 0x1e82c;
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
                goto code_r0x0001d8e9;
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
                            iVar11 = 0x1e8cb;
                            goto code_r0x0001d66c;
                        }
                    }
                    else if (uVar5 < 6) {
                        iVar11 = uVar5 * 0x19;
                        pcVar8 = "Success";
code_r0x0001d66c:
                        pcVar8 = pcVar8 + iVar11;
                        if (pcVar8 != &var_68h_2) goto code_r0x0001d8e9;
                    }
                    fcn.0001dd1c(&var_68h_2,0x26,0,0x1e824);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001d5af:
                        uVar17 = uVar17 | 0x400;
                        uStackX_18 = uVar17;
code_r0x0001d5b8:
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
                        goto code_r0x0001d8e9;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001d13c;
                            goto code_r0x0001d6a9;
                        }
                        goto code_r0x0001d6ae;
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
                        goto code_r0x0001d8e9;
                    }
                    fcn.0001dd1c(&var_68h_2,0x26,0,0x1e808);
                    pcVar8 = &var_68h_2;
                }
                uVar20 = uStack_c0;
                goto code_r0x0001d8e9;
            }
            uVar17 = uVar17 & 0xffffffffffffffd9 | 0x10;
code_r0x0001d6a5:
            uVar17 = uVar17 | 0x20;
code_r0x0001d6a9:
            uVar17 = uVar17 | 0x80;
code_r0x0001d6ae:
            if (-1 < uVar17) {
                uVar17 = uVar17 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x0001d6bc:
            if ((uVar17 & 0x10) == 0) {
                if (puVar12 != NULL) {
                    uVar20 = *puVar12;
                    goto code_r0x0001d6fe;
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
code_r0x0001d6fe:
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
code_r0x0001d786:
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
                    if ((uVar17 & 0x4010) == 0x4000) goto code_r0x0001d786;
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
code_r0x0001d13c:
            pcVar8 = &uStack_a8;
code_r0x0001d140:
            uVar17 = uVar17 | 0x400;
            uStackX_18 = uVar17;
            puVar21 = puStackX_20;
        }
code_r0x0001d8e9:
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
                arg1 = fcn.0001cf78(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001cf78(arg1,pcVar15,uVar22 - uVar20,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.0001cf78(arg1,pcStack_d0,uVar22 - uVar20,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.0001cf78(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
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


/* fcn.0001cdfc @ 0x1cdfc */

void fcn.0001cdfc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg2_00;
    uint64_t uVar1;
    
    fcn.0001c0f0(0x1e768,arg2,arg3,arg4);
    uVar1 = 0;
    do {
        arg2_00 = *(uVar1 + arg1);
        fcn.0001c0f0(0x1e774,arg2_00,arg3,arg4);
        if (uVar1 < 5) {
            fcn.0001c0f0(0x1e77c,arg2_00,arg3,arg4);
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    return;
}


/* fcn.0001cd5c @ 0x1cd5c */

ulong fcn.0001cd5c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int16_t aiStackX_8 [16];
    
    aiStackX_8[0] = CONCAT11(aiStackX_8[0]._1_1_,arg1);
    uVar2 = *0x1ec2b;
    fcn.0001c0f0(0x1e740,arg2,arg3,arg4);
    iVar3 = uVar2 * 10;
    while (((iVar1 = (**(*0x1ebd8 + 0x78))(*(*(*0x1ebd0 + 0x30) + 0x10)), iVar1 == -0x7ffffffffffffffa ||
            (iVar1 = (**(*(*0x1ebd0 + 0x30) + 8))(*(*0x1ebd0 + 0x30),aiStackX_8), iVar1 < 0)) ||
           (aiStackX_8[0] != 0x17))) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
            return 0;
        }
        (**(*0x1ebd8 + 0xf8))(100000);
    }
    return 0x8000000000000015;
}


/* fcn.0001b274 @ 0x1b274 */

int64_t fcn.0001b274(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uchar auStackX_8 [16];
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_180h;
    int64_t var_190h;
    int64_t var_198h;
    int64_t iStack_248;
    int64_t iStack_240;
    ulong uStack_238;
    int64_t iStack_230;
    uint uStack_228;
    uchar *puStack_220;
    ushort uStack_218;
    uint uStack_214;
    ulong uStack_210;
    ushort uStack_208;
    uint *puStack_200;
    uchar auStack_1f8 [128];
    uchar auStack_178 [240];
    int64_t var_80h;
    
    iVar5 = *(arg1 + 0x170);
    iVar4 = *(arg1 + 0xd0);
    uStackX_18 = 0;
    uVar1 = fcn.000193f4(arg1,auStack_1f8,auStack_178);
    puVar2 = fcn.0001bb28(0x10);
    if (puVar2 == NULL) {
        return -0x7ffffffffffffff7;
    }
    fcn.000102c0(&iStack_248,0x10);
    fcn.000102c0(&uStack_238,0x40);
    uStack_210 = 0;
    puStack_220 = auStack_1f8;
    uStack_208 = 0;
    uStack_238 = 0x1adcc;
    uStack_214 = *(arg1 + 0x2bb4);
    uStack_218 = 3;
    *puVar2 = 4;
    puVar2[1] = 4;
    puVar2[2] = 0x20;
    puVar2[3] = 0x3c;
    iStack_230 = arg1;
    uStack_228 = uVar1;
    puStack_200 = puVar2;
    iVar3 = (**(arg2 + 8))(arg2,&uStack_238);
    (**(*0x1ebd8 + 0x48))(puVar2);
    if (iVar3 < 0) {
        return iVar3;
    }
    *(arg1 + 0xa900) = 0;
    *(arg1 + 0x4074) = 0;
    *(arg1 + 0x2b52) = 0;
    fcn.000102c0(arg1 + 0xa904,0x20);
    fcn.000102c0(arg1 + 0xa924,0x200);
    iVar3 = (**(arg2 + 0x10))(arg2);
    if (iVar3 == -0x7fffffffffffffef) {
        (**(arg2 + 0x38))(arg2);
        uStackX_20 = 4;
        iVar3 = (**(iVar4 + 8))(iVar4,3,&uStackX_20,auStackX_8);
        if ((iVar3 < 0) || (iVar3 = (**(*0x1ebd8 + 0x50))(0x80000000,8,0,0,&uStackX_18), iVar3 < 0))
        goto code_r0x0001b406;
        iVar3 = (**(*0x1ebd8 + 0x58))(uStackX_18,2);
        if (iVar3 < 0) {
            (**(*0x1ebd8 + 0x70))(uStackX_18);
            goto code_r0x0001b406;
        }
        do {
            iVar4 = (**(*0x1ebd8 + 0x78))(uStackX_18);
            if (-1 < iVar4) {
                iVar3 = (**(arg2 + 0x10))(arg2);
            }
        } while (iVar4 == -0x7ffffffffffffffa);
        (**(*0x1ebd8 + 0x70))(uStackX_18);
    }
    if (-1 < iVar3) {
        iVar4 = 0;
        iVar5 = (**arg2)(arg2,&iStack_248);
        if (-1 < iVar5) {
            iVar5 = iStack_240 + 0x1c;
            if (arg1 + 0x2b54 != iVar5) {
                iVar4 = 0x10;
                section..text(arg1 + 0x2b54,iVar5,0x10);
            }
            if (iStack_248 != 0) {
                (**(*0x1ebd8 + 0x48))(iStack_248);
            }
            if (iStack_240 != 0) {
                (**(*0x1ebd8 + 0x48))();
            }
            iVar5 = fcn.0001a4f8(arg1,iVar5,iVar4);
            if (-1 < iVar5) {
                return 0;
            }
        }
        (**(arg2 + 0x38))(arg2);
        return iVar5;
    }
    if (iVar3 == -0x7fffffffffffffea) {
        *(iVar5 + 0xe) = 1;
    }
code_r0x0001b406:
    (**(arg2 + 8))(arg2,0);
    return iVar3;
}


/* fcn.00018408 @ 0x18408 */

int64_t fcn.00018408(int64_t arg1,int64_t arg2)

{
    uchar *arg1_00;
    int64_t iVar1;
    uint uVar2;
    int64_t iVar3;
    uchar *arg2_00;
    uchar *arg1_01;
    int64_t arg4;
    uint auStack_2b8 [2];
    ulong uStack_2b0;
    ulong uStack_290;
    int64_t iStack_288;
    uint uStack_280;
    uchar *puStack_278;
    uchar auStack_268 [80];
    uchar auStack_218 [40];
    uchar auStack_1f0 [4];
    uchar auStack_1ec [20];
    uchar auStack_1d8 [128];
    uchar auStack_158 [320];
    
    iVar1 = *(arg1 + 0x170);
    arg4 = 0;
    uVar2 = fcn.00017160(arg1,auStack_1d8,auStack_158,0);
    fcn.000102c0(auStack_268,0x90);
    fcn.000102c0(auStack_2b8,0x48);
    uStack_290 = 0x17da0;
    auStack_2b8[0] = 4;
    uStack_2b0 = 0x1e1c0;
    iStack_288 = arg1;
    uStack_280 = uVar2;
    puStack_278 = auStack_1d8;
    iVar3 = (**(arg2 + 8))(arg2,auStack_2b8);
    if (iVar3 < 0) goto code_r0x0001863d;
    *(arg1 + 0xa900) = 0;
    *(arg1 + 0x2b52) = 0;
    fcn.000102c0(arg1 + 0xa904,0x20);
    fcn.000102c0(arg1 + 0xa924,0x200);
    iVar3 = (**(arg2 + 0x10))(arg2,0);
    if (iVar3 < 0) {
        if (iVar3 == -0x7fffffffffffffea) {
            *(iVar1 + 0xe) = 1;
        }
        if (iVar3 == -0x7fffffffffffffee) {
            if (*(arg1 + 0xa900) == 0) goto code_r0x0001863d;
            iVar3 = -0x7ffffffffffffff0;
        }
    }
    else {
        iVar3 = (**arg2)(arg2,auStack_268);
        if (iVar3 < 0) goto code_r0x0001863d;
        arg1_00 = arg1 + 0x2b64;
        if (arg1_00 != auStack_218) {
            section..text(arg1_00,auStack_218,4);
        }
        arg1_01 = arg1 + 0x2b74;
        if (arg1_01 != auStack_1ec) {
            section..text(arg1_01,auStack_1ec,4);
        }
        if (arg1 + 0x2b84 != auStack_1f0) {
            section..text(arg1 + 0x2b84,auStack_1f0,4);
        }
        if (iVar1 + 0x14 != arg1_00) {
            section..text(iVar1 + 0x14,arg1_00,4);
        }
        if (iVar1 + 0x24 != arg1_01) {
            section..text(iVar1 + 0x24,arg1_01,4);
        }
        arg2_00 = arg1_00;
        iVar3 = fcn.000147c0(arg1,arg1_00,arg1_01);
        if (iVar3 < 0) goto code_r0x0001863d;
        iVar3 = fcn.00017b34(arg1,arg2_00,arg1_01);
        fcn.0001c0f0(0x1e588,arg2_00,arg1_01,arg4);
        fcn.00015a70(arg1_00,arg2_00,arg1_01,arg4);
        fcn.0001c0f0(0x1e5a4,arg2_00,arg1_01,arg4);
    }
    if (-1 < iVar3) {
        fcn.000102c0(auStack_2b8,0x48);
        (**(arg2 + 8))(arg2,auStack_2b8);
        *(arg1 + 0x2b50) = 1;
        return iVar3;
    }
code_r0x0001863d:
    (**(arg2 + 0x28))(arg2);
    (**(arg2 + 8))(arg2,0);
    return iVar3;
}


/* fcn.00016798 @ 0x16798 */

ulong fcn.00016798(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint8_t *puVar6;
    uint16_t uVar7;
    uint32_t *puVar8;
    uint16_t *puVar9;
    int64_t *in_stack_00000028;
    
    iVar1 = *(arg1 + 0x170);
    puVar9 = NULL;
    puVar6 = *arg3;
    uVar5 = arg2;
    if (*(iVar1 + 3) == '\0') {
        puVar8 = (-(*(iVar1 + 10) != '\0') & 0xfffffffffffff978) + 0x3868 + arg1;
        if ((*(iVar1 + 9) == '\0') || ((*puVar8 & 0x7c0) == 0)) {
            return 0x8000000000000002;
        }
        uVar4 = ~(*(puVar8 + 0x2a) >> 1) & 1;
        *puVar6 = uVar4;
        puVar6[1] = ~*(puVar8 + 0x2a) & 1;
        puVar6[3] = *(puVar8 + 0x2a) >> 2 & 1;
        puVar6[2] = *puVar8 >> 8 & 1;
        if (uVar4 != 0) {
            if (puVar6 + 4 != puVar8 + 0x2b) {
                section..text(puVar6 + 4,puVar8 + 0x2b,4);
            }
        }
        uVar7 = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        if (puVar6[2] != 0) {
            if (puVar8[0x12] != 0) {
                puVar9 = *(puVar8 + 0x10);
                do {
                    uVar4 = puVar9[1];
                    if (*puVar9 == (uVar5 << 8 | uVar5 >> 8)) {
                        *(puVar6 + 0x14) = uVar4;
                        if (uVar4 != 0) {
                            iVar1 = uVar4 - 1;
                            puVar2 = fcn.0001baf8(iVar1 * 5,iVar1 * 0x14 + 0x2c);
                            *arg3 = puVar2;
                            if (puVar2 == NULL) {
                                return 0x8000000000000009;
                            }
                            if (puVar2 != puVar6) {
                                section..text(puVar2,puVar6,0x2c);
                            }
                            puVar6 = *arg3;
                        }
                        if (*(puVar6 + 0x14) != 0) {
                            do {
                                uVar3 = uVar7;
                                puVar2 = uVar3 * 4 + 3 + puVar9;
                                if (puVar6 + (uVar3 * 5 + 7) * 4 != puVar2) {
                                    section..text(puVar6 + (uVar3 * 5 + 7) * 4,puVar2,4);
                                }
                                uVar7 = uVar7 + 1;
                                puVar6[uVar3 * 0x14 + 0x1a] = puVar6[3] == 0;
                                *(puVar6 + uVar3 * 0x14 + 0x18) = *puVar9 << 8 | *puVar9 >> 8;
                            } while (uVar7 < *(puVar6 + 0x14));
                        }
                        goto code_r0x000169bb;
                    }
                    puVar9 = puVar9 + (uVar4 - 1) * 4 + 7;
                } while ((puVar9 - *(puVar8 + 0x10)) / 7 < puVar8[0x12]);
            }
            return 0x8000000000000007;
        }
code_r0x000169bb:
        *arg4 = puVar9;
        *in_stack_00000028 = puVar6 + 0x18;
    }
    else {
        puVar6[0x14] = 1;
        puVar6[0x15] = 0;
        puVar6[2] = 1;
        *(puVar6 + 0x18) = uVar5;
        puVar6[0x1a] = 0;
        if (puVar6 + 0x1c != arg1 + 0x2b94) {
            section..text(puVar6 + 0x1c,arg1 + 0x2b94,0x10);
        }
        *in_stack_00000028 = puVar6 + 0x18;
    }
    return 0;
}


/* fcn.0001afe0 @ 0x1afe0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001afe0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint16_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    ushort auStackX_10 [4];
    ushort auStackX_20 [4];
    int64_t iStack0000000000000028;
    int32_t var_bp_40h;
    int16_t var_58h;
    uint64_t uStack_58;
    uint64_t auStack_48 [2];
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    iVar3 = *(arg1 + 0x3f70);
    auStackX_10[0] = 0xfab;
    iVar9 = *(arg1 + 0x170);
    auStackX_20[0] = 0xfab;
    if ((arg4 == '\0') && (arg3 != 0)) {
        *arg3 = *arg3 & 0x7fff;
    }
    if (iVar3 == 0) {
        iVar3 = -0x7ffffffffffffff9;
    }
    else {
        puVar4 = fcn.0001bb28(0x404);
        if (puVar4 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = fcn.0001c284();
            *puVar4 = *puVar4 & 0xff;
            puVar7 = iVar3 + 0xc;
            puVar10 = puVar4 + 1;
            uVar5 = (iVar1 * 0x41c64e6d + 0x3039) % 0xffffffff;
            uVar8 = uVar5 >> 0x10;
            iVar6 = 4;
            uStack_58 = 4;
            *puVar4 = *puVar4 | CONCAT22(uVar5 >> 8,uVar8 << 8 | uVar8 >> 8) << 8;
            *puVar4 = *(iVar3 + 8);
            iStack0000000000000028 = 4;
            if (4 < *(iVar3 + 4)) {
                do {
                    uVar8 = *(puVar7 + 2) << 8 | *(puVar7 + 2) >> 8;
                    if (1 < (*puVar7 << 8 | *puVar7 >> 8) - 3) {
                        uVar2 = uVar8 + 4;
                        if (puVar10 != puVar7) {
                            section..text(puVar10,puVar7,uVar2);
                            iVar6 = iStack0000000000000028;
                        }
                        puVar10 = puVar10 + uVar2;
                        iVar6 = iVar6 + uVar2;
                        iStack0000000000000028 = iVar6;
                    }
                    uVar5 = uVar8 + 4;
                    uStack_58 = uStack_58 + uVar5;
                    puVar7 = puVar7 + uVar5;
                } while (uStack_58 < *(iVar3 + 4));
            }
            iVar3 = (**(arg1 + 0x138))(arg1 + 0x108,0,arg1 + 0x2b94,auStackX_20,0,arg1 + 0x2b64,auStackX_10,0,0
                                       ,&stack0x00000028,puVar4);
            if (-1 < iVar3) {
                if (*(arg1 + 0x2b53) == '\0') {
                    iVar9 = 0x2bd8;
                }
                else {
                    puVar10 = iVar9 + 0x1174;
                    if ((iStack0000000000000028 != 0) && (puVar10 != puVar4)) {
                        section..text(puVar10,puVar4,iStack0000000000000028);
                    }
                    iVar9 = 0x38e8;
                }
                auStack_48[0] = *(iVar9 + arg1);
                iVar3 = (**(*(arg1 + 0xe8) + 8))(*(arg1 + 0xe8),arg1 + 0x2a8c);
                if (-1 < iVar3) {
                    iVar3 = (**(arg1 + 0x140))(arg1 + 0x108,4,0,auStackX_10,arg1 + 0x2b94,auStackX_20,0,0,
                                               auStack_48,arg1 + 8 + iVar9);
                    (**(*(arg1 + 0xe8) + 8))(*(arg1 + 0xe8),0);
                    if (-1 < iVar3) {
                        return 0;
                    }
                }
            }
            (**(*0x1ebd8 + 0x48))(puVar4);
        }
    }
    return iVar3;
}


/* fcn.00017f74 @ 0x17f74 */

int64_t fcn.00017f74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uchar *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint32_t uVar10;
    uint32_t *arg2_01;
    uint16_t uVar11;
    ulong uVar12;
    int16_t iVar13;
    uint16_t uStackX_20;
    uchar *in_stack_00000028;
    uint16_t in_stack_00000030;
    int64_t in_stack_00000038;
    uchar auStack_268 [8];
    ushort uStack_260;
    int64_t iStack_258;
    int64_t aiStack_248 [2];
    uchar auStack_238 [4];
    int16_t iStack_234;
    uchar auStack_232 [6];
    uint uStack_22c;
    uchar *puStack_228;
    uint32_t uStack_220;
    int64_t iStack_218;
    uint32_t uStack_210;
    uint32_t *puStack_208;
    int64_t aiStack_1f8 [16];
    uchar auStack_178 [320];
    
    uVar8 = arg2;
    iVar6 = *(arg1 + 0x170);
    iVar1 = *(arg1 + 0x80);
    iStack_258 = iVar6;
    fcn.000102c0(aiStack_248,0x48);
    iVar13 = (-(in_stack_00000028 != NULL) & 0xf68) + 0x43;
    if ((arg4 == '\0') && (arg3 != 0)) {
        *arg3 = *arg3 & 0x7fff;
    }
    uVar2 = fcn.00017160(arg1,aiStack_1f8,auStack_178,1);
    if (*(arg1 + 0x2b53) != '\0') {
        puVar4 = fcn.0001bb28(9);
        aiStack_1f8[uVar2] = puVar4;
        if (puVar4 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *puVar4 = 0x2b;
        *(aiStack_1f8[uVar2] + 1) = 7;
        iVar5 = aiStack_1f8[uVar2];
        *(iVar5 + 2) = 0x447;
        *(iVar5 + 4) = uVar8 << 8 | uVar8 >> 8;
        *(*(iVar5 + 3) + 4 + iVar5) = 0xff;
        if (arg3 != 0) {
            *(iVar5 + 6) = *arg3 << 8 | *arg3 >> 8;
        }
        uVar2 = uVar2 + 1;
    }
    uVar12 = 0;
    iVar5 = (**(iVar1 + 0x30))(iVar1,arg1 + 0x3f78,0,0,uVar2,aiStack_1f8,&iStack_218);
    if (*(arg1 + 0x2b53) != '\0') {
        (**(*0x1ebd8 + 0x48))();
    }
    if (-1 < iVar5) {
        if (*(iVar6 + 7) != '\0') {
            iVar6 = fcn.0001ca28(iStack_218 + 0x24);
            if (iVar6 < 0) {
                fcn.000102c0(iStack_218 + 0x24,0x10);
            }
            *(iStack_218 + 10) = 0x10;
        }
        iVar3 = fcn.0001c284();
        puVar4 = arg1 + 0x2b64;
        uVar7 = (iVar3 * 0x41c64e6d + 0x3039) % 0xffffffff;
        uVar9 = uVar7;
        uVar11 = uVar7 >> 0x10;
        *(iStack_218 + 0xc) = CONCAT22(uVar9 << 8 | uVar9 >> 8,uVar11 << 8 | uVar11 >> 8);
        *(iStack_218 + 0x12) = (~-(in_stack_00000028 != NULL) & 0x8000) >> 8;
        if (iStack_218 + 0x14 != puVar4) {
            uVar12 = 0;
            section..text(iStack_218 + 0x14,puVar4,4);
        }
        iStack_234 = iVar13;
        if (in_stack_00000028 == NULL) {
            fcn.00010300(auStack_238,4,CONCAT71(uVar12 >> 8,0xff));
        }
        else if (auStack_238 != in_stack_00000028) {
            section..text(auStack_238,in_stack_00000028,4);
        }
        if (auStack_232 != arg1 + 0x2b84) {
            section..text(auStack_232,arg1 + 0x2b84,4);
        }
        if (in_stack_00000028 != NULL) {
            uStack_22c = 1;
            uStack_260 = 0xfab;
            puStack_228 = auStack_268;
            if (auStack_268 != puVar4) {
                section..text(auStack_268,puVar4,4);
            }
            if (puStack_228 + 4 != arg1 + 0x2b74) {
                section..text(puStack_228 + 4,arg1 + 0x2b74,4);
            }
        }
        uVar11 = 1;
        do {
            uStack_220 = uVar11;
            *(iStack_218 + 0x10) = uVar11 - 1;
            iVar5 = (**(iVar1 + 0x38))(iVar1,aiStack_248);
            if (aiStack_248[0] != -0x7fffffffffffffee) break;
            uVar11 = uVar11 + 1;
        } while (uVar11 < 5);
        if (4 < uVar11) {
            iVar5 = -0x7fffffffffffffee;
        }
        if (-1 < iVar5) {
            uVar2 = 0;
            uStackX_20 = 0;
            arg2_01 = puStack_208;
            if (uStack_210 != 0) {
                uVar10 = uStack_210;
                do {
                    iVar13 = uVar2;
                    if (arg2_01[1] < 0x5c1) {
                        uVar11 = 0;
                        if (in_stack_00000030 != 0) {
                            while( true ) {
                                uVar7 = uVar11;
                                if (*(in_stack_00000038 + 2 + uVar7 * 0x14) != '\0') break;
                                if (*(in_stack_00000038 + uVar7 * 0x14) == uVar8) {
                                    arg2_00 = in_stack_00000038 + (uVar7 * 5 + 1) * 4;
                                    if ((arg2_01 + 7 == arg2_00) ||
                                       (iVar6 = fcn.000102e0(arg2_01 + 7,arg2_00,4), iVar6 == 0)) break;
                                }
                                uVar11 = uVar11 + 1;
                                if (in_stack_00000030 <= uVar11) break;
                            }
                            uVar2 = uStackX_20;
                            uVar10 = uStack_210;
                        }
                        iVar13 = uVar2;
                        if ((in_stack_00000030 != uVar11) || (in_stack_00000030 == 0)) break;
                    }
                    uStackX_20 = iVar13 + 1;
                    uVar2 = uStackX_20;
                    arg2_01 = arg2_01 + *arg2_01;
                } while (uVar2 < uVar10);
                uStack_210 = uVar10;
            }
            iVar6 = iStack_258;
            if (uVar2 < uStack_210) {
                if (*(arg1 + 0x2b53) == '\0') {
                    iVar5 = fcn.00017410(arg1 + 0x2bd8,arg2_01);
                }
                else {
                    iVar5 = fcn.00017410(arg1 + 0x38e8,arg2_01);
                    if (-1 < iVar5) {
                        if ((*(iStack_218 + 4) != 0) && (iVar6 + 0x1174 != iStack_218 + 8)) {
                            section..text(iVar6 + 0x1174,iStack_218 + 8,*(iStack_218 + 4));
                        }
                    }
                }
            }
            else {
                iVar5 = -0x7ffffffffffffff2;
            }
        }
        if (puStack_208 != NULL) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iStack_218 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
    }
    return iVar5;
}


/* fcn.00019c9c @ 0x19c9c */

ulong fcn.00019c9c(int64_t arg1)

{
    int64_t *arg1_00;
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint16_t *puVar5;
    uint16_t *puVar6;
    uint16_t *puVar7;
    uint32_t uVar8;
    uint auStackX_8 [2];
    
    arg1_00 = arg1 + 0x5d0;
    fcn.000102c0(arg1_00,0x28);
    puVar5 = arg1 + 0xc;
    puVar7 = NULL;
    puVar6 = puVar7;
    if (*(arg1 + 4) != 4) {
        do {
            uVar2 = *puVar5 << 8 | *puVar5 >> 8;
            if (uVar2 == 3) {
                *arg1_00 = puVar5;
            }
            else if (uVar2 == 0x3b) {
                *(arg1 + 0x5d8) = puVar5;
            }
            else if (uVar2 == 0x3c) {
                *(arg1 + 0x5e0) = puVar5;
            }
            else if (uVar2 == 0x10) {
                *(arg1 + 0x5e8) = puVar5;
            }
            else if (uVar2 == 0x17) {
                *(arg1 + 0x5f0) = puVar5;
            }
            uVar8 = puVar6 + (puVar5[1] << 8 | puVar5[1] >> 8) + 4;
            puVar6 = uVar8;
            puVar5 = arg1 + 0xc + puVar6;
        } while (uVar8 < *(arg1 + 4) - 4U);
    }
    iVar4 = *arg1_00;
    uVar1 = 1;
    if (iVar4 != 0) {
        uVar2 = *(iVar4 + 2) << 8 | *(iVar4 + 2) >> 8;
        puVar5 = iVar4 + 0x10;
        puVar6 = puVar7;
        if (uVar2 != 0) {
            do {
                if ((*puVar5 << 8 | *puVar5 >> 8) == 0xd) goto code_r0x00019d89;
                uVar8 = puVar6 + 4 + (puVar5[1] << 8 | puVar5[1] >> 8);
                puVar6 = uVar8;
                puVar5 = puVar6 + iVar4 + 0x10;
            } while (uVar8 < uVar2);
        }
        puVar5 = puVar7;
code_r0x00019d89:
        if ((puVar5 == NULL) || (puVar5[2] == '\0')) {
            uVar1 = 0;
        }
    }
    iVar4 = *(arg1 + 0x5e8);
    auStackX_8[0] = 0x57010000;
    if ((iVar4 != 0) && (0xc < (*(iVar4 + 2) << 8 | *(iVar4 + 2) >> 8))) {
        if (iVar4 + 4 != auStackX_8) {
            iVar3 = fcn.000102e0(iVar4 + 4,auStackX_8,4);
            if (iVar3 != 0) goto code_r0x00019e03;
        }
        if (iVar4 + 10 != "PXEClient:Arch:xxxxx:UNDI:003000") {
            iVar4 = fcn.000102e0(iVar4 + 10,0x1e560,9);
            puVar7 = NULL;
            if (iVar4 != 0) goto code_r0x00019e03;
        }
        puVar7 = (-uVar1 & 3) + 3;
    }
code_r0x00019e03:
    *(arg1 + 0x5c8) = puVar7;
    return 0;
}


/* fcn.00017460 @ 0x17460 */

ulong fcn.00017460(int64_t arg1)

{
    uint32_t *arg1_00;
    char cVar1;
    bool bVar2;
    bool bVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int iVar10;
    ulong in_R8;
    uint64_t uVar11;
    char *pcVar12;
    
    iVar6 = arg1 + 0x5d0;
    bVar2 = false;
    bVar3 = false;
    fcn.000102c0(iVar6,0x38);
    arg1_00 = arg1 + 0x608;
    fcn.000102c0(arg1_00,0x80);
    uVar11 = 0;
    iVar7 = arg1 + 0xf8;
    pcVar12 = "\r+456<C";
    iVar10 = 7;
    do {
        in_R8 = CONCAT71(in_R8 >> 8,pcVar12[uVar11]);
        uVar4 = fcn.00016f2c(iVar7,*(arg1 + 4) - 0xf0,in_R8);
        *(iVar6 + uVar11 * 8) = uVar4;
        uVar11 = uVar11 + 1;
    } while (uVar11 < 7);
    iVar7 = *(arg1 + 0x5e0);
    if (iVar7 != 0) {
        bVar3 = false;
        if ((*(iVar7 + 2) & 1) != 0) {
            bVar3 = true;
            uVar11 = 0;
            do {
                if (*(iVar6 + uVar11 * 8) == 0) {
                    uVar9 = 0;
                    pcVar5 = arg1 + 0x74;
                    do {
                        cVar1 = *pcVar5;
                        if (cVar1 == -1) break;
                        if (cVar1 == pcVar12[uVar11]) goto code_r0x00017537;
                        if (cVar1 == '\0') {
                            uVar8 = uVar9 + 1;
                        }
                        else {
                            uVar8 = uVar9 + 2 + pcVar5[1];
                        }
                        uVar9 = uVar8;
                        pcVar5 = arg1 + 0x74 + uVar9;
                    } while (uVar8 < 0x80);
                    pcVar5 = NULL;
code_r0x00017537:
                    *(iVar6 + uVar11 * 8) = pcVar5;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < 7);
        }
        if ((*(iVar7 + 2) & 2) != 0) {
            uVar11 = 0;
            do {
                if (*(iVar6 + uVar11 * 8) == 0) {
                    uVar9 = 0;
                    pcVar5 = arg1 + 0x34;
                    do {
                        cVar1 = *pcVar5;
                        if (cVar1 == -1) break;
                        if (cVar1 == pcVar12[uVar11]) goto code_r0x00017589;
                        if (cVar1 == '\0') {
                            uVar8 = uVar9 + 1;
                        }
                        else {
                            uVar8 = uVar9 + 2 + pcVar5[1];
                        }
                        uVar9 = uVar8;
                        pcVar5 = arg1 + 0x34 + uVar9;
                    } while (uVar8 < 0x40);
                    pcVar5 = NULL;
code_r0x00017589:
                    *(iVar6 + uVar11 * 8) = pcVar5;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < 7);
        }
    }
    iVar6 = *(arg1 + 0x5f8);
    cVar1 = *(arg1 + 0x18);
    if (((iVar6 != 0) && (8 < *(iVar6 + 1))) &&
       ((iVar6 + 2 == "PXEClient:Arch:xxxxx:UNDI:003000" || (iVar6 = fcn.000102e0(iVar6 + 2,0x1e560,9), iVar6 == 0)))
       ) {
        bVar2 = true;
    }
    if ((bVar2) && (*(arg1 + 0x5d8) != 0)) {
        fcn.00016f64(*(arg1 + 0x5d8),arg1_00);
    }
    iVar6 = *(arg1 + 0x600);
    if (iVar6 == 0) {
        if ((!bVar3) && (*(arg1 + 0x74) != '\0')) {
            *(arg1 + 0x600) = arg1 + 0x72;
        }
    }
    else if (*(*(iVar6 + 1) + 1 + iVar6) != '\0') {
        *(*(iVar6 + 1) + 2 + iVar6) = 0;
    }
    if ((*(arg1 + 0x5e8) == 0) || (*(*(arg1 + 0x5e8) + 2) == '\0')) {
        if (*(arg1 + 0x600) == 0) {
            return 0x8000000000000007;
        }
    }
    else if ((*arg1_00 & 0x7c0) == 0) {
        if ((*arg1_00 & 0x3e) == 0x3e) {
            return 0x8000000000000007;
        }
        if (bVar2) {
            iVar10 = (-(cVar1 != '\0') & 0xfffffffd) + 6;
        }
        else {
            iVar10 = 0;
        }
    }
    else {
        iVar10 = (-(cVar1 != '\0') & 0xfffffffd) + 4;
    }
    *(arg1 + 0x5c8) = iVar10;
    return 0;
}


/* fcn.00018c40 @ 0x18c40 */

int64_t fcn.00018c40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *in_stack_00000028;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    char in_stack_00000040;
    uchar auStack_c8 [16];
    uchar auStack_b8 [16];
    uchar *apuStack_a8 [4];
    uchar auStack_88 [8];
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint32_t uStack_60;
    uchar **ppuStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    
    iVar1 = *(arg1 + 0xe0);
    *(arg2 + 0x22) = 0x45;
    iVar2 = (**(iVar1 + 8))(iVar1);
    if (-1 < iVar2) {
        if (arg4 != 0) {
            apuStack_a8[0] = *0x1e5e8;
            apuStack_a8[1] = auStack_c8;
            fcn.00015b70(*arg4,auStack_c8,10);
        }
        uVar3 = arg4 != 0;
        if (in_stack_00000028 != NULL) {
            iVar2 = *in_stack_00000028;
            apuStack_a8[uVar3 * 2] = *0x1e608;
            apuStack_a8[uVar3 * 2 + 1] = auStack_b8;
            fcn.00015b70(iVar2,auStack_b8,10);
            uVar3 = uVar3 + 1;
        }
        uStack_80 = 0;
        ppuStack_58 = apuStack_a8;
        uStack_78 = 0;
        uStack_68 = 0;
        if (in_stack_00000040 == '\0') {
            uStack_50 = *in_stack_00000038;
            uStack_48 = in_stack_00000030;
        }
        else {
            uStack_50 = 0;
            uStack_48 = 0;
        }
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_38 = 0x18670;
        iStack_70 = arg3;
        uStack_60 = uVar3;
        iStack_40 = arg1;
        iVar2 = (**(iVar1 + 0x30))(iVar1,auStack_88);
        *in_stack_00000038 = uStack_50;
        (**(iVar1 + 8))(iVar1,0);
    }
    return iVar2;
}


/* fcn.000192ac @ 0x192ac */

int64_t fcn.000192ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *in_stack_00000028;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    char in_stack_00000040;
    uchar auStack_c8 [16];
    uchar auStack_b8 [16];
    uchar *apuStack_a8 [4];
    uchar auStack_88 [8];
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint32_t uStack_60;
    uchar **ppuStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    
    iVar1 = *(arg1 + 0x88);
    *(arg2 + 0x14) = 0x45;
    iVar2 = (**(iVar1 + 8))(iVar1);
    if (-1 < iVar2) {
        if (arg4 != 0) {
            apuStack_a8[0] = *0x1e5e8;
            apuStack_a8[1] = auStack_c8;
            fcn.00015b70(*arg4,auStack_c8,10);
        }
        uVar3 = arg4 != 0;
        if (in_stack_00000028 != NULL) {
            iVar2 = *in_stack_00000028;
            apuStack_a8[uVar3 * 2] = *0x1e608;
            apuStack_a8[uVar3 * 2 + 1] = auStack_b8;
            fcn.00015b70(iVar2,auStack_b8,10);
            uVar3 = uVar3 + 1;
        }
        uStack_80 = 0;
        ppuStack_58 = apuStack_a8;
        uStack_78 = 0;
        uStack_68 = 0;
        if (in_stack_00000040 == '\0') {
            uStack_50 = *in_stack_00000038;
            uStack_48 = in_stack_00000030;
        }
        else {
            uStack_50 = 0;
            uStack_48 = 0;
        }
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_38 = 0x18670;
        iStack_70 = arg3;
        uStack_60 = uVar3;
        iStack_40 = arg1;
        iVar2 = (**(iVar1 + 0x30))(iVar1,auStack_88);
        *in_stack_00000038 = uStack_50;
        (**(iVar1 + 8))(iVar1,0);
    }
    return iVar2;
}


/* fcn.00018b44 @ 0x18b44 */

int64_t fcn.00018b44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000038;
    ulong uStack_108;
    uchar *puStack_100;
    uchar auStack_f8 [8];
    ulong uStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    ulong uStack_d8;
    uint32_t uStack_d0;
    ulong *puStack_c8;
    ulong uStack_c0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uchar auStack_88 [128];
    
    iVar1 = *(arg1 + 0xe0);
    *(arg2 + 0x22) = 0x45;
    iVar2 = (**(iVar1 + 8))(iVar1);
    if (-1 < iVar2) {
        if (in_stack_00000028 != NULL) {
            uStack_108 = *0x1e5e8;
            puStack_100 = auStack_88;
            fcn.00015b70(*in_stack_00000028,auStack_88,0x80);
        }
        uStack_d0 = in_stack_00000028 != NULL;
        uStack_f0 = 0;
        puStack_c8 = &uStack_108;
        uStack_e8 = 0;
        uStack_d8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_c0 = *in_stack_00000038;
        uStack_a8 = 0x18670;
        iStack_e0 = arg3;
        iVar2 = (**(iVar1 + 0x28))(iVar1,auStack_f8);
        *in_stack_00000038 = uStack_c0;
        (**(iVar1 + 8))(iVar1,0);
    }
    return iVar2;
}


/* fcn.00015b70 @ 0x15b70 */

void fcn.00015b70(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char *pcVar2;
    uint64_t uVar3;
    char *pcVar4;
    int64_t iVar6;
    int64_t iVar5;
    char acStack_49 [64];
    uchar uStack_9;
    
    uStack_9 = 0;
    iVar5 = 0x3f;
    do {
        iVar6 = iVar5;
        iVar5 = iVar6 + -1;
        uVar3 = arg1 / 10;
        acStack_49[iVar6] = arg1 + uVar3 * -10 + '0';
        arg1 = uVar3;
    } while (uVar3 != 0);
    pcVar2 = acStack_49 + iVar6;
    if ((((arg2 == 0) || (pcVar2 == NULL)) || (999999 < arg3 - 1U)) ||
       (pcVar4 = arg2, uVar3 = fcn.0001b69c(pcVar2,arg3), arg3 <= uVar3)) goto code_r0x00015c2b;
    if (arg2 < pcVar2) {
code_r0x00015bff:
        if (pcVar2 < arg2 + arg3) goto code_r0x00015c2b;
    }
    else {
        if (arg2 < pcVar2 + uVar3 + 1) goto code_r0x00015c2b;
        if (arg2 <= pcVar2) goto code_r0x00015bff;
    }
    cVar1 = *pcVar2;
    if (cVar1 != '\0') {
        do {
            *pcVar4 = cVar1;
            pcVar4 = pcVar4 + 1;
            cVar1 = (acStack_49 + (iVar5 - arg2) + 1)[pcVar4];
        } while (cVar1 != '\0');
    }
    *pcVar4 = '\0';
code_r0x00015c2b:
    iVar5 = 0;
    cVar1 = *arg2;
    while (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
        cVar1 = *(arg2 + iVar5);
    }
    return;
}


/* fcn.000191b0 @ 0x191b0 */

int64_t fcn.000191b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000038;
    ulong uStack_108;
    uchar *puStack_100;
    uchar auStack_f8 [8];
    ulong uStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    ulong uStack_d8;
    uint32_t uStack_d0;
    ulong *puStack_c8;
    ulong uStack_c0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uchar auStack_88 [128];
    
    iVar1 = *(arg1 + 0x88);
    *(arg2 + 0x14) = 0x45;
    iVar2 = (**(iVar1 + 8))(iVar1);
    if (-1 < iVar2) {
        if (in_stack_00000028 != NULL) {
            uStack_108 = *0x1e5e8;
            puStack_100 = auStack_88;
            fcn.00015b70(*in_stack_00000028,auStack_88,0x80);
        }
        uStack_d0 = in_stack_00000028 != NULL;
        uStack_f0 = 0;
        puStack_c8 = &uStack_108;
        uStack_e8 = 0;
        uStack_d8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_c0 = *in_stack_00000038;
        uStack_a8 = 0x18670;
        iStack_e0 = arg3;
        iVar2 = (**(iVar1 + 0x28))(iVar1,auStack_f8);
        *in_stack_00000038 = uStack_c0;
        (**(iVar1 + 8))(iVar1,0);
    }
    return iVar2;
}


/* fcn.000189fc @ 0x189fc */

int64_t fcn.000189fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *in_stack_00000028;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    char in_stack_00000040;
    uchar auStack_c8 [16];
    uchar auStack_b8 [16];
    uchar *apuStack_a8 [4];
    uchar auStack_88 [8];
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint32_t uStack_60;
    uchar **ppuStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    
    iVar1 = *(arg1 + 0xe0);
    *(arg2 + 0x22) = 0x45;
    iVar2 = (**(iVar1 + 8))(iVar1);
    if (-1 < iVar2) {
        if (arg4 != 0) {
            apuStack_a8[0] = *0x1e5e8;
            apuStack_a8[1] = auStack_c8;
            fcn.00015b70(*arg4,auStack_c8,10);
        }
        uVar3 = arg4 != 0;
        if (in_stack_00000028 != NULL) {
            iVar2 = *in_stack_00000028;
            apuStack_a8[uVar3 * 2] = *0x1e608;
            apuStack_a8[uVar3 * 2 + 1] = auStack_b8;
            fcn.00015b70(iVar2,auStack_b8,10);
            uVar3 = uVar3 + 1;
        }
        uStack_80 = 0;
        ppuStack_58 = apuStack_a8;
        uStack_78 = 0;
        uStack_68 = 0;
        if (in_stack_00000040 == '\0') {
            uStack_50 = *in_stack_00000038;
            uStack_48 = in_stack_00000030;
        }
        else {
            uStack_50 = 0;
            uStack_48 = 0;
        }
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_38 = 0x18670;
        iStack_70 = arg3;
        uStack_60 = uVar3;
        iStack_40 = arg1;
        iVar2 = (**(iVar1 + 0x20))(iVar1,auStack_88);
        *in_stack_00000038 = uStack_50;
        (**(iVar1 + 8))(iVar1,0);
    }
    return iVar2;
}


/* fcn.00019068 @ 0x19068 */

int64_t fcn.00019068(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *in_stack_00000028;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    char in_stack_00000040;
    uchar auStack_c8 [16];
    uchar auStack_b8 [16];
    uchar *apuStack_a8 [4];
    uchar auStack_88 [8];
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint32_t uStack_60;
    uchar **ppuStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    
    iVar1 = *(arg1 + 0x88);
    *(arg2 + 0x14) = 0x45;
    iVar2 = (**(iVar1 + 8))(iVar1);
    if (-1 < iVar2) {
        if (arg4 != 0) {
            apuStack_a8[0] = *0x1e5e8;
            apuStack_a8[1] = auStack_c8;
            fcn.00015b70(*arg4,auStack_c8,10);
        }
        uVar3 = arg4 != 0;
        if (in_stack_00000028 != NULL) {
            iVar2 = *in_stack_00000028;
            apuStack_a8[uVar3 * 2] = *0x1e608;
            apuStack_a8[uVar3 * 2 + 1] = auStack_b8;
            fcn.00015b70(iVar2,auStack_b8,10);
            uVar3 = uVar3 + 1;
        }
        uStack_80 = 0;
        ppuStack_58 = apuStack_a8;
        uStack_78 = 0;
        uStack_68 = 0;
        if (in_stack_00000040 == '\0') {
            uStack_50 = *in_stack_00000038;
            uStack_48 = in_stack_00000030;
        }
        else {
            uStack_50 = 0;
            uStack_48 = 0;
        }
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_38 = 0x18670;
        iStack_70 = arg3;
        uStack_60 = uVar3;
        iStack_40 = arg1;
        iVar2 = (**(iVar1 + 0x20))(iVar1,auStack_88);
        *in_stack_00000038 = uStack_50;
        (**(iVar1 + 8))(iVar1,0);
    }
    return iVar2;
}


/* fcn.0001871c @ 0x1871c */

int64_t fcn.0001871c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint auStackX_8 [2];
    int64_t iStackX_10;
    int64_t *in_stack_00000028;
    uint32_t in_stack_00000030;
    uint in_stack_00000034;
    int32_t var_57h;
    int64_t var_5fh;
    int64_t iStack_f8;
    char *apcStack_f0 [7];
    uchar auStack_b8 [71];
    int64_t var_69h;
    
    puVar3 = CONCAT44(in_stack_00000034,in_stack_00000030);
    iVar11 = 0;
    iStackX_10 = 0;
    iVar8 = 0x80;
    iStack_f8 = 0;
    auStackX_8[0] = 0;
    *puVar3 = 0;
    iVar2 = *(arg1 + 0xe0);
    in_stack_00000030 = 1;
    *(arg2 + 0x22) = 0x45;
    iVar4 = (**(iVar2 + 8))();
    if (iVar4 < 0) {
        return iVar4;
    }
    apcStack_f0[0] = "tsize";
    fcn.00015b70(0,auStack_b8,0x80);
    apcStack_f0[1] = auStack_b8;
    if (arg4 != 0) {
        apcStack_f0[in_stack_00000030 * 2] = *0x1e5e8;
        pcVar6 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        cVar1 = *pcVar6;
        iVar4 = iVar11;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = pcVar6[iVar4];
        }
        apcStack_f0[in_stack_00000030 * 2 + 1] = pcVar6 + iVar4 + 1;
        cVar1 = *apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        iVar8 = iVar11;
        while (cVar1 != '\0') {
            iVar8 = iVar8 + 1;
            cVar1 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1][iVar8];
        }
        iVar8 = 0x7f - iVar8;
        fcn.00015b70(*arg4,pcVar6 + iVar4 + 1,iVar8);
        in_stack_00000030 = in_stack_00000030 + 1;
    }
    if (in_stack_00000028 != NULL) {
        apcStack_f0[in_stack_00000030 * 2] = *0x1e608;
        pcVar6 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        cVar1 = *pcVar6;
        iVar4 = iVar11;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = pcVar6[iVar4];
        }
        apcStack_f0[in_stack_00000030 * 2 + 1] = pcVar6 + iVar4 + 1;
        cVar1 = *apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        iVar5 = iVar11;
        while (cVar1 != '\0') {
            iVar5 = iVar5 + 1;
            cVar1 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1][iVar5];
        }
        fcn.00015b70(*in_stack_00000028,pcVar6 + iVar4 + 1,(iVar8 - iVar5) + -1);
        in_stack_00000030 = in_stack_00000030 + 1;
    }
    uVar7 = 0;
    iVar8 = (**(iVar2 + 0x10))(iVar2,0,arg3,0,in_stack_00000030,apcStack_f0,auStackX_8,&iStackX_10);
    iVar4 = iStackX_10;
    if (iVar8 < 0) {
        if (iVar8 == -0x7fffffffffffffe9) {
            *(arg1 + 0x1a7) = 1;
            *(arg1 + 0x29d0) = *(iStackX_10 + 2);
            fcn.0001b6c8(arg1 + 0x29d1,uVar7,iStackX_10 + 4);
            *(arg1 + 0x2a4f) = 0;
            goto code_r0x000189c3;
        }
    }
    else {
        in_stack_00000030 = 0;
        iVar8 = (**(iVar2 + 0x18))(iVar2,auStackX_8[0],iStackX_10,&stack0x00000030,&iStack_f8);
        if (-1 < iVar8) {
            iVar8 = -0x7ffffffffffffff2;
            for (; in_stack_00000030 != 0; in_stack_00000030 = in_stack_00000030 - 1) {
                pcVar9 = "tsize";
                pcVar6 = *(iStack_f8 + (in_stack_00000030 - 1) * 0x10);
                for (uVar10 = 5; (((*pcVar6 != '\0' && (*pcVar9 != '\0')) && (*pcVar6 == *pcVar9)) && (1 < uVar10));
                    uVar10 = uVar10 - 1) {
                    pcVar6 = pcVar6 + 1;
                    pcVar9 = pcVar9 + 1;
                }
                if (*pcVar6 == *pcVar9) {
                    uVar7 = fcn.0001b5e4(*(iStack_f8 + 8 + (in_stack_00000030 - 1) * 0x10));
                    *puVar3 = uVar7;
                    iVar8 = iVar11;
                }
            }
            (**(*0x1ebd8 + 0x48))(iStack_f8);
        }
    }
    iVar4 = iStackX_10;
code_r0x000189c3:
    if (iVar4 != 0) {
        (**(*0x1ebd8 + 0x48))(iVar4);
    }
    (**(iVar2 + 8))(iVar2,0);
    return iVar8;
}


/* fcn.00018d88 @ 0x18d88 */

int64_t fcn.00018d88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint auStackX_8 [2];
    int64_t iStackX_10;
    int64_t *in_stack_00000028;
    uint32_t in_stack_00000030;
    uint in_stack_00000034;
    int32_t var_57h;
    int64_t var_5fh;
    int64_t iStack_f8;
    char *apcStack_f0 [7];
    uchar auStack_b8 [71];
    int64_t var_69h;
    
    puVar3 = CONCAT44(in_stack_00000034,in_stack_00000030);
    iVar11 = 0;
    iStackX_10 = 0;
    iVar8 = 0x80;
    iStack_f8 = 0;
    auStackX_8[0] = 0;
    *puVar3 = 0;
    iVar2 = *(arg1 + 0x88);
    in_stack_00000030 = 1;
    *(arg2 + 0x14) = 0x45;
    iVar4 = (**(iVar2 + 8))();
    if (iVar4 < 0) {
        return iVar4;
    }
    apcStack_f0[0] = "tsize";
    fcn.00015b70(0,auStack_b8,0x80);
    apcStack_f0[1] = auStack_b8;
    if (arg4 != 0) {
        apcStack_f0[in_stack_00000030 * 2] = *0x1e5e8;
        pcVar6 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        cVar1 = *pcVar6;
        iVar4 = iVar11;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = pcVar6[iVar4];
        }
        apcStack_f0[in_stack_00000030 * 2 + 1] = pcVar6 + iVar4 + 1;
        cVar1 = *apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        iVar8 = iVar11;
        while (cVar1 != '\0') {
            iVar8 = iVar8 + 1;
            cVar1 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1][iVar8];
        }
        iVar8 = 0x7f - iVar8;
        fcn.00015b70(*arg4,pcVar6 + iVar4 + 1,iVar8);
        in_stack_00000030 = in_stack_00000030 + 1;
    }
    if (in_stack_00000028 != NULL) {
        apcStack_f0[in_stack_00000030 * 2] = *0x1e608;
        pcVar6 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        cVar1 = *pcVar6;
        iVar4 = iVar11;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = pcVar6[iVar4];
        }
        apcStack_f0[in_stack_00000030 * 2 + 1] = pcVar6 + iVar4 + 1;
        cVar1 = *apcStack_f0[(in_stack_00000030 - 1) * 2 + 1];
        iVar5 = iVar11;
        while (cVar1 != '\0') {
            iVar5 = iVar5 + 1;
            cVar1 = apcStack_f0[(in_stack_00000030 - 1) * 2 + 1][iVar5];
        }
        fcn.00015b70(*in_stack_00000028,pcVar6 + iVar4 + 1,(iVar8 - iVar5) + -1);
        in_stack_00000030 = in_stack_00000030 + 1;
    }
    uVar7 = 0;
    iVar8 = (**(iVar2 + 0x10))(iVar2,0,arg3,0,in_stack_00000030,apcStack_f0,auStackX_8,&iStackX_10);
    iVar4 = iStackX_10;
    if (iVar8 < 0) {
        if (iVar8 == -0x7fffffffffffffe9) {
            *(arg1 + 0x1a7) = 1;
            *(arg1 + 0x29d0) = *(iStackX_10 + 2);
            fcn.0001b6c8(arg1 + 0x29d1,uVar7,iStackX_10 + 4);
            *(arg1 + 0x2a4f) = 0;
            goto code_r0x0001902f;
        }
    }
    else {
        in_stack_00000030 = 0;
        iVar8 = (**(iVar2 + 0x18))(iVar2,auStackX_8[0],iStackX_10,&stack0x00000030,&iStack_f8);
        if (-1 < iVar8) {
            iVar8 = -0x7ffffffffffffff2;
            for (; in_stack_00000030 != 0; in_stack_00000030 = in_stack_00000030 - 1) {
                pcVar9 = "tsize";
                pcVar6 = *(iStack_f8 + (in_stack_00000030 - 1) * 0x10);
                for (uVar10 = 5; (((*pcVar6 != '\0' && (*pcVar9 != '\0')) && (*pcVar6 == *pcVar9)) && (1 < uVar10));
                    uVar10 = uVar10 - 1) {
                    pcVar6 = pcVar6 + 1;
                    pcVar9 = pcVar9 + 1;
                }
                if (*pcVar6 == *pcVar9) {
                    uVar7 = fcn.0001b5e4(*(iStack_f8 + 8 + (in_stack_00000030 - 1) * 0x10));
                    *puVar3 = uVar7;
                    iVar8 = iVar11;
                }
            }
            (**(*0x1ebd8 + 0x48))(iStack_f8);
        }
    }
    iVar4 = iStackX_10;
code_r0x0001902f:
    if (iVar4 != 0) {
        (**(*0x1ebd8 + 0x48))(iVar4);
    }
    (**(iVar2 + 8))(iVar2,0);
    return iVar8;
}


/* fcn.0001c120 @ 0x1c120 */

uint64_t fcn.0001c120(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar1 = arg1 - 1;
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffe) {
        uVar2 = 0;
        do {
            if (arg2 == *(uVar2 * 4 + 0x1e630)) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x21);
        if (uVar2 < 0x1f) {
            uVar1 = ~arg2 & arg1;
            uVar2 = uVar1;
            if ((uVar1 == ~arg2) || (uVar1 == 0)) goto code_r0x0001c157;
        }
        return CONCAT71(uVar2 >> 8,1);
    }
code_r0x0001c157:
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00014ff4 @ 0x14ff4 */

int64_t fcn.00014ff4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar auStack_48 [2];
    uchar uStack_46;
    uchar uStack_44;
    uint uStack_40;
    uint uStack_3c;
    uchar auStack_38 [16];
    ushort uStack_28;
    
    fcn.000102c0(auStack_48,0x34);
    uStack_44 = 0x40;
    uStack_40 = 50000;
    uStack_3c = 50000;
    uStack_28 = *arg3;
    uStack_46 = 1;
    if (auStack_38 != arg2) {
        section..text(auStack_38,arg2,0x10);
    }
    (**(arg1 + 8))(arg1,0);
    iVar1 = (**(arg1 + 8))(arg1,auStack_48);
    if ((-1 < iVar1) && (*arg3 == 0)) {
        (**arg1)(arg1,auStack_48,0,0,0);
        *arg3 = uStack_28;
    }
    return iVar1;
}


/* fcn.00014eb0 @ 0x14eb0 */

//WARNING: Variable defined which should be unmapped: var_1fh

int64_t fcn.00014eb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int8_t arg_58h,
                    int8_t arg_60h,int8_t arg_68h)

{
    int64_t iVar1;
    int64_t iVar2;
    int16_t *in_stack_00000028;
    uchar in_stack_00000040;
    uchar auStack_58 [3];
    uchar uStack_55;
    uchar uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uchar auStack_47 [4];
    uchar auStack_43 [5];
    int16_t iStack_3e;
    int64_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_1fh;
    
    fcn.000102c0(auStack_58,0x24);
    uStack_55 = 1;
    uStack_4c = 50000;
    uStack_50 = 50000;
    uStack_54 = in_stack_00000040;
    if (auStack_47 != arg2) {
        section..text(auStack_47,arg2,4);
    }
    if (auStack_43 != arg3) {
        section..text(auStack_43,arg3,4);
    }
    iStack_3e = *in_stack_00000028;
    (**(arg1 + 8))(arg1,0);
    iVar1 = (**(arg1 + 8))(arg1,auStack_58);
    if (iVar1 < 0) {
        return iVar1;
    }
    if ((arg4 != 0x1ec10) && (iVar2 = fcn.000102e0(arg4,0x1ec10,4), iVar2 != 0)) {
        iVar1 = (**(arg1 + 0x18))(arg1,0,0x1ec10,0x1ec10,arg4);
        if (-1 < iVar1) goto code_r0x00014faf;
        (**(arg1 + 8))(arg1,0);
    }
    if (iVar1 < 0) {
        return iVar1;
    }
code_r0x00014faf:
    if (*in_stack_00000028 == 0) {
        (**arg1)(arg1,auStack_58,0,0,0);
        *in_stack_00000028 = iStack_3e;
    }
    return iVar1;
}


/* fcn.00015258 @ 0x15258 */

int64_t fcn.00015258(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int iVar4;
    char acStackX_20 [8];
    int64_t in_stack_00000028;
    int *in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t *piStack_28;
    
    uVar1 = arg4 != 0;
    piVar2 = fcn.0001bb28((uVar1 + 2) * 0x10);
    if (piVar2 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *(piVar2 + 0xc) = uVar1 + 1;
        *(piVar2 + uVar1 * 2 + 2) = *in_stack_00000030;
        piVar2[uVar1 * 2 + 3] = in_stack_00000038;
        iVar4 = *in_stack_00000030;
        if (arg4 != 0) {
            *(piVar2 + 2) = *arg4;
            piVar2[3] = in_stack_00000028;
            iVar4 = iVar4 + *arg4;
        }
        *(piVar2 + 1) = iVar4;
        *piVar2 = arg2;
        iStack_30 = -0x7ffffffffffffffa;
        acStackX_20[0] = '\0';
        piStack_28 = piVar2;
        iVar3 = (**(*0x1ebd8 + 0x50))(0x200,0x10,0x149c8,acStackX_20,&iStack_38);
        if ((-1 < iVar3) && (iVar3 = (**(arg1 + 0x18))(arg1,&iStack_38), -1 < iVar3)) {
            while ((acStackX_20[0] == '\0' &&
                   ((iStack_30 == -0x7ffffffffffffffa && (iVar3 = (**(*0x1ebd8 + 0x78))(arg3), iVar3 < 0))))) {
                (**(arg1 + 0x30))(arg1);
            }
            iVar3 = iStack_30;
            if (iStack_30 == -0x7ffffffffffffffa) {
                iVar3 = -0x7fffffffffffffee;
            }
        }
        if (iStack_38 != 0) {
            (**(*0x1ebd8 + 0x70))();
        }
        (**(*0x1ebd8 + 0x48))(piVar2);
    }
    return iVar3;
}


/* fcn.000150ac @ 0x150ac */

int64_t fcn.000150ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int iVar5;
    char in_stack_00000028;
    unkbyte7 in_stack_00000029;
    int64_t in_stack_00000030;
    int *in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t *piStack_38;
    
    piVar2 = CONCAT71(in_stack_00000029,in_stack_00000028);
    uVar1 = piVar2 != NULL;
    piVar3 = fcn.0001bb28(uVar1 * 0x10 + 0x28);
    if (piVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        *(piVar3 + 0x14) = uVar1 + 1;
        *(piVar3 + uVar1 * 2 + 3) = *in_stack_00000038;
        piVar3[(uVar1 + 2) * 2] = in_stack_00000040;
        iVar5 = *in_stack_00000038;
        if (piVar2 != NULL) {
            *(piVar3 + 3) = *piVar2;
            piVar3[4] = in_stack_00000030;
            iVar5 = iVar5 + *piVar2;
        }
        if (arg4 != 0) {
            piVar3[1] = arg4;
        }
        *(piVar3 + 2) = iVar5;
        *piVar3 = arg2;
        iStack_40 = -0x7ffffffffffffffa;
        in_stack_00000028 = '\0';
        piStack_38 = piVar3;
        iVar4 = (**(*0x1ebd8 + 0x50))(0x200,0x10,0x149c8,&stack0x00000028,&iStack_48);
        if ((-1 < iVar4) && (iVar4 = (**(arg1 + 0x20))(arg1,&iStack_48), -1 < iVar4)) {
            while ((in_stack_00000028 == '\0' &&
                   ((iStack_40 == -0x7ffffffffffffffa && (iVar4 = (**(*0x1ebd8 + 0x78))(arg3), iVar4 < 0))))) {
                (**(arg1 + 0x38))(arg1);
            }
            iVar4 = iStack_40;
            if (iStack_40 == -0x7ffffffffffffffa) {
                iVar4 = -0x7fffffffffffffee;
            }
        }
        if (iStack_48 != 0) {
            (**(*0x1ebd8 + 0x70))();
        }
        (**(*0x1ebd8 + 0x48))(piVar3);
    }
    return iVar4;
}


/* fcn.000158bc @ 0x158bc */

int64_t fcn.000158bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int64_t iVar1;
    char cVar2;
    char cVar3;
    int16_t iVar4;
    int64_t iVar5;
    uint16_t in_stack_00000028;
    char *in_stack_00000030;
    char *in_stack_00000038;
    int64_t in_stack_00000040;
    int16_t *in_stack_00000048;
    int64_t in_stack_00000050;
    int16_t *in_stack_00000058;
    
    while (((*in_stack_00000030 == '\0' && (*(arg2 + 8) == -0x7ffffffffffffffa)) &&
           (iVar5 = (**(*0x1ebd8 + 0x78))(arg4), iVar5 < 0))) {
        (**(arg1 + 0x30))(arg1);
        if ((*(arg2 + 8) == -0x7fffffffffffffea) || (*(arg2 + 8) + 0x7fffffffffffff9cU < 4)) break;
    }
    iVar5 = *(arg2 + 8);
    if (iVar5 == -0x7ffffffffffffffa) {
        return -0x7fffffffffffffee;
    }
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar1 = *(arg2 + 0x10);
    arg2_00 = iVar1 + 0x18;
    cVar2 = fcn.000153d8(arg3,arg2_00,in_stack_00000028);
    *in_stack_00000038 = cVar2;
    if (cVar2 != '\0') {
        cVar2 = fcn.00015574(arg3,arg2_00,in_stack_00000040,in_stack_00000028);
        *in_stack_00000038 = cVar2;
    }
    if (*in_stack_00000038 == '\0') goto code_r0x00015a3f;
    if (*(arg3 + 3) == '\0') {
        iVar4 = *(iVar1 + 0x22);
    }
    else {
        iVar4 = *(iVar1 + 0x3a);
    }
    cVar2 = '\x01';
    if ((in_stack_00000028 & 8) == 0) {
        if ((in_stack_00000048 != NULL) && (*in_stack_00000048 == iVar4)) goto code_r0x000159d0;
        cVar3 = '\0';
    }
    else {
        if (in_stack_00000048 != NULL) {
            *in_stack_00000048 = iVar4;
        }
code_r0x000159d0:
        cVar3 = '\x01';
    }
    *in_stack_00000038 = cVar3;
    if (cVar3 != '\0') {
        cVar3 = fcn.00015670(arg3,arg2_00,in_stack_00000050,in_stack_00000028);
        *in_stack_00000038 = cVar3;
    }
    if (*in_stack_00000038 != '\0') {
        if (*(arg3 + 3) == '\0') {
            iVar4 = *(iVar1 + 0x1c);
        }
        else {
            iVar4 = *(iVar1 + 0x28);
        }
        if ((in_stack_00000028 & 2) == 0) {
            if ((in_stack_00000058 == NULL) || (*in_stack_00000058 != iVar4)) {
                cVar2 = '\0';
            }
        }
        else if (in_stack_00000058 != NULL) {
            *in_stack_00000058 = iVar4;
        }
        *in_stack_00000038 = cVar2;
        if (cVar2 != '\0') {
            return iVar5;
        }
    }
code_r0x00015a3f:
    (**(*0x1ebd8 + 0x68))(*(iVar1 + 0x10));
    return iVar5;
}


/* fcn.00015708 @ 0x15708 */

int64_t fcn.00015708(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int64_t iVar1;
    char cVar2;
    char cVar3;
    int16_t iVar4;
    int64_t iVar5;
    uint16_t in_stack_00000028;
    char *in_stack_00000030;
    char *in_stack_00000038;
    int64_t in_stack_00000040;
    int16_t *in_stack_00000048;
    int64_t in_stack_00000050;
    int16_t *in_stack_00000058;
    
    while (((*in_stack_00000030 == '\0' && (*(arg2 + 8) == -0x7ffffffffffffffa)) &&
           (iVar5 = (**(*0x1ebd8 + 0x78))(arg4), iVar5 < 0))) {
        (**(arg1 + 0x38))(arg1);
        if ((*(arg2 + 8) == -0x7fffffffffffffea) || (*(arg2 + 8) + 0x7fffffffffffff9cU < 4)) break;
    }
    iVar5 = *(arg2 + 8);
    if (iVar5 == -0x7ffffffffffffffa) {
        return -0x7fffffffffffffee;
    }
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar1 = *(arg2 + 0x10);
    arg2_00 = iVar1 + 0x18;
    cVar2 = fcn.000153d8(arg3,arg2_00,in_stack_00000028);
    *in_stack_00000038 = cVar2;
    if (cVar2 != '\0') {
        cVar2 = fcn.00015574(arg3,arg2_00,in_stack_00000040,in_stack_00000028);
        *in_stack_00000038 = cVar2;
    }
    if (*in_stack_00000038 == '\0') goto code_r0x0001588b;
    if (*(arg3 + 3) == '\0') {
        iVar4 = *(iVar1 + 0x22);
    }
    else {
        iVar4 = *(iVar1 + 0x3a);
    }
    cVar2 = '\x01';
    if ((in_stack_00000028 & 8) == 0) {
        if ((in_stack_00000048 != NULL) && (*in_stack_00000048 == iVar4)) goto code_r0x0001581c;
        cVar3 = '\0';
    }
    else {
        if (in_stack_00000048 != NULL) {
            *in_stack_00000048 = iVar4;
        }
code_r0x0001581c:
        cVar3 = '\x01';
    }
    *in_stack_00000038 = cVar3;
    if (cVar3 != '\0') {
        cVar3 = fcn.00015670(arg3,arg2_00,in_stack_00000050,in_stack_00000028);
        *in_stack_00000038 = cVar3;
    }
    if (*in_stack_00000038 != '\0') {
        if (*(arg3 + 3) == '\0') {
            iVar4 = *(iVar1 + 0x1c);
        }
        else {
            iVar4 = *(iVar1 + 0x28);
        }
        if ((in_stack_00000028 & 2) == 0) {
            if ((in_stack_00000058 == NULL) || (*in_stack_00000058 != iVar4)) {
                cVar2 = '\0';
            }
        }
        else if (in_stack_00000058 != NULL) {
            *in_stack_00000058 = iVar4;
        }
        *in_stack_00000038 = cVar2;
        if (cVar2 != '\0') {
            return iVar5;
        }
    }
code_r0x0001588b:
    (**(*0x1ebd8 + 0x68))(*(iVar1 + 0x10));
    return iVar5;
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


/* fcn.000149cc @ 0x149cc */

void fcn.000149cc(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    int64_t iStackX_20;
    
    iVar1 = *(arg1 + 0x170);
    iVar2 = (**(*(arg1 + 0x68) + 0x10))(*(arg1 + 0x68),1,0,auStackX_18,auStackX_10,&iStackX_20,1);
    if (-1 < iVar2) {
        uVar4 = 8;
        if (auStackX_10[0] < 8) {
            uVar4 = auStackX_10[0];
        }
        uVar5 = 0;
        *(iVar1 + 0x2338) = uVar4;
        if (uVar4 != 0) {
            do {
                iVar2 = iVar1 + 0x233c + uVar5 * 0x30;
                if ((*(iStackX_20 + 0xb) != 0) && (iVar2 != iStackX_20 + 0xc)) {
                    section..text(iVar2,iStackX_20 + 0xc,*(iStackX_20 + 0xb));
                }
                iVar3 = iStackX_20 + 0xc + *(iStackX_20 + 0xb);
                iVar2 = iVar1 + 0x234c + uVar5 * 0x30;
                if ((*(iStackX_20 + 10) != 0) && (iVar2 != iVar3)) {
                    section..text(iVar2,iVar3,*(iStackX_20 + 10));
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
                iStackX_20 = iStackX_20 + auStackX_18[0];
            } while (uVar4 < *(iVar1 + 0x2338));
        }
    }
    return;
}


/* fcn.0001ca28 @ 0x1ca28 */

ulong fcn.0001ca28(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    iStackX_10 = 0;
    iVar1 = fcn.0001be40(0x1df00,aiStackX_18);
    if ((iVar1 < 0) || (aiStackX_18[0] == 0)) {
        iVar1 = fcn.0001be40(0x1df40,&iStackX_10);
        if (iVar1 < 0) {
            return 0x800000000000000e;
        }
        if (iStackX_10 == 0) {
            return 0x800000000000000e;
        }
        pcVar4 = *(iStackX_10 + 0x18);
        uVar2 = *(iStackX_10 + 0x16);
    }
    else {
        pcVar4 = *(aiStackX_18[0] + 0x10);
        uVar2 = *(aiStackX_18[0] + 0xc);
    }
    pcVar3 = pcVar4 + uVar2;
    do {
        if (*pcVar4 == '\x01') {
            if (pcVar4[1] < 0x19) {
                return 0x800000000000000e;
            }
            if (arg1 != pcVar4 + 8) {
                section..text(arg1,pcVar4 + 8,0x10);
            }
            return 0;
        }
        pcVar4 = pcVar4 + pcVar4[1];
        pcVar5 = pcVar4;
        if (*pcVar4 == '\0') goto code_r0x0001caa1;
        do {
            do {
                pcVar4 = pcVar4 + 1;
                pcVar5 = pcVar4;
            } while (*pcVar4 != '\0');
code_r0x0001caa1:
            pcVar4 = pcVar5 + 1;
        } while (*pcVar4 != '\0');
        pcVar4 = pcVar5 + 2;
    } while (pcVar4 < pcVar3);
    return 0x800000000000000e;
}


/* fcn.0001aa44 @ 0x1aa44 */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.0001aa44(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint auStackX_8 [2];
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    char acStack_78 [16];
    uchar auStack_68 [40];
    uint32_t var_38h;
    int64_t var_28h;
    
    puVar2 = *(arg1 + 0xd0);
    iVar7 = 0;
    iVar5 = *(arg1 + 200);
    aiStackX_18[0] = 0;
    uStackX_10 = 4;
    iVar9 = 0;
    fcn.000102c0(auStack_68,0x12);
    if (auStack_68 != arg2) {
        section..text(auStack_68,arg2,0x10);
    }
    iVar4 = arg1 + 0x2adc;
    iVar3 = (**(iVar5 + 8))(iVar5);
    iVar6 = iVar7;
    if (iVar3 < 0) goto code_r0x0001acba;
    iVar4 = fcn.0001a76c(arg1,iVar4,acStack_78);
    auStackX_8[0] = 0;
    iVar3 = (**puVar2)(puVar2,2,4,auStackX_8);
    iVar6 = iVar9;
    if (iVar3 < 0) {
        *(arg1 + 0x2a54) = 0xff;
        goto code_r0x0001acba;
    }
    iVar3 = (**(*0x1ebd8 + 0x50))(0x200,0x10,0x149c8,arg1 + 0x2b50,aiStackX_18);
    if (iVar3 < 0) goto code_r0x0001acba;
    *(arg1 + 0x2b50) = 0;
    iVar3 = (*puVar2[2])(puVar2,4,aiStackX_18[0]);
    if ((iVar3 < 0) || ((iVar3 = (**puVar2)(puVar2,4,0x12,auStack_68), iVar3 < 0 && (iVar3 != -0x7ffffffffffffffa)))
       ) goto code_r0x0001acba;
    iVar6 = iVar7;
    if (iVar3 == -0x7ffffffffffffffa) {
        cVar1 = *(arg1 + 0x2b50);
        while (cVar1 == '\0') {
            (**(iVar5 + 0x40))(iVar5);
            cVar1 = *(arg1 + 0x2b50);
        }
        uStackX_10 = 0;
        iVar5 = (*puVar2[1])(puVar2,4,&uStackX_10);
        if ((iVar5 == -0x7ffffffffffffffb) && (iVar6 = iVar9, uStackX_10 != 0)) {
            iVar6 = fcn.0001baf8();
            if (iVar6 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar3 = (*puVar2[1])(puVar2,4,&uStackX_10,iVar6);
            uVar10 = 0;
            if (-1 < iVar3) {
                if ((uStackX_10 & 0xfffffffffffffff0) != 0) {
                    iVar5 = iVar6;
                    do {
                        if ((iVar5 == arg2) || (iVar7 = fcn.000102e0(iVar5,arg2,0x10), iVar7 == 0)) break;
                        uVar10 = uVar10 + 1;
                        iVar5 = iVar5 + 0x10;
                    } while (uVar10 < uStackX_10 >> 4);
                }
                if (uVar10 == uStackX_10 >> 4) {
                    iVar3 = -0x7fffffffffffffeb;
                    goto code_r0x0001acba;
                }
                goto code_r0x0001ac8a;
            }
        }
        iVar3 = -0x7ffffffffffffff9;
    }
    else {
code_r0x0001ac8a:
        if (-1 < iVar4) {
            uVar10 = 0;
            do {
                if (acStack_78[uVar10] != '\0') {
                    iVar3 = (**puVar2)(puVar2,5,0x10,acStack_78);
                    break;
                }
                uVar8 = uVar10 + 1;
                uVar10 = uVar8;
            } while (uVar8 < 0x10);
        }
    }
code_r0x0001acba:
    if (aiStackX_18[0] != 0) {
        (*puVar2[3])(puVar2,4);
        (**(*0x1ebd8 + 0x70))(aiStackX_18[0]);
    }
    if (iVar6 != 0) {
        (**(*0x1ebd8 + 0x48))(iVar6);
    }
    return iVar3;
}


/* fcn.000147c0 @ 0x147c0 */

int64_t fcn.000147c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t arg2_00;
    ushort uStack_38;
    uchar uStack_36;
    int64_t iStack_30;
    
    iVar2 = *(arg1 + 0x170);
    fcn.000102c0(&uStack_38,0x20);
    arg2_00 = arg2;
    if (*(iVar2 + 3) == '\0') {
        if (arg2 != 0) {
            uStack_36 = 4;
            uStack_38 = 0x800;
            iStack_30 = arg2;
            (***(arg1 + 0x68))(*(arg1 + 0x68),0);
            (***(arg1 + 0x68))(*(arg1 + 0x68),&uStack_38);
            if (arg1 + 0x2a79 != arg2) {
                section..text(arg1 + 0x2a79,arg2_00,4);
            }
            if (arg1 + 0x2ac6 != arg2) {
                section..text(arg1 + 0x2ac6,arg2_00,4);
            }
        }
    }
    else if (arg2 != 0) {
        if (arg1 + 0x2a9c != arg2) {
            section..text(arg1 + 0x2a9c,arg2_00,0x10);
        }
        if (arg1 + 0x2af0 != arg2) {
            section..text(arg1 + 0x2af0,arg2_00,0x10);
        }
        (**(*(arg1 + 200) + 0x38))(*(arg1 + 200),arg1 + 0x2b38);
        (**(*(arg1 + 200) + 8))(*(arg1 + 200),0);
        iVar2 = (**(*(arg1 + 200) + 8))(*(arg1 + 200),arg1 + 0x2adc);
        if (-1 < iVar2) {
            iVar2 = (**(*(arg1 + 200) + 0x30))(*(arg1 + 200),arg1 + 0x2b38);
            return iVar2;
        }
        return iVar2;
    }
    if (arg3 != 0) {
        if (arg1 + 0x2a7d != arg3) {
            section..text(arg1 + 0x2a7d,arg3,4);
        }
        if (arg1 + 0x2aca != arg3) {
            section..text(arg1 + 0x2aca,arg3,4);
        }
    }
    if (arg2 == 0) {
        if (arg3 == 0) {
            return 0;
        }
    }
    else if (arg3 != 0) {
        *(iVar2 + 0x24bc) = 1;
        *(iVar2 + 0x24c0) = *arg2 & *arg3;
        uVar1 = *arg3;
        *(iVar2 + 0x24e0) = 0;
        *(iVar2 + 0x24d0) = uVar1;
    }
    (**(*(arg1 + 0x70) + 0x30))(*(arg1 + 0x70),arg1 + 0x2b20);
    (**(*(arg1 + 0x70) + 8))(*(arg1 + 0x70),0);
    iVar2 = (**(*(arg1 + 0x70) + 8))(*(arg1 + 0x70),arg1 + 0x2ac0);
    if (-1 < iVar2) {
        iVar2 = (**(*(arg1 + 0x70) + 0x28))(*(arg1 + 0x70),arg1 + 0x2b20);
        return iVar2;
    }
    return iVar2;
}


/* fcn.0001cb6c @ 0x1cb6c */

ulong fcn.0001cb6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg2_00;
    uchar *arg2_01;
    uint64_t uVar4;
    int64_t arg3_00;
    int64_t *piVar5;
    int64_t arg4;
    int64_t iStackX_8;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    
    uVar1 = *0x1ec28;
    auStackX_18[0] = arg3;
    if ((*0x1ec18 != 0) || (iVar2 = (**(*0x1ebd8 + 0x140))(0x1e1e0,0,0x1ec18), -1 < iVar2)) {
        (**(*0x1ec18 + 0x28))();
    }
    (**(*(*0x1ebd0 + 0x40) + 0x28))(*(*0x1ebd0 + 0x40),0xf);
    (**(*(*0x1ebd0 + 0x40) + 0x30))(*(*0x1ebd0 + 0x40));
    (**(*(*0x1ebd0 + 0x40) + 0x38))(*(*0x1ebd0 + 0x40),0,0);
    fcn.0001caec();
    arg4 = 0;
    piVar5 = &iStackX_8;
    arg3_00 = 0x1cb68;
    arg2_00 = 8;
    iStackX_20 = arg1;
    iVar2 = (**(*0x1ebd8 + 0x170))(0x200);
    if (-1 < iVar2) {
        (**(*0x1ebe0 + 0x58))(L"PxePreBootContext",0x1dd60,2,8,&iStackX_20,piVar5);
        (**(*0x1ebd8 + 0x68))(iStackX_8);
        (**(*0x1ebd8 + 0x70))(iStackX_8);
        arg4 = 0;
        arg3_00 = 2;
        arg2_00 = 0x1dd60;
        (**(*0x1ebe0 + 0x58))(L"PxePreBootContext");
    }
    fcn.0001c0f0(0x1e6e0,arg2_00,arg3_00,arg4);
    iStackX_8 = 0;
    uVar4 = uVar1;
    while( true ) {
        piVar5 = &iStackX_8;
        arg2_01 = 0xbebc200;
        fcn.0001c798(arg2,200000000,piVar5);
        if (uVar4 < 2) break;
        if (iStackX_8 == 0) goto code_r0x0001cd3c;
        (**(*0x1ebd8 + 0xf8))(500000);
        uVar4 = uVar4 - 1;
    }
    do {
        arg2_01 = auStackX_18;
        piVar5 = *(*0x1ebd0 + 0x30);
        iVar2 = (*piVar5[1])(piVar5);
    } while (-1 < iVar2);
    if (iStackX_8 == 0) {
code_r0x0001cd3c:
        if (-1 < iStackX_8) {
            fcn.0001c0f0(0x1e728,arg2_01,piVar5,arg4);
        }
        uVar3 = 0;
    }
    else {
        fcn.0001c0f0(0x1e708,arg2_01,piVar5,arg4);
        uVar3 = 0x800000000000000c;
    }
    return uVar3;
}


/* fcn.00016b9c @ 0x16b9c */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00016b9c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    char *arg1_01;
    uint64_t *arg2_00;
    int64_t arg3_00;
    int64_t in_R9;
    bool bVar5;
    uchar auStackX_10 [8];
    uint64_t uStackX_20;
    uint32_t var_40h;
    int64_t var_48h;
    uint32_t var_58h;
    uint64_t auStack_48 [2];
    int64_t var_10h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_20 = *arg2;
    iVar4 = arg1_00 + 0x108;
    iVar2 = 0;
    bVar5 = false;
    auStack_48[0] = 0;
    if (*(arg1_00 + 0x19b) == '\0') {
        iVar1 = *(arg1_00 + 0x28);
    }
    else {
        iVar1 = *(arg1_00 + 0x30);
    }
    arg3_00 = arg1_00 + 0x188;
    arg2_00 = 0x1de60;
    iVar1 = (**(*0x1ebd8 + 0x98))(*(iVar1 + 8));
    if (iVar1 == -0x7ffffffffffffffd) {
        if (arg1_00 + 0x178 != 0x1e140) {
            section..text(arg1_00 + 0x178,0x1e140,0x10);
        }
        if (*(arg1_00 + 0x19b) == '\0') {
            iVar1 = *(arg1_00 + 0x28);
        }
        else {
            iVar1 = *(arg1_00 + 0x30);
        }
        iVar1 = (**(*0x1ebd8 + 0x80))(iVar1 + 8);
        bVar5 = iVar1 == 0;
        in_R9 = 0;
        arg3_00 = 0;
        arg2_00 = NULL;
        iVar1 = (**(arg1_00 + 0x158))(iVar4);
        if (iVar1 < 0) {
            (**(arg1_00 + 0x118))(iVar4);
            iVar2 = iVar1;
        }
    }
    if (iVar2 < 0) {
        return iVar2;
    }
    uVar3 = *(arg1_00 + 0x2bc8);
    if (uVar3 == 0) {
        arg2_00 = auStack_48;
        iVar2 = fcn.000169f8(arg1_00,arg2_00);
        if (iVar2 < 0) goto code_r0x00016d94;
        if (auStack_48[0] == 0) {
            if (*(arg1_00 + 0x19b) == '\0') goto code_r0x00016d2b;
        }
        else {
            uVar3 = auStack_48[0];
            if ((uStackX_20 < auStack_48[0]) || (arg3 == 0)) goto code_r0x00016d8d;
            uStackX_20 = auStack_48[0];
code_r0x00016d2b:
            fcn.0001c0f0(0x1e310,arg2_00,arg3_00,in_R9);
            if (*(arg1_00 + 0x19b) == '\0') {
                in_R9 = 0;
                arg2_00 = 0x2;
                arg3_00 = arg3;
                iVar2 = (**(arg1_00 + 0x130))(iVar4);
                goto code_r0x00016d94;
            }
        }
        if (arg3 != 0) {
            arg2_00 = &uStackX_20;
            arg3_00 = arg3;
            iVar2 = fcn.00016b48(arg1_00,arg2_00);
            goto code_r0x00016d94;
        }
    }
    else {
        if ((uVar3 <= uStackX_20) && (arg3 != 0)) goto code_r0x00016d2b;
code_r0x00016d8d:
        uStackX_20 = uVar3;
    }
    iVar2 = -0x7ffffffffffffffb;
code_r0x00016d94:
    *arg2 = uStackX_20;
    if (bVar5) {
        auStackX_10[0] = 0;
        in_R9 = 0;
        (**(arg1_00 + 0x158))(iVar4,0,0,0,0,auStackX_10);
        if (*(arg1_00 + 0x19b) == '\0') {
            iVar4 = *(arg1_00 + 0x28);
        }
        else {
            iVar4 = *(arg1_00 + 0x30);
        }
        arg3_00 = arg1_00 + 0x178;
        arg2_00 = 0x1de60;
        (**(*0x1ebd8 + 0x90))(*(iVar4 + 8));
    }
    if (iVar2 == 0) {
        fcn.0001c0f0(0x1e330,arg2_00,arg3_00,in_R9);
        return 0;
    }
    if (iVar2 == -0x7ffffffffffffffb) {
        if (arg3 == 0) {
            return -0x7ffffffffffffffb;
        }
        arg1_01 = "\n  PXE-E05: Buffer size is smaller than the requested file.\n";
    }
    else if (iVar2 == -0x7ffffffffffffff9) {
        arg1_01 = "\n  PXE-E07: Network device error.\n";
    }
    else if (iVar2 == -0x7ffffffffffffff7) {
        arg1_01 = "\n  PXE-E09: Could not allocate I/O buffers.\n";
    }
    else if (iVar2 == -0x7ffffffffffffff4) {
        arg1_01 = "\n  PXE-E12: Could not detect network connection.\n";
    }
    else if (iVar2 == -0x7ffffffffffffff0) {
        arg1_01 = "\n  PXE-E16: No valid offer received.\n";
    }
    else if (iVar2 == -0x7fffffffffffffee) {
        arg1_01 = "\n  PXE-E18: Server response timeout.\n";
    }
    else if (iVar2 == -0x7fffffffffffffeb) {
        arg1_01 = "\n  PXE-E21: Remote boot cancelled.\n";
    }
    else if (iVar2 == -0x7fffffffffffffea) {
        arg1_01 = "\n  PXE-E22: Client received ICMP error from server.\n";
    }
    else if (iVar2 == -0x7fffffffffffffe9) {
        arg1_01 = "\n  PXE-E23: Client received TFTP error from server.\n";
    }
    else {
        arg1_01 = "\n  PXE-E53: No boot filename received.\n";
        if (iVar2 != -0x7ffffffffffffff2) {
            arg1_01 = "\n  PXE-E99: Unexpected network error.\n";
        }
    }
    fcn.0001c0f0(arg1_01,arg2_00,arg3_00,in_R9);
    return iVar2;
}


/* fcn.0001bf10 @ 0x1bf10 */

ulong fcn.0001bf10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.0001bea0(arg2,arg1);
                if (iVar5 == 0) {
code_r0x0001bfe3:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
code_r0x0001bfd8:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar5 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar5 = iVar5 + 1;
                                cVar1 = arg1_00[iVar5];
                            }
                            iVar3 = fcn.0001b5b0(arg1_00,arg1,iVar5);
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
                            goto code_r0x0001bfd8;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x0001bfe3;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.0001c15c @ 0x1c15c */

//WARNING: Variable defined which should be unmapped: var_20h

uint64_t * fcn.0001c15c(uint32_t arg1)

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


/* fcn.000153d8 @ 0x153d8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.000153d8(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t auStack_28 [4];
    int64_t var_bp_10h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (((arg3 & 0x10U) != 0) && ((*(iVar3 + 0x22b4) & 4) == 0)) {
        if (*(iVar3 + 3) == '\0') {
            fcn.000102c0(auStack_28,0x10);
            puVar4 = CONCAT44(in_register_00000014,arg2) + 6;
            if (auStack_28 != puVar4) {
                section..text(auStack_28,puVar4,4);
            }
        }
        else {
            puVar4 = CONCAT44(in_register_00000014,arg2) + 0x12;
            if (auStack_28 != puVar4) {
                section..text(auStack_28,puVar4,0x10);
            }
            fcn.0001c15c(auStack_28);
        }
        uVar1 = *(iVar3 + 0x22b4);
        if (((((uVar1 & 8) == 0) || (((auStack_28[0] & 0xf0000000) != 0xe0000000 && (auStack_28[0] != 0xff)))) &&
            (((uVar1 & 2) == 0 || (auStack_28[0] != 0xffffffff)))) &&
           (((uVar1 & 1) == 0 ||
            ((((puVar4 = iVar3 + 0x14, puVar4 != auStack_28 &&
               (iVar2 = fcn.000102e0(puVar4,auStack_28,4), iVar2 != 0)) && (puVar4 != auStack_28)) &&
             (iVar2 = fcn.000102e0(puVar4,auStack_28,0x10), iVar2 != 0)))))) {
            uVar5 = 0;
            if (*(iVar3 + 0x22b5) != '\0') {
                puVar4 = iVar3 + 0x22b8;
                do {
                    if (puVar4 == auStack_28) {
                        return 1;
                    }
                    iVar2 = fcn.000102e0(puVar4,auStack_28,4);
                    if (iVar2 == 0) {
                        return 1;
                    }
                    iVar2 = fcn.000102e0(puVar4,auStack_28,0x10);
                    if (iVar2 == 0) {
                        return 1;
                    }
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + 4;
                } while (uVar5 < *(iVar3 + 0x22b5));
            }
            return 0;
        }
    }
    return 1;
}


/* fcn.00015574 @ 0x15574 */

uchar fcn.00015574(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if ((arg4 & 4U) == 0) {
        if ((arg3 == 0) ||
           ((((arg3 != arg2 + 6 && (iVar1 = fcn.000102e0(arg3,arg2 + 6,4), iVar1 != 0)) && (arg3 != arg2 + 0x12)) &&
            (iVar1 = fcn.000102e0(arg3,arg2 + 0x12,0x10), iVar1 != 0)))) {
            arg1 = arg1 + 0x14;
            if (((arg1 != arg2 + 6) && (iVar1 = fcn.000102e0(arg1,arg2 + 6,4), iVar1 != 0)) &&
               ((arg1 != arg2 + 0x12 && (iVar1 = fcn.000102e0(arg1,arg2 + 0x12,0x10), iVar1 != 0)))) {
                return 0;
            }
        }
    }
    else if (arg3 != 0) {
        if (*(arg1 + 3) == '\0') {
            fcn.000102c0(arg3,0x10);
            arg2 = arg2 + 6;
            if (arg3 == arg2) {
                return 1;
            }
            iVar1 = 4;
        }
        else {
            arg2 = arg2 + 0x12;
            if (arg3 == arg2) {
                return 1;
            }
            iVar1 = 0x10;
        }
        section..text(arg3,arg2,iVar1);
    }
    return 1;
}


/* fcn.00015670 @ 0x15670 */

uchar fcn.00015670(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    if ((arg4 & 1U) == 0) {
        if ((arg3 == 0) ||
           (((arg3 != arg2 && (iVar1 = fcn.000102e0(arg3,arg2,4), iVar1 != 0)) &&
            (iVar1 = fcn.000102e0(arg3,arg2,0x10), iVar1 != 0)))) {
            return 0;
        }
    }
    else if (arg3 != 0) {
        if (*(CONCAT44(in_register_0000000c,arg1) + 3) == '\0') {
            fcn.000102c0(arg3,0x10);
            if (arg3 == arg2) {
                return 1;
            }
            iVar1 = 4;
        }
        else {
            if (arg3 == arg2) {
                return 1;
            }
            iVar1 = 0x10;
        }
        section..text(arg3,arg2,iVar1);
    }
    return 1;
}


/* fcn.0001b69c @ 0x1b69c */

uint64_t fcn.0001b69c(uint32_t arg1,int64_t arg2)

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


/* fcn.00015cf4 @ 0x15cf4 */

void fcn.00015cf4(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar2 = arg2;
    if (0x46 < arg2) {
        uVar2 = 0x46;
    }
    uVar3 = uVar2;
    uVar1 = *(uVar3 + arg1);
    *(uVar3 + arg1) = 0;
    fcn.0001c0f0(0x1e2a0,arg1,arg3,arg4);
    *(uVar3 + arg1) = uVar1;
    return;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00015a70 @ 0x15a70 */

void fcn.00015a70(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint64_t arg2_00;
    uint64_t uVar1;
    
    uVar1 = 0;
    do {
        arg2_00 = *(uVar1 + arg1);
        fcn.0001c0f0(0x1e290,arg2_00,arg2,arg3);
        if (uVar1 < 3) {
            fcn.0001c0f0(0x1e220,arg2_00,arg2,arg3);
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
    return;
}


/* fcn.0001ad04 @ 0x1ad04 */

int64_t fcn.0001ad04(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg2;
    int64_t arg3;
    int64_t in_R9;
    
    iVar1 = *(arg1 + 0xd8);
    arg1_00 = arg1 + 0x2b64;
    if (arg1_00 != arg1 + 0x2b54) {
        section..text(arg1_00,arg1 + 0x2b54,0x10);
    }
    iVar2 = *(arg1 + 0x170) + 0x14;
    if (iVar2 != arg1_00) {
        section..text(iVar2,arg1_00,0x10);
    }
    iVar2 = fcn.0001aa44(arg1,arg1_00);
    if (iVar2 < 0) {
        (**(iVar1 + 0x38))(iVar1);
    }
    else {
        arg3 = 0;
        arg2 = arg1_00;
        iVar2 = fcn.000147c0(arg1,arg1_00,0);
        if (iVar2 < 0) {
            (**(iVar1 + 0x38))(iVar1);
        }
        else {
            fcn.0001c0f0(0x1e588,arg2,arg3,in_R9);
            fcn.00015ab8(arg1_00,arg2,arg3,in_R9);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.0001984c @ 0x1984c */

int64_t fcn.0001984c(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    bool bVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint16_t *arg1_00;
    int64_t iVar4;
    uint64_t uVar5;
    uint16_t *puVar6;
    uint16_t *puVar7;
    uint8_t *puVar8;
    uint8_t uVar9;
    uint in_register_00000014;
    uint64_t uVar10;
    uint16_t uVar11;
    uint16_t *puVar12;
    uint16_t *puVar13;
    uint in_R8;
    uint32_t arg4_00;
    char *pcVar14;
    uint16_t in_stack_00000028;
    uint8_t uStack_38;
    unkbyte7 Stack_37;
    
    uVar3 = 0;
    bVar1 = true;
    uVar5 = uVar3;
    do {
        uVar10 = uVar5 + 1;
        iVar4 = uVar5 + 1;
        uVar5 = uVar10;
    } while ("tftp://"[iVar4] != '\0');
    if (in_stack_00000028 <= uVar10) {
        return -0x7ffffffffffffff2;
    }
    uVar5 = uVar10 & 0xffff;
    iVar4 = arg4;
    if ((uVar5 != 0) && (arg4 != "tftp://")) {
        uVar3 = fcn.000102e0(arg4,0x1e610,uVar5);
    }
    arg4_00 = iVar4;
    if (uVar3 != 0) {
        return -0x7ffffffffffffff2;
    }
    uVar11 = in_stack_00000028 - uVar10;
    arg1_00 = fcn.0001bb28(uVar11 + 1);
    if (arg1_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if ((uVar11 != 0) && (arg1_00 != arg4 + uVar5)) {
        section..text(arg1_00,arg4 + uVar5,uVar11);
    }
    uVar5 = 0;
    *(uVar11 + arg1_00) = 0;
    uVar2 = *arg1_00;
    if (uVar2 == 0x5b) {
        puVar13 = arg1_00 + 1;
        uVar2 = *puVar13;
        puVar12 = puVar13;
        while (uVar2 != 0) {
            if (*puVar12 == 0x5d) goto code_r0x00019951;
            puVar12 = puVar12 + 1;
            uVar2 = *puVar12;
        }
        if (*puVar12 != 0x5d) {
code_r0x00019935:
            (**(*0x1ebd8 + 0x48))(arg1_00);
            return -0x7ffffffffffffffe;
        }
code_r0x00019951:
        *puVar12 = 0;
        iVar4 = fcn.0001b918(puVar13,&uStack_38,CONCAT44(in_R8,arg3),arg4_00);
        if ((iVar4 < 0) || (*CONCAT71(Stack_37,uStack_38) != '\0')) goto code_r0x00019935;
code_r0x00019a44:
        puVar13 = puVar12 + 1;
        if (bVar1) {
            if (*puVar13 != 0x2f) goto code_r0x00019a51;
            puVar13 = puVar12 + 1;
        }
        uVar11 = (arg1_00 - puVar13) + uVar11 + 1;
        if ((uVar11 == 0) && (CONCAT44(in_register_00000014,arg2) == NULL)) goto code_r0x00019ba0;
        uVar2 = *puVar13;
        if (uVar2 != 0) {
            puVar12 = puVar13;
            uVar9 = uVar2;
            do {
                pcVar14 = ";mode=octet";
                puVar6 = puVar12;
                if (uVar9 == 0x3b) {
                    do {
                        if (uVar9 == 0) break;
                        puVar6 = puVar6 + 1;
                        pcVar14 = pcVar14 + 1;
                        uVar9 = *puVar6;
                    } while (uVar9 == *pcVar14);
                    if (*pcVar14 == 0) goto code_r0x00019acd;
                }
                if (*puVar6 == 0) goto code_r0x00019ae9;
                puVar12 = puVar12 + 1;
                uVar9 = *puVar12;
            } while (uVar9 != 0);
        }
        puVar12 = NULL;
code_r0x00019acd:
        if (puVar12 == NULL) {
code_r0x00019ae9:
            puVar12 = puVar13;
            while (uVar2 != 0) {
                pcVar14 = ";mode=";
                puVar6 = puVar12;
                if (uVar2 == 0x3b) {
                    do {
                        if (uVar2 == 0) break;
                        puVar6 = puVar6 + 1;
                        pcVar14 = pcVar14 + 1;
                        uVar2 = *puVar6;
                    } while (uVar2 == *pcVar14);
                    if (*pcVar14 == 0) goto code_r0x00019b24;
                }
                if (*puVar6 == 0) goto code_r0x00019b2d;
                puVar12 = puVar12 + 1;
                uVar2 = *puVar12;
            }
            puVar12 = NULL;
code_r0x00019b24:
            if (puVar12 != NULL) goto code_r0x00019a51;
        }
        else {
            puVar6 = NULL;
            do {
                puVar7 = puVar6 + 1;
                puVar8 = puVar6 + 0x1e619;
                puVar6 = puVar7;
            } while (*puVar8 != 0);
            if (*(puVar7 + puVar12) != 0) goto code_r0x00019ae9;
            *puVar12 = 0;
        }
code_r0x00019b2d:
        puVar8 = fcn.0001bb28(uVar11);
        if (puVar8 != NULL) {
            *CONCAT44(in_register_00000014,arg2) = puVar8;
            while (*puVar13 != 0) {
                if (*puVar13 == 0x25) {
                    puVar12 = puVar13 + 3;
                    uVar2 = *puVar12;
                    *puVar12 = 0;
                    fcn.0001b824(puVar13 + 1,0,&uStack_38);
                    *puVar8 = uStack_38;
                    *puVar12 = uVar2;
                }
                else {
                    *puVar8 = *puVar13;
                    puVar12 = puVar13 + 1;
                }
                puVar8 = puVar8 + 1;
                puVar13 = puVar12;
            }
            *puVar8 = 0;
code_r0x00019ba0:
            (**(*0x1ebd8 + 0x48))(arg1_00);
            return 0;
        }
    }
    else {
        bVar1 = false;
        puVar12 = arg1_00;
        while (uVar2 != 0) {
            if (*puVar12 == 0x2f) goto code_r0x00019996;
            puVar12 = puVar12 + 1;
            uVar2 = *puVar12;
        }
        if (*puVar12 != 0x2f) {
code_r0x00019a51:
            iVar4 = -0x7ffffffffffffffe;
            goto code_r0x00019b48;
        }
code_r0x00019996:
        *puVar12 = 0;
        uVar2 = *arg1_00;
        while (uVar2 != 0) {
            uVar5 = uVar5 + 1;
            uVar2 = *(uVar5 + arg1_00);
        }
        uVar3 = uVar5 + 1;
        puVar13 = fcn.0001bb28(uVar3 * 2);
        if (puVar13 != NULL) {
            if (uVar5 < 1000000) {
                puVar6 = puVar13;
                puVar7 = arg1_00;
                uVar5 = fcn.0001b69c(arg1_00,uVar3);
                if (uVar5 < uVar3) {
                    if (puVar6 < arg1_00) {
code_r0x000199fd:
                        if (puVar13 + uVar3 <= arg1_00) {
code_r0x00019a06:
                            uVar2 = *arg1_00;
                            while (uVar2 != 0) {
                                *puVar6 = uVar2;
                                puVar6 = puVar6 + 1;
                                puVar7 = puVar7 + 1;
                                uVar2 = *puVar7;
                            }
                            *puVar6 = 0;
                        }
                    }
                    else if (uVar5 + 1 + arg1_00 <= puVar6) {
                        if (puVar6 <= arg1_00) goto code_r0x000199fd;
                        goto code_r0x00019a06;
                    }
                }
            }
            iVar4 = fcn.000195d8(arg1,puVar13,CONCAT44(in_R8,arg3));
            if (iVar4 < 0) goto code_r0x00019b48;
            goto code_r0x00019a44;
        }
    }
    iVar4 = -0x7ffffffffffffff7;
code_r0x00019b48:
    (**(*0x1ebd8 + 0x48))(arg1_00);
    return iVar4;
}


/* fcn.00019bd8 @ 0x19bd8 */

ulong fcn.00019bd8(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    uint32_t uVar4;
    uint16_t uVar5;
    uint8_t uVar6;
    uint16_t auStackX_8 [4];
    
    if (auStackX_8 != CONCAT44(in_register_0000000c,arg1)) {
        section..text(auStackX_8,arg1,2);
    }
    uVar5 = auStackX_8[0] << 8 | auStackX_8[0] >> 8;
    if (uVar5 - 1 < 5) {
        uVar4 = 0;
        uVar6 = 0;
        uVar2 = 0;
        while (uVar2 < uVar5) {
            cVar1 = *(uVar6 + 2 + CONCAT44(in_register_0000000c,arg1));
            if (cVar1 - 0x30U < 10) {
                uVar3 = cVar1 - 0x30;
            }
            else if (cVar1 - 0x41U < 6) {
                uVar3 = cVar1 - 0x37;
            }
            else {
                if (5 < cVar1 - 0x61U) {
                    return 0x800000000000000e;
                }
                uVar3 = cVar1 + 0xa9;
            }
            uVar6 = uVar6 + 1;
            uVar4 = (uVar3 + uVar4) * 10;
            uVar2 = uVar6;
        }
        if (uVar4 / 10 < 0x10000) {
            *arg2 = uVar4 / 10;
            return 0;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00015ab8 @ 0x15ab8 */

void fcn.00015ab8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    while( true ) {
        if (*(uVar2 + arg1) != 0) {
            arg2 = *(uVar2 + arg1);
            fcn.0001c0f0(0x1e294,arg2,arg3,arg4);
        }
        uVar1 = uVar2 + 1;
        if (0xf < uVar1) break;
        if (((*(uVar1 + arg1) & 0xf0) == 0) && (*(uVar2 + arg1) != '\0')) {
            fcn.0001c0f0(0x1e298,arg2,arg3,arg4);
        }
        arg2 = *(uVar1 + arg1);
        fcn.0001c0f0(0x1e294,arg2,arg3,arg4);
        if (uVar1 < 0xf) {
            fcn.0001c0f0(0x1e29c,arg2,arg3,arg4);
        }
        uVar2 = uVar2 + 2;
        if (0xf < uVar2) {
            return;
        }
    }
    return;
}


/* fcn.00015d40 @ 0x15d40 */

int64_t fcn.00015d40(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    int iVar1;
    int iVar2;
    uint8_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t arg3;
    uint uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    
    iStackX_10 = 0;
    aiStackX_18[0] = 0;
    uVar8 = -(*(*(arg1 + 0x170) + 10) != '\0') & 0xfffffffffffff978;
    iVar1 = *(uVar8 + 0x3828 + arg1);
    if ((iVar1 == 4) || (iVar1 == 1)) {
        if (((*(uVar8 + 0x3892 + arg1) & 8) == 0) || (*(uVar8 + 0x3860 + arg1) == 0)) {
            if ((*(uVar8 + 0x3868 + arg1) & 0x400) != 0) {
                puVar3 = *(uVar8 + 0x38c8 + arg1);
                uVar6 = *(uVar8 + 0x38d0 + arg1) - 1;
                uVar7 = *puVar3;
                if (uVar7 != 0) {
                    if (uVar7 == 0xff) {
                        return 0;
                    }
                    iVar4 = (**(*0x1ebd8 + 0x50))(0x80000000,8,0,0,&iStackX_10);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    iVar4 = (**(*0x1ebd8 + 0x58))(iStackX_10,2,uVar7 * 10000000);
                    if (-1 < iVar4) {
                        iVar5 = 0;
                        iVar4 = (**(*0x1ebd8 + 0x50))(0x80000000,8,0,0,aiStackX_18);
                        if (-1 < iVar4) {
                            iVar9 = 10000000;
                            iVar4 = (**(*0x1ebd8 + 0x58))(aiStackX_18[0],1);
                            if (-1 < iVar4) {
                                iVar4 = *(*(*0x1ebd0 + 0x40) + 0x48);
                                iVar1 = *(iVar4 + 0xc);
                                iVar2 = *(iVar4 + 0x10);
                                fcn.00015cf4(puVar3 + 1,CONCAT71(*(*0x1ebd0 + 0x40) >> 8,uVar6),iVar9,iVar5);
                                iVar4 = *(*0x1ebd0 + 0x40);
                                iVar9 = uVar6 + iVar1;
                                iVar5 = iVar2;
                                (**(iVar4 + 0x38))(iVar4,iVar9);
                                fcn.0001c0f0(0x1e2a8,uVar7,iVar5,iVar4);
                                uVar7 = uVar7 - 1;
                                iVar4 = -0x7fffffffffffffee;
                                if (*(*0x1ebd0 + 0x30) != 0) {
                                    do {
                                        while( true ) {
                                            while( true ) {
                                                iVar5 = (**(*0x1ebd8 + 0x78))(iStackX_10);
                                                if (-1 < iVar5) goto code_r0x00015fe1;
                                                iVar5 = (**(*0x1ebd8 + 0x78))(aiStackX_18[0]);
                                                if (-1 < iVar5) {
                                                    iVar5 = *(*0x1ebd0 + 0x40);
                                                    arg3 = iVar2;
                                                    (**(iVar5 + 0x38))(iVar5,iVar9);
                                                    fcn.0001c0f0(0x1e2a8,uVar7,arg3,iVar5);
                                                    uVar7 = uVar7 - 1;
                                                }
                                                iVar5 = (**(*(*0x1ebd0 + 0x30) + 8))(*(*0x1ebd0 + 0x30),&uStackX_8);
                                                if (iVar5 != -0x7ffffffffffffffa) break;
                                                (**(*0x1ebd8 + 0xf8))(100000);
                                            }
                                            if (uStackX_8 != 0) break;
                                            if (uStackX_8._2_2_ == 3) goto code_r0x00016045;
                                            if (((uStackX_8._2_2_ - 0xd & 0xffffff9f) == 0) && (uStackX_8._2_2_ != 0x2d)
                                               ) {
code_r0x00015fde:
                                                iVar4 = 0;
                                                goto code_r0x00015fe1;
                                            }
                                        }
                                        if ((uStackX_8 & 0xffff) == 0x12) goto code_r0x00015fde;
                                    } while ((uStackX_8 & 0xffff) != 0x17);
code_r0x00016045:
                                    iVar4 = -0x7fffffffffffffeb;
code_r0x00015fe1:
                                    (**(*(*0x1ebd0 + 0x40) + 0x38))(*(*0x1ebd0 + 0x40),0,iVar2 + 1);
                                }
                            }
                        }
                    }
                    if (aiStackX_18[0] != 0) {
                        (**(*0x1ebd8 + 0x70))();
                    }
                    if (iStackX_10 != 0) {
                        (**(*0x1ebd8 + 0x70))();
                    }
                    return iVar4;
                }
            }
            iVar4 = -0x7fffffffffffffee;
        }
        else {
            iVar4 = -0x7fffffffffffffeb;
        }
    }
    else {
        iVar4 = -0x7ffffffffffffff2;
    }
    return iVar4;
}


/* fcn.00016054 @ 0x16054 */

ulong fcn.00016054(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    char cVar2;
    ulong uVar3;
    uchar *puVar4;
    uint32_t *puVar5;
    uint16_t **ppuVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint16_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int iVar12;
    uint8_t uVar13;
    uint64_t uVar14;
    uint16_t uStackX_8;
    uint16_t uStackX_a;
    uint16_t *puStackX_10;
    int64_t var_bp_70h;
    int64_t var_88h;
    uchar auStack_148 [80];
    uint16_t *apuStack_f8 [24];
    
    *arg2 = 0;
    uVar13 = 0;
    bVar1 = false;
    uVar14 = 0;
    puVar5 = (-(*(*(arg1 + 0x170) + 10) != '\0') & 0xfffffffffffff978) + 0x3868 + arg1;
    if ((*puVar5 & 0x200) == 0) {
        return 0;
    }
    uVar3 = 0;
    puStackX_10 = arg2;
    fcn.00010300(auStack_148,0x46,CONCAT71(arg3 >> 8,0x20));
    cVar2 = puVar5[0x16];
    uVar3 = CONCAT71(uVar3 >> 8,cVar2);
    puVar9 = *(puVar5 + 0x14);
    if (cVar2 == '\0') {
        return 0x8000000000000007;
    }
    iVar11 = 1;
    while ((cVar2 != '\0' && (uVar13 = uVar14, uVar13 < 0x18))) {
        uVar7 = puVar9[1];
        uVar13 = uVar13 + 1;
        apuStack_f8[uVar14] = puVar9;
        puVar9 = puVar9 + uVar7 + 3;
        cVar2 = uVar3 + (-3 - uVar7);
        uVar3 = CONCAT71(uVar3 >> 8,cVar2);
        uVar14 = uVar13;
    }
    if ((arg3 == '\0') && (*(*0x1ebd0 + 0x30) != 0)) {
        if (uVar13 != 0) {
            ppuVar6 = apuStack_f8;
            uVar14 = uVar13;
            iVar10 = *0x1ebd0;
            do {
                uVar3 = CONCAT71(uVar3 >> 8,(*ppuVar6)[1]);
                fcn.00015cf4(*ppuVar6 + 3,uVar3,iVar10,iVar11);
                ppuVar6 = ppuVar6 + 1;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        iVar12 = *(*(*(*0x1ebd0 + 0x40) + 0x48) + 0x10) - uVar13;
        uVar14 = 0;
        do {
            (**(*(*0x1ebd0 + 0x40) + 0x28))(*(*0x1ebd0 + 0x40),0x70);
            iVar11 = *(*0x1ebd0 + 0x40);
            uVar7 = uVar14;
            iVar10 = uVar14 + iVar12;
            (**(iVar11 + 0x38))(iVar11,0);
            puVar4 = auStack_148;
            puVar9 = apuStack_f8[uVar14];
            auStack_148[puVar9[1]] = 0;
            fcn.0001c0f0(0x1e2b0,puVar4,iVar10,iVar11);
            fcn.00015cf4(puVar9 + 3,CONCAT71(puVar4 >> 8,puVar9[1]),iVar10,iVar11);
            (**(*(*0x1ebd0 + 0x40) + 0x38))(*(*0x1ebd0 + 0x40),0,uVar13 + iVar12);
            iVar11 = (**(*(*0x1ebd0 + 0x30) + 8))(*(*0x1ebd0 + 0x30),&uStackX_8);
            if (iVar11 == -0x7ffffffffffffffa) {
                do {
                    (**(*0x1ebd8 + 0xf8))(100000);
                    iVar11 = (**(*(*0x1ebd0 + 0x30) + 8))(*(*0x1ebd0 + 0x30),&uStackX_8);
                } while (iVar11 == -0x7ffffffffffffffa);
                arg2 = puStackX_10;
            }
            if (uStackX_8 == 0) {
                if (uStackX_a < 0x21) {
                    if (uStackX_a == 0x20) goto code_r0x000162bd;
                    if (uStackX_a == 3) {
                        uStackX_8 = 0x17;
                    }
                    else {
                        if (uStackX_a == 8) goto code_r0x000162af;
                        if (uStackX_a == 9) goto code_r0x000162bd;
                        if ((uStackX_a != 10) && (uStackX_a != 0xd)) goto code_r0x000162a9;
                        bVar1 = true;
                    }
                }
                else if (uStackX_a == 0x44) {
code_r0x000162bd:
                    uStackX_8 = 2;
                }
                else {
                    if (uStackX_a != 0x55) {
                        if (uStackX_a == 100) goto code_r0x000162bd;
                        if (uStackX_a != 0x75) {
code_r0x000162a9:
                            uStackX_8 = 0;
                            goto code_r0x000162c5;
                        }
                    }
code_r0x000162af:
                    uStackX_8 = 1;
                }
            }
code_r0x000162c5:
            uVar8 = uVar14;
            if (uStackX_8 == 1) {
code_r0x00016323:
                if (uVar7 != 0) {
                    uVar8 = uVar7 - 1;
                }
            }
            else if (1 < uStackX_8) {
                if (uStackX_8 < 4) {
                    if (uVar7 + 1 != uVar13) {
                        uVar8 = uVar7 + 1;
                    }
                }
                else {
                    if (uStackX_8 == 4) goto code_r0x00016323;
                    if (uStackX_8 == 5) {
code_r0x0001630e:
                        uVar8 = 0;
                    }
                    else {
                        if (uStackX_8 != 6) {
                            if (uStackX_8 == 9) goto code_r0x0001630e;
                            if (uStackX_8 != 10) {
                                if (uStackX_8 == 0x17) {
                                    return 0x8000000000000015;
                                }
                                goto code_r0x00016330;
                            }
                        }
                        uVar8 = uVar13 - 1;
                    }
                }
            }
code_r0x00016330:
            (**(*(*0x1ebd0 + 0x40) + 0x28))(*(*0x1ebd0 + 0x40),7);
            iVar11 = *(*0x1ebd0 + 0x40);
            iVar10 = uVar7 + iVar12;
            (**(iVar11 + 0x38))(iVar11,0);
            puVar4 = auStack_148;
            puVar9 = apuStack_f8[uVar14];
            auStack_148[puVar9[1]] = 0;
            fcn.0001c0f0(0x1e2b0,puVar4,iVar10,iVar11);
            fcn.00015cf4(puVar9 + 3,CONCAT71(puVar4 >> 8,puVar9[1]),iVar10,iVar11);
            (**(*(*0x1ebd0 + 0x40) + 0x38))(*(*0x1ebd0 + 0x40),0,uVar13 + iVar12);
            uVar14 = uVar8;
        } while (!bVar1);
        apuStack_f8[0] = apuStack_f8[uVar8];
        if (arg2 == apuStack_f8[0]) goto code_r0x000163e9;
    }
    else if (arg2 == apuStack_f8[0]) goto code_r0x000163e9;
    section..text(arg2,apuStack_f8[0],2);
code_r0x000163e9:
    *arg2 = *arg2 << 8 | *arg2 >> 8;
    return 0;
}


/* fcn.00016610 @ 0x16610 */

int64_t fcn.00016610(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint16_t *arg2_00;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg4;
    uint16_t auStackX_8 [4];
    
    iVar2 = *(arg1 + 0x170);
    *arg2 = 0;
    if (*(iVar2 + 0xc) == '\0') {
        iVar2 = (-(*(iVar2 + 10) != '\0') & 0xfffffffffffff978) + 0x3260;
    }
    else {
        iVar2 = 0x38e8;
    }
    if (*(iVar2 + 0x5d8 + arg1) == 0) {
        iVar1 = -0x7fffffffffffffe8;
    }
    else {
        iVar1 = fcn.0001ad04(arg1);
        if (-1 < iVar1) {
            arg1_00 = arg1 + 0x2b94;
            arg4 = *(iVar2 + 0x5d8 + arg1) + 4;
            arg3 = arg1_00;
            iVar1 = fcn.0001984c(arg1,arg1 + 0x2bc0,arg1_00,arg4);
            if (-1 < iVar1) {
                iVar2 = *(iVar2 + 0x5e0 + arg1);
                if (iVar2 == 0) {
                    arg4 = 0;
                    arg3 = 0;
                    arg2_00 = 0x1;
                    iVar1 = (**(arg1 + 0x130))(arg1 + 0x108);
                }
                else {
                    arg2_00 = auStackX_8;
                    iVar1 = fcn.00019bd8(iVar2 + 4,arg2_00);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    *arg2 = auStackX_8[0] << 9;
                }
                *(arg1 + 0x2bc8) = *arg2;
                fcn.0001c0f0(0x1e2b8,arg2_00,arg3,arg4);
                fcn.00015ab8(arg1_00,arg2_00,arg3,arg4);
                fcn.0001c0f0(0x1e2d8,*(arg1 + 0x2bc0),arg3,arg4);
                fcn.0001c0f0(0x1e2f0,*(arg1 + 0x2bc8),arg3,arg4);
            }
        }
    }
    return iVar1;
}


/* fcn.00016410 @ 0x16410 */

ulong fcn.00016410(int64_t arg1,int64_t arg2)

{
    int *arg1_00;
    int64_t iVar1;
    ulong uVar2;
    int *piVar3;
    uint16_t *arg2_00;
    int64_t iVar4;
    int64_t in_R8;
    int64_t in_R9;
    uint16_t auStackX_8 [4];
    
    uVar2 = 0;
    iVar4 = *(arg1 + 0x170);
    *arg2 = 0;
    if (*(iVar4 + 0xc) == '\0') {
        iVar4 = (-(*(iVar4 + 10) != '\0') & 0xfffffffffffff978) + 0x3260;
    }
    else {
        iVar4 = 0x38e8;
    }
    if (*(iVar4 + 0x600 + arg1) == 0) {
        uVar2 = 0x8000000000000018;
    }
    else {
        arg1_00 = arg1 + 0x2b94;
        fcn.000102c0(arg1_00,0x10);
        if (((((*(iVar4 + 0x632 + arg1) & 8) != 0) && ((*(iVar4 + 0x608 + arg1) & 0x100) != 0)) &&
            (iVar1 = *(iVar4 + 0x648 + arg1), 6 < *(iVar4 + 0x650 + arg1))) &&
           ((*(iVar1 + 2) != '\0' && (piVar3 = iVar1 + 3, arg1_00 != piVar3)))) {
            in_R8 = 4;
            section..text(arg1_00,piVar3,4);
        }
        if (*arg1_00 == 0) {
            piVar3 = arg1 + 0x1c + iVar4;
            if (arg1_00 != piVar3) {
                in_R8 = 4;
                section..text(arg1_00,piVar3,4);
            }
            if ((*arg1_00 == 0) && (piVar3 = *(iVar4 + 0x5f0 + arg1) + 2, arg1_00 != piVar3)) {
                in_R8 = 4;
                section..text(arg1_00,piVar3,4);
            }
        }
        *(arg1 + 0x2bc0) = *(iVar4 + 0x600 + arg1) + 2;
        iVar4 = *(iVar4 + 0x5d0 + arg1);
        if (iVar4 == 0) {
            in_R9 = 0;
            in_R8 = 0;
            arg2_00 = 0x1;
            uVar2 = (**(arg1 + 0x130))(arg1 + 0x108);
        }
        else {
            arg2_00 = iVar4 + 2;
            if (auStackX_8 != arg2_00) {
                in_R8 = 2;
                section..text(auStackX_8,arg2_00,2);
            }
            auStackX_8[0] = auStackX_8[0] << 8 | auStackX_8[0] >> 8;
            *arg2 = auStackX_8[0] << 9;
        }
        *(arg1 + 0x2bc8) = *arg2;
        fcn.0001c0f0(0x1e2b8,arg2_00,in_R8,in_R9);
        fcn.00015a70(arg1_00,arg2_00,in_R8,in_R9);
        fcn.0001c0f0(0x1e2d8,*(arg1 + 0x2bc0),in_R8,in_R9);
        fcn.0001c0f0(0x1e2f0,*(arg1 + 0x2bc8),in_R8,in_R9);
    }
    return uVar2;
}


/* fcn.000169f8 @ 0x169f8 */

int64_t fcn.000169f8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong noname_1;
    uint64_t uVar3;
    ulong in_R8;
    uchar uVar4;
    int16_t aiStackX_8 [4];
    ushort auStackX_18 [8];
    
    iVar2 = *(arg1 + 0x170);
    noname_1 = CONCAT71(arg2 >> 8,1);
    aiStackX_8[0] = 0;
    auStackX_18[0] = 0;
    iVar1 = (**(arg1 + 0x120))(arg1 + 0x108);
    if (iVar1 < 0) {
        return iVar1;
    }
    uVar3 = -(*(iVar2 + 10) != '\0') & 0xfffffffffffff978;
    iVar1 = fcn.00015d40(arg1,noname_1,in_R8);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        if (iVar1 != -0x7fffffffffffffee) goto code_r0x00016a7f;
        iVar1 = CONCAT71(in_R8 >> 8,1);
    }
    iVar1 = fcn.00016054(arg1,aiStackX_8,iVar1);
code_r0x00016a7f:
    if (iVar1 < 0) {
        if (iVar1 == -0x7fffffffffffffeb) {
            if ((*(uVar3 + 0x3892 + arg1) & 8) == 0) {
                return -0x7fffffffffffffeb;
            }
            if (*(uVar3 + 0x3860 + arg1) == 0) {
                return -0x7fffffffffffffeb;
            }
        }
    }
    else {
        if (aiStackX_8[0] == 0) {
            return -0x7fffffffffffffeb;
        }
        if ((*(iVar2 + 4) == '\0') || (uVar4 = 1, *(iVar2 + 5) == '\0')) {
            uVar4 = 0;
        }
        iVar1 = (**(arg1 + 0x128))(arg1 + 0x108,aiStackX_8[0],auStackX_18,uVar4,0);
        if (iVar1 < 0) {
            return iVar1;
        }
        if ((*(iVar2 + 0xc) != '\0') && (*(iVar2 + 10) == '\0')) {
            if ((*(arg1 + 0x38ec) != 0) && (iVar2 + 0xbb4 != iVar2 + 0x1734)) {
                section..text(iVar2 + 0xbb4,iVar2 + 0x1734,*(arg1 + 0x38ec));
            }
            *(iVar2 + 10) = 1;
        }
    }
    if (*(iVar2 + 3) == '\0') {
        iVar2 = fcn.00016410(arg1,arg2);
    }
    else {
        iVar2 = fcn.00016610(arg1,arg2);
    }
    return iVar2;
}


/* fcn.00016b48 @ 0x16b48 */

void fcn.00016b48(int64_t arg1,uint32_t *arg2)

{
    ulong in_R8;
    
    (**(arg1 + 0x130))(arg1 + 0x108,2,in_R8,0,arg2,arg1 + 0x2bd0,arg1 + 0x2b94,*(arg1 + 0x2bc0),0,0);
    return;
}


/* fcn.00015b38 @ 0x15b38 */

void fcn.00015b38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    for (; 0 < arg3; arg3 = arg3 + -1) {
        *(arg2 + -1 + arg3) = arg1 + (arg1 / 10) * -10 + '0';
        arg1 = arg1 / 10;
    }
    return;
}


/* fcn.00016f2c @ 0x16f2c */

char * fcn.00016f2c(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00016f64 @ 0x16f64 */

void fcn.00016f64(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t *arg1_00;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    int64_t arg3;
    
    uVar2 = *(arg1 + 1);
    puVar5 = arg1 + 2;
    uVar6 = 0;
    if (uVar2 != 0) {
        do {
            if (*puVar5 == 0xff) {
                return;
            }
            uVar3 = *puVar5;
            if (uVar3 < 0x48) {
                if (uVar3 == 0x47) {
                    if (arg2 + 0x38 != puVar5 + 2) {
                        section..text(arg2 + 0x38,puVar5 + 2,2);
                    }
                    puVar4 = puVar5 + 4;
                    arg1_00 = arg2 + 0x3a;
code_r0x000170f4:
                    if (arg1_00 != puVar4) {
                        arg3 = 2;
code_r0x000170fc:
                        section..text(arg1_00,puVar4,arg3);
                    }
                }
                else if (uVar3 < 8) {
                    if (uVar3 == 7) {
                        arg1_00 = arg2 + 0x2b;
                    }
                    else {
                        if (uVar3 != 1) {
                            if (uVar3 == 2) {
                                puVar4 = puVar5 + 2;
                                arg1_00 = arg2 + 0x24;
                            }
                            else {
                                if (uVar3 != 3) {
                                    if (uVar3 == 4) {
                                        *(arg2 + 0x28) = puVar5[2];
                                    }
                                    else if (uVar3 == 5) {
                                        *(arg2 + 0x29) = puVar5[2];
                                    }
                                    else if (uVar3 == 6) {
                                        *(arg2 + 0x2a) = puVar5[2];
                                    }
                                    goto code_r0x00017101;
                                }
                                puVar4 = puVar5 + 2;
                                arg1_00 = arg2 + 0x26;
                            }
                            goto code_r0x000170f4;
                        }
                        arg1_00 = arg2 + 0x20;
                    }
                    puVar4 = puVar5 + 2;
                    if (arg1_00 != puVar4) {
                        arg3 = 4;
                        goto code_r0x000170fc;
                    }
                }
                else if (uVar3 == 8) {
                    *(arg2 + 0x48) = puVar5[1];
                    *(arg2 + 0x40) = puVar5 + 2;
                }
                else if (uVar3 == 9) {
                    *(arg2 + 0x58) = puVar5[1];
                    *(arg2 + 0x50) = puVar5 + 2;
                }
                else if (uVar3 == 10) {
                    *(arg2 + 0x68) = puVar5[1];
                    *(arg2 + 0x60) = puVar5 + 2;
                }
                else {
                    if (uVar3 == 0xb) {
                        if (arg2 + 0x2f != puVar5 + 2) {
                            section..text(arg2 + 0x2f,puVar5 + 2,4);
                        }
                        if (arg2 + 0x34 != puVar5 + 6) {
                            section..text(arg2 + 0x34,puVar5 + 6,2);
                        }
                        puVar4 = puVar5 + 8;
                        arg1_00 = arg2 + 0x36;
                        goto code_r0x000170f4;
                    }
                    if (uVar3 == 0xc) {
                        *(arg2 + 0x78) = puVar5[1];
                        *(arg2 + 0x70) = puVar5 + 2;
                    }
                }
            }
code_r0x00017101:
            puVar1 = arg2 + (*puVar5 >> 5) * 4;
            *puVar1 = *puVar1 | 1 << (*puVar5 & 0x1f);
            if (*puVar5 == 0) {
                uVar6 = uVar6 + 1;
            }
            else {
                uVar6 = uVar6 + puVar5[1] + 2;
            }
            puVar5 = arg1 + 2 + uVar6;
        } while (uVar6 < uVar2);
    }
    return;
}


/* fcn.00017410 @ 0x17410 */

ulong fcn.00017410(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint32_t *puVar3;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(arg2 + 4);
    if (*puVar3 < uVar1) {
        uVar2 = 0x8000000000000005;
    }
    else {
        if ((uVar1 != 0) && (puVar3 + 2 != arg2 + 8)) {
            section..text(puVar3 + 2,arg2 + 8,uVar1);
        }
        puVar3[1] = *(arg2 + 4);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001770c @ 0x1770c */

int64_t fcn.0001770c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *pcVar2;
    char acStack_18 [16];
    
    iVar1 = (arg2 & 0xffffffffU) * 0x688;
    pcVar2 = arg1 + 0x409c + iVar1;
    if (*pcVar2 == '\0') {
        pcVar2 = *(iVar1 + 0x4670 + arg1) + 2;
    }
    if (acStack_18 != pcVar2) {
        section..text(acStack_18,pcVar2,4);
    }
    *(arg1 + 0x2b53) = 0;
    iVar1 = fcn.00017f74(arg1,0,0,0);
    if (-1 < iVar1) {
        iVar1 = fcn.00017460(arg1 + 0x2bd8);
        if (-1 < iVar1) {
            if ((*(arg1 + 0x31a0) - 4U < 2) || (*(arg1 + 0x31d8) != 0)) {
                *(*(arg1 + 0x170) + 10) = 1;
                iVar1 = *(arg1 + 0x170) + 0xbb4;
                if ((*(arg1 + 0x2bdc) != 0) && (iVar1 != arg1 + 0x2be0)) {
                    section..text(iVar1,arg1 + 0x2be0,*(arg1 + 0x2bdc));
                }
                iVar1 = 0;
            }
            else {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00017690 @ 0x17690 */

int64_t fcn.00017690(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = *(arg1 + 0x170);
    iVar2 = fcn.00017410(arg1 + 0x3260,arg2);
    if (-1 < iVar2) {
        if (arg3 != '\0') {
            fcn.00017460(arg1 + 0x3260);
            iVar2 = iVar1 + 0x5f4;
            if ((*(arg2 + 4) != 0) && (iVar2 != arg2 + 8)) {
                section..text(iVar2,arg2 + 8,*(arg2 + 4));
            }
            *(iVar1 + 9) = 1;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00017954 @ 0x17954 */

void fcn.00017954(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    *(iVar2 + 0x4074) = 0;
    if (*(iVar2 + 0x2b51) == '\0') {
        if (*(iVar2 + 0xa900) == 0) {
            return;
        }
        while( true ) {
            uVar6 = uVar4;
            iVar5 = uVar4 * 0x688;
            iVar3 = iVar2 + 0x4098 + iVar5;
            if (((iVar3 != 0x1ec10) && (iVar3 = fcn.000102e0(iVar3,0x1ec10,4), iVar3 != 0)) &&
               ((*(iVar2 + 0x2b52) != '\0' || ((*(iVar5 + 0x4648 + iVar2) != 0 || (*(iVar5 + 0x4680 + iVar2) != 0))))))
            break;
            uVar4 = uVar6 + 1;
            if (*(iVar2 + 0xa900) <= uVar6 + 1) {
                return;
            }
        }
code_r0x00017b13:
        *(iVar2 + 0x4074) = uVar6 + 1;
        return;
    }
    if (*(iVar2 + 0xa908) == 0) {
        if (*(iVar2 + 0xa90c) == 0) {
            uVar6 = *(iVar2 + 0xa904);
            if (uVar6 != 0) {
                if (*(iVar2 + 0xa914) != 0) {
                    *(iVar2 + 0x4078) = 4;
                    *(iVar2 + 0x4074) = *(iVar2 + 0xa924) + 1;
                    return;
                }
                if ((uVar6 != 0) && (*(iVar2 + 0xa918) != 0)) {
                    *(iVar2 + 0x4078) = 5;
                    *(iVar2 + 0x4074) = *(iVar2 + 0xa924) + 1;
                    return;
                }
            }
            if (*(iVar2 + 0xa910) == 0) {
                if ((uVar6 != 0) && (*(iVar2 + 0xa91c) != 0)) {
                    *(iVar2 + 0x4078) = 6;
                    *(iVar2 + 0x4074) = *(iVar2 + 0xa924) + 1;
                    return;
                }
                if (uVar6 != 0) {
                    do {
                        uVar7 = *(iVar2 + 0xa924 + uVar4 * 4);
                        if (*(uVar7 * 0x688 + 0x4680 + iVar2) != 0) {
                            *(iVar2 + 0x4074) = uVar7 + 1;
                            break;
                        }
                        uVar7 = uVar4 + 1;
                        uVar4 = uVar7;
                    } while (uVar7 < uVar6);
                }
                uVar6 = *(iVar2 + 0xaae4);
                if (*(iVar2 + 0x4074) != 0) {
                    return;
                }
                if (*(iVar2 + 0xa920) == 0) {
                    return;
                }
                if (*(uVar6 * 0x688 + 0x4680 + iVar2) == 0) {
                    return;
                }
                goto code_r0x00017b13;
            }
            iVar1 = *(iVar2 + 0xa9e4);
        }
        else {
            iVar1 = *(iVar2 + 0xa9a4);
        }
    }
    else {
        iVar1 = *(iVar2 + 0xa964);
    }
    *(iVar2 + 0x4074) = iVar1 + 1;
    return;
}


/* fcn.00017808 @ 0x17808 */

int64_t fcn.00017808(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = *(arg1 + 0xa900) * 0x688 + arg1;
    iVar3 = fcn.00017410(iVar4 + 0x4080,arg2);
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = fcn.00017460(iVar4 + 0x4080);
    if (iVar3 < 0) {
code_r0x00017938:
        iVar3 = -0x7fffffffffffffeb;
    }
    else {
        iVar2 = *(iVar4 + 0x4648);
        iVar3 = iVar2;
        if (iVar2 == 7) {
            if (*(arg1 + 0xa920) != 0) goto code_r0x00017938;
            *(arg1 + 0xaae4) = *(arg1 + 0xa900);
            *(arg1 + 0xa920) = 1;
        }
        else if ((iVar4 + 0x4098 == 0x1ec10) || (iVar4 = fcn.000102e0(iVar4 + 0x4098,0x1ec10,4), iVar4 == 0)) {
            *(arg1 + 0x2b52) = 1;
            if (iVar2 == 6) {
                *(arg1 + 0xaaa4 + *(arg1 + 0xa91c) * 4) = *(arg1 + 0xa900);
                *(arg1 + 0xa91c) = *(arg1 + 0xa91c) + 1;
            }
            else {
                if ((1 < iVar2 - 4U) || (iVar4 = arg1 + iVar3 * 4, *(iVar4 + 0xa904) != 0)) goto code_r0x00017938;
                *(iVar3 * 0x40 + 0xa924 + arg1) = *(arg1 + 0xa900);
                *(iVar4 + 0xa904) = 1;
            }
        }
        else {
            iVar4 = arg1 + iVar3 * 4;
            *(arg1 + 0xa924 + (iVar3 * 0x10 + *(iVar4 + 0xa904)) * 4) = *(arg1 + 0xa900);
            piVar1 = iVar4 + 0xa904;
            *piVar1 = *piVar1 + 1;
        }
        *(arg1 + 0xa900) = *(arg1 + 0xa900) + 1;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00017160 @ 0x17160 */

int fcn.00017160(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ushort *puVar2;
    uchar *puVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ushort auStackX_20 [4];
    
    iVar5 = 0;
    *arg2 = arg3;
    if (arg4 != '\0') {
        *arg3 = 0x35;
        *(*arg2 + 1) = 1;
        *(*arg2 + 2) = 3;
        puVar3 = *arg2 + 2 + *(*arg2 + 1);
        *(arg2 + 8) = puVar3;
        *puVar3 = 0x39;
        *(*(arg2 + 8) + 1) = 2;
        auStackX_20[0] = 0xc005;
        puVar2 = *(arg2 + 8) + 2;
        if (puVar2 != auStackX_20) {
            section..text(puVar2,auStackX_20,2);
        }
        iVar5 = 2;
        *(arg2 + 0x10) = *(arg2 + 8) + 2 + *(*(arg2 + 8) + 1);
    }
    iVar4 = iVar5;
    uVar6 = iVar4 + 1;
    **(arg2 + iVar5 * 8) = 0x37;
    *(*(arg2 + iVar5 * 8) + 1) = 0x23;
    iVar1 = *(arg2 + iVar5 * 8);
    *(iVar1 + 2) = 0x4030201;
    *(iVar1 + 6) = 0xd0c0605;
    *(iVar1 + 10) = 0x1612110f;
    *(iVar1 + 0xe) = 0x29281c17;
    *(iVar1 + 0x12) = 0x33322b2a;
    *(iVar1 + 0x16) = 0x3c3b3a36;
    *(iVar1 + 0x1a) = 0x80614342;
    *(iVar1 + 0x1e) = 0x84838281;
    *(iVar1 + 0x22) = 0x8685;
    *(iVar1 + 0x24) = 0x87;
    iVar5 = *(arg2 + iVar5 * 8);
    puVar3 = iVar5 + 2 + *(iVar5 + 1);
    *(arg2 + uVar6 * 8) = puVar3;
    *puVar3 = 0x61;
    *(*(arg2 + uVar6 * 8) + 1) = 0x11;
    iVar5 = *(arg2 + uVar6 * 8);
    uVar7 = iVar4 + 2;
    *(iVar5 + 2) = 0;
    iVar1 = *(arg2 + uVar6 * 8);
    *(arg2 + uVar7 * 8) = iVar1 + *(iVar1 + 1) + 2;
    iVar1 = fcn.0001ca28(iVar5 + 3);
    if (iVar1 < 0) {
        fcn.000102c0(iVar5 + 3,0x10);
    }
    **(arg2 + uVar7 * 8) = 0x5e;
    *(*(arg2 + uVar7 * 8) + 1) = 3;
    iVar5 = *(arg2 + uVar7 * 8);
    if (*(arg1 + 0x100) == 0) {
        *(iVar5 + 2) = 0x301;
        *(iVar5 + 4) = 0;
    }
    else {
        *(iVar5 + 2) = *(*(arg1 + 0x100) + 0x20);
        *(iVar5 + 3) = *(*(arg1 + 0x100) + 0x21);
        *(iVar5 + 4) = *(*(arg1 + 0x100) + 0x22);
    }
    uVar6 = iVar4 + 3;
    iVar5 = *(arg2 + (iVar4 + 2) * 8);
    puVar3 = *(iVar5 + 1) + 2 + iVar5;
    *(arg2 + uVar6 * 8) = puVar3;
    *puVar3 = 0x5d;
    *(*(arg2 + uVar6 * 8) + 1) = 2;
    auStackX_20[0] = 0x700;
    puVar2 = *(arg2 + uVar6 * 8) + 2;
    if (puVar2 != auStackX_20) {
        section..text(puVar2,auStackX_20,2);
    }
    uVar6 = iVar4 + 4;
    iVar5 = *(arg2 + (iVar4 + 3) * 8);
    puVar3 = *(iVar5 + 1) + iVar5 + 2;
    *(arg2 + uVar6 * 8) = puVar3;
    *puVar3 = 0x3c;
    *(*(arg2 + uVar6 * 8) + 1) = 0x20;
    iVar5 = *(arg2 + uVar6 * 8);
    if (iVar5 + 2 != "PXEClient:Arch:xxxxx:UNDI:003000") {
        section..text(iVar5 + 2,0x1e560,0x20);
    }
    fcn.00015b38(7,iVar5 + 0x11,5);
    if (*(arg1 + 0x100) != 0) {
        iVar1 = *(arg1 + 0x100) + 0x1c;
        if (iVar5 + 0x17 != iVar1) {
            section..text(iVar5 + 0x17,iVar1,4);
        }
        fcn.00015b38(*(*(arg1 + 0x100) + 0x21),iVar5 + 0x1c,3);
        fcn.00015b38(*(*(arg1 + 0x100) + 0x22),iVar5 + 0x1f,3);
    }
    return iVar4 + 5;
}


/* fcn.00017b34 @ 0x17b34 */

uint64_t fcn.00017b34(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t arg1_00;
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_01;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t arg2_00;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *(arg1_01 + 0x4074) - 1;
    uVar8 = 0;
    uVar7 = uVar3 * 0x688;
    uVar4 = 0;
    arg2_00 = arg1_01 + 0x4080 + uVar7;
    if (*(arg2_00 + 0x5c8) == 3) {
        iVar2 = fcn.0001770c(arg1_01,uVar3);
        if (iVar2 < 0) {
            return 0x8000000000000010;
        }
    }
    else if (*(arg2_00 + 0x5c8) == 0) {
        if (*(arg1_01 + 0x2b52) == '\0') {
            if (*(arg2_00 + 0x600) != 0) goto code_r0x00017d49;
            uVar3 = 0x800000000000000e;
        }
        else {
            uVar5 = uVar8;
            if (*(arg1_01 + 0x2b51) == '\0') {
                if (*(arg1_01 + 0xa900) == 0) {
                    return 0x8000000000000010;
                }
                do {
                    iVar1 = *(uVar5 * 0x688 + 0x4648 + arg1_01);
                    iVar2 = uVar5 * 0x688 + 0x4098 + arg1_01;
                    if (iVar2 == 0x1ec10) {
code_r0x00017c89:
                        if ((iVar1 != 6) || (iVar2 = fcn.0001770c(arg1_01,uVar5), -1 < iVar2)) {
                            *(arg1_01 + 0x4078) = iVar1;
                            uVar3 = 0;
                            goto code_r0x00017cb5;
                        }
                    }
                    else {
                        uVar7 = 0;
                        iVar2 = fcn.000102e0(iVar2,0x1ec10,4);
                        if (iVar2 == 0) goto code_r0x00017c89;
                    }
                    uVar4 = uVar5 + 1;
                    uVar5 = uVar4;
                    if (*(arg1_01 + 0xa900) <= uVar4) {
                        return 0x8000000000000010;
                    }
                } while( true );
            }
            if (*(arg1_01 + 0x4078) == 6) {
                uVar3 = uVar8;
                if (*(arg1_01 + 0xa91c) != 0) {
                    do {
                        uVar4 = uVar3;
                        uVar5 = *(arg1_01 + 0xa924 + (*(arg1_01 + 0x4078) * 0x10 + uVar3) * 4);
                        iVar2 = fcn.0001770c(arg1_01,uVar5);
                        if (-1 < iVar2) break;
                        uVar4 = uVar4 + 1;
                        uVar3 = uVar4;
                    } while (uVar4 < *(arg1_01 + 0xa904 + *(arg1_01 + 0x4078) * 4));
                }
                uVar3 = 0x8000000000000010;
                if (uVar4 != *(arg1_01 + 0xa904 + *(arg1_01 + 0x4078) * 4)) {
                    uVar3 = uVar8;
                }
            }
            else {
                uVar5 = *(*(arg1_01 + 0x4078) * 0x40 + 0xa924 + arg1_01);
                uVar3 = uVar8;
            }
code_r0x00017cb5:
            if (uVar3 < 0) {
                return uVar3;
            }
            if (*(arg1_01 + 0x4078) != 6) {
                iVar2 = *(arg1_01 + 0x170);
                iVar6 = uVar5 * 0x688;
                uVar3 = fcn.00017410(arg1_01 + 0x2bd8,arg1_01 + 0x4080 + iVar6);
                if (-1 < uVar3) {
                    fcn.00017460(arg1_01 + 0x2bd8);
                    uVar7 = *(iVar6 + 0x4084 + arg1_01);
                    iVar6 = arg1_01 + 0x4088 + iVar6;
                    arg1_00 = iVar2 + 0xbb4;
                    if ((uVar7 != 0) && (arg1_00 != iVar6)) {
                        section..text(arg1_00,iVar6,uVar7);
                    }
                    *(iVar2 + 10) = 1;
                    uVar3 = uVar8;
                }
            }
        }
        if (uVar3 < 0) {
            return uVar3;
        }
    }
code_r0x00017d49:
    iVar2 = *(arg1_01 + 0x170);
    if (*(arg2_00 + 0x5c8) != 7) {
        arg2_00 = arg1_01 + 0x3260;
    }
    uVar7 = fcn.00017690(arg1_01,arg2_00,CONCAT71(uVar7 >> 8,1));
    if (-1 < uVar7) {
        *(iVar2 + 8) = 1;
        return uVar7;
    }
    return uVar7;
}


/* fcn.0001b6c8 @ 0x1b6c8 */

ulong fcn.0001b6c8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = 0x7e;
    uVar1 = fcn.0001b69c(arg2,0x7e);
    if (uVar2 < uVar1) {
        uVar1 = uVar2;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + uVar1 + 1) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x0001b72e;
    }
    if (arg2 < arg1 + 0x7f) {
        return 0x800000000000000f;
    }
code_r0x0001b72e:
    if (uVar1 != 0) {
        arg2 = arg2 - arg1;
        do {
            if (*(arg1 + arg2) == '\0') break;
            *arg1 = *(arg1 + arg2);
            arg1 = arg1 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.0001b5e4 @ 0x1b5e4 */

uint64_t fcn.0001b5e4(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uStackX_8;
    
    uVar3 = 0;
    if ((arg1 != 0) && (uVar2 = fcn.0001b69c(arg1,0xf4241), uVar2 < 0xf4241)) {
        for (; (*arg1 == ' ' || (*arg1 == '\t')); arg1 = arg1 + 1) {
        }
        for (; *arg1 == '0'; arg1 = arg1 + 1) {
        }
        while( true ) {
            if (9 < *arg1 - 0x30U) {
                return uVar3;
            }
            cVar1 = *arg1;
            if (~(cVar1 + -0x30) / 10 < uVar3) break;
            arg1 = arg1 + 1;
            uVar3 = cVar1 + -0x30 + uVar3 * 10;
        }
        return 0xffffffffffffffff;
    }
    return uStackX_8;
}


/* fcn.0001b918 @ 0x1b918 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001b918(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
                iVar2 = fcn.0001b758(arg1_01,&pcStackX_20,&uStackX_8);
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
            iVar2 = fcn.0001b824(arg1_01,&pcStackX_20,&uStackX_8);
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
            if (uVar3 == 0x10) goto code_r0x0001ba78;
        }
        arg1 = arg1_01 + 1;
        arg1_01 = arg1;
    } while (uVar3 < 0x11);
    if (uVar3 == 0x10) {
code_r0x0001ba78:
        if (arg3_00 != 0x10) {
            return 0x8000000000000003;
        }
        if (uVar3 != 0x10) goto code_r0x0001ba86;
    }
    else {
code_r0x0001ba86:
        if (arg3_00 == 0x10) {
            return 0x8000000000000003;
        }
        if (arg3_00 == 0) goto code_r0x0001baac;
    }
    if (arg3 != auStack_48) {
        section..text(arg3,auStack_48,arg3_00);
    }
code_r0x0001baac:
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


/* fcn.000195d8 @ 0x195d8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_14h

int64_t fcn.000195d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    char acStackX_8 [8];
    int64_t iStackX_20;
    uint32_t var_30h_2;
    int64_t var_48h;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t var_50h;
    int64_t var_48h_2;
    int64_t var_40h;
    uint uStack_3c;
    int64_t var_30h;
    int64_t var_bp_28h;
    int32_t var_14h;
    int64_t var_bp_10h;
    
    iVar1 = *(arg1 + 0x2ba8);
    iStackX_20 = 0;
    iStack_78 = 0;
    fcn.000102c0(&iStack_70,0x20);
    iVar2 = fcn.0001c2ec(*(arg1 + 8),*(arg1 + 0x10),0x1de50,&iStack_78);
    if ((-1 < iVar2) &&
       (iVar2 = (**(*0x1ebd8 + 0x118))(iStack_78,0x1df50,&iStackX_20,*(arg1 + 0x10),*(arg1 + 8),0x10), -1 < iVar2)
       ) {
        fcn.000102c0(&var_48h_2,0x28);
        uStack_3c = 1;
        var_48h_2._0_2_ = 0x1101;
        var_30h = iVar1;
        if (&var_48h_2 + 2 != arg1 + 0x2b54) {
            section..text(&var_48h_2 + 2,arg1 + 0x2b54,0x10);
        }
        iVar2 = (**(iStackX_20 + 8))(iStackX_20,&var_48h_2);
        if (-1 < iVar2) {
            acStackX_8[0] = '\0';
            iStack_68 = -0x7ffffffffffffffa;
            iVar2 = (**(*0x1ebd8 + 0x50))(0x200,0x10,0x149c8,acStackX_8,&iStack_70);
            if ((-1 < iVar2) && (iVar2 = (**(iStackX_20 + 0x10))(iStackX_20,arg2,&iStack_70), -1 < iVar2)) {
                while (acStackX_8[0] == '\0') {
                    (**(iStackX_20 + 0x30))(iStackX_20);
                }
                iVar2 = iStack_68;
                if (-1 < iStack_68) {
                    if (((var_50h == 0) || (*var_50h == 0)) || (iVar2 = *(var_50h + 8), iVar2 == 0)) {
                        iVar2 = -0x7ffffffffffffff9;
                    }
                    else {
                        if (arg3 != iVar2) {
                            section..text(arg3,iVar2,0x10);
                        }
                        iVar2 = 0;
                    }
                }
            }
        }
    }
    (**(*0x1ebd8 + 0x48))(arg2);
    if (iStack_70 != 0) {
        (**(*0x1ebd8 + 0x70))();
    }
    if (var_50h != 0) {
        if (*(var_50h + 8) != 0) {
            (**(*0x1ebd8 + 0x48))(*(var_50h + 8));
        }
        (**(*0x1ebd8 + 0x48))(var_50h);
    }
    if (iStackX_20 != 0) {
        (**(iStackX_20 + 8))(iStackX_20,0);
        (**(*0x1ebd8 + 0x120))(iStack_78,0x1df50,*(arg1 + 0x10),*(arg1 + 8));
    }
    if (iStack_78 != 0) {
        fcn.0001c338(*(arg1 + 8),*(arg1 + 0x10),0x1de50,iStack_78);
    }
    if (iVar1 != 0) {
        (**(*0x1ebd8 + 0x48))(iVar1);
    }
    return iVar2;
}


/* fcn.0001b824 @ 0x1b824 */

ulong fcn.0001b824(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char cVar4;
    char *pcVar5;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar5 = arg1, uVar2 = fcn.0001b69c(arg1,0xf4241), uVar2 < 0xf4241)) {
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
            iVar3 = fcn.0001b580(CONCAT71(arg1 >> 8,*pcVar5));
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


/* fcn.00015c44 @ 0x15c44 */

void fcn.00015c44(int64_t arg1)

{
    uint64_t uVar1;
    uint16_t uStack_18;
    uint8_t uStack_16;
    uint8_t uStack_15;
    uint8_t uStack_14;
    uint8_t uStack_13;
    uint8_t uStack_12;
    uint32_t uStack_10;
    
    fcn.000102c0(&uStack_18,0x10);
    (**(*0x1ebe0 + 0x18))(&uStack_18,0);
    uVar1 = (uStack_12 + 0x3d595180 +
            ((uStack_14 + ((uStack_16 + (uStack_18 + uStack_18 * 2) * 4) * 0x1e + uStack_15) * 0x18) * 0x3c + uStack_13)
            * 0x3c) * 100 + uStack_10 / 10000000;
    if ((*(arg1 + 0x2a60) != 0) && (uVar1 = uVar1 - *(arg1 + 0x2a60), 0xffff < uVar1)) {
        uVar1 = 0xffff;
    }
    *(arg1 + 0x2a60) = uVar1;
    return;
}


/* fcn.00019e9c @ 0x19e9c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00019e9c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint32_t *arg1_00;
    int64_t iVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ushort auStackX_8 [4];
    ushort auStackX_10 [4];
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int16_t var_48h;
    int16_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = *(arg1 + 0x3f70);
    iVar10 = (arg2 & 0xffffffffU) * 0x688;
    auStackX_8[0] = 0xfab;
    auStackX_10[0] = 0xfab;
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffff9;
    }
    else {
        iStack_50 = iVar1;
        puVar2 = fcn.0001bb28(0x404);
        if (puVar2 == NULL) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            arg1_00 = puVar2 + 1;
            puVar6 = iVar1 + 0xc;
            *puVar2 = (*(iVar10 + 0x4088 + arg1) ^ *puVar2) & 0xff ^ *(iVar10 + 0x4088 + arg1);
            iVar7 = 4;
            *puVar2 = *(iVar1 + 8);
            iStackX_18 = 4;
            uStackX_20 = 4;
            puVar3 = arg1_00;
            if (*(iVar10 + 0x4648 + arg1) == 6) {
                puVar5 = arg1 + 0x408c + iVar10;
                puVar3 = (*(iVar10 + 0x4084 + arg1) - 4) + puVar5;
                for (; puVar5 < puVar3; puVar5 = puVar5 + (*(puVar5 + 2) << 8 | *(puVar5 + 2) >> 8) + 4) {
                    if (*puVar5 == 0x200) {
                        if (puVar5 != NULL) {
                            uVar9 = (*(puVar5 + 2) << 8 | *(puVar5 + 2) >> 8) + 4;
                            if (arg1_00 != puVar5) {
                                section..text(arg1_00,puVar5,uVar9);
                                iVar7 = iStackX_18;
                            }
                            puVar3 = arg1_00 + uVar9;
                            iVar7 = iVar7 + uVar9;
                            iStackX_18 = iVar7;
                            goto code_r0x0001a04c;
                        }
                        break;
                    }
                }
                (**(*0x1ebd8 + 0x48))(puVar2);
                iVar1 = -0x7ffffffffffffff2;
            }
            else {
code_r0x0001a04c:
                for (; uStackX_20 < *(iVar1 + 4); uStackX_20 = uStackX_20 + uVar4) {
                    uVar8 = *(puVar6 + 2) << 8 | *(puVar6 + 2) >> 8;
                    if (2 < (*puVar6 << 8 | *puVar6 >> 8) - 2) {
                        uVar9 = uVar8 + 4;
                        if (puVar3 != puVar6) {
                            section..text(puVar3,puVar6,uVar9);
                            iVar7 = iStackX_18;
                        }
                        puVar3 = puVar3 + uVar9;
                        iVar7 = iVar7 + uVar9;
                        iVar1 = iStack_50;
                        iStackX_18 = iVar7;
                    }
                    uVar4 = uVar8 + 4;
                    puVar6 = puVar6 + uVar4;
                }
                puVar6 = (uStackX_20 - 4) + arg1_00;
                for (; arg1_00 < puVar6; arg1_00 = arg1_00 + (*(arg1_00 + 2) << 8 | *(arg1_00 + 2) >> 8) + 4) {
                    if (*arg1_00 == 0x800) {
                        if (arg1_00 != NULL) {
                            fcn.00015c44(arg1);
                            *(arg1_00 + 1) = *(arg1 + 0x2a60) << 8 | *(arg1 + 0x2a60) >> 8;
                        }
                        break;
                    }
                }
                iVar1 = (**(arg1 + 0x138))(arg1 + 0x108,0,arg1 + 0x2b94,auStackX_10,0,arg1 + 0x2b64,auStackX_8,0
                                           ,0,&iStackX_18,puVar2);
                if (-1 < iVar1) {
                    uStack_58 = *(arg1 + 0x2bd8);
                    iVar1 = (**(*(arg1 + 0xe8) + 8))(*(arg1 + 0xe8),arg1 + 0x2a8c);
                    if (-1 < iVar1) {
                        iVar1 = (**(arg1 + 0x140))(arg1 + 0x108,5,0,auStackX_8,arg1 + 0x2b94,auStackX_10,0,0,
                                                   &uStack_58,arg1 + 0x2be0);
                        (**(*(arg1 + 0xe8) + 8))(*(arg1 + 0xe8),0);
                        if (-1 < iVar1) {
                            *(arg1 + 0x2bdc) = uStack_58;
                            return 0;
                        }
                    }
                }
                (**(*0x1ebd8 + 0x48))(puVar2);
            }
        }
    }
    return iVar1;
}


/* fcn.0001a1a8 @ 0x1a1a8 */

int64_t fcn.0001a1a8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(arg1_00 + 0x170);
    *(arg1_00 + 0x2b53) = 0;
    iVar2 = *((arg2 & 0xffffffffU) * 0x688 + 0x4658 + arg1_00);
    if (iVar2 == 0) {
        if (arg1_00 + 0x2b94 != 0x1e1d0) {
            section..text(arg1_00 + 0x2b94,0x1e1d0,0x10);
        }
    }
    else {
        iVar2 = fcn.0001984c(arg1_00,arg1 + 0x2bc0,arg1 + 0x2b94,iVar2 + 4);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    iVar2 = fcn.00019e9c(arg1_00,arg2 & 0xffffffffU);
    if ((-1 < iVar2) && (iVar2 = fcn.00019c9c(arg1_00 + 0x2bd8), -1 < iVar2)) {
        if ((*(arg1_00 + 0x31a0) - 4U < 2) || (*(arg1_00 + 0x31b0) != 0)) {
            *(iVar1 + 10) = 1;
            iVar1 = iVar1 + 0xbb4;
            if ((*(arg1_00 + 0x2bdc) != 0) && (iVar1 != arg1_00 + 0x2be0)) {
                section..text(iVar1,arg1_00 + 0x2be0,*(arg1_00 + 0x2bdc));
            }
            iVar2 = 0;
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.00019e20 @ 0x19e20 */

int64_t fcn.00019e20(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = *(arg1 + 0x170);
    iVar2 = fcn.00017410(arg1 + 0x3260,arg2);
    if (-1 < iVar2) {
        if (arg3 != '\0') {
            fcn.00019c9c(arg1 + 0x3260);
            iVar2 = iVar1 + 0x5f4;
            if ((*(arg2 + 4) != 0) && (iVar2 != arg2 + 8)) {
                section..text(iVar2,arg2 + 8,*(arg2 + 4));
            }
            *(iVar1 + 9) = 1;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001a76c @ 0x1a76c */

uint64_t fcn.0001a76c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint64_t arg3_00;
    int64_t arg2_00;
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
    
    puVar11 = *(arg1 + 200);
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
            iVar4 = arg1 + 0x2b94;
            uVar9 = uVar6;
            uVar10 = uVar6;
            iStack_f0 = iVar4;
            do {
                uVar5 = *(uVar10 + 0x20 + iStack_80);
                arg2_00 = iStack_80 + 0x10 + uVar10;
                if (uVar5 == 0) {
code_r0x0001a990:
                    iVar4 = uVar9 * 0x21 + iStack_80;
                    if (arg3 != iVar4) {
                        section..text(arg3,iVar4,0x10);
                    }
                    bVar1 = true;
                    uVar9 = uStack_100;
                    puVar11 = puStack_f8;
                    goto code_r0x0001a8a7;
                }
                uVar8 = uVar5 >> 3;
                arg3_00 = uVar8;
                if ((uVar8 == 0) || (iVar4 == arg2_00)) {
                    uVar3 = uVar6;
                }
                else {
                    uVar3 = fcn.000102e0(iVar4,arg2_00,arg3_00);
                    uVar7 = uStack_88;
                    iVar4 = iStack_f0;
                }
                if ((uVar3 == 0) &&
                   (((uVar5 & 7) == 0 ||
                    ((uVar5 = -1 << (8 - (uVar5 & 7) & 0x1f), uVar8 < 0x10 &&
                     ((*(arg3_00 + iVar4) & uVar5) == (*(arg3_00 + arg2_00) & uVar5))))))) goto code_r0x0001a990;
                uVar9 = uVar9 + 1;
                uVar10 = uVar10 + 0x21;
            } while (uVar9 < uVar7);
            uVar9 = uStack_100;
            puVar11 = puStack_f8;
        }
code_r0x0001a8a7:
        if (iStack_a0 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iStack_90 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iStack_80 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iStack_70 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iStack_60 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iStack_50 != 0) {
            (**(*0x1ebd8 + 0x48))();
        }
        if ((bVar1) || (uVar9 == 10)) break;
        uVar9 = uVar9 + 1;
        uStack_100 = uVar9;
        if (((iStack_108 == 0) && (uVar2 = (**(*0x1ebd8 + 0x50))(0x80000000,8,0,0,&iStack_108), uVar2 < 0)) ||
           (uVar2 = (**(*0x1ebd8 + 0x58))(iStack_108,2,10000000), uVar2 < 0)) break;
        while (iVar4 = (**(*0x1ebd8 + 0x78))(iStack_108), iVar4 < 0) {
            (*puVar11[8])(puVar11);
        }
        uVar2 = (**puVar11)(puVar11,auStack_e8,0);
    }
    if (iStack_108 != 0) {
        (**(*0x1ebd8 + 0x70))();
    }
    if ((!bVar1) && (uVar6 = uVar2, uVar9 == 10)) {
        uVar6 = 0x8000000000000012;
    }
    return uVar6;
}


/* fcn.0001a3a0 @ 0x1a3a0 */

void fcn.0001a3a0(uint32_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    *(iVar3 + 0x4074) = 0;
    if (*(iVar3 + 0x2b51) == '\0') {
        if (*(iVar3 + 0xa900) != 0) {
            do {
                uVar5 = uVar4;
                iVar2 = *(uVar4 * 0x688 + 0x4648 + iVar3);
                if ((2 < iVar2 - 4U) &&
                   (((*(iVar3 + 0x2b52) != '\0' || (iVar2 != 0)) || (*(uVar4 * 0x688 + 0x4658 + iVar3) != 0))))
                goto code_r0x0001a4f0;
                uVar4 = uVar5 + 1;
            } while (uVar5 + 1 < *(iVar3 + 0xa900));
        }
        return;
    }
    if (*(iVar3 + 0xa908) == 0) {
        if (*(iVar3 + 0xa90c) == 0) {
            uVar1 = *(iVar3 + 0xa904);
            if (uVar1 != 0) {
                if (*(iVar3 + 0xa914) != 0) {
                    *(iVar3 + 0x4078) = 4;
                    *(iVar3 + 0x4074) = *(iVar3 + 0xa924) + 1;
                    return;
                }
                if ((uVar1 != 0) && (*(iVar3 + 0xa918) != 0)) {
                    *(iVar3 + 0x4078) = 5;
                    *(iVar3 + 0x4074) = *(iVar3 + 0xa924) + 1;
                    return;
                }
            }
            if (*(iVar3 + 0xa910) == 0) {
                if ((uVar1 != 0) && (*(iVar3 + 0xa91c) != 0)) {
                    *(iVar3 + 0x4078) = 6;
                    *(iVar3 + 0x4074) = *(iVar3 + 0xa924) + 1;
                    return;
                }
                if (uVar1 == 0) {
                    return;
                }
                while( true ) {
                    uVar5 = *(iVar3 + 0xa924 + uVar4 * 4);
                    if (*(uVar5 * 0x688 + 0x4658 + iVar3) != 0) break;
                    uVar5 = uVar4 + 1;
                    uVar4 = uVar5;
                    if (uVar1 <= uVar5) {
                        return;
                    }
                }
code_r0x0001a4f0:
                *(iVar3 + 0x4074) = uVar5 + 1;
                return;
            }
            iVar2 = *(iVar3 + 0xa9e4);
        }
        else {
            iVar2 = *(iVar3 + 0xa9a4);
        }
    }
    else {
        iVar2 = *(iVar3 + 0xa964);
    }
    *(iVar3 + 0x4074) = iVar2 + 1;
    return;
}


/* fcn.0001a2a4 @ 0x1a2a4 */

int64_t fcn.0001a2a4(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = *(arg1 + 0xa900) * 0x688;
    iVar3 = fcn.00017410(arg1 + 0x4080 + iVar4,arg2);
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = fcn.00019c9c(arg1 + 0x4080 + iVar4);
    if (iVar3 < 0) {
code_r0x0001a388:
        iVar3 = -0x7fffffffffffffeb;
    }
    else {
        iVar2 = *(iVar4 + 0x4648 + arg1);
        iVar3 = iVar2;
        if (iVar2 - 4U < 3) {
            *(arg1 + 0x2b52) = 1;
            if (iVar2 == 6) {
                *(arg1 + 0xaaa4 + *(arg1 + 0xa91c) * 4) = *(arg1 + 0xa900);
                *(arg1 + 0xa91c) = *(arg1 + 0xa91c) + 1;
            }
            else {
                if ((1 < iVar2 - 4U) || (iVar4 = arg1 + iVar3 * 4, *(iVar4 + 0xa904) != 0)) goto code_r0x0001a388;
                *(iVar3 * 0x40 + 0xa924 + arg1) = *(arg1 + 0xa900);
                *(iVar4 + 0xa904) = 1;
            }
        }
        else {
            iVar4 = arg1 + iVar3 * 4;
            *(arg1 + 0xa924 + (iVar3 * 0x10 + *(iVar4 + 0xa904)) * 4) = *(arg1 + 0xa900);
            piVar1 = iVar4 + 0xa904;
            *piVar1 = *piVar1 + 1;
        }
        *(arg1 + 0xa900) = *(arg1 + 0xa900) + 1;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.000193f4 @ 0x193f4 */

ulong fcn.000193f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    ushort auStackX_8 [4];
    
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
    if (*(arg1 + 0x100) == 0) {
        *(iVar2 + 4) = 0x301;
        *(iVar2 + 6) = 0;
    }
    else {
        *(iVar2 + 4) = *(*(arg1 + 0x100) + 0x20);
        *(iVar2 + 5) = *(*(arg1 + 0x100) + 0x21);
        *(iVar2 + 6) = *(*(arg1 + 0x100) + 0x22);
    }
    uVar1 = *(*(arg2 + 8) + 2);
    puVar3 = *(arg2 + 8) + 4 + (uVar1 << 8 | uVar1 >> 8);
    *(arg2 + 0x10) = puVar3;
    *puVar3 = 0x3d00;
    *(*(arg2 + 0x10) + 2) = 0x200;
    auStackX_8[0] = 0x700;
    puVar3 = *(arg2 + 0x10) + 4;
    if (puVar3 != auStackX_8) {
        section..text(puVar3,auStackX_8,2);
    }
    uVar1 = *(*(arg2 + 0x10) + 2);
    puVar3 = *(arg2 + 0x10) + 4 + (uVar1 << 8 | uVar1 >> 8);
    *(arg2 + 0x18) = puVar3;
    *puVar3 = 0x1000;
    *(*(arg2 + 0x18) + 2) = 0x2600;
    iVar2 = *(arg2 + 0x18);
    *(iVar2 + 4) = 0x57010000;
    *(iVar2 + 8) = 0x2000;
    if (iVar2 + 10 != "PXEClient:Arch:xxxxx:UNDI:003000") {
        section..text(iVar2 + 10,0x1e560,0x20);
    }
    fcn.00015b38(7,iVar2 + 0x19,5);
    if (*(arg1 + 0x100) != 0) {
        iVar4 = *(arg1 + 0x100) + 0x1c;
        if (iVar2 + 0x1f != iVar4) {
            section..text(iVar2 + 0x1f,iVar4,4);
        }
        fcn.00015b38(*(*(arg1 + 0x100) + 0x21),iVar2 + 0x24,3);
        fcn.00015b38(*(*(arg1 + 0x100) + 0x22),iVar2 + 0x27,3);
    }
    return 4;
}


/* fcn.0001a4f8 @ 0x1a4f8 */

uint64_t fcn.0001a4f8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint16_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t arg1_00;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    
    uVar5 = 0;
    uVar9 = *(arg1 + 0x4074) - 1;
    uVar7 = 0;
    iVar8 = uVar9 * 0x688;
    iVar3 = *(arg1 + 0x4670 + iVar8);
    if (iVar3 != 0) {
        uVar1 = *(iVar3 + 2);
        iVar3 = fcn.0001bb28(uVar1 << 8 | uVar1 >> 8);
        *(arg1 + 0x2ba8) = iVar3;
        if (iVar3 == 0) {
            return 0x8000000000000009;
        }
        iVar6 = *(arg1 + 0x4670 + iVar8) + 4;
        if (iVar3 != iVar6) {
            arg2 = 0x10;
            section..text(iVar3,iVar6,0x10);
        }
    }
    iVar2 = *(arg1 + 0x4648 + iVar8);
    arg1_00 = arg1;
    if (iVar2 == 3) {
        iVar3 = fcn.0001a1a8(arg1_00,uVar9,arg2);
        if (iVar3 < 0) {
            return 0x8000000000000010;
        }
    }
    else if ((iVar2 == 0) && (*(arg1 + 0x2b52) != '\0')) {
        uVar10 = uVar5;
        if (*(arg1 + 0x2b51) == '\0') {
            if (*(arg1 + 0xa900) == 0) {
                return 0x8000000000000010;
            }
            do {
                iVar2 = *(uVar10 * 0x688 + 0x4648 + arg1);
                if (iVar2 == 6) {
                    iVar3 = fcn.0001a1a8(arg1_00,uVar10,arg2);
                    if (-1 < iVar3) goto code_r0x0001a683;
                }
                else if (iVar2 - 4U < 2) {
code_r0x0001a683:
                    *(arg1 + 0x4078) = iVar2;
                    uVar4 = 0;
                    goto code_r0x0001a68c;
                }
                uVar7 = uVar10 + 1;
                uVar10 = uVar7;
                if (*(arg1 + 0xa900) <= uVar7) {
                    return 0x8000000000000010;
                }
            } while( true );
        }
        if (*(arg1 + 0x4078) == 6) {
            uVar4 = uVar5;
            if (*(arg1 + 0xa91c) != 0) {
                do {
                    uVar7 = uVar4;
                    uVar10 = *(arg1 + 0xa924 + (*(arg1 + 0x4078) * 0x10 + uVar4) * 4);
                    iVar3 = fcn.0001a1a8(arg1_00,uVar10,arg2);
                    if (-1 < iVar3) break;
                    uVar7 = uVar7 + 1;
                    uVar4 = uVar7;
                } while (uVar7 < *(arg1 + 0xa904 + *(arg1 + 0x4078) * 4));
            }
            uVar4 = 0x8000000000000010;
            if (uVar7 != *(arg1 + 0xa904 + *(arg1 + 0x4078) * 4)) {
                uVar4 = uVar5;
            }
        }
        else {
            uVar10 = *(*(arg1 + 0x4078) * 0x40 + 0xa924 + arg1);
            uVar4 = uVar5;
        }
code_r0x0001a68c:
        if (uVar4 < 0) {
            return uVar4;
        }
        if (*(arg1 + 0x4078) != 6) {
            iVar3 = *(arg1 + 0x170);
            iVar8 = uVar10 * 0x688;
            uVar4 = fcn.00017410(arg1 + 0x2bd8,arg1 + 0x4080 + iVar8);
            if (-1 < uVar4) {
                fcn.00019c9c(arg1 + 0x2bd8);
                arg2 = *(iVar8 + 0x4084 + arg1);
                iVar8 = arg1 + 0x4088 + iVar8;
                iVar6 = iVar3 + 0xbb4;
                if ((arg2 != 0) && (iVar6 != iVar8)) {
                    section..text(iVar6,iVar8,arg2);
                }
                *(iVar3 + 10) = 1;
                uVar4 = uVar5;
            }
        }
        if (uVar4 < 0) {
            return uVar4;
        }
    }
    uVar5 = fcn.00019e20(arg1,arg1 + 0x3260,CONCAT71(arg2 >> 8,1));
    *(*(arg1 + 0x170) + 8) = 1;
    return uVar5;
}


/* fcn.0001b580 @ 0x1b580 */

int64_t fcn.0001b580(int64_t arg1)

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


/* fcn.0001b758 @ 0x1b758 */

ulong fcn.0001b758(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    char *pcVar3;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar3 = arg1, uVar2 = fcn.0001b69c(arg1,0xf4241), uVar2 < 0xf4241)) {
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


/* fcn.0001bb94 @ 0x1bb94 */

bool fcn.0001bb94(uint32_t arg1)

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


/* fcn.0001bbf0 @ 0x1bbf0 */

char * fcn.0001bbf0(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001bb94(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.0001bb54 @ 0x1bb54 */

void fcn.0001bb54(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001baf8();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001bc40 @ 0x1bc40 */

int64_t fcn.0001bc40(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1e62c;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.0001bb94(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.0001bb94(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.0001bbf0(arg1);
        iVar4 = fcn.0001bbf0(arg2);
        iVar2 = fcn.0001baf8();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.0001bbf0(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001bb54(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.0001b5b0 @ 0x1b5b0 */

int64_t fcn.0001b5b0(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.0001bea0 @ 0x1bea0 */

ulong fcn.0001bea0(int64_t arg1,int64_t arg2)

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
        iVar2 = fcn.0001b5b0(arg1,arg2,iVar3);
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


/* fcn.0001be0c @ 0x1be0c */

ulong fcn.0001be0c(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1ebd8 + 0x98))(param_1,0x1de10,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0001c598 @ 0x1c598 */

int64_t fcn.0001c598(int64_t arg1,int64_t arg2)

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
    iVar5 = fcn.0001c384(arg1,&iStackX_20);
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
            if ((uVar3 != 0) && (iVar7 = fcn.0001bb54(iVar5,uVar3 << 5,puVar4 + 10), uVar9 = 0, iVar7 == 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar5 = (**(iVar8 + 0x28))(iVar8);
            if ((((-1 < iVar5) && (iVar5 = (**(iVar8 + 0x10))(iVar8), -1 < iVar5)) &&
                (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) && (iVar5 = (**(iVar8 + 0x18))(iVar8,0,0), -1 < iVar5)
               ) {
                *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                iVar8 = (**(iVar8 + 0x30))(iVar8,uVar2,uVar1 ^ uVar2,uVar9,uVar3,iVar7);
                if (iVar7 != 0) {
                    (**(*0x1ebd8 + 0x48))(iVar7);
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
            (**(*0x1ebd8 + 0x48))(iVar7);
        }
        return iVar5;
    }
    *arg2 = 1;
    return 0;
}


/* fcn.0001be40 @ 0x1be40 */

ulong fcn.0001be40(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1ebd0;
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


/* fcn.0001caec @ 0x1caec */

void fcn.0001caec(void)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    int64_t aiStackX_10 [3];
    
    auStackX_8[0] = 0;
    aiStackX_10[0] = 0;
    iVar1 = (**(*0x1ebd8 + 0x140))(0x1ded0,0,aiStackX_10);
    if (-1 < iVar1) {
        iVar1 = *(*(aiStackX_10[0] + 0x18) + 8);
        (**(aiStackX_10[0] + 0x10))(aiStackX_10[0],auStackX_8,0,0,0,0,0,*(iVar1 + 4),*(iVar1 + 8),0);
    }
    return;
}


/* fcn.0001c798 @ 0x1c798 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001c798(int64_t arg1,int64_t arg2,int64_t arg3)

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
    iVar1 = fcn.0001c384(arg1,acStackX_18);
    if (iVar1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = (**(*0x1ebd8 + 0x98))(iVar1,0x1ddb0,&puStack_40);
    if (-1 < iVar1) {
        iVar1 = (**puStack_40)(puStack_40,0x1df70,&puStackX_20,auStack_38);
        if (-1 < iVar1) {
            *arg3 = *puStackX_20;
            (**(*0x1ebd8 + 0x48))();
            if ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2)) {
                uStack_48 = 0;
                iVar1 = (**(*0x1ebd8 + 0x50))(0x80000000,8,0,0,&uStack_48);
                if (iVar1 < 0) {
                    return -0x7ffffffffffffff9;
                }
                do {
                    iVar1 = (**(*0x1ebd8 + 0x58))(uStack_48,2,1000000);
                    if (iVar1 < 0) {
                        iVar1 = -0x7ffffffffffffff9;
code_r0x0001c989:
                        (**(*0x1ebd8 + 0x70))(uStack_48);
                        return iVar1;
                    }
                    do {
                        iVar2 = (**(*0x1ebd8 + 0x78))(uStack_48);
                        if (-1 < iVar2) {
                            arg2 = arg2 - 1000000;
                            iVar1 = (**puStack_40)(puStack_40,0x1df70,&puStackX_20,auStack_38);
                            if (iVar1 < 0) {
                                if (puStackX_20 != NULL) {
                                    (**(*0x1ebd8 + 0x48))();
                                }
                                goto code_r0x0001c989;
                            }
                            *arg3 = *puStackX_20;
                            (**(*0x1ebd8 + 0x48))();
                        }
                    } while (iVar2 == -0x7ffffffffffffffa);
                } while ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2));
                (**(*0x1ebd8 + 0x70))(uStack_48);
                if ((*arg3 == -0x7ffffffffffffffa) && (arg2 < 1000000)) {
                    return -0x7fffffffffffffee;
                }
            }
            return 0;
        }
        if (puStackX_20 != NULL) {
            (**(*0x1ebd8 + 0x48))();
        }
        if (iVar1 != -0x7ffffffffffffffd) {
            return iVar1;
        }
    }
    acStackX_18[0] = '\x01';
    iVar1 = fcn.0001c598(arg1,acStackX_18);
    if (-1 < iVar1) {
        *arg3 = ~-(acStackX_18[0] != '\0') & 0x800000000000000c;
    }
    return iVar1;
}


/* fcn.0001b670 @ 0x1b670 */

uint64_t fcn.0001b670(uint32_t arg1)

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


/* fcn.0001dd1c @ 0x1dd1c */

void fcn.0001dd1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001cfac(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001cf78 @ 0x1cf78 */

uchar * fcn.0001cf78(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


