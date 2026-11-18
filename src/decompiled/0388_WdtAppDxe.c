// decompiled by r2ghidra: 0388_WdtAppDxe.pe32
// functions: 4

/* entry0 @ 0x1029c */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10590 = *(arg2 + 0x60);
    *0x10598 = *(arg2 + 0x58);
    *0x10588 = arg2;
    fcn.000102c8(arg1,arg2);
    return;
}


/* fcn.000102c8 @ 0x102c8 */

ulong fcn.000102c8(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    uchar uVar4;
    uint in_register_00000014;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_30h;
    int64_t var_38h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    iStackX_8 = arg1;
    iVar3 = (**(*0x10590 + 0x140))(0x10520,0,aiStackX_18);
    if (-1 < iVar3) {
        aiStackX_18[1] = 1;
        iVar3 = (**(*0x10598 + 0x48))(L"WdtPersistentData",0x10510,&iStackX_8,aiStackX_18 + 1,&uStackX_10);
        uVar4 = uStackX_10;
        if (iVar3 < 0) {
            uVar4 = 0;
        }
        uStackX_10 = CONCAT71(uStackX_10._1_7_,uVar4);
        cVar1 = (**(aiStackX_18[0] + 0x20))();
        cVar2 = (**(aiStackX_18[0] + 0x28))();
        if (((cVar1 == '\x01') || (cVar2 == '\x01')) || (uStackX_10 == '\x01')) {
            fcn.0001039c();
        }
        uStackX_10 = uStackX_10 & 0xffffffffffffff00;
        (**(*0x10598 + 0x58))(L"WdtPersistentData",0x10510,3,1,&uStackX_10);
    }
    return 0;
}


/* fcn.0001039c @ 0x1039c */

ulong fcn.0001039c(void)

{
    uchar uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *apuStackX_8 [4];
    
    if (*0x10580 == '\0') {
        *0x10580 = '\x01';
        (**(*0x10590 + 0x140))(0x10520,0,apuStackX_8);
        iVar3 = fcn.000104b8();
        uVar1 = (**(iVar3 + 8))(0x247);
        (**apuStackX_8[0])(uVar1);
        (**(*0x10590 + 0x50))(0x80000200,0x10,0x10440,0,0x105a8);
        iVar3 = fcn.000104b8();
        uVar2 = (**(iVar3 + 0x18))(0x246);
        uVar4 = (**(*0x10590 + 0x58))(*0x105a8,1,uVar2);
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000104b8 @ 0x104b8 */

int64_t fcn.000104b8(void)

{
    if (*0x105a0 == 0) {
        (**(*0x10590 + 0x140))(0x10500,0,0x105a0);
    }
    return *0x105a0;
}


