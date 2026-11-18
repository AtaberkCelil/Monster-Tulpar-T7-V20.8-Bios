// decompiled by r2ghidra: 2498_CmosPei.te
// functions: 27

/* fcn.00000477 @ 0x477 */

int __fastcall fcn.00000477(uint param_1,int *param_2)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    bVar1 = false;
    InterruptDescriptorTableRegister();
    iVar3 = (**(**(stack0xfffffff2 + -4) + 0x74))(param_1);
    if (iVar3 < 0) {
        if (iVar3 != -0x7fffffec) {
            return iVar3;
        }
    }
    else if (iVar3 != -0x7fffffec) goto code_r0x000004b5;
    bVar1 = true;
code_r0x000004b5:
    iVar3 = fcn.0000099c();
    if (bVar1) {
        (**(*param_2 + 0x24))(param_2,0xffd5bf0c);
    }
    else {
        if ((iVar3 == 0) || (cVar2 = (**(iVar3 + 0xaa))(iVar3,8), cVar2 == '\0')) {
            return -0x7ffffffd;
        }
        cVar2 = (**(iVar3 + 0xaa))(iVar3,2);
        if (cVar2 == '\0') {
            cVar2 = (**(iVar3 + 0xaa))(iVar3,0x80000);
            if ((cVar2 != '\0') && (cVar2 = (**(iVar3 + 0xaa))(iVar3,0x20000), cVar2 != '\0')) {
                cVar2 = (**(iVar3 + 0xaa))(iVar3,0x10);
                if ((cVar2 != '\0') && (cVar2 = (**(iVar3 + 0xaa))(iVar3,0x10000), cVar2 != '\0')) {
                    (**(iVar3 + 0x9a))(iVar3);
                }
                (**(iVar3 + 0xb6))(iVar3,0);
            }
            cVar2 = (**(iVar3 + 0xae))(iVar3,0x1080);
            if (cVar2 != '\0') {
                (**(iVar3 + 0xaa))(iVar3,0x80);
                (**(iVar3 + 0xaa))(iVar3,0x1000);
                cVar2 = (**(iVar3 + 0xaa))(iVar3,0x80000);
                if ((cVar2 == '\0') || (cVar2 = (**(iVar3 + 0xaa))(iVar3,0x40000), cVar2 == '\0')) {
                    (**(iVar3 + 0x88))(iVar3,4);
                }
                else {
                    (**(iVar3 + 0x9a))(iVar3);
                    (**(iVar3 + 0x88))(iVar3,8);
                }
            }
            (**(iVar3 + 0x20))(iVar3);
            cVar2 = (**(iVar3 + 0xaa))(iVar3,1);
            return (-(cVar2 != '\0') & 0x7ffffffd) + 0x80000003;
        }
    }
    return 0;
}


/* entry0 @ 0x180 */

int entry0(uint param_1,int *param_2)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    bVar1 = false;
    InterruptDescriptorTableRegister();
    iVar3 = (**(**(stack0xfffffff2 + -4) + 0x74))(param_1);
    if (iVar3 < 0) {
        if (iVar3 != -0x7fffffec) {
            return iVar3;
        }
    }
    else if (iVar3 != -0x7fffffec) goto code_r0x000004b5;
    bVar1 = true;
