// decompiled by r2ghidra: 1984_FwKeyHobPei.te
// functions: 5

/* entry0 @ 0x108 */

//WARNING: Variable defined which should be unmapped: var_4h

uint __cdecl entry0(uint noname_0,int32_t arg_ch)

{
    int32_t var_4h;
    
    fcn.00000222(0);
    return 0;
}


/* fcn.00000222 @ 0x222 */

int __fastcall fcn.00000222(int *param_1,int *param_2)

{
    int iVar1;
    uint *puVar2;
    int iVar3;
    uint8_t uVar4;
    int iStack_c;
    int iStack_8;
    int32_t iStack_4;
    
    if (param_2 == NULL) {
        iVar3 = -0x7ffffffe;
    }
    else if (*param_2 == 0) {
        uVar4 = 0;
        iVar3 = -0x7ffffff2;
        iVar1 = *0x750;
        while (iVar1 != 0) {
            iVar3 = fcn.00000121(&iStack_8);
            if (-1 < iVar3) {
                iVar3 = (**(*param_1 + 0x34))(param_1,4,iStack_8 + 0x34,&iStack_c);
                if (-1 < iVar3) {
                    *(iStack_c + 8) = *0x720;
                    *(iStack_c + 0xc) = *0x724;
                    *(iStack_c + 0x10) = *0x728;
                    *(iStack_c + 0x14) = *0x72c;
                    puVar2 = *(uVar4 * 4 + 0x760);
                    *(iStack_c + 0x18) = *puVar2;
                    *(iStack_c + 0x1c) = puVar2[1];
                    *(iStack_c + 0x20) = puVar2[2];
                    *(iStack_c + 0x24) = puVar2[3];
                    *(iStack_c + 0x30) = iStack_8;
                    *(iStack_c + 0x28) = iStack_4;
                    *(iStack_c + 0x2c) = 0;
                    fcn.00000408(iStack_c + 0x34,iStack_4,iStack_8);
                    *param_2 = iStack_c;
                    (**(*param_1 + 0x18))(param_1,0x770);
                }
                break;
            }
            uVar4 = uVar4 + 1;
            iVar1 = *(uVar4 * 4 + 0x750);
        }
    }
    else {
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00000344 @ 0x344 */

int __fastcall fcn.00000344(int *param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    
    uVar2 = param_1 & 3;
    piVar3 = param_1;
    if ((uVar2 != 0) && (uVar2 == (param_2 & 3))) {
        iVar1 = 4 - uVar2;
        for (; (iVar1 != 0 && (*piVar3 == *param_2)); piVar3 = piVar3 + 1) {
            param_2 = param_2 + 1;
            iVar1 = iVar1 + -1;
        }
    }
    for (; (piVar3 <= param_1 + 3 && (*piVar3 == *param_2)); piVar3 = piVar3 + 1) {
        param_2 = param_2 + 1;
    }
    while( true ) {
        if (param_1 + 4 <= piVar3) {
            return 0;
        }
        if (*piVar3 != *param_2) break;
        piVar3 = piVar3 + 1;
        param_2 = param_2 + 1;
    }
    return *piVar3 - *param_2;
}


/* fcn.00000121 @ 0x121 */

int __fastcall fcn.00000121(uint param_1,int param_2,int *param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    uint extraout_ECX;
    uint extraout_ECX_00;
    int iVar4;
    uint uVar5;
    int iStack_24;
    uint uStack_20;
    uint *puStack_1c;
    uint *puStack_18;
    uchar *puStack_14;
    uchar auStack_10 [8];
    uchar auStack_8 [8];
    
    iVar4 = 0;
    iStack_24 = 0;
    if ((param_2 == 0) || (param_3 == NULL)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        puStack_1c = auStack_10;
        puStack_14 = param_1;
        while( true ) {
            uVar5 = InterruptDescriptorTableRegister();
            *puStack_1c = uVar5;
            iVar2 = (**(**(auStack_10._2_4_ + -4) + 0x38))(*(auStack_10._2_4_ + -4),iVar4,&uStack_20);
            uVar5 = uStack_20;
            iVar4 = iVar4 + 1;
            if (iVar2 < 0) break;
            iVar2 = fcn.00000344(extraout_ECX);
            if (iVar2 == 0) {
                iStack_24 = 0;
                puStack_18 = auStack_8;
                while( true ) {
                    uVar1 = InterruptDescriptorTableRegister();
                    *puStack_18 = uVar1;
                    iVar3 = (**(**(auStack_8._2_4_ + -4) + 0x3c))(*(auStack_8._2_4_ + -4),2,uVar5,&iStack_24);
                    iVar2 = iStack_24;
                    if (iVar3 < 0) break;
                    iVar3 = fcn.00000344(extraout_ECX_00);
                    if (iVar3 == 0) {
                        puStack_14 = auStack_8;
                        InterruptDescriptorTableRegister();
                        iVar4 = (**(**(auStack_8._2_4_ + -4) + 0x40))(*(auStack_8._2_4_ + -4),0x19,iVar2,param_2);
                        if (iVar4 < 0) {
                            return iVar4;
                        }
                        *param_3 = (*(iStack_24 + 0x14) & 0xffffff) - 0x1c;
                        return iVar4;
                    }
                    uVar5 = uStack_20;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00000408 @ 0x408 */

int32_t __cdecl fcn.00000408(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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


