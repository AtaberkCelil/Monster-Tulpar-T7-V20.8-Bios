// decompiled by r2ghidra: 1710_SecureBootDXE.pe32
// functions: 21

/* entry0 @ 0x103d0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00010418(arg1,arg2);
    iVar1 = fcn.00010590(arg1,arg2);
    if ((iVar1 < 0) && (*0x11418 != 0)) {
        fcn.000107b8();
        (**(*0x113f8 + 0x48))(*0x11418);
    }
    return iVar1;
}


/* fcn.00010418 @ 0x10418 */

void fcn.00010418(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int iVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uchar auStack_18 [16];
    
    *0x113f8 = *(arg2 + 0x60);
    *0x11408 = *(arg2 + 0x58);
    *0x113f0 = arg2;
    *0x11400 = arg1;
    fcn.0001074c();
    puVar6 = fcn.0001074c();
    do {
        uVar2 = *puVar6;
        uVar9 = uVar2;
        if (uVar2 == 0xffff) {
            puVar6 = NULL;
code_r0x0001047e:
            if (puVar6 == NULL) {
                uVar7 = fcn.000103a0();
                fcn.00010390();
                uVar4 = in(0x1808);
                fcn.00010370(uVar9,0x1808);
                while( true ) {
                    iVar5 = in(0x1808);
                    uVar8 = ((uVar4 & 0xffffff) + 0x16b) - iVar5;
                    uVar9 = uVar8;
                    if ((uVar8 >> 0x17 & 1) != 0) break;
                    func_0x00010360();
                }
                fcn.00010370(uVar9,0x1808);
                if ((uVar7 >> 9 & 1) == 0) {
                    fcn.00010390();
                }
                else {
                    fcn.00010380();
                }
code_r0x000104e7:
                *0x11420 = 0x10000;
                if ((*0x11418 != NULL) || ((*0x11418 = fcn.00010d5c(uVar9,0), *0x11418 != NULL && (0x37 < *0x11420))))
                {
                    uVar9 = *0x11420;
                    piVar3 = *0x11418;
                    piVar1 = *0x11418 + 5;
                    (*0x11418)[1] = *0x11420 - 0x28;
                    *piVar3 = piVar1;
                    piVar3[2] = 0;
                    piVar3[3] = (uVar9 - 0x38) + piVar1;
                    piVar3[4] = piVar1;
                }
                (**(*0x11408 + 0x18))(auStack_18,0);
                section..text(0x111e8,auStack_18,0x10);
                return;
            }
            if ((*0x111d8 == *(puVar6 + 4)) && (*0x111e0 == *(puVar6 + 8))) goto code_r0x000104e7;
        }
        else if (uVar2 == 4) goto code_r0x0001047e;
        puVar6 = puVar6 + puVar6[1];
    } while( true );
}


/* fcn.00010590 @ 0x10590 */

int64_t fcn.00010590(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong uStackX_8;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    if (*0x11438 == 0) {
        *0x11430 = *(arg2 + 0x60);
        *0x11428 = *(arg2 + 0x58);
        *0x11438 = arg2;
    }
    var_20h = 7;
    (**(*0x11428 + 0x48))(L"SecureBootSetup",0x111b0,&var_28h,&var_20h,0x111d0);
    iVar1 = fcn.00010810(arg2);
    if (((iVar1 == 0) || ((*(iVar1 + 0xc) != 0x20 && (*(iVar1 + 0xc) != 0x12)))) &&
       (fcn.000108c4(4), *0x111d2 == '\x01')) {
        var_20h = 1;
        iVar1 = (**(*0x11428 + 0x48))(L"SetupMode",0x110f0,0,&var_20h,&uStackX_8);
        if ((-1 < iVar1) && (uStackX_8 == '\x01')) {
            fcn.000108c4(1);
            fcn.000108c4(2);
            (**(*0x11428 + 0x48))(L"SetupMode",0x110f0,0,&var_20h,&uStackX_8);
            if (uStackX_8 == '\0') {
                var_20h_2._0_1_ = 1;
                (**(*0x11428 + 0x58))(L"DeployedMode",0x110f0,6,1,&var_20h_2);
                if (*0x111d0 == '\x01') {
                    iVar1 = (**(*0x11430 + 0x50))(0x200,8,0x10578,0,&var_18h);
                    if (-1 < iVar1) {
                        iVar1 = (**(*0x11430 + 0xa8))(0x11120,var_18h,&var_bp_10h);
                        return iVar1;
                    }
                    return iVar1;
                }
            }
        }
    }
    return -0x5fffffffffffffff;
}


/* fcn.000107b8 @ 0x107b8 */

