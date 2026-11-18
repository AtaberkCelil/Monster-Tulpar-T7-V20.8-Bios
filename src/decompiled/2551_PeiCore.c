// decompiled by r2ghidra: 2551_PeiCore.te
// functions: 98

/* entry0 @ 0x23d */

void __cdecl entry0(int32_t arg_8h,int32_t arg_ch)

{
    fcn.0000031c(arg_8h,arg_ch,0);
    fcn.000046cd();
    return;
}


/* fcn.0000031c @ 0x31c */

void __cdecl fcn.0000031c(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h)

{
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    code *pcVar5;
    int iVar6;
    uint noname_0;
    uint noname_0_00;
    uint32_t uVar7;
    uint **arg_ch_00;
    uint *puStack_2fc;
    int iStack_2f6;
    uint *puStack_2f0;
    uchar auStack_2ec [36];
    uint uStack_2c8;
    uchar *apuStack_2c4 [23];
    uchar uStack_266;
    int iStack_264;
    uchar uStack_260;
    char cStack_25f;
    uchar auStack_250 [136];
    uint uStack_1c8;
    
    if (arg_10h == 0) {
        fcn.00000120(&uStack_2c8,0x2c0);
        uStack_2c8 = 0x43696550;
        fcn.00004b8b(auStack_250,0xfffc6224,0x88);
    }
    else {
        if (*(arg_10h + 0x148) == 0) {
            *(arg_10h + 4) = arg_10h + 0x78;
            *(arg_10h + 0x6c) = arg_10h + 0xd8;
            if (*(arg_10h + 0x124) == '\0') {
                iVar6 = *(arg_10h + 0x120);
                *(arg_10h + 100) = *(arg_10h + 100) - iVar6;
                if (*(arg_10h + 0x40) != 0) {
                    *(arg_10h + 0x40) = *(arg_10h + 0x40) - iVar6;
                }
                if (*(arg_10h + 0x4c) != 0) {
                    *(arg_10h + 0x4c) = *(arg_10h + 0x4c) - iVar6;
                }
                if (*(arg_10h + 0x14) != 0) {
                    *(arg_10h + 0x14) = *(arg_10h + 0x14) - iVar6;
                }
                if (*(arg_10h + 0x20) != 0) {
                    *(arg_10h + 0x20) = *(arg_10h + 0x20) - iVar6;
                }
                if (*(arg_10h + 0x30) != 0) {
                    *(arg_10h + 0x30) = *(arg_10h + 0x30) - iVar6;
                }
                *(arg_10h + 0x3c) = *(arg_10h + 0x3c) - iVar6;
                uVar7 = 0;
                if (*(arg_10h + 0x34) != 0) {
                    iVar6 = 0;
                    do {
                        iVar2 = *(iVar6 + 0x10 + *(arg_10h + 0x3c));
                        if (iVar2 != 0) {
                            *(iVar6 + 0x10 + *(arg_10h + 0x3c)) = iVar2 - *(arg_10h + 0x120);
                        }
                        iVar2 = *(iVar6 + 0x14 + *(arg_10h + 0x3c));
                        if (iVar2 != 0) {
                            *(iVar6 + 0x14 + *(arg_10h + 0x3c)) = iVar2 - *(arg_10h + 0x120);
                        }
                        uVar7 = uVar7 + 1;
                        iVar6 = iVar6 + 0x20;
                    } while (uVar7 < *(arg_10h + 0x34));
                }
                *(arg_10h + 0x270) = *(arg_10h + 0x270) - *(arg_10h + 0x120);
                *(arg_10h + 0x26c) = *(arg_10h + 0x26c) - *(arg_10h + 0x120);
            }
            else {
                iVar6 = *(arg_10h + 0x120);
                *(arg_10h + 100) = *(arg_10h + 100) + iVar6;
                if (*(arg_10h + 0x40) != 0) {
                    *(arg_10h + 0x40) = *(arg_10h + 0x40) + iVar6;
                }
                if (*(arg_10h + 0x4c) != 0) {
                    *(arg_10h + 0x4c) = *(arg_10h + 0x4c) + iVar6;
                }
                if (*(arg_10h + 0x14) != 0) {
                    *(arg_10h + 0x14) = *(arg_10h + 0x14) + iVar6;
                }
                if (*(arg_10h + 0x20) != 0) {
                    *(arg_10h + 0x20) = *(arg_10h + 0x20) + iVar6;
                }
                if (*(arg_10h + 0x30) != 0) {
                    *(arg_10h + 0x30) = *(arg_10h + 0x30) + iVar6;
                }
                *(arg_10h + 0x3c) = *(arg_10h + 0x3c) + iVar6;
                uVar7 = 0;
                if (*(arg_10h + 0x34) != 0) {
                    iVar6 = 0;
                    do {
                        iVar2 = *(iVar6 + 0x10 + *(arg_10h + 0x3c));
                        if (iVar2 != 0) {
                            *(iVar6 + 0x10 + *(arg_10h + 0x3c)) = *(arg_10h + 0x120) + iVar2;
                        }
                        iVar2 = *(iVar6 + 0x14 + *(arg_10h + 0x3c));
                        if (iVar2 != 0) {
                            *(iVar6 + 0x14 + *(arg_10h + 0x3c)) = *(arg_10h + 0x120) + iVar2;
                        }
                        uVar7 = uVar7 + 1;
                        iVar6 = iVar6 + 0x20;
                    } while (uVar7 < *(arg_10h + 0x34));
                }
                *(arg_10h + 0x270) = *(arg_10h + 0x270) + *(arg_10h + 0x120);
                *(arg_10h + 0x26c) = *(arg_10h + 0x26c) + *(arg_10h + 0x120);
            }
            InterruptDescriptorTableRegister();
            *(iStack_2f6 + -4) = arg_10h + 4;
            fcn.0000025c();
            iVar6 = *(arg_10h + 100);
            uVar7 = *(arg_10h + 0x120);
            if (*(arg_10h + 0x124) == '\0') {
                puVar1 = iVar6 + 0x30;
                uVar3 = *puVar1;
                *puVar1 = *puVar1 - uVar7;
                *(iVar6 + 0x34) = *(iVar6 + 0x34) - (uVar3 < uVar7);
            }
            else {
                puVar1 = iVar6 + 0x30;
                uVar3 = *puVar1;
                *puVar1 = *puVar1 + uVar7;
                *(iVar6 + 0x34) = *(iVar6 + 0x34) + CARRY4(uVar3,uVar7);
            }
            uVar7 = *(arg_10h + 0x110);
            uVar3 = *(arg_10h + 0x108);
            iVar2 = *(arg_10h + 0x114);
            iVar4 = *(arg_10h + 0x10c);
            *(iVar6 + 0x10) = uVar7 + *(arg_10h + 0x108);
            *(iVar6 + 0x14) = iVar2 + iVar4 + CARRY4(uVar7,uVar3);
            *(iVar6 + 0x18) = *(arg_10h + 0x108);
            *(iVar6 + 0x1c) = *(arg_10h + 0x10c);
            *(iVar6 + 0x20) = *(arg_10h + 0x118);
            *(iVar6 + 0x24) = *(arg_10h + 0x11c);
            *(iVar6 + 0x28) = *(iVar6 + 0x30) + 8;
            *(iVar6 + 0x2c) = *(iVar6 + 0x34) + (0xfffffff7 < *(iVar6 + 0x30));
            fcn.0000211f();
            uVar7 = 0;
            if (*(arg_10h + 8) != 0) {
                do {
                    fcn.000037f3(*(arg_10h + 0x14) + uVar7 * 4);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(arg_10h + 8));
            }
            uVar7 = 0;
            if (*(arg_10h + 0x18) != 0) {
                do {
                    fcn.000037f3(*(arg_10h + 0x20) + uVar7 * 4);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(arg_10h + 0x18));
            }
            uVar7 = 0;
            if (*(arg_10h + 0x24) != 0) {
                do {
                    fcn.000037f3(*(arg_10h + 0x30) + uVar7 * 4);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(arg_10h + 0x24));
            }
            *(arg_10h + 0x69) = 1;
            *(arg_10h + 0x62) = 1;
            *(arg_10h + 0x148) = 0xfffc0420;
            pcVar5 = fcn.00000280();
            *(arg_10h + 0x148) = pcVar5;
            (*pcVar5)(arg_8h,arg_ch,arg_10h);
            fcn.000046cd();
        }
        fcn.00004b8b(auStack_2ec,arg_8h,0x24);
        fcn.00004b8b(&uStack_2c8,arg_10h,0x2c0);
        fcn.00004b8b(auStack_250,0xfffc6224,0x88);
    }
    apuStack_2c4[0] = auStack_250;
    InterruptDescriptorTableRegister();
    *(iStack_2f6 + -4) = apuStack_2c4;
    fcn.0000025c();
    uStack_260 = 0;
    if (arg_10h == 0) {
        fcn.00001e93();
        fcn.0000491f();
        uStack_266 = 0;
        fcn.00000bc6();
        uStack_1c8 = 0xfffc63ac;
        fcn.000048a2();
        fcn.00004ac5(noname_0,-0x39e0c,0);
        if (arg_ch != 0) {
            fcn.00003e1f();
        }
        iVar6 = 0;
        pcVar5 = *0xfffc6434;
        while (pcVar5 != NULL) {
            (*pcVar5)(0,apuStack_2c4);
            iVar2 = iVar6 * 4;
            iVar6 = iVar6 + 1;
            pcVar5 = *(iVar2 + -0x39bc8);
        }
    }
    else {
        fcn.00001b0e();
        fcn.000048c7();
        fcn.00002fa9();
        iVar6 = fcn.000048f0(0,&puStack_2f0);
        if (-1 < iVar6) {
            (**puStack_2f0)();
        }
        fcn.000048a2();
        fcn.00003d0f();
        iVar6 = 0;
        pcVar5 = *0xfffc6438;
        while (pcVar5 != NULL) {
            (*pcVar5)(0,apuStack_2c4);
            iVar2 = iVar6 * 4;
            iVar6 = iVar6 + 1;
            pcVar5 = *(iVar2 + -0x39bc4);
        }
    }
    fcn.000032f1();
    if ((*(iStack_264 + 0xc) != 0x11) && (cStack_25f == '\0')) {
        fcn.00004ac5(noname_0_00,-0x39e0c,0);
    }
    arg_ch_00 = &puStack_2fc;
    iVar6 = fcn.000048f0(0,arg_ch_00);
    if (iVar6 < 0) {
        fcn.00004ac5(arg_ch_00,-0x39e0c,0);
        fcn.000046cd();
    }
    (**puStack_2fc)(puStack_2fc,apuStack_2c4,iStack_264);
    fcn.000032f1();
    (**puStack_2fc)(puStack_2fc,apuStack_2c4,iStack_264);
    fcn.000046cd();
    return;
}


/* fcn.000046cd @ 0x46cd */

//WARNING: Removing unreachable block (ram,0x000046df)

void fcn.000046cd(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.00005d40 @ 0x5d40 */

uint8_t __fastcall fcn.00005d40(int param_1)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t var_4h;
    
    fcn.00004944(param_1);
    if (((param_1 == 0) || (iVar1 = fcn.000047a5(), iVar1 == 0)) || (iVar1 == -0x18)) {
        return 0x22;
    }
    uVar2 = *(iVar1 + 0x1b) != '\0';
    if (*(iVar1 + 0x1c) != '\0') {
        uVar2 = uVar2 | 2;
    }
    if (*(iVar1 + 0x1d) != '\0') {
        uVar2 = uVar2 | 8;
    }
    if (*(iVar1 + 0x1e) != '\0') {
        uVar2 = uVar2 | 0x10;
    }
    if (*(iVar1 + 0x1f) == '\0') {
        return uVar2;
    }
    return uVar2 | 0x20;
}


/* fcn.00005c3b @ 0x5c3b */

int64_t fcn.00005c3b(void)

{
    char cVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uchar uVar6;
    uchar uVar7;
    int iVar8;
    uint32_t uVar9;
    int iStack_4;
    
    fcn.00004944();
    if (iStack_4 == 0) {
        uVar9 = 0x22;
        goto code_r0x00005ca0;
    }
    iVar8 = fcn.000047a5();
    if ((iVar8 != 0) && (iVar8 != -0x18)) {
        cVar1 = *(iVar8 + 0x1a);
        if (cVar1 == '\x03') {
            uVar9 = 0x2580;
            goto code_r0x00005ca0;
        }
        if (cVar1 == '\x04') {
            uVar9 = 0x4b00;
            goto code_r0x00005ca0;
        }
        if (cVar1 == '\x06') {
            uVar9 = 0xe100;
            goto code_r0x00005ca0;
        }
    }
    uVar9 = 0x1c200;
code_r0x00005ca0:
    if (uVar9 % 0x2580 != 0) {
        uVar9 = 0x1c200;
    }
    uVar2 = 0x1c200 / uVar9;
    uVar3 = in(0x3fa);
    uVar4 = in(0x3fb);
    uVar5 = in(0x3fb);
    out(0x3fb,uVar5 | 0x80);
    uVar6 = in(0x3f9);
    uVar7 = in(0x3f8);
    uVar9 = 0x3fb;
    uVar5 = in(0x3fb);
    out(0x3fb,uVar5 & 0x7f);
    if (((CONCAT11(uVar6,uVar7) != uVar2) - 1U & ((uVar4 & 0x3f) != 3) - 1U & 1U - ((uVar3 & 0x21) != 1)) == 0) {
        out(0x3fb,0x80);
        out(0x3f9,uVar2 >> 8);
        out(0x3f8,uVar2);
        out(0x3fb,3);
        out(0x3fa,7);
        uVar9 = 0x3fc;
        out(0x3fc,0);
    }
    return uVar9 << 0x20;
}


/* fcn.00005df1 @ 0x5df1 */

void fcn.00005df1(void)

{
    uint32_t uVar1;
    uint extraout_EDX;
    uint extraout_EDX_00;
    ulong uVar2;
    uint64_t uVar3;
    
    uVar2 = fcn.00005f41();
    uVar3 = fcn.00005eaa(uVar2,uVar2 >> 0x20);
    uVar1 = uVar3;
    if (((uVar3 & 0xffffff00) != 0) && ((uVar1 & 0xfffff000) != 0xfffff000)) {
        fcn.00005db4(uVar2);
        if (*(uVar1 + 0xfc) == 0x44570110) {
            *(uVar1 + 0xc) = 0x80;
        }
        else {
            *(uVar1 + 3) = 0x80;
        }
        fcn.00005d9a(uVar3,0);
        fcn.00005d9a(uVar3,extraout_EDX);
        fcn.00005d9a(uVar3,3);
        fcn.00005d9a(uVar3,1);
        fcn.00005d9a(uVar3,extraout_EDX_00);
    }
    return;
}


/* fcn.000048f0 @ 0x48f0 */

