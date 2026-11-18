// decompiled by r2ghidra: 2271_FspPcdInit.te
// functions: 3

/* entry0 @ 0xfd */

uint entry0(void)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint uVar4;
    
    out(0xcf8,0x80000060);
    uVar1 = in(0xcfc);
    if ((uVar1 & 1) != 0) {
        iVar2 = fcn.000001cf();
        (**(iVar2 + 0x2c))(0xffbb8dcc,0x200002,uVar1 & 0xfc000000,0);
        uVar3 = uVar1 >> 1 & 7;
        if ((uVar1 >> 1 & 7) == 0) {
            iVar2 = fcn.000001cf();
            uVar4 = 0x10000000;
        }
        else if (uVar3 == 1) {
            iVar2 = fcn.000001cf();
            uVar4 = 0x8000000;
        }
        else if (uVar3 == 2) {
            iVar2 = fcn.000001cf();
            uVar4 = 0x4000000;
        }
        else if (uVar3 == 3) {
            iVar2 = fcn.000001cf();
            uVar4 = 0x20000000;
        }
        else if (uVar3 == 4) {
            iVar2 = fcn.000001cf();
            uVar4 = 0x40000000;
        }
        else {
            if (uVar3 != 5) {
                return 0;
            }
            iVar2 = fcn.000001cf();
            uVar4 = 0x80000000;
        }
        (**(iVar2 + 0x28))(0xffbb8dcc,0x200001,uVar4);
    }
    return 0;
}


/* fcn.000001cf @ 0x1cf */

int32_t __fastcall fcn.000001cf(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000001e6(param_1,&var_4h);
    return var_4h;
}


/* fcn.000001e6 @ 0x1e6 */

void __cdecl fcn.000001e6(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffbb8dbc,0,0,arg_ch);
    return;
}


