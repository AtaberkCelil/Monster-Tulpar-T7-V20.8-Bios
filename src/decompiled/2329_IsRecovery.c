// decompiled by r2ghidra: 2329_IsRecovery.te
// functions: 40

/* entry0 @ 0x1d5 */

void entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x18))(param_2,0xffd133ac);
    return;
}


/* fcn.000001e7 @ 0x1e7 */

void __fastcall fcn.000001e7(uint param_1)

{
    char cVar1;
    int *piVar2;
    
    cVar1 = '\0';
    piVar2 = 0xffd133c0;
    do {
        if (cVar1 != '\0') {
            return;
        }
        cVar1 = (**piVar2)(param_1);
        piVar2 = piVar2 + 1;
    } while (*piVar2 != 0);
    return;
}


/* fcn.000004bd @ 0x4bd */

void fcn.000004bd(void)

{
    fcn.0000047a();
    return;
}


/* fcn.0000047a @ 0x47a */

uint32_t fcn.0000047a(void)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),1,0x3031004,0,0xffd13320,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


/* fcn.0000020e @ 0x20e */

void __fastcall fcn.0000020e(uint param_1)

{
    char cVar1;
    int *piVar2;
    
    cVar1 = '\0';
    piVar2 = 0xffd133d8;
    do {
        if (cVar1 != '\0') {
            return;
        }
        cVar1 = (**piVar2)(param_1);
        piVar2 = piVar2 + 1;
    } while (*piVar2 != 0);
    return;
}


/* fcn.000004c9 @ 0x4c9 */

void __cdecl fcn.000004c9(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000aab @ 0xaab */

uint __fastcall fcn.00000aab(uint param_1,uint16_t param_2,uint param_3,uint16_t param_4)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t auStack_28 [4];
    uint16_t auStack_20 [16];
    
    auStack_20[4] = 0x3f8;
    auStack_20[5] = 0x2f8;
    auStack_20[0xe] = 0;
    uVar3 = 0;
    auStack_28[2] = 0;
    uVar4 = 0;
    uVar6 = 0x3f0;
    auStack_20[6] = 0x220;
    auStack_20[7] = 0x228;
    uVar2 = param_4 & 0xf00;
    param_4 = param_4 & 0xff;
    auStack_20[8] = 0x238;
    auStack_20[9] = 0x2e8;
    auStack_20[10] = 0x338;
    auStack_20[0xb] = 1000;
    auStack_20[0xc] = 0x2f0;
    auStack_20[0xd] = 0x2e0;
    auStack_20[0] = 0x378;
    auStack_20[1] = 0x278;
    auStack_20[2] = 0x3bc;
    auStack_20[3] = 0;
    auStack_28[0] = 0x3f0;
    auStack_28[1] = 0x370;
    uVar5 = 0xffff;
    if (param_4 == 1) {
        uVar1 = 0;
        do {
            if (uVar6 == param_2) break;
            uVar1 = uVar1 + 1;
            uVar6 = auStack_28[uVar1];
        } while (uVar6 != 0);
        if (auStack_28[uVar1] == 0) {
            return 0x80000003;
        }
        uVar5 = 0xefff;
        uVar4 = 8;
        uVar3 = uVar1 << 0xc;
    }
    else {
        if (param_4 < 2) {
            return 0x80000003;
        }
        if (param_4 < 6) {
            uVar4 = 0x400;
        }
        else if (param_4 == 6) {
            uVar6 = 0x3f8;
            uVar1 = 0;
            do {
                if (uVar6 == param_2) break;
                uVar1 = uVar1 + 1;
                uVar6 = auStack_20[uVar1 + 4];
            } while (uVar6 != 0);
            if (auStack_20[uVar1 + 4] == 0) {
                return 0x80000003;
            }
            uVar3 = uVar1;
            uVar4 = 1;
            uVar5 = 0xfff8;
        }
        else if (param_4 == 7) {
            uVar6 = 0x378;
            uVar1 = 0;
            do {
                if (uVar6 == param_2) break;
                uVar1 = uVar1 + 1;
                uVar6 = auStack_20[uVar1];
            } while (uVar6 != 0);
            if (auStack_20[uVar1] == 0) {
                return 0x80000003;
            }
            uVar5 = 0xfcff;
            uVar4 = 4;
            uVar3 = uVar1 << 8;
        }
        else {
            if (param_4 == 8) {
                return 0x80000003;
            }
            if (param_4 != 0xff) {
                return 0x80000003;
            }
            if (param_2 < 0x62) {
                fcn.00000925(uVar2,uVar2);
            }
            else {
                uVar4 = 0x800;
            }
        }
    }
    fcn.00000e6e();
    fcn.00000ec7();
    *0xfd882770 = *0xfd882770 & uVar5 | uVar3;
    uVar6 = uVar2 >> 8;
    if ((((uVar6 != 0) && (uVar6 != 1)) && (uVar6 != 2)) && (uVar6 != 3)) {
        return 0x80000003;
    }
    fcn.00000e6e();
    if (uVar2 != 0) {
        fcn.00000e6e();
        fcn.00000ec7();
    }
    fcn.00000ec7();
    *0xfd882774 = *0xfd882774 | uVar4;
    return 0;
}


