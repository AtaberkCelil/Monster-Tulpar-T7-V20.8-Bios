// decompiled by r2ghidra: 1989_FirmwarePerformancePei.te
// functions: 18

/* entry0 @ 0x179 */

uint __fastcall entry0(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000407(param_1,&var_4h);
    (**var_4h)(799);
    return 0;
}


/* fcn.00000407 @ 0x407 */

void __cdecl fcn.00000407(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000004ab @ 0x4ab */

int64_t __cdecl fcn.000004ab(int32_t arg_8h,int32_t arg_ch)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int var_14h;
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    uVar5 = fcn.00000434();
    iVar6 = fcn.00000100(arg_8h,arg_ch,uVar5,&var_18h);
    var_10h = iVar6;
    var_ch = iVar6 * 1000000000 >> 0x20;
    iVar2 = fcn.00000804(var_18h,var_14h);
    if (iVar2 + -0x21 < 0) {
        var_4h = 0;
    }
    else {
        iVar2 = fcn.00000804(var_18h,var_14h);
        var_4h = iVar2 + -0x21;
    }
    uVar3 = var_14h;
    uVar4 = 0;
    if ((var_4h & 0x20U) == 0) {
        uVar3 = var_18h;
        uVar4 = var_14h;
    }
    var_18h = uVar3 >> (var_4h & 0x1f) | uVar4 << 0x20 - (var_4h & 0x1f);
    var_14h = uVar4 >> (var_4h & 0x1f);
    uVar1 = uVar5 >> 0x20;
    if ((var_4h & 0x20U) == 0) {
        uVar1 = uVar5;
    }
    uVar3 = uVar1 >> 0x20;
    iVar7 = fcn.00000100(var_18h * 1000000000,(var_18h * 1000000000 >> 0x20) + var_14h * 1000000000,
                         uVar1 >> (var_4h & 0x1f) | uVar3 << 0x20 - (var_4h & 0x1f),uVar3 >> (var_4h & 0x1f),0);
    return iVar7 + CONCAT44(var_ch,iVar6 * 1000000000);
}


/* fcn.000006a3 @ 0x6a3 */

uint32_t __fastcall fcn.000006a3(uchar *param_1,int param_2,uint *param_3)

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
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == 0) {
        if (param_3 != NULL) {
            return 0x80000002;
        }
    }
    else if (param_3 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.00000407(param_1,&puStack_54);
    if (iVar1 < 0) {
        uVar2 = fcn.000005d4(param_3);
        return uVar2;
    }
    section..text(auStack_48,0xa50,0x10);
    uStack_4c = 0;
    uStack_50 = 0x30;
    section..text(auStack_38,&uStack_50,8);
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_30 = 3;
    uStack_2c = 0x30;
    if (auStack_20 != param_1) {
        section..text(auStack_20,param_1,0x10);
    }
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
        uStack_28 = fcn.000005d4(param_3);
        if (param_3 == NULL) goto code_r0x000007b2;
        uStack_8 = *param_3;
    }
    if (param_3 != NULL) {
        *param_3 = uStack_8;
    }
code_r0x000007b2:
    if (uStack_28 == 0) {
        return 0;
    }
    return uStack_28 | 0x80000000;
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


/* fcn.00000355 @ 0x355 */

