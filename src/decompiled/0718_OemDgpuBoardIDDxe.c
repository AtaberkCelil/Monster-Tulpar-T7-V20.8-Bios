// decompiled by r2ghidra: 0718_OemDgpuBoardIDDxe.pe32
// functions: 20

/* entry0 @ 0x10400 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001041c(arg1,arg2);
    fcn.000104ec(arg1,arg2);
    return;
}


/* fcn.0001041c @ 0x1041c */

void fcn.0001041c(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x11598 = *(arg1 + 0x60);
    *0x11590 = arg1;
    fcn.00011178();
    iVar3 = fcn.000111e4();
    if (iVar3 == 0) {
        uVar4 = fcn.00010340();
        fcn.00010330();
        uVar1 = in(0x1808);
        fcn.00010310(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010300();
        }
        fcn.00010310(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010330();
        }
        else {
            fcn.00010320();
        }
    }
    if ((*0x115c0 != NULL) || (iVar3 = (**(*0x11598 + 0x140))(0x11480,0,0x115c0), -1 < iVar3)) {
        (***0x115c0)(*0x115c0,0x115c8);
    }
    return;
}


/* fcn.000104ec @ 0x104ec */

int64_t fcn.000104ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uStackX_8;
    ulong uStackX_18;
    uchar auStackX_20 [8];
    int64_t var_4e0h;
    int64_t var_4e8h;
    uint uStack_598;
    uint uStack_594;
    uint uStack_590;
    uint uStack_58c;
    uchar auStack_588 [177];
    char cStack_4d7;
    int8_t var_fh;
    
    uStackX_18 = 0;
    uStackX_8 = arg1 & 0xffffffff00000000;
    uStack_598 = 0x72c5e28c;
    uStack_594 = 0x43a17783;
    uStack_590 = 0xd7fa6787;
    uStack_58c = 0xa4afcc3f;
    if (*0x115b0 == 0) {
        *0x115a0 = *(arg2 + 0x60);
        *0x115a8 = *(arg2 + 0x58);
        *0x115b0 = arg2;
    }
    (**(*0x115a0 + 0x170))(0x200,8,0x106fc,0,0x11470,auStackX_20);
    uStackX_18 = 0x578;
    iVar1 = (**(*0x115a8 + 0x48))(L"SaSetup",&uStack_598,&uStackX_8,&uStackX_18,auStack_588);
    if (-1 < iVar1) {
        if ((cStack_4d7 == '\x04') || (cStack_4d7 == '\x01')) {
            (**(*0x115a0 + 0x170))(0x200,8,0x10a00,0,0x11470,auStackX_20);
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00011178 @ 0x11178 */

int64_t fcn.00011178(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x115b8 == 0) {
        *0x115b8 = 0;
        if (*(*0x11590 + 0x68) != 0) {
            piVar2 = *(*0x11590 + 0x70);
            do {
                if ((*0x11460 == *piVar2) && (*0x11468 == piVar2[1])) {
                    *0x115b8 = (*(*0x11590 + 0x70))[uVar1 * 3 + 2];
                    return *0x115b8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11590 + 0x68));
        }
    }
    return *0x115b8;
}


/* fcn.000111e4 @ 0x111e4 */

void fcn.000111e4(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011178();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001121b:
            if ((piVar1 == NULL) || ((*0x114a0 == *(piVar1 + 4) && (*0x114a8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001121b;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(void)

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


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.00010624 @ 0x10624 */

int64_t fcn.00010624(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x115a0 + 0x138))(2,0x11440,0,&uStackX_10,&iStackX_18);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStackX_10 != 0) {
            do {
                iVar1 = (**(*0x115a0 + 0x98))(*(iStackX_18 + uVar2 * 8),0x11440,&iStackX_20);
                if (((-1 < iVar1) && (iVar1 = *(iStackX_20 + 0x98), iVar1 != 0)) &&
                   (*(*(iVar1 + 0x18) + 4 + iVar1) == 0x10de)) break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_10);
        }
        (**(*0x115a0 + 0x48))(iStackX_18);
        if (uVar2 < uStackX_10) {
            iVar1 = 0;
            *arg1 = *(iStackX_20 + 0x98);
        }
        else {
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.000110dc @ 0x110dc */

int64_t fcn.000110dc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t extraout_RAX;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    unkbyte7 Var7;
    
    Var7 = arg2 >> 8;
    iVar5 = CONCAT71(arg1 >> 8,0xa3);
    iVar4 = CONCAT71(noname_0 >> 8,0x62);
    uVar6 = 0;
    fcn.00011014(iVar4,iVar5,CONCAT71(Var7,4));
    iVar3 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar5 = CONCAT71(iVar5 >> 8,0xa2);
        iVar4 = CONCAT71(iVar4 >> 8,0x62);
        iVar3 = fcn.00011014(iVar4,iVar5,CONCAT71(Var7,arg1));
        if ((-1 < iVar3) && (iVar3 = fcn.00010eb0(CONCAT71(iVar4 >> 8,0x62),CONCAT71(iVar5 >> 8,0xa4)), -1 < iVar3))
        {
            uVar1 = in(0x66);
            if ((uVar1 & 1) == 0) {
                do {
                    if (0x1ffff < uVar6) {
                        return -0x7ffffffffffffff9;
                    }
                    fcn.00011294(0xf,0x66);
                    uVar1 = in(0x66);
                    uVar6 = uVar6 + 1;
                } while ((uVar1 & 1) == 0);
                if (0x1ffff < uVar6) {
                    return -0x7ffffffffffffff9;
                }
            }
            uVar2 = in(0x62);
            *arg2 = uVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00011014 @ 0x11014 */

int64_t fcn.00011014(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    ushort uVar8;
    
    uVar1 = arg2;
    cVar5 = arg1;
    iVar4 = fcn.00010fb0(arg1);
    uVar7 = 0;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg1_00 = CONCAT71(arg1 >> 8,cVar5);
    fcn.00010f28(arg1_00);
    uVar6 = CONCAT71(arg1_00 >> 8,cVar5);
    fcn.00010eb0(uVar6,CONCAT71(arg2 >> 8,uVar1));
    fcn.00010fb0(CONCAT71(uVar6 >> 8,cVar5));
    uVar8 = 0x60;
    uVar2 = 100;
    uVar6 = 0;
    if (cVar5 != '`') {
        uVar2 = 0x66;
    }
    arg2_00 = uVar2;
    uVar3 = in(uVar2);
    if ((uVar3 & 2) != 0) {
        do {
            if (0x1ffff < uVar7) goto code_r0x000110b6;
            uVar6 = 0;
            fcn.00011294(0xf,arg2_00);
            arg2_00 = uVar2;
            uVar3 = in(uVar2);
            uVar7 = uVar7 + 1;
        } while ((uVar3 & 2) != 0);
        if (0x1ffff < uVar7) goto code_r0x000110b6;
    }
    if (cVar5 != '`') {
        uVar8 = 0x62;
    }
    out(uVar8,arg3);
code_r0x000110b6:
    fcn.00010f28(CONCAT71(uVar6 >> 8,cVar5));
    return iVar4;
}


/* fcn.0001132e @ 0x1132e */

int64_t fcn.0001132e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00011294 @ 0x11294 */

int64_t fcn.00011294(int64_t arg1,int64_t arg2)

{
    fcn.00011234((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00011234 @ 0x11234 */

void fcn.00011234(int64_t arg1)

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
            fcn.00010300();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010fb0 @ 0x10fb0 */

ulong fcn.00010fb0(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.00011294(0xf,uVar1);
            uVar2 = in(uVar1);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00010f28 @ 0x10f28 */

ulong fcn.00010f28(int64_t arg1)

{
    ushort uVar1;
    uint8_t uVar2;
    uchar uVar3;
    ushort uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 1) != 0) {
        do {
            if (0x1ffff < uVar5) {
                return 0x8000000000000007;
            }
            uVar4 = 0x60;
            if (arg1 != '`') {
                uVar4 = 0x62;
            }
            uVar3 = in(uVar4);
            out(0x80,uVar3);
            fcn.00011294(5000,0x80);
            uVar2 = in(uVar1);
            uVar5 = uVar5 + 1;
        } while ((uVar2 & 1) != 0);
        if (0x1ffff < uVar5) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00010eb0 @ 0x10eb0 */

ulong fcn.00010eb0(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar4 = uVar1;
    uVar2 = in(uVar4);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.00011294(0xf,uVar1);
            uVar2 = in(uVar4);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    out(uVar4,arg2);
    return 0;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


