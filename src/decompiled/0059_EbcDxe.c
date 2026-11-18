// decompiled by r2ghidra: 0059_EbcDxe.pe32
// functions: 31

/* entry0 @ 0x10488 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x13220 = *(arg2 + 0x60);
    *0x13218 = arg2;
    fcn.000104e4(arg1,arg2);
    return;
}


/* fcn.000104e4 @ 0x104e4 */

int64_t fcn.000104e4(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    ulong *puVar3;
    int64_t iVar4;
    uint *noname_0;
    uint64_t uVar5;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    ulong uStackX_20;
    uint32_t var_48h;
    int64_t var_50h;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    puVar3 = fcn.00012e00(arg1,0x20);
    if (puVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        *0x13268 = 0;
        *puVar3 = 0x1086c;
        puVar3[1] = 0x10b18;
        puVar3[2] = 0x10bf4;
        bVar1 = false;
        puVar3[3] = 0x10c00;
        iStackX_10 = 0;
        iVar4 = (**(*0x13220 + 0x138))(2,0x12e50,0,&uStackX_18,&iStackX_10);
        if ((iVar4 == 0) && (uVar5 = 0, bVar2 = false, uStackX_18 != 0)) {
            do {
                bVar1 = bVar2;
                iVar4 = (**(*0x13220 + 0x98))(*(iStackX_10 + uVar5 * 8),0x12e50,&uStackX_20);
                if ((iVar4 == 0) &&
                   (iVar4 = (**(*0x13220 + 0x88))(*(iStackX_10 + uVar5 * 8),0x12e50,uStackX_20,puVar3), iVar4 == 0))
                {
                    bVar1 = true;
                }
                uVar5 = uVar5 + 1;
                bVar2 = bVar1;
            } while (uVar5 < uStackX_18);
        }
        if (iStackX_10 != 0) {
            (**(*0x13220 + 0x48))();
            iStackX_10 = 0;
        }
        if ((!bVar1) && (iVar4 = (**(*0x13220 + 0x148))(&iStackX_8,0x12e50,puVar3,0x12e40,0x12e70,0), iVar4 < 0))
        {
            (**(*0x13220 + 0x48))(puVar3);
            return iVar4;
        }
        *0x13208 = 0;
        do {
            iVar4 = fcn.00012e00();
            uVar5 = *0x13208;
            *(*0x13208 * 8 + 0x13240) = 0;
            *(uVar5 * 8 + 0x13280) = iVar4;
            if (iVar4 == 0) break;
            uVar5 = uVar5 + 1;
            *0x13208 = uVar5;
        } while (uVar5 < 4);
        if (uVar5 != 0) {
            noname_0 = fcn.00012e00(uVar5,0x28);
            if (noname_0 != NULL) {
                *noname_0 = 0xebc;
                *(noname_0 + 2) = 0x10888;
                *(noname_0 + 4) = 0x10890;
                *(noname_0 + 6) = fcn.000108c4;
                *(noname_0 + 8) = 0x10900;
                iVar4 = (**(*0x13220 + 0x80))(&iStackX_8,str._fYU_o,0,noname_0);
                if (-1 < iVar4) {
                    iVar4 = 0;
                    do {
                        fcn.000108c4(noname_0,0,0x109fc,iVar4);
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < 0xb);
                    iVar4 = (**(*0x13220 + 0x50))(0x80000200,0x10,0x10a20,0x131a0,0x13260);
                    if (-1 < iVar4) {
                        (**(*0x13220 + 0x58))(*0x13260,1,10000000);
                    }
                    return 0;
                }
                (**(*0x13220 + 0x48))(noname_0);
            }
            uVar5 = 0;
            if (*0x13208 != 0) {
                do {
                    (**(*0x13220 + 0x48))(*(uVar5 * 8 + 0x13280));
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *0x13208);
            }
        }
        iStackX_10 = 0;
        iVar4 = (**(*0x13220 + 0x138))(2,0x12e50,0,&uStackX_18,&iStackX_10);
        if ((iVar4 == 0) && (uVar5 = 0, uStackX_18 != 0)) {
            do {
                iVar4 = (**(*0x13220 + 0x98))(*(iStackX_10 + uVar5 * 8),0x12e50,&uStackX_20);
                if (iVar4 == 0) {
                    (**(*0x13220 + 0x90))(*(iStackX_10 + uVar5 * 8),0x12e50,uStackX_20);
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStackX_18);
        }
        if (iStackX_10 != 0) {
            (**(*0x13220 + 0x48))();
            iStackX_10 = 0;
        }
        (**(*0x13220 + 0x48))(puVar3);
    }
    return iVar4;
}


/* fcn.00012de8 @ 0x12de8 */

ulong * fcn.00012de8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((arg3 != 0) && (puVar2 != arg2)) {
        puVar3 = arg2 + -1 + arg3;
        if ((arg2 < puVar2) && (puVar2 <= puVar3)) {
            puVar4 = puVar2 + arg3 + -1;
            uVar6 = 1;
            uVar5 = arg3;
        }
        else {
            uVar5 = arg3 & 7;
            puVar3 = arg2;
            puVar4 = puVar2;
            for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
            }
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + uVar6 * -2 + 1;
            puVar4 = puVar4 + uVar6 * -2 + 1;
        }
        return puVar2;
    }
    return puVar2;
}


