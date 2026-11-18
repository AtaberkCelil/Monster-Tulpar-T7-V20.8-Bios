// decompiled by r2ghidra: 2162_FspInit.pe32
// functions: 71

/* fcn.000107dc @ 0x107dc */

void fcn.000107dc(void)

{
    ulong uVar1;
    int iVar2;
    uint *puVar3;
    int iVar4;
    int32_t var_8h;
    uint32_t var_4h;
    
    if (*(*0xfed00148 + 0x59) != '\0') {
        iVar2 = fcn.00010dca(*0xfed00148,&var_8h);
        if (-1 < iVar2) {
            return;
        }
        fcn.00010da5();
        return;
    }
    iVar2 = *(*(*0xfed00148 + 8) + 0x2c);
    *(*0xfed00148 + 0x44) = iVar2;
    iVar4 = *(*(*0xfed00148 + 8) + 0x34);
    if (iVar4 == 0) {
        iVar4 = *(iVar2 + 0x24) + *(iVar2 + 0x1c);
    }
    *(*0xfed00148 + 0x48) = iVar4;
    *(*0xfed00148 + 0x54) = iVar4;
    if (*(iVar4 + 0x683) == '\0') {
        uVar1 = rdmsr(0x35);
        iVar2 = fcn.00010f60();
        (**(iVar2 + 0x28))(0x4400,2,uVar1 & 0xffff);
    }
    else {
        iVar2 = fcn.00010f60();
        (**(iVar2 + 0x28))(0x4400,2,1);
    }
    iVar2 = fcn.00010e9e();
    if (iVar2 != 0) {
        *(iVar2 + 0x27) = *(iVar4 + 0x520);
        *(iVar2 + 0x28) = *(iVar4 + 0x50);
        *(iVar2 + 0x2c) = *(iVar4 + 0x51c);
    }
    fcn.00010da5();
    if (*(iVar4 + 0x688) != 0) {
        fcn.00010da5();
    }
    if (*(iVar4 + 0x68c) != 0) {
        *0x48e4 = *0xfed00148;
        *0x48e0 = *(iVar4 + 0x68c);
        puVar3 = fcn.00010ed8();
        if (puVar3 == NULL) goto code_r0x000108e7;
        *puVar3 = 0x80000010;
        puVar3[2] = 0x4884;
        puVar3[1] = 0x4790;
    }
    fcn.00010da5();
code_r0x000108e7:
    fcn.00010e1c();
    if (var_4h == 0x11) {
        fcn.00010df7();
    }
    if (*(iVar4 + 0x2c) != '\0') {
        fcn.00010df7();
    }
    fcn.00010df7();
    return;
}


/* entry0 @ 0x10589 */

//WARNING: Variable defined which should be unmapped: var_8h

void __fastcall entry0(int param_1)

{
    ulong uVar1;
    int iVar2;
    uint *puVar3;
    int iVar4;
    int32_t var_8h;
    int iStack_8;
    
    var_8h = &stack0xfffffffc;
    iStack_8 = param_1;
    fcn.00014356(param_1,&stack0xfffffffc);
    if (*(*0xfed00148 + 0x59) != '\0') {
        iVar2 = fcn.00010dca(*0xfed00148,&var_8h);
        if (-1 < iVar2) {
            return;
        }
        fcn.00010da5();
        return;
    }
    iVar2 = *(*(*0xfed00148 + 8) + 0x2c);
    *(*0xfed00148 + 0x44) = iVar2;
    iVar4 = *(*(*0xfed00148 + 8) + 0x34);
    if (iVar4 == 0) {
        iVar4 = *(iVar2 + 0x24) + *(iVar2 + 0x1c);
    }
    *(*0xfed00148 + 0x48) = iVar4;
    *(*0xfed00148 + 0x54) = iVar4;
    if (*(iVar4 + 0x683) == '\0') {
        uVar1 = rdmsr(0x35);
        iVar2 = fcn.00010f60();
        (**(iVar2 + 0x28))(0x4400,2,uVar1 & 0xffff);
    }
    else {
        iVar2 = fcn.00010f60();
        (**(iVar2 + 0x28))(0x4400,2,1);
    }
    iVar2 = fcn.00010e9e();
    if (iVar2 != 0) {
        *(iVar2 + 0x27) = *(iVar4 + 0x520);
        *(iVar2 + 0x28) = *(iVar4 + 0x50);
        *(iVar2 + 0x2c) = *(iVar4 + 0x51c);
    }
    fcn.00010da5();
    if (*(iVar4 + 0x688) != 0) {
        fcn.00010da5();
    }
    if (*(iVar4 + 0x68c) != 0) {
        *0x48e4 = *0xfed00148;
        *0x48e0 = *(iVar4 + 0x68c);
        puVar3 = fcn.00010ed8();
        if (puVar3 == NULL) goto code_r0x000108e7;
        *puVar3 = 0x80000010;
        puVar3[2] = 0x4884;
        puVar3[1] = 0x4790;
    }
    fcn.00010da5();
code_r0x000108e7:
    fcn.00010e1c();
    if (iStack_8 == 0x11) {
        fcn.00010df7();
    }
    if (*(iVar4 + 0x2c) != '\0') {
        fcn.00010df7();
    }
    fcn.00010df7();
    return;
}


/* fcn.00014356 @ 0x14356 */

//WARNING: Removing unreachable block (ram,0x00014381)
//WARNING: Removing unreachable block (ram,0x00014372)
//WARNING: Removing unreachable block (ram,0x00014390)

uint __cdecl fcn.00014356(uint noname_0,int32_t arg_ch)

{
    uint *puVar1;
    uint uVar2;
    uint *in_EDX;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return 1;
}


/* fcn.00010e41 @ 0x10e41 */

uint fcn.00010e41(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00010ff2 @ 0x10ff2 */

uint fcn.00010ff2(void)

{
    return *0xfed00148;
}


/* fcn.00010e9e @ 0x10e9e */

int fcn.00010e9e(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00010e52();
    do {
        iVar2 = fcn.00010e7d();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00010f3c();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00010430 @ 0x10430 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00010430(void)

{
    uint *puVar1;
    uint auStack_30 [2];
    
    auStack_30[0] = InterruptDescriptorTableRegister();
    puVar1 = fcn.00010e41(auStack_30);
    InterruptDescriptorTableRegister(*puVar1);
    return CONCAT44(puVar1[7],puVar1[9]);
}


/* fcn.00010dca @ 0x10dca */

void __cdecl fcn.00010dca(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00010ed8 @ 0x10ed8 */

int32_t __fastcall fcn.00010ed8(uint param_1)

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


/* fcn.00010602 @ 0x10602 */

uint * __fastcall fcn.00010602(uint param_1)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010dca(param_1,&var_4h);
    if (iVar1 < 0) {
        puVar2 = NULL;
    }
    else {
        var_ch = 0;
        var_8h = 0;
        iVar1 = (**var_4h)(param_1,&var_ch,0);
        if (iVar1 == -0x7ffffffb) {
            puVar3 = fcn.00010ed8();
            if (((puVar3 == NULL) || (iVar1 = (**var_4h)(param_1,&var_ch,puVar3), iVar1 < 0)) ||
               (puVar2 = fcn.00010ed8(), puVar2 == NULL)) {
                puVar2 = NULL;
            }
            else {
                *puVar2 = 1;
                puVar2[2] = 0;
                puVar2[4] = *puVar3;
            }
        }
        else {
            puVar2 = NULL;
        }
    }
    return puVar2;
}


/* fcn.00010f26 @ 0x10f26 */

int __fastcall fcn.00010f26(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.00010460(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00010460 @ 0x10460 */

uint * fcn.00010460(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
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


/* fcn.00010da5 @ 0x10da5 */

void __fastcall fcn.00010da5(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000124b8 @ 0x124b8 */

uint __fastcall fcn.000124b8(uint param_1,int param_2)

{
    uint8_t *puVar1;
    uchar *puVar2;
    ushort uVar3;
    char cVar4;
    uint8_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint8_t uVar9;
    uchar *puVar10;
    uint8_t *puVar11;
    uchar *puVar12;
    ushort *puVar13;
    int iStack_8;
    int iStack_4;
    
    iVar6 = fcn.00010f7c(&iStack_8);
    if (-1 < iVar6) {
        *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_2 + 0x38c) ^ *(iStack_8 + 0x1c)) & 1;
        *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_2 + 0x71e) * 2 ^ *(iStack_8 + 0x1c)) & 2;
    }
    iVar6 = fcn.00010f7c(&iStack_8);
    if (-1 < iVar6) {
        *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_2 + 0x70a) ^ *(iStack_8 + 0x1c)) & 1;
        uVar7 = (*(param_2 + 0x70b) << 2 ^ *(iStack_8 + 0x1c)) & 0x3c ^ *(iStack_8 + 0x1c);
        *(iStack_8 + 0x1c) = uVar7;
        *(iStack_8 + 0x1c) = (*(param_2 + 200) * 2 ^ uVar7) & 2 ^ uVar7;
        *(iStack_8 + 0x20) = *(param_2 + 0xc1);
        *(iStack_8 + 0x24) = *(param_2 + 0xc4);
    }
    fcn.0001104b();
    iStack_8 = 0;
    iVar6 = fcn.00010f7c(&iStack_8);
    if ((-1 < iVar6) && (iStack_8 != 0)) {
        *(iStack_8 + 0x1c) = *(param_2 + 0x40c);
        *(iStack_8 + 0x20) = *(param_2 + 0x410);
    }
    iVar6 = fcn.00010f7c(&iStack_8);
    if (-1 < iVar6) {
        *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_2 + 0x443) ^ *(iStack_8 + 0x1c)) & 1;
        uVar7 = (*(param_2 + 0x3f4) * 2 ^ *(iStack_8 + 0x1c)) & 2 ^ *(iStack_8 + 0x1c);
        *(iStack_8 + 0x1c) = uVar7;
        uVar7 = (*(param_2 + 0x440) << 2 ^ uVar7) & 4 ^ uVar7;
        *(iStack_8 + 0x1c) = uVar7;
        *(iStack_8 + 0x1c) = (*(param_2 + 0x3f5) << 3 ^ uVar7) & 8 ^ uVar7;
    }
    iVar6 = fcn.00010f7c(&iStack_8);
    if ((-1 < iVar6) && (cVar4 = fcn.00014338(), iVar6 = iStack_8, cVar4 != '\0')) {
        uVar9 = 0;
        do {
            if (1 < uVar9) break;
            uVar7 = uVar9;
            puVar8 = iVar6 + 0x1c + uVar7 * 4;
            *puVar8 = *puVar8 ^ (*(uVar7 + 0xa42 + param_2) ^ *(iVar6 + 0x1c + uVar7 * 4)) & 1;
            uVar9 = uVar9 + 1;
            uVar5 = fcn.00014338();
        } while (uVar9 < uVar5);
    }
    fcn.000110d4();
    fcn.00011250();
    iVar6 = fcn.00010f7c(&iStack_8);
    if (-1 < iVar6) {
        puVar11 = param_2 + 0xa3c;
        puVar8 = iStack_8 + 0x20;
        iVar6 = 3;
        do {
            *puVar8 = *puVar8 ^ (puVar11[-3] ^ *puVar8) & 1;
            uVar7 = (*puVar11 * 2 ^ *puVar8) & 0x3e ^ *puVar8;
            *puVar8 = uVar7;
            puVar1 = puVar11 + 3;
            puVar11 = puVar11 + 1;
            *puVar8 = *puVar1 << 6 | uVar7 & 0xffffc03f;
            puVar8 = puVar8 + 1;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
    }
    fcn.0001151b();
    iVar6 = fcn.00010f7c(&iStack_8);
    if ((-1 < iVar6) && (cVar4 = fcn.000142d8(), cVar4 != '\0')) {
        puVar12 = param_2 + 0x2e4;
        puVar10 = iStack_8 + 0x1d;
        do {
            puVar10[-1] = puVar12[-0x10];
            *puVar10 = *puVar12;
            puVar10[1] = puVar12[0x10];
            puVar2 = puVar12 + 0x20;
            puVar12 = puVar12 + 1;
            puVar10[2] = *puVar2;
            uVar7 = fcn.000142d8();
            puVar10 = puVar10 + 4;
        } while (puVar12 + (-0x2e4 - param_2) < (uVar7 & 0xff));
    }
    fcn.000116a3();
    fcn.0001178e();
    fcn.00011b31();
    fcn.00011c4e();
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0xda7) ^ *(iStack_4 + 0x1c)) & 1;
        uVar7 = (*(param_2 + 0xda8) * 2 ^ *(iStack_4 + 0x1c)) & 2 ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar7;
        uVar7 = (*(param_2 + 0x71f) << 2 ^ uVar7) & 4 ^ uVar7;
        *(iStack_4 + 0x1c) = uVar7;
        *(iStack_4 + 0x1c) = (*(param_2 + 0xda9) << 4 ^ uVar7) & 0x10 ^ uVar7;
    }
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x721) ^ *(iStack_4 + 0x1c)) & 1;
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x722) * 2 ^ *(iStack_4 + 0x1c)) & 2;
    }
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        uVar7 = *(param_2 + 0xafb) * 2 | *(iStack_4 + 0x1c) & 0xfffffe01;
        *(iStack_4 + 0x1c) = uVar7;
        uVar7 = (*(param_2 + 0x6eb) ^ uVar7) & 1 ^ uVar7;
        *(iStack_4 + 0x1c) = uVar7;
        *(iStack_4 + 0x1c) = (*(param_2 + 0xafc) << 9 ^ uVar7) & 0x200 ^ uVar7;
    }
    fcn.00011ce1();
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0xa44) ^ *(iStack_4 + 0x1c)) & 1;
    }
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        puVar11 = param_2 + 0x6f1;
        puVar13 = param_2 + 0x700;
        iVar6 = 5;
        puVar8 = iStack_4 + 0x1c;
        do {
            *puVar8 = *puVar8 ^ (puVar11[-5] ^ *puVar8) & 1;
            *puVar8 = *puVar8 ^ (*puVar11 * 2 ^ *puVar8) & 2;
            puVar11 = puVar11 + 1;
            *(puVar8 + 1) = puVar13[-5];
            uVar3 = *puVar13;
            puVar13 = puVar13 + 1;
            *(puVar8 + 6) = uVar3;
            iVar6 = iVar6 + -1;
            puVar8 = puVar8 + 2;
        } while (iVar6 != 0);
    }
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x70d) ^ *(iStack_4 + 0x1c)) & 1;
        uVar7 = (*(param_2 + 0xa98) * 2 ^ *(iStack_4 + 0x1c)) & 2 ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar7;
        *(iStack_4 + 0x1c) = (*(param_2 + 0xa99) << 2 ^ uVar7) & 4 ^ uVar7;
        *(iStack_4 + 0x20) = *(param_2 + 0x70e);
    }
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0xdaa) ^ *(iStack_4 + 0x1c)) & 1;
    }
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x720) ^ *(iStack_4 + 0x1c)) & 1;
        uVar7 = (*(param_2 + 0xa9e) << 2 ^ *(iStack_4 + 0x1c)) & 4 ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar7;
        *(iStack_4 + 0x1c) = (*(param_2 + 0x9e4) * 2 ^ uVar7) & 2 ^ uVar7;
    }
    fcn.00011dc7();
    fcn.0001215f();
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(param_2 + 0xa9b);
        *(iStack_4 + 0x1d) = *(param_2 + 0xa9c);
        *(iStack_4 + 0x1e) = *(param_2 + 0xa9d);
    }
    fcn.00012320();
    iVar6 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar6) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x41c) ^ *(iStack_4 + 0x1c)) & 1;
        *(iStack_4 + 0x20) = *(param_2 + 0x420);
        *(iStack_4 + 0x24) = *(param_2 + 0x424);
    }
    return 0;
}


