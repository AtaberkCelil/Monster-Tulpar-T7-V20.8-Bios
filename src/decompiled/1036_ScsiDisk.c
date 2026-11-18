// decompiled by r2ghidra: 1036_ScsiDisk.pe32
// functions: 50

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x16ef8 = *(arg2 + 0x60);
    *0x16de0 = arg1;
    *0x16de8 = arg1;
    *0x16ef0 = arg2;
    (**(*0x16ef8 + 0x148))(0x16de8,0x16d70,0x16dc0,0x16d90,0x16e38,0x16d10,0x16e20,0);
    return;
}


/* fcn.00015860 @ 0x15860 */

void fcn.00015860(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015830(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00015830 @ 0x15830 */

ulong fcn.00015830(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16ef8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.000123c0 @ 0x123c0 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.000123c0(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    char cVar5;
    uint64_t noname_0;
    int64_t in_R8;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uchar auStackX_8 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t in_stack_ffffffffffffffa8;
    uint32_t uVar10;
    uint32_t arg_60h;
    int32_t var_10h;
    
    arg_60h = 0x60;
    uVar8 = 0;
    uVar10 = in_stack_ffffffffffffffa8 & 0xffffff00;
    iVar3 = *(arg1 + 0xc0);
    auStackX_8[0] = 0;
    uVar2 = fcn.000158cc(iVar3,300000000,in_R8,auStackX_8,auStackX_18,auStackX_20,arg1 + 0xe0,
                         &stack0xffffffffffffffb8,uVar10,0);
    if ((uVar2 & 0xfffffffffffffffb) == 0) {
        cVar5 = -(~*(arg1 + 0xe1) >> 7);
        *(arg1 + 0xc9) = cVar5;
        iVar3 = CONCAT71(iVar3 >> 8,cVar5 == '\0');
        *(arg1 + 0x7c) = cVar5 == '\0';
        if (*(arg1 + 200) != '\0') goto code_r0x00012716;
        uVar2 = *(*(arg1 + 0xc0) + 0x28);
        iVar3 = fcn.00015734(iVar3,1,uVar2);
        if (iVar3 != 0) {
            fcn.000102c0(iVar3,0x104);
            uVar10 = CONCAT31(uVar10 >> 8,1);
            arg_60h = 0x104;
            auStackX_8[0] = 0;
            uVar2 = fcn.000158cc(*(arg1 + 0xc0),300000000,uVar2,auStackX_8,auStackX_18,auStackX_20,iVar3,
                                 &stack0xffffffffffffffb8,uVar10,0);
            if (-1 < uVar2) {
                noname_0 = CONCAT11(*(iVar3 + 2),*(iVar3 + 3));
                uVar6 = uVar8;
                if (noname_0 < 0x101) {
                    uVar6 = noname_0;
                }
                if ((uVar6 != 0) && (*(iVar3 + 4) != '\0')) {
                    uVar6 = uVar8;
                }
                uVar7 = 0;
                if (uVar6 != 0) {
                    while ((uVar7 == '\0' || (noname_0 = uVar7 + -1, *(noname_0 + 4 + iVar3) < *(uVar7 + 4 + iVar3))))
                    {
                        if ((*(uVar7 + 4 + iVar3) == -0x50) || (uVar7 = uVar7 + 1, uVar6 <= uVar7))
                        goto code_r0x00012558;
                    }
                    uVar7 = 0;
                    uVar6 = uVar8;
                }
code_r0x00012558:
                if (uVar7 < uVar6) {
                    uVar2 = *(*(arg1 + 0xc0) + 0x28);
                    iVar4 = fcn.00015734(noname_0,1,uVar2);
                    if (iVar4 == 0) {
                        (**(*0x16ef8 + 0x30))(iVar3,1);
                        goto code_r0x00012590;
                    }
                    fcn.000102c0(iVar4,0x3c);
                    arg_60h = 0x3c;
                    auStackX_8[0] = 0;
                    uVar2 = fcn.000158cc(*(arg1 + 0xc0),300000000,uVar2,auStackX_8,auStackX_18,auStackX_20,iVar4,
                                         &stack0xffffffffffffffb8,CONCAT31(uVar10 >> 8,1),-0x50);
                    if (-1 < uVar2) {
                        *(*(arg1 + 0x28) + 0x2c) = CONCAT11(*(iVar4 + 6),*(iVar4 + 7));
                        *(arg1 + 0x380) =
                             CONCAT31(CONCAT21(CONCAT11(*(iVar4 + 0x14),*(iVar4 + 0x15)),*(iVar4 + 0x16)),
                                      *(iVar4 + 0x17));
                        *(arg1 + 900) =
                             CONCAT31(CONCAT21(CONCAT11(*(iVar4 + 0x18),*(iVar4 + 0x19)),*(iVar4 + 0x1a)),
                                      *(iVar4 + 0x1b));
                        *(arg1 + 0xb0) =
                             CONCAT31(CONCAT21(CONCAT11(*(iVar4 + 0x1c),*(iVar4 + 0x1d)),*(iVar4 + 0x1e)),
                                      *(iVar4 + 0x1f));
                        if (0x7f < *(iVar4 + 0x20)) {
                            *(arg1 + 0x388) =
                                 (((*(iVar4 + 0x20) & 0x7f) << 8 | *(iVar4 + 0x21)) << 8 | *(iVar4 + 0x22)) << 8 |
                                 *(iVar4 + 0x23);
                        }
                        *(arg1 + 0x38c) = 1;
                        iVar1 = *(arg1 + 0xb0);
                        if (*(arg1 + 0xb0) == 0) {
                            iVar1 = 1;
                        }
                        *(arg1 + 0xb0) = iVar1;
                    }
                    (**(*0x16ef8 + 0x30))(iVar4,1);
                }
            }
            (**(*0x16ef8 + 0x30))(iVar3,1);
            goto code_r0x00012716;
        }
code_r0x00012590:
        *arg2 = 0;
    }
    else {
code_r0x00012716:
        if (-1 < uVar2) {
            return 0;
        }
        iVar4 = -0x7ffffffffffffffa;
        if (uVar2 != 0x8000000000000006) {
            if (uVar2 + 0x7ffffffffffffffe < 2) goto code_r0x00012590;
            iVar3 = fcn.00012ed0(CONCAT71(iVar3 >> 8,auStackX_18[0]));
            if ((iVar3 != -0x7fffffffffffffee) && (iVar3 != iVar4)) {
                if (iVar3 == -0x7ffffffffffffff9) {
                    (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
                }
                else {
                    iVar3 = fcn.00012f1c(CONCAT71(0x80000000000000,auStackX_20[0]));
                    if (iVar3 == iVar4) {
                        (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
code_r0x000127ac:
                        *arg2 = 1;
                        return 0x8000000000000007;
                    }
                    if (iVar3 != -0x7ffffffffffffff9) {
                        uVar9 = 0;
                        do {
                            iVar3 = fcn.00012f58(arg1,arg2,auStackX_18,auStackX_8,arg_60h);
                            if (-1 < iVar3) goto code_r0x000127ac;
                            if (*arg2 == '\0') {
                                return 0x8000000000000007;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < 3);
                    }
                }
                *arg2 = 0;
                return 0x8000000000000007;
            }
        }
        *arg2 = 1;
    }
    return 0x8000000000000007;
}


/* fcn.00012158 @ 0x12158 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_24h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00012158(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint8_t uVar7;
    int64_t iVar8;
    bool bVar9;
    char acStackX_8 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_40h_2;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_78;
    int64_t iStack_70;
    int iStack_68;
    char cStack_63;
    char cStack_61;
    int iStack_5c;
    int64_t iStack_50;
    int64_t var_40h;
    uint32_t var_38h;
    uint32_t var_30h;
    int8_t var_29h;
    int32_t var_24h;
    int64_t var_18h;
    
    iStack_78 = 0;
    piVar3 = *(arg1 + 0x28);
    iStack_70 = 0;
    iStackX_20 = 0;
    *arg3 = 0;
    uVar7 = 0;
    iStackX_18 = 0;
    if (&iStack_68 != piVar3) {
        section..text(&iStack_68,piVar3,0x30);
    }
    iVar5 = (**(*0x16ef8 + 0x50))(0x80000000,8,0,0,&iStackX_18);
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar5 = (**(*0x16ef8 + 0x58))(iStackX_18,2,1200000000);
    if (-1 < iVar5) {
        iVar6 = (**(*0x16ef8 + 0x78))(iStackX_18);
        iVar8 = 0;
        while (iVar6 < 0) {
            iVar5 = fcn.000127e8(arg1,acStackX_8,&iStack_78,&iStackX_20);
            if (iVar5 < 0) {
                uVar7 = uVar7 + 1;
                if ((acStackX_8[0] == '\0') || (2 < uVar7)) goto code_r0x00012392;
            }
            else {
                iVar5 = fcn.000129b8(arg1,iStack_78,iStackX_20,&iStack_70);
                if (iVar5 < 0) goto code_r0x00012392;
                iVar8 = iStack_70;
                if (iStack_70 != 2) break;
            }
            iVar6 = (**(*0x16ef8 + 0x78))(iStackX_18);
        }
        if (-1 < iVar5) {
            bVar9 = *(arg1 + 200) != '\x1e';
            if (!bVar9) {
                *(*(arg1 + 0x28) + 5) = 1;
                arg2 = 0;
            }
            if ((bVar9 && iVar8 == 1) || (arg2 != '\0')) {
                uVar7 = 0;
                do {
                    iVar5 = fcn.00012be8(arg1,acStackX_8,&iStack_78,&iStackX_20);
                    if (iVar5 < 0) {
                        uVar7 = uVar7 + 1;
                        if ((acStackX_8[0] == '\0') || (2 < uVar7)) goto code_r0x00012392;
                    }
                    else {
                        iVar5 = fcn.000129b8(arg1,iStack_78,iStackX_20,&iStack_70);
                        if (iVar5 < 0) goto code_r0x00012392;
                        if (iStack_70 != 2) break;
                        uVar7 = 0;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 3);
                if (iVar5 < 0) goto code_r0x00012392;
            }
            piVar3 = *(arg1 + 0x28);
            iVar2 = *piVar3;
            if (iVar2 != iStack_68) {
                *arg3 = 1;
            }
            if (*(piVar3 + 7) != cStack_61) {
                *arg3 = 1;
                *piVar3 = iVar2 + 1;
            }
            piVar3 = *(arg1 + 0x28);
            if (piVar3[3] != iStack_5c) {
                *piVar3 = *piVar3 + 1;
                *arg3 = 1;
            }
            piVar3 = *(arg1 + 0x28);
            if (*(piVar3 + 6) != iStack_50) {
                *piVar3 = *piVar3 + 1;
                *arg3 = 1;
            }
            puVar4 = *(arg1 + 0x28);
            cVar1 = *(puVar4 + 5);
            if (cVar1 != cStack_63) {
                *arg3 = 1;
                *puVar4 = cVar1 != '\0';
            }
        }
    }
code_r0x00012392:
    if (iStackX_18 != 0) {
        (**(*0x16ef8 + 0x70))();
    }
    return iVar5;
}


/* fcn.00015080 @ 0x15080 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00015080(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    iVar1 = (**(*0x16ef8 + 0x138))(2,arg1,0,&uStackX_20,&iStackX_18);
    if (-1 < iVar1) {
        uVar4 = 0;
        if (uStackX_20 != 0) {
            do {
                iVar1 = (**(*0x16ef8 + 0x128))(*(iStackX_18 + uVar4 * 8),arg1,&iStack_38,&uStack_30);
                if (-1 < iVar1) {
                    uVar3 = 0;
                    iVar1 = -0x7ffffffffffffffd;
                    if (uStack_30 != 0) {
                        puVar2 = iStack_38 + 0x10;
                        do {
                            if ((*(puVar2 + -8) == arg2) && ((*puVar2 & 8) != 0)) {
                                iVar1 = 0;
                                break;
                            }
                            uVar3 = uVar3 + 1;
                            puVar2 = puVar2 + 0x18;
                        } while (uVar3 < uStack_30);
                    }
                    (**(*0x16ef8 + 0x48))(iStack_38);
                    if ((-1 < iVar1) &&
                       (iVar1 = (**(*0x16ef8 + 0x98))(*(iStackX_18 + uVar4 * 8),arg1,&var_bp_20h), -1 < iVar1)) {
                        (**(*0x16ef8 + 0x48))(iStackX_18);
                        return var_bp_20h;
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uStackX_20);
        }
        (**(*0x16ef8 + 0x48))(iStackX_18);
    }
    return 0;
}


/* fcn.00015458 @ 0x15458 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00015458(int64_t arg1,int64_t arg2)

{
    ulong *arg1_00;
    int64_t iVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    uchar auStackX_8 [8];
    char *apcStackX_18 [2];
    int64_t var_30h;
    int64_t var_40h;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t var_40h_2;
    int64_t var_38h;
    uchar uStack_38;
    int64_t var_20h;
    int32_t var_18h;
    int8_t var_bp_10h;
    
    (**(*0x16ef8 + 0x98))(arg2,0x16d40,apcStackX_18);
    arg1_00 = arg1 + 0x148;
    if (arg1_00 != 0x16df0) {
        section..text(arg1_00,0x16df0,0x30);
    }
    do {
        if ((*apcStackX_18[0] == '\x7f') && (apcStackX_18[0][1] == -1)) {
            return;
        }
        pcVar3 = apcStackX_18[0] + *(apcStackX_18[0] + 2);
        if ((*apcStackX_18[0] == '\x01') && (apcStackX_18[0][1] == '\x01')) {
            if (*pcVar3 == '\x03') {
                if ((pcVar3[1] != '\x01') && (pcVar3[1] != '\x12')) goto code_r0x0001555b;
                iVar4 = 3;
                do {
                    fcn.000102c0(&uStack_68,0x38);
                    fcn.000102c0(auStackX_8,6);
                    var_40h_2 = auStackX_8;
                    auStackX_8[0] = 0xa1;
                    uStack_68 = 300000000;
                    uStack_38 = 6;
                    var_38h._0_4_ = 0x200;
                    iStack_60 = arg1 + 0x180;
                    iVar1 = (**(*(arg1 + 0xc0) + 0x20))(*(arg1 + 0xc0),&uStack_68,0);
                    if (-1 < iVar1) {
                        if (pcVar3[1] == '\x01') {
                            *(arg1 + 0x178) = pcVar3[4];
                            *(arg1 + 0x17c) = pcVar3[5];
                            *arg1_00 = *0x16d20;
                            uVar2 = *0x16d28;
                        }
                        else {
                            *(arg1 + 0x178) = *(pcVar3 + 4);
                            *(arg1 + 0x17c) = *(pcVar3 + 6);
                            *arg1_00 = *0x16d50;
                            uVar2 = *0x16d58;
                        }
                        goto code_r0x000155d7;
                    }
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
        }
        else {
code_r0x0001555b:
            if ((*pcVar3 == '\x03') && (pcVar3[1] == '\x19')) {
                *arg1_00 = *0x16ce0;
                uVar2 = *0x16ce8;
code_r0x000155d7:
                *(arg1 + 0x150) = uVar2;
                return;
            }
        }
        apcStackX_18[0] = pcVar3;
    } while( true );
}


/* fcn.000151a8 @ 0x151a8 */

uchar fcn.000151a8(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uchar uVar3;
    uint64_t arg2_00;
    uchar auStackX_8 [16];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uint auStack_28 [2];
    char *pcStack_20;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 1;
    if (*(iVar2 + 200) != '\x1e') {
        (**(*0x16ef8 + 0x98))(arg2,0x16d40,&pcStack_20);
        for (; *pcStack_20 != '\x7f'; pcStack_20 = pcStack_20 + *(pcStack_20 + 2)) {
            if ((*pcStack_20 == '\x03') && (pcStack_20[1] == '\x19')) {
                arg2_00 = *(*(iVar2 + 0xc0) + 0x28);
                arg1_00 = fcn.00015734(pcStack_20,1,arg2_00);
                if (arg1_00 == 0) {
                    return 0;
                }
                auStackX_8[0] = 0;
                auStack_28[0] = 0x20;
                fcn.000102c0(arg1_00,0x20);
                iVar1 = fcn.0001599c(*(iVar2 + 0xc0),300000000,arg2_00,auStackX_8,auStackX_20,auStackX_18,arg1_00
                                     ,auStack_28);
                if ((((iVar1 != 0) || ((*(arg1_00 + 0xe) & 0xc0) != 0xc0)) || (*(iVar2 + 0x380) == 0)) ||
                   (*(iVar2 + 900) == 0)) {
                    uVar3 = 0;
                }
                (**(*0x16ef8 + 0x30))(arg1_00,1);
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.000152c8 @ 0x152c8 */

uint64_t fcn.000152c8(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char *apcStackX_8 [4];
    
    apcStackX_8[0] = arg1;
    uVar1 = (**(*0x16ef8 + 0x98))(arg2,0x16d40,apcStackX_8);
    while( true ) {
        if (*apcStackX_8[0] == '\x7f') {
            return uVar1 & 0xffffffffffffff00;
        }
        if ((*apcStackX_8[0] == '\x03') && (apcStackX_8[0][1] == '\x19')) break;
        uVar1 = *(apcStackX_8[0] + 2);
        apcStackX_8[0] = apcStackX_8[0] + uVar1;
    }
    return apcStackX_8[0][5] == -0x3c;
}


/* fcn.00016a90 @ 0x16a90 */

ulong fcn.00016a90(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *arg2_00;
    char cVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    char16_t *pcVar5;
    uint32_t uVar6;
    uint in_register_0000000c;
    uint32_t *arg2_01;
    uint32_t *puVar7;
    uint in_register_00000014;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    char in_stack_00000028;
    
    puVar7 = CONCAT44(in_register_00000014,arg2);
    arg2_01 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    if ((arg2_01 == NULL) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if (puVar7 != NULL) {
            if (in_stack_00000028 == '\0') {
                iVar4 = fcn.000168c4(puVar7,arg2_01);
                if (iVar4 == 0) {
code_r0x00016b11:
                    puVar13 = *arg3;
                    uVar11 = uVar10;
                    if (puVar13 != NULL) {
                        for (; pcVar8 = *puVar13, pcVar8 != NULL; puVar13 = puVar13 + 2) {
code_r0x00016bb3:
                            cVar1 = *pcVar8;
                            if (cVar1 != '\0') {
                                uVar9 = uVar10;
                                while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                    uVar9 = uVar9 + 1;
                                    cVar1 = pcVar8[uVar9];
                                }
                                if (uVar9 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar1 = *arg2_01;
                                puVar7 = arg2_01;
                                pcVar3 = pcVar8;
                                for (uVar14 = uVar9;
                                    (((cVar1 != '\0' && (*pcVar3 != '\0')) && (*puVar7 == *pcVar3)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    puVar7 = puVar7 + 1;
                                    pcVar3 = pcVar3 + 1;
                                    cVar1 = *puVar7;
                                }
                                uVar6 = *puVar7 - *pcVar3;
                                puVar7 = uVar6;
                                if (uVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar8 = pcVar8 + uVar9;
                                cVar1 = *pcVar8;
                                if (cVar1 == '\0') goto code_r0x00016bb9;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar8 = pcVar8 + 1;
                                    cVar1 = *pcVar8;
                                } while (cVar1 != '\0');
                                goto code_r0x00016bb3;
                            }
code_r0x00016bb9:
                            uVar11 = uVar11 + 1;
                        }
                    }
                    puVar12 = fcn.00015830();
                    if (puVar12 != NULL) {
                        arg2_00 = *arg3;
                        if (((arg2_00 != NULL) && (uVar11 << 4 != 0)) && (puVar12 != arg2_00)) {
                            puVar7 = puVar12;
                            section..text(puVar12,arg2_00,uVar11 << 4);
                        }
                        cVar1 = *arg2_01;
                        uVar9 = uVar10;
                        while (cVar1 != '\0') {
                            uVar9 = uVar9 + 1;
                            cVar1 = *(uVar9 + arg2_01);
                        }
                        iVar4 = fcn.0001588c(puVar7,uVar9 + 1,arg2_01);
                        *(puVar12 + uVar11 * 4) = iVar4;
                        if (iVar4 != 0) {
                            pcVar5 = L"SCSI Disk Device";
                            do {
                                pcVar5 = pcVar5 + 1;
                                uVar10 = uVar10 + 1;
                            } while (*pcVar5 != L'\0');
                            iVar4 = fcn.0001588c(puVar7,uVar10 * 2 + 2,0x16e70);
                            *(puVar12 + uVar11 * 4 + 2) = iVar4;
                            if (iVar4 != 0) {
                                (puVar12 + uVar11 * 4 + 4)[0] = 0;
                                (puVar12 + uVar11 * 4 + 4)[1] = 0;
                                (puVar12 + uVar11 * 4 + 6)[0] = 0;
                                (puVar12 + uVar11 * 4 + 6)[1] = 0;
                                if (*arg3 != 0) {
                                    (**(*0x16ef8 + 0x48))();
                                }
                                *arg3 = puVar12;
                                return 0;
                            }
                            (**(*0x16ef8 + 0x48))(*(puVar12 + uVar11 * 4));
                        }
                        (**(*0x16ef8 + 0x48))(puVar12);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*puVar7 != '\0') {
                puVar12 = puVar7;
                do {
                    puVar7 = *arg2_01 & 0xffffff;
                    if ((*arg2_01 & 0xffffff) == (*puVar12 & 0xffffff)) goto code_r0x00016b11;
                    puVar12 = puVar12 + 3;
                } while (*puVar12 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00014fc0 @ 0x14fc0 */

void fcn.00014fc0(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    if (arg1 != 0) {
        if (*(arg1 + 0xd0) != 0) {
            (**(*0x16ef8 + 0x48))();
            *(arg1 + 0xd0) = 0;
        }
        piVar1 = *(arg1 + 0x140);
        if (piVar1 != NULL) {
            iVar2 = 0;
            if (*piVar1 != 0) {
                piVar3 = piVar1;
                do {
                    (**(*0x16ef8 + 0x48))(*piVar3);
                    if (piVar3[1] != 0) {
                        (**(*0x16ef8 + 0x48))();
                    }
                    iVar2 = iVar2 + 1;
                    piVar3 = piVar1 + iVar2 * 2;
                } while (*piVar3 != 0);
            }
            (**(*0x16ef8 + 0x48))(piVar1);
            *(arg1 + 0x140) = 0;
        }
        (**(*0x16ef8 + 0x48))(arg1);
    }
    return;
}


/* fcn.00013298 @ 0x13298 */

ulong fcn.00013298(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    ulong unaff_RDI;
    int64_t unaff_R12;
    int64_t arg3_00;
    int64_t unaff_R13;
    char acStackX_8 [8];
    uint32_t uStackX_10;
    
    uVar1 = *(*(arg1 + 0x28) + 0xc);
    uVar7 = (-(*(arg1 + 0x38d) != '\0') & 0xffff0000) + 0xffff;
    do {
        if (arg4 == 0) {
            return 0;
        }
        if (uVar7 < arg4) {
            uVar5 = uVar7;
        }
        else if (*(arg1 + 0x38d) == '\0') {
            uVar5 = arg4 & 0xffff;
        }
        else {
            uVar5 = arg4 & 0xffffffff;
        }
        uStackX_10 = uVar5 * uVar1;
        arg3_00 = (uStackX_10 / 2100000 + 0x1f) * 10000000;
        uVar6 = 0;
        do {
            if (*(arg1 + 0x38d) == '\0') {
                iVar4 = fcn.00013b00(arg1,acStackX_8,arg3_00,arg2,unaff_R13,unaff_R12,unaff_RDI);
            }
            else {
                iVar4 = fcn.00013f78(arg1,acStackX_8,arg3_00,arg2,unaff_R13,unaff_R12,unaff_RDI);
            }
            if (-1 < iVar4) break;
            if (acStackX_8[0] == '\0') {
                return 0x8000000000000007;
            }
            uVar2 = uStackX_10;
            uVar3 = uVar2 / uVar1;
            if (uVar3 < uVar5) {
                uStackX_10 = uVar3 * uVar1;
                uVar5 = uVar2 / uVar1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 2);
        if ((uVar6 == 2) && (iVar4 != 0)) {
            return 0x8000000000000007;
        }
        arg2 = arg2 + (uStackX_10 / uVar1) * uVar1;
        arg4 = arg4 - uStackX_10 / uVar1;
    } while( true );
}


/* fcn.00013420 @ 0x13420 */

ulong fcn.00013420(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    ulong unaff_RDI;
    int64_t unaff_R12;
    int64_t arg3_00;
    int64_t unaff_R13;
    char acStackX_8 [8];
    uint32_t uStackX_10;
    
    uVar1 = *(*(arg1 + 0x28) + 0xc);
    uVar7 = (-(*(arg1 + 0x38d) != '\0') & 0xffff0000) + 0xffff;
    do {
        if (arg4 == 0) {
            return 0;
        }
        if (uVar7 < arg4) {
            uVar5 = uVar7;
        }
        else if (*(arg1 + 0x38d) == '\0') {
            uVar5 = arg4 & 0xffff;
        }
        else {
            uVar5 = arg4 & 0xffffffff;
        }
        uStackX_10 = uVar5 * uVar1;
        arg3_00 = (uStackX_10 / 2100000 + 0x1f) * 10000000;
        uVar6 = 0;
        do {
            if (*(arg1 + 0x38d) == '\0') {
                iVar4 = fcn.00013d3c(arg1,acStackX_8,arg3_00,arg2,unaff_R13,unaff_R12,unaff_RDI);
            }
            else {
                iVar4 = fcn.000141b8(arg1,acStackX_8,arg3_00,arg2,unaff_R13,unaff_R12,unaff_RDI);
            }
            if (-1 < iVar4) break;
            if (acStackX_8[0] == '\0') {
                return 0x8000000000000007;
            }
            uVar2 = uStackX_10;
            uVar3 = uVar2 / uVar1;
            if (uVar3 < uVar5) {
                uStackX_10 = uVar3 * uVar1;
                uVar5 = uVar2 / uVar1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 2);
        if ((uVar6 == 2) && (iVar4 != 0)) {
            return 0x8000000000000007;
        }
        arg2 = arg2 + (uStackX_10 / uVar1) * uVar1;
        arg4 = arg4 - uStackX_10 / uVar1;
    } while( true );
}


/* fcn.000135a8 @ 0x135a8 */

ulong fcn.000135a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t *in_stack_00000028;
    int64_t iStack_40;
    
    if ((in_stack_00000028 == NULL) || (*in_stack_00000028 == 0)) {
        uVar7 = 0x8000000000000002;
    }
    else {
        puVar6 = fcn.00015860(0x30);
        if (puVar6 == NULL) {
            uVar7 = 0x8000000000000009;
        }
        else {
            *puVar6 = in_stack_00000028;
            uVar7 = (**(*0x16ef8 + 0x18))(0x10);
            piVar1 = puVar6 + 4;
            *piVar1 = arg1 + 0x390;
            piVar4 = *(arg1 + 0x398);
            puVar6[5] = piVar4;
            *piVar4 = piVar1;
            iVar9 = *0x16ef8;
            *(arg1 + 0x398) = piVar1;
            (**(iVar9 + 0x20))(uVar7);
            puVar2 = puVar6 + 2;
            *puVar2 = puVar2;
            puVar6[3] = puVar2;
            uVar3 = *(*(arg1 + 0x28) + 0xc);
            uVar11 = (-(*(arg1 + 0x38d) != '\0') & 0xffff0000) + 0xffff;
            if (arg4 != 0) {
                uVar7 = 0x8000000000000007;
                iStack_40 = arg2;
                do {
                    if (uVar11 < arg4) {
                        uVar10 = uVar11;
                    }
                    else {
                        uVar10 = arg4;
                        if (*(arg1 + 0x38d) == '\0') {
                            uVar10 = uVar10 & 0xffff;
                        }
                    }
                    iVar9 = ((uVar10 * uVar3) / 2100000 + 0x1f) * 10000000;
                    if (*(arg1 + 0x38d) == '\0') {
                        iVar9 = fcn.00014780(arg1,iVar9,0,iStack_40);
                    }
                    else {
                        iVar9 = fcn.00014ba0(arg1,iVar9,0,iStack_40);
                    }
                    if (iVar9 < 0) {
                        if ((((iVar9 != -0x7ffffffffffffff9) && (iVar9 != -0x7fffffffffffffee)) || (uVar11 < 2)) ||
                           (uVar10 < 2)) {
                            uVar8 = (**(*0x16ef8 + 0x18))(0x10);
                            if (*puVar2 == puVar2) {
                                *(*piVar1 + 8) = puVar6[5];
                                *puVar6[5] = *piVar1;
                                (**(*0x16ef8 + 0x48))(puVar6);
                                (**(*0x16ef8 + 0x20))(uVar8);
                                goto code_r0x0001383b;
                            }
                            (**(*0x16ef8 + 0x20))(uVar8);
                            break;
                        }
                        if (uVar11 < uVar10) {
                            uVar10 = uVar11;
                        }
                        uVar11 = uVar10 >> 1;
                    }
                    else {
                        uVar5 = (uVar10 * uVar3) / uVar3;
                        iStack_40 = iStack_40 + uVar5 * uVar3;
                        arg4 = arg4 - uVar5;
                    }
                } while (arg4 != 0);
            }
            iVar9 = *0x16ef8;
            uVar7 = 0;
            *(puVar6 + 1) = 1;
            uVar8 = (**(iVar9 + 0x18))(0x10);
            if (*puVar2 == puVar2) {
                *(*piVar1 + 8) = puVar6[5];
                *puVar6[5] = *piVar1;
                (**(*0x16ef8 + 0x48))(puVar6);
                (**(*0x16ef8 + 0x68))(*in_stack_00000028);
            }
            (**(*0x16ef8 + 0x20))(uVar8);
        }
    }
code_r0x0001383b:
    return uVar7;
}


/* fcn.00013854 @ 0x13854 */

ulong fcn.00013854(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t *in_stack_00000028;
    int64_t iStack_40;
    
    if ((in_stack_00000028 == NULL) || (*in_stack_00000028 == 0)) {
        uVar7 = 0x8000000000000002;
    }
    else {
        puVar6 = fcn.00015860(0x30);
        if (puVar6 == NULL) {
            uVar7 = 0x8000000000000009;
        }
        else {
            *puVar6 = in_stack_00000028;
            uVar7 = (**(*0x16ef8 + 0x18))(0x10);
            piVar1 = puVar6 + 4;
            *piVar1 = arg1 + 0x390;
            piVar4 = *(arg1 + 0x398);
            puVar6[5] = piVar4;
            *piVar4 = piVar1;
            iVar9 = *0x16ef8;
            *(arg1 + 0x398) = piVar1;
            (**(iVar9 + 0x20))(uVar7);
            puVar2 = puVar6 + 2;
            *puVar2 = puVar2;
            puVar6[3] = puVar2;
            uVar3 = *(*(arg1 + 0x28) + 0xc);
            uVar11 = (-(*(arg1 + 0x38d) != '\0') & 0xffff0000) + 0xffff;
            if (arg4 != 0) {
                uVar7 = 0x8000000000000007;
                iStack_40 = arg2;
                do {
                    if (uVar11 < arg4) {
                        uVar10 = uVar11;
                    }
                    else {
                        uVar10 = arg4;
                        if (*(arg1 + 0x38d) == '\0') {
                            uVar10 = uVar10 & 0xffff;
                        }
                    }
                    iVar9 = ((uVar10 * uVar3) / 2100000 + 0x1f) * 10000000;
                    if (*(arg1 + 0x38d) == '\0') {
                        iVar9 = fcn.00014990(arg1,iVar9,0,iStack_40);
                    }
                    else {
                        iVar9 = fcn.00014db0(arg1,iVar9,0,iStack_40);
                    }
                    if (iVar9 < 0) {
                        if ((((iVar9 != -0x7ffffffffffffff9) && (iVar9 != -0x7fffffffffffffee)) || (uVar11 < 2)) ||
                           (uVar10 < 2)) {
                            uVar8 = (**(*0x16ef8 + 0x18))(0x10);
                            if (*puVar2 == puVar2) {
                                *(*piVar1 + 8) = puVar6[5];
                                *puVar6[5] = *piVar1;
                                (**(*0x16ef8 + 0x48))(puVar6);
                                (**(*0x16ef8 + 0x20))(uVar8);
                                goto code_r0x00013ae7;
                            }
                            (**(*0x16ef8 + 0x20))(uVar8);
                            break;
                        }
                        if (uVar11 < uVar10) {
                            uVar10 = uVar11;
                        }
                        uVar11 = uVar10 >> 1;
                    }
                    else {
                        uVar5 = (uVar10 * uVar3) / uVar3;
                        iStack_40 = iStack_40 + uVar5 * uVar3;
                        arg4 = arg4 - uVar5;
                    }
                } while (arg4 != 0);
            }
            iVar9 = *0x16ef8;
            uVar7 = 0;
            *(puVar6 + 1) = 1;
            uVar8 = (**(iVar9 + 0x18))(0x10);
            if (*puVar2 == puVar2) {
                *(*piVar1 + 8) = puVar6[5];
                *puVar6[5] = *piVar1;
                (**(*0x16ef8 + 0x48))(puVar6);
                (**(*0x16ef8 + 0x68))(*in_stack_00000028);
            }
            (**(*0x16ef8 + 0x20))(uVar8);
        }
    }
code_r0x00013ae7:
    return uVar7;
}


/* fcn.00012ed0 @ 0x12ed0 */

ulong fcn.00012ed0(uint32_t arg1)

{
    uint8_t uVar1;
    
    uVar1 = arg1;
    if (uVar1 != 0) {
        if ((arg1 - 9 & 0xfd) == 0) {
            return 0x8000000000000012;
        }
        if (0xc < uVar1) {
            if (0x10 < uVar1) {
                if (uVar1 == 0x11) {
                    return 0x8000000000000012;
                }
                if (uVar1 != 0x12) {
                    if (1 < uVar1 - 0x13) {
                        return 0;
                    }
                    return 0x8000000000000007;
                }
            }
            return 0x8000000000000006;
        }
    }
    return 0;
}


/* fcn.00012f1c @ 0x12f1c */

ulong fcn.00012f1c(uint32_t arg1)

{
    char cVar1;
    
    cVar1 = arg1;
    if (((arg1 & 0xf9) == 0) && (cVar1 != '\x06')) {
        return 0;
    }
    if (((arg1 - 8 & 0xf3) != 0) || (cVar1 == '\f')) {
        if (cVar1 == '\x18') {
            return 0x8000000000000007;
        }
        if (cVar1 != '(') {
            return 0;
        }
    }
    return 0x8000000000000006;
}


/* fcn.000115f0 @ 0x115f0 */

ulong fcn.000115f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uchar *puVar4;
    int64_t *piVar5;
    uint16_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong uVar12;
    uint64_t uVar13;
    int16_t iVar14;
    uint16_t uVar15;
    uint16_t uVar16;
    uint16_t uVar17;
    uint16_t *puVar18;
    int64_t aiStack_48 [2];
    
    uVar3 = *(arg1 + 0x380);
    iVar10 = *(arg1 + 0xc0);
    uVar13 = uVar3;
    puVar9 = NULL;
    aiStack_48[0] = 0;
    if (*(arg1 + 900) < arg3 / uVar13) {
        return 0x8000000000000007;
    }
    piVar7 = fcn.00015860(0x50);
    if (piVar7 == NULL) {
        uVar12 = 0x8000000000000007;
        goto code_r0x0001191d;
    }
    iVar8 = fcn.00015860(10);
    piVar7[5] = iVar8;
    if (iVar8 == 0) {
code_r0x0001168d:
        uVar12 = 0x8000000000000007;
    }
    else {
        iVar14 = ((arg3 - 1U) / uVar13) * 0x10;
        uVar15 = iVar14 + 0x18;
        puVar9 = fcn.00015860(uVar15);
        if (puVar9 == NULL) goto code_r0x0001168d;
        puVar18 = puVar9 + 4;
        *puVar9 = (iVar14 + 0x16U) * 0x100 | iVar14 + 0x16U >> 8;
        puVar9[1] = (iVar14 + 0x10U) * 0x100 | iVar14 + 0x10U >> 8;
        if (arg3 != 0) {
            do {
                uVar6 = arg2 >> 0x10;
                uVar16 = arg2 >> 0x20;
                uVar17 = arg2 >> 0x30;
                *puVar18 = CONCAT62(CONCAT42(CONCAT22(arg2 << 8 | arg2 >> 8,uVar6 << 8 | uVar6 >> 8),
                                             uVar16 << 8 | uVar16 >> 8),uVar17 << 8 | uVar17 >> 8);
                if (uVar13 < arg3) {
                    arg3 = arg3 - uVar13;
                    uVar6 = uVar3 >> 0x10;
                    *(puVar18 + 4) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar6 << 8 | uVar6 >> 8);
                    arg2 = arg2 + uVar13;
                }
                else {
                    uVar6 = arg3 >> 0x10;
                    *(puVar18 + 4) = CONCAT22(arg3 << 8 | arg3 >> 8,uVar6 << 8 | uVar6 >> 8);
                    arg3 = 0;
                }
                puVar18 = puVar18 + 8;
            } while (arg3 != 0);
        }
        piVar1 = piVar7 + 1;
        *(piVar7 + 0x34) = uVar15;
        puVar4 = piVar7[5];
        *piVar1 = 300000000;
        piVar7[3] = puVar9;
        *(piVar7 + 7) = 0x10a;
        *puVar4 = 0x42;
        *(puVar4 + 7) = uVar15 * 0x100 | uVar15 >> 8;
        if ((arg4 == 0) || (*arg4 == 0)) {
            iVar8 = (**(iVar10 + 0x20))(iVar10,piVar1,0);
            if (-1 < iVar8) {
                uVar12 = CONCAT71(iVar10 >> 8,*(piVar7 + 0x3a));
                iVar10 = fcn.00012ed0(uVar12);
                if (-1 < iVar10) {
                    iVar10 = fcn.00012f1c(CONCAT71(uVar12 >> 8,*(piVar7 + 0x3b)));
                    uVar12 = 0;
                    if (iVar10 < 0) {
                        uVar12 = 0x8000000000000007;
                    }
                    goto code_r0x000118eb;
                }
            }
            goto code_r0x0001168d;
        }
        iVar8 = (**(*0x16ef8 + 0x50))(0x200,0x10,0x1154c,piVar7,aiStack_48);
        if (iVar8 < 0) goto code_r0x0001168d;
        uVar12 = (**(*0x16ef8 + 0x18))(0x10);
        piVar2 = piVar7 + 8;
        *piVar2 = arg1 + 0x390;
        piVar5 = *(arg1 + 0x398);
        piVar7[9] = piVar5;
        *piVar5 = piVar2;
        iVar8 = *0x16ef8;
        *(arg1 + 0x398) = piVar2;
        (**(iVar8 + 0x20))(uVar12);
        *piVar7 = arg4;
        iVar10 = (**(iVar10 + 0x20))(iVar10,piVar1,aiStack_48[0]);
        if (-1 < iVar10) {
            return 0;
        }
        uVar12 = 0x8000000000000007;
        uVar11 = (**(*0x16ef8 + 0x18))(0x10);
        *(*piVar2 + 8) = piVar7[9];
        *piVar7[9] = *piVar2;
        (**(*0x16ef8 + 0x20))(uVar11);
    }
code_r0x000118eb:
    if (piVar7[5] != 0) {
        (**(*0x16ef8 + 0x48))();
    }
    (**(*0x16ef8 + 0x48))(piVar7);
    if (puVar9 != NULL) {
        (**(*0x16ef8 + 0x48))(puVar9);
    }
code_r0x0001191d:
    if (aiStack_48[0] != 0) {
        (**(*0x16ef8 + 0x70))();
    }
    return uVar12;
}


/* fcn.00015734 @ 0x15734 */

uint64_t fcn.00015734(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_10;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = (**(*0x16ef8 + 0x28))(0,4,arg1,&uStackX_10);
            if (-1 < iVar1) {
                return uStackX_10;
            }
        }
        else {
            iVar2 = (arg2 >> 0xc) + ((arg2 & 0xfffU) != 0) + arg1;
            iVar1 = (**(*0x16ef8 + 0x28))(0,4,iVar2);
            if (-1 < iVar1) {
                uVar3 = uStackX_10 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
                if (iVar1 != 0) {
                    (**(*0x16ef8 + 0x30))(uStackX_10,iVar1);
                }
                uStackX_10 = arg1 * 0x1000 + uVar3;
                arg1 = (iVar2 - iVar1) - arg1;
                if (arg1 != 0) {
                    (**(*0x16ef8 + 0x30))(uStackX_10,arg1);
                }
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.00015e74 @ 0x15e74 */

void fcn.00015e74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int8_t arg_40h,int16_t arg_48h,ulong noname_8,int64_t arg_58h,int64_t arg_60h,int64_t arg_68h)

{
    uint16_t uVar1;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,0xc);
    var_38h = arg_60h;
    var_20h = &var_50h;
    var_50h._1_1_ = arg_40h;
    var_50h._2_2_ = arg_48h << 8 | arg_48h >> 8;
    var_18h = arg_58h;
    uVar1 = arg_58h >> 0x10;
    *0x8 = CONCAT22(arg_58h << 8 | arg_58h >> 8,uVar1 << 8 | uVar1 >> 8);
    var_ch = *arg4;
    var_50h._0_1_ = 0xa2;
    var_10h = 0xc;
    var_40h = arg2;
    var_28h = arg3;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    *arg_68h = var_18h;
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 27200 named .text
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


/* fcn.00010354 @ 0x10354 */

void fcn.00010354(int64_t arg1,int64_t arg2)

{
    if (arg1 != 0) {
        (**(*0x16ef8 + 0x30))(arg1,((arg2 & 0xfffU) != 0) + (arg2 >> 0xc));
    }
    return;
}


/* fcn.00015f5c @ 0x15f5c */

void fcn.00015f5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int8_t arg_40h,int16_t arg_48h,ulong noname_8,int64_t arg_58h,int64_t arg_60h)

{
    uint16_t uVar1;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_14h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,0xc);
    var_30h = arg_60h;
    var_20h = &var_50h;
    var_50h._1_1_ = arg_40h;
    var_50h._2_2_ = arg_48h << 8 | arg_48h >> 8;
    var_14h = arg_58h;
    uVar1 = arg_58h >> 0x10;
    *0x8 = CONCAT22(arg_58h << 8 | arg_58h >> 8,uVar1 << 8 | uVar1 >> 8);
    var_ch = *arg4;
    var_50h._0_1_ = 0xb5;
    var_10h = 0x10c;
    var_40h = arg2;
    var_28h = arg3;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    return;
}


/* fcn.000127e8 @ 0x127e8 */

//WARNING: Variable defined which should be unmapped: var_40h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.000127e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uchar auStackX_8 [8];
    int64_t var_30h;
    ulong uStackY_68;
    ulong uStackY_60;
    ulong uStackY_58;
    ulong uStackY_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int8_t var_bp_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    cVar1 = *(arg1 + 0xd8);
    uVar2 = *(arg1 + 0xd0);
    iVar3 = *(arg1 + 0xc0);
    *arg4 = 0;
    fcn.000102c0(&uStackY_68,0x38);
    fcn.000102c0(auStackX_8,6);
    uStackY_68 = 300000000;
    uStackY_60 = 0;
    var_40h = auStackX_8;
    var_38h = 0;
    uStackY_58 = 0;
    auStackX_8[0] = 0;
    var_30h_2._0_1_ = 6;
    uStackY_50 = uVar2;
    var_30h_2._4_1_ = cVar1 * '\x12';
    iVar3 = (**(iVar3 + 0x20))(iVar3,&uStackY_68,0);
    iVar4 = -0x7ffffffffffffffa;
    if (iVar3 != -0x7ffffffffffffffa) {
        if (iVar3 + 0x7ffffffffffffffeU < 2) {
            *arg2 = 0;
            return 0x8000000000000007;
        }
        iVar3 = fcn.00012ed0(CONCAT71(0x7fffffffffffff,var_30h_2._2_1_));
        if ((iVar3 != -0x7fffffffffffffee) && (iVar3 != iVar4)) {
            if (iVar3 == -0x7ffffffffffffff9) {
                (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
            }
            else {
                iVar3 = fcn.00012f1c(CONCAT71(0x80000000000000,var_30h_2._3_1_));
                if (iVar3 == iVar4) {
                    (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
                    *arg2 = 1;
                    return 0x8000000000000007;
                }
                if (iVar3 != -0x7ffffffffffffff9) {
                    uVar5 = 0;
                    if (var_30h_2._4_1_ != 0) {
                        uVar2 = *(arg1 + 0xd0);
                        *arg4 = var_30h_2._4_1_ / 0x12;
                        *arg3 = uVar2;
                        return 0;
                    }
                    while( true ) {
                        iVar3 = fcn.00012f58(arg1,arg2,arg3,arg4,var_40h);
                        if (-1 < iVar3) {
                            return 0;
                        }
                        if (*arg2 == '\0') break;
                        uVar5 = uVar5 + 1;
                        if (2 < uVar5) {
                            *arg2 = 0;
                            return 0x8000000000000007;
                        }
                    }
                    return 0x8000000000000007;
                }
            }
            *arg2 = 0;
            return 0x8000000000000007;
        }
    }
    *arg2 = 1;
    return 0x8000000000000007;
}


/* fcn.000129b8 @ 0x129b8 */

ulong fcn.000129b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    bool bVar2;
    bool bVar3;
    char *pcVar4;
    uint64_t uVar5;
    uint8_t *puVar6;
    int64_t iVar7;
    
    uVar5 = 0;
    *arg4 = 1;
    if (arg3 == 0) {
        *arg4 = *(*(arg1 + 0x28) + 5) != '\x01';
        return 0;
    }
    bVar3 = true;
    bVar2 = true;
    if (arg3 != 0) {
        puVar6 = arg2 + 2;
        do {
            if ((*puVar6 & 0xf) == 0) {
                bVar2 = uVar5 != 0 & bVar2;
            }
            puVar6 = puVar6 + 0x12;
            uVar5 = uVar5 + 1;
        } while (uVar5 < arg3);
        if (!bVar2) {
            if (*(*(arg1 + 0x28) + 5) != '\x01') {
                return 0;
            }
            goto code_r0x00012a34;
        }
    }
    bVar2 = false;
    if (arg3 != 0) {
        pcVar4 = arg2 + 0xc;
        iVar7 = arg3;
        do {
            if (((pcVar4[-10] & 0xfU) == 2) && (*pcVar4 == ':')) {
                bVar2 = true;
            }
            pcVar4 = pcVar4 + 0x12;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (bVar2) {
            *(*(arg1 + 0x28) + 5) = 0;
            *(*(arg1 + 0x28) + 0x18) = 0;
code_r0x00012a34:
            *arg4 = 0;
            return 0;
        }
    }
    bVar2 = false;
    if (arg3 != 0) {
        pcVar4 = arg2 + 0xc;
        iVar7 = arg3;
        do {
            if (((pcVar4[-10] & 0xfU) == 6) && (*pcVar4 == '(')) {
                bVar2 = true;
            }
            pcVar4 = pcVar4 + 0x12;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (bVar2) {
            **(arg1 + 0x28) = **(arg1 + 0x28) + 1;
            return 0;
        }
    }
    bVar2 = false;
    if (arg3 == 0) {
code_r0x00012af0:
        bVar2 = false;
        if (arg3 != 0) {
            puVar6 = arg2 + 0xc;
            iVar7 = arg3;
            do {
                if ((puVar6[-10] & 0xf) == 2) {
                    if (*puVar6 == 6) {
                        bVar2 = true;
                    }
                }
                else if ((((puVar6[-10] & 0xf) == 3) && (*puVar6 < 0x31)) &&
                        ((0x1000000130000U >> (*puVar6 & 0x3f) & 1) != 0)) {
                    bVar2 = true;
                }
                puVar6 = puVar6 + 0x12;
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            if (bVar2) goto code_r0x00012b45;
        }
        bVar2 = false;
        if (arg3 != 0) {
            puVar6 = arg2 + 2;
            iVar7 = arg3;
            do {
                uVar1 = *puVar6;
                puVar6 = puVar6 + 0x12;
                if ((uVar1 & 0xf) == 4) {
                    bVar2 = true;
                }
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            if (bVar2) {
code_r0x00012b45:
                *arg4 = 3;
                return 0x8000000000000007;
            }
        }
        bVar2 = false;
        if (arg3 != 0) {
            pcVar4 = arg2 + 0xc;
            do {
                if ((((pcVar4[-10] & 0xfU) == 2) && (*pcVar4 == '\x04')) &&
                   (bVar2 = false, bVar3 = false, pcVar4[1] == '\x01')) {
                    bVar2 = true;
                }
                pcVar4 = pcVar4 + 0x12;
                arg3 = arg3 + -1;
            } while (arg3 != 0);
            if (!bVar3) {
                if (!bVar2) {
                    *arg4 = 0;
                    return 0x8000000000000007;
                }
                goto code_r0x00012ae8;
            }
        }
        *arg4 = 3;
    }
    else {
        pcVar4 = arg2 + 0xc;
        iVar7 = arg3;
        do {
            if (((pcVar4[-10] & 0xfU) == 6) && (*pcVar4 == ')')) {
                bVar2 = true;
            }
            pcVar4 = pcVar4 + 0x12;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (!bVar2) goto code_r0x00012af0;
code_r0x00012ae8:
        *arg4 = 2;
    }
    return 0;
}


/* fcn.00012be8 @ 0x12be8 */

ulong fcn.00012be8(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    char *arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    ulong noname_2;
    uchar uVar6;
    uchar auStackX_8 [8];
    uint in_stack_ffffffffffffff78;
    ushort uVar7;
    uint32_t arg_60h;
    uint uStack_84;
    uchar auStack_80 [2];
    uchar auStack_7e [14];
    ulong uStack_70;
    char *pcStack_68;
    ulong uStack_58;
    uchar *puStack_50;
    uint uStack_48;
    ushort uStack_40;
    uchar uStack_3e;
    uchar uStack_3d;
    uchar uStack_3c;
    
    uVar7 = in_stack_ffffffffffffff78 >> 0x10;
    iVar2 = arg1;
    arg1_00 = fcn.00015734(arg1,1,*(*(arg1 + 0xc0) + 0x28));
    if (arg1_00 != NULL) {
        iVar2 = fcn.00015734(iVar2,1,*(*(arg1 + 0xc0) + 0x28));
        if (iVar2 != 0) {
            uStack_84 = 0x20;
            fcn.000102c0(arg1_00,8);
            fcn.000102c0(iVar2,0x20);
            *arg4 = 0;
            iVar3 = *(arg1 + 0xc0);
            *arg2 = 0;
            fcn.000102c0(&uStack_70,0x38);
            fcn.000102c0(auStack_80,10);
            puStack_50 = auStack_80;
            uStack_70 = 300000000;
            uStack_58 = 0;
            uStack_48 = 8;
            auStack_80[0] = 0x25;
            pcStack_68 = arg1_00;
            fcn.000102c0(auStack_7e,4);
            noname_2 = 0;
            uStack_40 = 10;
            uStack_3c = 0;
            iVar3 = (**(iVar3 + 0x20))(iVar3,&uStack_70);
            arg_60h = CONCAT31(CONCAT21(uVar7,uStack_3c),uStack_3e);
            auStackX_8[0] = uStack_3d;
            *(arg1 + 0x38d) = 0;
            uVar6 = uStack_3e;
            if ((((-1 < iVar3) && (*arg1_00 == -1)) && (arg1_00[1] == -1)) && ((arg1_00[2] == -1 && (arg1_00[3] == -1)))
               ) {
                *(arg1 + 0x38d) = 1;
                iVar3 = fcn.0001599c(*(arg1 + 0xc0),300000000,noname_2,&stack0xffffffffffffff79,
                                     &stack0xffffffffffffff78,auStackX_8,iVar2,&uStack_84);
                uVar6 = arg_60h;
            }
            uVar1 = auStackX_8[0];
            if (iVar3 == 0) {
                fcn.00013148(arg1,arg1_00,iVar2);
                (**(*0x16ef8 + 0x30))(arg1_00,1);
                (**(*0x16ef8 + 0x30))(iVar2,1);
                return 0;
            }
            (**(*0x16ef8 + 0x30))(arg1_00,1);
            (**(*0x16ef8 + 0x30))(iVar2,1);
            iVar4 = -0x7ffffffffffffffa;
            if (iVar3 != -0x7ffffffffffffffa) {
                if (iVar3 + 0x7ffffffffffffffeU < 2) goto code_r0x00012c62;
                iVar2 = fcn.00012ed0(CONCAT71(iVar2 >> 8,uVar6));
                if ((iVar2 != -0x7fffffffffffffee) && (iVar2 != iVar4)) {
                    if (iVar2 == -0x7ffffffffffffff9) {
                        (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
                    }
                    else {
                        iVar2 = fcn.00012f1c(CONCAT71(0x80000000000000,uVar1));
                        if (iVar2 == iVar4) {
                            (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
                            *arg2 = 1;
                            return 0x8000000000000007;
                        }
                        if (iVar2 != -0x7ffffffffffffff9) {
                            uVar5 = 0;
                            do {
                                iVar2 = fcn.00012f58(arg1,arg2,arg3,arg4,arg_60h);
                                if (-1 < iVar2) {
                                    return 0;
                                }
                                if (*arg2 == '\0') {
                                    return 0x8000000000000007;
                                }
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < 3);
                        }
                    }
                    *arg2 = 0;
                    return 0x8000000000000007;
                }
            }
            *arg2 = 1;
            return 0x8000000000000007;
        }
        (**(*0x16ef8 + 0x30))(arg1_00,1);
    }
code_r0x00012c62:
    *arg2 = 0;
    return 0x8000000000000007;
}


/* fcn.0001599c @ 0x1599c */

void fcn.0001599c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3,int64_t arg_30h,int64_t arg_38h,
                 int64_t arg_40h,int64_t arg_48h)

{
    int64_t var_50h;
    int8_t var_43h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_bp_18h;
    int16_t var_bp_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,0x10);
    var_28h = 0;
    var_38h = arg_40h;
    var_50h._0_2_ = 0x109e;
    var_bp_18h = *arg_48h;
    var_20h = &var_50h;
    var_40h = arg2;
    fcn.000102c0(&var_50h + 2,8);
    var_ch = *arg3;
    var_43h = 0x20;
    var_bp_10h = 0x10;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg3 = var_ch;
    *arg_48h = var_bp_18h;
    return;
}


/* fcn.00013148 @ 0x13148 */

void fcn.00013148(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x38d) == '\0') {
        *(*(iVar3 + 0x28) + 0x18) = CONCAT31(CONCAT21(CONCAT11(*arg2,*(arg2 + 1)),*(arg2 + 2)),*(arg2 + 3));
        *(*(iVar3 + 0x28) + 0xc) = CONCAT31(CONCAT21(CONCAT11(*(arg2 + 4),*(arg2 + 5)),*(arg2 + 6)),*(arg2 + 7));
        *(*(iVar3 + 0x28) + 0x20) = 0;
        *(*(iVar3 + 0x28) + 0x28) = 0;
        if (*(iVar3 + 0x38c) != '\0') goto code_r0x0001328e;
        uVar2 = *(*(iVar3 + 0x28) + 0x18);
    }
    else {
        iVar1 = *(iVar3 + 0x28);
        *(iVar1 + 0x18) = *(arg3 + 7);
        *(iVar1 + 0x19) = *(arg3 + 6);
        *(iVar1 + 0x1a) = *(arg3 + 5);
        *(iVar1 + 0x1b) = *(arg3 + 4);
        *(iVar1 + 0x1c) = *(arg3 + 3);
        *(iVar1 + 0x1d) = *(arg3 + 2);
        *(iVar1 + 0x1e) = *(arg3 + 1);
        *(iVar1 + 0x1f) = *arg3;
        *(*(iVar3 + 0x28) + 0xc) = CONCAT31(CONCAT21(CONCAT11(*(arg3 + 8),*(arg3 + 9)),*(arg3 + 10)),*(arg3 + 0xb));
        *(*(iVar3 + 0x28) + 0x20) = CONCAT11(*(arg3 + 0xe),*(arg3 + 0xf));
        *(*(iVar3 + 0x28) + 0x28) = 1 << (*(arg3 + 0xd) & 0x1f);
        if (*(iVar3 + 0x38c) != '\0') goto code_r0x0001328e;
        uVar2 = 0xffffffff;
        if (*(*(iVar3 + 0x28) + 0x18) < 0x100000000) {
            *(iVar3 + 0x380) = *(*(iVar3 + 0x28) + 0x18);
            goto code_r0x0001328e;
        }
    }
    *(iVar3 + 0x380) = uVar2;
code_r0x0001328e:
    *(*(iVar3 + 0x28) + 5) = 1;
    return;
}


/* fcn.00012f58 @ 0x12f58 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

uint64_t fcn.00012f58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_60h)

{
    ulong uVar1;
    int64_t iVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uStackX_8;
    uchar auStackX_18 [4];
    uint8_t uStackX_1c;
    char in_stack_00000028;
    int8_t var_40h;
    int64_t var_50h;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_60;
    uchar *puStack_58;
    uint32_t uStack_50;
    int64_t var_40h_2;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int16_t var_bp_10h;
    int8_t var_ch;
    
    uStackX_8 = 0x12;
    iVar2 = *(arg1 + 0xd8) * 0x12;
    iVar4 = arg1;
    if (iVar2 != 0) {
        iVar4 = *(arg1 + 0xd0);
        fcn.000102c0(iVar4,iVar2);
    }
    uVar1 = *(arg1 + 0xd0);
    *arg4 = 0;
    *arg3 = uVar1;
    iVar4 = fcn.00015734(iVar4,1,*(*(arg1 + 0xc0) + 0x28));
    if (iVar4 == 0) {
        uVar5 = 0x8000000000000007;
    }
    else {
        bVar3 = true;
        do {
            fcn.000102c0(iVar4,0x12);
            iVar2 = *(arg1 + 0xc0);
            fcn.000102c0(&uStack_78,0x38);
            fcn.000102c0(auStackX_18,6);
            puStack_58 = auStackX_18;
            uStack_50 = uStackX_8;
            uStack_60 = 0;
            uStackX_1c = uStackX_8;
            var_40h_2._4_1_ = 0;
            uStack_78 = 300000000;
            auStackX_18[0] = 3;
            var_40h_2._0_2_ = 6;
            iStack_70 = iVar4;
            uVar5 = (**(iVar2 + 0x20))(iVar2,&uStack_78,0);
            uStackX_8 = uStack_50;
            if ((uVar5 & 0xfffffffffffffffb) != 0) {
                if ((uVar5 == 0x8000000000000012) || (uVar5 == 0x8000000000000006)) {
                    *arg2 = 1;
                }
                else if (uVar5 + 0x7ffffffffffffffe < 2) {
                    *arg2 = 0;
                }
                else {
                    if (uVar5 != 0x8000000000000007) goto code_r0x0001309b;
                    if (in_stack_00000028 != '\0') {
                        (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
                    }
                }
                if (*arg4 == 0) {
                    uVar5 = 0x8000000000000007;
                }
                else {
                    *arg2 = 0;
                    uVar5 = 0;
                }
                break;
            }
code_r0x0001309b:
            iVar2 = *(arg1 + 0xd0) + *arg4 * 0x12;
            if ((uStack_50 != 0) && (iVar2 != iVar4)) {
                section..text(iVar2,iVar4,uStack_50);
            }
            *arg4 = *arg4 + 1;
            if (((*(iVar4 + 2) & 0xf) == 0) || (*arg4 == *(arg1 + 0xd8))) {
                bVar3 = false;
            }
        } while (bVar3);
        (**(*0x16ef8 + 0x30))(iVar4,1);
    }
    return uVar5;
}


/* fcn.000158cc @ 0x158cc */

void fcn.000158cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int64_t arg_40h,int64_t arg_48h,uint32_t arg_50h,int8_t arg_58h)

{
    int64_t iVar1;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h_2;
    int32_t var_18h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    var_20h = arg3;
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_20h,6);
    iVar1 = var_20h;
    var_38h = arg_40h;
    var_ch = *arg4;
    var_20h_2 = &var_20h;
    var_28h = 0;
    var_18h = *arg_48h;
    var_20h = CONCAT71(var_20h._1_7_,0x12);
    if (arg_50h != '\0') {
        var_20h._1_1_ = SUB81(iVar1,1);
        var_20h._3_5_ = SUB85(iVar1,3);
        var_20h = CONCAT53(var_20h._3_5_,CONCAT12(arg_58h,CONCAT11(var_20h._1_1_,0x12))) | 0x100;
    }
    if (0xff < var_18h) {
        *arg_48h = 0xff;
    }
    var_20h._0_5_ = CONCAT14(*arg_48h,var_20h);
    var_10h = 6;
    var_40h = arg2;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    *arg_48h = var_18h;
    return;
}


/* fcn.00013b00 @ 0x13b00 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00013b00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int32_t arg_68h,
                    int32_t arg_70h)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t auStackX_8 [8];
    uchar auStackX_10 [8];
    int *in_stack_00000028;
    int32_t in_stack_00000030;
    int64_t var_bp_40h;
    int64_t var_48h;
    uchar auStack_48 [8];
    int64_t iStack_40;
    int64_t var_10h;
    uint32_t var_8h;
    
    cVar1 = *(arg1 + 0xd8);
    iVar6 = *(arg1 + 0xd0);
    iStack_40 = 0;
    iVar4 = *(arg1 + 0xc0);
    *arg2 = 0;
    auStackX_8[0] = cVar1 * '\x12';
    iVar3 = fcn.00015a5c(iVar4,arg3,iVar6,auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                         in_stack_00000030,var_bp_40h);
    iVar6 = -0x7ffffffffffffff9;
    do {
        iVar7 = -0x7ffffffffffffffa;
        if ((iVar3 == -0x7ffffffffffffffa) || (iVar3 == -0x7ffffffffffffffc)) goto code_r0x00013d06;
        if ((iVar3 == -0x7ffffffffffffffe) || (iVar3 == -0x7ffffffffffffffd)) {
            iVar6 = iVar3;
code_r0x00013d36:
            *arg2 = 0;
            return iVar6;
        }
        iVar4 = fcn.00012ed0(CONCAT71(iVar4 >> 8,auStack_48[0]));
        if ((iVar4 == -0x7fffffffffffffee) || (iVar4 == iVar7)) goto code_r0x00013d06;
        if (iVar4 == -0x7ffffffffffffff9) {
            (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
            goto code_r0x00013d36;
        }
        uVar5 = CONCAT71(0x80000000000000,auStackX_10[0]);
        iVar4 = fcn.00012f1c(uVar5);
        if (iVar4 == iVar7) {
            (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
code_r0x00013d06:
            *arg2 = 1;
            return -0x7ffffffffffffff9;
        }
        if (iVar4 == -0x7ffffffffffffff9) goto code_r0x00013d36;
        if ((uVar5 != '\x02') && (-1 < iVar3)) {
            return iVar3;
        }
        fcn.000129b8(arg1,*(arg1 + 0xd0),auStackX_8[0] / 0x12,&iStack_40);
        if (iStack_40 == 2) goto code_r0x00013d06;
        if ((iStack_40 != 3) || (var_bp_40h < 2)) goto code_r0x00013d36;
        iStack_40 = 0;
        var_bp_40h._0_4_ = var_bp_40h >> 1;
        iVar2 = *(*(arg1 + 0x28) + 0xc);
        *arg2 = 0;
        *in_stack_00000028 = iVar2 * var_bp_40h;
        auStackX_8[0] = *(arg1 + 0xd8) * '\x12';
        iVar4 = *(arg1 + 0xc0);
        iVar3 = fcn.00015a5c(iVar4,arg3,*(arg1 + 0xd0),auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                             in_stack_00000030,var_bp_40h);
    } while( true );
}


/* fcn.00013f78 @ 0x13f78 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00013f78(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                    int32_t arg_70h)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t auStackX_8 [8];
    uchar auStackX_10 [8];
    int *in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_48 [8];
    int64_t iStack_40;
    int64_t var_10h;
    uint32_t var_8h;
    
    cVar1 = *(arg1 + 0xd8);
    iVar6 = *(arg1 + 0xd0);
    iStack_40 = 0;
    iVar4 = *(arg1 + 0xc0);
    *arg2 = 0;
    auStackX_8[0] = cVar1 * '\x12';
    iVar3 = fcn.00015c24(iVar4,arg3,iVar6,auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                         in_stack_00000030,var_40h);
    iVar6 = -0x7ffffffffffffff9;
    do {
        iVar7 = -0x7ffffffffffffffa;
        if ((iVar3 == -0x7ffffffffffffffa) || (iVar3 == -0x7ffffffffffffffc)) goto code_r0x00014181;
        if ((iVar3 == -0x7ffffffffffffffe) || (iVar3 == -0x7ffffffffffffffd)) {
            iVar6 = iVar3;
code_r0x000141b1:
            *arg2 = 0;
            return iVar6;
        }
        iVar4 = fcn.00012ed0(CONCAT71(iVar4 >> 8,auStack_48[0]));
        if ((iVar4 == -0x7fffffffffffffee) || (iVar4 == iVar7)) goto code_r0x00014181;
        if (iVar4 == -0x7ffffffffffffff9) {
            (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
            goto code_r0x000141b1;
        }
        uVar5 = CONCAT71(0x80000000000000,auStackX_10[0]);
        iVar4 = fcn.00012f1c(uVar5);
        if (iVar4 == iVar7) {
            (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
code_r0x00014181:
            *arg2 = 1;
            return -0x7ffffffffffffff9;
        }
        if (iVar4 == -0x7ffffffffffffff9) goto code_r0x000141b1;
        if ((uVar5 != '\x02') && (-1 < iVar3)) {
            return iVar3;
        }
        fcn.000129b8(arg1,*(arg1 + 0xd0),auStackX_8[0] / 0x12,&iStack_40);
        if (iStack_40 == 2) goto code_r0x00014181;
        if ((iStack_40 != 3) || (var_40h < 2)) goto code_r0x000141b1;
        iStack_40 = 0;
        var_40h._0_4_ = var_40h >> 1;
        iVar2 = *(*(arg1 + 0x28) + 0xc);
        *arg2 = 0;
        *in_stack_00000028 = iVar2 * var_40h;
        auStackX_8[0] = *(arg1 + 0xd8) * '\x12';
        iVar4 = *(arg1 + 0xc0);
        iVar3 = fcn.00015c24(iVar4,arg3,*(arg1 + 0xd0),auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                             in_stack_00000030,var_40h);
    } while( true );
}


/* fcn.00013d3c @ 0x13d3c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00013d3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int32_t arg_68h,
                    int32_t arg_70h)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t auStackX_8 [8];
    uchar auStackX_10 [8];
    int *in_stack_00000028;
    int32_t in_stack_00000030;
    int64_t var_bp_40h;
    int64_t var_48h;
    uchar auStack_48 [8];
    int64_t iStack_40;
    int64_t var_10h;
    uint32_t var_8h;
    
    cVar1 = *(arg1 + 0xd8);
    iVar6 = *(arg1 + 0xd0);
    iStack_40 = 0;
    iVar4 = *(arg1 + 0xc0);
    *arg2 = 0;
    auStackX_8[0] = cVar1 * '\x12';
    iVar3 = fcn.00015b40(iVar4,arg3,iVar6,auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                         in_stack_00000030,var_bp_40h);
    iVar6 = -0x7ffffffffffffff9;
    do {
        iVar7 = -0x7ffffffffffffffa;
        if ((iVar3 == -0x7ffffffffffffffa) || (iVar3 == -0x7ffffffffffffffc)) goto code_r0x00013f42;
        if ((iVar3 == -0x7ffffffffffffffe) || (iVar3 == -0x7ffffffffffffffd)) {
            iVar6 = iVar3;
code_r0x00013f72:
            *arg2 = 0;
            return iVar6;
        }
        iVar4 = fcn.00012ed0(CONCAT71(iVar4 >> 8,auStack_48[0]));
        if ((iVar4 == -0x7fffffffffffffee) || (iVar4 == iVar7)) goto code_r0x00013f42;
        if (iVar4 == -0x7ffffffffffffff9) {
            (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
            goto code_r0x00013f72;
        }
        uVar5 = CONCAT71(0x80000000000000,auStackX_10[0]);
        iVar4 = fcn.00012f1c(uVar5);
        if (iVar4 == iVar7) {
            (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
code_r0x00013f42:
            *arg2 = 1;
            return -0x7ffffffffffffff9;
        }
        if (iVar4 == -0x7ffffffffffffff9) goto code_r0x00013f72;
        if ((uVar5 != '\x02') && (-1 < iVar3)) {
            return iVar3;
        }
        fcn.000129b8(arg1,*(arg1 + 0xd0),auStackX_8[0] / 0x12,&iStack_40);
        if (iStack_40 == 2) goto code_r0x00013f42;
        if ((iStack_40 != 3) || (var_bp_40h < 2)) goto code_r0x00013f72;
        iStack_40 = 0;
        var_bp_40h._0_4_ = var_bp_40h >> 1;
        iVar2 = *(*(arg1 + 0x28) + 0xc);
        *arg2 = 0;
        *in_stack_00000028 = iVar2 * var_bp_40h;
        auStackX_8[0] = *(arg1 + 0xd8) * '\x12';
        iVar4 = *(arg1 + 0xc0);
        iVar3 = fcn.00015b40(iVar4,arg3,*(arg1 + 0xd0),auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                             in_stack_00000030,var_bp_40h);
    } while( true );
}


/* fcn.000141b8 @ 0x141b8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000141b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                    int32_t arg_70h)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t auStackX_8 [8];
    uchar auStackX_10 [8];
    int *in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_48 [8];
    int64_t iStack_40;
    int64_t var_10h;
    uint32_t var_8h;
    
    cVar1 = *(arg1 + 0xd8);
    iVar6 = *(arg1 + 0xd0);
    iStack_40 = 0;
    iVar4 = *(arg1 + 0xc0);
    *arg2 = 0;
    auStackX_8[0] = cVar1 * '\x12';
    iVar3 = fcn.00015d4c(iVar4,arg3,iVar6,auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                         in_stack_00000030,var_40h);
    iVar6 = -0x7ffffffffffffff9;
    do {
        iVar7 = -0x7ffffffffffffffa;
        if ((iVar3 == -0x7ffffffffffffffa) || (iVar3 == -0x7ffffffffffffffc)) goto code_r0x000143c1;
        if ((iVar3 == -0x7ffffffffffffffe) || (iVar3 == -0x7ffffffffffffffd)) {
            iVar6 = iVar3;
code_r0x000143f1:
            *arg2 = 0;
            return iVar6;
        }
        iVar4 = fcn.00012ed0(CONCAT71(iVar4 >> 8,auStack_48[0]));
        if ((iVar4 == -0x7fffffffffffffee) || (iVar4 == iVar7)) goto code_r0x000143c1;
        if (iVar4 == -0x7ffffffffffffff9) {
            (**(*(arg1 + 0xc0) + 0x10))(*(arg1 + 0xc0));
            goto code_r0x000143f1;
        }
        uVar5 = CONCAT71(0x80000000000000,auStackX_10[0]);
        iVar4 = fcn.00012f1c(uVar5);
        if (iVar4 == iVar7) {
            (**(*(arg1 + 0xc0) + 0x18))(*(arg1 + 0xc0));
code_r0x000143c1:
            *arg2 = 1;
            return -0x7ffffffffffffff9;
        }
        if (iVar4 == -0x7ffffffffffffff9) goto code_r0x000143f1;
        if ((uVar5 != '\x02') && (-1 < iVar3)) {
            return iVar3;
        }
        fcn.000129b8(arg1,*(arg1 + 0xd0),auStackX_8[0] / 0x12,&iStack_40);
        if (iStack_40 == 2) goto code_r0x000143c1;
        if ((iStack_40 != 3) || (var_40h < 2)) goto code_r0x000143f1;
        iStack_40 = 0;
        var_40h._0_4_ = var_40h >> 1;
        iVar2 = *(*(arg1 + 0x28) + 0xc);
        *arg2 = 0;
        *in_stack_00000028 = iVar2 * var_40h;
        auStackX_8[0] = *(arg1 + 0xd8) * '\x12';
        iVar4 = *(arg1 + 0xc0);
        iVar3 = fcn.00015d4c(iVar4,arg3,*(arg1 + 0xd0),auStackX_8,auStack_48,auStackX_10,arg4,in_stack_00000028,
                             in_stack_00000030,var_40h);
    } while( true );
}


/* fcn.00014780 @ 0x14780 */

int64_t fcn.00014780(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint in_stack_00000028;
    uint32_t in_stack_00000030;
    uint in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t iStack0000000000000048;
    
    iStack0000000000000048 = 0;
    piVar3 = fcn.00015860(0x60);
    if (piVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        piVar1 = piVar3 + 10;
        *piVar1 = in_stack_00000040 + 0x10;
        piVar2 = *(in_stack_00000040 + 0x18);
        piVar3[0xb] = piVar2;
        *piVar2 = piVar1;
        iVar4 = *0x16ef8;
        *(in_stack_00000040 + 0x18) = piVar1;
        (**(iVar4 + 0x20))(uVar5);
        *(piVar3 + 3) = 0x6c;
        iVar4 = fcn.00015860(0x6c);
        piVar3[2] = iVar4;
        if (iVar4 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            *(piVar3 + 0x44) = arg3;
            *piVar3 = arg1;
            *(piVar3 + 6) = in_stack_00000028;
            piVar3[7] = in_stack_00000030;
            *(piVar3 + 8) = in_stack_00000038;
            iVar4 = *0x16ef8;
            piVar3[1] = arg2;
            piVar3[4] = arg4;
            piVar3[9] = in_stack_00000040;
            iVar4 = (**(iVar4 + 0x50))(0x200,0x10,0x143f8,piVar3,&stack0x00000048);
            if ((-1 < iVar4) && (iVar4 = fcn.000160d4(*(arg1 + 0xc0),piVar3[1],piVar3[2],piVar3 + 3), -1 < iVar4)) {
                return 0;
            }
        }
        if (iStack0000000000000048 != 0) {
            (**(*0x16ef8 + 0x70))();
        }
        if (piVar3[2] != 0) {
            (**(*0x16ef8 + 0x48))();
        }
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        *(*piVar1 + 8) = piVar3[0xb];
        *piVar3[0xb] = *piVar1;
        (**(*0x16ef8 + 0x20))(uVar5);
        (**(*0x16ef8 + 0x48))(piVar3);
    }
    return iVar4;
}


/* fcn.00014ba0 @ 0x14ba0 */

int64_t fcn.00014ba0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint in_stack_00000028;
    int64_t in_stack_00000030;
    uint in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t iStack0000000000000048;
    
    iStack0000000000000048 = 0;
    piVar3 = fcn.00015860(0x60);
    if (piVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        piVar1 = piVar3 + 10;
        *piVar1 = in_stack_00000040 + 0x10;
        piVar2 = *(in_stack_00000040 + 0x18);
        piVar3[0xb] = piVar2;
        *piVar2 = piVar1;
        iVar4 = *0x16ef8;
        *(in_stack_00000040 + 0x18) = piVar1;
        (**(iVar4 + 0x20))(uVar5);
        *(piVar3 + 3) = 0x6c;
        iVar4 = fcn.00015860(0x6c);
        piVar3[2] = iVar4;
        if (iVar4 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            *(piVar3 + 0x44) = arg3;
            *piVar3 = arg1;
            *(piVar3 + 6) = in_stack_00000028;
            piVar3[7] = in_stack_00000030;
            *(piVar3 + 8) = in_stack_00000038;
            iVar4 = *0x16ef8;
            piVar3[1] = arg2;
            piVar3[4] = arg4;
            piVar3[9] = in_stack_00000040;
            iVar4 = (**(iVar4 + 0x50))(0x200,0x10,0x143f8,piVar3,&stack0x00000048);
            if ((-1 < iVar4) && (iVar4 = fcn.00016484(*(arg1 + 0xc0),piVar3[1],piVar3[2],piVar3 + 3), -1 < iVar4)) {
                return 0;
            }
        }
        if (iStack0000000000000048 != 0) {
            (**(*0x16ef8 + 0x70))();
        }
        if (piVar3[2] != 0) {
            (**(*0x16ef8 + 0x48))();
        }
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        *(*piVar1 + 8) = piVar3[0xb];
        *piVar3[0xb] = *piVar1;
        (**(*0x16ef8 + 0x20))(uVar5);
        (**(*0x16ef8 + 0x48))(piVar3);
    }
    return iVar4;
}


/* fcn.00014990 @ 0x14990 */

int64_t fcn.00014990(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint in_stack_00000028;
    uint32_t in_stack_00000030;
    uint in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t iStack0000000000000048;
    
    iStack0000000000000048 = 0;
    piVar3 = fcn.00015860(0x60);
    if (piVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        piVar1 = piVar3 + 10;
        *piVar1 = in_stack_00000040 + 0x10;
        piVar2 = *(in_stack_00000040 + 0x18);
        piVar3[0xb] = piVar2;
        *piVar2 = piVar1;
        iVar4 = *0x16ef8;
        *(in_stack_00000040 + 0x18) = piVar1;
        (**(iVar4 + 0x20))(uVar5);
        *(piVar3 + 3) = 0x6c;
        iVar4 = fcn.00015860(0x6c);
        piVar3[2] = iVar4;
        if (iVar4 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            *(piVar3 + 0x44) = arg3;
            *piVar3 = arg1;
            *(piVar3 + 6) = in_stack_00000028;
            piVar3[7] = in_stack_00000030;
            *(piVar3 + 8) = in_stack_00000038;
            iVar4 = *0x16ef8;
            piVar3[1] = arg2;
            piVar3[5] = arg4;
            piVar3[9] = in_stack_00000040;
            iVar4 = (**(iVar4 + 0x50))(0x200,0x10,0x143f8,piVar3,&stack0x00000048);
            if ((-1 < iVar4) && (iVar4 = fcn.000162ac(*(arg1 + 0xc0),piVar3[1],piVar3[2],piVar3 + 3), -1 < iVar4)) {
                return 0;
            }
        }
        if (iStack0000000000000048 != 0) {
            (**(*0x16ef8 + 0x70))();
        }
        if (piVar3[2] != 0) {
            (**(*0x16ef8 + 0x48))();
        }
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        *(*piVar1 + 8) = piVar3[0xb];
        *piVar3[0xb] = *piVar1;
        (**(*0x16ef8 + 0x20))(uVar5);
        (**(*0x16ef8 + 0x48))(piVar3);
    }
    return iVar4;
}


/* fcn.00014db0 @ 0x14db0 */

int64_t fcn.00014db0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint in_stack_00000028;
    int64_t in_stack_00000030;
    uint in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t iStack0000000000000048;
    
    iStack0000000000000048 = 0;
    piVar3 = fcn.00015860(0x60);
    if (piVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        piVar1 = piVar3 + 10;
        *piVar1 = in_stack_00000040 + 0x10;
        piVar2 = *(in_stack_00000040 + 0x18);
        piVar3[0xb] = piVar2;
        *piVar2 = piVar1;
        iVar4 = *0x16ef8;
        *(in_stack_00000040 + 0x18) = piVar1;
        (**(iVar4 + 0x20))(uVar5);
        *(piVar3 + 3) = 0x6c;
        iVar4 = fcn.00015860(0x6c);
        piVar3[2] = iVar4;
        if (iVar4 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            *(piVar3 + 0x44) = arg3;
            *piVar3 = arg1;
            *(piVar3 + 6) = in_stack_00000028;
            piVar3[7] = in_stack_00000030;
            *(piVar3 + 8) = in_stack_00000038;
            iVar4 = *0x16ef8;
            piVar3[1] = arg2;
            piVar3[5] = arg4;
            piVar3[9] = in_stack_00000040;
            iVar4 = (**(iVar4 + 0x50))(0x200,0x10,0x143f8,piVar3,&stack0x00000048);
            if ((-1 < iVar4) && (iVar4 = fcn.000166a4(*(arg1 + 0xc0),piVar3[1],piVar3[2],piVar3 + 3), -1 < iVar4)) {
                return 0;
            }
        }
        if (iStack0000000000000048 != 0) {
            (**(*0x16ef8 + 0x70))();
        }
        if (piVar3[2] != 0) {
            (**(*0x16ef8 + 0x48))();
        }
        uVar5 = (**(*0x16ef8 + 0x18))(0x10);
        *(*piVar1 + 8) = piVar3[0xb];
        *piVar3[0xb] = *piVar1;
        (**(*0x16ef8 + 0x20))(uVar5);
        (**(*0x16ef8 + 0x48))(piVar3);
    }
    return iVar4;
}


/* fcn.00015a5c @ 0x15a5c */

void fcn.00015a5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int64_t arg_40h,int64_t arg_48h,int32_t arg_50h,int16_t arg_58h)

{
    uint16_t uVar1;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,10);
    var_38h = arg_40h;
    var_50h._0_1_ = 0x28;
    var_10h = 10;
    var_18h = *arg_48h;
    var_20h = &var_50h;
    uVar1 = arg_50h >> 0x10;
    var_50h._2_4_ = CONCAT22(arg_50h << 8 | arg_50h >> 8,uVar1 << 8 | uVar1 >> 8);
    *NULL = arg_58h << 8 | arg_58h >> 8;
    var_ch = *arg4;
    var_40h = arg2;
    var_28h = arg3;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    *arg_48h = var_18h;
    return;
}


/* fcn.00015b40 @ 0x15b40 */

void fcn.00015b40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int64_t arg_40h,int64_t arg_48h,int32_t arg_50h,int16_t arg_58h)

{
    uint16_t uVar1;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_14h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,10);
    var_30h = arg_40h;
    var_50h._0_2_ = 0x82a;
    var_10h = 0x10a;
    var_14h = *arg_48h;
    var_20h = &var_50h;
    uVar1 = arg_50h >> 0x10;
    var_50h._2_4_ = CONCAT22(arg_50h << 8 | arg_50h >> 8,uVar1 << 8 | uVar1 >> 8);
    *NULL = arg_58h << 8 | arg_58h >> 8;
    var_ch = *arg4;
    var_40h = arg2;
    var_28h = arg3;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    *arg_48h = var_14h;
    return;
}


/* fcn.00015c24 @ 0x15c24 */

void fcn.00015c24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int64_t arg_40h,int64_t arg_48h,int64_t arg_50h,int32_t arg_58h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t var_50h;
    int32_t var_46h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,0x10);
    var_38h = arg_40h;
    var_50h._0_1_ = 0x88;
    var_10h = 0x10;
    var_18h = *arg_48h;
    var_20h = &var_50h;
    uVar1 = arg_50h >> 0x10;
    uVar2 = arg_50h >> 0x20;
    uVar3 = arg_50h >> 0x30;
    *0x10 = CONCAT62(CONCAT42(CONCAT22(arg_50h << 8 | arg_50h >> 8,uVar1 << 8 | uVar1 >> 8),uVar2 << 8 | uVar2 >> 8),
                     uVar3 << 8 | uVar3 >> 8);
    uVar1 = arg_58h >> 0x10;
    var_46h = CONCAT22(arg_58h << 8 | arg_58h >> 8,uVar1 << 8 | uVar1 >> 8);
    var_ch = *arg4;
    var_40h = arg2;
    var_28h = arg3;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    *arg_48h = var_18h;
    return;
}


/* fcn.00015d4c @ 0x15d4c */

void fcn.00015d4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h,
                 int64_t arg_40h,int64_t arg_48h,int64_t arg_50h,int32_t arg_58h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t var_50h;
    int32_t var_46h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_14h;
    int16_t var_10h;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    
    fcn.000102c0(&var_40h,0x38);
    fcn.000102c0(&var_50h,0x10);
    var_30h = arg_40h;
    var_50h._0_2_ = 0x88a;
    var_10h = 0x110;
    var_14h = *arg_48h;
    var_20h = &var_50h;
    uVar1 = arg_50h >> 0x10;
    uVar2 = arg_50h >> 0x20;
    uVar3 = arg_50h >> 0x30;
    *0x10 = CONCAT62(CONCAT42(CONCAT22(arg_50h << 8 | arg_50h >> 8,uVar1 << 8 | uVar1 >> 8),uVar2 << 8 | uVar2 >> 8),
                     uVar3 << 8 | uVar3 >> 8);
    uVar1 = arg_58h >> 0x10;
    var_46h = CONCAT22(arg_58h << 8 | arg_58h >> 8,uVar1 << 8 | uVar1 >> 8);
    var_ch = *arg4;
    var_40h = arg2;
    var_28h = arg3;
    (**(arg1 + 0x20))(arg1,&var_40h,0);
    *arg_30h = var_eh;
    *arg_38h = var_dh;
    *arg4 = var_ch;
    *arg_48h = var_14h;
    return;
}


/* fcn.000160d4 @ 0x160d4 */

int64_t fcn.000160d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uchar *puVar4;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint *in_stack_00000040;
    int32_t in_stack_00000048;
    uint16_t in_stack_00000050;
    int64_t in_stack_00000058;
    
    iVar2 = in_stack_00000058;
    if (in_stack_00000058 == 0) {
        iVar2 = fcn.00015a5c(arg1,arg2,arg3,arg4,in_stack_00000028,in_stack_00000030,in_stack_00000038,
                             in_stack_00000040,in_stack_00000048,in_stack_00000050);
    }
    else {
        piVar3 = fcn.00015860(0x60);
        if (piVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            puVar4 = fcn.00015860(10);
            if (puVar4 == NULL) {
                iVar2 = -0x7ffffffffffffff7;
            }
            else {
                piVar3[8] = in_stack_00000028;
                piVar3[9] = in_stack_00000030;
                piVar3[7] = arg4;
                piVar3[0xb] = iVar2;
                piVar3[1] = in_stack_00000038;
                *piVar3 = arg2;
                piVar3[3] = arg3;
                uVar1 = in_stack_00000048 >> 0x10;
                *(piVar3 + 5) = *in_stack_00000040;
                piVar3[4] = puVar4;
                *puVar4 = 0x28;
                *(puVar4 + 2) = CONCAT22(in_stack_00000048 << 8 | in_stack_00000048 >> 8,uVar1 << 8 | uVar1 >> 8);
                *(puVar4 + 7) = in_stack_00000050 << 8 | in_stack_00000050 >> 8;
                *(piVar3 + 6) = 10;
                *(piVar3 + 0x34) = *arg4;
                iVar2 = (**(*0x16ef8 + 0x50))(0x200,0x10,0x1603c,piVar3,&stack0x00000058);
                if (-1 < iVar2) {
                    iVar2 = (**(arg1 + 0x20))(arg1,piVar3,in_stack_00000058);
                    if (-1 < iVar2) {
                        return 0;
                    }
                    (**(*0x16ef8 + 0x70))(in_stack_00000058);
                }
            }
            (**(*0x16ef8 + 0x48))(piVar3);
        }
    }
    return iVar2;
}


/* fcn.000162ac @ 0x162ac */

int64_t fcn.000162ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uchar *puVar4;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint *in_stack_00000040;
    int32_t in_stack_00000048;
    uint16_t in_stack_00000050;
    int64_t in_stack_00000058;
    
    iVar2 = in_stack_00000058;
    if (in_stack_00000058 == 0) {
        iVar2 = fcn.00015b40(arg1,arg2,arg3,arg4,in_stack_00000028,in_stack_00000030,in_stack_00000038,
                             in_stack_00000040,in_stack_00000048,in_stack_00000050);
    }
    else {
        piVar3 = fcn.00015860(0x60);
        if (piVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            puVar4 = fcn.00015860(10);
            if (puVar4 == NULL) {
                iVar2 = -0x7ffffffffffffff7;
            }
            else {
                piVar3[8] = in_stack_00000028;
                piVar3[9] = in_stack_00000030;
                piVar3[7] = arg4;
                piVar3[0xb] = iVar2;
                piVar3[2] = in_stack_00000038;
                *piVar3 = arg2;
                piVar3[3] = arg3;
                uVar1 = in_stack_00000048 >> 0x10;
                *(piVar3 + 0x2c) = *in_stack_00000040;
                piVar3[4] = puVar4;
                *puVar4 = 0x2a;
                *(puVar4 + 2) = CONCAT22(in_stack_00000048 << 8 | in_stack_00000048 >> 8,uVar1 << 8 | uVar1 >> 8);
                *(puVar4 + 7) = in_stack_00000050 << 8 | in_stack_00000050 >> 8;
                *(piVar3 + 6) = 0x10a;
                *(piVar3 + 0x34) = *arg4;
                iVar2 = (**(*0x16ef8 + 0x50))(0x200,0x10,0x1603c,piVar3,&stack0x00000058);
                if (-1 < iVar2) {
                    iVar2 = (**(arg1 + 0x20))(arg1,piVar3,in_stack_00000058);
                    if (-1 < iVar2) {
                        return 0;
                    }
                    (**(*0x16ef8 + 0x70))(in_stack_00000058);
                }
            }
            (**(*0x16ef8 + 0x48))(piVar3);
        }
    }
    return iVar2;
}


/* fcn.00016484 @ 0x16484 */

int64_t fcn.00016484(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uchar *puVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint *in_stack_00000040;
    int64_t in_stack_00000048;
    int32_t in_stack_00000050;
    int64_t in_stack_00000058;
    
    iVar3 = in_stack_00000058;
    if (in_stack_00000058 == 0) {
        iVar3 = fcn.00015c24(arg1,arg2,arg3,arg4,in_stack_00000028,in_stack_00000030,in_stack_00000038,
                             in_stack_00000040,in_stack_00000048,in_stack_00000050);
    }
    else {
        piVar4 = fcn.00015860(0x60);
        if (piVar4 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            puVar5 = fcn.00015860(0x10);
            if (puVar5 == NULL) {
                iVar3 = -0x7ffffffffffffff7;
            }
            else {
                piVar4[8] = in_stack_00000028;
                piVar4[9] = in_stack_00000030;
                piVar4[7] = arg4;
                piVar4[0xb] = iVar3;
                piVar4[1] = in_stack_00000038;
                *piVar4 = arg2;
                piVar4[3] = arg3;
                *(piVar4 + 5) = *in_stack_00000040;
                piVar4[4] = puVar5;
                uVar1 = in_stack_00000048 >> 0x10;
                *puVar5 = 0x88;
                uVar6 = in_stack_00000048 >> 0x20;
                uVar7 = in_stack_00000048 >> 0x30;
                uVar2 = in_stack_00000050 >> 0x10;
                *(puVar5 + 2) =
                     CONCAT62(CONCAT42(CONCAT22(in_stack_00000048 << 8 | in_stack_00000048 >> 8,uVar1 << 8 | uVar1 >> 8
                                               ),uVar6 << 8 | uVar6 >> 8),uVar7 << 8 | uVar7 >> 8);
                *(puVar5 + 10) = CONCAT22(in_stack_00000050 << 8 | in_stack_00000050 >> 8,uVar2 << 8 | uVar2 >> 8);
                *(piVar4 + 6) = 0x10;
                *(piVar4 + 0x34) = *arg4;
                iVar3 = (**(*0x16ef8 + 0x50))(0x200,0x10,0x1603c,piVar4,&stack0x00000058);
                if (-1 < iVar3) {
                    iVar3 = (**(arg1 + 0x20))(arg1,piVar4,in_stack_00000058);
                    if (-1 < iVar3) {
                        return 0;
                    }
                    (**(*0x16ef8 + 0x70))(in_stack_00000058);
                }
            }
            (**(*0x16ef8 + 0x48))(piVar4);
        }
    }
    return iVar3;
}


/* fcn.000166a4 @ 0x166a4 */

int64_t fcn.000166a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uchar *puVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint *in_stack_00000040;
    int64_t in_stack_00000048;
    int32_t in_stack_00000050;
    int64_t in_stack_00000058;
    
    iVar3 = in_stack_00000058;
    if (in_stack_00000058 == 0) {
        iVar3 = fcn.00015d4c(arg1,arg2,arg3,arg4,in_stack_00000028,in_stack_00000030,in_stack_00000038,
                             in_stack_00000040,in_stack_00000048,in_stack_00000050);
    }
    else {
        piVar4 = fcn.00015860(0x60);
        if (piVar4 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            puVar5 = fcn.00015860(0x10);
            if (puVar5 == NULL) {
                iVar3 = -0x7ffffffffffffff7;
            }
            else {
                piVar4[8] = in_stack_00000028;
                piVar4[9] = in_stack_00000030;
                piVar4[7] = arg4;
                piVar4[0xb] = iVar3;
                piVar4[2] = in_stack_00000038;
                *piVar4 = arg2;
                piVar4[3] = arg3;
                *(piVar4 + 0x2c) = *in_stack_00000040;
                piVar4[4] = puVar5;
                uVar1 = in_stack_00000048 >> 0x10;
                *puVar5 = 0x8a;
                uVar6 = in_stack_00000048 >> 0x20;
                uVar7 = in_stack_00000048 >> 0x30;
                uVar2 = in_stack_00000050 >> 0x10;
                *(puVar5 + 2) =
                     CONCAT62(CONCAT42(CONCAT22(in_stack_00000048 << 8 | in_stack_00000048 >> 8,uVar1 << 8 | uVar1 >> 8
                                               ),uVar6 << 8 | uVar6 >> 8),uVar7 << 8 | uVar7 >> 8);
                *(puVar5 + 10) = CONCAT22(in_stack_00000050 << 8 | in_stack_00000050 >> 8,uVar2 << 8 | uVar2 >> 8);
                *(piVar4 + 6) = 0x110;
                *(piVar4 + 0x34) = *arg4;
                iVar3 = (**(*0x16ef8 + 0x50))(0x200,0x10,0x1603c,piVar4,&stack0x00000058);
                if (-1 < iVar3) {
                    iVar3 = (**(arg1 + 0x20))(arg1,piVar4,in_stack_00000058);
                    if (-1 < iVar3) {
                        return 0;
                    }
                    (**(*0x16ef8 + 0x70))(in_stack_00000058);
                }
            }
            (**(*0x16ef8 + 0x48))(piVar4);
        }
    }
    return iVar3;
}


/* fcn.00016958 @ 0x16958 */

ulong fcn.00016958(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.000168c4(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00016a5d:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x00016a53:
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
code_r0x00016a6b:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00016a6b;
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
                            goto code_r0x00016a53;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00016a5d;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000168c4 @ 0x168c4 */

ulong fcn.000168c4(int64_t arg1,int64_t arg2)

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
code_r0x00016924:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00016924;
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


/* fcn.0001588c @ 0x1588c */

void fcn.0001588c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015830();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


