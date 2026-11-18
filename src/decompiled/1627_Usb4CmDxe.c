// decompiled by r2ghidra: 1627_Usb4CmDxe.pe32
// functions: 136

/* entry0 @ 0x10304 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    
    *0x193b0 = *(arg2 + 0x60);
    *0x193a8 = arg2;
    fcn.0001130c();
    noname_0 = 0x192a0;
    iVar3 = fcn.0001133c(0x192a0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    fcn.000112ac(0x19290,0x193c8);
    fcn.000103c0(arg1);
    return;
}


/* fcn.0001130c @ 0x1130c */

int64_t fcn.0001130c(void)

{
    if (*0x193c0 == 0) {
        fcn.000112ac(0x19260,0x193c0);
    }
    return *0x193c0;
}


/* fcn.000112ac @ 0x112ac */

ulong fcn.000112ac(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x193a8;
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


/* fcn.0001133c @ 0x1133c */

void fcn.0001133c(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001130c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001136a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001136a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.000103c0 @ 0x103c0 */

ulong fcn.000103c0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    
    iVar4 = fcn.00011270();
    cVar3 = (**(iVar4 + 0x30))(0x179);
    if (cVar3 == '\0') {
        iVar4 = fcn.0001133c(0x19220);
        if (((iVar4 != 0) && (*(iVar4 + 0x1a) == '\x01')) && (*(iVar4 + 0x1b) != '\x03')) {
            iVar4 = fcn.00010790(arg1,iVar4 + 0x18);
            if (-1 < iVar4) {
                uVar7 = 0;
                uVar5 = *0x193a0;
                if (*0x193a0 != 0) {
                    do {
                        iVar4 = *(uVar7 * 8 + 0x19380);
                        if (iVar4 != 0) {
                            if (*(iVar4 + 0xbe1) != '\0') {
                                fcn.00014c5c(iVar4);
                            }
                            iVar1 = *(iVar4 + 0xbd8);
                            if (iVar1 != 0) {
                                iVar2 = *(iVar1 + 0x79f20);
                                if (iVar2 != 0) {
                                    (**(iVar2 + 0x20))(iVar2);
                                    *(iVar1 + 0x79f20) = 0;
                                }
                                *(iVar1 + 0x79f28) = 0;
                            }
                            fcn.00010b58(iVar4);
                            uVar5 = *0x193a0;
                            *(iVar4 + 0xbe1) = 0;
                        }
                        uVar6 = uVar7 + 1;
                        uVar7 = uVar6;
                    } while (uVar6 < uVar5);
                }
                fcn.00010648();
            }
        }
    }
    return 0;
}


/* fcn.00011270 @ 0x11270 */

int64_t fcn.00011270(void)

{
    if (*0x193b8 == 0) {
        (**(*0x193b0 + 0x140))(0x19230,0,0x193b8);
    }
    return *0x193b8;
}


/* fcn.00010790 @ 0x10790 */

int64_t fcn.00010790(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    int64_t iStackX_8;
    
    piVar5 = 0x19380;
    iVar2 = -0x7ffffffffffffffd;
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar6 = *arg2;
        if (4 < *arg2) {
            uVar6 = 4;
        }
        uVar4 = 0;
        if (uVar6 == 0) goto code_r0x000108b5;
        do {
            arg2_00 = arg2 + 8 + uVar4 * 0x40;
            iVar2 = fcn.00010be4(arg1,arg2_00,&iStackX_8);
            iVar1 = iStackX_8;
            uVar3 = arg2_00;
            if (iVar2 < 0) goto code_r0x000108b5;
            *(*0x193a0 * 8 + 0x19380) = iStackX_8;
            *0x193a0 = *0x193a0 + 1;
            if (iStackX_8 == 0) {
                iVar2 = -0x7ffffffffffffffe;
                goto code_r0x000108b5;
            }
            iVar2 = fcn.00010a7c(iStackX_8);
            if (iVar2 < 0) {
                *(iVar1 + 0xbd8) = 0;
            }
            else {
                iVar2 = fcn.00012d0c(*(*(iVar1 + 0xbd8) + 0x79e10),uVar3);
                if (-1 < iVar2) {
                    fcn.00014c5c(iVar1);
                }
            }
            if (iVar2 < 0) goto code_r0x000108b5;
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
            *(iVar1 + 0xbe1) = 1;
        } while (uVar3 < uVar6);
    }
    if (-1 < iVar2) {
        return iVar2;
    }
code_r0x000108b5:
    if (*0x193a0 != 0) {
        uVar4 = *0x193a0;
        do {
            iVar1 = *piVar5;
            if (iVar1 != 0) {
                if (*(iVar1 + 0xbd8) != 0) {
                    fcn.00011820(*(iVar1 + 0xbd8));
                }
                fcn.00010b58(iVar1);
                (**(*0x193b0 + 0x48))(iVar1);
            }
            *piVar5 = 0;
            *0x193a0 = *0x193a0 - 1;
            piVar5 = piVar5 + 1;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return iVar2;
}


/* fcn.00014c5c @ 0x14c5c */

ulong fcn.00014c5c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uchar auStack_38 [25];
    char cStack_1f;
    
    if (arg1 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = 0;
        uVar3 = 0;
        do {
            if (arg1 + 0x68 == 0) {
                iVar1 = -0x7ffffffffffffffe;
            }
            else {
                iVar1 = fcn.00014188(arg1 + 0x68,auStack_38);
            }
            if (iVar1 != 0) {
                return uVar2;
            }
            if (cStack_1f == '\x05') {
                uVar2 = fcn.00014d04(arg1,auStack_38);
            }
            else {
                uVar2 = 0x8000000000000003;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x100);
    }
    return uVar2;
}


/* fcn.00010b58 @ 0x10b58 */

void fcn.00010b58(int64_t arg1)

{
    if (arg1 != 0) {
        fcn.00013b2c(arg1 + 0x68);
        if (*(arg1 + 0x10) == '\0') {
            fcn.000110e0(arg1);
        }
        else if (*(arg1 + 0xbe0) != '\0') {
            fcn.00011c48((CONCAT11(*(arg1 + 0x23),*(arg1 + 0x23)) & 0x1fe0 | *(arg1 + 0x22) << 0xd) << 7);
            *(arg1 + 0xbe0) = 0;
        }
        if (*(arg1 + 0x58) != 0) {
            (**(*0x193c8 + 0x28))(*(arg1 + 0x58),*(arg1 + 0x60));
            *(arg1 + 0x58) = 0;
            *(arg1 + 0x60) = 0;
        }
    }
    return;
}


/* fcn.00010648 @ 0x10648 */

//WARNING: Variable defined which should be unmapped: var_4h

void fcn.00010648(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    ulong uStackX_8;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int32_t var_4h;
    
    (**(*0x193b0 + 0x50))(0x200,8,0x105f8,0,&uStackX_8);
    (**(*0x193b0 + 0xa8))(0x19250,uStackX_8,auStackX_10);
    (**(*0x193b0 + 0x68))(uStackX_8);
    uVar2 = *0x193a0;
    if (3 < *0x193a0) {
        uVar2 = 4;
    }
    if (uVar2 != 0) {
        piVar5 = 0x19380;
        uVar4 = uVar2;
        do {
            iVar1 = *piVar5;
            if (iVar1 != 0) {
                iVar3 = (**(*0x193b0 + 0x50))(0x80000200,8,0x10920,iVar1,iVar1 + 0xbe8);
                if (iVar3 < 0) {
                    *(iVar1 + 0xbe8) = 0;
                }
                else {
                    iVar3 = (**(*0x193b0 + 0x170))(0x200,8,0x104b0,iVar1,0x19280,auStackX_18);
                    if (-1 < iVar3) {
                        (**(*0x193b0 + 0x170))(0x200,0x10,0x10544,iVar1,0x19270,auStackX_20);
                    }
                }
            }
            piVar5 = piVar5 + 1;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return;
}


/* fcn.00010da8 @ 0x10da8 */

int64_t fcn.00010da8(uint32_t arg1)

{
    int64_t extraout_RAX;
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar2;
    ulong in_RDX;
    unkbyte7 in_R8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*(arg1_00 + 0x10) == '\0') {
        iVar2 = fcn.00011194(arg1_00);
    }
    else {
        fcn.00011e0c(CONCAT71(arg1_00 >> 8,*(arg1_00 + 0x22)),
                     CONCAT71(in_RDX >> 8,*(arg1_00 + 0x23)) & 0xffffffffffffff1f,
                     CONCAT71(in_R8,*(arg1_00 + 0x23) >> 5),arg1 + 0x50);
        if (extraout_RAX < 0) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            iVar2 = fcn.00011d24((CONCAT11(*(arg1_00 + 0x23),*(arg1_00 + 0x23)) & 0x1fff & 0xffffffe0 |
                                 *(arg1_00 + 0x22) << 0xd) << 7,arg1_00 + 0x58);
            if (iVar2 < 0) {
                iVar2 = -0x7ffffffffffffffd;
            }
        }
    }
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = arg1_00 + 0x68;
    if (iVar2 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = fcn.00014388(iVar2);
    if (-1 < iVar1) {
        iVar2 = fcn.00013aa0(iVar2);
        if (iVar2 < 0) {
            return iVar2;
        }
        *(arg1_00 + 0xbd0) = *(arg1_00 + 0xbd0) | 2;
        return iVar2;
    }
    return iVar1;
}


/* fcn.0001177c @ 0x1177c */

int64_t fcn.0001177c(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t iStackX_8;
    
    if ((arg1 == 0) || (CONCAT44(in_register_00000014,arg2) == 0)) {
        return -0x7ffffffffffffffe;
    }
    if ((*(CONCAT44(in_register_00000014,arg2) + 0x79f28) == 0) &&
       (*(CONCAT44(in_register_00000014,arg2) + 0x79f28) = arg1,
       *(CONCAT44(in_register_00000014,arg2) + 0x79f20) == 0)) {
        if (arg1 == -0x68) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            if ((*(arg1 + 0xbd0) & 2) == 0) goto code_r0x0001179d;
            iStackX_8 = arg1 + 0x70;
            if (*(arg1 + 0x88) == NULL) {
                return -0x7ffffffffffffff2;
            }
            (**(arg1 + 0x88))(iStackX_8);
            iVar1 = 0;
        }
        if (-1 < iVar1) {
            *(CONCAT44(in_register_00000014,arg2) + 0x79f20) = iStackX_8;
        }
    }
    else {
code_r0x0001179d:
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00011820 @ 0x11820 */

void fcn.00011820(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 != 0) {
        iVar1 = *(iVar2 + 0x79e10);
        if (iVar1 != 0) {
            if (*(iVar1 + 0x18) != iVar2) {
                return;
            }
            fcn.000116a8(iVar1);
        }
        iVar1 = *(iVar2 + 0x79f20);
        if (iVar1 != 0) {
            (**(iVar1 + 0x20))(iVar1);
            *(iVar2 + 0x79f20) = 0;
        }
        *(iVar2 + 0x79f28) = 0;
        (**(*0x193b0 + 0x48))(iVar2);
    }
    return;
}


/* fcn.00013b2c @ 0x13b2c */

void fcn.00013b2c(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    if ((CONCAT44(in_register_0000000c,arg1) != 0) &&
       (iVar2 = CONCAT44(in_register_0000000c,arg1), *(CONCAT44(in_register_0000000c,arg1) + 0x30) == 0)) {
        fcn.000139f0(CONCAT44(in_register_0000000c,arg1));
        iVar1 = iVar2 + 0x860;
        *iVar1 = iVar1;
        *(iVar2 + 0x868) = iVar1;
        iVar1 = iVar2 + 0x870;
        *iVar1 = iVar1;
        *(iVar2 + 0x878) = iVar1;
        *(iVar2 + 0xb68) = *(iVar2 + 0xb68) & 0xfffffffd;
    }
    return;
}


/* fcn.000139f0 @ 0x139f0 */

void fcn.000139f0(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int *piVar3;
    int64_t iVar4;
    
    if (arg1 != 0) {
        fcn.00013920(arg1);
        iVar2 = *(arg1 + 0x40);
        if (iVar2 != 0) {
            piVar3 = *(arg1 + 0x38);
            if ((piVar3 != NULL) && (*piVar3 == 0x72683475)) {
                iVar4 = *(piVar3 + 0x14);
                if (iVar4 == 0) {
                    if (*(piVar3 + 0x10) == 0) {
                        (**(*0x193b0 + 0x30))(iVar2,*(arg1 + 0x48));
                    }
                    else {
                        *(piVar3 + 0x19) = 0;
                    }
                }
                else {
                    iVar1 = *(arg1 + 0x48);
                    if ((iVar1 != 0) && (*(arg1 + 0x58) != 0)) {
                        (**(iVar4 + 0x50))(iVar4);
                        (**(iVar4 + 0x60))(iVar4,iVar1,iVar2);
                    }
                }
            }
            *(arg1 + 0x40) = 0;
            *(arg1 + 0x48) = 0;
            *(arg1 + 0x50) = 0;
            *(arg1 + 0x58) = 0;
        }
    }
    return;
}


/* fcn.00010e7c @ 0x10e7c */

uint64_t fcn.00010e7c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar1 = (CONCAT11(*(arg1 + 0x23),*(arg1 + 0x23)) & 0x1fff & 0xffffffe0 | *(arg1 + 0x22) << 0xd) * 0x80;
        if (arg2 == '\0') {
            *(iVar1 + 0xc00000fc) = *(iVar1 + 0xc00000fc) & 0xfd;
        }
        else {
            *(iVar1 + 0xc00000fc) = *(iVar1 + 0xc00000fc) & 0xfffffd | 0x22000002;
            uVar4 = uVar2;
            do {
                uVar3 = uVar4;
                if (*(iVar1 + 0xc00000c8) == -1) {
                    return 0x8000000000000003;
                }
                if (*(iVar1 + 0xc00000c8) < 0) break;
                fcn.00011388(0xdfb);
                uVar3 = uVar3 + 1;
                uVar4 = uVar3;
            } while (uVar3 < 500);
            if (499 < uVar3) {
                uVar2 = 0x8000000000000012;
            }
        }
    }
    return uVar2;
}


/* fcn.00010be4 @ 0x10be4 */

int64_t fcn.00010be4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint *arg1_00;
    ulong uVar2;
    int64_t arg1_01;
    int64_t iStackX_8;
    
    arg1_00 = NULL;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
code_r0x00010d6d:
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    else {
        iVar1 = fcn.00014ea0(arg1,0xbf0);
        arg1_00 = NULL;
        if (iVar1 != 0) {
            arg1_00 = fcn.000102a0(iVar1,0xbf0);
        }
        if (arg1_00 != NULL) {
            *arg1_00 = 0x72683475;
            if (arg1_00 + 4 != arg2) {
                section..text(arg1_00 + 4,arg2,0x40);
            }
            uVar2 = 0;
            iStackX_8 = 0xffffffff;
            iVar1 = (**(*0x193c8 + 0x20))(1,3,0x14,0x100000,&iStackX_8,arg1,0);
            if (-1 < iVar1) {
                *(arg1_00 + 0x14) = 0;
                *(arg1_00 + 0x16) = iStackX_8;
                arg1_00[0x18] = 0x100000;
                if (*arg2 == '\0') {
                    iVar1 = fcn.00010fa4(arg1_00);
                }
                else {
                    if (iStackX_8 != 0) {
                        arg1_01 = (CONCAT11(*(arg1_00 + 0x23),*(arg1_00 + 0x23)) & 0x1fff & 0xffffffe0 |
                                  *(arg1_00 + 0x22) << 0xd) << 7;
                        iVar1 = fcn.00011f50(arg1_01);
                        if (-1 < iVar1) {
                            iVar1 = fcn.00010e7c(arg1_00,CONCAT71(uVar2 >> 8,1));
                            if ((-1 < iVar1) && (iVar1 = fcn.00011b38(arg1_01,*(arg1_00 + 0x16)), -1 < iVar1)) {
                                *(arg1_00 + 0x2f8) = 1;
                            }
                            goto code_r0x00010d49;
                        }
                    }
                    iVar1 = -0x7ffffffffffffffd;
                }
code_r0x00010d49:
                if ((iVar1 < 0) || (iVar1 = fcn.00013b70(arg1_00), iVar1 < 0)) goto code_r0x00010d72;
                *arg3 = arg1_00;
                goto code_r0x00010d6d;
            }
        }
        iVar1 = -0x7ffffffffffffff7;
    }
code_r0x00010d72:
    if (arg1_00 != NULL) {
        fcn.00010b58(arg1_00);
        (**(*0x193b0 + 0x48))(arg1_00);
    }
    return iVar1;
}


/* fcn.00010a7c @ 0x10a7c */

int64_t fcn.00010a7c(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint *puVar3;
    
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    puVar1 = arg1 + 0xbd8;
    puVar3 = NULL;
    if (puVar1 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.00014ea0(arg1,0x79f30);
        puVar3 = NULL;
        if (iVar2 != 0) {
            puVar3 = fcn.000102a0(iVar2,0x79f30);
        }
        if (puVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            puVar3[0x1e786] = 0;
            *puVar3 = 0x6d643475;
            iVar2 = fcn.0001177c(arg1,puVar3);
            if (-1 < iVar2) {
                *puVar1 = puVar3;
                iVar2 = 0;
                goto code_r0x00010b26;
            }
        }
    }
    if (puVar3 != NULL) {
        fcn.00011820(puVar3);
    }
code_r0x00010b26:
    if (iVar2 < 0) {
        *puVar1 = 0;
    }
    else {
        iVar2 = fcn.0001096c(arg1);
    }
    return iVar2;
}


/* fcn.00012d0c @ 0x12d0c */

int64_t fcn.00012d0c(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (*(arg1 + 8) < 5) {
        uVar4 = 1;
        iVar1 = iVar3;
        if (*(arg1 + 0x30) != '\0') {
            do {
                if (0x3f < uVar4) {
                    return iVar1;
                }
                iVar2 = uVar4 * 0x78;
                if ((((*(iVar2 + 0x38 + arg1) == 1) && ((*(iVar2 + 0x58 + arg1) & 1) != 0)) &&
                    (uVar4 != *(arg1 + 0x1e38))) &&
                   (iVar1 = fcn.00012c1c(arg1,CONCAT71(iVar2 >> 8,uVar4)), iVar1 < 0)) {
                    iVar1 = iVar3;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(arg1 + 0x30));
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00012994 @ 0x12994 */

int64_t fcn.00012994(uint32_t *arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puStackX_8;
    
    puStackX_8 = NULL;
    if ((arg1 == NULL) || (arg4 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        if (5 < arg2) {
            return -0x7ffffffffffffffe;
        }
        if (arg3 == 0) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            iVar1 = fcn.00011420(&puStackX_8,arg3);
        }
        if (-1 < iVar1) {
            *puStackX_8 = *arg1;
            *(puStackX_8 + 1) = arg2;
            *arg4 = puStackX_8;
            return 0;
        }
    }
    if (puStackX_8 != NULL) {
        fcn.00012910(puStackX_8);
    }
    return iVar1;
}


/* fcn.00012584 @ 0x12584 */

int64_t fcn.00012584(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong in_R8;
    int8_t *piVar3;
    int64_t iVar4;
    int8_t var_10h;
    uint32_t auStackX_10 [2];
    int64_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_bp_20h;
    int32_t var_bp_18h;
    
    if (arg1 == 0) {
code_r0x000125a0:
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        var_10h = 0;
        iVar1 = fcn.00014ed0(arg1,0,CONCAT71(in_R8 >> 8,9),&var_30h);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(arg1 + 0x20) = *(arg1 + 0x20) & 0xfffffffb;
        *(arg1 + 10) = var_30h;
        *(arg1 + 0xc) = var_30h >> 0x10;
        *(arg1 + 0x30) = var_30h._4_4_ >> 0xe & 0x3f;
        *(arg1 + 0x24) = var_30h._4_4_ >> 0x18;
        *(arg1 + 0x28) = var_bp_20h & 0xff;
        *(arg1 + 0x20) = *(arg1 + 0x20) | var_bp_18h >> 0x10 & 4;
        *(arg1 + 0x2c) = var_bp_20h >> 0x18;
        fcn.000124a0(arg1,var_30h._4_2_ & 0xff);
        if ((*(arg1 + 0x20) & 2) == 0) {
            *(arg1 + 0x28) = 0xfe;
            *(arg1 + 0x1e38) = var_30h._4_4_ >> 8 & 0x3f;
            var_bp_20h = var_bp_20h & 0xffff10ffU | 0x1000;
        }
        else {
            if ((*(arg1 + 0x18) == 0) || (iVar1 = *(*(arg1 + 0x18) + 0x79f20), iVar1 == 0)) {
                return -0x7ffffffffffffffd;
            }
            piVar3 = &var_10h;
            iVar1 = (**(iVar1 + 0x10))(iVar1,arg1,piVar3);
            if (iVar1 < 0) {
                return iVar1;
            }
            *(arg1 + 0x1e38) = var_10h;
            *(arg1 + 0x28) = 0xfe;
            if (*(arg1 + 0x1e3c) == 0) goto code_r0x000125a0;
            iVar4 = CONCAT71(piVar3 >> 8,1);
            iVar1 = fcn.00014ed0(arg1,*(arg1 + 0x1e3c),iVar4,auStackX_10);
            if (iVar1 < 0) {
                return iVar1;
            }
            auStackX_10[0] = auStackX_10[0];
            iVar1 = fcn.00014f30(arg1,*(arg1 + 0x1e3c),CONCAT71(iVar4 >> 8,1),auStackX_10);
            if (iVar1 < 0) {
                return iVar1;
            }
        }
        uVar2 = var_30h._4_4_ & 0xff8fc0ff;
        var_28h = *arg1;
        var_30h._4_4_ = ((*(arg1 + 8) & 7) << 0xc | *(arg1 + 0x1e38) & 0x3f) << 8 | uVar2;
        iVar4 = CONCAT71(uVar2 >> 8,4);
        var_24h = *(arg1 + 4) & 0xffffff | var_24h & 0xff000000U | 0x80000000;
        var_bp_20h = var_bp_20h ^ (var_bp_20h ^ *(arg1 + 0x28)) & 0xff;
        iVar1 = fcn.00014f30(arg1,1,iVar4,&var_30h + 4);
        if (-1 < iVar1) {
            iVar1 = fcn.00014ed0(arg1,1,CONCAT71(iVar4 >> 8,4),&var_30h + 4);
        }
    }
    return iVar1;
}


/* fcn.000120fc @ 0x120fc */

int64_t fcn.000120fc(uint32_t arg1,int64_t noname_1,uint64_t noname_2,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    bool bVar7;
    uint8_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar6 = 0;
    if (iVar3 == 0) {
        iVar6 = -0x7ffffffffffffffe;
    }
    else {
        uVar8 = 1;
        bVar7 = true;
        if (*(iVar3 + 0x30) != '\0') {
            do {
                if (0x3f < uVar8) break;
                iVar6 = fcn.00013100(arg1,CONCAT71(noname_1 >> 8,uVar8),CONCAT71(noname_2 >> 8,bVar7));
                if (iVar6 < 0) {
                    return iVar6;
                }
                noname_1 = uVar8 * 0x78;
                uVar1 = *(noname_1 + 0x38 + iVar3);
                noname_2 = uVar1;
                if (uVar1 != 0) {
                    noname_1 = 0;
                    bVar7 = uVar1 != 1 || bVar7 == false;
                    if (uVar1 == 0x100102) {
                        *(iVar3 + 0x1e39) = uVar8;
                    }
                    else if (uVar1 == 0x200102) {
                        *(iVar3 + 0x1e3a) = uVar8;
                    }
                    if (uVar1 == 2) {
                        *(iVar3 + 0x1e3b) = uVar8;
                        noname_2 = 0;
                    }
                    else if (uVar1 == 0xe0101) {
                        *(iVar3 + 0x20) = *(iVar3 + 0x20) | 0x100;
                        noname_2 = 0;
                    }
                    else {
                        noname_2 = uVar1 - 0xe0102;
                        if (uVar1 - 0xe0102 == 0) {
                            *(iVar3 + 0x20) = *(iVar3 + 0x20) | 0x200;
                            if (*(iVar3 + 0x10) == 3) {
                                noname_1 = 0;
                                iVar6 = fcn.000151f8(arg1,uVar8);
                                if (iVar6 < 0) {
                                    return iVar6;
                                }
                            }
                        }
                        else {
                            if (uVar1 != 0x100101) {
                                if (uVar1 != 0x100102) {
                                    noname_2 = uVar1 - 0x200101;
                                    if (uVar1 - 0x200101 != 0) {
                                        noname_2 = uVar1 - 0x200102;
                                        if (uVar1 - 0x200102 != 0) goto code_r0x0001222f;
                                        *(iVar3 + 0x1e3a) = uVar8;
                                    }
                                    *(iVar3 + 0x20) = *(iVar3 + 0x20) | 0x40;
                                    goto code_r0x0001222f;
                                }
                                *(iVar3 + 0x1e39) = uVar8;
                            }
                            noname_2 = 0;
                            *(iVar3 + 0x20) = *(iVar3 + 0x20) | 0x80;
                        }
                    }
                }
code_r0x0001222f:
                uVar8 = uVar8 + 1;
            } while (uVar8 <= *(iVar3 + 0x30));
        }
        if ((*(iVar3 + 0x20) & 2) == 0) {
            uVar10 = 1;
            uVar11 = 1;
            uVar5 = 1;
            if (*(iVar3 + 0x30) != '\0') {
                do {
                    uVar8 = uVar5;
                    if (0x3f < uVar8) {
                        return iVar6;
                    }
                    iVar9 = uVar5 * 0x78;
                    if ((*(iVar9 + 0x38 + iVar3) == 1) && ((*(iVar9 + 0x58 + iVar3) & 1) != 0)) {
                        if (((*(iVar3 + 0x20) & 0x80) != 0) && (uVar5 = uVar10 & 0xff, uVar10 <= *(iVar3 + 0x30))) {
                            do {
                                uVar4 = uVar5;
                                if (0x3f < uVar4) break;
                                iVar2 = *(uVar5 * 0x78 + 0x38 + iVar3);
                                if (iVar2 == 0x100101 || iVar2 == 0x100102) {
                                    uVar10 = uVar5 + 1;
                                    *(iVar9 + 0x6a + iVar3) = uVar4;
                                    *(uVar5 * 0x78 + 0x5c + iVar3) = uVar8;
                                    break;
                                }
                                uVar5 = uVar4 + 1;
                            } while (uVar4 + 1 <= *(iVar3 + 0x30));
                        }
                        if (((*(iVar3 + 0x20) & 0x40) != 0) && (uVar5 = uVar11 & 0xff, uVar11 <= *(iVar3 + 0x30))) {
                            do {
                                uVar4 = uVar5;
                                if (0x3f < uVar4) break;
                                iVar2 = *(uVar5 * 0x78 + 0x38 + iVar3);
                                if (iVar2 == 0x200101 || iVar2 == 0x200102) {
                                    uVar11 = uVar5 + 1;
                                    *(iVar9 + 0x69 + iVar3) = uVar4;
                                    *(uVar5 * 0x78 + 0x5c + iVar3) = uVar8;
                                    break;
                                }
                                uVar5 = uVar4 + 1;
                            } while (uVar4 + 1 <= *(iVar3 + 0x30));
                        }
                    }
                    uVar5 = uVar8 + 1;
                } while (uVar8 + 1 <= *(iVar3 + 0x30));
            }
        }
        else {
            uVar8 = *(iVar3 + 0x1e38);
            if (((uVar8 != 0) && (uVar8 <= *(iVar3 + 0x30))) && (uVar8 < 0x40)) {
                uVar4 = *(iVar3 + 0x1e39);
                if (((uVar4 != 0) && (uVar4 <= *(iVar3 + 0x30))) && (uVar4 < 0x40)) {
                    *(uVar8 * 0x78 + 0x6a + iVar3) = uVar4;
                    *(*(iVar3 + 0x1e39) * 0x78 + 0x5c + iVar3) = *(iVar3 + 0x1e38);
                }
                uVar8 = *(iVar3 + 0x1e3a);
                if (((uVar8 != 0) && (uVar8 <= *(iVar3 + 0x30))) && (uVar8 < 0x40)) {
                    *(*(iVar3 + 0x1e38) * 0x78 + 0x69 + iVar3) = uVar8;
                    *(*(iVar3 + 0x1e3a) * 0x78 + 0x5c + iVar3) = *(iVar3 + 0x1e38);
                }
            }
            uVar10 = 1;
            uVar11 = 1;
            uVar5 = 1;
            if (*(iVar3 + 0x30) != '\0') {
                do {
                    uVar8 = uVar5;
                    if (0x3f < uVar8) {
                        return iVar6;
                    }
                    iVar9 = uVar5 * 0x78;
                    if (((*(iVar9 + 0x38 + iVar3) == 1) && ((*(iVar9 + 0x58 + iVar3) & 1) != 0)) &&
                       (uVar8 != *(iVar3 + 0x1e38))) {
                        if (((*(iVar3 + 0x20) & 0x80) != 0) && (uVar5 = uVar10 & 0xff, uVar10 <= *(iVar3 + 0x30))) {
                            do {
                                uVar4 = uVar5;
                                if (0x3f < uVar4) break;
                                if (*(uVar5 * 0x78 + 0x38 + iVar3) == 0x100101) {
                                    uVar10 = uVar5 + 1;
                                    *(iVar9 + 0x6a + iVar3) = uVar4;
                                    *(uVar5 * 0x78 + 0x5c + iVar3) = uVar8;
                                    break;
                                }
                                uVar5 = uVar4 + 1;
                            } while (uVar4 + 1 <= *(iVar3 + 0x30));
                        }
                        if (((*(iVar3 + 0x20) & 0x40) != 0) && (uVar5 = uVar11 & 0xff, uVar11 <= *(iVar3 + 0x30))) {
                            do {
                                uVar4 = uVar5;
                                if (0x3f < uVar4) break;
                                if (*(uVar5 * 0x78 + 0x38 + iVar3) == 0x200101) {
                                    uVar11 = uVar5 + 1;
                                    *(iVar9 + 0x69 + iVar3) = uVar4;
                                    *(uVar5 * 0x78 + 0x5c + iVar3) = uVar8;
                                    break;
                                }
                                uVar5 = uVar4 + 1;
                            } while (uVar4 + 1 <= *(iVar3 + 0x30));
                        }
                    }
                    uVar5 = uVar8 + 1;
                } while (uVar8 + 1 <= *(iVar3 + 0x30));
            }
        }
    }
    return iVar6;
}


/* fcn.0001156c @ 0x1156c */

ulong fcn.0001156c(uint32_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    uint uStackX_8;
    uint uStackX_c;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    if (piVar4 == NULL) {
        return 0x8000000000000002;
    }
    piVar2 = piVar4[3];
    if ((*piVar2 == 0x6d643475) && (*(piVar4 + 1) < 6)) {
        iVar3 = *piVar4;
        if (iVar3 == 0) {
            if (*(piVar2 + 0x1e784) == 0) {
                *(piVar2 + 0x1e784) = piVar4;
code_r0x00011686:
                piVar2[0x1e786] = piVar2[0x1e786] + 1;
                return 0;
            }
        }
        else {
            iVar5 = *(piVar2 + 0x1e784);
            if (iVar5 != 0) {
                uStackX_8 = *(piVar4 + 4);
                uStackX_c = iVar3;
                fcn.000113e8(&uStackX_8,2,&uStackX_8);
                piVar1 = iVar5 + 0x1e60;
                piVar7 = *piVar1;
                if (piVar7 != piVar1) {
                    uVar6 = CONCAT44(uStackX_c,uStackX_8);
                    do {
                        if (iVar3 == piVar7[-0x3cc]) {
                            return 0x8000000000000003;
                        }
                        if (*(piVar4 + 1) < *(piVar7 + -0x3cb)) break;
                        if (*(piVar4 + 1) == *(piVar7 + -0x3cb)) {
                            uStackX_c = piVar7[-0x3cc];
                            uStackX_8 = *(piVar7 + -0x1e5c);
                            fcn.000113e8(&uStackX_8,2,&uStackX_8);
                            if (uVar6 < CONCAT44(uStackX_c,uStackX_8)) break;
                        }
                        piVar7 = *piVar7;
                    } while (piVar7 != piVar1);
                }
                piVar7 = piVar7[1];
                piVar1 = piVar4 + 0x3cc;
                iVar3 = *piVar7;
                *piVar1 = iVar3;
                piVar4[0x3cd] = piVar7;
                *(iVar3 + 8) = piVar1;
                *piVar7 = piVar1;
                goto code_r0x00011686;
            }
        }
    }
    return 0x8000000000000003;
}


/* fcn.00012910 @ 0x12910 */

ulong fcn.00012910(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    ulong uVar3;
    
    uVar3 = 0;
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x1e70) == 0) {
            iVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x1e48);
            if (iVar2 != 0) {
                *(iVar2 + 0x28) = 0;
                iVar2 = *(*(CONCAT44(in_register_0000000c,arg1) + 0x1e48) + 8);
                if ((iVar2 != 0) && (*(iVar2 + 0x1e70) != 0)) {
                    *(iVar2 + 0x1e70) = *(iVar2 + 0x1e70) + -1;
                }
                *(CONCAT44(in_register_0000000c,arg1) + 0x1e48) = 0;
            }
            iVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x18);
            if (((iVar2 != 0) && (uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x20), (uVar1 & 1) != 0)) &&
               (uVar3 = 0, *(iVar2 + 0x79e0c) != 0)) {
                *(CONCAT44(in_register_0000000c,arg1) + 0x20) = uVar1 & 0xfffffffe;
                *(iVar2 + 0x79e0c) = *(iVar2 + 0x79e0c) + -1;
            }
        }
        else {
            uVar3 = 0x8000000000000003;
        }
    }
    return uVar3;
}


