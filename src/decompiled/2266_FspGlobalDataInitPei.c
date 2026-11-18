// decompiled by r2ghidra: 2266_FspGlobalDataInitPei.te
// functions: 9

/* fcn.0000015f @ 0x15f */

int __fastcall fcn.0000015f(uint param_1,int *param_2)

{
    uint *puVar1;
    uint uVar2;
    uint *puVar3;
    int iVar4;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar4 = 0;
    var_4h = 0;
    if ((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) {
        puVar1 = fcn.000002ae();
        if (puVar1 != NULL) {
            *puVar1 = 0x44505346;
            *(puVar1 + 1) = 0;
            puVar1[0x20] = 2;
            puVar1[0x1e] = 0x46524550;
            *(puVar1 + 0x59) = 1;
            uVar2 = fcn.000000af();
            puVar1[0x11] = uVar2;
            iVar4 = (**(*param_2 + 0x20))(param_2,0xffbb8a44,0,0,&var_4h);
            if (-1 < iVar4) {
                puVar1[0x13] = var_4h;
            }
            *0xfed00148 = puVar1;
            goto code_r0x000001e4;
        }
    }
    else {
code_r0x000001e4:
        puVar1 = *0xfed00148;
        if (*(*0xfed00148 + 0x59) != '\x01') goto code_r0x00000230;
        puVar3 = fcn.000002ae();
        if (puVar3 != NULL) {
            *puVar3 = 0x80000010;
            puVar3[2] = puVar1;
            puVar3[1] = 0xffbb8a54;
            fcn.000002c9();
            var_8h = &var_10h;
            InterruptDescriptorTableRegister();
            iVar4 = (**(**(stack0xffffffee + -4) + 0x24))(*(stack0xffffffee + -4),0xffbb8a64);
            goto code_r0x00000230;
        }
    }
    iVar4 = -0x7ffffff7;
code_r0x00000230:
    return iVar4;
}


/* entry0 @ 0x156 */

int entry0(uint param_1,int *param_2)

{
    uint *puVar1;
    uint uVar2;
    uint *puVar3;
    int iVar4;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar4 = 0;
    var_4h = 0;
    if ((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) {
        puVar1 = fcn.000002ae();
        if (puVar1 != NULL) {
            *puVar1 = 0x44505346;
            *(puVar1 + 1) = 0;
            puVar1[0x20] = 2;
            puVar1[0x1e] = 0x46524550;
            *(puVar1 + 0x59) = 1;
            uVar2 = fcn.000000af();
            puVar1[0x11] = uVar2;
            iVar4 = (**(*param_2 + 0x20))(param_2,0xffbb8a44,0,0,&var_4h);
            if (-1 < iVar4) {
                puVar1[0x13] = var_4h;
            }
            *0xfed00148 = puVar1;
            goto code_r0x000001e4;
        }
    }
    else {
code_r0x000001e4:
        puVar1 = *0xfed00148;
        if (*(*0xfed00148 + 0x59) != '\x01') goto code_r0x00000230;
        puVar3 = fcn.000002ae();
        if (puVar3 != NULL) {
            *puVar3 = 0x80000010;
            puVar3[2] = puVar1;
            puVar3[1] = 0xffbb8a54;
            fcn.000002c9();
            var_8h = &var_10h;
            InterruptDescriptorTableRegister();
            iVar4 = (**(**(stack0xffffffee + -4) + 0x24))(*(stack0xffffffee + -4),0xffbb8a64);
            goto code_r0x00000230;
        }
    }
    iVar4 = -0x7ffffff7;
code_r0x00000230:
    return iVar4;
}


/* fcn.000000b4 @ 0xb4 */

int fcn.000000b4(void)

{
    int unaff_retaddr;
    
    return (unaff_retaddr + -5) - *(unaff_retaddr + -0x14);
}


/* fcn.000002ee @ 0x2ee */

uint fcn.000002ee(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.000002ae @ 0x2ae */

void __fastcall fcn.000002ae(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00000277();
    if ((iVar1 != 0) && (param_1 != 0)) {
        fcn.00000110(iVar1,param_1);
    }
    return;
}


/* fcn.00000277 @ 0x277 */

int32_t __fastcall fcn.00000277(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),param_1,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000110 @ 0x110 */

uint * fcn.00000110(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return param_1;
}


/* fcn.000000af @ 0xaf */

int fcn.000000af(void)

{
    return 0xaf - *0xa0;
}


/* fcn.000002c9 @ 0x2c9 */

void __fastcall fcn.000002c9(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


