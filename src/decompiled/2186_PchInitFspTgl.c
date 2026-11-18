// decompiled by r2ghidra: 2186_PchInitFspTgl.pe32
// functions: 48

/* entry0 @ 0x10326 */

void entry0(void)

{
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    if (*(*0xfed00148 + 0x59) == '\x01') {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0x100c);
    }
    else {
        *0x1044 = fcn.00010b59();
        *0x1044 = *0x1044 + 0x18;
    }
    var_4h = &var_14h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffea + -4) + 0x24))(*(stack0xffffffea + -4),0x1000);
    return;
}


/* fcn.00010f4a @ 0x10f4a */

uint fcn.00010f4a(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00010b59 @ 0x10b59 */

int fcn.00010b59(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00010b0d();
    do {
        iVar2 = fcn.00010b38();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00010ae9();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.0001062c @ 0x1062c */

void fcn.0001062c(void)

{
    char cVar1;
    int16_t iVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint extraout_ECX;
    uint auStack_18 [5];
    
    iVar4 = fcn.00010b59();
    if (iVar4 != 0) {
        fcn.00010a0c();
    }
    fcn.000104e8();
    uVar5 = fcn.00010d65();
    fcn.00010da9(uVar5 | 4);
    iVar2 = fcn.00010866(0xf8000,0);
    if (((iVar2 != -1) && (uVar5 = fcn.000108a8(0xf80dc,0), (uVar5 & 4) != 0)) && ((*(*0x1044 + 0x3c17) & 1) != 0)) {
        fcn.000107ed(0xf8004,0);
    }
    iVar2 = fcn.00010866(0xfb000,0);
    if ((iVar2 != -1) && ((*(*0x1044 + 0x3a7c) & 0x80) != 0)) {
        fcn.00010929(0xfb054,0);
    }
    *0xfe001023 = *0xfe001023 | 1;
    *0xfe001021 = *0xfe001021 & 0xbd | 2;
    uVar3 = fcn.00010d85();
    if ((uVar3 >> 8 & 1) != 0) {
        fcn.00010de8();
    }
    cVar1 = fcn.00010d21();
    if (cVar1 != '\0') {
        cVar1 = fcn.00010cd2();
        if ((cVar1 != '\x05') && (cVar1 = fcn.00010d54(), cVar1 == '\0')) {
            return;
        }
        fcn.00010220(auStack_18,0x10);
        auStack_18[0] = 1;
        fcn.00010a66(extraout_ECX,extraout_ECX,auStack_18);
    }
    return;
}


/* fcn.00010866 @ 0x10866 */

ushort __cdecl fcn.00010866(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010f5b();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.00010f5b @ 0x10f5b */

void fcn.00010f5b(void)

{
    int iVar1;
    
    iVar1 = fcn.00010f70();
    (**(iVar1 + 0x10))(0xff0,0x200002);
    return;
}


/* fcn.00010f70 @ 0x10f70 */

int32_t __fastcall fcn.00010f70(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.0001094f(param_1,&var_4h);
    return var_4h;
}


/* fcn.0001094f @ 0x1094f */

void __cdecl fcn.0001094f(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),4000,0,0,arg_ch);
    return;
}


/* fcn.00010842 @ 0x10842 */

void fcn.00010842(int32_t param_1,int32_t param_2)

{
    fcn.0001076c(param_1,param_2);
    fcn.000107aa(param_1,param_2);
    return;
}


/* fcn.0001076c @ 0x1076c */

uchar __cdecl fcn.0001076c(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010f5b();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.000107aa @ 0x107aa */

uchar __cdecl fcn.000107aa(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uchar in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010f5b();
    *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c)) = in_CL;
    return in_CL;
}


/* fcn.000108e6 @ 0x108e6 */

void __cdecl fcn.000108e6(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010f5b();
    *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c)) = in_ECX;
    return;
}


/* fcn.000107ed @ 0x107ed */

uint8_t __cdecl fcn.000107ed(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.0001076c(arg_8h,arg_ch);
    iVar2 = fcn.00010f5b();
    *(iVar2 + (arg_8h | (arg_ch & 1U) << 0x1c)) = uVar1 | in_CL;
    return uVar1 | in_CL;
}


/* fcn.00010929 @ 0x10929 */