/* fcn.00014ea0 @ 0x14ea0 */

ulong fcn.00014ea0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x193b0 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.0001096c @ 0x1096c */

int64_t fcn.0001096c(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    ulong noname_1;
    uint8_t *puVar4;
    int64_t arg3;
    int64_t iStackX_8;
    uint32_t auStackX_10 [2];
    
    iStackX_8 = 0;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    arg3 = *(arg1 + 0xbd8);
    auStackX_10[0] = 0;
    auStackX_10[1] = 0;
    noname_1 = 0;
    iVar3 = fcn.00012994(auStackX_10,0,arg3,&iStackX_8);
    iVar1 = iStackX_8;
    arg1_00 = iStackX_8;
    if (-1 < iVar3) {
        *(iStackX_8 + 0x10) = 1;
        iVar3 = fcn.00012584(iStackX_8);
        if ((-1 < iVar3) && (iVar3 = fcn.000120fc(arg1_00,noname_1,arg3,iVar3), -1 < iVar3)) {
            puVar4 = arg1 + 0x14;
            if (puVar4 == NULL) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                if (*(iVar1 + 8) != '\0') {
                    iVar3 = -0x7ffffffffffffffd;
                    goto code_r0x00010a61;
                }
                if ((*puVar4 & 4) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(iVar1 + 0x20) >> 7 & 1;
                }
                *(iVar1 + 0x20) = *(iVar1 + 0x20) & 0xffffffef;
                *(iVar1 + 0x20) = *(iVar1 + 0x20) | uVar2 << 4;
                if ((*puVar4 & 1) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(iVar1 + 0x20) >> 6 & 1;
                }
                *(iVar1 + 0x20) = *(iVar1 + 0x20) & 0xffffffdf;
                *(iVar1 + 0x20) = *(iVar1 + 0x20) | uVar2 << 5;
                iVar3 = 0;
            }
            if ((-1 < iVar3) && (iVar3 = fcn.0001156c(arg1_00), -1 < iVar3)) {
                return iVar3;
            }
        }
    }
code_r0x00010a61:
    if (iVar1 != 0) {
        fcn.00012910(arg1_00);
    }
    return iVar3;
}


/* fcn.00011c48 @ 0x11c48 */

ulong fcn.00011c48(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(((in_register_0000000c & 1) << 0x1c | arg1) + 0xc0000000) == -1) {
        uVar4 = 0x800000000000000e;
    }
    else {
        uVar3 = iVar2 + 4;
        *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) =
             *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) & 0xfff9;
        uVar3 = iVar2 + 0x10;
        uVar1 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) & 7;
        if (uVar1 == 0) {
            uVar3 = uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff;
        }
        else {
            if (uVar1 != 4) {
                return 0x8000000000000003;
            }
            *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = 0;
            uVar3 = iVar2 + 0x14U >> 4 & 0x10000000 | iVar2 + 0x14U & 0xffffffff;
        }
        uVar4 = 0;
        *(uVar3 + 0xc0000000) = 0;
    }
    return uVar4;
}


/* fcn.000110e0 @ 0x110e0 */

void fcn.000110e0(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar1 != 0) && (*(iVar1 + 0xbe0) != '\0')) {
        fcn.00011c48(((*(iVar1 + 0x22) << 5 | *(iVar1 + 0x23) & 0x1f) << 3 | *(iVar1 + 0x23) >> 5) << 0xc);
        fcn.00011a50((*(iVar1 + 0x35) >> 5 | (*(iVar1 + 0x34) << 5 | *(iVar1 + 0x35) & 0x1f) << 3) << 0xc);
        fcn.00011a50((*(iVar1 + 0x2d) >> 5 | (*(iVar1 + 0x2c) << 5 | *(iVar1 + 0x2d) & 0x1f) << 3) << 0xc);
        fcn.00011a50((*(iVar1 + 0x25) >> 5 | (*(iVar1 + 0x24) << 5 | *(iVar1 + 0x25) & 0x1f) << 3) << 0xc);
        *(iVar1 + 0xbe0) = 0;
    }
    return;
}


/* fcn.00011a50 @ 0x11a50 */

ulong fcn.00011a50(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    
    if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar1 = arg1 + 4;
        uVar2 = 0;
        *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) =
             *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 0xfff9;
        *((arg1 + 0x18U >> 4 & 0x10000000 | arg1 + 0x18U & 0xffffffff) + 0xc0000000) = 0;
        *((arg1 + 0x19U >> 4 & 0x10000000 | arg1 + 0x19U & 0xffffffff) + 0xc0000000) = 0;
        *((arg1 + 0x1aU >> 4 & 0x10000000 | arg1 + 0x1aU & 0xffffffff) + 0xc0000000) = 0;
        *((arg1 + 0x20U >> 4 & 0x10000000 | arg1 + 0x20U & 0xffffffff) + 0xc0000000) = 0;
        *((arg1 + 0x22U >> 4 & 0x10000000 | arg1 + 0x22U & 0xffffffff) + 0xc0000000) = 0;
    }
    return uVar2;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 36800 named .text
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


/* fcn.00011f50 @ 0x11f50 */

ulong fcn.00011f50(int64_t arg1)

{
    if (((*((arg1 + 9U >> 4 & 0x10000000 | arg1 + 9U & 0xffffffff) + 0xc0000000) == '@') &&
        (*((arg1 + 10U >> 4 & 0x10000000 | arg1 + 10U & 0xffffffff) + 0xc0000000) == '\x03')) &&
       (*((arg1 + 0xbU >> 4 & 0x10000000 | arg1 + 0xbU & 0xffffffff) + 0xc0000000) == '\f')) {
        return 0;
    }
    return 0x800000000000000e;
}


/* fcn.00011b38 @ 0x11b38 */

ulong fcn.00011b38(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    
    if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
        uVar3 = 0x800000000000000e;
    }
    else {
        uVar1 = arg1 + 0x10;
        uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 7;
        if (uVar2 == 0) {
            *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) = arg2;
        }
        else {
            if (uVar2 != 4) {
                return 0x8000000000000003;
            }
            *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) = arg2;
            *((arg1 + 0x14U >> 4 & 0x10000000 | arg1 + 0x14U & 0xffffffff) + 0xc0000000) = arg2 >> 0x20;
        }
        uVar1 = arg1 + 4;
        uVar3 = 0;
        *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) =
             *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) | 6;
    }
    return uVar3;
}


/* fcn.00010fa4 @ 0x10fa4 */

