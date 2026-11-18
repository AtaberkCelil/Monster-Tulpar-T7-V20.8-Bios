// decompiled by r2ghidra: 1045_UfsPassThruDxe.pe32
// functions: 44

/* entry0 @ 0x103a4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.0001041c(arg1,in_RDX);
    *0x13730 = arg1;
    *0x13738 = arg1;
    (**(*0x138c8 + 0x148))(0x13738,0x135c0,0x13710,0x135e0,0x13760,0x13590,0x13748,0);
    return;
}


/* fcn.0001041c @ 0x1041c */

void fcn.0001041c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x138c8 = *(arg1 + 0x60);
    *0x138c0 = arg1;
    fcn.000134ac();
    puVar4 = fcn.000134ac();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010470:
            if (puVar4 == NULL) {
                uVar5 = fcn.000103a0();
                fcn.00010390();
                uVar2 = in(0x1808);
                fcn.00010370(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00010280();
                }
                fcn.00010370(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010390();
                }
                else {
                    fcn.00010380();
                }
                return;
            }
            if ((*0x137c0 == *(puVar4 + 4)) && (*0x137c8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010470;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000134ac @ 0x134ac */

int64_t fcn.000134ac(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x138d0 == 0) {
        *0x138d0 = 0;
        if (*(*0x138c0 + 0x68) != 0) {
            piVar2 = *(*0x138c0 + 0x70);
            do {
                if ((*0x135b0 == *piVar2) && (*0x135b8 == piVar2[1])) {
                    *0x138d0 = (*(*0x138c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x138d0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x138c0 + 0x68));
        }
    }
    return *0x138d0;
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


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010290 @ 0x10290 */

int64_t fcn.00010290(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001228c @ 0x1228c */

int64_t fcn.0001228c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint *arg2_00;
    int64_t iVar5;
    ulong uVar6;
    uint *puVar7;
    int64_t arg2_01;
    uint64_t uVar8;
    int aiStack_38 [4];
    
    iVar4 = fcn.000132b0(arg1,0x70);
    if ((iVar4 == 0) || (arg2_00 = fcn.00010310(iVar4,0x70), arg2_00 == NULL)) {
        return -0x7ffffffffffffff7;
    }
    *arg2_00 = 0x54534655;
    puVar7 = arg2_00 + 6;
    *(arg2_00 + 0x18) = *arg3;
    *(arg2_00 + 0x16) = arg3;
    iVar4 = *(arg1 + 0x78);
    iVar5 = fcn.000116d8(arg1,puVar7);
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar5 = *(arg2_00 + 6) * 0x20 + *(arg1 + 0xa8);
    *(arg2_00 + 8) = iVar5;
    iVar5 = fcn.00011550(arg1,CONCAT71(puVar7 >> 8,arg2),arg3,iVar5);
    if (iVar5 < 0) {
        return iVar5;
    }
    arg2_00[10] = (*(*(arg2_00 + 8) + 0x1e) + *(*(arg2_00 + 8) + 0x1c) * 4) * 4;
    puVar7 = arg2_00;
    iVar5 = fcn.0001207c(arg1,arg2_00);
    if (-1 < iVar5) {
        if (arg4 != 0) {
            uVar6 = (**(*0x138c8 + 0x18))(0x10);
            *(arg2_00 + 0x1a) = arg4;
            puVar1 = arg2_00 + 2;
            puVar7 = arg1 + 0xf0;
            *puVar1 = puVar7;
            puVar2 = *(arg1 + 0xf8);
            *(arg2_00 + 4) = puVar2;
            *puVar2 = puVar1;
            iVar5 = *0x138c8;
            *(arg1 + 0xf8) = puVar1;
            (**(iVar5 + 0x20))(uVar6);
        }
        fcn.00011750(arg1,CONCAT71(puVar7 >> 8,*(arg2_00 + 6)));
        if (arg4 != 0) {
            return 0;
        }
        arg2_01 = 0;
        iVar5 = fcn.000112f0(arg1,0x58,1 << (*(arg2_00 + 6) & 0x1f),0);
        if (-1 < iVar5) {
            iVar3 = *(arg2_00 + 0xc);
            arg2_01 = 0;
            uVar8 = *(*(arg2_00 + 8) + 0x1a);
            aiStack_38[0] = CONCAT22(aiStack_38[0]._2_2_,*(iVar3 + 0x20 + uVar8 * 4));
            fcn.00011398(aiStack_38,2);
            if ((*(arg3 + 0x34) != '\0') && (*(arg3 + 0x18) != 0)) {
                if (*(arg3 + 0x34) < aiStack_38[0]) {
                    *(arg3 + 0x34) = 0;
                }
                else {
                    arg2_01 = uVar8 * 4 + 0x22 + iVar3;
                    if ((aiStack_38[0] != 0) && (*(arg3 + 0x18) != arg2_01)) {
                        fcn.000102d0(*(arg3 + 0x18),arg2_01,aiStack_38[0]);
                    }
                    *(arg3 + 0x34) = aiStack_38[0];
                }
            }
            *(arg3 + 0x33) = *(iVar3 + 7 + uVar8 * 4);
            if ((*(iVar3 + 6 + uVar8 * 4) == '\0') && (*(*(arg2_00 + 8) + 8) == '\0')) {
                if (*(arg3 + 0x31) == '\0') {
                    if ((*(iVar3 + 1 + uVar8 * 4) & 0x20) != 0) {
                        aiStack_38[0] = *(iVar3 + 0xc + uVar8 * 4);
                        arg2_01 = 0;
                        fcn.00011398(aiStack_38,4);
                        *(arg3 + 0x28) = *(arg3 + 0x28) - aiStack_38[0];
                    }
                }
                else if ((*(iVar3 + 1 + uVar8 * 4) & 0x20) != 0) {
                    aiStack_38[0] = *(iVar3 + 0xc + uVar8 * 4);
                    arg2_01 = 0;
                    fcn.00011398(aiStack_38,4);
                    *(arg3 + 0x2c) = *(arg3 + 0x2c) - aiStack_38[0];
                }
            }
            else {
                iVar5 = -0x7ffffffffffffff9;
            }
        }
        (**(iVar4 + 0x28))(iVar4);
        fcn.000117e0(arg1,CONCAT71(arg2_01 >> 8,*(arg2_00 + 6)));
        fcn.00011ff0(arg1,arg2_00);
    }
    if (*(arg2_00 + 0xe) != 0) {
        (**(iVar4 + 0x20))(iVar4,*(arg2_00 + 0xe));
    }
    if (*(arg2_00 + 0xc) != 0) {
        (**(iVar4 + 0x10))(iVar4,(arg2_00[10] >> 0xc) + ((arg2_00[10] & 0xfff) != 0),*(arg2_00 + 0xc));
    }
    (**(*0x138c8 + 0x48))(arg2_00);
    return iVar5;
}


/* fcn.000132b0 @ 0x132b0 */

ulong fcn.000132b0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x138c8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012ac0 @ 0x12ac0 */

int64_t fcn.00012ac0(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t auStackX_10 [8];
    ulong uVar4;
    
    if (((*0x138d8 != 0) && (*(*0x138d8 + 0x10) != NULL)) &&
       (iVar2 = (**(*0x138d8 + 0x10))(*(arg1 + 8),0,arg1 + 0x90), iVar2 < 0)) {
        return iVar2;
    }
    iVar2 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x34,1,auStackX_10);
    if (iVar2 < 0) {
        return iVar2;
    }
    if ((auStackX_10[0] & 1) != 0) {
        iVar2 = fcn.000112c0(arg1,0x34,0);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000112f0(arg1,0x34,1,0);
        if (iVar2 < 0) {
            return -0x7ffffffffffffff9;
        }
    }
    iVar2 = fcn.000112c0(arg1,0x34,1);
    if (iVar2 < 0) {
        return iVar2;
    }
    uVar4 = 30000000;
    iVar2 = fcn.000112f0(arg1,0x34,1,1);
    if (iVar2 < 0) {
        return -0x7ffffffffffffff9;
    }
    if (((*0x138d8 != 0) && (pcVar1 = *(*0x138d8 + 0x10), pcVar1 != NULL)) &&
       (iVar2 = (*pcVar1)(*(arg1 + 8),1,arg1 + 0x90,pcVar1,uVar4), iVar2 < 0)) {
        return iVar2;
    }
    iVar2 = fcn.00012858(arg1);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = fcn.00012944(arg1);
    if (-1 < iVar2) {
        iVar3 = fcn.00012a04(arg1);
        iVar2 = 0;
        if (iVar3 < 0) {
            iVar2 = iVar3;
        }
        return iVar2;
    }
    return iVar2;
}


/* fcn.00011e50 @ 0x11e50 */

uint64_t fcn.00011e50(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint8_t auStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t iStack_48;
    
    uVar3 = fcn.000116d8(arg1,auStackX_10);
    if (-1 < uVar3) {
        puVar5 = auStackX_10[0] * 0x20 + *(arg1 + 0xa8);
        uVar4 = 0;
        uVar3 = fcn.00012708(arg1,0x40,&iStackX_18,&iStackX_20);
        if (-1 < uVar3) {
            *(iStackX_18 + 3) = *(arg1 + 0xa0);
            *(arg1 + 0xa0) = *(arg1 + 0xa0) + '\x01';
            puVar5[4] = puVar5[4] & 0x7f;
            *puVar5 = *puVar5 & 0x8ffffff | 0x11000000;
            puVar5[4] = puVar5[4] | iStackX_20 & 0xffffff80;
            *(puVar5 + 2) = 0xf;
            puVar5[5] = iStackX_20 >> 0x20;
            puVar5[6] = 0x80008;
            uVar1 = *(puVar5 + 0x1a);
            uVar6 = puVar5[6] + uVar1;
            iVar2 = *(arg1 + 0x78);
            iStackX_20 = iStackX_18;
            fcn.00011750(arg1,CONCAT71(uVar4 >> 8,auStackX_10[0]));
            uVar4 = 0;
            uVar3 = fcn.000112f0(arg1,0x58,1 << (auStackX_10[0] & 0x1f),0);
            if (-1 < uVar3) {
                uVar3 = -(*(iStackX_20 + 6 + uVar1 * 4) != '\0') & 0x8000000000000007;
            }
            (**(iVar2 + 0x28))(iVar2);
            fcn.000117e0(arg1,CONCAT71(uVar4 >> 8,auStackX_10[0]));
            if (iStack_48 != 0) {
                (**(iVar2 + 0x20))(iVar2);
            }
            if (iStackX_18 != 0) {
                (**(iVar2 + 0x10))(iVar2,(uVar6 >> 10) + ((uVar6 * 4 & 0xfff) != 0));
            }
        }
    }
    return uVar3;
}


/* fcn.00011dac @ 0x11dac */

ulong fcn.00011dac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t var_20h;
    int64_t var_18h;
    int8_t var_10h;
    int8_t var_fh;
    int16_t var_eh;
    int8_t var_8h;
    
    fcn.00010310(&var_20h,0x20);
    if (arg2 == '\0') {
        var_8h = 1;
        if (*arg4 == '\x01') {
            var_10h = 6;
        }
        else {
            if (*arg4 != '\0') {
                return 0x8000000000000002;
            }
            var_10h = 7;
        }
    }
    else {
        var_8h = 2;
        var_10h = 5;
    }
    var_eh = 0;
    var_20h = 30000000;
    var_18h = arg4;
    var_fh = arg3;
    uVar1 = fcn.00011990(arg1,&var_20h);
    return uVar1;
}


/* fcn.00013518 @ 0x13518 */

void fcn.00013518(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.00010280();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011d1c @ 0x11d1c */

void fcn.00011d1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong auStack_28 [2];
    uchar uStack_18;
    uchar uStack_17;
    uchar uStack_16;
    uchar uStack_10;
    
    fcn.00010310(auStack_28,0x20);
    if (arg2 == '\0') {
        uStack_10 = 1;
        uStack_18 = 4;
    }
    else {
        uStack_10 = 2;
        uStack_18 = 3;
    }
    auStack_28[0] = 30000000;
    uStack_17 = arg3;
    uStack_16 = arg4;
    fcn.00011990(arg1,auStack_28);
    return;
}


/* fcn.00011c58 @ 0x11c58 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00011c58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,ulong noname_5,
                    int8_t arg_40h,int64_t arg_48h,int64_t arg_50h)

{
    uint *puVar1;
    int64_t iVar2;
    unkbyte7 in_stack_00000039;
    ulong uStack_38;
    ulong uStack_30;
    int64_t var_20h;
    int64_t var_18h;
    int8_t var_10h;
    int8_t var_fh;
    int8_t var_eh;
    int8_t var_dh;
    int32_t var_ch;
    int8_t var_8h;
    
    puVar1 = CONCAT71(in_stack_00000039,arg_40h);
    if (puVar1 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        fcn.00010310(&uStack_38,0x20);
        if (arg2 == '\0') {
            var_18h._0_1_ = 1;
            var_20h._0_1_ = 2;
        }
        else {
            var_18h._0_1_ = 2;
            var_20h._0_1_ = 1;
        }
        var_20h._4_4_ = *puVar1;
        var_20h._3_1_ = noname_4;
        uStack_38 = 30000000;
        uStack_30 = noname_5;
        var_20h._1_1_ = arg3;
        var_20h._2_1_ = arg4;
        iVar2 = fcn.00011990(arg1,&uStack_38);
        if (iVar2 < 0) {
            var_20h._4_4_ = 0;
        }
        *puVar1 = var_20h._4_4_;
    }
    return iVar2;
}


/* fcn.00012cd4 @ 0x12cd4 */

void fcn.00012cd4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    
    iVar1 = *(arg1 + 0x78);
    uVar2 = *(arg2 + 0x68);
    *(*(arg2 + 8) + 8) = *(arg2 + 0x10);
    **(arg2 + 0x10) = *(arg2 + 8);
    iVar3 = arg2;
    (**(iVar1 + 0x28))(iVar1);
    fcn.000117e0(arg1,CONCAT71(iVar3 >> 8,*(arg2 + 0x18)));
    fcn.00011ff0(arg1,arg2);
    if (*(arg2 + 0x38) != 0) {
        (**(iVar1 + 0x20))(iVar1);
    }
    if (*(arg2 + 0x30) != 0) {
        (**(iVar1 + 0x10))(iVar1,(*(arg2 + 0x28) >> 0xc) + ((*(arg2 + 0x28) & 0xfff) != 0));
    }
    (**(*0x138c8 + 0x48))(arg2);
    //WARNING: Could not recover jumptable at 0x00012d85. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x138c8 + 0x68))(uVar2);
    return;
}


/* fcn.00012c24 @ 0x12c24 */

int64_t fcn.00012c24(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    
    iVar1 = fcn.000112c0(arg1,0x80,0);
    if ((((-1 < iVar1) && (iVar1 = fcn.000112c0(arg1,0x60,0), -1 < iVar1)) &&
        (iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x34,1,auStackX_10), -1 < iVar1)) &&
       (iVar1 = fcn.000112c0(arg1,0x34,0), -1 < iVar1)) {
        iVar2 = fcn.000112f0(arg1,0x34,1,0);
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = -0x7ffffffffffffff9;
        }
    }
    return iVar1;
}


