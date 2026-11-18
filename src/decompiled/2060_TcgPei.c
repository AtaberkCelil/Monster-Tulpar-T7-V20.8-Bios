// decompiled by r2ghidra: 2060_TcgPei.te
// functions: 31

/* entry0 @ 0x1f9 */

int entry0(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint *puVar3;
    uint *puVar4;
    int *piVar5;
    uint uVar6;
    uchar uStack_65;
    int iStack_64;
    int iStack_60;
    uint *puStack_5c;
    uint uStack_58;
    uchar auStack_54 [4];
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    char acStack_40 [6];
    char cStack_3a;
    uint auStack_24 [9];
    
    iStack_60 = 0;
    uStack_65 = 0;
    puVar3 = 0x2460;
    puVar4 = auStack_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
    }
    *puVar4 = *puVar3;
    uStack_58 = 4;
    uStack_50 = *0x2450;
    uStack_4c = *0x2454;
    uStack_48 = *0x2458;
    uStack_44 = *0x245c;
    iVar2 = (**(*param_2 + 0x18))(param_2,0x23d4);
    if (iVar2 < 0) {
        return -0x5fffffff;
    }
    iVar2 = (**(*param_2 + 0x20))(param_2,0x2350,0,0,&iStack_60);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (iStack_60 == 0) {
        return iVar2;
    }
    (**(iStack_60 + 4))(param_2,acStack_40);
    if (cStack_3a != '\x01') {
        iVar2 = (**(*param_2 + 0x20))(param_2,0x2370,0,0,&puStack_5c);
        if (iVar2 < 0) {
            return iVar2;
        }
        if (puStack_5c == NULL) {
            return iVar2;
        }
        iVar2 = (**puStack_5c)(puStack_5c,auStack_24,&uStack_50,0,&uStack_58,auStack_54);
        if (iVar2 < 0) {
            uStack_65 = 1;
            iVar2 = (**(*param_2 + 0x34))(param_2,4,0x19,&iStack_64);
            if (-1 < iVar2) {
                *(iStack_64 + 8) = *0x23b0;
                *(iStack_64 + 0xc) = *0x23b4;
                *(iStack_64 + 0x10) = *0x23b8;
                *(iStack_64 + 0x14) = *0x23bc;
                iVar2 = 0;
                iStack_64 = iStack_64 + 0x18;
                (**(*param_2 + 0x50))(iStack_64,&uStack_65,1);
            }
        }
        cVar1 = '\0';
        if (*0x24ac != 0) {
            piVar5 = 0x24ac;
            do {
                if (cVar1 != '\0') {
                    return 0;
                }
                cVar1 = (**piVar5)();
                piVar5 = piVar5 + 1;
            } while (*piVar5 != 0);
            if (cVar1 != '\0') {
                return 0;
            }
        }
        cVar1 = fcn.00000920();
        if ((cVar1 == '\0') && (iVar2 = fcn.000007e9(), iVar2 < 0)) {
            return iVar2;
        }
        if ((acStack_40[0] != '\0') && (-1 < iVar2)) {
            cVar1 = fcn.00000920();
            if (cVar1 == '\0') {
                if ((*0xfed40000 == -1) || (*0xfed40000 == '\0')) {
                    return -0x7ffffff2;
                }
                iVar2 = (**(*param_2 + 0x18))(param_2,0x23f8);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar6 = 0x2414;
            }
            else {
                uVar6 = 0x23e0;
            }
            iVar2 = (**(*param_2 + 0x18))(param_2,uVar6);
            return iVar2;
        }
    }
    return 0;
}


/* fcn.00000920 @ 0x920 */

uint16_t fcn.00000920(void)

{
    uint16_t in_AX;
    uint32_t uVar1;
    
    uVar1 = 0;
    while ((*(uVar1 + 0x2444) != *0xfed40f00 || (in_AX = *(uVar1 + 0x2446), in_AX != *0xfed40f02))) {
        uVar1 = uVar1 + 4;
        if (0xb < uVar1) {
            return in_AX & 0xff00;
        }
    }
    return CONCAT11(in_AX >> 8,1);
}


