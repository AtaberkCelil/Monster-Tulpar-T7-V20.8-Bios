// decompiled by r2ghidra: 2339_PlatformInitPreMem.te
// functions: 152

/* fcn.000004c5 @ 0x4c5 */

void __fastcall fcn.000004c5(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0x1fd */

void entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    fcn.00005fc4();
    fcn.00005fc4();
    fcn.00005fc4();
    fcn.00005fc4();
    fcn.00000377();
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0xffd1a5a8);
    return;
}


/* fcn.00000472 @ 0x472 */

void __fastcall fcn.00000472(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00005fc4 @ 0x5fc4 */

uint __fastcall fcn.00005fc4(int param_1)

{
    uint uVar1;
    uint *puVar2;
    int32_t var_ch;
    int32_t var_4h;
    
    if (param_1 == 0) {
        return 0x80000002;
    }
    var_4h = 0x5fda;
    puVar2 = fcn.0000058d();
    if (puVar2 == NULL) {
        return 0x80000009;
    }
    puVar2[2] = param_1;
    *puVar2 = 0x80000010;
    puVar2[1] = 0xffd1a568;
    var_4h = &fcn.00005fc4::var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),puVar2);
    return uVar1;
}


/* fcn.0000058d @ 0x58d */

int32_t __fastcall fcn.0000058d(uint param_1)

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


/* fcn.00000377 @ 0x377 */

void __fastcall fcn.00000377(int32_t *param_1)

{
    int iVar1;
    int32_t *extraout_ECX;
    int32_t *extraout_ECX_00;
    int32_t *piVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = param_1;
    while( true ) {
        piVar2 = &var_4h;
        iVar1 = fcn.00000497(param_1,&var_4h);
        param_1 = piVar2;
        if (iVar1 < 0) break;
        if (*var_4h != NULL) {
            (**var_4h)();
            param_1 = extraout_ECX;
        }
    }
    piVar2 = &var_4h;
    iVar1 = fcn.00000497(param_1,piVar2);
    if ((-1 < iVar1) && (*var_4h != NULL)) {
        (**var_4h)();
        piVar2 = extraout_ECX_00;
    }
    iVar1 = fcn.00000497(piVar2,&var_4h);
    if ((-1 < iVar1) && (*(var_4h + 4) != NULL)) {
        (**(var_4h + 4))();
    }
    fcn.0000050f();
    return;
}


/* fcn.00000497 @ 0x497 */

void __cdecl fcn.00000497(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000730 @ 0x730 */

int __fastcall fcn.00000730(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.000006bb @ 0x6bb */

int fcn.000006bb(void)

{
    int iVar1;
    
    iVar1 = fcn.00000655();
    if (iVar1 != 0) {
        fcn.0000074d();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00000655 @ 0x655 */

int32_t fcn.00000655(void)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.00000534(&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.0000074d @ 0x74d */

uint * __fastcall fcn.0000074d(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000004ea @ 0x4ea */

void __fastcall fcn.000004ea(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x28))(*(stack0xfffffff2 + -4),param_1);
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


/* fcn.0000050f @ 0x50f */

void __fastcall fcn.0000050f(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x2c))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000234 @ 0x234 */

void __fastcall fcn.00000234(uint param_1)

{
    uint uVar1;
    int iVar2;
    int32_t var_70h;
    int32_t var_74h;
    int32_t var_78h;
    uchar auStack_8c [120];
    int32_t var_10h;
    uint *puStack_c;
    uint uStack_8;
    
    fcn.00000497(param_1,&puStack_c);
    uStack_8 = 0x80;
    iVar2 = (**puStack_c)(puStack_c,0xffd1c528,0xffd1a3c8,0,&uStack_8,auStack_8c);
    if (iVar2 < 0) {
        uStack_8 = 0x30;
        fcn.00000730(0x30);
    }
    uVar1 = uStack_8;
    iVar2 = fcn.000006bb();
    if (iVar2 != 0) {
        fcn.00000730(uVar1);
    }
    return;
}


/* fcn.0000578f @ 0x578f */

int32_t __fastcall fcn.0000578f(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000497(param_1,&var_4h);
    return var_4h;
}


/* fcn.00005a47 @ 0x5a47 */

//WARNING: Removing unreachable block (ram,0x00005aa7)
//WARNING: Removing unreachable block (ram,0x00005a97)
//WARNING: Removing unreachable block (ram,0x00005ac3)
//WARNING: Removing unreachable block (ram,0x00005aee)
//WARNING: Removing unreachable block (ram,0x00005af4)
//WARNING: Removing unreachable block (ram,0x00005ac8)
//WARNING: Removing unreachable block (ram,0x00005a9d)
//WARNING: Removing unreachable block (ram,0x00005aa9)
//WARNING: Removing unreachable block (ram,0x00005ad2)
//WARNING: Removing unreachable block (ram,0x00005ad4)
//WARNING: Removing unreachable block (ram,0x00005afe)
//WARNING: Removing unreachable block (ram,0x00005b00)
//WARNING: Removing unreachable block (ram,0x00005b18)

void __fastcall fcn.00005a47(int param_1)

{
    char cVar1;
    int iVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = fcn.000057ad();
    cVar1 = (**(iVar2 + 0x18))(0xffd1a3b8,0x50000015);
    if ((cVar1 == '\0') && (param_1 != 0)) {
        fcn.00005a1a();
    }
    return;
}


/* fcn.00005c54 @ 0x5c54 */

void fcn.00005c54(void)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    
    cVar1 = fcn.00005354();
    iVar3 = *0xffd1ccc8;
    iVar2 = *0xffd1ccbc;
    if ((cVar1 == '\x05') || (cVar1 == '\x03')) {
        if (*0xffd1ccbc == 0) {
            return;
        }
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x44))(0x4a,iVar2);
        uVar4 = *0xffd1ccc0;
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x4b,uVar4);
        uVar4 = *0xffd1ccc4;
    }
    else {
        if (cVar1 != '\x04') {
            return;
        }
        if (*0xffd1ccc8 == 0) {
            return;
        }
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x4a,iVar3);
        uVar4 = *0xffd1cccc;
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x4b,uVar4);
        uVar4 = *0xffd1ccd0;
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0x4c,uVar4);
    return;
}


/* fcn.00000766 @ 0x766 */

uint32_t __fastcall fcn.00000766(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000005ef @ 0x5ef */

int16_t * __fastcall fcn.000005ef(uint param_1,int16_t *param_2)

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


/* fcn.000005c4 @ 0x5c4 */

int32_t fcn.000005c4(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000534 @ 0x534 */

void __cdecl fcn.00000534(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4));
    return;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 27349 named .text
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


/* fcn.00005843 @ 0x5843 */

ulong __cdecl fcn.00005843(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch / 1000000,(arg_ch % 1000000 << 0x20 | arg_8h) / 1000000);
}


/* fcn.0000079b @ 0x79b */

void __fastcall fcn.0000079b(uint32_t param_1)

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


/* fcn.00005822 @ 0x5822 */

void __fastcall fcn.00005822(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000497(param_1,&var_4h);
    (**(var_4h + 4))();
    return;
}


/* fcn.0000089a @ 0x89a */

uint fcn.0000089a(void)

{
    uint16_t uVar1;
    int iVar2;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    if (uVar1 == 0) {
        fcn.00005a07();
        iVar2 = fcn.0000578f();
        uVar1 = (**(iVar2 + 8))(0x1d);
    }
    if (uVar1 < 0x16) {
        if ((((uVar1 < 0x12) && (uVar1 != 5)) && (uVar1 != 0xe)) && (uVar1 != 0x10)) {
            return 0;
        }
    }
    else {
        if (uVar1 == 0x16) {
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x3c))(0x115,2);
            return 1;
        }
        if (uVar1 != 0x17) {
            if (uVar1 < 0x19) {
                return 0;
            }
            if (0x1f < uVar1) {
                return 0;
            }
        }
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0x20,0x90e0004);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x115,2);
    return 1;
}


/* fcn.000057ad @ 0x57ad */

int32_t __fastcall fcn.000057ad(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000497(param_1,&var_4h);
    return var_4h;
}


/* fcn.00005ffd @ 0x5ffd */

uint __fastcall fcn.00005ffd(int param_1)

{
    uint uVar1;
    uint *puVar2;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *puStack_8;
    
    if (param_1 != 0) {
        puStack_8 = 0x6013;
        puVar2 = fcn.0000058d();
        if (puVar2 != NULL) {
            puVar2[2] = param_1;
            *puVar2 = 0x80000010;
            puVar2[1] = 0xffd1a588;
            puStack_8 = &stack0xfffffff0;
            InterruptDescriptorTableRegister();
            uVar1 = (**(**(iStack_e + -4) + 0x18))(*(iStack_e + -4),puVar2);
            return uVar1;
        }
    }
    return 0x80000009;
}


/* fcn.000058c8 @ 0x58c8 */

//WARNING: Control flow encountered bad instruction data

void __fastcall fcn.000058c8(uint16_t param_1)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int iVar3;
    uint32_t uStack_14;
    uint32_t uStack_10;
    int aiStack_c [2];
    
    if (param_1 < 0x3f) {
        iVar3 = 0;
        piVar1 = *(param_1 * 4 + -0x2e3760);
        for (piVar2 = piVar1; *piVar2 != 0; piVar2 = piVar2 + 1) {
            iVar3 = iVar3 + 1;
        }
        aiStack_c[0] = iVar3 * 2 + 2;
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x4c))(0x1e,aiStack_c,piVar1);
    }
    switch(param_1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        uStack_14 = uStack_14 & 0xffffff00;
        uStack_10 = uStack_10 & 0xffffff00;
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x23,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0xf9,uStack_14);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0xf7,uStack_10);
        return;
    }
}


/* fcn.00005a07 @ 0x5a07 */

//WARNING: Control flow encountered bad instruction data

void fcn.00005a07(void)

{
    int16_t *piVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    int iVar4;
    uint32_t uStack_10;
    uint32_t uStack_c;
    int iStack_8;
    
    iVar4 = fcn.0000578f();
    iStack_8 = 0x5a11;
    uVar2 = (**(iVar4 + 8))();
    if (uVar2 < 0x3f) {
        iVar4 = 0;
        piVar1 = *(uVar2 * 4 + -0x2e3760);
        for (piVar3 = piVar1; *piVar3 != 0; piVar3 = piVar3 + 1) {
            iVar4 = iVar4 + 1;
        }
        iStack_8 = iVar4 * 2 + 2;
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x4c))(0x1e,&stack0xfffffff8,piVar1);
    }
    switch(uVar2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        uStack_10 = uStack_10 & 0xffffff00;
        uStack_c = uStack_c & 0xffffff00;
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x3c))(0x23,0);
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x3c))(0xf9,uStack_10);
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x3c))(0xf7,uStack_c);
        return;
    }
}


/* fcn.00005f02 @ 0x5f02 */

int __thiscall fcn.00005f02(uint *param_1,int *param_2,uint32_t *param_3)

{
    int iVar1;
    int iVar2;
    uint *puStack_8;
    uint *puStack_4;
    
    puStack_8 = param_1;
    puStack_4 = param_1;
    iVar1 = fcn.00000497(param_1,&puStack_4);
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffa;
    }
    else {
        puStack_8 = NULL;
        iVar1 = (**puStack_4)(puStack_4,0xffd1c5c4,0xffd1a488,0,&puStack_8,0);
        if (iVar1 == -0x7ffffffb) {
            if (((param_3 == NULL) || (*param_3 == NULL)) || (iVar2 = *param_2, iVar2 == 0)) {
                iVar2 = fcn.0000058d();
                if (iVar2 == 0) {
                    return -0x7ffffff7;
                }
            }
            else if (*param_3 < puStack_8) {
                return -0x7ffffffb;
            }
            iVar1 = (**puStack_4)(puStack_4,0xffd1c5c4,0xffd1a488,0,&puStack_8,iVar2);
            if (iVar1 < 0) {
                iVar2 = 0;
                puStack_8 = NULL;
            }
            *param_2 = iVar2;
            if (param_3 != NULL) {
                *param_3 = puStack_8;
            }
        }
    }
    return iVar1;
}


/* fcn.00005cd0 @ 0x5cd0 */

