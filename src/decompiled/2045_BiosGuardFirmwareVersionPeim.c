// decompiled by r2ghidra: 2045_BiosGuardFirmwareVersionPeim.te
// functions: 12

/* entry0 @ 0xfd */

uint entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0x660);
    return 0;
}


/* fcn.00000351 @ 0x351 */

uint __cdecl
fcn.00000351(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    ushort *puVar1;
    uint uVar2;
    int iVar3;
    
    puVar1 = fcn.000002dc();
    if (puVar1 == NULL) {
        uVar2 = 0x80000009;
    }
    else {
        *(puVar1 + 2) = 0;
        *puVar1 = 4;
        *(puVar1 + 4) = 1;
        puVar1[1] = 0x37;
        *(puVar1 + 9) = *0x640;
        *(puVar1 + 0xd) = *0x644;
        *(puVar1 + 0x11) = *0x648;
        *(puVar1 + 0x15) = *0x64c;
        *(puVar1 + 0x19) = 1;
        *(puVar1 + 0x2b) = arg_8h;
        *(puVar1 + 0x2f) = arg_ch;
        *(puVar1 + 0x33) = 0x43544e49;
        *(puVar1 + 0x1b) = arg_10h;
        *(puVar1 + 0x1f) = arg_14h;
        *(puVar1 + 0x23) = arg_18h;
        *(puVar1 + 0x27) = arg_1ch;
        iVar3 = fcn.0000042b();
        if (iVar3 != 0) {
            *(iVar3 + 8) = *0x640;
            *(iVar3 + 0xc) = *0x644;
            *(iVar3 + 0x10) = *0x648;
            *(iVar3 + 0x14) = *0x64c;
            if (iVar3 + 0x18 != 0) {
                fcn.00000417(iVar3 + 0x18);
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00000255 @ 0x255 */

void __cdecl fcn.00000255(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000002f0 @ 0x2f0 */

uint __thiscall fcn.000002f0(int param_1,int *param_2)

{
    uint16_t uVar1;
    char cVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    
    iVar4 = 0;
    uVar3 = 0;
    if (*(param_1 + 0x1e) != 0) {
        uVar1 = *(param_1 + 2);
        do {
            if (uVar1 < iVar4 + 0x24U) {
                return 0x8000000e;
            }
            iVar5 = param_1 + 0x24 + iVar4;
            cVar2 = fcn.00000282();
            if (cVar2 != '\0') {
                *param_2 = iVar5;
                return 0;
            }
            iVar4 = iVar4 + *(iVar5 + 2);
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(param_1 + 0x1e));
    }
    return 0x8000000e;
}


/* fcn.00000128 @ 0x128 */

//WARNING: Removing unreachable block (ram,0x0000014b)

void __cdecl fcn.00000128(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00000351(*(arg_8h + 0x3a) | *(arg_8h + 4) << 0x18,*(arg_8h + 6),*0x670,*0x674,*0x678,*0x67c);
    return;
}


/* fcn.000002a6 @ 0x2a6 */

int32_t fcn.000002a6(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),0x37,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.000000e0 @ 0xe0 */

uint * fcn.000000e0(uint *param_1,uint32_t param_2)

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


/* fcn.00000282 @ 0x282 */

uint32_t __fastcall fcn.00000282(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000002dc @ 0x2dc */

void fcn.000002dc(void)

{
    int iVar1;
    
    iVar1 = fcn.000002a6();
    if (iVar1 != 0) {
        fcn.000000e0(iVar1,0x37);
    }
    return;
}


/* fcn.0000042b @ 0x42b */

int32_t __fastcall fcn.0000042b(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000417 @ 0x417 */

int __fastcall fcn.00000417(int param_1,int param_2)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,0x37);
    return iVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 964 named .text
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