/* fcn.000112c0 @ 0x112c0 */

void fcn.000112c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x78) + 0x38))(*(arg1 + 0x78),2,arg2,1,auStackX_18);
    return;
}


/* fcn.000112f0 @ 0x112f0 */

int64_t fcn.000112f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    uint64_t in_stack_00000028;
    
    iVar2 = in_stack_00000028 / 10 + 1;
    while( true ) {
        iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,arg2,1,auStackX_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        auStackX_8[0] = auStackX_8[0] & arg3;
        if (auStackX_8[0] == arg4) break;
        fcn.00013518(3);
        iVar2 = iVar2 + -1;
        if ((in_stack_00000028 != 0) && (iVar2 == 0)) {
            return -0x7fffffffffffffee;
        }
    }
    return 0;
}


/* fcn.00011398 @ 0x11398 */

void fcn.00011398(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    
    uVar5 = arg2 >> 1;
    uVar4 = 0;
    if (uVar5 != 0) {
        puVar6 = arg1;
        do {
            uVar1 = *puVar6;
            iVar2 = arg2 - uVar4;
            uVar4 = uVar4 + 1;
            uVar3 = iVar2 - 1;
            *puVar6 = *(uVar3 + arg1);
            puVar6 = puVar6 + 1;
            *(uVar3 + arg1) = uVar1;
        } while (uVar4 < uVar5);
    }
    return;
}