/* fcn.000127fc @ 0x127fc */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.000127fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t var_27h;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    ulong in_stack_00000038;
    ulong in_stack_00000040;
    ulong in_stack_00000048;
    ulong in_stack_00000050;
    ulong in_stack_00000058;
    ulong in_stack_00000060;
    ulong in_stack_00000068;
    ulong in_stack_00000070;
    ulong in_stack_00000078;
    ulong in_stack_00000080;
    ulong in_stack_00000088;
    ulong *apuStack_e8 [7];
    int64_t iStack_b0;
    int64_t iStack_a0;
    int64_t iStack_80;
    ulong *puStack_78;
    uchar auStack_70 [7];
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t var_9h;
    int64_t var_1h;
    
    fcn.00010350(apuStack_e8,0xd0);
    iStack_a0 = arg1;
    iVar1 = fcn.00010c1c(-1,&iStack_28,&iStackX_8);
    if (-1 < iVar1) {
        iStack_20 = iStack_28 + 0x1000;
        iStack_80 = iStack_28 + 0xff000;
        puStack_78 = iStack_28 + 0xfeff8U & 0xfffffffffffffff8;
        *puStack_78 = 0xdeadbeef;
        puStack_78[-1] = in_stack_00000088;
        puStack_78[-2] = in_stack_00000080;
        puStack_78[-3] = in_stack_00000078;
        puStack_78[-4] = in_stack_00000070;
        puStack_78[-5] = in_stack_00000068;
        puStack_78[-6] = in_stack_00000060;
        puStack_78[-7] = in_stack_00000058;
        puStack_78[-8] = in_stack_00000050;
        puStack_78[-9] = in_stack_00000048;
        puStack_78[-10] = in_stack_00000040;
        puStack_78[-0xb] = in_stack_00000038;
        puStack_78[-0xc] = in_stack_00000030;
        puStack_78[-0xd] = in_stack_00000028;
        puStack_78[-0xe] = arg4;
        puStack_78[-0xf] = arg3;
        puStack_78[-0x10] = arg2;
        puStack_78[-0x11] = 0;
        apuStack_e8[0] = puStack_78 + -0x12;
        *apuStack_e8[0] = 0x1234567887654321;
        _auStack_70 = apuStack_e8[0];
        unique0x100001b3 = puStack_78;
        fcn.00010ccc(apuStack_e8);
        *(iStackX_8 * 8 + 0x13240) = 0;
        iVar1 = iStack_b0;
    }
    return iVar1;
}


/* fcn.00010350 @ 0x10350 */

int64_t fcn.00010350(int64_t arg1,int64_t arg2)

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


/* fcn.00010c1c @ 0x10c1c */

ulong fcn.00010c1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    
    uVar1 = (**(*0x13220 + 0x18))(0x1f);
    uVar2 = 0;
    if (*0x13208 != 0) {
        do {
            if (*(uVar2 * 8 + 0x13240) == 0) {
                *(uVar2 * 8 + 0x13240) = arg1;
                break;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *0x13208);
    }
    (**(*0x13220 + 0x20))(uVar1);
    if (uVar2 == *0x13208) {
        uVar1 = 0x8000000000000009;
    }
    else {
        *arg2 = *(uVar2 * 8 + 0x13280);
        uVar1 = 0;
        *arg3 = uVar2;
    }
    return uVar1;
}


/* fcn.00010ccc @ 0x10ccc */

ulong fcn.00010ccc(int64_t arg1)

