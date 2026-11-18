// decompiled by r2ghidra: 2065_TrEEPei.te
// functions: 88

/* fcn.00001c32 @ 0x1c32 */

int __fastcall fcn.00001c32(uint param_1,int *param_2)

{
    char cVar1;
    uint8_t uVar2;
    int8_t iVar3;
    int iVar4;
    uint32_t var_28h;
    int8_t var_23h;
    uint32_t var_22h;
    uint32_t var_12h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    var_1h = 0;
    iVar4 = (**(*param_2 + 0x20))(param_2,0xa620,0,0,&var_ch);
    if (iVar4 < 0) {
        return iVar4;
    }
    iVar4 = (**(var_ch + 4))(param_2,&var_28h);
    if (iVar4 < 0) {
        return iVar4;
    }
    if ((var_22h == '\0') || (cVar1 = fcn.00009ad9(), cVar1 != '\0')) {
        return 0;
    }
    if (var_28h == '\0') {
        iVar4 = fcn.00001b80();
        return iVar4;
    }
    uVar2 = fcn.00009f50();
    var_12h._0_1_ = ~uVar2 & 1;
    if (var_12h == 0) {
        cVar1 = fcn.00009f66();
        if (cVar1 == '\x02') {
            cVar1 = fcn.00009f3c();
            if ((cVar1 == '\0') || (iVar4 = fcn.000006dc(), -1 < iVar4)) {
code_r0x00001ce4:
                iVar4 = (**(*param_2 + 0x18))(param_2,0xa6cc);
                fcn.00009abe();
            }
            else {
                var_1h = 1;
                var_12h._0_1_ = 1;
            }
        }
        else {
            cVar1 = fcn.00009f66();
            if (cVar1 == '\x01') goto code_r0x00001ce4;
        }
    }
    if (var_12h == 1) {
        if ((*0xfed40000 == -1) || (*0xfed40000 == '\0')) {
            iVar4 = -0x7ffffff2;
        }
        else {
            cVar1 = fcn.00009f3c();
            if ((cVar1 != '\0') && (iVar4 = fcn.000006dc(), iVar4 < 0)) {
                iVar3 = 1;
                goto code_r0x00001d5d;
            }
            iVar4 = (**(*param_2 + 0x18))(param_2,0xa6d8);
            fcn.00009abe();
        }
    }
    iVar3 = var_1h;
code_r0x00001d5d:
    if ((iVar3 == 0) && (-1 < iVar4)) {
        iVar4 = (**(*param_2 + 0x18))(param_2,0xa6f8);
        if (-1 < iVar4) {
            (**(*param_2 + 0x24))(param_2,0xa6c0);
        }
        iVar4 = (**(*param_2 + 0x34))(param_2,4,0x1040,&var_8h);
        if (-1 < iVar4) {
            *(var_8h + 8) = *0xa650;
            *(var_8h + 0xc) = *0xa654;
            *(var_8h + 0x10) = *0xa658;
            *(var_8h + 0x14) = *0xa65c;
            (**(*param_2 + 0x54))(var_8h + 0x18,0x28,0);
            *(var_8h + 0x18) = 0x1000;
            *(var_8h + 0x1c) = 0;
            *(var_8h + 0x20) = 0;
            *(var_8h + 0x3c) = 0;
            *(var_8h + 0x24) = var_23h;
            if (var_23h == 1) {
                fcn.00009abe();
            }
            if (var_23h == 2) {
                fcn.00009abe();
            }
            *(var_8h + 0x34) = 0;
            *(var_8h + 0x38) = stack0xffffffeb;
            *(var_8h + 0x30) = var_8h + 0x40;
            *(var_8h + 0x28) = var_8h + 0x40;
            *(var_8h + 0x2c) = *(var_8h + 0x34);
            (**(*param_2 + 0x18))(param_2,0xa6e4);
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* entry0 @ 0x204 */

int entry0(uint param_1,int *param_2)

{
    char cVar1;
    uint8_t uVar2;
    int8_t iVar3;
    int iVar4;
    int32_t var_28h;
    int8_t var_23h;
    int8_t var_22h;
    int8_t var_12h;
    int32_t var_11h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    var_1h = 0;
    iVar4 = (**(*param_2 + 0x20))(param_2,0xa620,0,0,&var_ch);
    if (iVar4 < 0) {
        return iVar4;
    }
    iVar4 = (**(var_ch + 4))(param_2,&var_28h);
    if (iVar4 < 0) {
        return iVar4;
    }
    if ((var_22h == 0) || (cVar1 = fcn.00009ad9(), cVar1 != '\0')) {
        return 0;
    }
    if (var_28h == '\0') {
        iVar4 = fcn.00001b80();
        return iVar4;
    }
    uVar2 = fcn.00009f50();
    var_12h = ~uVar2 & 1;
    if (var_12h == 0) {
        cVar1 = fcn.00009f66();
        if (cVar1 == '\x02') {
            cVar1 = fcn.00009f3c();
            if ((cVar1 == '\0') || (iVar4 = fcn.000006dc(), -1 < iVar4)) {
code_r0x00001ce4:
                iVar4 = (**(*param_2 + 0x18))(param_2,0xa6cc);
                fcn.00009abe();
            }
            else {
                var_1h = 1;
                var_12h = 1;
            }
        }
        else {
            cVar1 = fcn.00009f66();
            if (cVar1 == '\x01') goto code_r0x00001ce4;
        }
    }
    if (var_12h == 1) {
        if ((*0xfed40000 == -1) || (*0xfed40000 == '\0')) {
            iVar4 = -0x7ffffff2;
        }
        else {
            cVar1 = fcn.00009f3c();
            if ((cVar1 != '\0') && (iVar4 = fcn.000006dc(), iVar4 < 0)) {
                iVar3 = 1;
                goto code_r0x00001d5d;
            }
            iVar4 = (**(*param_2 + 0x18))(param_2,0xa6d8);
            fcn.00009abe();
        }
    }
    iVar3 = var_1h;
code_r0x00001d5d:
    if ((iVar3 == 0) && (-1 < iVar4)) {
        iVar4 = (**(*param_2 + 0x18))(param_2,0xa6f8);
        if (-1 < iVar4) {
            (**(*param_2 + 0x24))(param_2,0xa6c0);
        }
        iVar4 = (**(*param_2 + 0x34))(param_2,4,0x1040,&var_8h);
        if (-1 < iVar4) {
            *(var_8h + 8) = *0xa650;
            *(var_8h + 0xc) = *0xa654;
            *(var_8h + 0x10) = *0xa658;
            *(var_8h + 0x14) = *0xa65c;
            (**(*param_2 + 0x54))(var_8h + 0x18,0x28,0);
            *(var_8h + 0x18) = 0x1000;
            *(var_8h + 0x1c) = 0;
            *(var_8h + 0x20) = 0;
            *(var_8h + 0x3c) = 0;
            *(var_8h + 0x24) = var_23h;
            if (var_23h == 1) {
                fcn.00009abe();
            }
            if (var_23h == 2) {
                fcn.00009abe();
            }
            *(var_8h + 0x34) = 0;
            *(var_8h + 0x38) = var_11h;
            *(var_8h + 0x30) = var_8h + 0x40;
            *(var_8h + 0x28) = var_8h + 0x40;
            *(var_8h + 0x2c) = *(var_8h + 0x34);
            (**(*param_2 + 0x18))(param_2,0xa6e4);
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.00009c99 @ 0x9c99 */

void fcn.00009c99(void)

{
    int iVar1;
    
    iVar1 = 5;
    do {
        fcn.00001f49();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00001f49 @ 0x1f49 */

uint __fastcall fcn.00001f49(uint param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.00001f00();
    return param_1;
}


/* fcn.00001f00 @ 0x1f00 */

void __fastcall fcn.00001f00(uint32_t param_1)

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


/* fcn.00009cb0 @ 0x9cb0 */

uint8_t __fastcall fcn.00009cb0(uint8_t *param_1,uint8_t param_2)

{
    int iVar1;
    
    iVar1 = 30000;
    do {
        fcn.00009c99();
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
            return 0;
        }
    } while (-1 < *param_1);
    return *param_1 & param_2;
}


/* fcn.00001584 @ 0x1584 */

void __fastcall fcn.00001584(uint param_1)

{
    int iVar1;
    int32_t *piVar2;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    piVar2 = &var_8h;
    iVar1 = (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),piVar2);
    if (-1 < iVar1) {
        fcn.00009a2a(param_1,piVar2);
    }
    return;
}


/* fcn.00009a2a @ 0x9a2a */

int __thiscall fcn.00009a2a(int *param_1,int *param_2)

{
    int iVar1;
    int16_t *piVar2;
    int iVar3;
    int16_t iVar4;
    int16_t *piVar5;
    
    if (param_2 == NULL) {
        iVar1 = -0x7ffffffe;
    }
    else {
        iVar1 = -0x7ffffff2;
        do {
            piVar5 = *param_1;
            if (*piVar5 == -1) {
                return -0x7ffffff2;
            }
            if (piVar5 != NULL) {
                iVar4 = *piVar5;
                piVar2 = piVar5;
                while ((iVar4 != -1 && (iVar4 != 4))) {
                    piVar2 = piVar2 + piVar2[1];
                    iVar4 = *piVar2;
                }
                if (*piVar2 != -1) {
                    piVar5 = piVar2;
                }
            }
            if ((*piVar5 == 4) && (iVar3 = fcn.0000a32f(), iVar3 == 0)) {
                iVar1 = 0;
                *param_2 = piVar5 + 0xc;
            }
            *param_1 = piVar5[1] + piVar5;
        } while (iVar1 < 0);
    }
    return iVar1;
}


/* fcn.00009b44 @ 0x9b44 */

uint __cdecl fcn.00009b44(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_70h;
    int32_t var_14h;
    
    fcn.000031d4();
    fcn.000031ff(arg_8h);
    fcn.00003291();
    fcn.00009b0d(&var_14h,0x14);
    return 0;
}


/* fcn.000031d4 @ 0x31d4 */

void __fastcall fcn.000031d4(uint *param_1)

{
    param_1[6] = 0;
    param_1[5] = 0;
    *param_1 = 0x67452301;
    param_1[1] = 0xefcdab89;
    param_1[2] = 0x98badcfe;
    param_1[3] = 0x10325476;
    param_1[4] = 0xc3d2e1f0;
    return;
}


/* fcn.000031ff @ 0x31ff */

void __thiscall fcn.000031ff(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    
    uVar2 = *(param_1 + 0x14) >> 3 & 0x3f;
    uVar3 = *(param_1 + 0x14) + param_2 * 8;
    *(param_1 + 0x14) = uVar3;
    if (uVar3 < param_2 << 3) {
        *(param_1 + 0x18) = *(param_1 + 0x18) + 1;
    }
    *(param_1 + 0x18) = *(param_1 + 0x18) + (param_2 >> 0x1d);
    if (uVar2 + param_2 < 0x40) {
        iVar4 = 0;
    }
    else {
        iVar1 = -uVar2;
        iVar4 = iVar1 + 0x40;
        fcn.00001e5c(iVar4);
        fcn.00001f90();
        for (uVar3 = iVar1 + 0x7f; uVar3 < param_2; uVar3 = uVar3 + 0x40) {
            fcn.00001f90();
            iVar4 = iVar4 + 0x40;
        }
    }
    fcn.00001e5c(param_2 - iVar4);
    return;
}


/* fcn.00003291 @ 0x3291 */

void __fastcall fcn.00003291(int param_1,int param_2)

{
    uint32_t uVar1;
    int iStack_8;
    int iStack_4;
    
    uVar1 = 0;
    iStack_8 = param_1;
    iStack_4 = param_1;
    do {
        *(&iStack_8 + uVar1) = *((-(uVar1 < 4) & 4) + 0x14 + param_2) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    fcn.000031ff(1);
    while ((*(param_2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.000031ff(1);
    }
    fcn.000031ff(8);
    uVar1 = 0;
    do {
        *(uVar1 + param_1) = *(param_2 + (uVar1 & 0xfffffffc)) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
    fcn.00000108(param_2 + 0x1c,0x40,0);
    fcn.00000108(param_2,0x14,0);
    fcn.00000108(param_2 + 0x14,8,0);
    fcn.00000108(&iStack_8,8,0);
    return;
}


/* fcn.00009b0d @ 0x9b0d */

void __fastcall fcn.00009b0d(uint param_1,uchar *param_2,uchar *param_3,int param_4)

{
    int iVar1;
    
    if (param_3 < param_2) {
        param_2 = param_2 + param_4 + -1;
        param_3 = param_3 + param_4 + -1;
        if (param_4 != 0) {
            do {
                *param_2 = *param_3;
                param_2 = param_2 + -1;
                param_3 = param_3 + -1;
                param_4 = param_4 + -1;
            } while (param_4 != 0);
            return;
        }
    }
    else if (param_4 != 0) {
        iVar1 = param_3 - param_2;
        do {
            *param_2 = param_2[iVar1];
            param_2 = param_2 + 1;
            param_4 = param_4 + -1;
        } while (param_4 != 0);
    }
    return;
}


/* fcn.00009b7c @ 0x9b7c */

uint __cdecl fcn.00009b7c(int32_t arg_8h,int32_t arg_ch)

{
    uchar auStack_98 [148];
    
    fcn.00005b6b();
    fcn.00005bae(arg_8h);
    fcn.00005c5c();
    fcn.00009b0d(auStack_98,0x20);
    return 0;
}


/* fcn.00005b6b @ 0x5b6b */

void __fastcall fcn.00005b6b(uint *param_1)

{
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x6a09e667;
    param_1[3] = 0xbb67ae85;
    param_1[4] = 0x3c6ef372;
    param_1[5] = 0xa54ff53a;
    param_1[6] = 0x510e527f;
    param_1[7] = 0x9b05688c;
    param_1[8] = 0x1f83d9ab;
    param_1[9] = 0x5be0cd19;
    return;
}


/* fcn.00005bae @ 0x5bae */

uint __thiscall fcn.00005bae(uint32_t *param_1,uint32_t param_2)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    
    if (param_1[10] < 0x41) {
        while (param_2 != 0) {
            if ((param_1[10] == 0) && (0x3f < param_2)) {
                fcn.00001e5c(0x40);
                iVar2 = fcn.00003357();
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                uVar3 = *param_1;
                *param_1 = *param_1 + 0x200;
                param_1[1] = param_1[1] + (0xfffffdff < uVar3);
                param_2 = param_2 - 0x40;
            }
            else {
                uVar3 = 0x40 - param_1[10];
                if (param_2 < 0x40 - param_1[10]) {
                    uVar3 = param_2;
                }
                fcn.00001e5c(uVar3);
                param_1[10] = param_1[10] + uVar3;
                param_2 = param_2 - uVar3;
                if (param_1[10] == 0x40) {
                    iVar2 = fcn.00003357();
                    if (iVar2 < 0) {
                        return 0xffffffff;
                    }
                    uVar3 = *param_1;
                    *param_1 = *param_1 + 0x200;
                    param_1[1] = param_1[1] + (0xfffffdff < uVar3);
                    param_1[10] = 0;
                }
            }
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.00005c5c @ 0x5c5c */

uint __fastcall fcn.00005c5c(uint32_t *param_1,uchar *param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    uint uVar3;
    uint32_t uVar4;
    
    uVar4 = param_1[10];
    if (uVar4 < 0x40) {
        uVar1 = *param_1;
        *param_1 = *param_1 + uVar4 * 8;
        param_1[1] = param_1[1] + CARRY4(uVar1,uVar4 * 8);
        *(uVar4 + 0x2c + param_1) = 0x80;
        param_1[10] = param_1[10] + 1;
        uVar4 = param_1[10];
        if (0x38 < uVar4) {
            while (uVar4 < 0x40) {
                *(param_1 + uVar4 + 0x2c) = 0;
                param_1[10] = param_1[10] + 1;
                uVar4 = param_1[10];
            }
            fcn.00003357();
            param_1[10] = 0;
        }
        while (param_1[10] < 0x38) {
            *(param_1 + param_1[10] + 0x2c) = 0;
            param_1[10] = param_1[10] + 1;
        }
        *(param_1 + 0x19) = *(param_1 + 7);
        *(param_1 + 0x65) = *(param_1 + 6);
        uVar2 = fcn.0000a454();
        *(param_1 + 0x66) = uVar2;
        uVar2 = fcn.0000a454();
        *(param_1 + 0x67) = uVar2;
        *(param_1 + 0x1a) = *param_1 >> 0x18;
        *(param_1 + 0x69) = *param_1 >> 0x10;
        *(param_1 + 0x6a) = *param_1 >> 8;
        *(param_1 + 0x6b) = *param_1;
        fcn.00003357();
        *param_2 = *(param_1 + 0xb);
        param_2[1] = *(param_1 + 10);
        param_2[2] = *(param_1 + 9);
        param_2[3] = param_1[2];
        param_2[4] = *(param_1 + 0xf);
        param_2[5] = *(param_1 + 0xe);
        param_2[6] = *(param_1 + 0xd);
        param_2[7] = param_1[3];
        param_2[8] = *(param_1 + 0x13);
        param_2[9] = *(param_1 + 0x12);
        param_2[10] = *(param_1 + 0x11);
        param_2[0xb] = param_1[4];
        param_2[0xc] = *(param_1 + 0x17);
        param_2[0xd] = *(param_1 + 0x16);
        param_2[0xe] = *(param_1 + 0x15);
        param_2[0xf] = param_1[5];
        param_2[0x10] = *(param_1 + 0x1b);
        param_2[0x11] = *(param_1 + 0x1a);
        param_2[0x12] = *(param_1 + 0x19);
        param_2[0x13] = param_1[6];
        param_2[0x14] = *(param_1 + 0x1f);
        param_2[0x15] = *(param_1 + 0x1e);
        param_2[0x16] = *(param_1 + 0x1d);
        param_2[0x17] = param_1[7];
        param_2[0x18] = *(param_1 + 0x23);
        param_2[0x19] = *(param_1 + 0x22);
        param_2[0x1a] = *(param_1 + 0x21);
        param_2[0x1b] = param_1[8];
        param_2[0x1c] = *(param_1 + 0x27);
        param_2[0x1d] = *(param_1 + 0x26);
        param_2[0x1e] = *(param_1 + 0x25);
        param_2[0x1f] = param_1[9];
        uVar3 = 0;
    }
    else {
        uVar3 = 0xffffffff;
    }
    return uVar3;
}


/* fcn.00009bbe @ 0x9bbe */

uint __cdecl fcn.00009bbe(int32_t arg_8h)

{
    int32_t arg_8h_00;
    uchar auStack_108 [260];
    
    fcn.00005deb();
    fcn.00009864(arg_8h_00);
    fcn.00005e6e();
    fcn.00009b0d(auStack_108,0x30);
    return 0;
}


/* fcn.00005deb @ 0x5deb */

uint __fastcall fcn.00005deb(uint *param_1)

{
    if (param_1 == NULL) {
        return 0xffffffff;
    }
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xc1059ed8;
    param_1[3] = 0xcbbb9d5d;
    param_1[4] = 0x367cd507;
    param_1[5] = 0x629a292a;
    param_1[6] = 0x3070dd17;
    param_1[7] = 0x9159015a;
    param_1[8] = 0xf70e5939;
    param_1[9] = 0x152fecd8;
    param_1[10] = 0xffc00b31;
    param_1[0xb] = 0x67332667;
    param_1[0xc] = 0x68581511;
    param_1[0xd] = 0x8eb44a87;
    param_1[0xe] = 0x64f98fa7;
    param_1[0xf] = 0xdb0c2e0d;
    param_1[0x10] = 0xbefa4fa4;
    param_1[0x11] = 0x47b5481d;
    return 0;
}


/* fcn.00009864 @ 0x9864 */

int __cdecl fcn.00009864(int32_t arg_8h)

{
    int iVar1;
    uint32_t *in_ECX;
    int in_EDX;
    uint32_t uVar2;
    
    if (((in_ECX == NULL) || (in_EDX == 0)) || (0x80 < in_ECX[0x12])) {
        iVar1 = -1;
    }
    else {
        while (arg_8h != 0) {
            if ((in_ECX[0x12] == 0) && (0x7f < arg_8h)) {
                iVar1 = fcn.00008a62();
                if (iVar1 != 0) {
                    return iVar1;
                }
                uVar2 = *in_ECX;
                *in_ECX = *in_ECX + 0x400;
                in_ECX[1] = in_ECX[1] + (0xfffffbff < uVar2);
                arg_8h = arg_8h - 0x80;
            }
            else {
                uVar2 = 0x80 - in_ECX[0x12];
                if (arg_8h < 0x80 - in_ECX[0x12]) {
                    uVar2 = arg_8h;
                }
                fcn.00001e5c(uVar2);
                arg_8h = arg_8h - uVar2;
                in_ECX[0x12] = in_ECX[0x12] + uVar2;
                if (in_ECX[0x12] == 0x80) {
                    iVar1 = fcn.00008a62();
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    uVar2 = *in_ECX;
                    *in_ECX = *in_ECX + 0x400;
                    in_ECX[1] = in_ECX[1] + (0xfffffbff < uVar2);
                    in_ECX[0x12] = 0;
                }
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00005e6e @ 0x5e6e */

uint __fastcall fcn.00005e6e(int param_1,int32_t *param_2)

{
    uint uVar1;
    int32_t var_40h;
    
    if (((param_1 == 0) || (param_2 == NULL)) || (0x7f < *(param_1 + 0x48))) {
        uVar1 = 0xffffffff;
    }
    else {
        fcn.00009919();
        if (param_2 != &var_40h) {
            section..text(param_2,&var_40h,0x30);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00009c04 @ 0x9c04 */

uint __cdecl fcn.00009c04(int32_t arg_8h)

{
    int32_t arg_8h_00;
    uchar auStack_118 [276];
    
    fcn.00005deb();
    fcn.00009864(arg_8h_00);
    fcn.00005e6e();
    fcn.00009b0d(auStack_118,0x40);
    return 0;
}


/* fcn.00009c4a @ 0x9c4a */

uint __cdecl fcn.00009c4a(int32_t arg_8h)

{
    int32_t var_8ch;
    int32_t var_20h;
    
    fcn.00005eaf();
    fcn.00008821();
    fcn.000088dc();
    fcn.00009b0d(&var_20h,0x20);
    return 0;
}


/* fcn.00005eaf @ 0x5eaf */

uint __fastcall fcn.00005eaf(uint *param_1)

{
    fcn.00000108(param_1,0x6c,0);
    *param_1 = 0x7380166f;
    param_1[1] = 0x4914b2b9;
    param_1[2] = 0x172442d7;
    param_1[3] = 0xda8a0600;
    param_1[4] = 0xa96f30bc;
    param_1[5] = 0x163138aa;
    param_1[6] = 0xe38dee4d;
    param_1[7] = 0xb0fb0e4e;
    return 1;
}


/* fcn.00000108 @ 0x108 */

uchar * fcn.00000108(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00008821 @ 0x8821 */

uint __thiscall fcn.00008821(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    if (param_2 != 0) {
        uVar2 = *(param_1 + 0x20) + param_2 * 8;
        if (uVar2 < *(param_1 + 0x20)) {
            *(param_1 + 0x24) = *(param_1 + 0x24) + 1;
        }
        *(param_1 + 0x20) = uVar2;
        iVar1 = *(param_1 + 0x68);
        *(param_1 + 0x24) = *(param_1 + 0x24) + (param_2 >> 0x1d);
        if (iVar1 != 0) {
            if ((param_2 < 0x40) && (iVar1 + param_2 < 0x40)) {
                fcn.00001e5c(param_2);
                *(param_1 + 0x68) = *(param_1 + 0x68) + param_2;
                return 1;
            }
            fcn.00001e5c(0x40 - iVar1);
            fcn.00005efb(1);
            *(param_1 + 0x68) = 0;
            param_2 = param_2 - (0x40 - iVar1);
            fcn.00000108(param_1 + 0x28,0x40,0);
        }
        uVar2 = param_2 >> 6;
        if (uVar2 != 0) {
            fcn.00005efb(uVar2);
            param_2 = param_2 + uVar2 * -0x40;
        }
        if (param_2 != 0) {
            *(param_1 + 0x68) = param_2;
            fcn.00001e5c(param_2);
        }
    }
    return 1;
}


/* fcn.000088dc @ 0x88dc */

uint __fastcall fcn.000088dc(uchar *param_1,uint *param_2)

{
    int iVar1;
    uint uVar2;
    uchar *puVar3;
    
    iVar1 = param_2[0x1a];
    *(iVar1 + param_2 + 10) = 0x80;
    puVar3 = param_1;
    if (0x38 < iVar1 + 1U) {
        fcn.00001e79(param_1);
        fcn.00005efb(1);
    }
    fcn.00001e79(puVar3);
    *(param_2 + 0x18) = *(param_2 + 0x27);
    *(param_2 + 0x61) = *(param_2 + 0x26);
    *(param_2 + 0x62) = *(param_2 + 0x25);
    *(param_2 + 99) = *(param_2 + 9);
    *(param_2 + 0x19) = *(param_2 + 0x23);
    *(param_2 + 0x65) = *(param_2 + 0x22);
    *(param_2 + 0x66) = *(param_2 + 0x21);
    *(param_2 + 0x67) = *(param_2 + 8);
    fcn.00005efb(1);
    param_2[0x1a] = 0;
    fcn.00000108(param_2 + 10,0x40,0);
    uVar2 = *param_2;
    *param_1 = uVar2 >> 0x18;
    param_1[1] = uVar2 >> 0x10;
    param_1[2] = uVar2 >> 8;
    param_1[3] = uVar2;
    uVar2 = param_2[1];
    param_1[4] = uVar2 >> 0x18;
    param_1[5] = uVar2 >> 0x10;
    param_1[6] = uVar2 >> 8;
    param_1[7] = uVar2;
    uVar2 = param_2[2];
    param_1[8] = uVar2 >> 0x18;
    param_1[9] = uVar2 >> 0x10;
    param_1[10] = uVar2 >> 8;
    param_1[0xb] = uVar2;
    uVar2 = param_2[3];
    param_1[0xc] = uVar2 >> 0x18;
    param_1[0xd] = uVar2 >> 0x10;
    param_1[0xe] = uVar2 >> 8;
    param_1[0xf] = uVar2;
    uVar2 = param_2[4];
    param_1[0x10] = uVar2 >> 0x18;
    param_1[0x11] = uVar2 >> 0x10;
    param_1[0x12] = uVar2 >> 8;
    param_1[0x13] = uVar2;
    uVar2 = param_2[5];
    param_1[0x14] = uVar2 >> 0x18;
    param_1[0x15] = uVar2 >> 0x10;
    param_1[0x16] = uVar2 >> 8;
    param_1[0x17] = uVar2;
    uVar2 = param_2[6];
    param_1[0x18] = uVar2 >> 0x18;
    param_1[0x19] = uVar2 >> 0x10;
    param_1[0x1a] = uVar2 >> 8;
    param_1[0x1b] = uVar2;
    uVar2 = param_2[7];
    param_1[0x1c] = uVar2 >> 0x18;
    param_1[0x1d] = uVar2 >> 0x10;
    param_1[0x1e] = uVar2 >> 8;
    param_1[0x1f] = uVar2;
    return 1;
}


/* fcn.00001e79 @ 0x1e79 */

uint __fastcall fcn.00001e79(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000108(param_1,param_2,0);
    return uVar1;
}


/* fcn.00005efb @ 0x5efb */

void __fastcall fcn.00005efb(uint32_t *param_1,uint8_t *param_2,int param_3)

{
    uint8_t *puVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint8_t *puVar7;
    uint8_t *puVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    uint32_t uVar43;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    if (param_3 != 0) {
        uStack_20 = param_1[1];
        uStack_1c = param_1[2];
        uStack_24 = param_1[4];
        uStack_10 = param_1[5];
        uStack_18 = param_1[6];
        uStack_14 = param_1[3];
        uStack_c = param_1[7];
        do {
            param_3 = param_3 + -1;
            puVar1 = param_2 + 0x10;
            uVar40 = *param_2 << 0x18 | param_2[1] << 0x10 | param_2[2] << 8 | param_2[3];
            uVar14 = *param_1;
            uVar15 = param_2[4] << 0x18 | param_2[5] << 0x10 | param_2[6] << 8 | param_2[7];
            uVar16 = param_2[8] << 0x18 | param_2[9] << 0x10 | param_2[10] << 8 | param_2[0xb];
            puVar2 = param_2 + 0xc;
            uVar17 = *puVar2 << 0x18 | param_2[0xd] << 0x10 | param_2[0xe] << 8 | param_2[0xf];
            puVar3 = param_2 + 0x14;
            uVar35 = *puVar1 << 0x18 | param_2[0x11] << 0x10 | param_2[0x12] << 8 | param_2[0x13];
            uVar18 = *puVar3 << 0x18 | param_2[0x15] << 0x10 | param_2[0x16] << 8 | param_2[0x17];
            puVar4 = param_2 + 0x18;
            uVar19 = *puVar4 << 0x18 | param_2[0x19] << 0x10 | param_2[0x1a] << 8 | param_2[0x1b];
            puVar5 = param_2 + 0x1c;
            uVar20 = *puVar5 << 0x18 | param_2[0x1d] << 0x10 | param_2[0x1e] << 8 | param_2[0x1f];
            puVar6 = param_2 + 0x20;
            uVar21 = *puVar6 << 0x18 | param_2[0x21] << 0x10 | param_2[0x22] << 8 | param_2[0x23];
            puVar7 = param_2 + 0x24;
            uVar22 = *puVar7 << 0x18 | param_2[0x25] << 0x10 | param_2[0x26] << 8 | param_2[0x27];
            puVar8 = param_2 + 0x28;
            uVar23 = *puVar8 << 0x18 | param_2[0x29] << 0x10 | param_2[0x2a] << 8 | param_2[0x2b];
            puVar9 = param_2 + 0x2c;
            uVar24 = *puVar9 << 0x18 | param_2[0x2d] << 0x10 | param_2[0x2e] << 8 | param_2[0x2f];
            puVar10 = param_2 + 0x30;
            uVar25 = *puVar10 << 0x18 | param_2[0x31] << 0x10 | param_2[0x32] << 8 | param_2[0x33];
            puVar11 = param_2 + 0x34;
            uVar26 = *puVar11 << 0x18 | param_2[0x35] << 0x10;
            uVar27 = uVar26 | param_2[0x36] << 8 | param_2[0x37];
            puVar12 = param_2 + 0x38;
            uVar28 = *puVar12 << 0x18 | param_2[0x39] << 0x10;
            uVar32 = uVar14 << 0xc | uVar14 >> 0x14;
            uVar29 = uVar28 | param_2[0x3a] << 8 | param_2[0x3b];
            puVar13 = param_2 + 0x3c;
            uVar30 = *puVar13 << 0x18 | param_2[0x3d] << 0x10;
            uVar31 = uVar30 | param_2[0x3e] << 8 | param_2[0x3f];
            param_2 = param_2 + 0x40;
            uVar37 = uStack_24 + 0x79cc4519 + uVar32;
            uVar34 = uStack_10 >> 0xd | uStack_10 << 0x13;
            uVar38 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar37 = uVar27 << 0xf | uVar26 >> 0x11;
            uVar36 = (uVar35 ^ uVar40) + (uVar38 ^ uVar32) + uStack_14 + (uStack_1c ^ uStack_20 ^ uVar14);
            uVar32 = (uStack_24 ^ uStack_18 ^ uStack_10) + uStack_c + uVar38 + uVar40;
            uVar41 = uStack_20 << 9 | uStack_20 >> 0x17;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar26 = uVar37 ^ uVar20 ^ uVar40;
            uVar40 = uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar17 << 7 | *puVar2 >> 1) ^ uVar37 ^ uVar23 ^ uVar20;
            uVar26 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar37 = uVar26 + 0xf3988a32 + uVar32;
            uVar37 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar33 = (uVar18 ^ uVar15) + (uVar37 ^ uVar26) + uStack_1c + (uVar36 ^ uVar41 ^ uVar14);
            uVar28 = uVar29 << 0xf | uVar28 >> 0x11;
            uVar37 = (uStack_24 ^ uVar32 ^ uVar34) + uStack_18 + uVar37 + uVar15;
            uVar14 = uVar14 << 9 | uVar14 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar38 = uStack_24 >> 0xd | uStack_24 << 0x13;
            uVar26 = uVar28 ^ uVar21 ^ uVar15;
            uVar15 = uVar15 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar35 << 7 | *puVar1 >> 1) ^ uVar28 ^ uVar24 ^ uVar21;
            uVar28 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar39 = uVar37 + 0xe7311465 + uVar28;
            uVar26 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar36 = (uVar19 ^ uVar16) + (uVar39 ^ uVar28) + uVar41 + (uVar33 ^ uVar36 ^ uVar14);
            uVar34 = (uVar32 ^ uVar37 ^ uVar38) + uVar39 + uVar16 + uVar34;
            uVar39 = uVar31 << 0xf | uVar30 >> 0x11;
            uVar30 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar28 = uVar39 ^ uVar22 ^ uVar16;
            uVar16 = uVar16 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar18 << 7 | *puVar3 >> 1) ^ uVar39 ^ uVar25 ^ uVar22;
            uVar32 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar28 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar32 + 0xce6228cb + uVar34;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar20 ^ uVar17) + (uVar39 ^ uVar32) + uVar14 + (uVar36 ^ uVar33 ^ uVar26);
            uVar38 = (uVar30 ^ uVar37 ^ uVar34) + uVar39 + uVar17 + uVar38;
            uVar39 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar32 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar14 = uVar39 ^ uVar23 ^ uVar17;
            uVar17 = uVar17 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar19 << 7 | *puVar4 >> 1) ^ uVar39 ^ uVar27 ^ uVar23;
            uVar37 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar39 = uVar37 + 0x9cc45197 + uVar38;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar36 = (uVar21 ^ uVar35) + (uVar39 ^ uVar37) + uVar26 + (uVar33 ^ uVar36 ^ uVar28);
            uVar37 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar30 = (uVar32 ^ uVar34 ^ uVar38) + uVar39 + uVar35 + uVar30;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar34 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar26 = uVar34 ^ uVar24 ^ uVar35;
            uVar35 = uVar35 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar20 << 7 | *puVar5 >> 1) ^ uVar34 ^ uVar29 ^ uVar24;
            uVar34 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar26 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar34 + 0x3988a32f + uVar30;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar22 ^ uVar18) + (uVar39 ^ uVar34) + uVar28 + (uVar36 ^ uVar33 ^ uVar14);
            uVar32 = (uVar30 ^ uVar37 ^ uVar38) + uVar39 + uVar18 + uVar32;
            uVar39 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar34 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar28 = uVar39 ^ uVar25 ^ uVar18;
            uVar18 = uVar18 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar21 << 7 | *puVar6 >> 1) ^ uVar39 ^ uVar31 ^ uVar25;
            uVar28 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar38 = uVar28 + 0x7311465e + uVar32;
            uVar38 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar39 = (uVar23 ^ uVar19) + (uVar38 ^ uVar28) + uVar14 + (uVar33 ^ uVar36 ^ uVar26);
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar37 = (uVar30 ^ uVar32 ^ uVar34) + uVar38 + uVar19 + uVar37;
            uVar36 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar38 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar30 = uVar17 << 0xf | uVar17 >> 0x11;
            uVar28 = uVar30 ^ uVar27 ^ uVar19;
            uVar19 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar22 << 7 | *puVar7 >> 1) ^
                     uVar30 ^ uVar27 ^ uVar19 ^ uVar40;
            uVar28 = uVar37 + 0xe6228cbc + uVar36;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar36 = (uVar24 ^ uVar20) + (uVar28 ^ uVar36) + uVar26 + (uVar39 ^ uVar33 ^ uVar14);
            uVar30 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar34 = (uVar38 ^ uVar32 ^ uVar37) + uVar28 + uVar20 + uVar34;
            uVar41 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
            uVar26 = uVar28 ^ uVar29 ^ uVar20;
            uVar32 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar33 = uVar34 + 0xcc451979 + uVar32;
            uVar20 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar23 << 7 | *puVar8 >> 1) ^
                     uVar28 ^ uVar29 ^ uVar20 ^ uVar15;
            uVar28 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar33 = (uVar25 ^ uVar21) + (uVar28 ^ uVar32) + uVar14 + (uVar36 ^ uVar39 ^ uVar41);
            uVar32 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar38 = (uVar30 ^ uVar37 ^ uVar34) + uVar28 + uVar21 + uVar38;
            uVar37 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar28 = uVar18 << 0xf | uVar18 >> 0x11;
            uVar14 = uVar28 ^ uVar31 ^ uVar21;
            uVar21 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar24 << 7 | *puVar9 >> 1) ^
                     uVar28 ^ uVar31 ^ uVar21 ^ uVar16;
            uVar28 = uVar38 + 0x988a32f3 + uVar32;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar36 = (uVar27 ^ uVar22) + (uVar28 ^ uVar32) + uVar41 + (uVar33 ^ uVar36 ^ uVar26);
            uVar30 = (uVar38 ^ uVar37 ^ uVar34) + uVar28 + uVar22 + uVar30;
            uVar34 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar39 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar32 = uVar19 << 0xf | uVar19 >> 0x11;
            uVar28 = uVar32 ^ uVar22 ^ uVar40;
            uVar22 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar25 << 7 | *puVar10 >> 1) ^
                     uVar32 ^ uVar22 ^ uVar17 ^ uVar40;
            uVar28 = uVar30 + 0x311465e7 + uVar39;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar39 = (uVar29 ^ uVar23) + (uVar28 ^ uVar39) + uVar26 + (uVar36 ^ uVar33 ^ uVar14);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar37 = (uVar38 ^ uVar30 ^ uVar34) + uVar28 + uVar23 + uVar37;
            uVar32 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar42 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar28 = uVar20 << 0xf | uVar20 >> 0x11;
            uVar26 = uVar28 ^ uVar23 ^ uVar15;
            uVar38 = uVar37 + 0x6228cbce + uVar41;
            uVar23 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar27 << 7 | *puVar11 >> 1) ^
                     uVar28 ^ uVar23 ^ uVar35 ^ uVar15;
            uVar28 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar26 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar36 = (uVar31 ^ uVar24) + (uVar28 ^ uVar41) + uVar14 + (uVar39 ^ uVar36 ^ uVar42);
            uVar34 = (uVar32 ^ uVar30 ^ uVar37) + uVar28 + uVar24 + uVar34;
            uVar33 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar38 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar28 = uVar21 << 0xf | uVar21 >> 0x11;
            uVar14 = uVar28 ^ uVar24 ^ uVar16;
            uVar24 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar29 << 7 | *puVar12 >> 1) ^
                     uVar28 ^ uVar24 ^ uVar18 ^ uVar16;
            uVar14 = uVar34 + 0xc451979c + uVar33;
            uVar28 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar39 = (uVar25 ^ uVar40) + (uVar28 ^ uVar33) + uVar42 + (uVar36 ^ uVar39 ^ uVar26);
            uVar33 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar32 = (uVar38 ^ uVar37 ^ uVar34) + uVar28 + uVar25 + uVar32;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar30 = uVar22 << 0xf | uVar22 >> 0x11;
            uVar28 = uVar30 ^ uVar25 ^ uVar17;
            uVar37 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar25 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar31 << 7 | *puVar13 >> 1) ^
                     uVar30 ^ uVar25 ^ uVar19 ^ uVar17;
            uVar28 = uVar32 + 0x88a32f39 + uVar37;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar30 = (uVar27 ^ uVar15) + (uVar28 ^ uVar37) + uVar26 + (uVar39 ^ uVar36 ^ uVar14);
            uVar41 = uVar30 * 0x1000 | uVar30 >> 0x14;
            uVar38 = (uVar32 ^ uVar33 ^ uVar34) + uVar28 + uVar27 + uVar38;
            uVar37 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar42 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar28 = uVar23 << 0xf | uVar23 >> 0x11;
            uVar26 = uVar28 ^ uVar27 ^ uVar35;
            uVar34 = uVar38 + 0x11465e73 + uVar41;
            uVar36 = uVar34 * 0x80 | uVar34 >> 0x19;
            uVar27 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar40 << 7 | uVar40 >> 0x19)
                     ^ uVar28 ^ uVar27 ^ uVar20 ^ uVar35;
            uVar43 = (uVar36 ^ uVar41) + (uVar29 ^ uVar16) + uVar14 + (uVar30 ^ uVar39 ^ uVar42);
            uVar34 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar33 = (uVar32 ^ uVar38 ^ uVar37) + uVar36 + uVar29 + uVar33;
            uVar28 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar26 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar14 = uVar26 ^ uVar29 ^ uVar18;
            uVar29 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar15 << 7 | uVar15 >> 0x19)
                     ^ uVar26 ^ uVar29 ^ uVar21 ^ uVar18;
            uVar14 = uVar43 * 0x1000 | uVar43 >> 0x14;
            uVar26 = uVar33 + 0x228cbce6 + uVar14;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar39 = (uVar26 ^ uVar14) + (uVar31 ^ uVar17) + uVar42 + (uVar43 ^ uVar30 ^ uVar28);
            uVar32 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar37 = (uVar34 ^ uVar38 ^ uVar33) + uVar26 + uVar31 + uVar37;
            uVar41 = uVar30 * 0x200 | uVar30 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar26 = uVar25 << 0xf | uVar25 >> 0x11;
            uVar14 = uVar26 ^ uVar31 ^ uVar19;
            uVar30 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar16 << 7 | uVar16 >> 0x19)
                     ^ uVar26 ^ uVar31 ^ uVar22 ^ uVar19;
            uVar26 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar14 = uVar37 + 0x9d8a7a87 + uVar26;
            uVar31 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar43 * 0x200 | uVar43 >> 0x17;
            uVar36 = (uVar35 ^ uVar40) + (uVar31 ^ uVar26) + uVar28 + ((uVar39 | uVar43) & uVar41 | uVar39 & uVar43);
            uVar28 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar34 = ((uVar32 ^ uVar33) & uVar37 ^ uVar32) + uVar31 + uVar40 + uVar34;
            uVar38 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar26 = uVar28 ^ uVar20 ^ uVar40;
            uVar40 = uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar17 << 7 | uVar17 >> 0x19) ^ uVar28 ^ uVar23 ^ uVar20;
            uVar26 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar28 = uVar26 + 0x3b14f50f + uVar34;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar33 = (uVar18 ^ uVar15) + (uVar28 ^ uVar26) + uVar41 + ((uVar36 | uVar39) & uVar14 | uVar36 & uVar39);
            uVar31 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar32 = ((uVar38 ^ uVar37) & uVar34 ^ uVar38) + uVar28 + uVar15 + uVar32;
            uVar37 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar28 = uVar37 ^ uVar21 ^ uVar15;
            uVar15 = uVar15 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar35 << 7 | uVar35 >> 0x19) ^ uVar37 ^ uVar24 ^ uVar21;
            uVar37 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar28 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar39 = uVar37 + 0x7629ea1e + uVar32;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar36 = (uVar19 ^ uVar16) + (uVar39 ^ uVar37) + uVar14 + ((uVar33 | uVar36) & uVar26 | uVar33 & uVar36);
            uVar38 = ((uVar34 ^ uVar31) & uVar32 ^ uVar31) + uVar39 + uVar16 + uVar38;
            uVar39 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar37 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar14 = uVar39 ^ uVar22 ^ uVar16;
            uVar16 = uVar16 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar18 << 7 | uVar18 >> 0x19) ^ uVar39 ^ uVar25 ^ uVar22;
            uVar34 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar14 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar34 + 0xec53d43c + uVar38;
            uVar41 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar20 ^ uVar17) + (uVar41 ^ uVar34) + uVar26 + ((uVar36 | uVar33) & uVar28 | uVar36 & uVar33);
            uVar39 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar34 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar31 = ((uVar37 ^ uVar32) & uVar38 ^ uVar37) + uVar41 + uVar17 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar26 = uVar39 ^ uVar23 ^ uVar17;
            uVar17 = uVar17 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar19 << 7 | uVar19 >> 0x19) ^ uVar39 ^ uVar27 ^ uVar23;
            uVar26 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar32 = uVar31 + 0xd8a7a879 + uVar26;
            uVar32 = uVar32 * 0x80 | uVar32 >> 0x19;
            uVar28 = (uVar21 ^ uVar35) + (uVar32 ^ uVar26) + uVar28 + ((uVar33 | uVar36) & uVar14 | uVar33 & uVar36);
            uVar37 = ((uVar34 ^ uVar38) & uVar31 ^ uVar34) + uVar32 + uVar35 + uVar37;
            uVar41 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar32 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar38 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar26 = uVar38 ^ uVar24 ^ uVar35;
            uVar35 = uVar35 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar20 << 7 | uVar20 >> 0x19) ^ uVar38 ^ uVar29 ^ uVar24;
            uVar38 = uVar28 * 0x1000 | uVar28 >> 0x14;
            uVar36 = uVar37 + 0xb14f50f3 + uVar38;
            uVar26 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar36 * 0x80 | uVar36 >> 0x19;
            uVar36 = (uVar22 ^ uVar18) + (uVar39 ^ uVar38) + uVar14 + ((uVar28 | uVar33) & uVar41 | uVar28 & uVar33);
            uVar33 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar34 = ((uVar32 ^ uVar31) & uVar37 ^ uVar32) + uVar39 + uVar18 + uVar34;
            uVar38 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar14 = uVar33 ^ uVar25 ^ uVar18;
            uVar18 = uVar18 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar21 << 7 | uVar21 >> 0x19) ^ uVar33 ^ uVar30 ^ uVar25;
            uVar31 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar14 = uVar31 + 0x629ea1e7 + uVar34;
            uVar42 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar28 * 0x200 | uVar28 >> 0x17;
            uVar39 = (uVar23 ^ uVar19) + (uVar42 ^ uVar31) + uVar41 + ((uVar36 | uVar28) & uVar26 | uVar36 & uVar28);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar33 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar32 = ((uVar37 ^ uVar38) & uVar34 ^ uVar38) + uVar42 + uVar19 + uVar32;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar31 = uVar17 << 0xf | uVar17 >> 0x11;
            uVar28 = uVar31 ^ uVar27 ^ uVar19;
            uVar19 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar22 << 7 | uVar22 >> 0x19)
                     ^ uVar31 ^ uVar27 ^ uVar19 ^ uVar40;
            uVar28 = uVar32 + 0xc53d43ce + uVar41;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar41 = (uVar24 ^ uVar20) + (uVar28 ^ uVar41) + uVar26 + ((uVar39 | uVar36) & uVar14 | uVar39 & uVar36);
            uVar31 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar38 = ((uVar33 ^ uVar34) & uVar32 ^ uVar33) + uVar28 + uVar20 + uVar38;
            uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar37 = uVar41 * 0x1000 | uVar41 >> 0x14;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
            uVar26 = uVar28 ^ uVar29 ^ uVar20;
            uVar34 = uVar38 + 0x8a7a879d + uVar37;
            uVar42 = uVar34 * 0x80 | uVar34 >> 0x19;
            uVar20 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar23 << 7 | uVar23 >> 0x19)
                     ^ uVar28 ^ uVar29 ^ uVar20 ^ uVar15;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar36 = (uVar25 ^ uVar21) + (uVar42 ^ uVar37) + uVar14 + ((uVar41 | uVar39) & uVar43 | uVar41 & uVar39);
            uVar34 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar37 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar33 = ((uVar31 ^ uVar32) & uVar38 ^ uVar31) + uVar42 + uVar21 + uVar33;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar28 = uVar18 << 0xf | uVar18 >> 0x11;
            uVar14 = uVar28 ^ uVar30 ^ uVar21;
            uVar21 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar28 ^ uVar30 ^ uVar21 ^ uVar16;
            uVar14 = uVar33 + 0x14f50f3b + uVar34;
            uVar28 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar41 * 0x200 | uVar41 >> 0x17;
            uVar39 = (uVar27 ^ uVar22) + (uVar28 ^ uVar34) + uVar43 + ((uVar36 | uVar41) & uVar26 | uVar36 & uVar41);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar34 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar31 = ((uVar37 ^ uVar38) & uVar33 ^ uVar37) + uVar28 + uVar22 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar32 = uVar19 << 0xf | uVar19 >> 0x11;
            uVar28 = uVar32 ^ uVar22 ^ uVar40;
            uVar38 = uVar31 + 0x29ea1e76 + uVar41;
            uVar22 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar25 << 7 | uVar25 >> 0x19)
                     ^ uVar32 ^ uVar22 ^ uVar17 ^ uVar40;
            uVar32 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar28 = (uVar29 ^ uVar23) + (uVar41 ^ uVar32) + uVar26 + ((uVar39 | uVar36) & uVar14 | uVar39 & uVar36);
            uVar38 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar37 = ((uVar33 ^ uVar34) & uVar31 ^ uVar34) + uVar32 + uVar23 + uVar37;
            uVar42 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar32 = uVar20 << 0xf | uVar20 >> 0x11;
            uVar26 = uVar32 ^ uVar23 ^ uVar15;
            uVar23 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar32 ^ uVar23 ^ uVar35 ^ uVar15;
            uVar32 = uVar28 * 0x1000 | uVar28 >> 0x14;
            uVar33 = uVar37 + 0x53d43cec + uVar32;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar41 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar36 = (uVar30 ^ uVar24) + (uVar41 ^ uVar32) + uVar14 + ((uVar39 | uVar28) & uVar42 | uVar39 & uVar28);
            uVar33 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar32 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar34 = ((uVar38 ^ uVar31) & uVar37 ^ uVar38) + uVar41 + uVar24 + uVar34;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar31 = uVar21 << 0xf | uVar21 >> 0x11;
            uVar14 = uVar31 ^ uVar24 ^ uVar16;
            uVar24 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar31 ^ uVar24 ^ uVar18 ^ uVar16;
            uVar14 = uVar34 + 0xa7a879d8 + uVar33;
            uVar31 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar28 * 0x200 | uVar28 >> 0x17;
            uVar39 = (uVar25 ^ uVar40) + (uVar31 ^ uVar33) + uVar42 + ((uVar36 | uVar28) & uVar26 | uVar36 & uVar28);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar33 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = ((uVar32 ^ uVar37) & uVar34 ^ uVar32) + uVar31 + uVar25 + uVar38;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar31 = uVar22 << 0xf | uVar22 >> 0x11;
            uVar28 = uVar31 ^ uVar25 ^ uVar17;
            uVar37 = uVar38 + 0x4f50f3b1 + uVar41;
            uVar25 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar30 << 7 | uVar30 >> 0x19)
                     ^ uVar31 ^ uVar25 ^ uVar19 ^ uVar17;
            uVar28 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar31 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar36 = (uVar27 ^ uVar15) + (uVar31 ^ uVar41) + uVar26 + ((uVar39 | uVar36) & uVar14 | uVar39 & uVar36);
            uVar32 = ((uVar33 ^ uVar34) & uVar38 ^ uVar33) + uVar31 + uVar27 + uVar32;
            uVar34 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar37 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar31 = uVar23 << 0xf | uVar23 >> 0x11;
            uVar26 = uVar31 ^ uVar27 ^ uVar35;
            uVar41 = uVar32 + 0x9ea1e762 + uVar37;
            uVar27 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar40 << 7 | uVar40 >> 0x19)
                     ^ uVar31 ^ uVar27 ^ uVar20 ^ uVar35;
            uVar42 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar39 = (uVar29 ^ uVar16) + (uVar42 ^ uVar37) + uVar14 + ((uVar36 | uVar39) & uVar28 | uVar36 & uVar39);
            uVar31 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar33 = ((uVar38 ^ uVar34) & uVar32 ^ uVar34) + uVar42 + uVar29 + uVar33;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar37 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar14 = uVar37 ^ uVar29 ^ uVar18;
            uVar38 = uVar33 + 0x3d43cec5 + uVar41;
            uVar29 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar15 << 7 | uVar15 >> 0x19)
                     ^ uVar37 ^ uVar29 ^ uVar21 ^ uVar18;
            uVar42 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar30 ^ uVar17) + (uVar42 ^ uVar41) + uVar28 + ((uVar39 | uVar36) & uVar26 | uVar39 & uVar36);
            uVar36 = uVar38 * 0x1000 | uVar38 >> 0x14;
            uVar37 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar34 = ((uVar31 ^ uVar32) & uVar33 ^ uVar31) + uVar42 + uVar30 + uVar34;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar32 = uVar25 << 0xf | uVar25 >> 0x11;
            uVar28 = uVar32 ^ uVar30 ^ uVar19;
            uVar41 = uVar34 + 0x7a879d8a + uVar36;
            uVar30 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar16 << 7 | uVar16 >> 0x19)
                     ^ uVar32 ^ uVar30 ^ uVar22 ^ uVar19;
            uVar28 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar41 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar36 = (uVar35 ^ uVar40) + (uVar41 ^ uVar36) + uVar26 + ((uVar38 | uVar39) & uVar14 | uVar38 & uVar39);
            uVar32 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar31 = ((uVar37 ^ uVar33) & uVar34 ^ uVar37) + uVar41 + uVar40 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar33 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar26 = uVar33 ^ uVar20 ^ uVar40;
            uVar40 = uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar17 << 7 | uVar17 >> 0x19) ^ uVar33 ^ uVar23 ^ uVar20;
            uVar33 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar26 = uVar38 * 0x200 | uVar38 >> 0x17;
            uVar39 = uVar33 + 0xf50f3b14 + uVar31;
            uVar41 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar18 ^ uVar15) + (uVar41 ^ uVar33) + uVar14 + ((uVar36 | uVar38) & uVar28 | uVar36 & uVar38);
            uVar39 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar38 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar37 = ((uVar32 ^ uVar34) & uVar31 ^ uVar32) + uVar41 + uVar15 + uVar37;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar14 = uVar39 ^ uVar21 ^ uVar15;
            uVar15 = uVar15 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar35 << 7 | uVar35 >> 0x19) ^ uVar39 ^ uVar24 ^ uVar21;
            uVar39 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar14 = uVar39 + 0xea1e7629 + uVar37;
            uVar41 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar34 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar36 = (uVar19 ^ uVar16) + (uVar41 ^ uVar39) + uVar28 + ((uVar33 | uVar36) & uVar26 | uVar33 & uVar36);
            uVar32 = ((uVar31 ^ uVar38) & uVar37 ^ uVar38) + uVar41 + uVar16 + uVar32;
            uVar31 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar28 = uVar31 ^ uVar22 ^ uVar16;
            uVar16 = uVar16 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar18 << 7 | uVar18 >> 0x19) ^ uVar31 ^ uVar25 ^ uVar22;
            uVar31 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar28 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar31 + 0xd43cec53 + uVar32;
            uVar41 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar20 ^ uVar17) + (uVar41 ^ uVar31) + uVar26 + ((uVar36 | uVar33) & uVar14 | uVar36 & uVar33);
            uVar39 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar31 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = ((uVar34 ^ uVar37) & uVar32 ^ uVar34) + uVar41 + uVar17 + uVar38;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar26 = uVar39 ^ uVar23 ^ uVar17;
            uVar17 = uVar17 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar19 << 7 | uVar19 >> 0x19) ^ uVar39 ^ uVar27 ^ uVar23;
            uVar26 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar37 = uVar38 + 0xa879d8a7 + uVar26;
            uVar39 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar37 = (uVar21 ^ uVar35) + (uVar39 ^ uVar26) + uVar14 + ((uVar33 | uVar36) & uVar28 | uVar33 & uVar36);
            uVar26 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar34 = ((uVar31 ^ uVar32) & uVar38 ^ uVar31) + uVar39 + uVar35 + uVar34;
            uVar32 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar39 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar14 = uVar26 ^ uVar24 ^ uVar35;
            uVar35 = uVar35 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar20 << 7 | uVar20 >> 0x19) ^ uVar26 ^ uVar29 ^ uVar24;
            uVar14 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar26 = uVar34 + 0x50f3b14f + uVar14;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar36 = (uVar22 ^ uVar18) + (uVar26 ^ uVar14) + uVar28 + ((uVar37 | uVar33) & uVar39 | uVar37 & uVar33);
            uVar28 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar31 = ((uVar32 ^ uVar38) & uVar34 ^ uVar32) + uVar26 + uVar18 + uVar31;
            uVar14 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar38 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar26 = uVar28 ^ uVar25 ^ uVar18;
            uVar18 = uVar18 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar21 << 7 | uVar21 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar25;
            uVar28 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar26 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar33 = uVar28 + 0xa1e7629e + uVar31;
            uVar41 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar39 = (uVar23 ^ uVar19) + (uVar41 ^ uVar28) + uVar39 + ((uVar36 | uVar37) & uVar14 | uVar36 & uVar37);
            uVar33 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar32 = ((uVar34 ^ uVar38) & uVar31 ^ uVar38) + uVar41 + uVar19 + uVar32;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar37 = uVar17 << 0xf | uVar17 >> 0x11;
            uVar28 = uVar37 ^ uVar27 ^ uVar19;
            uVar34 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar41 = uVar32 + 0x43cec53d + uVar34;
            uVar28 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar22 << 7 | uVar22 >> 0x19)
                     ^ uVar37 ^ uVar27 ^ uVar19 ^ uVar40;
            uVar19 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar34 = (uVar24 ^ uVar20) + (uVar19 ^ uVar34) + uVar14 + ((uVar39 | uVar36) & uVar26 | uVar39 & uVar36);
            uVar41 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar37 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar38 = ((uVar33 ^ uVar31) & uVar32 ^ uVar33) + uVar19 + uVar20 + uVar38;
            uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar19 = uVar35 << 0xf | uVar35 >> 0x11;
            uVar14 = uVar19 ^ uVar29 ^ uVar20;
            uVar31 = uVar38 + 0x879d8a7a + uVar41;
            uVar42 = uVar31 * 0x80 | uVar31 >> 0x19;
            uVar19 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar23 << 7 | uVar23 >> 0x19)
                     ^ uVar19 ^ uVar29 ^ uVar20 ^ uVar15;
            uVar36 = (uVar25 ^ uVar21) + (uVar42 ^ uVar41) + uVar26 + ((uVar34 | uVar39) & uVar43 | uVar34 & uVar39);
            uVar14 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar31 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar33 = ((uVar37 ^ uVar32) & uVar38 ^ uVar37) + uVar42 + uVar21 + uVar33;
            uVar32 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar20 = uVar18 << 0xf | uVar18 >> 0x11;
            uVar26 = uVar20 ^ uVar30 ^ uVar21;
            uVar39 = uVar33 + 0xf3b14f5 + uVar31;
            uVar20 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar20 ^ uVar30 ^ uVar21 ^ uVar16;
            uVar21 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar26 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar39 = (uVar27 ^ uVar22) + (uVar21 ^ uVar31) + uVar43 + ((uVar36 | uVar34) & uVar14 | uVar36 & uVar34);
            uVar34 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar37 = ((uVar32 ^ uVar38) & uVar33 ^ uVar32) + uVar21 + uVar22 + uVar37;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar31 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar21 = uVar31 ^ uVar22 ^ uVar40;
            uVar38 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar41 = uVar37 + 0x1e7629ea + uVar38;
            uVar21 = (uVar21 << 0xf | uVar21 >> 0x11) ^ (uVar21 >> 9 | uVar21 << 0x17) ^ (uVar25 << 7 | uVar25 >> 0x19)
                     ^ uVar31 ^ uVar22 ^ uVar17 ^ uVar40;
            uVar22 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar38 = (uVar29 ^ uVar23) + (uVar22 ^ uVar38) + uVar14 + ((uVar39 | uVar36) & uVar26 | uVar39 & uVar36);
            uVar41 = uVar38 * 0x1000 | uVar38 >> 0x14;
            uVar31 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar32 = ((uVar33 ^ uVar34) & uVar37 ^ uVar34) + uVar22 + uVar23 + uVar32;
            uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar22 = uVar19 << 0xf | uVar19 >> 0x11;
            uVar14 = uVar22 ^ uVar23 ^ uVar15;
            uVar33 = uVar32 + 0x3cec53d4 + uVar41;
            uVar42 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar22 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar22 ^ uVar23 ^ uVar35 ^ uVar15;
            uVar33 = (uVar30 ^ uVar24) + (uVar42 ^ uVar41) + uVar26 + ((uVar38 | uVar39) & uVar43 | uVar38 & uVar39);
            uVar14 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar36 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar34 = ((uVar31 ^ uVar37) & uVar32 ^ uVar31) + uVar42 + uVar24 + uVar34;
            uVar37 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar23 = uVar20 << 0xf | uVar20 >> 0x11;
            uVar26 = uVar23 ^ uVar24 ^ uVar16;
            uVar39 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar23 ^ uVar24 ^ uVar18 ^ uVar16;
            uVar26 = uVar38 * 0x200 | uVar38 >> 0x17;
            uVar23 = uVar34 + 0x79d8a7a8 + uVar36;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar36 = (uVar25 ^ uVar40) + (uVar23 ^ uVar36) + uVar43 + ((uVar33 | uVar38) & uVar14 | uVar33 & uVar38);
            uVar38 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar31 = ((uVar37 ^ uVar32) & uVar34 ^ uVar37) + uVar23 + uVar25 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar24 = uVar21 << 0xf | uVar21 >> 0x11;
            uVar23 = uVar24 ^ uVar25 ^ uVar17;
            uVar41 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar30 << 7 | uVar30 >> 0x19)
                     ^ uVar24 ^ uVar25 ^ uVar28 ^ uVar17;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar24 = uVar31 + 0xf3b14f50 + uVar23;
            uVar25 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar32 = (uVar27 ^ uVar15) + (uVar25 ^ uVar23) + uVar14 + ((uVar36 | uVar33) & uVar26 | uVar36 & uVar33);
            uVar24 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar37 = ((uVar38 ^ uVar34) & uVar31 ^ uVar38) + uVar25 + uVar27 + uVar37;
            uVar33 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar25 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar23 = uVar22 << 0xf | uVar22 >> 0x11;
            uVar14 = uVar23 ^ uVar27 ^ uVar35;
            uVar42 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar40 << 7 | uVar40 >> 0x19)
                     ^ uVar23 ^ uVar27 ^ uVar19 ^ uVar35;
            uVar14 = uVar37 + 0xe7629ea1 + uVar24;
            uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar34 = (uVar29 ^ uVar16) + (uVar14 ^ uVar24) + uVar26 + ((uVar32 | uVar36) & uVar33 | uVar32 & uVar36);
            uVar23 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar38 = ((uVar31 ^ uVar25) & uVar37 ^ uVar25) + uVar14 + uVar29 + uVar38;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar24 = uVar39 << 0xf | uVar39 >> 0x11;
            uVar26 = uVar24 ^ uVar29 ^ uVar18;
            uVar31 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar15 << 7 | uVar15 >> 0x19)
                     ^ uVar24 ^ uVar29 ^ uVar20 ^ uVar18;
            uVar26 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar24 = uVar38 + 0xcec53d43 + uVar26;
            uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar33 = (uVar30 ^ uVar17) + (uVar24 ^ uVar26) + uVar33 + ((uVar34 | uVar32) & uVar14 | uVar34 & uVar32);
            uVar27 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar25 = ((uVar23 ^ uVar37) & uVar38 ^ uVar23) + uVar24 + uVar30 + uVar25;
            uVar37 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar24 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar26 = uVar24 ^ uVar30 ^ uVar28;
            uVar30 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar16 << 7 | uVar16 >> 0x19)
                     ^ uVar24 ^ uVar30 ^ uVar21 ^ uVar28;
            uVar26 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar24 = uVar25 + 0x9d8a7a87 + uVar26;
            uVar32 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar36 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar29 = uVar42 << 0xf | uVar42 >> 0x11;
            uVar34 = (uVar35 ^ uVar40) + (uVar36 ^ uVar26) + uVar14 + ((uVar33 | uVar34) & uVar37 | uVar33 & uVar34);
            uVar24 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar23 = ((uVar27 ^ uVar38) & uVar25 ^ uVar27) + uVar36 + uVar40 + uVar23;
            uVar23 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar23;
            uVar14 = uVar29 ^ uVar19 ^ uVar40;
            uVar40 = uVar40 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar17 << 7 | uVar17 >> 0x19) ^ uVar29 ^ uVar22 ^ uVar19;
            uVar14 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar26 = uVar23 + 0x3b14f50f + uVar14;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar37 = (uVar18 ^ uVar15) + (uVar26 ^ uVar14) + uVar37 + ((uVar34 | uVar33) & uVar32 | uVar34 & uVar33);
            uVar27 = ((uVar24 ^ uVar25) & uVar23 ^ uVar24) + uVar26 + uVar15 + uVar27;
            uVar14 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar25 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar29 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar26 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar38 = uVar27 + 0x7629ea1e + uVar29;
            uVar38 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar32 = (uVar28 ^ uVar16) + (uVar38 ^ uVar29) + uVar32 + ((uVar37 | uVar34) & uVar14 | uVar37 & uVar34);
            uVar29 = uVar23 >> 0xd | uVar23 << 0x13;
            uVar24 = ((uVar23 ^ uVar25) & uVar27 ^ uVar25) + uVar38 + uVar16 + uVar24;
            uVar23 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar34 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar38 = uVar24 + 0xec53d43c + uVar23;
            uVar38 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar37 = (uVar19 ^ uVar17) + (uVar38 ^ uVar23) + uVar14 + ((uVar32 | uVar37) & uVar26 | uVar32 & uVar37);
            uVar23 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar25 = ((uVar29 ^ uVar27) & uVar24 ^ uVar29) + uVar38 + uVar17 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar27 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar14 = uVar25 + 0xd8a7a879 + uVar27;
            uVar38 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar26 = (uVar20 ^ uVar35) + (uVar38 ^ uVar27) + uVar26 + ((uVar37 | uVar32) & uVar34 | uVar37 & uVar32);
            uVar32 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar27 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar29 = ((uVar23 ^ uVar24) & uVar25 ^ uVar23) + uVar38 + uVar35 + uVar29;
            uVar29 = (uVar29 >> 0xf | uVar29 * 0x20000) ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ uVar29;
            uVar24 = uVar29 + 0xb14f50f3 + uVar32;
            uVar38 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar32 = (uVar21 ^ uVar18) + (uVar38 ^ uVar32) + uVar34 + ((uVar37 | uVar26) & uVar14 | uVar37 & uVar26);
            uVar34 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar24 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar23 = ((uVar27 ^ uVar25) & uVar29 ^ uVar27) + uVar38 + uVar18 + uVar23;
            uVar33 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar23 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar23;
            uVar25 = uVar23 + 0x629ea1e7 + uVar34;
            uVar25 = uVar25 * 0x80 | uVar25 >> 0x19;
            uVar37 = (uVar22 ^ uVar28) + (uVar25 ^ uVar34) + uVar14 + ((uVar32 | uVar26) & uVar33 | uVar32 & uVar26);
            uVar14 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar27 = ((uVar29 ^ uVar24) & uVar23 ^ uVar24) + uVar25 + uVar28 + uVar27;
            uVar34 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar25 = uVar29 >> 0xd | uVar29 << 0x13;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar26 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar29 = uVar27 + 0xc53d43ce + uVar34;
            uVar38 = uVar29 * 0x80 | uVar29 >> 0x19;
            uVar32 = (uVar39 ^ uVar19) + (uVar38 ^ uVar34) + uVar33 + ((uVar37 | uVar32) & uVar14 | uVar37 & uVar32);
            uVar34 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar29 = uVar23 >> 0xd | uVar23 << 0x13;
            uVar24 = ((uVar25 ^ uVar23) & uVar27 ^ uVar25) + uVar38 + uVar19 + uVar24;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar19 = uVar24 + 0x8a7a879d + uVar34;
            uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar14 = (uVar41 ^ uVar20) + (uVar23 ^ uVar34) + uVar14 + ((uVar32 | uVar37) & uVar26 | uVar32 & uVar37);
            uVar19 = uVar14 * 0x1000 | uVar14 >> 0x14;
            uVar25 = ((uVar29 ^ uVar27) & uVar24 ^ uVar29) + uVar23 + uVar20 + uVar25;
            uVar23 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar34 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar27 = uVar25 + 0x14f50f3b + uVar19;
            uVar37 = uVar27 * 0x80 | uVar27 >> 0x19;
            uVar26 = (uVar42 ^ uVar21) + (uVar37 ^ uVar19) + uVar26 + ((uVar14 | uVar32) & uVar34 | uVar14 & uVar32);
            uVar19 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar27 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar29 = ((uVar23 ^ uVar24) & uVar25 ^ uVar23) + uVar37 + uVar21 + uVar29;
            uVar37 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar29 = (uVar29 >> 0xf | uVar29 * 0x20000) ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ uVar29;
            uVar24 = uVar29 + 0x29ea1e76 + uVar19;
            uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar32 = (uVar31 ^ uVar22) + (uVar24 ^ uVar19) + uVar34 + ((uVar26 | uVar14) & uVar37 | uVar26 & uVar14);
            uVar23 = ((uVar25 ^ uVar27) & uVar29 ^ uVar27) + uVar24 + uVar22 + uVar23;
            uVar34 = uVar14 * 0x200 | uVar14 >> 0x17;
            uVar24 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar19 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar23 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar23;
            uVar14 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar25 = uVar23 + 0x53d43cec + uVar19;
            uVar25 = uVar25 * 0x80 | uVar25 >> 0x19;
            uVar37 = (uVar30 ^ uVar39) + (uVar25 ^ uVar19) + uVar37 + ((uVar32 | uVar26) & uVar34 | uVar32 & uVar26);
            uVar26 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar27 = ((uVar24 ^ uVar29) & uVar23 ^ uVar24) + uVar25 + uVar39 + uVar27;
            uVar29 = uVar29 >> 0xd | uVar29 << 0x13;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar19 = uVar27 + 0xa7a879d8 + uVar26;
            uVar25 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar34 = (uVar41 ^ uVar40) + (uVar25 ^ uVar26) + uVar34 + ((uVar37 | uVar32) & uVar14 | uVar37 & uVar32);
            uVar19 = uVar23 >> 0xd | uVar23 << 0x13;
            uVar24 = ((uVar29 ^ uVar23) & uVar27 ^ uVar29) + uVar25 + uVar41 + uVar24;
            uVar32 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar25 = uVar31 << 0xf | uVar31 >> 0x11;
            uVar38 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar23 = uVar25 ^ uVar20 ^ uVar15;
            uVar26 = uVar38 + 0x4f50f3b1 + uVar24;
            uVar33 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar26 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar20 = (uVar33 ^ uVar38) +
                     ((uVar34 | uVar37) & uVar32 | uVar34 & uVar37) + uVar14 +
                     ((uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar35 << 7 | uVar35 >> 0x19)
                      ^ uVar25 ^ uVar42 ^ uVar39 ^ uVar20 ^ uVar15);
            uVar25 = uVar20 * 0x1000 | uVar20 >> 0x14;
            uVar29 = ((uVar19 ^ uVar27) & uVar24 ^ uVar19) + uVar33 + uVar42 + uVar29;
            uVar23 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar29 = (uVar29 >> 0xf | uVar29 * 0x20000) ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ uVar29;
            uVar14 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar35 = uVar14 ^ uVar21 ^ uVar16;
            uVar15 = uVar29 + 0x9ea1e762 + uVar25;
            uVar27 = uVar15 * 0x80 | uVar15 >> 0x19;
            uVar15 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar14 = (uVar27 ^ uVar25) +
                     ((uVar20 | uVar34) & uVar26 | uVar20 & uVar34) + uVar32 +
                     ((uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar35 >> 9 | uVar35 << 0x17) ^ (uVar18 << 7 | uVar18 >> 0x19)
                      ^ uVar14 ^ uVar31 ^ uVar41 ^ uVar21 ^ uVar16);
            uVar18 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar19 = ((uVar24 ^ uVar23) & uVar29 ^ uVar23) + uVar27 + uVar31 + uVar19;
            uVar21 = uVar14 * 0x1000 | uVar14 >> 0x14;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar35 = uVar16 ^ uVar22 ^ uVar17;
            uVar40 = uVar19 + 0x3d43cec5 + uVar21;
            uVar40 = uVar40 * 0x80 | uVar40 >> 0x19;
            uStack_20 = uStack_20 ^ uVar14;
            uVar23 = ((uVar18 ^ uVar29) & uVar19 ^ uVar18) + uVar40 + uVar30 + uVar23;
            *param_1 = *param_1 ^
                       (uVar40 ^ uVar21) +
                       ((uVar14 | uVar20) & uVar15 | uVar14 & uVar20) + uVar26 +
                       ((uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar35 >> 9 | uVar35 << 0x17) ^
                        (uVar28 << 7 | uVar28 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar42 ^ uVar22 ^ uVar17);
            param_1[1] = uStack_20;
            uStack_1c = uStack_1c ^ (uVar20 * 0x200 | uVar20 >> 0x17);
            uStack_14 = uStack_14 ^ uVar15;
            param_1[3] = uStack_14;
            param_1[2] = uStack_1c;
            uStack_24 = (uVar23 * 0x200 | uVar23 >> 0x17) ^ (uVar23 >> 0xf | uVar23 * 0x20000) ^ uStack_24 ^ uVar23;
            param_1[4] = uStack_24;
            uStack_10 = uStack_10 ^ uVar19;
            param_1[5] = uStack_10;
            uStack_18 = uStack_18 ^ (uVar29 >> 0xd | uVar29 << 0x13);
            uStack_c = uStack_c ^ uVar18;
            param_1[7] = uStack_c;
            param_1[6] = uStack_18;
        } while (param_3 != 0);
    }
    return;
}