void __fastcall fcn.00005cd0(int param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t auStack_cc0 [3];
    uchar auStack_cb4 [4];
    uchar auStack_cb0 [3248];
    
    uVar5 = 0;
    if (param_2 != 0) {
        puVar4 = param_1 + 0x10;
        auStack_cc0[2] = param_2;
        do {
            uVar1 = puVar4[-1];
            if (uVar1 != 0) {
                auStack_cc0[0] = puVar4[-2];
                iVar2 = fcn.0000687d(auStack_cb4,auStack_cc0,auStack_cb0);
                if (iVar2 < 0) {
                    return;
                }
                auStack_cc0[1] = 0;
                if (*puVar4 != 0) {
                    uVar3 = 0;
                    iVar2 = uVar1 + 4;
                    do {
                        fcn.00000730(*(iVar2 + -4));
                        uVar3 = uVar3 + 1;
                        iVar2 = iVar2 + 0xc;
                    } while (uVar3 < *puVar4);
                    param_2 = auStack_cc0[2];
                }
                fcn.00006908(auStack_cb4,auStack_cc0[0],auStack_cb0);
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 5;
        } while (uVar5 < param_2);
    }
    return;
}


/* fcn.00004f8c @ 0x4f8c */

uint32_t __fastcall fcn.00004f8c(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00005864();
    return param_1 & 0xfff0ff0;
}


/* fcn.00005864 @ 0x5864 */

//WARNING: Removing unreachable block (ram,0x0000589a)
//WARNING: Removing unreachable block (ram,0x00005883)
//WARNING: Removing unreachable block (ram,0x00005892)
//WARNING: Removing unreachable block (ram,0x000058a1)

uint __fastcall fcn.00005864(uint param_1,uint *param_2)

{
    uint *puVar1;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    if (param_2 != NULL) {
        *param_2 = *puVar1;
    }
    return 1;
}


/* fcn.000053df @ 0x53df */

bool fcn.000053df(void)

{
    char cVar1;
    
    cVar1 = fcn.000051ca(0xfc,0);
    return cVar1 == '\x04';
}


/* fcn.000051ca @ 0x51ca */

uint __cdecl fcn.000051ca(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


/* fcn.00005392 @ 0x5392 */

void fcn.00005392(void)

{
    if (*0xffd1b6bc == -1) {
        *0xffd1b6bc = fcn.000051ca(0xf8008,0);
    }
    return;
}


/* fcn.000057ef @ 0x57ef */

void __thiscall fcn.000057ef(uint param_1,uint param_2,uint param_3)

{
    int iVar1;
    
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x48))(param_1,param_2,param_3);
    return;
}


/* fcn.00005808 @ 0x5808 */

void __fastcall fcn.00005808(uint param_1,uint param_2,uint param_3)

{
    int iVar1;
    
    iVar1 = fcn.000057ad();
    (**(iVar1 + 0x20))(0xffd1a3b8,param_2,param_3);
    return;
}


/* fcn.0000092b @ 0x92b */

//WARNING: Variable defined which should be unmapped: var_1h

uint __fastcall fcn.0000092b(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_1h;
    
    fcn.00000497(param_1,&var_ch);
    var_8h = 0;
    iVar1 = (**var_ch)(var_ch,0xffd1c5a8,0xffd1a3d8,0,&var_8h,0);
    if (iVar1 == -0x7ffffffb) {
        *0xfe001022 = *0xfe001022 & 0xfa | 0x80;
    }
    var_10h = &var_1h;
    var_1h._0_1_ = 0;
    var_8h = 1;
    fcn.00005f02(&var_10h,&var_8h);
    if ((var_1h & 1) != 0) {
        var_10h = CONCAT31(var_10h._1_3_,var_1h) & 0xffffff01;
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0x2a,var_10h);
    }
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0x11b,0xfeffff00);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0x11c,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0x2c,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0x10,0);
    return 0;
}


/* fcn.00005e2e @ 0x5e2e */

void __fastcall fcn.00005e2e(uint8_t *param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    
    uVar1 = in(0x1800);
    uVar2 = in(0x186c);
    if ((uVar1 & 0x100) != 0) {
        *param_1 = 6;
        return;
    }
    if (-1 < uVar1) {
        *param_1 = uVar1 >> 9 & 2 | 1;
        return;
    }
    if ((uVar2 & 0x800) != 0) {
        *param_1 = 7;
        return;
    }
    if ((uVar2 & 0x100) != 0) {
        *param_1 = 4;
        return;
    }
    *param_1 = 1;
    return;
}


/* fcn.00000be0 @ 0xbe0 */

void fcn.00000be0(void)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_8h;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    fcn.000057ef(0xff,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x85,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x86,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x117,0);
    if (uVar1 == 0x16) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x158,0x90c000f);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x156,0x90c000e);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x15b,0x90b0005);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x160,0x9080012);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x15c,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x159,1);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x157,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x15f,5);
        iVar2 = fcn.0000578f();
        uVar3 = 3;
    }
    else {
        if (uVar1 < 0x19) goto code_r0x00000e0b;
        if (uVar1 < 0x1b) {
code_r0x00000c68:
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x158,0x90c0011);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x156,0x90c0012);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x15b,0x90b0005);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x160,0x9080012);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x15c,0);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x159,1);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x157,0);
            iVar2 = fcn.0000578f();
            uVar3 = 5;
        }
        else {
            if (uVar1 != 0x1c) {
                if ((uVar1 != 0x1d) && (uVar1 != 0x1f)) goto code_r0x00000e0b;
                goto code_r0x00000c68;
            }
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x158,0x90c0011);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x156,0x90c000e);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x15b,0x90b0005);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x44))(0x160,0x9020011);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x15c,0);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x159,1);
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x157,0);
            iVar2 = fcn.0000578f();
            uVar3 = 6;
        }
        (**(iVar2 + 0x3c))(0x15f,uVar3);
        iVar2 = fcn.0000578f();
        uVar3 = 6;
    }
    (**(iVar2 + 0x3c))(0x15e,uVar3);
code_r0x00000e0b:
    fcn.00005808(0x55);
    fcn.00005808(0x41);
    return;
}


/* fcn.00000f9b @ 0xf9b */

//WARNING: Control flow encountered bad instruction data

void fcn.00000f9b(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    uint uVar6;
    
    iVar3 = fcn.0000578f();
    uVar2 = (**(iVar3 + 8))(0x1d);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x7f,0x200);
    cVar1 = fcn.000057cb();
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6a,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6b,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x72,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x73,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x74,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x75,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x76,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x77,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x78,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x79,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6c,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6d,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6e,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6f,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x70,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x71,0);
    if (cVar1 != '\0') {
        switch(uVar2) {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        }
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x5f,0xffd1c640);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x60,0x18);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x68,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x69,0xffd1c6a8);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x50))(100,1);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x50))(99,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x66,0x10);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x62,0x80);
    if (((uVar2 == 5) || (uVar2 == 0x13)) || (uVar2 == 0x15)) {
code_r0x000011e5:
        iVar3 = fcn.0000578f();
        uVar6 = 0xff;
    }
    else {
        if (0x19 < uVar2) {
            if ((uVar2 < 0x1c) || (uVar2 == 0x1d)) goto code_r0x000011e5;
            if (uVar2 == 0x1f) {
                iVar3 = fcn.0000578f();
                uVar6 = 0x99;
                goto code_r0x000011ef;
            }
        }
        iVar3 = fcn.0000578f();
        uVar6 = 0;
    }
code_r0x000011ef:
    (**(iVar3 + 0x3c))(0x67,uVar6);
    iVar3 = fcn.000057da();
    if (iVar3 != 0) {
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x44))(0x61,iVar3);
    }
    iVar3 = fcn.000057da();
    if (iVar3 != 0) {
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x44))(0x65,iVar3);
    }
    pcVar5 = fcn.000057da();
    if ((pcVar5 != NULL) && (*pcVar5 == '\x01')) {
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x44))(0x7a,pcVar5 + 1);
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x5d,2);
    return;
}


/* fcn.000057cb @ 0x57cb */

void fcn.000057cb(void)

{
    int iVar1;
    
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x18))(0x11a);
    return;
}


/* fcn.000057da @ 0x57da */

void __fastcall fcn.000057da(uint param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = fcn.000057ad();
    (**(iVar1 + 0x14))(0xffd1a3b8,param_2);
    return;
}


/* fcn.0000128e @ 0x128e */

//WARNING: Control flow encountered bad instruction data

void fcn.0000128e(void)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint uStack_cb4;
    uint *puStack_cb0;
    uchar auStack_cac [2954];
    char cStack_122;
    
    iVar1 = fcn.0000578f();
    uVar3 = 0x1d;
    uVar2 = (**(iVar1 + 8))();
    uVar2 = uVar2 & 0xffff;
    fcn.00000497(uVar3,&puStack_cb0);
    uStack_cb4 = 0xca9;
    (**puStack_cb0)(puStack_cb0,0xffd1c568,0xffd1a478,0,&uStack_cb4,auStack_cac);
    if (uVar2 == 0xe) {
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xef,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xf5,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xd3,0);
    }
    switch(uVar2) {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    if (uVar2 == 5) {
code_r0x00001844:
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xf0,0x9020014);
    }
    else if (uVar2 == 0x10) {
code_r0x0000183a:
        if (cStack_122 == '\0') goto code_r0x00001844;
    }
    else if (0x11 < uVar2) {
        if (uVar2 < 0x16) goto code_r0x0000183a;
        if (uVar2 == 0x17) goto code_r0x00001844;
    }
    if (0x18 < uVar2) {
        if (uVar2 < 0x1c) {
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa2,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa4,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xa5,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xa3,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa7,0);
            iVar1 = fcn.0000578f();
            uVar3 = 0;
            goto code_r0x000018cb;
        }
        if (uVar2 == 0x1c) {
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa2,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa4,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xa5,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xa3,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa7,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xa8,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xa6,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xa9,1);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xab,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xac,0x902000f);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xaa,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xae,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xaf,0x902000e);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xad,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xb0,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xb2,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xb3,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xb1,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xb5,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xb6,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xb4,0);
            return;
        }
        if (uVar2 - 0x1d < 3) {
            return;
        }
    }
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xa2,1);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xa4,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xa5,0x90c000a);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xa3,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xa7,0);
    iVar1 = fcn.0000578f();
    uVar3 = 0x9070011;
code_r0x000018cb:
    (**(iVar1 + 0x44))(0xa8,uVar3);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xa6,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xa9,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xab,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xac,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xaa,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xae,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xaf,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xad,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xb0,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xb2,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xb3,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xb1,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xb5,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xb6,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xb4,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xb7,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xb9,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xba,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xb8,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x3c))(0xbc,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x44))(0xbd,0);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0xbb,0);
    return;
}


/* fcn.00001e3f @ 0x1e3f */

uint fcn.00001e3f(void)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint32_t uVar9;
    uint *puVar10;
    uint uVar11;
    uint auStack_98 [37];
    
    uVar9 = 0;
    do {
        auStack_98[uVar9 * 2 + 1] = 1;
        auStack_98[uVar9 * 2] = 0xff;
        uVar9 = uVar9 + 1;
    } while (uVar9 < 0x12);
    puVar10 = fcn.000057da();
    if (puVar10 == NULL) {
        uVar11 = 0x80000002;
    }
    else {
        uVar11 = puVar10[5];
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        uVar4 = puVar10[4];
        uVar5 = puVar10[6];
        uVar6 = puVar10[7];
        uVar7 = puVar10[8];
        uVar8 = puVar10[9];
        fcn.000057ef(*puVar10,auStack_98[1]);
        fcn.000057ef(uVar1,auStack_98[3]);
        fcn.000057ef(uVar2,auStack_98[5]);
        fcn.000057ef(uVar3,auStack_98[7]);
        fcn.000057ef(uVar4,auStack_98[9]);
        fcn.000057ef(uVar11,auStack_98[0xb]);
        fcn.000057ef(uVar5,auStack_98[0xd]);
        fcn.000057ef(uVar6,auStack_98[0xf]);
        fcn.000057ef(uVar7,auStack_98[0x11]);
        fcn.000057ef(uVar8,auStack_98[0x13]);
        fcn.000057ef(auStack_98[0x14],auStack_98[0x15]);
        fcn.000057ef(auStack_98[0x16],auStack_98[0x17]);
        fcn.000057ef(auStack_98[0x18],auStack_98[0x19]);
        fcn.000057ef(auStack_98[0x1a],auStack_98[0x1b]);
        fcn.000057ef(auStack_98[0x1c],auStack_98[0x1d]);
        fcn.000057ef(auStack_98[0x1e],auStack_98[0x1f]);
        uVar11 = 0;
    }
    return uVar11;
}


