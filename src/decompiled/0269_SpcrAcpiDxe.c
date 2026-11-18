// decompiled by r2ghidra: 0269_SpcrAcpiDxe.pe32
// functions: 1

/* entry0 @ 0x102c0 */

ulong entry0(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_00000014;
    int64_t aiStackX_8 [4];
    
    *0x10370 = CONCAT44(in_register_00000014,arg2);
    *0x10378 = *(*0x10370 + 0x60);
    if (*(*0x10370 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        aiStackX_8[0] = arg1;
        uVar1 = (**(*0x10378 + 0x170))(0x200,8,0x10324,0,0x10340,aiStackX_8);
    }
    return uVar1;
}


