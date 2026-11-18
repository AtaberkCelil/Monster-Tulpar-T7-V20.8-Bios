// decompiled by r2ghidra: 0942_RstUefiDriverSupport.pe32
// functions: 5

/* entry0 @ 0x102dc */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10938 = *(arg2 + 0x60);
    *0x10940 = *(arg2 + 0x58);
    *0x10930 = arg2;
    fcn.000105c4(arg1,arg2);
    return;
}


/* fcn.000105c4 @ 0x105c4 */

int64_t fcn.000105c4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    uint32_t var_78h;
    int64_t var_500h;
    uint32_t var_58eh;
    int64_t var_d40h;
    int64_t var_d48h;
    ulong uStack_df8;
    uchar auStack_df0 [8];
    uchar auStack_de8 [64];
    uchar auStack_da8 [248];
    char cStack_cb0;
    uchar auStack_828 [142];
    char cStack_79a;
    int64_t var_80h;
    
    aiStackX_10[1] = 0x578;
    iStackX_8 = arg1;
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x10940 + 0x48))(L"SaSetup",0x10800,aiStackX_10,aiStackX_10 + 1,auStack_da8);
    if (-1 < iVar1) {
        if (cStack_cb0 != '\0') {
            fcn.0001047c(auStack_da8);
        }
        aiStackX_10[2] = 0x40;
        (**(*0x10940 + 0x48))(L"IntelVmdOsVariable",0x107c0,0,aiStackX_10 + 2,auStack_de8);
        fcn.00010260(auStack_de8,0x40);
        (**(*0x10940 + 0x58))(L"IntelVmdOsVariable",0x107c0,7,0x40,auStack_de8);
        aiStackX_10[1] = 0x80d;
        iVar1 = (**(*0x10940 + 0x48))(L"PchSetup",0x107f0,&iStackX_8,aiStackX_10 + 1,auStack_828);
        if (-1 < iVar1) {
            (**(*0x10938 + 0x50))(0x200,8,0x10308,0,&uStack_df8);
            (**(*0x10938 + 0xa8))(0x107a0,uStack_df8,auStack_df0);
            aiStackX_10[2] = 0;
            if ((cStack_79a == '\0') && (iVar1 = (**(*0x10938 + 0x80))(aiStackX_10 + 2,0x107e0,0,0), iVar1 < 0)) {
                return iVar1;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 1312 named .text
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.0001047c @ 0x1047c */

int64_t fcn.0001047c(int64_t arg1)

{
    int64_t iVar1;
    uint uStackX_8;
    uint32_t uStackX_c;
    ulong uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    
    fcn.00010260(&uStackX_8,8);
    uStackX_8 = 1;
    uStackX_10 = 8;
    uStackX_c = ((((((*(arg1 + 0x185) & 1) * 2 | *(arg1 + 0x184) & 1) * 2 | *(arg1 + 0x183) & 1) * 2 |
                  *(arg1 + 0x181) & 1) * 2 | *(arg1 + 0x182) & 1) * 2 | *(arg1 + 0x180) & 1) * 2 | *(arg1 + 0x17f) & 1 |
                uStackX_c & 0xffffff80;
    iVar1 = (**(*0x10940 + 0x48))(L"IntelRstFeatures",0x10780,0,&uStackX_10,&var_20h);
    if (((iVar1 == -0x7ffffffffffffff2) || (iVar1 = fcn.00010280(&uStackX_8,&var_20h,8), iVar1 != 0)) &&
       (iVar1 = (**(*0x10940 + 0x58))(L"IntelRstFeatures",0x10780,7,8,&uStackX_8), iVar1 < 0)) {
        return iVar1;
    }
    iVar1 = (**(*0x10938 + 0x140))(0x10790,0,&var_28h);
    if ((-1 < iVar1) && (iVar1 = (**var_28h)(var_28h,L"IntelRstFeatures",0x10780), -1 < iVar1)) {
        iVar1 = 0;
    }
    return iVar1;
}