{
    code *pcVar1;
    bool bVar2;
    
    bVar2 = **(arg1 + 0x80) != 0xdeadbeef;
    *0x131a0 = arg1;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 0xa8) = *arg1 + 8;
    *(arg1 + 0xb0) = *(arg1 + 0x48);
    do {
        pcVar1 = *((**(arg1 + 0x48) & 0x3f) * 8 + 0x12ec0);
        if (pcVar1 == NULL) {
            fcn.00010904(5,0x80000000,arg1);
            *0x131a0 = 0;
            return 0x8000000000000003;
        }
        (*pcVar1)(arg1);
        if ((*(arg1 + 0x40) >> 1 & 1) != 0) {
            fcn.00010904(10,0,arg1);
        }
        if ((!bVar2) && ((**(arg1 + 0x80) != 0xdeadbeef || (*arg1 <= *(arg1 + 200))))) {
            fcn.00010904(6,0x80000000,arg1);
            bVar2 = true;
        }
    } while ((*(arg1 + 0x5c) & 1) == 0);
    *0x131a0 = 0;
    return 0;
}


/* fcn.00012a3c @ 0x12a3c */

int64_t fcn.00012a3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong *apuStack_d8 [7];
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_70;
    uint64_t uStack_68;
    ulong *puStack_60;
    ulong *puStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iStack_18;
    int64_t iStack_10;
    
    fcn.00010350(apuStack_d8,0xd0);
    iStack_90 = arg1;
    iStack_50 = arg2;
    iStack_48 = arg3;
    iVar1 = fcn.00010c1c(arg2,&iStack_18,&iStackX_8);
    if (-1 < iVar1) {
        iStack_10 = iStack_18 + 0x1000;
        iStack_70 = iStack_18 + 0xff000;
        puStack_58 = iStack_18 + 0xfeff8;
        *puStack_58 = 0xdeadbeef;
        uStack_68 = puStack_58 & 0xfffffffffffffff8;
        *(uStack_68 - 8) = arg3;
        *(uStack_68 - 0x10) = arg2;
        *(uStack_68 - 0x18) = 0;
        apuStack_d8[0] = uStack_68 - 0x20;
        *apuStack_d8[0] = 0x1234567887654321;
        puStack_60 = apuStack_d8[0];
        fcn.00010ccc(apuStack_d8);
        *(iStackX_8 * 8 + 0x13240) = 0;
        iVar1 = iStack_a0;
    }
    return iVar1;
}


/* fcn.00012e00 @ 0x12e00 */

