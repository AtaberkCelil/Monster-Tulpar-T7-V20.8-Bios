// decompiled by r2ghidra: 0483_Acoustic.pe32
// functions: 12

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
    
    *0x10b28 = *(arg1 + 0x60);
    *0x10b20 = arg1;
    fcn.000107dc();
    puVar4 = fcn.000107dc();
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
            if ((*0x10ad0 == *(puVar4 + 4)) && (*0x10ad8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000103f4 @ 0x103f4 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000103f4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *noname_0;
    ulong noname_1;
    uchar uVar3;
    uint64_t auStackX_8 [2];
    uchar *puStackX_18;
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    ulong auStack_28 [2];
    int64_t var_10h;
    
    uStackX_20 = 0;
    uVar3 = 0;
    puStackX_18 = NULL;
    auStack_28[0] = 0;
    auStackX_8[0] = arg1 & 0xffffffff00000000;
    if (*0x10b48 == 0) {
        *0x10b38 = *(arg2 + 0x60);
        *0x10b40 = *(arg2 + 0x58);
        *0x10b48 = arg2;
    }
    iVar2 = (**(*0x10b38 + 0x40))(4,8,0x10b50);
    if (-1 < iVar2) {
        noname_1 = 0x10ab0;
        **0x10b50 = 0x10658;
        noname_0 = &uStackX_20;
        iVar2 = (**(*0x10b38 + 0x80))(noname_0,0x10ab0,0,*0x10b50);
        if (-1 < iVar2) {
            iVar2 = fcn.00010874(noname_0,noname_1,auStackX_8,auStack_28);
            if (iVar2 < 0) {
                iVar1 = auStackX_8[0];
                if (auStackX_8[0] == 0) {
                    iVar1 = 3;
                }
                auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,iVar1);
            }
            else {
                uVar3 = *puStackX_18;
            }
            iVar2 = (**(*0x10b38 + 0x40))(4,0x59,&puStackX_18);
            if (-1 < iVar2) {
                (**(*0x10b38 + 0x168))(puStackX_18,0x59,0);
                *puStackX_18 = uVar3;
                iVar2 = (**(*0x10b40 + 0x58))
                                  (L"AcousticVarName",0x10ac0,auStackX_8[0] & 0xffffffff,0x59,puStackX_18);
                if (-1 < iVar2) {
                    if (puStackX_18 != NULL) {
                        (**(*0x10b38 + 0x48))();
                    }
                    iVar2 = 0;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.000107dc @ 0x107dc */

int64_t fcn.000107dc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10b30 == 0) {
        *0x10b30 = 0;
        if (*(*0x10b20 + 0x68) != 0) {
            piVar2 = *(*0x10b20 + 0x70);
            do {
                if ((*0x10aa0 == *piVar2) && (*0x10aa8 == piVar2[1])) {
                    *0x10b30 = (*(*0x10b20 + 0x70))[uVar1 * 3 + 2];
                    return *0x10b30;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10b20 + 0x68));
        }
    }
    return *0x10b30;
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


/* fcn.00010874 @ 0x10874 */

int64_t fcn.00010874(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg2 = 0;
    }
    iVar1 = (**(*0x10b40 + 0x48))(L"AcousticVarName",0x10ac0,arg1,arg2,*in_stack_00000028);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x10b38 + 0x48))();
        }
        iVar1 = fcn.00010848(*arg2);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x10b40 + 0x48))(L"AcousticVarName",0x10ac0,arg1,arg2,iVar1);
        }
    }
    return iVar1;
}


/* fcn.0001055c @ 0x1055c */

int64_t fcn.0001055c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    char acStackX_8 [8];
    int64_t in_stack_00000028;
    char acStack_28 [8];
    char acStack_20 [8];
    uchar auStack_18 [16];
    
    iVar1 = 0;
    if (arg2 == 1) {
        iVar1 = *(*(arg1 + 0x350) + 0x78);
        *arg4 = *(arg1 + 8);
    }
    iVar1 = (**(iVar1 + 0x70))(iVar1,auStack_18,acStack_20,acStack_28,acStackX_8);
    if (-1 < iVar1) {
        uVar3 = 0;
        do {
            if ((((*(uVar3 + 0x1a + in_stack_00000028) == acStack_20[0]) &&
                 (*(uVar3 + 0x1d + in_stack_00000028) == acStack_28[0])) &&
                (*(uVar3 + 0x20 + in_stack_00000028) == acStackX_8[0])) &&
               (*(uVar3 + 0x14 + in_stack_00000028) == '\x01')) break;
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 3);
        if (uVar3 == '\x03') {
            uVar3 = 0;
            do {
                if (((*(uVar3 + 0x1a + in_stack_00000028) == '\0') && (*(uVar3 + 0x1d + in_stack_00000028) == '\0')) &&
                   ((*(uVar3 + 0x20 + in_stack_00000028) == '\0' && (*(uVar3 + 0x14 + in_stack_00000028) == '\0')))) {
                    *(uVar3 + 0x1a + in_stack_00000028) = acStack_20[0];
                    *(uVar3 + 0x1d + in_stack_00000028) = acStack_28[0];
                    *(uVar3 + 0x20 + in_stack_00000028) = acStackX_8[0];
                    *(uVar3 + 0x14 + in_stack_00000028) = 1;
                    break;
                }
                uVar2 = uVar3 + 1;
                uVar3 = uVar2;
            } while (uVar2 < 3);
        }
        *arg3 = uVar3;
        *(uVar3 + 0x17 + in_stack_00000028) = arg2 != 0;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010848 @ 0x10848 */

ulong fcn.00010848(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x10b38 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


