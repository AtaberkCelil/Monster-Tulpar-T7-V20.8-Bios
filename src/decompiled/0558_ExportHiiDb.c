// decompiled by r2ghidra: 0558_ExportHiiDb.pe32
// functions: 9

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001032c(arg1,arg2);
    fcn.000103f4(arg1,arg2);
    return;
}


/* fcn.0001032c @ 0x1032c */

void fcn.0001032c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x108f8 = *(arg1 + 0x60);
    *0x108f0 = arg1;
    fcn.00010668();
    puVar4 = fcn.00010668();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010380:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102a0();
                fcn.00010290();
                uVar2 = in(0x1808);
                fcn.00010270(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010260();
                }
                fcn.00010270(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010290();
                }
                else {
                    fcn.00010280();
                }
                return;
            }
            if ((*0x10868 == *(puVar4 + 4)) && (*0x10870 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000103f4 @ 0x103f4 */

void fcn.000103f4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    ulong uStackX_18;
    ulong uStackX_20;
    uchar auStack_18 [24];
    
    uStackX_18 = 0;
    uStackX_20 = 8;
    if (*0x10918 == 0) {
        *0x10908 = *(arg2 + 0x60);
        *0x10910 = *(arg2 + 0x58);
        *0x10918 = arg2;
    }
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x10910 + 0x48))(L"HiiDBSize",0x10858,aiStackX_8,&uStackX_20,&uStackX_18);
    if (iVar1 < 0) {
        *0x108e0 = 0x800;
    }
    else {
        *0x108e8 = 1;
        *0x108e0 = uStackX_18;
    }
    iVar1 = (**(*0x10908 + 0x28))(1,6,*0x108e0,0x10850);
    if (-1 < iVar1) {
        (**(*0x10908 + 0x170))(0x200,8,0x104dc,0,0x10878,auStack_18);
    }
    return;
}


/* fcn.00010668 @ 0x10668 */

int64_t fcn.00010668(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10900 == 0) {
        *0x10900 = 0;
        if (*(*0x108f0 + 0x68) != 0) {
            piVar2 = *(*0x108f0 + 0x70);
            do {
                if ((*0x10840 == *piVar2) && (*0x10848 == piVar2[1])) {
                    *0x10900 = (*(*0x108f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10900;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x108f0 + 0x68));
        }
    }
    return *0x10900;
}


/* fcn.000102a0 @ 0x102a0 */

uint64_t fcn.000102a0(void)

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


/* fcn.00010290 @ 0x10290 */

void fcn.00010290(void)

{
    return;
}


/* fcn.00010270 @ 0x10270 */

uint64_t fcn.00010270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


