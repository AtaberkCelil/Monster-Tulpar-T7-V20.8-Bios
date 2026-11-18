// decompiled by r2ghidra: 0224_MeSmbiosDxe.pe32
// functions: 4

/* entry0 @ 0x102c0 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t aiStackX_8 [4];
    
    *0x104d8 = *(arg2 + 0x60);
    *0x104d0 = arg2;
    if (*0xc00b0040 == -1) {
        uVar1 = 0x8000000000000003;
    }
    else {
        aiStackX_8[0] = arg1;
        uVar1 = (**(*0x104d8 + 0x170))(0x200,0x10,0x10330,0,0x10460,aiStackX_8);
    }
    return uVar1;
}


/* fcn.00010408 @ 0x10408 */

int64_t fcn.00010408(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x104d8 + 0x40))(4,0x42,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 480 named .text
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