/* fcn.00001e8d @ 0x1e8d */

uint __fastcall fcn.00001e8d(uint param_1)

{
    uint16_t uVar1;
    
    uVar1 = param_1 >> 0x10;
    return CONCAT22(param_1 << 8 | param_1 >> 8,uVar1 << 8 | uVar1 >> 8);
}


/* fcn.00001e5c @ 0x1e5c */

int __fastcall fcn.00001e5c(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.000003f5 @ 0x3f5 */

int __cdecl fcn.000003f5(int32_t arg_8h,uint noname_1,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int *in_ECX;
    int32_t var_428h;
    int8_t var_41eh;
    int32_t var_41dh;
    int16_t var_1ch;
    int32_t var_1ah;
    int32_t var_16h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t var_ah;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = (**(*in_ECX + 0x20))();
    if (-1 < iVar1) {
        var_16h = 0x7a010000;
        var_1ch = 0x180;
        var_12h = fcn.00001e8d();
        var_eh = fcn.00001e8d();
        var_ah = fcn.00001e8d();
        var_1ah = fcn.00001e8d();
        iVar1 = (**(var_4h + 0xc))(var_4h,0x16,&var_1ch,0x40b,&var_428h);
        if (-1 < iVar1) {
            *arg_10h = var_41eh;
            fcn.00001e5c(0x400);
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.0000049d @ 0x49d */

void __cdecl fcn.0000049d(int32_t arg_8h)

{
    int iVar1;
    uint uVar2;
    uint in_ECX;
    uint noname_1;
    uint *in_EDX;
    int32_t var_40ch;
    int32_t var_400h;
    int32_t var_5h;
    
    iVar1 = fcn.000003f5(0x11e,in_ECX,&var_5h,&var_40ch);
    if (-1 < iVar1) {
        uVar2 = fcn.00001e8d();
        *in_EDX = uVar2;
        iVar1 = fcn.000003f5(0x11f,noname_1,&var_5h,&var_40ch);
        if (-1 < iVar1) {
            fcn.00001e8d();
            return;
        }
    }
    return;
}


/* fcn.00009f66 @ 0x9f66 */

uint8_t fcn.00009f66(void)

{
    char cVar1;
    uint8_t extraout_CH;
    
    cVar1 = fcn.00009f3c();
    if (cVar1 == '\0') {
        return 0;
    }
    return extraout_CH >> 5 & 2;
}


/* fcn.00009f3c @ 0x9f3c */

int fcn.00009f3c(void)

{
    unkuint3 Var1;
    
    Var1 = *0xfed40030 >> 8;
    if ((*0xfed40030 != -1) && (*0xfed40030 != 0)) {
        return CONCAT31(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.0000a11d @ 0xa11d */

//WARNING: Removing unreachable block (ram,0x0000a19e)

int __fastcall fcn.0000a11d(uchar *param_1,int param_2)

{
    char cVar1;
    int iVar2;
    
    cVar1 = fcn.00009f66();
    if (cVar1 == '\x02') {
        iVar2 = fcn.00009f81();
        if ((-1 < iVar2) && (iVar2 = fcn.0000a063(), -1 < iVar2)) {
            if (*0xfed4005c == 0) {
                *0xfed4005c = -0x12bff80;
                *0xfed40058 = 0x500;
                *0xfed40068 = 0xfed40080;
                *0xfed40064 = 0x500;
            }
            if (param_2 != 0) {
                iVar2 = *0xfed4005c - param_1;
                do {
                    param_1[iVar2] = *param_1;
                    param_1 = param_1 + 1;
                    param_2 = param_2 + -1;
                } while (param_2 != 0);
            }
            iVar2 = fcn.0000a009();
            if (-1 < iVar2) {
                *0xfed4004c = 1;
                iVar2 = 0;
            }
        }
    }
    else {
        iVar2 = -0x7ffffffd;
    }
    return iVar2;
}


/* fcn.0000a1ad @ 0xa1ad */

int __fastcall fcn.0000a1ad(int32_t *param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t *piVar4;
    int iVar5;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    cVar1 = fcn.00009f66();
    if (cVar1 == '\x02') {
        iVar2 = fcn.0000a009();
        if (-1 < iVar2) {
            if (*0xfed40068 == 0) {
                iVar2 = -0x7fffffeb;
            }
            else {
                iVar2 = 0xc;
                iVar5 = *0xfed40068 - param_1;
                piVar4 = param_1;
                do {
                    *piVar4 = *(iVar5 + piVar4);
                    piVar4 = piVar4 + 1;
                    iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                if (&var_4h != param_1) {
                    section..text(&var_4h,param_1,2);
                }
                if ((var_4h << 8 | var_4h >> 8) != 0xc4) {
                    if (&var_8h != param_1 + 2) {
                        section..text(&var_8h,param_1 + 2,4);
                    }
                    uVar3 = fcn.00001e8d();
                    *param_2 = uVar3;
                    if (*0xfed40064 < uVar3) {
                        return -0x7ffffffb;
                    }
                    if (9 < uVar3) {
                        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                            *param_1 = *(iVar5 + param_1);
                            param_1 = param_1 + 1;
                        }
                        iVar2 = fcn.0000a0b2();
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        return 0;
                    }
                }
                iVar2 = -0x7ffffff9;
            }
        }
    }
    else {
        iVar2 = -0x7ffffffd;
    }
    return iVar2;
}


/* fcn.0000020d @ 0x20d */

uint fcn.0000020d(void)

{
    uint8_t uVar1;
    uint uVar2;
    int iVar3;
    
    if ((*0xfed40000 & 0x20) == 0) {
        *0xfed40000 = 2;
        iVar3 = 30000;
        do {
            fcn.00009c99();
            uVar2 = 0;
            if (((*0xfed40000 & 0x20) != 0) && (*0xfed40000 < '\0')) {
                uVar1 = *0xfed40000 & 0x20;
                goto code_r0x00000248;
            }
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar1 = 0;
code_r0x00000248:
        if (uVar1 == 0) {
            uVar2 = 0x80000006;
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00009e96 @ 0x9e96 */

int __fastcall fcn.00009e96(int param_1,uint32_t param_2,int param_3,int param_4,int param_5)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int32_t var_4h;
    
    if ((param_3 == 0) || (param_4 == 0)) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar3 = fcn.00009d09();
        if (iVar3 < 0) {
            iVar3 = -0x7ffffff9;
        }
        else {
            bVar1 = false;
            uVar4 = 0;
            do {
                if (param_2 <= uVar4) break;
                param_5 = param_5 + -1;
                iVar3 = fcn.00009d57(*(param_3 + 4 + uVar4 * 8),param_5 == 0);
                uVar4 = uVar4 + 1;
            } while (-1 < iVar3);
            if (-1 < iVar3) {
                do {
                    cVar2 = fcn.00009cb0();
                } while (cVar2 == '\0');
                iVar3 = -0x7ffffffb;
                do {
                    if (bVar1) break;
                    iVar3 = fcn.00009e0f(param_4 + 4);
                    bVar1 = true;
                } while (iVar3 == -0x7ffffffb);
            }
            *(param_1 + 0x18) = 0x40;
        }
    }
    return iVar3;
}


/* fcn.0000025d @ 0x25d */

uint fcn.0000025d(void)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    
    iVar3 = 0x1d4c;
    cVar1 = fcn.00009cb0();
    if (cVar1 == '\0') {
code_r0x00000277:
        uVar2 = 0x80000007;
    }
    else {
        *0xfed40000 = 0x20;
        cVar1 = fcn.00009cb0();
        if (cVar1 != '\0') {
            do {
                fcn.00009c99();
                iVar3 = iVar3 + -1;
                cVar1 = fcn.00009cb0();
                if (cVar1 == '\0') break;
            } while (iVar3 != 0);
            cVar1 = fcn.00009cb0();
            if (cVar1 != '\0') goto code_r0x00000277;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00009f50 @ 0x9f50 */

uchar fcn.00009f50(void)

{
    char cVar1;
    uchar extraout_CL;
    
    cVar1 = fcn.00009f3c();
    if (cVar1 == '\0') {
        return 0;
    }
    return extraout_CL;
}


/* fcn.00001e41 @ 0x1e41 */

uint __fastcall fcn.00001e41(uint param_1,uint *param_2)

{
    *param_2 = 0x9000040;
    *(param_2 + 1) = 0;
    *(param_2 + 6) = 0;
    *(param_2 + 7) = 0;
    return 9;
}


/* fcn.00001ecf @ 0x1ecf */

void __cdecl fcn.00001ecf(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xa620,0,0,arg_ch);
    return;
}


/* fcn.000002bc @ 0x2bc */

//WARNING: Removing unreachable block (ram,0x000002eb)
//WARNING: Removing unreachable block (ram,0x000002f3)
//WARNING: Removing unreachable block (ram,0x00000317)
//WARNING: Removing unreachable block (ram,0x0000031b)
//WARNING: Removing unreachable block (ram,0x00000321)
//WARNING: Removing unreachable block (ram,0x0000034d)
//WARNING: Removing unreachable block (ram,0x00000351)
//WARNING: Removing unreachable block (ram,0x00000357)
//WARNING: Removing unreachable block (ram,0x0000037e)
//WARNING: Removing unreachable block (ram,0x00000386)
//WARNING: Removing unreachable block (ram,0x0000038c)
//WARNING: Removing unreachable block (ram,0x000003b7)
//WARNING: Removing unreachable block (ram,0x000003bb)
//WARNING: Removing unreachable block (ram,0x000003c1)
//WARNING: Removing unreachable block (ram,0x000003e4)

uint fcn.000002bc(void)

{
    fcn.00001584();
    return 0x8000000e;
}


/* fcn.00000741 @ 0x741 */

void __thiscall fcn.00000741(int param_1,uint32_t *param_2)

{
    uint16_t uVar1;
    int *piVar2;
    uint16_t *puVar3;
    uint32_t uVar4;
    uint *puVar5;
    uint16_t *puVar6;
    int iVar7;
    ulong uVar8;
    ushort uStack_280;
    uint uStack_27e;
    uint uStack_27a;
    uint uStack_276;
    uint uStack_272;
    uchar auStack_94 [148];
    
    uStack_27a = 0x82010000;
    uStack_280 = 0x280;
    iVar7 = 0;
    uStack_276 = fcn.00001e8d();
    uVar8 = fcn.00001e41();
    puVar5 = (uVar8 >> 0x20) + uVar8;
    uStack_272 = fcn.00001e8d();
    uVar8 = fcn.00001e8d();
    piVar2 = uVar8 >> 0x20;
    *puVar5 = uVar8;
    uVar4 = 0;
    puVar6 = puVar5 + 1;
    if (*piVar2 != 0) {
        puVar3 = piVar2 + 1;
        do {
            *puVar6 = *puVar3 << 8 | *puVar3 >> 8;
            uVar1 = *puVar3;
            if (uVar1 == 4) {
                iVar7 = 0x14;
            }
            else if (uVar1 == 0xb) {
code_r0x000007cd:
                iVar7 = 0x20;
            }
            else if (uVar1 == 0xc) {
                iVar7 = 0x30;
            }
            else if (uVar1 == 0xd) {
                iVar7 = 0x40;
            }
            else if (uVar1 == 0x12) goto code_r0x000007cd;
            fcn.00009b0d(puVar3 + 1,iVar7);
            puVar6 = puVar6 + iVar7 + 2;
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 0x21;
        } while (uVar4 < *param_2);
    }
    uStack_27e = fcn.00001e8d();
    (**(param_1 + 0xc))(param_1,puVar6 - &uStack_280,&uStack_280,0x93,auStack_94);
    return;
}


/* fcn.00000835 @ 0x835 */

uint __fastcall fcn.00000835(uint32_t *param_1,uint32_t *param_2)

{
    int16_t iVar1;
    uint32_t uVar2;
    
    if ((param_1 == NULL) || (param_2 == NULL)) {
        return 0x80000002;
    }
    uVar2 = 0;
    *param_2 = *param_1;
    if (*param_1 != 0) {
        do {
            iVar1 = *(param_1 + uVar2 * 0x42 + 4);
            if (iVar1 == 4) {
                fcn.00001e5c(2);
                fcn.00001e5c(0x14);
            }
            else if (iVar1 == 0xb) {
code_r0x00000882:
                fcn.00001e5c(2);
                fcn.00001e5c(0x20);
            }
            else if (iVar1 == 0xc) {
                fcn.00001e5c(2);
                fcn.00001e5c(0x30);
            }
            else if (iVar1 == 0xd) {
                fcn.00001e5c(2);
                fcn.00001e5c(0x40);
            }
            else if (iVar1 == 0x12) goto code_r0x00000882;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
    }
    return 0;
}


/* fcn.00000b06 @ 0xb06 */

int __fastcall fcn.00000b06(uint32_t *param_1)

{
    int16_t iVar1;
    int iVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    
    if (param_1 == NULL) {
        return 0;
    }
    puVar3 = param_1 + 1;
    uVar4 = 0;
    iVar2 = 4;
    if (*param_1 != 0) {
        do {
            iVar1 = *puVar3;
            if (iVar1 == 4) {
                iVar2 = iVar2 + 0x16;
                puVar3 = puVar3 + 0x16;
            }
            else if (iVar1 == 0xb) {
                iVar2 = iVar2 + 0x22;
                puVar3 = puVar3 + 0x22;
            }
            else if (iVar1 == 0xc) {
                iVar2 = iVar2 + 0x32;
                puVar3 = puVar3 + 0x32;
            }
            else if (iVar1 == 0xd) {
                iVar2 = iVar2 + 0x42;
                puVar3 = puVar3 + 0x42;
            }
            else if (iVar1 == 0x12) {
                iVar2 = iVar2 + 0x22;
                puVar3 = puVar3 + 5;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *param_1);
    }
    return iVar2;
}


/* fcn.00009abe @ 0x9abe */

uint fcn.00009abe(void)

{
    uint uVar1;
    
    if (*0xaa01 != '\0') {
        uVar1 = fcn.0000a364();
        return uVar1;
    }
    return 0x80000003;
}


/* fcn.0000a364 @ 0xa364 */

uint32_t __fastcall fcn.0000a364(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = param_1 & 0xff;
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),param_1,param_2,0,0xa6b0,0);
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.00000a20 @ 0xa20 */

int __cdecl fcn.00000a20(uint32_t arg_8h,int32_t arg_ch)

{
    int *piVar1;
    int iVar2;
    uint noname_0;
    int in_EDX;
    int32_t var_180h;
    int32_t var_30h;
    int32_t var_19h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    var_4h = 0;
    if ((in_EDX == 0) || (arg_8h == 0)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        var_8h = &var_14h;
        InterruptDescriptorTableRegister();
        piVar1 = *(stack0xffffffea + -4);
        if ((piVar1 == NULL) || (*piVar1 == 0)) {
            iVar2 = -0x7ffffff2;
        }
        else {
            iVar2 = (**(*piVar1 + 0x20))(piVar1,0xa660,0,0,&var_4h);
            if ((iVar2 < 0) || (var_4h == 0)) {
                iVar2 = -0x7ffffffa;
            }
            else {
                iVar2 = fcn.00001ecf(noname_0,&var_ch);
                if (-1 < iVar2) {
                    iVar2 = (**(var_ch + 4))(0,&var_30h);
                    if (-1 < iVar2) {
                        var_8h = 0;
                        iVar2 = fcn.000002bc();
                        if (-1 < iVar2) {
                            iVar2 = fcn.00000741(&var_180h);
                            fcn.00000835();
                        }
                    }
                }
            }
        }
    }
    return iVar2;
}


/* fcn.000000e8 @ 0xe8 */

uint * fcn.000000e8(uint *param_1,uint32_t param_2)

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


/* section..text @ 0xa8 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 41931 named .text
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


/* fcn.00000911 @ 0x911 */

uint __fastcall fcn.00000911(uint32_t *param_1,uint32_t *param_2)

{
    int16_t iVar1;
    uint uVar2;
    uint32_t *puVar3;
    uint8_t uStack_4;
    
    if ((param_2 == NULL) || (param_1 == NULL)) {
        uVar2 = 0x80000002;
    }
    else {
        *param_2 = *param_1;
        puVar3 = param_1 + 1;
        uStack_4 = 0;
        if (*param_1 != 0) {
            do {
                iVar1 = *puVar3;
                if (iVar1 == 4) {
                    fcn.00001e5c(2);
                    fcn.00001e5c(0x14);
                    puVar3 = puVar3 + 0x16;
                }
                else if (iVar1 == 0xb) {
code_r0x00000967:
                    fcn.00001e5c(2);
                    fcn.00001e5c(0x20);
                    puVar3 = puVar3 + 0x22;
                }
                else if (iVar1 == 0xc) {
                    fcn.00001e5c(2);
                    fcn.00001e5c(0x30);
                    puVar3 = puVar3 + 0x32;
                }
                else if (iVar1 == 0xd) {
                    fcn.00001e5c(2);
                    fcn.00001e5c(0x40);
                    puVar3 = puVar3 + 0x42;
                }
                else if (iVar1 == 0x12) goto code_r0x00000967;
                uStack_4 = uStack_4 + 1;
            } while (uStack_4 < *param_1);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00000b6b @ 0xb6b */

int __fastcall fcn.00000b6b(uint32_t *param_1,int param_2,int param_3)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    uint noname_0;
    int iVar5;
    uint32_t *puVar6;
    bool bVar7;
    uint8_t uStack_31;
    int iStack_30;
    uint32_t *puStack_20;
    uchar auStack_1c [5];
    char cStack_17;
    uint32_t uStack_5;
    
    iStack_30 = 0;
    if (((param_1 == NULL) || (param_2 == 0)) || (param_3 == 0)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00001584();
        if ((-1 < iVar2) && (iVar2 = fcn.00001ecf(noname_0,&puStack_20), -1 < iVar2)) {
            (*puStack_20[1])(0,auStack_1c);
            uVar3 = fcn.00000b06();
            if ((*0x14 + CARRY4(uVar3,*0x10) != 0) || (0x1028 < uVar3 + *0x10)) {
                *0x24 = '\x01';
            }
            if (*0x24 == '\0') {
                iVar2 = 8;
                fcn.00001e5c(8);
                if (cStack_17 == '\x01') {
                    puVar6 = param_1 + 1;
                    if (*param_1 == 0) {
                        puVar6 = puStack_20;
                    }
                    if (*puVar6 == 4) {
                        fcn.00001e5c(0x16);
                    }
                }
                else if (cStack_17 == '\x02') {
                    puVar6 = param_1 + 1;
                    piVar4 = *0x10 + 8;
                    iVar2 = 0xc;
                    uStack_31 = 0;
                    iVar5 = 0;
                    if (*param_1 != 0) {
                        do {
                            iVar1 = *puVar6;
                            if (iVar1 == 4) {
                                if ((uStack_5 & 1) != 0) {
                                    fcn.00001e5c(0x16);
                                    iVar2 = iVar2 + 0x16;
                                    fcn.00009abe();
                                }
                                puVar6 = puVar6 + 0x16;
                            }
                            else if (iVar1 == 0xb) {
                                if ((uStack_5 & 2) != 0) {
                                    fcn.00001e5c(0x22);
code_r0x00000d4b:
                                    iVar2 = iVar2 + 0x22;
                                    fcn.00009abe();
                                    iStack_30 = iStack_30 + 1;
                                }
code_r0x00000d5f:
                                puVar6 = puVar6 + 0x22;
                            }
                            else if (iVar1 == 0xc) {
                                if ((uStack_5 & 4) != 0) {
                                    fcn.00001e5c(0x32);
                                    iVar2 = iVar2 + 0x32;
                                    fcn.00009abe();
                                    iStack_30 = iStack_30 + 1;
                                }
                                puVar6 = puVar6 + 0x32;
                            }
                            else if (iVar1 == 0xd) {
                                if ((uStack_5 & 8) != 0) {
                                    fcn.00001e5c(0x42);
                                    iVar2 = iVar2 + 0x42;
                                    fcn.00009abe();
                                    iStack_30 = iStack_30 + 1;
                                }
                                puVar6 = puVar6 + 0x42;
                            }
                            else if (iVar1 == 0x12) {
                                if ((uStack_5 & 0x10) != 0) {
                                    fcn.00001e5c(0x22);
                                    goto code_r0x00000d4b;
                                }
                                goto code_r0x00000d5f;
                            }
                            uStack_31 = uStack_31 + 1;
                        } while (uStack_31 < *param_1);
                        iVar5 = iStack_30;
                    }
                    if (piVar4 != NULL) {
                        *piVar4 = iVar5;
                    }
                }
                fcn.00001e5c(4);
                fcn.00001e5c(*(param_2 + 0x1c));
                _te_directory1_header = *0x10;
                *0x1c = *0x14;
                uVar3 = *(param_2 + 0x1c) + iVar2 + 4;
                bVar7 = CARRY4(uVar3,*0x10);
                *0x10 = uVar3 + *0x10;
                *0x14 = *0x14 + bVar7;
                *0x4 = *0x4 + *(param_2 + 0x1c) + iVar2 + 4;
                *0x8 = *0x8 + 1;
                iVar2 = 0;
            }
            else {
                iVar2 = -0x7ffffff5;
            }
        }
    }
    return iVar2;
}


/* fcn.00001ea6 @ 0x1ea6 */

void fcn.00001ea6(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xa714);
    return;
}


/* fcn.000097e1 @ 0x97e1 */

uint __fastcall fcn.000097e1(uint *param_1)

{
    if (param_1 == NULL) {
        return 0xffffffff;
    }
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xf3bcc908;
    param_1[3] = 0x6a09e667;
    param_1[4] = 0x84caa73b;
    param_1[5] = 0xbb67ae85;
    param_1[6] = 0xfe94f82b;
    param_1[7] = 0x3c6ef372;
    param_1[8] = 0x5f1d36f1;
    param_1[9] = 0xa54ff53a;
    param_1[10] = 0xade682d1;
    param_1[0xb] = 0x510e527f;
    param_1[0xc] = 0x2b3e6c1f;
    param_1[0xd] = 0x9b05688c;
    param_1[0xe] = 0xfb41bd6b;
    param_1[0xf] = 0x1f83d9ab;
    param_1[0x10] = 0x137e2179;
    param_1[0x11] = 0x5be0cd19;
    return 0;
}


/* fcn.00009919 @ 0x9919 */

uint __fastcall fcn.00009919(uint32_t *param_1,int param_2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    int iVar7;
    uchar *puVar8;
    
    if (((param_1 == NULL) || (param_2 == 0)) || (uVar5 = param_1[0x12], 0x7f < uVar5)) {
        uVar3 = 0xffffffff;
    }
    else {
        iVar7 = 8;
        uVar4 = uVar5 * 8;
        uVar2 = *param_1;
        *param_1 = *param_1 + uVar4;
        param_1[1] = param_1[1] + (uVar5 * 8 >> 0x20) + CARRY4(uVar2,uVar4);
        *(uVar5 + 0x4c + param_1) = 0x80;
        param_1[0x12] = param_1[0x12] + 1;
        uVar5 = param_1[0x12];
        if (0x70 < uVar5) {
            while (uVar5 < 0x80) {
                *(param_1 + uVar5 + 0x4c) = 0;
                param_1[0x12] = param_1[0x12] + 1;
                uVar5 = param_1[0x12];
            }
            fcn.00008a62();
            param_1[0x12] = 0;
        }
        while (param_1[0x12] < 0x78) {
            *(param_1[0x12] + 0x4c + param_1) = 0;
            param_1[0x12] = param_1[0x12] + 1;
        }
        *(param_1 + 0x31) = *(param_1 + 7);
        *(param_1 + 0xc5) = *(param_1 + 6);
        *(param_1 + 0xc6) = *(param_1 + 5);
        *(param_1 + 199) = param_1[1];
        *(param_1 + 0x32) = *(param_1 + 3);
        *(param_1 + 0xc9) = *(param_1 + 2);
        *(param_1 + 0xca) = *(param_1 + 1);
        *(param_1 + 0xcb) = *param_1;
        fcn.00008a62();
        puVar6 = param_2 + 2;
        puVar8 = param_1 + 0xe;
        do {
            puVar6[-2] = puVar8[1];
            puVar6[-1] = *puVar8;
            *puVar6 = puVar8[-1];
            puVar6[1] = puVar8[-2];
            puVar6[2] = puVar8[-3];
            puVar6[3] = puVar8[-4];
            puVar6[4] = puVar8[-5];
            puVar1 = puVar8 + -6;
            puVar8 = puVar8 + 8;
            puVar6[5] = *puVar1;
            puVar6 = puVar6 + 8;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00000f47 @ 0xf47 */

//WARNING: Removing unreachable block (ram,0x00000fd0)
//WARNING: Removing unreachable block (ram,0x00000fd9)
//WARNING: Removing unreachable block (ram,0x00000fdf)
//WARNING: Removing unreachable block (ram,0x00000fe8)
//WARNING: Removing unreachable block (ram,0x00001021)
//WARNING: Removing unreachable block (ram,0x0000102a)
//WARNING: Removing unreachable block (ram,0x00001025)
//WARNING: Removing unreachable block (ram,0x0000102c)
//WARNING: Removing unreachable block (ram,0x00001030)
//WARNING: Removing unreachable block (ram,0x00001034)
//WARNING: Removing unreachable block (ram,0x00001038)
//WARNING: Removing unreachable block (ram,0x0000103c)
//WARNING: Removing unreachable block (ram,0x00001040)
//WARNING: Removing unreachable block (ram,0x00001044)
//WARNING: Removing unreachable block (ram,0x00001048)
//WARNING: Removing unreachable block (ram,0x0000104c)
//WARNING: Removing unreachable block (ram,0x00000ff1)
//WARNING: Removing unreachable block (ram,0x00001058)
//WARNING: Removing unreachable block (ram,0x00001098)
//WARNING: Removing unreachable block (ram,0x0000109c)
//WARNING: Removing unreachable block (ram,0x000010a0)
//WARNING: Removing unreachable block (ram,0x0000118a)
//WARNING: Removing unreachable block (ram,0x000010ad)
//WARNING: Removing unreachable block (ram,0x000010bb)
//WARNING: Removing unreachable block (ram,0x000010d9)
//WARNING: Removing unreachable block (ram,0x000010dd)
//WARNING: Removing unreachable block (ram,0x00001109)
//WARNING: Removing unreachable block (ram,0x0000110d)
//WARNING: Removing unreachable block (ram,0x00001139)
//WARNING: Removing unreachable block (ram,0x0000113d)
//WARNING: Removing unreachable block (ram,0x00001165)
//WARNING: Removing unreachable block (ram,0x00001169)
//WARNING: Removing unreachable block (ram,0x000011a3)
//WARNING: Removing unreachable block (ram,0x000011a9)
//WARNING: Removing unreachable block (ram,0x000011b3)
//WARNING: Removing unreachable block (ram,0x000011ce)
//WARNING: Removing unreachable block (ram,0x000012e7)
//WARNING: Removing unreachable block (ram,0x000011d7)
//WARNING: Removing unreachable block (ram,0x000011df)
//WARNING: Removing unreachable block (ram,0x000011ec)
//WARNING: Removing unreachable block (ram,0x000011f8)
//WARNING: Removing unreachable block (ram,0x00001205)
//WARNING: Removing unreachable block (ram,0x0000122e)
//WARNING: Removing unreachable block (ram,0x00001232)
//WARNING: Removing unreachable block (ram,0x0000125f)
//WARNING: Removing unreachable block (ram,0x00001263)
//WARNING: Removing unreachable block (ram,0x00001290)
//WARNING: Removing unreachable block (ram,0x00001294)
//WARNING: Removing unreachable block (ram,0x000012c1)
//WARNING: Removing unreachable block (ram,0x000012c5)
//WARNING: Removing unreachable block (ram,0x000012ff)
//WARNING: Removing unreachable block (ram,0x00001307)

int fcn.00000f47(int32_t param_1,int var_ch)

{
    int iVar1;
    uint32_t var_4h;
    int32_t var_8h;
    int32_t var_eh;
    int32_t var_156h;
    int iStack_180;
    uchar auStack_17c [380];
    
    iVar1 = (**(*var_8h + 0x20))(var_8h,0xa620,0,0,&iStack_180);
    if ((-1 < iVar1) && (iStack_180 != 0)) {
        fcn.00001584();
        (**(iStack_180 + 4))(var_8h,auStack_17c);
        if (var_ch == 0) {
            iVar1 = -0x7ffffffe;
        }
        else {
            iVar1 = -0x7ffffff2;
        }
    }
    return iVar1;
}


/* fcn.00000675 @ 0x675 */

int __cdecl fcn.00000675(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int iVar1;
    int32_t iStack_18;
    int32_t iStack_14;
    int32_t iStack_10;
    int32_t iStack_c;
    
    if ((arg_10h == 0) || (arg_18h == 0)) {
        iVar1 = -0x7ffffffe;
    }
    else {
        iStack_10 = arg_10h;
        iStack_c = arg_ch;
        iStack_18 = arg_18h;
        iStack_14 = arg_14h;
        iVar1 = fcn.0000020d();
        if (-1 < iVar1) {
            iVar1 = fcn.00009e96(&iStack_10,&iStack_18,1);
            fcn.0000025d();
        }
    }
    return iVar1;
}


/* fcn.00000626 @ 0x626 */

//WARNING: Variable defined which should be unmapped: var_4h

int __cdecl fcn.00000626(uint noname_0,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h,uint32_t arg_18h)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    if (((arg_10h == 0) || (arg_18h == 0)) || (arg_ch == 0)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        cVar1 = fcn.00009f66(arg_14h);
        if (cVar1 == '\0') {
            iVar2 = -0x7ffffffd;
        }
        else {
            iVar2 = fcn.0000a11d();
            if (-1 < iVar2) {
                iVar2 = fcn.0000a1ad();
            }
        }
    }
    return iVar2;
}


/* fcn.00001950 @ 0x1950 */

uint fcn.00001950(uint param_1,char param_2)

{
    int16_t iVar1;
    uint uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint *puVar5;
    uint16_t *puVar6;
    int iVar7;
    ulong uVar8;
    uchar *puStack_290;
    uint32_t uStack_28c;
    ushort uStack_288;
    uint uStack_286;
    uint uStack_282;
    uint uStack_27e;
    uint uStack_27a;
    uchar auStack_98 [152];
    
    uStack_282 = 0x82010000;
    puStack_290 = NULL;
    uStack_288 = 0x280;
    iVar7 = 0;
    uStack_27e = fcn.00001e8d();
    uVar8 = fcn.00001e41();
    puVar5 = (uVar8 >> 0x20) + uVar8;
    uStack_27a = fcn.00001e8d();
    uVar8 = fcn.00001e8d();
    puVar3 = uVar8 >> 0x20;
    *puVar5 = uVar8;
    puVar6 = puVar5 + 1;
    uStack_28c = 0;
    if (*puVar3 != 0) {
        puVar4 = puVar3 + 1;
        do {
            *puVar6 = *puVar4 << 8 | *puVar4 >> 8;
            iVar1 = *puVar4;
            if (iVar1 == 4) {
                iVar7 = 0x14;
            }
            else if (iVar1 == 0xb) {
code_r0x000019e2:
                iVar7 = 0x20;
            }
            else if (iVar1 == 0xc) {
                iVar7 = 0x30;
            }
            else if (iVar1 == 0xd) {
                iVar7 = 0x40;
            }
            else if (iVar1 == 0x12) goto code_r0x000019e2;
            fcn.00009b0d(puVar4 + 2,iVar7);
            puVar6 = puVar6 + iVar7 + 2;
            uStack_28c = uStack_28c + 1;
            puVar4 = puVar4 + 0x42;
        } while (uStack_28c < *puVar3);
    }
    uStack_286 = fcn.00001e8d();
    puStack_290 = auStack_98;
    if (param_2 == '\0') {
        uVar2 = fcn.00000675(0,puVar6 - &uStack_288,&uStack_288,0x93,&puStack_290);
    }
    else {
        if (param_2 != '\x01') {
            return 0;
        }
        uVar2 = fcn.00000626(0,puVar6 - &uStack_288,&uStack_288,0x93,&puStack_290);
    }
    return uVar2;
}


/* fcn.000016ba @ 0x16ba */

int __fastcall fcn.000016ba(int *param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int16_t var_20h;
    int32_t var_1eh;
    int32_t var_1ah;
    int16_t var_16h;
    int32_t var_14h;
    int32_t var_eh;
    int32_t var_8h;
    
    cVar1 = *0xaa00;
    iVar2 = (**(*param_1 + 0x28))(param_1,&var_8h);
    if (iVar2 < 0) {
        return iVar2;
    }
    var_1eh = 0xc000000;
    var_20h = 0x180;
    var_16h = 0;
    var_1ah = 0x44010000;
    fcn.00000108(&var_14h,10,0);
    if (cVar1 == '\0') {
        iVar2 = fcn.00000675(0,0xc,&var_20h,10,&var_14h);
    }
    else {
        if (cVar1 != '\x01') goto code_r0x0000172d;
        iVar2 = fcn.00000626(0,0xc,&var_20h,10,&var_14h);
    }
    if (iVar2 < 0) {
        return iVar2;
    }
code_r0x0000172d:
    if (((var_eh != 0) && (iVar3 = fcn.00001e8d(), iVar3 != 0x100)) && (iVar3 != 10)) {
        fcn.00009abe();
        iVar2 = fcn.00001e8d();
        if (iVar2 != 0x907) {
            (**(*param_1 + 0x5c))(param_1);
        }
        return -0x7ffffff9;
    }
    return iVar2;
}


/* fcn.00001794 @ 0x1794 */

int __fastcall fcn.00001794(int *param_1)

{
    char cVar1;
    int iVar2;
    int16_t var_20h;
    int32_t var_1eh;
    int32_t var_1ah;
    int8_t var_16h;
    uint32_t var_14h;
    int32_t var_8h;
    
    cVar1 = *0xaa00;
    var_1eh = 0xb000000;
    var_20h = 0x180;
    var_1ah = 0x43010000;
    var_16h = 0;
    fcn.00000108(&var_14h,10,0);
    if (cVar1 == '\0') {
        iVar2 = fcn.00000675(0,0xb,&var_20h,10,&var_14h);
    }
    else {
        if (cVar1 != '\x01') goto code_r0x00001808;
        iVar2 = fcn.00000626(0,0xb,&var_20h,10,&var_14h);
    }
    if (iVar2 < 0) {
        return iVar2;
    }
code_r0x00001808:
    if (var_14h == 0x180) {
        iVar2 = (**(*param_1 + 0x34))(param_1,4,0x27,&var_8h);
        if (-1 < iVar2) {
            iVar2 = 0;
            *(var_8h + 8) = *0xa690;
            *(var_8h + 0xc) = *0xa694;
            *(var_8h + 0x10) = *0xa698;
            *(var_8h + 0x14) = *0xa69c;
        }
        if ((iVar2 != -0x7ffffff9) && (-1 < iVar2)) {
            *(var_8h + 0x18) = 1;
            *(var_8h + 0x19) = cVar1;
        }
    }
    else {
        iVar2 = -0x7ffffff9;
    }
    return iVar2;
}


/* fcn.00001857 @ 0x1857 */

uint32_t __cdecl fcn.00001857(uint noname_0,uint noname_1,int32_t arg_10h)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    int32_t arg_ch;
    ulong uVar4;
    uchar var_138h [2];
    int32_t var_136h;
    int32_t var_132h;
    int16_t var_a0h;
    int32_t var_9eh;
    int32_t var_9ah;
    int32_t var_96h;
    int32_t var_92h;
    int32_t var_8eh;
    
    var_9eh = -0x60000000;
    var_a0h = 0x280;
    var_9ah = 0x21010000;
    var_96h = fcn.00001e8d();
    fcn.00001e41();
    var_92h = fcn.00001e8d();
    uVar4 = fcn.00001e8d();
    puVar3 = uVar4 >> 0x20;
    *puVar3 = uVar4;
    *(puVar3 + 1) = 0;
    uVar4 = fcn.00001e8d();
    arg_ch = uVar4 >> 0x20;
    var_9eh = uVar4;
    if (*0xaa00 == '\0') {
        uVar1 = fcn.00000675(0,arg_ch,&var_a0h,0x93,var_138h);
    }
    else if (*0xaa00 == '\x01') {
        uVar1 = fcn.00000626(0,arg_ch,&var_a0h,0x93,var_138h);
    }
    else {
        uVar1 = 0x80000002;
    }
    if (-1 < uVar1) {
        uVar1 = fcn.00001e8d();
        if (uVar1 < 0x94) {
            iVar2 = fcn.00001e8d();
            uVar1 = -(iVar2 != 0) & 0x80000007;
        }
        else {
            uVar1 = 0x80000005;
        }
    }
    return uVar1;
}


/* fcn.00001a7e @ 0x1a7e */

void __fastcall fcn.00001a7e(int *param_1)

{
    int iVar1;
    uint32_t uVar2;
    bool bVar3;
    int iStack_174;
    uint uStack_170;
    uchar auStack_16c [23];
    uint32_t uStack_155;
    uint32_t uStack_150;
    ushort uStack_14c;
    uchar auStack_14a [330];
    
    uStack_170 = CONCAT31(uStack_170._1_3_,*0xaa00);
    iVar1 = (**(*param_1 + 0x20))(param_1,0xa620,0,0,&iStack_174);
    if (-1 < iVar1) {
        (**(iStack_174 + 4))(param_1,auStack_16c);
        bVar3 = (uStack_155 & 1) != 0;
        if (bVar3) {
            fcn.00009b44(4,auStack_14a);
            uStack_14c = 4;
        }
        uVar2 = bVar3;
        if ((uStack_155 & 2) != 0) {
            fcn.00009b7c(4,auStack_14a + uVar2 * 0x42);
            *(auStack_14a + uVar2 * 0x42 + -2) = 0xb;
            uVar2 = uVar2 + 1;
        }
        if ((uStack_155 & 4) != 0) {
            fcn.00009bbe(auStack_14a + uVar2 * 0x42);
            *(auStack_14a + uVar2 * 0x42 + -2) = 0xc;
            uVar2 = uVar2 + 1;
        }
        if ((uStack_155 & 8) != 0) {
            fcn.00009c04(auStack_14a + uVar2 * 0x42);
            *(auStack_14a + uVar2 * 0x42 + -2) = 0xd;
            uVar2 = uVar2 + 1;
        }
        uStack_150 = uVar2;
        fcn.00001950(&uStack_150,uStack_170);
    }
    return;
}


/* fcn.00009ad9 @ 0x9ad9 */

uint16_t fcn.00009ad9(void)

{
    uint16_t in_AX;
    uint32_t uVar1;
    
    uVar1 = 0;
    while ((*(uVar1 + 0xa740) != *0xfed40f00 || (in_AX = *(uVar1 + 0xa742), in_AX != *0xfed40f02))) {
        uVar1 = uVar1 + 4;
        if (0xb < uVar1) {
            return in_AX & 0xff00;
        }
    }
    return CONCAT11(in_AX >> 8,1);
}


/* fcn.00001b80 @ 0x1b80 */

int fcn.00001b80(void)

{
    char cVar1;
    int iVar2;
    uint noname_0;
    uint noname_0_00;
    uint32_t extraout_ECX;
    uint32_t uVar3;
    
    *0xaa00 = fcn.00009f50();
    if ((*0xaa00 == '\0') && ((*0xfed40000 == -1 || (*0xfed40000 == '\0')))) {
        iVar2 = -0x7ffffff2;
    }
    else if ((*0xaa00 == '\x01') &&
            ((cVar1 = fcn.00009f66(), cVar1 != '\x02' && (cVar1 = fcn.00009f66(), cVar1 != '\x01')))) {
        iVar2 = -0x7ffffffd;
    }
    else {
        iVar2 = fcn.000016ba();
        if ((-1 < iVar2) && (iVar2 = fcn.00001794(), -1 < iVar2)) {
            fcn.00001857(noname_0,noname_0,0x4000000b);
            fcn.00001857(noname_0_00,noname_0_00,0x40000001);
            *0xa9fc = 0;
            uVar3 = extraout_ECX;
            do {
                iVar2 = fcn.00001a7e(uVar3);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar3 = *0xa9fc + 1;
                *0xa9fc = uVar3;
            } while (uVar3 < 8);
        }
    }
    return iVar2;
}


/* fcn.000006dc @ 0x6dc */

uint __fastcall fcn.000006dc(int *param_1)

{
    char cVar1;
    uint32_t extraout_ECX;
    char extraout_DL;
    
    cVar1 = fcn.00009f50();
    if (cVar1 != extraout_DL) {
        if (extraout_DL == '\x01') {
            cVar1 = fcn.00009f66();
            if (cVar1 == '\x02') {
                *0xfed40032 = *0xfed40032 | 2;
code_r0x00000700:
                (**(*param_1 + 0x5c))(param_1);
                return 0;
            }
        }
        else if ((extraout_DL == '\0') && ((cVar1 = fcn.00009f3c(), cVar1 == '\0' || ((extraout_ECX >> 0xd & 1) != 0)))
                ) {
            *0xfed40032 = *0xfed40032 & 0xfc;
            goto code_r0x00000700;
        }
    }
    if ((*0xfed40032 & 8) == 0) {
        *0xfed40032 = *0xfed40032 | 8;
    }
    return 0;
}


/* fcn.00001f90 @ 0x1f90 */

void __fastcall fcn.00001f90(uint32_t *param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    fcn.00001e5c(0x40);
    uVar14 = param_1[3];
    uVar21 = *param_1;
    uVar13 = param_1[1];
    uVar6 = uStack_40 >> 8 & 0xff00ff00 | uStack_40 << 0x18 | (uStack_40 & 0xff00) << 8 | uStack_40 >> 0x18;
    uVar1 = uVar13 >> 2 | uVar13 << 0x1e;
    uVar7 = uVar6 + 0x5a827999 + ((uVar14 ^ param_1[2]) & uVar13 ^ uVar14) + (uVar21 << 5 | uVar21 >> 0x1b) + param_1[4]
    ;
    uVar13 = uStack_3c >> 8 & 0xff00ff00 | uStack_3c << 0x18 | (uStack_3c & 0xff00) << 8 | uStack_3c >> 0x18;
    uVar3 = uVar21 >> 2 | uVar21 << 0x1e;
    uVar14 = uVar13 + (uVar7 * 0x20 | uVar7 >> 0x1b) + ((param_1[2] ^ uVar1) & uVar21 ^ param_1[2]) +
             uVar14 + 0x5a827999;
    uVar21 = uStack_38 >> 8 & 0xff00ff00 | uStack_38 << 0x18 | (uStack_38 & 0xff00) << 8 | uStack_38 >> 0x18;
    uVar8 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar22 = param_1[2] + 0x5a827999 + ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar21;
    uVar7 = uStack_34 >> 8 & 0xff00ff00 | uStack_34 << 0x18 | (uStack_34 & 0xff00) << 8 | uStack_34 >> 0x18;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar14 = uVar1 + 0x5a827999 + ((uVar8 ^ uVar3) & uVar14 ^ uVar3) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar7;
    uVar1 = uStack_30 >> 8 & 0xff00ff00 | uStack_30 << 0x18 | (uStack_30 & 0xff00) << 8 | uStack_30 >> 0x18;
    uVar23 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar4 = uVar3 + 0x5a827999 + ((uVar8 ^ uVar15) & uVar22 ^ uVar8) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar1;
    uVar3 = uStack_2c >> 8 & 0xff00ff00 | uStack_2c << 0x18 | (uStack_2c & 0xff00) << 8 | uStack_2c >> 0x18;
    uVar2 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar8 = uVar8 + ((uVar15 ^ uVar23) & uVar14 ^ uVar15) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999 + uVar3;
    uVar22 = uStack_28 >> 8 & 0xff00ff00 | uStack_28 << 0x18 | (uStack_28 & 0xff00) << 8 | uStack_28 >> 0x18;
    uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar15 = uVar15 + ((uVar23 ^ uVar2) & uVar4 ^ uVar23) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999 + uVar22;
    uVar4 = uStack_24 >> 8 & 0xff00ff00 | uStack_24 << 0x18 | (uStack_24 & 0xff00) << 8 | uStack_24 >> 0x18;
    uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar23 = uVar23 + ((uVar2 ^ uVar5) & uVar8 ^ uVar2) + (uVar15 * 0x20 | uVar15 >> 0x1b) + 0x5a827999 + uVar4;
    uVar8 = uStack_20 >> 8 & 0xff00ff00 | uStack_20 << 0x18 | (uStack_20 & 0xff00) << 8 | uStack_20 >> 0x18;
    uVar16 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar2 = uVar2 + ((uVar9 ^ uVar5) & uVar15 ^ uVar5) + (uVar23 * 0x20 | uVar23 >> 0x1b) + 0x5a827999 + uVar8;
    uVar15 = uStack_1c >> 8 & 0xff00ff00 | uStack_1c << 0x18 | (uStack_1c & 0xff00) << 8 | uStack_1c >> 0x18;
    uVar24 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar5 = uVar5 + ((uVar9 ^ uVar16) & uVar23 ^ uVar9) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999 + uVar15;
    uVar23 = uStack_18 >> 8 & 0xff00ff00 | uStack_18 << 0x18 | (uStack_18 & 0xff00) << 8 | uStack_18 >> 0x18;
    uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar9 = uVar9 + ((uVar16 ^ uVar24) & uVar2 ^ uVar16) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999 + uVar23;
    uVar2 = uStack_14 >> 8 & 0xff00ff00 | uStack_14 << 0x18 | (uStack_14 & 0xff00) << 8 | uStack_14 >> 0x18;
    uVar25 = (uVar24 ^ (uVar24 ^ uVar14) & uVar5) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar2 + uVar16 + 0x5a827999;
    uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar17 = uStack_10 >> 8 & 0xff00ff00 | uStack_10 << 0x18 | (uStack_10 & 0xff00) << 8 | uStack_10 >> 0x18;
    uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar9 = ((uVar16 ^ uVar14) & uVar9 ^ uVar14) + (uVar25 * 0x20 | uVar25 >> 0x1b) + uVar17 + uVar24 + 0x5a827999;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar5 = uStack_c >> 8 & 0xff00ff00 | uStack_c << 0x18 | (uStack_c & 0xff00) << 8 | uStack_c >> 0x18;
    uVar11 = ((uVar10 ^ uVar16) & uVar25 ^ uVar16) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar5 + uVar14 + 0x5a827999;
    uVar24 = uStack_8 >> 8 & 0xff00ff00 | uStack_8 << 0x18 | (uStack_8 & 0xff00) << 8 | uStack_8 >> 0x18;
    uVar16 = (uVar10 ^ (uVar10 ^ uVar26) & uVar9) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar24 + uVar16 + 0x5a827999;
    uVar25 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar18 = uStack_4 >> 8 & 0xff00ff00 | uStack_4 << 0x18 | (uStack_4 & 0xff00) << 8 | uStack_4 >> 0x18;
    uVar14 = uVar6 ^ uVar5 ^ uVar8 ^ uVar21;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar9 = uVar18 + (uVar16 * 0x20 | uVar16 >> 0x1b) + ((uVar26 ^ uVar25) & uVar11 ^ uVar26) + uVar10 + 0x5a827999;
    uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar26 = uVar26 + ((uVar25 ^ uVar12) & uVar16 ^ uVar25) + (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x5a827999 + uVar14;
    uVar13 = uVar24 ^ uVar15 ^ uVar7 ^ uVar13;
    uVar16 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar25 = uVar25 + ((uVar12 ^ uVar10) & uVar9 ^ uVar12) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x5a827999 + uVar16;
    uVar21 = uVar18 ^ uVar23 ^ uVar1 ^ uVar21;
    uVar9 = uVar21 << 1 | uVar21 < 0;
    uVar27 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar12 = uVar12 + ((uVar19 ^ uVar10) & uVar26 ^ uVar10) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x5a827999 + uVar9;
    uVar7 = uVar14 ^ uVar2 ^ uVar3 ^ uVar7;
    uVar6 = uVar7 << 1 | uVar7 < 0;
    uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar10 = uVar10 + ((uVar19 ^ uVar27) & uVar25 ^ uVar19) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x5a827999 + uVar6;
    uVar21 = uVar17 ^ uVar22 ^ uVar1 ^ uVar16;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar19 = uVar19 + (uVar27 ^ uVar11 ^ uVar12) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x6ed9eba1 + uVar21;
    uVar13 = uVar5 ^ uVar4 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar27 = uVar27 + (uVar11 ^ uVar26 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar13;
    uVar7 = uVar24 ^ uVar8 ^ uVar22 ^ uVar6;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar11 = uVar11 + (uVar19 ^ uVar26 ^ uVar25) + (uVar27 * 0x20 | uVar27 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar1 = uVar18 ^ uVar15 ^ uVar4 ^ uVar21;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar26 = uVar26 + (uVar20 ^ uVar27 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar14 ^ uVar23 ^ uVar8 ^ uVar13;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar25 = uVar25 + (uVar20 ^ uVar19 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar3;
    uVar22 = uVar2 ^ uVar15 ^ uVar7 ^ uVar16;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar20 = uVar20 + (uVar19 ^ uVar12 ^ uVar26) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar22;
    uVar4 = uVar17 ^ uVar23 ^ uVar1 ^ uVar9;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar10 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar19 = uVar19 + (uVar12 ^ uVar11 ^ uVar25) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar8 = uVar5 ^ uVar2 ^ uVar3 ^ uVar6;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar26 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar12 = uVar12 + (uVar20 ^ uVar11 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar8;
    uVar15 = uVar24 ^ uVar17 ^ uVar22 ^ uVar21;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar11 = uVar11 + (uVar26 ^ uVar19 ^ uVar10) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar15;
    uVar23 = uVar18 ^ uVar5 ^ uVar4 ^ uVar13;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar25 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar10 = uVar10 + (uVar26 ^ uVar20 ^ uVar12) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar23;
    uVar2 = uVar14 ^ uVar24 ^ uVar8 ^ uVar7;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = uVar26 + (uVar20 ^ uVar25 ^ uVar11) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar5 = uVar18 ^ uVar15 ^ uVar1 ^ uVar16;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar24 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar20 = uVar20 + (uVar25 ^ uVar12 ^ uVar10) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar14 = uVar14 ^ uVar23 ^ uVar3 ^ uVar9;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar17 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar25 = uVar25 + (uVar26 ^ uVar12 ^ uVar24) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar14;
    uVar16 = uVar2 ^ uVar22 ^ uVar6 ^ uVar16;
    uVar16 = uVar16 << 1 | uVar16 < 0;
    uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar12 = uVar12 + (uVar17 ^ uVar20 ^ uVar24) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar16;
    uVar9 = uVar5 ^ uVar4 ^ uVar21 ^ uVar9;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar24 = uVar24 + (uVar17 ^ uVar18 ^ uVar25) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar6 = uVar14 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar17 = uVar17 + (uVar18 ^ uVar11 ^ uVar12) + (uVar24 * 0x20 | uVar24 >> 0x1b) + 0x6ed9eba1 + uVar6;
    uVar21 = uVar15 ^ uVar7 ^ uVar21 ^ uVar16;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar10 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar18 = uVar18 + (uVar11 ^ uVar26 ^ uVar24) + (uVar17 * 0x20 | uVar17 >> 0x1b) + 0x6ed9eba1 + uVar21;
    uVar13 = uVar23 ^ uVar1 ^ uVar13 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar24 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar11 = uVar11 + (uVar17 ^ uVar26 ^ uVar10) + (uVar18 * 0x20 | uVar18 >> 0x1b) + 0x6ed9eba1 + uVar13;
    uVar7 = uVar2 ^ uVar3 ^ uVar7 ^ uVar6;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar17 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar26 = uVar26 + (uVar24 ^ uVar18 ^ uVar10) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar1 = uVar5 ^ uVar22 ^ uVar1 ^ uVar21;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar10 = uVar10 + (uVar24 ^ uVar17 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar14 ^ uVar4 ^ uVar3 ^ uVar13;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar25 | uVar26) & uVar17 | uVar25 & uVar26) + uVar3 + uVar24 + 0x8f1bbcdc;
    uVar22 = uVar8 ^ uVar22 ^ uVar7 ^ uVar16;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar11 | uVar10) & uVar25 | uVar11 & uVar10) + uVar22 + uVar17 + 0x8f1bbcdc;
    uVar4 = uVar15 ^ uVar4 ^ uVar1 ^ uVar9;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar18 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar24 | uVar12) & uVar11 | uVar24 & uVar12) + uVar4 + uVar25 + 0x8f1bbcdc;
    uVar8 = uVar23 ^ uVar8 ^ uVar3 ^ uVar6;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar15 = uVar2 ^ uVar15 ^ uVar22 ^ uVar21;
    uVar25 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar18 | uVar10) & uVar12 | uVar18 & uVar10) + 0x8f1bbcdc + uVar8 + uVar11;
    uVar11 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar10 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
             ((uVar11 | uVar24) & uVar18 | uVar11 & uVar24) + uVar15 + uVar12 + 0x8f1bbcdc;
    uVar23 = uVar5 ^ uVar23 ^ uVar4 ^ uVar13;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar26 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar17 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar26 | uVar25) & uVar11 | uVar26 & uVar25) + uVar23 + uVar18 + 0x8f1bbcdc;
    uVar2 = uVar14 ^ uVar2 ^ uVar8 ^ uVar7;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar18 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar17 | uVar10) & uVar26 | uVar17 & uVar10) + uVar2 + uVar11 + 0x8f1bbcdc;
    uVar5 = uVar5 ^ uVar15 ^ uVar1 ^ uVar16;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar12 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar25 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar24 | uVar18) & uVar17 | uVar24 & uVar18) + uVar5 + uVar26 + 0x8f1bbcdc;
    uVar14 = uVar14 ^ uVar23 ^ uVar3 ^ uVar9;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar11 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
             ((uVar12 | uVar10) & uVar18 | uVar12 & uVar10) + uVar14 + uVar17 + 0x8f1bbcdc;
    uVar16 = uVar2 ^ uVar22 ^ uVar6 ^ uVar16;
    uVar24 = uVar16 << 1 | uVar16 < 0;
    uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar16 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
             ((uVar10 | uVar25) & uVar12 | uVar10 & uVar25) + uVar24 + uVar18 + 0x8f1bbcdc;
    uVar9 = uVar5 ^ uVar4 ^ uVar21 ^ uVar9;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar25 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar26 | uVar11) & uVar10 | uVar26 & uVar11) + uVar9 + uVar12 + 0x8f1bbcdc;
    uVar6 = uVar14 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar18 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar12 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x8f1bbcdc +
             ((uVar18 | uVar16) & uVar26 | uVar18 & uVar16) + uVar6 + uVar10;
    uVar21 = uVar15 ^ uVar7 ^ uVar21 ^ uVar24;
    uVar10 = uVar21 << 1 | uVar21 < 0;
    uVar11 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar25 | uVar12) & uVar18 | uVar25 & uVar12) + uVar10 + uVar26 + 0x8f1bbcdc;
    uVar21 = uVar23 ^ uVar1 ^ uVar13 ^ uVar9;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x8f1bbcdc +
             ((uVar26 | uVar16) & uVar12 | uVar26 & uVar16) + uVar21 + uVar18;
    uVar7 = uVar2 ^ uVar3 ^ uVar7 ^ uVar6;
    uVar16 = uVar7 << 1 | uVar7 < 0;
    uVar18 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar7 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x8f1bbcdc +
            ((uVar17 | uVar11) & uVar26 | uVar17 & uVar11) + uVar16 + uVar12;
    uVar1 = uVar5 ^ uVar22 ^ uVar1 ^ uVar10;
    uVar25 = uVar1 << 1 | uVar1 < 0;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar1 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
            ((uVar18 | uVar13) & uVar17 | uVar18 & uVar13) + uVar25 + uVar26;
    uVar13 = uVar14 ^ uVar4 ^ uVar3 ^ uVar21;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar12 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + 0x8f1bbcdc + ((uVar11 | uVar7) & uVar18 | uVar11 & uVar7) + uVar13 + uVar17
    ;
    uVar7 = uVar8 ^ uVar22 ^ uVar16 ^ uVar24;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar26 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar22 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x8f1bbcdc + ((uVar1 | uVar12) & uVar11 | uVar1 & uVar12) + uVar7 + uVar18
    ;
    uVar4 = uVar15 ^ uVar4 ^ uVar25 ^ uVar9;
    uVar1 = uVar23 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar17 = uVar4 << 1 | uVar4 < 0;
    uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar26 | uVar3) & uVar12 | uVar26 & uVar3) + uVar17 + uVar11;
    uVar8 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar3 = uVar2 ^ uVar15 ^ uVar7 ^ uVar10;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar4 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
            ((uVar8 | uVar22) & uVar26 | uVar8 & uVar22) + 0x8f1bbcdc + uVar1 + uVar12;
    uVar12 = (uVar4 * 0x20 | uVar4 >> 0x1b) + 0xca62c1d6 + (uVar8 ^ uVar11 ^ uVar18) + uVar3 + uVar26;
    uVar18 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar22 = uVar5 ^ uVar23 ^ uVar17 ^ uVar21;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar23 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar18 ^ uVar4) + uVar22 + uVar8;
    uVar4 = uVar14 ^ uVar2 ^ uVar1 ^ uVar16;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar11 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar18 ^ uVar15) + uVar4 + uVar11;
    uVar8 = uVar5 ^ uVar3 ^ uVar25 ^ uVar24;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar2 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar23 = (uVar11 * 0x20 | uVar11 >> 0x1b) + 0xca62c1d6 + (uVar26 ^ uVar23 ^ uVar15) + uVar8 + uVar18;
    uVar14 = uVar14 ^ uVar22 ^ uVar13 ^ uVar9;
    uStack_40 = uVar14 << 1 | uVar14 < 0;
    uVar5 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar14 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar26 ^ uVar2 ^ uVar11) + uStack_40 + uVar15;
    uVar24 = uVar4 ^ uVar7 ^ uVar6 ^ uVar24;
    uStack_3c = uVar24 << 1 | uVar24 < 0;
    uVar24 = (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar5 ^ uVar23) + uStack_3c + uVar26;
    uVar11 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar9 = uVar8 ^ uVar17 ^ uVar10 ^ uVar9;
    uStack_38 = uVar9 << 1 | uVar9 < 0;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar23 = (uVar24 * 0x20 | uVar24 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar11 ^ uVar14) + uStack_38 + uVar2;
    uVar6 = uStack_40 ^ uVar1 ^ uVar21 ^ uVar6;
    uStack_34 = uVar6 << 1 | uVar6 < 0;
    uVar9 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar5 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar24 ^ uVar11 ^ uVar15) + uStack_34 + uVar5;
    uVar14 = uVar3 ^ uVar16 ^ uVar10 ^ uStack_3c;
    uStack_30 = uVar14 << 1 | uVar14 < 0;
    uVar2 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar6 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar23 ^ uVar15) + uStack_30 + uVar11;
    uVar14 = uVar22 ^ uVar25 ^ uVar21 ^ uStack_38;
    uStack_2c = uVar14 << 1 | uVar14 < 0;
    uVar23 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar21 = (uVar6 * 0x20 | uVar6 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar2 ^ uVar5) + uStack_2c + uVar15;
    uVar14 = uVar4 ^ uVar13 ^ uVar16 ^ uStack_34;
    uStack_28 = uVar14 << 1 | uVar14 < 0;
    uVar24 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar5 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar23 ^ uVar6) + uStack_28 + uVar9;
    uVar14 = uVar8 ^ uVar7 ^ uVar25 ^ uStack_30;
    uStack_24 = uVar14 << 1 | uVar14 < 0;
    uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar14 = (uVar23 ^ uVar24 ^ uVar21) + uStack_24 + uVar2 + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6;
    uVar21 = uStack_40 ^ uVar17 ^ uVar13 ^ uStack_2c;
    uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar13 = uVar1 ^ uVar7 ^ uStack_28 ^ uStack_3c;
    uStack_20 = uVar21 << 1 | uVar21 < 0;
    uStack_1c = uVar13 << 1 | uVar13 < 0;
    uVar21 = (uVar14 * 0x20 | uVar14 >> 0x1b) + (uVar5 ^ uVar24 ^ uVar15) + uStack_20 + uVar23 + 0xca62c1d6;
    uVar2 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar7 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0xca62c1d6 + (uVar16 ^ uVar14 ^ uVar15) + uStack_1c + uVar24;
    uVar14 = uVar3 ^ uVar17 ^ uStack_24 ^ uStack_38;
    uVar23 = uVar21 >> 2 | uVar21 * 0x40000000;
    uStack_18 = uVar14 << 1 | uVar14 < 0;
    uVar13 = uVar22 ^ uVar1 ^ uStack_20 ^ uStack_34;
    uVar14 = (uVar16 ^ uVar2 ^ uVar21) + uStack_18 + uVar15 + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6;
    uStack_14 = uVar13 << 1 | uVar13 < 0;
    uVar15 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar21 = (uVar2 ^ uVar23 ^ uVar7) + uStack_14 + uVar16 + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6;
    uVar7 = uVar4 ^ uVar3 ^ uStack_1c ^ uStack_30;
    uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
    uStack_10 = uVar7 << 1 | uVar7 < 0;
    uVar7 = uVar8 ^ uVar22 ^ uStack_18 ^ uStack_2c;
    uStack_c = uVar7 << 1 | uVar7 < 0;
    uVar14 = (uVar23 ^ uVar15 ^ uVar14) + uStack_10 + uVar2 + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0xca62c1d6;
    uVar3 = (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6 + (uVar21 ^ uVar15 ^ uVar13) + uStack_c + uVar23;
    uVar7 = uStack_40 ^ uVar4 ^ uStack_14 ^ uStack_28;
    uVar21 = uVar21 >> 2 | uVar21 * 0x40000000;
    uStack_8 = uVar7 << 1 | uVar7 < 0;
    uVar1 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar7 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar21 ^ uVar14 ^ uVar13) + uStack_8 + uVar15;
    uVar14 = uVar8 ^ uStack_10 ^ uStack_24 ^ uStack_3c;
    uStack_4 = uVar14 << 1 | uVar14 < 0;
    param_1[1] = param_1[1] + uVar7;
    param_1[3] = param_1[3] + uVar1;
    param_1[4] = param_1[4] + uVar21;
    *param_1 = (uVar21 ^ uVar1 ^ uVar3) + *param_1 + uStack_4 + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6 + uVar13;
    param_1[2] = param_1[2] + (uVar3 >> 2 | uVar3 * 0x40000000);
    fcn.00000108(&uStack_40,0x40,0);
    return;
}