void fcn.00010929(int32_t param_1,int32_t param_2)

{
    fcn.000108a8(param_1,param_2);
    fcn.000108e6(param_1,param_2);
    return;
}


/* fcn.000108a8 @ 0x108a8 */

uint __cdecl fcn.000108a8(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00010f5b();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.00010c82 @ 0x10c82 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.00010c82(uint param_1)

{
    uint noname_0;
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = fcn.00010bea(param_1,param_1);
    uVar3 = fcn.00010e7e(noname_0,noname_0,uVar2,uVar2 >> 0x20);
    uVar1 = uVar3 >> 0x20;
    fcn.00010c61((uVar1 % 1000000 << 0x20 | uVar3 & 0xffffffff) / 1000000,uVar1 / 1000000);
    return 10;
}


/* fcn.00010bea @ 0x10bea */

ulong fcn.00010bea(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.00010e3e(&var_8h,&var_ch);
    if ((var_4h == 0) || (var_8h == 0)) {
        uVar3 = 0;
        uVar2 = 0;
    }
    else {
        var_18h = 24000000;
        if (var_ch != 0) {
            var_18h = var_ch;
        }
        uVar1 = var_8h * var_18h + (var_4h >> 1);
        var_14h = uVar1 >> 0x20;
        uVar2 = var_14h / var_4h;
        uVar3 = (var_14h % var_4h << 0x20 | uVar1 & 0xffffffff) / var_4h;
    }
    return CONCAT44(uVar2,uVar3);
}


/* fcn.00010e7e @ 0x10e7e */

ulong __cdecl fcn.00010e7e(uint noname_0,uint noname_1,int32_t arg_10h,int arg_14h)

{
    int32_t var_8h;
    int var_4h;
    
    return CONCAT44((arg_10h * 10 >> 0x20) + arg_14h * 10,arg_10h * 10);
}


/* fcn.00010c61 @ 0x10c61 */

void fcn.00010c61(uint32_t param_1,int param_2)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar1 = rdtsc();
    uVar4 = (uVar1 >> 0x20) + param_2 + CARRY4(uVar1,param_1);
    do {
        uVar2 = rdtsc();
        uVar3 = uVar2 >> 0x20;
        if (uVar4 < uVar3) {
            return;
        }
    } while ((uVar3 < uVar4) || (uVar2 <= uVar1 + param_1));
    return;
}


/* fcn.00010d85 @ 0x10d85 */

ushort __fastcall fcn.00010d85(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00010d10 @ 0x10d10 */

bool __fastcall fcn.00010d10(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00010cd2(param_1);
    return cVar1 == '\x04';
}


/* fcn.00010cd2 @ 0x10cd2 */

char fcn.00010cd2(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0x1018 == -1) {
        uVar1 = fcn.00010cc1();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0x1018 = cVar2;
    }
    return *0x1018;
}


/* fcn.00010dcd @ 0x10dcd */

void fcn.00010dcd(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00010d65();
    fcn.00010da9(uVar1 & param_1 | param_2);
    return;
}


/* fcn.00010d65 @ 0x10d65 */

uint __fastcall fcn.00010d65(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00010da9 @ 0x10da9 */

void __fastcall fcn.00010da9(uint32_t param_1,uint32_t param_2,uint param_3)

{
    *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff) = param_3;
    return;
}


/* fcn.000103aa @ 0x103aa */

void fcn.000103aa(void)

{
    uint32_t uVar1;
    int iVar2;
    int16_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    
    uVar5 = 0;
    iVar3 = fcn.00010866(0xfd000,0);
    if (iVar3 != -1) {
        fcn.00010842(0xfd004,0);
        fcn.000108e6(0xfd010,0);
        fcn.000107ed(0xfd004,0);
        fcn.00010929(0xfd0dc,0);
        iVar2 = *0x1044;
        uVar4 = 0;
        puVar6 = 0xfe010084;
        do {
            uVar1 = *(iVar2 + 0x3b5f + uVar4 * 8);
            if ((uVar1 & 3) != 0) {
                *0xfe01000c = *0xfe01000c | 0x100 << (uVar4 & 0x1f);
                *puVar6 = ((*(iVar2 + 0x3b63 + uVar4 * 8) & 0x7fff | uVar1 << 0xf) << 2 | uVar1 & 2) << 0xe |
                          *(iVar2 + 0x3b65 + uVar4 * 8) & 0x7fff;
            }
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
        } while (uVar4 < 5);
        for (; ((*0xfe010004 & 0x20) != 0 && (uVar5 < 0x5b8d81)); uVar5 = uVar5 + 10) {
            fcn.00010c82();
        }
        *0xfe010004 = *0xfe010004 | 0x881f;
        *0xfe0100c4 = *0xfe0100c4 | 0x40000000;
    }
    return;
}


