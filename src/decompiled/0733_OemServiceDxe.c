// decompiled by r2ghidra: 0733_OemServiceDxe.pe32
// functions: 12

/* entry0 @ 0x103c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103dc(arg1,arg2);
    fcn.000104c8(arg1,arg2);
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
    
    *0x10c48 = *(arg1 + 0x60);
    *0x10c40 = arg1;
    fcn.00010980();
    iVar3 = fcn.000109ec();
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
    if ((*0x10c70 != NULL) || (iVar3 = (**(*0x10c48 + 0x140))(0x10be0,0,0x10c70), -1 < iVar3)) {
        (***0x10c70)(*0x10c70,0x10c78);
    }
    //WARNING: Could not recover jumptable at 0x000104bf. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x10c48 + 0x140))(0x10bb0,0,0x10c80);
    return;
}


/* fcn.000104c8 @ 0x104c8 */

int64_t fcn.000104c8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    uchar auStackX_18 [8];
    
    if (*0x10c60 == 0) {
        *0x10c50 = *(arg2 + 0x60);
        *0x10c58 = *(arg2 + 0x58);
        *0x10c60 = arg2;
    }
    iStackX_8 = arg1;
    iVar1 = (**(*0x10c50 + 0x40))(6,0x20,0x10c30);
    if (-1 < iVar1) {
        fcn.00010260(*0x10c30,0x20);
        iVar1 = (**(*0x10c50 + 0x40))(10,0x70000,*0x10c30 + 8);
        if (iVar1 < 0) {
            if (*0x10c30 != 0) {
                (**(*0x10c50 + 0x48))();
            }
        }
        else {
            fcn.00010260(*(*0x10c30 + 8),0x70000);
            iVar1 = (**(*0x10c50 + 0x140))(0x10bd0,0,0x10c38);
            if (iVar1 < 0) {
                *0x10c38 = 0;
            }
            *(*0x10c30 + 0x10) = 0x107c4;
            *(*0x10c30 + 0x18) = 0x10938;
            iStackX_8 = 0;
            iVar1 = (**(*0x10c50 + 0x148))(&iStackX_8,0x10ba0,*0x10c30,0);
            if (-1 < iVar1) {
                (**(*0x10c50 + 0x170))(0x200,8,0x10664,0,0x10bf0,auStackX_18);
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00010980 @ 0x10980 */

int64_t fcn.00010980(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10c68 == 0) {
        *0x10c68 = 0;
        if (*(*0x10c40 + 0x68) != 0) {
            piVar2 = *(*0x10c40 + 0x70);
            do {
                if ((*0x10bc0 == *piVar2) && (*0x10bc8 == piVar2[1])) {
                    *0x10c68 = (*(*0x10c40 + 0x70))[uVar1 * 3 + 2];
                    return *0x10c68;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10c40 + 0x68));
        }
    }
    return *0x10c68;
}


/* fcn.000109ec @ 0x109ec */

void fcn.000109ec(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010980();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010a23:
            if ((piVar1 == NULL) || ((*0x10c00 == *(piVar1 + 4) && (*0x10c08 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010a23;
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


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 2368 named .text
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

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