/* fcn.00003357 @ 0x3357 */

uint __fastcall fcn.00003357(int param_1,uchar *param_2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    int iVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    
    iVar25 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
    uVar3 = CONCAT31(CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]),param_2[7]);
    uVar4 = CONCAT31(CONCAT21(CONCAT11(param_2[8],param_2[9]),param_2[10]),param_2[0xb]);
    uVar5 = CONCAT31(CONCAT21(CONCAT11(param_2[0xc],param_2[0xd]),param_2[0xe]),param_2[0xf]);
    uVar6 = CONCAT31(CONCAT21(CONCAT11(param_2[0x10],param_2[0x11]),param_2[0x12]),param_2[0x13]);
    uVar7 = CONCAT31(CONCAT21(CONCAT11(param_2[0x14],param_2[0x15]),param_2[0x16]),param_2[0x17]);
    uVar8 = CONCAT31(CONCAT21(CONCAT11(param_2[0x18],param_2[0x19]),param_2[0x1a]),param_2[0x1b]);
    uVar9 = CONCAT31(CONCAT21(CONCAT11(param_2[0x1c],param_2[0x1d]),param_2[0x1e]),param_2[0x1f]);
    uVar10 = CONCAT31(CONCAT21(CONCAT11(param_2[0x20],param_2[0x21]),param_2[0x22]),param_2[0x23]);
    uVar11 = CONCAT31(CONCAT21(CONCAT11(param_2[0x24],param_2[0x25]),param_2[0x26]),param_2[0x27]);
    uVar12 = CONCAT31(CONCAT21(CONCAT11(param_2[0x28],param_2[0x29]),param_2[0x2a]),param_2[0x2b]);
    uVar13 = CONCAT31(CONCAT21(CONCAT11(param_2[0x2c],param_2[0x2d]),param_2[0x2e]),param_2[0x2f]);
    uVar14 = CONCAT31(CONCAT21(CONCAT11(param_2[0x30],param_2[0x31]),param_2[0x32]),param_2[0x33]);
    uVar15 = CONCAT31(CONCAT21(CONCAT11(param_2[0x34],param_2[0x35]),param_2[0x36]),param_2[0x37]);
    uVar1 = CONCAT11(param_2[0x38],param_2[0x39]);
    uVar16 = CONCAT31(CONCAT21(uVar1,param_2[0x3a]),param_2[0x3b]);
    uVar2 = CONCAT11(param_2[0x3c],param_2[0x3d]);
    uVar17 = CONCAT31(CONCAT21(uVar2,param_2[0x3e]),param_2[0x3f]);
    uVar22 = *(param_1 + 8);
    uVar20 = *(param_1 + 0xc);
    iVar18 = iVar25 + 0x428a2f98 +
             ((*(param_1 + 0x20) ^ *(param_1 + 0x1c)) & *(param_1 + 0x18) ^ *(param_1 + 0x20)) +
             ((*(param_1 + 0x18) >> 0xb | *(param_1 + 0x18) << 0x15) ^
              (*(param_1 + 0x18) << 7 | *(param_1 + 0x18) >> 0x19) ^
             (*(param_1 + 0x18) >> 6 | *(param_1 + 0x18) << 0x1a)) + *(param_1 + 0x24);
    uVar26 = *(param_1 + 0x14) + iVar18;
    uVar23 = ((uVar20 | uVar22) & *(param_1 + 0x10) | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 << 0x13) ^ (uVar22 << 10 | uVar22 >> 0x16) ^ (uVar22 >> 2 | uVar22 << 0x1e)) +
             iVar18;
    iVar18 = *(param_1 + 0x20) + 0x71374491 +
             ((*(param_1 + 0x1c) ^ *(param_1 + 0x18)) & uVar26 ^ *(param_1 + 0x1c)) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar3;
    uVar28 = *(param_1 + 0x10) + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    iVar18 = *(param_1 + 0x1c) + -0x4a3f0431 +
             ((*(param_1 + 0x18) ^ uVar26) & uVar28 ^ *(param_1 + 0x18)) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar4;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    iVar18 = *(param_1 + 0x18) + -0x164a245b +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    iVar18 = uVar26 + 0x3956c25b +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    iVar18 = uVar28 + 0x59f111f1 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar7;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    iVar18 = uVar20 + 0x923f82a4 +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar8;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    iVar18 = uVar22 + 0xab1c5ed5 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar9;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    iVar18 = uVar23 + 0xd807aa98 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar10;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    iVar18 = uVar27 + 0x12835b01 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar11;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    iVar18 = uVar29 + 0x243185be +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar12;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    iVar18 = uVar21 + 0x550c7dc3 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    iVar18 = uVar26 + 0x72be5d74 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    iVar18 = uVar28 + 0x80deb1fe +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar15;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    iVar18 = uVar20 + 0x9bdc06a7 +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar16;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    iVar18 = uVar22 + 0xc19bf174 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar17;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar19 = ((uVar16 << 0xf | uVar1 >> 1) ^ (uVar16 << 0xd | uVar1 >> 3) ^ CONCAT21(uVar1,param_2[0x3a]) >> 2) +
             uVar11 + ((uVar3 << 0xe | CONCAT11(param_2[4],param_2[5]) >> 2) ^ (uVar3 >> 7 | uVar3 << 0x19) ^
                      uVar3 >> 3) + iVar25;
    iVar18 = uVar23 + 0xe49b69c1 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar19;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar3 = uVar3 + ((uVar4 << 0xe | CONCAT11(param_2[8],param_2[9]) >> 2) ^ (uVar4 >> 7 | uVar4 << 0x19) ^ uVar4 >> 3)
                    + ((uVar17 << 0xf | uVar2 >> 1) ^ (uVar17 << 0xd | uVar2 >> 3) ^ CONCAT21(uVar2,param_2[0x3e]) >> 2
                      ) + uVar12;
    iVar18 = uVar27 + 0xefbe4786 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar3;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar4 = uVar4 + ((uVar5 << 0xe | CONCAT11(param_2[0xc],param_2[0xd]) >> 2) ^ (uVar5 >> 7 | uVar5 << 0x19) ^
                    uVar5 >> 3) +
                    ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar13;
    iVar18 = uVar29 + 0xfc19dc6 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar4;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar5 = uVar5 + ((uVar6 << 0xe | CONCAT11(param_2[0x10],param_2[0x11]) >> 2) ^ (uVar6 >> 7 | uVar6 << 0x19) ^
                    uVar6 >> 3) +
                    ((uVar3 * 0x8000 | uVar3 >> 0x11) ^ (uVar3 * 0x2000 | uVar3 >> 0x13) ^ uVar3 >> 10) + uVar14;
    iVar18 = uVar21 + 0x240ca1cc +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar6 = uVar6 + ((uVar7 << 0xe | CONCAT11(param_2[0x14],param_2[0x15]) >> 2) ^ (uVar7 >> 7 | uVar7 << 0x19) ^
                    uVar7 >> 3) +
                    ((uVar4 * 0x8000 | uVar4 >> 0x11) ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ uVar4 >> 10) + uVar15;
    iVar18 = uVar26 + 0x2de92c6f +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar7 = uVar7 + ((uVar8 << 0xe | CONCAT11(param_2[0x18],param_2[0x19]) >> 2) ^ (uVar8 >> 7 | uVar8 << 0x19) ^
                    uVar8 >> 3) +
                    ((uVar5 * 0x8000 | uVar5 >> 0x11) ^ (uVar5 * 0x2000 | uVar5 >> 0x13) ^ uVar5 >> 10) + uVar16;
    iVar18 = uVar28 + 0x4a7484aa +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar7;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar8 = uVar8 + ((uVar9 << 0xe | CONCAT11(param_2[0x1c],param_2[0x1d]) >> 2) ^ (uVar9 >> 7 | uVar9 << 0x19) ^
                    uVar9 >> 3) +
                    ((uVar6 * 0x8000 | uVar6 >> 0x11) ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ uVar6 >> 10) + uVar17;
    iVar18 = uVar20 + 0x5cb0a9dc +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar8;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar9 = uVar9 + ((uVar10 << 0xe | CONCAT11(param_2[0x20],param_2[0x21]) >> 2) ^ (uVar10 >> 7 | uVar10 << 0x19) ^
                    uVar10 >> 3) +
                    ((uVar7 * 0x8000 | uVar7 >> 0x11) ^ (uVar7 * 0x2000 | uVar7 >> 0x13) ^ uVar7 >> 10) + uVar19;
    iVar18 = uVar22 + 0x76f988da +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar9;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar10 = uVar10 + ((uVar11 << 0xe | CONCAT11(param_2[0x24],param_2[0x25]) >> 2) ^ (uVar11 >> 7 | uVar11 << 0x19) ^
                      uVar11 >> 3) +
                      ((uVar8 * 0x8000 | uVar8 >> 0x11) ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ uVar8 >> 10) + uVar3;
    iVar18 = uVar23 + 0x983e5152 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar10;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar11 = ((uVar9 * 0x8000 | uVar9 >> 0x11) ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ uVar9 >> 10) + uVar4 +
             ((uVar12 << 0xe | CONCAT11(param_2[0x28],param_2[0x29]) >> 2) ^ (uVar12 >> 7 | uVar12 << 0x19) ^
             uVar12 >> 3) + uVar11;
    iVar18 = uVar27 + 0xa831c66d +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar11;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar12 = ((uVar10 * 0x8000 | uVar10 >> 0x11) ^ (uVar10 * 0x2000 | uVar10 >> 0x13) ^ uVar10 >> 10) + uVar5 +
             ((uVar13 << 0xe | CONCAT11(param_2[0x2c],param_2[0x2d]) >> 2) ^ (uVar13 >> 7 | uVar13 << 0x19) ^
             uVar13 >> 3) + uVar12;
    iVar18 = uVar29 + 0xb00327c8 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar12;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar13 = ((uVar11 * 0x8000 | uVar11 >> 0x11) ^ (uVar11 * 0x2000 | uVar11 >> 0x13) ^ uVar11 >> 10) + uVar6 +
             ((uVar14 << 0xe | CONCAT11(param_2[0x30],param_2[0x31]) >> 2) ^ (uVar14 >> 7 | uVar14 << 0x19) ^
             uVar14 >> 3) + uVar13;
    iVar18 = uVar21 + 0xbf597fc7 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar14 = ((uVar12 * 0x8000 | uVar12 >> 0x11) ^ (uVar12 * 0x2000 | uVar12 >> 0x13) ^ uVar12 >> 10) + uVar7 +
             ((uVar15 << 0xe | CONCAT11(param_2[0x34],param_2[0x35]) >> 2) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
             uVar15 >> 3) + uVar14;
    iVar18 = uVar26 + 0xc6e00bf3 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar15 = ((uVar13 * 0x8000 | uVar13 >> 0x11) ^ (uVar13 * 0x2000 | uVar13 >> 0x13) ^ uVar13 >> 10) + uVar8 +
             ((uVar16 << 0xe | uVar1 >> 2) ^ (uVar16 >> 7 | uVar16 << 0x19) ^ uVar16 >> 3) + uVar15;
    iVar18 = uVar28 + 0xd5a79147 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar15;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar16 = ((uVar14 * 0x8000 | uVar14 >> 0x11) ^ (uVar14 * 0x2000 | uVar14 >> 0x13) ^ uVar14 >> 10) + uVar9 +
             ((uVar17 << 0xe | uVar2 >> 2) ^ (uVar17 >> 7 | uVar17 << 0x19) ^ uVar17 >> 3) + uVar16;
    iVar18 = uVar20 + 0x6ca6351 +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar16;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar17 = ((uVar15 * 0x8000 | uVar15 >> 0x11) ^ (uVar15 * 0x2000 | uVar15 >> 0x13) ^ uVar15 >> 10) + uVar10 +
             ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) + uVar17;
    iVar18 = uVar22 + 0x14292967 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar17;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar19 = ((uVar16 * 0x8000 | uVar16 >> 0x11) ^ (uVar16 * 0x2000 | uVar16 >> 0x13) ^ uVar16 >> 10) + uVar11 +
             ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) + uVar19;
    iVar18 = uVar23 + 0x27b70a85 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar19;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar3 = ((uVar17 * 0x8000 | uVar17 >> 0x11) ^ (uVar17 * 0x2000 | uVar17 >> 0x13) ^ uVar17 >> 10) + uVar12 +
            ((uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000) ^ uVar4 >> 3) + uVar3;
    iVar18 = uVar27 + 0x2e1b2138 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar3;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar4 = ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar13 +
            ((uVar5 * 0x4000 | uVar5 >> 0x12) ^ (uVar5 >> 7 | uVar5 * 0x2000000) ^ uVar5 >> 3) + uVar4;
    iVar18 = uVar29 + 0x4d2c6dfc +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar4;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar5 = ((uVar3 * 0x8000 | uVar3 >> 0x11) ^ (uVar3 * 0x2000 | uVar3 >> 0x13) ^ uVar3 >> 10) + uVar14 +
            ((uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 >> 7 | uVar6 * 0x2000000) ^ uVar6 >> 3) + uVar5;
    iVar18 = uVar21 + 0x53380d13 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar6 = ((uVar4 * 0x8000 | uVar4 >> 0x11) ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ uVar4 >> 10) + uVar15 +
            ((uVar7 * 0x4000 | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 * 0x2000000) ^ uVar7 >> 3) + uVar6;
    iVar18 = uVar26 + 0x650a7354 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar7 = ((uVar5 * 0x8000 | uVar5 >> 0x11) ^ (uVar5 * 0x2000 | uVar5 >> 0x13) ^ uVar5 >> 10) + uVar16 +
            ((uVar8 * 0x4000 | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 * 0x2000000) ^ uVar8 >> 3) + uVar7;
    iVar18 = uVar28 + 0x766a0abb +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar7;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar8 = ((uVar6 * 0x8000 | uVar6 >> 0x11) ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ uVar6 >> 10) + uVar17 +
            ((uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000) ^ uVar9 >> 3) + uVar8;
    iVar18 = uVar20 + 0x81c2c92e +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar8;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar9 = ((uVar7 * 0x8000 | uVar7 >> 0x11) ^ (uVar7 * 0x2000 | uVar7 >> 0x13) ^ uVar7 >> 10) + uVar19 +
            ((uVar10 * 0x4000 | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 * 0x2000000) ^ uVar10 >> 3) + uVar9;
    iVar18 = uVar22 + 0x92722c85 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar9;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar10 = ((uVar8 * 0x8000 | uVar8 >> 0x11) ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ uVar8 >> 10) + uVar3 +
             ((uVar11 * 0x4000 | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3) + uVar10;
    iVar18 = uVar23 + 0xa2bfe8a1 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar10;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar11 = ((uVar9 * 0x8000 | uVar9 >> 0x11) ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ uVar9 >> 10) + uVar4 +
             ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3) + uVar11;
    iVar18 = uVar27 + 0xa81a664b +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar11;
    uVar28 = uVar28 + iVar18;
    uVar24 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar12 = ((uVar10 * 0x8000 | uVar10 >> 0x11) ^ (uVar10 * 0x2000 | uVar10 >> 0x13) ^ uVar10 >> 10) + uVar5 +
             ((uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^ uVar13 >> 3) + uVar12;
    iVar18 = uVar29 + 0xc24b8b70 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar12;
    uVar20 = uVar20 + iVar18;
    uVar27 = ((uVar23 | uVar24) & uVar22 | uVar23 & uVar24) +
             ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 * 0x400 | uVar24 >> 0x16) ^
             (uVar24 >> 2 | uVar24 * 0x40000000)) + iVar18;
    uVar13 = ((uVar11 * 0x8000 | uVar11 >> 0x11) ^ (uVar11 * 0x2000 | uVar11 >> 0x13) ^ uVar11 >> 10) + uVar6 +
             ((uVar14 * 0x4000 | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 * 0x2000000) ^ uVar14 >> 3) + uVar13;
    iVar18 = uVar21 + 0xc76c51a3 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar29 = ((uVar24 | uVar27) & uVar23 | uVar24 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar14 = ((uVar12 * 0x8000 | uVar12 >> 0x11) ^ (uVar12 * 0x2000 | uVar12 >> 0x13) ^ uVar12 >> 10) + uVar7 +
             ((uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^ uVar15 >> 3) + uVar14;
    iVar18 = uVar26 + 0xd192e819 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar23 = uVar23 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar24 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar15 = ((uVar13 * 0x8000 | uVar13 >> 0x11) ^ (uVar13 * 0x2000 | uVar13 >> 0x13) ^ uVar13 >> 10) + uVar8 +
             ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^ uVar16 >> 3) + uVar15;
    iVar18 = uVar28 + 0xd6990624 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar15;
    uVar24 = uVar24 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar16 = ((uVar14 * 0x8000 | uVar14 >> 0x11) ^ (uVar14 * 0x2000 | uVar14 >> 0x13) ^ uVar14 >> 10) + uVar9 +
             ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^ uVar17 >> 3) + uVar16;
    iVar18 = uVar20 + 0xf40e3585 +
             ((uVar23 ^ uVar22) & uVar24 ^ uVar22) +
             ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 * 0x80 | uVar24 >> 0x19) ^
             (uVar24 >> 6 | uVar24 * 0x4000000)) + uVar16;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar17 = ((uVar15 * 0x8000 | uVar15 >> 0x11) ^ (uVar15 * 0x2000 | uVar15 >> 0x13) ^ uVar15 >> 10) + uVar10 +
             ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) + uVar17;
    iVar18 = uVar22 + 0x106aa070 +
             ((uVar23 ^ uVar24) & uVar27 ^ uVar23) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar17;
    uVar29 = uVar29 + iVar18;
    uVar22 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar19 = ((uVar16 * 0x8000 | uVar16 >> 0x11) ^ (uVar16 * 0x2000 | uVar16 >> 0x13) ^ uVar16 >> 10) + uVar11 +
             ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) + uVar19;
    iVar18 = uVar23 + 0x19a4c116 +
             ((uVar24 ^ uVar27) & uVar29 ^ uVar24) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar19;
    uVar21 = uVar21 + iVar18;
    uVar20 = ((uVar28 | uVar22) & uVar26 | uVar28 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar3 = (uVar4 >> 3 ^ (uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000)) +
            ((uVar17 * 0x8000 | uVar17 >> 0x11) ^ (uVar17 * 0x2000 | uVar17 >> 0x13) ^ uVar17 >> 10) + uVar12 + uVar3;
    iVar18 = uVar24 + 0x1e376c08 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar3;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar4 = (uVar5 >> 3 ^ (uVar5 * 0x4000 | uVar5 >> 0x12) ^ (uVar5 >> 7 | uVar5 * 0x2000000)) +
            ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar13 + uVar4;
    iVar18 = uVar27 + 0x2748774c +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar4;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar20 | uVar23) & uVar22 | uVar20 & uVar23) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar5 = (uVar6 >> 3 ^ (uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 >> 7 | uVar6 * 0x2000000)) +
            ((uVar3 * 0x8000 | uVar3 >> 0x11) ^ (uVar3 * 0x2000 | uVar3 >> 0x13) ^ uVar3 >> 10) + uVar14 + uVar5;
    iVar18 = uVar29 + 0x34b0bcb5 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar20 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar6 = (uVar7 >> 3 ^ (uVar7 * 0x4000 | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 * 0x2000000)) +
            ((uVar4 * 0x8000 | uVar4 >> 0x11) ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ uVar4 >> 10) + uVar15 + uVar6;
    iVar18 = uVar21 + 0x391c0cb3 +
             ((uVar26 ^ uVar28) & uVar22 ^ uVar26) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar20 = uVar20 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar7 = ((uVar5 * 0x8000 | uVar5 >> 0x11) ^ (uVar5 * 0x2000 | uVar5 >> 0x13) ^ uVar5 >> 10) + uVar16 +
            ((uVar8 * 0x4000 | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 * 0x2000000) ^ uVar8 >> 3) + uVar7;
    iVar18 = uVar26 + 0x4ed8aa4a +
             ((uVar28 ^ uVar22) & uVar20 ^ uVar28) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar7;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar8 = (uVar9 >> 3 ^ (uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000)) +
            ((uVar6 * 0x8000 | uVar6 >> 0x11) ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ uVar6 >> 10) + uVar17 + uVar8;
    iVar18 = uVar28 + 0x5b9cca4f +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar22) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar8;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar9 = ((uVar7 * 0x8000 | uVar7 >> 0x11) ^ (uVar7 * 0x2000 | uVar7 >> 0x13) ^ uVar7 >> 10) + uVar19 +
            ((uVar10 * 0x4000 | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 * 0x2000000) ^ uVar10 >> 3) + uVar9;
    iVar18 = uVar22 + 0x682e6ff3 +
             ((uVar20 ^ uVar23) & uVar27 ^ uVar20) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar9;
    uVar29 = uVar29 + iVar18;
    uVar22 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar10 = uVar3 + ((uVar8 * 0x8000 | uVar8 >> 0x11) ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ uVar8 >> 10) +
             ((uVar11 * 0x4000 | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3) + uVar10;
    iVar18 = uVar20 + 0x748f82ee +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar10;
    uVar21 = uVar21 + iVar18;
    uVar20 = ((uVar28 | uVar22) & uVar26 | uVar28 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar11 = (uVar12 >> 3 ^ (uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000)) +
             ((uVar9 * 0x8000 | uVar9 >> 0x11) ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ uVar9 >> 10) + uVar4 + uVar11;
    iVar18 = uVar23 + 0x78a5636f +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar11;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar12 = (uVar13 >> 3 ^ (uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000)) +
             ((uVar10 * 0x8000 | uVar10 >> 0x11) ^ (uVar10 * 0x2000 | uVar10 >> 0x13) ^ uVar10 >> 10) + uVar5 + uVar12;
    iVar18 = uVar27 + 0x84c87814 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar12;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar20 | uVar23) & uVar22 | uVar20 & uVar23) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar13 = (uVar14 >> 3 ^ (uVar14 * 0x4000 | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 * 0x2000000)) +
             ((uVar11 * 0x8000 | uVar11 >> 0x11) ^ (uVar11 * 0x2000 | uVar11 >> 0x13) ^ uVar11 >> 10) + uVar6 + uVar13;
    iVar18 = uVar29 + 0x8cc70208 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar20 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar14 = (uVar15 >> 3 ^ (uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000)) +
             ((uVar12 * 0x8000 | uVar12 >> 0x11) ^ (uVar12 * 0x2000 | uVar12 >> 0x13) ^ uVar12 >> 10) + uVar7 + uVar14;
    iVar18 = uVar21 + 0x90befffa +
             ((uVar26 ^ uVar28) & uVar22 ^ uVar26) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar20 = uVar20 + iVar18;
    uVar24 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar15 = (uVar16 >> 3 ^ (uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000)) +
             ((uVar13 * 0x8000 | uVar13 >> 0x11) ^ (uVar13 * 0x2000 | uVar13 >> 0x13) ^ uVar13 >> 10) + uVar8 + uVar15;
    iVar18 = uVar26 + 0xa4506ceb +
             ((uVar28 ^ uVar22) & uVar20 ^ uVar28) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar15;
    uVar23 = uVar23 + iVar18;
    uVar21 = ((uVar29 | uVar24) & uVar27 | uVar29 & uVar24) +
             ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 * 0x400 | uVar24 >> 0x16) ^
             (uVar24 >> 2 | uVar24 * 0x40000000)) + iVar18;
    iVar18 = uVar28 + 0xbef9a3f7 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar22) +
             ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^ uVar17 >> 3) + uVar9 +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) +
             ((uVar14 * 0x8000 | uVar14 >> 0x11) ^ (uVar14 * 0x2000 | uVar14 >> 0x13) ^ uVar14 >> 10) + uVar16;
    uVar27 = uVar27 + iVar18;
    uVar26 = ((uVar24 | uVar21) & uVar29 | uVar24 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    iVar18 = uVar22 + 0xc67178f2 +
             ((uVar20 ^ uVar23) & uVar27 ^ uVar20) +
             ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) + uVar10 +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) +
             ((uVar15 * 0x8000 | uVar15 >> 0x11) ^ (uVar15 * 0x2000 | uVar15 >> 0x13) ^ uVar15 >> 10) + uVar17;
    *(param_1 + 0xc) = *(param_1 + 0xc) + uVar26;
    *(param_1 + 0x14) = *(param_1 + 0x14) + uVar24;
    *(param_1 + 0x10) = *(param_1 + 0x10) + uVar21;
    *(param_1 + 0x18) = *(param_1 + 0x18) + iVar18 + uVar29;
    *(param_1 + 0x1c) = *(param_1 + 0x1c) + uVar27;
    *(param_1 + 0x20) = *(param_1 + 0x20) + uVar23;
    *(param_1 + 0x24) = *(param_1 + 0x24) + uVar20;
    *(param_1 + 8) =
         ((uVar21 | uVar26) & uVar24 | uVar21 & uVar26) +
         ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^ (uVar26 >> 2 | uVar26 * 0x40000000))
         + *(param_1 + 8) + iVar18;
    return 0;
}


