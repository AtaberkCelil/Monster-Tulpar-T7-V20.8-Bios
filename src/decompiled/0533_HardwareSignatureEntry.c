// decompiled by r2ghidra: 0533_HardwareSignatureEntry.pe32
// functions: 12

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11660 = *(arg2 + 0x60);
    *0x11668 = *(arg2 + 0x58);
    *0x11658 = arg2;
    fcn.0001030c(arg1,arg2);
    return;
}


/* fcn.0001030c @ 0x1030c */

int64_t fcn.0001030c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    uStackX_8 = 0;
    iStackX_10 = arg2;
    (**(*0x11660 + 0x168))(0x11680,0x78);
    iVar1 = (**(*0x11660 + 0x80))(&uStackX_8,71000,0,0x11530);
    if (-1 < iVar1) {
        iVar1 = (**(*0x11660 + 0x50))(0x200,8,0x10bb4,0,&iStackX_10);
        if (-1 < iVar1) {
            (**(*0x11660 + 0xa8))(0x114a0,iStackX_10,auStackX_18);
        }
        iVar1 = (**(*0x11660 + 0x50))(0x200,8,0x10bb4,0,&iStackX_10);
        if (-1 < iVar1) {
            (**(*0x11660 + 0xa8))(0x114c0,iStackX_10,auStackX_18);
        }
    }
    return iVar1;
}


