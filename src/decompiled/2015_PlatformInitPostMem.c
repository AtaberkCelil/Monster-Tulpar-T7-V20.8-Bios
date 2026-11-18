// decompiled by r2ghidra: 2015_PlatformInitPostMem.te
// functions: 92

/* entry0 @ 0x1d5 */

void entry0(void)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar2 = fcn.00003add();
    cVar1 = (**(iVar2 + 4))(0x115);
    if (cVar1 == '\x02') {
        fcn.00003dc0();
    }
    iVar2 = fcn.00003add();
    (**(iVar2 + 4))(0x115);
    return;
}


/* fcn.00003add @ 0x3add */

int32_t __fastcall fcn.00003add(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000002cb(param_1,&var_4h);
    return var_4h;
}


/* fcn.000002cb @ 0x2cb */

void __cdecl fcn.000002cb(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000002a6 @ 0x2a6 */

void __fastcall fcn.000002a6(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00003dc0 @ 0x3dc0 */

uint __fastcall fcn.00003dc0(int param_1)

{
    uint uVar1;
    uint *puVar2;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *puStack_8;
    
    if (param_1 == 0) {
        return 0x80000002;
    }
    puStack_8 = 0x3dd3;
    puVar2 = fcn.0000035e();
    if (puVar2 == NULL) {
        return 0x80000009;
    }
    puVar2[2] = param_1;
    *puVar2 = 0x80000010;
    puVar2[1] = 0x46b0;
    puStack_8 = &stack0xfffffff0;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(iStack_e + -4) + 0x18))(*(iStack_e + -4),puVar2);
    return uVar1;
}


/* fcn.0000035e @ 0x35e */

int32_t fcn.0000035e(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),0xc,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00003b15 @ 0x3b15 */

void fcn.00003b15(void)

{
    int iVar1;
    
    iVar1 = fcn.00003add();
    (**(iVar1 + 8))(0x1d);
    return;
}


/* fcn.00003cc3 @ 0x3cc3 */

//WARNING: Removing unreachable block (ram,0x00003d15)
//WARNING: Removing unreachable block (ram,0x00003d05)
//WARNING: Removing unreachable block (ram,0x00003d1e)
//WARNING: Removing unreachable block (ram,0x00003d36)
//WARNING: Removing unreachable block (ram,0x00003d3c)
//WARNING: Removing unreachable block (ram,0x00003d23)
//WARNING: Removing unreachable block (ram,0x00003d0b)
//WARNING: Removing unreachable block (ram,0x00003d17)
//WARNING: Removing unreachable block (ram,0x00003d2d)
//WARNING: Removing unreachable block (ram,0x00003d2f)
//WARNING: Removing unreachable block (ram,0x00003d46)
//WARNING: Removing unreachable block (ram,0x00003d48)
//WARNING: Removing unreachable block (ram,0x00003d4d)

void __fastcall fcn.00003cc3(int param_1)

{
    char cVar1;
    int iVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = fcn.00003af9();
    cVar1 = (**(iVar2 + 0x18))(0x4680,0x50000015);
    if ((cVar1 == '\0') && (param_1 != 0)) {
        fcn.00003c96();
    }
    return;
}


/* fcn.000002f8 @ 0x2f8 */

void fcn.000002f8(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0x4750);
    return;
}


/* fcn.00003b21 @ 0x3b21 */

void fcn.00003b21(void)

{
    int iVar1;
    
    iVar1 = fcn.00003add();
    (**(iVar1 + 0xc))(0xdd);
    return;
}


/* fcn.000036e0 @ 0x36e0 */

