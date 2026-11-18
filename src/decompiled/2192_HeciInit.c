// decompiled by r2ghidra: 2192_HeciInit.pe32
// functions: 80

/* entry0 @ 0x10346 */

void entry0(void)

{
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0x2e7c);
    var_4h = &var_14h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffea + -4) + 0x24))(*(stack0xffffffea + -4),0x2e70);
    return;
}


/* main @ 0x1073d */

void __cdecl main(char **envp)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00012d5c @ 0x12d5c */

uint fcn.00012d5c(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00010d88 @ 0x10d88 */

uint fcn.00010d88(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int32_t var_4h;
    
    uVar1 = fcn.00010c4a(0xb0040,0);
    uVar2 = fcn.00010c4a(0xb0064,0);
    iVar3 = fcn.00012cf5();
    if ((~(*(iVar3 + 4) >> 0xd) & 1) == 0) {
        if ((uVar2 & 0x200) != 0) {
            return 9;
        }
        uVar2 = uVar1 >> 0x10 & 0xf;
        if (uVar2 == 2) {
            return 7;
        }
        if (uVar2 == 7) {
            return 8;
        }
        if (uVar2 != 4) {
            if (uVar2 == 3) {
                return 5;
            }
            if ((uVar1 & 0xf0000) == 0x50000) {
                return 4;
            }
            if ((uVar1 & 0xf000) == 0x3000) {
                return 3;
            }
            if ((uVar1 & 0xf) == 2) {
                return 2;
            }
            if (((uVar1 & 0x20) == 0) && ((uVar1 & 0xf000) == 0)) {
                return 0;
            }
            return 1;
        }
    }
    return 6;
}


/* fcn.000119c5 @ 0x119c5 */

void __fastcall fcn.000119c5(char **param_1)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = main(param_1);
    if (-1 < iVar1) {
        fcn.00011afa(param_1);
    }
    return;
}


/* fcn.00011afa @ 0x11afa */

uint __thiscall fcn.00011afa(int param_1,int *param_2)

{
    uint16_t uVar1;
    char cVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    
    iVar4 = 0;
    uVar3 = 0;
    if (*(param_1 + 0x1e) != 0) {
        uVar1 = *(param_1 + 2);
        do {
            if (uVar1 < iVar4 + 0x24U) {
                return 0x8000000e;
            }
            iVar5 = param_1 + 0x24 + iVar4;
            cVar2 = fcn.00010aea();
            if (cVar2 != '\0') {
                *param_2 = iVar5;
                return 0;
            }
            iVar4 = iVar4 + *(iVar5 + 2);
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(param_1 + 0x1e));
    }
    return 0x8000000e;
}


/* fcn.00012d0b @ 0x12d0b */

int fcn.00012d0b(void)

{
    int iVar1;
    
    iVar1 = fcn.00010c4a(0xb0040,0);
    return (-(iVar1 != -1) & 0xffffff15) + 0xee;
}


/* fcn.00010c4a @ 0x10c4a */

