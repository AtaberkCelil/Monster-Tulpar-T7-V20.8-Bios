// decompiled by r2ghidra: 2464_OemHooksPei.te
// functions: 41

/* entry0 @ 0x1d5 */

uint entry0(uint param_1,int *param_2)

{
    uchar uVar1;
    uchar uVar2;
    char cVar3;
    uint extraout_ECX;
    uint uStack_cc4;
    uint uStack_cc0;
    uint uStack_cbc;
    uint uStack_cb8;
    uint uStack_cb4;
    uint *puStack_cb0;
    uchar auStack_cac [3160];
    char cStack_54;
    
    uStack_cb4 = 0xca9;
    uStack_cc4 = 0xec87d643;
    uStack_cc0 = 0x4bb5eba4;
    uStack_cbc = 0x3e3fe5a1;
    uStack_cb8 = 0xa90db236;
    fcn.000008d0();
    fcn.00000823(extraout_ECX,extraout_ECX);
    *0xfe4107c3 = 9;
    out(0x70,8);
    uVar1 = in(0x71);
    out(0x70,9);
    uVar2 = in(0x71);
    out(0x70,0x32);
    cVar3 = in(0x71);
    if (cVar3 == ' ') {
        *0xfe41072d = CONCAT11(uVar1,uVar2);
    }
    else {
        *0xfe41072d = 0;
    }
    (**(*param_2 + 0x20))(param_2,0xffd51fdc,0,0,&puStack_cb0);
    (**puStack_cb0)(puStack_cb0,0xffd5245c,&uStack_cc4,0,&uStack_cb4,auStack_cac);
    if (cStack_54 == '\x02') {
        cVar3 = fcn.000009f0();
        if (cVar3 != '\0') {
            cVar3 = fcn.000009d1();
            if (cVar3 != '\0') {
                fcn.00000a26(0xfffffffe,1);
            }
        }
    }
    return 0;
}


/* fcn.000008d0 @ 0x8d0 */

uint fcn.000008d0(void)

{
    char cVar1;
    uint uVar2;
    uint extraout_ECX;
    
    cVar1 = fcn.00000d57();
    if (cVar1 != '\0') {
        fcn.00000946();
    }
    cVar1 = fcn.00000d6a();
    if (cVar1 == '\0') {
        fcn.00000db4(extraout_ECX);
        uVar2 = 0;
        fcn.000007fe(0xf8098,0);
        fcn.000007c1(0xf8098,0);
    }
    else {
        uVar2 = 0x80000003;
    }
    return uVar2;
}


/* fcn.00000823 @ 0x823 */

uint fcn.00000823(void)

{
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int16_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int16_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00000def();
    fcn.00000e48();
    fcn.00000def();
    fcn.00000e48();
    *0xfd882774 = *0xfd882774 | 0x800;
    return 0;
}


/* fcn.00000def @ 0xdef */