ulong fcn.00012e00(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13220 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000108c4 @ 0x108c4 */

ulong fcn.000108c4(ulong noname_0,ulong noname_1,int64_t arg1,uint32_t arg2)

{
    uint in_R9;
    
    if (10 < CONCAT44(in_R9,arg2)) {
        return 0x8000000000000002;
    }
    if (*(CONCAT44(in_R9,arg2) * 8 + 0x131b0) == 0) {
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg1 != 0) {
        return 0x8000000000000014;
    }
    *(CONCAT44(in_R9,arg2) * 8 + 0x131b0) = arg1;
    return 0;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.00010a38 @ 0x10a38 */

ulong fcn.00010a38(int64_t arg1)

{
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    if (*0x13210 != NULL) {
        var_60h = *arg1;
        var_18h = 0;
        var_58h = *(arg1 + 8);
        var_50h = *(arg1 + 0x10);
        var_48h = *(arg1 + 0x18);
        var_40h = *(arg1 + 0x20);
        var_38h = *(arg1 + 0x28);
        var_30h = *(arg1 + 0x30);
        var_28h = *(arg1 + 0x38);
        var_10h = *(arg1 + 0x48);
        var_20h = *(arg1 + 0x40);
        (**0x13210)(&var_60h);
        *arg1 = var_60h;
        *(arg1 + 8) = var_58h;
        *(arg1 + 0x10) = var_50h;
        *(arg1 + 0x18) = var_48h;
        *(arg1 + 0x20) = var_40h;
        *(arg1 + 0x28) = var_38h;
        *(arg1 + 0x30) = var_30h;
        *(arg1 + 0x38) = var_28h;
        *(arg1 + 0x48) = var_10h;
        *(arg1 + 0x40) = var_20h;
    }
    return 0;
}


/* fcn.00010904 @ 0x10904 */

ulong fcn.00010904(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    *(arg3 + 0x58) = *(arg3 + 0x58) | arg2;
    *(arg3 + 0x50) = arg1;
    if (arg2 < 0) {
        *(arg3 + 0x5c) = *(arg3 + 0x5c) | 1;
    }
    pcVar1 = *(arg1 * 8 + 0x131b0);
    if (pcVar1 != NULL) {
        var_60h = *arg3;
        var_18h = 0;
        var_58h = *(arg3 + 8);
        var_50h = *(arg3 + 0x10);
        var_48h = *(arg3 + 0x18);
        var_40h = *(arg3 + 0x20);
        var_38h = *(arg3 + 0x28);
        var_30h = *(arg3 + 0x30);
        var_28h = *(arg3 + 0x38);
        var_10h = *(arg3 + 0x48);
        var_20h = *(arg3 + 0x40);
        (*pcVar1)(arg1,&var_60h);
        *arg3 = var_60h;
        *(arg3 + 8) = var_58h;
        *(arg3 + 0x10) = var_50h;
        *(arg3 + 0x18) = var_48h;
        *(arg3 + 0x20) = var_40h;
        *(arg3 + 0x28) = var_38h;
        *(arg3 + 0x30) = var_30h;
        *(arg3 + 0x38) = var_28h;
        *(arg3 + 0x48) = var_10h;
        *(arg3 + 0x40) = var_20h;
    }
    return 0;
}


/* fcn.00012468 @ 0x12468 */

int64_t fcn.00012468(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    if ((*(arg1 + 0x48) + arg2 & 7U) == 0) {
        uVar6 = *((arg2 & 0xffffffffU) + *(arg1 + 0x48));
    }
    else {
        uVar1 = fcn.00012614(arg1,arg2 & 0xffffffffU);
        uVar2 = fcn.00012614(arg1,arg2 + 4);
        uVar6 = CONCAT44(uVar2,uVar1);
    }
    uVar4 = uVar6 >> 0x39 & 0x38;
    uVar5 = -1LL << uVar4;
    iVar3 = ((uVar5 & uVar6 & 0xfffffffffffffff) >> uVar4) + (~uVar5 & uVar6) * 8;
    if (uVar6 < 0) {
        iVar3 = -iVar3;
    }
    return iVar3;
}


/* fcn.00012428 @ 0x12428 */

int fcn.00012428(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int8_t iVar2;
    int iVar3;
    uint32_t uVar4;
    
    uVar1 = fcn.00012614(param_1,param_2);
    iVar2 = (uVar1 >> 0x1c & 7) << 2;
    uVar4 = -1 << iVar2;
    iVar3 = ((uVar4 & uVar1 & 0xfffffff) >> iVar2) + (~uVar4 & uVar1) * 8;
    if (uVar1 < 0) {
        iVar3 = -iVar3;
    }
    return iVar3;
}


/* fcn.00012614 @ 0x12614 */

uint fcn.00012614(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    
    if ((*(arg1 + 0x48) + arg2 & 3U) == 0) {
        uVar3 = *((arg2 & 0xffffffffU) + *(arg1 + 0x48));
    }
    else {
        uVar1 = fcn.000126bc(arg1,arg2 & 0xffffffffU);
        uVar2 = fcn.000126bc(arg1,arg2 + 2);
        uVar3 = CONCAT22(uVar2,uVar1);
    }
    return uVar3;
}


/* fcn.000123cc @ 0x123cc */

int16_t fcn.000123cc(int64_t param_1,int64_t param_2)

{
    int8_t iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    
    uVar2 = fcn.000126bc(param_1,param_2);
    iVar1 = (uVar2 >> 0xc & 7) * '\x02';
    uVar3 = -1 << iVar1;
    iVar4 = ((uVar3 & uVar2 & 0xffff0fff) >> iVar1) + (~uVar3 & uVar2) * 8;
    if (uVar2 < 0) {
        iVar4 = -iVar4;
    }
    return iVar4;
}


/* fcn.000126bc @ 0x126bc */

int16_t fcn.000126bc(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg2 & 0xffffffff;
    if ((arg2 + *(arg1 + 0x48) & 1U) == 0) {
        iVar1 = *(uVar2 + *(arg1 + 0x48));
    }
    else {
        fcn.00010904(7,0x20000000,arg1);
        iVar1 = *(uVar2 + 1 + *(arg1 + 0x48)) * 0x100 + *(uVar2 + *(arg1 + 0x48));
    }
    return iVar1;
}


/* fcn.000127b4 @ 0x127b4 */

ulong fcn.000127b4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    if ((arg2 & 7U) != 0) {
        auStackX_10[0] = 0;
        uVar1 = 0;
        iVar2 = auStackX_10 - arg2;
        do {
            *(arg2 + iVar2) = *arg2;
            arg2 = arg2 + 1;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 8);
        return auStackX_10[0];
    }
    return *arg2;
}


/* fcn.0001277c @ 0x1277c */

ulong fcn.0001277c(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    ulong uVar3;
    
    if ((arg1 & 7U) == 0) {
        uVar3 = *arg1;
    }
    else {
        uVar1 = fcn.0001271c(noname_0,arg1 + 4);
        uVar2 = fcn.0001271c(noname_0,arg1);
        uVar3 = CONCAT44(uVar1,uVar2);
    }
    return uVar3;
}


/* fcn.0001271c @ 0x1271c */

uint fcn.0001271c(ulong noname_0,int64_t arg1)

{
    uint8_t *puVar1;
    int16_t iVar2;
    int16_t iVar3;
    
    if ((arg1 & 3U) == 0) {
        return *arg1;
    }
    if ((arg1 & 1U) == 0) {
        iVar3 = *arg1;
    }
    else {
        iVar3 = *(arg1 + 1) * 0x100 + *arg1;
    }
    puVar1 = arg1 + 2;
    if ((puVar1 & 1) == 0) {
        iVar2 = *puVar1;
    }
    else {
        iVar2 = *(arg1 + 3) * 0x100 + *puVar1;
    }
    return CONCAT22(iVar2,iVar3);
}


/* fcn.00012578 @ 0x12578 */

ulong fcn.00012578(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t noname_0_00;
    
    uVar1 = 0;
    if ((arg1 & 7U) == 0) {
        *arg1 = arg2;
    }
    else {
        noname_0_00 = 2;
        do {
            uVar1 = fcn.000124f4(noname_0_00,arg1,arg2 & 0xffffffff);
            arg2 = arg2 >> 0x20;
            arg1 = arg1 + 4;
            noname_0_00 = noname_0_00 + -1;
        } while (noname_0_00 != 0);
    }
    return uVar1;
}


/* fcn.0001253c @ 0x1253c */

int64_t fcn.0001253c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if ((arg1 & 7U) == 0) {
        *arg1 = arg2;
    }
    else {
        iVar1 = fcn.000124f4(noname_0,arg1,arg2);
        if (iVar1 != 0) {
            return iVar1;
        }
        iVar1 = fcn.000124f4(noname_0,arg1 + 4,arg2 >> 0x20);
        if (iVar1 != 0) {
            return iVar1;
        }
    }
    return 0;
}


