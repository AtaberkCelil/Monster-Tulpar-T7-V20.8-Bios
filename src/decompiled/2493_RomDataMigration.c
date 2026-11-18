// decompiled by r2ghidra: 2493_RomDataMigration.te
// functions: 32

/* fcn.000001cf @ 0x1cf */

uint __fastcall fcn.000001cf(uint param_1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int extraout_ECX;
    int extraout_ECX_00;
    int iVar6;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(stack0xffffffee + -4) + 0x74))(param_1);
    if (iVar2 == -0x7fffffec) {
        iVar2 = fcn.00000571();
        if (iVar2 != 0) {
            iVar3 = fcn.00000506(*(iVar2 + 0x308));
            if (iVar3 != 0) {
                *(iVar2 + 0x30c) = 0;
                *(iVar2 + 0x308) = iVar3;
            }
        }
        iVar3 = fcn.00000571();
        iVar2 = extraout_ECX;
        if (iVar3 != 0) {
            iVar6 = *(iVar3 + 0x1c) * 0xc;
            iVar4 = fcn.000004ee();
            iVar2 = extraout_ECX_00;
            if (iVar4 != 0) {
                if (iVar6 != 0) {
                    iVar2 = iVar6;
                    fcn.0000040f();
                }
                *(iVar3 + 0x18) = iVar4;
            }
        }
        iVar2 = fcn.00000425(iVar2,&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 4) = 0xffd59dcd;
            *(var_4h + 8) = 0xffd59deb;
            *(var_4h + 0xc) = 0xffd59e09;
            *(var_4h + 0x10) = 0xffd59e26;
            *(var_4h + 0x14) = 0xffd59e6f;
            *(var_4h + 0x18) = 0xffd59eb1;
            *(var_4h + 0x1c) = 0xffd59edc;
            *(var_4h + 0x20) = 0xffd59f07;
            *(var_4h + 0x24) = 0xffd59f93;
            *(var_4h + 0x28) = 0xffd59fe2;
        }
        piVar1 = *0xfed00148;
        if ((((*0xfed00148 != NULL) && (*0xfed00148 != 0xffffffff)) && (**0xfed00148 == 0x44505346)) &&
           ((*(*0xfed00148 + 0x59) == '\x01' && ((*0xfed00148)[0x13] != 0)))) {
            iVar2 = fcn.000004ee();
            if (iVar2 != 0) {
                if (iVar2 != piVar1[0x13]) {
                    section..text(iVar2,piVar1[0x13],0xe0);
                }
                piVar1[0x13] = iVar2;
            }
        }
        iVar2 = fcn.000003d7();
        uVar5 = (**(iVar2 + 0xc))(0x12e);
        uVar5 = fcn.00000506(uVar5);
        iVar2 = fcn.000003d7();
        (**(iVar2 + 0x44))(0x12e,uVar5);
        iVar2 = fcn.000003d7();
        uVar5 = (**(iVar2 + 0xc))(0x130);
        uVar5 = fcn.00000506(uVar5);
        iVar2 = fcn.000003d7();
        (**(iVar2 + 0x44))(0x130,uVar5);
        iVar2 = fcn.000003d7();
        uVar5 = (**(iVar2 + 0xc))(0x12f);
        uVar5 = fcn.00000506(uVar5);
        iVar2 = fcn.000003d7();
        (**(iVar2 + 0x44))(0x12f,uVar5);
        iVar2 = fcn.000003f3();
        uVar5 = (**(iVar2 + 0x14))(0xffd5a1c4,0x50000028);
        *0xffd5a240 = fcn.00000506(uVar5);
        iVar2 = fcn.000003f3();
        (**(iVar2 + 0x38))(0,0x2d,0xffd595d3);
    }
    return 0;
}


/* entry0 @ 0x1a6 */