/* fcn.00001bf5 @ 0x1bf5 */

void fcn.00001bf5(void)

{
    int iVar1;
    
    iVar1 = fcn.0000578f();
    (**(iVar1 + 8))(0x1d);
    return;
}


/* fcn.00005b9a @ 0x5b9a */

void fcn.00005b9a(void)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    uint noname_0;
    uint uStack_588;
    uint *puStack_584;
    uchar auStack_580 [190];
    char cStack_4c2;
    char cStack_198;
    char cStack_197;
    uint8_t auStack_196 [402];
    
    uVar4 = 0xf;
    iVar2 = fcn.0000578f();
    noname_0 = 0x2f;
    uVar1 = (**(iVar2 + 4))();
    iVar2 = fcn.00000497(noname_0,&puStack_584);
    if (iVar2 == 0) {
        uStack_588 = 0x578;
        iVar2 = (**puStack_584)(puStack_584,0xffd1c574,0xffd1a528,0,&uStack_588,auStack_580);
        if (iVar2 < 0) {
            return;
        }
        if (cStack_4c2 == '\x01') {
            if ((cStack_197 != '\0') && (cStack_198 != '\0')) {
                iVar3 = 0;
                uVar4 = 0;
                iVar2 = 4;
                do {
                    uVar4 = uVar4 | (auStack_196[iVar3] & 1) << (iVar3 & 0x1f);
                    iVar3 = iVar3 + 1;
                    iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
            }
        }
        else {
            uVar4 = 0;
        }
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x2e,uVar1 & uVar4);
    return;
}


/* fcn.00001d28 @ 0x1d28 */

//WARNING: Control flow encountered bad instruction data

void fcn.00001d28(void)

{
    uint8_t uVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    uint8_t uVar5;
    uint noname_0;
    uint uStack_584;
    uint *puStack_580;
    uchar auStack_57c [190];
    char cStack_4be;
    char cStack_194;
    char cStack_193;
    uint8_t auStack_192 [394];
    uint uStack_8;
    
    iVar3 = fcn.0000578f();
    uStack_8 = 0x1d32;
    uVar2 = (**(iVar3 + 8))();
    switch(uVar2) {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    uVar5 = 0xf;
    iVar3 = fcn.0000578f();
    noname_0 = 0x2f;
    uVar1 = (**(iVar3 + 4))();
    iVar3 = fcn.00000497(noname_0,&stack0xfffffa80);
    if (iVar3 == 0) {
        uStack_584 = 0x578;
        iVar3 = (**puStack_580)(puStack_580,0xffd1c574,0xffd1a528,0,&stack0xfffffa7c,&stack0xfffffa84);
        if (iVar3 < 0) {
            return;
        }
        if (cStack_4be == '\x01') {
            if ((cStack_193 != '\0') && (cStack_194 != '\0')) {
                iVar4 = 0;
                uVar5 = 0;
                iVar3 = 4;
                do {
                    uVar5 = uVar5 | ((&stack0xfffffe6e)[iVar4] & 1) << (iVar4 & 0x1f);
                    iVar4 = iVar4 + 1;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
            }
        }
        else {
            uVar5 = 0;
        }
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x2e,uVar1 & uVar5);
    return;
}


/* fcn.00005b26 @ 0x5b26 */

//WARNING: Removing unreachable block (ram,0x00005b45)

void __fastcall fcn.00005b26(int param_1)

{
    int32_t var_4h;
    
    if (param_1 != 0) {
        fcn.00005a1a();
    }
    return;
}


/* fcn.00005a1a @ 0x5a1a */

void __fastcall fcn.00005a1a(int *param_1,uint16_t *param_2)

{
    int iVar1;
    uint16_t uVar2;
    
    *param_2 = 0;
    if (param_1 != NULL) {
        iVar1 = *param_1;
        while ((iVar1 != 0 && (*param_2 < 0xfa))) {
            uVar2 = *param_2 + 1;
            *param_2 = uVar2;
            iVar1 = param_1[uVar2 * 3];
        }
    }
    return;
}


/* fcn.00004613 @ 0x4613 */

uint __fastcall fcn.00004613(int param_1,int param_2)

{
    uint uVar1;
    uint32_t *puVar2;
    int iVar3;
    uint32_t *puVar4;
    
    uVar1 = fcn.000042c9();
    if (param_1 != 0) {
        iVar3 = param_1;
        do {
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    iVar3 = fcn.000006bb();
    if (param_1 != 0) {
        puVar4 = iVar3 + 4;
        puVar2 = param_2 + 4;
        do {
            if (((*puVar2 & 0x1f) != 0) && (iVar3 != 0)) {
                puVar4[-1] = puVar2[-1];
                *puVar4 = *puVar4 ^ (*puVar4 ^ *puVar2) & 0x1f;
                puVar4 = puVar4 + 2;
            }
            puVar2 = puVar2 + 3;
            param_1 = param_1 + -1;
        } while (param_1 != 0);
    }
    fcn.0000450f();
    return uVar1;
}


/* fcn.000007e4 @ 0x7e4 */

uint32_t __fastcall fcn.000007e4(uint32_t param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.00005843(param_1 * 0x369e99,param_1 * 0x369e99 >> 0x20);
    fcn.0000079b();
    return param_1;
}


/* fcn.00005b54 @ 0x5b54 */

void fcn.00005b54(void)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    uint extraout_ECX;
    
    iVar1 = fcn.0000578f();
    iVar1 = (**(iVar1 + 0xc))(0x4a);
    if (iVar1 != 0) {
        iVar1 = fcn.0000578f();
        uVar2 = (**(iVar1 + 0xc))(0x4c);
        iVar1 = fcn.0000578f();
        uVar3 = (**(iVar1 + 0xc))(0x4b);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0xc))(0x4a);
        fcn.00004e0c(uVar3,extraout_ECX,uVar2);
    }
    return;
}


/* fcn.00004e0c @ 0x4e0c */

uint __thiscall fcn.00004e0c(uint32_t param_1,uint32_t param_2,uint param_3,uint32_t param_4)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int8_t var_4h;
    int8_t var_5h;
    int8_t var_6h;
    int iStack_34;
    uint32_t auStack_30 [12];
    
    fcn.000000e0(auStack_30 + 6,0xc);
    fcn.000000e0(auStack_30 + 3,0xc);
    if (((param_1 == param_2) || (param_1 == param_4)) || (param_2 == param_4)) {
code_r0x00004f21:
        uVar2 = 0x80000002;
    }
    else {
        uVar6 = 0;
        auStack_30[1] = param_2;
        auStack_30[9] = 0;
        auStack_30[10] = 0;
        auStack_30[2] = param_4;
        auStack_30[0xb] = 0;
        auStack_30[0] = param_1;
        fcn.0000622d();
        uVar5 = 0;
        do {
            uVar3 = 0;
            if (param_2 != 0) {
                uVar1 = auStack_30[uVar5];
                do {
                    if (*(iStack_34 + uVar3 * 8) == uVar1) {
                        if (*(iStack_34 + 4 + uVar3 * 8) == auStack_30[uVar5 + 9]) {
                            auStack_30[uVar5 + 3] = *(iStack_34 + 5 + uVar3 * 8);
                            auStack_30[uVar5 + 6] = *(iStack_34 + 6 + uVar3 * 8);
                            break;
                        }
                        uVar1 = auStack_30[uVar5];
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < param_2);
            }
            if (uVar3 == param_2) goto code_r0x00004f21;
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < 3);
        *0xfe001920 = *0xfe001920 & 0xfffff000 | (auStack_30[5] << 4 | auStack_30[4]) << 4 | auStack_30[3];
        do {
            fcn.000061c5(0xfff000ff,((auStack_30[8] << 4 | auStack_30[7]) << 4 | auStack_30[6]) << 8);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 6);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000025e7 @ 0x25e7 */

uint fcn.000025e7(void)

{
    uint16_t uVar1;
    int iVar2;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    if (uVar1 == 0) {
        fcn.00005a07();
        iVar2 = fcn.0000578f();
        uVar1 = (**(iVar2 + 8))(0x1d);
    }
    if ((uVar1 != 0) && ((uVar1 < 5 || (uVar1 == 0xf)))) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x115,3);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x20,0x90e0004);
        return 1;
    }
    return 0;
}


/* fcn.00005015 @ 0x5015 */

int __cdecl fcn.00005015(int8_t arg_8h)

{
    int iVar1;
    uchar *in_EDX;
    uint uVar2;
    int32_t var_24h;
    int32_t var_14h;
    
    fcn.000000e0(&var_14h,0x10);
    fcn.000000e0(&var_24h,0x10);
    *in_EDX = 0;
    if (arg_8h == 1) {
        uVar2 = 0;
    }
    else if (arg_8h == 2) {
        uVar2 = 3;
    }
    else {
        if (arg_8h != 3) {
            return -0x7ffffffe;
        }
        uVar2 = 6;
    }
    iVar1 = fcn.00005123(uVar2,2,&var_14h,&var_24h);
    if (-1 < iVar1) {
        *in_EDX = var_24h;
    }
    return iVar1;
}


/* fcn.0000509e @ 0x509e */

uint __cdecl fcn.0000509e(int8_t arg_8h)

{
    uint32_t in_ECX;
    uint8_t in_DL;
    uint uVar1;
    int32_t var_24h;
    int32_t var_14h;
    
    fcn.000000e0(&var_14h,0x10);
    fcn.000000e0(&var_24h,0x10);
    var_14h = in_DL << 0x10 | in_ECX;
    if (arg_8h == 1) {
        uVar1 = 1;
    }
    else if (arg_8h == 2) {
        uVar1 = 4;
    }
    else {
        if (arg_8h != 3) {
            return 0x80000002;
        }
        uVar1 = 7;
    }
    uVar1 = fcn.00005123(uVar1,3,&var_14h,&var_24h);
    return uVar1;
}


/* fcn.00004979 @ 0x4979 */

int __fastcall fcn.00004979(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    
    fcn.000000e0(&uStack_20,0x10);
    fcn.000000e0(&uStack_10,0x10);
    uVar7 = (param_1 & 0x1ff) >> 5;
    uVar4 = param_1 & 0x1f;
    cVar1 = fcn.000062ba();
    if ((cVar1 == '\0') || (cVar1 = fcn.0000629a(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    if (((*param_2 & 0x48000) == 0x48000) && ((param_2[1] & 0x600) != 0x600)) {
        return -0x7ffffffe;
    }
    fcn.00006452(&uStack_20,&uStack_10);
    fcn.00006325(~uStack_10,uStack_20);
    fcn.00006325(~uStack_c,uStack_1c);
    fcn.00006325(~uStack_8,uStack_18);
    uVar5 = *param_2;
    if ((uVar5 & 0x28000) == 0x28000) {
        uVar2 = 1 << uVar4;
        uVar5 = uVar2;
    }
    else {
        uVar2 = (uVar5 >> 5 & 1) << uVar4;
        uVar5 = (uVar5 >> 6 & 1) << uVar4;
    }
    fcn.000047ad(uVar7,~uVar2,uVar5);
    fcn.000047ad(uVar7,~((*param_2 >> 0xf & 1) << uVar4),(*param_2 >> 0x12 & 1) << uVar4);
    iVar6 = (*param_2 >> 0x10 & 1) << uVar4;
    iVar3 = fcn.000047ad(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
    if ((iVar3 == -0x7ffffffd) && (iVar6 != 0)) {
code_r0x00004af9:
        iVar3 = -0x7ffffffd;
    }
    else {
        iVar6 = (*param_2 >> 0x11 & 1) << uVar4;
        iVar3 = fcn.000047ad(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
        if (iVar3 == -0x7ffffffd) {
            if (iVar6 != 0) goto code_r0x00004af9;
            iVar3 = 0;
        }
        if ((param_2[1] & 0x1e00) != 0) {
            iVar3 = fcn.000060ef();
        }
    }
    return iVar3;
}


/* fcn.0000211c @ 0x211c */

void fcn.0000211c(void)

{
    uint16_t uVar1;
    int iVar2;
    int32_t var_8h;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    fcn.000057ef(0xff,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x85,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x86,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x117,0);
    if ((uVar1 != 0) && ((uVar1 < 5 || (uVar1 == 0xf)))) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x158,0x9080009);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x156,0x90e0005);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x15b,0x90b0005);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x160,0x9080012);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x15c,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x159,1);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x157,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x15f,5);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x15e,4);
    }
    fcn.00005808(0x55);
    fcn.00005808(0x41);
    return;
}


