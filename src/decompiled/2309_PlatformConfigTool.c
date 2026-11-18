// decompiled by r2ghidra: 2309_PlatformConfigTool.te
// functions: 7

/* entry0 @ 0x155 */

uint entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0xffd10dd4);
    return 0;
}


/* fcn.000004ce @ 0x4ce */

int32_t __fastcall fcn.000004ce(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000004ea(param_1,&var_4h);
    return var_4h;
}


/* fcn.000004ea @ 0x4ea */

void __cdecl fcn.000004ea(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.0000048e @ 0x48e */

uint32_t __fastcall fcn.0000048e(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000180 @ 0x180 */

int __fastcall fcn.00000180(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    int iStack_4;
    
    uVar3 = *(*param_1 + 0x11);
    iVar2 = *param_1 + 0x18;
    *param_1 = iVar2;
    if (uVar3 == 0) {
        iVar2 = -0x7ffffff2;
    }
    else {
        iStack_4 = uVar3 * 0xc + 4;
        if (param_2 == 1) {
            iVar1 = fcn.000004ce();
            iVar2 = (**(iVar1 + 0x30))(0xffd10d34,0x50000017,&iStack_4,iVar2);
            iVar1 = fcn.000004ce();
            uVar4 = 0x50000017;
        }
        else {
            iVar1 = fcn.000004ce();
            iVar2 = (**(iVar1 + 0x30))(0xffd10d34,0x50000019,&iStack_4,iVar2);
            iVar1 = fcn.000004ce();
            uVar4 = 0x50000019;
        }
        iVar1 = (**(iVar1 + 0x14))(0xffd10d34,uVar4);
        if (iVar2 == 0) {
            *(iVar1 + uVar3 * 0xc) = 0;
        }
    }
    *param_1 = *param_1 + uVar3 * 0xc;
    return iVar2;
}


/* fcn.000004b2 @ 0x4b2 */

int32_t __fastcall fcn.000004b2(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000004ea(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000215 @ 0x215 */

int __fastcall fcn.00000215(uint32_t param_1,uint32_t param_2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
    
    if (((param_1 == 0) || (param_2 == 0)) || (uStack_14 = param_1, param_2 == param_1)) {
        iVar3 = -0x7ffffffe;
    }
    else {
        do {
            if (param_2 <= param_1) {
                return 0;
            }
            iVar3 = -0x7ffffff2;
            uVar2 = 0;
            do {
                cVar1 = fcn.0000048e();
                if (cVar1 != '\0') break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 3);
            if (uVar2 < 3) {
                iStack_c = *(uVar2 * 8 + -0x2ef21c);
                iVar3 = 0;
            }
            if (iVar3 == 0) {
                if (iStack_c == 1) {
                    iVar3 = fcn.00000180();
code_r0x0000030e:
                    param_1 = uStack_14;
                }
                else if (iStack_c == 2) {
                    iVar3 = fcn.00000180();
                    param_1 = uStack_14;
                }
                else {
                    iVar3 = 0;
                    if (iStack_c == 3) {
                        uVar2 = *(param_1 + 0x11);
                        if (*(param_1 + 0x11) == 0) goto code_r0x00000312;
                        iStack_10 = 0;
                        uStack_14 = param_1 + 0x18;
                        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                            iStack_10 = iStack_10 + *(uStack_14 + 4);
                            uStack_14 = uStack_14 + *(uStack_14 + 4);
                        }
                        iVar3 = fcn.000004ce();
                        iVar3 = (**(iVar3 + 0x30))(0xffd10d34,0x5000001a,&iStack_10,param_1 + 0x18);
                        goto code_r0x0000030e;
                    }
                }
            }
            else {
code_r0x00000312:
                iVar3 = -0x7ffffff2;
            }
        } while (iVar3 == 0);
    }
    return iVar3;
}