/* fcn.00012ad2 @ 0x12ad2 */

uint __fastcall fcn.00012ad2(uint param_1,int param_2)

{
    uchar *puVar1;
    ushort *puVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    uchar *puVar8;
    uchar *puVar9;
    ushort *puVar10;
    ushort *puVar11;
    uint *puVar12;
    int iStack_3c;
    uint *puStack_38;
    uint uStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    uint *puStack_24;
    uchar *puStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    int aiStack_c [2];
    
    uStack_34 = 0;
    iStack_3c = 0;
    iStack_1c = param_2;
    fcn.00010dca(param_1,&uStack_34);
    fcn.00010f7c(&iStack_3c);
    fcn.00010f7c(&iStack_28);
    fcn.00010f7c(&iStack_2c);
    fcn.00010f7c(&iStack_30);
    fcn.00010f7c(&iStack_14);
    fcn.00010f7c(&iStack_10);
    fcn.00010f7c(&iStack_18);
    fcn.00010f7c(aiStack_c);
    iVar5 = *(param_2 + 0x58);
    puStack_38 = *(param_2 + 0x5c);
    if (iVar5 == 0) {
        iVar5 = *(*0xfed00148 + 0x34);
        puStack_38 = *(*0xfed00148 + 0x38);
        if (iVar5 == 0) goto code_r0x00012be8;
    }
    *(iStack_28 + 0x20) = iVar5;
    *(iStack_28 + 0x24) = 0;
    *(iStack_28 + 0x1c) = puStack_38;
    iVar4 = fcn.00010f60();
    (**(iVar4 + 0x2c))(0x4400,5,iVar5,0);
    iVar5 = fcn.00010f60();
    (**(iVar5 + 0x2c))(0x4400,6,puStack_38,0);
code_r0x00012be8:
    *(iStack_28 + 0x28) = *(iStack_28 + 0x28) ^ (*(param_2 + 0x682) * 2 ^ *(iStack_28 + 0x28)) & 2;
    uVar6 = (*(param_2 + 0x5e8) ^ *(iStack_28 + 0x28)) & 1 ^ *(iStack_28 + 0x28);
    *(iStack_28 + 0x28) = uVar6;
    uVar6 = (*(param_2 + 0x682) * 2 ^ uVar6) & 2 ^ uVar6;
    *(iStack_28 + 0x28) = uVar6;
    uVar6 = (*(param_2 + 0x683) << 2 ^ uVar6) & 4 ^ uVar6;
    *(iStack_28 + 0x28) = uVar6;
    *(iStack_28 + 0x28) = (*(param_2 + 0x6b8) << 3 ^ uVar6) & 0x18 ^ uVar6;
    *(iStack_28 + 0x2c) = *(param_2 + 0x6c0);
    *(iStack_28 + 0x28) = *(iStack_28 + 0x28) ^ (*(param_2 + 0x6c7) << 6 ^ *(iStack_28 + 0x28)) & 0x40;
    *(iStack_28 + 0x28) = *(iStack_28 + 0x28) ^ (*(param_2 + 0x6c9) << 8 ^ *(iStack_28 + 0x28)) & 0x100;
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(param_2 + 0x60) << 0x15 ^ *(iStack_2c + 0x1c)) & 0x200000;
    cVar3 = fcn.0001413c();
    iVar5 = iStack_1c;
    puVar8 = param_2 + 0x5ee;
    puVar10 = param_2 + 0x5fe;
    puStack_20 = (cVar3 != '\0') + 2;
    puStack_24 = iStack_30 + 0xbc;
    puVar9 = iStack_30 + 0x91;
    puStack_38 = param_2 + 0x614;
    puVar11 = iStack_30 + 100;
    param_2 = -0x5ee - param_2;
    puVar12 = puStack_24;
    do {
        puVar9[-5] = puVar8[-5];
        *puVar9 = *puVar8;
        puVar11[0xf] = puVar10[-5];
        *puVar11 = *puVar10;
        puVar9[5] = puVar8[0x1a];
        puVar9[10] = puVar8[0x1f];
        *puVar12 = *puStack_38;
        puVar9[0x14] = puVar8[0x3a];
        puVar9[0x3f] = puVar8[0xd4];
        puVar11[-0x1e] = puVar10[0x1f];
        puVar11[-0x19] = puVar10[0x24];
        puVar11[-0x14] = puVar10[0x29];
        puVar11[-0xf] = puVar10[0x2e];
        puVar11[-10] = puVar10[0x33];
        puVar11[-5] = puVar10[0x38];
        puVar11[5] = puVar10[0x3d];
        puVar9[0xbb] = 0;
        if (((((*(iStack_3c + 0x1c) & 1) == 0) ||
             (((*(iStack_3c + 0x38) & 0x1000000) != 0 && (puVar8 + param_2 == NULL)))) ||
            (((*(iStack_3c + 0x38) & 0x2000000) != 0 && (puVar8 + param_2 == 0x1)))) ||
           (((*(iStack_3c + 0x38) & 0x4000000) != 0 && (puVar8 + param_2 == 0x2)))) {
            puVar9[0xbb] = puVar8[0xdd];
        }
        if (puVar8[0xdd] == '\x01') {
            puVar11[0x6e] = puVar10[0x57];
        }
        puVar12 = puVar12 + 1;
        puStack_38 = puStack_38 + 1;
        puVar9[0x19] = puVar8[0x43];
        puVar9[0x1e] = puVar8[0x48];
        puVar2 = puVar10 + 0x4b;
        puVar10 = puVar10 + 1;
        puVar11[10] = *puVar2;
        puVar11 = puVar11 + 1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
    } while (puVar8 + param_2 < puStack_20);
    *(iStack_30 + 0x20) = *(iStack_1c + 0x62d);
    *(iStack_30 + 0xb8) = *(iStack_1c + 0x62e);
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(iStack_1c + 0x630) ^ *(iStack_30 + 0x1c)) & 1;
    *(iStack_30 + 0x24) = *(iStack_1c + 0x684);
    *(iStack_30 + 0x22) = *(iStack_1c + 0x686);
    *(iStack_30 + 0xd5) = *(iStack_1c + 0x6aa);
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(iStack_1c + 0x6b9) << 3 ^ *(iStack_30 + 0x1c)) & 8;
    *(iStack_30 + 0xb6) = *(iStack_1c + 0x6be);
    *(iStack_30 + 0xb4) = *(iStack_1c + 0x6ba);
    *(iStack_30 + 0xd8) = *(iStack_1c + 0x690);
    *(iStack_30 + 0xd9) = *(iStack_1c + 0x691);
    *(iStack_30 + 0xda) = *(iStack_1c + 0x692);
    *(iStack_30 + 0xdc) = *(iStack_1c + 0x69e);
    *(iStack_30 + 0xde) = *(iStack_1c + 0x6a7);
    *(iStack_30 + 0xe0) = *(iStack_1c + 0x6a8);
    *(iStack_30 + 0x138) = *(iStack_1c + 0x6a0);
    *(iStack_30 + 0x154) = *(iStack_1c + 0x6d0);
    *(iStack_30 + 0x158) = *(iStack_1c + 0x6d4);
    *(iStack_30 + 0x15c) = *(iStack_1c + 0x6d8);
    *(iStack_30 + 0x160) = *(iStack_1c + 0x6dc);
    *(iStack_30 + 0x13b) = *(iStack_1c + 0x6a3);
    *(iStack_30 + 0x13c) = *(iStack_1c + 0x6a4);
    *(iStack_30 + 0x13d) = *(iStack_1c + 0x6a5);
    *(iStack_30 + 0x13e) = *(iStack_1c + 0x6a6);
    *(iStack_30 + 0x116) = *(iStack_1c + 0x6ca);
    *(iStack_18 + 0x1c) = *(iStack_18 + 0x1c) ^ (*(iStack_1c + 0xcd1) ^ *(iStack_18 + 0x1c)) & 1;
    uVar6 = (*(iStack_1c + 0xcd2) * 2 ^ *(iStack_18 + 0x1c)) & 2 ^ *(iStack_18 + 0x1c);
    *(iStack_18 + 0x1c) = uVar6;
    uVar6 = (*(iStack_1c + 0xcd3) << 2 ^ uVar6) & 4 ^ uVar6;
    *(iStack_18 + 0x1c) = uVar6;
    uVar6 = (*(iStack_1c + 0xcd6) << 4 ^ uVar6) & 0x10 ^ uVar6;
    *(iStack_18 + 0x1c) = uVar6;
    *(iStack_18 + 0x1c) = (*(iStack_1c + 0xcd7) << 5 ^ uVar6) & 0x20 ^ uVar6;
    *(iStack_18 + 0x20) = *(iStack_1c + 0x6bc);
    *(iStack_18 + 0x1c) = *(iStack_18 + 0x1c) ^ (*(iStack_1c + 0xd71) << 6 ^ *(iStack_18 + 0x1c)) & 0x40;
    *(iStack_18 + 0x1c) = *(iStack_18 + 0x1c) ^ (*(iStack_1c + 0xcd4) << 3 ^ *(iStack_18 + 0x1c)) & 8;
    iStack_18 = CONCAT31(iStack_18._1_3_,*(iStack_1c + 0xcd5));
    iVar4 = fcn.00010f60();
    (**(iVar4 + 0x20))(0x4400,0x60008006,iStack_18);
    puVar9 = iVar5 + 0xfaf;
    puVar8 = iStack_2c + 0x40;
    iVar4 = 8;
    do {
        puVar8[8] = puVar9[8];
        *puVar8 = *puVar9;
        puVar8[0x18] = puVar9[0x18];
        puVar1 = puVar9 + 0x10;
        puVar9 = puVar9 + 1;
        puVar8[0x10] = *puVar1;
        puVar8 = puVar8 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xcb6) << 3 ^ *(iStack_2c + 0x1c)) & 0x18;
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xcb7) << 5 ^ *(iStack_2c + 0x1c)) & 0x60;
    *(iStack_2c + 0x34) = *(iVar5 + 0xcb8);
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xcb9) << 7 ^ *(iStack_2c + 0x1c)) & 0x80;
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xcba) << 8 ^ *(iStack_2c + 0x1c)) & 0x100;
    *(iStack_2c + 0x38) = *(iVar5 + 0xcbb);
    uVar6 = *(iVar5 + 0xcbc) << 9 | *(iStack_2c + 0x1c) & 0xfffe01ff;
    *(iStack_2c + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcbd) << 0x11 ^ uVar6) & 0x20000 ^ uVar6;
    *(iStack_2c + 0x1c) = uVar6;
    *(iStack_2c + 0x1c) = (*(iVar5 + 0xcbe) << 0x12 ^ uVar6) & 0x40000 ^ uVar6;
    *(iStack_2c + 0x28) = *(iVar5 + 0xcbf);
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xcc0) << 0x13 ^ *(iStack_2c + 0x1c)) & 0x80000;
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xcc1) << 0x14 ^ *(iStack_2c + 0x1c)) & 0x100000;
    *(iStack_2c + 0x2c) = *(iVar5 + 0xd3c);
    *(iStack_2c + 0x2e) = *(iVar5 + 0xd40);
    *(iStack_2c + 0x30) = *(iVar5 + 0xd44);
    *(iStack_2c + 0x32) = *(iVar5 + 0xd48);
    *(iStack_2c + 0x3c) = *(iVar5 + 0xd4c);
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xd72) << 0x16 ^ *(iStack_2c + 0x1c)) & 0x400000;
    *(iStack_2c + 0x29) = *(iStack_2c + 0x29) ^ (*(iVar5 + 0xd77) ^ *(iStack_2c + 0x29)) & 1;
    uVar7 = (*(iVar5 + 0xd7c) << 2 ^ *(iStack_2c + 0x29)) & 4 ^ *(iStack_2c + 0x29);
    *(iStack_2c + 0x29) = uVar7;
    uVar7 = (*(iVar5 + 0xd7d) << 3 ^ uVar7) & 8 ^ uVar7;
    *(iStack_2c + 0x29) = uVar7;
    uVar7 = (*(iVar5 + 0xd7e) << 4 ^ uVar7) & 0x10 ^ uVar7;
    *(iStack_2c + 0x29) = uVar7;
    *(iStack_2c + 0x29) = (*(iVar5 + 0xd7f) << 5 ^ uVar7) & 0x20 ^ uVar7;
    *(iStack_2c + 0x2a) = *(iVar5 + 0xd7a);
    *(iStack_2c + 0x2b) = *(iVar5 + 0xd7b);
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(iVar5 + 0xd81) << 0x17 ^ *(iStack_2c + 0x1c)) & 0x800000;
    uVar6 = (*(iVar5 + 0xd82) << 0x18 ^ *(iStack_2c + 0x1c)) & 0x1000000 ^ *(iStack_2c + 0x1c);
    *(iStack_2c + 0x1c) = uVar6;
    *(iStack_2c + 0x1c) = (*(iVar5 + 0xd83) << 0x19 ^ uVar6) & 0x2000000 ^ uVar6;
    *(iStack_14 + 0x1d) = *(iVar5 + 0xcc2);
    *(iStack_14 + 0x5c) = *(iVar5 + 0xcc3);
    *(iStack_14 + 100) = *(iVar5 + 0xcc6);
    *(iStack_14 + 0x6c) = *(iVar5 + 0xcc9);
    *(iStack_14 + 0x5d) = *(iVar5 + 0xcc4);
    *(iStack_14 + 0x65) = *(iVar5 + 0xcc7);
    *(iStack_14 + 0x6d) = *(iVar5 + 0xcca);
    *(iStack_14 + 0x74) = *(iStack_14 + 0x74) ^ (*(iVar5 + 0xccc) ^ *(iStack_14 + 0x74)) & 1;
    *(iStack_14 + 0x74) = *(iStack_14 + 0x74) ^ (*(iVar5 + 0xccd) * 2 ^ *(iStack_14 + 0x74)) & 2;
    *(iStack_14 + 0x1c) = *(iVar5 + 0xcf4);
    if (*(iStack_14 + 0x1d) != '\0') {
        uVar6 = 0;
        do {
            *(iStack_14 + 0x24 + uVar6) = *(iVar5 + 0xcf5 + uVar6);
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(iStack_14 + 0x1d));
    }
    *(iStack_14 + 0x60) = *(iVar5 + 0xd50);
    *(iStack_14 + 0x62) = *(iVar5 + 0xd54);
    *(iStack_14 + 0x68) = *(iVar5 + 0xd58);
    *(iStack_14 + 0x6a) = *(iVar5 + 0xd5c);
    *(iStack_14 + 0x70) = *(iVar5 + 0xd60);
    *(iStack_14 + 0x72) = *(iVar5 + 0xd64);
    *(iStack_10 + 0x1c) = *(iStack_10 + 0x1c) ^ (*(iVar5 + 0xcce) ^ *(iStack_10 + 0x1c)) & 1;
    uVar6 = *(iVar5 + 0xccf) * 2 | *(iStack_10 + 0x1c) & 0xfffffe01;
    *(iStack_10 + 0x1c) = uVar6;
    *(iStack_10 + 0x1c) = (*(iVar5 + 0xcd0) << 9 ^ uVar6) & 0x200 ^ uVar6;
    *(iStack_10 + 0x24) = *(iVar5 + 0xd2e);
    *(iStack_10 + 0x20) = *(iVar5 + 0xd68);
    *(iStack_10 + 0x22) = *(iVar5 + 0xd6c);
    *(aiStack_c[0] + 0x1c) = *(aiStack_c[0] + 0x1c) ^ (*(iVar5 + 0xcd8) ^ *(aiStack_c[0] + 0x1c)) & 1;
    uVar6 = (*(iVar5 + 0xcd9) * 2 ^ *(aiStack_c[0] + 0x1c)) & 2 ^ *(aiStack_c[0] + 0x1c);
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcda) << 2 ^ uVar6) & 4 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcdb) << 3 ^ uVar6) & 8 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcdc) << 4 ^ uVar6) & 0x10 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcdd) << 5 ^ uVar6) & 0x20 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcde) << 6 ^ uVar6) & 0x40 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xcdf) << 7 ^ uVar6) & 0x80 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce0) << 8 ^ uVar6) & 0x100 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce1) << 9 ^ uVar6) & 0x200 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce2) << 10 ^ uVar6) & 0x400 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce3) << 0xb ^ uVar6) & 0x800 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce4) << 0xc ^ uVar6) & 0x1000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xd78) << 0xd ^ uVar6) & 0x2000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xd79) << 0xe ^ uVar6) & 0x4000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce5) << 0x11 ^ uVar6) & 0x20000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce6) << 0x12 ^ uVar6) & 0x40000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce7) << 0x13 ^ uVar6) & 0x80000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    uVar6 = (*(iVar5 + 0xce8) << 0x14 ^ uVar6) & 0x100000 ^ uVar6;
    *(aiStack_c[0] + 0x1c) = uVar6;
    *(aiStack_c[0] + 0x1c) = (*(iVar5 + 0xce9) << 0x15 ^ uVar6) & 0x200000 ^ uVar6;
    *(aiStack_c[0] + 0x2c) = *(iVar5 + 0xcea);
    *(aiStack_c[0] + 0x34) = *(iVar5 + 0xcec);
    *(aiStack_c[0] + 0x38) = *(iVar5 + 0xced);
    *(aiStack_c[0] + 0x3c) = *(iVar5 + 0xcee);
    *(aiStack_c[0] + 0x40) = *(iVar5 + 0xcef);
    *(aiStack_c[0] + 0x44) = *(iVar5 + 0xcf0);
    *(aiStack_c[0] + 0x4c) = *(iVar5 + 0xcf1);
    *(aiStack_c[0] + 0x50) = *(aiStack_c[0] + 0x50) ^ (*(iVar5 + 0xd86) ^ *(aiStack_c[0] + 0x50)) & 1;
    *(aiStack_c[0] + 0x1c) = *(aiStack_c[0] + 0x1c) ^ (*(iVar5 + 0xcf2) << 0x16 ^ *(aiStack_c[0] + 0x1c)) & 0x400000;
    *(aiStack_c[0] + 0x1c) = *(aiStack_c[0] + 0x1c) ^ (*(iVar5 + 0xd70) << 0x17 ^ *(aiStack_c[0] + 0x1c)) & 0x800000;
    *(aiStack_c[0] + 0x20) = *(iVar5 + 0xd30);
    *(aiStack_c[0] + 0x22) = *(iVar5 + 0xd32);
    *(aiStack_c[0] + 0x24) = *(iVar5 + 0xd34);
    *(aiStack_c[0] + 0x26) = *(iVar5 + 0xd36);
    *(aiStack_c[0] + 0x28) = *(iVar5 + 0xd38);
    return 0;
}


