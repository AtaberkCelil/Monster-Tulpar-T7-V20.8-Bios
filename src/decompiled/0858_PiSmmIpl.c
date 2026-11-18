// decompiled by r2ghidra: 0858_PiSmmIpl.pe32
// functions: 22

/* entry0 @ 0x11124 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.00011150(arg1,in_RDX);
    iVar1 = fcn.00011f48(arg1,in_RDX);
    if (iVar1 < 0) {
        fcn.000112bc();
    }
    return iVar1;
}


/* fcn.00011150 @ 0x11150 */

void fcn.00011150(ulong noname_0,int64_t arg1)

{
    *0x14420 = *(arg1 + 0x58);
    *0x14418 = *(arg1 + 0x60);
    *0x14410 = arg1;
    *0x14428 = *0x14420;
    *0x14440 = *0x14418;
    (**(*0x14418 + 0x50))(0x201,8,0x122f0,0,0x14430);
    (**(*0x14440 + 0x50))(0x60000202,8,0x122fc,0,83000);
    fcn.000123e0();
    *0x14490 = *0x14420;
    (**(*0x14418 + 0x50))(0x60000202,0x10,0x12414,0,0x14488);
    (**(*0x14418 + 0x50))(0x201,0x10,0x12410,0,0x14498);
    fcn.00012380(0x140e0,0x14460);
    fcn.000135e4();
    (**(*0x14418 + 0x170))(0x200,0x10,0x13644,0,0x140d0,0x14478);
    (**(*0x14418 + 0x170))(0x200,0x10,0x1366c,0,0x140a0,0x14480);
    return;
}


/* fcn.000123e0 @ 0x123e0 */

int64_t fcn.000123e0(void)

{
    if (*0x14450 == 0) {
        fcn.00012380(0x14090,0x14450);
    }
    return *0x14450;
}


/* fcn.00012380 @ 0x12380 */