int __fastcall fcn.000036e0(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    uStack_14 = param_1 & 0x1f;
    cVar1 = fcn.00003f10();
    if ((cVar1 == '\0') || (cVar1 = fcn.00003ef1(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    uStack_10 = fcn.00003f49();
    uStack_c = fcn.00003f49();
    uStack_8 = fcn.00003f49();
    fcn.00003f7e(param_2);
    uVar3 = (param_1 & 0x1ff) >> 5;
    iVar2 = fcn.00003559(uVar3,&uStack_18);
    if (iVar2 < 0) {
        return iVar2;
    }
    *param_2 = ((uStack_18 >> (uStack_14 & 0x1f)) << 6 ^ *param_2) & 0x40 ^ *param_2 | 0x20;
    iVar2 = fcn.00003559(uVar3,&uStack_18);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = ~((uStack_18 >> (uStack_14 & 0x1f)) << 10) & 0x400 | param_2[1] & 0xffffe3ff | 0x200;
    iVar2 = fcn.00003559(uVar3,&uStack_18);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = param_2[1] | ~((uStack_18 >> (uStack_14 & 0x1f)) << 0xc) & 0x1000 | 0x800;
    return 0;
}


/* fcn.00003d96 @ 0x3d96 */

int fcn.00003d96(void)

{
    char extraout_AL;
    unkuint3 extraout_EAX;
    unkuint3 Var2;
    int iVar1;
    
    fcn.00002f37();
    Var2 = extraout_EAX;
    if ((extraout_AL == '\0') && (Var2 = *0xfe001e44 >> 8, (~*0xfe001e44 & 1) != 0)) {
        iVar1 = fcn.000044ea();
        return CONCAT31(*(iVar1 + 0x60) >> 8,*(iVar1 + 0x60) != 0x7fff);
    }
    return Var2 << 8;
}


/* fcn.00002f37 @ 0x2f37 */

int fcn.00002f37(void)

{
    uint uVar1;
    unkuint3 Var2;
    
    uVar1 = fcn.00002eea();
    Var2 = uVar1 >> 8 & 0xff;
    if ((uVar1 != 0x5186) && (uVar1 != 0x5187)) {
        return Var2 << 8;
    }
    return CONCAT31(Var2,1);
}


/* fcn.00002eea @ 0x2eea */

void fcn.00002eea(void)

{
    fcn.000039c8(0xf8002,0);
    return;
}


/* fcn.000039c8 @ 0x39c8 */

ushort __cdecl fcn.000039c8(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00003497 @ 0x3497 */

uint __fastcall fcn.00003497(int param_1,int param_2)

{
    uint uVar1;
    uint32_t *puVar2;
    int iVar3;
    uint32_t *puVar4;
    
    uVar1 = fcn.0000314d();
    if (param_1 != 0) {
        iVar3 = param_1;
        do {
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    iVar3 = fcn.00003c63();
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
    fcn.00003393();
    return uVar1;
}


/* fcn.0000048e @ 0x48e */

uint32_t __fastcall fcn.0000048e(uint param_1)

{
    uint32_t uVar1;
    int32_t var_cb4h;
    int8_t var_449h;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.000002cb(param_1,&var_8h);
    if (uVar1 == 0) {
        var_4h = 0xca9;
        uVar1 = (**var_8h)(var_8h,0x67a4,0x46e0,0,&var_4h,&var_cb4h);
        if (uVar1 == 0) {
            return var_449h;
        }
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00003b30 @ 0x3b30 */

void __fastcall fcn.00003b30(uint param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = fcn.00003af9();
    (**(iVar1 + 0x14))(0x4680,param_2);
    return;
}


/* fcn.00003af9 @ 0x3af9 */

int32_t __fastcall fcn.00003af9(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000002cb(param_1,&var_4h);
    return var_4h;
}


/* fcn.00003808 @ 0x3808 */

uint __fastcall fcn.00003808(uint param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    
    cVar1 = fcn.00003f10();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        cVar1 = fcn.00003ef1();
        if (cVar1 == '\0') {
            uVar2 = 0x80000003;
        }
        else {
            uVar3 = fcn.00003f49();
            *param_2 = uVar3 & 0x7f;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00000406 @ 0x406 */

void __fastcall fcn.00000406(uint param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_818h;
    int8_t var_87h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = fcn.000002cb(param_1,&var_4h);
    if (iVar1 == 0) {
        var_8h = 0x80d;
        iVar1 = (**var_4h)(var_4h,0x6790,0x4730,0,&var_8h,&var_818h);
        if (iVar1 == 0) {
            if (var_87h == 1) {
                iVar1 = fcn.00003add();
                uVar2 = 0x4a10;
            }
            else if (var_87h == 2) {
                iVar1 = fcn.00003add();
                uVar2 = 0x4a5c;
            }
            else {
                iVar1 = fcn.00003add();
                uVar2 = 0x4a34;
            }
            (**(iVar1 + 0x44))(0x53,uVar2);
        }
    }
    return;
}


/* fcn.000004e5 @ 0x4e5 */

void fcn.000004e5(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    uint noname_0;
    uint uVar4;
    uint uVar5;
    uint uStack_14cc;
    uint *apuStack_14c8 [3];
    uchar auStack_14bc [9];
    char cStack_14b3;
    char cStack_14b0;
    uchar auStack_cac [2954];
    char cStack_122;
    
    uVar2 = fcn.00003b15();
    iVar3 = fcn.000002cb(noname_0,apuStack_14c8);
    if (iVar3 == 0) {
        uStack_14cc = 0x80d;
        (**apuStack_14c8[0])(apuStack_14c8[0],0x6790,0x4730,0,&uStack_14cc,auStack_14bc);
        uStack_14cc = 0xca9;
        (**apuStack_14c8[0])(apuStack_14c8[0],0x67a4,0x46e0,0,&uStack_14cc,auStack_cac);
    }
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x112,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x151,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0xa1,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x58,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x59,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x32,1);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x44))(0x4f,0x4788);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x40))(0x50,2);
    if (uVar2 < 0x16) {
        if ((uVar2 == 0x15) || (uVar2 == 5)) {
code_r0x000005f0:
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x3c))(0xdc,8);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xda,0x9070011);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xd7,0x90c000a);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xdb,0);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xd8,0);
        }
        else if (uVar2 == 0xe) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x36,0x9020010);
        }
        else if ((uVar2 == 0x10) || (uVar2 == 0x13)) goto code_r0x000005f0;
    }
    else if (uVar2 == 0x16) {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xdc,3);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xda,0x9020016);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xd7,0x90c000a);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0xdb,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0xd8,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x8b,0x902000c);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x8c,1);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x8d,0x9080009);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x8e,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xdf,0x907000f);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xde,5);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x8f,0x90e0004);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x90,1);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x91,0x90e0012);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x92,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xe1,0x9070011);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xe0,9);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x36,0x9020007);
    }
    else if (uVar2 == 0x1b) {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x151,1);
    }
    else if (uVar2 == 0x1e) {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xdc,7);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xdd,0x9020008);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xd7,0x90c000a);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0xd8,0);
    }
    if (uVar2 == 5) {
code_r0x00000809:
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0xdd,0x9030006);
    }
    else if (uVar2 == 0x10) {
code_r0x0000086d:
        if (cStack_122 != '\0') {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xdd,0x9020014);
            fcn.00003b21();
            fcn.000036e0();
        }
    }
    else if (0x11 < uVar2) {
        if (uVar2 < 0x16) goto code_r0x0000086d;
        if (uVar2 == 0x17) goto code_r0x00000809;
    }
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x5a,1);
    if (uVar2 == 0x1a) {
        iVar3 = fcn.00003add();
        uVar5 = 0x902000f;
code_r0x00000acf:
        (**(iVar3 + 0x44))(0x11f,uVar5);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x120,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x127,0x90e0011);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x128,1);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(299,0x90e0006);
        iVar3 = fcn.00003add();
        uVar4 = 1;
        uVar5 = 300;
