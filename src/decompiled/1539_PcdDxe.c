// decompiled by r2ghidra: 1539_PcdDxe.pe32
// functions: 33

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t in_R9;
    
    *0x12878 = *(arg2 + 0x60);
    *0x12888 = *(arg2 + 0x58);
    *0x12870 = arg2;
    *0x12880 = arg1;
    fcn.000123b8();
    iVar1 = fcn.000123b8();
    if ((*(iVar1 + 0xc) == 0x20) || (*(iVar1 + 0xc) == 0x12)) {
        arg1 = 0x12620;
        fcn.00012354(0x12620,arg2,0x1253c,in_R9);
    }
    fcn.00010348(arg1,arg2);
    return;
}


/* fcn.000123b8 @ 0x123b8 */

int64_t fcn.000123b8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12890 == 0) {
        *0x12890 = 0;
        if (*(*0x12870 + 0x68) != 0) {
            piVar2 = *(*0x12870 + 0x70);
            do {
                if ((*0x12600 == *piVar2) && (*0x12608 == piVar2[1])) {
                    *0x12890 = (*(*0x12870 + 0x70))[uVar1 * 3 + 2];
                    return *0x12890;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12870 + 0x68));
        }
    }
    return *0x12890;
}


/* fcn.00012354 @ 0x12354 */

