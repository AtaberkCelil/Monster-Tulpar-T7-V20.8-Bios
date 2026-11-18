// decompiled by r2ghidra: 2434_IsSecRecoveryPEI.te
// functions: 2

/* entry0 @ 0xa0 */

void entry0(uint param_1,int *param_2)

{
    //[00] -r-x section size 264 named .text
    (**(*param_2 + 0x24))(param_2,0xffd4dc30);
    return;
}


/* fcn.000000b2 @ 0xb2 */

uint __cdecl fcn.000000b2(int32_t arg_8h)

{
    int iVar1;
    int *in_ECX;
    int in_EDX;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = (**(*in_ECX + 0x20))();
    if (-1 < iVar1) {
        var_4h = 0x1d;
        iVar1 = (**in_ECX)(in_ECX,0xffd4dc44,0xffd4dc14,0,&var_4h);
        if (-1 < iVar1) {
            var_4h = 4;
            iVar1 = (**in_ECX)(in_ECX,0xffd4dc5c,0xffd4dc04,0,&var_4h,arg_8h);
            if ((iVar1 < 0) || (*(in_EDX + 0x19) == -1)) {
                *arg_8h = 0xffffffff;
            }
            return 1;
        }
    }
    return 0;
}


