// decompiled by r2ghidra: 2578_StatusCodePei.te
// functions: 70

/* fcn.000006e1 @ 0x6e1 */

void __fastcall fcn.000006e1(uint param_1,int *param_2)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar3 = 0;
    var_8h = &var_1ch;
    var_4h = 0;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffe2 + -4) + 0x74))(param_1);
    if (iVar1 == -0x7fffffec) {
        var_8h = &var_24h;
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(stack0xffffffda + -4) + 0x20))(*(stack0xffffffda + -4),0xfffd1cc4,0,&var_ch,&var_14h);
        if (-1 < iVar1) {
            var_8h = &var_24h;
            InterruptDescriptorTableRegister();
            iVar1 = (**(**(stack0xffffffda + -4) + 0x20))(*(stack0xffffffda + -4),0xfffd1ca4,0,&var_10h,&var_1ch);
            if (-1 < iVar1) {
                var_8h = &var_24h;
                InterruptDescriptorTableRegister();
                iVar1 = (**(**(stack0xffffffda + -4) + 0x1c))(*(stack0xffffffda + -4),var_ch,0xfffd1e24);
                if (-1 < iVar1) {
                    var_8h = &var_24h;
                    InterruptDescriptorTableRegister();
                    (**(**(stack0xffffffda + -4) + 0x1c))(*(stack0xffffffda + -4),var_10h,0xfffd1d40);
                }
            }
        }
    }
    else {
        (**(*param_2 + 0x34))(param_2,4,0x20,&var_4h);
        fcn.00000d0f();
        *(var_4h + 0x18) = 0;
        *(var_4h + 0x1a) = 0;
        *(var_4h + 0x1c) = 0;
        pcVar2 = 0xfffcf468;
        while (pcVar2 != NULL) {
            (*pcVar2)(param_1,param_2);
            iVar1 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            pcVar2 = *(iVar1 + -0x2de04);
        }
        (**(*param_2 + 0x18))(param_2,0xfffd1d34);
        fcn.00000195();
        (**(*param_2 + 0x18))(param_2,0xfffd1d40);
        (**(*param_2 + 0x18))(param_2,0xfffd1e24);
    }
    return;
}


/* entry0 @ 0x188 */

void entry0(uint param_1,int *param_2)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar3 = 0;
    var_8h = &var_1ch;
    var_4h = 0;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffe2 + -4) + 0x74))(param_1);
    if (iVar1 == -0x7fffffec) {
        var_8h = &var_24h;
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(stack0xffffffda + -4) + 0x20))(*(stack0xffffffda + -4),0xfffd1cc4,0,&var_ch,&var_14h);
        if (-1 < iVar1) {
            var_8h = &var_24h;
            InterruptDescriptorTableRegister();
            iVar1 = (**(**(stack0xffffffda + -4) + 0x20))(*(stack0xffffffda + -4),0xfffd1ca4,0,&var_10h,&var_1ch);
            if (-1 < iVar1) {
                var_8h = &var_24h;
                InterruptDescriptorTableRegister();
                iVar1 = (**(**(stack0xffffffda + -4) + 0x1c))(*(stack0xffffffda + -4),var_ch,0xfffd1e24);
                if (-1 < iVar1) {
                    var_8h = &var_24h;
                    InterruptDescriptorTableRegister();
                    (**(**(stack0xffffffda + -4) + 0x1c))(*(stack0xffffffda + -4),var_10h,0xfffd1d40);
                }
            }
        }
    }
    else {
        (**(*param_2 + 0x34))(param_2,4,0x20,&var_4h);
        fcn.00000d0f();
        *(var_4h + 0x18) = 0;
        *(var_4h + 0x1a) = 0;
        *(var_4h + 0x1c) = 0;
        pcVar2 = 0xfffcf468;
        while (pcVar2 != NULL) {
            (*pcVar2)(param_1,param_2);
            iVar1 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            pcVar2 = *(iVar1 + -0x2de04);
        }
        (**(*param_2 + 0x18))(param_2,0xfffd1d34);
        fcn.00000195();
        (**(*param_2 + 0x18))(param_2,0xfffd1d40);
        (**(*param_2 + 0x18))(param_2,0xfffd1e24);
    }
    return;
}


/* fcn.00003188 @ 0x3188 */

