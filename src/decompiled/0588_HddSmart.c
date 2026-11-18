// decompiled by r2ghidra: 0588_HddSmart.pe32
// functions: 37

/* entry0 @ 0x10370 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001039c(arg1,arg2);
    fcn.00010500(arg1,arg2);
    return;
}


/* fcn.0001039c @ 0x1039c */

void fcn.0001039c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x14058 = *(arg1 + 0x60);
    *0x14060 = *(arg1 + 0x58);
    *0x14050 = arg1;
    fcn.00013520();
    puVar4 = fcn.00013520();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103fb:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010300();
                }
                fcn.00010310(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010330();
                }
                else {
                    fcn.00010320();
                }
code_r0x00010464:
                (**(*0x14058 + 0x140))(0x13ac0,0,0x14070);
                (**(*0x14058 + 0x140))(0x13ab0,0,0x14090);
                (**(*0x14058 + 0x140))(0x13a90,0,0x14080);
                (**(*0x14058 + 0x140))(0x13b10,0,0x14078);
    //WARNING: Could not recover jumptable at 0x000104f9. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x14058 + 0x140))(0x13aa0,0,0x14088);
                return;
            }
            if ((*0x13b38 == *(puVar4 + 4)) && (*0x13b40 == *(puVar4 + 8))) goto code_r0x00010464;
        }
        else if (uVar1 == 4) goto code_r0x000103fb;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010500 @ 0x10500 */

void fcn.00010500(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    ulong *puStackX_20;
    ulong uStack_18;
    ulong auStack_10 [2];
    
    uStack_18 = 0;
    if (*0x140a8 == 0) {
        *0x14098 = *(arg2 + 0x60);
        *0x140a0 = *(arg2 + 0x58);
        *0x140a8 = arg2;
    }
    iVar1 = (**(*0x14098 + 0x118))(arg1,0x13b78,&uStackX_18,arg1,0,2);
    if ((((-1 < iVar1) && (iVar1 = (**(*0x14098 + 0x140))(0x13b68,0,&puStackX_20), -1 < iVar1)) &&
        (iVar1 = (**puStackX_20)(puStackX_20,uStackX_18,0,0x14158), -1 < iVar1)) &&
       (iVar1 = (**(*0x14098 + 0x40))(4,0x20,0x140e0), -1 < iVar1)) {
        **0x140e0 = 0x11754;
        (*0x140e0)[1] = 0x11b28;
        (*0x140e0)[2] = 0x10f58;
        *(*0x140e0 + 3) = 0;
        (**(*0x14098 + 0x80))(&uStack_18,0x13b20,0,*0x140e0);
        iVar1 = (**(*0x14098 + 0x50))(0x200,8,0x10d40,0,auStack_10);
        if (-1 < iVar1) {
            (**(*0x14098 + 0xa8))(0x13a70,auStack_10[0],0x14048);
        }
    }
    return;
}


/* fcn.00013520 @ 0x13520 */

int64_t fcn.00013520(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14068 == 0) {
        *0x14068 = 0;
        if (*(*0x14050 + 0x68) != 0) {
            piVar2 = *(*0x14050 + 0x70);
            do {
                if ((*0x13ae0 == *piVar2) && (*0x13ae8 == piVar2[1])) {
                    *0x14068 = (*(*0x14050 + 0x70))[uVar1 * 3 + 2];
                    return *0x14068;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14050 + 0x68));
        }
    }
    return *0x14068;
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(void)

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


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.000131e0 @ 0x131e0 */

