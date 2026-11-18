// decompiled by r2ghidra: 0045_DataHubDxe.pe32
// functions: 6

/* entry0 @ 0x102c0 */

void entry0(ulong noname_0,int64_t arg1)

{
    *0x109c8 = *(arg1 + 0x60);
    *0x109d0 = *(arg1 + 0x58);
    *0x109c0 = arg1;
    fcn.000102ec();
    return;
}


/* fcn.000102ec @ 0x102ec */

void fcn.000102ec(void)

{
    int64_t iVar1;
    
    *0x109e0 = 0x62754844;
    *0x109f0 = 0x103d8;
    *0x10a10 = 0x10;
    *0x109f8 = 0x1064c;
    *0x10a00 = 0x1076c;
    *0x10a08 = 0x108ac;
    *0x10a30 = 0x10a30;
    *0x10a38 = 0x10a30;
    *0x10a40 = 0x10a40;
    *0x10a48 = 0x10a40;
    *0x10a18 = 4;
    *0x10a20 = 1;
    iVar1 = (**(*0x109c8 + 0xf0))(0x10a28);
    *0x109e8 = 0;
    if (iVar1 < 0) {
        *0x10a28 = 0;
    }
    //WARNING: Could not recover jumptable at 0x000103d1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x109c8 + 0x80))(0x109e8,0x10980,0,0x109f0);
    return;
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


/* fcn.0001093c @ 0x1093c */

ulong fcn.0001093c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x109c8 + 0x40))(4,param_2,auStackX_18);
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
    
    //[00] -r-x section size 1824 named .text
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


/* fcn.000105fc @ 0x105fc */

int64_t fcn.000105fc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = piVar2;
    do {
        piVar3 = *piVar3;
        if (piVar3 == piVar2) {
            return 0;
        }
        iVar1 = piVar3[2];
    } while (((*(iVar1 + 0x28) & arg2) == 0) || ((*(iVar1 + 0x40) != *arg3 && (*arg3 != 0))));
    *arg3 = 0;
    do {
        piVar3 = *piVar3;
        if (piVar3 == piVar2) {
            return iVar1;
        }
    } while ((*(piVar3[2] + 0x28) & arg2) == 0);
    *arg3 = *(piVar3[2] + 0x40);
    return iVar1;
}