/* fcn.000113d8 @ 0x113d8 */

void fcn.000113d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uchar in_stack_00000028;
    ushort in_stack_00000030;
    uint in_stack_00000038;
    
    cVar1 = arg2;
    *arg1 = cVar1;
    if (cVar1 != '\0') {
        *(arg1 + 3) = in_stack_00000028;
        *(arg1 + 1) = arg3;
        *(arg1 + 2) = arg4;
        if (cVar1 - 1U < 2) {
            fcn.00011398(&stack0x00000030,2);
            *(arg1 + 6) = in_stack_00000030;
        }
        if (cVar1 == '\x04') {
            fcn.00011398(&stack0x00000038,4);
            *(arg1 + 8) = in_stack_00000038;
        }
    }
    return;
}


/* fcn.00012708 @ 0x12708 */

ulong fcn.00012708(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t arg2_00;
    int64_t iStackX_8;
    ulong *in_stack_00000028;
    
    uVar1 = *(arg1 + 0x88);
    iVar2 = *(arg1 + 0x78);
    iVar3 = (**(iVar2 + 8))(iVar2,0,4,((arg2 & 0xfffU) != 0) + (arg2 >> 0xc),arg3,0);
    if (iVar3 < 0) {
        *in_stack_00000028 = 0;
        *arg3 = 0;
        *arg4 = 0;
    }
    else {
        arg2_00 = (arg2 & 0xfffffffffffff000U) + (-((arg2 & 0xfffU) != 0) & 0x1000);
        iStackX_8 = arg2_00;
        iVar3 = (**(iVar2 + 0x18))(iVar2,2,*arg3,&iStackX_8,arg4,in_stack_00000028);
        if ((-1 < iVar3) && (iStackX_8 == arg2_00)) {
            if (((uVar1 & 0x1000000) == 0) && (0x100000000 < *arg4)) {
                (**(iVar2 + 0x20))(iVar2,*in_stack_00000028);
                (**(iVar2 + 0x10))(iVar2,arg2_00,*arg3);
                *in_stack_00000028 = 0;
                *arg3 = 0;
                return 0x8000000000000007;
            }
            if (arg2_00 != 0) {
                fcn.00010310(*arg3,arg2_00);
            }
            return 0;
        }
        (**(iVar2 + 0x10))(iVar2,arg2_00,*arg3);
        *arg3 = 0;
    }
    return 0x8000000000000009;
}


