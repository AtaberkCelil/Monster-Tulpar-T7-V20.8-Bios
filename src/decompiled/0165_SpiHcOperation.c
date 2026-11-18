// decompiled by r2ghidra: 0165_SpiHcOperation.pe32
// functions: 8

/* entry0 @ 0x102c0 */

void entry0(int64_t *noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    *0x10bc0 = *(arg1 + 0x60);
    uVar1 = 0;
    *0x10bc8 = NULL;
    iVar2 = arg1;
    if (*(arg1 + 0x68) != 0) {
        noname_0 = *(arg1 + 0x70);
        do {
            iVar2 = *0x10b58;
            if ((*0x10b50 == *noname_0) && (*0x10b58 == noname_0[1])) {
                noname_0 = (*(arg1 + 0x70))[uVar1 * 3 + 2];
                *0x10bc8 = noname_0;
                break;
            }
            uVar1 = uVar1 + 1;
            noname_0 = noname_0 + 3;
        } while (uVar1 < *(arg1 + 0x68));
    }
    *0x10bb8 = arg1;
    fcn.00010540(noname_0,iVar2);
    return;
}


/* fcn.00010540 @ 0x10540 */

ulong fcn.00010540(int64_t arg1,int64_t arg2)

{
    uint *arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int16_t iVar6;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = fcn.00010a48(arg1,arg2);
    iVar5 = 0;
    iVar2 = 0;
    if (iVar1 != 0) {
        iVar2 = fcn.000102a0(iVar1,0x1b0);
    }
    *0x10bb0 = iVar2;
    if (iVar2 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        iVar1 = 4;
        iVar6 = 0;
        iVar2 = iVar5;
        do {
            arg1_00 = iVar5 + *0x10bb0;
            *arg1_00 = 0x69707367;
            arg1_00[1] = 1;
            *(arg1_00 + 2) = 0;
            *(arg1_00 + 0xb) = 0x106fc;
            *(arg1_00 + 0xd) = 0x10734;
            *(arg1_00 + 0xf) = 0x10814;
            *(arg1_00 + 0x11) = 0x10834;
            *(arg1_00 + 0x13) = 0x1085c;
            *(arg1_00 + 0x15) = 0x108cc;
            *(arg1_00 + 0x17) = 0x10938;
            *(arg1_00 + 0x19) = 0x1097c;
            arg1_00[10] = 1;
            iVar4 = fcn.00010330(arg1_00,iVar2);
            if ((-1 < iVar4) &&
               (iVar4 = (**(*0x10bc0 + 0x148))(*0x10bb0 + 8 + iVar5,0x10b60,*0x10bb0 + 0x28 + iVar5,0), -1 < iVar4))
            {
                iVar6 = iVar6 + 1;
            }
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 0x6c;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (iVar6 == 0) {
            (**(*0x10bc0 + 0x48))(*0x10bb0);
            uVar3 = 0xa000000000000001;
            *0x10bb0 = 0;
        }
        else {
            (**(*0x10bc0 + 0x50))(0x200,8,0x104c4,0,&iStackX_10);
            (**(*0x10bc0 + 0xa8))(0x10b40,iStackX_10,&iStackX_8);
            (**(*0x10bc0 + 0x68))(iStackX_10);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00010a0c @ 0x10a0c */

int64_t fcn.00010a0c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10bc0 + 0x28))(0,4,1,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* fcn.00010330 @ 0x10330 */

ulong fcn.00010330(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    bool bVar7;
    
    iVar6 = arg2 * 5;
    if (*(iVar6 + 0x10b70) == 0) {
        uVar5 = *(iVar6 + 0x10b73) & 0x1f;
        uVar2 = *(iVar6 + 0x10b72) << 5;
    }
    else {
        uVar5 = (*(iVar6 + 0x10b72) | *(iVar6 + 0x10b70) << 0xc) << 5;
        uVar2 = *(iVar6 + 0x10b73) & 0x1f;
    }
    uVar3 = *(iVar6 + 0x10b74) & 7;
    iVar6 = ((uVar5 | uVar2) << 3 | uVar3) * 0x1000;
    if (*(((uVar5 & 0x20000) << 0xb | ((uVar5 & 0x1ffff | uVar2) << 3 | uVar3) << 0xc) + 0xc0000000) == -1) {
        uVar4 = 0x8000000000000007;
    }
    else {
        uVar2 = iVar6 + 0x10;
        uVar1 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000);
        uVar5 = uVar1 & 0xffffffffffffff06;
        *(arg1 + 0x10) = uVar1 & 0xfffff000;
        bVar7 = uVar5 == '\x04';
        if (bVar7) {
            uVar5 = *((iVar6 + 0x14U >> 4 & 0x10000000 | iVar6 + 0x14U & 0xffffffff) + 0xc0000000) << 0x20;
            *(arg1 + 0x10) = *(arg1 + 0x10) + uVar5;
        }
        if (*(arg1 + 0x10) == 0) {
            uVar4 = fcn.00010a0c(uVar5,0x10b70);
            *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) = uVar4 & 0xfffff000;
            if (bVar7) {
                *((iVar6 + 0x14U >> 4 & 0x10000000 | iVar6 + 0x14U & 0xffffffff) + 0xc0000000) = uVar4 >> 0x20;
            }
            *(arg1 + 0x10) = uVar4;
        }
        uVar4 = 0;
        *((iVar6 + 4U >> 4 & 0x10000000 | iVar6 + 4U & 0xffffffff) + 0xc0000000) = 6;
        *(arg1 + 0x18) = arg2;
    }
    return uVar4;
}


/* fcn.00010a48 @ 0x10a48 */

int64_t fcn.00010a48(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10bc0 + 0x40))(4,0x1b0,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
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
    
    //[00] -r-x section size 2272 named .text
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


/* fcn.00010a80 @ 0x10a80 */

ulong fcn.00010a80(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint32_t uVar5;
    
    uVar2 = 100000;
    uVar5 = 2;
    uVar1 = 100000;
    if (arg1 < 100000) {
        uVar1 = arg1;
    }
    uVar3 = arg1;
    if (1 < uVar1) {
        do {
            for (; (uVar5 <= uVar1 && (uVar1 % uVar5 != 0)); uVar5 = uVar5 + 1) {
            }
            uVar2 = uVar1;
            if (uVar5 < uVar1) {
                uVar2 = uVar5;
            }
            uVar3 = arg1 / uVar2;
            uVar2 = 100000 / uVar2;
        } while (((0x7fff < uVar3) || (0x7fff < uVar2)) && (uVar5 = uVar5 + 1, uVar5 <= uVar1));
    }
    if ((uVar3 < 0x8000) && (uVar2 < 0x8000)) {
        *arg3 = uVar2;
        uVar4 = 0;
        *arg2 = uVar3;
    }
    else {
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


