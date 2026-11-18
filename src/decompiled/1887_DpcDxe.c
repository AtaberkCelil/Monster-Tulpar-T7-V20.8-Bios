// decompiled by r2ghidra: 1887_DpcDxe.pe32
// functions: 2

/* entry0 @ 0x102e0 */

void entry0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar1 = *(arg1 + 0x60);
    iVar2 = 0x106a0;
    iVar3 = 0x20;
    *0x10678 = arg1;
    *0x10680 = iVar1;
    do {
        *iVar2 = iVar2;
        *(iVar2 + 8) = iVar2;
        iVar2 = iVar2 + 0x10;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (**(iVar1 + 0x148))(0x10668,0x10600,0x10610,0);
    return;
}


/* fcn.000105b4 @ 0x105b4 */

int64_t fcn.000105b4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10680 + 0x40))(4,0x20,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


