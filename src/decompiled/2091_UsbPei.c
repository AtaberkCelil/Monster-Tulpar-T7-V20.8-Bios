// decompiled by r2ghidra: 2091_UsbPei.pe32
// functions: 85

/* fcn.0001648b @ 0x1648b */

void __fastcall fcn.0001648b(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0x1027d */

uint entry0(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    uint unaff_EBX;
    int *piVar5;
    uint uVar6;
    int32_t var_ah;
    ushort uStack_a;
    
    iVar2 = fcn.000163cb();
    var_ah._2_2_ = 0x28b;
    uStack_a = 1;
    uVar3 = (**(iVar2 + 4))();
    if ((uVar3 & 1) == 0) {
        iVar2 = fcn.000163ea();
    }
    else {
        iVar2 = fcn.000163ea();
    }
    var_ah._2_2_ = 0x4a;
    uStack_a = 0;
    var_ah._0_2_ = 0;
    (**(iVar2 + 0x34))();
    iVar2 = fcn.000163ea();
    var_ah._2_2_ = 0x6570;
    uStack_a = 0;
    var_ah._0_2_ = 1;
    cVar1 = (**(iVar2 + 0x18))();
    if (cVar1 == '\x01') {
        var_ah._2_2_ = 0x2d3;
        uStack_a = 1;
        iVar2 = fcn.0001645c(0,0x69c4);
        if (iVar2 < 0) {
            uVar4 = InterruptDescriptorTableRegister();
            var_ah._0_2_ = uVar4 >> 0x10;
            piVar5 = *(CONCAT22(var_ah._2_2_,var_ah) + -4);
            uVar4 = (**(*piVar5 + 0x24))(piVar5,0x65bc);
            return uVar4;
        }
    }
    var_ah._0_2_ = unaff_EBX >> 0x10;
    fcn.0001645c(0,0x69c0);
    iVar2 = fcn.000163ea();
    cVar1 = (**(iVar2 + 0x18))(0x6570,0x62);
    if (cVar1 == '\0') {
        fcn.0001648b();
    }
    else {
        iVar2 = fcn.000163ea();
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x5f);
        if ((cVar1 == '\0') && ((**(*param_2 + 0x28))(param_2,&var_ah + 2), CONCAT22(uStack_a,var_ah._2_2_) == 0x11))
        {
            return 0x80000003;
        }
        uVar6 = 0;
        uVar4 = 0;
        piVar5 = param_2;
        fcn.00010c4c(param_2);
        iVar2 = fcn.000163ea(piVar5,uVar4,uVar6);
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x65);
        if (cVar1 == '\0') {
            fcn.0001648b();
        }
        else {
            fcn.00010b52(param_2);
        }
        uVar3 = 0;
        do {
            iVar2 = fcn.0001645c(&stack0xfffffffc,&stack0xfffffff8);
            if (iVar2 < 0) break;
            fcn.000109a2();
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x7f);
    }
    iVar2 = fcn.0001645c(0,0);
    if (iVar2 < 0) {
        iVar2 = fcn.000163ea();
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x62);
        if (cVar1 != '\0') {
            iVar2 = fcn.000163ea();
            cVar1 = (**(iVar2 + 0x18))(0x6570,0x65);
            if (cVar1 != '\0') {
                return 0;
            }
        }
        fcn.0001648b();
    }
    else {
        iVar2 = fcn.000163ea();
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x62);
        if (cVar1 == '\0') {
            fcn.00010c4c(param_2);
        }
        else {
            iVar2 = fcn.000163ea();
            cVar1 = (**(iVar2 + 0x18))(0x6570,0x65);
            if (cVar1 == '\0') {
                fcn.00010b52(param_2);
            }
        }
    }
    return 0;
}


/* fcn.000163cb @ 0x163cb */

int32_t fcn.000163cb(void)

{
    int32_t var_4h;
    
    fcn.0001645c(0,&var_4h);
    return var_4h;
}


/* fcn.0001645c @ 0x1645c */

