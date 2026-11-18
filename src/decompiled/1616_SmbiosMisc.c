// decompiled by r2ghidra: 1616_SmbiosMisc.pe32
// functions: 19

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010338(arg1,in_RDX);
    fcn.000104b0(arg1,in_RDX);
    return;
}


/* fcn.00010338 @ 0x10338 */

void fcn.00010338(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x11288 = *(arg1 + 0x60);
    puVar4 = *0x11298;
    *0x11280 = arg1;
    if ((*0x11298 == NULL) && (fcn.00010e68(), puVar4 = *0x11298, *0x11298 == NULL)) {
        fcn.00010e68();
        puVar4 = *0x11298;
    }
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103ab:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
code_r0x00010414:
                (**(*0x11288 + 0x140))(0x10f40,0,0x112a0);
                (**(*0x11288 + 0x140))(0x10f30,0,0x112c0);
                (**(*0x11288 + 0x140))(0x10f10,0,0x112b0);
                (**(*0x11288 + 0x140))(0x10f60,0,0x112a8);
    //WARNING: Could not recover jumptable at 0x000104a9. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x11288 + 0x140))(0x10f20,0,0x112b8);
                return;
            }
            if ((*0x11228 == *(puVar4 + 4)) && (*0x11230 == *(puVar4 + 8))) goto code_r0x00010414;
        }
        else if (uVar1 == 4) goto code_r0x000103ab;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000104b0 @ 0x104b0 */

int64_t fcn.000104b0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t arg2_00;
    int64_t *piVar2;
    int64_t arg3;
    int64_t in_R9;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x11288 + 0x140))(0x10f00,0,&iStackX_10);
    if (-1 < iVar1) {
        iVar1 = fcn.00010e2c();
        iVar1 = (**(iVar1 + 0x20))(0x211);
        iVar3 = 0xf;
        piVar2 = iVar1 + 0x10;
        do {
            if (iVar1 == 0) {
code_r0x00010542:
                in_R9 = CONCAT71(in_R9 >> 8,*(-iVar1 + 0x10fd8 + piVar2));
                arg3 = *(-iVar1 + 0x10fd0 + piVar2);
                arg2_00 = *(-iVar1 + 0x10fc8 + piVar2);
                arg1_00 = *(-iVar1 + 0x10fc0 + piVar2);
            }
            else {
                arg1_00 = piVar2[-2];
                arg2_00 = piVar2[-1];
                arg3 = *piVar2;
                in_R9 = CONCAT71(in_R9 >> 8,piVar2[1]);
                if (arg1_00 == 0) goto code_r0x00010542;
            }
            fcn.00010900(arg1_00,arg2_00,arg3,in_R9);
            piVar2 = piVar2 + 5;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (*(*0x11280 + 8) < 0x20000) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            iVar1 = (**(*0x11288 + 0x170))(0x200,8,0x105dc,0,0x10ee0,&iStackX_8);
        }
    }
    return iVar1;
}


/* fcn.00010e68 @ 0x10e68 */

