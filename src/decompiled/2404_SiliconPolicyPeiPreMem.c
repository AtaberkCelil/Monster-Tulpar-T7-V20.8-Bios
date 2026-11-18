// decompiled by r2ghidra: 2404_SiliconPolicyPeiPreMem.te
// functions: 108

/* entry0 @ 0x2c5 */

void __fastcall entry0(int32_t param_1)

{
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    fcn.00002734(param_1,&var_8h);
    return;
}


/* fcn.00002734 @ 0x2734 */

//WARNING: Removing unreachable block (ram,0x0000275f)
//WARNING: Removing unreachable block (ram,0x00002750)
//WARNING: Removing unreachable block (ram,0x0000276e)

uint __cdecl fcn.00002734(uint noname_0,int32_t arg_ch)

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


/* fcn.00002aa5 @ 0x2aa5 */

int __fastcall fcn.00002aa5(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    iVar2 = fcn.00002a17();
    if (-1 < iVar2) {
        uVar4 = 0;
        uVar3 = *(param_1 + 4);
        if (uVar3 != 0) {
            do {
                cVar1 = fcn.000028b5();
                if (cVar1 != '\0') {
                    *(*(param_1 + 0xc) + uVar4 * 4) = 0xffd321ea;
                    *(*(param_1 + 0x10) + uVar4 * 4) = 0xffd3216c;
                    goto code_r0x00002b56;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar3);
        }
        if (uVar3 < 0x10) {
            fcn.0000289c();
            *(*(param_1 + 0xc) + *(param_1 + 4) * 4) = 0xffd321ea;
            *(*(param_1 + 0x10) + *(param_1 + 4) * 4) = 0xffd3216c;
            *(param_1 + 4) = *(param_1 + 4) + 1;
            uVar3 = fcn.00002878();
            if (uVar3 != 0) {
                fcn.000028d9(uVar3,0xffd39ce4,0x10);
            }
code_r0x00002b56:
            iVar2 = 0;
        }
        else {
            iVar2 = -0x7ffffff7;
        }
    }
    return iVar2;
}


/* fcn.00002985 @ 0x2985 */

void __cdecl fcn.00002985(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001c03 @ 0x1c03 */

uint __fastcall fcn.00001c03(uint param_1)

{
    int32_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t *arg_ch;
    int32_t *arg_ch_00;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    arg_ch = &var_8h;
    fcn.00002985(param_1,arg_ch);
    arg_ch_00 = &var_8h;
    fcn.00002985(arg_ch,arg_ch_00);
    var_4h = 0;
    var_8h = 0;
    fcn.00002985(arg_ch_00,&var_4h);
    fcn.00002686(&var_8h);
    iVar1 = var_8h;
    if (var_8h != 0) {
        iVar2 = fcn.000026fc();
        uVar3 = (**(iVar2 + 4))(0x2e);
        *(iVar1 + 0x20) = *(iVar1 + 0x20) & 0xfffffff0 | uVar3 & 0xf;
    }
    fcn.0000683a();
    fcn.00001b78();
    var_8h = &var_10h;
    var_10h = InterruptDescriptorTableRegister();
    fcn.00002a02();
    fcn.000021b7();
    var_8h = &var_10h;
    var_10h = InterruptDescriptorTableRegister();
    fcn.00002a02();
    fcn.000020fc();
    return param_1;
}


/* fcn.00002686 @ 0x2686 */

uint __cdecl fcn.00002686(int32_t arg_8h)

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
            cVar3 = fcn.000028b5();
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


/* fcn.000026fc @ 0x26fc */

int32_t __fastcall fcn.000026fc(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00002985(param_1,&var_4h);
    return var_4h;
}


/* fcn.0000683a @ 0x683a */

ulong __fastcall fcn.0000683a(uint param_1)

{
    int32_t iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint noname_0;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = 0;
    var_14h = 0;
    var_ch = 0;
    fcn.00002985(param_1,&var_4h);
    fcn.00002686(&var_14h);
    fcn.00002686(&var_ch);
    uVar2 = fcn.00007ca7();
    fcn.00007cd3();
    iVar1 = var_ch;
    *(var_ch + 0x24) = *(var_ch + 0x24) ^ (uVar2 << 7 ^ *(var_ch + 0x24)) & 0x80;
    fcn.00002734(noname_0,&var_18h);
    uVar3 = fcn.000001d0();
    *(iVar1 + 0x20) = 0x4000;
    if (((var_18h & 0x40) != 0) && ((uVar3 & 1) != 0)) {
        *(var_14h + 0x1c) = 0x50000;
        *(var_14h + 0x20) = 0xf0000;
    }
    return 0;
}


/* fcn.00001b78 @ 0x1b78 */

void __fastcall fcn.00001b78(uint param_1)

{
    int iVar1;
    char cVar2;
    uint uStack_cc0;
    uint *puStack_cbc;
    uchar auStack_cb8 [50];
    char cStack_c86;
    
    iVar1 = fcn.00002985(param_1,&puStack_cbc);
    if (-1 < iVar1) {
        uStack_cc0 = 0xca9;
        iVar1 = (**puStack_cbc)(puStack_cbc,0xffd39f54,0xffd39c54,0,&uStack_cc0,auStack_cb8);
        cVar2 = '\x02';
        if ((iVar1 < 0) || (cVar2 = cStack_c86, cStack_c86 != '\0')) {
            fcn.00002e4f();
            fcn.000033b2();
            fcn.000035f4();
            fcn.00004646();
            fcn.00003ba3();
            if (cVar2 == '\x02') {
                fcn.00002dc1();
                fcn.00002cc3();
                fcn.00002c48();
            }
        }
    }
    return;
}


/* fcn.00002a02 @ 0x2a02 */

uint __fastcall fcn.00002a02(ushort *param_1)

{
    ushort uVar1;
    int iVar2;
    
    iVar2 = fcn.000026fc();
    uVar1 = (**(iVar2 + 8))(0x1d);
    *param_1 = uVar1;
    return 0;
}


/* fcn.000021b7 @ 0x21b7 */

void __fastcall fcn.000021b7(int *param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iStack_14;
    int iStack_10;
    uchar auStack_c [8];
    
    iStack_10 = 0;
    iStack_14 = 0;
    fcn.00002686(&iStack_10);
    fcn.00002686(&iStack_14);
    iVar2 = fcn.00002570();
    if (iVar2 == 0x90670) {
        iVar2 = fcn.0000258f();
        if (iVar2 == 0) {
            *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) & 0xfffffff9;
        }
    }
    iVar2 = iStack_10;
    *(iStack_10 + 0x48) = 0xfff40000;
    *(iStack_10 + 0x4c) = 0;
    iVar3 = (**(*param_1 + 0x20))(param_1,0xffd39c64,0,0,auStack_c);
    if (iVar3 < 0) {
        *(iVar2 + 0x58) = 4;
    }
    else {
        *(iVar2 + 0x58) = 0;
    }
    cVar1 = fcn.00002294();
    if (cVar1 != '\0') {
        iVar2 = fcn.00002718();
        (**(iVar2 + 0x2c))(0xffd39ad4,5,0xffd91000,0);
    }
    return;
}


/* fcn.000020fc @ 0x20fc */

uint __fastcall fcn.000020fc(uint param_1)

{
    int *piVar1;
    int iVar2;
    uint uStack_1240;
    uint *puStack_123c;
    uchar auStack_1238 [8];
    uchar auStack_1230 [1400];
    uchar auStack_cb8 [3252];
    
    puStack_123c = auStack_1238;
    InterruptDescriptorTableRegister();
    piVar1 = *(auStack_1238._2_4_ + -4);
    fcn.00002a02();
    (**(*piVar1 + 0x20))(piVar1,0xffd39b34,0,0,&puStack_123c);
    uStack_1240 = 0x578;
    iVar2 = (**puStack_123c)(puStack_123c,0xffd39f64,0xffd39dc4,0,&uStack_1240,auStack_1230);
    if (-1 < iVar2) {
        uStack_1240 = 0xca9;
        (**puStack_123c)(puStack_123c,0xffd39f54,0xffd39c54,0,&uStack_1240,auStack_cb8);
    }
    fcn.00001d97(auStack_cb8,param_1);
    return 0;
}


/* fcn.00001d97 @ 0x1d97 */

void __fastcall fcn.00001d97(int *param_1,int param_2,int param_3,uint param_4)

{
    uint8_t uVar1;
    uchar uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    uint *puStack_4;
    
    iStack_18 = 0;
    iStack_1c = 0;
    uStack_14 = 0;
    iStack_10 = 0;
    iStack_c = 0;
    iStack_8 = 0;
    fcn.00002686(&iStack_18);
    fcn.00002686(&iStack_1c);
    fcn.00002686(&iStack_10);
    fcn.00002686(&iStack_c);
    fcn.00002686(&iStack_8);
    iVar4 = iStack_1c;
    uVar5 = *(iStack_1c + 0xb0);
    iVar3 = fcn.000026fc();
    (**(iVar3 + 0x44))(2,uVar5);
    *(iVar4 + 0xb0) = 0xffd33ad7;
    uVar5 = *(iVar4 + 0xc4);
    iVar3 = fcn.000026fc();
    (**(iVar3 + 0x44))(3,uVar5);
    *(iVar4 + 0xc4) = 0xffd33b05;
    *(iStack_18 + 0x78) = *(param_2 + 0x1a3);
    *(iStack_18 + 0x1f) = *(param_2 + 0x18d);
    if (*(param_2 + 0x18a) != '\0') {
        (**(*param_1 + 0x20))(param_1,0xffd39b34,0,0,&puStack_4);
        param_4 = 4;
        iVar4 = (**puStack_4)(puStack_4,0xffd39f74,0xffd39e24,0,&param_4,&uStack_14);
        if (-1 < iVar4) {
            if (uStack_14 < 0xe0000000) {
                if (uStack_14 < 0xd0000000) {
                    if (uStack_14 < 0xc0000000) {
                        if (uStack_14 < 0xb0000000) {
                            if (uStack_14 < 0xa0000000) {
                                if (uStack_14 < 0x90000000) {
                                    if (uStack_14 < 0x80000000) {
                                        if (uStack_14 < 0x70000000) {
                                            if (uStack_14 < 0x60000000) {
                                                if (uStack_14 < 0x50000000) {
                                                    if (uStack_14 < 0x40000000) {
                                                        if (uStack_14 < 0x30000000) {
                                                            if (uStack_14 < 0x20000001) {
                                                                *(param_2 + 0x18a) = 0x14;
                                                            }
                                                        }
                                                        else {
                                                            *(param_2 + 0x18a) = 0x15;
                                                        }
                                                    }
                                                    else {
                                                        *(param_2 + 0x18a) = 1;
                                                    }
                                                }
                                                else {
                                                    *(param_2 + 0x18a) = 2;
                                                }
                                            }
                                            else {
                                                *(param_2 + 0x18a) = 3;
                                            }
                                        }
                                        else {
                                            *(param_2 + 0x18a) = 4;
                                        }
                                    }
                                    else {
                                        *(param_2 + 0x18a) = 5;
                                    }
                                }
                                else {
                                    *(param_2 + 0x18a) = 6;
                                }
                            }
                            else {
                                *(param_2 + 0x18a) = 7;
                            }
                        }
                        else {
                            *(param_2 + 0x18a) = 8;
                        }
                    }
                    else {
                        *(param_2 + 0x18a) = 9;
                    }
                }
                else {
                    *(param_2 + 0x18a) = 10;
                }
            }
            else {
                *(param_2 + 0x18a) = 0xb;
            }
            fcn.00001cc6();
        }
    }
    if (((((*(param_3 + 0x79c) == '\x01') && (*(param_3 + 0x7a9) == '\x01')) && (*(param_3 + 0x7b0) == '\x02')) &&
        ((*(param_3 + 0x7aa) == '\x01' && (*(param_3 + 0x7b1) == '\x02')))) && (*(param_2 + 0x18a) == '\0')) {
        *(param_2 + 0x18a) = 1;
        fcn.00001cc6();
    }
    uVar1 = *(param_2 + 0x18a);
    if (uVar1 < 8) {
        if (uVar1 == 7) {
            uVar5 = 0x600;
            goto code_r0x0000209a;
        }
        if (uVar1 == 1) {
            uVar5 = 0xc00;
            goto code_r0x0000209a;
        }
        if (uVar1 == 2) {
            uVar5 = 0xb00;
            goto code_r0x0000209a;
        }
        if (uVar1 == 3) {
            uVar5 = 0xa00;
            goto code_r0x0000209a;
        }
        if (uVar1 == 4) {
            uVar5 = 0x900;
            goto code_r0x0000209a;
        }
        if (uVar1 == 5) {
            uVar5 = 0x800;
            goto code_r0x0000209a;
        }
        if (uVar1 == 6) {
            uVar5 = 0x700;
            goto code_r0x0000209a;
        }
    }
    else {
        if (uVar1 == 8) {
            uVar5 = 0x500;
            goto code_r0x0000209a;
        }
        if (uVar1 == 9) {
            uVar5 = 0x400;
            goto code_r0x0000209a;
        }
        if ((uVar1 == 10) || (uVar1 == 0xb)) {
            uVar5 = 0x300;
            goto code_r0x0000209a;
        }
        if (uVar1 == 0x14) {
            uVar5 = 0xe00;
            goto code_r0x0000209a;
        }
        if (uVar1 == 0x15) {
            uVar5 = 0xd00;
            goto code_r0x0000209a;
        }
    }
    uVar5 = 0;
code_r0x0000209a:
    *(iStack_10 + 0x34) = uVar5;
    iVar4 = fcn.000026fc();
    uVar2 = (**(iVar4 + 4))(0xa2);
    iVar4 = iStack_c;
    *(iStack_c + 0x30) = uVar2;
    iVar3 = fcn.000026fc();
    uVar2 = (**(iVar3 + 4))(0xa2);
    *(iVar4 + 0x50) = uVar2;
    if (*(iStack_8 + 0x1c) == '\x01') {
        *(iStack_8 + 0x24) = 0;
        *(iStack_8 + 0x28) = 0;
        *(iStack_8 + 0x2c) = 0;
    }
    else {
        *(iStack_8 + 0x24) = 0xfed90000;
        *(iStack_8 + 0x28) = 0xfed92000;
        *(iStack_8 + 0x2c) = 0xfed91000;
    }
    return;
}


/* fcn.00002948 @ 0x2948 */

int __fastcall fcn.00002948(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00002911();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000001b0(iVar1,param_1);
    return iVar1;
}


/* fcn.000001b0 @ 0x1b0 */

uint * fcn.000001b0(uint *param_1,uint32_t param_2)

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


/* fcn.00002911 @ 0x2911 */

int32_t __fastcall fcn.00002911(uint param_1)

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


/* fcn.00002960 @ 0x2960 */

void __fastcall fcn.00002960(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000348 @ 0x348 */

void __fastcall fcn.00000348(uint32_t param_1)

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


/* fcn.000028b5 @ 0x28b5 */

uint32_t __fastcall fcn.000028b5(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000562 @ 0x562 */

uint __thiscall fcn.00000562(uint param_1,uint *param_2,uint *param_3)

{
    ulong uVar1;
    
    uVar1 = fcn.00000517(param_1);
    if (uVar1 >> 0x20 != 0) {
        return 0x80000003;
    }
    *param_2 = uVar1;
    *param_3 = 0x10000;
    return 0;
}


/* fcn.00000517 @ 0x517 */

void fcn.00000517(void)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = 0xc;
    do {
        iVar1 = iVar1 + -1;
    } while (4 < iVar1);
    return;
}


/* fcn.0000058c @ 0x58c */

uint32_t __cdecl fcn.0000058c(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int in_ECX;
    int in_EDX;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00000517();
    arg_ch = in_EDX + -0xd;
    iVar1 = fcn.00001a7b(in_ECX + 0xd,&arg_ch);
    return -(iVar1 != 0) & 0x80000002;
}


/* fcn.00001a7b @ 0x1a7b */

int __fastcall fcn.00001a7b(uint param_1,uint *param_2,uint param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    int iVar2;
    int *in_stack_00000018;
    int in_stack_0000001c;
    int iVar3;
    
    *in_stack_00000018 = 0;
    uVar1 = *param_4;
    *param_4 = 0;
    *param_2 = 0;
    if (uVar1 < 5) {
        iVar2 = 6;
    }
    else {
        iVar2 = fcn.000019c8();
        if ((iVar2 == 0) && (iVar3 = in_stack_0000001c, iVar2 = fcn.00001a1f(in_stack_0000001c), iVar2 == 0)) {
            *param_4 = uVar1;
            iVar2 = fcn.00001727(param_3,param_4,iVar3,in_stack_00000018);
            *param_2 = 0;
            if ((iVar2 == 0) && (*in_stack_00000018 == 3)) {
                iVar2 = 6;
            }
            (**(in_stack_0000001c + 4))(in_stack_0000001c,0);
        }
    }
    return iVar2;
}


/* fcn.000005f1 @ 0x5f1 */

uint __fastcall fcn.000005f1(uint8_t *param_1,uint32_t param_2,uint8_t *param_3)

{
    uchar *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint16_t *puVar15;
    int iVar16;
    int iVar17;
    uchar *puVar18;
    int iVar19;
    uint32_t uVar20;
    int iVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    int iStack_68;
    uint8_t *puStack_54;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    int iStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_24;
    
    iVar6 = *(param_1 + 0xc);
    uVar2 = param_1[2];
    uStack_4c = *(param_1 + 0x40);
    uStack_3c = *(param_1 + 0x30);
    uVar3 = *param_1;
    uStack_30 = *(param_1 + 0x34);
    uStack_2c = *(param_1 + 0x38);
    uStack_24 = *(param_1 + 0x3c);
    uVar10 = *(param_1 + 0x20);
    uVar22 = *(param_1 + 0x24);
    uVar4 = param_1[1];
    uVar7 = *(param_1 + 0x2c);
    iVar8 = *(param_1 + 0x10);
    uVar9 = *(param_1 + 0x14);
    uStack_48 = *(param_1 + 0x18);
    puStack_54 = *(param_1 + 0x1c);
    uStack_44 = *(param_1 + 0x28);
    iStack_40 = 0;
    do {
        uVar14 = uStack_24;
        iVar19 = (uStack_44 & (1 << (uVar2 & 0x1f)) - 1U) * 0x10;
        iVar17 = uStack_4c + iVar19;
        uVar5 = *(iVar6 + -0x200 + iVar17 * 2);
        uVar23 = uVar10;
        if (uVar10 < 0x1000000) {
            uVar23 = uVar10 << 8;
            uVar22 = uVar22 << 8 | *puStack_54;
            puStack_54 = puStack_54 + 1;
        }
        uVar10 = (uVar23 >> 0xb) * uVar5;
        if (uVar22 < uVar10) {
            *(iVar6 + -0x200 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
            iVar17 = iVar6 + 0x280;
            if ((uStack_44 != 0) || (uVar7 != 0)) {
                uVar14 = uVar9;
                if (uStack_48 != 0) {
                    uVar14 = uStack_48;
                }
                iVar17 = iVar17 + ((*((uVar14 - 1) + iVar8) + uStack_44 * 0x100 &
                                   (0x100 << (uVar4 & 0x1f)) - (0x100U >> (uVar3 & 0x1f))) << (uVar3 & 0x1f)) * 6;
            }
            uStack_44 = uStack_44 + 1;
            if (uStack_4c < 7) {
                if (uStack_4c < 4) {
                    uVar23 = uStack_4c;
                }
                else {
                    uVar23 = 3;
                }
                uVar14 = 1;
                do {
                    uVar14 = uVar14 * 2;
                    uVar5 = *(uVar14 + iVar17);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar11 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar11) {
                        *(uVar14 + iVar17) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar11;
                    }
                    else {
                        uVar10 = uVar10 - uVar11;
                        uVar22 = uVar22 - uVar11;
                        *(uVar14 + iVar17) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar14 + 1;
                    }
                } while (uVar14 < 0x100);
            }
            else {
                uVar11 = *(((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48 + iVar8);
                uVar23 = (-(uStack_4c < 10) & 0xfffffffd) + 6;
                uVar14 = 1;
                uVar13 = 0x100;
                do {
                    uVar11 = uVar11 * 2;
                    uVar20 = uVar13 & uVar11;
                    iVar19 = uVar13 + uVar20 + uVar14;
                    uVar5 = *(iVar17 + iVar19 * 2);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar12 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar12) {
                        uVar14 = uVar14 * 2;
                        uVar20 = uVar20 ^ uVar13;
                        *(iVar17 + iVar19 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar12;
                    }
                    else {
                        uVar10 = uVar10 - uVar12;
                        uVar14 = uVar14 * 2 + 1;
                        uVar22 = uVar22 - uVar12;
                        *(iVar17 + iVar19 * 2) = uVar5 - (uVar5 >> 5);
                    }
                    uVar13 = uVar20;
                } while (uVar14 < 0x100);
            }
            uStack_4c = uStack_4c - uVar23;
            *(iVar8 + uStack_48) = uVar14;
            uStack_48 = uStack_48 + 1;
        }
        else {
            uVar23 = uVar23 - uVar10;
            uVar22 = uVar22 - uVar10;
            *(iVar6 + -0x200 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
            uVar5 = *(iVar6 + 0x20 + uStack_4c * 2);
            if (uVar23 < 0x1000000) {
                uVar23 = uVar23 * 0x100;
                uVar22 = uVar22 * 0x100 | *puStack_54;
                puStack_54 = puStack_54 + 1;
            }
            uVar11 = (uVar23 >> 0xb) * uVar5;
            if (uVar22 < uVar11) {
                *(iVar6 + 0x20 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                uStack_4c = uStack_4c + 0xc;
                puVar15 = iVar6 + -0x600;
            }
            else {
                uVar23 = uVar23 - uVar11;
                uVar22 = uVar22 - uVar11;
                *(iVar6 + 0x20 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                uVar5 = *(iVar6 + 0x38 + uStack_4c * 2);
                if (uVar23 < 0x1000000) {
                    uVar23 = uVar23 * 0x100;
                    uVar22 = uVar22 * 0x100 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar11 = (uVar23 >> 0xb) * uVar5;
                if (uVar22 < uVar11) {
                    *(iVar6 + 0x38 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                    iVar17 = uStack_4c + iVar19;
                    uVar5 = *(iVar6 + -0xc00 + iVar17 * 2);
                    if (uVar11 < 0x1000000) {
                        uVar11 = uVar11 * 0x100;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar10 = (uVar11 >> 0xb) * uVar5;
                    if (uVar22 < uVar10) {
                        *(iVar6 + -0xc00 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        *(iVar8 + uStack_48) = *(((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48 + iVar8);
                        uStack_48 = uStack_48 + 1;
                        uStack_44 = uStack_44 + 1;
                        uStack_4c = (-(uStack_4c < 7) & 0xfffffffe) + 0xb;
                        goto code_r0x00000fec;
                    }
                    uVar11 = uVar11 - uVar10;
                    uVar22 = uVar22 - uVar10;
                    *(iVar6 + -0xc00 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                }
                else {
                    uVar23 = uVar23 - uVar11;
                    uVar22 = uVar22 - uVar11;
                    *(iVar6 + 0x38 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                    uVar5 = *(iVar6 + 0x50 + uStack_4c * 2);
                    if (uVar23 < 0x1000000) {
                        uVar23 = uVar23 * 0x100;
                        uVar22 = uVar22 * 0x100 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar11 = (uVar23 >> 0xb) * uVar5;
                    if (uVar22 < uVar11) {
                        *(iVar6 + 0x50 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar14 = uStack_30;
                    }
                    else {
                        uVar23 = uVar23 - uVar11;
                        uVar22 = uVar22 - uVar11;
                        *(iVar6 + 0x50 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                        uVar5 = *(iVar6 + 0x68 + uStack_4c * 2);
                        if (uVar23 < 0x1000000) {
                            uVar23 = uVar23 * 0x100;
                            uVar22 = uVar22 * 0x100 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar10 = (uVar23 >> 0xb) * uVar5;
                        if (uVar22 < uVar10) {
                            *(iVar6 + 0x68 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = uStack_2c;
                            uVar11 = uVar10;
                        }
                        else {
                            uVar11 = uVar23 - uVar10;
                            uVar22 = uVar22 - uVar10;
                            *(iVar6 + 0x68 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                            uStack_24 = uStack_2c;
                        }
                        uStack_2c = uStack_30;
                    }
                    uStack_30 = uStack_3c;
                    uStack_3c = uVar14;
                }
                puVar15 = iVar6 + -0xa00;
                uStack_4c = (-(uStack_4c < 7) & 0xfffffffd) + 0xb;
            }
            uVar5 = *puVar15;
            if (uVar11 < 0x1000000) {
                uVar11 = uVar11 << 8;
                uVar22 = uVar22 << 8 | *puStack_54;
                puStack_54 = puStack_54 + 1;
            }
            uVar10 = (uVar11 >> 0xb) * uVar5;
            if (uVar22 < uVar10) {
                iStack_68 = 0;
                *puVar15 = (0x800 - uVar5 >> 5) + uVar5;
code_r0x00000b5d:
                puVar15 = puVar15 + iVar19;
                uVar14 = 8;
            }
            else {
                uVar11 = uVar11 - uVar10;
                uVar22 = uVar22 - uVar10;
                *puVar15 = uVar5 - (uVar5 >> 5);
                uVar5 = puVar15[8];
                if (uVar11 < 0x1000000) {
                    uVar11 = uVar11 * 0x100;
                    uVar22 = uVar22 * 0x100 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar14 = (uVar11 >> 0xb) * uVar5;
                if (uVar22 < uVar14) {
                    iVar19 = iVar19 + 8;
                    iStack_68 = 8;
                    puVar15[8] = (0x800 - uVar5 >> 5) + uVar5;
                    uVar10 = uVar14;
                    goto code_r0x00000b5d;
                }
                uVar10 = uVar11 - uVar14;
                uVar22 = uVar22 - uVar14;
                uVar14 = 0x100;
                puVar15[8] = uVar5 - (uVar5 >> 5);
                puVar15 = puVar15 + 0x100;
                iStack_68 = 0x10;
            }
            uVar23 = 1;
            do {
                uVar11 = uVar23 * 2;
                uVar5 = puVar15[uVar23];
                if (uVar10 < 0x1000000) {
                    uVar10 = uVar10 << 8;
                    uVar22 = uVar22 << 8 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar13 = (uVar10 >> 0xb) * uVar5;
                if (uVar22 < uVar13) {
                    puVar15[uVar23] = (0x800 - uVar5 >> 5) + uVar5;
                    uVar10 = uVar13;
                }
                else {
                    uVar10 = uVar10 - uVar13;
                    uVar22 = uVar22 - uVar13;
                    puVar15[uVar23] = uVar5 - (uVar5 >> 5);
                    uVar11 = uVar11 + 1;
                }
                uVar23 = uVar11;
            } while (uVar11 < uVar14);
            uVar11 = uVar11 + (iStack_68 - uVar14);
            if (0xb < uStack_4c) {
                if (uVar11 < 4) {
                    uVar14 = uVar11;
                }
                else {
                    uVar14 = 3;
                }
                iVar17 = (uVar14 + 1) * 0x80 + iVar6;
                uVar14 = 1;
                do {
                    uVar14 = uVar14 * 2;
                    uVar5 = *(uVar14 + iVar17);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar23 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar23) {
                        *(uVar14 + iVar17) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar23;
                    }
                    else {
                        uVar10 = uVar10 - uVar23;
                        uVar22 = uVar22 - uVar23;
                        *(uVar14 + iVar17) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar14 + 1;
                    }
                } while (uVar14 < 0x40);
                uVar14 = uVar14 - 0x40;
                if (3 < uVar14) {
                    iVar17 = (uVar14 >> 1) - 1;
                    uVar23 = uVar14 & 1 | 2;
                    if (uVar14 < 0xe) {
                        iVar16 = (uVar23 << (iVar17 & 0x1f)) + 1;
                        iVar19 = 1;
                        do {
                            iVar21 = iVar19;
                            uVar5 = *(iVar6 + -0xd00 + iVar16 * 2);
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            uVar14 = (uVar10 >> 0xb) * uVar5;
                            if (uVar22 < uVar14) {
                                *(iVar6 + -0xd00 + iVar16 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                iVar19 = iVar21;
                                uVar10 = uVar14;
                            }
                            else {
                                uVar10 = uVar10 - uVar14;
                                uVar22 = uVar22 - uVar14;
                                iVar19 = iVar21 * 2;
                                *(iVar6 + -0xd00 + iVar16 * 2) = uVar5 - (uVar5 >> 5);
                            }
                            iVar16 = iVar16 + iVar19;
                            iVar17 = iVar17 + -1;
                            iVar19 = iVar21 * 2;
                        } while (iVar17 != 0);
                        uVar14 = iVar16 + iVar21 * -2;
                    }
                    else {
                        iVar17 = (uVar14 >> 1) - 5;
                        do {
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            uVar10 = uVar10 >> 1;
                            uVar14 = uVar22 - uVar10 >> 0x1f;
                            uVar23 = uVar23 * 2 + 1 + uVar14;
                            uVar22 = (uVar22 - uVar10) + (uVar14 & uVar10);
                            iVar17 = iVar17 + -1;
                        } while (iVar17 != 0);
                        uVar5 = *(iVar6 + 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 * 0x100 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar14 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar14) {
                            *(iVar6 + 2) = (0x800 - uVar5 >> 5) + uVar5;
                            iStack_68 = 2;
                            uVar10 = uVar14;
                        }
                        else {
                            uVar10 = uVar10 - uVar14;
                            uVar22 = uVar22 - uVar14;
                            *(iVar6 + 2) = uVar5 - (uVar5 >> 5);
                            iStack_68 = 3;
                        }
                        iVar17 = iStack_68;
                        uVar5 = *(iVar6 + iStack_68 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar14 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar14) {
                            iStack_68 = 2;
                            *(iVar6 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar10 = uVar14;
                        }
                        else {
                            uVar10 = uVar10 - uVar14;
                            uVar22 = uVar22 - uVar14;
                            iStack_68 = 4;
                            *(iVar6 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                        }
                        iVar17 = iVar17 + iStack_68;
                        uVar5 = *(iVar6 + iVar17 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar13 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar13) {
                            *(iVar6 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = iVar17 + 4;
                            uVar10 = uVar13;
                        }
                        else {
                            uVar10 = uVar10 - uVar13;
                            uVar22 = uVar22 - uVar13;
                            *(iVar6 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                            uVar14 = iVar17 + 8;
                        }
                        uVar5 = *(iVar6 + uVar14 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar13 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar13) {
                            *(iVar6 + uVar14 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = uVar14 - 8;
                            uVar10 = uVar13;
                        }
                        else {
                            uVar10 = uVar10 - uVar13;
                            uVar22 = uVar22 - uVar13;
                            *(iVar6 + uVar14 * 2) = uVar5 - (uVar5 >> 5);
                        }
                        uVar14 = uVar23 * 0x10 | uVar14;
                        if (uVar14 == 0xffffffff) {
                            iStack_40 = 0x112;
                            uStack_4c = uStack_4c - 0xc;
code_r0x00001004:
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            *(param_1 + 0x18) = uStack_48;
                            *(param_1 + 0x1c) = puStack_54;
                            *(param_1 + 0x28) = uStack_44;
                            *(param_1 + 0x20) = uVar10;
                            *(param_1 + 0x24) = uVar22;
                            *(param_1 + 0x44) = iStack_40;
                            *(param_1 + 0x30) = uStack_3c;
                            *(param_1 + 0x34) = uStack_30;
                            *(param_1 + 0x3c) = uStack_24;
                            *(param_1 + 0x38) = uStack_2c;
                            *(param_1 + 0x40) = uStack_4c;
                            return 0;
                        }
                    }
                }
                uStack_24 = uStack_2c;
                uStack_4c = (-(uStack_4c < 0x13) & 0xfffffffd) + 10;
                uStack_2c = uStack_30;
                uStack_30 = uStack_3c;
                uVar23 = uVar7;
                if (uVar7 == 0) {
                    uVar23 = uStack_44;
                }
                uStack_3c = uVar14 + 1;
                if (uVar23 <= uVar14) {
                    *(param_1 + 0x18) = uStack_48;
                    return 1;
                }
            }
            uVar11 = uVar11 + 2;
            uVar14 = param_2 - uStack_48;
            if (uVar14 == 0) {
                *(param_1 + 0x18) = uStack_48;
                return 1;
            }
            if (uVar11 <= uVar14) {
                uVar14 = uVar11;
            }
            uStack_44 = uStack_44 + uVar14;
            iStack_40 = uVar11 - uVar14;
            uVar23 = ((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48;
            if (uVar9 - uVar23 < uVar14) {
                do {
                    *(iVar8 + uStack_48) = *(uVar23 + iVar8);
                    uStack_48 = uStack_48 + 1;
                    uVar23 = -(uVar23 + 1 != uVar9) & uVar23 + 1;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            else {
                puVar18 = iVar8 + uStack_48;
                iVar17 = uVar23 - uStack_48;
                uStack_48 = uStack_48 + uVar14;
                puVar1 = puVar18 + uVar14;
                do {
                    *puVar18 = puVar18[iVar17];
                    puVar18 = puVar18 + 1;
                } while (puVar18 != puVar1);
            }
        }
code_r0x00000fec:
        if ((param_2 <= uStack_48) || (param_3 <= puStack_54)) goto code_r0x00001004;
    } while( true );
}


/* fcn.0000108c @ 0x108c */

void __fastcall fcn.0000108c(int param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *(param_1 + 0x44);
    if ((uVar1 != 0) && (uVar1 < 0x112)) {
        uVar5 = *(param_1 + 0x18);
        uVar2 = *(param_1 + 0x14);
        iVar3 = *(param_1 + 0x10);
        uVar4 = *(param_1 + 0x30);
        uVar6 = uVar1;
        if (param_2 - uVar5 < uVar1) {
            uVar6 = param_2 - uVar5;
        }
        if ((*(param_1 + 0x2c) == 0) && (*(param_1 + 4) - *(param_1 + 0x28) <= uVar6)) {
            *(param_1 + 0x2c) = *(param_1 + 4);
        }
        *(param_1 + 0x28) = *(param_1 + 0x28) + uVar6;
        *(param_1 + 0x44) = uVar1 - uVar6;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uVar5 + iVar3) = *(((-(uVar5 < uVar4) & uVar2) - uVar4) + uVar5 + iVar3);
            uVar5 = uVar5 + 1;
        }
        *(param_1 + 0x18) = uVar5;
    }
    return;
}


/* fcn.00001187 @ 0x1187 */

uint __fastcall fcn.00001187(uint8_t *param_1,uint8_t *param_2,int param_3)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint16_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    uint32_t uStack_c;
    
    puVar1 = param_2 + param_3;
    iVar6 = *(param_1 + 0xc);
    uVar8 = *(param_1 + 0x40);
    uVar11 = *(param_1 + 0x20);
    uVar13 = *(param_1 + 0x24);
    iStack_10 = 1;
    uVar2 = (1 << (param_1[2] & 0x1f)) - 1U & *(param_1 + 0x28);
    iVar3 = uVar2 * 0x10;
    iVar4 = iVar3 + uVar8;
    if (uVar11 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar11 = uVar11 << 8;
        uVar13 = uVar13 << 8 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar5 = (uVar11 >> 0xb) * *(iVar6 + -0x200 + iVar4 * 2);
    if (uVar13 < uVar5) {
        iVar6 = *(param_1 + 0xc) + 0x280;
        if ((*(param_1 + 0x2c) != 0) || (*(param_1 + 0x28) != 0)) {
            iVar3 = *(param_1 + 0x18);
            if (iVar3 == 0) {
                iVar3 = *(param_1 + 0x14);
            }
            iVar6 = iVar6 + ((*(*(param_1 + 0x10) + -1 + iVar3) >> (8 - *param_1 & 0x1f)) +
                            (((1 << (param_1[1] & 0x1f)) - 1U & *(param_1 + 0x28)) << (*param_1 & 0x1f))) * 0x600;
        }
        if (uVar8 < 7) {
            uVar8 = 1;
            do {
                uVar8 = uVar8 * 2;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar11 = (uVar5 >> 0xb) * *(uVar8 + iVar6);
                if (uVar13 < uVar11) {
                    uVar5 = uVar11;
                }
                else {
                    uVar5 = uVar5 - uVar11;
                    uVar13 = uVar13 - uVar11;
                    uVar8 = uVar8 + 1;
                }
            } while (uVar8 < 0x100);
        }
        else {
            if (*(param_1 + 0x18) < *(param_1 + 0x30)) {
                iVar3 = *(param_1 + 0x14);
            }
            else {
                iVar3 = 0;
            }
            uVar8 = 1;
            uVar11 = *((*(param_1 + 0x10) - *(param_1 + 0x30)) + *(param_1 + 0x18) + iVar3);
            uVar2 = 0x100;
            while( true ) {
                uVar11 = uVar11 * 2;
                uVar10 = uVar2 & uVar11;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar7 = (uVar5 >> 0xb) * *(iVar6 + (uVar2 + uVar8 + uVar10) * 2);
                if (uVar13 < uVar7) {
                    uVar8 = uVar8 * 2;
                    uVar10 = uVar10 ^ uVar2;
                    uVar5 = uVar7;
                }
                else {
                    uVar5 = uVar5 - uVar7;
                    uVar8 = uVar8 * 2 + 1;
                    uVar13 = uVar13 - uVar7;
                }
                if (0xff < uVar8) break;
                uVar2 = uVar10;
            }
        }
        uStack_18 = 1;
        goto code_r0x0000170f;
    }
    uVar11 = uVar11 - uVar5;
    uVar13 = uVar13 - uVar5;
    if (uVar11 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar11 = uVar11 * 0x100;
        uVar13 = uVar13 * 0x100 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar10 = (uVar11 >> 0xb) * *(iVar6 + 0x20 + uVar8 * 2);
    iStack_14 = 0;
    if (uVar13 < uVar10) {
        uStack_c = 0;
        puVar9 = iVar6 + -0x600;
        uStack_18 = 2;
    }
    else {
        uVar11 = uVar11 - uVar10;
        uVar13 = uVar13 - uVar10;
        uStack_18 = 3;
        if (uVar11 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar11 = uVar11 * 0x100;
            uVar13 = uVar13 * 0x100 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar5 = (uVar11 >> 0xb) * *(iVar6 + 0x38 + uVar8 * 2);
        if (uVar13 < uVar5) {
            if (uVar5 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar5 = uVar5 * 0x100;
                uVar13 = uVar13 << 8 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar10 = (uVar5 >> 0xb) * *(iVar6 + -0xc00 + iVar4 * 2);
            if (uVar13 < uVar10) {
                if ((uVar10 < 0x1000000) && (puVar1 <= param_2)) {
                    return 0;
                }
                return 3;
            }
code_r0x000014cf:
            uVar13 = uVar13 - uVar10;
            uVar10 = uVar5 - uVar10;
        }
        else {
            uVar11 = uVar11 - uVar5;
            uVar13 = uVar13 - uVar5;
            if (uVar11 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar11 = uVar11 * 0x100;
                uVar13 = uVar13 * 0x100 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar10 = (uVar11 >> 0xb) * *(iVar6 + 0x50 + uVar8 * 2);
            if (uVar10 <= uVar13) {
                uVar5 = uVar11 - uVar10;
                uVar13 = uVar13 - uVar10;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 * 0x100;
                    uVar13 = uVar13 * 0x100 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar10 = (uVar5 >> 0xb) * *(iVar6 + 0x68 + uVar8 * 2);
                if (uVar10 <= uVar13) goto code_r0x000014cf;
            }
        }
        uStack_c = 0xc;
        puVar9 = iVar6 + -0xa00;
    }
    if (uVar10 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar10 = uVar10 << 8;
        uVar13 = uVar13 << 8 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar8 = (uVar10 >> 0xb) * *puVar9;
    if (uVar13 < uVar8) {
        uVar11 = 8;
        puVar9 = puVar9 + uVar2 * 0x10;
code_r0x00001585:
        uVar5 = uVar8;
    }
    else {
        uVar10 = uVar10 - uVar8;
        uVar13 = uVar13 - uVar8;
        if (uVar10 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar10 = uVar10 * 0x100;
            uVar13 = uVar13 * 0x100 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar5 = (uVar10 >> 0xb) * puVar9[8];
        if (uVar5 <= uVar13) {
            uVar8 = uVar10 - uVar5;
            iStack_14 = 0x10;
            uVar13 = uVar13 - uVar5;
            uVar11 = 0x100;
            puVar9 = puVar9 + 0x100;
            goto code_r0x00001585;
        }
        puVar9 = puVar9 + iVar3 + 8;
        uVar11 = 8;
        iStack_14 = 8;
    }
    uVar8 = 1;
    do {
        uVar2 = uVar8 * 2;
        if (uVar5 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar5 = uVar5 << 8;
            uVar13 = uVar13 << 8 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar8 = (uVar5 >> 0xb) * puVar9[uVar8];
        if (uVar13 < uVar8) {
            uVar5 = uVar8;
        }
        else {
            uVar5 = uVar5 - uVar8;
            uVar13 = uVar13 - uVar8;
            uVar2 = uVar2 + 1;
        }
        uVar8 = uVar2;
    } while (uVar2 < uVar11);
    uVar2 = uVar2 + (iStack_14 - uVar11);
    if (uStack_c < 4) {
        if (2 < uVar2) {
            uVar2 = 3;
        }
        uVar8 = 1;
        do {
            uVar8 = uVar8 * 2;
            if (uVar5 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar5 = uVar5 << 8;
                uVar13 = uVar13 << 8 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar11 = (uVar5 >> 0xb) * *(uVar8 + 0x80 + iVar6 + uVar2 * 0x80);
            if (uVar13 < uVar11) {
                uVar5 = uVar11;
            }
            else {
                uVar5 = uVar5 - uVar11;
                uVar13 = uVar13 - uVar11;
                uVar8 = uVar8 + 1;
            }
        } while (uVar8 < 0x40);
        uVar8 = uVar8 - 0x40;
        if (3 < uVar8) {
            iVar3 = (uVar8 >> 1) - 1;
            if (uVar8 < 0xe) {
                iVar6 = iVar6 + ((uVar8 & 1 | 2) << (iVar3 & 0x1f)) * 2 + -0xd00;
            }
            else {
                iVar3 = (uVar8 >> 1) - 5;
                do {
                    if (uVar5 < 0x1000000) {
                        if (puVar1 <= param_2) {
                            return 0;
                        }
                        uVar5 = uVar5 << 8;
                        uVar13 = uVar13 << 8 | *param_2;
                        param_2 = param_2 + 1;
                    }
                    uVar5 = uVar5 >> 1;
                    uVar13 = uVar13 - (0xffffffffU - (uVar13 - uVar5 >> 0x1f) & uVar5);
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                iVar3 = 4;
            }
            iVar4 = 1;
            while( true ) {
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar8 = (uVar5 >> 0xb) * *(iVar6 + iStack_10 * 2);
                if (uVar13 < uVar8) {
                    uVar5 = uVar8;
                    iVar12 = iVar4;
                }
                else {
                    uVar5 = uVar5 - uVar8;
                    uVar13 = uVar13 - uVar8;
                    iVar12 = iVar4 * 2;
                }
                iVar4 = iVar4 * 2;
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) break;
                iStack_10 = iStack_10 + iVar12;
            }
        }
    }
code_r0x0000170f:
    if (0xffffff < uVar5) {
        return uStack_18;
    }
    if (param_2 < puVar1) {
        return uStack_18;
    }
    return 0;
}


/* fcn.0000110a @ 0x110a */

int __fastcall fcn.0000110a(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    
    do {
        if (((*(param_1 + 0x2c) == 0) && (*(param_1 + 0x28) == 0)) && (0xbffffbff < *(param_1 + 0x24))) {
            return 1;
        }
        iVar1 = fcn.000005f1();
        if (iVar1 != 0) {
            return iVar1;
        }
        if ((*(param_1 + 0x2c) == 0) && (*(param_1 + 4) <= *(param_1 + 0x28))) {
            *(param_1 + 0x2c) = *(param_1 + 4);
        }
        fcn.0000108c();
    } while (((*(param_1 + 0x18) < param_2) && (*(param_1 + 0x1c) < param_3)) && (*(param_1 + 0x44) < 0x112));
    return 0;
}


/* fcn.000028d9 @ 0x28d9 */

uint32_t __cdecl fcn.000028d9(uint32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    
    if ((arg_10h != 0) && (arg_8h != arg_ch)) {
        uVar1 = fcn.00000170(arg_8h,arg_ch,arg_10h);
        return uVar1;
    }
    return arg_8h;
}


/* fcn.000019c8 @ 0x19c8 */

uint __fastcall fcn.000019c8(uint8_t *param_1,uint8_t *param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = *(param_2 + 1);
    if (uVar2 < 0x1000) {
        uVar2 = 0x1000;
    }
    uVar1 = *param_2;
    *(param_1 + 4) = uVar2;
    if (0xe0 < uVar1) {
        return 4;
    }
    *param_1 = uVar1 % 9;
    param_1[2] = (uVar1 / 9) / 5;
    param_1[1] = (uVar1 / 9) % 5;
    return 0;
}


/* fcn.00001a1f @ 0x1a1f */

uint __fastcall fcn.00001a1f(int param_1,char *param_2,uint *param_3)

{
    int iVar1;
    int iVar2;
    
    iVar2 = (0x300 << (param_2[1] + *param_2 & 0x1fU)) + 0x7c0;
    if ((*(param_1 + 8) == 0) || (iVar2 != *(param_1 + 0x48))) {
        (*param_3[1])(param_3,*(param_1 + 8));
        *(param_1 + 8) = 0;
        iVar1 = (**param_3)(param_3,iVar2 * 2);
        *(param_1 + 8) = iVar1;
        if (iVar1 == 0) {
            return 2;
        }
        *(param_1 + 0x48) = iVar2;
        *(param_1 + 0xc) = iVar1 + 0xd00;
    }
    return 0;
}


/* fcn.00001727 @ 0x1727 */

uint __fastcall
fcn.00001727(char *param_1,uint32_t param_2,int *param_3,uint32_t *param_4,uint param_5,uint *param_6)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int *arg_ch;
    uint32_t arg_10h;
    uint *puVar5;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    arg_10h = *param_4;
    *param_4 = 0;
    *param_6 = 0;
    arg_ch = param_3;
    if (0x112 < *(param_1 + 0x44)) {
        while ((arg_10h != 0 && (*(param_1 + 0x4c) < 5))) {
            param_1[*(param_1 + 0x4c) + 0x50] = *arg_ch;
            *(param_1 + 0x4c) = *(param_1 + 0x4c) + 1;
            *param_4 = *param_4 + 1;
            arg_10h = arg_10h - 1;
            arg_ch = arg_ch + 1;
        }
        if ((*(param_1 + 0x4c) != 0) && (param_1[0x50] != '\0')) {
            return 1;
        }
        if (*(param_1 + 0x4c) < 5) {
            *param_6 = 3;
            return 0;
        }
        param_1[0x20] = -1;
        param_1[0x21] = -1;
        param_1[0x22] = -1;
        param_1[0x23] = -1;
        param_1[0x4c] = '\0';
        param_1[0x4d] = '\0';
        param_1[0x4e] = '\0';
        param_1[0x4f] = '\0';
        *(param_1 + 0x24) = CONCAT31(CONCAT21(CONCAT11(param_1[0x51],param_1[0x52]),param_1[0x53]),param_1[0x54]);
        if (0x113 < *(param_1 + 0x44)) {
            uVar4 = (0x300 << (param_1[1] + *param_1 & 0x1fU)) + 0x7c0;
            puVar5 = *(param_1 + 8);
            for (uVar3 = uVar4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar5 = 0x4000400;
                puVar5 = puVar5 + 1;
            }
            for (uVar4 = (uVar4 & 1) != 0; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar5 = 0x400;
                puVar5 = puVar5 + 2;
            }
            param_1[0x3c] = '\x01';
            param_1[0x3d] = '\0';
            param_1[0x3e] = '\0';
            param_1[0x3f] = '\0';
            param_1[0x38] = '\x01';
            param_1[0x39] = '\0';
            param_1[0x3a] = '\0';
            param_1[0x3b] = '\0';
            param_1[0x34] = '\x01';
            param_1[0x35] = '\0';
            param_1[0x36] = '\0';
            param_1[0x37] = '\0';
            param_1[0x30] = '\x01';
            param_1[0x31] = '\0';
            param_1[0x32] = '\0';
            param_1[0x33] = '\0';
            param_1[0x40] = '\0';
            param_1[0x41] = '\0';
            param_1[0x42] = '\0';
            param_1[0x43] = '\0';
        }
        param_1[0x44] = '\0';
        param_1[0x45] = '\0';
        param_1[0x46] = '\0';
        param_1[0x47] = '\0';
    }
    fcn.0000108c();
    do {
        while( true ) {
            if (*(param_1 + 0x44) == 0x112) {
                if (*(param_1 + 0x24) != 0) {
                    return 1;
                }
                *param_6 = 1;
                return 0;
            }
            bVar1 = false;
            uStack_8 = 0;
            if (param_2 <= *(param_1 + 0x18)) {
                if (*(param_1 + 0x44) != 0) {
                    *param_6 = 2;
                    return 1;
                }
                if (*(param_1 + 0x24) == 0) {
                    *param_6 = 4;
                    return 0;
                }
                bVar1 = true;
                uStack_8 = 1;
            }
            uVar4 = *(param_1 + 0x4c);
            if (uVar4 == 0) break;
            uVar3 = 0;
            uStack_4 = 0;
            if (uVar4 < 0x14) {
                do {
                    if (arg_10h <= uVar3) break;
                    param_1[uVar4 + 0x50] = *(uVar3 + arg_ch);
                    uVar4 = uVar4 + 1;
                    uVar3 = uVar3 + 1;
                } while (uVar4 < 0x14);
                uStack_4 = uVar3;
            }
            *(param_1 + 0x4c) = uVar4;
            if ((uVar4 < 0x14) || (bVar1)) {
                iVar2 = fcn.00001187(uVar4);
                if (iVar2 == 0) {
                    *param_4 = *param_4 + uStack_4;
                    goto code_r0x000019ab;
                }
                if ((uStack_8 != 0) && (iVar2 != 2)) goto code_r0x00001989;
            }
            *(param_1 + 0x1c) = param_1 + 0x50;
            iVar2 = fcn.0000110a();
            if (iVar2 != 0) {
                return 1;
            }
            uVar3 = (*(param_1 + 0x1c) - param_1) - 0x50;
            if ((uVar4 < uVar3) || (uVar4 = uVar4 - uVar3, uStack_8 < uVar4)) {
                return 0xb;
            }
            iVar2 = uStack_8 - uVar4;
            arg_ch = arg_ch + iVar2;
            arg_10h = arg_10h - iVar2;
            *param_3 = *param_3 + iVar2;
            param_1[0x4c] = '\0';
            param_1[0x4d] = '\0';
            param_1[0x4e] = '\0';
            param_1[0x4f] = '\0';
        }
        if ((arg_10h < 0x14) || (bVar1)) {
            iVar2 = fcn.00001187(arg_10h);
            if (iVar2 == 0) {
                fcn.000028d9(param_1 + 0x50,arg_ch,arg_10h);
                *(param_1 + 0x4c) = arg_10h;
                *param_4 = *param_4 + arg_10h;
code_r0x000019ab:
                *param_6 = 3;
                return 0;
            }
            if ((uStack_8 != 0) && (iVar2 != 2)) {
code_r0x00001989:
                *param_6 = 2;
                return 1;
            }
        }
        *(param_1 + 0x1c) = arg_ch;
        iVar2 = fcn.0000110a();
        if (iVar2 != 0) {
            return 1;
        }
        iVar2 = *(param_1 + 0x1c) - arg_ch;
        arg_ch = *(param_1 + 0x1c);
        *param_3 = *param_3 + iVar2;
        arg_10h = arg_10h - iVar2;
    } while( true );
}


/* fcn.00002e4f @ 0x2e4f */

uint __fastcall fcn.00002e4f(uint param_1)

{
    int iVar1;
    uint noname_0;
    int32_t var_1ch;
    uchar var_17h;
    int8_t var_16h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    var_ch = 0;
    fcn.00002985(param_1,&var_4h);
    fcn.00002686(&var_8h);
    fcn.00002686(&var_ch);
    fcn.00002985(noname_0,&var_14h);
    var_10h = 7;
    iVar1 = (**var_14h)(var_14h,0xffd39fb0,0xffd39b84,0,&var_10h,&var_1ch);
    if (iVar1 == 0) {
        *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (var_1ch._1_1_ ^ *(var_8h + 0x1c)) & 0xf;
        *(var_ch + 0x1c) = var_1ch._2_1_;
        if (var_1ch._2_1_ != '\0') {
            *(var_ch + 0x1d) = var_17h;
            *(var_ch + 0x20) = var_16h;
            *(var_ch + 0x1e) = stack0xffffffe3;
        }
    }
    *(var_8h + 0x20) = 0;
    return 0;
}


/* fcn.000033b2 @ 0x33b2 */

int __fastcall fcn.000033b2(uint param_1)

{
    int8_t *piVar1;
    int iVar2;
    int32_t *piVar3;
    int8_t *piVar4;
    uint32_t uVar5;
    int32_t var_14d0h;
    int32_t in_stack_ffffeb34;
    int32_t in_stack_ffffeb38;
    int32_t in_stack_ffffeb84;
    int8_t var_940h;
    int8_t var_938h;
    int8_t var_920h;
    int32_t var_820h;
    int8_t var_816h;
    int8_t var_7ffh;
    int8_t var_7feh;
    uint32_t var_7fch;
    int8_t var_15fh;
    int8_t var_10ch;
    int8_t var_10bh;
    int8_t var_10ah;
    int8_t var_e8h;
    int8_t var_e2h;
    int8_t var_e1h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    piVar3 = &var_8h;
    uVar5 = 0;
    var_8h = 0;
    iVar2 = fcn.00002985(param_1,piVar3);
    if (-1 < iVar2) {
        fcn.00002985(piVar3,&var_10h);
        var_ch = 0xca9;
        (**var_10h)(var_10h,0xffd39f54,0xffd39c54,0,&var_ch,&var_14d0h);
        var_ch = 0x80d;
        (**var_10h)(var_10h,0xffd39f88,0xffd39d74,0,&var_ch,&var_820h);
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = var_7ffh & 1 | *(var_4h + 0x1c) & 0xffffff62;
        }
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = var_e2h;
            *(var_4h + 0x1d) = var_e1h;
            *(var_4h + 0x1f) = var_816h;
        }
        piVar3 = &var_4h;
        iVar2 = fcn.00002686(piVar3);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = var_10ch;
            *(var_4h + 0x1d) = var_10bh;
            *(var_4h + 0x1e) = var_10ah;
            piVar3 = var_4h;
        }
        fcn.00002f07(piVar3);
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (var_7feh ^ *(var_4h + 0x1c)) & 1;
        }
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = var_7fch == '\0' | *(var_4h + 0x1c) & 0xfffffffe;
        }
        fcn.00002f89(in_stack_ffffeb34,in_stack_ffffeb38,in_stack_ffffeb84);
        fcn.00003239(&var_820h);
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (var_15fh ^ *(var_4h + 0x1c)) & 1;
        }
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x1c) = var_e8h;
        }
        iVar2 = fcn.00002686(&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 0x3c) = var_920h;
            piVar4 = var_4h + 0x1d;
            do {
                piVar4[-1] = (&var_940h)[uVar5];
                piVar1 = &var_938h + uVar5;
                uVar5 = uVar5 + 1;
                *piVar4 = *piVar1;
                piVar4 = piVar4 + 4;
            } while (uVar5 < 8);
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.000035f4 @ 0x35f4 */

int __fastcall fcn.000035f4(uint param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint noname_0;
    int32_t var_48h;
    int8_t var_43h;
    int8_t var_42h;
    int8_t var_41h;
    int8_t var_40h;
    int8_t var_3fh;
    int8_t var_3eh;
    int8_t var_3dh;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    iVar1 = fcn.00002985(param_1,&var_10h);
    if (-1 < iVar1) {
        var_ch = 0x36;
        iVar1 = (**var_10h)(var_10h,0xffd39fc0,0xffd39d64,0,&var_ch,&var_48h);
        if (-1 < iVar1) {
            fcn.00002985(noname_0,&var_4h);
            iVar1 = fcn.00002686(&var_8h);
            *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (var_43h ^ *(var_8h + 0x1c)) & 1;
            uVar2 = (var_42h * 2 ^ *(var_8h + 0x1c)) & 6 ^ *(var_8h + 0x1c);
            *(var_8h + 0x1c) = uVar2;
            uVar2 = (var_41h << 3 ^ uVar2) & 8 ^ uVar2;
            *(var_8h + 0x1c) = uVar2;
            uVar2 = (var_40h << 5 ^ uVar2) & 0x20 ^ uVar2;
            *(var_8h + 0x1c) = uVar2;
            uVar2 = (var_3fh << 6 ^ uVar2) & 0x40 ^ uVar2;
            *(var_8h + 0x1c) = uVar2;
            uVar2 = (var_3eh << 7 ^ uVar2) & 0x80 ^ uVar2;
            *(var_8h + 0x1c) = uVar2;
            *(var_8h + 0x1c) = (var_3dh << 8 ^ uVar2) & 0x100 ^ uVar2;
        }
    }
    return iVar1;
}


/* fcn.00004646 @ 0x4646 */

//WARNING: Control flow encountered bad instruction data

uint fcn.00004646(void)

{
    uchar *puVar1;
    int iVar2;
    char cVar3;
    uchar uVar4;
    uint16_t uVar5;
    ushort uVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uchar *puVar10;
    uint *puVar11;
    int iVar12;
    char *pcVar13;
    uint32_t uVar14;
    int iVar15;
    uint uVar16;
    char extraout_CL;
    uint noname_0;
    int16_t *piVar17;
    uint16_t *puVar18;
    uint noname_0_00;
    int *piVar19;
    uint noname_0_01;
    uint8_t uVar20;
    int16_t iVar21;
    int *piVar22;
    uint8_t *puVar23;
    uchar *puVar24;
    bool bVar25;
    ulong uVar26;
    int iStack_1f28;
    char cStack_1f22;
    uint8_t uStack_1f21;
    uint uStack_1f20;
    uint *puStack_1f1c;
    int iStack_1f18;
    int iStack_1f14;
    uchar *puStack_1f10;
    uchar *puStack_1f0c;
    int iStack_1f08;
    int iStack_1f04;
    uchar *puStack_1f00;
    uint32_t uStack_1efc;
    int iStack_1ef8;
    int iStack_1ef4;
    uint32_t uStack_1ef0;
    uint8_t *puStack_1eec;
    uchar *puStack_1ee8;
    uint16_t *puStack_1ee4;
    uchar uStack_1ee0;
    uchar uStack_1edf;
    uchar uStack_1ede;
    uchar uStack_1edd;
    uchar uStack_1edc;
    uchar uStack_1edb;
    uchar uStack_1eda;
    uchar uStack_1ed9;
    uchar uStack_1ed8;
    uchar uStack_1ed7;
    uchar uStack_1ed6;
    uchar uStack_1ed5;
    uchar uStack_1ed4;
    uchar uStack_1ed3;
    uchar uStack_1ed2;
    uchar uStack_1ed1;
    int iStack_1ed0;
    int iStack_1ecc;
    int iStack_1ec8;
    uint *puStack_1ec4;
    int iStack_1ec0;
    char *pcStack_1ebc;
    uint uStack_1eb8;
    int iStack_1eb4;
    int iStack_1eb0;
    int iStack_1eac;
    int iStack_1ea8;
    int iStack_1ea4;
    uint32_t auStack_1ea0 [5];
    uchar auStack_1e8c [3];
    ushort uStack_1e89;
    uchar uStack_1e87;
    uchar uStack_1e86;
    uint8_t uStack_1e84;
    uint8_t uStack_1e83;
    ushort uStack_1e82;
    ushort uStack_1e80;
    uint8_t uStack_1e7e;
    ushort uStack_1e7d;
    ushort uStack_1e7b;
    uint8_t uStack_1e79;
    uint8_t uStack_1e78;
    uint8_t uStack_1e77;
    uint8_t uStack_1e76;
    uchar uStack_1e75;
    uint8_t uStack_1e59;
    uchar uStack_1e58;
    uchar uStack_1e57;
    uchar uStack_1e56;
    int iStack_1e48;
    uint8_t uStack_1e2c;
    uchar auStack_1e20 [8];
    uchar auStack_1e18 [2];
    ushort uStack_1e16;
    ushort uStack_1e14;
    uint8_t uStack_1e12;
    char acStack_1e10 [4];
    uchar uStack_1e0c;
    uchar uStack_1e09;
    uchar uStack_1e08;
    uchar uStack_1e07;
    uchar uStack_1e06;
    uchar uStack_1e05;
    char cStack_1e04;
    char cStack_1e03;
    char cStack_1e02;
    uchar uStack_1e00;
    uchar uStack_1dfd;
    uchar uStack_1de0;
    uchar uStack_1ddf;
    uchar uStack_1dde;
    char cStack_1ddb;
    char cStack_1dda;
    ushort uStack_1dd9;
    ushort uStack_1dd7;
    uchar uStack_1dd5;
    char cStack_1dd3;
    uint8_t uStack_1dd2;
    uint8_t uStack_1dd1;
    uint8_t uStack_1dd0;
    uint8_t uStack_1dcf;
    uint8_t uStack_1dce;
    uint8_t uStack_1dcd;
    uint8_t uStack_1dcc;
    uint8_t uStack_1dcb;
    uint auStack_1da5 [3];
    uint8_t uStack_1d96;
    uint auStack_1d85 [32];
    uchar uStack_1d04;
    uint8_t uStack_1d03;
    uchar uStack_1d02;
    ushort uStack_1d01;
    char cStack_1cff;
    uint8_t uStack_1cfe;
    uint8_t uStack_1cfd;
    uint8_t uStack_1cfc;
    uint8_t uStack_1cfb;
    uint8_t uStack_1cfa;
    uint8_t uStack_1cf9;
    ushort uStack_1cf8;
    uchar uStack_1cf6;
    uchar uStack_1cf0;
    uchar uStack_1cef;
    uint8_t uStack_1cee;
    uchar uStack_1ceb;
    uchar uStack_1cea;
    uchar uStack_1ce9;
    uint8_t uStack_1ce8;
    uint8_t uStack_1ce7;
    uint8_t uStack_1ce6;
    uchar auStack_1ce5 [72];
    uint8_t uStack_1c9d;
    uint8_t uStack_1c9c;
    uchar uStack_1c9b;
    uchar auStack_1c9a [8];
    uchar auStack_1c92 [4];
    uchar uStack_1c8e;
    uint8_t uStack_1c8d;
    uint8_t uStack_1c8c;
    uint8_t uStack_1c8b;
    uint8_t uStack_1c8a;
    uint8_t uStack_1c89;
    uint8_t uStack_1c88;
    uint8_t uStack_1c87;
    uint8_t uStack_1c86;
    uint8_t uStack_1c85;
    uint8_t uStack_1c84;
    uint8_t uStack_1c83;
    uint8_t uStack_1c82;
    uint8_t uStack_1c81;
    uint8_t uStack_1c80;
    uint8_t uStack_1c7f;
    uint8_t uStack_1c7e;
    uint8_t uStack_1c7d;
    uint8_t uStack_1c7c;
    uint8_t uStack_1c7b;
    uint8_t uStack_1c7a;
    uint8_t uStack_1c79;
    uint8_t uStack_1c78;
    uint8_t uStack_1c77;
    uint8_t uStack_1c76;
    uint8_t uStack_1c75;
    uint8_t uStack_1c74;
    uint8_t uStack_1c73;
    uint8_t uStack_1c72;
    uint8_t uStack_1c71;
    uint8_t uStack_1c70;
    uint8_t uStack_1c6f;
    uint8_t uStack_1c6e;
    uint8_t uStack_1c6d;
    uint8_t uStack_1c6c;
    uchar uStack_1c6b;
    uint8_t uStack_1c69;
    uint8_t uStack_1c66;
    uchar uStack_1c65;
    uint8_t uStack_1c64;
    uchar uStack_1c63;
    uchar uStack_1c62;
    uchar uStack_1c61;
    uint8_t uStack_1c5b;
    uchar uStack_1c59;
    uchar uStack_1c58;
    uchar uStack_1c57;
    uchar uStack_1c56;
    uchar uStack_1c55;
    uchar uStack_1c54;
    uchar uStack_1c53;
    uchar uStack_1c52;
    uint8_t uStack_1c51;
    uint8_t uStack_1c50;
    uint8_t uStack_1c4f;
    uint8_t uStack_1c4e;
    uchar uStack_1c4d;
    uchar uStack_1c4c;
    uint8_t uStack_1c47;
    uint8_t uStack_1c46;
    uint8_t uStack_1c45;
    uint8_t auStack_1c38 [11];
    uint16_t uStack_1c2d;
    char cStack_1c2b;
    uchar uStack_1c2a;
    uint8_t uStack_1c29;
    uint16_t uStack_1c28;
    char cStack_1c26;
    uchar uStack_1c25;
    uchar uStack_1c24;
    ushort uStack_1c23;
    uint8_t uStack_1c18;
    uchar uStack_1c15;
    uchar auStack_1b88 [35];
    uchar uStack_1b65;
    uchar auStack_1b47 [144];
    char acStack_1ab7 [7];
    uchar uStack_1ab0;
    uchar uStack_1a9e;
    uchar uStack_1a9d;
    uchar uStack_1a9c;
    ushort uStack_1a9b;
    uchar uStack_1a99;
    uchar uStack_1a98;
    ushort uStack_1a97;
    ushort uStack_1a95;
    uchar uStack_1a8f;
    uchar uStack_1a8d;
    uint8_t uStack_1a89;
    uchar uStack_1a88;
    uchar uStack_1a87;
    uint uStack_1a86;
    uint uStack_1a82;
    uint uStack_1a7e;
    uint uStack_1a7a;
    uint uStack_1a76;
    uchar uStack_1a72;
    uchar uStack_1a71;
    uchar uStack_1a6a;
    uint uStack_1a65;
    uchar uStack_1a61;
    uchar uStack_1a60;
    uchar uStack_1a5f;
    uint8_t uStack_1a5e;
    uint8_t uStack_1a5d;
    uint8_t uStack_1a59;
    ushort uStack_1a58;
    ushort uStack_1a56;
    ushort uStack_1a54;
    uint8_t uStack_1a52;
    uint8_t uStack_1a51;
    uint8_t uStack_1a50;
    uint8_t uStack_1a4f;
    uint8_t uStack_1a4e;
    uint uStack_1a42;
    uint uStack_1a3e;
    uint uStack_1a3a;
    uint uStack_1a36;
    uint uStack_1a32;
    ushort uStack_1a2e;
    uchar uStack_1a2c;
    uchar uStack_1a2b;
    uchar uStack_1a2a;
    uchar uStack_1a29;
    uchar uStack_1a28;
    uchar uStack_1a27;
    uchar uStack_1a26;
    uint8_t uStack_1a25;
    ushort uStack_1a23;
    ushort uStack_1a21;
    ushort uStack_1a1f;
    ushort uStack_1a1d;
    ushort uStack_1a1b;
    uchar uStack_1a19;
    uchar uStack_1a18;
    uint8_t uStack_1a17;
    uint8_t uStack_1a16;
    uchar uStack_1a15;
    uchar uStack_1a14;
    uint8_t uStack_1a13;
    uchar uStack_1a12;
    uchar auStack_1914 [8];
    uchar auStack_190c [4];
    int aiStack_1908 [31];
    uchar auStack_188c [119];
    char cStack_1815;
    char cStack_1814;
    char cStack_1813;
    char cStack_1812;
    char cStack_1811;
    char cStack_1810;
    uint8_t uStack_1674;
    uchar uStack_1673;
    uchar uStack_1672;
    uint8_t uStack_15ed;
    uchar uStack_15eb;
    uchar uStack_15ea;
    uint8_t uStack_1564;
    uchar uStack_1563;
    uchar uStack_1562;
    uint8_t uStack_14dc;
    uchar uStack_14db;
    uchar uStack_14da;
    uint8_t uStack_1454;
    uchar uStack_1453;
    uchar uStack_1452;
    uint8_t uStack_13cc;
    uchar uStack_13cb;
    uchar uStack_13ca;
    char acStack_10e3 [11];
    uint16_t auStack_10d8 [13];
    char acStack_10bd [12];
    int16_t aiStack_10b1 [222];
    char cStack_ef5;
    char cStack_ee2;
    uint16_t auStack_d10 [4];
    uchar auStack_d08 [44];
    uchar uStack_cdc;
    uchar auStack_bdc [290];
    uint8_t uStack_aba;
    uint8_t uStack_a03;
    int aiStack_9c9 [109];
    uchar auStack_814 [2068];
    
    fcn.000001b0(&uStack_1ee0,0x10);
    cStack_1f22 = '\0';
    iStack_1eb4 = 0;
    iStack_1f28 = 0;
    uStack_1efc = 0;
    uStack_1eb8 = 0;
    iStack_1ecc = 0;
    iStack_1ef8 = 0;
    iStack_1eb0 = 0;
    iStack_1f14 = 0;
    iStack_1f04 = 0;
    iStack_1ea8 = 0;
    iStack_1ea4 = 0;
    iStack_1f08 = 0;
    iStack_1eac = 0;
    puStack_1f0c = NULL;
    iStack_1ec0 = 0;
    iStack_1ef4 = 0;
    auStack_1ea0[3] = 0;
    iVar7 = fcn.000026fc();
    uVar8 = (**(iVar7 + 8))(0x110);
    puVar24 = uVar8 & 0xffff;
    puStack_1f10 = puVar24;
    fcn.00002985(noname_0,&uStack_1eb8);
    fcn.00002686(&iStack_1ec0);
    fcn.00002686(&iStack_1f08);
    fcn.00002686(&iStack_1ecc);
    fcn.00002686(&iStack_1ef8);
    fcn.00002686(&iStack_1f04);
    fcn.00002686(&iStack_1f28);
    fcn.00002686(&iStack_1eb0);
    fcn.00002686(&iStack_1f14);
    fcn.00002686(&iStack_1eac);
    fcn.00002686(&iStack_1ea8);
    fcn.00002686(&iStack_1ea4);
    fcn.00002686(&puStack_1f0c);
    fcn.00002686(&iStack_1ec8);
    fcn.00002686(&puStack_1ee8);
    piVar19 = &iStack_1ed0;
    iStack_1ed0 = 0;
    fcn.00002686(piVar19);
    iVar7 = iStack_1f14;
    puStack_1ee4 = *(iStack_1f14 + 0xf4);
    fcn.00002985(piVar19,&puStack_1f1c);
    fcn.000029b2();
    puVar23 = NULL;
    uStack_1f20 = 0;
    puStack_1eec = NULL;
    iVar9 = (**puStack_1f1c)(puStack_1f1c,0xffd39fdc,0xffd39cb4,0,&uStack_1f20,0);
    if (iVar9 == -0x7ffffffb) {
        puVar23 = fcn.00002948();
        puStack_1eec = puVar23;
        (**puStack_1f1c)(puStack_1f1c,0xffd39fdc,0xffd39cb4,0,&uStack_1f20,puVar23);
    }
    else {
        *0xfe001022 = *0xfe001022 & 0x7a;
        iVar7 = iStack_1f14;
    }
    puVar10 = fcn.00002948();
    iVar9 = iStack_1f08;
    if (puVar10 == NULL) {
        return 0x80000009;
    }
    *(puVar10 + 4) = puVar23;
    *puVar10 = 1;
    *(iStack_1f08 + 0x2c) = puStack_1eec;
    puVar11 = fcn.00002948();
    if (puVar11 == NULL) {
        return 0x80000009;
    }
    *puVar11 = 0x80000010;
    puVar11[1] = 0xffd39b04;
    puVar11[2] = puVar10;
    fcn.00002960();
    uStack_1f20 = 1;
    iVar12 = (**puStack_1f1c)(puStack_1f1c,0xffd39ff8,0xffd39ca4,0,&uStack_1f20,&uStack_1f21);
    uStack_1f20 = 7;
    uStack_1f21 = uStack_1f21 & (iVar12 < 0) - 1U;
    (**puStack_1f1c)(puStack_1f1c,0xffd39fb0,0xffd39b84,0,&uStack_1f20,auStack_1914);
    uStack_1f20 = 0xca9;
    (**puStack_1f1c)(puStack_1f1c,0xffd39f54,0xffd39c54,0,&uStack_1f20,auStack_188c);
    uStack_1f20 = 0x578;
    puStack_1f00 = (**puStack_1f1c)(puStack_1f1c,0xffd39f64,0xffd39dc4,0,&uStack_1f20,auStack_1e8c);
    uStack_1f20 = 0x3c1;
    (**puStack_1f1c)(puStack_1f1c,0xffd39f9c,0xffd39bc4,0,&uStack_1f20,auStack_bdc);
    uStack_1f20 = 0x80d;
    (**puStack_1f1c)(puStack_1f1c,0xffd39f88,0xffd39d74,0,&uStack_1f20,auStack_814);
    if (cStack_ee2 == '\x01') {
        pcVar13 = acStack_10bd;
        piVar17 = aiStack_10b1;
        iVar12 = 6;
        iVar21 = puStack_1f10;
        do {
            if (*pcVar13 == '\x01') {
                iVar21 = iVar21 + *piVar17;
                puStack_1f10 = CONCAT22(puStack_1f10._2_2_,iVar21);
                puVar24 = puStack_1f10;
            }
            pcVar13 = pcVar13 + 1;
            piVar17 = piVar17 + 1;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
    }
    iVar12 = fcn.000026fc();
    (**(iVar12 + 0x40))(0x110,puVar24);
    if (cStack_ee2 == '\x01') {
        pcVar13 = acStack_10e3;
        puVar18 = auStack_10d8;
        iVar7 = 2;
        do {
            if (*pcVar13 == '\x01') {
                puStack_1f10 = puVar24 + *puVar18;
                puVar24 = puStack_1f10;
                if (((iStack_1f18 == 0x12) || (iStack_1f18 == 0x20)) && (0x164 < *puVar18)) {
                    if (puStack_1f10 < 0x165) {
                        puVar24 = NULL;
                    }
                    else {
                        puVar24 = puStack_1f10 + 0xfe9c;
                    }
                }
            }
            pcVar13 = pcVar13 + 1;
            puVar18 = puVar18 + 1;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = iStack_1f14;
    }
    iVar12 = fcn.000026fc();
    (**(iVar12 + 0x40))(0x110,puVar24);
    *(iVar9 + 0x40) = 0;
    *(iVar9 + 0x43) = auStack_1c38[3];
    *(iVar9 + 0x3c) = *(iVar9 + 0x3c) & 0xfffffffb;
    *(puStack_1f0c + 0x1c) = uStack_1d96;
    cVar3 = fcn.00006f59();
    if (cVar3 != '\0') {
        iVar7 = -puStack_1ee8;
        puStack_1f10 = auStack_1b88 + -puStack_1ee8;
        pcStack_1ebc = acStack_1ab7 + -puStack_1ee8;
        puStack_1eec = auStack_1c38 + -puStack_1ee8;
        puVar24 = puStack_1ee8 + 0x24;
        iVar9 = -0x24 - puStack_1ee8;
        uVar8 = uStack_1efc;
        puStack_1f0c = auStack_1b47 + iVar7;
        do {
            *puVar24 = puVar24[auStack_1b47 + iVar7];
            puVar24[4] = puVar24[puStack_1f10];
            puVar24[8] = puVar24[pcStack_1ebc];
            if (puVar24[puStack_1eec] == '\0') {
                uVar8 = uVar8 & ~(1 << (puVar24 + iVar9 & 0x1f));
            }
            else {
                uVar8 = uVar8 | 1 << (puVar24 + iVar9 & 0x1f);
            }
            puVar24 = puVar24 + 1;
            uVar14 = fcn.00006f59();
        } while (puVar24 + iVar9 < (uVar14 & 0xff));
        iVar7 = iStack_1f14;
        iVar9 = iStack_1f08;
        uStack_1efc = uVar8;
    }
    puStack_1ee8[0x20] = uStack_1b65;
    *(puStack_1ee8 + 0x1c) = uStack_1efc;
    puStack_1ee8[0x30] = uStack_1a8d;
    iVar12 = fcn.000026fc();
    iVar12 = (**(iVar12 + 0xc))(0x69);
    if (iVar12 != 0) {
        uVar14 = 10;
        iVar12 = fcn.000026fc();
        uVar8 = (**(iVar12 + 0xc))(0x69);
        fcn.000028d9(puStack_1ee4 + 1,uVar8,uVar14);
    }
    iVar12 = fcn.000026fc();
    cVar3 = (**(iVar12 + 0x18))(100);
    iVar12 = iStack_1ef8;
    if (cVar3 != '\0') {
        iVar15 = fcn.000026fc();
        uVar8 = (**(iVar15 + 0x18))(99);
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) & 0xfffffffb | (uVar8 & 1) << 2;
    }
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x6a);
    *(iVar9 + 0x1c) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x6b);
    *(iVar9 + 0x1d) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x72);
    *(iVar9 + 0x1e) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x73);
    *(iVar9 + 0x1f) = uVar4;
    iVar15 = fcn.000026fc();
    cVar3 = (**(iVar15 + 4))(0x67);
    if (cVar3 != '\0') {
        iVar15 = fcn.000026fc();
        uVar8 = (**(iVar15 + 4))(0x67);
        *(iVar12 + 0x7c) = uVar8 & 0xff;
    }
    uVar8 = fcn.00002948();
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x74);
    *(iVar9 + 0x20) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x75);
    *(iVar9 + 0x21) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x76);
    *(iVar9 + 0x22) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x77);
    *(iVar9 + 0x23) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x78);
    *(iVar9 + 0x24) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x79);
    *(iVar9 + 0x25) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x6c);
    *(iVar9 + 0x26) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x6d);
    *(iVar9 + 0x27) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x6e);
    *(iVar9 + 0x28) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x6f);
    *(iVar9 + 0x29) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x70);
    *(iVar9 + 0x2a) = uVar4;
    iVar15 = fcn.000026fc();
    uVar4 = (**(iVar15 + 4))(0x71);
    *(iVar9 + 0x2b) = uVar4;
    iVar15 = fcn.000026fc();
    iVar15 = (**(iVar15 + 0xc))(0x68);
    if (iVar15 != 0) {
        iVar15 = fcn.000026fc();
        uVar5 = (**(iVar15 + 0xc))(0x68);
        *puStack_1ee4 = uVar5 & 0xff;
    }
    iVar15 = fcn.000026fc();
    iVar15 = (**(iVar15 + 0xc))(0x65);
    if (iVar15 != 0) {
        iVar15 = fcn.000026fc();
        uVar14 = (**(iVar15 + 0xc))(0x65);
        fcn.000028d9(*(iVar7 + 0xf0),uVar14,0x10);
    }
    iVar15 = fcn.000026fc();
    iVar15 = (**(iVar15 + 0xc))(0x61);
    if (iVar15 != 0) {
        iVar15 = fcn.000026fc();
        uVar14 = (**(iVar15 + 0xc))(0x61);
        fcn.000028d9(*(iVar7 + 0xf0) + 0x10,uVar14,0x80);
    }
    iVar15 = fcn.000026fc();
    cVar3 = (**(iVar15 + 0x18))(0x11a);
    if (cVar3 == '\0') {
        iVar15 = fcn.000026fc();
        iVar15 = (**(iVar15 + 0xc))(0x7a);
        if (iVar15 != 0) {
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec),uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec) + 0x800,uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec) + 0x1000,uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec) + 0x1800,uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec) + 0x2000,uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec) + 0x2800,uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            fcn.000028d9(*(iVar7 + 0xec) + 0x3000,uVar8,0x400);
            iVar15 = fcn.000026fc();
            uVar8 = (**(iVar15 + 0xc))(0x7a);
            goto code_r0x00004f4d;
        }
    }
    else {
        fcn.000028d9(*(iVar7 + 0xec),uVar8,0x400);
        fcn.000028d9(*(iVar7 + 0xec) + 0x800,uVar8,0x400);
        fcn.000028d9(*(iVar7 + 0xec) + 0x1000,uVar8,0x400);
        fcn.000028d9(*(iVar7 + 0xec) + 0x1800,uVar8,0x400);
        fcn.000028d9(*(iVar7 + 0xec) + 0x2000,uVar8,0x400);
        fcn.000028d9(*(iVar7 + 0xec) + 0x2800,uVar8,0x400);
        fcn.000028d9(*(iVar7 + 0xec) + 0x3000,uVar8,0x400);
code_r0x00004f4d:
        fcn.000028d9(*(iVar7 + 0xec) + 0x3800,uVar8,0x400);
    }
    *(iVar12 + 0x44) = uStack_1c59;
    *(iVar12 + 0x45) = uStack_1c58;
    *(iVar12 + 0x46) = uStack_1c57;
    *(iVar12 + 0x47) = uStack_1c56;
    *(iVar12 + 0x48) = uStack_1c55;
    *(iVar12 + 0x49) = uStack_1c54;
    *(iVar12 + 0x4a) = uStack_1c53;
    *(iVar12 + 0x4b) = uStack_1c52;
    *(iVar12 + 0x82) = uStack_1c8e;
    fcn.000028d9(iVar12 + 0x9c,auStack_1c92,4);
    fcn.000028d9(iVar12 + 0x94,auStack_1c9a,8);
    iVar12 = iStack_1ec0;
    if (-1 < puStack_1f00) {
        *(iStack_1ec0 + 0x1c) = 0xfedc0000;
        *(iStack_1ec0 + 0x20) = 0xfeda0000;
        *(iStack_1ec0 + 0x24) = 0xfeda1000;
        *(iStack_1ec0 + 0x30) = 0xfed80000;
        *(iVar9 + 0x30) = 0xefa0;
        *(iVar9 + 0x34) = 0x1000000;
        iVar7 = fcn.000026fc();
        uVar4 = (**(iVar7 + 4))(0x111);
        *(iVar9 + 0x40) = uVar4;
        iVar7 = fcn.000026fc();
        uVar4 = (**(iVar7 + 4))(0x10d);
        *(iVar9 + 99) = uVar4;
        iVar7 = fcn.000026fc();
        uVar8 = (**(iVar7 + 8))(0x110);
        iVar9 = iStack_1ecc;
        *(iVar12 + 0x38) = uVar8 & 0xffff;
        *(iVar12 + 0x3c) = acStack_1e10[2];
        *(iStack_1ecc + 0x1e) = uStack_1e12;
        *(iStack_1ecc + 0x1d) = uStack_1dd5;
        *(iStack_1ecc + 0x1c) = cStack_1ddb;
        *(iStack_1ecc + 0x21) = uStack_1e58;
        *(iStack_1ecc + 0x26) = uStack_1e59;
        *(iStack_1ecc + 0x48) = 0xb0000000;
        *(iStack_1ecc + 0x4c) = 0;
        *(iStack_1ecc + 0x28) = 0xaf000000;
        *(iStack_1ecc + 0x23) = uStack_1e56;
        *(iStack_1ecc + 0x40) = uStack_1ab0;
        *(iStack_1ecc + 0x22) = uStack_1e57;
        *(iStack_1ecc + 0x50) = 0;
        *(iStack_1ecc + 0x52) = uStack_1a9e;
        *(iStack_1ecc + 0x53) = 0;
        iVar7 = fcn.000026fc();
        uVar8 = (**(iVar7 + 8))(0x10c);
        uVar8 = uVar8 & 0xffff;
        iVar7 = fcn.000026fc();
        uVar14 = (**(iVar7 + 0xc))(0x10b);
        fcn.000028d9(&uStack_1ee0,uVar14,uVar8);
        iVar12 = iStack_1ecc;
        iVar7 = iStack_1ef8;
        *(iVar9 + 0x30) = uStack_1ee0;
        *(iVar9 + 0x31) = uStack_1edf;
        *(iVar9 + 0x32) = uStack_1ede;
        *(iVar9 + 0x33) = uStack_1edd;
        *(iVar9 + 0x34) = uStack_1edc;
        *(iVar9 + 0x35) = uStack_1edb;
        *(iVar9 + 0x36) = uStack_1eda;
        *(iVar9 + 0x37) = uStack_1ed9;
        *(iVar9 + 0x38) = uStack_1ed8;
        *(iVar9 + 0x39) = uStack_1ed7;
        *(iVar9 + 0x3a) = uStack_1ed6;
        puStack_1f0c = auStack_1e20 + -iStack_1ed0;
        *(iVar9 + 0x3b) = uStack_1ed5;
        *(iVar9 + 0x3c) = uStack_1ed4;
        puVar10 = iStack_1ed0 + 0xa8;
        *(iVar9 + 0x3d) = uStack_1ed3;
        *(iVar9 + 0x3e) = uStack_1ed2;
        *(iVar9 + 0x3f) = uStack_1ed1;
        *(iStack_1ed0 + 0x20) = uStack_1e00;
        *(iStack_1f04 + 0x20) = *(iStack_1f04 + 0x20) ^ (uStack_1e2c ^ *(iStack_1f04 + 0x20)) & 1;
        puVar24 = iStack_1ed0 + 0x24;
        *(iStack_1ed0 + 0x1f) = uStack_1dfd;
        *(iStack_1ed0 + 0x21) = uStack_1de0;
        *(iStack_1ed0 + 0x22) = uStack_1ddf;
        *(iStack_1ed0 + 0x23) = uStack_1dde;
        *(iStack_1ed0 + 0xfe) = uStack_1a8f;
        *(iStack_1ed0 + 0xa4) = uStack_cdc;
        puStack_1f00 = auStack_1e18 + -iStack_1ed0;
        iStack_1f04 = 8;
        pcStack_1ebc = acStack_1e10 + -iStack_1ed0;
        puStack_1ee4 = auStack_d10 - iStack_1ed0;
        puStack_1ee8 = auStack_d08 + -iStack_1ed0;
        do {
            *puVar24 = puVar24[puStack_1f0c];
            puVar24[8] = puVar24[puStack_1f00];
            puVar24[0x10] = puVar24[pcStack_1ebc];
            puVar10[1] = *(puStack_1ee4 + puVar24);
            puVar1 = puVar24 + puStack_1ee8;
            puVar24 = puVar24 + 1;
            iStack_1f04 = iStack_1f04 + -1;
            *puVar10 = *puVar1;
            puVar10 = puVar10 + 4;
        } while (iStack_1f04 != 0);
        puVar24 = iStack_1ed0 + 0x3c;
        iVar9 = 4;
        do {
            *puVar24 = puVar24[puStack_1f0c];
            puVar24 = puVar24 + 1;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(iStack_1f08 + 0x3c) = *(iStack_1f08 + 0x3c) ^ (auStack_1c38[2] ^ *(iStack_1f08 + 0x3c)) & 1;
        *(iStack_1f08 + 0x60) = uStack_1c15;
        if (cStack_1dda != '\x02') {
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0x109);
            *(iStack_1f28 + 0x34) = uVar4;
            *(iStack_1f28 + 0x84) = uStack_1a71;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xa4);
            *(iStack_1f28 + 0x1c) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xa3);
            *(iStack_1f28 + 0x1d) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xa5);
            *(iStack_1f28 + 0x20) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xa7);
            *(iStack_1f28 + 0x24) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xa6);
            *(iStack_1f28 + 0x25) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xa8);
            *(iStack_1f28 + 0x28) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xa2);
            *(iStack_1f28 + 0x30) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xab);
            *(iStack_1f28 + 0x3c) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xaa);
            *(iStack_1f28 + 0x3d) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xac);
            *(iStack_1f28 + 0x40) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xae);
            *(iStack_1f28 + 0x44) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xad);
            *(iStack_1f28 + 0x45) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xaf);
            *(iStack_1f28 + 0x48) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xa9);
            *(iStack_1f28 + 0x50) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xb2);
            *(iStack_1f28 + 0x54) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xb1);
            *(iStack_1f28 + 0x55) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xb3);
            *(iStack_1f28 + 0x58) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xb5);
            *(iStack_1f28 + 0x5c) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xb4);
            *(iStack_1f28 + 0x5d) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xb6);
            *(iStack_1f28 + 0x60) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xb0);
            *(iStack_1f28 + 0x68) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xb9);
            *(iStack_1f28 + 0x6c) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xb8);
            *(iStack_1f28 + 0x6d) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xba);
            *(iStack_1f28 + 0x70) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xbc);
            *(iStack_1f28 + 0x74) = uVar4;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xbb);
            *(iStack_1f28 + 0x75) = uVar4;
            iVar9 = fcn.000026fc();
            uVar16 = (**(iVar9 + 0xc))(0xbd);
            *(iStack_1f28 + 0x78) = uVar16;
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 4))(0xb7);
            *(iStack_1f28 + 0x80) = uVar4;
        }
        if (cStack_1dda == '\0') {
            iVar9 = fcn.000026fc();
            uVar4 = (**(iVar9 + 0x18))(0xa6);
            *(iStack_1f28 + 0x25) = uVar4;
        }
        if (cStack_1ddb == '\x04') {
            *(iStack_1f28 + 0x35) = 2;
            *(iStack_1f28 + 0x36) = 0x2112;
            *(iVar12 + 0x1c) = 0x100;
        }
        else {
            if (((cStack_1ddb == '\x01') || (cStack_1ddb == '\x02')) || (cStack_1ddb == '\x03')) {
                *(iStack_1f28 + 0x35) = 3;
            }
            else {
                if (cStack_1ddb != '\0') goto code_r0x000055a1;
                *(iStack_1f28 + 0x35) = 0;
            }
            *(iStack_1f28 + 0x36) = 0x2212;
        }