int32_t __cdecl fcn.00003188(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg_ch - arg_8h;
    puVar4 = arg_8h;
    if (arg_ch < arg_8h) {
        uVar2 = -uVar2;
        if (arg_8h <= arg_10h + arg_ch) {
            puVar4 = arg_10h + arg_8h;
            bVar1 = true;
            uVar5 = 1;
            arg_ch = arg_10h + arg_ch;
        }
    }
    if ((3 < arg_10h) && (3 < uVar2)) {
        uVar2 = arg_ch & 3;
        uVar3 = puVar4 & 3;
        if (bVar1) {
            arg_ch = arg_ch + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 4 - uVar2;
            }
            arg_10h = arg_10h - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg_ch;
                arg_ch = arg_ch + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg_ch = arg_ch + -3;
            puVar4 = puVar4 + -3;
        }
        for (uVar2 = arg_10h >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg_ch;
            arg_ch = arg_ch + (uVar5 * -2 + 1) * 4;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg_10h = arg_10h & 3;
        if (arg_10h == 0) {
            return arg_8h;
        }
        if (bVar1) {
            arg_ch = arg_ch + 4;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg_ch = arg_ch + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg_10h != 0; arg_10h = arg_10h - 1) {
        *puVar4 = *arg_ch;
        arg_ch = arg_ch + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg_8h;
}


/* fcn.00001940 @ 0x1940 */

int fcn.00001940(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00001982();
    do {
        iVar2 = fcn.0000191f();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000d31();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00001ba7 @ 0x1ba7 */

int __fastcall fcn.00001ba7(int param_1,uint *param_2)

{
    uint uVar1;
    int iVar2;
    uint extraout_ECX;
    int32_t var_4h;
    
    if ((param_1 == 0) || (param_2 == NULL)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        uVar1 = *param_2;
        do {
            iVar2 = fcn.00001b70();
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.00001b11(extraout_ECX);
        } while (iVar2 != 0);
        *param_2 = uVar1;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00000195 @ 0x195 */

uint * fcn.00000195(void)

{
    int iVar1;
    uint *puVar2;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,0x3c,&var_4h);
    if (iVar1 < 0) {
        puVar2 = NULL;
    }
    else {
        fcn.00003188(var_4h + 8,-0x2e2fc,0x10);
        puVar2 = var_4h + 0x18;
        *puVar2 = 0;
    }
    return puVar2;
}


/* fcn.000002e5 @ 0x2e5 */

int32_t __fastcall fcn.000002e5(int *param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = (**(*param_1 + 0x30))(param_1,&var_4h);
    if ((-1 < iVar1) && (iVar1 = fcn.00001ba7(), -1 < iVar1)) {
        return var_4h;
    }
    return 0;
}


/* fcn.00000315 @ 0x315 */

uint __fastcall fcn.00000315(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
    int16_t iVar1;
    int16_t iVar2;
    int iVar3;
    int iVar4;
    uint *puVar5;
    uint32_t uVar6;
    int iStack_10;
    
    iVar3 = fcn.000002e5();
    if (iVar3 != 0) {
        iVar2 = 0;
        LOCK();
        iVar1 = *(iVar3 + 0x18);
        if (iVar1 == 0) {
            *(iVar3 + 0x18) = 1;
        }
        else {
            iVar2 = iVar1;
        }
        UNLOCK();
        if (iVar2 == 1) {
            return 0x8000000f;
        }
    }
    iStack_10 = fcn.00001940();
    while (iStack_10 != 0) {
        uVar6 = 0;
        if (*(iStack_10 + 0x18) != 0) {
            puVar5 = iStack_10 + 0x1c;
            do {
                (**puVar5)(param_1,param_2,param_3,param_4,param_5,param_6);
                puVar5 = puVar5 + 1;
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(iStack_10 + 0x18));
        }
        iVar4 = fcn.00001ba7();
        if (iVar4 < 0) {
            iStack_10 = 0;
        }
    }
    if (iVar3 != 0) {
        LOCK();
        if (*(iVar3 + 0x18) == 1) {
            *(iVar3 + 0x18) = 0;
        }
        UNLOCK();
    }
    return 0;
}


/* fcn.00000ac8 @ 0xac8 */

uint __fastcall
fcn.00000ac8(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,char *param_7)

{
    int iVar1;
    code *pcVar2;
    int *piVar3;
    int iVar4;
    
    iVar4 = 0;
    pcVar2 = 0xfffcf574;
    while (pcVar2 != NULL) {
        (*pcVar2)(param_1,param_2,param_3);
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        pcVar2 = *(iVar1 + -0x2de18);
    }
    *param_7 = '\0';
    fcn.000008d8(param_6,param_7);
    if (*param_7 != '\0') {
        fcn.00000aa2();
    }
    iVar4 = 0;
    pcVar2 = *0xfffd26f4;
    while (pcVar2 != NULL) {
        (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6);
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        pcVar2 = *(iVar1 + -0x2d908);
    }
    if (param_2 == '\x02') {
        piVar3 = 0xfffd26ec;
        if (*0xfffd26f8 != '\0') {
            piVar3 = 0xfffd26fc;
        }
        for (; *piVar3 != 0; piVar3 = piVar3 + 2) {
            if ((*piVar3 == param_3) && (piVar3[1] != 0)) {
                (*piVar3[1])(param_1,param_3);
                return 0;
            }
        }
    }
    return 0;
}


/* fcn.00003128 @ 0x3128 */

uint * fcn.00003128(uint *param_1,uchar param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    
    puVar3 = param_1;
    if (3 < param_3) {
        if ((param_1 & 3) != 0) {
            iVar2 = 4 - (param_1 & 3);
            param_3 = param_3 - iVar2;
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = param_2;
                puVar3 = puVar3 + 1;
            }
        }
        for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
            puVar3 = puVar3 + 1;
        }
        param_3 = param_3 & 3;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar3 = param_2;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.00000bdf @ 0xbdf */

void __fastcall fcn.00000bdf(uint param_1,int param_2,uint param_3,uint32_t param_4,int32_t param_5)

{
    int iVar1;
    code *pcVar2;
    uint unaff_EBX;
    uint unaff_ESI;
    int iVar3;
    uint unaff_EDI;
    
    if (param_4 != 0) {
        iVar3 = 0;
        fcn.00000df1(0,param_4,param_5,0);
        *(param_2 + -100) = param_3;
        fcn.00000315(0x3050000,0,0,param_2 + -0x78);
        pcVar2 = *0xfffd26e8;
        while (pcVar2 != NULL) {
            (*pcVar2)(param_2,param_3);
            iVar1 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            pcVar2 = *(iVar1 + -0x2d914);
        }
        iVar3 = 0;
        pcVar2 = 0xfffcf401;
        while (pcVar2 != NULL) {
            (*pcVar2)(param_1,param_2,unaff_EDI,unaff_ESI,unaff_EBX);
            iVar1 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            pcVar2 = *(iVar1 + -0x2de0c);
        }
        return;
    }
    return;
}


/* fcn.00000c50 @ 0xc50 */

void __fastcall fcn.00000c50(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char cVar5;
    code *pcVar6;
    int iVar7;
    
    cVar5 = '\0';
    cVar2 = '\0';
    fcn.00000d55(param_2,0x100,0xfffd224c,param_3,param_4,param_5);
    *(param_2 + -100) = 0x80000000;
    fcn.00000315(0x3050000,0,0,param_2 + -0x78);
    iVar7 = 0;
    pcVar6 = *0xfffd26e4;
    while (pcVar6 != NULL) {
        (*pcVar6)(param_2,param_3,param_4);
        iVar1 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        pcVar6 = *(iVar1 + -0x2d918);
    }
    fcn.00000aa2();
    do {
        uVar3 = fcn.000025de();
        if ((uVar3 & 2) != 0) {
            in(0x3fc);
            do {
                uVar4 = in(0x3fd);
            } while ((uVar4 & 1) == 0);
            cVar5 = in(0x3f8);
            cVar2 = cVar5;
        }
        if ((uVar3 & 0x10) != 0) {
            fcn.00002d1c(uVar3,uVar3);
            cVar5 = cVar2;
        }
    } while (cVar5 == '\0');
    return;
}


/* fcn.00000d0f @ 0xd0f */

uint * __fastcall fcn.00000d0f(uint *param_1)

{
    *param_1 = *0xfffd1e14;
    param_1[1] = *0xfffd1e18;
    param_1[2] = *0xfffd1e1c;
    param_1[3] = *0xfffd1e20;
    return param_1;
}


/* fcn.00000d55 @ 0xd55 */

void fcn.00000d55(uint param_1,uint param_2,uint32_t param_3)

{
    fcn.00000df1(0,param_3,&stack0x00000010,0);
    return;
}


/* fcn.00000df1 @ 0xdf1 */

uint32_t __cdecl fcn.00000df1(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t in_ECX;
    int32_t *piVar6;
    int iVar7;
    uint32_t in_EDX;
    uint32_t uVar8;
    int arg_ch_00;
    uint8_t *puVar9;
    uint32_t *puVar10;
    bool bVar11;
    bool bVar12;
    ulong uVar13;
    uint8_t uStack_7b;
    uint32_t uStack_78;
    uint32_t *puStack_74;
    int iStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [11];
    
    if (in_EDX == 0) {
        if ((arg_8h & 0x2000U) != 0) goto code_r0x00000e29;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x00000e29:
        if (arg_ch == 0) {
            return 0;
        }
    }
    if ((arg_8h & 0x40U) == 0) {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 1;
    }
    else {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 2;
    }
    if ((arg_8h & 0x100U) == 0) {
        uVar13 = fcn.000026a8();
        if (uVar13 >> 0x20 < uVar13) {
            return 0;
        }
        iStack_70 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar4 = fcn.00002683();
        if (1000000 < uVar4) {
            return 0;
        }
        iStack_70 = 2;
        uStack_54 = 0xffff;
    }
    if ((arg_8h & 0x2000U) == 0) {
        if (in_EDX == 0) {
            return 0;
        }
    }
    else {
        in_ECX = in_ECX & -(in_EDX != 0);
    }
    uStack_58 = 0;
    uStack_38 = 0;
    uStack_64 = 0;
    if (in_ECX != 0) {
        uStack_38 = in_ECX;
        uStack_58 = (in_EDX - 1) * uStack_5c + in_ECX;
    }
    if (iStack_70 == 1) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar4) & uStack_54;
    uVar4 = 0;
    uStack_78 = in_ECX;
    if (uStack_50 != 0) {
code_r0x00000f0b:
        if ((uStack_78 == 0) || (uStack_78 < uStack_58)) {
            uStack_68 = 1;
            arg_8h = arg_8h & 0x2140;
            uStack_48 = 0;
            uStack_7b = 0;
            bVar12 = false;
            bVar11 = false;
            uStack_60 = 0;
            uStack_44 = 0;
            uStack_6c = arg_8h;
            if (uStack_50 == 10) goto code_r0x00001545;
            if (uStack_50 == 0xd) goto code_r0x00001195;
            puVar9 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00000f7b:
code_r0x00000f7f:
                arg_ch = puVar9 + iStack_70;
                if (iStack_70 == 1) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = *(arg_ch + 1) << 8;
                }
                uStack_50 = (*arg_ch | uVar4) & uStack_54;
                if (uStack_50 < 0x2e) {
                    if (uStack_50 == 0x2d) {
                        arg_8h = arg_8h | 1;
                        goto code_r0x00001104;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar9;
                        goto code_r0x00001117;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00001104;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x00001117;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00001104;
                    }
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x200;
                        if (arg_14h == 0) {
                            iVar7 = arg_10h + 4;
                            arg_10h = iVar7;
                        }
                        else {
                            iVar7 = arg_14h + 4;
                            arg_14h = iVar7;
                        }
                        uStack_48 = *(iVar7 + -4);
                        puVar9 = arg_ch;
                        uStack_6c = arg_8h;
                    }
                    else {
                        if (arg_14h == 0) {
                            iVar7 = arg_10h + 4;
                            arg_10h = iVar7;
                        }
                        else {
                            iVar7 = arg_14h + 4;
                            arg_14h = iVar7;
                        }
                        uStack_68 = *(iVar7 + -4);
                        puVar9 = arg_ch;
                    }
                    goto code_r0x00000f7b;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00001104;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x00001117;
                    if (0x39 < uStack_50) goto code_r0x00001068;
                }
                uVar4 = 0;
                uStack_60 = 0;
                if (0x2f < uStack_50) {
                    do {
                        if (0x39 < uStack_50) break;
                        arg_ch = arg_ch + iStack_70;
                        uVar4 = (uStack_50 - 0x30) + uVar4 * 10;
                        if (iStack_70 == 1) {
                            uVar8 = 0;
                        }
                        else {
                            uVar8 = *(arg_ch + 1) << 8;
                        }
                        uStack_50 = (*arg_ch | uVar8) & uStack_54;
                    } while (0x2f < uStack_50);
                    arg_8h = uStack_6c;
                    uStack_60 = uVar4;
                }
                puVar9 = arg_ch + -iStack_70;
                if ((arg_8h & 0x800U) == 0) {
                    arg_8h = arg_8h | 0x200;
                    uStack_48 = uStack_60;
                    uStack_6c = arg_8h;
                }
                else {
                    uStack_68 = uStack_60;
                }
                goto code_r0x00000f7f;
            }
            goto code_r0x00000f64;
        }
        goto code_r0x000018bb;
    }
code_r0x000018bf:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00000d73(1,0,uStack_5c);
        uVar4 = uStack_78 - uStack_38;
    }
    return uVar4 / uStack_5c;
code_r0x00001068:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x00001117;
    arg_8h = arg_8h | 0x10;
code_r0x00001104:
    puVar9 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00000f7b;
code_r0x00001117:
    uVar4 = arg_8h;
    puVar9 = arg_ch;
    if (uStack_50 < 0x68) {
        if (uStack_50 == 0x67) {
            if (arg_14h == 0) {
                piVar6 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                piVar6 = *arg_14h;
                arg_14h = arg_14h + 4;
            }
            if (piVar6 == NULL) {
                puStack_74 = 0xfffd2294;
            }
            else {
                fcn.00001900(auStack_30,0x26,0,-0x2dd60,*piVar6);
code_r0x00001243:
                puStack_74 = auStack_30;
            }
code_r0x00001247:
            puVar9 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x00001545:
            puVar9 = arg_ch + iStack_70;
            puStack_74 = 0xfffd2248;
            if (iStack_70 == 1) {
                uVar4 = 0;
            }
            else {
                uVar4 = puVar9[1] << 8;
            }
            uStack_50 = (*puVar9 | uVar4) & uStack_54;
            if (uStack_50 != 0xd) {
                puVar9 = arg_ch;
            }
        }
        else {
            if (uStack_50 != 0xd) {
                if (uStack_50 == 0x53) goto code_r0x000012e1;
                if (uStack_50 == 0x58) goto code_r0x000013b8;
                if (uStack_50 == 0x61) goto code_r0x000012eb;
                if (uStack_50 == 99) {
                    if (arg_14h == 0) {
                        uVar1 = *arg_10h;
                        arg_10h = arg_10h + 4;
                    }
                    else {
                        uVar1 = *arg_14h;
                        arg_14h = arg_14h + 4;
                    }
                    uStack_40 = uVar1;
                    puStack_74 = &uStack_40;
                    goto code_r0x00000f68;
                }
                if (uStack_50 != 100) goto code_r0x00000f64;
                goto code_r0x000013ce;
            }
code_r0x00001195:
            puVar9 = arg_ch + iStack_70;
            if (iStack_70 == 1) {
                uVar4 = 0;
            }
            else {
                uVar4 = puVar9[1] << 8;
            }
            uStack_50 = (*puVar9 | uVar4) & uStack_54;
            if (uStack_50 == 10) {
                puStack_74 = 0xfffd2248;
                arg_ch = puVar9;
                goto code_r0x00001247;
            }
            puStack_74 = 0xfffd2304;
            puVar9 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x000013b8:
            arg_8h = arg_8h | 0x20;
code_r0x000013bb:
            uVar4 = arg_8h | 0x80;
        }
        else {
            if (uStack_50 == 0x72) {
                if (arg_14h == 0) {
                    uVar4 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar4 = *arg_14h;
                    arg_14h = arg_14h + 4;
                }
                puStack_74 = auStack_30;
                if (uVar4 < 0) {
                    if ((uVar4 & 0x7fffffff) - 1 < 0x21) {
                        puStack_74 = (uVar4 & 0x7fffffff) * 0x15 + -0x2dc71;
                        goto code_r0x00001389;
                    }
                }
                else if (uVar4 < 6) {
                    puStack_74 = uVar4 * 0x19 + -0x2dcf4;
code_r0x00001389:
                    if (puStack_74 != auStack_30) goto code_r0x00001582;
                }
                fcn.00001900(auStack_30,0x26,0,-0x2dd04,uVar4);
                goto code_r0x00001582;
            }
            if (uStack_50 == 0x73) {
code_r0x000012e1:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x000012eb:
                if (arg_14h == 0) {
                    puStack_74 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    puStack_74 = *arg_14h;
                    arg_14h = arg_14h + 4;
                }
                if (puStack_74 == NULL) {
                    arg_8h = arg_8h & 0xfffffbff;
                    puStack_74 = 0xfffd2284;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x00001582;
            }
            if (uStack_50 == 0x74) {
                if (arg_14h == 0) {
                    iVar7 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    iVar7 = *arg_14h;
                    arg_14h = arg_14h + 4;
                }
                if (iVar7 != 0) {
                    fcn.00001900(auStack_30,0x26,0,-0x2dd20,*(iVar7 + 2));
                    goto code_r0x00001243;
                }
                puStack_74 = 0xfffd22d4;
                goto code_r0x00001247;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x00000f64:
                    puStack_74 = &uStack_50;
code_r0x00000f68:
                    arg_8h = arg_8h | 0x400;
                    puVar9 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x00001582;
                }
                goto code_r0x000013bb;
            }
        }
        if (-1 < uVar4) {
            uVar4 = uVar4 & 0xfffffffd | 0x4000;
        }
code_r0x000013ce:
        if ((uVar4 & 0x10) == 0) {
            if (arg_14h == 0) {
                iVar7 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                iVar7 = *arg_14h;
                arg_14h = arg_14h + 4;
            }
            arg_ch_00 = iVar7 >> 0x1f;
        }
        else if (arg_14h == 0) {
            iVar7 = *arg_10h;
            arg_ch_00 = *(arg_10h + 4);
            arg_10h = arg_10h + 8;
        }
        else {
            iVar7 = *arg_14h;
            arg_ch_00 = *(arg_14h + 4);
            arg_14h = arg_14h + 8;
        }
        uStack_7b = (uVar4 & 4) << 3;
        if ((uVar4 & 2) != 0) {
            uStack_7b = 0x2b;
        }
        bVar12 = (uVar4 & 8) != 0;
        if (uVar4 < '\0') {
            bVar12 = false;
            if ((((uVar4 & 0x10) == 0) && (arg_ch_00 < 1)) && (arg_ch_00 < 0)) {
code_r0x00001498:
                arg_ch_00 = 0;
            }
        }
        else {
            if ((uVar4 & 8) != 0) {
                uVar4 = uVar4 & 0xffffffdf;
                uStack_68 = 1;
            }
            if (((arg_ch_00 < 1) && (arg_ch_00 < 0)) && ((uVar4 & 0x4000) == 0)) {
                uStack_7b = 0x2d;
                bVar11 = iVar7 != 0;
                iVar7 = -iVar7;
                arg_ch_00 = -(arg_ch_00 + bVar11);
            }
            else if ((uVar4 & 0x4010) == 0x4000) goto code_r0x00001498;
        }
        iVar5 = fcn.00000da7(iVar7,arg_ch_00);
        uStack_60 = iVar5 - auStack_30;
        if (iVar7 == 0 && arg_ch_00 == 0) {
            uStack_60 = uStack_60 & -(uStack_68 != 0);
        }
        puStack_74 = auStack_30 + uStack_60;
        uStack_44 = uStack_60 % 3;
        if (uStack_44 != 0) {
            uStack_44 = 3 - uStack_44;
        }
        if ((bVar12) && (uStack_60 != 0)) {
            uStack_60 = uStack_60 + (uStack_60 - 1) / 3;
        }
        if (uStack_7b != 0) {
            uStack_60 = uStack_60 + 1;
            uStack_68 = uStack_68 + 1;
        }
        arg_8h = uVar4 | 0x1000;
        bVar11 = true;
        uStack_6c = arg_8h;
        if ((uVar4 & 0xa21) == 0x220) {
            uStack_68 = uStack_48;
        }
    }
code_r0x00001582:
    arg_ch = puVar9;
    uVar4 = arg_8h & 0x400;
    uStack_4c = uVar4;
    uStack_4c = (uVar4 != 0) + 1;
    uStack_3c = (-(uVar4 != 0) & 0xff00) + 0xff;
    if ((arg_8h & 0x1000U) == 0) {
        uStack_60 = 0;
        puVar10 = puStack_74;
        while ((((*puVar10 != '\0' || ((uVar4 != 0 && (*(puVar10 + 1) != '\0')))) &&
                ((uStack_60 < uStack_68 || ((arg_8h & 0x800U) == 0)))) &&
               ((uStack_3c & CONCAT11(*(puVar10 + 1),*puVar10)) != 0))) {
            uStack_60 = uStack_60 + 1;
            puVar10 = puVar10 + uStack_4c;
        }
    }
    else {
        uStack_4c = -uStack_4c;
    }
    if (uStack_68 < uStack_60) {
        uStack_68 = uStack_60;
    }
    uStack_34 = arg_8h & 0x201U;
    if ((arg_8h & 0x201U) == 0x200) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_78 != 0)) {
            uStack_78 = fcn.00000d73(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar11) {
        if (((uStack_7b != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_78 != 0)) {
            uStack_78 = fcn.00000d73(1,uStack_7b,uStack_5c);
        }
        iVar7 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar7 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_78 == 0)) goto code_r0x00001759;
        uVar4 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_78 != 0)) {
            uStack_78 = fcn.00000d73(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7b == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_78 == 0))
        goto code_r0x00001759;
        uVar4 = uStack_7b;
        iVar7 = 1;
    }
    uStack_78 = fcn.00000d73(iVar7,uVar4,uStack_5c);