ulong fcn.00010e68(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    *0x11298 = 0;
    if (*(*0x11280 + 0x68) != 0) {
        piVar2 = *(*0x11280 + 0x70);
        do {
            if ((*0x10f50 == *piVar2) && (*0x10f58 == piVar2[1])) {
                *0x11298 = (*(*0x11280 + 0x70))[uVar1 * 3 + 2];
                return 0;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x11280 + 0x68));
    }
    return 0x800000000000000e;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00010e2c @ 0x10e2c */

int64_t fcn.00010e2c(void)

{
    if (*0x11290 == 0) {
        (**(*0x11288 + 0x140))(0x10ef0,0,0x11290);
    }
    return *0x11290;
}


/* fcn.00010900 @ 0x10900 */

ulong fcn.00010900(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    int16_t *piVar6;
    uint8_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t *arg1_00;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint8_t uStackX_8;
    uint64_t in_stack_00000028;
    ulong *in_stack_00000030;
    ushort auStack_f8 [2];
    ushort auStack_f4 [2];
    int64_t *piStack_f0;
    uint64_t uStack_e8;
    int64_t iStack_e0;
    char *pcStack_d8;
    int64_t iStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    ulong auStack_b8 [2];
    char *apcStack_a8 [2];
    int64_t aiStack_98 [11];
    
    uVar12 = 0;
    uStack_e8 = 0;
    iStack_e0 = 0;
    uStack_c8 = 0;
    uVar10 = 0x8000000000000003;
    if ((arg1 == 0) || (10 < arg3)) {
        uVar10 = 0x8000000000000002;
    }
    else {
        pcStack_d8 = arg1;
        iStack_d0 = arg2;
        if (arg3 != 0) {
            uStack_c8 = fcn.00010e00(arg3 << 7);
        }
        uVar8 = 0;
        uStackX_8 = 0;
        pcVar4 = arg1;
        iVar13 = arg2;
        piStack_f0 = arg2;
        if (in_stack_00000028 != 0) {
            do {
                uVar3 = uStack_c8;
                uVar7 = uVar8;
                if (pcVar4 != NULL) {
                    if (arg2 != 0) {
                        if (iVar13 == 0) goto code_r0x00010c05;
                        if (arg3 != 0) {
                            if (arg3 << 3 != 0) {
                                fcn.000102c0(aiStack_98,arg3 << 3);
                            }
                            uStack_e8 = 0;
                            iStack_c0 = (arg3 & 0x1ffffffffffffffU) << 6;
                            iStack_e0 = 0;
                            uVar12 = 0;
                            auStack_b8[0] = uVar3;
                            if (arg3 != 0) {
                                arg1_00 = aiStack_98;
                                iVar9 = arg3;
                                do {
                                    if ((*piStack_f0 != 0) && (*arg1_00 == 0)) {
                                        fcn.00010820(arg1_00,*piStack_f0,auStack_b8,&uStack_e8);
                                    }
                                    piStack_f0 = piStack_f0 + 1;
                                    arg1_00 = arg1_00 + 1;
                                    iVar9 = iVar9 + -1;
                                } while (iVar9 != 0);
                                uVar12 = uStack_e8;
                            }
                        }
                    }
                    if ((iVar13 == 0) || (arg3 == 0)) {
                        iVar13 = 2;
                    }
                    else {
                        iVar13 = iStack_e0 + 1 + uVar12;
                    }
                    pcVar4 = fcn.00010dd0(piStack_f0,*(arg1 + 1) + iVar13);
                    if (pcVar4 == NULL) {
                        uVar10 = 0x8000000000000009;
                        break;
                    }
                    iVar9 = *(arg1 + 1) + iVar13;
                    if (iVar9 != 0) {
                        fcn.000102c0(pcVar4,iVar9);
                    }
                    if ((*(arg1 + 1) != 0) && (pcVar4 != pcStack_d8)) {
                        section..text(pcVar4,pcStack_d8,*(arg1 + 1));
                    }
                    uVar8 = 0;
                    if (((iStack_d0 != 0) && (arg3 != 0)) && (uVar7 = *(arg1 + 1), uVar12 != 0)) {
                        uVar11 = uVar8;
                        do {
                            if (aiStack_98[uVar11] != 0) {
                                fcn.00010d3c(aiStack_98[uVar11],pcVar4 + uVar11 + uVar8 + uVar7,iVar13);
                                piVar6 = aiStack_98[uVar11];
                                iVar5 = 0;
                                iVar1 = *piVar6;
                                piVar2 = piVar6;
                                iVar9 = iVar5;
                                while (iVar1 != 0) {
                                    piVar2 = piVar2 + 1;
                                    iVar9 = iVar9 + 1;
                                    iVar1 = *piVar2;
                                }
                                uVar8 = uVar8 + iVar9;
                                for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
                                    iVar5 = iVar5 + 1;
                                }
                                iVar13 = iVar13 - iVar5;
                            }
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < uVar12);
                    }
                    auStack_f8[0] = 0xfffe;
                    if (*0x10f96 == *pcVar4) {
code_r0x00010bb2:
                        *0x10f96 = *pcVar4;
                        auStack_f4[0] = 0xfffe;
                        uVar10 = (**in_stack_00000030)(in_stack_00000030,0,auStack_f4);
                    }
                    else {
                        do {
                            iVar13 = (*in_stack_00000030[3])(in_stack_00000030,auStack_f8,0,apcStack_a8,0);
                            if (iVar13 != 0) break;
                        } while (*apcStack_a8[0] != *pcVar4);
                        if (iVar13 < 0) goto code_r0x00010bb2;
                        uVar10 = 0x8000000000000003;
                    }
                    (**(*0x11288 + 0x48))(pcVar4);
                    pcVar4 = pcStack_d8 + *(arg1 + 1);
                    iVar13 = iStack_d0 + arg3 * 2;
                    uVar7 = uStackX_8;
                    pcStack_d8 = pcVar4;
                    iStack_d0 = iVar13;
                }
code_r0x00010c05:
                uStackX_8 = uVar7 + 1;
                uVar8 = uStackX_8;
            } while (uVar8 < in_stack_00000028);
        }
        if ((arg4 != '\0') && ((**(*0x11288 + 0x48))(arg1), arg3 != 0)) {
            (**(*0x11288 + 0x48))(arg2);
        }
    }
    return uVar10;
}


/* fcn.00010e00 @ 0x10e00 */

void fcn.00010e00(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010dd0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010dd0 @ 0x10dd0 */

ulong fcn.00010dd0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11288 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3168 named .text
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


/* fcn.00010c9c @ 0x10c9c */

ulong fcn.00010c9c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00010c68(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00010d12;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00010d12:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00010820 @ 0x10820 */

ulong fcn.00010820(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    
    if (*arg3 == 0) {
        return 0x8000000000000002;
    }
    if (in_stack_00000030 == NULL) {
        return 0x8000000000000005;
    }
    piVar3 = arg2;
    uVar4 = 0;
    if (*arg2 != 0) {
        do {
            piVar3 = piVar3 + 1;
            uVar4 = uVar4 + 1;
        } while (*piVar3 != 0);
        uVar5 = 0x40;
        if (0x40 < uVar4) goto code_r0x000108ab;
    }
    iVar1 = *arg2;
    piVar3 = arg2;
    uVar5 = 0;
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        uVar5 = uVar5 + 1;
        iVar1 = *piVar3;
    }
code_r0x000108ab:
    fcn.00010c9c(*arg3,*in_stack_00000030,arg2);
    iVar2 = *arg3;
    *arg4 = *arg4 + 1;
    *arg1 = iVar2;
    *arg3 = iVar2 + 2 + uVar5 * 2;
    *in_stack_00000030 = *in_stack_00000030 + (-1 - uVar5);
    *in_stack_00000028 = *in_stack_00000028 + uVar5;
    return 0;
}


/* fcn.00010d3c @ 0x10d3c */

ulong fcn.00010d3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00010c68(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00010dbe;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x00010dbe:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.00010c68 @ 0x10c68 */

uint64_t fcn.00010c68(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


