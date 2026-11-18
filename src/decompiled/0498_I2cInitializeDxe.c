// decompiled by r2ghidra: 0498_I2cInitializeDxe.pe32
// functions: 5

/* entry0 @ 0x102c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x107d8 = *(arg2 + 0x60);
    *0x107d0 = arg2;
    fcn.000104bc(arg1,arg2);
    return;
}


/* fcn.000104bc @ 0x104bc */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000104bc(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    ulong uStack_58;
    uchar auStack_50 [16];
    ulong uStack_40;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_8h;
    
    uVar7 = 0;
    uStackX_8 = 0;
    iStackX_10 = 0;
    uStack_58 = 0;
    iVar2 = (**(*0x107d8 + 0x138))(2,0x10740,0,&uStackX_8,&iStackX_10);
    if (-1 < iVar2) {
        uVar6 = uVar7;
        if (uStackX_8 != 0) {
            do {
                iVar2 = (**(*0x107d8 + 0x98))(*(iStackX_10 + uVar6 * 8),0x10740,&iStackX_18);
                if (-1 < iVar2) {
                    (**(iStackX_18 + 0xc))(iStackX_18,&iStackX_20);
                    if (iStackX_20 == 100000) {
                        uVar5 = uVar7;
                    }
                    else if (iStackX_20 == 400000) {
                        uVar5 = 1;
                    }
                    else if (iStackX_20 == 1000000) {
                        uVar5 = 2;
                    }
                    else {
                        uVar5 = 3;
                        if (iStackX_20 != 3400000) {
                            uVar5 = uVar7;
                        }
                    }
                    (**(iStackX_18 + 4))(iStackX_18,auStack_50);
                    iVar2 = fcn.00010704();
                    if ((iVar2 == 0) || (iVar2 = fcn.000102a0(iVar2,0x38), iVar2 == 0)) {
                        iVar3 = -0x7ffffffffffffff7;
code_r0x000106d5:
                        (**(*0x107d8 + 0x48))(iStackX_10);
                        return iVar3;
                    }
                    *0x10790 = uStack_40;
                    *0x10788 = uVar5;
                    if (iVar2 != 0x10770) {
                        section..text(iVar2,0x10770,0x38);
                    }
                    iVar3 = (**(*0x107d8 + 0x80))(iStackX_10 + uVar6 * 8,0x10750,0,iVar2);
                    if (iVar3 < 0) {
                        (**(*0x107d8 + 0x48))(iVar2);
                        goto code_r0x000106d5;
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_8);
        }
        if (iStackX_10 != 0) {
            (**(*0x107d8 + 0x48))();
        }
        iVar2 = fcn.00010704();
        if ((iVar2 == 0) || (puVar4 = fcn.000102a0(iVar2,0x28), puVar4 == NULL)) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            *puVar4 = 0x102e0;
            puVar4[1] = 0x10414;
            puVar4[2] = 0x10478;
            iVar2 = *0x107d8;
            puVar1 = puVar4 + 3;
            *puVar1 = puVar1;
            puVar4[4] = puVar1;
            iVar2 = (**(iVar2 + 0x80))(&uStack_58,0x10760,0,puVar4);
        }
    }
    return iVar2;
}


/* fcn.00010704 @ 0x10704 */

ulong fcn.00010704(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x107d8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1248 named .text
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


