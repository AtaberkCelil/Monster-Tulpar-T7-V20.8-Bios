// decompiled by r2ghidra: 0453_PlatformFirmwareVersionDxe.pe32
// functions: 25

/* entry0 @ 0x10304 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.0001032c(arg1,arg2);
    iVar1 = fcn.000104e8(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00010448(arg1,arg2);
    }
    return iVar1;
}


/* fcn.0001032c @ 0x1032c */

void fcn.0001032c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    int64_t arg1_00;
    
    *0x110f8 = *(arg2 + 0x60);
    *0x110f0 = arg2;
    fcn.000107ac();
    puVar4 = fcn.000107ac();
    arg1_00 = 0xffff;
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010385:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102c0();
                }
                fcn.000102d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
code_r0x000103ee:
                fcn.0001074c(arg1_00);
                (**(*0x110f8 + 0x170))(0x200,8,0x10b54,0,0x10f80,0x11108);
                return;
            }
            if ((*0x110b8 == *(puVar4 + 4)) && (*0x110c0 == *(puVar4 + 8))) goto code_r0x000103ee;
        }
        else if (uVar1 == 4) goto code_r0x00010385;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000104e8 @ 0x104e8 */

int64_t fcn.000104e8(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int64_t in_R9;
    ulong uStack_18;
    ulong uStack_10;
    
    *0x11058 = 0x7000000;
    *0x1103c = 0x105020000;
    *0x11074 = 0xc008b0010;
    uVar3 = 0;
    do {
        iVar1 = uVar3 * 0x1c;
        uStack_18 = *(iVar1 + 0x10fa0);
        uStack_10 = *(iVar1 + 0x10fa8);
        iVar1 = fcn.000109e8(&uStack_18,*(iVar1 + 0x10fb0),*(str.INTC_ + iVar1));
        if (iVar1 < 0) {
            return iVar1;
        }
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
    } while (uVar2 < 8);
    fcn.0001074c(in_R9);
    return 0;
}


/* fcn.00010448 @ 0x10448 */

void fcn.00010448(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x110f8 + 0x98))(*0x11118,0x10f40,aiStackX_10);
    if (-1 < iVar1) {
        (**(*0x110f8 + 0x90))(*0x11118,0x10f40,aiStackX_10[0]);
    }
    (**(*0x110f8 + 0x68))(*0x11108);
    (**(*0x110f8 + 0x70))(*0x11108);
    if (aiStackX_10[0] != 0) {
        (**(*0x110f8 + 0x48))();
    }
    if (*0x11110 != 0) {
        (**(*0x110f8 + 0x48))();
    }
    return;
}


/* fcn.000107ac @ 0x107ac */