uint64_t fcn.000131e0(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_R8;
    uint64_t uStackX_10;
    
    uVar3 = CONCAT44(in_R8,arg2);
    uStackX_10 = arg1;
    if (uVar3 < 0x1001) {
        iVar1 = (**(*0x14058 + 0x28))(0,4,1,&uStackX_10);
        if (-1 < iVar1) {
            return uStackX_10;
        }
    }
    else {
        iVar2 = ((arg2 & 0xfff) != 0) + 1 + (uVar3 >> 0xc);
        iVar1 = (**(*0x14058 + 0x28))(0,4,iVar2);
        if (-1 < iVar1) {
            uVar3 = uStackX_10 + (uVar3 - 1) & ~(uVar3 - 1);
            iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
            if (iVar1 != 0) {
                (**(*0x14058 + 0x30))(uStackX_10,iVar1);
            }
            uStackX_10 = uVar3 + 0x1000;
            iVar1 = (iVar2 - iVar1) + -1;
            if (iVar1 != 0) {
                (**(*0x14058 + 0x30))(uStackX_10,iVar1);
            }
            return uVar3;
        }
    }
    return 0;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 14240 named .text
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


/* fcn.00010da8 @ 0x10da8 */

int64_t fcn.00010da8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong noname_1;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t aiStack_b8 [2];
    uint32_t uStack_a8;
    uint8_t uStack_a4;
    uint uStack_a0;
    uint32_t uStack_94;
    ulong uStack_78;
    int64_t iStack_70;
    int iStack_68;
    uchar uStack_54;
    uint32_t *puStack_50;
    uchar *puStack_48;
    uchar auStack_40 [24];
    
    uVar3 = 0;
    aiStack_b8[0] = 0;
    aiStack_b8[1] = 0x1000;
    (**(*0x14098 + 0x168))(&uStack_78,0x38,0);
    (**(*0x14098 + 0x168))(&uStack_a8,0x2c,0);
    (**(*0x14098 + 0x168))(auStack_40,0x10,0);
    uVar1 = *0x13b30;
    uVar4 = uVar3;
    if (*0x14040 != '\0') {
        uVar4 = *0x13b30;
        noname_1 = 0x1000;
        iVar2 = (**(*0x14098 + 0x40))(4,0x1000,aiStack_b8);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.00010684(arg1,noname_1,uVar1,aiStack_b8[0]);
        if (iVar2 < 0) {
            (**(*0x14098 + 0x48))();
            return iVar2;
        }
        do {
            *(uVar3 * 2 + 0x14100) = *(uVar3 + 0x18 + aiStack_b8[0]);
            iVar2 = *0x14098;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x28);
        *(uVar3 * 2 + 0x14100) = 0;
        (**(iVar2 + 0x48))();
    }
    uStack_a0 = 0xffffffff;
    uStack_a8 = uStack_a8 & 0xfffffc02 | 2;
    uStack_94 = (arg4 + -1) * 0x10000 | arg2 & 0xff;
    if (*(*arg1 + 8) < 0x10201) {
        uStack_a4 = uStack_a4 | 4;
    }
    else {
        uStack_a4 = uStack_a4 | 0x3c;
    }
    puStack_50 = &uStack_a8;
    uStack_78 = 10000000;
    puStack_48 = auStack_40;
    uStack_54 = 0;
    iStack_68 = arg4 << 2;
    iStack_70 = arg3;
    iVar2 = (**(arg1 + 8))(arg1,uVar4,&uStack_78,0);
    return iVar2;
}


/* fcn.00013614 @ 0x13614 */

int64_t fcn.00013614(void)

{
    int64_t iVar1;
    
    if (*0x140b0 == '\0') {
        iVar1 = fcn.0001358c();
        if (-1 < iVar1) {
            iVar1 = (***0x140c8)(0x80000002,0x2081002,0,0,0);
        }
    }
    else if (*0x140b8 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x140b8)(*0x140b8,0x80000002,0x2081002,0,0,0);
    }
    return iVar1;
}