void __cdecl fcn.0001645c(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000163ea @ 0x163ea */

int32_t fcn.000163ea(void)

{
    int32_t var_4h;
    
    fcn.0001645c(0,&var_4h);
    return var_4h;
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


/* fcn.00016409 @ 0x16409 */

int __fastcall fcn.00016409(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.00010c4c @ 0x10c4c */

uint __cdecl fcn.00010c4c(int32_t arg_8h)

{
    char cVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar4 = 0;
    var_4h = 0;
    var_ch = 0;
    if (*0x69c9 != '\x01') {
        *0x69c9 = '\x01';
        uVar5 = 0;
        do {
            iVar2 = fcn.0001645c(0,&var_8h);
            if (iVar2 < 0) break;
            (**var_8h)(arg_8h);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
        fcn.000102ec();
        pcVar3 = 0xe1c;
        while (pcVar3 != NULL) {
            (*pcVar3)(0,arg_8h);
            uVar4 = uVar4 + 1;
            pcVar3 = *(uVar4 * 4 + 0x6740);
        }
        iVar2 = fcn.000163ea();
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x62);
        if (((cVar1 != '\0') && (*(*0x65c8 + 6) != 0)) && (*0x69c0 != 0)) {
            (**(*0x69c0 + 4))(arg_8h,*0x69c0,*(*0x65c8 + 6) * 1000);
        }
        fcn.00014830();
        iVar2 = fcn.000163ea();
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x62);
        if (cVar1 != '\0') {
            *0x6b60 = 0x6a20;
            *0x6a04 = 0x6a20;
            fcn.00014830();
            uVar4 = 0;
            do {
                iVar2 = fcn.0001645c(&var_ch,&var_4h);
                if (iVar2 < 0) break;
                if (*(*(var_4h + 0x48) + 5) == '\t') {
                    fcn.00014872(*(var_4h + 0x3c) + 0x34,1);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x7f);
        }
        iVar2 = fcn.000163ea();
        cVar1 = (**(iVar2 + 0x18))(0x6570,0x62);
        if (cVar1 == '\0') {
            fcn.00010b52(arg_8h);
        }
        fcn.0001648b();
    }
    return 0;
}


/* fcn.00010b52 @ 0x10b52 */

uint __cdecl fcn.00010b52(int32_t arg_8h)

{
    int iVar1;
    int32_t in_ECX;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    cVar2 = *(*0x65c8 + 5) * '\x02' + '\x01';
    if (*0x69cb == '\x01') {
        return 0;
    }
    uVar3 = 0;
    *0x69cb = 1;
    var_4h = in_ECX;
    if ((*0x69c0 == 0) && ((iVar1 = fcn.0001645c(0,0x69c0), iVar1 < 0 || (*0x69c0 == 0)))) {
        return 0x8000000e;
    }
    do {
        fcn.00014830();
        uVar4 = 0;
        do {
            iVar1 = fcn.0001645c(&var_8h,&var_4h);
            if (iVar1 < 0) break;
            if (*(*(var_4h + 0x48) + 5) == '\t') {
                fcn.00014872(*(var_4h + 0x3c) + 0x34,1);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x7f);
        cVar2 = cVar2 + -1;
        if (cVar2 == '\0') {
            do {
                iVar1 = fcn.0001645c(&var_8h,&var_4h);
                if (iVar1 < 0) {
                    return 0;
                }
                fcn.0001533f();
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x7f);
            return 0;
        }
        (**(*0x69c0 + 4))(arg_8h,*0x69c0,500000);
    } while( true );
}


/* fcn.000109a2 @ 0x109a2 */

int __fastcall fcn.000109a2(int *param_1,int param_2)

{
    int iVar1;
    uint8_t uVar2;
    uint noname_1;
    uint32_t extraout_ECX;
    uint32_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uchar auStack_10 [4];
    uint32_t uStack_c;
    int iStack_8;
    uint32_t uStack_4;
    
    if (*(param_2 + 0x36) == '\x01') {
        iStack_8 = param_2;
        fcn.00010260(0x69e0,0x14);
        uVar4 = 0;
        uStack_4 = uStack_4 & 0xffffff00;
        do {
            iVar1 = fcn.0001433b(param_1,iStack_8,uStack_4,&uStack_c);
            if (iVar1 < 0) {
                return iVar1;
            }
            if (((*(uStack_c + 3) & 3) == 3) && (*(uStack_c + 2) < '\0')) {
                *(param_2 + 0x8e) = *(uStack_c + 2);
                *(param_2 + 0x90) = *(uStack_c + 4);
                break;
            }
            uVar4 = uVar4 + 1;
            uStack_4 = CONCAT31(uStack_4._1_3_,uVar4);
        } while (uVar4 < 0x10);
        if (uVar4 == 0x10) {
            iVar1 = -0x7ffffff2;
        }
        else {
            fcn.0001451d(0xa21,uStack_c,0,0,0,auStack_10);
            fcn.0001451d(0xb21,noname_1,0,0,0,auStack_10);
            fcn.00014588();
            (**(*(param_2 + 0x3c) + 0x30))(param_1,param_2 + -4);
            if (*0x69c8 == '\0') {
                *0x6604 = 0x6618;
                iVar1 = fcn.00016437();
                if (-1 < iVar1) {
                    *0x69c8 = '\x01';
                }
            }
            uVar5 = 0;
            if (*(*0x65c8 + 0x90b) != '\0') {
                do {
                    fcn.00010847(param_1,0x6618,0x69e0);
                    if (*(*0x65c8 + 0x90c) == '\0') {
code_r0x00010b17:
                        if (*0x69e0 == *(*0x65c8 + 0x913)) {
                            (**(*param_1 + 0x2c))(param_1,0x20);
                            fcn.00016437();
                            break;
                        }
                    }
                    else {
                        uVar4 = *(*0x65c8 + 0x912);
                        uVar3 = extraout_ECX & 0xffffff00;
                        if (uVar4 == 0) goto code_r0x00010b17;
                        do {
                            uStack_c = uVar3;
                            uVar3 = uStack_c;
                            if ((*((uStack_c & 0xff) + 0x90c + *0x65c8) & *0x69e4) != 0) break;
                            uVar2 = uStack_c + 1;
                            uVar3 = CONCAT31(uStack_c >> 8,uVar2);
                        } while (uVar2 < uVar4);
                        if ((uVar3 == 0) || (uVar3 != uVar4)) goto code_r0x00010b17;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(*0x65c8 + 0x90b));
            }
            iVar1 = 0;
        }
    }
    else {
        iVar1 = -0x7ffffff2;
    }
    return iVar1;
}


/* fcn.00014647 @ 0x14647 */

void __thiscall fcn.00014647(int *param_1,uint8_t *param_2)

{
    uint *puVar1;
    uint16_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint *puVar6;
    int iVar7;
    uint16_t *puVar8;
    uint32_t uVar9;
    uint *puVar10;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint32_t uStack_8;
    uchar uStack_4;
    
    puVar1 = *0x6b60;
    uVar4 = 2;
    do {
        uVar5 = uVar4;
        if (param_2[uVar4] != 0) break;
        uVar5 = uVar5 + 1;
        uVar4 = uVar5;
    } while (uVar5 < 8);
    if (uVar5 == 8) {
        return;
    }
    iVar7 = 0;
    (**(*param_1 + 0x54))(&uStack_14,0x14,0);
    uVar5 = param_2[2];
    if (uVar5 == 0x39) {
        *0x69cc = *0x69cc ^ 1;
    }
    else if (uVar5 == 0x47) {
        *0x69cd = *0x69cd ^ 1;
    }
    else {
        if (uVar5 != 0x53) goto code_r0x000146c1;
        *0x69ca = *0x69ca ^ 1;
    }
    fcn.00014588();
code_r0x000146c1:
    iVar3 = 8;
    do {
        if ((*param_2 & 1 << (iVar7 & 0x1f)) != 0) {
            uStack_10 = uStack_10 | *(iVar7 + 0x6748);
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar4 = 2;
    do {
        uVar5 = param_2[uVar4];
        if (uVar5 != 0) {
            puVar6 = puVar1 + 5;
            if (puVar6 == *0x6a04) {
                return;
            }
            if ((puVar6 == 0x6b60) && (*0x6a04 == 0x6a20)) {
                return;
            }
            uVar9 = uVar5 - 4;
            uStack_14 = *(uVar9 * 4 + 0x6750);
            uVar2 = *(uVar9 * 4 + 0x6751);
            uStack_12 = uVar2;
            if ((uStack_10 & 3) != 0) {
                uStack_12 = *(uVar9 * 4 + 0x6752);
            }
            if (((*0x69ca == 0) && ((uStack_10 & 3) == 0)) && (uVar5 - 4 == 0x59)) {
                uStack_12 = 0;
            }
            if (*0x69cc == 1) {
                if (uStack_12 - 0x61 < 0x1a) {
                    uVar2 = *(uVar9 * 4 + 0x6752);
                }
                else if (0x19 < uStack_12 - 0x41) goto code_r0x000147b4;
                uStack_12 = uVar2;
            }
code_r0x000147b4:
            if (((0x58 < uVar5) && (uVar5 < 100)) && (uStack_14 != 0)) {
                if ((*0x69ca == 1) && ((uStack_10 & 3) == 0)) {
                    uStack_14 = 0;
                }
                else {
                    uStack_12 = 0;
                }
            }
            uStack_8 = *(uVar9 + 0x68e0);
            uStack_4 = *(uVar9 * 4 + 0x6753);
            *0x6b60 = 0x6a20;
            puVar8 = &uStack_14;
            puVar10 = puVar1;
            for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 2;
                puVar10 = puVar10 + 1;
            }
            if (puVar6 != 0x6b60) {
                *0x6b60 = puVar6;
            }
        }
        uVar5 = uVar4 + 1;
        uVar4 = uVar5;
        if (7 < uVar5) {
            return;
        }
    } while( true );
}


/* fcn.00014588 @ 0x14588 */

uint __fastcall fcn.00014588(int *param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    var_1h = 0;
    if (*0x69c4 == 0) {
        var_8h = &var_1h;
    }
    else {
        iVar1 = (**(*0x69c4 + 0x14))(*0x69c4,4,1,&var_8h,0x80,0);
        if (iVar1 < 0) {
            return 0x80000009;
        }
        (**(*param_1 + 0x54))(var_8h,1,0);
    }
    if (*0x69ca != '\0') {
        *var_8h = *var_8h | 1;
    }
    if (*0x69cc != '\0') {
        *var_8h = *var_8h | 2;
    }
    if (*0x69cd != '\0') {
        *var_8h = *var_8h | 4;
    }
    uVar2 = fcn.0001451d(0x921,&var_ch,0x200,var_8h,1,&var_ch);
    if (*0x69c4 != 0) {
        (**(*0x69c4 + 0x18))(*0x69c4,1,var_8h);
    }
    return uVar2;
}


/* fcn.0001433b @ 0x1433b */

uint fcn.0001433b(uint param_1,int param_2,uint8_t param_3,uint *param_4)

{
    if (*(*(param_2 + 0x48) + 4) <= param_3) {
        return 0x80000002;
    }
    *param_4 = *(param_2 + 0x4c + param_3 * 4);
    return 0;
}


/* fcn.0001451d @ 0x1451d */

void __cdecl
fcn.0001451d(int32_t arg_8h,uint noname_1,int16_t arg_10h,int32_t arg_14h,int16_t arg_18h,int32_t arg_1ch)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_8h;
    int16_t var_4h;
    int16_t var_2h;
    
    (**(*in_ECX + 0x54))(&var_8h,8,0);
    var_8h = CONCAT22(arg_10h,arg_8h);
    _var_4h = arg_18h << 0x10;
    (**in_EDX)();
    return;
}


/* fcn.00016437 @ 0x16437 */

void __fastcall fcn.00016437(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00010847 @ 0x10847 */

uint __cdecl fcn.00010847(int32_t arg_8h,uint noname_1,int32_t arg_10h)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    uint32_t uVar4;
    uint *puVar5;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar4 = 0;
    var_4h = 0;
    if (*0x69c4 == 0) {
        var_4h = 0x69f4;
    }
    else {
        iVar1 = (**(*0x69c4 + 0x14))(*0x69c4,4,1,&var_4h,0x80,0);
        if (iVar1 < 0) {
            return 0x80000009;
        }
    }
    do {
        iVar1 = fcn.0001645c(&var_ch,&var_8h);
        if (iVar1 < 0) break;
        if ((*(var_8h + 0x36) == '\x01') &&
           (iVar1 = (**(var_8h + 0x14))(arg_8h,var_8h,*(var_8h + 0x8e),var_4h,0x65dc,*(*0x65c8 + 4)), -1 < iVar1))
        {
            fcn.00014647(var_4h);
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x7f);
    if (*0x69c4 != 0) {
        (**(*0x69c4 + 0x18))(*0x69c4,1,var_4h);
    }
    if (*0x6b60 == *0x6a04) {
        uVar2 = 0x80000006;
    }
    else {
        puVar3 = *0x6a04 + 5;
        puVar5 = *0x6a04;
        *0x6a04 = puVar3;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
            *arg_10h = *puVar5;
            puVar5 = puVar5 + 1;
            arg_10h = arg_10h + 4;
        }
        if (puVar3 == 0x6b60) {
            *0x6a04 = 0x6a20;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00014830 @ 0x14830 */

uint fcn.00014830(void)

{
    int iVar1;
    uint auStack_c [2];
    
    while( true ) {
        iVar1 = fcn.0001645c(0,auStack_c);
        if (iVar1 < 0) break;
        fcn.00014bf5();
    }
    return 0;
}


/* fcn.00014872 @ 0x14872 */

int __cdecl fcn.00014872(int32_t arg_8h,uint32_t arg_ch)

{
    uint *puVar1;
    uint8_t uVar2;
    bool bVar3;
    uint *puVar4;
    int iVar5;
    uint8_t arg_8h_00;
    int *in_ECX;
    uint8_t *puVar6;
    int in_EDX;
    uint32_t uVar7;
    uint *puVar8;
    uint *puVar9;
    char cStack_2d;
    uint32_t uStack_28;
    uint32_t uStack_24;
    int iStack_20;
    uint16_t *puStack_1c;
    int iStack_18;
    uchar auStack_14 [2];
    uint8_t uStack_12;
    uint *puStack_10;
    int *piStack_c;
    
    arg_8h_00 = 1;
    bVar3 = false;
    iStack_18 = in_EDX + 4;
    if (*(in_EDX + 0x3b) == '\0') {
        return 0;
    }
    puStack_1c = *(in_EDX + 0x40) + 0x36;
    iStack_20 = in_EDX;
    piStack_c = in_ECX;
    do {
        if (*(*0x65c8 + 0xa14) != 0) {
            puVar6 = *0x65c8 + 0x916;
            uVar7 = *(*0x65c8 + 0xa14);
            uStack_24 = *puStack_1c;
            do {
                if (((*(puVar6 + -2) == *puStack_1c) && (*puVar6 == arg_8h_00)) && (puVar6[1] == *(in_EDX + 0x96))) {
                    bVar3 = true;
                }
                puVar6 = puVar6 + 4;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        if (bVar3) {
            bVar3 = false;
        }
        else {
            iVar5 = fcn.000157b3(arg_8h_00,&uStack_28);
            if (-1 < iVar5) {
                if ((uStack_28 & 0x10000) == 0) {
                    if (arg_ch == '\x01') goto code_r0x00014bd2;
                }
                else {
                    fcn.00015900(arg_8h_00,0x10);
                }
                uStack_24 = uStack_28;
                if ((uStack_28 & 1) != 0) {
                    if ((uStack_28 >> 1 & 1) == 0) {
                        fcn.000158ab(arg_8h_00,4);
                        cStack_2d = '\x14';
                        do {
                            fcn.000157b3(arg_8h_00,auStack_14);
                            if (*0x69c0 != 0) {
                                (**(*0x69c0 + 4))(in_ECX,*0x69c0,1000);
                            }
                            in_EDX = iStack_20;
                            cStack_2d = cStack_2d + -1;
                        } while (((uStack_12 & 0x10) == 0) && (cStack_2d != '\0'));
                        if (*0x69c0 != 0) {
                            (**(*0x69c0 + 4))(in_ECX,*0x69c0,10000);
                        }
                        fcn.00015900(arg_8h_00,0x14);
                        fcn.000157b3(arg_8h_00,&uStack_28);
                        uStack_24 = uStack_28;
                        if (((uStack_28 & 1) == 0) || ((uStack_28 >> 1 & 1) == 0)) goto code_r0x00014bd2;
                    }
                    uStack_24 = uStack_28;
                    iVar5 = fcn.000164db();
                    puVar4 = puStack_10;
                    if (iVar5 < 0) {
                        return -0x7ffffff7;
                    }
                    (**(*in_ECX + 0x54))(puStack_10,0x98,0);
                    in_ECX = piStack_c;
                    in_EDX = iStack_20;
                    *puVar4 = 0x44627355;
                    *(puVar4 + 0xd) = 0;
                    *(puVar4 + 0x39) = 0;
                    *(puVar4 + 0x36) = 8;
                    puVar1 = puVar4 + 1;
                    puVar8 = 0x6950;
                    puVar9 = puVar1;
                    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                        *puVar9 = *puVar8;
                        puVar8 = puVar8 + 1;
                        puVar9 = puVar9 + 1;
                    }
                    puVar4[7] = *0x6944;
                    puVar4[8] = *0x6948;
                    puVar4[9] = *0x694c;
                    puVar4[9] = puVar1;
                    puVar4[10] = *0x6968;
                    puVar4[0xb] = *0x696c;
                    puVar4[0xc] = *0x6970;
                    puVar4[0xc] = puVar1;
                    puVar4[0x10] = *(iStack_20 + 0x40);
                    *(puVar4 + 0x3a) = 0;
                    *(puVar4 + 0xe) = 2;
                    uVar2 = *(iStack_20 + 0x34);
                    *(puVar4 + 0x96) = 0;
                    *(puVar4 + 0x24) = arg_8h_00 * 0x80 + uVar2;
                    if ((uStack_24 >> 9 & 1) != 0) {
                        *(puVar4 + 0xe) = 1;
                    }
                    if ((uStack_24 >> 10 & 1) != 0) {
                        *(puVar4 + 0xe) = 3;
                        *(puVar4 + 0x36) = 0x40;
                    }
                    if ((uStack_24 >> 0xb & 1) != 0) {
                        *(puVar4 + 0xe) = 4;
                        *(puVar4 + 0x36) = 0x200;
                    }
                    if ((uStack_24 >> 0xc & 1) != 0) {
                        *(puVar4 + 0xe) = 5;
                        *(puVar4 + 0x36) = 0x200;
                    }
                    if ((*(iStack_20 + 0x38) == '\x01') || (*(iStack_20 + 0x38) == '\x02')) {
                        *(puVar4 + 0x24) = *(iStack_20 + 0x90);
                    }
                    iVar5 = fcn.00014e9b(arg_8h_00,arg_8h);
                    if (iVar5 < 0) {
                        fcn.00015900(arg_8h_00,1);
                    }
                    else {
                        iVar5 = fcn.00016437();
                        if (iVar5 < 0) {
                            return iVar5;
                        }
                        iVar5 = fcn.00016437();
                        if (iVar5 < 0) {
                            return iVar5;
                        }
                        iVar5 = puVar4[0x13];
                        if ((*(iVar5 + 5) == '\b') && (*(iVar5 + 7) == 'P')) {
                            *(puVar4 + 0x3a) = 4;
                        }
                        if (*(iVar5 + 5) == '\t') {
                            *(puVar4 + 0x3a) = 3;
                            *(puVar4 + 0x96) = *(in_EDX + 0x96) + '\x01';
                        }
                        if (((*(iVar5 + 5) == '\x03') && (*(iVar5 + 6) == '\x01')) && (*(iVar5 + 7) == '\x01')) {
                            *(puVar4 + 0x3a) = 1;
                        }
                        if (*(puVar4 + 0x3a) == '\x03') {
                            iVar5 = fcn.00015a56();
                            if (iVar5 < 0) {
                                return iVar5;
                            }
                            fcn.00014872(arg_8h,0);
                        }
                    }
                }
            }
        }
code_r0x00014bd2:
        arg_8h_00 = arg_8h_00 + 1;
        if (*(in_EDX + 0x3b) < arg_8h_00) {
            return 0;
        }
    } while( true );
}


/* fcn.0001533f @ 0x1533f */

int __fastcall fcn.0001533f(int *param_1,int param_2)

{
    uint *puVar1;
    int *piVar2;
    uint8_t uVar3;
    int iVar4;
    uint8_t uStack_16;
    uint8_t uStack_15;
    uint32_t uStack_14;
    int iStack_10;
    uint *puStack_c;
    int iStack_8;
    int *piStack_4;
    
    uStack_15 = 0;
    piStack_4 = param_1;
    iVar4 = (**(param_2 + 8))(param_1,param_2,&iStack_10);
    if (-1 < iVar4) {
        if ((*(iStack_10 + 5) == '\b') && (*(iStack_10 + 7) == 'P')) {
            fcn.000152f0(*(iStack_10 + 2),&uStack_15);
            uStack_16 = 0;
            do {
                iVar4 = fcn.000164db();
                puVar1 = puStack_c;
                if (iVar4 < 0) {
                    return iVar4;
                }
                (**(*param_1 + 0x54))(puStack_c,0x4c,0);
                *puVar1 = 0x544f4255;
                puVar1[0xb] = param_2;
                puVar1[0x11] = 0;
                puVar1[0xc] = iStack_10;
                puVar1[7] = 3;
                puVar1[10] = 0x200;
                *(puVar1 + 0x12) = uStack_16;
                uStack_14 = uStack_14 & 0xffffff00;
                do {
                    iVar4 = (**(param_2 + 0xc))(param_1,param_2,uStack_14,&iStack_8);
                    piVar2 = piStack_4;
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    if (*(iStack_8 + 3) == '\x02') {
                        if (*(iStack_8 + 2) < '\0') {
                            puVar1[0xd] = iStack_8;
                        }
                        else {
                            puVar1[0xe] = iStack_8;
                        }
                    }
                    uVar3 = uStack_14 + 1;
                    uStack_14 = CONCAT31(uStack_14._1_3_,uVar3);
                } while (uVar3 < 2);
                puVar1[1] = *0x6974;
                puVar1[2] = *0x6978;
                puVar1[3] = *0x697c;
                puVar1[4] = *0x6980;
                puVar1[5] = *0x6984;
                puVar1[6] = *0x6988;
                puVar1[6] = puVar1 + 1;
                iVar4 = fcn.00015d28();
                if (iVar4 < 0) {
                    return iVar4;
                }
                iVar4 = fcn.00016437();
                if (iVar4 < 0) {
                    return iVar4;
                }
                uStack_16 = uStack_16 + 1;
                param_1 = piVar2;
            } while (uStack_16 <= uStack_15);
            iVar4 = 0;
        }
        else {
            iVar4 = -0x7ffffff2;
        }
    }
    return iVar4;
}


/* fcn.000102ec @ 0x102ec */

void fcn.000102ec(void)

{
    uint32_t *puVar1;
    char cVar2;
    uchar uVar3;
    ushort uVar4;
    int iVar5;
    uint uVar6;
    uint8_t *puVar7;
    uint8_t uVar8;
    
    fcn.00010260(*0x65c8,0xa15);
    iVar5 = fcn.000163ea();
    cVar2 = (**(iVar5 + 0x18))(0x6570,0x4c);
    if (cVar2 != '\0') {
        **0x65c8 = **0x65c8 | 1;
    }
    iVar5 = fcn.000163ea();
    cVar2 = (**(iVar5 + 0x18))(0x6570,0x4d);
    if (cVar2 != '\0') {
        **0x65c8 = **0x65c8 | 2;
    }
    iVar5 = fcn.000163ea();
    cVar2 = (**(iVar5 + 0x18))(0x6570,0x4f);
    if (cVar2 != '\0') {
        **0x65c8 = **0x65c8 | 4;
    }
    iVar5 = fcn.000163ea();
    cVar2 = (**(iVar5 + 0x18))(0x6570,0x50);
    if (cVar2 != '\0') {
        **0x65c8 = **0x65c8 | 8;
    }
    iVar5 = fcn.000163ea();
    cVar2 = (**(iVar5 + 0x18))(0x6570,0x5e);
    if (cVar2 != '\0') {
        *0x69ca = *0x69ca | 1;
    }
    iVar5 = fcn.000163ea();
    cVar2 = (**(iVar5 + 0x18))(0x6570,0x66);
    if (cVar2 != '\0') {
        **0x65c8 = **0x65c8 | 0x10;
    }
    iVar5 = fcn.000163ea();
    uVar3 = (**(iVar5 + 4))(0x6570,0x5a);
    *(*0x65c8 + 0x90b) = uVar3;
    iVar5 = fcn.000163ea();
    uVar3 = (**(iVar5 + 4))(0x6570,0x5b);
    *(*0x65c8 + 1) = uVar3;
    iVar5 = fcn.000163ea();
    uVar3 = (**(iVar5 + 4))(0x6570,0x5d);
    *(*0x65c8 + 0x913) = uVar3;
    iVar5 = fcn.000163ea();
    uVar3 = (**(iVar5 + 4))(0x6570,99);
    *(*0x65c8 + 5) = uVar3;
    iVar5 = fcn.000163ea();
    uVar3 = (**(iVar5 + 4))(0x6570,100);
    *(*0x65c8 + 6) = uVar3;
    iVar5 = fcn.000163ea();
    uVar4 = (**(iVar5 + 8))(0x6570,0x51);
    *(*0x65c8 + 0x35) = uVar4;
    iVar5 = fcn.000163ea();
    uVar6 = (**(iVar5 + 0xc))(0x6570,0x55);
    *(*0x65c8 + 0x466) = uVar6;
    iVar5 = fcn.000163ea();
    uVar6 = (**(iVar5 + 0xc))(0x6570,0x56);
    *(*0x65c8 + 0x903) = uVar6;
    iVar5 = fcn.000163ea();
    uVar6 = (**(iVar5 + 0xc))(0x6570,0x57);
    *(*0x65c8 + 0x907) = uVar6;
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x52);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0xd) = uVar8;
    if (0xf < uVar8) {
        *(puVar1 + 0xd) = 0xf;
    }
    uVar8 = puVar1[0xd];
    if (uVar8 != 0) {
        fcn.00016409(uVar8 * 3);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x53);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x497) = uVar8;
    if (0xf < uVar8) {
        *(puVar1 + 0x497) = 0xf;
    }
    uVar8 = *(puVar1 + 0x497);
    if (uVar8 != 0) {
        fcn.00016409(uVar8 * 3);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x54);
    uVar8 = *puVar7;
    if (0xf < *puVar7) {
        uVar8 = 0xf;
    }
    if (uVar8 != 0) {
        fcn.00016409(uVar8 << 2);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x58);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x501) = uVar8;
    if (0xf < uVar8) {
        *(puVar1 + 0x501) = 0xf;
    }
    uVar8 = *(puVar1 + 0x501);
    if (uVar8 != 0) {
        fcn.00016409(uVar8 * 3);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x59);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x902) = uVar8;
    if (0x40 < uVar8) {
        *(puVar1 + 0x902) = 0x40;
    }
    uVar8 = *(puVar1 + 0x902);
    if (uVar8 != 0) {
        fcn.00016409(uVar8 << 4);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x5c);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x912) = uVar8;
    if (6 < uVar8) {
        *(puVar1 + 0x912) = 6;
    }
    cVar2 = *(puVar1 + 0x912);
    if (cVar2 != '\0') {
        fcn.00016409(cVar2);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x60);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x19) = uVar8;
    if (0xf < uVar8) {
        *(puVar1 + 0x19) = 0xf;
    }
    uVar8 = puVar1[0x19];
    if (uVar8 != 0) {
        fcn.00016409(uVar8 * 3);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x61);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x465) = uVar8;
    if (0x40 < uVar8) {
        *(puVar1 + 0x465) = 0x40;
    }
    uVar8 = *(puVar1 + 0x465);
    if (uVar8 != 0) {
        fcn.00016409(uVar8 << 4);
    }
    iVar5 = fcn.000163ea();
    puVar7 = (**(iVar5 + 0x14))(0x6570,0x6c);
    puVar1 = *0x65c8;
    uVar8 = *puVar7;
    *(*0x65c8 + 0x285) = uVar8;
    if (0x40 < uVar8) {
        *(puVar1 + 0x285) = 0x40;
    }
    uVar8 = puVar1[0x285];
    if (uVar8 != 0) {
        fcn.00016409(uVar8 << 2);
    }
    return;
}


/* fcn.000164b0 @ 0x164b0 */

void __cdecl fcn.000164b0(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00016426 @ 0x16426 */

uint __fastcall fcn.00016426(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00010260(param_1,param_2);
    return uVar1;
}


/* fcn.000163a4 @ 0x163a4 */

//WARNING: Removing unreachable block (ram,0x000163bd)

int32_t __cdecl fcn.000163a4(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_ch;
}


/* fcn.00013fa4 @ 0x13fa4 */

uint __cdecl fcn.00013fa4(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    uint uVar1;
    int in_ECX;
    uint *puVar2;
    int in_EDX;
    int iVar3;
    uint32_t uVar4;
    int32_t var_4h;
    
    if (arg_10h == 0) {
code_r0x00013fb9:
        uVar1 = 0x80000002;
    }
    else {
        uVar4 = 0;
        if (arg_ch != 0) {
            do {
                if (in_EDX == 0) {
                    *(uVar4 + arg_10h) = *(*(in_ECX + 0x1110d4) + uVar4 + arg_8h);
                }
                else if (in_EDX == 1) {
                    *(uVar4 * 2 + arg_10h) = *(*(in_ECX + 0x1110d4) + uVar4 * 2 + arg_8h);
                }
                else if (in_EDX == 2) {
                    *(uVar4 * 4 + arg_10h) = *(*(in_ECX + 0x1110d4) + uVar4 * 4 + arg_8h);
                }
                else {
                    if (in_EDX != 3) goto code_r0x00013fb9;
                    iVar3 = uVar4 * 8;
                    puVar2 = *(in_ECX + 0x1110d4) + iVar3 + arg_8h;
                    *(iVar3 + arg_10h) = *puVar2;
                    *(iVar3 + 4 + arg_10h) = puVar2[1];
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < arg_ch);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000140a0 @ 0x140a0 */

int32_t __fastcall fcn.000140a0(int param_1,int param_2)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00013fa4(*(param_1 + 0x119138) + param_2,1,&var_4h);
    return var_4h;
}


/* fcn.00013e29 @ 0x13e29 */

uint __fastcall fcn.00013e29(int param_1)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    int32_t var_10h;
    int32_t var_8h;
    
    cVar2 = '\0';
    iVar3 = *(param_1 + 0x11914a) << 2;
    while( true ) {
        fcn.00013fa4(iVar3,1,&var_8h);
        if (((var_8h == '\x02') && (var_8h._3_1_ == '\x03')) &&
           ((uVar1 = stack0xfffffff5 >> 8 & 0xff, uVar1 == 1 || ((uVar1 == 0x10 || (uVar1 == 0x20)))))) {
            cVar2 = cVar2 + '\x01';
        }
        if (stack0xfffffff5 == '\0') break;
        iVar3 = iVar3 + (stack0xfffffff5 & 0xff) * 4;
    }
    if (cVar2 != '\0') {
        iVar3 = fcn.000164b0(&var_10h);
        if (iVar3 < 0) {
            return 0x80000009;
        }
        fcn.00016426();
        *(param_1 + 0x1192c7) = cVar2;
        *(param_1 + 0x119178) = var_10h;
    }
    return 0;
}


/* fcn.00013ed1 @ 0x13ed1 */

uint __fastcall fcn.00013ed1(int param_1)

{
    uint32_t arg_10h;
    uint8_t uVar1;
    int arg_8h;
    char cStack_8;
    uint8_t uStack_7;
    char cStack_6;
    char cStack_5;
    
    uVar1 = 0;
    arg_8h = *(param_1 + 0x11914a) << 2;
    do {
        fcn.00013fa4(arg_8h,1,&cStack_8);
        if (cStack_8 == '\x02') {
            if (cStack_5 == '\x02') {
                arg_10h = param_1 + 0x119160;
code_r0x00013f37:
                fcn.00013fa4(arg_8h,3,arg_10h);
            }
            else if (cStack_5 == '\x03') {
                if (cStack_6 == '\0') {
                    arg_10h = param_1 + 0x11916c;
                    goto code_r0x00013f37;
                }
                if ((((cStack_6 == '\x01') || (cStack_6 == '\x10')) || (cStack_6 == ' ')) &&
                   ((*(param_1 + 0x1192c7) != 0 && (uVar1 < *(param_1 + 0x1192c7))))) {
                    fcn.00013fa4(arg_8h,3,uVar1 * 0xc + *(param_1 + 0x119178));
                    uVar1 = uVar1 + 1;
                }
            }
        }
        else if (cStack_8 == '\n') {
            *(param_1 + 0x11917c) = arg_8h;
        }
        if (uStack_7 == 0) {
            return 0;
        }
        arg_8h = arg_8h + uStack_7 * 4;
    } while( true );
}


/* fcn.000115db @ 0x115db */

uint __fastcall fcn.000115db(uint param_1,int param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    uint32_t uVar6;
    int32_t iVar7;
    uint32_t uVar8;
    int32_t var_28h;
    int var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    uVar3 = (*(param_2 + 0x119140) >> 0x15 & 0x1f) * 0x20 + (*(param_2 + 0x119140) >> 0x1b);
    uVar8 = 0;
    var_20h = 0;
    var_1ch = 0;
    if (uVar3 == 0) {
code_r0x0001176e:
        uVar5 = 0;
    }
    else {
        var_8h = uVar3;
        var_4h = param_2;
        if (*0x69c4 == 0) {
            iVar4 = fcn.000164b0(&var_20h);
        }
        else {
            iVar4 = (**(*0x69c4 + 0x14))(*0x69c4,4,((uVar3 & 0x1ff) != 0) + (uVar3 >> 9),&var_20h,0x80,0);
        }
        if (-1 < iVar4) {
            fcn.00016426();
            iVar7 = var_4h;
            var_ch = var_20h;
            if (*0x69c4 == 0) {
                iVar4 = fcn.000164b0(&var_20h);
            }
            else {
                iVar4 = (**(*0x69c4 + 0x14))(*0x69c4,4,(uVar3 + 1) * *(var_4h + 0x1110d8),&var_20h,0x80,0);
            }
            if (-1 < iVar4) {
                fcn.00016426();
                uVar1 = *(iVar7 + 0x1110d8);
                uVar6 = uVar1 * 0x1000 - 1;
                if (var_8h != 0) {
                    var_8h = var_ch;
                    do {
                        iVar4 = uVar8 * (uVar1 >> 0x14);
                        uVar2 = uVar8;
                        uVar8 = uVar8 + 1;
                        *var_8h = uVar2 * (uVar1 << 0xc) + CONCAT44(iVar4,var_20h + uVar6 & ~uVar6);
                        var_8h = var_8h + 8;
                        uVar3 = uVar3 - 1;
                    } while (uVar3 != 0);
                    iVar7 = var_4h;
                }
                **(iVar7 + 0x119134) = var_ch;
                goto code_r0x0001176e;
            }
        }
        uVar5 = 0x80000009;
    }
    return uVar5;
}


/* fcn.00011777 @ 0x11777 */

uint __fastcall fcn.00011777(uint param_1,int param_2)

{
    bool bVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint extraout_ECX;
    uint32_t uVar4;
    int arg_8h;
    uint uVar5;
    uint8_t uStack_5;
    uint32_t uStack_4;
    
    uStack_4 = 0;
    uVar4 = 0;
    do {
        uVar2 = fcn.000140a0();
        if ((uVar2 & 0x800) == 0) break;
        if (*0x69c0 != 0) {
            (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 1000);
    uVar4 = fcn.000140a0();
    if ((uVar4 & 0x800) == 0) {
        uVar4 = fcn.000140a0();
        if ((uVar4 & 1) == 0) {
            fcn.000140e1(1);
            uVar4 = 0;
            do {
                uVar2 = fcn.000140a0();
                if ((uVar2 & 1) != 0) break;
                if (*0x69c0 != 0) {
                    (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x140);
            uVar4 = fcn.000140a0();
            if ((uVar4 & 1) == 0) {
                return 0x80000007;
            }
        }
        uVar4 = 0;
        if (*(param_2 + 0x11917c) != 0) {
            fcn.00013fa4(*(param_2 + 0x11917c) + 0x20,1,&uStack_4);
            uVar4 = uStack_4;
        }
        if (-1 < uVar4) {
            uVar4 = fcn.000140a0();
            fcn.000140c7(uVar4 | 2);
            if (*0x69c0 != 0) {
                (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,1000);
            }
            uVar4 = 0;
            do {
                uVar2 = fcn.000140a0();
                if ((uVar2 & 2) == 0) break;
                if (*0x69c0 != 0) {
                    (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 8000);
            uVar4 = fcn.000140a0();
            if ((uVar4 & 2) != 0) {
                return 0x80000007;
            }
        }
        uVar4 = 0;
        do {
            uVar2 = fcn.000140a0();
            if ((uVar2 & 0x800) == 0) break;
            if (*0x69c0 != 0) {
                (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 1000);
        uVar4 = fcn.000140a0();
        if ((uVar4 & 0x800) == 0) {
            *(param_2 + 0x11915c) = *(param_2 + 0x119150) + *(param_2 + 0x1110d4);
            fcn.000140c7(*(param_2 + 0x1110e3));
            uVar5 = 0;
            fcn.00013351(*(param_2 + 0x119134),0);
            fcn.00013368(uVar5,1);
            fcn.00013351(*(param_2 + 0x1110e8) + 1,0xfffffffe < *(param_2 + 0x1110e8));
            fcn.00013368(extraout_ECX,0);
            *(param_2 + 0x1110c4) = 0;
            *(param_2 + 0x1110c0) = *(param_2 + 0x111108);
            *(param_2 + 0x1110c8) = 0x40;
            uStack_4 = 1;
            fcn.0001405a((*(param_2 + 0x11915c) - *(param_2 + 0x1110d4)) + 0x28,1,&uStack_4);
            fcn.00013351(*(param_2 + 0x111114),0);
            fcn.00013351(param_2 + 0x1110c0,0);
            uStack_4 = 4000;
            fcn.0001405a((*(param_2 + 0x11915c) - *(param_2 + 0x1110d4)) + 0x24,1,&uStack_4);
            uVar4 = fcn.000140a0();
            fcn.000140c7(uVar4 | 4);
            arg_8h = (*(param_2 + 0x11915c) - *(param_2 + 0x1110d4)) + 0x20;
            fcn.00013fa4(arg_8h,1,&uStack_4);
            uStack_4 = uStack_4 | 2;
            fcn.0001405a(arg_8h,1,&uStack_4);
            if ((*(param_2 + 0x119148) & 8) != 0) {
                uStack_5 = 0;
                bVar1 = false;
                if (*(param_2 + 0x11913f) != '\0') {
                    do {
                        uVar4 = fcn.000140a0();
                        if ((uVar4 & 0x200) == 0) {
                            uVar4 = fcn.000140a0();
                            fcn.000140c7(uVar4 | 0x200);
                            bVar1 = true;
                        }
                        uStack_5 = uStack_5 + 1;
                    } while (uStack_5 < *(param_2 + 0x11913f));
                    if ((bVar1) && (*0x69c0 != 0)) {
                        (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,20000);
                    }
                }
            }
            uVar4 = fcn.000140a0();
            fcn.000140c7(uVar4 | 1);
            uVar4 = 0;
            do {
                uVar2 = fcn.000140a0();
                if ((uVar2 & 1) == 0) break;
                if (*0x69c0 != 0) {
                    (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x140);
            if ((**0x65c8 & 0x10) != 0) {
                uVar4 = fcn.000140a0();
                fcn.000140c7(uVar4 | 8);
            }
            fcn.00013d7a();
            if ((*(param_2 + 0x119169) != '\0') && (uVar3 = 0, *(param_2 + 0x119169) != '\0')) {
                do {
                    uVar4 = fcn.000140a0();
                    if ((uVar4 & 2) != 0) {
                        fcn.000140c7(0x202);
                        uVar4 = 0;
                        do {
                            uVar2 = fcn.000140a0();
                            if ((uVar2 & 2) == 0) break;
                            if (*0x69c0 != 0) {
                                (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
                            }
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < 200);
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(param_2 + 0x119169));
            }
            return 0;
        }
    }
    return 0x80000007;
}


/* fcn.000140e1 @ 0x140e1 */

void fcn.000140e1(uint32_t param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000140a0();
    fcn.000140c7(uVar1 & ~param_1);
    return;
}


/* fcn.000140c7 @ 0x140c7 */

void __fastcall fcn.000140c7(int param_1,int param_2)

{
    fcn.0001405a(*(param_1 + 0x119138) + param_2,1,&stack0x00000004);
    return;
}


/* fcn.0001405a @ 0x1405a */

uint __cdecl fcn.0001405a(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    uint uVar1;
    int in_ECX;
    int iVar2;
    uint32_t uVar3;
    
    if (arg_10h == 0) {
        uVar1 = 0x80000002;
    }
    else {
        uVar3 = 0;
        if (arg_ch != 0) {
            do {
                iVar2 = uVar3 * 4;
                uVar3 = uVar3 + 1;
                *(*(in_ECX + 0x1110d4) + iVar2 + arg_8h) = *(iVar2 + arg_10h);
            } while (uVar3 < arg_ch);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00013351 @ 0x13351 */

void __fastcall fcn.00013351(int param_1,int param_2)

{
    fcn.0001405a(param_2 - *(param_1 + 0x1110d4),2,&stack0x00000004);
    return;
}


/* fcn.00013368 @ 0x13368 */

uint __fastcall fcn.00013368(int *param_1,int param_2,uint param_3,char param_4)

{
    int *piVar1;
    
    *param_1 = param_2;
    param_1[1] = 0x40;
    *(param_1 + 4) = 1;
    param_1[2] = param_2 + 0x3f0;
    param_1[3] = param_2;
    fcn.00016426();
    if (param_4 != '\0') {
        piVar1 = param_1[2];
        piVar1[1] = 0;
        *piVar1 = param_2;
        piVar1[3] = piVar1[3] & 0xffff1bffU | 0x1802;
    }
    return 0;
}


/* fcn.00013d7a @ 0x13d7a */

void __fastcall fcn.00013d7a(uint param_1,int param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    
    if ((*(param_2 + 0x119169) != '\0') && (uVar2 = 0, *(param_2 + 0x119169) != '\0')) {
        do {
            uVar1 = fcn.000140a0();
            if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
                fcn.000140c7(0x210);
                uVar1 = fcn.000140a0();
                uVar3 = 0;
                do {
                    if ((uVar1 & 0x200000) != 0) break;
                    if (*0x69c0 != 0) {
                        (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
                    }
                    uVar1 = fcn.000140a0();
                    uVar3 = uVar3 + 1;
                } while (uVar3 < 2000);
                fcn.000140c7(0x280200);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_2 + 0x119169));
    }
    return;
}


/* fcn.00013ce4 @ 0x13ce4 */

int __fastcall fcn.00013ce4(int param_1,uint32_t param_2)

{
    return ((param_2 & 0xff) * 0x20 + -0x20) * *(param_1 + 0x1110dc) + *(param_1 + 0x119130);
}


/* fcn.00011fe8 @ 0x11fe8 */

uint __fastcall fcn.00011fe8(uchar *param_1,uchar *param_2,char param_3)

{
    uint8_t uVar1;
    
    uVar1 = 1;
    do {
        if (param_1[1] == param_3) {
            *param_2 = *param_1;
            return 0;
        }
        uVar1 = uVar1 + 1;
        param_1 = param_1 + 7;
    } while (uVar1 < 0x21);
    return 0x8000000e;
}


/* fcn.000138aa @ 0x138aa */

int __fastcall fcn.000138aa(int param_1,uint32_t param_2,uint8_t param_3)

{
    int iVar1;
    
    iVar1 = *(param_1 + 0x119128);
    fcn.00013368(param_1,1);
    return ((param_2 & 0xff) * 0x20 + param_3 + -0x20) * 0x20 + iVar1;
}


/* fcn.00013748 @ 0x13748 */

uint __fastcall fcn.00013748(uint param_1,int param_2,int param_3,uint *param_4)

{
    int iVar1;
    uint *puVar2;
    uchar uVar3;
    uint *puVar4;
    uint32_t uVar5;
    int iVar6;
    uint uVar7;
    uchar uStack_1;
    
    puVar4 = fcn.000133b8();
    puVar2 = param_4;
    iVar1 = param_3;
    puVar4[3] = puVar4[3] ^ (param_3 << 10 ^ puVar4[3]) & 0xfc00U;
    uVar5 = puVar4[3];
    if (param_3 == 10) {
        uVar3 = *param_4;
code_r0x0001381e:
        *(puVar4 + 0xf) = uVar3;
    }
    else {
        if (param_3 == 0xb) {
            *puVar4 = *(param_2 + 0x1110e4);
            puVar4[1] = 0;
            *(puVar4 + 0xf) = *param_4;
            uVar5 = (*(param_4 + 1) << 9 ^ puVar4[3]) & 0x200;
        }
        else {
            if (param_3 < 0xc) goto code_r0x00013821;
            if (param_3 < 0xe) {
                *puVar4 = *(param_2 + 0x1110e4);
                puVar4[1] = 0;
                *(puVar4 + 0xf) = *param_4;
                puVar4[3] = puVar4[3] & 0xfffffdff;
                goto code_r0x00013821;
            }
            if (param_3 == 0xe) {
                puVar4[3] = uVar5 & 0xfffffdff;
            }
            else if (param_3 != 0xf) {
                if (param_3 != 0x10) goto code_r0x00013821;
                *puVar4 = *param_4;
                puVar4[1] = param_4[1];
                puVar4[3] = (param_4[3] ^ uVar5) & 0x1f0000 ^ uVar5;
                uVar3 = *(param_4 + 0xf);
                goto code_r0x0001381e;
            }
            *(puVar4 + 0xf) = *param_4;
            uVar5 = (*(param_4 + 1) << 0x10 ^ puVar4[3]) & 0x1f0000;
        }
        puVar4[3] = puVar4[3] ^ uVar5;
    }
code_r0x00013821:
    param_3 = 0;
    puVar4[3] = puVar4[3] ^ (*(param_2 + 0x1110f8) ^ puVar4[3]) & 1;
    fcn.0001405a(*(param_2 + 0x11914c),1,&param_3);
    iVar6 = fcn.000135f9(puVar4,0x21,&uStack_1,500,&param_3);
    if (iVar6 == -0x7ffffff9) {
        uVar7 = 0x80000007;
    }
    else {
        if (iVar1 == 9) {
            *puVar2 = param_3;
        }
        else if ((iVar1 == 0xe) && (*0x69c0 != 0)) {
            (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,10000);
        }
        uVar7 = 0;
    }
    return uVar7;
}


/* fcn.00011bf2 @ 0x11bf2 */

int __fastcall fcn.00011bf2(uint param_1,int param_2,int param_3,uint8_t param_4,uint8_t param_5)

{
    uint32_t *puVar1;
    char cVar2;
    uchar uVar3;
    int iVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    int iVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t uStack_4;
    
    puVar9 = NULL;
    iVar4 = fcn.00013ce4();
    uVar10 = *(param_2 + 0x1110e4);
    if (0xfffffff < (*(iVar4 + 0xc) & 0xf8000000)) {
        return -0x7ffffff9;
    }
    uStack_4 = uVar10;
    fcn.00016426();
    *(uVar10 + 4) = 3;
    puVar11 = *(param_2 + 0x1110dc) + uVar10;
    uVar10 = *puVar11;
    *puVar11 = uVar10 & 0x7f00000 | 0x8000000;
    if (*(param_3 + 0x90) == 0) {
        uVar7 = param_5;
    }
    else {
        fcn.00011fe8(*(param_3 + 0x90) & 0x7f);
        puVar9 = fcn.00013ce4();
        uVar7 = *(puVar9 + 6);
    }
    *(puVar11 + 6) = uVar7;
    cVar2 = *(param_3 + 0x38);
    if (cVar2 == '\x01') {
        uVar10 = uVar10 & 0x7200000 | 0x8200000;
code_r0x00011d13:
        *puVar11 = uVar10;
    }
    else {
        if (cVar2 == '\x02') {
            uVar10 = uVar10 & 0x7100000 | 0x8100000;
            goto code_r0x00011d13;
        }
        if (cVar2 == '\x03') {
            uVar10 = uVar10 & 0x7300000 | 0x8300000;
            goto code_r0x00011d13;
        }
        if (cVar2 == '\x04') {
            uVar10 = uVar10 & 0x7400000 | 0x8400000;
            goto code_r0x00011d13;
        }
        if (cVar2 == '\x05') {
            uVar10 = uVar10 & 0x7500000 | 0x8500000;
            goto code_r0x00011d13;
        }
    }
    uVar10 = *(*(param_2 + 0x1110dc) + iVar4) & 7;
    if (uVar10 == 0) {
        iVar8 = fcn.000138aa(0);
    }
    else {
        if ((uVar10 != 1) && (uVar10 != 3)) {
            return -0x7ffffff9;
        }
        iVar8 = *(param_2 + 0x119128) + param_4 * 0x400 + -0x400;
    }
    if (iVar8 == 0) {
        return -0x7ffffff9;
    }
    uVar6 = *(param_2 + 0x1110dc);
    *(uStack_4 + 4 + uVar6 * 2) = *(uStack_4 + 4 + uVar6 * 2) & 0xffffffe7 | 0x20;
    *(uStack_4 + 6 + uVar6 * 2) = *(param_3 + 0x36);
    uVar7 = *(iVar8 + 0x10);
    uVar10 = *(iVar8 + 0xc);
    puVar1 = uStack_4 + 4 + uVar6 * 2;
    *puVar1 = *puVar1 | 6;
    *(uStack_4 + 8 + uVar6 * 2) = uVar7 | uVar10;
    *(uStack_4 + 0xc + uVar6 * 2) = 0;
    *(uStack_4 + 0x10 + uVar6 * 2) = 8;
    if (*(param_3 + 0x90) != 0) {
        uVar10 = *puVar9 & 0xf00000;
        if ((uVar10 == 0x400000) || (uVar10 == 0x500000)) {
            uVar7 = 0;
            do {
                if (((*puVar9 & 0xfffff) >> ((uVar7 & 7) << 2) & 0xf) == 0) break;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 5);
            uVar10 = ((param_5 << ((uVar7 & 7) << 2) | *puVar9) ^ *puVar11) & 0xfffff;
        }
        else {
            if (((*puVar11 & 0xf00000) != 0x100000) && ((*puVar11 & 0xf00000) != 0x200000)) goto code_r0x00011e61;
            if (uVar10 == 0x300000) {
                *(puVar11 + 2) = 0;
                uVar3 = *(param_3 + 0x90) >> 7;
            }
            else {
                *(puVar11 + 2) = puVar9[2];
                uVar3 = puVar9[2] >> 8;
            }
            *(puVar11 + 9) = uVar3;
            uVar10 = (*puVar9 ^ *puVar11) & 0x2000000;
        }
        *puVar11 = *puVar11 ^ uVar10;
    }
code_r0x00011e61:
    uVar5 = 0;
    if ((((*puVar11 & 0xf00000) != 0x400000) && ((*puVar11 & 0xf00000) != 0x500000)) && (*(iVar4 + 0xc) < 0x8000000)) {
        uVar5 = 0x100;
    }
    uStack_4 = param_4 | uVar5;
    iVar4 = fcn.00013748(0xb,&uStack_4);
    if (iVar4 == 0) {
        return 0;
    }
    fcn.00013748(10,&param_4);
    iVar8 = *(param_2 + 0x119134);
    *(iVar8 + param_4 * 8) = 0;
    *(iVar8 + 4 + param_4 * 8) = 0;
    return iVar4;
}


/* fcn.00011fb0 @ 0x11fb0 */

uint __cdecl fcn.00011fb0(int8_t arg_8h,int32_t arg_ch,int8_t arg_10h)

{
    uint8_t uVar1;
    uint uVar2;
    char *in_ECX;
    char in_DL;
    
    if (arg_10h == 0) {
code_r0x00011fd5:
        in_ECX[2] = arg_8h;
        *(in_ECX + 3) = arg_ch;
        uVar2 = 0;
        *in_ECX = in_DL;
    }
    else {
        uVar1 = 1;
        do {
            if (*in_ECX == '\0') {
                in_ECX[1] = arg_10h;
                goto code_r0x00011fd5;
            }
            uVar1 = uVar1 + 1;
            in_ECX = in_ECX + 7;
        } while (uVar1 < 0x21);
        uVar2 = 0x8000000e;
    }
    return uVar2;
}


/* fcn.000133b8 @ 0x133b8 */

uint * __fastcall fcn.000133b8(uint *param_1)

{
    uint *puVar1;
    
    puVar1 = param_1[3];
    if ((puVar1[3] & 0xfc00) == 0x1800) {
        puVar1[3] = puVar1[3] ^ (*(param_1 + 4) ^ puVar1[3]) & 1;
        puVar1 = *param_1;
        *(param_1 + 4) = *(param_1 + 4) ^ 1;
        param_1[3] = puVar1;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[3] = puVar1[3] ^ (*(param_1 + 4) ^ puVar1[3]) & 1;
    param_1[3] = param_1[3] + 0x10;
    return puVar1;
}


/* fcn.000122ae @ 0x122ae */

uint32_t __fastcall fcn.000122ae(uint param_1,int param_2,uint8_t param_3,uint8_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t *puVar3;
    
    fcn.0001405a(*(param_2 + 0x11914c) + param_3 * 4,1,&param_4);
    if (param_3 == 0) {
        uVar1 = 0x80000007;
    }
    else {
        iVar2 = fcn.00013ce4();
        puVar3 = *(param_2 + 0x1110dc) * param_4 + iVar2;
        uVar1 = 0;
        iVar2 = *0x69c0;
        do {
            if ((*puVar3 & 7) == 1) break;
            if (iVar2 != 0) {
                (**(iVar2 + 4))(*(param_2 + 0x119267),iVar2,100);
                iVar2 = *0x69c0;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < 100);
        uVar1 = -((*puVar3 & 7) != 1) & 0x80000007;
    }
    return uVar1;
}


/* fcn.000135f9 @ 0x135f9 */

uint __fastcall
fcn.000135f9(uint param_1,int param_2,int param_3,uint32_t param_4,char *param_5,uint16_t param_6,
            uint32_t *param_7)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint *puVar5;
    int *piVar6;
    uint uVar7;
    int iStack_8;
    uint32_t uStack_4;
    
    uVar7 = 0;
    uStack_4 = 0;
    if (param_6 == 0xffffffff) {
code_r0x000136cb:
        *param_5 = -1;
code_r0x000136cf:
        uVar7 = 0x80000007;
code_r0x000136d4:
        fcn.00013486();
        return uVar7;
    }
    iStack_8 = *0x69c0;
code_r0x00013623:
    uVar2 = *(param_2 + 0x111118);
    piVar6 = *(param_2 + 0x111114);
code_r0x00013683:
    uVar4 = piVar6[3];
    if ((uVar4 & 1) == uVar2) {
        cVar3 = *(piVar6 + 0xb);
        *param_5 = cVar3;
        if ((cVar3 != '\x06') && (cVar3 != '\x04')) {
            if (((uVar4 >> 10 & 0x3f) != param_4) || (*piVar6 != param_3)) goto code_r0x00013663;
            if (param_4 == 0x21) {
                *param_7 = *(piVar6 + 0xf);
            }
            if (((param_4 == 0x20) && (param_7 != NULL)) && (*param_7 = piVar6[2] & 0xffffff, *(piVar6 + 0xb) == '\r'))
            {
                puVar5 = *piVar6;
                while (puVar5[3] = puVar5[3] & 0xffffffdb, (*(puVar5 + 3) & 0x10) != 0) {
                    puVar1 = puVar5 + 7;
                    puVar5 = puVar5 + 4;
                    if ((*puVar1 & 0xfc00) == 0x1800) {
                        puVar5 = *puVar5;
                    }
                    *param_7 = *param_7 + (puVar5[2] & 0x1ffff);
                }
            }
            if ((*(piVar6 + 0xb) == '\x01') || (*(piVar6 + 0xb) == '\r')) goto code_r0x000136d4;
        }
        goto code_r0x000136cf;
    }
    goto code_r0x00013697;
code_r0x00013663:
    if (piVar6 == *(param_2 + 0x111110)) {
        piVar6 = *(param_2 + 0x111108);
        uVar2 = uVar2 ^ 1;
    }
    else {
        piVar6 = piVar6 + 4;
    }
    if (piVar6 == *(param_2 + 0x111114)) goto code_r0x00013693;
    goto code_r0x00013683;
code_r0x00013693:
    *param_5 = '\x15';
code_r0x00013697:
    if (iStack_8 != 0) {
        (**(iStack_8 + 4))(*(param_2 + 0x119267),iStack_8,1000);
        iStack_8 = *0x69c0;
    }
    uStack_4 = uStack_4 + 1;
    if (param_6 + 1 <= uStack_4) goto code_r0x000136cb;
    goto code_r0x00013623;
}


/* fcn.00012146 @ 0x12146 */

uint __fastcall fcn.00012146(uint param_1,int param_2,uint8_t param_3,uint8_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    char cVar4;
    uint uVar5;
    uint32_t *puVar6;
    uint32_t uStack_18;
    int aiStack_14 [3];
    uint32_t uStack_8;
    
    uVar5 = 0;
    if (param_4 == 0) {
        cVar4 = '\x01';
    }
    else {
        cVar4 = (param_4 & 0xf) * '\x02' - (param_4 >> 7);
    }
    uVar1 = CONCAT11(param_3,cVar4) & 0xff;
    iVar2 = fcn.00013ce4();
    puVar6 = iVar2 + *(param_2 + 0x1110dc) * uVar1;
    if ((*puVar6 & 7) == 1) {
        uStack_18 = CONCAT11(param_3,cVar4) * 0x100 + param_3;
        uVar5 = fcn.00013748(0xf,&uStack_18);
    }
    uVar3 = *puVar6 & 7;
    if ((uVar3 == 3) || (uVar3 == 4)) {
        aiStack_14[1] = 0;
        iVar2 = ((cVar4 - 1) + param_3 * 0x20 + -0x20) * 0x20 + *(param_2 + 0x119128);
        aiStack_14[0] = *(iVar2 + 0x10) + *(iVar2 + 0xc);
        uStack_8 = (param_3 << 8 | uVar1) << 0x10 | uStack_8 & 0xe0ffff;
        uVar5 = fcn.00013748(0x10,aiStack_14);
    }
    return uVar5;
}


/* fcn.0001206f @ 0x1206f */

uint __fastcall fcn.0001206f(uint param_1,int param_2,uint8_t param_3,uint8_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t *puVar4;
    uint32_t uStack_18;
    int aiStack_14 [3];
    uint32_t uStack_8;
    
    uVar3 = 0;
    iVar1 = fcn.00013ce4();
    puVar4 = iVar1 + *(param_2 + 0x1110dc) * param_4;
    if ((*puVar4 & 7) == 2) {
        uStack_18 = param_4 * 0x100 + param_3;
        uVar3 = fcn.00013748(0xe,&uStack_18);
    }
    uVar2 = *puVar4 & 7;
    if ((uVar2 == 3) || (uVar2 == 4)) {
        aiStack_14[1] = 0;
        iVar1 = ((param_4 - 1) + param_3 * 0x20 + -0x20) * 0x20 + *(param_2 + 0x119128);
        aiStack_14[0] = *(iVar1 + 0x10) + *(iVar1 + 0xc);
        uStack_8 = (param_3 << 8 | param_4 & 0x1f) << 0x10 | uStack_8 & 0xe0ffff;
        uVar3 = fcn.00013748(0x10,aiStack_14);
    }
    return uVar3;
}


/* fcn.0001222e @ 0x1222e */

void __cdecl fcn.0001222e(int8_t arg_8h,int8_t arg_ch)

{
    uint32_t *puVar1;
    int in_EDX;
    int32_t var_4h;
    
    puVar1 = fcn.00013ce4();
    if (((*puVar1 & 0xf00000) == 0x100000) && (*(*(in_EDX + 0x1110dc) + 6 + puVar1) != arg_ch)) {
        fcn.00016426();
        *(*(in_EDX + 0x1110e4) + 4) = 2;
        *(*(in_EDX + 0x1110e4) + 6 + *(in_EDX + 0x1110dc) * 2) = arg_ch;
        var_4h = arg_8h;
        fcn.00013748(0xd,&var_4h);
    }
    return;
}


/* fcn.0001200c @ 0x1200c */

uint __cdecl fcn.0001200c(int8_t arg_8h,int8_t arg_ch)

{
    int iVar1;
    int in_EDX;
    uint uVar2;
    unkbyte3 in_stack_00000009;
    
    uVar2 = 0;
    iVar1 = fcn.00013ce4();
    if ((*(iVar1 + *(in_EDX + 0x1110dc) * (_arg_ch & 0xff)) & 7) == 2) {
        _arg_ch = arg_ch * 0x100 + arg_8h;
        uVar2 = fcn.00013748(0xe,&arg_ch);
    }
    return uVar2;
}


/* fcn.00013486 @ 0x13486 */

uint __fastcall fcn.00013486(uint param_1,int param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    uint8_t uVar3;
    int iVar4;
    uint uVar5;
    uint32_t uStack_10;
    int iStack_c;
    
    fcn.00013fa4((*(param_2 + 0x119158) - *(param_2 + 0x1110d4)) + 0x30,2,&uStack_10);
    if ((uStack_10 == *(param_2 + 0x119134)) && (iStack_c == 0)) {
        uVar1 = fcn.000140a0();
        if ((uVar1 & 8) != 0) {
            fcn.000140c7(8);
            iVar4 = (*(param_2 + 0x11915c) - *(param_2 + 0x1110d4)) + 0x20;
            fcn.00013fa4(iVar4,1,&uStack_10);
            uStack_10 = uStack_10 | 1;
            fcn.0001405a(iVar4,1,&uStack_10);
        }
        puVar2 = *(param_2 + 0x111114);
        if ((puVar2[3] & 1) == *(param_2 + 0x111118)) {
            uVar5 = 0;
            if ((puVar2[3] & 1) == *(param_2 + 0x111118)) {
                do {
                    if (*(param_2 + 0x111114) == *(param_2 + 0x111110)) {
                        iVar4 = *(param_2 + 0x111108);
                        *(param_2 + 0x111118) = *(param_2 + 0x111118) ^ 1;
                    }
                    else {
                        iVar4 = *(param_2 + 0x111114) + 0x10;
                    }
                    *(param_2 + 0x111114) = iVar4;
                    if ((puVar2[3] & 0xfc00) == 0x8000) {
                        uVar3 = puVar2[3] >> 0x10;
                        uStack_10 = CONCAT31(uStack_10._1_3_,uVar3) & 0xffffff1f;
                        if (*(param_2 + 0x1192bb) == (uVar3 & 0x1f)) {
                            uVar5 = fcn.00013402(*puVar2,puVar2[1],uStack_10);
                        }
                        else {
                            uVar5 = 0x80000006;
                        }
                    }
                    puVar2 = *(param_2 + 0x111114);
                } while ((puVar2[3] & 1) == *(param_2 + 0x111118));
            }
            fcn.00013351(*(param_2 + 0x111114) | 8,0);
            return uVar5;
        }
    }
    return 0x80000006;
}


/* fcn.00013cfe @ 0x13cfe */

uint32_t __fastcall fcn.00013cfe(int param_1,uint32_t param_2)

{
    uint8_t uVar1;
    uint in_EAX;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *(param_1 + 0x119175);
    uVar2 = CONCAT31(in_EAX >> 8,uVar1);
    if (uVar1 != 0) {
        uVar5 = *(param_1 + 0x119174) & 0xff;
        if ((uVar5 <= (param_2 & 0xff)) && (uVar2 = uVar1 + uVar5, (param_2 & 0xff) < uVar2)) {
            return CONCAT31(uVar2 >> 8,1);
        }
    }
    uVar1 = *(param_1 + 0x1192c7);
    if ((uVar1 != 0) && (uVar5 = 0, uVar1 != 0)) {
        do {
            uVar2 = uVar5 * 0xc + *(param_1 + 0x119178);
            if (*(uVar2 + 9) != 0) {
                uVar3 = *(uVar2 + 8) & 0xff;
                uVar6 = (CONCAT31(param_2,uVar1) & 0xffff) >> 8;
                if ((uVar3 <= uVar6) && (uVar2 = *(uVar2 + 9) + uVar3, uVar6 < uVar2)) {
                    return CONCAT31(uVar2 >> 8,1);
                }
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < uVar1);
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00012a44 @ 0x12a44 */

uint __fastcall fcn.00012a44(uint param_1,int param_2)

{
    char cVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    
    cVar1 = fcn.00013cfe();
    if (cVar1 == '\0') {
        fcn.000140c7(0x210);
        uVar4 = 0;
        do {
            uVar2 = fcn.000140a0();
            if ((uVar2 & 0x200000) != 0) goto code_r0x00012b02;
            if (*0x69c0 != 0) {
                (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 2000);
        uVar2 = uVar2 & 0x200000;
    }
    else {
        fcn.000140c7(0x80000200);
        uVar4 = 0;
        do {
            uVar2 = fcn.000140a0();
            if ((uVar2 & 0x280000) != 0) goto code_r0x00012b02;
            if (*0x69c0 != 0) {
                (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,100);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 6000);
        uVar2 = uVar2 & 0x280000;
    }
    if (uVar2 == 0) {
        uVar3 = 0x80000002;
    }
    else {
code_r0x00012b02:
        fcn.000140c7(0x280200);
        if (*0x69c0 != 0) {
            (**(*0x69c0 + 4))(*(param_2 + 0x119267),*0x69c0,10000);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00013402 @ 0x13402 */

uint __fastcall fcn.00013402(int param_1,uint8_t param_2)

{
    uint uVar1;
    int *piVar2;
    
    if (*(param_1 + 0x1192bc) == param_2) {
        piVar2 = fcn.000133b8();
        piVar2[1] = 0;
        *piVar2 = param_1 + 0x1192bd;
        piVar2[3] = piVar2[3] & 0xffff07ffU | 0x424;
        piVar2[2] = piVar2[2] & 0xfffe0008U | 8;
        fcn.0001405a(*(param_1 + 0x11914c) + param_2 * 4,1,&stack0x0000000c);
        uVar1 = 0;
    }
    else {
        uVar1 = 0x80000006;
    }
    return uVar1;
}


/* fcn.000138e5 @ 0x138e5 */

uint8_t __fastcall fcn.000138e5(char param_1,char param_2,uint8_t param_3)

{
    char cVar1;
    
    if (((param_1 == '\x04') || (param_1 == '\x02')) || (param_1 == '\x06')) {
        return (param_2 != '\x03') - 1U & param_3;
    }
    if (((param_2 != '\x05') && (param_2 != '\x04')) && (param_2 != '\x03')) {
        cVar1 = '\0';
        for (; param_3 != 0; param_3 = param_3 >> 1) {
            cVar1 = cVar1 + '\x01';
        }
        return cVar1 + 2;
    }
    return param_3 - 1;
}


/* fcn.0001233f @ 0x1233f */

int __cdecl
fcn.0001233f(uint noname_0,int32_t arg_ch,uint32_t arg_10h,int32_t arg_20h,int32_t arg_28h,int32_t arg_2ch,
            int32_t arg_34h)

{
    uint8_t uVar1;
    int iVar2;
    int32_t *piVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    char cStack_19;
    uint uStack_18;
    uint32_t uStack_14;
    int iStack_10;
    ushort *puStack_c;
    
    uVar4 = *arg_20h;
    uStack_14 = (uVar4 & 0xff00) + *arg_20h;
    if (arg_10h == '\0') {
        uStack_18 = CONCAT31(uStack_18._1_3_,*(arg_ch + -0xeb));
        uVar1 = *(arg_ch + -0xeb);
    }
    else {
        fcn.00011fe8(arg_10h);
        uVar4 = *arg_20h;
        uVar1 = uStack_18;
    }
    if (uVar1 == 0) {
        return -0x7ffffff9;
    }
    if ((uVar4 == '\0') && (uVar4 >> 8 == '\x05')) {
        iVar2 = fcn.00013ce4();
        if ((*(iVar2 + 0xc) & 0xf8000000) == 0x8000000) {
            fcn.00011bf2(*(arg_ch + -0xe8),uStack_18,*(arg_ch + -0xe9));
        }
        fcn.00011fb0(*(arg_ch + -0xe9),*(arg_ch + -0xe8),*(arg_20h + 2));
    }
    else {
        *arg_34h = 0;
        iStack_10 = *(arg_ch + -0x143) + -0x400 + uVar1 * 0x400;
        puStack_c = fcn.000133b8();
        uVar5 = *(puStack_c + 6);
        *puStack_c = uStack_14;
        *(puStack_c + 6) = uVar5 & 0xffff0bff | 0x840;
        puStack_c[1] = *(arg_20h + 2);
        puStack_c[2] = *(arg_20h + 4);
        puStack_c[3] = *arg_2ch;
        *(puStack_c + 4) = *(puStack_c + 4) & 0xfffe0008 | 8;
        if (0xff < *(arg_ch + -0x131)) {
            if (*arg_2ch == 0) {
                uVar5 = uVar5 & 0xfffc0bff | 0x840;
            }
            else if ((uStack_14 & 0x80) == 0) {
                uVar5 = uVar5 & 0xfffe0bff | 0x20840;
            }
            else {
                uVar5 = uVar5 & 0xffff0bff | 0x30840;
            }
            *(puStack_c + 6) = uVar5;
        }
        if (*arg_2ch != 0) {
            piVar3 = fcn.000133b8();
            uVar6 = (uStack_14 & 0x80 | 6) << 9 | piVar3[3] & 0xfffe0fffU;
            piVar3[3] = uVar6;
            uVar5 = *arg_2ch;
            piVar3[1] = 0;
            piVar3[2] = piVar3[2] ^ (piVar3[2] ^ uVar5) & 0x1ffff;
            *piVar3 = arg_28h;
            piVar3[3] = (*(iStack_10 + 0x10) ^ uVar6) & 1 ^ uVar6;
        }
        puStack_c = fcn.000133b8();
        uVar5 = *(puStack_c + 0xc) & 0xffff13ff;
        *(puStack_c + 0xc) = uVar5 | 0x1020;
        if ((uStack_14 & 0x80) == 0) {
            *(puStack_c + 0xc) = uVar5 | 0x11020;
        }
        *(puStack_c + 0xc) = *(puStack_c + 0xc) ^ (*(iStack_10 + 0x10) ^ *(puStack_c + 0xc)) & 1;
        iVar2 = fcn.000122ae(uStack_18,1);
        if (iVar2 < 0) {
            return iVar2;
        }
        puStack_c = fcn.000135f9(puStack_c,0x20,&cStack_19,2000,0);
        if (puStack_c < 0) {
            if (cStack_19 == '\x02') {
                *arg_34h = *arg_34h | 4;
            }
            else {
                if (cStack_19 == '\x03') {
                    *arg_34h = *arg_34h | 8;
                }
                else if (cStack_19 != '\x04') {
                    if (cStack_19 != '\x06') {
                        if (cStack_19 != -1) {
                            return puStack_c;
                        }
                        *arg_34h = *arg_34h | 0x40;
                        fcn.00012146(uStack_18,0);
                        return puStack_c;
                    }
                    *arg_34h = *arg_34h | 2;
                }
                fcn.0001206f(uStack_18,1);
            }
            return puStack_c;
        }
        if ((*(arg_20h + 1) == '\x06') && (*arg_2ch == 8)) {
            fcn.0001222e(uStack_18,*(arg_28h + 7));
        }
        if ((((*(arg_20h + 1) == '\x01') && (*(arg_20h + 2) == 0)) && (*arg_20h == '\x02')) && (*(arg_20h + 4) != '\0'))
        {
            fcn.00012146(uStack_18,*(arg_20h + 4));
        }
    }
    return 0;
}


/* fcn.00014102 @ 0x14102 */

int __cdecl fcn.00014102(int8_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int iVar2;
    int in_ECX;
    uint8_t uVar3;
    int32_t var_8h;
    int8_t var_4h;
    
    iVar2 = arg_8h << 8;
    do {
        iVar1 = fcn.0001433b();
        if (iVar1 < 0) {
            return iVar1;
        }
    } while ((*(in_ECX + 2) != iVar2 >> 8) && (uVar3 = iVar2 + 1, iVar2 = CONCAT31(iVar2 >> 8,uVar3), uVar3 < 0x10));
    if (iVar2 == '\x10') {
        iVar2 = -0x7ffffffe;
    }
    else {
        *arg_ch = iVar2;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00015257 @ 0x15257 */

void __cdecl fcn.00015257(int32_t arg_8h)

{
    int *in_ECX;
    int in_EDX;
    uint8_t uVar1;
    int32_t var_4h;
    
    uVar1 = 0;
    var_4h = in_ECX;
    (**(*in_ECX + 0x54))(&var_4h,4,0);
    (**(in_EDX + 0x10))();
    do {
        (**(in_EDX + 0xc))();
        if ((var_4h & 0x100000U) != 0) goto code_r0x000152ba;
        if (*0x69c0 != 0) {
            (**(*0x69c0 + 4))();
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 100);
    if ((var_4h._2_2_ & 0x10) != 0) {
code_r0x000152ba:
        (**(in_EDX + 0x14))();
        (**(in_EDX + 0xc))();
        if (*0x69c0 != 0) {
            (**(*0x69c0 + 4))();
        }
    }
    return;
}


/* fcn.000143f7 @ 0x143f7 */

uint __cdecl fcn.000143f7(int16_t arg_8h)

{
    uint uVar1;
    uint *in_EDX;
    int16_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_EDX == NULL) {
        uVar1 = 0x80000002;
    }
    else {
        uVar1 = (**in_EDX)();
    }
    return uVar1;
}


/* fcn.00014bf5 @ 0x14bf5 */

int __fastcall fcn.00014bf5(int *param_1,int param_2)

{
    uint *puVar1;
    bool bVar2;
    int32_t arg_8h;
    uint *puVar3;
    uint8_t uVar4;
    uint8_t *puVar5;
    int iVar6;
    uint32_t uVar7;
    uint *puVar8;
    uint *puVar9;
    uint8_t uStack_11;
    int32_t iStack_10;
    uint32_t uStack_c;
    uint *puStack_8;
    int *piStack_4;
    
    bVar2 = false;
    piStack_4 = param_1;
    (**(param_2 + 8))(param_1,param_2,&uStack_11);
    uVar4 = 1;
    iStack_10 = CONCAT31(iStack_10._1_3_,1);
    if (uStack_11 != 0) {
        do {
            arg_8h = iStack_10;
            if (*(*0x65c8 + 0xa14) != 0) {
                puVar5 = *0x65c8 + 0x916;
                uVar7 = *(*0x65c8 + 0xa14);
                do {
                    if (((*(puVar5 + -2) == *(param_2 + 0x36)) && (*puVar5 == iStack_10)) && (puVar5[1] == 0)) {
                        bVar2 = true;
                    }
                    puVar5 = puVar5 + 4;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
                uVar4 = iStack_10;
            }
            if (bVar2) {
                bVar2 = false;
            }
            else {
                (**(param_2 + 0xc))(param_1,param_2,iStack_10,&uStack_c);
                if ((uStack_c & 0x10000) != 0) {
                    (**(param_2 + 0x14))(param_1,param_2,arg_8h,0x10);
                    if ((uStack_c & 1) != 0) {
                        if ((uStack_c >> 1 & 1) == 0) {
                            fcn.00015257(arg_8h);
                            (**(param_2 + 0xc))(param_1,param_2,arg_8h,&uStack_c);
                            if (((uStack_c & 1) == 0) || ((uStack_c >> 1 & 1) == 0)) goto code_r0x00014e72;
                        }
                        if (*0x69c4 == 0) {
                            iVar6 = fcn.000164db();
                        }
                        else {
                            iVar6 = (**(*0x69c4 + 0x14))(*0x69c4,4,1,&puStack_8,0x80,0);
                        }
                        puVar3 = puStack_8;
                        if (iVar6 < 0) {
                            return -0x7ffffff7;
                        }
                        (**(*param_1 + 0x54))(puStack_8,0x98,0);
                        param_1 = piStack_4;
                        *puVar3 = 0x44627355;
                        puVar3[0xe] = 2;
                        puVar3[0x10] = param_2;
                        *(puVar3 + 0xd) = 0;
                        *(puVar3 + 0x36) = 8;
                        puVar1 = puVar3 + 1;
                        *(puVar3 + 0x96) = 0;
                        puVar8 = 0x6950;
                        puVar9 = puVar1;
                        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                            *puVar9 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar9 = puVar9 + 1;
                        }
                        puVar3[7] = *0x6944;
                        puVar3[8] = *0x6948;
                        puVar3[9] = *0x694c;
                        puVar3[9] = puVar1;
                        puVar3[10] = *0x6968;
                        puVar3[0xb] = *0x696c;
                        puVar3[0xc] = *0x6970;
                        puVar3[0xc] = puVar1;
                        *(puVar3 + 0x24) = 0;
                        if ((uStack_c >> 9 & 1) != 0) {
                            *(puVar3 + 0xe) = 1;
                        }
                        if ((uStack_c >> 10 & 1) != 0) {
                            *(puVar3 + 0xe) = 3;
                            *(puVar3 + 0x36) = 0x40;
                        }
                        if ((uStack_c >> 0xb & 1) != 0) {
                            *(puVar3 + 0xe) = 4;
                            *(puVar3 + 0x36) = 0x200;
                        }
                        if ((uStack_c >> 0xc & 1) != 0) {
                            *(puVar3 + 0xe) = 5;
                            *(puVar3 + 0x36) = 0x200;
                        }
                        iVar6 = fcn.00014e9b(iStack_10,param_2 + 0x34);
                        if (iVar6 < 0) {
                            (**(param_2 + 0x14))(param_1,param_2,iStack_10,1);
                        }
                        else {
                            iVar6 = fcn.00016437();
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                            iVar6 = fcn.00016437();
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                            iVar6 = puVar3[0x13];
                            if ((*(iVar6 + 5) == '\b') && (*(iVar6 + 7) == 'P')) {
                                *(puVar3 + 0x3a) = 4;
                            }
                            if (*(iVar6 + 5) == '\t') {
                                *(puVar3 + 0x3a) = 3;
                            }
                            if (((*(iVar6 + 5) == '\x03') && (*(iVar6 + 6) == '\x01')) && (*(iVar6 + 7) == '\x01')) {
                                *(puVar3 + 0x3a) = 1;
                            }
                            if (*(puVar3 + 0x3a) == '\x03') {
                                iVar6 = fcn.00015a56();
                                if (iVar6 < 0) {
                                    return iVar6;
                                }
                                fcn.00014872(param_2 + 0x34,0);
                            }
                        }
                    }
                }
code_r0x00014e72:
                uVar4 = iStack_10;
            }
            uVar4 = uVar4 + 1;
            iStack_10 = CONCAT31(iStack_10._1_3_,uVar4);
        } while (uVar4 <= uStack_11);
    }
    return 0;
}


/* fcn.000157b3 @ 0x157b3 */

uint __fastcall fcn.000157b3(int *param_1,uint *param_2,uint8_t param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    int iVar3;
    uint uVar4;
    uint32_t *puVar5;
    uint32_t uStack_14;
    uchar auStack_10 [4];
    uint uStack_c;
    uint16_t uStack_8;
    ushort uStack_6;
    
    uStack_14 = 0;
    (**(*param_1 + 0x54))(&uStack_c,8,0);
    if (*0x69c4 == 0) {
        *0x69d0 = &uStack_14;
    }
    else {
        if ((*0x69d0 == NULL) && (iVar3 = (**(*0x69c4 + 0x14))(*0x69c4,4,1,0x69d0,0x80,0), iVar3 < 0)) {
            return 0x80000009;
        }
        (**(*param_1 + 0x54))(*0x69d0,4,0);
    }
    uStack_8 = param_3;
    uStack_c = 0xa3;
    uStack_6 = 4;
    uVar4 = (**param_2)(param_1,param_2,&uStack_c,0,3000,*0x69d0,4,auStack_10);
    puVar2 = *0x69d0;
    if ((*(param_2 + 0xd) == '\x04') || (*(param_2 + 0xd) == '\x05')) {
        puVar5 = 0x6680;
        iVar3 = 10;
    }
    else {
        puVar5 = 0x66d0;
        iVar3 = 0xd;
    }
    *param_4 = 0;
    uVar1 = *puVar2;
    do {
        if ((*puVar5 & uVar1) != 0) {
            *param_4 = *param_4 | puVar5[1];
        }
        puVar5 = puVar5 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return uVar4;
}


/* fcn.00015900 @ 0x15900 */

void __cdecl fcn.00015900(int8_t arg_8h,int8_t arg_ch)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_ch;
    int16_t var_8h;
    int16_t var_6h;
    int32_t var_4h;
    
    (**(*in_ECX + 0x54))(&var_ch,8,0);
    var_ch._2_2_ = arg_ch;
    var_8h = arg_8h;
    var_6h = 0;
    var_ch._0_2_ = 0x123;
    (**in_EDX)();
    return;
}


/* fcn.000158ab @ 0x158ab */

void __cdecl fcn.000158ab(int8_t arg_8h,int8_t arg_ch)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_ch;
    int16_t var_8h;
    int16_t var_6h;
    int32_t var_4h;
    
    (**(*in_ECX + 0x54))(&var_ch,8,0);
    var_ch._2_2_ = arg_ch;
    var_8h = arg_8h;
    var_6h = 0;
    var_ch._0_2_ = 0x323;
    (**in_EDX)();
    return;
}


/* fcn.000164db @ 0x164db */

void __fastcall fcn.000164db(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x4c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.00014e9b @ 0x14e9b */

int __fastcall fcn.00014e9b(uint param_1,int param_2,uint param_3,uint8_t *param_4)

{
    char cVar1;
    code *pcVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uint32_t noname_1;
    uint32_t extraout_ECX;
    uchar *arg_14h;
    int iStack_28;
    uint uStack_24;
    uint uStack_20;
    uchar *apuStack_1c [2];
    uchar auStack_14 [20];
    
    uStack_24 = 0;
    iStack_28 = 0;
    pcVar2 = *(*(param_2 + 0x40) + 0x28);
    if ((pcVar2 == NULL) || (iVar5 = (*pcVar2)(param_1,param_2,param_3), -1 < iVar5)) {
        arg_14h = auStack_14;
        if (*0x69c4 != 0) {
            uStack_20 = 0x12;
            iVar5 = (**(*0x69c4 + 0xc))(*0x69c4,1,auStack_14,&uStack_20,apuStack_1c,&iStack_28);
            if (iVar5 < 0) {
                return iVar5;
            }
            arg_14h = apuStack_1c[0];
        }
        do {
            iVar5 = fcn.000143a7(0x100,param_2 + 4,8,arg_14h);
            if (-1 < iVar5) {
                if (*(arg_14h + 2) < 0x300) {
                    if (arg_14h[7] == 0) {
                        uVar4 = 0x40;
                    }
                    else {
                        uVar4 = arg_14h[7];
                    }
                }
                else {
                    uVar4 = 1 << (arg_14h[7] & 0x1f);
                }
                *(param_2 + 0x36) = uVar4;
                cVar1 = *(param_2 + 0x38);
                if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) && (*0x69c0 != 0)) {
                    (**(*0x69c0 + 4))(param_1,*0x69c0,10000);
                }
                *param_4 = *param_4 + 1;
                noname_1 = *param_4;
                iVar5 = fcn.000143f7(*param_4);
                if (iVar5 < 0) {
                    return iVar5;
                }
                *(param_2 + 0x34) = *param_4;
                if (*0x69c0 != 0) {
                    (**(*0x69c0 + 4))(param_1,*0x69c0,2000);
                    noname_1 = extraout_ECX;
                }
                iVar5 = fcn.000143a7(0x100,noname_1,0x12,arg_14h);
                if (iVar5 < 0) {
                    return iVar5;
                }
                iVar5 = fcn.0001505b();
                if (iVar5 < 0) {
                    return iVar5;
                }
                if ((*(param_2 + 0x38) == '\x02') && (*0x69c0 != 0)) {
                    (**(*0x69c0 + 4))(param_1,*0x69c0,100);
                }
                iVar5 = fcn.00014439();
                if (iVar5 < 0) {
                    return iVar5;
                }
                if (iStack_28 != 0) {
                    (**(*0x69c4 + 0x10))(*0x69c4,iStack_28);
                }
                return 0;
            }
            if (iVar5 == -0x7fffffee) {
                return -0x7fffffee;
            }
            if (*0x69c0 != 0) {
                (**(*0x69c0 + 4))(param_1,*0x69c0,100000);
            }
            uVar3 = uStack_24 + 1;
            uStack_24 = CONCAT31(uStack_24 >> 8,uVar3);
        } while (uVar3 < 5);
    }
    return iVar5;
}


/* fcn.00015a56 @ 0x15a56 */

uint __fastcall fcn.00015a56(int *param_1,int param_2)

{
    uint8_t uVar1;
    int iVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint noname_0;
    uint32_t uVar3;
    uchar *arg_8h;
    uchar *puStack_44;
    uint uStack_40;
    uint uStack_3c;
    uint uStack_38;
    int iStack_34;
    int aiStack_30 [2];
    uchar auStack_28 [4];
    uchar *puStack_24;
    uint uStack_20;
    uchar *puStack_1c;
    uint uStack_18;
    uchar auStack_10 [16];
    
    puStack_44 = NULL;
    uStack_40 = 0;
    iStack_34 = 0;
    puStack_24 = NULL;
    uStack_20 = 0;
    puStack_1c = NULL;
    uStack_18 = 0;
    aiStack_30[0] = 0;
    (**(*param_1 + 0x54))(auStack_10,0xc,0);
    uVar1 = *(param_2 + 0x96);
    if ((*(param_2 + 0x38) == '\x04') || (noname_0 = extraout_ECX, *(param_2 + 0x38) == '\x05')) {
        (**(*param_1 + 0x54))(&uStack_3c,8,0);
        uStack_3c = CONCAT22(uVar1,0xc20);
        uStack_38 = 0;
        iVar2 = (**(param_2 + 4))(param_1,param_2 + 4,&uStack_3c,2,3000,0,0,aiStack_30 + 1);
        noname_0 = extraout_ECX_00;
        if (iVar2 < 0) {
            return 0x80000007;
        }
    }
    if (*0x69c4 == 0) {
        puStack_44 = auStack_10;
    }
    else {
        iVar2 = (**(*0x69c4 + 0x14))(*0x69c4,4,1,&puStack_44,0x80,0);
        if (iVar2 < 0) {
            return 0x80000009;
        }
        (**(*param_1 + 0x54))(puStack_44,0xc,0);
        uStack_40 = 0xc;
        (**(*0x69c4 + 0xc))(*0x69c4,2,puStack_44,&uStack_40,&puStack_24,&iStack_34);
        puStack_44 = puStack_24;
        noname_0 = extraout_ECX_01;
    }
    iVar2 = fcn.000159ee(noname_0,puStack_44);
    if (-1 < iVar2) {
        *(param_2 + 0x3b) = puStack_44[2];
        if (*0x69c4 == 0) {
            arg_8h = auStack_28;
        }
        else {
            iVar2 = (**(*0x69c4 + 0x14))(*0x69c4,4,1,0x69d4,0x80,0);
            if (iVar2 < 0) {
                return 0x80000009;
            }
            (**(*param_1 + 0x54))(*0x69d4,4,0);
            uStack_40 = 4;
            (**(*0x69c4 + 0xc))(*0x69c4,2,*0x69d4,&uStack_40,&puStack_1c,aiStack_30);
            arg_8h = puStack_1c;
        }
        uStack_3c = arg_8h;
        iVar2 = fcn.00015955(arg_8h);
        if (-1 < iVar2) {
            aiStack_30[1] = 0;
            if (*(param_2 + 0x3b) != '\0') {
                uVar3 = 0;
                do {
                    fcn.000157b3(uVar3 + 1 & 0xff,aiStack_30 + 1);
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(param_2 + 0x3b));
                arg_8h = uStack_3c;
            }
            aiStack_30[1] = 0;
            if (*(param_2 + 0x3b) != '\0') {
                uVar3 = 0;
                do {
                    fcn.000158ab(uVar3 + 1,8);
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(param_2 + 0x3b));
                arg_8h = uStack_3c;
            }
            iVar2 = fcn.00015955(arg_8h);
            if (-1 < iVar2) {
                if ((arg_8h[2] & 1) != 0) {
                    fcn.000159a2(0);
                }
                if ((arg_8h[2] & 2) != 0) {
                    fcn.000159a2(1);
                }
                if (*0x69c0 != 0) {
                    (**(*0x69c0 + 4))(param_1,*0x69c0,puStack_44[5] * 2000);
                }
                if (*0x69c4 != 0) {
                    if (iStack_34 != 0) {
                        (**(*0x69c4 + 0x10))(*0x69c4,iStack_34);
                    }
                    if (aiStack_30[0] != 0) {
                        (**(*0x69c4 + 0x10))(*0x69c4,aiStack_30[0]);
                    }
                    (**(*0x69c4 + 0x18))(*0x69c4,1,puStack_44);
                    (**(*0x69c4 + 0x18))(*0x69c4,1,*0x69d4);
                }
                return 0;
            }
        }
    }
    return 0x80000007;
}


/* fcn.000143a7 @ 0x143a7 */

uint __cdecl fcn.000143a7(int16_t arg_8h,uint noname_1,int16_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    uint *in_EDX;
    int16_t var_ch;
    int16_t var_ah;
    int16_t var_8h;
    int16_t var_6h;
    int32_t var_4h;
    
    if (in_EDX == NULL) {
        uVar1 = 0x80000002;
    }
    else {
        uVar1 = (**in_EDX)();
    }
    return uVar1;
}


/* fcn.0001505b @ 0x1505b */

int __fastcall fcn.0001505b(int *param_1,int param_2)

{
    int32_t *piVar1;
    int iVar2;
    int iVar3;
    uint8_t *puVar4;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint uVar5;
    uint8_t *puVar6;
    uint *puVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    int aiStack_1c [3];
    code *pcStack_10;
    uchar auStack_c [2];
    uint32_t uStack_a;
    
    uVar9 = 0;
    aiStack_1c[0] = 0;
    aiStack_1c[2] = 0;
    (**(*param_1 + 0x54))(auStack_c,9,0);
    uVar5 = extraout_ECX;
    if (*0x69c4 != 0) {
        aiStack_1c[1] = 9;
        iVar3 = (**(*0x69c4 + 0xc))(*0x69c4,1,auStack_c,aiStack_1c + 1,auStack_c,aiStack_1c);
        if (iVar3 < 0) {
            return iVar3;
        }
        aiStack_1c[1] = 7;
        iVar3 = (**(*0x69c4 + 0xc))(*0x69c4,1,0,aiStack_1c + 1,0,aiStack_1c + 2);
        uVar5 = extraout_ECX_00;
        if (iVar3 < 0) {
            if (aiStack_1c[0] != 0) {
                (**(*0x69c4 + 0x10))(*0x69c4,aiStack_1c[0]);
            }
            return iVar3;
        }
    }
    iVar3 = fcn.000143a7(0x200,uVar5,9,auStack_c);
    if (-1 < iVar3) {
        piVar1 = param_2 + 0x44;
        if (*0x69c4 == 0) {
            iVar3 = fcn.000164db();
            uVar5 = extraout_ECX_02;
        }
        else {
            iVar3 = (**(*0x69c4 + 0x14))
                              (*0x69c4,4,((uStack_a & 0xfff) != 0) + ((uStack_a & 0xffff) >> 0xc),piVar1,0x80,0);
            uVar5 = extraout_ECX_01;
        }
        if ((-1 < iVar3) && (iVar3 = fcn.000143a7(0x200,uVar5,uStack_a,*piVar1), -1 < iVar3)) {
            iVar2 = *piVar1;
            *(param_2 + 0x48) = iVar2;
            pcStack_10 = *(*(param_2 + 0x40) + 0x2c);
            puVar8 = (*(iVar2 + 2) - 1) + iVar2;
            if ((pcStack_10 == NULL) ||
               (iVar3 = (*pcStack_10)(param_1,*(param_2 + 0x40),*(param_2 + 0x34),iVar2), -1 < iVar3)) {
                puVar4 = *(param_2 + 0x48) + **(param_2 + 0x48);
                *(param_2 + 0x4c) = puVar4;
                while ((puVar4 < puVar8 && (puVar4 = *(param_2 + 0x4c), puVar4[1] != 4))) {
                    if (*puVar4 == 0) goto code_r0x0001524f;
                    *(param_2 + 0x4c) = *(param_2 + 0x4c) + *puVar4;
                    puVar4 = *(param_2 + 0x4c);
                }
                puVar4 = *(param_2 + 0x4c);
                puVar6 = puVar4 + *puVar4;
                if (puVar4[4] != 0) {
                    puVar7 = param_2 + 0x50;
                    do {
                        if (puVar8 <= puVar6) break;
                        if (puVar6[1] == 5) {
                            *puVar7 = puVar6;
                            uVar9 = uVar9 + 1;
                            puVar7 = puVar7 + 1;
                        }
                        puVar6 = puVar6 + *puVar6;
                    } while (uVar9 < *(*(param_2 + 0x4c) + 4));
                }
                if (*0x69c4 != 0) {
                    if (aiStack_1c[0] != 0) {
                        (**(*0x69c4 + 0x10))(*0x69c4,aiStack_1c[0]);
                    }
                    if ((*0x69c4 != 0) && (aiStack_1c[2] != 0)) {
                        (**(*0x69c4 + 0x10))(*0x69c4,aiStack_1c[2]);
                    }
                }
                return 0;
            }
        }
    }
code_r0x0001524f:
    return iVar3;
}


/* fcn.00014439 @ 0x14439 */

void __fastcall fcn.00014439(int *param_1,uint *param_2)

{
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    (**(*param_1 + 0x54))(&var_ch,8,0);
    var_ch._0_2_ = 0x900;
    var_ch._2_2_ = 1;
    var_8h = 0;
    (**param_2)(param_1,param_2,&var_ch,2,3000,0,0,&var_4h);
    return;
}


/* fcn.000152f0 @ 0x152f0 */

void __cdecl fcn.000152f0(int8_t arg_8h,int32_t arg_ch)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_ch;
    int16_t var_8h;
    int16_t var_6h;
    int32_t var_4h;
    
    (**(*in_ECX + 0x54))(&var_ch,8,0);
    var_8h = arg_8h;
    var_ch = 0xfea1;
    var_6h = 1;
    (**in_EDX)();
    return;
}


/* fcn.00015d28 @ 0x15d28 */

uint __fastcall fcn.00015d28(int *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    uint extraout_ECX;
    int32_t var_30h;
    int32_t var_ch;
    int8_t var_8h;
    
    (**(*param_1 + 0x54))(&var_ch,0xc,0);
    (**(*param_1 + 0x54))(&var_30h,0x24,0);
    var_ch._0_1_ = 0x12;
    var_ch._2_1_ = 0;
    var_8h = 0x24;
    iVar1 = fcn.00016315(&var_ch,extraout_ECX,&var_30h,0x24,0,5000);
    if (iVar1 < 0) {
        uVar2 = 0x80000007;
    }
    else {
        if ((var_30h & 0x1f) == 5) {
            *(param_2 + 0x3c) = 3;
            *(param_2 + 0x28) = 0x800;
        }
        else {
            *(param_2 + 0x3c) = 1;
            *(param_2 + 0x28) = 0x200;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000154b8 @ 0x154b8 */

int __fastcall fcn.000154b8(int *param_1,int param_2)

{
    char cVar1;
    bool bVar2;
    uint8_t uVar3;
    int iVar4;
    uint8_t uVar5;
    int iStack_8;
    
    iStack_8 = 0;
    uVar5 = 0;
    bVar2 = false;
    do {
        iVar4 = fcn.00015e09();
        if (-1 < iVar4) {
            return iVar4;
        }
        if (uVar5 == 0) {
            if (*(param_2 + 0x40) == 0) {
                iVar4 = fcn.000164db();
                if (iVar4 < 0) {
                    return iVar4;
                }
                *(param_2 + 0x40) = param_1;
            }
            iStack_8 = *(param_2 + 0x40);
            (**(*param_1 + 0x54))(iStack_8,0x12,0);
        }
        fcn.00015db5(iStack_8);
        uVar3 = *(iStack_8 + 2) & 0xf;
        cVar1 = *(iStack_8 + 0xc);
        if (uVar3 == 2) {
            if (((cVar1 != '\x04') && (cVar1 != '\x06')) && (cVar1 != '\b')) {
                if (cVar1 != ':') goto code_r0x00015577;
                if ((2 < uVar5) && (iVar4 = fcn.000156de(), iVar4 == -0x7ffffff4)) {
                    *(param_2 + 0x20) = 0;
                    return -0x7ffffff4;
                }
            }
code_r0x00015575:
            bVar2 = true;
        }
        else if ((uVar3 == 6) && (cVar1 == '(')) goto code_r0x00015575;
code_r0x00015577:
        *(param_2 + 0x28) = 0;
        *(param_2 + 0x20) = 0;
        if (!bVar2) {
            return -0x7ffffff9;
        }
        if (*0x69c0 != 0) {
            (**(*0x69c0 + 4))(param_1,*0x69c0,100000);
        }
        uVar5 = uVar5 + 1;
        if (0x18 < uVar5) {
            return -0x7ffffff9;
        }
    } while( true );
}


/* fcn.00015e09 @ 0x15e09 */

uint __fastcall fcn.00015e09(int *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    uint extraout_ECX;
    int32_t var_214h;
    int32_t var_14h;
    int32_t var_8h;
    int8_t var_4h;
    int8_t var_3h;
    int8_t var_2h;
    int8_t var_1h;
    
    (**(*param_1 + 0x54))(&var_8h,8,0);
    (**(*param_1 + 0x54))(&var_14h,0xc,0);
    var_14h._0_1_ = 0x25;
    iVar1 = fcn.00016315(&var_14h,extraout_ECX,&var_8h,8,0,5000);
    if (iVar1 < 0) {
        uVar2 = 0x80000007;
    }
    else {
        *(param_2 + 0x20) = 1;
        *(param_2 + 0x24) = CONCAT31(CONCAT21(CONCAT11(var_8h,var_8h._1_1_),var_8h._2_1_),var_8h._3_1_);
        *(param_2 + 0x28) = CONCAT31(CONCAT21(CONCAT11(var_4h,var_3h),var_2h),var_1h);
        if (*(param_2 + 0x3c) == 1) {
            iVar1 = fcn.00015f5f(&var_214h,0,0,1);
            if (-1 < iVar1) {
                fcn.00015ee8(*(param_2 + 0x24),param_2 + 0x44);
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00015db5 @ 0x15db5 */

uint __cdecl fcn.00015db5(int32_t arg_8h)

{
    int iVar1;
    uint uVar2;
    int *in_ECX;
    uint extraout_ECX;
    int32_t var_ch;
    int8_t var_8h;
    
    (**(*in_ECX + 0x54))(&var_ch,0xc,0);
    var_ch._0_1_ = 3;
    var_8h = 0x12;
    iVar1 = fcn.00016315(&var_ch,extraout_ECX,arg_8h,0x12,0,5000);
    if (iVar1 < 0) {
        uVar2 = 0x80000007;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000156de @ 0x156de */

int __fastcall fcn.000156de(int *param_1,int param_2)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint extraout_ECX;
    uint8_t uStack_11;
    uint uStack_10;
    uchar auStack_c [12];
    
    if (*(param_2 + 0x40) == 0) {
        iVar2 = fcn.000164db();
        if (iVar2 < 0) {
            return iVar2;
        }
        *(param_2 + 0x40) = uStack_10;
    }
    iVar2 = *(param_2 + 0x40);
    (**(*param_1 + 0x54))(iVar2,0x12,0);
    uStack_11 = 0;
    while( true ) {
        (**(*param_1 + 0x54))(auStack_c,0xc,0);
        auStack_c[0] = 0;
        fcn.00016315(auStack_c,extraout_ECX,0,0,2,5000);
        iVar3 = fcn.00015db5(iVar2);
        if (iVar3 < 0) {
            return -0x7ffffff9;
        }
        iVar3 = -0x7ffffff9;
        uVar1 = *(iVar2 + 2) & 0xf;
        if (uVar1 == 0) break;
        if (((uVar1 == 2) && (*(iVar2 + 0xc) == ':')) && (iVar3 = -0x7ffffff4, *0x69c0 != 0)) {
            (**(*0x69c0 + 4))(param_1,*0x69c0,20000);
        }
        uStack_11 = uStack_11 + 1;
        if (2 < uStack_11) {
            return iVar3;
        }
    }
    return 0;
}


/* fcn.00015f5f @ 0x15f5f */

int __fastcall fcn.00015f5f(int *param_1,int param_2,int param_3,int param_4,uint param_5,uint32_t param_6)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uchar auStack_c [2];
    uchar uStack_a;
    uchar uStack_9;
    uchar uStack_8;
    uchar uStack_7;
    uchar uStack_5;
    uchar uStack_4;
    
    (**(*param_1 + 0x54))(auStack_c,0xc,0);
    uVar1 = *(param_2 + 0x28);
    uVar2 = 0x10000 / uVar1 & 0xffff;
    while( true ) {
        if (param_6 == 0) {
            return 0;
        }
        uVar4 = param_6;
        if (uVar2 < param_6) {
            uVar4 = uVar2;
        }
        uVar4 = uVar4 & 0xffff;
        iVar5 = uVar4 * uVar1;
        uStack_8 = param_4 >> 8;
        uStack_9 = param_4 >> 0x10;
        uStack_a = param_4 >> 0x18;
        uStack_5 = uVar4 >> 8;
        uStack_4 = uVar4;
        auStack_c[0] = 0x28;
        uStack_7 = param_4;
        iVar3 = fcn.00016315(auStack_c,uVar4,param_3,iVar5,0,uVar4 * 2000);
        if (iVar3 != 0) break;
        param_3 = param_3 + iVar5;
        param_4 = param_4 + uVar4;
        param_6 = param_6 - uVar4;
    }
    return iVar3;
}


/* fcn.00016315 @ 0x16315 */

uint __thiscall
fcn.00016315(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint32_t param_6,uint param_7)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    
    uVar1 = param_5;
    uVar3 = 0;
    iVar2 = fcn.000160be(param_2,param_1,param_5,param_6,param_7);
    if (-1 < iVar2) {
        if (param_6 < 2) {
            param_2 = uVar1;
            uVar3 = fcn.0001616c(&param_2,param_4,param_6,param_7);
        }
        iVar2 = fcn.00016237(&param_2,param_7);
        if (-1 < iVar2) {
            if (param_2 == 0) {
                return uVar3;
            }
            if (1 < param_2) {
                fcn.0001603f();
            }
        }
    }
    return 0x80000007;
}


/* fcn.000159ee @ 0x159ee */

void __cdecl fcn.000159ee(uint noname_0,int32_t arg_ch)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_ch;
    int16_t var_8h;
    int16_t var_6h;
    int32_t var_4h;
    
    (**(*in_ECX + 0x54))(&var_ch,8,0);
    var_ch._0_2_ = 0x6a0;
    if ((*(in_EDX + 0xd) == '\x04') || (var_ch._2_2_ = 0x2900, *(in_EDX + 0xd) == '\x05')) {
        var_ch._2_2_ = 0x2a00;
    }
    var_8h = 0;
    var_6h = 0xc;
    (**in_EDX)();
    return;
}


/* fcn.00015955 @ 0x15955 */

void __cdecl fcn.00015955(int32_t arg_8h)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_ch;
    int16_t var_8h;
    int16_t var_6h;
    int32_t var_4h;
    
    (**(*in_ECX + 0x54))(&var_ch,8,0);
    var_ch = 0xa0;
    var_8h = 0;
    var_6h = 4;
    (**in_EDX)();
    return;
}


/* fcn.000159a2 @ 0x159a2 */

void __cdecl fcn.000159a2(int8_t arg_8h)

{
    int *in_ECX;
    uint *in_EDX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    (**(*in_ECX + 0x54))(&var_ch,8,0);
    var_ch._2_2_ = arg_8h;
    var_8h = 0;
    var_ch._0_2_ = 0x120;
    (**in_EDX)();
    return;
}


/* fcn.00015ee8 @ 0x15ee8 */

void __cdecl fcn.00015ee8(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t *puVar3;
    int in_EDX;
    uint8_t *puVar4;
    char cVar5;
    uint32_t uVar6;
    uint32_t var_10h;
    
    puVar4 = in_EDX + 0x1be;
    puVar3 = NULL;
    cVar5 = '\0';
    uVar2 = 0;
    do {
        uVar1 = *puVar4;
        uVar6 = CONCAT11(uVar1,uVar2) & 0xff;
        (&var_10h)[uVar6] = 0;
        if ((uVar1 & 0x7f) != 0) {
            return;
        }
        if (arg_8h < *(puVar4 + 8)) {
            return;
        }
        cVar5 = cVar5 + '\x01';
        (&var_10h)[uVar6] = puVar4;
        if (uVar1 < '\0') {
            puVar3 = puVar4;
        }
        puVar4 = puVar4 + 0x10;
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    if (cVar5 != '\0') {
        if (puVar3 == NULL) {
            uVar6 = 0;
            do {
                uVar2 = uVar6;
                if ((&var_10h)[uVar6] != 0) break;
                uVar2 = uVar2 + 1;
                uVar6 = uVar2;
            } while (uVar2 < 4);
            if (uVar2 == 4) {
                return;
            }
            puVar3 = (&var_10h)[uVar2];
        }
        *arg_ch = *(puVar3 + 8);
    }
    return;
}


/* fcn.00014485 @ 0x14485 */

uint __cdecl fcn.00014485(uint32_t arg_8h)

{
    int iVar1;
    uint uVar2;
    uint *in_EDX;
    uint8_t uVar3;
    int8_t var_14h;
    int8_t var_13h;
    int16_t var_12h;
    int16_t var_10h;
    int16_t var_eh;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_4h;
    
    uVar3 = 0;
    _var_4h = 0;
    do {
        iVar1 = (*in_EDX[3])();
        if (iVar1 < 0) goto code_r0x00014511;
        if (*(var_8h + 2) == arg_8h) break;
        uVar3 = uVar3 + 1;
        _var_4h = uVar3;
    } while (uVar3 < 0x10);
    if (uVar3 == 0x10) {
code_r0x00014511:
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = (**in_EDX)();
        if ((*(in_EDX + 0x35) & 1 << (var_4h & 0x1fU)) != 0) {
            *(in_EDX + 0x35) = *(in_EDX + 0x35) ^ 1 << (_var_4h & 0x1f);
        }
    }
    return uVar2;
}


/* fcn.0001603f @ 0x1603f */

uint __fastcall fcn.0001603f(int *param_1,int param_2)

{
    uint *puVar1;
    uint uVar2;
    uchar auStack_c [4];
    uint uStack_8;
    uint uStack_4;
    
    puVar1 = *(param_2 + 0x2c);
    if (puVar1 == NULL) {
        uVar2 = 0x80000002;
    }
    else {
        (**(*param_1 + 0x54))(&uStack_8,8,0);
        uStack_8 = 0xff21;
        uStack_4 = 0;
        uVar2 = (**puVar1)(param_1,puVar1,&uStack_8,2,3000,0,0,auStack_c);
        fcn.00014485(*(*(param_2 + 0x34) + 2));
        fcn.00014485(*(*(param_2 + 0x38) + 2));
    }
    return uVar2;
}


/* fcn.000160be @ 0x160be */

uint __fastcall
fcn.000160be(int *param_1,int param_2,uint *param_3,uint param_4,uint param_5,int param_6,ushort param_7)

{
    int iVar1;
    uint uVar2;
    uint uStack_2c;
    int *piStack_28;
    uchar auStack_24 [4];
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint8_t uStack_14;
    uchar uStack_13;
    uchar uStack_12;
    uint uStack_11;
    uint uStack_d;
    uint uStack_9;
    
    iVar1 = *(param_2 + 0x2c);
    piStack_28 = param_1;
    (**(*param_1 + 0x54))(&uStack_20,0x1f,0);
    uStack_18 = param_5;
    uStack_20 = 0x43425355;
    uStack_14 = (param_6 != 0) - 1U & 0x80;
    uStack_1c = 1;
    uStack_13 = *(param_2 + 0x48);
    uStack_12 = 0xc;
    uStack_11 = *param_3;
    uStack_2c = 0x1f;
    uStack_d = param_3[1];
    uStack_9 = param_3[2];
    iVar1 = (**(iVar1 + 4))(piStack_28,iVar1,*(*(param_2 + 0x38) + 2),&uStack_20,&uStack_2c,param_7,auStack_24);
    if (iVar1 < 0) {
        fcn.0001603f();
        uVar2 = 0x80000007;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001616c @ 0x1616c */

int __fastcall fcn.0001616c(uint param_1,int param_2,uint32_t *param_3,int param_4,uint32_t param_5,ushort param_6)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uStack_14;
    uint32_t uStack_10;
    int iStack_c;
    uint uStack_8;
    uint8_t auStack_4 [4];
    
    iStack_c = *(param_2 + 0x2c);
    uVar2 = 0;
    uVar4 = *param_3;
    uStack_14 = 0;
    if (param_5 == 0) {
        iVar1 = *(param_2 + 0x34);
    }
    else {
        iVar1 = *(param_2 + 0x38);
    }
    param_5 = CONCAT31(param_5._1_3_,*(iVar1 + 2));
    if (uVar4 != 0) {
        uVar5 = *(iVar1 + 4) * 0x10;
        uStack_8 = param_1;
        do {
            uVar3 = uVar5;
            if (uVar4 <= uVar5) {
                uVar3 = uVar4;
            }
            uStack_10 = uVar3;
            iVar1 = (**(iStack_c + 4))(uStack_8,iStack_c,param_5,param_4,&uStack_10,param_6,auStack_4);
            uVar2 = uStack_14 + uStack_10;
            if (iVar1 < 0) {
                if ((auStack_4[0] & 2) != 0) {
                    fcn.00014485(param_5);
                }
                return iVar1;
            }
            if (uStack_10 < uVar3) break;
            param_4 = param_4 + uStack_10;
            uVar4 = uVar4 - uStack_10;
            uStack_14 = uVar2;
        } while (uVar4 != 0);
    }
    *param_3 = uVar2;
    return 0;
}


/* fcn.00016237 @ 0x16237 */

int __fastcall fcn.00016237(int *param_1,int param_2,uchar *param_3,ushort param_4)

{
    int iVar1;
    int iVar2;
    uint32_t uStack_2c;
    int iStack_28;
    uint32_t uStack_24;
    int iStack_20;
    int iStack_1c;
    uchar uStack_14;
    
    iVar2 = *(param_2 + 0x2c);
    (**(*param_1 + 0x54))(&iStack_20,0x1f,0);
    uStack_24 = CONCAT31(uStack_24._1_3_,*(*(param_2 + 0x34) + 2));
    iStack_28 = 0xd;
    iVar1 = (**(iVar2 + 4))(param_1,iVar2,uStack_24,&iStack_20,&iStack_28,param_4,&uStack_2c);
    if (iVar1 < 0) {
        if ((uStack_2c & 2) != 0) {
            fcn.00014485(uStack_24);
        }
        uStack_2c = 0;
        iStack_28 = 0xd;
        iVar2 = (**(iVar2 + 4))(param_1,iVar2,uStack_24,&iStack_20,&iStack_28,param_4,&uStack_2c);
        if (iVar2 < 0) {
            if ((uStack_2c & 2) != 0) {
                fcn.0001603f();
            }
            return iVar2;
        }
    }
    if (((iStack_28 == 0xd) && (iStack_20 == 0x53425355)) && (iStack_1c == 1)) {
        *param_3 = uStack_14;
        iVar2 = 0;
    }
    else {
        iVar2 = -0x7ffffff9;
    }
    return iVar2;
}


/* section..text @ 0x10220 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 25344 named .text
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


