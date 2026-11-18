// decompiled by r2ghidra: 2566_FvBb1Pei.te
// functions: 16

/* fcn.0000020f @ 0x20f */

uint __fastcall fcn.0000020f(uint param_1,int *param_2)

{
    uint32_t uVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar2 = fcn.0000049e();
    while (iVar2 != 0) {
        if (((((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0) || (*0xff7e0028 != 0x4856465f)) || (*0xff7e0020 != 0xb0000)) ||
           (*0xff7e0024 != 0)) {
            uVar1 = *(iVar2 + 0x10);
            if (((*(iVar2 + 0x14) == 0) && (uVar1 < 0xff9f0001)) &&
               ((((uVar1 == 0xff750000 || ((uVar1 == 0xff7e0000 || (uVar1 == 0xff890000)))) || (uVar1 == 0xff9e0000)) ||
                (uVar1 == 0xff9f0000)))) {
                *(iVar2 + 0x24) = *(iVar2 + 0x24) | 0x80;
            }
        }
        else if ((*(iVar2 + 0x10) == -0x610000) && (*(iVar2 + 0x14) == 0)) {
            *(iVar2 + 0x24) = *(iVar2 + 0x24) | 0x40a;
            iVar2 = fcn.00000339();
            (**(iVar2 + 0x28))(0xfffcd2fc,0x1000,0xff890000);
            iVar2 = fcn.00000339();
            (**(iVar2 + 0x28))(0xfffcd2fc,0x1001,0xff7e0070);
        }
        else if ((*(iVar2 + 0x10) == -0x2f0000) && (*(iVar2 + 0x14) == 0)) {
            *(iVar2 + 0x24) = *(iVar2 + 0x24) & 0xfffffffd;
        }
        iVar2 = fcn.000004bf();
    }
    if ((*0xc00fd0dc & *0xc00f80dc & 0x10) != 0) {
        (**(*param_2 + 0x24))(param_2,0xfffcd31c);
    }
    return 0;
}


/* entry0 @ 0x17d */

uint entry0(uint param_1,int *param_2)

{
    uint32_t uVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar2 = fcn.0000049e();
    while (iVar2 != 0) {
        if (((((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0) || (*0xff7e0028 != 0x4856465f)) || (*0xff7e0020 != 0xb0000)) ||
           (*0xff7e0024 != 0)) {
            uVar1 = *(iVar2 + 0x10);
            if (((*(iVar2 + 0x14) == 0) && (uVar1 < 0xff9f0001)) &&
               ((((uVar1 == 0xff750000 || ((uVar1 == 0xff7e0000 || (uVar1 == 0xff890000)))) || (uVar1 == 0xff9e0000)) ||
                (uVar1 == 0xff9f0000)))) {
                *(iVar2 + 0x24) = *(iVar2 + 0x24) | 0x80;
            }
        }
        else if ((*(iVar2 + 0x10) == -0x610000) && (*(iVar2 + 0x14) == 0)) {
            *(iVar2 + 0x24) = *(iVar2 + 0x24) | 0x40a;
            iVar2 = fcn.00000339();
            (**(iVar2 + 0x28))(0xfffcd2fc,0x1000,0xff890000);
            iVar2 = fcn.00000339();
            (**(iVar2 + 0x28))(0xfffcd2fc,0x1001,0xff7e0070);
        }
        else if ((*(iVar2 + 0x10) == -0x2f0000) && (*(iVar2 + 0x14) == 0)) {
            *(iVar2 + 0x24) = *(iVar2 + 0x24) & 0xfffffffd;
        }
        iVar2 = fcn.000004bf();
    }
    if ((*0xc00fd0dc & *0xc00f80dc & 0x10) != 0) {
        (**(*param_2 + 0x24))(param_2,0xfffcd31c);
    }
    return 0;
}


/* fcn.0000049e @ 0x49e */

uint32_t fcn.0000049e(void)

{
    int iVar1;
    
    iVar1 = fcn.00000567();
    if (iVar1 == 0) {
        fcn.0000039e();
        iVar1 = fcn.00000567();
    }
    return iVar1 + 0x30U & -(iVar1 != 0);
}


/* fcn.00000567 @ 0x567 */

int fcn.00000567(void)

{
    char cVar1;
    int iVar2;
    
    fcn.0000051b();
    do {
        iVar2 = fcn.00000546();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000617();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.0000039e @ 0x39e */

int * fcn.0000039e(void)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    int *piVar4;
    uint32_t uVar5;
    int *piVar6;
    uint uStack_14;
    int iStack_10;
    uchar *puStack_c;
    uchar auStack_8 [2];
    int iStack_6;
    
    puStack_c = auStack_8;
    uStack_14 = 0;
    iStack_10 = 0;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(iStack_6 + -4) + 0x38))(*(iStack_6 + -4),0,&uStack_14);
    if (-1 < iVar1) {
        puStack_c = auStack_8;
        InterruptDescriptorTableRegister();
        iVar2 = (**(**(iStack_6 + -4) + 0x68))(0xfffcd2dc,uStack_14,&iStack_10);
        iVar1 = iStack_10;
        if ((-1 < iVar2) && (piVar6 = iStack_10 + 0x2c, *piVar6 == 0x4c4d4f52)) {
            puVar3 = fcn.000005da();
            if (puVar3 != NULL) {
                *puVar3 = *(iVar1 + 0x30);
                puVar3[1] = *(iVar1 + 0x34);
                puVar3[3] = 0;
                piVar4 = puVar3 + 4;
                puVar3[2] = 0x30;
                iVar2 = *(iVar1 + 0x34);
                uVar5 = iVar1 + 0x3c;
                if (uVar5 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar6) {
                    do {
                        fcn.00000350(iVar2);
                        piVar4[1] = 0;
                        *piVar4 = (0x18 - puVar3) + piVar4;
                        piVar4 = piVar4 + 0xc;
                        iVar2 = *(iVar1 + 0x34);
                        uVar5 = uVar5 + iVar2;
                    } while (uVar5 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar6);
                }
            }
            return piVar6;
        }
    }
    return NULL;
}


/* fcn.000004bf @ 0x4bf */

int __fastcall fcn.000004bf(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    
    if (param_1 != 0) {
        piVar1 = param_1 + -8;
        iVar3 = *piVar1;
        cVar4 = fcn.00000617();
        if (cVar4 != '\0') {
            uVar5 = piVar1 + *(piVar1 + (0x20 - iVar3));
            uVar2 = piVar1 + (0x28 - iVar3);
            if ((uVar2 <= uVar5) && (uVar5 < (*(piVar1 + (2 - iVar3)) - 0x28) + uVar2)) {
                return uVar5 + 8;
            }
        }
    }
    return 0;
}


/* fcn.00000339 @ 0x339 */

int32_t __fastcall fcn.00000339(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.0000036d(param_1,&var_4h);
    return var_4h;
}


/* fcn.0000036d @ 0x36d */

void __cdecl fcn.0000036d(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xfffcd2cc,0,0,arg_ch);
    return;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1435 named .text
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


/* fcn.000005da @ 0x5da */

int fcn.000005da(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.000005a1();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000005f5();
    return extraout_EDX + 0x18;
}


/* fcn.000005a1 @ 0x5a1 */

int32_t __fastcall fcn.000005a1(uint param_1,uint param_2)

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


/* fcn.000005f5 @ 0x5f5 */

uint * __fastcall fcn.000005f5(uint *param_1)

{
    *param_1 = *0xfffcd2ec;
    param_1[1] = *0xfffcd2f0;
    param_1[2] = *0xfffcd2f4;
    param_1[3] = *0xfffcd2f8;
    return param_1;
}


/* fcn.00000350 @ 0x350 */

int __fastcall fcn.00000350(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.00000617 @ 0x617 */

uint32_t __fastcall fcn.00000617(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000051b @ 0x51b */

int32_t fcn.0000051b(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000546 @ 0x546 */

int16_t * __fastcall fcn.00000546(uint param_1,int16_t *param_2)

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


