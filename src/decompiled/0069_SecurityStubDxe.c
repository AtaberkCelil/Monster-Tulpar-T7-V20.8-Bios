// decompiled by r2ghidra: 0069_SecurityStubDxe.pe32
// functions: 68

/* entry0 @ 0x103d0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000103f8(arg1,arg2);
    iVar1 = fcn.000107a8(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00010738();
    }
    return iVar1;
}


/* fcn.000103f8 @ 0x103f8 */

//WARNING: Removing unreachable block (ram,0x00012f01)
//WARNING: Removing unreachable block (ram,0x00012f0d)
//WARNING: Removing unreachable block (ram,0x00012f2f)
//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.000103f8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong noname_0;
    int64_t *piVar8;
    int64_t *piStackX_8;
    uchar auStackX_10 [8];
    int64_t var_bp_38h;
    uint uStack_38;
    uint uStack_34;
    ulong uStack_30;
    int64_t var_10h;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    *0x19238 = *(arg2 + 0x60);
    *0x19240 = *(arg2 + 0x58);
    *0x19230 = arg2;
    piStackX_8 = arg1;
    fcn.00012c48();
    noname_0 = 0x17618;
    iVar3 = fcn.00012c78(0x17618);
    if (iVar3 == 0) {
        uVar4 = fcn.00010360();
        fcn.00010350();
        uVar1 = in(0x1808);
        fcn.00010330(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar7 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar7 >> 0x17 & 1) != 0) break;
            fcn.000102a0();
        }
        fcn.00010330(uVar7,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    fcn.00012b84(0x175a0,0x19258);
    *0x19268 = 0x10000;
    if (*0x19260 == NULL) {
        iVar3 = (**(*0x19238 + 0x40))(6,0x10000,&piStackX_8);
        *0x19260 = piStackX_8;
        if (iVar3 < 0) {
            *0x19260 = NULL;
        }
        piStackX_8 = *0x19260;
        if ((*0x19260 == NULL) || (*0x19268 < 0x38)) goto code_r0x00010532;
    }
    uVar4 = *0x19268;
    piVar8 = *0x19260;
    iVar3 = *0x19268 - 0x28;
    (*0x19260)[2] = 0;
    piVar5 = piVar8 + 5;
    piVar8[1] = iVar3;
    *piVar8 = piVar5;
    piVar8[4] = piVar5;
    piVar8[3] = (uVar4 - 0x38) + piVar5;
code_r0x00010532:
    (**(*0x19240 + 0x18))(&uStack_38,0);
    fcn.000102b0(0x17628,&uStack_38,0x10);
    piStackX_8 = NULL;
    iVar3 = fcn.00012b84(0x17400,&piStackX_8);
    if (iVar3 < 0) {
        piVar5 = fcn.00012c78(0x17400);
    }
    else {
        piVar5 = piStackX_8;
    }
    if (piVar5 != NULL) {
        *0x192a8 = *(piVar5 + 0x1c);
        *0x19298 = ((*(piVar5 + 2) - 0x28) / *(piVar5 + 4)) * *(piVar5 + 0x1c);
        iVar6 = fcn.0001299c(*0x19298);
        *0x192b0 = iVar6;
        if (iVar6 != 0) {
            piVar8 = piVar5 + 5;
            *0x192a0 = *0x19298 + iVar6;
            if (piVar8 < *(piVar5 + 2) + piVar5) {
                uVar4 = *0x192a8;
                do {
                    (**(*0x19238 + 0x160))(iVar6,piVar8 + 1,uVar4);
                    uVar4 = *0x192a8;
                    piVar8 = piVar8 + *(piVar5 + 4);
                    iVar6 = iVar6 + uVar4;
                } while (piVar8 < *(piVar5 + 2) + piVar5);
            }
            if ((iVar3 < 0) && (iVar3 = fcn.00012a20(6,*(piVar5 + 2),piVar5), iVar3 != 0)) {
                (**(*0x19238 + 0xc0))(0x17400,iVar3);
            }
        }
    }
    if (*0x192e8 == 0) {
        fcn.00013768();
    }
    fcn.00012e98(0x137d4,9);
    if (*0x192e8 == 0) {
        fcn.00013768();
    }
    uStack_38 = 0x3aa83745;
    uStack_34 = 0x4f7a9454;
    uStack_30 = 0x8eab2fd0db90c0a7;
    if (*0x19338 == 0) {
        *0x19328 = *(arg2 + 0x60);
        *0x19330 = *(arg2 + 0x58);
        *0x19338 = arg2;
    }
    iVar3 = (**(*0x19328 + 0x50))(0x200,8,0x14e8c,0,&piStackX_8);
    if (-1 < iVar3) {
        (**(*0x19328 + 0xa8))(&uStack_38,piStackX_8,auStackX_10);
    }
    *0x19294 = *0x19294 | 0x80000004;
    if (*0x19270 == *0x19290) {
        uStack_30 = 0x12ede;
        *0x19288 = fcn.00012a80(0x14f84,*0x19290 << 4,*0x19290 + 0x10 << 4,*0x19288);
        if (*0x19288 != 0) {
            *0x19290 = *0x19290 + 0x10;
        }
    }
    iVar3 = *0x19288;
    *0x19284 = *0x19284 + 1;
    uVar4 = *0x19270;
    *0x19270 = *0x19270 + 1;
    *(*0x19288 + uVar4 * 0x10) = 0x80000004;
    *(iVar3 + 8 + uVar4 * 0x10) = 0x14f84;
    return 0;
}


/* fcn.000107a8 @ 0x107a8 */

ulong fcn.000107a8(int64_t arg1,int64_t arg2)

{
    ulong noname_1;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    
    iStackX_8 = arg1;
    aiStackX_10[0] = arg2;
    (**(*0x19238 + 0x148))(0x19210,0x17550,0x17608,0x17310,0x17600,0);
    aiStackX_10[0] = 0;
    (**(*0x19238 + 0x148))(aiStackX_10,0x173f0,0x17610);
    arg2_00 = 0;
    noname_1 = 8;
    (**(*0x19238 + 0x170))(0x200,8,0x10a54,0,0x17580,&iStackX_8);
    fcn.00012be4(0x173b0,noname_1,0x10a5c,arg2_00);
    return 0;
}


/* fcn.00012be4 @ 0x12be4 */

