// decompiled by r2ghidra: 0623_AmiRedFishApi.pe32
// functions: 43

/* entry0 @ 0x103d0 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    fcn.0001046c(noname_0,arg1);
    if (*0x135a8 == 0) {
        *0x13598 = *(arg1 + 0x60);
        *0x135a0 = *(arg1 + 0x58);
        *0x135a8 = arg1;
    }
    auStackX_18[0] = 0;
    *0x131a0 = 0x1040401;
    iVar1 = (**(*0x13598 + 0x148))(auStackX_18,0x13110,0x131a0,0);
    if ((iVar1 < 0) && (*0x13588 != 0)) {
        fcn.00011398();
        (**(*0x13568 + 0x48))(*0x13588);
    }
    return iVar1;
}


/* fcn.0001046c @ 0x1046c */

void fcn.0001046c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint16_t *puStackX_8;
    uchar auStack_18 [16];
    
    *0x13568 = *(arg2 + 0x60);
    *0x13578 = *(arg2 + 0x58);
    *0x13560 = arg2;
    *0x13570 = arg1;
    fcn.000111b4();
    puVar5 = fcn.000111b4();
    do {
        uVar1 = *puVar5;
        uVar9 = uVar1;
        if (uVar1 == 0xffff) {
            puVar5 = NULL;
code_r0x000104da:
            if (puVar5 == NULL) {
                uVar6 = fcn.000103a0();
                fcn.00010390();
                uVar3 = in(0x1808);
                fcn.00010370(uVar9,0x1808);
                while( true ) {
                    iVar4 = in(0x1808);
                    uVar8 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
                    if ((uVar8 >> 0x17 & 1) != 0) break;
                    func_0x00010360();
                }
                fcn.00010370(uVar8,0x1808);
                if ((uVar6 >> 9 & 1) == 0) {
                    fcn.00010390();
                }
                else {
                    fcn.00010380();
                }
code_r0x00010543:
                *0x13590 = 0x10000;
                if (*0x13588 == NULL) {
                    iVar7 = (**(*0x13568 + 0x40))(6,0x10000,&puStackX_8);
                    *0x13588 = puStackX_8;
                    if (iVar7 < 0) {
                        *0x13588 = NULL;
                    }
                    puStackX_8 = *0x13588;
                    if ((*0x13588 == NULL) || (*0x13590 < 0x38)) goto code_r0x000105be;
                }
                uVar9 = *0x13590;
                puVar2 = *0x13588;
                iVar7 = *0x13590 - 0x28;
                puVar5 = *0x13588;
                puVar5[8] = 0;
                puVar5[9] = 0;
                puVar5[10] = 0;
                puVar5[0xb] = 0;
                puVar5 = puVar2 + 0x14;
                *(puVar2 + 4) = iVar7;
                *puVar2 = puVar5;
                *(puVar2 + 0x10) = puVar5;
                *(puVar2 + 0xc) = (uVar9 - 0x38) + puVar5;
code_r0x000105be:
                (**(*0x13578 + 0x18))(auStack_18,0);
                fcn.000102c0(0x13230,auStack_18,0x10);
                return;
            }
            if ((*0x13220 == *(puVar5 + 4)) && (*0x13228 == *(puVar5 + 8))) goto code_r0x00010543;
        }
        else if (uVar1 == 4) goto code_r0x000104da;
        puVar5 = puVar5 + puVar5[1];
    } while( true );
}


/* fcn.00011398 @ 0x11398 */

