// decompiled by r2ghidra: 2374_DxeIpl.te
// functions: 71

/* entry0 @ 0x2ad */

void __cdecl entry0(int32_t arg_8h)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00001683();
    fcn.000011e4();
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x74))();
    if (iVar1 != 0) {
        iVar1 = fcn.0000138c(arg_8h,&var_8h);
        if (-1 < iVar1) {
            fcn.00000310(0,0,0);
            fcn.00001367();
        }
    }
    return;
}


/* fcn.00001683 @ 0x1683 */

int __fastcall fcn.00001683(int param_1)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar3 = fcn.000015e8();
    if (-1 < iVar3) {
        uVar4 = 0;
        uVar1 = *(param_1 + 4);
        if (uVar1 != 0) {
            do {
                cVar2 = fcn.000014bd();
                if (cVar2 != '\0') {
                    *(*(param_1 + 0xc) + uVar4 * 4) = 0xffd29a4f;
                    *(*(param_1 + 0x10) + uVar4 * 4) = 0xffd299d1;
                    goto code_r0x00001722;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
        }
        if (uVar1 < 0x10) {
            fcn.000014a4();
            *(*(param_1 + 0xc) + *(param_1 + 4) * 4) = 0xffd29a4f;
            *(*(param_1 + 0x10) + *(param_1 + 4) * 4) = 0xffd299d1;
            *(param_1 + 4) = *(param_1 + 4) + 1;
            fcn.000012f0(0x10);
code_r0x00001722:
            iVar3 = 0;
        }
        else {
            iVar3 = -0x7ffffff7;
        }
    }
    return iVar3;
}


/* fcn.000011e4 @ 0x11e4 */

int32_t fcn.000011e4(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000138c @ 0x138c */

void __cdecl fcn.0000138c(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001367 @ 0x1367 */

void __fastcall fcn.00001367(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000310 @ 0x310 */

void __fastcall fcn.00000310(int param_1)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    uint *puVar4;
    int iVar5;
    ushort unaff_SI;
    ushort uStack_e;
    ushort uStack_c;
    
    iVar3 = fcn.000015e8();
    if (-1 < iVar3) {
        iVar3 = *(param_1 + 4);
        iVar5 = *(param_1 + 8);
        uStack_c = unaff_SI;
        if (iVar3 != 0) {
            puVar4 = fcn.000015b1();
            iVar5 = iVar3 * 0x10 + iVar5;
            do {
                iVar5 = iVar5 + -0x10;
                *puVar4 = 0x80000010;
                puVar4[2] = 0xffd2b340;
                puVar4[1] = iVar5;
                fcn.00001367();
                puVar4 = puVar4 + 3;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
    }
    uVar1 = InterruptDescriptorTableRegister();
    uStack_e = uVar1 >> 0x10;
    piVar2 = *(CONCAT22(uStack_c,uStack_e) + -4);
    (**(*piVar2 + 0x18))(piVar2,0xffd2b348);
    return;
}


/* fcn.000015e8 @ 0x15e8 */

uint __fastcall fcn.000015e8(uint *param_1)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    int *piVar5;
    
    fcn.00001167();
    iVar2 = fcn.00001192();
    do {
        if (iVar2 == 0) {
            piVar3 = fcn.000012c9();
            if (piVar3 == NULL) {
                *param_1 = 0;
                uVar4 = 0x80000009;
            }
            else {
                piVar3[1] = 0;
                piVar5 = piVar3 + 5;
                *piVar3 = 0x49484550;
code_r0x00001666:
                piVar3[2] = piVar5;
                piVar3[3] = piVar5 + 0x40;
                piVar3[4] = piVar5 + 0x50;
code_r0x00001677:
                uVar4 = 0;
                *param_1 = piVar3;
            }
            return uVar4;
        }
        cVar1 = fcn.000014bd();
        if ((cVar1 != '\0') && (piVar3 = iVar2 + 0x18, *piVar3 == 0x49484550)) {
            piVar5 = iVar2 + 0x2c;
            if (*(iVar2 + 0x20) != piVar5) goto code_r0x00001666;
            goto code_r0x00001677;
        }
        iVar2 = fcn.00001192();
    } while( true );
}


/* fcn.000015b1 @ 0x15b1 */

int32_t __fastcall fcn.000015b1(uint param_1)

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


/* main @ 0x1506 */

int32_t __cdecl main(int argc,char **argv,char **envp)

{
    int iVar1;
    int in_EDX;
    int32_t var_8h;
    
    if ((in_EDX != 0) && (iVar1 = fcn.00001434(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.0000172c @ 0x172c */

int __cdecl fcn.0000172c(int32_t arg_8h,int32_t arg_ch)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iStack_10;
    
    iVar2 = fcn.000015e8();
    if (-1 < iVar2) {
        uVar3 = 0;
        if (*(iStack_10 + 4) != 0) {
            do {
                cVar1 = fcn.000014bd();
                if (cVar1 != '\0') {
                    iVar2 = (**(*(iStack_10 + 0x10) + uVar3 * 4))();
                    return iVar2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(iStack_10 + 4));
        }
        iVar2 = -0x7ffffffd;
    }
    return iVar2;
}


/* fcn.000017b5 @ 0x17b5 */

int __cdecl fcn.000017b5(int32_t arg_8h,int32_t arg_ch)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iStack_10;
    
    iVar2 = fcn.000015e8();
    if (-1 < iVar2) {
        uVar3 = 0;
        if (*(iStack_10 + 4) != 0) {
            do {
                cVar1 = fcn.000014bd();
                if (cVar1 != '\0') {
                    iVar2 = (**(*(iStack_10 + 0xc) + uVar3 * 4))();
                    return iVar2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(iStack_10 + 4));
        }
        iVar2 = -0x7ffffffd;
    }
    return iVar2;
}


/* fcn.00002084 @ 0x2084 */

uint32_t __fastcall fcn.00002084(int *param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar2 == 0) {
        uVar3 = 0;
    }
    else {
        fcn.00000190(param_3,0x3438,0);
        *(param_3 + 0xd0d) = 4;
        param_3[8] = iVar1;
        *param_3 = param_1 + 2;
        param_3[1] = param_2;
        param_3[9] = iVar2;
        fcn.0000183e();
        fcn.00001fe5();
        uVar3 = -(param_3[10] != 0) & 0x80000002;
    }
    return uVar3;
}


/* fcn.0000148e @ 0x148e */

int __fastcall fcn.0000148e(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.00000130(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000130 @ 0x130 */

uint * fcn.00000130(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
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


/* fcn.00001167 @ 0x1167 */

int32_t fcn.00001167(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000014bd @ 0x14bd */

uint32_t __fastcall fcn.000014bd(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001192 @ 0x1192 */

int16_t * __fastcall fcn.00001192(int16_t param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == param_1) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00001319 @ 0x1319 */

void fcn.00001319(uint param_1,uint param_2,uint param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = fcn.0000120f();
    if (iVar1 != 0) {
        fcn.00000170(iVar1 + 8,0x10);
        *(iVar1 + 0x1c) = param_2;
        *(iVar1 + 0x20) = param_3;
        *(iVar1 + 0x24) = param_4;
        *(iVar1 + 0x28) = 4;
        *(iVar1 + 0x18) = param_1;
        fcn.00000170(iVar1 + 0x2c,4);
    }
    return;
}


/* fcn.0000120f @ 0x120f */

int32_t __fastcall fcn.0000120f(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),param_1,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000170 @ 0x170 */

uint * fcn.00000170(uint *param_1,uint32_t param_2)

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


/* fcn.00002124 @ 0x2124 */

uint32_t __fastcall fcn.00002124(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = param_1 & 0xff;
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),param_1,param_2,0,0xffd2b290,0);
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.000011b5 @ 0x11b5 */

int fcn.000011b5(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00001192();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000014bd();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000013e0 @ 0x13e0 */

void __fastcall fcn.000013e0(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x38))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.00000372 @ 0x372 */

uint32_t __fastcall fcn.00000372(int param_1,uint32_t param_2)

{
    uint32_t in_EAX;
    uint32_t uVar1;
    
    if (param_1 != 0) {
        uVar1 = param_2 >> 3;
        in_EAX = uVar1 * 8;
        if ((in_EAX == param_2) && (*((in_EAX - 8) + param_1) == 0xf)) {
            in_EAX = 0;
            if (uVar1 != 1) {
                do {
                    if (0xe < *(param_1 + in_EAX * 8)) goto code_r0x00000379;
                    in_EAX = in_EAX + 1;
                } while (in_EAX < uVar1 - 1);
            }
            return CONCAT31(in_EAX >> 8,1);
        }
    }
code_r0x00000379:
    return in_EAX & 0xffffff00;
}


/* fcn.000009f8 @ 0x9f8 */

int __fastcall fcn.000009f8(int param_1,uint32_t param_2)

{
    int16_t *piVar1;
    unkuint3 Var2;
    uint32_t *puVar3;
    int16_t iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    bool bVar9;
    
    uVar8 = 0;
    iVar6 = 0;
    uVar7 = 0;
    iVar5 = 0;
    piVar1 = fcn.00001167();
    iVar4 = *piVar1;
    if (iVar4 != -1) {
        do {
            if (((iVar4 == 3) && (*(piVar1 + 0xc) == 0)) && ((*(piVar1 + 0xe) & 7) == 7)) {
                bVar9 = CARRY4(uVar7,*(piVar1 + 0x14));
                uVar7 = uVar7 + *(piVar1 + 0x14);
                iVar5 = iVar5 + *(piVar1 + 0x16) + bVar9;
            }
            piVar1 = piVar1 + piVar1[1];
            iVar4 = *piVar1;
        } while (iVar4 != -1);
        if (iVar5 != 0) {
            uVar7 = 0x80000000;
            goto code_r0x00000a61;
        }
    }
    uVar7 = uVar7 >> 1;
code_r0x00000a61:
    uVar7 = ((uVar7 & 0xfff) != 0) + (uVar7 >> 0xc);
    iVar5 = (param_2 >> 3) - 1;
    if (iVar5 != 0) {
        puVar3 = param_1 + 4;
        do {
            bVar9 = CARRY4(uVar8,*puVar3);
            uVar8 = uVar8 + *puVar3;
            puVar3 = puVar3 + 2;
            iVar6 = iVar6 + bVar9;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
    Var2 = uVar7 >> 8;
    if ((iVar6 == 0) && (uVar8 <= uVar7)) {
        iVar5 = CONCAT31(Var2,1);
    }
    else {
        iVar5 = Var2 << 8;
    }
    return iVar5;
}


/* fcn.000012f0 @ 0x12f0 */

void fcn.000012f0(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000012c9();
    if (iVar1 == 0) {
        return;
    }
    if (param_1 != 0) {
        fcn.0000148e(param_1);
    }
    return;
}


/* fcn.000012c9 @ 0x12c9 */

int fcn.000012c9(void)

{
    int iVar1;
    
    iVar1 = fcn.0000120f();
    if (iVar1 != 0) {
        fcn.000014a4();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.000014a4 @ 0x14a4 */

uint * __fastcall fcn.000014a4(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000005bf @ 0x5bf */

int __fastcall fcn.000005bf(int32_t param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = fcn.0000138c(param_1,&var_4h);
    if (iVar1 < 0) {
        fcn.00002124();
    }
    else {
        iVar1 = (**var_4h)(var_4h);
    }
    return iVar1;
}


/* fcn.000013ba @ 0x13ba */

void fcn.000013ba(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x2c))(*(stack0xfffffff2 + -4),0);
    return;
}


/* fcn.00000602 @ 0x602 */

int __fastcall fcn.00000602(uint param_1)

{
    int32_t iVar1;
    int iVar2;
    int iVar3;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    ushort uStack_8;
    
    iVar3 = 0;
    iVar2 = fcn.0000138c(param_1,&var_ch);
    if (iVar2 < 0) {
        fcn.00002124();
    }
    else {
        var_8h = &var_18h;
        InterruptDescriptorTableRegister();
        iVar2 = (**var_ch)(*(stack0xffffffe6 + -4),var_ch);
    }
    if (-1 < iVar2) {
        fcn.00001167();
        iVar2 = fcn.000011b5();
        if (((iVar2 != 0) && (*(iVar2 + 0x20) == '\0')) && (*(iVar2 + 0x18) != 0 || *(iVar2 + 0x1c) != 0)) {
            iVar2 = fcn.000011e4();
            if (iVar2 != 0x20) {
                return 0;
            }
            while( true ) {
                iVar2 = fcn.000013e0();
                if (iVar2 < 0) break;
                iVar3 = iVar3 + 1;
            }
            return iVar3;
        }
    }
    InterruptDescriptorTableRegister();
    var_ch = &var_8h;
    iVar1 = InterruptDescriptorTableRegister();
    var_8h._2_2_ = iVar1 >> 0x10;
    iVar2 = CONCAT22(uStack_8,var_8h._2_2_);
    var_8h = iVar1;
    (**(**(iVar2 + -4) + 0x58))(*(stack0xffffffe6 + -4),0x80000002,0x3031007,0,0,0);
    return 0;
}


/* fcn.000006e2 @ 0x6e2 */

void __fastcall fcn.000006e2(int param_1)

{
    char cVar1;
    ushort *puVar2;
    int iVar3;
    uint noname_0;
    int iVar4;
    uint uVar5;
    int *piVar6;
    int *piVar7;
    int iStack_8c;
    uint *puStack_88;
    int aiStack_84 [33];
    
    fcn.00001167();
    while (puVar2 = fcn.000011b5(), puVar2 != NULL) {
        *puVar2 = 0xfffe;
    }
    iVar3 = fcn.0000138c(noname_0,&puStack_88);
    if (-1 < iVar3) {
        iStack_8c = 0x80;
        uVar5 = 0xffd2b370;
        if (param_1 != 5) {
            uVar5 = 0xffd2b314;
        }
        iVar3 = (**puStack_88)(puStack_88,uVar5,0xffd2b2b0,0,&iStack_8c,aiStack_84);
        if (iVar3 == -0x7ffffff2) {
            iVar3 = (**puStack_88)(puStack_88,uVar5,0xffd2b1c0,0,&iStack_8c,aiStack_84);
        }
        if (-1 < iVar3) {
            cVar1 = fcn.00000372();
            if ((cVar1 == '\0') || (cVar1 = fcn.000009f8(), cVar1 == '\0')) {
                iVar3 = -0x7ffffffd;
            }
            if (-1 < iVar3) goto code_r0x00000819;
        }
    }
    iVar4 = 0;
    piVar7 = aiStack_84;
    iVar3 = 8;
    iStack_8c = 0;
    piVar6 = 0xffd2b3f0;
    do {
        if ((piVar6[1] != 0) || (*piVar6 == 0xf)) {
            iStack_8c = iVar4 + 8;
            if (piVar7 != piVar6) {
                fcn.00000130(piVar7,piVar6,8);
            }
            piVar7 = piVar7 + 2;
            iVar4 = iStack_8c;
        }
        piVar6 = piVar6 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    cVar1 = fcn.000009f8();
    if (cVar1 == '\0') {
        iStack_8c = 0x30;
    }
code_r0x00000819:
    fcn.000012f0(iStack_8c);
    fcn.000012f0(0x10);
    return;
}


/* fcn.00001409 @ 0x1409 */

void __cdecl fcn.00001409(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x3c))(*(stack0xfffffff2 + -4),5);
    return;
}


/* fcn.00001249 @ 0x1249 */

void __cdecl
fcn.00001249(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    int iVar1;
    
    iVar1 = fcn.0000120f();
    if (iVar1 != 0) {
        *(iVar1 + 8) = *0xffd2b200;
        *(iVar1 + 0xc) = *0xffd2b204;
        *(iVar1 + 0x10) = *0xffd2b208;
        *(iVar1 + 0x14) = *0xffd2b20c;
        *(iVar1 + 0x18) = arg_8h;
        *(iVar1 + 0x1c) = arg_ch;
        *(iVar1 + 0x20) = arg_10h;
        *(iVar1 + 0x24) = arg_14h;
        *(iVar1 + 0x28) = 3;
        fcn.00000170(iVar1 + 0x2c,4);
        fcn.000014a4();
        *(iVar1 + 0x40) = arg_18h;
        *(iVar1 + 0x44) = arg_1ch;
    }
    return;
}


/* fcn.00000aaa @ 0xaaa */

void __cdecl fcn.00000aaa(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uint extraout_ECX;
    uint32_t in_CR0;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    fcn.00001434(&var_18h);
    iVar1 = var_18h + 0xfffe0;
    var_ch = var_14h + (0xfff0001f < var_18h);
    GlobalDescriptorTableRegister(*0xffd2b430);
    var_ch = fcn.00000e84();
    fcn.00001367();
    var_4h = in_CR0 & 0x7fffffff;
    fcn.0000055f(var_18h,var_14h,extraout_ECX,extraout_ECX);
    fcn.00002124();
    fcn.000000a0(0x38,arg_8h,arg_ch,arg_10h,0,0,0,(-iVar1 & 0xfU) + iVar1,0);
    return;
}


/* fcn.00001434 @ 0x1434 */

void __cdecl fcn.00001434(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00000e84 @ 0xe84 */

//WARNING: Removing unreachable block (ram,0x00000ecd)

uint32_t * fcn.00000e84(void)

{
    uint64_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint noname_0;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint8_t uVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    bool bVar13;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int8_t var_8h;
    uint32_t var_4h;
    
    fcn.00001167();
    iVar3 = fcn.00001192();
    if (iVar3 == 0) {
        fcn.00001127(noname_0,noname_0,0);
        var_2ch._0_1_ = 0x24;
    }
    else {
        var_2ch._0_1_ = *(iVar3 + 8);
    }
    if (0x30 < var_2ch) {
        var_2ch._0_1_ = 0x30;
    }
    if ((*0xffd2b45c == NULL) || (puVar4 = (**0xffd2b45c)(var_2ch,0), puVar4 == NULL)) {
        var_28h = 1;
        if (0x30 < var_2ch) {
            var_2ch._0_1_ = var_2ch - 0x30;
            var_28h = ((var_2ch & 0x20) == 0) << (var_2ch & 0x1f);
            var_2ch._0_1_ = 0x30;
        }
        _var_8h = 1;
        uVar10 = var_2ch;
        if (0x27 < var_2ch) {
            uVar10 = 0x27;
            _var_8h = ((var_2ch - 0x27 & 0x20) == 0) << (var_2ch - 0x27 & 0x1f);
        }
        puVar4 = fcn.00000bec();
        var_14h = 0;
        var_10h = 0;
        if (var_28h != 0) {
            puVar11 = puVar4;
            var_2ch = var_28h;
            do {
                uVar7 = 0;
                puVar8 = puVar11 + 0x400;
                while( true ) {
                    uVar5 = _var_8h;
                    if (var_28h != 1) {
                        uVar5 = 0x200;
                    }
                    if (uVar5 <= uVar7) break;
                    puVar11[1] = 0;
                    *puVar11 = puVar8;
                    *puVar11 = *puVar11 | 2;
                    *puVar11 = *puVar11 | 1;
                    uVar5 = 0;
                    puVar11[1] = puVar11[1];
                    puVar12 = puVar8;
                    while( true ) {
                        puVar12 = puVar12 + 0x400;
                        uVar6 = ((uVar10 - 0x1e & 0x20) == 0) << (uVar10 - 0x1e & 0x1f);
                        if (_var_8h != 1) {
                            uVar6 = 0x200;
                        }
                        if (uVar6 <= uVar5) break;
                        puVar8[1] = 0;
                        iVar3 = 0x200;
                        *puVar8 = puVar12;
                        *puVar8 = *puVar8 | 2;
                        *puVar8 = *puVar8 | 1;
                        puVar8[1] = puVar8[1];
                        puVar9 = puVar12;
                        do {
                            *puVar9 = var_14h | 2;
                            *puVar9 = *puVar9 | 1;
                            *puVar9 = *puVar9 | 0x80;
                            bVar13 = 0xffdfffff < var_14h;
                            var_14h = var_14h + 0x200000;
                            puVar9[1] = var_10h;
                            puVar9 = puVar9 + 2;
                            var_10h = var_10h + bVar13;
                            iVar3 = iVar3 + -1;
                        } while (iVar3 != 0);
                        uVar5 = uVar5 + 1;
                        puVar8 = puVar8 + 2;
                    }
                    fcn.000014e1();
                    uVar7 = uVar7 + 1;
                    puVar11 = puVar11 + 2;
                    puVar8 = puVar12;
                }
                fcn.000014e1();
                var_2ch = var_2ch + -1;
                puVar11 = puVar8;
            } while (var_2ch != 0);
        }
        fcn.00000dc1();
        cVar2 = fcn.00000b51();
        if (cVar2 != '\0') {
            uVar1 = rdmsr(0xc0000080);
            wrmsr(0xc0000080,uVar1 | 0x800);
        }
    }
    return puVar4;
}


/* fcn.0000055f @ 0x55f */

void fcn.0000055f(uint param_1,uint param_2)

{
    char cVar1;
    int iVar2;
    
    fcn.00001167();
    do {
        iVar2 = fcn.00001192();
        if (iVar2 == 0) {
            return;
        }
        cVar1 = fcn.000014bd();
    } while (cVar1 == '\0');
    fcn.00001319(*(iVar2 + 0x18),*(iVar2 + 0x1c),*(iVar2 + 0x20),*(iVar2 + 0x24));
    *(iVar2 + 0x24) = 0;
    *(iVar2 + 0x18) = param_1;
    *(iVar2 + 0x1c) = param_2;
    *(iVar2 + 0x20) = 0x100000;
    return;
}


/* fcn.000000a0 @ 0xa0 */

uint64_t fcn.000000a0(void)

{
    uint64_t uVar1;
    uint in_CR0;
    
    //[00] -r-x section size 14497 named .text
    uVar1 = rdmsr(0xc0000080);
    wrmsr(0xc0000080,uVar1 | 0x100);
    return CONCAT44(uVar1 >> 0x20,in_CR0) | 0x80000000;
}


/* fcn.00001111 @ 0x1111 */

//WARNING: Removing unreachable block (ram,0x00001123)

void fcn.00001111(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.00001127 @ 0x1127 */

//WARNING: Removing unreachable block (ram,0x0000114e)
//WARNING: Removing unreachable block (ram,0x00001156)

int __cdecl fcn.00001127(uint noname_0,uint noname_1,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint *in_EDX;
    uint uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (in_ECX == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (in_ECX == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (in_ECX == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (in_ECX == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (in_ECX == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (in_ECX == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (in_ECX == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (in_ECX == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (in_ECX == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (in_ECX == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (in_ECX == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (in_ECX == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (in_ECX == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (in_ECX == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (in_ECX == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(in_ECX);
    }
    uVar2 = puVar1[2];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return in_ECX;
}


/* fcn.00001528 @ 0x1528 */

uint32_t __fastcall fcn.00001528(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iStack_8;
    int32_t iStack_4;
    
    if (param_2 != 0) {
        iVar1 = fcn.00001434(&iStack_8);
        if (-1 < iVar1) {
            uVar2 = iStack_8 + 0x1fffffU & 0xffe00000;
            iVar1 = ((uVar2 - iStack_8 & 0xfff) != 0) + (uVar2 - iStack_8 >> 0xc);
            if (iVar1 != 0) {
                fcn.0000145f(iStack_8,iStack_4);
            }
            iStack_4 = 0;
            iStack_8 = param_2 * 0x1000 + uVar2;
            if ((param_2 + 0x200) - iVar1 != param_2) {
                fcn.0000145f(iStack_8,0);
            }
            return uVar2;
        }
    }
    return 0;
}


/* fcn.00000b9e @ 0xb9e */

uint __fastcall fcn.00000b9e(uint32_t param_1)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    uint *puVar4;
    
    puVar4 = fcn.00001528(param_1);
    puVar3 = *0xffd2b460;
    if (puVar4 == NULL) {
        return 0;
    }
    if (*0xffd2b460 == NULL) {
        *0xffd2b460 = puVar4;
        *puVar4 = puVar4;
    }
    else {
        uVar2 = **0xffd2b460;
        *0xffd2b460 = puVar4;
        *puVar4 = uVar2;
        *puVar3 = puVar4;
    }
    iVar1 = (param_1 & 0xfffffe00) + 0x1ff;
    puVar4[1] = 0x1000;
    puVar4[2] = iVar1;
    return CONCAT31(iVar1 >> 8,1);
}


/* fcn.00000bec @ 0xbec */

int __fastcall fcn.00000bec(uint32_t param_1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    
    if ((param_1 == 0) ||
       (((*0xffd2b460 == 0 || (*(*0xffd2b460 + 8) < param_1)) && (cVar2 = fcn.00000b9e(), cVar2 == '\0')))) {
        iVar3 = 0;
    }
    else {
        iVar1 = *0xffd2b460;
        iVar3 = *(*0xffd2b460 + 4);
        *(*0xffd2b460 + 8) = *(*0xffd2b460 + 8) - param_1;
        *(iVar1 + 4) = param_1 * 0x1000 + iVar3;
        iVar3 = iVar3 + iVar1;
    }
    return iVar3;
}


/* fcn.00000c2e @ 0xc2e */

//WARNING: Removing unreachable block (ram,0x00000d82)

void __cdecl fcn.00000c2e(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t *puVar1;
    uint32_t in_ECX;
    uint32_t uVar2;
    uint32_t *puVar3;
    char in_DL;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
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
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_20h = 0xc;
    var_60h = -0x40000000;
    var_58h = -0x40000000;
    var_1ch = 0x15;
    var_18h = 0x1e;
    var_14h = 0x27;
    var_70h = -0x1000;
    var_6ch = 0xfffff;
    uVar6 = (in_DL != '\0') + 3;
    var_68h = -0x200000;
    var_64h = 0xfffff;
    var_5ch = 0xfffff;
    var_54h = 0xfffff;
    var_48h = 0x1000;
    var_44h = 0;
    var_40h = 0x200000;
    var_3ch = 0;
    var_38h = 0x40000000;
    var_34h = 0;
    var_30h = 0;
    var_2ch = 0x80;
    var_4h = 0;
    do {
        var_8h._0_1_ = (&var_24h)[uVar6];
        uVar5 = arg_ch;
        iVar4 = 0;
        if (((&var_24h)[uVar6] & 0x20U) == 0) {
            uVar5 = arg_8h & 0xffe00000;
            iVar4 = arg_ch;
        }
        uVar2 = (uVar5 >> (var_8h & 0x1f) | iVar4 << 0x20 - (var_8h & 0x1f)) & 0x1ff;
        var_ch = in_ECX + uVar2 * 8;
        uVar5 = *var_ch;
        var_8h = *(var_ch + 4);
        if ((uVar5 & 0x80) == 0) {
            in_ECX = uVar5 & 0xfffff000;
        }
        else {
            if (((&var_4ch)[uVar6 * 2] == 0) && ((&var_50h)[uVar6 * 2] < 0x200001)) {
                uVar7 = 0x200000;
                if ((uVar5 & 2) == 0) {
                    return;
                }
                uVar5 = (&var_50h)[uVar6 * 2];
                uVar6 = (&var_4ch)[uVar6 * 2];
                puVar3 = in_ECX + uVar2 * 8;
                do {
                    do {
                        *puVar3 = *puVar3 & 0xfffffffd;
                        bVar8 = uVar7 < uVar5;
                        uVar7 = uVar7 - uVar5;
                        puVar1 = puVar3 + 2;
                        puVar3[1] = puVar3[1];
                        var_4h = (var_4h - uVar6) - bVar8;
                        puVar3 = puVar1;
                    } while (var_4h != 0);
                } while (uVar7 != 0);
                return;
            }
            in_ECX = fcn.00000bec();
            uVar5 = (&var_78h)[uVar6 * 2] & uVar5;
            uVar7 = (&var_74h)[uVar6 * 2] & var_8h;
            uVar2 = 0;
            do {
                *(in_ECX + 4 + uVar2 * 8) = uVar7;
                *(in_ECX + uVar2 * 8) = uVar5 | 3;
                if (2 < uVar6) {
                    puVar3 = in_ECX + uVar2 * 8;
                    *puVar3 = *puVar3 | 0x80;
                    *(in_ECX + 4 + uVar2 * 8) = uVar7;
                }
                bVar8 = CARRY4(uVar5,(&var_58h)[uVar6 * 2]);
                uVar5 = uVar5 + (&var_58h)[uVar6 * 2];
                uVar7 = uVar7 + (&var_54h)[uVar6 * 2] + bVar8;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x200);
            *(var_ch + 4) = 0;
            *var_ch = in_ECX | 3;
        }
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
            return;
        }
    } while( true );
}


/* fcn.000014e1 @ 0x14e1 */

uint __fastcall fcn.000014e1(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000170(param_1,param_2);
    return uVar1;
}


/* fcn.00000dc1 @ 0xdc1 */

void fcn.00000dc1(void)

{
    int *piVar1;
    int iVar2;
    int *arg_8h;
    int *piVar3;
    int arg_ch;
    uint32_t uVar4;
    bool bVar5;
    
    piVar1 = *0xffd2b460;
    if (*0xffd2b460 != NULL) {
        piVar3 = *0xffd2b460;
        do {
            uVar4 = piVar3[2] * 0x1000 + piVar3[1];
            iVar2 = 0;
            if (uVar4 != 0) {
                arg_ch = 0;
                arg_8h = piVar3;
                do {
                    do {
                        fcn.00000c2e(arg_8h,arg_ch);
                        bVar5 = 0xffdfffff < arg_8h;
                        arg_8h = arg_8h + 0x80000;
                        arg_ch = arg_ch + bVar5;
                        bVar5 = 0x1fffff < uVar4;
                        uVar4 = uVar4 - 0x200000;
                        iVar2 = iVar2 + -1 + bVar5;
                    } while (iVar2 != 0);
                } while (uVar4 != 0);
            }
            piVar3 = *piVar3;
        } while (piVar3 != piVar1);
    }
    return;
}


/* fcn.00000b51 @ 0xb51 */

uint __fastcall fcn.00000b51(uint param_1)

{
    int32_t var_8h;
    uint32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    fcn.00001127(param_1,param_1,0);
    if ((0x80000000 < var_4h) && (fcn.00001127(0x80000001,0x80000001,&var_8h), (var_8h & 0x100000U) != 0)) {
        return 1;
    }
    return 0;
}


/* fcn.00000190 @ 0x190 */

uchar * fcn.00000190(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.0000145f @ 0x145f */

void __cdecl fcn.0000145f(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.0000183e @ 0x183e */

void __fastcall fcn.0000183e(int *param_1,uint16_t param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h._0_1_ = param_2;
    iVar1 = 0;
    if ((param_2 & 0x20) == 0) {
        iVar1 = param_1[5];
    }
    param_1[5] = iVar1 << (var_4h & 0x1f);
    if (*(param_1 + 4) < param_2) {
        do {
            param_2 = param_2 - param_1[4];
            var_4h._0_1_ = param_2;
            iVar1 = 0;
            if ((param_2 & 0x20) == 0) {
                iVar1 = param_1[6];
            }
            param_1[5] = param_1[5] | iVar1 << (var_4h & 0x1f);
            if (param_1[8] == 0) {
                param_1[6] = 0;
            }
            else {
                param_1[8] = param_1[8] + -1;
                param_1[6] = *(*param_1 + param_1[3]);
                param_1[3] = param_1[3] + 1;
            }
            *(param_1 + 4) = 8;
        } while (8 < param_2);
    }
    *(param_1 + 4) = param_1[4] - param_2;
    param_1[5] = param_1[5] | param_1[6] >> (*(param_1 + 4) & 0x1f);
    return;
}


/* fcn.00000270 @ 0x270 */

ushort * fcn.00000270(ushort *param_1,int param_2,ushort param_3)

{
    ushort *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.000018f5 @ 0x18f5 */

uint32_t __fastcall fcn.000018f5(int param_1,char param_2)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0x14);
    fcn.0000183e();
    return uVar1 >> (0x20U - param_2 & 0x1f);
}


/* fcn.000014f2 @ 0x14f2 */

uint __fastcall fcn.000014f2(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000190(param_1,param_2,0);
    return uVar1;
}


/* fcn.0000190d @ 0x190d */

uint __fastcall fcn.0000190d(int param_1,uint16_t param_2,int param_3,uint32_t param_4,int param_5)

{
    uint8_t uVar1;
    uint16_t uVar2;
    char cVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint uVar7;
    uint8_t uVar8;
    uint8_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint16_t *puVar13;
    int iVar14;
    uint32_t uVar15;
    uint16_t uVar16;
    int16_t *piVar17;
    int16_t aiStack_48 [18];
    uint uStack_24;
    int16_t aiStack_20 [15];
    int16_t iStack_2;
    
    piVar17 = aiStack_48;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        piVar17[0] = 0;
        piVar17[1] = 0;
        piVar17 = piVar17 + 2;
    }
    uVar4 = 0;
    *piVar17 = 0;
    if (param_2 != 0) {
        do {
            if (0x10 < *(uVar4 + param_3)) {
                return 0xffff;
            }
            aiStack_48[*(uVar4 + param_3)] = aiStack_48[*(uVar4 + param_3)] + 1;
            uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
    }
    uVar8 = 0xf;
    iVar10 = 0x10;
    uStack_24 = 0;
    iVar14 = 0;
    do {
        uVar9 = uVar8 & 0x1f;
        uVar8 = uVar8 - 1;
        *(aiStack_20 + iVar14) = (*(aiStack_48 + iVar14 + 2) << uVar9) + *(&uStack_24 + iVar14 + 2);
        iVar10 = iVar10 + -1;
        iVar14 = iVar14 + 2;
    } while (iVar10 != 0);
    if (iStack_2 == 0) {
        uVar4 = 1;
        uVar8 = 0x10 - param_4;
        aiStack_48[0] = 0;
        uVar16 = param_4;
        if (uVar16 == 0) goto code_r0x000019f2;
        do {
            uVar15 = uVar4;
            puVar13 = &uStack_24 + uVar15 * 2;
            *puVar13 = *puVar13 >> (uVar8 & 0x1f);
            cVar3 = uVar4;
            uVar4 = uVar4 + 1;
            aiStack_48[uVar15] = 1 << (param_4 - cVar3 & 0x1fU);
        } while (uVar4 <= uVar16);
        for (; uVar4 < 0x11; uVar4 = uVar4 + 1) {
code_r0x000019f2:
            aiStack_48[uVar4] = 1 << (0x10U - uVar4 & 0x1f);
        }
        uVar4 = *(&uStack_24 + ((param_4 & 0xffff) + 1) * 2) >> (uVar8 & 0x1f);
        uVar9 = param_4 & 0xffff;
        if (((uVar4 != 0) && (uVar5 = 1 << (uVar9 & 0x1f), uVar4 < uVar5)) &&
           (uVar15 = uVar5 - uVar4, (uVar15 & 0x7fffffff) != 0)) {
            fcn.00000270(param_5 + uVar4 * 2,uVar15 & 0x7fffffff,0);
        }
        uVar5 = 0;
        uVar4 = param_2;
        if (param_2 != 0) {
            do {
                uVar1 = *(uVar5 + param_3);
                uVar15 = uVar1;
                if ((uVar1 != 0) && (uVar15 < 0x11)) {
                    uVar2 = *(&uStack_24 + uVar15 * 2);
                    uVar11 = uVar2;
                    uVar6 = aiStack_48[uVar15] + uVar2;
                    if (uVar16 < uVar1) {
                        puVar13 = param_5 + (uVar2 >> (uVar8 & 0x1f)) * 2;
                        uVar12 = uVar15 - param_4 & 0xffff;
                        if (uVar15 - param_4 != 0) {
                            do {
                                if ((*puVar13 == 0) && (uVar4 < 0x3fb)) {
                                    *(param_1 + 0x2a + uVar4 * 2) = 0;
                                    *(param_1 + 0x820 + uVar4 * 2) = 0;
                                    *puVar13 = uVar4;
                                    uVar4 = uVar4 + 1;
                                }
                                if (*puVar13 < 0x3fb) {
                                    iVar10 = param_1 + 0x820;
                                    if ((1 << (0xf - uVar9 & 0x1f) & uVar11) == 0) {
                                        iVar10 = param_1 + 0x2a;
                                    }
                                    puVar13 = iVar10 + *puVar13 * 2;
                                }
                                uVar12 = uVar12 + 0xffff;
                                uVar11 = uVar11 * 2;
                            } while (uVar12 != 0);
                        }
                        *puVar13 = uVar5;
                    }
                    else {
                        if ((uVar6 <= uVar2) || (1 << (uVar9 & 0x1f) < uVar6)) goto code_r0x00001bfe;
                        puVar13 = param_5 + uVar11 * 2;
                        for (uVar12 = (uVar6 - uVar11 & 0xffff) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
                            *puVar13 = CONCAT22(uVar5,uVar5);
                            puVar13 = puVar13 + 2;
                        }
                        for (uVar11 = (uVar6 - uVar11 & 1) != 0; uVar11 != 0; uVar11 = uVar11 - 1) {
                            *puVar13 = uVar5;
                            puVar13 = puVar13 + 1;
                        }
                    }
                    *(&uStack_24 + uVar15 * 2) = uVar6;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < param_2);
        }
        uVar7 = 0;
    }
    else {
code_r0x00001bfe:
        uVar7 = 0xffff;
    }
    return uVar7;
}


/* fcn.00001c77 @ 0x1c77 */

uint __fastcall fcn.00001c77(int param_1,uint16_t param_2,uint param_3,uint16_t param_4)

{
    uint16_t uVar1;
    ushort uVar2;
    int16_t iVar3;
    uint uVar4;
    uint32_t uVar5;
    uchar uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint16_t uVar9;
    
    uVar1 = fcn.000018f5();
    if (uVar1 == 0) {
        uVar2 = fcn.000018f5();
        fcn.00000270(param_1 + 0x3234,0x100,uVar2);
        fcn.000014f2();
        uVar4 = 0;
    }
    else {
        uVar9 = 0;
        if (uVar1 != 0) {
            do {
                if (0x1e < uVar9) break;
                uVar8 = *(param_1 + 0x14) >> 0x1d;
                uVar7 = *(param_1 + 0x14) >> 0x1d;
                if (uVar7 == 7) {
                    uVar5 = 0x10000000;
                    if ((*(param_1 + 0x14) & 0x10000000) != 0) {
                        do {
                            uVar5 = uVar5 >> 1;
                            uVar8 = uVar8 + 1;
                        } while ((*(param_1 + 0x14) & uVar5) != 0);
                        uVar7 = uVar8;
                        goto code_r0x00001d0f;
                    }
code_r0x00001d16:
                    uVar6 = uVar8;
                }
                else {
code_r0x00001d0f:
                    uVar6 = uVar8;
                    if (6 < uVar7) goto code_r0x00001d16;
                }
                fcn.0000183e();
                uVar8 = uVar9;
                uVar9 = uVar9 + 1;
                *(uVar8 + 0x1214 + param_1) = uVar6;
                if (uVar9 == param_4) {
                    iVar3 = fcn.000018f5();
                    for (; (iVar3 = iVar3 + -1, -1 < iVar3 && (uVar9 < 0x1f)); uVar9 = uVar9 + 1) {
                        *(uVar9 + 0x1214 + param_1) = 0;
                    }
                }
            } while (uVar9 < uVar1);
        }
        for (; (uVar9 < param_2 && (uVar9 < 0x1f)); uVar9 = uVar9 + 1) {
            *(uVar9 + 0x1214 + param_1) = 0;
        }
        uVar4 = fcn.0000190d(param_1 + 0x1214,8,param_1 + 0x3234);
    }
    return uVar4;
}


/* fcn.00001db4 @ 0x1db4 */

void __fastcall fcn.00001db4(int param_1)

{
    uint16_t uVar1;
    ushort uVar2;
    uint extraout_ECX;
    uint32_t uVar3;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint16_t uVar8;
    
    uVar1 = fcn.000018f5();
    if (uVar1 == 0) {
        uVar2 = fcn.000018f5();
        fcn.00000190(param_1 + 0x1016,0x1fe,0);
        fcn.00000270(param_1 + 0x1234,0x1000,uVar2);
    }
    else {
        uVar8 = 0;
        uVar4 = extraout_ECX;
        if (uVar1 != 0) {
            do {
                if (0x1fd < uVar8) break;
                uVar5 = *(param_1 + 0x3234 + (*(param_1 + 0x14) >> 0x18) * 2);
                uVar6 = uVar5;
                if (0x12 < uVar5) {
                    uVar3 = 0x800000;
                    do {
                        if ((*(param_1 + 0x14) & uVar3) == 0) {
                            uVar5 = *(param_1 + 0x2a + uVar6 * 2);
                        }
                        else {
                            uVar5 = *(param_1 + 0x820 + uVar6 * 2);
                        }
                        uVar6 = uVar5;
                        uVar3 = uVar3 >> 1;
                    } while (0x12 < uVar5);
                }
                fcn.0000183e();
                uVar4 = 2;
                uVar5 = uVar6;
                if (uVar5 < 3) {
                    if (uVar5 == 0) {
                        uVar6 = 1;
                    }
                    else {
                        if (uVar5 == 1) {
                            iVar7 = fcn.000018f5();
                            uVar6 = iVar7 + 3;
                            uVar4 = extraout_ECX_00;
                        }
                        else {
                            if (uVar5 != 2) goto code_r0x00001ea9;
                            iVar7 = fcn.000018f5();
                            uVar6 = iVar7 + 0x14;
                            uVar4 = extraout_ECX_01;
                        }
                        uVar6 = uVar6 & 0xffff;
                    }
code_r0x00001ea9:
                    iVar7 = uVar6 + 0xffff;
                    if (-1 < iVar7) {
                        uVar4 = 0x1fe;
                        do {
                            if (0x1fd < uVar8) break;
                            uVar6 = uVar8;
                            iVar7 = iVar7 + 0xffff;
                            uVar8 = uVar8 + 1;
                            *(uVar6 + 0x1016 + param_1) = 0;
                        } while (-1 < iVar7);
                    }
                }
                else {
                    uVar3 = uVar8;
                    uVar8 = uVar8 + 1;
                    *(uVar3 + 0x1016 + param_1) = uVar6 + -2;
                }
            } while (uVar8 < uVar1);
        }
        fcn.000014f2(uVar4);
        fcn.0000190d(param_1 + 0x1016,0xc,param_1 + 0x1234);
    }
    return;
}


/* fcn.00001f2e @ 0x1f2e */

uint16_t __fastcall fcn.00001f2e(int param_1)

{
    ushort uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    if (*(param_1 + 0x1c) == 0) {
        uVar1 = fcn.000018f5();
        *(param_1 + 0x1c) = uVar1;
        iVar2 = fcn.00001c77(5,3);
        *(param_1 + 0x28) = iVar2;
        if (iVar2 == 0) {
            fcn.00001db4();
            iVar2 = fcn.00001c77(*(param_1 + 0x3434),0xffff);
            *(param_1 + 0x28) = iVar2;
            if (iVar2 == 0) goto code_r0x00001f8d;
        }
        uVar4 = 0;
    }
    else {
code_r0x00001f8d:
        *(param_1 + 0x1c) = *(param_1 + 0x1c) + -1;
        uVar4 = *(param_1 + 0x1234 + (*(param_1 + 0x14) >> 0x14) * 2);
        if (0x1fd < uVar4) {
            uVar3 = 0x80000;
            do {
                if ((*(param_1 + 0x14) & uVar3) == 0) {
                    uVar4 = *(param_1 + 0x2a + uVar4 * 2);
                }
                else {
                    uVar4 = *(param_1 + 0x820 + uVar4 * 2);
                }
                uVar3 = uVar3 >> 1;
            } while (0x1fd < uVar4);
        }
        fcn.0000183e();
    }
    return uVar4;
}


/* fcn.00001c05 @ 0x1c05 */

uint32_t __fastcall fcn.00001c05(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    
    uVar3 = *(param_1 + 0x3234 + (*(param_1 + 0x14) >> 0x18) * 2);
    if (0x1e < uVar3) {
        uVar2 = 0x800000;
        do {
            if ((*(param_1 + 0x14) & uVar2) == 0) {
                uVar3 = *(param_1 + 0x2a + uVar3 * 2);
            }
            else {
                uVar3 = *(param_1 + 0x820 + uVar3 * 2);
            }
            uVar2 = uVar2 >> 1;
        } while (0x1e < uVar3);
    }
    uVar2 = uVar3;
    fcn.0000183e();
    if (1 < uVar3) {
        iVar1 = fcn.000018f5();
        uVar2 = iVar1 + (1 << (uVar3 - 1U & 0x1f));
    }
    return uVar2;
}


/* fcn.00001fe5 @ 0x1fe5 */

void __fastcall fcn.00001fe5(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int16_t iVar4;
    
    uVar1 = fcn.00001f2e();
    iVar4 = *(param_1 + 0x28);
    do {
        if (iVar4 != 0) {
            return;
        }
        if (uVar1 < 0x100) {
            if (*(param_1 + 0x24) <= *(param_1 + 8)) {
                return;
            }
            *(*(param_1 + 8) + *(param_1 + 4)) = uVar1;
            *(param_1 + 8) = *(param_1 + 8) + 1;
        }
        else {
            iVar2 = fcn.00001c05();
            uVar3 = (*(param_1 + 8) - iVar2) - 1;
            for (iVar4 = uVar1 - 0xfe; -1 < iVar4; iVar4 = iVar4 + -1) {
                if (*(param_1 + 0x24) <= *(param_1 + 8)) {
                    return;
                }
                if (*(param_1 + 0x24) <= uVar3) {
                    *(param_1 + 0x28) = 0xffff;
                    return;
                }
                *(*(param_1 + 4) + *(param_1 + 8)) = *(*(param_1 + 4) + uVar3);
                *(param_1 + 8) = *(param_1 + 8) + 1;
                uVar3 = uVar3 + 1;
            }
            if (*(param_1 + 0x24) <= *(param_1 + 8)) {
                return;
            }
        }
        uVar1 = fcn.00001f2e();
        iVar4 = *(param_1 + 0x28);
    } while( true );
}


/* fcn.0000230b @ 0x230b */

uint __thiscall fcn.0000230b(uint param_1,uint *param_2,uint *param_3)

{
    ulong uVar1;
    
    uVar1 = fcn.000022c0(param_1);
    if (uVar1 >> 0x20 != 0) {
        return 0x80000003;
    }
    *param_2 = uVar1;
    *param_3 = 0x10000;
    return 0;
}


/* fcn.000022c0 @ 0x22c0 */

void fcn.000022c0(void)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = 0xc;
    do {
        iVar1 = iVar1 + -1;
    } while (4 < iVar1);
    return;
}


/* fcn.00002335 @ 0x2335 */

uint32_t __cdecl fcn.00002335(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int in_ECX;
    int in_EDX;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000022c0();
    arg_ch = in_EDX + -0xd;
    iVar1 = fcn.00003827(in_ECX + 0xd,&arg_ch);
    return -(iVar1 != 0) & 0x80000002;
}


/* fcn.00003827 @ 0x3827 */

int __fastcall fcn.00003827(uint param_1,uint *param_2,uint param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    int iVar2;
    int *in_stack_00000018;
    int in_stack_0000001c;
    int iVar3;
    
    *in_stack_00000018 = 0;
    uVar1 = *param_4;
    *param_4 = 0;
    *param_2 = 0;
    if (uVar1 < 5) {
        iVar2 = 6;
    }
    else {
        iVar2 = fcn.00003774();
        if ((iVar2 == 0) && (iVar3 = in_stack_0000001c, iVar2 = fcn.000037cb(in_stack_0000001c), iVar2 == 0)) {
            *param_4 = uVar1;
            iVar2 = fcn.000034d0(param_3,param_4,iVar3,in_stack_00000018);
            *param_2 = 0;
            if ((iVar2 == 0) && (*in_stack_00000018 == 3)) {
                iVar2 = 6;
            }
            (**(in_stack_0000001c + 4))(in_stack_0000001c,0);
        }
    }
    return iVar2;
}


/* fcn.0000239a @ 0x239a */

uint __fastcall fcn.0000239a(uint8_t *param_1,uint32_t param_2,uint8_t *param_3)

{
    uchar *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint16_t *puVar15;
    int iVar16;
    int iVar17;
    uchar *puVar18;
    int iVar19;
    uint32_t uVar20;
    int iVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    int iStack_68;
    uint8_t *puStack_54;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    int iStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_24;
    
    iVar6 = *(param_1 + 0xc);
    uVar2 = param_1[2];
    uStack_4c = *(param_1 + 0x40);
    uStack_3c = *(param_1 + 0x30);
    uVar3 = *param_1;
    uStack_30 = *(param_1 + 0x34);
    uStack_2c = *(param_1 + 0x38);
    uStack_24 = *(param_1 + 0x3c);
    uVar10 = *(param_1 + 0x20);
    uVar22 = *(param_1 + 0x24);
    uVar4 = param_1[1];
    uVar7 = *(param_1 + 0x2c);
    iVar8 = *(param_1 + 0x10);
    uVar9 = *(param_1 + 0x14);
    uStack_48 = *(param_1 + 0x18);
    puStack_54 = *(param_1 + 0x1c);
    uStack_44 = *(param_1 + 0x28);
    iStack_40 = 0;
    do {
        uVar14 = uStack_24;
        iVar19 = (uStack_44 & (1 << (uVar2 & 0x1f)) - 1U) * 0x10;
        iVar17 = uStack_4c + iVar19;
        uVar5 = *(iVar6 + -0x200 + iVar17 * 2);
        uVar23 = uVar10;
        if (uVar10 < 0x1000000) {
            uVar23 = uVar10 << 8;
            uVar22 = uVar22 << 8 | *puStack_54;
            puStack_54 = puStack_54 + 1;
        }
        uVar10 = (uVar23 >> 0xb) * uVar5;
        if (uVar22 < uVar10) {
            *(iVar6 + -0x200 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
            iVar17 = iVar6 + 0x280;
            if ((uStack_44 != 0) || (uVar7 != 0)) {
                uVar14 = uVar9;
                if (uStack_48 != 0) {
                    uVar14 = uStack_48;
                }
                iVar17 = iVar17 + ((*((uVar14 - 1) + iVar8) + uStack_44 * 0x100 &
                                   (0x100 << (uVar4 & 0x1f)) - (0x100U >> (uVar3 & 0x1f))) << (uVar3 & 0x1f)) * 6;
            }
            uStack_44 = uStack_44 + 1;
            if (uStack_4c < 7) {
                if (uStack_4c < 4) {
                    uVar23 = uStack_4c;
                }
                else {
                    uVar23 = 3;
                }
                uVar14 = 1;
                do {
                    uVar14 = uVar14 * 2;
                    uVar5 = *(uVar14 + iVar17);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar11 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar11) {
                        *(uVar14 + iVar17) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar11;
                    }
                    else {
                        uVar10 = uVar10 - uVar11;
                        uVar22 = uVar22 - uVar11;
                        *(uVar14 + iVar17) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar14 + 1;
                    }
                } while (uVar14 < 0x100);
            }
            else {
                uVar11 = *(((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48 + iVar8);
                uVar23 = (-(uStack_4c < 10) & 0xfffffffd) + 6;
                uVar14 = 1;
                uVar13 = 0x100;
                do {
                    uVar11 = uVar11 * 2;
                    uVar20 = uVar13 & uVar11;
                    iVar19 = uVar13 + uVar20 + uVar14;
                    uVar5 = *(iVar17 + iVar19 * 2);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar12 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar12) {
                        uVar14 = uVar14 * 2;
                        uVar20 = uVar20 ^ uVar13;
                        *(iVar17 + iVar19 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar12;
                    }
                    else {
                        uVar10 = uVar10 - uVar12;
                        uVar14 = uVar14 * 2 + 1;
                        uVar22 = uVar22 - uVar12;
                        *(iVar17 + iVar19 * 2) = uVar5 - (uVar5 >> 5);
                    }
                    uVar13 = uVar20;
                } while (uVar14 < 0x100);
            }
            uStack_4c = uStack_4c - uVar23;
            *(iVar8 + uStack_48) = uVar14;
            uStack_48 = uStack_48 + 1;
        }
        else {
            uVar23 = uVar23 - uVar10;
            uVar22 = uVar22 - uVar10;
            *(iVar6 + -0x200 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
            uVar5 = *(iVar6 + 0x20 + uStack_4c * 2);
            if (uVar23 < 0x1000000) {
                uVar23 = uVar23 * 0x100;
                uVar22 = uVar22 * 0x100 | *puStack_54;
                puStack_54 = puStack_54 + 1;
            }
            uVar11 = (uVar23 >> 0xb) * uVar5;
            if (uVar22 < uVar11) {
                *(iVar6 + 0x20 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                uStack_4c = uStack_4c + 0xc;
                puVar15 = iVar6 + -0x600;
            }
            else {
                uVar23 = uVar23 - uVar11;
                uVar22 = uVar22 - uVar11;
                *(iVar6 + 0x20 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                uVar5 = *(iVar6 + 0x38 + uStack_4c * 2);
                if (uVar23 < 0x1000000) {
                    uVar23 = uVar23 * 0x100;
                    uVar22 = uVar22 * 0x100 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar11 = (uVar23 >> 0xb) * uVar5;
                if (uVar22 < uVar11) {
                    *(iVar6 + 0x38 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                    iVar17 = uStack_4c + iVar19;
                    uVar5 = *(iVar6 + -0xc00 + iVar17 * 2);
                    if (uVar11 < 0x1000000) {
                        uVar11 = uVar11 * 0x100;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar10 = (uVar11 >> 0xb) * uVar5;
                    if (uVar22 < uVar10) {
                        *(iVar6 + -0xc00 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        *(iVar8 + uStack_48) = *(((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48 + iVar8);
                        uStack_48 = uStack_48 + 1;
                        uStack_44 = uStack_44 + 1;
                        uStack_4c = (-(uStack_4c < 7) & 0xfffffffe) + 0xb;
                        goto code_r0x00002d95;
                    }
                    uVar11 = uVar11 - uVar10;
                    uVar22 = uVar22 - uVar10;
                    *(iVar6 + -0xc00 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                }
                else {
                    uVar23 = uVar23 - uVar11;
                    uVar22 = uVar22 - uVar11;
                    *(iVar6 + 0x38 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                    uVar5 = *(iVar6 + 0x50 + uStack_4c * 2);
                    if (uVar23 < 0x1000000) {
                        uVar23 = uVar23 * 0x100;
                        uVar22 = uVar22 * 0x100 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar11 = (uVar23 >> 0xb) * uVar5;
                    if (uVar22 < uVar11) {
                        *(iVar6 + 0x50 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar14 = uStack_30;
                    }
                    else {
                        uVar23 = uVar23 - uVar11;
                        uVar22 = uVar22 - uVar11;
                        *(iVar6 + 0x50 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                        uVar5 = *(iVar6 + 0x68 + uStack_4c * 2);
                        if (uVar23 < 0x1000000) {
                            uVar23 = uVar23 * 0x100;
                            uVar22 = uVar22 * 0x100 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar10 = (uVar23 >> 0xb) * uVar5;
                        if (uVar22 < uVar10) {
                            *(iVar6 + 0x68 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = uStack_2c;
                            uVar11 = uVar10;
                        }
                        else {
                            uVar11 = uVar23 - uVar10;
                            uVar22 = uVar22 - uVar10;
                            *(iVar6 + 0x68 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                            uStack_24 = uStack_2c;
                        }
                        uStack_2c = uStack_30;
                    }
                    uStack_30 = uStack_3c;
                    uStack_3c = uVar14;
                }
                puVar15 = iVar6 + -0xa00;
                uStack_4c = (-(uStack_4c < 7) & 0xfffffffd) + 0xb;
            }
            uVar5 = *puVar15;
            if (uVar11 < 0x1000000) {
                uVar11 = uVar11 << 8;
                uVar22 = uVar22 << 8 | *puStack_54;
                puStack_54 = puStack_54 + 1;
            }
            uVar10 = (uVar11 >> 0xb) * uVar5;
            if (uVar22 < uVar10) {
                iStack_68 = 0;
                *puVar15 = (0x800 - uVar5 >> 5) + uVar5;
code_r0x00002906:
                puVar15 = puVar15 + iVar19;
                uVar14 = 8;
            }
            else {
                uVar11 = uVar11 - uVar10;
                uVar22 = uVar22 - uVar10;
                *puVar15 = uVar5 - (uVar5 >> 5);
                uVar5 = puVar15[8];
                if (uVar11 < 0x1000000) {
                    uVar11 = uVar11 * 0x100;
                    uVar22 = uVar22 * 0x100 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar14 = (uVar11 >> 0xb) * uVar5;
                if (uVar22 < uVar14) {
                    iVar19 = iVar19 + 8;
                    iStack_68 = 8;
                    puVar15[8] = (0x800 - uVar5 >> 5) + uVar5;
                    uVar10 = uVar14;
                    goto code_r0x00002906;
                }
                uVar10 = uVar11 - uVar14;
                uVar22 = uVar22 - uVar14;
                uVar14 = 0x100;
                puVar15[8] = uVar5 - (uVar5 >> 5);
                puVar15 = puVar15 + 0x100;
                iStack_68 = 0x10;
            }
            uVar23 = 1;
            do {
                uVar11 = uVar23 * 2;
                uVar5 = puVar15[uVar23];
                if (uVar10 < 0x1000000) {
                    uVar10 = uVar10 << 8;
                    uVar22 = uVar22 << 8 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar13 = (uVar10 >> 0xb) * uVar5;
                if (uVar22 < uVar13) {
                    puVar15[uVar23] = (0x800 - uVar5 >> 5) + uVar5;
                    uVar10 = uVar13;
                }
                else {
                    uVar10 = uVar10 - uVar13;
                    uVar22 = uVar22 - uVar13;
                    puVar15[uVar23] = uVar5 - (uVar5 >> 5);
                    uVar11 = uVar11 + 1;
                }
                uVar23 = uVar11;
            } while (uVar11 < uVar14);
            uVar11 = uVar11 + (iStack_68 - uVar14);
            if (0xb < uStack_4c) {
                if (uVar11 < 4) {
                    uVar14 = uVar11;
                }
                else {
                    uVar14 = 3;
                }
                iVar17 = (uVar14 + 1) * 0x80 + iVar6;
                uVar14 = 1;
                do {
                    uVar14 = uVar14 * 2;
                    uVar5 = *(uVar14 + iVar17);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar23 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar23) {
                        *(uVar14 + iVar17) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar23;
                    }
                    else {
                        uVar10 = uVar10 - uVar23;
                        uVar22 = uVar22 - uVar23;
                        *(uVar14 + iVar17) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar14 + 1;
                    }
                } while (uVar14 < 0x40);
                uVar14 = uVar14 - 0x40;
                if (3 < uVar14) {
                    iVar17 = (uVar14 >> 1) - 1;
                    uVar23 = uVar14 & 1 | 2;
                    if (uVar14 < 0xe) {
                        iVar16 = (uVar23 << (iVar17 & 0x1f)) + 1;
                        iVar19 = 1;
                        do {
                            iVar21 = iVar19;
                            uVar5 = *(iVar6 + -0xd00 + iVar16 * 2);
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            uVar14 = (uVar10 >> 0xb) * uVar5;
                            if (uVar22 < uVar14) {
                                *(iVar6 + -0xd00 + iVar16 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                iVar19 = iVar21;
                                uVar10 = uVar14;
                            }
                            else {
                                uVar10 = uVar10 - uVar14;
                                uVar22 = uVar22 - uVar14;
                                iVar19 = iVar21 * 2;
                                *(iVar6 + -0xd00 + iVar16 * 2) = uVar5 - (uVar5 >> 5);
                            }
                            iVar16 = iVar16 + iVar19;
                            iVar17 = iVar17 + -1;
                            iVar19 = iVar21 * 2;
                        } while (iVar17 != 0);
                        uVar14 = iVar16 + iVar21 * -2;
                    }
                    else {
                        iVar17 = (uVar14 >> 1) - 5;
                        do {
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            uVar10 = uVar10 >> 1;
                            uVar14 = uVar22 - uVar10 >> 0x1f;
                            uVar23 = uVar23 * 2 + 1 + uVar14;
                            uVar22 = (uVar22 - uVar10) + (uVar14 & uVar10);
                            iVar17 = iVar17 + -1;
                        } while (iVar17 != 0);
                        uVar5 = *(iVar6 + 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 * 0x100 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar14 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar14) {
                            *(iVar6 + 2) = (0x800 - uVar5 >> 5) + uVar5;
                            iStack_68 = 2;
                            uVar10 = uVar14;
                        }
                        else {
                            uVar10 = uVar10 - uVar14;
                            uVar22 = uVar22 - uVar14;
                            *(iVar6 + 2) = uVar5 - (uVar5 >> 5);
                            iStack_68 = 3;
                        }
                        iVar17 = iStack_68;
                        uVar5 = *(iVar6 + iStack_68 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar14 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar14) {
                            iStack_68 = 2;
                            *(iVar6 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar10 = uVar14;
                        }
                        else {
                            uVar10 = uVar10 - uVar14;
                            uVar22 = uVar22 - uVar14;
                            iStack_68 = 4;
                            *(iVar6 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                        }
                        iVar17 = iVar17 + iStack_68;
                        uVar5 = *(iVar6 + iVar17 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar13 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar13) {
                            *(iVar6 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = iVar17 + 4;
                            uVar10 = uVar13;
                        }
                        else {
                            uVar10 = uVar10 - uVar13;
                            uVar22 = uVar22 - uVar13;
                            *(iVar6 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                            uVar14 = iVar17 + 8;
                        }
                        uVar5 = *(iVar6 + uVar14 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar13 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar13) {
                            *(iVar6 + uVar14 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = uVar14 - 8;
                            uVar10 = uVar13;
                        }
                        else {
                            uVar10 = uVar10 - uVar13;
                            uVar22 = uVar22 - uVar13;
                            *(iVar6 + uVar14 * 2) = uVar5 - (uVar5 >> 5);
                        }
                        uVar14 = uVar23 * 0x10 | uVar14;
                        if (uVar14 == 0xffffffff) {
                            iStack_40 = 0x112;
                            uStack_4c = uStack_4c - 0xc;
code_r0x00002dad:
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            *(param_1 + 0x18) = uStack_48;
                            *(param_1 + 0x1c) = puStack_54;
                            *(param_1 + 0x28) = uStack_44;
                            *(param_1 + 0x20) = uVar10;
                            *(param_1 + 0x24) = uVar22;
                            *(param_1 + 0x44) = iStack_40;
                            *(param_1 + 0x30) = uStack_3c;
                            *(param_1 + 0x34) = uStack_30;
                            *(param_1 + 0x3c) = uStack_24;
                            *(param_1 + 0x38) = uStack_2c;
                            *(param_1 + 0x40) = uStack_4c;
                            return 0;
                        }
                    }
                }
                uStack_24 = uStack_2c;
                uStack_4c = (-(uStack_4c < 0x13) & 0xfffffffd) + 10;
                uStack_2c = uStack_30;
                uStack_30 = uStack_3c;
                uVar23 = uVar7;
                if (uVar7 == 0) {
                    uVar23 = uStack_44;
                }
                uStack_3c = uVar14 + 1;
                if (uVar23 <= uVar14) {
                    *(param_1 + 0x18) = uStack_48;
                    return 1;
                }
            }
            uVar11 = uVar11 + 2;
            uVar14 = param_2 - uStack_48;
            if (uVar14 == 0) {
                *(param_1 + 0x18) = uStack_48;
                return 1;
            }
            if (uVar11 <= uVar14) {
                uVar14 = uVar11;
            }
            uStack_44 = uStack_44 + uVar14;
            iStack_40 = uVar11 - uVar14;
            uVar23 = ((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48;
            if (uVar9 - uVar23 < uVar14) {
                do {
                    *(iVar8 + uStack_48) = *(uVar23 + iVar8);
                    uStack_48 = uStack_48 + 1;
                    uVar23 = -(uVar23 + 1 != uVar9) & uVar23 + 1;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            else {
                puVar18 = iVar8 + uStack_48;
                iVar17 = uVar23 - uStack_48;
                uStack_48 = uStack_48 + uVar14;
                puVar1 = puVar18 + uVar14;
                do {
                    *puVar18 = puVar18[iVar17];
                    puVar18 = puVar18 + 1;
                } while (puVar18 != puVar1);
            }
        }
code_r0x00002d95:
        if ((param_2 <= uStack_48) || (param_3 <= puStack_54)) goto code_r0x00002dad;
    } while( true );
}


/* fcn.00002e35 @ 0x2e35 */

void __fastcall fcn.00002e35(int param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *(param_1 + 0x44);
    if ((uVar1 != 0) && (uVar1 < 0x112)) {
        uVar5 = *(param_1 + 0x18);
        uVar2 = *(param_1 + 0x14);
        iVar3 = *(param_1 + 0x10);
        uVar4 = *(param_1 + 0x30);
        uVar6 = uVar1;
        if (param_2 - uVar5 < uVar1) {
            uVar6 = param_2 - uVar5;
        }
        if ((*(param_1 + 0x2c) == 0) && (*(param_1 + 4) - *(param_1 + 0x28) <= uVar6)) {
            *(param_1 + 0x2c) = *(param_1 + 4);
        }
        *(param_1 + 0x28) = *(param_1 + 0x28) + uVar6;
        *(param_1 + 0x44) = uVar1 - uVar6;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uVar5 + iVar3) = *(((-(uVar5 < uVar4) & uVar2) - uVar4) + uVar5 + iVar3);
            uVar5 = uVar5 + 1;
        }
        *(param_1 + 0x18) = uVar5;
    }
    return;
}


/* fcn.00002f30 @ 0x2f30 */

uint __fastcall fcn.00002f30(uint8_t *param_1,uint8_t *param_2,int param_3)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint16_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    uint32_t uStack_c;
    
    puVar1 = param_2 + param_3;
    iVar6 = *(param_1 + 0xc);
    uVar8 = *(param_1 + 0x40);
    uVar11 = *(param_1 + 0x20);
    uVar13 = *(param_1 + 0x24);
    iStack_10 = 1;
    uVar2 = (1 << (param_1[2] & 0x1f)) - 1U & *(param_1 + 0x28);
    iVar3 = uVar2 * 0x10;
    iVar4 = iVar3 + uVar8;
    if (uVar11 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar11 = uVar11 << 8;
        uVar13 = uVar13 << 8 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar5 = (uVar11 >> 0xb) * *(iVar6 + -0x200 + iVar4 * 2);
    if (uVar13 < uVar5) {
        iVar6 = *(param_1 + 0xc) + 0x280;
        if ((*(param_1 + 0x2c) != 0) || (*(param_1 + 0x28) != 0)) {
            iVar3 = *(param_1 + 0x18);
            if (iVar3 == 0) {
                iVar3 = *(param_1 + 0x14);
            }
            iVar6 = iVar6 + ((*(*(param_1 + 0x10) + -1 + iVar3) >> (8 - *param_1 & 0x1f)) +
                            (((1 << (param_1[1] & 0x1f)) - 1U & *(param_1 + 0x28)) << (*param_1 & 0x1f))) * 0x600;
        }
        if (uVar8 < 7) {
            uVar8 = 1;
            do {
                uVar8 = uVar8 * 2;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar11 = (uVar5 >> 0xb) * *(uVar8 + iVar6);
                if (uVar13 < uVar11) {
                    uVar5 = uVar11;
                }
                else {
                    uVar5 = uVar5 - uVar11;
                    uVar13 = uVar13 - uVar11;
                    uVar8 = uVar8 + 1;
                }
            } while (uVar8 < 0x100);
        }
        else {
            if (*(param_1 + 0x18) < *(param_1 + 0x30)) {
                iVar3 = *(param_1 + 0x14);
            }
            else {
                iVar3 = 0;
            }
            uVar8 = 1;
            uVar11 = *((*(param_1 + 0x10) - *(param_1 + 0x30)) + *(param_1 + 0x18) + iVar3);
            uVar2 = 0x100;
            while( true ) {
                uVar11 = uVar11 * 2;
                uVar10 = uVar2 & uVar11;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar7 = (uVar5 >> 0xb) * *(iVar6 + (uVar2 + uVar8 + uVar10) * 2);
                if (uVar13 < uVar7) {
                    uVar8 = uVar8 * 2;
                    uVar10 = uVar10 ^ uVar2;
                    uVar5 = uVar7;
                }
                else {
                    uVar5 = uVar5 - uVar7;
                    uVar8 = uVar8 * 2 + 1;
                    uVar13 = uVar13 - uVar7;
                }
                if (0xff < uVar8) break;
                uVar2 = uVar10;
            }
        }
        uStack_18 = 1;
        goto code_r0x000034b8;
    }
    uVar11 = uVar11 - uVar5;
    uVar13 = uVar13 - uVar5;
    if (uVar11 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar11 = uVar11 * 0x100;
        uVar13 = uVar13 * 0x100 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar10 = (uVar11 >> 0xb) * *(iVar6 + 0x20 + uVar8 * 2);
    iStack_14 = 0;
    if (uVar13 < uVar10) {
        uStack_c = 0;
        puVar9 = iVar6 + -0x600;
        uStack_18 = 2;
    }
    else {
        uVar11 = uVar11 - uVar10;
        uVar13 = uVar13 - uVar10;
        uStack_18 = 3;
        if (uVar11 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar11 = uVar11 * 0x100;
            uVar13 = uVar13 * 0x100 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar5 = (uVar11 >> 0xb) * *(iVar6 + 0x38 + uVar8 * 2);
        if (uVar13 < uVar5) {
            if (uVar5 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar5 = uVar5 * 0x100;
                uVar13 = uVar13 << 8 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar10 = (uVar5 >> 0xb) * *(iVar6 + -0xc00 + iVar4 * 2);
            if (uVar13 < uVar10) {
                if ((uVar10 < 0x1000000) && (puVar1 <= param_2)) {
                    return 0;
                }
                return 3;
            }
code_r0x00003278:
            uVar13 = uVar13 - uVar10;
            uVar10 = uVar5 - uVar10;
        }
        else {
            uVar11 = uVar11 - uVar5;
            uVar13 = uVar13 - uVar5;
            if (uVar11 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar11 = uVar11 * 0x100;
                uVar13 = uVar13 * 0x100 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar10 = (uVar11 >> 0xb) * *(iVar6 + 0x50 + uVar8 * 2);
            if (uVar10 <= uVar13) {
                uVar5 = uVar11 - uVar10;
                uVar13 = uVar13 - uVar10;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 * 0x100;
                    uVar13 = uVar13 * 0x100 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar10 = (uVar5 >> 0xb) * *(iVar6 + 0x68 + uVar8 * 2);
                if (uVar10 <= uVar13) goto code_r0x00003278;
            }
        }
        uStack_c = 0xc;
        puVar9 = iVar6 + -0xa00;
    }
    if (uVar10 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar10 = uVar10 << 8;
        uVar13 = uVar13 << 8 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar8 = (uVar10 >> 0xb) * *puVar9;
    if (uVar13 < uVar8) {
        uVar11 = 8;
        puVar9 = puVar9 + uVar2 * 0x10;
code_r0x0000332e:
        uVar5 = uVar8;
    }
    else {
        uVar10 = uVar10 - uVar8;
        uVar13 = uVar13 - uVar8;
        if (uVar10 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar10 = uVar10 * 0x100;
            uVar13 = uVar13 * 0x100 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar5 = (uVar10 >> 0xb) * puVar9[8];
        if (uVar5 <= uVar13) {
            uVar8 = uVar10 - uVar5;
            iStack_14 = 0x10;
            uVar13 = uVar13 - uVar5;
            uVar11 = 0x100;
            puVar9 = puVar9 + 0x100;
            goto code_r0x0000332e;
        }
        puVar9 = puVar9 + iVar3 + 8;
        uVar11 = 8;
        iStack_14 = 8;
    }
    uVar8 = 1;
    do {
        uVar2 = uVar8 * 2;
        if (uVar5 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar5 = uVar5 << 8;
            uVar13 = uVar13 << 8 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar8 = (uVar5 >> 0xb) * puVar9[uVar8];
        if (uVar13 < uVar8) {
            uVar5 = uVar8;
        }
        else {
            uVar5 = uVar5 - uVar8;
            uVar13 = uVar13 - uVar8;
            uVar2 = uVar2 + 1;
        }
        uVar8 = uVar2;
    } while (uVar2 < uVar11);
    uVar2 = uVar2 + (iStack_14 - uVar11);
    if (uStack_c < 4) {
        if (2 < uVar2) {
            uVar2 = 3;
        }
        uVar8 = 1;
        do {
            uVar8 = uVar8 * 2;
            if (uVar5 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar5 = uVar5 << 8;
                uVar13 = uVar13 << 8 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar11 = (uVar5 >> 0xb) * *(uVar8 + 0x80 + iVar6 + uVar2 * 0x80);
            if (uVar13 < uVar11) {
                uVar5 = uVar11;
            }
            else {
                uVar5 = uVar5 - uVar11;
                uVar13 = uVar13 - uVar11;
                uVar8 = uVar8 + 1;
            }
        } while (uVar8 < 0x40);
        uVar8 = uVar8 - 0x40;
        if (3 < uVar8) {
            iVar3 = (uVar8 >> 1) - 1;
            if (uVar8 < 0xe) {
                iVar6 = iVar6 + ((uVar8 & 1 | 2) << (iVar3 & 0x1f)) * 2 + -0xd00;
            }
            else {
                iVar3 = (uVar8 >> 1) - 5;
                do {
                    if (uVar5 < 0x1000000) {
                        if (puVar1 <= param_2) {
                            return 0;
                        }
                        uVar5 = uVar5 << 8;
                        uVar13 = uVar13 << 8 | *param_2;
                        param_2 = param_2 + 1;
                    }
                    uVar5 = uVar5 >> 1;
                    uVar13 = uVar13 - (0xffffffffU - (uVar13 - uVar5 >> 0x1f) & uVar5);
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                iVar3 = 4;
            }
            iVar4 = 1;
            while( true ) {
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar8 = (uVar5 >> 0xb) * *(iVar6 + iStack_10 * 2);
                if (uVar13 < uVar8) {
                    uVar5 = uVar8;
                    iVar12 = iVar4;
                }
                else {
                    uVar5 = uVar5 - uVar8;
                    uVar13 = uVar13 - uVar8;
                    iVar12 = iVar4 * 2;
                }
                iVar4 = iVar4 * 2;
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) break;
                iStack_10 = iStack_10 + iVar12;
            }
        }
    }
code_r0x000034b8:
    if (0xffffff < uVar5) {
        return uStack_18;
    }
    if (param_2 < puVar1) {
        return uStack_18;
    }
    return 0;
}


/* fcn.00002eb3 @ 0x2eb3 */

int __fastcall fcn.00002eb3(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    
    do {
        if (((*(param_1 + 0x2c) == 0) && (*(param_1 + 0x28) == 0)) && (0xbffffbff < *(param_1 + 0x24))) {
            return 1;
        }
        iVar1 = fcn.0000239a();
        if (iVar1 != 0) {
            return iVar1;
        }
        if ((*(param_1 + 0x2c) == 0) && (*(param_1 + 4) <= *(param_1 + 0x28))) {
            *(param_1 + 0x2c) = *(param_1 + 4);
        }
        fcn.00002e35();
    } while (((*(param_1 + 0x18) < param_2) && (*(param_1 + 0x1c) < param_3)) && (*(param_1 + 0x44) < 0x112));
    return 0;
}


/* fcn.00003774 @ 0x3774 */

uint __fastcall fcn.00003774(uint8_t *param_1,uint8_t *param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = *(param_2 + 1);
    if (uVar2 < 0x1000) {
        uVar2 = 0x1000;
    }
    uVar1 = *param_2;
    *(param_1 + 4) = uVar2;
    if (0xe0 < uVar1) {
        return 4;
    }
    *param_1 = uVar1 % 9;
    param_1[2] = (uVar1 / 9) / 5;
    param_1[1] = (uVar1 / 9) % 5;
    return 0;
}


/* fcn.000037cb @ 0x37cb */

uint __fastcall fcn.000037cb(int param_1,char *param_2,uint *param_3)

{
    int iVar1;
    int iVar2;
    
    iVar2 = (0x300 << (param_2[1] + *param_2 & 0x1fU)) + 0x7c0;
    if ((*(param_1 + 8) == 0) || (iVar2 != *(param_1 + 0x48))) {
        (*param_3[1])(param_3,*(param_1 + 8));
        *(param_1 + 8) = 0;
        iVar1 = (**param_3)(param_3,iVar2 * 2);
        *(param_1 + 8) = iVar1;
        if (iVar1 == 0) {
            return 2;
        }
        *(param_1 + 0x48) = iVar2;
        *(param_1 + 0xc) = iVar1 + 0xd00;
    }
    return 0;
}


/* fcn.000034d0 @ 0x34d0 */

uint __fastcall
fcn.000034d0(char *param_1,uint32_t param_2,int *param_3,uint32_t *param_4,uint param_5,uint *param_6)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int *piVar6;
    uint *puVar7;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    uVar5 = *param_4;
    *param_4 = 0;
    *param_6 = 0;
    piVar6 = param_3;
    if (0x112 < *(param_1 + 0x44)) {
        while ((uVar5 != 0 && (*(param_1 + 0x4c) < 5))) {
            param_1[*(param_1 + 0x4c) + 0x50] = *piVar6;
            *(param_1 + 0x4c) = *(param_1 + 0x4c) + 1;
            *param_4 = *param_4 + 1;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 1;
        }
        if ((*(param_1 + 0x4c) != 0) && (param_1[0x50] != '\0')) {
            return 1;
        }
        if (*(param_1 + 0x4c) < 5) {
            *param_6 = 3;
            return 0;
        }
        param_1[0x20] = -1;
        param_1[0x21] = -1;
        param_1[0x22] = -1;
        param_1[0x23] = -1;
        param_1[0x4c] = '\0';
        param_1[0x4d] = '\0';
        param_1[0x4e] = '\0';
        param_1[0x4f] = '\0';
        *(param_1 + 0x24) = CONCAT31(CONCAT21(CONCAT11(param_1[0x51],param_1[0x52]),param_1[0x53]),param_1[0x54]);
        if (0x113 < *(param_1 + 0x44)) {
            uVar4 = (0x300 << (param_1[1] + *param_1 & 0x1fU)) + 0x7c0;
            puVar7 = *(param_1 + 8);
            for (uVar3 = uVar4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = 0x4000400;
                puVar7 = puVar7 + 1;
            }
            for (uVar4 = (uVar4 & 1) != 0; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = 0x400;
                puVar7 = puVar7 + 2;
            }
            param_1[0x3c] = '\x01';
            param_1[0x3d] = '\0';
            param_1[0x3e] = '\0';
            param_1[0x3f] = '\0';
            param_1[0x38] = '\x01';
            param_1[0x39] = '\0';
            param_1[0x3a] = '\0';
            param_1[0x3b] = '\0';
            param_1[0x34] = '\x01';
            param_1[0x35] = '\0';
            param_1[0x36] = '\0';
            param_1[0x37] = '\0';
            param_1[0x30] = '\x01';
            param_1[0x31] = '\0';
            param_1[0x32] = '\0';
            param_1[0x33] = '\0';
            param_1[0x40] = '\0';
            param_1[0x41] = '\0';
            param_1[0x42] = '\0';
            param_1[0x43] = '\0';
        }
        param_1[0x44] = '\0';
        param_1[0x45] = '\0';
        param_1[0x46] = '\0';
        param_1[0x47] = '\0';
    }
    fcn.00002e35();
    do {
        while( true ) {
            if (*(param_1 + 0x44) == 0x112) {
                if (*(param_1 + 0x24) != 0) {
                    return 1;
                }
                *param_6 = 1;
                return 0;
            }
            bVar1 = false;
            uStack_8 = 0;
            if (param_2 <= *(param_1 + 0x18)) {
                if (*(param_1 + 0x44) != 0) {
                    *param_6 = 2;
                    return 1;
                }
                if (*(param_1 + 0x24) == 0) {
                    *param_6 = 4;
                    return 0;
                }
                bVar1 = true;
                uStack_8 = 1;
            }
            uVar4 = *(param_1 + 0x4c);
            if (uVar4 == 0) break;
            uVar3 = 0;
            uStack_4 = 0;
            if (uVar4 < 0x14) {
                do {
                    if (uVar5 <= uVar3) break;
                    param_1[uVar4 + 0x50] = *(uVar3 + piVar6);
                    uVar4 = uVar4 + 1;
                    uVar3 = uVar3 + 1;
                } while (uVar4 < 0x14);
                uStack_4 = uVar3;
            }
            *(param_1 + 0x4c) = uVar4;
            if ((uVar4 < 0x14) || (bVar1)) {
                iVar2 = fcn.00002f30(uVar4);
                if (iVar2 == 0) {
                    *param_4 = *param_4 + uStack_4;
                    goto code_r0x00003757;
                }
                if ((uStack_8 != 0) && (iVar2 != 2)) goto code_r0x00003733;
            }
            *(param_1 + 0x1c) = param_1 + 0x50;
            iVar2 = fcn.00002eb3();
            if (iVar2 != 0) {
                return 1;
            }
            uVar3 = (*(param_1 + 0x1c) - param_1) - 0x50;
            if ((uVar4 < uVar3) || (uVar4 = uVar4 - uVar3, uStack_8 < uVar4)) {
                return 0xb;
            }
            iVar2 = uStack_8 - uVar4;
            piVar6 = piVar6 + iVar2;
            uVar5 = uVar5 - iVar2;
            *param_3 = *param_3 + iVar2;
            param_1[0x4c] = '\0';
            param_1[0x4d] = '\0';
            param_1[0x4e] = '\0';
            param_1[0x4f] = '\0';
        }
        if ((uVar5 < 0x14) || (bVar1)) {
            iVar2 = fcn.00002f30(uVar5);
            if (iVar2 == 0) {
                if (uVar5 != 0) {
                    fcn.0000148e(uVar5);
                }
                *(param_1 + 0x4c) = uVar5;
                *param_4 = *param_4 + uVar5;
code_r0x00003757:
                *param_6 = 3;
                return 0;
            }
            if ((uStack_8 != 0) && (iVar2 != 2)) {
code_r0x00003733:
                *param_6 = 2;
                return 1;
            }
        }
        *(param_1 + 0x1c) = piVar6;
        iVar2 = fcn.00002eb3();
        if (iVar2 != 0) {
            return 1;
        }
        iVar2 = *(param_1 + 0x1c) - piVar6;
        piVar6 = *(param_1 + 0x1c);
        *param_3 = *param_3 + iVar2;
        uVar5 = uVar5 - iVar2;
    } while( true );
}