ulong fcn.00012380(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x14410;
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


/* fcn.000135e4 @ 0x135e4 */

void fcn.000135e4(void)

{
    int64_t iVar1;
    
    if ((((*0x14470 == 0) && (*0x14468 == '\0')) && (*0x14418 != 0)) && (*(*0x14418 + 0x140) != NULL)) {
        iVar1 = (**(*0x14418 + 0x140))(0x14010,0,0x14470);
        if (iVar1 < 0) {
            *0x14470 = 0;
        }
    }
    return;
}


/* fcn.00011f48 @ 0x11f48 */

ulong fcn.00011f48(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    uint32_t var_30h_2;
    int64_t var_40h_2;
    uchar auStack_68 [16];
    uint64_t uStack_58;
    int64_t *piStack_50;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_bp_28h;
    
    *0x14148 = arg1;
    iStackX_10 = arg2;
    (**(*0x14418 + 0x140))(0x14100,0,0x144a0);
    (**(*0x14418 + 0x140))(0x14070,0);
    uVar4 = fcn.00011bcc(*0x14130 + 0x10);
    *(*0x14130 + 0x18) = uVar4;
    (***0x144a0)();
    iVar12 = 0;
    *0x144a8 = 0;
    uVar5 = 0x3f000;
    iVar11 = *(*0x14130 + 0x10);
    if (iVar11 != 0) {
        iVar10 = *(*0x14130 + 0x18);
        iVar7 = 0;
        puVar9 = iVar10 + 0x18;
        do {
            if ((((*puVar9 & 0x70) == 0) && (iVar1 = iVar7 + iVar10, 0xfffff < *(iVar1 + 8))) &&
               (uVar5 <= *(iVar1 + 0x10))) {
                iVar10 = *(*0x14130 + 0x18);
                uVar5 = *(iVar1 + 0x10);
                iVar12 = iVar1;
            }
            iVar7 = iVar7 + 0x20;
            puVar9 = puVar9 + 0x20;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *0x144a8 = iVar12;
        if (iVar12 != 0) {
            uVar5 = *(iVar12 + 8);
            iVar11 = *(iVar12 + 0x10);
            *0x144e0 = uVar5;
            *0x144e8 = iVar11;
            do {
                bVar3 = false;
                uVar6 = 0;
                if (*(*0x14130 + 0x10) == 0) break;
                iVar12 = 0;
                do {
                    uVar2 = *(iVar12 + 8 + *(*0x14130 + 0x18));
                    iVar10 = *(iVar12 + 0x10 + *(*0x14130 + 0x18));
                    if ((uVar2 < uVar5) && (uVar5 == iVar10 + uVar2)) {
                        uVar5 = uVar2;
                        *0x144e0 = uVar2;
code_r0x0001208f:
                        iVar11 = iVar11 + iVar10;
                        bVar3 = true;
                        *0x144e8 = iVar11;
                    }
                    else if ((uVar5 + iVar11 == uVar2) && (iVar10 != 0)) goto code_r0x0001208f;
                    uVar6 = uVar6 + 1;
                    iVar12 = iVar12 + 0x20;
                } while (uVar6 < *(*0x14130 + 0x10));
            } while (bVar3);
            (**(*0x14460 + 0x38))(uVar5,auStack_68);
            if ((uStack_58 & 9) != 9) {
                (**(*0x14460 + 0xa0))(*0x144e0,*0x144e8,uStack_58 | 9);
            }
            piVar8 = &iStackX_8;
            iStackX_8 = 0;
            iVar11 = (**(*0x14418 + 0x140))(0x14060,0);
            if (-1 < iVar11) {
                piVar8 = piStack_50 & 0xfffffffffff18fe8 | 8;
                piStack_50 = piVar8;
                (**(*0x14460 + 0x40))(*0x144e0,*0x144e8);
            }
            iVar11 = *(*0x14130 + 0x10) * 0x20;
            iVar11 = fcn.000116e0(iVar11,*(*0x14130 + 0x18) + -0x20 + iVar11,piVar8);
            if ((iVar11 < 0) && (iStackX_8 != 0)) {
                (**(*0x14460 + 0x40))(*0x144e0,*0x144e8,1);
            }
            if ((*0x144a8 != 0) && (-1 < iVar11)) {
                (**(*0x14418 + 0x148))(0x14400,0x140c0,0x143d0,0x14000,0x141a8,0x14120,0x141b0,0);
                iVar11 = 0;
                if (*0x141d0 != 0) {
                    piVar8 = 0x141d0;
                    iVar12 = 0;
                    do {
                        if (*(iVar12 + 0x141c0) == '\0') {
                            (**(*0x14418 + 0x170))
                                      (0x200,*(iVar12 + 0x141e0),*piVar8,*(iVar12 + 0x141d8),*(iVar12 + 0x141c8),
                                       iVar12 + 0x141e8);
                        }
                        else {
                            uVar4 = *(iVar12 + 0x141c8);
                            (**(*0x14418 + 0x50))();
                            (**(*0x14418 + 0xa8))(uVar4,iStackX_10,auStackX_18);
                            (**(*0x14418 + 0x68))(iStackX_10);
                            *(iVar12 + 0x141e8) = iStackX_10;
                        }
                        iVar11 = iVar11 + 1;
                        iVar12 = iVar11 * 0x30;
                        piVar8 = iVar12 + 0x141d0;
                    } while (*piVar8 != 0);
                }
                return 0;
            }
        }
    }
    (*(*0x144a0)[1])(*0x144a0);
    (**(*0x14418 + 0x48))(*(*0x14130 + 0x18));
    return 0x8000000000000003;
}


/* fcn.000112bc @ 0x112bc */

void fcn.000112bc(void)

{
    (**(*0x14418 + 0x70))(*0x14478);
    (**(*0x14418 + 0x70))(*0x14480);
    (**(*0x14418 + 0x70))(*0x14488);
    (**(*0x14418 + 0x70))(*0x14498);
    (**(*0x14440 + 0x70))(*0x14430);
    //WARNING: Could not recover jumptable at 0x00011327. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14440 + 0x70))(*0x14438);
    return;
}


/* fcn.00011384 @ 0x11384 */

uint64_t fcn.00011384(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t auStackX_10 [3];
    
    iVar3 = *0x14130;
    if (arg1 != 0) {
        if (arg2 == 0) {
            auStackX_10[0] = *(arg1 + 0x10) + 0x18;
        }
        else {
            auStackX_10[0] = *arg2;
            if (auStackX_10[0] < 0x18) {
                return 0x8000000000000002;
            }
        }
        cVar1 = *(*0x14130 + 0x29);
        if ((cVar1 == '\0') && (*(*0x14130 + 0x28) != '\0')) {
            *(*0x14130 + 0x40) = auStackX_10[0];
            *(iVar3 + 0x38) = arg1;
            iVar2 = (***0x144b0)(*0x144b0,0,0,0,0);
            iVar3 = *0x14130;
            if (-1 < iVar2) {
                if (arg2 != 0) {
                    *arg2 = *(*0x14130 + 0x40);
                }
                return *(iVar3 + 0x48);
            }
            return 0x8000000000000003;
        }
        if ((*0x14458 == '\0') && ((cVar1 != '\0' || ((*(*0x144a0 + 0x21) != '\0' && (*(*0x144a0 + 0x20) == '\0')))))) {
            auStackX_10[0] = auStackX_10[0] - 0x18;
            *(*0x14130 + 0x29) = 1;
            iVar3 = (**(*(iVar3 + 0x30) + 0xd8))(arg1,0,arg1 + 0x18,auStackX_10);
            if (arg2 != 0) {
                *arg2 = auStackX_10[0] + 0x18;
            }
            *(*0x14130 + 0x29) = cVar1;
            return -(iVar3 != 0) & 0x800000000000000e;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00013684 @ 0x13684 */

ulong fcn.00013684(void)

{
    ulong uVar1;
    
    fcn.000135e4();
    if (*0x14470 == NULL) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (***0x14470)(0x90000002,0x3070007,0,0x140f0,0);
    }
    return uVar1;
}


/* fcn.000114d0 @ 0x114d0 */

void fcn.000114d0(ulong noname_0,int64_t arg1)

{
    ulong auStackX_10 [3];
    
    *0x144c0 = *arg1;
    *0x144c8 = *(arg1 + 8);
    *0x144d0 = 1;
    *0x144d8 = 0;
    auStackX_10[0] = 0x19;
    fcn.00011384(0x141a8,0x144c0,auStackX_10);
    return;
}


/* fcn.00013560 @ 0x13560 */

ulong fcn.00013560(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStack_18 [8];
    int64_t iStack_10;
    
    iVar1 = (**(*0x14418 + 0x98))(noname_0,82000,&iStack_10);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000e;
    }
    else {
        *arg2 = 0;
        *arg3 = 0;
        uVar2 = (**(iStack_10 + 0x18))(iStack_10,arg1,0x10,0,arg2,arg3,auStack_18);
    }
    return uVar2;
}


/* fcn.00012964 @ 0x12964 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.00012964(int64_t arg1)

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
    iVar3 = fcn.00012438(arg1,auStack_138);
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
code_r0x00012a07:
            *(arg1 + 0x7c) = 1;
            goto code_r0x00012a11;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x00012a07;
    *(arg1 + 0x7c) = 0;
code_r0x00012a11:
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
                if (iVar4 < 0) goto code_r0x00012b4d;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00012b55;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x00012ad6;
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
                if (iVar4 < 0) goto code_r0x00012b4d;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00012b55;
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
                    if (iVar4 < 0) goto code_r0x00012b44;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x00012b55;
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
code_r0x00012b4d:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x00012b55;
code_r0x00012ad6:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x00012b44;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x00012b55;
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
    goto code_r0x00012ad6;
code_r0x00012b44:
    bVar12 = iStackX_8 == 0x1c;
code_r0x00012b55:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.00012f70 @ 0x12f70 */

//WARNING: Variable defined which should be unmapped: var_3h

int64_t fcn.00012f70(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint in_register_0000000c;
    int64_t *piVar6;
    int16_t *piVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    bool bVar16;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int32_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    uint32_t var_7fh;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    uint32_t var_79h;
    int64_t var_71h;
    int16_t iStack_5e;
    char cStack_5c;
    uint32_t var_3h;
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    *(piVar6 + 0xd) = 0;
    if (&iStack_d8 != piVar6) {
        section..text(&iStack_d8,arg1,0x90);
    }
    iVar2 = fcn.00012964(&iStack_d8);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (piVar6[1] < uStack_d0) {
        *(piVar6 + 0xd) = 6;
        return -0x7ffffffffffffffb;
    }
    if (*piVar6 == 0) {
code_r0x00012fe6:
        *(piVar6 + 0xd) = 5;
        return -0x7ffffffffffffffe;
    }
    if (cStack_5c != '\0') {
        if (iStack_5e == 0xc) {
            *(piVar6 + 0xd) = 4;
            return -0x7fffffffffffffff;
        }
        if (iStack_d8 != *piVar6) goto code_r0x00012fe6;
    }
    if (*(piVar6 + 0x7d) == '\0') {
        iStackX_18 = (*piVar6[4])();
        iVar9 = *(piVar6 + 0x3c) + *piVar6;
        uStackX_20 = *(iVar9 + 6);
        iVar2 = *piVar6 + 0x18 + *(iVar9 + 0x14) + *(piVar6 + 0x3c);
        uVar14 = uVar10;
    }
    else {
        iStackX_18 = (*piVar6[4])(piVar6[5],0,piVar6 + 0xb);
        iVar9 = *piVar6;
        iVar2 = iVar9 + 0x28;
        uStackX_20 = *(iVar9 + 4);
        uVar14 = *(iVar9 + 6) - 0x28;
    }
    if (iStackX_18 < 0) {
        *(piVar6 + 0xd) = 1;
        return -0x7fffffffffffffff;
    }
    uVar13 = uVar10;
    if (uStackX_20 != 0) {
        do {
            uStackX_10 = *(iVar2 + 8);
            if ((uStackX_10 == 0) || (*(iVar2 + 0x10) < uStackX_10)) {
                uStackX_10 = *(iVar2 + 0x10);
            }
            if (*(iVar2 + 0xc) < piVar6[1] + uVar14) {
                uVar4 = (*(iVar2 + 0xc) - uVar14) + *piVar6;
            }
            else {
                *(piVar6 + 0xd) = 5;
                uVar4 = uVar10;
            }
            uVar11 = *(iVar2 + 0xc) + -1 + *(iVar2 + 8);
            if (uVar11 < piVar6[1] + uVar14) {
                uVar11 = (uVar11 - uVar14) + *piVar6;
            }
            else {
                *(piVar6 + 0xd) = 5;
                uVar11 = uVar10;
            }
            if ((uStackX_10 != 0) && ((uVar4 == 0 || (uVar11 == 0)))) {
                *(piVar6 + 0xd) = 8;
                return -0x7fffffffffffffff;
            }
            if ((*(iVar2 + 0x10) != 0) &&
               (iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar2 + 0x14) - uVar14,&uStackX_10,uVar4), iStackX_18 < 0))
            goto code_r0x000132ea;
            if ((uStackX_10 < *(iVar2 + 8)) && (iVar3 = *(iVar2 + 8) - uStackX_10, iVar3 != 0)) {
                fcn.00011060(uVar4 + uStackX_10,iVar3);
            }
            iVar2 = iVar2 + 0x28;
            uVar13 = uVar13 + 1;
        } while (uVar13 < uStackX_20);
    }
    uVar13 = piVar6[1];
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x28) < uVar13) {
            uVar4 = *piVar6 + *(iVar9 + 0x28);
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar4 = uVar10;
        }
        piVar6[3] = uVar4;
    }
    else {
        if (*(iVar9 + 8) < uVar13 + uVar14) {
            uVar4 = (*(iVar9 + 8) - uVar14) + *piVar6;
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar4 = uVar10;
        }
        piVar6[3] = uVar4;
    }
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x18) == 0x10b) {
            uVar12 = *(iVar9 + 0x74);
            iVar3 = 0xa4;
        }
        else {
            uVar12 = *(iVar9 + 0x84);
            iVar3 = 0xb4;
        }
        if (5 < uVar12) {
            uVar12 = *(iVar3 + iVar9);
            goto code_r0x0001321a;
        }
        piVar6[0xe] = 0;
    }
    else {
        uVar12 = *(iVar9 + 0x1c);
code_r0x0001321a:
        piVar6[0xe] = (uVar12 >> 1) << 3;
    }
    piVar6[6] = 0;
    if (piVar6[8] != 0) {
        if (uVar13 + uVar14 <= *(piVar6 + 8)) {
            *(piVar6 + 0xd) = 5;
            goto code_r0x00013256;
        }
        iVar3 = (*piVar6 - uVar14) + *(piVar6 + 8);
        if (iVar3 == 0) goto code_r0x00013256;
        uVar12 = *(iVar3 + 0x14);
        if (uVar12 == 0) {
            if (*(iVar3 + 0x18) != 0) {
                if (*(iVar2 + -0x18) < *(iVar2 + -0x20)) {
                    uVar12 = *(iVar2 + -0x1c) + *(iVar2 + -0x20);
                }
                else {
                    uVar12 = *(iVar2 + -0x1c) + *(iVar2 + -0x18);
                }
            }
            if (uVar12 == 0) goto code_r0x0001335b;
        }
        if (uVar12 < uVar13 + uVar14) {
            uVar13 = (*piVar6 - uVar14) + uVar12;
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar13 = uVar10;
        }
        piVar6[9] = uVar13;
        if (uVar13 == 0) {
code_r0x00013256:
            *(piVar6 + 0xd) = 9;
            return -0x7fffffffffffffff;
        }
        if (*(iVar3 + 0x14) == 0) {
            uStackX_10 = *(iVar3 + 0x10);
            iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar3 + 0x18) - uVar14,&uStackX_10);
            if (iStackX_18 < 0) {
                iStackX_18 = -0x7fffffffffffffff;
code_r0x000132ea:
                *(piVar6 + 0xd) = 1;
                return iStackX_18;
            }
            *(iVar3 + 0x14) = uVar12;
        }
        piVar5 = piVar6[9];
        if (*piVar5 == 0x3031424e) {
            if (*(iVar3 + 0x10) < 0x10) goto code_r0x00013337;
            piVar5 = piVar5 + 4;
        }
        else if (*piVar5 == 0x434f544d) {
            if (*(iVar3 + 0x10) < 0x14) goto code_r0x00013337;
            piVar5 = piVar5 + 5;
        }
        else {
            if (*piVar5 != 0x53445352) goto code_r0x0001335b;
            if (*(iVar3 + 0x10) < 0x18) goto code_r0x00013337;
            piVar5 = piVar5 + 6;
        }
        piVar6[10] = piVar5;
    }