int32_t fcn.00000355(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000003a1 @ 0x3a1 */

int fcn.000003a1(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00000380();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000003e3();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000003cd @ 0x3cd */

int __fastcall fcn.000003cd(int param_1,int param_2,uint param_3)

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
    
    //[00] -r-x section size 1970 named .text
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


/* fcn.000003e3 @ 0x3e3 */

uint32_t __fastcall fcn.000003e3(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000380 @ 0x380 */

int16_t * __fastcall fcn.00000380(uint param_1,int16_t *param_2)

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


/* fcn.000007c4 @ 0x7c4 */

//WARNING: Removing unreachable block (ram,0x000007dc)
//WARNING: Removing unreachable block (ram,0x000007fa)

uint __cdecl fcn.000007c4(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid(0x15);
    uVar3 = puVar1[1];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar3;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return 0x15;
}


/* fcn.00000434 @ 0x434 */

ulong fcn.00000434(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.000007c4(&var_8h,&var_ch);
    if ((var_4h == 0) || (var_8h == 0)) {
        uVar3 = 0;
        uVar2 = 0;
    }
    else {
        var_18h = 24000000;
        if (var_ch != 0) {
            var_18h = var_ch;
        }
        uVar1 = var_8h * var_18h + (var_4h >> 1);
        var_14h = uVar1 >> 0x20;
        uVar2 = var_14h / var_4h;
        uVar3 = (var_14h % var_4h << 0x20 | uVar1 & 0xffffffff) / var_4h;
    }
    return CONCAT44(uVar2,uVar3);
}


/* fcn.00000835 @ 0x835 */

ulong __cdecl fcn.00000835(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint64_t uVar1;
    
    uVar1 = arg_ch % arg_10h << 0x20 | arg_8h;
    if (arg_14h != 0) {
        *arg_14h = uVar1 % arg_10h;
    }
    return CONCAT44(arg_ch / arg_10h,uVar1 / arg_10h);
}


/* fcn.00000100 @ 0x100 */

uint64_t fcn.00000100(uint32_t param_1,uint32_t param_2,uint32_t param_3,int *param_4,int *param_5)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    
    if (param_4 == NULL) {
        if (param_5 != NULL) {
            param_5[1] = 0;
            param_4 = param_5;
        }
        uVar1 = param_2 % param_3 << 0x20 | param_1;
        if (param_4 != NULL) {
            *param_4 = uVar1 % param_3;
        }
        return CONCAT44(param_2 / param_3,uVar1 / param_3);
    }
    uVar3 = param_1;
    piVar4 = param_4;
    uVar5 = param_2;
    uVar7 = param_3;
    do {
        uVar6 = uVar5 & 1;
        uVar5 = uVar5 >> 1;
        uVar3 = uVar3 >> 1 | (uVar6 != 0) << 0x1f;
        uVar7 = uVar7 >> 1 | piVar4 << 0x1f;
        piVar4 = piVar4 >> 1;
    } while (piVar4 != NULL);
    uVar1 = CONCAT44(uVar5,uVar3) / uVar7;
    uVar3 = uVar1;
    iVar2 = (uVar1 & 0xffffffff) * param_3;
    uVar7 = iVar2 >> 0x20;
    uVar5 = iVar2;
    uVar6 = uVar7 + param_4 * uVar3;
    if ((CARRY4(uVar7,param_4 * uVar3)) || ((param_2 <= uVar6 && ((param_2 < uVar6 || (param_1 < uVar5)))))) {
        uVar3 = uVar3 - 1;
        if (param_5 == NULL) goto code_r0x00000171;
        bVar8 = uVar5 < param_3;
        uVar5 = uVar5 - param_3;
        uVar6 = (uVar6 - param_4) - bVar8;
    }
    if (param_5 != NULL) {
        *param_5 = param_1 - uVar5;
        param_5[1] = (param_2 - uVar6) - (param_1 < uVar5);
    }
code_r0x00000171:
    return uVar3;
}


/* fcn.00000804 @ 0x804 */

//WARNING: Possible PIC construction at 0x00000817: Changing call to branch
//WARNING: Removing unreachable block (ram,0x0000081c)

int fcn.00000804(int param_1,int param_2)

{
    int iVar1;
    
    if (param_2 != 0) {
        param_1 = param_2;
    }
    if (param_1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < param_1; param_1 = param_1 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.0000057b @ 0x57b */

uint fcn.0000057b(void)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    fcn.00000355();
    iVar3 = fcn.000003a1();
    uVar4 = 0;
    iVar3 = *(*(iVar3 + 0x20) + 0x5a);
    uVar1 = *(iVar3 + 0x98);
    iVar3 = *(iVar3 + 0xa0);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.000003e3();
            if (cVar2 != '\0') {
                return *(uVar4 * 0x18 + 0x10 + iVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.000005d4 @ 0x5d4 */

uint __fastcall fcn.000005d4(uint param_1,int param_2,uint32_t *param_3)

{
    uint *puVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint *puVar9;
    uint *puStack_10;
    uint uStack_c;
    int iStack_6;
    
    uStack_c = param_1;
    iVar6 = fcn.00000407(param_1,&puStack_10);
    if (-1 < iVar6) {
        iVar6 = 0;
        do {
            InterruptDescriptorTableRegister();
            iVar7 = (**puStack_10)(*(iStack_6 + -4),puStack_10,iVar6);
            iVar6 = iVar6 + 1;
        } while (-1 < iVar7);
    }
    iVar6 = fcn.0000057b();
    puVar1 = *(iVar6 + 8);
    for (puVar2 = *puVar1; puVar2 != puVar1; puVar2 = *puVar2) {
        puVar9 = puVar2 + -0xe;
        cVar5 = fcn.000003e3();
        if (cVar5 != '\0') goto code_r0x0000064a;
    }
    puVar9 = NULL;
code_r0x0000064a:
    if (puVar9 == NULL) {
        uVar8 = 0x8000000e;
    }
    else if ((param_2 == 0) && ((puVar9[10] & 1) == 0)) {
        uVar8 = 0x80000008;
    }
    else if ((param_3 == NULL) || (uVar3 = puVar9[8], uVar4 = *param_3, *param_3 = uVar3, uVar3 <= uVar4)) {
        if (puVar9[8] != 0) {
            fcn.000003cd(puVar9[8]);
        }
        uVar8 = 0;
    }
    else {
        uVar8 = 0x80000005;
    }
    return uVar8;
}


