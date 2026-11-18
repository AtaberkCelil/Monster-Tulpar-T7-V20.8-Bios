// decompiled by r2ghidra: 2508_HddSecurityPei.pe32
// functions: 14

/* entry0 @ 0x1027d */

void entry0(void)

{
    int iVar1;
    uint32_t *noname_0;
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    noname_0 = &var_8h;
    iVar1 = (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4));
    if ((-1 < iVar1) && (var_8h == 0x11)) {
        iVar1 = fcn.000105ba(noname_0,0x940);
        if (-1 < iVar1) {
            var_4h = &var_18h;
            InterruptDescriptorTableRegister();
            (**(**(stack0xffffffe6 + -4) + 0x24))(*(stack0xffffffe6 + -4),0x900);
        }
    }
    return;
}


/* fcn.000105ba @ 0x105ba */

void __cdecl fcn.000105ba(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000105a2 @ 0x105a2 */

int __fastcall fcn.000105a2(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0001056b();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.00010260(iVar1,param_1);
    return iVar1;
}


/* fcn.0001056b @ 0x1056b */

int32_t __fastcall fcn.0001056b(uint param_1)

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


/* fcn.00010260 @ 0x10260 */

uint * fcn.00010260(uint *param_1,uint32_t param_2)

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


/* section..text @ 0x10220 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1664 named .text
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


/* fcn.00010555 @ 0x10555 */

int __fastcall fcn.00010555(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00010723 @ 0x10723 */

uint32_t __fastcall fcn.00010723(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint extraout_ECX;
    int32_t *arg_ch;
    int32_t var_5ch;
    int32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    if (param_2 == 0) {
        uVar2 = 0x80000002;
    }
    else {
        arg_ch = &var_ch;
        iVar1 = fcn.000105ba(param_1,arg_ch);
        if (iVar1 < 0) {
            uVar2 = fcn.0001065a(arg_ch);
        }
        else {
            section..text(&var_5ch,0x8f0,0x10);
            var_10h = 0;
            var_14h = 0x30;
            section..text(&var_4ch,&var_14h,8);
            var_3ch = -1;
            var_38h = -1;
            var_44h = 3;
            var_40h = 0x30;
            section..text(&var_34h,0x90c,0x10);
            var_1ch = *0x93c;
            var_20h = 0;
            var_18h = 0;
            var_8h = 0x48;
            var_24h = param_2;
            iVar1 = (**var_ch)(var_ch,&var_5ch,&var_8h);
            if (iVar1 == -0x7fffffed) {
                var_3ch = fcn.0001065a(extraout_ECX);
            }
            else {
                *0x93c = var_1ch;
            }
            uVar2 = 0;
            if (var_3ch != 0) {
                uVar2 = var_3ch | 0x80000000;
            }
        }
    }
    return uVar2;
}


/* fcn.000102e4 @ 0x102e4 */

int __fastcall fcn.000102e4(int32_t param_1)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    iVar1 = fcn.000105ba(param_1,&var_8h);
    if (-1 < iVar1) {
        iVar1 = fcn.000105a2();
        if (iVar1 == 0) {
            iVar1 = -0x7ffffff7;
        }
        else {
            var_4h = *0x93c + 0x18;
            *(iVar1 + 0x10) = *0x93c;
            if (iVar1 != 0x90c) {
                section..text(iVar1,0x90c,0x10);
            }
            if (*0x93c != 0) {
                fcn.00010555(*0x93c);
            }
            (**var_8h)(var_8h,iVar1,&var_4h);
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010812 @ 0x10812 */

int32_t fcn.00010812(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0001086f @ 0x1086f */

uint32_t __fastcall fcn.0001086f(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0001083d @ 0x1083d */

int16_t * __fastcall fcn.0001083d(uint param_1,int16_t *param_2)

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


/* fcn.000105e7 @ 0x105e7 */

uint fcn.000105e7(void)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    fcn.00010812();
    do {
        iVar3 = fcn.0001083d();
        if (iVar3 == 0) break;
        cVar2 = fcn.0001086f();
    } while (cVar2 == '\0');
    uVar4 = 0;
    iVar3 = *(*(iVar3 + 0x20) + 0x5a);
    uVar1 = *(iVar3 + 0x98);
    iVar3 = *(iVar3 + 0xa0);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.0001086f();
            if (cVar2 != '\0') {
                return *(uVar4 * 0x18 + 0x10 + iVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.0001065a @ 0x1065a */

uint __fastcall fcn.0001065a(uint param_1,int param_2)

{
    uint *puVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puStack_c;
    int iStack_6;
    
    iVar4 = fcn.000105ba(param_1,&puStack_c);
    if (-1 < iVar4) {
        iVar4 = 0;
        do {
            InterruptDescriptorTableRegister();
            iVar5 = (**puStack_c)(*(iStack_6 + -4),puStack_c,iVar4);
            iVar4 = iVar4 + 1;
        } while (-1 < iVar5);
    }
    iVar4 = fcn.000105e7();
    puVar1 = *(iVar4 + 8);
    for (puVar8 = *puVar1; puVar8 != puVar1; puVar8 = *puVar8) {
        puVar7 = puVar8 + -0xe;
        cVar3 = fcn.0001086f();
        if (cVar3 != '\0') goto code_r0x000106cb;
    }
    puVar7 = NULL;
code_r0x000106cb:
    if (puVar7 == NULL) {
        uVar6 = 0x8000000e;
    }
    else if ((param_2 == 0) && ((puVar7[10] & 1) == 0)) {
        uVar6 = 0x80000008;
    }
    else {
        uVar2 = puVar7[8];
        if (*0x93c < uVar2) {
            uVar6 = 0x80000005;
            *0x93c = uVar2;
        }
        else {
            *0x93c = uVar2;
            if (puVar7[8] != 0) {
                fcn.00010555(puVar7[8]);
            }
            uVar6 = 0;
        }
    }
    return uVar6;
}


