// decompiled by r2ghidra: 2349_IntelVTdPmrPei.te
// functions: 42

/* fcn.0000069b @ 0x69b */

uint fcn.0000069b(void)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    
    iVar1 = fcn.00000f52();
    uVar2 = (**(iVar1 + 4))(0x16d);
    if ((uVar2 & 1) == 0) {
        uVar3 = 0x80000003;
    }
    else {
        iVar1 = fcn.000010d3();
        if (iVar1 != 0) {
            *(iVar1 + 8) = *0xffd1f248;
            *(iVar1 + 0xc) = *0xffd1f24c;
            *(iVar1 + 0x10) = *0xffd1f250;
            *(iVar1 + 0x14) = *0xffd1f254;
            if (iVar1 + 0x18 != 0) {
                fcn.000000e0(iVar1 + 0x18,0x10);
                var_8h = &var_10h;
                InterruptDescriptorTableRegister();
                (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_4h);
                *(iVar1 + 0x1c) = ((var_4h != 0x11) - 1 & 0xfe100000) + 0x2100000;
                var_8h = &var_10h;
                InterruptDescriptorTableRegister();
                (**(**(stack0xffffffee + -4) + 0x24))(*(stack0xffffffee + -4),0xffd1f23c);
                if (var_4h == 0x11) {
                    var_8h = &var_10h;
                    InterruptDescriptorTableRegister();
                    (**(**(stack0xffffffee + -4) + 0x24))(*(stack0xffffffee + -4),0xffd1f220);
                }
                return 0;
            }
        }
        uVar3 = 0x80000009;
    }
    return uVar3;
}


/* entry0 @ 0x11d */

uint entry0(void)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00000f52();
    uVar2 = (**(iVar1 + 4))(0x16d);
    if ((uVar2 & 1) == 0) {
        uVar3 = 0x80000003;
    }
    else {
        iVar1 = fcn.000010d3();
        if (iVar1 != 0) {
            *(iVar1 + 8) = *0xffd1f248;
            *(iVar1 + 0xc) = *0xffd1f24c;
            *(iVar1 + 0x10) = *0xffd1f250;
            *(iVar1 + 0x14) = *0xffd1f254;
            if (iVar1 + 0x18 != 0) {
                fcn.000000e0(iVar1 + 0x18,0x10);
                var_8h = &var_10h;
                InterruptDescriptorTableRegister();
                (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_4h);
                *(iVar1 + 0x1c) = ((var_4h != 0x11) - 1 & 0xfe100000) + 0x2100000;
                var_8h = &var_10h;
                InterruptDescriptorTableRegister();
                (**(**(stack0xffffffee + -4) + 0x24))(*(stack0xffffffee + -4),0xffd1f23c);
                if (var_4h == 0x11) {
                    var_8h = &var_10h;
                    InterruptDescriptorTableRegister();
                    (**(**(stack0xffffffee + -4) + 0x24))(*(stack0xffffffee + -4),0xffd1f220);
                }
                return 0;
            }
        }
        uVar3 = 0x80000009;
    }
    return uVar3;
}


/* fcn.00001099 @ 0x1099 */

int fcn.00001099(void)

