// decompiled by r2ghidra: 2419_UfsPciHcPei.te
// functions: 8

/* fcn.000001ab @ 0x1ab */

uint __fastcall fcn.000001ab(uint param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint *puVar3;
    uint uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    int iStack_50;
    int iStack_4c;
    uint32_t uStack_48;
    int iStack_44;
    uint32_t uStack_40;
    uchar *puStack_3c;
    uint32_t uStack_38;
    int iStack_34;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint *puStack_1c;
    uchar auStack_18 [2];
    int iStack_16;
    uchar auStack_10 [2];
    int iStack_e;
    
    out(0x80,0xf020);
    puStack_3c = auStack_18;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(iStack_16 + -4) + 0x74))(param_1);
    if (iVar2 < 0) {
        puStack_3c = auStack_10;
        InterruptDescriptorTableRegister();
        (**(**(iStack_e + -4) + 0x28))(*(iStack_e + -4),&iStack_50);
        if ((iStack_50 != 0x11) && (iStack_50 == 0x12)) {
            puVar3 = fcn.00000487();
            if (puVar3 == NULL) {
                return 0x80000009;
            }
            *puVar3 = 0x50534655;
            puVar3[1] = *0xffd4887c;
            puStack_1c = puVar3 + 2;
            puStack_3c = 0x100;
            uStack_40 = 0;
            *puStack_1c = *0xffd4888c;
            puVar3[3] = *0xffd48890;
            puVar3[4] = *0xffd48894;
            puVar3[4] = puVar3 + 1;
            do {
                uStack_20 = (uStack_40 & 0xff) << 5;
                uStack_48 = 0;
                iStack_44 = 0x20;
                do {
                    uStack_24 = (uStack_48 & 0x1f | uStack_20) << 3;
                    uVar5 = 0;
                    iStack_4c = 8;
                    do {
                        uVar7 = (uVar5 & 7 | uStack_24) << 0xc;
                        if ((*((uVar7 | 10) + 0xc0000000) == '\t') && (*((uVar7 | 0xb) + 0xc0000000) == '\x01')) {
                            out(0x80,0xf021);
                            uStack_2c = uVar7 | 4;
                            *(uStack_2c + 0xc0000000) = *(uStack_2c + 0xc0000000) & 0xfff9;
                            uStack_28 = uVar7 | 0x10;
                            *(uStack_28 + 0xc0000000) = 0xffffffff;
                            uVar6 = *(uStack_28 + 0xc0000000);
                            if ((uVar6 & 7) == 0) {
                                uVar6 = ~(uVar6 & 0xfffffff0);
                                iStack_34 = 0;
                            }
                            else {
                                if ((uVar6 & 7) != 4) goto code_r0x000003c2;
                                uVar7 = uVar7 | 0x14;
                                uStack_38 = uVar6 & 0xfffffff0;
                                *(uVar7 + 0xc0000000) = 0xffffffff;
                                uVar6 = *(uVar7 + 0xc0000000);
                                uVar1 = fcn.00000415();
                                uVar8 = fcn.0000042a(-1 << (uVar1 & 0x1f) | uVar6,0);
                                uVar6 = ~(uVar8 | uStack_38);
                                *(uVar7 + 0xc0000000) = 0;
                                iStack_34 = ~(uVar8 >> 0x20) + (0xfffffffe < uVar6);
                            }
                            *(uStack_28 + 0xc0000000) = puVar3[5] * (uVar6 + 1) + -0x6e000000;
                            *(uStack_2c + 0xc0000000) = *(uStack_2c + 0xc0000000) | 6;
                            puVar3[puVar3[5] + 6] = puVar3[5] * (uVar6 + 1) + -0x6e000000;
                            puVar3[5] = puVar3[5] + 1;
                        }
code_r0x000003c2:
                        uVar5 = uVar5 + 1;
                        iStack_4c = iStack_4c + -1;
                    } while (iStack_4c != 0);
                    uStack_48 = uStack_48 + 1;
                    iStack_44 = iStack_44 + -1;
                } while (iStack_44 != 0);
                uStack_40 = uStack_40 + 1;
                puStack_3c = puStack_3c + -1;
                if (puStack_3c == NULL) {
                    uVar4 = fcn.0000049b();
                    return uVar4;
                }
            } while( true );
        }
    }
    return 0;
}


/* entry0 @ 0x179 */