uint __cdecl fcn.00010c4a(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00012d2b();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.00012d2b @ 0x12d2b */

void fcn.00012d2b(void)

{
    int iVar1;
    
    iVar1 = fcn.00012d40();
    (**(iVar1 + 0x10))(0x2e60,0x200002);
    return;
}


/* fcn.00012d40 @ 0x12d40 */

char ** __fastcall fcn.00012d40(char **param_1)

{
    int32_t var_4h;
    
    main(param_1);
    return param_1;
}


/* fcn.00010621 @ 0x10621 */

int __fastcall fcn.00010621(int32_t *param_1)

{
    int iVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint8_t uVar2;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00010d19();
    uVar2 = 0;
    uVar3 = extraout_ECX;
    do {
        var_4h = 8;
        iVar1 = fcn.00011557(uVar3,&var_4h,uVar3,7);
        if (-1 < iVar1) {
            *param_1 = var_8h;
            goto code_r0x000106bf;
        }
        uVar2 = uVar2 + 1;
        uVar3 = extraout_ECX_00;
    } while (uVar2 < 3);
    fcn.000108e1();
    uVar3 = 4;
    fcn.00010260(&var_4h,4);
    var_4h = CONCAT31(var_4h._1_3_,0xc);
    var_8h = 4;
    fcn.00011557(uVar3,&var_8h,uVar3,0);
code_r0x000106bf:
    fcn.00010d19();
    return iVar1;
}


/* fcn.00010a86 @ 0x10a86 */

int fcn.00010a86(void)

{
    int iVar1;
    
    iVar1 = fcn.00010a4d();
    if (iVar1 != 0) {
        fcn.00010ad1();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00010a4d @ 0x10a4d */

int32_t __fastcall fcn.00010a4d(uint param_1,uint param_2)

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


/* fcn.00010ad1 @ 0x10ad1 */

uint * __fastcall fcn.00010ad1(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* section..text @ 0x10220 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 11104 named .text
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


/* fcn.00011a19 @ 0x11a19 */

uint __cdecl fcn.00011a19(int32_t arg_8h,int32_t arg_18h)

{
    uint *puVar1;
    uint in_ECX;
    uint in_stack_00000008;
    uint in_stack_0000000c;
    uint in_stack_00000010;
    uint in_stack_00000018;
    uint in_stack_0000001c;
    uint in_stack_00000020;
    int32_t var_14h;
    int32_t var_4h;
    
    puVar1 = fcn.00010a86();
    if (puVar1 != NULL) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0x90000002;
        puVar1[3] = arg_8h;
        puVar1[4] = in_stack_00000008;
        puVar1[5] = in_stack_0000000c;
        puVar1[6] = in_stack_00000010;
        puVar1[7] = arg_18h;
        puVar1[8] = in_stack_00000018;
        puVar1[9] = in_stack_0000001c;
        puVar1[10] = in_stack_00000020;
        puVar1[0xb] = in_ECX;
    }
    fcn.000108f5(0x14);
    return 0;
}


/* fcn.000108f5 @ 0x108f5 */

void __cdecl fcn.000108f5(int32_t arg_8h)

{
    int in_ECX;
    int32_t extraout_ECX;
    int32_t noname_0;
    int in_EDX;
    int16_t var_20ch;
    int16_t var_20ah;
    int32_t var_208h;
    int32_t var_1f8h;
    
    var_20ch = 0x14;
    var_20ah = arg_8h;
    fcn.00010ad1();
    noname_0 = extraout_ECX;
    if ((in_EDX != 0) && (arg_8h != 0)) {
        noname_0 = arg_8h;
        fcn.00010aaa();
    }
    if (in_ECX == 0) {
        in_ECX = 0x2e50;
    }
    fcn.00010885(noname_0,in_ECX,&var_20ch);
    return;
}


/* fcn.000107d9 @ 0x107d9 */

uint __fastcall fcn.000107d9(int16_t *param_1)

{
    char cVar1;
    uint uVar2;
    int16_t iVar3;
    uint extraout_ECX;
    int iVar4;
    ulong uVar5;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    uVar5 = fcn.000107b1();
    if (uVar5 < uVar5 >> 0x20) {
        cVar1 = fcn.00010790(extraout_ECX,uVar5 + 1);
        if (cVar1 == '\0') {
            uVar2 = 0x8000000f;
        }
        else {
            iVar3 = 0x50;
            iVar4 = 0x2eb0 - param_1;
            do {
                *param_1 = iVar3;
                param_1 = param_1 + 1;
                iVar3 = *(iVar4 + param_1);
            } while (iVar3 != 0);
            uVar2 = 0;
            *param_1 = 0;
        }
    }
    else {
        uVar2 = 0x80000005;
    }
    return uVar2;
}


/* fcn.000107b1 @ 0x107b1 */

uint32_t __fastcall fcn.000107b1(int16_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (param_1 == NULL) {
        uVar1 = 0;
    }
    else {
        uVar1 = 0;
        if (*param_1 != 0) {
            do {
                if (param_2 - 1 <= uVar1) {
                    return param_2;
                }
                uVar1 = uVar1 + 1;
            } while (param_1[uVar1] != 0);
        }
    }
    return uVar1;
}


/* fcn.00010790 @ 0x10790 */

bool fcn.00010790(uint param_1,int param_2)

{
    char cVar1;
    
    cVar1 = fcn.0001076a(0x2eb0,param_2 * 2);
    return cVar1 == '\0';
}


/* fcn.0001076a @ 0x1076a */

uint32_t __fastcall fcn.0001076a(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    
    if (param_3 <= param_1) {
        uVar1 = param_4 + param_3;
        if (param_1 < uVar1) goto code_r0x00010788;
        if (param_3 < param_1) goto code_r0x0001078c;
    }
    uVar1 = param_1 + param_2;
    if (uVar1 <= param_3) {
code_r0x0001078c:
        return uVar1 & 0xffffff00;
    }
code_r0x00010788:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.000106cd @ 0x106cd */

void __fastcall fcn.000106cd(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.0001162c();
    uVar2 = fcn.00010c4a(0xb0040,0);
    if ((iVar1 < 0) && (uVar2 == 0xffffffff)) {
        param_1 = fcn.00011abb();
        uVar2 = fcn.00011a7e();
    }
    if (((param_1 == 0) || (param_1 == 3)) && ((uVar2 & 0x10) == 0)) {
        *0xfe001048 = *0xfe001048 & 0xffefffff | 0x80000000;
    }
    else {
        *0xfe001048 = *0xfe001048 & 0xffefffff;
    }
    return;
}


/* fcn.0001173f @ 0x1173f */

void __fastcall fcn.0001173f(uint32_t param_1)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar5 = (param_1 & 7 | 0xb0) * 0x1000;
    iVar2 = fcn.00010c08(uVar5 + 2,0xfffffffd < uVar5);
    if (iVar2 != -1) {
        uVar3 = fcn.00010b0e(uVar5 + 0xa0,0xffffff5f < uVar5);
        if ((uVar3 & 3) == 0) {
            uVar3 = fcn.00010c4a(uVar5 + 0x10,0xffffffef < uVar5);
            uVar3 = uVar3 & 0xfffffff0;
            uVar1 = fcn.00010c4a(uVar5 + 0x10,0xffffffef < uVar5);
            if ((uVar1 & 6) == 4) {
                iVar4 = fcn.00010c4a(uVar5 + 0x14,0xffffffeb < uVar5);
            }
            else {
                iVar4 = 0;
            }
            fcn.00010b8f(uVar5 + 4,0xfffffffb < uVar5);
            if (((uVar3 != 0) || (iVar4 != 0)) && ((uVar3 != 0xfffffff0 || (iVar4 != -1)))) {
                *(uVar3 + 0x800) = *(uVar3 + 0x800) | 4;
            }
            fcn.00010be4(uVar5 + 4,0xfffffffb < uVar5);
        }
    }
    return;
}


/* fcn.00010260 @ 0x10260 */

uint * fcn.00010260(uint *param_1,uint32_t param_2)

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


/* fcn.00010968 @ 0x10968 */

uint __thiscall fcn.00010968(uint32_t *param_1,uint8_t param_2,uint param_3,uint32_t *param_4)

{
    uint uVar1;
    uint32_t uVar2;
    
    param_1[0x20] = *param_4;
    param_1[0x21] = param_4[1];
    param_1[0x22] = param_4[2];
    param_1[0x23] = param_4[3];
    uVar1 = 0;
    *param_1 = param_2 << 0xc | 0xa9;
    uVar2 = 0;
    do {
        if ((param_1[1] & 1) == 0) {
code_r0x000109c6:
            if ((param_1[1] & 2) != 0) {
                uVar1 = 0x80000007;
            }
            return uVar1;
        }
        if (100000 < uVar2) {
            uVar1 = 0x80000012;
            goto code_r0x000109c6;
        }
        fcn.000127c0();
        uVar2 = uVar2 + 1;
    } while( true );
}


/* fcn.00010c08 @ 0x10c08 */

ushort __cdecl fcn.00010c08(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00012d2b();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.00011826 @ 0x11826 */

//WARNING: Removing unreachable block (ram,0x00010d64)

uint32_t __fastcall fcn.00011826(uint32_t param_1)

{
    uint32_t uVar1;
    ushort uVar2;
    uint32_t uVar3;
    
    fcn.00010d19();
    if ((-1 < param_1) && ((param_1 < 2 || (param_1 - 4 < 2)))) {
        uVar3 = (param_1 & 7 | 0xb0) * 0x1000;
        uVar1 = fcn.00010c08(uVar3 + 2,0xfffffffd < uVar3);
        if (uVar1 != -1) {
            fcn.00010b8f(uVar3 + 0xa0,0xffffff5f < uVar3);
            fcn.00010c88(uVar3 + 4,0xfffffffb < uVar3);
            fcn.00010c88(uVar3 + 0x10,0xffffffef < uVar3);
            fcn.00010c88(uVar3 + 0x14,0xffffffeb < uVar3);
            uVar1 = fcn.00010c88(uVar3 + 4,0xfffffffb < uVar3);
        }
        return uVar1;
    }
    uVar1 = param_1 + 1;
    if (1 < param_1) {
        uVar1 = param_1 - 1;
    }
    if ((((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) || (**0xfed00148 != 0x44505346)) ||
       ((*(*0xfed00148 + 0x59) != '\0' || ((*0xfed00148)[0x14] == 0)))) {
        uVar2 = 0x80;
    }
    else {
        uVar2 = *((*0xfed00148)[0x14] + 0x8bc);
        uVar1 = uVar1 & 0xfff | (*0xfed00148)[3];
    }
    out(uVar2,uVar1);
    fcn.00010ccb(0x2f60,uVar1);
    return uVar1;
}


/* fcn.000118f9 @ 0x118f9 */

void __fastcall fcn.000118f9(uint32_t param_1)

{
    uint32_t arg_ch;
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int arg_8h;
    
    uVar3 = (param_1 & 7 | 0xb0) * 0x1000;
    iVar1 = fcn.00010c08(uVar3 + 2,0xfffffffd < uVar3);
    if (iVar1 != -1) {
        arg_8h = uVar3 + 4;
        arg_ch = 0xfffffffb < uVar3;
        fcn.00010c4a(arg_8h,arg_ch);
        fcn.00010c88(arg_8h,arg_ch);
        uVar2 = 0;
        do {
            fcn.00010c88(uVar2 + uVar3 + 0x10,CARRY4(uVar2,uVar3) + (0xffffffef < uVar2 + uVar3));
            uVar2 = uVar2 + 4;
        } while (uVar2 < 0x18);
        fcn.00010c88(arg_8h,arg_ch);
    }
    return;
}


/* fcn.00010c88 @ 0x10c88 */

void __cdecl fcn.00010c88(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00012d2b();
    *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c)) = in_ECX;
    return;
}


/* fcn.00010d19 @ 0x10d19 */

uint32_t __fastcall fcn.00010d19(uint32_t param_1,int param_2)

{
    ushort uVar1;
    
    if ((((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) || (**0xfed00148 != 0x44505346)) ||
       ((*(*0xfed00148 + 0x59) != '\0' || ((*0xfed00148)[0x14] == 0)))) {
        uVar1 = 0x80;
    }
    else {
        uVar1 = *((*0xfed00148)[0x14] + 0x8bc);
        param_1 = param_1 & 0xfff | (*0xfed00148)[3];
    }
    out(uVar1,param_1);
    if (param_2 == 0) {
        fcn.00010ccb(0x2f4c,param_1);
    }
    else {
        fcn.00010ccb(0x2f60,param_1);
    }
    return param_1;
}


/* fcn.00011557 @ 0x11557 */

int __fastcall fcn.00011557(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
    int iVar1;
    
    iVar1 = fcn.0001143e(param_1,param_1,param_6);
    if ((-1 < iVar1) && (iVar1 = fcn.000112b1(param_2,param_4), -1 < iVar1)) {
        return iVar1;
    }
    fcn.000108e1();
    return iVar1;
}


/* fcn.000108e1 @ 0x108e1 */

void __fastcall fcn.000108e1(uint param_1)

{
    fcn.00010885(param_1,0x2e50,0);
    return;
}


/* fcn.00010885 @ 0x10885 */

uint32_t __cdecl fcn.00010885(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    uint32_t uVar1;
    char in_CL;
    int32_t var_ch;
    int32_t var_4h;
    
    if (((in_CL == '\x01') || (in_CL == '\x02')) || (in_CL == '\x03')) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4));
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.0001162c @ 0x1162c */

uint __fastcall fcn.0001162c(uint *param_1)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.00010c08(0xb0002,0);
    if (iVar1 == -1) {
        fcn.000108e1();
        *param_1 = 6;
        return 0x8000000e;
    }
    iVar2 = fcn.00012cf5();
    if ((~(*(iVar2 + 4) >> 0xd) & 1) != 0) {
code_r0x000116bc:
        *param_1 = 4;
        return 0;
    }
    uVar3 = fcn.00010c4a(0xb0040,0);
    uVar3 = uVar3 >> 0x10 & 0xf;
    if (uVar3 == 0) {
        *param_1 = 0;
        return 0;
    }
    uVar4 = 2;
    if ((uVar3 == 2) || (uVar4 = 3, uVar3 == 3)) {
code_r0x000116b8:
        *param_1 = uVar4;
    }
    else {
        if (3 < uVar3) {
            if (uVar3 < 6) goto code_r0x000116bc;
            uVar4 = 7;
            if (uVar3 == 7) goto code_r0x000116b8;
        }
        *param_1 = 6;
    }
    return 0;
}


/* fcn.00011abb @ 0x11abb */

char __fastcall fcn.00011abb(uint param_1)

{
    char cVar1;
    uint32_t uVar2;
    
    uVar2 = fcn.00011a7e(param_1);
    if (uVar2 == 0) {
        cVar1 = '\x06';
    }
    else {
        uVar2 = uVar2 >> 0x10 & 0xf;
        if (uVar2 == 0) {
            return '\0';
        }
        if (uVar2 == 2) {
            cVar1 = '\x02';
        }
        else {
            if (uVar2 != 3) {
                return (-(1 < uVar2 - 4) & 2U) + 4;
            }
            cVar1 = '\x03';
        }
    }
    return cVar1;
}


/* fcn.00011a7e @ 0x11a7e */

uint fcn.00011a7e(void)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    
    uVar3 = 0;
    fcn.000109d5();
    iVar1 = fcn.00010a21();
    if (iVar1 != 0) {
        uVar2 = 0;
        do {
            if (*(uVar2 * 4 + 0x2fb0) == 0x40) goto code_r0x00011aaf;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 6);
        uVar2 = 0xff;
code_r0x00011aaf:
        if (uVar2 != 0xff) {
            uVar3 = *(iVar1 + 0x20 + uVar2 * 4);
        }
    }
    return uVar3;
}


/* fcn.00010aaa @ 0x10aaa */

int __fastcall fcn.00010aaa(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000127c0 @ 0x127c0 */

uint __fastcall fcn.000127c0(uint param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = fcn.00012728();
    uVar3 = fcn.00012861(param_1,0,uVar2);
    uVar1 = uVar3 >> 0x20;
    fcn.0001279f((uVar1 % 1000000 << 0x20 | uVar3 & 0xffffffff) / 1000000,uVar1 / 1000000);
    return param_1;
}


/* fcn.00012728 @ 0x12728 */

ulong fcn.00012728(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.00012804(&var_8h,&var_ch);
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


/* fcn.00012861 @ 0x12861 */

ulong fcn.00012861(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    return CONCAT44((param_3 * param_1 >> 0x20) + param_1 * param_4 + param_3 * param_2,param_3 * param_1);
}


/* fcn.0001279f @ 0x1279f */

void fcn.0001279f(uint32_t param_1,int param_2)

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


/* fcn.00010aea @ 0x10aea */

uint32_t __fastcall fcn.00010aea(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00010a00 @ 0x10a00 */

int16_t * __fastcall fcn.00010a00(uint param_1,int16_t *param_2)

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


/* fcn.00010b0e @ 0x10b0e */

uchar __cdecl fcn.00010b0e(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00012d2b();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.00010b4c @ 0x10b4c */

uchar __cdecl fcn.00010b4c(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uchar in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00012d2b();
    *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c)) = in_CL;
    return in_CL;
}


/* fcn.00011bd9 @ 0x11bd9 */

uint32_t __cdecl fcn.00011bd9(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t in_ECX;
    int32_t *piVar4;
    int iVar5;
    uint32_t in_EDX;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t *puVar8;
    uint32_t *puVar9;
    bool bVar10;
    bool bVar11;
    uint8_t uStack_7f;
    uint32_t uStack_7c;
    uint32_t *puStack_78;
    int iStack_74;
    uint32_t *puStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [11];
    
    puStack_70 = NULL;
    if (in_EDX == 0) {
        if ((arg_8h & 0x2000U) != 0) goto code_r0x00011c17;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x00011c17:
        if (arg_ch == 0) {
            return 0;
        }
    }
    if ((arg_8h & 0x40U) == 0) {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 1;
    }
    else {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 2;
    }
    if ((arg_8h & 0x100U) == 0) {
        uVar3 = fcn.00010837();
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_74 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar3 = fcn.000107b1();
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_74 = 2;
        uStack_54 = 0xffff;
    }
    if ((arg_8h & 0x2000U) == 0) {
        if (in_EDX == 0) {
            return 0;
        }
    }
    else {
        in_ECX = in_ECX & -(in_EDX != 0);
    }
    uStack_58 = 0;
    uStack_38 = 0;
    uStack_64 = 0;
    if (in_ECX != 0) {
        uStack_38 = in_ECX;
        uStack_58 = (in_EDX - 1) * uStack_5c + in_ECX;
    }
    if (iStack_74 == 1) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar3) & uStack_54;
    uVar3 = 0;
    uStack_7c = in_ECX;
    if (uStack_50 != 0) {
code_r0x00011d04:
        if ((uStack_7c == 0) || (uStack_7c < uStack_58)) {
            uStack_68 = 1;
            arg_8h = arg_8h & 0x2140;
            uStack_48 = 0;
            uStack_7f = 0;
            bVar11 = false;
            bVar10 = false;
            uStack_60 = 0;
            uStack_44 = 0;
            uStack_6c = arg_8h;
            if (uStack_50 == 10) goto code_r0x0001234e;
            if (uStack_50 == 0xd) goto code_r0x00011f93;
            puVar8 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00011d74:
code_r0x00011d78:
                arg_ch = puVar8 + iStack_74;
                if (iStack_74 == 1) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = *(arg_ch + 1) << 8;
                }
                uStack_50 = (*arg_ch | uVar3) & uStack_54;
                if (uStack_50 < 0x2e) {
                    if (uStack_50 == 0x2d) {
                        arg_8h = arg_8h | 1;
                        goto code_r0x00011f00;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar8;
                        goto code_r0x00011f13;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00011f00;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x00011f13;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00011f00;
                    }
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x200;
                        if (puStack_70 == NULL) {
                            puVar9 = arg_10h + 4;
                            arg_10h = puVar9;
                        }
                        else {
                            puVar9 = puStack_70 + 1;
                            puStack_70 = puVar9;
                        }
                        uStack_48 = puVar9[-1];
                        puVar8 = arg_ch;
                        uStack_6c = arg_8h;
                    }
                    else {
                        if (puStack_70 == NULL) {
                            puVar9 = arg_10h + 4;
                            arg_10h = puVar9;
                        }
                        else {
                            puVar9 = puStack_70 + 1;
                            puStack_70 = puVar9;
                        }
                        uStack_68 = puVar9[-1];
                        puVar8 = arg_ch;
                    }
                    goto code_r0x00011d74;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00011f00;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x00011f13;
                    if (0x39 < uStack_50) goto code_r0x00011e64;
                }
                uVar3 = 0;
                uStack_60 = 0;
                if (0x2f < uStack_50) {
                    do {
                        if (0x39 < uStack_50) break;
                        arg_ch = arg_ch + iStack_74;
                        uVar3 = (uStack_50 - 0x30) + uVar3 * 10;
                        if (iStack_74 == 1) {
                            uVar7 = 0;
                        }
                        else {
                            uVar7 = *(arg_ch + 1) << 8;
                        }
                        uStack_50 = (*arg_ch | uVar7) & uStack_54;
                    } while (0x2f < uStack_50);
                    arg_8h = uStack_6c;
                    uStack_60 = uVar3;
                }
                puVar8 = arg_ch + -iStack_74;
                if ((arg_8h & 0x800U) == 0) {
                    arg_8h = arg_8h | 0x200;
                    uStack_48 = uStack_60;
                    uStack_6c = arg_8h;
                }
                else {
                    uStack_68 = uStack_60;
                }
                goto code_r0x00011d78;
            }
            goto code_r0x00011d5d;
        }
        goto code_r0x000126c4;
    }
