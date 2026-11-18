// decompiled by r2ghidra: 0074_TimestampDxe.pe32
// functions: 9

/* entry0 @ 0x10330 */

ulong entry0(int64_t arg1)

{
    int64_t in_RDX;
    ulong auStackX_18 [2];
    
    fcn.00010394(arg1,in_RDX);
    auStackX_18[0] = 0;
    *0x105f0 = 0;
    *0x105e0 = *0x10618;
    *0x105f8 = 0xffffffffffffffff;
    *0x105e8 = 0xffffffffffffffff;
    (**(*0x10608 + 0x148))(auStackX_18,0x10580,0x105a0,0);
    return 0;
}


/* fcn.00010394 @ 0x10394 */

void fcn.00010394(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t noname_0_00;
    
    *0x10608 = *(arg1 + 0x60);
    *0x10600 = arg1;
    fcn.000104fc();
    puVar4 = fcn.000104fc();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103ed:
            if (puVar4 == NULL) goto code_r0x00010410;
            if ((*0x105b0 == *(puVar4 + 4)) && (*0x105b8 == *(puVar4 + 8))) {
                if (puVar4 == NULL) {
code_r0x00010410:
                    uVar5 = fcn.00010300();
                    fcn.000102f0();
                    uVar2 = in(0x1808);
                    iVar6 = fcn.000102d0(noname_0_00,0x1808);
                    while( true ) {
                        iVar3 = in(0x1808);
                        uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                        if ((uVar8 >> 0x17 & 1) != 0) break;
                        func_0x000102c0();
                    }
                    iVar7 = fcn.000102d0(uVar8,0x1808);
                    if ((uVar5 >> 9 & 1) == 0) {
                        fcn.000102f0();
                    }
                    else {
                        fcn.000102e0();
                    }
                    *0x10618 = (iVar7 - iVar6) * 0x2685;
                }
                else {
                    *0x10618 = *(puVar4 + 0xc);
                }
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103ed;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000104fc @ 0x104fc */

int64_t fcn.000104fc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10610 == 0) {
        *0x10610 = 0;
        if (*(*0x10600 + 0x68) != 0) {
            piVar2 = *(*0x10600 + 0x70);
            do {
                if ((*0x10590 == *piVar2) && (*0x10598 == piVar2[1])) {
                    *0x10610 = (*(*0x10600 + 0x70))[uVar1 * 3 + 2];
                    return *0x10610;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10600 + 0x68));
        }
    }
    return *0x10610;
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 768 named .text
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


