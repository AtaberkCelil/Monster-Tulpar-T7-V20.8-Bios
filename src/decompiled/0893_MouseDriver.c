// decompiled by r2ghidra: 0893_MouseDriver.pe32
// functions: 13

/* entry0 @ 0x11064 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    *0x15520 = *(arg2 + 0x58);
    *0x15518 = *(arg2 + 0x60);
    *0x15510 = arg2;
    *0x15538 = *0x15518;
    (**(*0x15518 + 0x50))(0x201,8,0x146fc,0,0x15528);
    (**(*0x15538 + 0x50))(0x60000202,8,0x14708,0,0x15530);
    iVar1 = fcn.00011118(arg1);
    if (iVar1 < 0) {
        (**(*0x15538 + 0x70))(*0x15528);
        (**(*0x15538 + 0x70))(*0x15530);
    }
    return iVar1;
}


/* fcn.00011118 @ 0x11118 */

void fcn.00011118(int64_t arg1)

{
    int64_t iVar1;
    
    *0x155d0 = 0;
    *0x15570 = 0;
    *0x155c0 = 0x155c0;
    *0x155c8 = 0x155c0;
    *0x15560 = 0x15560;
    *0x15568 = 0x15560;
    *0x15090 = arg1;
    *0x15098 = arg1;
    iVar1 = (**(*0x15518 + 0x148))(0x15098,0x15050,0x15070,0);
    if (-1 < iVar1) {
        iVar1 = (**(*0x15518 + 0x50))(0x200,8,0x145b4,0x15578,0x155a0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x15518 + 0xa8))(0x15020,*0x155a0,0x15578);
            if (-1 < iVar1) {
                iVar1 = (**(*0x15518 + 0x50))(0x200,8,0x145b4,0x15590,0x15580);
                if (-1 < iVar1) {
                    (**(*0x15518 + 0xa8))(0x15060,*0x15580,0x15590);
                }
            }
        }
    }
    return;
}


/* fcn.00014324 @ 0x14324 */

void fcn.00014324(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    if (arg1 != 0) {
        iVar1 = fcn.000117e0();
        if (iVar1 < 0) {
            *(arg1 + 0x98) = 0;
        }
        *0x154f9 = iVar1 >= 0;
    }
    return;
}


/* fcn.000117e0 @ 0x117e0 */

void fcn.000117e0(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_8;
    uint64_t auStackX_10 [3];
    
    iStackX_8 = 0;
    auStackX_10[1] = 0;
    iVar1 = (**(*0x15518 + 0x138))(2,0x15040,0,auStackX_10,&iStackX_8);
    if ((-1 < iVar1) && (uVar2 = 0, auStackX_10[0] != 0)) {
        do {
            iVar1 = (**(*0x15518 + 0x98))(*(iStackX_8 + uVar2 * 8),0x15010,auStackX_10 + 1);
            if (-1 < iVar1) {
                (**(*0x15518 + 0x98))(*(iStackX_8 + uVar2 * 8),0x15040,*0x155a8 + 0x98);
                return;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < auStackX_10[0]);
    }
    return;
}


/* fcn.00011614 @ 0x11614 */

ulong fcn.00011614(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong auStackX_8 [2];
    ulong *apuStackX_18 [2];
    
    auStackX_8[0] = 0;
    apuStackX_18[0] = NULL;
    iVar1 = (**(*0x15518 + 0x118))(arg2,0x15060,auStackX_8,*(arg1 + 0x28),arg2,0x10);
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000003;
    }
    else {
        iVar1 = (**(*0x15518 + 0x40))(4,0x20,apuStackX_18);
        if (iVar1 < 0) {
            uVar2 = 0x8000000000000009;
        }
        else {
            apuStackX_18[0][2] = auStackX_8[0];
            apuStackX_18[0][3] = arg2;
            *apuStackX_18[0] = 0x15560;
            apuStackX_18[0][1] = *0x15568;
            **0x15568 = apuStackX_18[0];
            *0x15570 = *0x15570 + 1;
            *0x15568 = apuStackX_18[0];
            uVar2 = fcn.00014358(arg2);
            fcn.00012d74(*0x155a8);
        }
    }
    return uVar2;
}


/* fcn.00014358 @ 0x14358 */

