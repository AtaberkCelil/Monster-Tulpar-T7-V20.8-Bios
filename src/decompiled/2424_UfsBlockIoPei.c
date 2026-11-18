// decompiled by r2ghidra: 2424_UfsBlockIoPei.te
// functions: 58

/* fcn.00000c93 @ 0xc93 */

uint fcn.00000c93(void)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    uint noname_0;
    uint32_t uVar4;
    char cVar5;
    char *pcVar6;
    uint noname_0_00;
    uint **arg_ch;
    uchar uStack_ad;
    uint uStack_ac;
    uchar *puStack_a8;
    uint *puStack_a4;
    uchar auStack_a0 [2];
    int iStack_9e;
    uchar auStack_98 [16];
    char acStack_88 [132];
    
    out(0x80,0xf022);
    puStack_a8 = auStack_a0;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(iStack_9e + -4) + 0x74))();
    if (iVar2 < 0) {
        arg_ch = &puStack_a4;
        iVar2 = fcn.00002cd5(noname_0_00,arg_ch);
        if (iVar2 < 0) {
            return 0x80000007;
        }
        fcn.00002cd5(arg_ch,-0x2b4674);
        uStack_ac = 0;
        cVar5 = '\0';
        iVar2 = (**puStack_a4)(puStack_a4,0,&uStack_ac);
        while ((-1 < iVar2 && (iVar2 = fcn.00002c94(), iVar2 != 0))) {
            *(iVar2 + 0x38) = iVar2 + 0xc;
            *(iVar2 + 0x44) = iVar2 + 0x18;
            *(iVar2 + 0xd4) = uStack_ac;
            iVar3 = fcn.00002ad0();
            if (iVar3 < 0) {
                return 0;
            }
            iVar3 = fcn.0000289c();
            if ((-1 < iVar3) && (iVar3 = fcn.00001b61(), -1 < iVar3)) {
                uStack_ad = 1;
                iVar3 = fcn.000019ec(noname_0,&uStack_ad);
                if ((-1 < iVar3) && (iVar3 = fcn.0000195e(auStack_98), -1 < iVar3)) {
                    uVar4 = 0;
                    pcVar6 = acStack_88;
                    do {
                        if (*pcVar6 != '\0') {
                            uVar1 = *(iVar2 + 0x100);
                            *(iVar2 + 0x100) = ((uVar1 & 0xfff | 1 << (uVar4 & 0x1f)) ^ uVar1) & 0xfff ^ uVar1;
                        }
                        uVar4 = uVar4 + 1;
                        pcVar6 = pcVar6 + 0x10;
                    } while (uVar4 < 8);
                    fcn.00002cb0();
                    puStack_a8 = auStack_a0;
                    InterruptDescriptorTableRegister();
                    (**(**(iStack_9e + -4) + 0x24))(*(iStack_9e + -4),iVar2 + 200);
                }
            }
            cVar5 = cVar5 + '\x01';
            iVar2 = (**puStack_a4)(puStack_a4,cVar5,&uStack_ac);
        }
    }
    return 0;
}


/* entry0 @ 0x1d9 */

uint entry0(uint param_1)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    uint noname_0;
    uint32_t uVar4;
    char cVar5;
    char *pcVar6;
    uint **arg_ch;
    uchar uStack_ad;
    uint uStack_ac;
    uchar *puStack_a8;
    uint *puStack_a4;
    uchar auStack_a0 [2];
    int iStack_9e;
    uchar auStack_98 [16];
    char acStack_88 [132];
    
    out(0x80,0xf022);
    puStack_a8 = auStack_a0;
    InterruptDescriptorTableRegister();
    iVar2 = (**(**(iStack_9e + -4) + 0x74))();
    if (iVar2 < 0) {
        arg_ch = &puStack_a4;
        iVar2 = fcn.00002cd5(param_1,arg_ch);
        if (iVar2 < 0) {
            return 0x80000007;
        }
        fcn.00002cd5(arg_ch,-0x2b4674);
        uStack_ac = 0;
        cVar5 = '\0';
        iVar2 = (**puStack_a4)(puStack_a4,0,&uStack_ac);
        while ((-1 < iVar2 && (iVar2 = fcn.00002c94(), iVar2 != 0))) {
            *(iVar2 + 0x38) = iVar2 + 0xc;
            *(iVar2 + 0x44) = iVar2 + 0x18;
            *(iVar2 + 0xd4) = uStack_ac;
            iVar3 = fcn.00002ad0();
            if (iVar3 < 0) {
                return 0;
            }
            iVar3 = fcn.0000289c();
            if ((-1 < iVar3) && (iVar3 = fcn.00001b61(), -1 < iVar3)) {
                uStack_ad = 1;
                iVar3 = fcn.000019ec(noname_0,&uStack_ad);
                if ((-1 < iVar3) && (iVar3 = fcn.0000195e(auStack_98), -1 < iVar3)) {
                    uVar4 = 0;
                    pcVar6 = acStack_88;
                    do {
                        if (*pcVar6 != '\0') {
                            uVar1 = *(iVar2 + 0x100);
                            *(iVar2 + 0x100) = ((uVar1 & 0xfff | 1 << (uVar4 & 0x1f)) ^ uVar1) & 0xfff ^ uVar1;
                        }
                        uVar4 = uVar4 + 1;
                        pcVar6 = pcVar6 + 0x10;
                    } while (uVar4 < 8);
                    fcn.00002cb0();
                    puStack_a8 = auStack_a0;
                    InterruptDescriptorTableRegister();
                    (**(**(iStack_9e + -4) + 0x24))(*(iStack_9e + -4),iVar2 + 200);
                }
            }
            cVar5 = cVar5 + '\x01';
            iVar2 = (**puStack_a4)(puStack_a4,cVar5,&uStack_ac);
        }
    }
    return 0;
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


/* fcn.00001c69 @ 0x1c69 */

//WARNING: Removing unreachable block (ram,0x00001cc3)

int32_t __cdecl fcn.00001c69(int32_t arg_8h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int32_t iVar3;
    uint32_t uVar4;
    int in_ECX;
    uint32_t uVar5;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        var_10h = -0x7ffffffe;
    }
    else {
        uVar4 = *(in_ECX + 0xe0);
        var_14h = 0;
        var_ch = uVar4;
        var_10h = fcn.000012ab(arg_8h,uVar4,&var_14h);
        if (-1 < var_10h) {
            uVar4 = *(uVar4 + 0x10) & 0xffffff80;
            uVar1 = *(var_ch + 0x1c);
            uVar2 = *(var_ch + 0x1e);
            fcn.000017c1();
            var_10h = fcn.00000f9a(0,*arg_8h,*(arg_8h + 4));
            if (-1 < var_10h) {
                uVar5 = *(var_ch + 0x1a);
                var_8h = *(uVar4 + 0x20 + uVar5 * 4);
                fcn.0000100f();
                if ((*(arg_8h + 0x22) != 0) && (*(arg_8h + 0x10) != 0)) {
                    if (*(arg_8h + 0x22) < var_8h) {
                        *(arg_8h + 0x22) = 0;
                    }
                    else {
                        if ((var_8h & 0xffffU) != 0) {
                            fcn.00002d56(var_8h & 0xffffU);
                        }
                        *(arg_8h + 0x22) = var_8h;
                    }
                }
                if ((*(uVar4 + 6 + uVar5 * 4) == '\0') && (*(var_ch + 8) == '\0')) {
                    if (*(arg_8h + 0x21) == '\x02') {
                        if ((*(uVar4 + 1 + uVar5 * 4) & 0x20) != 0) {
                            var_8h = *(uVar4 + 0xc + uVar5 * 4);
                            fcn.0000100f();
                            *(arg_8h + 0x18) = *(arg_8h + 0x18) - var_8h;
                        }
                    }
                    else if ((*(arg_8h + 0x21) == '\x01') && ((*(uVar4 + 1 + uVar5 * 4) & 0x20) != 0)) {
                        var_8h = *(uVar4 + 0xc + uVar5 * 4);
                        fcn.0000100f();
                        *(arg_8h + 0x1c) = *(arg_8h + 0x1c) - var_8h;
                    }
                }
                else {
                    var_10h = -0x7ffffff9;
                }
            }
            iVar3 = var_14h;
            if ((var_14h != 0) && (*0xffd4b98c != 0)) {
                (**(*0xffd4b98c + 8))(*0xffd4b98c,var_14h,0,0);
                (**(*0xffd4b98c + 0x10))(*0xffd4b98c,iVar3);
            }
            fcn.000017e0();
            fcn.00002bc4((uVar2 + uVar1 * 4) * 4);
        }
    }
    return var_10h;
}


