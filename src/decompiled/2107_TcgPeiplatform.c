// decompiled by r2ghidra: 2107_TcgPeiplatform.te
// functions: 2

/* fcn.000001f2 @ 0x1f2 */

int __fastcall fcn.000001f2(int32_t param_1,int *param_2)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0;
    var_4h = param_1;
    iVar1 = (**(*param_2 + 0x20))(param_2,0x440,0,0,&var_8h);
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    else {
        (**var_8h)(param_2);
        iVar1 = (**(*param_2 + 0x4c))(param_2,0x10,&var_4h);
        if (-1 < iVar1) {
            *var_4h = 0x80000020;
            *(var_4h + 4) = 0x430;
            *(var_4h + 8) = 0x306;
            *(var_4h + 0xc) = param_1;
            iVar1 = (**(*param_2 + 0x24))(param_2,var_4h);
        }
    }
    return iVar1;
}


/* entry0 @ 0x179 */

int entry0(int32_t param_1,int *param_2)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = param_1;
    var_8h = 0;
    iVar1 = (**(*param_2 + 0x20))(param_2,0x440,0,0,&var_8h);
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    else {
        (**var_8h)(param_2);
        iVar1 = (**(*param_2 + 0x4c))(param_2,0x10,&var_4h);
        if (-1 < iVar1) {
            *var_4h = 0x80000020;
            *(var_4h + 4) = 0x430;
            *(var_4h + 8) = 0x306;
            *(var_4h + 0xc) = param_1;
            iVar1 = (**(*param_2 + 0x24))(param_2,var_4h);
        }
    }
    return iVar1;
}


