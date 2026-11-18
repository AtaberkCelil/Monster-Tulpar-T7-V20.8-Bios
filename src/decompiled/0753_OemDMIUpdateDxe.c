// decompiled by r2ghidra: 0753_OemDMIUpdateDxe.pe32
// functions: 12

/* entry0 @ 0x103c0 */

void entry0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    fcn.00010448(noname_0,arg1);
    if (*0x10960 == 0) {
        *0x10950 = *(arg1 + 0x60);
        *0x10958 = *(arg1 + 0x58);
        *0x10960 = arg1;
    }
    iVar1 = (**(*0x10950 + 0x140))(0x108e8,0,68000);
    if ((-1 < iVar1) && (iVar1 = (**(*0x10950 + 0x140))(0x108a0,0,0x10998), -1 < iVar1)) {
        fcn.00010528();
    }
    return;
}


/* fcn.00010448 @ 0x10448 */

ulong fcn.00010448(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    
    *0x10948 = *(arg1 + 0x60);
    *0x10940 = arg1;
    fcn.000106a8();
    iVar3 = fcn.000106d8();
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
    if ((*0x10970 != NULL) || (iVar3 = (**(*0x10948 + 0x140))(0x108c0,0), -1 < iVar3)) {
        (***0x10970)(*0x10970,0x10978);
    }
    uVar4 = 0;
    if (*(*0x10940 + 0x68) != 0) {
        piVar6 = *(*0x10940 + 0x70);
        do {
            if ((*0x108d0 == *piVar6) && (*0x108d8 == piVar6[1])) {
                *0x10980 = (*(*0x10940 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x10940 + 0x68));
    }
    *0x10980 = 0;
    return 0x800000000000000e;
}


/* fcn.00010528 @ 0x10528 */

ulong fcn.00010528(void)

{
    int64_t *arg2;
    int64_t *arg1;
    ulong uVar1;
    int64_t iVar2;
    int64_t var_20h;
    int8_t var_bp_18h;
    int64_t var_17h;
    int64_t var_fh;
    int32_t var_7h;
    int16_t var_3h;
    int8_t var_1h;
    
    arg1 = &var_20h;
    var_bp_18h = str.Standard[8];
    iVar2 = 0x10;
    var_20h = str.Standard._0_8_;
    var_17h = 0;
    var_fh = 0;
    var_7h = 0;
    var_3h = 0;
    var_1h = 0;
    do {
        arg2 = (0x50 - &var_20h) + arg1 | 0xfe410d00;
        if (arg1 != arg2) {
            section..text(arg1,arg2,1);
        }
        arg1 = arg1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((((var_20h + 1U & 0xfe) == 0) && ((var_20h._1_1_ + 1U & 0xfe) == 0)) && (0xfd < var_20h._2_1_ - 1U)) {
        uVar1 = 0x8000000000000015;
    }
    else {
        (**(*0x10998 + 0x40))(0xb,1,0x10990,0x109a8);
        *0x10988 = *(*0x10990 + 2);
        uVar1 = (**(*0x109a0 + 8))(*0x109a0,0x10988,0x108e0,&var_20h);
        (**(*0x10950 + 0x48))(*0x10990);
    }
    return uVar1;
}


/* fcn.000106a8 @ 0x106a8 */

int64_t fcn.000106a8(void)

{
    if (*0x10968 == 0) {
        fcn.00010648(0x108b0,0x10968);
    }
    return *0x10968;
}


/* fcn.00010648 @ 0x10648 */

ulong fcn.00010648(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10940;
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


/* fcn.000106d8 @ 0x106d8 */

void fcn.000106d8(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000106a8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001070f:
            if ((piVar1 == NULL) || ((*0x108f8 == *(piVar1 + 4) && (*0x10900 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001070f;
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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1600 named .text
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