/* fcn.000027e7 @ 0x27e7 */

void fcn.000027e7(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    uint uVar6;
    
    iVar3 = fcn.0000578f();
    uVar2 = (**(iVar3 + 8))(0x1d);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x7f,0x200);
    cVar1 = fcn.000057cb();
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6a,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6b,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x72,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x73,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x74,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x75,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x76,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x77,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x78,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x79,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6c,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6d,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6e,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x6f,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x70,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x71,0);
    if (((cVar1 != '\0') && (uVar2 != 0)) && ((uVar2 < 5 || (uVar2 == 0xf)))) {
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6a,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x72,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x74,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x76,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x78,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6c,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6e,0xa8);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x70,0xa8);
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x5f,0xffd1c6f4);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x60,0x18);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x68,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x69,0xffd1c73c);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x50))(100,1);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x50))(99,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x66,0x10);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x62,0x80);
    if (uVar2 == 1) {
        iVar3 = fcn.0000578f();
        uVar6 = 0xcc;
    }
    else {
        iVar3 = fcn.0000578f();
        uVar6 = 0;
    }
    (**(iVar3 + 0x3c))(0x5e,uVar6);
    if ((uVar2 < 2) || ((4 < uVar2 && (uVar2 != 0xf)))) {
        iVar3 = fcn.0000578f();
        uVar6 = 0;
    }
    else {
        iVar3 = fcn.0000578f();
        uVar6 = 0xff;
    }
    (**(iVar3 + 0x3c))(0x67,uVar6);
    iVar3 = fcn.000057da();
    if (iVar3 != 0) {
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x44))(0x61,iVar3);
    }
    iVar3 = fcn.000057da();
    if (iVar3 != 0) {
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x44))(0x65,iVar3);
    }
    pcVar5 = fcn.000057da();
    if ((pcVar5 != NULL) && (*pcVar5 == '\x01')) {
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x44))(0x7a,pcVar5 + 1);
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x5d,2);
    return;
}


/* fcn.00002a62 @ 0x2a62 */

void fcn.00002a62(void)

{
    uint16_t uVar1;
    int iVar2;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    if ((uVar1 != 0) && ((uVar1 < 5 || (uVar1 == 0xf)))) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0xe2,0x9080010);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0xe4,0x907000d);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0xe3,1);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0xe5,0);
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa2,1);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa4,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xa5,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xa3,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa7,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xa8,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xa6,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa9,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xab,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xac,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xaa,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xae,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xaf,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xad,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb0,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb2,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xb3,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xb1,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb5,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xb6,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xb4,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb7,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb9,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xba,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xb8,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xbc,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xbd,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xbb,0);
    return;
}


/* fcn.00002645 @ 0x2645 */

uint fcn.00002645(void)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint32_t uVar6;
    uint *puVar7;
    uint uVar8;
    uint auStack_98 [37];
    
    uVar6 = 0;
    do {
        auStack_98[uVar6 * 2 + 1] = 1;
        auStack_98[uVar6 * 2] = 0xff;
        uVar6 = uVar6 + 1;
    } while (uVar6 < 0x12);
    puVar7 = fcn.000057da();
    if (puVar7 == NULL) {
        uVar8 = 0x80000002;
    }
    else {
        uVar8 = puVar7[5];
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[6];
        fcn.000057ef(*puVar7,auStack_98[1]);
        fcn.000057ef(uVar1,auStack_98[3]);
        fcn.000057ef(uVar2,auStack_98[5]);
        fcn.000057ef(uVar3,auStack_98[7]);
        fcn.000057ef(uVar4,auStack_98[9]);
        fcn.000057ef(uVar8,auStack_98[0xb]);
        fcn.000057ef(uVar5,auStack_98[0xd]);
        fcn.000057ef(auStack_98[0xe],auStack_98[0xf]);
        fcn.000057ef(auStack_98[0x10],auStack_98[0x11]);
        fcn.000057ef(auStack_98[0x12],auStack_98[0x13]);
        fcn.000057ef(auStack_98[0x14],auStack_98[0x15]);
        fcn.000057ef(auStack_98[0x16],auStack_98[0x17]);
        fcn.000057ef(auStack_98[0x18],auStack_98[0x19]);
        fcn.000057ef(auStack_98[0x1a],auStack_98[0x1b]);
        fcn.000057ef(auStack_98[0x1c],auStack_98[0x1d]);
        fcn.000057ef(auStack_98[0x1e],auStack_98[0x1f]);
        uVar8 = 0;
    }
    return uVar8;
}


/* fcn.00002c5c @ 0x2c5c */

void fcn.00002c5c(void)

{
    int16_t iVar1;
    int16_t iVar2;
    int iVar3;
    uint uVar4;
    
    iVar3 = fcn.0000578f();
    iVar1 = (**(iVar3 + 8))(0x1d);
    iVar3 = fcn.0000578f();
    iVar2 = (**(iVar3 + 8))(0x35);
    if (iVar1 == 1) {
        if (iVar2 == 0) goto code_r0x00002cb6;
        if (iVar2 == 5) {
            iVar3 = fcn.0000578f();
            uVar4 = 0xffd1c758;
            goto code_r0x00002d15;
        }
        if (iVar2 != 1) {
            iVar3 = fcn.0000578f();
            uVar4 = 0xffd1c72c;
            goto code_r0x00002d15;
        }
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 == 3) {
                iVar3 = fcn.0000578f();
                uVar4 = 0xffd1c748;
                goto code_r0x00002d15;
            }
            if (iVar1 != 4) {
                if (iVar1 != 0xf) {
                    return;
                }
                iVar3 = fcn.0000578f();
                uVar4 = 0xffd1c70c;
                goto code_r0x00002d15;
            }
        }
        if (iVar2 == 0) {
code_r0x00002cb6:
            iVar3 = fcn.0000578f();
            uVar4 = 0xffd1c768;
            goto code_r0x00002d15;
        }
        if (iVar2 == 5) {
            iVar3 = fcn.0000578f();
            uVar4 = 0xffd1c6d4;
            goto code_r0x00002d15;
        }
        if (iVar2 != 1) {
            iVar3 = fcn.0000578f();
            uVar4 = 0xffd1c71c;
            goto code_r0x00002d15;
        }
    }
    iVar3 = fcn.0000578f();
    uVar4 = 0xffd1c6e4;
code_r0x00002d15:
    (**(iVar3 + 0x44))(0x10b,uVar4);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x10c,0x10);
    return;
}


/* fcn.00002d30 @ 0x2d30 */

void fcn.00002d30(void)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    uint8_t uVar5;
    uint noname_0;
    uint uStack_584;
    uint *puStack_580;
    uchar auStack_57c [190];
    char cStack_4be;
    char cStack_194;
    char cStack_193;
    uint8_t auStack_192 [374];
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    iVar3 = fcn.0000578f();
    uStack_8 = 0x2d3a;
    uVar2 = (**(iVar3 + 8))();
    if (uVar2 != 0) {
        if (uVar2 < 5) {
            iVar3 = fcn.0000578f();
            uStack_8 = 0x2f;
            uStack_c = 0x2d79;
            (**(iVar3 + 0x3c))();
            uStack_c = 0x2d7e;
            iVar3 = fcn.0000578f();
            uStack_c = 2;
            uStack_10 = 0x54;
            uStack_14 = 0x2d85;
            (**(iVar3 + 0x3c))();
            uStack_14 = 0x2d8a;
            iVar3 = fcn.0000578f();
            uStack_14 = 6;
        }
        else {
            if (uVar2 != 0xf) goto code_r0x00002d94;
            iVar3 = fcn.0000578f();
            uStack_8 = 0x2f;
            uStack_c = 0x2d58;
            (**(iVar3 + 0x3c))();
            uStack_c = 0x2d5d;
            iVar3 = fcn.0000578f();
            uStack_c = 2;
            uStack_10 = 0x54;
            uStack_14 = 0x2d64;
            (**(iVar3 + 0x3c))();
            uStack_14 = 0x2d69;
            iVar3 = fcn.0000578f();
            uStack_14 = 3;
        }
        uStack_18 = 0x30;
        uStack_1c = 0x2d91;
        (**(iVar3 + 0x3c))();
    }
code_r0x00002d94:
    uVar5 = 0xf;
    iVar3 = fcn.0000578f();
    noname_0 = 0x2f;
    uVar1 = (**(iVar3 + 4))();
    iVar3 = fcn.00000497(noname_0,&stack0xfffffa80);
    if (iVar3 == 0) {
        uStack_584 = 0x578;
        iVar3 = (**puStack_580)(puStack_580,0xffd1c574,0xffd1a528,0,&stack0xfffffa7c,&stack0xfffffa84);
        if (iVar3 < 0) {
            return;
        }
        if (cStack_4be == '\x01') {
            if ((cStack_193 != '\0') && (cStack_194 != '\0')) {
                iVar4 = 0;
                uVar5 = 0;
                iVar3 = 4;
                do {
                    uVar5 = uVar5 | ((&stack0xfffffe6e)[iVar4] & 1) << (iVar4 & 0x1f);
                    iVar4 = iVar4 + 1;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
            }
        }
        else {
            uVar5 = 0;
        }
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x2e,uVar1 & uVar5);
    return;
}


/* fcn.0000233e @ 0x233e */

void __fastcall fcn.0000233e(uint param_1)

{
    int iVar1;
    int32_t var_cb8h;
    int8_t var_5f0h;
    int8_t var_5efh;
    int8_t var_5eeh;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    fcn.00000497(param_1,&var_ch);
    var_8h = 0xca9;
    (**var_ch)(var_ch,0xffd1c568,0xffd1a478,0,&var_8h,&var_cb8h);
    _var_4h = CONCAT31(Stack_7,var_5f0h);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0x178,_var_4h);
    _var_4h = CONCAT31(Stack_7,var_5efh);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0x177,_var_4h);
    _var_4h = CONCAT31(Stack_7,var_5eeh);
    iVar1 = fcn.0000578f();
    (**(iVar1 + 0x50))(0x17b,_var_4h);
    return;
}


/* fcn.00002242 @ 0x2242 */

int __cdecl fcn.00002242(int32_t arg_8h)

{
    int iVar1;
    int in_ECX;
    uint16_t in_DX;
    int iVar2;
    uint8_t uVar4;
    uint32_t uVar3;
    int iVar5;
    int8_t arg_8h_00;
    
    iVar2 = 0;
    if (in_ECX == 0) {
        iVar2 = -0x7ffffffe;
    }
    else {
        uVar3 = 0;
        if (in_DX != 0) {
            do {
                iVar5 = (uVar3 >> 8) * 0xe;
                arg_8h_00 = arg_8h;
                iVar2 = fcn.00005015(arg_8h_00);
                if ((-1 < iVar2) && (*(iVar5 + 8 + in_ECX) != '\0')) {
                    iVar1 = *(iVar5 + 4 + in_ECX);
                    if ((iVar1 == 0) || (((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)))) {
                        iVar2 = fcn.0000509e(arg_8h_00);
                    }
                    if (-1 < iVar2) {
                        if (*(iVar5 + 10 + in_ECX) != 0) {
                            fcn.000007e4();
                        }
                        iVar2 = fcn.00005015(arg_8h_00);
                    }
                }
                uVar4 = (uVar3 >> 8) + 1;
                uVar3 = uVar4 << 8;
            } while (uVar4 < in_DX);
        }
    }
    return iVar2;
}


/* fcn.00003009 @ 0x3009 */

uint __fastcall fcn.00003009(uint8_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint *puVar5;
    
    iVar1 = fcn.00005822();
    if ((iVar1 == 0) && ((param_1 & 0x3f) == 0x3f)) {
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0x115,4);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0x20,0x90e0004);
        iVar1 = fcn.0000578f();
        uVar2 = (**(iVar1 + 8))(0x12);
        iVar1 = fcn.0000578f();
        uVar3 = (**(iVar1 + 8))(0x21);
        iVar1 = fcn.0000578f();
        uVar4 = (**(iVar1 + 8))(0x1d);
        puVar5 = fcn.000057ad();
        (**puVar5)(uVar4 & 0xffff | ((uVar2 & 0xffff) << 8 | uVar3 & 0xffff) << 8);
    }
    return 0;
}