code_r0x00000b22:
        (**(iVar3 + 0x50))(uVar5,uVar4);
    }
    else if (uVar2 == 0x1b) {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x57,0x9050002);
        if ((((cStack_14b3 == '\0') || (cVar1 = fcn.00003d96(), cVar1 == '\0')) ||
            (cVar1 = fcn.00002f37(), cVar1 != '\0')) || (cStack_14b0 == '\0')) {
            fcn.00003497();
        }
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x11f,0x902000f);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x120,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x127,0x90e0011);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x129,0x90c0007);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(299,0x90e0006);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x128,0);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(0x12a,1);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x50))(300,0);
    }
    else {
        if (uVar2 == 0x1c) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x9d,0x9080010);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x9f,0x9070000);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x9e,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xa0,0);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x11f,0x90c0012);
            iVar3 = fcn.00003add();
            uVar4 = 0;
            uVar5 = 0x120;
            goto code_r0x00000b22;
        }
        if (uVar2 == 0x1d) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x11f,0x902000f);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x120,0);
        }
        else if (uVar2 == 0x1e) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x9d,0x9080010);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x9f,0x9070000);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x9e,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xa0,0);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x93,0x9000004);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x94,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x11f,0x90e000c);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x120,0);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x127,0x90e0011);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(299,0x90e0006);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x128,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(300,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x155,0x908000d);
        }
        else if (uVar2 == 0x1f) {
            iVar3 = fcn.00003add();
            uVar5 = 0x90e000c;
            goto code_r0x00000acf;
        }
    }
    if (uVar2 == 5) {
code_r0x00000b4d:
        fcn.0000048e();
    }
    else {
        if (uVar2 != 0xe) {
            if (uVar2 == 0x13) goto code_r0x00000b4d;
            if (uVar2 != 0x14) {
                return;
            }
        }
        cVar1 = fcn.0000048e();
        if (cVar1 == '\0') {
            return;
        }
    }
    fcn.00003497();
    return;
}


/* fcn.00000b6d @ 0xb6d */
// decompilation failed

/* fcn.00000c50 @ 0xc50 */

void __fastcall fcn.00000c50(uint param_1)

{
    int16_t iVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar1 = fcn.00003b15();
    if ((*0xfed30800 & 0x70000) == 0x50000) {
        fcn.00003808();
        iVar2 = fcn.00003add();
    }
    else {
        iVar2 = fcn.00003add();
        param_1 = 0;
    }
    (**(iVar2 + 0x44))(0x167,param_1);
    if ((iVar1 == 0x17) || (iVar1 == 5)) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x83,0x40);
    }
    return;
}


/* fcn.00000cc9 @ 0xcc9 */
// decompilation failed

/* fcn.00003d68 @ 0x3d68 */

//WARNING: Removing unreachable block (ram,0x00003d87)

void __fastcall fcn.00003d68(int param_1)

{
    int32_t var_4h;
    
    if (param_1 != 0) {
        fcn.00003c96();
    }
    return;
}


/* fcn.00003c96 @ 0x3c96 */

void __fastcall fcn.00003c96(int *param_1,uint16_t *param_2)

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


/* fcn.00003b45 @ 0x3b45 */

void __thiscall fcn.00003b45(uint param_1,uint param_2,uint param_3)

{
    int iVar1;
    
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x48))(param_1,param_2,param_3);
    return;
}


/* fcn.0000111e @ 0x111e */

void fcn.0000111e(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    uint uVar4;
    
    uVar2 = fcn.00003b15();
    if (uVar2 < 0x1a) {
        if (uVar2 != 0x19) {
            if (uVar2 != 5) {
                if (uVar2 == 0xe) {
                    iVar3 = fcn.00003add();
                    (**(iVar3 + 0x44))(0x52,0x9070003);
                    iVar3 = fcn.00003add();
                    (**(iVar3 + 0x3c))(0x51,0);
                    iVar3 = fcn.00003add();
                    (**(iVar3 + 0x44))(0x15a,0x90c000e);
                    iVar3 = fcn.00003add();
                    (**(iVar3 + 0x44))(0x29,0x902000d);
                    iVar3 = fcn.00003add();
                    cVar1 = (**(iVar3 + 4))(0x34);
                    if (cVar1 == '\x02') {
                        iVar3 = fcn.00003add();
                        (**(iVar3 + 0x44))(0x28,0x90e0000);
                    }
                    uVar4 = 0x6f697348;
code_r0x000012a5:
                    fcn.00003b45(0x506c6441,uVar4);
                    uVar4 = 0x504c6c64;
code_r0x000011fa:
                    fcn.00003b45(0x615f6878,uVar4);
                    goto code_r0x00001374;
                }
                if (uVar2 != 0x10) {
                    if (uVar2 < 0x12) {
code_r0x000012a0:
                        uVar4 = 0x7076525f;
                        goto code_r0x000012a5;
                    }
                    if (0x15 < uVar2) {
                        if (uVar2 == 0x16) {
                            iVar3 = fcn.00003add();
                            (**(iVar3 + 0x44))(0x52,0x9070003);
                            iVar3 = fcn.00003add();
                            (**(iVar3 + 0x3c))(0x51,0);
                            iVar3 = fcn.00003add();
                            (**(iVar3 + 0x44))(0x15a,0x90c000e);
                            iVar3 = fcn.00003add();
                            (**(iVar3 + 0x44))(0x29,0x902000d);
                            iVar3 = fcn.00003add();
                            cVar1 = (**(iVar3 + 4))(0x34);
                            if (cVar1 == '\x02') {
                                iVar3 = fcn.00003add();
                                (**(iVar3 + 0x44))(0x28,0x90e0000);
                            }
                            fcn.00003b45(0x506c6441,0x524d325f);
                            uVar4 = 0x524d6c64;
                            goto code_r0x000011fa;
                        }
                        if (uVar2 != 0x17) goto code_r0x000012a0;
                    }
                }
            }
code_r0x0000116c:
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x29,0x902000d);
            uVar4 = 0x7076525f;
code_r0x000012d0:
            fcn.00003b45(0x506c6441,uVar4);
            fcn.00003b45(0x615f6878,0x504c6c64);
            goto code_r0x00001374;
        }
code_r0x0000132a:
        iVar3 = fcn.00003add();
        uVar4 = 0x90c0012;
code_r0x00001334:
        (**(iVar3 + 0x44))(0x15a,uVar4);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x29,0x902000d);
        uVar4 = 0x7076525f;
    }
    else {
        if (uVar2 == 0x1a) goto code_r0x0000132a;
        if (uVar2 == 0x1b) goto code_r0x0000116c;
        if (uVar2 == 0x1c) {
            iVar3 = fcn.00003add();
            uVar4 = 0x90c000e;
            goto code_r0x00001334;
        }
        if (uVar2 != 0x1d) {
            if (uVar2 == 0x1e) {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x29,0x902000d);
                uVar4 = 0x3438335f;
                goto code_r0x000012d0;
            }
            if (uVar2 != 0x1f) goto code_r0x000012a0;
        }
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x15a,0x90c0012);
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x44))(0x29,0x902000d);
        uVar4 = 0x3832315f;
    }
    fcn.00003b45(0x506c6441,uVar4);
    fcn.00003b45(0x615f6878,0x504c6c64);
