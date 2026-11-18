// decompiled by r2ghidra: 0573_NetworkStackSetupScreen.pe32
// functions: 2

/* entry0 @ 0x10260 */

void entry0(int64_t arg1,int64_t arg2)

{
    //[00] -r-x section size 224 named .text
    *0x10398 = *(arg2 + 0x60);
    *0x103a0 = *(arg2 + 0x58);
    *0x10390 = arg2;
    fcn.0001028c(arg1,arg2);
    return;
}


/* fcn.0001028c @ 0x1028c */

ulong fcn.0001028c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 8;
    iVar1 = (**(*0x103a0 + 0x48))(L"NetworkStackVar",0x10340,0,auStackX_10,0x103a8);
    if (iVar1 == -0x7ffffffffffffff2) {
        (**(*0x10398 + 0x168))(0x103a8,8,0);
        *0x103a8 = 0x10101;
        *0x103ae = 0;
        *0x103ad = 1;
        (**(*0x103a0 + 0x58))(L"NetworkStackVar",0x10340,7,8,0x103a8);
    }
    return 0;
}