code_r0x000055a1:
        *(iStack_1f28 + 0x38) = uStack_1dd9;
        *(iStack_1f28 + 0x3a) = uStack_1dd7;
        if ((acStack_1e10[1] == '\0') || (((cStack_1e04 == '\0' && (cStack_1e03 == '\0')) && (cStack_1e02 == '\0')))) {
            *(iStack_1ec8 + 0x1c) = 0x101;
            *(iStack_1ec8 + 0x24) = 0;
            *(iStack_1ec8 + 0x28) = 0;
            *(iStack_1ec8 + 0x2c) = 0;
            *(iStack_1ec8 + 0x23) = 0;
            *(iStack_1ec8 + 0x30) = 0;
        }
        else {
            *(iStack_1ec8 + 0x1c) = 0;
            *(iStack_1ec8 + 0x1d) = uStack_1e06;
            do {
                uVar26 = fcn.00006f18();
                *(uVar26 >> 0x20) = uVar26;
            } while (extraout_CL + 1U < 3);
            *(iStack_1ec8 + 0x23) = cStack_ef5 != '\0';
            fcn.000029b2();
            *(iStack_1ec8 + 0x30) = ((iStack_1eb4 != 0x11) - 1 & 0xfe100000) + 0x2100000;
            auStack_1ea0[1] = 0;
            auStack_1ea0[2] = 0;
            fcn.00002985(noname_0_00,auStack_1ea0 + 1);
            fcn.000028d9(iStack_1ec8 + 0x38,auStack_1ea0 + 1,8);
        }
        iVar12 = iStack_1ef8;
        *(iStack_1ec8 + 0x1e) = uStack_1e05;
        *(iStack_1ec8 + 0x1f) = cStack_1e04;
        *(iStack_1ec8 + 0x20) = cStack_1e03;
        *(iStack_1ec8 + 0x21) = cStack_1e02;
        *(iStack_1eb0 + 0x1c) = uStack_1e0c;
        if (cStack_1815 == '\x01') {
            *(uStack_1674 + 0x24 + iStack_1eb0) = uStack_1673;
            *(uStack_1674 + 0x2c + iStack_1eb0) = uStack_1672;
        }
        if (cStack_1814 == '\x01') {
            *(uStack_15ed + 0x24 + iStack_1eb0) = uStack_15eb;
            *(uStack_15ed + 0x2c + iStack_1eb0) = uStack_15ea;
        }
        if (cStack_1813 == '\x01') {
            *(uStack_1564 + 0x24 + iStack_1eb0) = uStack_1563;
            *(uStack_1564 + 0x2c + iStack_1eb0) = uStack_1562;
        }
        if (cStack_1812 == '\x01') {
            *(uStack_14dc + 0x24 + iStack_1eb0) = uStack_14db;
            *(uStack_14dc + 0x2c + iStack_1eb0) = uStack_14da;
        }
        if (cStack_1811 == '\x01') {
            *(uStack_1454 + 0x24 + iStack_1eb0) = uStack_1453;
            *(uStack_1454 + 0x2c + iStack_1eb0) = uStack_1452;
        }
        if (cStack_1810 == '\x01') {
            *(uStack_13cc + 0x24 + iStack_1eb0) = uStack_13cb;
            *(uStack_13cc + 0x2c + iStack_1eb0) = uStack_13ca;
        }
        *(iVar7 + 0x1e) = uStack_1d04;
        *(iVar7 + 0x40) = *(iVar7 + 0x40) ^ (uStack_1d03 ^ *(iVar7 + 0x40)) & 1;
        *(iVar7 + 0x6e) = uStack_1c9b;
        *(iVar7 + 0x73) = auStack_1e18[1];
        *(iVar7 + 0x3c) = uStack_1e16;
        *(iVar7 + 0x3e) = uStack_1e14;
        *(iVar7 + 0x40) = *(iVar7 + 0x40) ^ (uStack_1c9d << 0x13 ^ *(iVar7 + 0x40)) & 0x80000;
        uVar8 = (uStack_1c9c << 0x14 ^ *(iVar7 + 0x40)) & 0x100000 ^ *(iVar7 + 0x40);
        *(iVar7 + 0x40) = uVar8;
        uVar8 = (uStack_1a5e << 0x16 ^ uVar8) & 0x400000 ^ uVar8;
        *(iVar7 + 0x40) = uVar8;
        *(iVar7 + 0x40) = (uStack_1a5d << 0x17 ^ uVar8) & 0x1800000 ^ uVar8;
        *(iVar7 + 0x13c) = uStack_1a2e;
        *(iVar7 + 0x146) = uStack_1a23;
        *(iVar7 + 0x148) = uStack_1a21;
        *(iVar7 + 0x14a) = uStack_1a1f;
        *(iVar7 + 0x14c) = uStack_1a1d;
        *(iVar7 + 0x14e) = uStack_1a1b;
        *(iVar7 + 0x13e) = uStack_1a2c;
        *(iVar7 + 0x150) = uStack_1a19;
        *(iVar7 + 0x1f) = cStack_1cff;
        *(iVar7 + 0xf9) = uStack_1a72;
        *(iVar7 + 0xfb) = uStack_1a5f;
        *(iVar7 + 0x140) = uStack_1a2b;
        *(iVar7 + 0x141) = uStack_1a2a;
        *(iVar7 + 0x142) = uStack_1a29;
        *(iVar7 + 0x143) = uStack_1a28;
        *(iVar7 + 0x144) = uStack_1a27;
        *(iVar7 + 0x145) = uStack_1a26;
        *(iVar7 + 0x153) = uStack_1a14;
        *(iVar7 + 0x152) = uStack_1a15;
        *(iVar7 + 0x40) = *(iVar7 + 0x40) ^ (uStack_1ce7 << 0xf ^ *(iVar7 + 0x40)) & 0x8000;
        puVar24 = iVar7 + 0xa0;
        *(iVar7 + 0x40) = *(iVar7 + 0x40) ^ (uStack_1ce6 << 0x10 ^ *(iVar7 + 0x40)) & 0x30000;
        puVar11 = iVar7 + 200;
        iVar15 = -puVar24;
        iVar9 = 8;
        do {
            *puVar24 = puVar24[auStack_1ce5 + iVar15];
            puVar24 = puVar24 + 1;
            puVar11[-8] = *((auStack_1da5 - iVar7) + puVar11);
            *puVar11 = *(puVar11 + (auStack_1d85 - iVar7));
            puVar11 = puVar11 + 1;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(iStack_1ef8 + 0xfa) = uStack_1a87;
        *(iStack_1ef8 + 0x100) = uStack_1a86;
        *(iStack_1ef8 + 0x104) = uStack_1a82;
        *(iStack_1ef8 + 0x108) = uStack_1a7e;
        *(iStack_1ef8 + 0x10c) = uStack_1a7a;
        *(iStack_1ef8 + 0xfc) = uStack_1a76;
        *(iStack_1ef8 + 0x128) = uStack_1a42;
        *(iStack_1ef8 + 300) = uStack_1a3e;
        *(iStack_1ef8 + 0x130) = uStack_1a3a;
        *(iStack_1ef8 + 0x134) = uStack_1a36;
        *(iStack_1ef8 + 0x138) = uStack_1a32;
        puStack_1ec4 = NULL;
        fcn.00002985(puVar11,&puStack_1ec4);
        if (puStack_1ec4 == NULL) {
            cStack_1f22 = '\0';
        }
        else {
            cStack_1f22 = (*puStack_1ec4[1])();
        }
        iVar9 = iStack_1f08;
        iVar7 = iStack_1f14;
        if ((cStack_1cff == '\x01') && (cStack_1f22 == '\0')) {
            if (puStack_1ec4 != NULL) {
                (**puStack_1ec4)(0x3c);
            }
            *(iVar12 + 0x3a) = uStack_1e89;
            *(iVar12 + 0xf4) = uStack_1a97;
            *(iVar12 + 0xf6) = uStack_1a95;
            *(iVar12 + 0x70) = uStack_1e87;
            *(iVar12 + 0x4c) = uStack_1e86;
            *(iVar12 + 0x20) = uStack_1e84;
            *(iVar12 + 0x32) = uStack_1e83;
            *(iVar12 + 0x30) = uStack_1e82;
            *(iVar12 + 0x24) = uStack_1e80;
            *(iVar12 + 0x22) = uStack_1e7e;
            *(iVar12 + 0x34) = uStack_1e7d;
            *(iVar12 + 0x28) = uStack_1e7b;
            *(iVar12 + 0x118) = uStack_1a58;
            *(iVar12 + 0x11a) = uStack_1a56;
            *(iVar12 + 0x11c) = uStack_1a54;
            *(iVar12 + 0x2a) = uStack_1e79;
            *(iVar12 + 0x11e) = uStack_1a52;
            *(iVar12 + 0x120) = uStack_1a51;
            *(iVar12 + 0x2e) = uStack_1e78;
            *(iVar12 + 0x26) = uStack_1e77;
            *(iVar12 + 0x2c) = uStack_1e76;
            *(iVar12 + 0x122) = uStack_1a50;
            *(iVar12 + 0x126) = uStack_1a4e;
            *(iVar12 + 0x124) = uStack_1a4f;
        }
        else {
            uStack_1e75 = 0;
            *(iVar12 + 0x3a) = 0;
            *(iVar12 + 0xf4) = 0;
            *(iVar12 + 0x4c) = 0;
            *(iVar12 + 0x20) = 0;
            *(iVar12 + 0x30) = 0;
            *(iVar12 + 0x24) = 0;
            *(iVar12 + 0x34) = 0;
            *(iVar12 + 0x28) = 0;
            *(iVar12 + 0x2c) = 0;
        }
        *(iVar12 + 0x6f) = uStack_1e75;
        if ((cStack_1cff == '\0') && (cStack_1f22 == '\0')) {
            *(iVar12 + 0x3a) = uStack_1e89;
            *(iVar12 + 0xf4) = uStack_1a97;
            *(iVar12 + 0xf6) = uStack_1a95;
        }
        iVar15 = fcn.000026fc();
        uVar4 = (**(iVar15 + 4))(0x5e);
        *(iVar12 + 0xeb) = uVar4;
        *(iVar12 + 0x40) = *(iVar12 + 0x40) ^ (uStack_1c51 << 2 ^ *(iVar12 + 0x40)) & 4;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1cfd * 2 ^ *(iVar12 + 0x5c)) & 2;
        *(iVar12 + 0x77) = uStack_1cea;
        *(iVar12 + 0x78) = uStack_1ce9;
        *(iVar12 + 0x40) = *(iVar12 + 0x40) ^ (uStack_1ce8 << 0xe ^ *(iVar12 + 0x40)) & 0x4000;
        uVar8 = (uStack_1c5b << 3 ^ *(iVar12 + 0x40)) & 8 ^ *(iVar12 + 0x40);
        *(iVar12 + 0x40) = uVar8;
        uVar8 = (uStack_1cfb << 0xb ^ uVar8) & 0x800 ^ uVar8;
        *(iVar12 + 0x40) = uVar8;
        *(iVar12 + 0x40) = (uStack_1cfc << 10 ^ uVar8) & 0x400 ^ uVar8;
        iVar15 = fcn.00002570();
        if (((iVar15 == 0xb0670) || (iVar15 = fcn.00002570(), iVar15 == 0xb06f0)) ||
           (iVar15 = fcn.00002570(), iVar15 == 0xb06a0)) {
            *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1cfe ^ *(iVar12 + 0x5c)) & 1;
        }
        *(iVar12 + 0x54) = *(iVar12 + 0x54) ^ (uStack_1c8d ^ *(iVar12 + 0x54)) & 1;
        uVar8 = (uStack_1c8c * 2 ^ *(iVar12 + 0x54)) & 2 ^ *(iVar12 + 0x54);
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c8b << 2 ^ uVar8) & 4 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c8a << 3 ^ uVar8) & 8 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        *(iVar12 + 0x54) = (uStack_1c89 << 4 ^ uVar8) & 0x10 ^ uVar8;
        *(iVar12 + 0x58) = *(iVar12 + 0x58) ^ (auStack_1c38[0] ^ *(iVar12 + 0x58)) & 1;
        *(iVar12 + 0x54) = *(iVar12 + 0x54) ^ (uStack_1c88 << 5 ^ *(iVar12 + 0x54)) & 0x20;
        uVar8 = (uStack_1c87 << 6 ^ *(iVar12 + 0x54)) & 0x40 ^ *(iVar12 + 0x54);
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c86 << 7 ^ uVar8) & 0x80 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c85 << 8 ^ uVar8) & 0x100 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c84 << 9 ^ uVar8) & 0x200 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c83 << 10 ^ uVar8) & 0x400 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c82 << 0xb ^ uVar8) & 0x800 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c81 << 0xc ^ uVar8) & 0x1000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c7f << 0xe ^ uVar8) & 0x4000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c7e << 0xf ^ uVar8) & 0x8000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c7d << 0x10 ^ uVar8) & 0x10000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c7c << 0x11 ^ uVar8) & 0x20000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c7b << 0x12 ^ uVar8) & 0x40000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c7a << 0x13 ^ uVar8) & 0x80000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c78 << 0x14 ^ uVar8) & 0x100000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c77 << 0x15 ^ uVar8) & 0x200000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c79 << 0x16 ^ uVar8) & 0x400000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c76 << 0x17 ^ uVar8) & 0x800000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c75 << 0x18 ^ uVar8) & 0x1000000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c74 << 0x19 ^ uVar8) & 0x2000000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c70 << 0x1d ^ uVar8) & 0x20000000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        *(iVar12 + 0x54) = (uStack_1c73 << 0x1a ^ uVar8) & 0x4000000 ^ uVar8;
        *(iVar12 + 0x58) = *(iVar12 + 0x58) ^ (auStack_1c38[1] << 0xd ^ *(iVar12 + 0x58)) & 0x2000;
        *(iVar12 + 0x54) = *(iVar12 + 0x54) ^ (uStack_1c72 << 0x1b ^ *(iVar12 + 0x54)) & 0x8000000;
        uVar8 = (uStack_1c71 << 0x1c ^ *(iVar12 + 0x54)) & 0x10000000 ^ *(iVar12 + 0x54);
        *(iVar12 + 0x54) = uVar8;
        uVar8 = (uStack_1c6f << 0x1e ^ uVar8) & 0x40000000 ^ uVar8;
        *(iVar12 + 0x54) = uVar8;
        uVar8 = uStack_1c6e << 0x1f | uVar8 & 0x7fffffff;
        *(iVar12 + 0x54) = uVar8;
        *(iVar12 + 0x54) = (uStack_1c80 << 0xd ^ uVar8) & 0x2000 ^ uVar8;
        *(iVar12 + 0x58) = *(iVar12 + 0x58) ^ (uStack_1a89 << 0xf ^ *(iVar12 + 0x58)) & 0x8000;
        uVar8 = (uStack_1a16 << 0x13 ^ *(iVar12 + 0x58)) & 0x80000 ^ *(iVar12 + 0x58);
        *(iVar12 + 0x58) = uVar8;
        uVar8 = (uStack_1a13 << 0x14 ^ uVar8) & 0x100000 ^ uVar8;
        *(iVar12 + 0x58) = uVar8;
        uVar8 = (uStack_1a59 << 0x10 ^ uVar8) & 0x10000 ^ uVar8;
        *(iVar12 + 0x58) = uVar8;
        uVar8 = (uStack_1a25 << 0x11 ^ uVar8) & 0x20000 ^ uVar8;
        *(iVar12 + 0x58) = uVar8;
        *(iVar12 + 0x58) = (uStack_1a17 << 0x12 ^ uVar8) & 0x40000 ^ uVar8;
        *(iVar12 + 0xef) = uStack_1a9c;
        *(iVar12 + 0xf0) = uStack_1a9b;
        *(iVar12 + 0x114) = uStack_1a65;
        *(iVar12 + 0x40) = *(iVar12 + 0x40) ^ (uStack_1c50 * 2 ^ *(iVar12 + 0x40)) & 2;
        *(iVar12 + 0x40) = *(iVar12 + 0x40) ^ (uStack_1cee << 0xc ^ *(iVar12 + 0x40)) & 0x1000;
        *(iVar12 + 0x6e) = uStack_1c9b;
        *(iVar12 + 0x83) = uStack_1cef;
        *(iVar12 + 0x40) = *(iVar12 + 0x40) ^ (uStack_1c4f << 9 ^ *(iVar12 + 0x40)) & 0x200;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c47 << 0x13 ^ *(iVar12 + 0x5c)) & 0x80000;
        uVar8 = (uStack_1c46 << 0x14 ^ *(iVar12 + 0x5c)) & 0x100000 ^ *(iVar12 + 0x5c);
        *(iVar12 + 0x5c) = uVar8;
        *(iVar12 + 0x5c) = (uStack_1c45 << 0x15 ^ uVar8) & 0x200000 ^ uVar8;
        *(iVar12 + 0x40) = *(iVar12 + 0x40) ^ (uStack_1cfa << 0x12 ^ *(iVar12 + 0x40)) & 0x40000;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1cf9 << 6 ^ *(iVar12 + 0x5c)) & 0x40;
        *(iVar12 + 0x66) = uStack_1cf8;
        *(iVar12 + 0x4e) = uStack_1cf6;
        *(iVar12 + 0xf8) = uStack_1a88;
        *(iVar12 + 0xe9) = uStack_1c4d;
        *(iVar12 + 0xea) = uStack_1c4c;
        *(iVar12 + 0xf2) = uStack_1a99;
        *(iVar12 + 0xf3) = uStack_1a98;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c4e << 0x16 ^ *(iVar12 + 0x5c)) & 0xc00000;
        *(iVar12 + 0x111) = uStack_1a60;
        *(iVar12 + 0xee) = uStack_1a9d;
        *(iVar12 + 0x110) = uStack_1a6a;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c6d << 7 ^ *(iVar12 + 0x5c)) & 0x80;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c6c << 8 ^ *(iVar12 + 0x5c)) & 0x100;
        *(iVar12 + 0x72) = uStack_1c6b;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c69 << 9 ^ *(iVar12 + 0x5c)) & 0x200;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c66 << 0xb ^ *(iVar12 + 0x5c)) & 0x800;
        *(iVar12 + 0x6b) = uStack_1c65;
        *(iVar12 + 0x5c) = *(iVar12 + 0x5c) ^ (uStack_1c64 << 10 ^ *(iVar12 + 0x5c)) & 0x400;
        *(iVar12 + 0xed) = uStack_1c61;
        *(iVar12 + 0xec) = uStack_1c62;
        *(iVar12 + 0x6c) = uStack_1c63;
        *(iVar12 + 0x76) = uStack_1cf0;
        uVar14 = 600000000;
        uVar8 = iStack_1e48 * 10000;
        if (uVar8 < 0x23c34601) {
            uVar14 = 100000000;
            if (uVar8 < 100000000) goto code_r0x00006356;
        }
        else {
code_r0x00006356:
            uVar8 = uVar14;
        }
        if (uVar8 % 1000000 != 0) {
            uVar8 = uVar8 + (1000000 - uVar8 % 1000000);
        }
        *(iVar12 + 0x50) = uVar8;
        piVar22 = iVar12 + 0x84;
        piVar19 = aiStack_9c9;
        iVar15 = 4;
        do {
            iVar2 = *piVar19;
            piVar19 = piVar19 + 1;
            *piVar22 = iVar2 * 10000;
            piVar22 = piVar22 + 1;
            iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        *(iVar12 + 0x68) = uStack_1d01;
        *(iVar12 + 0x151) = uStack_1a18;
        *(iVar12 + 0x154) = uStack_1a12;
        iVar15 = fcn.000026fc();
        uStack_1a2c = (**(iVar15 + 4))(0x10e);
        iVar15 = fcn.000026fc();
        uStack_1a19 = (**(iVar15 + 4))(0x10f);
        *(iVar12 + 0x13e) = uStack_1a2c;
        *(iVar12 + 0x150) = uStack_1a19;
        *(iVar7 + 0x105) = uStack_1ceb;
        if ((iStack_1f18 != 0x12) && (iStack_1f18 != 0x11)) {
            *(iVar7 + 0x100) = *(iVar7 + 0x100) ^ (uStack_1f21 ^ *(iVar7 + 0x100)) & 1;
        }
        switch(uStack_1d02) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        default:
            *(iStack_1ec0 + 0x34) = 0x400;
            *(iStack_1eac + 0x1c) = uStack_1e09;
            *(iStack_1eac + 0x1d) = uStack_1e08;
            *(iStack_1eac + 0x1e) = uStack_1e07;
        }
    }
    uVar8 = 0x2000000;
    if (iStack_1f18 != 0x12) {
        uVar8 = auStack_1ea0[3];
    }
    uStack_1ef0 = 0x80;
    iVar12 = (**puStack_1f1c)(puStack_1f1c,0xffd3a034,0xffd39ac4,0,&uStack_1ef0,auStack_190c);
    fcn.00002778(noname_0_01,auStack_1ea0,0);
    if (((auStack_1ea0[0] & 0x2000000) != 0) && (uStack_aba < 0x10)) {
        uVar26 = rdmsr(0x35);
        iStack_1ef4 = (1 << (uStack_aba + 0xc & 0x1f)) * (uVar26 & 0xffff) * 2;
    }
    if (iVar12 < 0) {
        if (iStack_1f18 != 0x20) {
            uStack_1ef0 = 0x30;
            uVar8 = iStack_1ef4 + 0x9000000 + uVar8;
            fcn.000028d9(auStack_190c,0xffd39f24,0x30);
            goto code_r0x0000658e;
        }
    }
    else {
        uVar8 = uVar8 + 0x9000000 + iStack_1ef4;
code_r0x0000658e:
        if ((iStack_1f18 != 0x12) && (iStack_1f18 != 0x20)) goto code_r0x000065a4;
    }
    uVar8 = iStack_1ef4 + 0xaa00000;
