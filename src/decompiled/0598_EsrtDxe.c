// decompiled by r2ghidra: 0598_EsrtDxe.pe32
// functions: 12

/* entry0 @ 0x102e0 */

ulong entry0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    *0x11530 = *(arg1 + 0x58);
    *0x11528 = *(arg1 + 0x60);
    uVar1 = 0;
    *0x11538 = 0;
    if (*(arg1 + 0x68) != 0) {
        piVar2 = *(arg1 + 0x70);
        do {
            if ((*0x11470 == *piVar2) && (*0x11478 == piVar2[1])) {
                *0x11538 = (*(arg1 + 0x70))[uVar1 * 3 + 2];
                break;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(arg1 + 0x68));
    }
    *0x11560 = 1;
    *0x11550 = 8;
    *0x11568 = 8;
    *0x11578 = 1;
    *0x11558 = 4;
    *0x11570 = 4;
    *0x11520 = arg1;
    (**(*0x11528 + 0x148))(0x11540,0x11450,0x11490,0);
    (**(*0x11528 + 0x170))(0x200,8,0x10b48,0,0x11420,0x11548);
    return 0;
}


/* fcn.0001130c @ 0x1130c */

ulong fcn.0001130c(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(puVar2 + 2) == 2) {
        uVar1 = 0x800000000000000f;
    }
    else {
        uVar1 = (**(*0x11528 + 0x18))(*puVar2);
        puVar2[1] = uVar1;
        uVar1 = 0;
        *(puVar2 + 2) = 2;
    }
    return uVar1;
}


/* fcn.00010d38 @ 0x10d38 */

int64_t fcn.00010d38(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    uint64_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t *apiStackX_10 [2];
    uint64_t uStackX_20;
    
    apiStackX_10[0] = NULL;
    arg1_00 = 0x114c0;
    if (CONCAT44(in_register_00000014,arg2) != 1) {
        arg1_00 = 0x114d0;
    }
    iVar2 = fcn.00011348(arg1_00,CONCAT44(in_register_00000014,arg2),apiStackX_10,&uStackX_20);
    piVar1 = apiStackX_10[0];
    if (-1 < iVar2) {
        uVar4 = uStackX_20 / 0x28;
        if (uStackX_20 == uVar4 * 0x28) {
            uVar3 = 0;
            iVar2 = -0x7ffffffffffffff2;
            if (uVar4 != 0) {
                piVar5 = apiStackX_10[0];
                do {
                    if ((*arg1 == *piVar5) && (*(arg1 + 8) == piVar5[1])) {
                        if (arg3 != apiStackX_10[0] + uVar3 * 5) {
                            section..text(arg3,apiStackX_10[0] + uVar3 * 5,0x28);
                        }
                        iVar2 = 0;
                        break;
                    }
                    uVar3 = uVar3 + 1;
                    piVar5 = piVar5 + 5;
                } while (uVar3 < uVar4);
            }
        }
        else {
            iVar2 = -0x7fffffffffffffeb;
        }
    }
    if (piVar1 != NULL) {
        (**(*0x11528 + 0x48))(piVar1);
    }
    return iVar2;
}


/* fcn.00011108 @ 0x11108 */

int64_t fcn.00011108(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t arg1_00;
    uint64_t uStackX_10;
    int64_t *piStackX_18;
    
    uVar5 = 0;
    piStackX_18 = NULL;
    arg1_00 = 0x114c0;
    if (CONCAT44(in_register_00000014,arg2) != 1) {
        arg1_00 = 0x114d0;
    }
    iVar2 = fcn.00011348(arg1_00,CONCAT44(in_register_00000014,arg2),&piStackX_18,&uStackX_10);
    piVar1 = piStackX_18;
    if (piStackX_18 == NULL) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        if (-1 < iVar2) {
            uVar4 = uStackX_10 / 0x28;
            if (uStackX_10 == uVar4 * 0x28) {
                iVar2 = -0x7ffffffffffffff2;
                if (uVar4 != 0) {
                    piVar3 = piStackX_18;
                    do {
                        if ((*arg1 == *piVar3) && (*(arg1 + 8) == piVar3[1])) {
                            if (piStackX_18 + uVar5 * 5 != arg1) {
                                section..text(piStackX_18 + uVar5 * 5,arg1,0x28);
                            }
                            iVar2 = (**(*0x11530 + 0x58))(arg1_00,0x11480,3,uStackX_10,piVar1);
                            break;
                        }
                        uVar5 = uVar5 + 1;
                        piVar3 = piVar3 + 5;
                    } while (uVar5 < uVar4);
                }
            }
            else {
                (**(*0x11530 + 0x58))(arg1_00,0x11480,3,0,piStackX_18);
                iVar2 = -0x7ffffffffffffff2;
            }
        }
        (**(*0x11528 + 0x48))(piVar1);
    }
    return iVar2;
}


/* fcn.00010fcc @ 0x10fcc */

