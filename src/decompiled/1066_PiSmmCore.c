// decompiled by r2ghidra: 1066_PiSmmCore.pe32
// functions: 100

/* entry0 @ 0x11184 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000111b0(arg1,arg2);
    iVar1 = fcn.00011520(arg1,arg2);
    if (iVar1 < 0) {
        fcn.000114a0();
    }
    return iVar1;
}


/* fcn.000111b0 @ 0x111b0 */

void fcn.000111b0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong noname_0;
    int64_t iVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iStackX_8;
    
    *0x1a798 = *(arg2 + 0x60);
    iVar12 = 0x1a7d0;
    *0x1a7a8 = "SMST";
    *0x1a7d8 = *(arg1 + 0x10);
    iVar10 = *0x1a7d8 << 5;
    *0x1a790 = arg2;
    *0x1a7a0 = arg1;
    (**(*0x1a798 + 0x40))(4,iVar10,0x1a7d0);
    if ((iVar10 != 0) && (*0x1a7d0 != *(arg1 + 0x18))) {
        iVar12 = iVar10;
        section..text(*0x1a7d0,*(arg1 + 0x18),iVar10);
    }
    iVar1 = *(arg1 + 0x18);
    iVar4 = 0x1a9e0;
    iVar11 = *(arg1 + 0x10);
    iVar8 = 2;
    do {
        iVar6 = 6;
        do {
            *iVar4 = iVar4;
            *(iVar4 + 8) = iVar4;
            iVar4 = iVar4 + 0x10;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar4 = fcn.000170d0(0x1a080,&iStackX_8);
    if ((-1 < iVar4) && (iStackX_8 != 0)) {
        *0x1a748 = *(iStackX_8 + 8);
    }
    if (iVar11 != 0) {
        puVar9 = iVar1 + 0x18;
        iVar4 = iVar11;
        do {
            if ((*puVar9 & 0x70) == 0) {
                iVar12 = CONCAT71(iVar12 >> 8,1);
                uVar7 = *(puVar9 + -0x10) + 0xfffU & 0xfffffffffffff000;
                fcn.00016558(uVar7,*(puVar9 + -8) + (*(puVar9 + -0x10) - uVar7) >> 0xc,iVar12);
                fcn.00015f84();
            }
            puVar9 = puVar9 + 0x20;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar11 != 0) {
            puVar9 = iVar1 + 0x18;
            do {
                if ((*puVar9 & 0x70) != 0) {
                    uVar7 = *(puVar9 + -0x10) + 0xfffU & 0xfffffffffffff000;
                    fcn.000161dc(6,uVar7,*(puVar9 + -8) + (*(puVar9 + -0x10) - uVar7) >> 0xc);
                    fcn.00015f84();
                }
                puVar9 = puVar9 + 0x20;
                iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
        }
    }
    iVar12 = *0x1a7d0;
    *0x1a7d0 = fcn.00016e9c(iVar10,*0x1a7d0);
    (**(*0x1a798 + 0x48))(iVar12);
    fcn.00017130();
    if (*0x1a790 != 0) {
        fcn.00017160(0x1a2b0);
    }
    noname_0 = 0x1a648;
    iVar12 = fcn.00017160(0x1a648);
    if (iVar12 == 0) {
        uVar7 = fcn.00011180();
        fcn.00011170();
        uVar2 = in(0x1808);
        iVar12 = fcn.000110f0(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar5 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000110e0();
        }
        iVar10 = fcn.000110f0(uVar5,0x1808);
        if ((uVar7 >> 9 & 1) == 0) {
            fcn.00011170();
        }
        else {
            fcn.00011160();
        }
        *0x1a7e8 = (iVar10 - iVar12) * 0x2685;
    }
    else {
        *0x1a7e8 = *(iVar12 + 0x18);
    }
    iVar10 = 0x1a7f0;
    iVar12 = 0x1a260;
    fcn.000170d0(0x1a260,0x1a7f0);
    fcn.000177ac(iVar12,iVar10);
    iStackX_8 = 0;
    *0x1a890 = fcn.00016e70(0x550);
    if (*0x1a890 != 0) {
        *0x1a888 = 0;
        *0x1a898 = 0x14;
        (**(*0x1a7a8 + 0xa8))(&iStackX_8,0x1a150,0,0x1a6b0);
        (**(*0x1a7a8 + 0xe0))(0x196a0,0x1a150,&iStackX_8);
        (**(*0x1a7a8 + 0xe0))(0x19598,0x1a170,&iStackX_8);
    }
    return;
}


/* fcn.00011520 @ 0x11520 */

ulong fcn.00011520(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t aiStackX_10 [3];
    
    *0x1aad8 = arg1;
    *(arg1 + 0x30) = "SMST";
    *(arg1 + 0x20) = 0x12074;
    *0x1aac8 = *(arg1 + 0x10);
    aiStackX_10[0] = arg2;
    *0x1aab8 = fcn.00016e40(arg1,*0x1aac8 << 5);
    if ((*0x1aac8 << 5 != 0) && (*0x1aab8 != *(*0x1aad8 + 0x18))) {
        section..text(*0x1aab8,*(*0x1aad8 + 0x18),*0x1aac8 << 5);
    }
    iVar3 = 0;
    if (*0x1a328 != 0) {
        iVar2 = 0;
        iVar1 = *0x1a328;
        do {
            fcn.000144c0(*(iVar2 + 0x1a320),iVar1,iVar2 + 0x1a330);
            iVar3 = iVar3 + 1;
            iVar2 = iVar3 * 0x20;
            iVar1 = *(iVar2 + 0x1a328);
        } while (iVar1 != 0);
    }
    iVar3 = fcn.00016b60();
    *0x1a721 = (**(iVar3 + 0x30))(0x1a1b0,0x1100000);
    if (*0x1a721 != '\0') {
        iVar3 = 0;
        if (*0x1a2c8 != 0) {
            iVar2 = 0;
            iVar1 = *0x1a2c8;
            do {
                fcn.000144c0(*(iVar2 + 0x1a2c0),iVar1,iVar2 + 0x1a2d0);
                iVar3 = iVar3 + 1;
                iVar2 = iVar3 * 0x20;
                iVar1 = *(iVar2 + 0x1a2c8);
            } while (iVar1 != 0);
        }
    }
    fcn.000121f4();
    (**(*0x1a7a8 + 0xc0))(0x1a230,0x13058,aiStackX_10);
    return 0;
}


/* fcn.000114a0 @ 0x114a0 */

ulong fcn.000114a0(void)

{
    ulong uVar1;
    
    if (*0x1a820 != 0) {
        fcn.00016edc(*0x1a820);
    }
    if (*0x1a800 != 0) {
        fcn.00016edc(*0x1a800);
    }
    if (*0x1a850 != 0) {
        fcn.00016edc(*0x1a850);
    }
    (**(*0x1a7a8 + 0xc0))(0x1a1c0,0,0x1a808);
    (**(*0x1a7a8 + 0xb0))(*0x1a828,0x1a1a0,0x1a678);
    uVar1 = (**(*0x1a7a8 + 0xc0))(0x1a2a0,0,0x1a860);
    if (*0x1a858 != 0) {
        (**(*0x1a798 + 0x30))(*0x1a858,((*0x1a870 & 0xfff) != 0) + (*0x1a870 >> 0xc));
        *0x1a858 = 0;
    }
    if (*0x1a868 != 0) {
        (**(*0x1a798 + 0x48))();
        *0x1a868 = 0;
    }
    if (*0x1a878 != 0) {
        (**(*0x1a7a8 + 0xb0))(*0x1a878,0x1a1f0,0x1a690);
    }
    return uVar1;
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
    
    //[00] -r-x section size 36864 named .text
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


/* fcn.000170d0 @ 0x170d0 */

ulong fcn.000170d0(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1a790;
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


/* fcn.00016558 @ 0x16558 */

ulong fcn.00016558(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    if ((((arg1 & 0xfffU) == 0) && (arg1 != 0)) && (arg2 != 0)) {
        piVar3 = *0x1a618;
        if (*0x1a618 != 0x1a618) {
            do {
                piVar2 = piVar3;
                piVar3 = piVar2;
                if (arg1 < piVar2) break;
                piVar3 = *piVar2;
            } while (piVar3 != 0x1a618);
            if ((piVar3 != 0x1a618) && (piVar2 < arg2 * 0x1000 + arg1)) {
                return 0x8000000000000002;
            }
        }
        iVar1 = piVar3[1];
        if ((iVar1 == 0x1a618) || (*(iVar1 + 0x10) * 0x1000 + iVar1 <= arg1)) {
            *(arg1 + 0x10) = arg2;
            *arg1 = piVar3;
            piVar2 = piVar3[1];
            *(arg1 + 8) = piVar2;
            *piVar2 = arg1;
            piVar3[1] = arg1;
            piVar2 = *(arg1 + 8);
            piVar4 = arg1;
            if (piVar2 != 0x1a618) {
                piVar4 = *piVar2;
                if (piVar4 - piVar2 >> 0xc == piVar2[2]) {
                    piVar2[2] = piVar2[2] + piVar4[2];
                    *(*piVar4 + 8) = piVar4[1];
                    *piVar4[1] = *piVar4;
                    piVar4 = piVar2;
                }
            }
            if (piVar3 != 0x1a618) {
                piVar3 = *piVar4;
                if (piVar3 - piVar4 >> 0xc == piVar4[2]) {
                    piVar4[2] = piVar4[2] + piVar3[2];
                    *(*piVar3 + 8) = piVar3[1];
                    *piVar3[1] = *piVar3;
                }
            }
            fcn.000161dc(7,arg1,arg2);
            if (arg3 == '\0') {
                fcn.00015f84();
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00015f84 @ 0x15f84 */

void fcn.00015f84(void)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t *arg1;
    int64_t iStackX_8;
    
    if (*0x1a768 == 0) {
        *0x1a768 = 1;
        iVar3 = 1;
        iVar2 = *0x1a770;
        if (*0x1a770 != 0) {
            do {
                if (*0x1a628 == 0x1a628) {
                    iVar2 = fcn.000163c0(0,6,1,&iStackX_8);
                    if (-1 < iVar2) {
                        iVar2 = 0x55;
                        puVar1 = iStackX_8 + 8;
                        do {
                            puVar4 = puVar1;
                            puVar4[-1] = 0x70616d6d;
                            *puVar4 = 0x1a628;
                            puVar4[1] = *0x1a630;
                            **0x1a630 = puVar4;
                            iVar2 = iVar2 + -1;
                            puVar1 = puVar4 + 6;
                            *0x1a630 = puVar4;
                        } while (iVar2 != 0);
                        iVar2 = *0x1a770;
                        goto code_r0x0001604d;
                    }
                    arg1 = NULL;
                }
                else {
code_r0x0001604d:
                    piVar5 = *0x1a628;
                    arg1 = *0x1a628 + -1;
                    *(**0x1a628 + 8) = (*0x1a628)[1];
                    *piVar5[1] = *piVar5;
                    *0x1a770 = iVar2;
                }
                iVar2 = *0x1a770 + -1;
                *0x1a770 = iVar2;
                if (*(iVar2 * 0x30 + 0x1a8c8) != 0) {
                    piVar5 = iVar2 * 0x30 + 0x1a8c0;
                    if (arg1 != piVar5) {
                        section..text(arg1,piVar5,0x30);
                    }
                    iVar2 = *0x1a770;
                    *(arg1 + 3) = 0;
                    piVar5 = arg1 + 1;
                    iVar3 = iVar2 * 0x30;
                    piVar6 = iVar3 + 0x1a8c8;
                    *piVar5 = piVar6;
                    puVar1 = *(iVar3 + 0x1a8d0);
                    arg1[2] = puVar1;
                    *puVar1 = piVar5;
                    *(iVar3 + 0x1a8d0) = piVar5;
                    *(*piVar6 + 8) = *(iVar3 + 0x1a8d0);
                    **(iVar3 + 0x1a8d0) = *piVar6;
                    *piVar6 = 0;
                }
            } while (iVar2 != 0);
            iVar3 = *0x1a768;
        }
        *0x1a768 = iVar3 + -1;
    }
    return;
}


/* fcn.000161dc @ 0x161dc */

void fcn.000161dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *arg1_00;
    uint32_t uVar3;
    uint64_t arg3_00;
    
    arg3_00 = arg2 + -1 + arg3 * 0x1000;
    piVar2 = *0x1a638;
    do {
        arg1_00 = piVar2;
        uVar3 = arg1;
        if (arg1_00 == 0x1a638) {
            if (((*0x1a640 != 0x1a638) && (*(*0x1a640 + 0x20) + 1 == arg2)) && (*(*0x1a640 + 0x14) == uVar3)) {
                *(*0x1a640 + 0x20) = arg3_00;
                return;
            }
            arg1_00 = 0x1a638;
code_r0x00016322:
            fcn.00016120(arg1_00,arg2,arg3_00,arg1 & 0xffffffff);
            return;
        }
        if (arg3_00 < arg1_00[3]) {
            if ((arg1_00[3] == arg3_00 + 1) && (*(arg1_00 + 0x14) == uVar3)) {
                arg1_00[3] = arg2;
                return;
            }
            goto code_r0x00016322;
        }
        piVar2 = *arg1_00;
        if ((arg1_00[3] <= arg2) && (arg3_00 <= arg1_00[4])) {
            if (*(arg1_00 + 0x14) != uVar3) {
                if (arg1_00[3] < arg2) {
                    fcn.00016120(arg1_00,arg1_00[3],arg2 + -1,*(arg1_00 + 0x14));
                }
                if (arg3_00 < arg1_00[4]) {
                    fcn.00016120(arg1_00,arg3_00 + 1,arg1_00[4],*(arg1_00 + 0x14));
                }
                iVar1 = *arg1_00;
                arg1_00[3] = arg2;
                arg1_00[4] = arg3_00;
                *(arg1_00 + 0x14) = uVar3;
                if (((iVar1 != 0x1a638) && (uVar3 == *(iVar1 + 0x14))) && (arg3_00 + 1 == *(iVar1 + 0x18))) {
                    arg1_00[4] = *(iVar1 + 0x20);
                    fcn.00016190(iVar1 - 8);
                }
                iVar1 = arg1_00[1];
                if (((iVar1 != 0x1a638) && (*(iVar1 + 0x14) == *(arg1_00 + 0x14))) &&
                   (*(iVar1 + 0x20) + 1 == arg1_00[3])) {
                    *(iVar1 + 0x20) = arg1_00[4];
                    fcn.00016190(arg1_00 - 8);
                }
            }
            return;
        }
    } while( true );
}


/* fcn.00016e9c @ 0x16e9c */

void fcn.00016e9c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00016e40(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00016e40 @ 0x16e40 */

ulong fcn.00016e40(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    iVar1 = fcn.000152d4(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000152d4 @ 0x152d4 */

int64_t fcn.000152d4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint *arg2_00;
    uint32_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint *puVar7;
    int64_t iStackX_20;
    
    iVar1 = arg1;
    if (iVar1 - 5U < 2) {
        uVar4 = CONCAT44(in_register_00000014,arg2) + 0x28;
        if (uVar4 < 0x801) {
            uVar5 = CONCAT44(in_register_00000014,arg2) + 0x67U >> 6;
            uVar3 = uVar5;
            uVar4 = uVar5 & 0xffffffff;
            if (uVar3 == 0) {
                uVar6 = 0xffffffff;
            }
            else {
                uVar6 = 0x1f;
                while (0 < uVar3) {
                    uVar6 = uVar6 - 1;
                    uVar3 = uVar4 * 2;
                    uVar4 = uVar3;
                }
            }
            uVar3 = uVar6 + 1;
            if ((uVar5 & uVar5 - 1) == 0) {
                uVar3 = uVar6;
            }
            iVar2 = fcn.00015108(arg1,uVar3,&iStackX_20);
            if (iVar2 < 0) {
                return iVar2;
            }
            *arg3 = iStackX_20 + 0x18;
            return iVar2;
        }
        uVar4 = ((uVar4 & 0xfff) != 0) + (uVar4 >> 0xc);
        if (iVar1 - 5U < 2) {
            if (uVar4 < 0x10000000000001) {
                for (iVar2 = *0x1a620; iVar2 != 0x1a618; iVar2 = *(iVar2 + 8)) {
                    if (uVar4 <= *(iVar2 + 0x10)) {
                        puVar7 = 0xffffffffffffffff;
                        arg2_00 = fcn.0001634c(iVar2,uVar4,-1);
                        goto code_r0x000153d7;
                    }
                }
                puVar7 = 0xffffffffffffffff;
                arg2_00 = 0xffffffffffffffff;
code_r0x000153d7:
                if (arg2_00 != puVar7) {
                    fcn.000161dc(arg1 & 0xffffffff,arg2_00,uVar4);
                    fcn.00015f84();
                    *(arg2_00 + 4) = uVar4 * 0x1000;
                    *arg2_00 = 0x64687073;
                    *(arg2_00 + 1) = 0;
                    arg2_00[2] = iVar1;
                    arg2_00[uVar4 * 0x400 + -4] = 0x6c747073;
                    *(arg2_00 + uVar4 * 0x400 + -2) = *(arg2_00 + 4);
                    *arg3 = arg2_00 + 6;
                    return 0;
                }
            }
            return -0x7ffffffffffffff7;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00017130 @ 0x17130 */

int64_t fcn.00017130(void)

{
    if (*0x1a7e0 == 0) {
        fcn.000170d0(0x1a1d0,0x1a7e0);
    }
    return *0x1a7e0;
}


/* fcn.00017160 @ 0x17160 */

void fcn.00017160(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00017130();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001718e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001718e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011180 @ 0x11180 */

uint64_t fcn.00011180(void)

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


/* fcn.00011170 @ 0x11170 */

void fcn.00011170(void)

{
    return;
}


/* fcn.000110f0 @ 0x110f0 */

uint64_t fcn.000110f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110e2 @ 0x110e2 */

void fcn.000110e2(void)

{
    return;
}


/* fcn.00011160 @ 0x11160 */

void fcn.00011160(void)

{
    return;
}


/* fcn.000177ac @ 0x177ac */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000177ac(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t iStackX_8;
    uint *puStackX_10;
    uint64_t uStackX_18;
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t aiStack_28 [2];
    int64_t var_bp_10h;
    
    iVar4 = 0;
    uStackX_20 = 0;
    iStackX_8 = arg1;
    puStackX_10 = arg2;
    iVar2 = (**(*0x1a798 + 0x40))(0,0x38,&puStackX_10);
    if (-1 < iVar2) {
        iVar2 = (**(*0x1a798 + 0x28))(0,0,4,&uStackX_20);
        if (iVar2 < 0) {
            (**(*0x1a798 + 0x48))(puStackX_10);
        }
        else {
            (**(*0x1a798 + 0x168))(puStackX_10,0x38,0);
            *puStackX_10 = 1;
            puStackX_10[1] = 1;
            puStackX_10[2] = 0x28;
            puStackX_10[4] = 7;
            *(puStackX_10 + 6) = uStackX_20;
            iVar2 = *0x1a798;
            *(puStackX_10 + 10) = 4;
            (**(iVar2 + 0xc0))(0x1a030,puStackX_10);
        }
    }
    iVar2 = (**(*0x1a798 + 0x140))(0x1a290,0,aiStack_28);
    if (-1 < iVar2) {
        uStackX_18 = 0;
        iVar2 = (**(aiStack_28[0] + 0x18))(aiStack_28[0],&uStackX_18,0);
        if ((iVar2 == -0x7ffffffffffffffb) && (iVar2 = (**(*0x1a798 + 0x40))(4,uStackX_18,&iStackX_8), -1 < iVar2)) {
            iVar2 = (**(aiStack_28[0] + 0x18))(aiStack_28[0],&uStackX_18,iStackX_8);
            if (-1 < iVar2) {
                *0x1a838 = uStackX_18 >> 5;
                puVar3 = fcn.00016e40();
                *0x1a820 = puVar3;
                uVar1 = *0x1a838;
                if (puVar3 != NULL) {
                    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                        *puVar3 = *(iVar4 + 8 + iStackX_8);
                        puVar3[1] = *(iVar4 + 0x10 + iStackX_8);
                        puVar3 = puVar3 + 2;
                        iVar4 = iVar4 + 0x20;
                    }
                    (**(*0x1a798 + 0x48))(iStackX_8);
                    (**(*0x1a7a8 + 0xc0))(0x1a1c0,0x17630,0x1a808);
                    (**(*0x1a7a8 + 0xa8))(0x1a828,0x1a1a0,0,0x1a678);
                    (**(*0x1a7a8 + 0xc0))(0x1a2a0,0x17e5c,0x1a860);
                    return 0;
                }
                *0x1a838 = 0;
                iVar2 = -0x7ffffffffffffff7;
                *0x1a820 = NULL;
            }
            (**(*0x1a798 + 0x48))(iStackX_8);
        }
    }
    return iVar2;
}


/* fcn.00016e70 @ 0x16e70 */

void fcn.00016e70(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00016e40(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00011040(arg1_00,arg1);
    }
    return;
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t arg2)

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


/* fcn.00016edc @ 0x16edc */

ulong fcn.00016edc(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    char cVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t *piVar11;
    
    cVar3 = fcn.00016dfc(arg1);
    if (cVar3 == '\0') {
    //WARNING: Could not recover jumptable at 0x00016f07. Too many branches
    //WARNING: Treating indirect jump as call
        uVar5 = (**(*0x1a798 + 0x48))();
        return uVar5;
    }
    iVar7 = 0;
    if ((((arg1 == 0) || (piVar6 = arg1 + -0x18, *piVar6 != 0x64687073)) ||
        (uVar1 = *(arg1 + -8), *((uVar1 - 0x10) + piVar6) != 0x6c747073)) || (uVar1 != *((uVar1 - 8) + piVar6))) {
        return 0x8000000000000002;
    }
    if (uVar1 < 0x801) {
        if (*(arg1 + -0x10) != 5) {
            if (*(arg1 + -0x10) == 6) {
                iVar7 = 6;
            }
            else {
                iVar7 = 0xc;
            }
        }
        uVar4 = uVar1 & 0xffffffff;
        if (uVar1 == 0) {
            iVar10 = -1;
        }
        else {
            iVar10 = 0x1f;
            for (; 0 < uVar4; uVar4 = uVar4 * 2) {
                iVar10 = iVar10 + -1;
            }
        }
        *piVar6 = 0;
        *(arg1 + -0x10) = 0;
        *(arg1 + -0x14) = 1;
        *((uVar1 - 0x10) + piVar6) = 0;
        *((uVar1 - 8) + piVar6) = 0;
        piVar6 = (iVar10 + -6 + iVar7) * 0x10 + 0x1a9e0;
        iVar7 = *piVar6;
        *arg1 = iVar7;
        *(arg1 + 8) = piVar6;
        *(iVar7 + 8) = arg1;
        *piVar6 = arg1;
        return 0;
    }
    iVar7 = ((uVar1 & 0xfff) != 0) + (uVar1 >> 0xc);
    if ((((piVar6 & 0xfff) == 0) && (piVar6 != NULL)) && (iVar7 != 0)) {
        piVar9 = *0x1a618;
        if (*0x1a618 != 0x1a618) {
            do {
                piVar8 = piVar9;
                piVar9 = piVar8;
                if (piVar6 < piVar8) break;
                piVar9 = *piVar8;
            } while (piVar9 != 0x1a618);
            if ((piVar9 != 0x1a618) && (piVar8 < piVar6 + iVar7 * 0x200)) {
                return 0x8000000000000002;
            }
        }
        iVar10 = piVar9[1];
        if ((iVar10 == 0x1a618) || (*(iVar10 + 0x10) * 0x1000 + iVar10 <= piVar6)) {
            *(arg1 + -8) = iVar7;
            *piVar6 = piVar9;
            puVar2 = piVar9[1];
            *(arg1 + -0x10) = puVar2;
            *puVar2 = piVar6;
            piVar9[1] = piVar6;
            piVar8 = *(arg1 + -0x10);
            piVar11 = piVar6;
            if (piVar8 != 0x1a618) {
                piVar11 = *piVar8;
                if (piVar11 - piVar8 >> 0xc == piVar8[2]) {
                    piVar8[2] = piVar8[2] + piVar11[2];
                    *(*piVar11 + 8) = piVar11[1];
                    *piVar11[1] = *piVar11;
                    piVar11 = piVar8;
                }
            }
            if (piVar9 != 0x1a618) {
                piVar9 = *piVar11;
                if (piVar9 - piVar11 >> 0xc == piVar11[2]) {
                    piVar11[2] = piVar11[2] + piVar9[2];
                    *(*piVar9 + 8) = piVar9[1];
                    *piVar9[1] = *piVar9;
                }
            }
            fcn.000161dc(7,piVar6,iVar7);
            fcn.00015f84();
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000144c0 @ 0x144c0 */

ulong fcn.000144c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    ulong *arg1_00;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong unaff_retaddr;
    
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    iVar5 = arg2;
    arg1_00 = fcn.00016e70(0x40);
    if (arg1_00 == NULL) {
code_r0x000144fd:
        uVar3 = 0x8000000000000009;
    }
    else {
        *arg1_00 = 0x68696d73;
        arg1_00[3] = arg1;
        arg1_00[4] = unaff_retaddr;
        if (arg2 == 0) {
            pcVar4 = "smie";
        }
        else {
            pcVar4 = fcn.00014328(arg2,CONCAT71(iVar5 >> 8,1));
            if (pcVar4 == NULL) {
                fcn.00016edc(arg1_00);
                goto code_r0x000144fd;
            }
        }
        arg1_00[5] = pcVar4;
        piVar1 = arg1_00 + 1;
        *piVar1 = pcVar4 + 0x28;
        puVar2 = *(pcVar4 + 0x30);
        arg1_00[2] = puVar2;
        *puVar2 = piVar1;
        uVar3 = 0;
        *(pcVar4 + 0x30) = piVar1;
        *arg3 = arg1_00;
    }
    return uVar3;
}


/* fcn.00016b60 @ 0x16b60 */

int64_t fcn.00016b60(void)

{
    if (*0x1a7b0 == 0) {
        (**(*0x1a798 + 0x140))(0x1a130,0,0x1a7b0);
    }
    return *0x1a7b0;
}


/* fcn.000121f4 @ 0x121f4 */

void fcn.000121f4(void)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ulong *puVar5;
    ulong *arg1;
    ulong *arg1_00;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong uStackX_8;
    uchar auStackX_10 [8];
    
    (**(*0x1a798 + 0x40))(4,0x60,0x1aad0);
    fcn.00011040(*0x1aad0,0x60);
    iVar6 = *0x1aad8;
    **0x1aad0 = 0x1000;
    *(*0x1aad0 + 2) = *(iVar6 + 8);
    *(*0x1aad0 + 4) = *0x1a790;
    *(*0x1aad0 + 0x10) = *(iVar6 + 0x50);
    *(*0x1aad0 + 0x12) = *(iVar6 + 0x58);
    (*0x1aad0)[0x14] = 5;
    (*0x1aad0)[0x15] = 6;
    uStackX_8 = 0;
    (**(*0x1a798 + 0x148))(&uStackX_8,0x1a000,*0x1aad0,0);
    fcn.000152d4(6,0x108,0x1aac0);
    fcn.00011040(*0x1aac0,0x108);
    iVar6 = *0x1aad8;
    **0x1aac0 = 0x76726473;
    *(*0x1aac0 + 0x15) = 0x1000;
    (*0x1aac0)[0x16] = *(iVar6 + 8);
    (*0x1aac0)[0x17] = *0x1a790;
    (*0x1aac0)[0x1d] = *(iVar6 + 0x50);
    (*0x1aac0)[0x1e] = *(iVar6 + 0x58);
    *(*0x1aac0 + 0x1f) = 5;
    *(*0x1aac0 + 0xfc) = 6;
    (*0x1aac0)[0x11] = *(iVar6 + 0x60);
    (*0x1aac0)[0x12] = *(iVar6 + 0x50);
    (*0x1aac0)[0x13] = ((*(iVar6 + 0x58) & 0xfff) != 0) + (*(iVar6 + 0x58) >> 0xc);
    (*0x1aac0)[0x14] = 0;
    piVar4 = *0x1aac0 + 0x14;
    puVar5 = *0x1aac0 + 0x15;
    if (piVar4 == NULL) {
        return;
    }
    arg1 = NULL;
    arg1_00 = NULL;
    iVar7 = -0x7ffffffffffffff7;
    if (*piVar4 != 0) {
        iVar6 = 0x1a000;
        iVar7 = fcn.00014c14(*piVar4,0x1a000,auStackX_10);
        if (-1 < iVar7) {
            return;
        }
    }
    iVar6 = fcn.00014808(0x1a000,CONCAT71(iVar6 >> 8,1));
    if (iVar6 != 0) {
        arg1 = fcn.00016e70(0x40);
        if (arg1 == NULL) {
            return;
        }
        arg1_00 = *piVar4;
        if (arg1_00 == NULL) {
            arg1_00 = fcn.00016e70(0x30);
            if (arg1_00 == NULL) goto code_r0x0001252a;
            *arg1_00 = 0x6c646873;
            puVar1 = arg1_00 + 1;
            puVar2 = arg1_00 + 3;
            *puVar2 = puVar2;
            arg1_00[4] = puVar2;
            *puVar1 = 0x1a5a8;
            arg1_00[2] = *0x1a5b0;
            **0x1a5b0 = puVar1;
            *0x1a5b0 = puVar1;
        }
        else {
            iVar7 = fcn.000147d8(arg1_00);
            if (iVar7 < 0) goto code_r0x0001252a;
        }
        arg1[6] = iVar6;
        piVar3 = arg1 + 1;
        arg1[7] = puVar5;
        piVar8 = arg1_00 + 3;
        *arg1 = 0x66697073;
        arg1[3] = arg1_00;
        iVar7 = *piVar8;
        arg1[2] = piVar8;
        *piVar3 = iVar7;
        *(iVar7 + 8) = piVar3;
        *piVar8 = piVar3;
        piVar3 = arg1 + 4;
        *piVar3 = iVar6 + 0x28;
        puVar5 = *(iVar6 + 0x30);
        arg1[5] = puVar5;
        *puVar5 = piVar3;
        *(iVar6 + 0x30) = piVar3;
        iVar6 = arg1[6];
        piVar3 = iVar6 + 0x38;
        piVar8 = *piVar3;
        if (piVar8 != piVar3) {
            do {
                (*piVar8[2])(iVar6 + 0x18,arg1[7],arg1[3]);
                piVar8 = *piVar8;
            } while (piVar8 != piVar3);
        }
        iVar7 = 0;
    }
    if (-1 < iVar7) {
        *piVar4 = arg1_00;
        return;
    }
code_r0x0001252a:
    if (arg1 != NULL) {
        fcn.00016edc(arg1);
    }
    return;
}


/* fcn.00014808 @ 0x14808 */

int64_t * fcn.00014808(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar2 = arg1;
    if (*0x1a598 != 0x1a598) {
        piVar1 = *0x1a598;
        do {
            piVar2 = piVar1 + -1;
            if ((piVar1[2] == *arg1) && (piVar1[3] == *(arg1 + 8))) {
                if (piVar2 != NULL) {
                    return piVar2;
                }
                break;
            }
            piVar1 = *piVar1;
        } while (piVar1 != 0x1a598);
    }
    piVar1 = NULL;
    if ((arg2 != '\0') && (piVar1 = fcn.00016e40(piVar2,0x48), piVar1 != NULL)) {
        *piVar1 = 0x65747073;
        piVar1[3] = *arg1;
        piVar1[4] = *(arg1 + 8);
        piVar2 = piVar1 + 5;
        *piVar2 = piVar2;
        piVar1[6] = piVar2;
        piVar2 = piVar1 + 7;
        *piVar2 = piVar2;
        piVar1[8] = piVar2;
        piVar2 = piVar1 + 1;
        *piVar2 = 0x1a598;
        piVar1[2] = *0x1a5a0;
        **0x1a5a0 = piVar2;
        *0x1a5a0 = piVar2;
    }
    return piVar1;
}


/* fcn.00014588 @ 0x14588 */

ulong fcn.00014588(int64_t arg1)

{
    int64_t arg1_00;
    ulong *arg1_01;
    ulong *puVar1;
    ulong *puVar2;
    
    if (arg1 != 0) {
        arg1_01 = NULL;
        puVar1 = *0x1a578;
        while ((puVar1 != 0x1a578 && (arg1_01 != arg1))) {
            arg1_01 = puVar1 + -1;
            puVar1 = *puVar1;
        }
        for (puVar1 = *0x1a588; puVar1 != 0x1a588; puVar1 = *puVar1) {
            if (arg1_01 == arg1) goto code_r0x00014604;
            puVar2 = puVar1[4];
            while ((puVar2 != puVar1 + 4 && (arg1_01 != arg1))) {
                arg1_01 = puVar2 + -1;
                puVar2 = *puVar2;
            }
        }
        if (arg1_01 == arg1) {
code_r0x00014604:
            arg1_00 = arg1_01[5];
            *(arg1_01[1] + 8) = arg1_01[2];
            *arg1_01[2] = arg1_01[1];
            fcn.00016edc(arg1_01);
            if ((arg1_00 != 0) && (*(arg1_00 + 0x28) == arg1_00 + 0x28)) {
                *(*(arg1_00 + 8) + 8) = *(arg1_00 + 0x10);
                **(arg1_00 + 0x10) = *(arg1_00 + 8);
                fcn.00016edc(arg1_00);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00014d64 @ 0x14d64 */

ulong fcn.00014d64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    int64_t iStack_10;
    
    uVar2 = 0;
    if ((arg3 == 0) || (arg1 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        *0x1a740 = *0x1a740 + 1;
        *arg3 = 0;
        iStack_18 = 0x1a5a8;
        iStack_28 = arg1;
        iStack_20 = arg2;
        if (arg2 == 0) {
            iStack_10 = fcn.00014808(arg1,0);
            if (iStack_10 == 0) {
                return 0x800000000000000e;
            }
            iStack_18 = iStack_10 + 0x28;
            iVar1 = fcn.00014d04(&iStack_28,arg3);
        }
        else {
            iVar1 = fcn.00014ccc(&iStack_28,arg3);
        }
        if (iVar1 == 0) {
            uVar2 = 0x800000000000000e;
        }
        else if (arg2 != 0) {
            *(arg2 + 0x28) = **(arg2 + 0x28);
        }
    }
    return uVar2;
}


/* fcn.00014aec @ 0x14aec */

int64_t fcn.00014aec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *arg1_00;
    int64_t *piVar3;
    int64_t arg3_00;
    int64_t *piVar4;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = arg2;
        arg3_00 = arg3;
        iVar1 = fcn.000147d8(arg1);
        if (-1 < iVar1) {
            iVar2 = fcn.000148c8(arg1,iVar2,arg3_00);
            if (iVar2 == 0) {
                iVar1 = -0x7ffffffffffffff2;
            }
            else {
                iVar1 = -0x7ffffffffffffff2;
                arg1_00 = fcn.000148c8(arg1,arg2,arg3);
                if (arg1_00 != NULL) {
                    piVar4 = arg1_00[6] + 0x38;
                    piVar3 = *piVar4;
                    if (piVar3 != piVar4) {
                        do {
                            if (piVar3[3] == arg1_00 + 4) {
                                piVar3[3] = arg1_00[5];
                            }
                            piVar3 = *piVar3;
                        } while (piVar3 != piVar4);
                    }
                    *(arg1_00[4] + 8) = arg1_00[5];
                    *arg1_00[5] = arg1_00[4];
                    *(arg1_00[1] + 8) = arg1_00[2];
                    *arg1_00[2] = arg1_00[1];
                    *arg1_00 = 0;
                    fcn.00016edc(arg1_00);
                    iVar1 = 0;
                }
                if (*(arg1 + 0x18) == arg1 + 0x18) {
                    *arg1 = 0;
                    *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
                    **(arg1 + 0x10) = *(arg1 + 8);
                    fcn.00016edc(arg1);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.0001973c @ 0x1973c */

//WARNING: Removing unreachable block (ram,0x00019795)
//WARNING: Removing unreachable block (ram,0x000197c2)
//WARNING: Removing unreachable block (ram,0x000197c6)
//WARNING: Removing unreachable block (ram,0x000197e8)
//WARNING: Removing unreachable block (ram,0x000197ec)

ulong fcn.0001973c(int64_t arg1)

{
    char cVar1;
    char cVar2;
    uint32_t uVar3;
    char *pcVar4;
    
    if (arg1 == '\0') {
        if (*0x1a8a4 != 0) {
            *0xc00fd010 = *0x1a8a4;
        }
        if (*0x1a8b1 < 10) {
            do {
                out(0x70,0x8a);
                *0x1a8b2 = in(0x71);
            } while (*0x1a8b2 < '\0');
        }
        out(0x70,*0x1a8b1 | 0x80);
        out(0x76,*0x1a8b0);
        out(0x1850,*0x1a8b4);
        if (*0x1a8a0 != '\0') {
            cVar2 = fcn.000199c4(0x70,0x1850);
            cVar1 = cVar2 * '\x02' + '\x10';
            pcVar4 = *0x1a8a8;
            if ((*0x1a8a8 + 1 & 0xfffffffffffffffe) == 0) {
                pcVar4 = 0xfec00000;
            }
            *0x1a8a8 = pcVar4;
            *pcVar4 = cVar1;
            uVar3 = *(pcVar4 + 0x10);
            pcVar4 = *0x1a8a8;
            if ((*0x1a8a8 + 1 & 0xfffffffffffffffe) == 0) {
                pcVar4 = 0xfec00000;
            }
            *0x1a8a8 = pcVar4;
            *pcVar4 = cVar1;
            *(pcVar4 + 0x10) = uVar3 & 0xfffeffff;
            fcn.00019938(CONCAT71(pcVar4 >> 8,cVar2));
        }
        *0xfec00000 = *0x1a8b3;
    }
    else {
        *0x1a8b1 = in(0x74);
        *0x1a8b0 = in(0x76);
        *0x1a8b4 = in(0x1850);
        *0x1a8a0 = '\0';
        *0x1a8a4 = 0;
        uVar3 = *0xc00fd010 & 0xfffff000;
        if ((uVar3 != 0xfe010000) && (*0xfe010000 == -1)) {
            *0xc00fd010 = 0xfe010000;
            *0x1a8a4 = uVar3;
        }
    }
    *0x1a8b3 = *0xfec00000;
    return 0;
}


/* fcn.00015d9c @ 0x15d9c */

void fcn.00015d9c(void)

{
    bool bVar1;
    bool bVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    uint64_t arg1;
    uint64_t *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t auStack_e8 [5];
    uint64_t auStack_c0 [4];
    uint64_t auStack_a0 [6];
    uint64_t auStack_70 [5];
    ulong auStack_48 [6];
    
    if ((*0x1a758 == 0) || (4 < *0x1a5e8 - 1U)) {
        return;
    }
    section..text(auStack_70,0x1a5c0,0x28);
    section..text(auStack_48,0x1a5f0,0x28);
    fcn.000110a0(auStack_e8,0x28,0);
    fcn.000110a0(auStack_a0 + 1,0x28,0);
    fcn.000110a0(auStack_c0,0x28,0);
    iVar6 = 5 - *0x1a5e8;
    bVar1 = false;
    auStack_e8[iVar6] = *0x1a758;
code_r0x00015e52:
    puVar4 = auStack_c0 + iVar6;
    if (auStack_70[iVar6] < *puVar4) {
        auStack_e8[iVar6] = 0;
        iVar6 = iVar6 + -1;
    }
    else {
        puVar3 = auStack_e8 + iVar6;
        puVar5 = auStack_a0 + iVar6 + 1;
        while( true ) {
            uVar8 = *puVar5;
            uVar9 = *(*puVar3 + *puVar4 * 8);
            if (uVar9 == 0) break;
            if (3 < iVar6) {
                uVar11 = 0;
                uVar10 = uVar8 - 0x1000;
                goto code_r0x00015ec7;
            }
            iVar7 = iVar6 + 1;
            puVar3 = auStack_e8 + iVar7;
            puVar5 = auStack_a0 + iVar6 + 2;
            *puVar3 = uVar9;
            puVar4 = auStack_c0 + iVar7;
            *puVar5 = uVar8;
            *puVar4 = 0;
            iVar6 = iVar7;
        }
        bVar1 = false;
    }
    goto code_r0x00015f20;
    while( true ) {
        uVar9 = uVar9 >> 1;
        uVar8 = uVar8 + 0x1000;
        uVar10 = uVar10 + 0x1000;
        uVar11 = uVar11 + 1;
        if (0x3f < uVar11) break;
code_r0x00015ec7:
        if ((uVar9 & 1) == 0) {
            arg1 = -bVar1 & uVar8;
            bVar1 = false;
        }
        else {
            bVar2 = !bVar1;
            arg1 = 0;
            bVar1 = true;
            if (bVar2) {
                arg1 = uVar10;
            }
        }
        if (arg1 != 0) {
            fcn.0001594c(arg1);
        }
        if (uVar9 == 0) break;
    }
code_r0x00015f20:
    if (iVar6 < 5 - *0x1a5e8) {
        return;
    }
    uVar8 = auStack_c0[iVar6];
    auStack_c0[iVar6] = uVar8 + 1;
    if (iVar6 == 0) {
        uVar9 = 0;
    }
    else {
        uVar9 = auStack_a0[iVar6];
    }
    auStack_a0[iVar6 + 1] = uVar8 + 1 << (auStack_48[iVar6] & 0x3f) | uVar9;
    goto code_r0x00015e52;
}


/* fcn.00017290 @ 0x17290 */

//WARNING: Removing unreachable block (ram,0x0001723b)

int64_t fcn.00017290(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    uint64_t *puVar2;
    uint64_t uVar3;
    
    iVar1 = fcn.000171ac(arg1,in_RDX,*0x1a820,*0x1a838);
    if (((-1 < iVar1) && (*0x1a840 != '\0')) &&
       ((*0x1a830 == 0 || (iVar1 = fcn.000171ac(arg1,in_RDX,*0x1a830,*0x1a848), -1 < iVar1)))) {
        iVar1 = fcn.00017220(arg1,in_RDX,*0x1a800,*0x1a7f8);
        if (iVar1 < 0) {
            if (*0x1a810 != '\0') {
                puVar2 = 0x1a658;
                uVar3 = 0;
                if ((arg1 != 0) && ((in_RDX == 0 || (arg1 <= in_RDX + -1 + arg1)))) {
                    while ((arg1 < *puVar2 || (*puVar2 + puVar2[1] <= in_RDX + -1 + arg1))) {
                        uVar3 = uVar3 + 1;
                        puVar2 = puVar2 + 2;
                        if (1 < uVar3) {
                            return -0x7ffffffffffffff1;
                        }
                    }
                    return 0;
                }
                return -0x7ffffffffffffffe;
            }
        }
        else {
            iVar1 = fcn.00017a5c(arg1,in_RDX);
        }
    }
    return iVar1;
}


/* fcn.000143dc @ 0x143dc */

int64_t fcn.000143dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    bool bVar2;
    bool bVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    
    iVar7 = -0x7ffffffffffffff2;
    bVar2 = false;
    if (arg1 == 0) {
        pcVar4 = "smie";
    }
    else {
        pcVar4 = fcn.00014328(arg1,0);
        if (pcVar4 == NULL) {
            return -0x7ffffffffffffff2;
        }
    }
    piVar1 = pcVar4 + 0x28;
    piVar6 = *piVar1;
    bVar3 = false;
    if (piVar6 == piVar1) {
code_r0x00014499:
        iVar5 = 0;
        if (!bVar2) {
            iVar5 = iVar7;
        }
        return iVar5;
    }
    do {
        bVar2 = bVar3;
        iVar7 = (*piVar6[2])(piVar6 + -1,arg2,arg3,arg4);
        if (iVar7 == 0) {
            if (arg1 != 0) {
                return 0;
            }
code_r0x00014483:
            bVar2 = true;
        }
        else {
            if (iVar7 == 0x2000000000000001) goto code_r0x00014483;
            if ((iVar7 == -0x6000000000000000) && (arg1 != 0)) {
                return -0x6000000000000000;
            }
        }
        piVar6 = *piVar6;
        if (piVar6 == piVar1) goto code_r0x00014499;
        bVar3 = bVar2;
    } while( true );
}


/* fcn.00014c14 @ 0x14c14 */

int64_t fcn.00014c14(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        *arg3 = 0;
        iVar1 = fcn.000147d8(arg1);
        if (-1 < iVar1) {
            iVar1 = fcn.000147d8(arg1);
            if (-1 < iVar1) {
                piVar4 = arg1 + 0x18;
                piVar3 = *piVar4;
                if (piVar3 != piVar4) {
                    do {
                        piVar2 = piVar3 + -1;
                        if ((*(piVar3[5] + 0x18) == *arg2) && (*(piVar3[5] + 0x20) == *(arg2 + 8)))
                        goto code_r0x00014c82;
                        piVar3 = *piVar3;
                    } while (piVar3 != piVar4);
                }
                piVar2 = NULL;
code_r0x00014c82:
                if (piVar2 != NULL) {
                    *arg3 = piVar2[7];
                    return 0;
                }
            }
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.000147d8 @ 0x147d8 */

uint64_t fcn.000147d8(int64_t arg1)

{
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    return -(*arg1 != 0x6c646873) & 0x8000000000000002;
}


/* fcn.00012548 @ 0x12548 */

uint64_t fcn.00012548(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint auStack_48 [2];
    uint64_t uStack_40;
    int64_t iStack_30;
    uint64_t uStack_28;
    
    if (auStack_48 != arg3) {
        section..text(auStack_48,arg3,0x28);
    }
    iVar6 = iStack_30 * 0x1000 + uStack_40;
    bVar2 = uStack_40 < *(arg1 + 0x18);
    if (bVar2) {
        *arg2 = auStack_48[0];
        *(arg2 + 8) = uStack_40;
        *(arg2 + 0x10) = 0;
        uVar3 = *(arg1 + 0x18) - uStack_40;
        *(arg2 + 0x20) = uStack_28;
        *(arg2 + 0x18) = ((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc);
        arg2 = arg2 + arg4;
        uStack_40 = *(arg1 + 0x18);
    }
    uVar3 = bVar2;
    puVar1 = *(arg1 + 0x30);
    do {
        do {
            puVar7 = puVar1;
            if (puVar7 == arg1 + 0x30) goto code_r0x000126ff;
            puVar1 = *puVar7;
        } while (puVar7[2] < uStack_40);
        *arg2 = 6;
        *(arg2 + 8) = uStack_40;
        *(arg2 + 0x10) = 0;
        iVar4 = (puVar7[2] - uStack_40 >> 0xc) + ((puVar7[2] - uStack_40 & 0xfff) != 0);
        *(arg2 + 0x18) = iVar4;
        *(arg2 + 0x20) = uStack_28 | 0x4000;
        if (iVar4 != 0) {
            arg2 = arg2 + arg4;
            uVar3 = uVar3 + 1;
        }
        *arg2 = 5;
        *(arg2 + 8) = puVar7[2];
        *(arg2 + 0x10) = 0;
        iVar4 = ((puVar7[3] & 0xfff) != 0) + (puVar7[3] >> 0xc);
        *(arg2 + 0x18) = iVar4;
        *(arg2 + 0x20) = uStack_28 & 0xffffffffffffbfff | 0x20000;
        if (iVar4 != 0) {
            arg2 = arg2 + arg4;
            uVar3 = uVar3 + 1;
        }
        uStack_40 = (-((puVar7[3] & 0xfff) != 0) & 0x1000) + (puVar7[3] & 0xfffffffffffff000) + puVar7[2];
        uVar5 = iVar6 - uStack_40;
    } while (((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc) != 0);
code_r0x000126ff:
    uVar5 = *(arg1 + 0x20) + *(arg1 + 0x18);
    if (uStack_40 < uVar5) {
        uVar5 = uVar5 - uStack_40;
        *(arg2 + 0x10) = 0;
        *arg2 = 6;
        *(arg2 + 8) = uStack_40;
        *(arg2 + 0x18) = ((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc);
        uVar3 = uVar3 + 1;
        *(arg2 + 0x20) = uStack_28 | 0x4000;
    }
    return uVar3;
}


/* fcn.00016780 @ 0x16780 */

ulong fcn.00016780(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ulong *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    ulong *puVar5;
    uint *in_stack_00000028;
    
    if (arg3 != 0) {
        *arg3 = 0x30;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = 1;
    }
    puVar5 = *0x1a638;
    iVar4 = 0;
    for (puVar1 = *0x1a638; puVar1 != 0x1a638; puVar1 = *puVar1) {
        iVar4 = iVar4 + 1;
    }
    arg2_00 = iVar4 * 0x30;
    uVar2 = *arg1;
    *arg1 = arg2_00;
    if (uVar2 < arg2_00) {
        uVar3 = 0x8000000000000005;
    }
    else if (arg2 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        if (arg2_00 != 0) {
            fcn.00011040(arg2,arg2_00);
            puVar5 = *0x1a638;
        }
        while (puVar5 != 0x1a638) {
            puVar1 = *puVar5;
            *arg2 = *(puVar5 + 0x14);
            *(arg2 + 8) = puVar5[3];
            *(arg2 + 0x18) = (puVar5[4] - puVar5[3]) + 1 >> 0xc;
            arg2 = arg2 + 0x30;
            puVar5 = puVar1;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00012760 @ 0x12760 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.00012760(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg1_00;
    int64_t *piVar1;
    uint *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *puVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint *puVar12;
    int64_t iVar13;
    uint *puVar14;
    uint *puVar15;
    int64_t *piVar16;
    bool bVar17;
    int64_t iStackX_10;
    ulong *puStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h_2;
    int64_t var_60h;
    int64_t iStack_98;
    uint auStack_78 [2];
    uint64_t uStack_70;
    int64_t var_58h;
    int64_t var_50h_2;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_18h;
    
    iVar9 = 0;
    iStackX_20 = 0;
    iVar7 = (*0x1a508 + 1) * *0x1a500 * 2;
    iVar3 = (*arg1 / arg3 - 1) + iVar7;
    iStack_98 = *arg1 / arg3 - 1;
    if (-1 < iStack_98) {
        puVar12 = iStack_98 * arg3 + arg2;
        do {
            iVar11 = 0;
            uVar8 = *(puVar12 + 2);
            uVar10 = *(puVar12 + 6) * 0x1000 + uVar8;
            do {
                for (puVar6 = *0x1a510; puVar6 != 0x1a510; puVar6 = *puVar6) {
                    puVar5 = puVar6 + -1;
                    if ((uVar8 <= puVar6[2]) && (puVar6[2] + puVar6[3] <= uVar10)) goto code_r0x0001281c;
                }
                puVar5 = NULL;
code_r0x0001281c:
                if (puVar5 == NULL) break;
                uVar8 = puVar5[4] + puVar5[3];
                iVar11 = iVar11 + puVar5[5] * 2 + 2;
            } while (uVar8 < uVar10);
            iVar3 = iVar3 - iVar11;
            puVar2 = iVar3 * arg3 + arg2;
            if (iVar11 == 0) {
                if ((arg3 != 0) && (puVar2 != puVar12)) {
                    section..text(puVar2,puVar12,arg3);
                }
                iVar13 = 0;
            }
            else {
                iStackX_10 = 0;
                if (auStack_78 != puVar12) {
                    section..text(auStack_78,puVar12,0x28);
                }
                uVar8 = var_58h * 0x1000 + uStack_70;
                puVar14 = puVar2;
                do {
                    for (puVar6 = *0x1a510; puVar6 != 0x1a510; puVar6 = *puVar6) {
                        puStackX_18 = puVar6 + -1;
                        if ((uStack_70 <= puVar6[2]) && (puVar6[2] + puVar6[3] <= uVar8)) goto code_r0x000128df;
                    }
                    puStackX_18 = NULL;
code_r0x000128df:
                    if (puStackX_18 == NULL) {
                        if (uStack_70 < uVar8) {
                            *puVar14 = auStack_78[0];
                            *(puVar14 + 4) = 0;
                            *(puVar14 + 2) = uStack_70;
                            iStackX_10 = iStackX_10 + 1;
                            *(puVar14 + 6) = var_58h;
                            *(puVar14 + 8) = var_50h_2;
                        }
                        break;
                    }
                    iVar9 = fcn.00012548(puStackX_18,puVar14,auStack_78,arg3);
                    iStackX_10 = iStackX_10 + iVar9;
                    puVar14 = puVar14 + iVar9 * arg3;
                    uStack_70 = puStackX_18[4] + puStackX_18[3];
                    var_58h = ((uVar8 - uStack_70 & 0xfff) != 0) + (uVar8 - uStack_70 >> 0xc);
                } while (uStack_70 < uVar8);
                iVar13 = iStackX_10 + -1;
                if (iVar11 != iVar13) {
                    puVar14 = ((iVar11 - iVar13) + iVar3) * arg3 + arg2;
                    if ((iStackX_10 * arg3 != 0) && (puVar14 != puVar2)) {
                        section..text(puVar14,puVar2,iStackX_10 * arg3);
                    }
                }
            }
            puVar12 = puVar12 - arg3;
            iVar9 = iStackX_20 + iVar13;
            iStack_98 = iStack_98 + -1;
            iVar3 = iVar3 + -1 + (iVar11 - iVar13);
            iStackX_20 = iVar9;
        } while (-1 < iStack_98);
    }
    iVar7 = (iVar7 - iVar9) * arg3 + arg2;
    iVar3 = *arg1 + iVar9 * arg3;
    if ((iVar3 != 0) && (arg2 != iVar7)) {
        section..text(arg2,iVar7,iVar3);
    }
    *arg1 = *arg1 + iVar9 * arg3;
    puVar12 = arg2 + arg3;
    puVar2 = *arg1 + arg2;
    if (arg2 < puVar2) {
        puVar14 = arg2;
        puVar15 = puVar12;
        do {
            for (; puVar12 < puVar2; puVar12 = puVar12 + arg3) {
                if (*(puVar12 + 2) < *(puVar15 + (8 - arg3))) {
                    if (auStack_78 != puVar14) {
                        section..text(auStack_78,puVar14,0x28);
                    }
                    if (puVar14 != puVar12) {
                        section..text(puVar14,puVar12,0x28);
                    }
                    if (puVar12 != auStack_78) {
                        section..text(puVar12,auStack_78,0x28);
                    }
                }
            }
            puVar12 = puVar15 + arg3;
            bVar17 = puVar15 < puVar2;
            puVar14 = puVar15;
            puVar15 = puVar12;
        } while (bVar17);
    }
    piVar16 = *arg1 + arg2;
    arg1_00 = arg2;
    piVar1 = arg2;
    if (arg2 < piVar16) {
        piVar4 = arg2 + 0x20;
        do {
            if (*piVar4 == 0) {
                if (piVar4[-4] == 5) {
                    *piVar4 = 0x20000;
                }
                else {
                    *piVar4 = 0x4000;
                }
            }
            piVar4 = piVar4 + arg3;
        } while (piVar4 + -4 < piVar16);
    }
    while (piVar1 < piVar16) {
        piVar4 = piVar1;
        if (arg1_00 != piVar1) {
            section..text(arg1_00,piVar1,0x28);
        }
        while( true ) {
            piVar4 = piVar4 + arg3;
            if ((((piVar16 <= piVar4) || (*piVar1 != *piVar4)) || (piVar1[4] != piVar4[4])) ||
               (piVar1[3] * 0x1000 + piVar1[1] != piVar4[1])) break;
            piVar1[3] = piVar1[3] + piVar4[3];
            if (arg1_00 != piVar1) {
                arg1_00[3] = arg1_00[3] + piVar4[3];
            }
        }
        arg1_00 = arg1_00 + arg3;
        piVar1 = piVar4;
    }
    *arg1 = arg1_00 - arg2;
    return;
}


/* fcn.00012c48 @ 0x12c48 */

void fcn.00012c48(void)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *puVar10;
    
    for (puVar9 = *0x1a510; puVar10 = *puVar9, puVar9 != 0x1a510; puVar9 = *puVar9) {
        for (; puVar10 != 0x1a510; puVar10 = *puVar10) {
            uVar3 = puVar9[2];
            if (puVar10[2] < uVar3) {
                uVar4 = puVar9[3];
                piVar1 = puVar9 + 5;
                uVar5 = puVar9[4];
                puVar9[2] = puVar10[2];
                puVar9[3] = puVar10[3];
                puVar9[4] = puVar10[4];
                puVar10[2] = uVar3;
                piVar2 = puVar10 + 5;
                puVar10[3] = uVar4;
                puVar10[4] = uVar5;
                if (piVar1 != piVar2) {
                    *(*piVar1 + 8) = puVar9[6];
                    *puVar9[6] = *piVar1;
                    iVar6 = *piVar2;
                    iVar7 = *piVar1;
                    *piVar1 = iVar6;
                    puVar9[6] = piVar2;
                    *(iVar6 + 8) = piVar1;
                    *piVar2 = piVar1;
                    puVar9[6] = puVar10[6];
                    *puVar10[6] = *piVar2;
                    *piVar2 = iVar7;
                    puVar8 = *(iVar7 + 8);
                    puVar10[6] = puVar8;
                    *puVar8 = piVar2;
                    *(iVar7 + 8) = piVar2;
                }
            }
        }
    }
    return;
}


/* fcn.00012b68 @ 0x12b68 */

int64_t fcn.00012b68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0x1a4f0 & 1) == 0) {
        iVar3 = fcn.00016780(arg1,arg2,arg3,arg4);
    }
    else if (arg1 == 0) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = *arg1;
        iVar2 = (*0x1a508 + 1) * *0x1a500 * 2;
        iVar3 = fcn.00016780(arg1,arg2,arg3,arg4);
        if (iVar3 == -0x7ffffffffffffffb) {
            *arg1 = *arg1 + *arg4 * iVar2;
        }
        else if (iVar3 == 0) {
            uVar4 = *arg4 * iVar2;
            if (iVar1 - *arg1 < uVar4) {
                iVar3 = -0x7ffffffffffffffb;
                *arg1 = uVar4 + *arg1;
            }
            else {
                fcn.00012760(arg1,arg2,*arg4);
            }
        }
    }
    return iVar3;
}


/* fcn.00014e30 @ 0x14e30 */

uint64_t fcn.00014e30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    code *pcVar6;
    uchar auStackX_20 [8];
    int64_t *in_stack_00000028;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    
    iVar3 = arg1;
    if ((arg4 == 0) || ((*arg4 != 0 && (in_stack_00000028 == NULL)))) {
        return 0x8000000000000002;
    }
    uVar5 = 0;
    uVar4 = 0;
    iStack_38 = 0x1a5a8;
    iStack_48 = arg2;
    iStack_40 = arg3;
    if (iVar3 == 0) {
        pcVar6 = 0x14ca4;
    }
    else {
        if (iVar3 != 1) {
            if ((iVar3 != 2) || (pcVar6 = fcn.00014d04, arg2 == 0)) {
                return 0x8000000000000002;
            }
            iStack_30 = fcn.00014808(arg2,0);
            if (iStack_30 == 0) {
                return 0x800000000000000e;
            }
            iStack_38 = iStack_30 + 0x28;
            goto code_r0x00014f0e;
        }
        pcVar6 = fcn.00014ccc;
        uVar4 = ~-(arg3 != 0) & 0x8000000000000002;
    }
    if (uVar4 < 0) {
        return uVar4;
    }
code_r0x00014f0e:
    *0x1a740 = *0x1a740 + 1;
    iVar2 = (*pcVar6)(&iStack_48,auStackX_20);
    if (iVar2 != 0) {
        do {
            uVar5 = uVar5 + 8;
            if (uVar5 <= *arg4) {
                *in_stack_00000028 = iVar2;
                in_stack_00000028 = in_stack_00000028 + 1;
            }
            iVar2 = (*pcVar6)(&iStack_48,auStackX_20);
        } while (iVar2 != 0);
        if (uVar5 != 0) {
            uVar1 = *arg4;
            *arg4 = uVar5;
            if (uVar1 < uVar5) {
                uVar4 = 0x8000000000000005;
            }
            if (iVar3 == 1) {
                if (-1 < uVar4) {
                    *(arg3 + 0x28) = **(arg3 + 0x28);
                    return uVar4;
                }
                return uVar4;
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00012d10 @ 0x12d10 */

void fcn.00012d10(int64_t arg1)

{
    ulong *puVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    ulong *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint *puVar8;
    uint *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong *puVar12;
    uint32_t *puVar13;
    ulong *puVar14;
    
    puVar8 = fcn.00016e40(arg1,0x40);
    puVar12 = NULL;
    if (puVar8 != NULL) {
        *puVar8 = 0x44525049;
        *(puVar8 + 6) = *(arg1 + 0x90);
        *(puVar8 + 8) = *(arg1 + 0x98) << 0xc;
        puVar10 = 0x5a4d;
        piVar3 = *(arg1 + 0x90);
        uVar7 = 0;
        if (*piVar3 == 0x5a4d) {
            uVar7 = *(piVar3 + 0x1e);
        }
        uVar11 = uVar7;
        if (*(piVar3 + uVar11) == 0x4550) {
            if ((*(piVar3 + uVar11 + 0x38) & 0xfff) == 0) {
                uVar2 = *(piVar3 + uVar11 + 0x14);
                puVar1 = puVar8 + 0xc;
                *(puVar8 + 10) = 0;
                *puVar1 = puVar1;
                *(puVar8 + 0xe) = puVar1;
                if (*(piVar3 + uVar11 + 6) != 0) {
                    puVar13 = piVar3 + uVar2 + uVar11 + 0x24;
                    puVar14 = puVar12;
                    do {
                        if ((puVar13[6] & 0x20) != 0) {
                            puVar9 = fcn.00016e40(puVar10,0x28);
                            if (puVar9 == NULL) {
                                return;
                            }
                            *puVar9 = 0x43525049;
                            *(puVar9 + 6) = *puVar13 + piVar3;
                            *(puVar9 + 8) = puVar13[1];
                            puVar10 = puVar9 + 2;
                            *puVar10 = puVar1;
                            puVar4 = *(puVar8 + 0xe);
                            *(puVar9 + 4) = puVar4;
                            *puVar4 = puVar10;
                            *(puVar8 + 0xe) = puVar10;
                            *(puVar8 + 10) = *(puVar8 + 10) + 1;
                        }
                        puVar14 = puVar14 + 1;
                        puVar13 = puVar13 + 10;
                    } while (puVar14 < *(piVar3 + uVar11 + 6));
                }
                if (*(puVar8 + 10) != 0) {
                    for (puVar10 = *puVar1; puVar14 = *puVar10, puVar10 != puVar1; puVar10 = *puVar10) {
                        for (; puVar14 != puVar1; puVar14 = *puVar14) {
                            uVar11 = puVar10[2];
                            if (puVar14[2] < uVar11) {
                                uVar5 = puVar10[3];
                                puVar10[2] = puVar14[2];
                                puVar10[3] = puVar14[3];
                                puVar14[2] = uVar11;
                                puVar14[3] = uVar5;
                            }
                        }
                    }
                    puVar10 = *puVar1;
                    while( true ) {
                        if (puVar10 == puVar1) {
                            puVar12 = puVar8 + 2;
                            *puVar12 = 0x1a510;
                            *(puVar8 + 4) = *0x1a518;
                            **0x1a518 = puVar12;
                            *0x1a500 = *0x1a500 + 1;
                            if (*0x1a508 < *(puVar8 + 10)) {
                                *0x1a508 = *(puVar8 + 10);
                            }
                            *0x1a518 = puVar12;
                            fcn.00012c48();
                            return;
                        }
                        uVar11 = puVar10[3];
                        if (uVar11 == 0) {
                            return;
                        }
                        uVar6 = puVar10[2];
                        if (uVar6 < *(puVar8 + 6)) {
                            return;
                        }
                        if (~uVar11 <= uVar6) break;
                        if (*(puVar8 + 8) + *(puVar8 + 6) < uVar6 + uVar11) {
                            return;
                        }
                        if ((puVar12 != NULL) && (uVar6 < puVar12[4] + puVar12[3])) {
                            return;
                        }
                        puVar12 = puVar10 + -1;
                        puVar10 = *puVar10;
                    }
                    return;
                }
            }
            if ((*0x1a4f0 & 1) != 0) {
                *0x1a4f0 = *0x1a4f0 & 0xfffffffffffffffe;
            }
        }
    }
    return;
}


/* fcn.00012f50 @ 0x12f50 */

void fcn.00012f50(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t arg1_00;
    uchar auVar1 [16];
    uchar auVar2 [16];
    int64_t iVar3;
    int64_t arg2;
    int64_t iVar4;
    uint *puVar5;
    int64_t iVar6;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    
    uStackX_10 = 0;
    fcn.00012b68(&uStackX_10,0,arg1,&uStackX_18);
    do {
        arg2 = fcn.00016e40();
        iVar4 = fcn.00012b68(&uStackX_10,arg2,arg1,&uStackX_18);
        if (iVar4 < 0) {
            fcn.00016edc(arg2);
        }
    } while (iVar4 == -0x7ffffffffffffffb);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStackX_18;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStackX_10;
    iVar4 = SUB168(auVar2 / auVar1,0);
    iVar6 = iVar4 * uStackX_18;
    puVar5 = fcn.00016e40();
    puVar5[3] = 0;
    *puVar5 = 1;
    puVar5[1] = SUB164(auVar2 / auVar1,0);
    puVar5[2] = uStackX_18;
    if (iVar4 != 0) {
        iVar3 = 0x10 - arg2;
        do {
            if ((uStackX_18 != 0) && (arg1_00 = puVar5 + arg2 + iVar3, arg1_00 != arg2)) {
                section..text(arg1_00,arg2,uStackX_18);
            }
            arg2 = arg2 + uStackX_18;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    //WARNING: Could not recover jumptable at 0x00013051. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1a7a8 + 0x28))(*0x1a7a8,0x1a040,puVar5,iVar6 + 0x10);
    return;
}


/* fcn.0001634c @ 0x1634c */

int64_t fcn.0001634c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    
    uVar1 = *(arg1 + 0x10);
    uVar3 = (arg3 - arg1) + 1U >> 0xc;
    if (uVar1 < uVar3) {
        uVar3 = uVar1;
    }
    arg2 = uVar3 - arg2;
    if (uVar3 < uVar1) {
        piVar4 = uVar3 * 0x1000 + arg1;
        piVar4[2] = uVar1 - uVar3;
        iVar2 = *arg1;
        *piVar4 = iVar2;
        piVar4[1] = arg1;
        *(iVar2 + 8) = piVar4;
        *arg1 = piVar4;
    }
    if (arg2 == 0) {
        *(*arg1 + 8) = *(arg1 + 8);
        **(arg1 + 8) = *arg1;
    }
    else {
        *(arg1 + 0x10) = arg2;
    }
    return arg1 + arg2 * 0x1000;
}


/* fcn.00016738 @ 0x16738 */

//WARNING: Removing unreachable block (ram,0x000166c1)
//WARNING: Removing unreachable block (ram,0x000166ca)
//WARNING: Removing unreachable block (ram,0x000166cf)
//WARNING: Removing unreachable block (ram,0x00016710)
//WARNING: Removing unreachable block (ram,0x000166d4)
//WARNING: Removing unreachable block (ram,0x000166fe)
//WARNING: Removing unreachable block (ram,0x0001671a)

ulong fcn.00016738(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *puVar3;
    uint in_register_0000000c;
    uint64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = *0x1a638;
    do {
        puVar3 = puVar1;
        if (puVar3 == 0x1a638) {
            return 0x800000000000000e;
        }
        puVar1 = *puVar3;
    } while ((arg1_00 < puVar3[3]) || (puVar3[4] < (arg1_00 - 1) + arg2 * 0x1000));
    uVar2 = fcn.00016558(arg1_00,arg2,0);
    return uVar2;
}


/* fcn.00016f0c @ 0x16f0c */

char * fcn.00016f0c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    ulong in_R8;
    int64_t in_R9;
    
    pcVar2 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001705c(arg1,0,in_R8,in_R9);
        pcVar3 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar3 != '\x7f' || (pcVar3[1] != -1)); pcVar3 = pcVar3 + *(pcVar3 + 2)) {
            }
            pcVar2 = pcVar3 + (*(pcVar3 + 2) - arg1);
        }
    }
    return pcVar2;
}


/* fcn.00018624 @ 0x18624 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.00018624(int64_t arg1)

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
    iVar3 = fcn.000180f8(arg1,auStack_138);
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
code_r0x000186c7:
            *(arg1 + 0x7c) = 1;
            goto code_r0x000186d1;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x000186c7;
    *(arg1 + 0x7c) = 0;
code_r0x000186d1:
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
                if (iVar4 < 0) goto code_r0x0001880d;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00018815;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x00018796;
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
                if (iVar4 < 0) goto code_r0x0001880d;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00018815;
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
                    if (iVar4 < 0) goto code_r0x00018804;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x00018815;
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
code_r0x0001880d:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x00018815;
code_r0x00018796:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x00018804;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x00018815;
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
    goto code_r0x00018796;
code_r0x00018804:
    bVar12 = iStackX_8 == 0x1c;
code_r0x00018815:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.000131d8 @ 0x131d8 */

ulong fcn.000131d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t arg2_00;
    int64_t iVar3;
    
    if (arg3 == 0) {
        return 0x8000000000000002;
    }
    if (arg1 < 0x1001) {
        if (arg2 < 0x10000000000001) {
            uVar2 = 0xffffffffffffffff;
            for (iVar1 = *0x1a620; iVar1 != 0x1a618; iVar1 = *(iVar1 + 8)) {
                if (arg2 <= *(iVar1 + 0x10)) {
                    arg2_00 = fcn.0001634c(iVar1,arg2,-1);
                    goto code_r0x00013358;
                }
            }
            arg2_00 = 0xffffffffffffffff;
code_r0x00013358:
            if (arg2_00 != uVar2) {
                fcn.000161dc(5,arg2_00,arg2);
                fcn.00015f84();
                goto code_r0x00013372;
            }
        }
    }
    else {
        uVar2 = (arg1 >> 0xc) + ((arg1 & 0xfffU) != 0) + arg2;
        if (uVar2 < 0x10000000000001) {
            iVar3 = -1;
            for (iVar1 = *0x1a620; iVar1 != 0x1a618; iVar1 = *(iVar1 + 8)) {
                if (uVar2 <= *(iVar1 + 0x10)) {
                    iVar1 = fcn.0001634c(iVar1,uVar2,-1);
                    goto code_r0x00013297;
                }
            }
            iVar1 = -1;
code_r0x00013297:
            if (iVar1 != iVar3) {
                fcn.000161dc(5,iVar1,uVar2);
                fcn.00015f84();
                arg2_00 = iVar1 + (arg1 - 1U) & ~(arg1 - 1U);
                iVar3 = ((arg2_00 - iVar1 & 0xfff) != 0) + (arg2_00 - iVar1 >> 0xc);
                if (iVar3 != 0) {
                    fcn.00016738(iVar1,iVar3);
                }
                iVar1 = (uVar2 - iVar3) - arg2;
                if (iVar1 != 0) {
                    fcn.00016738(arg2_00 + (arg2 << 0xc),iVar1);
                }
code_r0x00013372:
                *arg3 = arg2_00;
                return 0;
            }
        }
    }
    return 0x8000000000000009;
}


/* fcn.00018c30 @ 0x18c30 */

//WARNING: Variable defined which should be unmapped: var_3h

int64_t fcn.00018c30(uint32_t arg1)

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
    iVar2 = fcn.00018624(&iStack_d8);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (piVar6[1] < uStack_d0) {
        *(piVar6 + 0xd) = 6;
        return -0x7ffffffffffffffb;
    }
    if (*piVar6 == 0) {
code_r0x00018ca6:
        *(piVar6 + 0xd) = 5;
        return -0x7ffffffffffffffe;
    }
    if (cStack_5c != '\0') {
        if (iStack_5e == 0xc) {
            *(piVar6 + 0xd) = 4;
            return -0x7fffffffffffffff;
        }
        if (iStack_d8 != *piVar6) goto code_r0x00018ca6;
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
            goto code_r0x00018faa;
            if ((uStackX_10 < *(iVar2 + 8)) && (iVar3 = *(iVar2 + 8) - uStackX_10, iVar3 != 0)) {
                fcn.00011040(uVar4 + uStackX_10,iVar3);
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
            goto code_r0x00018eda;
        }
        piVar6[0xe] = 0;
    }
    else {
        uVar12 = *(iVar9 + 0x1c);
code_r0x00018eda:
        piVar6[0xe] = (uVar12 >> 1) << 3;
    }
    piVar6[6] = 0;
    if (piVar6[8] != 0) {
        if (uVar13 + uVar14 <= *(piVar6 + 8)) {
            *(piVar6 + 0xd) = 5;
            goto code_r0x00018f16;
        }
        iVar3 = (*piVar6 - uVar14) + *(piVar6 + 8);
        if (iVar3 == 0) goto code_r0x00018f16;
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
            if (uVar12 == 0) goto code_r0x0001901b;
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
code_r0x00018f16:
            *(piVar6 + 0xd) = 9;
            return -0x7fffffffffffffff;
        }
        if (*(iVar3 + 0x14) == 0) {
            uStackX_10 = *(iVar3 + 0x10);
            iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar3 + 0x18) - uVar14,&uStackX_10);
            if (iStackX_18 < 0) {
                iStackX_18 = -0x7fffffffffffffff;
code_r0x00018faa:
                *(piVar6 + 0xd) = 1;
                return iStackX_18;
            }
            *(iVar3 + 0x14) = uVar12;
        }
        piVar5 = piVar6[9];
        if (*piVar5 == 0x3031424e) {
            if (*(iVar3 + 0x10) < 0x10) goto code_r0x00018ff7;
            piVar5 = piVar5 + 4;
        }
        else if (*piVar5 == 0x434f544d) {
            if (*(iVar3 + 0x10) < 0x14) goto code_r0x00018ff7;
            piVar5 = piVar5 + 5;
        }
        else {
            if (*piVar5 != 0x53445352) goto code_r0x0001901b;
            if (*(iVar3 + 0x10) < 0x18) goto code_r0x00018ff7;
            piVar5 = piVar5 + 6;
        }
        piVar6[10] = piVar5;
    }
code_r0x0001901b:
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
code_r0x00018ff7:
                        *(piVar6 + 0xd) = 0xb;
                        return -0x7ffffffffffffffd;
                    }
                    puVar8 = iVar2 + 0x10;
                    bVar16 = *puVar15 != 0;
                    uVar14 = uVar10;
                    while (bVar16) {
                        uVar1 = *puVar8;
                        if (0x7fffffff < uVar1) {
                            if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00018ff7;
                            piVar7 = (uVar1 & 0x7fffffff) + iVar2;
                            if ((((*piVar7 == 3) && (piVar7[1] == 0x48)) && (piVar7[2] == 0x49)) && (piVar7[3] == 0x49))
                            {
                                uVar1 = puVar8[1];
                                if (0x7fffffff < uVar1) {
                                    if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00018ff7;
                                    uVar13 = uVar1 & 0x7fffffff;
                                    puVar15 = iVar2 + 0xc + uVar13;
                                    if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + 2 + *(uVar13 + 0xe + iVar2)) * 8)
                                    goto code_r0x00018ff7;
                                    puVar8 = iVar2 + 0x10 + uVar13;
                                    uVar1 = puVar8[1];
                                    if (0x7fffffff < uVar1) {
                                        if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00018ff7;
                                        uVar13 = uVar1 & 0x7fffffff;
                                        puVar15 = uVar13 + 0xc + iVar2;
                                        if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + *(uVar13 + 0xe + iVar2) + 2) * 8
                                           ) goto code_r0x00018ff7;
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
                                    goto code_r0x00018ff7;
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


/* fcn.00018978 @ 0x18978 */

ulong fcn.00018978(uint32_t arg1)

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
code_r0x00018a8e:
                *(piVar5 + 0xd) = 9;
                return 0x8000000000000001;
            }
            if (puVar16 < puVar11) goto code_r0x00018a8e;
        }
        if (iVar15 != 0) {
            piVar13 = piVar5[6];
            puVar12 = puVar11;
            while (puVar12 < puVar16) {
                puVar17 = puVar12 + 2;
                if (((puVar12[1] == 0) || (~puVar12[1] < puVar12)) ||
                   (puVar1 = puVar12[1] + puVar12, puVar9[1] + puVar11 < puVar1)) goto code_r0x00018a8e;
                if (piVar5[1] + puVar18 <= *puVar12) {
                    *(piVar5 + 0xd) = 5;
                    goto code_r0x00018a8e;
                }
                if ((*piVar5 - puVar18) + *puVar12 == 0) goto code_r0x00018a8e;
                for (; puVar17 < puVar1; puVar17 = puVar17 + 2) {
                    uVar7 = (*puVar17 & 0xfff) + *puVar12;
                    if (puVar18 + piVar5[1] <= uVar7) {
                        *(piVar5 + 0xd) = 5;
code_r0x00018be4:
                        uVar4 = 0x8000000000000001;
code_r0x00018bee:
                        *(piVar5 + 0xd) = 9;
                        return uVar4;
                    }
                    piVar8 = (*piVar5 - puVar18) + uVar7;
                    if (piVar8 == NULL) goto code_r0x00018be4;
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
                                        goto code_r0x00018bee;
                                    }
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar13 = piVar13 + (-piVar13 & 7);
                                        *piVar13 = *piVar8;
                                        piVar13 = piVar13 + 1;
                                    }
                                }
                                goto code_r0x00018bb9;
                            }
                            *piVar8 = *piVar8 + iVar15;
                        }
                        if (piVar13 != NULL) {
                            *piVar13 = *piVar8;
                            piVar13 = piVar13 + 2;
                        }
                    }
code_r0x00018bb9:
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


/* fcn.000133a4 @ 0x133a4 */

int64_t fcn.000133a4(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    ulong *puVar3;
    uint *puVar4;
    uint32_t arg2;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *arg1_00;
    ulong *arg1_01;
    int64_t *piVar11;
    uint auStackX_8 [2];
    int64_t iStackX_10;
    ulong uStackX_18;
    ulong uStackX_20;
    int32_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t *piVar12;
    uint *puStack_f8;
    int64_t iStack_f0;
    uchar auStack_e8 [16];
    uint *puStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    uint32_t uStack_a0;
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int32_t var_41h;
    
    iVar9 = *(arg1 + 0x40);
    iVar7 = *(arg1 + 0x48);
    iVar8 = 0;
    iStackX_10 = 0;
    uStackX_18 = 0;
    uStackX_20 = 0;
    auStackX_8[0] = 0;
    iStack_f0 = iVar9;
    iVar5 = (**(*0x1a798 + 0xb8))(0x1a110,&iStack_f0,&uStackX_20);
    if (iVar5 < 0) {
        return iVar5;
    }
    if (*0x1a730 == NULL) {
        (**(*0x1a798 + 0x140))(0x1a220,0,0x1a730);
    }
    if (*0x1a728 == NULL) {
        (**(*0x1a798 + 0x140))(0x1a050,0,0x1a728);
    }
    iVar6 = (**(*0x1a798 + 0x98))(uStackX_20,0x1a100,&iStack_f0);
    iVar5 = iVar9;
    if (-1 < iVar6) {
        iVar5 = fcn.00016f0c(iStack_f0);
        iVar5 = iVar9 + -4 + iVar5;
    }
    piVar12 = &iStackX_10;
    iVar6 = (**(iVar7 + 0x18))(iVar7,arg1 + 0x30,0x10,0,piVar12,&uStackX_18,auStackX_8);
    if (iVar6 < 0) {
        iStackX_10 = 0;
        uStackX_18 = 0;
        piVar12 = &iStackX_10;
        iVar7 = (**(iVar7 + 0x18))(iVar7,arg1 + 0x30,0x12,0,piVar12,&uStackX_18,auStackX_8);
        if (iVar7 < 0) goto code_r0x000134f6;
    }
    if ((*0x1a730 == NULL) ||
       (iVar8 = (***0x1a730)(*0x1a730,iVar9,iStackX_10,uStackX_18,piVar12 & 0xffffffffffffff00), -1 < iVar8)) {
        if (*0x1a728 != NULL) {
            iVar8 = (***0x1a728)(*0x1a728,auStackX_8[0],iVar9);
        }
        if (iVar8 < 0) goto code_r0x0001355a;
    }
    else {
code_r0x0001355a:
        if (iVar8 != -0x7fffffffffffffe6) {
            return iVar8;
        }
    }
    iStack_b0 = iStackX_10;
    uStack_b8 = 0x191fc;
    iVar9 = fcn.00018624(&puStack_d8);
    if (iVar9 < 0) {
        if (iStackX_10 == 0) {
            return iVar9;
        }
        (**(*0x1a798 + 0x48))();
        return iVar9;
    }
    puStack_f8 = 0xffffffffffffffff;
    iVar9 = ((uStack_d0 & 0xfff) != 0) + (uStack_d0 >> 0xc);
    if (iVar9 == 0) {
        iVar7 = -0x7ffffffffffffffe;
    }
    else {
        iVar7 = fcn.000131d8(uStack_a0,iVar9,&puStack_f8);
    }
    puVar4 = puStack_f8;
    if (iVar7 < 0) {
code_r0x000134f6:
        if (iStackX_10 != 0) {
            (**(*0x1a798 + 0x48))();
        }
        return iVar7;
    }
    puStack_d8 = puStack_f8;
    iVar7 = fcn.00018c30(&puStack_d8);
    if (iVar7 < 0) {
        if (iStackX_10 != 0) {
            (**(*0x1a798 + 0x48))();
        }
        goto code_r0x0001362d;
    }
    iVar7 = fcn.00018978(&puStack_d8);
    if (-1 < iVar7) {
        piVar12 = arg1 + 0x80;
        *(arg1 + 0x88) = uStack_c0;
        iVar7 = *0x1a798;
        *(arg1 + 0x90) = puVar4;
        *(arg1 + 0x98) = iVar9;
        iVar7 = (**(iVar7 + 0x40))(4,0x60,piVar12);
        if (-1 < iVar7) {
            fcn.00011040(*piVar12,0x60);
            iVar6 = *0x1aad8;
            uVar10 = *0x1a790;
            **piVar12 = 0x1000;
            *(*piVar12 + 8) = *(iVar6 + 8);
            *(*piVar12 + 0x10) = uVar10;
            *(*piVar12 + 0x18) = uStackX_20;
            puStack_f8 = arg1 + 0xa8;
            iVar7 = *piVar12;
            *puStack_f8 = 0x1000;
            *(arg1 + 0xb0) = *(iVar6 + 8);
            *(arg1 + 0xc0) = uStackX_20;
            *(arg1 + 0xb8) = uVar10;
            uVar10 = fcn.00016f0c(iVar5);
            iVar7 = (**(*0x1a798 + 0x40))(4,uVar10,iVar7 + 0x20);
            if (-1 < iVar7) {
                iVar7 = fcn.00016f0c(iVar5);
                if ((iVar7 != 0) && (*(*piVar12 + 0x20) != iVar5)) {
                    section..text(*(*piVar12 + 0x20),iVar5,iVar7);
                }
                *(*piVar12 + 0x40) = puStack_d8;
                *(*piVar12 + 0x48) = uStack_d0;
                *(*piVar12 + 0x50) = 5;
                *(*piVar12 + 0x54) = 6;
                arg2 = fcn.00016f0c(iVar5);
                iVar7 = fcn.000152d4(6,arg2,arg1 + 200);
                if (iVar7 < 0) {
                    if (iStackX_10 != 0) {
                        (**(*0x1a798 + 0x48))();
                    }
                    (**(*0x1a798 + 0x48))(*(*piVar12 + 0x20));
                    goto code_r0x0001362d;
                }
                iVar9 = fcn.00016f0c(iVar5);
                if ((iVar9 != 0) && (*(arg1 + 200) != iVar5)) {
                    section..text(*(arg1 + 200),iVar5,iVar9);
                }
                *(arg1 + 0x78) = 0;
                *(arg1 + 0xe8) = puStack_d8;
                uVar10 = 0x1a000;
                *(arg1 + 0xf0) = uStack_d0;
                iVar9 = *0x1a798;
                *(arg1 + 0xf8) = 5;
                *(arg1 + 0xfc) = 6;
                (**(iVar9 + 0x148))(arg1 + 0x78,0x1a000,*piVar12,0);
                piVar12 = arg1 + 0xa0;
                *piVar12 = 0;
                if (piVar12 == NULL) goto code_r0x000139c3;
                arg1_00 = NULL;
                arg1_01 = NULL;
                iVar9 = -0x7ffffffffffffff7;
                if (*piVar12 != 0) {
                    uVar10 = 0x1a000;
                    iVar9 = fcn.00014c14(*piVar12,0x1a000,auStack_e8);
                    if (-1 < iVar9) goto code_r0x000139c3;
                }
                iVar7 = fcn.00014808(0x1a000,CONCAT71(uVar10 >> 8,1));
                if (iVar7 == 0) {
code_r0x000139ac:
                    if (-1 < iVar9) {
                        *piVar12 = arg1_01;
                        goto code_r0x000139c3;
                    }
                }
                else {
                    arg1_00 = fcn.00016e70(0x40);
                    if (arg1_00 == NULL) goto code_r0x000139c3;
                    arg1_01 = *piVar12;
                    if (arg1_01 == NULL) {
                        arg1_01 = fcn.00016e70(0x30);
                        if (arg1_01 != NULL) {
                            *arg1_01 = 0x6c646873;
                            puVar3 = arg1_01 + 1;
                            puVar1 = arg1_01 + 3;
                            *puVar1 = puVar1;
                            arg1_01[4] = puVar1;
                            *puVar3 = 0x1a5a8;
                            arg1_01[2] = *0x1a5b0;
                            **0x1a5b0 = puVar3;
                            *0x1a5b0 = puVar3;
code_r0x00013935:
                            piVar2 = arg1_00 + 1;
                            arg1_00[6] = iVar7;
                            piVar11 = arg1_01 + 3;
                            arg1_00[7] = puStack_f8;
                            *arg1_00 = 0x66697073;
                            arg1_00[3] = arg1_01;
                            iVar9 = *piVar11;
                            arg1_00[2] = piVar11;
                            *piVar2 = iVar9;
                            *(iVar9 + 8) = piVar2;
                            *piVar11 = piVar2;
                            piVar2 = arg1_00 + 4;
                            *piVar2 = iVar7 + 0x28;
                            puVar3 = *(iVar7 + 0x30);
                            arg1_00[5] = puVar3;
                            *puVar3 = piVar2;
                            *(iVar7 + 0x30) = piVar2;
                            iVar9 = arg1_00[6];
                            piVar2 = iVar9 + 0x38;
                            piVar11 = *piVar2;
                            if (piVar11 != piVar2) {
                                do {
                                    (*piVar11[2])(iVar9 + 0x18,arg1_00[7],arg1_00[3]);
                                    piVar11 = *piVar11;
                                } while (piVar11 != piVar2);
                            }
                            iVar9 = 0;
                            goto code_r0x000139ac;
                        }
                    }
                    else {
                        iVar9 = fcn.000147d8(arg1_01);
                        if (-1 < iVar9) goto code_r0x00013935;
                    }
                }
                if (arg1_00 != NULL) {
                    fcn.00016edc(arg1_00);
                }
code_r0x000139c3:
                iVar9 = (**(*0x1a798 + 0x48))(iStackX_10);
                if (iVar9 < 0) {
                    return iVar9;
                }
                if (iVar8 < 0) {
                    return iVar8;
                }
                return iVar9;
            }
        }
    }
    if (iStackX_10 != 0) {
        (**(*0x1a798 + 0x48))();
    }
code_r0x0001362d:
    fcn.00016738(puVar4,iVar9);
    return iVar7;
}


/* fcn.000139f4 @ 0x139f4 */

int64_t fcn.000139f4(int64_t arg1)

{
    ulong *puVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    uchar auStackX_8 [8];
    
    puVar1 = arg1 + 0x50;
    iVar3 = (**(*(arg1 + 0x48) + 0x18))(*(arg1 + 0x48),arg1 + 0x30,0x1c,0,puVar1,arg1 + 0x58,auStackX_8);
    if (iVar3 < 0) {
        if (iVar3 == -0x7fffffffffffffe8) {
            *(arg1 + 0x77) = 1;
            return -0x7fffffffffffffe8;
        }
        *puVar1 = 0;
        *(arg1 + 0x74) = 1;
    }
    else {
        *(arg1 + 0x74) = 1;
        cVar2 = **puVar1;
        if (cVar2 == '\0') {
            *(arg1 + 0x60) = 1;
        }
        else if (cVar2 == '\x01') {
            *(arg1 + 0x61) = 1;
        }
        if ((*(arg1 + 0x60) != '\0') || (*(arg1 + 0x61) != '\0')) {
            pcVar4 = *puVar1 + 1;
            if (arg1 + 100 != pcVar4) {
                section..text(arg1 + 100,pcVar4,0x10);
            }
        }
    }
    *(arg1 + 0x77) = 0;
    return iVar3;
}


/* fcn.00016968 @ 0x16968 */

//WARNING: Variable defined which should be unmapped: var_10h

char fcn.00016968(uint32_t arg1)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint in_register_0000000c;
    uint32_t *puVar6;
    uint8_t *arg1_00;
    uint8_t *puVar7;
    uint8_t *puVar8;
    char acStackX_8 [8];
    char acStackX_10 [8];
    uchar auStackX_18 [16];
    uint32_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    uint8_t auStack_38 [16];
    int64_t var_10h;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    acStackX_8[0] = '\0';
    acStackX_10[0] = '\0';
    if ((((*(iVar4 + 0x61) != '\0') || (*(iVar4 + 0x60) != '\0')) || (puVar7 = *(iVar4 + 0x50), puVar7 == NULL)) ||
       (*0x1a788 = *0x1a778, puVar2 = puVar7, *(iVar4 + 0x58) == 0)) {
        return '\0';
    }
    do {
        puVar8 = puVar2 + 1;
        uVar1 = *puVar7;
        uVar5 = uVar1;
        if (uVar5 < 6) {
            if (uVar5 == 5) {
                puVar6 = acStackX_8;
                iVar3 = fcn.0001693c(puVar6);
                if (iVar3 < 0) {
                    return '\0';
                }
                puVar6 = CONCAT71(puVar6 >> 8,acStackX_8[0] == '\0');
                goto code_r0x00016a1a;
            }
            if (uVar1 < 2) {
                return '\0';
            }
            if (uVar1 != 2) {
                if (uVar1 == 3) {
                    iVar3 = fcn.0001693c(acStackX_8);
                    if (iVar3 < 0) {
                        return '\0';
                    }
                    puVar6 = acStackX_10;
                    iVar3 = fcn.0001693c(puVar6);
                    if (iVar3 < 0) {
                        return '\0';
                    }
                    if ((acStackX_8[0] == '\0') || (puVar6 = CONCAT71(puVar6 >> 8,1), acStackX_10[0] == '\0')) {
                        puVar6 = puVar6 & 0xffffffffffffff00;
                    }
                }
                else {
                    if (uVar1 != 4) {
                        return '\0';
                    }
                    iVar3 = fcn.0001693c(acStackX_8);
                    if (iVar3 < 0) {
                        return '\0';
                    }
                    puVar6 = acStackX_10;
                    iVar3 = fcn.0001693c(puVar6);
                    if (iVar3 < 0) {
                        return '\0';
                    }
                    if ((acStackX_8[0] != '\0') || (puVar6 = puVar6 & 0xffffffffffffff00, acStackX_10[0] != '\0'))
                    goto code_r0x00016a18;
                }
                goto code_r0x00016a1a;
            }
            if (auStack_38 != puVar8) {
                section..text(auStack_38,puVar8,0x10);
            }
            arg1_00 = auStack_38;
            iVar3 = fcn.00014d64(arg1_00,0,auStackX_18);
            if (-1 < iVar3) {
code_r0x00016ac2:
                *puVar7 = 0xff;
                goto code_r0x00016ac5;
            }
            arg1_00 = auStack_38;
            iVar3 = (**(*0x1a798 + 0x140))(arg1_00,0,auStackX_18);
            if (-1 < iVar3) goto code_r0x00016ac2;
            iVar3 = 0;
code_r0x00016ac7:
            iVar3 = fcn.000168fc(iVar3);
            if (iVar3 < 0) {
                return '\0';
            }
            puVar7 = puVar7 + 0x10;
            puVar8 = puVar2 + 0x11;
        }
        else {
            puVar6 = uVar5 - 6;
            if (uVar5 - 6 == 0) {
code_r0x00016a18:
                puVar6 = CONCAT71(puVar6 >> 8,1);
            }
            else {
                if (uVar5 != 7) {
                    if (uVar5 == 8) {
                        iVar4 = fcn.0001693c(acStackX_8);
                        if (iVar4 < 0) {
                            acStackX_8[0] = '\0';
                        }
                        return acStackX_8[0];
                    }
                    if (uVar5 != 0xff) {
                        return '\0';
                    }
                    arg1_00 = NULL;
                    if (auStack_38 != puVar8) {
                        arg1_00 = auStack_38;
                        section..text(arg1_00,puVar8,0x10);
                    }
code_r0x00016ac5:
                    iVar3 = CONCAT71(arg1_00 >> 8,1);
                    goto code_r0x00016ac7;
                }
                puVar6 = NULL;
            }
code_r0x00016a1a:
            iVar3 = fcn.000168fc(puVar6);
            if (iVar3 < 0) {
                return '\0';
            }
        }
        puVar7 = puVar7 + 1;
        puVar2 = puVar8;
        if (*(iVar4 + 0x58) <= puVar7 - *(iVar4 + 0x50)) {
            return '\0';
        }
    } while( true );
}


/* fcn.00013d2c @ 0x13d2c */

void fcn.00013d2c(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    
    for (puVar1 = *0x1a540; puVar1 != 0x1a540; puVar1 = *puVar1) {
        if ((((*(puVar1 + 0xb) != '\0') && (*(puVar1 + 0x6c) != '\0')) && (puVar1 + -1 != arg1)) &&
           ((*(arg1 + 0x30) == *(puVar1 + 0x5c) && (*(arg1 + 0x38) == *(puVar1 + 100))))) {
            fcn.00013d2c(puVar1 + -1);
        }
    }
    *(arg1 + 0x74) = 0x100;
    puVar1 = arg1 + 0x18;
    *puVar1 = 0x1a520;
    *(arg1 + 0x20) = *0x1a528;
    **0x1a528 = puVar1;
    *0x1a528 = puVar1;
    for (puVar2 = *0x1a540; puVar2 != 0x1a540; puVar2 = *puVar2) {
        if (((*(puVar2 + 0x59) != '\0') && (*(puVar2 + 0x6c) != '\0')) &&
           ((puVar2 + -1 != arg1 && ((*(arg1 + 0x30) == *(puVar2 + 0x5c) && (*(arg1 + 0x38) == *(puVar2 + 100))))))) {
            fcn.00013d2c(puVar2 + -1);
        }
    }
    return;
}


/* fcn.00016c70 @ 0x16c70 */

ulong fcn.00016c70(uint *noname_0,int64_t arg1,int64_t arg2)

{
    uint *arg1_00;
    ulong uVar1;
    
    arg1_00 = fcn.00016e40(noname_0,0x1c);
    if (arg1_00 == NULL) {
        uVar1 = 0x8000000000000009;
    }
    else {
        *arg1_00 = 0x80014;
        uVar1 = 8;
        *(arg1_00 + 1) = *0x1a010;
        *(arg1_00 + 3) = *0x1a018;
        if ((arg2 != 0) && (noname_0 = arg1_00 + 5, noname_0 != arg2)) {
            section..text(noname_0,arg2,8);
        }
        uVar1 = fcn.00016bd8(noname_0,arg1 & 0xffffffff,uVar1,0x1a280);
        fcn.00016edc(arg1_00);
    }
    return uVar1;
}


/* fcn.00015448 @ 0x15448 */

ulong fcn.00015448(uint32_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t *piVar9;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar6 = 0;
    if ((((piVar4 == NULL) || (piVar5 = piVar4 + -3, *piVar5 != 0x64687073)) ||
        (uVar1 = piVar4[-1], *((uVar1 - 0x10) + piVar5) != 0x6c747073)) || (uVar1 != *((uVar1 - 8) + piVar5))) {
        return 0x8000000000000002;
    }
    if (uVar1 < 0x801) {
        if (piVar4[-2] != 5) {
            if (piVar4[-2] == 6) {
                iVar6 = 6;
            }
            else {
                iVar6 = 0xc;
            }
        }
        uVar3 = uVar1 & 0xffffffff;
        if (uVar1 == 0) {
            iVar8 = -1;
        }
        else {
            iVar8 = 0x1f;
            for (; 0 < uVar3; uVar3 = uVar3 * 2) {
                iVar8 = iVar8 + -1;
            }
        }
        *piVar5 = 0;
        *(piVar4 + -2) = 0;
        *(piVar4 + -0x14) = 1;
        *((uVar1 - 0x10) + piVar5) = 0;
        *((uVar1 - 8) + piVar5) = 0;
        piVar5 = (iVar8 + -6 + iVar6) * 0x10 + 0x1a9e0;
        iVar6 = *piVar5;
        *piVar4 = iVar6;
        piVar4[1] = piVar5;
        *(iVar6 + 8) = piVar4;
        *piVar5 = piVar4;
        return 0;
    }
    iVar6 = ((uVar1 & 0xfff) != 0) + (uVar1 >> 0xc);
    if ((((piVar5 & 0xfff) == 0) && (piVar5 != NULL)) && (iVar6 != 0)) {
        piVar7 = *0x1a618;
        if (*0x1a618 != 0x1a618) {
            do {
                piVar9 = piVar7;
                piVar7 = piVar9;
                if (piVar5 < piVar9) break;
                piVar7 = *piVar9;
            } while (piVar7 != 0x1a618);
            if ((piVar7 != 0x1a618) && (piVar9 < piVar5 + iVar6 * 0x200)) {
                return 0x8000000000000002;
            }
        }
        iVar8 = piVar7[1];
        if ((iVar8 == 0x1a618) || (*(iVar8 + 0x10) * 0x1000 + iVar8 <= piVar5)) {
            piVar4[-1] = iVar6;
            *piVar5 = piVar7;
            puVar2 = piVar7[1];
            piVar4[-2] = puVar2;
            *puVar2 = piVar5;
            piVar7[1] = piVar5;
            piVar4 = piVar4[-2];
            piVar9 = piVar5;
            if (piVar4 != 0x1a618) {
                piVar9 = *piVar4;
                if (piVar9 - piVar4 >> 0xc == piVar4[2]) {
                    piVar4[2] = piVar4[2] + piVar9[2];
                    *(*piVar9 + 8) = piVar9[1];
                    *piVar9[1] = *piVar9;
                    piVar9 = piVar4;
                }
            }
            if (piVar7 != 0x1a618) {
                piVar4 = *piVar9;
                if (piVar4 - piVar9 >> 0xc == piVar9[2]) {
                    piVar9[2] = piVar9[2] + piVar4[2];
                    *(*piVar4 + 8) = piVar4[1];
                    *piVar4[1] = *piVar4;
                }
            }
            fcn.000161dc(7,piVar5,iVar6);
            fcn.00015f84();
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00016f64 @ 0x16f64 */

int64_t fcn.00016f64(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t arg1_00;
    ulong in_R8;
    int64_t in_R9;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1a6e4;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.0001705c(arg1,0,in_R8,in_R9);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.0001705c(arg2,0,in_R8,in_R9);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00016f0c(arg1);
        iVar2 = fcn.00016f0c(arg2);
        arg1_00 = fcn.00016e40();
        if (arg1_00 != 0) {
            if ((iVar3 != 0) && (arg1_00 != arg1)) {
                arg1_00 = section..text(arg1_00,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + arg1_00;
            if ((iVar2 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar2);
            }
        }
        return arg1_00;
    }
    iVar2 = fcn.00016f0c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00016e9c(iVar2,arg1);
    }
    return iVar3;
}


/* fcn.00013ab0 @ 0x13ab0 */

ulong fcn.00013ab0(void)

{
    int64_t *piVar1;
    int64_t *noname_0;
    bool bVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    
    uVar4 = 0;
    if (*0x1a724 == '\0') {
        uVar4 = 0x800000000000000e;
    }
    else if (*0x1a723 == '\0') {
        *0x1a723 = 1;
code_r0x00013b55:
        do {
            piVar7 = *0x1a520;
            if (*0x1a520 == 0x1a520) {
                bVar2 = false;
                piVar7 = *0x1a540;
                if (*0x1a540 != 0x1a540) {
                    do {
                        piVar1 = piVar7 + -1;
                        if ((((*(piVar7 + 0x6f) == '\0') ||
                             (iVar5 = fcn.000139f4(piVar1), iVar5 != -0x7fffffffffffffe8)) &&
                            (*(piVar7 + 0x6c) != '\0')) && (cVar3 = fcn.00016968(piVar1), cVar3 != '\0')) {
                            fcn.00013d2c(piVar1);
                            bVar2 = true;
                        }
                        piVar7 = *piVar7;
                    } while (piVar7 != 0x1a540);
                    if (bVar2) goto code_r0x00013b55;
                }
                *0x1a724 = '\0';
                piVar7 = *0x1a540;
                goto code_r0x00013cf4;
            }
            if (((*0x1a520)[0xc] == 0) && (iVar5 = fcn.000133a4(*0x1a520 + -3), iVar5 < 0)) {
                *(piVar7 + 0x5d) = 0x100;
                *(*piVar7 + 8) = piVar7[1];
                *piVar7[1] = *piVar7;
                goto code_r0x00013b55;
            }
            *(piVar7 + 0x5d) = 0x100;
            piVar1 = piVar7 + 0xc;
            *(*piVar7 + 8) = piVar7[1];
            noname_0 = piVar7[1];
            *noname_0 = *piVar7;
            fcn.00016c70(noname_0,0x3070002,piVar1);
            iVar5 = *piVar1;
            cVar3 = *(*0x1aad8 + 0x28);
            iVar6 = (*piVar7[0xe])(iVar5,*0x1a790);
            if (iVar6 < 0) {
                fcn.00016738(piVar7[0xf],piVar7[0x10]);
                iVar5 = (**(*0x1a798 + 0x90))(*piVar1,0x1a000,piVar7[0xd]);
                if (-1 < iVar5) {
                    if (*(piVar7[0xd] + 0x20) != 0) {
                        (**(*0x1a798 + 0x48))();
                    }
                    (**(*0x1a798 + 0x48))(piVar7[0xd]);
                }
                iVar5 = piVar7[0x11];
                iVar6 = fcn.00014aec(iVar5,0x1a000,piVar7 + 0x12);
                if ((-1 < iVar6) && (iVar5 = piVar7[0x16], iVar5 != 0)) {
                    fcn.00015448(iVar5);
                }
            }
            fcn.00016c70(iVar5,0x3070003,piVar1);
        } while ((cVar3 != '\0') || (*(*0x1aad8 + 0x28) == '\0'));
        *0x1a724 = '\x01';
        uVar4 = 0x8000000000000006;
code_r0x00013d05:
        *0x1a723 = '\0';
    }
    else {
        uVar4 = 0x8000000000000014;
    }
    return uVar4;
code_r0x00013cf4:
    if (piVar7 == 0x1a540) goto code_r0x00013d05;
    if (*(piVar7 + 0x6e) == '\0') {
        *0x1a724 = '\x01';
        goto code_r0x00013d05;
    }
    piVar7 = *piVar7;
    goto code_r0x00013cf4;
}


/* fcn.00014328 @ 0x14328 */

int64_t * fcn.00014328(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar2 = arg1;
    if (*0x1a588 != 0x1a588) {
        piVar1 = *0x1a588;
        do {
            piVar2 = piVar1 + -1;
            if ((piVar1[2] == *arg1) && (piVar1[3] == *(arg1 + 8))) {
                if (piVar2 != NULL) {
                    return piVar2;
                }
                break;
            }
            piVar1 = *piVar1;
        } while (piVar1 != 0x1a588);
    }
    piVar1 = NULL;
    if ((arg2 != '\0') && (piVar1 = fcn.00016e40(piVar2,0x38), piVar1 != NULL)) {
        *piVar1 = 0x65696d73;
        piVar1[3] = *arg1;
        piVar1[4] = *(arg1 + 8);
        piVar2 = piVar1 + 5;
        *piVar2 = piVar2;
        piVar1[6] = piVar2;
        piVar2 = piVar1 + 1;
        *piVar2 = 0x1a588;
        piVar1[2] = *0x1a590;
        **0x1a590 = piVar2;
        *0x1a590 = piVar2;
    }
    return piVar1;
}


/* fcn.00014938 @ 0x14938 */

int64_t fcn.00014938(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *arg1_00;
    ulong *arg1_01;
    int64_t iVar5;
    ulong *puVar6;
    uchar auStackX_8 [8];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 != 0)) {
        return -0x7ffffffffffffffe;
    }
    arg1_00 = NULL;
    arg1_01 = NULL;
    iVar5 = -0x7ffffffffffffff7;
    iVar4 = arg2;
    if ((*arg1 != 0) && (iVar5 = fcn.00014c14(*arg1,arg2,auStackX_8), -1 < iVar5)) {
        return -0x7ffffffffffffffe;
    }
    iVar4 = fcn.00014808(arg2,CONCAT71(iVar4 >> 8,1));
    if (iVar4 != 0) {
        arg1_00 = fcn.00016e70(0x40);
        if (arg1_00 == NULL) {
            return -0x7ffffffffffffff7;
        }
        arg1_01 = *arg1;
        if (arg1_01 == NULL) {
            arg1_01 = fcn.00016e70(0x30);
            if (arg1_01 == NULL) {
                iVar5 = -0x7ffffffffffffff7;
                goto code_r0x000149e9;
            }
            *arg1_01 = 0x6c646873;
            puVar3 = arg1_01 + 1;
            puVar6 = arg1_01 + 3;
            *puVar6 = puVar6;
            arg1_01[4] = puVar6;
            *puVar3 = 0x1a5a8;
            arg1_01[2] = *0x1a5b0;
            **0x1a5b0 = puVar3;
            *0x1a5b0 = puVar3;
        }
        else {
            iVar5 = fcn.000147d8(arg1_01);
            if (iVar5 < 0) goto code_r0x000149e9;
        }
        arg1_00[6] = iVar4;
        piVar1 = arg1_00 + 1;
        arg1_00[7] = arg4;
        piVar2 = arg1_01 + 3;
        *arg1_00 = 0x66697073;
        arg1_00[3] = arg1_01;
        iVar5 = *piVar2;
        arg1_00[2] = piVar2;
        *piVar1 = iVar5;
        *(iVar5 + 8) = piVar1;
        *piVar2 = piVar1;
        piVar1 = arg1_00 + 4;
        *piVar1 = iVar4 + 0x28;
        puVar3 = *(iVar4 + 0x30);
        arg1_00[5] = puVar3;
        *puVar3 = piVar1;
        *(iVar4 + 0x30) = piVar1;
        iVar4 = arg1_00[6];
        puVar3 = iVar4 + 0x38;
        for (puVar6 = *puVar3; puVar6 != puVar3; puVar6 = *puVar6) {
            (*puVar6[2])(iVar4 + 0x18,arg1_00[7],arg1_00[3]);
        }
        iVar5 = 0;
    }
    if (-1 < iVar5) {
        *arg1 = arg1_01;
        return iVar5;
    }
code_r0x000149e9:
    if (arg1_00 != NULL) {
        fcn.00016edc(arg1_00);
    }
    return iVar5;
}


/* fcn.000148c8 @ 0x148c8 */

ulong * fcn.000148c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar3 = NULL;
    iVar1 = fcn.00014808(arg2,0);
    if (iVar1 != 0) {
        for (puVar2 = *(arg1 + 0x18);
            (puVar3 = NULL, puVar2 != arg1 + 0x18 &&
            ((puVar3 = puVar2 + -1, puVar2[6] != arg3 || (puVar2[5] != iVar1)))); puVar2 = *puVar2) {
        }
    }
    return puVar3;
}


/* fcn.00014d04 @ 0x14d04 */

int64_t fcn.00014d04(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    *arg2 = 0;
    iVar3 = **(arg1 + 0x10);
    *(arg1 + 0x10) = iVar3;
    iVar2 = *0x1a740;
    if (iVar3 != *(arg1 + 0x18) + 0x28) {
        do {
            iVar1 = *(iVar3 + -8);
            *arg2 = *(iVar3 + 0x18);
            if (*(iVar1 + 0x28) != iVar2) {
                *(iVar1 + 0x28) = iVar2;
                return iVar1;
            }
            iVar3 = **(arg1 + 0x10);
            *(arg1 + 0x10) = iVar3;
        } while (iVar3 != *(arg1 + 0x18) + 0x28);
    }
    return 0;
}


/* fcn.00014ccc @ 0x14ccc */

ulong fcn.00014ccc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    
    uVar3 = 0;
    *arg2 = 0;
    iVar1 = *(arg1 + 8);
    if (iVar1 != 0) {
        *(arg1 + 8) = 0;
        iVar2 = **(iVar1 + 0x28);
        if (iVar2 != *(iVar1 + 8) + 0x28) {
            uVar3 = *(iVar2 + -8);
            *arg2 = *(iVar2 + 0x18);
        }
    }
    return uVar3;
}


/* fcn.00015108 @ 0x15108 */

int64_t fcn.00015108(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int iVar4;
    uint in_register_00000014;
    int64_t *piVar5;
    int64_t *piStackX_10;
    ulong *puStackX_18;
    int64_t var_28h;
    
    iVar4 = arg1;
    if (iVar4 == 5) {
        iVar1 = 0;
    }
    else if (iVar4 == 6) {
        iVar1 = 1;
    }
    else {
        iVar1 = 2;
    }
    iVar3 = 0;
    piStackX_10 = NULL;
    puStackX_18 = arg3;
    if (CONCAT44(in_register_00000014,arg2) == 6) {
        if (iVar4 != 5 && iVar4 != 6) {
            return -0x7ffffffffffffff7;
        }
        for (iVar1 = *0x1a620; iVar1 != 0x1a618; iVar1 = *(iVar1 + 8)) {
            if (*(iVar1 + 0x10) != 0) {
                piVar2 = fcn.0001634c(iVar1,1,-1);
                goto code_r0x0001518b;
            }
        }
        piVar2 = 0xffffffffffffffff;
code_r0x0001518b:
        if (piVar2 == 0xffffffffffffffff) {
            return -0x7ffffffffffffff7;
        }
        fcn.000161dc(arg1 & 0xffffffffU,piVar2,1);
        fcn.00015f84();
        iVar3 = 0;
    }
    else {
        piVar5 = (CONCAT44(in_register_00000014,arg2) + iVar1 * 6) * 0x10 + 0x1a9e0;
        if (*piVar5 == piVar5) {
            iVar3 = fcn.00015108(arg1 & 0xffffffffU,arg2 + 1,&piStackX_10);
            if (iVar3 < 0) goto code_r0x000152b7;
            *piStackX_10 = 0;
            piStackX_10[2] = piStackX_10[2] >> 1;
            *(piStackX_10 + 4) = 1;
            *(piStackX_10 + 1) = 0;
            iVar1 = piStackX_10[2];
            *(iVar1 + -0x10 + piStackX_10) = 0;
            *(iVar1 + -8 + piStackX_10) = 0;
            iVar1 = *piVar5;
            piVar2 = piStackX_10 + 3;
            piStackX_10[4] = piVar5;
            *piVar2 = iVar1;
            *(iVar1 + 8) = piVar2;
            *piVar5 = piVar2;
            piVar2 = piStackX_10 + piStackX_10[2];
        }
        else {
            piVar5 = *piVar5;
            piVar2 = piVar5 + -3;
            *(*piVar5 + 8) = piVar5[1];
            *piVar5[1] = *piVar5;
        }
    }
    *piVar2 = 0x64687073;
    piVar2[2] = 0x40 << (arg2 & 0x1f);
    *(piVar2 + 4) = 0;
    *(piVar2 + 1) = iVar4;
    iVar1 = piVar2[2];
    *(iVar1 + -0x10 + piVar2) = 0x6c747073;
    *(iVar1 + -8 + piVar2) = piVar2[2];
    piStackX_10 = piVar2;
code_r0x000152b7:
    *puStackX_18 = piStackX_10;
    return iVar3;
}


/* fcn.000163c0 @ 0x163c0 */

ulong fcn.000163c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t arg3_00;
    uint64_t arg3_01;
    char in_stack_00000028;
    char in_stack_00000030;
    
    if (1 < arg2 - 5U) {
        return 0x8000000000000002;
    }
    if (arg3 < 0x10000000000001) {
        arg3_01 = *arg4;
        uVar1 = 0;
        if (arg1 == 0) {
            arg3_01 = 0xffffffffffffffff;
code_r0x00016491:
            if (in_stack_00000030 != '\0') {
                iVar3 = fcn.00015c98(arg1,arg3,arg3_01,arg2 & 0xffffffffU);
                *arg4 = iVar3;
                if (iVar3 == -1) {
                    uVar1 = 0x8000000000000009;
                }
                return uVar1;
            }
            for (uVar2 = *0x1a620; uVar2 != 0x1a618; uVar2 = *(uVar2 + 8)) {
                if ((arg3 <= *(uVar2 + 0x10)) && (arg3 * 0x1000 + -1 + uVar2 <= arg3_01)) {
                    iVar3 = fcn.0001634c(uVar2,arg3,arg3_01);
                    goto code_r0x00016502;
                }
            }
            iVar3 = -1;
code_r0x00016502:
            *arg4 = iVar3;
            if (iVar3 == -1) goto code_r0x00016402;
        }
        else {
            uVar4 = arg1 - 1;
            arg1 = uVar4;
            if (uVar4 == 0) goto code_r0x00016491;
            if (uVar4 != 1) {
                return 0x8000000000000002;
            }
            if ((arg3_01 & 0xfff) == 0) {
                arg3_00 = arg3 * 0x1000 + arg3_01;
                for (uVar2 = *0x1a620; uVar2 != 0x1a618; uVar2 = *(uVar2 + 8)) {
                    if (uVar2 <= arg3_01) {
                        if (arg3_00 <= *(uVar2 + 0x10) * 0x1000 + uVar2) {
                            uVar2 = fcn.0001634c(uVar2,arg3,arg3_00);
                            goto code_r0x00016458;
                        }
                        break;
                    }
                }
            }
            uVar2 = ~arg3_01;
code_r0x00016458:
            *arg4 = uVar2;
            if (uVar2 != arg3_01) {
                return 0x800000000000000e;
            }
        }
        fcn.000161dc(arg2 & 0xffffffffU,*arg4,arg3);
        if (in_stack_00000028 == '\0') {
            fcn.00015f84();
        }
        uVar1 = 0;
    }
    else {
code_r0x00016402:
        uVar1 = 0x8000000000000009;
    }
    return uVar1;
}


/* fcn.000110a0 @ 0x110a0 */

int64_t fcn.000110a0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001552c @ 0x1552c */

int64_t fcn.0001552c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t noname_1;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t *arg1_00;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t *piStackX_8;
    
    piVar5 = NULL;
    if (arg2 != '\0') {
        piVar4 = *0x1a758;
        while ((*0x1a5e8 < 5 && (arg1 >> (*(*0x1a5e8 * -8 + 0x1a610) & 0x3f) != 0))) {
            if (piVar4 != NULL) {
                uVar3 = *(*0x1a5e8 * -8 + 0x1a5e0) * 8 + 8;
                iVar2 = fcn.000163c0(0,6,((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc),&piStackX_8);
                piVar4 = piStackX_8;
                if (iVar2 < 0) {
                    piVar4 = piVar5;
                }
                piStackX_8 = piVar4;
                if (uVar3 != 0) {
                    fcn.000110a0(piVar4,uVar3,0);
                }
                *piVar4 = *0x1a758;
                *0x1a758 = piVar4;
            }
            *0x1a5e8 = *0x1a5e8 + 1;
        }
    }
    piVar4 = 0x1a758;
    uVar3 = 5 - *0x1a5e8;
    do {
        if (4 < uVar3) {
code_r0x000156f6:
            *arg3 = piVar4;
            return 0x10000 - (arg1 >> 0xc & 0xffff);
        }
        if (*piVar4 == 0) {
            if (arg2 == '\0') {
                piVar4 = piVar5;
                goto code_r0x000156f6;
            }
            noname_1 = *(uVar3 * 8 + 0x1a5c0) * 8 + 8;
            iVar2 = fcn.000163c0(0,6,((noname_1 & 0xfff) != 0) + (noname_1 >> 0xc),&piStackX_8);
            arg1_00 = piStackX_8;
            if (iVar2 < 0) {
                arg1_00 = piVar5;
            }
            piStackX_8 = arg1_00;
            if (noname_1 != 0) {
                fcn.000110a0(arg1_00,noname_1,0);
            }
            *piVar4 = arg1_00;
        }
        iVar2 = uVar3 * 8;
        iVar1 = uVar3 * 8;
        uVar3 = uVar3 + 1;
        piVar4 = *piVar4 + (arg1 >> (*(iVar2 + 0x1a5f0) & 0x3f) & *(iVar1 + 0x1a5c0)) * 8;
    } while( true );
}


/* fcn.00011080 @ 0x11080 */

int64_t fcn.00011080(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    int64_t *piVar1;
    
    piVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *piVar1 = arg2;
        piVar1 = piVar1 + 1;
    }
    return arg1;
}


/* fcn.00015830 @ 0x15830 */

uint64_t fcn.00015830(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t *puStackX_10;
    
    uVar5 = 0;
    iVar4 = 0;
    do {
        uVar1 = fcn.0001552c(arg1,0,&puStackX_10);
        uVar3 = arg2;
        if (uVar1 < arg2) {
            uVar3 = uVar1;
        }
        if (puStackX_10 != NULL) {
            uVar2 = arg1 >> 0xc & 0x3f;
            uVar1 = uVar2;
            if (uVar1 + uVar3 < 0x41) {
                uVar6 = 0;
                uVar7 = uVar3;
            }
            else {
                uVar6 = uVar1 + uVar3 & 0x3f;
                uVar7 = 0x40 - uVar1;
            }
            if ((uVar1 == 0) && (uVar3 == 0x40)) {
                uVar1 = *puStackX_10;
            }
            else {
                uVar1 = *puStackX_10 >> uVar2 & (1LL << (uVar7 & 0x3f)) - 1U;
                if (uVar6 != 0) {
                    uVar1 = uVar1 | ((1LL << uVar6) - 1U & puStackX_10[1]) << (uVar7 & 0x3f);
                }
            }
            uVar5 = uVar5 | uVar1 << (iVar4 & 0x3f);
        }
        iVar4 = iVar4 + uVar3;
        arg2 = arg2 - uVar3;
        arg1 = arg1 + uVar3 * 0x1000;
    } while (arg2 != 0);
    return uVar5;
}


/* fcn.00015918 @ 0x15918 */

uchar fcn.00015918(int64_t arg1)

{
    int64_t iVar1;
    uchar uVar2;
    
    iVar1 = fcn.00015830(arg1 + -0x1000,3);
    uVar2 = 1;
    if ((iVar1 != 1) && (1 < iVar1 - 4U)) {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001594c @ 0x1594c */

void fcn.0001594c(int64_t arg1)

{
    if (*0x1a750 != 0) {
        *0x1a760 = 1;
        (**(*0x1a750 + 8))(*0x1a750,arg1,0x1000,0x2000);
        *0x1a760 = 0;
    }
    return;
}


/* fcn.00015728 @ 0x15728 */

void fcn.00015728(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t noname_1;
    uint64_t uVar2;
    uint64_t *arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t *puStackX_10;
    
    if (arg2 != 0) {
        uVar3 = arg2;
        do {
            uVar1 = fcn.0001552c(arg1,CONCAT71(arg2 >> 8,1),&puStackX_10);
            uVar2 = uVar3;
            if (uVar1 < uVar3) {
                uVar2 = uVar1;
            }
            uVar4 = arg1 >> 0xc & 0x3f;
            if (uVar4 + uVar2 < 0x40) {
                uVar5 = 0;
                noname_1 = 0;
                uVar1 = uVar2;
            }
            else {
                uVar5 = uVar4 + uVar2 & 0x3f;
                noname_1 = uVar2 - (-uVar4 & 0x3f) >> 6;
                uVar1 = -uVar4 & 0x3f;
            }
            arg1_00 = puStackX_10;
            if (uVar1 != 0) {
                *puStackX_10 = *puStackX_10 & ~((1LL << (uVar1 & 0x3f)) + -1 << uVar4);
                arg1_00 = puStackX_10 + 1;
            }
            arg2 = noname_1;
            if (noname_1 != 0) {
                if (noname_1 != 0) {
                    fcn.00011080(arg1_00,noname_1,0);
                }
                arg1_00 = arg1_00 + noname_1;
            }
            if (uVar5 != 0) {
                *arg1_00 = *arg1_00 & ~((1LL << uVar5) - 1U);
            }
            uVar3 = uVar3 - uVar2;
            arg1 = arg1 + uVar2 * 0x1000;
        } while (uVar3 != 0);
    }
    return;
}


/* fcn.00015984 @ 0x15984 */

void fcn.00015984(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t noname_1;
    int64_t arg1_00;
    uint64_t uVar3;
    uint64_t *arg1_01;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t *puStackX_8;
    
    arg1_00 = arg2 * 0x1000 + arg1;
    uVar2 = arg2;
    cVar1 = fcn.00015918(arg1_00);
    if (cVar1 == '\0') {
        fcn.0001594c(arg1_00);
    }
    cVar1 = fcn.00015918(arg1 + -0x1000);
    if (cVar1 == '\0') {
        fcn.0001594c(arg1 + -0x1000);
    }
    for (; arg2 != 0; arg2 = arg2 - uVar3) {
        uVar2 = fcn.0001552c(arg1,CONCAT71(uVar2 >> 8,1),&puStackX_8);
        uVar3 = arg2;
        if (uVar2 < arg2) {
            uVar3 = uVar2;
        }
        uVar4 = arg1 >> 0xc & 0x3f;
        if (uVar4 + uVar3 < 0x40) {
            uVar5 = 0;
            noname_1 = 0;
            uVar2 = uVar3;
        }
        else {
            uVar5 = uVar4 + uVar3 & 0x3f;
            noname_1 = uVar3 - (-uVar4 & 0x3f) >> 6;
            uVar2 = -uVar4 & 0x3f;
        }
        arg1_01 = puStackX_8;
        if (uVar2 != 0) {
            *puStackX_8 = *puStackX_8 | (1LL << (uVar2 & 0x3f)) + -1 << uVar4;
            arg1_01 = puStackX_8 + 1;
        }
        uVar2 = noname_1;
        if (noname_1 != 0) {
            if (noname_1 != 0) {
                fcn.00011080(arg1_01,noname_1,-1);
            }
            arg1_01 = arg1_01 + noname_1;
        }
        if (uVar5 != 0) {
            *arg1_01 = *arg1_01 | (1LL << uVar5) - 1U;
        }
        arg1 = arg1 + uVar3 * 0x1000;
    }
    return;
}


/* fcn.00016120 @ 0x16120 */

void fcn.00016120(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    char in_stack_00000028;
    
    iVar3 = *0x1a770 * 0x30;
    *0x1a770 = *0x1a770 + 1;
    *(iVar3 + 0x1a8d8) = 1;
    *(iVar3 + 0x1a8c0) = 0x70616d6d;
    *(iVar3 + 0x1a8dc) = arg4;
    *(iVar3 + 0x1a8e0) = arg2;
    *(iVar3 + 0x1a8e8) = arg3;
    piVar4 = iVar3 + 0x1a8c8;
    if (in_stack_00000028 != '\0') {
        iVar1 = *arg1;
        *piVar4 = iVar1;
        *(iVar3 + 0x1a8d0) = arg1;
        *(iVar1 + 8) = piVar4;
        *arg1 = piVar4;
        return;
    }
    *piVar4 = arg1;
    puVar2 = *(arg1 + 8);
    *(iVar3 + 0x1a8d0) = puVar2;
    *puVar2 = piVar4;
    *(arg1 + 8) = piVar4;
    return;
}


/* fcn.00016190 @ 0x16190 */

void fcn.00016190(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = iVar2 + 8;
    *(*piVar1 + 8) = *(iVar2 + 0x10);
    **(iVar2 + 0x10) = *piVar1;
    *piVar1 = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x18) == '\0') {
        *piVar1 = 0x1a628;
        *(iVar2 + 0x10) = *0x1a630;
        **0x1a630 = piVar1;
        *0x1a630 = piVar1;
    }
    return;
}


/* fcn.00015c98 @ 0x15c98 */

int64_t fcn.00015c98(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint64_t arg2_00;
    
    iVar2 = *0x1a620;
    do {
        if (iVar2 == 0x1a618) {
            return -1;
        }
        if ((arg1 <= *(iVar2 + 0x10)) && (arg1 * 0x1000 + -1 + iVar2 <= arg2)) {
            cVar1 = fcn.00015918(*(iVar2 + 0x10) * 0x1000 + iVar2);
            arg2_00 = arg1;
            if (cVar1 == '\0') {
                arg2_00 = arg1 + 1;
            }
            arg1_00 = (*(iVar2 + 0x10) - arg2_00) * 0x1000 + -0x1000 + iVar2;
            cVar1 = fcn.00015918(arg1_00);
            if (cVar1 == '\0') {
                arg2_00 = arg2_00 + 1;
                arg1_00 = 0;
            }
            if (arg2_00 <= *(iVar2 + 0x10)) {
                iVar2 = fcn.0001634c(iVar2,arg2_00,arg2);
                fcn.000161dc(arg3 & 0xffffffff,iVar2,arg2_00);
                fcn.00015f84();
                if (arg1_00 == 0) {
                    iVar2 = iVar2 + 0x1000;
                }
                fcn.00015984(iVar2,arg1);
                return iVar2;
            }
        }
        iVar2 = *(iVar2 + 8);
    } while( true );
}


/* fcn.00015bac @ 0x15bac */

void fcn.00015bac(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uStackX_10;
    
    if ((arg2 != 0) && (iVar3 = *arg2, iVar3 != 0)) {
        iVar4 = *arg1;
        if (*0x1a750 != NULL) {
            uStackX_10 = 0;
            (***0x1a750)(*0x1a750,iVar4,iVar3 << 0xc,&uStackX_10);
            if ((uStackX_10 & 0x20000) != 0) {
                (*(*0x1a750)[2])(*0x1a750,iVar4,iVar3 << 0xc);
            }
        }
        uVar1 = fcn.00015830(iVar4 + -0x2000,2);
        if ((uVar1 & 2) == 0) {
            if ((uVar1 & 1) == 0) {
                iVar4 = iVar4 + -0x1000;
                iVar3 = iVar3 + 1;
            }
        }
        else {
            iVar4 = iVar4 + 0x1000;
            iVar3 = iVar3 + -1;
        }
        uVar2 = fcn.00015830(iVar3 * 0x1000 + iVar4,2);
        if ((uVar2 & 1) == 0) {
            if ((uVar2 & 2) == 0) {
                iVar3 = iVar3 + 1;
            }
        }
        else if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
        }
        *arg1 = iVar4;
        *arg2 = iVar3;
    }
    return;
}


/* fcn.00015ac0 @ 0x15ac0 */

void fcn.00015ac0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t arg1_00;
    
    if (arg2 != 0) {
        uVar1 = fcn.00015830(arg1 + -0x2000,2);
        if ((uVar1 & 2) == 0) {
            if (((uVar1 & 1) == 0) && (*0x1a750 != 0)) {
                *0x1a760 = 1;
                (**(*0x1a750 + 0x10))(*0x1a750,arg1 + -0x1000,0x1000,0x2000);
                *0x1a760 = 0;
            }
        }
        else {
            fcn.0001594c(arg1);
        }
        arg1_00 = arg2 * 0x1000 + arg1;
        uVar1 = fcn.00015830(arg1_00,2);
        if ((uVar1 & 1) == 0) {
            if (((uVar1 & 2) == 0) && (*0x1a750 != 0)) {
                *0x1a760 = 1;
                (**(*0x1a750 + 0x10))(*0x1a750,arg1_00,0x1000,0x2000);
                *0x1a760 = 0;
            }
        }
        else {
            fcn.0001594c(arg1_00 + -0x1000);
        }
        fcn.00015728(arg1,arg2);
    }
    return;
}


/* fcn.00016850 @ 0x16850 */

ulong fcn.00016850(void)

{
    int64_t arg1;
    ulong uVar1;
    int64_t iVar2;
    
    iVar2 = 0x1000;
    if (*0x1a778 != 0) {
        iVar2 = (*0x1a780 - *0x1a778) + 0x1000;
    }
    arg1 = fcn.00016e40(*0x1a778,iVar2);
    if (arg1 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        if (*0x1a778 != 0) {
            if ((*0x1a780 - *0x1a778 != 0) && (arg1 != *0x1a778)) {
                section..text(arg1,*0x1a778,*0x1a780 - *0x1a778);
            }
            fcn.00016edc(*0x1a778);
        }
        *0x1a788 = *0x1a788 + (arg1 - *0x1a778);
        *0x1a780 = arg1 + iVar2;
        uVar1 = 0;
        *0x1a778 = arg1;
    }
    return uVar1;
}


/* fcn.0001693c @ 0x1693c */

ulong fcn.0001693c(uint32_t *arg1)

{
    if (*0x1a788 == *0x1a778) {
        return 0x800000000000000f;
    }
    *0x1a788 = *0x1a788 + -1;
    *arg1 = **0x1a788;
    return 0;
}


/* fcn.000168fc @ 0x168fc */

int64_t fcn.000168fc(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0x1a788 == *0x1a780) && (iVar1 = fcn.00016850(), iVar1 < 0)) {
        return iVar1;
    }
    **0x1a788 = arg1;
    *0x1a788 = *0x1a788 + 1;
    return 0;
}


/* fcn.00016bd8 @ 0x16bd8 */

ulong fcn.00016bd8(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if (*0x1a7c0 == NULL) {
        iVar1 = (**(*0x1a7a8 + 0xd0))(0x1a020,0,0x1a7c8);
        if ((iVar1 < 0) || (*0x1a7c8 == NULL)) {
            *0x1a7c0 = NULL;
        }
        else {
            *0x1a7c0 = **0x1a7c8;
        }
        if (*0x1a7c0 == NULL) {
            return 0x8000000000000003;
        }
    }
    uVar2 = (**0x1a7c0)(*0x1a7c8,1,arg1 & 0xffffffff,0,arg2,in_stack_00000028);
    return uVar2;
}


/* fcn.00016d0c @ 0x16d0c */

uint64_t fcn.00016d0c(uint32_t arg1,int64_t arg2)

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


/* fcn.00016dfc @ 0x16dfc */

uint64_t fcn.00016dfc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x1a7d8 != 0) {
        puVar2 = *0x1a7d0 + 8;
        in_RAX = *0x1a7d0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x1a7d8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001705c @ 0x1705c */

uint64_t fcn.0001705c(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint64_t in_RAX;
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((pcVar1 != NULL) && (in_RAX = arg2 - 1, 2 < in_RAX)) {
        uVar3 = 0;
        iVar4 = -1;
        if (arg2 != 0) {
            iVar4 = arg2;
        }
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return CONCAT71(in_RAX >> 8,*(pcVar1 + 2) == 4);
            }
            uVar2 = *(pcVar1 + 2);
            if ((uVar2 < 4) || (in_RAX = ~uVar3, in_RAX < uVar2)) break;
            uVar3 = uVar3 + uVar2;
            in_RAX = iVar4 - 4;
            if ((in_RAX < uVar3) || (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0))))
            break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000171ac @ 0x171ac */

ulong fcn.000171ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        if (arg3 == 0) {
            return 0x800000000000000e;
        }
        if ((arg2 == 0) || (arg1 <= arg2 + -1 + arg1)) {
            if (arg4 != 0) {
                do {
                    uVar1 = *arg3;
                    if (arg1 < uVar1) {
                        if (uVar1 <= arg2 + -1 + arg1) {
                            return 0x800000000000000f;
                        }
                    }
                    else if (arg1 < uVar1 + *(arg3 + 8)) {
                        return 0x800000000000000f;
                    }
                    uVar2 = uVar2 + 1;
                    arg3 = arg3 + 0x10;
                } while (uVar2 < arg4);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00017a5c @ 0x17a5c */

ulong fcn.00017a5c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
code_r0x00017a68:
        uVar1 = 0x8000000000000002;
    }
    else {
        if (*0x1a868 != 0) {
            if ((arg2 != 0) && (arg2 + -1 + arg1 < arg1)) goto code_r0x00017a68;
            if ((arg1 < *0x1a870 + *0x1a858) && (*0x1a858 < arg1 + arg2)) {
                if ((arg1 < *0x1a858) || (*0x1a870 + *0x1a858 < arg1 + arg2)) {
code_r0x00017af7:
                    *(*0x1a868 + 0x10) = 0x8000000f;
                    return 0x800000000000000f;
                }
                if (arg2 == 0) {
                    *(*0x1a868 + 0x10) = 0x80000002;
                    goto code_r0x00017a68;
                }
                if ((*0x1a880 == '\0') || (*(*0x1a868 + 0x14) != *0x1a874)) goto code_r0x00017af7;
                iVar2 = fcn.000179f0();
                if (iVar2 < 0) {
                    *(*0x1a868 + 0x10) = 0;
                }
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00017220 @ 0x17220 */

ulong fcn.00017220(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if (arg1 != 0) {
        if (arg3 == 0) {
            return 0x800000000000000e;
        }
        if ((arg2 == 0) || (arg1 <= arg2 + -1 + arg1)) {
            if (arg4 != 0) {
                do {
                    if ((*arg3 <= arg1) && (arg2 + -1 + arg1 < *arg3 + *(arg3 + 8))) {
                        return 0;
                    }
                    uVar1 = uVar1 + 1;
                    arg3 = arg3 + 0x10;
                } while (uVar1 < arg4);
            }
            return 0x800000000000000f;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00017384 @ 0x17384 */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00017384(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uchar auStackX_8 [8];
    uint32_t *puStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_68 [8];
    uchar auStack_60 [24];
    int64_t var_40h_2;
    int64_t var_38h_2;
    int32_t var_18h;
    
    puStackX_10 = NULL;
    iStackX_18 = 0;
    iVar2 = (**(*0x1a798 + 0x38))(&iStackX_18,0,auStack_68,&iStackX_20,auStackX_8);
    if (iVar2 == -0x7ffffffffffffffb) {
        iStackX_18 = iStackX_18 + iStackX_20 * 0x10;
        (**(*0x1a798 + 0x40))(4,iStackX_18,&puStackX_10);
        iVar2 = (**(*0x1a798 + 0x38))(&iStackX_18,puStackX_10,auStack_68,&iStackX_20,auStackX_8);
        if (-1 < iVar2) {
            iVar2 = *0x1a7f8;
            for (puVar4 = puStackX_10; puVar4 < iStackX_18 + puStackX_10; puVar4 = puVar4 + iStackX_20) {
                if ((*puVar4 < 0xb) && ((0x461U >> (*puVar4 & 0x1f) & 1) != 0)) {
                    iVar2 = iVar2 + 1;
                    *0x1a7f8 = iVar2;
                }
            }
            iVar2 = fcn.00016e40(puVar4,iVar2 << 4);
            if (iVar2 != 0) {
                iVar6 = 0;
                puVar4 = puStackX_10;
                *0x1a800 = iVar2;
                if (puStackX_10 < iStackX_18 + puStackX_10) {
                    iVar7 = 0;
                    puVar5 = puStackX_10;
                    do {
                        uVar1 = *puVar5;
                        if ((uVar1 < 0xb) && ((0x461U >> (uVar1 & 0x1f) & 1) != 0)) {
                            if (uVar1 == 0) {
                                iVar3 = (**(*0x1a7f0 + 0x38))(*(puVar5 + 2),auStack_60);
                                iVar2 = *0x1a800;
                                if (((-1 < iVar3) && ((var_38h_2 - 2U & 0xfffffffc) == 0)) && (var_38h_2 != 3))
                                goto code_r0x000174f2;
                            }
                            else {
code_r0x000174f2:
                                iVar6 = iVar6 + 1;
                                *(iVar7 + iVar2) = *(puVar5 + 2);
                                *(iVar7 + 8 + iVar2) = *(puVar5 + 6) << 0xc;
                                iVar7 = iVar7 + 0x10;
                            }
                            puVar4 = puStackX_10;
                        }
                        puVar5 = puVar5 + iStackX_20;
                    } while (puVar5 < iStackX_18 + puVar4);
                }
                *0x1a7f8 = iVar6;
                (**(*0x1a798 + 0x48))(puVar4);
                return 0;
            }
            *0x1a7f8 = 0;
            iVar2 = -0x7ffffffffffffff7;
            *0x1a800 = 0;
        }
        (**(*0x1a798 + 0x48))(puStackX_10);
    }
    return iVar2;
}


/* fcn.0001754c @ 0x1754c */

int64_t fcn.0001754c(void)

{
    int64_t iVar1;
    ulong *puVar2;
    int *piVar3;
    int *piVar4;
    int *piVar5;
    int64_t iStackX_8;
    
    iVar1 = fcn.000170d0(0x1a120,&iStackX_8);
    if (-1 < iVar1) {
        piVar4 = iStackX_8 + 0x10;
        piVar5 = *(iStackX_8 + 4) * *(iStackX_8 + 8) + piVar4;
        piVar3 = piVar4;
        iVar1 = *0x1a848;
        if (piVar4 < piVar5) {
            do {
                if (((piVar3[8] >> 0x11 & 1) != 0) && (*piVar3 - 5U < 2)) {
                    iVar1 = iVar1 + 1;
                    *0x1a848 = iVar1;
                }
                piVar3 = piVar3 + *(iStackX_8 + 8);
            } while (piVar3 < piVar5);
        }
        puVar2 = fcn.00016e40(piVar3,iVar1 << 4);
        *0x1a830 = puVar2;
        if (puVar2 == NULL) {
            *0x1a848 = 0;
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            for (; piVar4 < piVar5; piVar4 = piVar4 + *(iStackX_8 + 8)) {
                if (((piVar4[8] >> 0x11 & 1) != 0) && (*piVar4 == 5)) {
                    *puVar2 = *(piVar4 + 2);
                    puVar2[1] = *(piVar4 + 6) << 0xc;
                    puVar2 = puVar2 + 2;
                }
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.000179f0 @ 0x179f0 */

uint64_t fcn.000179f0(void)

{
    if (*0x1a880 == '\0') {
        *(*0x1a868 + 2) = 0x8000000f;
    }
    else {
        if (((**0x1a868 == 2) && ((*0x1a868)[1] == *0x1a858)) && (*(*0x1a868 + 0x14) == *0x1a874)) {
            return -((*0x1a868)[2] != -0x3ffffffc) & 0x800000000000000e;
        }
        *(*0x1a868 + 2) = 0x80000002;
    }
    return 0x800000000000000e;
}


/* fcn.00017b48 @ 0x17b48 */

int64_t fcn.00017b48(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t iVar2;
    int iVar3;
    
    iVar3 = arg1;
    iVar2 = fcn.000179f0();
    if (-1 < iVar2) {
        if (*(*0x1a868 + 2) == -0x3ffffffc) {
            piVar1 = *0x1a868 + 3;
            if (*piVar1 != iVar3) {
                iVar2 = -0x7ffffffffffffffe;
            }
            if (-1 < iVar2) {
                if ((arg2 != NULL) && (arg2 != piVar1)) {
                    section..text(arg2,piVar1,0x38);
                }
                return 0;
            }
        }
        else {
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    *(*0x1a868 + 0x14) = 0;
    *(*0x1a868 + 2) = 0;
    **0x1a868 = 0;
    (*0x1a868)[1] = 0;
    return iVar2;
}


/* fcn.00016b9c @ 0x16b9c */

int64_t fcn.00016b9c(void)

{
    if (*0x1a7b8 == 0) {
        (**(*0x1a798 + 0x140))(0x1a0b0,0,0x1a7b8);
    }
    return *0x1a7b8;
}


/* fcn.00018048 @ 0x18048 */

ulong fcn.00018048(void)

{
    ulong uVar1;
    
    uVar1 = (**(*0x1a7a8 + 0xc0))(0x1a2a0,0,0x1a860);
    if (*0x1a858 != 0) {
        (**(*0x1a798 + 0x30))(*0x1a858,((*0x1a870 & 0xfff) != 0) + (*0x1a870 >> 0xc));
        *0x1a858 = 0;
    }
    if (*0x1a868 != 0) {
        (**(*0x1a798 + 0x48))();
        *0x1a868 = 0;
    }
    if (*0x1a878 != 0) {
        (**(*0x1a7a8 + 0xb0))(*0x1a878,0x1a1f0,0x1a690);
    }
    return uVar1;
}


/* fcn.000180f8 @ 0x180f8 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.000180f8(int64_t arg1,int64_t arg2)

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
        goto code_r0x000185fe;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x000185fe;
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
        goto code_r0x000185fe;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x000185fe;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x000181de;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x000185fe;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x000181de;
            goto code_r0x000184c5;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x000185e2:
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
code_r0x000181de:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x000185fe;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x000181de;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x0001847c:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x0001824b;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x000185fe;
                }
code_r0x000184a9:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x000184c5:
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
                            goto code_r0x000185fe;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x000185fe;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x000181de;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x0001824b;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x000185fe;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x000185e2;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x000181de;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x000185fe;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x000181de;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x0001847c;
                }
                goto code_r0x000184a9;
            }
        }
    }
code_r0x0001824b:
    bVar9 = iStackX_18 == 1;
code_r0x000185fe:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.0001946c @ 0x1946c */

ulong fcn.0001946c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    char *pcVar3;
    uint64_t uVar4;
    char *pcVar5;
    char *pcVar6;
    ulong uVar7;
    
    uVar7 = 0x8000000000000002;
    if ((arg3 != 0) && ((arg1 != 0 || (arg2 != 0)))) {
        uVar4 = 0;
        uVar7 = 0x800000000000000e;
        if (*0x1a888 != 0) {
            pcVar3 = *0x1a890 + 0xc;
            do {
                if (arg1 == 0) {
                    cVar1 = *pcVar3;
                    pcVar5 = arg2;
                    pcVar6 = pcVar3;
                    for (uVar2 = 0x20; (((cVar1 != '\0' && (*pcVar5 != '\0')) && (cVar1 == *pcVar5)) && (1 < uVar2));
                        uVar2 = uVar2 - 1) {
                        pcVar6 = pcVar6 + 1;
                        pcVar5 = pcVar5 + 1;
                        cVar1 = *pcVar6;
                    }
                    if (*pcVar6 == *pcVar5) goto code_r0x00019572;
                }
                if ((arg2 == 0) && (*(pcVar3 + -8) == arg1)) {
code_r0x00019572:
                    *arg3 = uVar4 * 0x44 + *0x1a890;
                    return 0;
                }
                if (*(pcVar3 + -8) == arg1) {
                    cVar1 = *pcVar3;
                    pcVar5 = arg2;
                    pcVar6 = pcVar3;
                    for (uVar2 = 0x20; ((cVar1 != '\0' && (*pcVar5 != '\0')) && ((cVar1 == *pcVar5 && (1 < uVar2))));
                        uVar2 = uVar2 - 1) {
                        pcVar6 = pcVar6 + 1;
                        pcVar5 = pcVar5 + 1;
                        cVar1 = *pcVar6;
                    }
                    if (*pcVar6 == *pcVar5) goto code_r0x00019572;
                }
                uVar4 = uVar4 + 1;
                pcVar3 = pcVar3 + 0x44;
            } while (uVar4 < *0x1a888);
        }
    }
    return uVar7;
}


/* fcn.00016d38 @ 0x16d38 */

ulong fcn.00016d38(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    int64_t arg2_00;
    uint in_R9;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < CONCAT44(in_R9,arg4) || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = CONCAT44(in_R9,arg4);
    if (arg2 < CONCAT44(in_R9,arg4)) {
        arg2_00 = arg2;
    }
    uVar1 = fcn.00016d0c(arg3,arg2_00);
    if ((arg2 <= CONCAT44(in_R9,arg4)) && (arg2 <= uVar1)) {
        return 0x8000000000000005;
    }
    if (CONCAT44(in_R9,arg4) < uVar1) {
        uVar1 = CONCAT44(in_R9,arg4);
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + uVar1 + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00016dd1;
    }
    if (arg3 < arg1 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00016dd1:
    if (uVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            if (*(arg1 + arg3) == '\0') break;
            *arg1 = *(arg1 + arg3);
            arg1 = arg1 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.000199c4 @ 0x199c4 */

uint32_t fcn.000199c4(void)

{
    ulong uVar1;
    ulong *puVar2;
    uint32_t uStackX_8;
    int iStackX_c;
    
    puVar2 = 0xfed00100;
    do {
        uVar1 = *puVar2;
        iStackX_c = uVar1 >> 0x20;
        if (iStackX_c != 0) break;
        puVar2 = puVar2 + 4;
    } while (puVar2 < 0xfed001e1);
    uStackX_8 = uVar1;
    return uStackX_8 >> 9 & 0xffffff1f;
}


/* fcn.00019938 @ 0x19938 */

ulong fcn.00019938(int64_t arg1)

{
    uint32_t *puVar1;
    char *pcVar2;
    
    *0xfee000b0 = (arg1 & 0xff) + 0x58;
    if ((*0x1a8a8 + 1 & 0xfffffffffffffffe) == 0) {
        *0x1a8a8 = 0xfec00000;
    }
    puVar1 = *0x1a8a8 + 0x40;
    do {
        *puVar1 = *0xfee000b0;
        pcVar2 = *0x1a8a8;
        if ((*0x1a8a8 + 1 & 0xfffffffffffffffe) == 0) {
            pcVar2 = 0xfec00000;
        }
        *0x1a8a8 = pcVar2;
        *pcVar2 = arg1 * '\x02' + '\x10';
    } while ((*(pcVar2 + 0x10) >> 0xe & 1) != 0);
    do {
    } while ((*((*0xfee000b0 >> 5) * 0x10 + 0xfee00100) >> (*0xfee000b0 & 0x1f) & 1) != 0);
    return 0;
}