/* fcn.000001e2 @ 0x1e2 */

void __cdecl fcn.000001e2(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_28h;
    int32_t var_24h;
    int16_t var_18h;
    int8_t var_16h;
    int32_t var_10h;
    int var_ch;
    int32_t var_8h;
    
    fcn.000000e0(&var_38h,0x28);
    fcn.000000e0(&var_8h,6);
    var_ch = 0;
    var_8h._0_1_ = 0;
    var_10h = 3;
    var_34h = 0;
    var_38h = 30000000;
    var_24h = &var_8h;
    var_28h = arg_8h;
    var_16h = *arg_ch;
    var_18h = 6;
    fcn.00001c69(&var_38h);
    if (*arg_ch != '\0') {
        *arg_ch = var_16h;
    }
    return;
}


/* fcn.000005ad @ 0x5ad */

uint __cdecl fcn.000005ad(int32_t arg_8h)

{
    uint8_t uVar1;
    int in_ECX;
    int in_EDX;
    
    uVar1 = *(in_EDX + 2) & 0xf;
    if ((uVar1 == 2) && (*(in_EDX + 0xc) == ':')) {
        *(in_ECX + 2) = 0;
    }
    else if (((uVar1 == 6) && ((*(in_EDX + 0xc) == '(' || (*(in_EDX + 0xc) == ')')))) ||
            (((uVar1 != 3 && (((uVar1 != 2 || (*(in_EDX + 0xc) != '\x06')) && (uVar1 != 4)))) &&
             (((uVar1 == 2 && (*(in_EDX + 0xc) == '\x04')) && (*(in_EDX + 0xd) == '\x01')))))) {
        *arg_8h = 1;
        return 0;
    }
    *arg_8h = 0;
    return 0x80000007;
}


/* fcn.00000266 @ 0x266 */

int fcn.00000266(uint param_1,uint *param_2,uint param_3,char *param_4)

{
    int iVar1;
    uchar auStack_38 [12];
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uint uStack_1c;
    uchar *puStack_18;
    uint uStack_14;
    ushort uStack_c;
    char cStack_a;
    
    fcn.000000e0(&uStack_2c,0x28);
    fcn.000000e0(auStack_38,10);
    auStack_38[0] = 0x25;
    uStack_28 = 0;
    uStack_2c = 30000000;
    uStack_1c = 0;
    puStack_18 = auStack_38;
    uStack_24 = param_1;
    uStack_14 = *param_2;
    cStack_a = *param_4;
    uStack_c = 0x20a;
    iVar1 = fcn.00001c69(&uStack_2c);
    if (*param_4 != '\0') {
        *param_4 = cStack_a;
    }
    if (-1 < iVar1) {
        *param_2 = uStack_14;
    }
    return iVar1;
}


/* fcn.0000031a @ 0x31a */

int fcn.0000031a(uint param_1,uint *param_2,uint param_3,char *param_4)

{
    int iVar1;
    ushort auStack_3c [6];
    uchar uStack_2f;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uint uStack_1c;
    ushort *puStack_18;
    uint uStack_14;
    ushort uStack_c;
    char cStack_a;
    
    fcn.000000e0(&uStack_2c,0x28);
    fcn.000000e0(auStack_3c,0x10);
    auStack_3c[0] = 0x109e;
    uStack_2f = 0x20;
    uStack_28 = 0;
    uStack_2c = 30000000;
    uStack_1c = 0;
    puStack_18 = auStack_3c;
    uStack_24 = param_1;
    uStack_14 = *param_2;
    cStack_a = *param_4;
    uStack_c = 0x210;
    iVar1 = fcn.00001c69(&uStack_2c);
    if (*param_4 != '\0') {
        *param_4 = cStack_a;
    }
    if (-1 < iVar1) {
        *param_2 = uStack_14;
    }
    return iVar1;
}


/* fcn.000003d5 @ 0x3d5 */

int fcn.000003d5(uint param_1,uint16_t param_2,uint param_3,uint *param_4,uint param_5,char *param_6)

{
    int iVar1;
    uint16_t uVar2;
    uchar auStack_38 [2];
    uint uStack_36;
    uint16_t uStack_31;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uint uStack_1c;
    uchar *puStack_18;
    uint uStack_14;
    ushort uStack_c;
    char cStack_a;
    
    fcn.000000e0(&uStack_2c,0x28);
    fcn.000000e0(auStack_38,10);
    uVar2 = param_1 >> 0x10;
    uStack_36 = CONCAT22(param_1 << 8 | param_1 >> 8,uVar2 << 8 | uVar2 >> 8);
    auStack_38[0] = 0x28;
    uStack_31 = param_2 << 8 | param_2 >> 8;
    uStack_28 = 0;
    uStack_2c = 30000000;
    uStack_1c = 0;
    puStack_18 = auStack_38;
    uStack_24 = param_3;
    uStack_14 = *param_4;
    cStack_a = *param_6;
    uStack_c = 0x20a;
    iVar1 = fcn.00001c69(&uStack_2c);
    if (*param_6 != '\0') {
        *param_6 = cStack_a;
    }
    if (-1 < iVar1) {
        *param_4 = uStack_14;
    }
    return iVar1;
}


/* fcn.000004b8 @ 0x4b8 */

int fcn.000004b8(uint32_t param_1,uint param_2,uint param_3,uint *param_4,uint param_5,char *param_6)

{
    int iVar1;
    uint16_t uVar2;
    uchar auStack_3c [2];
    uint uStack_3a;
    uint32_t uStack_36;
    uint uStack_32;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uint uStack_1c;
    uchar *puStack_18;
    uint uStack_14;
    ushort uStack_c;
    char cStack_a;
    
    fcn.000000e0(&uStack_2c,0x28);
    fcn.000000e0(auStack_3c,0x10);
    auStack_3c[0] = 0x88;
    uStack_3a = 0;
    uStack_36 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
    uVar2 = param_2 >> 0x10;
    uStack_32 = CONCAT22(param_2 << 8 | param_2 >> 8,uVar2 << 8 | uVar2 >> 8);
    uStack_28 = 0;
    uStack_2c = 30000000;
    puStack_18 = auStack_3c;
    uStack_1c = 0;
    uStack_24 = param_3;
    uStack_14 = *param_4;
    cStack_a = *param_6;
    uStack_c = 0x210;
    iVar1 = fcn.00001c69(&uStack_2c);
    if (*param_6 != '\0') {
        *param_6 = cStack_a;
    }
    if (-1 < iVar1) {
        *param_4 = uStack_14;
    }
    return iVar1;
}


/* fcn.0000061f @ 0x61f */

//WARNING: Removing unreachable block (ram,0x0000080e)
//WARNING: Removing unreachable block (ram,0x000007c1)
//WARNING: Removing unreachable block (ram,0x000007e8)
//WARNING: Removing unreachable block (ram,0x00000833)