int64_t fcn.00014358(int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    if (*0x154a8 == '\0') {
        aiStackX_8[0] = arg1;
        iVar1 = (**(*0x15518 + 0x40))(4,0x1f0,0x155a8);
        if (-1 < iVar1) {
            (**(*0x15518 + 0x168))(*0x155a8,0x1f0,0);
            **0x155a8 = 2;
            *(*0x155a8 + 8) = 0x117c4;
            *(*0x155a8 + 0x10) = 0x1188c;
            *(*0x155a8 + 0x18) = 0x11ca0;
            *(*0x155a8 + 0x20) = 0x11cbc;
            *(*0x155a8 + 0x28) = 0x11da0;
            *(*0x155a8 + 0x30) = 0x12148;
            *(*0x155a8 + 0x38) = 0x1216c;
            *(*0x155a8 + 0x40) = 0x121fc;
            *(*0x155a8 + 0x48) = 0x12220;
            *(*0x155a8 + 0x50) = 0x12598;
            *(*0x155a8 + 0x58) = 0x125bc;
            *(*0x155a8 + 0x60) = 0x125e8;
            *(*0x155a8 + 0x70) = 0x12710;
            *(*0x155a8 + 0x68) = 0x126e4;
            *(*0x155a8 + 0x78) = 0x12728;
            *(*0x155a8 + 0x80) = 0x129e0;
            *(*0x155a8 + 0x148) = 0x150b8;
            *(*0x155a8 + 0x150) = 3;
            *(*0x155a8 + 0x88) = 0x12b48;
            *(*0x155a8 + 0x90) = 0x12b7c;
            iVar1 = (**(*0x15518 + 0x80))(aiStackX_8,0x150a8,0,*0x155a8);
            if (-1 < iVar1) {
                (**(*0x15518 + 0x50))(0x200,8,fcn.00014324,*0x155a8,0x15548);
                iVar1 = (**(*0x15518 + 0xa8))(0x15040,*0x15548,0x155d8);
                *0x154a8 = '\x01';
            }
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00012d74 @ 0x12d74 */

void fcn.00012d74(uint32_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (iVar3 == 0) {
        return;
    }
    if (*(iVar3 + 0x198) == '\0') {
        return;
    }
    if (*(iVar3 + 0x170) == 2) {
        return;
    }
    if (*(iVar3 + 0x199) == '\0') {
code_r0x00012dcf:
        if ((*(iVar3 + 0x19a) != '\0') || (*(iVar3 + 0x19b) != '\0')) goto code_r0x00012de1;
    }
    else {
        if (*(iVar3 + 0x19a) == '\0') {
            if (*(iVar3 + 0x19b) == '\0') {
                return;
            }
            goto code_r0x00012dcf;
        }
code_r0x00012de1:
        *0x154aa = 1;
        if (*(iVar3 + 0x19b) != '\0') {
            iVar6 = *0x154fc;
            iVar4 = *0x15508;
            goto code_r0x00012e0b;
        }
    }
    iVar6 = *0x15598;
    iVar4 = *0x15588;
code_r0x00012e0b:
    (**(*0x15518 + 0x168))(*0x15500,*(iVar3 + 0x178) * *(iVar3 + 0x180) * 4,0);
    iVar7 = iVar6;
    iVar5 = iVar4;
    iVar2 = (**(*(iVar3 + 0x98) + 0x10))
                      (*(iVar3 + 0x98),*0x15500,1,iVar7,iVar5,0,0,*(iVar3 + 0x178),*(iVar3 + 0x180),0);
    if ((-1 < iVar2) &&
       (iVar2 = (**(*(iVar3 + 0x98) + 0x10))
                          (*(iVar3 + 0x98),*0x154d0,1,iVar7,iVar5,0,0,*(iVar3 + 0x178),*(iVar3 + 0x180),0),
       -1 < iVar2)) {
        uVar9 = 0;
        if (*(iVar3 + 0x180) != 0) {
            do {
                uVar8 = 0;
                if (*(iVar3 + 0x178) != 0) {
                    do {
                        iVar2 = uVar9 * *(iVar3 + 400) + uVar8;
                        cVar1 = *(*0x154f0 + 2 + iVar2 * 4);
                        if (((cVar1 != *(iVar3 + 0x176)) && (*(*0x154f0 + 1 + iVar2 * 4) != *(iVar3 + 0x175))) &&
                           (*(*0x154f0 + iVar2 * 4) != *(iVar3 + 0x174))) {
                            *(*0x154d0 + 2 + (*(iVar3 + 0x178) * uVar9 + uVar8) * 4) = cVar1;
                            *(*0x154d0 + 1 + (*(iVar3 + 0x178) * uVar9 + uVar8) * 4) =
                                 *(*0x154f0 + 1 + (uVar9 * *(iVar3 + 400) + uVar8) * 4);
                            *(*0x154d0 + (*(iVar3 + 0x178) * uVar9 + uVar8) * 4) =
                                 *(*0x154f0 + (uVar9 * *(iVar3 + 400) + uVar8) * 4);
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < *(iVar3 + 0x178));
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(iVar3 + 0x180));
        }
        iVar2 = (**(*(iVar3 + 0x98) + 0x10))
                          (*(iVar3 + 0x98),*0x154d0,2,0,0,iVar7,iVar5,*(iVar3 + 0x178),*(iVar3 + 0x180),0);
        if (-1 < iVar2) {
            *(iVar3 + 0x199) = 1;
            *0x154aa = 0;
        }
    }
    return;
}


/* fcn.000116fc @ 0x116fc */

ulong fcn.000116fc(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    ulong uStackX_20;
    
    uStackX_20 = 0;
    iVar1 = (**(*0x15518 + 0x118))(arg2,0x15060,&uStackX_20,*(arg1 + 0x28),arg2,2);
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000003;
    }
    else {
        for (piVar3 = *0x15560; piVar3 != 0x15560; piVar3 = *piVar3) {
            if (piVar3[3] == arg2) {
                *(*piVar3 + 8) = piVar3[1];
                *piVar3[1] = *piVar3;
                *0x15570 = *0x15570 + -1;
                (**(*0x15518 + 0x48))();
                break;
            }
        }
        uVar2 = (**(*0x15518 + 0x120))(arg2,0x15060,*(arg1 + 0x28),arg2);
    }
    return uVar2;
}


/* fcn.00013050 @ 0x13050 */

void fcn.00013050(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x199) != '\0') {
        if (*(iVar1 + 0x1e8) == '\0') {
            uVar4 = *(iVar1 + 0x180);
            uVar3 = *(iVar1 + 0x178);
            uVar2 = *0x15500;
        }
        else {
            uVar4 = *(iVar1 + 0x180);
            uVar3 = *(iVar1 + 0x178);
            uVar2 = 0;
        }
        (**(*(iVar1 + 0x98) + 0x10))(*(iVar1 + 0x98),uVar2,2,0,0,*0x15598,*0x15588,uVar3,uVar4,0);
        (**(*0x15518 + 0x168))(*0x154d0,*(iVar1 + 0x178) * *(iVar1 + 0x180) * 4,0);
        *(iVar1 + 0x199) = 0;
    }
    return;
}


/* fcn.00013134 @ 0x13134 */

void fcn.00013134(ulong noname_0,int64_t arg1)

{
    if (*0x154aa == '\0') {
        *0x154aa = 1;
        fcn.00013bd0(arg1);
        fcn.0001316c(arg1);
        *0x154aa = '\0';
    }
    return;
}


/* fcn.00013bd0 @ 0x13bd0 */

void fcn.00013bd0(uint32_t arg1)

{
    uint64_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    int iVar5;
    int64_t iVar6;
    char cVar7;
    int iVar8;
    int iVar9;
    uint in_register_0000000c;
    int64_t iVar10;
    uint32_t uVar11;
    int iVar12;
    int64_t *piVar13;
    ulong *puVar14;
    char cVar15;
    uint32_t uVar16;
    
    iVar10 = CONCAT44(in_register_0000000c,arg1);
    if (*0x154f9 == '\0') {
        return;
    }
    if (*(iVar10 + 0x19e) != '\0') {
        return;
    }
    if (*(iVar10 + 0x19c) != '\0') {
        return;
    }
    if (*(iVar10 + 0x1a0) != '\0') {
        return;
    }
    if (*(iVar10 + 0x1a2) != '\0') {
        return;
    }
    puVar1 = iVar10 + 0xc0;
    (**(*0x15518 + 0x168))(puVar1,0x20,0);
    piVar13 = *0x15560;
    if (*0x15560 != 0x15560) {
        do {
            iVar6 = (**(piVar13[2] + 8))(piVar13[2],puVar1);
            if (-1 < iVar6) {
                *(iVar10 + 0xa8) = *(piVar13[2] + 0x18);
                break;
            }
            piVar13 = *piVar13;
        } while (piVar13 != 0x15560);
        if (-1 < iVar6) {
            piVar2 = *(iVar10 + 0xa8);
            *puVar1 = ((*puVar1 - *piVar2) * 10000) /
                      (((piVar2[6] - *piVar2) * 10000) / *(*(*(*(iVar10 + 0x98) + 0x18) + 8) + 4));
            cVar4 = *0x154a0;
            *(iVar10 + 200) =
                 ((*(iVar10 + 200) - piVar2[2]) * 10000) /
                 (((piVar2[8] - piVar2[2]) * 10000) / *(*(*(*(iVar10 + 0x98) + 0x18) + 8) + 8));
            cVar7 = *0x15470;
            uVar11 = *(iVar10 + 0xd8) & 1;
            if (uVar11 == 0) {
                if ((((*0x15470 == '\0') && (cVar4 == '\x01')) || (*(iVar10 + 0x1e9) == '\0')) && (*0x154cc != '\0')) {
                    if (*0x154e4 == '\x01') {
                        *(iVar10 + 0x1a2) = 2;
                        *0x154e4 = '\0';
                    }
                    else {
                        *(iVar10 + 0x1a2) = 1;
                    }
                    cVar7 = '\x01';
                    *(iVar10 + 0x1e0) = *puVar1;
                    *(iVar10 + 0x1e4) = *(iVar10 + 200);
                    cVar4 = '\0';
                    *0x154a0 = '\0';
                    *(iVar10 + 0x1a3) = 1;
                    *0x15470 = '\x01';
                    *0x154cc = '\0';
                }
            }
            else {
                *(iVar10 + 0x1a2) = 1;
                *0x154cc = '\x01';
            }
            if (((uVar11 != 0) && (cVar7 == '\x01')) && (cVar4 == '\0')) {
                *0x15470 = '\0';
                *0x154a0 = '\x01';
                if (*(iVar10 + 0x1a4) == '\0') {
                    (**(*0x15518 + 0x58))(*(iVar10 + 0xe8),2,5000000);
                    *0x150e8 = '\x01';
                    *(iVar10 + 0x1a4) = 1;
                }
                if ((*0x150e8 == '\0') && (*(iVar10 + 0x1a4) != '\0')) {
                    *(iVar10 + 0x1a4) = 0;
                    *0x154e4 = '\x01';
                }
                *0x150e8 = *0x154e4 == '\x01';
                *(iVar10 + 0x1d8) = *puVar1;
                *(iVar10 + 0x1dc) = *(iVar10 + 200);
            }
            fcn.0001316c(arg1);
            return;
        }
    }
    piVar2 = iVar10 + 0xb0;
    (**(*0x15518 + 0x168))(piVar2,0x10);
    iVar6 = -0x7ffffffffffffff2;
    for (puVar14 = *0x155c0; puVar14 != 0x155c0; puVar14 = *puVar14) {
        iVar6 = (**(puVar14[2] + 8))(puVar14[2],piVar2);
        if (-1 < iVar6) {
            *(iVar10 + 0xa0) = *(puVar14[2] + 0x18);
            break;
        }
    }
    if (iVar6 < 0) {
        return;
    }
    *(iVar10 + 0x15c) = *(iVar10 + 0x15c) + (*piVar2 * 10) / **(iVar10 + 0xa0);
    *(iVar10 + 0x160) = *(iVar10 + 0x160) + (*(iVar10 + 0xb4) * 10) / *(*(iVar10 + 0xa0) + 8);
    *0x150ec = **(iVar10 + 0xa0);
    *0x150a4 = (*(iVar10 + 0xa0))[2];
    *(iVar10 + 0x168) = *(iVar10 + 0x168) + 1;
    if (*(iVar10 + 0x168) == 0x10) {
        uVar16 = 0x8000;
        iVar9 = *(iVar10 + 0x15c) / 10;
        uVar11 = 0x8000;
        iVar12 = *(iVar10 + 0x160) / 10;
        *(iVar10 + 0x15c) = iVar9;
        iVar8 = iVar9 - *(iVar10 + 0x154);
        *(iVar10 + 0x160) = iVar12;
        iVar5 = iVar12 - *(iVar10 + 0x158);
        while( true ) {
            uVar3 = uVar11 ^ uVar16;
            if (uVar11 * uVar11 <= iVar5 * iVar5 + iVar8 * iVar8) {
                uVar3 = uVar11;
            }
            uVar16 = uVar16 >> 1;
            if (uVar16 == 0) break;
            uVar11 = uVar3 | uVar16;
        }
        *(iVar10 + 0x164) = uVar3 >> 4;
        *(iVar10 + 0x154) = iVar9;
        *(iVar10 + 0x158) = iVar12;
        *(iVar10 + 0x168) = 0;
    }
    iVar12 = *0x15508;
    iVar9 = *0x154fc;
    cVar7 = '\x01';
    if (*0x150a0 == '\x01') {
        if ((*0x154c0 != '\0') || (*(iVar10 + 0xbd) != '\x01')) goto code_r0x000140b2;
        *(iVar10 + 0x154) = *(iVar10 + 0x15c);
        *(iVar10 + 0x158) = *(iVar10 + 0x160);
        *(iVar10 + 0x164) = 0;
        *0x150a0 = '\0';
        *(iVar10 + 0x19c) = 1;
        *0x154c0 = '\x01';
        *(iVar10 + 0x1a8) = iVar9;
        *(iVar10 + 0x1ac) = iVar12;
        cVar4 = '\0';
        cVar15 = '\x01';
    }
    else {
        cVar4 = *0x150a0;
        cVar15 = *0x154c0;
    }
    if (((cVar4 == '\0') && (cVar15 == '\x01')) && (*(iVar10 + 0x19c) = 1, *(iVar10 + 0xbd) == '\0')) {
        *(iVar10 + 0x154) = *(iVar10 + 0x15c);
        *(iVar10 + 0x158) = *(iVar10 + 0x160);
        *(iVar10 + 0x164) = 0;
        *(iVar10 + 0x1b0) = iVar9;
        *(iVar10 + 0x1b4) = iVar12;
        *(iVar10 + 0x19d) = 1;
        *0x150a0 = '\x01';
        *0x154c0 = '\0';
    }
code_r0x000140b2:
    if (*0x154a9 == '\0') {
        if (*0x150f1 != '\x01') {
            return;
        }
        if (*(iVar10 + 0xbc) != '\x01') {
            return;
        }
        *(iVar10 + 0x154) = *(iVar10 + 0x15c);
        *(iVar10 + 0x158) = *(iVar10 + 0x160);
        *(iVar10 + 0x164) = 0;
        if (*(iVar10 + 0x1a4) == '\0') {
            iVar6 = (**(*0x15518 + 0x58))(*(iVar10 + 0xe8),2,5000000);
            iVar12 = *0x15508;
            iVar9 = *0x154fc;
            *0x150f0 = '\x01';
            *(iVar10 + 0x1a4) = 1;
        }
        if ((*0x150f0 == '\0') && (*(iVar10 + 0x1a4) != '\0')) {
            *(iVar10 + 0x1a4) = 0;
            *0x154f8 = '\x01';
        }
        cVar15 = *0x154f8;
        *0x154a9 = '\x01';
        cVar4 = '\0';
        *0x150f0 = '\0';
        *0x150f1 = '\0';
        *(iVar10 + 0x19e) = 1;
        if (cVar15 == '\x01') {
            if (((*(iVar10 + 0x1b8) < iVar9 + -2) || (iVar9 + 2 < *(iVar10 + 0x1b8))) ||
               ((*(iVar10 + 0x1bc) < iVar12 + -2 || (iVar12 + 2 < *(iVar10 + 0x1bc))))) {
                iVar6 = (**(*0x15518 + 0x58))(*(iVar10 + 0xe8),2,5000000);
                iVar12 = *0x15508;
                iVar9 = *0x154fc;
                cVar7 = *0x154a9;
                cVar4 = '\0';
                *(iVar10 + 0x1a4) = 1;
            }
            else {
                *0x154f8 = '\0';
                cVar4 = '\x01';
            }
            *0x150f0 = cVar4;
        }
        *(iVar10 + 0x1b8) = iVar9;
        *(iVar10 + 0x1bc) = iVar12;
    }
    else {
        cVar7 = *0x154a9;
        cVar4 = *0x150f0;
    }
    if ((((cVar7 == '\x01') && (*0x150f1 == '\0')) && (*(iVar10 + 0x19e) = (cVar4 != '\0') + '\x01', -1 < iVar6)) &&
       (*(iVar10 + 0xbc) == '\0')) {
        *(iVar10 + 0x154) = *(iVar10 + 0x15c);
        *(iVar10 + 0x158) = *(iVar10 + 0x160);
        *(iVar10 + 0x164) = 0;
        *(iVar10 + 0x1c0) = iVar9;
        *(iVar10 + 0x1c4) = iVar12;
        *(iVar10 + 0x19f) = 1;
        *0x150f1 = '\x01';
        *0x154a9 = '\0';
    }
    return;
}


/* fcn.0001316c @ 0x1316c */

void fcn.0001316c(uint32_t arg1)

{
    uchar *puVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint in_register_0000000c;
    int64_t iVar13;
    int iVar14;
    int iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int iVar18;
    int iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    int iVar24;
    int64_t iVar25;
    uint64_t uVar26;
    uint32_t uStackX_8;
    uint32_t uStackX_10;
    ulong uVar27;
    ulong uVar28;
    
    iVar15 = *0x15598;
    iVar24 = *0x15588;
    iVar12 = CONCAT44(in_register_0000000c,arg1);
    bVar7 = false;
    bVar8 = false;
    if (*0x154f9 != '\0') {
        if (*(iVar12 + 0x170) != 1) {
            if ((((*(iVar12 + 0xc0) != 0) || (*(iVar12 + 200) != 0)) || (*(iVar12 + 0xd0) != 0)) &&
               (*(iVar12 + 0x198) != '\0')) {
                *0x154fc = *(iVar12 + 0xc0);
                bVar7 = true;
                *0x15508 = *(iVar12 + 200);
                *0x154d8 = *(iVar12 + 0xd0);
            }
            iVar9 = *0x154d8;
            iVar18 = *(iVar12 + 0xb0);
            iVar16 = *0x15598;
            iVar25 = *0x15588;
            iVar14 = *0x154fc;
            iVar19 = *0x15508;
            if ((((iVar18 != 0) || (*(iVar12 + 0xb4) != 0)) || (*(iVar12 + 0xb8) != 0)) && (*(iVar12 + 0x198) != '\0'))
            {
                if ((iVar18 / *0x150ec == 0) && (iVar18 != 0)) {
                    iVar19 = *(iVar12 + 0xf0);
                    iVar14 = ((iVar18 >> 0x1f & 0xfffffffeU) + 1) * iVar19;
                }
                else {
                    iVar19 = *(iVar12 + 0xf0);
                    iVar14 = fcn.000142c4(arg1 + 0x148,iVar18 / *0x150ec & 0xffffffff);
                    iVar14 = iVar14 * iVar19;
                }
                iVar14 = iVar14 + iVar15;
                iVar18 = *(iVar12 + 0xb4);
                iVar13 = *0x150a4;
                *0x154fc = iVar14;
                *(iVar12 + 0xb0) = 0;
                if ((iVar18 / iVar13 == 0) && (iVar18 != 0)) {
                    iVar18 = (iVar18 >> 0x1f & 0xfffffffeU) + 1;
                }
                else {
                    iVar18 = fcn.000142c4(arg1 + 0x148,iVar18 / iVar13 & 0xffffffff);
                }
                iVar19 = iVar18 * iVar19 + iVar24;
                iVar18 = *(iVar12 + 0xb8);
                *0x15508 = iVar19;
                *(iVar12 + 0xb4) = 0;
                if (iVar18 != 0) {
                    iVar3 = *(*(iVar12 + 0xa0) + 0x10);
                    *(iVar12 + 0xb8) = 0;
                    *0x154d8 = iVar9 + iVar18 / iVar3;
                }
                bVar7 = true;
            }
            if (bVar7) {
                if (iVar14 <= *0x154c8) {
                    iVar14 = *0x154c8;
                }
                uVar22 = *(iVar12 + 0x180);
                uVar20 = *(iVar12 + 0x178);
                if (*0x154b0 <= iVar14) {
                    iVar14 = *0x154b0 + -1;
                }
                *0x154fc = iVar14;
                if (*0x154b0 - *(iVar12 + 400) < iVar14) {
                    *(iVar12 + 0x178) = *0x154b0 - iVar14;
                }
                else {
                    *(iVar12 + 0x178) = *(iVar12 + 400);
                }
                if (iVar19 <= *0x154dc) {
                    iVar19 = *0x154dc;
                }
                if (*0x154ec <= iVar19) {
                    iVar19 = *0x154ec + -1;
                }
                *0x15508 = iVar19;
                if (*0x154ec - *(iVar12 + 0x188) < iVar19) {
                    *(iVar12 + 0x180) = *0x154ec - iVar19;
                }
                else {
                    *(iVar12 + 0x180) = *(iVar12 + 0x188);
                }
                uVar4 = iVar14 - iVar15;
                if (iVar14 < iVar15) {
                    uVar4 = iVar15 - iVar14;
                }
                uVar5 = iVar19 - iVar24;
                if (iVar19 < iVar24) {
                    uVar5 = iVar24 - iVar19;
                }
                if (*(iVar12 + 0x199) != '\0') {
                    if (*(iVar12 + 0x198) != '\0') {
                        if (*(iVar12 + 0x170) == 0) {
                            if (*(iVar12 + 0x1e8) == '\0') {
                                if ((((uVar4 < *(iVar12 + 0x178)) && (uVar5 < *(iVar12 + 0x180))) &&
                                    (*(iVar12 + 0x178) <= uVar20)) && (*(iVar12 + 0x180) <= uVar22)) {
                                    bVar8 = true;
                                    iVar16 = uVar22 * uVar20 * 4;
                                    (**(*0x15518 + 0x160))(*0x154b8,*0x15500,iVar16);
                                }
                                else {
                                    iVar16 = (**(*(iVar12 + 0x98) + 0x10))
                                                       (*(iVar12 + 0x98),*0x15500,2,0,0,iVar16,iVar25,uVar20,
                                                        uVar22,0);
                                    if (iVar16 < 0) {
                                        return;
                                    }
                                    iVar16 = uVar22 * uVar20 * 4;
                                }
                                (**(*0x15518 + 0x168))(*0x15500,iVar16,0);
                            }
                            (**(*0x15518 + 0x168))(*0x154d0,uVar22 * uVar20 * 4,0);
                            iVar15 = *0x15598;
                            iVar24 = *0x15588;
                            iVar14 = *0x154fc;
                            iVar19 = *0x15508;
                        }
                    }
                    uVar17 = 0;
                    if (*(iVar12 + 0x199) != '\0') {
                        if (*(iVar12 + 0x198) != '\0') {
                            uVar10 = 0;
                            if (*(iVar12 + 0x170) == 0) {
                                if (bVar8) {
                                    if (iVar14 < iVar15) {
                                        uStackX_10 = 0;
                                        uStackX_8 = iVar15 - iVar14;
                                    }
                                    else {
                                        uStackX_8 = 0;
                                        uStackX_10 = iVar14 - iVar15;
                                    }
                                    uVar6 = uVar4 - uVar20;
                                    if (uVar4 < uVar20) {
                                        uVar6 = uVar20 - uVar4;
                                    }
                                    if (iVar19 < iVar24) {
                                        uVar17 = iVar24 - iVar19;
                                    }
                                    else {
                                        uVar10 = iVar19 - iVar24;
                                    }
                                    uVar4 = uVar5 - uVar22;
                                    if (uVar5 < uVar22) {
                                        uVar4 = uVar22 - uVar5;
                                    }
                                    uVar26 = uVar4;
                                    iVar16 = (**(*(iVar12 + 0x98) + 0x10))
                                                       (*(iVar12 + 0x98),*0x15500,1,iVar14,iVar19,0,0,
                                                        *(iVar12 + 0x178),*(iVar12 + 0x180),0);
                                    if (iVar16 < 0) {
                                        return;
                                    }
                                    uVar21 = 0;
                                    if (uVar4 != 0) {
                                        do {
                                            uVar23 = 0;
                                            if (uVar6 != 0) {
                                                uVar11 = uStackX_8;
                                                iVar25 = uVar17 + uVar21;
                                                iVar16 = ((uVar10 + uVar21) * uVar20 + uStackX_10) * 4;
                                                do {
                                                    *(*0x15500 + 2 + (*(iVar12 + 0x178) * iVar25 + uVar11 + uVar23) * 4)
                                                         = *(iVar16 + 2 + *0x154b8);
                                                    *(*0x15500 + 1 + (*(iVar12 + 0x178) * iVar25 + uVar11 + uVar23) * 4)
                                                         = *(iVar16 + 1 + *0x154b8);
                                                    puVar1 = iVar16 + *0x154b8;
                                                    iVar16 = iVar16 + 4;
                                                    iVar13 = *(iVar12 + 0x178) * iVar25 + uVar11 + uVar23;
                                                    uVar23 = uVar23 + 1;
                                                    *(*0x15500 + iVar13 * 4) = *puVar1;
                                                } while (uVar23 < uVar6);
                                            }
                                            uVar21 = uVar21 + 1;
                                        } while (uVar21 < uVar26);
                                    }
                                    (**(*0x15518 + 0x160))(*0x154d0,*0x15500);
                                    uVar21 = 0;
                                    if (*(iVar12 + 0x180) != 0) {
                                        do {
                                            uVar23 = 0;
                                            if (*(iVar12 + 0x178) != 0) {
                                                do {
                                                    iVar16 = uVar21 * *(iVar12 + 400) + uVar23;
                                                    cVar2 = *(*0x154f0 + 2 + iVar16 * 4);
                                                    if (((cVar2 != *(iVar12 + 0x176)) &&
                                                        (*(*0x154f0 + 1 + iVar16 * 4) != *(iVar12 + 0x175))) &&
                                                       (*(*0x154f0 + iVar16 * 4) != *(iVar12 + 0x174))) {
                                                        *(*0x154d0 + 2 + (*(iVar12 + 0x178) * uVar21 + uVar23) * 4) =
                                                             cVar2;
                                                        *(*0x154d0 + 1 + (*(iVar12 + 0x178) * uVar21 + uVar23) * 4) =
                                                             *(*0x154f0 + 1 + (uVar21 * *(iVar12 + 400) + uVar23) * 4);
                                                        *(*0x154d0 + (*(iVar12 + 0x178) * uVar21 + uVar23) * 4) =
                                                             *(*0x154f0 + (uVar21 * *(iVar12 + 400) + uVar23) * 4);
                                                    }
                                                    uVar23 = uVar23 + 1;
                                                } while (uVar23 < *(iVar12 + 0x178));
                                            }
                                            uVar21 = uVar21 + 1;
                                        } while (uVar21 < *(iVar12 + 0x180));
                                    }
                                    uVar21 = 0;
                                    if (uVar26 != 0) {
                                        do {
                                            uVar23 = 0;
                                            if (uVar6 != 0) {
                                                iVar25 = uVar17 + uVar21;
                                                uVar11 = uStackX_8;
                                                iVar16 = ((uVar10 + uVar21) * uVar20 + uStackX_10) * 4;
                                                do {
                                                    *(iVar16 + 2 + *0x154b8) =
                                                         *(*0x154d0 + 2 +
                                                          (*(iVar12 + 0x178) * iVar25 + uVar11 + uVar23) * 4);
                                                    *(iVar16 + 1 + *0x154b8) =
                                                         *(*0x154d0 + 1 +
                                                          (*(iVar12 + 0x178) * iVar25 + uVar11 + uVar23) * 4);
                                                    iVar13 = *(iVar12 + 0x178) * iVar25 + uVar11 + uVar23;
                                                    uVar23 = uVar23 + 1;
                                                    *(iVar16 + *0x154b8) = *(*0x154d0 + iVar13 * 4);
                                                    iVar16 = iVar16 + 4;
                                                } while (uVar23 < uVar6);
                                            }
                                            uVar21 = uVar21 + 1;
                                        } while (uVar21 < uVar26);
                                    }
                                    iVar16 = (**(*(iVar12 + 0x98) + 0x10))
                                                       (*(iVar12 + 0x98),*0x154b8,2,0,0,*0x15598,*0x15588,uVar20
                                                        ,uVar22,0);
                                    if (iVar16 < 0) {
                                        return;
                                    }
                                    uVar28 = *(iVar12 + 0x180);
                                    uVar27 = *(iVar12 + 0x178);
                                }
                                else {
                                    iVar16 = (**(*(iVar12 + 0x98) + 0x10))
                                                       (*(iVar12 + 0x98),*0x15500,1,iVar14,iVar19,0,0,
                                                        *(iVar12 + 0x178),*(iVar12 + 0x180),0);
                                    if (iVar16 < 0) {
                                        return;
                                    }
                                    (**(*0x15518 + 0x160))
                                              (*0x154d0,*0x15500,*(iVar12 + 0x178) * *(iVar12 + 0x180) * 4);
                                    uVar22 = 0;
                                    if (*(iVar12 + 0x180) != 0) {
                                        do {
                                            uVar20 = 0;
                                            if (*(iVar12 + 0x178) != 0) {
                                                do {
                                                    iVar16 = uVar22 * *(iVar12 + 400) + uVar20;
                                                    cVar2 = *(*0x154f0 + 2 + iVar16 * 4);
                                                    if (((cVar2 != *(iVar12 + 0x176)) &&
                                                        (*(*0x154f0 + 1 + iVar16 * 4) != *(iVar12 + 0x175))) &&
                                                       (*(*0x154f0 + iVar16 * 4) != *(iVar12 + 0x174))) {
                                                        *(*0x154d0 + 2 + (*(iVar12 + 0x178) * uVar22 + uVar20) * 4) =
                                                             cVar2;
                                                        *(*0x154d0 + 1 + (*(iVar12 + 0x178) * uVar22 + uVar20) * 4) =
                                                             *(*0x154f0 + 1 + (uVar22 * *(iVar12 + 400) + uVar20) * 4);
                                                        *(*0x154d0 + (*(iVar12 + 0x178) * uVar22 + uVar20) * 4) =
                                                             *(*0x154f0 + (uVar22 * *(iVar12 + 400) + uVar20) * 4);
                                                    }
                                                    uVar20 = uVar20 + 1;
                                                } while (uVar20 < *(iVar12 + 0x178));
                                            }
                                            uVar22 = uVar22 + 1;
                                        } while (uVar22 < *(iVar12 + 0x180));
                                    }
                                    uVar28 = *(iVar12 + 0x180);
                                    uVar27 = *(iVar12 + 0x178);
                                }
                                iVar12 = (**(*(iVar12 + 0x98) + 0x10))
                                                   (*(iVar12 + 0x98),*0x154d0,2,0,0,*0x154fc,*0x15508,uVar27,
                                                    uVar28,0);
                                if (iVar12 < 0) {
                                    return;
                                }
                                iVar14 = *0x154fc;
                                iVar19 = *0x15508;
                            }
                        }
                    }
                }
                *0x15588 = iVar19;
                *0x15598 = iVar14;
            }
        }
    }
    return;
}


/* fcn.000142c4 @ 0x142c4 */

uint64_t fcn.000142c4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (piVar1[1] != 0) {
        do {
            if ((*(*piVar1 + uVar3 * 0xc) <= *(piVar1 + 0x1c)) && (*(piVar1 + 0x1c) <= *(*piVar1 + 4 + uVar3 * 0xc)))
            break;
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < *(piVar1 + 1));
    }
    if (uVar3 < *(piVar1 + 1)) {
        return (*(*piVar1 + 8 + uVar3 * 0xc) * arg2 * 100) / 10000;
    }
    return arg2 & 0xffffffff;
}


