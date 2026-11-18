// decompiled by r2ghidra: 0150_AmiLegacyInterrupt.pe32
// functions: 2

/* entry0 @ 0x10280 */

void entry0(int64_t arg1,int64_t arg2)

{
    //[00] -r-x section size 448 named .text
    *0x104c0 = *(arg2 + 0x60);
    *0x104c8 = *(arg2 + 0x58);
    *0x104b8 = arg2;
    fcn.000102ac(arg1,arg2);
    return;
}


/* fcn.000102ac @ 0x102ac */

int64_t fcn.000102ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar *puVar2;
    uint64_t uVar3;
    int64_t aiStackX_8 [4];
    uint32_t var_ba4h;
    uint uStack_cc8;
    uint uStack_cc4;
    uint uStack_cc0;
    uint uStack_cbc;
    uchar auStack_cb8 [3172];
    char cStack_54;
    
    uStack_cc8 = 0xec87d643;
    uStack_cc4 = 0x4bb5eba4;
    uStack_cc0 = 0x3e3fe5a1;
    uStack_cbc = 0xa90db236;
    aiStackX_8[1] = 0xca9;
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x104c8 + 0x48))(L"Setup",&uStack_cc8,0,aiStackX_8 + 1,auStack_cb8);
    if ((iVar1 < 0) || (cStack_54 == '\0')) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        iVar1 = (**(*0x104c0 + 0x140))(0x10440,0,aiStackX_8);
        if (-1 < iVar1) {
            uVar3 = 0x3100;
            iVar1 = 8;
            do {
                puVar2 = uVar3 | 0xfdc40000;
                uVar3 = uVar3 + 1;
                *puVar2 = 0x80;
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            iVar1 = (**(*0x104c0 + 0x148))(0x104b0,0x10450,0x10460,0);
        }
    }
    return iVar1;
}