code_r0x000126c8:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00011b5b(1,0,uStack_5c);
        uVar3 = uStack_7c - uStack_38;
    }
    return uVar3 / uStack_5c;
code_r0x00011e64:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x00011f13;
    arg_8h = arg_8h | 0x10;
code_r0x00011f00:
    puVar8 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00011d74;
code_r0x00011f13:
    uVar3 = arg_8h;
    puVar8 = arg_ch;
    if (uStack_50 < 0x68) {
        if (uStack_50 == 0x67) {
            if (puStack_70 == NULL) {
                piVar4 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                piVar4 = *puStack_70;
                puStack_70 = puStack_70 + 1;
            }
            if (piVar4 == NULL) {
                puStack_78 = 0x2fd8;
            }
            else {
                fcn.00012709(auStack_30,0x26,0,0x2fe4,*piVar4);
code_r0x00012043:
                puStack_78 = auStack_30;
            }
code_r0x00012047:
            puVar8 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x0001234e:
            puVar8 = arg_ch + iStack_74;
            puStack_78 = 0x3048;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 != 0xd) {
                puVar8 = arg_ch;
            }
        }
        else {
            if (uStack_50 != 0xd) {
                if (uStack_50 == 0x53) goto code_r0x000120e3;
                if (uStack_50 == 0x58) goto code_r0x000121be;
                if (uStack_50 == 0x61) goto code_r0x000120ed;
                if (uStack_50 == 99) {
                    if (puStack_70 == NULL) {
                        uVar1 = *arg_10h;
                        arg_10h = arg_10h + 4;
                    }
                    else {
                        uVar1 = *puStack_70;
                        puStack_70 = puStack_70 + 1;
                    }
                    uStack_40 = uVar1;
                    puStack_78 = &uStack_40;
                    goto code_r0x00011d61;
                }
                if (uStack_50 != 100) goto code_r0x00011d5d;
                goto code_r0x000121d4;
            }
code_r0x00011f93:
            puVar8 = arg_ch + iStack_74;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 == 10) {
                puStack_78 = 0x3048;
                arg_ch = puVar8;
                goto code_r0x00012047;
            }
            puStack_78 = 0x304c;
            puVar8 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x000121be:
            arg_8h = arg_8h | 0x20;