uint entry0(uint param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint *puVar3;
    uint uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    int iStack_50;
    int iStack_4c;
    uint32_t uStack_48;
    int iStack_44;
    uint32_t uStack_40;
    uchar *puStack_3c;
    uint32_t uStack_38;
    int iStack_34;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint *puStack_1c;
    uchar auStack_18 [2];
    int iStack_16;
    uchar auStack_10 [2];
    int iStack_e;
    
    out(0x80,0xf020);
    puStack_3c = auStack_18;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(iStack_16 + -4) + 0x74))(param_1);
    if (iVar2 < 0) {
        puStack_3c = auStack_10;
        InterruptDescriptorTableRegister();
        (**(**(iStack_e + -4) + 0x28))(*(iStack_e + -4),&iStack_50);
        if ((iStack_50 != 0x11) && (iStack_50 == 0x12)) {
            puVar3 = fcn.00000487();
            if (puVar3 == NULL) {
                return 0x80000009;
            }
            *puVar3 = 0x50534655;
            puVar3[1] = *0xffd4887c;
            puStack_1c = puVar3 + 2;
            puStack_3c = 0x100;
            uStack_40 = 0;
            *puStack_1c = *0xffd4888c;
            puVar3[3] = *0xffd48890;
            puVar3[4] = *0xffd48894;
            puVar3[4] = puVar3 + 1;
            do {
                uStack_20 = (uStack_40 & 0xff) << 5;
                uStack_48 = 0;
                iStack_44 = 0x20;
                do {
                    uStack_24 = (uStack_48 & 0x1f | uStack_20) << 3;
                    uVar5 = 0;
                    iStack_4c = 8;
                    do {
                        uVar7 = (uVar5 & 7 | uStack_24) << 0xc;
                        if ((*((uVar7 | 10) + 0xc0000000) == '\t') && (*((uVar7 | 0xb) + 0xc0000000) == '\x01')) {
                            out(0x80,0xf021);
                            uStack_2c = uVar7 | 4;
                            *(uStack_2c + 0xc0000000) = *(uStack_2c + 0xc0000000) & 0xfff9;
                            uStack_28 = uVar7 | 0x10;
                            *(uStack_28 + 0xc0000000) = 0xffffffff;
                            uVar6 = *(uStack_28 + 0xc0000000);
                            if ((uVar6 & 7) == 0) {
                                uVar6 = ~(uVar6 & 0xfffffff0);
                                iStack_34 = 0;
                            }
                            else {
                                if ((uVar6 & 7) != 4) goto code_r0x000003c2;
                                uVar7 = uVar7 | 0x14;
                                uStack_38 = uVar6 & 0xfffffff0;
                                *(uVar7 + 0xc0000000) = 0xffffffff;
                                uVar6 = *(uVar7 + 0xc0000000);
                                uVar1 = fcn.00000415();
                                uVar8 = fcn.0000042a(-1 << (uVar1 & 0x1f) | uVar6,0);
                                uVar6 = ~(uVar8 | uStack_38);
                                *(uVar7 + 0xc0000000) = 0;
                                iStack_34 = ~(uVar8 >> 0x20) + (0xfffffffe < uVar6);
                            }
                            *(uStack_28 + 0xc0000000) = puVar3[5] * (uVar6 + 1) + -0x6e000000;
                            *(uStack_2c + 0xc0000000) = *(uStack_2c + 0xc0000000) | 6;
                            puVar3[puVar3[5] + 6] = puVar3[5] * (uVar6 + 1) + -0x6e000000;
                            puVar3[5] = puVar3[5] + 1;
                        }
code_r0x000003c2:
                        uVar5 = uVar5 + 1;
                        iStack_4c = iStack_4c + -1;
                    } while (iStack_4c != 0);
                    uStack_48 = uStack_48 + 1;
                    iStack_44 = iStack_44 + -1;
                } while (iStack_44 != 0);
                uStack_40 = uStack_40 + 1;
                puStack_3c = puStack_3c + -1;
                if (puStack_3c == NULL) {
                    uVar4 = fcn.0000049b();
                    return uVar4;
                }
            } while( true );
        }
    }
    return 0;
}


/* fcn.00000487 @ 0x487 */

void fcn.00000487(void)

{
    int iVar1;
    
    iVar1 = fcn.00000451();
    if (iVar1 != 0) {
        fcn.000000e0(iVar1,0x38);
    }
    return;
}


/* fcn.00000451 @ 0x451 */

int32_t fcn.00000451(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),0x38,&var_8h);
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


/* fcn.00000415 @ 0x415 */

int __fastcall fcn.00000415(int param_1)

{
    int iVar1;
    
    if (param_1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < param_1; param_1 = param_1 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.0000042a @ 0x42a */

//WARNING: Removing unreachable block (ram,0x00000443)

int64_t __cdecl fcn.0000042a(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.0000049b @ 0x49b */

void __fastcall fcn.0000049b(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