/* fcn.00011174 @ 0x11174 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00011174(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    uchar auStackX_20 [8];
    int32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t iStack_58;
    int64_t iStack_50;
    uint64_t uStack_48;
    int64_t *piStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uStack_48 = 0;
    iStack_58 = 0;
    iVar1 = (**(*0x11660 + 0x138))(2,0x11480,0,&uStack_48,&var_30h);
    if (iVar1 < 0) {
        *arg1 = 0xff;
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        iVar1 = (**(*0x11660 + 0x40))(4,uStack_48 * 0x18,&iStack_50);
        if (-1 < iVar1) {
            (**(*0x11660 + 0x168))(iStack_50,uStack_48 * 0x18,0);
            uVar3 = 0;
            if (uStack_48 != 0) {
                iVar1 = 0;
                do {
                    iVar2 = (**(*0x11660 + 0x98))(*(var_30h + uVar3 * 8),0x11480,&piStack_40);
                    if (iVar2 < 0) goto code_r0x00011415;
                    iVar2 = *piStack_40;
                    if ((iVar2 == *0x114b0) && (piStack_40[1] == *0x114b8)) {
                        iVar2 = (*piStack_40[5])(piStack_40,auStackX_18,auStackX_20);
                        if (-1 < iVar2) {
                            *(iVar1 + iStack_50) = auStackX_18[0];
                        }
                        auStackX_10[0] = 0x200;
                        (**(*0x11660 + 0x40))(4,0x200,&iStack_58);
code_r0x000113c1:
                        iVar2 = (*piStack_40[3])(piStack_40,iStack_58,auStackX_10);
                        if (-1 < iVar2) {
                            uVar4 = 0x14;
                            iVar2 = iStack_58 + 0x14;
code_r0x000113e5:
                            (**(*0x11660 + 0x160))(iStack_50 + 4 + iVar1,iVar2,uVar4);
                            if (iStack_58 != 0) {
                                (**(*0x11660 + 0x48))();
                                iStack_58 = 0;
                            }
                        }
                    }
                    else if ((iVar2 == *0x11510) && (piStack_40[1] == *0x11518)) {
                        iVar2 = (*piStack_40[5])(piStack_40,auStackX_18,auStackX_20);
                        if (-1 < iVar2) {
                            *(iVar1 + iStack_50) = auStackX_18[0];
                        }
                        auStackX_10[0] = 0x1000;
                        (**(*0x11660 + 0x40))(4,0x1000,&iStack_58);
                        (**(*0x11660 + 0x168))(iStack_58,auStackX_10[0],0);
                        iVar2 = (*piStack_40[3])(piStack_40,iStack_58,auStackX_10);
                        if (-1 < iVar2) {
                            uVar4 = 8;
                            iVar2 = iStack_58 + 0x78;
                            goto code_r0x000113e5;
                        }
                    }
                    else if ((iVar2 == *0x114e0) && (piStack_40[1] == *0x114e8)) {
                        iVar2 = (*piStack_40[5])(piStack_40,auStackX_18,auStackX_20);
                        if (-1 < iVar2) {
                            *(iVar1 + iStack_50) = auStackX_18[0];
                        }
                        auStackX_10[0] = 0x200;
                        (**(*0x11660 + 0x40))(4,0x200,&iStack_58);
                        (**(*0x11660 + 0x168))(iStack_58,0x200,0);
                        goto code_r0x000113c1;
                    }
code_r0x00011415:
                    uVar3 = uVar3 + 1;
                    iVar1 = iVar1 + 0x18;
                } while (uVar3 < uStack_48);
            }
            (**(*0x11660 + 0x158))(iStack_50,uStack_48 * 0x18,arg1);
            (**(*0x11660 + 0x48))(iStack_50);
            iVar1 = 0;
        }
        (**(*0x11660 + 0x48))(var_30h);
    }
    return iVar1;
}


/* fcn.00010830 @ 0x10830 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uint64_t fcn.00010830(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uchar uStackX_18;
    char cStackX_19;
    uchar uStackX_20;
    uchar uStackX_21;
    int8_t var_30h;
    int8_t var_31h;
    int64_t var_38h;
    int *piStack_28;
    int64_t iStack_20;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uStackX_18 = 0;
    iVar1 = (**(*0x11660 + 0x140))(0x11490,0,&piStack_28);
    if ((((-1 < iVar1) && (iVar1 = -0x7ffffffffffffff2, *piStack_28 != 0)) && (*(piStack_28 + 2) != 0)) &&
       (*piStack_28 == 0x80)) {
        uStackX_18 = *(*(piStack_28 + 2) + 0x7f);
        iVar1 = 0;
    }
    cStackX_19 = '\0';
    uVar4 = iVar1 >> 0x3f ^ 1;
    iVar1 = (**(*0x11660 + 0x140))(0x11500,0,&iStack_20);
    if (-1 < iVar1) {
        iVar3 = 3;
        iVar1 = *(*(iStack_20 + 0x18) + 8);
        uVar2 = *(iVar1 + 8) + *(iVar1 + 4);
        cStackX_19 = uVar2;
        do {
            cStackX_19 = cStackX_19 + (uVar2 >> 8);
            iVar3 = iVar3 + -1;
            uVar2 = uVar2 >> 8;
        } while (iVar3 != 0);
        cStackX_19 = -cStackX_19;
        uVar4 = 1;
    }
    if (uVar4 != 0) {
        if (arg1 == 0) {
            if (arg2 != 0) {
                return 0x8000000000000002;
            }
            arg2 = &uStackX_18;
        }
        else if (arg1 != 2) {
            return 0x8000000000000002;
        }
        (**(*0x11660 + 0x160))(&uStackX_20,arg2,2);
        *0x11654 = *0x11654 | 0x40;
        *0x11694 = uStackX_20;
        *0x11695 = uStackX_21;
    }
    return ~-(uVar4 != 0) & 0x8000000000000003;
}


/* fcn.00010f44 @ 0x10f44 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00010f44(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    uint auStackX_10 [2];
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t var_30h;
    int64_t var_28h;
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    uVar2 = 0;
    iStackX_18 = 0;
    uStackX_20 = 0;
    iStack_60 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    auStackX_10[0] = 0;
    (**(*0x11660 + 0x168))(arg1,4,0);
    iVar1 = (**(*0x11660 + 0x138))(2,0x114d0,0,&uStackX_20,&iStack_68);
    if (-1 < iVar1) {
        iVar1 = (**(*0x11660 + 0x40))(4,uStackX_20 * 10,&iStackX_18);
        if (-1 < iVar1) {
            (**(*0x11660 + 0x168))(iStackX_18,uStackX_20 * 10,0);
            uVar3 = 0;
            if (uStackX_20 != 0) {
                do {
                    iVar1 = (**(*0x11660 + 0x98))(*(iStack_68 + uVar2 * 8),0x114d0,&iStack_60);
                    if ((iVar1 < 0) ||
                       (iVar1 = (**(iStack_60 + 0x70))(iStack_60,&uStack_40,&iStack_58,&uStack_50,&uStack_48),
                       iVar1 < 0)) {
                        (**(*0x11660 + 0x48))(iStack_68);
                        (**(*0x11660 + 0x48))(iStackX_18);
                        return iVar1;
                    }
                    if ((iStack_58 != 0) &&
                       (iVar1 = (**(iStack_60 + 0x30))(iStack_60,2,0,1,auStackX_10), -1 < iVar1)) {
                        *(iStackX_18 + 2 + uVar2 * 10) = iStack_58;
                        *(iStackX_18 + 3 + uVar2 * 10) = uStack_50;
                        *(iStackX_18 + 4 + uVar2 * 10) = uStack_48;
                        *(iStackX_18 + 8 + uVar2 * 10) = auStackX_10[0];
                        *(iStackX_18 + 6 + uVar2 * 10) = auStackX_10[0] >> 0x10;
                    }
                    uVar3 = uVar3 + 1;
                    uVar2 = uVar3;
                } while (uVar2 < uStackX_20);
            }
            iVar1 = (**(*0x11660 + 0x158))(iStackX_18,uStackX_20 * 10,arg1);
            (**(*0x11660 + 0x48))(iStack_68);
            iStack_68 = iStackX_18;
        }
        (**(*0x11660 + 0x48))(iStack_68);
    }
    return iVar1;
}


/* fcn.00010d04 @ 0x10d04 */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00010d04(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char cVar9;
    uint auStackX_8 [2];
    uint32_t *puStackX_10;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    int32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    ulong auStack_58 [3];
    int64_t var_18h;
    
    uVar7 = 0;
    uStackX_18 = 0;
    puStackX_10 = NULL;
    auStack_58[0] = 0;
    uStackX_20 = 0;
    auStackX_8[0] = 0;
    if (arg1 == 0) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        cVar9 = '\0';
        if (*0x11670 == '\0') {
            (**(*0x11660 + 0x168))(0x116f8,8);
            (**(*0x11660 + 0x168))(arg1,8,0);
            iVar4 = (**(*0x11660 + 0x38))(&uStackX_18,puStackX_10,auStack_58,&uStackX_20,auStackX_8);
            if (iVar4 == -0x7ffffffffffffffb) {
                uStackX_18 = uStackX_18 + 0x1000;
                iVar4 = (**(*0x11660 + 0x40))(4,uStackX_18,&puStackX_10);
                if (-1 < iVar4) {
                    iVar4 = (**(*0x11660 + 0x38))(&uStackX_18,puStackX_10,auStack_58,&uStackX_20,auStackX_8);
                    puVar3 = puStackX_10;
                    if (iVar4 < 0) {
                        (**(*0x11660 + 0x48))(puStackX_10);
                    }
                    else {
                        uVar8 = uVar7;
                        for (uVar5 = uStackX_18 / uStackX_20; uVar5 != 0; uVar5 = uVar5 - 1) {
                            uVar1 = *puStackX_10;
                            if ((uVar1 < 0xb) && ((0x661U >> (uVar1 & 0x1f) & 1) != 0)) {
                                uVar2 = *(puStackX_10 + 2);
                                uVar6 = (uVar2 - 1) + *(puStackX_10 + 6) * 0x1000;
                                uVar8 = uVar8 + (uVar6 >> 0x1c) + (uVar6 >> 0x14) + (uVar6 >> 0xc);
                                cVar9 = cVar9 + (uVar2 >> 0x1c) + (uVar2 >> 0x14) + (uVar2 >> 0xc);
                            }
                            if ((uVar1 != 0) && ((uVar1 < 8 || ((8 < uVar1 && ((uVar1 < 0xb || (uVar1 - 0xd < 2))))))))
                            {
                                uVar7 = uVar7 + *(puStackX_10 + 6);
                            }
                            puStackX_10 = puStackX_10 + uStackX_20;
                        }
                        *0x116f8 = cVar9 + uVar8;
                        *0x116fc = uVar7 >> 8;
                        *0x11670 = '\x01';
                        (**(*0x11660 + 0x160))(arg1,0x116f8,8);
                        (**(*0x11660 + 0x48))(puVar3);
                    }
                }
            }
        }
        else {
            (**(*0x11660 + 0x160))(arg1,0x116f8,8);
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.00010710 @ 0x10710 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010710(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint16_t auStackX_18 [4];
    uint auStackX_20 [2];
    int64_t var_30h;
    int32_t var_38h;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_bp_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_bp_10h;
    int32_t var_ch;
    
    auStackX_20[0] = 0;
    uStack_30 = 0x5820de98;
    uStack_2c = 0x4b0bfc8e;
    var_bp_20h._0_4_ = 0x940ab9a4;
    var_bp_20h._4_4_ = 0x7e2a160d;
    uVar4 = 0;
    uStack_38 = 2;
    iVar2 = (**(*0x11668 + 0x48))(L"SIO_DEV_STATUS_VAR",&uStack_30,auStackX_20,&uStack_38,auStackX_18);
    iVar3 = -0x7ffffffffffffff2;
    if (iVar2 != -0x7ffffffffffffff2) {
        if ((iVar2 == 0) && (uVar4 = auStackX_18[0] >> 10 & 1, (auStackX_18[0] & 0x4000) != 0)) {
            bVar1 = true;
        }
        else {
            bVar1 = false;
            if (iVar2 < 0) {
                return iVar2;
            }
        }
        *0x11681 = bVar1;
        if ((arg1 != 0) || (arg2 != 0)) {
            if ((*arg2 != '\0') || (uVar4 != 0)) {
                uVar4 = 1;
            }
            if ((*arg2 != '\0') || (bVar1)) {
                *0x11681 = true;
            }
        }
        *0x11680 = uVar4 != 0;
        *0x11654 = *0x11654 | 3;
        iVar3 = iVar2;
    }
    return iVar3;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 4608 named .text
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


/* fcn.00010980 @ 0x10980 */

uint64_t fcn.00010980(uint32_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t auStackX_8 [4];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (iVar3 == 0) {
        uVar2 = 0;
    }
    else {
        uVar1 = *(iVar3 + 0x24);
        uVar2 = uVar1;
        if ((2 < *(iVar3 + 8)) && (uVar1 == 0)) {
            if (auStackX_8 != iVar3 + 0x84) {
                section..text(auStackX_8,iVar3 + 0x84,8);
            }
            uVar2 = auStackX_8[0];
        }
    }
    return uVar2;
}


/* fcn.00010b0c @ 0x10b0c */

void fcn.00010b0c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint uVar2;
    uint uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t arg2_00;
    uint32_t uVar8;
    uint64_t uVar9;
    
    arg2_00 = arg2 & 0xffffffff;
    do {
        uVar7 = arg2_00;
        uVar9 = uVar7 + 1;
        uVar1 = *(arg1 + arg2_00 * 4);
        uVar6 = arg3 & 0xffffffff;
code_r0x00010b41:
        while ((uVar8 = uVar9, uVar8 <= arg3 && (*(arg1 + uVar9 * 4) <= uVar1))) {
            uVar9 = uVar8 + 1;
        }
        if (uVar7 < uVar6) {
            puVar4 = arg1 + uVar6 * 4;
            do {
                if (*puVar4 < uVar1) break;
                uVar5 = uVar6 - 1;
                uVar6 = uVar5;
                puVar4 = puVar4 + -1;
            } while (uVar7 < uVar5);
        }
        uVar5 = uVar6;
        uVar2 = *(arg1 + uVar6 * 4);
        if (uVar8 <= uVar5) {
            uVar3 = *(arg1 + uVar9 * 4);
            *(arg1 + uVar9 * 4) = uVar2;
            *(arg1 + uVar6 * 4) = uVar3;
            goto code_r0x00010b41;
        }
        uVar3 = *(arg1 + arg2_00 * 4);
        *(arg1 + arg2_00 * 4) = uVar2;
        *(arg1 + uVar6 * 4) = uVar3;
        if (uVar7 < uVar5 - 1) {
            fcn.00010b0c(arg1,arg2_00,uVar5 - 1);
        }
        arg2_00 = uVar5 + 1;
        if (arg3 <= uVar5 + 1) {
            return;
        }
    } while( true );
}


/* fcn.0001040c @ 0x1040c */

int64_t fcn.0001040c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    bool bVar3;
    uint uStackX_18;
    uint32_t uStackX_1c;
    uchar auStackX_20 [8];
    int64_t var_30h;
    int64_t var_38h;
    
    if (((arg3 == 0) && (arg2 != 0)) || (iVar2 = arg1, 6 < iVar2)) {
        return -0x7ffffffffffffffe;
    }
    if (iVar2 == 0) {
        iVar1 = fcn.00010710(arg2,arg3);
        return iVar1;
    }
    if (iVar2 == 1) {
        (**(*0x11660 + 0x168))(&uStackX_18,8);
        iVar1 = fcn.00010d04(&uStackX_18);
        if (iVar1 < 0) {
            return iVar1;
        }
        if ((arg2 != 0) || (arg3 != 0)) {
            if (*arg3 < uStackX_1c) {
                bVar3 = 0x7f < uStackX_1c - *arg3;
code_r0x0001062a:
                if (!bVar3) goto code_r0x0001062e;
            }
            else {
                if ((uStackX_1c < *arg3) && (0x7f < *arg3 - uStackX_1c)) {
                    bVar3 = true;
                    goto code_r0x0001062a;
                }
code_r0x0001062e:
                uStackX_1c = *arg3;
            }
            if (arg2 < 4) goto code_r0x000105bc;
        }
        *0x11654 = *0x11654 | 4;
        iVar1 = 0;
        *0x11688 = uStackX_1c;
    }
    else {
        if (iVar2 == 2) {
            (**(*0x11660 + 0x168))(&uStackX_18,8);
            iVar1 = fcn.00010d04(&uStackX_18);
            if (iVar1 < 0) {
                return iVar1;
            }
            if (arg2 == 0) {
                if (arg3 == 0) {
                    arg2 = 1;
                    arg3 = &uStackX_18;
                    goto code_r0x00010596;
                }
            }
            else if (arg2 - 1U < 8) {
code_r0x00010596:
                (**(*0x11660 + 0x160))(auStackX_20,arg3,arg2);
                *0x11654 = *0x11654 | 8;
                *0x11684 = auStackX_20[0];
                return iVar1;
            }
        }
        else if (iVar2 == 3) {
            iVar1 = fcn.00010f44(auStackX_20);
            if (iVar1 < 0) {
                return iVar1;
            }
            if (arg2 == 0) {
                if (arg3 == 0) {
                    arg3 = auStackX_20;
                    goto code_r0x00010519;
                }
            }
            else if (arg2 == 4) {
code_r0x00010519:
                (**(*0x11660 + 0x160))(&uStackX_18,arg3,4);
                *0x11654 = *0x11654 | 0x10;
                *0x1168c = uStackX_18;
                return iVar1;
            }
        }
        else {
            if (iVar2 == 5) {
                iVar1 = fcn.00010830(arg2,arg3);
                return iVar1;
            }
            if (iVar2 == 6) {
                iVar1 = fcn.00011174(auStackX_20);
                if (iVar1 < 0) {
                    return iVar1;
                }
                if (arg2 == 0) {
                    if (arg3 == 0) {
                        arg3 = auStackX_20;
                        goto code_r0x000104a6;
                    }
                }
                else if (arg2 == 4) {
code_r0x000104a6:
                    (**(*0x11660 + 0x160))(&uStackX_18,arg3,4);
                    *0x11654 = *0x11654 | 0x80;
                    *0x11698 = uStackX_18;
                    return iVar1;
                }
            }
        }
code_r0x000105bc:
        iVar1 = -0x7ffffffffffffffe;
    }
    return iVar1;
}


/* fcn.000109c8 @ 0x109c8 */

int64_t fcn.000109c8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int **arg2;
    int64_t *piVar6;
    uint32_t *puVar7;
    int *piStackX_10;
    
    uVar4 = 0;
    if (*(*0x11658 + 0x68) == 0) {
        return 0;
    }
    piVar6 = *(*0x11658 + 0x70);
    while ((*piVar6 != *arg1 || (piVar6[1] != *(arg1 + 8)))) {
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 3;
        if (*(*0x11658 + 0x68) <= uVar4) {
            return 0;
        }
    }
    iVar2 = (*(*0x11658 + 0x70))[uVar4 * 3 + 2];
    if (iVar2 == 0) {
        return 0;
    }
    if ((1 < *(iVar2 + 0xf)) && (iVar1 = *(iVar2 + 0x18), iVar1 != 0)) {
        uVar5 = 0;
        uVar4 = *(iVar1 + 4) - 0x24 >> 3;
        if (uVar4 != 0) {
            arg2 = iVar1 + 0x24;
            piVar3 = piStackX_10;
            do {
                if (&piStackX_10 != arg2) {
                    section..text(&piStackX_10,arg2,8);
                    piVar3 = piStackX_10;
                }
                if ((piVar3 != NULL) && (*piVar3 == 0x50434146)) goto code_r0x00010a97;
                uVar5 = uVar5 + 1;
                arg2 = arg2 + 1;
            } while (uVar5 < (uVar4 & 0xffffffff));
        }
        piVar3 = NULL;
code_r0x00010a97:
        if ((piVar3 != NULL) && (iVar1 = fcn.00010980(piVar3), iVar1 != 0)) {
            return iVar1;
        }
    }
    uVar4 = *(iVar2 + 0x10);
    if (uVar4 != 0) {
        puVar7 = uVar4 + 0x24;
        uVar5 = 0;
        uVar4 = *(uVar4 + 4) - 0x24 >> 2;
        if (uVar4 != 0) {
            do {
                piVar3 = *puVar7;
                if ((piVar3 != NULL) && (*piVar3 == 0x50434146)) goto code_r0x00010ae4;
                uVar5 = uVar5 + 1;
                puVar7 = puVar7 + 1;
            } while (uVar5 < (uVar4 & 0xffffffff));
        }
        piVar3 = NULL;
code_r0x00010ae4:
        if ((piVar3 != NULL) && (iVar2 = fcn.00010980(piVar3), iVar2 != 0)) {
            return iVar2;
        }
    }
    return 0;
}