code_r0x000121c1:
            uVar3 = arg_8h | 0x80;
        }
        else {
            if (uStack_50 == 0x72) {
                if (puStack_70 == NULL) {
                    uVar3 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar3 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                puStack_78 = auStack_30;
                if (uVar3 < 0) {
                    if ((uVar3 & 0x7fffffff) - 1 < 0x21) {
                        puStack_78 = (uVar3 & 0x7fffffff) * 0x15 + 0x30d3;
                        goto code_r0x0001218f;
                    }
                }
                else if (uVar3 < 6) {
                    puStack_78 = uVar3 * 0x19 + 0x3050;
code_r0x0001218f:
                    if (puStack_78 != auStack_30) goto code_r0x0001238b;
                }
                fcn.00012709(auStack_30,0x26,0,0x3040,uVar3);
                goto code_r0x0001238b;
            }
            if (uStack_50 == 0x73) {
code_r0x000120e3:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x000120ed:
                if (puStack_70 == NULL) {
                    puStack_78 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    puStack_78 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                if (puStack_78 == NULL) {
                    arg_8h = arg_8h & 0xfffffbff;
                    puStack_78 = 0x2fc8;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x0001238b;
            }
            if (uStack_50 == 0x74) {
                if (puStack_70 == NULL) {
                    uVar3 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar3 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                if (uVar3 != 0) {
                    fcn.00012709(auStack_30,0x26,0,0x3024,*(uVar3 + 2));
                    goto code_r0x00012043;
                }
                puStack_78 = 0x3018;
                goto code_r0x00012047;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x00011d5d:
                    puStack_78 = &uStack_50;
code_r0x00011d61:
                    arg_8h = arg_8h | 0x400;
                    puVar8 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x0001238b;
                }
                goto code_r0x000121c1;
            }
        }
        if (-1 < uVar3) {
            uVar3 = uVar3 & 0xfffffffd | 0x4000;
        }
code_r0x000121d4:
        if ((uVar3 & 0x10) == 0) {
            if (puStack_70 == NULL) {
                uVar7 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                uVar7 = *puStack_70;
                puStack_70 = puStack_70 + 1;
            }
            uVar6 = uVar7 >> 0x1f;
        }
        else if (puStack_70 == NULL) {
            uVar7 = *arg_10h;
            uVar6 = *(arg_10h + 4);
            arg_10h = arg_10h + 8;
        }
        else {
            uVar7 = *puStack_70;
            uVar6 = puStack_70[1];
            puStack_70 = puStack_70 + 2;
        }
        uStack_7f = (uVar3 & 4) << 3;
        if ((uVar3 & 2) != 0) {
            uStack_7f = 0x2b;
        }
        bVar11 = (uVar3 & 8) != 0;
        if (uVar3 < '\0') {
            bVar11 = false;
            if ((((uVar3 & 0x10) == 0) && (uVar6 < 1)) && (uVar6 < 0)) {
code_r0x000122a1:
                uVar6 = 0;
            }
        }
        else {
            if ((uVar3 & 8) != 0) {
                uVar3 = uVar3 & 0xffffffdf;
                uStack_68 = 1;
            }
            if (((uVar6 < 1) && (uVar6 < 0)) && ((uVar3 & 0x4000) == 0)) {
                uStack_7f = 0x2d;
                bVar10 = uVar7 != 0;
                uVar7 = -uVar7;
                uVar6 = -(uVar6 + bVar10);
            }
            else if ((uVar3 & 0x4010) == 0x4000) goto code_r0x000122a1;
        }
        iVar5 = fcn.00011b8f(uVar7,uVar6);
        uStack_60 = iVar5 - auStack_30;
        if (uVar7 == 0 && uVar6 == 0) {
            uStack_60 = uStack_60 & -(uStack_68 != 0);
        }
        puStack_78 = auStack_30 + uStack_60;
        uStack_44 = uStack_60 % 3;
        if (uStack_44 != 0) {
            uStack_44 = 3 - uStack_44;
        }
        if ((bVar11) && (uStack_60 != 0)) {
            uStack_60 = uStack_60 + (uStack_60 - 1) / 3;
        }
        if (uStack_7f != 0) {
            uStack_60 = uStack_60 + 1;
            uStack_68 = uStack_68 + 1;
        }
        arg_8h = uVar3 | 0x1000;
        bVar10 = true;
        uStack_6c = arg_8h;
        if ((uVar3 & 0xa21) == 0x220) {
            uStack_68 = uStack_48;
        }
    }
code_r0x0001238b:
    arg_ch = puVar8;
    uVar3 = arg_8h & 0x400;
    uStack_4c = uVar3;
    uStack_4c = (uVar3 != 0) + 1;
    uStack_3c = (-(uVar3 != 0) & 0xff00) + 0xff;
    if ((arg_8h & 0x1000U) == 0) {
        uStack_60 = 0;
        puVar9 = puStack_78;
        while ((((*puVar9 != '\0' || ((uVar3 != 0 && (*(puVar9 + 1) != '\0')))) &&
                ((uStack_60 < uStack_68 || ((arg_8h & 0x800U) == 0)))) &&
               ((uStack_3c & CONCAT11(*(puVar9 + 1),*puVar9)) != 0))) {
            uStack_60 = uStack_60 + 1;
            puVar9 = puVar9 + uStack_4c;
        }
    }
    else {
        uStack_4c = -uStack_4c;
    }
    if (uStack_68 < uStack_60) {
        uStack_68 = uStack_60;
    }
    uStack_34 = arg_8h & 0x201U;
    if ((arg_8h & 0x201U) == 0x200) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00011b5b(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar10) {
        if (((uStack_7f != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_7c != 0)) {
            uStack_7c = fcn.00011b5b(1,uStack_7f,uStack_5c);
        }
        iVar5 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar5 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_7c == 0)) goto code_r0x00012562;
        uVar3 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00011b5b(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7f == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_7c == 0))
        goto code_r0x00012562;
        uVar3 = uStack_7f;
        iVar5 = 1;
    }
    uStack_7c = fcn.00011b5b(iVar5,uVar3,uStack_5c);
