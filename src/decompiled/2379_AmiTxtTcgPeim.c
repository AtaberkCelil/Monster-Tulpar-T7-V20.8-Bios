// decompiled by r2ghidra: 2379_AmiTxtTcgPeim.te
// functions: 35

/* fcn.0000039b @ 0x39b */

uint __fastcall fcn.0000039b(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int32_t var_1078h;
    uint32_t var_1063h;
    int32_t var_3cch;
    uint32_t var_30bh;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = (**(*param_2 + 0x20))(param_2,0xffd2c55c,0,0,&var_8h);
    if (-1 < iVar2) {
        var_4h = 0xca9;
        iVar2 = (**var_8h)(var_8h,0xffd2c66c,0xffd2c5bc,0,&var_4h,&var_1078h);
        if (-1 < iVar2) {
            var_4h = 0x3c1;
            iVar2 = (**var_8h)(var_8h,0xffd2c678,0xffd2c56c,0,&var_4h,&var_3cch);
            if (((-1 < iVar2) &&
                (((var_30bh != '\0' || (cVar1 = fcn.00000186(), cVar1 != '\0')) && (var_1063h != '\0')))) &&
               ((*0xfed40000 != '\0' && (*0xfed40000 != -1)))) {
                uVar3 = (**(*param_2 + 0x24))(param_2,0xffd2c5cc);
                return uVar3;
            }
        }
    }
    return 0;
}


/* entry0 @ 0x17d */

