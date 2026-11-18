// decompiled by r2ghidra: 0234_SpiDxe.pe32
// functions: 6

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    ulong noname_0;
    int64_t arg1_00;
    int64_t aiStackX_8 [4];
    
    *0x10c88 = *(arg2 + 0x60);
    noname_0 = 0x10bc0;
    arg1_00 = 0;
    *0x10c80 = arg2;
    aiStackX_8[0] = arg1;
    (**(*0x10c88 + 0x140))(0x10bc0,0,0x10c70);
    *0x10c78 = fcn.00010b6c(noname_0,arg1_00);
    aiStackX_8[0] = 0;
    (**(*0x10c88 + 0x148))(aiStackX_8,0x10be0,0x10bf0,0);
    return;
}


/* fcn.00010b6c @ 0x10b6c */

int64_t fcn.00010b6c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10c88 + 0x28))(0,6,2,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
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


/* fcn.0001034c @ 0x1034c */

ulong fcn.0001034c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t in_stack_00000028;
    
    puVar1 = *0x10c78;
    if (in_stack_00000028 != 0) {
        fcn.000102c0(*0x10c78,in_stack_00000028);
    }
    *puVar1 = *0x10bd0;
    puVar1[1] = *0x10bd8;
    puVar1[2] = arg3 + 0x10;
    puVar1[4] = 0x8000000000000006;
    puVar1[3] = arg4;
    *arg1 = puVar1;
    if (arg2 != 0) {
        *arg2 = puVar1 + 5;
    }
    return 0;
}


/* fcn.000103e8 @ 0x103e8 */

ulong fcn.000103e8(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg2 + 0x28;
    (***0x10c70)(*0x10c70,arg1,aiStackX_8);
    return *(arg1 + 0x20);
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2368 named .text
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