/* fcn.00002df2 @ 0x2df2 */

void fcn.00002df2(void)

{
    int16_t iVar1;
    int iVar2;
    int32_t var_8h;
    
    iVar2 = fcn.0000578f();
    iVar1 = (**(iVar2 + 8))(0x1d);
    fcn.000057ef(0xff,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x85,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x86,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0x117,0);
    if (iVar1 == 0x3f) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x158,0x90b000b);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x156,0x90b000a);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x15b,0x9000011);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x160,0x90b0009);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x15c,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x159,1);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0x157,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x15f,2);
    }
    fcn.00005808(0x55);
    fcn.00005808(0x41);
    return;
}


/* fcn.00003082 @ 0x3082 */

void fcn.00003082(void)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    
    iVar3 = fcn.0000578f();
    iVar2 = (**(iVar3 + 8))(0x1d);
    cVar1 = fcn.000053df();
    if (cVar1 == '\0') {
        cVar1 = fcn.000057cb();
    }
    else {
        cVar1 = '\x01';
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x7f,1);
    if (cVar1 == '\0') {
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x44))(0x7a,0x23);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6a,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6b,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x72,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x73,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x74,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x75,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x76,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x77,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x78,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x79,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6c,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6d,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6e,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6f,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x70,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x71,0);
    }
    else if (iVar2 == 0x3f) {
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6a,0xa0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6b,0xa2);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x72,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x73,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x74,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x75,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x76,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x77,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x78,0xa4);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x79,0xa6);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6c,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6d,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6e,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x6f,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x70,0);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x3c))(0x71,0);
    }
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x5f,0xffd1c788);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x60,0x18);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x68,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x44))(0x69,0xffd1c7a0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x50))(100,1);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x50))(99,0);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x66,0x10);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x40))(0x62,0x80);
    iVar3 = fcn.0000578f();
    (**(iVar3 + 0x3c))(0x5d,2);
    return;
}


/* fcn.000032d3 @ 0x32d3 */

void fcn.000032d3(void)

{
    int16_t iVar1;
    int iVar2;
    
    iVar2 = fcn.0000578f();
    iVar1 = (**(iVar2 + 8))(0x1d);
    if (iVar1 == 0x3f) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0xd8,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0xe5,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x109,4);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0xd5,1);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0xd6,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0xd7,0x90b000d);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0xd9,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0xda,0x902000e);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0xdb,0);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0xe2,0x9080010);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0xe4,0x902000b);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x50))(0xe3,1);
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa2,1);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa4,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xa5,0x90b000d);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xa3,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa7,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xa8,0x902000e);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xa6,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xa9,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xab,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xac,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xaa,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xae,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xaf,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xad,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb0,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb2,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xb3,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xb1,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb5,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xb6,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xb4,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb7,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xb9,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xba,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xb8,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0xbc,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0xbd,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(0xbb,0);
    return;
}


/* fcn.00003549 @ 0x3549 */

uint fcn.00003549(void)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint32_t uVar6;
    uint *puVar7;
    uint uVar8;
    uint auStack_98 [37];
    
    uVar6 = 0;
    do {
        auStack_98[uVar6 * 2 + 1] = 1;
        auStack_98[uVar6 * 2] = 0x80;
        uVar6 = uVar6 + 1;
    } while (uVar6 < 0x12);
    puVar7 = fcn.000057da();
    if (puVar7 == NULL) {
        uVar8 = 0x80000002;
    }
    else {
        uVar8 = puVar7[5];
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[6];
        fcn.000057ef(*puVar7,auStack_98[1]);
        fcn.000057ef(uVar1,auStack_98[3]);
        fcn.000057ef(uVar2,auStack_98[5]);
        fcn.000057ef(uVar3,auStack_98[7]);
        fcn.000057ef(uVar4,auStack_98[9]);
        fcn.000057ef(uVar8,auStack_98[0xb]);
        fcn.000057ef(uVar5,auStack_98[0xd]);
        fcn.000057ef(auStack_98[0xe],auStack_98[0xf]);
        fcn.000057ef(auStack_98[0x10],auStack_98[0x11]);
        fcn.000057ef(auStack_98[0x12],auStack_98[0x13]);
        fcn.000057ef(auStack_98[0x14],auStack_98[0x15]);
        fcn.000057ef(auStack_98[0x16],auStack_98[0x17]);
        fcn.000057ef(auStack_98[0x18],auStack_98[0x19]);
        fcn.000057ef(auStack_98[0x1a],auStack_98[0x1b]);
        fcn.000057ef(auStack_98[0x1c],auStack_98[0x1d]);
        fcn.000057ef(auStack_98[0x1e],auStack_98[0x1f]);
        uVar8 = 0;
    }
    return uVar8;
}


/* fcn.00003a5e @ 0x3a5e */

uint fcn.00003a5e(void)

{
    uint16_t uVar1;
    int iVar2;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    if (uVar1 == 0) {
        fcn.00005a07();
        iVar2 = fcn.0000578f();
        uVar1 = (**(iVar2 + 8))(0x1d);
    }
    if (uVar1 - 10 < 3) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x20,0x90e0004);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x115,7);
        return 1;
    }
    return 0;
}


/* fcn.00004b8a @ 0x4b8a */

uint __fastcall fcn.00004b8a(uint param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    
    cVar1 = fcn.000062ba();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        cVar1 = fcn.0000629a();
        if (cVar1 == '\0') {
            uVar2 = 0x80000003;
        }
        else {
            uVar3 = fcn.000062f5();
            *param_2 = uVar3 >> 1 & 1;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00003ab6 @ 0x3ab6 */

void fcn.00003ab6(void)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    char *pcVar5;
    uint uVar6;
    
    iVar2 = fcn.0000578f();
    uVar3 = (**(iVar2 + 8))(0x1d);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x40))(0x7f,0x200);
    cVar1 = fcn.000057cb();
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x6a,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x6b,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x72,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x73,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x74,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x75,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x76,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x77,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x78,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x79,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x6c,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x6d,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x6e,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x6f,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x70,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x71,0);
    if ((cVar1 != '\0') && ((uVar3 & 0xffff) - 10 < 3)) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x6a,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x72,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x74,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x76,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x78,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x6c,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x6e,0xa8);
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x3c))(0x70,0xa8);
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0x5f,0xffd1c7ac);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x40))(0x60,0x18);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0x68,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x44))(0x69,0xffd1c7e4);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(100,1);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x50))(99,0);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x40))(0x66,0x10);
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x40))(0x62,0x80);
    if ((uVar3 & 0xffff) - 10 < 3) {
        iVar2 = fcn.0000578f();
        uVar6 = 0xff;
    }
    else {
        iVar2 = fcn.0000578f();
        uVar6 = 0;
    }
    (**(iVar2 + 0x3c))(0x67,uVar6);
    iVar2 = fcn.000057da();
    if (iVar2 != 0) {
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x44))(0x61,iVar2);
    }
    iVar2 = fcn.000057da();
    if (iVar2 != 0) {
        iVar4 = fcn.0000578f();
        (**(iVar4 + 0x44))(0x65,iVar2);
    }
    pcVar5 = fcn.000057da();
    if ((pcVar5 != NULL) && (*pcVar5 == '\x01')) {
        iVar2 = fcn.0000578f();
        (**(iVar2 + 0x44))(0x7a,pcVar5 + 1);
    }
    iVar2 = fcn.0000578f();
    (**(iVar2 + 0x3c))(0x5d,2);
    return;
}


/* fcn.00003d02 @ 0x3d02 */

void fcn.00003d02(void)

{
    int iVar1;
    uint32_t uVar2;
    uint noname_0;
    uint uStack_cb4;
    uint *puStack_cb0;
    uchar auStack_cac [3244];
    
    iVar1 = fcn.0000578f();
    noname_0 = 0x1d;
    uVar2 = (**(iVar1 + 8))();
    uVar2 = uVar2 & 0xffff;
    fcn.00000497(noname_0,&puStack_cb0);
    uStack_cb4 = 0xca9;
    (**puStack_cb0)(puStack_cb0,0xffd1c568,0xffd1a478,0,&uStack_cb4,auStack_cac);
    if (9 < uVar2) {
        if (uVar2 < 0xc) {
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0x109,4);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xd5,1);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xd6,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x3c))(0xd9,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xe2,0x90b0002);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xe4,0x9070001);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xe3,1);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xe5,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xd0,0x902000e);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xd2,0x9000002);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xd1,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xf0,0x908000c);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xd3,0);
        }
        else if (uVar2 == 0xc) {
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xe2,0x90b0002);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xe4,0x9070001);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xe3,1);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xe5,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xd0,0x902000e);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xd2,0x9000002);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xd1,1);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x50))(0xd3,0);
            iVar1 = fcn.0000578f();
            (**(iVar1 + 0x44))(0xf0,0x908000c);
        }
    }
    if (uVar2 - 10 < 2) {
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xa2,1);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xa4,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xa5,0x9000002);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xa3,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xa7,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xa8,0x902000e);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xa6,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xa9,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xab,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xac,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xaa,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xae,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xaf,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xad,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xb0,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xb2,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xb3,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xb1,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xb5,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xb6,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xb4,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xb7,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xb9,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xba,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xb8,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x3c))(0xbc,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x44))(0xbd,0);
        iVar1 = fcn.0000578f();
        (**(iVar1 + 0x50))(0xbb,0);
    }
    return;
}


/* fcn.0000408b @ 0x408b */

void fcn.0000408b(void)

{
    uint16_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint uVar4;
    
    iVar3 = fcn.0000578f();
    uVar1 = (**(iVar3 + 8))(0x1d);
    iVar3 = fcn.0000578f();
    iVar2 = (**(iVar3 + 8))(0x35);
    if (9 < uVar1) {
        if (uVar1 < 0xc) {
            if (iVar2 == 4) {
                iVar3 = fcn.0000578f();
                uVar4 = 0xffd1c7c4;
            }
            else {
                iVar3 = fcn.0000578f();
                uVar4 = 0xffd1c7f0;
            }
        }
        else {
            if (uVar1 != 0xc) {
                return;
            }
            iVar3 = fcn.0000578f();
            uVar4 = 0xffd1c7d4;
        }
        (**(iVar3 + 0x44))(0x10b,uVar4);
        iVar3 = fcn.0000578f();
        (**(iVar3 + 0x40))(0x10c,0x10);
    }
    return;
}


/* fcn.000037fa @ 0x37fa */

void __fastcall fcn.000037fa(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    bool bVar3;
    uint32_t var_4h;
    
    iVar2 = fcn.0000578f();
    uVar1 = (**(iVar2 + 8))(0x1d);
    if (9 < uVar1) {
        if (uVar1 < 0xc) {
            fcn.00004b8a();
            if (param_1 == 0) {
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x44))(0x158,0x90c000f);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x44))(0x156,0x90c000e);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x44))(0x15b,0x90b0005);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x44))(0x160,0x9080012);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x50))(0x15c,0);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x50))(0x159,1);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x50))(0x157,0);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x3c))(0x15f,5);
                iVar2 = fcn.0000578f();
                (**(iVar2 + 0x3c))(0x15e,3);
                return;
            }
            fcn.00004b8a();
            bVar3 = param_1 == 0;
        }
        else {
            bVar3 = uVar1 == 0xc;
        }
        if (bVar3) {
            iVar2 = fcn.0000578f();
            (**(iVar2 + 0x50))(0x56,1);
        }
    }
    return;
}


/* fcn.000061f1 @ 0x61f1 */

uint __fastcall fcn.000061f1(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.000053b1();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0xffd1bae8;
    }
    *param_1 = 0x13;
    return 0xffd1b8a8;
}


/* fcn.000053b1 @ 0x53b1 */