uint entry0(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int32_t var_1078h;
    int8_t var_1063h;
    int32_t var_3cch;
    int8_t var_30bh;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = (**(*param_2 + 0x20))(param_2,0xffd2c55c,0,0,&var_8h);
    if (-1 < iVar2) {
        var_4h = 0xca9;
        iVar2 = (**var_8h)(var_8h,0xffd2c66c,0xffd2c5bc,0,&var_4h,&var_1078h);
        if (-1 < iVar2) {
            var_4h = 0x3c1;
            iVar2 = (**var_8h)(var_8h,0xffd2c678,0xffd2c56c,0,&var_4h,&var_3cch);
            if (((-1 < iVar2) && (((var_30bh != 0 || (cVar1 = fcn.00000186(), cVar1 != '\0')) && (var_1063h != 0)))) &&
               ((*0xfed40000 != '\0' && (*0xfed40000 != -1)))) {
                uVar3 = (**(*param_2 + 0x24))(param_2,0xffd2c5cc);
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.00000801 @ 0x801 */

uint __fastcall fcn.00000801(uint param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.000007b8();
    return param_1;
}


/* fcn.000007b8 @ 0x7b8 */

void __fastcall fcn.000007b8(uint32_t param_1)

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


/* fcn.0000073f @ 0x73f */

uint32_t fcn.0000073f(void)

{
    uint32_t uVar1;
    int32_t *arg_8h;
    int32_t *arg_ch;
    int32_t var_404h;
    int32_t var_3feh;
    int32_t var_4h;
    
    var_4h = 0x400;
    arg_ch = &var_404h;
    arg_8h = &var_4h;
    fcn.0000079f();
    uVar1 = fcn.000005d3(arg_8h,arg_ch);
    if ((-1 < uVar1) && (var_3feh != 0)) {
        uVar1 = fcn.0000079f();
        uVar1 = uVar1 | 0x80000000;
    }
    return uVar1;
}


/* fcn.0000079f @ 0x79f */

uint __fastcall fcn.0000079f(uint param_1)

{
    uint16_t uVar1;
    
    uVar1 = param_1 >> 0x10;
    return CONCAT22(param_1 << 8 | param_1 >> 8,uVar1 << 8 | uVar1 >> 8);
}


/* fcn.000005d3 @ 0x5d3 */

int __cdecl fcn.000005d3(int32_t arg_8h,int32_t arg_ch)

{
    bool bVar1;
    char cVar2;
    int in_ECX;
    int iVar3;
    ulong uVar4;
    int32_t iStack_18;
    uint uStack_14;
    
    bVar1 = false;
    if ((*0xfed40000 == 0) || (*0xfed40000 == 0xff)) {
        return -0x7ffffff9;
    }
    if (((*0xfed40030 == 0xffffffff) || (*0xfed40030 == 0)) || ((*0xfed40030 & 0xf) == 0)) {
        bVar1 = true;
    }
    if (bVar1) {
        uStack_14 = *arg_8h;
        iStack_18 = arg_ch;
        if ((*0xfed40000 & 0x20) == 0) {
            *0xfed40000 = 2;
            iVar3 = 30000;
            do {
                fcn.00000b61();
                if (((*0xfed40000 & 0x20) != 0) && (*0xfed40000 < '\0')) break;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        iVar3 = fcn.00000d62(&iStack_18,1);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = 0x1d4c;
        cVar2 = fcn.00000b78();
        if (cVar2 != '\0') {
            *0xfed40000 = 0x20;
            cVar2 = fcn.00000b78();
            if (cVar2 != '\0') {
                do {
                    fcn.00000b61();
                    iVar3 = iVar3 + -1;
                    cVar2 = fcn.00000b78();
                    if (cVar2 == '\0') break;
                } while (iVar3 != 0);
                fcn.00000b78();
            }
        }
    }
    else {
        if ((arg_ch == 0) || (in_ECX == 0)) {
            iVar3 = -0x7ffffffe;
        }
        else {
            cVar2 = fcn.0000085c();
            if (cVar2 == '\0') {
                return -0x7ffffffd;
            }
            iVar3 = fcn.000009f0();
            if (iVar3 < 0) {
                return iVar3;
            }
            iVar3 = fcn.00000a82();
        }
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    uVar4 = fcn.0000079f();
    *arg_8h = uVar4;
    return uVar4 >> 0x20;
}


/* fcn.00000508 @ 0x508 */

uint32_t __cdecl fcn.00000508(int32_t arg_7ch)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int32_t var_64h;
    int32_t var_68h;
    uchar auStack_544 [6];
    int iStack_53e;
    uint16_t uStack_536;
    int32_t var_4d8h;
    int32_t var_4d2h;
    int16_t var_4cah;
    int32_t var_4c8h;
    ushort uStack_ac;
    uint uStack_aa;
    uint uStack_a6;
    uint uStack_a2;
    uint uStack_9e;
    uint uStack_9a;
    uint uStack_96;
    ushort uStack_92;
    uchar uStack_90;
    uint uStack_8f;
    ushort uStack_8b;
    int16_t var_40h;
    int32_t var_3eh;
    int32_t var_3ah;
    int32_t var_36h;
    int32_t var_32h;
    int32_t var_2eh;
    int32_t var_2ah;
    int16_t var_26h;
    int8_t var_24h;
    int32_t var_23h;
    int16_t var_1fh;
    uint uStack_8;
    
    uStack_a6 = 0x4e010000;
    uStack_ac = 0x280;
    uStack_a2 = fcn.0000079f();
    uStack_96 = 0x9000040;
    uStack_92 = 0;
    uStack_90 = 0;
    uStack_8f = 0x8000000;
    uStack_9e = uStack_a2;
    uStack_9a = fcn.0000079f();
    uStack_8b = 0;
    uStack_aa = fcn.0000079f();
    uStack_8 = 0x495;
    uVar1 = fcn.000005d3(&uStack_8,auStack_544);
    if (-1 < uVar1) {
        if (iStack_53e == 0) {
            uVar2 = 8;
            if ((7 < uStack_536) || (uVar2 = uStack_536, uStack_536 != 0)) {
                fcn.00000789(uVar2);
            }
        }
        else {
            uVar1 = fcn.0000079f();
            uVar1 = uVar1 | 0x80000000;
        }
    }
    return uVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 3769 named .text
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


/* fcn.000001c7 @ 0x1c7 */

uint __fastcall fcn.000001c7(int *param_1)

{
    int iVar1;
    uint uVar2;
    uint32_t var_4h;
    
    var_4h = param_1;
    iVar1 = (**(*param_1 + 0x28))(param_1,&var_4h);
    if (iVar1 < 0) {
code_r0x000001de:
        uVar2 = 0x80000018;
    }
    else {
        iVar1 = fcn.0000073f();
        if (iVar1 < 0) {
            iVar1 = fcn.0000073f();
            if (iVar1 < 0) {
                return 0x80000007;
            }
            iVar1 = (**(*param_1 + 0x18))(param_1,0xffd2c5f4);
            if (iVar1 < 0) goto code_r0x000001de;
        }
        else {
            (**(*param_1 + 0x18))(param_1,0xffd2c5f4);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0000023a @ 0x23a */

int __fastcall fcn.0000023a(int *param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    var_4h = param_1;
    iVar1 = (**(*param_1 + 0x28))(param_1,&var_4h);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = fcn.0000073f();
    if (iVar1 < 0) {
        iVar1 = fcn.0000073f();
        if (iVar1 < 0) {
            return -0x7ffffff9;
        }
        iVar1 = (**(*param_1 + 0x18))(param_1,0xffd2c5f4);
        if (iVar1 < 0) {
            return -0x7fffffe8;
        }
    }
    else {
        (**(*param_1 + 0x18))(param_1,0xffd2c5f4);
    }
    return 0;
}


/* fcn.0000045b @ 0x45b */

uint32_t __cdecl fcn.0000045b(int32_t arg_8h)

{
    uint32_t uVar1;
    uint32_t *in_EDX;
    ulong uVar2;
    int32_t var_41ch;
    int32_t var_416h;
    int32_t var_412h;
    int32_t var_40eh;
    int16_t var_1ch;
    int32_t var_1ah;
    int32_t var_16h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t var_ah;
    int32_t var_4h;
    
    var_4h = 0x400;
    var_1ch = -0x3f00;
    var_1ah = 0x16000000;
    var_16h = -0x31000000;
    var_12h = fcn.0000079f();
    var_eh = 0;
    var_ah = fcn.0000079f();
    uVar1 = fcn.000005d3(&var_4h,&var_41ch);
    if ((uVar1 < 0) || (var_416h != 0)) {
        uVar2 = fcn.0000079f();
        uVar1 = uVar2 | uVar2 >> 0x20 | 0x80000000;
    }
    else if (*in_EDX != 0) {
        uVar1 = fcn.0000079f();
        if (*in_EDX < uVar1) {
            uVar1 = *in_EDX;
        }
        *in_EDX = uVar1;
        if (uVar1 != 0) {
            fcn.00000789(uVar1);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00000186 @ 0x186 */

uint8_t fcn.00000186(void)

{
    int16_t iVar1;
    
    iVar1 = 0x2ee;
    do {
        if (*0xfed40000 == 0xff) {
            return 0;
        }
        if (*0xfed40000 == 0) {
            return 0;
        }
        if (*0xfed40000 < '\0') {
            return ~*0xfed40000 & 1;
        }
        fcn.00000801();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0;
}


/* fcn.00000789 @ 0x789 */

int __fastcall fcn.00000789(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000b61 @ 0xb61 */

void fcn.00000b61(void)

{
    int iVar1;
    
    iVar1 = 5;
    do {
        fcn.00000801();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00000d62 @ 0xd62 */

int __fastcall fcn.00000d62(uint32_t param_1,int param_2,int param_3,int param_4)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    if ((param_2 == 0) || (param_3 == 0)) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar3 = fcn.00000bd3();
        if (iVar3 < 0) {
            iVar3 = -0x7ffffff9;
        }
        else {
            bVar1 = false;
            uVar4 = 0;
            do {
                if (param_1 <= uVar4) break;
                param_4 = param_4 + -1;
                iVar3 = fcn.00000c27(*(param_2 + 4 + uVar4 * 8),param_4 == 0);
                uVar4 = uVar4 + 1;
            } while (-1 < iVar3);
            if (-1 < iVar3) {
                do {
                    cVar2 = fcn.00000b78();
                } while (cVar2 == '\0');
                iVar3 = -0x7ffffffb;
                do {
                    if (bVar1) break;
                    iVar3 = fcn.00000ce0(param_3 + 4);
                    bVar1 = true;
                } while (iVar3 == -0x7ffffffb);
            }
            *0xfed40018 = 0x40;
        }
    }
    return iVar3;
}


/* fcn.00000b78 @ 0xb78 */

uint8_t __fastcall fcn.00000b78(uint8_t *param_1,uint8_t param_2)

{
    int iVar1;
    
    iVar1 = 30000;
    do {
        fcn.00000b61();
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
            return 0;
        }
    } while (-1 < *param_1);
    return *param_1 & param_2;
}


/* fcn.0000085c @ 0x85c */

uint8_t fcn.0000085c(void)

{
    char cVar1;
    uint8_t extraout_CH;
    
    cVar1 = fcn.00000848();
    if (cVar1 == '\0') {
        return 0;
    }
    return extraout_CH >> 5 & 2;
}


/* fcn.00000848 @ 0x848 */

int fcn.00000848(void)

{
    unkuint3 Var1;
    
    Var1 = *0xfed40030 >> 8;
    if ((*0xfed40030 != -1) && (*0xfed40030 != 0)) {
        return CONCAT31(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.000009f0 @ 0x9f0 */

//WARNING: Removing unreachable block (ram,0x00000a72)

int __fastcall fcn.000009f0(uchar *param_1,int param_2)

{
    char cVar1;
    int iVar2;
    
    cVar1 = fcn.0000085c();
    if (cVar1 == '\x02') {
        iVar2 = fcn.00000877();
        if ((-1 < iVar2) && (iVar2 = fcn.00000946(), -1 < iVar2)) {
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
            iVar2 = fcn.000008f6();
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


/* fcn.00000a82 @ 0xa82 */

int __fastcall fcn.00000a82(int32_t *param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t *piVar4;
    int iVar5;
    int32_t var_8h;
    int32_t var_4h;
    
    cVar1 = fcn.0000085c();
    if (cVar1 == '\x02') {
        iVar2 = fcn.000008f6();
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
                    uVar3 = fcn.0000079f();
                    *param_2 = uVar3;
                    if (*0xfed40064 < uVar3) {
                        return -0x7ffffffb;
                    }
                    if (9 < uVar3) {
                        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                            *param_1 = *(iVar5 + param_1);
                            param_1 = param_1 + 1;
                        }
                        iVar2 = fcn.0000098b();
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


/* fcn.00000e9a @ 0xe9a */

uint __cdecl fcn.00000e9a(int32_t arg_8h)

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
    iVar1 = fcn.00000e6f();
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


/* fcn.00000930 @ 0x930 */

uint32_t fcn.00000930(void)

{
    unkbyte3 Var1;
    
    Var1 = *0xfed40044 >> 8;
    if ((*0xfed40044 & 1) != 0) {
        return CONCAT31(Var1,0xff);
    }
    return CONCAT31(Var1,*0xfed40044 >> 1) & 0xffffff01;
}


/* fcn.00000877 @ 0x877 */

//WARNING: Variable defined which should be unmapped: var_1h

int __fastcall fcn.00000877(uint32_t param_1)

{
    int iVar1;
    int iVar2;
    uchar auStack_8 [3];
    uint32_t var_1h;
    
    _auStack_8 = param_1 & 0xffffff;
    iVar2 = 0;
    iVar1 = fcn.00000e9a(&var_1h);
    if ((iVar1 < 0) || (var_1h == '\0')) {
        do {
            if (((*0xfed40000 & 0x1c) == 0) && (((*0xfed40000 & 2) != 0 && (*0xfed40000 < '\0')))) {
                auStack_8 = CONCAT12(0,auStack_8._0_2_);
                iVar1 = fcn.00000e9a(auStack_8 + 2);
                if ((-1 < iVar1) && (auStack_8[2] != '\0')) {
                    return iVar1;
                }
                return 0;
            }
            *0xfed40008 = 1;
            fcn.00000801();
            iVar2 = iVar2 + 1;
        } while (iVar2 != 15000);
        iVar1 = -0x7ffffff9;
    }
    return iVar1;
}


/* fcn.00000946 @ 0x946 */

uint fcn.00000946(void)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 0;
    cVar1 = fcn.00000930();
    if (cVar1 != '\0') {
        do {
            *0xfed40040 = 1;
            fcn.00000801();
            if (iVar2 == 15000) {
                return 0x80000007;
            }
            iVar2 = iVar2 + 1;
            cVar1 = fcn.00000930();
        } while (cVar1 == '\x01');
        if (iVar2 == 15000) {
            return 0x80000007;
        }
    }
    return 0;
}


/* fcn.000008f6 @ 0x8f6 */

uint fcn.000008f6(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0xfed4004c != 0) {
        do {
            fcn.00000801();
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


/* fcn.0000098b @ 0x98b */

//WARNING: Variable defined which should be unmapped: var_1h

uint fcn.0000098b(void)

{
    char cVar1;
    int iVar2;
    uint32_t var_1h;
    
    iVar2 = 0;
    fcn.00000e9a(&var_1h);
    cVar1 = fcn.00000930();
    if (cVar1 != '\x01') {
        do {
            *0xfed40040 = 2;
            fcn.00000801();
            if (iVar2 == 15000) {
                return 0x80000007;
            }
            iVar2 = iVar2 + 1;
            cVar1 = fcn.00000930();
        } while (cVar1 == '\0');
        if (iVar2 == 15000) {
            return 0x80000007;
        }
    }
    return 0;
}


/* fcn.00000ba0 @ 0xba0 */

void fcn.00000ba0(void)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    
    iVar1 = 0x1d4c;
    iVar2 = 0;
    do {
        fcn.00000b61();
        bVar3 = iVar1 != 0;
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + -1 + bVar3;
        if (*0xfed40019 != 0) {
            return;
        }
    } while ((iVar2 != 0) || (iVar1 != 0));
    return;
}


/* fcn.00000bd3 @ 0xbd3 */

uint fcn.00000bd3(void)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    
    cVar1 = fcn.00000b78();
    if (cVar1 == '\0') {
        uVar2 = 0x80000013;
    }
    else {
        iVar4 = 2;
        do {
            iVar3 = 30000;
            *0xfed40018 = 0x40;
            do {
                iVar3 = iVar3 + -1;
                fcn.00000b61();
                if ((*0xfed40018 & 0x40) != 0) break;
            } while (iVar3 != 0);
            if (iVar3 != 0) {
                return 0;
            }
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar2 = 0x80000007;
    }
    return uVar2;
}


/* fcn.00000c27 @ 0xc27 */

uint32_t __cdecl fcn.00000c27(int32_t arg_8h,int8_t arg_ch)

{
    char cVar1;
    int16_t iVar2;
    uchar *in_EDX;
    
    iVar2 = 0;
    if (arg_8h == 0) {
        return -(arg_ch != 0) & 0x80000002;
    }
    if ((*0xfed40000 & 0x20) != 0) {
        if (arg_ch != 0) {
            arg_8h = arg_8h + -1;
        }
        while (arg_8h != 0) {
            iVar2 = fcn.00000ba0();
            if (iVar2 == 0) {
                return 0x80000012;
            }
            do {
                if (arg_8h == 0) goto code_r0x00000c90;
                *0xfed40024 = *in_EDX;
                iVar2 = iVar2 + -1;
                in_EDX = in_EDX + 1;
                arg_8h = arg_8h + -1;
            } while (iVar2 != 0);
        }
code_r0x00000c90:
        if (arg_ch == 0) {
            return 0;
        }
        if ((iVar2 == 0) && (iVar2 = fcn.00000ba0(), iVar2 == 0)) {
            return 0x80000012;
        }
        cVar1 = fcn.00000b78();
        if (cVar1 != '\0') {
            *0xfed40024 = *in_EDX;
            cVar1 = fcn.00000b78();
            if (cVar1 == '\0') {
                *0xfed40018 = 0x20;
                return 0;
            }
        }
    }
    return 0x80000015;
}


/* fcn.00000ce0 @ 0xce0 */

uint32_t __fastcall fcn.00000ce0(uint param_1,uchar *param_2,int *param_3)

{
    char cVar1;
    int16_t iVar2;
    uchar *puVar3;
    
    puVar3 = param_2 + *param_3;
    do {
        if ((puVar3 <= param_2) || (cVar1 = fcn.00000b78(), cVar1 == '\0')) {
code_r0x00000d39:
            *param_3 = param_2 + (*param_3 - puVar3);
            cVar1 = fcn.00000b78();
            return -(cVar1 != '\0') & 0x80000005;
        }
        iVar2 = fcn.00000ba0();
        if (iVar2 == 0) {
            return 0x80000012;
        }
        do {
            if (puVar3 <= param_2) goto code_r0x00000d39;
            cVar1 = fcn.00000b78();
            if (cVar1 == '\0') break;
            iVar2 = iVar2 + -1;
            *param_2 = *0xfed40024;
            param_2 = param_2 + 1;
        } while (iVar2 != 0);
    } while( true );
}


/* fcn.00000e23 @ 0xe23 */

int32_t fcn.00000e23(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000f2c @ 0xf2c */

uint32_t __fastcall fcn.00000f2c(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0xffd2c59c;
    if ((((*0xffd2c59c == *param_2) && (uVar1 = *0xffd2c5a0, *0xffd2c5a0 == param_2[1])) &&
        (uVar1 = *0xffd2c5a4, *0xffd2c5a4 == param_2[2])) && (uVar1 = *0xffd2c5a8, *0xffd2c5a8 == param_2[3])) {
        return CONCAT31(*0xffd2c5a8 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000e4e @ 0xe4e */

int16_t * __fastcall fcn.00000e4e(uint param_1,int16_t *param_2)

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


/* fcn.00000e6f @ 0xe6f */

uint __fastcall fcn.00000e6f(uint param_1)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.00000e23(param_1);
    do {
        iVar2 = fcn.00000e4e();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000f2c();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