/* fcn.00010f22 @ 0x10f22 */

uchar __cdecl fcn.00010f22(int32_t arg_8h,int32_t arg_ch)

{
    uchar uVar1;
    int8_t var_4h;
    
    uVar1 = fcn.000107ed(arg_8h,arg_ch);
    fcn.00010ec9(arg_8h,arg_ch);
    return uVar1;
}


/* fcn.00010ec9 @ 0x10ec9 */

//WARNING: Removing unreachable block (ram,0x00010eda)

void __cdecl fcn.00010ec9(int32_t arg_8h,int32_t arg_ch)

{
    fcn.000109b0(arg_8h & 0xfff,0);
    return;
}


/* fcn.000109b0 @ 0x109b0 */

//WARNING: Removing unreachable block (ram,0x000109c9)

int64_t __cdecl fcn.000109b0(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00010efa @ 0x10efa */

uchar __cdecl fcn.00010efa(int32_t arg_8h,int32_t arg_ch)

{
    uchar uVar1;
    int8_t var_4h;
    
    uVar1 = fcn.0001076c(arg_8h,arg_ch);
    fcn.00010ec9(arg_8h,arg_ch);
    return uVar1;
}


/* fcn.00010a0c @ 0x10a0c */

uint __fastcall fcn.00010a0c(uint param_1)

{
    int iVar1;
    int *piVar2;
    int32_t arg_8h;
    
    iVar1 = fcn.00010b59(param_1);
    if (iVar1 == 0) {
        return 0;
    }
    piVar2 = fcn.000109d7();
    if (piVar2 != NULL) {
        iVar1 = *piVar2;
        if ((iVar1 == 0) || (iVar1 == 1)) {
            piVar2 = NULL;
            arg_8h = 0;
        }
        else if (iVar1 == 2) {
            piVar2 = NULL;
            arg_8h = 0;
        }
        else {
            if (iVar1 != 3) {
                return 1;
            }
            piVar2 = piVar2 + 1;
            arg_8h = 0x24;
        }
        fcn.00010980(arg_8h,piVar2);
    }
    return 1;
}


/* fcn.000109d7 @ 0x109d7 */

void __fastcall fcn.000109d7(uint param_1)

{
    int iVar1;
    uint *puVar2;
    
    if (*0x1040 == NULL) {
        iVar1 = fcn.00010b59(param_1);
        if (iVar1 == 0) {
            puVar2 = fcn.00010bcc();
            if (puVar2 == NULL) {
                return;
            }
            *puVar2 = 0xff;
        }
        else {
            puVar2 = iVar1 + 0x18;
        }
        *0x1040 = puVar2;
    }
    return;
}


/* fcn.00010bcc @ 0x10bcc */

int __fastcall fcn.00010bcc(uint param_1)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.00010b93(param_1);
    if (iVar1 == 0) {
        return 0;
    }
    fcn.00010ac7();
    return extraout_EDX + 0x18;
}


/* fcn.00010b93 @ 0x10b93 */

int32_t __fastcall fcn.00010b93(uint param_1,uint param_2)

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


/* fcn.00010ac7 @ 0x10ac7 */

uint * __fastcall fcn.00010ac7(uint *param_1)

{
    *param_1 = *0xfe0;
    param_1[1] = *0xfe4;
    param_1[2] = *0xfe8;
    param_1[3] = *0xfec;
    return param_1;
}


/* fcn.00010980 @ 0x10980 */

void __cdecl fcn.00010980(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x80))();
    return;
}


/* fcn.000104e8 @ 0x104e8 */

void fcn.000104e8(void)