/* fcn.000002e5 @ 0x2e5 */

uint fcn.000002e5(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    bool bVar5;
    
    uVar1 = in(0x1808);
    uVar4 = uVar1 + 0x53e8;
    if (uVar4 < uVar1) {
        uVar3 = 1;
        uVar2 = uVar1;
        goto code_r0x00000300;
    }
    uVar3 = uVar4 >> 0x18;
    uVar4 = uVar4 & 0xffffff;
    while (uVar2 = uVar1, uVar3 != 0) {
code_r0x00000300:
        uVar1 = in(0x1808);
        if (uVar1 < uVar2) {
            uVar3 = uVar3 - 1;
        }
    }
    do {
        if (uVar4 <= uVar1) {
            return 0;
        }
        uVar2 = in(0x1808);
        bVar5 = uVar1 <= uVar2;
        uVar1 = uVar2;
    } while (bVar5);
    return 0;
}


/* fcn.00000e0e @ 0xe0e */

uint32_t fcn.00000e0e(void)

{
    int iVar1;
    
    iVar1 = fcn.00000673();
    if (iVar1 == 0) {
        fcn.00000d0e();
        iVar1 = fcn.00000673();
    }
    return iVar1 + 0x30U & -(iVar1 != 0);
}


/* fcn.00000673 @ 0x673 */

int fcn.00000673(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00000627();
    do {
        iVar2 = fcn.00000652();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000005e6();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000d0e @ 0xd0e */

int * fcn.00000d0e(void)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    int *piVar4;
    uint32_t uVar5;
    int *piVar6;
    uint uStack_14;
    int iStack_10;
    uchar *puStack_c;
    uchar auStack_8 [2];
    int iStack_6;
    
    puStack_c = auStack_8;
    uStack_14 = 0;
    iStack_10 = 0;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(iStack_6 + -4) + 0x38))(*(iStack_6 + -4),0,&uStack_14);
    if (-1 < iVar1) {
        puStack_c = auStack_8;
        InterruptDescriptorTableRegister();
        iVar2 = (**(**(iStack_6 + -4) + 0x68))(0xffd132e0,uStack_14,&iStack_10);
        iVar1 = iStack_10;
        if ((-1 < iVar2) && (piVar6 = iStack_10 + 0x2c, *piVar6 == 0x4c4d4f52)) {
            puVar3 = fcn.000006ca();
            if (puVar3 != NULL) {
                *puVar3 = *(iVar1 + 0x30);
                puVar3[1] = *(iVar1 + 0x34);
                puVar3[3] = 0;
                piVar4 = puVar3 + 4;
                puVar3[2] = 0x30;
                iVar2 = *(iVar1 + 0x34);
                uVar5 = iVar1 + 0x3c;
                if (uVar5 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar6) {
                    do {
                        fcn.0000060a(iVar2);
                        piVar4[1] = 0;
                        *piVar4 = (0x18 - puVar3) + piVar4;
                        piVar4 = piVar4 + 0xc;
                        iVar2 = *(iVar1 + 0x34);
                        uVar5 = uVar5 + iVar2;
                    } while (uVar5 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar6);
                }
            }
            return piVar6;
        }
    }
    return NULL;
}