/* fcn.0000a454 @ 0xa454 */

uint64_t __fastcall fcn.0000a454(uint8_t param_1,uint32_t param_2)

{
    uint32_t in_EAX;
    
    if (0x3f < param_1) {
        return 0;
    }
    if (param_1 < 0x20) {
        return CONCAT44(param_2 >> (param_1 & 0x1f),in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
    }
    return param_2 >> (param_1 & 0x1f);
}


/* fcn.00008a62 @ 0x8a62 */

uint __fastcall fcn.00008a62(int param_1,int param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t *puVar14;
    int iVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uchar *puVar28;
    uint32_t uVar29;
    int iVar30;
    uint32_t uStack_310;
    uint32_t uStack_30c;
    uint32_t uStack_308;
    uint32_t uStack_304;
    uint32_t uStack_300;
    uint32_t uStack_2fc;
    uint32_t uStack_2f8;
    uint32_t uStack_2f4;
    uint32_t uStack_2f0;
    uint32_t uStack_2ec;
    uint32_t uStack_2e8;
    uint32_t uStack_2e4;
    uint32_t uStack_2e0;
    uint32_t uStack_2dc;
    uint32_t uStack_2d8;
    uint32_t uStack_2d4;
    int iStack_2d0;
    uint32_t auStack_2cc [17];
    uint32_t *puStack_288;
    uint32_t auStack_284 [28];
    uint32_t auStack_214 [4];
    uint32_t auStack_204 [129];
    
    puStack_288 = param_1 + 8;
    iVar15 = 8;
    do {
        fcn.00001e5c(8);
        iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    iVar15 = 0;
    puVar28 = param_2 + 2;
    do {
        uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar28[-2],puVar28[-1]),*puVar28),puVar28[1]);
        uVar1 = puVar28[2];
        uVar2 = puVar28[3];
        uVar3 = puVar28[4];
        uVar4 = puVar28[5];
        auStack_284[iVar15 * 2 + 1] =
             ((puVar28[-2] << 8 | (uVar10 & 0xffffff) >> 0x10) << 8 | (uVar10 & 0xffff) >> 8) << 8 | puVar28[1];
        auStack_284[iVar15 * 2] = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
        iVar15 = iVar15 + 1;
        puVar28 = puVar28 + 8;
    } while (iVar15 < 0x10);
    puVar14 = auStack_214;
    uStack_308 = 0x40;
    do {
        uVar10 = puVar14[-0x1a];
        uVar16 = puVar14[-0x19];
        uVar17 = puVar14[1];
        uVar5 = (uVar10 >> 8 | uVar16 << 0x18) ^ (uVar10 >> 1 | uVar16 << 0x1f) ^ (uVar10 >> 7 | uVar16 << 0x19);
        uVar29 = (*puVar14 >> 0x13 | uVar17 << 0xd) ^ (uVar17 >> 0x1d | *puVar14 << 3) ^
                 (*puVar14 >> 6 | uVar17 << 0x1a);
        uVar6 = uVar5 + uVar29;
        uVar7 = uVar6 + puVar14[-0x1c];
        puVar14[4] = uVar7 + puVar14[-10];
        puVar14[5] = ((uVar10 << 0x18 | uVar16 >> 8) ^ (uVar10 << 0x1f | uVar16 >> 1) ^ uVar16 >> 7) +
                     ((*puVar14 << 0xd | uVar17 >> 0x13) ^ (uVar17 << 3 | *puVar14 >> 0x1d) ^ uVar17 >> 6) +
                     CARRY4(uVar5,uVar29) + puVar14[-0x1b] + CARRY4(uVar6,puVar14[-0x1c]) + puVar14[-9] +
                     CARRY4(uVar7,puVar14[-10]);
        puVar14 = puVar14 + 2;
        uStack_308 = uStack_308 + -1;
    } while (uStack_308 != 0);
    iVar15 = 0;
    uStack_2f0 = auStack_2cc[0xf];
    uStack_2f4 = auStack_2cc[0xe];
    uStack_300 = auStack_2cc[0xd];
    uStack_304 = auStack_2cc[0xc];
    uStack_308 = auStack_2cc[0xb];
    uStack_2d4 = auStack_2cc[10];
    uStack_2e8 = auStack_2cc[7];
    uStack_2ec = auStack_2cc[6];
    uStack_30c = auStack_2cc[5];
    uStack_310 = auStack_2cc[4];
    uStack_2e0 = auStack_2cc[3];
    uStack_2e4 = auStack_2cc[2];
    uStack_2d8 = auStack_2cc[1];
    iStack_2d0 = 0;
    uStack_2fc = auStack_2cc[9];
    uStack_2f8 = auStack_2cc[8];
    uStack_2dc = auStack_2cc[0];
    do {
        uVar16 = (uStack_2fc >> 9 | uStack_2f8 << 0x17) ^ (uStack_2f8 >> 0x12 | uStack_2fc << 0xe) ^
                 (uStack_2f8 >> 0xe | uStack_2fc << 0x12);
        uVar10 = (uStack_2d4 ^ uStack_304) & uStack_2f8 ^ uStack_304;
        uVar17 = uVar16 + uVar10;
        uVar5 = uVar17 + *(iStack_2d0 + 0xa760);
        uVar6 = uVar5 + *(auStack_284 + iStack_2d0);
        uVar7 = uVar6 + uStack_2f4;
        iVar30 = ((uStack_2fc << 0x17 | uStack_2f8 >> 9) ^ (uStack_2f8 << 0xe | uStack_2fc >> 0x12) ^
                 (uStack_2f8 << 0x12 | uStack_2fc >> 0xe)) + ((uStack_308 ^ uStack_300) & uStack_2fc ^ uStack_300) +
                 CARRY4(uVar16,uVar10) + *(iStack_2d0 + 0xa764) + CARRY4(uVar17,*(iStack_2d0 + 0xa760)) +
                 *(auStack_284 + iStack_2d0 + 4) + CARRY4(uVar5,*(auStack_284 + iStack_2d0)) + uStack_2f0 +
                 CARRY4(uVar6,uStack_2f4);
        uVar10 = uStack_2ec + uVar7;
        uVar16 = uStack_2e8 + iVar30 + CARRY4(uStack_2ec,uVar7);
        uVar17 = (uStack_2dc >> 0x1c | uStack_2d8 << 4) ^ (uStack_2d8 >> 2 | uStack_2dc << 0x1e) ^
                 (uStack_2d8 >> 7 | uStack_2dc << 0x19);
        uVar6 = (uStack_2e4 | uStack_2dc) & uStack_310 | uStack_2e4 & uStack_2dc;
        uVar5 = uVar17 + uVar6;
        uVar11 = uVar5 + uVar7;
        uVar8 = ((uStack_2dc << 4 | uStack_2d8 >> 0x1c) ^ (uStack_2d8 << 0x1e | uStack_2dc >> 2) ^
                (uStack_2d8 << 0x19 | uStack_2dc >> 7)) +
                ((uStack_2e0 | uStack_2d8) & uStack_30c | uStack_2e0 & uStack_2d8) + CARRY4(uVar17,uVar6) + iVar30 +
                CARRY4(uVar5,uVar7);
        uVar5 = (uVar16 >> 9 | uVar10 * 0x800000) ^ (uVar10 >> 0x12 | uVar16 * 0x4000) ^
                (uVar10 >> 0xe | uVar16 * 0x40000);
        uVar17 = (uStack_2d4 ^ uStack_2f8) & uVar10 ^ uStack_2d4;
        uVar6 = uVar5 + uVar17;
        uVar7 = uVar6 + *(iStack_2d0 + 0xa768);
        puVar14 = auStack_284 + iStack_2d0 + 8;
        uVar29 = uVar7 + *puVar14;
        uVar18 = uVar29 + uStack_304;
        iVar30 = ((uVar16 * 0x800000 | uVar10 >> 9) ^ (uVar10 * 0x4000 | uVar16 >> 0x12) ^
                 (uVar10 * 0x40000 | uVar16 >> 0xe)) + ((uStack_308 ^ uStack_2fc) & uVar16 ^ uStack_308) +
                 CARRY4(uVar5,uVar17) + *(iStack_2d0 + 0xa76c) + CARRY4(uVar6,*(iStack_2d0 + 0xa768)) +
                 *(auStack_284 + iStack_2d0 + 0xc) + CARRY4(uVar7,*puVar14) + uStack_300 + CARRY4(uVar29,uStack_304);
        uVar17 = uStack_310 + uVar18;
        uVar5 = uStack_30c + iVar30 + CARRY4(uStack_310,uVar18);
        uVar6 = (uVar11 >> 0x1c | uVar8 * 0x10) ^ (uVar8 >> 2 | uVar11 * 0x40000000) ^ (uVar8 >> 7 | uVar11 * 0x2000000)
        ;
        uVar29 = (uStack_2dc | uVar11) & uStack_2e4 | uStack_2dc & uVar11;
        uVar7 = uVar6 + uVar29;
        uVar12 = uVar7 + uVar18;
        uVar9 = ((uVar11 * 0x10 | uVar8 >> 0x1c) ^ (uVar8 * 0x40000000 | uVar11 >> 2) ^
                (uVar8 * 0x2000000 | uVar11 >> 7)) + ((uStack_2d8 | uVar8) & uStack_2e0 | uStack_2d8 & uVar8) +
                CARRY4(uVar6,uVar29) + iVar30 + CARRY4(uVar7,uVar18);
        uVar7 = (uVar5 >> 9 | uVar17 * 0x800000) ^ (uVar17 >> 0x12 | uVar5 * 0x4000) ^ (uVar17 >> 0xe | uVar5 * 0x40000)
        ;
        uVar6 = (uVar10 ^ uStack_2f8) & uVar17 ^ uStack_2f8;
        uVar29 = uVar7 + uVar6;
        uVar18 = uVar29 + *(iStack_2d0 + 0xa770);
        puVar14 = auStack_284 + iStack_2d0 + 0x10;
        uVar19 = uVar18 + *puVar14;
        uVar20 = uVar19 + uStack_2d4;
        iVar30 = ((uVar5 * 0x800000 | uVar17 >> 9) ^ (uVar17 * 0x4000 | uVar5 >> 0x12) ^
                 (uVar17 * 0x40000 | uVar5 >> 0xe)) + ((uVar16 ^ uStack_2fc) & uVar5 ^ uStack_2fc) +
                 CARRY4(uVar7,uVar6) + *(iStack_2d0 + 0xa774) + CARRY4(uVar29,*(iStack_2d0 + 0xa770)) +
                 *(auStack_284 + iStack_2d0 + 0x14) + CARRY4(uVar18,*puVar14) + uStack_308 + CARRY4(uVar19,uStack_2d4)
        ;
        uVar6 = uStack_2e4 + uVar20;
        uVar7 = uStack_2e0 + iVar30 + CARRY4(uStack_2e4,uVar20);
        uVar29 = (uVar12 >> 0x1c | uVar9 * 0x10) ^ (uVar9 >> 2 | uVar12 * 0x40000000) ^
                 (uVar9 >> 7 | uVar12 * 0x2000000);
        uVar19 = (uVar11 | uVar12) & uStack_2dc | uVar11 & uVar12;
        uVar18 = uVar29 + uVar19;
        uVar13 = uVar18 + uVar20;
        uVar20 = ((uVar12 * 0x10 | uVar9 >> 0x1c) ^ (uVar9 * 0x40000000 | uVar12 >> 2) ^
                 (uVar9 * 0x2000000 | uVar12 >> 7)) + ((uVar8 | uVar9) & uStack_2d8 | uVar8 & uVar9) +
                 CARRY4(uVar29,uVar19) + iVar30 + CARRY4(uVar18,uVar20);
        uVar18 = (uVar7 >> 9 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar7 * 0x4000) ^ (uVar6 >> 0xe | uVar7 * 0x40000);
        uVar29 = (uVar17 ^ uVar10) & uVar6 ^ uVar10;
        uVar19 = uVar18 + uVar29;
        uVar21 = uVar19 + *(iStack_2d0 + 0xa778);
        puVar14 = auStack_284 + iStack_2d0 + 0x18;
        uVar22 = uVar21 + *puVar14;
        uVar23 = uVar22 + uStack_2f8;
        iVar30 = ((uVar7 * 0x800000 | uVar6 >> 9) ^ (uVar6 * 0x4000 | uVar7 >> 0x12) ^ (uVar6 * 0x40000 | uVar7 >> 0xe))
                 + ((uVar5 ^ uVar16) & uVar7 ^ uVar16) + CARRY4(uVar18,uVar29) + *(iStack_2d0 + 0xa77c) +
                 CARRY4(uVar19,*(iStack_2d0 + 0xa778)) + *(auStack_284 + iStack_2d0 + 0x1c) + CARRY4(uVar21,*puVar14)
                 + uStack_2fc + CARRY4(uVar22,uStack_2f8);
        uVar29 = uStack_2dc + uVar23;
        uVar18 = uStack_2d8 + iVar30 + CARRY4(uStack_2dc,uVar23);
        uVar19 = (uVar13 >> 0x1c | uVar20 * 0x10) ^ (uVar20 >> 2 | uVar13 * 0x40000000) ^
                 (uVar20 >> 7 | uVar13 * 0x2000000);
        uVar27 = (uVar13 | uVar12) & uVar11 | uVar13 & uVar12;
        uVar21 = uVar19 + uVar27;
        uVar22 = uVar21 + uVar23;
        uVar19 = ((uVar13 * 0x10 | uVar20 >> 0x1c) ^ (uVar20 * 0x40000000 | uVar13 >> 2) ^
                 (uVar20 * 0x2000000 | uVar13 >> 7)) + ((uVar20 | uVar9) & uVar8 | uVar20 & uVar9) +
                 CARRY4(uVar19,uVar27) + iVar30 + CARRY4(uVar21,uVar23);
        uVar23 = (uVar18 >> 9 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar18 * 0x4000) ^
                 (uVar29 >> 0xe | uVar18 * 0x40000);
        uVar21 = (uVar17 ^ uVar6) & uVar29 ^ uVar17;
        uVar27 = uVar23 + uVar21;
        uVar24 = uVar27 + *(iStack_2d0 + 0xa780);
        puVar14 = auStack_284 + iStack_2d0 + 0x20;
        uVar25 = uVar24 + *puVar14;
        uVar26 = uVar25 + uVar10;
        iVar30 = ((uVar18 * 0x800000 | uVar29 >> 9) ^ (uVar29 * 0x4000 | uVar18 >> 0x12) ^
                 (uVar29 * 0x40000 | uVar18 >> 0xe)) + ((uVar5 ^ uVar7) & uVar18 ^ uVar5) + CARRY4(uVar23,uVar21) +
                 *(iStack_2d0 + 0xa784) + CARRY4(uVar27,*(iStack_2d0 + 0xa780)) + *(auStack_284 + iStack_2d0 + 0x24) +
                 CARRY4(uVar24,*puVar14) + uVar16 + CARRY4(uVar25,uVar10);
        uStack_2f4 = uVar11 + uVar26;
        auStack_2cc[0xe] = uStack_2f4;
        uStack_2f0 = uVar8 + iVar30 + CARRY4(uVar11,uVar26);
        auStack_2cc[0xf] = uStack_2f0;
        uVar10 = (uVar22 >> 0x1c | uVar19 * 0x10) ^ (uVar19 >> 2 | uVar22 * 0x40000000) ^
                 (uVar19 >> 7 | uVar22 * 0x2000000);
        uVar8 = (uVar13 | uVar22) & uVar12 | uVar13 & uVar22;
        uVar16 = uVar10 + uVar8;
        uStack_2ec = uVar16 + uVar26;
        uStack_2e8 = ((uVar22 * 0x10 | uVar19 >> 0x1c) ^ (uVar19 * 0x40000000 | uVar22 >> 2) ^
                     (uVar19 * 0x2000000 | uVar22 >> 7)) + ((uVar20 | uVar19) & uVar9 | uVar20 & uVar19) +
                     CARRY4(uVar10,uVar8) + iVar30 + CARRY4(uVar16,uVar26);
        auStack_2cc[6] = uStack_2ec;
        auStack_2cc[7] = uStack_2e8;
        uVar16 = (uStack_2f0 >> 9 | uStack_2f4 * 0x800000) ^ (uStack_2f4 >> 0x12 | uStack_2f0 * 0x4000) ^
                 (uStack_2f4 >> 0xe | uStack_2f0 * 0x40000);
        uVar10 = (uVar6 ^ uVar29) & uStack_2f4 ^ uVar6;
        uVar8 = uVar16 + uVar10;
        uVar11 = uVar8 + *(iStack_2d0 + 0xa788);
        puVar14 = auStack_284 + iStack_2d0 + 0x28;
        uVar21 = uVar11 + *puVar14;
        uVar23 = uVar21 + uVar17;
        iVar30 = ((uStack_2f0 * 0x800000 | uStack_2f4 >> 9) ^ (uStack_2f4 * 0x4000 | uStack_2f0 >> 0x12) ^
                 (uStack_2f4 * 0x40000 | uStack_2f0 >> 0xe)) + ((uVar7 ^ uVar18) & uStack_2f0 ^ uVar7) +
                 CARRY4(uVar16,uVar10) + *(iStack_2d0 + 0xa78c) + CARRY4(uVar8,*(iStack_2d0 + 0xa788)) +
                 *(auStack_284 + iStack_2d0 + 0x2c) + CARRY4(uVar11,*puVar14) + uVar5 + CARRY4(uVar21,uVar17);
        uStack_304 = uVar12 + uVar23;
        auStack_2cc[0xc] = uStack_304;
        uStack_300 = uVar9 + iVar30 + CARRY4(uVar12,uVar23);
        auStack_2cc[0xd] = uStack_300;
        uVar10 = (uStack_2ec >> 0x1c | uStack_2e8 * 0x10) ^ (uStack_2e8 >> 2 | uStack_2ec * 0x40000000) ^
                 (uStack_2e8 >> 7 | uStack_2ec * 0x2000000);
        uVar17 = (uStack_2ec | uVar22) & uVar13 | uStack_2ec & uVar22;
        uVar16 = uVar10 + uVar17;
        uStack_310 = uVar16 + uVar23;
        uStack_30c = ((uStack_2ec * 0x10 | uStack_2e8 >> 0x1c) ^ (uStack_2e8 * 0x40000000 | uStack_2ec >> 2) ^
                     (uStack_2e8 * 0x2000000 | uStack_2ec >> 7)) +
                     ((uStack_2e8 | uVar19) & uVar20 | uStack_2e8 & uVar19) + CARRY4(uVar10,uVar17) + iVar30 +
                     CARRY4(uVar16,uVar23);
        auStack_2cc[4] = uStack_310;
        auStack_2cc[5] = uStack_30c;
        uVar16 = (uStack_300 >> 9 | uStack_304 * 0x800000) ^ (uStack_304 >> 0x12 | uStack_300 * 0x4000) ^
                 (uStack_304 >> 0xe | uStack_300 * 0x40000);
        uVar10 = (uVar29 ^ uStack_2f4) & uStack_304 ^ uVar29;
        uVar17 = uVar16 + uVar10;
        uVar5 = uVar17 + *(iStack_2d0 + 0xa790);
        puVar14 = auStack_284 + iStack_2d0 + 0x30;
        uVar8 = uVar5 + *puVar14;
        uVar9 = uVar8 + uVar6;
        iVar30 = ((uStack_300 * 0x800000 | uStack_304 >> 9) ^ (uStack_304 * 0x4000 | uStack_300 >> 0x12) ^
                 (uStack_304 * 0x40000 | uStack_300 >> 0xe)) + ((uVar18 ^ uStack_2f0) & uStack_300 ^ uVar18) +
                 CARRY4(uVar16,uVar10) + *(iStack_2d0 + 0xa794) + CARRY4(uVar17,*(iStack_2d0 + 0xa790)) +
                 *(auStack_284 + iStack_2d0 + 0x34) + CARRY4(uVar5,*puVar14) + uVar7 + CARRY4(uVar8,uVar6);
        uStack_2d4 = uVar13 + uVar9;
        auStack_2cc[10] = uStack_2d4;
        uStack_308 = uVar20 + iVar30 + CARRY4(uVar13,uVar9);
        auStack_2cc[0xb] = uStack_308;
        uVar10 = (uStack_310 >> 0x1c | uStack_30c * 0x10) ^ (uStack_30c >> 2 | uStack_310 * 0x40000000) ^
                 (uStack_30c >> 7 | uStack_310 * 0x2000000);
        uVar17 = (uStack_310 | uStack_2ec) & uVar22 | uStack_310 & uStack_2ec;
        uVar16 = uVar10 + uVar17;
        uStack_2e4 = uVar16 + uVar9;
        uStack_2e0 = ((uStack_310 * 0x10 | uStack_30c >> 0x1c) ^ (uStack_30c * 0x40000000 | uStack_310 >> 2) ^
                     (uStack_30c * 0x2000000 | uStack_310 >> 7)) +
                     ((uStack_30c | uStack_2e8) & uVar19 | uStack_30c & uStack_2e8) + CARRY4(uVar10,uVar17) + iVar30 +
                     CARRY4(uVar16,uVar9);
        auStack_2cc[2] = uStack_2e4;
        auStack_2cc[3] = uStack_2e0;
        uVar16 = (uStack_308 >> 9 | uStack_2d4 * 0x800000) ^ (uStack_2d4 >> 0x12 | uStack_308 * 0x4000) ^
                 (uStack_2d4 >> 0xe | uStack_308 * 0x40000);
        uVar10 = (uStack_2f4 ^ uStack_304) & uStack_2d4 ^ uStack_2f4;
        uVar17 = uVar16 + uVar10;
        uVar5 = uVar17 + *(iStack_2d0 + 0xa798);
        puVar14 = auStack_284 + iStack_2d0 + 0x38;
        uVar6 = uVar5 + *puVar14;
        uVar7 = uVar6 + uVar29;
        iVar30 = ((uStack_308 * 0x800000 | uStack_2d4 >> 9) ^ (uStack_2d4 * 0x4000 | uStack_308 >> 0x12) ^
                 (uStack_2d4 * 0x40000 | uStack_308 >> 0xe)) + ((uStack_2f0 ^ uStack_300) & uStack_308 ^ uStack_2f0) +
                 CARRY4(uVar16,uVar10) + *(iStack_2d0 + 0xa79c) + CARRY4(uVar17,*(iStack_2d0 + 0xa798)) +
                 *(auStack_284 + iStack_2d0 + 0x3c) + CARRY4(uVar5,*puVar14) + uVar18 + CARRY4(uVar6,uVar29);
        uStack_2f8 = uVar22 + uVar7;
        auStack_2cc[8] = uStack_2f8;
        uStack_2fc = uVar19 + iVar30 + CARRY4(uVar22,uVar7);
        auStack_2cc[9] = uStack_2fc;
        uVar10 = (uStack_2e4 >> 0x1c | uStack_2e0 * 0x10) ^ (uStack_2e0 >> 2 | uStack_2e4 * 0x40000000) ^
                 (uStack_2e0 >> 7 | uStack_2e4 * 0x2000000);
        uVar17 = (uStack_310 | uStack_2e4) & uStack_2ec | uStack_310 & uStack_2e4;
        uVar16 = uVar10 + uVar17;
        uStack_2dc = uVar16 + uVar7;
        uStack_2d8 = ((uStack_2e4 * 0x10 | uStack_2e0 >> 0x1c) ^ (uStack_2e0 * 0x40000000 | uStack_2e4 >> 2) ^
                     (uStack_2e0 * 0x2000000 | uStack_2e4 >> 7)) +
                     ((uStack_30c | uStack_2e0) & uStack_2e8 | uStack_30c & uStack_2e0) + CARRY4(uVar10,uVar17) +
                     iVar30 + CARRY4(uVar16,uVar7);
        auStack_2cc[0] = uStack_2dc;
        auStack_2cc[1] = uStack_2d8;
        iStack_2d0 = iStack_2d0 + 0x40;
    } while (iStack_2d0 < 0x280);
    do {
        uVar16 = auStack_2cc[iVar15 * 2];
        uVar10 = *puStack_288;
        *puStack_288 = *puStack_288 + uVar16;
        puStack_288[1] = puStack_288[1] + auStack_2cc[iVar15 * 2 + 1] + CARRY4(uVar10,uVar16);
        iVar15 = iVar15 + 1;
        puStack_288 = puStack_288 + 2;
    } while (iVar15 < 8);
    return 0;
}