/* fcn.00012a4e @ 0x12a4e */

uint __fastcall fcn.00012a4e(uint param_1,int param_2)

{
    uint *puVar1;
    int iVar2;
    uint *puVar3;
    int32_t var_4h;
    
    fcn.00010f7c(&var_4h);
    iVar2 = 4;
    puVar1 = var_4h + 0x20;
    puVar3 = param_2 + 0xaa0;
    do {
        *puVar1 = *puVar3;
        puVar1[1] = puVar3[1];
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + 2;
        puVar3 = puVar3 + 2;
    } while (iVar2 != 0);
    *(var_4h + 0x1c) = *(param_2 + 0xac0);
    *(var_4h + 0x40) = *(param_2 + 0xac8);
    *(var_4h + 0x44) = *(param_2 + 0xacc);
    *(var_4h + 0x48) = *(param_2 + 0xad0);
    *(var_4h + 0x4c) = *(param_2 + 0xad4);
    *(var_4h + 0x50) = *(param_2 + 0xad8);
    *(var_4h + 0x51) = *(param_2 + 0xad9);
    return 0;
}


/* fcn.00010f7c @ 0x10f7c */

uint __cdecl fcn.00010f7c(int32_t arg_8h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    char cVar3;
    int in_ECX;
    uint16_t uVar4;
    int iVar5;
    int iVar6;
    
    uVar1 = *(in_ECX + 0x1e);
    iVar5 = 0;
    uVar4 = 0;
    if (uVar1 != 0) {
        uVar2 = *(in_ECX + 2);
        do {
            if (uVar2 < iVar5 + 0x24U) {
                return 0x8000000e;
            }
            iVar6 = in_ECX + 0x24 + iVar5;
            cVar3 = fcn.00010f3c();
            if (cVar3 != '\0') {
                *arg_8h = iVar6;
                return 0;
            }
            iVar5 = iVar5 + *(iVar6 + 2);
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0x8000000e;
}


/* fcn.00013f06 @ 0x13f06 */

uint __fastcall fcn.00013f06(uint param_1,int param_2)

{
    uint32_t uVar1;
    int32_t var_4h;
    
    fcn.00010f7c(&var_4h);
    *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0xaf7) << 4 ^ *(var_4h + 0x1c)) & 0x30;
    uVar1 = (*(param_2 + 0xaf8) << 7 ^ *(var_4h + 0x1c)) & 0x80 ^ *(var_4h + 0x1c);
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0xfda) << 8 ^ uVar1) & 0x100 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0xda4) ^ uVar1) & 3 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0xda5) << 3 ^ uVar1) & 8 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    *(var_4h + 0x1c) = (*(param_2 + 0xda6) << 6 ^ uVar1) & 0x40 ^ uVar1;
    return 0;
}


/* fcn.0001358d @ 0x1358d */

uint __fastcall fcn.0001358d(uint param_1,int param_2)