/* fcn.00000e2f @ 0xe2f */

int __fastcall fcn.00000e2f(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    
    if (param_1 != 0) {
        piVar1 = param_1 + -8;
        iVar3 = *piVar1;
        cVar4 = fcn.000005e6();
        if (cVar4 != '\0') {
            uVar5 = piVar1 + *(piVar1 + (0x20 - iVar3));
            uVar2 = piVar1 + (0x28 - iVar3);
            if ((uVar2 <= uVar5) && (uVar5 < (*(piVar1 + (2 - iVar3)) - 0x28) + uVar2)) {
                return uVar5 + 8;
            }
        }
    }
    return 0;
}


/* fcn.00000521 @ 0x521 */

int32_t __fastcall fcn.00000521(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000004c9(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000870 @ 0x870 */

uint fcn.00000870(void)

{
    char cVar1;
    uint uVar2;
    uint extraout_ECX;
    
    cVar1 = fcn.00000fbf();
    if (cVar1 != '\0') {
        fcn.000008e6();
    }
    cVar1 = fcn.00000fd2();
    if (cVar1 == '\0') {
        fcn.00000705(extraout_ECX);
        uVar2 = 0;
        fcn.0000082e(0xf8098,0);
        fcn.000007f1(0xf8098,0);
    }
    else {
        uVar2 = 0x80000003;
    }
    return uVar2;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 3932 named .text
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


/* fcn.00000627 @ 0x627 */

int32_t fcn.00000627(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000005e6 @ 0x5e6 */

uint32_t __fastcall fcn.000005e6(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000652 @ 0x652 */

int16_t * __fastcall fcn.00000652(uint param_1,int16_t *param_2)

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


/* fcn.000004f6 @ 0x4f6 */

void __cdecl fcn.000004f6(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.000006ad @ 0x6ad */

int32_t fcn.000006ad(void)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.000004f6(&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.000005c4 @ 0x5c4 */

uint * __fastcall fcn.000005c4(uint *param_1)

{
    *param_1 = *0xffd132f0;
    param_1[1] = *0xffd132f4;
    param_1[2] = *0xffd132f8;
    param_1[3] = *0xffd132fc;
    return param_1;
}


/* fcn.0000077f @ 0x77f */

ushort __cdecl fcn.0000077f(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000723 @ 0x723 */

void fcn.00000723(void)

{
    fcn.0000077f(0xf8002,0);
    return;
}


/* fcn.00000732 @ 0x732 */

char fcn.00000732(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd133bc == -1) {
        uVar1 = fcn.00000723();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd133bc = cVar2;
    }
    return *0xffd133bc;
}


/* fcn.000007ba @ 0x7ba */

uint __cdecl fcn.000007ba(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.000007f1 @ 0x7f1 */

void __cdecl fcn.000007f1(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.00000fbf @ 0xfbf */

uint32_t fcn.00000fbf(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000006e5();
    return uVar1 >> 0xc & 1;
}


/* fcn.000006e5 @ 0x6e5 */

uint __fastcall fcn.000006e5(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.000008e6 @ 0x8e6 */

uint __fastcall fcn.000008e6(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    if ((param_2 != NULL) && (param_1 < 2)) {
        uVar1 = -(param_1 != 1) & 0xfffffff0;
        uVar1 = fcn.000007ba(uVar1 + 0xf80a8,0xfff07fff < uVar1 + 0xa8);
        *param_2 = uVar1 & 0xffff0000;
        return 0;
    }
    return 0x80000002;
}


/* fcn.00000fd2 @ 0xfd2 */

uint32_t fcn.00000fd2(void)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = fcn.00000770();
    if (cVar1 != '\0') {
        uVar2 = fcn.000006e5();
        return uVar2 >> 0x17 & 1;
    }
    uVar2 = fcn.000006e5();
    return uVar2 >> 0x1f;
}


/* fcn.00000770 @ 0x770 */

bool fcn.00000770(void)

{
    char cVar1;
    
    cVar1 = fcn.00000732();
    return cVar1 == '\x04';
}


/* fcn.00000705 @ 0x705 */

void __fastcall fcn.00000705(uint param_1,uint32_t param_2)

{
    *((param_2 & 0xffff8800 | 0xfffd8800) << 8 | param_2 & 0xffff) = 0xfe410001;
    return;
}


/* fcn.0000082e @ 0x82e */

void fcn.0000082e(int32_t param_1,int32_t param_2)

{
    fcn.000007ba(param_1,param_2);
    fcn.000007f1(param_1,param_2);
    return;
}


/* fcn.00000f25 @ 0xf25 */

ulong __fastcall fcn.00000f25(uint32_t param_1)

{
    uint uVar1;
    uint uVar2;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar2 = in(0xcfc);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,uVar2);
}


/* fcn.00000f70 @ 0xf70 */

ulong __fastcall fcn.00000f70(uint32_t param_1,uint param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out(0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,param_2);
}


/* fcn.00000925 @ 0x925 */

uint __fastcall fcn.00000925(uint param_1,uint16_t param_2,uint32_t param_3)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint8_t uStack_11;
    
    uStack_11 = 0;
    if (param_3 == 0x100) {
        param_3 = 0xff;
    }
    uVar8 = param_3;
    uVar2 = param_3 >> 8;
    uVar5 = param_3 & 0xf00;
    if (param_3 == 0) {
        uVar4 = 0x80000002;
    }
    else {
        uVar6 = 4;
        param_3 = param_3 & 0xff;
        if (uVar8 < 4) {
            param_3 = 0;
            uVar8 = 4;
        }
        if (uVar5 == 0) {
            iVar1 = 0x2730;
        }
        else {
            if ((uVar2 & 0xf) != 1) {
                return 0x80000003;
            }
            iVar1 = 0x27bc;
            uVar6 = 1;
        }
        uVar9 = 0;
        do {
            uVar3 = fcn.00000f25();
            if (((uVar3 & 1) == 0) || ((uVar3 & 0xfffc) == param_2)) break;
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
        uVar7 = 0;
        if (uVar9 == uVar6) {
            uVar4 = 0x80000009;
        }
        else {
            uVar5 = uVar8;
            while ((param_3 & 1) == 0) {
                uVar7 = uVar7 + 1;
                uVar5 = uVar5 >> 1;
                param_3 = uVar5;
            }
            for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
                uStack_11 = uStack_11 + 1;
            }
            if (uVar7 == uStack_11 - 1) {
                uStack_11 = uStack_11 - 1;
            }
            uVar5 = (1 << (uStack_11 & 0x1f)) - 1;
            fcn.00000f70();
            *(iVar1 + uVar9 * 4 | 0xfd880000) = ~uVar5 & 0xffff & param_2 | (uVar5 & 0xfffffffc) << 0x10 | 1;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00000e6e @ 0xe6e */

ulong __fastcall fcn.00000e6e(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.00000ec7 @ 0xec7 */

ulong __fastcall fcn.00000ec7(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.000006ca @ 0x6ca */

int fcn.000006ca(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.000006ad();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000005c4();
    return extraout_EDX + 0x18;
}


/* fcn.0000060a @ 0x60a */

int __fastcall fcn.0000060a(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


