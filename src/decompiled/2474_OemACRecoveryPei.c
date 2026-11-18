// decompiled by r2ghidra: 2474_OemACRecoveryPei.te
// functions: 4

/* entry0 @ 0x179 */

uint entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x24))(param_2,0xffd52c00);
    return 0;
}


/* fcn.0000024e @ 0x24e */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.0000024e(uint param_1)

{
    ulong uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.00000285(param_1,param_1,param_1,param_1);
    fcn.00000205(uVar1);
    return 500;
}


/* fcn.00000285 @ 0x285 */

ulong fcn.00000285(void)

{
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    return 0x6aadc2d4;
}


/* fcn.00000205 @ 0x205 */

void __fastcall fcn.00000205(uint32_t param_1)

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