/* fcn.0000a32f @ 0xa32f */

uint __fastcall fcn.0000a32f(int param_1,uint param_2)

{
    uint uVar1;
    
    if (param_1 == 0xa650) {
        return 0;
    }
    uVar1 = fcn.00000168(0xa650,param_1,param_2);
    return uVar1;
}


/* fcn.00000168 @ 0x168 */

int fcn.00000168(char *param_1,char *param_2,int param_3)

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


/* fcn.00009cd8 @ 0x9cd8 */

void __fastcall fcn.00009cd8(int param_1)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    
    iVar1 = 0x1d4c;
    iVar2 = 0;
    do {
        fcn.00009c99();
        bVar3 = iVar1 != 0;
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + -1 + bVar3;
        if (*(param_1 + 0x19) != 0) {
            return;
        }
    } while ((iVar2 != 0) || (iVar1 != 0));
    return;
}


/* fcn.00009d09 @ 0x9d09 */

uint __fastcall fcn.00009d09(int param_1)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    
    cVar1 = fcn.00009cb0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000013;
    }
    else {
        iVar3 = 2;
        do {
            iVar4 = 30000;
            *(param_1 + 0x18) = 0x40;
            do {
                iVar4 = iVar4 + -1;
                fcn.00009c99();
                if ((*(param_1 + 0x18) & 0x40) != 0) break;
            } while (iVar4 != 0);
            if (iVar4 != 0) {
                return 0;
            }
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar2 = 0x80000007;
    }
    return uVar2;
}