void fcn.00011398(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x13588;
    if (*0x13588 != NULL) {
        if ((*0x13588)[1] != 0) {
            fcn.00010300(**0x13588,(*0x13588)[1],0);
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


/* fcn.000111b4 @ 0x111b4 */

int64_t fcn.000111b4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13580 == 0) {
        *0x13580 = 0;
        if (*(*0x13560 + 0x68) != 0) {
            piVar2 = *(*0x13560 + 0x70);
            do {
                if ((*0x13180 == *piVar2) && (*0x13188 == piVar2[1])) {
                    *0x13580 = (*(*0x13560 + 0x70))[uVar1 * 3 + 2];
                    return *0x13580;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13560 + 0x68));
        }
    }
    return *0x13580;
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010362 @ 0x10362 */

void fcn.00010362(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.000105f8 @ 0x105f8 */

int64_t fcn.000105f8(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint auStackX_10 [2];
    ulong uStackX_18;
    
    uStackX_18 = 7;
    iVar2 = (**(*0x135a0 + 0x48))(0x132d0,0x13210,auStackX_10,&uStackX_18,0x135b0);
    cVar1 = *0x135b1;
    if (iVar2 < 0) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else if (*0x135b1 != *arg1) {
        *0x135b1 = *arg1;
        iVar2 = (**(*0x135a0 + 0x58))(0x132d0,0x13210,auStackX_10[0],uStackX_18,0x135b0);
        *arg1 = cVar1;
    }
    return iVar2;
}


/* fcn.000119bc @ 0x119bc */

int64_t fcn.000119bc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t *piVar2;
    int16_t *noname_1;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t aiStackX_10 [3];
    
    iVar1 = 0;
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        uVar4 = 0;
        if (*0x13410 != NULL) {
            piVar2 = *0x13410;
            iVar5 = iVar1;
            do {
                noname_1 = arg2;
                for (; (*piVar2 != 0 && (*piVar2 == *noname_1)); piVar2 = piVar2 + 1) {
                    noname_1 = noname_1 + 1;
                }
                if (*piVar2 == *noname_1) {
code_r0x00011a76:
                    aiStackX_10[0] = 0;
                    aiStackX_10[1] = 0;
                    if (((arg1 & 6U) == 0) ||
                       (iVar1 = fcn.00012e3c(*(uVar4 * 8 + 0x13508),noname_1,0,aiStackX_10), -1 < iVar1)) {
                        if (3 < uVar4) goto code_r0x00011afc;
                        for (piVar2 = *(uVar4 * 8 + 0x13410); (*piVar2 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1)
                        {
                            arg2 = arg2 + 2;
                        }
                        iVar1 = 0x130f0;
                        if (*piVar2 != *arg2) {
code_r0x00011afc:
                            iVar1 = 0x130d0;
                        }
                        iVar1 = fcn.000115cc(arg1 & 0xffff,*(uVar4 * 8 + 0x13410),*(uVar4 * 8 + 0x133d0),iVar1);
                        if (aiStackX_10[0] != 0) {
                            (**(*0x13568 + 0x48))();
                        }
                    }
                    break;
                }
                noname_1 = arg2;
                for (piVar2 = *(iVar5 + 0x133d0); (*piVar2 != 0 && (*piVar2 == *noname_1)); piVar2 = piVar2 + 1) {
                    noname_1 = noname_1 + 1;
                }
                if (*piVar2 == *noname_1) goto code_r0x00011a76;
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
                iVar5 = uVar3 * 8;
                piVar2 = *(iVar5 + 0x13410);
            } while (piVar2 != NULL);
        }
    }
    return iVar1;
}


/* fcn.000115cc @ 0x115cc */

int64_t fcn.000115cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uchar auStack_58 [48];
    
    if (((arg2 == 0) || (arg4 == 0)) ||
       ((arg1 != 1 && (((in_stack_00000028 == 0 || (in_stack_00000030 == 0)) || (((arg1 & 4U) != 0 && (arg3 == 0))))))))
    {
        return -0x7ffffffffffffffe;
    }
    uVar4 = 6;
    if ((arg1 & 4U) != 0) {
        iVar3 = *(in_stack_00000028 + 0x10) + 0x10;
        iVar3 = (**(*0x135a0 + 0x58))(arg3,0x130d0,6,in_stack_00000030 - iVar3,iVar3 + in_stack_00000028);
        return iVar3;
    }
    iStackX_10 = 0;
    iVar3 = (**(*0x135a0 + 0x48))(arg2,arg4,0,&iStackX_10,0);
    if ((iVar3 == -0x7ffffffffffffffb) && ((arg1 & 1U) != 0)) {
        fcn.000117c8(auStack_58);
        uVar4 = 0x27;
        iVar3 = (**(*0x135a0 + 0x58))(arg2,arg4,0x27,0x28,auStack_58);
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    iVar2 = 0;
    if (iVar3 != -0x7ffffffffffffff2) {
        iVar2 = iVar3;
    }
    if ((arg1 & 2U) != 0) {
        uVar1 = uVar4 | 0x61;
        if ((arg1 & 8U) == 0) {
            uVar1 = uVar4 | 0x21;
        }
        iVar2 = (**(*0x135a0 + 0x58))(arg2,arg4,uVar1,in_stack_00000030);
        if (iVar2 == -0x7ffffffffffffff2) {
            return 0;
        }
        if (iVar2 < 0) {
            return iVar2;
        }
        in_stack_00000030 = 0;
        (**(*0x135a0 + 0x48))(arg2,arg4,0,&stack0x00000030,0);
        if (((arg1 & 8U) != 0) && (iStackX_10 == in_stack_00000030)) {
            iVar2 = -0x7fffffffffffffec;
        }
    }
    return iVar2;
}


/* fcn.00010744 @ 0x10744 */

ulong fcn.00010744(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uchar uStackX_18;
    unkbyte7 StackX_19;
    
    _uStackX_18 = CONCAT71(arg3 >> 8,1);
    fcn.000105f8(&uStackX_18);
    uVar1 = fcn.000115cc(arg1 & 0xffff,arg2,0,arg4);
    fcn.000105f8(&uStackX_18);
    return uVar1;
}


/* fcn.0001069c @ 0x1069c */

int64_t fcn.0001069c(int64_t arg1)

{
    int64_t arg2;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uchar auStackX_8 [8];
    
    auStackX_8[0] = 1;
    fcn.000105f8(auStackX_8);
    if ((arg1 & 7U) == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = 0;
        iVar3 = -0x7ffffffffffffff2;
        uVar2 = 0;
        do {
            arg2 = *(uVar2 * 8 + 0x13410);
            if (arg2 == 0) break;
            iVar1 = fcn.000119bc(arg1 & 0xffff,arg2);
            if (iVar1 < 0) {
                if (iVar1 == -0x7ffffffffffffff2) {
                    iVar1 = 0;
                }
            }
            else {
                iVar3 = iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (-1 < iVar1);
        if (iVar3 < 0) {
            iVar1 = iVar3;
        }
    }
    fcn.000105f8(auStackX_8);
    return iVar1;
}


/* fcn.00011164 @ 0x11164 */

int64_t fcn.00011164(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x13568 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.000102a0(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 11808 named .text
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


/* fcn.00011554 @ 0x11554 */

int64_t fcn.00011554(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.000117c8 @ 0x117c8 */

void fcn.000117c8(int64_t arg1)

{
    int32_t var_bp_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    var_bp_10h = 0xb0107e8;
    var_ch._0_4_ = 0x1a370d;
    var_ch._4_4_ = 0;
    var_4h = 0;
    if (*0x135a0 != 0) {
        (**(*0x135a0 + 0x18))(&var_bp_10h,0);
        var_ch._0_4_ = var_ch & 0xffffff;
    }
    var_4h = 0;
    var_ch._4_4_ = 0;
    if (arg1 != &var_bp_10h) {
        fcn.000102c0(arg1,&var_bp_10h,0x10);
    }
    *(arg1 + 0x10) = 0x18;
    *(arg1 + 0x14) = 0xef10200;
    *(arg1 + 0x18) = *0x13130;
    *(arg1 + 0x20) = *0x13138;
    return;
}


/* fcn.00011860 @ 0x11860 */

//WARNING: Variable defined which should be unmapped: var_1ch

uint64_t fcn.00011860(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t var_1ch;
    
    if ((0x2ffff < arg2 - 1U) || (arg1 == 0)) {
        return 0x800000000000001a;
    }
    uVar1 = *(arg1 + 0x10);
    uVar2 = 0x800000000000001a;
    do {
        if (arg2 == 0) {
            return uVar2;
        }
        uVar4 = uVar1;
        if (arg2 < uVar4) {
            return uVar2;
        }
        uVar2 = 0;
        iVar6 = 0x13240;
        do {
            iVar3 = fcn.00011554(arg1,iVar6,0x10);
            if (iVar3 == 0) break;
            uVar2 = uVar2 + 1;
            iVar6 = iVar6 + 0x10;
        } while (uVar2 < 9);
        if ((((8 < uVar2) || (uVar1 < 0x2d)) || (0x30000 < uVar1)) ||
           ((*(arg1 + 0x14) != 0 || (uVar2 = *(arg1 + 0x18), (uVar4 - 0x1c) % uVar2 != 0)))) {
            return 0x8000000000000002;
        }
        if ((*arg1 == *0x13160) && (*(arg1 + 8) == *0x13168)) {
            fcn.00011398();
            iVar6 = fcn.00012884(arg1 + 0x2c,uVar2 - 0x10);
            fcn.00011398();
            uVar5 = ~-(iVar6 != 0) & 0x8000000000000002;
            if (uVar5 < 0) {
                return uVar5;
            }
        }
        for (uVar5 = 0x1c; uVar5 < uVar4; uVar5 = uVar5 + uVar2) {
        }
        arg1 = arg1 + uVar4;
        uVar2 = 0;
        uVar1 = *(arg1 + 0x10);
        arg2 = arg2 - uVar4;
    } while( true );
}


/* fcn.00012ff0 @ 0x12ff0 */

int64_t fcn.00012ff0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001109c @ 0x1109c */

uint64_t fcn.0001109c(uint32_t arg1)

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


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00012884 @ 0x12884 */

int64_t fcn.00012884(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int64_t arg1_00;
    char *pcVar3;
    char *pcVar4;
    int64_t arg2_00;
    char *apcStackX_18 [2];
    int64_t var_30h_2;
    char *pcStack_48;
    char cStack_3f;
    int iStack_3c;
    int64_t var_30h;
    uchar uStack_30;
    uint32_t var_27h;
    uint32_t var_20h;
    int64_t var_18h;
    
    arg1_00 = fcn.00011220(0x440);
    fcn.00010300(arg1_00,0x440,0);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x418) = arg1;
        pcVar4 = arg1 + arg2;
        iVar2 = fcn.00012a74(arg1,arg2,&pcStack_48);
        pcVar1 = pcStack_48;
        if (((-1 < iVar2) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
            apcStackX_18[0] = pcStack_48;
            *(arg1_00 + 0x420) = pcStack_48 + (var_30h - arg1);
            pcVar3 = pcStack_48 + var_30h;
            if (pcVar3 <= pcVar4) {
                if (pcVar3 < pcVar4) {
                    pcVar4 = pcVar3;
                }
                *(arg1_00 + 0x428) = pcStack_48 + (*(arg1_00 + 0x418) - arg1);
                iVar2 = fcn.00012580(pcStack_48,pcVar4 - pcStack_48,arg1_00,apcStackX_18);
                pcVar3 = apcStackX_18[0];
                if (iVar2 == 0) {
                    arg2_00 = pcVar4 - apcStackX_18[0];
                    *(arg1_00 + 0x430) = apcStackX_18[0] - pcVar1;
                    iVar2 = fcn.00012a74(apcStackX_18[0],arg2_00,&uStack_30);
                    if (iVar2 < 0) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.00011b58(pcVar3,arg2_00,arg1_00 + 0x398,apcStackX_18);
                        pcVar3 = apcStackX_18[0];
                    }
                    if ((((iVar2 == 0) && (iVar2 = fcn.00012a74(pcVar3,pcVar4 - pcVar3,&pcStack_48), -1 < iVar2)) &&
                        ((cStack_3f == '\0' && ((iStack_3c == 3 && (var_30h != 0)))))) && (*pcStack_48 == '\0')) {
                        *(arg1_00 + 0x3f0) = pcStack_48 + 1;
                        *(arg1_00 + 0x3f8) = var_30h - 1;
                        return arg1_00;
                    }
                }
            }
        }
    }
    return 0;
}


/* fcn.00012e3c @ 0x12e3c */

int64_t fcn.00012e3c(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t arg3_00;
    uint64_t *arg4;
    int64_t iStackX_18;
    ulong in_stack_00000028;
    uint64_t auStack_28 [2];
    
    iStackX_18 = arg2;
    arg1_01 = fcn.00012d78(arg1);
    iVar1 = fcn.00012db8(arg1_01,arg1,arg2,arg3);
    if (iVar1 < 0) {
        iStackX_18 = 0;
        arg3_00 = 0;
        arg4 = auStack_28;
        iVar1 = (**(*0x13568 + 0x138))(2,0x13150,0,arg4,&iStackX_18,in_stack_00000028);
        if (-1 < iVar1) {
            uVar3 = 0;
            uVar2 = auStack_28[0];
            if (auStack_28[0] != 0) {
                do {
                    arg1_00 = *(iStackX_18 + uVar3 * 8);
                    if (arg1_00 != arg1_01) {
                        iVar1 = fcn.00012db8(arg1_00,arg1,arg3_00,arg4);
                        if (-1 < iVar1) goto code_r0x00012f19;
                        uVar2 = auStack_28[0];
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar2);
            }
            if (uVar3 == uVar2) {
                iVar1 = -0x7ffffffffffffff2;
            }
        }
code_r0x00012f19:
        if (iStackX_18 != 0) {
            (**(*0x13568 + 0x48))();
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00012a74 @ 0x12a74 */

int fcn.00012a74(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint in_register_00000014;
    uint8_t *puVar3;
    int iVar4;
    
    fcn.00010300(arg3,0x18,0);
    puVar1 = arg1 + CONCAT44(in_register_00000014,arg2);
    if (arg1 < puVar1) {
        uVar2 = *arg1;
        puVar3 = arg1 + 1;
        *(arg3 + 8) = uVar2;
        iVar4 = 1;
        *(arg3 + 9) = uVar2 >> 6;
        *(arg3 + 10) = uVar2 >> 5 & 1;
        if ((uVar2 & 0x1f) == 0x1f) {
            *(arg3 + 0xc) = 0;
            do {
                if (puVar1 <= puVar3) {
                    return -1;
                }
                uVar2 = *puVar3;
                puVar3 = puVar3 + 1;
                *(arg3 + 0xc) = uVar2 & 0x7f | *(arg3 + 0xc) << 7;
            } while (uVar2 < '\0');
        }
        else {
            *(arg3 + 0xc) = uVar2 & 0x1f;
        }
        if (puVar3 < puVar1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            if (uVar2 < '\0') {
                if (uVar2 == 0xff) {
                    return -1;
                }
                uVar2 = uVar2 & 0x7f;
                *(arg3 + 0x10) = 0;
                if (4 < uVar2) {
                    return -1;
                }
                while (uVar2 != 0) {
                    uVar2 = uVar2 - 1;
                    if (puVar1 <= puVar3) {
                        return -1;
                    }
                    *(arg3 + 0x10) = *(arg3 + 0x10) << 8 | *puVar3;
                    puVar3 = puVar3 + 1;
                }
            }
            else {
                *(arg3 + 0x10) = uVar2;
            }
            if ((puVar3 <= puVar1) && (*(arg3 + 0x10) <= puVar1 - puVar3)) {
                *arg3 = puVar3;
                if (((*(arg3 + 9) == '\0') && (*(arg3 + 0xc) == 1)) && ((*(arg3 + 0x10) != 1 || (*puVar3 - 1 < 0xfe))))
                {
                    iVar4 = 0;
                }
                return iVar4 + -1;
            }
        }
    }
    return -1;
}


/* fcn.00012c44 @ 0x12c44 */

ulong fcn.00012c44(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    uint in_R8;
    ulong *puVar7;
    
    puVar7 = CONCAT44(in_R8,arg3);
    if (((*(puVar7 + 2) != 0) && (*(puVar7 + 9) == '\0')) && (*(puVar7 + 0xc) == 6)) {
        uVar6 = *(puVar7 + 2);
        puVar5 = *puVar7;
        *arg2 = puVar5 + uVar6;
        fcn.00010300(arg1,0x58,0);
        puVar1 = puVar5 + uVar6;
        while( true ) {
            if (puVar1 <= puVar5) {
                return 0;
            }
            uVar6 = 0;
            do {
                if (puVar1 <= puVar5) {
                    return 0xffffffff;
                }
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar6 = uVar2 & 0x7f | uVar6 << 7;
            } while (uVar2 < '\0');
            uVar3 = *(arg1 + 0x50);
            if (0x13 < uVar3) break;
            if (uVar3 == 0) {
                uVar4 = uVar6 / 0x28;
                if (2 < uVar4) {
                    uVar4 = 2;
                }
                *arg1 = uVar4;
                *(arg1 + 4) = uVar6 + uVar4 * -0x28;
                *(arg1 + 0x50) = 2;
            }
            else {
                *(arg1 + uVar3 * 4) = uVar6;
                *(arg1 + 0x50) = *(arg1 + 0x50) + 1;
            }
        }
        return 0xffffffff;
    }
    return 0xffffffff;
}


/* fcn.00011b58 @ 0x11b58 */

int fcn.00011b58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int iVar1;
    uint64_t uVar2;
    int64_t *in_stack_00000028;
    uchar auStack_28 [32];
    
    if ((*(in_stack_00000028 + 9) == '\0') && (*(in_stack_00000028 + 0xc) == 0x10)) {
        arg1_00 = *in_stack_00000028;
        uVar2 = *(in_stack_00000028 + 2) + arg1_00;
        if (uVar2 <= arg1 + arg2) {
            *arg4 = uVar2;
            iVar1 = fcn.00012a74(arg1_00,uVar2 - arg1_00,auStack_28);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.00012c44(arg3,&stack0x00000028,auStack_28);
            }
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.00011304 @ 0x11304 */

void fcn.00011304(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    
    iVar3 = *0x13588;
    iVar5 = 0;
    if (*0x13588 != 0) {
        if (*(*0x13588 + 0x10) == 0) {
            fcn.00011398();
        }
        piVar1 = *(iVar3 + 0x10);
        piVar2 = *(iVar3 + 0x18);
        if (piVar1 <= piVar2) {
            piVar4 = piVar1;
            do {
                if ((*(piVar4 + 9) == '\x01') && (iVar3 = *piVar4, iVar3 == arg1)) {
                    *(piVar1 + iVar5 * 0x10 + 9) = 0;
                    if (*(piVar1 + iVar5 * 2 + 1) << 7 == 0) {
                        return;
                    }
                    fcn.00010300(iVar3,*(piVar1 + iVar5 * 2 + 1) << 7,0);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 2;
            } while (piVar1 + iVar5 * 2 <= piVar2);
        }
    }
    return;
}


/* fcn.00011220 @ 0x11220 */

int64_t fcn.00011220(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    
    iVar1 = *0x13588;
    if (*0x13588 != 0) {
        if (*(*0x13588 + 0x10) == 0) {
            fcn.00011398();
        }
        piVar2 = *(iVar1 + 0x10);
        uVar7 = ((arg1 & 0x7fU) != 0) + (arg1 >> 7);
        if ((uVar7 < 0x100) && (iVar3 = 0, piVar2 <= *(iVar1 + 0x18))) {
            puVar5 = piVar2 + 1;
            do {
                if ((puVar5[1] == 0) && (uVar7 <= *puVar5)) {
                    *(piVar2 + iVar3 * 0x10 + 9) = 1;
                    return piVar2[iVar3 * 2];
                }
                iVar3 = iVar3 + 1;
                puVar5 = puVar5 + 0x10;
            } while (piVar2 + iVar3 * 2 <= *(iVar1 + 0x18));
            if (piVar2 <= *(iVar1 + 0x18)) {
                iVar4 = *(piVar2 + 1) * 0x80 + *piVar2;
                piVar6 = uVar7 * 0x80 + iVar4;
                if (iVar4 != *piVar2) {
                    piVar2 = piVar2 + -2;
                }
                if (*(iVar1 + 0x20) < piVar6) {
                    *(iVar1 + 0x20) = piVar6;
                }
                if (piVar6 < piVar2) {
                    *(iVar1 + 0x10) = piVar2;
                    *piVar2 = iVar4;
                    *(piVar2 + 1) = uVar7;
                    *(piVar2 + 9) = 1;
                    return iVar4;
                }
            }
        }
    }
    return 0;
}


/* fcn.00012a10 @ 0x12a10 */

uint64_t fcn.00012a10(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uchar *noname_1;
    uint64_t auStackX_18 [2];
    uchar auStack_18 [16];
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    noname_1 = arg2;
    if ((arg2 != '\0') && (auStack_18 != puVar1)) {
        fcn.000102c0(auStack_18,arg1,arg2 & 0xffU);
        noname_1 = puVar1;
    }
    auStack_18[arg2 & 0xffU] = 0;
    fcn.000110c0(auStack_18,noname_1,auStackX_18);
    *arg3 = auStackX_18[0];
    return auStackX_18[0] & 0xffffffff;
}


/* fcn.000110c0 @ 0x110c0 */

ulong fcn.000110c0(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar2 = fcn.0001109c(arg1), uVar2 < 0xf4241)) {
        for (; (*arg1 == ' ' || (*arg1 == '\t')); arg1 = arg1 + 1) {
        }
        for (; *arg1 == '0'; arg1 = arg1 + 1) {
        }
        *arg2 = 0;
        while( true ) {
            if (9 < *arg1 - 0x30U) {
                return 0;
            }
            cVar1 = *arg1;
            if (~(cVar1 + -0x30) / 10 < *arg2) break;
            arg1 = arg1 + 1;
            *arg2 = cVar1 + -0x30 + *arg2 * 10;
        }
        *arg2 = 0xffffffffffffffff;
        return 0x8000000000000003;
    }
    return 0x8000000000000002;
}


/* fcn.000113f0 @ 0x113f0 */

uint fcn.000113f0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    int *in_stack_00000038;
    
    uVar3 = 0xffffffff;
    uVar6 = 0x7b2;
    *in_stack_00000038 = 0;
    uVar7 = arg1;
    uVar4 = 0xffffffff;
    if (((((0x7b1 < uVar7) && (uVar4 = uVar3, arg2 - 1U < 0xc)) && (arg3 - 1U < 0x1f)) &&
        ((arg4 < 0x18 && (in_stack_00000028 < 0x3c)))) && (in_stack_00000030 < 0x3d)) {
        *in_stack_00000038 = 0;
        if (uVar7 != 0x7b2) {
            do {
                uVar1 = uVar6 & 0x80000003;
                if (uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 0) {
                    if (uVar6 == (uVar6 / 100) * 100) {
                        if (uVar6 != (uVar6 / 400) * 400) goto code_r0x000114ae;
                    }
                    iVar2 = 0x16e;
                }
                else {
code_r0x000114ae:
                    iVar2 = 0x16d;
                }
                uVar6 = uVar6 + 1;
                *in_stack_00000038 = *in_stack_00000038 + iVar2 * 0x15180;
            } while (uVar6 != uVar7);
        }
        uVar6 = uVar7 & 0x80000003;
        if (uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar6 == 0) && ((uVar7 != (uVar7 / 100) * 100 || (uVar7 == (uVar7 / 400) * 400)))) {
            iVar5 = 0xe;
        }
        else {
            iVar5 = 0;
        }
        *in_stack_00000038 =
             *in_stack_00000038 +
             ((arg4 + (*((iVar5 + arg2) * 4 + 0x13360) + -1 + arg3) * 0x18) * 0x3c + in_stack_00000028) * 0x3c +
             in_stack_00000030;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00012038 @ 0x12038 */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.00012038(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    int64_t iVar4;
    uint32_t uVar5;
    uchar auStackX_8 [8];
    uint32_t auStackX_18 [4];
    int64_t var_30h;
    int64_t var_40h;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [2];
    int64_t var_8h;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    uVar3 = arg1;
    if (arg3 == 0x17) {
        if (iVar4 != 0xd) {
            return 0xffffffff;
        }
        if (*(arg1 + 0xc) != 'Z') {
            return 0xffffffff;
        }
        iVar4 = 0;
        iVar2 = fcn.00012a10(uVar3,2,auStackX_18);
        if (iVar2 == -1) {
            return 0xffffffff;
        }
        if (auStackX_18[0] < 0x32) {
            uVar5 = auStackX_18[0] + 2000;
        }
        else {
            uVar5 = auStackX_18[0] + 0x76c;
        }
        iVar2 = 2;
    }
    else {
        if ((arg3 != 0x18) || (*(arg1 + -1 + iVar4) != 'Z')) {
            return 0xffffffff;
        }
        iVar2 = 4;
        iVar4 = CONCAT71(iVar4 >> 8,4);
        iVar1 = fcn.00012a10(uVar3,iVar4,auStackX_18);
        if (iVar1 == -1) {
            return 0xffffffff;
        }
        uVar5 = auStackX_18[0];
    }
    uVar3 = uVar3 + iVar2;
    iVar4 = CONCAT71(iVar4 >> 8,2);
    iVar2 = fcn.00012a10(uVar3,iVar4,auStack_30);
    if (iVar2 != -1) {
        iVar4 = CONCAT71(iVar4 >> 8,2);
        iVar2 = fcn.00012a10(uVar3 + 2,iVar4,&uStack_34);
        if (iVar2 != -1) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
            iVar2 = fcn.00012a10(uVar3 + 4,iVar4,&uStack_38);
            if (iVar2 != -1) {
                iVar4 = CONCAT71(iVar4 >> 8,2);
                iVar2 = fcn.00012a10(uVar3 + 6,iVar4,auStackX_8);
                if ((iVar2 != -1) &&
                   (iVar2 = fcn.00012a10(uVar3 + 8,CONCAT71(iVar4 >> 8,2),auStackX_18), iVar2 != -1)) {
                    iVar2 = fcn.000113f0(uVar5,auStack_30[0],uStack_34,uStack_38);
                    if (iVar2 < 0) {
                        if (0x7b1 < uVar5) {
                            return 0xffffffff;
                        }
                        *arg4 = 0;
                    }
                    return 0;
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.0001227c @ 0x1227c */

ulong fcn.0001227c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t var_20h;
    uint32_t var_17h;
    uint32_t var_bp_10h;
    
    iVar2 = fcn.00012a74(arg2,arg3,&var_20h);
    uVar4 = 0;
    if (((-1 < iVar2) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) {
        *(arg1 + 0x400) = *(arg1 + 0x400) | 1;
        if (var_bp_10h == 0) {
            return 0;
        }
        uVar3 = var_bp_10h + var_20h;
        iVar2 = fcn.00012a74(var_20h,var_bp_10h,&var_20h);
        if ((-1 < iVar2) && (var_17h == '\0')) {
            if (stack0xffffffffffffffe4 == 1) {
                *(arg1 + 0x404) = *var_20h;
                arg1_00 = var_bp_10h + var_20h;
                if (uVar3 <= arg1_00) {
                    return 0;
                }
                iVar2 = fcn.00012a74(arg1_00,uVar3 - arg1_00,&var_20h);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (var_17h != '\0') {
                    return 0xffffffff;
                }
            }
            if (*NULL == 2) {
                for (uVar3 = var_bp_10h; uVar3 != 0; uVar3 = uVar3 - 1) {
                    uVar1 = *var_20h;
                    var_20h = var_20h + 1;
                    uVar4 = uVar4 << 8 | uVar1;
                }
                *(arg1 + 0x400) = *(arg1 + 0x400) | 2;
                *(arg1 + 0x408) = uVar4;
                return 0;
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00012c7c @ 0x12c7c */

uint32_t fcn.00012c7c(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    
    uVar2 = CONCAT44(in_register_00000014,arg2);
    uVar7 = 0;
    puVar5 = arg1 + 1;
    iVar8 = 8;
    if (1 < uVar2) {
        uVar3 = 0;
        iVar4 = iVar8;
        uVar6 = *puVar5;
        do {
            uVar1 = uVar3 * '\x02';
            uVar3 = uVar1 | 1;
            if ((uVar6 & 1) == 0) {
                uVar3 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar6 = uVar6 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar3;
        puVar5 = arg1 + 2;
    }
    if (2 < uVar2) {
        uVar6 = 0;
        iVar4 = iVar8;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar7 | uVar6 << 8;
        puVar5 = puVar5 + 1;
    }
    if (3 < uVar2) {
        uVar6 = 0;
        iVar4 = iVar8;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar7 | uVar6 << 0x10;
        puVar5 = puVar5 + 1;
    }
    if (4 < uVar2) {
        uVar6 = 0;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar8 = iVar8 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar8 != 0);
        uVar7 = uVar7 | uVar6 << 0x18;
    }
    return uVar7;
}


/* fcn.00011cdc @ 0x11cdc */

ulong fcn.00011cdc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint uVar8;
    char *arg1_00;
    char *pcVar9;
    char *pcStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    char *pcStack_a0;
    int iStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int64_t iStack_48;
    uchar auStack_38 [32];
    
    iVar3 = fcn.00012a74(arg1,arg2,&pcStack_b8);
    if ((((iVar3 < 0) || (cStack_af != '\0')) || (iStack_ac != 0x10)) ||
       (pcVar9 = pcStack_b8 + uStack_a8, arg1 + arg2 < pcVar9)) {
        return 0xffffffff;
    }
    *arg4 = pcVar9;
    cStack_af = '\0';
    iStack_ac = 0x10;
    arg1_00 = pcStack_b8;
joined_r0x00011d4e:
    do {
        if (pcVar9 <= arg1_00) {
            return 0;
        }
        iVar3 = fcn.00012a74(arg1_00,pcVar9 - arg1_00,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x11) {
            return 0xffffffff;
        }
        arg1_00 = pcStack_b8 + uStack_a8;
        iVar3 = fcn.00012a74(pcStack_b8,arg1_00 - pcStack_b8,&pcStack_b8);
        pcVar6 = pcStack_b8;
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x10) {
            return 0xffffffff;
        }
        iVar3 = uStack_a8 + pcStack_b8;
        pcStack_a0 = pcStack_b8;
        iVar4 = fcn.00012a74(pcStack_b8,iVar3 - pcStack_b8,auStack_38);
        if (iVar4 < 0) {
            iVar4 = -1;
        }
        else {
            iVar4 = fcn.00012c44(&iStack_98,&pcStack_a0,auStack_38);
            pcVar6 = pcStack_a0;
        }
        if (iVar4 != 0) {
            return 0xffffffff;
        }
        iVar3 = fcn.00012a74(pcVar6,iVar3 - pcVar6,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_48 != 4) goto code_r0x00011ea8;
    } while (((iStack_98 != 2) || (iStack_94 != 5)) || (iStack_90 != 4));
    if (iStack_8c == 3) {
        uVar8 = 2;
    }
    else if (iStack_8c == 6) {
        uVar8 = 3;
    }
    else if (iStack_8c == 7) {
        uVar8 = 4;
    }
    else if (iStack_8c == 8) {
        uVar8 = 5;
    }
    else {
        if (iStack_8c == 10) {
            uVar8 = 6;
            goto code_r0x00011f94;
        }
        if (iStack_8c != 0xb) goto joined_r0x00011d4e;
        uVar8 = 7;
    }
    goto code_r0x00011f94;
code_r0x00011ea8:
    if (iStack_48 != 7) goto joined_r0x00011d4e;
    if (iStack_98 == 1) {
        if ((((iStack_94 == 2) && (iStack_90 == 0x348)) &&
            ((iStack_8c == 0x1bb8d && ((iStack_88 == 1 && (iStack_84 == 9)))))) && (iStack_80 == 1)) {
            fcn.00011304(*(arg3 + 0x148));
            pcVar6 = fcn.00011220(uStack_a8 + 1);
            *(arg3 + 0x148) = pcVar6;
            if (pcVar6 == NULL) {
                return 0xffffffff;
            }
            uVar7 = uStack_a8;
            if ((uStack_a8 != 0) && (pcVar6 != pcStack_b8)) {
                fcn.000102c0(pcVar6,pcStack_b8,uStack_a8);
                uVar7 = uStack_a8;
            }
            *(uVar7 + *(arg3 + 0x148)) = 0;
        }
        goto joined_r0x00011d4e;
    }
    if ((((iStack_98 != 0) || (iStack_94 != 9)) || (iStack_90 != 0x926)) ||
       (((iStack_8c != 0x124f92c || (iStack_88 != 100)) || ((iStack_84 != 1 || (iStack_80 != 0x19))))))
    goto joined_r0x00011d4e;
    uVar8 = 1;
code_r0x00011f94:
    if ((*(arg3 + 0x140) == 0x14) ||
       (pcVar5 = fcn.00011220(uStack_a8 + 1), pcVar6 = pcVar5, pcVar1 = pcStack_b8, uVar2 = uStack_a8,
       pcVar5 == NULL)) {
        return 0xffffffff;
    }
    while (uVar2 != 0) {
        if (*pcVar1 != '\0') {
            *pcVar6 = *pcVar1;
            pcVar6 = pcVar6 + 1;
        }
        pcVar1 = pcVar1 + 1;
        uVar2 = uVar2 - 1;
    }
    pcVar5[uStack_a8] = '\0';
    *(arg3 + *(arg3 + 0x140) * 0x10) = uVar8;
    *(arg3 + 8 + *(arg3 + 0x140) * 0x10) = pcVar5;
    *(arg3 + 0x140) = *(arg3 + 0x140) + 1;
    goto joined_r0x00011d4e;
}


/* fcn.0001218c @ 0x1218c */

ulong fcn.0001218c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t var_20h;
    uint32_t var_17h;
    int32_t var_10h;
    
    iVar1 = fcn.00012a74(arg1,arg2,&var_20h);
    if ((((-1 < iVar1) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) &&
       (var_10h <= (arg1 - var_20h) + arg2)) {
        *arg4 = var_10h + var_20h;
        iVar1 = fcn.00012a74(var_20h,var_10h,&var_20h);
        if ((((-1 < iVar1) && (var_17h == '\0')) &&
            ((iVar1 = fcn.00012038(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x328), -1 < iVar1 &&
             ((iVar1 = fcn.00012a74(var_10h + var_20h,*arg4 - (var_10h + var_20h),&var_20h), -1 < iVar1 &&
              (var_17h == '\0')))))) &&
           (iVar1 = fcn.00012038(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x32c), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00011bc4 @ 0x11bc4 */

ulong fcn.00011bc4(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t iStack_48;
    char cStack_3f;
    int iStack_3c;
    int64_t var_30h;
    uchar uStack_30;
    uint32_t var_27h;
    int32_t var_bp_20h;
    int64_t var_bp_18h;
    
    iVar1 = fcn.00012a74(arg1,(arg1 + noname_1) - arg1,&iStack_48);
    arg1_00 = iStack_48;
    if (((-1 < iVar1) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
        uVar2 = var_30h + iStack_48;
        iStackX_8 = iStack_48;
        if (uVar2 <= arg1 + noname_1) {
            *arg3 = uVar2;
            arg2_00 = uVar2 - iStack_48;
            iVar1 = fcn.00012a74(iStack_48,arg2_00,&uStack_30);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.00011b58(arg1_00,arg2_00,arg2 + 0x330,&iStackX_8);
                arg1_00 = iStackX_8;
            }
            if (((iVar1 == 0) && (iVar1 = fcn.00012a74(arg1_00,uVar2 - arg1_00,&iStack_48), -1 < iVar1)) &&
               ((cStack_3f == '\0' && ((iStack_3c == 3 && (var_30h != 0)))))) {
                *(arg2 + 0x390) = var_30h - 1;
                *(arg2 + 0x388) = iStack_48 + 1;
                return 0;
            }
            return 0xffffffff;
        }
    }
    return 0xffffffff;
}


/* fcn.00012384 @ 0x12384 */

//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.00012384(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1_00;
    uint64_t arg1_01;
    int64_t iStackX_20;
    uint32_t var_37h;
    int64_t var_7fh;
    int64_t iStack_d8;
    char cStack_cf;
    int iStack_cc;
    uint32_t uStack_c8;
    int64_t iStack_c0;
    char cStack_b7;
    int iStack_b4;
    uint32_t uStack_b0;
    uint64_t uStack_a8;
    char cStack_9f;
    int iStack_9c;
    uint32_t uStack_98;
    uchar auStack_90 [15];
    int64_t var_79h;
    uint32_t var_70h;
    uchar auStack_74 [3];
    int32_t var_69h;
    uchar auStack_6c [3];
    int64_t var_61h;
    uint32_t var_58h;
    uint32_t var_51h;
    int64_t var_49h;
    uint32_t var_40h;
    int32_t var_39h;
    int64_t var_31h;
    uchar auStack_28 [7];
    uint32_t var_19h;
    uint32_t var_15h;
    uint32_t var_11h;
    uint32_t var_dh;
    
    iVar1 = fcn.00012a74(arg2,arg3,&uStack_a8);
    if (((-1 < iVar1) && (cStack_9f == '\0')) && (iStack_9c == 0x10)) {
        arg1_01 = uStack_a8;
code_r0x000123de:
        do {
            if (uStack_98 + uStack_a8 <= arg1_01) {
                return 0;
            }
            iVar1 = fcn.00012a74(arg1_01,(uStack_98 + uStack_a8) - arg1_01,&iStack_d8);
            arg1_00 = iStack_d8;
            if (((iVar1 < 0) || (cStack_cf != '\0')) || (iStack_cc != 0x10)) {
                iVar1 = -1;
            }
            else {
                arg1_01 = uStack_c8 + iStack_d8;
                iStackX_20 = iStack_d8;
                iVar1 = arg1_01;
                iVar2 = fcn.00012a74(iStack_d8,iVar1 - iStack_d8,auStack_90);
                if (iVar2 < 0) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = fcn.00012c44(&var_70h,&iStackX_20,auStack_90);
                    arg1_00 = iStackX_20;
                }
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                iVar2 = fcn.00012a74(arg1_00,iVar1 - arg1_00,&iStack_d8);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (cStack_cf != '\0') {
                    return 0xffffffff;
                }
                if (iStack_cc == 1) {
                    iVar1 = fcn.00012a74(iStack_d8,iVar1 - iStack_d8,&iStack_d8);
                    if (iVar1 < 0) {
                        return 0xffffffff;
                    }
                    if ((cStack_cf != '\0') && (cStack_cf != '\x03')) {
                        return 0xffffffff;
                    }
                }
                if (iStack_cc != 4) {
                    return 0xffffffff;
                }
                if ((((_auStack_28 < 4) || (var_70h != 2)) || (_auStack_74 != 5)) || (stack0xffffffffffffff90 != 0x1d))
                goto code_r0x000123de;
                if (_auStack_6c == 0xf) {
                    iVar1 = fcn.00012a74(iStack_d8,uStack_c8,&iStack_c0);
                    if (((iVar1 < 0) || (cStack_b7 != '\0')) || ((iStack_b4 != 3 || (uStack_b0 == 0)))) {
                        iVar1 = -1;
                    }
                    else {
                        *(arg1 + 0x400) = *(arg1 + 0x400) | 4;
                        uVar3 = fcn.00012c7c(iStack_c0,uStack_b0);
                        *(arg1 + 0x40c) = uVar3;
                        iVar1 = 0;
                    }
                }
                else {
                    if (_auStack_6c != 0x13) goto code_r0x000123de;
                    iVar1 = fcn.0001227c(arg1,iStack_d8,uStack_c8);
                }
                if (-1 < iVar1) goto code_r0x000123de;
            }
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.00012580 @ 0x12580 */

int fcn.00012580(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint64_t arg3_00;
    uint8_t *puStack_58;
    uint8_t *puStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uchar uStack_38;
    uint32_t var_2fh;
    uint32_t var_28h;
    int64_t var_20h;
    
    iVar2 = fcn.00012a74(arg1,arg2,&puStack_50);
    if (((-1 < iVar2) && (var_40h._1_1_ == '\0')) && (var_40h._4_4_ == 0x10)) {
        puVar5 = puStack_50 + var_38h;
        *arg4 = puVar5;
        iVar2 = puVar5;
        iVar3 = fcn.00012a74(puStack_50,iVar2 - puStack_50,&puStack_50);
        if (-1 < iVar3) {
            if (var_40h._1_1_ == '\x02') {
                iVar3 = fcn.00012a74(puStack_50,iVar2 - puStack_50,&puStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
                if (var_40h._1_1_ != '\0') {
                    return -1;
                }
                if (var_40h._4_4_ != 2) {
                    return -1;
                }
                if (var_38h != 1) {
                    return -1;
                }
                uVar1 = *puStack_50;
                *(arg3 + 0x10) = uVar1;
                if (2 < uVar1) {
                    return -1;
                }
                iVar3 = fcn.00012a74(puStack_50 + 1,iVar2 - (puStack_50 + 1),&puStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
            }
            else {
                *(arg3 + 0x10) = 0;
            }
            if (((var_40h._1_1_ == '\0') && (var_40h._4_4_ == 2)) && (arg3_00 = var_38h, var_38h - 1 < 0x14)) {
                puVar4 = puStack_50 + arg3_00;
                for (; (var_38h != 0 && (*puStack_50 == 0)); puStack_50 = puStack_50 + 1) {
                    var_38h._0_4_ = arg3_00 - 1;
                    arg3_00 = var_38h;
                }
                puStack_58 = puVar4;
                if ((arg3_00 != 0) && (arg3 + 0x14 != puStack_50)) {
                    fcn.000102c0(arg3 + 0x14,puStack_50,arg3_00);
                    arg3_00 = var_38h;
                }
                *(arg3 + 0x28) = arg3_00;
                iVar3 = fcn.00012a74(puVar4,puVar5 - puVar4,&uStack_38);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.00011b58(puVar4,puVar5 - puVar4,arg3 + 0x30,&puStack_58);
                    puVar4 = puStack_58;
                }
                if ((((iVar3 == 0) &&
                     (iVar3 = fcn.00011cdc(puVar4,puVar5 - puVar4,arg3 + 0x88,&puStack_58), iVar3 == 0)) &&
                    (iVar3 = fcn.0001218c(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)) &&
                   ((iVar3 = fcn.00011cdc(puStack_58,puVar5 - puStack_58,arg3 + 0x1d8,&puStack_58), iVar3 == 0 &&
                    (iVar3 = fcn.00011bc4(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)))) {
                    if ((puStack_58 == puVar5) || (*(arg3 + 0x10) == 0)) {
                        return 0;
                    }
                    iVar3 = fcn.00012a74(puStack_58,iVar2 - puStack_58,&puStack_50);
                    if ((-1 < iVar3) && (var_40h._1_1_ == '\x02')) {
                        if (var_40h._4_4_ == 1) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar3 = fcn.00012a74(puVar4,iVar2 - puVar4,&puStack_50);
                            if (iVar3 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ == 2) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar2 = fcn.00012a74(puVar4,iVar2 - puVar4,&puStack_50);
                            if (iVar2 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ != 3) {
                            return 0;
                        }
                        if (*(arg3 + 0x10) == 2) {
                            iVar2 = fcn.00012384(arg3,puStack_50,var_38h);
                            return (-1 < iVar2) - 1;
                        }
                    }
                }
                return -1;
            }
        }
    }
    return -1;
}


/* fcn.00012d78 @ 0x12d78 */

ulong fcn.00012d78(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x13568 + 0x98))(*0x13570,0x130c0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.00012db8 @ 0x12db8 */

ulong fcn.00012db8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg3;
    if (arg1 != 0) {
        iStackX_20 = arg4;
        iVar1 = (**(*0x13568 + 0x98))(arg1,0x13150,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,arg2,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


