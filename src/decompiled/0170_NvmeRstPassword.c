// decompiled by r2ghidra: 0170_NvmeRstPassword.pe32
// functions: 11

/* entry0 @ 0x102dc */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11858 = *(arg2 + 0x60);
    *0x11800 = arg1;
    *0x11808 = arg1;
    *0x11850 = arg2;
    (**(*0x11858 + 0x148))(0x11808,0x11780,0x117e0,0);
    return;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 5248 named .text
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


/* fcn.000115d0 @ 0x115d0 */

uint64_t fcn.000115d0(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_R8;
    uint64_t uStackX_10;
    
    uVar3 = CONCAT44(in_R8,arg2);
    uStackX_10 = arg1;
    if (uVar3 < 0x1001) {
        iVar1 = (**(*0x11858 + 0x28))(0,4,1,&uStackX_10);
        if (-1 < iVar1) {
            return uStackX_10;
        }
    }
    else {
        iVar2 = ((arg2 & 0xfff) != 0) + 1 + (uVar3 >> 0xc);
        iVar1 = (**(*0x11858 + 0x28))(0,4,iVar2);
        if (-1 < iVar1) {
            uVar3 = uStackX_10 + (uVar3 - 1) & ~(uVar3 - 1);
            iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
            if (iVar1 != 0) {
                (**(*0x11858 + 0x30))(uStackX_10,iVar1);
            }
            uStackX_10 = uVar3 + 0x1000;
            iVar1 = (iVar2 - iVar1) + -1;
            if (iVar1 != 0) {
                (**(*0x11858 + 0x30))(uStackX_10,iVar1);
            }
            return uVar3;
        }
    }
    return 0;
}


/* fcn.000116c4 @ 0x116c4 */

ulong fcn.000116c4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11858 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000106ac @ 0x106ac */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.000106ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    ulong uVar1;
    uchar auStack_68 [2];
    uchar uStack_66;
    int64_t var_50h;
    int64_t iStack_50;
    uchar *puStack_48;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    ushort uStack_20;
    int32_t var_bp_10h;
    int16_t var_bp_8h;
    
    arg1_00 = fcn.000115d0(arg1,arg2,*(*arg1 + 4));
    if (arg1_00 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        fcn.00010280(auStack_68,0x14);
        fcn.00010280(arg1_00,0x14);
        fcn.00010280(&iStack_50,0x38);
        puStack_48 = auStack_68;
        uStack_66 = 0xec;
        uStack_20 = 0x8004;
        var_bp_20h._0_4_ = 0x200;
        var_38h = 30000000;
        iStack_50 = arg1_00;
        var_30h = arg4;
        uVar1 = (**(arg1 + 8))(arg1,arg2 & 0xffff,arg3 & 0xffff,&iStack_50,0);
        (**(*0x11858 + 0x30))(arg1_00,1);
    }
    return uVar1;
}


/* fcn.0001079c @ 0x1079c */

ulong fcn.0001079c(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    ushort uVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t arg1_00;
    int64_t iStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    uchar uStack_18;
    
    piVar3 = *(arg1 + 0x18);
    uVar1 = *(arg1 + 0x60);
    uVar2 = *(arg1 + 0x62);
    if (piVar3 == NULL) {
        uVar4 = 0x8000000000000002;
    }
    else {
        arg1_00 = fcn.000115d0(arg1,arg2,*(*piVar3 + 4));
        if (arg1_00 == 0) {
            uVar4 = 0x8000000000000009;
        }
        else {
            fcn.00010280(arg1_00,0x14);
            fcn.00010280(&iStack_48,0x38);
            uStack_38 = 30000000;
            uStack_18 = 2;
            iStack_48 = arg1_00;
            iStack_40 = arg2;
            uVar4 = (*piVar3[1])(piVar3,uVar1,uVar2,&iStack_48,0);
            (**(*0x11858 + 0x30))(arg1_00,1);
        }
    }
    return uVar4;
}


/* fcn.00010324 @ 0x10324 */

