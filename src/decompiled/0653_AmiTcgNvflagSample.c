// decompiled by r2ghidra: 0653_AmiTcgNvflagSample.pe32
// functions: 13

/* entry0 @ 0x103b0 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103cc(arg1,in_RDX);
    fcn.000104a0(arg1,in_RDX);
    return;
}


/* fcn.000103cc @ 0x103cc */

void fcn.000103cc(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10ae8 = *(arg1 + 0x60);
    *0x10af0 = *(arg1 + 0x58);
    *0x10ae0 = arg1;
    fcn.00010848();
    puVar4 = fcn.00010848();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001042b:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
                return;
            }
            if ((*0x10a30 == *(puVar4 + 4)) && (*0x10a38 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001042b;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000104a0 @ 0x104a0 */

ulong fcn.000104a0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x10ae8 + 0x140))(0x109f0,0,auStackX_18);
    if ((iVar1 < 0) || (iVar1 = (**(*0x10ae8 + 0x140))(0x10a00,0,auStackX_20), iVar1 < 0)) {
        return 0x800000000000000e;
    }
    uVar2 = 0;
    while ((*(uVar2 + 0x10a40) != *0xfed40f00 || (*(uVar2 + 0x10a42) != *0xfed40f02))) {
        uVar2 = uVar2 + 4;
        if (0xb < uVar2) {
            iVar1 = fcn.00010730(&iStackX_10);
            if (iVar1 < 0) {
                iStackX_10 = CONCAT53(iStackX_10._3_5_,0x101);
                fcn.0001058c(&iStackX_10);
            }
            uVar3 = 0x10a20;
code_r0x0001055f:
            uVar3 = (**(*0x10ae8 + 0x80))(&iStackX_8,0x109c0,0,uVar3);
            return uVar3;
        }
    }
    uVar3 = 0x10a10;
    goto code_r0x0001055f;
}


/* fcn.00010848 @ 0x10848 */

int64_t fcn.00010848(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10af8 == 0) {
        *0x10af8 = 0;
        if (*(*0x10ae0 + 0x68) != 0) {
            piVar2 = *(*0x10ae0 + 0x70);
            do {
                if ((*0x109e0 == *piVar2) && (*0x109e8 == piVar2[1])) {
                    *0x10af8 = (*(*0x10ae0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10af8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10ae0 + 0x68));
        }
    }
    return *0x10af8;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00010730 @ 0x10730 */

int64_t fcn.00010730(int64_t arg1)

{
    int64_t iVar1;
    uint8_t auStackX_8 [8];
    uchar auStackX_10 [8];
    ulong uStackX_18;
    ulong uStackX_20;
    uchar auStack_18 [8];
    uchar auStack_10 [8];
    
    uStackX_20 = 6;
    uStackX_18 = 1;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x10ae8 + 0x140))(0x109f0,0,auStack_18);
        if ((-1 < iVar1) && (iVar1 = (**(*0x10ae8 + 0x140))(0x10a00,0,auStack_10), -1 < iVar1)) {
            iVar1 = (**(*0x10af0 + 0x48))(L"TcgInterfaceVar",0x109d0,0,&uStackX_18,auStackX_8);
            if (iVar1 < 0) {
                return iVar1;
            }
            if ((auStackX_8[0] & 1) == 0) {
                return iVar1;
            }
            iVar1 = (**(*0x10af0 + 0x48))(L"INTERNALPERBIOSFLAGS",0x109b0,0,&uStackX_20,auStackX_10);
            if (iVar1 < 0) {
                *(arg1 + 4) = *(arg1 + 4) | 0x10;
                *arg1 = 1;
                *(arg1 + 2) = 0;
            }
            else {
                (**(*0x10ae8 + 0x160))(arg1,auStackX_10,6);
            }
            return 0;
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.0001058c @ 0x1058c */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001058c(int64_t arg1)

{
    int64_t iVar1;
    uint8_t auStackX_8 [8];
    uchar auStackX_10 [8];
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_10h;
    
    var_20h = 1;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x10ae8 + 0x140))(0x109f0,0,&var_28h);
        if ((-1 < iVar1) && (iVar1 = (**(*0x10ae8 + 0x140))(0x10a00,0), -1 < iVar1)) {
            iVar1 = (**(*0x10af0 + 0x48))(L"TcgInterfaceVar",0x109d0,0,&var_20h,auStackX_8);
            if ((-1 < iVar1) && ((auStackX_8[0] & 1) != 0)) {
                (**(*0x10ae8 + 0x160))(auStackX_10,arg1,6);
                fcn.000108b4(0x10a70,0x109b0,3,6);
            }
            fcn.00010280(auStackX_8,1,0);
            auStackX_8[0] = auStackX_8[0] | 1;
            iVar1 = fcn.000108b4(0x10a50,0x109d0,3,var_20h);
            if (iVar1 < 0) {
                return iVar1;
            }
            (**(*0x10ae8 + 0x160))(auStackX_10,arg1,6);
            iVar1 = fcn.000108b4(0x10a70,0x109b0,3,6);
            if (iVar1 < 0) {
                return iVar1;
            }
            iVar1 = fcn.000108b4(0x10aa0,68000,7,6);
            return iVar1;
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.000108b4 @ 0x108b4 */

int64_t fcn.000108b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x10af0 + 0x58))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffe)) {
        iVar1 = (**(*0x10af0 + 0x58))(arg1,arg2,0,0,0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x10af0 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
        }
    }
    else if (iVar1 == -0x7ffffffffffffff2) {
        (**(*0x10af0 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
    }
    return iVar1;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 1824 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