{
    char cVar1;
    uint16_t uVar2;
    uint uVar3;
    int16_t iVar4;
    
    uVar2 = fcn.00010d85();
    uVar3 = 0x80000000;
    *0xfe001e20 = *0xfe001e20 | 0x80000000;
    cVar1 = fcn.00010d10();
    if (cVar1 != '\0') {
        uVar3 = 0x800000;
    }
    fcn.00010dcd(0xffffffff,uVar3);
    fcn.000103aa();
    *0xfe001026 = *0xfe001026 | 4;
    if (((*(*0x1044 + 0x3a74) >> 2 & 1) != 0) || ((*(*0x1044 + 0x3a74) >> 1 & 1) != 0)) {
        fcn.00010f22(0xfd0dc,0);
        fcn.00010efa(0xfd0dc,0);
    }
    if (((*(*0x1044 + 0x3a74) >> 2 & 1) != 0) || ((*(*0x1044 + 0x3a74) >> 1 & 1) != 0)) {
        fcn.00010f22(0xf80dc,0);
        fcn.00010efa(0xf80dc,0);
    }
    iVar4 = (uVar2 & 0xffe0) + 8;
    uVar2 = in(iVar4);
    out(iVar4,uVar2 | 0x1000);
    *0xfe00104c = *0xfe00104c | 1;
    *0xfe001818 = *0xfe001818 | 0x8400000;
    return;
}


/* fcn.00010de8 @ 0x10de8 */

void fcn.00010de8(void)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = fcn.000108a8(0xa0010,0);
    if ((uVar2 & 0xfffffff0) != 0xfffffff0) {
        if (((uVar2 & 0xffff0000) == 0) && (iVar3 = fcn.000108a8(0xa0014,0), iVar3 == 0)) {
            return;
        }
        uVar1 = fcn.000108a8(0xa0004,0);
        if ((uVar1 & 6) != 6) {
            fcn.00010929(0xa0004,0);
        }
    }
    return;
}


/* fcn.00010d21 @ 0x10d21 */

bool __fastcall fcn.00010d21(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00010d32(param_1);
    return cVar1 == '\a';
}


/* fcn.00010d32 @ 0x10d32 */

int __fastcall fcn.00010d32(uint param_1)

{
    uint uVar1;
    
    uVar1 = fcn.00010cc1(param_1);
    return CONCAT31(uVar1 >> 8,(uVar1 & 0xffe0) == 0x7a00) * 2 + 7;
}


/* fcn.00010cc1 @ 0x10cc1 */

void fcn.00010cc1(void)

{
    fcn.00010866(0xf8002,0);
    return;
}


/* fcn.00010d54 @ 0x10d54 */

bool __fastcall fcn.00010d54(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00010cd2(param_1);
    return cVar1 == '\x03';
}


/* fcn.00010220 @ 0x10220 */

uint * fcn.00010220(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    //[00] -r-x section size 3456 named .text
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


/* fcn.00010a66 @ 0x10a66 */

uint __thiscall fcn.00010a66(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
    uint uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    param_1[0x20] = *param_4;
    uVar2 = 0;
    param_1[0x21] = param_4[1];
    param_1[0x22] = param_4[2];
    param_1[0x23] = param_4[3];
    *param_1 = 0x100d0;
    do {
        if ((param_1[1] & 1) == 0) {
code_r0x00010ab8:
            if ((param_1[1] & 2) != 0) {
                uVar1 = 0x80000007;
            }
            return uVar1;
        }
        if (100000 < uVar2) {
            uVar1 = 0x80000012;
            goto code_r0x00010ab8;
        }
        fcn.00010c82();
        uVar2 = uVar2 + 1;
    } while( true );
}


/* fcn.00010b0d @ 0x10b0d */

int32_t fcn.00010b0d(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00010ae9 @ 0x10ae9 */

uint32_t __fastcall fcn.00010ae9(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00010b38 @ 0x10b38 */

int16_t * __fastcall fcn.00010b38(uint param_1,int16_t *param_2)

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


/* fcn.00010e3e @ 0x10e3e */

//WARNING: Removing unreachable block (ram,0x00010e56)
//WARNING: Removing unreachable block (ram,0x00010e74)

uint __cdecl fcn.00010e3e(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid(0x15);
    uVar3 = puVar1[1];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar3;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return 0x15;
}