/* fcn.00009d57 @ 0x9d57 */

uint32_t __fastcall fcn.00009d57(uint8_t *param_1,uint8_t *param_2,int param_3,char param_4)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    
    iVar3 = 0;
    if (param_3 == 0) {
        return -(param_4 != '\0') & 0x80000002;
    }
    if ((*param_1 & 0x20) != 0) {
        if (param_4 != '\0') {
            param_3 = param_3 + -1;
        }
        if (param_3 != 0) {
            do {
                iVar3 = fcn.00009cd8();
                if (iVar3 == 0) {
                    return 0x80000012;
                }
                do {
                    if (param_3 == 0) goto code_r0x00009dc5;
                    uVar1 = *param_2;
                    iVar3 = iVar3 + -1;
                    param_2 = param_2 + 1;
                    param_1[0x24] = uVar1;
                    param_3 = param_3 + -1;
                } while (iVar3 != 0);
                iVar3 = 0;
            } while (param_3 != 0);
        }
code_r0x00009dc5:
        if (param_4 == '\0') {
            return 0;
        }
        if ((iVar3 == 0) && (iVar3 = fcn.00009cd8(), iVar3 == 0)) {
            return 0x80000012;
        }
        cVar2 = fcn.00009cb0();
        if (cVar2 != '\0') {
            param_1[0x24] = *param_2;
            cVar2 = fcn.00009cb0();
            if (cVar2 == '\0') {
                param_1[0x18] = 0x20;
                return 0;
            }
        }
    }
    return 0x80000015;
}