code_r0x0001335b:
    piVar6[0x10] = 0;
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x18) == 0x10b) {
            uVar12 = *(iVar9 + 0x74);
            iVar2 = 0x88;
        }
        else {
            uVar12 = *(iVar9 + 0x84);
            iVar2 = 0x98;
        }
        if ((2 < uVar12) && (uVar12 = *(iVar2 + 4 + iVar9), uVar12 != 0)) {
            if (*(iVar2 + iVar9) < piVar6[1]) {
                iVar2 = *(iVar2 + iVar9) + *piVar6;
                if (iVar2 != 0) {
                    puVar15 = iVar2 + 0xc;
                    if (uVar12 < (*(iVar2 + 0xe) + *puVar15) * 8 + 0x10) {
code_r0x00013337:
                        *(piVar6 + 0xd) = 0xb;
                        return -0x7ffffffffffffffd;
                    }
                    puVar8 = iVar2 + 0x10;
                    bVar16 = *puVar15 != 0;
                    uVar14 = uVar10;
                    while (bVar16) {
                        uVar1 = *puVar8;
                        if (0x7fffffff < uVar1) {
                            if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00013337;
                            piVar7 = (uVar1 & 0x7fffffff) + iVar2;
                            if ((((*piVar7 == 3) && (piVar7[1] == 0x48)) && (piVar7[2] == 0x49)) && (piVar7[3] == 0x49))
                            {
                                uVar1 = puVar8[1];
                                if (0x7fffffff < uVar1) {
                                    if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00013337;
                                    uVar13 = uVar1 & 0x7fffffff;
                                    puVar15 = iVar2 + 0xc + uVar13;
                                    if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + 2 + *(uVar13 + 0xe + iVar2)) * 8)
                                    goto code_r0x00013337;
                                    puVar8 = iVar2 + 0x10 + uVar13;
                                    uVar1 = puVar8[1];
                                    if (0x7fffffff < uVar1) {
                                        if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00013337;
                                        uVar13 = uVar1 & 0x7fffffff;
                                        puVar15 = uVar13 + 0xc + iVar2;
                                        if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + *(uVar13 + 0xe + iVar2) + 2) * 8
                                           ) goto code_r0x00013337;
                                        puVar8 = uVar13 + 0x10 + iVar2;
                                    }
                                }
                                if (puVar8[1] < 0x80000000) {
                                    if (puVar8[1] < uVar12) {
                                        uVar14 = *(puVar8[1] + iVar2);
                                        if (uVar14 < piVar6[1]) {
                                            uVar10 = uVar14 + *piVar6;
                                        }
                                        else {
                                            *(piVar6 + 0xd) = 5;
                                        }
                                        piVar6[0x10] = uVar10;
                                        return iStackX_18;
                                    }
                                    goto code_r0x00013337;
                                }
                            }
                        }
                        puVar8 = puVar8 + 2;
                        uVar14 = uVar14 + 1;
                        bVar16 = uVar14 < *puVar15;
                    }
                }
            }
            else {
                *(piVar6 + 0xd) = 5;
            }
        }
    }
    return iStackX_18;
}


