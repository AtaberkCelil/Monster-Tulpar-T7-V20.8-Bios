// decompiled by r2ghidra: 1994_PeiPciePhyFwLoadingInit.te
// functions: 55

/* entry0 @ 0x250 */

void __fastcall entry0(uint param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t *arg_ch;
    uint uVar4;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    arg_ch = &var_4h;
    uVar4 = param_1;
    fcn.00000864(param_1,arg_ch);
    iVar2 = fcn.000002c8(param_1,arg_ch,uVar4);
    cVar1 = (**(iVar2 + 0x18))(0x17c);
    if (cVar1 == '\0') {
        iVar2 = fcn.000002c8();
        uVar3 = (**(iVar2 + 4))(0x16d);
        if ((uVar3 & 1) != 0) {
            var_4h = &var_ch;
            InterruptDescriptorTableRegister();
            uVar4 = 0x3bb0;
            goto code_r0x000002b1;
        }
    }
    var_4h = &var_14h;
    InterruptDescriptorTableRegister();
    uVar4 = 0x3bbc;
    unique0x10000081 = stack0xffffffea;
code_r0x000002b1:
    (**(**(*NULL + -4) + 0x24))(*(*NULL + -4),uVar4);
    return;
}


/* fcn.00000864 @ 0x864 */

//WARNING: Removing unreachable block (ram,0x0000088f)
//WARNING: Removing unreachable block (ram,0x00000880)
//WARNING: Removing unreachable block (ram,0x00000888)
//WARNING: Removing unreachable block (ram,0x0000089e)

uint __cdecl fcn.00000864(uint noname_0,int32_t arg_ch)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Version_info(1);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 0xc);
    }
    return 1;
}


/* fcn.000002c8 @ 0x2c8 */

