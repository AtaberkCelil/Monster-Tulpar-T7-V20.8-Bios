// decompiled by r2ghidra: 2151_DxeIpl.te
// functions: 59

/* entry0 @ 0x2ad */

void __cdecl entry0(int32_t arg_8h)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000011d6();
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x74))();
    if (iVar1 != 0) {
        iVar1 = fcn.0000137e(arg_8h,&var_8h);
        if (-1 < iVar1) {
            fcn.00000309(0,0,0);
            fcn.00001359();
        }
    }
    return;
}


/* fcn.000011d6 @ 0x11d6 */

int32_t fcn.000011d6(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000137e @ 0x137e */

void __cdecl fcn.0000137e(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001359 @ 0x1359 */

void __fastcall fcn.00001359(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000309 @ 0x309 */

void __fastcall fcn.00000309(int param_1)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    uint *puVar4;
    int iVar5;
    ushort unaff_SI;
    ushort uStack_e;
    ushort uStack_c;
    
    iVar3 = fcn.00001637();
    if (-1 < iVar3) {
        iVar3 = *(param_1 + 4);
        iVar5 = *(param_1 + 8);
        uStack_c = unaff_SI;
        if (iVar3 != 0) {
            puVar4 = fcn.00001600();
            iVar5 = iVar3 * 0x10 + iVar5;
            do {
                iVar5 = iVar5 + -0x10;
                *puVar4 = 0x80000010;
                puVar4[2] = 0xffb02958;
                puVar4[1] = iVar5;
                fcn.00001359();
                puVar4 = puVar4 + 3;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
    }
    uVar1 = InterruptDescriptorTableRegister();
    uStack_e = uVar1 >> 0x10;
    piVar2 = *(CONCAT22(uStack_c,uStack_e) + -4);
    (**(*piVar2 + 0x18))(piVar2,0xffb02960);
    return;
}


/* fcn.00001637 @ 0x1637 */

uint __fastcall fcn.00001637(uint *param_1)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    int *piVar5;
    
    fcn.00001159();
    iVar2 = fcn.00001184();
    do {
        if (iVar2 == 0) {
            piVar3 = fcn.000012bb();
            if (piVar3 == NULL) {
                *param_1 = 0;
                uVar4 = 0x80000009;
            }
            else {
                piVar3[1] = 0;
                piVar5 = piVar3 + 5;
                *piVar3 = 0x49484550;
code_r0x000016b5:
                piVar3[2] = piVar5;
                piVar3[3] = piVar5 + 0x40;
                piVar3[4] = piVar5 + 0x50;
code_r0x000016c6:
                uVar4 = 0;
                *param_1 = piVar3;
            }
            return uVar4;
        }
        cVar1 = fcn.0000150c();
        if ((cVar1 != '\0') && (piVar3 = iVar2 + 0x18, *piVar3 == 0x49484550)) {
            piVar5 = iVar2 + 0x2c;
            if (*(iVar2 + 0x20) != piVar5) goto code_r0x000016b5;
            goto code_r0x000016c6;
        }
        iVar2 = fcn.00001184();
    } while( true );
}


/* fcn.00001600 @ 0x1600 */

int32_t __fastcall fcn.00001600(uint param_1)

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


/* fcn.000016d2 @ 0x16d2 */

int __cdecl fcn.000016d2(int32_t arg_8h,int32_t arg_ch)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iStack_10;
    
    iVar2 = fcn.00001637();
    if (-1 < iVar2) {
        uVar3 = 0;
        if (*(iStack_10 + 4) != 0) {
            do {
                cVar1 = fcn.0000150c();
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


/* fcn.00001555 @ 0x1555 */

int32_t __fastcall fcn.00001555(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.00001426(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.0000175b @ 0x175b */

int __cdecl fcn.0000175b(int32_t arg_8h,int32_t arg_ch)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iStack_10;
    
    iVar2 = fcn.00001637();
    if (-1 < iVar2) {
        uVar3 = 0;
        if (*(iStack_10 + 4) != 0) {
            do {
                cVar1 = fcn.0000150c();
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


/* fcn.0000202a @ 0x202a */

uint32_t __fastcall fcn.0000202a(int *param_1,int param_2,int *param_3)

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
        fcn.000017e4();
        fcn.00001f8b();
        uVar3 = -(param_3[10] != 0) & 0x80000002;
    }
    return uVar3;
}


/* fcn.000014dd @ 0x14dd */

int __fastcall fcn.000014dd(int param_1,int param_2,uint param_3)

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


/* fcn.00001159 @ 0x1159 */

int32_t fcn.00001159(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000150c @ 0x150c */

uint32_t __fastcall fcn.0000150c(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001184 @ 0x1184 */

int16_t * __fastcall fcn.00001184(int16_t param_1,int16_t *param_2)

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


/* fcn.0000130b @ 0x130b */

void fcn.0000130b(uint param_1,uint param_2,uint param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = fcn.00001201();
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


/* fcn.00001201 @ 0x1201 */

int32_t __fastcall fcn.00001201(uint param_1,uint param_2)

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


/* fcn.00001480 @ 0x1480 */

uint32_t __fastcall fcn.00001480(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = param_1 & 0xff;
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),param_1,param_2,0,0xffb028a8,0);
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.000011a7 @ 0x11a7 */

int fcn.000011a7(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00001184();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000150c();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000013d2 @ 0x13d2 */

void __fastcall fcn.000013d2(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x38))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.0000036b @ 0x36b */

uint32_t __fastcall fcn.0000036b(int param_1,uint32_t param_2)

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
                    if (0xe < *(param_1 + in_EAX * 8)) goto code_r0x00000372;
                    in_EAX = in_EAX + 1;
                } while (in_EAX < uVar1 - 1);
            }
            return CONCAT31(in_EAX >> 8,1);
        }
    }
code_r0x00000372:
    return in_EAX & 0xffffff00;
}


/* fcn.000009f1 @ 0x9f1 */

int __fastcall fcn.000009f1(int param_1,uint32_t param_2)

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
    piVar1 = fcn.00001159();
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
            goto code_r0x00000a5a;
        }
    }
    uVar7 = uVar7 >> 1;
code_r0x00000a5a:
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


/* fcn.000012e2 @ 0x12e2 */

void fcn.000012e2(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000012bb();
    if (iVar1 == 0) {
        return;
    }
    if (param_1 != 0) {
        fcn.000014dd(param_1);
    }
    return;
}


/* fcn.000012bb @ 0x12bb */

int fcn.000012bb(void)

{
    int iVar1;
    
    iVar1 = fcn.00001201();
    if (iVar1 != 0) {
        fcn.000014f3();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.000014f3 @ 0x14f3 */

uint * __fastcall fcn.000014f3(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000005b8 @ 0x5b8 */

int __fastcall fcn.000005b8(int32_t param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = fcn.0000137e(param_1,&var_4h);
    if (iVar1 < 0) {
        fcn.00001480();
    }
    else {
        iVar1 = (**var_4h)(var_4h);
    }
    return iVar1;
}


/* fcn.000013ac @ 0x13ac */

void fcn.000013ac(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x2c))(*(stack0xfffffff2 + -4),0);
    return;
}


/* fcn.000005fb @ 0x5fb */

int __fastcall fcn.000005fb(uint param_1)

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
    iVar2 = fcn.0000137e(param_1,&var_ch);
    if (iVar2 < 0) {
        fcn.00001480();
    }
    else {
        var_8h = &var_18h;
        InterruptDescriptorTableRegister();
        iVar2 = (**var_ch)(*(stack0xffffffe6 + -4),var_ch);
    }
    if (-1 < iVar2) {
        fcn.00001159();
        iVar2 = fcn.000011a7();
        if (((iVar2 != 0) && (*(iVar2 + 0x20) == '\0')) && (*(iVar2 + 0x18) != 0 || *(iVar2 + 0x1c) != 0)) {
            iVar2 = fcn.000011d6();
            if (iVar2 != 0x20) {
                return 0;
            }
            while( true ) {
                iVar2 = fcn.000013d2();
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


/* fcn.000006db @ 0x6db */

void __fastcall fcn.000006db(int param_1)

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
    
    fcn.00001159();
    while (puVar2 = fcn.000011a7(), puVar2 != NULL) {
        *puVar2 = 0xfffe;
    }
    iVar3 = fcn.0000137e(noname_0,&puStack_88);
    if (-1 < iVar3) {
        iStack_8c = 0x80;
        uVar5 = 0xffb02988;
        if (param_1 != 5) {
            uVar5 = 0xffb0292c;
        }
        iVar3 = (**puStack_88)(puStack_88,uVar5,0xffb028c8,0,&iStack_8c,aiStack_84);
        if (iVar3 == -0x7ffffff2) {
            iVar3 = (**puStack_88)(puStack_88,uVar5,0xffb027e8,0,&iStack_8c,aiStack_84);
        }
        if (-1 < iVar3) {
            cVar1 = fcn.0000036b();
            if ((cVar1 == '\0') || (cVar1 = fcn.000009f1(), cVar1 == '\0')) {
                iVar3 = -0x7ffffffd;
            }
            if (-1 < iVar3) goto code_r0x00000812;
        }
    }
    iVar4 = 0;
    piVar7 = aiStack_84;
    iVar3 = 8;
    iStack_8c = 0;
    piVar6 = 0xffb02a08;
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
    cVar1 = fcn.000009f1();
    if (cVar1 == '\0') {
        iStack_8c = 0x30;
    }
code_r0x00000812:
    fcn.000012e2(iStack_8c);
    fcn.000012e2(0x10);
    return;
}


/* fcn.000013fb @ 0x13fb */

void __cdecl fcn.000013fb(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x3c))(*(stack0xfffffff2 + -4),5);
    return;
}


/* fcn.0000123b @ 0x123b */

void __cdecl
fcn.0000123b(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    int iVar1;
    
    iVar1 = fcn.00001201();
    if (iVar1 != 0) {
        *(iVar1 + 8) = *0xffb02828;
        *(iVar1 + 0xc) = *0xffb0282c;
        *(iVar1 + 0x10) = *0xffb02830;
        *(iVar1 + 0x14) = *0xffb02834;
        *(iVar1 + 0x18) = arg_8h;
        *(iVar1 + 0x1c) = arg_ch;
        *(iVar1 + 0x20) = arg_10h;
        *(iVar1 + 0x24) = arg_14h;
        *(iVar1 + 0x28) = 3;
        fcn.00000170(iVar1 + 0x2c,4);
        fcn.000014f3();
        *(iVar1 + 0x40) = arg_18h;
        *(iVar1 + 0x44) = arg_1ch;
    }
    return;
}


/* fcn.00000aa3 @ 0xaa3 */

void __cdecl fcn.00000aa3(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uint extraout_ECX;
    uint32_t in_CR0;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    fcn.00001426(&var_18h);
    iVar1 = var_18h + 0xfffe0;
    var_ch = var_14h + (0xfff0001f < var_18h);
    GlobalDescriptorTableRegister(*0xffb02a48);
    var_ch = fcn.00000e7f();
    fcn.00001359();
    var_4h = in_CR0 & 0x7fffffff;
    fcn.00000558(var_18h,var_14h,extraout_ECX,extraout_ECX);
    fcn.00001480();
    fcn.000000a0(0x38,arg_8h,arg_ch,arg_10h,0,0,0,(-iVar1 & 0xfU) + iVar1,0);
    return;
}


/* fcn.00001426 @ 0x1426 */

void __cdecl fcn.00001426(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00000e7f @ 0xe7f */

//WARNING: Removing unreachable block (ram,0x00000ec8)

uint32_t * fcn.00000e7f(void)

{
    uint64_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
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
    
    fcn.00001159();
    iVar3 = fcn.00001184();
    if (iVar3 == 0) {
        fcn.00001122(0,0,0);
        var_2ch._0_1_ = 0x24;
    }
    else {
        var_2ch._0_1_ = *(iVar3 + 8);
    }
    if (0x30 < var_2ch) {
        var_2ch._0_1_ = 0x30;
    }
    if ((*0xffb02a74 == NULL) || (puVar4 = (**0xffb02a74)(var_2ch,0), puVar4 == NULL)) {
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
        puVar4 = fcn.00000be7();
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
                    fcn.00001530();
                    uVar7 = uVar7 + 1;
                    puVar11 = puVar11 + 2;
                    puVar8 = puVar12;
                }
                fcn.00001530();
                var_2ch = var_2ch + -1;
                puVar11 = puVar8;
            } while (var_2ch != 0);
        }
        fcn.00000dbc();
        cVar2 = fcn.00000b4a();
        if (cVar2 != '\0') {
            uVar1 = rdmsr(0xc0000080);
            wrmsr(0xc0000080,uVar1 | 0x800);
        }
    }
    return puVar4;
}


/* fcn.00000558 @ 0x558 */

void fcn.00000558(uint param_1,uint param_2)

{
    char cVar1;
    int iVar2;
    
    fcn.00001159();
    do {
        iVar2 = fcn.00001184();
        if (iVar2 == 0) {
            return;
        }
        cVar1 = fcn.0000150c();
    } while (cVar1 == '\0');
    fcn.0000130b(*(iVar2 + 0x18),*(iVar2 + 0x1c),*(iVar2 + 0x20),*(iVar2 + 0x24));
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
    
    //[00] -r-x section size 8263 named .text
    uVar1 = rdmsr(0xc0000080);
    wrmsr(0xc0000080,uVar1 | 0x100);
    return CONCAT44(uVar1 >> 0x20,in_CR0) | 0x80000000;
}


/* fcn.0000110c @ 0x110c */

//WARNING: Removing unreachable block (ram,0x0000111e)

void fcn.0000110c(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.00001122 @ 0x1122 */

int __cdecl fcn.00001122(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    uint uVar4;
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
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar4;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar3;
    }
    return in_ECX;
}


/* fcn.00001577 @ 0x1577 */

uint32_t __fastcall fcn.00001577(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iStack_8;
    int32_t iStack_4;
    
    if (param_2 != 0) {
        iVar1 = fcn.00001426(&iStack_8);
        if (-1 < iVar1) {
            uVar2 = iStack_8 + 0x1fffffU & 0xffe00000;
            iVar1 = ((uVar2 - iStack_8 & 0xfff) != 0) + (uVar2 - iStack_8 >> 0xc);
            if (iVar1 != 0) {
                fcn.00001451(iStack_8,iStack_4);
            }
            iStack_4 = 0;
            iStack_8 = param_2 * 0x1000 + uVar2;
            if ((param_2 + 0x200) - iVar1 != param_2) {
                fcn.00001451(iStack_8,0);
            }
            return uVar2;
        }
    }
    return 0;
}


/* fcn.00000b99 @ 0xb99 */

uint __fastcall fcn.00000b99(uint32_t param_1)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    uint *puVar4;
    
    puVar4 = fcn.00001577(param_1);
    puVar3 = *0xffb02a78;
    if (puVar4 == NULL) {
        return 0;
    }
    if (*0xffb02a78 == NULL) {
        *0xffb02a78 = puVar4;
        *puVar4 = puVar4;
    }
    else {
        uVar2 = **0xffb02a78;
        *0xffb02a78 = puVar4;
        *puVar4 = uVar2;
        *puVar3 = puVar4;
    }
    iVar1 = (param_1 & 0xfffffe00) + 0x1ff;
    puVar4[1] = 0x1000;
    puVar4[2] = iVar1;
    return CONCAT31(iVar1 >> 8,1);
}


/* fcn.00000be7 @ 0xbe7 */

int __fastcall fcn.00000be7(uint32_t param_1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    
    if ((param_1 == 0) ||
       (((*0xffb02a78 == 0 || (*(*0xffb02a78 + 8) < param_1)) && (cVar2 = fcn.00000b99(), cVar2 == '\0')))) {
        iVar3 = 0;
    }
    else {
        iVar1 = *0xffb02a78;
        iVar3 = *(*0xffb02a78 + 4);
        *(*0xffb02a78 + 8) = *(*0xffb02a78 + 8) - param_1;
        *(iVar1 + 4) = param_1 * 0x1000 + iVar3;
        iVar3 = iVar3 + iVar1;
    }
    return iVar3;
}


/* fcn.00000c29 @ 0xc29 */

//WARNING: Removing unreachable block (ram,0x00000d7d)

void __cdecl fcn.00000c29(int32_t arg_8h,int32_t arg_ch)

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
            in_ECX = fcn.00000be7();
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


/* fcn.00001530 @ 0x1530 */

uint __fastcall fcn.00001530(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000170(param_1,param_2);
    return uVar1;
}


/* fcn.00000dbc @ 0xdbc */

void fcn.00000dbc(void)

{
    int *piVar1;
    int iVar2;
    int *arg_8h;
    int *piVar3;
    int arg_ch;
    uint32_t uVar4;
    bool bVar5;
    
    piVar1 = *0xffb02a78;
    if (*0xffb02a78 != NULL) {
        piVar3 = *0xffb02a78;
        do {
            uVar4 = piVar3[2] * 0x1000 + piVar3[1];
            iVar2 = 0;
            if (uVar4 != 0) {
                arg_ch = 0;
                arg_8h = piVar3;
                do {
                    do {
                        fcn.00000c29(arg_8h,arg_ch);
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


/* fcn.00000b4a @ 0xb4a */

uint fcn.00000b4a(void)

{
    int32_t var_8h;
    uint32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    fcn.00001122(0,0,0);
    if ((0x80000000 < var_4h) && (fcn.00001122(0,0,&var_8h), (var_8h & 0x100000U) != 0)) {
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


/* fcn.00001451 @ 0x1451 */

void __cdecl fcn.00001451(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.000017e4 @ 0x17e4 */

void __fastcall fcn.000017e4(int *param_1,uint16_t param_2)

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


/* fcn.0000189b @ 0x189b */

uint32_t __fastcall fcn.0000189b(int param_1,char param_2)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0x14);
    fcn.000017e4();
    return uVar1 >> (0x20U - param_2 & 0x1f);
}


/* fcn.00001541 @ 0x1541 */

uint __fastcall fcn.00001541(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000190(param_1,param_2,0);
    return uVar1;
}


/* fcn.000018b3 @ 0x18b3 */

uint __fastcall fcn.000018b3(int param_1,uint16_t param_2,int param_3,uint32_t param_4,int param_5)

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
        if (uVar16 == 0) goto code_r0x00001998;
        do {
            uVar15 = uVar4;
            puVar13 = &uStack_24 + uVar15 * 2;
            *puVar13 = *puVar13 >> (uVar8 & 0x1f);
            cVar3 = uVar4;
            uVar4 = uVar4 + 1;
            aiStack_48[uVar15] = 1 << (param_4 - cVar3 & 0x1fU);
        } while (uVar4 <= uVar16);
        for (; uVar4 < 0x11; uVar4 = uVar4 + 1) {
code_r0x00001998:
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
                        if ((uVar6 <= uVar2) || (1 << (uVar9 & 0x1f) < uVar6)) goto code_r0x00001ba4;
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
code_r0x00001ba4:
        uVar7 = 0xffff;
    }
    return uVar7;
}


/* fcn.00001c1d @ 0x1c1d */

uint __fastcall fcn.00001c1d(int param_1,uint16_t param_2,uint param_3,uint16_t param_4)

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
    
    uVar1 = fcn.0000189b();
    if (uVar1 == 0) {
        uVar2 = fcn.0000189b();
        fcn.00000270(param_1 + 0x3234,0x100,uVar2);
        fcn.00001541();
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
                        goto code_r0x00001cb5;
                    }
code_r0x00001cbc:
                    uVar6 = uVar8;
                }
                else {
code_r0x00001cb5:
                    uVar6 = uVar8;
                    if (6 < uVar7) goto code_r0x00001cbc;
                }
                fcn.000017e4();
                uVar8 = uVar9;
                uVar9 = uVar9 + 1;
                *(uVar8 + 0x1214 + param_1) = uVar6;
                if (uVar9 == param_4) {
                    iVar3 = fcn.0000189b();
                    for (; (iVar3 = iVar3 + -1, -1 < iVar3 && (uVar9 < 0x1f)); uVar9 = uVar9 + 1) {
                        *(uVar9 + 0x1214 + param_1) = 0;
                    }
                }
            } while (uVar9 < uVar1);
        }
        for (; (uVar9 < param_2 && (uVar9 < 0x1f)); uVar9 = uVar9 + 1) {
            *(uVar9 + 0x1214 + param_1) = 0;
        }
        uVar4 = fcn.000018b3(param_1 + 0x1214,8,param_1 + 0x3234);
    }
    return uVar4;
}


/* fcn.00001d5a @ 0x1d5a */

void __fastcall fcn.00001d5a(int param_1)

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
    
    uVar1 = fcn.0000189b();
    if (uVar1 == 0) {
        uVar2 = fcn.0000189b();
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
                fcn.000017e4();
                uVar4 = 2;
                uVar5 = uVar6;
                if (uVar5 < 3) {
                    if (uVar5 == 0) {
                        uVar6 = 1;
                    }
                    else {
                        if (uVar5 == 1) {
                            iVar7 = fcn.0000189b();
                            uVar6 = iVar7 + 3;
                            uVar4 = extraout_ECX_00;
                        }
                        else {
                            if (uVar5 != 2) goto code_r0x00001e4f;
                            iVar7 = fcn.0000189b();
                            uVar6 = iVar7 + 0x14;
                            uVar4 = extraout_ECX_01;
                        }
                        uVar6 = uVar6 & 0xffff;
                    }
code_r0x00001e4f:
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
        fcn.00001541(uVar4);
        fcn.000018b3(param_1 + 0x1016,0xc,param_1 + 0x1234);
    }
    return;
}


/* fcn.00001ed4 @ 0x1ed4 */

uint16_t __fastcall fcn.00001ed4(int param_1)

{
    ushort uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    if (*(param_1 + 0x1c) == 0) {
        uVar1 = fcn.0000189b();
        *(param_1 + 0x1c) = uVar1;
        iVar2 = fcn.00001c1d(5,3);
        *(param_1 + 0x28) = iVar2;
        if (iVar2 == 0) {
            fcn.00001d5a();
            iVar2 = fcn.00001c1d(*(param_1 + 0x3434),0xffff);
            *(param_1 + 0x28) = iVar2;
            if (iVar2 == 0) goto code_r0x00001f33;
        }
        uVar4 = 0;
    }
    else {
code_r0x00001f33:
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
        fcn.000017e4();
    }
    return uVar4;
}


/* fcn.00001bab @ 0x1bab */

uint32_t __fastcall fcn.00001bab(int param_1)

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
    fcn.000017e4();
    if (1 < uVar3) {
        iVar1 = fcn.0000189b();
        uVar2 = iVar1 + (1 << (uVar3 - 1U & 0x1f));
    }
    return uVar2;
}


/* fcn.00001f8b @ 0x1f8b */

void __fastcall fcn.00001f8b(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int16_t iVar4;
    
    uVar1 = fcn.00001ed4();
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
            iVar2 = fcn.00001bab();
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
        uVar1 = fcn.00001ed4();
        iVar4 = *(param_1 + 0x28);
    } while( true );
}