{
    uint *puVar1;
    uchar *puVar2;
    ushort uVar3;
    uint32_t uVar4;
    uchar *puVar5;
    uint32_t *puVar6;
    uchar *puVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    uchar *puVar12;
    ushort *puVar13;
    uint8_t uStack_25;
    int aiStack_24 [2];
    int iStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    
    iStack_1c = 0;
    puVar1 = param_2 + 0x40;
    iStack_4 = param_2;
    fcn.00010f7c(&iStack_1c);
    uStack_14 = 0;
    fcn.00010f7c(&uStack_14);
    iStack_c = 0;
    fcn.00010f7c(&iStack_c);
    iStack_10 = 0;
    fcn.00010f7c(&iStack_10);
    aiStack_24[0] = 0;
    fcn.00010f7c(aiStack_24);
    iStack_8 = 0;
    fcn.00010f7c(&iStack_8);
    iStack_18 = 0;
    fcn.00010f7c(&iStack_18);
    if (iStack_1c != 0) {
        *(iStack_1c + 0x1c) = *(param_2 + 0x54);
        *(iStack_1c + 0x1e) = *(param_2 + 0xc98);
        *(iStack_1c + 0x1f) = *(param_2 + 0xc99);
    }
    if (iStack_18 != 0) {
        *(iStack_18 + 0x1c) = *(param_2 + 0x5b6);
    }
    if (uStack_14 != 0) {
        *(uStack_14 + 0x30) = *(param_2 + 0x50);
        *(uStack_14 + 0x28) = *puVar1;
        *(uStack_14 + 0x2c) = *(param_2 + 0x44);
        *(uStack_14 + 0x27) = *(param_2 + 0x4eb);
        *(uStack_14 + 0x1e) = *(param_2 + 0x4ec);
        *(uStack_14 + 0x20) = *(param_2 + 0x4ed);
        *(uStack_14 + 0x1c) = *(param_2 + 0xc9a);
        *(uStack_14 + 0x1d) = *(param_2 + 0xc9b);
        *(uStack_14 + 0x21) = *(param_2 + 0xc9c);
        *(uStack_14 + 0x22) = *(param_2 + 0xc9d);
        *(uStack_14 + 0x24) = *(param_2 + 0xc9e);
        *(uStack_14 + 0x25) = *(param_2 + 0xc9f);
        *(uStack_14 + 0x40) = *(param_2 + 0xca4);
        *(uStack_14 + 0x44) = *(param_2 + 0xca8);
        *(uStack_14 + 0x34) = *(param_2 + 0x48);
        *(uStack_14 + 0x26) = *(param_2 + 0xca0);
        *(uStack_14 + 0x3d) = *(param_2 + 0x51a);
        *(uStack_14 + 0x4c) = *(param_2 + 0xfdc);
        *(uStack_14 + 0x48) = *(param_2 + 0xfe0);
    }
    uStack_14 = fcn.000141d8();
    uStack_14 = uStack_14 & 0xff;
    uStack_25 = 0;
    iVar11 = param_2;
    if (uStack_14 != 0) {
        uVar9 = 0;
        do {
            iVar11 = uVar9 * 0x1f0;
            puVar6 = iVar11 + 0x28 + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xbd8 + uVar9) ^ *(iVar11 + 0x28 + iStack_10)) & 1;
            uVar4 = (*(param_2 + 0xbdc + uVar9) * 2 ^ *(iVar11 + 0x28 + iStack_10)) & 2 ^ *(iVar11 + 0x28 + iStack_10);
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xbe0 + uVar9) << 2 ^ uVar4) & 4 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xbec + uVar9) << 4 ^ uVar4) & 0x10 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xbf0 + uVar9) << 5 ^ uVar4) & 0x20 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xbf4 + uVar9) << 6 ^ uVar4) & 0x40 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xbf8 + uVar9) << 7 ^ uVar4) & 0x80 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xbfc + uVar9) << 8 ^ uVar4) & 0x100 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xc00 + uVar9) << 9 ^ uVar4) & 0x200 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xc04 + uVar9) << 10 ^ uVar4) & 0x400 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xc08 + uVar9) << 0xb ^ uVar4) & 0x800 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xc0c + uVar9) << 0xc ^ uVar4) & 0x3000 ^ uVar4;
            *(iVar11 + 0x28 + iStack_10) = uVar4;
            *(iVar11 + 0x28 + iStack_10) = (*(param_2 + 0xc10 + uVar9) << 0xe ^ uVar4) & 0x4000 ^ uVar4;
            puVar6 = iVar11 + 0x1c + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xc44 + uVar9) * 2 ^ *(iVar11 + 0x1c + iStack_10)) & 2;
            puVar6 = iVar11 + 0x2c + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xfab + uVar9) << 4 ^ *(iVar11 + 0x2c + iStack_10)) & 0x10;
            *(iVar11 + 0x21 + iStack_10) = *(param_2 + 0xfa6 + uVar9);
            puVar6 = iVar11 + 0x28 + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xc14 + uVar9) << 0xf ^ *(iVar11 + 0x28 + iStack_10)) & 0x8000;
            puVar6 = iVar11 + 0x28 + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xc38 + uVar9) << 0x11 ^ *(iVar11 + 0x28 + iStack_10)) & 0x20000;
            *(iVar11 + 0x30 + iStack_10) = *(param_2 + 0xc1c + uVar9);
            *(iVar11 + 0x31 + iStack_10) = *(param_2 + 0xc24 + uVar9);
            puVar6 = iVar11 + 0x28 + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xc18 + uVar9) << 0x10 ^ *(iVar11 + 0x28 + iStack_10)) & 0x10000;
            *(iVar11 + 0x33 + iStack_10) = *(param_2 + 0xc28 + uVar9);
            *(iVar11 + 0x34 + iStack_10) = *(param_2 + 0xc2c + uVar9);
            *(iVar11 + 0x35 + iStack_10) = *(param_2 + 0xc30 + uVar9);
            *(iVar11 + 0x44 + iStack_10) = *(param_2 + 0xc34 + uVar9);
            puVar6 = iVar11 + 0x28 + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xbe4 + uVar9) << 3 ^ *(iVar11 + 0x28 + iStack_10)) & 8;
            *(iVar11 + 0x48 + iStack_10) = *(param_2 + 0xc3c + uVar9 * 2);
            *(iVar11 + 0x36 + iStack_10) = *(param_2 + 0xbe8 + uVar9);
            *(iVar11 + 0x38 + iStack_10) = *(param_2 + 0xf56 + uVar9 * 2);
            *(iVar11 + 0x3a + iStack_10) = *(param_2 + 0xf5e + uVar9 * 2);
            *(iVar11 + 0x3c + iStack_10) = *(param_2 + 0xf66 + uVar9);
            *(iVar11 + 0x3d + iStack_10) = *(param_2 + 0xf6a + uVar9);
            *(iVar11 + 0x3e + iStack_10) = *(param_2 + 0xf6e + uVar9 * 2);
            *(iVar11 + 0x40 + iStack_10) = *(param_2 + 0xf76 + uVar9);
            *(iVar11 + 0x41 + iStack_10) = *(param_2 + 0xf7a + uVar9);
            *(iVar11 + 0x42 + iStack_10) = *(param_2 + 0xec4 + uVar9 * 2);
            puVar6 = iVar11 + 0x24 + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xf86 + uVar9) ^ *(iVar11 + 0x24 + iStack_10)) & 0xf;
            uVar4 = (*(param_2 + 0xf8a + uVar9) << 4 ^ *(iVar11 + 0x24 + iStack_10)) & 0xf0 ^
                    *(iVar11 + 0x24 + iStack_10);
            *(iVar11 + 0x24 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xf8e + uVar9) << 8 ^ uVar4) & 0xf00 ^ uVar4;
            *(iVar11 + 0x24 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xf92 + uVar9) << 0xc ^ uVar4) & 0xf000 ^ uVar4;
            *(iVar11 + 0x24 + iStack_10) = uVar4;
            uVar4 = (*(param_2 + 0xf96 + uVar9) << 0x10 ^ uVar4) & 0xf0000 ^ uVar4;
            *(iVar11 + 0x24 + iStack_10) = uVar4;
            *(iVar11 + 0x24 + iStack_10) = (*(param_2 + 0xf9a + uVar9) << 0x14 ^ uVar4) & 0xf00000 ^ uVar4;
            puVar6 = iVar11 + 0x2c + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xbc5 + uVar9) << 5 ^ *(iVar11 + 0x2c + iStack_10)) & 0x20;
            puVar6 = iVar11 + 0x2c + iStack_10;
            *puVar6 = *puVar6 ^ (*(param_2 + 0xbc9 + uVar9) << 6 ^ *(iVar11 + 0x2c + iStack_10)) & 0x40;
            *(iStack_10 + 0x8b7 + uVar9 * 4) = *(param_2 + 0xfd5 + uVar9);
            uStack_25 = uStack_25 + 1;
            uVar9 = uStack_25;
        } while (uVar9 < uStack_14);
        iVar11 = iStack_4;
    }
    *(iStack_10 + 0x8ac) = *(iStack_10 + 0x8ac) ^ (*(param_2 + 0xbc4) ^ *(iStack_10 + 0x8ac)) & 1;
    *(iStack_10 + 0x890) = *(iStack_10 + 0x890) ^ (*(param_2 + 0xbcd) * 2 ^ *(iStack_10 + 0x890)) & 2;
    *(iStack_10 + 0x8ac) = *(iStack_10 + 0x8ac) ^ (*(param_2 + 0xbd0) << 4 ^ *(iStack_10 + 0x8ac)) & 0x10;
    *(iStack_10 + 0x9b8) = *(iVar11 + 0x1050);
    *(iStack_10 + 0x9bc) = *(iVar11 + 0x1054);
    *(iStack_10 + 0x9b4) = *(iVar11 + 0x1058);
    if (iStack_c != 0) {
        *(iStack_c + 0x1c) = *(iStack_c + 0x1c) ^ (*(param_2 + 0x4ef) ^ *(iStack_c + 0x1c)) & 1;
    }
    if (iStack_8 != 0) {
        puVar5 = param_2 + 0x549;
        *(iStack_8 + 0x1c) = *(param_2 + 0x529);
        *(iStack_8 + 0x27) = *(param_2 + 0xfd4);
        iVar10 = 0x1f;
        puVar12 = iStack_8 + 0x29;
        do {
            puVar12[2] = puVar5[-0x1f];
            *puVar12 = *puVar5;
            puVar7 = puVar5 + 0x1f;
            puVar5 = puVar5 + 1;
            puVar12[1] = *puVar7;
            iVar10 = iVar10 + -1;
            puVar12 = puVar12 + 4;
        } while (iVar10 != 0);
        *(iStack_8 + 0x21) = *(param_2 + 0x587);
        *(iStack_8 + 0x22) = *(param_2 + 0x588);
        *(iStack_8 + 0x23) = *(param_2 + 0x589);
        *(iStack_8 + 0x24) = *(param_2 + 0x58a);
        *(iStack_8 + 0x25) = *(param_2 + 0x58b);
        *(iStack_8 + 0x26) = *(param_2 + 0x58c);
        *(iStack_8 + 0xa4) = *(param_2 + 0x590);
        *(iStack_8 + 0xa8) = *(param_2 + 0x594);
        *(iStack_8 + 0xac) = *(param_2 + 0x598);
        *(iStack_8 + 0xb0) = *(param_2 + 0x59c);
    }
    if (aiStack_24[0] != 0) {
        *(aiStack_24[0] + 0x15c) = *(param_2 + 0x5a6);
        *(aiStack_24[0] + 0x158) = *(param_2 + 0x5b0);
        *(aiStack_24[0] + 0x164) = *(param_2 + 0x4ee);
        *(aiStack_24[0] + 0x160) = *(param_2 + 0x518);
        *(aiStack_24[0] + 0x16c) = *(param_2 + 0x51b);
        *(aiStack_24[0] + 0x168) = *(param_2 + 0x5a1);
        *(aiStack_24[0] + 0x17c) = *(param_2 + 0x521);
        *(aiStack_24[0] + 0x17d) = *(param_2 + 0x522);
        *(aiStack_24[0] + 0x134) = *(param_2 + 0x4f0);
        *(aiStack_24[0] + 0x138) = *(param_2 + 0x4f4);
        *(aiStack_24[0] + 0x13c) = *(param_2 + 0x4f8);
        *(aiStack_24[0] + 0x140) = *(param_2 + 0x4fc);
        *(aiStack_24[0] + 0x144) = *(param_2 + 0x500);
        *(aiStack_24[0] + 0x148) = *(param_2 + 0x504);
        *(aiStack_24[0] + 0x14c) = *(param_2 + 0x508);
        *(aiStack_24[0] + 0x150) = *(param_2 + 0x50c);
        *(aiStack_24[0] + 0x154) = *(param_2 + 0x5a2);
        *(aiStack_24[0] + 0x156) = *(param_2 + 0x5a4);
        iStack_8 = 4;
        *(aiStack_24[0] + 0xb8) = *(aiStack_24[0] + 0xb8) ^ (*(param_2 + 0x442) * 2 ^ *(aiStack_24[0] + 0xb8)) & 2;
        puVar5 = param_2 + 0xf9e;
        puVar6 = aiStack_24[0] + 0x108;
        *(aiStack_24[0] + 0xb8) = (*(iVar11 + 0x5a0) ^ *(aiStack_24[0] + 0xb8)) & 1 ^ *(aiStack_24[0] + 0xb8);
        iStack_18 = puVar1 - puVar5;
        uVar8 = 0;
        puVar12 = puVar5;
        do {
            *puVar6 = puVar12[iStack_18 + 0x4d0];
            *puVar6 = *puVar6 ^ ((*(param_2 + 0x5ab) >> (uVar8 & 0x1f)) << 8 ^ *puVar6) & 0x100;
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 1;
            puVar12[(aiStack_24[0] - puVar5) + 0x174] = *puVar12;
            puVar12[(aiStack_24[0] - puVar5) + 0x178] = puVar12[puVar1 + (0xf62 - puVar5)];
            puVar12 = puVar12 + 1;
            iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
        puVar5 = param_2 + 0x5bb;
        puVar13 = param_2 + 0x5d8;
        iStack_4 = puVar1 - puVar5;
        iStack_8 = puVar1 - puVar5;
        iStack_c = puVar1 - puVar5;
        iStack_10 = puVar1 - puVar5;
        uStack_14 = puVar1 - puVar5;
        iVar11 = 4;
        puVar12 = puVar5;
        puVar7 = aiStack_24[0] + 0x1f;
        do {
            puVar7[1] = puVar12[puVar1 + (0x577 - puVar5)];
            *puVar7 = *puVar12;
            puVar7[0x13] = puVar12[iStack_4 + 0x57f];
            puVar7[0x14] = puVar12[iStack_8 + 0x583];
            *(puVar7 + 0x15) = puVar13[-8];
            puVar7[0x17] = puVar12[iStack_c + 0x590];
            puVar7[0x18] = puVar12[iStack_10 + 0x594];
            uVar3 = *puVar13;
            puVar13 = puVar13 + 1;
            *(puVar7 + 0x19) = uVar3;
            puVar7[0x1b] = puVar12[uStack_14 + 0x5a0];
            puVar2 = puVar12 + puVar1 + (0x5a4 - puVar5);
            puVar12 = puVar12 + 1;
            puVar7[0x1c] = *puVar2;
            iVar11 = iVar11 + -1;
            puVar7 = puVar7 + 0x20;
        } while (iVar11 != 0);
    }
    iVar11 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar11) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) | 0x20;
    }
    return 0;
}


/* fcn.00010d17 @ 0x10d17 */

bool fcn.00010d17(void)

{
    int iVar1;
    
    iVar1 = fcn.00010cf9();
    return iVar1 == 3;
}


/* fcn.00010cf9 @ 0x10cf9 */

int fcn.00010cf9(void)

{
    int iVar1;
    
    iVar1 = fcn.00010d67(0xb0040,0);
    return (-(iVar1 != -1) & 0xffffff15) + 0xee;
}


/* fcn.00010d67 @ 0x10d67 */