uint entry0(uint param_1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int extraout_ECX;
    int extraout_ECX_00;
    int iVar6;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(stack0xffffffee + -4) + 0x74))(param_1);
    if (iVar2 == -0x7fffffec) {
        iVar2 = fcn.00000571();
        if (iVar2 != 0) {
            iVar3 = fcn.00000506(*(iVar2 + 0x308));
            if (iVar3 != 0) {
                *(iVar2 + 0x30c) = 0;
                *(iVar2 + 0x308) = iVar3;
            }
        }
        iVar3 = fcn.00000571();
        iVar2 = extraout_ECX;
        if (iVar3 != 0) {
            iVar6 = *(iVar3 + 0x1c) * 0xc;
            iVar4 = fcn.000004ee();
            iVar2 = extraout_ECX_00;
            if (iVar4 != 0) {
                if (iVar6 != 0) {
                    iVar2 = iVar6;
                    fcn.0000040f();
                }
                *(iVar3 + 0x18) = iVar4;
            }
        }
        iVar2 = fcn.00000425(iVar2,&var_4h);
        if (-1 < iVar2) {
            *(var_4h + 4) = 0xffd59dcd;
            *(var_4h + 8) = 0xffd59deb;
            *(var_4h + 0xc) = 0xffd59e09;
            *(var_4h + 0x10) = 0xffd59e26;
            *(var_4h + 0x14) = 0xffd59e6f;
            *(var_4h + 0x18) = 0xffd59eb1;
            *(var_4h + 0x1c) = 0xffd59edc;
            *(var_4h + 0x20) = 0xffd59f07;
            *(var_4h + 0x24) = 0xffd59f93;
            *(var_4h + 0x28) = 0xffd59fe2;
        }
        piVar1 = *0xfed00148;
        if ((((*0xfed00148 != NULL) && (*0xfed00148 != 0xffffffff)) && (**0xfed00148 == 0x44505346)) &&
           ((*(*0xfed00148 + 0x59) == '\x01' && ((*0xfed00148)[0x13] != 0)))) {
            iVar2 = fcn.000004ee();
            if (iVar2 != 0) {
                if (iVar2 != piVar1[0x13]) {
                    section..text(iVar2,piVar1[0x13],0xe0);
                }
                piVar1[0x13] = iVar2;
            }
        }
        iVar2 = fcn.000003d7();
        uVar5 = (**(iVar2 + 0xc))(0x12e);
        uVar5 = fcn.00000506(uVar5);
        iVar2 = fcn.000003d7();
        (**(iVar2 + 0x44))(0x12e,uVar5);
        iVar2 = fcn.000003d7();
        uVar5 = (**(iVar2 + 0xc))(0x130);
        uVar5 = fcn.00000506(uVar5);
        iVar2 = fcn.000003d7();
        (**(iVar2 + 0x44))(0x130,uVar5);
        iVar2 = fcn.000003d7();
        uVar5 = (**(iVar2 + 0xc))(0x12f);
        uVar5 = fcn.00000506(uVar5);
        iVar2 = fcn.000003d7();
        (**(iVar2 + 0x44))(0x12f,uVar5);
        iVar2 = fcn.000003f3();
        uVar5 = (**(iVar2 + 0x14))(0xffd5a1c4,0x50000028);
        *0xffd5a240 = fcn.00000506(uVar5);
        iVar2 = fcn.000003f3();
        (**(iVar2 + 0x38))(0,0x2d,0xffd595d3);
    }
    return 0;
}


/* fcn.00000d8e @ 0xd8e */