/* fcn.000113cc @ 0x113cc */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.000113cc(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    int64_t iVar7;
    int16_t *piVar8;
    char16_t *pcVar9;
    int16_t *piVar10;
    int64_t in_R9;
    int16_t *piStackX_18;
    int16_t *piStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    piVar6 = NULL;
    piStackX_20 = NULL;
    piStackX_18 = NULL;
    iStack_38 = 0;
    piVar3 = piVar6;
    if (arg1 == 1) {
        piVar3 = *(*(arg2 + 0x228) + 8);
    }
    if (arg1 == 2) {
        piVar3 = *(*(*(arg2 + 0x28) + 0x170) + 8);
    }
    piVar10 = 0x14100;
    if (arg1 != 4) {
        piVar10 = piVar3;
    }
    if (arg1 == 5) {
        piVar10 = arg2;
    }
    iVar7 = 0x140d8;
    iVar2 = (**(*0x14098 + 0x140))(0x13ad0,0);
    if (iVar2 < 0) {
        return;
    }
    if (*(*0x140a8 + 0x40) == 0) {
        return;
    }
    piVar3 = piVar6;
    if ((arg1 - 1 & 0xfffffffb) == 0) {
        piVar3 = fcn.00013688(*0x14158,4,iVar7,in_R9);
        if (piVar3 == NULL) {
            return;
        }
        piVar8 = piVar6;
        for (piVar4 = piVar3; *piVar4 != 0; piVar4 = piVar4 + 1) {
            piVar8 = piVar8 + 1;
        }
        iVar2 = piVar8 * 2 + 8;
        iVar7 = (**(*0x14098 + 0x40))(4,iVar2,&piStackX_18);
        if (iVar7 < 0) {
            return;
        }
        fcn.000123f0(piStackX_18,iVar2,0x13ba0,piVar3);
        *piVar3 = 0;
    }
    if ((arg1 - 2 & 0xfffffffd) == 0) {
        piVar3 = piVar6;
        if (piVar10 != NULL) {
            iVar1 = *piVar10;
            piVar3 = piVar10;
            piVar4 = piVar6;
            while (iVar1 != 0) {
                piVar3 = piVar3 + 1;
                piVar4 = piVar4 + 1;
                iVar1 = *piVar3;
            }
            piVar3 = piVar4 * 2 + 8;
        }
        iVar2 = (**(*0x14098 + 0x40))(4,piVar3,&piStackX_20);
        if (iVar2 < 0) {
            return;
        }
        pcVar9 = L"\n\r%s";
        fcn.000123f0(piStackX_20,piVar3,0x13bb0,piVar10);
    }
    else {
        piVar4 = piVar6;
        if (piVar10 != NULL) {
            piVar8 = piVar6;
            for (piVar4 = piStackX_18; *piVar4 != 0; piVar4 = piVar4 + 1) {
                piVar8 = piVar8 + 1;
            }
            iVar1 = *piVar3;
            piVar4 = piVar3;
            piVar5 = piVar6;
            while (iVar1 != 0) {
                piVar4 = piVar4 + 1;
                piVar5 = piVar5 + 1;
                iVar1 = *piVar4;
            }
            iVar1 = *piVar10;
            piVar4 = piVar6;
            while (iVar1 != 0) {
                piVar10 = piVar10 + 1;
                piVar4 = piVar4 + 1;
                iVar1 = *piVar10;
            }
            piVar4 = (piVar4 + piVar5 + piVar8) * 2 + 0xe;
        }
        iVar2 = (**(*0x14098 + 0x40))(4,piVar4,&piStackX_20);
        if (iVar2 < 0) {
            return;
        }
        pcVar9 = L"\r %s %s: %s";
        piVar10 = piStackX_18;
        fcn.000123f0(piStackX_20,piVar4,0x13bc0,piStackX_18);
        if (piStackX_18 != NULL) {
            (**(*0x14098 + 0x48))();
            piStackX_18 = NULL;
        }
        if (piVar3 != NULL) {
            (**(*0x14098 + 0x48))(piVar3);
        }
    }
    (**(*0x140d8 + 0x28))();
    piStackX_18 = fcn.00013688(*0x14158,2,pcVar9,piVar10);
    if (piStackX_18 != NULL) {
        piVar10 = piVar6;
        for (piVar3 = piStackX_20; *piVar3 != 0; piVar3 = piVar3 + 1) {
            piVar10 = piVar10 + 1;
        }
        for (piVar3 = piStackX_18; *piVar3 != 0; piVar3 = piVar3 + 1) {
            piVar6 = piVar6 + 1;
        }
        iVar2 = (piVar6 + piVar10) * 2 + 8;
        iVar7 = (**(*0x14098 + 0x40))(4,iVar2,&iStack_38);
        if (-1 < iVar7) {
            pcVar9 = L"%s \n %s";
            piVar3 = piStackX_20;
            piVar6 = piStackX_18;
            fcn.000123f0(iStack_38,iVar2,0x13bd8,piStackX_20);
            iVar2 = fcn.00013688(*0x14158,3,pcVar9,piVar3);
            (**(*0x140d8 + 0x58))(iVar2,iStack_38,0x1e,auStack_30,piVar6);
            if (piStackX_18 != NULL) {
                (**(*0x14098 + 0x48))();
            }
            if (iVar2 != 0) {
                (**(*0x14098 + 0x48))(iVar2);
            }
            if (iStack_38 != 0) {
                (**(*0x14098 + 0x48))();
            }
        }
    }
    return;
}


