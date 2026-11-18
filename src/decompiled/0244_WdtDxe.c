// decompiled by r2ghidra: 0244_WdtDxe.pe32
// functions: 10

/* entry0 @ 0x10384 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103a0(arg1,in_RDX);
    fcn.00010468(arg1,in_RDX);
    return;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10828 = *(arg1 + 0x60);
    *0x10820 = arg1;
    fcn.00010660();
    puVar4 = fcn.00010660();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103f4:
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
            if ((*0x107f0 == *(puVar4 + 4)) && (*0x107f8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103f4;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010468 @ 0x10468 */

ulong fcn.00010468(int64_t arg1,int64_t arg2)

{
    uchar auStackX_8 [8];
    int64_t iStackX_10;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    
    *0x10838 = arg1;
    iStackX_10 = arg2;
    iStackX_18 = arg1;
    (**(*0x10828 + 0x50))(0x201,8,0x105bc,0,auStackX_8);
    if (0x1ffff < *(*0x10820 + 8)) {
        (**(*0x10828 + 0x170))(0x200,8,0x105bc,0,0x10780,auStackX_8);
    }
    (**(*0x10828 + 0x80))(&iStackX_18,0x107b0,0,0x107c0);
    (**(*0x10828 + 0x50))(0x200,8,0x10568,0,&iStackX_10);
    (**(*0x10828 + 0xa8))(0x10790,iStackX_10,auStackX_20);
    (**(*0x10828 + 0x68))(iStackX_10);
    return 0;
}


/* fcn.00010660 @ 0x10660 */

int64_t fcn.00010660(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10830 == 0) {
        *0x10830 = 0;
        if (*(*0x10820 + 0x68) != 0) {
            piVar2 = *(*0x10820 + 0x70);
            do {
                if ((*0x107a0 == *piVar2) && (*0x107a8 == piVar2[1])) {
                    *0x10830 = (*(*0x10820 + 0x70))[uVar1 * 3 + 2];
                    return *0x10830;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10820 + 0x68));
        }
    }
    return *0x10830;
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


/* fcn.000106cc @ 0x106cc */

ulong fcn.000106cc(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if (arg1 - 1U < 0x3ff) {
        uVar1 = in(0x1854);
        uVar2 = uVar1 | 0x40e000;
        if ((uVar1 & 0x200000) != 0) {
            uVar2 = uVar1 | 0xe000;
        }
        uVar2 = ((uVar1 | 0xe000) ^ arg1 - 1U) & 0x3ff ^ uVar2;
        out(0x1854,uVar2);
        out(0x1854,uVar2 | 0x80000000);
        return 0;
    }
    return 0x8000000000000002;
}