int64_t fcn.00010324(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int16_t *piVar4;
    int iVar5;
    uint8_t *puVar6;
    uint16_t *puVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    char acStackX_20 [4];
    char acStackX_24 [4];
    ulong *apuStack_88 [2];
    uint16_t auStack_78 [39];
    int16_t aiStack_2a [9];
    
    acStackX_20 = str.en_US._0_4_;
    acStackX_24._0_2_ = str.en_US._4_2_;
    fcn.00010280(auStack_78,0x52);
    puVar6 = arg2 + 0x18 + (-(arg3 != '\0') & 0x1e);
    puVar7 = auStack_78;
    iVar8 = 0x28;
    do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    aiStack_2a[1] = 0;
    uVar10 = 1;
    if (arg3 != '\0') {
        do {
            uVar3 = uVar10 - 1;
            uVar9 = uVar10 + 2;
            uVar2 = auStack_78[uVar10];
            auStack_78[uVar10] = auStack_78[uVar3];
            auStack_78[uVar3] = uVar2;
            uVar10 = uVar9;
        } while (uVar9 < 0x28);
    }
    iVar5 = 0x27;
    piVar4 = aiStack_2a;
    do {
        if (*piVar4 != 0x20) break;
        *piVar4 = 0;
        piVar4 = piVar4 + -1;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar8 = (**(*0x11858 + 0x40))(4,0x20,apuStack_88);
    if (-1 < iVar8) {
        (**(*0x11858 + 0x168))(apuStack_88[0],0x20,0);
        iVar8 = (**(*0x11858 + 0x40))(4,6,apuStack_88[0]);
        if (-1 < iVar8) {
            iVar8 = (**(*0x11858 + 0x40))(4,0x52,apuStack_88[0] + 1);
            if (-1 < iVar8) {
                (**(*0x11858 + 0x160))(*apuStack_88[0],acStackX_20,6);
                (**(*0x11858 + 0x160))(apuStack_88[0][1],auStack_78,0x52);
                apuStack_88[0][2] = 0;
                apuStack_88[0][3] = 0;
                *(arg1 + 0x40) = apuStack_88[0];
            }
        }
    }
    return iVar8;
}


/* fcn.0001087c @ 0x1087c */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_bp_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.0001087c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint *arg1_00;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint16_t auStackX_18 [4];
    uint16_t auStackX_20 [4];
    int64_t var_50h;
    int64_t var_58h;
    ulong uStack_88;
    int64_t *piStack_80;
    ulong uStack_78;
    char *pcStack_70;
    int64_t iStack_68;
    uint64_t uStack_60;
    int64_t var_50h_2;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_bp_28h;
    int64_t var_20h;
    int64_t var_18h;
    int8_t var_ch;
    
    pcStack_70 = NULL;
    var_50h_2 = 0;
    iVar1 = (**(*0x11858 + 0x98))(arg2,0x11750,&uStack_78);
    if (-1 < iVar1) {
        iVar4 = 0x11700;
        iVar1 = (**(*0x11858 + 0x98))(arg2,0x11700,&piStack_80);
        if (-1 < iVar1) {
            iVar4 = fcn.000115d0(*piStack_80,iVar4,*(*piStack_80 + 4));
            if (iVar4 == 0) {
code_r0x00010906:
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                auStackX_18[0] = 0xffff;
                iVar1 = (*piStack_80[2])(piStack_80,auStackX_18);
                while (-1 < iVar1) {
                    auStackX_20[0] = 0xffff;
                    iVar1 = (*piStack_80[3])(piStack_80,auStackX_18[0],auStackX_20);
                    while (-1 < iVar1) {
                        iVar1 = fcn.000116c4();
                        if ((iVar1 == 0) || (arg1_00 = fcn.00010280(iVar1,0xb8), arg1_00 == NULL))
                        goto code_r0x00010906;
                        uStack_88 = 0;
                        iVar1 = (**(*0x11858 + 0x148))(&uStack_88,0x117c0,arg1_00,0);
                        if ((iVar1 < 0) ||
                           (iVar1 = (**(*0x11858 + 0x118))(arg2,0x11750,&uStack_78,*(arg1 + 0x28),uStack_88,8),
                           iVar1 < 0)) {
code_r0x00010d97:
                            (**(*0x11858 + 0x48))(arg1_00);
                        }
                        else {
                            iVar1 = fcn.000106ac(piStack_80,auStackX_18[0],auStackX_20[0],iVar4);
                            if (-1 < iVar1) {
                                iVar2 = fcn.000116c4();
                                iVar1 = 0;
                                if (iVar2 != 0) {
                                    iVar1 = fcn.00010280(iVar2,0x200);
                                }
                                *(arg1_00 + 0x2c) = iVar1;
                                if (iVar1 == 0) goto code_r0x00010906;
                                *arg1_00 = 0x54535224;
                                *(arg1_00 + 0x13) = 1;
                                *(arg1_00 + 2) = uStack_78;
                                *(arg1_00 + 0x14) = arg2;
                                *(arg1_00 + 0x1a) = uStack_88;
                                *(arg1_00 + 6) = piStack_80;
                                *(arg1_00 + 0x18) = auStackX_18[0];
                                *(arg1_00 + 0x62) = auStackX_20[0];
                                iVar2 = *0x11858;
                                arg1_00[0x1c] = 3;
                                (**(iVar2 + 0x160))(iVar1,iVar4,0x200);
                                (**(*0x11858 + 0x160))(arg1_00 + 0x1d,iVar4 + 0x36,0x28);
                                uVar5 = 0;
                                (**(*0x11858 + 0x160))(arg1_00 + 0x27,iVar4 + 0x14,0x14);
                                if (((*(iVar4 + 0x100) & 6) == 2) || ((*(iVar4 + 0x100) & 8) != 0)) {
                                    iVar1 = *(arg1_00 + 6);
                                    if (((*(*(arg1_00 + 0x2c) + 0x9c) & 0x40) != 0) &&
                                       ((*(*(arg1_00 + 0x2c) + 0x9e) & 0x40) != 0)) {
                                        fcn.00010280(&var_48h,0x14);
                                        var_48h._2_2_ = 0x90ef;
                                        var_40h._4_1_ = 6;
                                        iVar2 = fcn.0001079c(arg1_00,&var_48h);
                                        if ((-1 < iVar2) &&
                                           (iVar1 = (**(iVar1 + 0x30))(iVar1,*(arg1_00 + 0x18)), -1 < iVar1)) {
                                            uVar5 = auStackX_20[0];
                                            iVar1 = fcn.000106ac(piStack_80,auStackX_18[0],uVar5,iVar4);
                                            if (-1 < iVar1) {
                                                uVar5 = 0x200;
                                                (**(*0x11858 + 0x160))(*(arg1_00 + 0x2c),iVar4,0x200);
                                            }
                                        }
                                    }
                                }
                                fcn.00010324(arg1_00,iVar4,CONCAT71(uVar5 >> 8,*(arg1_00 + 0x13)));
                                iVar1 = (**(*0x11858 + 0x128))(arg2,0x11750,&iStack_68);
                                if (iVar1 < 0) {
code_r0x00010d7c:
                                    (**(*0x11858 + 0x90))(uStack_88,0x117c0,0);
                                    goto code_r0x00010d97;
                                }
                                uVar5 = 0;
                                if (uStack_60 != 0) {
                                    iVar2 = 0;
                                    uVar3 = uStack_60;
                                    do {
                                        if ((*(iVar2 + 0x10 + iStack_68) & 8) != 0) {
                                            iVar1 = (**(*0x11858 + 0x98))
                                                              (*(iVar2 + 8 + iStack_68),0x11730,&pcStack_70);
                                            if ((-1 < iVar1) && ((*(iVar4 + 0x60) & 1) != 0)) {
                                                for (pcVar6 = pcStack_70;
                                                    ((*pcVar6 != '\x7f' || (pcVar6[1] != -1)) &&
                                                    ((*pcVar6 != '\x03' || (pcVar6[1] != '\x12'))));
                                                    pcVar6 = pcVar6 + *(pcVar6 + 2)) {
                                                }
                                                if ((((*pcVar6 != '\x7f') || (pcVar6[1] != -1)) &&
                                                    (*(pcVar6 + 4) == 1 << (auStackX_18[0] & 0x1f))) &&
                                                   ((*(pcVar6 + 8) == 5 &&
                                                    (iVar1 = (**(*0x11858 + 0x98))
                                                                       (*(iVar2 + 8 + iStack_68),0x11790,arg1_00 + 4)
                                                    , -1 < iVar1)))) break;
                                            }
                                            uVar3 = uStack_60;
                                        }
                                        uVar5 = uVar5 + 1;
                                        iVar2 = iVar2 + 0x18;
                                    } while (uVar5 < uVar3);
                                }
                                if ((*0x11848 != NULL) ||
                                   ((**(*0x11858 + 0x140))(0x11760,0,0x11848), *0x11848 != NULL)) {
                                    iVar1 = (***0x11848)(arg1_00,3);
                                }
                                if ((iVar1 < 0) || (*0x11848 == NULL)) {
                                    if (((*0x11840 == NULL) &&
                                        (iVar1 = (**(*0x11858 + 0x140))(0x117a0,0,0x11840), iVar1 < 0)) ||
                                       (*(arg1_00 + 4) == 0)) goto code_r0x00010d7c;
                                    iVar1 = (***0x11840)(arg1_00,3);
                                }
                                if (-1 < iVar1) {
                                    iVar1 = (**(*0x11858 + 0x98))(uStack_88,0x11740,&var_50h_2);
                                    if (-1 < iVar1) {
                                        (**(*0x11858 + 0x90))(uStack_88,0x11740,0);
                                    }
                                    (**(*0x11858 + 0x80))(&uStack_88,0x11740,0);
                                }
                            }
                        }
                        iVar1 = (*piStack_80[3])(piStack_80,auStackX_18[0],auStackX_20);
                    }
                    iVar1 = (*piStack_80[2])(piStack_80,auStackX_18);
                }
                (**(*0x11858 + 0x30))(iVar4,1);
            }
        }
    }
    return iVar1;
}