uint __cdecl fcn.00010d67(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000143b7();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.000143b7 @ 0x143b7 */

void fcn.000143b7(void)

{
    int iVar1;
    
    iVar1 = fcn.00010f60();
    (**(iVar1 + 0x10))(0x4810,0x200002);
    return;
}


/* fcn.00010f60 @ 0x10f60 */

int32_t __fastcall fcn.00010f60(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00010dca(param_1,&var_4h);
    return var_4h;
}


/* fcn.00013e6d @ 0x13e6d */

uint __fastcall fcn.00013e6d(uint param_1,int param_2)

{
    uint32_t uVar1;
    int32_t var_4h;
    
    fcn.00010f7c(&var_4h);
    *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x451) ^ *(var_4h + 0x1c)) & 1;
    uVar1 = (*(param_2 + 0x452) * 2 ^ *(var_4h + 0x1c)) & 2 ^ *(var_4h + 0x1c);
    *(var_4h + 0x1c) = uVar1;
    *(var_4h + 0x1c) = (*(param_2 + 0x453) << 2 ^ uVar1) & 4 ^ uVar1;
    *(var_4h + 0x20) = *(param_2 + 0x456);
    *(var_4h + 0x22) = *(param_2 + 0x458);
    *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x454) << 4 ^ *(var_4h + 0x1c)) & 0x10;
    *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x45a) << 7 ^ *(var_4h + 0x1c)) & 0x80;
    return 0;
}


/* fcn.00013fa3 @ 0x13fa3 */

uint __fastcall fcn.00013fa3(uint param_1,int param_2)

{
    uint8_t uVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    ushort *puVar5;
    int iVar6;
    uint8_t *puVar7;
    ushort *puVar8;
    int aiStack_8 [2];
    
    fcn.00010f7c(aiStack_8);
    iVar3 = fcn.00010e9e();
    iVar4 = 0;
    puVar7 = aiStack_8[0] + 0x24;
    iVar6 = 4;
    do {
        uVar1 = *(iVar4 + 0x5a7 + param_2);
        *puVar7 = uVar1;
        if (iVar3 != 0) {
            *puVar7 = *(iVar4 + 0x30 + iVar3) & uVar1;
        }
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 4;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar8 = param_2 + 0x5b2;
    iVar6 = 2;
    *(aiStack_8[0] + 0x1c) = *(param_2 + 0x5ac);
    puVar5 = aiStack_8[0] + 0x34;
    do {
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar5 = uVar2;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(aiStack_8[0] + 0x1e) = *(param_2 + 0x5ae);
    *(aiStack_8[0] + 0x21) = *(param_2 + 0x519);
    *(aiStack_8[0] + 0x22) = *(param_2 + 0xcac);
    return 0;
}


/* fcn.00010ff8 @ 0x10ff8 */

uint __fastcall fcn.00010ff8(uint param_1,int param_2)

{
    int32_t var_4h;
    
    fcn.00010f7c(&var_4h);
    *(var_4h + 0x1d) = *(param_2 + 0xada);
    *(var_4h + 0x20) = *(param_2 + 0xadc);
    *(var_4h + 0x22) = *(param_2 + 0xade);
    *(var_4h + 0x24) = *(param_2 + 0xae0);
    *(var_4h + 0x28) = *(param_2 + 0xae4);
    return 0;
}


/* fcn.00010f0f @ 0x10f0f */

void fcn.00010f0f(void)

{
    int iVar1;
    
    iVar1 = fcn.00010ed8();
    if (iVar1 != 0) {
        fcn.000104a0(iVar1,0xc);
    }
    return;
}


/* fcn.000104a0 @ 0x104a0 */

uint * fcn.000104a0(uint *param_1,uint32_t param_2)

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


/* fcn.00010e1c @ 0x10e1c */

void __fastcall fcn.00010e1c(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x28))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00010df7 @ 0x10df7 */

void __fastcall fcn.00010df7(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00010220 @ 0x10220 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00010220(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    //[00] -r-x section size 16832 named .text
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x1023b;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[3];
    puVar2[-2] = puVar4[2];
    puVar2[-3] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -4;
    puVar2[-4] = 0x10249;
    (*pcVar1)();
    *(puVar5 + 8) = puVar5 + 0xc;
    *(puVar5 + 4) = 0x10253;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.0001025f @ 0x1025f */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.0001025f(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x1027a;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[4];
    puVar2[-2] = puVar4[2];
    puVar2[-3] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -4;
    puVar2[-4] = 0x10288;
    (*pcVar1)();
    *(puVar5 + 8) = puVar5 + 0xc;
    *(puVar5 + 4) = 0x10292;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.0001029e @ 0x1029e */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.0001029e(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x102b9;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[6];
    puVar2[-2] = puVar4[2];
    puVar2[-3] = puVar4[8];
    puVar2[-4] = puVar4[5];
    puVar2[-5] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -6;
    puVar2[-6] = 0x102cd;
    (*pcVar1)();
    *(puVar5 + 0x10) = puVar5 + 0x14;
    *(puVar5 + 0xc) = 0x102d7;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.000102e3 @ 0x102e3 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.000102e3(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x102fe;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[6];
    puVar2[-2] = puVar4[3];
    puVar2[-3] = puVar4[2];
    puVar2[-4] = puVar4[5];
    puVar2[-5] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -6;
    puVar2[-6] = 0x10312;
    (*pcVar1)();
    *(puVar5 + 0x10) = puVar5 + 0x14;
    *(puVar5 + 0xc) = 0x1031c;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.00010328 @ 0x10328 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00010328(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x10343;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[8];
    puVar2[-2] = puVar4[2];
    puVar2[-3] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -4;
    puVar2[-4] = 0x10351;
    (*pcVar1)();
    *(puVar5 + 8) = puVar5 + 0xc;
    *(puVar5 + 4) = 0x1035b;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.00010367 @ 0x10367 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00010367(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x10382;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[7];
    puVar2[-2] = puVar4[8];
    puVar2[-3] = puVar4[2];
    puVar2[-4] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -5;
    puVar2[-5] = 0x10393;
    (*pcVar1)();
    *(puVar5 + 0xc) = puVar5 + 0x10;
    *(puVar5 + 8) = 0x1039d;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.000103a9 @ 0x103a9 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.000103a9(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x103c4;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[2];
    puVar2[-2] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -3;
    puVar2[-3] = 0x103cf;
    (*pcVar1)();
    puVar5[1] = puVar5 + 2;
    *puVar5 = 0x103d9;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.000103e5 @ 0x103e5 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.000103e5(void)

{
    code *pcVar1;
    uint *puVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    uint auStack_2c [2];
    
    auStack_2c[0] = InterruptDescriptorTableRegister();
    puVar2 = fcn.00010e41(&stack0xffffffd4);
    InterruptDescriptorTableRegister(*puVar2);
    puVar2[-1] = 0x10400;
    iVar3 = fcn.00010ff2();
    puVar4 = *(iVar3 + 100);
    puVar2[-1] = puVar4[6];
    puVar2[-2] = puVar4[2];
    puVar2[-3] = puVar4[5];
    puVar2[-4] = *puVar4;
    pcVar1 = puVar4[1];
    puVar5 = puVar2 + -5;
    puVar2[-5] = 0x10411;
    (*pcVar1)();
    *(puVar5 + 0xc) = puVar5 + 0x10;
    *(puVar5 + 8) = 0x1041b;
    puVar4 = fcn.00010e41();
    InterruptDescriptorTableRegister(*puVar4);
    return CONCAT44(puVar4[7],puVar4[9]);
}


/* fcn.00010e52 @ 0x10e52 */

int32_t fcn.00010e52(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00010f3c @ 0x10f3c */

uint32_t __fastcall fcn.00010f3c(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00010e7d @ 0x10e7d */

int16_t * __fastcall fcn.00010e7d(uint param_1,int16_t *param_2)

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


/* fcn.000141f4 @ 0x141f4 */

uint8_t fcn.000141f4(void)

{
    char cVar1;
    
    cVar1 = fcn.0001428d();
    if (cVar1 != '\0') {
        return 2;
    }
    cVar1 = fcn.00014274();
    if (cVar1 != '\0') {
        return 8;
    }
    cVar1 = fcn.00014265();
    return -(cVar1 != '\0') & 8;
}


/* fcn.0001428d @ 0x1428d */

uint fcn.0001428d(void)

{
    char cVar1;
    
    cVar1 = fcn.00014227();
    if (cVar1 != '\x02') {
        cVar1 = fcn.00014227();
        if (cVar1 != '\x05') {
            cVar1 = fcn.00014227();
            if (cVar1 != '\x06') {
                cVar1 = fcn.00014227();
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00014227 @ 0x14227 */

char fcn.00014227(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0x48a4 == -1) {
        uVar1 = fcn.00014218();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0x48a4 = cVar2;
    }
    return *0x48a4;
}


/* fcn.00014274 @ 0x14274 */

uint fcn.00014274(void)

{
    char cVar1;
    
    cVar1 = fcn.00014227();
    if (cVar1 != '\x01') {
        cVar1 = fcn.00014227();
        if (cVar1 != '\x04') {
            return 0;
        }
    }
    return 1;
}


/* fcn.00014265 @ 0x14265 */

bool fcn.00014265(void)

{
    char cVar1;
    
    cVar1 = fcn.00014227();
    return cVar1 == '\x04';
}


/* fcn.000142f8 @ 0x142f8 */

uint32_t fcn.000142f8(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00014227();
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0x10;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 0xc;
}


/* fcn.00014318 @ 0x14318 */

uint32_t fcn.00014318(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00014227();
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 10;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 4;
}


/* fcn.000142b8 @ 0x142b8 */

uint32_t fcn.000142b8(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00014227();
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0x1c;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 0xc;
}


/* fcn.0001104b @ 0x1104b */

void __fastcall fcn.0001104b(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = fcn.00010f7c(&var_4h);
    if ((-1 < iVar1) && (var_4h != 0)) {
        *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x434) ^ *(var_4h + 0x1c)) & 1;
        uVar2 = (*(param_2 + 0x435) << 3 ^ *(var_4h + 0x1c)) & 8 ^ *(var_4h + 0x1c);
        *(var_4h + 0x1c) = uVar2;
        uVar2 = (*(param_2 + 0x436) * 2 ^ uVar2) & 2 ^ uVar2;
        *(var_4h + 0x1c) = uVar2;
        *(var_4h + 0x1c) = (*(param_2 + 0x437) << 2 ^ uVar2) & 4 ^ uVar2;
        *(var_4h + 0x20) = *(param_2 + 0x438);
        *(var_4h + 0x24) = *(param_2 + 0x43c);
    }
    return;
}


/* fcn.00014338 @ 0x14338 */

ushort fcn.00014338(void)

{
    char cVar1;
    int16_t iVar2;
    
    cVar1 = fcn.00014265();
    if (cVar1 == '\0') {
        iVar2 = fcn.00014218();
        if (iVar2 != 0x5183) {
            return 2;
        }
    }
    return 0;
}


/* fcn.00014218 @ 0x14218 */

void fcn.00014218(void)

{
    fcn.00010d25(0xf8002,0);
    return;
}


/* fcn.00010d25 @ 0x10d25 */

ushort __cdecl fcn.00010d25(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000143b7();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.000110d4 @ 0x110d4 */

void __fastcall fcn.000110d4(uint param_1,int param_2)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint8_t *puVar7;
    int iStack_4;
    
    iVar4 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar4) {
        *(iStack_4 + 0x1c) = *(param_2 + 0x70f);
        *(iStack_4 + 0x20) = *(param_2 + 0x284);
        *(iStack_4 + 0x28) = *(param_2 + 0x28c);
        *(iStack_4 + 0x30) = *(param_2 + 0x294);
        *(iStack_4 + 0x24) = *(param_2 + 0x2c6);
        *(iStack_4 + 0x2c) = *(param_2 + 0x2c8);
        *(iStack_4 + 0x34) = *(param_2 + 0x2ca);
        *(iStack_4 + 0x1d) = *(param_2 + 0x2d0);
        *(iStack_4 + 0x38) = *(param_2 + 0x29c);
        puVar7 = param_2 + 0x2b4;
        *(iStack_4 + 0x3c) = *(param_2 + 0x2cc);
        iVar4 = 2;
        puVar5 = iStack_4 + 0x40;
        puVar6 = param_2 + 0x248;
        do {
            *puVar5 = *puVar5 ^ (puVar7[0x45c] ^ *puVar5) & 1;
            puVar5[1] = puVar6[-3];
            puVar5[3] = *puVar6;
            puVar5[5] = puVar6[3];
            puVar5[7] = puVar6[6];
            puVar5[2] = *puVar7;
            puVar5[4] = puVar7[3];
            puVar5[6] = puVar7[6];
            puVar1 = puVar7 + 9;
            puVar7 = puVar7 + 1;
            puVar5[8] = *puVar1;
            iVar4 = iVar4 + -1;
            puVar5 = puVar5 + 9;
            puVar6 = puVar6 + 1;
        } while (iVar4 != 0);
        puVar7 = param_2 + 0x2c0;
        puVar5 = param_2 + 0x278;
        iVar4 = 3;
        puVar6 = iStack_4 + 0x88;
        do {
            *puVar6 = *puVar6 ^ (puVar7[0x452] ^ *puVar6) & 1;
            puVar6[1] = puVar5[-3];
            uVar3 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6[3] = uVar3;
            puVar6[2] = *puVar7;
            puVar1 = puVar7 + 3;
            puVar7 = puVar7 + 1;
            puVar6[4] = *puVar1;
            iVar4 = iVar4 + -1;
            puVar6 = puVar6 + 5;
        } while (iVar4 != 0);
        puVar7 = param_2 + 0x2ac;
        puVar5 = param_2 + 0x21c;
        iVar4 = 8;
        puVar6 = iStack_4 + 0xc4;
        do {
            *puVar6 = *puVar6 ^ (puVar7[0x469] ^ *puVar6) & 1;
            uVar3 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6[1] = uVar3;
            uVar2 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6[2] = uVar2;
            iVar4 = iVar4 + -1;
            puVar6 = puVar6 + 3;
        } while (iVar4 != 0);
        *(iStack_4 + 0x124) = *(iStack_4 + 0x124) ^ (*(param_2 + 0x71d) ^ *(iStack_4 + 0x124)) & 1;
    }
    return;
}


/* fcn.00011250 @ 0x11250 */

void __fastcall fcn.00011250(uint param_1,int param_2)

{
    uint8_t *puVar1;
    uint16_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint8_t *puVar6;
    uint32_t *puVar7;
    int iVar8;
    int aiStack_10 [2];
    uint16_t *puStack_8;
    int iStack_4;
    
    iStack_4 = param_2;
    fcn.00010f7c(aiStack_10);
    iVar8 = aiStack_10[0];
    *(aiStack_10[0] + 0x1c) = *(param_2 + 0xc9);
    *(aiStack_10[0] + 0x1e) = *(param_2 + 0x61);
    *(aiStack_10[0] + 0x1d) = *(param_2 + 0xf53);
    *(aiStack_10[0] + 0x1f) = *(param_2 + 0x9e5);
    *(aiStack_10[0] + 0x20) = *(param_2 + 0x9e6);
    *(aiStack_10[0] + 0x21) = *(param_2 + 0x44f);
    *(aiStack_10[0] + 0x24) = *(param_2 + 0xca);
    *(aiStack_10[0] + 0x25) = *(param_2 + 0x9e7);
    cVar3 = fcn.000141f4();
    if (cVar3 != '\0') {
        puVar7 = param_2 + 0x74;
        puStack_8 = param_2 + 0xa20;
        puVar6 = param_2 + 0x9e8;
        puVar5 = iVar8 + 0x28;
        do {
            *puVar5 = *puVar5 ^ (puVar6[-0x986] ^ *puVar5) & 1;
            uVar4 = (*puVar6 * 2 ^ *puVar5) & 2 ^ *puVar5;
            *puVar5 = uVar4;
            uVar4 = (puVar6[8] << 2 ^ uVar4) & 4 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[0x10] << 3 ^ uVar4) & 8 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[0x18] << 4 ^ uVar4) & 0x10 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[0x20] << 5 ^ uVar4) & 0x20 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[-0x97e] << 6 ^ uVar4) & 0x40 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[-0x5a2] << 0x17 ^ uVar4) & 0x7800000 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[0x28] << 7 ^ uVar4) & 0x80 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar6[0x30] << 8 ^ uVar4) & 0xf00 ^ uVar4;
            *puVar5 = uVar4;
            uVar2 = *puStack_8;
            puStack_8 = puStack_8 + 1;
            uVar4 = (uVar2 << 0xc ^ uVar4) & 0x3ff000 ^ uVar4;
            *puVar5 = uVar4;
            puVar1 = puVar6 + 0x48;
            puVar6 = puVar6 + 1;
            *puVar5 = (*puVar1 << 0x16 ^ uVar4) & 0x400000 ^ uVar4;
            uVar4 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar5[1] = uVar4;
            uVar4 = fcn.000141f4();
            puVar5 = puVar5 + 2;
        } while (puVar6 + (-0x9e8 - param_2) < (uVar4 & 0xff));
        param_2 = iStack_4;
        iVar8 = aiStack_10[0];
    }
    *(iVar8 + 0x22) = *(param_2 + 0xa38);
    *(iVar8 + 0x23) = *(param_2 + 0xaf6);
    *(iVar8 + 0x68) = *(iVar8 + 0x68) ^ (*(param_2 + 0xa57) ^ *(iVar8 + 0x68)) & 3;
    uVar4 = (*(param_2 + 0xa58) << 2 ^ *(iVar8 + 0x68)) & 0xc ^ *(iVar8 + 0x68);
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa59) << 4 ^ uVar4) & 0x30 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa5a) << 6 ^ uVar4) & 0xc0 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa5b) << 8 ^ uVar4) & 0x300 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa5c) << 10 ^ uVar4) & 0xc00 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa5d) << 0xc ^ uVar4) & 0x3000 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa5e) << 0xe ^ uVar4) & 0xc000 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa5f) << 0x10 ^ uVar4) & 0x30000 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa60) << 0x12 ^ uVar4) & 0x40000 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa61) << 0x13 ^ uVar4) & 0x180000 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    uVar4 = (*(param_2 + 0xa62) << 0x15 ^ uVar4) & 0x200000 ^ uVar4;
    *(iVar8 + 0x68) = uVar4;
    *(iVar8 + 0x68) = (*(param_2 + 0xa63) << 0x16 ^ uVar4) & 0x400000 ^ uVar4;
    return;
}


