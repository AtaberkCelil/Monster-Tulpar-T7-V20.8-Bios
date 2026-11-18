// decompiled by r2ghidra: 0838_OemACPIDriverHookDxe.pe32
// functions: 10

/* entry0 @ 0x103c0 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103f4(arg1,arg2);
    if (*0x10798 == 0) {
        *0x10790 = *(arg2 + 0x58);
        *0x10798 = arg2;
    }
    return 0;
}


/* fcn.000103f4 @ 0x103f4 */

ulong fcn.000103f4(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    
    *0x10788 = *(arg1 + 0x60);
    *0x10780 = arg1;
    fcn.00010534();
    iVar3 = fcn.00010564();
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
    if ((*0x107a8 != NULL) || (iVar3 = (**(*0x10788 + 0x140))(0x10730,0), -1 < iVar3)) {
        (***0x107a8)(*0x107a8,0x107b0);
    }
    uVar4 = 0;
    if (*(*0x10780 + 0x68) != 0) {
        piVar6 = *(*0x10780 + 0x70);
        do {
            if ((*0x10740 == *piVar6) && (*0x10748 == piVar6[1])) {
                *0x107b8 = (*(*0x10780 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x10780 + 0x68));
    }
    *0x107b8 = 0;
    return 0x800000000000000e;
}


/* fcn.00010534 @ 0x10534 */

int64_t fcn.00010534(void)

{
    if (*0x107a0 == 0) {
        fcn.000104d4(0x10720,0x107a0);
    }
    return *0x107a0;
}


/* fcn.000104d4 @ 0x104d4 */

ulong fcn.000104d4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10780;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00010564 @ 0x10564 */

void fcn.00010564(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010534();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001059b:
            if ((piVar1 == NULL) || ((*0x10750 == *(piVar1 + 4) && (*0x10758 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001059b;
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


