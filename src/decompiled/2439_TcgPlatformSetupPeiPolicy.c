// decompiled by r2ghidra: 2439_TcgPlatformSetupPeiPolicy.te
// functions: 5

/* fcn.00000242 @ 0x242 */

uint __fastcall fcn.00000242(uint param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_cb8h;
    int8_t var_ca8h;
    int8_t var_ca7h;
    int8_t var_ca3h;
    int8_t var_ca2h;
    int8_t var_ca1h;
    int8_t var_c9fh;
    int8_t var_c9ch;
    int8_t var_c9bh;
    int8_t var_c9ah;
    int8_t var_c99h;
    int8_t var_c98h;
    int8_t var_c97h;
    int8_t var_c96h;
    int8_t var_c8fh;
    int8_t var_c8eh;
    int8_t var_c8dh;
    int8_t var_c8ch;
    int8_t var_c8bh;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0xca9;
    var_4h = 0;
    iVar1 = (**(*param_2 + 0x20))(param_2,0xffd4e1c4,0,0,&var_ch);
    if ((-1 < iVar1) && (iVar1 = (**(*param_2 + 0x34))(param_2,4,0x33,&var_4h), -1 < iVar1)) {
        iVar1 = (**var_ch)(var_ch,0xffd4e224,0xffd4e1e4,0,&var_8h,&var_cb8h);
        if ((var_4h != 0) && (-1 < iVar1)) {
            (**(*param_2 + 0x54))(var_4h + 0x18,0x1b,0);
            *(var_4h + 8) = *0xffd4e1d4;
            *(var_4h + 0xc) = *0xffd4e1d8;
            *(var_4h + 0x10) = *0xffd4e1dc;
            *(var_4h + 0x14) = *0xffd4e1e0;
            *(var_4h + 0x18) = var_ca3h;
            *(var_4h + 0x19) = var_ca8h;
            *(var_4h + 0x1a) = var_c9fh;
            *(var_4h + 0x1b) = var_ca7h;
            *(var_4h + 0x2a) = var_c9ch;
            *(var_4h + 0x1d) = var_c9bh;
            *(var_4h + 0x2d) = var_c98h;
            *(var_4h + 0x2c) = var_c99h;
            *(var_4h + 0x2b) = var_c9ah;
            *(var_4h + 0x2e) = var_c97h;
            *(var_4h + 0x1e) = var_c96h;
            *(var_4h + 0x24) = var_ca1h;
            *(var_4h + 0x23) = var_ca2h;
            iVar1 = fcn.000003d3();
            uVar2 = (**(iVar1 + 0x18))(10);
            *(var_4h + 0x2f) = uVar2 & 0xff & var_c8fh | var_c8bh << 4 | var_c8ch | var_c8dh | var_c8eh;
        }
        uVar3 = (**(*param_2 + 0x18))(param_2,0xffd4e204);
        return uVar3;
    }
    return 0;
}


/* entry0 @ 0x11d */

uint entry0(uint param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_cb8h;
    int8_t var_ca8h;
    int8_t var_ca7h;
    int8_t var_ca3h;
    int8_t var_ca2h;
    int8_t var_ca1h;
    int8_t var_c9fh;
    int8_t var_c9ch;
    int8_t var_c9bh;
    int8_t var_c9ah;
    int8_t var_c99h;
    int8_t var_c98h;
    int8_t var_c97h;
    int8_t var_c96h;
    int8_t var_c8fh;
    int8_t var_c8eh;
    int8_t var_c8dh;
    int8_t var_c8ch;
    int8_t var_c8bh;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0xca9;
    var_4h = 0;
    iVar1 = (**(*param_2 + 0x20))(param_2,0xffd4e1c4,0,0,&var_ch);
    if ((-1 < iVar1) && (iVar1 = (**(*param_2 + 0x34))(param_2,4,0x33,&var_4h), -1 < iVar1)) {
        iVar1 = (**var_ch)(var_ch,0xffd4e224,0xffd4e1e4,0,&var_8h,&var_cb8h);
        if ((var_4h != 0) && (-1 < iVar1)) {
            (**(*param_2 + 0x54))(var_4h + 0x18,0x1b,0);
            *(var_4h + 8) = *0xffd4e1d4;
            *(var_4h + 0xc) = *0xffd4e1d8;
            *(var_4h + 0x10) = *0xffd4e1dc;
            *(var_4h + 0x14) = *0xffd4e1e0;
            *(var_4h + 0x18) = var_ca3h;
            *(var_4h + 0x19) = var_ca8h;
            *(var_4h + 0x1a) = var_c9fh;
            *(var_4h + 0x1b) = var_ca7h;
            *(var_4h + 0x2a) = var_c9ch;
            *(var_4h + 0x1d) = var_c9bh;
            *(var_4h + 0x2d) = var_c98h;
            *(var_4h + 0x2c) = var_c99h;
            *(var_4h + 0x2b) = var_c9ah;
            *(var_4h + 0x2e) = var_c97h;
            *(var_4h + 0x1e) = var_c96h;
            *(var_4h + 0x24) = var_ca1h;
            *(var_4h + 0x23) = var_ca2h;
            iVar1 = fcn.000003d3();
            uVar2 = (**(iVar1 + 0x18))(10);
            *(var_4h + 0x2f) = uVar2 & 0xff & var_c8fh | var_c8bh << 4 | var_c8ch | var_c8dh | var_c8eh;
        }
        uVar3 = (**(*param_2 + 0x18))(param_2,0xffd4e204);
        return uVar3;
    }
    return 0;
}


/* fcn.000000a0 @ 0xa0 */

int fcn.000000a0(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    //[00] -r-x section size 891 named .text
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.000003d3 @ 0x3d3 */

int32_t __fastcall fcn.000003d3(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000003ea(param_1,&var_4h);
    return var_4h;
}


/* fcn.000003ea @ 0x3ea */

void __cdecl fcn.000003ea(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffd4e1f4,0,0,arg_ch);
    return;
}