void fcn.000107b8(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x11418;
    if (*0x11418 != NULL) {
        if ((*0x11418)[1] != 0) {
            fcn.00010300(**0x11418,(*0x11418)[1],0);
        }
        piVar1[2] = piVar1[3];
        *piVar1[3] = *piVar1;
        iVar2 = 0;
        do {
            *(iVar2 + 8 + piVar1[2]) = 0;
            iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        piVar1[4] = *piVar1;
    }
    return;
}


/* fcn.0001074c @ 0x1074c */

int64_t fcn.0001074c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11410 == 0) {
        *0x11410 = 0;
        if (*(*0x113f0 + 0x68) != 0) {
            piVar2 = *(*0x113f0 + 0x70);
            do {
                if ((*0x11190 == *piVar2) && (*0x11198 == piVar2[1])) {
                    *0x11410 = (*(*0x113f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x11410;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x113f0 + 0x68));
        }
    }
    return *0x11410;
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


/* fcn.00010362 @ 0x10362 */

void fcn.00010362(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.00010d5c @ 0x10d5c */

int64_t fcn.00010d5c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x113f8 + 0x40))(6,0x10000,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3648 named .text
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


/* fcn.00010810 @ 0x10810 */

ulong fcn.00010810(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(arg1 + 0x68);
    iVar3 = *(arg1 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.00010848(iVar3);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.000108c4 @ 0x108c4 */

int64_t fcn.000108c4(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int16_t *noname_1;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t aiStackX_10 [3];
    
    if ((arg1 & 7U) == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar8 = 0;
        iVar3 = -0x7ffffffffffffff2;
        uVar9 = 0;
        iVar1 = iVar8;
        do {
            piVar6 = *(uVar9 * 8 + 0x112a0);
            if (piVar6 == NULL) break;
            uVar5 = 0;
            iVar1 = iVar8;
            if (*0x112a0 != NULL) {
                piVar2 = *0x112a0;
                iVar7 = iVar8;
                do {
                    noname_1 = piVar6;
                    for (; (*piVar2 != 0 && (*piVar2 == *noname_1)); piVar2 = piVar2 + 1) {
                        noname_1 = noname_1 + 1;
                    }
                    if (*piVar2 == *noname_1) {
code_r0x000109a8:
                        aiStackX_10[0] = 0;
                        aiStackX_10[1] = 0;
                        if ((arg1 & 6U) != 0) {
                            iVar1 = fcn.00010e58(*(uVar5 * 8 + 0x112d8),noname_1,0,aiStackX_10);
                            if (iVar1 < 0) break;
                        }
                        if (3 < uVar5) goto code_r0x00010a37;
                        for (piVar2 = *(uVar5 * 8 + 0x112a0); (*piVar2 != 0 && (*piVar2 == *piVar6));
                            piVar2 = piVar2 + 1) {
                            piVar6 = piVar6 + 1;
                        }
                        iVar1 = 0x11110;
                        if (*piVar2 != *piVar6) {
code_r0x00010a37:
                            iVar1 = 0x110f0;
                        }
                        iVar1 = fcn.00010ac8(arg1 & 0xffff,*(uVar5 * 8 + 0x112a0),*(uVar5 * 8 + 0x11260),iVar1);
                        if (aiStackX_10[0] != 0) {
                            (**(*0x113f8 + 0x48))();
                        }
                        break;
                    }
                    noname_1 = piVar6;
                    for (piVar2 = *(iVar7 + 0x11260); (*piVar2 != 0 && (*piVar2 == *noname_1)); piVar2 = piVar2 + 1) {
                        noname_1 = noname_1 + 1;
                    }
                    if (*piVar2 == *noname_1) goto code_r0x000109a8;
                    uVar4 = uVar5 + 1;
                    uVar5 = uVar4;
                    iVar7 = uVar4 * 8;
                    piVar2 = *(iVar7 + 0x112a0);
                } while (piVar2 != NULL);
            }
            if (iVar1 < 0) {
                iVar7 = iVar8;
                if (iVar1 != -0x7ffffffffffffff2) {
                    iVar7 = iVar1;
                }
                iVar1 = iVar7;
            }
            else {
                iVar3 = iVar1;
            }
            uVar9 = uVar9 + 1;
        } while (-1 < iVar1);
        if (iVar3 < 0) {
            iVar1 = iVar3;
        }
    }
    return iVar1;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010848 @ 0x10848 */

int64_t fcn.00010848(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x111c0;
    piVar2 = piVar1;
    if (((arg1 & 7) != 0) && ((arg1 & 7) == 0)) {
        iVar4 = 8;
        do {
            if (*piVar2 != *piVar3) break;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
        piVar3 = piVar3 + 1;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *piVar3) break;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
    }
    return *piVar2 - *piVar3;
}


/* fcn.00010e58 @ 0x10e58 */

int64_t fcn.00010e58(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t arg3_00;
    uint64_t *arg4;
    int64_t iStackX_18;
    ulong in_stack_00000028;
    uint64_t auStack_28 [2];
    
    iStackX_18 = arg2;
    arg1_01 = fcn.00010d94(arg1);
    iVar1 = fcn.00010dd4(arg1_01,arg1,arg2,arg3);
    if (iVar1 < 0) {
        iStackX_18 = 0;
        arg3_00 = 0;
        arg4 = auStack_28;
        iVar1 = (**(*0x113f8 + 0x138))(2,70000,0,arg4,&iStackX_18,in_stack_00000028);
        if (-1 < iVar1) {
            uVar3 = 0;
            uVar2 = auStack_28[0];
            if (auStack_28[0] != 0) {
                do {
                    arg1_00 = *(iStackX_18 + uVar3 * 8);
                    if (arg1_00 != arg1_01) {
                        iVar1 = fcn.00010dd4(arg1_00,arg1,arg3_00,arg4);
                        if (-1 < iVar1) goto code_r0x00010f35;
                        uVar2 = auStack_28[0];
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar2);
            }
            if (uVar3 == uVar2) {
                iVar1 = -0x7ffffffffffffff2;
            }
        }
code_r0x00010f35:
        if (iStackX_18 != 0) {
            (**(*0x113f8 + 0x48))();
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010ac8 @ 0x10ac8 */

int64_t fcn.00010ac8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uchar auStack_58 [48];
    
    if (((arg2 == 0) || (arg4 == 0)) ||
       ((arg1 != 1 && (((in_stack_00000028 == 0 || (in_stack_00000030 == 0)) || (((arg1 & 4U) != 0 && (arg3 == 0))))))))
    {
        return -0x7ffffffffffffffe;
    }
    uVar4 = 6;
    if ((arg1 & 4U) != 0) {
        iVar3 = *(in_stack_00000028 + 0x10) + 0x10;
        iVar3 = (**(*0x11428 + 0x58))(arg3,0x110f0,6,in_stack_00000030 - iVar3,iVar3 + in_stack_00000028);
        return iVar3;
    }
    iStackX_10 = 0;
    iVar3 = (**(*0x11428 + 0x48))(arg2,arg4,0,&iStackX_10,0);
    if ((iVar3 == -0x7ffffffffffffffb) && ((arg1 & 1U) != 0)) {
        fcn.00010cc4(auStack_58);
        uVar4 = 0x27;
        iVar3 = (**(*0x11428 + 0x58))(arg2,arg4,0x27,0x28,auStack_58);
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    iVar2 = 0;
    if (iVar3 != -0x7ffffffffffffff2) {
        iVar2 = iVar3;
    }
    if ((arg1 & 2U) != 0) {
        uVar1 = uVar4 | 0x61;
        if ((arg1 & 8U) == 0) {
            uVar1 = uVar4 | 0x21;
        }
        iVar2 = (**(*0x11428 + 0x58))(arg2,arg4,uVar1,in_stack_00000030);
        if (iVar2 == -0x7ffffffffffffff2) {
            return 0;
        }
        if (iVar2 < 0) {
            return iVar2;
        }
        in_stack_00000030 = 0;
        (**(*0x11428 + 0x48))(arg2,arg4,0,&stack0x00000030,0);
        if (((arg1 & 8U) != 0) && (iStackX_10 == in_stack_00000030)) {
            iVar2 = -0x7fffffffffffffec;
        }
    }
    return iVar2;
}


/* fcn.00010cc4 @ 0x10cc4 */

void fcn.00010cc4(int64_t arg1)

{
    int32_t var_bp_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    var_bp_10h = 0xb0107e8;
    var_ch._0_4_ = 0x1a370d;
    var_ch._4_4_ = 0;
    var_4h = 0;
    if (*0x11428 != 0) {
        (**(*0x11428 + 0x18))(&var_bp_10h,0);
        var_ch._0_4_ = var_ch & 0xffffff;
    }
    var_4h = 0;
    var_ch._4_4_ = 0;
    if (arg1 != &var_bp_10h) {
        section..text(arg1,&var_bp_10h,0x10);
    }
    *(arg1 + 0x10) = 0x18;
    *(arg1 + 0x14) = 0xef10200;
    *(arg1 + 0x18) = *0x11150;
    *(arg1 + 0x20) = *0x11158;
    return;
}


/* fcn.00010d94 @ 0x10d94 */

ulong fcn.00010d94(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x113f8 + 0x98))(*0x11400,0x110e0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.00010dd4 @ 0x10dd4 */

ulong fcn.00010dd4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg3;
    if (arg1 != 0) {
        iStackX_20 = arg4;
        iVar1 = (**(*0x113f8 + 0x98))(arg1,70000,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,arg2,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