/* fcn.00010830 @ 0x10830 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00010830(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    char cVar5;
    int64_t in_stack_00000028;
    int16_t var_40h;
    uchar auStack_78 [2];
    ushort uStack_76;
    ushort uStack_73;
    char cStack_71;
    int64_t iStack_60;
    int64_t var_50h;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int32_t var_10h;
    int16_t var_8h;
    
    arg1_00 = fcn.000131e0(arg1,arg2,*(*arg1 + 4));
    if (arg1_00 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        fcn.000102a0(&iStack_60,0x38);
        fcn.000102a0(arg1_00,0x14);
        fcn.000102a0(auStack_78,0x14);
        var_50h = auStack_78;
        uStack_76 = 0xdab0;
        uStack_73 = 0xc24f;
        var_28h._0_2_ = 2;
        cVar5 = (arg4 | 0xfe) << 4;
        uStack_50 = 10000000;
        cStack_71 = cVar5;
        iStack_60 = arg1_00;
        iVar1 = (**(arg1 + 8))(arg1,arg3 & 0xffff,arg4 & 0xffff,&iStack_60,0);
        if (iVar1 < 0) {
            (**(*0x14058 + 0x30))(arg1_00,1);
        }
        else {
            uVar3 = *(arg1_00 + 6) * 0x100 + *(arg1_00 + 5);
            if (uVar3 == 0xc24f) {
                *arg2 = 0;
            }
            else {
                iVar1 = *arg1;
                *arg2 = 1;
                iVar2 = fcn.000131e0(0x100,uVar3,*(iVar1 + 4));
                uVar4 = 0;
                if (iVar2 == 0) {
                    iVar1 = -0x7ffffffffffffff7;
                }
                else {
                    fcn.000102a0(&iStack_60,0x38);
                    fcn.000102a0(arg1_00,0x14);
                    fcn.000102a0(auStack_78,0x14);
                    var_50h = auStack_78;
                    uStack_76 = CONCAT11(uStack_76._1_1_,0xec);
                    var_28h._0_2_ = 0x8004;
                    var_30h._0_4_ = 0x200;
                    uStack_50 = 10000000;
                    cStack_71 = cVar5;
                    iStack_60 = arg1_00;
                    iStack_48 = iVar2;
                    iVar1 = (**(arg1 + 8))(arg1,arg3 & 0xffff,arg4 & 0xffff,&iStack_60,0);
                    if (-1 < iVar1) {
                        do {
                            *(in_stack_00000028 + uVar4 * 2) = *(uVar4 + 0x37 + iVar2);
                            *(in_stack_00000028 + 2 + uVar4 * 2) = *(uVar4 + 0x36 + iVar2);
                            uVar4 = uVar4 + 2;
                        } while (uVar4 < 0x28);
                        *(in_stack_00000028 + uVar4 * 2) = 0;
                    }
                    (**(*0x14058 + 0x30))(iVar2,1);
                }
            }
            (**(*0x14058 + 0x30))(arg1_00,1);
        }
    }
    return iVar1;
}


/* fcn.00010a60 @ 0x10a60 */

void fcn.00010a60(void)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t auStackX_18 [2];
    int64_t var_150h;
    int64_t var_158h;
    uint32_t var_160h;
    int64_t var_168h;
    uint8_t auStack_218 [512];
    
    auStackX_18[1] = 0;
    iVar1 = (**(*0x14098 + 0x138))(2,0x13a80,0,auStackX_18,&iStackX_10);
    if (-1 < iVar1) {
        uVar3 = 0;
        if (auStackX_18[0] != 0) {
            do {
                iVar1 = (**(*0x14098 + 0x98))(*(iStackX_10 + uVar3 * 8),0x13b00,auStackX_18 + 1);
                if ((iVar1 < 0) &&
                   (iVar1 = (**(*0x14098 + 0x98))(*(iStackX_10 + uVar3 * 8),0x13a80,&iStackX_8), -1 < iVar1)) {
                    *0x13b30 = 0xffffffff;
                    while (iVar1 = (**(iStackX_8 + 0x10))(iStackX_8,0x13b30), -1 < iVar1) {
                        uVar2 = 0x200;
                        *0x14040 = 1;
                        fcn.000102a0(auStack_218,0x200);
                        iVar1 = fcn.00010da8(iStackX_8,CONCAT71(uVar2 >> 8,2),auStack_218,0x80);
                        if (((-1 < iVar1) && (*0x14040 = 0, (auStack_218[0] & 0x1f) != 0)) &&
                           (fcn.00013614(), *(*0x140a8 + 0x30) != 0)) {
                            fcn.000113cc(4,iStackX_8);
                        }
                    }
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < auStackX_18[0]);
        }
        (**(*0x14098 + 0x48))(iStackX_10);
    }
    return;
}