int64_t fcn.00010fcc(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t *piStackX_10;
    uint64_t uStackX_18;
    
    piStackX_10 = NULL;
    iVar2 = fcn.00011348(0x114d0,arg2,&piStackX_10,&uStackX_18);
    piVar1 = piStackX_10;
    if (-1 < iVar2) {
        if (piStackX_10 == NULL) {
            return -0x7ffffffffffffff7;
        }
        uVar4 = uStackX_18 / 0x28;
        if (uStackX_18 == uVar4 * 0x28) {
            uVar3 = 0;
            iVar2 = -0x7ffffffffffffff2;
            if (uVar4 != 0) {
                piVar5 = piStackX_10;
                do {
                    if ((*arg1 == *piVar5) && (*(arg1 + 8) == piVar5[1])) {
                        if (uVar3 < uVar4 - 1) {
                            iVar2 = (uVar4 - uVar3) * 0x28 + -0x28;
                            piVar5 = piStackX_10 + uVar3 * 5;
                            if ((iVar2 != 0) && (piVar5 != piVar5 + 5)) {
                                section..text(piVar5,piVar5 + 5,iVar2);
                            }
                        }
                        iVar2 = (uVar4 - 1) * 0x28;
                        goto code_r0x000110bb;
                    }
                    uVar3 = uVar3 + 1;
                    piVar5 = piVar5 + 5;
                } while (uVar3 < uVar4);
            }
        }
        else {
            iVar2 = 0;
code_r0x000110bb:
            iVar2 = (**(*0x11530 + 0x58))(L"EsrtNonFmp",0x11480,3,iVar2,piVar1);
        }
    }
    if (piVar1 != NULL) {
        (**(*0x11528 + 0x48))(piVar1);
    }
    return iVar2;
}


/* fcn.00010e24 @ 0x10e24 */

int64_t fcn.00010e24(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint64_t arg3;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    
    iStackX_10 = 0;
    arg1_00 = 0;
    iVar1 = fcn.00011348(0x114d0,arg2,&iStackX_10,&uStackX_18);
    iVar2 = iStackX_10;
    if (iVar1 == -0x7ffffffffffffff2) {
        iVar2 = (**(*0x11530 + 0x58))(L"EsrtNonFmp",0x11480,3,0x28,arg1);
        return iVar2;
    }
    if (iVar1 != 0) goto code_r0x00010f8f;
    if (uStackX_18 == (uStackX_18 / 0x28) * 0x28) {
        arg3 = uStackX_18;
        if (uStackX_18 < 0x500) goto code_r0x00010eff;
    }
    else {
        (**(*0x11530 + 0x58))(L"EsrtNonFmp",0x11480,3,0,iStackX_10);
        (**(*0x11528 + 0x48))(iVar2);
        arg3 = 0;
        iVar2 = 0;
code_r0x00010eff:
        arg1_00 = fcn.000112b0();
        if (arg1_00 != 0) {
            if (((arg3 != 0) && (iVar2 != 0)) && (arg1_00 != iVar2)) {
                section..text(arg1_00,iVar2,arg3);
            }
            if (arg3 + arg1_00 != arg1) {
                section..text(arg3 + arg1_00,arg1,0x28);
            }
            iVar1 = (**(*0x11530 + 0x58))(L"EsrtNonFmp",0x11480,3,arg3 + 0x28,arg1_00);
            goto code_r0x00010f8f;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x00010f8f:
    if (iVar2 != 0) {
        (**(*0x11528 + 0x48))(iVar2);
    }
    if (arg1_00 != 0) {
        (**(*0x11528 + 0x48))(arg1_00);
    }
    return iVar1;
}


/* fcn.000112e0 @ 0x112e0 */

void fcn.000112e0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000112b0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.000112b0 @ 0x112b0 */

ulong fcn.000112b0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11528 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.00011258 @ 0x11258 */

void fcn.00011258(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    uint uVar3;
    
    *(arg1 + 0x14) = *(arg2 + 0x28);
    uVar1 = *(arg2 + 4);
    uVar2 = *(arg2 + 0xc);
    *(arg1 + 0x10) = 2;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x20) = 0;
    *arg1 = uVar1;
    *(arg1 + 8) = uVar2;
    if (1 < arg3) {
        *(arg1 + 0x18) = *(arg2 + 0x58);
    }
    if (2 < arg3) {
        *(arg1 + 0x20) = *(arg2 + 0x5c);
        *(arg1 + 0x24) = *(arg2 + 0x60);
    }
    if ((*(arg2 + 0x40) & 2) != 0) {
        uVar3 = *(arg1 + 0x1c);
        if ((*(arg2 + 0x48) & 2) != 0) {
            uVar3 = 1;
        }
        *(arg1 + 0x1c) = uVar3;
    }
    return;
}


/* fcn.00011348 @ 0x11348 */

int64_t fcn.00011348(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong uStackX_10;
    
    uStackX_10 = 0;
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x11530 + 0x48))(CONCAT44(in_register_0000000c,arg1),0x11480,0,&uStackX_10,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000112b0(0x8000000000000005,uStackX_10);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x11530 + 0x48))(CONCAT44(in_register_0000000c,arg1),0x11480,0,&uStackX_10,iVar1);
            if (iVar1 < 0) {
                (**(*0x11528 + 0x48))(*arg3);
                *arg3 = 0;
            }
            if (arg4 != 0) {
                *arg4 = uStackX_10;
            }
        }
    }
    return iVar1;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 4512 named .text
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