/* fcn.00012cb8 @ 0x12cb8 */

ulong fcn.00012cb8(uint32_t arg1)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    int64_t *piVar13;
    int *piVar14;
    int64_t iVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar11 = NULL;
    *(piVar5 + 0xd) = 0;
    if (*(piVar5 + 0x7c) == '\0') {
        iVar6 = piVar5[2];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        if (*(piVar5 + 0x7d) == '\0') {
            iVar3 = *(piVar5 + 0x3c) + *piVar5;
            if (*(iVar3 + 0x18) == 0x10b) {
                iVar15 = iVar6 - *(iVar3 + 0x34);
                if (iVar15 != 0) {
                    *(iVar3 + 0x34) = iVar6;
                }
                uVar10 = *(iVar3 + 0x74);
                iVar6 = 0xa0;
            }
            else {
                iVar15 = iVar6 - *(iVar3 + 0x30);
                if (iVar15 != 0) {
                    *(iVar3 + 0x30) = iVar6;
                }
                uVar10 = *(iVar3 + 0x84);
                iVar6 = 0xb0;
            }
            puVar9 = puVar11;
            puVar18 = puVar11;
            if (4 < uVar10) {
                puVar9 = iVar6 + iVar3;
            }
        }
        else {
            iVar3 = *piVar5;
            puVar18 = *(iVar3 + 6) - 0x28;
            iVar15 = (iVar6 - *(iVar3 + 0x10)) - puVar18;
            if (iVar15 != 0) {
                *(iVar3 + 0x10) = iVar6 - puVar18;
            }
            puVar9 = iVar3 + 0x18;
        }
        puVar16 = puVar11;
        if ((puVar9 != NULL) && (puVar9[1] != 0)) {
            if (*puVar9 < piVar5[1] + puVar18) {
                puVar11 = (*piVar5 - puVar18) + *puVar9;
            }
            else {
                *(piVar5 + 0xd) = 5;
            }
            uVar7 = puVar9[1] + (*puVar9 - 1);
            if (uVar7 < piVar5[1] + puVar18) {
                puVar16 = (*piVar5 - puVar18) + uVar7;
            }
            else {
                *(piVar5 + 0xd) = 5;
            }
            if ((puVar11 == NULL) || (puVar16 == NULL)) {
code_r0x00012dce:
                *(piVar5 + 0xd) = 9;
                return 0x8000000000000001;
            }
            if (puVar16 < puVar11) goto code_r0x00012dce;
        }
        if (iVar15 != 0) {
            piVar13 = piVar5[6];
            puVar12 = puVar11;
            while (puVar12 < puVar16) {
                puVar17 = puVar12 + 2;
                if (((puVar12[1] == 0) || (~puVar12[1] < puVar12)) ||
                   (puVar1 = puVar12[1] + puVar12, puVar9[1] + puVar11 < puVar1)) goto code_r0x00012dce;
                if (piVar5[1] + puVar18 <= *puVar12) {
                    *(piVar5 + 0xd) = 5;
                    goto code_r0x00012dce;
                }
                if ((*piVar5 - puVar18) + *puVar12 == 0) goto code_r0x00012dce;
                for (; puVar17 < puVar1; puVar17 = puVar17 + 2) {
                    uVar7 = (*puVar17 & 0xfff) + *puVar12;
                    if (puVar18 + piVar5[1] <= uVar7) {
                        *(piVar5 + 0xd) = 5;
code_r0x00012f24:
                        uVar4 = 0x8000000000000001;
code_r0x00012f2e:
                        *(piVar5 + 0xd) = 9;
                        return uVar4;
                    }
                    piVar8 = (*piVar5 - puVar18) + uVar7;
                    if (piVar8 == NULL) goto code_r0x00012f24;
                    uVar2 = *puVar17 >> 0xc;
                    if (uVar2 != 0) {
                        if (uVar2 == 1) {
                            *piVar8 = *piVar8 + (iVar15 >> 0x10);
                        }
                        else {
                            if (uVar2 != 2) {
                                if (uVar2 == 3) {
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar14 = piVar13 + (-piVar13 & 3);
                                        *piVar14 = *piVar8;
                                        piVar13 = piVar14 + 1;
                                    }
                                }
                                else {
                                    if (uVar2 != 10) {
                                        uVar4 = 0x8000000000000003;
                                        goto code_r0x00012f2e;
                                    }
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar13 = piVar13 + (-piVar13 & 7);
                                        *piVar13 = *piVar8;
                                        piVar13 = piVar13 + 1;
                                    }
                                }
                                goto code_r0x00012ef9;
                            }
                            *piVar8 = *piVar8 + iVar15;
                        }
                        if (piVar13 != NULL) {
                            *piVar13 = *piVar8;
                            piVar13 = piVar13 + 2;
                        }
                    }
code_r0x00012ef9:
                }
                puVar12 = puVar1;
            }
            if (piVar5[2] != 0) {
                piVar5[3] = piVar5[3] + (piVar5[2] - *piVar5);
            }
        }
    }
    return 0;
}