/* fcn.00009e0f @ 0x9e0f */

uint32_t __fastcall fcn.00009e0f(int param_1,uchar *param_2,int *param_3)

{
    char cVar1;
    int16_t iVar2;
    uchar *puVar3;
    
    puVar3 = param_2 + *param_3;
    if (param_2 < puVar3) {
        while (cVar1 = fcn.00009cb0(), cVar1 != '\0') {
            iVar2 = fcn.00009cd8();
            if (iVar2 == 0) {
                return 0x80000012;
            }
            do {
                if (puVar3 <= param_2) goto code_r0x00009e6c;
                cVar1 = fcn.00009cb0();
                if (cVar1 == '\0') break;
                iVar2 = iVar2 + -1;
                *param_2 = *(param_1 + 0x24);
                param_2 = param_2 + 1;
            } while (iVar2 != 0);
            if (puVar3 <= param_2) break;
        }
    }
code_r0x00009e6c:
    *param_3 = param_2 + (*param_3 - puVar3);
    cVar1 = fcn.00009cb0();
    return -(cVar1 != '\0') & 0x80000005;
}


/* fcn.0000a3c1 @ 0xa3c1 */

uint __cdecl fcn.0000a3c1(int32_t arg_8h)

{
    int iVar1;
    int in_ECX;
    uint32_t uVar2;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    if ((*0xfed30800 & 0x70000) != 0x70000) {
        return 0x8000000e;
    }
    iVar1 = fcn.0000a2d7();
    if (iVar1 == 0) {
        uVar2 = *0xfed40000;
    }
    else {
        uVar2 = *(iVar1 + 0x18);
    }
    if (in_ECX != 0) {
        if (in_ECX == 1) {
            if (iVar1 == 0) {
                return 0;
            }
            *(iVar1 + 0x18) = *0xfed40000;
            return 0;
        }
        if (in_ECX != 2) {
            return 0;
        }
        var_4h = &var_10h;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_8h);
        if (var_8h == 0x11) {
            return 0;
        }
    }
    if (((uVar2 & 0x1c) == 0) && ((uVar2 & 2) != 0)) {
        *arg_8h = 1;
    }
    return 0;
}