/* fcn.00010bd8 @ 0x10bd8 */

void fcn.00010bd8(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    char acStackX_8 [8];
    uint16_t auStackX_10 [4];
    uint16_t auStackX_18 [4];
    int16_t var_29h_2;
    int64_t iStackX_20;
    uint32_t var_67h;
    int16_t var_6fh;
    int16_t var_77h;
    int64_t var_7fh;
    int64_t iStack_a8;
    uint64_t uStack_a0;
    int64_t in_stack_ffffffffffffff68;
    uchar auStack_88 [55];
    int64_t var_49h;
    uint32_t var_41h;
    int64_t var_39h;
    uint16_t uStack_36;
    int64_t var_29h;
    
    iVar1 = (**(*0x14098 + 0x138))(2,0x13a50,0,&uStack_a0,&iStack_a8);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStack_a0 != 0) {
            do {
                iVar1 = (**(*0x14098 + 0x98))(*(iStack_a8 + uVar2 * 8),0x13a80,&stack0xffffffffffffff68);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(*0x14098 + 0x98))(*(iStack_a8 + uVar2 * 8),0x13a50,&stack0x00000020), -1 < iVar1)) {
                    auStackX_10[0] = 0xffff;
                    while (iVar1 = (**(iStackX_20 + 0x10))(iStackX_20,auStackX_10), -1 < iVar1) {
                        auStackX_18[0] = 0xffff;
                        while (iVar1 = (**(iStackX_20 + 0x18))(iStackX_20,auStackX_10[0],auStackX_18), -1 < iVar1) {
                            acStackX_8[0] = '\0';
                            iVar1 = fcn.00010830(iStackX_20,acStackX_8,auStackX_10[0],auStackX_18[0],
                                                 in_stack_ffffffffffffff68);
                            if (((-1 < iVar1) && (uStack_36 = auStackX_10[0], acStackX_8[0] != '\0')) &&
                               (fcn.00013614(), *(*0x140a8 + 0x30) != 0)) {
                                fcn.000113cc(5,auStack_88);
                            }
                        }
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStack_a0);
        }
        (**(*0x14098 + 0x48))(iStack_a8);
    }
    return;
}


/* fcn.00010684 @ 0x10684 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_1fh
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h

int64_t fcn.00010684(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uchar auStackX_8 [3];
    int8_t var_13h;
    int64_t var_17h;
    int64_t var_1fh;
    uint64_t *in_stack_00000028;
    int64_t var_5fh;
    uchar auStack_a8 [16];
    uint32_t uStack_98;
    uint8_t uStack_94;
    uint uStack_90;
    uint uStack_84;
    ulong uStack_68;
    uchar auStack_60 [7];
    int64_t var_51h;
    int64_t var_41h;
    int32_t var_39h;
    int32_t var_2dh;
    uchar *puStack_38;
    int64_t var_11h;
    int64_t var_9h;
    int32_t var_1h;
    
    _auStackX_8 = 0;
    (**(*0x14098 + 0x168))(&uStack_68,0x38);
    (**(*0x14098 + 0x168))(&uStack_98,0x2c);
    (**(*0x14098 + 0x168))(auStack_a8,0x10);
    iVar2 = (**(*0x14098 + 0x40))(4,(1LL << (*(*arg1 + 4) & 0x3f)) + 0x1000,auStackX_8);
    if (-1 < iVar2) {
        (**(*0x14098 + 0x168))(_auStackX_8,(1LL << (*(*arg1 + 4) & 0x3f)) + 0x1000,0);
        uVar1 = _auStackX_8;
        uStack_90 = 0;
        uStack_94 = uStack_94 | 4;
        iVar2 = 1LL << (*(*arg1 + 4) & 0x3f);
        uStack_84 = 1;
        uStack_68 = 10000000;
        var_41h._5_1_ = 0;
        var_51h._1_4_ = 0x1000;
        _auStackX_8 = (~(iVar2 - 1U) & _auStackX_8) + iVar2;
        uStack_98 = uStack_98 & 0xfffffc06 | 6;
        unique0x00008f00 = &uStack_98;
        puStack_38 = auStack_a8;
        _auStack_60 = _auStackX_8;
        iVar2 = (**(arg1 + 8))(arg1,arg2 & 0xffffffff,&uStack_68,0);
        if (-1 < iVar2) {
            if (arg3 != 0) {
                if (*in_stack_00000028 < 0x1000) {
                    iVar2 = -0x7ffffffffffffffc;
                }
                else {
                    (**(*0x14098 + 0x160))(arg3,_auStack_60,0x1000);
                    *in_stack_00000028 = var_51h._1_4_;
                }
            }
            (**(*0x14098 + 0x48))(uVar1);
        }
    }
    return iVar2;
}


/* fcn.00013930 @ 0x13930 */