/* fcn.000007e9 @ 0x7e9 */

int __fastcall fcn.000007e9(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint8_t extraout_CL;
    int32_t var_20h;
    uint32_t var_1ah;
    int32_t var_4h;
    
    var_4h = 0;
    iVar2 = (**(*param_2 + 0x20))(param_2,0x2350,0,0,&var_4h);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (var_4h != 0) {
        (**(var_4h + 4))(param_2,&var_20h);
        if (((((var_1ah == '\0') || (cVar1 = fcn.00000d62(), cVar1 == '\0')) ||
             (cVar1 = fcn.00000d62(), cVar1 == '\0')) || ((extraout_CL & 0xf) != 1)) &&
           (((**(*param_2 + 0x18))(param_2,0x2438), **0x2430 != -1 && (**0x2430 != '\0')))) {
            return 0;
        }
        return -0x7ffffff2;
    }
    return iVar2;
}


/* fcn.0000040a @ 0x40a */

void __fastcall fcn.0000040a(int *param_1,int param_2)

{
    *(param_2 + 4) = param_1;
    (**(*param_1 + 0x20))(param_1,0x2380,0,0,param_2);
    return;
}


/* fcn.00000a12 @ 0xa12 */

int __thiscall fcn.00000a12(int *param_1,int *param_2)

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
            if ((*piVar5 == 4) && (iVar3 = fcn.00000d76(), iVar3 == 0)) {
                iVar1 = 0;
                *param_2 = piVar5 + 0xc;
            }
            *param_1 = piVar5[1] + piVar5;
        } while (iVar1 < 0);
    }
    return iVar1;
}


/* fcn.0000098b @ 0x98b */

uint fcn.0000098b(int *param_1,int param_2)

{
    int *piVar1;
    
    fcn.00000954(param_2,8);
    fcn.00000954(param_2 + 8,0x14);
    piVar1 = param_2 + 0x1c;
    fcn.00000954(piVar1,4);
    fcn.00000954(param_2 + 0x20,*piVar1);
    *param_1 = *param_1 + *piVar1 + 0x20;
    return 0;
}


/* fcn.00000954 @ 0x954 */

void __fastcall fcn.00000954(uint param_1,uchar *param_2,uchar *param_3,int param_4)

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


/* fcn.00000889 @ 0x889 */

uint __fastcall fcn.00000889(uint param_1)

{
    uint16_t uVar1;
    
    uVar1 = param_1 >> 0x10;
    return CONCAT22(param_1 << 8 | param_1 >> 8,uVar1 << 8 | uVar1 >> 8);
}


/* fcn.00000421 @ 0x421 */

int __cdecl fcn.00000421(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    int32_t iVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    int32_t *piVar6;
    int32_t var_ch;
    int32_t var_4h;
    
    iVar2 = arg_ch;
    fcn.0000040a();
    piVar6 = &arg_ch;
    iVar3 = (**(*iVar2 + 0x30))(iVar2,piVar6);
    if ((-1 < iVar3) && (iVar3 = fcn.00000a12(&var_4h,piVar6), -1 < iVar3)) {
        uVar1 = *(var_4h + 8);
        puVar4 = var_4h + 0x28;
        if ((uVar1 != 0) && (uVar5 = 0, uVar1 != 0)) {
            do {
                if ((puVar4 == NULL) || (0x18 < *puVar4)) break;
                puVar4 = puVar4 + puVar4[7] + 0x20;
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar1);
        }
        if (*(arg_10h + 0x1c) < 0xffffffe0) {
            iVar3 = fcn.0000098b(var_4h + 4,arg_10h);
            if (-1 < iVar3) {
                *arg_14h = *(var_4h + 8);
                *(var_4h + 8) = *(var_4h + 8) + 1;
            }
        }
        else {
            iVar3 = -0x7ffffff7;
        }
    }
    return iVar3;
}