int64_t fcn.00012354(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x12878 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x12878 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x12878 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00010348 @ 0x10348 */

ulong fcn.00010348(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *puVar2;
    ulong noname_1;
    int64_t iVar3;
    
    fcn.00011548();
    (**(*0x12878 + 0x148))(0x12848,0x125a0,0x126f0,0x125e0,0x12650,0);
    iVar3 = 0x125c0;
    noname_1 = 0x12640;
    uVar1 = (**(*0x12878 + 0x148))(0x12848,0x12640,0x12800,0x125c0,0x126e0,0);
    fcn.00012354(0x12590,noname_1,0x12190,iVar3);
    iVar3 = fcn.00011dec(0x125f0,0x30006);
    puVar2 = fcn.00011118(iVar3,8);
    *0x12840 = *puVar2;
    return uVar1;
}


/* fcn.00011548 @ 0x11548 */

void fcn.00011548(int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int16_t *piVar8;
    uint32_t uVar9;
    
    iVar4 = fcn.00012470(param_1);
    fcn.000124b0(iVar4,param_2,param_3,param_4);
    *0x128b8 = *0x12850;
    iVar4 = fcn.000122e8(*(*0x12850 + 0x24) + *(*0x12850 + 0x14));
    if ((*(*0x128b8 + 0x14) != 0) && (iVar4 != *0x128b8)) {
        section..text(iVar4,*0x128b8,*(*0x128b8 + 0x14));
    }
    *0x128b8 = iVar4;
    uVar5 = fcn.00012424(0x12610);
    if (uVar5 != 0) {
        piVar8 = *(uVar5 + 2);
        iVar7 = uVar5 + 0x18;
        uVar6 = uVar5;
        do {
            piVar8 = piVar8 + uVar6;
            if (*piVar8 == -1) {
                piVar8 = NULL;
code_r0x000115f2:
                if (piVar8 == NULL) goto code_r0x00011625;
                if ((*0x12610 == *(piVar8 + 4)) && (*0x12618 == *(piVar8 + 8))) goto code_r0x00011603;
            }
            else if (*piVar8 == 4) goto code_r0x000115f2;
            uVar6 = piVar8[1];
        } while( true );
    }
    iVar7 = fcn.000122e8(0x50);
    iVar4 = *0x128b8;
    *0x128b0 = iVar7;
code_r0x00011661:
    uVar1 = *(iVar7 + 0x46);
    uVar2 = *(iVar7 + 0x44);
    *0x128e4 = uVar1 << 3;
    uVar3 = *(iVar4 + 0x46);
    *0x128a8 = *(iVar4 + 0x44);
    *0x128d8 = uVar3 << 3;
    *0x128dc = *(iVar7 + 0x48) << 4;
    *0x128e0 = *(iVar4 + 0x48) << 4;
    *0x12898 = *(iVar4 + 0x44) + uVar2;
    *0x128d4 = *0x128a8 - uVar3;
    *0x128e8 = uVar2;
    *0x128f0 = uVar2 - uVar1;
    *0x128ec = uVar1 == 0;
    *0x128d0 = uVar3 == 0;
    *0x128ac = uVar2 == 0;
    *0x128c8 = uVar3 + uVar1;
    *0x128c0 = fcn.000122e8(*0x128c8 * 8);
    iVar4 = fcn.000122e8(*0x12898 << 4);
    uVar9 = *0x12898 + 1;
    *0x128a0 = iVar4;
    if (1 < uVar9) {
        uVar5 = 1;
        do {
            *iVar4 = iVar4;
            uVar5 = uVar5 + 1;
            *(iVar4 + 8) = iVar4;
            iVar4 = iVar4 + 0x10;
        } while (uVar5 < uVar9);
    }
    return;
code_r0x00011603:
    if (piVar8 != NULL) {
        *0x12868 = piVar8 + 0xc;
        *0x12860 = piVar8[1] - 0x18;
    }
code_r0x00011625:
    *0x128b0 = iVar7;
    if (*(uVar5 + 0x30) != 0) {
        fcn.00011430(*(uVar5 + 0x30),0);
    }
    *(iVar4 + 0x18) = *(uVar5 + 0x30);
    goto code_r0x00011661;
}


/* fcn.00011dec @ 0x11dec */

ushort fcn.00011dec(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int *piVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    int *piVar7;
    
    piVar4 = NULL;
    if (*0x128ac == '\0') {
        piVar6 = *(*0x128b0 + 0x30) + *0x128b0;
        piVar2 = (*0x128dc & 0xfffffffffffffff0) + piVar6;
        piVar7 = *(*0x128b0 + 0x2c) + *0x128b0;
        if (piVar6 < piVar2) {
            piVar1 = piVar6;
            do {
                if ((*piVar1 == *arg1) && (piVar1[1] == *(arg1 + 8))) goto code_r0x00011e58;
                piVar1 = piVar1 + 2;
            } while (piVar1 < piVar2);
        }
        piVar1 = piVar4;
code_r0x00011e58:
        if (piVar1 != NULL) {
            if (*(*0x128b0 + 0x46) != 0) {
                piVar3 = piVar7;
                piVar2 = piVar4;
                do {
                    if ((arg2 == *piVar3) && (piVar1 - piVar6 >> 4 == *(piVar3 + 6))) {
                        return piVar7[piVar2 * 2 + 1];
                    }
                    uVar5 = piVar2 + 1;
                    piVar2 = uVar5;
                    piVar3 = piVar3 + 2;
                } while (uVar5 < *(*0x128b0 + 0x46));
            }
        }
    }
    piVar6 = *(*0x128b8 + 0x30) + *0x128b8;
    piVar2 = (*0x128e0 & 0xfffffffffffffff0) + piVar6;
    piVar7 = *(*0x128b8 + 0x2c) + *0x128b8;
    if (piVar6 < piVar2) {
        piVar1 = piVar6;
        do {
            if ((*piVar1 == *arg1) && (piVar1[1] == *(arg1 + 8))) goto code_r0x00011ed9;
            piVar1 = piVar1 + 2;
        } while (piVar1 < piVar2);
    }
    piVar1 = piVar4;
code_r0x00011ed9:
    if (*(*0x128b8 + 0x46) != 0) {
        piVar3 = piVar7;
        do {
            if ((arg2 == *piVar3) && (piVar1 - piVar6 >> 4 == *(piVar3 + 6))) {
                return piVar7[piVar4 * 2 + 1];
            }
            uVar5 = piVar4 + 1;
            piVar4 = uVar5;
            piVar3 = piVar3 + 2;
        } while (uVar5 < *(*0x128b8 + 0x46));
    }
    return 0;
}


/* fcn.00011118 @ 0x11118 */

int64_t fcn.00011118(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    int64_t arg1_00;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    
    uVar7 = *0x127e8;
    uStackX_10 = arg2;
    uVar3 = (**(*0x12878 + 0x18))(*0x127e8);
    arg1_00 = 0;
    uVar6 = *0x128e8 + 1;
    *0x127f8 = 2;
    *0x127f0 = uVar3;
    uVar2 = fcn.00010d5c(CONCAT71(uVar7 >> 8,arg1 < uVar6),arg1);
    if (arg1 < uVar6) {
        iVar8 = *(*0x128b0 + 0x34) + *0x128b0;
        iVar5 = *0x128b0;
    }
    else {
        iVar8 = *(*0x128b8 + 0x34) + *0x128b8;
        iVar5 = *0x128b8;
    }
    uVar10 = uVar2 & 0x20efffff;
    uVar2 = uVar2 & 0xd0000000;
    if (uVar2 == 0) {
        arg1_00 = uVar10 + iVar5;
    }
    else if (uVar2 == 0x10000000) {
        arg1_00 = *(uVar10 + iVar5) + iVar8;
    }
    else if (uVar2 == 0x40000000) {
        arg1_00 = *(uVar10 + iVar5) + *0x12840;
    }
    else if ((uVar2 + 0x80000000 & 0xefffffff) == 0) {
        if (arg1 < uVar6) {
            iVar4 = *(*0x128b0 + 0x30) + *0x128b0;
        }
        else {
            iVar4 = *(*0x128b8 + 0x30) + *0x128b8;
        }
        puVar9 = uVar10 + iVar5;
        uVar1 = *puVar9;
        iVar4 = puVar9[2] * 0x10 + iVar4;
        if (uVar2 == 0x90000000) {
            arg1_00 = *(puVar9[1] + iVar5) + iVar8;
        }
        else {
            arg1_00 = puVar9[1] + iVar5;
        }
        uStackX_8 = 0;
        iVar5 = (**(*0x12888 + 0x48))(uVar1 + iVar8,iVar4,0,&uStackX_8,0);
        if (iVar5 == -0x7ffffffffffffffb) {
            uVar6 = fcn.000122b8(0x8000000000000005,uStackX_8);
            iVar5 = (**(*0x12888 + 0x48))(uVar1 + iVar8,iVar4,0,&uStackX_8,uVar6);
        }
        else {
            uVar6 = uStackX_8;
        }
        uVar10 = uStackX_8;
        if (iVar5 == 0) {
            uVar11 = *(puVar9 + 10);
            if (uVar11 + arg2 <= uStackX_8) {
                if (arg2 == 0) {
                    fcn.00011f30(arg1 + -1,&uStackX_10);
                    arg2 = uStackX_10;
                    if (uVar10 - uVar11 < uStackX_10) {
                        arg2 = uVar10 - uVar11;
                    }
                }
                if ((arg2 != 0) && (arg1_00 != uVar11 + uVar6)) {
                    section..text(arg1_00,uVar11 + uVar6,arg2);
                }
            }
            (**(*0x12878 + 0x48))(uVar6);
        }
        uVar3 = *0x127f0;
    }
    *0x127f8 = 1;
    (**(*0x12878 + 0x20))(uVar3);
    return arg1_00;
}


/* fcn.00011430 @ 0x11430 */

ulong fcn.00011430(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    
    iVar2 = *0x128b0;
    if ((arg2 != '\0') && (*0x12868 != 0)) {
        uVar3 = *(*0x128b0 + 0x14) + 7 & 0xfffffff8;
        if (*0x12860 <= uVar3) {
            return 0x800000000000000e;
        }
        do {
            piVar1 = *0x12868 + uVar3;
            if ((*piVar1 == arg1) && (piVar1[1] == 0)) break;
            uVar3 = uVar3 + 7 + *(piVar1 + 2) & 0xfffffffffffffff8;
        } while (uVar3 < *0x12860);
        if (*0x12860 <= uVar3) {
            return 0x800000000000000e;
        }
        for (puVar4 = piVar1 + 0x14; puVar4 < *(piVar1 + 2) + piVar1; puVar4 = puVar4 + 1) {
            *((*puVar4 & 0xffffff) + iVar2) = *(puVar4 + 3);
        }
    }
    iVar2 = *0x128b8;
    uVar3 = *(*0x128b8 + 0x14) + 7 & 0xfffffff8;
    if (uVar3 < *0x12858) {
        do {
            piVar1 = *0x12850 + uVar3;
            if ((*piVar1 == arg1) && (piVar1[1] == 0)) break;
            uVar3 = uVar3 + 7 + *(piVar1 + 2) & 0xfffffffffffffff8;
        } while (uVar3 < *0x12858);
        if (uVar3 < *0x12858) {
            for (puVar4 = piVar1 + 0x14; puVar4 < *(piVar1 + 2) + piVar1; puVar4 = puVar4 + 1) {
                *((*puVar4 & 0xffffff) + iVar2) = *(puVar4 + 3);
            }
            return 0;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00011f30 @ 0x11f30 */

uint64_t fcn.00011f30(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    
    uVar5 = arg1 + 1;
    if (uVar5 < *0x128e8 + 1) {
        iVar2 = *(*0x128b0 + 0x28) + *0x128b0;
        iVar4 = *(*0x128b0 + 0x38) + *0x128b0;
    }
    else {
        arg1 = arg1 - *0x128e8;
        iVar2 = *(*0x128b8 + 0x28) + *0x128b8;
        iVar4 = *(*0x128b8 + 0x38) + *0x128b8;
    }
    uVar1 = *(iVar2 + arg1 * 4);
    if (uVar5 < *0x128e8 + 1) {
        iVar2 = *(*0x128b0 + 0x28) + *0x128b0;
    }
    else {
        iVar2 = *(*0x128b8 + 0x28) + *0x128b8;
    }
    uVar3 = 0;
    uVar5 = uVar3;
    if (arg1 != 0) {
        do {
            if ((*(iVar2 + uVar5 * 4) & 0xf000000) == 0) {
                uVar3 = uVar3 + 2;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < arg1);
    }
    uVar5 = *(iVar4 + uVar3 * 2);
    *arg2 = uVar5;
    if ((uVar1 & 0x40000000) == 0) {
        uVar5 = *(iVar4 + 2 + uVar3 * 2);
    }
    return uVar5;
}


/* fcn.000117d0 @ 0x117d0 */

ulong fcn.000117d0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t arg1_00;
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t *arg1_01;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uStackX_8;
    
    cVar1 = arg4;
    uVar6 = 0;
    arg1_00 = arg1 + -1;
    if (cVar1 == '\0') {
        iVar4 = *arg3;
        iVar3 = fcn.00010534(arg1);
        if (iVar4 != iVar3) {
            return 0x8000000000000002;
        }
    }
    else {
        fcn.00011f30(arg1_00,&uStackX_8);
        if (uStackX_8 < *arg3) {
            *arg3 = uStackX_8;
            return 0x8000000000000002;
        }
    }
    if ((arg1 < *0x128f0 + 1) || ((*0x128e8 + 1 <= arg1 && (arg1 < *0x128d4 + 1 + *0x128e8)))) {
        fcn.00011754(0,0,arg1,arg2);
    }
    uVar5 = *0x127e8;
    *0x127f0 = (**(*0x12878 + 0x18))(*0x127e8);
    uVar7 = *0x128e8 + 1;
    *0x127f8 = 2;
    uStackX_8 = uVar7;
    uVar2 = fcn.00010d5c(CONCAT71(uVar5 >> 8,arg1 < uVar7),arg1);
    iVar4 = *0x128b8;
    if (arg1 < uVar7) {
        iVar8 = *(*0x128b0 + 0x34) + *0x128b0;
        iVar3 = *0x128b0;
    }
    else {
        iVar8 = *(*0x128b8 + 0x34) + *0x128b8;
        iVar3 = *0x128b8;
    }
    arg1_01 = iVar3 + (uVar2 & 0x20efffff);
    uVar2 = uVar2 & 0xd0000000;
    uVar5 = uVar6;
    if (uVar2 == 0) {
        if (cVar1 == '\0') {
            arg3 = *arg3;
            if (arg3 == 1) {
                *arg1_01 = *arg2;
                goto code_r0x00011a2c;
            }
            if (arg3 == 2) {
                *arg1_01 = *arg2;
                goto code_r0x00011a2c;
            }
            if (arg3 == 4) {
                *arg1_01 = *arg2;
                goto code_r0x00011a2c;
            }
            if (arg3 == 8) {
                *arg1_01 = *arg2;
                goto code_r0x00011a2c;
            }
code_r0x00011a06:
            uVar5 = 0x800000000000000e;
            goto code_r0x00011a2c;
        }
        cVar1 = fcn.00011fe4(arg1_00,arg3);
        if (cVar1 != '\0') {
            if ((*arg3 == 0) || (arg1_01 == arg2)) goto code_r0x00011a2c;
            goto code_r0x000119b7;
        }
    }
    else if (uVar2 == 0x10000000) {
        cVar1 = fcn.00011fe4(arg1_00,arg3);
        if (cVar1 != '\0') {
            arg1_01 = *arg1_01 + iVar8;
            uVar5 = 0;
            if ((*arg3 == 0) || (arg1_01 == arg2)) goto code_r0x00011a2c;
code_r0x000119b7:
            section..text(arg1_01,arg2,*arg3);
            uVar5 = uVar6;
            goto code_r0x00011a2c;
        }
    }
    else if (uVar2 != 0x40000000) {
        if ((uVar2 + 0x80000000 & 0xefffffff) != 0) goto code_r0x00011a06;
        if (cVar1 != '\0') {
            cVar1 = fcn.00011fe4(arg1_00,arg3);
            if (cVar1 == '\0') goto code_r0x0001198a;
            uVar7 = uStackX_8;
        }
        if (arg1 < uVar7) {
            iVar4 = *(*0x128b0 + 0x30) + *0x128b0;
        }
        else {
            iVar4 = *(iVar4 + 0x30) + iVar4;
        }
        uVar5 = fcn.00011c40(arg1_01[2] * 0x10 + iVar4,*arg1_01 + iVar8,arg1_01[3],arg2);
        goto code_r0x00011a2c;
    }
code_r0x0001198a:
    uVar5 = 0x8000000000000002;
code_r0x00011a2c:
    *0x127f8 = 1;
    (**(*0x12878 + 0x20))(*0x127f0);
    return uVar5;
}


/* fcn.00011a60 @ 0x11a60 */

ulong fcn.00011a60(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t arg3_00;
    uint32_t *arg1_01;
    ulong uVar6;
    uint64_t unaff_RBX;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char in_stack_00000028;
    
    arg3_00 = fcn.00011dec(arg2,arg1 & 0xffffffff);
    fcn.00011754(arg1 & 0xffffffff,arg2,arg3_00,arg3);
    uVar6 = 0;
    arg1_00 = arg3_00 - 1;
    if (in_stack_00000028 == '\0') {
        iVar4 = *arg4;
        iVar3 = fcn.00010534(arg3_00);
        if (iVar4 != iVar3) {
            return 0x8000000000000002;
        }
    }
    else {
        fcn.00011f30(arg1_00,&stack0x00000008);
        if (unaff_RBX < *arg4) {
            *arg4 = unaff_RBX;
            return 0x8000000000000002;
        }
    }
    if ((arg3_00 < *0x128f0 + 1) || ((*0x128e8 + 1 <= arg3_00 && (arg3_00 < *0x128d4 + 1 + *0x128e8)))) {
        fcn.00011754(0,0,arg3_00,arg3);
    }
    uVar5 = *0x127e8;
    *0x127f0 = (**(*0x12878 + 0x18))(*0x127e8);
    uVar7 = *0x128e8 + 1;
    *0x127f8 = 2;
    uVar8 = uVar7;
    uVar2 = fcn.00010d5c(CONCAT71(uVar5 >> 8,arg3_00 < uVar7),arg3_00);
    iVar4 = *0x128b8;
    if (arg3_00 < uVar8) {
        iVar9 = *(*0x128b0 + 0x34) + *0x128b0;
        iVar3 = *0x128b0;
    }
    else {
        iVar9 = *(*0x128b8 + 0x34) + *0x128b8;
        iVar3 = *0x128b8;
    }
    arg1_01 = iVar3 + (uVar2 & 0x20efffff);
    uVar2 = uVar2 & 0xd0000000;
    uVar5 = uVar6;
    if (uVar2 == 0) {
        if (in_stack_00000028 == '\0') {
            arg4 = *arg4;
            if (arg4 == 1) {
                *arg1_01 = *arg3;
                goto code_r0x00011a2c;
            }
            if (arg4 == 2) {
                *arg1_01 = *arg3;
                goto code_r0x00011a2c;
            }
            if (arg4 == 4) {
                *arg1_01 = *arg3;
                goto code_r0x00011a2c;
            }
            if (arg4 == 8) {
                *arg1_01 = *arg3;
                goto code_r0x00011a2c;
            }
code_r0x00011a06:
            uVar5 = 0x800000000000000e;
            goto code_r0x00011a2c;
        }
        cVar1 = fcn.00011fe4(arg1_00,arg4);
        if (cVar1 != '\0') {
            if ((*arg4 == 0) || (arg1_01 == arg3)) goto code_r0x00011a2c;
            goto code_r0x000119b7;
        }
    }
    else if (uVar2 == 0x10000000) {
        cVar1 = fcn.00011fe4(arg1_00,arg4);
        if (cVar1 != '\0') {
            arg1_01 = *arg1_01 + iVar9;
            uVar5 = 0;
            if ((*arg4 == 0) || (arg1_01 == arg3)) goto code_r0x00011a2c;
code_r0x000119b7:
            section..text(arg1_01,arg3,*arg4);
            uVar5 = uVar6;
            goto code_r0x00011a2c;
        }
    }
    else if (uVar2 != 0x40000000) {
        if ((uVar2 + 0x80000000 & 0xefffffff) != 0) goto code_r0x00011a06;
        if (in_stack_00000028 != '\0') {
            cVar1 = fcn.00011fe4(arg1_00,arg4);
            if (cVar1 == '\0') goto code_r0x0001198a;
            uVar8 = uVar7;
        }
        if (arg3_00 < uVar8) {
            iVar4 = *(*0x128b0 + 0x30) + *0x128b0;
        }
        else {
            iVar4 = *(iVar4 + 0x30) + iVar4;
        }
        uVar5 = fcn.00011c40(arg1_01[2] * 0x10 + iVar4,*arg1_01 + iVar9,arg1_01[3],arg3);
        goto code_r0x00011a2c;
    }
code_r0x0001198a:
    uVar5 = 0x8000000000000002;
code_r0x00011a2c:
    *0x127f8 = 1;
    (**(*0x12878 + 0x20))(*0x127f0);
    return uVar5;
}


/* fcn.00011754 @ 0x11754 */

void fcn.00011754(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong in_stack_00000028;
    
    piVar2 = *0x128a0 + -0x10 + arg3 * 0x10;
    piVar1 = *piVar2;
    if (piVar1 != piVar2) {
        uVar3 = arg1 & 0xffffffff;
        if (arg2 == 0) {
            uVar3 = arg3;
        }
        do {
            (*piVar1[2])(arg2,uVar3,arg4,in_stack_00000028);
            piVar1 = *piVar1;
        } while (piVar1 != piVar2);
    }
    return;
}


/* fcn.000122b8 @ 0x122b8 */

ulong fcn.000122b8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12878 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001134c @ 0x1134c */

ulong fcn.0001134c(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_R8;
    int64_t *piVar3;
    int64_t *piVar4;
    uint16_t *puVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t in_stack_00000028;
    uint64_t in_stack_00000030;
    
    piVar3 = CONCAT44(in_R8,arg3);
    piVar4 = (arg4 & 0xfffffffffffffff0U) + piVar3;
    if (piVar3 < piVar4) {
        piVar6 = piVar3;
        do {
            if ((*piVar6 == *arg1) && (piVar6[1] == *(arg1 + 8))) goto code_r0x00011381;
            piVar6 = piVar6 + 2;
        } while (piVar6 < piVar4);
    }
    piVar6 = NULL;
code_r0x00011381:
    if (piVar6 == NULL) {
        return 0x800000000000000e;
    }
    uVar7 = piVar6 - piVar3 >> 4;
    uVar1 = 0;
    uVar2 = in_stack_00000030 >> 3;
    if (uVar2 == 0) {
        return 0x800000000000000e;
    }
    puVar5 = in_stack_00000028 + 6;
    while (*puVar5 != uVar7) {
        uVar1 = uVar1 + 1;
        puVar5 = puVar5 + 4;
        if (uVar2 <= uVar1) {
            return 0x800000000000000e;
        }
    }
    if (*arg2 != 0) {
        if (uVar2 <= uVar1) {
            return 0x800000000000000e;
        }
        do {
            if ((*(in_stack_00000028 + uVar1 * 8) == *arg2) && (*(in_stack_00000028 + 6 + uVar1 * 8) == uVar7)) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
        if (uVar1 < uVar2) {
            puVar5 = in_stack_00000028 + 6 + uVar1 * 8;
            do {
                uVar1 = uVar1 + 1;
                puVar5 = puVar5 + 4;
                if (uVar1 == uVar2) {
                    *arg2 = 0;
                    return 0x800000000000000e;
                }
                if (*puVar5 == uVar7) goto code_r0x000113c7;
            } while (uVar1 < uVar2);
        }
        return 0x800000000000000e;
    }
code_r0x000113c7:
    *arg2 = *(in_stack_00000028 + uVar1 * 8);
    return 0;
}


/* fcn.000122e8 @ 0x122e8 */

void fcn.000122e8(uint32_t arg1)

{
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg2;
    
    arg2 = CONCAT44(in_register_0000000c,arg1);
    arg1_00 = fcn.000122b8(arg2,arg2);
    if ((arg1_00 != 0) && (arg2 != 0)) {
        fcn.000102c0(arg1_00,arg2);
    }
    return;
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


/* fcn.00010afc @ 0x10afc */

int64_t * fcn.00010afc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    
    piVar1 = fcn.000122e8(*arg1 << 3);
    uVar6 = 0;
    uVar2 = *arg1;
    *piVar1 = *(arg2 + 6) * 0x10 + arg3;
    if (1 < uVar2) {
        puVar3 = arg2 + 0xe;
        iVar4 = uVar2 - 1;
        do {
            uVar2 = 0;
            iVar5 = *puVar3 * 0x10 + arg3;
            do {
                if (iVar5 == piVar1[uVar2]) goto code_r0x00010b67;
                uVar2 = uVar2 + 1;
            } while (uVar2 <= uVar6);
            uVar6 = uVar6 + 1;
            piVar1[uVar6] = iVar5;
code_r0x00010b67:
            puVar3 = puVar3 + 4;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    *arg1 = uVar6 + 1;
    return piVar1;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 8960 named .text
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


/* fcn.00012314 @ 0x12314 */

void fcn.00012314(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000122b8();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00012200 @ 0x12200 */

ulong fcn.00012200(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t arg2_00;
    char *pcVar3;
    uint64_t uVar4;
    
    pcVar3 = arg1;
    uVar4 = arg2;
    iVar1 = fcn.000121d4(arg1,arg2);
    arg2_00 = arg2 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < uVar4)) || (uVar4 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000121d4(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= pcVar3) {
        if (pcVar3 < arg3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < pcVar3) goto code_r0x00012295;
    }
    if (arg3 < pcVar3 + uVar4) {
        return 0x800000000000000f;
    }
code_r0x00012295:
    pcVar3 = pcVar3 + iVar1;
    for (; *arg3 != '\0'; arg3 = arg3 + 1) {
        *pcVar3 = *arg3;
        pcVar3 = pcVar3 + 1;
    }
    *pcVar3 = '\0';
    return 0;
}


/* fcn.00010534 @ 0x10534 */

void fcn.00010534(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_8 [32];
    
    arg1_00 = arg1 + -1;
    iVar2 = arg1_00 - *0x128e8;
    if (arg1 < *0x128e8 + 1) {
        iVar1 = *0x128b0;
        iVar2 = arg1_00;
    }
    else {
        iVar1 = *0x128b8;
    }
    if ((*(*(iVar1 + 0x28) + iVar1 + iVar2 * 4) >> 0x18 & 0xf) == 0) {
        fcn.00011f30(arg1_00,auStackX_8);
    }
    return;
}


/* fcn.00010d5c @ 0x10d5c */

uint fcn.00010d5c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (arg1 == '\0') {
        iVar2 = *(*0x128b8 + 0x28) + *0x128b8;
    }
    else {
        iVar2 = *(*0x128b0 + 0x28) + *0x128b0;
    }
    iVar1 = (arg2 + -1) - *0x128e8;
    if (arg1 != '\0') {
        iVar1 = arg2 + -1;
    }
    return *(iVar2 + iVar1 * 4);
}


/* fcn.00010d9c @ 0x10d9c */

uint32_t fcn.00010d9c(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg1 & 0xf000000;
    if ((arg1 & 0xf000000U) == 0) {
        return 5;
    }
    if (uVar2 == 0x1000000) {
        return arg1 >> 0x12 & 4;
    }
    if (uVar2 == 0x2000000) {
        return 1;
    }
    if (uVar2 != 0x4000000) {
        uVar1 = 3;
        if (uVar2 != 0x8000000) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return 2;
}


/* fcn.00010dec @ 0x10dec */

int64_t fcn.00010dec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    char *arg3_00;
    char *arg3_01;
    int64_t iVar5;
    
    cVar3 = arg2;
    if (cVar3 == '\0') {
        iVar1 = *(*0x128b8 + 0x40);
    }
    else {
        iVar1 = *(*0x128b0 + 0x40);
    }
    if (iVar1 == 0) {
        iVar5 = 0;
    }
    else {
        iVar2 = *0x128b8;
        if (cVar3 != '\0') {
            iVar2 = *0x128b0;
        }
        iVar5 = *(iVar2 + 0x34) + iVar2;
        iVar4 = (arg3 + -1) - *0x128e8;
        if (cVar3 != '\0') {
            iVar4 = arg3 + -1;
        }
        iVar2 = *(iVar2 + 0x40) + iVar2;
        arg3_00 = *(iVar2 + iVar4 * 8) + iVar5;
        arg3_01 = *(iVar2 + 4 + iVar4 * 8) + iVar5;
        if (arg1 == '\0') {
            iVar2 = 0;
            cVar3 = *arg3_00;
            while (cVar3 != '\0') {
                iVar2 = iVar2 + 1;
                cVar3 = arg3_00[iVar2];
            }
            iVar4 = 0;
            cVar3 = *arg3_01;
            while (cVar3 != '\0') {
                iVar4 = iVar4 + 1;
                cVar3 = arg3_01[iVar4];
            }
            iVar4 = iVar2 + 2 + iVar4;
            iVar5 = fcn.000122e8(iVar4);
            fcn.00012200(iVar5,iVar4,arg3_00);
            iVar2 = 0;
            cVar3 = *arg3_00;
            while (cVar3 != '\0') {
                iVar2 = iVar2 + 1;
                cVar3 = arg3_00[iVar2];
            }
            *(iVar2 + iVar5) = 0x2e;
            fcn.00012200(iVar5,iVar4,arg3_01);
        }
        else {
            iVar4 = 0;
            cVar3 = *arg3_00;
            while (cVar3 != '\0') {
                iVar4 = iVar4 + 1;
                cVar3 = arg3_00[iVar4];
            }
            iVar5 = fcn.00012314(iVar2,iVar4 + 1,arg3_00);
        }
    }
    return iVar5;
}


/* fcn.00010f04 @ 0x10f04 */

ulong fcn.00010f04(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong uVar4;
    char cVar5;
    uint64_t arg1_00;
    int64_t arg1_01;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint in_R8;
    int64_t *piVar9;
    
    cVar5 = arg1;
    iVar8 = *0x128b8;
    if (cVar5 != '\0') {
        iVar8 = *0x128b0;
    }
    piVar6 = *(iVar8 + 0x30) + iVar8;
    if (piVar6 < piVar6 + *(iVar8 + 0x48) * 2) {
        piVar9 = piVar6;
        do {
            if ((*piVar9 == *arg2) && (piVar9[1] == *(arg2 + 8))) goto code_r0x00010f68;
            piVar9 = piVar9 + 2;
        } while (piVar9 < piVar6 + *(iVar8 + 0x48) * 2);
    }
    piVar9 = NULL;
code_r0x00010f68:
    if (piVar9 != NULL) {
        uVar1 = *(iVar8 + 0x46);
        iVar8 = *(iVar8 + 0x2c) + iVar8;
        uVar7 = 0;
        if (uVar1 != 0) {
            do {
                if (*(iVar8 + 6 + uVar7 * 8) == piVar9 - piVar6 >> 4) {
                    if (CONCAT44(in_R8,arg3) == 0) {
                        *arg4 = 0;
                        arg1_01 = CONCAT71(uVar1 >> 8,1);
                        *(arg4 + 8) = 0;
code_r0x00010ff7:
                        uVar4 = fcn.00010dec(arg1_01,CONCAT71(arg2 >> 8,cVar5),*(iVar8 + 4 + uVar7 * 8));
                        *(arg4 + 0x10) = uVar4;
                        return 0;
                    }
                    if (*(iVar8 + uVar7 * 8) == CONCAT44(in_R8,arg3)) {
                        arg1_00 = *(iVar8 + 4 + uVar7 * 8);
                        uVar4 = fcn.00010534(arg1_00);
                        *(arg4 + 8) = uVar4;
                        arg2 = *(iVar8 + 4 + uVar7 * 8);
                        uVar2 = fcn.00010d5c(CONCAT71(arg1_00 >> 8,cVar5),arg2);
                        uVar3 = fcn.00010d9c(uVar2);
                        *arg4 = uVar3;
                        arg1_01 = 0;
                        goto code_r0x00010ff7;
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar1);
        }
    }
    return 0x800000000000000e;
}


/* fcn.00012470 @ 0x12470 */

ulong fcn.00012470(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x12878 + 0x98))(*0x12880,0x12580,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.000124b0 @ 0x124b0 */

ulong fcn.000124b0(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    
    auStackX_18[0] = arg2;
    if (arg1 != 0) {
        iStackX_20 = arg3;
        iVar1 = (**(*0x12878 + 0x98))(arg1,0x125d0,&iStackX_20);
        if (-1 < iVar1) {
            *0x12850 = 0;
            *0x12858 = 0;
            uVar2 = (**(iStackX_20 + 0x18))(iStackX_20,0x12630,0x19,0,0x12850,0x12858,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00012424 @ 0x12424 */

void fcn.00012424(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000123b8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012452:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012452;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011fe4 @ 0x11fe4 */

int64_t fcn.00011fe4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    unkuint7 Var3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    
    uVar6 = arg1 + 1;
    if (uVar6 < *0x128e8 + 1) {
        iVar1 = *(*0x128b0 + 0x28) + *0x128b0;
        iVar5 = *(*0x128b0 + 0x38) + *0x128b0;
    }
    else {
        arg1 = arg1 - *0x128e8;
        iVar1 = *(*0x128b8 + 0x28) + *0x128b8;
        iVar5 = *(*0x128b8 + 0x38) + *0x128b8;
    }
    if (uVar6 < *0x128e8 + 1) {
        iVar4 = *(*0x128b0 + 0x28) + *0x128b0;
    }
    else {
        iVar4 = *(*0x128b8 + 0x28) + *0x128b8;
    }
    uVar2 = 0;
    uVar6 = uVar2;
    if (arg1 != 0) {
        do {
            if ((*(iVar4 + uVar6 * 4) & 0xf000000) == 0) {
                uVar2 = uVar2 + 2;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < arg1);
    }
    uVar6 = *(iVar5 + uVar2 * 2);
    Var3 = uVar2 >> 8;
    if ((*(iVar1 + arg1 * 4) & 0x40000000) == 0) {
        if ((*arg2 <= uVar6) && (*arg2 != -1)) {
            *(iVar5 + 2 + uVar2 * 2) = *arg2;
            return CONCAT71(Var3,1);
        }
        *arg2 = uVar6;
    }
    return Var3 << 8;
}


/* fcn.00011c40 @ 0x11c40 */

int64_t fcn.00011c40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int aiStack_38 [2];
    uint64_t uStack_30;
    
    uStack_30 = 0;
    iVar3 = arg3;
    iVar1 = (**(*0x12888 + 0x48))(arg2,arg1,0,&uStack_30,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        uVar4 = in_stack_00000028 + in_stack_00000030;
        if (in_stack_00000028 + in_stack_00000030 <= uStack_30) {
            uVar4 = uStack_30;
        }
        iVar1 = fcn.000122b8(0x8000000000000005,uVar4);
        (**(*0x12888 + 0x48))(arg2,arg1,aiStack_38,&uStack_30,iVar1);
        if ((in_stack_00000028 != 0) && (in_stack_00000030 + iVar1 != arg4)) {
            section..text(in_stack_00000030 + iVar1,arg4,in_stack_00000028);
        }
        if (iVar3 == 0) {
            iVar3 = aiStack_38[0];
        }
        iVar2 = (**(*0x12888 + 0x58))(arg2,arg1,iVar3,uVar4,iVar1);
    }
    else {
        if (iVar1 != -0x7ffffffffffffff2) {
            return iVar1;
        }
        fcn.00011ad8(arg1,arg2,&uStack_30,0);
        iVar1 = fcn.000122e8(uStack_30);
        fcn.00011ad8(arg1,arg2,&uStack_30,iVar1);
        if ((in_stack_00000028 != 0) && (in_stack_00000030 + iVar1 != arg4)) {
            section..text(in_stack_00000030 + iVar1,arg4,in_stack_00000028);
        }
        uVar4 = 7;
        if (iVar3 != 0) {
            uVar4 = arg3 & 0xffffffff;
        }
        iVar2 = (**(*0x12888 + 0x58))(arg2,arg1,uVar4,uStack_30,iVar1);
    }
    (**(*0x12878 + 0x48))(iVar1);
    return iVar2;
}


/* fcn.00011ad8 @ 0x11ad8 */

void fcn.00011ad8(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    uint64_t uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int64_t arg3_00;
    int16_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    int16_t *piVar10;
    int16_t *piVar11;
    int64_t iVar12;
    bool bVar13;
    
    arg3[0] = 0;
    arg3[1] = 0;
    uVar9 = *0x12898;
    uVar5 = 1;
    piVar11 = arg2;
    if (uVar9 != 0) {
        do {
            uVar1 = uVar5 + 1;
            bVar13 = uVar1 < *0x128e8 + 1U;
            iVar6 = *0x128b8;
            if (bVar13) {
                iVar6 = *0x128b0;
            }
            uVar3 = fcn.00010d5c(CONCAT31(*0x128e8 + 1U >> 8,bVar13),uVar5);
            if (uVar3 < 0) {
                puVar8 = (uVar3 & 0x20efffff) + iVar6;
                iVar12 = *(iVar6 + 0x34) + iVar6;
                piVar10 = *puVar8 + iVar12;
                piVar7 = *(iVar6 + 0x30) + puVar8[2] * 0x10 + iVar6;
                if ((*arg1 == *piVar7) && (*(arg1 + 8) == piVar7[1])) {
                    iVar2 = *piVar11;
                    piVar4 = piVar11;
                    while ((iVar2 != 0 && (iVar2 == *piVar10))) {
                        piVar4 = piVar4 + 1;
                        piVar10 = piVar10 + 1;
                        iVar2 = *piVar4;
                    }
                    if (*piVar4 == *piVar10) {
                        arg3_00 = fcn.00010534(uVar5);
                        uVar5 = *(puVar8 + 10) + arg3_00;
                        if (*arg3 < uVar5) {
                            *arg3 = uVar5;
                        }
                        if (arg4 != 0) {
                            if ((uVar3 & 0xd0000000) == 0x90000000) {
                                iVar12 = *(puVar8[1] + iVar6) + iVar12;
                            }
                            else {
                                iVar12 = puVar8[1] + iVar6;
                            }
                            iVar6 = *(puVar8 + 10) + arg4;
                            if ((arg3_00 != 0) && (iVar6 != iVar12)) {
                                section..text(iVar6,iVar12,arg3_00);
                                uVar9 = *0x12898;
                            }
                        }
                        piVar11 = arg2;
                    }
                }
            }
            uVar5 = uVar1;
        } while (uVar1 <= uVar9);
    }
    return;
}


/* fcn.000120a8 @ 0x120a8 */

void fcn.000120a8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    uVar1 = *0x128a8;
    iVar2 = *0x128b8;
    if (arg1 != '\0') {
        uVar1 = *0x128e8;
        iVar2 = *0x128b0;
    }
    iVar6 = *0x128b0;
    iVar7 = *0x128b8;
    for (uVar5 = 1; uVar5 <= uVar1; uVar5 = uVar5 + 1) {
        if (arg1 == '\0') {
            uVar3 = *(*(iVar7 + 0x28) + iVar7 + (uVar5 - 1) * 4);
        }
        else {
            uVar3 = *(*(iVar6 + 0x28) + iVar6 + -4 + uVar5 * 4);
        }
        if ((uVar3 < 0) && (uVar4 = uVar3 & 0x20efffff, (*(uVar4 + 0x10 + iVar2) & 1) != 0)) {
            (**arg2)(arg2,*(uVar4 + iVar2) + *(iVar2 + 0x34) + iVar2,
                     *(iVar2 + 0x30) + *(uVar4 + 8 + iVar2) * 0x10 + iVar2);
            iVar6 = *0x128b0;
            iVar7 = *0x128b8;
        }
    }
    return;
}


/* fcn.000121d4 @ 0x121d4 */

uint64_t fcn.000121d4(uint32_t arg1,int64_t arg2)

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