int64_t fcn.000107ac(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11100 == 0) {
        *0x11100 = 0;
        if (*(*0x110f0 + 0x68) != 0) {
            piVar2 = *(*0x110f0 + 0x70);
            do {
                if ((*0x10f90 == *piVar2) && (*0x10f98 == piVar2[1])) {
                    *0x11100 = (*(*0x110f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x11100;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x110f0 + 0x68));
        }
    }
    return *0x11100;
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


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.0001074c @ 0x1074c */

int64_t fcn.0001074c(int64_t arg1)

{
    ulong in_R8;
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg1;
    (**(*0x110f8 + 0x50))(0x200,8,in_R8,0,&iStackX_20);
    (**(*0x110f8 + 0xa8))(0x10f50,iStackX_20,in_stack_00000028);
    (**(*0x110f8 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.000109e8 @ 0x109e8 */

ulong fcn.000109e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x11110 == NULL) {
        iVar3 = 0;
        puVar1 = fcn.00010bd4(0x2c);
        *0x11110 = puVar1;
        if (puVar1 != NULL) {
            *puVar1 = 1;
code_r0x00010a63:
            iVar2 = iVar3 * 0x1c;
            *(iVar2 + 0x10 + puVar1) = *arg1;
            *(iVar2 + 0x18 + puVar1) = *(arg1 + 8);
            *(iVar2 + 0x20 + puVar1) = arg2;
            *(iVar2 + 0x28 + puVar1) = arg3;
            puVar1[1] = iVar3 + 1;
            (**(*0x110f8 + 0x68))(*0x11108);
            return 0;
        }
    }
    else {
        iVar3 = *(*0x11110 + 8);
        puVar1 = fcn.00010c34(arg1,iVar3 * 0x1c + 0x10,iVar3 * 0x1c + 0x2c,*0x11110);
        *0x11110 = puVar1;
        if (puVar1 != NULL) goto code_r0x00010a63;
    }
    return 0x8000000000000009;
}


/* fcn.00010b58 @ 0x10b58 */

int64_t fcn.00010b58(int64_t arg1)

{
    uint64_t uVar1;
    unkuint7 Var2;
    
    uVar1 = arg1 + 0xbU & 0xffffffff;
    Var2 = uVar1 >> 8;
    if ((*((arg1 + 0xbU >> 4 & 0x10000000 | uVar1) + 0xc0000000) == '\x02') &&
       (*((arg1 + 10U >> 4 & 0x10000000 | arg1 + 10U & 0xffffffff) + 0xc0000000) == '\0')) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.00010d08 @ 0x10d08 */

int64_t fcn.00010d08(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg2_00;
    uint32_t uVar3;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    char cVar5;
    uint *puVar6;
    
    arg1_00 = arg1 & 0xffffffff;
    if ((arg1 & 0xfffff000U) == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = arg1;
    puVar4 = iVar1 + 0xf00U;
    uVar3 = 0;
    *puVar4 = *(iVar1 + 0xf00U) | 0x20;
    arg2_00 = arg2;
    while ((*puVar4 & 0x20) == 0) {
        fcn.00010878(0x32,arg2_00);
        uVar3 = uVar3 + 1;
        if (3999 < uVar3) {
            return -0x7fffffffffffffee;
        }
    }
    puVar6 = iVar1 + 0x20U;
    *(iVar1 + 0x20U) = 0x43f6020;
    iVar2 = fcn.00010cc4(arg1_00,arg2_00);
    if (iVar2 == -0x7fffffffffffffee) {
        *(iVar1 + 0x18U) = *(iVar1 + 0x18U) | 0x800;
        *puVar6 = 0x43f6020;
        iVar2 = fcn.00010cc4(arg1 & 0xffffffff,arg2_00);
        if (iVar2 == -0x7fffffffffffffee) {
            iVar2 = -0x7ffffffffffffff9;
            goto code_r0x00010de2;
        }
    }
    fcn.00010878(4000,arg2_00);
    if (iVar2 < 0) {
code_r0x00010de2:
        *puVar4 = *puVar4 & 0xffffffdf;
        return iVar2;
    }
    *puVar6 = 0x4302580;
    iVar2 = fcn.00010cc4(arg1_00,arg2_00);
    if (-1 < iVar2) {
        *puVar6 = 0x8430000;
        iVar2 = fcn.00010cc4(arg1 & 0xffffffff,arg2_00);
        if (iVar2 == 0) {
            *arg2 = *puVar6;
        }
        if (*arg2 == 0) {
            if ((*arg1_00 & 0x30000) != 0) {
                iVar2 = -0x7ffffffffffffff9;
                goto code_r0x00010f05;
            }
            cVar5 = 'e';
            *arg1_00 = *arg1_00 | 0x10000;
            *arg1_00 = *arg1_00 | 0x20000;
            do {
                if ((*(iVar1 + 0x18) & 4) != 0) break;
                fcn.00010878(1000,arg2_00);
                cVar5 = cVar5 + -1;
            } while (cVar5 != '\0');
            if (cVar5 != '\0') {
                *puVar6 = 0x8430000;
                cVar5 = 'd';
                iVar2 = fcn.00010cc4(arg1 & 0xffffffff,arg2_00);
                if (iVar2 == 0) {
                    *arg2 = *puVar6;
                }
                for (; (*arg2 == 0 && (cVar5 != '\0')); cVar5 = cVar5 + -1) {
                    *puVar6 = 0x8430000;
                    iVar2 = fcn.00010cc4(arg1 & 0xffffffff,arg2_00);
                    if (iVar2 == 0) {
                        *arg2 = *puVar6;
                    }
                    if (iVar2 < 0) break;
                    fcn.00010878(1000,arg2_00);
                }
            }
            *arg1_00 = *arg1_00 & 0xfffdffff;
            *arg1_00 = *arg1_00 & 0xfffeffff;
        }
        if (-1 < iVar2) {
            *puVar6 = 0x4302180;
            iVar2 = fcn.00010cc4(arg1_00,arg2_00);
        }
    }
code_r0x00010f05:
    *puVar4 = *puVar4 & 0xffffffdf;
    return iVar2;
}


/* fcn.00010598 @ 0x10598 */

void fcn.00010598(void)

{
    uchar uVar1;
    uint16_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t auStackX_8 [4];
    
    uVar5 = 0;
    auStackX_8[0] = 0;
    uVar6 = 0;
    if (*0xc00fe000 != -1) {
        cVar3 = fcn.00010b58(0xfe000);
        uVar2 = *0xc00fe0cc;
        uVar1 = *0xc00fe004;
        uVar6 = uVar5;
        *0xc00fe004 = uVar1;
        *0xc00fe0cc = uVar2;
        if (cVar3 != '\0') {
            *0xc00fe0cc = *0xc00fe0cc & 0xfffc;
            if ((*0xc00fe010 & 0xfffe0000) != 0) {
                *0xc00fe004 = 2;
                iVar4 = fcn.00010d08(*0xc00fe010 & 0xfffe0000,auStackX_8);
                *0xc00fe004 = uVar1;
                *0xc00fe0cc = uVar2;
                if (-1 < iVar4) {
                    uVar6 = auStackX_8[0];
                }
            }
        }
    }
    *0x11090 = uVar6;
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00010818 @ 0x10818 */

void fcn.00010818(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.000102c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010c00 @ 0x10c00 */

void fcn.00010c00(ulong param_1)

{
    int64_t arg1;
    
    arg1 = fcn.00010ba4(param_1,0x10);
    if ((arg1 != 0) && (arg1 != 0x10f70)) {
        section..text(arg1,0x10f70,0x10);
    }
    return;
}


/* fcn.00010ba4 @ 0x10ba4 */

ulong fcn.00010ba4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x110f8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3296 named .text
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


/* fcn.00010bd4 @ 0x10bd4 */

void fcn.00010bd4(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010ba4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
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


/* fcn.00010c34 @ 0x10c34 */

int64_t fcn.00010c34(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010ba4(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102a0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                section..text(arg1_00,arg3,arg2);
            }
            (**(*0x110f8 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.00010878 @ 0x10878 */

int64_t fcn.00010878(int64_t arg1,int64_t arg2)

{
    fcn.00010818((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00010cc4 @ 0x10cc4 */

ulong fcn.00010cc4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if ((*(arg1 + 0x20) >> 0x1c & 1) != 0) {
            return 0;
        }
        fcn.00010878(0x32,arg2);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 4000);
    return 0x8000000000000012;
}