uint fcn.00000d8e(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.000003f3 @ 0x3f3 */

int32_t __fastcall fcn.000003f3(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000425(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000425 @ 0x425 */

void __cdecl fcn.00000425(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000571 @ 0x571 */

int fcn.00000571(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00000525();
    do {
        iVar2 = fcn.00000550();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000d36();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000506 @ 0x506 */

void __fastcall fcn.00000506(uint param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.0000049f();
    if ((iVar1 != 0) && (param_2 != 0)) {
        fcn.0000040f(param_2);
    }
    return;
}


/* fcn.0000047d @ 0x47d */

int32_t __fastcall fcn.0000047d(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.00000452(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.0000049f @ 0x49f */

uint __fastcall fcn.0000049f(uint param_1,uint32_t param_2)

{
    int iVar1;
    uint auStack_c [2];
    
    if ((((param_2 & 0xfff) != 0) + (param_2 >> 0xc) != 0) && (iVar1 = fcn.00000452(auStack_c), -1 < iVar1)) {
        return auStack_c[0];
    }
    return 0;
}


/* fcn.0000040f @ 0x40f */

int __fastcall fcn.0000040f(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 3327 named .text
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


/* fcn.000004ee @ 0x4ee */

int __fastcall fcn.000004ee(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000004b7();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.00000160(iVar1,param_1);
    return iVar1;
}


/* fcn.000004b7 @ 0x4b7 */

int32_t __fastcall fcn.000004b7(uint param_1)

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


/* fcn.00000160 @ 0x160 */

uint * fcn.00000160(uint *param_1,uint32_t param_2)

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


/* fcn.000003d7 @ 0x3d7 */

int32_t __fastcall fcn.000003d7(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000425(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000452 @ 0x452 */

void __cdecl fcn.00000452(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00000525 @ 0x525 */

int32_t fcn.00000525(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000d36 @ 0xd36 */

uint32_t __fastcall fcn.00000d36(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000550 @ 0x550 */

int16_t * __fastcall fcn.00000550(uint param_1,int16_t *param_2)

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


/* fcn.000005ab @ 0x5ab */

void __fastcall fcn.000005ab(int16_t param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar1 = in(param_1 + 8);
    uVar3 = (uVar1 & 0xffffff) + 1 + (param_2 * 0x166) / 100;
    uVar4 = uVar3 >> 0x18;
    uVar1 = uVar1 & 0xffffff;
    while ((uVar4 != 0 || (uVar1 < (uVar3 & 0xffffff)))) {
        uVar2 = in(param_1 + 8);
        if ((uVar2 & 0xffffff) < uVar1) {
            if (uVar4 == 0) {
                return;
            }
            uVar4 = uVar4 - 1;
        }
        uVar1 = uVar2 & 0xffffff;
    }
    return;
}


/* fcn.00000c6c @ 0xc6c */

uint fcn.00000c6c(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000cf2(0,param_2 & 1);
    return CONCAT31((uVar1 | param_1) >> 8,*((uVar1 | param_1) + 0xc0000000));
}


/* fcn.00000cf2 @ 0xcf2 */

ulong __cdecl fcn.00000cf2(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.00000c0d @ 0xc0d */

uint32_t __fastcall fcn.00000c0d(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000cd4(*(param_1 + 0x38) + 0x10,*(param_1 + 0x3c) + (0xffffffef < *(param_1 + 0x38)),param_1);
    return uVar1 & 0xfffff000;
}


/* fcn.00000cd4 @ 0xcd4 */

uint fcn.00000cd4(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000cf2(0,param_2 & 1);
    return *((uVar1 | param_1) + 0xc0000000);
}


/* fcn.00000c2a @ 0xc2a */

uint fcn.00000c2a(void)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    
    uVar2 = fcn.00000c6c(0xfd0dc,0);
    if ((uVar2 & 0x20) == 0) {
        uVar1 = fcn.00000c6c(0xfd0dc,0);
        uVar2 = fcn.00000cf2(0,0);
        *((uVar2 | 0xfd0dc) + 0xc0000000) = uVar1 | 1;
        uVar3 = 0;
    }
    else {
        uVar3 = 0x8000000f;
    }
    return uVar3;
}


/* fcn.00000cac @ 0xcac */

void fcn.00000cac(uint param_1,uint param_2)

{
    fcn.00000c6c(param_1,param_2);
    fcn.00000c8a(param_1,param_2);
    return;
}


/* fcn.00000c8a @ 0xc8a */

uint __thiscall fcn.00000c8a(uchar param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000cf2(0,param_3 & 1);
    *((uVar1 | param_2) + 0xc0000000) = param_1;
    return CONCAT31((uVar1 | param_2) >> 8,param_1);
}


/* fcn.00000605 @ 0x605 */

uint32_t __fastcall fcn.00000605(uint param_1,int param_2,char param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    
    uVar2 = 0;
    while (uVar1 = *(param_2 + 4), (uVar1 & 0x20) != 0) {
        uVar1 = fcn.000005ab();
        bVar3 = 0xfffffffe < uVar2;
        uVar2 = uVar2 + 1;
        if ((bVar3) || (599999 < uVar2)) goto code_r0x00000645;
    }
    *(param_2 + 4) = 3;
    if (((uVar1 & 2) == 0) || (param_3 != '\x01')) {
        return CONCAT31(uVar1 >> 8,1);
    }
code_r0x00000645:
    return uVar1 & 0xffffff00;
}


/* fcn.00000ae3 @ 0xae3 */

uint __cdecl fcn.00000ae3(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    int *piVar2;
    uint32_t uVar3;
    
    if (arg_ch < 0x11) {
        if (arg_ch == 0x10) {
            *arg_10h = 0;
            *arg_14h = *(arg_8h + 0x54);
        }
        else {
            piVar2 = fcn.00000c0d();
            if ((*piVar2 < 0) && (arg_ch == 1)) {
                arg_ch = 6;
            }
            if (arg_ch < 0xc) {
                uVar3 = piVar2[arg_ch + 0x15];
            }
            else {
                uVar3 = piVar2[arg_ch + 0x2c];
            }
            if (uVar3 == 0x7fff) {
                return 0x80000007;
            }
            *arg_10h = (uVar3 & 0x7fff) * 0x1000;
            *arg_14h = (uVar3 >> 4 & 0x7fff000) + (uVar3 & 0x7fff) * -0x1000 + 0x1000;
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0x80000002;
    }
    return uVar1;
}


/* fcn.00000650 @ 0x650 */

ulong __cdecl fcn.00000650(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    char cVar1;
    int iVar2;
    int in_ECX;
    int32_t in_EDX;
    ushort uVar5;
    int32_t extraout_EDX;
    uint32_t uVar3;
    int32_t extraout_EDX_00;
    int32_t iVar4;
    ushort extraout_var;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    uint32_t uStack_30;
    uint32_t uStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    iStack_14 = *(in_ECX + 0x2c) + 0x30;
    uStack_c = in(iStack_14);
    out(iStack_14,uStack_c & 0xfffffffe);
    iStack_18 = *(in_ECX + 0x30) + 0xdc;
    iStack_1c = *(in_ECX + 0x34) + (0xffffff23 < *(in_ECX + 0x30));
    fcn.00000c6c(iStack_18,iStack_1c);
    iVar2 = fcn.00000c0d();
    if ((arg_8h == 1) || (arg_8h == 2)) {
        uVar8 = fcn.00000c2a();
        iVar4 = uVar8 >> 0x20;
        iVar7 = uVar8;
        if (-1 < uVar8) {
            fcn.00000cac(iStack_18,iStack_1c);
            goto code_r0x000006e7;
        }
code_r0x0000095f:
        uVar5 = iVar4 >> 0x10;
        if ((arg_8h != 1) && (arg_8h != 2)) goto code_r0x00000996;
    }
    else {
code_r0x000006e7:
        cVar1 = fcn.00000605(0);
        uVar5 = extraout_EDX >> 0x10;
        iVar4 = extraout_EDX;
        if (cVar1 == '\0') {
code_r0x0000095a:
            iVar7 = -0x7ffffff9;
            goto code_r0x0000095f;
        }
        if ((arg_8h == 5) && ((*(iVar2 + 4) & 0x800) != 0)) {
            iVar7 = -0x7ffffff1;
            goto code_r0x00000996;
        }
        uVar8 = fcn.00000ae3(in_ECX,in_EDX,&uStack_24,&uStack_10);
        iStack_20 = uVar8;
        iVar4 = uVar8 >> 0x20;
        iVar7 = iStack_20;
        if (iStack_20 < 0) goto code_r0x0000095f;
        uStack_24 = uStack_24 + arg_ch;
        if (uStack_10 < arg_ch + arg_10h) {
code_r0x00000753:
            iVar7 = -0x7ffffffe;
            iVar4 = arg_10h;
            goto code_r0x0000095f;
        }
        uStack_30 = 0;
        if (arg_8h == 0) {
            uStack_30 = 0;
code_r0x000007d3:
            do {
                uVar6 = arg_10h;
                if (((arg_8h == 0) || (arg_8h == 1)) || (arg_8h == 3)) {
                    uVar3 = uStack_24 + 0x100 & 0xffffff00;
                    if (uVar3 < arg_10h + uStack_24) {
                        uVar6 = uVar3 - uStack_24;
                    }
                    if (uVar6 < 0x40) {
                        if ((uVar6 & 0xfffffff8) != 0) {
                            uVar6 = uVar6 & 0xfffffff8;
                        }
                    }
                    else {
                        uVar6 = 0x40;
                    }
                }
                if (arg_8h == 2) {
                    if (((arg_10h & 0xffff0000U) != 0) && (((uStack_24 | arg_10h) & 0xffff) == 0)) {
                        if ((*(in_ECX + 0x4c) == '\0') || (uStack_24 < *(in_ECX + 0x50))) {
                            uVar6 = *(in_ECX + 0x3c);
                        }
                        else {
                            uVar6 = *(in_ECX + 0x40);
                        }
                        if ((uVar6 & 0x20000000) != 0) {
                            uVar6 = 0x10000;
                            uStack_30 = 0x80000;
                            goto code_r0x00000867;
                        }
                    }
                    uVar6 = 0x1000;
                    uStack_30 = 0x60000;
                }
                else {
code_r0x00000867:
                    if ((arg_8h == 1) || (arg_8h == 5)) {
                        uVar3 = 0;
                        if ((uVar6 & 7) == 0) {
                            if (uVar6 != 0) {
                                do {
                                    *(iVar2 + 0x10 + uVar3) = *(uVar3 + arg_14h);
                                    uVar3 = uVar3 + 4;
                                } while (uVar3 < uVar6);
                                goto code_r0x000008aa;
                            }
                        }
                        else if (uVar6 != 0) {
                            do {
                                *(iVar2 + 0x10 + uVar3) = *(uVar3 + arg_14h);
                                uVar3 = uVar3 + 1;
                            } while (uVar3 < uVar6);
code_r0x000008aa:
                            iVar7 = iStack_20;
                        }
                    }
                }
                *(iVar2 + 8) = uStack_24 & 0x7ffffff;
                *(iVar2 + 4) = (uVar6 - 1 & 0x3f) << 0x18 | *(iVar2 + 4) & 0xc0e1ffff | uStack_30 | 0x10000;
                cVar1 = fcn.00000605(1);
                iVar4 = extraout_EDX_00;
                if (cVar1 == '\0') goto code_r0x0000095a;
                if ((((arg_8h == 0) || (arg_8h == 3)) || (arg_8h == 4)) || (arg_8h == 6)) {
                    uVar3 = 0;
                    if ((uVar6 & 7) == 0) {
                        if (uVar6 != 0) {
                            do {
                                *(uVar3 + arg_14h) = *(iVar2 + 0x10 + uVar3);
                                uVar3 = uVar3 + 4;
                            } while (uVar3 < uVar6);
                        }
                    }
                    else if (uVar6 != 0) {
                        do {
                            *(uVar3 + arg_14h) = *(iVar2 + 0x10 + uVar3);
                            uVar3 = uVar3 + 1;
                        } while (uVar3 < uVar6);
                    }
                }
                uStack_24 = uStack_24 + uVar6;
                arg_14h = arg_14h + uVar6;
                arg_10h = arg_10h - uVar6;
            } while (arg_10h != 0);
            iVar4 = 0;
            goto code_r0x0000095f;
        }
        if (arg_8h == 1) {
            uStack_30 = 0x40000;
            goto code_r0x000007d3;
        }
        if (arg_8h != 2) {
            if (arg_8h == 3) {
                uStack_30 = 0xa0000;
            }
            else if (arg_8h == 4) {
                uStack_30 = 0xc0000;
            }
            else if (arg_8h == 5) {
                uStack_30 = 0xe0000;
            }
            else {
                if (arg_8h != 6) goto code_r0x00000753;
                uStack_30 = 0x100000;
            }
            goto code_r0x000007d3;
        }
        if (((uStack_24 | arg_10h) & 0xfff) == 0) goto code_r0x000007d3;
        iVar7 = -0x7ffffffe;
    }
    fcn.00000c6c(0xfd0dc,0);
    fcn.00000c8a(0xfd0dc,0);
    fcn.00000cac(iStack_18,iStack_1c);
    uVar5 = extraout_var;
code_r0x00000996:
    out(iStack_14,uStack_c);
    return CONCAT44(CONCAT22(uVar5,iStack_14),iVar7);
}


/* fcn.00000d7f @ 0xd7f */

uint32_t fcn.00000d7f(void)

{
    int iVar1;
    
    iVar1 = fcn.00000d6b();
    return *(iVar1 + 4) >> 7 & 1;
}


/* fcn.00000d6b @ 0xd6b */

uint32_t fcn.00000d6b(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000cd4(0xfd010,0);
    return uVar1 & 0xfffff000;
}