/* fcn.0001151b @ 0x1151b */

void __fastcall fcn.0001151b(uint param_1,int param_2)

{
    uchar uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uchar *puVar6;
    int iVar7;
    int aiStack_8 [2];
    
    iVar3 = fcn.00010f7c(aiStack_8);
    iVar7 = aiStack_8[0];
    if (-1 < iVar3) {
        *(aiStack_8[0] + 0x1c) = *(aiStack_8[0] + 0x1c) ^ (*(param_2 + 0x3ec) ^ *(aiStack_8[0] + 0x1c)) & 1;
        uVar4 = (*(param_2 + 0x442) * 2 ^ *(aiStack_8[0] + 0x1c)) & 2 ^ *(aiStack_8[0] + 0x1c);
        *(aiStack_8[0] + 0x1c) = uVar4;
        uVar4 = (*(param_2 + 0x428) << 4 ^ uVar4) & 0x10 ^ uVar4;
        *(aiStack_8[0] + 0x1c) = uVar4;
        uVar4 = (*(param_2 + 0x528) << 5 ^ uVar4) & 0x20 ^ uVar4;
        *(aiStack_8[0] + 0x1c) = uVar4;
        if (*(param_2 + 0x9da) != '\0') {
            *(aiStack_8[0] + 0x1c) = uVar4 & 0xfffffffd;
        }
        *(aiStack_8[0] + 0x1c) = *(aiStack_8[0] + 0x1c) ^ (*(param_2 + 0xf54) << 2 ^ *(aiStack_8[0] + 0x1c)) & 4;
        cVar2 = fcn.000142f8();
        if (cVar2 != '\0') {
            puVar5 = iVar7 + 0x2c;
            puVar6 = param_2 + 0xa6e;
            do {
                *puVar5 = *puVar5 ^ (puVar6[-0x9da] << 8 ^ *puVar5) & 0x100;
                *puVar5 = *puVar6;
                *puVar5 = *puVar5 ^ (puVar6[0x78] << 9 ^ *puVar5) & 0x200;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
                uVar4 = fcn.000142f8();
            } while (puVar6 + (-0xa6e - param_2) < (uVar4 & 0xff));
            iVar7 = aiStack_8[0];
        }
        cVar2 = fcn.00014318();
        if (cVar2 != '\0') {
            puVar5 = iVar7 + 0x6c;
            puVar6 = param_2 + 0xa7e;
            do {
                *puVar5 = *puVar5 ^ (puVar6[-0x9da] << 8 ^ *puVar5) & 0x100;
                uVar1 = *puVar6;
                puVar6 = puVar6 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
                uVar4 = fcn.00014318();
            } while (puVar6 + (-0xa7e - param_2) < (uVar4 & 0xff));
            iVar7 = aiStack_8[0];
        }
        *(iVar7 + 0x1c) = *(iVar7 + 0x1c) ^ (*(param_2 + 0xa88) << 3 ^ *(iVar7 + 0x1c)) & 8;
        if ((*(iVar7 + 0x1c) & 8) != 0) {
            *(iVar7 + 0x20) = *(param_2 + 0xa8c);
            *(iVar7 + 0x24) = *(param_2 + 0xa90);
            *(iVar7 + 0x28) = *(param_2 + 0xa94);
        }
        *(iVar7 + 0x94) = *(iVar7 + 0x94) ^ (*(param_2 + 0xae) ^ *(iVar7 + 0x94)) & 1;
    }
    return;
}


/* fcn.000142d8 @ 0x142d8 */

uint32_t fcn.000142d8(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00014227();
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0xe;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 10;
}


/* fcn.000116a3 @ 0x116a3 */

void __fastcall fcn.000116a3(uint param_1,int param_2)

{
    uchar *puVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uchar *puVar5;
    uchar *puVar6;
    int iStack_4;
    
    iVar3 = fcn.00010f7c(&iStack_4);
    if ((-1 < iVar3) && (cVar2 = fcn.00014318(), cVar2 != '\0')) {
        puVar5 = param_2 + 0x31e;
        puVar6 = iStack_4 + 0x1d;
        do {
            puVar6[5] = puVar5[-10];
            *puVar6 = *puVar5;
            puVar6[6] = puVar5[10];
            puVar6[-1] = puVar5[0x14];
            puVar6[7] = puVar5[0x1e];
            puVar6[1] = puVar5[0x46];
            puVar6[9] = puVar5[0x32];
            puVar6[3] = puVar5[100];
            puVar6[8] = puVar5[0x28];
            puVar6[2] = puVar5[0x5a];
            puVar6[10] = puVar5[0x3c];
            puVar6[4] = puVar5[0x50];
            puVar6[0x12] = puVar5[0x966];
            puVar6[0xe] = puVar5[0x970];
            puVar6[0x11] = puVar5[0x952];
            puVar6[0xd] = puVar5[0x95c];
            puVar6[0x10] = puVar5[0x93e];
            puVar6[0xc] = puVar5[0x948];
            puVar6[0xf] = puVar5[0x92a];
            puVar1 = puVar5 + 0x934;
            puVar5 = puVar5 + 1;
            puVar6[0xb] = *puVar1;
            uVar4 = fcn.00014318();
            puVar6 = puVar6 + 0x14;
        } while (puVar5 + (-0x31e - param_2) < (uVar4 & 0xff));
    }
    return;
}


/* fcn.0001178e @ 0x1178e */

