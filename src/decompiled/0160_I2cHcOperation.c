// decompiled by r2ghidra: 0160_I2cHcOperation.pe32
// functions: 16

/* entry0 @ 0x10304 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010318(arg1,in_RDX);
    fcn.000103f4(arg1,in_RDX);
    return;
}


/* fcn.00010318 @ 0x10318 */

ulong fcn.00010318(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x10d60 = *(arg1 + 0x60);
    *0x10d58 = arg1;
    fcn.00010bf0();
    puVar4 = fcn.00010bf0();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001036c:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102c0(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102d0();
                }
                fcn.000102c0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
code_r0x000103d5:
                uVar7 = 0;
                if (*(*0x10d58 + 0x68) != 0) {
                    piVar8 = *(*0x10d58 + 0x70);
                    do {
                        if ((*0x10c50 == *piVar8) && (*0x10c58 == piVar8[1])) {
                            *0x10d70 = (*(*0x10d58 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x10d58 + 0x68));
                }
                *0x10d70 = 0;
                return 0x800000000000000e;
            }
            if ((*0x10d20 == *(puVar4 + 4)) && (*0x10d28 == *(puVar4 + 8))) goto code_r0x000103d5;
        }
        else if (uVar1 == 4) goto code_r0x0001036c;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000103f4 @ 0x103f4 */

uint64_t fcn.000103f4(int64_t arg1,int64_t arg2)

{
    uint *arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t arg2_00;
    uint64_t uVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    arg1_01 = fcn.00010b58(arg1,arg2);
    uVar2 = 0;
    iVar1 = 0;
    if (arg1_01 != 0) {
        iVar1 = fcn.000102a0(arg1_01,0x25e);
    }
    *0x10d50 = iVar1;
    if (iVar1 == 0) {
        uVar2 = 0x8000000000000009;
    }
    else {
        arg2_00 = uVar2;
        uVar3 = uVar2;
        do {
            arg1_00 = uVar3 + *0x10d50;
            *arg1_00 = 0x63326970;
            arg1_00[1] = 2;
            *(arg1_00 + 0xc) = arg2_00;
            *(arg1_00 + 2) = 0;
            *(arg1_00 + 0x35) = 0x10900;
            *(arg1_00 + 0x3d) = 0x109d8;
            *(arg1_00 + 0x45) = 0x10a20;
            *(arg1_00 + 0x4d) = 0x10938;
            *(arg1_00 + 0x55) = 0x10ac4;
            *(arg1_00 + 0x5d) = 0x10af8;
            *(arg1_00 + 0x31) = 2;
            iVar1 = fcn.00010568(arg1_00,arg2_00);
            if (-1 < iVar1) {
                (**(*0x10d60 + 0x148))(*0x10d50 + 8 + uVar3,0x10c20,*0x10d50 + 0x31 + uVar3,0);
            }
            arg2_00 = arg2_00 + 1;
            uVar3 = uVar3 + 0x65;
        } while (uVar3 < 0x25e);
        (**(*0x10d60 + 0x50))(0x200,8,0x10684,0,&iStackX_10);
        (**(*0x10d60 + 0xa8))(0x10c30,iStackX_10,&iStackX_8);
        (**(*0x10d60 + 0x68))(iStackX_10);
    }
    return uVar2;
}


/* fcn.00010bf0 @ 0x10bf0 */

int64_t fcn.00010bf0(void)

{
    if (*0x10d68 == 0) {
        fcn.00010b90(0x10c40,0x10d68);
    }
    return *0x10d68;
}


/* fcn.00010b90 @ 0x10b90 */

ulong fcn.00010b90(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10d58;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

{
    uint8_t in_CF;
    uint8_t in_PF;
    uint8_t in_AF;
    uint8_t in_ZF;
    uint8_t in_SF;
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t in_OF;
    uint8_t in_NT;
    uint8_t in_AC;
    uint8_t in_VIF;
    uint8_t in_VIP;
    uint8_t in_ID;
    
    return (in_NT & 1) * 0x4000 | (in_OF & 1) * 0x800 | (in_IF & 1) * 0x200 | (in_TF & 1) * 0x100 | (in_SF & 1) * 0x80 |
           (in_ZF & 1) * 0x40 | (in_AF & 1) * 0x10 | (in_PF & 1) * 4 | in_CF & 1 | (in_ID & 1) * 0x200000 |
           (in_VIP & 1) * 0x100000 | (in_VIF & 1) * 0x80000 | (in_AC & 1) * 0x40000;
}


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

uint64_t fcn.000102c0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102d2 @ 0x102d2 */

void fcn.000102d2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00010b58 @ 0x10b58 */

int64_t fcn.00010b58(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10d60 + 0x40))(4,0x25e,aiStackX_10);
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


/* fcn.00010568 @ 0x10568 */

ulong fcn.00010568(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t noname_0;
    int64_t iVar2;
    bool bVar3;
    
    *(arg1 + 0x18) = 1;
    iVar2 = arg2 * 0x20;
    iVar2 = ((*(iVar2 + 0x10c68) << 5 | *(iVar2 + 0x10c70) & 0x1f) << 3 | *(iVar2 + 0x10c78) & 7) * 0x1000;
    if (*(iVar2 + 0xc0000000) == -1) {
        uVar1 = 0x8000000000000007;
    }
    else {
        noname_0 = *(iVar2 + 0xc0000010) & 0xffffffffffffff06;
        *(arg1 + 0x10) = *(iVar2 + 0xc0000010) & 0xfffff000;
        bVar3 = noname_0 == '\x04';
        if (bVar3) {
            noname_0 = *(iVar2 + 0xc0000014) << 0x20;
            *(arg1 + 0x10) = *(arg1 + 0x10) + noname_0;
        }
        if (*(arg1 + 0x10) == 0) {
            uVar1 = fcn.00010b1c(noname_0,arg2);
            *(iVar2 + 0xc0000010) = uVar1 & 0xfffff000;
            if (bVar3) {
                *(iVar2 + 0xc0000014) = uVar1 >> 0x20;
            }
            *(arg1 + 0x10) = uVar1;
        }
        *(iVar2 + 0xc0000004) = 6;
        *(arg1 + 0x20) = *(arg1 + 0x10);
        uVar1 = 0;
        *(arg1 + 0x28) = arg2;
    }
    return uVar1;
}


/* fcn.00010b1c @ 0x10b1c */

int64_t fcn.00010b1c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x10d60 + 0x28))(0,4,1,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2496 named .text
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


/* fcn.00010700 @ 0x10700 */

ulong fcn.00010700(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    bool bVar7;
    uint16_t in_stack_00000028;
    uchar *in_stack_00000030;
    
    uVar5 = arg3 & 0xffff;
    if (arg3 == 0) {
        bVar7 = in_stack_00000028 == 0;
    }
    else {
        bVar7 = arg4 == 0;
    }
    if ((!bVar7) && ((in_stack_00000028 == 0 || (in_stack_00000030 != NULL)))) {
        if ((*arg1 != -1) && (*arg1 != 0)) {
            *(arg1 + 0x6c) = 0;
            *(arg1 + 0x7c) = 0x2c002c;
            *(arg1 + 0x1c) = 0x6e;
            *(arg1 + 0x20) = 0xcf;
            *(arg1 + 4) = arg2 & 0xff;
            *arg1 = 0x65;
            *(arg1 + 0x6c) = 1;
            iVar2 = fcn.000102c0(1,arg2);
            do {
                uVar6 = in_stack_00000028;
                if ((*(arg1 + 0x9c) & 1) != 0) {
                    while( true ) {
                        if ((*(arg1 + 0x2c) & 0x40) != 0) {
                            *(arg1 + 0x6c) = *(arg1 + 0x6c) & 0xfffffffe;
                            do {
                            } while ((*(arg1 + 0x9c) & 1) != 0);
                            return 0x8000000000000007;
                        }
                        if ((*(arg1 + 0x70) & 2) != 0) {
                            uVar4 = uVar5;
                            if (uVar4 < 2) {
                                if (uVar4 == 1) {
                                    if (uVar6 == 0) {
                                        uVar5 = 0;
                                        *(arg1 + 0x10) = *arg4 | 0x200;
                                        arg4 = arg4 + 1;
                                    }
                                    else {
                                        *(arg1 + 0x10) = *arg4;
                                        arg4 = arg4 + 1;
                                        uVar5 = 0;
                                    }
                                }
                                else if (uVar6 < 2) {
                                    if (uVar6 == 1) {
                                        *(arg1 + 0x10) = 0x300;
                                        uVar6 = 0;
                                    }
                                }
                                else {
                                    *(arg1 + 0x10) = 0x100;
                                    uVar6 = uVar6 - 1;
                                }
                            }
                            else {
                                uVar1 = *arg4;
                                arg4 = arg4 + 1;
                                uVar5 = uVar4 - 1;
                                *(arg1 + 0x10) = uVar1;
                            }
                        }
                        if ((in_stack_00000028 != 0) && ((*(arg1 + 0x70) & 8) != 0)) {
                            *in_stack_00000030 = *(arg1 + 0x10);
                            in_stack_00000030 = in_stack_00000030 + 1;
                            in_stack_00000028 = in_stack_00000028 - 1;
                        }
                        if (((uVar5 == 0) && (in_stack_00000028 == 0)) && ((*(arg1 + 0x70) & 1) == 0)) break;
                        uVar3 = fcn.000102c0(0xffff,1);
                        if (iVar2 + 1600000000U < uVar3) {
                            *(arg1 + 0x6c) = *(arg1 + 0x6c) & 0xfffffffe;
                            do {
                            } while ((*(arg1 + 0x9c) & 1) != 0);
                            return 0x8000000000000012;
                        }
                    }
                    *(arg1 + 0x6c) = *(arg1 + 0x6c) & 0xfffffffe;
                    do {
                    } while ((*(arg1 + 0x9c) & 1) != 0);
                    return 0;
                }
                uVar3 = fcn.000102c0(*(arg1 + 0x9c),1);
            } while (uVar3 <= iVar2 + 1600000000U);
            return 0x8000000000000012;
        }
        return 0x8000000000000007;
    }
    return 0x8000000000000002;
}


