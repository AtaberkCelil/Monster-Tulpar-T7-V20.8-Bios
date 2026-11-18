// decompiled by r2ghidra: 0843_OemACRecoveryDxe.pe32
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
    
    *0x10798 = *(arg1 + 0x60);
    *0x10790 = arg1;
    fcn.0001052c();
    puVar4 = fcn.0001052c();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010380:
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
            if ((*0x10720 == *(puVar4 + 4)) && (*0x10728 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000103f4 @ 0x103f4 */

int64_t fcn.000103f4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t var_bp_10h;
    uint auStackX_18 [2];
    ulong uStackX_20;
    int8_t var_bp_30h;
    int64_t var_840h;
    int64_t var_848h;
    uint uStack_8f8;
    uint uStack_8f4;
    uint uStack_8f0;
    uint uStack_8ec;
    ulong auStack_8e8 [2];
    uchar auStack_8d8 [95];
    char cStack_879;
    uchar auStack_818 [32];
    uchar uStack_7f8;
    int8_t var_51h;
    
    uStackX_20 = 0x80d;
    uStack_8f8 = 0x4570b7f1;
    uStack_8f4 = 0x4943ade8;
    uStack_8f0 = 0x6440c38d;
    uStack_8ec = 0x84238472;
    auStack_8e8[0] = 0xb4;
    var_bp_10h = CONCAT44(arg1 >> 0x20,7);
    if (*0x107b0 == 0) {
        *0x107a8 = *(arg2 + 0x58);
        *0x107b0 = arg2;
    }
    iVar1 = (**(*0x107a8 + 0x48))(L"UniWillVariable",0x10710,&var_bp_10h,auStack_8e8,auStack_8d8);
    if (-1 < iVar1) {
        (**(*0x107a8 + 0x48))(L"PchSetup",&uStack_8f8,auStackX_18,&uStackX_20,auStack_818);
        if (cStack_879 == '\0') {
            uStack_7f8 = 1;
        }
        if (cStack_879 == '\x01') {
            uStack_7f8 = 0;
        }
        (**(*0x107a8 + 0x58))(L"PchSetup",&uStack_8f8,auStackX_18[0],uStackX_20,auStack_818);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001052c @ 0x1052c */

int64_t fcn.0001052c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x107a0 == 0) {
        *0x107a0 = 0;
        if (*(*0x10790 + 0x68) != 0) {
            piVar2 = *(*0x10790 + 0x70);
            do {
                if ((*0x10700 == *piVar2) && (*0x10708 == piVar2[1])) {
                    *0x107a0 = (*(*0x10790 + 0x70))[uVar1 * 3 + 2];
                    return *0x107a0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10790 + 0x68));
        }
    }
    return *0x107a0;
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


