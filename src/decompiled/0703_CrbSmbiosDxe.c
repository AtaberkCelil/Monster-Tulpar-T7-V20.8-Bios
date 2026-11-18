// decompiled by r2ghidra: 0703_CrbSmbiosDxe.pe32
// functions: 8

/* entry0 @ 0x10304 */

ulong entry0(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [16];
    
    fcn.00010388(param_1,param_2);
    *0x10590 = 0;
    *0x10588 = 0;
    iVar1 = (**(*0x10578 + 0x140))(0x10510,0,0x10588);
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000003;
    }
    else {
        uVar2 = (**(*0x10578 + 0x170))(0x200,8,0x10450,0,0x10530,auStackX_18);
    }
    return uVar2;
}


/* fcn.00010388 @ 0x10388 */

void fcn.00010388(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10578 = *(arg1 + 0x60);
    *0x10570 = arg1;
    fcn.00010494();
    puVar4 = fcn.00010494();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103dc:
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
            if ((*0x10540 == *(puVar4 + 4)) && (*0x10548 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103dc;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010494 @ 0x10494 */

int64_t fcn.00010494(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10580 == 0) {
        *0x10580 = 0;
        if (*(*0x10570 + 0x68) != 0) {
            piVar2 = *(*0x10570 + 0x70);
            do {
                if ((*0x10520 == *piVar2) && (*0x10528 == piVar2[1])) {
                    *0x10580 = (*(*0x10570 + 0x70))[uVar1 * 3 + 2];
                    return *0x10580;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10570 + 0x68));
        }
    }
    return *0x10580;
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


