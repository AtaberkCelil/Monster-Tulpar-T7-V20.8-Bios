// decompiled by r2ghidra: 2555_PcdPeim.te
// functions: 47

/* fcn.00000304 @ 0x304 */

void __fastcall fcn.00000304(uint param_1)

{
    uint uVar1;
    int iVar2;
    int32_t var_20h;
    int32_t var_18h;
    ushort uStack_18;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_18h;
    uVar1 = InterruptDescriptorTableRegister();
    var_18h._2_2_ = uVar1 >> 0x10;
    iVar2 = (**(**(CONCAT22(uStack_18,var_18h._2_2_) + -4) + 0x74))(param_1);
    if (iVar2 == -0x7fffffec) {
        var_4h = 0;
        fcn.00001449(&var_4h,&var_ch);
        if (var_4h != 0) {
            fcn.00001420();
        }
        var_8h = 0;
        fcn.00001449(&var_8h,&var_10h);
        if (var_8h != 0) {
            fcn.00001420();
        }
        var_4h = 0;
        fcn.00001449(&var_4h,&var_ch);
        if (var_4h != 0) {
            fcn.00001420();
        }
        var_8h = 0;
        fcn.00001449(&var_8h,&var_10h);
        if (var_8h != 0) {
            fcn.00001420();
        }
        var_18h = &var_20h;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffde + -4) + 0x24))(*(stack0xffffffde + -4),0xfffcc290);
    }
    else {
        fcn.00000d29();
        fcn.000013fb();
        fcn.000013fb();
        fcn.000007f2(0xfffcc158,0x30004,0xfffcac9e);
    }
    return;
}


/* entry0 @ 0xfd */

void entry0(uint param_1)

{
    uint uVar1;
    int iVar2;
    int32_t var_20h;
    int32_t var_18h;
    ushort uStack_18;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_18h;
    uVar1 = InterruptDescriptorTableRegister();
    var_18h._2_2_ = uVar1 >> 0x10;
    iVar2 = (**(**(CONCAT22(uStack_18,var_18h._2_2_) + -4) + 0x74))(param_1);
    if (iVar2 == -0x7fffffec) {
        var_4h = 0;
        fcn.00001449(&var_4h,&var_ch);
        if (var_4h != 0) {
            fcn.00001420();
        }
        var_8h = 0;
        fcn.00001449(&var_8h,&var_10h);
        if (var_8h != 0) {
            fcn.00001420();
        }
        var_4h = 0;
        fcn.00001449(&var_4h,&var_ch);
        if (var_4h != 0) {
            fcn.00001420();
        }
        var_8h = 0;
        fcn.00001449(&var_8h,&var_10h);
        if (var_8h != 0) {
            fcn.00001420();
        }
        var_18h = &var_20h;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffde + -4) + 0x24))(*(stack0xffffffde + -4),0xfffcc290);
    }
    else {
        fcn.00000d29();
        fcn.000013fb();
        fcn.000013fb();
        fcn.000007f2(0xfffcc158,0x30004,0xfffcac9e);
    }
    return;
}


/* fcn.000011a7 @ 0x11a7 */

int __fastcall fcn.000011a7(uint param_1)

{
    int iVar1;
    
    iVar1 = fcn.00001364(param_1);
    return iVar1 + 0x18;
}


/* fcn.00001364 @ 0x1364 */