code_r0x00001374:
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x3c))(0xfe,2);
    iVar3 = fcn.00003add();
    cVar1 = (**(iVar3 + 4))(0xf7);
    if (cVar1 == '\x04') {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xfe,4);
    }
    return;
}


/* fcn.000013aa @ 0x13aa */

void fcn.000013aa(void)

{
    int16_t iVar1;
    int iVar2;
    uint uVar3;
    
    iVar1 = fcn.00003b15();
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x46,0x90e0007);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x41,0x90c0009);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x101,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x100,0x6e);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0xff,5);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x119,0);
    iVar2 = fcn.00003add();
    if (iVar1 == 0x1b) {
        uVar3 = 1;
    }
    else {
        uVar3 = 3;
    }
    (**(iVar2 + 0x3c))(0xf,uVar3);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x102,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x103,2);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x5b,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x4d,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x4e,0);
    if (iVar1 == 0xe) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x4e,1);
    }
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x80,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x82,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x81,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x162,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x118,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x2b,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3b,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3c,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3d,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3e,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3f,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x40,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14f,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14e,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14c,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14d,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x116,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x150,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xc,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0xfa,0x9050003);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xd,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xe,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14b,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x17e,1);
    return;
}


/* fcn.00003be5 @ 0x3be5 */

int fcn.00003be5(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00003bc4();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000033a();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00003c18 @ 0x3c18 */

int fcn.00003c18(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00003b99();
    do {
        iVar2 = fcn.00003bc4();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000033a();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00003b99 @ 0x3b99 */

int32_t fcn.00003b99(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00001630 @ 0x1630 */

void __fastcall fcn.00001630(uint param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_818h;
    int8_t var_87h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.000002cb(param_1,&var_4h);
    if (var_4h != 0) {
        var_8h = 0x80d;
        iVar1 = (**var_4h)(var_4h,0x6790,0x4730,0,&var_8h,&var_818h);
        if (iVar1 == 0) {
            if (var_87h == 1) {
                iVar1 = fcn.00003add();
                uVar2 = 0x4a10;
            }
            else if (var_87h == 2) {
                iVar1 = fcn.00003add();
                uVar2 = 0x4a5c;
            }
            else {
                iVar1 = fcn.00003add();
                uVar2 = 0x4a34;
            }
            (**(iVar1 + 0x44))(0x53,uVar2);
        }
    }
    return;
}


/* fcn.000016b8 @ 0x16b8 */

void fcn.000016b8(void)

{
    uint16_t uVar1;
    int iVar2;
    uint noname_0;
    uint uVar3;
    uint uVar4;
    uint uStack_14c4;
    uint *puStack_14c0;
    uchar auStack_14bc [1304];
    char cStack_fa4;
    uchar auStack_cac [1504];
    char cStack_6cc;
    
    uVar1 = fcn.00003b15();
    fcn.000002cb(noname_0,&puStack_14c0);
    uStack_14c4 = 0xca9;
    (**puStack_14c0)(puStack_14c0,0x67a4,0x46e0,0,&uStack_14c4,auStack_cac);
    uStack_14c4 = 0x80d;
    (**puStack_14c0)(puStack_14c0,0x6790,0x4730,0,&uStack_14c4,auStack_14bc);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x112,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x151,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xa1,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x58,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x59,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x5a,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x4f,0x48a4);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x40))(0x50,2);
    if (uVar1 == 0) {
        return;
    }
    if (uVar1 < 5) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0xdd,0x9080011);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0xda,0x908000e);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0xd7,0x90c000a);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0xdb,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0xd8,0);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x9d,0x908000a);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x9f,0x9070000);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x9e,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0xa0,0);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x11f,0x908000b);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x120,0);
        if ((cStack_fa4 == '\0') && (cStack_6cc != '\0')) {
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(0x127,0x90c0012);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(0x129,0x90c0007);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(299,0x90c0011);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x50))(0x128,1);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x50))(0x12a,1);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x50))(300,1);
        }
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x155,0x908000d);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x57,0x9050002);
        if (uVar1 == 4) {
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0xdc,7);
            iVar2 = fcn.00003add();
            uVar4 = 8;
            uVar3 = 0x154;
        }
        else {
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0x154,10);
            iVar2 = fcn.00003add();
            uVar4 = 9;
            uVar3 = 0xdc;
        }
        (**(iVar2 + 0x3c))(uVar3,uVar4);
    }
    else if (uVar1 == 0xf) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x11f,0x908000b);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x120,0);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x127,0x90e0011);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(299,0x90e0006);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x128,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(300,1);
    }
    if (uVar1 == 0) {
        return;
    }
    if (2 < uVar1) {
        if (uVar1 == 3) goto code_r0x000019e0;
        if (uVar1 != 4) {
            return;
        }
    }
    fcn.0000048e();
code_r0x000019e0:
    fcn.00003497();
    return;
}


/* fcn.000019f0 @ 0x19f0 */

void fcn.000019f0(void)

{
    uint16_t uVar1;
    int iVar2;
    
    uVar1 = fcn.00003b15();
    if ((uVar1 != 0) && ((uVar1 < 5 || (uVar1 == 0xf)))) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x14a,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x12d,2);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13b,0);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13c,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x131,5);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13d,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13e,2);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x132,0xd);
        return;
    }
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14a,0);
    return;
}


/* fcn.00001bcf @ 0x1bcf */

