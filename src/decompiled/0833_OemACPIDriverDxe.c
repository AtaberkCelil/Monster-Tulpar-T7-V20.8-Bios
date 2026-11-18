// decompiled by r2ghidra: 0833_OemACPIDriverDxe.pe32
// functions: 15

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001033c(arg1,arg2);
    fcn.00010418(arg1,arg2);
    return;
}


/* fcn.0001033c @ 0x1033c */

ulong fcn.0001033c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x10a78 = *(arg1 + 0x60);
    *0x10a70 = arg1;
    fcn.0001061c();
    puVar4 = fcn.0001061c();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010390:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102c0();
                fcn.000102b0();
                uVar2 = in(0x1808);
                fcn.00010290(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010280();
                }
                fcn.00010290(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102b0();
                }
                else {
                    fcn.000102a0();
                }
code_r0x000103f9:
                uVar7 = 0;
                if (*(*0x10a70 + 0x68) != 0) {
                    piVar8 = *(*0x10a70 + 0x70);
                    do {
                        if ((*0x10a10 == *piVar8) && (*0x10a18 == piVar8[1])) {
                            *0x10a88 = (*(*0x10a70 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x10a70 + 0x68));
                }
                *0x10a88 = 0;
                return 0x800000000000000e;
            }
            if ((*0x10a20 == *(puVar4 + 4)) && (*0x10a28 == *(puVar4 + 8))) goto code_r0x000103f9;
        }
        else if (uVar1 == 4) goto code_r0x00010390;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010418 @ 0x10418 */

int64_t fcn.00010418(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    uchar auStackX_18 [16];
    
    if (*0x10aa0 == 0) {
        *0x10a90 = *(arg2 + 0x60);
        *0x10a98 = *(arg2 + 0x58);
        *0x10aa0 = arg2;
    }
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x10a78 + 0x40))(10,0x10,0x10aa8);
    if (-1 < iVar1) {
        fcn.00010260(*0x10aa8,0x10);
        **0x10aa8 = 0x53414441;
        *(*0x10aa8 + 5) = *0x10aa8;
        *(*0x10aa8 + 9) = 0x10;
        (**(*0x10a78 + 0x148))(aiStackX_8,0x10a00,0x10aa8,0);
        (**(*0x10a78 + 0x170))(0x200,8,0x10500,0,0x109e0,auStackX_18);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001061c @ 0x1061c */

int64_t fcn.0001061c(void)

{
    if (*0x10a80 == 0) {
        fcn.000105bc(0x109f0,0x10a80);
    }
    return *0x10a80;
}


/* fcn.000105bc @ 0x105bc */

ulong fcn.000105bc(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10a70;
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


/* fcn.000102c0 @ 0x102c0 */

uint64_t fcn.000102c0(void)

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


/* fcn.000102b0 @ 0x102b0 */

void fcn.000102b0(void)

{
    return;
}


/* fcn.00010290 @ 0x10290 */

uint64_t fcn.00010290(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

{
    return;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(void)

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
    //[00] -r-x section size 1920 named .text
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


/* fcn.00010794 @ 0x10794 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010794(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_38 [16];
    int64_t var_bp_10h;
    
    iVar2 = 0;
    piStackX_18 = NULL;
    uVar3 = 0;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x10a90 + 0x140))(0x10a30,0,&iStackX_20);
    if (iVar1 < 0) {
        iVar1 = -0x5ffffffffffffffe;
    }
    else {
        iVar4 = 0;
        iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_38);
        if (-1 < iVar1) {
            do {
                if (*piStackX_18 == 0x50434146) {
                    if (auStackX_10[0] == 2) {
                        uVar3 = piStackX_18[10];
                    }
                    if ((auStackX_10[0] & 0x1c) != 0) {
                        iVar2 = *(piStackX_18 + 0x23);
                    }
                }
                if ((uVar3 != 0) && (iVar2 != 0)) goto code_r0x00010847;
                iVar4 = iVar4 + 1;
                iVar1 = (**(iStackX_20 + 8))(iVar4,&piStackX_18,auStackX_10,auStack_38);
            } while (-1 < iVar1);
            if (iVar2 == 0) {
                if (uVar3 == 0) {
                    return iVar1;
                }
                *arg1 = uVar3;
            }
            else {
code_r0x00010847:
                *arg1 = iVar2;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010724 @ 0x10724 */

int64_t fcn.00010724(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RCX;
    int64_t in_RDX;
    int64_t in_R8;
    uint8_t *puStack_28;
    
    iVar1 = fcn.0001064c(in_RCX,in_RDX,in_R8,arg1);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (*puStack_28 < 2) {
        if (1 < arg1) {
            return -0x7ffffffffffffffe;
        }
        *puStack_28 = arg1;
    }
    else if (*puStack_28 == 10) {
        puStack_28[1] = arg1;
    }
    else if (*puStack_28 == 0xb) {
        *(puStack_28 + 1) = arg1;
    }
    else if (*puStack_28 == 0xc) {
        *(puStack_28 + 1) = arg1;
    }
    else {
        if (*puStack_28 != 0xe) {
            return -0x7ffffffffffffffe;
        }
        *(puStack_28 + 1) = arg1;
    }
    return 0;
}


/* fcn.00010920 @ 0x10920 */

int64_t fcn.00010920(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.0001064c @ 0x1064c */

ulong fcn.0001064c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int *piVar2;
    char *pcVar3;
    int *piVar4;
    uint32_t uVar5;
    int64_t arg3_00;
    int aiStackX_20 [2];
    int64_t *in_stack_00000028;
    
    do {
        arg3_00 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            arg3_00 = arg3_00 + 1;
            cVar1 = *(arg3_00 + arg3);
        }
        aiStackX_20[0] = 0x5f5f5f5f;
        fcn.00010920(aiStackX_20,arg3,arg3_00);
        uVar5 = 0;
        if (arg2 != NULL) {
            pcVar3 = NULL;
            do {
                piVar4 = pcVar3 + arg1;
                if (*piVar4 == aiStackX_20[0]) goto code_r0x000106b3;
                uVar5 = uVar5 + 1;
                pcVar3 = uVar5;
            } while (pcVar3 < arg2);
        }
        piVar4 = NULL;
code_r0x000106b3:
        if (piVar4 == NULL) {
            return 0x800000000000000e;
        }
        piVar2 = piVar4;
        if ((*(piVar4 + -1) + 0xa4U & 0xfd) == 0) {
            piVar2 = piVar4 + -1;
        }
        if (*(piVar2 + -1) == '\b') {
            *(in_stack_00000028 + 0x1c) = 0;
            in_stack_00000028[1] = piVar2;
            in_stack_00000028[2] = piVar4 + 1;
            *in_stack_00000028 = piVar2 + -1;
            *(in_stack_00000028 + 3) = 3;
            return 0;
        }
        arg2 = arg1 + arg2 + (4 - piVar4);
        arg1 = piVar4 + 1;
    } while( true );
}


