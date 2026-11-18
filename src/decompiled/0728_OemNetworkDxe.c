// decompiled by r2ghidra: 0728_OemNetworkDxe.pe32
// functions: 10

/* entry0 @ 0x103c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103dc(arg1,arg2);
    fcn.000104ac(arg1,arg2);
    return;
}


/* fcn.000103dc @ 0x103dc */

void fcn.000103dc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x108e8 = *(arg1 + 0x60);
    *0x108e0 = arg1;
    fcn.00010630();
    iVar3 = fcn.0001069c();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x10908 != NULL) || (iVar3 = (**(*0x108e8 + 0x140))(0x10870,0,0x10908), -1 < iVar3)) {
        (***0x10908)(*0x10908,0x10910);
    }
    return;
}


/* fcn.000104ac @ 0x104ac */

ulong fcn.000104ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t auStackX_8 [2];
    char acStackX_18 [8];
    ulong uStackX_20;
    int8_t var_bcbh;
    int8_t var_bf8h;
    int64_t var_c30h;
    int64_t var_c38h;
    uint uStack_ce8;
    uint uStack_ce4;
    uint uStack_ce0;
    uint uStack_cdc;
    uint uStack_cd8;
    uint uStack_cd4;
    uint uStack_cd0;
    uint uStack_ccc;
    ulong auStack_cc8 [2];
    uchar auStack_cb8 [3179];
    char cStack_4d;
    char cStack_20;
    
    if (*0x108f8 == 0) {
        *0x108f0 = *(arg2 + 0x58);
        *0x108f8 = arg2;
    }
    auStack_cc8[0] = 8;
    uStack_ce8 = 0xec87d643;
    uStack_ce4 = 0x4bb5eba4;
    uStack_ce0 = 0x3e3fe5a1;
    uStack_cdc = 0xa90db236;
    uStackX_20 = 0xca9;
    uStack_cd8 = 0xd1405d16;
    uStack_cd4 = 0x46957afc;
    uStack_cd0 = 0x454112bb;
    uStack_ccc = 0xa295369d;
    auStackX_8[0] = arg1;
    iVar1 = (**(*0x108f0 + 0x48))(L"Setup",&uStack_ce8,auStackX_8,&uStackX_20,auStack_cb8);
    if ((-1 < iVar1) &&
       (iVar1 = (**(*0x108f0 + 0x48))(L"NetworkStackVar",&uStack_cd8,auStackX_8,auStack_cc8,acStackX_18),
       -1 < iVar1)) {
        if (cStack_20 == '\x01') {
            acStackX_18[0] = cStack_20;
            cStack_4d = cStack_20;
        }
        if (cStack_20 == '\0') {
            acStackX_18[0] = cStack_20;
            cStack_4d = cStack_20;
        }
        (**(*0x108f0 + 0x58))(L"Setup",&uStack_ce8,auStackX_8[0] & 0xffffffff,uStackX_20,auStack_cb8);
        (**(*0x108f0 + 0x58))(L"NetworkStackVar",&uStack_cd8,auStackX_8[0] & 0xffffffff,auStack_cc8[0],acStackX_18);
    }
    return 0;
}


/* fcn.00010630 @ 0x10630 */

int64_t fcn.00010630(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10900 == 0) {
        *0x10900 = 0;
        if (*(*0x108e0 + 0x68) != 0) {
            piVar2 = *(*0x108e0 + 0x70);
            do {
                if ((*0x10860 == *piVar2) && (*0x10868 == piVar2[1])) {
                    *0x10900 = (*(*0x108e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10900;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x108e0 + 0x68));
        }
    }
    return *0x10900;
}


/* fcn.0001069c @ 0x1069c */

void fcn.0001069c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010630();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000106d3:
            if ((piVar1 == NULL) || ((*0x10880 == *(piVar1 + 4) && (*0x10888 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000106d3;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