/* fcn.00012324 @ 0x12324 */

ulong fcn.00012324(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14418 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 12288 named .text
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


/* fcn.00011984 @ 0x11984 */

void fcn.00011984(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t *in_stack_00000040;
    
    uVar1 = *arg2;
    uVar2 = *(arg1 + 8);
    uVar6 = *(arg2 + 8) + uVar1;
    uVar5 = *(arg1 + 0x10) + uVar2;
    if (uVar1 <= uVar2) {
        if (uVar2 < uVar6) {
            *(arg2 + 8) = uVar2 - uVar1;
            if (uVar5 < uVar6) {
                iVar7 = *in_stack_00000040;
                iVar4 = *in_stack_00000030;
                iVar3 = iVar7 * 0x20;
                *(iVar3 + 8 + in_stack_00000038) = *(arg1 + 8);
                *(iVar3 + in_stack_00000038) = *arg1;
                *(iVar3 + 0x18 + in_stack_00000038) = *(arg1 + 0x18) | 0x10;
                iVar7 = iVar7 + 1;
                *(iVar3 + 0x10 + in_stack_00000038) = *(arg1 + 0x10);
                *(arg1 + 0x10) = 0;
                *in_stack_00000040 = iVar7;
                iVar7 = iVar7 * 0x20;
                *(in_stack_00000028 + iVar4 * 0x10) =
                     *(iVar7 + -0x18 + in_stack_00000038) + *(iVar7 + -0x10 + in_stack_00000038);
                *(in_stack_00000028 + 8 + iVar4 * 0x10) = uVar6 - uVar5;
                *in_stack_00000030 = iVar4 + 1;
                return;
            }
            iVar7 = *in_stack_00000040;
            iVar4 = iVar7 * 0x20;
            *(iVar4 + 8 + in_stack_00000038) = *(arg1 + 8);
            *(iVar4 + in_stack_00000038) = *arg1;
            *(iVar4 + 0x18 + in_stack_00000038) = *(arg1 + 0x18) | 0x10;
            *(iVar4 + 0x10 + in_stack_00000038) = uVar6 - *(arg1 + 8);
            iVar7 = iVar7 + 1;
            *in_stack_00000040 = iVar7;
            iVar7 = iVar7 * 0x20;
            *(arg1 + 8) = *(arg1 + 8) + *(iVar7 + -0x10 + in_stack_00000038);
            *arg1 = *arg1 + *(iVar7 + -0x10 + in_stack_00000038);
            *(arg1 + 0x10) = *(arg1 + 0x10) - *(iVar7 + -0x10 + in_stack_00000038);
            return;
        }
        if (uVar1 < uVar2) {
            return;
        }
    }
    if (uVar1 < uVar5) {
        *(arg1 + 0x10) = uVar1 - uVar2;
        if (uVar6 < uVar5) {
            iVar7 = *in_stack_00000040;
            iVar4 = iVar7 * 0x20;
            *(iVar4 + 8 + in_stack_00000038) = *arg2;
            *(iVar4 + in_stack_00000038) = *(arg1 + 0x10) + *arg1;
            *(iVar4 + 0x18 + in_stack_00000038) = *(arg1 + 0x18) | 0x10;
            iVar7 = iVar7 + 1;
            *(iVar4 + 0x10 + in_stack_00000038) = *(arg2 + 8);
            *(arg2 + 8) = 0;
            *in_stack_00000040 = iVar7;
            iVar4 = *arg4;
            iVar7 = iVar7 * 0x20;
            iVar3 = iVar4 * 0x20;
            *(iVar3 + 8 + arg3) = *(iVar7 + -0x18 + in_stack_00000038) + *(iVar7 + -0x10 + in_stack_00000038);
            *(iVar3 + arg3) = *(iVar7 + -0x20 + in_stack_00000038) + *(iVar7 + -0x10 + in_stack_00000038);
            *(iVar3 + 0x18 + arg3) = *(arg1 + 0x18);
            *arg4 = iVar4 + 1;
            *(iVar3 + 0x10 + arg3) = uVar5 - uVar6;
        }
        else {
            iVar7 = *in_stack_00000040;
            iVar4 = iVar7 * 0x20;
            *(iVar4 + 8 + in_stack_00000038) = *arg2;
            *(iVar4 + in_stack_00000038) = *(arg1 + 0x10) + *arg1;
            *(iVar4 + 0x18 + in_stack_00000038) = *(arg1 + 0x18) | 0x10;
            *(iVar4 + 0x10 + in_stack_00000038) = uVar5 - *arg2;
            iVar7 = iVar7 + 1;
            *in_stack_00000040 = iVar7;
            iVar7 = iVar7 * 0x20;
            *arg2 = *arg2 + *(iVar7 + -0x10 + in_stack_00000038);
            *(arg2 + 8) = *(arg2 + 8) - *(iVar7 + -0x10 + in_stack_00000038);
        }
    }
    return;
}


/* fcn.00012354 @ 0x12354 */

void fcn.00012354(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012324(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00011060(arg1_00,arg1);
    }
    return;
}


/* fcn.00011060 @ 0x11060 */

int64_t fcn.00011060(int64_t arg1,int64_t arg2)

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


/* fcn.00011bcc @ 0x11bcc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.00011bcc(int64_t arg1)

{
    bool bVar1;
    int64_t *piVar2;
    uint64_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    int64_t arg1_00;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t *piStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t uStack_78;
    int64_t iStack_70;
    uint64_t uStack_68;
    uint64_t *puStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    piStackX_20 = NULL;
    (**(*0x14418 + 0x140))(0x14110,0,&piStackX_20);
    uStackX_10 = 0;
    (**(*0x144a0 + 0x18))(*0x144a0,&uStackX_10,0);
    uVar9 = 0;
    uVar8 = uStackX_10 >> 5;
    uStack_78 = uVar8;
    if (piStackX_20 != NULL) {
        piVar2 = *piStackX_20 + 8;
        if (*piVar2 != 0) {
            do {
                uVar9 = uVar9 + 1;
                piVar2 = piVar2 + 2;
            } while (*piVar2 != 0);
            uStack_58 = uVar9;
            if (uVar9 != 0) {
                iVar4 = uVar8 + uVar9 * 2;
                uStackX_10 = iVar4 * 0x10;
                puVar3 = fcn.00012324();
                puStack_60 = puVar3;
                if (uVar9 != 0) {
                    puVar6 = puVar3;
                    uVar12 = uVar9;
                    do {
                        puVar7 = puVar6 + (*piStackX_20 - puVar3);
                        if (puVar6 != puVar7) {
                            section..text(puVar6,puVar7,0x10);
                        }
                        puVar6 = puVar6 + 2;
                        uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                }
                uStackX_10 = iVar4 * 0x20;
                iVar4 = fcn.00012324();
                uVar12 = 0;
                uStackX_18 = 0;
                iStack_70 = iVar4;
                iVar5 = fcn.00012324();
                iStack_50 = iVar5;
                (**(*0x144a0 + 0x18))(*0x144a0,&uStackX_10,iVar5);
code_r0x00011cf7:
                do {
                    bVar1 = false;
                    uStack_68 = 0;
                    if (uVar8 == 0) break;
                    puVar3 = iVar5 + 8;
                    do {
                        if (bVar1) goto code_r0x00011cf7;
                        if (puVar3[1] != 0) {
                            uVar11 = 0;
                            if (uVar9 != 0) {
                                puVar6 = puStack_60;
                                do {
                                    if (bVar1) goto code_r0x00011ef6;
                                    if (puVar6[1] != 0) {
                                        uVar8 = *puVar3;
                                        uVar12 = *puVar6;
                                        if (uVar8 < uVar12) {
code_r0x00011d66:
                                            if (puVar3[1] + uVar8 <= uVar12) goto code_r0x00011da5;
                                        }
                                        else if (uVar12 + puVar6[1] <= uVar8) {
                                            if (uVar12 < uVar8) goto code_r0x00011da5;
                                            goto code_r0x00011d66;
                                        }
                                        fcn.00011984(puVar3 + -1,puVar6,iVar5,&uStack_78);
                                        bVar1 = true;
                                        uVar9 = uStack_58;
                                    }
code_r0x00011da5:
                                    uVar11 = uVar11 + 1;
                                    puVar6 = puVar6 + 2;
                                } while (uVar11 < uVar9);
                                if (bVar1) {
code_r0x00011ef6:
                                    uVar12 = uStackX_18;
                                    uVar8 = uStack_78;
                                    iVar4 = iStack_70;
                                    goto code_r0x00011df4;
                                }
                                uVar12 = uStackX_18;
                                uVar8 = uStack_78;
                            }
                            iVar4 = iStack_70;
                            uVar11 = uVar12 + 1;
                            puVar6 = uVar12 * 0x20 + iStack_70;
                            uStackX_18 = uVar11;
                            if (puVar6 != puVar3 + -1) {
                                section..text(puVar6,puVar3 + -1,0x20);
                            }
                            puVar3[1] = 0;
                            uVar12 = uVar11;
                        }
code_r0x00011df4:
                        uStack_68 = uStack_68 + 1;
                        puVar3 = puVar3 + 4;
                    } while (uStack_68 < uVar8);
                } while (bVar1);
                iVar5 = fcn.00012354((uVar12 + 1) * 0x20);
                *arg1 = 0;
                do {
                    uVar8 = 0;
                    if (uVar12 != 0) {
                        piVar2 = iVar4 + 0x10;
                        do {
                            if (*piVar2 != 0) break;
                            uVar8 = uVar8 + 1;
                            piVar2 = piVar2 + 4;
                        } while (uVar8 < uVar12);
                    }
                    uVar9 = 0;
                    if (uVar12 != 0) {
                        iVar10 = uVar8 << 5;
                        puVar3 = iVar4 + 8;
                        do {
                            if (((uVar9 != uVar8) && (puVar3[1] != 0)) && (*puVar3 < *(iVar10 + 8 + iVar4))) {
                                iVar10 = (-8 - iVar4) + puVar3;
                                uVar8 = uVar9;
                            }
                            uVar9 = uVar9 + 1;
                            puVar3 = puVar3 + 4;
                        } while (uVar9 < uVar12);
                    }
                    iVar10 = uVar8 * 0x20 + iVar4;
                    arg1_00 = *arg1 * 0x20 + iVar5;
                    if (arg1_00 != iVar10) {
                        section..text(arg1_00,iVar10,0x20);
                    }
                    *arg1 = *arg1 + 1;
                    *(iVar10 + 0x10) = 0;
                    iVar10 = *0x14418;
                    if (uVar12 <= *arg1) {
                        *arg1 = *arg1 + 1;
                        (**(iVar10 + 0x48))(iStack_50);
                        (**(*0x14418 + 0x48))(puStack_60);
                        (**(*0x14418 + 0x48))(iVar4);
                        return iVar5;
                    }
                } while( true );
            }
        }
    }
    *arg1 = uVar8 + 1;
    uStackX_10 = (uVar8 + 1) * 0x20;
    iVar4 = fcn.00012354(uStackX_10);
    (**(*0x144a0 + 0x18))(*0x144a0,&uStackX_10,iVar4);
    return iVar4;
}


/* fcn.000116e0 @ 0x116e0 */

//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.000116e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t aiStackX_8 [2];
    uchar uStackX_18;
    unkbyte7 StackX_19;
    int64_t iStackX_20;
    int64_t var_7fh;
    uint64_t uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
    uchar auStack_e8 [8];
    uchar auStack_e0 [24];
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    code *pcStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    uint32_t uStack_90;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int32_t var_31h;
    
    piVar2 = *0x144a8;
    iVar1 = *0x14130;
    iStackX_20 = 0;
    _uStackX_18 = CONCAT71(arg3 >> 8,0xd);
    aiStackX_8[0] = arg1;
    iVar3 = (**(*0x14418 + 0x138))(2,82000,0,&uStack_108,&iStackX_20);
    if (-1 < iVar3) {
        uVar5 = 0;
        if (uStack_108 != 0) {
            do {
                iVar3 = (**(*0x14418 + 0x98))(*(iStackX_20 + uVar5 * 8),82000,&iStack_f0);
                if (-1 < iVar3) {
                    uStack_f8 = 0;
                    iVar4 = 1;
                    do {
                        iVar3 = (**(iStack_f0 + 0x28))
                                          (iStack_f0,&uStack_f8,&uStackX_18,auStack_e0,aiStackX_8,auStack_e8);
                        if (iVar3 < 0) break;
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                    if (iVar4 == 0) {
                        iVar3 = *(iStackX_20 + uVar5 * 8);
                        if (iVar3 == 0) {
                            iVar3 = -0x7ffffffffffffff2;
                        }
                        else {
                            iVar3 = fcn.00013560(iVar3,auStack_e0,&uStack_100,auStack_e8);
                            if (-1 < iVar3) goto code_r0x0001183a;
                        }
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStack_108);
        }
        if (uVar5 == uStack_108) {
            iVar3 = -0x7ffffffffffffff2;
        }
code_r0x0001183a:
        if (iStackX_20 != 0) {
            (**(*0x14418 + 0x48))();
        }
    }
    if (-1 < iVar3) {
        uStack_a0 = uStack_100;
        uStack_a8 = 0x1353c;
        iVar3 = fcn.00012964(&uStack_c8);
        if (iVar3 < 0) {
            return iVar3;
        }
        if (uStack_90 < 0x1001) {
            iVar3 = ((uStack_c0 & 0xfff) != 0) + (uStack_c0 >> 0xc);
        }
        else {
            uVar5 = uStack_90 + uStack_c0;
            iVar3 = ((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc);
        }
        piVar2[2] = piVar2[2] + iVar3 * -0x1000;
        uStack_c8 = piVar2[2] + piVar2[1];
        *(arg2 + 8) = uStack_c8;
        *arg2 = *piVar2 + piVar2[2];
        uVar5 = piVar2[3];
        *(arg2 + 0x10) = iVar3 * 0x1000;
        *(arg2 + 0x18) = uVar5 | 0x10;
        if (0x1000 < uStack_90) {
            uStack_c8 = uStack_c8 + (uStack_90 - 1) & ~(uStack_90 - 1);
        }
        iVar3 = fcn.00012f70(&uStack_c8);
        if (-1 < iVar3) {
            iVar3 = fcn.00012cb8(&uStack_c8);
            iVar4 = *0x14130;
            if (-1 < iVar3) {
                *(*0x14130 + 0x50) = uStack_c8;
                *(iVar4 + 0x58) = uStack_c0;
                *(iVar4 + 0x60) = pcStack_b0;
                iVar3 = (*pcStack_b0)(iVar1,*0x14410);
            }
        }
        (**(*0x14418 + 0x48))(uStack_100);
    }
    return iVar3;
}


/* fcn.00012438 @ 0x12438 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.00012438(int64_t arg1,int64_t arg2)

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
        goto code_r0x0001293e;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x0001293e;
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
        goto code_r0x0001293e;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x0001293e;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x0001251e;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x0001293e;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x0001251e;
            goto code_r0x00012805;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x00012922:
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
code_r0x0001251e:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x0001293e;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x0001251e;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x000127bc:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x0001258b;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x0001293e;
                }
code_r0x000127e9:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x00012805:
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
                            goto code_r0x0001293e;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x0001293e;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x0001251e;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x0001258b;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x0001293e;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x00012922;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x0001251e;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x0001293e;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x0001251e;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x000127bc;
                }
                goto code_r0x000127e9;
            }
        }
    }
code_r0x0001258b:
    bVar9 = iStackX_18 == 1;
code_r0x0001293e:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