code_r0x000065a4:
    iVar12 = 0;
    *(iVar7 + 0xf8) = uVar8;
    uVar20 = 0;
    *(iVar7 + 0xfc) = 0;
    if (uStack_1ef0 >> 3 != 0) {
        uVar14 = 0;
        do {
            bVar25 = CARRY4(uVar8,aiStack_1908[uVar14 * 2] * 0x1000);
            uVar8 = uVar8 + aiStack_1908[uVar14 * 2] * 0x1000;
            iVar12 = iVar12 + bVar25;
            uVar20 = uVar20 + 1;
            uVar14 = uVar20;
        } while (uVar14 < uStack_1ef0 >> 3);
    }
    *(iVar7 + 0xf8) = uVar8;
    *(iVar7 + 0xfc) = iVar12;
    *(iStack_1ea8 + 0x1c) = *(iStack_1ea8 + 0x1c) ^ (uStack_a03 ^ *(iStack_1ea8 + 0x1c)) & 1;
    if (((*(iStack_1ea8 + 0x1c) & 1) == 0) || (cStack_1f22 != '\0')) {
        *(iStack_1ea8 + 0x1c) = *(iStack_1ea8 + 0x1c) & 0xfffffffe;
        *(iStack_1ea8 + 0x21) = 0;
        *(iStack_1ea8 + 0x1c) = *(iStack_1ea8 + 0x1c) & 0xffbfffff;
        *(iStack_1ea8 + 0x32) = 0;
        *(iStack_1ea8 + 0x30) = 0;
        *(iStack_1ea8 + 0x36) = 0;
        *(iStack_1ea8 + 0x1c) = *(iStack_1ea8 + 0x1c) & 0xff7fffff;
    }
    else {
        if (cStack_1c2b == '\x01') {
            uVar5 = ~uStack_1c2d + 1;
        }
        else {
            uVar5 = uStack_1c2d;
        }
        *(iStack_1ea8 + 0x36) = uVar5;
        *(iStack_1ea8 + 0x21) = uStack_1c2a;
        *(iStack_1ea8 + 0x1c) = *(iStack_1ea8 + 0x1c) ^ (uStack_1c29 << 0x16 ^ *(iStack_1ea8 + 0x1c)) & 0x400000;
        if ((*(iStack_1ea8 + 0x1c) & 0x400000) == 0) {
            uVar6 = 0;
        }
        else {
            uVar6 = CONCAT11(uStack_1c24,uStack_1c25);
            uStack_1c23 = 0;
        }
        *(iStack_1ea8 + 0x32) = uVar6;
        *(iStack_1ea8 + 0x34) = uStack_1c23;
        if (cStack_1c26 == '\x01') {
            uStack_1c28 = ~uStack_1c28 + 1;
        }
        *(iStack_1ea8 + 0x30) = uStack_1c28;
        *(iStack_1ea8 + 0x1c) = *(iStack_1ea8 + 0x1c) ^ (uStack_1c18 << 0x17 ^ *(iStack_1ea8 + 0x1c)) & 0x800000;
    }
    *(iStack_1ea4 + 0x1c) = *(iStack_1ea4 + 0x1c) ^ (uStack_1dd2 ^ *(iStack_1ea4 + 0x1c)) & 1;
    uVar8 = (uStack_1dd1 * 2 ^ *(iStack_1ea4 + 0x1c)) & 2 ^ *(iStack_1ea4 + 0x1c);
    *(iStack_1ea4 + 0x1c) = uVar8;
    uVar8 = (uStack_1dd0 << 2 ^ uVar8) & 4 ^ uVar8;
    *(iStack_1ea4 + 0x1c) = uVar8;
    uVar8 = (uStack_1dcf << 3 ^ uVar8) & 8 ^ uVar8;
    *(iStack_1ea4 + 0x1c) = uVar8;
    uVar8 = (uStack_1dce << 8 ^ uVar8) & 0x100 ^ uVar8;
    *(iStack_1ea4 + 0x1c) = uVar8;
    uVar8 = (uStack_1dcd << 9 ^ uVar8) & 0x200 ^ uVar8;
    *(iStack_1ea4 + 0x1c) = uVar8;
    uVar8 = (uStack_1dcc << 10 ^ uVar8) & 0x400 ^ uVar8;
    *(iStack_1ea4 + 0x1c) = uVar8;
    *(iStack_1ea4 + 0x1c) = (uStack_1dcb << 0xb ^ uVar8) & 0x800 ^ uVar8;
    if (cStack_1dd3 != '\0') {
        fcn.000023f2(0x60,0);
        fcn.00002429(0x60,0);
        iVar7 = fcn.00002718();
        (**(iVar7 + 0x28))(0xffd39e44,0x200001,0x20000000);
    }
    uVar8 = uStack_1ef0;
    uVar14 = fcn.00002878();
    if (uVar14 != 0) {
        fcn.000028d9(uVar14,auStack_190c,uVar8);
    }
    *(iVar9 + 0x68) = uStack_1a61;
    return 0;
}


