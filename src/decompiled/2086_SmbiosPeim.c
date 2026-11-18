// decompiled by r2ghidra: 2086_SmbiosPeim.te
// functions: 12

/* entry0 @ 0xfd */

int __cdecl entry0(uint noname_0,uint32_t arg_ch)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = arg_ch;
    iVar2 = (**(*arg_ch + 0x28))(arg_ch,&arg_ch);
    if (-1 < iVar2) {
        if ((arg_ch == 0x11) && (iVar2 = (**(*uVar1 + 0x24))(uVar1,0x750), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00000338 @ 0x338 */

uint32_t __fastcall fcn.00000338(uint param_1,int param_2,uint *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint uStack_58;
    uint *puStack_54;
    uint uStack_50;
    uint uStack_4c;
    uchar auStack_48 [16];
    uchar auStack_38 [8];
    uint uStack_30;
    uint uStack_2c;
    uint32_t uStack_28;
    uint uStack_24;
    uchar auStack_20 [16];
    int iStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    if (param_2 == 0) {
        if (param_3 != NULL) {
            return 0x80000002;
        }
    }
    else if (param_3 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.000004f5(param_1,&puStack_54);
    if (iVar1 < 0) {
        uVar2 = fcn.00000264(param_3);
        return uVar2;
    }
    section..text(auStack_48,0x730,0x10);
    uStack_50 = 0x30;
    uStack_4c = 0;
    section..text(auStack_38,&uStack_50,8);
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_30 = 3;
    uStack_2c = 0x30;
    section..text(auStack_20,0x75c,0x10);
    uStack_c = 0;
    uStack_4 = 0;
    if (param_3 == NULL) {
        uStack_8 = 0;
    }
    else {
        uStack_8 = *param_3;
    }
    uStack_58 = 0x48;
    iStack_10 = param_2;
    iVar1 = (**puStack_54)(puStack_54,auStack_48,&uStack_58);
    if (iVar1 == -0x7fffffed) {
        uStack_28 = fcn.00000264(param_3);
        if (param_3 == NULL) goto code_r0x00000434;
        uStack_8 = *param_3;
    }
    if (param_3 != NULL) {
        *param_3 = uStack_8;
    }
code_r0x00000434:
    if (uStack_28 == 0) {
        return 0;
    }
    return uStack_28 | 0x80000000;
}


/* fcn.0000055c @ 0x55c */

int32_t __fastcall fcn.0000055c(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000004f5(param_1,&var_4h);
    return var_4h;
}


/* fcn.000004f5 @ 0x4f5 */

void __cdecl fcn.000004f5(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000448 @ 0x448 */

void __fastcall fcn.00000448(char param_1)

{
    if (param_1 == '\0') {
        if (*0x76e == 0xff) {
            return;
        }
        *0xc0000080 = *0x76e;
        *0xc0000085 = *0x76d;
        *0xc0000086 = *0x76c;
    }
    else {
        *0x76e = *0xc0000080;
        *0xc0000080 = *0xc0000080 | 0x30;
        *0x76d = *0xc0000085;
        *0x76c = *0xc0000086;
        *0xc0000085 = *0xc0000085 | 0x33;
        *0xc0000086 = *0xc0000086 | 0x33;
    }
    return;
}


/* fcn.000004a9 @ 0x4a9 */

int32_t fcn.000004a9(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000538 @ 0x538 */

uint32_t __fastcall fcn.00000538(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000004d4 @ 0x4d4 */

int16_t * __fastcall fcn.000004d4(uint param_1,int16_t *param_2)

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


/* fcn.000001ea @ 0x1ea */

uint fcn.000001ea(void)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    fcn.000004a9();
    do {
        iVar3 = fcn.000004d4();
        if (iVar3 == 0) break;
        cVar2 = fcn.00000538();
    } while (cVar2 == '\0');
    uVar4 = 0;
    iVar3 = *(*(iVar3 + 0x20) + 0x5a);
    uVar1 = *(iVar3 + 0x98);
    iVar3 = *(iVar3 + 0xa0);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.00000538();
            if (cVar2 != '\0') {
                return *(uVar4 * 0x18 + 0x10 + iVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.00000522 @ 0x522 */

int __fastcall fcn.00000522(int param_1,int param_2,uint param_3)

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
    
    //[00] -r-x section size 1240 named .text
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


/* fcn.00000264 @ 0x264 */

uint __cdecl fcn.00000264(int32_t arg_8h)

{
    uint *puVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint in_ECX;
    int in_EDX;
    uint *puVar9;
    uint *puStack_14;
    int iStack_e;
    
    iVar6 = fcn.000004f5(in_ECX,&puStack_14);
    if (-1 < iVar6) {
        iVar6 = 0;
        do {
            InterruptDescriptorTableRegister();
            iVar7 = (**puStack_14)(*(iStack_e + -4),puStack_14,iVar6);
            iVar6 = iVar6 + 1;
        } while (-1 < iVar7);
    }
    iVar6 = fcn.000001ea();
    puVar1 = *(iVar6 + 8);
    for (puVar2 = *puVar1; puVar2 != puVar1; puVar2 = *puVar2) {
        puVar9 = puVar2 + -0xe;
        cVar5 = fcn.00000538();
        if (cVar5 != '\0') goto code_r0x000002e1;
    }
    puVar9 = NULL;
code_r0x000002e1:
    if (puVar9 == NULL) {
        uVar8 = 0x8000000e;
    }
    else if ((in_EDX == 0) && ((puVar9[10] & 1) == 0)) {
        uVar8 = 0x80000008;
    }
    else if ((arg_8h == 0) || (uVar3 = puVar9[8], uVar4 = *arg_8h, *arg_8h = uVar3, uVar3 <= uVar4)) {
        if (puVar9[8] != 0) {
            fcn.00000522(puVar9[8]);
        }
        uVar8 = 0;
    }
    else {
        uVar8 = 0x80000005;
    }
    return uVar8;
}


