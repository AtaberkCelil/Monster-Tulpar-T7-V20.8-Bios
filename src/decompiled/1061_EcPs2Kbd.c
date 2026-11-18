// decompiled by r2ghidra: 1061_EcPs2Kbd.pe32
// functions: 16

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001033c(arg1,arg2);
    fcn.0001063c(arg1,arg2);
    return;
}


/* fcn.0001033c @ 0x1033c */

void fcn.0001033c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10ee8 = *(arg1 + 0x60);
    *0x10ee0 = arg1;
    fcn.000109e0();
    puVar4 = fcn.000109e0();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010390:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102c0();
                }
                fcn.000102d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
                return;
            }
            if ((*0x10e70 == *(puVar4 + 4)) && (*0x10e78 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010390;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.0001063c @ 0x1063c */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001063c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint16_t auStackX_18 [4];
    ulong uStackX_20;
    int16_t var_50h;
    int64_t var_58h;
    ulong auStack_48 [2];
    int64_t var_10h;
    
    auStackX_18[0] = 0;
    if (*0x10f08 == 0) {
        *0x10ef8 = *(arg2 + 0x60);
        *0x10f00 = *(arg2 + 0x58);
        *0x10f08 = arg2;
    }
    iVar1 = fcn.00010a4c(arg2);
    uStackX_20 = 0x60;
    iVar2 = (**(iVar1 + 0x50))(2,0x60,1);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = (**(iVar1 + 0x58))(2,2,0,1,&uStackX_20,arg1,0);
    if (iVar2 < 0) {
        return iVar2;
    }
    uStackX_20 = 100;
    iVar2 = (**(iVar1 + 0x50))(2,100,1);
    if ((iVar2 < 0) || (iVar2 = (**(iVar1 + 0x58))(2,2,0,1,&uStackX_20,arg1,0), iVar2 < 0)) {
        (**(iVar1 + 0x60))(0x60,1);
    }
    else {
        iVar2 = (**(*0x10ef8 + 0x50))(0x200,8,0x10404,0,0x10f10);
        if (-1 < iVar2) {
            iVar2 = (**(*0x10ef8 + 0xa8))(0x10e40,*0x10f10,0x10f48);
        }
        if (-1 < iVar2) {
            auStack_48[0] = 2;
            iVar1 = (**(*0x10f00 + 0x48))(L"IsaIrqMask",0x10e88,0,auStack_48,auStackX_18);
            if (iVar1 == -0x7ffffffffffffff2) {
                auStackX_18[0] = 0xe307;
            }
            auStackX_18[0] = auStackX_18[0] | 2;
            auStack_48[0] = 2;
            iVar1 = (**(*0x10f00 + 0x58))(L"IsaIrqMask",0x10e88,2,2,auStackX_18);
            return iVar1;
        }
        (**(iVar1 + 0x60))(100,1);
        (**(iVar1 + 0x60))(0x60,1);
    }
    return iVar2;
}


/* fcn.000109e0 @ 0x109e0 */

int64_t fcn.000109e0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10ef0 == 0) {
        *0x10ef0 = 0;
        if (*(*0x10ee0 + 0x68) != 0) {
            piVar2 = *(*0x10ee0 + 0x70);
            do {
                if ((*0x10e20 == *piVar2) && (*0x10e28 == piVar2[1])) {
                    *0x10ef0 = (*(*0x10ee0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10ef0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10ee0 + 0x68));
        }
    }
    return *0x10ef0;
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


/* fcn.00010b04 @ 0x10b04 */

int64_t fcn.00010b04(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x10e80;
        }
        arg1_00 = fcn.00010bdc(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.00010ab0(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00010a84(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00010d50(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00010d50(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x10e80;
    }
    return arg1_00;
}


/* fcn.00010a4c @ 0x10a4c */

ulong fcn.00010a4c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(arg1 + 0x68);
    iVar3 = *(arg1 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.00010c24(iVar3);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.00010a84 @ 0x10a84 */

ulong fcn.00010a84(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x10ef8 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00010d50 @ 0x10d50 */

int64_t fcn.00010d50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00010c24 @ 0x10c24 */

int64_t fcn.00010c24(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x10e30;
    piVar2 = piVar1;
    if (((arg1 & 7) != 0) && ((arg1 & 7) == 0)) {
        iVar4 = 8;
        do {
            if (*piVar2 != *piVar3) break;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
        piVar3 = piVar3 + 1;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *piVar3) break;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
    }
    return *piVar2 - *piVar3;
}


/* fcn.00010bdc @ 0x10bdc */

int64_t fcn.00010bdc(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.00010ab0(arg1);
    arg1_01 = fcn.00010a84(arg1_00);
    fcn.00010d50(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.00010ab0 @ 0x10ab0 */

int64_t fcn.00010ab0(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        return 0;
    }
    iVar2 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
        if ((*arg1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    }
    return iVar2;
}