uint __fastcall fcn.000053b1(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00005354(param_1);
    if (cVar1 != '\x02') {
        cVar1 = fcn.00005354(param_1);
        if (cVar1 != '\x05') {
            cVar1 = fcn.00005354(param_1);
            if (cVar1 != '\x06') {
                cVar1 = fcn.00005354(param_1);
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00005354 @ 0x5354 */

char fcn.00005354(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd1b6bd == -1) {
        uVar1 = fcn.00005343();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd1b6bd = cVar2;
    }
    return *0xffd1b6bd;
}


/* fcn.00004d52 @ 0x4d52 */

uint __fastcall fcn.00004d52(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00004686();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000048c7(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.00004daf @ 0x4daf */

uint __fastcall fcn.00004daf(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00004686();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000048c7(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.000041f0 @ 0x41f0 */

uint __fastcall fcn.000041f0(uint param_1,int param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t auStack_c [3];
    
    auStack_c[2] = fcn.000061f1();
    puVar1 = param_3 * 0xc + param_2;
    uVar3 = *(puVar1 + 2) & 0x1f;
    fcn.000000e0(auStack_c,4);
    while( true ) {
        if ((auStack_c[1] <= param_3) || (uVar3 != (*(puVar1 + 2) & 0x1f))) {
            uVar2 = 0;
            do {
                if (auStack_c[uVar2] != 0) {
                    fcn.00004d52(auStack_c[uVar2]);
                    fcn.00004daf(auStack_c[uVar2]);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 <= *(uVar3 * 0x1e + 0x1c + auStack_c[2]) - 1 >> 5);
            return 0;
        }
        uVar2 = *puVar1 & 0x1ff;
        if (*(uVar3 * 0x1e + 0x1c + auStack_c[2]) <= uVar2) {
            return 0x80000002;
        }
        if (uVar2 >> 5 != 0) break;
        param_3 = param_3 + 1;
        auStack_c[0] = auStack_c[0] | 1 << (*puVar1 & 0x1f);
        puVar1 = puVar1 + 3;
    }
    return 0x80000003;
}


/* fcn.00006452 @ 0x6452 */

int __cdecl fcn.00006452(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint32_t *in_EDX;
    int32_t var_4h;
    
    iVar1 = fcn.0000657f(&var_4h);
    if (-1 < iVar1) {
        *arg_ch = *arg_ch | -((*in_EDX & 0x3f000000) != 0) & 0xc0000000;
        *arg_8h = *arg_8h | var_4h << 0x1e;
        *arg_ch = *arg_ch | -((*in_EDX & 0x700000) != 0) & 0x6000000;
        *arg_8h = *arg_8h | (*in_EDX & 0x600000) << 4;
        *arg_ch = *arg_ch | -((*in_EDX & 0xf8000) != 0) & 0x1e0000;
        *arg_8h = *arg_8h | (*in_EDX & 0xf0000) * 2;
        *arg_ch = *arg_ch | -((*in_EDX & 0x380) != 0) & 0x300;
        *arg_8h = *arg_8h | *in_EDX & 0x300;
        *arg_ch = *arg_ch | -((*in_EDX & 0xc00) != 0) & 0x800000;
        *arg_8h = *arg_8h | (*in_EDX & 0x800) << 0xc;
        *arg_ch = *arg_ch | (*in_EDX & 0x6000) != 0;
        *arg_8h = *arg_8h | *in_EDX >> 0xe & 1;
        *arg_ch = *arg_ch | -((in_EDX[1] & 0x6000) != 0) & 0x10000000;
        *arg_8h = *arg_8h | (in_EDX[1] & 0x4000) << 0xe;
        *arg_ch = *arg_ch | -((*in_EDX & 0xf) != 0) & 0x1c00;
        *arg_8h = *arg_8h | (*in_EDX & 0xe) << 9;
        *(arg_ch + 4) = *(arg_ch + 4) | -((in_EDX[1] & 0x1f) != 0) & 0x3c00;
        *(arg_8h + 4) = *(arg_8h + 4) | (in_EDX[1] & 0x1e) << 9;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0000657f @ 0x657f */

uint __cdecl fcn.0000657f(int32_t arg_8h)

{
    char cVar1;
    int in_EDX;
    
    if (in_EDX != 0) {
        if (in_EDX == 1) {
            cVar1 = fcn.00006217();
            *arg_8h = -(cVar1 != '\0') & 3;
            return 0;
        }
        if (in_EDX == 3) {
            *arg_8h = 1;
            return 0;
        }
        if (in_EDX == 5) {
            *arg_8h = 2;
            return 0;
        }
        if (in_EDX != 7) {
            if (in_EDX == 9) {
                *arg_8h = 3;
                return 0;
            }
            return 0x80000002;
        }
        cVar1 = fcn.00006217();
        if (cVar1 == '\0') {
            return 0x80000002;
        }
    }
    *arg_8h = 0;
    return 0;
}


/* fcn.00006171 @ 0x6171 */

int __fastcall fcn.00006171(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.000061f1();
    return *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (param_2 + (param_1 & 0x1ff) * 4) * 4;
}


/* fcn.000061c5 @ 0x61c5 */

uint __fastcall fcn.000061c5(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.000040fc @ 0x40fc */

void __fastcall fcn.000040fc(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    int8_t iVar1;
    uint32_t uVar2;
    
    uVar2 = param_1 & 0x1f;
    if (param_1 >> 5 == 0) {
        iVar1 = uVar2;
        param_3[1] = param_3[1] | (*param_2 >> 5 & 1) << iVar1;
        *param_3 = *param_3 | (*param_2 >> 6 & 1) << iVar1;
        param_3[3] = param_3[3] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[2] = param_3[2] | (*param_2 >> 0x12 & 1) << iVar1;
        param_3[5] = param_3[5] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[4] = param_3[4] | (*(param_2 + 2) & 1) << iVar1;
        param_3[7] = param_3[7] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[6] = param_3[6] | (*param_2 >> 0x11 & 1) << iVar1;
        if ((*param_2 & 0x28000) == 0x28000) {
            param_3[1] = param_3[1] | 1 << uVar2;
            *param_3 = *param_3 | 1 << uVar2;
        }
        param_3[8] = param_3[8] | (param_2[1] >> 10 & 1) << iVar1;
        param_3[9] = param_3[9] | (param_2[1] >> 0xc & 1) << iVar1;
        if ((((*param_2 & 0x1f) == 1) && ((*param_2 & 0x1f80) == 0x280)) && ((param_2[1] & 0x1800) == 0)) {
            param_3[9] = param_3[9] | 1 << uVar2;
        }
    }
    return;
}


/* fcn.000060ad @ 0x60ad */

uint16_t __fastcall fcn.000060ad(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.00000643();
    if (iVar1 == 0) {
        iVar1 = fcn.00006060();
        *param_1 = iVar1;
        if (iVar1 == 0) {
            return 0;
        }
        iVar1 = fcn.00000643();
    }
    else {
        *param_1 = iVar1 + 0x18;
    }
    return *(iVar1 + 2) - 0x18U >> 3;
}


/* fcn.0000602f @ 0x602f */

int __fastcall fcn.0000602f(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    if (param_1 != 0) {
        do {
            fcn.00004f73();
            uVar1 = fcn.00004f2e();
            iVar2 = iVar2 + 1 + (uVar1 >> 5);
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_1);
    }
    return iVar2 + param_2;
}


/* fcn.00004f73 @ 0x4f73 */

uint32_t __fastcall fcn.00004f73(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.000053b1();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.00004f58 @ 0x4f58 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00004f58(uint param_1)

{
    int32_t var_4h;
    
    fcn.000061f1(param_1);
    fcn.00004f73();
    return;
}


/* fcn.000042c9 @ 0x42c9 */

uint __fastcall fcn.000042c9(uint32_t param_1,int param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uStack_64;
    int iStack_50;
    int iStack_4c;
    uint auStack_48 [4];
    uint32_t auStack_38 [4];
    uchar auStack_28 [4];
    uint32_t auStack_24 [9];
    
    iVar2 = fcn.000061f1();
    uStack_64 = 0;
    if (param_1 != 0) {
        do {
            iVar6 = param_2 + uStack_64 * 0xc;
            uVar8 = *(iVar6 + 2) & 0x1f;
            fcn.000041f0(uStack_64);
            fcn.000000e0(auStack_28,0x28);
            while ((uStack_64 < param_1 && (uVar8 == (*(iVar6 + 2) & 0x1f)))) {
                fcn.000000e0(auStack_48,0x10);
                fcn.000000e0(auStack_38,0x10);
                fcn.00006452(auStack_48,auStack_38);
                uVar9 = 0;
                do {
                    iVar3 = fcn.00006171();
                    if (iVar3 != 0) {
                        fcn.000061c5(~auStack_38[uVar9],auStack_48[uVar9]);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < 3);
                fcn.000040fc(auStack_28);
                iVar6 = iVar6 + 0xc;
                uStack_64 = uStack_64 + 1;
            }
            puVar7 = auStack_24;
            uVar9 = 0;
            iVar6 = uVar8 * 0x1e + iVar2;
            do {
                if (*(iVar6 + 4) != -1) {
                    fcn.000061c5(~*puVar7,puVar7[-1]);
                }
                if (*(iVar6 + 0xc) != -1) {
                    fcn.000061c5(~puVar7[2],puVar7[1]);
                }
                if (*(iVar6 + 0x14) != -1) {
                    fcn.000061c5(~puVar7[4],puVar7[3]);
                }
                if (*(iVar6 + 0x10) != -1) {
                    fcn.000061c5(~puVar7[6],puVar7[5]);
                }
                uVar8 = puVar7[7];
                if (((uVar8 != 0) && (uVar4 = fcn.000060ad(), uVar4 != 0)) && (uVar5 = fcn.0000602f(), uVar5 < uVar4))
                {
                    puVar1 = iStack_50 + uVar5 * 8;
                    *puVar1 = *puVar1 | uVar8;
                }
                uVar8 = puVar7[8];
                if (((uVar8 != 0) && (uVar4 = fcn.000060ad(), uVar4 != 0)) && (uVar5 = fcn.0000602f(), uVar5 < uVar4))
                {
                    puVar1 = iStack_4c + 4 + uVar5 * 8;
                    *puVar1 = *puVar1 | uVar8;
                }
                uVar9 = uVar9 + 1;
                puVar7 = puVar7 + 10;
            } while (uVar9 <= *(iVar6 + 0x1c) >> 5);
        } while (uStack_64 < param_1);
    }
    return 0;
}


/* fcn.0000450f @ 0x450f */

uint fcn.0000450f(void)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    
    iVar1 = fcn.000061f1();
    uVar2 = fcn.00004f73();
    uVar3 = fcn.00004f58();
    for (; uVar2 <= uVar3; uVar2 = uVar2 + 1) {
        iVar5 = (uVar2 & 0x1f) * 0x1e + iVar1;
        if (*(iVar5 + 6) != -1) {
            uVar4 = 0;
            do {
                fcn.000061c5(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
        if (*(iVar5 + 10) != -1) {
            uVar4 = 0;
            do {
                fcn.000061c5(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
        if (*(iVar5 + 0xe) != -1) {
            uVar4 = 0;
            do {
                fcn.000061c5(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
        if (*(iVar5 + 0x12) != -1) {
            uVar4 = 0;
            do {
                fcn.000061c5(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
    }
    return 0;
}


/* fcn.000061a5 @ 0x61a5 */

uint __fastcall fcn.000061a5(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00004c3e @ 0x4c3e */

uint __fastcall fcn.00004c3e(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00004686();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000046d5(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00004d82 @ 0x4d82 */

uint __fastcall fcn.00004d82(uint param_1,int32_t param_2,int32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00004686();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000048c7(param_2,-1,param_3);
    }
    return uVar2;
}


/* fcn.00004cc8 @ 0x4cc8 */

uint __fastcall fcn.00004cc8(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00004686();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000046d5(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000066fb @ 0x66fb */

void __thiscall fcn.000066fb(uint param_1,int16_t param_2,int32_t param_3)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.0000697c(0xf9000,0,param_2,param_3,0,param_1,param_1,0,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.0000697c @ 0x697c */

int __cdecl
fcn.0000697c(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int8_t arg_18h,uint noname_5,
            uint noname_6,int8_t arg_24h,int32_t arg_28h,int32_t arg_2ch)

{
    uint8_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int in_EDX;
    int arg_ch_00;
    int arg_8h_00;
    int arg_ch_01;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if ((in_EDX < 0) || ((1 < in_EDX && ((in_EDX < 4 || ((7 < in_EDX && (in_EDX != 0x13)))))))) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00005201(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.00005201(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.00005306(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.00005306(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.000052a2(arg_8h_00,arg_ch_00);
                fcn.0000523c(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.00005306(arg_8h + 0xd4,arg_ch_01);
                fcn.0000527c(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.00005201(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.000052cf(arg_8h + 0xd4,arg_ch_01);
                            *arg_28h = uVar5;
                        }
                        return 0;
                    }
                    return ((uVar1 != 2) - 1 & 9) + 0x80000007;
                }
            }
            iVar3 = -0x7fffffee;
        }
    }
    return iVar3;
}


/* fcn.000062ba @ 0x62ba */

uint32_t __fastcall fcn.000062ba(uint32_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = fcn.00006259();
    if (uVar2 != '\0') {
        iVar3 = fcn.000061f1();
        uVar1 = *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar3);
        uVar2 = uVar1;
        if ((param_1 & 0x1ff) < uVar2) {
            return CONCAT31(uVar1 >> 8,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.0000629a @ 0x629a */

bool __fastcall fcn.0000629a(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.00004bc7(param_1);
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.00006325 @ 0x6325 */

//WARNING: Removing unreachable block (ram,0x000063ff)
//WARNING: Removing unreachable block (ram,0x00006366)
//WARNING: Removing unreachable block (ram,0x0000639f)
//WARNING: Removing unreachable block (ram,0x00006429)

void fcn.00006325(uint32_t param_1,uint32_t param_2)

{
    if (((~param_1 | param_2) & 0xfffffffe) != 0) {
        fcn.00004c68();
    }
    if (((~param_1 | param_2) & 1) != 0) {
        fcn.00004cf2();
    }
    fcn.000061f1();
    fcn.00006171();
    fcn.000061c5(param_1,param_2);
    return;
}


/* fcn.000047ad @ 0x47ad */

uint __fastcall fcn.000047ad(int param_1,uint32_t param_2,uint param_3,uint32_t param_4,uint32_t param_5)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int16_t iVar5;
    uint32_t auStack_8 [2];
    
    bVar2 = false;
    uVar4 = 0;
    param_2 = param_2 & 0x1f;
    auStack_8[0] = 0;
    iVar3 = fcn.000061f1();
    if (param_1 == 0) {
        iVar5 = *(param_2 * 0x1e + iVar3 + 4);
code_r0x0000483e:
        bVar1 = false;
    }
    else {
        if (param_1 == 1) {
            iVar5 = *(param_2 * 0x1e + iVar3 + 0xc);
        }
        else {
            if (param_1 == 2) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 10);
                goto code_r0x0000483e;
            }
            if (param_1 == 3) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x10);
            }
            else {
                if (param_1 == 4) {
                    iVar5 = *(param_2 * 0x1e + iVar3 + 0xe);
                    goto code_r0x0000483e;
                }
                if (param_1 != 5) {
                    return 0x80000003;
                }
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x14);
            }
        }
        bVar1 = true;
        bVar2 = true;
    }
    if (iVar5 == -1) {
        return 0x80000003;
    }
    if ((bVar1) && (fcn.00004c3e(auStack_8), uVar4 = auStack_8[0], auStack_8[0] != 0)) {
        if ((auStack_8[0] & (~param_4 | param_5)) == 0) {
            uVar4 = 0;
        }
        else {
            fcn.00004d52(auStack_8[0]);
        }
    }
    fcn.000061c5(param_4,param_5);
    if ((bVar2) && (uVar4 != 0)) {
        fcn.00004d82(uVar4);
    }
    return 0;
}


/* fcn.000060ef @ 0x60ef */

uint __fastcall fcn.000060ef(uint32_t param_1,int param_2)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    if (param_2 == 0) {
        uVar1 = 0;
    }
    else {
        uVar2 = fcn.000060ad();
        if (uVar2 == 0) {
            uVar1 = 0x8000000e;
        }
        else {
            uVar3 = fcn.0000602f();
            if (uVar3 < uVar2) {
                if ((param_2 & 3) == 3) {
                    *(param_1 + uVar3 * 8) = *(param_1 + uVar3 * 8) | 1 << (param_1 & 0x1f);
                }
                if ((param_2 & 0xc) == 0xc) {
                    *(param_1 + 4 + uVar3 * 8) = *(param_1 + 4 + uVar3 * 8) | 1 << (param_1 & 0x1f);
                }
                uVar1 = 0;
            }
            else {
                uVar1 = 0x80000002;
            }
        }
    }
    return uVar1;
}


/* fcn.000062f5 @ 0x62f5 */

uint __fastcall fcn.000062f5(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.000061f1();
    uVar2 = fcn.00006171();
    return *(((*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar1) | 0xfffffd00) << 8 | uVar2 & 0xffff0000) << 8 | uVar2 & 0xffff
            );
}


/* fcn.00004686 @ 0x4686 */

uint32_t __fastcall fcn.00004686(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.000061f1();
    uVar2 = fcn.00004f73();
    if (((uVar2 <= param_1) && (uVar2 = fcn.00004f58(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.000046d5 @ 0x46d5 */

//WARNING: Control flow encountered bad instruction data

ulong __fastcall fcn.000046d5(uint param_1)

{
    uint uVar1;
    int32_t var_4h;
    
    uVar1 = fcn.000061f1();
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return CONCAT44(uVar1,0x80000003);
    }
}


/* fcn.000048c7 @ 0x48c7 */

uint __cdecl fcn.000048c7(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    int in_ECX;
    uint32_t in_EDX;
    uint32_t uStack_14;
    uint32_t uStack_10;
    
    uStack_14 = 0;
    iVar2 = fcn.000061f1();
    if (in_ECX == 6) {
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.00004c3e(&uStack_14);
    }
    else {
        if (in_ECX != 7) {
            return 0x80000003;
        }
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.00004cc8(&uStack_14);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    uStack_10 = uStack_14 & arg_ch | arg_10h;
    uVar3 = fcn.000066fb(uVar1 + arg_8h * 8,0);
    return uVar3;
}


/* fcn.0000622d @ 0x622d */

void __fastcall fcn.0000622d(uint *param_1,uint *param_2)

{
    char cVar1;
    
    cVar1 = fcn.000053b1();
    if (cVar1 == '\0') {
        *param_1 = 0xffd1b828;
        *param_2 = 0xf;
    }
    else {
        *param_1 = 0xffd1b7b8;
        *param_2 = 0xd;
    }
    return;
}


/* fcn.00005123 @ 0x5123 */

int __thiscall fcn.00005123(uint32_t *param_1,uint8_t param_2,uint8_t param_3,uint32_t *param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    int iVar2;
    
    param_1[0x20] = *param_4;
    param_1[0x21] = param_4[1];
    param_1[0x22] = param_4[2];
    param_1[0x23] = param_4[3];
    iVar2 = 0;
    *param_1 = (param_3 << 4 | param_2) << 0xc | 0xc0;
    uVar1 = 0;
    do {
        if ((param_1[1] & 1) == 0) {
code_r0x0000518c:
            if ((param_1[1] & 2) != 0) {
                iVar2 = -0x7ffffff9;
            }
            if ((-1 < iVar2) && (param_5 != NULL)) {
                *param_5 = param_1[0x24];
                param_5[1] = param_1[0x25];
                param_5[2] = param_1[0x26];
                param_5[3] = param_1[0x27];
            }
            return iVar2;
        }
        if (100000 < uVar1) {
            iVar2 = -0x7fffffee;
            goto code_r0x0000518c;
        }
        fcn.000007e4();
        uVar1 = uVar1 + 1;
    } while( true );
}


/* fcn.00005201 @ 0x5201 */

ushort __cdecl fcn.00005201(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000523c @ 0x523c */

uint __cdecl fcn.0000523c(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.00005343 @ 0x5343 */

void fcn.00005343(void)

{
    fcn.00005201(0xf8002,0);
    return;
}


/* fcn.00000560 @ 0x560 */

void __cdecl fcn.00000560(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x68))(0xffd1a408);
    return;
}


/* fcn.00005457 @ 0x5457 */

int32_t fcn.00005457(void)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_ch = 0;
    var_10h = &var_1ch;
    var_4h = 0;
    iVar3 = 0;
    do {
        uVar1 = InterruptDescriptorTableRegister();
        *var_10h = uVar1;
        iVar2 = (**(**(stack0xffffffe2 + -4) + 0x38))(*(stack0xffffffe2 + -4),iVar3,&var_4h);
        if (iVar2 < 0) {
            return 0;
        }
        var_8h = 0;
        iVar2 = fcn.00000560(&var_8h);
        if (-1 < iVar2) {
            var_14h = &var_24h;
            InterruptDescriptorTableRegister();
            iVar2 = (**(**(stack0xffffffda + -4) + 0x40))(*(stack0xffffffda + -4),0x19,var_8h,&var_ch);
            if (-1 < iVar2) {
                return var_ch;
            }
        }
        iVar3 = iVar3 + 1;
    } while( true );
}


/* fcn.00005703 @ 0x5703 */

int fcn.00005703(void)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int32_t var_4h;
    
    iVar2 = fcn.0000578f();
    cVar1 = (**(iVar2 + 4))(0x23);
    if (cVar1 != '\x06') {
        iVar2 = fcn.0000578f();
        cVar1 = (**(iVar2 + 4))(0x23);
        if (cVar1 != '\x04') {
            iVar2 = fcn.0000578f();
            cVar1 = (**(iVar2 + 4))(0xf7);
            if (cVar1 != '\x04') {
                iVar2 = fcn.0000578f();
                iVar3 = (**(iVar2 + 0x10))(0x104);
                if ((iVar3 != 0) && (iVar3 == '\0')) {
                    iVar2 = fcn.00004b8a();
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    return 0;
                }
                return -0x7ffffff2;
            }
        }
    }
    return -0x7ffffffd;
}


/* fcn.00004faa @ 0x4faa */

char fcn.00004faa(void)

{
    char cVar1;
    int16_t iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    
    if ((*0xfe001020 & 0x1004200) != 0) {
        return '\0';
    }
    iVar2 = in(0x1800);
    if (iVar2 < 0) {
        uVar3 = in(0x1804);
        uVar4 = uVar3 & 0x1c00;
        if ((uVar3 & 0x1c00) == 0) {
            return '\x01';
        }
        if (uVar4 == 0x400) {
            cVar1 = '\x02';
        }
        else if (uVar4 == 0x1400) {
            cVar1 = '\x04';
        }
        else {
            if (uVar4 != 0x1800) {
                return (uVar4 != 0x1c00) + '\x06';
            }
            cVar1 = '\x05';
        }
        return cVar1;
    }
    return '\0';
}


/* fcn.000056c6 @ 0x56c6 */

uint __fastcall fcn.000056c6(int *param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar1 = 0;
    uVar2 = 0;
    do {
        uVar3 = uVar2;
        if (*(uVar2 * 4 + -0x2e37f8) == *param_1) break;
        uVar2 = uVar2 + 1;
        uVar3 = uVar2;
    } while (uVar2 < 0xb);
    while( true ) {
        if (10 < uVar2) {
            return 0x8000000e;
        }
        if (*(uVar1 * 4 + -0x2e37f8) == param_2) break;
        uVar1 = uVar1 + 1;
        uVar2 = uVar1;
    }
    if (uVar1 < uVar3) {
        *param_1 = param_2;
    }
    return 0;
}


/* fcn.00005d7e @ 0x5d7e */

uint __fastcall fcn.00005d7e(uint param_1)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    int32_t var_cb8h;
    int32_t var_ch;
    uchar var_5h;
    uint32_t var_4h;
    
    iVar1 = fcn.00000497(param_1,&var_ch);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar3 = 0;
        do {
            var_4h = *(uVar3 - 0x2e48e0);
            iVar1 = (**var_ch)(var_ch,*(uVar3 - 0x2e48e4),*(uVar3 - 0x2e48e8),0,&var_4h,&var_cb8h);
            if (((iVar1 == -0x7ffffff2) || (var_4h != *(uVar3 - 0x2e48e0))) || (iVar1 < 0)) goto code_r0x00005e26;
            uVar3 = uVar3 + 0xc;
        } while (uVar3 < 0x54);
        var_4h = 1;
        iVar1 = (**var_ch)(var_ch,0xffd1c864,0xffd1a478,0,&var_4h,&var_5h);
        if ((iVar1 == -0x7ffffff2) || (var_4h != 1)) {
code_r0x00005e26:
            uVar2 = 0;
        }
        else {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.00005629 @ 0x5629 */

bool fcn.00005629(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = fcn.00000643();
    if (var_4h == 0) {
        var_8h = &var_10h;
        InterruptDescriptorTableRegister();
        iVar3 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,0x1c,&var_4h);
        if (iVar3 < 0) {
            return false;
        }
        fcn.000000e0(var_4h + 0x18,4);
        *(var_4h + 8) = *0xffd1a538;
        *(var_4h + 0xc) = *0xffd1a53c;
        *(var_4h + 0x10) = *0xffd1a540;
        *(var_4h + 0x14) = *0xffd1a544;
        *(var_4h + 0x18) = 1;
    }
    uVar2 = in(0x406);
    if ((uVar2 & 1) != 0) {
        *(var_4h + 0x19) = 1;
        out(0x406,uVar2 | 1);
        return false;
    }
    *(var_4h + 0x19) = 0;
    cVar1 = fcn.000066b2();
    return cVar1 != '\0';
}


/* fcn.000053f9 @ 0x53f9 */

uchar __fastcall fcn.000053f9(uint param_1)

{
    int iVar1;
    uchar uVar2;
    int32_t var_cb4h;
    uint32_t var_cb0h;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = 0;
    iVar1 = fcn.00000497(param_1,&var_8h);
    if (iVar1 == 0) {
        var_4h = 0xca9;
        iVar1 = (**var_8h)(var_8h,0xffd1c568,0xffd1a478,0,&var_4h,&var_cb4h);
        if ((iVar1 == 0) && (var_cb0h != '\0')) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.000065f7 @ 0x65f7 */

uint __fastcall fcn.000065f7(int *param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t noname_0;
    uint32_t extraout_ECX;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    var_8h = 0;
    (**(*param_1 + 0x28))(param_1,&var_4h);
    uVar1 = var_4h;
    uVar2 = in(0x70);
    noname_0 = *0xfdc431fc & 0xfffdffff;
    out(0x70,uVar2 & 0x80 | 0xe);
    uVar2 = in(0x71);
    *0xfdc431fc = noname_0;
    if ((uVar2 & 0xc0) != 0) {
        fcn.000056c6();
        noname_0 = extraout_ECX;
    }
    iVar3 = fcn.00000497(noname_0,&var_8h);
    if (((-1 < iVar3) && (iVar3 = (**var_8h)(param_1,&var_ch), -1 < iVar3)) && ((var_ch == 1 || (var_ch == 2)))) {
        fcn.000056c6();
    }
    if (uVar1 != var_4h) {
        (**(*param_1 + 0x2c))(param_1,var_4h);
    }
    return 0;
}


/* fcn.00000610 @ 0x610 */

int fcn.00000610(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.000005ef();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000766();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000643 @ 0x643 */

int fcn.00000643(void)

{
    char cVar1;
    int iVar2;
    
    fcn.000005c4();
    do {
        iVar2 = fcn.000005ef();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000766();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000066b2 @ 0x66b2 */

//WARNING: Variable defined which should be unmapped: var_1h

uint32_t __fastcall fcn.000066b2(uint param_1)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_1h;
    
    fcn.00000497(param_1,&var_ch);
    var_8h = 1;
    uVar1 = (**var_ch)(var_ch,0xffd1c888,0xffd1a4e8,0,&var_8h,&var_1h);
    if (uVar1 == 0) {
        uVar1 = 1;
    }
    else {
        uVar1 = uVar1 & 0xffffff00;
    }
    return uVar1;
}


/* fcn.0000687d @ 0x687d */

uint __fastcall fcn.0000687d(int param_1,int param_2,uint *param_3,uint32_t *param_4,int param_5)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint uVar6;
    
    if (((param_1 == 0) || (param_2 == 0)) || (param_4 == NULL)) {
code_r0x000068fe:
        uVar6 = 0x80000002;
    }
    else {
        iVar3 = fcn.000067dc();
        if (iVar3 == 0) {
            return 0x8000000e;
        }
        uVar4 = fcn.000067c2();
        if (*param_4 < uVar4) {
            uVar6 = 0x80000005;
        }
        else {
            if (param_5 == 0) goto code_r0x000068fe;
            uVar6 = 0;
            iVar5 = 0;
            cVar1 = *(iVar3 + 0x1a);
            while (cVar1 != '\0') {
                iVar5 = iVar5 + 1;
                cVar1 = *(iVar3 + 0x1a + iVar5);
            }
            fcn.00000730(uVar4);
            if ((param_3 != NULL) && (uVar2 = *(iVar3 + 6), *param_3 = 3, (uVar2 & 0x1000000) != 0)) {
                *param_3 = 7;
            }
        }
        *param_4 = uVar4;
    }
    return uVar6;
}


/* fcn.00006908 @ 0x6908 */

uint __fastcall fcn.00006908(int16_t *param_1,int param_2,uint32_t *param_3,int param_4,int param_5)

{
    char cVar1;
    int iVar2;
    int extraout_ECX;
    int iVar3;
    
    if (((param_1 != NULL) && (iVar3 = 0, *param_1 != 0)) && (param_2 != 0)) {
        iVar2 = fcn.000067dc();
        if (iVar2 == 0) {
            return 0x8000000e;
        }
        iVar2 = fcn.000067c2();
        if ((param_4 == iVar2) && (param_5 != 0)) {
            if (param_3 != NULL) {
                if (*param_3 == 0) {
                    return 0x80000002;
                }
                if ((*param_3 & 4) != 0) {
                    *(extraout_ECX + 9) = *(extraout_ECX + 9) | 1;
                }
            }
            cVar1 = *(extraout_ECX + 0x1a);
            while (cVar1 != '\0') {
                iVar3 = iVar3 + 1;
                cVar1 = *(extraout_ECX + 0x1a + iVar3);
            }
            fcn.00000730(iVar2);
            return 0;
        }
    }
    return 0x80000002;
}


/* fcn.00000672 @ 0x672 */

void fcn.00000672(uint param_1,uint param_2,uint param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = fcn.00000655();
    if (iVar1 != 0) {
        *(iVar1 + 0x28) = param_3;
        *(iVar1 + 0x2c) = param_4;
        *(iVar1 + 0x20) = param_1;
        *(iVar1 + 0x18) = 1;
        *(iVar1 + 0x1c) = 0x403;
        *(iVar1 + 0x24) = param_2;
        fcn.000000e0(iVar1 + 8,0x10);
    }
    return;
}


/* fcn.000006e0 @ 0x6e0 */

void fcn.000006e0(uint param_1,uint param_2,uint param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = fcn.00000655();
    if (iVar1 != 0) {
        fcn.000000e0(iVar1 + 8,0x10);
        *(iVar1 + 0x1c) = param_2;
        *(iVar1 + 0x20) = param_3;
        *(iVar1 + 0x24) = param_4;
        *(iVar1 + 0x18) = param_1;
        *(iVar1 + 0x28) = 0xb;
        fcn.000000e0(iVar1 + 0x2c,4);
    }
    return;
}


/* fcn.00004f2e @ 0x4f2e */

ushort __fastcall fcn.00004f2e(uint32_t param_1)

{
    ushort uVar1;
    int iVar2;
    uint32_t var_4h;
    
    iVar2 = fcn.000061f1();
    if ((param_1 & 0x1f) < param_1) {
        uVar1 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0000078a @ 0x78a */

uint __fastcall fcn.0000078a(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.00006060 @ 0x6060 */

int fcn.00006060(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.00004f73();
    uVar2 = fcn.00004f58();
    for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
        fcn.00004f2e();
    }
    iVar3 = fcn.000006bb();
    if (iVar3 != 0) {
        fcn.0000078a();
    }
    return iVar3;
}


/* fcn.00004bc7 @ 0x4bc7 */

uint __fastcall fcn.00004bc7(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int8_t iVar5;
    
    cVar1 = fcn.000062ba();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.000061f1();
        if (*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.000061a5();
            iVar5 = (param_1 & 7) << 2;
            *param_2 = (uVar4 & 3 << iVar5) >> iVar5;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00006259 @ 0x6259 */

uint __fastcall fcn.00006259(uint32_t param_1)

{
    char cVar1;
    uint32_t var_4h;
    
    cVar1 = fcn.000053b1();
    if (((param_1 >> 0x18 & 0xf) == (cVar1 != '\0') + 8) && (fcn.000061f1(), (param_1 >> 0x10 & 0x1f) < param_1)) {
        return 1;
    }
    return 0;
}


/* fcn.00004c68 @ 0x4c68 */

int __fastcall fcn.00004c68(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.000062ba();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.000046d5((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.00004cf2 @ 0x4cf2 */

int __fastcall fcn.00004cf2(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.000062ba();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.000046d5((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.00004ddf @ 0x4ddf */

uint __fastcall fcn.00004ddf(uint param_1,int32_t param_2,int32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00004686();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000048c7(param_2,-1,param_3);
    }
    return uVar2;
}


/* fcn.00006217 @ 0x6217 */

uchar __fastcall fcn.00006217(int param_1)

{
    if ((param_1 != 0x905) && (param_1 != 0x809)) {
        return 0;
    }
    return 1;
}


/* fcn.00006745 @ 0x6745 */

uint32_t __fastcall fcn.00006745(int16_t *param_1)

{
    uint32_t uVar1;
    
    if ((param_1 != NULL) && (uVar1 = 0, *param_1 != 0)) {
        do {
            if (0x1e < uVar1) {
                return 0x20;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00006722 @ 0x6722 */

uint32_t __thiscall fcn.00006722(uint32_t param_1,uint32_t param_2,int param_3)

{
    uint32_t uVar1;
    
    if (param_2 <= param_1) {
        uVar1 = param_3 + param_2;
        if (param_1 < uVar1) goto code_r0x0000673f;
        if (param_2 < param_1) goto code_r0x00006742;
    }
    uVar1 = param_1 + 0x20;
    if (uVar1 <= param_2) {
code_r0x00006742:
        return uVar1 & 0xffffff00;
    }
code_r0x0000673f:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.00006766 @ 0x6766 */

uint __fastcall fcn.00006766(int16_t *param_1,uchar *param_2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    
    if ((param_2 == NULL) || (param_1 == NULL)) {
        uVar2 = 0x80000002;
    }
    else {
        uVar3 = fcn.00006745();
        if (uVar3 < 0x20) {
            cVar1 = fcn.00006722(param_1,uVar3 * 2 + 2);
            if (cVar1 == '\0') {
                for (; *param_1 != 0; param_1 = param_1 + 1) {
                    *param_2 = *param_1;
                    param_2 = param_2 + 1;
                }
                *param_2 = 0;
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


/* fcn.000001e0 @ 0x1e0 */

int fcn.000001e0(char *param_1,char *param_2,int param_3)

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


/* fcn.000067dc @ 0x67dc */

int * fcn.000067dc(void)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    int *piVar3;
    char cStack_28;
    char acStack_27 [35];
    
    iVar2 = fcn.00000643();
    if ((iVar2 != 0) && (piVar3 = iVar2 + 0x18, piVar3 != NULL)) {
        fcn.00006766(extraout_ECX);
        while ((piVar3 != NULL && (*piVar3 == 0x5241564e))) {
            cVar1 = fcn.00000766();
            if (cVar1 != '\0') {
                iVar2 = 0;
                cVar1 = cStack_28;
                while (cVar1 != '\0') {
                    cVar1 = acStack_27[iVar2];
                    iVar2 = iVar2 + 1;
                }
                if ((iVar2 + 1 == 0) || (&cStack_28 == piVar3 + 0x1a)) {
                    iVar2 = 0;
                }
                else {
                    iVar2 = fcn.000001e0(&cStack_28,piVar3 + 0x1a,iVar2 + 1);
                }
                if (iVar2 == 0) {
                    return piVar3;
                }
            }
            if (*piVar3 == 0x5241564e) {
                piVar3 = piVar3 + *(piVar3 + 1);
            }
            else {
                piVar3 = NULL;
            }
        }
    }
    return NULL;
}


/* fcn.000067c2 @ 0x67c2 */

int __fastcall fcn.000067c2(int param_1)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 0;
    cVar1 = *(param_1 + 0x1a);
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = *(param_1 + 0x1a + iVar2);
    }
    return (*(param_1 + 4) - iVar2) + -0x1b;
}


/* fcn.00005306 @ 0x5306 */

void __cdecl fcn.00005306(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.000052a2 @ 0x52a2 */

void fcn.000052a2(int32_t param_1,int32_t param_2)

{
    fcn.00005201(param_1,param_2);
    fcn.0000523c(param_1,param_2);
    return;
}


/* fcn.0000527c @ 0x527c */

void fcn.0000527c(int32_t param_1,int32_t param_2)

{
    fcn.00005201(param_1,param_2);
    fcn.0000523c(param_1,param_2);
    return;
}


/* fcn.000052cf @ 0x52cf */

uint __cdecl fcn.000052cf(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


