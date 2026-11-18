// decompiled by r2ghidra: 2075_PcdRecoveryPei.te
// functions: 7

/* entry0 @ 0xfd */

void __cdecl entry0(uint noname_0,int32_t arg_ch)

{
    int iVar1;
    int iStack_10;
    uchar auStack_c [8];
    
    iStack_10 = 0;
    (**(*arg_ch + 0x28))(arg_ch,auStack_c);
    iVar1 = (**(*arg_ch + 0x34))(arg_ch,4,0x92,&iStack_10);
    if (-1 < iVar1) {
        *(iStack_10 + 8) = *0x48c;
        *(iStack_10 + 0xc) = *0x490;
        *(iStack_10 + 0x10) = *0x494;
        *(iStack_10 + 0x14) = *0x498;
        *(iStack_10 + 0x90) = 0;
        (**(*arg_ch + 0x24))(arg_ch,0x480);
    }
    return;
}


/* fcn.00000288 @ 0x288 */

int __fastcall fcn.00000288(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 555 named .text
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.0000023c @ 0x23c */

int32_t fcn.0000023c(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000267 @ 0x267 */

int16_t * __fastcall fcn.00000267(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.0000029e @ 0x29e */

uint32_t __fastcall fcn.0000029e(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x48c;
    if ((((*0x48c == *param_2) && (uVar1 = *0x490, *0x490 == param_2[1])) && (uVar1 = *0x494, *0x494 == param_2[2]))
       && (uVar1 = *0x498, *0x498 == param_2[3])) {
        return CONCAT31(*0x498 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000164 @ 0x164 */

int __fastcall fcn.00000164(int *param_1)

{
    int iVar1;
    int iVar2;
    uint uStack_8;
    int *piStack_4;
    
    iVar2 = 0;
    piStack_4 = param_1;
    while( true ) {
        uStack_8 = 0;
        iVar1 = (**(*param_1 + 0x38))(param_1,iVar2,&uStack_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        piStack_4 = NULL;
        iVar1 = (**(*param_1 + 0x68))(0x470,uStack_8,&piStack_4);
        if (-1 < iVar1) break;
        iVar2 = iVar2 + 1;
    }
    fcn.00000288(0x78);
    return iVar1;
}