int64_t fcn.00013930(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.000122e0 @ 0x122e0 */

void fcn.000122e0(int64_t arg1,int64_t arg2)

{
    ulong uStack_48;
    ulong uStack_40;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uchar uStack_18;
    
    uStack_18 = *(arg2 + 0x30);
    uStack_48 = *arg2;
    uStack_40 = *(arg2 + 8);
    uStack_38 = *(arg2 + 0x10);
    uStack_34 = *(arg2 + 0x14);
    uStack_30 = *(arg2 + 0x18);
    uStack_2c = *(arg2 + 0x1c);
    uStack_28 = *(arg2 + 0x20);
    uStack_24 = *(arg2 + 0x24);
    uStack_20 = *(arg2 + 0x28);
    uStack_1c = *(arg2 + 0x2c);
    (**(*(arg1 + 0x350) + 0xb0))(uStack_28,&uStack_48);
    return;
}


/* fcn.0001128c @ 0x1128c */

int64_t fcn.0001128c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ulong uStack_288;
    uint uStack_280;
    uint uStack_27c;
    ushort uStack_278;
    uchar uStack_276;
    uchar uStack_275;
    uchar uStack_274;
    ushort uStack_273;
    uchar uStack_271;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    uchar uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    uchar uStack_218;
    uint8_t auStack_208 [512];
    
    iVar3 = arg2;
    if (iVar3 < 2) {
        (**(*0x14098 + 0x168))(&uStack_288,0x31);
        uStack_27c = CONCAT31(uStack_27c._1_3_,0xda);
        uStack_276 = 0x4f;
        uStack_274 = 0xc2;
        uStack_271 = 0xb0;
        uStack_218 = uStack_258;
        uStack_240 = CONCAT44(uStack_27c,uStack_280);
        uStack_238 = CONCAT17(0xb0,CONCAT25(uStack_273,
                                             CONCAT14(0xc2,CONCAT13(uStack_275,CONCAT12(0x4f,uStack_278)))));
        uStack_248 = uStack_288;
        uStack_230 = uStack_270;
        uStack_228 = uStack_268;
        uStack_220 = uStack_260;
        if (iVar3 == 1) {
            iVar2 = fcn.000122e0(arg1,&uStack_248);
        }
        else {
            iVar2 = -0x7ffffffffffffffd;
        }
        if (-1 < iVar2) {
            if (((iVar3 == 1) && (iVar1 = *(arg1 + 0x348), *(iVar1 + 0x40) == '4')) &&
               (*(iVar1 + 0x45) + *(iVar1 + 0x46) * 0x100 != -0x3db1)) {
                *arg3 = arg2;
            }
            else {
                *arg3 = 0;
            }
        }
    }
    else {
        uVar4 = 0x200;
        (**(*0x14098 + 0x168))(auStack_208,0x200);
        iVar2 = fcn.00010da8(arg1,CONCAT71(uVar4 >> 8,2),auStack_208,0x80);
        if (iVar2 < 0) {
            return -0x7ffffffffffffff9;
        }
        *arg3 = (auStack_208[0] & 0x1f) != 0;
    }
    return iVar2;
}


/* fcn.00013688 @ 0x13688 */