code_r0x00012562:
    uVar3 = arg_8h & 0x2000;
    if ((uStack_7f != 0) < uStack_60) {
        uVar7 = uStack_4c;
        puVar9 = puStack_78;
        puStack_78 = uStack_7f != 0;
        do {
            if ((*puVar9 == '\0') && ((uVar7 < 2 || (*(puVar9 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar3 == 0) && (uStack_7c != 0)) {
                uStack_7c = fcn.00011b5b(1,CONCAT11(*(puVar9 + 1),*puVar9) & uStack_3c,uStack_5c);
            }
            uVar6 = uStack_4c;
            puVar9 = puVar9 + uVar7;
            puVar2 = puStack_78 + 1;
            if (bVar11) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x00012643;
                puStack_78 = puStack_78 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_78) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar7 = uStack_4c;
                if ((uVar3 == 0) && (uStack_7c != 0)) {
                    uStack_7c = fcn.00011b5b(1,0x2c,uStack_5c);
                    uVar7 = uVar6;
                    puVar2 = puStack_78;
                    goto code_r0x00012643;
                }
            }
            else {
code_r0x00012643:
                puStack_78 = puVar2;
            }
        } while (puStack_78 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar3 == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00011b5b(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    arg_ch = arg_ch + iStack_74;
    if (iStack_74 == 1) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar3) & uStack_54;
    if (uStack_50 == 0) goto code_r0x000126c4;
    goto code_r0x00011d04;
code_r0x000126c4:
    uVar3 = uStack_64;
    goto code_r0x000126c8;
}


/* fcn.00012880 @ 0x12880 */

uint __cdecl fcn.00012880(uint32_t arg_8h)

{
    char cVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint noname_0;
    int32_t in_EDX;
    int iStack_50;
    
    if (arg_8h != 0) {
        cVar1 = fcn.0001291f();
        if (cVar1 == '\0') {
            return 0x80000015;
        }
        fcn.00012a87(extraout_ECX);
        fcn.00012ac5(&stack0xffffff50,extraout_ECX_00);
        if (iStack_50 == 0) {
            return 0x80000007;
        }
        fcn.000129ca(noname_0,noname_0,arg_8h,in_EDX);
    }
    return 0;
}


/* fcn.00010ccb @ 0x10ccb */

void __cdecl fcn.00010ccb(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t arg_8h_00;
    uint32_t var_104h;
    
    fcn.00011bd9(0,arg_8h,&arg_ch);
    arg_8h_00 = 0;
    while (var_104h != '\0') {
        var_104h._0_1_ = *(&var_104h + arg_8h_00 + 1);
        arg_8h_00 = arg_8h_00 + 1;
    }
    fcn.00012880(arg_8h_00);
    return;
}


/* fcn.00012cf5 @ 0x12cf5 */

uint32_t fcn.00012cf5(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00010c4a(0xfd010,0);
    return uVar1 & 0xfffff000;
}


/* fcn.00010e49 @ 0x10e49 */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.00010e49(uint param_1)

{
    uint uVar1;
    
    uVar1 = fcn.00010d88(param_1);
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return 0;
    }
}


/* fcn.0001085e @ 0x1085e */

//WARNING: Removing unreachable block (ram,0x00010877)

int64_t __cdecl fcn.0001085e(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00010b8f @ 0x10b8f */

uint8_t __cdecl fcn.00010b8f(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.00010b0e(arg_8h,arg_ch);
    iVar2 = fcn.00012d2b();
    *(iVar2 + (arg_8h | (arg_ch & 1U) << 0x1c)) = uVar1 | in_CL;
    return uVar1 | in_CL;
}


/* fcn.000116d1 @ 0x116d1 */

void __fastcall fcn.000116d1(int *param_1,int *param_2,int param_3)

{
    int iVar1;
    
    if (*0x3420 == 0) {
        *0x3420 = -0x1300000;
    }
    iVar1 = *0x3420;
    *(*0x3420 + 0x10) = *(*0x3420 + 0x10) | 1;
    iVar1 = *(iVar1 + 0xf0);
    *param_1 = iVar1;
    *param_2 = param_3 * 0x18 + iVar1;
    return;
}


/* fcn.00011705 @ 0x11705 */

uint __fastcall fcn.00011705(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    unkbyte3 Var2;
    
    if (*0x3420 == 0) {
        *0x3420 = -0x1300000;
    }
    uVar1 = *(*0x3420 + 0xf0);
    Var2 = uVar1 >> 8;
    if (((param_2 <= param_1) || ((uVar1 < param_2 && (param_1 <= uVar1)))) &&
       ((param_1 <= param_2 || ((param_1 <= uVar1 || (uVar1 <= param_2)))))) {
        return CONCAT31(Var2,param_1 == param_2);
    }
    return CONCAT31(Var2,1);
}


/* fcn.0001102a @ 0x1102a */

uint32_t fcn.0001102a(uint param_1)

{
    uint8_t uVar1;
    
    uVar1 = (param_1 >> 0x10) - (param_1 >> 8);
    if (param_1 >> 0x18 < uVar1) {
        return 0xffffffff;
    }
    return uVar1;
}


/* fcn.000119f5 @ 0x119f5 */

uint __fastcall fcn.000119f5(int param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.00011995(param_1);
    if ((iVar1 < 0) || ((*(param_1 + 0x1c) & 1) != 0)) {
        uVar2 = 1;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00011049 @ 0x11049 */

uint fcn.00011049(void)

{
    uint64_t uVar1;
    uint8_t uVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int32_t arg_8h;
    int64_t iVar5;
    
    iVar3 = fcn.00010c08(0xb0002,0);
    if (iVar3 != -1) {
        uVar4 = fcn.00010c4a(0xb0010,0);
        uVar1 = uVar4 & 0xfffffff0;
        uVar2 = fcn.00010c4a(0xb0010,0);
        if ((uVar2 & 6) == 4) {
            arg_8h = fcn.00010c4a(0xb0014,0);
            iVar5 = fcn.0001085e(arg_8h,0);
            uVar1 = iVar5 + (uVar4 & 0xfffffff0);
        }
        if (uVar1 != 0) {
            fcn.00010b8f(0xb0004,0);
            return uVar1;
        }
    }
    return 0;
}


/* fcn.000110c4 @ 0x110c4 */

uint32_t __fastcall fcn.000110c4(int param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000116d1(param_2);
    do {
        uVar1 = *(param_1 + 0xc);
        if ((uVar1 & 0x10) != 0) break;
        if ((uVar1 & 8) != 0) {
            return CONCAT31(uVar1 >> 8,1);
        }
        uVar1 = fcn.00011705();
    } while (uVar1 == '\0');
    return uVar1 & 0xffffff00;
}


/* fcn.00011598 @ 0x11598 */

uint fcn.00011598(void)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = fcn.00011049();
    if (iVar2 == 0) {
        fcn.000108e1();
        uVar3 = 0x80000007;
    }
    else {
        if ((*(iVar2 + 4) & 0x10) == 0) {
            *(iVar2 + 4) = *(iVar2 + 4) | 0x14;
        }
        fcn.000116d1(15000000);
        do {
            cVar1 = fcn.00011705();
            if (cVar1 != '\0') goto code_r0x00011618;
        } while ((*(iVar2 + 4) & 8) != 0);
        do {
            cVar1 = fcn.00011705();
            if (cVar1 != '\0') {
code_r0x00011618:
                fcn.000108e1();
                return 0x80000012;
            }
        } while ((*(iVar2 + 0xc) & 8) == 0);
        *(iVar2 + 4) = *(iVar2 + 4) & 0xffffffef | 0xc;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000110fe @ 0x110fe */

uint32_t __fastcall
fcn.000110fe(int param_1,int param_2,uint32_t *param_3,uint param_4,uint32_t *param_5,uint32_t *param_6)

{
    uint16_t uVar1;
    uint uVar2;
    char cVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    
    *param_6 = 0;
    uVar5 = *(param_1 + 0xc);
    iVar4 = fcn.0001102a(uVar5);
    if (param_2 == 0) {
code_r0x0001115d:
        if (iVar4 == 0) {
            uVar5 = 0x80000010;
            goto code_r0x0001119c;
        }
    }
    else {
        fcn.000116d1(param_2);
        if (iVar4 == 0) {
            do {
                cVar3 = fcn.000119f5();
                if ((cVar3 != '\0') && (cVar3 = fcn.00011705(), cVar3 != '\0')) {
                    return 0x80000012;
                }
                uVar5 = *(param_1 + 0xc);
                iVar4 = fcn.0001102a(uVar5);
            } while (iVar4 == 0);
            goto code_r0x0001115d;
        }
    }
    if (iVar4 != -1) {
        uVar9 = *(param_1 + 8);
        *param_3 = uVar9;
        uVar9 = (uVar9 >> 0x10 & 0x1ff) + 3 >> 2;
        if (uVar9 <= uVar5 >> 0x18) {
            fcn.000116d1(5000000);
            do {
                uVar2 = *(param_1 + 0xc);
                cVar3 = fcn.000119f5();
                if ((cVar3 != '\0') && (cVar3 = fcn.00011705(), cVar3 != '\0')) {
                    return 0x80000012;
                }
                uVar5 = fcn.0001102a(uVar2);
            } while (uVar5 < uVar9);
            uVar1 = *(param_3 + 2);
            uVar5 = *param_5;
            uVar8 = 0;
            do {
                if (uVar9 == 0) {
                    *param_5 = uVar8;
                    *param_6 = *(param_3 + 2) & 0x1ff;
                    if ((*(param_1 + 0xc) & 8) != 0) {
                        iVar4 = fcn.0001102a(*(param_1 + 0xc));
                        if (iVar4 == 0) {
                            *(param_1 + 4) = *(param_1 + 4) | 6;
                        }
                        return -(uVar5 < (uVar1 & 0x1ff)) & 0x80000005;
                    }
                    *param_5 = 0;
                    *param_6 = 0;
                    return 0x80000006;
                }
                uVar6 = *param_5;
                if (uVar6 < 5) {
                    if (uVar6 != 0) goto code_r0x00011223;
                }
                else {
                    uVar6 = 4;
code_r0x00011223:
                    fcn.00010aaa(uVar6);
                }
                uVar6 = *param_5;
                if (uVar6 < 5) {
                    uVar7 = uVar6;
                }
                else {
                    uVar7 = 4;
                }
                uVar8 = uVar8 + uVar7;
                if (uVar6 < 5) {
                    uVar7 = uVar6;
                }
                else {
                    uVar7 = 4;
                }
                *param_5 = uVar6 - uVar7;
                uVar9 = uVar9 - 1;
            } while( true );
        }
    }
    uVar5 = 0x80000007;
code_r0x0001119c:
    *param_5 = 0;
    return uVar5;
}


/* fcn.00011995 @ 0x11995 */

void __fastcall fcn.00011995(char **param_1)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = main(param_1);
    if (-1 < iVar1) {
        fcn.00011afa(param_1);
    }
    return;
}


/* fcn.00010eb9 @ 0x10eb9 */

uint __fastcall fcn.00010eb9(char param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = fcn.00010e49();
    if (uVar1 < 0) {
        return 1;
    }
    uVar2 = *param_2 & 0x7f00;
    if ((uVar2 == 0xc00) && (*param_2 == -1)) {
        return 1;
    }
    if ((uVar2 == 0x2000) && (*param_2 == -0x10)) {
        return 1;
    }
    if (((uVar1 & 1) != 0) && (*param_2 == -0x10)) {
        if (uVar2 == 0x100) {
            return 1;
        }
        if (uVar2 == 0xc00) {
            return 1;
        }
    }
    if ((((uVar1 & 4) != 0) && (uVar2 == 0x400)) && (*param_2 == -0x10)) {
        return 1;
    }
    if ((((uVar1 & 8) != 0) && (uVar2 == 0x300)) && (*param_2 == -0x10)) {
        return 1;
    }
    if ((((uVar1 & 0x10) != 0) && (uVar2 == 0xb00)) && (*param_2 == '\0')) {
        return 1;
    }
    if (((uVar1 & 0x20) != 0) && (*param_2 == '\x05')) {
        return 1;
    }
    if (((uVar1 & 0x40) != 0) && (*param_2 == -1)) {
        return 1;
    }
    if ((uVar1 < '\0') && (param_1 == '\0')) {
        return 1;
    }
    if ((((uVar1 & 0x1000) != 0) && (uVar2 == 0x1b00)) && (*param_2 == -0x10)) {
        return 1;
    }
    if ((((uVar1 & 0x200) != 0) && (param_1 == '\a')) && (*param_2 != '\n')) {
        return 1;
    }
    if ((uVar1 & 0x400) != 0) {
        if ((uVar2 == 0x1e00) && (*param_2 == -0x10)) {
            return 1;
        }
        if ((uVar2 == 0x200) && (*param_2 == -0xe)) {
            return 1;
        }
    }
    if ((uVar1 & 0x800) != 0) {
        if (param_1 == '\t') {
            if (*param_2 != '\n') goto code_r0x00010fe9;
            if (uVar2 == 0x500) {
                return 1;
            }
        }
        if (((param_1 == '\a') && (*param_2 == -1)) && (uVar2 == 0x500)) {
            return 1;
        }
    }
code_r0x00010fe9:
    if ((((((uVar1 & 0x2000) == 0) || (uVar2 != 0x2100)) || (*param_2 != -0x10)) &&
        ((((uVar1 & 0x4000) == 0 || (uVar2 != 0x500)) || (*param_2 != -0x10)))) &&
       ((((uVar1 & 0x8000) == 0 || (uVar2 != 0x2300)) || (*param_2 != -0x10)))) {
        return 0;
    }
    return 1;
}


/* fcn.00011399 @ 0x11399 */

int __fastcall fcn.00011399(uint *param_1,uint *param_2,int param_3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    fcn.000116d1(5000000);
    uVar4 = (*(param_2 + 2) & 0x1ff) + 3 >> 2;
    do {
        uVar3 = param_1[1];
        iVar2 = fcn.0001102a(uVar3);
        if (uVar4 + 1 <= (uVar3 >> 0x18) - iVar2) {
            uVar3 = 0;
            *param_1 = *param_2;
            if (uVar4 != 0) {
                do {
                    iVar2 = uVar3 * 4;
                    uVar3 = uVar3 + 1;
                    *param_1 = *(param_3 + iVar2);
                } while (uVar3 < uVar4);
            }
            param_1[1] = param_1[1] | 4;
            return (-((param_1[3] & 8) != 0) & 0x7ffffffa) + 0x80000006;
        }
        cVar1 = fcn.000119f5();
    } while ((cVar1 == '\0') || (cVar1 = fcn.00011705(), cVar1 == '\0'));
    return -0x7fffffee;
}


/* fcn.0001143e @ 0x1143e */

int __fastcall fcn.0001143e(uint param_1,int param_2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iStack_8;
    
    iVar2 = fcn.00011049();
    if (iVar2 == 0) {
        fcn.000108e1();
        iVar2 = -0x7ffffff9;
    }
    else {
        iVar3 = fcn.00011995();
        if (((iVar3 < 0) || ((*(iStack_8 + 0x1c) & 0x20) == 0)) && (cVar1 = fcn.00010eb9(), cVar1 == '\0')) {
            fcn.000108e1();
            return -0x7ffffffd;
        }
        cVar1 = fcn.000110c4();
        if ((cVar1 == '\0') && (iVar3 = fcn.00011598(), iVar3 < 0)) {
            fcn.000108e1();
            return -0x7ffffffa;
        }
        uVar4 = (*(iVar2 + 4) >> 0x18) * 4 - 4;
        uVar6 = 4;
        do {
            if ((uVar4 < uVar6) || (uVar5 = uVar6, uVar4 < uVar6)) {
                uVar5 = uVar4;
            }
            iVar2 = fcn.00011399((param_2 - uVar6) + 4);
            if (iVar2 < 0) {
                fcn.00011598();
                fcn.000108e1();
                return iVar2;
            }
            uVar6 = uVar6 - uVar5;
        } while (uVar6 != 0);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.000112b1 @ 0x112b1 */

int fcn.000112b1(int param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    uStack_8 = 0;
    uStack_c = *param_2;
    uVar3 = 0;
    iVar2 = fcn.00011049();
    if (iVar2 == 0) {
        fcn.000108e1();
        iVar2 = -0x7ffffff9;
    }
    else {
        cVar1 = fcn.000110c4();
        if (cVar1 == '\0') {
            fcn.00011598();
            fcn.000108e1();
            iVar2 = -0x7ffffffa;
        }
        else {
            do {
                iVar2 = fcn.000110fe(&uStack_8,param_1 + (uVar3 & 0xfffffffc),&uStack_c,&iStack_4);
                if ((iVar2 < 0) && (iVar2 != -0x7ffffffb)) {
                    if (iVar2 != -0x7ffffff0) {
                        fcn.00011598();
                    }
                    *param_2 = uVar3;
                    goto code_r0x0001136e;
                }
                uVar3 = uVar3 + iStack_4;
                if (uVar3 < *param_2) {
                    uStack_c = *param_2 - uVar3;
                }
                else {
                    uStack_c = 0;
                }
            } while ((uStack_8 & 0x80000000) == 0);
            *param_2 = uVar3;
            if (iVar2 < 0) {
code_r0x0001136e:
                fcn.000108e1();
            }
        }
    }
    return iVar2;
}


/* fcn.00010be4 @ 0x10be4 */

void fcn.00010be4(int32_t param_1,int32_t param_2)

{
    fcn.00010b0e(param_1,param_2);
    fcn.00010b4c(param_1,param_2);
    return;
}


/* fcn.000109d5 @ 0x109d5 */

int32_t fcn.000109d5(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00010a21 @ 0x10a21 */

int fcn.00010a21(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00010a00();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00010aea();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00010837 @ 0x10837 */

uint32_t __fastcall fcn.00010837(char *param_1,uint32_t param_2)

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


/* fcn.00012709 @ 0x12709 */

void __cdecl fcn.00012709(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00011bd9(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.00011b8f @ 0x11b8f */

uchar * __cdecl fcn.00011b8f(int32_t arg_8h,int32_t arg_ch)

{
    uint64_t uVar1;
    uchar *in_ECX;
    int32_t in_EDX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_ch;
    *in_ECX = 0;
    var_4h = in_EDX;
    do {
        uVar1 = arg_ch;
        arg_ch = arg_ch / var_4h;
        uVar1 = uVar1 % var_4h << 0x20 | arg_8h;
        arg_8h = uVar1 / var_4h;
        if (var_8h != 0) {
            *var_8h = uVar1 % var_4h;
        }
        in_ECX = in_ECX + 1;
        *in_ECX = *(var_ch + 0x33a0);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00011b5b @ 0x11b5b */

uchar * __cdecl fcn.00011b5b(int arg_8h,int32_t arg_ch,int arg_10h)

{
    uchar *in_ECX;
    uchar *in_EDX;
    int iVar1;
    
    iVar1 = 0;
    if (0 < arg_8h) {
        do {
            if (in_EDX <= in_ECX) {
                return in_ECX;
            }
            *in_ECX = arg_ch;
            if (arg_10h != 1) {
                in_ECX[1] = arg_ch >> 8;
            }
            in_ECX = in_ECX + arg_10h;
            iVar1 = iVar1 + 1;
        } while (iVar1 < arg_8h);
    }
    return in_ECX;
}


/* fcn.00012804 @ 0x12804 */

//WARNING: Removing unreachable block (ram,0x0001281c)
//WARNING: Removing unreachable block (ram,0x0001283a)

uint __cdecl fcn.00012804(int32_t arg_8h,int32_t arg_ch)

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


/* fcn.0001291f @ 0x1291f */

uint fcn.0001291f(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uchar uVar5;
    int iVar6;
    
    uVar5 = 0;
    iVar6 = -0x7ffffff9;
    if (*0xfe1000e8 != 0xff) {
        iVar6 = 0;
    }
    uVar1 = (*0xfe1000e8 == 0xff) - 1U & *0xfe1000e8;
    if ((-1 < iVar6) && ((uVar1 & 1) != 0)) {
        uVar1 = uVar1 >> 1;
        uVar2 = uVar1 & 3;
        uVar4 = CONCAT31(0xfe1000,uVar1) & 0xffffff03;
        if (((uVar2 != 0) && (uVar2 != 1)) && ((cVar3 = uVar4, cVar3 == '\x02' || (cVar3 == '\x03')))) {
            uVar5 = 1;
        }
        return CONCAT31(uVar4 >> 8,uVar5);
    }
    return 0xfe100000;
}


/* fcn.00012a87 @ 0x12a87 */

void __fastcall fcn.00012a87(uint *param_1)

{
    if (param_1 == NULL) {
        param_1 = 0x34e8;
    }
    if (param_1 != 0x3488) {
        section..text(param_1,0x3488,0x34);
    }
    param_1[1] = 0xffffffff;
    *param_1 = 0x10900;
    param_1[4] = 0x2bf6;
    fcn.00012b41(param_1,0);
    return;
}


/* fcn.00012ac5 @ 0x12ac5 */

int * __fastcall fcn.00012ac5(int param_1,int *param_2,uint param_3)

{
    if (param_2 == NULL) {
        param_2 = 0x3428;
    }
    else {
        if (param_1 == 0) {
            param_1 = 0x34e8;
        }
        if (param_2 != 0x3488) {
            section..text(param_2,0x3488,0x60);
        }
        param_2[1] = param_2[1] & 0xfffffffe;
        param_2[7] = 0;
        *param_2 = param_1;
        if (*(param_1 + 8) != NULL) {
            (**(param_1 + 8))(param_2,param_3);
        }
    }
    return param_2;
}


/* fcn.000129ca @ 0x129ca */

void __cdecl fcn.000129ca(uint noname_0,uint noname_1,int32_t arg_10h,int32_t arg_14h)

{
    char cVar1;
    int *in_ECX;
    int32_t iVar2;
    uint16_t uVar3;
    int32_t var_80h;
    int32_t var_50h;
    int32_t var_2ch;
    int32_t var_4h;
    
    var_4h = &var_2ch;
    if (in_ECX != 0x3428) {
        var_80h = in_ECX[2] & 0xffff80U | 0x1000042;
        fcn.0001295f(arg_10h,&var_80h,&var_4h);
        iVar2 = var_4h;
        if (arg_10h == 0) {
            do {
                uVar3 = arg_10h;
                cVar1 = *((arg_10h & 0xffffU) + arg_14h);
                *(&var_50h + (arg_10h & 0xffffU)) = cVar1;
                if (cVar1 == '\0') break;
                arg_10h = arg_10h + 1;
                uVar3 = arg_10h;
            } while (uVar3 < 0x18);
            if (uVar3 < 0x18) {
                fcn.00010ac0();
            }
            iVar2 = var_4h;
            *var_4h = *0x33c8;
        }
        else {
            var_50h = arg_14h;
            *var_4h = *0x33cc;
            *(iVar2 + 2) = arg_10h;
        }
        *(iVar2 + 4) = *0x33f0;
        (**(*in_ECX + 0x10))();
    }
    return;
}


/* fcn.0001295f @ 0x1295f */

void __thiscall fcn.0001295f(int param_1,int16_t param_2,uint32_t *param_3,int *param_4)

{
    uint uVar1;
    uint *puVar2;
    
    uVar1 = *0x33b0;
    puVar2 = *param_4;
    if (*(param_3 + 2) == -1) {
        param_3[1] = *(param_1 + 0xc);
        param_3[2] = *(param_1 + 0x10);
        param_3[3] = *(param_1 + 0x14);
        param_3[4] = *(param_1 + 0x18);
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
    }
    if ((*param_3 & 0x80) != 0) {
        param_3[5] = *(param_1 + 0x1c);
        *(param_1 + 0x1c) = *(param_1 + 0x1c) + 1;
        *puVar2 = *0x33b4;
        puVar2 = puVar2 + 1;
    }
    if (param_2 != 0) {
        *param_3 = *param_3 | 0x200;
        *(param_3 + 10) = param_2;
        *puVar2 = *0x33c4;
        puVar2 = puVar2 + 1;
    }
    *param_4 = puVar2;
    return;
}


/* fcn.00010ac0 @ 0x10ac0 */

uint __fastcall fcn.00010ac0(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00010260(param_1,param_2);
    return uVar1;
}


/* fcn.00012b41 @ 0x12b41 */

void fcn.00012b41(int param_1,uint param_2)

{
    *(param_1 + 8) = 0x2b15;
    *(param_1 + 0xc) = 0x2b40;
    *(param_1 + 0x30) = param_2;
    *(param_1 + 0x14) = 0x2b9d;
    *(param_1 + 0x18) = 0x2b8e;
    *(param_1 + 0x1c) = 0x2bac;
    *(param_1 + 0x20) = 0x2bba;
    *(param_1 + 0x24) = 0x2bca;
    *(param_1 + 0x28) = 0x2be7;
    *(param_1 + 0x2c) = 0x2bd8;
    return;
}