void fcn.00001bcf(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    uint uVar4;
    
    uVar2 = fcn.00003b15();
    if (uVar2 != 0) {
        if (uVar2 < 5) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x52,0x9070003);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x3c))(0x51,0);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x15a,0x90e0005);
            if (uVar2 == 4) {
                uVar4 = 0x4261325f;
            }
            else {
                uVar4 = 0x7076525f;
            }
            fcn.00003b45(0x4d6c6441,uVar4);
            fcn.00003b45(0x615f6878,0x4d5f6c64);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x29,0x902000c);
            iVar3 = fcn.00003add();
            cVar1 = (**(iVar3 + 4))(0x34);
            if (cVar1 == '\x02') {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x28,0x90e0000);
            }
        }
        else if (uVar2 == 0xf) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x127,0x90e0011);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x11f,0x908000b);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x15a,0x90e0005);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x29,0x902000c);
            fcn.00003b45(0x4d6c6441,0x7076525f);
            fcn.00003b45(0x615f6878,0x4d5f6c64);
        }
    }
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x3c))(0xfe,2);
    iVar3 = fcn.00003add();
    cVar1 = (**(iVar3 + 4))(0xf7);
    if (cVar1 == '\x04') {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xfe,4);
    }
    return;
}


/* fcn.00001d37 @ 0x1d37 */

void fcn.00001d37(void)

{
    int iVar1;
    
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x44))(0x46,0x90e0007);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x44))(0x41,0x9020007);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x101,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x100,0x6e);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0xff,5);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x119,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0xf,3);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x102,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x103,2);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x5b,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x4d,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x4e,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x80,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x82,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x81,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x162,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x44))(0x118,0);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x2b,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x3b,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x3c,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x3d,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x3e,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x3f,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x3c))(0x40,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x14f,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x14e,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x14c,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x14d,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x116,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x150,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0xc,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x44))(0xfa,0x9050003);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0xd,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0xe,1);
    iVar1 = fcn.00003add();
    (**(iVar1 + 0x50))(0x17e,1);
    return;
}


/* fcn.00003b5e @ 0x3b5e */

void __fastcall fcn.00003b5e(uint param_1,uint param_2,uint param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = fcn.00003af9();
    (**(iVar1 + 0x30))(0x4680,param_2,param_3,param_4);
    return;
}


/* fcn.00001f85 @ 0x1f85 */

void fcn.00001f85(void)

{
    int16_t iVar1;
    int iVar2;
    
    iVar1 = fcn.00003b15();
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x112,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x151,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xa1,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x58,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x59,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x46,0x90e0007);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x41,0x90e0008);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0xdd,0x90c0005);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0xdc,5);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x33,0x90c0014);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0xdf,0x90c0004);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x8b,0x90c0009);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x8d,0x90c000a);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x8c,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x8e,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0xde,8);
    if (iVar1 == 0x3f) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x9d,0x9000010);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x9f,0x9070000);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x9e,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0xa0,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x93,0x9000010);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x94,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x11f,0x90b0008);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x120,0);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x127,0x90e0011);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x129,0x907000e);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(299,0x90e0006);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x128,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x12a,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(300,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x121,0x90c0012);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x123,0x90c0007);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x125,0x90c0011);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x122,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x124,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x126,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x44))(0x155,0x90b0017);
    }
    return;
}


/* fcn.000021ef @ 0x21ef */

void fcn.000021ef(void)

{
    int16_t iVar1;
    int iVar2;
    
    iVar1 = fcn.00003b15();
    if (iVar1 != 0x3f) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x14a,0);
        return;
    }
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14a,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x12d,4);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x13b,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x13c,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x131,5);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x13d,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x13e,5);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x132,0xd);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x13f,2);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x140,6);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x133,0x15);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x141,3);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x142,7);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x134,0x1d);
    return;
}


/* fcn.0000240c @ 0x240c */

void fcn.0000240c(void)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint noname_0;
    uint uVar4;
    int32_t var_14c4h;
    uint32_t var_ee4h;
    int32_t var_818h;
    uint32_t var_80fh;
    uint32_t var_2fdh;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = fcn.00003b15();
    uVar2 = uVar2 & 0xffff;
    iVar3 = fcn.000002cb(noname_0,&var_8h);
    if (iVar3 == 0) {
        var_4h = 0x80d;
        (**var_8h)(var_8h,0x6790,0x4730,0,&var_4h,&var_818h);
        var_4h = 0xca9;
        (**var_8h)(var_8h,0x67a4,0x46e0,0,&var_4h,&var_14c4h);
    }
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x112,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x151,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0xa1,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x58,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x59,0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x32,1);
    if (uVar2 == 0xb) {
        iVar3 = fcn.00003add();
        uVar4 = 0x9080010;
    }
    else {
        if (uVar2 != 0xc) goto code_r0x000024f9;
        iVar3 = fcn.00003add();
        uVar4 = 0x90e0016;
    }
    (**(iVar3 + 0x44))(0x36,uVar4);
code_r0x000024f9:
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x50))(0x5a,1);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x44))(0x4f,0x49a0);
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x40))(0x50,2);
    if (9 < uVar2) {
        if (uVar2 < 0xc) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x3c))(0xdc,5);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xdd,0x908000b);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xda,0x9070011);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xd7,0x90c000a);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xdb,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xd8,0);
            iVar3 = fcn.00003add();
            cVar1 = (**(iVar3 + 0x18))(0x56);
            if (cVar1 == '\x01') {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x8b,0x90c0015);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x8c,1);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x8d,0x90b0005);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x8e,0);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0xdf,0x9080012);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x3c))(0xde,3);
            }
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x11f,0x902000f);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x120,0);
            if ((var_2fdh == '\0') && (var_ee4h != '\0')) {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x127,0x90c0012);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x129,0x9020007);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(299,0x90c0011);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x128,1);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x12a,1);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(300,1);
            }
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x57,0x9050002);
            if ((((var_80fh == '\0') || (cVar1 = fcn.00003d96(), cVar1 == '\0')) ||
                (cVar1 = fcn.00002f37(), cVar1 != '\0')) || (var_80fh._3_1_ == '\0')) {
                fcn.00003497();
            }
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x155,0x908000d);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x3c))(0x154,8);
        }
        else if (uVar2 == 0xc) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x3c))(0xdc,5);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xdd,0x908000b);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xda,0x9020008);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0xd7,0x90c000a);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xdb,1);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0xd8,0);
            iVar3 = fcn.00003add();
            cVar1 = (**(iVar3 + 0x18))(0x56);
            if (cVar1 == '\x01') {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x8b,0x90c0015);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x8c,1);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x8d,0x90b0005);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x8e,0);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0xdf,0x9080012);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x3c))(0xde,3);
            }
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x11f,0x902000f);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x50))(0x120,0);
            if ((var_2fdh == '\0') && (var_ee4h != '\0')) {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x127,0x90e0011);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(299,0x90e0006);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(0x128,1);
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x50))(300,1);
            }
        }
    }
    if (uVar2 - 10 < 2) {
        fcn.0000048e();
        fcn.00003497();
    }
    return;
}