void __cdecl fcn.000048f0(int32_t arg_8h,uint32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.0000434b @ 0x434b */

int __cdecl fcn.0000434b(uint32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_4h;
    
    while ((iVar2 = fcn.000048f0(0,&var_4h), iVar2 < 0 || ((iVar3 = (**var_4h)(var_4h), iVar3 < 0 && (iVar3 != 4)))))
    {
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    if (arg_8h != '\x02') {
        return iVar2;
    }
    cVar1 = fcn.0000430d();
    if (cVar1 == '\0') {
        return iVar2;
    }
    return -0x7ffffffd;
}


/* fcn.00000120 @ 0x120 */

uint * fcn.00000120(uint *param_1,uint32_t param_2)

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


/* fcn.00004b8b @ 0x4b8b */

uint32_t __cdecl fcn.00004b8b(uint32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    
    if ((arg_10h != 0) && (arg_8h != arg_ch)) {
        uVar1 = fcn.000000e0(arg_8h,arg_ch,arg_10h);
        return uVar1;
    }
    return arg_8h;
}


/* fcn.0000025c @ 0x25c */

void fcn.0000025c(void)

{
    uint8_t uVar1;
    
    uVar1 = fcn.00005d40();
    if ((uVar1 & 2) != 0) {
        fcn.00005c3b();
    }
    if ((uVar1 & 0x10) != 0) {
        fcn.00005df1();
    }
    return;
}


/* fcn.0000211f @ 0x211f */

void __fastcall fcn.0000211f(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    
    uVar1 = *(param_1 + 0x138);
    if (uVar1 != 0) {
        uVar2 = *(param_1 + 0x130);
        uVar3 = *(param_1 + 0x134);
        iVar6 = fcn.00004758();
        while (iVar6 != 0) {
            uVar4 = *(iVar6 + 0x1c);
            uVar5 = *(iVar6 + 0x18);
            if ((uVar3 <= uVar4) && ((uVar4 != uVar3 || (uVar2 <= uVar5)))) {
                uVar7 = uVar3 + CARRY4(uVar1,uVar2);
                if ((uVar4 <= uVar7) && ((uVar4 < uVar7 || (uVar5 < uVar1 + uVar2)))) {
                    if (*(param_1 + 0x140) == '\0') {
                        uVar7 = *(param_1 + 0x13c);
                        *(iVar6 + 0x18) = uVar5 - *(param_1 + 0x13c);
                        *(iVar6 + 0x1c) = uVar4 - (uVar5 < uVar7);
                    }
                    else {
                        uVar7 = *(param_1 + 0x13c);
                        *(iVar6 + 0x18) = uVar7 + uVar5;
                        *(iVar6 + 0x1c) = uVar4 + CARRY4(uVar7,uVar5);
                    }
                }
            }
            iVar6 = fcn.00004735();
        }
    }
    return;
}


/* fcn.000037f3 @ 0x37f3 */

void fcn.000037f3(int *param_1)

{
    fcn.00003746(param_1);
    fcn.00003746(*param_1 + 4);
    fcn.00003746(*param_1 + 8);
    return;
}


/* fcn.00003746 @ 0x3746 */

void __fastcall fcn.00003746(int param_1,int param_2,uint32_t *param_3)

{
    uint32_t *extraout_ECX;
    uint32_t *extraout_ECX_00;
    uint32_t *extraout_ECX_01;
    uint32_t *extraout_ECX_02;
    int *piVar1;
    int iVar2;
    
    if ((*(param_2 + 0x138) != 0) && (*param_3 < *(param_2 + 0x138) + *(param_2 + 0x130))) {
        fcn.00003726(*(param_2 + 0x13c),*(param_2 + 0x140));
        param_3 = extraout_ECX;
    }
    if (*param_3 < *(param_1 + 0x18) + *(param_1 + 0x14)) {
        fcn.00003726(*(param_2 + 0x120),*(param_2 + 0x124));
        param_3 = extraout_ECX_00;
    }
    if (*param_3 < *(param_1 + 0x20) + *(param_1 + 0x1c)) {
        fcn.00003726(*(param_2 + 0x128),*(param_2 + 300));
        param_3 = extraout_ECX_01;
    }
    piVar1 = param_2 + 0x280;
    iVar2 = 3;
    do {
        if ((*piVar1 != 0) && (*param_3 < *piVar1 + piVar1[-2])) {
            fcn.00003726(piVar1[1],piVar1[2]);
            param_3 = extraout_ECX_02;
        }
        piVar1 = piVar1 + 6;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
}


/* fcn.00000280 @ 0x280 */

int __fastcall fcn.00000280(int param_1)

{
    int iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar4 = 0;
    var_4h = 0;
    iVar1 = fcn.000048f0(0,&var_8h);
    if (((-1 < iVar1) && (*var_8h != 0)) && (uVar3 = 0, *(param_1 + 0x34) != 0)) {
        piVar2 = *(param_1 + 0x3c) + 8;
        do {
            if (*piVar2 == *var_8h) {
                uVar4 = uVar3;
                break;
            }
            uVar3 = uVar3 + 1;
            piVar2 = piVar2 + 8;
        } while (uVar3 < *(param_1 + 0x34));
    }
    iVar1 = *(uVar4 * 0x20 + 4 + *(param_1 + 0x3c));
    (**(iVar1 + 4))(iVar1,4,*(uVar4 * 0x20 + 8 + *(param_1 + 0x3c)),&var_4h);
    var_ch = &var_18h;
    var_18h = InterruptDescriptorTableRegister();
    fcn.0000434b(2,&var_20h,&var_10h);
    return var_20h + 0xdf;
}


/* fcn.00001e93 @ 0x1e93 */

void __fastcall fcn.00001e93(int param_1,int param_2)

{
    ushort *puVar1;
    uint32_t uVar2;
    int iVar3;
    
    *(param_1 + 0x69) = 0;
    *(param_1 + 100) = *(param_2 + 0x14);
    puVar1 = *(param_2 + 0x14);
    uVar2 = *(param_2 + 0x18);
    *puVar1 = 1;
    puVar1[1] = 0x38;
    *(puVar1 + 2) = 0;
    puVar1[0x1c] = 0xffff;
    puVar1[0x1d] = 8;
    *(puVar1 + 0x1e) = 0;
    iVar3 = puVar1 + uVar2;
    *(puVar1 + 6) = 0;
    uVar2 = CARRY4(puVar1,uVar2);
    *(puVar1 + 0xe) = 0;
    *(puVar1 + 10) = uVar2;
    *(puVar1 + 0x12) = uVar2;
    *(puVar1 + 0x14) = puVar1 + 0x20;
    *(puVar1 + 0x16) = 0;
    *(puVar1 + 0x1a) = 0;
    *(puVar1 + 4) = 9;
    *(puVar1 + 8) = iVar3;
    *(puVar1 + 0xc) = puVar1;
    *(puVar1 + 0x10) = iVar3;
    *(puVar1 + 0x18) = puVar1 + 0x1c;
    *(param_1 + 4) = param_1 + 0x78;
    return;
}


/* fcn.0000491f @ 0x491f */

void __fastcall fcn.0000491f(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000bc6 @ 0xbc6 */

void __fastcall fcn.00000bc6(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    fcn.000048a2();
    fcn.000048a2();
    iVar1 = *(param_2 + 4);
    fcn.000048f0(0,&var_4h);
    (**var_4h)(var_4h,*(param_2 + 4),*(iVar1 + 0x20),&var_8h);
    iVar2 = fcn.000046b5();
    *(param_1 + 0x3c) = iVar2;
    *(param_1 + 0x38) = 8;
    *(*(param_1 + 0x34) * 0x20 + iVar2) = iVar1;
    *(*(param_1 + 0x34) * 0x20 + 4 + *(param_1 + 0x3c)) = var_4h;
    *(*(param_1 + 0x34) * 0x20 + 8 + *(param_1 + 0x3c)) = var_8h;
    *(*(param_1 + 0x34) * 0x20 + 0x1c + *(param_1 + 0x3c)) = 0;
    *(param_1 + 0x34) = *(param_1 + 0x34) + 1;
    fcn.0000491f();
    return;
}


/* fcn.000048a2 @ 0x48a2 */

void __fastcall fcn.000048a2(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000046b5 @ 0x46b5 */

int __fastcall fcn.000046b5(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000467e();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.00000120(iVar1,param_1);
    return iVar1;
}


/* fcn.0000467e @ 0x467e */

int32_t __fastcall fcn.0000467e(uint param_1)

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


/* fcn.00004ac5 @ 0x4ac5 */

uint32_t __cdecl fcn.00004ac5(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    uint32_t uVar1;
    char in_CL;
    int32_t var_ch;
    int32_t var_4h;
    
    if (((in_CL == '\x01') || (in_CL == '\x02')) || (in_CL == '\x03')) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4));
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.00003e1f @ 0x3e1f */

void __fastcall fcn.00003e1f(int16_t *param_1,uint8_t *param_2)

{
    ushort *puVar1;
    int16_t iVar2;
    uint32_t arg_8h;
    int iVar3;
    int16_t *piVar4;
    uint32_t arg_10h;
    int16_t *piStack_8;
    int16_t *piStack_4;
    
    piStack_8 = param_1;
    piStack_4 = param_1;
    while( true ) {
        if ((*param_2 & 0x60) == 0) {
            fcn.00003a59(1);
        }
        else {
            fcn.00003bf7();
        }
        if (*param_2 < 0) break;
        param_2 = param_2 + 0xc;
    }
    iVar3 = fcn.00003b71(param_1,0xfffc60b4,0,0,&piStack_8);
    if ((-1 < iVar3) && (iVar3 = (**piStack_8)(piStack_8,&piStack_4), -1 < iVar3)) {
        iVar3 = *(param_1 + 0x30);
        iVar2 = *piStack_4;
        piVar4 = piStack_4;
        while (iVar2 != -1) {
            piVar4 = piVar4 + piVar4[1];
            iVar2 = *piVar4;
        }
        arg_10h = piVar4 - piStack_4;
        if ((*(iVar3 + 0x24) - *(iVar3 + 0x2c) != *(iVar3 + 0x20) < *(iVar3 + 0x28)) ||
           (arg_10h <= *(iVar3 + 0x20) - *(iVar3 + 0x28))) {
            arg_8h = *(iVar3 + 0x30);
            fcn.00004b8b(arg_8h,piStack_4,arg_10h);
            *(iVar3 + 0x34) = 0;
            puVar1 = arg_10h + arg_8h;
            *(iVar3 + 0x30) = puVar1;
            *puVar1 = 0xffff;
            puVar1[1] = 8;
            *(puVar1 + 2) = 0;
            *(iVar3 + 0x28) = puVar1 + 4;
            *(iVar3 + 0x2c) = 0;
        }
    }
    return;
}


/* fcn.00001b0e @ 0x1b0e */

void __fastcall fcn.00001b0e(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    fcn.000048f0(&var_4h,&var_8h);
    fcn.000048c7();
    uVar3 = 0;
    uVar2 = 0;
    if (*(param_1 + 0x34) != 0) {
        iVar1 = 0;
        do {
            if (*(*(param_1 + 0x3c) + 4 + iVar1) == var_8h) {
                *(*(param_1 + 0x3c) + 4 + iVar1) = 0xfffc62c0;
            }
            uVar2 = uVar2 + 1;
            iVar1 = iVar1 + 0x20;
        } while (uVar2 < *(param_1 + 0x34));
    }
    fcn.000048f0(&var_4h,&var_8h);
    fcn.000048c7();
    if (*(param_1 + 0x34) != 0) {
        iVar1 = 0;
        do {
            if (*(*(param_1 + 0x3c) + 4 + iVar1) == var_8h) {
                *(*(param_1 + 0x3c) + 4 + iVar1) = 0xfffc6308;
            }
            uVar3 = uVar3 + 1;
            iVar1 = iVar1 + 0x20;
        } while (uVar3 < *(param_1 + 0x34));
    }
    return;
}


/* fcn.000048c7 @ 0x48c7 */

void __fastcall fcn.000048c7(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x1c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.00002fa9 @ 0x2fa9 */

uint __fastcall fcn.00002fa9(int param_1,int param_2)

{
    uint32_t arg_ch;
    int iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint uStack_70;
    uint32_t uStack_6c;
    int *piStack_64;
    int *piStack_60;
    uint32_t auStack_5c [2];
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint uStack_48;
    uchar auStack_44 [4];
    int iStack_40;
    int iStack_3c;
    uchar auStack_24 [24];
    int iStack_c;
    int iStack_8;
    
    iVar1 = fcn.00003b71(param_1 + 4,0xfffc6154,0,0,&piStack_64);
    if ((iVar1 < 0) || (iStack_3c = *piStack_64, iStack_3c == 0)) {
        iStack_3c = *(param_2 + 4);
    }
    for (uStack_78 = 0; uStack_78 < *(param_1 + 0x34); uStack_78 = uStack_78 + 1) {
        if (*(*(param_1 + 0x3c) + 8 + uStack_78 * 0x20) == iStack_3c) {
            fcn.00004b8b(auStack_44,*(param_1 + 0x3c) + uStack_78 * 0x20,0x20);
            break;
        }
    }
    uStack_70 = 0;
    uVar6 = 0;
    iVar1 = (**(iStack_40 + 4))(iStack_40,4,iStack_3c,&uStack_70);
    if (-1 < iVar1) {
        (**(iStack_40 + 0xc))(iStack_40,uStack_70,auStack_24);
        fcn.000041ce();
        if (*piStack_60 == 0x5a4d) {
            piVar2 = *(piStack_60 + 0xf) + piStack_60;
        }
        else {
            piVar2 = piStack_60;
        }
        if (*piVar2 == 0x5a56) {
            piVar2 = piStack_60 + (piVar2[2] - *(piVar2 + 6)) + 0x28;
        }
        else if (*piVar2 == 0x4550) {
            piVar2 = piVar2[10] + piStack_60;
        }
        else {
            piVar2 = piStack_60;
        }
        fcn.00003829(piStack_60 + (-0x3fcbf - piVar2),(iStack_c - piStack_60) + iStack_8);
    }
    uStack_78 = 0;
    do {
        if (*(param_1 + 0x34) <= uStack_78) {
            fcn.00002045();
            return uVar6;
        }
        arg_ch = *(uStack_78 * 0x20 + *(param_1 + 0x3c));
        if ((*(param_1 + 0x10c) == 0) && (*(param_1 + 0x108) <= arg_ch)) {
            iVar1 = *(arg_ch + 0x20) + arg_ch;
            uVar3 = *(arg_ch + 0x24) + CARRY4(*(arg_ch + 0x20),arg_ch) + -1 + (iVar1 != 0);
            if ((*(param_1 + 0x11c) <= uVar3) && ((*(param_1 + 0x11c) < uVar3 || (*(param_1 + 0x118) <= iVar1 - 1U))))
            goto code_r0x00003128;
        }
        else {
code_r0x00003128:
            fcn.0000499a(auStack_5c);
            uVar3 = auStack_5c[0];
            uStack_6c = auStack_5c[0];
            fcn.0000499a(auStack_5c);
            uVar4 = auStack_5c[0];
            fcn.00004b8b(uVar3,arg_ch,*(arg_ch + 0x20));
            fcn.00004b8b(uVar4,uVar3,*(arg_ch + 0x20));
            uStack_50 = uVar3;
            uStack_4c = uVar4;
            uStack_48 = *(arg_ch + 0x20);
            uStack_54 = arg_ch;
            uVar4 = fcn.000047fd();
            if (uVar4 != 0) {
                fcn.00004b8b(uVar4,&uStack_54,0x10);
            }
            uStack_74 = uStack_78;
            if (uStack_78 < *(param_1 + 0x34)) {
                do {
                    uVar3 = *(uStack_74 * 0x20 + *(param_1 + 0x3c));
                    if (arg_ch < uVar3) {
                        uVar5 = *(uVar3 + 0x24) + CARRY4(uVar3,*(uVar3 + 0x20));
                        uVar4 = *(arg_ch + 0x24) + CARRY4(arg_ch,*(arg_ch + 0x20));
                        if ((uVar5 <= uVar4) &&
                           ((uVar5 < uVar4 || (uVar3 + *(uVar3 + 0x20) < arg_ch + *(arg_ch + 0x20))))) {
                            iVar1 = (uVar3 - arg_ch) + uStack_6c;
                            *(uStack_74 * 0x20 + *(param_1 + 0x3c)) = iVar1;
                            *(*(param_1 + 0x3c) + 8 + uStack_74 * 0x20) = iVar1;
                            fcn.00002f09(uVar3,iVar1);
                            fcn.00003829(iVar1,*(uVar3 + 0x20) + -1);
                            fcn.00002eae(*(uVar3 + 0x20) + -1);
                            fcn.000020c8(iVar1);
                        }
                    }
                    uStack_74 = uStack_74 + 1;
                } while (uStack_74 < *(param_1 + 0x34));
                uVar3 = uStack_6c;
            }
            *(uStack_78 * 0x20 + *(param_1 + 0x3c)) = uVar3;
            *(*(param_1 + 0x3c) + 8 + uStack_78 * 0x20) = uVar3;
            uVar6 = fcn.00002f09(arg_ch,uVar3);
            fcn.00003829(uVar3,*(arg_ch + 0x20) + -1);
            fcn.00002eae(*(arg_ch + 0x20) + -1);
            fcn.000020c8(uVar3);
        }
        uStack_78 = uStack_78 + 1;
    } while( true );
}


/* fcn.00003d0f @ 0x3d0f */

void __fastcall fcn.00003d0f(int param_1)

{
    int iVar1;
    
    do {
        if (*(param_1 + 0x2c) != *(param_1 + 0x24)) {
            do {
                iVar1 = *(param_1 + 0x24);
                fcn.00003d70(0,*(param_1 + 0x10),*(param_1 + 0x2c),iVar1);
                *(param_1 + 0x2c) = iVar1;
            } while (iVar1 != *(param_1 + 0x24));
        }
        if (*(param_1 + 0x10) != *(param_1 + 8)) {
            do {
                iVar1 = *(param_1 + 8);
                fcn.00003d70(*(param_1 + 0x10),iVar1,0,*(param_1 + 0x2c));
                *(param_1 + 0x10) = iVar1;
            } while (iVar1 != *(param_1 + 8));
        }
    } while (*(param_1 + 0x2c) != *(param_1 + 0x24));
    return;
}


/* fcn.000032f1 @ 0x32f1 */

void __fastcall fcn.000032f1(uint param_1,int param_2)

{
    char *pcVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int32_t iStack_7c;
    code *pcStack_78;
    int iStack_74;
    int32_t iStack_70;
    uint uStack_6c;
    uint32_t uStack_68;
    uchar *puStack_64;
    uchar auStack_60 [4];
    uchar auStack_5c [2];
    int iStack_5a;
    uchar auStack_54 [2];
    int iStack_52;
    code *pcStack_4c;
    uint uStack_48;
    uchar auStack_44 [16];
    char cStack_34;
    uchar auStack_24 [36];
    
    iVar5 = 0;
    pcStack_78 = NULL;
    iStack_7c = 0;
    pcStack_4c = NULL;
    uStack_48 = 0;
    uStack_6c = param_1;
    if (*(param_2 + 0x69) != '\0') {
        uVar6 = 0;
        uStack_68 = *(param_2 + 0x58);
        iStack_74 = *(param_2 + 0x54);
        puStack_64 = *(param_2 + 0x5c);
        if (*(param_2 + 0x34) != 0) {
            do {
                uVar7 = 0;
                if (*(iVar5 + 0xc + *(param_2 + 0x3c)) != 0) {
                    do {
                        if (*(uVar7 + *(iVar5 + 0x10 + *(param_2 + 0x3c))) == '\x02') {
                            iStack_7c = *(*(iVar5 + 0x14 + *(param_2 + 0x3c)) + uVar7 * 4);
                            *(param_2 + 0x5c) = iStack_7c;
                            *(param_2 + 0x54) = uVar6;
                            *(param_2 + 0x58) = uVar7;
                            iVar3 = fcn.0000434b(2,&pcStack_4c,&iStack_70);
                            if (iVar3 == 0) {
                                pcVar1 = *(iVar5 + 0x10 + *(param_2 + 0x3c)) + uVar7;
                                *pcVar1 = *pcVar1 + '\x01';
                                pcStack_78 = pcStack_4c;
                                (*pcStack_4c)(iStack_7c,param_2 + 4);
                            }
                            fcn.00003d0f();
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(iVar5 + 0xc + *(param_2 + 0x3c)));
                }
                uVar6 = uVar6 + 1;
                iVar5 = iVar5 + 0x20;
            } while (uVar6 < *(param_2 + 0x34));
        }
        *(param_2 + 0x5c) = puStack_64;
        *(param_2 + 0x54) = iStack_74;
        *(param_2 + 0x58) = uStack_68;
    }
    while( true ) {
        if (*(param_2 + 0x62) == '\0') {
            *(param_2 + 0x60) = 0;
        }
        else {
            *(param_2 + 0x62) = 0;
        }
        uStack_68 = *(param_2 + 0x54);
        if (uStack_68 < *(param_2 + 0x34)) break;
code_r0x00003611:
        *(param_2 + 0x54) = 0;
        if ((*(param_2 + 0x60) == '\0') || (*(param_2 + 0x61) == '\0')) {
            return;
        }
    }
    iVar5 = uStack_68 << 5;
    if (uStack_68 < *(param_2 + 0x34)) goto code_r0x000033ff;
    iStack_74 = 0;
    do {
        uVar6 = uStack_68;
        if (*(iStack_74 + 4) != 0) {
            *(param_2 + 0x54) = uStack_68;
            if (*(param_2 + 0x58) == 0) {
                fcn.0000275e();
            }
            iVar3 = iStack_74;
            uVar7 = *(param_2 + 0x58);
            if (uVar7 < *(iVar5 + 0xc + *(param_2 + 0x3c))) {
                do {
                    *(param_2 + 0x58) = uVar7;
                    iStack_7c = *(*(param_2 + 0x4c) + uVar7 * 4);
                    *(param_2 + 0x5c) = iStack_7c;
                    if (*(uVar7 + *(iVar5 + 0x10 + *(param_2 + 0x3c))) == '\0') {
                        puStack_64 = auStack_5c;
                        InterruptDescriptorTableRegister();
                        iStack_74 = iStack_7c;
                        (**(**(iStack_5a + -4) + 0x6c))(iStack_7c,auStack_24);
                        if (*(param_2 + 0x50) <= uVar7) {
                            puStack_64 = auStack_54;
                            InterruptDescriptorTableRegister();
                            iVar4 = (**(**(iStack_52 + -4) + 0x40))(*(iStack_52 + -4),0x1b,iStack_74,auStack_60);
                            if ((-1 < iVar4) && (cVar2 = fcn.00004418(), cVar2 == '\0')) {
                                *(param_2 + 0x60) = 1;
                                goto code_r0x000035e3;
                            }
                        }
                        (**(*(iVar3 + 4) + 0xc))(*(iVar3 + 4),iStack_7c,auStack_44);
                        if (cStack_34 == '\v') {
                            iVar4 = fcn.0000138f(iStack_7c);
                            if (iVar4 == 0) {
                                pcVar1 = *(iVar5 + 0x10 + *(param_2 + 0x3c)) + uVar7;
                                *pcVar1 = *pcVar1 + '\x01';
                                *(param_2 + 0x61) = 1;
                            }
                            else {
                                *(param_2 + 0x60) = 1;
                            }
                        }
                        else {
                            iVar4 = fcn.0000434b(0,&pcStack_4c,&iStack_70);
                            if (iVar4 == 0) {
                                fcn.00004b21(&iStack_7c);
                                iVar4 = fcn.00001e41(iStack_7c,iStack_70);
                                if (iVar4 == -0x7fffffe6) {
                                    *(param_2 + 0x60) = 1;
                                }
                                else {
                                    pcVar1 = *(iVar5 + 0x10 + *(param_2 + 0x3c)) + uVar7;
                                    *pcVar1 = *pcVar1 + '\x01';
                                    pcStack_78 = pcStack_4c;
                                    (*pcStack_4c)(iStack_7c,param_2 + 4);
                                    *(param_2 + 0x61) = 1;
                                }
                                fcn.00004b21(&iStack_7c);
                            }
                        }
                        fcn.00002a65();
                        fcn.00003d0f();
                        fcn.00002a65();
                        if ((*(param_2 + 0x69) != '\0') && (*(uVar7 + *(iVar5 + 0x10 + *(param_2 + 0x3c))) == '\x02')) {
                            (*pcStack_78)(iStack_7c,param_2 + 4);
                            pcVar1 = *(iVar5 + 0x10 + *(param_2 + 0x3c)) + uVar7;
                            *pcVar1 = *pcVar1 + '\x01';
                            fcn.00003d0f();
                        }
                    }
code_r0x000035e3:
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(iVar5 + 0xc + *(param_2 + 0x3c)));
                uVar6 = uStack_68;
            }
            *(param_2 + 0x5c) = 0;
            *(param_2 + 0x58) = 0;
            *(param_2 + 0x4c) = 0;
        }
        uStack_68 = uVar6 + 1;
        iVar5 = iVar5 + 0x20;
        if (*(param_2 + 0x34) <= uStack_68) goto code_r0x00003611;
code_r0x000033ff:
        iStack_74 = *(param_2 + 0x3c) + iVar5;
    } while( true );
}


/* fcn.00004bf0 @ 0x4bf0 */

uint32_t __fastcall fcn.00004bf0(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00004418 @ 0x4418 */

uint32_t __fastcall fcn.00004418(uint param_1,uint8_t *param_2)

{
    char cVar1;
    char *pcVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint8_t *puVar5;
    char acStack_204 [4];
    uint uStack_200;
    char acStack_1fc [8];
    char acStack_1f4 [488];
    char acStack_c [12];
    
    pcVar2 = acStack_204;
code_r0x0000442d:
    do {
        while( true ) {
            pcVar4 = pcVar2;
            pcVar2 = *param_2;
            puVar5 = param_2 + 1;
            if (pcVar2 != 0x2) break;
            pcVar2 = acStack_c;
            if (pcVar2 < pcVar4) goto code_r0x00004534;
            *(pcVar4 + 4) = puVar5;
            puVar5 = param_2 + 0x11;
code_r0x0000450d:
            pcVar2 = pcVar4 + 8;
            param_2 = puVar5;
        }
        if (pcVar2 < 0x3) {
code_r0x00004534:
            return pcVar2 & 0xffffff00;
        }
        if (0x4 < pcVar2) {
            if (pcVar2 == 0x5) {
                pcVar2 = acStack_1fc;
                if (pcVar2 <= pcVar4) {
                    if (*(pcVar4 + -4) == 0) {
                        cVar1 = pcVar4[-8];
                    }
                    else {
                        cVar1 = fcn.000043e8();
                    }
                    pcVar4[-8] = cVar1 == '\0';
                    pcVar2 = pcVar4;
                    goto code_r0x000044f4;
                }
            }
            else if (0x5 < pcVar2) {
                if (pcVar2 < 0x8) {
                    pcVar2 = acStack_c;
                    if (pcVar4 <= pcVar2) {
                        *pcVar4 = *param_2 == 6;
                        pcVar4[4] = '\0';
                        pcVar4[5] = '\0';
                        pcVar4[6] = '\0';
                        pcVar4[7] = '\0';
                        goto code_r0x0000450d;
                    }
                }
                else if (pcVar2 == 0x8) {
                    pcVar2 = acStack_204;
                    if (pcVar4 + -8 == pcVar2) {
                        if (*(pcVar4 + -4) == 0) {
                            return CONCAT31(pcVar2 >> 8,pcVar4[-8]);
                        }
                        uVar3 = fcn.000043e8();
                        return uVar3;
                    }
                }
            }
            goto code_r0x00004534;
        }
        pcVar2 = acStack_1f4;
        if (pcVar4 < pcVar2) goto code_r0x00004534;
        pcVar2 = pcVar4 + -8;
        if (*param_2 != 3) break;
        if (*(pcVar4 + -4) == 0) {
            cVar1 = *pcVar2;
        }
        else {
            cVar1 = fcn.000043e8();
        }
        param_2 = puVar5;
        if (cVar1 == '\0') {
            pcVar4[-0x10] = '\0';
            goto code_r0x000044f4;
        }
    } while( true );
    if (*(pcVar4 + -4) == 0) {
        cVar1 = *pcVar2;
    }
    else {
        cVar1 = fcn.000043e8();
    }
    param_2 = puVar5;
    if (cVar1 != '\0') {
        pcVar4[-0x10] = '\x01';
code_r0x000044f4:
        pcVar2[-0xffffffff00000004] = '\0';
        pcVar2[-0xffffffff00000003] = '\0';
        pcVar2[-0xffffffff00000002] = '\0';
        pcVar2[-0xffffffff00000001] = '\0';
        param_2 = puVar5;
    }
    goto code_r0x0000442d;
}


/* fcn.0000138f @ 0x138f */

int __fastcall fcn.0000138f(uint param_1,int param_2,int32_t param_3)

{
    uint uVar1;
    int32_t iVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint32_t uVar6;
    int extraout_ECX_01;
    uint16_t *puVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uStack_74;
    int32_t iStack_70;
    int iStack_6c;
    uint uStack_68;
    uint32_t uStack_60;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uchar auStack_30 [20];
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    
    fcn.00004944();
    while (iVar4 = fcn.00004735(), iVar4 != 0) {
        cVar3 = fcn.00004bf0();
        if (cVar3 != '\0') {
            return 0;
        }
    }
    uStack_68 = *(param_2 + 8);
    iVar8 = 0;
    iVar4 = *(param_2 + 4);
    do {
        iStack_70 = 0;
        iStack_6c = iVar8;
        if ((*(iVar4 + 0x20) == 0x50564650) && (*(iVar4 + 0x24) == 0x10030)) {
            iVar5 = (**(iVar4 + 0x1c))(iVar4,0x17,iVar8,param_3,&uStack_74,&iStack_70);
        }
        else {
            if (iVar8 != 0) {
                return 0;
            }
            iVar5 = (**(iVar4 + 0x14))(iVar4,0x17,param_3,&uStack_74);
        }
        if ((iVar5 < 0) || (iVar5 = fcn.00001e41(param_3,iStack_70), iVar5 == -0x7fffffe6)) goto code_r0x000016f8;
        if (-1 < *(uStack_74 + 0x2c)) {
            uVar9 = 1 << (*(uStack_74 + 0x2c) >> 0x10 & 0x1f);
            if (uVar9 < 8) {
                uVar9 = 8;
            }
            if (uStack_74 % uVar9 != 0) {
                uVar6 = *(uStack_74 + 0x20);
                uVar9 = fcn.000045b7(uVar9);
                if (uVar9 == 0) {
                    iVar5 = -0x7ffffff7;
                    iVar8 = iStack_6c;
code_r0x000016f8:
                    if (iVar8 != 0) {
                        return 0;
                    }
                    return iVar5;
                }
                if (*(uStack_74 + 0x34) != 0) {
                    iVar8 = uStack_74 + *(uStack_74 + 0x34);
                    for (puVar7 = iVar8 + 0x14; puVar7 < *(iVar8 + 0x10) + iVar8; puVar7 = puVar7 + *puVar7) {
                        if (puVar7[1] == 3) {
                            uStack_60 = *(puVar7 + 2);
                            uStack_54 = CONCAT31(uStack_54._1_3_,-((*(uStack_74 + 0x2c) & 0x800) != 0));
                            fcn.00004b8b(uVar9,uStack_74,uStack_60);
                            iVar8 = uVar6 - uStack_60;
                            if (iVar8 != 0) {
                                fcn.00000140(uStack_60 + uVar9,iVar8,uStack_54);
                            }
                            goto code_r0x000014f4;
                        }
                    }
                }
                fcn.00004b8b(uVar9,uStack_74,uVar6);
code_r0x000014f4:
                iVar8 = iStack_6c;
                uStack_74 = uVar9;
            }
        }
        (**(iVar4 + 0x10))(iVar4,uStack_68,auStack_30);
        (**(iVar4 + 0xc))(iVar4,param_3,&uStack_50);
        fcn.000049f5(uStack_74,*(uStack_74 + 0x20),&uStack_1c,&uStack_50,iStack_70);
        fcn.000049f5(uStack_74,*(uStack_74 + 0x20),&uStack_1c,&uStack_50,0);
        uVar9 = uStack_74;
        uStack_60 = *(uStack_74 + 0x24);
        uVar1 = *(uStack_74 + 0x20);
        cVar3 = fcn.00004824(uStack_74,0);
        uVar6 = extraout_ECX;
        if (cVar3 != '\0') {
            iVar5 = fcn.000047c3();
            uVar6 = extraout_ECX_00;
            if (iVar5 != 0) {
                *(iVar5 + 0xc) = 0;
                *(iVar5 + 8) = uVar9;
                *(iVar5 + 0x10) = uVar1;
                *(iVar5 + 0x14) = uStack_60;
                uVar6 = uStack_60;
            }
            uVar9 = uStack_74;
        }
        uStack_60 = *(uVar9 + 0x24);
        uVar1 = *(uVar9 + 0x20);
        cVar3 = fcn.00004824(uVar9,0,uVar6,uVar6);
        iVar5 = extraout_ECX_01;
        if (cVar3 != '\0') {
            iVar5 = fcn.000047c3();
            if (iVar5 != 0) {
                *(iVar5 + 0xc) = 0;
                *(iVar5 + 8) = uVar9;
                *(iVar5 + 0x10) = uVar1;
                *(iVar5 + 0x14) = uStack_60;
                *(iVar5 + 0x18) = uStack_1c;
                *(iVar5 + 0x1c) = uStack_18;
                *(iVar5 + 0x20) = uStack_14;
                *(iVar5 + 0x24) = uStack_10;
                *(iVar5 + 0x28) = uStack_50;
                *(iVar5 + 0x2c) = uStack_4c;
                *(iVar5 + 0x30) = uStack_48;
                *(iVar5 + 0x34) = uStack_44;
            }
            uVar9 = uStack_74;
        }
        iVar2 = iStack_70;
        uStack_60 = *(uVar9 + 0x20);
        iStack_6c = *(uVar9 + 0x24);
        cVar3 = fcn.00004824(uVar9,0,iVar5,iVar5);
        if ((cVar3 != '\0') && (iVar5 = fcn.000047c3(), iVar5 != 0)) {
            *(iVar5 + 0xc) = 0;
            *(iVar5 + 0x10) = uStack_60;
            *(iVar5 + 8) = uVar9;
            *(iVar5 + 0x14) = iStack_6c;
            *(iVar5 + 0x18) = iVar2;
            *(iVar5 + 0x1c) = 1;
            *(iVar5 + 0x20) = uStack_1c;
            *(iVar5 + 0x24) = uStack_18;
            *(iVar5 + 0x28) = uStack_14;
            *(iVar5 + 0x2c) = uStack_10;
            *(iVar5 + 0x30) = uStack_50;
            *(iVar5 + 0x34) = uStack_4c;
            *(iVar5 + 0x38) = uStack_48;
            *(iVar5 + 0x3c) = uStack_44;
        }
        iVar8 = iVar8 + 1;
    } while( true );
}


/* fcn.00001bb1 @ 0x1bb1 */

uint __fastcall fcn.00001bb1(int param_1,int param_2)

{
    uint32_t arg_8h;
    int iVar1;
    
    if (*(param_1 + 0x44) <= *(param_1 + 0x48)) {
        arg_8h = fcn.000046b5();
        fcn.00004b8b(arg_8h,*(param_1 + 0x40),*(param_1 + 0x44) * 0x28);
        *(param_1 + 0x40) = arg_8h;
        *(param_1 + 0x44) = *(param_1 + 0x44) + 8;
    }
    iVar1 = *(param_1 + 0x48) * 0x28 + *(param_1 + 0x40);
    *(param_1 + 0x48) = *(param_1 + 0x48) + 1;
    fcn.00004bd7();
    *(iVar1 + 0x10) = *(param_2 + 0x10);
    *(iVar1 + 0x14) = *(param_2 + 0x14);
    *(iVar1 + 0x18) = *(param_2 + 0x20);
    *(iVar1 + 0x1c) = 0x80000020;
    *(iVar1 + 0x20) = iVar1;
    *(iVar1 + 0x24) = 0xfffc1db8;
    fcn.0000491f();
    return 0;
}


/* fcn.00004bd7 @ 0x4bd7 */

uint * __fastcall fcn.00004bd7(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000e24 @ 0xe24 */

uint __cdecl
fcn.00000e24(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h,int32_t arg_18h,uint32_t arg_1ch)

{
    bool bVar1;
    char cVar2;
    unkuint3 *pVar3;
    int in_ECX;
    uint32_t uVar4;
    int iVar5;
    char in_DL;
    uint16_t uVar6;
    int32_t *piVar7;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    int32_t iStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint uStack_18;
    uint32_t uStack_14;
    uint *puStack_10;
    uint *apuStack_c [2];
    
    *arg_14h = 0;
    uStack_14 = 0;
    iStack_24 = 0;
    uStack_28 = 0;
    if (arg_10h != 0) {
        do {
            uVar4 = *arg_ch;
            if ((uVar4 == 0xffffff) && (arg_1ch == '\0')) {
code_r0x00000e7c:
                uVar4 = *(arg_ch + 4);
            }
            else {
                cVar2 = *(arg_ch + 3);
                if (cVar2 == in_DL) {
                    *arg_8h = *arg_8h + -1;
                    if (*arg_8h == 0) {
                        pVar3 = arg_ch + 8;
                        if (*arg_ch != 0xffffff) {
                            pVar3 = arg_ch + 4;
                        }
                        *arg_14h = pVar3;
                        return 0;
                    }
                    if (uVar4 == 0xffffff) goto code_r0x00000e7c;
                }
                else {
                    if ((cVar2 == '\x02') || (cVar2 == '\x01')) {
                        bVar1 = false;
                        uStack_1c = 0;
                        if (*(in_ECX + 0x248) != 0) {
                            piVar7 = in_ECX + 0x188;
                            do {
                                if (arg_ch == piVar7[-0x10]) {
                                    uStack_2c = piVar7[0x20];
                                    uStack_28 = piVar7[0x10];
                                    iStack_24 = *piVar7;
                                    uStack_20 = 0;
                                    bVar1 = true;
                                    iVar5 = fcn.00000e24(arg_8h,iStack_24,uStack_28,&uStack_18,&uStack_20,arg_1ch);
                                    if (-1 < iVar5) goto code_r0x00001117;
                                }
                                uStack_1c = uStack_1c + 1;
                                piVar7 = piVar7 + 1;
                            } while (uStack_1c < *(in_ECX + 0x248));
                            if (bVar1) goto code_r0x00001133;
                        }
                        uStack_2c = 0;
                        if (*(arg_ch + 3) == '\x02') {
                            if (*arg_ch == 0xffffff) {
                                uVar6 = *(arg_ch + 0x1a);
                                uStack_1c = 8;
                            }
                            else {
                                uVar6 = *(arg_ch + 0x16);
                                uStack_1c = 4;
                            }
                            iVar5 = fcn.000047a5();
                            if ((((iVar5 != 0) && (cVar2 = fcn.00004bf0(), cVar2 != '\0')) &&
                                (iVar5 = fcn.000048f0(0,&puStack_10), -1 < iVar5)) && (puStack_10 != NULL)) {
                                iVar5 = (**puStack_10)(puStack_10,arg_ch,&iStack_24,&uStack_28,&uStack_2c);
                                goto code_r0x00001075;
                            }
                            if ((uVar6 & 1) != 0) goto code_r0x00001133;
                            iVar5 = 0;
                            if ((uVar6 & 2) != 0) {
                                uStack_2c = uStack_2c | 6;
                            }
                            if (*arg_ch != 0xffffff) {
                                uStack_28 = *arg_ch - *(arg_ch + 0x14);
                                iStack_24 = *(arg_ch + 0x14) + arg_ch;
                                goto code_r0x00001075;
                            }
                            uStack_28 = *(arg_ch + 4) - *(arg_ch + 0x18);
                            iStack_24 = *(arg_ch + 0x18) + arg_ch;
code_r0x0000107d:
                            if ((uStack_2c & 4) == 0) {
                                if (*(in_ECX + 0x248) < 0x10) {
                                    *(in_ECX + 0x248) = *(in_ECX + 0x248) + 1;
                                }
                                *(in_ECX + 0x148 + *(in_ECX + 0x24c) * 4) = arg_ch;
                                *(in_ECX + 0x188 + *(in_ECX + 0x24c) * 4) = iStack_24;
                                *(in_ECX + 0x1c8 + *(in_ECX + 0x24c) * 4) = uStack_28;
                                *(in_ECX + 0x208 + *(in_ECX + 0x24c) * 4) = uStack_2c;
                                *(in_ECX + 0x24c) = *(in_ECX + 0x24c) + 1U & 0xf;
                            }
                            uStack_20 = 0;
                            iVar5 = fcn.00000e24(arg_8h,iStack_24,uStack_28,&uStack_18,&uStack_20,arg_1ch);
                            if (-1 < iVar5) {
code_r0x00001117:
                                *arg_14h = uStack_18;
                                *arg_18h = uStack_20 | uStack_2c;
                                return 0;
                            }
                        }
                        else if ((*(arg_ch + 3) == '\x01') && (iVar5 = fcn.000048f0(0,apuStack_c), -1 < iVar5)) {
                            iVar5 = (**apuStack_c[0])(apuStack_c[0],arg_ch,&iStack_24,&uStack_28);
code_r0x00001075:
                            if (-1 < iVar5) goto code_r0x0000107d;
                        }
                    }
code_r0x00001133:
                    uVar4 = *arg_ch;
                    if (uVar4 == 0xffffff) {
                        uVar4 = *(arg_ch + 4);
                    }
                }
            }
            iVar5 = uVar4 + (-uVar4 & 3);
            uStack_14 = uStack_14 + iVar5;
            arg_ch = arg_ch + iVar5;
        } while (uStack_14 < arg_10h);
    }
    return 0x8000000e;
}


/* fcn.000047a5 @ 0x47a5 */

void fcn.000047a5(void)

{
    int32_t var_4h;
    
    fcn.00004944();
    fcn.00004776();
    return;
}


/* fcn.00004944 @ 0x4944 */

void __fastcall fcn.00004944(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x30))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00004776 @ 0x4776 */

int fcn.00004776(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00004735();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00004bf0();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.0000083d @ 0x83d */

int __fastcall fcn.0000083d(uint32_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint32_t uStack_18;
    int iStack_6;
    
    InterruptDescriptorTableRegister();
    iVar8 = 0;
    uStack_18 = 0;
    iVar5 = *(iStack_6 + -4);
    uVar1 = *(iVar5 + 0x30);
    uVar4 = uVar1;
    if (uVar1 != 0) {
        iVar2 = *(iVar5 + 0x38);
        iVar7 = uVar1 << 5;
        do {
            if (*(iVar8 + iVar2) < param_1) {
                uVar3 = *(iVar8 + iVar2);
                iVar6 = uVar3 + *(uVar3 + 0x20);
                if (*(uVar3 + 0x24) + CARRY4(uVar3,*(uVar3 + 0x20)) + -1 + (iVar6 != 0) == 0) {
                    if (iVar6 - 1U < param_1) goto code_r0x000008dc;
                }
                if (uVar4 != uVar1) {
                    if (*(iVar8 + iVar2) <= *(iVar2 + iVar7)) goto code_r0x000008dc;
                }
                uVar4 = uStack_18;
                iVar7 = iVar8;
            }
code_r0x000008dc:
            uStack_18 = uStack_18 + 1;
            iVar8 = iVar8 + 0x20;
        } while (uStack_18 < uVar1);
    }
    if (uVar4 < uVar1) {
        iVar5 = uVar4 * 0x20 + *(iVar5 + 0x38);
    }
    else {
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.00001ac8 @ 0x1ac8 */

int __fastcall fcn.00001ac8(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    int32_t var_ch;
    int32_t var_4h;
    
    InterruptDescriptorTableRegister();
    uVar3 = 0;
    uVar1 = *(*(stack0xfffffff2 + -4) + 0x30);
    if (uVar1 != 0) {
        iVar2 = *(*(stack0xfffffff2 + -4) + 0x38);
        piVar4 = iVar2 + 8;
        do {
            if (param_1 == *piVar4) {
                return uVar3 * 0x20 + iVar2;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 8;
        } while (uVar3 < uVar1);
    }
    return 0;
}


/* fcn.00004735 @ 0x4735 */

int16_t * __fastcall fcn.00004735(int16_t param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == param_1) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00001e41 @ 0x1e41 */

//WARNING: Variable defined which should be unmapped: var_1h

int __cdecl fcn.00001e41(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    int iVar2;
    int in_ECX;
    uint32_t var_1h;
    
    puVar1 = *(in_ECX + 0x70);
    if (puVar1 == NULL) {
        iVar2 = (-((arg_ch & 0xcU) != 0 && (arg_ch & 2U) != 0) & 0xc) + 0x8000000e;
    }
    else {
        iVar2 = (**puVar1)(in_ECX + 4,puVar1,arg_ch);
        var_1h._0_1_ = in_ECX >> 0x18;
        if (var_1h != '\0') {
            iVar2 = -0x7fffffe6;
        }
    }
    return iVar2;
}


/* fcn.000045b7 @ 0x45b7 */

uint32_t __fastcall fcn.000045b7(uint param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_8;
    int32_t iStack_4;
    
    if (param_2 != 0) {
        if (param_3 < 0x1001) {
            iVar1 = fcn.0000499a(&uStack_8);
            if (-1 < iVar1) {
                return uStack_8;
            }
        }
        else {
            iVar1 = fcn.0000499a(&uStack_8);
            if (-1 < iVar1) {
                uVar2 = uStack_8 + (param_3 - 1) & ~(param_3 - 1);
                iVar1 = ((uVar2 - uStack_8 & 0xfff) != 0) + (uVar2 - uStack_8 >> 0xc);
                if (iVar1 != 0) {
                    fcn.000049c6(uStack_8,iStack_4);
                }
                iStack_4 = 0;
                uStack_8 = param_2 * 0x1000 + uVar2;
                if (((param_3 >> 0xc) + ((param_3 & 0xfff) != 0) + param_2) - iVar1 != param_2) {
                    fcn.000049c6(uStack_8,0);
                }
                return uVar2;
            }
        }
    }
    return 0;
}


/* fcn.000049f5 @ 0x49f5 */

void __cdecl fcn.000049f5(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,uint32_t arg_14h,int32_t arg_18h)

{
    int *piVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint uVar4;
    uint *puVar5;
    char in_CL;
    int in_EDX;
    uint uVar6;
    ushort unaff_SI;
    ushort uStack_e;
    
    if (in_CL == '\0') {
        puVar2 = fcn.000046b5();
        uVar6 = 0xfffc6104;
        puVar2[8] = arg_18h;
    }
    else {
        puVar2 = fcn.000046b5();
        uVar6 = 0xfffc61e4;
    }
    if (in_EDX == 0) {
        *puVar2 = *0xfffc6164;
        puVar2[1] = *0xfffc6168;
        puVar2[2] = *0xfffc616c;
        puVar2[3] = *0xfffc6170;
    }
    else {
        fcn.00004bd7();
    }
    puVar2[4] = arg_8h;
    puVar2[5] = arg_ch;
    if (arg_10h != 0) {
        uVar3 = fcn.0000467e();
        uVar4 = 0;
        if (uVar3 != 0) {
            uVar4 = fcn.00004b8b(uVar3,arg_10h,0x10);
        }
        puVar2[6] = uVar4;
    }
    if (arg_14h != 0) {
        uVar3 = fcn.0000467e();
        uVar4 = 0;
        if (uVar3 != 0) {
            uVar4 = fcn.00004b8b(uVar3,arg_14h,0x10);
        }
        puVar2[7] = uVar4;
    }
    puVar5 = fcn.0000467e();
    puVar5[1] = uVar6;
    *puVar5 = 0x80000010;
    puVar5[2] = puVar2;
    uVar6 = InterruptDescriptorTableRegister();
    uStack_e = uVar6 >> 0x10;
    piVar1 = *(CONCAT22(unaff_SI,uStack_e) + -4);
    (**(*piVar1 + 0x18))(piVar1,puVar5);
    return;
}


/* fcn.00004824 @ 0x4824 */

uint fcn.00004824(uint32_t param_1)

{
    uint32_t uVar1;
    
    if (-1 < *(param_1 + 0x2c)) {
        uVar1 = 1 << (*(param_1 + 0x2c) >> 0x10 & 0x1f);
        if (uVar1 < 8) {
            uVar1 = 8;
        }
        if (param_1 % uVar1 != 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.000047c3 @ 0x47c3 */

int32_t __fastcall fcn.000047c3(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),param_1,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000140 @ 0x140 */

uchar * fcn.00000140(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00000908 @ 0x908 */

uint __cdecl fcn.00000908(int8_t arg_8h,int32_t arg_ch)

{
    int8_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    char cVar5;
    uint8_t uVar6;
    char cVar7;
    int iVar8;
    uint8_t uVar9;
    int in_ECX;
    uint32_t uVar10;
    uint32_t uVar11;
    int in_EDX;
    uint32_t uVar12;
    uint32_t uVar13;
    int iVar14;
    char acStack_28 [36];
    
    cVar5 = fcn.00004bf0();
    uVar2 = *(in_ECX + 0x20);
    iVar3 = *(in_ECX + 0x24);
    iVar8 = *arg_ch;
    uVar4 = *(in_ECX + 0x2c);
    if ((iVar8 == 0) || (in_EDX != 0)) {
        if (*(in_ECX + 0x34) == 0) {
            iVar8 = *(in_ECX + 0x30) + in_ECX;
        }
        else {
            iVar8 = *(in_ECX + 0x34) + in_ECX;
            iVar8 = *(iVar8 + 0x10) + iVar8;
        }
        uVar13 = iVar8 + (-iVar8 & 7U);
    }
    else {
        if ((*(iVar8 + 0x13) & 1) == 0) {
            uVar13 = *(iVar8 + 0x14);
        }
        else {
            uVar13 = *(iVar8 + 0x18);
        }
        uVar13 = (-uVar13 & 7) + iVar8 + uVar13;
    }
    uVar12 = uVar13 - in_ECX;
    do {
        if ((iVar3 + -1 + (0x17 < uVar2) == 0) && (uVar2 - 0x18 <= uVar12)) {
            *arg_ch = 0;
            return 0x8000000e;
        }
        uVar9 = *(uVar13 + 0x17);
        if ((uVar4 & 0x800) != 0) {
            uVar9 = ~uVar9;
        }
        uVar6 = 0x80;
        do {
            if ((uVar9 & uVar6) != 0) break;
            uVar6 = uVar6 >> 1;
        } while (uVar6 != 0);
        if (uVar6 == 1) {
code_r0x00000a0e:
            if ((*(uVar13 + 0x13) & 1) == 0) {
                iVar8 = 0x18;
                iVar14 = 0x18;
            }
            else {
                iVar8 = 0x20;
                iVar14 = 0x20;
            }
        }
        else if ((uVar6 == 4) || (uVar6 == 8)) {
            if ((*(uVar13 + 0x13) & 1) == 0) {
                fcn.00004b8b(acStack_28,uVar13,0x18);
                cVar7 = '\0';
                acStack_28[0x17] = 0;
                acStack_28[0x11] = 0;
                uVar10 = 0;
                do {
                    cVar7 = cVar7 + acStack_28[uVar10];
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x18);
            }
            else {
                fcn.00004b8b(acStack_28,uVar13,0x20);
                cVar7 = '\0';
                acStack_28[0x17] = 0;
                acStack_28[0x11] = 0;
                uVar10 = 0;
                do {
                    cVar7 = cVar7 + acStack_28[uVar10];
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x20);
            }
            acStack_28[0x17] = 0;
            acStack_28[0x11] = 0;
            if (cVar7 != '\0') {
                *arg_ch = 0;
                return 0x8000000e;
            }
            uVar9 = *(uVar13 + 0x13) & 1;
            if (uVar9 == 0) {
                uVar10 = *(uVar13 + 0x14);
                iVar8 = (-uVar10 & 7) + uVar10;
code_r0x00000af4:
                cVar7 = -0x56;
                if ((*(uVar13 + 0x13) & 0x40) != 0) {
                    cVar7 = '\0';
                    if (uVar9 == 0) {
                        uVar11 = 0;
                        if (uVar10 != 0x18) {
                            do {
                                cVar7 = cVar7 + *(uVar13 + 0x18 + uVar11);
                                uVar11 = uVar11 + 1;
                            } while (uVar11 < uVar10 - 0x18);
                        }
                    }
                    else {
                        uVar11 = 0;
                        if (uVar10 != 0x20) {
                            do {
                                cVar7 = cVar7 + *(uVar13 + 0x20 + uVar11);
                                uVar11 = uVar11 + 1;
                            } while (uVar11 < uVar10 - 0x20);
                        }
                    }
                    cVar7 = -cVar7;
                }
                if (*(uVar13 + 0x11) != cVar7) {
                    *arg_ch = 0;
                    return 0x8000000e;
                }
                if (in_EDX == 0) {
                    iVar1 = *(uVar13 + 0x12);
                    if (arg_8h == -1) {
                        if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 0xb)) {
code_r0x00000b47:
                            *arg_ch = uVar13;
                            return 0;
                        }
                    }
                    else if ((arg_8h == iVar1) || (arg_8h == 0)) {
                        cVar7 = iVar1 + 0x10;
                        goto code_r0x00000b45;
                    }
                }
                else {
                    cVar7 = fcn.00004bf0();
code_r0x00000b45:
                    if (cVar7 != '\0') goto code_r0x00000b47;
                }
            }
            else {
                uVar10 = *(uVar13 + 0x18);
                iVar8 = (-uVar10 & 7) + uVar10;
                if (cVar5 != '\0') goto code_r0x00000af4;
            }
            iVar14 = iVar8;
        }
        else {
            if (uVar6 != 0x10) {
                if (uVar6 != 0x20) {
                    *arg_ch = 0;
                    return 0x8000000e;
                }
                goto code_r0x00000a0e;
            }
            if ((*(uVar13 + 0x13) & 1) == 0) {
                uVar10 = *(uVar13 + 0x14);
            }
            else {
                uVar10 = *(uVar13 + 0x18);
            }
            iVar8 = (-uVar10 & 7) + uVar10;
            iVar14 = iVar8;
        }
        uVar12 = uVar12 + iVar14;
        uVar13 = uVar13 + iVar8;
    } while( true );
}


/* fcn.00001815 @ 0x1815 */

uint fcn.00001815(int param_1,uint32_t param_2,uint32_t param_3)

{
    uint8_t uVar1;
    int *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    
    if (((param_2 != 0) && (param_3 != 0)) && (piVar2 = fcn.0000083d(), piVar2 != NULL)) {
        uVar6 = *(param_2 + 0x17);
        if ((*(*piVar2 + 0x2c) & 0x800) != 0) {
            uVar6 = ~uVar6;
        }
        uVar1 = 0x80;
        do {
            if ((uVar6 & uVar1) != 0) break;
            uVar1 = uVar1 >> 1;
        } while (uVar1 != 0);
        if ((uVar1 == 4) || (uVar1 == 8)) {
            if ((*(param_2 + 0x13) & 1) == 0) {
                iVar3 = param_2 + 0x18;
                *(param_3 + 0x1c) = *(param_2 + 0x14) - 0x18;
            }
            else {
                if (*(param_1 + -4) == '\0') {
                    return 0x80000002;
                }
                *(param_3 + 0x1c) = *(param_2 + 0x18) + -0x20;
                iVar3 = param_2 + 0x20;
            }
            *(param_3 + 0x18) = iVar3;
            fcn.00004b8b(param_3,param_2,0x10);
            *(param_3 + 0x10) = *(param_2 + 0x12);
            uVar6 = *(param_2 + 0x13);
            uVar4 = uVar6 >> 3 & 7;
            if ((uVar6 & 2) == 0) {
                puVar5 = uVar4 - 0x39c00;
            }
            else {
                puVar5 = uVar4 - 0x39c08;
            }
            uVar4 = *puVar5;
            if ((uVar6 & 4) != 0) {
                uVar4 = uVar4 | 0x100;
            }
            *(param_3 + 0x14) = uVar4;
            if ((*(*piVar2 + 0x2c) & 0x400) != 0) {
                *(param_3 + 0x14) = uVar4 | 0x200;
            }
            return 0;
        }
    }
    return 0x80000002;
}


/* fcn.000019fb @ 0x19fb */

int fcn.000019fb(int param_1,uint param_2,int param_3,int param_4,int param_5,uint32_t *param_6)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uStack_14;
    uint32_t *puStack_10;
    int iStack_c;
    uint32_t var_4h;
    
    if (param_5 == 0) {
        iVar1 = -0x7ffffff2;
    }
    else {
        iVar2 = fcn.0000083d();
        if (iVar2 == 0) {
            iVar1 = -0x7ffffff2;
        }
        else {
            if ((*(param_4 + 0x13) & 1) == 0) {
                uVar3 = *(param_4 + 0x14);
                iVar1 = 0x18;
            }
            else {
                if (*(param_1 + -4) == '\0') {
                    return -0x7ffffff2;
                }
                uVar3 = *(param_4 + 0x18);
                iVar1 = 0x20;
            }
            uStack_14 = 0;
            iStack_c = param_3 + 1;
            puStack_10 = &var_4h;
            var_4h = InterruptDescriptorTableRegister();
            iVar1 = fcn.00000e24(&iStack_c,iVar1 + param_4,uVar3 - iVar1,param_5,&uStack_14,*(param_1 + -4));
            if (-1 < iVar1) {
                *param_6 = *(iVar2 + 0x1c) | uStack_14;
            }
        }
    }
    return iVar1;
}


/* fcn.00001c2b @ 0x1c2b */

uint __thiscall fcn.00001c2b(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
    uint32_t uVar1;
    char cVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    
    uVar6 = 0;
    uVar1 = *(param_1 + 0x48);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.00004bf0();
            if (cVar2 != '\0') break;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
        uVar3 = 0x8000000e;
    }
    else {
        iVar4 = *(param_1 + 0x40);
        iVar5 = uVar6 * 0x28;
        uVar6 = uVar6 + 1;
        *param_2 = *(iVar4 + 0x10 + iVar5);
        *param_3 = *(iVar4 + 0x14 + iVar5);
        *param_4 = *(iVar4 + 0x18 + iVar5);
        if (uVar6 < uVar1) {
            iVar4 = uVar6 * 0x28;
            do {
                fcn.00004b8b(*(param_1 + 0x40) + iVar5,iVar4 + *(param_1 + 0x40),0x28);
                iVar4 = iVar4 + 0x28;
                uVar6 = uVar6 + 1;
                iVar5 = iVar5 + 0x28;
            } while (uVar6 < *(param_1 + 0x48));
        }
        *(param_1 + 0x48) = *(param_1 + 0x48) + -1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00004758 @ 0x4758 */

void fcn.00004758(void)

{
    int32_t var_4h;
    
    fcn.00004944();
    fcn.00004735();
    return;
}


/* fcn.00004852 @ 0x4852 */

void __thiscall fcn.00004852(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    int iVar1;
    
    iVar1 = fcn.000047c3();
    if (iVar1 != 0) {
        fcn.00000120(iVar1 + 8,0x10);
        *(iVar1 + 0x1c) = param_3;
        *(iVar1 + 0x20) = param_4;
        *(iVar1 + 0x24) = param_5;
        *(iVar1 + 0x18) = param_2;
        *(iVar1 + 0x28) = param_1;
        fcn.00000120(iVar1 + 0x2c,4);
    }
    return;
}


/* fcn.000021c2 @ 0x21c2 */

void __cdecl fcn.000021c2(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    ushort *puVar1;
    uint in_ECX;
    
    puVar1 = fcn.00004758();
    while( true ) {
        if (puVar1 == NULL) {
            fcn.00004852(arg_8h,arg_ch,arg_10h,arg_14h);
            return;
        }
        if (puVar1[1] == 0x30) break;
        puVar1 = fcn.00004735();
    }
    *puVar1 = 2;
    fcn.00000120(puVar1 + 4,0x10);
    *(puVar1 + 0xc) = arg_8h;
    *(puVar1 + 0xe) = arg_ch;
    *(puVar1 + 0x10) = arg_10h;
    *(puVar1 + 0x12) = arg_14h;
    *(puVar1 + 0x14) = in_ECX;
    fcn.00000120(puVar1 + 0x16,4);
    return;
}


/* fcn.000022de @ 0x22de */

uchar fcn.000022de(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ushort *puVar5;
    int iVar6;
    int iVar7;
    uchar uVar8;
    bool bVar9;
    
    uVar8 = 0;
    puVar5 = fcn.00004758();
    do {
        if (puVar5 == NULL) {
            return uVar8;
        }
        if (*(puVar5 + 0x14) == 7) {
            uVar2 = *(puVar5 + 0x10);
            uVar3 = *(puVar5 + 0xc);
            iVar7 = *(puVar5 + 0x12);
            iVar4 = *(puVar5 + 0xe);
            do {
                do {
                    iVar6 = fcn.00004735();
                    if (iVar6 == 0) goto code_r0x00002386;
                } while (*(iVar6 + 0x28) != 7);
                if ((uVar3 == *(iVar6 + 0x20) + *(iVar6 + 0x18)) &&
                   (iVar4 == *(iVar6 + 0x24) + *(iVar6 + 0x1c) + CARRY4(*(iVar6 + 0x20),*(iVar6 + 0x18)))) {
                    puVar1 = iVar6 + 0x20;
                    bVar9 = CARRY4(*puVar1,*(puVar5 + 0x10));
                    *puVar1 = *puVar1 + *(puVar5 + 0x10);
                    goto code_r0x00002379;
                }
            } while ((uVar2 + uVar3 != *(iVar6 + 0x18)) || (iVar7 + iVar4 + CARRY4(uVar2,uVar3) != *(iVar6 + 0x1c)));
            *(iVar6 + 0x18) = uVar3;
            *(iVar6 + 0x1c) = iVar4;
            puVar1 = iVar6 + 0x20;
            bVar9 = CARRY4(*puVar1,*(puVar5 + 0x10));
            *puVar1 = *puVar1 + *(puVar5 + 0x10);
            iVar7 = *(puVar5 + 0x12);
code_r0x00002379:
            *(iVar6 + 0x24) = *(iVar6 + 0x24) + iVar7 + bVar9;
            uVar8 = 1;
            *puVar5 = 0xfffe;
        }
code_r0x00002386:
        puVar5 = fcn.00004735();
    } while( true );
}


/* fcn.00002244 @ 0x2244 */

void __fastcall
fcn.00002244(int param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,int param_6)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t arg_ch;
    
    uVar1 = *(param_1 + 0x18) + *(param_1 + 0x20);
    uVar2 = *(param_1 + 0x1c) + *(param_1 + 0x24) + CARRY4(*(param_1 + 0x18),*(param_1 + 0x20));
    arg_ch = param_4 + param_6 + CARRY4(param_3,param_5);
    if ((arg_ch <= uVar2) && ((arg_ch < uVar2 || (param_3 + param_5 < uVar1)))) {
        fcn.000021c2(param_3 + param_5,arg_ch,(uVar1 - param_3) - param_5,
                     (((uVar2 - param_4) - (uVar1 < param_3)) - param_6) - (uVar1 - param_3 < param_5));
    }
    if ((*(param_1 + 0x1c) <= param_4) && ((param_4 != *(param_1 + 0x1c) || (*(param_1 + 0x18) < param_3)))) {
        fcn.000021c2(*(param_1 + 0x18),*(param_1 + 0x1c),param_3 - *(param_1 + 0x18),
                     (param_4 - *(param_1 + 0x1c)) - (param_3 < *(param_1 + 0x18)));
    }
    *(param_1 + 0x20) = param_5;
    *(param_1 + 0x18) = param_3;
    *(param_1 + 0x24) = param_6;
    *(param_1 + 0x1c) = param_4;
    *(param_1 + 0x28) = param_2;
    return;
}


/* fcn.000023a8 @ 0x23a8 */

uint __cdecl fcn.000023a8(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t in_EDX;
    uint32_t uVar5;
    uint32_t uVar6;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    do {
        uVar1 = in_EDX >> 0x14;
        uVar3 = in_EDX * 0x1000;
        iVar4 = fcn.00004758();
        if (iVar4 != 0) {
            do {
                if (((*(iVar4 + 0x28) == 7) && (uVar1 <= *(iVar4 + 0x24))) &&
                   ((uVar1 < *(iVar4 + 0x24) || (uVar3 <= *(iVar4 + 0x20))))) {
                    uVar5 = *(iVar4 + 0x18) + in_EDX * -0x1000;
                    uVar6 = uVar5 + *(iVar4 + 0x20) & ~(arg_8h - 1U);
                    uVar5 = ((*(iVar4 + 0x1c) - uVar1) - (*(iVar4 + 0x18) < uVar3)) + *(iVar4 + 0x24) +
                            CARRY4(uVar5,*(iVar4 + 0x20)) & ~((arg_8h != 0) - 1);
                    var_8h = iVar4;
                    if ((*(iVar4 + 0x1c) < uVar5) || ((*(iVar4 + 0x1c) <= uVar5 && (*(iVar4 + 0x18) <= uVar6)))) break;
                }
                iVar4 = fcn.00004735();
                uVar6 = 0;
                uVar5 = 0;
                var_8h = 0;
            } while (iVar4 != 0);
            if (var_8h != 0) {
                fcn.00002244(uVar6,uVar5,uVar3,uVar1);
                *arg_ch = uVar6;
                *(arg_ch + 4) = uVar5;
                return 0;
            }
        }
        cVar2 = fcn.000022de();
        if (cVar2 == '\0') {
            return 0x8000000e;
        }
    } while( true );
}


/* fcn.0000257c @ 0x257c */

void __fastcall fcn.0000257c(int param_1,ushort *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    
    while( true ) {
        if ((*(param_1 + 0x69) != '\0') || (puVar4 = param_1 + 0x118, *(param_1 + 0x68) == '\0')) {
            puVar4 = *(param_1 + 100) + 0x20;
        }
        uVar1 = *puVar4;
        if ((*(param_2 + 0xc) != uVar1) || (*(param_2 + 0xe) != puVar4[1])) break;
        uVar2 = *(param_2 + 0x10);
        iVar3 = *(param_2 + 0x12);
        *puVar4 = uVar2 + uVar1;
        puVar4[1] = iVar3 + puVar4[1] + CARRY4(uVar2,uVar1);
        *param_2 = 0xfffe;
        param_2 = fcn.00004758();
        while( true ) {
            if (param_2 == NULL) {
                return;
            }
            if (((*(param_2 + 0x14) == 7) && (*(param_2 + 0xc) == *puVar4)) && (*(param_2 + 0xe) == puVar4[1])) break;
            param_2 = fcn.00004735();
        }
    }
    return;
}


/* fcn.00001f73 @ 0x1f73 */

//WARNING: Variable defined which should be unmapped: var_1h

void __fastcall fcn.00001f73(int param_1,char param_2)

{
    uint32_t arg_10h;
    int iVar1;
    uint32_t arg_ch;
    int iVar2;
    uint32_t uVar3;
    uint32_t arg_8h;
    uint32_t var_1h;
    
    iVar2 = *(param_1 + 100);
    iVar1 = *(iVar2 + 0x10) - *(iVar2 + 0x20);
    *(param_1 + 0x138) = iVar1;
    if (iVar1 != 0) {
        arg_10h = *(param_1 + 0x138);
        uVar3 = *(param_1 + 0x11c) - (*(param_1 + 0x118) < arg_10h);
        *(param_1 + 0x130) = *(iVar2 + 0x20);
        arg_8h = *(param_1 + 0x118) - arg_10h & 0xfffff000;
        *(param_1 + 0x134) = *(iVar2 + 0x24);
        if (param_2 == '\0') {
            arg_ch = *(param_1 + 0x130);
        }
        else {
            if (*(param_1 + 0x124) == '\0') {
                iVar2 = -*(param_1 + 0x120);
            }
            else {
                iVar2 = *(param_1 + 0x120);
            }
            arg_ch = *(param_1 + 0x130) + iVar2;
        }
        fcn.00004b8b(arg_8h,arg_ch,arg_10h);
        if ((uVar3 < *(param_1 + 0x134)) || ((uVar3 <= *(param_1 + 0x134) && (arg_8h < *(param_1 + 0x130))))) {
            *(param_1 + 0x140) = 0;
            iVar2 = *(param_1 + 0x130) - arg_8h;
        }
        else {
            *(param_1 + 0x140) = 1;
            iVar2 = arg_8h - *(param_1 + 0x130);
        }
        *(param_1 + 0x13c) = iVar2;
        *(param_1 + 0x118) = arg_8h;
        *(param_1 + 0x11c) = uVar3;
    }
    return;
}


/* fcn.00004541 @ 0x4541 */

//WARNING: Restarted to delay deadcode elimination for space: stack

void fcn.00004541(void)

{
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))
              (*(stack0xfffffff2 + -4),3,((var_ch + 5 & 0xfff) != 0) + (var_ch + 5 >> 0xc),&var_14h);
    fcn.00004b8b(var_14h,stack0xfffffff2 - 4,var_ch + 5);
    var_ch._2_2_ = var_14h + 4;
    InterruptDescriptorTableRegister(CONCAT22(var_ch._2_2_,var_ch));
    return;
}


/* fcn.000046e3 @ 0x46e3 */

void __cdecl fcn.000046e3(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int32_t var_1ch;
    int32_t var_ch;
    int32_t var_8h;
    
    var_ch = arg_14h + -0xc;
    var_8h = arg_8h;
    *(arg_14h + -8) = arg_ch;
    *(arg_14h + -4) = arg_10h;
    fcn.000000a0(&var_1ch,0xffffffff);
    return;
}


/* fcn.000000a0 @ 0xa0 */

void fcn.000000a0(int param_1)

{
    //[00] -r-x section size 24304 named .text
    //WARNING: Could not recover jumptable at 0x000000d9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(param_1 + 0x14))();
    return;
}


/* fcn.000041ce @ 0x41ce */

void __fastcall fcn.000041ce(int32_t param_1,uint *param_2)

{
    int iVar1;
    int32_t var_4h;
    
    *param_2 = 0;
    var_4h = param_1;
    iVar1 = fcn.00004969(param_1,param_2,&var_4h);
    if (iVar1 < 0) {
        fcn.00004969(param_1,param_2,&var_4h);
    }
    return;
}


/* fcn.00004969 @ 0x4969 */

void __cdecl fcn.00004969(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x78))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00005110 @ 0x5110 */

int __fastcall fcn.00005110(int *param_1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    bool bVar8;
    int iStack_164;
    uint32_t uStack_160;
    uint32_t uStack_15c;
    uint32_t *puStack_158;
    uint32_t uStack_154;
    uchar auStack_150 [8];
    int iStack_148;
    uint32_t uStack_144;
    int iStack_13c;
    uchar auStack_128 [12];
    int iStack_11c;
    uint32_t uStack_118;
    int iStack_114;
    int iStack_110;
    uchar auStack_10c [4];
    uint8_t uStack_108;
    uint16_t uStack_106;
    uint32_t uStack_fc;
    uint32_t uStack_f8;
    int iStack_f4;
    int iStack_f0;
    uint32_t uStack_ec;
    uint32_t uStack_e8;
    int iStack_dc;
    int iStack_d8;
    uint32_t uStack_98;
    uint32_t uStack_88;
    uint32_t auStack_64 [4];
    uint32_t auStack_54 [21];
    
    if (param_1 == NULL) {
        return -0x7ffffffe;
    }
    uVar5 = 0;
    param_1[0x13] = 0;
    iVar3 = fcn.00004c47(auStack_10c);
    if (iVar3 < 0) {
        return iVar3;
    }
    cVar1 = *(param_1 + 0x59);
    if (cVar1 == '\0') {
        uStack_160 = 0;
        if (iStack_f4 == 0x10b) {
            param_1[1] = 0;
            goto code_r0x000051a1;
        }
        *param_1 = iStack_dc;
        param_1[1] = iStack_d8;
    }
    else {
        uStack_160 = uStack_106 - 0x28;
        iStack_d8 = uStack_160 + uStack_fc;
        param_1[1] = uStack_f8 + CARRY4(uStack_160,uStack_fc);
code_r0x000051a1:
        *param_1 = iStack_d8;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if (cVar1 == '\0') {
        if ((uStack_f8 & 0x10000) != 0) {
code_r0x000051ce:
            *(param_1 + 0x16) = 1;
            goto code_r0x000051d7;
        }
    }
    else if ((iStack_f0 == 0) && (iStack_f4 == 0)) goto code_r0x000051ce;
    *(param_1 + 0x16) = 0;
code_r0x000051d7:
    if (cVar1 == '\0') {
        if (iStack_f4 == 0x10b) {
            puVar6 = auStack_64;
        }
        else {
            puVar6 = auStack_54;
            uStack_98 = uStack_88;
        }
        if (6 < uStack_98) {
            uVar5 = *puVar6;
            uStack_160 = (uStack_f8 & 0xffff) + 0x18 + param_1[0xc];
            bVar8 = uStack_106 != 0;
            uStack_15c = 0;
            puStack_158 = puVar6;
            uStack_154 = uVar5;
            while (bVar8) {
                iStack_164 = 0x28;
                iVar4 = (*param_1[8])(param_1[9],uStack_160,&iStack_164,auStack_150);
                if (iVar4 < 0) goto code_r0x00005323;
                bVar8 = iStack_164 == 0x28;
                if (!bVar8) goto code_r0x00005328;
                if ((uStack_144 <= uVar5) && (uVar5 < iStack_148 + uStack_144)) {
                    uStack_160 = (iStack_13c - uStack_144) + uVar5;
                    if (uStack_160 == 0) {
                        return 0;
                    }
                    uVar5 = 0;
                    if (puVar6[1] == 0) {
                        return 0;
                    }
                    goto code_r0x000052b2;
                }
                uStack_160 = uStack_160 + 0x28;
                uStack_15c = uStack_15c + 1;
                bVar8 = uStack_15c < uStack_106;
            }
        }
    }
    else {
        iVar3 = 0;
        uVar7 = 0;
        puStack_158 = uStack_ec;
        uStack_15c = 0x28;
        if (uStack_108 != 0) {
            do {
                iStack_164 = 0x28;
                iVar4 = (*param_1[8])(param_1[9],uStack_15c,&iStack_164,auStack_150);
                if (iVar4 < 0) goto code_r0x00005323;
                bVar8 = iStack_164 == 0x28;
                if (!bVar8) goto code_r0x00005328;
                if ((puStack_158 < uStack_144) || (uStack_144 + iStack_148 <= puStack_158)) {
code_r0x000053d5:
                    uVar7 = uVar7 + 1;
                    if (uVar7 == uStack_108) {
                        param_1[3] = 0;
                        param_1[2] = (iStack_148 - uStack_160) + uStack_144;
                    }
                    uStack_15c = uStack_15c + 0x28;
                }
                else {
                    iVar3 = ((iStack_13c - uStack_144) - uStack_160) + puStack_158;
                    uVar2 = uStack_108;
                    if (uVar2 - 1 <= uVar7) goto code_r0x000053d5;
                    iVar4 = uVar2 - uVar7;
                    uVar7 = uVar2 - 1;
                    uStack_15c = uStack_15c + -0x28 + iVar4 * 0x28;
                }
            } while (uVar7 < uStack_108);
            if ((iVar3 != 0) && (uStack_e8 != 0)) {
                do {
                    iStack_164 = 0x1c;
                    iVar4 = (*param_1[8])(param_1[9],uVar5 + iVar3,&iStack_164,auStack_128);
                    if (iVar4 < 0) goto code_r0x0000531d;
                    bVar8 = iStack_164 == 0x1c;
                    if (!bVar8) goto code_r0x00005328;
                    if (iStack_11c == 2) {
                        param_1[0xd] = puStack_158 + uVar5;
                        return 0;
                    }
                    uVar5 = uVar5 + 0x1c;
                } while (uVar5 < uStack_e8);
            }
        }
    }
    return 0;
code_r0x00005323:
    bVar8 = iStack_164 == 0x28;
    goto code_r0x00005328;
code_r0x000052b2:
    iStack_164 = 0x1c;
    iVar4 = (*param_1[8])(param_1[9],uStack_160 + uVar5,&iStack_164,auStack_128);
    if (iVar4 < 0) goto code_r0x0000531d;
    bVar8 = iStack_164 == 0x1c;
    if (!bVar8) goto code_r0x00005328;
    if (iStack_11c == 2) {
        param_1[0xd] = uStack_154 + uVar5;
        if (iStack_114 != 0) {
            return 0;
        }
        if (iStack_110 == 0) {
            return 0;
        }
        puVar6 = param_1 + 2;
        uVar5 = *puVar6;
        *puVar6 = *puVar6 + uStack_118;
        param_1[3] = param_1[3] + CARRY4(uVar5,uStack_118);
        return 0;
    }
    uVar5 = uVar5 + 0x1c;
    if (puStack_158[1] <= uVar5) {
        return 0;
    }
    goto code_r0x000052b2;
code_r0x0000531d:
    bVar8 = iStack_164 == 0x1c;
code_r0x00005328:
    param_1[0x13] = 1;
    if (!bVar8) {
        return -0x7ffffffd;
    }
    return iVar4;
}


/* fcn.0000571f @ 0x571f */

int __fastcall fcn.0000571f(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    int iVar8;
    uint32_t uStack_8c;
    uint16_t *puStack_88;
    uint32_t uStack_84;
    int iStack_80;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    int iStack_74;
    int iStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    int16_t iStack_1e;
    char cStack_1c;
    
    param_1[0x13] = 0;
    fcn.00004b8b(&iStack_74,param_1,0x70);
    iVar1 = fcn.00005110();
    if (iVar1 < 0) {
        return iVar1;
    }
    if ((param_1[3] <= uStack_68) && ((param_1[3] < uStack_68 || (param_1[2] < uStack_6c)))) {
        param_1[0x13] = 6;
        return -0x7ffffffb;
    }
    if (*param_1 == 0 && param_1[1] == 0) {
code_r0x00005781:
        param_1[0x13] = 5;
        return -0x7ffffffe;
    }
    if (cStack_1c != '\0') {
        if (iStack_1e == 0xc) {
            param_1[0x13] = 4;
            return -0x7fffffff;
        }
        if ((iStack_74 != *param_1) || (iStack_70 != param_1[1])) goto code_r0x00005781;
    }
    if (*(param_1 + 0x59) == '\0') {
        iStack_80 = (*param_1[8])();
        iVar8 = param_1[0xc] + *param_1;
        iVar1 = *param_1 + 0x18 + *(iVar8 + 0x14) + param_1[0xc];
        uStack_78 = *(iVar8 + 6);
        iVar2 = 0;
    }
    else {
        iStack_80 = (*param_1[8])(param_1[9],0,param_1 + 0x10,*param_1);
        iVar8 = *param_1;
        iVar1 = iVar8 + 0x28;
        uStack_78 = *(iVar8 + 4);
        iVar2 = *(iVar8 + 6) - 0x28;
    }
    if (iStack_80 < 0) {
        param_1[0x13] = 1;
        return -0x7fffffff;
    }
    uStack_7c = 0;
    if (uStack_78 != 0) {
        do {
            uVar6 = *(iVar1 + 8);
            if ((uVar6 == 0) || (*(iVar1 + 0x10) < uVar6)) {
                uVar6 = *(iVar1 + 0x10);
            }
            uStack_84 = uVar6;
            iVar3 = fcn.00005467(iVar2);
            iVar4 = fcn.00005467(iVar2);
            if ((uVar6 != 0) && ((iVar3 == 0 || (iVar4 == 0)))) {
                param_1[0x13] = 8;
                return -0x7fffffff;
            }
            if (*(iVar1 + 0x10) != 0) {
                iStack_80 = (*param_1[8])(param_1[9],*(iVar1 + 0x14) - iVar2,&uStack_84,iVar3);
                if (iStack_80 < 0) goto code_r0x00005a11;
                uVar6 = uStack_84;
            }
            if (uVar6 < *(iVar1 + 8)) {
                fcn.00004bb2();
            }
            iVar1 = iVar1 + 0x28;
            uStack_7c = uStack_7c + 1;
        } while (uStack_7c < uStack_78);
    }
    if (*(param_1 + 0x59) == '\0') {
        iVar3 = fcn.00005467(0);
        param_1[7] = 0;
    }
    else {
        iVar3 = fcn.00005467(iVar2);
        param_1[7] = 0;
    }
    param_1[6] = iVar3;
    if (*(param_1 + 0x59) == '\0') {
        if (*(iVar8 + 0x18) == 0x10b) {
            uVar6 = *(iVar8 + 0x74);
            iVar3 = 0xa4;
        }
        else {
            uVar6 = *(iVar8 + 0x84);
            iVar3 = 0xb4;
        }
        if (5 < uVar6) {
            uVar6 = *(iVar3 + iVar8);
            goto code_r0x00005966;
        }
        param_1[0x14] = 0;
    }
    else {
        uVar6 = *(iVar8 + 0x1c);
code_r0x00005966:
        param_1[0x14] = (uVar6 >> 1) << 3;
    }
    param_1[10] = 0;
    if (param_1[0xd] != 0) {
        iVar3 = fcn.00005467(iVar2);
        if (iVar3 == 0) goto code_r0x0000598e;
        puStack_88 = *(iVar3 + 0x14);
        if (puStack_88 == NULL) {
            if (*(iVar3 + 0x18) != 0) {
                uVar6 = *(iVar1 + -0x20);
                if (uVar6 <= *(iVar1 + -0x18)) {
                    uVar6 = *(iVar1 + -0x18);
                }
                puStack_88 = *(iVar1 + -0x1c) + uVar6;
            }
            if (puStack_88 == NULL) goto code_r0x00005a72;
        }
        iVar1 = fcn.00005467(iVar2);
        param_1[0xe] = iVar1;
        if (iVar1 == 0) {
code_r0x0000598e:
            param_1[0x13] = 9;
            return -0x7fffffff;
        }
        if (*(iVar3 + 0x14) == 0) {
            uStack_84 = *(iVar3 + 0x10);
            iStack_80 = (*param_1[8])(param_1[9],*(iVar3 + 0x18) - iVar2,&uStack_84,iVar1);
            if (iStack_80 < 0) {
                iStack_80 = -0x7fffffff;
code_r0x00005a11:
                param_1[0x13] = 1;
                return iStack_80;
            }
            *(iVar3 + 0x14) = puStack_88;
        }
        piVar5 = param_1[0xe];
        if (*piVar5 == 0x3031424e) {
            if (*(iVar3 + 0x10) < 0x10) goto code_r0x00005a5b;
            piVar5 = piVar5 + 4;
        }
        else if (*piVar5 == 0x434f544d) {
            if (*(iVar3 + 0x10) < 0x14) goto code_r0x00005a5b;
            piVar5 = piVar5 + 5;
        }
        else {
            if (*piVar5 != 0x53445352) goto code_r0x00005a72;
            if (*(iVar3 + 0x10) < 0x18) goto code_r0x00005a5b;
            piVar5 = piVar5 + 6;
        }
        param_1[0xf] = piVar5;
    }
code_r0x00005a72:
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    if (*(param_1 + 0x59) == '\0') {
        if (*(iVar8 + 0x18) == 0x10b) {
            uVar6 = *(iVar8 + 0x74);
            iVar1 = 0x88;
        }
        else {
            uVar6 = *(iVar8 + 0x84);
            iVar1 = 0x98;
        }
        if (((2 < uVar6) && (*(iVar8 + 4 + iVar1) != 0)) && (iVar2 = fcn.00005467(0), iVar2 != 0)) {
            puStack_88 = iVar2 + 0xc;
            if (*(iVar8 + 4 + iVar1) < (*(iVar2 + 0xe) + *puStack_88) * 8 + 0x10) {
code_r0x00005a5b:
                param_1[0x13] = 0xb;
                return -0x7ffffffd;
            }
            uStack_8c = 0;
            puVar7 = iVar2 + 0x10;
            if (*puStack_88 != 0) {
                do {
                    if (0x7fffffff < *puVar7) {
                        uVar6 = *puVar7 & 0x7fffffff;
                        if (*(iVar8 + 4 + iVar1) <= uVar6) goto code_r0x00005a5b;
                        if (((*(uVar6 + iVar2) == 3) && (*(uVar6 + 2 + iVar2) == 0x48)) &&
                           ((*(uVar6 + 4 + iVar2) == 0x49 && (*(uVar6 + 6 + iVar2) == 0x49)))) {
                            if (0x7fffffff < puVar7[1]) {
                                uVar6 = puVar7[1] & 0x7fffffff;
                                if ((*(iVar8 + 4 + iVar1) <= uVar6) ||
                                   (puStack_88 = iVar2 + 0xc + uVar6,
                                   *(iVar8 + 4 + iVar1) < uVar6 + (*puStack_88 + 2 + *(uVar6 + 0xe + iVar2)) * 8))
                                goto code_r0x00005a5b;
                                puVar7 = uVar6 + 0x10 + iVar2;
                                if (0x7fffffff < puVar7[1]) {
                                    uVar6 = puVar7[1] & 0x7fffffff;
                                    if ((*(iVar8 + 4 + iVar1) <= uVar6) ||
                                       (puStack_88 = iVar2 + 0xc + uVar6,
                                       *(iVar8 + 4 + iVar1) < uVar6 + (*puStack_88 + 2 + *(uVar6 + 0xe + iVar2)) * 8))
                                    goto code_r0x00005a5b;
                                    puVar7 = iVar2 + 0x10 + uVar6;
                                }
                            }
                            if (puVar7[1] < 0x80000000) {
                                if (puVar7[1] < *(iVar8 + 4 + iVar1)) {
                                    iVar1 = fcn.00005467(0);
                                    param_1[0x18] = iVar1;
                                    param_1[0x19] = 0;
                                    return iStack_80;
                                }
                                goto code_r0x00005a5b;
                            }
                        }
                    }
                    puVar7 = puVar7 + 2;
                    uStack_8c = uStack_8c + 1;
                } while (uStack_8c < *puStack_88);
            }
        }
    }
    return iStack_80;
}


/* fcn.00005497 @ 0x5497 */

uint __fastcall fcn.00005497(uint32_t *param_1)

{
    uint16_t uVar1;
    int iVar2;
    uint16_t *puVar3;
    uint32_t *puVar4;
    uint uVar5;
    uint32_t uVar6;
    uint16_t *puVar7;
    uint32_t uVar8;
    int iVar9;
    uint16_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t *puVar14;
    uint32_t uStack_1c;
    int iStack_18;
    uint16_t *puStack_8;
    
    param_1[0x13] = 0;
    if (param_1[0x16] == '\0') {
        uVar6 = param_1[4];
        uVar8 = param_1[5];
        if (uVar6 == 0 && uVar8 == 0) {
            uVar6 = *param_1;
            uVar8 = param_1[1];
        }
        if (*(param_1 + 0x59) == '\0') {
            iVar2 = param_1[0xc] + *param_1;
            uStack_1c = 0;
            if (*(iVar2 + 0x18) == 0x10b) {
                uVar11 = uVar6 - *(iVar2 + 0x34);
                iStack_18 = uVar8 - (uVar6 < *(iVar2 + 0x34));
                if (uVar11 != 0 || iStack_18 != 0) {
                    *(iVar2 + 0x34) = uVar6;
                }
                uVar6 = *(iVar2 + 0x74);
                iVar9 = 0xa0;
            }
            else {
                uVar11 = uVar6 - *(iVar2 + 0x30);
                iStack_18 = (uVar8 - *(iVar2 + 0x34)) - (uVar6 < *(iVar2 + 0x30));
                if (uVar11 != 0 || iStack_18 != 0) {
                    *(iVar2 + 0x30) = uVar6;
                    *(iVar2 + 0x34) = uVar8;
                }
                uVar6 = *(iVar2 + 0x84);
                iVar9 = 0xb0;
            }
            uVar13 = ~-(uVar6 < 5) & iVar2 + iVar9;
        }
        else {
            uVar13 = *param_1;
            uStack_1c = *(uVar13 + 6) - 0x28;
            uVar12 = uVar6 - *(uVar13 + 0x10);
            uVar11 = uVar12 - uStack_1c;
            iStack_18 = ((uVar8 - *(uVar13 + 0x14)) - (uVar6 < *(uVar13 + 0x10))) - (uVar12 < uStack_1c);
            if (uVar11 != 0 || iStack_18 != 0) {
                *(uVar13 + 0x10) = uVar6 - uStack_1c;
                *(uVar13 + 0x14) = uVar8 - (uVar6 < uStack_1c);
            }
            uVar13 = uVar13 + 0x18;
        }
        if ((uVar13 == 0) || (*(uVar13 + 4) == 0)) {
            puVar3 = NULL;
            puStack_8 = NULL;
        }
        else {
            puVar3 = fcn.00005467(uStack_1c);
            puStack_8 = fcn.00005467(uStack_1c);
            if (((puVar3 == NULL) || (puStack_8 == NULL)) || (puStack_8 < puVar3)) {
code_r0x000055a4:
                param_1[0x13] = 9;
                return 0x80000001;
            }
        }
        if (uVar11 != 0 || iStack_18 != 0) {
            puVar14 = param_1[10];
            puVar7 = puVar3;
            if (puVar3 < puStack_8) {
                do {
                    uVar6 = *(puVar7 + 2);
                    puVar10 = puVar7 + 4;
                    if (((uVar6 == 0) || (~uVar6 < puVar7)) ||
                       ((puVar7 = uVar6 + puVar7, *(uVar13 + 4) + puVar3 < puVar7 ||
                        (iVar2 = fcn.00005467(uStack_1c), iVar2 == 0)))) goto code_r0x000055a4;
                    for (; puVar10 < puVar7; puVar10 = puVar10 + 1) {
                        puVar4 = fcn.00005467(uStack_1c);
                        if (puVar4 == NULL) {
                            uVar5 = 0x80000001;
code_r0x000056ef:
                            param_1[0x13] = 9;
                            return uVar5;
                        }
                        uVar1 = *puVar10 >> 0xc;
                        if (uVar1 != 0) {
                            if (uVar1 == 1) {
                                *puVar4 = *puVar4 + (uVar11 >> 0x10);
                            }
                            else {
                                if (uVar1 != 2) {
                                    if (uVar1 == 3) {
                                        *puVar4 = *puVar4 + uVar11;
                                        if (puVar14 != NULL) {
                                            puVar14 = puVar14 + (-puVar14 & 3U);
                                            *puVar14 = *puVar4;
                                            puVar14 = puVar14 + 1;
                                        }
                                    }
                                    else {
                                        if (uVar1 != 10) {
                                            uVar5 = 0x80000003;
                                            goto code_r0x000056ef;
                                        }
                                        uVar6 = *puVar4;
                                        *puVar4 = *puVar4 + uVar11;
                                        puVar4[1] = puVar4[1] + iStack_18 + CARRY4(uVar6,uVar11);
                                        if (puVar14 != NULL) {
                                            puVar14 = puVar14 + (-puVar14 & 7U);
                                            *puVar14 = *puVar4;
                                            puVar14[1] = puVar4[1];
                                            puVar14 = puVar14 + 2;
                                        }
                                    }
                                    goto code_r0x000056bf;
                                }
                                *puVar4 = *puVar4 + uVar11;
                            }
                            if (puVar14 != NULL) {
                                *puVar14 = *puVar4;
                                puVar14 = puVar14 + 2;
                            }
                        }
code_r0x000056bf:
                    }
                } while (puVar7 < puStack_8);
            }
            uVar6 = param_1[4];
            if (uVar6 != 0 || param_1[5] != 0) {
                puVar14 = param_1 + 6;
                uVar8 = *puVar14;
                *puVar14 = *puVar14 - *param_1;
                param_1[7] = (param_1[7] - param_1[1]) - (uVar8 < *param_1);
                puVar14 = param_1 + 6;
                uVar8 = *puVar14;
                *puVar14 = *puVar14 + uVar6;
                param_1[7] = param_1[7] + param_1[5] + CARRY4(uVar8,uVar6);
            }
        }
    }
    return 0;
}


/* fcn.00002e2d @ 0x2e2d */

//WARNING: Removing unreachable block (ram,0x00002e53)
//WARNING: Removing unreachable block (ram,0x00002e82)
//WARNING: Removing unreachable block (ram,0x00002e99)
//WARNING: Removing unreachable block (ram,0x00002ea2)

uint fcn.00002e2d(void)

{
    fcn.000041ce();
    return 0;
}


/* fcn.00003b71 @ 0x3b71 */

uint fcn.00003b71(int param_1,int *param_2,int param_3,int *param_4,uint *param_5)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    uint32_t uVar4;
    
    uVar4 = 0;
    if (*(param_1 + 4) != 0) {
        piVar3 = *(param_1 + 0x10);
        do {
            iVar1 = *piVar3;
            piVar2 = *(iVar1 + 4);
            if ((((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) &&
               (param_2[3] == piVar2[3])) {
                if (param_3 == 0) {
                    if (param_4 != NULL) {
                        *param_4 = iVar1;
                    }
                    if (param_5 != NULL) {
                        *param_5 = *(iVar1 + 8);
                    }
                    return 0;
                }
                param_3 = param_3 + -1;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 1;
        } while (uVar4 < *(param_1 + 4));
    }
    return 0x8000000e;
}


/* fcn.00003829 @ 0x3829 */

void __fastcall fcn.00003829(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
    int *piVar1;
    int *piVar2;
    bool bVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t extraout_EDX;
    uint32_t extraout_EDX_00;
    uint32_t extraout_EDX_01;
    uint32_t extraout_EDX_02;
    uint32_t extraout_EDX_03;
    uint32_t extraout_EDX_04;
    uint32_t extraout_EDX_05;
    uint32_t extraout_EDX_06;
    uint32_t extraout_EDX_07;
    uint32_t extraout_EDX_08;
    int iVar7;
    int iVar8;
    uint8_t uStack_11;
    uint auStack_8 [2];
    
    auStack_8[0] = 0xfffc61e4;
    auStack_8[1] = 0xfffc6104;
    if (param_3 <= param_2) {
        iVar8 = param_2 - param_3;
    }
    else {
        iVar8 = param_3 - param_2;
    }
    bVar3 = param_3 > param_2;
    uVar4 = 0;
    if (*(param_1 + 0x18) != 0) {
        uVar5 = 0;
        do {
            iVar7 = uVar5 * 4;
            if (*(*(param_1 + 0x20) + iVar7) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX;
            }
            if (*(*(*(param_1 + 0x20) + iVar7) + 4) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_00;
            }
            if (*(*(*(param_1 + 0x20) + iVar7) + 8) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_01;
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar4;
        } while (uVar5 < *(param_1 + 0x18));
    }
    uVar4 = 0;
    if (*(param_1 + 0x24) != 0) {
        uVar5 = 0;
        do {
            iVar7 = uVar5 * 4;
            if (*(*(param_1 + 0x30) + iVar7) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_02;
            }
            if (*(*(*(param_1 + 0x30) + iVar7) + 4) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_03;
            }
            if (*(*(*(param_1 + 0x30) + iVar7) + 8) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_04;
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar4;
        } while (uVar5 < *(param_1 + 0x24));
    }
    uStack_11 = 0;
    if (*(param_1 + 8) != 0) {
        uVar5 = 0;
        do {
            iVar7 = uVar5 * 4;
            if (*(*(param_1 + 0x14) + iVar7) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_05;
            }
            if (*(*(*(param_1 + 0x14) + iVar7) + 4) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_06;
            }
            if (*(*(*(param_1 + 0x14) + iVar7) + 8) < param_4 + param_2) {
                fcn.00003726(iVar8,bVar3);
                param_2 = extraout_EDX_07;
            }
            iVar7 = *(*(param_1 + 0x14) + iVar7);
            piVar1 = *(iVar7 + 4);
            uVar4 = 0;
            do {
                piVar2 = auStack_8[uVar4];
                if ((((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) && (piVar1[2] == piVar2[2])) &&
                   (piVar1[3] == piVar2[3])) {
                    puVar6 = *(iVar7 + 8) + 0x10;
                    if ((*puVar6 == param_2) && (*puVar6 < param_4 + param_2)) {
                        fcn.00003726(iVar8,bVar3);
                        param_2 = extraout_EDX_08;
                    }
                    break;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 2);
            uStack_11 = uStack_11 + 1;
            uVar5 = uStack_11;
        } while (uVar5 < *(param_1 + 8));
    }
    return;
}


/* fcn.0000499a @ 0x499a */

void __cdecl fcn.0000499a(uint32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000047fd @ 0x47fd */

int fcn.000047fd(void)

{
    int iVar1;
    
    iVar1 = fcn.000047c3();
    if (iVar1 != 0) {
        fcn.00004bd7();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00002f09 @ 0x2f09 */

uint __fastcall fcn.00002f09(int param_1,uint32_t param_2,int param_3,int param_4)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint32_t uStack_4;
    
    if ((param_1 == 0) || (*(param_1 + 0x34) <= param_2)) {
        uVar2 = 0x80000002;
    }
    else {
        iVar4 = param_2 * 0x20;
        if (*(*(param_1 + 0x3c) + 0x18 + iVar4) != '\0') {
            for (uStack_4 = 0; uStack_4 < *(*(param_1 + 0x3c) + 0xc + iVar4); uStack_4 = uStack_4 + 1) {
                if (*(*(*(param_1 + 0x3c) + 0x14 + iVar4) + uStack_4 * 4) != 0) {
                    iVar3 = (*(*(*(param_1 + 0x3c) + 0x14 + iVar4) + uStack_4 * 4) - param_3) + param_4;
                    iVar1 = fcn.00002e2d();
                    if ((-1 < iVar1) &&
                       (*(*(*(param_1 + 0x3c) + 0x14 + iVar4) + uStack_4 * 4) = iVar3, param_2 == *(param_1 + 0x54))) {
                        *(*(param_1 + 0x4c) + uStack_4 * 4) = iVar3;
                    }
                }
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00002eae @ 0x2eae */

void __fastcall fcn.00002eae(uint32_t param_1,int param_2,int param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = fcn.000047a5();
    while (iVar2 != 0) {
        uVar3 = 0;
        if (*(iVar2 + 0x18) != 0) {
            do {
                uVar1 = *(iVar2 + 0x1c + uVar3 * 4);
                if (((uVar1 != 0) && (param_1 <= uVar1)) && (uVar1 < param_1 + param_3)) {
                    *(iVar2 + 0x1c + uVar3 * 4) = (uVar1 - param_1) + param_2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(iVar2 + 0x18));
        }
        iVar2 = fcn.00004776();
    }
    return;
}


/* fcn.000020c8 @ 0x20c8 */

void __cdecl fcn.000020c8(int32_t arg_8h)

{
    int16_t iVar1;
    int16_t *in_ECX;
    int in_EDX;
    int32_t var_4h;
    
    fcn.00004944();
    iVar1 = *in_ECX;
    while (iVar1 != -1) {
        iVar1 = *in_ECX;
        if ((((iVar1 == 5) || (iVar1 == 9)) || (iVar1 == 0xc)) && ((*(in_ECX + 4) == in_EDX && (*(in_ECX + 6) == 0)))) {
            *(in_ECX + 4) = arg_8h;
            in_ECX[6] = 0;
            in_ECX[7] = 0;
        }
        in_ECX = in_ECX + in_ECX[1];
        iVar1 = *in_ECX;
    }
    return;
}


/* fcn.00002045 @ 0x2045 */

void __fastcall fcn.00002045(int16_t *param_1)

{
    int16_t iVar1;
    int16_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    int32_t var_4h;
    
    fcn.00004944();
    iVar1 = *param_1;
    piVar2 = param_1;
    do {
        if (iVar1 == -1) {
            return;
        }
        iVar1 = *piVar2;
        if (((iVar1 == 5) || (iVar1 == 9)) || (iVar1 == 0xc)) {
            uVar3 = *(piVar2 + 4);
            if ((*(param_1 + 0x86) == 0) && (*(param_1 + 0x84) <= uVar3)) {
                iVar4 = *(piVar2 + 8) + uVar3;
                uVar3 = *(piVar2 + 10) + CARRY4(*(piVar2 + 8),uVar3) + -1 + (iVar4 != 0);
                if ((uVar3 < *(param_1 + 0x8e)) || ((uVar3 <= *(param_1 + 0x8e) && (iVar4 - 1U < *(param_1 + 0x8c)))))
                goto code_r0x000020b6;
            }
            *piVar2 = -2;
        }
code_r0x000020b6:
        piVar2 = piVar2 + piVar2[1];
        iVar1 = *piVar2;
    } while( true );
}


/* fcn.0000275e @ 0x275e */

void __fastcall fcn.0000275e(int param_1,int param_2)

{
    char cVar1;
    int iVar2;
    uint32_t arg_ch;
    uint uVar3;
    uint32_t uVar4;
    uint *puVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uStack_50;
    int iStack_48;
    uint32_t uStack_44;
    int iStack_40;
    uint uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint *puStack_30;
    int iStack_2c;
    uchar auStack_28 [4];
    uchar auStack_24 [24];
    unkint3 *pStack_c;
    int iStack_8;
    
    iStack_48 = 0;
    iVar6 = *(param_2 + 4);
    *(param_1 + 0x4c) = 0;
    if (*(param_2 + 0x18) == '\0') {
        arg_ch = *(param_1 + 0x26c);
        puVar5 = NULL;
        uStack_50 = *(param_1 + 0x270);
        puStack_30 = param_2 + 8;
        uStack_3c = 0;
        iStack_40 = param_2;
        iStack_2c = param_1;
        while (iVar2 = (**(iVar6 + 4))(iVar6,0xff,*puStack_30,&uStack_3c), param_2 = iStack_40, -1 < iVar2) {
            if (*(param_1 + 0x268) <= puVar5) {
                arg_ch = fcn.0000467e();
                fcn.00004b8b(arg_ch,*(param_1 + 0x26c),*(param_1 + 0x268) << 2);
                *(param_1 + 0x26c) = arg_ch;
                uStack_50 = fcn.0000467e();
                fcn.00004b8b(uStack_50,*(param_1 + 0x270),*(param_1 + 0x268) << 4);
                *(param_1 + 0x268) = *(param_1 + 0x268) + 0x20;
                *(param_1 + 0x270) = uStack_50;
            }
            *(arg_ch + puVar5 * 4) = uStack_3c;
            puVar5 = puVar5 + 1;
        }
        if (puVar5 == NULL) {
            *(iStack_40 + 0x18) = 1;
            return;
        }
        *(iStack_40 + 0xc) = puVar5;
        puStack_30 = puVar5;
        uVar3 = fcn.000046b5();
        *(param_2 + 0x10) = uVar3;
        uStack_34 = puVar5 << 2;
        uVar3 = fcn.000046b5();
        *(param_2 + 0x14) = uVar3;
        *(param_1 + 0x50) = 0;
        iVar2 = (**(iVar6 + 8))(iVar6,0xfffc61a4,param_2 + 8,&iStack_48);
        if ((iVar2 < 0) || (iStack_48 == 0)) {
            fcn.00004b8b(*(param_2 + 0x14),arg_ch,uStack_34);
        }
        else {
            iVar2 = (**(iVar6 + 0x14))(iVar6,0x19,iStack_48,auStack_28);
            if (-1 < iVar2) {
                (**(iVar6 + 0xc))(iVar6,iStack_48,auStack_24);
                *(param_1 + 0x50) = iStack_8;
                if (*pStack_c == -1) {
                    iStack_8 = iStack_8 + -8;
                }
                else {
                    iStack_8 = iStack_8 + -4;
                }
                uStack_34 = 0;
                *(param_1 + 0x50) = iStack_8;
                *(param_1 + 0x50) = *(param_1 + 0x50) >> 4;
                if (puVar5 != NULL) {
                    uVar7 = 0;
                    uStack_44 = uStack_50;
                    do {
                        (**(iVar6 + 0xc))(iVar6,*(arg_ch + uVar7 * 4),auStack_24);
                        fcn.00004b8b(uStack_44,auStack_24,0x10);
                        uStack_44 = uStack_44 + 0x10;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < puVar5);
                    param_1 = iStack_2c;
                    param_2 = iStack_40;
                }
                uStack_38 = 0;
                uStack_44 = 0;
                uVar7 = 0;
                if (*(param_1 + 0x50) != 0) {
                    uStack_34 = puVar5 * 0x10 + uStack_50;
                    iStack_40 = 0;
                    do {
                        uVar7 = uStack_50;
                        if (uStack_50 < uStack_34) {
                            do {
                                cVar1 = fcn.00004bf0();
                                if (cVar1 != '\0') goto code_r0x000029b9;
                                uVar7 = uVar7 + 0x10;
                            } while (uVar7 < uStack_34);
                        }
                        uVar7 = 0;
code_r0x000029b9:
                        if (uVar7 != 0) {
                            uVar7 = uVar7 - uStack_50 >> 4;
                            *(*(param_2 + 0x14) + uStack_44 * 4) = *(arg_ch + uVar7 * 4);
                            uStack_44 = uStack_44 + 1;
                            *(arg_ch + uVar7 * 4) = 0;
                        }
                        iStack_40 = iStack_40 + 0x10;
                        uStack_38 = uStack_38 + 1;
                    } while (uStack_38 < *(param_1 + 0x50));
                    uVar7 = uStack_44;
                    puVar5 = puStack_30;
                }
                uVar4 = 0;
                *(param_1 + 0x50) = uVar7;
                if (puVar5 != NULL) {
                    iVar6 = uVar7 << 2;
                    do {
                        if (*(arg_ch + uVar4 * 4) != 0) {
                            *(*(param_2 + 0x14) + iVar6) = *(arg_ch + uVar4 * 4);
                            iVar6 = iVar6 + 4;
                            *(arg_ch + uVar4 * 4) = 0;
                        }
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < puVar5);
                    param_1 = iStack_2c;
                }
            }
        }
        *(param_2 + 0x18) = 1;
    }
    *(param_1 + 0x4c) = *(param_2 + 0x14);
    return;
}


/* fcn.00004b21 @ 0x4b21 */

void __cdecl fcn.00004b21(uint32_t arg_8h)

{
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint noname_0;
    int16_t var_208h;
    int16_t var_206h;
    int32_t var_204h;
    int32_t var_1f4h;
    
    var_208h = 0x14;
    var_206h = 4;
    fcn.00004bd7();
    noname_0 = extraout_ECX;
    if (arg_8h != 0) {
        fcn.00004b8b(&var_1f4h,arg_8h,4);
        noname_0 = extraout_ECX_00;
    }
    fcn.00004ac5(noname_0,-0x39e0c,&var_208h);
    return;
}


/* fcn.00002a65 @ 0x2a65 */

//WARNING: Variable defined which should be unmapped: var_1h

void __fastcall fcn.00002a65(int32_t param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    bool bVar9;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_1h;
    
    var_30h = param_2 + 4;
    if (*(param_2 + 0x68) != '\0') {
        uVar1 = *(param_2 + 0x110) >> 1 | *(param_2 + 0x114) << 0x1f;
        var_1ch = (-uVar1 & 0xfff) + uVar1;
        if (((*(param_2 + 0x114) >> 1) + CARRY4(-uVar1 & 0xfff,uVar1) != 0) || (0x80000 < var_1ch)) {
            var_1ch = 0x80000;
        }
        var_8h = 0;
        uVar4 = *(param_1 + 0x1c) + *(param_1 + 0x20);
        uVar1 = *(param_2 + 0x108) + var_1ch;
        var_18h = *(param_2 + 0x10c) + CARRY4(*(param_2 + 0x108),var_1ch);
        var_1h._0_1_ = '\0';
        if ((var_18h == 0) && (uVar1 < uVar4)) {
            var_14h = uVar4 - uVar1;
        }
        else {
            var_1h._0_1_ = '\x01';
            var_14h = uVar1 - uVar4;
        }
        *(param_2 + 300) = var_1h;
        *(param_2 + 0x128) = var_14h;
        var_2ch = uVar1;
        var_28h = param_1;
        var_10h = fcn.000047c3();
        if (var_10h != 0) {
            *(var_10h + 8) = *0xfffc60c4;
            *(var_10h + 0xc) = *0xfffc60c8;
            *(var_10h + 0x10) = *0xfffc60cc;
            *(var_10h + 0x14) = *0xfffc60d0;
            *(var_10h + 0x18) = uVar1 - var_1ch;
            *(var_10h + 0x1c) = (var_18h - var_8h) - (uVar1 < var_1ch);
            *(var_10h + 0x24) = var_8h;
            *(var_10h + 0x28) = 4;
            *(var_10h + 0x20) = var_1ch;
            fcn.00000120(var_10h + 0x2c,4);
            uVar1 = var_2ch;
        }
        var_ch = *(param_1 + 0xc);
        var_10h = *(param_1 + 0x10);
        var_8h = *(param_1 + 0x20);
        var_20h = *(param_1 + 0x1c);
        var_1ch = *(param_1 + 0x18);
        var_24h = *(param_1 + 0x14);
        iVar2 = fcn.000048f0(0,&var_34h);
        if (iVar2 < 0) {
            fcn.00001f73();
            fcn.00004541();
            uVar4 = var_18h;
            uVar3 = (var_10h - var_1ch) - var_8h;
            uVar7 = uVar1;
            if (uVar3 != 0) {
                uVar5 = -(uVar1 + uVar3) & 7;
                uVar6 = uVar5 + uVar3;
                uVar7 = uVar6 + uVar1;
                var_18h = var_18h + CARRY4(uVar5,uVar3) + CARRY4(uVar6,uVar1);
            }
            if ((var_18h == 0) && (uVar7 < *(param_1 + 0x14))) {
                *(param_2 + 0x124) = 0;
                iVar2 = *(param_1 + 0x14) - uVar7;
            }
            else {
                *(param_2 + 0x124) = 1;
                iVar2 = uVar7 - *(param_1 + 0x14);
            }
            *(param_2 + 0x120) = iVar2;
            var_30h = uVar1;
            var_18h = uVar3;
            fcn.00004b8b(uVar7,var_24h,*(*(param_2 + 100) + 0x28) - *(*(param_2 + 100) + 0x18));
            fcn.00004b8b(uVar1 - var_8h,var_20h,var_8h);
            if (var_18h != 0) {
                if (var_24h < var_20h) {
                    var_18h = var_1ch;
                    uVar1 = var_20h;
                }
                else {
                    var_18h = var_8h;
                    var_8h = var_1ch;
                    uVar1 = var_24h;
                    var_24h = var_20h;
                }
                var_14h = 0;
                if (var_ch < var_24h) {
                    *(param_2 + 0x278) = var_ch;
                    *(param_2 + 0x27c) = 0;
                    *(param_2 + 0x280) = var_24h - var_ch;
                }
                bVar9 = CARRY4(var_18h,var_24h);
                if ((bVar9 == 0) && (var_18h + var_24h < uVar1)) {
                    *(param_2 + 0x290) = var_18h + var_24h;
                    *(param_2 + 0x294) = 0;
                    *(param_2 + 0x298) = (uVar1 - var_24h) - var_18h;
                }
                uVar7 = CARRY4(var_8h,uVar1);
                var_1ch = var_10h + var_ch;
                if ((uVar7 <= CARRY4(var_10h,var_ch)) &&
                   ((uVar7 < CARRY4(var_10h,var_ch) || (var_8h + uVar1 < var_1ch)))) {
                    *(param_2 + 0x2a8) = var_8h + uVar1;
                    *(param_2 + 0x2ac) = uVar7;
                    *(param_2 + 0x2b0) = ((var_ch - uVar1) - var_8h) + var_10h;
                }
                puVar8 = param_2 + 0x278;
                var_24h = 3;
                uVar1 = var_30h;
                var_ch = bVar9;
                do {
                    if (puVar8[2] != 0) {
                        if ((uVar4 < puVar8[1]) || ((uVar4 <= puVar8[1] && (uVar1 <= *puVar8)))) {
                            uVar7 = *puVar8;
                            *(puVar8 + 4) = 0;
                            uVar3 = uVar7 - uVar1;
                        }
                        else {
                            uVar7 = *puVar8;
                            *(puVar8 + 4) = 1;
                            uVar3 = uVar1 - uVar7;
                        }
                        puVar8[3] = uVar3;
                        fcn.00004b8b(uVar1,uVar7,puVar8[2]);
                        bVar9 = CARRY4(uVar1,puVar8[2]);
                        uVar1 = uVar1 + puVar8[2];
                        uVar4 = uVar4 + bVar9;
                    }
                    puVar8 = puVar8 + 6;
                    var_24h = var_24h - 1;
                } while (var_24h != 0);
                var_24h = 0;
                param_1 = var_28h;
                uVar1 = var_2ch;
            }
            fcn.000046e3(-0x3d4aa,param_1,param_2,uVar1);
        }
        else {
            if ((var_18h == 0) && (uVar1 < *(param_1 + 0x14))) {
                *(param_2 + 0x124) = 0;
                iVar2 = *(param_1 + 0x14) - uVar1;
            }
            else {
                *(param_2 + 0x124) = 1;
                iVar2 = uVar1 - *(param_1 + 0x14);
            }
            *(param_2 + 0x120) = iVar2;
            if (var_1h == '\0') {
                iVar2 = -var_14h;
            }
            else {
                iVar2 = var_14h;
            }
            (**var_34h)(var_30h,var_ch,0,uVar1 - var_8h,0,var_10h);
            fcn.00001f73();
            fcn.0000031c(param_1 + iVar2,0,param_2 + iVar2);
        }
    }
    return;
}


/* fcn.00003726 @ 0x3726 */

void __fastcall fcn.00003726(uint32_t *param_1,uint32_t param_2,int param_3,char param_4)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if (param_2 <= uVar1) {
        if (param_4 != '\0') {
            *param_1 = param_3 + uVar1;
            return;
        }
        *param_1 = uVar1 - param_3;
    }
    return;
}


/* fcn.00003d70 @ 0x3d70 */

void __fastcall fcn.00003d70(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iStack_6;
    
    for (; param_5 < param_6; param_5 = param_5 + 1) {
        if (param_2 == 0x20) {
            iVar3 = *(param_1 + 0x20);
        }
        else {
            iVar3 = *(param_1 + 0x30);
        }
        iVar3 = *(iVar3 + param_5 * 4);
        piVar1 = *(iVar3 + 4);
        for (iVar4 = param_3; iVar4 < param_4; iVar4 = iVar4 + 1) {
            piVar2 = *(*(*(param_1 + 0x14) + iVar4 * 4) + 4);
            if ((((*piVar2 == *piVar1) && (piVar2[1] == piVar1[1])) && (piVar2[2] == piVar1[2])) &&
               (piVar2[3] == piVar1[3])) {
                InterruptDescriptorTableRegister();
                (**(iVar3 + 8))(*(iStack_6 + -4),iVar3,*(*(*(param_1 + 0x14) + iVar4 * 4) + 8));
            }
        }
    }
    return;
}


/* fcn.00003a59 @ 0x3a59 */

uint __fastcall fcn.00003a59(int param_1,uint8_t *param_2,char param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t arg_8h;
    uint32_t uVar3;
    
    if (param_2 != NULL) {
        uVar2 = *(param_1 + 4);
        uVar1 = *param_2;
        uVar3 = uVar2;
        while ((uVar1 & 0x10) != 0) {
            if (*(param_1 + 8) <= uVar3) {
                arg_8h = fcn.000046b5();
                fcn.00004b8b(arg_8h,*(param_1 + 0x10),*(param_1 + 8) << 2);
                *(param_1 + 0x10) = arg_8h;
                *(param_1 + 8) = *(param_1 + 8) + 0x40;
            }
            *(*(param_1 + 0x10) + uVar3 * 4) = param_2;
            uVar3 = uVar3 + 1;
            *(param_1 + 4) = *(param_1 + 4) + 1;
            if ((param_3 != '\0') || (*param_2 < 0)) {
                fcn.00003d70(uVar2,*(param_1 + 4),0,*(param_1 + 0x14));
                return 0;
            }
            param_2 = param_2 + 0xc;
            uVar1 = *param_2;
        }
        *(param_1 + 4) = uVar2;
    }
    return 0x80000002;
}


/* fcn.00003bf7 @ 0x3bf7 */

uint __fastcall fcn.00003bf7(int param_1,uint32_t *param_2,char param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uStack_c;
    
    if (param_2 != NULL) {
        uVar1 = *(param_1 + 0x20);
        uVar2 = *(param_1 + 0x14);
        uVar3 = uVar1;
        uVar4 = uVar2;
        uStack_c = uVar1;
        for (; (*param_2 & 0x60) != 0; param_2 = param_2 + 3) {
            if ((*param_2 & 0x20) == 0) {
                if (*(param_1 + 0x24) <= uVar3) {
                    uVar3 = fcn.000046b5();
                    fcn.00004b8b(uVar3,*(param_1 + 0x2c),*(param_1 + 0x24) << 2);
                    *(param_1 + 0x24) = *(param_1 + 0x24) + 8;
                    *(param_1 + 0x2c) = uVar3;
                    uVar3 = uStack_c;
                }
                *(*(param_1 + 0x2c) + uVar3 * 4) = param_2;
                uVar3 = uVar3 + 1;
                *(param_1 + 0x20) = *(param_1 + 0x20) + 1;
                uStack_c = uVar3;
            }
            else {
                if (*(param_1 + 0x18) <= uVar4) {
                    uVar3 = fcn.000046b5();
                    fcn.00004b8b(uVar3,*(param_1 + 0x1c),*(param_1 + 0x18) << 2);
                    *(param_1 + 0x18) = *(param_1 + 0x18) + 0x20;
                    *(param_1 + 0x1c) = uVar3;
                    uVar3 = uStack_c;
                }
                *(*(param_1 + 0x1c) + uVar4 * 4) = param_2;
                uVar4 = uVar4 + 1;
                *(param_1 + 0x14) = *(param_1 + 0x14) + 1;
            }
            if ((param_3 != '\0') || (*param_2 < 0)) {
                fcn.00003d70(0,*(param_1 + 4),uVar2,*(param_1 + 0x14));
                return 0;
            }
        }
        *(param_1 + 0x14) = uVar2;
        *(param_1 + 0x20) = uVar1;
    }
    return 0x80000002;
}


/* fcn.00003f4d @ 0x3f4d */

void __cdecl fcn.00003f4d(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int32_t *arg_ch_00;
    int32_t var_4h;
    
    arg_ch_00 = &var_4h;
    iVar1 = fcn.000048f0(0,arg_ch_00);
    if (iVar1 < 0) {
        fcn.00004ac5(arg_ch_00,-0x39e0c,0);
    }
    else {
        (**var_4h)(arg_8h,arg_ch,arg_10h,arg_14h);
    }
    return;
}


/* fcn.00004001 @ 0x4001 */

int __fastcall fcn.00004001(uint param_1,uint32_t param_2,uint32_t *param_3,uint *param_4,uint *param_5)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    bool bVar5;
    int iStack_9e;
    int iStack_96;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uint uStack_88;
    uint uStack_84;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_64;
    char cStack_38;
    char cStack_37;
    uchar auStack_20 [32];
    
    InterruptDescriptorTableRegister();
    iVar4 = 0;
    bVar5 = false;
    iVar2 = *(iStack_9e + -4);
    fcn.00000120(&uStack_90,0x70);
    uStack_70 = 0xfffc40e2;
    uStack_6c = param_2;
    iVar1 = fcn.00005110();
    if (-1 < iVar1) {
        if ((uStack_90 == param_2) && (uStack_8c == 0)) {
            bVar5 = true;
        }
        InterruptDescriptorTableRegister();
        (**(**(iStack_96 + -4) + 0x6c))(param_1,auStack_20);
        uStack_8c = 0;
        uStack_90 = param_2;
        if ((cStack_38 == '\0') && (*(iVar2 + 0x65) != '\0')) {
            iVar2 = fcn.0000499a(&uStack_90);
            if (iVar2 < 0) {
                if (!bVar5) {
                    return -0x7ffffff7;
                }
                iVar4 = 4;
                uStack_8c = 0;
                uStack_90 = param_2;
            }
            else {
                if (0x1000 < uStack_64) {
                    uStack_90 = (uStack_64 + uStack_90) - 1 & ~(uStack_64 - 1);
                    uStack_8c = 0;
                }
                if (cStack_37 != '\0') {
                    uVar3 = *(param_2 + 6) - 0x28;
                    bVar5 = CARRY4(uStack_90,uVar3);
                    uStack_90 = uStack_90 + uVar3;
                    uStack_8c = uStack_8c + ((0x27 < *(param_2 + 6)) - 1) + bVar5;
                }
            }
        }
        iVar1 = fcn.0000571f();
        if (-1 < iVar1) {
            iVar1 = fcn.00005497();
            if (-1 < iVar1) {
                *param_3 = uStack_90;
                param_3[1] = uStack_8c;
                *param_4 = uStack_88;
                param_4[1] = uStack_84;
                *param_5 = uStack_78;
                param_5[1] = uStack_74;
                iVar1 = iVar4;
            }
        }
    }
    return iVar1;
}


/* fcn.00004c14 @ 0x4c14 */

int16_t __fastcall fcn.00004c14(int *param_1)

{
    if (*param_1 == 0x5a4d) {
        param_1 = *(param_1 + 0xf) + param_1;
    }
    if (*param_1 != 0x5a56) {
        if (*param_1 != 0x4550) {
            return 0;
        }
        return param_1[1];
    }
    return *(param_1 + 2);
}


/* fcn.00004205 @ 0x4205 */

int __cdecl fcn.00004205(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int16_t iVar1;
    int iVar2;
    int32_t in_EDX;
    uint extraout_EDX;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    uStack_20 = 0;
    *arg_10h = 0;
    *(arg_10h + 4) = 0;
    uStack_1c = 0;
    *arg_14h = 0;
    iVar2 = fcn.00004969(in_EDX,&uStack_24,arg_14h);
    if ((iVar2 < 0) && (iVar2 = fcn.00004969(in_EDX,&uStack_24,arg_14h), iVar2 < 0)) {
        return iVar2;
    }
    iVar2 = fcn.00004001(&uStack_10,&uStack_20,&uStack_18);
    if (-1 < iVar2) {
        *arg_10h = uStack_18;
        uStack_24 = uStack_10;
        *(arg_10h + 4) = uStack_14;
        iVar1 = fcn.00004c14();
        if ((iVar1 == 0x14c) || (iVar1 == -0x799c)) {
            if (arg_8h != 0) {
                *arg_8h = extraout_EDX;
                *(arg_8h + 4) = uStack_c;
            }
            if (arg_ch != 0) {
                *arg_ch = uStack_20;
                *(arg_ch + 4) = uStack_1c;
            }
            iVar2 = 0;
        }
        else {
            iVar2 = -0x7ffffffd;
        }
    }
    return iVar2;
}


/* fcn.0000430d @ 0x430d */

uint8_t __fastcall fcn.0000430d(int *param_1)

{
    if (*param_1 == 0x5a4d) {
        param_1 = *(param_1 + 0xf) + param_1;
    }
    if (*param_1 == 0x5a56) {
        if ((param_1[7] == 0) && (param_1[6] == 0)) {
            return 1;
        }
    }
    else if (*param_1 == 0x4550) {
        return *(param_1 + 0x16) & 1;
    }
    return 0;
}


/* fcn.000043e8 @ 0x43e8 */

bool __fastcall fcn.000043e8(int param_1)

{
    int iVar1;
    int32_t var_14h;
    int32_t var_4h;
    
    fcn.00004b8b(&var_14h,*(param_1 + 4),0x10);
    iVar1 = fcn.000048f0(0,&var_4h);
    return -1 < iVar1;
}


/* fcn.000049c6 @ 0x49c6 */

void __cdecl fcn.000049c6(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.000000e0 @ 0xe0 */

uint * fcn.000000e0(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.00004c47 @ 0x4c47 */

int __thiscall fcn.00004c47(int param_1,int *param_2)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    bool bVar6;
    uchar uStack_75;
    int iStack_74;
    int iStack_70;
    uint32_t uStack_6c;
    uchar auStack_68 [12];
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    int16_t aiStack_40 [30];
    uint uStack_4;
    
    iVar4 = 0x40;
    iStack_74 = 0x40;
    iVar3 = (**(param_1 + 0x20))(*(param_1 + 0x24),0,&iStack_74,aiStack_40);
    if (iVar3 < 0) {
code_r0x000050f6:
        bVar6 = iStack_74 == iVar4;
    }
    else {
        bVar6 = false;
        if (iStack_74 == 0x40) {
            *(param_1 + 0x30) = 0;
            if (aiStack_40[0] == 0x5a4d) {
                *(param_1 + 0x30) = uStack_4;
            }
            iVar4 = 0x108;
            iStack_74 = 0x108;
            iVar3 = (**(param_1 + 0x20))(*(param_1 + 0x24),*(param_1 + 0x30),&iStack_74,param_2);
            if (iVar3 < 0) goto code_r0x000050f6;
            bVar6 = false;
            if (iStack_74 == 0x108) {
                if (*param_2 == 0x5a56) {
                    *(param_1 + 0x59) = 1;
                    *(param_1 + 0x54) = *(param_2 + 2);
                    *(param_1 + 0x56) = *(param_2 + 5);
                    *(param_1 + 8) = 0;
                    *(param_1 + 0xc) = 0;
                    *(param_1 + 0x2c) = 0;
                    iVar4 = param_2[3] - *(param_2 + 6);
                    *(param_1 + 0x40) = iVar4 + 0x28;
                    if ((*(param_2 + 6) < 0x29) || (param_2[3] <= *(param_2 + 6))) {
code_r0x00004d1b:
                        *(param_1 + 0x4c) = 0xb;
                        return -0x7ffffffd;
                    }
                    iStack_74 = 1;
                    iVar3 = (**(param_1 + 0x20))(*(param_1 + 0x24),iVar4 + 0x27,&iStack_74,&uStack_75);
                    if ((-1 < iVar3) && (iStack_74 == 1)) {
                        if (((param_2[7] != 0) && (param_2[6] == 0)) || ((param_2[9] != 0 && (param_2[8] == 0))))
                        goto code_r0x00004d1b;
                        goto code_r0x00004fc3;
                    }
                }
                else {
                    if (*param_2 != 0x4550) {
code_r0x000050ed:
                        *(param_1 + 0x4c) = 3;
                        return -0x7ffffffd;
                    }
                    *(param_1 + 0x59) = 0;
                    *(param_1 + 0x54) = param_2[1];
                    if (param_2[6] == 0x10b) {
                        if ((((0x10 < param_2[0x1d]) || (*(param_2 + 5) - 0x60 != param_2[0x1d] << 3)) ||
                            (uVar5 = *(param_2 + 5) + 0x18 + *(param_1 + 0x30), param_2[0x14] <= uVar5)) ||
                           ((((param_2[0x14] - uVar5) / 0x28 <= *(param_2 + 6) ||
                             (uVar2 = param_2[0x15], uVar2 <= uVar5)) ||
                            ((param_2[0x14] <= uVar2 || ((uVar2 - uVar5) / 0x28 < *(param_2 + 6)))))))
                        goto code_r0x00004d1b;
                        iStack_74 = 1;
                        iVar3 = (**(param_1 + 0x20))(*(param_1 + 0x24),param_2[0x15] + -1,&iStack_74,&uStack_75);
                        if ((-1 < iVar3) && (iStack_74 == 1)) {
                            if ((4 < param_2[0x1d]) && (param_2[0x27] != 0)) {
                                if (~param_2[0x26] < param_2[0x27]) goto code_r0x00004d1b;
                                iVar4 = param_2[0x27];
                                iVar3 = param_2[0x26];
code_r0x00004f7e:
                                iStack_74 = 1;
                                iVar3 = (**(param_1 + 0x20))
                                                  (*(param_1 + 0x24),iVar3 + iVar4 + -1,&iStack_74,&uStack_75);
                                if ((iVar3 < 0) || (iStack_74 != 1)) goto code_r0x00004d76;
                            }
code_r0x00004fa4:
                            *(param_1 + 0x56) = param_2[0x17];
                            *(param_1 + 8) = param_2[0x14];
                            *(param_1 + 0xc) = 0;
                            *(param_1 + 0x2c) = param_2[0xe];
                            *(param_1 + 0x40) = param_2[0x15];
code_r0x00004fc3:
                            iStack_70 = 0x28;
                            uVar5 = 0;
                            iVar1 = *(param_1 + 0x54);
                            if ((((iVar1 != 0x14c) && (iVar1 != -0x799c)) && (iVar1 != 0xebc)) && (iVar1 != -0x559c)) {
                                return -0x7ffffffd;
                            }
                            if (*(param_1 + 0x59) == '\0') {
                                uStack_6c = *(param_2 + 6);
                                iStack_70 = *(param_1 + 0x30) + 0x18 + *(param_2 + 5);
                            }
                            else {
                                uStack_6c = *(param_2 + 1);
                            }
                            if (uStack_6c != 0) {
                                do {
                                    iStack_74 = 0x28;
                                    iVar3 = (**(param_1 + 0x20))(*(param_1 + 0x24),iStack_70,&iStack_74,auStack_68);
                                    if ((iVar3 < 0) || (iStack_74 != 0x28)) {
                                        bVar6 = iStack_74 == 0x28;
                                        *(param_1 + 0x4c) = 1;
                                        goto code_r0x00005101;
                                    }
                                    if (*(param_1 + 0x59) != '\0') {
                                        iVar4 = *(param_2 + 6) - 0x28;
                                        uStack_5c = uStack_5c - iVar4;
                                        uStack_54 = uStack_54 - iVar4;
                                    }
                                    if (uStack_58 != 0) {
                                        if (((uStack_5c < *(param_1 + 0x40)) || (uStack_54 < *(param_1 + 0x40))) ||
                                           (-uStack_54 - 1 < uStack_58)) goto code_r0x00004d1b;
                                        iStack_74 = 1;
                                        iVar3 = (**(param_1 + 0x20))
                                                          (*(param_1 + 0x24),(uStack_58 - 1) + uStack_54,&iStack_74,
                                                           &uStack_75);
                                        if ((iVar3 < 0) || (iStack_74 != 1)) goto code_r0x00004d76;
                                    }
                                    iStack_70 = iStack_70 + 0x28;
                                    uVar5 = uVar5 + 1;
                                } while (uVar5 < uStack_6c);
                            }
                            return 0;
                        }
                    }
                    else {
                        if (param_2[6] != 0x20b) goto code_r0x000050ed;
                        if ((((((0x10 < param_2[0x21]) || (*(param_2 + 5) - 0x70 != param_2[0x21] << 3)) ||
                              (uVar5 = *(param_2 + 5) + 0x18 + *(param_1 + 0x30), param_2[0x14] <= uVar5)) ||
                             (((param_2[0x14] - uVar5) / 0x28 <= *(param_2 + 6) ||
                              (uVar2 = param_2[0x15], uVar2 <= uVar5)))) || (param_2[0x14] <= uVar2)) ||
                           ((uVar2 - uVar5) / 0x28 < *(param_2 + 6))) goto code_r0x00004d1b;
                        iStack_74 = 1;
                        iVar3 = (**(param_1 + 0x20))(*(param_1 + 0x24),param_2[0x15] + -1,&iStack_74,&uStack_75);
                        if ((-1 < iVar3) && (iStack_74 == 1)) {
                            if ((4 < param_2[0x21]) && (param_2[0x2b] != 0)) {
                                if (~param_2[0x2a] < param_2[0x2b]) goto code_r0x00004d1b;
                                iVar4 = param_2[0x2b];
                                iVar3 = param_2[0x2a];
                                goto code_r0x00004f7e;
                            }
                            goto code_r0x00004fa4;
                        }
                    }
                }
code_r0x00004d76:
                bVar6 = iStack_74 == 1;
                *(param_1 + 0x4c) = 1;
                goto code_r0x00005101;
            }
        }
    }
    *(param_1 + 0x4c) = 1;
code_r0x00005101:
    if (!bVar6) {
        return -0x7ffffffd;
    }
    return iVar3;
}


/* fcn.00005467 @ 0x5467 */

int __fastcall fcn.00005467(int *param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    
    if ((param_1[3] + CARRY4(param_3,param_1[2]) == 0) && (param_3 + param_1[2] <= param_2)) {
        param_1[0x13] = 5;
        iVar1 = 0;
    }
    else {
        iVar1 = (*param_1 - param_3) + param_2;
    }
    return iVar1;
}


/* fcn.00004bb2 @ 0x4bb2 */

uint __fastcall fcn.00004bb2(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000120(param_1,param_2);
    return uVar1;
}


/* fcn.00005f41 @ 0x5f41 */

uint fcn.00005f41(void)

{
    uint uVar1;
    
    uVar1 = *0xfffc63c8;
    if ((*0xfdcb0618 & 2) == 0) {
        uVar1 = 0xf1000;
    }
    return uVar1;
}


/* fcn.00005eaa @ 0x5eaa */

//WARNING: Removing unreachable block (ram,0x00005ee3)
//WARNING: Removing unreachable block (ram,0x00005f23)

uint64_t __cdecl fcn.00005eaa(int32_t arg_8h,uint32_t arg_ch)

{
    uint uVar1;
    uint uVar2;
    
    if ((arg_ch == 0) && (arg_8h < 0xfe020000)) {
        uVar1 = fcn.00005f59(arg_8h + 0x14,0);
        uVar2 = fcn.00005f59(arg_8h + 0x10,0);
    }
    else {
        uVar2 = *(arg_8h + 0x10);
        uVar1 = *(arg_8h + 0x14);
    }
    return CONCAT44(uVar1,uVar2) & 0xfffffffffffff000;
}


/* fcn.00005db4 @ 0x5db4 */

void fcn.00005db4(int16_t *param_1)

{
    if ((((*param_1 != -1) && ((param_1[2] & 2U) == 0)) && ((*(param_1 + 8) & 0xfffff000) != 0)) &&
       ((*(param_1 + 8) & 0xfffff000) != 0xfffff000)) {
        *(param_1 + 2) = *(param_1 + 2) | 2;
    }
    return;
}


/* fcn.00005d9a @ 0x5d9a */

void __fastcall fcn.00005d9a(int param_1,int param_2,int param_3,uint param_4,uint8_t param_5)

{
    if (param_1 == 1) {
        *(param_3 + param_2 * 4) = param_5;
        return;
    }
    *(param_3 + param_2) = param_5;
    return;
}


/* fcn.00005f59 @ 0x5f59 */

uint __cdecl fcn.00005f59(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