/* fcn.000009da @ 0x9da */

uint __cdecl fcn.000009da(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_70h;
    int32_t var_14h;
    
    fcn.0000201c();
    fcn.00002047(arg_8h);
    fcn.000020dd();
    fcn.00000954(&var_14h,0x14);
    return 0;
}


/* fcn.0000201c @ 0x201c */

void __fastcall fcn.0000201c(uint *param_1)

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


/* fcn.00002047 @ 0x2047 */

void __thiscall fcn.00002047(int param_1,uint32_t param_2)

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
        if (iVar4 != 0) {
            fcn.00000873(iVar4);
        }
        fcn.00000dd5();
        for (uVar3 = iVar1 + 0x7f; uVar3 < param_2; uVar3 = uVar3 + 0x40) {
            fcn.00000dd5();
            iVar4 = iVar4 + 0x40;
        }
    }
    if (param_2 - iVar4 != 0) {
        fcn.00000873(param_2 - iVar4);
    }
    return;
}


/* fcn.000020dd @ 0x20dd */

void __fastcall fcn.000020dd(int param_1,int param_2)

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
    fcn.00002047(1);
    while ((*(param_2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.00002047(1);
    }
    fcn.00002047(8);
    uVar1 = 0;
    do {
        *(uVar1 + param_1) = *(param_2 + (uVar1 & 0xfffffffc)) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
    fcn.00000100(param_2 + 0x1c,0x40,0);
    fcn.00000100(param_2,0x14,0);
    fcn.00000100(param_2 + 0x14,8,0);
    fcn.00000100(&iStack_8,8,0);
    return;
}


/* fcn.000004be @ 0x4be */

void __cdecl fcn.000004be(int32_t arg_8h,int32_t arg_ch)

{
    int *in_ECX;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_10h;
    int32_t var_ah;
    int32_t var_4h;
    
    var_44h = &var_10h;
    var_38h = 4;
    var_3ch = &var_4h;
    stack0xffffffee = 0x22000000;
    var_34h = arg_8h;
    var_2ch = &var_1ch;
    var_24h = arg_ch;
    var_30h = 0x14;
    var_20h = 0x14;
    var_40h = 10;
    var_28h = 10;
    var_10h._0_2_ = 0xc100;
    var_ah = 0x14000000;
    var_4h = fcn.00000889();
    (**(*in_ECX + 0xc))(*in_ECX,in_ECX[1],3,&var_44h,2,&var_2ch);
    return;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 8451 named .text
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


/* fcn.00000873 @ 0x873 */

int __fastcall fcn.00000873(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000aa6 @ 0xaa6 */

void fcn.00000aa6(void)

{
    int iVar1;
    
    iVar1 = 5;
    do {
        fcn.000008eb();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.000008eb @ 0x8eb */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.000008eb(uint param_1)

{
    ulong uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.00000d8e(param_1,param_1,param_1,param_1);
    fcn.000008a2(uVar1);
    return 0x1e;
}


/* fcn.00000d8e @ 0xd8e */

ulong fcn.00000d8e(void)

{
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    return 0x66695ee;
}


/* fcn.000008a2 @ 0x8a2 */

void __fastcall fcn.000008a2(uint32_t param_1)

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


/* fcn.00000aba @ 0xaba */

uint8_t __fastcall fcn.00000aba(uint8_t *param_1,uint8_t param_2)

{
    int iVar1;
    
    iVar1 = 30000;
    do {
        fcn.00000aa6();
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
            return 0;
        }
    } while (-1 < *param_1);
    return *param_1 & param_2;
}


/* fcn.00000ca0 @ 0xca0 */

int __cdecl fcn.00000ca0(uint32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    char cVar1;
    int iVar2;
    int in_ECX;
    uint32_t in_EDX;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uStack_10;
    
    if ((((in_EDX == 0) || (arg_8h == 0)) || (arg_10h == 0)) || (arg_ch == 0)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00000b13();
        if (iVar2 < 0) {
            iVar2 = -0x7ffffff9;
        }
        else {
            uVar3 = 0;
            uVar4 = 0;
            uStack_10 = in_EDX;
            do {
                if (in_EDX <= uVar4) break;
                uStack_10 = uStack_10 - 1;
                iVar2 = fcn.00000b61(*(arg_8h + 4 + uVar4 * 8),uStack_10 == 0);
                uVar4 = uVar4 + 1;
            } while (-1 < iVar2);
            if (-1 < iVar2) {
                do {
                    cVar1 = fcn.00000aba();
                } while (cVar1 == '\0');
                iVar2 = -0x7ffffffb;
                do {
                    if (arg_ch <= uVar3) break;
                    iVar2 = fcn.00000c19(arg_10h + 4 + uVar3 * 8);
                    uVar3 = uVar3 + 1;
                } while (iVar2 == -0x7ffffffb);
            }
            *(in_ECX + 0x18) = 0x40;
        }
    }
    return iVar2;
}


/* fcn.00000d62 @ 0xd62 */

int fcn.00000d62(void)

{
    unkuint3 Var1;
    
    Var1 = *0xfed40030 >> 8;
    if ((*0xfed40030 != -1) && (*0xfed40030 != 0)) {
        return CONCAT31(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.00000d76 @ 0xd76 */

uint __fastcall fcn.00000d76(int param_1,uint param_2)

{
    uint uVar1;
    
    if (param_1 == 0x23a0) {
        return 0;
    }
    uVar1 = fcn.000000e0(0x23a0,param_1,param_2);
    return uVar1;
}


/* fcn.000000e0 @ 0xe0 */

int fcn.000000e0(char *param_1,char *param_2,int param_3)

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


/* fcn.00000ae2 @ 0xae2 */

void __fastcall fcn.00000ae2(int param_1)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    
    iVar1 = 0x1d4c;
    iVar2 = 0;
    do {
        fcn.00000aa6();
        bVar3 = iVar1 != 0;
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + -1 + bVar3;
        if (*(param_1 + 0x19) != 0) {
            return;
        }
    } while ((iVar2 != 0) || (iVar1 != 0));
    return;
}


/* fcn.00000b13 @ 0xb13 */

uint __fastcall fcn.00000b13(int param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    cVar1 = fcn.00000aba();
    if (cVar1 == '\0') {
        return 0x80000013;
    }
    iVar2 = 2;
    do {
        iVar3 = 30000;
        *(param_1 + 0x18) = 0x40;
        do {
            iVar3 = iVar3 + -1;
            fcn.00000aa6();
            if ((*(param_1 + 0x18) & 0x40) != 0) break;
        } while (iVar3 != 0);
        if ((iVar3 != 0) || (iVar2 = iVar2 + -1, iVar2 == 0)) {
            if (iVar3 != 0) {
                return 0;
            }
            return 0x80000007;
        }
    } while( true );
}


/* fcn.00000b61 @ 0xb61 */

uint32_t __fastcall fcn.00000b61(uint8_t *param_1,uint8_t *param_2,int param_3,char param_4)

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
                iVar3 = fcn.00000ae2();
                if (iVar3 == 0) {
                    return 0x80000012;
                }
                do {
                    if (param_3 == 0) goto code_r0x00000bcf;
                    uVar1 = *param_2;
                    iVar3 = iVar3 + -1;
                    param_2 = param_2 + 1;
                    param_1[0x24] = uVar1;
                    param_3 = param_3 + -1;
                } while (iVar3 != 0);
                iVar3 = 0;
            } while (param_3 != 0);
        }
code_r0x00000bcf:
        if (param_4 == '\0') {
            return 0;
        }
        if ((iVar3 == 0) && (iVar3 = fcn.00000ae2(), iVar3 == 0)) {
            return 0x80000012;
        }
        cVar2 = fcn.00000aba();
        if (cVar2 != '\0') {
            param_1[0x24] = *param_2;
            cVar2 = fcn.00000aba();
            if (cVar2 == '\0') {
                param_1[0x18] = 0x20;
                return 0;
            }
        }
    }
    return 0x80000015;
}


/* fcn.00000c19 @ 0xc19 */

uint32_t __fastcall fcn.00000c19(int param_1,uchar *param_2,int *param_3)

{
    char cVar1;
    int16_t iVar2;
    uchar *puVar3;
    
    puVar3 = param_2 + *param_3;
    if (param_2 < puVar3) {
        while (cVar1 = fcn.00000aba(), cVar1 != '\0') {
            iVar2 = fcn.00000ae2();
            if (iVar2 == 0) {
                return 0x80000012;
            }
            do {
                if (puVar3 <= param_2) goto code_r0x00000c76;
                cVar1 = fcn.00000aba();
                if (cVar1 == '\0') break;
                iVar2 = iVar2 + -1;
                *param_2 = *(param_1 + 0x24);
                param_2 = param_2 + 1;
            } while (iVar2 != 0);
            if (puVar3 <= param_2) break;
        }
    }
code_r0x00000c76:
    *param_3 = param_2 + (*param_3 - puVar3);
    cVar1 = fcn.00000aba();
    return -(cVar1 != '\0') & 0x80000005;
}


/* fcn.00000100 @ 0x100 */

uchar * fcn.00000100(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00000dd5 @ 0xdd5 */

void __fastcall fcn.00000dd5(uint32_t *param_1,uint32_t *param_2)

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
    
    if (&uStack_40 != param_2) {
        section..text(&uStack_40,param_2,0x40);
    }
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
    uVar23 = uVar23 + ((uVar2 ^ uVar5) & uVar8 ^ uVar2) + (uVar15 * 0x20 | uVar15 >> 0x1b) + 0x5a827999 + uVar4;
    uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
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
    uVar14 = ((uVar10 ^ uVar16) & uVar25 ^ uVar16) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar5 + uVar14 + 0x5a827999;
    uVar24 = uStack_8 >> 8 & 0xff00ff00 | uStack_8 << 0x18 | (uStack_8 & 0xff00) << 8 | uStack_8 >> 0x18;
    uVar16 = (uVar10 ^ (uVar10 ^ uVar26) & uVar9) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar24 + uVar16 + 0x5a827999;
    uVar25 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar18 = uStack_4 >> 8 & 0xff00ff00 | uStack_4 << 0x18 | (uStack_4 & 0xff00) << 8 | uStack_4 >> 0x18;
    uVar11 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar9 = uVar18 + (uVar16 * 0x20 | uVar16 >> 0x1b) + ((uVar26 ^ uVar25) & uVar14 ^ uVar26) + uVar10 + 0x5a827999;
    uVar14 = uVar6 ^ uVar5 ^ uVar8 ^ uVar21;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar26 = uVar26 + ((uVar25 ^ uVar11) & uVar16 ^ uVar25) + (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x5a827999 + uVar14;
    uVar13 = uVar24 ^ uVar15 ^ uVar7 ^ uVar13;
    uVar16 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar25 = uVar25 + ((uVar11 ^ uVar10) & uVar9 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x5a827999 + uVar16;
    uVar21 = uVar18 ^ uVar23 ^ uVar1 ^ uVar21;
    uVar9 = uVar21 << 1 | uVar21 < 0;
    uVar27 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar11 = uVar11 + ((uVar19 ^ uVar10) & uVar26 ^ uVar10) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x5a827999 + uVar9;
    uVar7 = uVar14 ^ uVar2 ^ uVar3 ^ uVar7;
    uVar6 = uVar7 << 1 | uVar7 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar10 = uVar10 + ((uVar19 ^ uVar27) & uVar25 ^ uVar19) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x5a827999 + uVar6;
    uVar21 = uVar17 ^ uVar22 ^ uVar1 ^ uVar16;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar19 = uVar19 + (uVar27 ^ uVar26 ^ uVar11) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x6ed9eba1 + uVar21;
    uVar13 = uVar5 ^ uVar4 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar27 = uVar27 + (uVar26 ^ uVar12 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar13;
    uVar7 = uVar24 ^ uVar8 ^ uVar22 ^ uVar6;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar26 = uVar26 + (uVar19 ^ uVar12 ^ uVar25) + (uVar27 * 0x20 | uVar27 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar1 = uVar18 ^ uVar15 ^ uVar4 ^ uVar21;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = uVar12 + (uVar20 ^ uVar27 ^ uVar25) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar14 ^ uVar23 ^ uVar8 ^ uVar13;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar25 = uVar25 + (uVar20 ^ uVar19 ^ uVar26) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar3;
    uVar22 = uVar2 ^ uVar15 ^ uVar7 ^ uVar16;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar20 = uVar20 + (uVar19 ^ uVar11 ^ uVar12) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar22;
    uVar4 = uVar17 ^ uVar23 ^ uVar1 ^ uVar9;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar10 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar19 = uVar19 + (uVar11 ^ uVar26 ^ uVar25) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar8 = uVar5 ^ uVar2 ^ uVar3 ^ uVar6;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar11 = uVar11 + (uVar20 ^ uVar26 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar8;
    uVar15 = uVar24 ^ uVar17 ^ uVar22 ^ uVar21;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar26 = uVar26 + (uVar12 ^ uVar19 ^ uVar10) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar15;
    uVar23 = uVar18 ^ uVar5 ^ uVar4 ^ uVar13;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar10 = uVar10 + (uVar12 ^ uVar20 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar23;
    uVar2 = uVar14 ^ uVar24 ^ uVar8 ^ uVar7;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar12 = uVar12 + (uVar20 ^ uVar25 ^ uVar26) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar5 = uVar18 ^ uVar15 ^ uVar1 ^ uVar16;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar24 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar20 = uVar20 + (uVar25 ^ uVar11 ^ uVar10) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar14 = uVar14 ^ uVar23 ^ uVar3 ^ uVar9;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar25 = uVar25 + (uVar12 ^ uVar11 ^ uVar24) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar14;
    uVar16 = uVar2 ^ uVar22 ^ uVar6 ^ uVar16;
    uVar16 = uVar16 << 1 | uVar16 < 0;
    uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar11 = uVar11 + (uVar17 ^ uVar20 ^ uVar24) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar16;
    uVar9 = uVar5 ^ uVar4 ^ uVar21 ^ uVar9;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar24 = uVar24 + (uVar17 ^ uVar18 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar6 = uVar14 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar17 = uVar17 + (uVar18 ^ uVar26 ^ uVar11) + (uVar24 * 0x20 | uVar24 >> 0x1b) + 0x6ed9eba1 + uVar6;
    uVar21 = uVar15 ^ uVar7 ^ uVar21 ^ uVar16;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar10 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar18 = uVar18 + (uVar26 ^ uVar12 ^ uVar24) + (uVar17 * 0x20 | uVar17 >> 0x1b) + 0x6ed9eba1 + uVar21;
    uVar13 = uVar23 ^ uVar1 ^ uVar13 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar24 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar26 = uVar26 + (uVar17 ^ uVar12 ^ uVar10) + (uVar18 * 0x20 | uVar18 >> 0x1b) + 0x6ed9eba1 + uVar13;
    uVar7 = uVar2 ^ uVar3 ^ uVar7 ^ uVar6;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar11 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar12 = uVar12 + (uVar24 ^ uVar18 ^ uVar10) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar1 = uVar5 ^ uVar22 ^ uVar1 ^ uVar21;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar25 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar10 = uVar10 + (uVar24 ^ uVar11 ^ uVar26) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar14 ^ uVar4 ^ uVar3 ^ uVar13;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar25 | uVar12) & uVar11 | uVar25 & uVar12) + uVar3 + uVar24 + 0x8f1bbcdc;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar22 = uVar8 ^ uVar22 ^ uVar7 ^ uVar16;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar4 = uVar15 ^ uVar4 ^ uVar1 ^ uVar9;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar26 | uVar10) & uVar25 | uVar26 & uVar10) + uVar22 + uVar11 + 0x8f1bbcdc;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar17 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar24 | uVar12) & uVar26 | uVar24 & uVar12) + uVar4 + uVar25 + 0x8f1bbcdc;
    uVar8 = uVar23 ^ uVar8 ^ uVar3 ^ uVar6;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = uVar2 ^ uVar15 ^ uVar22 ^ uVar21;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar17 | uVar10) & uVar12 | uVar17 & uVar10) + 0x8f1bbcdc + uVar8 + uVar26;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar11 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar25 | uVar24) & uVar17 | uVar25 & uVar24) + uVar15 + uVar12 + 0x8f1bbcdc;
    uVar23 = uVar5 ^ uVar23 ^ uVar4 ^ uVar13;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar11 | uVar10) & uVar25 | uVar11 & uVar10) + uVar23 + uVar17 + 0x8f1bbcdc;
    uVar2 = uVar14 ^ uVar2 ^ uVar8 ^ uVar7;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar18 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar12 | uVar24) & uVar11 | uVar12 & uVar24) + uVar2 + uVar25 + 0x8f1bbcdc;
    uVar5 = uVar5 ^ uVar15 ^ uVar1 ^ uVar16;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar26 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar10 | uVar18) & uVar12 | uVar10 & uVar18) + uVar5 + uVar11 + 0x8f1bbcdc;
    uVar14 = uVar14 ^ uVar23 ^ uVar3 ^ uVar9;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar25 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar26 | uVar24) & uVar18 | uVar26 & uVar24) + uVar14 + uVar12 + 0x8f1bbcdc;
    uVar12 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar16 = uVar2 ^ uVar22 ^ uVar6 ^ uVar16;
    uVar24 = uVar16 << 1 | uVar16 < 0;
    uVar17 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar16 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
             ((uVar12 | uVar10) & uVar26 | uVar12 & uVar10) + uVar24 + uVar18 + 0x8f1bbcdc;
    uVar9 = uVar5 ^ uVar4 ^ uVar21 ^ uVar9;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar26 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar17 | uVar25) & uVar12 | uVar17 & uVar25) + uVar9 + uVar26 + 0x8f1bbcdc;
    uVar6 = uVar14 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar18 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x8f1bbcdc +
             ((uVar18 | uVar16) & uVar17 | uVar18 & uVar16) + uVar6 + uVar12;
    uVar21 = uVar15 ^ uVar7 ^ uVar21 ^ uVar24;
    uVar10 = uVar21 << 1 | uVar21 < 0;
    uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar25 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar26 | uVar11) & uVar18 | uVar26 & uVar11) + uVar10 + uVar17 + 0x8f1bbcdc;
    uVar21 = uVar23 ^ uVar1 ^ uVar13 ^ uVar9;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar13 = (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x8f1bbcdc +
             ((uVar12 | uVar16) & uVar11 | uVar12 & uVar16) + uVar21 + uVar18;
    uVar7 = uVar2 ^ uVar3 ^ uVar7 ^ uVar6;
    uVar16 = uVar7 << 1 | uVar7 < 0;
    uVar18 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar7 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x8f1bbcdc +
            ((uVar17 | uVar25) & uVar12 | uVar17 & uVar25) + uVar16 + uVar11;
    uVar1 = uVar5 ^ uVar22 ^ uVar1 ^ uVar10;
    uVar25 = uVar1 << 1 | uVar1 < 0;
    uVar26 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar1 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
            ((uVar18 | uVar13) & uVar17 | uVar18 & uVar13) + uVar25 + uVar12;
    uVar13 = uVar14 ^ uVar4 ^ uVar3 ^ uVar21;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + 0x8f1bbcdc + ((uVar26 | uVar7) & uVar18 | uVar26 & uVar7) + uVar13 + uVar17
    ;
    uVar7 = uVar8 ^ uVar22 ^ uVar16 ^ uVar24;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar22 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x8f1bbcdc + ((uVar1 | uVar11) & uVar26 | uVar1 & uVar11) + uVar7 + uVar18
    ;
    uVar1 = uVar15 ^ uVar4 ^ uVar25 ^ uVar9;
    uVar17 = uVar1 << 1 | uVar1 < 0;
    uVar1 = uVar23 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar8 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar12 | uVar3) & uVar11 | uVar12 & uVar3) + uVar17 + uVar26;
    uVar26 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar3 = uVar2 ^ uVar15 ^ uVar7 ^ uVar10;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar4 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
            ((uVar8 | uVar22) & uVar12 | uVar8 & uVar22) + 0x8f1bbcdc + uVar1 + uVar11;
    uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar11 = (uVar4 * 0x20 | uVar4 >> 0x1b) + 0xca62c1d6 + (uVar8 ^ uVar26 ^ uVar18) + uVar3 + uVar12;
    uVar22 = uVar5 ^ uVar23 ^ uVar17 ^ uVar21;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar23 = (uVar11 * 0x20 | uVar11 >> 0x1b) + 0xca62c1d6 + (uVar26 ^ uVar19 ^ uVar4) + uVar22 + uVar8;
    uVar4 = uVar14 ^ uVar2 ^ uVar1 ^ uVar16;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar19 ^ uVar15) + uVar4 + uVar26;
    uVar8 = uVar5 ^ uVar3 ^ uVar25 ^ uVar24;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar2 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar23 = (uVar26 * 0x20 | uVar26 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar23 ^ uVar15) + uVar8 + uVar19;
    uVar14 = uVar14 ^ uVar22 ^ uVar13 ^ uVar9;
    uStack_40 = uVar14 << 1 | uVar14 < 0;
    uVar5 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar14 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar2 ^ uVar26) + uStack_40 + uVar15;
    uVar24 = uVar4 ^ uVar7 ^ uVar6 ^ uVar24;
    uStack_3c = uVar24 << 1 | uVar24 < 0;
    uVar26 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar24 = (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar5 ^ uVar23) + uStack_3c + uVar12;
    uVar9 = uVar8 ^ uVar17 ^ uVar10 ^ uVar9;
    uStack_38 = uVar9 << 1 | uVar9 < 0;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar23 = (uVar24 * 0x20 | uVar24 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar26 ^ uVar14) + uStack_38 + uVar2;
    uVar6 = uStack_40 ^ uVar1 ^ uVar21 ^ uVar6;
    uStack_34 = uVar6 << 1 | uVar6 < 0;
    uVar9 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar5 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar24 ^ uVar26 ^ uVar15) + uStack_34 + uVar5;
    uVar14 = uVar3 ^ uVar16 ^ uVar10 ^ uStack_3c;
    uStack_30 = uVar14 << 1 | uVar14 < 0;
    uVar2 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar6 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar23 ^ uVar15) + uStack_30 + uVar26;
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
    uVar21 = (uVar2 ^ uVar23 ^ uVar7) + uStack_14 + uVar16 + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6;
    uVar15 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar1 = uVar4 ^ uVar3 ^ uStack_1c ^ uStack_30;
    uVar7 = uVar8 ^ uVar22 ^ uStack_18 ^ uStack_2c;
    uStack_10 = uVar1 << 1 | uVar1 < 0;
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
    param_1[2] = param_1[2] + (uVar3 >> 2 | uVar3 * 0x40000000);
    param_1[4] = param_1[4] + uVar21;
    *param_1 = (uVar21 ^ uVar1 ^ uVar3) + *param_1 + uStack_4 + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6 + uVar13;
    fcn.00000100(&uStack_40,0x40,0);
    return;
}


