// decompiled by r2ghidra: 0175_SkipStoragePwdPrompt.pe32
// functions: 3

/* entry0 @ 0x1029c */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10528 = *(arg2 + 0x60);
    *0x10520 = arg2;
    fcn.000102bc(arg1,arg2);
    return;
}


/* fcn.000102bc @ 0x102bc */

void fcn.000102bc(ulong noname_0,int64_t arg1)

{
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    (**(*0x10528 + 0x50))(0x200,8,0x10398,0,0x10538);
    (**(*0x10528 + 0xa8))(0x104b0,*0x10538,0x10510);
    (**(*0x10528 + 0x50))(0x200,8,0x1039c,0,0x10540);
    (**(*0x10528 + 0xa8))(0x104d0,*0x10540,0x10518);
    (**(*0x10528 + 0x170))(0x200,8,0x10408,0,0x104a0,aiStackX_10);
    return;
}


/* fcn.00010458 @ 0x10458 */

int64_t fcn.00010458(void)

{
    if (*0x10530 == 0) {
        (**(*0x10528 + 0x140))(0x104c0,0,0x10530);
    }
    return *0x10530;
}