/* fcn.0000a04d @ 0xa04d */

uint32_t fcn.0000a04d(void)

{
    unkbyte3 Var1;
    
    Var1 = *0xfed40044 >> 8;
    if ((*0xfed40044 & 1) != 0) {
        return CONCAT31(Var1,0xff);
    }
    return CONCAT31(Var1,*0xfed40044 >> 1) & 0xffffff01;
}


/* fcn.00009f81 @ 0x9f81 */

int __fastcall fcn.00009f81(uint param_1)

{
    int iVar1;
    int iVar2;
    uint uStack_10;
    uint uStack_c;
    
    uStack_10._3_1_ = param_1 >> 0x18;
    uStack_10._0_3_ = param_1;
    iVar2 = 0;
    uStack_c = param_1;
    iVar1 = fcn.0000a3c1(&uStack_10 + 2);
    if ((iVar1 < 0) || (uStack_10._2_1_ == '\0')) {
        do {
            if (((*0xfed40000 & 0x1c) == 0) && (((*0xfed40000 & 2) != 0 && (*0xfed40000 < '\0')))) {
                uStack_10 = uStack_10 & 0xffffff;
                iVar1 = fcn.0000a3c1(&uStack_10 + 3);
                if ((-1 < iVar1) && (uStack_10._3_1_ != '\0')) {
                    return iVar1;
                }
                return 0;
            }
            *0xfed40008 = 1;
            fcn.00001f49();
            iVar2 = iVar2 + 1;
        } while (iVar2 != 15000);
        iVar1 = -0x7ffffff9;
    }
    return iVar1;
}


/* fcn.0000a063 @ 0xa063 */

uint fcn.0000a063(void)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 0;
    cVar1 = fcn.0000a04d();
    if (cVar1 != '\0') {
        do {
            *0xfed40040 = 1;
            fcn.00001f49();
            if (iVar2 == 15000) {
                return 0x80000007;
            }
            iVar2 = iVar2 + 1;
            cVar1 = fcn.0000a04d();
        } while (cVar1 == '\x01');
        if (iVar2 == 15000) {
            return 0x80000007;
        }
    }
    return 0;
}


/* fcn.0000a009 @ 0xa009 */

uint fcn.0000a009(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0xfed4004c != 0) {
        do {
            fcn.00001f49();
            if (iVar1 == 1200000) {
                return 0x80000007;
            }
            iVar1 = iVar1 + 1;
        } while (*0xfed4004c != 0);
        if (iVar1 == 1200000) {
            return 0x80000007;
        }
    }
    return 0;
}


/* fcn.0000a0b2 @ 0xa0b2 */

int __fastcall fcn.0000a0b2(unkuint3 param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint uStack_c;
    
    iVar3 = 0;
    uStack_c = param_1;
    iVar2 = fcn.0000a3c1(&uStack_c + 3);
    if ((iVar2 < 0) || (uStack_c._3_1_ == '\0')) {
        cVar1 = fcn.0000a04d();
        if (cVar1 != '\x01') {
            do {
                *0xfed40040 = 2;
                fcn.00001f49();
                if (iVar3 == 15000) {
                    return -0x7ffffff9;
                }
                iVar3 = iVar3 + 1;
                cVar1 = fcn.0000a04d();
            } while (cVar1 == '\0');
            if (iVar3 == 15000) {
                return -0x7ffffff9;
            }
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0000a28b @ 0xa28b */

int32_t fcn.0000a28b(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000a302 @ 0xa302 */

uint32_t __fastcall fcn.0000a302(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0xa6a0;
    if ((((*0xa6a0 == *param_2) && (uVar1 = *0xa6a4, *0xa6a4 == param_2[1])) &&
        (uVar1 = *0xa6a8, *0xa6a8 == param_2[2])) && (uVar1 = *0xa6ac, *0xa6ac == param_2[3])) {
        return CONCAT31(*0xa6ac >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000a2b6 @ 0xa2b6 */

int16_t * __fastcall fcn.0000a2b6(uint param_1,int16_t *param_2)

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


/* fcn.0000a2d7 @ 0xa2d7 */

uint __fastcall fcn.0000a2d7(uint param_1)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.0000a28b(param_1);
    do {
        iVar2 = fcn.0000a2b6();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000a302();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