/* fcn.00003ba3 @ 0x3ba3 */

uint __fastcall fcn.00003ba3(uint param_1)

{
    ulong uVar1;
    char cVar2;
    ushort uVar3;
    int iVar4;
    uint32_t uVar5;
    uint16_t *puVar6;
    uint16_t uVar7;
    uint8_t uVar8;
    char *pcVar9;
    int iVar10;
    uint16_t *puVar11;
    int iVar12;
    int *arg_8h;
    int iStack_10ac;
    int iStack_10a8;
    int aiStack_10a4 [3];
    uint uStack_1098;
    uint *puStack_1094;
    int iStack_1090;
    int iStack_108c;
    int iStack_1088;
    int iStack_1084;
    uint uStack_1080;
    uchar uStack_1078;
    uint8_t uStack_1077;
    char cStack_1075;
    uint8_t uStack_1073;
    uint8_t uStack_1072;
    uint8_t uStack_1071;
    uint8_t uStack_1070;
    uint8_t uStack_1065;
    uchar uStack_1034;
    uint32_t uStack_101d;
    uint8_t uStack_fbf;
    uint16_t uStack_fbb;
    uint8_t uStack_fb7;
    uint8_t uStack_f6a;
    uint8_t uStack_f68;
    uint8_t uStack_f67;
    uint8_t uStack_f66;
    uint8_t uStack_f64;
    char cStack_f54;
    uint8_t uStack_f52;
    uint8_t uStack_e9f;
    uint8_t uStack_e9e;
    uchar uStack_e9d;
    uchar uStack_e9c;
    uint8_t uStack_e9b;
    ushort uStack_e9a;
    uint16_t uStack_e98;
    char cStack_e96;
    uchar uStack_e95;
    uchar uStack_e94;
    uint8_t uStack_e93;
    uchar uStack_e91;
    uint8_t uStack_e90;
    uint8_t uStack_e8f;
    ushort uStack_e8e;
    uint16_t uStack_e8c;
    char cStack_e8a;
    uchar uStack_e89;
    uchar uStack_e88;
    uint8_t uStack_e86;
    uint8_t uStack_e85;
    uint8_t uStack_e84;
    uint8_t uStack_e83;
    uchar uStack_e82;
    uint8_t uStack_e81;
    uchar uStack_e80;
    uint8_t uStack_e6b;
    uchar uStack_e53;
    uint8_t uStack_e4f;
    uint8_t uStack_e49;
    ushort uStack_e48;
    uint8_t uStack_e46;
    uchar uStack_e45;
    uint16_t auStack_e44 [15];
    char acStack_e26 [15];
    uint8_t uStack_e17;
    uint16_t auStack_e16 [8];
    char acStack_e06 [12];
    uint16_t auStack_dfa [15];
    char acStack_ddc [19];
    char cStack_dc9;
    ushort uStack_dc8;
    uint16_t uStack_dc6;
    char cStack_dc4;
    uchar uStack_dc3;
    uchar uStack_dc2;
    uchar auStack_dc1 [4];
    uint8_t uStack_dbd;
    uchar auStack_dbc [34];
    uint8_t uStack_d9a;
    ushort uStack_d99;
    ushort uStack_d97;
    uint8_t uStack_d95;
    uint8_t uStack_d94;
    uint uStack_d81;
    uint8_t uStack_d64;
    uint16_t auStack_d63 [4];
    char acStack_d5b [23];
    uint8_t uStack_d44;
    uint8_t uStack_d43;
    uint8_t uStack_d36;
    uint8_t uStack_d34;
    uint8_t uStack_d32;
    ushort uStack_d31;
    uint8_t uStack_d2f;
    ushort uStack_d2e;
    uchar uStack_d2a;
    uchar uStack_d29;
    uchar uStack_d28;
    uchar uStack_d27;
    uint8_t uStack_d26;
    uchar uStack_d25;
    uint8_t auStack_d20 [32];
    uint8_t uStack_d00;
    uint8_t uStack_cf7;
    uchar auStack_cb0 [2136];
    uint8_t uStack_458;
    
    iStack_1088 = 4;
    iStack_1090 = 0;
    iVar12 = 0;
    uStack_1098 = 0;
    aiStack_10a4[0] = 0;
    iStack_10ac = 0;
    iStack_10a8 = 0;
    iStack_1084 = 0;
    uStack_1080 = 0;
    fcn.00002985(param_1,&uStack_1098);
    fcn.00002686(aiStack_10a4);
    fcn.00002686(&iStack_1090);
    fcn.00002686(&iStack_10ac);
    arg_8h = &iStack_10a8;
    fcn.00002686(arg_8h);
    fcn.00002985(arg_8h,&puStack_1094);
    aiStack_10a4[1] = 0x3c1;
    (**puStack_1094)(puStack_1094,0xffd39f9c,0xffd39bc4,0,aiStack_10a4 + 1,&uStack_1078);
    aiStack_10a4[1] = 0xca9;
    (**puStack_1094)(puStack_1094,0xffd39f54,0xffd39c54,0,aiStack_10a4 + 1,auStack_cb0);
    fcn.000029b2();
    iVar10 = aiStack_10a4[0];
    *(aiStack_10a4[0] + 0x24) = *(aiStack_10a4[0] + 0x24) ^ (uStack_f64 << 5 ^ *(aiStack_10a4[0] + 0x24)) & 0x20;
    *(aiStack_10a4[0] + 0x24) = *(aiStack_10a4[0] + 0x24) ^ (uStack_fb7 << 3 ^ *(aiStack_10a4[0] + 0x24)) & 8;
    *(iStack_1090 + 0x24) = uStack_fbb << 0x14;
    aiStack_10a4[2] = fcn.00002828();
    if (aiStack_10a4[2] == 0) {
        iVar4 = fcn.000029d7(aiStack_10a4 + 2);
        if (-1 < iVar4) {
            *(aiStack_10a4[2] + 8) = *0xffd39c04;
            *(aiStack_10a4[2] + 0xc) = *0xffd39c08;
            *(aiStack_10a4[2] + 0x10) = *0xffd39c0c;
            *(aiStack_10a4[2] + 0x14) = *0xffd39c10;
            iVar12 = iStack_1084;
            goto code_r0x00003d1a;
        }
    }
    else {
code_r0x00003d1a:
        *(aiStack_10a4[2] + 0x18) = (*0xfe001020 >> 8) >> 6 & 1;
    }
    if ((*0xfe001020 >> 0xe & 1) != 0) {
        *0xfe001020 = *0xfe001020 & 0xfffffdff | 0x4000;
    }
    if ((*0xfe001020 >> 0x10 & 1) != 0) {
        *0xfe001020 = *0xfe001020 & 0xfffbffff | 0x10000;
    }
    if (cStack_f54 == '\x01') {
        *(iVar10 + 0x24) = *(iVar10 + 0x24) | 0x10;
    }
    else {
        *(iVar10 + 0x24) = *(iVar10 + 0x24) & 0xffffffef;
    }
    if ((iStack_108c == 0x12) || (iStack_108c == 0x20)) {
        *(iVar10 + 0x24) = *(iVar10 + 0x24) | 2;
    }
    else {
        *(iVar10 + 0x24) = *(iVar10 + 0x24) ^ (uStack_f68 * 2 ^ *(iVar10 + 0x24)) & 2;
    }
    fcn.000073c5();
    *(iVar10 + 0x24) = *(iVar10 + 0x24) & 0xfffffffe;
    iVar4 = fcn.0000739b();
    if ((iVar4 == 0) && (iStack_1088 == 0)) {
        if ((*(iVar10 + 0x24) & 1) != 0) {
            fcn.0000386f();
        }
        iVar12 = fcn.00002828();
        if (iVar12 != 0) {
            uVar7 = *(aiStack_10a4[0] + 0x20);
            if ((*(iVar10 + 0x24) >> 1 & 1) == 0) {
                cVar2 = uStack_1080;
            }
            else {
                if (((uVar7 & 0x3ff) == 0) || ((uVar7 & 0x3ff) < 0x200)) {
                    uVar7 = (uVar7 >> 10) + 1;
                }
                else {
                    uVar7 = (uVar7 >> 10) + 2;
                }
                cVar2 = uVar7;
                if ((uVar7 & 1) != 0) {
                    cVar2 = cVar2 + '\x01';
                }
            }
            *(iVar12 + 0x318) = cVar2;
        }
    }
    fcn.00002614();
    iVar10 = iStack_10ac;
    if (uStack_1072 == 0xff) {
        uStack_1072 = 0;
    }
    if (uStack_e49 == 0xff) {
        uStack_e49 = 0;
    }
    if ((uStack_1072 == 0) && (uStack_e49 == 0)) {
        uStack_1072 = 0;
        uStack_e49 = 0;
    }
    *(iStack_10ac + 0x1c) = *(iStack_10ac + 0x1c) ^ (uStack_1073 ^ *(iStack_10ac + 0x1c)) & 1;
    uVar5 = (uStack_1065 * 2 ^ *(iStack_10ac + 0x1c)) & 6 ^ *(iStack_10ac + 0x1c);
    *(iStack_10ac + 0x1c) = uVar5;
    uVar5 = (uStack_1072 << 0x10 ^ uVar5) & 0xf0000 ^ uVar5;
    *(iStack_10ac + 0x1c) = uVar5;
    uVar5 = (uStack_e49 << 0x16 ^ uVar5) & 0xfc00000 ^ uVar5;
    *(iStack_10ac + 0x1c) = uVar5;
    if (uStack_f52 != 3) {
        *(iStack_10ac + 0x1c) = (uStack_f52 << 9 ^ uVar5) & 0x600 ^ uVar5;
    }
    *(iStack_10ac + 0x1c) = *(iStack_10ac + 0x1c) ^ (uStack_1070 << 6 ^ *(iStack_10ac + 0x1c)) & 0x40;
    uVar5 = (uStack_1071 << 7 ^ *(iStack_10ac + 0x1c)) & 0x80 ^ *(iStack_10ac + 0x1c);
    *(iStack_10ac + 0x1c) = uVar5;
    uVar5 = (uStack_fbf << 8 ^ uVar5) & 0x100 ^ uVar5;
    *(iStack_10ac + 0x1c) = uVar5;
    uVar5 = (uStack_e4f << 0xc ^ uVar5) & 0x1000 ^ uVar5;
    *(iStack_10ac + 0x1c) = uVar5;
    uVar5 = (uStack_458 << 0xb ^ uVar5) & 0x800 ^ uVar5;
    *(iStack_10ac + 0x1c) = uVar5;
    uVar5 = (uStack_d64 << 0x1c ^ uVar5) & 0x30000000 ^ uVar5;
    *(iStack_10ac + 0x1c) = uVar5;
    *(iStack_10ac + 0x1c) = (uStack_f67 << 0xd ^ uVar5) & 0x6000 ^ uVar5;
    fcn.000036f5(uVar5,aiStack_10a4[0],iStack_10ac);
    iVar4 = iStack_10a8;
    if ((iVar12 != 0) && (*(*(iVar12 + 0x308) + 0x8c) < 0)) {
        *(iVar10 + 0x1c) = *(iVar10 + 0x1c) & 0xffffbfff | 0x2000;
    }
    *(iVar10 + 0x1c) = *(iVar10 + 0x1c) ^ (uStack_f66 << 0xf ^ *(iVar10 + 0x1c)) & 0x8000;
    *(iVar10 + 0x20) = (cStack_1075 == '\0') - 1U & uStack_1077;
    *(iVar10 + 0x29) = uStack_1034;
    *(iVar10 + 0x2c) = uStack_101d / 0x7d;
    *(iStack_10a8 + 0x1c) = *(iStack_10a8 + 0x1c) ^ (uStack_e9f ^ *(iStack_10a8 + 0x1c)) & 1;
    *(iStack_10a8 + 0x1c) = *(iStack_10a8 + 0x1c) ^ (uStack_f6a * 2 ^ *(iStack_10a8 + 0x1c)) & 2;
    if (uStack_e9f == 0) goto code_r0x000045d7;
    iVar12 = 0;
    uVar5 = 0;
    iVar10 = 0x18;
    do {
        uVar5 = uVar5 | auStack_d20[iVar12] << (iVar12 & 0x1f);
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *(iStack_10a8 + 0xe8) = uVar5;
    *(iStack_10a8 + 0x1c) = *(iStack_10a8 + 0x1c) ^ (uStack_e9b << 2 ^ *(iStack_10a8 + 0x1c)) & 4;
    if ((*(iStack_10a8 + 0x1c) & 4) == 0) {
        *(iStack_10a8 + 0x24) = 0;
        uVar3 = CONCAT11(uStack_e94,uStack_e95);
    }
    else {
        *(iStack_10a8 + 0x24) = uStack_e9a;
        uVar3 = 0;
    }
    *(iStack_10a8 + 0x26) = uVar3;
    iStack_10ac = 0xf;
    *(iStack_10a8 + 0x1c) = *(iStack_10a8 + 0x1c) ^ (uStack_e46 << 0x1a ^ *(iStack_10a8 + 0x1c)) & 0x4000000;
    *(iStack_10a8 + 0x77) = uStack_e45;
    *(iStack_10a8 + 0x1c) = *(iStack_10a8 + 0x1c) ^ (uStack_e17 << 0x1b ^ *(iStack_10a8 + 0x1c)) & 0x8000000;
    if (uStack_e46 == 0) {
        if (uStack_e17 == 0) {
            if (cStack_e96 == '\x01') {
                uStack_e98 = ~uStack_e98 + 1;
            }
            *(iStack_10a8 + 0x28) = uStack_e98;
        }
        else if (uStack_e17 == 1) {
            uVar8 = 0;
            if (uStack_1072 != 0) {
                do {
                    uVar5 = uVar8;
                    uVar7 = auStack_e16[uVar5];
                    if (acStack_e06[uVar5] == '\x01') {
                        uVar7 = ~uVar7 + 1;
                    }
                    uVar8 = uVar8 + 1;
                    *(iStack_10a8 + 0x88 + uVar5 * 2) = uVar7;
                } while (uVar8 < uStack_1072);
            }
            uVar5 = 0;
            if ((uStack_e49 & 0xfc) != 0) {
                do {
                    uVar7 = auStack_d63[uVar5];
                    if (acStack_d5b[uVar5] == '\x01') {
                        uVar7 = ~uVar7 + 1;
                    }
                    *(iStack_10a8 + 0xf4 + uVar5 * 2) = uVar7;
                    uVar8 = uVar5 + 1;
                    uVar5 = uVar8;
                } while (uVar8 < uStack_e49 >> 2);
            }
        }
    }
    else if (uStack_e46 == 1) {
        pcVar9 = acStack_e26;
        iStack_10a8 = 0xf;
        puVar6 = auStack_e44;
        puVar11 = iVar4 + 0x48;
        do {
            uVar7 = *puVar6;
            if (*pcVar9 == '\x01') {
                uVar7 = ~uVar7 + 1;
            }
            *puVar11 = uVar7;
            pcVar9 = pcVar9 + 1;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
            iStack_10a8 = iStack_10a8 + -1;
        } while (iStack_10a8 != 0);
    }
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_e8f << 0x15 ^ *(iVar4 + 0x1c)) & 0x200000;
    if ((*(iVar4 + 0x1c) & 0x200000) == 0) {
        *(iVar4 + 0x2a) = 0;
        uVar3 = CONCAT11(uStack_e88,uStack_e89);
    }
    else {
        *(iVar4 + 0x2a) = uStack_e8e;
        uVar3 = 0;
    }
    *(iVar4 + 0x2c) = uVar3;
    if (cStack_e8a == '\x01') {
        uVar7 = ~uStack_e8c + 1;
    }
    else {
        uVar7 = uStack_e8c;
    }
    *(iVar4 + 0x2e) = uVar7;
    *(iVar4 + 0xb0) = acStack_e06[10];
    *(iVar4 + 0xb1) = acStack_e06[0xb];
    if (acStack_e06[10] == '\0') {
        if (cStack_e8a == '\x01') {
            uStack_e8c = ~uStack_e8c + 1;
        }
        *(iVar4 + 0x2e) = uStack_e8c;
    }
    else if (acStack_e06[10] == '\x01') {
        pcVar9 = acStack_ddc;
        puVar6 = auStack_dfa;
        puVar11 = iVar4 + 0xb4;
        do {
            uVar7 = *puVar6;
            if (*pcVar9 == '\x01') {
                uVar7 = ~uVar7 + 1;
            }
            *puVar11 = uVar7;
            pcVar9 = pcVar9 + 1;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
            iStack_10ac = iStack_10ac + -1;
        } while (iStack_10ac != 0);
    }
    *(iVar4 + 0xa4) = cStack_dc9;
    if (cStack_dc9 == '\0') {
        *(iVar4 + 0xa6) = 0;
        uVar3 = CONCAT11(uStack_dc2,uStack_dc3);
code_r0x000042d2:
        *(iVar4 + 0xa8) = uVar3;
    }
    else {
        if (cStack_dc9 == '\x01') {
            *(iVar4 + 0xa6) = uStack_dc8;
            uVar3 = 0;
            goto code_r0x000042d2;
        }
        *(iVar4 + 0xa6) = 0;
    }
    if (cStack_dc4 == '\x01') {
        uStack_dc6 = ~uStack_dc6 + 1;
    }
    *(iVar4 + 0xaa) = uStack_dc6;
    *(iVar4 + 0x44) = uStack_e48;
    *(iVar4 + 0x20) = uStack_e9d;
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_e86 << 3 ^ *(iVar4 + 0x1c)) & 0x1f8;
    *(iVar4 + 0x38) = *(iVar4 + 0x38) ^ (uStack_e85 ^ *(iVar4 + 0x38)) & 0x3f;
    uVar5 = (uStack_e84 << 6 ^ *(iVar4 + 0x38)) & 0xfc0 ^ *(iVar4 + 0x38);
    *(iVar4 + 0x38) = uVar5;
    *(iVar4 + 0x38) = (uStack_e83 << 0xc ^ uVar5) & 0x3f000 ^ uVar5;
    *(iVar4 + 0xe3) = uStack_e82;
    *(iVar4 + 0x38) = *(iVar4 + 0x38) ^ (uStack_e81 << 0x12 ^ *(iVar4 + 0x38)) & 0xfc0000;
    *(iVar4 + 0x22) = uStack_e91;
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_e90 << 0x14 ^ *(iVar4 + 0x1c)) & 0x100000;
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_e93 << 9 ^ *(iVar4 + 0x1c)) & 0x3e00;
    *(iVar4 + 0x3c) = uStack_e80;
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_e6b << 0x13 ^ *(iVar4 + 0x1c)) & 0x80000;
    *(iVar4 + 0x46) = uStack_e53;
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_d95 ^ *(iVar4 + 0x40)) & 1;
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_d94 * 2 ^ *(iVar4 + 0x40)) & 2;
    *(iVar4 + 0x1c) = uStack_e9e << 0x1f | *(iVar4 + 0x1c) & 0x7fffffff;
    *(iVar4 + 0xf0) = uStack_e9c;
    *(iVar4 + 0x38) = *(iVar4 + 0x38) ^ (uStack_d36 << 0x1e ^ *(iVar4 + 0x38)) & 0x40000000;
    *(iVar4 + 0x38) = uStack_d34 << 0x1f | *(iVar4 + 0x38) & 0x7fffffff;
    *(iVar4 + 0x104) = uStack_d2a;
    *(iVar4 + 0x105) = uStack_d29;
    *(iVar4 + 0x106) = uStack_d28;
    *(iVar4 + 0x107) = uStack_d27;
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_d26 << 4 ^ *(iVar4 + 0x40)) & 0x10;
    *(iVar4 + 0xf2) = uStack_d25;
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_d00 << 5 ^ *(iVar4 + 0x40)) & 0x20;
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_cf7 << 6 ^ *(iVar4 + 0x40)) & 0xc0;
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_dbd << 0x1c ^ *(iVar4 + 0x1c)) & 0x10000000;
    if ((*(iVar4 + 0x1c) & 0x10000000) != 0) {
        uVar5 = 0;
        if (uStack_1072 != 0) {
            do {
                uVar8 = uVar5 + 1;
                *(uVar5 + 0x98 + iVar4) = auStack_dbc[uVar5];
                uVar5 = uVar8;
            } while (uVar8 < uStack_1072);
        }
        uVar5 = 0;
        if ((uStack_e49 & 0xfc) != 0) {
            do {
                uVar8 = uVar5 + 1;
                *(uVar5 + 0xa0 + iVar4) = auStack_dc1[uVar5];
                uVar5 = uVar8;
            } while (uVar8 < uStack_e49 >> 2);
        }
    }
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (uStack_d9a << 0x1e ^ *(iVar4 + 0x1c)) & 0x40000000;
    if ((*(iVar4 + 0x1c) & 0x40000000) == 0) {
        *(iVar4 + 0xac) = 0;
    }
    else {
        *(iVar4 + 0xac) = uStack_d99;
        uStack_d97 = 0;
    }
    *(iVar4 + 0xae) = uStack_d97;
    *(iVar4 + 0xe4) = uStack_d81;
    *(iVar4 + 0x38) = *(iVar4 + 0x38) ^ (uStack_d44 << 0x18 ^ *(iVar4 + 0x38)) & 0x1000000;
    *(iVar4 + 0x38) = *(iVar4 + 0x38) ^ (uStack_d43 << 0x19 ^ *(iVar4 + 0x38)) & 0x2000000;