int32_t __fastcall fcn.000002c8(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000301(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000301 @ 0x301 */

void __cdecl fcn.00000301(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000486 @ 0x486 */

int fcn.00000486(void)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t arg_ch;
    uint extraout_ECX;
    uint noname_0;
    uint uVar6;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    int iVar7;
    uint8_t uStack_25;
    uint32_t uStack_24;
    uint32_t uStack_20;
    int iStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
    
    uStack_24 = 0;
    iVar7 = 0;
    iVar3 = fcn.00000938();
    if (iVar3 != 0) {
        iVar7 = *(iVar3 + 0x813);
    }
    cVar1 = fcn.0000070c(extraout_ECX,extraout_ECX);
    if ((cVar1 != '\x04') && ((cVar1 = fcn.0000038a(), cVar1 == '\0' || (iVar7 == 0)))) {
        return -0x7ffffffd;
    }
    iVar7 = 0x40;
    uVar4 = fcn.0000080e();
    if (uVar4 == 0) {
        return -0x7ffffff7;
    }
    uStack_20 = 0x8000;
    iStack_18 = 0;
    iVar5 = fcn.00000301(noname_0,&iStack_18);
    iVar3 = iStack_18;
    if ((iVar5 < 0) || (iStack_18 == 0)) {
        iVar3 = 0;
        uStack_24 = fcn.000007b9();
    }
    else {
        iVar5 = fcn.000003dd(&uStack_24,&iStack_10,&iStack_1c);
        if (iVar5 < 0) {
            return iVar5;
        }
    }
    if (uStack_24 == 0) {
        return -0x7ffffff7;
    }
    fcn.00000853();
    iVar2 = fcn.0000073e(0xb0000,0);
    uVar6 = 0xffff;
    if (iVar2 != -1) {
        fcn.0000073e(0xb0004,0);
        fcn.00000779(0xb0004,0);
        uVar6 = extraout_ECX_00;
    }
    iVar5 = fcn.00000aee(uVar6,&uStack_20,&uStack_14,&uStack_25,uVar4);
    if (iVar5 < 0) {
        return iVar5;
    }
    fcn.00000a78();
    iVar2 = fcn.0000073e(0xb0000,0);
    uVar6 = 0xffff;
    if (iVar2 != -1) {
        fcn.0000073e(0xb0004,0);
        fcn.00000779(0xb0004,0);
        uVar6 = extraout_ECX_01;
    }
    if ((uStack_14 != 0) && (cVar1 = fcn.0000070c(uVar6,uVar6), cVar1 != '\x04')) {
        fcn.00000cb9();
        fcn.00000ccd(0x54);
        return -0x7fffffe6;
    }
    uStack_14 = uStack_25;
    if (uStack_14 == 1) {
        iVar7 = 0x14;
    }
    else if (uStack_14 == 2) {
        iVar7 = 0x20;
    }
    else if (uStack_14 == 3) {
        iVar7 = 0x30;
    }
    else if (uStack_14 != 4) {
        iVar7 = 0;
    }
    arg_ch = fcn.0000080e();
    if (arg_ch != 0) {
        cVar1 = fcn.000009e7(uStack_20,arg_ch);
        if (cVar1 != '\0') {
            if ((iVar7 == 0) || (arg_ch == uVar4)) {
                iVar7 = 0;
            }
            else {
                iVar7 = fcn.00000100(arg_ch,uVar4,iVar7);
            }
            if (iVar7 == 0) {
                fcn.00000963();
                if (iVar3 == 0) {
                    if (uStack_24 != 0) {
                        fcn.0000035a(uStack_24,0);
                    }
                }
                else {
                    if (iStack_1c != 0) {
                        (**(iVar3 + 8))(iVar3,iStack_1c,0,0);
                        (**(iVar3 + 0x10))(iVar3,iStack_1c);
                    }
                    if (iStack_10 != 0 || iStack_c != 0) {
                        (**(iVar3 + 0x18))(iVar3,8,&iStack_10);
                    }
                }
                return 0;
            }
        }
        return -0x7fffffe6;
    }
    return -0x7ffffff7;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 14619 named .text
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


/* fcn.000008a8 @ 0x8a8 */

//WARNING: Removing unreachable block (ram,0x000008c1)

int64_t __cdecl fcn.000008a8(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00000938 @ 0x938 */

uint __fastcall fcn.00000938(uint param_1)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.000008ec(param_1);
    do {
        iVar2 = fcn.00000917();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000826();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


/* fcn.0000070c @ 0x70c */

uchar fcn.0000070c(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *0xc00000fc;
}


/* fcn.0000038a @ 0x38a */

ulong fcn.0000038a(void)

{
    uint64_t uVar1;
    int64_t iVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = *0xfb543018;
    iVar2 = fcn.000008a8(*0xfb54301c,0);
    return CONCAT44(iVar2 + uVar1 >> 0x2c,(iVar2 + uVar1 >> 0xc & 0xf) != 0);
}


/* fcn.0000080e @ 0x80e */

int __fastcall fcn.0000080e(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000007d7();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.000007d7 @ 0x7d7 */

int32_t __fastcall fcn.000007d7(uint param_1)

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


/* fcn.000003dd @ 0x3dd */

int __thiscall fcn.000003dd(int param_1,int *param_2,uint *param_3,int *param_4)

{
    int iVar1;
    int iStack_4;
    
    iVar1 = -0x7ffffffe;
    if (param_1 != 0) {
        *param_2 = 0;
        *param_4 = 0;
        *param_3 = 0;
        param_3[1] = 0;
        iStack_4 = param_1;
        iVar1 = (**(param_1 + 0x14))(param_1,4,8,param_2,0,0);
        if (-1 < iVar1) {
            iStack_4 = 0x8000;
            iVar1 = (**(param_1 + 0xc))(param_1,2,*param_2,&iStack_4,param_3,param_4);
            if ((-1 < iVar1) && (iVar1 = (**(param_1 + 8))(param_1,*param_4,3,0), -1 < iVar1)) {
                return iVar1;
            }
        }
        if (*param_4 != 0) {
            (**(param_1 + 8))(param_1,*param_4,0,0);
            (**(param_1 + 0x10))(param_1,*param_4);
        }
        if (*param_2 != 0) {
            (**(param_1 + 0x18))(param_1,8,*param_2);
        }
    }
    return iVar1;
}


/* fcn.000007b9 @ 0x7b9 */

int32_t fcn.000007b9(void)

{
    int iVar1;
    int32_t var_8h;
    
    iVar1 = fcn.0000032e(&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000853 @ 0x853 */

uint __fastcall fcn.00000853(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.0000073e @ 0x73e */

ushort __cdecl fcn.0000073e(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000779 @ 0x779 */

uint __cdecl fcn.00000779(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.00000aee @ 0xaee */

int __fastcall
fcn.00000aee(uint param_1,uint32_t param_2,uint param_3,uint32_t *param_4,uint32_t *param_5,char *param_6,
            int param_7)

{
    int iVar1;
    uint32_t *puVar2;
    
    if ((((param_2 == 0) || (param_4 == NULL)) || (param_5 == NULL)) || ((param_6 == NULL || (param_7 == 0)))) {
        iVar1 = -0x7ffffffe;
    }
    else {
        iVar1 = fcn.00000bff();
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffd;
        }
        else {
            puVar2 = fcn.0000080e();
            if (puVar2 == NULL) {
                iVar1 = -0x7ffffff7;
            }
            else {
                puVar2[4] = 0;
                *puVar2 = -0x10;
                puVar2[3] = param_2;
                *puVar2 = *puVar2 & 0xffffa1ff | 0x2100;
                puVar2[1] = 1;
                puVar2[2] = 1;
                puVar2[5] = *param_4;
                iVar1 = fcn.00000c31();
                if (-1 < iVar1) {
                    if (((*puVar2 == -0x10) && ((*puVar2 & 0x7f00) == 0x2100)) &&
                       (((*puVar2 & 0x8000) != 0 && (*(puVar2 + 3) == '\0')))) {
                        *param_4 = puVar2[1];
                        *param_5 = puVar2[4];
                        *param_6 = puVar2[5];
                        fcn.000002e4(0x40);
                        iVar1 = 0;
                    }
                    else {
                        iVar1 = -0x7ffffff9;
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00000a78 @ 0xa78 */

uint __fastcall fcn.00000a78(uint param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00000301(param_1,&var_4h);
    if (iVar1 < 0) {
        uVar2 = 0x8000000e;
    }
    else {
        iVar1 = (**(var_4h + 0x14))(&var_8h);
        if (iVar1 < 0) {
            uVar2 = 0x80000003;
        }
        else if (var_8h == 2) {
            fcn.000000e0(&var_10h,8);
            var_10h = var_10h & 0xffff85f0U | 0x5f0;
            uVar2 = (**(var_4h + 8))(0,&var_10h,8,0,7);
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00000cb9 @ 0xcb9 */

uint __fastcall fcn.00000cb9(uint16_t param_1,uint32_t param_2)

{
    return *((param_2 & 0xff | 0xfffffb00) << 0x10 | param_1);
}


/* fcn.00000ccd @ 0xccd */

uint __fastcall fcn.00000ccd(uint param_1,uint16_t param_2,uint8_t param_3)

{
    *((param_3 | 0xfffffb00) << 0x10 | param_2) = param_1;
    return param_1;
}


/* fcn.000009e7 @ 0x9e7 */

bool __cdecl fcn.000009e7(uint32_t arg_8h,uint32_t arg_ch)

{
    int iVar1;
    int in_ECX;
    int in_EDX;
    
    if (in_ECX == 1) {
        if (arg_ch == 0) {
            return false;
        }
        if ((in_EDX == 0) && (arg_8h != 0)) {
            return false;
        }
        iVar1 = fcn.00001770(in_EDX,arg_8h,arg_ch);
    }
    else if (in_ECX == 2) {
        if (arg_ch == 0) {
            return false;
        }
        if ((in_EDX == 0) && (arg_8h != 0)) {
            return false;
        }
        iVar1 = fcn.00002f20(in_EDX,arg_8h,arg_ch);
    }
    else if (in_ECX == 3) {
        if (arg_ch == 0) {
            return false;
        }
        if ((in_EDX == 0) && (arg_8h != 0)) {
            return false;
        }
        iVar1 = fcn.00002360(in_EDX,arg_8h,arg_ch);
    }
    else {
        if (in_ECX != 4) {
            return false;
        }
        if (arg_ch == 0) {
            return false;
        }
        if ((in_EDX == 0) && (arg_8h != 0)) {
            return false;
        }
        iVar1 = fcn.000023d0(in_EDX,arg_8h,arg_ch);
    }
    return iVar1 != 0;
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


/* fcn.00000963 @ 0x963 */

uint __fastcall fcn.00000963(uint16_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint16_t *puVar3;
    
    uVar1 = 0;
    puVar3 = param_1;
    if (param_2 != 0) {
        do {
            uVar2 = 0;
            uVar1 = uVar1 + 4;
            if ((puVar3[1] == 0) && (*puVar3 == 0)) break;
            if (*puVar3 != 0) {
                do {
                    fcn.00000ccd(0x55);
                    uVar1 = uVar1 + 4;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *puVar3);
            }
            puVar3 = uVar1 + param_1;
        } while (uVar1 < param_2);
    }
    fcn.00000853();
    return 0;
}


/* fcn.0000035a @ 0x35a */

void __cdecl fcn.0000035a(uint32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch,8);
    return;
}


/* fcn.0000032e @ 0x32e */

void __cdecl fcn.0000032e(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4,8,arg_8h);
    return;
}


/* fcn.000008ec @ 0x8ec */

int32_t fcn.000008ec(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000826 @ 0x826 */

uint32_t __fastcall fcn.00000826(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x3b70;
    if ((((*0x3b70 == *param_2) && (uVar1 = *0x3b74, *0x3b74 == param_2[1])) &&
        (uVar1 = *0x3b78, *0x3b78 == param_2[2])) && (uVar1 = *0x3b7c, *0x3b7c == param_2[3])) {
        return CONCAT31(*0x3b7c >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000917 @ 0x917 */

int16_t * __fastcall fcn.00000917(uint param_1,int16_t *param_2)

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


/* fcn.000023d0 @ 0x23d0 */

uint32_t __cdecl fcn.000023d0(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    int32_t var_d8h;
    
    if (arg_10h == 0) {
        arg_10h = 0x3f88;
    }
    fcn.000018f0(&var_d8h);
    fcn.00002190(&var_d8h,arg_8h,arg_ch);
    fcn.00001a10(arg_10h,&var_d8h);
    fcn.00003950(&var_d8h,0xd8);
    return arg_10h;
}


/* fcn.000018f0 @ 0x18f0 */

uint __cdecl fcn.000018f0(int32_t arg_8h)

{
    *arg_8h = 0xf3bcc908;
    *(arg_8h + 4) = 0x6a09e667;
    *(arg_8h + 8) = 0x84caa73b;
    *(arg_8h + 0xc) = 0xbb67ae85;
    *(arg_8h + 0x10) = 0xfe94f82b;
    *(arg_8h + 0x14) = 0x3c6ef372;
    *(arg_8h + 0x18) = 0x5f1d36f1;
    *(arg_8h + 0x1c) = 0xa54ff53a;
    *(arg_8h + 0x20) = 0xade682d1;
    *(arg_8h + 0x24) = 0x510e527f;
    *(arg_8h + 0x28) = 0x2b3e6c1f;
    *(arg_8h + 0x2c) = 0x9b05688c;
    *(arg_8h + 0x30) = 0xfb41bd6b;
    *(arg_8h + 0x34) = 0x1f83d9ab;
    *(arg_8h + 0x38) = 0x137e2179;
    *(arg_8h + 0x3c) = 0x5be0cd19;
    *(arg_8h + 0x40) = 0;
    *(arg_8h + 0x44) = 0;
    *(arg_8h + 0x48) = 0;
    *(arg_8h + 0x4c) = 0;
    *(arg_8h + 0xd0) = 0;
    *(arg_8h + 0xd4) = 0x40;
    return 1;
}


/* fcn.00002190 @ 0x2190 */

//WARNING: Removing unreachable block (ram,0x0000220a)

uint __cdecl fcn.00002190(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    var_4h = arg_ch;
    if (arg_10h != 0) {
        uVar4 = fcn.0000397c();
        uVar2 = uVar4 + *(arg_8h + 0x40);
        uVar3 = (uVar4 >> 0x20) + *(arg_8h + 0x44) + CARRY4(uVar4,*(arg_8h + 0x40));
        if ((uVar3 <= *(arg_8h + 0x44)) && ((uVar3 < *(arg_8h + 0x44) || (uVar2 < *(arg_8h + 0x40))))) {
            uVar1 = *(arg_8h + 0x48);
            *(arg_8h + 0x48) = uVar1 + 1;
            *(arg_8h + 0x4c) = *(arg_8h + 0x4c) + (0xfffffffe < uVar1);
        }
        *(arg_8h + 0x40) = uVar2;
        *(arg_8h + 0x44) = uVar3;
        if (*(arg_8h + 0xd0) != 0) {
            uVar2 = 0x80 - *(arg_8h + 0xd0);
            if (arg_10h < uVar2) {
                fcn.000002e4(arg_10h);
                *(arg_8h + 0xd0) = *(arg_8h + 0xd0) + arg_10h;
                return 1;
            }
            fcn.000002e4(uVar2);
            *(arg_8h + 0xd0) = 0;
            arg_10h = arg_10h - uVar2;
            var_4h = arg_ch + uVar2;
            fcn.00002440(arg_8h,arg_8h + 0x50,1);
        }
        if (0x7f < arg_10h) {
            fcn.00002440(arg_8h,var_4h,arg_10h >> 7);
            arg_10h = arg_10h % 0x80;
        }
        if (arg_10h != 0) {
            fcn.000002e4(arg_10h);
            *(arg_8h + 0xd0) = arg_10h;
        }
    }
    return 1;
}


/* fcn.00001a10 @ 0x1a10 */
// decompilation failed

/* fcn.00003950 @ 0x3950 */

void __cdecl fcn.00003950(int32_t arg_8h,int32_t arg_ch)

{
    fcn.00003965(0);
    return;
}


/* fcn.00003965 @ 0x3965 */

uint __fastcall fcn.00003965(uint param_1,int param_2,uint param_3)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000001f0(param_1,param_2,param_3);
    return uVar1;
}


/* fcn.000001f0 @ 0x1f0 */

uchar * fcn.000001f0(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00002360 @ 0x2360 */

uint32_t __cdecl fcn.00002360(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    int32_t var_d8h;
    
    if (arg_10h == 0) {
        arg_10h = 0x3fc8;
    }
    fcn.000017d0(&var_d8h);
    fcn.00002190(&var_d8h,arg_8h,arg_ch);
    fcn.00001a10(arg_10h,&var_d8h);
    fcn.00003950(&var_d8h,0xd8);
    return arg_10h;
}


/* fcn.000017d0 @ 0x17d0 */

uint __cdecl fcn.000017d0(int32_t arg_8h)

{
    *arg_8h = 0xc1059ed8;
    *(arg_8h + 4) = 0xcbbb9d5d;
    *(arg_8h + 8) = 0x367cd507;
    *(arg_8h + 0xc) = 0x629a292a;
    *(arg_8h + 0x10) = 0x3070dd17;
    *(arg_8h + 0x14) = 0x9159015a;
    *(arg_8h + 0x18) = 0xf70e5939;
    *(arg_8h + 0x1c) = 0x152fecd8;
    *(arg_8h + 0x20) = 0xffc00b31;
    *(arg_8h + 0x24) = 0x67332667;
    *(arg_8h + 0x28) = 0x68581511;
    *(arg_8h + 0x2c) = 0x8eb44a87;
    *(arg_8h + 0x30) = 0x64f98fa7;
    *(arg_8h + 0x34) = 0xdb0c2e0d;
    *(arg_8h + 0x38) = 0xbefa4fa4;
    *(arg_8h + 0x3c) = 0x47b5481d;
    *(arg_8h + 0x40) = 0;
    *(arg_8h + 0x44) = 0;
    *(arg_8h + 0x48) = 0;
    *(arg_8h + 0x4c) = 0;
    *(arg_8h + 0xd0) = 0;
    *(arg_8h + 0xd4) = 0x30;
    return 1;
}


/* fcn.00002f20 @ 0x2f20 */

uint32_t __cdecl fcn.00002f20(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    int32_t var_70h;
    
    if (arg_10h == 0) {
        arg_10h = 0x3ff8;
    }
    fcn.00002e60(&var_70h);
    fcn.00002f80(&var_70h,arg_8h,arg_ch);
    fcn.00003110(arg_10h,&var_70h);
    fcn.00003950(&var_70h,0x70);
    return arg_10h;
}


/* fcn.00002e60 @ 0x2e60 */

uint __cdecl fcn.00002e60(int32_t arg_8h)

{
    fcn.00003965(0);
    *arg_8h = 0x6a09e667;
    *(arg_8h + 4) = 0xbb67ae85;
    *(arg_8h + 8) = 0x3c6ef372;
    *(arg_8h + 0xc) = 0xa54ff53a;
    *(arg_8h + 0x10) = 0x510e527f;
    *(arg_8h + 0x14) = 0x9b05688c;
    *(arg_8h + 0x18) = 0x1f83d9ab;
    *(arg_8h + 0x1c) = 0x5be0cd19;
    *(arg_8h + 0x6c) = 0x20;
    return 1;
}


/* fcn.00002f80 @ 0x2f80 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_8h

uint __cdecl fcn.00002f80(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg_10h_00;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    var_8h = arg_ch;
    if (arg_10h != 0) {
        uVar1 = *(arg_8h + 0x20) + arg_10h * 8;
        if (uVar1 < *(arg_8h + 0x20)) {
            *(arg_8h + 0x24) = *(arg_8h + 0x24) + 1;
        }
        *(arg_8h + 0x24) = (arg_10h >> 0x1d) + *(arg_8h + 0x24);
        *(arg_8h + 0x20) = uVar1;
        iVar2 = *(arg_8h + 0x68);
        if (iVar2 != 0) {
            if ((arg_10h < 0x40) && (arg_10h + iVar2 < 0x40)) {
                fcn.000002e4(arg_10h);
                *(arg_8h + 0x68) = *(arg_8h + 0x68) + arg_10h;
                return 1;
            }
            fcn.000002e4(0x40 - iVar2);
            fcn.000034a0(arg_8h,arg_8h + 0x28,1);
            var_8h = arg_ch + (0x40 - iVar2);
            arg_10h = arg_10h - (0x40 - iVar2);
            *(arg_8h + 0x68) = 0;
            fcn.00003965(0);
        }
        arg_10h_00 = arg_10h >> 6;
        if (arg_10h_00 != 0) {
            fcn.000034a0(arg_8h,var_8h,arg_10h_00);
            var_8h = var_8h + arg_10h_00 * 0x40;
            arg_10h = arg_10h + arg_10h_00 * -0x40;
        }
        if (arg_10h != 0) {
            *(arg_8h + 0x68) = arg_10h;
            fcn.000002e4(arg_10h,uVar1,arg_8h + 0x28,var_8h);
        }
    }
    return 1;
}


/* fcn.00003110 @ 0x3110 */

uint __cdecl fcn.00003110(uint32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint uVar2;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = *(arg_ch + 0x68);
    *(arg_ch + 0x28 + iVar1) = 0x80;
    if (0x38 < iVar1 + 1U) {
        fcn.00003965(0);
        fcn.000034a0(arg_ch,arg_ch + 0x28,1);
    }
    fcn.00003965(0);
    *(arg_ch + 0x60) = *(arg_ch + 0x24) >> 0x18;
    *(arg_ch + 0x61) = *(arg_ch + 0x24) >> 0x10;
    *(arg_ch + 0x62) = *(arg_ch + 0x24) >> 8;
    *(arg_ch + 99) = *(arg_ch + 0x24);
    *(arg_ch + 100) = *(arg_ch + 0x20) >> 0x18;
    *(arg_ch + 0x65) = *(arg_ch + 0x20) >> 0x10;
    *(arg_ch + 0x66) = *(arg_ch + 0x20) >> 8;
    *(arg_ch + 0x67) = *(arg_ch + 0x20);
    fcn.000034a0(arg_ch,arg_ch + 0x28,1);
    *(arg_ch + 0x68) = 0;
    fcn.00003950(arg_ch + 0x28,0x40);
    if (*(arg_ch + 0x6c) == 0x1c) {
        for (var_8h = 0; var_8h < 7; var_8h = var_8h + 1) {
            uVar2 = *(arg_ch + var_8h * 4);
            *arg_8h = uVar2 >> 0x18;
            *(arg_8h + 1) = uVar2 >> 0x10;
            *(arg_8h + 2) = uVar2 >> 8;
            *(arg_8h + 3) = uVar2;
            arg_8h = arg_8h + 4;
        }
    }
    else if (*(arg_ch + 0x6c) == 0x20) {
        for (var_8h = 0; var_8h < 8; var_8h = var_8h + 1) {
            uVar2 = *(arg_ch + var_8h * 4);
            *arg_8h = uVar2 >> 0x18;
            *(arg_8h + 1) = uVar2 >> 0x10;
            *(arg_8h + 2) = uVar2 >> 8;
            *(arg_8h + 3) = uVar2;
            arg_8h = arg_8h + 4;
        }
    }
    else {
        if (0x20 < *(arg_ch + 0x6c)) {
            return 0;
        }
        for (var_8h = 0; var_8h < *(arg_ch + 0x6c) >> 2; var_8h = var_8h + 1) {
            uVar2 = *(arg_ch + var_8h * 4);
            *arg_8h = uVar2 >> 0x18;
            *(arg_8h + 1) = uVar2 >> 0x10;
            *(arg_8h + 2) = uVar2 >> 8;
            *(arg_8h + 3) = uVar2;
            arg_8h = arg_8h + 4;
        }
    }
    return 1;
}


/* fcn.00001770 @ 0x1770 */

uint32_t __cdecl fcn.00001770(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    int iVar1;
    int32_t var_60h;
    
    if (arg_10h == 0) {
        arg_10h = 0x3f70;
    }
    iVar1 = fcn.00001250(&var_60h);
    if (iVar1 == 0) {
        arg_10h = 0;
    }
    else {
        fcn.00000cf0(&var_60h,arg_8h,arg_ch);
        fcn.00000e80(arg_10h,&var_60h);
        fcn.00003950(&var_60h,0x60);
    }
    return arg_10h;
}


/* fcn.00000bff @ 0xbff */

int32_t __fastcall fcn.00000bff(int *param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = fcn.00000301(param_1,&var_4h);
    if (param_1 != NULL) {
        *param_1 = (-1 < iVar1) - 1;
    }
    return var_4h;
}


/* fcn.00000c31 @ 0xc31 */

uint __thiscall fcn.00000c31(int param_1)

{
    int iVar1;
    uint uVar2;
    int in_stack_00000014;
    int in_stack_0000001c;
    uint32_t *in_stack_00000020;
    
    iVar1 = fcn.00000bff();
    if (((((param_1 == 0) || (iVar1 == 0)) || (param_1 != 0)) || ((iVar1 != 0 || (in_stack_00000014 == 0)))) ||
       ((in_stack_0000001c == 0 || (in_stack_00000020 == NULL)))) {
        uVar2 = 0x80000002;
    }
    else {
        if ((*in_stack_00000020 < 0x1d) || (in_stack_00000014 == in_stack_0000001c)) {
        }
        else {
            fcn.000002e4(0x1c);
            in_stack_00000014 = in_stack_0000001c;
        }
        uVar2 = (*_main)(0,in_stack_00000014,0x1c,in_stack_00000020,0,7);
        if (in_stack_00000014 != in_stack_0000001c) {
            fcn.000002e4(*in_stack_00000020);
        }
    }
    return uVar2;
}


/* fcn.000002e4 @ 0x2e4 */

int __fastcall fcn.000002e4(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.000012a0 @ 0x12a0 */

void __cdecl fcn.000012a0(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_44h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int var_4h;
    
    var_1ch = arg_ch;
    var_10h = *arg_8h;
    var_ch = *(arg_8h + 4);
    var_18h = *(arg_8h + 8);
    var_14h = *(arg_8h + 0xc);
    var_20h = *(arg_8h + 0x10);
    while( true ) {
        for (var_4h = 0; var_4h < 0x10; var_4h = var_4h + 1) {
            var_24h = *(var_1ch + 3) | *(var_1ch + 2) << 8 | *(var_1ch + 1) << 0x10 | *var_1ch << 0x18;
            var_1ch = var_1ch + 4;
            (&var_64h)[var_4h] = var_24h;
            var_8h = var_20h + 0x5a827999 + ((var_18h ^ var_14h) & var_ch ^ var_14h);
            var_20h = var_14h;
            var_14h = var_18h;
            var_18h = var_ch << 0x1e | var_ch >> 2;
            var_ch = var_10h;
            var_10h = (var_10h << 5 | var_10h >> 0x1b) + var_8h + (&var_64h)[var_4h];
        }
        for (var_4h = 0; var_4h < 4; var_4h = var_4h + 1) {
            uVar1 = (&var_64h)[var_4h] ^ (&var_5ch)[var_4h] ^ (&var_44h)[var_4h] ^ (&var_64h)[var_4h + 0xdU & 0xf];
            uVar1 = uVar1 << 1 | uVar1 >> 0x1f;
            (&var_64h)[var_4h] = uVar1;
            var_8h = ((var_18h ^ var_14h) & var_ch ^ var_14h) + uVar1 + 0x5a827999 + var_20h;
            var_20h = var_14h;
            var_14h = var_18h;
            var_18h = var_ch << 0x1e | var_ch >> 2;
            var_ch = var_10h;
            var_10h = (var_10h << 5 | var_10h >> 0x1b) + var_8h;
        }
        for (; var_4h < 0x18; var_4h = var_4h + 1) {
            uVar1 = (&var_64h)[var_4h & 0xf] ^ (&var_64h)[var_4h + 2U & 0xf] ^ (&var_64h)[var_4h + 8U & 0xf] ^
                    (&var_64h)[var_4h + 0xdU & 0xf];
            var_8h = uVar1 << 1 | uVar1 >> 0x1f;
            (&var_64h)[var_4h & 0xf] = var_8h;
            var_8h = (var_ch ^ var_18h ^ var_14h) + var_8h + 0x6ed9eba1 + var_20h;
            var_20h = var_14h;
            var_14h = var_18h;
            var_18h = var_ch << 0x1e | var_ch >> 2;
            var_ch = var_10h;
            var_10h = (var_10h << 5 | var_10h >> 0x1b) + var_8h;
        }
        for (var_4h = 0; var_4h < 0x14; var_4h = var_4h + 1) {
            uVar1 = (&var_64h)[var_4h + 8U & 0xf] ^ (&var_64h)[var_4h + 10U & 0xf] ^ (&var_64h)[var_4h & 0xf] ^
                    (&var_64h)[var_4h + 5U & 0xf];
            var_8h = uVar1 << 1 | uVar1 >> 0x1f;
            (&var_64h)[var_4h + 8U & 0xf] = var_8h;
            var_8h = (var_ch & var_18h | (var_ch | var_18h) & var_14h) + var_8h + -0x70e44324 + var_20h;
            var_20h = var_14h;
            var_14h = var_18h;
            var_18h = var_ch << 0x1e | var_ch >> 2;
            var_ch = var_10h;
            var_10h = (var_10h << 5 | var_10h >> 0x1b) + var_8h;
        }
        for (var_4h = 4; var_4h < 0x18; var_4h = var_4h + 1) {
            uVar1 = (&var_64h)[var_4h + 8U & 0xf] ^ (&var_64h)[var_4h + 10U & 0xf] ^ (&var_64h)[var_4h & 0xf] ^
                    (&var_64h)[var_4h + 5U & 0xf];
            (&var_64h)[var_4h + 8U & 0xf] = uVar1 << 1 | uVar1 >> 0x1f;
            var_8h = var_20h + -0x359d3e2a + (var_ch ^ var_18h ^ var_14h);
            var_20h = var_14h;
            var_14h = var_18h;
            var_18h = var_ch << 0x1e | var_ch >> 2;
            var_ch = var_10h;
            var_10h = (var_10h << 5 | var_10h >> 0x1b) + var_8h + (&var_64h)[var_4h + 8U & 0xf];
        }
        *arg_8h = *arg_8h + var_10h;
        *(arg_8h + 4) = *(arg_8h + 4) + var_ch;
        *(arg_8h + 8) = *(arg_8h + 8) + var_18h;
        *(arg_8h + 0xc) = *(arg_8h + 0xc) + var_14h;
        *(arg_8h + 0x10) = *(arg_8h + 0x10) + var_20h;
        arg_10h = arg_10h - 1;
        if (arg_10h == 0) break;
        var_10h = *arg_8h;
        var_ch = *(arg_8h + 4);
        var_18h = *(arg_8h + 8);
        var_14h = *(arg_8h + 0xc);
        var_20h = *(arg_8h + 0x10);
    }
    return;
}


/* fcn.00001250 @ 0x1250 */

uint __cdecl fcn.00001250(int32_t arg_8h)

{
    fcn.00003965(0);
    *arg_8h = 0x67452301;
    *(arg_8h + 4) = 0xefcdab89;
    *(arg_8h + 8) = 0x98badcfe;
    *(arg_8h + 0xc) = 0x10325476;
    *(arg_8h + 0x10) = 0xc3d2e1f0;
    return 1;
}


/* fcn.00000cf0 @ 0xcf0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_8h

uint __cdecl fcn.00000cf0(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg_10h_00;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    var_8h = arg_ch;
    if (arg_10h != 0) {
        uVar1 = *(arg_8h + 0x14) + arg_10h * 8;
        if (uVar1 < *(arg_8h + 0x14)) {
            *(arg_8h + 0x18) = *(arg_8h + 0x18) + 1;
        }
        *(arg_8h + 0x18) = (arg_10h >> 0x1d) + *(arg_8h + 0x18);
        *(arg_8h + 0x14) = uVar1;
        iVar2 = *(arg_8h + 0x5c);
        if (iVar2 != 0) {
            if ((arg_10h < 0x40) && (arg_10h + iVar2 < 0x40)) {
                fcn.000002e4(arg_10h);
                *(arg_8h + 0x5c) = *(arg_8h + 0x5c) + arg_10h;
                return 1;
            }
            fcn.000002e4(0x40 - iVar2);
            fcn.000012a0(arg_8h,arg_8h + 0x1c,1);
            var_8h = arg_ch + (0x40 - iVar2);
            arg_10h = arg_10h - (0x40 - iVar2);
            *(arg_8h + 0x5c) = 0;
            fcn.00003965(0);
        }
        arg_10h_00 = arg_10h >> 6;
        if (arg_10h_00 != 0) {
            fcn.000012a0(arg_8h,var_8h,arg_10h_00);
            var_8h = var_8h + arg_10h_00 * 0x40;
            arg_10h = arg_10h + arg_10h_00 * -0x40;
        }
        if (arg_10h != 0) {
            *(arg_8h + 0x5c) = arg_10h;
            fcn.000002e4(arg_10h,uVar1,arg_8h + 0x1c,var_8h);
        }
    }
    return 1;
}


/* fcn.00000e80 @ 0xe80 */

//WARNING: Variable defined which should be unmapped: var_ch

uint __cdecl fcn.00000e80(uint32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint uVar2;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = *(arg_ch + 0x5c);
    *(arg_ch + 0x1c + iVar1) = 0x80;
    var_ch = iVar1 + 1;
    if (0x38 < var_ch) {
        fcn.00003965(0);
        var_ch = 0;
        fcn.000012a0(arg_ch,arg_ch + 0x1c,1);
    }
    fcn.00003965(0,var_ch);
    *(arg_ch + 0x54) = *(arg_ch + 0x18) >> 0x18;
    *(arg_ch + 0x55) = *(arg_ch + 0x18) >> 0x10;
    *(arg_ch + 0x56) = *(arg_ch + 0x18) >> 8;
    *(arg_ch + 0x57) = *(arg_ch + 0x18);
    *(arg_ch + 0x58) = *(arg_ch + 0x14) >> 0x18;
    *(arg_ch + 0x59) = *(arg_ch + 0x14) >> 0x10;
    *(arg_ch + 0x5a) = *(arg_ch + 0x14) >> 8;
    *(arg_ch + 0x5b) = *(arg_ch + 0x14);
    fcn.000012a0(arg_ch,arg_ch + 0x1c,1);
    *(arg_ch + 0x5c) = 0;
    fcn.00003950(arg_ch + 0x1c,0x40);
    uVar2 = *arg_ch;
    *arg_8h = uVar2 >> 0x18;
    *(arg_8h + 1) = uVar2 >> 0x10;
    *(arg_8h + 2) = uVar2 >> 8;
    *(arg_8h + 3) = uVar2;
    uVar2 = *(arg_ch + 4);
    *(arg_8h + 4) = uVar2 >> 0x18;
    *(arg_8h + 5) = uVar2 >> 0x10;
    *(arg_8h + 6) = uVar2 >> 8;
    *(arg_8h + 7) = uVar2;
    uVar2 = *(arg_ch + 8);
    *(arg_8h + 8) = uVar2 >> 0x18;
    *(arg_8h + 9) = uVar2 >> 0x10;
    *(arg_8h + 10) = uVar2 >> 8;
    *(arg_8h + 0xb) = uVar2;
    uVar2 = *(arg_ch + 0xc);
    *(arg_8h + 0xc) = uVar2 >> 0x18;
    *(arg_8h + 0xd) = uVar2 >> 0x10;
    *(arg_8h + 0xe) = uVar2 >> 8;
    *(arg_8h + 0xf) = uVar2;
    uVar2 = *(arg_ch + 0x10);
    *(arg_8h + 0x10) = uVar2 >> 0x18;
    *(arg_8h + 0x11) = uVar2 >> 0x10;
    *(arg_8h + 0x12) = uVar2 >> 8;
    *(arg_8h + 0x13) = uVar2;
    return 1;
}


/* fcn.00002440 @ 0x2440 */

void __cdecl fcn.00002440(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t *puVar1;
    int iVar2;
    int32_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong uVar15;
    ulong uVar16;
    ulong uVar17;
    ulong uVar18;
    int32_t var_d0h;
    uint uStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint uStack_b8;
    uint uStack_ac;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_24h = arg_ch;
    while( true ) {
        var_28h = arg_10h;
        if (arg_10h == 0) break;
        var_4h = &var_d0h;
        var_ch = *arg_8h;
        var_8h = *(arg_8h + 4);
        uStack_cc = *(arg_8h + 8);
        uStack_c8 = *(arg_8h + 0xc);
        uStack_c4 = *(arg_8h + 0x10);
        uStack_c0 = *(arg_8h + 0x14);
        uStack_bc = *(arg_8h + 0x18);
        uStack_b8 = *(arg_8h + 0x1c);
        var_14h = *(arg_8h + 0x20);
        var_10h = *(arg_8h + 0x24);
        uStack_ac = *(arg_8h + 0x28);
        uStack_a8 = *(arg_8h + 0x2c);
        uStack_a4 = *(arg_8h + 0x30);
        uStack_a0 = *(arg_8h + 0x34);
        uStack_9c = *(arg_8h + 0x38);
        uStack_98 = *(arg_8h + 0x3c);
        for (var_18h = 0; var_18h < 0x10; var_18h = var_18h + 1) {
            uVar8 = fcn.0000397c();
            uVar9 = fcn.0000397c();
            uVar10 = fcn.0000397c();
            uVar11 = fcn.0000397c();
            uVar12 = fcn.0000397c();
            uVar13 = fcn.0000397c();
            uVar14 = fcn.0000397c();
            iVar3 = var_4h;
            uVar14 = uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 | uVar14;
            var_1ch = uVar14 >> 0x20;
            var_20h = uVar14 | *(var_24h + 7 + var_18h * 8);
            *var_4h = var_ch;
            *(iVar3 + 4) = var_8h;
            iVar3 = var_4h;
            *(var_4h + 0x20) = var_14h;
            *(iVar3 + 0x24) = var_10h;
            iVar3 = var_4h;
            *(var_4h + 0x40) = var_20h;
            *(iVar3 + 0x44) = var_1ch;
            uVar14 = fcn.0000399c();
            uVar8 = fcn.0000397c();
            uVar15 = fcn.0000399c();
            var_30h = uVar15 >> 0x20;
            var_2ch = uVar15;
            uVar15 = fcn.0000397c();
            uVar5 = var_2ch | uVar15;
            uVar4 = var_30h | uVar15 >> 0x20;
            uVar15 = fcn.0000399c();
            var_38h = uVar15 >> 0x20;
            var_34h = uVar15;
            uVar15 = fcn.0000397c();
            uVar5 = (uVar14 | uVar8) ^ uVar5 ^ (var_34h | uVar15);
            var_3ch = uVar5 + *(var_4h + 0x38);
            var_40h = ((uVar14 | uVar8) >> 0x20 ^ uVar4 ^ (var_38h | uVar15 >> 0x20)) + *(var_4h + 0x3c) +
                      CARRY4(uVar5,*(var_4h + 0x38));
            uVar4 = var_14h & *(var_4h + 0x28) ^ ~var_14h & *(var_4h + 0x30);
            uVar5 = var_3ch + uVar4;
            puVar1 = var_18h * 8 + 0x3bd0;
            uVar6 = uVar5 + *puVar1;
            bVar7 = CARRY4(uVar6,var_20h);
            var_20h = uVar6 + var_20h;
            var_1ch = var_40h + (var_10h & *(var_4h + 0x2c) ^ ~var_10h & *(var_4h + 0x34)) + CARRY4(var_3ch,uVar4) +
                      *(var_18h * 8 + 0x3bd4) + CARRY4(uVar5,*puVar1) + var_1ch + bVar7;
            var_14h = *(var_4h + 0x18) + var_20h;
            var_10h = *(var_4h + 0x1c) + var_1ch + CARRY4(*(var_4h + 0x18),var_20h);
            uVar14 = fcn.0000399c();
            uVar8 = fcn.0000397c();
            uVar15 = fcn.0000399c();
            var_44h = uVar15 >> 0x20;
            uVar16 = fcn.0000397c();
            uVar4 = var_44h | uVar16 >> 0x20;
            uVar17 = fcn.0000399c();
            var_48h = uVar17 >> 0x20;
            uVar18 = fcn.0000397c();
            uVar5 = (uVar14 | uVar8) ^ (uVar15 | uVar16) ^ (uVar17 | uVar18);
            var_50h = uVar5 + var_20h;
            var_54h = ((uVar14 | uVar8) >> 0x20 ^ uVar4 ^ (var_48h | uVar18 >> 0x20)) + var_1ch + CARRY4(uVar5,var_20h)
            ;
            var_4ch = var_8h & *(var_4h + 0xc) ^ var_8h & *(var_4h + 0x14);
            uVar4 = var_ch & *(var_4h + 8) ^ var_ch & *(var_4h + 0x10) ^ *(var_4h + 8) & *(var_4h + 0x10);
            var_ch = var_50h + uVar4;
            var_8h = var_54h + (var_4ch ^ *(var_4h + 0xc) & *(var_4h + 0x14)) + CARRY4(var_50h,uVar4);
            var_4h = var_4h + -8;
        }
        for (; var_18h < 0x50; var_18h = var_18h + 1) {
            uVar14 = fcn.0000399c();
            uVar8 = fcn.0000397c();
            uVar15 = fcn.0000399c();
            var_58h = uVar15 >> 0x20;
            uVar16 = fcn.0000397c();
            uVar4 = var_58h | uVar16 >> 0x20;
            uVar17 = fcn.0000399c();
            var_20h = (uVar14 | uVar8) ^ (uVar15 | uVar16) ^ uVar17;
            var_1ch = (uVar14 | uVar8) >> 0x20 ^ uVar4 ^ uVar17 >> 0x20;
            uVar14 = fcn.0000399c();
            uVar8 = fcn.0000397c();
            uVar15 = fcn.0000399c();
            var_5ch = uVar15 >> 0x20;
            uVar16 = fcn.0000397c();
            uVar4 = var_5ch | uVar16 >> 0x20;
            uVar17 = fcn.0000399c();
            iVar3 = var_4h;
            uVar5 = (uVar14 | uVar8) ^ (uVar15 | uVar16) ^ uVar17;
            bVar7 = CARRY4(uVar5,var_20h);
            uVar5 = uVar5 + var_20h;
            uVar6 = *(var_4h + 0xc0) + *(var_4h + 0x78);
            var_20h = uVar6 + uVar5;
            var_1ch = *(var_4h + 0xc4) + *(var_4h + 0x7c) + CARRY4(*(var_4h + 0xc0),*(var_4h + 0x78)) +
                      ((uVar14 | uVar8) >> 0x20 ^ uVar4 ^ uVar17 >> 0x20) + var_1ch + bVar7 + CARRY4(uVar6,uVar5);
            *var_4h = var_ch;
            *(iVar3 + 4) = var_8h;
            iVar3 = var_4h;
            *(var_4h + 0x20) = var_14h;
            *(iVar3 + 0x24) = var_10h;
            iVar3 = var_4h;
            *(var_4h + 0x40) = var_20h;
            *(iVar3 + 0x44) = var_1ch;
            uVar14 = fcn.0000399c();
            uVar8 = fcn.0000397c();
            uVar15 = fcn.0000399c();
            var_64h = uVar15 >> 0x20;
            var_60h = uVar15;
            uVar15 = fcn.0000397c();
            uVar5 = var_60h | uVar15;
            uVar4 = var_64h | uVar15 >> 0x20;
            uVar15 = fcn.0000399c();
            var_6ch = uVar15 >> 0x20;
            var_68h = uVar15;
            uVar15 = fcn.0000397c();
            uVar5 = (uVar14 | uVar8) ^ uVar5 ^ (var_68h | uVar15);
            var_70h = uVar5 + *(var_4h + 0x38);
            var_74h = ((uVar14 | uVar8) >> 0x20 ^ uVar4 ^ (var_6ch | uVar15 >> 0x20)) + *(var_4h + 0x3c) +
                      CARRY4(uVar5,*(var_4h + 0x38));
            uVar4 = var_14h & *(var_4h + 0x28) ^ ~var_14h & *(var_4h + 0x30);
            uVar5 = var_70h + uVar4;
            puVar1 = var_18h * 8 + 0x3bd0;
            uVar6 = uVar5 + *puVar1;
            bVar7 = CARRY4(uVar6,var_20h);
            var_20h = uVar6 + var_20h;
            var_1ch = var_74h + (var_10h & *(var_4h + 0x2c) ^ ~var_10h & *(var_4h + 0x34)) + CARRY4(var_70h,uVar4) +
                      *(var_18h * 8 + 0x3bd4) + CARRY4(uVar5,*puVar1) + var_1ch + bVar7;
            var_14h = *(var_4h + 0x18) + var_20h;
            var_10h = *(var_4h + 0x1c) + var_1ch + CARRY4(*(var_4h + 0x18),var_20h);
            uVar14 = fcn.0000399c();
            uVar8 = fcn.0000397c();
            uVar15 = fcn.0000399c();
            var_78h = uVar15 >> 0x20;
            uVar16 = fcn.0000397c();
            uVar4 = var_78h | uVar16 >> 0x20;
            uVar17 = fcn.0000399c();
            var_7ch = uVar17 >> 0x20;
            uVar18 = fcn.0000397c();
            uVar5 = (uVar14 | uVar8) ^ (uVar15 | uVar16) ^ (uVar17 | uVar18);
            var_84h = uVar5 + var_20h;
            var_88h = ((uVar14 | uVar8) >> 0x20 ^ uVar4 ^ (var_7ch | uVar18 >> 0x20)) + var_1ch + CARRY4(uVar5,var_20h)
            ;
            var_80h = var_8h & *(var_4h + 0xc) ^ var_8h & *(var_4h + 0x14);
            uVar4 = var_ch & *(var_4h + 8) ^ var_ch & *(var_4h + 0x10) ^ *(var_4h + 8) & *(var_4h + 0x10);
            var_ch = var_84h + uVar4;
            var_8h = var_88h + (var_80h ^ *(var_4h + 0xc) & *(var_4h + 0x14)) + CARRY4(var_84h,uVar4);
            var_4h = var_4h + -8;
        }
        uVar4 = *arg_8h;
        *arg_8h = uVar4 + var_ch;
        *(arg_8h + 4) = *(arg_8h + 4) + var_8h + CARRY4(uVar4,var_ch);
        uVar4 = *(arg_8h + 8);
        uVar5 = *(var_4h + 8);
        iVar2 = *(var_4h + 0xc);
        *(arg_8h + 8) = uVar4 + *(var_4h + 8);
        *(arg_8h + 0xc) = *(arg_8h + 0xc) + iVar2 + CARRY4(uVar4,uVar5);
        uVar4 = *(arg_8h + 0x10);
        uVar5 = *(var_4h + 0x10);
        iVar2 = *(var_4h + 0x14);
        *(arg_8h + 0x10) = uVar4 + *(var_4h + 0x10);
        *(arg_8h + 0x14) = *(arg_8h + 0x14) + iVar2 + CARRY4(uVar4,uVar5);
        uVar4 = *(arg_8h + 0x18);
        uVar5 = *(var_4h + 0x18);
        iVar2 = *(var_4h + 0x1c);
        *(arg_8h + 0x18) = uVar4 + *(var_4h + 0x18);
        *(arg_8h + 0x1c) = *(arg_8h + 0x1c) + iVar2 + CARRY4(uVar4,uVar5);
        uVar4 = *(arg_8h + 0x20);
        *(arg_8h + 0x20) = uVar4 + var_14h;
        *(arg_8h + 0x24) = *(arg_8h + 0x24) + var_10h + CARRY4(uVar4,var_14h);
        uVar4 = *(arg_8h + 0x28);
        uVar5 = *(var_4h + 0x28);
        iVar2 = *(var_4h + 0x2c);
        *(arg_8h + 0x28) = uVar4 + *(var_4h + 0x28);
        *(arg_8h + 0x2c) = *(arg_8h + 0x2c) + iVar2 + CARRY4(uVar4,uVar5);
        uVar4 = *(arg_8h + 0x30);
        uVar5 = *(var_4h + 0x30);
        iVar2 = *(var_4h + 0x34);
        *(arg_8h + 0x30) = uVar4 + *(var_4h + 0x30);
        *(arg_8h + 0x34) = *(arg_8h + 0x34) + iVar2 + CARRY4(uVar4,uVar5);
        uVar4 = *(arg_8h + 0x38);
        uVar5 = *(var_4h + 0x38);
        iVar2 = *(var_4h + 0x3c);
        *(arg_8h + 0x38) = uVar4 + *(var_4h + 0x38);
        *(arg_8h + 0x3c) = *(arg_8h + 0x3c) + iVar2 + CARRY4(uVar4,uVar5);
        var_24h = var_24h + 0x80;
        arg_10h = arg_10h - 1;
    }
    return;
}


/* fcn.0000399c @ 0x399c */

uint64_t __fastcall fcn.0000399c(uint8_t param_1,uint32_t param_2)

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


/* fcn.0000397c @ 0x397c */

int64_t __fastcall fcn.0000397c(uint8_t param_1,int param_2)

{
    uint32_t in_EAX;
    
    if (0x3f < param_1) {
        return 0;
    }
    if (param_1 < 0x20) {
        return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),in_EAX << (param_1 & 0x1f));
    }
    return (in_EAX << (param_1 & 0x1f)) << 0x20;
}


/* fcn.000034a0 @ 0x34a0 */

void __cdecl fcn.000034a0(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    int32_t var_84h;
    uint32_t var_44h;
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
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = arg_ch;
    while( true ) {
        var_44h = arg_10h;
        if (arg_10h == 0) break;
        var_4h = *arg_8h;
        var_18h = *(arg_8h + 4);
        var_1ch = *(arg_8h + 8);
        var_34h = *(arg_8h + 0xc);
        var_8h = *(arg_8h + 0x10);
        var_2ch = *(arg_8h + 0x14);
        var_30h = *(arg_8h + 0x18);
        var_38h = *(arg_8h + 0x1c);
        for (var_ch = 0; var_ch < 0x10; var_ch = var_ch + 1) {
            var_20h = *(var_10h + 3) | *(var_10h + 2) << 8 | *(var_10h + 1) << 0x10 | *var_10h << 0x18;
            var_10h = var_10h + 4;
            (&var_84h)[var_ch] = var_20h;
            var_14h = ((var_8h << 0x1a | var_8h >> 6) ^ (var_8h << 0x15 | var_8h >> 0xb) ^
                      (var_8h << 7 | var_8h >> 0x19)) + var_38h + (var_8h & var_2ch ^ ~var_8h & var_30h) +
                      *(var_ch * 4 + 0x3e50) + var_20h;
            var_3ch = ((var_4h << 0x1e | var_4h >> 2) ^ (var_4h << 0x13 | var_4h >> 0xd) ^
                      (var_4h << 10 | var_4h >> 0x16)) + (var_4h & var_18h ^ var_4h & var_1ch ^ var_18h & var_1ch);
            var_38h = var_30h;
            var_30h = var_2ch;
            var_2ch = var_8h;
            var_8h = var_34h + var_14h;
            var_34h = var_1ch;
            var_1ch = var_18h;
            var_18h = var_4h;
            var_4h = var_14h + var_3ch;
        }
        for (; var_ch < 0x40; var_ch = var_ch + 1) {
            uVar1 = (&var_84h)[var_ch + 1U & 0xf];
            var_24h = (uVar1 << 0x19 | uVar1 >> 7) ^ (uVar1 << 0xe | uVar1 >> 0x12) ^ uVar1 >> 3;
            uVar1 = (&var_84h)[var_ch + 0xeU & 0xf];
            var_28h = (uVar1 << 0xf | uVar1 >> 0x11) ^ (uVar1 << 0xd | uVar1 >> 0x13) ^ uVar1 >> 10;
            var_40h = (&var_84h)[var_ch & 0xf] + var_24h + var_28h + (&var_84h)[var_ch + 9U & 0xf];
            (&var_84h)[var_ch & 0xf] = var_40h;
            var_14h = ((var_8h << 0x1a | var_8h >> 6) ^ (var_8h << 0x15 | var_8h >> 0xb) ^
                      (var_8h << 7 | var_8h >> 0x19)) + var_38h + (var_8h & var_2ch ^ ~var_8h & var_30h) +
                      *(var_ch * 4 + 0x3e50) + var_40h;
            var_3ch = ((var_4h << 0x1e | var_4h >> 2) ^ (var_4h << 0x13 | var_4h >> 0xd) ^
                      (var_4h << 10 | var_4h >> 0x16)) + (var_4h & var_18h ^ var_4h & var_1ch ^ var_18h & var_1ch);
            var_38h = var_30h;
            var_30h = var_2ch;
            var_2ch = var_8h;
            var_8h = var_34h + var_14h;
            var_34h = var_1ch;
            var_1ch = var_18h;
            var_18h = var_4h;
            var_4h = var_14h + var_3ch;
        }
        *arg_8h = *arg_8h + var_4h;
        *(arg_8h + 4) = *(arg_8h + 4) + var_18h;
        *(arg_8h + 8) = *(arg_8h + 8) + var_1ch;
        *(arg_8h + 0xc) = *(arg_8h + 0xc) + var_34h;
        *(arg_8h + 0x10) = *(arg_8h + 0x10) + var_8h;
        *(arg_8h + 0x14) = *(arg_8h + 0x14) + var_2ch;
        *(arg_8h + 0x18) = *(arg_8h + 0x18) + var_30h;
        *(arg_8h + 0x1c) = *(arg_8h + 0x1c) + var_38h;
        arg_10h = arg_10h - 1;
    }
    return;
}