/* fcn.00002892 @ 0x2892 */

void fcn.00002892(void)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = fcn.00003b15();
    if ((uVar1 & 0xffff) - 10 < 3) {
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x50))(0x14a,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x12d,3);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13b,0);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13c,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x131,5);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13d,1);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13e,2);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x132,0xd);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x13f,2);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x140,3);
        iVar2 = fcn.00003add();
        (**(iVar2 + 0x3c))(0x133,0x15);
    }
    return;
}


/* fcn.00002ac7 @ 0x2ac7 */

void fcn.00002ac7(void)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    uint uVar4;
    
    uVar2 = fcn.00003b15();
    if (9 < uVar2) {
        if (uVar2 < 0xc) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x52,0x9070003);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x3c))(0x51,0);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x15a,0x90c000e);
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x29,0x902000d);
            iVar3 = fcn.00003add();
            cVar1 = (**(iVar3 + 4))(0x34);
            if (cVar1 == '\x02') {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x28,0x90e0000);
            }
            iVar3 = fcn.00003add();
            cVar1 = (**(iVar3 + 0x18))(0x56);
            if (cVar1 == '\x01') {
                uVar4 = 0x70765278;
            }
            else {
                uVar4 = 0x6e615778;
            }
            fcn.00003b45(0x506c7052,uVar4);
            fcn.00003b45(0x725f6878,0x78706c70);
        }
        else if (uVar2 == 0xc) {
            iVar3 = fcn.00003add();
            (**(iVar3 + 0x44))(0x29,0x902000d);
            iVar3 = fcn.00003add();
            cVar1 = (**(iVar3 + 4))(0x34);
            if (cVar1 == '\x02') {
                iVar3 = fcn.00003add();
                (**(iVar3 + 0x44))(0x28,0);
            }
            fcn.00003b45(0x506c7052,0x70765278);
            fcn.00003b45(0x725f6878,0x78706c70);
        }
    }
    iVar3 = fcn.00003add();
    (**(iVar3 + 0x3c))(0xfe,2);
    iVar3 = fcn.00003add();
    cVar1 = (**(iVar3 + 4))(0xf7);
    if (cVar1 == '\x04') {
        iVar3 = fcn.00003add();
        (**(iVar3 + 0x3c))(0xfe,4);
    }
    return;
}


/* fcn.00002c1e @ 0x2c1e */

void fcn.00002c1e(void)

{
    uint16_t uVar1;
    int iVar2;
    
    uVar1 = fcn.00003b15();
    if (9 < uVar1) {
        if (uVar1 < 0xc) {
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(0x46,0x90e0007);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(0x41,0x90c0009);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x50))(0x101,1);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0x100,0x6e);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0xff,5);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x50))(0x119,0);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0xf,3);
        }
        else if (uVar1 == 0xc) {
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(0x46,0);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x44))(0x41,0);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x50))(0x101,0);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0x100,0);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0xff,0);
            iVar2 = fcn.00003add();
            (**(iVar2 + 0x3c))(0xf,3);
        }
    }
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x102,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x103,2);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x5b,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x4d,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x4e,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x80,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x82,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x81,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x162,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0x118,0);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x2b,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3b,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3c,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3d,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3e,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x3f,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x3c))(0x40,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14f,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14e,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14c,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14d,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x116,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x150,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xc,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x44))(0xfa,0x9050003);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xd,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0xe,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x14b,1);
    iVar2 = fcn.00003add();
    (**(iVar2 + 0x50))(0x17e,1);
    return;
}


/* fcn.00002ef9 @ 0x2ef9 */

char fcn.00002ef9(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0x4a0c == -1) {
        uVar1 = fcn.00002eea();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0x4a0c = cVar2;
    }
    return *0x4a0c;
}


/* fcn.00003e74 @ 0x3e74 */

uint __fastcall fcn.00003e74(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002f55();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0x6570;
    }
    *param_1 = 0x13;
    return 0x6330;
}


/* fcn.00002f55 @ 0x2f55 */

uint fcn.00002f55(void)