/* fcn.000124f4 @ 0x124f4 */

ulong fcn.000124f4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ushort *puVar1;
    
    if ((arg1 & 3U) == 0) {
        *arg1 = arg2;
    }
    else {
        if ((arg1 & 1U) == 0) {
            *arg1 = arg2;
        }
        else {
            *arg1 = arg2;
            *(arg1 + 1) = arg2 >> 8;
        }
        puVar1 = arg1 + 2;
        if ((puVar1 & 1) == 0) {
            *puVar1 = arg2 >> 0x10;
        }
        else {
            *puVar1 = arg2 >> 0x10;
            *(arg1 + 3) = arg2 >> 0x18;
        }
    }
    return 0;
}


/* fcn.00012b50 @ 0x12b50 */

ulong fcn.00012b50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t *piVar4;
    int64_t *piStackX_10;
    
    if ((arg2 & 1U) != 0) {
        return 0x8000000000000002;
    }
    iVar1 = (**(*0x13220 + 0x40))(3,0x21,&piStackX_10);
    if ((iVar1 < 0) || (piStackX_10 == NULL)) {
        return 0x8000000000000009;
    }
    *arg3 = piStackX_10;
    if (piStackX_10 != 0x12e90) {
        fcn.00010370(piStackX_10,0x12e90,0x21);
    }
    iVar1 = 0x19;
    piVar4 = piStackX_10;
    do {
        if (*piVar4 == -0x5050505050505051) {
            *piVar4 = arg2;
        }
        if (*piVar4 == -0x505050505050506) {
            iVar2 = 0x102ca;
            if ((arg4 & 1U) != 0) {
                iVar2 = 0x10329;
            }
            *piVar4 = iVar2;
        }
        piVar4 = piVar4 + 1;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((*0x13268 != NULL) && (iVar1 = (**0x13268)(piStackX_10,0x21), iVar1 < 0)) {
        return 0;
    }
    piVar4 = *0x131a8;
    if (*0x131a8 != NULL) {
        do {
            if (piVar4[1] == arg1) break;
            piVar4 = *piVar4;
        } while (piVar4 != NULL);
        if (piVar4 != NULL) goto code_r0x00012c85;
    }
    piVar4 = fcn.00012e00();
    if (piVar4 == NULL) {
        return 0;
    }
    piVar4[2] = 0;
    *piVar4 = *0x131a8;
    piVar4[1] = arg1;
    *0x131a8 = piVar4;
code_r0x00012c85:
    puVar3 = fcn.00012e00();
    if (puVar3 != NULL) {
        puVar3[1] = piVar4[2];
        *puVar3 = piStackX_10;
        piVar4[2] = puVar3;
    }
    return 0;
}