code_r0x000045d7:
    uVar1 = rdmsr(0x35);
    iVar10 = fcn.00002718();
    (**(iVar10 + 0x28))(0xffd39ad4,2,uVar1 & 0xffff);
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_d32 << 2 ^ *(iVar4 + 0x40)) & 4;
    *(iVar4 + 0x100) = uStack_d31;
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ (uStack_d2f << 3 ^ *(iVar4 + 0x40)) & 8;
    *(iVar4 + 0x102) = uStack_d2e;
    return 0;
}


/* fcn.00002dc1 @ 0x2dc1 */

int __fastcall fcn.00002dc1(uint param_1)

{
    int iVar1;
    int32_t *arg_ch;
    int32_t var_820h;
    int8_t var_e5h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    arg_ch = &var_4h;
    iVar1 = fcn.00002985(param_1,arg_ch);
    if (-1 < iVar1) {
        fcn.00002985(arg_ch,&var_ch);
        var_8h = 0x80d;
        iVar1 = (**var_ch)(var_ch,0xffd39f88,0xffd39d74,0,&var_8h,&var_820h);
        if (-1 < iVar1) {
            iVar1 = fcn.00002686(&var_10h);
            if (-1 < iVar1) {
                *(var_10h + 0x1c) = *(var_10h + 0x1c) ^ (var_e5h << 3 ^ *(var_10h + 0x1c)) & 8;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00002cc3 @ 0x2cc3 */

int __fastcall fcn.00002cc3(uint param_1)

{
    int iVar1;
    uint noname_0;
    int32_t var_590h;
    int8_t var_559h;
    int8_t var_505h;
    int8_t var_503h;
    int8_t var_502h;
    int8_t var_3f1h;
    int8_t var_36eh;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    var_ch = 0;
    fcn.00002985(param_1,&var_4h);
    fcn.00002686(&var_8h);
    fcn.00002686(&var_ch);
    fcn.00002686(&var_18h);
    fcn.00002985(noname_0,&var_14h);
    var_10h = 0x578;
    iVar1 = (**var_14h)(var_14h,0xffd39f64,0xffd39dc4,0,&var_10h,&var_590h);
    if (-1 < iVar1) {
        *(var_18h + 0x1c) = var_505h;
        *(var_18h + 0x1d) = var_503h;
        *(var_18h + 0x1e) = var_502h;
        *(var_8h + 0x20) = var_559h;
        if ((*(var_8h + 0x30) != '\x01') && (*(var_8h + 0x31) != '\x01')) {
            *(var_8h + 0x20) = 0;
        }
        *(var_ch + 0x41) = var_36eh;
        *(var_ch + 0x3c) = *(var_ch + 0x3c) ^ (var_590h._1_1_ * 2 ^ *(var_ch + 0x3c)) & 2;
        *(var_ch + 0x42) = var_3f1h;
    }
    return iVar1;
}


/* fcn.00002c48 @ 0x2c48 */

uint __fastcall fcn.00002c48(uint param_1)

{
    int iVar1;
    int32_t var_3d0h;
    uint32_t var_314h;
    int8_t var_2b0h;
    int8_t var_ch;
    unkbyte3 Stack_f;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00002985(param_1,&var_8h);
    var_4h = 0x3c1;
    (**var_8h)(var_8h,0xffd39f9c,0xffd39bc4,0,&var_4h,&var_3d0h);
    if ((var_314h == '\0') && (var_2b0h == 2)) {
        var_2b0h = 1;
    }
    _var_ch = CONCAT31(Stack_f,var_2b0h);
    iVar1 = fcn.00002718();
    (**(iVar1 + 0x20))(0xffd39ad4,0x60008006,_var_ch);
    return 0;
}


/* fcn.00002718 @ 0x2718 */

int32_t __fastcall fcn.00002718(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00002985(param_1,&var_4h);
    return var_4h;
}


/* fcn.00002b79 @ 0x2b79 */

int * fcn.00002b79(void)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    uint extraout_ECX;
    int32_t *piVar4;
    int *piVar5;
    int32_t var_20h;
    
    iVar2 = fcn.00002828();
    if (iVar2 != 0) {
        fcn.00007340(extraout_ECX);
        for (piVar5 = iVar2 + 0x18; (piVar5 != NULL && (*piVar5 == 0x5241564e)); piVar5 = piVar5 + *(piVar5 + 1)) {
            cVar1 = fcn.000028b5();
            if (cVar1 == '\x01') {
                pcVar3 = piVar5 + 0x1a;
                piVar4 = &var_20h;
                if (var_20h != '\0') {
                    cVar1 = var_20h;
                    do {
                        if (cVar1 != *pcVar3) break;
                        piVar4 = piVar4 + 1;
                        pcVar3 = pcVar3 + 1;
                        cVar1 = *piVar4;
                    } while (cVar1 != '\0');
                }
                if (*piVar4 == *pcVar3) {
                    return piVar5;
                }
            }
        }
    }
    return NULL;
}


/* fcn.00002b5f @ 0x2b5f */

int __fastcall fcn.00002b5f(int param_1)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 0;
    cVar1 = *(param_1 + 0x1a);
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = *(param_1 + 0x1a + iVar2);
    }
    return (*(param_1 + 4) - iVar2) + -0x1b;
}


/* fcn.00002bf4 @ 0x2bf4 */

uint __thiscall fcn.00002bf4(uint param_1,uint32_t param_2,uint32_t param_3)

{
    char cVar1;
    int iVar2;
    uint32_t arg_10h;
    int extraout_ECX;
    
    iVar2 = fcn.00002b79(param_1);
    if (iVar2 == 0) {
        return 0x8000000e;
    }
    arg_10h = fcn.00002b5f();
    if ((param_2 == arg_10h) && (param_3 != 0)) {
        iVar2 = 0;
        cVar1 = *(extraout_ECX + 0x1a);
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(extraout_ECX + 0x1a + iVar2);
        }
        fcn.000028d9(iVar2 + extraout_ECX + 0x1b,param_3,arg_10h);
        return 0;
    }
    return 0x80000002;
}