{
    char cVar1;
    
    cVar1 = fcn.00002ef9();
    if (cVar1 != '\x02') {
        cVar1 = fcn.00002ef9();
        if (cVar1 != '\x05') {
            cVar1 = fcn.00002ef9();
            if (cVar1 != '\x06') {
                cVar1 = fcn.00002ef9();
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
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


/* fcn.0000390c @ 0x390c */

uint __fastcall fcn.0000390c(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000350a();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00003631(param_2,~param_3);
    }
    return uVar2;
}


/* fcn.0000393b @ 0x393b */

uint __fastcall fcn.0000393b(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000350a();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00003631(param_2,~param_3);
    }
    return uVar2;
}


/* fcn.00003074 @ 0x3074 */

uint __fastcall fcn.00003074(uint param_1,int param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t auStack_c [3];
    
    auStack_c[2] = fcn.00003e74();
    puVar1 = param_3 * 0xc + param_2;
    uVar3 = *(puVar1 + 2) & 0x1f;
    fcn.00000160(auStack_c,4);
    while( true ) {
        if ((auStack_c[1] <= param_3) || (uVar3 != (*(puVar1 + 2) & 0x1f))) {
            uVar2 = 0;
            do {
                if (auStack_c[uVar2] != 0) {
                    fcn.0000390c(auStack_c[uVar2]);
                    fcn.0000393b(auStack_c[uVar2]);
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


/* fcn.00004032 @ 0x4032 */

int __cdecl fcn.00004032(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint32_t *in_EDX;
    int32_t var_4h;
    
    iVar1 = fcn.0000418e(&var_4h);
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


/* fcn.0000418e @ 0x418e */

uint __cdecl fcn.0000418e(int32_t arg_8h)

{
    char cVar1;
    int in_EDX;
    
    if (in_EDX != 0) {
        if (in_EDX == 1) {
            cVar1 = fcn.00003e9a();
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
        cVar1 = fcn.00003e9a();
        if (cVar1 == '\0') {
            return 0x80000002;
        }
    }
    *arg_8h = 0;
    return 0;
}


/* fcn.00003df6 @ 0x3df6 */

int __fastcall fcn.00003df6(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.00003e74();
    return *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (param_2 + (param_1 & 0x1ff) * 4) * 4;
}


/* fcn.00003e48 @ 0x3e48 */

uint __fastcall fcn.00003e48(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.00002f80 @ 0x2f80 */

void __fastcall fcn.00002f80(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

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


/* fcn.00004284 @ 0x4284 */

uint16_t __fastcall fcn.00004284(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.00003c18();
    if (iVar1 == 0) {
        iVar1 = fcn.00004237();
        *param_1 = iVar1;
        if (iVar1 == 0) {
            return 0;
        }
        iVar1 = fcn.00003c18();
    }
    else {
        *param_1 = iVar1 + 0x18;
    }
    return *(iVar1 + 2) - 0x18U >> 3;
}


/* fcn.00004206 @ 0x4206 */

int __fastcall fcn.00004206(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    if (param_1 != 0) {
        do {
            fcn.000039af();
            uVar1 = fcn.0000396a();
            iVar2 = iVar2 + 1 + (uVar1 >> 5);
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_1);
    }
    return iVar2 + param_2;
}


/* fcn.000039af @ 0x39af */

uint32_t __fastcall fcn.000039af(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002f55();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.00003994 @ 0x3994 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00003994(uint param_1)

{
    int32_t var_4h;
    
    fcn.00003e74(param_1);
    fcn.000039af();
    return;
}


/* fcn.0000314d @ 0x314d */

uint __fastcall fcn.0000314d(uint32_t param_1,int param_2)

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
    
    iVar2 = fcn.00003e74();
    uStack_64 = 0;
    if (param_1 != 0) {
        do {
            iVar6 = param_2 + uStack_64 * 0xc;
            uVar8 = *(iVar6 + 2) & 0x1f;
            fcn.00003074(uStack_64);
            fcn.00000160(auStack_28,0x28);
            while ((uStack_64 < param_1 && (uVar8 == (*(iVar6 + 2) & 0x1f)))) {
                fcn.00000160(auStack_48,0x10);
                fcn.00000160(auStack_38,0x10);
                fcn.00004032(auStack_48,auStack_38);
                uVar9 = 0;
                do {
                    iVar3 = fcn.00003df6();
                    if (iVar3 != 0) {
                        fcn.00003e48(~auStack_38[uVar9],auStack_48[uVar9]);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < 3);
                fcn.00002f80(auStack_28);
                iVar6 = iVar6 + 0xc;
                uStack_64 = uStack_64 + 1;
            }
            puVar7 = auStack_24;
            uVar9 = 0;
            iVar6 = uVar8 * 0x1e + iVar2;
            do {
                if (*(iVar6 + 4) != -1) {
                    fcn.00003e48(~*puVar7,puVar7[-1]);
                }
                if (*(iVar6 + 0xc) != -1) {
                    fcn.00003e48(~puVar7[2],puVar7[1]);
                }
                if (*(iVar6 + 0x14) != -1) {
                    fcn.00003e48(~puVar7[4],puVar7[3]);
                }
                if (*(iVar6 + 0x10) != -1) {
                    fcn.00003e48(~puVar7[6],puVar7[5]);
                }
                uVar8 = puVar7[7];
                if (((uVar8 != 0) && (uVar4 = fcn.00004284(), uVar4 != 0)) && (uVar5 = fcn.00004206(), uVar5 < uVar4))
                {
                    puVar1 = iStack_50 + uVar5 * 8;
                    *puVar1 = *puVar1 | uVar8;
                }
                uVar8 = puVar7[8];
                if (((uVar8 != 0) && (uVar4 = fcn.00004284(), uVar4 != 0)) && (uVar5 = fcn.00004206(), uVar5 < uVar4))
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


/* fcn.00003c63 @ 0x3c63 */

int fcn.00003c63(void)

{
    int iVar1;
    
    iVar1 = fcn.00003c2a();
    if (iVar1 != 0) {
        fcn.00000321();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00003c2a @ 0x3c2a */

int32_t __fastcall fcn.00003c2a(uint param_1,uint param_2)

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


/* fcn.00000321 @ 0x321 */

uint * __fastcall fcn.00000321(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00003393 @ 0x3393 */

uint fcn.00003393(void)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    
    iVar1 = fcn.00003e74();
    uVar2 = fcn.000039af();
    uVar3 = fcn.00003994();
    for (; uVar2 <= uVar3; uVar2 = uVar2 + 1) {
        iVar5 = (uVar2 & 0x1f) * 0x1e + iVar1;
        if (*(iVar5 + 6) != -1) {
            uVar4 = 0;
            do {
                fcn.00003e48(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
        if (*(iVar5 + 10) != -1) {
            uVar4 = 0;
            do {
                fcn.00003e48(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
        if (*(iVar5 + 0xe) != -1) {
            uVar4 = 0;
            do {
                fcn.00003e48(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
        if (*(iVar5 + 0x12) != -1) {
            uVar4 = 0;
            do {
                fcn.00003e48(0xffffffff,0xffffffff);
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(iVar5 + 0x1c) >> 5);
        }
    }
    return 0;
}


/* fcn.00003e28 @ 0x3e28 */

uint __fastcall fcn.00003e28(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.000038e2 @ 0x38e2 */

uint __fastcall fcn.000038e2(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000350a();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00003559(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000038b8 @ 0x38b8 */

uint __fastcall fcn.000038b8(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000350a();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00003559(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000042c6 @ 0x42c6 */

void fcn.000042c6(int16_t param_1,int32_t param_2)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.000042eb(0xf9000,0,param_1,param_2,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.000042eb @ 0x42eb */

int __cdecl
fcn.000042eb(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int32_t arg_28h,int32_t arg_2ch)

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
        iVar2 = fcn.000039c8(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.000039c8(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.00003aa0(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.00003aa0(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.000039c8(arg_8h_00,arg_ch_00);
                fcn.00003a03(arg_8h_00,arg_ch_00);
                fcn.00003a03(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.00003aa0(arg_8h + 0xd4,arg_ch_01);
                fcn.00003a43(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.000039c8(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.00003a69(arg_8h + 0xd4,arg_ch_01);
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


/* fcn.00003f10 @ 0x3f10 */

uint32_t __fastcall fcn.00003f10(uint32_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = fcn.00003eb0();
    if (uVar2 != '\0') {
        iVar3 = fcn.00003e74();
        uVar1 = *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar3);
        uVar2 = uVar1;
        if ((param_1 & 0x1ff) < uVar2) {
            return CONCAT31(uVar1 >> 8,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00003ef1 @ 0x3ef1 */

bool __fastcall fcn.00003ef1(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.00003843();
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.00003f49 @ 0x3f49 */

uint __fastcall fcn.00003f49(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00003e74();
    uVar2 = fcn.00003df6();
    return *(((*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar1) | 0xfffffd00) << 8 | uVar2 & 0xffff0000) << 8 | uVar2 & 0xffff
            );
}


/* fcn.00003f7e @ 0x3f7e */

void __fastcall fcn.00003f7e(uint param_1,uint32_t *param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    
    uVar1 = *param_2;
    uVar2 = fcn.0000415f();
    *(param_3 + 3) = uVar2;
    uVar3 = ((uVar1 & 0x6000000 | 0x1080800) >> 3 | uVar1 & 0x1e0000) >> 1 | *param_3 & 0xff10e0ff | uVar1 & 0x300;
    *param_3 = uVar3;
    if ((uVar1 & 0x200) == 0) {
        *param_3 = (uVar1 & 0x800000 | 0x400000) >> 0xc | uVar3;
    }
    uVar3 = param_2[1];
    *param_3 = (uVar1 & 0x1c00 | 0x400200) >> 9 | (uVar1 & 1) << 0xe | *param_3 & 0xffffbfe1;
    param_3[1] = ((uVar1 & 0x10000000 | 0x8004000) >> 5 | uVar3 & 0x3c00) >> 9 | param_3[1] & 0xffc03e01;
    return;
}


/* fcn.0000415f @ 0x415f */

uint fcn.0000415f(void)

{
    char cVar1;
    uint32_t extraout_EDX;
    
    cVar1 = fcn.00003e9a();
    if (cVar1 == '\0') {
        if (extraout_EDX < 4) {
            return *(extraout_EDX * 4 + 0x67d0);
        }
    }
    else if (extraout_EDX < 4) {
        return *(extraout_EDX * 4 + 0x67c0);
    }
    return 0;
}


/* fcn.00003e9a @ 0x3e9a */

uchar __fastcall fcn.00003e9a(int param_1)

{
    if ((param_1 != 0x905) && (param_1 != 0x809)) {
        return 0;
    }
    return 1;
}


/* fcn.00003559 @ 0x3559 */
// decompilation failed

/* fcn.0000350a @ 0x350a */

uint32_t __fastcall fcn.0000350a(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.00003e74();
    uVar2 = fcn.000039af();
    if (((uVar2 <= param_1) && (uVar2 = fcn.00003994(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00003631 @ 0x3631 */

uint __cdecl fcn.00003631(int32_t arg_8h,int32_t arg_ch)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    int in_ECX;
    uint32_t in_EDX;
    uint32_t uStack_14;
    uint32_t uStack_10;
    
    uStack_14 = 0;
    iVar2 = fcn.00003e74();
    if (in_ECX == 6) {
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.000038b8(&uStack_14);
    }
    else {
        if (in_ECX != 7) {
            return 0x80000003;
        }
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.000038e2(&uStack_14);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    uStack_10 = uStack_14 & arg_ch;
    uVar3 = fcn.000042c6(uVar1 + arg_8h * 8,0);
    return uVar3;
}


/* fcn.00003a03 @ 0x3a03 */

uint __cdecl fcn.00003a03(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.0000033a @ 0x33a */

uint32_t __fastcall fcn.0000033a(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00003bc4 @ 0x3bc4 */

int16_t * __fastcall fcn.00003bc4(uint param_1,int16_t *param_2)

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


/* fcn.000044ea @ 0x44ea */

uint32_t fcn.000044ea(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00003a69(0xfd010,0);
    return uVar1 & 0xfffff000;
}


/* fcn.00003a69 @ 0x3a69 */

uint __cdecl fcn.00003a69(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00003843 @ 0x3843 */

uint __fastcall fcn.00003843(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int8_t iVar5;
    
    cVar1 = fcn.00003f10();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.00003e74();
        if (*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.00003e28();
            iVar5 = (param_1 & 7) << 2;
            *param_2 = (uVar4 & 3 << iVar5) >> iVar5;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00003eb0 @ 0x3eb0 */

uint __fastcall fcn.00003eb0(uint32_t param_1)

{
    char cVar1;
    uint32_t var_4h;
    
    cVar1 = fcn.00002f55();
    if (((param_1 >> 0x18 & 0xf) == (cVar1 != '\0') + 8) && (fcn.00003e74(), (param_1 >> 0x10 & 0x1f) < param_1)) {
        return 1;
    }
    return 0;
}


/* fcn.0000396a @ 0x396a */

ushort __fastcall fcn.0000396a(uint32_t param_1)

{
    ushort uVar1;
    int iVar2;
    uint32_t var_4h;
    
    iVar2 = fcn.00003e74();
    if ((param_1 & 0x1f) < param_1) {
        uVar1 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00003c85 @ 0x3c85 */

uint __fastcall fcn.00003c85(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000160(param_1,param_2);
    return uVar1;
}


/* fcn.00004237 @ 0x4237 */

int fcn.00004237(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.000039af();
    uVar2 = fcn.00003994();
    for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
        fcn.0000396a();
    }
    iVar3 = fcn.00003c63();
    if (iVar3 != 0) {
        fcn.00003c85();
    }
    return iVar3;
}


/* fcn.00003aa0 @ 0x3aa0 */

void __cdecl fcn.00003aa0(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.00003a43 @ 0x3a43 */

void fcn.00003a43(int32_t param_1,int32_t param_2)

{
    fcn.000039c8(param_1,param_2);
    fcn.00003a03(param_1,param_2);
    return;
}