{
    char cVar1;
    int iVar2;
    
    fcn.0000104d();
    do {
        iVar2 = fcn.00001078();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00001246();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00001210 @ 0x1210 */

int __fastcall fcn.00001210(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.000009f3 @ 0x9f3 */

uint32_t __thiscall fcn.000009f3(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    
    uVar4 = 0;
    uVar5 = 0;
    if (*(param_1 + 0x14) != 0) {
        piVar3 = param_1 + 0x18;
        do {
            uVar6 = fcn.000011e1(param_1);
            if ((uVar6 & param_2) != 0 || (uVar6 >> 0x20 & param_3) != 0) {
                iVar1 = *piVar3;
                *(iVar1 + 0x68) = 0xffffffff;
                uVar2 = ~*(iVar1 + 0x68) + 1;
                if (uVar4 < uVar2) {
                    uVar4 = uVar2;
                }
            }
            uVar5 = uVar5 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar5 < *(param_1 + 0x14));
    }
    return uVar4;
}


/* fcn.00000a44 @ 0xa44 */

//WARNING: Removing unreachable block (ram,0x00000a88)

uint64_t __thiscall fcn.00000a44(int param_1,uint32_t param_2,uint32_t param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int extraout_ECX;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
    iVar3 = param_1;
    if (*(param_1 + 0x14) != 0) {
        do {
            uVar5 = fcn.000011e1(iVar3);
            uVar1 = uVar2;
            if (((uVar5 & param_2) != 0 || (uVar5 >> 0x20 & param_3) != 0) &&
               (uVar6 = fcn.000009b8(), iVar3 = extraout_ECX, uVar2 < uVar6)) {
                uVar1 = uVar6;
            }
            uVar4 = uVar4 + 1;
            uVar2 = uVar1;
        } while (uVar4 < *(param_1 + 0x14));
    }
    return uVar1;
}


/* fcn.00000f90 @ 0xf90 */

uint32_t __fastcall fcn.00000f90(uint param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_8;
    int32_t iStack_4;
    
    if (param_2 != 0) {
        if (param_3 < 0x1001) {
            iVar1 = fcn.00001187(&stack0xfffffff8);
            if (-1 < iVar1) {
                return uStack_8;
            }
        }
        else {
            iVar1 = fcn.00001187(&stack0xfffffff8);
            if (-1 < iVar1) {
                uVar2 = uStack_8 + (param_3 - 1) & ~(param_3 - 1);
                iVar1 = ((uVar2 - uStack_8 & 0xfff) != 0) + (uVar2 - uStack_8 >> 0xc);
                if (iVar1 != 0) {
                    fcn.000011b2(uStack_8,iStack_4);
                }
                iStack_4 = 0;
                uStack_8 = param_2 * 0x1000 + uVar2;
                if (((param_3 >> 0xc) + ((param_3 & 0xfff) != 0) + param_2) - iVar1 != param_2) {
                    fcn.000011b2(uStack_8,0);
                }
                return uVar2;
            }
        }
    }
    return 0;
}


/* fcn.000011e1 @ 0x11e1 */

ulong __fastcall fcn.000011e1(uint8_t param_1)

{
    bool bVar1;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    bVar1 = (param_1 & 0x20) == 0;
    return CONCAT44(!bVar1 << (param_1 & 0x1f) | bVar1 >> 0x20 - (param_1 & 0x1f),bVar1 << (param_1 & 0x1f));
}


/* fcn.00001159 @ 0x1159 */

void __cdecl fcn.00001159(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001130 @ 0x1130 */

void fcn.00001130(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd1f260);
    return;
}


/* fcn.00000c02 @ 0xc02 */

int __fastcall
fcn.00000c02(uint32_t param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    uint32_t uVar4;
    ulong uVar5;
    
    uVar4 = 0;
    if (*(param_1 + 0x14) != 0) {
        piVar3 = param_1 + 0x18;
        uVar2 = param_1;
        do {
            uVar5 = fcn.000011e1(uVar2);
            if ((uVar5 & param_3) != 0 || (uVar5 >> 0x20 & param_4) != 0) {
                fcn.00000aa5();
                iVar1 = fcn.00000ad6(param_2,param_5,param_6,param_7,param_8,param_9);
                if (iVar1 < 0) {
                    return iVar1;
                }
                iVar1 = *piVar3;
                uVar2 = *(iVar1 + 8) & 0xffffff60;
                if (uVar2 != '`') {
                    return -0x7ffffffd;
                }
                if ((*(iVar1 + 100) & 1) == 0) {
                    *(iVar1 + 100) = 0x80000000;
                    do {
                    } while ((*(iVar1 + 100) & 1) == 0);
                }
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar4 < *(param_1 + 0x14));
    }
    return 0;
}


/* fcn.000011b2 @ 0x11b2 */

void __cdecl fcn.000011b2(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
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


/* fcn.00000d4b @ 0xd4b */

uint __fastcall fcn.00000d4b(int param_1)

{
    int *piVar1;
    int16_t *piVar2;
    uint extraout_ECX;
    int16_t *piVar3;
    int iVar4;
    int64_t iVar5;
    
    iVar4 = 0;
    piVar3 = param_1 + 0x30;
    piVar2 = *(param_1 + 4) + param_1;
    if (piVar3 < piVar2) {
        do {
            if (*piVar3 == 0) {
                iVar4 = iVar4 + 1;
            }
            piVar3 = piVar3 + piVar3[1];
        } while (piVar3 < piVar2);
        piVar3 = param_1 + 0x30;
        if (iVar4 != 0) {
            piVar1 = fcn.0000110c();
            if (piVar1 == NULL) {
                return 0x80000009;
            }
            *piVar1 = param_1;
            iVar5 = fcn.000011e1(extraout_ECX,extraout_ECX);
            *(piVar1 + 2) = iVar5 + -1;
            *(piVar1 + 4) = *(param_1 + 0x24);
            piVar1[5] = iVar4;
            if (piVar3 < *(param_1 + 4) + param_1) {
                piVar1 = piVar1 + 6;
                do {
                    if (*piVar3 == 0) {
                        *piVar1 = *(piVar3 + 4);
                        piVar1[1] = *(piVar3 + 6);
                        piVar1 = piVar1 + 2;
                    }
                    piVar3 = piVar3 + piVar3[1];
                } while (piVar3 < *(param_1 + 4) + param_1);
            }
            return 0;
        }
    }
    return 0x80000003;
}


/* fcn.00000e99 @ 0xe99 */

void __fastcall fcn.00000e99(int param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    
    if ((*(param_2 + 8) != 0 || *(param_2 + 0xc) != 0) && (*(param_2 + 0x10) != 0 || *(param_2 + 0x14) != 0)) {
        for (uVar3 = param_2 + 0x18; uVar3 < *(param_2 + 2) + param_2; uVar3 = uVar3 + *(uVar3 + 1)) {
            uVar4 = uVar3;
            iVar2 = fcn.00000dff(uVar3);
            if (iVar2 != -1) {
                uVar5 = fcn.000011e1(uVar4,uVar4);
                uVar1 = *(param_2 + 8);
                uVar4 = *(param_2 + 0x10) + 1;
                uVar6 = fcn.000011e1();
                fcn.00000c02(uVar5,uVar1,uVar4,0,uVar6 - uVar4,(uVar6 >> 0x20) - (uVar6 < uVar4));
                *(param_1 + 8) = *(param_1 + 8) & ~uVar5;
                *(param_1 + 0xc) = *(param_1 + 0xc) & ~(uVar5 >> 0x20);
            }
        }
    }
    return;
}


/* fcn.00000f52 @ 0xf52 */

int32_t fcn.00000f52(void)

{
    int32_t var_4h;
    
    fcn.00001159(0,&var_4h);
    return var_4h;
}


/* fcn.00000c98 @ 0xc98 */

int __thiscall fcn.00000c98(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    int extraout_ECX;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    
    uVar3 = 0;
    iVar2 = param_1;
    if (*(param_1 + 0x14) != 0) {
        do {
            uVar4 = fcn.000011e1(iVar2);
            if (((uVar4 & param_2) != 0 || (uVar4 >> 0x20 & param_3) != 0) &&
               (iVar1 = fcn.00000aa5(), iVar2 = extraout_ECX, iVar1 < 0)) {
                return iVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(param_1 + 0x14));
    }
    return 0;
}


/* fcn.00000454 @ 0x454 */

int fcn.00000454(void)

{
    uint8_t *puVar1;
    uint16_t *puVar2;
    int16_t *piVar3;
    int iVar4;
    int iVar5;
    int16_t *piVar6;
    int32_t var_4h;
    
    fcn.00001159(0,&var_4h);
    if (var_4h != 0) {
        piVar3 = var_4h + 0x30;
        for (iVar4 = *(var_4h + 4) + -0x30; 0 < iVar4; iVar4 = iVar4 - *puVar2) {
            if (*piVar3 == 0) {
                piVar6 = piVar3 + 8;
                for (iVar5 = piVar3[1] - 0x10; 0 < iVar5; iVar5 = iVar5 - *puVar1) {
                    puVar1 = piVar6 + 1;
                    piVar6 = piVar6 + *puVar1;
                }
            }
            else if (*piVar3 == 1) {
                piVar6 = piVar3 + 0xc;
                for (iVar5 = piVar3[1] - 0x18; 0 < iVar5; iVar5 = iVar5 - *puVar1) {
                    puVar1 = piVar6 + 1;
                    piVar6 = piVar6 + *puVar1;
                }
            }
            puVar2 = piVar3 + 1;
            piVar3 = piVar3 + *puVar2;
        }
    }
    iVar4 = fcn.00001099();
    if (iVar4 != 0) {
        fcn.000000e0(iVar4 + 8,0x10);
    }
    iVar4 = fcn.00000d4b();
    if (-1 < iVar4) {
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00000cd8 @ 0xcd8 */

ulong __thiscall fcn.00000cd8(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int *piStack_c;
    
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    if (*(param_1 + 0x14) != 0) {
        piStack_c = param_1 + 0x18;
        uVar1 = param_1;
        do {
            uVar5 = fcn.000011e1(uVar1);
            if ((uVar5 & param_2) != 0 || (uVar5 >> 0x20 & param_3) != 0) {
                uVar1 = *(*piStack_c + 8) & 0xffffff60;
                if ((uVar1 == '`') && ((*(*piStack_c + 100) & 1) != 0)) {
                    uVar5 = fcn.000011e1(uVar1);
                    uVar3 = uVar3 | uVar5;
                    uVar2 = uVar2 | uVar5 >> 0x20;
                }
            }
            piStack_c = piStack_c + 2;
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(param_1 + 0x14));
    }
    return CONCAT44(uVar2,uVar3);
}


/* fcn.00000879 @ 0x879 */

uint __cdecl fcn.00000879(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint uVar2;
    int in_ECX;
    int32_t *extraout_ECX;
    int32_t *arg_ch_00;
    uint32_t uVar3;
    ulong uVar4;
    int32_t var_4h;
    
    arg_ch_00 = &var_4h;
    uVar3 = 0;
    iVar1 = fcn.00001159(0,arg_ch_00);
    if (iVar1 < 0) {
        uVar2 = 0x80000003;
    }
    else {
        if (*(in_ECX + 0x14) != 0) {
            do {
                uVar4 = fcn.000011e1(arg_ch_00);
                if ((uVar4 & arg_8h) != 0 || (uVar4 >> 0x20 & arg_ch) != 0) {
                    fcn.000007b2();
                    arg_ch_00 = extraout_ECX;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(in_ECX + 0x14));
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0000093b @ 0x93b */

void __thiscall fcn.0000093b(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint32_t uVar4;
    ulong uVar5;
    
    uVar4 = 0;
    if (*(param_1 + 0x14) != 0) {
        piVar3 = param_1 + 0x18;
        iVar2 = param_1;
        do {
            uVar5 = fcn.000011e1(iVar2);
            if ((uVar5 & param_2) != 0 || (uVar5 >> 0x20 & param_3) != 0) {
                iVar1 = *piVar3;
                fcn.0000078e();
                *(iVar1 + 0x18) = *(iVar1 + 0x1c) & 0x16ffffff;
                do {
                } while (*(iVar1 + 0x1c) < 0);
                iVar2 = 0x40000000;
                *(iVar1 + 0x18) = *(iVar1 + 0x1c) & 0xd6ffffff | 0x40000000;
                do {
                } while ((*(iVar1 + 0x1c) & 0x40000000) == 0);
                *(iVar1 + 0x20) = 0;
                *(iVar1 + 0x24) = 0;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar4 < *(param_1 + 0x14));
    }
    return;
}


/* fcn.000008db @ 0x8db */

void __thiscall fcn.000008db(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint uVar2;
    uint32_t uVar3;
    ulong uVar4;
    
    iVar1 = fcn.00000f6f();
    if (iVar1 != 0) {
        fcn.000000e0(iVar1,0x1000);
        fcn.0000126a();
        uVar3 = 0;
        uVar2 = extraout_ECX;
        if (*(param_1 + 0x14) != 0) {
            do {
                uVar4 = fcn.000011e1(uVar2);
                if ((uVar4 & param_2) != 0 || (uVar4 >> 0x20 & param_3) != 0) {
                    fcn.000007b2();
                    uVar2 = extraout_ECX_00;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(param_1 + 0x14));
        }
    }
    return;
}


/* fcn.000004f9 @ 0x4f9 */

int fcn.000004f9(void)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint unaff_EBX;
    int iVar9;
    uint unaff_ESI;
    int16_t *piVar10;
    uint unaff_EDI;
    ulong uVar11;
    int64_t iVar12;
    uint uStack_1c;
    int iStack_18;
    uint uStack_14;
    uchar *puStack_10;
    ushort uStack_8;
    ushort uStack_6;
    ushort uStack_4;
    ushort uStack_2;
    
    uStack_4 = unaff_EBX;
    uStack_2 = unaff_EBX >> 0x10;
    uStack_8 = unaff_ESI;
    uStack_6 = unaff_ESI >> 0x10;
    puStack_10 = 0x506;
    iVar7 = fcn.00001099();
    iVar3 = *(iVar7 + 0x18);
    for (piVar10 = iVar3 + 0x30; piVar10 < *(iVar3 + 4) + iVar3; piVar10 = piVar10 + piVar10[1]) {
        if (*piVar10 == 1) {
            puStack_10 = 0x522;
            fcn.00000e99();
        }
    }
    iVar3 = fcn.00001099(unaff_EDI,CONCAT22(uStack_6,uStack_8));
    iVar4 = fcn.00001099();
    if (iVar4 == 0) {
        uVar5 = fcn.000009f3(*(iVar7 + 0x20),*(iVar7 + 0x24));
        uVar11 = fcn.00000a44(*(iVar7 + 0x20),*(iVar7 + 0x24));
        uVar8 = uVar11;
        if ((uVar11 >> 0x20 == 0) && (uVar8 <= uVar5)) {
            uVar8 = uVar5;
        }
        iVar6 = fcn.00000f90(uVar8);
        *(iVar3 + 0x18) = iVar6;
        if (iVar6 == 0) {
            return -0x7ffffff7;
        }
        uStack_1c = 0;
        iStack_18 = 0;
        iVar9 = *(iVar3 + 0x1c) + iVar6;
        iVar4 = *(iVar7 + 0x28) + 1;
        iVar12 = fcn.000011e1(iVar4,iVar4);
    }
    else {
        *(iVar3 + 0x18) = *(iVar4 + 0x1c);
        iStack_18 = *(iVar4 + 0x18);
        iVar6 = *(iVar4 + 0x1c);
        iVar9 = *(iVar4 + 0x20);
        uStack_1c = *(iVar4 + 0x24);
        iVar12 = *(iVar4 + 0x28);
    }
    *(iVar3 + 0x24) = *(iVar3 + 0x18);
    *(iVar3 + 0x20) = *(iVar3 + 0x1c) + *(iVar3 + 0x18);
    iVar4 = fcn.00001159(&stack0xffffffec,&stack0xfffffff4);
    if (iVar4 < 0) {
        fcn.00001130();
    }
    else {
        puStack_10 = &stack0xfffffff8;
        uVar1 = InterruptDescriptorTableRegister();
        uStack_6 = uVar1 >> 0x10;
        uStack_8 = uVar1;
        piVar2 = *(CONCAT22(uStack_4,uStack_6) + -4);
        (**(*piVar2 + 0x1c))(piVar2,uStack_14,0xffd1f260);
    }
    iVar7 = fcn.00000c02(*(iVar7 + 0x20),*(iVar7 + 0x24),iVar6 - iStack_18,iVar9,uStack_1c,
                         iVar12 - CONCAT44(uStack_1c,iVar9));
    if (iVar7 < 0) {
        fcn.000011b2(*(iVar3 + 0x18),0);
    }
    return iVar7;
}


/* fcn.000010d3 @ 0x10d3 */

int32_t __fastcall fcn.000010d3(uint param_1,uint param_2)

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


/* fcn.0000078e @ 0x78e */

uint32_t __fastcall fcn.0000078e(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0xc);
    if ((*(param_1 + 8) & 0x10) != 0) {
        *(param_1 + 0x18) = *(param_1 + 0x1c) | 0x8000000;
        do {
            uVar1 = *(param_1 + 0x1c);
        } while ((uVar1 & 0x8000000) != 0);
    }
    return uVar1;
}


/* fcn.000007b2 @ 0x7b2 */

int64_t __fastcall fcn.000007b2(int param_1,uint param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    *(param_1 + 0x20) = param_2;
    *(param_1 + 0x24) = 0;
    *(param_1 + 0x18) = 0x40000000;
    do {
    } while ((*(param_1 + 0x1c) & 0x40000000) == 0);
    fcn.0000078e();
    if (-1 < *(param_1 + 0x2c)) {
        *(param_1 + 0x28) = *(param_1 + 0x28);
        *(param_1 + 0x2c) = *(param_1 + 0x2c) & 0x1fffffff | 0xa0000000;
        do {
        } while (*(param_1 + 0x2c) < 0);
    }
    uVar3 = *(param_1 + 0x10);
    uVar2 = uVar3 >> 8 & 0x3ff;
    uVar4 = *(param_1 + 8 + uVar2 * 0x10);
    uVar1 = *(param_1 + 0xc + uVar2 * 0x10);
    if (-1 < uVar1) {
        *(param_1 + 8 + uVar2 * 0x10) = uVar4;
        *(param_1 + 0xc + uVar2 * 0x10) = uVar1 & 0xdfffffff | 0x90000000;
        uVar3 = uVar3 >> 8 & 0x3ff;
        do {
            uVar4 = *(param_1 + 8 + uVar3 * 0x10);
        } while (*(param_1 + 0xc + uVar3 * 0x10) < 0);
    }
    *(param_1 + 0x18) = 0x80000000;
    do {
    } while (-1 < *(param_1 + 0x1c));
    return uVar4 << 0x20;
}


/* fcn.00000f6f @ 0xf6f */

int32_t fcn.00000f6f(void)

{
    int iVar1;
    int32_t var_8h;
    
    iVar1 = fcn.00001187(&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.0000126a @ 0x126a */

int __fastcall fcn.0000126a(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    fcn.000012f1(&var_8h,param_1,&var_4h);
    if ((var_4h & 0x80000U) != 0) {
        uVar2 = var_8h >> 5 & 0x7f8;
        do {
            iVar1 = fcn.000012c5();
        } while (iVar1 + uVar2 != (param_1 + 0xfff + uVar2 & ~(uVar2 - 1)));
    }
    return param_1;
}


/* fcn.000009b8 @ 0x9b8 */

ulong __fastcall fcn.000009b8(uchar param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    
    *(param_2 + 0x70) = 0xffffffff;
    *(param_2 + 0x74) = 0xffffffff;
    uVar1 = *(param_2 + 0x70);
    uVar2 = *(param_2 + 0x74);
    iVar3 = fcn.000011e1(param_1,param_1);
    return CONCAT44(iVar3 + -1 >> 0x20 & ~uVar2 + (0xfffffffe < ~uVar1),iVar3 + -1 & ~uVar1 + 1);
}


/* fcn.00000aa5 @ 0xaa5 */

uint __fastcall fcn.00000aa5(int param_1)

{
    uint uVar1;
    
    if ((*(param_1 + 8) & 0x60) == 0x60) {
        if ((*(param_1 + 100) & 1) != 0) {
            *(param_1 + 100) = 0;
            do {
            } while ((*(param_1 + 100) & 1) != 0);
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.00000ad6 @ 0xad6 */

uint __fastcall
fcn.00000ad6(uint param_1,int param_2,int param_3,int param_4,uint32_t param_5,int param_6,uint32_t param_7,
            int param_8)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    iVar2 = CONCAT44(param_6,param_5);
    iVar1 = CONCAT44(param_8,param_7);
    if ((*(param_2 + 8) & 0x60) == 0x60) {
        *(param_2 + 0x68) = 0xffffffff;
        uVar3 = ~*(param_2 + 0x68);
        iVar4 = fcn.000009b8();
        if ((((param_3 == ((uVar3 + 1) - param_3 & uVar3) + param_3) &&
             (param_4 == ((uVar3 + 1) - param_4 & uVar3) + param_4)) && ((iVar4 - 1U & iVar4 - iVar2) + iVar2 == iVar2))
           && ((iVar4 - 1U & iVar4 - iVar1) + iVar1 == iVar1)) {
            if ((param_3 == 0) && (param_4 == 0)) {
                param_3 = -1;
            }
            if ((param_5 == 0 && param_6 == 0) && (param_7 == 0 && param_8 == 0)) {
                param_5 = 0xffffffff;
                param_6 = -1;
            }
            *(param_2 + 0x68) = param_3;
            *(param_2 + 0x6c) = param_4 + -1 + param_3;
            *(param_2 + 0x70) = param_5;
            *(param_2 + 0x74) = param_6;
            *(param_2 + 0x78) = param_5 + param_7 + -1;
            *(param_2 + 0x7c) = param_6 + param_8 + CARRY4(param_5,param_7) + -1 + (param_5 + param_7 != 0);
            return 0;
        }
    }
    return 0x80000003;
}


/* fcn.0000110c @ 0x110c */

int fcn.0000110c(void)

{
    int iVar1;
    
    iVar1 = fcn.000010d3();
    if (iVar1 != 0) {
        fcn.0000122d();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.0000122d @ 0x122d */

uint * __fastcall fcn.0000122d(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000100 @ 0x100 */

int fcn.00000100(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00000dff @ 0xdff */

uint __fastcall fcn.00000dff(int param_1,int16_t param_2,int16_t *param_3)

{
    char cVar1;
    int iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int8_t var_1h;
    
    piVar3 = param_1 + 0x30;
    if (piVar3 < *(param_1 + 4) + param_1) {
        do {
            if ((((*piVar3 == 0) && (piVar3[3] == param_2)) && (piVar3[1] != 0x10)) &&
               (((*(piVar3 + 2) & 1) == 0 && (piVar4 = piVar3 + 8, piVar4 < piVar3[1] + piVar3)))) {
                do {
                    iVar2 = 0;
                    cVar1 = *(param_3 + 1);
                    if (*(piVar4 + 1) == cVar1) {
                        if ((cVar1 != '\0') && (piVar4 != param_3)) {
                            iVar2 = fcn.00000100(piVar4,param_3,cVar1);
                        }
                        if (iVar2 == 0) {
                            return 0;
                        }
                    }
                    piVar4 = piVar4 + *(piVar4 + 1);
                } while (piVar4 < piVar3[1] + piVar3);
            }
            piVar3 = piVar3 + piVar3[1];
        } while (piVar3 < *(param_1 + 4) + param_1);
    }
    return 0xffffffff;
}


/* fcn.00001187 @ 0x1187 */

void __cdecl fcn.00001187(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.0000104d @ 0x104d */

int32_t fcn.0000104d(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00001246 @ 0x1246 */

uint32_t __fastcall fcn.00001246(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001078 @ 0x1078 */

int16_t * __fastcall fcn.00001078(uint param_1,int16_t *param_2)

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


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 4754 named .text
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


/* fcn.000012f1 @ 0x12f1 */

//WARNING: Removing unreachable block (ram,0x00001312)
//WARNING: Removing unreachable block (ram,0x0000130a)
//WARNING: Removing unreachable block (ram,0x00001321)

uint __cdecl fcn.000012f1(int32_t arg_8h,uint noname_1,int32_t arg_10h)

{
    int iVar1;
    uint uVar2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Version_info(1);
    uVar2 = *(iVar1 + 8);
    if (arg_8h != 0) {
        *arg_8h = *(iVar1 + 4);
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return 1;
}


/* fcn.000012c5 @ 0x12c5 */

//WARNING: Removing unreachable block (ram,0x000012d5)

uchar * __fastcall fcn.000012c5(uchar *param_1)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = cpuid_Version_info(1);
    if ((*(iVar1 + 8) & 0x80000) != 0) {
        clflush(*param_1);
    }
    return param_1;
}