code_r0x000004b5:
    iVar3 = fcn.0000099c();
    if (bVar1) {
        (**(*param_2 + 0x24))(param_2,0xffd5bf0c);
    }
    else {
        if ((iVar3 == 0) || (cVar2 = (**(iVar3 + 0xaa))(iVar3,8), cVar2 == '\0')) {
            return -0x7ffffffd;
        }
        cVar2 = (**(iVar3 + 0xaa))(iVar3,2);
        if (cVar2 == '\0') {
            cVar2 = (**(iVar3 + 0xaa))(iVar3,0x80000);
            if ((cVar2 != '\0') && (cVar2 = (**(iVar3 + 0xaa))(iVar3,0x20000), cVar2 != '\0')) {
                cVar2 = (**(iVar3 + 0xaa))(iVar3,0x10);
                if ((cVar2 != '\0') && (cVar2 = (**(iVar3 + 0xaa))(iVar3,0x10000), cVar2 != '\0')) {
                    (**(iVar3 + 0x9a))(iVar3);
                }
                (**(iVar3 + 0xb6))(iVar3,0);
            }
            cVar2 = (**(iVar3 + 0xae))(iVar3,0x1080);
            if (cVar2 != '\0') {
                (**(iVar3 + 0xaa))(iVar3,0x80);
                (**(iVar3 + 0xaa))(iVar3,0x1000);
                cVar2 = (**(iVar3 + 0xaa))(iVar3,0x80000);
                if ((cVar2 == '\0') || (cVar2 = (**(iVar3 + 0xaa))(iVar3,0x40000), cVar2 == '\0')) {
                    (**(iVar3 + 0x88))(iVar3,4);
                }
                else {
                    (**(iVar3 + 0x9a))(iVar3);
                    (**(iVar3 + 0x88))(iVar3,8);
                }
            }
            (**(iVar3 + 0x20))(iVar3);
            cVar2 = (**(iVar3 + 0xaa))(iVar3,1);
            return (-(cVar2 != '\0') & 0x7ffffffd) + 0x80000003;
        }
    }
    return 0;
}


/* fcn.000019f0 @ 0x19f0 */