int fcn.00001364(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00001318();
    do {
        iVar2 = fcn.00001343();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00001505();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000686 @ 0x686 */

void __fastcall fcn.00000686(uint param_1)

{
    int32_t arg_8h;
    
    arg_8h = fcn.00001143(param_1);
    fcn.000005d1(arg_8h);
    return;
}


/* fcn.00001143 @ 0x1143 */

ushort __fastcall fcn.00001143(int32_t param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    
    iVar2 = fcn.000011a7();
    iVar1 = *(iVar2 + 0x30);
    iVar5 = *(iVar2 + 0x2c) + iVar2;
    iVar3 = fcn.00001529(param_1);
    uVar4 = 0;
    if (*(iVar2 + 0x46) != 0) {
        do {
            if ((param_2 == *(iVar5 + uVar4 * 8)) && (iVar3 - (iVar1 + iVar2) >> 4 == *(iVar5 + 6 + uVar4 * 8))) {
                return *(iVar5 + 4 + uVar4 * 8);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar2 + 0x46));
    }
    return 0;
}


/* fcn.000005d1 @ 0x5d1 */

void __cdecl fcn.000005d1(int32_t arg_8h)

{
    int iVar1;
    
    iVar1 = fcn.000011a7();
    if ((*(*(iVar1 + 0x28) + (arg_8h + -1) * 4 + 3 + iVar1) & 0xf) == 0) {
        fcn.000009fa(iVar1);
    }
    return;
}


/* fcn.000009fa @ 0x9fa */

uint32_t __fastcall fcn.000009fa(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    
    uVar4 = fcn.000011b7();
    iVar3 = uVar4 >> 0x20;
    uVar1 = *(*(iVar3 + 0x28) + param_1 * 4 + iVar3);
    iVar3 = *(iVar3 + 0x38) + iVar3;
    uVar2 = *(iVar3 + uVar4 * 2);
    *param_2 = uVar2;
    if ((uVar1 & 0x40000000) == 0) {
        uVar2 = *(iVar3 + 2 + uVar4 * 2);
    }
    return uVar2;
}


/* fcn.000011b7 @ 0x11b7 */

int __fastcall fcn.000011b7(int param_1,int param_2)

{
    uint32_t *puVar1;
    int iVar2;
    
    iVar2 = 0;
    if (param_1 != 0) {
        puVar1 = *(param_2 + 0x28) + param_2;
        do {
            if ((*puVar1 & 0xf000000) == 0) {
                iVar2 = iVar2 + 2;
            }
            puVar1 = puVar1 + 1;
            param_1 = param_1 + -1;
        } while (param_1 != 0);
    }
    return iVar2;
}


/* fcn.0000066d @ 0x66d */

void __fastcall fcn.0000066d(uint param_1)

{
    fcn.00001143(param_1);
    fcn.0000101c();
    return;
}


/* fcn.0000101c @ 0x101c */

int __fastcall fcn.0000101c(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    int iStack_14;
    int iStack_10;
    uchar auStack_c [8];
    
    uStack_18 = param_2;
    iStack_10 = param_1 + -1;
    iVar1 = fcn.000011a7();
    iVar4 = *(iVar1 + 0x34) + iVar1;
    uVar2 = *(*(iVar1 + 0x28) + (param_1 + -1) * 4 + iVar1);
    uVar5 = uVar2 & 0x20efffff;
    uVar2 = uVar2 & 0xd0000000;
    if (uVar2 == 0) {
        iVar4 = uVar5 + iVar1;
    }
    else if (uVar2 == 0x10000000) {
        iVar4 = *(uVar5 + iVar1) + iVar4;
    }
    else if (uVar2 == 0x40000000) {
        iVar4 = fcn.0000064c(0xfffcc158,0x30006);
        iVar4 = *(uVar5 + iVar1) + iVar4;
    }
    else if ((uVar2 == 0x80000000) || (uVar2 == 0x90000000)) {
        iStack_14 = *(uVar5 + iVar1) + iVar4;
        if (uVar2 == 0x90000000) {
            iVar4 = *(*(uVar5 + 4 + iVar1) + iVar1) + iVar4;
        }
        else {
            iVar4 = *(uVar5 + 4 + iVar1) + iVar1;
        }
        iVar3 = fcn.00000d92(auStack_c,&uStack_1c);
        if ((iVar3 == 0) && (*(uVar5 + 10 + iVar1) + param_2 <= uStack_1c)) {
            if (param_2 == 0) {
                fcn.000009fa(iVar1);
                uStack_1c = uStack_1c - *(uVar5 + 10 + iVar1);
                param_2 = uStack_18;
                if (uStack_1c < uStack_18) {
                    param_2 = uStack_1c;
                }
            }
            fcn.000014cf(param_2);
        }
    }
    else {
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.000013d7 @ 0x13d7 */

int fcn.000013d7(void)

{
    int iVar1;
    
    iVar1 = fcn.0000139e();
    if (iVar1 != 0) {
        fcn.000014ec();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.0000139e @ 0x139e */

int32_t __fastcall fcn.0000139e(uint param_1,uint param_2)

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


/* fcn.000014ec @ 0x14ec */

uint * __fastcall fcn.000014ec(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000014cf @ 0x14cf */

int __fastcall fcn.000014cf(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.00000815 @ 0x815 */

uint fcn.00000815(uint param_1,uint param_2,int param_3)

{
    uint uVar1;
    
    if (param_3 == 0) {
        return 0x80000002;
    }
    uVar1 = fcn.00000cad(param_3,0);
    return uVar1;
}


/* fcn.00000cad @ 0xcad */

int __fastcall fcn.00000cad(int param_1,int param_2,uint32_t param_3,char param_4)

{
    int iVar1;
    uint32_t uVar2;
    
    fcn.000011a7();
    if ((param_2 != 0) && (param_1 = fcn.00001143(), param_1 == 0)) {
        return -0x7ffffff2;
    }
    iVar1 = fcn.00001364();
    iVar1 = (param_1 + -1) * 0x20 + iVar1;
    uVar2 = 0;
    do {
        if (*(iVar1 + 0x18 + uVar2 * 4) == (~-(param_4 != '\0') & param_3)) {
            *(iVar1 + 0x18 + uVar2 * 4) = -(param_4 != '\0') & param_3;
            return 0;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    return ((param_4 == '\0') - 1 & 7) + 0x80000002;
}


/* fcn.000014a2 @ 0x14a2 */

void __cdecl fcn.000014a2(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x68))(0xfffcc188);
    return;
}


/* fcn.00001477 @ 0x1477 */

void __cdecl fcn.00001477(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x40))(*(stack0xfffffff2 + -4),0x19);
    return;
}


/* fcn.00001449 @ 0x1449 */

void __cdecl fcn.00001449(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001420 @ 0x1420 */

void __fastcall fcn.00001420(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x1c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.00000d29 @ 0xd29 */

uint fcn.00000d29(void)

{
    int32_t iVar1;
    uint uVar2;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.00001477(&var_4h);
    iVar1 = var_4h;
    uVar2 = fcn.000013d7();
    fcn.00001558();
    fcn.000014cf(*(iVar1 + 0x14));
    fcn.000013d7();
    fcn.00001558();
    return uVar2;
}


/* fcn.00001558 @ 0x1558 */

uint __fastcall fcn.00001558(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
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


/* fcn.000013fb @ 0x13fb */

void __fastcall fcn.000013fb(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000007f2 @ 0x7f2 */

uint fcn.000007f2(uint param_1,uint param_2,int param_3)

{
    uint uVar1;
    
    if (param_3 == 0) {
        return 0x80000002;
    }
    uVar1 = fcn.00000cad(param_3,1);
    return uVar1;
}


/* fcn.00000c26 @ 0xc26 */

uint __fastcall fcn.00000c26(int param_1,uint32_t param_2,uint *param_3)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.000011a7();
    if (param_1 == 0) {
        if (param_2 <= *(iVar1 + 0x44) - *(iVar1 + 0x46)) {
            if (param_2 == 0) {
                *param_3 = 0;
                param_3[1] = 0;
                param_3[2] = 0;
            }
            else {
                uVar2 = fcn.000005d1(param_2);
                param_3[1] = uVar2;
                uVar2 = fcn.00000a7c();
                *param_3 = uVar2;
                uVar2 = fcn.00000abd(param_2);
                param_3[2] = uVar2;
            }
            return 0;
        }
    }
    else if (*(iVar1 + 0x46) != 0) {
        uVar2 = fcn.00000b68(param_2,param_3);
        return uVar2;
    }
    return 0x8000000e;
}


/* fcn.00000e7c @ 0xe7c */

uint __fastcall fcn.00000e7c(uint32_t param_1,uint *param_2,uint32_t *param_3,char param_4)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint *puVar5;
    
    iVar2 = fcn.000011a7();
    if (param_4 == '\0') {
        uVar4 = *param_3;
        uVar3 = fcn.000005d1(param_1);
        if (uVar4 != uVar3) {
            return 0x80000002;
        }
    }
    else {
        fcn.000009fa(iVar2);
        uVar4 = *param_3;
        if (param_1 < uVar4) {
            *param_3 = param_1;
            return 0x80000002;
        }
    }
    if (param_1 < (*(iVar2 + 0x44) - *(iVar2 + 0x46)) + 1) {
        fcn.00000e2e(param_1,param_2,uVar4);
    }
    uVar4 = *(*(iVar2 + 0x28) + (param_1 - 1) * 4 + iVar2);
    puVar5 = (uVar4 & 0x20efffff) + iVar2;
    uVar4 = uVar4 & 0xd0000000;
    if (uVar4 == 0) {
        if (param_4 == '\0') {
            uVar4 = *param_3;
            if (uVar4 == 1) {
                *puVar5 = *param_2;
                return 0;
            }
            if (uVar4 == 2) {
                *puVar5 = *param_2;
                return 0;
            }
            if (uVar4 == 4) {
                *puVar5 = *param_2;
                return 0;
            }
            if (uVar4 == 8) {
                *puVar5 = *param_2;
                puVar5[1] = param_2[1];
                return 0;
            }
            return 0x8000000e;
        }
        cVar1 = fcn.00000a33(iVar2);
    }
    else {
        if (uVar4 != 0x10000000) {
            if (uVar4 == 0x40000000) {
                return 0x80000002;
            }
            if (uVar4 == 0x80000000) {
                return 0x80000002;
            }
            if (uVar4 == 0x90000000) {
                return 0x80000002;
            }
            return 0x8000000e;
        }
        cVar1 = fcn.00000a33(iVar2);
    }
    if (cVar1 == '\0') {
        return 0x80000002;
    }
    fcn.000014cf(*param_3);
    return 0;
}


/* fcn.00000fd2 @ 0xfd2 */

uint fcn.00000fd2(uint param_1,uint *param_2,uint param_3)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.00001143();
    if (iVar1 == 0) {
        uVar2 = 0x8000000e;
    }
    else {
        fcn.00000e2e(iVar1,param_1,*param_2);
        uVar2 = fcn.00000e7c(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00001529 @ 0x1529 */

int __cdecl fcn.00001529(int32_t arg_8h)

{
    char cVar1;
    uint32_t in_ECX;
    int extraout_ECX;
    uint32_t in_EDX;
    uint32_t uVar2;
    
    uVar2 = in_ECX + (in_EDX & 0xfffffff0);
    while( true ) {
        if (uVar2 <= in_ECX) {
            return 0;
        }
        cVar1 = fcn.00001505();
        if (cVar1 != '\0') break;
        in_ECX = extraout_ECX + 0x10;
    }
    return extraout_ECX;
}


/* fcn.00001229 @ 0x1229 */

void __fastcall fcn.00001229(uint param_1)

{
    int iVar1;
    
    iVar1 = fcn.000011da();
    if (iVar1 != 0) {
        fcn.000014cf(param_1);
    }
    return;
}


/* fcn.000011da @ 0x11da */

int32_t __fastcall fcn.000011da(uint param_1)

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


/* fcn.00001211 @ 0x1211 */

int __fastcall fcn.00001211(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000011da();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.00001293 @ 0x1293 */

uint __fastcall fcn.00001293(int param_1,uint32_t param_2,char *param_3)

{
    char cVar1;
    uint uVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    
    uVar4 = fcn.0000126c();
    if (param_1 == 0) {
        uVar2 = 0x80000002;
    }
    else if (((param_3 == NULL) || (1000000 < param_2)) || (param_2 == 0)) {
        uVar2 = 0x80000002;
    }
    else if (uVar4 >> 0x20 == uVar4) {
        uVar2 = 0x80000004;
    }
    else {
        uVar5 = fcn.0000126c();
        if (uVar5 < uVar5 >> 0x20) {
            cVar1 = fcn.00001246(param_3,uVar5 + 1);
            if (cVar1 == '\0') {
                pcVar3 = param_1 + uVar4;
                for (; *param_3 != '\0'; param_3 = param_3 + 1) {
                    *pcVar3 = *param_3;
                    pcVar3 = pcVar3 + 1;
                }
                *pcVar3 = '\0';
                uVar2 = 0;
            }
            else {
                uVar2 = 0x8000000f;
            }
        }
        else {
            uVar2 = 0x80000005;
        }
    }
    return uVar2;
}


/* fcn.00000a7c @ 0xa7c */

uint32_t __fastcall fcn.00000a7c(uint32_t param_1)

{
    uint32_t uVar1;
    
    uVar1 = param_1 & 0xf000000;
    if (uVar1 == 0) {
        return 5;
    }
    if (uVar1 == 0x1000000) {
        return param_1 >> 0x12 & 4;
    }
    if (uVar1 == 0x2000000) {
        return 1;
    }
    if (uVar1 != 0x4000000) {
        if (uVar1 != 0x8000000) {
            return 0;
        }
        return 3;
    }
    return 2;
}


/* fcn.00000abd @ 0xabd */

int __fastcall fcn.00000abd(char param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    
    if (*(param_2 + 0x40) == 0) {
        iVar2 = 0;
    }
    else {
        iVar3 = *(param_2 + 0x34) + param_2;
        iVar2 = *(param_2 + 0x40) + param_3 * 8;
        pcVar5 = *(iVar2 + -8 + param_2) + iVar3;
        pcVar4 = *(iVar2 + -4 + param_2) + iVar3;
        if (param_1 == '\0') {
            iVar3 = 0;
            iVar2 = 0;
            cVar1 = *pcVar5;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = pcVar5[iVar2];
            }
            iVar2 = 0;
            cVar1 = *pcVar4;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = pcVar4[iVar2];
            }
            iVar2 = fcn.00001211();
            fcn.00001293(pcVar5);
            cVar1 = *pcVar5;
            while (cVar1 != '\0') {
                iVar3 = iVar3 + 1;
                cVar1 = pcVar5[iVar3];
            }
            *(iVar3 + iVar2) = 0x2e;
            fcn.00001293(pcVar4);
        }
        else {
            iVar2 = 0;
            cVar1 = *pcVar5;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = pcVar5[iVar2];
            }
            iVar2 = fcn.00001229();
        }
    }
    return iVar2;
}


/* fcn.00000b68 @ 0xb68 */

uint __fastcall fcn.00000b68(int param_1,int32_t param_2,int param_3,uint *param_4)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    
    iVar1 = *(param_1 + 0x30);
    iVar2 = fcn.00001529(param_2);
    if (iVar2 != 0) {
        iVar4 = *(param_1 + 0x2c) + param_1;
        uVar5 = 0;
        if (*(param_1 + 0x46) != 0) {
            do {
                if (*(iVar4 + 6 + uVar5 * 8) == iVar2 - (iVar1 + param_1) >> 4) {
                    if (param_3 == 0) {
                        *param_4 = 0;
                        param_4[1] = 0;
                        uVar3 = fcn.00000abd(*(iVar4 + 4 + uVar5 * 8));
code_r0x00000c1e:
                        param_4[2] = uVar3;
                        return 0;
                    }
                    if (*(iVar4 + uVar5 * 8) == param_3) {
                        uVar3 = fcn.000005d1(*(iVar4 + 4 + uVar5 * 8));
                        param_4[1] = uVar3;
                        uVar3 = fcn.00000a7c();
                        *param_4 = uVar3;
                        uVar3 = fcn.00000abd(*(iVar4 + 4 + uVar5 * 8));
                        goto code_r0x00000c1e;
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(param_1 + 0x46));
        }
    }
    return 0x8000000e;
}


/* fcn.00000e2e @ 0xe2e */

void __fastcall fcn.00000e2e(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    
    fcn.000011a7();
    iVar2 = fcn.00001364();
    uVar4 = 0;
    do {
        pcVar1 = *(param_3 * 0x20 + iVar2 + -8 + uVar4 * 4);
        if (pcVar1 != NULL) {
            iVar3 = param_3;
            if (param_2 != 0) {
                iVar3 = param_1;
            }
            (*pcVar1)(param_2,iVar3,param_4,param_5);
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    return;
}


/* fcn.00000a33 @ 0xa33 */

int __fastcall fcn.00000a33(int param_1,uint32_t *param_2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    
    uVar5 = fcn.000011b7();
    iVar3 = uVar5 >> 0x20;
    iVar4 = *(iVar3 + 0x38) + iVar3;
    uVar1 = *(iVar4 + uVar5 * 2);
    if ((*(*(iVar3 + 0x28) + param_1 * 4 + iVar3) & 0x40000000) == 0) {
        if ((*param_2 <= uVar1) && (*param_2 != 0xffffffff)) {
            uVar2 = *param_2;
            *(iVar4 + 2 + uVar5 * 2) = uVar2;
            return CONCAT31(uVar2 >> 8,1);
        }
        *param_2 = uVar1;
    }
    return (uVar1 >> 8) << 8;
}


/* fcn.00000d92 @ 0xd92 */

uint __fastcall fcn.00000d92(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
    int iVar1;
    uint uVar2;
    uint uStack_18;
    uint *puStack_14;
    uint uStack_10;
    uchar *puStack_c;
    uchar auStack_8 [2];
    int iStack_6;
    
    fcn.00001449(0,&puStack_14);
    uStack_18 = 0;
    iVar1 = (**puStack_14)(puStack_14,param_2,param_1,0,&uStack_18,0);
    if (iVar1 == -0x7ffffffb) {
        puStack_c = auStack_8;
        InterruptDescriptorTableRegister();
        (**(**(iStack_6 + -4) + 0x4c))(*(iStack_6 + -4),uStack_18,&uStack_10);
        (**puStack_14)(puStack_14,param_2,param_1,0,&uStack_18,uStack_10);
        *param_4 = uStack_18;
        *param_3 = uStack_10;
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000e;
    }
    return uVar2;
}


/* fcn.0000064c @ 0x64c */

ulong __fastcall fcn.0000064c(uint param_1)

{
    ulong *puVar1;
    
    fcn.00001143(param_1);
    puVar1 = fcn.0000101c();
    return *puVar1;
}


/* fcn.0000126c @ 0x126c */

uint32_t __fastcall fcn.0000126c(char *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (((param_1 != NULL) && (param_2 != 0)) && (uVar1 = 0, *param_1 != '\0')) {
        do {
            if (param_2 - 1 <= uVar1) {
                return param_2;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00001246 @ 0x1246 */

uint32_t __fastcall fcn.00001246(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    
    if (param_3 <= param_1) {
        uVar1 = param_4 + param_3;
        if (param_1 < uVar1) goto code_r0x00001264;
        if (param_3 < param_1) goto code_r0x00001268;
    }
    uVar1 = param_1 + param_2;
    if (uVar1 <= param_3) {
code_r0x00001268:
        return uVar1 & 0xffffff00;
    }
code_r0x00001264:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.00001318 @ 0x1318 */

int32_t fcn.00001318(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00001505 @ 0x1505 */

uint32_t __fastcall fcn.00001505(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001343 @ 0x1343 */

int16_t * __fastcall fcn.00001343(uint param_1,int16_t *param_2)

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
    
    //[00] -r-x section size 5321 named .text
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


