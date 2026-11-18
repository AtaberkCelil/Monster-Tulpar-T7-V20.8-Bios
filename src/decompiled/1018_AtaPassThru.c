// decompiled by r2ghidra: 1018_AtaPassThru.pe32
// functions: 12

/* entry0 @ 0x10310 */

void entry0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    fcn.000103b8(noname_0,arg1);
    auStackX_18[0] = 0;
    if (*0x11478 == 0) {
        *0x11468 = *(arg1 + 0x60);
        *0x11470 = *(arg1 + 0x58);
        *0x11478 = arg1;
    }
    iVar1 = (**(*0x11468 + 0x40))(4,0x10,0x11480);
    if (-1 < iVar1) {
        **0x11480 = 0x10480;
        (*0x11480)[1] = 0x106c4;
        (**(*0x11468 + 0x80))(auStackX_18,0x113f0,0,*0x11480);
    }
    return;
}


/* fcn.000103b8 @ 0x103b8 */

void fcn.000103b8(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x11458 = *(arg1 + 0x60);
    *0x11450 = arg1;
    fcn.000111f8();
    puVar4 = fcn.000111f8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001040c:
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
            if ((*0x11420 == *(puVar4 + 4)) && (*0x11428 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001040c;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000111f8 @ 0x111f8 */

int64_t fcn.000111f8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11460 == 0) {
        *0x11460 = 0;
        if (*(*0x11450 + 0x68) != 0) {
            piVar2 = *(*0x11450 + 0x70);
            do {
                if ((*0x11400 == *piVar2) && (*0x11408 == piVar2[1])) {
                    *0x11460 = (*(*0x11450 + 0x70))[uVar1 * 3 + 2];
                    return *0x11460;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11450 + 0x68));
        }
    }
    return *0x11460;
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


/* fcn.0001079c @ 0x1079c */

uint16_t fcn.0001079c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint16_t uVar3;
    int64_t aiStackX_18 [2];
    
    uVar3 = 0;
    iVar1 = (**(*0x11468 + 0x98))(noname_0,0x11410,aiStackX_18);
    if (iVar1 < 0) {
        uVar3 = 0xffff;
    }
    else {
        for (puVar2 = *(aiStackX_18[0] + 0x58); puVar2 != NULL; puVar2 = *puVar2) {
            if ((*(puVar2 + -0x38d) == '\x04') && (*(puVar2 + -0x70) != 2)) {
                if (arg1 != 0) {
                    *(arg1 + uVar3 * 8) = puVar2 + -0x73;
                }
                uVar3 = uVar3 + 1;
            }
        }
    }
    return uVar3;
}


/* fcn.00010764 @ 0x10764 */

int64_t fcn.00010764(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if ((*(arg1 + 0x50) != 0) && (*(arg1 + 0x58) != 0)) {
        do {
            iVar1 = *(*(arg1 + 0x50) + uVar2 * 8);
            if ((arg2 == *(iVar1 + 8)) && (arg3 == *(iVar1 + 9))) {
                return iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x58));
    }
    return 0;
}


/* fcn.00010820 @ 0x10820 */

void fcn.00010820(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar uVar3;
    
    uVar1 = *(*(arg1 + 8) * 0x80 + 0x120 + *(*(arg1 + 0x350) + 8));
    if (arg2 != 0) {
        (**(*0x11468 + 0x168))(arg2,0x14);
        *(arg2 + 2) = uVar1;
        if ((uVar1 & 1) != 0) {
            *(arg2 + 3) = uVar1 >> 8;
        }
        iVar2 = *(arg1 + 0x348);
        if (*(iVar2 + 0x40) == '4') {
            *(arg2 + 2) = *(iVar2 + 0x42);
            *(arg2 + 3) = *(iVar2 + 0x43);
            *(arg2 + 0xc) = *(iVar2 + 0x4c);
            *(arg2 + 0xd) = *(iVar2 + 0x4d);
            *(arg2 + 4) = *(iVar2 + 0x44);
            *(arg2 + 8) = *(iVar2 + 0x48);
            *(arg2 + 5) = *(iVar2 + 0x45);
            *(arg2 + 9) = *(iVar2 + 0x49);
            *(arg2 + 6) = *(iVar2 + 0x46);
            *(arg2 + 10) = *(iVar2 + 0x4a);
            uVar3 = *(iVar2 + 0x47);
        }
        else {
            if (*(iVar2 + 0x20) != '_') {
                return;
            }
            *(arg2 + 2) = *(iVar2 + 0x22);
            *(arg2 + 3) = *(iVar2 + 0x23);
            *(arg2 + 0xc) = *(iVar2 + 0x2c);
            *(arg2 + 0xd) = *(iVar2 + 0x2d);
            *(arg2 + 4) = *(iVar2 + 0x24);
            *(arg2 + 8) = *(iVar2 + 0x28);
            *(arg2 + 5) = *(iVar2 + 0x25);
            *(arg2 + 9) = *(iVar2 + 0x29);
            *(arg2 + 6) = *(iVar2 + 0x26);
            *(arg2 + 10) = *(iVar2 + 0x2a);
            uVar3 = *(iVar2 + 0x27);
        }
        *(arg2 + 7) = uVar3;
    }
    return;
}


/* fcn.00011310 @ 0x11310 */

int64_t fcn.00011310(int64_t arg1,int64_t arg2,int64_t arg3)

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