int32_t __cdecl fcn.000019f0(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg_ch - arg_8h;
    puVar4 = arg_8h;
    if (arg_ch < arg_8h) {
        uVar2 = -uVar2;
        if (arg_8h <= arg_10h + arg_ch) {
            puVar4 = arg_10h + arg_8h;
            bVar1 = true;
            uVar5 = 1;
            arg_ch = arg_10h + arg_ch;
        }
    }
    if ((3 < arg_10h) && (3 < uVar2)) {
        uVar2 = arg_ch & 3;
        uVar3 = puVar4 & 3;
        if (bVar1) {
            arg_ch = arg_ch + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 4 - uVar2;
            }
            arg_10h = arg_10h - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg_ch;
                arg_ch = arg_ch + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg_ch = arg_ch + -3;
            puVar4 = puVar4 + -3;
        }
        for (uVar2 = arg_10h >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg_ch;
            arg_ch = arg_ch + (uVar5 * -2 + 1) * 4;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg_10h = arg_10h & 3;
        if (arg_10h == 0) {
            return arg_8h;
        }
        if (bVar1) {
            arg_ch = arg_ch + 4;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg_ch = arg_ch + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg_10h != 0; arg_10h = arg_10h - 1) {
        *puVar4 = *arg_ch;
        arg_ch = arg_ch + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg_8h;
}


/* fcn.0000018d @ 0x18d */

int __fastcall fcn.0000018d(uint *param_1)

{
    int *piVar1;
    int iVar2;
    int iStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    uStack_10 = 0xd5367802;
    uStack_c = 0x4c0fb873;
    piVar1 = *param_1;
    uStack_8 = 0xb73144b5;
    uStack_4 = 0x55c5f5cc;
    iVar2 = (**(*piVar1 + 0x34))(piVar1,4,0x334,&iStack_14);
    *(iStack_14 + 8) = uStack_10;
    *(iStack_14 + 0xc) = uStack_c;
    *(iStack_14 + 0x10) = uStack_8;
    *(iStack_14 + 0x14) = uStack_4;
    *(iStack_14 + 0x1e) = *(param_1 + 0x1b);
    *(iStack_14 + 0x20) = *(param_1 + 0x6e);
    *(iStack_14 + 0x22) = *(param_1 + 0x1d);
    *(iStack_14 + 0x46) = *(param_1 + 0x7a);
    *(iStack_14 + 0x1b0) = *(param_1 + 0x20);
    *(iStack_14 + 0x310) = *(param_1 + 0x86);
    *(iStack_14 + 0x1c) = *(param_1 + 0x23);
    *(iStack_14 + 0x18) = *(param_1 + 0x9e);
    *(param_1 + 0xb2) = iStack_14;
    if (-1 < iVar2) {
        fcn.000019f0(iStack_14 + 0x24,param_1[0x1c],*(param_1 + 0x1d) * 2);
        fcn.000019f0(iStack_14 + 0x48,*(param_1 + 0x76),*(param_1 + 0x7a) * 2);
        fcn.000019f0(iStack_14 + 0x1b2,param_1[0x1f],*(param_1 + 0x20) * 2);
        fcn.000019f0(iStack_14 + 0x312,*(param_1 + 0x82),*(param_1 + 0x86) * 2);
        param_1[0x1c] = iStack_14 + 0x24;
        *(param_1 + 0x76) = iStack_14 + 0x48;
        param_1[0x1f] = iStack_14 + 0x1b2;
        *(param_1 + 0x82) = iStack_14 + 0x312;
        param_1[0x11] = 0;
        param_1[0xf] = 0x80000010;
        param_1[0x10] = 0xffd5bf18;
        iVar2 = (**(*piVar1 + 0x18))(piVar1,param_1 + 0xf);
    }
    return iVar2;
}


/* fcn.0000099c @ 0x99c */

int * __fastcall fcn.0000099c(int *param_1,char param_2)

{
    char cVar1;
    int iVar2;
    uint *puVar3;
    uint *puVar4;
    uint *puVar5;
    uint *puVar6;
    int *piStack_4;
    
    piStack_4 = param_1;
    iVar2 = (**(*param_1 + 0x20))(param_1,0xffd5beb8,0,0,&piStack_4);
    if (iVar2 == 0) {
        if (param_2 == '\0') {
            (**(piStack_4 + 0xa2))(piStack_4,2);
            goto code_r0x00000b23;
        }
    }
    else {
        if (iVar2 < 0) {
            if (param_2 == '\0') goto code_r0x000009e9;
code_r0x000009de:
            piStack_4 = NULL;
            goto code_r0x00000b23;
        }
        if (param_2 == '\0') {
code_r0x000009e9:
            iVar2 = (**(*param_1 + 0x4c))(param_1,0xdc,&piStack_4);
            if (iVar2 < 0) goto code_r0x000009de;
            fcn.0000199a(piStack_4,0xdc,0);
        }
    }
    fcn.000008e7();
    fcn.0000038c();
    if (param_2 != '\0') {
        return piStack_4;
    }
    puVar6 = *(piStack_4 + 0xc2);
    puVar3 = *(piStack_4 + 0xc6);
    puVar5 = *(piStack_4 + 0xca);
    for (puVar4 = *(piStack_4 + 0xce); *puVar4 != NULL; puVar4 = puVar4 + 1) {
        cVar1 = (**puVar4)(*piStack_4);
        if (cVar1 == '\0') {
            (**(piStack_4 + 0xa6))(piStack_4,0x80000);
        }
        else {
            (**(piStack_4 + 0xa2))();
        }
    }
    for (; *puVar6 != NULL; puVar6 = puVar6 + 1) {
        cVar1 = (**puVar6)(*piStack_4);
        if (cVar1 != '\0') {
            (**(piStack_4 + 0xa2))(piStack_4,0x10);
        }
    }
    for (; *puVar3 != NULL; puVar3 = puVar3 + 1) {
        cVar1 = (**puVar3)(*piStack_4);
        if (cVar1 != '\0') {
            (**(piStack_4 + 0xa2))(piStack_4,0x10000);
        }
    }
    for (; *puVar5 != NULL; puVar5 = puVar5 + 1) {
        cVar1 = (**puVar5)(*piStack_4);
        if (cVar1 != '\0') {
            (**(piStack_4 + 0xa2))(piStack_4,0x20000);
        }
    }
    (**(piStack_4 + 0xa2))(piStack_4,0x40000);
    (**(piStack_4 + 0x8e))(piStack_4,piStack_4 + 0x23);
    fcn.000011f1();
code_r0x00000b23:
    return piStack_4;
}


/* fcn.0000126f @ 0x126f */

//WARNING: Variable defined which should be unmapped: var_1h

uint __cdecl fcn.0000126f(uint32_t arg_8h)

{
    uint32_t in_EDX;
    int32_t var_1h;
    
    if (in_EDX < '\0') {
        fcn.00000bc0(0xe,&var_1h);
        fcn.00000bc0(0xe,&var_1h);
    }
    if ((in_EDX & 0x1000) != 0) {
        fcn.00000bc0(0xe,&var_1h);
        fcn.00000bc0(0xe,&var_1h);
    }
    return 0;
}


/* fcn.00000642 @ 0x642 */

void __fastcall fcn.00000642(int param_1,uint32_t param_2,uint32_t param_3)

{
    char cVar1;
    
    if (param_3 == 1) {
        *(param_1 + 0x9e) = *(param_1 + 0x9e) | param_2;
        cVar1 = (**(param_1 + 0xaa))(param_1,0x80000);
        if (cVar1 != '\0') {
            if ((param_2 & 0x1000) != 0) {
                (**(param_1 + 8))(param_1,0x1230,1);
                *(param_1 + 0x9e) = *(param_1 + 0x9e) | 0x80;
                (**(param_1 + 8))(param_1,0x1231,1);
            }
            if (param_2 < '\0') {
                (**(param_1 + 8))(param_1,0x1231,1);
            }
            if ((param_2 & 0x4000) != 0) {
                (**(param_1 + 8))(param_1,0x1232,1);
            }
            if ((param_2 & 0x10) != 0) {
                (**(param_1 + 8))(param_1,0x1233,1);
            }
        }
    }
    else {
        *(param_1 + 0x9e) = *(param_1 + 0x9e) & ~param_2;
    }
    if ((param_2 & 0x1080) != 0) {
        fcn.0000126f(param_3);
    }
    if (*(param_1 + 0xb2) != 0) {
        *(*(param_1 + 0xb2) + 0x18) = *(param_1 + 0x9e);
    }
    return;
}


/* fcn.00000c98 @ 0xc98 */

uint __cdecl fcn.00000c98(int32_t arg_8h,int8_t arg_ch,int32_t arg_10h)

{
    char cVar1;
    int in_ECX;
    int in_EDX;
    int32_t var_ch;
    int8_t var_8h;
    unkbyte3 Stack_b;
    int32_t var_4h;
    
    var_ch = 0;
    fcn.00000bc0(arg_8h,&var_4h);
    if (in_EDX == 1) {
        *arg_10h = var_4h;
    }
    else {
        _var_8h = CONCAT31(Stack_b,~arg_ch & var_4h | *arg_10h);
        cVar1 = (**(in_ECX + 0xaa))();
        if (cVar1 == '\0') {
            fcn.00001356(var_4h,_var_8h,&var_ch);
        }
        fcn.00000bc0(arg_8h,&var_8h);
        cVar1 = (**(in_ECX + 0xaa))();
        if (cVar1 == '\0') {
            cVar1 = (**(in_ECX + 0xaa))();
            if (cVar1 != '\0') {
                (**(in_ECX + 0xa2))();
                fcn.000011a3();
                (**(in_ECX + 0xa6))();
            }
        }
    }
    return 0;
}


/* fcn.00000bc0 @ 0xbc0 */

uint __fastcall fcn.00000bc0(uint *param_1,int param_2,uint param_3,uchar *param_4)

{
    int iVar1;
    uchar uVar2;
    int iVar3;
    uint uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    
    uVar6 = 1;
    uVar7 = *(param_1 + 0xda);
    if (1 < uVar7) {
        iVar1 = *(param_1 + 0xd6);
        do {
            iVar3 = uVar6 * 0xc;
            if ((*(iVar3 + 4 + iVar1) <= param_3) && (param_3 <= *(iVar3 + 6 + iVar1))) {
                if (*(iVar3 + 8 + iVar1) != 0) {
                    uVar4 = (**(uVar6 * 0xc + 8 + iVar1))(*param_1,param_2,param_3,param_4);
                    return uVar4;
                }
                uVar7 = *(param_1 + 0xda);
                if ((*(iVar3 + iVar1) != 0) && (*(iVar3 + 2 + iVar1) != 0)) {
                    iVar3 = uVar6 * 0xc;
                    out(*(iVar3 + iVar1),param_3);
                    if (param_2 == 1) {
                        uVar2 = in(*(iVar3 + 2 + *(param_1 + 0xd6)));
                        *param_4 = uVar2;
                    }
                    else {
                        out(*(iVar3 + 2 + *(param_1 + 0xd6)),*param_4);
                    }
                    return 0;
                }
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < uVar7);
    }
    return 0x8000000e;
}


/* fcn.00000703 @ 0x703 */

void fcn.00000703(void)

{
    fcn.00000642(1);
    return;
}


/* fcn.0000199a @ 0x199a */

uint * fcn.0000199a(uint *param_1,uint32_t param_2,uchar param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    
    puVar3 = param_1;
    if (3 < param_2) {
        if ((param_1 & 3) != 0) {
            iVar2 = 4 - (param_1 & 3);
            param_2 = param_2 - iVar2;
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = param_3;
                puVar3 = puVar3 + 1;
            }
        }
        for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
            puVar3 = puVar3 + 1;
        }
        param_2 = param_2 & 3;
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
        *puVar3 = param_3;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.000008e7 @ 0x8e7 */

uint __fastcall fcn.000008e7(uint param_1,uint *param_2)

{
    *param_2 = param_1;
    param_2[1] = 0xffd5b32d;
    param_2[2] = 0xffd5b7b9;
    param_2[3] = 0xffd5aef7;
    param_2[4] = 0xffd5b3a4;
    param_2[5] = 0xffd5bb42;
    param_2[6] = 0xffd5ba64;
    param_2[9] = 0xffd5a990;
    param_2[8] = 0xffd5ac3e;
    *(param_2 + 0x8e) = 0xffd5b73a;
    *(param_2 + 0x92) = 0xffd5b511;
    *(param_2 + 0x96) = 0xffd5b53b;
    param_2[0x22] = 0xffd5aabd;
    *(param_2 + 0xaa) = 0xffd5a9b2;
    *(param_2 + 0xae) = 0xffd5a9c8;
    *(param_2 + 0xa2) = 0xffd5aa9b;
    *(param_2 + 0xa6) = 0xffd5aaac;
    *(param_2 + 0x9a) = 0xffd5b83d;
    *(param_2 + 0xb6) = 0xffd5ab6e;
    *(param_2 + 0xba) = 0xffd5abda;
    fcn.00000703(param_2,8);
    return 0;
}


/* fcn.0000038c @ 0x38c */

uint __fastcall fcn.0000038c(uint *param_1)

{
    int iVar1;
    uint *puStack_4;
    
    param_1[0xb] = *0xffd5beb8;
    param_1[0xc] = *0xffd5bebc;
    param_1[0xd] = *0xffd5bec0;
    param_1[0xe] = *0xffd5bec4;
    *(param_1 + 0x6e) = 0xf2;
    *(param_1 + 0x1d) = 0x11;
    *(param_1 + 0x86) = 6;
    *(param_1 + 0x1b) = 0x40;
    param_1[0x1c] = 0xffd5bf30;
    param_1[0x1f] = 0xffd5c0b8;
    *(param_1 + 0x20) = 0xaf;
    *(param_1 + 0x82) = 0xffd5c218;
    *(param_1 + 0x76) = 0xffd5bf58;
    *(param_1 + 0x7a) = 0xaf;
    param_1[0x13] = 0xffd5beb8;
    param_1[0x12] = 0x80000010;
    param_1[0x14] = param_1;
    *(param_1 + 0xda) = 3;
    *(param_1 + 0xc2) = 0xffd5beec;
    *(param_1 + 0xc6) = 0xffd5befc;
    *(param_1 + 0xca) = 0xffd5bf28;
    *(param_1 + 0xce) = 0xffd5bf04;
    *(param_1 + 0xd2) = 0xffd5bef4;
    *(param_1 + 0xd6) = 0xffd5bec8;
    puStack_4 = param_1;
    iVar1 = (**(**param_1 + 0x20))(*param_1,0xffd5bea8,0,0,&puStack_4);
    if (iVar1 < 0) {
        (**(param_1 + 0xa6))();
    }
    else {
        (**(param_1 + 0xa2))(param_1,0x40);
    }
    return 0;
}


/* fcn.000011f1 @ 0x11f1 */

uint __fastcall fcn.000011f1(uint *param_1)

{
    char cVar1;
    code *pcVar2;
    uint32_t uVar3;
    int *piVar4;
    code *pcVar5;
    uint auStack_8 [2];
    
    uVar3 = 0;
    pcVar5 = 0xffd5bd01;
    auStack_8[1] = 0;
    auStack_8[0] = 0xffd5bd01;
    piVar4 = *(param_1 + 0xd2);
    pcVar2 = *piVar4;
    if (pcVar2 != NULL) {
        do {
            cVar1 = (*pcVar2)(*param_1);
            piVar4 = piVar4 + 1;
            pcVar2 = *piVar4;
        } while (pcVar2 != NULL);
        if (cVar1 != '\0') {
            (**(param_1 + 0xa6))(param_1,0x1000);
            return 0;
        }
    }
    (**(param_1 + 0xa2))(param_1,0x1000);
    (**(param_1 + 0xa2))(param_1,0x80);
    while (pcVar5 != NULL) {
        (*pcVar5)();
        uVar3 = uVar3 + 1;
        pcVar5 = auStack_8[uVar3];
    }
    return 0;
}


/* fcn.00001356 @ 0x1356 */

uint __thiscall fcn.00001356(int param_1,uint8_t param_2,uint8_t param_3,int16_t *param_4)

{
    char cVar1;
    
    cVar1 = fcn.000012fb();
    if (cVar1 == '\0') {
        (**(param_1 + 0xa6))(param_1,0x100);
    }
    else {
        fcn.00001179(param_1,param_4);
        *param_4 = *param_4 + (param_3 - param_2);
        (**(param_1 + 0xa2))(param_1,0x100);
    }
    return 0;
}


/* fcn.000011a3 @ 0x11a3 */

uint fcn.000011a3(int param_1,uint32_t param_2)

{
    if (*(param_1 + 0xb2) != 0) {
        *(*(param_1 + 0xb2) + 0x1c) = param_2;
    }
    (**(param_1 + 0xa2))(param_1,0x400);
    (**(param_1 + 8))(param_1,0x8208,param_2);
    (**(param_1 + 8))(param_1,0x8200,param_2 >> 8);
    (**(param_1 + 0xa6))(param_1,0x400);
    return 0;
}


/* fcn.000000a2 @ 0xa2 */

uint32_t * __fastcall fcn.000000a2(uint32_t param_1)

{
    uint8_t *puVar1;
    uint32_t in_EAX;
    uint32_t uVar2;
    int unaff_EBX;
    uint32_t *unaff_EDI;
    uint32_t *puVar3;
    
    puVar1 = unaff_EBX + -0x74f7db84;
    *puVar1 = *puVar1 >> 4 | *puVar1 << 4;
    uVar2 = param_1 & 3;
    puVar3 = unaff_EDI;
    for (param_1 = param_1 >> 2; param_1 != 0; param_1 = param_1 - 1) {
        *puVar3 = in_EAX & 0xffffff0c;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = in_EAX & 0xffffff0c;
        puVar3 = puVar3 + 1;
    }
    return unaff_EDI;
}


/* fcn.000000a6 @ 0xa6 */

void __fastcall fcn.000000a6(uint8_t param_1)

{
    int unaff_EBX;
    
    *(unaff_EBX + -0x76f3dbb4) = *(unaff_EBX + -0x76f3dbb4) | param_1;
    return;
}


/* fcn.00000d5a @ 0xd5a */

uint __fastcall fcn.00000d5a(int param_1,int param_2,int16_t param_3,uint8_t param_4,uint8_t *param_5)

{
    char cVar1;
    uint uVar2;
    uint8_t uVar3;
    int32_t var_3fh;
    uint uStack_8;
    uint uStack_4;
    
    uStack_8 = 0;
    if (param_3 - 0x40U < 0xb3) {
        uVar3 = *(*(param_1 + 0x76) + (param_3 - 0x3f) * 2);
        uStack_4 = CONCAT31(param_1 >> 8,uVar3);
        if (param_2 == 1) {
            *param_5 = uVar3;
        }
        else {
            uVar3 = ~param_4 & uVar3 | *param_5;
            cVar1 = (**(param_1 + 0xaa))(param_1,0x400);
            if (cVar1 == '\0') {
                fcn.00001356(uStack_4,uVar3,&uStack_8);
            }
            *(*(param_1 + 0x76) + (param_3 - 0x3f) * 2) = uVar3;
            cVar1 = (**(param_1 + 0xaa))(param_1,0x400);
            if (cVar1 == '\0') {
                cVar1 = (**(param_1 + 0xaa))(param_1,0x100);
                if (cVar1 != '\0') {
                    (**(param_1 + 0xa2))(param_1,0x400);
                    fcn.000011a3(param_1,uStack_8);
                    (**(param_1 + 0xa6))(param_1,0x400);
                }
            }
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x80000002;
    }
    return uVar2;
}


/* fcn.00000e2e @ 0xe2e */

void __thiscall fcn.00000e2e(int param_1,int32_t param_2,uint param_3,int32_t param_4)

{
    char cVar1;
    uint16_t uVar2;
    
    cVar1 = (**(param_1 + 0xaa))(param_1,0x2000);
    if (cVar1 == '\0') {
code_r0x00000eb2:
        fcn.00000c98(param_2,param_3,param_4);
    }
    else {
        cVar1 = (**(param_1 + 0xaa))(param_1,0x80000);
        if ((cVar1 != '\0') && (cVar1 = (**(param_1 + 0xaa))(param_1,0x8000), cVar1 != '\0')) {
            uVar2 = 1;
            if (1 < *(param_1 + 0x80)) {
                do {
                    if (param_2 <= *(*(param_1 + 0x7c) + uVar2 * 2)) break;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(param_1 + 0x80));
            }
            if (param_2 == *(*(param_1 + 0x7c) + uVar2 * 2)) goto code_r0x00000eb2;
        }
        fcn.00000d5a(param_2,param_3,param_4);
    }
    return;
}


/* fcn.00000b29 @ 0xb29 */

uint16_t __fastcall fcn.00000b29(int param_1,int16_t param_2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar1 = *(param_1 + 0x74);
    uVar2 = 1;
    if (1 < uVar1) {
        do {
            if (*(*(param_1 + 0x70) + uVar2 * 2) == param_2) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    if (uVar1 <= uVar2) {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00000ecb @ 0xecb */

uint __fastcall fcn.00000ecb(int param_1,int param_2,uint16_t param_3,uint8_t *param_4)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    iVar1 = *(param_1 + 0x70);
    cVar2 = '\0';
    uVar4 = param_3;
    if (param_2 == 0) {
        if ((*param_4 & ~(0xff >> (8 - (*(iVar1 + uVar4 * 2) >> 0xc) & 0x1f))) != 0) {
            return 0x80000002;
        }
        uVar3 = CONCAT11(*param_4,*(iVar1 + uVar4 * 2)) & 0xffffff07;
        *param_4 = (uVar3 >> 8) << uVar3;
        cVar2 = (0xff >> (8 - (*(iVar1 + uVar4 * 2) >> 0xc) & 0x1f)) << (*(iVar1 + uVar4 * 2) & 7);
    }
    fcn.00000e2e(*(iVar1 + uVar4 * 2) >> 3 & 0x1ff,cVar2,param_4);
    if (param_2 == 1) {
        *param_4 = *param_4 >> (*(iVar1 + uVar4 * 2) & 7);
        *param_4 = *param_4 & 0xff >> (8 - (*(iVar1 + uVar4 * 2) >> 0xc) & 0x1f);
    }
    return 0;
}


/* fcn.000012fb @ 0x12fb */

uchar __fastcall fcn.000012fb(int param_1,int16_t param_2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar1 = 1;
    if (1 < *(param_1 + 0x80)) {
        uVar2 = uVar1;
        do {
            if (param_2 == *(*(param_1 + 0x7c) + uVar2 * 2)) goto code_r0x0000134d;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_1 + 0x80));
    }
    if (1 < *(param_1 + 0x86)) {
        uVar2 = uVar1;
        do {
            if (param_2 == *(*(param_1 + 0x82) + uVar2 * 2)) goto code_r0x0000134d;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_1 + 0x86));
    }
code_r0x0000134f:
    return uVar1;
code_r0x0000134d:
    uVar1 = 0;
    goto code_r0x0000134f;
}


/* fcn.00001179 @ 0x1179 */

uint fcn.00001179(int param_1,int16_t *param_2)

{
    (**(param_1 + 4))(param_1,0x8200,param_2);
    *param_2 = *param_2 << 8;
    (**(param_1 + 4))(param_1,0x8208,param_2);
    return 0;
}


/* fcn.000013a2 @ 0x13a2 */

uint __cdecl fcn.000013a2(int32_t arg_8h,uint32_t arg_ch)

{
    uint32_t uVar1;
    char cVar2;
    unkuint3 in_ECX;
    uint32_t uVar3;
    uint32_t uStack_8;
    int8_t var_1h;
    
    uVar1 = arg_ch;
    *arg_ch = 0;
    uStack_8 = in_ECX;
    for (uVar3 = *(arg_8h + 0x6c); uVar3 <= *(arg_8h + 0x6e); uVar3 = uVar3 + 1) {
        cVar2 = fcn.000012fb();
        if (cVar2 != '\0') {
            fcn.00000e2e(uVar3,0,&var_1h);
            *uVar1 = *uVar1 + var_1h;
        }
    }
    fcn.00001179(arg_8h,&arg_ch);
    if (*uVar1 == arg_ch) {
        (**(arg_8h + 0xa6))(arg_8h,0x80);
    }
    else {
        (**(arg_8h + 0xa2))();
    }
    return 0;
}


/* fcn.0000169e @ 0x169e */

void __fastcall fcn.0000169e(uint param_1,uchar param_2,uint8_t param_3)

{
    param_3 = param_3 / 10 << 4 | param_3 % 10;
    fcn.00000bc0(param_2,&param_3);
    return;
}


/* fcn.0000166d @ 0x166d */

//WARNING: Variable defined which should be unmapped: var_1h

uint __fastcall fcn.0000166d(uint param_1,uchar param_2)

{
    int32_t var_1h;
    
    fcn.00000bc0(param_2,&var_1h);
    return 0;
}