int64_t fcn.00012be4(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x19238 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x19238 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x19238 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00010738 @ 0x10738 */

void fcn.00010738(void)

{
    (**(*0x19238 + 0x70))(*0x192b8);
    (**(*0x19238 + 0x70))(*0x192e8);
    (**(*0x19238 + 0x70))(*0x192b8);
    (**(*0x19238 + 0x70))(*0x192e8);
    if (*0x19260 != 0) {
        fcn.00012cc4();
        (**(*0x19238 + 0x48))(*0x19260);
    }
    return;
}


/* fcn.00012cc4 @ 0x12cc4 */

void fcn.00012cc4(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x19260;
    if (*0x19260 != NULL) {
        if ((*0x19260)[1] != 0) {
            fcn.00010370(**0x19260,(*0x19260)[1],0);
        }
        piVar1[2] = piVar1[3];
        *piVar1[3] = *piVar1;
        iVar2 = 0;
        do {
            *(iVar2 + 8 + piVar1[2]) = 0;
            iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        piVar1[4] = *piVar1;
    }
    return;
}


/* fcn.00012c48 @ 0x12c48 */

int64_t fcn.00012c48(void)

{
    if (*0x19250 == 0) {
        fcn.00012b84(0x17510,0x19250);
    }
    return *0x19250;
}


/* fcn.00012b84 @ 0x12b84 */

ulong fcn.00012b84(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x19230;
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


/* fcn.00012c78 @ 0x12c78 */

void fcn.00012c78(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012c48();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012ca6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012ca6;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102a2 @ 0x102a2 */

void fcn.000102a2(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
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


/* fcn.0001299c @ 0x1299c */

ulong fcn.0001299c(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x19238 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00012a20 @ 0x12a20 */

int64_t fcn.00012a20(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x19238 + 0x40))(noname_0,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = fcn.000102b0(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.00013768 @ 0x13768 */

ulong fcn.00013768(void)

{
    ulong noname_1;
    int64_t arg2;
    
    arg2 = 0;
    noname_1 = 8;
    (**(*0x19238 + 0x170))(0x200,8,0x13354,0,0x17340,0x192b8);
    *0x192e8 = fcn.00012be4(0x174a0,noname_1,0x136ec,arg2);
    return 0;
}


/* fcn.00012f64 @ 0x12f64 */

int64_t fcn.00012f64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    ulong in_stack_00000028;
    
    if ((arg3 == 0) && (arg4 == 0)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        if ((*0x19270 != 0) && (uVar5 = 0, *0x19270 != 0)) {
            iVar3 = *0x19288;
            uVar4 = *0x19270;
            do {
                puVar6 = uVar5 * 0x10 + iVar3;
                uVar1 = *puVar6;
                if (arg4 == 0) {
                    uVar2 = uVar1 & 0x18;
                }
                else {
                    uVar2 = uVar1 & 7;
                }
                if ((uVar2 != 0) && ((arg1 & uVar1) != 0)) {
                    iVar3 = (**(puVar6 + 2))(arg2 & 0xffffffff,arg3,arg4,in_stack_00000028);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    iVar3 = *0x19288;
                    uVar4 = *0x19270;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
        }
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00012d1c @ 0x12d1c */

//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.00012d1c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint auStackX_8 [2];
    ulong uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    ulong auStack_58 [3];
    int64_t var_18h;
    
    auStackX_8[0] = arg1;
    uVar3 = 0;
    if (arg2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else if (*0x19280 == 0) {
        uVar1 = 0;
    }
    else {
        uStackX_10 = 0;
        iVar4 = arg2;
        uVar7 = uVar3;
        uVar1 = uVar3;
        if (*0x19280 != 0) {
            do {
                if ((*(*0x19278 + uVar7 * 0x10) < 0) && (uVar3 == 0)) {
                    iStackX_20 = iVar4;
                    iVar2 = (**(*0x19238 + 0xb8))(0x173e0,&iStackX_20,auStack_58);
                    uVar5 = 0;
                    uVar3 = fcn.00015fc8(0,arg2,&uStackX_10,auStackX_8);
                    if (((uVar3 != 0) ||
                        (uVar3 = fcn.00015fc8(CONCAT71(uVar5 >> 8,1),arg2,&uStackX_10,auStackX_8), uVar3 != 0)) &&
                       (-1 < iVar2)) {
                        iVar4 = (**(*0x19238 + 0x98))(auStack_58[0],0x17480,&iStackX_18);
                        if (iVar4 < 0) {
                            iStackX_18 = 0;
                        }
                        iVar4 = fcn.00010c64(iStackX_18,iStackX_20);
                    }
                }
                uVar1 = (**(*0x19278 + 8 + uVar7 * 0x10))(arg1 & 0xffffffff,iVar4,uVar3,uStackX_10);
            } while ((-1 < uVar1) && (uVar6 = uVar7 + 1, uVar7 = uVar6, uVar6 < *0x19280));
            if (uVar3 != 0) {
                (**(*0x19238 + 0x48))(uVar3);
            }
            if (iVar4 != arg2) {
                (**(*0x19238 + 0x48))(iVar4);
            }
        }
    }
    return uVar1;
}


/* fcn.00013308 @ 0x13308 */

ulong fcn.00013308(int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong uVar3;
    
    do {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return 0;
        }
        pcVar2 = 0x17640;
        iVar1 = *0x17648;
        while (iVar1 != 0) {
            if ((*arg1 == *pcVar2) && (*(arg1 + 1) == pcVar2[1])) {
    //WARNING: Could not recover jumptable at 0x00013350. Too many branches
    //WARNING: Treating indirect jump as call
                uVar3 = (**(pcVar2 + 8))();
                return uVar3;
            }
            iVar1 = *(pcVar2 + 0x18);
            pcVar2 = pcVar2 + 0x10;
        }
        arg1 = arg1 + *(arg1 + 2);
    } while( true );
}


/* fcn.00010ac0 @ 0x10ac0 */

ulong fcn.00010ac0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    
    if (arg1 != 0) {
        iVar3 = arg1;
        iVar1 = fcn.00010be8(arg1);
        uVar6 = 0;
        uVar5 = *0x19220;
        iVar4 = *0x19228;
        if (*0x19220 != 0) {
            iVar8 = 0;
            do {
                iVar3 = *(iVar8 + iVar4);
                if ((iVar1 == 0) || (arg1 == iVar3)) {
                    iVar2 = 0;
                }
                else {
                    iVar4 = arg1;
                    iVar2 = fcn.000102f0(arg1,iVar3,iVar1);
                    iVar3 = iVar4;
                    uVar5 = *0x19220;
                    iVar4 = *0x19228;
                }
                if (iVar2 == 0) {
                    iVar1 = uVar6 * 0x10 + iVar4;
                    goto code_r0x00010b4b;
                }
                uVar6 = uVar6 + 1;
                iVar8 = iVar8 + 0x10;
            } while (uVar6 < uVar5);
        }
        iVar1 = 0;
code_r0x00010b4b:
        if (*0x19218 == '\0') {
            if ((iVar1 == 0) && (iVar3 = fcn.00012a80(iVar3,uVar5 * 0x10,uVar5 * 0x10 + 0x10,iVar4), iVar3 != 0)) {
                piVar7 = iVar3 + *0x19220 * 0x10;
                *0x19228 = iVar3;
                iVar3 = fcn.00010c38(arg1);
                *piVar7 = iVar3;
                if (iVar3 != 0) {
                    *0x19220 = *0x19220 + 1;
                    *(piVar7 + 1) = arg2;
                    *(piVar7 + 9) = 0;
                }
            }
            return 0x800000000000000f;
        }
        *0x19219 = 1;
        if (iVar1 != 0) {
            *(iVar1 + 9) = 1;
        }
    }
    return 0;
}


/* fcn.00012af8 @ 0x12af8 */

ulong fcn.00012af8(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x19248 == NULL) {
        if ((*0x19238 != 0) && (*(*0x19238 + 0x140) != NULL)) {
            iVar1 = (**(*0x19238 + 0x140))(0x17300,0,0x19248);
            if (iVar1 < 0) {
                *0x19248 = NULL;
            }
            if (*0x19248 != NULL) goto code_r0x00012b61;
        }
        return 0x8000000000000003;
    }
code_r0x00012b61:
    //WARNING: Could not recover jumptable at 0x00012b7f. Too many branches
    //WARNING: Treating indirect jump as call
    uVar2 = (***0x19248)(0x90000002,0x3050007,0,0x175d0);
    return uVar2;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(void)

{
    return;
}


/* fcn.00010be8 @ 0x10be8 */

char * fcn.00010be8(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00010e78(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00012a80 @ 0x12a80 */

int64_t fcn.00012a80(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000129d0(noname_0,arg2);
    if ((arg1_00 != 0) && (arg3 != 0)) {
        if (arg1 < arg2) {
            arg2 = arg1;
        }
        if ((arg2 != 0) && (arg1_00 != arg3)) {
            fcn.000102b0(arg1_00,arg3,arg2);
        }
        (**(*0x19238 + 0x48))(arg3);
    }
    return arg1_00;
}


/* fcn.000129d0 @ 0x129d0 */

int64_t fcn.000129d0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x19238 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010310(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00010310 @ 0x10310 */

int64_t fcn.00010310(int64_t arg1,int64_t arg2)

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


/* fcn.00010c38 @ 0x10c38 */

void fcn.00010c38(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010be8(arg1);
    if (arg1_00 != 0) {
        fcn.00012a20(4,arg1_00,arg1);
    }
    return;
}


/* fcn.00010e78 @ 0x10e78 */

bool fcn.00010e78(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00010ed4 @ 0x10ed4 */

ulong fcn.00010ed4(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    uVar3 = 0;
    iVar2 = fcn.000151c0(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 2);
    if (*(arg1 + 4) < (iVar1 + iVar2) * 2 + 2U) {
        arg2_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 4) = arg2_00;
        uVar3 = fcn.00012a80(uVar3,iVar1 * 2,arg2_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.000151c0(*(arg1 + 2) * 2 + *arg1,*(arg1 + 4) + *(arg1 + 2) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 2) = *(arg1 + 2) + iVar2;
    return *arg1;
}


/* fcn.000151c0 @ 0x151c0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000151c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001521b;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001521b:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00015fa4(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00015f78(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x18e04;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x000155a5:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x18e04;
                }
                else {
                    pcVar9 = 0x18e08;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00015364:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x00015507;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001551e;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00015507;
                                }
                                goto code_r0x0001551e;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x00015507:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00015364;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x00015364;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001551e;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00015507;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001551e:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00015eec(&var_68h_2,0x26,0,0x18d98);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x000155a5;
                                if (uStack_a8 == 0x53) goto code_r0x000157b4;
                                if (uStack_a8 == 0x58) goto code_r0x000158aa;
                                if (uStack_a8 == 0x61) goto code_r0x000157bd;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00015349;
                                }
                                if (uStack_a8 != 100) goto code_r0x00015345;
                                goto code_r0x000158c1;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x18e04;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x00015abc;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x18e9b;
                                    goto code_r0x00015871;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00015871:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00015abc;
                            }
                            fcn.00015eec(&var_68h_2,0x26,0,0x18dfc);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x000157b4:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x000157bd:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x00015abc;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00015345;
                                    goto code_r0x000158ae;
                                }
                                goto code_r0x000158b3;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x00015abc;
                            }
                            fcn.00015eec(&var_68h_2,0x26,0,0x18de0);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00015abc;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x000158aa:
                    uVar5 = uVar5 | 0x20;
code_r0x000158ae:
                    uVar5 = uVar5 | 0x80;
code_r0x000158b3:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x000158c1:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00015903;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x00015903:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x0001598b:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001598b;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x00015345:
                    pcVar9 = &uStack_a8;
code_r0x00015349:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00015abc:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001518c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001518c(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001518c(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001518c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.0001515c @ 0x1515c */

void fcn.0001515c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000151c0(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011d4c @ 0x11d4c */

void fcn.00011d4c(int64_t arg1,int64_t arg2)

{
    fcn.00010ed4(arg1,0x18330,*arg2,*(arg2 + 1));
    return;
}


/* fcn.00010370 @ 0x10370 */

int64_t fcn.00010370(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00015fc8 @ 0x15fc8 */

int64_t fcn.00015fc8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char *pcVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    uchar auStackX_18 [8];
    char *pcStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong *puStack_50;
    ulong *puStack_48;
    uchar auStack_40 [8];
    int64_t aiStack_38 [2];
    
    pcVar5 = NULL;
    if ((arg3 == 0) || (arg4 == 0)) {
        return 0;
    }
    iStack_70 = 0;
    iStack_78 = 0;
    iStack_80 = 0;
    *arg4 = 0;
    pcVar2 = fcn.00010c38(arg2);
    if (pcVar2 == NULL) {
        return 0;
    }
    pcStack_88 = pcVar2;
    iVar3 = (**(*0x19238 + 0xb8))(0x174a0,&pcStack_88,&uStack_68);
    if (-1 < iVar3) {
        if ((*pcStack_88 != '\x04') || (pcVar4 = pcStack_88 + 4, pcStack_88[1] != '\x06')) {
            pcVar4 = pcVar5;
        }
        if ((pcVar4 == NULL) || (iVar3 = (**(*0x19238 + 0x98))(uStack_68,0x174a0,&iStack_58), iVar3 < 0))
        goto code_r0x0001611f;
        iStack_78 = 0;
        iVar3 = (**(iStack_58 + 0x18))(iStack_58,pcVar4,0x10,0,&iStack_78,&iStack_80,arg4);
        if (iVar3 < 0) {
            if (iStack_78 != 0) {
                (**(*0x19238 + 0x48))();
                *arg4 = 0;
            }
            iStack_78 = 0;
            iVar3 = (**(iStack_58 + 0x10))(iStack_58,pcVar4,&iStack_78,&iStack_80,auStackX_18,auStack_40,arg4);
            if (iVar3 < 0) goto code_r0x0001611f;
        }
code_r0x0001646b:
        *arg3 = iStack_80;
        goto code_r0x0001648e;
    }
code_r0x0001611f:
    pcStack_88 = pcVar2;
    iVar3 = (**(*0x19238 + 0xb8))(0x174f0,&pcStack_88,&uStack_68);
    if (((-1 < iVar3) && (iVar3 = (**(*0x19238 + 0x98))(uStack_68,0x174f0,aiStack_38), -1 < iVar3)) &&
       (iVar3 = (**(aiStack_38[0] + 8))(aiStack_38[0],&iStack_70), -1 < iVar3)) {
        pcVar4 = fcn.00010c38(pcStack_88);
        if (pcVar4 == NULL) {
            (**(iStack_70 + 0x10))(iStack_70);
            iVar3 = -0x7ffffffffffffff7;
        }
        pcStack_88 = pcVar4;
        while (iVar1 = iStack_70, -1 < iVar3) {
            if ((*pcStack_88 == '\x7f') && (pcStack_88[1] == -1)) {
code_r0x00016220:
                if (iVar3 < 0) break;
                iStack_60 = 0;
                iVar3 = (**(iStack_70 + 0x40))(iStack_70,0x17440,&iStack_60,0);
                if (iVar3 == -0x7ffffffffffffffb) {
                    pcVar5 = fcn.0001299c(iStack_60);
                    if (pcVar5 == NULL) {
                        iVar3 = -0x7ffffffffffffff7;
                        break;
                    }
                    iVar3 = (**(iStack_70 + 0x40))(iStack_70,0x17440,&iStack_60,pcVar5);
                }
                if (-1 < iVar3) {
                    if (pcVar5 == NULL) break;
                    if ((pcVar5[0x48] & 0x10U) == 0) {
                        iStack_78 = fcn.0001299c(*(pcVar5 + 8));
                        if (iStack_78 == 0) {
                            iVar3 = -0x7ffffffffffffff7;
                        }
                        else {
                            iStack_80 = *(pcVar5 + 8);
                            iVar3 = (**(iStack_70 + 0x20))(iStack_70,&iStack_80,iStack_78);
                        }
                    }
                }
                if (pcVar5 != NULL) {
                    (**(*0x19238 + 0x48))(pcVar5);
                }
                break;
            }
            if ((*pcStack_88 != '\x04') || (pcStack_88[1] != '\x04')) {
                iVar3 = -0x7ffffffffffffffd;
                goto code_r0x00016220;
            }
            iStack_70 = 0;
            iVar3 = (**(iVar1 + 8))(iVar1,&iStack_70,pcStack_88 + 4,1,0);
            (**(iVar1 + 0x10))(iVar1);
            pcStack_88 = pcStack_88 + *(pcStack_88 + 2);
        }
        if (iStack_70 != 0) {
            (**(iStack_70 + 0x10))(iStack_70);
        }
        if (pcVar4 != NULL) {
            (**(*0x19238 + 0x48))(pcVar4);
        }
        if (-1 < iVar3) goto code_r0x0001646b;
    }
    if (((arg1 == '\0') &&
        (pcStack_88 = pcVar2, iVar3 = (**(*0x19238 + 0xb8))(0x175f0,&pcStack_88,&uStack_68), -1 < iVar3)) &&
       (iVar3 = (**(*0x19238 + 0x98))(uStack_68,0x175f0,&puStack_50), -1 < iVar3)) {
        iStack_80 = 0;
        iStack_78 = 0;
        iVar3 = (**puStack_50)(puStack_50,pcStack_88,0,&iStack_80,0);
        if (iVar3 == -0x7ffffffffffffffb) {
            iStack_78 = fcn.0001299c(iStack_80);
            if (iStack_78 == 0) goto code_r0x000163cb;
            iVar3 = (**puStack_50)(puStack_50,pcStack_88,0,&iStack_80,iStack_78);
        }
        if (-1 < iVar3) goto code_r0x0001646b;
    }
code_r0x000163cb:
    pcStack_88 = pcVar2;
    iVar3 = (**(*0x19238 + 0xb8))(0x173e0,&pcStack_88,&uStack_68);
    if ((iVar3 < 0) || (iVar3 = (**(*0x19238 + 0x98))(uStack_68,0x173e0,&puStack_48), iVar3 < 0)) {
code_r0x00016474:
        if (iStack_78 != 0) {
            (**(*0x19238 + 0x48))();
            iStack_78 = 0;
        }
    }
    else {
        iStack_80 = 0;
        iStack_78 = 0;
        iVar3 = (**puStack_48)(puStack_48,pcStack_88,arg1 & 0xff,&iStack_80,0);
        if (iVar3 != -0x7ffffffffffffffb) {
code_r0x00016466:
            if (-1 < iVar3) goto code_r0x0001646b;
            goto code_r0x00016474;
        }
        iStack_78 = fcn.0001299c(iStack_80);
        if (iStack_78 != 0) {
            iVar3 = (**puStack_48)(puStack_48,pcStack_88,arg1 & 0xff,&iStack_80,iStack_78);
            goto code_r0x00016466;
        }
    }
    *arg3 = 0;
code_r0x0001648e:
    (**(*0x19238 + 0x48))(pcVar2);
    return iStack_78;
}


/* fcn.00010c64 @ 0x10c64 */

int64_t fcn.00010c64(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        arg1 = 0x176f0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00010e78(arg1);
        if ((cVar1 == '\0') || (cVar1 = fcn.00010e78(arg2), cVar1 == '\0')) {
            return 0;
        }
        iVar2 = fcn.00010be8(arg1);
        arg3 = fcn.00010be8(arg2);
        arg1_00 = fcn.0001299c(arg3 + -4 + iVar2);
        if (arg1_00 == 0) {
            return 0;
        }
        if ((iVar2 != 0) && (arg1_00 != arg1)) {
            arg1_00 = fcn.000102b0(arg1_00,arg1,iVar2);
        }
        iVar2 = iVar2 + -4 + arg1_00;
        if (arg3 == 0) {
            return arg1_00;
        }
        if (iVar2 == arg2) {
            return arg1_00;
        }
        fcn.000102b0(iVar2,arg2,arg3);
        return arg1_00;
    }
    iVar2 = fcn.00010c38(arg1);
    return iVar2;
}


/* fcn.00013058 @ 0x13058 */

ulong fcn.00013058(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uStackX_8;
    ulong uStackX_20;
    ulong auStack_18 [2];
    
    uStackX_8 = *arg1;
    iVar1 = (**(*0x19238 + 0xb8))(arg2,&uStackX_8,&uStackX_20);
    if ((-1 < iVar1) && (iVar1 = (**(*0x19238 + 0x98))(uStackX_20,arg2,auStack_18), -1 < iVar1)) {
        *arg1 = uStackX_8;
        if (arg3 != 0) {
            *arg3 = uStackX_20;
        }
        return auStack_18[0];
    }
    return 0;
}


/* fcn.0001317c @ 0x1317c */

int fcn.0001317c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t aiStackX_8 [2];
    uint64_t auStackX_18 [2];
    
    aiStackX_8[0] = CONCAT44(in_register_0000000c,arg1);
    iVar1 = fcn.00013058(aiStackX_8,0x17490,0);
    if ((((iVar1 != 0) && (aiStackX_8[0] == arg2)) && (*(*(arg2 + 2) + arg2) == '\x7f')) &&
       ((*(*(arg2 + 2) + 1 + arg2) == -1 && (iVar1 = (**(iVar1 + 0x78))(iVar1,0,0,auStackX_18), -1 < iVar1)))) {
        return 2 - ((auStackX_18[0] & 0x4000) != 0);
    }
    return 0;
}


/* fcn.000130e4 @ 0x130e4 */

ulong fcn.000130e4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    char *apcStackX_8 [2];
    int64_t aiStackX_18 [2];
    
    apcStackX_8[0] = CONCAT44(in_register_0000000c,arg1);
    iVar1 = fcn.00013058(apcStackX_8,0x174a0,aiStackX_18);
    if (iVar1 != 0) {
        do {
            arg2 = arg2 + *(arg2 + 2);
            if (*arg2 != '\x04') break;
        } while (*(arg2 + 1) == '\a');
        if ((((apcStackX_8[0] == arg2) && (*arg2 == '\x04')) && (*(arg2 + 1) == '\x06')) &&
           ((*(arg2 + *(arg2 + 2)) == '\x7f' && (*(arg2 + *(arg2 + 2) + 1) == -1)))) {
            uVar2 = 0;
            if (*0x192d8 != 0) {
                do {
                    if (*(*0x192e0 + uVar2 * 8) == aiStackX_18[0]) {
                        return 1;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *0x192d8);
            }
            return 0;
        }
    }
    return 0;
}


/* fcn.00013028 @ 0x13028 */

uint64_t fcn.00013028(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if ((((uVar2 != 0) && (*0x192b0 <= uVar2)) && (uVar2 <= *0x192a0)) && (uVar1 = 0, uVar2 + *0x192a8 < *0x192a0)) {
        uVar1 = uVar2 + *0x192a8;
    }
    return uVar1;
}


/* fcn.0001346c @ 0x1346c */

uint64_t fcn.0001346c(int64_t arg1)

{
    uint16_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int16_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int16_t *piVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    char *pcVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t iStackX_10;
    char *pcStackX_18;
    int64_t iStackX_20;
    
    uVar5 = 0;
    if (*0x192d8 != 0) {
        do {
            if (*(*0x192e0 + uVar5 * 8) == arg1) goto code_r0x0001351a;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *0x192d8);
    }
    uVar5 = (**(*0x19238 + 0x98))(arg1,0x17480,&pcStackX_18);
    piVar2 = *0x192b0;
    if (-1 < uVar5) {
        uVar5 = CONCAT71(uVar5 >> 8,*pcStackX_18);
        if (*pcStackX_18 != '\x7f') {
            do {
                piVar6 = piVar2;
                pcVar10 = pcStackX_18;
                if (uVar5 == '\x04') {
                    if (pcStackX_18[1] != '\a') goto code_r0x00013559;
                    piVar11 = pcStackX_18 + 4;
                    piVar6 = NULL;
                    if ((piVar11 != NULL) && (piVar6 = piVar2, piVar2 != NULL)) {
                        iVar8 = *piVar11;
                        do {
                            if (*piVar6 == iVar8) {
                                uVar5 = piVar11[1];
                                if (piVar6[1] == uVar5) goto code_r0x0001355b;
                            }
                            piVar6 = fcn.00013028(piVar6);
                        } while (piVar6 != NULL);
                        uVar5 = 0;
                    }
                }
                else if ((uVar5 == '\x01') && (pcStackX_18[1] == '\x03')) {
                    uVar12 = *(pcStackX_18 + 8);
                    if (piVar2 != NULL) {
                        do {
                            if ((piVar6[2] <= uVar12) && (uVar5 = *(piVar6 + 0x1c) + piVar6[2], uVar12 <= uVar5))
                            goto code_r0x0001355b;
                            piVar6 = fcn.00013028(piVar6);
                        } while (piVar6 != NULL);
                        uVar5 = 0;
                    }
                }
                else {
code_r0x00013559:
                    piVar6 = NULL;
                }
code_r0x0001355b:
                if ((piVar6 != NULL) && ((*(piVar6 + 0x24) & 0x200) != 0)) {
code_r0x0001351a:
                    return CONCAT71(uVar5 >> 8,1);
                }
                pcStackX_18 = pcVar10 + *(pcVar10 + 2);
                uVar5 = CONCAT11(*(pcVar10 + 2) >> 8,*pcStackX_18);
            } while (*pcStackX_18 != '\x7f');
            if (piVar6 != NULL) goto code_r0x000136da;
        }
        uVar5 = (**(*0x19238 + 0x98))(arg1,0x17320,&iStackX_20);
        if (-1 < uVar5) {
            iVar8 = *(iStackX_20 + 0x38);
            if (iVar8 != 0) {
code_r0x000135bd:
                uVar5 = fcn.0001346c(iVar8);
                return uVar5;
            }
            uVar5 = (**(iStackX_20 + 0x10))(iStackX_20,&iStackX_10);
            iVar3 = iStackX_10;
            if (-1 < uVar5) {
                piVar7 = fcn.00012c48();
                iVar4 = *piVar7;
                while (iVar8 = iVar3, iVar4 != -1) {
                    if (iVar4 == 0xc) goto code_r0x0001360c;
                    piVar7 = piVar7 + piVar7[1];
                    iVar4 = *piVar7;
                }
code_r0x0001360a:
                piVar7 = NULL;
code_r0x0001360c:
                do {
                    if (piVar7 == NULL) {
                        puVar9 = fcn.00012c48();
                        uVar1 = *puVar9;
                        while (uVar5 = uVar1, uVar1 != 0xffff) {
                            if (uVar1 == 9) goto code_r0x0001368c;
                            puVar9 = puVar9 + puVar9[1];
                            uVar1 = *puVar9;
                        }
code_r0x0001368a:
                        puVar9 = NULL;
code_r0x0001368c:
                        while (puVar9 != NULL) {
                            if ((*(puVar9 + 4) == iVar8) && (*(puVar9 + 8) == *(iVar3 + 0x20))) {
                                iVar8 = fcn.00013388(puVar9 + 0xc);
                                if (iVar8 != 0) goto code_r0x000135bd;
                                iVar8 = iStackX_10;
                            }
                            puVar9 = puVar9[1] + puVar9;
                            uVar1 = *puVar9;
                            while( true ) {
                                uVar5 = uVar1;
                                if (uVar1 == 0xffff) goto code_r0x0001368a;
                                if (uVar1 == 9) break;
                                puVar9 = puVar9 + puVar9[1];
                                uVar1 = *puVar9;
                            }
                        }
                        break;
                    }
                    if (((*(piVar7 + 4) == iVar8) && (*(piVar7 + 8) == *(iVar3 + 0x20))) && (piVar7[0xe] != '\0')) {
                        iVar8 = fcn.00013388(piVar7 + 0x10);
                        if (iVar8 != 0) goto code_r0x000135bd;
                        iVar8 = iStackX_10;
                    }
                    piVar7 = piVar7[1] + piVar7;
                    iVar4 = *piVar7;
                    while( true ) {
                        if (iVar4 == -1) goto code_r0x0001360a;
                        if (iVar4 == 0xc) break;
                        piVar7 = piVar7 + piVar7[1];
                        iVar4 = *piVar7;
                    }
                } while( true );
            }
        }
    }
code_r0x000136da:
    return uVar5 & 0xffffffffffffff00;
}


/* fcn.00013388 @ 0x13388 */

uint64_t fcn.00013388(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t iStackX_10;
    char *pcStackX_18;
    uint64_t uStackX_20;
    
    iVar1 = (**(*0x19238 + 0x138))(2,0x174a0,0,&uStackX_20,&iStackX_10);
    uVar2 = 0;
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar4 = uVar2;
        if (uStackX_20 != 0) {
            do {
                iVar1 = (**(*0x19238 + 0x98))(*(iStackX_10 + uVar4 * 8),0x17480,&pcStackX_18);
                if ((-1 < iVar1) && (*pcStackX_18 != '\x7f')) {
                    do {
                        pcVar3 = pcStackX_18;
                        pcStackX_18 = pcVar3 + *(pcVar3 + 2);
                    } while (*pcStackX_18 != '\x7f');
                    if ((((pcVar3 != NULL) && (*pcVar3 == '\x04')) && (pcVar3[1] == '\a')) &&
                       ((*(pcVar3 + 4) == *arg1 && (*(pcVar3 + 0xc) == *(arg1 + 8))))) {
                        uVar2 = *(iStackX_10 + uVar4 * 8);
                        break;
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uStackX_20);
        }
        (**(*0x19238 + 0x48))(iStackX_10);
    }
    return uVar2;
}


/* fcn.000166d0 @ 0x166d0 */

ulong fcn.000166d0(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    if (*0x192d8 < *0x192d0) {
        if ((*0x192e0 == 0) && (*0x192e0 = fcn.000129d0(arg1,*0x192d0 << 3), *0x192e0 == 0)) {
            return 0x8000000000000009;
        }
    }
    else {
        uVar1 = *0x192d0 + 10;
        iVar2 = fcn.00012a80(arg1,*0x192d8 << 3,uVar1 * 8,*0x192e0);
        if (iVar2 == 0) {
            return 0x8000000000000009;
        }
        *0x192d0 = uVar1;
        *0x192e0 = iVar2;
    }
    return 0;
}


/* fcn.000138b8 @ 0x138b8 */

uint64_t fcn.000138b8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar7;
    uint64_t uVar6;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int16_t iVar11;
    int iVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int32_t var_150h;
    int64_t var_158h;
    int64_t var_160h;
    int64_t var_168h;
    uint64_t auStack_208 [28];
    int64_t aiStack_128 [29];
    
    uVar7 = 0;
    uVar6 = 0;
    fcn.00010310(0x19350,0x40);
    iVar12 = arg1;
    if (iVar12 == 0) {
        *0x193a0 = 0x14;
        uStackX_10 = 0x17370;
        iVar3 = 0x172c0;
    }
    else if (iVar12 == 1) {
        *0x193a0 = 0x20;
        uStackX_10 = 0x17350;
        iVar3 = 0x173c0;
    }
    else if (iVar12 == 2) {
        *0x193a0 = 0x30;
        uStackX_10 = 0x17520;
        iVar3 = 0x174c0;
    }
    else {
        if (iVar12 != 3) {
            return 0;
        }
        *0x193a0 = 0x40;
        iVar3 = 0x17330;
        uStackX_10 = 0x17570;
    }
    fcn.000102b0(0x19390,iVar3,0x10);
    if ((*(*0x193b0 + 4) == 0x200) && (*(*0x193b0 + 0x18) == 0x10b)) {
        iVar11 = 0x20b;
code_r0x000139e1:
        uVar17 = *(*0x193b0 + 0x84);
    }
    else {
        iVar11 = *(*0x193b0 + 0x18);
        if (iVar11 != 0x10b) {
            if (iVar11 != 0x20b) {
                *0x19344 = iVar12;
                return 0;
            }
            goto code_r0x000139e1;
        }
        uVar17 = *(*0x193b0 + 0x74);
    }
    auStack_208[0] = (*0x193b0 - *0x19300) + 0x58;
    if (auStack_208[0] == 0) {
        *0x19344 = iVar12;
        return 0;
    }
    aiStack_128[0] = *0x19300;
    aiStack_128[1] = *0x193b0 + 0x5c;
    if (uVar17 < 5) {
        auStack_208[1] = (*(*0x193b0 + 0x54) - aiStack_128[1]) + *0x19300;
        if (auStack_208[1] == 0) {
            *0x19344 = iVar12;
            return 0;
        }
        uVar16 = 2;
    }
    else {
        if (iVar11 == 0x10b) {
            auStack_208[1] = (*0x193b0 - aiStack_128[1]) + 0x98;
        }
        else {
            auStack_208[1] = (*0x193b0 - aiStack_128[1]) + 0xa8;
        }
        if (auStack_208[1] == 0) {
            *0x19344 = iVar12;
            return 0;
        }
        aiStack_128[2] = *0x193b0 + 0xa0;
        if (iVar11 != 0x10b) {
            aiStack_128[2] = *0x193b0 + 0xb0;
        }
        auStack_208[2] = (*(*0x193b0 + 0x54) - aiStack_128[2]) + *0x19300;
        if (auStack_208[2] == 0) {
            *0x19344 = iVar12;
            return 0;
        }
        uVar16 = 3;
    }
    uVar10 = *(*0x193b0 + 0x54);
    iVar3 = *(*0x193b0 + 0x14) + *0x19300 + *0x19340 + 0x18;
    uVar4 = *(*0x193b0 + 6) * 0x28;
    if (*0x19348 < uVar4) {
        *0x19344 = iVar12;
        return 0;
    }
    *0x19344 = iVar12;
    iVar1 = fcn.000129d0(*(*0x193b0 + 6),uVar4);
    if (iVar1 == 0) {
        return 0;
    }
    iVar2 = *0x193b0;
    uVar4 = *0x19348;
    if (*(*0x193b0 + 6) != 0) {
        iVar9 = iVar1 + -0x28;
        uVar15 = uVar7;
        do {
            uVar18 = uVar7;
            if (*0x19300 + uVar4 < iVar3 + 0x28U) goto code_r0x00013cdc;
            iVar8 = iVar9;
            uVar18 = uVar15;
            if (uVar15 != 0) {
                do {
                    if (*(iVar8 + 0x14) <= *(iVar3 + 0x14)) break;
                    if (iVar8 + 0x28 != iVar8) {
                        fcn.000102b0(iVar8 + 0x28,iVar8,0x28);
                    }
                    iVar8 = iVar8 + -0x28;
                    uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
                iVar2 = *0x193b0;
                uVar4 = *0x19348;
            }
            iVar8 = iVar1 + uVar18 * 0x28;
            if (iVar8 != iVar3) {
                fcn.000102b0(iVar8,iVar3,0x28);
                iVar2 = *0x193b0;
                uVar4 = *0x19348;
            }
            iVar9 = iVar9 + 0x28;
            uVar15 = uVar15 + 1;
            iVar3 = iVar3 + 0x28;
        } while (uVar15 < *(iVar2 + 6));
    }
    uVar5 = 0;
    if (*(iVar2 + 6) != 0) {
        puVar13 = iVar1 + 0x10;
        uVar15 = uVar7;
        do {
            if (*puVar13 != 0) {
                uVar14 = *puVar13;
                uVar18 = uVar7;
                if (uVar4 < puVar13[1] + uVar14) goto code_r0x00013cdc;
                aiStack_128[uVar16] = puVar13[1] + *0x19300;
                auStack_208[uVar16] = uVar14;
                uVar16 = uVar16 + 1;
                if (0x1b < uVar16) goto code_r0x00013cdc;
                uVar10 = uVar10 + uVar14;
                uVar18 = uVar6;
                if (uVar4 < uVar10) goto code_r0x00013cdc;
            }
            uVar15 = uVar15 + 1;
            puVar13 = puVar13 + 10;
        } while (uVar15 < *(iVar2 + 6));
    }
    if (uVar10 < uVar4) {
        if (4 < uVar17) {
            if (iVar11 == 0x10b) {
                uVar5 = *(iVar2 + 0x9c);
            }
            else {
                uVar5 = *(iVar2 + 0xac);
            }
        }
        uVar7 = uVar5 + uVar10;
        if (uVar7 < uVar4) {
            aiStack_128[uVar16] = *0x19300 + uVar10;
            auStack_208[uVar16] = (uVar4 - uVar5) - uVar10;
            uVar16 = uVar16 + 1;
            uVar18 = uVar6;
            if (0x1b < uVar16) goto code_r0x00013cdc;
        }
        else {
            uVar18 = uVar6;
            if (uVar4 < uVar7) goto code_r0x00013cdc;
        }
    }
    iVar3 = (**(*0x19310 + 0x10))(*0x19310,uStackX_10,uVar16,aiStack_128,auStack_208,0x19350);
    uVar18 = 0;
    if (-1 < iVar3) {
        uVar18 = 1;
    }
code_r0x00013cdc:
    (**(*0x19238 + 0x48))(iVar1);
    return uVar18;
}


/* fcn.00016550 @ 0x16550 */

int64_t fcn.00016550(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        return 0;
    }
    iVar2 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
        if ((*arg1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    }
    return iVar2;
}


/* fcn.000164c4 @ 0x164c4 */

ulong fcn.000164c4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x19338 + 0x68);
    iVar2 = *(*0x19338 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.00016658(iVar2,arg1,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.00016658 @ 0x16658 */

int64_t fcn.00016658(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00013dd0 @ 0x13dd0 */

ulong fcn.00013dd0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg1_01;
    ulong uVar1;
    int64_t *in_stack_00000028;
    
    *arg4 = 0;
    arg1_00 = arg2 + 0x2c;
    arg1_01 = fcn.000129d0(arg1,arg1_00);
    if (arg1_01 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        *(arg1_01 + 0x14) = 0;
        *(arg1_01 + 0x10) = arg1_00;
        *(arg1_01 + 0x18) = arg2 + 0x10;
        if (arg1_01 != arg3) {
            fcn.000102b0(arg1_01,arg3,0x10);
        }
        if ((arg2 != 0) && (arg1_01 + 0x2c != arg1)) {
            fcn.000102b0(arg1_01 + 0x2c,arg1,arg2);
        }
        *arg4 = arg1_01;
        *in_stack_00000028 = arg1_00;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00013e7c @ 0x13e7c */

void fcn.00013e7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint32_t arg3_00;
    int iVar2;
    int iVar3;
    int16_t *piVar4;
    int64_t arg3_01;
    int64_t *arg2_00;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t in_stack_00000028;
    int64_t *piStack_40;
    
    if (arg3 != 0) {
        iVar9 = 0;
        if (arg2 == 0) {
            iVar9 = 2;
        }
        else {
            iVar1 = *arg2;
            piVar4 = arg2;
            while (iVar1 != 0) {
                piVar4 = piVar4 + 1;
                iVar9 = iVar9 + 1;
                iVar1 = *piVar4;
            }
            iVar9 = iVar9 * 2 + 2;
        }
        iVar10 = arg3;
        arg3_01 = fcn.00016550(arg3);
        arg2_00 = fcn.000164c4(iVar10,0x17390);
        iVar10 = 8;
        if (arg2_00 != NULL) {
            piVar8 = arg2_00 + 1;
            if (*arg2_00 != 0) {
                iVar7 = *arg2_00;
                piVar6 = piVar8;
                do {
                    iVar10 = iVar10 + *(piVar6 + 4);
                    piVar6 = piVar6 + *(piVar6 + 4);
                    iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
            }
            piStack_40 = NULL;
            if (*arg2_00 != 0) {
                do {
                    if ((arg2 != 0) && (iVar9 + 8U < *(piVar8 + 4))) {
                        iVar3 = piVar8;
                        iVar7 = fcn.00016658(iVar3 + 8,arg2,iVar9);
                        if ((iVar7 == 0) && (arg4 != 0)) {
                            arg3_00 = *(arg4 + 0x18);
                            if (arg3_01 + 0x24 + arg3_00 + iVar9 <= *(piVar8 + 4)) {
                                iVar2 = arg3_01 + iVar9;
                                iVar7 = fcn.00016658(iVar3 + 8 + iVar2,arg4,0x10);
                                if (((iVar7 == 0) && (*(arg3_01 + iVar9 + 0x20 + piVar8) == arg3_00)) &&
                                   (iVar7 = fcn.00016658(iVar2 + 0x24 + iVar3,arg4 + 0x1c,arg3_00), iVar7 == 0)) {
                                    return;
                                }
                            }
                        }
                    }
                    piVar8 = piVar8 + *(piVar8 + 4);
                    piStack_40 = piStack_40 + 1;
                } while (piStack_40 < *arg2_00);
            }
        }
        iVar7 = iVar9 + 8 + arg3_01 + in_stack_00000028;
        iVar5 = (**(*0x19238 + 0x40))(6,iVar7 + iVar10,&piStack_40);
        piVar8 = piStack_40;
        if (iVar5 < 0) {
            piVar8 = NULL;
        }
        if (piVar8 != NULL) {
            piStack_40 = piVar8;
            if (arg2_00 == NULL) {
                *piVar8 = 0;
            }
            else if ((iVar10 != 0) && (piVar8 != arg2_00)) {
                fcn.000102b0(piVar8,arg2_00,iVar10);
            }
            *piVar8 = *piVar8 + 1;
            *(iVar10 + piVar8) = arg1;
            *(iVar10 + 4 + piVar8) = iVar7;
            iVar10 = iVar10 + 8 + piVar8;
            if (arg2 == 0) {
                fcn.00010310(iVar10,2);
            }
            else if ((iVar9 != 0) && (iVar10 != arg2)) {
                fcn.000102b0(iVar10,arg2,iVar9);
            }
            if ((arg3_01 != 0) && (iVar10 + iVar9 != arg3)) {
                fcn.000102b0(iVar10 + iVar9,arg3,arg3_01);
            }
            if (((arg4 != 0) && (iVar9 = arg3_01 + iVar10 + iVar9, in_stack_00000028 != 0)) && (iVar9 != arg4)) {
                fcn.000102b0(iVar9,arg4,in_stack_00000028);
            }
            (**(*0x19328 + 0xc0))(0x17390,piVar8);
            if (arg2_00 != NULL) {
                (**(*0x19238 + 0x48))(arg2_00);
            }
        }
    }
    return;
}


/* fcn.000165a4 @ 0x165a4 */

int64_t fcn.000165a4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    iVar1 = *in_stack_00000028;
    if (iVar1 == 0) {
        *arg3 = 0;
    }
    iVar1 = (**(*0x19330 + 0x48))(arg1,arg2,0,arg3,iVar1);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x19328 + 0x48))();
        }
        iVar1 = fcn.00016524(*arg3);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x19330 + 0x48))(arg1,arg2,0,arg3,iVar1);
        }
    }
    return iVar1;
}


/* fcn.00015f4c @ 0x15f4c */

int64_t fcn.00015f4c(int64_t arg1)

{
    uint16_t *puVar1;
    
    puVar1 = 0x18d10;
    for (; (*arg1 != 0 && (*arg1 == *puVar1)); arg1 = arg1 + 2) {
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.00016750 @ 0x16750 */

ulong fcn.00016750(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint in_register_0000000c;
    uint16_t *puVar9;
    int64_t iVar10;
    ulong uVar11;
    uint32_t uVar12;
    int32_t var_1h;
    
    puVar9 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = puVar9[1];
    uVar1 = *(puVar9 + 3);
    uVar12 = 0x7b2;
    uVar5 = puVar9[2];
    uVar11 = 0x8000000000000002;
    uVar2 = *(puVar9 + 5);
    *arg2 = 0;
    uVar6 = puVar9[3];
    if (((((0x7b1 < *puVar9) && (uVar4 - 1 < 0xc)) && (uVar1 - 1 < 0x1f)) && ((uVar5 < 0x18 && (uVar2 < 0x3c)))) &&
       (uVar6 < 0x3d)) {
        *arg2 = 0;
        uVar3 = *puVar9;
        if (uVar3 != 0x7b2) {
            do {
                uVar7 = uVar12 & 0x80000003;
                if (uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                }
                if ((uVar7 == 0) && ((uVar12 != (uVar12 / 100) * 100 || (uVar12 == (uVar12 / 400) * 400)))) {
                    iVar8 = 0x16e;
                }
                else {
                    iVar8 = 0x16d;
                }
                uVar12 = uVar12 + 1;
                *arg2 = *arg2 + iVar8 * 0x15180;
            } while (uVar12 != uVar3);
        }
        if (((uVar3 & 3) == 0) && ((uVar12 = uVar3, uVar12 != (uVar3 / 100) * 100 || (uVar12 == (uVar12 / 400) * 400)))
           ) {
            iVar10 = 0xe;
        }
        else {
            iVar10 = 0;
        }
        *arg2 = *arg2 + *((uVar4 + iVar10) * 4 + 0x19180) * 0x15180 + (uVar5 * 0x3c + uVar2) * 0x3c +
                        uVar1 * 0x15180 + -0x15180 + uVar6;
        uVar11 = 0;
    }
    return uVar11;
}


/* fcn.00014338 @ 0x14338 */

uchar fcn.00014338(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    uchar auVar3 [16];
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t arg1_00;
    uint64_t uVar9;
    char cVar10;
    uint64_t uVar11;
    char cVar12;
    uchar uStack_68;
    char cStack_66;
    uint32_t uStack_64;
    uint64_t uStack_58;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    ulong uStack_28;
    
    cVar12 = arg4;
    uStack_68 = 0;
    cStack_66 = '\0';
    bVar4 = false;
    *0x193a8 = 0;
    uStack_58 = 0;
    iStack_50 = 0;
    iVar6 = fcn.000165a4(arg3,0x17390,arg3,&uStack_48);
    if (((iVar6 < 0) && (iVar6 != -0x7ffffffffffffff2)) && (iVar6 = fcn.00015f4c(arg3), iVar6 == 0)) {
        uStack_68 = 1;
    }
    else if (iStack_50 == 0) {
        uStack_68 = 0;
    }
    else {
        iVar6 = iStack_50;
        if (uStack_48 != 0) {
            while( true ) {
                uVar11 = uStack_48;
                uStack_68 = 0;
                uVar1 = *(iVar6 + 0x10);
                if (uStack_48 < uVar1) break;
                arg1_00 = iVar6;
                iVar7 = fcn.00016658(arg1_00,0x174d0,0x10);
                if (iVar7 == 0) {
                    cVar10 = '\x04';
                }
                else {
                    iVar7 = fcn.00016658(arg1_00,0x19390,0x10);
                    if ((iVar7 == 0) && (0x1f < *0x193a0)) {
                        cVar10 = '\x01';
                    }
                    else {
                        iVar7 = fcn.00016658(arg1_00,0x17460,0x10);
                        if (iVar7 == 0) {
                            cVar10 = '\x05';
                        }
                        else {
                            iVar7 = fcn.00016658(arg1_00,0x17420,0x10);
                            if (iVar7 == 0) {
                                cVar10 = '\x06';
                            }
                            else {
                                iVar7 = fcn.00016658(arg1_00,0x174b0,0x10);
                                if (iVar7 != 0) break;
                                cVar10 = '\a';
                            }
                        }
                    }
                }
                iVar7 = iVar6 + 0x1c + *(iVar6 + 0x14);
                uVar9 = CONCAT44(0,*(iVar6 + 0x18));
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar9;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = (uVar1 - *(iVar6 + 0x14)) - 0x1c;
                uStack_28 = SUB168(auVar3 / auVar2,0);
                uVar9 = uVar9 - 0x10;
                uStack_64 = 0;
                iStack_38 = iVar7;
                if (SUB164(auVar3 / auVar2,0) != 0) {
                    do {
                        if (cVar10 == '\x01') {
                            if ((uVar9 == *0x193a0) &&
                               (iVar8 = fcn.00016658(iVar7 + 0x10,0x19350,*0x193a0), iVar8 == 0)) {
                                uStack_68 = 1;
                                goto code_r0x0001467d;
                            }
                        }
                        else if (cVar10 - 4U < 4) {
                            uStack_30 = 0x19350;
                            uStack_40 = *0x193a0;
                            iVar8 = (**(*0x19310 + 8))(*0x19310,arg1,arg2,iVar7 + 0x10,uVar9,&uStack_30,&uStack_40
                                                       ,cVar12,3);
                            if (-1 < iVar8) {
                                uStack_68 = 1;
                                if (cVar12 == '\x01') {
                                    *0x192f8 = iVar7 - iStack_50;
                                    *0x1930c = *(iVar6 + 0x18);
                                    goto code_r0x0001467d;
                                }
                                if (cVar12 == '\x10') {
                                    *0x193a8 = uStack_40;
                                    goto code_r0x0001467d;
                                }
                                if (cVar10 == '\x05') {
                                    iVar5 = 0x20;
                                }
                                else if (cVar10 == '\x06') {
                                    iVar5 = 0x30;
                                }
                                else {
                                    if (cVar10 != '\a') goto code_r0x0001467d;
                                    iVar5 = 0x40;
                                }
                                iVar8 = fcn.00016750(iVar5 + 0x10 + iVar7,&uStack_58);
                                if (iVar8 < 0) {
                                    uStack_58 = 0;
                                }
                                if (uStack_58 == 0) goto code_r0x0001467d;
                                if (!bVar4) {
                                    cStack_66 = fcn.00014338(arg1,arg2,0x18d18,0x10);
                                    bVar4 = true;
                                }
                                if ((cStack_66 == '\0') || (uStack_58 <= *0x193a8)) goto code_r0x0001467d;
                            }
                        }
                        iVar7 = iVar7 + *(iVar6 + 0x18);
                        uStack_64 = uStack_64 + 1;
                    } while (uStack_64 < uStack_28);
                    uVar11 = uStack_48;
                }
                uStack_68 = 0;
                uStack_48 = uVar11 - *(iVar6 + 0x10);
                iVar6 = iVar6 + *(iVar6 + 0x10);
                if (uStack_48 == 0) break;
            }
        }
code_r0x0001467d:
        (**(*0x19238 + 0x48))(iStack_50);
    }
    return uStack_68;
}


/* fcn.00010d40 @ 0x10d40 */

int64_t fcn.00010d40(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    uchar in_R9B;
    unkbyte7 in_R9;
    int64_t iStack_38;
    int64_t iStack_30;
    
    iVar3 = 0;
    uVar1 = arg2;
    if (arg1 != 0) {
        arg1_00 = &iStack_38;
        fcn.00010310(arg1_00,0x18);
        for (; (*arg1 != '\x7f' || (*(arg1 + 1) != -1)); arg1 = arg1 + *(arg1 + 2)) {
            pcVar5 = 0x128c8;
            iVar2 = iVar3;
            iVar4 = iVar3;
            do {
                if ((*arg1 == *(iVar2 + 0x189f0)) && (*(arg1 + 1) == *(iVar2 + 0x189f1))) {
                    pcVar5 = *(iVar4 * 0x10 + 0x189f8);
                    break;
                }
                iVar4 = iVar4 + 1;
                iVar2 = iVar4 * 0x10;
            } while (*(iVar2 + 0x189f8) != 0);
            if (((iStack_30 != 0) && (pcVar5 != 0x128bc)) && (*(iStack_38 + iStack_30 * 2) != 0x2c)) {
                fcn.00010ed4(&iStack_38,0x18984,arg2,CONCAT71(in_R9,in_R9B));
            }
            arg1_00 = fcn.00012a20(4,*(arg1 + 2),arg1);
            arg2 = 0;
            in_R9B = uVar1;
            (*pcVar5)(&iStack_38,arg1_00);
            (**(*0x19238 + 0x48))();
        }
        if (iStack_38 == 0) {
            iVar3 = fcn.000129d0(arg1_00,2);
        }
        else {
            iVar3 = iStack_38;
        }
    }
    return iVar3;
}


/* fcn.00016e0c @ 0x16e0c */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.00016e0c(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    bool bVar12;
    int64_t iStackX_8;
    int64_t var_bp_18h;
    int64_t var_28h;
    uint32_t var_b0h;
    uchar auStack_188 [12];
    int iStack_17c;
    uint32_t uStack_178;
    int iStack_174;
    int iStack_170;
    uchar auStack_168 [8];
    int iStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_154;
    uchar auStack_138 [4];
    uint8_t uStack_134;
    uint16_t uStack_132;
    uint uStack_128;
    uint16_t uStack_124;
    uint8_t uStack_122;
    uchar uStack_121;
    int iStack_120;
    int iStack_11c;
    uint32_t uStack_118;
    uint32_t uStack_114;
    uint uStack_108;
    uint32_t uStack_104;
    uint32_t uStack_c4;
    uint32_t uStack_b4;
    uint32_t auStack_90 [2];
    int64_t var_80h;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_bp_70h;
    uint32_t var_6ch;
    int64_t var_60h;
    int32_t var_1ch;
    int32_t var_ch;
    
    uVar6 = 0;
    *(arg1 + 0x68) = 0;
    iVar3 = fcn.000168e0(arg1,auStack_138);
    if (iVar3 < 0) {
        return iVar3;
    }
    cVar1 = *(arg1 + 0x7d);
    if (cVar1 == '\0') {
        uVar7 = 0;
        if (iStack_120 == 0x10b) {
            uVar8 = uStack_104;
            uVar7 = uVar6;
        }
        else {
            uVar8 = CONCAT44(uStack_104,uStack_108);
        }
    }
    else {
        uVar7 = uStack_132 - 0x28;
        uVar8 = uVar7 + CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
    }
    *arg1 = uVar8;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x50) = 0;
    if (cVar1 == '\0') {
        if ((uStack_122 & 1) != 0) {
code_r0x00016eaf:
            *(arg1 + 0x7c) = 1;
            goto code_r0x00016eb9;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x00016eaf;
    *(arg1 + 0x7c) = 0;
code_r0x00016eb9:
    if (cVar1 == '\0') {
        if (iStack_120 == 0x10b) {
            puVar10 = auStack_90;
        }
        else {
            puVar10 = &var_78h;
            uStack_c4 = uStack_b4;
        }
        if (6 < uStack_c4) {
            uVar2 = *puVar10;
            uVar7 = uVar2;
            iVar3 = uStack_124 + 0x18 + *(arg1 + 0x3c);
            bVar12 = uStack_132 != 0;
            uVar8 = uVar6;
            while (bVar12) {
                iStackX_8 = 0x28;
                iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar3,&iStackX_8,auStack_168);
                if (iVar4 < 0) goto code_r0x00016ff5;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00016ffd;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x00016f7e;
                }
                iVar3 = iVar3 + 0x28;
                uVar8 = uVar8 + 1;
                bVar12 = uVar8 < uStack_132;
            }
        }
    }
    else {
        iVar3 = 0x28;
        uVar9 = uStack_118;
        uVar8 = uVar6;
        uVar11 = uVar6;
        if (uStack_134 != 0) {
            do {
                iStackX_8 = 0x28;
                iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar3,&iStackX_8,auStack_168);
                if (iVar4 < 0) goto code_r0x00016ff5;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00016ffd;
                if (((uVar9 < uStack_15c) || (iStack_160 + uStack_15c <= uVar9)) ||
                   (uVar11 = ((uStack_154 - uVar7) - uStack_15c) + uVar9, uStack_134 - 1 <= uVar8)) {
                    uVar5 = uVar8 + 1;
                    if (uVar5 == uStack_134) {
                        *(arg1 + 8) = uStack_15c + (iStack_160 - uVar7);
                    }
                    iVar3 = iVar3 + 0x28;
                }
                else {
                    uVar5 = uStack_134 - 1;
                    iVar3 = iVar3 + (uVar5 - uVar8) * 0x28;
                }
                uVar8 = uVar5;
            } while (uVar5 < uStack_134);
            if ((uVar11 != 0) && (uStack_114 != 0)) {
                do {
                    iStackX_8 = 0x1c;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + uVar11,&iStackX_8,auStack_188);
                    if (iVar4 < 0) goto code_r0x00016fec;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x00016ffd;
                    if (iStack_17c == 2) {
                        *(arg1 + 0x40) = uStack_118 + uVar6;
                        return 0;
                    }
                    uVar6 = uVar6 + 0x1c;
                } while (uVar6 < uStack_114);
            }
        }
    }
    return 0;
code_r0x00016ff5:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x00016ffd;
code_r0x00016f7e:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x00016fec;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x00016ffd;
    if (iStack_17c == 2) {
        *(arg1 + 0x40) = uVar2 + uVar6;
        if (iStack_174 != 0) {
            return 0;
        }
        if (iStack_170 == 0) {
            return 0;
        }
        *(arg1 + 8) = *(arg1 + 8) + uStack_178;
        return 0;
    }
    uVar6 = uVar6 + 0x1c;
    if (puVar10[1] <= uVar6) {
        return 0;
    }
    goto code_r0x00016f7e;
code_r0x00016fec:
    bVar12 = iStackX_8 == 0x1c;
code_r0x00016ffd:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.00013d04 @ 0x13d04 */

int64_t fcn.00013d04(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg1_00;
    char acStackX_18 [8];
    ulong uStackX_20;
    char *apcStack_18 [2];
    
    uStackX_20 = 0;
    apcStack_18[0] = acStackX_18;
    iVar2 = (**(*0x19310 + 8))(*0x19310,arg1,arg2,0,0,apcStack_18,&uStackX_20,6,1);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (acStackX_18[0] == '\0') {
        cVar1 = fcn.000138b8(0);
        if (cVar1 == '\0') {
            iVar2 = -0x7fffffffffffffe6;
        }
    }
    else {
        if (acStackX_18[0] == '\x01') {
            arg1_00 = 1;
        }
        else if (acStackX_18[0] == '\x02') {
            arg1_00 = 2;
        }
        else {
            if (acStackX_18[0] != '\x03') {
                return -0x7ffffffffffffffd;
            }
            arg1_00 = 3;
        }
        cVar1 = fcn.000138b8(arg1_00);
        if (cVar1 == '\0') {
            iVar2 = -0x7fffffffffffffe6;
        }
    }
    return iVar2;
}


/* fcn.00014118 @ 0x14118 */

void fcn.00014118(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iStackX_8;
    int64_t in_stack_00000028;
    
    uVar1 = *arg1;
    puVar2 = arg1 + 1;
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            if (arg1 + noname_1 <= puVar2) {
                return;
            }
            iVar3 = fcn.00013dd0(*(puVar2 + 1),*puVar2,0x174d0,&iStackX_8);
            if (-1 < iVar3) {
                fcn.00013e7c(arg2 & 0xffffffff,arg3,in_stack_00000028,iStackX_8);
                (**(*0x19238 + 0x48))(iStackX_8);
            }
            uVar4 = uVar4 + 1;
            puVar2 = puVar2 + 3;
        } while (uVar4 < uVar1);
    }
    return;
}


/* fcn.000141cc @ 0x141cc */

char fcn.000141cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char cVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iVar5 = *0x193a0;
    iStackX_18 = 0;
    iStackX_20 = *0x193a0;
    cVar6 = '\0';
    uStackX_10 = arg2;
    iVar2 = fcn.000165a4(arg1,0x17390,arg3,&uStackX_10);
    if (((iVar2 < 0) && (iVar2 != -0x7ffffffffffffff2)) && (iVar2 = fcn.00015f4c(arg1), iVar2 == 0)) {
        cVar6 = '\x01';
    }
    else if (iStackX_18 != 0) {
        iVar2 = iStackX_18;
        do {
            uVar1 = uStackX_10;
            if ((uStackX_10 == 0) || (uVar8 = *(iVar2 + 0x10), uStackX_10 < uVar8)) break;
            iVar3 = fcn.00016658(iVar2,0x19390,0x10);
            if (iVar3 == 0) {
                iVar3 = iVar2 + 0x1c + *(iVar2 + 0x14);
                uVar4 = ((uVar8 - *(iVar2 + 0x14)) - 0x1c) / *(iVar2 + 0x18);
                if (*(iVar2 + 0x18) == iVar5 + 0x10U) {
                    uVar7 = 0;
                    if (uVar4 != 0) {
                        do {
                            iVar5 = fcn.00016658(iVar3 + 0x10,0x19350,iStackX_20);
                            if (iVar5 == 0) {
                                cVar6 = '\x01';
                                break;
                            }
                            uVar7 = uVar7 + 1;
                            iVar3 = iVar3 + *(iVar2 + 0x18);
                        } while (uVar7 < uVar4);
                    }
                    iVar5 = iStackX_20;
                }
            }
            uStackX_10 = uVar1 - uVar8;
            iVar2 = iVar2 + *(iVar2 + 0x10);
        } while (cVar6 == '\0');
        (**(*0x19238 + 0x48))(iStackX_18);
    }
    return cVar6;
}


/* fcn.00012e98 @ 0x12e98 */

ulong fcn.00012e98(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t var_10h;
    int32_t var_bp_8h;
    
    *0x19294 = *0x19294 | arg2;
    uVar7 = 0;
    if ((*0x19270 == *0x19290) &&
       (*0x19288 = fcn.00012a80(arg1,*0x19290 << 4,*0x19290 + 0x10 << 4,*0x19288), *0x19288 != 0)) {
        *0x19290 = *0x19290 + 0x10;
    }
    iVar5 = *0x19288;
    uVar4 = *0x19284;
    if ((arg2 & 4U) == 0) {
        if (*0x19284 != 0) {
            do {
                uVar6 = *0x19270 - uVar7;
                uVar7 = uVar7 + 1;
                puVar1 = iVar5 + (uVar6 - 1) * 0x10;
                uVar3 = puVar1[1];
                puVar2 = iVar5 + uVar6 * 0x10;
                *puVar2 = *puVar1;
                puVar2[1] = uVar3;
            } while (uVar7 < uVar4);
        }
    }
    else {
        *0x19284 = *0x19284 + 1;
        uVar7 = 0;
    }
    uVar7 = *0x19270 - uVar7;
    *0x19270 = *0x19270 + 1;
    *(iVar5 + uVar7 * 0x10) = arg2;
    *(iVar5 + 8 + uVar7 * 0x10) = arg1;
    return 0;
}


/* fcn.00015f10 @ 0x15f10 */

int64_t fcn.00015f10(void)

{
    if (*0x19320 == 0) {
        (**(*0x19238 + 0x140))(0x173a0,0,0x19320);
    }
    return *0x19320;
}


/* fcn.00015f78 @ 0x15f78 */

uint64_t fcn.00015f78(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00015fa4 @ 0x15fa4 */

uint64_t fcn.00015fa4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00015eec @ 0x15eec */

void fcn.00015eec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000151c0(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001518c @ 0x1518c */

uchar * fcn.0001518c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.00016524 @ 0x16524 */

ulong fcn.00016524(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x19328 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000168e0 @ 0x168e0 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.000168e0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint uVar3;
    int64_t iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    bool bVar9;
    uchar auStackX_8 [8];
    int *piStackX_10;
    int32_t var_23h;
    int64_t iStackX_18;
    int64_t var_67h;
    uint32_t var_77h;
    uchar auStack_a8 [12];
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uint32_t uStack_94;
    int16_t aiStack_78 [19];
    int64_t var_49h;
    int32_t var_3dh;
    int32_t var_39h;
    int32_t var_35h;
    uint32_t var_19h;
    
    iStackX_18 = 0x40;
    piStackX_10 = arg2;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),0,&stack0x00000018,aiStack_78);
    if (iVar4 < 0) {
        bVar9 = iStackX_18 == 0x40;
        goto code_r0x00016de6;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x00016de6;
    *(arg1 + 0x3c) = 0;
    uVar3 = *(arg1 + 0x3c);
    if (aiStack_78[0] == 0x5a4d) {
        uVar3 = stack0xffffffffffffffc4;
    }
    *(arg1 + 0x3c) = uVar3;
    iStackX_18 = 0x108;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar3,&stack0x00000018,piStackX_10);
    if (iVar4 < 0) {
        bVar9 = iStackX_18 == 0x108;
        goto code_r0x00016de6;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x00016de6;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x000169c6;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x00016de6;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x000169c6;
            goto code_r0x00016cad;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x00016dca:
            *(arg1 + 0x68) = 3;
            return -0x7ffffffffffffffd;
        }
        *(arg1 + 0x7d) = 0;
        *(arg1 + 0x78) = piStackX_10[1];
        if (piStackX_10[6] == 0x10b) {
            if ((((0x10 < piStackX_10[0x1d]) || (*(piStackX_10 + 5) - 0x60 != piStackX_10[0x1d] << 3)) ||
                (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
               ((((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)) ||
                ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))))) {
code_r0x000169c6:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x00016de6;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x000169c6;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x00016c64:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x00016a33;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x00016de6;
                }
code_r0x00016c91:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x00016cad:
                iVar2 = *(arg1 + 0x78);
                if ((((iVar2 != -0x799c) && (iVar2 != 0xebc)) && (iVar2 != 0x14c)) && (iVar2 != -0x559c)) {
                    return -0x7ffffffffffffffd;
                }
                if (*(arg1 + 0x7d) == '\0') {
                    uVar7 = *(piStackX_10 + 6);
                    iVar6 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5);
                }
                else {
                    uVar7 = *(piStackX_10 + 1);
                    iVar6 = 0x28;
                }
                uVar8 = 0;
                if (uVar7 != 0) {
                    do {
                        iStackX_18 = 0x28;
                        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6,&stack0x00000018,auStack_a8);
                        if (iVar4 < 0) {
                            bVar9 = iStackX_18 == 0x28;
                            goto code_r0x00016de6;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x00016de6;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x000169c6;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x00016a33;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x00016de6;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x00016dca;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x000169c6;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x00016de6;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x000169c6;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x00016c64;
                }
                goto code_r0x00016c91;
            }
        }
    }
code_r0x00016a33:
    bVar9 = iStackX_18 == 1;
code_r0x00016de6:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


