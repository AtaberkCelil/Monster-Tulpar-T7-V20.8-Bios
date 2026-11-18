// decompiled by r2ghidra: 2040_FspFirmwareVersionPeim.te
// functions: 15

/* fcn.0000017e @ 0x17e */

//WARNING: Removing unreachable block (ram,0x000001b3)

uint fcn.0000017e(void)

{
    int iVar1;
    uint uVar2;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000002af();
    if (iVar1 == 0) {
        uVar2 = 0x8000000e;
    }
    else {
        fcn.00000390(*(iVar1 + 0x1d) | *(iVar1 + 0x1c) << 0x10 | *(iVar1 + 0x2a) << 0x18,*(iVar1 + 0x18),*0x640,
                     *0x644,*0x648,*0x64c);
        uVar2 = 0;
    }
    return uVar2;
}


/* entry0 @ 0x179 */

//WARNING: Removing unreachable block (ram,0x000001b3)

uint entry0(void)

{
    int iVar1;
    uint uVar2;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000002af();
    if (iVar1 == 0) {
        uVar2 = 0x8000000e;
    }
    else {
        fcn.00000390(*(iVar1 + 0x1d) | *(iVar1 + 0x1c) << 0x10 | *(iVar1 + 0x2a) << 0x18,*(iVar1 + 0x18),*0x640,
                     *0x644,*0x648,*0x64c);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000002af @ 0x2af */

uint __fastcall fcn.000002af(uint param_1)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.00000263(param_1);
    do {
        iVar2 = fcn.0000028e();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000034f();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


/* fcn.00000390 @ 0x390 */

uint __cdecl
fcn.00000390(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    ushort *puVar1;
    uint uVar2;
    int iVar3;
    uint extraout_ECX;
    
    puVar1 = fcn.0000047a();
    if (puVar1 == NULL) {
        uVar2 = 0x80000009;
    }
    else {
        *(puVar1 + 2) = 0;
        *puVar1 = 4;
        *(puVar1 + 4) = 1;
        puVar1[1] = 0x37;
        *(puVar1 + 9) = *0x630;
        *(puVar1 + 0xd) = *0x634;
        *(puVar1 + 0x11) = *0x638;
        *(puVar1 + 0x15) = *0x63c;
        *(puVar1 + 0x19) = 1;
        *(puVar1 + 0x2b) = arg_8h;
        *(puVar1 + 0x2f) = arg_ch;
        *(puVar1 + 0x33) = 0x43544e49;
        *(puVar1 + 0x1b) = arg_10h;
        *(puVar1 + 0x1f) = arg_14h;
        *(puVar1 + 0x23) = arg_18h;
        *(puVar1 + 0x27) = arg_1ch;
        iVar3 = fcn.00000313();
        if (iVar3 != 0) {
            fcn.0000037c(extraout_ECX);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00000263 @ 0x263 */

int32_t fcn.00000263(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000034f @ 0x34f */

uint32_t __fastcall fcn.0000034f(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x620;
    if ((((*0x620 == *param_2) && (uVar1 = *0x624, *0x624 == param_2[1])) && (uVar1 = *0x628, *0x628 == param_2[2]))
       && (uVar1 = *0x62c, *0x62c == param_2[3])) {
        return CONCAT31(*0x62c >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000028e @ 0x28e */

int16_t * __fastcall fcn.0000028e(uint param_1,int16_t *param_2)

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


/* fcn.000002da @ 0x2da */

int32_t __fastcall fcn.000002da(uint param_1,uint param_2)

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


/* fcn.00000336 @ 0x336 */

uint * __fastcall fcn.00000336(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1006 named .text
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


/* fcn.0000047a @ 0x47a */

void fcn.0000047a(void)

{
    int iVar1;
    
    iVar1 = fcn.00000444();
    if (iVar1 != 0) {
        fcn.000000e0(iVar1,0x37);
    }
    return;
}


/* fcn.00000444 @ 0x444 */

int32_t fcn.00000444(void)

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


/* fcn.00000313 @ 0x313 */

int fcn.00000313(void)

{
    int iVar1;
    
    iVar1 = fcn.000002da();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.00000336();
    return iVar1 + 0x18;
}


/* fcn.0000037c @ 0x37c */

int __fastcall fcn.0000037c(int param_1,int param_2)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,0x37);
    return iVar1;
}


