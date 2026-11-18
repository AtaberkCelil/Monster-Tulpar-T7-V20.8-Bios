// decompiled by r2ghidra: 0548_PciDxeInit.pe32
// functions: 13

/* entry0 @ 0x103b0 */

void entry0(ulong noname_0,int64_t arg1)

{
    fcn.00010414(noname_0,arg1);
    if (*0x11900 == 0) {
        *0x118f0 = *(arg1 + 0x60);
        *0x118f8 = *(arg1 + 0x58);
        *0x11900 = arg1;
    }
    (**(*0x118f0 + 0x148))(0x11870,0x11620,0x11750,0);
    return;
}


/* fcn.00010414 @ 0x10414 */

void fcn.00010414(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x118e0 = *(arg1 + 0x60);
    *0x118d8 = arg1;
    fcn.000105d0();
    puVar4 = fcn.000105d0();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010468:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010300();
                }
                fcn.00010310(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010330();
                }
                else {
                    fcn.00010320();
                }
                return;
            }
            if ((*0x11790 == *(puVar4 + 4)) && (*0x11798 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010468;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000105d0 @ 0x105d0 */

int64_t fcn.000105d0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x118e8 == 0) {
        *0x118e8 = 0;
        if (*(*0x118d8 + 0x68) != 0) {
            piVar2 = *(*0x118d8 + 0x70);
            do {
                if ((*0x11640 == *piVar2) && (*0x11648 == piVar2[1])) {
                    *0x118e8 = (*(*0x118d8 + 0x70))[uVar1 * 3 + 2];
                    return *0x118e8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x118d8 + 0x68));
        }
    }
    return *0x118e8;
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


/* fcn.00010850 @ 0x10850 */

void fcn.00010850(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*(iVar2 + 0xa70) != 0) {
        do {
            iVar1 = *(*(iVar2 + 0xa78) + uVar3 * 8);
            if (*(iVar1 + 0xd0) - 2U < 2) {
                fcn.00010850(iVar1,arg2,arg3);
            }
            (*arg3)(*(*(iVar2 + 0xa78) + uVar3 * 8),arg2);
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0xa70));
    }
    return;
}


/* fcn.00010670 @ 0x10670 */

bool fcn.00010670(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    ulong *puStackX_10;
    ulong *apuStackX_18 [2];
    
    iVar1 = (**(*0x118f0 + 0x140))(0x11650,0,apuStackX_18);
    if (iVar1 < 0) {
        bVar2 = true;
    }
    else {
        iVar1 = (**(*0x118f0 + 0x140))(0x11660,0,&puStackX_10);
        if (iVar1 < 0) {
            iVar1 = (**apuStackX_18[0])(apuStackX_18[0],*(arg1 + 0xef));
        }
        else {
            iVar1 = (**puStackX_10)(puStackX_10,*(arg1 + 0xe0));
        }
        bVar2 = -1 < iVar1;
    }
    return bVar2;
}


/* fcn.000108d0 @ 0x108d0 */

int64_t fcn.000108d0(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    for (iVar1 = CONCAT44(in_register_0000000c,arg1); *(iVar1 + 0xd0) != 1; iVar1 = *(iVar1 + 0xc0)) {
    }
    return iVar1;
}


/* fcn.00010d04 @ 0x10d04 */

bool fcn.00010d04(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    ulong *puStackX_10;
    ulong *apuStackX_18 [2];
    
    iVar1 = (**(*0x118f0 + 0x140))(0x11650,0,apuStackX_18);
    if (iVar1 < 0) {
        bVar2 = true;
    }
    else {
        iVar1 = (**(*0x118f0 + 0x140))(0x11660,0,&puStackX_10);
        if ((iVar1 < 0) || (*(arg1 + 0xe0) == 0)) {
            iVar1 = (**apuStackX_18[0])(apuStackX_18[0],*(arg1 + 0xef));
        }
        else {
            iVar1 = (**puStackX_10)(puStackX_10);
        }
        bVar2 = -1 < iVar1;
    }
    return bVar2;
}


/* fcn.00011468 @ 0x11468 */

void fcn.00011468(void)

{
    if (*0x117a0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x117a0 = '\x05';
        }
        else {
            *0x117a0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