/* fcn.000116d8 @ 0x116d8 */

int64_t fcn.000116d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t auStackX_8 [2];
    
    iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x58,1,auStackX_8);
    uVar3 = 0;
    if (-1 < iVar1) {
        uVar2 = *(arg1 + 0x88) & 0x1f;
        if (uVar2 != 0xff) {
            do {
                if ((auStackX_8[0] >> (uVar3 & 0x1f) & 1) == 0) {
                    *arg2 = uVar3;
                    return 0;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar2 + 1);
        }
        iVar1 = -0x7ffffffffffffffa;
    }
    return iVar1;
}


/* fcn.00011444 @ 0x11444 */

ulong fcn.00011444(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg3_00;
    unkbyte7 Var1;
    char cVar2;
    unkbyte7 Var3;
    uchar in_stack_00000028;
    ushort in_stack_00000038;
    unkbyte6 in_stack_0000003a;
    uint *in_stack_00000040;
    
    Var3 = arg4 >> 8;
    *arg1 = *arg1 & 0xd6;
    *arg1 = *arg1 | 0x16;
    cVar2 = arg3;
    *(arg1 + 3) = arg2;
    if (((cVar2 - 1U & 0xf9) == 0) && (cVar2 != '\a')) {
        *(arg1 + 5) = 1;
    }
    else {
        *(arg1 + 5) = 0x81;
    }
    Var1 = arg2 >> 8;
    if (cVar2 == '\x04') {
        fcn.000113d8(arg1 + 0xc,CONCAT71(Var1,4),CONCAT31(*in_stack_00000040 >> 8,arg4),
                     CONCAT71(Var3,in_stack_00000028));
    }
    else {
        arg3_00 = CONCAT62(in_stack_0000003a,in_stack_00000038);
        fcn.000113d8(arg1 + 0xc,CONCAT71(Var1,cVar2),CONCAT71(arg3 >> 8,arg4),CONCAT71(Var3,in_stack_00000028));
        if (cVar2 == '\x02') {
            if ((arg3_00 != 0) && (arg1 + 0x20 != in_stack_00000040)) {
                fcn.000102d0(arg1 + 0x20,in_stack_00000040,arg3_00);
            }
            fcn.00011398(&stack0x00000038,2);
            *(arg1 + 10) = in_stack_00000038;
        }
    }
    return 0;
}