/* fcn.0001266c @ 0x1266c */

ulong fcn.0001266c(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    ulong uVar3;
    
    if ((*(arg1 + 0x48) + arg2 & 7U) == 0) {
        uVar3 = *((arg2 & 0xffffffffU) + *(arg1 + 0x48));
    }
    else {
        uVar1 = fcn.00012614(arg1,arg2 & 0xffffffffU);
        uVar2 = fcn.00012614(arg1,arg2 + 4);
        uVar3 = CONCAT44(uVar2,uVar1);
    }
    return uVar3;
}


/* fcn.000125b4 @ 0x125b4 */

int16_t fcn.000125b4(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg2 & 0xffffffff;
    if ((arg2 + *(arg1 + 0x48) & 1U) == 0) {
        iVar1 = *(uVar2 + *(arg1 + 0x48));
    }
    else {
        fcn.00010904(7,0x20000000,arg1);
        iVar1 = *(uVar2 + 1 + *(arg1 + 0x48)) * 0x100 + *(uVar2 + *(arg1 + 0x48));
    }
    return iVar1;
}


/* fcn.00012ccc @ 0x12ccc */

void fcn.00012ccc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *arg1_00;
    uint64_t uVar4;
    ulong uStackX_10;
    uint8_t in_stack_00000028;
    ulong auStack_48 [6];
    
    uStackX_10 = 0;
    uVar4 = 0;
    if (auStack_48 != arg2) {
        fcn.00010370(auStack_48,arg2,0x21);
    }
    uVar1 = 0;
    do {
        if (*(uVar1 + 0x12e90) == -0x5050505050505051) {
            *(auStack_48 + uVar1) = 0xafafafafafafafaf;
            uVar4 = uVar1;
        }
        if (*(uVar1 + 0x12e90) == -0x505050505050506) {
            *(auStack_48 + uVar1) = 0xfafafafafafafafa;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x19);
    arg1_00 = auStack_48;
    iVar2 = fcn.000103b0(arg1_00,0x12e90,0x21);
    if (iVar2 == 0) {
        *arg1 = *arg1 + -8;
        fcn.00012578(arg1_00,*arg1,arg4);
        *(arg1 + 0xa8) = *arg1;
        iVar2 = *arg1 + -8;
        *arg1 = iVar2;
        fcn.0001253c(arg1_00,iVar2,in_stack_00000028 + *(arg1 + 0x48));
        if (&uStackX_10 != uVar4 + arg2) {
            fcn.00010370(&uStackX_10,uVar4 + arg2,8);
        }
        *(arg1 + 0x48) = uStackX_10;
    }
    else {
        uVar3 = fcn.00010280(arg2,arg3,arg4);
        *(arg1 + 0x38) = uVar3;
        *(arg1 + 0x48) = *(arg1 + 0x48) + in_stack_00000028;
    }
    return;
}


/* fcn.00010370 @ 0x10370 */

int64_t fcn.00010370(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.000103b0 @ 0x103b0 */

int64_t fcn.000103b0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    uint in_R8;
    uint64_t arg3_00;
    
    //[00] -r-x section size 11200 named .text
    arg3_00 = CONCAT44(in_R8,arg3) - arg2;
    if (arg3_00 < 0x20) {
        arg3_00 = 0x20;
    }
    puVar1 = &stack0xfffffffffffffff0 + -arg3_00 & 0xfffffffffffffff0;
    puVar1[-5] = 0x102ab;
    fcn.00012de8(puVar1,arg2,arg3_00);
    puVar1[-1] = 0x102c4;
    (*arg1)(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    return;
}