code_r0x00001759:
    uVar4 = arg_8h & 0x2000;
    if ((uStack_7b != 0) < uStack_60) {
        uVar8 = uStack_4c;
        puVar10 = puStack_74;
        puStack_74 = uStack_7b != 0;
        do {
            if ((*puVar10 == '\0') && ((uVar8 < 2 || (*(puVar10 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar4 == 0) && (uStack_78 != 0)) {
                uStack_78 = fcn.00000d73(1,CONCAT11(*(puVar10 + 1),*puVar10) & uStack_3c,uStack_5c);
            }
            uVar2 = uStack_4c;
            puVar10 = puVar10 + uVar8;
            puVar3 = puStack_74 + 1;
            if (bVar12) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x0000183a;
                puStack_74 = puStack_74 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_74) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar8 = uStack_4c;
                if ((uVar4 == 0) && (uStack_78 != 0)) {
                    uStack_78 = fcn.00000d73(1,0x2c,uStack_5c);
                    uVar8 = uVar2;
                    puVar3 = puStack_74;
                    goto code_r0x0000183a;
                }
            }
            else {
code_r0x0000183a:
                puStack_74 = puVar3;
            }
        } while (puStack_74 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar4 == 0) && (uStack_78 != 0)) {
            uStack_78 = fcn.00000d73(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    arg_ch = arg_ch + iStack_70;
    if (iStack_70 == 1) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar4) & uStack_54;
    if (uStack_50 == 0) goto code_r0x000018bb;
    goto code_r0x00000f0b;
code_r0x000018bb:
    uVar4 = uStack_64;
    goto code_r0x000018bf;
}


/* fcn.00001b11 @ 0x1b11 */

int __fastcall fcn.00001b11(int *param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    
    uVar2 = param_1 & 3;
    piVar3 = param_1;
    if ((uVar2 != 0) && (uVar2 == (param_2 & 3))) {
        iVar1 = 4 - uVar2;
        for (; (iVar1 != 0 && (*piVar3 == *param_2)); piVar3 = piVar3 + 1) {
            param_2 = param_2 + 1;
            iVar1 = iVar1 + -1;
        }
    }
    for (; (piVar3 <= param_1 + 3 && (*piVar3 == *param_2)); piVar3 = piVar3 + 1) {
        param_2 = param_2 + 1;
    }
    while( true ) {
        if (param_1 + 4 <= piVar3) {
            return 0;
        }
        if (*piVar3 != *param_2) break;
        piVar3 = piVar3 + 1;
        param_2 = param_2 + 1;
    }
    return *piVar3 - *param_2;
}


/* fcn.00000847 @ 0x847 */

uint __fastcall fcn.00000847(int param_1,uint param_2)

{
    char *pcVar1;
    char cVar2;
    int iVar3;
    
    pcVar1 = param_1 + 0x34;
    iVar3 = 0;
    cVar2 = *pcVar1;
    while (cVar2 != '\0') {
        iVar3 = iVar3 + 1;
        cVar2 = pcVar1[iVar3];
    }
    fcn.00000d55(param_2,0x100,0xfffd2200,pcVar1,*(param_1 + 0x28),pcVar1 + iVar3 + 1);
    return 0;
}


/* fcn.00000877 @ 0x877 */

uint __fastcall fcn.00000877(uint32_t param_1,uint param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = 0;
    uVar2 = *0xfffd1d64;
    while( true ) {
        if (uVar2 == 0) {
            fcn.00000d55(param_2,0x100,0xfffd2218,param_1 & 0xff000000,param_1 & 0xff0000,param_1 & 0xffff);
            return 0;
        }
        if (uVar2 == param_1) break;
        uVar2 = *(iVar1 * 8 + -0x2e294);
        iVar1 = iVar1 + 1;
    }
    fcn.00000d55(param_2,0x100,0xfffd21d0,*(iVar1 * 8 + -0x2e298));
    return 0;
}


/* fcn.00002550 @ 0x2550 */

int __fastcall fcn.00002550(uint param_1,uchar *param_2,int param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uchar *puStack_4;
    
    uVar2 = fcn.000025de();
    uVar4 = uVar2;
    iVar3 = 0;
    if (((uVar2 & 2) != 0) && (param_2 != NULL)) {
        iVar3 = param_3;
        puStack_4 = param_2;
        if (param_3 != 0) {
            do {
                do {
                    uVar1 = in(0x3fd);
                } while ((uVar1 & 0x20) == 0);
                uVar4 = 0;
                do {
                    if (iVar3 == 0) goto code_r0x000025ac;
                    out(0x3f8,*puStack_4);
                    uVar4 = uVar4 + 1;
                    iVar3 = iVar3 + -1;
                    puStack_4 = puStack_4 + 1;
                } while (uVar4 < 0x10);
            } while (iVar3 != 0);
code_r0x000025ac:
            uVar4 = uVar2 & 0xff;
        }
        iVar3 = param_3;
    }
    if ((uVar4 & 0x10) != 0) {
        iVar3 = fcn.00002dab(param_3);
        uVar4 = uVar2 & 0xff;
    }
    if ((uVar4 & 0x20) != 0) {
        fcn.0000275b(param_3);
    }
    return iVar3;
}


/* fcn.000025de @ 0x25de */

uint8_t __fastcall fcn.000025de(int param_1)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t var_4h;
    
    fcn.00001982(param_1);
    if (((param_1 == 0) || (iVar1 = fcn.00001940(), iVar1 == 0)) || (iVar1 == -0x18)) {
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


/* fcn.000019a7 @ 0x19a7 */

int64_t __fastcall fcn.000019a7(int param_1)

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
    
    fcn.00001982();
    if (param_1 == 0) {
        uVar9 = 0x22;
        goto code_r0x00001a0b;
    }
    iVar8 = fcn.00001940();
    if ((iVar8 != 0) && (iVar8 != -0x18)) {
        cVar1 = *(iVar8 + 0x1a);
        if (cVar1 == '\x03') {
            uVar9 = 0x2580;
            goto code_r0x00001a0b;
        }
        if (cVar1 == '\x04') {
            uVar9 = 0x4b00;
            goto code_r0x00001a0b;
        }
        if (cVar1 == '\x06') {
            uVar9 = 0xe100;
            goto code_r0x00001a0b;
        }
    }
    uVar9 = 0x1c200;
code_r0x00001a0b:
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


/* fcn.00002c5a @ 0x2c5a */

void fcn.00002c5a(void)

{
    uint32_t uVar1;
    uint extraout_EDX;
    uint extraout_EDX_00;
    ulong uVar2;
    uint64_t uVar3;
    
    uVar2 = fcn.000030a6();
    uVar3 = fcn.0000303d(uVar2);
    uVar1 = uVar3;
    if (((uVar3 & 0xffffff00) != 0) && ((uVar1 & 0xfffff000) != 0xfffff000)) {
        fcn.00002c1d(uVar2);
        if (*(uVar1 + 0xfc) == 0x44570110) {
            *(uVar1 + 0xc) = 0x80;
        }
        else {
            *(uVar1 + 3) = 0x80;
        }
        fcn.00002c03(uVar3,0);
        fcn.00002c03(uVar3,extraout_EDX);
        fcn.00002c03(uVar3,3);
        fcn.00002c03(uVar3,1);
        fcn.00002c03(uVar3,extraout_EDX_00);
    }
    return;
}


/* fcn.000008d8 @ 0x8d8 */

uint __fastcall fcn.000008d8(uint32_t param_1,int16_t param_2,int param_3,int param_4)

{
    int16_t iVar1;
    int iVar2;
    uint16_t uVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    uint32_t uVar6;
    
    if (param_3 == 0) {
code_r0x000009fd:
        if (param_1 != '\x02') {
            return 0;
        }
code_r0x00000a02:
        fcn.00000877();
    }
    else {
        uVar6 = param_1;
        iVar2 = fcn.00001b11(param_1);
        if (iVar2 == 0) {
            piVar4 = *(param_3 + 0x18);
            piVar5 = piVar4;
            for (uVar3 = 0;
                (((iVar2 = *(param_3 + 0x14), iVar2 == 0 && (*piVar5 != '\0')) || ((iVar2 == 1 && (*piVar4 != 0)))) &&
                (uVar3 < 0xff)); uVar3 = uVar3 + iVar1) {
                if (iVar2 == 0) {
                    iVar1 = *piVar5;
                    piVar5 = piVar5 + 1;
                    *(uVar3 + param_4) = iVar1;
                    iVar1 = 1;
                }
                else {
                    if (iVar2 != 1) {
                        return 0x80000003;
                    }
                    iVar1 = *piVar4;
                    piVar4 = piVar4 + 1;
                    *(uVar3 + param_4) = iVar1;
                    iVar1 = 2;
                }
            }
            *(uVar3 + param_4) = 0;
            return 0;
        }
        iVar2 = fcn.00001b11(uVar6);
        if (iVar2 == 0) {
            fcn.00000df1(0,param_3 + 0x78,*0xfffd2800,param_3 + 0x18);
            return 0;
        }
        iVar2 = fcn.00001b11(uVar6);
        if (iVar2 == 0) {
            if (param_1 != '\x02') {
                return 0;
            }
            if (((param_1 & 0xff000000) != 0x90000000) || (param_2 != 7)) goto code_r0x00000a02;
        }
        else {
            iVar2 = fcn.00001b11(uVar6);
            if (iVar2 != 0) goto code_r0x000009fd;
        }
        fcn.00000847();
    }
    return 0;
}


/* fcn.00000aa2 @ 0xaa2 */

void __fastcall fcn.00000aa2(uint param_1,uint param_2)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    
    iVar3 = 0;
    pcVar2 = 0xfffcf401;
    while (pcVar2 != NULL) {
        (*pcVar2)(param_1,param_2);
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        pcVar2 = *(iVar1 + -0x2de0c);
    }
    return;
}


/* fcn.00002d1c @ 0x2d1c */

int __fastcall fcn.00002d1c(uint param_1,uchar *param_2)

{
    int iVar1;
    uint *puVar2;
    uint32_t uVar3;
    uchar uVar4;
    int iVar5;
    ulong uVar6;
    
    if (param_2 != NULL) {
        uVar6 = fcn.000030a6();
        puVar2 = fcn.0000303d(uVar6);
        iVar5 = 0;
        if (((puVar2 & 0xffffff00) != 0) && ((puVar2 & 0xfffff000) != 0xfffff000)) {
            fcn.00002c1d(uVar6);
            iVar1 = puVar2[0x3f];
            do {
                if (iVar1 == 0x44570110) {
                    uVar3 = puVar2[5];
                }
                else {
                    uVar3 = *(puVar2 + 5);
                }
                if ((uVar3 & 1) == 0) {
                    return iVar5;
                }
                if (iVar1 == 0x44570110) {
                    uVar4 = *puVar2;
                }
                else {
                    uVar4 = *puVar2;
                }
                if ((uVar3 & 0x10) == 0) {
                    *param_2 = uVar4;
                    param_2 = param_2 + 1;
                    iVar5 = iVar5 + 1;
                }
            } while (iVar5 != 1);
            return 1;
        }
    }
    return 0;
}


/* fcn.00002683 @ 0x2683 */

uint32_t __fastcall fcn.00002683(int16_t *param_1)

{
    uint32_t uVar1;
    
    if ((param_1 != NULL) && (uVar1 = 0, *param_1 != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.000026a8 @ 0x26a8 */

uint32_t __fastcall fcn.000026a8(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if ((param_1 != NULL) && (*param_1 != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00001900 @ 0x1900 */

void __cdecl fcn.00001900(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00000df1(arg_10h,arg_14h,&arg_18h,0);
    return;
}


/* fcn.00000da7 @ 0xda7 */

uchar * __cdecl fcn.00000da7(int32_t arg_8h,int32_t arg_ch)

{
    uint64_t uVar1;
    uchar *in_ECX;
    int32_t in_EDX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_ch;
    *in_ECX = 0;
    var_4h = in_EDX;
    do {
        uVar1 = arg_ch;
        arg_ch = arg_ch / var_4h;
        uVar1 = uVar1 % var_4h << 0x20 | arg_8h;
        arg_8h = uVar1 / var_4h;
        if (var_8h != 0) {
            *var_8h = uVar1 % var_4h;
        }
        in_ECX = in_ECX + 1;
        *in_ECX = *(var_ch + -0x2d99c);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00000d73 @ 0xd73 */

uchar * __cdecl fcn.00000d73(int arg_8h,int32_t arg_ch,int arg_10h)

{
    uchar *in_ECX;
    uchar *in_EDX;
    int iVar1;
    
    iVar1 = 0;
    if (0 < arg_8h) {
        do {
            if (in_EDX <= in_ECX) {
                return in_ECX;
            }
            *in_ECX = arg_ch;
            if (arg_10h != 1) {
                in_ECX[1] = arg_ch >> 8;
            }
            in_ECX = in_ECX + arg_10h;
            iVar1 = iVar1 + 1;
        } while (iVar1 < arg_8h);
    }
    return in_ECX;
}


/* fcn.00001982 @ 0x1982 */

void __fastcall fcn.00001982(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x30))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000d31 @ 0xd31 */

uint32_t __fastcall fcn.00000d31(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000191f @ 0x191f */

int16_t * __fastcall fcn.0000191f(uint param_1,int16_t *param_2)

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


/* fcn.00002659 @ 0x2659 */

ulong fcn.00002659(void)

{
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    return 0x22231fa;
}


/* fcn.00002638 @ 0x2638 */

ulong __cdecl fcn.00002638(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch / 1000000,(arg_ch % 1000000 << 0x20 | arg_8h) / 1000000);
}


/* fcn.00001aaa @ 0x1aaa */

void __fastcall fcn.00001aaa(uint32_t param_1)

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


/* fcn.00001b70 @ 0x1b70 */

uint __fastcall fcn.00001b70(uint param_1,uint *param_2)

{
    int16_t iVar1;
    int16_t *piVar2;
    
    if (param_2 == NULL) {
        return 0x80000002;
    }
    piVar2 = *param_2;
    iVar1 = *piVar2;
    do {
        if (iVar1 == -1) {
            return 0x8000000e;
        }
        piVar2 = piVar2 + piVar2[1];
        iVar1 = *piVar2;
    } while (iVar1 != 4);
    *param_2 = piVar2;
    return 0;
}


/* fcn.00001c8c @ 0x1c8c */

uint __cdecl fcn.00001c8c(int32_t arg_8h,int32_t arg_ch)

{
    uint *in_EDX;
    
    (*in_EDX[1])();
    (**in_EDX)();
    (*in_EDX[1])();
    return 0;
}


/* fcn.00001bf4 @ 0x1bf4 */

uint __cdecl fcn.00001bf4(int32_t arg_8h)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    int *in_ECX;
    int16_t iVar4;
    uint8_t uStack_1c;
    int iStack_18;
    
    iVar2 = (**(*in_ECX + 0x20))();
    if (iVar2 < 0) {
        uVar3 = 0x80000007;
    }
    else {
        uVar3 = 0x80000015;
        iVar4 = 1000;
        puVar1 = *(*in_ECX + 0x60);
        do {
            (**puVar1)();
            if ((uStack_1c & 3) == 2) {
                uVar3 = 0;
                break;
            }
            (**(iStack_18 + 4))();
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    return uVar3;
}


/* fcn.00001ceb @ 0x1ceb */

//WARNING: Removing unreachable block (ram,0x00001f43)
//WARNING: Removing unreachable block (ram,0x00001e4f)
//WARNING: Removing unreachable block (ram,0x00001ec9)
//WARNING: Removing unreachable block (ram,0x00001fd7)
//WARNING: Removing unreachable block (ram,0x00001ff5)

uint __cdecl fcn.00001ceb(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    int *in_ECX;
    uint32_t arg_8h_00;
    uint *in_EDX;
    uint8_t uStack_2d;
    uint16_t uStack_28;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    int iStack_14;
    uint32_t auStack_c [2];
    
    iVar2 = (**(*in_ECX + 0x20))();
    if (iVar2 < 0) {
        uVar3 = 0x80000007;
    }
    else {
        if (in_EDX == NULL) {
            in_EDX = *(*in_ECX + 0x60);
        }
        puVar1 = *(*in_ECX + 100);
        (*puVar1[1])();
        (*puVar1[1])();
        (**puVar1)();
        (*puVar1[1])();
        (**puVar1)();
        arg_8h_00 = uStack_1c & 0xfffffff8;
        *arg_8h = arg_8h_00;
        (**in_EDX)();
        (*in_EDX[1])();
        (**in_EDX)();
        if ((uStack_20 & 1) == 0) {
            (*in_EDX[1])();
            (**(iStack_14 + 4))();
            (**in_EDX)();
        }
        (**in_EDX)();
        (*in_EDX[1])();
        (**(iStack_14 + 4))();
        (**in_EDX)();
        (**in_EDX)();
        (*in_EDX[1])();
        (**(iStack_14 + 4))();
        (**in_EDX)();
        (**(iStack_14 + 4))();
        (*in_EDX[1])();
        (**in_EDX)();
        uStack_2d = 0;
        do {
            *arg_ch = uStack_2d;
            if ((uStack_28 & 1) != 0) {
                (**in_EDX)();
                auStack_c[0] = *arg_ch << 0x1c | 0xf0000;
                iVar2 = fcn.00001c8c(arg_8h_00,auStack_c);
                if (-1 < iVar2) {
                    iVar2 = fcn.00001bf4(arg_8h_00);
                    if (-1 < iVar2) break;
                    out(0x84,*arg_ch | 0xda1dee00);
                }
            }
            uStack_28 = uStack_28 >> 1;
            uStack_2d = uStack_2d + 1;
        } while (uStack_2d < 0xf);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000020d1 @ 0x20d1 */

int __cdecl fcn.000020d1(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uStack_2e;
    uchar uStack_2d;
    uint16_t auStack_2c [2];
    uint16_t auStack_28 [2];
    uint32_t uStack_24;
    int iStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    int iStack_c;
    
    uVar2 = 0;
    uStack_24 = 0;
    if ((arg_10h == 0) || (iStack_c = (**(*arg_8h + 0x20))(arg_8h,0xfffd1cd4,0,0,&iStack_20), iStack_c < 0)) {
        return -0x7ffffff9;
    }
    if (arg_ch == 0) {
        arg_ch = *(*arg_8h + 0x60);
    }
    (**arg_ch)(arg_8h,arg_ch,0,arg_10h + 0x123,0,1,&uStack_2d);
    (**(arg_ch + 4))(arg_8h,arg_ch,0,arg_10h + 0x123,0,1,&uStack_2d);
    (**arg_ch)(arg_8h,arg_ch,1,arg_10h,0,1,auStack_28);
    uStack_10 = (auStack_28[0] >> 0xc) + (auStack_28[0] >> 8 & 0xf);
    uStack_2e = 0;
    if (uStack_10 != 0) {
        uVar1 = 0;
        do {
            uStack_18 = uVar1 * 0x20;
            iVar3 = arg_10h + 0x80 + uStack_18;
            (**arg_ch)(arg_8h,arg_ch,1,iVar3,0,1,auStack_2c);
            auStack_2c[0] = auStack_2c[0] & 0xfffd;
            (**(arg_ch + 4))(arg_8h,arg_ch,1,iVar3,0,1,auStack_2c);
            (**arg_ch)(arg_8h,arg_ch,1,iVar3,0,1,auStack_2c);
            auStack_2c[0] = auStack_2c[0] | 1;
            (**(arg_ch + 4))(arg_8h,arg_ch,1,iVar3,0,1,auStack_2c);
            uStack_1c = 0;
            uStack_14 = arg_10h + 0x80 + uStack_18;
            do {
                (**(iStack_20 + 4))(arg_8h,iStack_20,100);
                (**arg_ch)(arg_8h,arg_ch,1,uStack_14,0,1,auStack_2c);
                if (auStack_2c[0] == 1) break;
                uStack_1c = uStack_1c + 1;
            } while (uStack_1c < 0xffff);
            iVar3 = uStack_18 + arg_10h + 0x80;
            (**arg_ch)(arg_8h,arg_ch,1,iVar3,0,1,auStack_2c);
            auStack_2c[0] = auStack_2c[0] & 0xfffe;
            (**(arg_ch + 4))(arg_8h,arg_ch,1,iVar3,0,1,auStack_2c);
            uStack_18 = 0;
            do {
                (**(iStack_20 + 4))(arg_8h,iStack_20,100);
                (**arg_ch)(arg_8h,arg_ch,1,uStack_14,0,1,auStack_2c);
                if (auStack_2c[0] == 0) break;
                uStack_18 = uStack_18 + 1;
            } while (uStack_18 < 0xffff);
            uStack_2e = uStack_2e + 1;
            uVar1 = uStack_2e;
        } while (uVar1 < uStack_10);
    }
    (**arg_ch)(arg_8h,arg_ch,2,arg_10h + 8,0,1,&uStack_24);
    uStack_24 = uStack_24 & 0xfffffffe;
    (**(arg_ch + 4))(arg_8h,arg_ch,2,arg_10h + 8,0,1,&uStack_24);
    uStack_14 = 0;
    do {
        (**(iStack_20 + 4))(arg_8h,iStack_20,100);
        (**arg_ch)(arg_8h,arg_ch,2,arg_10h + 8,0,1,&uStack_24);
        if (uStack_24 == 0) break;
        uStack_14 = uStack_14 + 1;
    } while (uStack_14 < 0xffff);
    (**(iStack_20 + 4))(arg_8h,iStack_20,100);
    (**arg_ch)(arg_8h,arg_ch,2,arg_10h + 8,0,1,&uStack_24);
    uStack_24 = uStack_24 | 1;
    (**(arg_ch + 4))(arg_8h,arg_ch,2,arg_10h + 8,0,1,&uStack_24);
    uStack_10 = 0;
    do {
        (**(iStack_20 + 4))(arg_8h,iStack_20,100);
        (**arg_ch)(arg_8h,arg_ch,2,arg_10h + 8,uStack_10,1,&uStack_24);
        if (uStack_24 == 1) break;
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0xffff);
    (**(iStack_20 + 4))(arg_8h,iStack_20,100);
    return iStack_c;
}


/* fcn.00002406 @ 0x2406 */

uint __thiscall fcn.00002406(int *param_1,int32_t param_2,uint8_t param_3)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    int *piStack_8;
    int *piStack_4;
    
    uVar3 = 0;
    piStack_8 = param_1;
    piStack_4 = param_1;
    iVar1 = (**(*param_1 + 0x20))(param_1,0xfffd1cd4,0,0,&piStack_4);
    if (iVar1 < 0) {
        uVar2 = 0x80000007;
    }
    else {
        do {
            piStack_8 = *(uVar3 - 0x2d8fc) | param_3 << 0x1c;
            iVar1 = fcn.00001c8c(param_2,&piStack_8);
            if ((iVar1 != 0) || (iVar1 = fcn.00001bf4(param_2), iVar1 < 0)) break;
            uVar3 = uVar3 + 4;
        } while (uVar3 < 8);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0000248a @ 0x248a */

uint __fastcall fcn.0000248a(int *param_1)

{
    int32_t arg_ch;
    int iVar1;
    int8_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    _var_8h = param_1 & 0xffffff00;
    arg_ch = *(*param_1 + 0x60);
    iVar1 = fcn.00001ceb(&var_4h,&var_8h);
    if (((-1 < iVar1) && (iVar1 = fcn.000020d1(param_1,arg_ch,var_4h), -1 < iVar1)) &&
       (iVar1 = fcn.00002406(var_4h,_var_8h), -1 < iVar1)) {
        _var_8h = _var_8h << 0x1c | 0x170a0c;
        iVar1 = fcn.00001c8c(var_4h,&var_8h);
        if ((-1 < iVar1) && (iVar1 = fcn.00001bf4(var_4h), -1 < iVar1)) {
            return 0;
        }
    }
    return 0x80000007;
}


/* fcn.00002dab @ 0x2dab */

uint32_t __fastcall fcn.00002dab(uint param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    int iStack_20;
    int iStack_1c;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    uint uStack_c;
    int iStack_8;
    
    iStack_1c = param_2;
    cVar2 = fcn.00002fb5(&iStack_20);
    if ((cVar2 != '\0') && (param_2 != 0)) {
        if (iStack_20 == 1) {
            cVar2 = *(iStack_10 + 0x7c);
        }
        else {
            cVar2 = *(iStack_10 + 0x1f);
        }
        if (cVar2 != -1) {
            uVar5 = 0;
            iVar6 = 1000000;
            if (param_3 == 0) {
                return 0;
            }
            do {
                iVar7 = iStack_10;
                while( true ) {
                    iVar1 = iStack_10;
                    uStack_18 = CONCAT31(uStack_18._1_3_,*(iStack_1c + uVar5));
                    if (iStack_20 == 1) {
                        uVar4 = *(iVar7 + 0x7c);
                    }
                    else {
                        uVar4 = *(iVar7 + 0x1f);
                    }
                    if ((uVar4 & 2) == 0) break;
                    fcn.00002c03(iStack_10,uStack_c,uStack_18);
                    uVar5 = uVar5 + 1;
                    iVar7 = iVar1;
                    if (param_3 <= uVar5) {
                        return param_3;
                    }
                }
                if (iVar6 == 0) {
                    cVar2 = fcn.00002fb5(&iStack_14);
                    if (cVar2 == '\0') {
                        return 0;
                    }
                    if (iStack_14 == 1) {
                        uVar3 = *(iStack_8 + 0x10);
                    }
                    else {
                        uVar3 = *(iStack_8 + 4);
                    }
                    if ((uVar3 >> 5 & 1) == 0) {
                        return 0;
                    }
                    fcn.00002ff5();
                    iVar6 = 1000000;
                }
                fcn.00001af3();
                iVar6 = iVar6 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.0000275b @ 0x275b */

uint __fastcall fcn.0000275b(int32_t param_1,int32_t param_2,int param_3)

{
    char cVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint noname_0;
    uchar auStack_a8 [4];
    uint uStack_a4;
    uint uStack_a0;
    uint32_t uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    int iStack_48;
    int32_t iStack_8;
    
    if (param_3 != 0) {
        cVar1 = fcn.00002807();
        if (cVar1 == '\0') {
            return 0x80000015;
        }
        uStack_a4 = 0x48;
        uStack_a0 = 0xe;
        fcn.000029ab(extraout_ECX);
        fcn.000029de(auStack_a8,extraout_ECX_00);
        if (iStack_48 == 0) {
            return 0x80000007;
        }
        uStack_9c = uStack_9c & 0xffff0fff | 0xff0000;
        uStack_98 = *0xfffd1d14;
        uStack_94 = *0xfffd1d18;
        uStack_90 = *0xfffd1d1c;
        uStack_8c = *0xfffd1d20;
        fcn.000028e2(noname_0,param_1,iStack_8,param_2);
    }
    return 0;
}


/* fcn.00000128 @ 0x128 */

uint * fcn.00000128(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.00000168 @ 0x168 */

uint * fcn.00000168(uint *param_1,uint32_t param_2)

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


/* fcn.00002807 @ 0x2807 */

uint __fastcall fcn.00002807(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uchar uVar5;
    int iVar6;
    bool bVar7;
    
    uVar5 = 0;
    iVar6 = -0x7ffffff9;
    if (*0xfe1000e8 != 0xff) {
        iVar6 = 0;
    }
    uVar1 = (*0xfe1000e8 == 0xff) - 1U & *0xfe1000e8;
    if ((iVar6 < 0) || ((uVar1 & 1) == 0)) {
        return 0xfe100000;
    }
    uVar1 = uVar1 >> 1;
    uVar2 = uVar1 & 3;
    uVar4 = CONCAT31(0xfe1000,uVar1) & 0xffffff03;
    if (uVar2 == 0) {
        if (param_1 != 1) {
            bVar7 = param_1 == 2;
            goto code_r0x0000286e;
        }
    }
    else {
        if (uVar2 == 1) {
            if ((param_1 == 1) || (param_1 == 2)) goto code_r0x00002870;
            bVar7 = param_1 == 3;
        }
        else {
            cVar3 = uVar4;
            if (cVar3 == '\x02') {
                if (((param_1 == 1) || (param_1 == 2)) || (param_1 == 3)) goto code_r0x00002870;
                bVar7 = param_1 == 4;
            }
            else {
                bVar7 = cVar3 == '\x03';
            }
        }
code_r0x0000286e:
        if (!bVar7) goto code_r0x00002872;
    }
code_r0x00002870:
    uVar5 = 1;
code_r0x00002872:
    return CONCAT31(uVar4 >> 8,uVar5);
}


/* fcn.000029ab @ 0x29ab */

void __fastcall fcn.000029ab(uint *param_1)

{
    if (param_1 == NULL) {
        param_1 = 0xfffd27cc;
    }
    fcn.00002732();
    param_1[1] = 0xffffffff;
    *param_1 = 0x10900;
    param_1[4] = 0xfffd14f0;
    fcn.00002a4f(param_1,0);
    return;
}


/* fcn.00002732 @ 0x2732 */

uint __fastcall fcn.00002732(int param_1,uint param_2)

{
    uint uVar1;
    
    if (param_1 == -0x2d894) {
        return 0xfffd276c;
    }
    uVar1 = fcn.00000128(param_1,0xfffd276c,param_2);
    return uVar1;
}


/* fcn.00002a4f @ 0x2a4f */

void fcn.00002a4f(int param_1,uint param_2)

{
    *(param_1 + 8) = 0xfffd140f;
    *(param_1 + 0xc) = 0xfffd143a;
    *(param_1 + 0x30) = param_2;
    *(param_1 + 0x14) = 0xfffd1497;
    *(param_1 + 0x18) = 0xfffd1488;
    *(param_1 + 0x1c) = 0xfffd14a6;
    *(param_1 + 0x20) = 0xfffd14b4;
    *(param_1 + 0x24) = 0xfffd14c4;
    *(param_1 + 0x28) = 0xfffd14e1;
    *(param_1 + 0x2c) = 0xfffd14d2;
    return;
}


/* fcn.000029de @ 0x29de */

int * __fastcall fcn.000029de(int param_1,int *param_2,uint param_3)

{
    if (param_2 == NULL) {
        param_2 = 0xfffd270c;
    }
    else {
        if (param_1 == 0) {
            param_1 = -0x2d834;
        }
        fcn.00002732();
        param_2[1] = param_2[1] & 0xfffffffe;
        param_2[7] = 0;
        *param_2 = param_1;
        if (*(param_1 + 8) != NULL) {
            (**(param_1 + 8))(param_2,param_3);
        }
    }
    return param_2;
}


/* fcn.000028e2 @ 0x28e2 */

void __cdecl fcn.000028e2(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    char cVar1;
    int *in_ECX;
    int32_t iVar2;
    uint16_t uVar3;
    int32_t var_80h;
    int32_t var_50h;
    int32_t var_2ch;
    int32_t var_4h;
    
    var_4h = &var_2ch;
    if (in_ECX != 0xfffd270c) {
        var_80h = (arg_ch & 7U) << 4 | in_ECX[2] & 0xffff80U | 0x1000002;
        fcn.00002877(arg_10h,&var_80h,&var_4h);
        iVar2 = var_4h;
        if (arg_10h == 0) {
            do {
                uVar3 = arg_10h;
                cVar1 = *((arg_10h & 0xffffU) + arg_14h);
                *(&var_50h + (arg_10h & 0xffffU)) = cVar1;
                if (cVar1 == '\0') break;
                arg_10h = arg_10h + 1;
                uVar3 = arg_10h;
            } while (uVar3 < 0x18);
            if (uVar3 < 0x18) {
                fcn.0000274a();
            }
            iVar2 = var_4h;
            *var_4h = *0xfffd268c;
        }
        else {
            var_50h = arg_14h;
            *var_4h = *0xfffd2690;
            *(iVar2 + 2) = arg_10h;
        }
        *(iVar2 + 4) = *0xfffd26b4;
        (**(*in_ECX + 0x10))();
    }
    return;
}


/* fcn.00002877 @ 0x2877 */

void __thiscall fcn.00002877(int param_1,int16_t param_2,uint32_t *param_3,int *param_4)

{
    uint uVar1;
    uint *puVar2;
    
    uVar1 = *0xfffd2674;
    puVar2 = *param_4;
    if (*(param_3 + 2) == -1) {
        param_3[1] = *(param_1 + 0xc);
        param_3[2] = *(param_1 + 0x10);
        param_3[3] = *(param_1 + 0x14);
        param_3[4] = *(param_1 + 0x18);
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
    }
    if ((*param_3 & 0x80) != 0) {
        param_3[5] = *(param_1 + 0x1c);
        *(param_1 + 0x1c) = *(param_1 + 0x1c) + 1;
        *puVar2 = *0xfffd2678;
        puVar2 = puVar2 + 1;
    }
    if (param_2 != 0) {
        *param_3 = *param_3 | 0x200;
        *(param_3 + 10) = param_2;
        *puVar2 = *0xfffd2688;
        puVar2 = puVar2 + 1;
    }
    *param_4 = puVar2;
    return;
}


/* fcn.0000274a @ 0x274a */

uint __fastcall fcn.0000274a(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000168(param_1,param_2);
    return uVar1;
}


/* fcn.000030a6 @ 0x30a6 */

uint fcn.000030a6(void)

{
    uint uVar1;
    
    uVar1 = *0xfffd2018;
    if ((*0xfdcb0618 & 2) == 0) {
        uVar1 = 0xf1000;
    }
    return uVar1;
}


/* fcn.0000303d @ 0x303d */

int64_t fcn.0000303d(uint32_t param_1,int param_2)

{
    int32_t arg_8h;
    uint32_t uVar1;
    int64_t iVar2;
    
    if ((param_2 == 0) && (param_1 < 0xfe020000)) {
        arg_8h = fcn.000030fe(param_1 + 0x14,0);
        iVar2 = fcn.0000270b(arg_8h,0);
        uVar1 = fcn.000030fe(param_1 + 0x10,0);
        iVar2 = iVar2 + (uVar1 & 0xfffff000);
    }
    else {
        uVar1 = *(param_1 + 0x10);
        iVar2 = fcn.0000270b(*(param_1 + 0x14),0);
        iVar2 = iVar2 + (uVar1 & 0xfffff000);
    }
    return iVar2;
}


/* fcn.00002c1d @ 0x2c1d */

void fcn.00002c1d(int16_t *param_1)

{
    if ((((*param_1 != -1) && ((param_1[2] & 2U) == 0)) && ((*(param_1 + 8) & 0xfffff000) != 0)) &&
       ((*(param_1 + 8) & 0xfffff000) != 0xfffff000)) {
        *(param_1 + 2) = *(param_1 + 2) | 2;
    }
    return;
}


/* fcn.00002c03 @ 0x2c03 */

void __fastcall fcn.00002c03(int param_1,int param_2,int param_3,uint param_4,uint8_t param_5)

{
    if (param_1 == 1) {
        *(param_3 + param_2 * 4) = param_5;
        return;
    }
    *(param_3 + param_2) = param_5;
    return;
}


/* fcn.00002fb5 @ 0x2fb5 */

bool __fastcall fcn.00002fb5(uint param_1,int *param_2,uint32_t *param_3)

{
    char cVar1;
    
    if ((*0xfdcb0618 & 2) == 0) {
        cVar1 = fcn.00002f26();
    }
    else {
        cVar1 = fcn.00002ec5(param_2);
    }
    if (cVar1 != '\0') {
        *param_3 = *(*param_2 + 0xfc) == 0x44570110;
    }
    return cVar1 != '\0';
}


/* fcn.00002ff5 @ 0x2ff5 */

void fcn.00002ff5(void)

{
    char cVar1;
    uint8_t uVar2;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_4h;
    
    cVar1 = fcn.00002fb5(&var_4h);
    if (cVar1 != '\0') {
        if (var_4h == 1) {
            uVar2 = *(var_10h + 0x10);
        }
        else {
            uVar2 = *(var_10h + 4);
        }
        fcn.00002c03(var_10h,var_ch,uVar2 & 0xdf | 2);
    }
    return;
}


/* fcn.00001af3 @ 0x1af3 */

uint __fastcall fcn.00001af3(uint param_1)

{
    ulong uVar1;
    
    uVar1 = fcn.00002659(param_1,param_1,param_1);
    fcn.00002638(uVar1,uVar1 >> 0x20);
    fcn.00001aaa();
    return 10;
}


/* fcn.00002e99 @ 0x2e99 */

void fcn.00002e99(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = (*(param_1 + 0xfc) != 0x44570110) - 1 & 0x183;
    *(uVar1 + 0x81 + param_1) = *(uVar1 + 0x81 + param_1) | 7;
    return;
}


/* fcn.000030be @ 0x30be */

uint fcn.000030be(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000026c7(0,param_2 & 1);
    return CONCAT31((uVar1 | param_1) >> 8,*((uVar1 | param_1) + 0xc0000000));
}


/* fcn.000026c7 @ 0x26c7 */

ulong __cdecl fcn.000026c7(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.000030dc @ 0x30dc */

uint __thiscall fcn.000030dc(uchar param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000026c7(0,param_3 & 1);
    *((uVar1 | param_2) + 0xc0000000) = param_1;
    return CONCAT31((uVar1 | param_2) >> 8,param_1);
}


/* fcn.00002ec5 @ 0x2ec5 */

uint __cdecl fcn.00002ec5(int32_t arg_8h)

{
    int iVar1;
    uint32_t uVar2;
    unkbyte3 Var4;
    unkbyte3 extraout_EAX;
    uint uVar3;
    uint32_t uVar5;
    ulong uVar6;
    
    iVar1 = *0xfffd2018;
    uVar6 = fcn.0000303d(*0xfffd2018,0);
    uVar5 = uVar6 >> 0x20;
    *arg_8h = uVar6;
    if ((uVar6 != 0xfffff000) || (uVar3 = 0xfffff000, uVar5 != 0xffffffff)) {
        uVar2 = uVar6 | uVar5;
        uVar3 = 0;
        if (uVar2 != 0) {
            Var4 = uVar2 >> 8;
            if ((*(iVar1 + 0x84) & 3) != 0) {
                uVar3 = *arg_8h;
                *(iVar1 + 0x84) = *(iVar1 + 0x84) & 0xfc;
                fcn.00002e99(uVar3,uVar5);
                Var4 = extraout_EAX;
            }
            uVar3 = CONCAT31(Var4,1);
        }
    }
    return uVar3;
}


/* fcn.00002f26 @ 0x2f26 */

uint fcn.00002f26(int64_t *param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int64_t iVar4;
    
    iVar4 = fcn.0000303d(0xf1000,0);
    *param_1 = iVar4;
    if ((iVar4 == -0x1000) || (iVar4 == 0)) {
        uVar3 = 0;
    }
    else {
        uVar2 = fcn.000030be(0xf1004,0);
        if ((uVar2 & 2) == 0) {
            uVar1 = fcn.000030be(0xf1004,0);
            uVar2 = fcn.000026c7(0,0);
            *((uVar2 | 0xf1004) + 0xc0000000) = uVar1 | 2;
            fcn.000030be(0xf1084,0);
            fcn.000030dc(0xf1084,0);
            fcn.000030be(0xf1084,0);
            fcn.00002e99(*param_1,*(param_1 + 4));
        }
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.000030fe @ 0x30fe */

uint fcn.000030fe(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000026c7(0,param_2 & 1);
    return *((uVar1 | param_1) + 0xc0000000);
}


/* fcn.0000270b @ 0x270b */

//WARNING: Removing unreachable block (ram,0x00002724)

int64_t __cdecl fcn.0000270b(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