uint __cdecl fcn.0000061f(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    unkbyte3 Var1;
    int32_t iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int extraout_ECX;
    int32_t iVar7;
    int32_t var_6ch;
    int8_t var_68h;
    int8_t var_67h;
    int8_t var_66h;
    int8_t var_65h;
    int8_t var_64h;
    int8_t var_63h;
    int8_t var_62h;
    int8_t var_61h;
    int32_t var_4ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2ch;
    uchar var_28h;
    uchar var_27h;
    uchar var_26h;
    int8_t var_25h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int8_t var_1h;
    
    iVar2 = arg_10h;
    iVar7 = arg_ch + -0xc;
    var_ch = 1;
    var_1h = 1;
    if ((arg_10h == 0) || (8 < arg_10h)) {
        return 0x80000002;
    }
    iVar5 = arg_10h + -1;
    if ((*(arg_ch + 0xf4) & 1 << (iVar5 & 0x1f) & 0xfff) == 0) {
        return 0x8000000f;
    }
    var_24h = iVar7;
    fcn.000000e0(&var_4ch,0x12);
    fcn.000000e0(&var_2ch,8);
    fcn.000000e0(&var_6ch,0x20);
    arg_ch = CONCAT13(0x12,arg_ch);
    do {
        iVar4 = &arg_ch + 3;
        iVar3 = fcn.000001e2(&var_4ch,iVar4);
        if (-1 < iVar3) break;
        if (arg_ch._3_1_ != '\0') {
            iVar4 = fcn.000005ad(&var_1h);
            if (iVar4 < 0) goto code_r0x00000879;
            var_ch = CONCAT31(iVar4 >> 8,var_1h);
            iVar4 = extraout_ECX;
        }
    } while (var_ch != '\0');
    var_ch = 8;
    arg_ch = arg_ch & 0xffffff;
    iVar4 = fcn.00000266(&var_2ch,&var_ch,iVar4,&arg_ch + 3);
    if (iVar4 < 0) {
code_r0x00000879:
        uVar6 = 0x80000007;
    }
    else {
        if ((((var_2ch == -1) && (var_2ch._1_1_ == -1)) && (var_2ch._2_1_ == -1)) && (var_2ch._3_1_ == -1)) {
            var_ch = 0x20;
            arg_ch = arg_ch & 0xffffff;
            iVar5 = fcn.0000031a(&var_6ch,&var_ch,0xff,&arg_ch + 3);
            if (iVar5 < 0) goto code_r0x00000879;
            arg_ch = (iVar2 + 4) * 0x10 + iVar7;
            *(arg_ch + 4) = 0;
            *arg_ch = CONCAT31(CONCAT21(CONCAT11(var_68h,var_67h),var_66h),var_65h);
            *arg_ch = *arg_ch;
            *(arg_ch + 4) =
                 *(arg_ch + 4) | CONCAT13(var_6ch,CONCAT12(var_6ch._1_1_,CONCAT11(var_6ch._2_1_,var_6ch._3_1_)));
            iVar5 = arg_10h + -1;
            Var1 = CONCAT21(CONCAT11(var_64h,var_63h),var_62h);
            iVar7 = var_24h;
        }
        else {
            arg_ch = (iVar2 + 4) * 0x10 + iVar7;
            *arg_ch = CONCAT31(CONCAT21(CONCAT11(var_2ch,var_2ch._1_1_),var_2ch._2_1_),var_2ch._3_1_);
            *(arg_ch + 4) = 0;
            Var1 = CONCAT21(CONCAT11(var_28h,var_27h),var_26h);
            var_61h = var_25h;
        }
        iVar5 = iVar5 * 0x10;
        *(iVar5 + 0x4c + iVar7) = CONCAT31(Var1,var_61h);
        *arg_14h = 6;
        *(arg_14h + 4) = *(iVar5 + 0x4a + iVar7);
        *(arg_14h + 8) = *arg_ch;
        *(arg_14h + 0xc) = *(iVar5 + 0x4c + iVar7);
        uVar6 = 0;
    }
    return uVar6;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 11658 named .text
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


/* fcn.00000923 @ 0x923 */

int __cdecl
fcn.00000923(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,uint32_t arg_1ch,
            uint32_t arg_20h)

{
    int iVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    bool bVar5;
    char cStack_36;
    char cStack_35;
    int iStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    int iStack_28;
    uint32_t uStack_24;
    int iStack_20;
    uchar auStack_1c [24];
    
    iVar4 = arg_ch + -0xc;
    cVar3 = '\x01';
    cStack_35 = '\x01';
    fcn.000000e0(auStack_1c,0x12);
    cStack_36 = '\x12';
    if (arg_20h != 0) {
        if (arg_1ch == 0) {
            return 0;
        }
        if ((arg_10h != 0) && (arg_10h < 9)) {
            iStack_34 = arg_10h + -1;
            if ((*(arg_ch + 0xf4) & 1 << (iStack_34 & 0x1f) & 0xfff) == 0) {
                return -0x7ffffff1;
            }
            iStack_28 = iStack_34 * 0x10;
            uStack_24 = *(iStack_28 + 0x4c + iVar4);
            if (uStack_24 < 0x10001) {
                uStack_30 = 0x10000 / uStack_24;
            }
            else {
                uStack_30 = 1;
            }
            arg_1ch = arg_1ch / uStack_24;
            do {
                iVar2 = fcn.000001e2(auStack_1c,&cStack_36);
                if (-1 < iVar2) break;
                if (cStack_36 != '\0') {
                    iVar2 = fcn.000005ad(&cStack_35);
                    if (iVar2 < 0) {
                        return -0x7ffffff9;
                    }
                    cVar3 = cStack_35;
                }
            } while (cVar3 != '\0');
            iVar1 = iStack_34;
            if (arg_1ch == 0) {
                return iVar2;
            }
            iStack_28 = arg_18h;
            uStack_2c = arg_14h;
            while( true ) {
                cStack_36 = '\0';
                if (uStack_30 < arg_1ch) {
                    iStack_34 = uStack_30 * uStack_24;
                    iVar2 = iVar1 + 5;
                    iStack_20 = iStack_34;
                    if ((*(arg_ch + -8 + iVar2 * 0x10) == 0) && (*(iVar4 + iVar2 * 0x10) != -1)) {
                        iVar2 = fcn.000003d5(uStack_2c,uStack_30,arg_20h,&iStack_34,uStack_30,&cStack_36);
                    }
                    else {
                        iVar2 = fcn.000004b8(uStack_2c,uStack_30,arg_20h,&iStack_34,uStack_30,&cStack_36);
                    }
                    arg_20h = arg_20h + iStack_20;
                    arg_1ch = arg_1ch - uStack_30;
                    bVar5 = CARRY4(uStack_2c,uStack_30);
                    uStack_2c = uStack_2c + uStack_30;
                    iStack_28 = iStack_28 + bVar5;
                }
                else {
                    iStack_34 = arg_1ch * uStack_24;
                    iVar2 = iVar1 + 5;
                    if ((*(arg_ch + -8 + iVar2 * 0x10) == 0) && (*(iVar4 + iVar2 * 0x10) != -1)) {
                        iVar2 = fcn.000003d5(uStack_2c,arg_1ch,arg_20h,&iStack_34,uStack_30,&cStack_36);
                    }
                    else {
                        iVar2 = fcn.000004b8(uStack_2c,arg_1ch,arg_20h,&iStack_34,uStack_30,&cStack_36);
                    }
                    arg_1ch = 0;
                }
                if (iVar2 < 0) break;
                if (arg_1ch == 0) {
                    return iVar2;
                }
            }
            return iVar2;
        }
    }
    return -0x7ffffffe;
}


/* fcn.000029e0 @ 0x29e0 */

void __fastcall fcn.000029e0(int param_1)

{
    if (param_1 != 0) {
        fcn.00000f5d(*(param_1 + 0x14));
    }
    return;
}


/* fcn.00000f5d @ 0xf5d */

uint __fastcall fcn.00000f5d(uint param_1,uint param_2,uint param_3)

{
    uint uVar1;
    
    if (*0xffd4b98c == 0) {
        uVar1 = 0;
    }
    else {
        (**(*0xffd4b98c + 8))(*0xffd4b98c,param_3,0,0);
        (**(*0xffd4b98c + 0x10))(*0xffd4b98c,param_3);
        uVar1 = (**(*0xffd4b98c + 0x18))(*0xffd4b98c,param_1,param_2);
    }
    return uVar1;
}


/* fcn.00000f9a @ 0xf9a */

uint __fastcall fcn.00000f9a(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    bool bVar4;
    
    uVar1 = (param_5 % 10 << 0x20 | param_4) / 10;
    iVar2 = uVar1 + 1;
    iVar3 = param_5 / 10 + (0xfffffffe < uVar1);
    do {
        if ((*param_1 & param_2) == param_3) {
            return 0;
        }
        fcn.00002dc6();
        bVar4 = iVar2 != 0;
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + -1 + bVar4;
    } while (((param_4 == 0 && param_5 == 0) || (iVar3 != 0)) || (iVar2 != 0));
    return 0x80000012;
}


/* fcn.00002cd5 @ 0x2cd5 */

void __cdecl fcn.00002cd5(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00002c94 @ 0x2c94 */

void fcn.00002c94(void)

{
    int iVar1;
    
    iVar1 = fcn.00002c74();
    if (iVar1 != 0) {
        fcn.00002d56(0x108);
    }
    return;
}


/* fcn.00002c74 @ 0x2c74 */

uint __fastcall fcn.00002c74(uint param_1)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.00002d2d();
    if (iVar1 < 0) {
        param_1 = 0;
    }
    return param_1;
}


/* fcn.00002d56 @ 0x2d56 */

int __fastcall fcn.00002d56(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00002ad0 @ 0x2ad0 */

uint __fastcall fcn.00002ad0(int param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.00002d2d();
    if (iVar1 < 0) {
        uVar2 = 0x80000009;
    }
    else {
        fcn.000000e0(0,4);
        _main = fcn.0000291e();
        if (_main == 0) {
            uVar2 = 0x80000009;
        }
        else {
            *(param_1 + 8) = 0;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.0000289c @ 0x289c */

int __fastcall fcn.0000289c(int param_1)

{
    int iVar1;
    
    out(0x80,0xf023);
    iVar1 = fcn.00001f22();
    if (((-1 < iVar1) && (iVar1 = fcn.00002620(), -1 < iVar1)) && (iVar1 = fcn.000026dc(), -1 < iVar1)) {
        iVar1 = fcn.000027de();
        if (iVar1 < 0) {
            if (*(param_1 + 0xf4) != 0) {
                fcn.00000f5d(*(param_1 + 0xf4));
                *(param_1 + 0xf4) = 0;
            }
        }
        else {
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00001b61 @ 0x1b61 */

//WARNING: Removing unreachable block (ram,0x00001ba5)

uint32_t __fastcall fcn.00001b61(int param_1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int32_t var_18h;
    int var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (param_1 == 0) {
        uVar5 = 0x80000002;
    }
    else {
        iVar3 = *(param_1 + 0xe0);
        uVar5 = fcn.000016c5();
        if (-1 < uVar5) {
            uVar4 = *(iVar3 + 0x10);
            uVar1 = *(iVar3 + 0x1a);
            uVar2 = *(iVar3 + 0x18);
            fcn.000017c1();
            uVar5 = fcn.00000f9a(0,30000000,0);
            if (-1 < uVar5) {
                uVar5 = -(*((uVar4 & 0xffffff80) + 6 + uVar1 * 4) != '\0') & 0x80000007;
            }
            fcn.000017e0();
            fcn.00002bc4((uVar2 + uVar1) * 4);
        }
    }
    return uVar5;
}


/* fcn.000019ec @ 0x19ec */

//WARNING: Removing unreachable block (ram,0x00001a91)

int __cdecl fcn.000019ec(uint noname_0,int32_t arg_ch)

{
    int arg_8h;
    int iVar1;
    int in_ECX;
    int32_t var_38h;
    int32_t var_34h;
    int8_t var_28h;
    int16_t var_27h;
    int8_t var_25h;
    int8_t var_1ch;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (arg_ch != 0) {
        fcn.000000e0(&var_38h,0x20);
        var_1ch = 1;
        if (*arg_ch == '\x01') {
            var_28h = 6;
        }
        else {
            if (*arg_ch != '\0') {
                return -0x7ffffffe;
            }
            var_28h = 7;
        }
        var_27h = 1;
        var_25h = 0;
        var_18h = 3;
        var_14h = 0;
        var_34h = 0;
        var_38h = 30000000;
        if (in_ECX != 0) {
            arg_8h = *(in_ECX + 0xe0);
            iVar1 = fcn.000014b2(arg_8h);
            if (iVar1 < 0) {
                return iVar1;
            }
            var_18h = *(arg_8h + 0x10) >> 7;
            var_4h = var_18h << 7;
            var_ch = *(arg_8h + 0x1a);
            var_14h = (*(arg_8h + 0x18) + var_ch) * 4;
            fcn.000017c1();
            var_8h = fcn.00000f9a(0,var_38h,var_34h);
            iVar1 = var_8h;
            if (-1 < var_8h) {
                if ((*(var_4h + 6 + var_ch * 4) == '\0') && (*(arg_8h + 8) == '\0')) {
                    *arg_ch = *(var_4h + 0x17 + var_ch * 4);
                }
                else {
                    iVar1 = -0x7ffffff9;
                }
            }
            fcn.000017e0();
            fcn.00002bc4(var_14h);
            return iVar1;
        }
    }
    return -0x7ffffffe;
}


/* fcn.0000195e @ 0x195e */

int __cdecl fcn.0000195e(int32_t arg_14h)

{
    int iVar1;
    uint8_t uVar2;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int8_t var_10h;
    int32_t var_ch;
    int var_8h;
    
    out(0x80,0xf028);
    fcn.000000e0(&var_2ch,0x20);
    var_24h = arg_14h;
    var_10h = 2;
    var_18h = 0x90;
    var_1ch = 0x101;
    var_ch = 3;
    var_8h = 0;
    var_28h = 0;
    var_2ch = 30000000;
    out(0x80,0xf028);
    uVar2 = 0;
    do {
        iVar1 = fcn.00001803();
        if (-1 < iVar1) {
            return 0;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 5);
    return iVar1;
}


/* fcn.00002cb0 @ 0x2cb0 */

void __fastcall fcn.00002cb0(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00002d02 @ 0x2d02 */

void __cdecl fcn.00002d02(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00002dc6 @ 0x2dc6 */

uint __fastcall fcn.00002dc6(uint param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.00002d7d();
    return param_1;
}


/* fcn.00002d7d @ 0x2d7d */

void __fastcall fcn.00002d7d(uint32_t param_1)

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


/* fcn.0000100f @ 0x100f */

void __fastcall fcn.0000100f(int param_1,uint32_t param_2)

{
    uchar uVar1;
    uchar *puVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    if (param_2 >> 1 != 0) {
        puVar2 = (param_2 - 1) + param_1;
        do {
            uVar1 = *(uVar3 + param_1);
            *(uVar3 + param_1) = *puVar2;
            uVar3 = uVar3 + 1;
            *puVar2 = uVar1;
            puVar2 = puVar2 + -1;
        } while (uVar3 < param_2 >> 1);
    }
    return;
}


/* fcn.00001034 @ 0x1034 */

void __cdecl fcn.00001034(int8_t arg_8h,int8_t arg_ch,int8_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    uint8_t *in_ECX;
    uint8_t in_DL;
    
    if (((in_ECX != NULL) && (in_DL < 9)) && (*in_ECX = in_DL, in_DL != 0)) {
        in_ECX[1] = arg_8h;
        in_ECX[2] = arg_ch;
        in_ECX[3] = arg_10h;
        if ((in_DL == 1) || (in_DL == 2)) {
            fcn.0000100f();
            *(in_ECX + 6) = arg_14h;
        }
        if (in_DL == 4) {
            fcn.0000100f();
            *(in_ECX + 8) = arg_18h;
        }
    }
    return;
}


/* fcn.00000e2c @ 0xe2c */

uint __cdecl fcn.00000e2c(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int in_ECX;
    uint in_EDX;
    uint uVar2;
    
    if (*0xffd4b98c == 0) {
        *arg_ch = in_EDX;
        *(arg_ch + 4) = 0;
        *arg_10h = 0;
        return 0;
    }
    iVar1 = (**(*0xffd4b98c + 0xc))(*0xffd4b98c);
    if (iVar1 < 0) {
        return 0x80000009;
    }
    if (in_ECX == 0) {
code_r0x00000e89:
        uVar2 = 1;
    }
    else {
        if (in_ECX == 1) {
code_r0x00000e84:
            uVar2 = 2;
            goto code_r0x00000e8c;
        }
        if (in_ECX != 2) {
            if (in_ECX == 3) goto code_r0x00000e89;
            if (in_ECX == 4) goto code_r0x00000e84;
            if (in_ECX != 5) {
                return 0x80000002;
            }
        }
        uVar2 = 3;
    }
code_r0x00000e8c:
    uVar2 = (**(*0xffd4b98c + 8))(*0xffd4b98c,*arg_10h,uVar2,0);
    return uVar2;
}


/* fcn.00002b21 @ 0x2b21 */

int __fastcall fcn.00002b21(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar1 = *param_1;
    iVar3 = 0;
    if (iVar1 != 0) {
        iVar3 = iVar1;
        do {
            iVar2 = fcn.00002a09();
            if (iVar2 != 0) {
                fcn.00002d6c();
                return iVar2;
            }
            iVar3 = *(iVar3 + 0x18);
        } while (iVar3 != 0);
        iVar2 = fcn.0000291e();
        iVar3 = 0;
        if (iVar2 != 0) {
            *(iVar2 + 0x18) = *(iVar1 + 0x18);
            *(iVar1 + 0x18) = iVar2;
            iVar3 = fcn.00002a09();
            if (iVar3 != 0) {
                fcn.00002d6c();
            }
        }
    }
    return iVar3;
}


/* fcn.00001095 @ 0x1095 */

uint __cdecl fcn.00001095(int8_t arg_8h,uint32_t arg_ch,int8_t arg_10h,uint32_t arg_14h,int32_t arg_18h)

{
    uint uVar1;
    uint8_t uVar2;
    uint8_t *in_ECX;
    uint8_t in_DL;
    
    if ((in_ECX == NULL) || (arg_ch == 0)) {
        uVar1 = 0x80000002;
    }
    else {
        if (arg_14h == 2) {
            uVar2 = 0x41;
        }
        else {
            uVar2 = ((arg_14h != 1) - 1U & 0x20) + 1;
        }
        in_ECX[4] = in_ECX[4] & 0xf0;
        in_ECX[1] = uVar2;
        *in_ECX = *in_ECX & 0xc1 | 1;
        in_ECX[2] = in_DL;
        in_ECX[3] = arg_8h;
        fcn.0000100f();
        *(in_ECX + 0xc) = arg_18h;
        if (arg_10h != 0) {
            fcn.00002d56(arg_10h);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00001107 @ 0x1107 */

//WARNING: Removing unreachable block (ram,0x000011c0)

uint __cdecl fcn.00001107(int32_t arg_8h)

{
    int iVar1;
    int in_ECX;
    uint32_t in_EDX;
    uint32_t *puVar2;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    if ((arg_8h & 3U) != 0) {
        arg_8h = arg_8h & 0xfffffffc;
    }
    if ((arg_8h != 0) && (iVar1 = ((0xfffc0000 < arg_8h) % 0x40000 << 0x20 | arg_8h + 0x3ffff) / 0x40000, iVar1 != 0))
    {
        puVar2 = in_ECX + 0xc;
        do {
            if (arg_8h < 0x40000) {
                *puVar2 = *puVar2 ^ (arg_8h - 1U ^ *puVar2) & 0x3ffff;
            }
            else {
                *puVar2 = *puVar2 | 0x3ffff;
            }
            puVar2[-3] = puVar2[-3] & 3 | in_EDX & 0xfffffffc;
            puVar2[-2] = 0;
            arg_8h = arg_8h - 0x40000;
            in_EDX = in_EDX + 0x40000;
            puVar2 = puVar2 + 4;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    return 0;
}


/* fcn.000011ed @ 0x11ed */

uint __cdecl
fcn.000011ed(int8_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,uint32_t arg_18h,int32_t arg_1ch)

{
    uint uVar1;
    uint8_t *in_ECX;
    uint8_t in_DL;
    uint32_t arg_14h_00;
    
    if (in_ECX == NULL) {
        uVar1 = 0x80000002;
    }
    else {
        in_ECX[3] = in_DL;
        *in_ECX = *in_ECX & 0xd6 | 0x16;
        if (((arg_8h == 1) || (arg_8h == 5)) || (arg_8h == 3)) {
            in_ECX[5] = 1;
        }
        else {
            in_ECX[5] = 0x81;
        }
        if (arg_8h == 4) {
            fcn.00001034(arg_ch,arg_10h,arg_14h,0,*arg_1ch);
        }
        else {
            if ((arg_8h == 1) || (arg_8h == 2)) {
                arg_14h_00 = arg_18h;
            }
            else {
                arg_14h_00 = 0;
            }
            fcn.00001034(arg_ch,arg_10h,arg_14h,arg_14h_00,0);
            if (arg_8h == 2) {
                if (arg_18h != 0) {
                    fcn.00002d56(arg_18h);
                }
                fcn.0000100f();
                *(in_ECX + 10) = arg_18h;
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000014b2 @ 0x14b2 */

//WARNING: Removing unreachable block (ram,0x00001606)

uint __cdecl fcn.000014b2(int32_t arg_8h)

{
    uint8_t arg_8h_00;
    uint8_t uVar1;
    ushort uVar2;
    uint32_t uVar3;
    int in_ECX;
    int arg_1ch;
    int in_EDX;
    uint32_t arg_18h;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if (in_ECX == 0) {
        return 0x80000002;
    }
    if (in_EDX == 0) {
        return 0x80000002;
    }
    if (arg_8h == 0) {
        return 0x80000002;
    }
    arg_8h_00 = *(in_EDX + 0x10);
    if (8 < arg_8h_00) {
        return 0x80000002;
    }
    if (arg_8h_00 == 0) {
        return 0x80000002;
    }
    uVar1 = *(in_EDX + 0x1c);
    if (uVar1 == 2) {
        arg_18h = *(in_EDX + 0x14);
        arg_1ch = *(in_EDX + 8);
    }
    else if (uVar1 == 1) {
        arg_18h = *(in_EDX + 0x18);
        arg_1ch = *(in_EDX + 0xc);
    }
    else {
        arg_18h = 0;
        arg_1ch = 0;
    }
    if (((arg_8h_00 != 6) && (arg_8h_00 != 7)) && (arg_8h_00 != 8)) {
        if (arg_18h == 0) {
            return 0x80000002;
        }
        if (arg_1ch == 0) {
            return 0x80000002;
        }
        if (arg_8h_00 != 8) goto code_r0x00001526;
    }
    if (arg_18h != 0) {
        return 0x80000002;
    }
    if (arg_1ch != 0) {
        return 0x80000002;
    }
code_r0x00001526:
    if ((arg_8h_00 == 4) && (arg_18h != 4)) {
        return 0x80000002;
    }
    uVar3 = fcn.00002b21();
    if (uVar3 != 0) {
        *(in_ECX + 0xdc) = *(in_ECX + 0xdc) + '\x01';
        fcn.000011ed(arg_8h_00,*(in_EDX + 0x11),*(in_EDX + 0x12),*(in_EDX + 0x13),arg_18h,arg_1ch);
        *(arg_8h + 8) = 0xf;
        *arg_8h = (uVar1 & 3) << 0x19 | *arg_8h & 0x8ffffff | 0x11000000;
        *(arg_8h + 0x10) = uVar3 & 0xffffff80 | *(arg_8h + 0x10) & 0x7f;
        *(arg_8h + 0x14) = 0;
        if (arg_8h_00 == 2) {
            *(arg_8h + 0x18) = 8;
            if ((arg_18h & 7) != 0) {
                arg_18h = (arg_18h & 0xfffffff8) + 8;
            }
            uVar2 = ((0xffffffdf < arg_18h) % 4 << 0x20 | arg_18h + 0x20) / 4;
        }
        else {
            if ((arg_18h & 7) != 0) {
                arg_18h = (arg_18h & 0xfffffff8) + 8;
            }
            *(arg_8h + 0x18) = ((0xffffffdf < arg_18h) % 4 << 0x20 | arg_18h + 0x20) / 4;
            uVar2 = 8;
        }
        *(arg_8h + 0x1a) = uVar2;
        return 0;
    }
    return 0x80000009;
}


/* fcn.000017c1 @ 0x17c1 */

void __fastcall fcn.000017c1(int param_1,uint8_t param_2)

{
    int iVar1;
    
    iVar1 = *(param_1 + 0xd4);
    if ((*(iVar1 + 0x60) & 1) == 0) {
        *(iVar1 + 0x60) = 1;
    }
    *(iVar1 + 0x58) = 1 << (param_2 & 0x1f);
    return;
}


/* fcn.000017e0 @ 0x17e0 */

void __fastcall fcn.000017e0(int param_1,uint8_t param_2)

{
    int iVar1;
    
    iVar1 = *(param_1 + 0xd4);
    if ((*(iVar1 + 0x58) & 1 << (param_2 & 0x1f)) != 0) {
        *(iVar1 + 0x5c) = *(iVar1 + 0x5c) & ~(1 << (param_2 & 0x1f));
    }
    return;
}


/* fcn.00002bc4 @ 0x2bc4 */

void __fastcall fcn.00002bc4(int *param_1,uint32_t param_2,int param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    uint32_t uVar7;
    
    param_1 = *param_1;
    if (param_1 != NULL) {
        piVar6 = param_1;
        do {
            if ((piVar6[2] <= param_2) && ((param_3 + 0x7fU & 0xffffff80) + param_2 <= piVar6[4] + piVar6[2])) {
                iVar3 = param_2 - piVar6[2];
                iVar5 = (iVar3 >> 0x1f & 0x3ffU) + iVar3 >> 10;
                uVar4 = (iVar3 >> 0x1f & 0x7fU) + iVar3 >> 7 & 0x80000007;
                if (uVar4 < 0) {
                    uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
                }
                uVar2 = 0;
                for (uVar7 = param_3 + 0x7fU >> 7; uVar7 != 0; uVar7 = uVar7 - 1) {
                    uVar1 = uVar4 & 0x1f;
                    uVar4 = uVar4 + 1;
                    *(*piVar6 + iVar5) = *(*piVar6 + iVar5) ^ 1 << uVar1;
                    if (7 < uVar4) {
                        iVar5 = iVar5 + 1;
                        uVar4 = 0;
                    }
                }
                if (piVar6 == param_1) {
                    return;
                }
                if (piVar6[1] != 0) {
                    do {
                        if (*(*piVar6 + uVar2) != '\0') {
                            return;
                        }
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < piVar6[1]);
                }
                if (piVar6 != NULL) {
                    fcn.00000f5d(piVar6[5]);
                }
                return;
            }
            piVar6 = piVar6[6];
        } while (piVar6 != NULL);
    }
    return;
}


/* fcn.00001803 @ 0x1803 */

//WARNING: Removing unreachable block (ram,0x00001866)

int __fastcall fcn.00001803(int param_1,uint *param_2)

{
    uint16_t uVar1;
    int arg_8h;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    out(0x80,0xf029);
    fcn.00002dc6();
    if (param_1 == 0) {
        return -0x7ffffffe;
    }
    arg_8h = *(param_1 + 0xe0);
    iVar2 = fcn.000014b2(arg_8h);
    if (iVar2 < 0) {
        return iVar2;
    }
    uVar3 = *(arg_8h + 0x10) & 0xffffff80;
    uVar4 = *(arg_8h + 0x1a);
    uVar1 = *(arg_8h + 0x18);
    fcn.000017c1();
    iVar2 = fcn.00000f9a(0,*param_2,param_2[1]);
    if (-1 < iVar2) {
        if ((*(uVar3 + 6 + uVar4 * 4) == '\0') && (*(arg_8h + 8) == '\0')) {
            uVar3 = *(uVar3 + 0x12 + uVar4 * 4);
            fcn.0000100f();
            if (uVar3 <= param_2[5]) {
                if (uVar3 != 0) {
                    fcn.00002d56(uVar3);
                }
                param_2[5] = uVar3;
                goto code_r0x0000193d;
            }
        }
        iVar2 = -0x7ffffff9;
    }
code_r0x0000193d:
    fcn.000017e0();
    fcn.00002bc4((uVar1 + uVar4) * 4);
    return iVar2;
}


/* fcn.000016c5 @ 0x16c5 */

//WARNING: Removing unreachable block (ram,0x0000175f)

uint __fastcall fcn.000016c5(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint uVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    if ((param_1 == 0) || (param_2 == NULL)) {
        uVar2 = 0x80000002;
    }
    else {
        uVar1 = fcn.00002b21();
        if (uVar1 == 0) {
            uVar2 = 0x80000009;
        }
        else {
            *(uVar1 + 3) = *(param_1 + 0xdc);
            *(param_1 + 0xdc) = *(param_1 + 0xdc) + '\x01';
            *(param_2 + 2) = 0xf;
            *param_2 = *param_2 & 0x8ffffff | 0x11000000;
            param_2[4] = param_2[4] & 0x7f | uVar1 & 0xffffff80;
            param_2[5] = 0;
            *(param_2 + 6) = 8;
            *(param_2 + 0x1a) = 8;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000012ab @ 0x12ab */

//WARNING: Removing unreachable block (ram,0x0000141e)

uint __cdecl fcn.000012ab(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h)

{
    int8_t arg_8h_00;
    int iVar1;
    uint32_t uVar2;
    int in_ECX;
    uint32_t arg_18h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if (((in_ECX == 0) || (arg_8h == 0)) || (arg_ch == 0)) {
        return 0x80000002;
    }
    var_28h = 0;
    var_24h = 0;
    if (*(arg_8h + 0x21) == '\x02') {
        arg_18h = *(arg_8h + 0x18);
        var_8h = 2;
    }
    else {
        arg_18h = *(arg_8h + 0x1c);
        var_8h = 1;
    }
    var_10h = in_ECX;
    if (arg_18h == 0) {
        var_8h = 0;
    }
    else {
        var_ch = arg_18h;
        iVar1 = fcn.00000e2c(&var_ch,&var_28h,arg_10h);
        if (iVar1 < 0) {
            return 0x80000009;
        }
        if (var_ch != arg_18h) {
            return 0x80000009;
        }
    }
    var_20h = arg_18h + 0x3ffff;
    var_1ch = ((0xfffc0000 < arg_18h) % 0x40000 << 0x20 | var_20h) / 0x40000;
    uVar2 = fcn.00002b21();
    if (uVar2 == 0) {
        return 0x80000009;
    }
    arg_8h_00 = *(var_10h + 0xdc);
    *(var_10h + 0xdc) = arg_8h_00 + 1;
    var_14h = uVar2;
    fcn.00001095(arg_8h_00,*(arg_8h + 0x14),*(arg_8h + 0x20),var_8h,arg_18h);
    fcn.00001107(arg_18h);
    *(arg_ch + 8) = 0xf;
    *arg_ch = (var_8h & 7U) << 0x19 | *arg_ch & 0x8ffffff | 0x11000000;
    *(arg_ch + 0x10) = uVar2 & 0xffffff80 | *(arg_ch + 0x10) & 0x7f;
    *(arg_ch + 0x14) = 0;
    *(arg_ch + 0x18) = 0xe;
    *(arg_ch + 0x1a) = 8;
    *(arg_ch + 0x1c) = var_1ch;
    *(arg_ch + 0x1e) = 0x16;
    return 0;
}


/* fcn.00001e48 @ 0x1e48 */

int __fastcall fcn.00001e48(int param_1,uint8_t param_2,uint param_3,uint param_4,uint param_5)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    
    iVar1 = *(param_1 + 0xd4);
    uVar2 = *(iVar1 + 0x20);
    if ((uVar2 & 0x400) != 0) {
        *(iVar1 + 0x20) = uVar2;
    }
    *(iVar1 + 0x94) = param_3;
    *(iVar1 + 0x98) = 0;
    *(iVar1 + 0x9c) = param_5;
    iVar3 = fcn.00000f9a(8,30000000,0);
    if (-1 < iVar3) {
        *(iVar1 + 0x90) = param_2;
        iVar3 = fcn.00000f9a(0x400,30000000,0);
        if (-1 < iVar3) {
            if ((param_2 == 0x14) || (*(iVar1 + 0x98) == '\0')) {
                iVar3 = 0;
            }
            else {
                iVar3 = -0x7ffffff9;
            }
        }
    }
    return iVar3;
}


/* fcn.00001fea @ 0x1fea */

int __fastcall fcn.00001fea(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint uVar3;
    uint extraout_ECX_02;
    
    iVar2 = fcn.00001e48(0x15810000,param_1,0);
    if (-1 < iVar2) {
        uVar1 = *(*(param_1 + 0xd4) + 0x9c);
        iVar2 = fcn.00001e48(0x15800000,extraout_ECX,0);
        if (-1 < iVar2) {
            uVar3 = extraout_ECX_00;
            if (*(*(param_1 + 0xd4) + 0x9c) < uVar1) {
                iVar2 = fcn.00001e48(0x15800000,extraout_ECX_00,uVar1);
                uVar3 = extraout_ECX_01;
                if (iVar2 < 0) {
                    return iVar2;
                }
            }
            iVar2 = fcn.00001e48(0x15610000,uVar3,0);
            if (-1 < iVar2) {
                uVar1 = *(*(param_1 + 0xd4) + 0x9c);
                iVar2 = fcn.00001e48(0x15600000,extraout_ECX_02,0);
                if ((-1 < iVar2) && (*(*(param_1 + 0xd4) + 0x9c) < uVar1)) {
                    iVar2 = fcn.00001e48(0x15600000,iVar2,uVar1);
                }
            }
        }
    }
    return iVar2;
}


/* fcn.000021a6 @ 0x21a6 */

void __fastcall fcn.000021a6(uint param_1)

{
    int iVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    
    iVar1 = fcn.00001e48(0x15b00000,param_1,0x1fff);
    if (-1 < iVar1) {
        iVar1 = fcn.00001e48(0x15b10000,extraout_ECX,0xffff);
        if (-1 < iVar1) {
            iVar1 = fcn.00001e48(0x15b20000,extraout_ECX_00,0x7fff);
            if (-1 < iVar1) {
                iVar1 = fcn.00001e48(0x156a0000,extraout_ECX_01,2);
                if (-1 < iVar1) {
                    iVar1 = fcn.00001e48(0x15840000,extraout_ECX_02,1);
                    if (-1 < iVar1) {
                        fcn.00001e48(0x15690000,extraout_ECX_03,1);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0000223e @ 0x223e */

uint __fastcall fcn.0000223e(uint param_1)

{
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    uint extraout_ECX_04;
    uint extraout_ECX_05;
    uint extraout_ECX_06;
    uint extraout_ECX_07;
    uint extraout_ECX_08;
    uint extraout_ECX_09;
    uint extraout_ECX_10;
    uint extraout_ECX_11;
    uint extraout_ECX_12;
    uint extraout_ECX_13;
    uint extraout_ECX_14;
    uint extraout_ECX_15;
    uint extraout_ECX_16;
    uint extraout_ECX_17;
    uint extraout_ECX_18;
    uint extraout_ECX_19;
    
    fcn.00001e48(0x155e0000,param_1,0);
    fcn.00001e48(0x15870000,extraout_ECX,0);
    fcn.00001e48(0x15870000,extraout_ECX_00,0);
    fcn.00001e48(0x15860000,extraout_ECX_01,0);
    fcn.00001e48(0x15860000,extraout_ECX_02,0);
    fcn.00001e48(0x15200000,extraout_ECX_03,0);
    fcn.00001e48(0x15400000,extraout_ECX_04,0);
    fcn.00001e48(0x15610000,extraout_ECX_05,0);
    fcn.00001e48(0x15810000,extraout_ECX_06,0);
    fcn.00001e48(0x15600000,extraout_ECX_07,0);
    fcn.00001e48(0x15800000,extraout_ECX_08,0);
    fcn.00001e48(0x15670000,extraout_ECX_09,0);
    fcn.00001e48(0x15820000,extraout_ECX_10,0);
    fcn.00001e48(0x15b00000,extraout_ECX_11,0);
    fcn.00001e48(0x15b10000,extraout_ECX_12,0);
    fcn.00001e48(0x15b20000,extraout_ECX_13,0);
    fcn.00001e48(0x15680000,extraout_ECX_14,0);
    fcn.00001e48(0x15690000,extraout_ECX_15,0);
    fcn.00001e48(0x156a0000,extraout_ECX_16,0);
    fcn.00001e48(0x15830000,extraout_ECX_17,0);
    fcn.00001e48(0x15840000,extraout_ECX_18,0);
    fcn.00001e48(0x156a0000,extraout_ECX_19,0);
    return 0;
}


/* fcn.000020b5 @ 0x20b5 */

int __fastcall fcn.000020b5(int param_1)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    int32_t var_8h;
    int var_4h;
    
    iVar3 = fcn.00001fea();
    if (-1 < iVar3) {
        iVar3 = fcn.00001e48(0x15860000,extraout_ECX,0);
        if (-1 < iVar3) {
            uVar1 = *(*(param_1 + 0xd4) + 0x9c);
            iVar3 = fcn.00001e48(0x15860000,extraout_ECX_00,0);
            if (-1 < iVar3) {
                uVar2 = *(*(param_1 + 0xd4) + 0x9c);
                iVar3 = fcn.00001e48(0x15830000,extraout_ECX_01,uVar1);
                if (-1 < iVar3) {
                    iVar3 = fcn.00001e48(0x15680000,extraout_ECX_02,uVar2);
                    if (-1 < iVar3) {
                        iVar3 = fcn.00001e48(0x15710000,extraout_ECX_03,0x55);
                        if (-1 < iVar3) {
                            iVar3 = fcn.00000f9a(0x10,30000000,0);
                            if (iVar3 < 0) {
                                iVar3 = -0x7ffffff9;
                            }
                            else {
                                iVar3 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return iVar3;
}


/* fcn.000023e2 @ 0x23e2 */

int __fastcall fcn.000023e2(int param_1)

{
    uint uVar1;
    int iVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    uint extraout_ECX_04;
    uint extraout_ECX_05;
    uint uVar3;
    uint extraout_ECX_06;
    uint extraout_ECX_07;
    uint extraout_ECX_08;
    uint32_t uVar4;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    iVar2 = fcn.00001fea();
    if ((-1 < iVar2) && (iVar2 = fcn.00001e48(0x15860000,extraout_ECX,0), -1 < iVar2)) {
        uVar3 = *(*(param_1 + 0xd4) + 0x9c);
        iVar2 = fcn.00001e48(0x15870000,extraout_ECX_00,0);
        if (-1 < iVar2) {
            uStack_10 = *(*(param_1 + 0xd4) + 0x9c);
            iVar2 = fcn.00001e48(0x15860000,extraout_ECX_01,0);
            if (-1 < iVar2) {
                uVar1 = *(*(param_1 + 0xd4) + 0x9c);
                iVar2 = fcn.00001e48(0x15870000,extraout_ECX_02,0);
                if (-1 < iVar2) {
                    uStack_c = *(*(param_1 + 0xd4) + 0x9c);
                    if ((uStack_10 == 0) || (uStack_c == 0)) {
                        uVar4 = 5;
                        iVar2 = fcn.00001e48(0x15830000,extraout_ECX_03,uVar3);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        iVar2 = fcn.00001e48(0x15680000,extraout_ECX_07,uVar1);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                    }
                    else {
                        if (3 < uStack_10) {
                            uStack_10 = 3;
                        }
                        iVar2 = fcn.00001e48(0x15830000,extraout_ECX_03,0);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        uVar3 = extraout_ECX_04;
                        if ((*(*(param_1 + 0xd4) + 0x9c) < uStack_10) &&
                           (iVar2 = fcn.00001e48(0x15830000,extraout_ECX_04,uStack_10), uVar3 = extraout_ECX_05,
                           iVar2 < 0)) {
                            return iVar2;
                        }
                        if (3 < uStack_c) {
                            uStack_c = 3;
                        }
                        iVar2 = fcn.00001e48(0x15680000,uVar3,0);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        if ((*(*(param_1 + 0xd4) + 0x9c) < uStack_10) &&
                           (iVar2 = fcn.00001e48(0x15680000,extraout_ECX_06,uStack_c), iVar2 < 0)) {
                            return iVar2;
                        }
                        uVar4 = 1;
                    }
                    fcn.000021a6();
                    iVar2 = fcn.00001e48(0x15710000,extraout_ECX_08,uVar4 << 4 | uVar4);
                    if (-1 < iVar2) {
                        iVar2 = fcn.00000f9a(0x10,30000000,0);
                        if (iVar2 < 0) {
                            iVar2 = -0x7ffffff9;
                        }
                        else {
                            fcn.0000223e();
                            iVar2 = 0;
                        }
                    }
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00000eb5 @ 0xeb5 */

int __fastcall fcn.00000eb5(int param_1,int *param_2,int *param_3,uint *param_4)

{
    int *piVar1;
    uint *puVar2;
    int iVar3;
    int iStack_8;
    int iStack_4;
    
    piVar1 = param_3;
    *param_2 = 0;
    *param_3 = 0;
    param_3[1] = 0;
    iStack_8 = param_1;
    iStack_4 = param_1;
    if (*0xffd4b98c == 0) {
        iVar3 = fcn.00002d02(&iStack_8);
        if (-1 < iVar3) {
            *param_2 = iStack_8;
            *piVar1 = iStack_8;
            piVar1[1] = iStack_4;
            *param_4 = 0;
            return iVar3;
        }
    }
    else {
        iVar3 = (**(*0xffd4b98c + 0x14))(*0xffd4b98c,4,param_1,param_2,0,0);
        puVar2 = param_4;
        if (-1 < iVar3) {
            param_3 = param_1 << 0xc;
            iVar3 = (**(*0xffd4b98c + 0xc))(*0xffd4b98c,2,*param_2,&param_3,piVar1,param_4);
            if (-1 < iVar3) {
                iVar3 = (**(*0xffd4b98c + 8))(*0xffd4b98c,*puVar2,3,0);
                if (-1 < iVar3) {
                    return iVar3;
                }
                return iVar3;
            }
        }
    }
    return -0x7ffffff7;
}


/* fcn.00002d6c @ 0x2d6c */

uint __fastcall fcn.00002d6c(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.00001f22 @ 0x1f22 */

int __fastcall fcn.00001f22(int param_1)

{
    int iVar1;
    int iVar2;
    
    out(0x80,0xf024);
    iVar2 = *(param_1 + 0xd4);
    if ((*(iVar2 + 0x34) & 1) != 0) {
        *(iVar2 + 0x34) = 0;
        iVar1 = fcn.00000f9a(0,30000000,0);
        if (iVar1 < 0) {
            return -0x7ffffff9;
        }
    }
    *(iVar2 + 0x34) = 1;
    iVar2 = fcn.00000f9a(1,30000000,0);
    if (iVar2 < 0) {
        return -0x7ffffff9;
    }
    out(0x80,0xf025);
    iVar2 = fcn.00001e48(0x155e0000,0x80,0);
    if (-1 < iVar2) {
        return 0;
    }
    return iVar2;
}


/* fcn.00002620 @ 0x2620 */

int __fastcall fcn.00002620(int param_1)

{
    int iVar1;
    uint uVar2;
    uint extraout_ECX;
    uint32_t uVar3;
    int32_t var_8h;
    int var_4h;
    
    uVar2 = 0x80;
    out(0x80,0xf026);
    uVar3 = 0;
    do {
        iVar1 = fcn.00001e48(0,uVar2,0);
        if (-1 < iVar1) {
            if ((*(*(param_1 + 0xd4) + 0x30) & 1) == 0) {
                iVar1 = fcn.00000f9a(0x100,30000000,0);
                if (iVar1 < 0) {
                    return -0x7ffffff9;
                }
            }
            else {
                out(0x80,0xf027);
                fcn.000020b5();
                iVar1 = fcn.000023e2();
                if (iVar1 < 0) {
                    return iVar1;
                }
            }
            break;
        }
        if (iVar1 != -0x7ffffff2) {
            return -0x7ffffff9;
        }
        uVar3 = uVar3 + 1;
        uVar2 = extraout_ECX;
    } while (uVar3 < 3);
    if (uVar3 == 3) {
        iVar1 = -0x7ffffff2;
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000026dc @ 0x26dc */

//WARNING: Removing unreachable block (ram,0x0000279d)

uint __fastcall fcn.000026dc(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_18h = 0;
    var_14h = 0;
    var_8h = 0;
    uVar1 = **(param_1 + 0xd4);
    *(param_1 + 0xd8) = uVar1;
    var_10h = uVar1 & 0x70000;
    var_ch = (var_10h >> 0x10) + 1;
    iVar2 = fcn.00000eb5(&var_18h,&var_8h);
    if (iVar2 < 0) {
        uVar3 = 0x80000007;
    }
    else {
        fcn.00002d6c();
        *(*(param_1 + 0xd4) + 0x70) = var_18h;
        *(*(param_1 + 0xd4) + 0x74) = var_14h;
        *(param_1 + 0xec) = var_4h;
        *(param_1 + 0xf0) = var_ch;
        *(param_1 + 0xf4) = var_8h;
        *(*(param_1 + 0xd4) + 0x80) = 1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000027de @ 0x27de */

//WARNING: Removing unreachable block (ram,0x00002861)

uint __fastcall fcn.000027de(int param_1)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = **(param_1 + 0xd4);
    *(param_1 + 0xd8) = uVar2;
    iVar1 = fcn.00000eb5(&var_10h,&var_8h);
    if (iVar1 < 0) {
        uVar2 = 0x80000007;
    }
    else {
        fcn.00002d6c();
        *(*(param_1 + 0xd4) + 0x50) = var_10h;
        *(*(param_1 + 0xd4) + 0x54) = var_ch;
        *(param_1 + 0xe0) = var_4h;
        *(param_1 + 0xe8) = var_8h;
        *(param_1 + 0xe4) = (uVar2 & 0x1f) + 1;
        *(*(param_1 + 0xd4) + 0x60) = 1;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00002d2d @ 0x2d2d */

void __fastcall fcn.00002d2d(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x4c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.0000291e @ 0x291e */

uint __fastcall fcn.0000291e(uint32_t param_1)

{
    int iVar1;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    iVar1 = fcn.00002d2d();
    if (-1 < iVar1) {
        fcn.000000e0(0,0x1c);
        *0x10 = param_1 << 0xc;
        *0x4 = (param_1 & 0xfffff) << 2;
        iVar1 = fcn.00002d2d();
        if (-1 < iVar1) {
            fcn.00002d6c();
            _main = 0;
            iVar1 = fcn.00000eb5(&uStack_8,&uStack_c);
            if (-1 < iVar1) {
                fcn.00002d6c();
                *0xc = 0;
                *0x8 = uStack_8;
                *0x14 = uStack_c;
                _te_directory1_header = 0;
            }
        }
    }
    return 0;
}


/* fcn.00002a09 @ 0x2a09 */

int __fastcall fcn.00002a09(int *param_1,uint32_t param_2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    unkuint3 Var5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint uStack_8;
    uint32_t uStack_4;
    
    if ((param_1 != NULL) && (param_2 != 0)) {
        uStack_4 = 0;
        uVar8 = 0;
        uStack_8._3_1_ = 0;
        uVar7 = 0;
        uVar4 = 0;
        if (param_1[1] != 0) {
            iVar3 = *param_1;
            uStack_8._3_1_ = 0;
            do {
                uVar2 = uVar4;
                uVar6 = 1 << (uVar2 & 0x1f);
                if ((*(iVar3 + uVar8) & uVar6) == uVar6) {
                    uStack_8._3_1_ = uVar2 + 1;
                    if (7 < uStack_8._3_1_) {
                        uVar8 = uVar8 + 1;
                        uStack_8._3_1_ = 0;
                    }
                    uVar4 = CONCAT11(uStack_8._3_1_,uStack_8._3_1_);
                    uVar7 = 0;
                    uStack_4 = uVar8;
                }
                else {
                    uVar7 = uVar7 + 1;
                    if (param_2 <= uVar7) goto code_r0x00002a7c;
                    Var5 = uVar4 >> 8;
                    uVar4 = CONCAT31(Var5,uVar2 + 1);
                    if (7 < uVar2 + 1) {
                        uVar8 = uVar8 + 1;
                        uVar4 = Var5 << 8;
                    }
                }
                iVar3 = *param_1;
            } while (uVar8 < param_1[1]);
        }
        if (param_2 <= uVar7) {
code_r0x00002a7c:
            uVar2 = uVar4 >> 8;
            uStack_8 = CONCAT11(uStack_8._3_1_,uVar2) << 0x10;
            uVar7 = uStack_4;
            if (param_2 != 0) {
                do {
                    uVar4 = uVar2;
                    uVar2 = uStack_8._2_1_ + 1;
                    *(*param_1 + uVar7) = *(*param_1 + uVar7) | 1 << (uVar4 & 0x1f);
                    uVar1 = uStack_8._3_1_;
                    uStack_8 = CONCAT11(uStack_8._3_1_,uVar2) << 0x10;
                    if (7 < uVar2) {
                        uVar7 = uVar7 + 1;
                        uVar2 = 0;
                        uStack_8 = uVar1 << 0x18;
                    }
                    param_2 = param_2 - 1;
                } while (param_2 != 0);
                uVar4 = (uStack_8 >> 0x18) << 8;
            }
            return ((uVar4 >> 8) + uStack_4 * 8) * 0x80 + param_1[2];
        }
    }
    return 0;
}