int64_t fcn.00010fa4(int64_t arg1)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint64_t arg2;
    uint32_t uVar2;
    ulong in_R8;
    int64_t arg3;
    unkbyte7 in_R9;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        uVar2 = *(arg1 + 0x58);
        arg3 = CONCAT71(in_R8 >> 8,*(arg1 + 0x26));
        arg2 = uVar2 >> 0x10;
        fcn.0001195c((*(arg1 + 0x25) >> 5 | (*(arg1 + 0x24) << 5 | *(arg1 + 0x25) & 0x1f) << 3) << 0xc,arg2,arg3,
                     CONCAT71(in_R9,*(arg1 + 0x27)));
        iVar1 = extraout_RAX;
        if (-1 < extraout_RAX) {
            fcn.0001195c((*(arg1 + 0x2d) >> 5 | (*(arg1 + 0x2c) << 5 | *(arg1 + 0x2d) & 0x1f) << 3) << 0xc,
                         uVar2 >> 0x10,CONCAT71(arg3 >> 8,*(arg1 + 0x2e)),CONCAT71(in_R9,*(arg1 + 0x2f)));
            iVar1 = extraout_RAX_00;
            if (-1 < extraout_RAX_00) {
                uVar2 = (*(arg1 + 0x34) << 5 | *(arg1 + 0x35) & 0x1f) << 3;
                fcn.0001195c((*(arg1 + 0x35) >> 5 | uVar2) << 0xc,arg2,CONCAT31(uVar2 >> 8,*(arg1 + 0x36)),
                             CONCAT71(in_R9,*(arg1 + 0x37)));
                iVar1 = extraout_RAX_01;
                if (-1 < extraout_RAX_01) {
                    uVar2 = ((*(arg1 + 0x22) << 5 | *(arg1 + 0x23) & 0x1f) << 3 | *(arg1 + 0x23) >> 5) << 0xc;
                    iVar1 = fcn.00011f50(uVar2);
                    if (iVar1 < 0) {
                        iVar1 = -0x7ffffffffffffffd;
                    }
                    else {
                        iVar1 = fcn.00011b38(uVar2,*(arg1 + 0x58));
                        if (-1 < iVar1) {
                            *(arg1 + 0xbe0) = 1;
                        }
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00013b70 @ 0x13b70 */

int64_t fcn.00013b70(int64_t arg1)

{
    uint *arg1_00;
    ulong *puVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uchar auStackX_8 [8];
    ulong uStackX_10;
    
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        arg1_00 = arg1 + 0x68;
        *(arg1 + 0xa0) = arg1;
        *arg1_00 = 0x69683475;
        iVar2 = fcn.00014388(arg1_00);
        if ((-1 < iVar2) && (iVar2 = fcn.00013aa0(arg1_00), -1 < iVar2)) {
            fcn.000143e0();
            puVar1 = arg1 + 0x70;
            if (puVar1 == NULL) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                uStackX_10 = 0;
                *puVar1 = fcn.00013c94;
                uVar3 = 0;
                *(arg1 + 0x78) = 0x13e38;
                *(arg1 + 0x88) = 0x1402c;
                *(arg1 + 0x90) = 0x14038;
                *(arg1 + 0x80) = 0x13fd4;
                do {
                    iVar2 = (**puVar1)(puVar1,&uStackX_10,2,0,uVar3,1,auStackX_8,0);
                    if (iVar2 < 0) goto code_r0x00013c73;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < 10);
                if (-1 < iVar2) {
                    *(arg1 + 0xbd0) = *(arg1 + 0xbd0) | 2;
                    return iVar2;
                }
            }
        }
code_r0x00013c73:
        fcn.00013b2c(arg1_00);
    }
    return iVar2;
}


/* fcn.00011e0c @ 0x11e0c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00011e0c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint in_R9;
    uint64_t uStackX_20;
    int64_t var_38h;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h;
    uint32_t var_bp_20h;
    uint32_t var_bp_18h;
    uint32_t var_bp_10h;
    uint32_t var_bp_8h;
    
    if (CONCAT44(in_R9,arg4) == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = (**(*0x193b0 + 0x138))(2,0x19240,0,&uStackX_20,&iStack_40);
        if (-1 < iVar2) {
            uVar3 = 0;
            if (uStackX_20 != 0) {
                uVar1 = 0;
                do {
                    iVar2 = (**(*0x193b0 + 0x98))(*(iStack_40 + uVar1 * 8),0x19240,&iStack_48);
                    if ((((-1 < iVar2) &&
                         (iVar2 = (**(iStack_48 + 0x70))(iStack_48,&var_30h,&var_28h,&var_bp_20h,&var_bp_18h),
                         -1 < iVar2)) && (var_30h == 0)) &&
                       (((var_28h == (arg1 & 0xffU) && (_var_bp_20h == (arg2 & 0xffU))) &&
                        (_var_bp_18h == (arg3 & 0xffU))))) break;
                    uVar3 = uVar3 + 1;
                    uVar1 = uVar3;
                } while (uVar1 < uStackX_20);
            }
            if (uVar3 < uStackX_20) {
                *CONCAT44(in_R9,arg4) = iStack_48;
            }
            else {
                iVar2 = -0x7ffffffffffffff2;
            }
        }
    }
    return iVar2;
}


/* fcn.00011d24 @ 0x11d24 */

ulong fcn.00011d24(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    
    uVar4 = 0;
    if (arg2 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        uVar3 = arg1 + 4;
        uVar1 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
        if ((uVar1 & 6) != 6) {
            *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = uVar1 | 6;
        }
        uVar2 = *((arg1 + 0x10U >> 4 & 0x10000000 | arg1 + 0x10U & 0xffffffff) + 0xc0000000);
        if ((uVar2 & 7) == 0) {
            uVar3 = uVar2 & 0xfffffff0;
        }
        else {
            if ((uVar2 & 7) != 4) {
                return 0x8000000000000003;
            }
            uVar3 = (uVar2 & 0xfffffff0) +
                    (*((arg1 + 0x14U >> 4 & 0x10000000 | arg1 + 0x14U & 0xffffffff) + 0xc0000000) << 0x20);
        }
        if (uVar3 == 0) {
            uVar4 = 0x8000000000000006;
        }
        else {
            *arg2 = uVar3;
        }
    }
    return uVar4;
}


/* fcn.00011194 @ 0x11194 */

int64_t fcn.00011194(int64_t arg1)

{
    int64_t extraout_RAX;
    int64_t iVar1;
    ulong in_RDX;
    unkbyte7 in_R8;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.0001187c(arg1 + 0x24);
        if (-1 < iVar1) {
            *(arg1 + 0x2c) = *(arg1 + 0x27);
            iVar1 = fcn.0001187c(arg1 + 0x2c);
            if (-1 < iVar1) {
                *(arg1 + 0x34) = *(arg1 + 0x2f);
                iVar1 = fcn.0001187c(arg1 + 0x34);
                if (-1 < iVar1) {
                    *(arg1 + 0x22) = *(arg1 + 0x37);
                    fcn.00011e0c(CONCAT71(iVar1 >> 8,*(arg1 + 0x37)),
                                 CONCAT71(in_RDX >> 8,*(arg1 + 0x23)) & 0xffffffffffffff1f,
                                 CONCAT71(in_R8,*(arg1 + 0x23) >> 5),arg1 + 0x50);
                    if (extraout_RAX < 0) {
                        iVar1 = -0x7ffffffffffffffd;
                    }
                    else {
                        iVar1 = fcn.00011d24((CONCAT11(*(arg1 + 0x23),*(arg1 + 0x23)) & 0x1fff & 0xffffffe0 |
                                             *(arg1 + 0x22) << 0xd) << 7,arg1 + 0x58);
                        if (iVar1 < 0) {
                            iVar1 = -0x7ffffffffffffffd;
                        }
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00014388 @ 0x14388 */

ulong fcn.00014388(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    
    uVar4 = 0;
    if (arg1 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        iVar5 = arg1 + 0x860;
        iVar1 = arg1 + 0x870;
        *iVar5 = iVar5;
        *(arg1 + 0x868) = iVar5;
        iVar5 = 0x40;
        *iVar1 = iVar1;
        piVar3 = arg1 + 0x60;
        *(arg1 + 0x878) = iVar1;
        do {
            *piVar3 = iVar1;
            puVar2 = *(arg1 + 0x878);
            piVar3[1] = puVar2;
            *puVar2 = piVar3;
            *(arg1 + 0x878) = piVar3;
            piVar3 = piVar3 + 4;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
    return uVar4;
}


/* fcn.00013aa0 @ 0x13aa0 */

int64_t fcn.00013aa0(int64_t arg1)

{
    int64_t iVar1;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        *(arg1 + 0x48) = 1;
        iVar1 = fcn.00018f98(*(arg1 + 0x38),1,arg1 + 0x40,arg1 + 0x50);
        if (iVar1 < 0) {
            *(arg1 + 0x40) = 0;
            iVar1 = -0x7ffffffffffffff7;
            *(arg1 + 0x50) = 0;
        }
        else {
            iVar1 = fcn.00013700(arg1);
            if (-1 < iVar1) {
                return iVar1;
            }
        }
        fcn.000139f0(arg1);
    }
    return iVar1;
}


/* fcn.00011388 @ 0x11388 */

void fcn.00011388(int64_t arg1)

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
            fcn.000102c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.0001195c @ 0x1195c */

ulong fcn.0001195c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t uVar2;
    uchar in_stack_00000028;
    
    if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
        uVar1 = 0x800000000000000e;
    }
    else {
        *((arg1 + 0x18U >> 4 & 0x10000000 | arg1 + 0x18U & 0xffffffff) + 0xc0000000) = arg3;
        *((arg1 + 0x19U >> 4 & 0x10000000 | arg1 + 0x19U & 0xffffffff) + 0xc0000000) = arg4;
        *((arg1 + 0x1aU >> 4 & 0x10000000 | arg1 + 0x1aU & 0xffffffff) + 0xc0000000) = in_stack_00000028;
        uVar2 = arg1 + 4;
        *((arg1 + 0x20U >> 4 & 0x10000000 | arg1 + 0x20U & 0xffffffff) + 0xc0000000) = arg2;
        *((arg1 + 0x22U >> 4 & 0x10000000 | arg1 + 0x22U & 0xffffffff) + 0xc0000000) = arg2;
        uVar1 = 0;
        *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) =
             *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) | 6;
    }
    return uVar1;
}


/* fcn.0001187c @ 0x1187c */

ulong fcn.0001187c(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar3 = 0;
    if (arg1 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = ((*arg1 << 5 | *(arg1 + 1) & 0x1f) << 3 | *(arg1 + 1) >> 5) << 0xc;
        uVar2 = uVar1;
        if (*(uVar1 + 0xc0000000) == -1) {
            uVar3 = 0x800000000000000e;
        }
        else {
            *(arg1 + 2) = *(uVar2 + 0xc0000018);
            *(arg1 + 3) = *(uVar2 + 0xc0000019);
            *(arg1 + 4) = *(uVar2 + 0xc000001a);
            *(arg1 + 6) = *(uVar2 + 0xc0000020);
        }
    }
    return uVar3;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.000113e8 @ 0x113e8 */

void fcn.000113e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    
    if (arg2 != 0) {
        arg1 = arg1 - arg3;
        uVar4 = arg2 & 0xffffffff;
        do {
            uVar1 = *(arg1 + arg3);
            uVar2 = uVar1 >> 0x10;
            uVar3 = uVar1;
            *arg3 = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar2 << 8 | uVar2 >> 8);
            arg3 = arg3 + 4;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return;
}


/* fcn.000116a8 @ 0x116a8 */

int64_t fcn.000116a8(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        if (*(iVar1 + 0x18) != 0) {
            if ((*(iVar1 + 0x1e70) != 0) && (uVar3 = 1, *(iVar1 + 0x30) != '\0')) {
                do {
                    if (0x3f < uVar3) break;
                    if (((*(uVar3 * 0x78 + 0x38 + iVar1) == 1) && (iVar2 = *(uVar3 * 0x78 + 0x60 + iVar1), iVar2 != 0))
                       && (iVar2 = fcn.000116a8(iVar2), iVar2 < 0)) {
                        return iVar2;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 <= *(iVar1 + 0x30));
            }
            iVar2 = *(iVar1 + 0x18);
            if (*(iVar1 + 0x1e70) == 0) {
                if (iVar1 == *(iVar2 + 0x79e10)) {
                    *(iVar2 + 0x79e10) = 0;
                }
                else {
                    *(*(iVar1 + 0x1e60) + 8) = *(iVar1 + 0x1e68);
                    **(iVar1 + 0x1e68) = *(iVar1 + 0x1e60);
                }
                *(iVar2 + 0x79e18) = *(iVar2 + 0x79e18) + -1;
                iVar1 = fcn.00012910(arg1);
                return iVar1;
            }
        }
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00014ed0 @ 0x14ed0 */

ulong fcn.00014ed0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    ulong *puVar1;
    ulong uVar2;
    
    if (arg4 == NULL) {
        uVar2 = 0x8000000000000002;
    }
    else if ((*(arg1 + 0x18) == 0) || (puVar1 = *(*(arg1 + 0x18) + 0x79f20), puVar1 == NULL)) {
        uVar2 = 0x8000000000000003;
    }
    else {
        uVar2 = (**puVar1)(puVar1,arg1,2,0,arg2,arg3,arg4,0);
    }
    return uVar2;
}


/* fcn.00014f30 @ 0x14f30 */

ulong fcn.00014f30(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (arg4 == NULL) {
        uVar2 = 0x8000000000000002;
    }
    else if ((*(arg1 + 0x18) == 0) || (iVar1 = *(*(arg1 + 0x18) + 0x79f20), iVar1 == 0)) {
        uVar2 = 0x8000000000000003;
    }
    else {
        uVar2 = (**(iVar1 + 8))(iVar1,arg1,2,0,arg2,arg3,arg4);
    }
    return uVar2;
}


/* fcn.00013100 @ 0x13100 */

uint64_t fcn.00013100(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t extraout_RAX;
    uint32_t *puVar1;
    uint64_t uVar2;
    uint64_t extraout_RAX_00;
    uint64_t extraout_RAX_01;
    uint32_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint in_register_00000014;
    uint32_t uVar7;
    int64_t iVar8;
    unkbyte7 in_R9;
    int16_t iStack_36;
    uchar uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_24;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    uVar6 = arg2;
    if ((((iVar4 == 0) || (uVar6 == 0)) || (*(iVar4 + 0x30) < uVar6)) || (0x3f < uVar6)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar8 = (arg2 & 0xff) * 0x78;
        *(iVar8 + 0x40 + iVar4) = iVar4;
        fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),0,CONCAT71(in_R9,6));
        if (extraout_RAX < 0) {
            *(iVar8 + 0x38 + iVar4) = 0;
            if (extraout_RAX != 0x800000000000000e) {
                return extraout_RAX;
            }
        }
        else {
            if (((*(iVar4 + 0x20) & 2) == 0) || (iStack_36 != -1)) {
                puVar1 = 0x19320;
                uVar7 = uStack_30 & 0xffffff;
                uVar5 = uVar2;
                do {
                    if (uVar7 == *puVar1) {
                        *(iVar8 + 0x4d + iVar4) = uStack_34;
                        *(iVar8 + 0x38 + iVar4) = uVar7;
                        *(iVar8 + 0x4c + iVar4) = uVar6;
                        *(iVar8 + 0x48 + iVar4) = uStack_24 & 0x7ff;
                        *(iVar8 + 0x4a + iVar4) = uStack_24 >> 0xb & 0x7ff;
                        if (uVar7 == 1) {
                            puVar1 = iVar8 + 0x58 + iVar4;
                            *puVar1 = *puVar1 & 0xfffffffe;
                            puVar1 = iVar8 + 0x58 + iVar4;
                            *puVar1 = *puVar1 | arg3 != '\0';
                        }
                        uVar2 = extraout_RAX;
                        if ((uVar7 != 0) && (uVar2 = fcn.00012e70(arg1,CONCAT71(extraout_RAX >> 8,uVar6)), uVar2 < 0)
                           ) {
                            uVar2 = 0;
                        }
                        if (uVar7 == 0x200101) {
                            fcn.00014f8c(arg1,CONCAT71(uVar2 >> 8,uVar6),*(iVar8 + 0x4e + iVar4),CONCAT71(in_R9,1))
                            ;
                            if (-1 < extraout_RAX_00) {
                                fcn.00015000(arg1,CONCAT71(extraout_RAX_00 >> 8,uVar6),*(iVar8 + 0x4e + iVar4),
                                             CONCAT71(in_R9,1));
                                return extraout_RAX_01;
                            }
                            return extraout_RAX_00;
                        }
                        return uVar2;
                    }
                    uVar3 = uVar5 + 1;
                    uVar5 = uVar3;
                    puVar1 = puVar1 + 1;
                } while (uVar3 < 9);
            }
            *(iVar8 + 0x38 + iVar4) = 0;
        }
    }
    return uVar2;
}


/* fcn.000151f8 @ 0x151f8 */

int64_t fcn.000151f8(uint32_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint8_t uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    unkbyte7 in_R9;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = arg2;
    if ((((iVar3 == 0) || (uVar4 == 0)) || (*(iVar3 + 0x30) < uVar4)) || (0x3f < uVar4)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = (arg2 & 0xff) * 0x78;
        if ((*(iVar5 + 0x38 + iVar3) == 0xe0102) && (uVar1 = *(iVar5 + 0x4f + iVar3), uVar1 != 0)) {
            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar1 + 0xd,CONCAT71(in_R9,1));
            iVar2 = extraout_RAX;
            if (-1 < extraout_RAX) {
                fcn.00015000(arg1,CONCAT44(in_register_00000014,CONCAT31(arg2 >> 8,uVar4)),
                             *(iVar5 + 0x4f + iVar3) + 0xd,CONCAT71(in_R9,1));
                iVar2 = extraout_RAX_00;
            }
        }
        else {
            iVar2 = -0x7ffffffffffffffd;
        }
    }
    return iVar2;
}


/* fcn.000152bc @ 0x152bc */

int64_t fcn.000152bc(int64_t arg1)

{
    uint16_t uVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    uint16_t uVar5;
    ulong in_R8;
    int64_t iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    
    if (arg1 == 0) {
        iVar6 = -0x7ffffffffffffffe;
    }
    else {
        uVar1 = *(arg1 + 0x1e40);
        if (uVar1 == 0) {
            iVar6 = -0x7ffffffffffffffd;
        }
        else {
            iVar6 = fcn.00014ed0(arg1,uVar1 + 2,CONCAT71(in_R8 >> 8,1),auStackX_8);
            if (-1 < iVar6) {
                *(arg1 + 0x1e42) = auStackX_8[0] & 0xf;
                uVar2 = 0;
                *(arg1 + 0x1e43) = auStackX_8[0] >> 8;
                *(arg1 + 0x1e44) = auStackX_8[0] >> 0x10 & 0xfff;
                if ((auStackX_8[0] & 0xf) != 0) {
                    do {
                        uVar5 = auStackX_8[0] >> 0x10 & 0xfff;
                        iVar4 = uVar5 * uVar2;
                        iVar3 = iVar4 + (auStackX_8[0] >> 8 & 0xff) + uVar1;
                        iVar4 = CONCAT22(iVar4 >> 0x10,iVar3);
                        iVar6 = fcn.00014ed0(arg1,iVar4 + 0x2a,CONCAT71(uVar5 >> 8,1),auStackX_10);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        iVar6 = fcn.00014ed0(arg1,iVar4 + 0x8d,CONCAT71(iVar6 >> 8,1),auStackX_18);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        iVar6 = fcn.00014ed0(arg1,iVar3 + 0x96,CONCAT71(iVar6 >> 8,1),auStackX_20);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < (auStackX_8[0] & 0xf));
                }
            }
        }
    }
    return iVar6;
}


/* fcn.000124a0 @ 0x124a0 */

int64_t fcn.000124a0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    char cVar2;
    int16_t iVar3;
    uint64_t arg2_00;
    uint16_t uVar4;
    uint16_t uVar5;
    unkbyte7 in_R8;
    uint16_t uStackX_8;
    char cStackX_a;
    char cStackX_b;
    uint16_t auStackX_18 [8];
    
    iVar1 = 0;
    arg2_00 = arg2 & 0xffff;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        while (iVar3 = arg2_00, iVar3 != 0) {
            uVar4 = 0;
            fcn.00014ed0(arg1,arg2_00,CONCAT71(in_R8,1),&uStackX_8);
            if (extraout_RAX < 0) {
                return extraout_RAX;
            }
            cVar2 = _uStackX_8 >> 8;
            iVar1 = extraout_RAX;
            if (cVar2 == '\x03') {
                *(arg1 + 0x1e3c) = iVar3;
                uVar5 = uVar4;
            }
            else {
                uVar5 = 0;
                if (cVar2 == '\x05') {
                    if (cStackX_b == '\0') {
                        fcn.00014ed0(arg1,arg2_00 + 1,CONCAT71(in_R8,1),auStackX_18);
                        uVar5 = auStackX_18[0];
                        if (extraout_RAX_00 < 0) {
                            return extraout_RAX_00;
                        }
                        iVar1 = extraout_RAX_00;
                        if ((cStackX_a == '\x06') && (*(arg1 + 0x1e40) = iVar3, (*(arg1 + 0x20) & 2) != 0)) {
                            iVar1 = fcn.000152bc(arg1);
                        }
                    }
                    else {
                        uVar5 = uVar4;
                        if (cStackX_a == '\x01') {
                            *(arg1 + 0x1e3e) = iVar3;
                        }
                    }
                }
            }
            arg2_00 = uStackX_8 & 0xff;
            if (uVar5 != 0) {
                arg2_00 = uVar5;
            }
        }
    }
    return iVar1;
}


/* fcn.0001202c @ 0x1202c */

ulong fcn.0001202c(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint32_t uVar2;
    int16_t iVar3;
    int16_t *piVar4;
    uint32_t uVar5;
    
    uVar1 = 7;
    iVar3 = arg2;
    if (arg1 + 0x7f7aU < 2) {
        uVar2 = 0;
        piVar4 = 0x192d8;
        uVar5 = 0;
        while (*piVar4 != iVar3) {
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 1;
            if (3 < uVar5) {
                uVar5 = 0;
                piVar4 = 0x192e0;
                do {
                    if (*piVar4 == iVar3) {
                        return 5;
                    }
                    uVar5 = uVar5 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar5 < 6);
                uVar5 = 0;
                piVar4 = 0x19308;
                do {
                    if (*piVar4 == iVar3) {
                        return 3;
                    }
                    uVar5 = uVar5 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar5 < 7);
                uVar5 = 0;
                piVar4 = 0x192b0;
                do {
                    if (*piVar4 == iVar3) {
                        return 2;
                    }
                    uVar5 = uVar5 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar5 < 0x11);
                piVar4 = 0x192f0;
                do {
                    if (*piVar4 == iVar3) {
                        return 4;
                    }
                    uVar2 = uVar2 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar2 < 0xc);
                return uVar1;
            }
        }
        uVar1 = 6;
    }
    return uVar1;
}


/* fcn.00015404 @ 0x15404 */

int64_t fcn.00015404(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t uVar2;
    uint16_t uVar3;
    unkbyte7 in_R8;
    uint32_t auStackX_8 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = arg2;
    if (arg1_00 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (((*(arg1_00 + 0x1e40) == 0) || (uVar2 == 0)) || (*(arg1_00 + 0x30) < uVar2)) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        uVar3 = ((arg2 & 0xff) - 1 >> 1) * *(arg1_00 + 0x1e44) + *(arg1_00 + 0x1e43) + *(arg1_00 + 0x1e40) + 0x96;
        fcn.00014ed0(arg1_00,uVar3,CONCAT71(in_R8,1),auStackX_8);
        iVar1 = extraout_RAX;
        if (-1 < extraout_RAX) {
            if ((arg2 & 1U) == 0) {
                auStackX_8[0] = auStackX_8[0] | 0x100000;
            }
            else {
                auStackX_8[0] = auStackX_8[0] | 0x10000;
            }
            if (uVar2 == *(arg1_00 + 0x1e38)) {
                auStackX_8[0] = auStackX_8[0] | 0x40000000;
            }
            fcn.00014f30(arg1_00,uVar3,CONCAT71(in_R8,1),auStackX_8);
            iVar1 = extraout_RAX_00;
        }
    }
    return iVar1;
}


/* fcn.000154f8 @ 0x154f8 */

int64_t fcn.000154f8(uint32_t arg1)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar2;
    uint8_t uVar3;
    unkbyte7 in_R8;
    uint32_t auStackX_8 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = -0x7ffffffffffffffd;
    if (arg1_00 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if ((*(arg1_00 + 0x1e40) != 0) && (uVar3 = 0, *(arg1_00 + 0x1e42) != '\0')) {
        while( true ) {
            uVar2 = *(arg1_00 + 0x1e44) * uVar3 + *(arg1_00 + 0x1e43) + *(arg1_00 + 0x1e40) + 0x96;
            fcn.00014ed0(arg1_00,uVar2,CONCAT71(in_R8,1),auStackX_8);
            iVar1 = extraout_RAX;
            if (extraout_RAX < 0) break;
            auStackX_8[0] = auStackX_8[0] | 0x38000000;
            fcn.00014f30(arg1_00,uVar2,CONCAT71(in_R8,1),auStackX_8);
            if (extraout_RAX_00 < 0) {
                return extraout_RAX_00;
            }
            uVar3 = uVar3 + 1;
            if (*(arg1_00 + 0x1e42) <= uVar3) {
                return extraout_RAX_00;
            }
        }
    }
    return iVar1;
}


/* fcn.00011420 @ 0x11420 */

ulong fcn.00011420(int64_t arg1,uint32_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    uint in_register_00000014;
    int *piVar3;
    int *arg1_00;
    ulong uVar4;
    uint32_t uVar5;
    
    piVar3 = CONCAT44(in_register_00000014,arg2);
    uVar5 = 0;
    if ((arg1 == 0) || (*piVar3 != 0x6d643475)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if (piVar3[0x1e783] < 0x40) {
            uVar2 = -(piVar3[0x1e782] < 0x40) & piVar3[0x1e782];
            do {
                if ((*(piVar3 + uVar2 * 0x79e + 10) & 1) == 0) {
                    piVar3[0x1e782] = uVar2 + 1 & 0x3f;
                    break;
                }
                uVar5 = uVar5 + 1;
                uVar2 = uVar2 + 1 & 0x3f;
            } while (uVar5 < 0x40);
            if (uVar5 < 0x40) {
                arg1_00 = piVar3 + uVar2 * 0x79e + 2;
                fcn.000102a0(arg1_00,0x1e78);
                arg1_00[8] = arg1_00[8] | 1;
                piVar1 = arg1_00 + 0x798;
                *(arg1_00 + 6) = piVar3;
                *piVar1 = piVar1;
                *(arg1_00 + 0x79a) = piVar1;
                piVar3[0x1e783] = piVar3[0x1e783] + 1;
                *arg1 = arg1_00;
                return 0;
            }
        }
        uVar4 = 0x8000000000000009;
    }
    return uVar4;
}


/* fcn.00013674 @ 0x13674 */

int64_t fcn.00013674(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint in_register_00000014;
    uint in_R8;
    uint32_t *puVar4;
    int64_t iVar5;
    uint32_t uStackX_18;
    
    puVar4 = CONCAT44(in_R8,arg3);
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((((puVar4 == NULL) || (uVar3 = arg2, uVar3 == 0)) || (*(iVar1 + 0x30) < uVar3)) || (0x3f < uVar3)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = (arg2 & 0xff) * 0x78;
        if (*(iVar5 + 0x38 + iVar1) == 1) {
            uVar3 = *(iVar5 + 0x4e + iVar1);
            *puVar4 = 0xff;
            if (uVar3 != 0) {
                fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar3 + 1,1);
                if (extraout_RAX < 0) {
                    return extraout_RAX;
                }
                uVar2 = uStackX_18 >> 0x1a & 0xf;
                if (7 < uVar2) {
                    return extraout_RAX;
                }
                *puVar4 = uVar2;
                return extraout_RAX;
            }
        }
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00014f8c @ 0x14f8c */

ulong fcn.00014f8c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t in_stack_00000028;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar3 != 0) && (in_stack_00000028 != 0)) {
        if ((*(iVar3 + 0x18) == 0) || (puVar1 = *(*(iVar3 + 0x18) + 0x79f20), puVar1 == NULL)) {
            return 0x8000000000000003;
        }
        if (arg2 <= *(iVar3 + 0x30)) {
            uVar2 = (**puVar1)(puVar1,iVar3,1,arg2,arg3,arg4);
            return uVar2;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00015000 @ 0x15000 */

ulong fcn.00015000(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t in_stack_00000028;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (in_stack_00000028 != 0) {
        if ((*(iVar3 + 0x18) == 0) || (iVar1 = *(*(iVar3 + 0x18) + 0x79f20), iVar1 == 0)) {
            return 0x8000000000000003;
        }
        if (arg2 <= *(iVar3 + 0x30)) {
            uVar2 = (**(iVar1 + 8))(iVar1,iVar3,1,arg2,arg3,arg4);
            return uVar2;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00012784 @ 0x12784 */

int64_t fcn.00012784(int64_t arg1)

{
    int iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    uint32_t arg1_00;
    uint64_t arg2;
    int64_t iVar2;
    int64_t iVar3;
    uchar uVar4;
    unkbyte7 in_R8;
    uint32_t arg2_00;
    uint32_t *puVar5;
    uint32_t auStackX_8 [2];
    
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    arg2 = 0;
    puVar5 = auStackX_8;
    uVar4 = 1;
    fcn.00014ed0(arg1,0,CONCAT71(in_R8,1),puVar5);
    arg2_00 = puVar5;
    iVar2 = extraout_RAX;
    if (-1 < extraout_RAX) {
        arg2 = auStackX_8[0] >> 0x10;
        iVar1 = fcn.0001202c(auStackX_8[0] & 0xffff,arg2);
        *(arg1 + 0x10) = iVar1;
        if ((iVar1 == 2) || (iVar1 == 3)) {
            *(arg1 + 0x20) = *(arg1 + 0x20) | 2;
        }
        else if ((((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) && (iVar1 != 7)) {
            iVar2 = -0x7ffffffffffffffd;
        }
    }
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = fcn.00012584(arg1);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = *(arg1 + 0x1e50);
    arg1_00 = arg1;
    if (iVar2 != 0) {
        if (((*(iVar2 + 0x20) & 2) == 0) && ((*(arg1 + 0x20) & 2) == 0)) goto code_r0x00012891;
        iVar3 = -0x7ffffffffffffffd;
        if ((*(iVar2 + 0x20) & 2) == 0) {
code_r0x0001285f:
            if ((*(arg1 + 0x20) & 2) != 0) {
                arg2 = CONCAT71(arg2 >> 8,*(arg1 + 0x1e38));
                iVar3 = fcn.00015404(arg1_00,arg2);
            }
        }
        else {
            arg2 = CONCAT71(arg2 >> 8,*(arg1 + 0x1e58));
            iVar3 = fcn.00015404(iVar2,arg2);
            if (-1 < iVar3) goto code_r0x0001285f;
        }
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    if (((*(arg1 + 0x20) & 2) != 0) && (iVar2 = fcn.000154f8(arg1_00), iVar2 < 0)) {
        return iVar2;
    }
code_r0x00012891:
    if (*(arg1 + 0x10) == 2) {
        if (*(arg1 + 0x1e3e) == 0) {
            iVar2 = -0x7ffffffffffffffd;
            arg2 = 0;
        }
        else {
            arg2 = *(arg1 + 0x1e3e) + 1;
            puVar5 = auStackX_8;
            uVar4 = 1;
            fcn.00014ed0(arg1,arg2,CONCAT71(in_R8,1),puVar5);
            arg2_00 = puVar5;
            iVar2 = extraout_RAX_00;
            if (-1 < extraout_RAX_00) {
                puVar5 = auStackX_8;
                auStackX_8[0] = auStackX_8[0] & 0xfffffffb;
                arg2 = *(arg1 + 0x1e3e) + 1;
                uVar4 = 1;
                fcn.00014f30(arg1,arg2,CONCAT71(in_R8,1),puVar5);
                arg2_00 = puVar5;
                iVar2 = extraout_RAX_01;
            }
        }
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    fcn.000120fc(arg1_00,arg2,CONCAT71(in_R8,uVar4),arg2_00);
    return extraout_RAX_02;
}


/* fcn.00012a34 @ 0x12a34 */

int64_t fcn.00012a34(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t arg3_00;
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    uint8_t uVar3;
    uint in_register_00000014;
    ulong uVar4;
    int64_t arg2_00;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    uint32_t var_40h;
    int64_t var_48h;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((arg3 == 0) || (uVar3 == 0)) || (puVar2[6] < uVar3)) || (0x3f < uVar3)) {
        return -0x7ffffffffffffffe;
    }
    puVar7 = puVar2 + (arg2 & 0xff) * 0xf + 7;
    if ((*puVar7 == 1) && (puVar2[1] < 5)) {
        uVar4 = CONCAT71(CONCAT44(in_register_00000014,arg2) >> 8,uVar3);
        iVar6 = fcn.00013674(arg1,uVar4,&uStackX_18);
        if (iVar6 < 0) {
            return iVar6;
        }
        if (uStackX_18 == 1) {
            uVar5 = 0;
            do {
                (**(*0x193b0 + 0xf8))(10);
                uVar4 = CONCAT71(uVar4 >> 8,uVar3);
                iVar6 = fcn.00013674(arg1,uVar4,&uStackX_18);
                if (iVar6 < 0) {
                    return iVar6;
                }
                if (uStackX_18 != 1) goto code_r0x00012b05;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 100000);
        }
        else {
code_r0x00012b05:
            if (uStackX_18 == 2) {
                if ((puVar2[4] & 2) != 0) goto code_r0x00012b89;
                if (puVar2[6] < uVar3) {
                    iVar6 = -0x7ffffffffffffffe;
                }
                else {
                    if (*puVar7 != 1) goto code_r0x00012a8d;
                    arg2_00 = CONCAT71(uVar4 >> 8,uVar3);
                    iVar6 = fcn.00014f8c(arg1,arg2_00,4,CONCAT71(iVar6 >> 8,1));
                    if (-1 < iVar6) {
                        uStackX_18 = uStackX_18 & 0xffffffff7fffffff;
                        iVar6 = fcn.00015000(arg1,CONCAT71(arg2_00 >> 8,uVar3),4,CONCAT71(iVar6 >> 8,1));
                    }
                }
                if (iVar6 < 0) {
                    return iVar6;
                }
code_r0x00012b89:
                uStackX_18 = *puVar2;
                arg3_00 = puVar2[3];
                uVar1 = puVar2[1];
                *(&uStackX_18 + uVar1) = uVar3;
                iVar6 = fcn.00012994(&uStackX_18,uVar1 + 1,arg3_00,&uStackX_20);
                if (iVar6 < 0) {
                    return iVar6;
                }
                *(uStackX_20 + 0x1e50) = puVar2;
                *(uStackX_20 + 0x1e58) = uVar3;
                *(uStackX_20 + 0x1e48) = puVar7;
                puVar2[(arg2 & 0xff) * 0xf + 0xc] = uStackX_20;
                *(puVar2 + 0x3ce) = puVar2[0x3ce] + 1;
                iVar6 = fcn.00012784(uStackX_20);
                if (iVar6 < 0) {
                    fcn.00012910(uStackX_20);
                    return iVar6;
                }
                *arg3 = uStackX_20;
                return iVar6;
            }
        }
        iVar6 = -0x7ffffffffffffff2;
    }
    else {
code_r0x00012a8d:
        iVar6 = -0x7ffffffffffffffd;
    }
    return iVar6;
}


/* fcn.00013574 @ 0x13574 */

int64_t fcn.00013574(uint32_t arg1,uint32_t arg2)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint8_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = arg2;
    if ((((iVar4 == 0) || (uVar6 == 0)) || (*(iVar4 + 0x30) < uVar6)) || (0x3f < uVar6)) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        iVar8 = (arg2 & 0xff) * 0x78;
        if ((*(iVar4 + 0x38 + iVar8) == 1) && (iVar3 = *(iVar4 + 0x60 + iVar8), iVar3 != 0)) {
            uVar2 = *(iVar3 + 0x1e38);
            uVar7 = CONCAT31(arg2 >> 8,uVar2);
            if ((((uVar2 != 0) && ((uVar2 <= *(iVar3 + 0x30) && (uVar2 < 0x40)))) &&
                (iVar10 = uVar2 * 0x78, *(iVar10 + 0x38 + iVar3) == 1)) &&
               (((*(iVar4 + 0x5c + iVar8) & 0x20) != 0 && ((*(iVar10 + 0x5c + iVar3) & 0x20) != 0)))) {
                uVar9 = 0;
                iVar5 = fcn.0001339c(iVar3,uVar7,0);
                if (iVar5 < 0) {
                    return iVar5;
                }
                uVar7 = CONCAT31(uVar7 >> 8,uVar6);
                iVar5 = fcn.0001339c(arg1,uVar7,CONCAT71(uVar9 >> 8,1));
                if (iVar5 < 0) {
                    return iVar5;
                }
                iVar5 = fcn.000132b8(arg1,CONCAT31(uVar7 >> 8,uVar6));
                if (iVar5 < 0) {
                    return iVar5;
                }
                puVar1 = iVar4 + 0x58 + iVar8;
                *puVar1 = *puVar1 | 2;
                puVar1 = iVar10 + 0x58 + iVar3;
                *puVar1 = *puVar1 | 2;
                return iVar5;
            }
        }
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.00016510 @ 0x16510 */

uint64_t fcn.00016510(uint32_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    uint64_t extraout_RAX;
    uint64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint64_t extraout_RAX_02;
    uint64_t extraout_RAX_03;
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint in_register_00000014;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar in_R8B;
    unkbyte7 in_R8;
    uint32_t auStackX_8 [2];
    
    iVar2 = CONCAT44(in_register_00000014,arg2);
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((iVar1 == 0) || (uVar3 == 0)) || (*(iVar1 + 0x30) < uVar3)) || (0x3f < uVar3)) {
        uVar6 = 0x8000000000000002;
    }
    else {
        iVar5 = (arg2 & 0xff) * 0x78;
        if ((*(iVar1 + 0x38 + iVar5) == 1) && (arg1_00 = *(iVar1 + 0x60 + iVar5), arg1_00 != 0)) {
            if ((*(arg1_00 + 0x20) & 2) == 0) {
                if ((((*(iVar1 + 0x20) & 0x20) != 0) && (*(arg1_00 + 0x1e3a) != '\0')) &&
                   (*(iVar1 + 0x69 + iVar5) != '\0')) {
                    fcn.00011fc4(arg1_00,0x2000000,CONCAT71(in_R8,in_R8B));
                    if (extraout_RAX < 0) {
                        return extraout_RAX;
                    }
                    *(arg1_00 + 0x20) = *(arg1_00 + 0x20) | 0x20;
                }
                if ((((*(iVar1 + 0x20) & 0x10) != 0) && (*(arg1_00 + 0x1e39) != '\0')) &&
                   (*(iVar1 + 0x6a + iVar5) != '\0')) {
                    fcn.00011fc4(arg1_00,0x1000000,CONCAT71(in_R8,in_R8B));
                    if (extraout_RAX_00 < 0) {
                        return extraout_RAX_00;
                    }
                    *(arg1_00 + 0x20) = *(arg1_00 + 0x20) | 0x10;
                    if (((*(arg1_00 + 0x20) & 0x24) == 4) &&
                       (fcn.00011fc4(arg1_00,0x4000000,CONCAT71(in_R8,in_R8B)), extraout_RAX_01 == 0)) {
                        *(arg1_00 + 0x20) = *(arg1_00 + 0x20) | 8;
                    }
                }
                fcn.00011fc4(arg1_00,0x80000000,CONCAT71(in_R8,in_R8B));
                if (extraout_RAX_02 < 0) {
                    return extraout_RAX_02;
                }
                uVar4 = 0;
                do {
                    iVar2 = 0;
                    fcn.00014ed0(arg1_00,6,CONCAT71(in_R8,1),auStackX_8);
                    uVar6 = extraout_RAX_03;
                    if (extraout_RAX_03 < 0) goto code_r0x00016674;
                    if ((auStackX_8[0] & 0x2000000) != 0) break;
                    (**(*0x193b0 + 0xf8))(10);
                    uVar4 = uVar4 + 1;
                } while (uVar4 < 3000);
                if (uVar4 == 3000) {
                    uVar6 = 0x8000000000000012;
                }
code_r0x00016674:
                if (uVar6 < 0) {
                    return uVar6;
                }
            }
            else {
                if ((((*(iVar1 + 0x20) & 0x10) != 0) && (*(arg1_00 + 0x1e39) != '\0')) &&
                   (*(iVar1 + 0x6a + iVar5) != '\0')) {
                    *(arg1_00 + 0x20) = *(arg1_00 + 0x20) | 0x18;
                }
                *(arg1_00 + 0x20) = *(arg1_00 + 0x20) & 0xffffffdf;
            }
            if ((*(arg1_00 + 0x20) & 0x10) != 0) {
                iVar2 = CONCAT71(iVar2 >> 8,uVar3);
                iVar1 = fcn.00018000(arg1,iVar2);
                if ((iVar1 < 0) || ((*(arg1_00 + 0x10) == 3 && (iVar1 = fcn.000155c4(arg1_00,iVar2), iVar1 < 0)))) {
                    *(arg1_00 + 0x20) = *(arg1_00 + 0x20) & 0xffffffef;
                }
            }
            if (((*(arg1_00 + 0x20) & 0x20) != 0) &&
               (iVar2 = fcn.00017a30(arg1,CONCAT71(iVar2 >> 8,uVar3)), iVar2 < 0)) {
                *(arg1_00 + 0x20) = *(arg1_00 + 0x20) & 0xffffffdf;
            }
            uVar6 = ~-((*(arg1_00 + 0x20) & 0x30) != 0) & 0x8000000000000003;
        }
        else {
            uVar6 = 0x8000000000000003;
        }
    }
    return uVar6;
}


/* fcn.00012c1c @ 0x12c1c */

int64_t fcn.00012c1c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iStackX_8;
    
    uVar4 = arg2;
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    uVar3 = arg2;
    iStackX_8 = 0;
    if (iVar1 == 0) {
        return -0x7ffffffffffffffe;
    }
    if ((uVar3 == 0) || (*(iVar1 + 0x30) < uVar3)) {
        iVar1 = -0x7ffffffffffffffe;
code_r0x00012ce4:
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    else {
        if (4 < *(iVar1 + 8)) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = fcn.00012a34(arg1,uVar4,&iStackX_8);
        if (-1 < iVar1) {
            uVar4 = CONCAT31(uVar4 >> 8,uVar3);
            iVar1 = fcn.00013574(arg1,uVar4);
            if (-1 < iVar1) {
                uVar4 = CONCAT31(uVar4 >> 8,uVar3);
                fcn.00016510(arg1,uVar4);
                iVar2 = iStackX_8;
                iVar1 = fcn.0001156c(iStackX_8);
                if (iVar1 < 0) goto code_r0x00012ce9;
                if (*(iVar2 + 8) < 5) {
                    iVar2 = fcn.00012d0c(iVar2,uVar4);
                    if (-1 < iVar2) {
                        return iVar2;
                    }
                    return 0;
                }
                goto code_r0x00012ce4;
            }
        }
        iVar2 = iStackX_8;
    }
code_r0x00012ce9:
    if (iVar2 != 0) {
        fcn.00012910(iVar2);
    }
    return iVar1;
}


/* fcn.00012da4 @ 0x12da4 */

ulong fcn.00012da4(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong extraout_RAX;
    uint in_register_0000000c;
    uint8_t uVar2;
    uint in_register_00000014;
    int64_t iVar3;
    
    if ((((CONCAT44(in_register_0000000c,arg1) == 0) || (uVar2 = arg2, uVar2 == 0)) ||
        (*(CONCAT44(in_register_0000000c,arg1) + 0x30) < uVar2)) || (0x3f < uVar2)) {
        return 0x8000000000000002;
    }
    iVar3 = (arg2 & 0xff) * 0x78;
    uVar1 = *(iVar3 + 0x38 + CONCAT44(in_register_0000000c,arg1));
    if (0xe0100 < uVar1) {
        if (uVar1 < 0xe0103) {
            if (uVar1 - 0xe0101 < 2) {
                iVar3 = 0xe0108;
                goto code_r0x00012e42;
            }
        }
        else if (0x100100 < uVar1) {
            if (uVar1 < 0x100103) {
                if (uVar1 - 0x100101 < 2) {
                    iVar3 = 0xe0101;
                    goto code_r0x00012e42;
                }
            }
            else if ((uVar1 - 0x200101 < 2) && (*(iVar3 + 0x38 + CONCAT44(in_register_0000000c,arg1)) - 0x200101U < 2))
            {
                iVar3 = 0xe0103;
code_r0x00012e42:
                fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),arg3 & 0xffff,iVar3);
                return extraout_RAX;
            }
        }
    }
    return 0x8000000000000003;
}


/* fcn.00012e70 @ 0x12e70 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00012e70(uint32_t arg1,uint32_t arg2)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    unkbyte3 Var6;
    uint in_register_00000014;
    uint16_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar uVar10;
    unkbyte7 in_R9;
    uint16_t uVar11;
    uint16_t uStackX_8;
    char cStackX_a;
    char cStackX_b;
    uint16_t uStackX_18;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t uStack_68;
    int64_t var_30h;
    int64_t var_bp_20h;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = arg2;
    if ((((iVar4 == 0) || (uVar5 == 0)) || (*(iVar4 + 0x30) < uVar5)) || (0x3f < uVar5)) {
        iVar9 = -0x7ffffffffffffffe;
    }
    else {
        iVar8 = (arg2 & 0xff) * 0x78;
        uVar2 = *(iVar8 + 0x4d + iVar4);
        uVar7 = uVar2;
        iVar9 = 0;
        if (uVar2 != 0) {
            do {
                arg2 = CONCAT31(arg2 >> 8,uVar5);
                uVar11 = 0;
                fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar7,CONCAT71(in_R9,1));
                if (extraout_RAX < 0) {
                    return extraout_RAX;
                }
                uVar3 = (CONCAT12(cStackX_a,uStackX_8) & 0xff00) >> 8;
                uVar10 = uVar7;
                Var6 = arg2 >> 8;
                iVar9 = extraout_RAX;
                if (uVar3 == 1) {
                    if (*(iVar8 + 0x38 + iVar4) == 1) {
                        *(iVar8 + 0x4e + iVar4) = uVar10;
                        if (*(iVar4 + 0x30) < uVar5) {
code_r0x0001308f:
                            iVar9 = -0x7ffffffffffffffe;
                        }
                        else if (*(iVar8 + 0x38 + iVar4) == 1) {
                            arg2 = CONCAT31(Var6,uVar5);
                            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar7,CONCAT71(in_R9,3));
                            iVar9 = extraout_RAX_02;
                            if (-1 < extraout_RAX_02) {
                                puVar1 = iVar8 + 0x5c + iVar4;
                                *puVar1 = *puVar1 & 0xffffe000;
                                puVar1 = iVar8 + 0x5c + iVar4;
                                *puVar1 = *puVar1 | uStack_68 >> 0x10 & 0x1fff;
                            }
                        }
                        else {
code_r0x00013047:
                            iVar9 = -0x7ffffffffffffffd;
                        }
                    }
code_r0x00013092:
                    if (iVar9 < 0) {
                        return iVar9;
                    }
                }
                else {
                    if (uVar3 == 3) {
                        *(iVar8 + 0x4f + iVar4) = uVar10;
                        if (*(iVar8 + 0x38 + iVar4) == 1) {
                            if (*(iVar4 + 0x30) < uVar5) goto code_r0x0001308f;
                            if (*(iVar8 + 0x38 + iVar4) != 1) goto code_r0x00013047;
                            uVar10 = 8;
code_r0x00012f70:
                            arg2 = CONCAT31(Var6,uVar5);
                            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar7,CONCAT71(in_R9,uVar10));
                            iVar9 = extraout_RAX_00;
                        }
                        goto code_r0x00013092;
                    }
                    if (uVar3 == 4) {
                        *(iVar8 + 0x4e + iVar4) = uVar10;
                        arg2 = CONCAT31(Var6,uVar5);
                        iVar9 = fcn.00012da4(arg1,arg2,uVar7);
                        goto code_r0x00013092;
                    }
                    if (uVar3 != 5) {
                        if ((uVar3 == 6) && (*(iVar8 + 0x38 + iVar4) == 1)) {
                            *(iVar8 + 0x68 + iVar4) = uVar10;
                            if (uVar5 <= *(iVar4 + 0x30)) {
                                if (*(iVar8 + 0x38 + iVar4) != 1) goto code_r0x00013047;
                                uVar7 = uVar7 + 0x12;
                                uVar10 = 2;
                                goto code_r0x00012f70;
                            }
                            goto code_r0x0001308f;
                        }
                        goto code_r0x00013092;
                    }
                    if (cStackX_b == '\0') {
                        arg2 = CONCAT31(Var6,uVar5);
                        fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar7 + 1,CONCAT71(in_R9,1));
                        if (extraout_RAX_01 < 0) {
                            return extraout_RAX_01;
                        }
                        uVar11 = uStackX_18;
                    }
                    else if (cStackX_a == '\0') {
                        *(iVar8 + 0x50 + iVar4) = uVar7;
                    }
                    else if (cStackX_a == '\x01') {
                        *(iVar8 + 0x52 + iVar4) = uVar7;
                    }
                    iVar9 = 0;
                }
                uVar7 = uStackX_8 & 0xff;
                if (uVar11 != 0) {
                    uVar7 = uVar11;
                }
            } while (uVar7 != 0);
        }
        if ((*(iVar8 + 0x4e + iVar4) == '\0') && ((*(iVar8 + 0x38 + iVar4) & 0xfffffffd) != 0)) {
            iVar9 = -0x7ffffffffffffffd;
        }
    }
    return iVar9;
}


/* fcn.0001339c @ 0x1339c */

int64_t fcn.0001339c(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t uVar8;
    int iVar9;
    uint64_t arg2_00;
    uint64_t uVar10;
    char cVar11;
    uint64_t unaff_RBP;
    unkbyte7 Var13;
    ulong uVar12;
    ulong unaff_RSI;
    int64_t in_R9;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_20 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = arg2;
    if ((((arg1_00 == 0) || (uVar8 == 0)) || (*(arg1_00 + 0x30) <= uVar8)) || (0x3e < uVar8)) {
        iVar5 = -0x7ffffffffffffffe;
    }
    else {
        uVar10 = unaff_RBP & 0xffffffffffffff00;
        do {
            iVar4 = CONCAT71(unaff_RSI >> 8,uVar8);
            arg2_00 = iVar4 + uVar10 & 0xff;
            iVar5 = arg2_00 * 0x78;
            if ((*(iVar5 + 0x38 + arg1_00) != 1) || (uVar2 = *(iVar5 + 0x4e + arg1_00), uVar2 == 0))
            goto code_r0x00013543;
            in_R9 = CONCAT71(in_R9 >> 8,1);
            iVar5 = fcn.00014f8c(arg1,arg2_00,uVar2 + 1,in_R9);
            if (iVar5 < 0) {
                return iVar5;
            }
            if ((auStackX_20[uVar10] & 0x3c000000) != 0x8000000) goto code_r0x00013543;
            Var13 = uVar10 >> 8;
            cVar11 = uVar10 + '\x01';
            uVar10 = CONCAT71(Var13,cVar11);
        } while (cVar11 < '\x02');
        if (((*(arg1_00 + 0x20) & 2) == 0) ||
           (((uVar8 <= *(arg1_00 + 0x30) && (iVar3 = *(arg1_00 + 0x1e40), iVar3 != 0)) &&
            ((iVar9 = ((arg2 & 0xff) - 1 >> 1 & 0xffU) * *(arg1_00 + 0x1e44),
             iVar6 = fcn.00014ed0(arg1_00,CONCAT22(iVar9 >> 0x10,iVar9 + *(arg1_00 + 0x1e43) + iVar3 + 0x8d),
                                  CONCAT11(iVar3 >> 8,1),auStackX_8), -1 < iVar6 && ((auStackX_8[0] & 0x1000) != 0)))
            ))) {
            uVar12 = CONCAT71(Var13,1);
            do {
                uVar10 = iVar4 + uVar12;
                cVar11 = uVar12;
                puVar1 = auStackX_20 + cVar11;
                if ((*puVar1 & 0x3f00000) != 0x200000) {
                    uVar7 = *puVar1 & 0xfffffc3f;
                    *puVar1 = uVar7 | 0x30;
                    if ((arg3 != '\0') && (cVar11 == '\0')) {
                        auStackX_20[0] = uVar7 | 0x8030;
                    }
                    iVar5 = fcn.00015000(arg1,uVar10,*((uVar10 & 0xff) * 0x78 + 0x4e + arg1_00) + 1,
                                         CONCAT71(puVar1 >> 8,1));
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                }
                uVar12 = CONCAT71(uVar12 >> 8,cVar11 + -1);
            } while (-1 < cVar11 + -1);
        }
        else {
code_r0x00013543:
            iVar5 = -0x7ffffffffffffffd;
        }
    }
    return iVar5;
}


/* fcn.000132b8 @ 0x132b8 */

int64_t fcn.000132b8(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    uint in_register_00000014;
    int64_t iVar4;
    uint32_t uVar5;
    unkbyte7 in_R9;
    uint32_t uStackX_8;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((iVar2 == 0) || (uVar3 == 0)) || (*(iVar2 + 0x30) < uVar3)) || (0x3f < uVar3)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar4 = (arg2 & 0xff) * 0x78;
        if (*(iVar2 + 0x38 + iVar4) == 1) {
            uVar5 = 0;
            do {
                arg2 = CONCAT31(arg2 >> 8,uVar3);
                fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),*(iVar2 + 0x4e + iVar4) + 1,CONCAT71(in_R9,1)
                            );
                if (extraout_RAX < 0) {
                    return extraout_RAX;
                }
                iVar1 = extraout_RAX;
                if ((uStackX_8 & 0x3f00000) == 0x200000) break;
                iVar1 = (**(*0x193b0 + 0xf8))(10);
                uVar5 = uVar5 + 1;
            } while (uVar5 < 3000);
            if (uVar5 == 3000) {
                iVar1 = -0x7fffffffffffffee;
            }
        }
        else {
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.000190c4 @ 0x190c4 */

ulong fcn.000190c4(int64_t arg1,int64_t arg2,uint32_t *arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint in_R9;
    int *piVar3;
    uint64_t uVar4;
    
    piVar3 = CONCAT44(in_R9,arg4);
    uVar4 = arg2 & 0xffffffff;
    if ((arg3 != NULL) && (*piVar3 == 0x72683475)) {
        if (*(piVar3 + 0x16) != 0) {
            puVar2 = (arg1 & 0xffffffffU) + *(piVar3 + 0x16);
            if (arg2 != 0) {
                do {
                    uVar1 = *arg3;
                    arg3 = arg3 + 1;
                    *puVar2 = uVar1;
                    puVar2 = puVar2 + 1;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            return 0;
        }
        return 0x8000000000000006;
    }
    return 0x8000000000000002;
}


/* fcn.0001908c @ 0x1908c */

ulong fcn.0001908c(int64_t arg1,uint32_t *arg2,uint32_t arg3)

{
    uint in_R8;
    
    if ((arg2 != NULL) && (*CONCAT44(in_R8,arg3) == 0x72683475)) {
        if (*(CONCAT44(in_R8,arg3) + 0x58) == 0) {
            return 0x8000000000000006;
        }
        *arg2 = *((arg1 & 0xffffffffU) + *(CONCAT44(in_R8,arg3) + 0x58));
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00013920 @ 0x13920 */

void fcn.00013920(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t auStackX_8 [8];
    
    if (arg1 != 0) {
        iVar2 = -0x7ffffffffffffffe;
        uVar3 = 0x19800;
        if (*(arg1 + 0x38) == 0) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            iVar1 = fcn.0001908c(0x19800,auStackX_8,*(arg1 + 0x38));
        }
        if (-1 < iVar1) {
            auStackX_8[0] = auStackX_8[0] & 0x7fffffff;
            if (*(arg1 + 0x38) == 0) {
                iVar1 = -0x7ffffffffffffffe;
            }
            else {
                iVar1 = fcn.000190c4(uVar3 & 0xffffffff,1,auStackX_8,*(arg1 + 0x38));
            }
            if (-1 < iVar1) {
                uVar3 = 0x29800;
                if (*(arg1 + 0x38) == 0) {
                    iVar1 = -0x7ffffffffffffffe;
                }
                else {
                    iVar1 = fcn.0001908c(0x29800,auStackX_8,*(arg1 + 0x38));
                }
                if (-1 < iVar1) {
                    auStackX_8[0] = auStackX_8[0] & 0x7fffffff;
                    if (*(arg1 + 0x38) != 0) {
                        iVar2 = fcn.000190c4(uVar3 & 0xffffffff,1,auStackX_8,*(arg1 + 0x38));
                    }
                    if (-1 < iVar2) {
                        *(arg1 + 0xb68) = *(arg1 + 0xb68) & 0xfffffffc;
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00018f98 @ 0x18f98 */

int64_t fcn.00018f98(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int *piVar2;
    ulong uStackX_8;
    ulong *in_stack_00000028;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((((piVar2 == NULL) || (arg3 == 0)) || (arg4 == 0)) || ((in_stack_00000028 == NULL || (*piVar2 != 0x72683475))))
    {
        return -0x7ffffffffffffffe;
    }
    if (*(piVar2 + 0x14) != 0) {
        iVar1 = fcn.00019118(*(piVar2 + 0x14),arg2 & 0xffffffff,arg3,arg4);
        return iVar1;
    }
    if (*(piVar2 + 0x10) == 0) {
        iVar1 = (**(*0x193b0 + 0x28))(0,4,arg2 & 0xffffffff,&uStackX_8);
        if (-1 < iVar1) {
            *arg3 = uStackX_8;
        }
    }
    else {
        if (piVar2[0x19] == '\0') {
            if (piVar2[0x12] < arg2 << 0xc) {
                return -0x7ffffffffffffff7;
            }
            *arg3 = *(piVar2 + 0x10);
            *(piVar2 + 0x19) = 1;
            iVar1 = 0;
            goto code_r0x00019051;
        }
        iVar1 = -0x7ffffffffffffff7;
    }
    if (iVar1 < 0) {
        return iVar1;
    }
code_r0x00019051:
    *arg4 = *arg3;
    *in_stack_00000028 = 0;
    return iVar1;
}


/* fcn.00013700 @ 0x13700 */

int64_t fcn.00013700(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint *puVar6;
    int64_t var_bp_10h;
    
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar3 = *(arg1 + 0x40);
    uVar5 = 0;
    iVar1 = *(arg1 + 0x50);
    puVar6 = iVar3 + 0xf08;
    do {
        uVar4 = uVar5 * 0x100 + iVar1;
        *(puVar6 + -2) = uVar4;
        if ((uVar4 & 3) != 0) {
            return -0x7ffffffffffffffd;
        }
        *puVar6 = 0x400000;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 4;
    } while (uVar5 < 4);
    uVar4 = 0;
    puVar6 = iVar3 + 0xf48;
    do {
        uVar2 = (uVar4 + 4) * 0x100 + iVar1;
        *(puVar6 + -2) = uVar2;
        if ((uVar2 & 3) != 0) {
            return -0x7ffffffffffffffd;
        }
        *puVar6 = 0x400000;
        uVar5 = uVar4 + 1;
        uVar4 = uVar5;
        puVar6 = puVar6 + 4;
    } while (uVar5 < 0xb);
    var_bp_10h = iVar1 + 0xf00;
    if ((var_bp_10h & 0xfU) == 0) {
        if (*(arg1 + 0x38) == 0) {
            iVar3 = -0x7ffffffffffffffe;
        }
        else {
            iVar3 = fcn.000190c4(0,2,&var_bp_10h,*(arg1 + 0x38));
        }
        if (iVar3 < 0) {
            return iVar3;
        }
        var_bp_10h = CONCAT44(var_bp_10h._4_4_,4);
        if (*(arg1 + 0x38) == 0) {
            iVar3 = -0x7ffffffffffffffe;
        }
        else {
            iVar3 = fcn.000190c4(0xc,1,&var_bp_10h,*(arg1 + 0x38));
        }
        if (iVar3 < 0) {
            return iVar3;
        }
        var_bp_10h = CONCAT44(var_bp_10h._4_4_,0xc0000000);
        if (*(arg1 + 0x38) == 0) {
            iVar3 = -0x7ffffffffffffffe;
        }
        else {
            iVar3 = fcn.000190c4(0x19800,1,&var_bp_10h,*(arg1 + 0x38));
        }
        if (iVar3 < 0) {
            return iVar3;
        }
        var_bp_10h = iVar1 + 0xf40;
        if ((var_bp_10h & 0xfU) == 0) {
            if (*(arg1 + 0x38) == 0) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = fcn.000190c4(0x8000,2,&var_bp_10h,*(arg1 + 0x38));
            }
            if (iVar3 < 0) {
                return iVar3;
            }
            var_bp_10h = CONCAT44(var_bp_10h._4_4_,0x100000b);
            if (*(arg1 + 0x38) == 0) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = fcn.000190c4(0x800c,1,&var_bp_10h,*(arg1 + 0x38));
            }
            if (-1 < iVar3) {
                var_bp_10h = CONCAT44(var_bp_10h._4_4_,10);
                if (*(arg1 + 0x38) == 0) {
                    iVar3 = -0x7ffffffffffffffe;
                }
                else {
                    iVar3 = fcn.000190c4(0x8008,1,&var_bp_10h,*(arg1 + 0x38));
                }
                if (-1 < iVar3) {
                    var_bp_10h = CONCAT44(var_bp_10h._4_4_,0xc0000000);
                    if (*(arg1 + 0x38) == 0) {
                        iVar3 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar3 = fcn.000190c4(0x29800,1,&var_bp_10h,*(arg1 + 0x38));
                    }
                    if (-1 < iVar3) {
                        *(arg1 + 0xb68) = *(arg1 + 0xb68) | 1;
                        return iVar3;
                    }
                    return iVar3;
                }
                return iVar3;
            }
            return iVar3;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.000143e0 @ 0x143e0 */

void fcn.000143e0(void)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar5 = 0;
    puVar2 = 0x193e0;
    do {
        uVar3 = 0;
        uVar4 = 0;
        do {
            if ((uVar5 & 1 << (uVar4 & 0x1f)) != 0) {
                uVar3 = uVar3 | 1 << (0x1f - uVar4 & 0x1f);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x20);
        iVar1 = 8;
        do {
            if (uVar3 < 0) {
                uVar3 = uVar3 * 2 ^ 0x1edc6f41;
            }
            else {
                uVar3 = uVar3 * 2;
            }
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar6 = 0;
        uVar4 = 0;
        do {
            if ((uVar3 & 1 << (uVar4 & 0x1f)) != 0) {
                uVar6 = uVar6 | 1 << (0x1f - uVar4 & 0x1f);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x20);
        *puVar2 = uVar6;
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 1;
    } while (uVar5 < 0x100);
    return;
}


/* fcn.0001448c @ 0x1448c */

ulong fcn.0001448c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    if ((arg2 != 0) && (arg3 != 0)) {
        uVar3 = 0xffffffff;
        uVar2 = 0xffffffff;
        if (arg2 != 0) {
            uVar4 = arg2 & 0xffffffff;
            do {
                uVar1 = *arg1;
                arg1 = arg1 + 1;
                uVar2 = *((uVar1 ^ uVar3 & 0xff) * 4 + 0x193e0) ^ uVar3 >> 8;
                uVar3 = uVar2;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        *arg3 = ~uVar2;
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.0001475c @ 0x1475c */

ulong fcn.0001475c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint16_t auStackX_8 [4];
    int64_t aiStack_18 [2];
    
    if (((arg1 == 0) || (arg2 == 0)) || (0x100 < arg4)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar1 = fcn.0001452c(arg1,auStackX_8,aiStack_18);
        if (iVar1 < 0) {
            uVar2 = 0x8000000000000009;
        }
        else {
            if (((arg4 & 0xffffU) != 0) && (aiStack_18[0] != arg2)) {
                section..text(aiStack_18[0],arg2,arg4 & 0xffffU);
            }
            uVar2 = fcn.00014694(arg1,arg3 & 0xffffffff,arg4 & 0xffff,auStackX_8[0]);
        }
    }
    return uVar2;
}


/* fcn.00014b68 @ 0x14b68 */

int64_t fcn.00014b68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint16_t uStackX_8;
    uint32_t auStack_18 [2];
    int64_t iStack_10;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (*(arg1 + 0x40) == 0) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        iVar1 = fcn.000148d0(arg1,arg3 & 0xffffffff,auStack_18,&iStack_10);
        if (-1 < iVar1) {
            if (uStackX_8 == arg4) {
                if ((uStackX_8 != 0) && (arg2 != iStack_10)) {
                    section..text(arg2,iStack_10,uStackX_8);
                }
                fcn.000144e0(arg1,*(arg1 + 0x40) + 0xf40,auStack_18[0]);
            }
            else {
                fcn.000144e0(arg1,*(arg1 + 0x40) + 0xf40,auStack_18[0]);
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00013c94 @ 0x13c94 */

//WARNING: Variable defined which should be unmapped: var_3h

int64_t fcn.00013c94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *arg1_00;
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uchar auStackX_8 [8];
    uint16_t in_stack_00000028;
    uint8_t in_stack_00000030;
    uint *in_stack_00000038;
    uint8_t *in_stack_00000040;
    int32_t var_3h;
    
    if (((arg1 == 0) || (arg2 == 0)) || (in_stack_00000038 == NULL)) {
        iVar6 = -0x7ffffffffffffffe;
    }
    else if (in_stack_00000030 < 0x3d) {
        arg1_00 = arg1 + 0x878;
        *arg1_00 = *(arg2 + 4);
        uVar1 = *arg2;
        iVar5 = arg1 + 0x888;
        *(arg1 + 0x880) = *(arg1 + 0x880) & 0xe0000000;
        *(arg1 + 0x87c) = uVar1;
        uVar3 = in_stack_00000030;
        *(arg1 + 0x880) =
             *(arg1 + 0x880) |
             ((arg4 & 0x3f | (arg3 & 3) << 6) << 6 | in_stack_00000030 & 0x3f) << 0xd | in_stack_00000028 & 0x1fff;
        fcn.000113e8(arg1_00,3,arg1_00);
        fcn.0001448c(arg1_00,0xc,auStackX_8,arg4);
        *(arg1 + 0x884) =
             CONCAT22(auStackX_8._0_4_ << 8 | auStackX_8._0_4_ >> 8,
                      SUB42(auStackX_8._0_4_,2) << 8 | SUB42(auStackX_8._0_4_,2) >> 8);
        iVar6 = fcn.0001475c(arg1 + -8,arg1_00,1,0x10);
        if (-1 < iVar6) {
            uVar4 = (in_stack_00000030 + 4) * 4;
            iVar6 = fcn.00014b68(arg1 + -8,iVar5,1,uVar4);
            if (-1 < iVar6) {
                iVar2 = uVar4 - 4;
                fcn.000113e8(iVar5,(iVar2 >> 0x1f & 3U) + iVar2 >> 2,iVar5);
                if (in_stack_00000040 != NULL) {
                    *in_stack_00000040 = *(arg1 + 0x890) >> 0x13 & 0x3f;
                }
                if (in_stack_00000030 != 0) {
                    iVar5 = iVar5 - in_stack_00000038;
                    do {
                        *in_stack_00000038 = *(iVar5 + 0xc + in_stack_00000038);
                        in_stack_00000038 = in_stack_00000038 + 1;
                        uVar3 = uVar3 - 1;
                    } while (uVar3 != 0);
                }
            }
        }
    }
    else {
        iVar6 = -0x7ffffffffffffffd;
    }
    return iVar6;
}


/* fcn.00014800 @ 0x14800 */

ulong fcn.00014800(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *arg1_00;
    uint uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint auStackX_20 [2];
    int in_stack_00000028;
    
    auStackX_20[0] = arg4;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        arg1_00 = arg1 + 0xaa0;
        *arg1_00 = *(arg2 + 4);
        uVar1 = *arg2;
        *(arg1 + 0xaa8) = *(arg1 + 0xaa8) & 0xffffc0ff;
        *(arg1 + 0xaa4) = uVar1;
        *(arg1 + 0xaa8) = *(arg1 + 0xaa8) | (arg3 & 0x3f) << 8;
        *(arg1 + 0xaa8) = 7;
        *(arg1 + 0xaa8) = *(arg1 + 0xaa8) & 0x3fff;
        *(arg1 + 0xaa8) = *(arg1 + 0xaa8) | in_stack_00000028 << 0x1e;
        fcn.000113e8(arg1_00,3,arg1_00);
        fcn.0001448c(arg1_00,0xc,auStackX_20,arg4);
        uVar2 = auStackX_20[0] >> 0x10;
        *(arg1 + 0xaac) = CONCAT22(auStackX_20[0] << 8 | auStackX_20[0] >> 8,uVar2 << 8 | uVar2 >> 8);
        uVar3 = fcn.0001475c(arg1,arg1_00,3,0x10);
    }
    return uVar3;
}


/* fcn.000144e0 @ 0x144e0 */

void fcn.000144e0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t auStackX_18 [4];
    
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 < 0xb)) {
        *(arg2 + 8 + arg3 * 0x10) = 0x400000;
        if (*(arg1 + 0x38) != 0) {
            auStackX_18[0] = arg3;
            fcn.000190c4(0x8008,1,auStackX_18,*(arg1 + 0x38));
        }
    }
    return;
}


/* fcn.0001452c @ 0x1452c */

int64_t fcn.0001452c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    ushort uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    ushort uVar7;
    uint32_t auStackX_10 [2];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else if (*(iVar2 + 0x40) == 0) {
        iVar3 = -0x7ffffffffffffffd;
    }
    else {
        uVar6 = 0;
        do {
            if (*(iVar2 + 0x38) == 0) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = fcn.0001908c(8,auStackX_10,*(iVar2 + 0x38));
            }
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar5 = auStackX_10[0] >> 0x10;
            if (3 < uVar5) {
                return -0x7ffffffffffffff9;
            }
            uVar4 = auStackX_10[0] >> 0x10;
            uVar7 = auStackX_10[0];
            if ((uVar5 + 1 & 3) != (auStackX_10[0] & 0xffff)) break;
            if (uVar6 == 0) {
                uVar1 = *(iVar2 + 0xae0);
                *(iVar2 + 0xab2 + uVar1 * 6) = uVar4;
                *(iVar2 + 0xab4 + uVar1 * 6) = uVar7;
            }
            (**(*0x193b0 + 0xf8))(10);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 200);
        if (uVar6 == 200) {
            iVar3 = -0x7fffffffffffffee;
        }
        else {
            uVar6 = *(iVar2 + 0xae0);
            *arg2 = uVar4;
            *(iVar2 + 0xab2 + uVar6 * 6) = uVar4;
            *(iVar2 + 0xab4 + uVar6 * 6) = uVar7;
            *arg3 = uVar5 * 0x100 + *(iVar2 + 0x40);
        }
    }
    return iVar3;
}


/* fcn.00014694 @ 0x14694 */

ulong fcn.00014694(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong uVar1;
    uint32_t auStackX_8 [2];
    
    uVar1 = 0;
    if ((arg1 == 0) || (3 < arg4)) {
        uVar1 = 0x8000000000000002;
    }
    else if (*(arg1 + 0x40) == 0) {
        uVar1 = 0x8000000000000003;
    }
    else {
        *(*(arg1 + 0x40) + 0xf08 + (arg4 & 0xffff) * 0x10) = (arg2 | 0x400) << 0xc | arg3 & 0xffff;
        auStackX_8[0] = arg4 * 0x10000 + 0x10000 & 0x30000;
        if (*(arg1 + 0x38) != 0) {
            fcn.000190c4(8,1,auStackX_8,*(arg1 + 0x38));
        }
        *(arg1 + (*(arg1 + 0xae0) + 0x1c8) * 6) = arg2;
        *(arg1 + 0xae0) = *(arg1 + 0xae0) + 1U & 7;
    }
    return uVar1;
}


/* fcn.0001404c @ 0x1404c */

int64_t fcn.0001404c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *arg1_00;
    int64_t *piStackX_8;
    
    if (arg1 == 0) {
        iVar5 = -0x7ffffffffffffffe;
        if (arg2 == 0) {
            return -0x7ffffffffffffffe;
        }
    }
    else {
        puVar3 = arg1 + 0x870;
        if ((*puVar3 != puVar3) && (arg1_00 = *puVar3, arg1_00 != NULL)) {
            *(*arg1_00 + 8) = arg1_00[1];
            *arg1_00[1] = *arg1_00;
            fcn.000102a0(arg1_00,0x20);
            iVar5 = 0;
            goto code_r0x000140cd;
        }
        iVar5 = -0x7ffffffffffffff7;
    }
    if (iVar5 < 0) {
        return iVar5;
    }
    arg1_00 = piStackX_8;
code_r0x000140cd:
    piVar1 = arg1 + 0x860;
    *(arg1_00 + 0x14) = *arg2 & 0x3f3f3f;
    *(arg1_00 + 2) = *(arg2 + 4) & 0x3f3f3f3f;
    *(arg1_00 + 3) = *(arg2 + 8) & 0x3f;
    *(arg1_00 + 0x1b) = *(arg2 + 8) >> 0x1f;
    *(arg1_00 + 0x19) = 5;
    if (*piVar1 != piVar1) {
        piVar4 = *(arg1 + 0x868);
        if ((piVar4 == NULL) || (piVar4 == piVar1)) {
            piVar4 = NULL;
        }
        if ((((piVar4 != NULL) && (arg1_00[2] == piVar4[2])) && (*(arg1_00 + 0x19) == *(piVar4 + 0x19))) &&
           (((arg1_00[3] == piVar4[3] && (*(piVar4 + 0x1a) == '\0')) && (*(arg1_00 + 0x1b) == *(piVar4 + 0x1b))))) {
            piVar1 = arg1 + 0x870;
            iVar2 = *piVar1;
            *arg1_00 = iVar2;
            arg1_00[1] = piVar1;
            *(iVar2 + 8) = arg1_00;
            *piVar1 = arg1_00;
            return iVar5;
        }
    }
    *arg1_00 = piVar1;
    puVar3 = *(arg1 + 0x868);
    arg1_00[1] = puVar3;
    *puVar3 = arg1_00;
    *(arg1 + 0x868) = arg1_00;
    return iVar5;
}


/* fcn.000148d0 @ 0x148d0 */

int64_t fcn.000148d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t arg3_00;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t *arg1_00;
    uint32_t *puVar6;
    uint64_t arg4_00;
    uint8_t uVar7;
    uint32_t uVar8;
    uint16_t *in_stack_00000028;
    uint32_t auStack_58 [2];
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint64_t uStack_48;
    
    if (((arg3 == 0) || (arg4 == 0)) || (in_stack_00000028 == NULL)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = *(arg1 + 0x40);
        if (iVar2 == 0) {
            iVar3 = -0x7ffffffffffffffd;
        }
        else {
            if (*(arg1 + 0x38) == 0) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = fcn.0001908c(0x8008,auStack_58,*(arg1 + 0x38));
            }
            if (-1 < iVar3) {
                uVar4 = auStack_58[0];
                uVar8 = 0;
                do {
                    uVar4 = (uVar4 + 1) % 0xb;
                    arg3_00 = uVar4;
                    iVar1 = uVar4 + 0xf4;
                    uVar5 = 0;
                    uStack_48 = uVar4;
                    do {
                        if ((*(iVar2 + 8 + iVar1 * 0x10) & 0x200000) != 0) break;
                        (**(*0x193b0 + 0xf8))(0x32);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < 200000);
                    if (199999 < uVar5) break;
                    uVar5 = *(iVar2 + 8 + iVar1 * 0x10);
                    arg4_00 = arg2 & 0xffffffff;
                    uVar7 = uVar5 >> 0xc & 0xf;
                    auStack_58[0] = uVar7;
                    if (auStack_58[0] != arg2) {
                        arg1_00 = (uStack_48 + 4) * 0x100 + iVar2;
                        puVar6 = arg1_00;
                        fcn.000113e8(arg1_00,uVar5 >> 2 & 0x3ff,arg1_00);
                        if (uVar7 == 3) {
                            if ((arg1_00[2] & 0xff) == 0) {
                                iVar3 = -0x7ffffffffffffffa;
                            }
                            else {
                                iVar3 = -0x7ffffffffffffff9;
                                if ((arg1_00[2] & 0xff) == 2) {
                                    iVar3 = -0x7ffffffffffffff2;
                                }
                            }
                            fcn.000144e0(arg1,iVar2 + 0xf40,arg3_00);
                            return iVar3;
                        }
                        if (uVar7 == 5) {
                            iVar3 = fcn.0001404c(arg1,arg1_00);
                            if (iVar3 == 0) {
                                uStack_4c = *arg1_00 & 0x3f3f3f;
                                uStack_50 = arg1_00[1] & 0x3f3f3f3f;
                                iVar3 = fcn.00014800(arg1,&uStack_50,
                                                     CONCAT71(puVar6 >> 8,arg1_00[2]) & 0xffffffffffffff3f,arg4_00);
                                if (-1 < iVar3) goto code_r0x00014a79;
                            }
                            iVar3 = 0;
                        }
code_r0x00014a79:
                        fcn.000144e0(arg1,iVar2 + 0xf40,arg3_00);
                    }
                    uVar8 = uVar8 + 1;
                    if (auStack_58[0] == arg2) {
                        if (uVar8 < 1000) {
                            *arg3 = arg3_00;
                            *arg4 = (uVar4 + 4) * 0x100 + iVar2;
                            *in_stack_00000028 = *(iVar2 + 8 + iVar1 * 0x10) & 0xfff;
                            return iVar3;
                        }
                        break;
                    }
                } while (uVar8 < 1000);
                iVar3 = -0x7fffffffffffffee;
            }
        }
    }
    return iVar3;
}


/* fcn.00014188 @ 0x14188 */

int64_t fcn.00014188(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t *arg1_00;
    uint64_t uVar5;
    uint32_t *puVar6;
    int64_t in_R9;
    int64_t iVar7;
    uint8_t uVar8;
    uint32_t auStackX_10 [2];
    
    if (arg2 == 0) {
        iVar7 = -0x7ffffffffffffffe;
    }
    else {
        piVar1 = arg1 + 0x860;
        if ((*piVar1 == piVar1) || (piVar1 = *piVar1, piVar1 == NULL)) {
            iVar4 = *(arg1 + 0x40);
            if (*(arg1 + 0x38) == 0) {
                iVar7 = -0x7ffffffffffffffe;
            }
            else {
                iVar7 = fcn.0001908c(0x8008,auStackX_10,*(arg1 + 0x38));
            }
            if (-1 < iVar7) {
                uVar5 = ((auStackX_10[0] & 0xffff) + 1) % 0xb;
                if (uVar5 != auStackX_10[0] >> 0x10) {
                    fcn.000102a0(arg2,0x20);
                    uVar3 = *(iVar4 + 8 + (uVar5 + 0xf4) * 0x10);
                    if ((uVar3 >> 0x15 & 1) != 0) {
                        uVar8 = uVar3 >> 0xc & 0xf;
                        *(arg2 + 0x19) = uVar8;
                        arg1_00 = (uVar5 + 4) * 0x100 + iVar4;
                        puVar6 = arg1_00;
                        fcn.000113e8(arg1_00,*(iVar4 + 8 + (uVar5 + 0xf4) * 0x10) >> 2 & 0x3ff,arg1_00);
                        *(arg2 + 0x14) = *arg1_00 & 0x3f3f3f;
                        *(arg2 + 0x10) = arg1_00[1] & 0x3f3f3f3f;
                        if (uVar8 == 5) {
                            iVar7 = fcn.00014800(arg1,arg2 + 0x10,
                                                 CONCAT71(puVar6 >> 8,arg1_00[2]) & 0xffffffffffffff3f,in_R9);
                            if (iVar7 < 0) {
                                return iVar7;
                            }
                            *(arg2 + 0x18) = arg1_00[2] & 0x3f;
                            *(arg2 + 0x1b) = arg1_00[2] >> 0x1f;
                        }
                        else if (uVar8 == 3) {
                            *(arg2 + 0x18) = arg1_00[2] >> 8 & 0x3f;
                            *(arg2 + 0x1a) = arg1_00[2];
                        }
                        iVar7 = 0;
                        fcn.000144e0(arg1,iVar4 + 0xf40,uVar5);
                        return iVar7;
                    }
                }
                iVar7 = -0x7ffffffffffffff2;
            }
        }
        else {
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            if (arg2 != piVar1) {
                section..text(arg2,piVar1,0x20);
            }
            piVar2 = arg1 + 0x870;
            iVar7 = 0;
            iVar4 = *piVar2;
            *piVar1 = iVar4;
            piVar1[1] = piVar2;
            *(iVar4 + 8) = piVar1;
            *piVar2 = piVar1;
        }
    }
    return iVar7;
}


/* fcn.00014d04 @ 0x14d04 */

int64_t fcn.00014d04(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t arg2_00;
    uint32_t arg1_00;
    uint in_register_00000014;
    int64_t *piVar4;
    int64_t *arg2_01;
    int64_t iVar5;
    unkbyte7 Var6;
    int64_t iVar7;
    int64_t iStackX_8;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    if (((arg1 == 0) || (piVar4 == NULL)) || (*(piVar4 + 0x19) != '\x05')) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = *(arg1 + 0xbd8);
        iVar7 = -0x7ffffffffffffffe;
        if (iVar5 == 0) {
            iVar3 = -0x7ffffffffffffffe;
            arg2_01 = piVar4;
        }
        else {
            arg2_01 = &iStackX_8;
            iVar3 = fcn.00011508(arg2 + 0x10,arg2_01,iVar5);
        }
        if (-1 < iVar3) {
            uVar1 = *(piVar4 + 3);
            iVar3 = CONCAT71(iVar5 >> 8,uVar1);
            if ((uVar1 <= *(iStackX_8 + 0x30)) && (uVar1 < 0x40)) {
                arg2_00 = iStackX_8;
                if (uVar1 == 0) {
                    if (*(iStackX_8 + 0x10) == 2) {
                        iVar3 = fcn.00015698(arg2_00,CONCAT71(arg2_01 >> 8,*(piVar4 + 0x1b) == '\0'));
                        return iVar3;
                    }
                }
                else {
                    iVar5 = uVar1 * 0x78;
                    iVar2 = *(iVar5 + 0x38 + iStackX_8);
                    if (iVar2 == 1) {
                        if (*(iVar5 + 0x38 + iStackX_8) == 1) {
                            if ((*(iVar5 + 0x58 + iStackX_8) & 1) == 0) {
                                return 0;
                            }
                            if (uVar1 == *(iStackX_8 + 0x1e38)) {
                                return 0;
                            }
                            iVar3 = *(iVar5 + 0x60 + iStackX_8);
                            Var6 = iVar5 >> 8;
                            if (*(piVar4 + 0x1b) == '\0') {
                                if (iVar3 != 0) {
                                    return 0;
                                }
                                iVar3 = fcn.00012c1c(arg2_00,CONCAT71(Var6,uVar1));
                                return iVar3;
                            }
                            if (iVar3 == 0) {
                                return 0;
                            }
                            if (*(iVar5 + 0x38 + iStackX_8) == 1) {
                                if (iVar3 == 0) {
                                    return 0;
                                }
                                fcn.00016724(arg2_00,CONCAT71(Var6,uVar1));
                                iVar3 = fcn.000116a8(iVar3);
                                return iVar3;
                            }
                        }
                    }
                    else if (iVar2 == 0xe0101 || iVar2 == 0xe0102) {
                        iVar2 = *(iVar5 + 0x38 + iStackX_8);
                        if (1 < iVar2 - 0xe0101U) {
                            return iVar7;
                        }
                        arg1_00 = *(iStackX_8 + 0x18);
                        if (*(piVar4 + 0x1b) == '\0') {
                            if (iVar2 == 0xe0101) {
                                iVar3 = fcn.00015e10(arg1_00,arg2_00,iVar3);
                                return iVar3;
                            }
                            iVar3 = fcn.00016100(arg1_00,arg2_00,iVar3);
                            return iVar3;
                        }
                        if (iVar2 == 0xe0101) {
                            iVar3 = fcn.00015f90(arg1_00,arg2_00,iVar3);
                            return iVar3;
                        }
                        iVar3 = fcn.00016270(arg1_00,arg2_00,iVar3);
                        return iVar3;
                    }
                }
            }
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.00011508 @ 0x11508 */

ulong fcn.00011508(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    uint in_R8;
    
    if (((CONCAT44(in_register_0000000c,arg1) == NULL) || (arg2 == 0)) || (*CONCAT44(in_R8,arg3) != 0x6d643475)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar2 = *(CONCAT44(in_R8,arg3) + 0x1e784);
        uVar3 = 0x800000000000000e;
        if (iVar2 != 0) {
            piVar1 = iVar2 + 0x1e60;
            piVar4 = piVar1;
            do {
                if (piVar4[-0x3cc] == *CONCAT44(in_register_0000000c,arg1)) {
                    *arg2 = piVar4 + -0x3cc;
                    return 0;
                }
                piVar4 = *piVar4;
            } while (piVar4 != piVar1);
        }
    }
    return uVar3;
}


/* fcn.00015698 @ 0x15698 */

int64_t fcn.00015698(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_18 [4];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = -0x7ffffffffffffffd;
    if (arg1_00 == 0) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else if (((*(arg1_00 + 0x10) == 2) && (*(arg1_00 + 0x1e40) != 0)) && (uVar3 = 0, *(arg1_00 + 0x1e42) != '\0')) {
        do {
            iVar2 = *(arg1_00 + 0x1e44) * uVar3;
            iVar2 = CONCAT22(iVar2 >> 0x10,iVar2 + *(arg1_00 + 0x1e43) + *(arg1_00 + 0x1e40));
            uVar1 = iVar2 + 0xad;
            iVar4 = fcn.00014ed0(arg1_00,uVar1 & 0xffff,CONCAT71(iVar4 >> 8,1),auStackX_8);
            if (iVar4 < 0) {
                return iVar4;
            }
            iVar4 = CONCAT71(iVar4 >> 8,1);
            if (arg2 == '\0') {
                auStackX_8[0] = auStackX_8[0] & 0x7fffffff;
code_r0x00015780:
                iVar4 = fcn.00014f30(arg1_00,uVar1 & 0xffff,iVar4,auStackX_8);
                if (iVar4 < 0) {
                    return iVar4;
                }
            }
            else {
                iVar4 = fcn.00014ed0(arg1_00,iVar2 + 0x2a,iVar4,auStackX_18);
                if (iVar4 < 0) {
                    return iVar4;
                }
                if (((auStackX_18[0] & 0x80000000) != 0) && (-1 < auStackX_8[0])) {
                    auStackX_8[0] = auStackX_8[0] | 0x80000000;
                    iVar4 = CONCAT71(iVar4 >> 8,1);
                    goto code_r0x00015780;
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1_00 + 0x1e42));
    }
    return iVar4;
}


/* fcn.00016724 @ 0x16724 */

int64_t fcn.00016724(uint32_t arg1,uint32_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint8_t uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    ulong uVar6;
    
    iVar5 = CONCAT44(in_register_00000014,arg2);
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = arg2;
    if ((iVar3 != 0) && (uVar4 != 0)) {
        if ((uVar4 <= *(iVar3 + 0x30)) &&
           (((uVar4 < 0x40 && (iVar5 = (arg2 & 0xff) * 0x78, *(iVar5 + 0x38 + iVar3) == 1)) &&
            (iVar5 = *(iVar5 + 0x60 + iVar3), iVar5 != 0)))) {
            fcn.000163c4(*(iVar3 + 0x18),iVar5);
        }
        if (uVar4 <= *(iVar3 + 0x30)) {
            if ((uVar4 < 0x40) && (*(uVar4 * 0x78 + 0x38 + iVar3) == 1)) {
                uVar1 = *(uVar4 * 0x78 + 0x6a + iVar3);
                iVar5 = CONCAT71(iVar5 >> 8,uVar1);
                iVar2 = fcn.00017eec(arg1,iVar5,0);
                if (-1 < iVar2) {
                    iVar5 = CONCAT71(iVar5 >> 8,uVar1);
                    iVar2 = fcn.00015138(arg1,iVar5,8);
                    if (-1 < iVar2) {
                        iVar5 = CONCAT71(iVar5 >> 8,uVar4);
                        fcn.00015138(arg1,iVar5,8);
                    }
                }
            }
            if ((uVar4 <= *(iVar3 + 0x30)) && (uVar4 < 0x40)) {
                if (*(uVar4 * 0x78 + 0x38 + iVar3) != 1) {
                    return -0x7ffffffffffffffd;
                }
                uVar1 = *(uVar4 * 0x78 + 0x69 + iVar3);
                uVar6 = CONCAT71(iVar5 >> 8,uVar1);
                iVar5 = fcn.00017618(arg1,uVar6,0);
                if (iVar5 < 0) {
                    return iVar5;
                }
                iVar3 = CONCAT71(uVar6 >> 8,uVar1);
                iVar5 = fcn.00015138(arg1,iVar3,8);
                if (iVar5 < 0) {
                    return iVar5;
                }
                iVar5 = fcn.00015138(arg1,CONCAT71(iVar3 >> 8,uVar4),9);
                return iVar5;
            }
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00015e10 @ 0x15e10 */

int64_t fcn.00015e10(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    int *piVar4;
    int64_t *piVar5;
    uint in_register_00000014;
    int64_t *arg1_00;
    ulong uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    int aiStackX_8 [2];
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = arg3;
    if (((piVar4 == NULL) || (arg1_00 == NULL)) || (*piVar4 != 0x6d643475)) {
code_r0x00015f70:
        iVar9 = -0x7ffffffffffffffe;
    }
    else {
        if (*arg1_00 == 0) {
            if (((uVar8 == 0) || (*(arg1_00 + 6) < uVar8)) ||
               ((0x3f < uVar8 || (arg1_00[(arg3 & 0xffU) * 0xf + 7] != 0xe0101)))) goto code_r0x00015f70;
            uVar3 = 0;
            puVar2 = piVar4 + 0x1e78a;
            do {
                if (((*(puVar2 + -8) != NULL) && (**(puVar2 + -8) == 0)) && (*puVar2 == uVar8)) {
                    return 0;
                }
                uVar3 = uVar3 + 1;
                puVar2 = puVar2 + 0x20;
            } while (uVar3 < 8);
            piVar5 = piVar4 + 0x1e78c;
            uVar3 = 0xffffffff;
            uVar1 = 0;
            do {
                uVar7 = uVar1;
                if (piVar5[-2] == 0) {
                    if (*piVar5 != 0) break;
                    if (uVar3 == 0xffffffff) {
                        uVar3 = uVar7;
                    }
                }
                uVar1 = uVar7 + 1;
                piVar5 = piVar5 + 4;
                uVar7 = uVar3;
            } while (uVar1 < 8);
            if (uVar7 != 0xffffffff) {
                aiStackX_8[0] = 0;
                uVar6 = 0;
                iVar9 = fcn.000169e0(arg1_00,0x10,arg3 & 0xff,aiStackX_8);
                if ((-1 < iVar9) && (aiStackX_8[0] == 0)) {
                    piVar4 = piVar4 + (uVar7 + 0x3cf1) * 8;
                    *piVar4 = arg1_00;
                    *(piVar4 + 2) = uVar8;
                    if (*(piVar4 + 4) == 0) {
                        return iVar9;
                    }
                    iVar9 = fcn.000170b8(arg1_00,CONCAT71(uVar6 >> 8,uVar8),*(piVar4 + 4),
                                         CONCAT71(iVar9 >> 8,piVar4[6]));
                    if (-1 < iVar9) {
                        *(piVar4 + 0x19) = 1;
                        return iVar9;
                    }
                    piVar4[0] = 0;
                    piVar4[1] = 0;
                    *(piVar4 + 2) = 0;
                    return iVar9;
                }
            }
        }
        iVar9 = -0x7ffffffffffffffd;
    }
    return iVar9;
}


/* fcn.00016100 @ 0x16100 */

int64_t fcn.00016100(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int *piVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    uint in_register_00000014;
    int64_t *arg3_00;
    int64_t arg2_00;
    uint32_t uVar6;
    uint8_t uVar7;
    uint8_t uStackX_8;
    
    arg3_00 = CONCAT44(in_register_00000014,arg2);
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = arg3;
    if (((((piVar3 == NULL) || (arg3_00 == NULL)) || (*piVar3 != 0x6d643475)) ||
        ((uVar7 == 0 || (*(arg3_00 + 6) < uVar7)))) || ((0x3f < uVar7 || (arg3_00[(arg3 & 0xff) * 0xf + 7] != 0xe0102)))
       ) {
        return -0x7ffffffffffffffe;
    }
    uVar5 = 0;
    piVar4 = piVar3 + 0x1e78c;
    do {
        if (((*piVar4 != NULL) && (**piVar4 == *arg3_00)) && (*(piVar4 + 1) == uVar7)) {
            return 0;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 4;
    } while (uVar5 < 8);
    piVar4 = piVar3 + 0x1e788;
    uVar5 = 0xffffffff;
    uVar1 = 0;
    do {
        uVar6 = uVar1;
        if (piVar4[2] == 0) {
            if (*piVar4 != 0) break;
            if (uVar5 == 0xffffffff) {
                uVar5 = uVar6;
            }
        }
        uVar1 = uVar6 + 1;
        piVar4 = piVar4 + 4;
        uVar6 = uVar5;
    } while (uVar1 < 8);
    if (uVar6 != 0xffffffff) {
        arg2_00 = CONCAT71(0xffffff,uVar7);
        iVar2 = fcn.00014f8c(arg2,arg2_00,*((arg3 & 0xff) * 0x78 + 0x4e + arg3_00) + 2,1);
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((uStackX_8 & 0x40) != 0) {
            piVar4 = piVar3 + (uVar6 + 0x3cf1) * 8;
            piVar4[2] = arg3_00;
            *(piVar4 + 3) = uVar7;
            if (*piVar4 == 0) {
                return iVar2;
            }
            iVar2 = fcn.000170b8(*piVar4,CONCAT71(arg2_00 >> 8,piVar4[1]),arg3_00,CONCAT71(iVar2 >> 8,uVar7));
            if (-1 < iVar2) {
                *(piVar4 + 0x19) = 1;
                return iVar2;
            }
            return iVar2;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00015f90 @ 0x15f90 */

int64_t fcn.00015f90(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int *piVar3;
    uint uVar4;
    uint in_register_00000014;
    int64_t *piVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = arg3;
    if (((piVar3 != NULL) && (CONCAT44(in_register_00000014,arg2) != 0)) && (*piVar3 == 0x6d643475)) {
        if (*CONCAT44(in_register_00000014,arg2) != 0) {
            return -0x7ffffffffffffffd;
        }
        if (((uVar8 != 0) && (uVar8 <= *(CONCAT44(in_register_00000014,arg2) + 0x30))) &&
           ((uVar8 < 0x40 && (*((arg3 & 0xffU) * 0x78 + 0x38 + CONCAT44(in_register_00000014,arg2)) == 0xe0101)))) {
            uVar7 = 0;
            piVar5 = piVar3 + 0x1e788;
            do {
                piVar2 = piVar5;
                if ((*piVar2 == CONCAT44(in_register_00000014,arg2)) && (*(piVar2 + 1) == uVar8)) break;
                uVar7 = uVar7 + 1;
                piVar5 = piVar2 + 4;
            } while (uVar7 < 8);
            if (uVar7 == 8) {
                return 0;
            }
            *piVar2 = 0;
            *(piVar2 + 1) = 0;
            if (*(piVar2 + 0x19) == '\0') {
                return 0;
            }
            uVar4 = CONCAT31(arg2 >> 8,uVar8);
            fcn.00017184(CONCAT44(in_register_00000014,arg2),CONCAT44(in_register_00000014,uVar4),piVar2[2],
                         *(piVar2 + 3));
            *(piVar2 + 0x19) = 0;
            if (extraout_RAX < 0) {
                return extraout_RAX;
            }
            uVar6 = 0;
            piVar5 = piVar3 + 0x1e78c;
            iVar9 = extraout_RAX;
            do {
                if (((uVar6 != uVar7) && (piVar5[-2] != 0)) && (*piVar5 == 0)) {
                    arg3_00 = piVar2[2];
                    uVar4 = CONCAT31(uVar4 >> 8,piVar5[-1]);
                    *piVar5 = arg3_00;
                    iVar1 = piVar2[3];
                    *(piVar5 + 1) = iVar1;
                    fcn.000170b8(piVar5[-2],CONCAT44(in_register_00000014,uVar4),arg3_00,CONCAT71(iVar9 >> 8,iVar1)
                                );
                    if (-1 < extraout_RAX_00) {
                        piVar2[2] = 0;
                        *(piVar2 + 3) = 0;
                        *(piVar5 + 9) = 1;
                        return extraout_RAX_00;
                    }
                    *piVar5 = 0;
                    *(piVar5 + 1) = 0;
                    iVar9 = extraout_RAX_00;
                }
                uVar6 = uVar6 + 1;
                piVar5 = piVar5 + 4;
            } while (uVar6 < 8);
            return iVar9;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00016270 @ 0x16270 */

int64_t fcn.00016270(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint8_t *puVar1;
    int64_t arg1_00;
    uint8_t *puVar2;
    uint8_t *puVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int *piVar4;
    uint uVar5;
    uint in_register_00000014;
    int64_t *piVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint8_t uVar9;
    int64_t iVar10;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar10 = 0;
    if ((((piVar4 == NULL) || (CONCAT44(in_register_00000014,arg2) == 0)) || (*piVar4 != 0x6d643475)) ||
       (((uVar9 = arg3, uVar9 == 0 || (*(CONCAT44(in_register_00000014,arg2) + 0x30) < uVar9)) ||
        ((0x3f < uVar9 || (*((arg3 & 0xff) * 0x78 + 0x38 + CONCAT44(in_register_00000014,arg2)) != 0xe0102)))))) {
        iVar10 = -0x7ffffffffffffffe;
    }
    else {
        uVar8 = 0;
        puVar2 = piVar4 + 0x1e78e;
        do {
            puVar3 = puVar2;
            puVar1 = puVar3 + -0x18;
            if ((*(puVar3 + -8) == CONCAT44(in_register_00000014,arg2)) && (*puVar3 == uVar9)) break;
            uVar8 = uVar8 + 1;
            puVar2 = puVar3 + 0x20;
        } while (uVar8 < 8);
        if (uVar8 != 8) {
            puVar3[-8] = 0;
            puVar3[-7] = 0;
            puVar3[-6] = 0;
            puVar3[-5] = 0;
            puVar3[-4] = 0;
            puVar3[-3] = 0;
            puVar3[-2] = 0;
            puVar3[-1] = 0;
            *puVar3 = 0;
            if (puVar3[1] != 0) {
                uVar5 = CONCAT31(arg2 >> 8,puVar3[-0x10]);
                fcn.00017184(*puVar1,CONCAT44(in_register_00000014,uVar5),arg2,uVar9);
                puVar3[1] = 0;
                iVar10 = extraout_RAX;
                if (-1 < extraout_RAX) {
                    uVar7 = 0;
                    piVar6 = piVar4 + 0x1e788;
                    do {
                        if (((uVar7 != uVar8) && (piVar6[2] != 0)) && (*piVar6 == 0)) {
                            arg1_00 = *puVar1;
                            *piVar6 = arg1_00;
                            uVar5 = CONCAT31(uVar5 >> 8,puVar3[-0x10]);
                            *(piVar6 + 1) = puVar3[-0x10];
                            fcn.000170b8(arg1_00,CONCAT44(in_register_00000014,uVar5),piVar6[2],
                                         CONCAT71(iVar10 >> 8,piVar6[3]));
                            if (-1 < extraout_RAX_00) {
                                puVar1[0] = 0;
                                puVar1[1] = 0;
                                puVar1[2] = 0;
                                puVar1[3] = 0;
                                puVar1[4] = 0;
                                puVar1[5] = 0;
                                puVar1[6] = 0;
                                puVar1[7] = 0;
                                puVar3[-0x10] = 0;
                                *(piVar6 + 0x19) = 1;
                                return extraout_RAX_00;
                            }
                            *piVar6 = 0;
                            *(piVar6 + 1) = 0;
                            iVar10 = extraout_RAX_00;
                        }
                        uVar7 = uVar7 + 1;
                        piVar6 = piVar6 + 4;
                    } while (uVar7 < 8);
                }
            }
        }
    }
    return iVar10;
}


/* fcn.000157bc @ 0x157bc */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000157bc(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int iVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint uVar6;
    uint in_register_00000014;
    int64_t iVar7;
    unkbyte7 in_R9;
    uint32_t uVar8;
    int64_t var_48h;
    int64_t var_58h;
    uint uStack_48;
    int64_t var_10h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = arg2;
    if (((uVar5 == 0) || (*(iVar3 + 0x30) < uVar5)) || (0x3f < uVar5)) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else if (((*(iVar3 + 0x10) == 3) &&
             (iVar7 = uVar5 * 0x78, iVar2 = *(iVar7 + 0x38 + iVar3), iVar2 == 0xe0101 || iVar2 == 0xe0102)) &&
            (iVar1 = *(iVar7 + 0x50 + iVar3), iVar1 != 0)) {
        fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),iVar1 + 2,CONCAT71(in_R9,1));
        iVar4 = extraout_RAX;
        if (-1 < extraout_RAX) {
            uVar6 = CONCAT31(arg2 >> 8,uVar5);
            fcn.00015000(arg1,CONCAT44(in_register_00000014,uVar6),*(iVar7 + 0x50 + iVar3) + 2,CONCAT71(in_R9,1));
            iVar4 = extraout_RAX_00;
            if (-1 < extraout_RAX_00) {
                uVar6 = CONCAT31(uVar6 >> 8,uVar5);
                fcn.00014f8c(arg1,CONCAT44(in_register_00000014,uVar6),*(iVar7 + 0x50 + iVar3) + 1,
                             CONCAT71(in_R9,1));
                iVar4 = extraout_RAX_01;
                if (-1 < extraout_RAX_01) {
                    uVar6 = CONCAT31(uVar6 >> 8,uVar5);
                    fcn.00015000(arg1,CONCAT44(in_register_00000014,uVar6),*(iVar7 + 0x50 + iVar3) + 1,
                                 CONCAT71(in_R9,1));
                    iVar4 = extraout_RAX_02;
                    if (-1 < extraout_RAX_02) {
                        uVar8 = 0;
                        do {
                            uVar6 = CONCAT31(uVar6 >> 8,uVar5);
                            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,uVar6),*(iVar7 + 0x50 + iVar3) + 1,
                                         CONCAT71(in_R9,1));
                            if (extraout_RAX_03 < 0) {
                                return extraout_RAX_03;
                            }
                            (**(*0x193b0 + 0xf8))(500);
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < 100);
                        if (uVar8 == 100) {
                            iVar4 = -0x7fffffffffffffee;
                        }
                        else {
                            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,CONCAT31(uVar6 >> 8,uVar5)),
                                         *(iVar7 + 0x50 + iVar3) + 4,CONCAT71(in_R9,1));
                            iVar4 = extraout_RAX_04;
                            if (-1 < extraout_RAX_04) {
                                *arg3 = uStack_48;
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.000159b8 @ 0x159b8 */

int64_t fcn.000159b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int iVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    uint32_t arg1_00;
    uint8_t uVar3;
    unkbyte7 Var4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int64_t var_40h;
    
    uVar7 = arg4 >> 0x20;
    uVar3 = arg2;
    Var4 = arg2 >> 8;
    if ((((arg1 == 0) || (uVar3 == 0)) || (*(arg1 + 0x30) < uVar3)) || (0x3f < uVar3)) {
        iVar5 = -0x7ffffffffffffffe;
    }
    else if (((*(arg1 + 0x10) == 3) &&
             (iVar8 = (arg2 & 0xffU) * 0x78, iVar2 = *(iVar8 + 0x38 + arg1), iVar2 == 0xe0101 || iVar2 == 0xe0102)) &&
            (iVar1 = *(iVar8 + 0x50 + arg1), iVar1 != 0)) {
        uVar6 = CONCAT31(arg4 >> 8,1);
        arg1_00 = arg1;
        fcn.00014f8c(arg1_00,arg2,iVar1 + 2,CONCAT44(uVar7,uVar6));
        iVar5 = extraout_RAX;
        if (-1 < extraout_RAX) {
            uVar6 = CONCAT31(uVar6 >> 8,1);
            fcn.00015000(arg1_00,CONCAT71(Var4,uVar3),*(iVar8 + 0x50 + arg1) + 2,CONCAT44(uVar7,uVar6));
            iVar5 = extraout_RAX_00;
            if (-1 < extraout_RAX_00) {
                uVar6 = CONCAT31(uVar6 >> 8,1);
                fcn.00015000(arg1_00,CONCAT71(Var4,uVar3),*(iVar8 + 0x50 + arg1) + 3,CONCAT44(uVar7,uVar6));
                iVar5 = extraout_RAX_01;
                if (-1 < extraout_RAX_01) {
                    uVar6 = CONCAT31(uVar6 >> 8,1);
                    fcn.00014f8c(arg1_00,CONCAT71(Var4,uVar3),*(iVar8 + 0x50 + arg1) + 1,CONCAT44(uVar7,uVar6));
                    iVar5 = extraout_RAX_02;
                    if (-1 < extraout_RAX_02) {
                        uVar6 = CONCAT31(uVar6 >> 8,1);
                        fcn.00015000(arg1_00,CONCAT71(Var4,uVar3),*(iVar8 + 0x50 + arg1) + 1,CONCAT44(uVar7,uVar6))
                        ;
                        iVar5 = extraout_RAX_03;
                        if (-1 < extraout_RAX_03) {
                            uVar9 = 0;
                            do {
                                uVar6 = CONCAT31(uVar6 >> 8,1);
                                fcn.00014f8c(arg1_00,CONCAT71(Var4,uVar3),*(iVar8 + 0x50 + arg1) + 1,
                                             CONCAT44(uVar7,uVar6));
                                if (extraout_RAX_04 < 0) {
                                    return extraout_RAX_04;
                                }
                                (**(*0x193b0 + 0xf8))(500);
                                uVar9 = uVar9 + 1;
                            } while (uVar9 < 100);
                            iVar5 = extraout_RAX_04;
                            if (uVar9 == 100) {
                                iVar5 = -0x7fffffffffffffee;
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        iVar5 = -0x7ffffffffffffffd;
    }
    return iVar5;
}


/* fcn.000169e0 @ 0x169e0 */

int64_t fcn.000169e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint uVar4;
    uint32_t uStackX_20;
    uint32_t uStackX_24;
    
    uStackX_20 = arg3;
    uVar4 = arg3 >> 0x20;
    if (arg4 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        uStackX_24 = arg2 & 0xffff | 0x80000000;
        uVar3 = CONCAT31(arg3 >> 8,2);
        fcn.00014f30(arg1,0x19,CONCAT44(uVar4,uVar3),&uStackX_20);
        iVar1 = extraout_RAX;
        if (-1 < extraout_RAX) {
            uVar2 = 0;
            do {
                uVar3 = CONCAT31(uVar3 >> 8,1);
                fcn.00014ed0(arg1,0x1a,CONCAT44(uVar4,uVar3),&uStackX_24);
                if (extraout_RAX_00 < 0) {
                    return extraout_RAX_00;
                }
                iVar1 = extraout_RAX_00;
                if (-1 < uStackX_24) {
                    if ((uStackX_24 >> 0x1e & 1) == 0) {
                        *arg4 = uStackX_24 >> 0x18 & 0x3f;
                    }
                    else {
                        iVar1 = -0x7ffffffffffffffd;
                    }
                    break;
                }
                (**(*0x193b0 + 0xf8))(10);
                uVar2 = uVar2 + 1;
            } while (uVar2 < 3000);
            if (uVar2 == 3000) {
                iVar1 = -0x7fffffffffffffee;
            }
        }
    }
    return iVar1;
}


/* fcn.000170b8 @ 0x170b8 */

int64_t fcn.000170b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar uVar2;
    int64_t iVar3;
    int *arg4_00;
    int64_t arg4_01;
    int aiStackX_8 [2];
    
    uVar2 = arg2;
    if ((arg1 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        arg4_00 = aiStackX_8;
        iVar1 = fcn.000169e0(arg1,0x11,arg2 & 0xff,arg4_00);
        if ((iVar1 < 0) || (aiStackX_8[0] != 0)) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar3 = arg3;
            iVar1 = fcn.00016ac4(arg1,arg3);
            if (-1 < iVar1) {
                arg4_01 = CONCAT71(arg4_00 >> 8,arg4);
                iVar3 = CONCAT71(iVar3 >> 8,uVar2);
                iVar1 = fcn.00016c9c(arg1,iVar3,arg3,arg4_01);
                if (-1 < iVar1) {
                    iVar3 = CONCAT71(iVar3 >> 8,uVar2);
                    iVar1 = fcn.00016ef4(arg1,iVar3,arg3,arg4_01);
                    if (-1 < iVar1) {
                        iVar1 = fcn.00018b88(arg1,CONCAT71(iVar3 >> 8,uVar2),arg3,CONCAT71(arg4_01 >> 8,arg4));
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00017184 @ 0x17184 */

ulong fcn.00017184(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint in_R8;
    uint64_t *arg3_00;
    uchar auStackX_8 [8];
    uint64_t *in_stack_00000030;
    
    arg3_00 = CONCAT44(in_R8,arg3);
    uVar2 = arg4;
    if ((arg1 == 0) || (arg3_00 == NULL)) {
        return 0x8000000000000002;
    }
    uVar4 = arg2;
    if (in_stack_00000030 != NULL) {
        uVar1 = in_stack_00000030[1];
        if (uVar1 <= *(arg1 + 8)) {
            return 0;
        }
        if ((arg3_00[1] < uVar1) || (uVar4 = (1LL << ((uVar1 & 7) << 3)) - 1U & *arg3_00, uVar4 != *in_stack_00000030))
        {
            return 0x8000000000000003;
        }
    }
    uVar3 = CONCAT71(uVar4 >> 8,arg2);
    fcn.00018968(arg1,uVar3,0);
    if (in_stack_00000030 == NULL) {
        uVar3 = CONCAT71(uVar3 >> 8,uVar2);
        fcn.00018968(arg3,uVar3,0);
    }
    fcn.00018c9c(arg1,CONCAT71(uVar3 >> 8,arg2),arg3_00,CONCAT71(arg4 >> 8,uVar2));
    uVar3 = fcn.000169e0(arg1,0x12,arg2 & 0xff,auStackX_8);
    return uVar3;
}


/* fcn.00011fc4 @ 0x11fc4 */

int64_t fcn.00011fc4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    unkbyte7 Var2;
    uint32_t auStackX_18 [4];
    
    Var2 = arg3 >> 8;
    auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,arg3);
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.00014ed0(arg1,5,CONCAT71(Var2,1),auStackX_18);
        iVar1 = extraout_RAX;
        if (-1 < extraout_RAX) {
            auStackX_18[0] = auStackX_18[0] | arg2 & 0x87800007;
            fcn.00014f30(arg1,5,CONCAT71(Var2,1),auStackX_18);
            iVar1 = extraout_RAX_00;
        }
    }
    return iVar1;
}


/* fcn.00018000 @ 0x18000 */

int64_t fcn.00018000(uint32_t arg1,uint32_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    uint32_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    unkbyte7 in_R8;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = arg2;
    if ((((iVar3 == 0) || (uVar6 == 0)) || (*(iVar3 + 0x30) < uVar6)) || (0x3f < uVar6)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = (arg2 & 0xff) * 0x78;
        if ((*(iVar5 + 0x38 + iVar3) == 1) && (iVar2 = *(iVar5 + 0x60 + iVar3), iVar2 != 0)) {
            uVar1 = *(iVar5 + 0x6a + iVar3);
            uVar4 = CONCAT31(arg2 >> 8,uVar1);
            fcn.00017b58(arg1,uVar4,CONCAT71(in_R8,uVar6));
            iVar3 = extraout_RAX;
            if (-1 < extraout_RAX) {
                uVar7 = CONCAT31(uVar4 >> 8,*(iVar2 + 0x1e38));
                uVar4 = iVar2;
                fcn.00017d7c(uVar4,uVar7,CONCAT71(in_R8,*(iVar2 + 0x1e39)));
                iVar3 = extraout_RAX_00;
                if (-1 < extraout_RAX_00) {
                    uVar7 = CONCAT31(uVar7 >> 8,*(iVar2 + 0x1e39));
                    fcn.00017b58(uVar4,uVar7,CONCAT71(in_R8,*(iVar2 + 0x1e38)));
                    iVar3 = extraout_RAX_01;
                    if (-1 < extraout_RAX_01) {
                        uVar7 = CONCAT31(uVar7 >> 8,uVar6);
                        fcn.00017d7c(arg1,uVar7,CONCAT71(in_R8,uVar1));
                        iVar3 = extraout_RAX_02;
                        if (-1 < extraout_RAX_02) {
                            uVar7 = CONCAT31(uVar7 >> 8,uVar1);
                            fcn.00017eec(arg1,uVar7,CONCAT71(in_R8,1));
                            iVar3 = extraout_RAX_03;
                            if (-1 < extraout_RAX_03) {
                                fcn.00017eec(uVar4,CONCAT31(uVar7 >> 8,*(iVar2 + 0x1e39)),CONCAT71(in_R8,1));
                                iVar3 = extraout_RAX_04;
                            }
                        }
                    }
                }
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.000155c4 @ 0x155c4 */

int64_t fcn.000155c4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar2;
    uint8_t uVar3;
    unkbyte7 in_R8;
    uint32_t auStackX_10 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg2);
    iVar1 = -0x7ffffffffffffffd;
    if (arg1_00 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (((*(arg1_00 + 0x10) == 3) && (*(arg1_00 + 0x1e40) != 0)) && (uVar3 = 0, *(arg1_00 + 0x1e42) != '\0')) {
        while( true ) {
            uVar2 = *(arg1_00 + 0x1e44) * uVar3 + *(arg1_00 + 0x1e43) + *(arg1_00 + 0x1e40) + 0xad;
            fcn.00014ed0(arg1_00,uVar2,CONCAT71(in_R8,1),auStackX_10);
            iVar1 = extraout_RAX;
            if (extraout_RAX < 0) break;
            auStackX_10[0] = auStackX_10[0] | 0x80000000;
            fcn.00014f30(arg1_00,uVar2,CONCAT71(in_R8,1),auStackX_10);
            if (extraout_RAX_00 < 0) {
                return extraout_RAX_00;
            }
            uVar3 = uVar3 + 1;
            if (*(arg1_00 + 0x1e42) <= uVar3) {
                return extraout_RAX_00;
            }
        }
    }
    return iVar1;
}


/* fcn.00017a30 @ 0x17a30 */

int64_t fcn.00017a30(uint32_t arg1,uint32_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t extraout_RAX;
    uint32_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    ulong in_R8;
    unkbyte7 in_R9;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = arg2;
    if ((((iVar3 == 0) || (uVar6 == 0)) || (*(iVar3 + 0x30) < uVar6)) || (0x3f < uVar6)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = (arg2 & 0xff) * 0x78;
        if ((*(iVar5 + 0x38 + iVar3) == 1) && (iVar2 = *(iVar5 + 0x60 + iVar3), iVar2 != 0)) {
            uVar1 = *(iVar5 + 0x69 + iVar3);
            iVar5 = CONCAT71(in_R8 >> 8,uVar6);
            uVar4 = CONCAT31(arg2 >> 8,uVar1);
            iVar3 = fcn.00017280(arg1,uVar4,iVar5);
            if (-1 < iVar3) {
                iVar5 = CONCAT71(iVar5 >> 8,*(iVar2 + 0x1e3a));
                uVar7 = CONCAT31(uVar4 >> 8,*(iVar2 + 0x1e38));
                uVar4 = iVar2;
                iVar3 = fcn.000174a8(uVar4,uVar7,iVar5);
                if (-1 < iVar3) {
                    iVar5 = CONCAT71(iVar5 >> 8,*(iVar2 + 0x1e38));
                    uVar7 = CONCAT31(uVar7 >> 8,*(iVar2 + 0x1e3a));
                    iVar3 = fcn.00017280(uVar4,uVar7,iVar5);
                    if (-1 < iVar3) {
                        iVar5 = CONCAT71(iVar5 >> 8,uVar1);
                        uVar7 = CONCAT31(uVar7 >> 8,uVar6);
                        iVar3 = fcn.000174a8(arg1,uVar7,iVar5);
                        if (-1 < iVar3) {
                            iVar5 = CONCAT71(iVar5 >> 8,1);
                            uVar7 = CONCAT31(uVar7 >> 8,uVar1);
                            iVar3 = fcn.00017618(arg1,uVar7,iVar5);
                            if (-1 < iVar3) {
                                uVar7 = CONCAT31(uVar7 >> 8,*(iVar2 + 0x1e3a));
                                iVar3 = fcn.00017618(uVar4,uVar7,CONCAT71(iVar5 >> 8,1));
                                if (-1 < iVar3) {
                                    fcn.0001793c(arg1,CONCAT31(uVar7 >> 8,uVar1),uVar4,
                                                 CONCAT71(in_R9,*(iVar2 + 0x1e3a)));
                                    iVar3 = extraout_RAX;
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.000163c4 @ 0x163c4 */

ulong fcn.000163c4(uint32_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    bool bVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int *piVar4;
    uint64_t arg2_00;
    int64_t *piVar5;
    int64_t arg1_00;
    uint32_t uVar6;
    uchar uVar7;
    int64_t iVar8;
    uchar uStackX_8;
    unkbyte7 StackX_9;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (((piVar4 == NULL) || (arg2 == 0)) || (*piVar4 != 0x6d643475)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        arg1_00 = CONCAT71(StackX_9,uStackX_8);
        piVar5 = piVar4 + 0x1e78c;
        uVar6 = 0;
        iVar8 = CONCAT71(StackX_9,uStackX_8);
        arg2_00 = arg2;
        uVar7 = uStackX_8;
        do {
            bVar2 = false;
            if (*(piVar5 + 9) != '\0') {
                arg1_00 = piVar5[-2];
                uStackX_8 = piVar5[-1];
                iVar8 = *piVar5;
                uVar7 = piVar5[1];
            }
            puVar1 = piVar5[-2];
            if (((puVar1 != NULL) && (*(arg2 + 8) <= puVar1[1])) &&
               (arg2_00 = (1LL << ((*(arg2 + 8) & 7) << 3)) - 1U & *puVar1, arg2_00 == *arg2)) {
                piVar5[-2] = 0;
                bVar2 = true;
                *(piVar5 + -1) = 0;
            }
            puVar1 = *piVar5;
            if (((puVar1 != NULL) && (*(arg2 + 8) <= puVar1[1])) &&
               (arg2_00 = (1LL << ((*(arg2 + 8) & 7) << 3)) - 1U & *puVar1, arg2_00 == *arg2)) {
                *piVar5 = 0;
                bVar2 = true;
                *(piVar5 + 1) = 0;
            }
            if ((*(piVar5 + 9) != '\0') && (bVar2)) {
                arg2_00 = CONCAT71(arg2_00 >> 8,uStackX_8);
                uVar3 = fcn.00017184(arg1_00,arg2_00,iVar8,CONCAT71(puVar1 >> 8,uVar7));
                *(piVar5 + 9) = 0;
            }
            uVar6 = uVar6 + 1;
            piVar5 = piVar5 + 4;
        } while (uVar6 < 8);
    }
    return uVar3;
}


/* fcn.00017eec @ 0x17eec */

int64_t fcn.00017eec(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    uint uVar6;
    uint in_register_00000014;
    int64_t iVar7;
    unkbyte7 in_R9;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = arg2;
    if ((((iVar4 == 0) || (uVar5 == 0)) || (*(iVar4 + 0x30) < uVar5)) || (0x3f < uVar5)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar7 = (arg2 & 0xff) * 0x78;
        if ((*(iVar7 + 0x38 + iVar4) - 0x100101U < 2) && (uVar2 = *(iVar7 + 0x4e + iVar4), uVar2 != 0)) {
            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar2,CONCAT71(in_R9,1));
            iVar3 = extraout_RAX;
            if (-1 < extraout_RAX) {
                uVar6 = CONCAT31(arg2 >> 8,uVar5);
                fcn.00015000(arg1,CONCAT44(in_register_00000014,uVar6),*(iVar7 + 0x4e + iVar4),CONCAT71(in_R9,1));
                iVar3 = extraout_RAX_00;
                if (-1 < extraout_RAX_00) {
                    fcn.00014f8c(arg1,CONCAT44(in_register_00000014,CONCAT31(uVar6 >> 8,uVar5)),
                                 *(iVar7 + 0x4e + iVar4),CONCAT71(in_R9,1));
                    iVar3 = extraout_RAX_01;
                    if (-1 < extraout_RAX_01) {
                        puVar1 = iVar7 + 0x58 + iVar4;
                        *puVar1 = *puVar1 & 0xfffffffe;
                        puVar1 = iVar7 + 0x58 + iVar4;
                        *puVar1 = *puVar1 | arg3 != '\0';
                    }
                }
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.00015138 @ 0x15138 */

ulong fcn.00015138(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int16_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    uint32_t auStackX_8 [2];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = arg2;
    if (iVar4 != 0) {
        if ((*(iVar4 + 0x18) == 0) || (puVar1 = *(*(iVar4 + 0x18) + 0x79f20), puVar1 == NULL)) {
            return 0x8000000000000003;
        }
        if (uVar5 <= *(iVar4 + 0x30)) {
            iVar2 = arg3 * 2;
            (**puVar1)(puVar1,iVar4,0,uVar5,iVar2,2,auStackX_8,0);
            auStackX_8[0] = auStackX_8[0] & 0x7fffffff;
            uVar3 = (*puVar1[1])(puVar1,iVar4,0,uVar5,iVar2,2,auStackX_8);
            return uVar3;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00017618 @ 0x17618 */

int64_t fcn.00017618(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    uint uVar6;
    uint in_register_00000014;
    int64_t iVar7;
    unkbyte7 in_R9;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = arg2;
    if ((((iVar4 == 0) || (uVar5 == 0)) || (*(iVar4 + 0x30) < uVar5)) || (0x3f < uVar5)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar7 = (arg2 & 0xff) * 0x78;
        if ((*(iVar7 + 0x38 + iVar4) - 0x200101U < 2) && (uVar2 = *(iVar7 + 0x4e + iVar4), uVar2 != 0)) {
            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),uVar2,CONCAT71(in_R9,3));
            iVar3 = extraout_RAX;
            if (-1 < extraout_RAX) {
                uVar6 = CONCAT31(arg2 >> 8,uVar5);
                fcn.00015000(arg1,CONCAT44(in_register_00000014,uVar6),*(iVar7 + 0x4e + iVar4),CONCAT71(in_R9,3));
                iVar3 = extraout_RAX_00;
                if (-1 < extraout_RAX_00) {
                    fcn.00015000(arg1,CONCAT44(in_register_00000014,CONCAT31(uVar6 >> 8,uVar5)),
                                 *(iVar7 + 0x4e + iVar4),CONCAT71(in_R9,3));
                    iVar3 = extraout_RAX_01;
                    if (-1 < extraout_RAX_01) {
                        puVar1 = iVar7 + 0x58 + iVar4;
                        *puVar1 = *puVar1 & 0xfffffffe;
                        puVar1 = iVar7 + 0x58 + iVar4;
                        *puVar1 = *puVar1 | arg3 != '\0';
                    }
                }
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.00015bb4 @ 0x15bb4 */

int64_t fcn.00015bb4(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *arg3;
    uint32_t auStackX_8 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    if (arg1_00 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (*(arg1_00 + 0x10) == 3) {
        uVar3 = 0;
        do {
            uVar2 = uVar3;
            if (0x3f < uVar2) {
                return iVar1;
            }
            if ((*(uVar3 * 0x78 + 0x38 + arg1_00) - 0xe0101U < 2) && (*(uVar3 * 0x78 + 0x50 + arg1_00) != 0)) {
                arg3 = auStackX_8;
                iVar1 = fcn.000157bc(arg1,CONCAT71(iVar1 >> 8,uVar2),arg3);
                if (iVar1 < 0) {
                    return iVar1;
                }
                auStackX_8[0] = auStackX_8[0] & 0xfffffff0;
                iVar1 = fcn.000159b8(arg1_00,CONCAT71(iVar1 >> 8,uVar2),arg3,auStackX_8[0]);
                if (iVar1 < 0) {
                    return iVar1;
                }
            }
            uVar3 = uVar2 + 1;
        } while (uVar2 + 1 <= *(arg1_00 + 0x30));
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00015c68 @ 0x15c68 */

int64_t fcn.00015c68(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    uint in_register_0000000c;
    int64_t iVar2;
    unkbyte7 Var3;
    int64_t iVar4;
    uint32_t uVar5;
    unkbyte7 in_R9;
    uint32_t uStackX_18;
    uchar uStackX_22;
    uint uStackX_20;
    
    Var3 = arg2 >> 8;
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 0) {
        return -0x7ffffffffffffffe;
    }
    if ((((*(iVar2 + 0x10) == 3) && (uVar1 = *(iVar2 + 0x1e3b), uVar1 != 0)) && (uVar1 <= *(iVar2 + 0x30))) &&
       ((uVar1 < 0x40 && (iVar4 = uVar1 * 0x78, *(iVar2 + 0x52 + iVar4) != 0)))) {
        fcn.00015000(arg1,CONCAT71(Var3,uVar1),*(iVar2 + 0x52 + iVar4) + 0x11,CONCAT71(in_R9,1));
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        uVar5 = 0;
        do {
            fcn.00014f8c(arg1,CONCAT71(Var3,uVar1),*(iVar2 + 0x52 + iVar4) + 0x11,CONCAT71(in_R9,1));
            if (extraout_RAX_00 < 0) {
                return extraout_RAX_00;
            }
            (**(*0x193b0 + 0xf8))(500);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 200);
        if (uVar5 == 200) {
            return -0x7fffffffffffffee;
        }
        fcn.00014f8c(arg1,CONCAT71(Var3,uVar1),*(iVar2 + 0x52 + iVar4) + 0x12,CONCAT71(in_R9,1));
        if (extraout_RAX_01 < 0) {
            return extraout_RAX_01;
        }
        if ((uStackX_18 & 0x20000000) != 0) {
            fcn.00014f8c(arg1,CONCAT71(Var3,uVar1),*(iVar2 + 0x52 + iVar4) + 1,CONCAT71(in_R9,1));
            if (extraout_RAX_02 < 0) {
                return extraout_RAX_02;
            }
            *arg2 = uStackX_22;
            return extraout_RAX_02;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00016ac4 @ 0x16ac4 */

int64_t fcn.00016ac4(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint in_register_00000014;
    int64_t *piVar3;
    uint8_t uVar4;
    bool bVar5;
    bool bVar6;
    uint32_t auStackX_8 [2];
    uint32_t var_bp_20h;
    int64_t var_30h;
    
    piVar3 = CONCAT44(in_register_00000014,arg2);
    iVar2 = 0;
    if ((arg1 == 0) || (piVar3 == NULL)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar4 = *(arg1 + 8);
        bVar5 = uVar4 < *(piVar3 + 1);
        bVar6 = uVar4 == *(piVar3 + 1);
        while ((bVar5 || bVar6 && (uVar4 < 6))) {
            if (*arg1 != 0) {
                if (arg1 != piVar3) {
                    if (*(arg1 + 0x1e3c) == 0) {
                        return -0x7ffffffffffffffd;
                    }
                    iVar2 = fcn.00014ed0(arg1,*(arg1 + 0x1e3c),CONCAT71(iVar2 >> 8,1),auStackX_8);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    auStackX_8[0] = auStackX_8[0] | 0x8000000;
                    iVar2 = fcn.00014f30(arg1,*(arg1 + 0x1e3c),CONCAT71(iVar2 >> 8,1),auStackX_8);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                }
                iVar2 = fcn.00014ed0(arg1,*(arg1 + 0x1e3c) + 3,CONCAT71(iVar2 >> 8,1),&var_bp_20h);
                if (iVar2 < 0) {
                    return iVar2;
                }
                var_bp_20h = var_bp_20h & 0xffff | 0x100000;
                iVar2 = fcn.00014f30(arg1,*(arg1 + 0x1e3c) + 3,CONCAT71(iVar2 >> 8,1),&var_bp_20h);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.00014ed0(arg1,*(arg1 + 0x1e3c) + 3,CONCAT71(iVar2 >> 8,1),&var_bp_20h);
                if (iVar2 < 0) {
                    return iVar2;
                }
                if (arg1 == piVar3) {
                    return iVar2;
                }
                iVar2 = fcn.00014ed0(arg1,*(arg1 + 0x1e3c),CONCAT71(iVar2 >> 8,1),auStackX_8);
                if (iVar2 < 0) {
                    return iVar2;
                }
                auStackX_8[0] = auStackX_8[0] & 0xf7ffffff;
                iVar2 = fcn.00014f30(arg1,*(arg1 + 0x1e3c),CONCAT71(iVar2 >> 8,1),auStackX_8);
                if (iVar2 < 0) {
                    return iVar2;
                }
            }
            uVar1 = *(uVar4 + piVar3);
            if ((((uVar1 == 0) || (*(arg1 + 0x30) < uVar1)) || (0x3f < uVar1)) ||
               ((*(arg1 + (uVar1 * 0xf + 7) * 8) != 1 || (arg1 = *(arg1 + (uVar1 * 0xf + 0xc) * 8), arg1 == NULL)))) {
                return -0x7ffffffffffffffd;
            }
            uVar4 = uVar4 + 1;
            bVar5 = uVar4 < *(piVar3 + 1);
            bVar6 = uVar4 == *(piVar3 + 1);
        }
    }
    return iVar2;
}


/* fcn.00016c9c @ 0x16c9c */

//WARNING: Variable defined which should be unmapped: var_ch

int64_t fcn.00016c9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    int64_t extraout_RAX_05;
    uint32_t arg1_00;
    uint8_t uVar2;
    int64_t iVar3;
    uint8_t *arg2_00;
    uint8_t uVar4;
    unkbyte7 Var5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint8_t auStackX_8 [8];
    uint32_t var_30h;
    uint32_t var_ch;
    
    uVar4 = arg4;
    Var5 = arg4 >> 8;
    uVar2 = arg2;
    if (((((arg1 == 0) || (arg3 == 0)) || (uVar2 == 0)) || ((*(arg1 + 0x30) < uVar2 || (0x3f < uVar2)))) ||
       ((uVar4 == 0 || ((*(arg3 + 0x30) < uVar4 || (0x3f < uVar4)))))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar7 = (arg2 & 0xffU) * 0x78;
        iVar6 = (arg4 & 0xffU) * 0x78;
        arg1_00 = arg3;
        if ((*(arg3 + 0x10) != 3) || (iVar1 = fcn.00015bb4(arg1_00), -1 < iVar1)) {
            if (*(arg3 + 0x10) != 2) {
                iVar1 = CONCAT71(arg2 >> 8,uVar4);
                fcn.00014f8c(arg1_00,iVar1,*(iVar6 + 0x4e + arg3) + 6,CONCAT71(Var5,1));
                if (extraout_RAX < 0) {
                    return extraout_RAX;
                }
                arg2 = CONCAT71(iVar1 >> 8,uVar4);
                fcn.00015000(arg1_00,arg2,*(iVar6 + 0x4e + arg3) + 6,CONCAT71(Var5,1));
                if (extraout_RAX_00 < 0) {
                    return extraout_RAX_00;
                }
                uVar8 = 0;
                do {
                    arg2 = CONCAT71(arg2 >> 8,uVar4);
                    fcn.00014f8c(arg1_00,arg2,*(iVar6 + 0x4e + arg3) + 6,CONCAT71(Var5,1));
                    if (extraout_RAX_01 < 0) {
                        return extraout_RAX_01;
                    }
                    (**(*0x193b0 + 0xf8))(10);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < 3000);
                if (uVar8 == 3000) {
                    return -0x7fffffffffffffee;
                }
            }
            iVar3 = CONCAT71(arg2 >> 8,uVar2);
            fcn.00014f8c(arg1,iVar3,*(arg1 + 0x4e + iVar7) + 4,CONCAT71(Var5,1));
            iVar1 = extraout_RAX_02;
            if (-1 < extraout_RAX_02) {
                iVar3 = CONCAT71(iVar3 >> 8,uVar4);
                fcn.00015000(arg1_00,iVar3,*(iVar6 + 0x4e + arg3) + 5,CONCAT71(Var5,1));
                iVar1 = extraout_RAX_03;
                if (-1 < extraout_RAX_03) {
                    arg2_00 = CONCAT71(iVar3 >> 8,uVar4);
                    fcn.00014f8c(arg1_00,arg2_00,*(iVar6 + 0x4e + arg3) + 4,CONCAT71(Var5,1));
                    iVar1 = extraout_RAX_04;
                    if (-1 < extraout_RAX_04) {
                        if (*(arg3 + 0x10) == 3) {
                            arg2_00 = auStackX_8;
                            iVar1 = fcn.00015c68(arg1_00,arg2_00);
                            if (iVar1 < 0) {
                                return iVar1;
                            }
                        }
                        fcn.00015000(arg1,CONCAT71(arg2_00 >> 8,uVar2),*(arg1 + 0x4e + iVar7) + 5,CONCAT71(Var5,1))
                        ;
                        iVar1 = extraout_RAX_05;
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00016ef4 @ 0x16ef4 */

int64_t fcn.00016ef4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    int64_t iVar2;
    uint32_t uVar3;
    unkbyte7 Var4;
    uint8_t uVar5;
    unkbyte7 Var6;
    
    Var6 = arg4 >> 8;
    Var4 = arg2 >> 8;
    if ((arg1 == 0) || (arg3 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar3 = arg1;
        fcn.00014f8c(uVar3,arg2,4,CONCAT71(Var6,1));
        iVar2 = extraout_RAX;
        if (((-1 < extraout_RAX) &&
            (fcn.00015000(uVar3,CONCAT71(Var4,arg2),4,CONCAT71(Var6,1)), iVar2 = extraout_RAX_00,
            -1 < extraout_RAX_00)) &&
           (fcn.00014f8c(uVar3,CONCAT71(Var4,arg2),4,CONCAT71(Var6,1)), iVar2 = extraout_RAX_01,
           -1 < extraout_RAX_01)) {
            uVar5 = *(arg1 + 8);
            while( true ) {
                if (*(arg3 + 8) <= uVar5) {
                    return iVar2;
                }
                if (4 < uVar5) {
                    return iVar2;
                }
                uVar1 = *(uVar5 + arg3);
                if (((uVar1 == 0) || (*(arg1 + 0x30) < uVar1)) ||
                   ((0x3f < uVar1 ||
                    ((*(arg1 + 0x38 + uVar1 * 0x78) != 1 || (arg1 = *(arg1 + 0x60 + uVar1 * 0x78), arg1 == 0))))))
                break;
                uVar3 = arg1;
                fcn.00014f8c(uVar3,CONCAT71(Var4,*(arg1 + 0x1e38)),4,CONCAT71(Var6,1));
                if (extraout_RAX_02 < 0) {
                    return extraout_RAX_02;
                }
                fcn.00015000(uVar3,CONCAT71(Var4,*(arg1 + 0x1e38)),4,CONCAT71(Var6,1));
                if (extraout_RAX_03 < 0) {
                    return extraout_RAX_03;
                }
                fcn.00014f8c(uVar3,CONCAT71(Var4,*(arg1 + 0x1e38)),4,CONCAT71(Var6,1));
                if (extraout_RAX_04 < 0) {
                    return extraout_RAX_04;
                }
                uVar5 = uVar5 + 1;
                iVar2 = extraout_RAX_04;
            }
            iVar2 = -0x7ffffffffffffffd;
        }
    }
    return iVar2;
}


/* fcn.00018b88 @ 0x18b88 */

int64_t fcn.00018b88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint uVar5;
    int64_t arg3_00;
    uint8_t uVar6;
    unkbyte7 Var7;
    uint32_t in_stack_00000028;
    
    uVar6 = arg4;
    Var7 = arg4 >> 8;
    uVar2 = arg2;
    if (((arg1 != 0) && (arg3 != 0)) && (in_stack_00000028 < 8)) {
        if ((*arg3 & *arg1) != *arg1) {
            return -0x7ffffffffffffffd;
        }
        if ((*(arg1 + 0x20) & 2) != 0) {
            fcn.00018a64(arg1,arg2);
        }
        uVar4 = arg2 >> 0x20;
        if ((*(arg3 + 0x20) & 2) != 0) {
            uVar3 = CONCAT31(arg2 >> 8,uVar6);
            fcn.00018a64(arg3,uVar3);
            arg2 = CONCAT44(uVar4,uVar3);
        }
        uVar5 = arg2 >> 0x20;
        uVar4 = CONCAT31(arg2 >> 8,uVar2);
        fcn.00018298(arg1,CONCAT44(uVar5,uVar4),arg3,CONCAT71(Var7,uVar6));
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        uVar4 = CONCAT31(uVar4 >> 8,uVar2);
        iVar1 = arg3;
        fcn.000186cc(arg1,CONCAT44(uVar5,uVar4),arg3,CONCAT71(Var7,uVar6));
        if (extraout_RAX_00 < 0) {
            return extraout_RAX_00;
        }
        if (((uVar2 != 0) && (uVar2 <= *(arg1 + 0x30))) && ((uVar6 != 0 && (uVar6 <= *(arg3 + 0x30))))) {
            arg3_00 = CONCAT71(iVar1 >> 8,1);
            uVar3 = CONCAT31(uVar4 >> 8,uVar2);
            iVar1 = fcn.00018968(arg1,uVar3,arg3_00);
            if (iVar1 < 0) {
                return iVar1;
            }
            iVar1 = fcn.00018968(arg3,CONCAT31(uVar3 >> 8,uVar6),CONCAT71(arg3_00 >> 8,1));
            return iVar1;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00018968 @ 0x18968 */

int64_t fcn.00018968(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    uint uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    unkbyte7 in_R9;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((iVar2 == 0) || (uVar3 == 0)) || (*(iVar2 + 0x30) < uVar3)) || (0x3f < uVar3)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = (arg2 & 0xff) * 0x78;
        if (*(iVar5 + 0x38 + iVar2) - 0xe0101U < 2) {
            fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),*(iVar5 + 0x4e + iVar2),CONCAT71(in_R9,1));
            iVar1 = extraout_RAX;
            if (-1 < extraout_RAX) {
                uVar4 = CONCAT31(arg2 >> 8,uVar3);
                fcn.00015000(arg1,CONCAT44(in_register_00000014,uVar4),*(iVar5 + 0x4e + iVar2),CONCAT71(in_R9,1));
                iVar1 = extraout_RAX_00;
                if (-1 < extraout_RAX_00) {
                    fcn.00014f8c(arg1,CONCAT44(in_register_00000014,CONCAT31(uVar4 >> 8,uVar3)),
                                 *(iVar5 + 0x4e + iVar2),CONCAT71(in_R9,1));
                    iVar1 = extraout_RAX_01;
                }
            }
        }
        else {
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.00018c9c @ 0x18c9c */

int64_t fcn.00018c9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    uchar uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    uint64_t arg3_00;
    uint32_t arg3_01;
    uint32_t uVar11;
    uint64_t uVar12;
    uint16_t uStackX_8;
    uint32_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint16_t uStack_48;
    uint16_t uStack_46;
    
    uVar4 = arg2;
    iVar3 = 0;
    if (((arg1 == 0) || (arg3 == 0)) || (uVar12 = in_stack_00000028, 7 < in_stack_00000028)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar7 = arg1;
        while (uVar2 = arg4 & 0xff, iVar7 != in_stack_00000030) {
            if (5 < *(iVar7 + 8)) {
                return -0x7ffffffffffffffd;
            }
            uVar10 = arg2 & 0xff;
            if (iVar7 != arg1) {
                uVar10 = *(iVar7 + 0x1e38);
            }
            if (iVar7 != arg3) {
                uVar2 = *(*(iVar7 + 8) + arg3);
            }
            uVar9 = uVar10;
            if (iVar7 == arg1) {
                arg3_00 = 9;
                uStackX_8 = 8;
            }
            else {
                arg3_00 = *(iVar7 + 0x70 + (uVar10 * 0x3c + uVar12) * 2);
                uStackX_8 = *(iVar7 + 0x80 + (uVar10 * 0x3c + uVar12) * 2);
            }
            uVar8 = uVar2;
            if (iVar7 == arg3) {
                uStack_48 = 9;
                uStack_46 = 8;
                uVar11 = 8;
            }
            else {
                uStack_48 = *(iVar7 + 0x90 + (uVar2 * 0x3c + uVar12) * 2);
                uStack_46 = *(iVar7 + 0xa0 + (uVar2 * 0x3c + uVar12) * 2);
                uVar11 = *(iVar7 + 0x80 + (uVar2 * 0x3c + uVar12) * 2);
            }
            if (iVar7 == arg1) {
                arg3_01 = 8;
            }
            else {
                arg3_01 = *(iVar7 + 0xa0 + (uVar10 * 0x3c + uVar12) * 2);
            }
            if (uVar9 == 0) {
                return -0x7ffffffffffffffd;
            }
            if (*(iVar7 + 0x30) < uVar9) {
                return -0x7ffffffffffffffd;
            }
            if (0x3f < uVar9) {
                return -0x7ffffffffffffffd;
            }
            if (uVar8 == 0) {
                return -0x7ffffffffffffffd;
            }
            if (*(iVar7 + 0x30) < uVar8) {
                return -0x7ffffffffffffffd;
            }
            if (0x3f < uVar8) {
                return -0x7ffffffffffffffd;
            }
            iVar5 = CONCAT71(arg2 >> 8,uVar9);
            arg1_00 = iVar7;
            iVar3 = fcn.00015138(arg1_00,iVar5,arg3_00);
            if (iVar3 < 0) {
                return iVar3;
            }
            iVar5 = CONCAT71(iVar5 >> 8,uVar9);
            iVar3 = fcn.00015138(arg1_00,iVar5,uStackX_8);
            if (iVar3 < 0) {
                return iVar3;
            }
            iVar5 = CONCAT71(iVar5 >> 8,uVar8);
            iVar3 = fcn.00015138(arg1_00,iVar5,uVar11);
            if (iVar3 < 0) {
                return iVar3;
            }
            if (*(uVar10 * 0x78 + 0x38 + iVar7) == 1) {
                iVar3 = fcn.00016978(arg1_00,CONCAT71(iVar5 >> 8,uVar9),arg3_01);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar5 = uVar10 * 0x3c + uVar12;
                *(iVar7 + 0x70 + iVar5 * 2) = 0;
                *(iVar7 + 0x80 + iVar5 * 2) = 0;
                *(iVar7 + 0xa0 + iVar5 * 2) = 0;
            }
            iVar1 = uVar2 * 0x78 + iVar7;
            if (*(iVar1 + 0x38) == 1) {
                uVar6 = CONCAT71(iVar5 >> 8,uVar8);
                iVar3 = fcn.00016978(arg1_00,uVar6,uStack_48);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar3 = fcn.00016978(arg1_00,CONCAT71(uVar6 >> 8,uVar8),uStack_46);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar5 = uVar2 * 0x3c + uVar12;
                *(iVar7 + 0x90 + iVar5 * 2) = 0;
                *(iVar7 + 0xa0 + iVar5 * 2) = 0;
                *(iVar7 + 0x80 + iVar5 * 2) = 0;
            }
            if (iVar7 == arg3) {
                return iVar3;
            }
            iVar7 = *(iVar1 + 0x60);
            arg2 = CONCAT71(iVar5 >> 8,uVar4);
            if (iVar7 == 0) {
                return iVar3;
            }
        }
    }
    return iVar3;
}


/* fcn.00015068 @ 0x15068 */

ulong fcn.00015068(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg4 != 0) {
        if ((*(iVar3 + 0x18) == 0) || (puVar1 = *(*(iVar3 + 0x18) + 0x79f20), puVar1 == NULL)) {
            return 0x8000000000000003;
        }
        if (arg2 <= *(iVar3 + 0x30)) {
            uVar2 = (**puVar1)(puVar1,iVar3,0,arg2,arg3 * 2,2,arg4,0);
            return uVar2;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000150d4 @ 0x150d4 */

ulong fcn.000150d4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg4 != 0) {
        if ((*(iVar3 + 0x18) == 0) || (iVar1 = *(*(iVar3 + 0x18) + 0x79f20), iVar1 == 0)) {
            return 0x8000000000000003;
        }
        if (arg2 <= *(iVar3 + 0x30)) {
            uVar2 = (**(iVar1 + 8))(iVar1,iVar3,0,arg2,arg3 * 2,2,arg4);
            return uVar2;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000173b4 @ 0x173b4 */

uint fcn.000173b4(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint in_register_00000014;
    uint uVar5;
    uint uVar6;
    uint32_t uVar7;
    uint32_t uStackX_8;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    uVar6 = 0;
    if (iVar2 != 0) {
        uVar4 = arg2;
        uVar6 = uVar5;
        if ((((uVar4 != 0) && (uVar4 <= *(iVar2 + 0x30))) && (uVar4 < 0x40)) &&
           (((iVar3 = (arg2 & 0xff) * 0x78, *(iVar3 + 0x38 + iVar2) == 1 && (*(iVar3 + 0x4e + iVar2) != '\0')) &&
            (iVar3 = fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),*(iVar3 + 0x4e + iVar2) + 1,1),
            -1 < iVar3)))) {
            uVar6 = 0x10;
            uVar1 = uStackX_8 >> 0x14 & 0x3f;
            uVar7 = uStackX_8 >> 0x10 & 0xf;
            if (*(iVar2 + 0x10) == 5) {
                uVar6 = 8;
                if (uVar1 == 2) {
                    uVar6 = 0xe;
                }
            }
            else {
                if (*(iVar2 + 0x10) == 6) {
                    if (uVar1 == 2) {
                        uVar6 = 0x20;
                    }
                }
                else {
                    if (uVar7 == 4) {
                        if (uVar1 == 2) {
                            return 0x20;
                        }
                        return 0x18;
                    }
                    if (uVar7 != 8) {
                        return 0x10;
                    }
                    uVar6 = 0x10;
                    if (uVar1 == 2) {
                        uVar6 = 0x18;
                    }
                }
            }
        }
    }
    return uVar6;
}


/* fcn.00017280 @ 0x17280 */

int64_t fcn.00017280(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint uVar4;
    uint in_register_00000014;
    uint8_t uVar5;
    uint32_t uStackX_8;
    uint32_t uStackX_c;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((iVar2 == 0) || (uVar3 == 0)) || (*(iVar2 + 0x30) < uVar3)) || (0x3f < uVar3)) {
code_r0x00017398:
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        if (*((arg2 & 0xff) * 0x78 + 0x38 + iVar2) - 0x200101U < 2) {
            uVar5 = arg3;
            if (((uVar5 == 0) || (*(iVar2 + 0x30) < uVar5)) || (0x3f < uVar5)) goto code_r0x00017398;
            if (*((arg3 & 0xffU) * 0x78 + 0x38 + iVar2) == 1) {
                fcn.00015068(arg1,CONCAT44(in_register_00000014,arg2),8,&uStackX_8);
                if (extraout_RAX < 0) {
                    return extraout_RAX;
                }
                uVar1 = uStackX_c & 0xd7fffb03;
                uStackX_8 = (arg3 & 0x3f) << 0xb | uStackX_8 & 0xfffe0009 | 0x80000009;
                if ((*(iVar2 + 0x20) & 2) != 0) {
                    uVar1 = uStackX_c & 0xd3fffb03;
                }
                uStackX_c = uVar1 | 0x3000303;
                uVar4 = CONCAT31(arg2 >> 8,uVar3);
                fcn.000150d4(arg1,CONCAT44(in_register_00000014,uVar4),8,&uStackX_8);
                if (extraout_RAX_00 < 0) {
                    return extraout_RAX_00;
                }
                fcn.00015068(arg1,CONCAT44(in_register_00000014,CONCAT31(uVar4 >> 8,uVar3)),8,&uStackX_8);
                return extraout_RAX_01;
            }
        }
        iVar2 = -0x7ffffffffffffffd;
    }
    return iVar2;
}


/* fcn.000174a8 @ 0x174a8 */

//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000174a8(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint8_t uVar4;
    int64_t iVar5;
    int64_t arg2_00;
    ulong uVar6;
    uint8_t uVar7;
    uint32_t uStackX_8;
    uint32_t uStackX_c;
    int64_t var_20h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = arg2;
    if ((((iVar3 == 0) || (uVar4 == 0)) || (*(iVar3 + 0x30) < uVar4)) || (0x3f < uVar4)) {
        return -0x7ffffffffffffffe;
    }
    iVar5 = (arg2 & 0xff) * 0x78;
    if (*(iVar5 + 0x38 + iVar3) != 1) {
        return -0x7ffffffffffffffd;
    }
    uVar7 = arg3;
    if (uVar7 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*(iVar3 + 0x30) < uVar7) {
        return -0x7ffffffffffffffe;
    }
    if (0x3f < uVar7) {
        return -0x7ffffffffffffffe;
    }
    if (1 < *((arg3 & 0xffU) * 0x78 + 0x38 + iVar3) - 0x200101U) {
        return -0x7ffffffffffffffd;
    }
    if (*(iVar5 + 0x48 + iVar3) < 9) {
        return -0x7ffffffffffffffd;
    }
    arg2_00 = CONCAT71(iVar5 >> 8,uVar4);
    iVar5 = fcn.00015068(arg1,arg2_00,9,&uStackX_8);
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar6 = CONCAT71(arg2_00 >> 8,uVar4);
    uStackX_8 = (arg3 & 0x3f) << 0xb | uStackX_8 & 0xfffe0008 | 0x80000008;
    uStackX_c = uStackX_c & 0xfbfffb01 | 0x1000301;
    iVar1 = fcn.000173b4(arg1,uVar6);
    uStackX_8 = uStackX_8 ^ (iVar1 << 0x11 ^ uStackX_8) & 0xfe0000;
    if ((*(iVar3 + 0x20) & 2) == 0) {
        uVar2 = uStackX_c & 0xdfffffff;
        if (*(iVar3 + 0x10) != 6) goto code_r0x000175d0;
        uVar2 = uStackX_c & 0xddffffff;
    }
    else {
        uVar2 = uStackX_c & 0xd5ffffff;
    }
code_r0x000175d0:
    uStackX_c = uVar2;
    iVar5 = CONCAT71(uVar6 >> 8,uVar4);
    iVar3 = fcn.000150d4(arg1,iVar5,9,&uStackX_8);
    if (-1 < iVar3) {
        iVar3 = fcn.00015068(arg1,CONCAT71(iVar5 >> 8,uVar4),9,&uStackX_8);
    }
    return iVar3;
}


/* fcn.0001793c @ 0x1793c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001793c(uint32_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t arg1_00;
    uint in_register_0000000c;
    int64_t *piVar6;
    uint in_register_00000014;
    uint64_t arg2_00;
    uint in_R8;
    uint8_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong uStackX_8;
    uint32_t uStack_38;
    int iStack_34;
    int64_t var_bp_10h;
    uint32_t var_8h;
    
    puVar7 = CONCAT44(in_R8,arg3);
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((((piVar6 == NULL) || (puVar7 == NULL)) || (*(piVar6 + 6) < arg2)) || ((0x3f < arg2 || (puVar7[0x30] < arg4))))
       || ((0x3f < arg4 ||
           ((piVar6[(arg2 & 0xff) * 0xf + 7] != 0x200101 || (*(puVar7 + (arg4 & 0xffU) * 0x78 + 0x38) != 0x200102))))))
    {
        return -0x7ffffffffffffffe;
    }
    if (piVar6[1] == '\0') {
        var_bp_10h = piVar6;
    }
    else {
        uStackX_8 = 0;
        if (piVar6[3] == 0) {
            iVar3 = -0x7ffffffffffffffe;
        }
        else {
            iVar3 = fcn.00011508(&uStackX_8,&var_bp_10h,piVar6[3]);
        }
        if (iVar3 < 0) {
            return iVar3;
        }
        uVar2 = *puVar7 & 0x3f;
        if (((uVar2 == 0) || (*(var_bp_10h + 0x30) < uVar2)) ||
           (iVar3 = uVar2 * 0x78, *(iVar3 + 0x38 + var_bp_10h) != 1)) {
            return -0x7ffffffffffffffd;
        }
        arg2_00 = CONCAT71(iVar3 >> 8,*(iVar3 + 0x69 + piVar6));
    }
    uVar9 = 0;
    uVar2 = arg2_00;
    if (var_bp_10h == NULL) {
code_r0x00017911:
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        if (*var_bp_10h == 0) {
            if (((uVar2 == 0) || (*(var_bp_10h + 0x30) < uVar2)) ||
               ((0x3f < uVar2 || (*(var_bp_10h + ((arg2_00 & 0xff) * 0xf + 7) * 8) != 0x200101))))
            goto code_r0x00017911;
            uVar1 = *((arg2_00 & 0xff) * 0x78 + 0x4e + var_bp_10h);
            if (uVar1 != 0) {
                arg1_00 = var_bp_10h;
                iVar3 = fcn.00014f8c(arg1_00,arg2_00,uVar1,CONCAT71(arg4 >> 8,3));
                if (iVar3 < 0) {
                    return iVar3;
                }
                if (((uStack_38 & 0x40000000) != 0) && ((uStack_38 & 0x80000000) != 0)) {
                    uVar8 = uVar1 + 2;
                    iVar5 = 0;
                    iVar3 = CONCAT71(arg2_00 >> 8,uVar2);
                    iVar4 = fcn.00015000(arg1_00,iVar3,uVar8,1);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    do {
                        iVar5 = CONCAT71(iVar5 >> 8,1);
                        iVar3 = CONCAT71(iVar3 >> 8,uVar2);
                        iVar4 = fcn.00014f8c(arg1_00,iVar3,uVar1 + 1,iVar5);
                        if (iVar4 < 0) {
                            return iVar4;
                        }
                        if (iStack_34 < 0) break;
                        (**(*0x193b0 + 0xf8))(10);
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < 3000);
                    if (-1 < iStack_34) {
                        return -0x7fffffffffffffee;
                    }
                    iVar4 = CONCAT71(iVar5 >> 8,1);
                    iVar3 = CONCAT71(iVar3 >> 8,uVar2);
                    iVar5 = fcn.00015000(arg1_00,iVar3,uVar8,iVar4);
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                    iVar4 = CONCAT71(iVar4 >> 8,1);
                    iVar3 = CONCAT71(iVar3 >> 8,uVar2);
                    iVar5 = fcn.00015000(arg1_00,iVar3,uVar8,iVar4);
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                    iVar3 = fcn.00014f8c(arg1_00,CONCAT71(iVar3 >> 8,uVar2),uVar1,CONCAT71(iVar4 >> 8,3));
                    return iVar3;
                }
            }
        }
        iVar3 = -0x7ffffffffffffffd;
    }
    return iVar3;
}


/* fcn.00017c94 @ 0x17c94 */

uint fcn.00017c94(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint in_register_00000014;
    uint32_t uStackX_8;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (iVar3 == 0) {
        return 0;
    }
    uVar5 = arg2;
    if (uVar5 == 0) {
        return 0;
    }
    if (*(iVar3 + 0x30) < uVar5) {
        return 0;
    }
    if (uVar5 < 0x40) {
        iVar4 = (arg2 & 0xff) * 0x78;
        if (*(iVar4 + 0x38 + iVar3) != 1) {
            return 0;
        }
        if (*(iVar4 + 0x4e + iVar3) == '\0') {
            return 0;
        }
        iVar4 = fcn.00014f8c(arg1,CONCAT44(in_register_00000014,arg2),*(iVar4 + 0x4e + iVar3) + 1,1);
        if (iVar4 < 0) {
            return 0;
        }
        uVar6 = uStackX_8 >> 0x14 & 0x3f;
        uVar1 = uStackX_8 >> 0x10 & 0xf;
        if (*(iVar3 + 0x10) == 5) {
            uVar2 = 0x10;
            if (uVar6 == 2) {
                uVar2 = 0x20;
            }
        }
        else {
            if (*(iVar3 + 0x10) == 6) {
                if (uVar6 != 2) {
                    return 0x20;
                }
                return 0x40;
            }
            if (uVar1 == 4) {
                if (uVar6 != 2) {
                    return 0x18;
                }
                return 0x20;
            }
            if (uVar1 != 8) {
                return 0x10;
            }
            uVar2 = 0x10;
            if (uVar6 == 2) {
                uVar2 = 0x18;
            }
        }
        return uVar2;
    }
    return 0;
}


/* fcn.00017b58 @ 0x17b58 */

int64_t fcn.00017b58(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint uVar4;
    uint in_register_00000014;
    uint8_t uVar5;
    uint32_t uStackX_8;
    uint32_t uStackX_c;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((iVar2 == 0) || (uVar3 == 0)) || (*(iVar2 + 0x30) < uVar3)) || (0x3f < uVar3)) {
code_r0x00017c78:
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        if (*((arg2 & 0xff) * 0x78 + 0x38 + iVar2) - 0x100101U < 2) {
            uVar5 = arg3;
            if (((uVar5 == 0) || (*(iVar2 + 0x30) < uVar5)) || (0x3f < uVar5)) goto code_r0x00017c78;
            if (*((arg3 & 0xffU) * 0x78 + 0x38 + iVar2) == 1) {
                fcn.00015068(arg1,CONCAT44(in_register_00000014,arg2),8,&uStackX_8);
                if (extraout_RAX < 0) {
                    return extraout_RAX;
                }
                uStackX_8 = (arg3 & 0x3f) << 0xb | uStackX_8 & 0xfffe0008 | 0x80000008;
                uVar1 = uStackX_c & 0xd7fffb01 | 0x2000301;
                if ((*(iVar2 + 0x20) & 2) != 0) {
                    uVar1 = uStackX_c & 0xd3fffb01 | 0x3000301;
                }
                uStackX_c = uVar1;
                uVar4 = CONCAT31(arg2 >> 8,uVar3);
                fcn.000150d4(arg1,CONCAT44(in_register_00000014,uVar4),8,&uStackX_8);
                if (extraout_RAX_00 < 0) {
                    return extraout_RAX_00;
                }
                fcn.00015068(arg1,CONCAT44(in_register_00000014,CONCAT31(uVar4 >> 8,uVar3)),8,&uStackX_8);
                return extraout_RAX_01;
            }
        }
        iVar2 = -0x7ffffffffffffffd;
    }
    return iVar2;
}


/* fcn.00017d7c @ 0x17d7c */

//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00017d7c(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint8_t uVar4;
    int64_t iVar5;
    int64_t arg2_00;
    ulong uVar6;
    uint8_t uVar7;
    uint32_t uStackX_8;
    uint32_t uStackX_c;
    int64_t var_20h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = arg2;
    if ((((iVar3 == 0) || (uVar4 == 0)) || (*(iVar3 + 0x30) < uVar4)) || (0x3f < uVar4)) {
        return -0x7ffffffffffffffe;
    }
    iVar5 = (arg2 & 0xff) * 0x78;
    if (*(iVar5 + 0x38 + iVar3) != 1) {
        return -0x7ffffffffffffffd;
    }
    uVar7 = arg3;
    if (uVar7 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*(iVar3 + 0x30) < uVar7) {
        return -0x7ffffffffffffffe;
    }
    if (0x3f < uVar7) {
        return -0x7ffffffffffffffe;
    }
    if (1 < *((arg3 & 0xffU) * 0x78 + 0x38 + iVar3) - 0x100101U) {
        return -0x7ffffffffffffffd;
    }
    if (*(iVar5 + 0x48 + iVar3) < 8) {
        return -0x7ffffffffffffffd;
    }
    arg2_00 = CONCAT71(iVar5 >> 8,uVar4);
    iVar5 = fcn.00015068(arg1,arg2_00,8,&uStackX_8);
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar6 = CONCAT71(arg2_00 >> 8,uVar4);
    uStackX_8 = (arg3 & 0x3f) << 0xb | uStackX_8 & 0xfffe0008 | 0x80000008;
    uStackX_c = uStackX_c & 0xfbfffb01 | 0x1000301;
    iVar1 = fcn.00017c94(arg1,uVar6);
    uStackX_8 = uStackX_8 ^ (iVar1 << 0x11 ^ uStackX_8) & 0xfe0000;
    if ((*(iVar3 + 0x20) & 2) == 0) {
        uVar2 = uStackX_c & 0xdfffffff;
        if (*(iVar3 + 0x10) != 6) goto code_r0x00017ea4;
        uVar2 = uStackX_c & 0xddffffff;
    }
    else {
        uVar2 = uStackX_c & 0xd5ffffff;
    }
code_r0x00017ea4:
    uStackX_c = uVar2;
    iVar5 = CONCAT71(uVar6 >> 8,uVar4);
    iVar3 = fcn.000150d4(arg1,iVar5,8,&uStackX_8);
    if (-1 < iVar3) {
        iVar3 = fcn.00015068(arg1,CONCAT71(iVar5 >> 8,uVar4),8,&uStackX_8);
    }
    return iVar3;
}


/* fcn.00018108 @ 0x18108 */

void fcn.00018108(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    
    *arg1 = *arg1 & 0xfffe0000;
    *arg1 = *arg1 | (arg2 & 0x3f | 0xfff00000) << 0xb | arg3 & 0x7ff;
    uVar1 = *arg1;
    iVar2 = arg4;
    if (iVar2 == 1) {
        uVar1 = uVar1 & 0xff0bffff | 0xa0000;
code_r0x000181c0:
        *(arg1 + 4) = *(arg1 + 4) & 0xfffff9ff;
        *(arg1 + 4) = *(arg1 + 4) | 0x100;
        *(arg1 + 4) = 1;
        *(arg1 + 4) = *(arg1 + 4) & 0xf0ffffff;
    }
    else {
        if (iVar2 == 2) {
code_r0x0001819c:
            *(arg1 + 4) = *(arg1 + 4) & 0xfffffaff;
            *(arg1 + 4) = *(arg1 + 4) | 0x200;
            uVar1 = uVar1 & 0xff09ffff | 0x80000;
        }
        else {
            if (iVar2 != 3) {
                if (iVar2 == 4) {
code_r0x0001818e:
                    uVar1 = uVar1 & 0xff35ffff | 0x340000;
                    goto code_r0x000181c0;
                }
                if (iVar2 != 5) {
                    if (iVar2 == 6) goto code_r0x0001819c;
                    if (iVar2 == 7) goto code_r0x0001818e;
                    if (iVar2 != 8) goto code_r0x000181d9;
                }
            }
            *(arg1 + 4) = *(arg1 + 4) & 0xfffffaff;
            *(arg1 + 4) = *(arg1 + 4) | 0x200;
            uVar1 = uVar1 & 0xff03ffff | 0x20000;
        }
        *(arg1 + 4) = 1;
        *(arg1 + 4) = *(arg1 + 4) & 0xf3ffffff | 0x3000000;
    }
    *arg1 = uVar1;
code_r0x000181d9:
    *(arg1 + 4) = *(arg1 + 4) & 0xdfffffff;
    return;
}


/* fcn.00016858 @ 0x16858 */

ulong fcn.00016858(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    ulong uVar9;
    uint16_t *in_stack_00000028;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((((((arg3 == 0) || (in_stack_00000028 == NULL)) || (uVar5 = arg2, uVar5 == 0)) ||
         ((*(iVar3 + 0x30) < uVar5 || (0x3f < uVar5)))) ||
        ((iVar6 = (arg2 & 0xff) * 0x78, *(iVar6 + 0x38 + iVar3) != 1 ||
         ((uVar5 = arg4, uVar5 == 0 || (*(arg3 + 0x30) < uVar5)))))) ||
       ((0x3f < uVar5 || (iVar4 = (arg4 & 0xffU) * 0x78, *(iVar4 + 0x38 + arg3) != 1)))) {
        uVar9 = 0x8000000000000002;
    }
    else {
        uVar2 = *(iVar4 + 0x48 + arg3);
        uVar1 = *(iVar6 + 0x6c + iVar3);
        uVar7 = 10;
        if (*(iVar6 + 0x4a + iVar3) < uVar2) {
            uVar2 = *(iVar6 + 0x4a + iVar3);
        }
        uVar8 = 0x29;
        if (uVar2 < 0x29) {
            uVar8 = uVar2;
        }
        if (9 < uVar8) {
            do {
                if ((uVar1 >> (uVar7 - 10 & 0x1f) & 1) == 0) break;
                uVar7 = uVar7 + 1;
            } while (uVar7 <= uVar8);
            if (uVar7 <= uVar8) {
                *in_stack_00000028 = uVar7;
                *(iVar6 + 0x6c + iVar3) = 1 << (uVar7 - 10U & 0x1f) | uVar1;
                return 0;
            }
        }
        uVar9 = 0x800000000000000e;
    }
    return uVar9;
}


/* fcn.000181e0 @ 0x181e0 */

int64_t fcn.000181e0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint8_t uVar2;
    uint64_t arg2_00;
    int64_t arg2_01;
    uchar auStackX_8 [8];
    uint16_t in_stack_00000028;
    uint16_t in_stack_00000030;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    arg2_00 = arg3 & 0xff;
    uVar2 = arg2;
    if ((((iVar1 == 0) || (uVar2 == 0)) || (*(iVar1 + 0x30) < uVar2)) || ((arg3 == 0 || (*(iVar1 + 0x30) < arg3)))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00015068(arg1,arg2,in_stack_00000028,auStackX_8);
        if (-1 < iVar1) {
            fcn.00018108(auStackX_8,arg2_00,in_stack_00000030,arg4 & 0xffffffff);
            arg2_01 = CONCAT71(arg2_00 >> 8,uVar2);
            iVar1 = fcn.000150d4(arg1,arg2_01,in_stack_00000028,auStackX_8);
            if (-1 < iVar1) {
                iVar1 = fcn.00015068(arg1,CONCAT71(arg2_01 >> 8,uVar2),in_stack_00000028,auStackX_8);
            }
        }
    }
    return iVar1;
}


/* fcn.00018a64 @ 0x18a64 */

int64_t fcn.00018a64(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    uint in_register_00000014;
    uint64_t arg2_00;
    int64_t iVar4;
    unkbyte7 in_R9;
    uint32_t uStackX_8;
    uint32_t uStackX_c;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = arg2;
    if ((((iVar2 == 0) || (uVar3 == 0)) || (*(iVar2 + 0x30) < uVar3)) || (0x3f < uVar3)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar4 = (arg2 & 0xff) * 0x78;
        if (*(iVar4 + 0x38 + iVar2) - 0xe0101U < 2) {
            fcn.00014f8c(arg1,CONCAT71(CONCAT44(in_register_00000014,arg2) >> 8,uVar3),*(iVar4 + 0x4e + iVar2),
                         CONCAT71(in_R9,2));
            iVar1 = extraout_RAX;
            if (-1 < extraout_RAX) {
                if ((((uStackX_8 & 0x7ff0000) == 0) || ((uStackX_c & 0x3ff800) == 0)) || ((uStackX_c & 0x7ff) == 0)) {
                    arg2_00 = CONCAT31(uStackX_8 >> 8,uVar3) & 0xf809ffff | 0x90000;
                    fcn.00015000(arg1,arg2_00,*(iVar4 + 0x4e + iVar2),CONCAT71(in_R9,2));
                    iVar1 = extraout_RAX_00;
                    if (-1 < extraout_RAX_00) {
                        fcn.00014f8c(arg1,CONCAT71(arg2_00 >> 8,uVar3),*(iVar4 + 0x4e + iVar2),CONCAT71(in_R9,2));
                        iVar1 = extraout_RAX_01;
                    }
                }
            }
        }
        else {
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.00018298 @ 0x18298 */

int64_t fcn.00018298(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t arg3_00;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg1_00;
    unkbyte7 Var5;
    int64_t iVar6;
    int64_t arg3_01;
    uchar uVar7;
    ulong uVar8;
    uint8_t uVar9;
    ushort uStackX_8;
    uint32_t in_stack_00000028;
    ushort uStack_54;
    int64_t iStack_48;
    
    uVar7 = arg4;
    if (((arg1 == 0) || (arg3 == 0)) || (7 < in_stack_00000028)) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        iVar4 = 0;
        uVar9 = *(arg1 + 8);
        if (uVar9 < *(arg3 + 8)) {
            iVar6 = arg1;
            while (uVar9 < 5) {
                if ((((iVar6 == 0) || (uVar1 = *(uVar9 + arg3), uVar1 == 0)) ||
                    ((*(iVar6 + 0x30) < uVar1 || ((0x3f < uVar1 || (*(uVar1 * 0x78 + 0x38 + iVar6) != 1)))))) ||
                   (arg3_00 = *(uVar1 * 0x78 + 0x60 + iVar6), arg3_00 == 0)) {
                    return -0x7ffffffffffffffd;
                }
                uVar2 = *(arg3_00 + 0x1e38);
                iVar3 = CONCAT71(arg4 >> 8,uVar2);
                if (uVar2 == 0) {
                    return -0x7ffffffffffffffd;
                }
                if (*(arg3_00 + 0x30) < uVar2) {
                    return -0x7ffffffffffffffd;
                }
                if (0x3f < uVar2) {
                    return -0x7ffffffffffffffd;
                }
                if (*(uVar2 * 0x78 + 0x38 + arg3_00) != 1) {
                    return -0x7ffffffffffffffd;
                }
                Var5 = iVar4 >> 8;
                arg1_00 = iVar6;
                if (iVar6 == arg1) {
                    iVar4 = arg3_00;
                    iVar3 = fcn.00016858(arg1_00,CONCAT71(Var5,uVar1),arg3_00,iVar3);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    uVar8 = 0;
                    iVar4 = fcn.000181e0(arg1_00,CONCAT71(iVar3 >> 8,arg2),CONCAT71(iVar4 >> 8,uVar1),2);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    iStack_48 = in_stack_00000028 + uVar1 * 0x3c;
                    *(iVar6 + 0xa0 + iStack_48 * 2) = uStackX_8;
                    iVar3 = arg3_00;
                    iVar4 = fcn.00016858(arg1_00,CONCAT71(iVar4 >> 8,uVar1),arg3_00,
                                         CONCAT71(uVar8 >> 8,*(arg3_00 + 0x1e38)));
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    arg4 = 0;
                    arg3_01 = CONCAT71(iVar3 >> 8,uVar1);
                    iVar4 = fcn.000181e0(arg1_00,CONCAT71(iVar4 >> 8,arg2),arg3_01,1);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                }
                else {
                    uVar2 = *(iVar6 + 0x1e38);
                    if (uVar2 == 0) {
                        return -0x7ffffffffffffffd;
                    }
                    if (*(iVar6 + 0x30) < uVar2) {
                        return -0x7ffffffffffffffd;
                    }
                    if (0x3f < uVar2) {
                        return -0x7ffffffffffffffd;
                    }
                    iVar4 = arg3_00;
                    iVar3 = fcn.00016858(arg1_00,CONCAT71(Var5,uVar1),arg3_00,iVar3);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    uVar8 = 0;
                    iVar4 = fcn.000181e0(arg1_00,CONCAT71(iVar3 >> 8,*(iVar6 + 0x1e38)),CONCAT71(iVar4 >> 8,uVar1),
                                         8);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    *(iVar6 + 0x80 + (*(iVar6 + 0x1e38) * 0x3c + in_stack_00000028) * 2) = uStackX_8;
                    iStack_48 = uVar1 * 0x3c + in_stack_00000028;
                    *(iVar6 + 0xa0 + iStack_48 * 2) = uStackX_8;
                    iVar4 = arg3_00;
                    iVar3 = fcn.00016858(arg1_00,CONCAT31(in_stack_00000028 >> 8,uVar1),arg3_00,
                                         CONCAT71(uVar8 >> 8,*(arg3_00 + 0x1e38)));
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    arg4 = 0;
                    arg3_01 = CONCAT71(iVar4 >> 8,uVar1);
                    iVar4 = fcn.000181e0(arg1_00,CONCAT71(iVar3 >> 8,*(iVar6 + 0x1e38)),arg3_01,7);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    *(iVar6 + 0x70 + (*(iVar6 + 0x1e38) * 0x3c + in_stack_00000028) * 2) = uStack_54;
                }
                *(iVar6 + 0x90 + iStack_48 * 2) = uStack_54;
                if (arg3_00 == arg3) {
                    iVar6 = CONCAT71(arg3_01 >> 8,uVar7);
                    iVar4 = fcn.000181e0(arg3_00,CONCAT71(iVar4 >> 8,*(arg3_00 + 0x1e38)),iVar6,5);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    *(arg3_00 + 0x80 + (*(arg3_00 + 0x1e38) * 0x3c + in_stack_00000028) * 2) = uStackX_8;
                    iVar4 = fcn.000181e0(arg3_00,CONCAT71(iVar4 >> 8,*(arg3_00 + 0x1e38)),CONCAT71(iVar6 >> 8,uVar7)
                                         ,4);
                    if (-1 < iVar4) {
                        *(arg3_00 + 0x70 + (*(arg3_00 + 0x1e38) * 0x3c + in_stack_00000028) * 2) = uStack_54;
                        return iVar4;
                    }
                    return iVar4;
                }
                uVar9 = uVar9 + 1;
                iVar6 = arg3_00;
                if (*(arg3 + 8) <= uVar9) {
                    return iVar4;
                }
            }
        }
    }
    return iVar4;
}


/* fcn.000186cc @ 0x186cc */

int64_t fcn.000186cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t arg3_00;
    int64_t iVar3;
    uint32_t arg1_00;
    int64_t iVar4;
    uchar uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint8_t uVar9;
    uint8_t uStackX_8;
    uint32_t in_stack_00000028;
    ushort uStack_48;
    
    uVar8 = arg4;
    uVar5 = arg2;
    if (((arg1 == 0) || (arg3 == 0)) || (7 < in_stack_00000028)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar3 = 0;
        uStackX_8 = *(arg3 + 8);
        if (*(arg1 + 8) < uStackX_8) {
            iVar7 = arg3;
            uVar9 = uVar8;
            do {
                if ((iVar7 == 0) || (iVar3 = *(iVar7 + 0x1e48), iVar3 == 0)) {
                    return -0x7ffffffffffffffd;
                }
                uVar1 = *(iVar3 + 0x14);
                arg3_00 = *(iVar3 + 8);
                uVar2 = *(iVar7 + 0x1e38);
                if (arg3_00 == 0) {
                    return -0x7ffffffffffffffd;
                }
                if (uVar2 == 0) {
                    return -0x7ffffffffffffffd;
                }
                if (*(iVar7 + 0x30) < uVar2) {
                    return -0x7ffffffffffffffd;
                }
                if (0x3f < uVar2) {
                    return -0x7ffffffffffffffd;
                }
                if (uVar9 == 0) {
                    return -0x7ffffffffffffffd;
                }
                if (*(iVar7 + 0x30) < uVar9) {
                    return -0x7ffffffffffffffd;
                }
                if (0x3f < uVar9) {
                    return -0x7ffffffffffffffd;
                }
                if (uVar1 == 0) {
                    return -0x7ffffffffffffffd;
                }
                if (*(arg3_00 + 0x30) < uVar1) {
                    return -0x7ffffffffffffffd;
                }
                if (0x3f < uVar1) {
                    return -0x7ffffffffffffffd;
                }
                iVar3 = CONCAT71(arg4 >> 8,uVar1);
                uVar6 = CONCAT71(arg2 >> 8,uVar2);
                arg1_00 = iVar7;
                if (iVar7 == arg3) {
                    iVar3 = fcn.00016858(arg1_00,uVar6,arg3_00,iVar3);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    arg2 = CONCAT71(uVar6 >> 8,uVar8);
                    arg4 = 0;
                    iVar3 = fcn.000181e0(arg1_00,arg2,CONCAT71(iVar3 >> 8,uVar2),6);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    iVar4 = uVar2 * 0x3c + in_stack_00000028;
                }
                else {
                    iVar3 = fcn.00016858(arg1_00,uVar6,arg3_00,iVar3);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    arg4 = 0;
                    iVar3 = fcn.000181e0(arg1_00,CONCAT71(uVar6 >> 8,uVar9),CONCAT71(iVar3 >> 8,uVar2),8);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    arg2 = in_stack_00000028;
                    *(iVar7 + 0x80 + (uVar9 * 0x3c + arg2) * 2) = uStack_48;
                    iVar4 = uVar2 * 0x3c + arg2;
                }
                *(iVar7 + 0xa0 + iVar4 * 2) = uStack_48;
                if (arg3_00 == arg1) {
                    iVar3 = fcn.000181e0(arg3_00,CONCAT71(arg2 >> 8,uVar1),CONCAT71(iVar3 >> 8,uVar5),3);
                    if (-1 < iVar3) {
                        *(arg3_00 + 0x80 + (uVar1 * 0x3c + in_stack_00000028) * 2) = uStack_48;
                        return iVar3;
                    }
                    return iVar3;
                }
                uStackX_8 = uStackX_8 - 1;
                iVar7 = arg3_00;
                uVar9 = uVar1;
            } while (*(arg1 + 8) < uStackX_8);
        }
    }
    return iVar3;
}


/* fcn.00016978 @ 0x16978 */

ulong fcn.00016978(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint8_t uVar4;
    int64_t iVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((((iVar3 != 0) && (uVar4 = arg2, uVar4 != 0)) && (uVar4 <= *(iVar3 + 0x30))) &&
       ((uVar4 < 0x40 && (iVar5 = (arg2 & 0xff) * 0x78, *(iVar5 + 0x38 + iVar3) == 1)))) {
        uVar2 = *(iVar5 + 0x4a + iVar3);
        if (0x28 < uVar2) {
            uVar2 = 0x29;
        }
        if (arg3 <= uVar2) {
            puVar1 = iVar5 + 0x6c + iVar3;
            *puVar1 = *puVar1 & ~(1 << (arg3 - 10U & 0x1f));
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00019118 @ 0x19118 */

ulong fcn.00019118(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    int64_t in_stack_00000028;
    ulong auStack_38 [2];
    
    if ((((arg1 == 0) || (arg3 == 0)) || (arg4 == 0)) || ((in_stack_00000028 == 0 || (arg2 == 0)))) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar1 = (**(arg1 + 0x58))(arg1,0,4,arg2,auStack_38,0);
        if (-1 < iVar1) {
            iStackX_8 = arg2 << 0xc;
            iVar1 = (**(arg1 + 0x48))(arg1,2,auStack_38[0],&iStackX_8,arg4);
            if ((-1 < iVar1) && (iStackX_8 == arg2 << 0xc)) {
                *arg3 = auStack_38[0];
                return 0;
            }
            (**(arg1 + 0x60))(arg1,arg2,auStack_38[0]);
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