ulong __fastcall fcn.00000def(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.00000e48 @ 0xe48 */

ulong __fastcall fcn.00000e48(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.000009f0 @ 0x9f0 */

uint __fastcall fcn.000009f0(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t var_4h;
    
    cVar1 = fcn.00000691();
    if (((cVar1 != '\0') && (fcn.00000b11(), param_1 != 0)) && (iVar2 = fcn.00000b11(), 3 < *(iVar2 + 0x1c))) {
        return 1;
    }
    return 0;
}


/* fcn.000009d1 @ 0x9d1 */

bool __fastcall fcn.000009d1(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.000004a9();
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.00000a26 @ 0xa26 */

void fcn.00000a26(uint32_t param_1,uint32_t param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uStack_4;
    
    uVar4 = 0;
    uVar3 = 0;
    if (((~param_1 | param_2) & 0xfffffffe) != 0) {
        cVar1 = fcn.000009f0();
        if (cVar1 != '\0') {
            iVar2 = fcn.0000031f(0,&uStack_4);
            if ((-1 < iVar2) && (uVar3 = uStack_4 >> 3 & 1, uVar3 != 0)) {
                fcn.00000547(8);
            }
        }
    }
    if (((~param_1 | param_2) & 1) != 0) {
        cVar1 = fcn.000009f0();
        if (cVar1 != '\0') {
            iVar2 = fcn.0000031f(0,&uStack_4);
            if ((-1 < iVar2) && (uVar4 = uStack_4 >> 3 & 1, uVar4 != 0)) {
                fcn.000005a4(8);
            }
        }
    }
    fcn.00000b11();
    fcn.00000b11();
    fcn.000009a5(param_1,param_2);
    if (uVar3 != 0) {
        fcn.00000577(8);
    }
    if (uVar4 != 0) {
        fcn.000005d4(8);
    }
    return;
}


/* fcn.00000b11 @ 0xb11 */

uint __fastcall fcn.00000b11(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.00000691();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0xffd52234;
    }
    *param_1 = 0x13;
    return 0xffd51ff4;
}


/* fcn.00000691 @ 0x691 */

uint fcn.00000691(void)

{
    char cVar1;
    
    cVar1 = fcn.00000644();
    if (cVar1 != '\x02') {
        cVar1 = fcn.00000644();
        if (cVar1 != '\x05') {
            cVar1 = fcn.00000644();
            if (cVar1 != '\x06') {
                cVar1 = fcn.00000644();
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00000644 @ 0x644 */

char fcn.00000644(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd51fec == -1) {
        uVar1 = fcn.00000635();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd51fec = cVar2;
    }
    return *0xffd51fec;
}


/* fcn.0000061c @ 0x61c */

uint32_t __fastcall fcn.0000061c(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.00000691();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.00000601 @ 0x601 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00000601(uint param_1)

{
    int32_t var_4h;
    
    fcn.00000b11(param_1);
    fcn.0000061c();
    return;
}


/* fcn.00000985 @ 0x985 */

uint __fastcall fcn.00000985(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.0000051d @ 0x51d */

uint __fastcall fcn.0000051d(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000002d0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.0000031f(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000004f3 @ 0x4f3 */

uint __fastcall fcn.000004f3(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000002d0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.0000031f(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00000b37 @ 0xb37 */

void __thiscall fcn.00000b37(uint param_1,int16_t param_2,int32_t param_3)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.00000b5e(0xf9000,0,param_2,param_3,0,param_1,param_1,0,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.00000b5e @ 0xb5e */

int __cdecl
fcn.00000b5e(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int8_t arg_18h,uint noname_5,
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
        iVar2 = fcn.000006bc(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.000006bc(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.000007c1(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.000007c1(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.0000075d(arg_8h_00,arg_ch_00);
                fcn.000006f7(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.000007c1(arg_8h + 0xd4,arg_ch_01);
                fcn.00000737(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.000006bc(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.0000078a(arg_8h + 0xd4,arg_ch_01);
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


/* fcn.000002d0 @ 0x2d0 */

uint32_t __fastcall fcn.000002d0(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.00000b11();
    uVar2 = fcn.0000061c();
    if (((uVar2 <= param_1) && (uVar2 = fcn.00000601(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.0000031f @ 0x31f */

//WARNING: Control flow encountered bad instruction data

ulong __fastcall fcn.0000031f(uint param_1)

{
    uint uVar1;
    int32_t var_4h;
    
    uVar1 = fcn.00000b11();
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


/* fcn.000003f7 @ 0x3f7 */

uint __cdecl fcn.000003f7(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    int in_ECX;
    uint32_t in_EDX;
    uint32_t uStack_14;
    uint32_t uStack_10;
    
    uStack_14 = 0;
    iVar2 = fcn.00000b11();
    if (in_ECX == 6) {
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.000004f3(&uStack_14);
    }
    else {
        if (in_ECX != 7) {
            return 0x80000003;
        }
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.0000051d(&uStack_14);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    uStack_10 = uStack_14 & arg_ch | arg_10h;
    uVar3 = fcn.00000b37(uVar1 + arg_8h * 8,0);
    return uVar3;
}


/* fcn.000006bc @ 0x6bc */

ushort __cdecl fcn.000006bc(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000635 @ 0x635 */

void fcn.00000635(void)

{
    fcn.000006bc(0xf8002,0);
    return;
}


/* fcn.000006f7 @ 0x6f7 */

uint __cdecl fcn.000006f7(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.0000078a @ 0x78a */

uint __cdecl fcn.0000078a(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.000007c1 @ 0x7c1 */

void __cdecl fcn.000007c1(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.00000d57 @ 0xd57 */

uint32_t fcn.00000d57(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000d94();
    return uVar1 >> 0xc & 1;
}


/* fcn.00000d94 @ 0xd94 */

uint __fastcall fcn.00000d94(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00000946 @ 0x946 */

uint __fastcall fcn.00000946(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    if ((param_2 != NULL) && (param_1 < 2)) {
        uVar1 = -(param_1 != 1) & 0xfffffff0;
        uVar1 = fcn.0000078a(uVar1 + 0xf80a8,0xfff07fff < uVar1 + 0xa8);
        *param_2 = uVar1 & 0xffff0000;
        return 0;
    }
    return 0x80000002;
}


/* fcn.00000d6a @ 0xd6a */

uint32_t fcn.00000d6a(void)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = fcn.00000682();
    if (cVar1 != '\0') {
        uVar2 = fcn.00000d94();
        return uVar2 >> 0x17 & 1;
    }
    uVar2 = fcn.00000d94();
    return uVar2 >> 0x1f;
}


/* fcn.00000682 @ 0x682 */

bool fcn.00000682(void)

{
    char cVar1;
    
    cVar1 = fcn.00000644();
    return cVar1 == '\x04';
}


/* fcn.00000db4 @ 0xdb4 */

void __fastcall fcn.00000db4(uint param_1,uint32_t param_2)

{
    *((param_2 & 0xffff8800 | 0xfffd8800) << 8 | param_2 & 0xffff) = 0xfe410001;
    return;
}


/* fcn.000007fe @ 0x7fe */

void fcn.000007fe(int32_t param_1,int32_t param_2)

{
    fcn.0000078a(param_1,param_2);
    fcn.000007c1(param_1,param_2);
    return;
}


/* fcn.000004a9 @ 0x4a9 */

uint __fastcall fcn.000004a9(uint param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    
    cVar1 = fcn.000009f0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.00000b11();
        if (*(iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.00000985();
            *param_2 = uVar4 >> 0xc & 3;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00000547 @ 0x547 */

uint __fastcall fcn.00000547(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000002d0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000003f7(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.000005a4 @ 0x5a4 */

uint __fastcall fcn.000005a4(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000002d0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000003f7(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.000009a5 @ 0x9a5 */

uint __fastcall fcn.000009a5(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.00000577 @ 0x577 */

uint __fastcall fcn.00000577(uint param_1,int32_t param_2,int32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000002d0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000003f7(param_2,-1,param_3);
    }
    return uVar2;
}


/* fcn.000005d4 @ 0x5d4 */

uint __fastcall fcn.000005d4(uint param_1,int32_t param_2,int32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000002d0();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000003f7(param_2,-1,param_3);
    }
    return uVar2;
}


/* fcn.0000075d @ 0x75d */

void fcn.0000075d(int32_t param_1,int32_t param_2)

{
    fcn.000006bc(param_1,param_2);
    fcn.000006f7(param_1,param_2);
    return;
}


/* fcn.00000737 @ 0x737 */

void fcn.00000737(int32_t param_1,int32_t param_2)

{
    fcn.000006bc(param_1,param_2);
    fcn.000006f7(param_1,param_2);
    return;
}