/* fcn.000104d8 @ 0x104d8 */

void fcn.000104d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    uchar uStack_24;
    uint32_t *puStack_20;
    uchar *puStack_18;
    
    (**(*0x11858 + 0x168))(&uStack_48,0x38);
    (**(*0x11858 + 0x168))(&uStack_78,0x2c);
    (**(*0x11858 + 0x168))(auStack_88,0x10);
    uStack_70 = arg2;
    uStack_78 = uStack_78 & 0xffffff06 | 6;
    puStack_20 = &uStack_78;
    uStack_38 = 0x1000;
    puStack_18 = auStack_88;
    uStack_48 = 10000000;
    uStack_24 = 0;
    uStack_64 = 1;
    uStack_74 = 4;
    iStack_40 = arg3;
    (**(arg1 + 8))(arg1,arg2 & 0xffffffff,&uStack_48,0);
    return;
}


/* fcn.000105b0 @ 0x105b0 */

uint64_t fcn.000105b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    bool bVar3;
    uint64_t uVar4;
    char *pcVar5;
    char *pcStackX_20;
    uchar auStack_28 [16];
    
    bVar3 = false;
    uVar4 = (**(*0x11858 + 0x98))(arg2,0x11730,&pcStackX_20);
    if (-1 < uVar4) {
        pcVar5 = pcStackX_20;
        do {
            if ((*pcVar5 == '\x7f') && (pcVar5[1] == -1)) goto code_r0x00010629;
            if (*pcVar5 == '\x03') {
                cVar1 = pcVar5[1];
                uVar4 = CONCAT71(uVar4 >> 8,cVar1);
                if (cVar1 == '\x12') goto code_r0x00010629;
                if (cVar1 == '\x17') goto code_r0x00010626;
            }
            uVar4 = *(pcVar5 + 2);
            pcVar5 = pcVar5 + uVar4;
        } while( true );
    }