void __fastcall fcn.0001178e(uint param_1,int param_2)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    ushort *puVar6;
    uint8_t *puVar7;
    uint32_t *puVar8;
    uint32_t uStack_c;
    int aiStack_8 [2];
    
    iVar2 = fcn.00010f7c(aiStack_8);
    if (-1 < iVar2) {
        uVar1 = fcn.000142b8();
        uVar5 = uVar1;
        if (uVar1 != 0) {
            puVar7 = param_2 + 0x73f;
            puVar6 = param_2 + 0xdac;
            puVar4 = aiStack_8[0] + 0x38;
            uStack_c = uVar5;
            do {
                *puVar4 = *puVar4 ^ (puVar7[-0x1c] ^ *puVar4) & 1;
                uVar3 = (*puVar7 * 2 ^ *puVar4) & 2 ^ *puVar4;
                *puVar4 = uVar3;
                *puVar4 = (puVar7[0x1c] << 2 ^ uVar3) & 4 ^ uVar3;
                puVar4[1] = puVar4[1] ^ (puVar7[0x38] ^ puVar4[1]) & 1;
                *puVar4 = *puVar4 ^ (puVar7[0x54] << 4 ^ *puVar4) & 0x10;
                uVar3 = (puVar7[0x70] << 5 ^ *puVar4) & 0x20 ^ *puVar4;
                *puVar4 = uVar3;
                uVar3 = (puVar7[0x8c] << 6 ^ uVar3) & 0x40 ^ uVar3;
                *puVar4 = uVar3;
                uVar3 = (puVar7[0xa8] << 7 ^ uVar3) & 0x80 ^ uVar3;
                *puVar4 = uVar3;
                uVar3 = (puVar7[0xc4] << 8 ^ uVar3) & 0x100 ^ uVar3;
                *puVar4 = uVar3;
                uVar3 = (puVar7[0xe0] << 9 ^ uVar3) & 0x200 ^ uVar3;
                *puVar4 = uVar3;
                uVar3 = (puVar7[0xfc] << 10 ^ uVar3) & 0x400 ^ uVar3;
                *puVar4 = uVar3;
                uVar3 = (puVar7[0x118] << 0xb ^ uVar3) & 0x800 ^ uVar3;
                *puVar4 = uVar3;
                *puVar4 = (puVar7[0x134] << 0xc ^ uVar3) & 0x3000 ^ uVar3;
                *(puVar4 + 0xf) = puVar7[0x15e];
                *(puVar4 + 9) = puVar7[0x17a];
                *puVar4 = *puVar4 ^ (puVar7[-0x2e4] << 0x10 ^ *puVar4) & 0x10000;
                *(puVar4 + 10) = puVar7[0x196];
                *(puVar4 + 0xb) = puVar7[0x1b2];
                *(puVar4 + 3) = puVar7[0x1ce];
                *(puVar4 + 0x23) = puVar7[0x1ea];
                *(puVar4 + 0xd) = puVar7[0x206];
                *(puVar4 + 7) = puVar7[0x222];
                *puVar4 = *puVar4 ^ (puVar7[-0x2c8] << 3 ^ *puVar4) & 8;
                *(puVar4 + 0xe) = puVar7[-0x2ac];
                *(puVar4 + 8) = puVar6[-0x47e];
                *puVar4 = *puVar4 ^ (puVar7[-0x3a7] << 0x11 ^ *puVar4) & 0x20000;
                uVar3 = (puVar7[-0x38b] << 0xe ^ *puVar4) & 0x4000 ^ *puVar4;
                *puVar4 = uVar3;
                *puVar4 = (puVar7[-0x36f] << 0xf ^ uVar3) & 0x8000 ^ uVar3;
                *(puVar4 + 4) = *puVar6;
                *(puVar4 + 0x12) = puVar6[0x1c];
                *(puVar4 + 5) = puVar7[0x6dd];
                *(puVar4 + 0x15) = puVar7[0x6f9];
                *(puVar4 + 0x16) = puVar6[0x54];
                *(puVar4 + 6) = puVar7[0x74d];
                *(puVar4 + 0x19) = puVar7[0x769];
                *(puVar4 + 0x1a) = puVar6[0x8c];
                *puVar4 = *puVar4 ^ (puVar7[0x7bd] << 0x12 ^ *puVar4) & 0xc0000;
                *puVar4 = puVar6[0xb6] << 0x14 | *puVar4 & 0xfffff;
                puVar4[1] = puVar4[1] ^ (puVar7[0x26e] << 4 ^ puVar4[1]) & 0x10;
                puVar7 = puVar7 + 1;
                uStack_c = uStack_c - 1;
                puVar6 = puVar6 + 1;
                puVar4 = puVar4 + 0x7b;
            } while (uStack_c != 0);
        }
        *(aiStack_8[0] + 0x20) = *(param_2 + 0xf50);
        *(aiStack_8[0] + 0x37f4) = *(param_2 + 0xf51);
        *(aiStack_8[0] + 0x1c) = *(aiStack_8[0] + 0x1c) ^ (*(param_2 + 0x9c9) * 2 ^ *(aiStack_8[0] + 0x1c)) & 2;
        *(aiStack_8[0] + 0x1c) = *(aiStack_8[0] + 0x1c) ^ (*(param_2 + 0x9ca) ^ *(aiStack_8[0] + 0x1c)) & 1;
        if (uVar5 != 0) {
            puVar4 = aiStack_8[0] + 0x60;
            do {
                puVar7 = param_2 + 0x98c;
                *(puVar4 + -3) = *(param_2 + 0x97d);
                *puVar4 = *(param_2 + 0x97e);
                *(puVar4 + 1) = *(param_2 + 0x97f);
                *(puVar4 + 2) = *(param_2 + 0x980);
                *(puVar4 + 3) = *(param_2 + 0x981);
                iVar2 = 10;
                puVar8 = puVar4;
                do {
                    puVar8[1] = puVar7[-10];
                    uVar1 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar8[2] = uVar1;
                    iVar2 = iVar2 + -1;
                    puVar8 = puVar8 + 2;
                } while (iVar2 != 0);
                uVar3 = 0;
                puVar8 = puVar4 + 0x15;
                do {
                    puVar7 = param_2 + 0x996 + uVar3;
                    uVar3 = uVar3 + 1;
                    *puVar8 = *puVar7;
                    puVar8 = puVar8 + 1;
                } while (uVar3 < 0xb);
                puVar4[0x20] = *(param_2 + 0x9a4);
                puVar4[0x21] = *(param_2 + 0x9a8);
                puVar4[0x22] = *(param_2 + 0x9ac);
                puVar4 = puVar4 + 0x7b;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
    }
    return;
}


/* fcn.00011b31 @ 0x11b31 */

void __fastcall fcn.00011b31(uint param_1,int param_2)

{
    uchar uVar1;
    uint uVar2;
    int iVar3;
    uchar *puVar4;
    uint *puVar5;
    uint32_t uVar6;
    int iVar7;
    uint *puVar8;
    uchar *puVar9;
    int iStack_4;
    
    iVar3 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar3) {
        puVar9 = param_2 + 0xee;
        puVar4 = iStack_4 + 0x1d;
        iVar3 = param_2 + 0xd2;
        iVar7 = 7;
        do {
            uVar6 = 0;
            puVar4[-1] = puVar9[-0x23];
            *puVar4 = *puVar9;
            puVar4[5] = puVar9[7];
            puVar4[6] = puVar9[0xe];
            do {
                puVar4[uVar6 + 3] = *(iVar3 + 0xe + uVar6);
                puVar4[uVar6 + 1] = *(iVar3 + uVar6);
                uVar6 = uVar6 + 1;
            } while (uVar6 < 2);
            iVar3 = iVar3 + 2;
            puVar4 = puVar4 + 0x1c;
            puVar9 = puVar9 + 1;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        puVar9 = param_2 + 0x128;
        iVar3 = 7;
        puVar8 = iStack_4 + 0x140;
        puVar5 = param_2 + 0x18c;
        do {
            *(puVar8 + 6) = puVar9[-0x25];
            *puVar8 = puVar5[-0x20];
            *(puVar8 + 1) = *puVar9;
            *(puVar8 + 5) = puVar9[7];
            *(puVar8 + 6) = puVar9[0xe];
            *(puVar8 + 7) = puVar9[0x23];
            puVar8[2] = *puVar5;
            puVar8[3] = puVar5[7];
            puVar8[4] = puVar5[-0xe];
            puVar8[5] = puVar5[-7];
            *(puVar8 + 0x1a) = puVar9[0x15];
            *(puVar8 + 0x1b) = puVar9[0x1c];
            puVar4 = puVar9 + 0x9d;
            puVar9 = puVar9 + 1;
            *(puVar8 + 0x19) = *puVar4;
            iVar3 = iVar3 + -1;
            puVar8 = puVar8 + 7;
            puVar5 = puVar5 + 1;
        } while (iVar3 != 0);
        puVar9 = param_2 + 0x214;
        puVar8 = param_2 + 500;
        iVar3 = 8;
        puVar5 = iStack_4 + 0xe4;
        do {
            *(puVar5 + -1) = puVar9[-0x48];
            *puVar5 = puVar8[-8];
            uVar2 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar5[1] = uVar2;
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            *(puVar5 + -3) = uVar1;
            iVar3 = iVar3 + -1;
            puVar5 = puVar5 + 3;
        } while (iVar3 != 0);
    }
    return;
}


/* fcn.00011c4e @ 0x11c4e */

void __fastcall fcn.00011c4e(uint param_1,int param_2)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iStack_4;
    
    iVar4 = fcn.00010f7c(&iStack_4);
    iVar3 = iStack_4;
    if (-1 < iVar4) {
        uVar1 = *(param_2 + 0xb4);
        if (uVar1 != 0) {
            iVar2 = *(param_2 + 0xb0);
            iVar4 = iStack_4 + 0x20;
            *(iStack_4 + 0x1c) = uVar1;
            iStack_4 = iVar2;
            fcn.000104a0(iVar4,0x200);
            if (uVar1 != 0) {
                fcn.00010f26(uVar1 << 2);
            }
        }
        *(iVar3 + 0x220) = *(param_2 + 0xbd);
        *(iVar3 + 0x221) = *(param_2 + 0xbe);
        *(iVar3 + 0x222) = *(param_2 + 0xbf);
        *(iVar3 + 0x223) = *(param_2 + 0xc0);
    }
    return;
}


/* fcn.00011ce1 @ 0x11ce1 */

void __fastcall fcn.00011ce1(uint param_1,int param_2)

{
    uchar uVar1;
    int iVar2;
    uint *puVar3;
    uint *puVar4;
    uchar *puVar5;
    int32_t var_4h;
    
    iVar2 = fcn.00010f7c(&var_4h);
    if (-1 < iVar2) {
        *(var_4h + 0x1c) = *(param_2 + 0x88f);
        puVar5 = param_2 + 0xa89;
        *(var_4h + 0x20) = *(param_2 + 0x890);
        *(var_4h + 0x24) = *(param_2 + 0x894);
        *(var_4h + 0x5c) = *(param_2 + 0x9a2);
        *(var_4h + 0x60) = *(param_2 + 0x895);
        *(var_4h + 100) = *(param_2 + 0x898);
        *(var_4h + 0x68) = *(param_2 + 0x89c);
        *(var_4h + 0xa0) = *(param_2 + 0x896);
        iVar2 = 2;
        puVar3 = var_4h + 0x4c;
        puVar4 = param_2 + 0xfec;
        do {
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            *(puVar3 + -0x27) = uVar1;
            *puVar3 = puVar4[-2];
            puVar3[1] = *puVar4;
            puVar3[2] = puVar4[8];
            puVar3[3] = puVar4[10];
            puVar3[-1] = puVar4[0x16];
            puVar3[-7] = puVar4[6];
            puVar3[-5] = puVar4[0xe];
            puVar3[-6] = puVar4[0xc];
            puVar3[-4] = puVar4[0x10];
            puVar3[-3] = puVar4[0x12];
            puVar3[-2] = puVar4[0x14];
            puVar3[-9] = puVar4[2];
            puVar3[-8] = puVar4[4];
            iVar2 = iVar2 + -1;
            puVar3 = puVar3 + 0x11;
            puVar4 = puVar4 + 1;
        } while (iVar2 != 0);
    }
    return;
}


/* fcn.00011dc7 @ 0x11dc7 */

void __fastcall fcn.00011dc7(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010f7c(&var_4h);
    if (-1 < iVar1) {
        iVar1 = fcn.00010f7c(&var_8h);
        if (-1 < iVar1) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x9cd) ^ *(var_4h + 0x1c)) & 1;
            uVar2 = (*(param_2 + 0x9d0) * 2 ^ *(var_4h + 0x1c)) & 2 ^ *(var_4h + 0x1c);
            *(var_4h + 0x1c) = uVar2;
            uVar2 = (*(param_2 + 0x9d1) << 2 ^ uVar2) & 4 ^ uVar2;
            *(var_4h + 0x1c) = uVar2;
            uVar2 = (*(param_2 + 0x9d2) << 3 ^ uVar2) & 8 ^ uVar2;
            *(var_4h + 0x1c) = uVar2;
            uVar2 = (*(param_2 + 0x9d3) << 4 ^ uVar2) & 0x10 ^ uVar2;
            *(var_4h + 0x1c) = uVar2;
            *(var_4h + 0x1c) = (*(param_2 + 0x9d4) << 5 ^ uVar2) & 0x20 ^ uVar2;
            *(var_4h + 0x20) = *(var_4h + 0x20) ^ (*(param_2 + 0x9d5) ^ *(var_4h + 0x20)) & 0xf;
            uVar2 = (*(param_2 + 0x9d6) << 4 ^ *(var_4h + 0x20)) & 0xf0 ^ *(var_4h + 0x20);
            *(var_4h + 0x20) = uVar2;
            uVar2 = (*(param_2 + 0x9d7) << 8 ^ uVar2) & 0xf00 ^ uVar2;
            *(var_4h + 0x20) = uVar2;
            uVar2 = (*(param_2 + 0x9d8) << 0xc ^ uVar2) & 0xf000 ^ uVar2;
            *(var_4h + 0x20) = uVar2;
            *(var_4h + 0x20) = (*(param_2 + 0x9d9) << 0x10 ^ uVar2) & 0xf0000 ^ uVar2;
            *(var_4h + 0x24) = *(var_4h + 0x24) ^ (*(param_2 + 0x9db) ^ *(var_4h + 0x24)) & 1;
            uVar2 = (*(param_2 + 0x9dc) * 2 ^ *(var_4h + 0x24)) & 2 ^ *(var_4h + 0x24);
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0x9dd) << 2 ^ uVar2) & 0x1c ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0xf52) << 5 ^ uVar2) & 0x20 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0x9de) << 6 ^ uVar2) & 0x40 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            *(var_4h + 0x24) = (*(param_2 + 0x9df) << 7 ^ uVar2) & 0x80 ^ uVar2;
            *(var_4h + 0x28) = *(param_2 + 0x3f0);
            *(var_4h + 0x24) = *(var_4h + 0x24) ^ (*(param_2 + 0x9e0) << 8 ^ *(var_4h + 0x24)) & 0x100;
            uVar2 = (*(param_2 + 0x9e1) << 9 ^ *(var_4h + 0x24)) & 0x200 ^ *(var_4h + 0x24);
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0xa9a) << 10 ^ uVar2) & 0x400 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            *(var_4h + 0x24) = (*(param_2 + 0x450) << 0xb ^ uVar2) & 0x800 ^ uVar2;
            *(var_4h + 0x2c) = *(param_2 + 0x9e2);
            *(var_4h + 0x2d) = *(param_2 + 0x9e3);
            *(var_4h + 0x24) = *(var_4h + 0x24) ^ (*(param_2 + 0x40a) << 0xe ^ *(var_4h + 0x24)) & 0x4000;
            uVar2 = (*(param_2 + 0xaf9) << 0xc ^ *(var_4h + 0x24)) & 0x1000 ^ *(var_4h + 0x24);
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0xafa) << 0xd ^ uVar2) & 0x2000 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0x4e8) << 0xf ^ uVar2) & 0x8000 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0x441) << 0x10 ^ uVar2) & 0x10000 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            *(var_4h + 0x24) = (*(param_2 + 0xafd) << 0x11 ^ uVar2) & 0x20000 ^ uVar2;
            *(var_4h + 0x30) = *(param_2 + 0xf55);
            *(var_4h + 0x24) = *(var_4h + 0x24) ^ (*(param_2 + 0x4e9) << 0x12 ^ *(var_4h + 0x24)) & 0x40000;
            uVar2 = (*(param_2 + 0x4ea) << 0x13 ^ *(var_4h + 0x24)) & 0x80000 ^ *(var_4h + 0x24);
            *(var_4h + 0x24) = uVar2;
            uVar2 = (*(param_2 + 0xafe) << 0x14 ^ uVar2) & 0x100000 ^ uVar2;
            *(var_4h + 0x24) = uVar2;
            *(var_4h + 0x24) = (*(param_2 + 0xaff) << 0x15 ^ uVar2) & 0x200000 ^ uVar2;
            *(var_4h + 0x2e) = *(param_2 + 0xfaa);
            *(var_4h + 0x44) = *(var_4h + 0x44) ^ (*(param_2 + 0xfd9) << 10 ^ *(var_4h + 0x44)) & 0x400;
            *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (*(param_2 + 0xb00) ^ *(var_8h + 0x1c)) & 3;
            uVar2 = (*(param_2 + 0xb01) << 2 ^ *(var_8h + 0x1c)) & 0xc ^ *(var_8h + 0x1c);
            *(var_8h + 0x1c) = uVar2;
            uVar2 = *(param_2 + 0xb02) << 4 | uVar2 & 0xfffff00f;
            *(var_8h + 0x1c) = uVar2;
            uVar2 = (*(param_2 + 0xb03) << 0xc ^ uVar2) & 0x7000 ^ uVar2;
            *(var_8h + 0x1c) = uVar2;
            uVar2 = (*(param_2 + 0xb04) << 0x1a ^ uVar2) & 0xc000000 ^ uVar2;
            *(var_8h + 0x1c) = uVar2;
            *(var_8h + 0x1c) = (*(param_2 + 0xb05) << 0x1c ^ uVar2) & 0x10000000 ^ uVar2;
        }
    }
    return;
}


