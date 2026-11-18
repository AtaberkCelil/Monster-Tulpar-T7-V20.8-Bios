// decompiled by r2ghidra: 0768_OemNbTypeDxe.pe32
// functions: 10

/* entry0 @ 0x103b4 */

ulong entry0(ulong param_1,int64_t param_2)

{
    uint8_t uVar1;
    ulong uVar2;
    uint8_t auStackX_18 [16];
    
    fcn.00010430(param_1,param_2);
    fcn.000102b0(auStackX_18,0xfe410d43,1);
    if (auStackX_18[0] == 0xff) {
        uVar2 = 0x8000000000000006;
    }
    else if (auStackX_18[0] < 2) {
        uVar2 = 0;
        if ((auStackX_18[0] == 0) || (auStackX_18[0] != 1)) {
            uVar1 = *0xfe41074e & 0xf7;
        }
        else {
            uVar1 = *0xfe41074e | 8;
        }
        if (uVar1 != *0xfe41074e) {
            *0xfe41074e = uVar1;
        }
    }
    else {
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.00010430 @ 0x10430 */

void fcn.00010430(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x10618 = *(arg1 + 0x60);
    *0x10610 = arg1;
    fcn.00010500();
    iVar3 = fcn.0001056c();
    if (iVar3 == 0) {
        uVar4 = fcn.000102a0();
        fcn.00010290();
        uVar1 = in(0x1808);
        fcn.00010270(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010260();
        }
        fcn.00010270(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010290();
        }
        else {
            fcn.00010280();
        }
    }
    if ((*0x10628 != NULL) || (iVar3 = (**(*0x10618 + 0x140))(0x105d0,0,0x10628), -1 < iVar3)) {
        (***0x10628)(*0x10628,0x10630);
    }
    return;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.00010500 @ 0x10500 */

int64_t fcn.00010500(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10620 == 0) {
        *0x10620 = 0;
        if (*(*0x10610 + 0x68) != 0) {
            piVar2 = *(*0x10610 + 0x70);
            do {
                if ((*0x105c0 == *piVar2) && (*0x105c8 == piVar2[1])) {
                    *0x10620 = (*(*0x10610 + 0x70))[uVar1 * 3 + 2];
                    return *0x10620;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10610 + 0x68));
        }
    }
    return *0x10620;
}


/* fcn.0001056c @ 0x1056c */

void fcn.0001056c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010500();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000105a3:
            if ((piVar1 == NULL) || ((*0x105e0 == *(piVar1 + 4) && (*0x105e8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000105a3;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