int64_t fcn.00013688(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iVar6 = arg1;
    iStackX_18 = arg3;
    arg1_00 = fcn.00013854(arg1);
    if (arg1_00 != NULL) {
        fcn.00013330(iVar6,aiStack_38,arg3);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x1400a;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.000133ec(arg1_00,0,0x1400a,iVar3);
                if (iVar3 == 0) goto code_r0x00013804;
                iStackX_18 = 0;
                iVar4 = (**(*0x14070 + 8))(*0x14070,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.00013304(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x14070 + 8))(*0x14070,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x14058 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x00013804;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x00013804;
                if (iVar6 == 0) break;
                (**(*0x14058 + 0x48))(iVar6);
                iVar6 = 0;
            }
            for (; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
            }
            cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            pcVar7 = NULL;
            if (cVar2 == ';') {
                pcVar7 = pcVar1;
            }
        } while (pcVar7 != NULL);
code_r0x00013804:
        (**(*0x14058 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x14058 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x14058 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.000123f0 @ 0x123f0 */

void fcn.000123f0(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012454(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012454 @ 0x12454 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00012454(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
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
    uint64_t uStack_98;
    int64_t iStack_90;
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
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000124b3;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x000124b3:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.000123c4(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00012390(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x13c74;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x0001286e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x13c74;
            }
            else {
                pcVar8 = 0x13c78;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00012605:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x000127a8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000127bf;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000127a8;
                        }
                        goto code_r0x000127bf;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x000127a8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00012605;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x00012605;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000127bf;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000127a8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000127bf:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.000131bc(&var_68h_2,0x26,0,0x13c08);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x0001286e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00012a57;
                        if (uStack_a8 == 0x58) goto code_r0x00012b4c;
                        if (uStack_a8 == 0x61) goto code_r0x00012a60;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x000125e6;
                        }
                        if (uStack_a8 != 100) goto code_r0x000125e2;
                        goto code_r0x00012b63;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x13c74;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x00012d90;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x13d0b;
                            goto code_r0x00012b13;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00012b13:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00012d90;
                    }
                    fcn.000131bc(&var_68h_2,0x26,0,0x13c6c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00012a57:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00012a60:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00012d90;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000125e2;
                            goto code_r0x00012b50;
                        }
                        goto code_r0x00012b55;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00012d90;
                    }
                    fcn.000131bc(&var_68h_2,0x26,0,0x13c50);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00012d90;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00012b4c:
            uVar21 = uVar21 | 0x20;
code_r0x00012b50:
            uVar21 = uVar21 | 0x80;
code_r0x00012b55:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00012b63:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00012ba5;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x00012ba5:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x00012c2d:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00012c2d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFP"[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x000125e2:
            pcVar8 = &uStack_a8;
code_r0x000125e6:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00012d90:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012420(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012420(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012420(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012420(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.00011f1c @ 0x11f1c */

ulong fcn.00011f1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    ulong uVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    ulong *puVar11;
    uint32_t uVar12;
    ulong *puVar13;
    char cVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong uStack_2a8;
    uint uStack_2a0;
    char cStack_29c;
    uchar uStack_29b;
    uint16_t uStack_29a;
    uint uStack_298;
    uint uStack_294;
    uint uStack_290;
    uint uStack_28c;
    uint uStack_288;
    uint uStack_284;
    uint uStack_280;
    uint uStack_27c;
    uchar uStack_278;
    ulong uStack_268;
    ulong uStack_260;
    uint uStack_258;
    uint uStack_254;
    uint uStack_250;
    uint uStack_24c;
    uint uStack_248;
    uint uStack_244;
    uint uStack_240;
    uint uStack_23c;
    uchar uStack_238;
    ulong uStack_228;
    uint16_t uStack_17e;
    
    iVar2 = *(arg1 + 0x48);
    iVar1 = *(arg1 + 0x54);
    cVar14 = arg2;
    uVar16 = 0x8000000000000003;
    fcn.00013930(&uStack_228 + 2,0,0x1fe);
    if (iVar1 != 2) {
        if (iVar1 == 1) {
            puVar11 = iVar2 + 0x23;
            iVar15 = 4;
            puVar13 = &uStack_228;
            do {
                uVar7 = puVar11[1];
                uVar8 = puVar11[2];
                uVar9 = puVar11[3];
                *puVar13 = *puVar11;
                puVar13[1] = uVar7;
                uVar7 = puVar11[4];
                uVar10 = puVar11[5];
                puVar13[2] = uVar8;
                puVar13[3] = uVar9;
                uVar8 = puVar11[6];
                uVar9 = puVar11[7];
                puVar13[4] = uVar7;
                puVar13[5] = uVar10;
                uVar7 = puVar11[8];
                uVar10 = puVar11[9];
                puVar13[6] = uVar8;
                puVar13[7] = uVar9;
                uVar8 = puVar11[10];
                uVar9 = puVar11[0xb];
                puVar13[8] = uVar7;
                puVar13[9] = uVar10;
                uVar3 = *(puVar11 + 0xc);
                uVar4 = *(puVar11 + 100);
                uVar5 = *(puVar11 + 0xd);
                uVar6 = *(puVar11 + 0x6c);
                puVar13[10] = uVar8;
                puVar13[0xb] = uVar9;
                uVar7 = puVar11[0xe];
                uVar8 = puVar11[0xf];
                puVar11 = puVar11 + 0x10;
                *(puVar13 + 0xc) = uVar3;
                *(puVar13 + 100) = uVar4;
                *(puVar13 + 0xd) = uVar5;
                *(puVar13 + 0x6c) = uVar6;
                puVar13[0xe] = uVar7;
                puVar13[0xf] = uVar8;
                iVar15 = iVar15 + -1;
                puVar13 = puVar13 + 0x10;
            } while (iVar15 != 0);
        }
        if ((uStack_17e & 1) != (cVar14 == -0x28)) {
            (**(*0x14098 + 0x168))(&uStack_2a8,0x31);
            uVar12 = arg2 & 0xff;
            uStack_298._0_3_ = CONCAT12(0x4f,uStack_298);
            uStack_294 = CONCAT31(uStack_294._1_3_,0xc2);
            uStack_294 = CONCAT13(0xb0,uStack_294);
            if (uVar12 == 0xd2) {
                uStack_29a = arg3 & 0xff;
            }
            else if (uVar12 == 0xd4) {
                uStack_298 = CONCAT31(uStack_298._1_3_,arg4);
            }
            if (iVar1 == 1) {
                uStack_260 = CONCAT26(uStack_29a,CONCAT15(uStack_29b,CONCAT14(cVar14,uStack_2a0)));
                uStack_238 = uStack_278;
                uStack_268 = uStack_2a8;
                uStack_258 = uStack_298;
                uStack_254 = uStack_294;
                uStack_250 = uStack_290;
                uStack_24c = uStack_28c;
                uStack_248 = uStack_288;
                uStack_244 = uStack_284;
                uStack_240 = uStack_280;
                uStack_23c = uStack_27c;
                cStack_29c = cVar14;
                uVar16 = (**(*(iVar2 + 0x350) + 0xb0))(iVar2,&uStack_268);
            }
        }
    }
    return uVar16;
}


/* fcn.00012390 @ 0x12390 */

uint64_t fcn.00012390(uint32_t arg1,int64_t arg2)

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


/* fcn.000123c4 @ 0x123c4 */

uint64_t fcn.000123c4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.000131bc @ 0x131bc */

void fcn.000131bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012454(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012420 @ 0x12420 */

uchar * fcn.00012420(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000132d4 @ 0x132d4 */

ulong fcn.000132d4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14058 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001235c @ 0x1235c */

int64_t fcn.0001235c(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.00013304 @ 0x13304 */

void fcn.00013304(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000132d4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001358c @ 0x1358c */

ulong fcn.0001358c(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x140b0 == '\0') {
        if (*0x140c8 == 0) {
            if (*0x140c0 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x14098 + 0x140))(0x13b48,0,0x140c8);
        }
    }
    else if (*0x140b8 == 0) {
        if ((*0x140c0 == '\0') && (*0x140d0 != 0)) {
    //WARNING: Could not recover jumptable at 0x000135cb. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x140d0 + 0xd0))(0x13b58,0,0x140b8);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00013854 @ 0x13854 */

int64_t fcn.00013854(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x14070 + 0x18))(*0x14070,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00013304(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x14070 + 0x18))(*0x14070,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x14058 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00013330 @ 0x13330 */

int64_t fcn.00013330(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x14060 + 0x48))(0x13ff0,0x13a40,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000132d4();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x14060 + 0x48))(0x13ff0,0x13a40,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x14058 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.000133ec @ 0x133ec */

char * fcn.000133ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x0001343c:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x0001343c;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x000134d7;
                }
            }
            else {
code_r0x000134d7:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    pcVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar5 != '\0' && (*pcVar5 == ';')); pcVar5 = pcVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar5[arg3_00];
                            }
                            if (uVar4 <= arg3_00) goto code_r0x000134a4;
                        }
                        else {
code_r0x000134a4:
                            iVar3 = fcn.0001235c(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.00013304(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = fcn.000102c0(arg1_00,pcVar5,arg3_00);
                                        return pcVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        pcVar5 = pcVar5 + arg3_00;
                        cVar2 = *pcVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x000134dc;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x000134d7;
                }
            }
code_r0x000134dc:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