/* fcn.0001215f @ 0x1215f */

void __fastcall fcn.0001215f(uint param_1,int param_2)

{
    uint8_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint8_t *puVar5;
    int iStack_4;
    
    iVar2 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x44e) ^ *(iStack_4 + 0x1c)) & 1;
        *(iStack_4 + 0x20) = *(iStack_4 + 0x20) ^ (*(param_2 + 0xa46) ^ *(iStack_4 + 0x20)) & 0x1ff;
        uVar3 = (*(param_2 + 0xa48) << 9 ^ *(iStack_4 + 0x20)) & 0x3fe00 ^ *(iStack_4 + 0x20);
        *(iStack_4 + 0x20) = uVar3;
        uVar3 = (*(param_2 + 0xa4a) << 0x12 ^ uVar3) & 0x7fc0000 ^ uVar3;
        *(iStack_4 + 0x20) = uVar3;
        uVar3 = (*(param_2 + 0xa4c) << 0x1b ^ uVar3) & 0x8000000 ^ uVar3;
        *(iStack_4 + 0x20) = uVar3;
        uVar3 = (*(param_2 + 0xa4d) << 0x1c ^ uVar3) & 0x10000000 ^ uVar3;
        *(iStack_4 + 0x20) = uVar3;
        uVar3 = (*(param_2 + 0xa4e) << 0x1d ^ uVar3) & 0x20000000 ^ uVar3;
        *(iStack_4 + 0x20) = uVar3;
        uVar3 = (*(param_2 + 0xa4f) << 0x1e ^ uVar3) & 0x40000000 ^ uVar3;
        *(iStack_4 + 0x20) = uVar3;
        *(iStack_4 + 0x20) = *(param_2 + 0xa50) << 0x1f | uVar3 & 0x7fffffff;
        *(iStack_4 + 0x28) = *(iStack_4 + 0x28) ^ (*(param_2 + 0xa51) ^ *(iStack_4 + 0x28)) & 1;
        uVar3 = (*(param_2 + 0xa52) * 2 ^ *(iStack_4 + 0x28)) & 2 ^ *(iStack_4 + 0x28);
        *(iStack_4 + 0x28) = uVar3;
        uVar3 = (*(param_2 + 0xa53) << 8 ^ uVar3) & 0x700 ^ uVar3;
        *(iStack_4 + 0x28) = uVar3;
        uVar3 = (*(param_2 + 0xa54) << 0xb ^ uVar3) & 0x3800 ^ uVar3;
        *(iStack_4 + 0x28) = uVar3;
        uVar3 = (*(param_2 + 0xa55) << 0xe ^ uVar3) & 0x1c000 ^ uVar3;
        *(iStack_4 + 0x28) = uVar3;
        puVar5 = param_2 + 0xa67;
        puVar4 = iStack_4 + 0x30;
        *(iStack_4 + 0x28) = (*(param_2 + 0xa56) << 0x11 ^ uVar3) & 0xe0000 ^ uVar3;
        *(iStack_4 + 0x2c) = *(iStack_4 + 0x2c) ^ (*(param_2 + 0xa64) ^ *(iStack_4 + 0x2c)) & 1;
        iVar2 = 2;
        do {
            *puVar4 = *puVar4 ^ (puVar5[-2] ^ *puVar4) & 1;
            uVar3 = (*puVar5 * 2 ^ *puVar4) & 2 ^ *puVar4;
            *puVar4 = uVar3;
            puVar1 = puVar5 + 2;
            puVar5 = puVar5 + 1;
            *puVar4 = (*puVar1 << 2 ^ uVar3) & 4 ^ uVar3;
            puVar4 = puVar4 + 1;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        *(iStack_4 + 0x38) = *(param_2 + 0xa6c);
    }
    return;
}


/* fcn.00012320 @ 0x12320 */

void __fastcall fcn.00012320(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iStack_4;
    
    iVar1 = fcn.00010f7c(&iStack_4);
    if (-1 < iVar1) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x3f6) ^ *(iStack_4 + 0x1c)) & 0x3f;
        *(iStack_4 + 0x20) = *(iStack_4 + 0x20) ^ (*(param_2 + 0x3f7) << 8 ^ *(iStack_4 + 0x20)) & 0xf00;
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x3f8) << 6 ^ *(iStack_4 + 0x1c)) & 0x1ffc0;
        uVar2 = *(param_2 + 0x416);
        if ((*(param_2 + 0x416) == 0) && (*(param_2 + 0x3fa) != 0)) {
            uVar2 = *(param_2 + 0x3fa);
        }
        *(iStack_4 + 0x20) = uVar2 << 0xc | *(iStack_4 + 0x20) & 0xf0000fff;
        *(iStack_4 + 0x20) = *(param_2 + 0x444);
        *(iStack_4 + 0x24) = *(iStack_4 + 0x24) ^ (*(param_2 + 0x3fb) ^ *(iStack_4 + 0x24)) & 0x3f;
        *(iStack_4 + 0x28) = *(iStack_4 + 0x28) ^ (*(param_2 + 0x3fc) << 8 ^ *(iStack_4 + 0x28)) & 0xf00;
        *(iStack_4 + 0x24) = *(iStack_4 + 0x24) ^ (*(param_2 + 0x3fe) << 6 ^ *(iStack_4 + 0x24)) & 0x1ffc0;
        uVar2 = *(param_2 + 0x418);
        if ((*(param_2 + 0x418) == 0) && (*(param_2 + 0x400) != 0)) {
            uVar2 = *(param_2 + 0x400);
        }
        *(iStack_4 + 0x28) = uVar2 << 0xc | *(iStack_4 + 0x28) & 0xf0000fff;
        *(iStack_4 + 0x28) = *(param_2 + 0x445);
        *(iStack_4 + 0x2c) = *(iStack_4 + 0x2c) ^ (*(param_2 + 0x401) ^ *(iStack_4 + 0x2c)) & 0x3f;
        *(iStack_4 + 0x2c) = (*(param_2 + 0x402) << 6 ^ *(iStack_4 + 0x2c)) & 0x1ffc0 ^ *(iStack_4 + 0x2c);
        uVar2 = *(param_2 + 0x41a);
        if ((*(param_2 + 0x41a) == 0) && (*(param_2 + 0x404) != 0)) {
            uVar2 = *(param_2 + 0x404);
        }
        *(iStack_4 + 0x30) = uVar2 << 0xc | *(iStack_4 + 0x30) & 0xf0000fff;
        *(iStack_4 + 0x34) = *(param_2 + 0x405);
        *(iStack_4 + 0x35) = *(param_2 + 0x406);
        *(iStack_4 + 0x36) = *(param_2 + 0x407);
        *(iStack_4 + 0x38) = *(iStack_4 + 0x38) ^ (*(param_2 + 0x408) ^ *(iStack_4 + 0x38)) & 0x7ff;
        *(iStack_4 + 0x3c) = *(iStack_4 + 0x3c) ^ (*(param_2 + 0x414) ^ *(iStack_4 + 0x3c)) & 1;
        *(iStack_4 + 0x3c) = *(iStack_4 + 0x3c) ^ (*(param_2 + 0x415) * 2 ^ *(iStack_4 + 0x3c)) & 2;
    }
    return;
}


/* fcn.0001413c @ 0x1413c */

uint32_t fcn.0001413c(void)

{
    int16_t iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00010d25(2,0);
    uVar2 = fcn.00014183();
    if ((uVar2 == 0x906a0) &&
       ((((uVar2 = 0x4602, iVar1 == 0x4602 || (uVar2 = 0x460a, iVar1 == 0x460a)) || (uVar2 = 0x461a, iVar1 == 0x461a)
         ) || (uVar2 = 0x4622, iVar1 == 0x4622)))) {
        return CONCAT31(uVar2 >> 8,1);
    }
    return uVar2 & 0xffffff00;
}


/* fcn.000141d8 @ 0x141d8 */

uint fcn.000141d8(void)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.000141a2();
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.00014183 @ 0x14183 */

uint32_t __fastcall fcn.00014183(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00014356(param_1,0);
    return param_1 & 0xfff0ff0;
}


/* fcn.00014043 @ 0x14043 */

//WARNING: Control flow encountered bad instruction data

uchar __fastcall fcn.00014043(int param_1,uint16_t param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    
    uVar2 = 4;
    if (param_1 == 0x906a0) {
        switch(param_2) {
        case 0x4601:
        case 0x4602:
        case 0x4603:
        case 0x4604:
        case 0x4605:
        case 0x4606:
        case 0x4607:
        case 0x4608:
        case 0x4609:
        case 0x460a:
        case 0x460b:
        case 0x460c:
        case 0x460d:
        case 0x460e:
        case 0x460f:
        case 0x4610:
        case 0x4611:
        case 0x4612:
        case 0x4613:
        case 0x4614:
        case 0x4615:
        case 0x4616:
        case 0x4617:
        case 0x4618:
        case 0x4619:
        case 0x461a:
        case 0x461b:
        case 0x461c:
        case 0x461d:
        case 0x461e:
        case 0x461f:
        case 0x4620:
        case 0x4621:
        case 0x4622:
        case 0x4623:
        case 0x4624:
        case 0x4625:
        case 0x4626:
        case 0x4627:
        case 0x4628:
        case 0x4629:
        case 0x462a:
        case 0x462b:
        case 0x462c:
        case 0x462d:
        case 0x462e:
        case 0x462f:
        case 0x4630:
        case 0x4631:
        case 0x4632:
        case 0x4633:
        case 0x4634:
        case 0x4635:
        case 0x4636:
        case 0x4637:
        case 0x4638:
        case 0x4639:
        case 0x463a:
        case 0x463b:
        case 0x463c:
        case 0x463d:
        case 0x463e:
        case 0x463f:
        case 0x4640:
        case 0x4641:
        case 0x4642:
        case 0x4643:
        case 0x4644:
        case 0x4645:
        case 0x4646:
        case 0x4647:
        case 0x4648:
        case 0x4649:
        case 0x464a:
        case 0x464b:
        case 0x464c:
        case 0x464d:
        case 0x464e:
        case 17999:
        case 18000:
        case 0x4651:
        case 0x4652:
        case 0x4653:
        case 0x4654:
        case 0x4655:
        case 0x4656:
        case 0x4657:
        case 0x4658:
        case 0x4659:
        case 0x465a:
        case 0x465b:
        case 0x465c:
        case 0x465d:
        case 0x465e:
        case 0x465f:
        case 0x4660:
        case 0x4661:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        }
    }
    else if (param_1 == 0xb06a0) {
        uVar1 = param_2;
        if ((0xa705 < uVar1) && ((uVar1 < 0xa70c || ((0xa714 < uVar1 && ((uVar1 < 0xa717 || (uVar1 - 0xa71b < 2))))))))
        {
            uVar2 = 0;
        }
    }
    else if ((param_1 == 0xb06e0) &&
            ((param_2 == 0x4614 ||
             ((0x4616 < param_2 && ((param_2 < 0x4619 || ((0x461a < param_2 && (param_2 < 0x461d)))))))))) {
        uVar2 = 2;
    }
    return uVar2;
}


/* fcn.000141a2 @ 0x141a2 */

void __fastcall fcn.000141a2(uint param_1)

{
    int32_t var_4h;
    
    fcn.00014356(param_1,0);
    fcn.00010d25(2,0);
    fcn.00014043();
    return;
}