code_r0x0001068f:
    return uVar4 & 0xffffffffffffff00;
code_r0x00010626:
    bVar3 = true;
code_r0x00010629:
    if ((*pcVar5 != '\x7f') || (pcVar5[1] != -1)) {
        if (bVar3) {
            uVar4 = (**(*0x11858 + 0x98))(arg2,0x11790,auStack_28);
            if (-1 < uVar4) {
                return CONCAT31((*(pcVar5 + 4) & 0x7fffffff) >> 8,
                                1 << (arg3 - 1U & 0x1f) == (*(pcVar5 + 4) & 0x7fffffff));
            }
        }
        else {
            uVar2 = *(pcVar5 + 4);
            uVar4 = uVar2;
            if (uVar2 == 1 << (arg3 - 1U & 0x1f)) {
                *(arg1 + 0x60) = uVar2;
                *(arg1 + 0x62) = *(pcVar5 + 6);
                return CONCAT11(uVar2 >> 8,1);
            }
        }
    }
    goto code_r0x0001068f;
}


/* fcn.00010e10 @ 0x10e10 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

uint64_t fcn.00010e10(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    uint64_t uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint32_t auStackX_20 [2];
    int32_t var_48h;
    uint *puStack_68;
    uint *puStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    uVar7 = 0;
    var_30h = 0;
    uStack_50 = 0;
    puStack_68 = NULL;
    fcn.0001087c(arg1,arg2);
    uVar3 = (**(*0x11858 + 0x98))(arg2,0x11750,&uStack_50);
    if (-1 < uVar3) {
        auStackX_20[0] = 0xffffffff;
        uVar4 = (**(arg3 + 0x10))(arg3,auStackX_20);
        while (-1 < uVar4) {
            uVar3 = (**(*0x11858 + 0x40))(4,0xb8,&puStack_68);
            if (uVar3 < 0) {
                return uVar3;
            }
            fcn.00010280(puStack_68,0xb8);
            uVar3 = (**(*0x11858 + 0x40))(4,0x1000,&puStack_60);
            if (uVar3 < 0) {
                return uVar3;
            }
            fcn.00010280(puStack_60,0x1000);
            iVar5 = fcn.000104d8(arg3,auStackX_20[0],puStack_60);
            if (iVar5 < 0) {
code_r0x00010f07:
                (**(*0x11858 + 0x48))(puStack_60);
                puVar6 = puStack_68;
code_r0x00011207:
                (**(*0x11858 + 0x48))(puVar6);
            }
            else {
                uStack_58 = 0;
                iVar5 = (**(*0x11858 + 0x148))(&uStack_58,0x117c0,puStack_68,0);
                if (iVar5 < 0) goto code_r0x00010f07;
                puVar8 = &uStack_50;
                iVar5 = (**(*0x11858 + 0x118))(arg2,0x11750,puVar8,*(arg1 + 0x28),uStack_58,8);
                if (iVar5 < 0) {
code_r0x000111de:
                    (**(*0x11858 + 0x90))(uStack_58,0x117c0,0);
                    (**(*0x11858 + 0x48))(puStack_68);
                    puVar6 = puStack_60;
                    goto code_r0x00011207;
                }
                *puStack_68 = 0x54535224;
                *(puStack_68 + 0x13) = 0;
                *(puStack_68 + 0x14) = arg2;
                *(puStack_68 + 0x1a) = uStack_58;
                *(puStack_68 + 2) = uStack_50;
                *(puStack_68 + 6) = arg3;
                puStack_68[0x12] = auStackX_20[0];
                *(puStack_68 + 8) = *(puStack_60 + 0x40);
                puStack_68[0x1c] = 3;
                fcn.00010324(puStack_68,puStack_60,CONCAT71(puVar8 >> 8,*(puStack_68 + 0x13)));
                (**(*0x11858 + 0x160))(puStack_68 + 0x1d,puStack_60 + 6,0x28);
                (**(*0x11858 + 0x160))(puStack_68 + 0x27,puStack_60 + 1,0x14);
                iVar5 = (**(*0x11858 + 0x128))(arg2,0x11750,&var_40h);
                if (iVar5 < 0) goto code_r0x000111de;
                if (var_38h != 0) {
                    uVar3 = var_38h;
                    uVar4 = uVar7;
                    uVar9 = uVar7;
                    do {
                        if ((*(uVar4 + 0x10 + var_40h) & 8) != 0) {
                            cVar2 = fcn.000105b0(puStack_68,*(uVar4 + 8 + var_40h),auStackX_20[0]);
                            if (cVar2 != '\0') {
                                uVar1 = *(uVar4 + 8 + var_40h);
                                *(puStack_68 + 0x1a) = uVar1;
                                iVar5 = (**(*0x11858 + 0x98))(uVar1,0x11790,puStack_68 + 4);
                                if (-1 < iVar5) break;
                            }
                            uVar3 = var_38h;
                        }
                        uVar9 = uVar9 + 1;
                        uVar4 = uVar4 + 0x18;
                    } while (uVar9 < uVar3);
                }
                if ((*0x11848 != NULL) || ((**(*0x11858 + 0x140))(0x11760,0,0x11848), *0x11848 != NULL)) {
                    iVar5 = (***0x11848)(puStack_68,3);
                }
                if ((iVar5 < 0) || (*0x11848 == NULL)) {
                    if (((*0x11840 == NULL) && (iVar5 = (**(*0x11858 + 0x140))(0x117a0,0,0x11840), iVar5 < 0)) ||
                       (*(puStack_68 + 4) == 0)) goto code_r0x000111de;
                    iVar5 = (***0x11840)(puStack_68,3);
                }
                if (-1 < iVar5) {
                    iVar5 = (**(*0x11858 + 0x98))(uStack_58,0x11740,&var_30h);
                    if (-1 < iVar5) {
                        (**(*0x11858 + 0x90))(uStack_58,0x11740,0);
                    }
                    (**(*0x11858 + 0x80))(&uStack_58,0x11740,0);
                }
            }
            uVar4 = (**(arg3 + 0x10))(arg3,auStackX_20);
        }
        uVar3 = uVar7;
        if (uVar4 != 0x800000000000000e) {
            uVar3 = uVar4;
        }
    }
    return uVar3;
}