/* fcn.00011750 @ 0x11750 */

int64_t fcn.00011750(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t auStackX_8 [8];
    
    iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x60,1,auStackX_8);
    if (-1 < iVar1) {
        if (((auStackX_8[0] & 1) == 0) && (iVar1 = fcn.000112c0(arg1,0x60,1), iVar1 < 0)) {
            return iVar1;
        }
        iVar2 = fcn.000112c0(arg1,0x58,1 << (arg2 & 0x1f));
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


/* fcn.00011878 @ 0x11878 */

ulong fcn.00011878(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t auStackX_8 [2];
    
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    if (arg2 != 0) {
        uVar1 = *(arg1 + 0x10);
        if (uVar1 == 1) {
            auStackX_8[0] = CONCAT22(auStackX_8[0]._2_2_,*(arg2 + 0x12));
            fcn.00011398(auStackX_8,2);
            uVar2 = auStackX_8[0];
            if (*(arg1 + 0x14) < (auStackX_8[0] & 0xffff)) {
                return 0x8000000000000007;
            }
            if ((auStackX_8[0] != 0) && (*(arg1 + 8) != arg2 + 0x20)) {
                fcn.000102d0(*(arg1 + 8),arg2 + 0x20,auStackX_8[0]);
            }
            *(arg1 + 0x14) = uVar2 & 0xffff;
        }
        else if (uVar1 == 2) {
            auStackX_8[0] = CONCAT22(auStackX_8[0]._2_2_,*(arg2 + 0x12));
            fcn.00011398(auStackX_8,2);
            *(arg1 + 0x14) = auStackX_8[0] & 0xffff;
        }
        else {
            if (uVar1 < 3) {
                return 0x8000000000000002;
            }
            if (uVar1 < 5) {
                auStackX_8[0] = *(arg2 + 0x14);
                fcn.00011398(auStackX_8,4);
                if (*(arg1 + 8) != auStackX_8) {
                    fcn.000102d0(*(arg1 + 8),auStackX_8,4);
                }
            }
            else {
                if (8 < uVar1) {
                    return 0x8000000000000002;
                }
                **(arg1 + 8) = *(arg2 + 0x17);
            }
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.000117e0 @ 0x117e0 */

int64_t fcn.000117e0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t auStackX_8 [2];
    
    iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x58,1,auStackX_8);
    if (iVar1 < 0) {
        return iVar1;
    }
    uVar2 = 1 << (arg2 & 0x1f);
    if ((auStackX_8[0] & uVar2) != 0) {
        iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x5c,1,auStackX_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = fcn.000112c0(arg1,0x5c,~uVar2 & auStackX_8[0]);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    return 0;
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


/* fcn.00011990 @ 0x11990 */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.00011990(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ushort uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t *arg2_00;
    int64_t iVar7;
    int64_t arg2_01;
    uint32_t uVar8;
    uint32_t *puVar9;
    int64_t *arg3;
    uchar *arg4;
    uint8_t uVar10;
    uint8_t auStackX_18 [8];
    uint8_t uStackX_20;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t iStack_48;
    int32_t var_1h;
    
    uVar10 = 0;
    do {
        arg2_00 = auStackX_18;
        iVar5 = fcn.000116d8(arg1,arg2_00);
        if (iVar5 < 0) {
code_r0x00011c1b:
            if (-1 < iVar5) {
                return 0;
            }
        }
        else {
            cVar1 = *(arg2 + 0x10);
            puVar9 = auStackX_18[0] * 0x20 + *(arg1 + 0xa8);
            if (cVar1 - 1U < 8) {
                uStackX_20 = *(arg2 + 0x18);
                uVar8 = *(arg2 + 0x14);
                uVar6 = uVar8;
                if (1 < cVar1 - 1U) {
                    arg2_00 = 0x40;
code_r0x00011a3a:
                    arg4 = auStack_50;
                    arg3 = &iStack_58;
                    iVar5 = fcn.00012708(arg1,arg2_00,arg3,arg4);
                    if (iVar5 < 0) goto code_r0x00011b40;
                    arg2_00 = CONCAT71(arg2_00 >> 8,*(arg1 + 0xa0));
                    *(arg1 + 0xa0) = *(arg1 + 0xa0) + '\x01';
                    fcn.00011444(iStack_58,arg2_00,CONCAT71(arg3 >> 8,cVar1),CONCAT71(arg4 >> 8,*(arg2 + 0x11)));
                    puVar9[4] = puVar9[4] & 0x7f;
                    *(puVar9 + 2) = 0xf;
                    *puVar9 = (uStackX_20 & 3) << 0x19 | *puVar9 & 0x8ffffff | 0x11000000;
                    puVar9[5] = auStack_50._4_4_;
                    puVar9[4] = puVar9[4] | auStack_50._0_4_ & 0xffffff80;
                    if (cVar1 == '\x02') {
                        *(puVar9 + 6) = 8;
                        if ((uVar8 & 7) != 0) {
                            uVar6 = (uVar8 & 0xfffffff8) + 8;
                        }
                        uVar3 = uVar6 + 0x20 >> 2;
                    }
                    else {
                        if ((uVar8 & 7) != 0) {
                            uVar6 = (uVar8 & 0xfffffff8) + 8;
                        }
                        *(puVar9 + 6) = uVar6 + 0x20 >> 2;
                        uVar3 = 8;
                    }
                    *(puVar9 + 0x1a) = uVar3;
                    goto code_r0x00011b49;
                }
                if ((uVar8 != 0) && (*(arg2 + 8) != 0)) {
                    uVar4 = uVar8;
                    if ((uVar8 & 7) != 0) {
                        uVar4 = (uVar8 & 0xfffffff8) + 8;
                    }
                    arg2_00 = uVar4 + 0x40;
                    goto code_r0x00011a3a;
                }
                iVar5 = -0x7ffffffffffffffe;
            }
            else {
                iVar5 = -0x7ffffffffffffffe;
code_r0x00011b40:
                if (-1 < iVar5) {
code_r0x00011b49:
                    uVar8 = puVar9[6] + *(puVar9 + 0x1a);
                    iVar2 = *(arg1 + 0x78);
                    arg2_01 = iStack_58 + *(puVar9 + 0x1a) * 4;
                    fcn.00011750(arg1,CONCAT71(arg2_00 >> 8,auStackX_18[0]));
                    iVar7 = 0;
                    iVar5 = fcn.000112f0(arg1,0x58,1,0);
                    if (-1 < iVar5) {
                        if ((puVar9[2] == '\0') && (*(arg2_01 + 6) == '\0')) {
                            iVar5 = fcn.00011878(arg2,arg2_01);
                            iVar7 = arg2_01;
                        }
                        else {
                            iVar5 = -0x7ffffffffffffffe;
                            if (2 < *(arg2_01 + 6) + 5U) {
                                iVar5 = -0x7ffffffffffffff9;
                            }
                        }
                    }
                    (**(iVar2 + 0x28))(iVar2);
                    fcn.000117e0(arg1,CONCAT71(iVar7 >> 8,auStackX_18[0]));
                    if (iStack_48 != 0) {
                        (**(iVar2 + 0x20))(iVar2);
                    }
                    if (iStack_58 != 0) {
                        (**(iVar2 + 0x10))(iVar2,((uVar8 * 4 & 0xfff) != 0) + (uVar8 >> 10));
                    }
                    goto code_r0x00011c1b;
                }
            }
        }
        uVar10 = uVar10 + 1;
        if (4 < uVar10) {
            return iVar5;
        }
    } while( true );
}


/* fcn.0001326c @ 0x1326c */

int64_t fcn.0001326c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    if (arg1 == 0) {
        aiStackX_18[0] = 0;
    }
    else {
        aiStackX_18[0] = arg2;
        iVar1 = (**(*0x138c8 + 0x28))(0,4,arg1,aiStackX_18);
        if (iVar1 < 0) {
            aiStackX_18[0] = 0;
        }
    }
    return aiStackX_18[0];
}


/* fcn.00011550 @ 0x11550 */

int64_t fcn.00011550(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t *puVar3;
    uint8_t *arg2_00;
    uint8_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint in_R8;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t auStackX_18 [2];
    ulong *in_stack_00000028;
    uchar auStack_38 [16];
    
    iVar7 = CONCAT44(in_R8,arg3);
    if (*(iVar7 + 0x31) == '\0') {
        uVar9 = *(iVar7 + 0x28);
        uVar6 = 2;
    }
    else {
        uVar9 = *(iVar7 + 0x2c);
        uVar6 = 1;
    }
    uVar6 = -(uVar9 != 0) & uVar6;
    uVar8 = uVar9 + 0x3ffff >> 0x12;
    iVar5 = fcn.00012708(arg1,uVar8 * 0x10 + 0x58,in_stack_00000028,auStack_38);
    if (-1 < iVar5) {
        uVar1 = *(arg1 + 0xa0);
        puVar3 = *in_stack_00000028;
        *(arg1 + 0xa0) = uVar1 + 1;
        uVar2 = *(iVar7 + 0x30);
        arg2_00 = *(iVar7 + 0x20);
        if (uVar6 == 2) {
            uVar4 = 0x41;
        }
        else {
            uVar4 = 1;
            if (uVar6 == 1) {
                uVar4 = 0x21;
            }
        }
        *puVar3 = *puVar3 & 0xc1;
        *puVar3 = *puVar3 | 1;
        puVar3[4] = puVar3[4] & 0xf0;
        puVar3[3] = uVar1;
        puVar3[1] = uVar4;
        puVar3[2] = arg2;
        auStackX_18[0] = uVar9;
        fcn.00011398(auStackX_18,4);
        *(puVar3 + 0xc) = auStackX_18[0];
        if ((uVar2 != 0) && (puVar3 + 0x10 != arg2_00)) {
            fcn.000102d0(puVar3 + 0x10,arg2_00,uVar2);
        }
        *(arg4 + 0x10) = *(arg4 + 0x10) & 0x7f;
        *(arg4 + 8) = 0xf;
        *(arg4 + 0x18) = 0x8000e;
        *(arg4 + 0x10) = *(arg4 + 0x10) | auStack_38._0_8_ & 0xffffff80;
        *arg4 = uVar6 << 0x19 | *arg4 & 0x8ffffff | 0x11000000;
        *(arg4 + 0x1e) = 0x16;
        iVar5 = 0;
        *(arg4 + 0x14) = SUB84(auStack_38._0_8_,4);
        *(arg4 + 0x1c) = uVar8;
    }
    return iVar5;
}


/* fcn.0001207c @ 0x1207c */

ulong fcn.0001207c(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int64_t in_R8;
    uint64_t arg3;
    bool bVar9;
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    
    iVar4 = *(arg2 + 0x58);
    uVar7 = 0;
    aiStackX_18[0] = 0;
    if (*(iVar4 + 0x31) == '\0') {
        uVar2 = *(iVar4 + 8);
        if (((uVar2 & 3) == 0) && (uVar8 = *(iVar4 + 0x28), (uVar8 & 3) == 0)) {
code_r0x0001210a:
            uVar6 = 1;
            goto code_r0x0001217a;
        }
        uVar8 = (*(iVar4 + 0x28) - (*(iVar4 + 0x28) & 3)) + 4;
        bVar9 = (uVar8 & 0xfff) != 0;
        uVar2 = fcn.0001326c(bVar9,(uVar8 >> 0xc) + bVar9,in_R8);
        if (uVar2 != 0) {
            if (uVar8 != 0) {
                fcn.00010310(uVar2,uVar8);
            }
            *(arg2 + 0x40) = uVar2;
            *(arg2 + 0x48) = uVar8;
            goto code_r0x0001210a;
        }
code_r0x000120e1:
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar2 = *(iVar4 + 0x10);
        if (((uVar2 & 3) != 0) || (uVar8 = *(iVar4 + 0x2c), (uVar8 & 3) != 0)) {
            uVar8 = (*(iVar4 + 0x2c) - (*(iVar4 + 0x2c) & 3)) + 4;
            bVar9 = (uVar8 & 0xfff) != 0;
            uVar2 = fcn.0001326c(bVar9,(uVar8 >> 0xc) + bVar9,in_R8);
            if (uVar2 == 0) goto code_r0x000120e1;
            arg3 = *(*(arg2 + 0x58) + 0x2c);
            uVar6 = *(*(arg2 + 0x58) + 0x10);
            if ((arg3 != 0) && (uVar2 != uVar6)) {
                fcn.000102d0(uVar2,uVar6,arg3);
            }
            *(arg2 + 0x48) = uVar8;
            *(arg2 + 0x40) = uVar2;
        }
        uVar6 = uVar7;
code_r0x0001217a:
        if (uVar8 != 0) {
            uStackX_10 = uVar8;
            iVar4 = (**(*(arg1 + 0x78) + 0x18))(*(arg1 + 0x78),uVar6,uVar2,&uStackX_10,aiStackX_18,arg2 + 0x50);
            if ((iVar4 < 0) || (uVar8 != uStackX_10)) {
                if (*(arg2 + 0x40) != 0) {
                    if (*(arg2 + 0x48) != 0) {
                        fcn.00010310(*(arg2 + 0x40),*(arg2 + 0x48));
                    }
                    (**(*0x138c8 + 0x30))(*(arg2 + 0x40),((*(arg2 + 0x48) & 0xfff) != 0) + (*(arg2 + 0x48) >> 0xc));
                    *(arg2 + 0x40) = 0;
                }
                goto code_r0x000120e1;
            }
        }
        iVar4 = *(arg2 + 0x30);
        if (uVar8 != 0) {
            uVar2 = uVar8 + 0x3ffff >> 0x12;
            if (uVar2 != 0) {
                do {
                    iVar5 = uVar7 * 0x10;
                    if (uVar8 < 0x40000) {
                        puVar1 = iVar5 + 100 + iVar4;
                        *puVar1 = *puVar1 & 0xfffc0000;
                        puVar1 = iVar5 + 100 + iVar4;
                        *puVar1 = *puVar1 | uVar8 - 1 & 0x3ffff;
                    }
                    else {
                        puVar1 = iVar5 + 100 + iVar4;
                        *puVar1 = *puVar1 | 0x3ffff;
                    }
                    puVar1 = iVar5 + 0x58 + iVar4;
                    *puVar1 = *puVar1 & 3;
                    uVar7 = uVar7 + 1;
                    puVar1 = iVar5 + 0x58 + iVar4;
                    *puVar1 = *puVar1 | aiStackX_18[0] & 0xfffffffc;
                    uVar8 = uVar8 - 0x40000;
                    *(iVar5 + 0x5c + iVar4) = aiStackX_18[0] >> 0x20;
                    aiStackX_18[0] = aiStackX_18[0] + 0x40000;
                } while (uVar7 < uVar2);
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011ff0 @ 0x11ff0 */

void fcn.00011ff0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t iVar1;
    
    if (*(arg2 + 0x50) != 0) {
        (**(*(arg1 + 0x78) + 0x20))(*(arg1 + 0x78));
    }
    arg2_00 = *(arg2 + 0x40);
    if (arg2_00 != 0) {
        iVar1 = *(arg2 + 0x58);
        if (*(iVar1 + 0x31) == '\0') {
            if ((*(iVar1 + 0x28) != 0) && (*(iVar1 + 8) != arg2_00)) {
                fcn.000102d0(*(iVar1 + 8),arg2_00,*(iVar1 + 0x28));
            }
        }
        if (*(arg2 + 0x48) != 0) {
            fcn.00010310(*(arg2 + 0x40),*(arg2 + 0x48));
        }
        (**(*0x138c8 + 0x30))(*(arg2 + 0x40),((*(arg2 + 0x48) & 0xfff) != 0) + (*(arg2 + 0x48) >> 0xc));
        *(arg2 + 0x40) = 0;
    }
    return;
}


/* fcn.00012570 @ 0x12570 */

int64_t fcn.00012570(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    
    iVar2 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x20,1,auStackX_8);
    if (-1 < iVar2) {
        if (((auStackX_8[0] >> 10 & 1) != 0) && (iVar2 = fcn.000112c0(arg1,0x20,auStackX_8[0]), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = fcn.000112c0(arg1,0x94,*(arg2 + 4));
        if (-1 < iVar2) {
            puVar1 = arg2 + 8;
            iVar2 = fcn.000112c0(arg1,0x98,*puVar1);
            if (-1 < iVar2) {
                iVar2 = fcn.000112c0(arg1,0x9c,*(arg2 + 0xc));
                if ((((-1 < iVar2) && (iVar2 = fcn.000112f0(arg1,0x30,8,8), -1 < iVar2)) &&
                    (iVar2 = fcn.000112c0(arg1,0x90,*arg2), -1 < iVar2)) &&
                   (iVar2 = fcn.000112f0(arg1,0x20,0x400,0x400), -1 < iVar2)) {
                    if (*arg2 != 0x14) {
                        iVar2 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x98,1,puVar1);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        iVar2 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x9c,1,arg2 + 0xc);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        if (*puVar1 != '\0') {
                            return -0x7ffffffffffffff9;
                        }
                    }
                    iVar2 = 0;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00012858 @ 0x12858 */

int64_t fcn.00012858(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t auStackX_10 [24];
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    if (((*0x138d8 != 0) && (*(*0x138d8 + 0x10) != NULL)) &&
       (iVar1 = (**(*0x138d8 + 0x10))(*(arg1 + 8),2,arg1 + 0x90), iVar1 < 0)) {
        return iVar1;
    }
    uVar2 = 0;
    while( true ) {
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        uStack_18 = 0x16;
        iVar1 = fcn.00012570(arg1,&uStack_18);
        if ((iVar1 < 0) || (iVar1 = (**(*(arg1 + 0x78) + 0x30))(*(arg1 + 0x78),2,0x30,1,auStackX_10), iVar1 < 0)) {
            return -0x7ffffffffffffff9;
        }
        if ((auStackX_10[0] & 1) != 0) {
            return 0;
        }
        iVar1 = fcn.000112f0(arg1,0x20,0x100,0x100);
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (2 < uVar2) {
            return -0x7ffffffffffffff2;
        }
    }
    return -0x7ffffffffffffff9;
}


/* fcn.00012944 @ 0x12944 */

int64_t fcn.00012944(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uStackX_8;
    ulong uStackX_10;
    ulong uStackX_18;
    
    uStackX_10 = 0;
    uVar3 = (*(arg1 + 0x8a) & 7) + 1;
    uStackX_18 = 0;
    uStackX_8 = 0;
    iVar1 = fcn.00012708(arg1,uVar3 * 0x50,&uStackX_10,&uStackX_8);
    if (((-1 < iVar1) && (iVar1 = fcn.000112c0(arg1,0x70,uStackX_8 & 0xffffffff), -1 < iVar1)) &&
       (iVar1 = fcn.000112c0(arg1,0x74,uStackX_8 >> 0x20), -1 < iVar1)) {
        *(arg1 + 0xc0) = uStackX_10;
        *(arg1 + 0xd0) = uStackX_18;
        *(arg1 + 200) = uVar3;
        iVar2 = fcn.000112c0(arg1,0x80,1);
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


/* fcn.00012a04 @ 0x12a04 */

int64_t fcn.00012a04(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uStackX_8;
    ulong uStackX_10;
    ulong uStackX_18;
    
    uStackX_10 = 0;
    uVar3 = (*(arg1 + 0x88) & 0x1f) + 1;
    uStackX_18 = 0;
    uStackX_8 = 0;
    iVar1 = fcn.00012708(arg1,uVar3 << 5,&uStackX_10,&uStackX_8);
    if (((-1 < iVar1) && (iVar1 = fcn.000112c0(arg1,0x50,uStackX_8 & 0xffffffff), -1 < iVar1)) &&
       (iVar1 = fcn.000112c0(arg1,0x54,uStackX_8 >> 0x20), -1 < iVar1)) {
        *(arg1 + 0xa8) = uStackX_10;
        *(arg1 + 0xb8) = uStackX_18;
        *(arg1 + 0xb0) = uVar3;
        iVar2 = fcn.000112c0(arg1,0x60,1);
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


/* fcn.00013374 @ 0x13374 */

ulong fcn.00013374(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.000132e0(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00013479:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x0001346f:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x00013487:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00013487;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x0001346f;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00013479;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000132e0 @ 0x132e0 */

ulong fcn.000132e0(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00013340:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00013340;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


