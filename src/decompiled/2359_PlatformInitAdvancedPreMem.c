// decompiled by r2ghidra: 2359_PlatformInitAdvancedPreMem.te
// functions: 141

/* fcn.00001055 @ 0x1055 */

void __fastcall fcn.00001055(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0x1d9 */

//WARNING: Variable defined which should be unmapped: var_ch

void entry0(void)

{
    uint uVar1;
    int *piVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    int extraout_ECX;
    int extraout_ECX_00;
    int extraout_ECX_01;
    ushort unaff_BP;
    int32_t var_ch;
    
    iVar4 = fcn.00001055();
    iVar5 = extraout_ECX;
    if (-1 < iVar4) {
        iVar4 = fcn.000023ad();
        if (iVar4 == 0) {
            iVar4 = fcn.000023dc();
            iVar5 = extraout_ECX_01;
            if (iVar4 == 0) goto code_r0x00000213;
        }
        else {
            iVar4 = iVar4 + 0x18;
            iVar5 = extraout_ECX_00;
        }
        *(iVar4 + 8) = 0xffd226a6;
    }
code_r0x00000213:
    uVar3 = in(0x406);
    iVar4 = fcn.0000109f(&stack0xfffffffc);
    if (-1 < iVar4) {
        *(iVar5 + 8) = *0xffd25068;
        *(iVar5 + 0xc) = *0xffd2506c;
        *(iVar5 + 0x10) = *0xffd25070;
        *(iVar5 + 0x14) = *0xffd25074;
        *(iVar5 + 0x18) = uVar3 >> 1 & 1;
    }
    out(0x406,2);
    iVar5 = fcn.00001028(&stack0xfffffffc,&stack0xfffffffc);
    if ((-1 < iVar5) || (iVar5 = fcn.000028ae(), -1 < iVar5)) {
        fcn.00001055();
    }
    fcn.00001055();
    uVar1 = InterruptDescriptorTableRegister();
    var_ch._2_2_ = uVar1 >> 0x10;
    piVar2 = *(CONCAT22(unaff_BP,var_ch._2_2_) + -4);
    (**(*piVar2 + 0x24))(piVar2,0xffd24b58);
    return;
}


/* fcn.0000237a @ 0x237a */

int fcn.0000237a(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00002359();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000242a();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000023ad @ 0x23ad */

int fcn.000023ad(void)

{
    char cVar1;
    int iVar2;
    
    fcn.0000232e();
    do {
        iVar2 = fcn.00002359();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000242a();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.0000232e @ 0x232e */

int32_t fcn.0000232e(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000023dc @ 0x23dc */

int fcn.000023dc(void)

{
    int iVar1;
    
    iVar1 = fcn.000023bf();
    if (iVar1 != 0) {
        fcn.00002411();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.000023bf @ 0x23bf */

int32_t fcn.000023bf(void)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.0000109f(&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.00002411 @ 0x2411 */

uint * __fastcall fcn.00002411(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.0000213e @ 0x213e */

ushort __cdecl fcn.0000213e(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000220c @ 0x220c */

uint __cdecl fcn.0000220c(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000109f @ 0x109f */

void __cdecl fcn.0000109f(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.000020aa @ 0x20aa */

void __cdecl fcn.000020aa(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    uint8_t in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.00002036(arg_8h,arg_ch);
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = uVar1 | in_CL;
    return;
}


/* fcn.00002036 @ 0x2036 */

uint __cdecl fcn.00002036(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


/* fcn.000000a0 @ 0xa0 */

uint * fcn.000000a0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    //[00] -r-x section size 18359 named .text
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


/* fcn.000027b4 @ 0x27b4 */

int __fastcall fcn.000027b4(uint param_1,uint32_t param_2,uint32_t *param_3,uchar *param_4,uchar *param_5)

{
    int iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint *puStack_c;
    int iStack_8;
    uint uStack_4;
    
    puStack_c = NULL;
    uStack_4 = param_1;
    iVar1 = fcn.00001028(param_1,&puStack_c);
    if ((-1 < iVar1) && (puStack_c != NULL)) {
        iStack_8 = param_2 + 10;
        puVar2 = fcn.000034ed();
        if (puVar2 == NULL) {
            iVar1 = -0x7ffffff7;
        }
        else {
            *puVar2 = 0;
            *puVar2 = 0xf0;
            *(puVar2 + 1) = *param_4;
            *puVar2 = *puVar2 & 0xffff9bff | 0x1b00;
            *(puVar2 + 5) = 0;
            iVar1 = (**puStack_c)(0,puVar2,8,&iStack_8,0,7);
            if (-1 < iVar1) {
                if ((((*puVar2 & 0x7f00) == 0x1b00) && ((*puVar2 & 0x8000) != 0)) && (*(puVar2 + 3) == '\0')) {
                    uVar3 = puVar2[2];
                    if (param_2 < uVar3) {
                        iVar1 = -0x7ffffffb;
                    }
                    else {
                        if (uVar3 != 0) {
                            fcn.0000244e(uVar3);
                        }
                        *param_3 = puVar2[2];
                        *param_5 = *(puVar2 + 7);
                        *param_4 = *(puVar2 + 6);
                    }
                }
                else {
                    iVar1 = -0x7ffffff9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00001378 @ 0x1378 */

uint __fastcall fcn.00001378(uint32_t param_1,int param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint32_t uStack_68;
    int iStack_54;
    int iStack_50;
    uint auStack_4c [4];
    uint32_t auStack_3c [4];
    uchar auStack_2c [4];
    uint32_t auStack_28 [10];
    
    iVar2 = fcn.00002e74();
    uStack_68 = 0;
    if (param_1 != 0) {
        do {
            iVar7 = param_2 + uStack_68 * 0xc;
            uVar9 = *(iVar7 + 2) & 0x1f;
            fcn.0000129f(uStack_68);
            fcn.000000a0(auStack_2c,0x28);
            while ((uStack_68 < param_1 && (uVar9 == (*(iVar7 + 2) & 0x1f)))) {
                fcn.000000a0(auStack_4c,0x10);
                fcn.000000a0(auStack_3c,0x10);
                fcn.00003163(auStack_4c,auStack_3c);
                uVar6 = 0;
                do {
                    iVar3 = fcn.00002df4();
                    if (iVar3 != 0) {
                        fcn.00002e48(~auStack_3c[uVar6],auStack_4c[uVar6]);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < 3);
                fcn.000011ab(auStack_2c);
                iVar7 = iVar7 + 0xc;
                uStack_68 = uStack_68 + 1;
            }
            puVar8 = auStack_28;
            uVar6 = 0;
            iVar7 = uVar9 * 0x1e + iVar2;
            do {
                if (*(iVar7 + 4) != -1) {
                    fcn.00002e48(~*puVar8,puVar8[-1]);
                }
                if (*(iVar7 + 0xc) != -1) {
                    fcn.00002e48(~puVar8[2],puVar8[1]);
                }
                if (*(iVar7 + 0x14) != -1) {
                    fcn.00002e48(~puVar8[4],puVar8[3]);
                }
                if (*(iVar7 + 0x10) != -1) {
                    fcn.00002e48(~puVar8[6],puVar8[5]);
                }
                uVar9 = puVar8[7];
                if (uVar9 != 0) {
                    uVar4 = fcn.00002d32();
                    if (uVar4 != 0) {
                        uVar5 = fcn.00002cb2();
                        if (uVar5 < uVar4) {
                            puVar1 = iStack_54 + uVar5 * 8;
                            *puVar1 = *puVar1 | uVar9;
                        }
                    }
                }
                uVar9 = puVar8[8];
                if (uVar9 != 0) {
                    uVar4 = fcn.00002d32();
                    if (uVar4 != 0) {
                        uVar5 = fcn.00002cb2();
                        if (uVar5 < uVar4) {
                            puVar1 = iStack_50 + 4 + uVar5 * 8;
                            *puVar1 = *puVar1 | uVar9;
                        }
                    }
                }
                uVar6 = uVar6 + 1;
                puVar8 = puVar8 + 10;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        } while (uStack_68 < param_1);
    }
    return 0;
}


/* fcn.00001028 @ 0x1028 */

void __cdecl fcn.00001028(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000022cc @ 0x22cc */

int32_t __fastcall fcn.000022cc(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00001028(param_1,&var_4h);
    return var_4h;
}


/* fcn.000019ab @ 0x19ab */

int __fastcall fcn.000019ab(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    uStack_18 = param_1 & 0x1f;
    cVar1 = fcn.00002f11();
    if ((cVar1 == '\0') || (cVar1 = fcn.00002ef1(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    uStack_14 = fcn.00002f4c();
    uStack_10 = fcn.00002f4c();
    uStack_c = fcn.00002f4c();
    fcn.000030af(param_2);
    uVar3 = (param_1 & 0x1ff) >> 5;
    iVar2 = fcn.0000170f(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    *param_2 = ((uStack_1c >> (uStack_18 & 0x1f)) << 6 ^ *param_2) & 0x40 ^ *param_2 | 0x20;
    iVar2 = fcn.0000170f(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = ~((uStack_1c >> (uStack_18 & 0x1f)) << 10) & 0x400 | param_2[1] & 0xffffe3ff | 0x200;
    iVar2 = fcn.0000170f(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = param_2[1] | ~((uStack_1c >> (uStack_18 & 0x1f)) << 0xc) & 0x1000 | 0x800;
    return 0;
}


/* fcn.00001ad3 @ 0x1ad3 */

int __fastcall fcn.00001ad3(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    fcn.000000a0(&uStack_24,0x10);
    fcn.000000a0(&uStack_14,0x10);
    uVar7 = (param_1 & 0x1ff) >> 5;
    uVar4 = param_1 & 0x1f;
    cVar1 = fcn.00002f11();
    if ((cVar1 == '\0') || (cVar1 = fcn.00002ef1(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    if (((*param_2 & 0x48000) == 0x48000) && ((param_2[1] & 0x600) != 0x600)) {
        return -0x7ffffffe;
    }
    fcn.00003163(&uStack_24,&uStack_14);
    fcn.00002f82(~uStack_14,uStack_24);
    fcn.00002f82(~uStack_10,uStack_20);
    fcn.00002f82(~uStack_c,uStack_1c);
    uVar5 = *param_2;
    if ((uVar5 & 0x28000) == 0x28000) {
        uVar2 = 1 << uVar4;
        uVar5 = uVar2;
    }
    else {
        uVar2 = (uVar5 >> 5 & 1) << uVar4;
        uVar5 = (uVar5 >> 6 & 1) << uVar4;
    }
    fcn.000017e7(uVar7,~uVar2,uVar5);
    fcn.000017e7(uVar7,~((*param_2 >> 0xf & 1) << uVar4),(*param_2 >> 0x12 & 1) << uVar4);
    iVar6 = (*param_2 >> 0x10 & 1) << uVar4;
    iVar3 = fcn.000017e7(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
    if ((iVar3 == -0x7ffffffd) && (iVar6 != 0)) {
code_r0x00001c59:
        iVar3 = -0x7ffffffd;
    }
    else {
        iVar6 = (*param_2 >> 0x11 & 1) << uVar4;
        iVar3 = fcn.000017e7(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
        if (iVar3 == -0x7ffffffd) {
            if (iVar6 != 0) goto code_r0x00001c59;
            iVar3 = 0;
        }
        if ((param_2[1] & 0x1e00) != 0) {
            iVar3 = fcn.00002d76();
        }
    }
    return iVar3;
}


/* fcn.0000107a @ 0x107a */

void __fastcall fcn.0000107a(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x28))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00002ba5 @ 0x2ba5 */

uchar __fastcall fcn.00002ba5(uint32_t param_1,uint *param_2)

{
    uchar uVar1;
    
    if ((param_1 & 0xffbf0001) == 0) {
        uVar1 = fcn.00002aea(0,param_2,param_1);
        return uVar1;
    }
    if (param_2 != NULL) {
        *param_2 = 0x80000002;
    }
    return 0;
}


/* fcn.00002aea @ 0x2aea */

ushort __fastcall fcn.00002aea(uint param_1,uint32_t param_2,uint param_3,int *param_4)

{
    uchar uVar1;
    uchar uVar2;
    int16_t iVar3;
    int iVar4;
    uchar uStack_4;
    
    iVar3 = fcn.00002a65();
    iVar4 = fcn.00002a91();
    if (iVar4 < 0) {
    }
    else {
        out(iVar3 + 3,param_2 >> 8);
        out(iVar3 + 5,param_3);
        out(iVar3 + 6,param_3 >> 8);
        out(iVar3 + 0xd,(param_2 >> 0x16 & 1) != 0);
        uStack_4 = param_2;
        out(iVar3 + 4,uStack_4);
        iVar4 = fcn.00002ab4();
        uVar1 = in(iVar3 + 6);
        uVar2 = in(iVar3 + 5);
        param_3._0_2_ = CONCAT11(uVar1,uVar2);
        out(iVar3,0xff);
        out(iVar3 + 0xc,1);
    }
    if (param_4 != NULL) {
        *param_4 = iVar4;
    }
    return param_3;
}


/* fcn.00002bcf @ 0x2bcf */

uint32_t __fastcall fcn.00002bcf(uint32_t param_1,uchar param_2,uint *param_3)

{
    uint32_t uVar1;
    
    if ((param_1 & 0xffbf0001) == 0) {
        uVar1 = fcn.00002aea(param_2,param_3);
        return uVar1;
    }
    if (param_3 != NULL) {
        *param_3 = 0x80000002;
    }
    return param_3 & 0xffffff00;
}


/* fcn.00000690 @ 0x690 */

int32_t fcn.00000690(void)

{
    int32_t var_4h;
    
    fcn.00002ba5();
    fcn.00002bcf(&var_4h);
    return var_4h;
}


/* fcn.000006f5 @ 0x6f5 */

int32_t fcn.000006f5(void)

{
    int32_t var_4h;
    
    fcn.00002ba5();
    fcn.00002bcf(&var_4h);
    return var_4h;
}


/* fcn.0000075a @ 0x75a */

int32_t fcn.0000075a(void)

{
    int32_t var_4h;
    
    fcn.00002ba5();
    fcn.00002bcf(&var_4h);
    return var_4h;
}


/* fcn.000007bf @ 0x7bf */

int32_t __fastcall fcn.000007bf(uint32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00002aea(0,&var_4h);
    fcn.00002aea(((param_1 & 0xffff) - 0x654) / 10 + 0x1e8fU & 0xffff,&var_4h);
    return var_4h;
}


/* fcn.00000808 @ 0x808 */

int32_t __fastcall fcn.00000808(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00002bcf(&var_4h);
    if (param_1 != '\0') {
        fcn.00002bcf(&var_4h);
        fcn.00002bcf(&var_4h);
    }
    return var_4h;
}


/* fcn.00002243 @ 0x2243 */

void __cdecl fcn.00002243(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.000022a5 @ 0x22a5 */

void fcn.000022a5(void)

{
    fcn.0000220c(0xfc020,0);
    fcn.00002243(0xfc020,0);
    return;
}


/* fcn.0000211d @ 0x211d */

void fcn.0000211d(void)

{
    fcn.00002036(0xfc040,0);
    fcn.0000206d(0xfc040,0);
    return;
}


/* fcn.0000206d @ 0x206d */

uint __cdecl fcn.0000206d(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uchar in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CL;
    return CONCAT31(uVar1 >> 8,in_CL);
}


/* fcn.0000086b @ 0x86b */

int32_t __fastcall fcn.0000086b(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00002bcf(&var_4h);
    if (param_1 != '\0') {
        fcn.00002bcf(&var_4h);
        fcn.00002bcf(&var_4h);
    }
    return var_4h;
}


/* fcn.000008ce @ 0x8ce */

uint __fastcall fcn.000008ce(int param_1)

{
    char cVar1;
    uint in_EAX;
    int extraout_ECX;
    int extraout_ECX_00;
    int extraout_ECX_01;
    int extraout_ECX_02;
    int extraout_ECX_03;
    int iVar2;
    uint unaff_ESI;
    uint uStack_8;
    
    iVar2 = param_1;
    if (*(param_1 + 0x321) != '\0') {
        uStack_8 = 0x8e6;
        in_EAX = fcn.00000690();
        iVar2 = extraout_ECX;
    }
    if (*(param_1 + 0x324) != '\0') {
        uStack_8 = 0x8fb;
        in_EAX = fcn.000006f5();
        iVar2 = extraout_ECX_00;
    }
    if (*(param_1 + 0x327) != '\0') {
        uStack_8 = 0x910;
        in_EAX = fcn.0000075a();
        iVar2 = extraout_ECX_01;
    }
    if (*(param_1 + 0x336) != '\0') {
        uStack_8 = 0x925;
        in_EAX = fcn.000007bf();
        iVar2 = extraout_ECX_02;
    }
    if (*(param_1 + 0x339) != '\0') {
        uStack_8 = 0x940;
        in_EAX = fcn.00000808();
        iVar2 = extraout_ECX_03;
    }
    if (*(param_1 + 0x33a) != '\0') {
        cVar1 = *(param_1 + 0x33c);
        uStack_8 = CONCAT31(iVar2 >> 8,cVar1);
        fcn.00002bcf(&uStack_8,unaff_ESI);
        if (cVar1 != '\0') {
            fcn.00002bcf(&uStack_8,unaff_ESI);
            fcn.00002bcf(&uStack_8);
        }
        return uStack_8;
    }
    return in_EAX;
}


/* fcn.00002319 @ 0x2319 */

void __fastcall fcn.00002319(uint param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = fcn.000022e8();
    (**(iVar1 + 0xc))(0xffd24958,param_2);
    return;
}


/* fcn.000022e8 @ 0x22e8 */

int32_t __fastcall fcn.000022e8(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00001028(param_1,&var_4h);
    return var_4h;
}


/* fcn.00002304 @ 0x2304 */

void __fastcall fcn.00002304(uint param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = fcn.000022e8();
    (**(iVar1 + 8))(0xffd24958,param_2);
    return;
}


/* fcn.000003c3 @ 0x3c3 */

uint __fastcall fcn.000003c3(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint unaff_ESI;
    int iVar7;
    uint unaff_EDI;
    
    param_2 = param_2 & 0xffff;
    fcn.00001378();
    if (param_2 != 0) {
        uVar3 = param_2;
        do {
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    iVar1 = fcn.000023dc();
    if (param_2 != 0) {
        puVar5 = iVar1 + 4;
        puVar4 = param_1 + 4;
        do {
            if (((*puVar4 & 0x1f) != 0) && (iVar1 != 0)) {
                puVar5[-1] = puVar4[-1];
                *puVar5 = *puVar5 ^ (*puVar5 ^ *puVar4) & 0x1f;
                puVar5 = puVar5 + 2;
            }
            puVar4 = puVar4 + 3;
            param_2 = param_2 - 1;
        } while (param_2 != 0);
    }
    iVar1 = fcn.00002e74(unaff_EDI,unaff_ESI);
    uVar3 = fcn.00001fb2();
    uVar2 = fcn.00001f96();
    for (; uVar3 <= uVar2; uVar3 = uVar3 + 1) {
        iVar7 = (uVar3 & 0x1f) * 0x1e + iVar1;
        if (*(iVar7 + 6) != -1) {
            uVar6 = 0;
            do {
                fcn.00002e48(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
        if (*(iVar7 + 10) != -1) {
            uVar6 = 0;
            do {
                fcn.00002e48(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
        if (*(iVar7 + 0xe) != -1) {
            uVar6 = 0;
            do {
                fcn.00002e48(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
        if (*(iVar7 + 0x12) != -1) {
            uVar6 = 0;
            do {
                fcn.00002e48(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
    }
    return 0;
}


/* fcn.00001cea @ 0x1cea */

uint __fastcall fcn.00001cea(uint param_1,uint param_2)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00002f11();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        cVar1 = fcn.00002ef1();
        if (cVar1 == '\0') {
            uVar2 = 0x80000003;
        }
        else {
            fcn.00002f82(0xfffffffe,param_2);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000024ad @ 0x24ad */

uint32_t __fastcall fcn.000024ad(uint32_t param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.00003478(param_1 * 0x369e99,param_1 * 0x369e99 >> 0x20);
    fcn.00002464();
    return param_1;
}


/* fcn.00003478 @ 0x3478 */

ulong __cdecl fcn.00003478(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch / 1000000,(arg_ch % 1000000 << 0x20 | arg_8h) / 1000000);
}


/* fcn.00002464 @ 0x2464 */

void __fastcall fcn.00002464(uint32_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    
    uVar5 = param_1 & 0x3fffff;
    uVar4 = param_1 >> 0x16;
    do {
        uVar1 = in(0x1808);
        iVar3 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        do {
            iVar2 = in(0x1808);
        } while ((iVar3 - iVar2 & 0x800000U) == 0);
        bVar6 = uVar4 != 0;
        uVar4 = uVar4 - 1;
    } while (bVar6);
    return;
}


/* fcn.00000a19 @ 0xa19 */

uint __cdecl fcn.00000a19(int32_t arg_8h)

{
    char cVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t *extraout_ECX;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint unaff_EBX;
    uint32_t uVar12;
    uint unaff_EBP;
    uint unaff_ESI;
    uint unaff_EDI;
    uint32_t in_stack_fffffff4;
    
    iVar4 = fcn.000022cc();
    iVar4 = (**(iVar4 + 0xc))(0x158);
    iVar5 = fcn.000022cc();
    iVar5 = (**(iVar5 + 0xc))(0x156);
    iVar6 = fcn.000022cc();
    iVar6 = (**(iVar6 + 0xc))(0x15b);
    if (iVar5 == 0) {
        iVar4 = fcn.000022cc();
        uVar7 = (**(iVar4 + 0x18))(0x56);
        if (uVar7 != '\x01') {
            return uVar7;
        }
        goto code_r0x00000bb8;
    }
    fcn.000019ab();
    iVar5 = fcn.000022cc();
    cVar1 = (**(iVar5 + 4))(0xea);
    if (cVar1 == '\0') {
code_r0x00000ab1:
        iVar5 = fcn.000022cc();
        cVar1 = (**(iVar5 + 4))(0xea);
        if (cVar1 == '\x01') {
            iVar4 = fcn.00002319();
            if ((iVar4 != 0) && (iVar3 = fcn.00002304(), iVar3 != 0)) {
                fcn.00002304();
                fcn.00002319();
                fcn.000003c3();
            }
code_r0x00000ba5:
            fcn.000024ad();
        }
        else {
            iVar5 = fcn.000022cc();
            cVar1 = (**(iVar5 + 4))(0xea);
            if (cVar1 == '\x02') {
                if (iVar6 != 0) {
                    iVar5 = fcn.000022cc();
                    uVar2 = (**(iVar5 + 0x18))(0x15c);
                    if (uVar2 < 2) {
                        fcn.00001cea();
                    }
                    fcn.00002304();
                    fcn.000024ad();
                }
                fcn.00001cea();
                fcn.00002304();
                fcn.000024ad();
                if (iVar4 != 0) {
                    iVar4 = fcn.000022cc();
                    uVar2 = (**(iVar4 + 0x18))(0x15c);
                    if (uVar2 < 2) {
                        fcn.00001cea();
                    }
                    fcn.00002304();
                    goto code_r0x00000ba5;
                }
            }
        }
    }
    else {
        iVar5 = fcn.000022cc();
        cVar1 = (**(iVar5 + 0x18))(0x15d);
        if (((cVar1 == '\x01') && ((in_stack_fffffff4 & 0x1f80) == 0x280)) && ((in_stack_fffffff4 & 0x6000) == 0x6000))
        goto code_r0x00000ab1;
    }
    iVar4 = fcn.000022cc();
    cVar1 = (**(iVar4 + 4))(0xea);
    if (cVar1 != '\x01') {
        iVar4 = fcn.000022cc();
        uVar7 = (**(iVar4 + 4))(0xea);
        if (uVar7 != '\x02') {
            return uVar7;
        }
        iVar4 = fcn.00002319();
        if (iVar4 == 0) {
            return 0;
        }
        uVar7 = fcn.00002304();
        if (uVar7 == 0) {
            return uVar7;
        }
        fcn.00002304();
        fcn.00002319();
        fcn.000003c3();
        fcn.00002304();
        fcn.000024ad();
        fcn.00001cea();
        fcn.00002304();
        uVar7 = fcn.000024ad();
        if (iVar6 == 0) {
            return uVar7;
        }
        iVar4 = fcn.000022cc();
        uVar2 = (**(iVar4 + 0x18))(0x15c);
        cVar1 = fcn.00002f11(unaff_EDI,unaff_ESI,iVar6);
        if (cVar1 == '\0') {
            uVar7 = 0x80000002;
        }
        else {
            cVar1 = fcn.00002ef1();
            if (cVar1 == '\0') {
                uVar7 = 0x80000003;
            }
            else {
                fcn.00002f82(0xfffffffe,~uVar2 & 1);
                uVar7 = 0;
            }
        }
        return uVar7;
    }
code_r0x00000bb8:
    iVar4 = fcn.00002319();
    uVar7 = 0;
    if ((iVar4 != 0) && (uVar7 = fcn.00002304(), uVar7 != 0)) {
        uVar8 = fcn.00002304();
        uVar8 = uVar8 & 0xffff;
        iVar4 = fcn.00002319();
        fcn.00001378(unaff_EDI,unaff_ESI,unaff_EBX);
        if (uVar8 != 0) {
            uVar9 = uVar8;
            do {
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
        iVar5 = fcn.000023dc();
        puVar10 = extraout_ECX;
        if (uVar8 != 0) {
            puVar11 = iVar5 + 4;
            puVar10 = iVar4 + 4;
            do {
                if (((*puVar10 & 0x1f) != 0) && (iVar5 != 0)) {
                    puVar11[-1] = puVar10[-1];
                    *puVar11 = *puVar11 ^ (*puVar11 ^ *puVar10) & 0x1f;
                    puVar11 = puVar11 + 2;
                }
                puVar10 = puVar10 + 3;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        iVar4 = fcn.00002e74(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX,puVar10);
        iVar5 = iVar4;
        uVar8 = fcn.00001fb2();
        uVar9 = fcn.00001f96();
        for (; uVar8 <= uVar9; uVar8 = uVar8 + 1) {
            iVar4 = (uVar8 & 0x1f) * 0x1e + iVar4;
            if (*(iVar4 + 6) != -1) {
                uVar12 = 0;
                do {
                    fcn.00002e48(0xffffffff,0xffffffff);
                    uVar12 = uVar12 + 1;
                } while (uVar12 <= *(iVar4 + 0x1c) >> 5);
            }
            if (*(iVar4 + 10) != -1) {
                uVar12 = 0;
                do {
                    fcn.00002e48(0xffffffff,0xffffffff);
                    uVar12 = uVar12 + 1;
                } while (uVar12 <= *(iVar4 + 0x1c) >> 5);
            }
            if (*(iVar4 + 0xe) != -1) {
                uVar12 = 0;
                do {
                    fcn.00002e48(0xffffffff,0xffffffff);
                    uVar12 = uVar12 + 1;
                } while (uVar12 <= *(iVar4 + 0x1c) >> 5);
            }
            if (*(iVar4 + 0x12) != -1) {
                uVar12 = 0;
                do {
                    fcn.00002e48(0xffffffff,0xffffffff);
                    uVar12 = uVar12 + 1;
                } while (uVar12 <= *(iVar4 + 0x1c) >> 5);
            }
            iVar4 = iVar5;
        }
        return 0;
    }
    return uVar7;
}


/* fcn.00000434 @ 0x434 */

void __fastcall fcn.00000434(uint param_1)

{
    int iVar1;
    int32_t var_cc0h;
    uint32_t var_2ech;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00001028(param_1,&var_10h);
    if (-1 < iVar1) {
        var_ch = 0xca9;
        iVar1 = (**var_10h)(var_10h,0xffd25078,0xffd24a18,0,&var_ch,&var_cc0h);
        if (-1 < iVar1) {
            iVar1 = fcn.000022cc();
            iVar1 = (**(iVar1 + 0xc))(0x20);
            if (iVar1 != 0) {
                fcn.000019ab();
                var_4h = var_4h & 0xfffff801U | 0x1801;
                if (var_2ech != '\0') {
                    var_8h = 0x500e2a1;
                    fcn.00001ad3();
                }
            }
        }
    }
    return;
}


/* fcn.000034ed @ 0x34ed */

int __fastcall fcn.000034ed(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000034b6();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000a0(iVar1,param_1);
    return iVar1;
}


/* fcn.000034b6 @ 0x34b6 */

int32_t __fastcall fcn.000034b6(uint param_1)

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


/* fcn.00001003 @ 0x1003 */

void __fastcall fcn.00001003(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000553 @ 0x553 */

void __fastcall fcn.00000553(uint *param_1)

{
    int iVar1;
    int32_t var_814h;
    uint32_t var_7f4h;
    int32_t var_4h;
    
    var_4h = 0x80d;
    iVar1 = (**param_1)(param_1,0xffd250b8,0xffd24aa8,0,&var_4h,&var_814h);
    if ((iVar1 < 0) || (var_7f4h != '\x01')) {
        *0xfe001020 = *0xfe001020 & 0xfe;
    }
    else {
        *0xfe001020 = *0xfe001020 | 1;
    }
    return;
}


/* fcn.00001fcb @ 0x1fcb */

char fcn.00001fcb(void)

{
    char cVar1;
    int16_t iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    
    if ((*0xfe001020 & 0x1004200) != 0) {
        return '\0';
    }
    iVar2 = in(0x1800);
    if (iVar2 < 0) {
        uVar3 = in(0x1804);
        uVar4 = uVar3 & 0x1c00;
        if ((uVar3 & 0x1c00) == 0) {
            return '\x01';
        }
        if (uVar4 == 0x400) {
            cVar1 = '\x02';
        }
        else if (uVar4 == 0x1400) {
            cVar1 = '\x04';
        }
        else {
            if (uVar4 != 0x1800) {
                return (uVar4 != 0x1c00) + '\x06';
            }
            cVar1 = '\x05';
        }
        return cVar1;
    }
    return '\0';
}


/* fcn.000010ca @ 0x10ca */

int fcn.000010ca(void)

{
    uint64_t uVar1;
    unkuint3 Var2;
    
    uVar1 = rdmsr(0x13a);
    Var2 = uVar1 >> 8;
    if ((uVar1 & 0x100000000) != 0) {
        return CONCAT31(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.000010e0 @ 0x10e0 */

void __fastcall fcn.000010e0(ushort *param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    uint32_t uVar5;
    
    *(param_1 + 4) = 0;
    cVar4 = fcn.000010ca();
    uVar3 = *0xfed30328;
    uVar2 = *0xfed300a4;
    if (cVar4 != '\0') {
        *(param_1 + 4) = 1;
        *param_1 = 0;
        fcn.0000220c(0xb0048,0);
        uVar5 = fcn.0000220c(0xb0064,0);
        fcn.0000220c(0xb0068,0);
        fcn.0000220c(0xb006c,0);
        uVar1 = rdmsr(0x13a);
        if ((uVar2 & 0x4000) != 0) {
            *(param_1 + 0xb) = 1;
        }
        if ((uVar5 & 0x400) != 0) {
            *(param_1 + 5) = 1;
        }
        if ((uVar1 & 0x20) != 0) {
            *param_1 = 1;
            if ((uVar1 & 8) != 0) {
                *(param_1 + 1) = 1;
            }
            *(param_1 + 2) = uVar1 >> 1 & 3;
        }
        if (((uVar5 & 0x1200) != 0) || (((uVar3 & 0x7ff0) != 0 && ((uVar1 & 0x28) == 0x20)))) {
            *(param_1 + 9) = 1;
        }
    }
    return;
}


/* fcn.000028ae @ 0x28ae */

unkbyte6 fcn.000028ae(void)

{
    int16_t iVar1;
    ushort uVar2;
    uint32_t uVar3;
    int iVar4;
    
    out(0x80,0xe03);
    iVar1 = fcn.0000213e(0xb0002,0);
    if (iVar1 != -1) {
        uVar3 = fcn.0000220c(0xb0040,0);
        if ((uVar3 & 0x20) == 0) {
            iVar4 = fcn.00001003();
            uVar2 = 0xe23;
            if (iVar4 < 0) {
                uVar2 = 0xea3;
            }
            out(0x80,uVar2);
            return CONCAT24(0x80,iVar4);
        }
    }
    out(0x80,0xe83);
    return 0x8080000007;
}


/* fcn.00002e74 @ 0x2e74 */

uint __fastcall fcn.00002e74(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.000033ad();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0xffd24e38;
    }
    *param_1 = 0x13;
    return 0xffd24bf8;
}


/* fcn.000033ad @ 0x33ad */

uint __fastcall fcn.000033ad(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.0000336f(param_1);
    if (cVar1 != '\x02') {
        cVar1 = fcn.0000336f(param_1);
        if (cVar1 != '\x05') {
            cVar1 = fcn.0000336f(param_1);
            if (cVar1 != '\x06') {
                cVar1 = fcn.0000336f(param_1);
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.0000336f @ 0x336f */

char fcn.0000336f(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd25054 == -1) {
        uVar1 = fcn.0000335e();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd25054 = cVar2;
    }
    return *0xffd25054;
}


/* fcn.00001eb2 @ 0x1eb2 */

uint __fastcall fcn.00001eb2(uint param_1,uint param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000016c0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001901(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.00001f0f @ 0x1f0f */

uint __fastcall fcn.00001f0f(uint param_1,uint param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000016c0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001901(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.0000129f @ 0x129f */

uint __fastcall fcn.0000129f(uint param_1,int param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t auStack_c [3];
    
    auStack_c[2] = fcn.00002e74();
    puVar1 = param_3 * 0xc + param_2;
    uVar3 = *(puVar1 + 2) & 0x1f;
    fcn.000000a0(auStack_c,4);
    while( true ) {
        if ((auStack_c[1] <= param_3) || (uVar3 != (*(puVar1 + 2) & 0x1f))) {
            uVar2 = 0;
            do {
                if (auStack_c[uVar2] != 0) {
                    fcn.00001eb2(auStack_c[uVar2]);
                    fcn.00001f0f(auStack_c[uVar2]);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 <= *(uVar3 * 0x1e + 0x1c + auStack_c[2]) - 1 >> 5);
            return 0;
        }
        uVar2 = *puVar1 & 0x1ff;
        if (*(uVar3 * 0x1e + 0x1c + auStack_c[2]) <= uVar2) {
            return 0x80000002;
        }
        if (uVar2 >> 5 != 0) break;
        param_3 = param_3 + 1;
        auStack_c[0] = auStack_c[0] | 1 << (*puVar1 & 0x1f);
        puVar1 = puVar1 + 3;
    }
    return 0x80000003;
}


/* fcn.00003163 @ 0x3163 */

int __cdecl fcn.00003163(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint32_t *in_EDX;
    int32_t var_4h;
    
    iVar1 = fcn.000032bf(&var_4h);
    if (-1 < iVar1) {
        *arg_ch = *arg_ch | -((*in_EDX & 0x3f000000) != 0) & 0xc0000000;
        *arg_8h = *arg_8h | var_4h << 0x1e;
        *arg_ch = *arg_ch | -((*in_EDX & 0x700000) != 0) & 0x6000000;
        *arg_8h = *arg_8h | (*in_EDX & 0x600000) << 4;
        *arg_ch = *arg_ch | -((*in_EDX & 0xf8000) != 0) & 0x1e0000;
        *arg_8h = *arg_8h | (*in_EDX & 0xf0000) * 2;
        *arg_ch = *arg_ch | -((*in_EDX & 0x380) != 0) & 0x300;
        *arg_8h = *arg_8h | *in_EDX & 0x300;
        *arg_ch = *arg_ch | -((*in_EDX & 0xc00) != 0) & 0x800000;
        *arg_8h = *arg_8h | (*in_EDX & 0x800) << 0xc;
        *arg_ch = *arg_ch | (*in_EDX & 0x6000) != 0;
        *arg_8h = *arg_8h | *in_EDX >> 0xe & 1;
        *arg_ch = *arg_ch | -((in_EDX[1] & 0x6000) != 0) & 0x10000000;
        *arg_8h = *arg_8h | (in_EDX[1] & 0x4000) << 0xe;
        *arg_ch = *arg_ch | -((*in_EDX & 0xf) != 0) & 0x1c00;
        *arg_8h = *arg_8h | (*in_EDX & 0xe) << 9;
        *(arg_ch + 4) = *(arg_ch + 4) | -((in_EDX[1] & 0x1f) != 0) & 0x3c00;
        *(arg_8h + 4) = *(arg_8h + 4) | (in_EDX[1] & 0x1e) << 9;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000032bf @ 0x32bf */

uint __cdecl fcn.000032bf(int32_t arg_8h)

{
    char cVar1;
    int in_EDX;
    
    if (in_EDX != 0) {
        if (in_EDX == 1) {
            cVar1 = fcn.00002e9a();
            *arg_8h = -(cVar1 != '\0') & 3;
            return 0;
        }
        if (in_EDX == 3) {
            *arg_8h = 1;
            return 0;
        }
        if (in_EDX == 5) {
            *arg_8h = 2;
            return 0;
        }
        if (in_EDX != 7) {
            if (in_EDX == 9) {
                *arg_8h = 3;
                return 0;
            }
            return 0x80000002;
        }
        cVar1 = fcn.00002e9a();
        if (cVar1 == '\0') {
            return 0x80000002;
        }
    }
    *arg_8h = 0;
    return 0;
}


/* fcn.00002df4 @ 0x2df4 */

int __fastcall fcn.00002df4(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.00002e74();
    return *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (param_2 + (param_1 & 0x1ff) * 4) * 4;
}


/* fcn.00002e48 @ 0x2e48 */

uint __fastcall fcn.00002e48(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.000011ab @ 0x11ab */

void __fastcall fcn.000011ab(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    int8_t iVar1;
    uint32_t uVar2;
    
    uVar2 = param_1 & 0x1f;
    if (param_1 >> 5 == 0) {
        iVar1 = uVar2;
        param_3[1] = param_3[1] | (*param_2 >> 5 & 1) << iVar1;
        *param_3 = *param_3 | (*param_2 >> 6 & 1) << iVar1;
        param_3[3] = param_3[3] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[2] = param_3[2] | (*param_2 >> 0x12 & 1) << iVar1;
        param_3[5] = param_3[5] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[4] = param_3[4] | (*(param_2 + 2) & 1) << iVar1;
        param_3[7] = param_3[7] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[6] = param_3[6] | (*param_2 >> 0x11 & 1) << iVar1;
        if ((*param_2 & 0x28000) == 0x28000) {
            param_3[1] = param_3[1] | 1 << uVar2;
            *param_3 = *param_3 | 1 << uVar2;
        }
        param_3[8] = param_3[8] | (param_2[1] >> 10 & 1) << iVar1;
        param_3[9] = param_3[9] | (param_2[1] >> 0xc & 1) << iVar1;
        if ((((*param_2 & 0x1f) == 1) && ((*param_2 & 0x1f80) == 0x280)) && ((param_2[1] & 0x1800) == 0)) {
            param_3[9] = param_3[9] | 1 << uVar2;
        }
    }
    return;
}


/* fcn.00002d32 @ 0x2d32 */

uint16_t __fastcall fcn.00002d32(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.000023ad();
    if (iVar1 == 0) {
        iVar1 = fcn.00002ce5();
        *param_1 = iVar1;
        if (iVar1 == 0) {
            return 0;
        }
        iVar1 = fcn.000023ad();
    }
    else {
        *param_1 = iVar1 + 0x18;
    }
    return *(iVar1 + 2) - 0x18U >> 3;
}


/* fcn.00002cb2 @ 0x2cb2 */

int __fastcall fcn.00002cb2(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    if (param_1 != 0) {
        do {
            fcn.00001fb2();
            uVar1 = fcn.00001f6c();
            iVar2 = iVar2 + 1 + (uVar1 >> 5);
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_1);
    }
    return iVar2 + param_2;
}


/* fcn.00001fb2 @ 0x1fb2 */

uint32_t __fastcall fcn.00001fb2(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.000033ad();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.00001f96 @ 0x1f96 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00001f96(uint param_1)

{
    int32_t var_4h;
    
    fcn.00002e74(param_1,param_1);
    fcn.00001fb2();
    return;
}


/* fcn.00002e28 @ 0x2e28 */

uint __fastcall fcn.00002e28(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00001d9e @ 0x1d9e */

uint __fastcall fcn.00001d9e(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000016c0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.0000170f(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00001ee2 @ 0x1ee2 */

uint __fastcall fcn.00001ee2(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000016c0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001901(param_2,0xffffffff,param_3);
    }
    return uVar2;
}


/* fcn.00001e28 @ 0x1e28 */

uint __fastcall fcn.00001e28(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000016c0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.0000170f(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00003337 @ 0x3337 */

void __thiscall fcn.00003337(uint param_1,int16_t param_2,int32_t param_3)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.00004609(0xf9000,0,param_2,param_3,0,param_1,param_1,0,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.00004609 @ 0x4609 */

int __cdecl
fcn.00004609(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int8_t arg_18h,uint noname_5,
            uint noname_6,int8_t arg_24h,int32_t arg_28h,int32_t arg_2ch)

{
    uint8_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int in_EDX;
    int arg_ch_00;
    int arg_8h_00;
    int arg_ch_01;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if ((in_EDX < 0) || ((1 < in_EDX && ((in_EDX < 4 || ((7 < in_EDX && (in_EDX != 0x13)))))))) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.0000213e(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.0000213e(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.00002243(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.00002243(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.000021df(arg_8h_00,arg_ch_00);
                fcn.00002179(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.00002243(arg_8h + 0xd4,arg_ch_01);
                fcn.000021b9(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.0000213e(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.0000220c(arg_8h + 0xd4,arg_ch_01);
                            *arg_28h = uVar5;
                        }
                        return 0;
                    }
                    return ((uVar1 != 2) - 1 & 9) + 0x80000007;
                }
            }
            iVar3 = -0x7fffffee;
        }
    }
    return iVar3;
}


/* fcn.00002f11 @ 0x2f11 */

uint32_t __fastcall fcn.00002f11(uint32_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = fcn.00002eb0();
    if (uVar2 != '\0') {
        iVar3 = fcn.00002e74();
        uVar1 = *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar3);
        uVar2 = uVar1;
        if ((param_1 & 0x1ff) < uVar2) {
            return CONCAT31(uVar1 >> 8,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00002ef1 @ 0x2ef1 */

bool __fastcall fcn.00002ef1(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.00001d27(param_1);
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.00002f4c @ 0x2f4c */

uint __fastcall fcn.00002f4c(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00002e74();
    uVar2 = fcn.00002df4();
    return *(((*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar1) | 0xfffffd00) << 8 | uVar2 & 0xffff0000) << 8 | uVar2 & 0xffff
            );
}


/* fcn.000030af @ 0x30af */

void __fastcall fcn.000030af(uint param_1,uint32_t *param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    
    uVar1 = *param_2;
    uVar2 = fcn.00003290();
    *(param_3 + 3) = uVar2;
    uVar3 = ((uVar1 & 0x6000000 | 0x1080800) >> 3 | uVar1 & 0x1e0000) >> 1 | *param_3 & 0xff10e0ff | uVar1 & 0x300;
    *param_3 = uVar3;
    if ((uVar1 & 0x200) == 0) {
        *param_3 = (uVar1 & 0x800000 | 0x400000) >> 0xc | uVar3;
    }
    uVar3 = param_2[1];
    *param_3 = (uVar1 & 0x1c00 | 0x400200) >> 9 | (uVar1 & 1) << 0xe | *param_3 & 0xffffbfe1;
    param_3[1] = ((uVar1 & 0x10000000 | 0x8004000) >> 5 | uVar3 & 0x3c00) >> 9 | param_3[1] & 0xffc03e01;
    return;
}


/* fcn.00003290 @ 0x3290 */

uint fcn.00003290(void)

{
    char cVar1;
    uint32_t extraout_EDX;
    
    cVar1 = fcn.00002e9a();
    if (cVar1 == '\0') {
        if (extraout_EDX < 4) {
            return *(extraout_EDX * 4 + -0x2daee0);
        }
    }
    else if (extraout_EDX < 4) {
        return *(extraout_EDX * 4 + -0x2daef0);
    }
    return 0;
}


/* fcn.00002e9a @ 0x2e9a */

uchar __fastcall fcn.00002e9a(int param_1)

{
    if ((param_1 != 0x905) && (param_1 != 0x809)) {
        return 0;
    }
    return 1;
}


/* fcn.0000170f @ 0x170f */

//WARNING: Control flow encountered bad instruction data

ulong __fastcall fcn.0000170f(uint param_1)

{
    uint uVar1;
    int32_t var_4h;
    
    uVar1 = fcn.00002e74();
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return CONCAT44(uVar1,0x80000003);
    }
}


/* fcn.00002f82 @ 0x2f82 */

//WARNING: Removing unreachable block (ram,0x0000305c)
//WARNING: Removing unreachable block (ram,0x00002fc3)
//WARNING: Removing unreachable block (ram,0x00002ffc)
//WARNING: Removing unreachable block (ram,0x00003086)

void fcn.00002f82(uint32_t param_1,uint32_t param_2)

{
    if (((~param_1 | param_2) & 0xfffffffe) != 0) {
        fcn.00001dc8();
    }
    if (((~param_1 | param_2) & 1) != 0) {
        fcn.00001e52();
    }
    fcn.00002e74();
    fcn.00002df4();
    fcn.00002e48(param_1,param_2);
    return;
}


/* fcn.000017e7 @ 0x17e7 */

uint __fastcall fcn.000017e7(int param_1,uint32_t param_2,uint param_3,uint32_t param_4,uint32_t param_5)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int16_t iVar5;
    uint32_t auStack_8 [2];
    
    bVar2 = false;
    uVar4 = 0;
    param_2 = param_2 & 0x1f;
    auStack_8[0] = 0;
    iVar3 = fcn.00002e74();
    if (param_1 == 0) {
        iVar5 = *(param_2 * 0x1e + iVar3 + 4);
code_r0x00001879:
        bVar1 = false;
    }
    else {
        if (param_1 == 1) {
            iVar5 = *(param_2 * 0x1e + iVar3 + 0xc);
        }
        else {
            if (param_1 == 2) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 10);
                goto code_r0x00001879;
            }
            if (param_1 == 3) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x10);
            }
            else {
                if (param_1 == 4) {
                    iVar5 = *(param_2 * 0x1e + iVar3 + 0xe);
                    goto code_r0x00001879;
                }
                if (param_1 != 5) {
                    return 0x80000003;
                }
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x14);
            }
        }
        bVar1 = true;
        bVar2 = true;
    }
    if (iVar5 == -1) {
        return 0x80000003;
    }
    if ((bVar1) && (fcn.00001d9e(auStack_8), uVar4 = auStack_8[0], auStack_8[0] != 0)) {
        if ((auStack_8[0] & (~param_4 | param_5)) == 0) {
            uVar4 = 0;
        }
        else {
            fcn.00001eb2(auStack_8[0]);
        }
    }
    fcn.00002e48(param_4,param_5);
    if ((bVar2) && (uVar4 != 0)) {
        fcn.00001ee2(uVar4);
    }
    return 0;
}


/* fcn.00002d76 @ 0x2d76 */

uint __fastcall fcn.00002d76(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if (param_2 != 0) {
        uVar1 = fcn.00002d32();
        if (uVar1 == 0) {
            return 0x8000000e;
        }
        uVar2 = fcn.00002cb2();
        if (uVar1 <= uVar2) {
            return 0x80000002;
        }
        if ((param_2 & 3) == 3) {
            *(param_1 + uVar2 * 8) = *(param_1 + uVar2 * 8) | 1 << (param_1 & 0x1f);
        }
        if ((param_2 & 0xc) == 0xc) {
            *(param_1 + 4 + uVar2 * 8) = *(param_1 + 4 + uVar2 * 8) | 1 << (param_1 & 0x1f);
        }
    }
    return 0;
}


/* fcn.000016c0 @ 0x16c0 */

uint32_t __fastcall fcn.000016c0(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.00002e74();
    uVar2 = fcn.00001fb2();
    if (((uVar2 <= param_1) && (uVar2 = fcn.00001f96(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00001901 @ 0x1901 */

uint __fastcall fcn.00001901(int param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t auStack_8 [2];
    
    auStack_8[0] = 0;
    iVar2 = fcn.00002e74();
    if (param_1 == 6) {
        uVar1 = *((param_2 & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.00001d9e(auStack_8);
    }
    else {
        if (param_1 != 7) {
            return 0x80000003;
        }
        uVar1 = *((param_2 & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.00001e28(auStack_8);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    auStack_8[0] = auStack_8[0] & param_4 | param_5;
    uVar3 = fcn.00003337(uVar1 + param_3 * 8,0);
    return uVar3;
}


/* fcn.00002179 @ 0x2179 */

uint __cdecl fcn.00002179(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.0000242a @ 0x242a */

uint32_t __fastcall fcn.0000242a(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00002359 @ 0x2359 */

int16_t * __fastcall fcn.00002359(uint param_1,int16_t *param_2)

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


/* fcn.000000c0 @ 0xc0 */

uint * fcn.000000c0(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.00002731 @ 0x2731 */

//WARNING: Removing unreachable block (ram,0x0000279f)

uint __fastcall fcn.00002731(uchar *param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00002945();
    if (iVar1 != 0) {
        iVar1 = fcn.0000291c();
        if ((-1 < iVar1) && (var_8h == 0)) {
            uVar2 = fcn.00002977();
            return uVar2;
        }
        *param_1 = 2;
    }
    return 0x80000003;
}


/* fcn.00002654 @ 0x2654 */

//WARNING: Removing unreachable block (ram,0x00002714)

int fcn.00002654(void)

{
    ushort uVar1;
    int iVar2;
    int32_t var_10h;
    int16_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = fcn.00003505();
    if (iVar2 == 3) {
        out(0x80,0xe06);
        iVar2 = fcn.0000291c();
        if ((-1 < iVar2) && (((var_4h == 0 || (var_4h == 3)) || (var_4h == 7)))) {
            iVar2 = fcn.00002945();
            if (iVar2 == 0) {
                return -0x7ffffff2;
            }
            iVar2 = fcn.00002977();
            if (iVar2 < 0) {
                if (iVar2 == -0x7ffffff2) {
                    uVar1 = 0xea6;
                }
                else {
                    uVar1 = 0xe86;
                    if (iVar2 != -0x7ffffffd) {
                        uVar1 = 0xec6;
                    }
                }
            }
            else {
                uVar1 = 0xe26;
            }
            out(0x80,uVar1);
            return iVar2;
        }
    }
    return -0x7ffffffd;
}


/* fcn.00002579 @ 0x2579 */

//WARNING: Variable defined which should be unmapped: var_1h

uint32_t __fastcall fcn.00002579(uint param_1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int32_t var_1h;
    
    cVar2 = -0x38;
    while( true ) {
        uVar1 = fcn.00002731();
        if (uVar1 < 0) {
            return uVar1;
        }
        var_1h._0_1_ = param_1 >> 0x18;
        if (var_1h != '\x01') break;
        fcn.000024ad();
        bVar3 = cVar2 == '\0';
        cVar2 = cVar2 + -1;
        if (bVar3) {
            return 0x80000012;
        }
    }
    return -(1 < var_1h - 2U) & 0x80000003;
}


/* fcn.00003505 @ 0x3505 */

int fcn.00003505(void)

{
    int iVar1;
    
    iVar1 = fcn.0000220c(0xb0040,0);
    return (-(iVar1 != -1) & 0xffffff15) + 0xee;
}


/* fcn.0000291c @ 0x291c */

void __fastcall fcn.0000291c(int32_t param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = fcn.00001028(param_1,&var_4h);
    if (-1 < iVar1) {
        (**(var_4h + 0x14))(param_1);
    }
    return;
}


/* fcn.00002945 @ 0x2945 */

int32_t __fastcall fcn.00002945(int *param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = fcn.00001028(param_1,&var_4h);
    if (param_1 != NULL) {
        *param_1 = (-1 < iVar1) - 1;
    }
    return var_4h;
}


/* fcn.00002977 @ 0x2977 */

uint __thiscall fcn.00002977(int param_1)

{
    int iVar1;
    uint uVar2;
    int in_stack_00000014;
    uint32_t in_stack_00000018;
    int in_stack_0000001c;
    uint32_t *in_stack_00000020;
    int iStack_4;
    
    iVar1 = fcn.00002945();
    if (((((param_1 == 0) || (iVar1 == 0)) || (param_1 != 0)) || ((iVar1 != 0 || (in_stack_00000014 == 0)))) ||
       ((in_stack_0000001c == 0 || (in_stack_00000020 == NULL)))) {
        uVar2 = 0x80000002;
    }
    else {
        if ((in_stack_00000018 < *in_stack_00000020) && (in_stack_00000014 != in_stack_0000001c)) {
            iStack_4 = in_stack_0000001c;
            if (in_stack_00000018 != 0) {
                fcn.0000244e(in_stack_00000018);
            }
        }
        else {
            iStack_4 = in_stack_00000014;
        }
        uVar2 = (*_main)(0,iStack_4,in_stack_00000018,in_stack_00000020,0,7);
        if ((iStack_4 != in_stack_0000001c) && (*in_stack_00000020 != 0)) {
            fcn.0000244e(*in_stack_00000020);
        }
    }
    return uVar2;
}


/* fcn.0000244e @ 0x244e */

int __fastcall fcn.0000244e(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.000000c0(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000033db @ 0x33db */

uint __cdecl fcn.000033db(int32_t arg_8h)

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
            cVar3 = fcn.0000242a();
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


/* fcn.00002a12 @ 0x2a12 */

void __fastcall fcn.00002a12(int32_t param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = fcn.00001028(param_1,&var_4h);
    if (-1 < iVar1) {
        fcn.000033db(param_1);
    }
    return;
}


/* fcn.00002a65 @ 0x2a65 */

uint16_t fcn.00002a65(void)

{
    uint16_t uVar1;
    
    uVar1 = fcn.0000220c(0xfc020,0);
    if ((uVar1 != 0) && (uVar1 != 0xffff)) {
        return uVar1 & 0xffe0;
    }
    return 0;
}


/* fcn.00002a91 @ 0x2a91 */

unkbyte6 __fastcall fcn.00002a91(ushort param_1)

{
    uint8_t uVar1;
    uint uVar2;
    
    uVar1 = in(param_1);
    if ((uVar1 & 0x40) != 0) {
        return CONCAT24(param_1,0x80000012);
    }
    if ((uVar1 & 1) == 0) {
        out(param_1,uVar1);
        uVar2 = 0;
    }
    else {
        out(param_1,0xff);
        uVar2 = 0x80000012;
    }
    return CONCAT24(param_1,uVar2);
}


/* fcn.00002ab4 @ 0x2ab4 */

int __fastcall fcn.00002ab4(int16_t param_1,char param_2)

{
    uint8_t uVar1;
    
    out(param_1 + 2,param_2 + '@');
    do {
        uVar1 = in(param_1);
    } while ((uVar1 & 0x9e) == 0);
    if ((uVar1 & 0x1c) == 0) {
        return 0;
    }
    out(param_1,0x1c);
    uVar1 = in(param_1 + 0xc);
    return (-((uVar1 & 1) != 0) & 0x14) + 0x80000007;
}


/* fcn.00001f6c @ 0x1f6c */

ushort __fastcall fcn.00001f6c(uint32_t param_1)

{
    ushort uVar1;
    int iVar2;
    uint32_t var_4h;
    
    iVar2 = fcn.00002e74();
    if ((param_1 & 0x1f) < param_1) {
        uVar1 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00002400 @ 0x2400 */

uint __fastcall fcn.00002400(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000a0(param_1,param_2);
    return uVar1;
}


/* fcn.00002ce5 @ 0x2ce5 */

int fcn.00002ce5(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.00001fb2();
    uVar2 = fcn.00001f96();
    for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
        fcn.00001f6c();
    }
    iVar3 = fcn.000023dc();
    if (iVar3 != 0) {
        fcn.00002400();
    }
    return iVar3;
}


/* fcn.00001d27 @ 0x1d27 */

uint __fastcall fcn.00001d27(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int8_t iVar5;
    
    cVar1 = fcn.00002f11();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.00002e74();
        if (*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.00002e28();
            iVar5 = (param_1 & 7) << 2;
            *param_2 = (uVar4 & 3 << iVar5) >> iVar5;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00002eb0 @ 0x2eb0 */

uint __fastcall fcn.00002eb0(uint32_t param_1)

{
    char cVar1;
    uint32_t var_4h;
    
    cVar1 = fcn.000033ad();
    if (((param_1 >> 0x18 & 0xf) == (cVar1 != '\0') + 8) && (fcn.00002e74(), (param_1 >> 0x10 & 0x1f) < param_1)) {
        return 1;
    }
    return 0;
}


/* fcn.00001dc8 @ 0x1dc8 */

int __fastcall fcn.00001dc8(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.00002f11();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.0000170f((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.00001e52 @ 0x1e52 */

int __fastcall fcn.00001e52(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.00002f11();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.0000170f((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.00001f3f @ 0x1f3f */

uint __fastcall fcn.00001f3f(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000016c0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001901(param_2,0xffffffff,param_3);
    }
    return uVar2;
}


/* fcn.0000335e @ 0x335e */

void fcn.0000335e(void)

{
    fcn.0000213e(0xf8002,0);
    return;
}


/* fcn.00004841 @ 0x4841 */

uint32_t fcn.00004841(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.0000220c(0xfd010,0);
    return uVar1 & 0xfffff000;
}


/* fcn.00003525 @ 0x3525 */

uint fcn.00003525(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.0000220c(0xb0040,0);
    uVar2 = fcn.0000220c(0xb0064,0);
    iVar3 = fcn.00004841();
    if ((~(*(iVar3 + 4) >> 0xd) & 1) == 0) {
        if ((uVar2 & 0x200) != 0) {
            return 9;
        }
        uVar2 = uVar1 >> 0x10 & 0xf;
        if (uVar2 == 2) {
            return 7;
        }
        if (uVar2 == 7) {
            return 8;
        }
        if (uVar2 != 4) {
            if (uVar2 == 3) {
                return 5;
            }
            if ((uVar1 & 0xf0000) == 0x50000) {
                return 4;
            }
            if ((uVar1 & 0xf000) == 0x3000) {
                return 3;
            }
            if ((uVar1 & 0xf) == 2) {
                return 2;
            }
            if (((uVar1 & 0x20) == 0) && ((uVar1 & 0xf000) == 0)) {
                return 0;
            }
            return 1;
        }
    }
    return 6;
}


/* fcn.000035eb @ 0x35eb */

//WARNING: Control flow encountered bad instruction data

uint fcn.000035eb(void)

{
    uint uVar1;
    
    uVar1 = fcn.00003525();
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return 0;
    }
}


/* fcn.00003451 @ 0x3451 */

//WARNING: Removing unreachable block (ram,0x0000346a)

int64_t __cdecl fcn.00003451(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00004170 @ 0x4170 */

void __fastcall fcn.00004170(int *param_1,int *param_2,int param_3)

{
    int iVar1;
    
    if (*0xffd25158 == 0) {
        *0xffd25158 = -0x1300000;
    }
    iVar1 = *0xffd25158;
    *(*0xffd25158 + 0x10) = *(*0xffd25158 + 0x10) | 1;
    iVar1 = *(iVar1 + 0xf0);
    *param_1 = iVar1;
    *param_2 = param_3 * 0x18 + iVar1;
    return;
}


/* fcn.000041a4 @ 0x41a4 */

uint __fastcall fcn.000041a4(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    unkbyte3 Var2;
    
    if (*0xffd25158 == 0) {
        *0xffd25158 = -0x1300000;
    }
    uVar1 = *(*0xffd25158 + 0xf0);
    Var2 = uVar1 >> 8;
    if (((param_2 <= param_1) || ((uVar1 < param_2 && (param_1 <= uVar1)))) &&
       ((param_1 <= param_2 || ((param_1 <= uVar1 || (uVar1 <= param_2)))))) {
        return CONCAT31(Var2,param_1 == param_2);
    }
    return CONCAT31(Var2,1);
}


/* fcn.00003800 @ 0x3800 */

uint __fastcall fcn.00003800(uint32_t param_1)

{
    uint64_t uVar1;
    uint8_t uVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int32_t arg_8h;
    uint32_t uVar5;
    int64_t iVar6;
    
    uVar5 = (param_1 & 7 | 0xb0) * 0x1000;
    iVar3 = fcn.0000213e(uVar5 + 2,0xfffffffd < uVar5);
    if (iVar3 != -1) {
        uVar4 = fcn.0000220c(uVar5 + 0x10,0xffffffef < uVar5);
        uVar1 = uVar4 & 0xfffffff0;
        uVar2 = fcn.0000220c(uVar5 + 0x10,0xffffffef < uVar5);
        if ((uVar2 & 6) == 4) {
            arg_8h = fcn.0000220c(uVar5 + 0x14,0xffffffeb < uVar5);
            iVar6 = fcn.00003451(arg_8h,0);
            uVar1 = iVar6 + (uVar4 & 0xfffffff0);
        }
        if (uVar1 != 0) {
            fcn.000020aa(uVar5 + 4,0xfffffffb < uVar5);
            return uVar1;
        }
    }
    return 0;
}


/* fcn.000020f9 @ 0x20f9 */

void fcn.000020f9(int32_t param_1,int32_t param_2)

{
    fcn.00002036(param_1,param_2);
    fcn.0000206d(param_1,param_2);
    return;
}


/* fcn.000038b7 @ 0x38b7 */

uint32_t __fastcall fcn.000038b7(int param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00004170(param_2);
    do {
        uVar1 = *(param_1 + 0xc);
        if ((uVar1 & 0x10) != 0) break;
        if ((uVar1 & 8) != 0) {
            return CONCAT31(uVar1 >> 8,1);
        }
        uVar1 = fcn.000041a4();
    } while (uVar1 == '\0');
    return uVar1 & 0xffffff00;
}


/* fcn.00003f69 @ 0x3f69 */

uint fcn.00003f69(void)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = fcn.00003800();
    if (iVar2 == 0) {
        fcn.00004802();
        uVar3 = 0x80000007;
    }
    else {
        if ((*(iVar2 + 4) & 0x10) == 0) {
            *(iVar2 + 4) = *(iVar2 + 4) | 0x14;
        }
        fcn.00004170(15000000);
        do {
            cVar1 = fcn.000041a4();
            if (cVar1 != '\0') goto code_r0x00003feb;
        } while ((*(iVar2 + 4) & 8) != 0);
        do {
            cVar1 = fcn.000041a4();
            if (cVar1 != '\0') {
code_r0x00003feb:
                fcn.00004802();
                return 0x80000012;
            }
        } while ((*(iVar2 + 0xc) & 8) == 0);
        *(iVar2 + 4) = *(iVar2 + 4) & 0xffffffef | 0xc;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00004802 @ 0x4802 */

uint32_t __fastcall fcn.00004802(uint param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),2,param_2,0,0xffd24ae8,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


/* fcn.000037e1 @ 0x37e1 */

uint32_t fcn.000037e1(uint param_1)

{
    uint8_t uVar1;
    
    uVar1 = (param_1 >> 0x10) - (param_1 >> 8);
    if (param_1 >> 0x18 < uVar1) {
        return 0xffffffff;
    }
    return uVar1;
}


/* fcn.00002a42 @ 0x2a42 */

uint __fastcall fcn.00002a42(int param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.00002a12();
    if ((iVar1 < 0) || ((*(param_1 + 0x1c) & 1) != 0)) {
        uVar2 = 1;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000044d9 @ 0x44d9 */

void __fastcall fcn.000044d9(uint param_1,int param_2,uint32_t *param_3)

{
    int iVar1;
    uint32_t uVar2;
    char cStack_11;
    int iStack_10;
    int iStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    cStack_11 = '\x01';
    iStack_10 = param_2;
    iVar1 = fcn.000042d8();
    if (-1 < iVar1) {
        iStack_c = 0;
        uVar2 = 0;
        uStack_8 = *param_3;
        do {
            iVar1 = iStack_10;
            *param_3 = uStack_8 - iStack_c;
            fcn.00004435(param_3,&iStack_4,&cStack_11);
            uVar2 = uVar2 + iStack_4;
            iStack_10 = iVar1 + (*param_3 & 0xfffffffc);
            iStack_c = iStack_c + *param_3;
        } while (cStack_11 == '\0');
        *param_3 = uVar2;
    }
    return;
}


/* fcn.000039c5 @ 0x39c5 */

uint32_t __fastcall
fcn.000039c5(int param_1,int param_2,uint32_t *param_3,uint param_4,uint32_t *param_5,uint32_t *param_6)

{
    uint16_t uVar1;
    uint uVar2;
    char cVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    
    *param_6 = 0;
    uVar5 = *(param_1 + 0xc);
    iVar4 = fcn.000037e1(uVar5);
    if (param_2 == 0) {
code_r0x00003a24:
        if (iVar4 == 0) {
            uVar5 = 0x80000010;
            goto code_r0x00003a63;
        }
    }
    else {
        fcn.00004170(param_2);
        if (iVar4 == 0) {
            do {
                cVar3 = fcn.00002a42();
                if ((cVar3 != '\0') && (cVar3 = fcn.000041a4(), cVar3 != '\0')) {
                    return 0x80000012;
                }
                uVar5 = *(param_1 + 0xc);
                iVar4 = fcn.000037e1(uVar5);
            } while (iVar4 == 0);
            goto code_r0x00003a24;
        }
    }
    if (iVar4 != -1) {
        uVar9 = *(param_1 + 8);
        *param_3 = uVar9;
        uVar9 = (uVar9 >> 0x10 & 0x1ff) + 3 >> 2;
        if (uVar9 <= uVar5 >> 0x18) {
            fcn.00004170(5000000);
            do {
                uVar2 = *(param_1 + 0xc);
                cVar3 = fcn.00002a42();
                if ((cVar3 != '\0') && (cVar3 = fcn.000041a4(), cVar3 != '\0')) {
                    return 0x80000012;
                }
                uVar5 = fcn.000037e1(uVar2);
            } while (uVar5 < uVar9);
            uVar1 = *(param_3 + 2);
            uVar5 = *param_5;
            uVar8 = 0;
            do {
                if (uVar9 == 0) {
                    *param_5 = uVar8;
                    *param_6 = *(param_3 + 2) & 0x1ff;
                    if ((*(param_1 + 0xc) & 8) != 0) {
                        iVar4 = fcn.000037e1(*(param_1 + 0xc));
                        if (iVar4 == 0) {
                            *(param_1 + 4) = *(param_1 + 4) | 6;
                        }
                        return -(uVar5 < (uVar1 & 0x1ff)) & 0x80000005;
                    }
                    *param_5 = 0;
                    *param_6 = 0;
                    return 0x80000006;
                }
                uVar6 = *param_5;
                if (uVar6 < 5) {
                    if (uVar6 != 0) goto code_r0x00003aea;
                }
                else {
                    uVar6 = 4;
code_r0x00003aea:
                    fcn.0000244e(uVar6);
                }
                uVar6 = *param_5;
                if (uVar6 < 5) {
                    uVar7 = uVar6;
                }
                else {
                    uVar7 = 4;
                }
                uVar8 = uVar8 + uVar7;
                if (uVar6 < 5) {
                    uVar7 = uVar6;
                }
                else {
                    uVar7 = 4;
                }
                *param_5 = uVar6 - uVar7;
                uVar9 = uVar9 - 1;
            } while( true );
        }
    }
    uVar5 = 0x80000007;
code_r0x00003a63:
    *param_5 = 0;
    return uVar5;
}


/* fcn.0000456b @ 0x456b */

int __fastcall fcn.0000456b(uint param_1,uint32_t param_2,uint8_t param_3,uint8_t param_4)

{
    int iVar1;
    int iVar2;
    
    iVar1 = fcn.000042d8();
    if (iVar1 < 0) {
        iVar2 = -0x7fffffee;
    }
    else if (param_2 < 0x7d) {
        iVar2 = fcn.000041de();
        iVar1 = *0xffd2515c;
        if (-1 < iVar2) {
            *(*0xffd2515c + 0xe0) = ((param_2 & 0x1ff | 0xffff8000) << 8 | param_3) << 8 | param_4;
            if (param_2 != 0) {
                fcn.0000244e(param_2);
                iVar1 = *0xffd2515c;
            }
            *(iVar1 + 0x48) = param_2 + 4 & 0x3ff | 0x80000400;
            iVar2 = fcn.000041de();
            if (-1 < iVar2) {
                iVar2 = fcn.00004250();
                if (-1 < iVar2) {
                    iVar2 = 0;
                }
            }
        }
    }
    else {
        iVar2 = -0x7ffffffd;
    }
    return iVar2;
}


/* fcn.00003653 @ 0x3653 */

uint __fastcall fcn.00003653(char param_1,uint8_t param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = fcn.000035eb();
    if (uVar1 < 0) {
        return 1;
    }
    uVar2 = *param_3 & 0x7f00;
    if ((uVar2 == 0xc00) && (*param_3 == -1)) {
        return 1;
    }
    if ((uVar2 == 0x2000) && (*param_3 == -0x10)) {
        return 1;
    }
    if (((uVar1 & 1) != 0) && (*param_3 == -0x10)) {
        if (uVar2 == 0x100) {
            return 1;
        }
        if (uVar2 == 0xc00) {
            return 1;
        }
    }
    if ((((uVar1 & 4) != 0) && (uVar2 == 0x400)) && (*param_3 == -0x10)) {
        return 1;
    }
    if ((((uVar1 & 8) != 0) && (uVar2 == 0x300)) && (*param_3 == -0x10)) {
        return 1;
    }
    if ((((uVar1 & 0x10) != 0) && (uVar2 == 0xb00)) && (*param_3 == '\0')) {
        return 1;
    }
    if (((uVar1 & 0x20) != 0) && (*param_3 == '\x05')) {
        return 1;
    }
    if (((uVar1 & 0x40) != 0) && (*param_3 == -1)) {
        return 1;
    }
    if (((uVar1 < '\0') && (param_1 == '\0')) && (param_2 == 0)) {
        return 1;
    }
    if ((((uVar1 & 0x1000) != 0) && (uVar2 == 0x1b00)) && (*param_3 == -0x10)) {
        return 1;
    }
    if ((((uVar1 & 0x200) != 0) && (param_2 == 7)) && (*param_3 != '\n')) {
        return 1;
    }
    if ((uVar1 & 0x400) != 0) {
        if ((uVar2 == 0x1e00) && (*param_3 == -0x10)) {
            return 1;
        }
        if ((uVar2 == 0x200) && (*param_3 == -0xe)) {
            return 1;
        }
    }
    if ((((uVar1 & 0x100) != 0) && (param_1 != '\0')) && (0x1f < param_2)) {
        return 1;
    }
    if ((uVar1 & 0x800) != 0) {
        if (param_2 == 9) {
            if (*param_3 != '\n') goto code_r0x0000379e;
            if (uVar2 == 0x500) {
                return 1;
            }
        }
        if (((param_2 == 7) && (*param_3 == -1)) && (uVar2 == 0x500)) {
            return 1;
        }
    }
code_r0x0000379e:
    if ((((((uVar1 & 0x2000) == 0) || (uVar2 != 0x2100)) || (*param_3 != -0x10)) &&
        ((((uVar1 & 0x4000) == 0 || (uVar2 != 0x500)) || (*param_3 != -0x10)))) &&
       ((((uVar1 & 0x8000) == 0 || (uVar2 != 0x2300)) || (*param_3 != -0x10)))) {
        return 0;
    }
    return 1;
}


/* fcn.00003cbe @ 0x3cbe */

int __fastcall fcn.00003cbe(uint *param_1,uint *param_2,int param_3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    fcn.00004170(5000000);
    uVar3 = param_1[1];
    uVar4 = (*(param_2 + 2) & 0x1ff) + 3 >> 2;
    iVar2 = fcn.000037e1(uVar3);
    while( true ) {
        if (uVar4 + 1 <= (uVar3 >> 0x18) - iVar2) {
            uVar3 = 0;
            *param_1 = *param_2;
            if (uVar4 != 0) {
                do {
                    iVar2 = uVar3 * 4;
                    uVar3 = uVar3 + 1;
                    *param_1 = *(param_3 + iVar2);
                } while (uVar3 < uVar4);
            }
            param_1[1] = param_1[1] | 4;
            return (-((param_1[3] & 8) != 0) & 0x7ffffffa) + 0x80000006;
        }
        cVar1 = fcn.00002a42();
        if ((cVar1 != '\0') && (cVar1 = fcn.000041a4(), cVar1 != '\0')) break;
        uVar3 = param_1[1];
        iVar2 = fcn.000037e1(uVar3);
    }
    return -0x7fffffee;
}


/* fcn.00003d6c @ 0x3d6c */

int __thiscall fcn.00003d6c(int param_1,int param_2,int param_3,uint32_t param_4,uint param_5,uint param_6)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    if (param_2 == 8) {
        iVar2 = fcn.0000456b(param_5,param_6);
    }
    else {
        iVar2 = fcn.00003800();
        if (iVar2 == 0) {
            fcn.00004802();
            iVar2 = -0x7ffffff9;
        }
        else {
            iVar3 = fcn.00002a12();
            if ((((iVar3 < 0) || ((*(param_1 + 0x1c) & 0x20) == 0)) && (param_2 == 0)) &&
               (cVar1 = fcn.00003653(param_3), cVar1 == '\0')) {
                fcn.00004802();
                iVar2 = -0x7ffffffd;
            }
            else {
                cVar1 = fcn.000038b7();
                if ((cVar1 == '\0') && (iVar3 = fcn.00003f69(), iVar3 < 0)) {
                    fcn.00004802();
                    iVar2 = -0x7ffffffa;
                }
                else {
                    if (param_4 != 0) {
                        uVar4 = (*(iVar2 + 4) >> 0x18) * 4 - 4;
                        uVar6 = param_4;
                        do {
                            if ((uVar4 < uVar6) || (uVar5 = uVar6, uVar4 < uVar6)) {
                                uVar5 = uVar4;
                            }
                            iVar2 = fcn.00003cbe((param_3 - uVar6) + param_4);
                            if (iVar2 < 0) {
                                fcn.00003f69();
                                fcn.00004802();
                                return iVar2;
                            }
                            uVar6 = uVar6 - uVar5;
                        } while (uVar6 != 0);
                    }
                    iVar2 = 0;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00003b78 @ 0x3b78 */

int __cdecl fcn.00003b78(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (arg_8h == 8) {
        iVar2 = fcn.000044d9(arg_14h);
    }
    else {
        var_8h = 0;
        var_4h = *arg_14h;
        uVar3 = 0;
        iVar2 = fcn.00003800();
        if (iVar2 == 0) {
            fcn.00004802();
            iVar2 = -0x7ffffff9;
        }
        else {
            cVar1 = fcn.000038b7();
            if (cVar1 == '\0') {
                fcn.00003f69();
                fcn.00004802();
                iVar2 = -0x7ffffffa;
            }
            else {
                do {
                    iVar2 = fcn.000039c5(&var_8h,arg_10h + (uVar3 & 0xfffffffc),&var_4h,&var_ch);
                    if ((iVar2 < 0) && (iVar2 != -0x7ffffffb)) {
                        if (iVar2 != -0x7ffffff0) {
                            fcn.00003f69();
                        }
                        *arg_14h = uVar3;
                        if ((iVar2 == -0x7ffffff0) && (arg_ch == 0)) {
                            return -0x7ffffff0;
                        }
                        goto code_r0x00003c9f;
                    }
                    uVar3 = uVar3 + var_ch;
                    if (uVar3 < *arg_14h) {
                        var_4h = *arg_14h - uVar3;
                    }
                    else {
                        var_4h = 0;
                    }
                } while ((var_8h & 0x80000000U) == 0);
                *arg_14h = uVar3;
                if (iVar2 < 0) {
code_r0x00003c9f:
                    fcn.00004802();
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00004217 @ 0x4217 */

uint __fastcall fcn.00004217(uint32_t param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if (0x7fffffff < *(*0xffd2515c + 0x54)) {
            return 0;
        }
        fcn.000024ad();
        uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
    return 0x80000012;
}


/* fcn.00002280 @ 0x2280 */

void fcn.00002280(int32_t param_1,int32_t param_2)

{
    fcn.0000220c(param_1,param_2);
    fcn.00002243(param_1,param_2);
    return;
}


/* fcn.000041de @ 0x41de */

uint fcn.000041de(void)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if (*(*0xffd2515c + 0x48) < 0x80000000) {
            return 0;
        }
        fcn.000024ad();
        uVar1 = uVar1 + 1;
    } while (uVar1 < 1000);
    return 0x80000012;
}


/* fcn.0000429c @ 0x429c */

int fcn.0000429c(void)

{
    int iVar1;
    
    iVar1 = fcn.00004217();
    if (-1 < iVar1) {
        if ((*(*0xffd2515c + 0x54) & 0x3c00) == 0xc00) {
            *(*0xffd2515c + 0x54) = *(*0xffd2515c + 0x54) & 0x7fffffff;
            return 0;
        }
        iVar1 = -0x7fffffe8;
    }
    return iVar1;
}


/* fcn.000042d8 @ 0x42d8 */

int fcn.000042d8(void)

{
    uint32_t uVar1;
    int16_t iVar2;
    int iVar3;
    bool bVar4;
    
    iVar2 = fcn.0000213e(0x90002,0);
    if (iVar2 != -1) {
        *0xffd2515c = fcn.0000220c(0x90010,0);
        *0xffd2515c = *0xffd2515c & 0xfffff000;
        if ((*0xffd2515c == 0) || (*0xffd2515c == 0xfffff000)) {
            return -0x7ffffffa;
        }
        fcn.00002280(0x90004,0);
        if ((*(*0xffd2515c + 0x34) & 0xf000) == 0xf000) {
            return 0;
        }
        *(*0xffd2515c + 0x38) = *(*0xffd2515c + 0x38) | 0x80;
        uVar1 = *0xffd2515c;
        *(*0xffd2515c + 0x36c) = 24000000;
        *(uVar1 + 0x368) = *(uVar1 + 0x368) | 1;
        *(*0xffd2515c + 0x38) = *(*0xffd2515c + 0x38) | 2;
        uVar1 = *0xffd2515c;
        *(*0xffd2515c + 0xe0) = 1;
        *(uVar1 + 0x48) = 0x80030c04;
        iVar3 = fcn.000041de();
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.0000429c();
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.0000429c();
        uVar1 = *0xffd2515c;
        if (iVar3 < 0) {
            return iVar3;
        }
        *(*0xffd2515c + 0xe0) = 1;
        *(uVar1 + 0x48) = 0x80030c04;
        iVar3 = fcn.000041de();
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.0000429c();
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.0000429c();
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = 1000;
        do {
            if ((*(*0xffd2515c + 0x34) & 0xf000) == 0xf000) {
                *(*0xffd2515c + 0x54) = *(*0xffd2515c + 0x54) & 0x7fffffff;
                return 0;
            }
            fcn.000024ad();
            bVar4 = iVar3 != 0;
            iVar3 = iVar3 + -1;
        } while (bVar4);
    }
    return -0x7ffffff9;
}


/* fcn.00004435 @ 0x4435 */

int fcn.00004435(uint32_t *param_1,uint32_t *param_2,uchar *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    *param_2 = 0;
    *param_3 = 1;
    iVar1 = fcn.00004217();
    if (iVar1 < 0) {
        iVar1 = -0x7fffffee;
    }
    else {
        if ((*(*0xffd2515c + 0x54) & 0x3c00) == 0x400) {
            uVar3 = *(*0xffd2515c + 0x60);
            if (uVar3 < 0x80000000) {
                *param_3 = 0;
            }
            uVar2 = uVar3 >> 0x10 & 0x1ff;
            uVar3 = *param_1;
            if (uVar3 < uVar2) {
                iVar1 = -0x7ffffffb;
            }
            *param_2 = uVar2;
            if (uVar2 <= uVar3) {
                uVar3 = uVar2;
            }
            *param_1 = uVar3;
            if (uVar3 != 0) {
                fcn.0000244e(uVar3);
            }
            *(*0xffd2515c + 0x54) = 0;
            return iVar1;
        }
        iVar1 = -0x7fffffe8;
    }
    *param_1 = 0;
    return iVar1;
}


/* fcn.00004250 @ 0x4250 */

int fcn.00004250(void)

{
    int iVar1;
    
    iVar1 = fcn.00004217();
    if (-1 < iVar1) {
        if (((*(*0xffd2515c + 0x54) & 0x3c00) == 0xc00) && ((*(*0xffd2515c + 0x54) & 0xf0000) == 0x20000)) {
            *(*0xffd2515c + 0x54) = *(*0xffd2515c + 0x54) & 0x7fffffff;
            return 0;
        }
        iVar1 = -0x7fffffe8;
    }
    return iVar1;
}


/* fcn.000021df @ 0x21df */

void fcn.000021df(int32_t param_1,int32_t param_2)

{
    fcn.0000213e(param_1,param_2);
    fcn.00002179(param_1,param_2);
    return;
}


/* fcn.000021b9 @ 0x21b9 */

void fcn.000021b9(int32_t param_1,int32_t param_2)

{
    fcn.0000213e(param_1,param_2);
    fcn.00002179(param_1,param_2);
    return;
}