/* fcn.00001cc6 @ 0x1cc6 */

uint __fastcall fcn.00001cc6(int param_1)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    uint32_t arg_10h;
    int extraout_ECX;
    int32_t var_578h;
    int8_t var_3eeh;
    
    iVar2 = fcn.00002b79();
    if (iVar2 == 0) {
        uVar3 = 0x8000000e;
    }
    else {
        arg_10h = fcn.00002b5f();
        if (arg_10h < 0x579) {
            iVar2 = 0;
            cVar1 = *(extraout_ECX + 0x1a);
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = *(extraout_ECX + 0x1a + iVar2);
            }
            fcn.000028d9(&var_578h,extraout_ECX + 0x1b + iVar2,arg_10h);
            var_3eeh = *(param_1 + 0x18a);
            fcn.00002bf4(arg_10h,&var_578h);
            uVar3 = 0;
        }
        else {
            uVar3 = 0x80000005;
        }
    }
    return uVar3;
}


/* fcn.00002570 @ 0x2570 */

uint32_t __fastcall fcn.00002570(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00002734(param_1,0);
    return param_1 & 0xfff0ff0;
}


/* fcn.0000258f @ 0x258f */

uint32_t __fastcall fcn.0000258f(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00002734(param_1,0);
    return param_1 & 0xf;
}


