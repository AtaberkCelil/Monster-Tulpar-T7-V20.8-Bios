// decompiled by r2ghidra: 0448_NvmeHealthDxe.pe32
// functions: 7

/* entry0 @ 0x102c0 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    int64_t iStackX_8;
    uchar auStackX_10 [24];
    
    *0x10958 = *(arg2 + 0x60);
    *0x10950 = arg2;
    iStackX_8 = arg1;
    (**(*0x10958 + 0x50))(0x200,8,0x10730,0,&iStackX_8);
    (**(*0x10958 + 0xa8))(0x10920,iStackX_8,auStackX_10);
    (**(*0x10958 + 0x68))(iStackX_8);
    return 0;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.000108c8 @ 0x108c8 */

void fcn.000108c8(ulong param_1)

{
    int64_t arg1;
    
    arg1 = fcn.0001086c(param_1,0x10);
    if ((arg1 != 0) && (arg1 != 0x10910)) {
        section..text(arg1,0x10910,0x10);
    }
    return;
}


/* fcn.0001086c @ 0x1086c */

ulong fcn.0001086c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10958 + 0x40))(4,param_2,auStackX_18);
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
    
    //[00] -r-x section size 1696 named .text
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


/* fcn.0001089c @ 0x1089c */

void fcn.0001089c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001086c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010330 @ 0x10330 */

//WARNING: Variable defined which should be unmapped: var_17h

ulong fcn.00010330(int64_t arg1,ulong noname_1,int64_t arg2)

{
    ulong uVar1;
    int64_t var_17h;
    int64_t var_1fh;
    int32_t var_27h;
    int8_t var_3bh;
    int64_t var_3fh;
    int64_t var_47h;
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    int64_t var_29h;
    uchar uStack_24;
    int64_t var_19h;
    int32_t var_11h;
    int32_t var_5h;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        fcn.000102a0(&uStack_48,0x38);
        fcn.000102a0(&uStack_78,0x2c);
        fcn.000102a0(auStack_88,0x10);
        uStack_78 = uStack_78 & 0xffffff02 | 2;
        uStack_38 = 0x200;
        unique0x00008f00 = &uStack_78;
        uStack_70 = 0xffffffff;
        unique0x00008f00 = auStack_88;
        uStack_48 = 50000000;
        uStack_24 = 0;
        uStack_64 = 0x800002;
        uStack_74 = 4;
        iStack_40 = arg2;
        uVar1 = (**(arg1 + 8))(arg1,0xffffffff,&uStack_48,0);
    }
    return uVar1;
}


