// decompiled by r2ghidra: 0473_AmiSyncSetupData.pe32
// functions: 9

/* entry0 @ 0x10304 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    
    *0x10728 = *(arg2 + 0x60);
    *0x10730 = *(arg2 + 0x58);
    *0x10720 = arg2;
    iStackX_8 = arg1;
    fcn.00010598();
    noname_0 = 0x106c0;
    iVar3 = fcn.00010604(0x106c0);
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
    (**(*0x10728 + 0x170))(0x200,8,0x103e0,0,0x10690,&iStackX_8);
    return;
}


/* fcn.00010598 @ 0x10598 */

int64_t fcn.00010598(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10740 == 0) {
        *0x10740 = 0;
        if (*(*0x10720 + 0x68) != 0) {
            piVar2 = *(*0x10720 + 0x70);
            do {
                if ((*0x10680 == *piVar2) && (*0x10688 == piVar2[1])) {
                    *0x10740 = (*(*0x10720 + 0x70))[uVar1 * 3 + 2];
                    return *0x10740;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10720 + 0x68));
        }
    }
    return *0x10740;
}


/* fcn.00010604 @ 0x10604 */

void fcn.00010604(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010598();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010632:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010632;
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


/* fcn.0001055c @ 0x1055c */

int64_t fcn.0001055c(void)

{
    if (*0x10738 == 0) {
        (**(*0x10728 + 0x140))(0x10660,0,0x10738);
    }
    return *0x10738;
}


