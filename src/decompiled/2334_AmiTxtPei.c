// decompiled by r2ghidra: 2334_AmiTxtPei.te
// functions: 2

/* fcn.000000c6 @ 0xc6 */

uint __fastcall fcn.000000c6(int *param_1)

{
    int iVar1;
    int32_t var_cb4h;
    uint32_t var_c9fh;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = (**(*param_1 + 0x20))(param_1,0xffd136b4,0,0,&var_8h);
    if (-1 < iVar1) {
        var_4h = 0xca9;
        iVar1 = (**var_8h)(var_8h,0xffd13714,0xffd136c4,0,&var_4h,&var_cb4h);
        if (-1 < iVar1) {
            if (var_c9fh != '\0') {
                (**(*param_1 + 0x18))(param_1,0xffd136e4);
            }
            (**(*param_1 + 0x18))(param_1,0xffd136f0);
        }
    }
    return 0;
}


/* entry0 @ 0xa0 */

uint entry0(uint param_1,int *param_2)

{
    int iVar1;
    int32_t var_cb4h;
    int8_t var_c9fh;
    int32_t var_8h;
    int32_t var_4h;
    
    //[00] -r-x section size 161 named .text
    if (*0xfed40000 != -1) {
        iVar1 = (**(*param_2 + 0x20))(param_2,0xffd136b4,0,0,&var_8h);
        if (-1 < iVar1) {
            var_4h = 0xca9;
            iVar1 = (**var_8h)(var_8h,0xffd13714,0xffd136c4,0,&var_4h,&var_cb4h);
            if (-1 < iVar1) {
                if (var_c9fh != 0) {
                    (**(*param_2 + 0x18))(param_2,0xffd136e4);
                }
                (**(*param_2 + 0x18))(param_2,0xffd136f0);
            }
        }
        return 0;
    }
    var_4h = param_2;
    var_8h = 0xc1;
    (**(*param_2 + 0x18))();
    return 0;
}