/* fcn.00002294 @ 0x2294 */

uint32_t fcn.00002294(void)

{
    return CONCAT31(0xc00fd0,(*0xc00fd0dc & *0xc00f80dc) >> 4) & 0xffffff01;
}


/* fcn.000023f2 @ 0x23f2 */

uint __cdecl fcn.000023f2(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000226d @ 0x226d */

uint32_t fcn.0000226d(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000023f2(0xfd010,0);
    return uVar1 & 0xfffff000;
}


/* fcn.000022ad @ 0x22ad */

uint __cdecl fcn.000022ad(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


/* fcn.000022e4 @ 0x22e4 */

uint __cdecl fcn.000022e4(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uchar in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CL;
    return CONCAT31(uVar1 >> 8,in_CL);
}


/* fcn.00002429 @ 0x2429 */

void __cdecl fcn.00002429(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.000023b7 @ 0x23b7 */

ushort __cdecl fcn.000023b7(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000248b @ 0x248b */

void fcn.0000248b(void)

{
    fcn.000023b7(0xf8002,0);
    return;
}


/* fcn.0000249c @ 0x249c */

char fcn.0000249c(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd39eac == -1) {
        uVar1 = fcn.0000248b();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd39eac = cVar2;
    }
    return *0xffd39eac;
}


/* fcn.000024fc @ 0x24fc */

int __fastcall fcn.000024fc(uint param_1)

{
    uint uVar1;
    
    uVar1 = fcn.0000248b(param_1);
    return CONCAT31(uVar1 >> 8,(uVar1 & 0xffe0) == 0x7a00) * 2 + 7;
}


/* fcn.00006903 @ 0x6903 */

//WARNING: Control flow encountered bad instruction data

uchar __fastcall fcn.00006903(int param_1,uint16_t param_2)

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


/* fcn.00006f77 @ 0x6f77 */

int __cdecl fcn.00006f77(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *arg_ch_00;
    uint32_t uStack_38;
    uint uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    uVar1 = rdmsr(0x1b);
    uStack_14 = uVar1 >> 0x20;
    iVar2 = fcn.00007239();
    if (iVar2 < 0) {
        return iVar2;
    }
    if (arg_8h == 1) {
        uStack_30 = arg_ch | 0x80000000;
        uVar3 = fcn.000023f2(0x48,0);
        uVar3 = uVar3 & 0xfffffffe;
        *(uVar3 + 0x5da4) = uStack_30;
        fcn.00007239();
        uStack_30 = *(uVar3 + 0x5da4);
        uStack_2c = *(uVar3 + 0x5da0);
        fcn.00000391();
        uStack_20 = *(uVar3 + 0x5da4);
        uStack_1c = *(uVar3 + 0x5da0);
        if ((uStack_30 != uStack_20) && (uStack_2c != uStack_1c)) {
            return -0x7ffffffe;
        }
        *arg_14h = uStack_30 & 0xff;
        arg_ch_00 = &uStack_2c;
    }
    else if (arg_8h == 2) {
        uStack_28 = *arg_10h;
        uStack_24 = arg_ch | 0x80000000;
        fcn.000028d9(&uStack_38,&uStack_28,8);
        uStack_18 = uStack_38;
        uStack_14 = uStack_34;
        wrmsr(0x150,CONCAT44(uStack_34,uStack_38));
        fcn.00007239();
        uVar1 = rdmsr(0x150);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.000028d9(&uStack_28,&uStack_38,8);
        fcn.00000391();
        uVar1 = rdmsr(0x150);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.000028d9(&uStack_10,&uStack_38,8);
        if ((uStack_24 != uStack_c) && (uStack_28 != uStack_10)) {
            return -0x7ffffffe;
        }
        *arg_14h = uStack_24 & 0xff;
        arg_ch_00 = &uStack_28;
    }
    else {
        if (arg_8h != 3) {
            return -0x7ffffffd;
        }
        uStack_30 = arg_ch | 0x80000000;
        uStack_2c = *arg_10h;
        wrmsr(0x608,uStack_2c);
        uStack_14 = 0;
        wrmsr(0x607,uStack_30);
        uStack_18 = uStack_30;
        fcn.00007239();
        uVar1 = rdmsr(0x607);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.000028d9(&uStack_30,&uStack_38,4);
        uVar1 = rdmsr(0x608);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.000028d9(&uStack_2c,&uStack_38,4);
        fcn.00000391();
        uVar1 = rdmsr(0x607);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.000028d9(&uStack_20,&uStack_38,4);
        uVar1 = rdmsr(0x608);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.000028d9(&uStack_1c,&uStack_38,4);
        if ((uStack_30 != uStack_20) && (uStack_2c != uStack_1c)) {
            return -0x7ffffffe;
        }
        *arg_14h = uStack_30 & 0xff;
        arg_ch_00 = &uStack_2c;
    }
    fcn.000028d9(arg_10h,arg_ch_00,4);
    return iVar2;
}


/* fcn.000025ac @ 0x25ac */

void __fastcall fcn.000025ac(uint param_1)

{
    int32_t var_4h;
    
    fcn.00002734(param_1,0);
    fcn.000023b7(2,0);
    fcn.00006903();
    return;
}


/* fcn.000069fc @ 0x69fc */

uint __fastcall fcn.000069fc(int param_1)

{
    ulong uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    char cVar4;
    int16_t iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int16_t iVar9;
    uint32_t uVar10;
    uint uVar11;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    uVar11 = 0;
    iVar5 = fcn.000023b7(2,0);
    fcn.000023b7(0x10002,0);
    iVar6 = fcn.00002570();
    uVar1 = rdmsr(0x614);
    uVar2 = rdmsr(0x606);
    rdmsr(0x649);
    rdmsr(0x64a);
    if ((uVar2 & 0xf) == 0) {
code_r0x00006a9d:
        uVar8 = 1;
    }
    else {
        uVar3 = (uVar2 & 0xf) - 1;
        iVar7 = 0;
        if ((uVar3 & 0x20) == 0) {
            iVar7 = 2;
        }
        uVar8 = iVar7 << (uVar3 & 0x1f);
        cVar4 = fcn.00006f3f();
        if ((cVar4 != '\0') && (uVar8 == '\0')) goto code_r0x00006a9d;
    }
    uVar10 = uVar1 & 0x7fff;
    uVar8 = uVar8 & 0xff;
    iVar9 = ((0U % uVar8 << 0x20 | uVar10) / uVar8) * 100;
    uVar10 = uVar10 % uVar8;
    if (uVar10 != 0) {
        iVar9 = iVar9 + (uVar10 * 100) / uVar8;
    }
    if (param_1 == 0) {
        if (iVar6 != 0x906a0) {
code_r0x00006d90:
            if (iVar6 != 0xb06a0) {
                return uVar11;
            }
            if (iVar5 == -0x58fa) {
                if (iVar9 == 0xaf0) {
                    return 0xc3;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xc4;
            }
            if (iVar5 == -0x58f9) {
                if (iVar9 == 0xaf0) {
                    return 0xc1;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xc2;
            }
            if (iVar5 == -0x58f8) {
                if (iVar9 == 0x5dc) {
                    return 0xc0;
                }
                if (iVar9 != 0xaf0) {
                    return uVar11;
                }
                return 0xca;
            }
            if (iVar5 == -0x58ea) {
                if (iVar9 == 0xaf0) {
                    return 0xc9;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xc5;
            }
            if (iVar5 == -0x58eb) {
                if (iVar9 == 0xaf0) {
                    return 0xcb;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xcc;
            }
            if (iVar5 == -0x58e5) {
                if (iVar9 != 0x5dc) {
                    return uVar11;
                }
                return 199;
            }
            if (iVar5 == -0x58e4) {
                if (iVar9 != 0x5dc) {
                    return uVar11;
                }
                return 0xc6;
            }
            if (iVar5 == -0x58f7) {
                if (iVar9 == 0xaf0) {
                    return 0xd3;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xd4;
            }
            if (iVar5 != -0x58f6) {
                if (iVar5 != -0x58f5) {
                    return uVar11;
                }
                if (iVar9 != 0x5dc) {
                    return uVar11;
                }
                return 0xd0;
            }
            if (iVar9 == 0xaf0) {
                return 0xd1;
            }
            if (iVar9 != 0x1194) {
                return uVar11;
            }
            return 0xd2;
        }
        if (iVar5 == 0x4641) {
            if (iVar9 == 0x1194) {
                uVar11 = 0x35;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x32;
            }
        }
        else if (iVar5 == 0x4601) {
            if (iVar9 == 0x5dc) {
                uVar11 = 0x30;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x3b;
            }
        }
        else if (iVar5 == 0x4621) {
            if (iVar9 == 0xaf0) {
                uVar11 = 0x31;
            }
            else {
                if (iVar9 != 0x1194) {
                    return 0;
                }
                uVar11 = 0x38;
            }
        }
        else if (iVar5 == 0x4629) {
            if (iVar9 == 0x1194) {
                uVar11 = 0x39;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x3a;
            }
        }
        else if (iVar5 == 0x4619) {
            if (iVar9 == 0x5dc) {
                uVar11 = 0x36;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x3d;
            }
        }
        else if (iVar5 == 0x4609) {
            if (iVar9 == 0x5dc) {
                uVar11 = 0x37;
            }
            else if (iVar9 == 0xaf0) {
                uVar11 = 0x3c;
            }
            else {
                if (iVar9 != 0x1194) {
                    return 0;
                }
                uVar11 = 0x3e;
            }
        }
        else if (iVar5 == 0x4659) {
            if (iVar9 != 0xaf0) {
                return 0;
            }
            uVar11 = 0x3f;
        }
        else if (iVar5 == 0x4645) {
            if (iVar9 != 0xaf0) {
                return 0;
            }
            uVar11 = 0x40;
        }
        else {
            if (iVar5 != 0x4649) {
                return 0;
            }
            if (iVar9 != 0xaf0) {
                if (iVar9 != 0x1194) {
                    return 0;
                }
                uVar11 = 0x42;
                goto code_r0x00006d90;
            }
            uVar11 = 0x41;
        }
    }
    else {
        if (param_1 == 1) {
            return 0;
        }
        if (param_1 != 2) {
            return 0;
        }
        if (iVar6 != 0x906a0) {
            return 0;
        }
        if (iVar5 == 0x461a) {
            if (iVar9 == 500) {
                uVar11 = 0x52;
            }
            else if (iVar9 == 700) {
                uVar11 = 0x53;
            }
            else if (iVar9 == 900) {
                uVar11 = 0x58;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 0x60;
            }
        }
        else if (iVar5 == 0x4602) {
            if (iVar9 == 900) {
                uVar11 = 0x57;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 99;
            }
        }
        else if (iVar5 == 0x4622) {
            if (iVar9 == 500) {
                uVar11 = 0x51;
            }
            else if (iVar9 == 700) {
                uVar11 = 0x50;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 0x62;
            }
        }
        else {
            if (iVar5 != 0x460a) {
                return 0;
            }
            if (iVar9 == 700) {
                uVar11 = 0x54;
            }
            else if (iVar9 == 900) {
                uVar11 = 0x59;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 0x61;
            }
        }
    }
    return uVar11;
}


/* fcn.00006f3f @ 0x6f3f */

bool fcn.00006f3f(void)

{
    char cVar1;
    
    cVar1 = fcn.000022ad(0xfc,0);
    return cVar1 == '\x04';
}


/* fcn.000027dc @ 0x27dc */

int32_t fcn.000027dc(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00002807 @ 0x2807 */

int16_t * __fastcall fcn.00002807(uint param_1,int16_t *param_2)

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


/* fcn.000029d7 @ 0x29d7 */

void __cdecl fcn.000029d7(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.0000285b @ 0x285b */

int32_t fcn.0000285b(void)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.000029d7(&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.0000289c @ 0x289c */

uint * __fastcall fcn.0000289c(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000170 @ 0x170 */

uint * fcn.00000170(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.00002878 @ 0x2878 */

int fcn.00002878(void)

{
    int iVar1;
    
    iVar1 = fcn.0000285b();
    if (iVar1 != 0) {
        fcn.0000289c();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00002a17 @ 0x2a17 */

uint __fastcall fcn.00002a17(uint *param_1)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    int *piVar5;
    
    fcn.000027dc();
    iVar2 = fcn.00002807();
    do {
        if (iVar2 == 0) {
            piVar3 = fcn.00002878();
            if (piVar3 == NULL) {
                *param_1 = 0;
                uVar4 = 0x80000009;
            }
            else {
                piVar3[1] = 0;
                piVar5 = piVar3 + 5;
                *piVar3 = 0x49484550;
code_r0x00002a8a:
                piVar3[2] = piVar5;
                piVar3[3] = piVar5 + 0x40;
                piVar3[4] = piVar5 + 0x50;
code_r0x00002a9b:
                uVar4 = 0;
                *param_1 = piVar3;
            }
            return uVar4;
        }
        cVar1 = fcn.000028b5();
        if ((cVar1 != '\0') && (piVar3 = iVar2 + 0x18, *piVar3 == 0x49484550)) {
            piVar5 = iVar2 + 0x2c;
            if (*(iVar2 + 0x20) != piVar5) goto code_r0x00002a8a;
            goto code_r0x00002a9b;
        }
        iVar2 = fcn.00002807();
    } while( true );
}


/* fcn.00002828 @ 0x2828 */

int fcn.00002828(void)

{
    char cVar1;
    int iVar2;
    
    fcn.000027dc();
    do {
        iVar2 = fcn.00002807();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000028b5();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00007340 @ 0x7340 */

uint __fastcall fcn.00007340(uint param_1,uchar *param_2)

{
    int16_t iVar1;
    char cVar2;
    uint uVar3;
    uint32_t uVar4;
    uint extraout_ECX;
    int16_t *piVar5;
    
    piVar5 = 0xffd39f64;
    if (param_2 == NULL) {
        uVar3 = 0x80000002;
    }
    else {
        uVar4 = fcn.00007323();
        if (uVar4 < 0x20) {
            cVar2 = fcn.000072fb(extraout_ECX,uVar4 * 2 + 2);
            if (cVar2 == '\0') {
                do {
                    iVar1 = *piVar5;
                    piVar5 = piVar5 + 1;
                    *param_2 = iVar1;
                    param_2 = param_2 + 1;
                } while (*piVar5 != 0);
                *param_2 = 0;
                uVar3 = 0;
            }
            else {
                uVar3 = 0x8000000f;
            }
        }
        else {
            uVar3 = 0x80000005;
        }
    }
    return uVar3;
}


/* fcn.0000254c @ 0x254c */

uint32_t __fastcall fcn.0000254c(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.0000249c(param_1);
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


/* fcn.00002f69 @ 0x2f69 */

void __thiscall fcn.00002f69(int param_1,int param_2,uchar param_3,int param_4)

{
    uchar uVar1;
    
    *(param_1 + 0x20 + param_2 * 8) = param_3;
    uVar1 = param_2;
    if (param_4 == 0) {
        uVar1 = 0xff;
    }
    *(param_1 + 0x21 + param_2 * 8) = uVar1;
    return;
}


/* fcn.000024da @ 0x24da */

bool __fastcall fcn.000024da(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.0000249c(param_1);
    return cVar1 == '\x04';
}


/* fcn.0000251e @ 0x251e */

uint __fastcall fcn.0000251e(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.0000249c(param_1);
    if (cVar1 != '\x02') {
        cVar1 = fcn.0000249c(param_1);
        if (cVar1 != '\x05') {
            cVar1 = fcn.0000249c(param_1);
            if (cVar1 != '\x06') {
                cVar1 = fcn.0000249c(param_1);
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.000024eb @ 0x24eb */

bool __fastcall fcn.000024eb(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000024fc(param_1);
    return cVar1 == '\a';
}


/* fcn.00002f07 @ 0x2f07 */

void fcn.00002f07(void)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.00002686(&var_4h);
    if (-1 < iVar1) {
        *(var_4h + 0x1c) = *(var_4h + 0x1c) | 1;
        iVar1 = fcn.000026fc();
        uVar2 = (**(iVar1 + 0x18))(0x117);
        *(var_4h + 0x1c) = *(var_4h + 0x1c) & 0xffffffef | (uVar2 & 1) << 4;
        *(var_4h + 0x20) = 0xefa0;
        *(var_4h + 0x23) = 4;
        fcn.000028d9(var_4h + 0x24,0xffd39ec0,4);
    }
    return;
}


/* fcn.00002f89 @ 0x2f89 */

void __cdecl fcn.00002f89(int32_t arg_1ch,int32_t arg_20h,int32_t arg_6ch)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    int in_stack_00000004;
    int iStack_4;
    
    iVar2 = fcn.00002686(&iStack_4);
    if (-1 < iVar2) {
        uVar5 = 0;
        uVar4 = *(iStack_4 + 0x1c);
        cVar1 = fcn.0000254c();
        if (cVar1 != '\0') {
            do {
                if (*(in_stack_00000004 + 0xff + uVar5) == '\0') {
                    uVar4 = uVar4 & ~(1 << (uVar5 & 0x1f));
                }
                else {
                    uVar4 = uVar4 | 1 << (uVar5 & 0x1f);
                }
                uVar5 = uVar5 + 1;
                uVar3 = fcn.0000254c();
            } while (uVar5 < (uVar3 & 0xff));
        }
        *(iStack_4 + 0x1c) = uVar4;
        iVar2 = fcn.000026fc();
        uVar6 = (**(iVar2 + 0x10))(0xbe);
        fcn.00002f69(0,uVar6);
        fcn.000026fc();
        return;
    }
    return;
}


/* fcn.00003239 @ 0x3239 */

void fcn.00003239(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint8_t *puVar5;
    int iStack_4;
    
    iVar2 = fcn.00002686(&iStack_4);
    if (-1 < iVar2) {
        iVar2 = 2;
        *(iStack_4 + 0x24) = 1;
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_1 + 0x58f) ^ *(iStack_4 + 0x1c)) & 1;
        uVar3 = (*(param_1 + 0x590) * 2 ^ *(iStack_4 + 0x1c)) & 2 ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar3;
        uVar3 = (*(param_1 + 0x5a4) << 4 ^ uVar3) & 0xf0 ^ uVar3;
        *(iStack_4 + 0x1c) = uVar3;
        uVar3 = (*(param_1 + 0x5a5) << 8 ^ uVar3) & 0x700 ^ uVar3;
        *(iStack_4 + 0x1c) = uVar3;
        uVar3 = (*(param_1 + 0x592) << 0xb ^ uVar3) & 0x800 ^ uVar3;
        puVar5 = param_1 + 0x597;
        *(iStack_4 + 0x1c) = uVar3;
        puVar4 = iStack_4 + 0x28;
        *(iStack_4 + 0x1c) = (*(param_1 + 0x591) << 3 ^ uVar3) & 8 ^ uVar3;
        *(iStack_4 + 0x20) = *(iStack_4 + 0x20) ^ (*(param_1 + 0x594) ^ *(iStack_4 + 0x20)) & 1;
        do {
            *puVar4 = *puVar4 ^ (puVar5[-2] ^ *puVar4) & 1;
            *puVar4 = *puVar4 ^ (*puVar5 * 2 ^ *puVar4) & 6;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 4;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        puVar4 = iStack_4 + 0x48;
        uVar3 = 0;
        while( true ) {
            cVar1 = fcn.0000251e();
            if ((-(cVar1 != '\0') & 3) + 3 <= uVar3) break;
            *puVar4 = *puVar4 ^ (*(param_1 + 0x59d + uVar3) ^ *puVar4) & 1;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
        }
        puVar4 = iStack_4 + 0x60;
        uVar3 = 0;
        do {
            *puVar4 = *puVar4 ^ (*(param_1 + 0x599 + uVar3) ^ *puVar4) & 1;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
        } while (uVar3 < 4);
        cVar1 = fcn.000024eb();
        if (cVar1 != '\0') {
            cVar1 = fcn.0000251e();
            if (cVar1 != '\0') {
                *(iStack_4 + 0x2c) = 0x29460c02;
                *(iStack_4 + 0x30) = 0x29460e06;
                *(iStack_4 + 0x34) = 0x29460403;
                *(iStack_4 + 0x3c) = 0x29460e06;
                *(iStack_4 + 0x40) = 0x29461605;
                *(iStack_4 + 0x44) = 0x29460607;
            }
        }
    }
    return;
}


/* fcn.00002778 @ 0x2778 */

//WARNING: Removing unreachable block (ram,0x0000279f)
//WARNING: Removing unreachable block (ram,0x00002797)
//WARNING: Removing unreachable block (ram,0x000027b5)

uint __cdecl fcn.00002778(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar2 = *(iVar1 + 0xc);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 4);
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return 7;
}


/* fcn.000025e2 @ 0x25e2 */

uint32_t fcn.000025e2(void)

{
    uint32_t uVar1;
    int32_t var_8h;
    uint32_t var_4h;
    
    uVar1 = fcn.00006f77(1,0x1c,&var_8h,&var_4h);
    if ((uVar1 == 0) && (var_4h == 0)) {
        uVar1 = var_8h >> 1 & 1;
    }
    else {
        uVar1 = uVar1 & 0xffffff00;
    }
    return uVar1;
}


/* fcn.000037b2 @ 0x37b2 */

int __fastcall fcn.000037b2(int *param_1,int32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint extraout_EDX;
    uint uVar3;
    uint uVar4;
    int32_t var_30h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    cVar1 = fcn.00006f3f();
    uVar4 = 0xffd39cf4;
    if (cVar1 == '\0') {
        uVar4 = 0xffd39e84;
    }
    cVar1 = fcn.00002294();
    uVar3 = extraout_EDX;
    if ((((cVar1 != '\0') && (*0xff7e0028 == 0x4856465f)) && (*0xff7e0020 == 0xb0000)) && (*0xff7e0024 == 0)) {
        uVar3 = 0xff9f0000;
    }
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(stack0xffffffee + -4) + 0x68))(uVar4,uVar3,&var_8h);
    if (-1 < iVar2) {
        var_4h = &var_10h;
        InterruptDescriptorTableRegister();
        iVar2 = (**(**(stack0xffffffee + -4) + 0x6c))(var_8h,&var_30h);
        if ((var_8h + 0x18 == 0) || (var_14h == 0)) {
            iVar2 = -0x7ffffff2;
        }
        else {
            param_1[1] = 0;
            *param_1 = var_8h + 0x18;
            *param_2 = var_14h;
        }
    }
    return iVar2;
}


/* fcn.000029b2 @ 0x29b2 */

void __fastcall fcn.000029b2(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x28))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000073c5 @ 0x73c5 */

uint __fastcall fcn.000073c5(uint param_1)

{
    int iVar1;
    uint *puVar2;
    uint uVar3;
    uint uStack_4;
    
    uStack_4 = param_1;
    iVar1 = fcn.00002985(param_1,&uStack_4);
    uVar3 = 0;
    if (iVar1 != 0) {
        fcn.00002429(0xfd010,0);
        fcn.00002466(0xfd004,0);
        puVar2 = fcn.00002948();
        if (puVar2 == NULL) {
            uVar3 = 0x80000009;
        }
        else {
            fcn.00007458();
            *puVar2 = 0x80000010;
            puVar2[1] = 0xffd39cd4;
            puVar2[2] = puVar2 + 6;
            uVar3 = fcn.00002960();
        }
    }
    return uVar3;
}


/* fcn.0000739b @ 0x739b */

uint __fastcall fcn.0000739b(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.00002828();
    if (((iVar1 != 0) && (iVar1 + 0x18 != NULL)) && (iVar1 = *(iVar1 + 0x18), iVar1 < 4)) {
        *param_1 = iVar1;
        return 0;
    }
    return 0x8000000e;
}


/* fcn.0000386f @ 0x386f */

int __fastcall fcn.0000386f(uint param_1)

{
    char cVar1;
    int iVar2;
    uint8_t uStack_1d;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    uint uStack_c;
    uint uStack_8;
    ushort uStack_4;
    uchar uStack_2;
    
    uStack_c = *0xffd39fd0;
    iStack_14 = 0;
    iStack_18 = 0;
    uStack_8 = *0xffd39fd4;
    uStack_4 = *0xffd39fd8;
    uStack_2 = *0xffd39fda;
    iVar2 = fcn.00002985(param_1,&iStack_10);
    if ((-1 < iVar2) && (iVar2 = (**(iStack_10 + 0x20))(iStack_10,1,&iStack_18,&iStack_14), iVar2 < 0)) {
        return iVar2;
    }
    iVar2 = fcn.000029d7(&iStack_1c);
    if (-1 < iVar2) {
        fcn.000001b0(iStack_1c + 0x18,0x310);
        *(iStack_1c + 8) = *0xffd39e34;
        *(iStack_1c + 0xc) = *0xffd39e38;
        *(iStack_1c + 0x10) = *0xffd39e3c;
        *(iStack_1c + 0x14) = *0xffd39e40;
        *(iStack_1c + 0x1c) = 2;
        *(iStack_1c + 0x1e) = 0;
        *(iStack_1c + 0x94) = 0x33610000;
        *(iStack_1c + 0xbc) = 0;
        *(iStack_1c + 0xc0) = iStack_18 + 0x60000;
        *(iStack_1c + 0xc4) = iStack_14 + iStack_18 + -1;
        fcn.000028d9(iStack_1c + 0x30,0xffd39ee4,0x20);
        fcn.000028d9(iStack_1c + 0x50,0xffd39ec4,0x20);
        fcn.000028d9(iStack_1c + 0x70,0xffd39f04,0x20);
        *(iStack_1c + 0x2f2) = 0x1d;
        *(iStack_1c + 0x2f4) = 0x3f;
        *(iStack_1c + 0x2f0) = 1;
        iVar2 = fcn.000026fc();
        cVar1 = (**(iVar2 + 0x18))(0x45);
        if (cVar1 != '\0') {
            iVar2 = fcn.000026fc();
            cVar1 = (**(iVar2 + 0x18))(0x39);
            if (cVar1 != '\0') {
                *(iStack_1c + 0x9c) = *(iStack_1c + 0x9c) | 2;
                *(iStack_1c + 0xa0) = 0x66;
                *(iStack_1c + 0xa4) = 0x62;
                if ((((uStack_1d & 0xf8) == 0) && ((uStack_1d & 1) != 0)) &&
                   (((uStack_1d & 6) == 6 || ((uStack_1d & 6) == 0)))) {
                    *(iStack_1c + 0x9c) = *(iStack_1c + 0x9c) | 4;
                    *(iStack_1c + 0xa8) = 0xb3;
                    *(iStack_1c + 0xac) = 0xb4;
                    *(iStack_1c + 0xb0) = 0xb5;
                    *(iStack_1c + 0xb4) = 0xb6;
                    *(iStack_1c + 0x2e8) = 0x10000;
                }
            }
        }
        *(iStack_1c + 0x9c) = *(iStack_1c + 0x9c) | 0x10;
        *(iStack_1c + 0x9c) = *(iStack_1c + 0x9c) | 0x20;
        *(iStack_1c + 0x308) = 0;
        *(iStack_1c + 0x30c) = 0;
        *(iStack_1c + 800) = 0;
        iVar2 = fcn.000037b2();
        if (-1 < iVar2) {
            *(iStack_1c + 0x90) = *(*(iStack_1c + 0x308) + 0x90);
            *(iStack_1c + 0x18) = *(iStack_1c + 0xbc) * 8 + 0xb0;
            fcn.000028d9(iStack_1c + 0x20,&uStack_c,0xb);
            *(iStack_1c + 0x2c0) = 2;
            fcn.000028d9(iStack_1c + 0x2c4,&uStack_c,0xb);
            *(iStack_1c + 0x2d4) = 0;
            *(iStack_1c + 0x2d8) = 2;
            *(iStack_1c + 0x2da) = 0;
            *(iStack_1c + 0x2e4) = *(iStack_1c + 0x94);
            *(iStack_1c + 0x2ec) = 0x808655aa;
            *(iStack_1c + 0x310) = 0;
            *(iStack_1c + 0x314) = 0;
            *(iStack_1c + 0x318) = 0;
            *(iStack_1c + 0x31c) = 0;
            *(iStack_1c + 0x31e) = 0;
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00002614 @ 0x2614 */

uint __fastcall fcn.00002614(uchar *param_1,uchar *param_2)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    uint32_t uVar3;
    uint uVar4;
    
    fcn.000025ac();
    fcn.0000258f();
    iVar2 = fcn.000069fc(extraout_ECX);
    uVar4 = 0;
    uVar3 = 0;
    while (iVar2 != *(uVar3 * 8 + -0x2c5f9c)) {
        uVar3 = uVar3 + 1;
        if (0x30 < uVar3) {
            cVar1 = fcn.00006f3f();
            if (cVar1 == '\0') {
                uVar4 = 0x80000003;
            }
            else {
                *param_1 = 1;
                *param_2 = 1;
            }
            return uVar4;
        }
    }
    if (param_1 != NULL) {
        *param_1 = *(uVar3 * 8 + -0x2c5f98);
    }
    if (param_2 == NULL) {
        return 0;
    }
    *param_2 = *(uVar3 * 8 + -0x2c5f97);
    return 0;
}


/* fcn.000036f5 @ 0x36f5 */

void __cdecl fcn.000036f5(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    uint64_t uVar1;
    ulong uVar2;
    char cVar3;
    int iVar4;
    uint in_ECX;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    fcn.00002778(in_ECX,0,&var_4h);
    if ((*(arg_ch + 0x1c) == 0) || (((var_4h & 0x800000U) != 0 && ((*(arg_10h + 0x1c) & 0xfc00000) != 0)))) {
        *(arg_ch + 0x1c) = 0x200000;
    }
    iVar4 = fcn.00002570();
    if (((iVar4 == 0xb0670) || (iVar4 = fcn.00002570(), iVar4 == 0xb06a0)) && (cVar3 = fcn.000025e2(), cVar3 != '\0'))
    {
        uVar1 = rdmsr(0xcf);
        if (((uVar1 & 4) == 0) || (uVar2 = rdmsr(0x2d9), uVar2 == 0 && uVar2 >> 0x20 == 0)) {
            *(arg_ch + 0x1c) = 0x400000;
        }
        else {
            *(arg_ch + 0x1c) = 0x800000;
        }
    }
    uVar2 = rdmsr(0x1fb);
    if ((*(arg_ch + 0x1c) & uVar2 << 0x14) == 0) {
        *(arg_ch + 0x1c) = 0;
    }
    return;
}


/* fcn.00006f59 @ 0x6f59 */

uint __fastcall fcn.00006f59(uint param_1)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.000025ac(param_1);
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.00006f18 @ 0x6f18 */

uint __fastcall fcn.00006f18(char param_1)

{
    if (param_1 == '\0') {
        return 0xfed90000;
    }
    if (param_1 != '\x01') {
        if (param_1 != '\x02') {
            return 0;
        }
        return 0xfed91000;
    }
    return 0xfed92000;
}


/* fcn.00007ca7 @ 0x7ca7 */

uchar fcn.00007ca7(void)

{
    uchar uVar1;
    int8_t var_1h;
    
    out(0x72,5);
    uVar1 = in(0x73);
    return uVar1;
}


/* fcn.00007cd3 @ 0x7cd3 */

unkbyte6 fcn.00007cd3(void)

{
    out(0x72,5);
    out(0x73,0);
    return 0x7300000000;
}


/* fcn.000001d0 @ 0x1d0 */

//WARNING: Removing unreachable block (ram,0x000001fd)
//WARNING: Removing unreachable block (ram,0x000001d6)

uint fcn.000001d0(void)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = cpuid_Version_info(1);
    if ((*(iVar1 + 0xc) >> 6 & 1) == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = getsec_capabilities(0);
    }
    return uVar2;
}


/* fcn.00007239 @ 0x7239 */

uint __fastcall fcn.00007239(int param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint uVar4;
    uint16_t uVar5;
    uint uStack_1c;
    uint uStack_18;
    uchar auStack_14 [3];
    uint8_t uStack_11;
    uchar auStack_c [7];
    uint8_t uStack_5;
    
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 1;
    do {
        if (param_1 == 1) {
            uVar2 = fcn.000023f2(0x48,0);
            uVar3 = *((uVar2 & 0xfffffffe) + 0x5da4) >> 0x18;
code_r0x000072c1:
            uVar3 = uVar3 >> 7;
        }
        else if (param_1 == 2) {
            uVar1 = rdmsr(0x150);
            uStack_18 = uVar1 >> 0x20;
            uStack_1c = uVar1;
            fcn.000028d9(auStack_c,&uStack_1c,8);
            uVar3 = uStack_5 >> 7;
        }
        else if (param_1 == 3) {
            uVar1 = rdmsr(0x607);
            uStack_18 = uVar1 >> 0x20;
            uStack_1c = uVar1;
            fcn.000028d9(auStack_14,&uStack_1c,8);
            uVar3 = uStack_11;
            goto code_r0x000072c1;
        }
        fcn.00000391();
        uVar5 = uVar5 + 1;
        if (uVar3 != 1) {
            return 0;
        }
        if (999 < uVar5) {
            if (uVar5 == 1000) {
                rdmsr(0x1b);
                uVar4 = 0x80000012;
            }
            return uVar4;
        }
    } while( true );
}


/* fcn.00000391 @ 0x391 */

uint __fastcall fcn.00000391(uint param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.00000348();
    return param_1;
}


/* fcn.00007323 @ 0x7323 */

int fcn.00007323(void)

{
    int16_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    do {
        if (0x3d < uVar3) {
            return 0x20;
        }
        iVar2 = iVar2 + 1;
        piVar1 = uVar3 - 0x2c609a;
        uVar3 = uVar3 + 2;
    } while (*piVar1 != 0);
    return iVar2;
}


/* fcn.000072fb @ 0x72fb */

uint32_t __thiscall fcn.000072fb(uint32_t param_1,uint param_2,int param_3)

{
    uint32_t uVar1;
    
    if (0xffd39f63 < param_1) {
        uVar1 = param_3 - 0x2c609c;
        if (param_1 < uVar1) goto code_r0x0000731d;
        if (0xffd39f64 < param_1) goto code_r0x00007320;
    }
    uVar1 = param_1 + 0x20;
    if (uVar1 < 0xffd39f65) {
code_r0x00007320:
        return uVar1 & 0xffffff00;
    }
code_r0x0000731d:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.00002466 @ 0x2466 */

void fcn.00002466(int32_t param_1,int32_t param_2)

{
    fcn.000023f2(param_1,param_2);
    fcn.00002429(param_1,param_2);
    return;
}


/* fcn.00007458 @ 0x7458 */

uint __fastcall fcn.00007458(uint *param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t uVar5;
    uint *puStack_4;
    
    *param_1 = 0x49505350;
    param_1[1] = 0;
    *(param_1 + 2) = 1;
    param_1[3] = 0xffd397d1;
    param_1[4] = 0xffd397ef;
    param_1[5] = 0xffd3980d;
    param_1[6] = 0xffd3982a;
    param_1[7] = 0xffd39875;
    param_1[8] = 0xffd398bb;
    param_1[9] = 0xffd398e6;
    param_1[10] = 0xffd39911;
    param_1[0xb] = 0xffd3999d;
    param_1[0xc] = 0xffd399ec;
    param_1[0xe] = 0xfd000;
    param_1[0xf] = 0;
    *(param_1 + 0xd) = 0x1800;
    puStack_4 = param_1;
    uVar3 = fcn.000023f2(0xfd010,0);
    uVar3 = uVar3 & 0xfffff000;
    *(param_1 + 0x10) = *(uVar3 + 0x50);
    *(param_1 + 0x41) = *(uVar3 + 0x50) >> 8;
    param_1[0x11] = *(uVar3 + 0xc4);
    param_1[0x12] = *(uVar3 + 200);
    *(uVar3 + 0xb4) = *(uVar3 + 0xb4) & 0xffff8007 | 4;
    *(param_1 + 0x15) = *(uVar3 + 0xb8) >> 8 & 3;
    *(uVar3 + 0xb4) = *(uVar3 + 0xb4) & 0xffff9003 | 0x1000;
    uVar1 = *(uVar3 + 0xb8);
    uVar2 = uVar1;
    if (*(param_1 + 0x15) == '\0') {
        param_1[0x17] = 0x80000 << (uVar2 & 0xf);
    }
    else {
        iVar4 = 0x80000 << (uVar2 & 0xf);
        param_1[0x16] = iVar4;
        param_1[0x17] = (0x80000 << (uVar1 >> 4 & 0xf)) + iVar4;
    }
    *(uVar3 + 0xb4) = *(uVar3 + 0xb4) & 0xffff800b | 8;
    uVar1 = *(uVar3 + 0xb8);
    *(param_1 + 0x13) = uVar1 >> 0xc & 0xff0;
    *(param_1 + 0x4e) = (uVar1 >> 0x18) << 2;
    *(uVar3 + 0xb4) = *(uVar3 + 0xb4) & 0xffff800f | 0xc;
    puStack_4 = *(uVar3 + 0xb8);
    *(param_1 + 0x52) = (puStack_4 >> 0x10 & 0xff) << 2;
    uVar5 = puStack_4 >> 2 & 0x3ff;
    *(param_1 + 0x14) = uVar5;
    if (uVar5 != 0x300) {
        fcn.000076d5(0,0xefc,4,&puStack_4);
        *(param_1 + 0x14) = *(param_1 + 0x14) + (puStack_4 >> 0x14 & 0xff0);
    }
    return 0;
}


/* fcn.000076d5 @ 0x76d5 */

ulong __cdecl fcn.000076d5(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    char cVar1;
    int iVar2;
    int in_ECX;
    uint32_t uVar3;
    int32_t in_EDX;
    uint extraout_EDX;
    uint extraout_EDX_00;
    ushort uVar4;
    ushort extraout_var;
    uint32_t uVar5;
    uint uVar6;
    int iVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint32_t uStack_30;
    uint32_t uStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    iStack_14 = *(in_ECX + 0x2c) + 0x30;
    uStack_c = in(iStack_14);
    out(iStack_14,uStack_c & 0xfffffffe);
    iStack_18 = *(in_ECX + 0x30) + 0xdc;
    iStack_1c = *(in_ECX + 0x34) + (0xffffff23 < *(in_ECX + 0x30));
    fcn.000022ad(iStack_18,iStack_1c);
    iVar2 = fcn.0000743b();
    if ((arg_8h == 1) || (arg_8h == 2)) {
        uVar8 = fcn.000022ad(0xfd0dc,0);
        if ((uVar8 & 0x20) == 0) {
            fcn.00002321(0xfd0dc,0);
            fcn.0000238f(iStack_18,iStack_1c);
            goto code_r0x00007782;
        }
        uVar9 = CONCAT44(uVar8 >> 0x20,0x8000000f);
code_r0x00007a00:
        uVar6 = uVar9;
        uVar4 = uVar9 >> 0x30;
        if ((arg_8h != 1) && (arg_8h != 2)) goto code_r0x00007a2a;
    }
    else {
code_r0x00007782:
        cVar1 = fcn.0000768a(0);
        uVar4 = extraout_EDX >> 0x10;
        uVar6 = extraout_EDX;
        if (cVar1 == '\0') {
code_r0x000079fb:
            uVar9 = CONCAT44(uVar6,0x80000007);
            goto code_r0x00007a00;
        }
        if ((arg_8h == 5) && ((*(iVar2 + 4) & 0x800) != 0)) {
            uVar6 = 0x8000000f;
            goto code_r0x00007a2a;
        }
        uVar9 = fcn.00007b7d(in_ECX,in_EDX,&uStack_24,&uStack_10);
        iVar7 = uVar9;
        iStack_20 = iVar7;
        if (iVar7 < 0) goto code_r0x00007a00;
        uStack_24 = uStack_24 + arg_ch;
        if (uStack_10 < arg_ch + arg_10h) {
code_r0x000077ec:
            uVar9 = CONCAT44(uStack_24,0x80000002);
            goto code_r0x00007a00;
        }
        uStack_30 = 0;
        if (arg_8h == 0) {
            uStack_30 = 0;
code_r0x00007872:
            do {
                uVar5 = arg_10h;
                if (((arg_8h == 0) || (arg_8h == 1)) || (arg_8h == 3)) {
                    uVar3 = uStack_24 + 0x100 & 0xffffff00;
                    if (uVar3 < arg_10h + uStack_24) {
                        uVar5 = uVar3 - uStack_24;
                    }
                    if (uVar5 < 0x40) {
                        if ((uVar5 & 0xfffffff8) != 0) {
                            uVar5 = uVar5 & 0xfffffff8;
                        }
                    }
                    else {
                        uVar5 = 0x40;
                    }
                }
                if (arg_8h == 2) {
                    if (((arg_10h & 0xffff0000U) != 0) && (((uStack_24 | arg_10h) & 0xffff) == 0)) {
                        if ((*(in_ECX + 0x4c) == '\0') || (uStack_24 < *(in_ECX + 0x50))) {
                            uVar5 = *(in_ECX + 0x3c);
                        }
                        else {
                            uVar5 = *(in_ECX + 0x40);
                        }
                        if ((uVar5 & 0x20000000) != 0) {
                            uVar5 = 0x10000;
                            uStack_30 = 0x80000;
                            goto code_r0x00007906;
                        }
                    }
                    uVar5 = 0x1000;
                    uStack_30 = 0x60000;
                }
                else {
code_r0x00007906:
                    if ((arg_8h == 1) || (arg_8h == 5)) {
                        uVar3 = 0;
                        if ((uVar5 & 7) == 0) {
                            if (uVar5 != 0) {
                                do {
                                    *(iVar2 + 0x10 + uVar3) = *(uVar3 + arg_14h);
                                    uVar3 = uVar3 + 4;
                                } while (uVar3 < uVar5);
                                goto code_r0x00007949;
                            }
                        }
                        else if (uVar5 != 0) {
                            do {
                                *(iVar2 + 0x10 + uVar3) = *(uVar3 + arg_14h);
                                uVar3 = uVar3 + 1;
                            } while (uVar3 < uVar5);
code_r0x00007949:
                            iVar7 = iStack_20;
                        }
                    }
                }
                *(iVar2 + 8) = uStack_24 & 0x7ffffff;
                *(iVar2 + 4) = (uVar5 - 1 & 0x3f) << 0x18 | *(iVar2 + 4) & 0xc0e1ffff | uStack_30 | 0x10000;
                cVar1 = fcn.0000768a(1);
                uVar6 = extraout_EDX_00;
                if (cVar1 == '\0') goto code_r0x000079fb;
                if ((((arg_8h == 0) || (arg_8h == 3)) || (arg_8h == 4)) || (arg_8h == 6)) {
                    uVar3 = 0;
                    if ((uVar5 & 7) == 0) {
                        if (uVar5 != 0) {
                            do {
                                *(uVar3 + arg_14h) = *(iVar2 + 0x10 + uVar3);
                                uVar3 = uVar3 + 4;
                            } while (uVar3 < uVar5);
                        }
                    }
                    else if (uVar5 != 0) {
                        do {
                            *(uVar3 + arg_14h) = *(iVar2 + 0x10 + uVar3);
                            uVar3 = uVar3 + 1;
                        } while (uVar3 < uVar5);
                    }
                }
                uStack_24 = uStack_24 + uVar5;
                uVar9 = CONCAT44(uStack_24,iVar7);
                arg_14h = arg_14h + uVar5;
                arg_10h = arg_10h - uVar5;
            } while (arg_10h != 0);
            goto code_r0x00007a00;
        }
        if (arg_8h == 1) {
            uStack_30 = 0x40000;
            goto code_r0x00007872;
        }
        if (arg_8h != 2) {
            if (arg_8h == 3) {
                uStack_30 = 0xa0000;
            }
            else if (arg_8h == 4) {
                uStack_30 = 0xc0000;
            }
            else if (arg_8h == 5) {
                uStack_30 = 0xe0000;
            }
            else {
                if (arg_8h != 6) goto code_r0x000077ec;
                uStack_30 = 0x100000;
            }
            goto code_r0x00007872;
        }
        if (((uStack_24 | arg_10h) & 0xfff) == 0) goto code_r0x00007872;
        uVar6 = 0x80000002;
    }
    fcn.0000236b(0xfd0dc,0);
    fcn.0000238f(iStack_18,iStack_1c);
    uVar4 = extraout_var;
code_r0x00007a2a:
    out(iStack_14,uStack_c);
    return CONCAT44(CONCAT22(uVar4,iStack_14),uVar6);
}


/* fcn.00007630 @ 0x7630 */

void __fastcall fcn.00007630(int16_t param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar1 = in(param_1 + 8);
    uVar3 = (uVar1 & 0xffffff) + 1 + (param_2 * 0x166) / 100;
    uVar4 = uVar3 >> 0x18;
    uVar1 = uVar1 & 0xffffff;
    while ((uVar4 != 0 || (uVar1 < (uVar3 & 0xffffff)))) {
        uVar2 = in(param_1 + 8);
        if ((uVar2 & 0xffffff) < uVar1) {
            if (uVar4 == 0) {
                return;
            }
            uVar4 = uVar4 - 1;
        }
        uVar1 = uVar2 & 0xffffff;
    }
    return;
}


/* fcn.0000743b @ 0x743b */

uint32_t __fastcall fcn.0000743b(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000023f2(*(param_1 + 0x38) + 0x10,*(param_1 + 0x3c) + (0xffffffef < *(param_1 + 0x38)));
    return uVar1 & 0xfffff000;
}


/* fcn.00002321 @ 0x2321 */

void __cdecl fcn.00002321(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.000022ad(arg_8h,arg_ch);
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = uVar1 | 1;
    return;
}


/* fcn.0000238f @ 0x238f */

void fcn.0000238f(int32_t param_1,int32_t param_2)

{
    fcn.000022ad(param_1,param_2);
    fcn.000022e4(param_1,param_2);
    return;
}


/* fcn.0000768a @ 0x768a */

uint32_t __fastcall fcn.0000768a(uint param_1,int param_2,char param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    
    uVar2 = 0;
    while (uVar1 = *(param_2 + 4), (uVar1 & 0x20) != 0) {
        uVar1 = fcn.00007630();
        bVar3 = 0xfffffffe < uVar2;
        uVar2 = uVar2 + 1;
        if ((bVar3) || (599999 < uVar2)) goto code_r0x000076ca;
    }
    *(param_2 + 4) = 3;
    if (((uVar1 & 2) == 0) || (param_3 != '\x01')) {
        return CONCAT31(uVar1 >> 8,1);
    }
code_r0x000076ca:
    return uVar1 & 0xffffff00;
}


/* fcn.00007b7d @ 0x7b7d */

uint __cdecl fcn.00007b7d(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    int *piVar2;
    uint32_t uVar3;
    
    if (arg_ch < 0x11) {
        if (arg_ch == 0x10) {
            *arg_10h = 0;
            *arg_14h = *(arg_8h + 0x54);
        }
        else {
            piVar2 = fcn.0000743b();
            if ((*piVar2 < 0) && (arg_ch == 1)) {
                arg_ch = 6;
            }
            if (arg_ch < 0xc) {
                uVar3 = piVar2[arg_ch + 0x15];
            }
            else {
                uVar3 = piVar2[arg_ch + 0x2c];
            }
            if (uVar3 == 0x7fff) {
                return 0x80000007;
            }
            *arg_10h = (uVar3 & 0x7fff) * 0x1000;
            *arg_14h = (uVar3 >> 4 & 0x7fff000) + (uVar3 & 0x7fff) * -0x1000 + 0x1000;
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0x80000002;
    }
    return uVar1;
}


/* fcn.0000236b @ 0x236b */

void fcn.0000236b(int32_t param_1,int32_t param_2)

{
    fcn.000022ad(param_1,param_2);
    fcn.000022e4(param_1,param_2);
    return;
}


/* fcn.00002283 @ 0x2283 */

uint32_t __fastcall fcn.00002283(uint param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000226d(param_1);
    return *(iVar1 + 4) >> 7 & 1;
}


