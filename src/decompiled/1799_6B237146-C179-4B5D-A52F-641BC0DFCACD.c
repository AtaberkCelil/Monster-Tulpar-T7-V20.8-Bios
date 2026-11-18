// decompiled by r2ghidra: 1799_6B237146-C179-4B5D-A52F-641BC0DFCACD.pe32
// functions: 198

/* entry0 @ 0x102bc */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t in_R9;
    int64_t aiStackX_18 [2];
    
    fcn.00010360(arg1,arg2);
    iVar1 = (**(*0x35158 + 0x98))(arg1,0x30cc0,aiStackX_18);
    if (iVar1 < 0) {
        fcn.0002fd60(0x80000000,0x334a0,iVar1,in_R9);
        fcn.0002fe18(0x334f0,0x74,0x334c8);
    }
    *(aiStackX_18[0] + 0x58) = 0x10284;
    iVar1 = fcn.0001053c(arg1);
    if ((iVar1 < 0) && (*0x35198 != 0)) {
        (**(*(arg2 + 0x60) + 0x70))();
    }
    return iVar1;
}


/* fcn.0001182c @ 0x1182c */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001182c(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    ulong uStack_38;
    ulong uStack_30;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x35158 + 0x138))(0,0,0,&uStackX_18,&iStackX_10);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStackX_18 != 0) {
            do {
                (**(*0x35158 + 0x110))(*(iStackX_10 + uVar2 * 8),arg1,0);
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_18);
        }
        uVar2 = 0;
        if (uStackX_18 != 0) {
            do {
                iVar1 = (**(*0x35158 + 0x98))(*(iStackX_10 + uVar2 * 8),0x32958,&var_28h);
                if ((-1 < iVar1) && (*(var_28h + 0x20) == arg1)) {
                    (**(*0x35158 + 0x90))(arg1,0x32958);
                    iVar1 = (**(*0x35158 + 0x98))(*(iStackX_10 + uVar2 * 8),0x32968,&uStack_38);
                    if (-1 < iVar1) {
                        (**(*0x35158 + 0x90))(arg1,0x32968,uStack_38);
                    }
                    iVar1 = (**(*0x35158 + 0x98))(*(iStackX_10 + uVar2 * 8),0x30ce0,&uStack_30);
                    if (-1 < iVar1) {
                        (**(*0x35158 + 0x90))(arg1,0x30ce0,uStack_30);
                    }
                    iVar1 = (**(*0x35158 + 0x98))(*(iStackX_10 + uVar2 * 8),0x30cd0,&var_bp_20h);
                    if (-1 < iVar1) {
                        (**(*0x35158 + 0x90))(arg1,0x30cd0,var_bp_20h);
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_18);
        }
        if (iStackX_10 != 0) {
            (**(*0x35158 + 0x48))();
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    
    arg3 = 0;
    *0x351a0 = arg2;
    (**(*(arg2 + 0x60) + 0x50))(0x201,0x10,0x2fe98,0,0x35198);
    *0x35160 = arg1;
    if (arg1 == 0) {
        fcn.0002fe18(0x34d60,0x2c,0x34d40);
    }
    *0x35158 = *(arg2 + 0x60);
    *0x35150 = arg2;
    if (*0x35158 == 0) {
        fcn.0002fe18(0x34d60,0x38,0x34db0);
    }
    *0x35168 = *(arg2 + 0x58);
    if (*0x35168 == 0) {
        fcn.0002fe18(0x34e80,0x29,0x34e60);
    }
    iVar1 = (**(*0x35158 + 0x140))(0x30d60,0,0x35170);
    if (iVar1 < 0) {
        fcn.0002fd60(0x80000000,0x334a0,iVar1,arg3);
        fcn.0002fe18(0x34f40,0x52,0x334c8);
    }
    iVar1 = (**(*0x35158 + 0x140))(0x30d50,0,0x35190);
    if (iVar1 < 0) {
        fcn.0002fd60(0x80000000,0x334a0,iVar1,arg3);
        fcn.0002fe18(0x34f40,0x58,0x334c8);
    }
    iVar1 = (**(*0x35158 + 0x140))(0x30d20,0,0x35180);
    if (iVar1 < 0) {
        fcn.0002fd60(0x80000000,0x334a0,iVar1,arg3);
        fcn.0002fe18(0x34f40,0x5e,0x334c8);
    }
    (**(*0x35158 + 0x140))(0x32978,0,0x35178);
    //WARNING: Could not recover jumptable at 0x00010533. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x35158 + 0x140))(0x30d30,0,0x35188);
    return;
}


/* fcn.0002fd60 @ 0x2fd60 */

void fcn.0002fd60(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_18 = arg2;
    iStackX_20 = arg3;
    fcn.0002fd84(noname_0,arg1,&iStackX_18);
    return;
}


/* fcn.0002fd84 @ 0x2fd84 */

void fcn.0002fd84(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar auStack_208 [512];
    
    if (*0x35148 == '\0') {
        if (arg2 == 0) {
            fcn.0002fe18(0x34ce8,0x5d,0x34cd0);
        }
        if ((arg1 & 0x80000042U) != 0) {
            fcn.0002ebc4(auStack_208,0x200,arg2,arg3);
            if ((*0x351a0 != 0) && (iVar1 = *(*0x351a0 + 0x50), iVar1 != 0)) {
                (**(iVar1 + 8))(iVar1,auStack_208);
            }
        }
    }
    return;
}


/* fcn.0002fe18 @ 0x2fe18 */

void fcn.0002fe18(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar auStack_208 [520];
    
    if (*0x35148 != '\0') {
        return;
    }
    fcn.0002ec38(auStack_208,0x200,0x34d28,0x33538);
    if ((*0x351a0 != 0) && (iVar1 = *(*0x351a0 + 0x50), iVar1 != 0)) {
        (**(iVar1 + 8))(iVar1,auStack_208);
    }
    do {
        func_0x00010280();
    } while( true );
}


/* fcn.0001053c @ 0x1053c */

int64_t fcn.0001053c(int64_t arg1)

{
    int64_t arg2;
    int64_t arg3;
    
    arg3 = 0;
    *0x329e8 = arg1;
    *0x329f0 = arg1;
    arg2 = (**(*0x35158 + 0x148))(0x329f0,0x32958,0x329c8);
    if (arg2 < 0) {
        fcn.0002fd60(0x80000000,0x334a0,arg2,arg3);
        fcn.0002fe18(0x34f90,0x3f,0x334c8);
    }
    else {
        arg2 = (**(*0x35158 + 0x148))(0x329f0,0x32968,0x32bb8,0x30ce0,0x32ba0,0x30cd0,0x33138,0);
    }
    return arg2;
}


/* fcn.0002e758 @ 0x2e758 */

int64_t fcn.0002e758(int64_t arg1,int64_t arg2)

{
    if (arg2 != 0) {
        if (arg1 == 0) {
            fcn.0002fe18(0x345a8,0x2f,0x33a48);
        }
        if (-arg1 < arg2) {
            fcn.0002fe18(0x345a8,0x30,0x345e8);
        }
        arg1 = fcn.0002ea9c(arg1,arg2);
    }
    return arg1;
}


/* fcn.000183c8 @ 0x183c8 */

void fcn.000183c8(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    char cVar3;
    uint16_t uVar4;
    char cVar5;
    char *pcVar6;
    
    pcVar1 = *0x351a8;
    cVar5 = (*0x351a8)[7];
    if (arg1 != 0) {
        cVar2 = '\0';
        cVar3 = '\0';
        (*0x351a8)[7] = cVar5 + '\x01';
        uVar4 = pcVar1[4];
        pcVar6 = pcVar1;
        if (pcVar1[4] != 0) {
            do {
                cVar3 = cVar2 + *pcVar6;
                uVar4 = uVar4 - 1;
                pcVar6 = pcVar6 + 1;
                cVar2 = cVar3;
            } while (uVar4 != 0);
        }
        pcVar1[5] = pcVar1[5] - cVar3;
        return;
    }
    if (cVar5 != '\0') {
        (*0x351a8)[7] = cVar5 + -1;
    }
    uVar4 = pcVar1[4];
    cVar5 = '\0';
    pcVar6 = pcVar1;
    if (pcVar1[4] != 0) {
        do {
            cVar5 = cVar5 + *pcVar6;
            uVar4 = uVar4 - 1;
            pcVar6 = pcVar6 + 1;
        } while (uVar4 != 0);
    }
    pcVar1[5] = pcVar1[5] - cVar5;
    return;
}


/* fcn.00011590 @ 0x11590 */

int64_t fcn.00011590(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ushort uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    uchar *puVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    bool bVar10;
    int64_t iStackX_18;
    int64_t var_40h;
    uchar auStack_78 [32];
    int64_t var_50h;
    int64_t var_30h;
    
    *(arg3 + 0x2c88) = 0x114a4;
    *(arg3 + 0x2c90) = 0;
    *(arg3 + 0x2c98) = 0;
    *(arg3 + 0x2ca0) = 0x114b4;
    *(arg3 + 0x2ca8) = 0;
    *(arg3 + 0x2cb0) = 0;
    *(arg3 + 0x2cb8) = 0;
    *(arg3 + 0x2ace) = 0x31;
    *(arg3 + 0x2c50) = arg3;
    uVar9 = 0;
    *(arg3 + 0x2e5c) = 0;
    (**(*(arg3 + 0x2c58) + 0x70))(*(arg3 + 0x2c58),arg3 + 4,arg3 + 6,arg3 + 8,arg3 + 9);
    iVar4 = fcn.00024010(arg3);
    if (iVar4 < 0) {
        return iVar4;
    }
    iVar6 = *(arg3 + 0x2b18);
    if (iVar6 < 0x3b) {
        if (iVar6 != 0x3a) {
            if (iVar6 < 0x2e) {
                if ((iVar6 == 0x2d) || (iVar6 == 0x28)) goto code_r0x00011683;
                iVar6 = iVar6 + -0x29;
                bVar10 = iVar6 == 0;
            }
            else {
                iVar6 = iVar6 + -0x2e;
                bVar10 = iVar6 == 0;
            }
code_r0x00011672:
            if ((((!bVar10) && (iVar6 != 1)) && (iVar6 != 2)) && (iVar6 != 3)) goto code_r0x0001168b;
        }
    }
    else if ((((iVar6 != 0x3b) && (iVar6 != 0x3c)) && (iVar6 != 0x3d)) && ((iVar6 != 0x3e && (iVar6 != 0x3f)))) {
        iVar6 = iVar6 + -0x41;
        bVar10 = iVar6 == 0;
        goto code_r0x00011672;
    }
code_r0x00011683:
    fcn.00024618(arg3);
code_r0x0001168b:
    puVar7 = arg3 + 0x15;
    uVar8 = uVar9;
    do {
        uVar2 = fcn.000150ec(arg3,uVar8);
        puVar7[-1] = uVar2;
        uVar8 = uVar8 + 2;
        *puVar7 = uVar2 >> 8;
        puVar7 = puVar7 + 2;
    } while (uVar8 < 6);
    fcn.0002e7c8(auStack_78,0x20);
    puVar7 = auStack_78 + 1;
    do {
        uVar2 = fcn.000150ec(arg3,uVar9);
        puVar7[-1] = uVar2;
        uVar9 = uVar9 + 2;
        *puVar7 = uVar2 >> 8;
        puVar7 = puVar7 + 2;
    } while (uVar9 < 6);
    uVar3 = fcn.0001511c(arg3,0x40);
    *(arg3 + 0x2e84) = uVar3 & 0x7c800000;
    fcn.0002e758(&var_50h,0x25);
    fcn.0002e6bc(&var_50h + 4,auStack_78,0x20);
    var_50h._0_4_ = 0x250b03;
    iVar4 = arg2;
    while (cVar1 = fcn.000300b0(iVar4), cVar1 == '\0') {
        if (iVar4 == 0) {
            fcn.0002fe18(0x34ef0,200,0x34ed8);
        }
        iVar5 = fcn.00030068(iVar4);
        iVar4 = iVar4 + iVar5;
    }
    uVar9 = iVar4 - arg2;
    iVar5 = (**(*0x35158 + 0x40))(4,uVar9 + 0x29,&iStackX_18);
    if (iVar5 == 0) {
        *arg1 = iStackX_18;
        fcn.0002e6bc(iStackX_18,arg2,uVar9);
        iStackX_18 = iStackX_18 + uVar9;
        fcn.0002e6bc(iStackX_18,&var_50h,0x25);
        iStackX_18 = iStackX_18 + 0x25;
        fcn.0002e6bc(iStackX_18,iVar4,4);
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.0002e6bc @ 0x2e6bc */

int64_t fcn.0002e6bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (arg3 != 0) {
        if (~arg1 < arg3 - 1U) {
            fcn.0002fe18(0x34528,0x33,0x344e0);
        }
        if (~arg2 < arg3 - 1U) {
            fcn.0002fe18(0x34528,0x34,0x34568);
        }
        if (arg1 != arg2) {
            iVar1 = fcn.0002e8e8(arg1,arg2,arg3);
            return iVar1;
        }
    }
    return arg1;
}


/* fcn.00019498 @ 0x19498 */

void fcn.00019498(uint32_t arg1)

{
    ulong *arg3;
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char16_t *arg4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    arg4 = NULL;
    *(iVar2 + 0x902) = *(iVar2 + 0x96c);
    iVar4 = 0;
    *(iVar2 + 0x904) = *(iVar2 + 0x96e);
    *(iVar2 + 0x906) = *(iVar2 + 0x998);
    *(iVar2 + 0x908) = *(iVar2 + 0x99a);
    if (*0x32bf0 != -1) {
        iVar3 = 0;
        iVar1 = *0x32bf0;
        do {
            if (*(iVar2 + 0x96c) == iVar1) {
                if (*(iVar2 + 0x904) == *(iVar3 + 0x32bf2)) {
                    arg4 = *(iVar3 + 0x32bf8);
                }
                if (arg4 != NULL) break;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar4 * 0x10;
            iVar1 = *(iVar3 + 0x32bf0);
        } while (iVar1 != -1);
    }
    arg3 = iVar2 + 0x3788;
    *arg3 = 0;
    if (arg4 == NULL) {
        *(iVar2 + 0x8b0) = 0;
        fcn.00030358(0x33fac,*0x32bc8,arg3,0x33ae8);
        arg4 = L"Realtek Ethernet Controller";
    }
    else {
        *(iVar2 + 0x8b0) = arg4;
        fcn.00030358(0x33fac,*0x32bc8,arg3,arg4);
    }
    fcn.00030358(0x33fa8,*0x32bb0,arg3,arg4);
    return;
}


/* fcn.00013264 @ 0x13264 */

int64_t fcn.00013264(int64_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong *puVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iStackX_8;
    int64_t iVar9;
    
    iVar7 = *0x35158;
    piVar1 = arg1 + 0x30;
    puVar2 = arg1 + 0x38;
    puVar3 = arg1 + 0x40;
    *piVar1 = 0;
    puVar4 = arg1 + 0x28;
    *puVar2 = 0;
    *puVar3 = 0;
    *puVar4 = 0;
    iVar7 = (**(iVar7 + 0x140))(0x30d50,0,piVar1);
    if (-1 < iVar7) {
        iVar7 = (**(*0x35158 + 0x140))(0x30d60,0,puVar2);
        if (-1 < iVar7) {
            iVar7 = (**(*0x35158 + 0x140))(0x32948,0,puVar3);
            if (-1 < iVar7) {
                iVar7 = (**(*0x35158 + 0x140))(0x30d20,0,puVar4);
                if (-1 < iVar7) {
                    fcn.0002e6bc(arg1 + 0xa4,0x32a50,0x10);
                    iVar7 = (**(*0x35158 + 0x140))(200000,0,arg1 + 0x48);
                    if (-1 < iVar7) {
                        puVar5 = arg1 + 8;
                        *puVar5 = 0x119dc;
                        *(arg1 + 0x10) = 73000;
                        *(arg1 + 0x18) = 0x11e78;
                        iVar7 = (**(*0x35158 + 0x148))(arg1 + 0x50,0x30d70,puVar5,0);
                        if (-1 < iVar7) {
                            iStackX_8 = 0x7de;
                            iVar7 = (**(*(*0x35150 + 0x58) + 0x48))
                                              (L"RtkNvData",arg1 + 0xb4,0,&iStackX_8,arg1 + 0xc4);
                            if ((iVar7 < 0) || (iStackX_8 != 0x7de)) {
                                iStackX_8 = 0x7de;
                                *(arg1 + 0x204) = 0;
                            }
                            iVar6 = *(arg1 + 0x3410);
                            if (((((iVar6 == 0x36) || (iVar6 == 0x37)) || (iVar6 == 0x38)) ||
                                ((iVar6 == 0x39 || (iVar6 == 0x3a)))) ||
                               ((iVar6 == 0x3b || ((iVar6 == 0x3c || (iVar6 == 0x3d)))))) {
                                *(arg1 + 0x208) = 0;
                                if ((*(arg1 + 0x3751) == '\0') || (*(arg1 + 0x3731) == '\x01')) {
                                    *(arg1 + 0x206) = 0;
                                }
                                else {
                                    *(arg1 + 0x206) = 1;
                                    fcn.00014844(arg1);
                                }
                                if (*(arg1 + 0x3758) == '\x01') {
                                    *(arg1 + 0x20a) = 1;
                                }
                                else {
                                    *(arg1 + 0x20a) = 0;
                                }
                            }
                            else {
                                *(arg1 + 0x206) = 0;
                            }
                            iVar8 = 0x7de;
                            iVar7 = 3;
                            (**(*(*0x35150 + 0x58) + 0x58))(L"RtkNvData",arg1 + 0xb4,3,0x7de,arg1 + 0xc4);
                            iVar9 = arg1 + 0xc4;
                            fcn.000139c0(arg1,arg1 + 0xa4,iVar7,iVar8);
                            iVar7 = fcn.00013ba4(arg1);
                            if (iVar7 < 0) {
                                iVar7 = (**(*piVar1 + 8))(*piVar1,*(arg1 + 0x20));
                                if (-1 < iVar7) {
                                    iVar8 = *(arg1 + 0x50);
                                    if (iVar8 != 0) {
                                        (**(*0x35158 + 0x150))(iVar8,0x30d70,puVar5,0,iVar9);
                                    }
                                    *piVar1 = 0;
                                    *puVar2 = 0;
                                    *puVar3 = 0;
                                    *puVar4 = 0;
                                }
                            }
                            else {
                                iVar7 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return iVar7;
}


/* fcn.0002b070 @ 0x2b070 */

void fcn.0002b070(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t arg2_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e59) != '\0') {
        iVar1 = *(arg1_00 + 0x2b18);
        if (((iVar1 == 0x36) || (iVar1 == 0x37)) || (arg2_00 = 0xb8, iVar1 == 0x38)) {
            arg2_00 = 0x10;
        }
        if (iVar1 - 0x37U < 3) {
            uVar3 = fcn.0002a6dc(arg1_00,arg2_00);
            uVar2 = uVar3 | 0x100;
            if (arg2 == '\0') {
                uVar2 = uVar3 & 0xfeff;
            }
            fcn.0002ab04(arg1_00,arg2_00,uVar2);
        }
    }
    return;
}


/* fcn.0002ad94 @ 0x2ad94 */

void fcn.0002ad94(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t arg2_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e59) != '\0') {
        iVar1 = *(arg1_00 + 0x2b18);
        if (((iVar1 == 0x36) || (iVar1 == 0x37)) || (arg2_00 = 0xb8, iVar1 == 0x38)) {
            arg2_00 = 0x10;
        }
        uVar3 = fcn.0002a6dc(arg1_00,arg2_00);
        uVar2 = uVar3 | 0x800;
        if (arg2 == '\0') {
            uVar2 = uVar3 & 0xf7ff;
        }
        fcn.0002ab04(arg1_00,arg2_00,uVar2);
    }
    return;
}


/* fcn.0002acb0 @ 0x2acb0 */

void fcn.0002acb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong in_R9;
    int32_t in_stack_00000078;
    
    cVar1 = *(arg1 + 0x2b3c);
    uVar3 = 0;
    if (cVar1 == '\x01') {
        fcn.000151ac(arg1,arg3,0xb0);
        fcn.000151ac(arg1,arg2 & 0xffffU | 0x8000f000,0xb4);
        fcn.000151ac(arg1,0,0x7c);
        do {
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(100);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
            }
            iVar2 = fcn.0001511c(arg1,0xb4);
            uVar3 = uVar3 + 1;
        } while ((iVar2 < 0) && (uVar3 < 5));
        if ((uVar3 == 5) && (iVar2 < 0)) {
            *(arg1 + 0x2e58) = 1;
        }
    }
    else if (cVar1 == '\x02') {
        fcn.000159b0(arg1,arg2 & 0xffffU,arg3,CONCAT71(in_R9 >> 8,2),in_stack_00000078);
    }
    else if (cVar1 == '\x03') {
        fcn.00015e34(arg1,arg2,arg2 & 0xffff,arg3 & 0xffffffff);
    }
    return;
}


/* fcn.0002a84c @ 0x2a84c */

uint fcn.0002a84c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    ulong in_R8;
    
    cVar1 = *(arg1 + 0x2b3c);
    uVar4 = 0;
    if (cVar1 == '\x01') {
        fcn.000151ac(arg1,arg2 & 0xffff | 0xf000,0xb4);
        fcn.000151ac(arg1,0,0x7c);
        do {
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(100);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
            }
            iVar2 = fcn.0001511c(arg1,0xb4);
            uVar4 = uVar4 + 1;
        } while ((-1 < iVar2) && (uVar4 < 5));
        if ((uVar4 == 5) && (-1 < iVar2)) {
            *(arg1 + 0x2e58) = 1;
            return 0xffffffff;
        }
        uVar3 = fcn.0001511c(arg1,0xb0);
    }
    else if (cVar1 == '\x02') {
        uVar3 = fcn.00015b30(arg1,arg2 & 0xffff,CONCAT71(in_R8 >> 8,2));
    }
    else {
        if (cVar1 != '\x03') {
            return 0xffffffff;
        }
        uVar3 = fcn.00015bb4(arg1,arg2,arg2 & 0xffff,0xbaf70000);
    }
    return uVar3;
}


/* fcn.00015c64 @ 0x15c64 */

void fcn.00015c64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = 0;
    uVar2 = arg2 & 3;
    arg2_00 = arg3;
    if (uVar2 == 3) {
        arg2_00 = arg2_00 << 0x18;
        uVar4 = 0x80008000;
    }
    else if (uVar2 == 2) {
        arg2_00 = arg2_00 << 0x10;
        uVar4 = 0x80004000;
    }
    else if (uVar2 == 1) {
        arg2_00 = arg2_00 << 8;
        uVar4 = 0x80002000;
    }
    else {
        uVar4 = 0x80001000;
    }
    fcn.000151ac(arg1,arg2_00,0x70);
    fcn.000151ac(arg1,(arg4 & 0xff) << 0x10 | arg2 & 0xfffffffc | uVar4,0x74);
    do {
        uVar3 = uVar3 + 1;
        iVar1 = fcn.0001511c(arg1,0x74);
        if (-1 < iVar1) break;
    } while (uVar3 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.0002a930 @ 0x2a930 */

void fcn.0002a930(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    unkbyte7 in_R9;
    uint32_t uVar7;
    
    uVar7 = 0;
    uVar1 = arg2 & 0xffffU;
    uVar6 = arg3 & 0xffU;
    if (*(arg1 + 0x2b3c) != '\x01') {
        if (*(arg1 + 0x2b3c) != '\x02') {
            return;
        }
        fcn.00015c64(arg1,arg2 & 0xffffU,arg3 & 0xffU,CONCAT71(in_R9,2));
        return;
    }
    if (uVar1 < 0x70) {
code_r0x0002aa1a:
        uVar3 = arg2 & 3;
        if (uVar3 == 3) {
            uVar6 = uVar6 << 0x18;
            uVar5 = 0x80008000;
        }
        else if (uVar3 == 2) {
            uVar6 = uVar6 << 0x10;
            uVar5 = 0x80004000;
        }
        else if (uVar3 == 1) {
            uVar6 = uVar6 << 8;
            uVar5 = 0x80002000;
        }
        else {
            uVar5 = 0x80001000;
        }
        fcn.000151ac(arg1,uVar6,0xb0);
        fcn.000151ac(arg1,uVar1 & 0xfffffffc | uVar5,0xb4);
        fcn.000151ac(arg1,0,0x7c);
        do {
            iVar2 = fcn.0001511c(arg1,0xb4);
            uVar7 = uVar7 + 1;
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(1);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
            }
        } while ((iVar2 < 0) && (uVar7 < 100));
        if ((uVar7 == 100) && (iVar2 < 0)) {
            *(arg1 + 0x2e58) = 1;
        }
    }
    else {
        uVar4 = arg2 & 0xfffc;
        uVar3 = arg2 & 3;
        if ((arg2 & 3U) == 0) {
            uVar1 = fcn.0002a84c(arg1,uVar4);
            uVar6 = uVar1 & 0xffffff00 | uVar6;
        }
        else {
            if (uVar3 == 1) {
                uVar1 = fcn.0002a84c(arg1,uVar4);
                uVar1 = uVar1 & 0xffff00ff;
                uVar6 = uVar6 << 8;
            }
            else if (uVar3 == 2) {
                uVar1 = fcn.0002a84c(arg1,uVar4);
                uVar1 = uVar1 & 0xff00ffff;
                uVar6 = uVar6 << 0x10;
            }
            else {
                if (uVar3 != 3) goto code_r0x0002aa1a;
                uVar1 = fcn.0002a84c(arg1,uVar4);
                uVar1 = uVar1 & 0xffffff;
                uVar6 = uVar6 << 0x18;
            }
            uVar6 = uVar1 | uVar6;
        }
        fcn.0002acb0(arg1,uVar4,uVar6);
    }
    return;
}


/* fcn.0002a6dc @ 0x2a6dc */

uint16_t fcn.0002a6dc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    
    uVar7 = 0;
    uVar4 = 0xffff;
    uVar5 = arg2 & 0xffffU;
    if (*(arg1 + 0x2b3c) == '\x01') {
        uVar6 = arg2 & 3;
        if (uVar6 == 3) {
            uVar1 = 0x8000;
        }
        else if (uVar6 == 2) {
            uVar1 = 0xc000;
        }
        else {
            uVar1 = 0x3000;
            if (uVar6 == 1) {
                uVar1 = 0x6000;
            }
        }
        fcn.000151ac(arg1,uVar5 & 0xfffc | uVar1,0xb4);
        fcn.000151ac(arg1,0,0x7c);
        do {
            iVar2 = fcn.0001511c(arg1,0xb4);
            uVar7 = uVar7 + 1;
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(1);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
            }
        } while ((-1 < iVar2) && (uVar7 < 100));
        if ((uVar7 == 100) && (-1 < iVar2)) {
            *(arg1 + 0x2e58) = 1;
            if (uVar6 != 3) {
                return 0xffff;
            }
        }
        else {
            uVar3 = fcn.0001511c(arg1,0xb0);
            if (uVar6 != 3) {
                if (uVar6 == 2) {
                    uVar3 = uVar3 >> 0x10;
                }
                else if (uVar6 == 1) {
                    uVar3 = uVar3 >> 8;
                }
                goto code_r0x0002a826;
            }
            uVar4 = uVar3 >> 0x18 & 0xff;
        }
        uVar6 = fcn.0002a5a0(arg1,uVar5 + 1);
        uVar4 = uVar4 & 0xff | uVar6 << 8;
    }
    else {
        if (*(arg1 + 0x2b3c) != '\x02') {
            return 0xffff;
        }
        uVar3 = fcn.00015f48(arg1,arg2 & 0xffffU);
code_r0x0002a826:
        uVar4 = uVar3;
    }
    return uVar4;
}


/* fcn.00024010 @ 0x24010 */

ulong fcn.00024010(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    
    (**(*(arg1 + 0x2c58) + 0x30))(*(arg1 + 0x2c58),2,0,0x40,arg1 + 0x74);
    *(arg1 + 10) = *(arg1 + 0x74);
    *(arg1 + 0xc) = *(arg1 + 0x76);
    *(arg1 + 0x12) = *(arg1 + 0x7c);
    cVar1 = fcn.0001c1f8(arg1);
    if (cVar1 == '\0') {
        return 0x8000000000000007;
    }
    iVar8 = 0;
    uVar6 = fcn.000150bc(arg1,0x6c);
    *(arg1 + 0x2aec) = uVar6 >> 1 & 1;
    fcn.00021bdc(arg1);
    fcn.000219cc(arg1);
    uVar6 = arg1;
    if (*(arg1 + 0x2b39) == '\x01') {
        if (*(arg1 + 0x2b3a) == '\x01') {
            iVar8 = 0xd408;
            uVar2 = fcn.0001620c(arg1,0xd408);
            if ((uVar2 & 1) != 0) {
code_r0x000240f3:
                fcn.00024874(uVar6,2);
                if ((*(arg1 + 0x2b39) != '\0') && (*(arg1 + 0x2b3a) == '\x02')) {
                    fcn.00016450(arg1,0xa468,10,0);
                }
                iVar8 = 0;
                fcn.00024874(uVar6,3);
                if (*(arg1 + 0x2b39) != '\0') {
                    if (*(arg1 + 0x2b3a) == '\x01') {
                        uVar3 = fcn.0001620c(arg1,0xd408);
                        uVar4 = 0xfffe;
                        iVar8 = 0xd408;
                    }
                    else {
                        if (*(arg1 + 0x2b3a) != '\x02') goto code_r0x00024186;
                        uVar3 = fcn.0001620c(arg1,0xd42c);
                        uVar4 = 0xfeff;
                        iVar8 = 0xd42c;
                    }
                    fcn.00016134(uVar6,iVar8,uVar4 & uVar3);
                }
            }
        }
        else if (*(arg1 + 0x2b3a) == '\x02') {
            iVar8 = 0xd42c;
            uVar3 = fcn.0001620c(arg1,0xd42c);
            if ((uVar3 >> 8 & 1) != 0) goto code_r0x000240f3;
        }
    }
code_r0x00024186:
    fcn.0002a054(uVar6);
    fcn.00024938(arg1);
    fcn.00022b34(uVar6);
    fcn.0002b100(uVar6);
    if (*(arg1 + 0x2e59) != '\0') {
        iVar7 = *(arg1 + 0x2b18);
        *(arg1 + 0x220) = iVar7 == 0x3d;
        if ((((iVar7 == 0x36) || (iVar7 == 0x37)) || (iVar7 == 0x38)) || (iVar7 == 0x39)) {
            fcn.00018434(arg1);
            iVar8 = 0;
            fcn.000187d8(uVar6,2);
        }
        else if ((((iVar7 == 0x3a) || (iVar7 == 0x3b)) || ((iVar7 == 0x3c || (iVar7 == 0x3d)))) &&
                ((*(arg1 + 0x2e39) == '\0' && (*(arg1 + 0x2e5a) != '\x01')))) {
            fcn.00018434(arg1);
            cVar1 = fcn.00018a34(arg1);
            if (cVar1 == '\0') {
                iVar8 = 0;
                fcn.00018ecc(arg1,2);
                fcn.00019144(arg1);
                *(arg1 + 0x2e5a) = 1;
            }
        }
    }
    if (*(arg1 + 0x2b37) == '\0') {
        fcn.000246d8(uVar6);
        iVar8 = CONCAT71(iVar8 >> 8,0x1f);
        fcn.000153ec(arg1,iVar8,0);
        iVar7 = *(arg1 + 0x2b18);
        if (iVar7 < 0x25) {
            if (((iVar7 == 0x24) || (iVar7 == 7)) ||
               (((iVar7 == 8 || (((iVar7 == 9 || (iVar7 == 0xe)) || (iVar7 == 0xf)))) ||
                ((iVar7 == 0x10 || (iVar7 == 0x11)))))) goto code_r0x0002428d;
            iVar7 = iVar7 + -0x22;
code_r0x00024287:
            if ((iVar7 == 0) || (iVar7 == 1)) goto code_r0x0002428d;
        }
        else {
            if ((((iVar7 != 0x32) && (iVar7 != 0x33)) && (iVar7 != 0x34)) &&
               (((iVar7 != 0x35 && (iVar7 != 0x36)) && (iVar7 != 0x37)))) {
                iVar7 = iVar7 + -0x38;
                goto code_r0x00024287;
            }
code_r0x0002428d:
            fcn.000153ec(arg1,CONCAT71(iVar8 >> 8,0xe),0);
        }
        uVar3 = fcn.00015768(uVar6,0);
        fcn.000153ec(arg1,0,uVar3 & 0xf7ff);
    }
    fcn.0001d9ec(arg1);
    uVar3 = fcn.0001620c(arg1,0xd422);
    uVar4 = fcn.0001620c(arg1,0xd420);
    if (*(arg1 + 0x2b18) == 0x30) {
        uVar5 = 0xfe4d;
    }
    else {
        if (*(arg1 + 0x2b18) != 0x31) goto code_r0x00024333;
        uVar4 = uVar4 & 0xf77f;
        uVar5 = 0xbe0d;
    }
    uVar3 = uVar3 & uVar5;
code_r0x00024333:
    fcn.00016134(uVar6,0xd422,uVar3);
    fcn.00016134(uVar6,0xd420,uVar4);
    if (*(arg1 + 0x2b37) == '\0') {
        fcn.0001db38(arg1);
    }
    fcn.00020f04(arg1);
    fcn.00024a70(arg1);
    fcn.00024b48(arg1);
    if (*(arg1 + 0x2b18) == 0x3c) {
        fcn.0002a140(arg1);
    }
    return 0;
}


/* fcn.00024618 @ 0x24618 */

void fcn.00024618(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint64_t arg2;
    uint8_t uVar4;
    uint64_t arg3;
    
    uVar3 = 0;
    uVar1 = fcn.000150bc(arg1,0x50);
    fcn.0001514c(arg1,CONCAT71(uVar3 >> 8,uVar1) | 0xc0,0x50);
    arg3 = 0;
    do {
        if (*(arg1 + 0x2e35) == '\0') {
            arg2 = arg3 + 0xe0;
            uVar1 = fcn.00015a50(arg1,arg2,0);
            fcn.0001514c(arg1,CONCAT71(arg2 >> 8,uVar1),arg3);
        }
        else if ((arg3 & 1) == 0) {
            uVar2 = fcn.0001620c(arg1,arg3 + 0xd000);
            fcn.0001517c(arg1,uVar2,arg3);
        }
        uVar4 = arg3 + 1;
        arg3 = uVar4;
    } while (uVar4 < 6);
    fcn.000150bc(arg1,0x50);
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,1,0x50,&stack0x00000010);
    return;
}


/* fcn.000150ec @ 0x150ec */

ushort fcn.000150ec(int64_t arg1,int64_t arg2)

{
    ushort auStackX_10 [12];
    
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),0,2,arg2 & 0xffffffff,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0002e7c8 @ 0x2e7c8 */

int64_t fcn.0002e7c8(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint64_t uVar2;
    
    if (~arg1 < arg2 - 1U) {
        fcn.0002fe18(0x34658,0x30,0x34620);
    }
    puVar1 = arg1;
    if (((arg1 & 7U) == 0) && (7 < arg2)) {
        uVar2 = arg2 >> 3;
        arg2 = arg2 + uVar2 * -8;
        do {
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    else if (((arg1 & 3U) == 0) && (3 < arg2)) {
        uVar2 = arg2 >> 2;
        arg2 = arg2 + uVar2 * -4;
        do {
            *puVar1 = 0;
            puVar1 = puVar1 + 4;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    for (; arg2 != 0; arg2 = arg2 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001511c @ 0x1511c */

uint fcn.0001511c(int64_t arg1,int64_t arg2)

{
    uint auStackX_10 [6];
    
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),0,4,arg2 & 0xffffffff,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00030068 @ 0x30068 */

ushort fcn.00030068(int64_t arg1)

{
    char *arg1_00;
    uint32_t arg2;
    char *arg3;
    
    if (arg1 == 0) {
        arg3 = "Node != ((void *) 0)";
        arg2 = 0xb0;
        arg1_00 = "d:\\uefi\\edk2\\MdePkg\\Library\\UefiDevicePathLib\\DevicePathUtilities.c";
    }
    else {
        if (arg1 + 2 != NULL) goto code_r0x000300a7;
        arg3 = "Buffer != ((void *) 0)";
        arg2 = 0x1e;
        arg1_00 = "d:\\uefi\\edk2\\MdePkg\\Library\\BaseLib\\Unaligned.c";
    }
    fcn.0002fe18(arg1_00,arg2,arg3);
code_r0x000300a7:
    return *(arg1 + 2);
}


/* fcn.000300b0 @ 0x300b0 */

uchar fcn.000300b0(int64_t arg1)

{
    uchar uVar1;
    
    uVar1 = 0;
    if (arg1 == 0) {
        fcn.0002fe18(0x34ef0,0x101,0x34ed8);
        fcn.0002fe18(0x34ef0,0xe6,0x34ed8);
        fcn.0002fe18(0x34ef0,0x81,0x34ed8);
    }
    if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.000309a8 @ 0x309a8 */

int16_t * fcn.000309a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    bool bVar1;
    int64_t iVar2;
    int64_t arg1_01;
    uint64_t uVar3;
    int16_t *arg1_02;
    int64_t iVar4;
    int16_t iVar5;
    int16_t *piVar6;
    char16_t *pcVar7;
    uint64_t uVar8;
    
    iVar2 = 0;
    if (arg2 != 0) {
        iVar2 = fcn.0002e2b8(arg2);
    }
    arg1_01 = 0;
    uVar3 = 0;
    if (arg3 != 0) {
        arg1_01 = fcn.00030128(arg3);
        if (arg1_01 == 0) {
            return NULL;
        }
        uVar3 = fcn.0003015c(arg1_01);
    }
    iVar2 = (uVar3 + iVar2 * 2) * 2 + 0x32;
    arg1_00 = iVar2 * 2;
    arg1_02 = fcn.0002fed0(arg1_00);
    if (arg1_02 != NULL) {
        pcVar7 = L"GUID=";
        fcn.0002dbd4(arg1_02,iVar2,0x33a28);
        iVar4 = fcn.0002e2b8(arg1_02);
        piVar6 = arg1_02 + iVar4;
        if (arg1 != 0) {
            uVar8 = 0;
            do {
                fcn.0002ec58(piVar6,(arg1_00 - piVar6) + arg1_02,pcVar7,*(uVar8 + arg1));
                iVar4 = fcn.0002db6c(piVar6,iVar2 - (piVar6 - arg1_02 >> 1));
                uVar8 = uVar8 + 1;
                piVar6 = piVar6 + iVar4;
            } while (uVar8 < 0x10);
        }
        pcVar7 = L"&NAME=";
        fcn.0002df08(arg1_02,iVar2,0x33a18);
        iVar4 = fcn.0002e2b8(piVar6);
        uVar8 = 0;
        piVar6 = piVar6 + iVar4;
        if (arg2 != 0) {
            for (; *arg2 != 0; arg2 = arg2 + 2) {
                fcn.0002ec58(piVar6,(arg1_00 - piVar6) + arg1_02,pcVar7,*arg2);
                iVar4 = fcn.0002db6c(piVar6,iVar2 - (piVar6 - arg1_02 >> 1));
                piVar6 = piVar6 + iVar4;
            }
        }
        pcVar7 = L"&PATH=";
        fcn.0002df08(arg1_02,iVar2,0x33a38);
        iVar4 = fcn.0002e2b8(piVar6);
        piVar6 = piVar6 + iVar4;
        if (uVar3 != 0) {
            do {
                fcn.0002ec58(piVar6,(arg1_00 - piVar6) + arg1_02,pcVar7,*(uVar8 + arg1_01));
                iVar4 = fcn.0002db6c(piVar6,iVar2 - (piVar6 - arg1_02 >> 1));
                uVar8 = uVar8 + 1;
                piVar6 = piVar6 + iVar4;
            } while (uVar8 < uVar3);
        }
        *piVar6 = 0;
        bVar1 = false;
        iVar5 = *arg1_02;
        piVar6 = arg1_02;
        while (iVar5 != 0) {
            if (iVar5 == 0x3d) {
                bVar1 = true;
            }
            else if (iVar5 == 0x26) {
                bVar1 = false;
            }
            else if ((bVar1) && (iVar5 - 0x41U < 6)) {
                *piVar6 = iVar5 + 0x20;
            }
            piVar6 = piVar6 + 1;
            iVar5 = *piVar6;
        }
        return arg1_02;
    }
    return NULL;
}


/* fcn.0002e2b8 @ 0x2e2b8 */

int64_t fcn.0002e2b8(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg2;
    char *arg3;
    
    iVar1 = 0;
    if (arg1 == 0) {
        arg3 = "String != ((void *) 0)";
        arg2 = 0x24;
    }
    else {
        if ((arg1 & 1U) == 0) goto code_r0x0002e301;
        arg3 = "((UINTN)String & 0x00000001) == 0";
        arg2 = 0x25;
    }
    fcn.0002fe18(0x343e0,arg2,arg3);
code_r0x0002e301:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}


/* fcn.0002fed0 @ 0x2fed0 */

void fcn.0002fed0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0002fea0(arg1,arg1);
    if (arg1_00 != 0) {
        fcn.0002e758(arg1_00,arg1);
    }
    return;
}


/* fcn.0002fea0 @ 0x2fea0 */

ulong fcn.0002fea0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x35158 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0002eba4 @ 0x2eba4 */

void fcn.0002eba4(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg2;
    fcn.0002eb10(noname_0,noname_1,arg1,&iStackX_20);
    return;
}


/* fcn.0002eb10 @ 0x2eb10 */

void fcn.0002eb10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x347a0,0x47,0x34778);
    }
    if ((arg3 & 1U) != 0) {
        fcn.0002fe18(0x347a0,0x48,0x347d8);
    }
    fcn.0002eee0(arg1,arg2 >> 1,0x140,arg3,in_stack_00000058,in_stack_00000060);
    return;
}


/* fcn.00013668 @ 0x13668 */

int64_t fcn.00013668(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    int16_t iVar3;
    int16_t *piVar4;
    
    if (arg1 == 0) {
        fcn.0002fe18(0x335f8,0xadd,0x33948);
    }
    bVar1 = false;
    iVar3 = *arg1;
    piVar4 = arg1;
    while (iVar3 != 0) {
        if (iVar3 == 0x3d) {
            bVar2 = true;
        }
        else {
            bVar2 = false;
            if (((iVar3 != 0x26) && (bVar2 = bVar1, bVar1)) && (iVar3 - 0x41U < 6)) {
                *piVar4 = iVar3 + 0x20;
            }
        }
        bVar1 = bVar2;
        piVar4 = piVar4 + 1;
        iVar3 = *piVar4;
    }
    return arg1;
}


/* fcn.0002ff70 @ 0x2ff70 */

void fcn.0002ff70(void)

{
    int64_t arg2;
    int64_t in_R9;
    
    arg2 = (**(*0x35158 + 0x48))();
    if (arg2 < 0) {
        fcn.0002fd60(0x80000000,0x334a0,arg2,in_R9);
        fcn.0002fe18(0x34dd0,0x335,0x334c8);
    }
    return;
}


/* fcn.00013800 @ 0x13800 */

char fcn.00013800(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t arg2_00;
    
    if (arg1 == 0) {
        fcn.0002fe18(0x335f8,0xb32,0x339f8);
    }
    arg2_00 = fcn.000309a8(arg2,arg3,0);
    if (arg2_00 != 0) {
        cVar1 = '\x01';
        if (((arg2 == 0) || (cVar1 = fcn.000136e4(arg1,arg2_00,0x33a28,0x33a18), cVar1 != '\0')) && (arg3 != 0)) {
            cVar1 = fcn.000136e4(arg1,arg2_00,0x33a18,0x33a38);
        }
        fcn.0002ff70(arg2_00);
        return cVar1;
    }
    return '\0';
}


/* fcn.0002e484 @ 0x2e484 */

int64_t fcn.0002e484(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    
    uVar2 = fcn.0002e2b8(arg1);
    if ((uVar2 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
        fcn.0002fe18(0x343e0,0xec,0x34450);
    }
    uVar2 = fcn.0002e2b8(arg2);
    if ((uVar2 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
        fcn.0002fe18(0x343e0,0xed,0x34468);
    }
    if (*arg2 != 0) {
        for (; iVar1 = *arg1, iVar1 != 0; arg1 = arg1 + 2) {
            piVar3 = arg2;
            piVar4 = arg1;
            if (iVar1 == *arg2) {
                do {
                    if (iVar1 == 0) break;
                    piVar4 = piVar4 + 1;
                    piVar3 = piVar3 + 1;
                    iVar1 = *piVar4;
                } while (iVar1 == *piVar3);
            }
            if (*piVar3 == 0) {
                return arg1;
            }
            if (*piVar4 == 0) break;
        }
        arg1 = 0;
    }
    return arg1;
}


/* fcn.0002dbd4 @ 0x2dbd4 */

ulong fcn.0002dbd4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t arg3_00;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0xea,0x341f0);
    }
    if ((arg3 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0xeb,0x34218);
    }
    if (arg1 == 0) {
        arg3_00 = 0xf0;
    }
    else if (arg3 == 0) {
        arg3_00 = 0xf1;
    }
    else {
        if (arg2 != 0) {
            uVar2 = fcn.0002db6c(arg3,arg2);
            if (arg2 <= uVar2) {
                uVar3 = 0x8000000000000005;
                arg3_00 = 0x103;
                goto code_r0x0002dc58;
            }
            if (arg1 < arg3) {
code_r0x0002dcf4:
                if (arg1 + arg2 * 2 <= arg3) {
code_r0x0002dd23:
                    iVar1 = *arg3;
                    if (iVar1 != 0) {
                        arg3 = arg3 - arg1;
                        do {
                            *arg1 = iVar1;
                            arg1 = arg1 + 2;
                            iVar1 = *(arg3 + arg1);
                        } while (iVar1 != 0);
                    }
                    *arg1 = 0;
                    return 0;
                }
            }
            else if (arg3 + (uVar2 + 1) * 2 <= arg1) {
                if (arg3 < arg1) goto code_r0x0002dd23;
                goto code_r0x0002dcf4;
            }
            uVar3 = 0x800000000000000f;
            arg3_00 = 0x108;
            goto code_r0x0002dc58;
        }
        arg3_00 = 0xfd;
    }
    uVar3 = 0x8000000000000002;
code_r0x0002dc58:
    fcn.0002fd60(0x400000,0x34270,0x341b8,arg3_00);
    return uVar3;
}


/* fcn.00013acc @ 0x13acc */

ulong fcn.00013acc(int64_t arg1,int64_t noname_1,int64_t noname_2,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_20;
    ulong in_stack_00000028;
    ulong auStack_18 [2];
    
    auStack_18[0] = 0x7de;
    iStackX_20 = arg2;
    iVar1 = fcn.000138c0(arg1,noname_1,noname_2,0);
    if (iVar1 != 0) {
        iVar2 = fcn.0002e2b8(0x33c60);
        iVar3 = fcn.0002e2b8(iVar1);
        iVar2 = iVar2 * 2 + iVar3 * 2;
        iVar3 = fcn.0002fed0(iVar2 + 4);
        fcn.0002eba4(iVar3,iVar2 + 4,0x33a98,0x33c60);
        fcn.0002ff70(iVar1);
        if (iVar3 != 0) {
            iVar1 = (**(*(arg1 + 0x28) + 0x20))(*(arg1 + 0x28),iVar3,in_stack_00000028,auStack_18,&iStackX_20);
            fcn.0002ff70(iVar3);
            if (-1 < iVar1) {
                return 1;
            }
        }
    }
    return 0;
}


/* fcn.0002b9d4 @ 0x2b9d4 */

int64_t fcn.0002b9d4(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        fcn.0002fe18(0x34120,0xa5,0x34108);
    }
    iVar2 = 0;
    cVar1 = *arg1;
    while (cVar1 != '\0') {
        arg1 = arg1 + 1;
        iVar2 = iVar2 + 1;
        cVar1 = *arg1;
    }
    return iVar2;
}


/* fcn.000305f0 @ 0x305f0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.000305f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int64_t arg1_00;
    uint64_t uVar1;
    uint64_t uVar2;
    ushort *arg1_01;
    int64_t iVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t uStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    uchar auStack_68 [4];
    int iStack_64;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int32_t var_bp_20h;
    int32_t var_1ch;
    int32_t var_bp_18h;
    int8_t var_14h;
    int64_t var_bp_10h;
    
    uVar2 = 0;
    uVar6 = uVar2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar5 = &iStackX_18;
        iVar3 = arg3;
        do {
            iVar7 = 0;
            uVar1 = fcn.00030544(iVar3,0,0,0);
            if (uVar2 <= uVar1 >> 1) {
                uVar2 = fcn.00030544(iVar3,0,0,iVar7);
                uVar2 = uVar2 >> 1;
            }
            piVar5 = piVar5 + 1;
            uVar6 = uVar6 + 1;
            iVar3 = *piVar5;
        } while (iVar3 != 0);
        if (uVar6 != 0) goto code_r0x0003068a;
    }
    fcn.0002fe18(0x34fe0,0x1b0,0x34fc8);
code_r0x0003068a:
    if (uVar2 == 0) {
        fcn.0002fe18(0x34fe0,0x1b5,0x35010);
    }
    iVar3 = *(*0x35150 + 0x40);
    fcn.0002e6bc(auStack_68,*(iVar3 + 0x48),0x18);
    (**(iVar3 + 0x18))(iVar3,iStack_64,&iStack_80);
    (**(iVar3 + 0x40))(iVar3,0);
    (**(iVar3 + 0x28))(iVar3,arg1);
    uStack_98 = iStack_88 - 3U;
    if (uVar6 < iStack_88 - 3U) {
        uStack_98 = uVar6;
    }
    uVar6 = iStack_80 - 2U;
    if (uVar2 < iStack_80 - 2U) {
        uVar6 = uVar2;
    }
    uVar1 = (iStack_88 - uStack_98) - 3 >> 1;
    uVar2 = (iStack_80 - uVar6) - 2 >> 1;
    uStack_70 = uVar2;
    arg1_01 = fcn.0002fed0(uVar6 * 2 + 6);
    if (arg1_01 == NULL) {
        fcn.0002fe18(0x34fe0,0x1e0,0x35020);
    }
    fcn.00030bd8(arg1_01,uVar6 * 2 + 4,0x2500);
    *arg1_01 = 0x250c;
    *(arg1_01 + uVar6 + 1) = 0x2510;
    (**(iVar3 + 0x38))(iVar3,uVar2,uVar1);
    iVar7 = uVar1 + 1;
    (**(iVar3 + 8))(iVar3,arg1_01);
    if (arg3 != 0) {
        piStack_90 = &iStackX_18;
        uVar1 = uStack_98;
        do {
            if (uVar1 == 0) break;
            fcn.00030bd8(arg1_01,uVar6 * 2 + 4,0x20);
            *arg1_01 = 0x2502;
            *(arg1_01 + uVar6 + 1) = 0x2502;
            (**(iVar3 + 0x38))(iVar3,uVar2);
            (**(iVar3 + 8))(iVar3);
            uVar4 = 0;
            uStack_98 = fcn.00030544(arg3,0,0,0);
            uStack_98 = uStack_98 >> 1;
            if (uVar6 < uStack_98) {
                fcn.00030544(arg3,CONCAT71(uVar4 >> 8,1),uVar6,&uStack_98);
                iStack_78 = fcn.0002fed0(uStack_98 * 2 + 2);
                if (iStack_78 == 0) {
                    fcn.0002fe18(0x34fe0,0x204,0x35038);
                }
                arg1_00 = iStack_78;
                arg2_00 = uStack_98 + 1;
                fcn.0002dd60(iStack_78,arg2_00,arg3,uStack_98 - 3);
                fcn.0002df08(arg1_00,arg2_00,0x35058);
                uVar2 = uStack_70;
                (**(iVar3 + 0x38))(iVar3,uStack_70 + 1,iVar7);
                (**(iVar3 + 8))(iVar3,arg1_00);
                fcn.0002ff70(arg1_00);
            }
            else {
                (**(iVar3 + 0x38))(iVar3,(uVar6 - uStack_98 >> 1) + 1 + uVar2,iVar7);
                (**(iVar3 + 8))(iVar3,arg3);
            }
            uVar1 = uVar1 - 1;
            piStack_90 = piStack_90 + 1;
            iVar7 = iVar7 + 1;
            arg3 = *piStack_90;
        } while (arg3 != 0);
    }
    fcn.00030bd8(arg1_01,uVar6 * 2 + 4,0x2500);
    *arg1_01 = 0x2514;
    *(arg1_01 + uVar6 + 1) = 0x2518;
    (**(iVar3 + 0x38))(iVar3,uVar2,iVar7);
    (**(iVar3 + 8))(iVar3,arg1_01);
    fcn.0002ff70(arg1_01);
    (**(iVar3 + 0x40))(iVar3,var_50h._4_1_);
    (**(iVar3 + 0x38))(iVar3,var_58h._4_4_,var_50h);
    (**(iVar3 + 0x28))(iVar3,var_58h);
    if (arg2 != 0) {
        while (iVar3 = (**(*(*0x35150 + 0x30) + 8))(*(*0x35150 + 0x30),arg2), iVar3 < 0) {
            if (iVar3 == -0x7ffffffffffffffa) {
                (**(*0x35158 + 0x60))(1,*(*0x35150 + 0x30) + 0x10,&var_48h);
            }
        }
    }
    return;
}


/* fcn.0001435c @ 0x1435c */

ulong fcn.0001435c(int64_t arg1)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uchar auStackX_8 [2];
    int16_t iStackX_a;
    int64_t iStackX_10;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t var_e0h;
    int16_t var_102h;
    int64_t var_270h;
    int64_t var_400h;
    int64_t var_590h;
    int64_t var_720h;
    int64_t var_900h;
    int64_t var_908h;
    int64_t var_910h;
    int64_t var_918h;
    int16_t aiStack_9a8 [17];
    ushort auStack_986 [183];
    int16_t aiStack_818 [17];
    ushort auStack_7f6 [183];
    uint8_t auStack_688 [400];
    uint8_t auStack_4f8 [400];
    uchar auStack_368 [400];
    uchar auStack_1d8 [408];
    
    fcn.0002e7c8(auStack_688,200);
    fcn.0002e7c8(aiStack_9a8,200);
    fcn.0002e7c8(auStack_4f8,200);
    fcn.0002e7c8(aiStack_818,200);
    uStackX_18 = 200;
    (**(*(arg1 + 0x38) + 8))(*(arg1 + 0x38),"en-US",*(arg1 + 0x20),0x85,auStack_1d8,&uStackX_18,0);
    iVar4 = 0x84;
    uStackX_18 = 200;
    (**(*(arg1 + 0x38) + 8))(*(arg1 + 0x38),"en-US",*(arg1 + 0x20),0x84,auStack_368,&uStackX_18,0);
    while( true ) {
        bVar1 = true;
        fcn.0002eba4(aiStack_9a8,0x16,0x33b70,iVar4);
        fcn.0002eba4(aiStack_818,0x16,0x33b88,iVar4);
        iStackX_20 = fcn.0002e2b8(aiStack_9a8);
        iStackX_10 = fcn.0002e2b8(aiStack_818);
        uVar8 = 0;
        uVar6 = 0;
        while( true ) {
            while( true ) {
                while( true ) {
                    iVar4 = iStackX_10 + uVar8;
                    iVar5 = iStackX_20 + uVar6;
                    uVar9 = uVar6 + 1;
                    aiStack_9a8[iVar5] = (-bVar1 & 0x3f) + 0x20;
                    aiStack_818[iVar4] = (-bVar1 & 0xffc1) + 0x5f;
                    if (uVar9 < 0x11) {
                        piVar7 = aiStack_9a8 + iVar5 + 1;
                        uVar2 = uVar9;
                        do {
                            uVar2 = uVar2 + 1;
                            *piVar7 = 0x20;
                            piVar7 = piVar7 + 1;
                        } while (uVar2 < 0x11);
                    }
                    auStack_986[iStackX_20] = 0;
                    uVar2 = uVar8 + 1;
                    if (uVar2 < 0x11) {
                        piVar7 = aiStack_818 + iVar4 + 1;
                        uVar3 = uVar2;
                        do {
                            uVar3 = uVar3 + 1;
                            *piVar7 = 0x20;
                            piVar7 = piVar7 + 1;
                        } while (uVar3 < 0x11);
                    }
                    auStack_7f6[iStackX_10] = 0;
                    fcn.000305f0(0x17,auStackX_8,auStack_368,0x33ba0);
                    if (_auStackX_8 == 0) break;
                    if (_auStackX_8 == 0x17) {
                        return 0x8000000000000003;
                    }
                }
                if (iStackX_a == 0xd) break;
                if (iStackX_a == 8) {
                    if (bVar1) {
                        if (uVar6 != 0) {
                            aiStack_9a8[iVar5] = 0x20;
                            (auStack_688 + (uVar6 - 1) * 2)[0] = 0;
                            (auStack_688 + (uVar6 - 1) * 2)[1] = 0;
                            uVar6 = uVar6 - 1;
                        }
                    }
                    else if (uVar8 != 0) {
                        aiStack_818[iVar4] = 0x20;
                        (auStack_4f8 + (uVar8 - 1) * 2)[0] = 0;
                        (auStack_4f8 + (uVar8 - 1) * 2)[1] = 0;
                        uVar8 = uVar8 - 1;
                    }
                }
                else if (((iStackX_a != 0) && (iStackX_a != 9)) && (iStackX_a != 10)) {
                    if (bVar1) {
                        if (uVar6 < 0x10) {
                            *(auStack_688 + uVar6 * 2) = iStackX_a;
                            aiStack_9a8[iVar5] = iStackX_a;
                            uVar6 = uVar9;
                        }
                    }
                    else if (uVar8 < 0x10) {
                        *(auStack_4f8 + uVar8 * 2) = iStackX_a;
                        aiStack_818[iVar4] = 0x2a;
                        uVar8 = uVar2;
                    }
                }
            }
            uVar9 = 0;
            if (!bVar1) break;
            bVar1 = false;
        }
        iVar4 = fcn.0002e314(auStack_688,0x33be8);
        if ((iVar4 == 0) && (iVar4 = fcn.0002e314(auStack_4f8,0x33c00), iVar4 == 0)) break;
        iVar4 = fcn.0002e2b8(auStack_688);
        iVar5 = fcn.0002b9d4(*(arg1 + 0xb00));
        if (iVar5 == iVar4) {
            iVar4 = fcn.0002b9d4(*(arg1 + 0xb00) + 0x10);
            iVar5 = fcn.0002e2b8(auStack_4f8);
            if (iVar4 == iVar5) {
                iVar4 = fcn.0002e2b8(auStack_688);
                uVar8 = uVar9;
                if (iVar4 != 0) {
                    do {
                        if (*(uVar8 + *(arg1 + 0xb00)) != auStack_688[uVar8 * 2]) goto code_r0x00014676;
                        uVar8 = uVar8 + 1;
                        uVar6 = fcn.0002e2b8(auStack_688);
                    } while (uVar8 < uVar6);
                }
                iVar4 = fcn.0002e2b8(auStack_4f8);
                if (iVar4 == 0) break;
                while (*(uVar9 + 0x10 + *(arg1 + 0xb00)) == auStack_4f8[uVar9 * 2]) {
                    uVar9 = uVar9 + 1;
                    uVar8 = fcn.0002e2b8(auStack_4f8);
                    if (uVar8 <= uVar9) goto code_r0x0001481a;
                }
            }
        }
code_r0x00014676:
        iVar4 = 0;
        fcn.000305f0(0x17,auStackX_8,0x33c18,0);
        fcn.0002e7c8(auStack_688,200);
        fcn.0002e7c8(aiStack_9a8,200);
        fcn.0002e7c8(auStack_4f8,200);
        fcn.0002e7c8(aiStack_818,200);
    }
code_r0x0001481a:
    *(arg1 + 0x208) = 1;
    return 0;
}


/* fcn.0002ba14 @ 0x2ba14 */

void fcn.0002ba14(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if (arg2 == 0) {
        fcn.0002fe18(0x34120,0xb4,0x34158);
    }
    if (arg1 == 0) {
        fcn.0002fe18(0x34120,0xb5,0x34168);
    }
    uVar3 = 0;
    iVar1 = fcn.0002e2b8(arg2);
    if (iVar1 != 0) {
        do {
            *(uVar3 + arg1) = *(arg2 + uVar3 * 2);
            uVar3 = uVar3 + 1;
            uVar2 = fcn.0002e2b8(arg2);
        } while (uVar3 < uVar2);
    }
    *(uVar3 + arg1) = 0;
    return;
}


/* fcn.0002bbb8 @ 0x2bbb8 */

ulong fcn.0002bbb8(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    uint16_t *puVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    puVar3 = CONCAT44(in_register_00000014,arg2);
    uVar5 = 0;
    uVar4 = uVar5;
    if (*puVar3 != 0) {
        do {
            if (3 < uVar4) {
                return 0x8000000000000002;
            }
            uVar1 = *puVar3;
            uVar2 = uVar5;
            if (0x2f < uVar1) {
                do {
                    if (0x39 < uVar1) break;
                    puVar3 = puVar3 + 1;
                    uVar2 = uVar1 + (uVar2 * 5 + -0x18) * 2;
                    uVar1 = *puVar3;
                } while (0x2f < uVar1);
                if (0xff < uVar2) {
                    return 0x8000000000000002;
                }
            }
            *(uVar4 + arg1) = uVar2;
            uVar1 = *puVar3;
            if ((uVar1 != 0) && (uVar1 != 0x2e)) {
                return 0x8000000000000002;
            }
            if (uVar1 == 0x2e) {
                puVar3 = puVar3 + 1;
                uVar1 = *puVar3;
            }
            uVar4 = uVar4 + 1;
        } while (uVar1 != 0);
        if (uVar4 == 4) {
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00018a34 @ 0x18a34 */

ulong fcn.00018a34(int64_t arg1)

{
    uint32_t *puVar1;
    uchar uVar2;
    char cVar3;
    int16_t iVar4;
    uint16_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    uint64_t arg3;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    
    uVar14 = 0;
    iVar4 = fcn.000150ec(arg1,0x3c);
    if (iVar4 != 0) {
        fcn.0001517c(arg1,0,0x3c);
    }
    fcn.0002acb0(arg1,0x180,0x25);
    fcn.0002acb0(arg1,0x30,1);
    uVar10 = uVar14;
    while (iVar4 = fcn.000150ec(arg1,0x3e), -1 < iVar4) {
        (**(*0x35158 + 0xf8))(3000);
        if (1999 < uVar10) {
            return 1;
        }
        uVar10 = uVar10 + 1;
    }
    uVar5 = fcn.000150ec(arg1,0x3e);
    if (uVar5 != 0) {
        fcn.0001517c(arg1,uVar5,0x3e);
    }
    if ((*(arg1 + 0x2e5b) == '\x02') && (iVar6 = fcn.0002a84c(arg1,0x2c20), iVar6 == 0x25)) {
        fcn.0002acb0(arg1,0x2c20,0);
    }
    uVar7 = fcn.0002a84c(arg1,0x150);
    fcn.0002acb0(arg1,0x150,uVar7 | 0x20);
    uVar7 = fcn.0002a84c(arg1,0x150);
    uVar9 = 0x150;
    arg3 = uVar7 & 0xffffffdf;
    fcn.0002acb0(arg1,0x150,arg3);
    iVar13 = CONCAT71(uVar9 >> 8,0xfb);
    uVar2 = fcn.000191d4(arg1,iVar13);
    uVar11 = CONCAT71(iVar13 >> 8,uVar2) | 1;
    fcn.00019208(arg1,uVar11,CONCAT71(arg3 >> 8,0xfb));
    cVar3 = *(arg1 + 0x2e5b);
    if (cVar3 == '\x02') {
        uVar7 = fcn.0002a84c(arg1,0x80c);
        uVar11 = 0x80c;
        fcn.0002acb0(arg1,0x80c,uVar7 | 0x1000000);
        cVar3 = *(arg1 + 0x2e5b);
    }
    uVar7 = arg1;
    if (cVar3 == '\x03') {
        uVar8 = fcn.00015bb4(arg1,uVar11,0xc,0xbaf20000);
        fcn.00015e34(uVar7,uVar11,0xc,uVar8 & 0xffff0000);
    }
    fcn.0002acb0(arg1,0x180,0x26);
    uVar9 = 0;
    fcn.0002acb0(arg1,0x30,1);
    while (iVar4 = fcn.000150ec(arg1,0x3e), -1 < iVar4) {
        (**(*0x35158 + 0xf8))(3000);
        if (1999 < uVar10) {
            return 1;
        }
        uVar10 = uVar10 + 1;
    }
    uVar5 = fcn.000150ec(arg1,0x3e);
    if (uVar5 != 0) {
        uVar9 = 0;
        fcn.0001517c(arg1,uVar5,0x3e);
    }
    if ((*(arg1 + 0x2e5b) == '\x02') && (iVar6 = fcn.0002a84c(arg1,0x2c20), iVar6 == 0x26)) {
        uVar9 = 0;
        fcn.0002acb0(arg1,0x2c20,0);
    }
    iVar13 = CONCAT71(uVar9 >> 8,0xf8);
    fcn.00019208(arg1,0,iVar13);
    fcn.00019208(arg1,0,CONCAT71(iVar13 >> 8,0xf9));
    iVar13 = 4;
    uVar10 = uVar14;
    do {
        *(uVar10 + 4 + *(arg1 + 0x1f8)) = 0;
        *(uVar10 + 8 + *(arg1 + 0x1f8)) = *(arg1 + 0x1c0);
        *(uVar10 + 0xc + *(arg1 + 0x1f8)) = *(arg1 + 0x1c0) >> 0x20;
        iVar13 = iVar13 + -1;
        uVar10 = uVar10 + 0x10;
    } while (iVar13 != 0);
    iVar13 = 4;
    uVar10 = uVar14;
    do {
        uVar11 = uVar10 + 0x10;
        *(uVar10 + 4 + *(arg1 + 0x200)) = 0;
        *(uVar10 + 8 + *(arg1 + 0x200)) = *(arg1 + 0x198);
        *(uVar10 + 0xc + *(arg1 + 0x200)) = *(arg1 + 0x198) >> 0x20;
        iVar13 = iVar13 + -1;
        uVar10 = uVar11;
    } while (iVar13 != 0);
    do {
        *(*(arg1 + 0x200) + uVar14 * 0x10) = 0xb0000514;
        *(*(arg1 + 0x1f8) + uVar14 * 0x10) = 0xb000051c;
        if (uVar14 == '\x03') {
            puVar1 = *(arg1 + 0x200) + uVar14 * 0x10;
            *puVar1 = *puVar1 | 0x40000514;
            puVar1 = *(arg1 + 0x1f8) + uVar14 * 0x10;
            *puVar1 = *puVar1 | 0x4000051c;
            break;
        }
        uVar12 = uVar14 + 1;
        uVar14 = uVar12;
    } while (uVar12 < 4);
    if (*(arg1 + 0x2e5b) == '\x02') {
        fcn.0002acb0(arg1,0x890,*(arg1 + 0x1e0));
        fcn.0002acb0(arg1,0x894,*(arg1 + 0x1e0) >> 0x20);
        fcn.0002acb0(arg1,0x898,*(arg1 + 0x1d0));
        uVar11 = 0x89c;
        uVar14 = *(arg1 + 0x1d0) >> 0x20;
        fcn.0002acb0(arg1,0x89c,uVar14);
    }
    else {
        uVar14 = 0;
        if (*(arg1 + 0x2e5b) == '\x03') {
            fcn.00015e34(uVar7,uVar11,0x90,*(arg1 + 0x1e0));
            fcn.00015e34(uVar7,uVar11,0x94,*(arg1 + 0x1e0) >> 0x20);
            fcn.00015e34(uVar7,uVar11,0x98,*(arg1 + 0x1d0));
            uVar14 = 0;
            fcn.00015e34(uVar7,uVar11,0x9c,*(arg1 + 0x1d0) >> 0x20);
        }
    }
    iVar15 = CONCAT71(uVar14 >> 8,0xfa);
    iVar13 = CONCAT71(uVar11 >> 8,0x6f);
    fcn.00019208(arg1,iVar13,iVar15);
    iVar13 = CONCAT71(iVar13 >> 8,0xf8);
    uVar2 = fcn.000191d4(arg1,iVar13);
    iVar15 = CONCAT71(iVar15 >> 8,0xf8);
    uVar14 = CONCAT71(iVar13 >> 8,uVar2) | 0xa8;
    fcn.00019208(arg1,uVar14,iVar15);
    iVar13 = CONCAT71(uVar14 >> 8,0xf9);
    uVar2 = fcn.000191d4(arg1,iVar13);
    iVar15 = CONCAT71(iVar15 >> 8,0xf9);
    uVar14 = CONCAT71(iVar13 >> 8,uVar2) | 0xa8;
    fcn.00019208(arg1,uVar14,iVar15);
    iVar13 = CONCAT71(uVar14 >> 8,0xf8);
    uVar2 = fcn.000191d4(arg1,iVar13);
    iVar15 = CONCAT71(iVar15 >> 8,0xf8);
    uVar14 = CONCAT71(iVar13 >> 8,uVar2) | 1;
    fcn.00019208(arg1,uVar14,iVar15);
    iVar13 = CONCAT71(uVar14 >> 8,0xf9);
    uVar2 = fcn.000191d4(arg1,iVar13);
    fcn.00019208(arg1,CONCAT71(iVar13 >> 8,uVar2) | 1,CONCAT71(iVar15 >> 8,0xf9));
    return 0;
}


/* fcn.00018ecc @ 0x18ecc */

ulong fcn.00018ecc(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uchar uVar2;
    uint in_register_00000014;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong in_R8;
    int64_t iVar7;
    ulong uVar8;
    
    uVar6 = 0;
    uVar5 = 0;
    if (arg2 == 2) {
        *(*(arg1 + 0x210) + 5) = 0x58;
        *(*(arg1 + 0x210) + 6) = 2;
        if (*(arg1 + 0x221) == 3) {
            *(*(arg1 + 0x1f8) + 0x30) = 0xf000051c;
        }
        else {
            *(*(arg1 + 0x1f8) + *(arg1 + 0x221) * 0x10) = 0xb000051c;
        }
        iVar3 = CONCAT71(CONCAT44(in_register_00000014,arg2) >> 8,0xf9);
        uVar2 = fcn.000191d4(arg1,iVar3);
        iVar7 = CONCAT71(in_R8 >> 8,0xf9);
        uVar5 = CONCAT71(iVar3 >> 8,uVar2) | 1;
        fcn.00019208(arg1,uVar5,iVar7);
        iVar3 = CONCAT71(uVar5 >> 8,0xf9);
        uVar2 = fcn.000191d4(arg1,iVar3);
        uVar4 = CONCAT71(iVar3 >> 8,uVar2) | 2;
        fcn.00019208(arg1,uVar4,CONCAT71(iVar7 >> 8,0xf9));
        uVar5 = uVar6;
        while (*(*(arg1 + 0x1f8) + *(arg1 + 0x221) * 0x10) < 0) {
            (**(*0x35158 + 0xf8))(3000);
            if (1999 < uVar5) {
                return 1;
            }
            uVar5 = uVar5 + 1;
        }
        while( true ) {
            uVar4 = CONCAT71(uVar4 >> 8,0xfb);
            uVar5 = fcn.000191d4(arg1,uVar4);
            if ((uVar5 & 1) != 0) break;
            (**(*0x35158 + 0xf8))(3000);
            if (1999 < uVar6) {
                return 1;
            }
            uVar6 = uVar6 + 1;
        }
        if (*(arg1 + 0x222) == 3) {
            *(*(arg1 + 0x200) + 0x30) = 0xc0000514;
        }
        else {
            *(*(arg1 + 0x200) + *(arg1 + 0x222) * 0x10) = 0x80000514;
        }
        *(arg1 + 0x221) = -(*(arg1 + 0x221) < 3) & *(arg1 + 0x221) + 1;
        *(arg1 + 0x222) = -(*(arg1 + 0x222) < 3) & *(arg1 + 0x222) + 1;
    }
    else if (arg2 == 0x85) {
        uVar8 = 0x514;
        *(*(arg1 + 0x210) + 5) = 0x58;
        *(*(arg1 + 0x210) + 6) = 0x85;
        *(*(arg1 + 0x210) + 4) = 0x2c;
        iVar3 = *(arg1 + 0x208);
        fcn.0002e6bc(*(arg1 + 0x210) + 8,iVar3,0x514);
        if (*(arg1 + 0x221) == 3) {
            *(*(arg1 + 0x1f8) + 0x30) = 0xf000051c;
        }
        else {
            *(*(arg1 + 0x1f8) + *(arg1 + 0x221) * 0x10) = 0xb000051c;
        }
        iVar3 = CONCAT71(iVar3 >> 8,0xf9);
        uVar2 = fcn.000191d4(arg1,iVar3);
        iVar7 = CONCAT71(uVar8 >> 8,0xf9);
        uVar4 = CONCAT71(iVar3 >> 8,uVar2) | 1;
        fcn.00019208(arg1,uVar4,iVar7);
        iVar3 = CONCAT71(uVar4 >> 8,0xf9);
        uVar2 = fcn.000191d4(arg1,iVar3);
        fcn.00019208(arg1,CONCAT71(iVar3 >> 8,uVar2) | 2,CONCAT71(iVar7 >> 8,0xf9));
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(50000);
            uVar5 = uVar6;
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),50000);
        }
        while (uVar1 = *(arg1 + 0x221), *(*(arg1 + 0x1f8) + uVar1 * 0x10) < 0) {
            (**(*0x35158 + 0xf8))(3000);
            if (1999 < uVar5) {
                return 1;
            }
            uVar5 = uVar5 + 1;
        }
        if (uVar1 < 3) {
            *(arg1 + 0x221) = uVar1 + 1;
        }
        else {
            *(arg1 + 0x221) = 0;
        }
    }
    return 0;
}


/* fcn.00019144 @ 0x19144 */

void fcn.00019144(int64_t arg1)

{
    uchar uVar1;
    uint64_t uVar2;
    ulong in_RDX;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong in_R8;
    int64_t arg3;
    uint8_t auStackX_10 [24];
    
    iVar3 = CONCAT71(in_RDX >> 8,0xf9);
    uVar5 = 0;
    uVar1 = fcn.000191d4(arg1,iVar3);
    arg3 = CONCAT71(in_R8 >> 8,0xf9);
    uVar4 = CONCAT71(iVar3 >> 8,uVar1) & 0xfffffffffffffffe;
    fcn.00019208(arg1,uVar4,arg3);
    do {
        uVar4 = CONCAT71(uVar4 >> 8,0xfb);
        uVar2 = fcn.000191d4(arg1,uVar4);
        if ((uVar2 & 0x20) != 0) break;
        (**(*0x35158 + 0xf8))(3000);
        uVar5 = uVar5 + 1;
    } while (uVar5 < 2000);
    iVar3 = CONCAT71(uVar4 >> 8,0xfb);
    uVar1 = fcn.000191d4(arg1,iVar3);
    uVar4 = CONCAT71(iVar3 >> 8,uVar1) | 0x20;
    fcn.00019208(arg1,uVar4,CONCAT71(arg3 >> 8,0xfb));
    auStackX_10[0] = fcn.000191d4(arg1,CONCAT71(uVar4 >> 8,0xf8));
    auStackX_10[0] = auStackX_10[0] & 0xfe;
    if (*(arg1 + 0x2e5b) == '\x02') {
        (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,1,0xf8,auStackX_10);
        return;
    }
    if (*(arg1 + 0x2e5b) == '\x03') {
        fcn.000152c0(arg1,0xf8,auStackX_10[0]);
    }
    return;
}


/* fcn.000187d8 @ 0x187d8 */

ulong fcn.000187d8(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t noname_1;
    ulong in_R8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    iVar2 = *(arg1_00 + 0x2b18);
    if ((((iVar2 == 0x36) || (iVar2 == 0x37)) || (iVar2 == 0x38)) || (iVar2 == 0x39)) {
        noname_1 = arg2;
        fcn.00018768(arg1_00,arg2,in_R8,0);
        fcn.00018768(arg1_00,noname_1,in_R8,0x100);
        **(arg1_00 + 0x1f8) = 0x8000031c;
        *(*(arg1_00 + 0x1f8) + 8) = *(arg1_00 + 0x198);
        *(*(arg1_00 + 0x1f8) + 0xc) = *(arg1_00 + 0x198) >> 0x20;
        fcn.000151ac(arg1_00,*(arg1_00 + 0x1d0),0x70);
        fcn.000151ac(arg1_00,0x8000f0f0,0x74);
        iVar2 = fcn.0001511c(arg1_00,0x74);
        uVar4 = uVar3;
        while (iVar2 < 0) {
            (**(*0x35158 + 0xf8))(1000);
            if (1999 < uVar4) {
                return 0xff;
            }
            uVar4 = uVar4 + 1;
            iVar2 = fcn.0001511c(arg1_00,0x74);
        }
        fcn.000151ac(arg1_00,0,0x70);
        fcn.000151ac(arg1_00,0x8000f0f4,0x74);
        uVar4 = uVar3;
        while (iVar2 = fcn.0001511c(arg1_00,0x74), iVar2 < 0) {
            (**(*0x35158 + 0xf8))(1000);
            if (1999 < uVar4) {
                return 0xff;
            }
            uVar4 = uVar4 + 1;
        }
        fcn.000151ac(arg1_00,arg2,0x70);
        fcn.000151ac(arg1_00,0x8000f0c0,0x74);
        uVar4 = uVar3;
        while (iVar2 = fcn.0001511c(arg1_00,0x74), iVar2 < 0) {
            (**(*0x35158 + 0xf8))(1000);
            if (1999 < uVar4) {
                return 0xff;
            }
            uVar4 = uVar4 + 1;
        }
        if (arg2 == 0x85) {
            fcn.000150ec(arg1_00,0x3e);
            uVar3 = fcn.000150ec(arg1_00,0x3e);
            while ((uVar3 & 0x2000) == 0) {
                uVar3 = fcn.000150ec(arg1_00,0x3e);
            }
            fcn.0001517c(arg1_00,0x2000,0x3e);
        }
        else {
            uVar1 = fcn.000150ec(arg1_00,0x3e);
            if ((uVar1 & 0x2000) != 0) {
                uVar1 = fcn.000150ec(arg1_00,0x3e);
                fcn.0001517c(arg1_00,uVar1 | 0x2000,0x3e);
            }
            while (uVar4 = fcn.000150ec(arg1_00,0x3e), (uVar4 & 0x2000) == 0) {
                (**(*0x35158 + 0xf8))(1000);
                if (1999 < uVar3) {
                    return 0xff;
                }
                uVar3 = uVar3 + 1;
            }
        }
    }
    return 0;
}


/* fcn.0002bb34 @ 0x2bb34 */

ulong fcn.0002bb34(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iStackX_18;
    char acStackX_20 [8];
    
    iStackX_18 = arg3;
    uVar1 = fcn.0002e2b8(arg2);
    if ((uVar1 & 0xfffffffffffffffe) < 0x28) {
code_r0x0002bba3:
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = 0;
        do {
            iVar2 = fcn.0002b99c(*(arg2 + uVar1 * 4),&iStackX_18);
            if (iVar2 < 0) goto code_r0x0002bba3;
            iVar2 = fcn.0002b99c(*(arg2 + 2 + uVar1 * 4),acStackX_20);
            if (iVar2 < 0) goto code_r0x0002bba3;
            *(uVar1 + arg1) = iStackX_18 * '\x10' + acStackX_20[0];
            uVar1 = uVar1 + 1;
        } while (uVar1 < 10);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000139c0 @ 0x139c0 */

bool fcn.000139c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t noname_0;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t in_stack_00000028;
    
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    if (in_stack_00000028 == 0) {
        fcn.0002fe18(0x335f8,0xc4a,0x33a48);
    }
    iVar1 = fcn.0002e2b8(0x33c60);
    iVar1 = iVar1 * 2 + 0x42;
    noname_0 = fcn.0002fed0(iVar1);
    fcn.0002eba4(noname_0,iVar1,0x33a60,0x33c60);
    if (noname_0 != 0) {
        iVar1 = (**(*(arg1 + 0x28) + 0x18))
                          (*(arg1 + 0x28),noname_0,in_stack_00000028,0x7de,&iStackX_20,&iStackX_18);
        fcn.0002ff70(noname_0);
        if (-1 < iVar1) {
            iVar1 = fcn.0002e2b8(0x33c60);
            iVar1 = fcn.000138c0(arg1,arg2,in_stack_00000028,iStackX_20 + 2 + iVar1 * 2);
            fcn.0002ff70(iStackX_20);
            return iVar1 != 0;
        }
    }
    return false;
}


/* fcn.00014844 @ 0x14844 */

ulong fcn.00014844(uint32_t arg1)

{
    uint8_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int16_t iVar4;
    int16_t iVar5;
    int16_t iVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    uint8_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    int16_t iVar12;
    uchar auStack_1b8 [400];
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    if (*(iVar7 + 0xb00) == 0) {
        uVar2 = 0x8000000000000006;
    }
    else {
        fcn.0002e7c8(auStack_1b8,400);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00) + 0xe0;
        }
        else {
            iVar9 = *(iVar7 + 0xb10) + 0x134;
        }
        fcn.0002ba9c(auStack_1b8,iVar9);
        iVar9 = fcn.0002e2b8(auStack_1b8);
        fcn.0002eba4(iVar7 + 0x20c,iVar9 * 2 + 2,0x33c54,auStack_1b8);
        fcn.0002e7c8(auStack_1b8,400);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00) + 0xfc;
        }
        else {
            iVar9 = *(iVar7 + 0xb10) + 0x150;
        }
        fcn.0002ba9c(auStack_1b8,iVar9);
        iVar9 = fcn.0002e2b8(auStack_1b8);
        fcn.0002eba4(iVar7 + 0x22c,iVar9 * 2 + 2,0x33c54,auStack_1b8);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00);
            *(iVar7 + 0x2ac) = *(iVar9 + 0x58) >> 2 & 1;
            if (*(iVar9 + 0x40) != 0) {
                fcn.0002bc40(iVar7 + 0x2ae,iVar9 + 0x40);
                iVar9 = *(iVar7 + 0xb00);
            }
            if (*(iVar9 + 0x44) != 0) {
                fcn.0002bc40(iVar7 + 0x2ce,iVar9 + 0x44);
                iVar9 = *(iVar7 + 0xb00);
            }
            if (*(iVar9 + 0x48) != 0) {
                fcn.0002bc40(iVar7 + 0x2ee,iVar9 + 0x48);
                iVar9 = *(iVar7 + 0xb00);
            }
            if (*(iVar9 + 0x4c) != 0) {
                fcn.0002bc40(iVar7 + 0x30e,iVar9 + 0x4c);
                iVar9 = *(iVar7 + 0xb00);
            }
            uVar1 = *(iVar9 + 0x58) >> 9;
        }
        else {
            iVar9 = *(iVar7 + 0xb10);
            *(iVar7 + 0x2ac) = *(iVar9 + 0x70) >> 4 & 1;
            if (*(iVar9 + 0x44) != 0) {
                fcn.0002bc40(iVar7 + 0x2ae,iVar9 + 0x44);
                iVar9 = *(iVar7 + 0xb10);
            }
            if (*(iVar9 + 0x4c) != 0) {
                fcn.0002bc40(iVar7 + 0x2ce,iVar9 + 0x4c);
                iVar9 = *(iVar7 + 0xb10);
            }
            if (*(iVar9 + 0x54) != 0) {
                fcn.0002bc40(iVar7 + 0x2ee,iVar9 + 0x54);
                iVar9 = *(iVar7 + 0xb10);
            }
            if (*(iVar9 + 0x5c) != 0) {
                fcn.0002bc40(iVar7 + 0x30e,iVar9 + 0x5c);
                iVar9 = *(iVar7 + 0xb10);
            }
            uVar1 = *(iVar9 + 0x70) >> 8;
        }
        *(iVar7 + 0x32e) = uVar1 & 1;
        fcn.0002e7c8(auStack_1b8,400);
        fcn.0002ba9c(auStack_1b8,*(iVar7 + 0xb00));
        uVar3 = fcn.0002e2b8(auStack_1b8);
        if (uVar3 < 0x11) {
            iVar9 = fcn.0002e2b8(auStack_1b8);
            fcn.0002eba4(iVar7 + 0x354,iVar9 * 2 + 2,0x33c54,auStack_1b8);
        }
        fcn.0002e7c8(auStack_1b8,400);
        fcn.0002ba9c(auStack_1b8,*(iVar7 + 0xb00) + 0x10);
        fcn.0002e7c8(auStack_1b8,400);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00) + 0x21c;
        }
        else {
            iVar9 = *(iVar7 + 0xb10) + 0x270;
        }
        fcn.0002ba9c(auStack_1b8,iVar9);
        fcn.0002eba4(iVar7 + 0x394,0x12,0x33c54,auStack_1b8);
        fcn.0002e7c8(auStack_1b8,400);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00) + 0x224;
        }
        else {
            iVar9 = *(iVar7 + 0xb10) + 0x278;
        }
        fcn.0002ba9c(auStack_1b8,iVar9);
        fcn.0002eba4(iVar7 + 0x414,0x42,0x33c54,auStack_1b8);
        *(iVar7 + 0x494) = 1;
        fcn.0002e7c8(iVar7 + 0x496,0x80);
        piVar11 = iVar7 + 0x498;
        uVar3 = uVar10;
        do {
            iVar12 = 0x37;
            iVar6 = 0x30;
            if (*(iVar7 + 0xb18) == '\0') {
                uVar1 = *(uVar3 + 0x1a4 + *(iVar7 + 0xb00));
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar4 = iVar6;
                if (9 < uVar1) {
                    iVar4 = iVar12;
                }
                piVar11[-1] = iVar4 + uVar1;
                iVar4 = iVar6;
                if (9 < uVar8) {
                    iVar4 = iVar12;
                }
                iVar4 = iVar4 + uVar8;
            }
            else {
                uVar1 = *(*(iVar7 + 0xb10) + 0x1f8 + uVar3);
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar4 = iVar6;
                if (9 < uVar1) {
                    iVar4 = iVar12;
                }
                piVar11[-1] = iVar4 + uVar1;
                iVar4 = uVar8 + 0x30;
                if (9 < uVar8) {
                    iVar4 = uVar8 + 0x37;
                }
            }
            *piVar11 = iVar4;
            uVar3 = uVar3 + 1;
            piVar11 = piVar11 + 2;
        } while (uVar3 < 0x14);
        fcn.0002e7c8(iVar7 + 0x518,0x80);
        piVar11 = iVar7 + 0x51a;
        uVar3 = uVar10;
        do {
            iVar4 = 0x30;
            if (*(iVar7 + 0xb18) == '\0') {
                uVar1 = *(uVar3 + 0x1b8 + *(iVar7 + 0xb00));
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar5 = iVar4;
                if (9 < uVar1) {
                    iVar5 = iVar12;
                }
                piVar11[-1] = iVar5 + uVar1;
                iVar5 = iVar4;
                if (9 < uVar8) {
                    iVar5 = iVar12;
                }
                iVar5 = iVar5 + uVar8;
            }
            else {
                uVar1 = *(*(iVar7 + 0xb10) + 0x20c + uVar3);
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar5 = iVar4;
                if (9 < uVar1) {
                    iVar5 = iVar12;
                }
                piVar11[-1] = iVar5 + uVar1;
                iVar5 = uVar8 + 0x30;
                if (9 < uVar8) {
                    iVar5 = uVar8 + 0x37;
                }
            }
            *piVar11 = iVar5;
            uVar3 = uVar3 + 1;
            piVar11 = piVar11 + 2;
        } while (uVar3 < 0x14);
        fcn.0002e7c8(iVar7 + 0x59a,0x80);
        piVar11 = iVar7 + 0x59c;
        uVar3 = uVar10;
        do {
            if (*(iVar7 + 0xb18) == '\0') {
                uVar1 = *(uVar3 + 0x1cc + *(iVar7 + 0xb00));
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar5 = iVar6;
                if (9 < uVar1) {
                    iVar5 = iVar12;
                }
                piVar11[-1] = iVar5 + uVar1;
                iVar5 = iVar4;
                if (9 < uVar8) {
                    iVar5 = iVar12;
                }
                iVar5 = iVar5 + uVar8;
            }
            else {
                uVar1 = *(*(iVar7 + 0xb10) + 0x220 + uVar3);
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar5 = iVar4;
                if (9 < uVar1) {
                    iVar5 = iVar12;
                }
                piVar11[-1] = iVar5 + uVar1;
                iVar5 = uVar8 + 0x30;
                if (9 < uVar8) {
                    iVar5 = uVar8 + 0x37;
                }
            }
            *piVar11 = iVar5;
            uVar3 = uVar3 + 1;
            piVar11 = piVar11 + 2;
        } while (uVar3 < 0x14);
        fcn.0002e7c8(iVar7 + 0x61c,0x80);
        piVar11 = iVar7 + 0x61e;
        uVar3 = uVar10;
        do {
            if (*(iVar7 + 0xb18) == '\0') {
                uVar1 = *(uVar3 + 0x1e0 + *(iVar7 + 0xb00));
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar6 = iVar4;
                if (9 < uVar1) {
                    iVar6 = iVar12;
                }
                piVar11[-1] = iVar6 + uVar1;
                iVar6 = iVar4;
                if (9 < uVar8) {
                    iVar6 = iVar12;
                }
                iVar6 = iVar6 + uVar8;
            }
            else {
                uVar1 = *(*(iVar7 + 0xb10) + 0x234 + uVar3);
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar6 = iVar4;
                if (9 < uVar1) {
                    iVar6 = iVar12;
                }
                piVar11[-1] = iVar6 + uVar1;
                iVar6 = uVar8 + 0x30;
                if (9 < uVar8) {
                    iVar6 = uVar8 + 0x37;
                }
            }
            *piVar11 = iVar6;
            uVar3 = uVar3 + 1;
            piVar11 = piVar11 + 2;
        } while (uVar3 < 0x14);
        fcn.0002e7c8(iVar7 + 0x69e,0x80);
        piVar11 = iVar7 + 0x6a0;
        uVar3 = uVar10;
        do {
            iVar6 = 0x30;
            if (*(iVar7 + 0xb18) == '\0') {
                uVar1 = *(uVar3 + 500 + *(iVar7 + 0xb00));
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar4 = iVar6;
                if (9 < uVar1) {
                    iVar4 = iVar12;
                }
                piVar11[-1] = iVar4 + uVar1;
                if (9 < uVar8) {
                    iVar6 = iVar12;
                }
                iVar6 = iVar6 + uVar8;
            }
            else {
                uVar1 = *(*(iVar7 + 0xb10) + 0x248 + uVar3);
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                if (9 < uVar1) {
                    iVar6 = iVar12;
                }
                piVar11[-1] = iVar6 + uVar1;
                iVar6 = uVar8 + 0x30;
                if (9 < uVar8) {
                    iVar6 = uVar8 + 0x37;
                }
            }
            *piVar11 = iVar6;
            uVar3 = uVar3 + 1;
            piVar11 = piVar11 + 2;
        } while (uVar3 < 0x14);
        fcn.0002e7c8(iVar7 + 0x720,0x80);
        piVar11 = iVar7 + 0x722;
        do {
            if (*(iVar7 + 0xb18) == '\0') {
                uVar1 = *(uVar10 + 0x208 + *(iVar7 + 0xb00));
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar6 = 0x30;
                if (9 < uVar1) {
                    iVar6 = iVar12;
                }
                piVar11[-1] = iVar6 + uVar1;
                iVar6 = 0x30;
                if (9 < uVar8) {
                    iVar6 = iVar12;
                }
                iVar6 = iVar6 + uVar8;
            }
            else {
                uVar1 = *(*(iVar7 + 0xb10) + 0x25c + uVar10);
                uVar8 = uVar1 & 0xf;
                uVar1 = uVar1 >> 4;
                iVar6 = 0x30;
                if (9 < uVar1) {
                    iVar6 = iVar12;
                }
                piVar11[-1] = iVar6 + uVar1;
                iVar6 = uVar8 + 0x30;
                if (9 < uVar8) {
                    iVar6 = uVar8 + 0x37;
                }
            }
            *piVar11 = iVar6;
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 2;
        } while (uVar10 < 0x14);
        fcn.0002e7c8(auStack_1b8,400);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00) + 0x164;
        }
        else {
            iVar9 = *(iVar7 + 0xb10) + 0x1b8;
        }
        fcn.0002ba9c(auStack_1b8,iVar9);
        fcn.0002eba4(iVar7 + 0x7a0,0x42,0x33c54,auStack_1b8);
        fcn.0002e7c8(auStack_1b8,400);
        if (*(iVar7 + 0xb18) == '\0') {
            iVar9 = *(iVar7 + 0xb00) + 0x184;
        }
        else {
            iVar9 = *(iVar7 + 0xb10) + 0x1d8;
        }
        fcn.0002ba9c(auStack_1b8,iVar9);
        fcn.0002eba4(iVar7 + 0x820,0x42,0x33c54,auStack_1b8);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00013ba4 @ 0x13ba4 */

//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00013ba4(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar5;
    uint64_t uVar4;
    char cVar6;
    char *pcVar7;
    char16_t *arg3;
    uint64_t uVar8;
    uint64_t auStackX_8 [2];
    uint32_t var_20h;
    int64_t var_f0h;
    int64_t var_280h;
    int64_t var_440h;
    int64_t var_448h;
    uint uStack_4e8;
    char acStack_418 [208];
    uchar auStack_348 [400];
    uchar auStack_1b8 [400];
    
    uVar2 = fcn.0001355c(2,arg1 + 0xa4,0x30d80,0x33150);
    puVar1 = arg1 + 0x20;
    iVar3 = (***(arg1 + 0x30))(*(arg1 + 0x30),uVar2,*(arg1 + 0x50),puVar1);
    if (-1 < iVar3) {
        auStackX_8[0] = 200;
        fcn.0002e758(acStack_418,200);
        (**(*(arg1 + 0x38) + 0x18))(*(arg1 + 0x38),*puVar1,acStack_418,auStackX_8);
        uVar4 = 0;
        uVar8 = auStackX_8[0];
        if (auStackX_8[0] != 0) {
            do {
                cVar6 = acStack_418[uVar4];
                pcVar7 = &uStack_4e8;
                do {
                    uVar5 = uVar4;
                    uVar4 = uVar5 + 1;
                    if (cVar6 == ';') {
                        *pcVar7 = '\0';
                        break;
                    }
                    *pcVar7 = cVar6;
                    pcVar7 = pcVar7 + 1;
                    cVar6 = acStack_418[uVar5 + 1];
                    *pcVar7 = cVar6;
                } while (cVar6 != '\0');
                if (uStack_4e8 != 'x') {
                    auStackX_8[1] = 200;
                    iVar3 = (**(*(arg1 + 0x38) + 8))
                                      (*(arg1 + 0x38),&uStack_4e8,*puVar1,2,auStack_1b8,auStackX_8 + 1,0);
                    if (iVar3 < 0) {
                        return;
                    }
                    fcn.0002eba4(arg1 + 0x68,0x5f,0x33aa8,*(arg1 + 0x90c));
                    arg3 = L"Realtek Ethernet Controller";
                    if (*(arg1 + 0x8b0) != NULL) {
                        arg3 = *(arg1 + 0x8b0);
                    }
                    fcn.0002dbd4(auStack_348,200,arg3);
                    uVar2 = 200;
                    fcn.0002df08(auStack_348,200,0x33b20);
                    fcn.0002e0d8(auStack_348,uVar2,arg1 + 0x68);
                    fcn.0002df08(auStack_348,200,0x33b30);
                    iVar3 = (**(*(arg1 + 0x38) + 0x10))(*(arg1 + 0x38),*puVar1,2,&uStack_4e8,auStack_348,0);
                    if (iVar3 < 0) {
                        return;
                    }
                    iVar3 = fcn.00013e08(arg1,&uStack_4e8);
                    if (iVar3 < 0) {
                        return;
                    }
                    iVar3 = fcn.00014120(arg1,&uStack_4e8);
                    if (iVar3 < 0) {
                        return;
                    }
                    uVar8 = auStackX_8[0];
                }
                if (acStack_418[uVar5 + 1] == '\0') {
                    return;
                }
                if (uVar8 <= uVar4) {
                    return;
                }
            } while( true );
        }
    }
    return;
}


/* fcn.0002e3bc @ 0x2e3bc */

int64_t fcn.0002e3bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    if (arg3 == 0) {
        iVar2 = 0;
    }
    else {
        uVar1 = fcn.0002e2b8(arg1);
        if ((uVar1 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
            fcn.0002fe18(0x343e0,0xb0,0x34410);
        }
        uVar1 = fcn.0002e2b8(arg2);
        if ((uVar1 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
            fcn.0002fe18(0x343e0,0xb1,0x34430);
        }
        for (; (((*arg1 != 0 && (*arg2 != 0)) && (*arg1 == *arg2)) && (1 < arg3)); arg3 = arg3 - 1) {
            arg1 = arg1 + 2;
            arg2 = arg2 + 2;
        }
        iVar2 = *arg1 - *arg2;
    }
    return iVar2;
}


/* fcn.000136e4 @ 0x136e4 */

bool fcn.000136e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    
    if (arg1 == 0) {
        fcn.0002fe18(0x335f8,0xb02,0x33968);
    }
    if (arg2 == 0) {
        fcn.0002fe18(0x335f8,0xb03,0x33988);
    }
    if (arg3 == 0) {
        fcn.0002fe18(0x335f8,0xb04,0x339a8);
    }
    if (arg4 == 0) {
        fcn.0002fe18(0x335f8,0xb05,0x339d0);
    }
    iVar1 = fcn.0002e484(arg1,arg3);
    if (iVar1 != 0) {
        arg1_00 = fcn.0002e484(arg2,arg3);
        if (arg1_00 != 0) {
            iVar2 = fcn.0002e484(iVar1,arg4);
            if (iVar2 != 0) {
                iVar3 = fcn.0002e484(arg1_00,arg4);
                if (iVar3 != 0) {
                    iVar2 = iVar2 - iVar1 >> 1;
                    if (iVar2 == iVar3 - arg1_00 >> 1) {
                        iVar1 = fcn.0002e3bc(iVar1,arg1_00,iVar2);
                        return iVar1 == 0;
                    }
                }
            }
        }
    }
    return false;
}


/* fcn.000138c0 @ 0x138c0 */

int64_t fcn.000138c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t iStackX_18;
    
    piVar1 = arg1 + 0x40;
    iVar2 = *piVar1;
    iStackX_18 = arg3;
    if ((iVar2 != 0) ||
       ((iVar2 = (**(*0x35158 + 0x140))(0x32948,0,piVar1), -1 < iVar2 && (iVar2 = *piVar1, iVar2 != 0)))) {
        iStackX_8 = 0;
        if (arg4 == 0) {
            iVar2 = (**(iVar2 + 8))(iVar2,&iStackX_8,&iStackX_18,1,arg2,L"RtkNvData");
            if (-1 < iVar2) {
                iVar2 = fcn.0002fed0(2);
                return iVar2;
            }
            if (iVar2 != -0x7ffffffffffffffb) {
                return 0;
            }
            iVar2 = fcn.0002fed0(iStackX_8);
            if (iVar2 == 0) {
                return 0;
            }
        }
        else {
            iVar2 = arg4;
        }
        iVar3 = (**(*piVar1 + 8))(*piVar1,&iStackX_8,iVar2,arg4 == 0,arg2,L"RtkNvData");
        if (-1 < iVar3) {
            return iVar2;
        }
    }
    return 0;
}


/* fcn.0001355c @ 0x1355c */

int64_t fcn.0001355c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t *piVar3;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    uint32_t auStack_48 [6];
    
    aiStackX_18[0] = arg3;
    aiStackX_18[1] = arg4;
    iVar1 = 0x14;
    iStackX_10 = arg2;
    if (arg1 != 0) {
        piVar3 = &iStackX_10;
        iVar2 = arg1;
        do {
            piVar3 = piVar3 + 1;
            fcn.0002e6bc(auStack_48,*piVar3,4);
            iVar1 = iVar1 + (auStack_48[0] - 4);
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
    }
    iVar2 = fcn.0002fed0(iVar1 + 4U);
    if (iVar2 == 0) {
        fcn.0002fe18(0x335f8,0xab7,0x33928);
    }
    fcn.0002e6bc(iVar2,arg2,0x10);
    *(iVar2 + 0x10) = iVar1 + 4U;
    arg1_00 = iVar2 + 0x14;
    if (arg1 != 0) {
        piVar3 = &iStackX_10;
        do {
            piVar3 = piVar3 + 1;
            arg2_00 = *piVar3;
            fcn.0002e6bc(auStack_48,arg2_00,4);
            auStack_48[0] = auStack_48[0] - 4;
            fcn.0002e6bc(arg1_00,arg2_00 + 4,auStack_48[0]);
            arg1_00 = arg1_00 + auStack_48[0];
            arg1 = arg1 + -1;
        } while (arg1 != 0);
    }
    auStack_48[1] = 0xdf000004;
    fcn.0002e6bc(arg1_00,auStack_48 + 1,4);
    return iVar2;
}


/* fcn.0002df08 @ 0x2df08 */

ulong fcn.0002df08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    ulong uVar4;
    uint64_t arg2_00;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x19f,0x341f0);
    }
    if ((arg3 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x1a0,0x34218);
    }
    iVar1 = fcn.0002db6c(arg1,arg2);
    arg2_00 = arg2 - iVar1;
    if (arg1 == 0) {
        iVar1 = 0x1ab;
    }
    else if (arg3 == 0) {
        iVar1 = 0x1ac;
    }
    else {
        if (arg2 != 0) {
            if (arg2_00 == 0) {
                uVar4 = 0x8000000000000004;
                iVar1 = 0x1bd;
                goto code_r0x0002dfa4;
            }
            uVar2 = fcn.0002db6c(arg3,arg2_00);
            if (arg2_00 <= uVar2) {
                uVar4 = 0x8000000000000005;
                iVar1 = 0x1c3;
                goto code_r0x0002dfa4;
            }
            if (arg1 < arg3) {
code_r0x0002e068:
                if (arg1 + arg2 * 2 <= arg3) {
code_r0x0002e097:
                    piVar3 = arg1 + iVar1 * 2;
                    for (; *arg3 != 0; arg3 = arg3 + 2) {
                        *piVar3 = *arg3;
                        piVar3 = piVar3 + 1;
                    }
                    *piVar3 = 0;
                    return 0;
                }
            }
            else if (arg3 + (uVar2 + 1) * 2 <= arg1) {
                if (arg3 < arg1) goto code_r0x0002e097;
                goto code_r0x0002e068;
            }
            uVar4 = 0x800000000000000f;
            iVar1 = 0x1c8;
            goto code_r0x0002dfa4;
        }
        iVar1 = 0x1b8;
    }
    uVar4 = 0x8000000000000002;
code_r0x0002dfa4:
    fcn.0002fd60(0x400000,0x34270,0x341b8,iVar1);
    return uVar4;
}


/* fcn.0002e0d8 @ 0x2e0d8 */

ulong fcn.0002e0d8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x206,0x341f0);
    }
    if ((arg2 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x207,0x34218);
    }
    iVar1 = fcn.0002db6c(arg1,200);
    uVar5 = 200 - iVar1;
    if (arg1 == 0) {
        iVar1 = 0x212;
    }
    else {
        if (arg2 != 0) {
            if (uVar5 == 0) {
                uVar4 = 0x8000000000000004;
                iVar1 = 0x225;
                goto code_r0x0002e172;
            }
            uVar2 = 0x5f;
            if (uVar5 < 0x5f) {
                uVar2 = uVar5;
            }
            uVar2 = fcn.0002db6c(arg2,uVar2);
            if ((uVar5 < 0x60) && (uVar5 <= uVar2)) {
                uVar4 = 0x8000000000000005;
                iVar1 = 0x22c;
                goto code_r0x0002e172;
            }
            if (0x5f < uVar2) {
                uVar2 = 0x5f;
            }
            if (arg1 < arg2) {
code_r0x0002e23f:
                if (arg1 + 400U <= arg2) {
code_r0x0002e271:
                    piVar3 = arg1 + iVar1 * 2;
                    for (; (uVar2 != 0 && (*arg2 != 0)); arg2 = arg2 + 2) {
                        *piVar3 = *arg2;
                        piVar3 = piVar3 + 1;
                        uVar2 = uVar2 - 1;
                    }
                    *piVar3 = 0;
                    return 0;
                }
            }
            else if (arg2 + 2 + uVar2 * 2 <= arg1) {
                if (arg2 < arg1) goto code_r0x0002e271;
                goto code_r0x0002e23f;
            }
            uVar4 = 0x800000000000000f;
            iVar1 = 0x236;
            goto code_r0x0002e172;
        }
        iVar1 = 0x213;
    }
    uVar4 = 0x8000000000000002;
code_r0x0002e172:
    fcn.0002fd60(0x400000,0x34270,0x341b8,iVar1);
    return uVar4;
}


/* fcn.00013e08 @ 0x13e08 */

void fcn.00013e08(int64_t arg1,uint32_t *arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t var_d0h;
    int64_t var_260h;
    int64_t var_410h;
    uchar auStack_4c8 [400];
    uchar auStack_338 [400];
    uchar auStack_1a8 [400];
    
    uStackX_8 = 200;
    iVar1 = (**(*(arg1 + 0x38) + 8))(*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x1b,auStack_4c8,&uStackX_8,0);
    if (-1 < iVar1) {
        fcn.0002eba4(auStack_338,100,auStack_4c8,0x33b38);
        iVar1 = (**(*(arg1 + 0x38) + 0x10))(*(arg1 + 0x38),*(arg1 + 0x20),0x1b,arg2,auStack_338,0);
        if (-1 < iVar1) {
            uStackX_8 = 200;
            iVar1 = (**(*(arg1 + 0x38) + 8))(*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x1d,auStack_4c8,&uStackX_8,0);
            if (-1 < iVar1) {
                fcn.0002eba4(auStack_1a8,0x14,0x33870,2);
                fcn.0002eba4(auStack_338,0x14,auStack_4c8,auStack_1a8);
                iVar1 = (**(*(arg1 + 0x38) + 0x10))(*(arg1 + 0x38),*(arg1 + 0x20),0x1d,arg2,auStack_338,0);
                if (-1 < iVar1) {
                    uStackX_8 = 200;
                    iVar1 = (**(*(arg1 + 0x38) + 8))
                                      (*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x2a,auStack_4c8,&uStackX_8,0);
                    if (-1 < iVar1) {
                        fcn.0002eba4(auStack_338,100,auStack_4c8,0x33880);
                        iVar1 = (**(*(arg1 + 0x38) + 0x10))(*(arg1 + 0x38),*(arg1 + 0x20),0x2a,arg2,auStack_338,0);
                        if (-1 < iVar1) {
                            uStackX_8 = 200;
                            iVar1 = (**(*(arg1 + 0x38) + 8))
                                              (*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x1f,auStack_4c8,&uStackX_8,0);
                            if (-1 < iVar1) {
                                fcn.0002eba4(auStack_338,100,auStack_4c8,0x338b8);
                                iVar1 = (**(*(arg1 + 0x38) + 0x10))
                                                  (*(arg1 + 0x38),*(arg1 + 0x20),0x1f,arg2,auStack_338,0);
                                if (-1 < iVar1) {
                                    uStackX_8 = 200;
                                    iVar1 = (**(*(arg1 + 0x38) + 8))
                                                      (*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x2d,auStack_4c8,
                                                       &uStackX_8,0);
                                    if (-1 < iVar1) {
                                        fcn.0002eba4(auStack_338,200,auStack_4c8,0x338d0);
                                        (**(*(arg1 + 0x38) + 0x10))
                                                  (*(arg1 + 0x38),*(arg1 + 0x20),0x2d,arg2,auStack_338,0);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00014120 @ 0x14120 */

void fcn.00014120(int64_t arg1,uint32_t *arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uStackX_8;
    uint uVar5;
    ulong uVar4;
    uchar auStack_328 [400];
    uchar auStack_198 [400];
    
    uStackX_8 = 200;
    iVar2 = (**(*(arg1 + 0x38) + 8))(*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x22,auStack_328,&uStackX_8,0);
    if (-1 < iVar2) {
        fcn.0002eba4(auStack_198,100,auStack_328,*(arg1 + 0x8b0));
        iVar2 = (**(*(arg1 + 0x38) + 0x10))(*(arg1 + 0x38),*(arg1 + 0x20),0x22,arg2,auStack_198,0);
        if (-1 < iVar2) {
            uVar5 = 0;
            uStackX_8 = 200;
            iVar2 = (**(*(arg1 + 0x38) + 8))(*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x25,auStack_328,&uStackX_8,0);
            if (-1 < iVar2) {
                uVar1 = *(arg1 + 0x911);
                uVar3 = *(arg1 + 0x910);
                uVar4 = CONCAT44(uVar5,*(arg1 + 0x90f));
                fcn.0002eba4(auStack_198,0x24,auStack_328,*(arg1 + 0x90c));
                iVar2 = (**(*(arg1 + 0x38) + 0x10))
                                  (*(arg1 + 0x38),*(arg1 + 0x20),0x25,arg2,auStack_198,0,uVar4,uVar3,uVar1);
                if (-1 < iVar2) {
                    uStackX_8 = 200;
                    iVar2 = (**(*(arg1 + 0x38) + 8))
                                      (*(arg1 + 0x38),arg2,*(arg1 + 0x20),0x28,auStack_328,&uStackX_8,0);
                    if (-1 < iVar2) {
                        fcn.0002eba4(auStack_198,0x3c,auStack_328,*(arg1 + 0x8fe));
                        (**(*(arg1 + 0x38) + 0x10))(*(arg1 + 0x38),*(arg1 + 0x20),0x28,arg2,auStack_198,0);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0002e314 @ 0x2e314 */

int64_t fcn.0002e314(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    
    uVar2 = fcn.0002e2b8(arg1);
    if ((uVar2 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
        fcn.0002fe18(0x343e0,0x75,0x34410);
    }
    uVar2 = fcn.0002e2b8(arg2);
    if ((uVar2 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
        fcn.0002fe18(0x343e0,0x76,0x34430);
    }
    uVar1 = *arg1;
    if (uVar1 != 0) {
        arg1 = arg1 - arg2;
        do {
            if (uVar1 != *arg2) break;
            arg2 = arg2 + 2;
            uVar1 = *(arg1 + arg2);
        } while (uVar1 != 0);
    }
    return uVar1 - *arg2;
}


/* fcn.0002ba9c @ 0x2ba9c */

void fcn.0002ba9c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if (arg1 == 0) {
        fcn.0002fe18(0x34120,0xc4,0x34158);
    }
    if (arg2 == 0) {
        fcn.0002fe18(0x34120,0xc5,0x34168);
    }
    iVar1 = fcn.0002b9d4(arg2);
    if (iVar1 != 0) {
        do {
            *(arg1 + uVar3 * 2) = *(uVar3 + arg2);
            uVar3 = uVar3 + 1;
            uVar2 = fcn.0002b9d4(arg2);
        } while (uVar3 < uVar2);
    }
    *(arg1 + uVar3 * 2) = 0;
    return;
}


/* fcn.0002bc40 @ 0x2bc40 */

void fcn.0002bc40(int64_t arg1,int64_t arg2)

{
    fcn.0002eba4(arg1,0x20,0x34178,*arg2);
    return;
}


/* fcn.000151ac @ 0x151ac */

void fcn.000151ac(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,4,arg3 & 0xffffffff,auStackX_10);
    return;
}


/* fcn.0002ab04 @ 0x2ab04 */

void fcn.0002ab04(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    unkbyte7 in_R9;
    uint16_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    
    uVar9 = 0;
    uVar2 = arg2 & 0xffffU;
    uVar5 = arg3 & 0xffffU;
    if (*(arg1 + 0x2b3c) != '\x01') {
        if (*(arg1 + 0x2b3c) != '\x02') {
            return;
        }
        fcn.00015d4c(arg1,arg2 & 0xffffU,arg3 & 0xffffU,CONCAT71(in_R9,2));
        return;
    }
    if (uVar2 < 0x70) {
code_r0x0002aba6:
        uVar4 = arg2 & 3;
        if (uVar4 == 3) {
            uVar5 = uVar5 << 0x18;
            uVar8 = 0x80008000;
        }
        else if (uVar4 == 2) {
            uVar5 = uVar5 << 0x10;
            uVar8 = 0x8000c000;
        }
        else if (uVar4 == 1) {
            uVar5 = uVar5 << 8;
            uVar8 = 0x80006000;
        }
        else {
            uVar8 = 0x80003000;
        }
        fcn.000151ac(arg1,uVar5,0xb0);
        fcn.000151ac(arg1,uVar2 & 0xfffffffc | uVar8,0xb4);
        uVar6 = 0;
        fcn.000151ac(arg1,0,0x7c);
        do {
            iVar3 = fcn.0001511c(arg1,0xb4);
            uVar9 = uVar9 + 1;
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(1);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
            }
        } while ((iVar3 < 0) && (uVar9 < 100));
        if ((uVar9 == 100) && (iVar3 < 0)) {
            *(arg1 + 0x2e58) = 1;
        }
        if (uVar4 == 3) {
            fcn.0002a930(arg1,uVar2 + 1,CONCAT71(uVar6 >> 8,arg3 >> 8));
        }
    }
    else {
        uVar7 = arg2 & 0xfffc;
        if ((arg2 & 3U) == 0) {
            uVar2 = fcn.0002a84c(arg1,uVar7);
            uVar5 = uVar2 & 0xffff0000 | uVar5;
        }
        else {
            if ((arg2 & 3) != 2) goto code_r0x0002aba6;
            uVar1 = fcn.0002a84c(arg1,uVar7);
            uVar5 = uVar1 | uVar5 << 0x10;
        }
        fcn.0002acb0(arg1,uVar7,uVar5);
    }
    return;
}


/* fcn.000150bc @ 0x150bc */

uchar fcn.000150bc(int64_t arg1,int64_t arg2)

{
    uchar auStackX_10 [24];
    
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),0,1,arg2 & 0xffffffff,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001514c @ 0x1514c */

void fcn.0001514c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,1,arg3 & 0xffffffff,auStackX_10);
    return;
}


/* fcn.00016264 @ 0x16264 */

int16_t fcn.00016264(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    uint8_t uVar3;
    
    iVar2 = arg1;
    uVar3 = arg2;
    iVar1 = 0;
    if (iVar2 == 0) {
        iVar2 = (uVar3 >> 3) + 0xa40;
        uVar3 = (uVar3 & 7) + 0x10;
    }
    if (0xf < uVar3) {
        iVar1 = (uVar3 - 0x10) * '\x02' + iVar2 * 0x10;
    }
    return iVar1;
}


/* fcn.00016318 @ 0x16318 */

uint32_t fcn.00016318(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    uVar2 = 0xffff;
    fcn.000151ac(arg1,(arg2 & 0xfffe) << 0xf,0xb8);
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
        }
        uVar1 = fcn.0001511c(arg1,0xb8);
        uVar3 = uVar3 + 1;
    } while ((-1 < uVar1) && (uVar3 < 100));
    if ((uVar3 != 100) || (uVar1 < 0)) {
        uVar2 = uVar1 & 0xffff;
    }
    return uVar2;
}


/* fcn.000162a0 @ 0x162a0 */

void fcn.000162a0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    fcn.000151ac(arg1,(arg2 & 0xfffe) * 0x8000 + (arg3 & 0xffff) | 0x80000000,0xb8);
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
        }
        uVar2 = uVar2 + 1;
        iVar1 = fcn.0001511c(arg1,0xb8);
    } while ((iVar1 < 0) && (uVar2 < 100));
    return;
}


/* fcn.00015768 @ 0x15768 */

ushort fcn.00015768(uint32_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    uchar uVar5;
    uint16_t uVar6;
    ushort uVar7;
    int iVar8;
    uint32_t uVar9;
    uint in_register_0000000c;
    uint64_t arg1_00;
    uint64_t noname_0;
    ulong uVar10;
    uint32_t uVar11;
    uint64_t arg3;
    uint32_t uVar12;
    int64_t arg2_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar9 = *(arg1_00 + 0x2b18);
    noname_0 = uVar9;
    uVar12 = 0;
    bVar4 = false;
    bVar3 = false;
    bVar1 = false;
    bVar2 = false;
    if (uVar9 == 0x36) {
        arg3 = 0;
        bVar4 = true;
    }
    else if (uVar9 == 0x37) {
        bVar1 = true;
        arg3 = 0;
    }
    else {
        uVar11 = uVar9 - 0x38;
        arg3 = uVar11;
        if ((uVar11 == 0) || (uVar11 == 1)) {
            bVar2 = true;
        }
        noname_0 = uVar9 - 0x36;
        if (uVar9 - 0x36 != 0) {
            uVar9 = uVar9 - 0x37;
            noname_0 = uVar9;
            if ((uVar9 != 0) && (uVar9 != 1)) {
                arg2_00 = 0xb8;
                goto code_r0x0001580f;
            }
        }
    }
    bVar3 = bVar4;
    arg2_00 = 0x10;
    if (bVar1) {
        noname_0 = arg1_00;
        uVar6 = fcn.0002a6dc(arg1_00,0x10);
        if ((uVar6 >> 9 & 1) != 0) {
            arg3 = uVar6 & 0xfdff;
            noname_0 = arg1_00;
            fcn.0002acb0(arg1_00,0x10,arg3);
        }
    }
code_r0x0001580f:
    if (bVar2) {
        uVar10 = 0;
        uVar5 = fcn.000150bc(arg1_00,0xd2);
        arg3 = 0;
        noname_0 = arg1_00;
        fcn.0001514c(arg1_00,CONCAT71(uVar10 >> 8,uVar5) & 0xfffffffffffffffd,0xd2);
    }
    if (*(arg1_00 + 0x2b33) == '\0') {
        uVar9 = (arg2 & 0xff) << 0x10;
        if (bVar3) {
            fcn.0002acb0(arg1_00,0x60,uVar9);
            uVar12 = 0;
        }
        else {
            fcn.000151ac(arg1_00,uVar9,0x60);
        }
        do {
            if (*(arg1_00 + 0x2ace) == '0') {
                (**(arg1_00 + 0x2c68))(0x14);
            }
            else {
                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),0x14);
            }
            if (bVar3) {
                iVar8 = fcn.0002a84c(arg1_00,0x60);
            }
            else {
                iVar8 = fcn.0001511c(arg1_00,0x60);
            }
            uVar12 = uVar12 + 1;
        } while ((-1 < iVar8) && (uVar12 < 0x14));
        if (bVar3) {
            uVar7 = fcn.0002a84c(arg1_00,0x60);
        }
        else {
            uVar7 = fcn.0001511c(arg1_00,0x60);
        }
        if (*(arg1_00 + 0x2b18) - 5U < 2) {
            if (*(arg1_00 + 0x2ace) == '0') {
                (**(arg1_00 + 0x2c68))(1);
            }
            else {
                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),1);
            }
        }
    }
    else {
        uVar6 = fcn.00016264(noname_0,*(arg1_00 + 0x2b34),CONCAT71(arg3 >> 8,arg2));
        uVar7 = fcn.000163a4(arg1_00,uVar6);
    }
    if (bVar1) {
        uVar6 = fcn.0002a6dc(arg1_00,arg2_00);
        fcn.0002ab04(arg1_00,arg2_00,uVar6 | 0x200);
        fcn.0002ab04(arg1_00,arg2_00,uVar6 & 0xfdff);
    }
    if (*(arg1_00 + 0x2b33) == '\0') {
        if (*(arg1_00 + 0x2ace) == '0') {
            (**(arg1_00 + 0x2c68))(0x14);
        }
        else {
            (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),0x14);
        }
    }
    return uVar7;
}


/* fcn.000159b0 @ 0x159b0 */

void fcn.000159b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_70h)

{
    int iVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    fcn.000151ac(arg1,arg3,0x70);
    fcn.000151ac(arg1,(arg4 & 0xff) << 0x10 | arg2 | 0x8000f000,0x74);
    do {
        uVar2 = uVar2 + 1;
        iVar1 = fcn.0001511c(arg1,0x74);
        if (-1 < iVar1) break;
    } while (uVar2 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.000163a4 @ 0x163a4 */

uint16_t fcn.000163a4(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int16_t iVar2;
    
    if ((arg2 & 1U) == 0) {
        uVar1 = fcn.00016318(arg1,arg2);
    }
    else {
        uVar1 = fcn.00016318(arg1,arg2);
        iVar2 = fcn.00016318(arg1,(arg2 & 0xffff) + 1);
        uVar1 = uVar1 >> 8 | iVar2 << 8;
    }
    return uVar1;
}


/* fcn.000160f0 @ 0x160f0 */

uint fcn.000160f0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t arg1_00;
    uint auStackX_10 [6];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e58) != '\0') {
        return 0xffff;
    }
    fcn.000151ac(arg1_00,(arg2 & 0xfffe) << 0xf,0xb0);
    (**(arg1_00 + 0x2ca0))(*(arg1_00 + 0x2c50),0,4,0xb0,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001620c @ 0x1620c */

uint16_t fcn.0001620c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint32_t arg1_00;
    
    arg1_00 = arg1;
    if ((arg2 & 1U) == 0) {
        uVar1 = fcn.000160f0(arg1_00,arg2);
    }
    else {
        uVar1 = fcn.000160f0(arg1_00,arg2);
        iVar2 = fcn.000160f0(arg1_00,(arg2 & 0xffff) + 1);
        uVar1 = uVar1 >> 8 | iVar2 << 8;
    }
    return uVar1;
}


/* fcn.00016134 @ 0x16134 */

void fcn.00016134(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar2;
    uint16_t uVar3;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = arg2 & 0xffffU;
    if ((arg2 & 1U) == 0) {
        if (*(arg1_00 + 0x2e58) != '\0') {
            return;
        }
        uVar2 = (uVar2 & 0xfffffffe) * 0x8000 + (arg3 & 0xffff);
    }
    else {
        uVar1 = fcn.000160f0(arg1,arg2 & 0xffffU);
        if (*(arg1_00 + 0x2e58) == '\0') {
            fcn.000151ac(arg1_00,(uVar1 & 0xff | arg3 << 8) + (uVar2 & 0xfffffffe) * 0x8000 | 0x80000000,0xb0);
        }
        uVar3 = arg2 + 1;
        uVar1 = fcn.000160f0(arg1,uVar3);
        if (*(arg1_00 + 0x2e58) != '\0') {
            return;
        }
        uVar2 = (uVar3 & 0xfffffffe) * 0x8000 + (uVar1 & 0xff00 | arg3 >> 8);
    }
    fcn.000151ac(arg1_00,uVar2 | 0x80000000,0xb0);
    return;
}


/* fcn.000164a4 @ 0x164a4 */

//WARNING: Removing unreachable block (ram,0x0001615a)
//WARNING: Removing unreachable block (ram,0x0001617d)
//WARNING: Removing unreachable block (ram,0x0001619a)
//WARNING: Removing unreachable block (ram,0x000161c0)

void fcn.000164a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t arg1_00;
    int64_t iVar5;
    uint16_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint16_t uVar9;
    
    uVar2 = fcn.0001620c(arg1,0xdc18);
    arg1_00 = arg1;
    fcn.00016134(arg1_00,0xdc18,uVar2 & 0xffaf);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x50);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    uVar3 = fcn.0001620c(arg1,0xdc08);
    uVar4 = fcn.0001620c(arg1,0xdc0a);
    uVar9 = uVar4 & 0xfff0;
    uVar6 = uVar3 & 0xf0ff;
    uVar3 = uVar3 | 0xf00;
    uVar4 = uVar4 | 0xf;
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x40);
    fcn.00016134(arg1_00,0xdc08,uVar6);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar7 = 0x20;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        fcn.00016134(arg1_00,0xdc0a,uVar9);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        fcn.00016134(arg1_00,0xdc08,uVar6);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 5;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        fcn.00016134(arg1_00,0xdc0a,uVar9);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar8 = 0;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        uVar1 = uVar4;
        if (((arg2 & 0x1f) >> (4U - uVar8 & 0x1f) & 1) == 0) {
            uVar1 = uVar9;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar7 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        uVar8 = uVar8 + 1;
    } while (uVar8 < 5);
    fcn.00016134(arg1_00,0xdc08,uVar6);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    uVar8 = 0;
    iVar7 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar6);
    fcn.00016134(arg1_00,0xdc0a,uVar9);
    iVar7 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 7;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        uVar1 = uVar4;
        if (((arg3 >> 8) >> (7U - uVar8 & 0x1f) & 1) == 0) {
            uVar1 = uVar9;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    uVar8 = 0;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        uVar1 = uVar4;
        if ((arg3 >> (7U - uVar8 & 0x1f) & 1) == 0) {
            uVar1 = uVar9;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    do {
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar6);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar6);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    if (*(arg1 + 0x2e58) == '\0') {
        fcn.000151ac(arg1,(uVar2 | 0x40) + 0x6e030000 | 0x80000000,0xb0);
    }
    return;
}


/* fcn.00019678 @ 0x19678 */

uint64_t fcn.00019678(uint32_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar5;
    ulong uVar6;
    unkbyte7 Var7;
    uint32_t uVar8;
    bool bVar9;
    char acStackX_8 [8];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x188) < 0x6283e) {
        uVar4 = 0x12;
    }
    else {
        fcn.0002e758(*(arg1_00 + 0x178),0x6283e);
        uVar4 = fcn.000195d0(arg1,*(arg1_00 + 0x178));
        uVar8 = 0;
        if (uVar4 == 0) {
            *(arg1_00 + 2) = 1;
            fcn.00022ddc(arg1_00);
            *(arg1_00 + 0x2ce0) = *(arg1_00 + 0x178) + 0x62000 + *(arg1_00 + 0x228);
            iVar5 = *(arg1_00 + 0x228) + 0x62000 + *(arg1_00 + 0x180);
            *(arg1_00 + 0x2cd8) = iVar5;
            fcn.000151ac(arg1_00,iVar5 >> 0x20,0x14);
            fcn.000151ac(arg1_00,*(arg1_00 + 0x2cd8),0x10);
            fcn.0002287c(arg1_00);
            fcn.0002238c(arg1);
            fcn.0001a2b8(arg1_00);
            if (*(arg1_00 + 0x2ae0) == '\0') {
                *(arg1_00 + 0x2ae4) = 1;
            }
            if (*(arg1_00 + 0x2e35) != '\0') {
                uVar2 = fcn.000150ec(arg1_00,0x3c);
                fcn.0001517c(arg1_00,uVar2,0x3c);
            }
            uVar2 = fcn.000150ec(arg1_00,0x3e);
            fcn.0001517c(arg1_00,uVar2,0x3e);
            if (*(arg1_00 + 0x2e35) == '\0') {
                fcn.0001517c(arg1_00,0,0x3c);
            }
            else {
                fcn.000151ac(arg1_00,0,0x38);
            }
            *(arg1_00 + 0x2b4e) = 0;
            *(arg1_00 + 0x2acc) = 2;
            fcn.0001a518(arg1_00);
            uVar2 = fcn.0001be14(arg1_00);
            if (*(arg1_00 + 0x2b18) - 1U < 6) {
                uVar6 = 0;
                (**(*(arg1_00 + 0x2c58) + 0x30))(*(arg1_00 + 0x2c58),0,0xc,1,acStackX_8);
                if (*(arg1_00 + 0x2b18) == 6) {
                    bVar9 = acStackX_8[0] == '\0';
                }
                else {
                    bVar9 = acStackX_8[0] == '\x04';
                }
                if (bVar9) {
                    fcn.000153bc(arg1_00,0xc,CONCAT71(uVar6 >> 8,8));
                }
            }
            if (*(arg1_00 + 0x2b18) == 5 || *(arg1_00 + 0x2b18) == 6) {
                fcn.000151ac(arg1_00,(*(arg1_00 + 0x2b2b) | 0x30000) << 8,0x40);
                if (*(arg1_00 + 0x2ace) == '0') {
                    (**(arg1_00 + 0x2c68))(1);
                }
                else {
                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),1);
                }
                fcn.000151ac(arg1_00,(*(arg1_00 + 0x2b04) << 5 | *(arg1_00 + 0x2b00)) << 8,0x44);
                uVar3 = fcn.000150ec(arg1_00,0xe0);
                fcn.0001517c(arg1_00,uVar3 | 8,0xe0);
                if (*(arg1_00 + 0x2b18) == 5) {
                    if (*(arg1_00 + 0x2ace) == '0') {
                        (**(arg1_00 + 0x2c68))(4000);
                    }
                    else {
                        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),4000);
                    }
                    uVar6 = 0;
                    uVar1 = fcn.000150bc(arg1_00,0x6c);
                    if ((uVar1 & 2) == 0) {
                        Var7 = uVar6 >> 8;
                        if ((*(arg1_00 + 0x2ae4) == 1) || (*(arg1_00 + 0x2ae4) == 6)) {
                            iVar5 = CONCAT71(Var7,9);
                            uVar3 = fcn.00015768(arg1,iVar5);
                            iVar5 = CONCAT71(iVar5 >> 8,9);
                            fcn.000153ec(arg1_00,iVar5,uVar3 | 0x300);
                            iVar5 = CONCAT71(iVar5 >> 8,1);
                            fcn.0001b8c0(arg1_00,iVar5);
                        }
                        else {
                            iVar5 = CONCAT71(Var7,9);
                            uVar3 = fcn.00015768(arg1,iVar5);
                            iVar5 = CONCAT71(iVar5 >> 8,9);
                            fcn.000153ec(arg1_00,iVar5,uVar3 & 0xfcff);
                            iVar5 = CONCAT71(iVar5 >> 8,1);
                            fcn.0001b8c0(arg1_00,iVar5);
                            iVar5 = CONCAT71(iVar5 >> 8,0x1f);
                            fcn.000153ec(arg1_00,iVar5,0);
                            uVar3 = 0;
                            do {
                                iVar5 = CONCAT71(iVar5 >> 8,uVar3);
                                fcn.00015768(arg1,iVar5);
                                uVar3 = uVar3 + 1;
                            } while (uVar3 < 0x20);
                            iVar5 = CONCAT71(iVar5 >> 8,0x1f);
                            fcn.000153ec(arg1_00,iVar5,0);
                        }
                        if (*(arg1_00 + 0x2ae4) == 1) {
                            do {
                                iVar5 = CONCAT71(iVar5 >> 8,1);
                                uVar4 = fcn.00015768(arg1,iVar5);
                                if ((uVar4 & 0x20) != 0) {
                                    *(arg1_00 + 0x2b2e) = 1;
                                    break;
                                }
                                uVar8 = uVar8 + 1;
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(0x32);
                                }
                                else {
                                    iVar5 = 0;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),0x32);
                                }
                            } while (uVar8 < 800000);
                            fcn.000150bc(arg1_00,0x6c);
                        }
                    }
                }
            }
            fcn.000151ac(arg1_00,0x111111,0x58);
            uVar4 = uVar2;
        }
    }
    return uVar4;
}


/* fcn.0001517c @ 0x1517c */

void fcn.0001517c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort auStackX_10 [12];
    
    auStackX_10[0] = arg2;
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,2,arg3 & 0xffffffff,auStackX_10);
    return;
}


/* fcn.00022c4c @ 0x22c4c */

void fcn.00022c4c(int64_t arg1)

{
    char cVar1;
    ulong in_RDX;
    uint64_t uVar2;
    
    fcn.0001514c(arg1,CONCAT71(in_RDX >> 8,0x10),0x37);
    uVar2 = 0;
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        cVar1 = fcn.000150bc(arg1,0x37);
    } while ((cVar1 - 1U < 0xfe) && (uVar2 = uVar2 + 1, uVar2 < 200));
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(200);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),200);
    }
    if (*(arg1 + 0x2b18) == 0x2c) {
        fcn.000151ac(arg1,*(arg1 + 600),0x20);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
        }
        fcn.000151ac(arg1,*(arg1 + 0x25c),0x24);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50));
        }
        fcn.000151ac(arg1,0,0x28);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50));
        }
        fcn.000151ac(arg1,0,0x2c);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
        }
    }
    return;
}


/* fcn.0001a518 @ 0x1a518 */

void fcn.0001a518(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint *puVar9;
    
    iVar8 = 0xff;
    iVar1 = *(arg1 + 0x250);
    piVar5 = arg1 + 0x290;
    iVar2 = *(arg1 + 0x248);
    *(arg1 + 0x268) = iVar1;
    *(arg1 + 0x270) = iVar2;
    uVar6 = 0;
    iVar4 = iVar1 + 8;
    iVar7 = iVar1;
    do {
        *(iVar4 + -4) = 0;
        *(iVar4 + 4) = 0;
        *piVar5 = iVar7;
        iVar7 = iVar7 + 0x10;
        *(iVar4 + -8) = 0;
        piVar5 = piVar5 + 3;
        iVar8 = iVar8 + -1;
        iVar4 = iVar4 + 0x10;
    } while (iVar8 != 0);
    *(iVar1 + 0xff4) = 0;
    puVar9 = iVar2 + 0xc;
    *(iVar1 + 0xffc) = 0;
    *(arg1 + 0x1a78) = iVar1 + 0xff0;
    *(iVar1 + 0xff0) = 0x40000000;
    do {
        uVar3 = uVar6 * 0x600;
        uVar6 = uVar6 + 1;
        puVar9[-1] = *(arg1 + 0x2aa0) + uVar3;
        *puVar9 = uVar3 + *(arg1 + 0x2aa0) >> 0x20;
        puVar9[-3] = 0x80000600;
        puVar9 = puVar9 + 4;
    } while (uVar6 < 0xff);
    if (uVar6 == 0xff) {
        *(iVar2 + 0xff4) = 0;
        *(iVar2 + 0xff8) = *(arg1 + 0x2aa0) + 0x5fa00;
        iVar1 = *(arg1 + 0x2aa0);
        *(iVar2 + 0xff0) = 0xc0000600;
        *(iVar2 + 0xffc) = iVar1 + 0x5fa00 >> 0x20;
    }
    *(arg1 + 0x2ad0) = 0;
    *(arg1 + 0x260) = 0xff0000;
    return;
}


/* fcn.0001be14 @ 0x1be14 */

int16_t fcn.0001be14(int64_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    bool bVar9;
    
    uVar1 = fcn.000150bc(arg1,0x6c);
    *(arg1 + 0x2af0) = uVar1 >> 1 & 1;
    if ((*(arg1 + 0x2b18) != 1) || (iVar6 = 1, -1 < uVar1)) {
        iVar6 = 0;
    }
    *(arg1 + 0x2af4) = iVar6;
    fcn.00022c4c(arg1);
    if (((*(arg1 + 0x2e32) == '\0') && (*(arg1 + 0x2e33) == '\0')) && (*(arg1 + 0x2e35) == '\0')) {
        uVar7 = *(arg1 + 0x2ade) | *(arg1 + 0x2adc);
        fcn.0001517c(arg1,uVar7,0xe0);
        fcn.00022a64(arg1);
    }
    else {
        iVar6 = *(arg1 + 0x2b18);
        uVar8 = 3;
        if (iVar6 < 0x2d) {
            if (iVar6 == 0x2c) goto code_r0x0001bf51;
            if (0x22 < iVar6) {
                if ((((iVar6 != 0x23) && (iVar6 != 0x24)) && (iVar6 != 0x25)) && (iVar6 != 0x26)) {
                    iVar6 = iVar6 + -0x27;
code_r0x0001bf36:
                    if (iVar6 != 0) {
                        iVar6 = iVar6 + -1;
                        goto code_r0x0001bf40;
                    }
                }
                goto code_r0x0001bf51;
            }
            if (iVar6 == 0x22) goto code_r0x0001bf51;
            if (0xe < iVar6) {
                if (((iVar6 != 0xf) && (iVar6 != 0x10)) && (iVar6 != 0x11)) {
                    bVar9 = iVar6 == 0x21;
                    goto code_r0x0001bf4f;
                }
                goto code_r0x0001bf51;
            }
            if ((((iVar6 == 0xe) || (iVar6 == 0)) || (iVar6 == 7)) || ((iVar6 == 8 || (iVar6 == 9))))
            goto code_r0x0001bf51;
            bVar9 = iVar6 == 0xb;
code_r0x0001bf4f:
            if (bVar9) goto code_r0x0001bf51;
        }
        else {
            if (iVar6 < 0x38) {
                if (iVar6 != 0x37) {
                    if (iVar6 < 0x33) {
                        if (iVar6 != 0x32) {
                            iVar6 = iVar6 + -0x2d;
                            goto code_r0x0001bf36;
                        }
                    }
                    else {
                        iVar6 = iVar6 + -0x33;
code_r0x0001bf40:
                        if (iVar6 != 0) {
                            iVar6 = iVar6 + -1;
                            goto code_r0x0001bf45;
                        }
                    }
                }
            }
            else if ((((iVar6 != 0x38) && (iVar6 != 0x39)) && ((iVar6 != 0x3a && ((iVar6 != 0x3b && (iVar6 != 0x3c))))))
                    && (iVar6 != 0x3d)) {
                iVar6 = iVar6 + -0x42;
code_r0x0001bf45:
                if ((iVar6 != 0) && (iVar6 != 1)) {
                    bVar9 = iVar6 == 2;
                    goto code_r0x0001bf4f;
                }
            }
code_r0x0001bf51:
            uVar8 = 1;
        }
        uVar2 = fcn.000150ec(arg1,0xe0);
        uVar7 = uVar2 & 0xfffc | uVar8;
        fcn.0001517c(arg1,uVar7,0xe0);
    }
    iVar6 = *(arg1 + 0x2b18);
    if (iVar6 < 0x2f) {
        if (iVar6 != 0x2e) {
            if (iVar6 < 0x26) {
                if (((iVar6 != 0x25) && (iVar6 != 0xe)) && ((iVar6 != 0xf && ((iVar6 != 0x10 && (iVar6 != 0x11)))))) {
                    iVar6 = iVar6 + -0x21;
code_r0x0001bff5:
                    if ((iVar6 != 0) && (iVar6 != 1)) {
                        iVar6 = iVar6 + -2;
                        goto code_r0x0001bfff;
                    }
                }
            }
            else {
                iVar6 = iVar6 + -0x26;
code_r0x0001bfe1:
                if (((iVar6 != 0) && (iVar6 != 1)) && ((iVar6 != 2 && (iVar6 != 3)))) {
                    iVar6 = iVar6 + -4;
                    goto code_r0x0001bff5;
                }
            }
        }
    }
    else if (iVar6 < 0x38) {
        if (iVar6 != 0x37) {
            iVar6 = iVar6 + -0x2f;
            goto code_r0x0001bfe1;
        }
    }
    else if (((iVar6 != 0x38) && (iVar6 != 0x39)) &&
            ((iVar6 != 0x3a && (((iVar6 != 0x3b && (iVar6 != 0x3c)) && (iVar6 != 0x3d)))))) {
        iVar6 = iVar6 + -0x42;
code_r0x0001bfff:
        if ((iVar6 != 0) && (iVar6 != 1)) goto code_r0x0001c01e;
    }
    *(arg1 + 0x2b1d) = 1;
    uVar7 = CONCAT71(uVar7 >> 8,1);
    fcn.0001514c(arg1,uVar7,0x57);
code_r0x0001c01e:
    iVar3 = fcn.0001a82c(arg1);
    if (iVar3 == 0) {
        if ((*(arg1 + 0x2e41) != '\0') && (*(arg1 + 0x2af0) == 1)) {
            fcn.00022a64(arg1);
            uVar4 = fcn.0001511c(arg1,0x40);
            uVar7 = uVar4;
            fcn.000151ac(arg1,uVar4 & 0xfffbffff | 0x20000,0x40);
            uVar5 = fcn.0001511c(arg1,0x44);
            fcn.000151ac(arg1,uVar5 & 0xfffffff2 | 2,0x44);
            fcn.0002b524(arg1);
            fcn.000151ac(arg1,uVar4,0x40);
        }
        if (*(arg1 + 0x2af4) == 1) {
            uVar4 = fcn.0001511c(arg1,100);
            if ((uVar4 >> 0x1d & 1) == 0) {
                fcn.000151ac(arg1,0x30000000,100);
            }
        }
        else {
            fcn.0001bc64(arg1,CONCAT71(uVar7 >> 8,1));
        }
        if (*(arg1 + 0x2b18) == 0xc) {
            uVar4 = fcn.0001511c(arg1,0x40);
            uVar4 = uVar4 & 0xfffbffff | 0x20000;
            uVar7 = uVar4;
            fcn.000151ac(arg1,uVar4,0x40);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,0x10),0x37);
        }
        if (((*(arg1 + 0x2e32) != '\0') || (*(arg1 + 0x2e33) != '\0')) || (*(arg1 + 0x2e35) != '\0')) {
            fcn.00022a64(arg1);
            uVar4 = fcn.0001511c(arg1,0x44);
            fcn.000151ac(arg1,uVar4 | 0xe,0x44);
            *(arg1 + 0x2e3c) = uVar4 | 0xe;
            fcn.00019a5c(arg1,0xffffffff,0xffffffff);
        }
        if (*(arg1 + 0x2b18) == 0xc) {
            uVar4 = fcn.0001511c(arg1,0x40);
            fcn.000151ac(arg1,uVar4 & 0xfff9ffff,0x40);
        }
    }
    return iVar3;
}


/* fcn.00019afc @ 0x19afc */

void fcn.00019afc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t arg3_00;
    uint8_t *puVar10;
    uint8_t uVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint8_t uVar14;
    
    arg3_00 = 0;
    if (((arg2 & 4U) != 0) || (arg3 != 0)) {
        if (arg3 != 0) {
            fcn.0002e758(arg1 + 0x2b50,0x100);
            uVar2 = arg4 >> 5;
            uVar14 = 0;
            *(arg1 + 0x2b4e) = uVar2;
            if (uVar2 != 0) {
                do {
                    if (7 < uVar14) break;
                    iVar8 = uVar14 * 0x20 + arg3;
                    fcn.0002e6bc(arg1 + 0x2b50 + uVar14 * 0x20,iVar8,6);
                    fcn.0002e814(arg1 + 0x2e6a,iVar8,6);
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar2);
            }
        }
        if ((arg2 & 4U) != 0) {
            puVar13 = arg1 + 0x2ac4;
            puVar13[0] = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
            uVar9 = *(arg1 + 0x2b4e);
            if (*(arg1 + 0x2b4e) != 0) {
                puVar12 = arg1 + 0x2b50 + uVar9 * 0x20;
                do {
                    uVar14 = uVar9 - 1;
                    uVar9 = uVar14;
                    uVar4 = 0xffffffff;
                    puVar12 = puVar12 + -0x20;
                    iVar8 = 6;
                    puVar10 = puVar12;
                    do {
                        uVar7 = *puVar10;
                        iVar6 = 8;
                        do {
                            uVar3 = uVar4 * 2;
                            uVar5 = uVar7;
                            uVar7 = uVar7 >> 1;
                            uVar5 = (uVar4 >> 0x1f ^ uVar5) & 1;
                            if (uVar5 != 0) {
                                uVar3 = uVar3 ^ 0x4c11db6 | uVar5;
                            }
                            uVar4 = uVar3;
                            iVar6 = iVar6 + -1;
                        } while (iVar6 != 0);
                        puVar10 = puVar10 + 1;
                        iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    *((uVar3 >> 0x1d) + 0x2ac4 + arg1) = *((uVar3 >> 0x1d) + 0x2ac4 + arg1) | 1 << (uVar3 >> 0x1a & 7);
                } while (uVar14 != 0);
            }
            if (*(arg1 + 0x2b28) == '\0') {
                uVar9 = arg3_00;
                uVar14 = 0;
                do {
                    uVar7 = *puVar13;
                    puVar13 = puVar13 + 1;
                    uVar11 = uVar14 + 1;
                    uVar3 = uVar9 + (uVar7 << ((uVar14 & 3) << 3));
                    uVar9 = uVar3;
                    uVar14 = uVar11;
                } while (uVar11 < 4);
                puVar13 = arg1 + 0x2ac8;
                uVar14 = 4;
                do {
                    uVar7 = *puVar13;
                    puVar13 = puVar13 + 1;
                    uVar11 = uVar14 + 1;
                    uVar5 = arg3_00 + (uVar7 << (uVar14 * '\b' - 0x20 & 0x1f));
                    arg3_00 = uVar5;
                    uVar14 = uVar11;
                } while (uVar11 < 8);
                iVar1 = *(arg1 + 0x2b18);
                if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && (((iVar1 != 4 && (iVar1 != 5)) && (iVar1 != 6)))
                   ) {
                    arg3_00 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
                    uVar9 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
                }
            }
            else {
                uVar9 = 0xffffffff;
                arg3_00 = 0xffffffff;
            }
            fcn.00019a5c(arg1,uVar9,arg3_00);
        }
    }
    uVar3 = *(arg1 + 0x2e3c) & 0xffffffc0;
    *(arg1 + 0x2acc) = arg2;
    *(arg1 + 0x2e3c) = uVar3;
    if (arg2 != 0) {
        if ((arg2 & 1U) != 0) {
            uVar3 = uVar3 | 2;
            *(arg1 + 0x2e3c) = uVar3;
        }
        if ((arg2 & 2U) != 0) {
            uVar3 = uVar3 | 8;
            *(arg1 + 0x2e3c) = uVar3;
        }
        if ((arg2 & 8U) != 0) {
            fcn.00019a5c(arg1,0xffffffff,0xffffffff);
            *(arg1 + 0x2e3c) = *(arg1 + 0x2e3c) | 0x3f;
            uVar3 = *(arg1 + 0x2e3c);
        }
        if ((arg2 & 0x10U) != 0) {
            fcn.00019a5c(arg1,0xffffffff,0xffffffff);
            uVar3 = *(arg1 + 0x2e3c) | 4;
        }
        if ((arg2 & 4U) != 0) {
            uVar3 = uVar3 | 4;
        }
    }
    *(arg1 + 0x2e3c) = uVar3 | 0xe;
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),CONCAT71(uVar3 >> 8,1),4,0x44,&stack0x00000010);
    return;
}


/* fcn.0001a64c @ 0x1a64c */

void fcn.0001a64c(int64_t arg1)

{
    int iVar1;
    int16_t iVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    
    fcn.00019f74(arg1);
    fcn.00023410(arg1);
    iVar1 = *(arg1 + 0x2b18);
    if ((((iVar1 == 0x36) || (iVar1 == 0x37)) || (iVar1 == 0x38)) || (iVar1 == 0x39)) {
        uVar4 = fcn.0001511c(arg1,0x44);
        fcn.000151ac(arg1,uVar4 & 0xffffffc0,0x44);
    }
    fcn.00022b34(arg1);
    fcn.00022c4c(arg1);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0xfa);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0xfa);
    }
    if (*(arg1 + 0x2b18) == 0x36) {
        fcn.000151ac(arg1,0x70,0);
        fcn.000151ac(arg1,0x74,0x800010e8);
        fcn.000151ac(arg1,0xb0,1);
        fcn.000151ac(arg1,0xb4,0x80001030);
        fcn.000151ac(arg1,0xb4,0xf034);
        uVar4 = 0;
        do {
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(0x32);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
            }
            uVar4 = uVar4 + 1;
            iVar2 = fcn.0001511c(arg1,0xb0);
        } while ((iVar2 != 0) && (uVar4 < 10));
    }
    uVar3 = fcn.000150ec(arg1,0x3e);
    fcn.0001517c(arg1,uVar3,0x3e);
    if (*(arg1 + 0x2e35) == '\0') {
        fcn.0001517c(arg1,0,0x3c);
    }
    else {
        fcn.000151ac(arg1,0,0x38);
    }
    iVar1 = *(arg1 + 0x2b18);
    if (iVar1 < 0x3b) {
        if ((((iVar1 != 0x3a) && (iVar1 != 0x21)) &&
            (((iVar1 != 0x2c && ((iVar1 != 0x2d && (iVar1 != 0x2e)))) && (iVar1 != 0x2f)))) &&
           ((iVar1 != 0x30 && (iVar1 != 0x31)))) {
            return;
        }
    }
    else if ((((iVar1 != 0x3b) && (iVar1 != 0x3c)) &&
             ((iVar1 != 0x3d && (((iVar1 != 0x3e && (iVar1 != 0x3f)) && (iVar1 != 0x41)))))) && (iVar1 != 0x43)) {
        return;
    }
    fcn.00023b94(arg1);
    return;
}


/* fcn.0002e814 @ 0x2e814 */

int64_t fcn.0002e814(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint8_t *puVar3;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3 == arg2) {
        iVar1 = 0;
    }
    else {
        if (puVar3 == NULL) {
            fcn.0002fe18(0x346c0,arg1 + 0x37,0x34698);
        }
        if (arg2 == 0) {
            fcn.0002fe18(0x346c0,0x38,0x34700);
        }
        uVar2 = arg3 - 1;
        if (~puVar3 < uVar2) {
            fcn.0002fe18(0x346c0,0x39,0x344e0);
        }
        if (~arg2 < uVar2) {
            fcn.0002fe18(0x346c0,0x3a,0x34568);
        }
        for (; (uVar2 != 0 && (*puVar3 == *arg2)); puVar3 = puVar3 + 1) {
            arg2 = arg2 + 1;
            uVar2 = uVar2 - 1;
        }
        iVar1 = *puVar3 - *arg2;
    }
    return iVar1;
}


/* fcn.0001a364 @ 0x1a364 */

ulong fcn.0001a364(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t arg3_00;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_188;
    ulong uStack_180;
    
    arg3_00 = 0x208;
    fcn.0002e758(&uStack_228,0x208);
    if (arg3 == 0) {
        *(arg1 + 0x2e20) = 0;
        *(arg1 + 0x2e10) = 0;
        *(arg1 + 0x2e00) = 0;
        *(arg1 + 0x2df0) = 0;
        *(arg1 + 0x2de0) = 0;
        *(arg1 + 0x2dd0) = 0;
        if (*(arg1 + 0x2e30) == '\0') {
            fcn.000151ac(arg1,*(arg1 + 0x2cd8) | 1,0x10);
        }
        else {
            fcn.0002238c(arg1);
        }
    }
    else {
        fcn.00022498(arg1);
        uStack_220 = *(arg1 + 0x2d50);
        uStack_218 = *(arg1 + 0x2d58);
        uStack_1f8 = *(arg1 + 0x2d68);
        uStack_1f0 = *(arg1 + 0x2d70);
        uStack_1e8 = *(arg1 + 0x2d78);
        uStack_1d0 = *(arg1 + 0x2d88);
        uStack_1c8 = *(arg1 + 0x2d90);
        if (*(arg1 + 0x2e31) == '\0') {
            uStack_200 = *(arg1 + 0x2d60);
            uStack_1e0 = *(arg1 + 0x2d80);
            uStack_1b0 = *(arg1 + 0x2db0);
            uStack_180 = *(arg1 + 0x2db8);
            uStack_228 = 0x104df3;
        }
        else {
            uStack_1d8 = *(arg1 + 0x2dc0);
            uStack_1a8 = *(arg1 + 0x2d98);
            uStack_1a0 = *(arg1 + 0x2da0);
            uStack_198 = *(arg1 + 0x2da8);
            uStack_188 = *(arg1 + 0x2dc8);
            uStack_228 = 0xb8ee3;
        }
        if (arg3 < 0x209) {
            arg3_00 = arg3 & 0xffff;
        }
        fcn.0002e6bc(arg2,&uStack_228,arg3_00);
    }
    return 0;
}


/* fcn.00019f74 @ 0x19f74 */

void fcn.00019f74(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint64_t uVar5;
    bool bVar6;
    
    uVar1 = *(arg1 + 0x262);
    uVar5 = uVar1;
    uVar3 = *(arg1 + 0x2a92);
    uVar2 = uVar1 + 1;
    if (uVar1 == 0xff) {
        uVar2 = 0;
    }
    if (uVar2 != *(arg1 + 0x260)) {
        do {
            uVar2 = uVar3 + 1;
            if (uVar3 == 0x1ff) {
                uVar2 = 0;
            }
            if (uVar2 == *(arg1 + 0x2a90)) break;
            iVar4 = uVar5;
            uVar5 = iVar4 + 1;
            if (iVar4 == 0xff) {
                uVar5 = 0;
            }
            if (*(*(arg1 + 0x268) + uVar5 * 0x10) < 0) break;
            if ((0x30 < *(arg1 + 0x2ace)) && (*(arg1 + 0x2cb0) != NULL)) {
                (**(arg1 + 0x2cb0))(*(arg1 + 0x2c50),*(arg1 + 0x298 + uVar5 * 0x18),*(arg1 + 0x2a0 + uVar5 * 0x18),2
                                    ,*(*(arg1 + 0x290 + uVar5 * 0x18) + 8));
            }
            *(arg1 + 0x1a90 + uVar3 * 8) = *(arg1 + 0x298 + uVar5 * 0x18);
            bVar6 = uVar3 == 0x1ff;
            *(arg1 + 0x262) = uVar5;
            uVar3 = uVar3 + 1;
            if (bVar6) {
                uVar3 = 0;
            }
            uVar2 = uVar5 + 1;
            if (uVar5 == 0xff) {
                uVar2 = 0;
            }
        } while (uVar2 != *(arg1 + 0x260));
    }
    *(arg1 + 0x2a92) = uVar3;
    return;
}


/* fcn.00023840 @ 0x23840 */

uint fcn.00023840(uint32_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint uVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    int32_t in_stack_00000078;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(arg1_00 + 0x2aa8);
    if (*(arg1_00 + 0x2e68) == '\0') {
        *(arg1_00 + 0x2e69) = 0;
    }
    uVar4 = fcn.000150bc(arg1_00,0x6c);
    if ((uVar4 & 2) == 0) {
        iVar8 = 0;
        *(arg1_00 + 0x2aa8) = 0;
        uVar6 = 0x40;
    }
    else {
        iVar7 = 1;
        uVar5 = 0;
        if ((uVar4 & 0x10) == 0) {
            if ((uVar4 & 8) == 0) {
                if ((uVar4 & 4) != 0) {
                    *(arg1_00 + 0x2aa8) = 10;
                }
            }
            else {
                *(arg1_00 + 0x2aa8) = 100;
            }
        }
        else {
            *(arg1_00 + 0x2aa8) = 1000;
        }
        uVar6 = 0;
        iVar8 = 1;
        if ((((*(arg1_00 + 0x278) == '\0') && (uVar6 = uVar5, iVar8 = iVar7, *(arg1_00 + 0x2e68) == '\0')) &&
            (iVar2 = *(arg1_00 + 0x2aa8), iVar1 != iVar2)) &&
           (((iVar7 = *(arg1_00 + 0x2b18), iVar7 == 0x29 || (iVar7 == 0x2a)) || ((iVar7 == 0x2b || (iVar7 == 0x42))))))
        {
            if (iVar2 == 1000) {
                iVar9 = 0x11;
code_r0x0002391d:
                fcn.000159b0(arg1_00,0x1bc,iVar9,0,in_stack_00000078);
                iVar9 = 5;
            }
            else {
                if (iVar2 == 100) {
                    iVar9 = 0x1f;
                    goto code_r0x0002391d;
                }
                if (iVar2 != 10) goto code_r0x00023985;
                fcn.000159b0(arg1_00,0x1bc,0x1f,0,in_stack_00000078);
                iVar9 = 0x3f;
            }
            fcn.000159b0(arg1_00,0x1dc,iVar9,0,in_stack_00000078);
        }
    }
code_r0x00023985:
    if (*(arg1_00 + 0x2af0) != iVar8) {
        if (*(arg1_00 + 0x278) != '\0') goto code_r0x00023a15;
        if (iVar8 == 1) {
            if (*(arg1_00 + 0x2e69) == '\0') {
                *(arg1_00 + 0x2af0) = 1;
                fcn.00022f48(arg1,1);
            }
            if (*(arg1_00 + 0x2e68) != '\0') {
                *(arg1_00 + 0x2e69) = 1;
            }
        }
        else {
            *(arg1_00 + 0x2af0) = 0;
            fcn.00022f48(arg1,0);
            if (*(arg1_00 + 0x2af4) == 1) {
                uVar3 = fcn.0001511c(arg1_00,100);
                if ((uVar3 >> 0x1d & 1) == 0) {
                    fcn.000151ac(arg1_00,0x30000000,100);
                }
            }
            else {
                fcn.0001bc64(arg1_00,0);
            }
        }
    }
    if (*(arg1_00 + 0x278) == '\0') {
        return uVar6;
    }
code_r0x00023a15:
    if (*(arg1_00 + 0x2af0) == 0) {
        fcn.00022f48(arg1,1);
        *(arg1_00 + 0x2af0) = 1;
    }
    return uVar6;
}


/* fcn.00019da8 @ 0x19da8 */

ushort fcn.00019da8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    int16_t iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int16_t iVar7;
    int64_t iVar8;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ushort uVar13;
    uint32_t uStackX_8;
    uint32_t uStackX_c;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = *(arg1_00 + 0x260);
    uVar10 = uVar2;
    puVar6 = *(arg1_00 + 0x290 + uVar10 * 0x18);
    if (((*(arg1_00 + 0x278) != '\0') || (*(arg1_00 + 0x2e68) != '\0')) &&
       (iVar8 = fcn.0002e814(*arg2,*arg2 + 6,6), iVar8 != 0)) {
        return 3;
    }
    if (*puVar6 < 0) {
        fcn.00019f74(arg1_00);
        uVar13 = 4;
    }
    else {
        iVar3 = *(arg2 + 0xc);
        iVar4 = *(arg2 + 8);
        iVar7 = fcn.000195d0(arg1,*arg2);
        if (iVar7 == 0) {
            uVar5 = *(arg2 + 8);
            uVar9 = uVar5;
            uVar1 = **arg2;
            if ((uVar1 == 0xff) && ((*arg2)[1] == 0xff)) {
                *(arg1_00 + 0x2df0) = *(arg1_00 + 0x2df0) + 1;
                *(arg1_00 + 0x2df8) = *(arg1_00 + 0x2df8) + uVar9;
            }
            else if ((uVar1 & 1) == 0) {
                *(arg1_00 + 0x2dd0) = *(arg1_00 + 0x2dd0) + 1;
                *(arg1_00 + 0x2dd8) = *(arg1_00 + 0x2dd8) + uVar9;
            }
            else {
                *(arg1_00 + 0x2de0) = *(arg1_00 + 0x2de0) + 1;
                *(arg1_00 + 0x2de8) = *(arg1_00 + 0x2de8) + uVar9;
            }
            *(arg1_00 + 0x298 + uVar10 * 0x18) = *arg2;
            uVar11 = iVar3 + iVar4;
            *(arg1_00 + 0x2a0 + uVar10 * 0x18) = uVar11;
            uVar12 = uVar11 | 0x30000000;
            puVar6[2] = uStackX_8;
            puVar6[1] = 0;
            puVar6[3] = uStackX_c;
            if (uVar2 == 0xff) {
                uVar12 = uVar11 | 0x70000000;
            }
            *puVar6 = uVar12 | 0x80000000;
            uVar10 = CONCAT31(uVar5 >> 8,-(*(arg1_00 + 0x2e35) != '\0')) & 0xffffffffffffffc1;
            fcn.0001514c(arg1_00,CONCAT71(uVar10 >> 8,uVar10 + '@'),(-(*(arg1_00 + 0x2e35) != '\0') & 0x58) + 0x38);
            if ((arg3 & 1U) == 0) {
                *(arg1_00 + 0x260) = *(arg1_00 + 0x260) + 1U & 0xff;
                uVar13 = 0;
            }
            else {
                uVar13 = 0xc;
            }
        }
        else {
            uVar13 = 0xe;
        }
    }
    return uVar13;
}


/* fcn.0001a0d0 @ 0x1a0d0 */

uint fcn.0001a0d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint uVar7;
    uint32_t *puVar8;
    
    uVar7 = 0x13;
    uVar4 = *(arg1 + 0x2ad0);
    while( true ) {
        puVar8 = uVar4 * 0x10 + *(arg1 + 0x270);
        if (((*(arg1 + 0x278) != '\0') && (*(arg1 + 0x280) != 0)) && (*(arg2 + 8) != *(arg1 + 0x280))) {
            return 0x13;
        }
        if ((*(arg1 + 0x2e68) != '\0') && (*(arg2 + 8) != 2000)) {
            return 0x13;
        }
        if (*puVar8 < 0) break;
        if ((*puVar8 & 0x200000) == 0) {
            uVar6 = (*puVar8 & 0x1fff) - 4;
            if (0x5ea < uVar6) {
                uVar6 = 0x5ea;
            }
            fcn.0002e6bc(*arg2,uVar4 * 0x600 + *(arg1 + 0x2a98),uVar6);
            iVar1 = *arg2;
            *(arg3 + 0x40) = uVar6;
            *(arg3 + 0x46) = 0xe;
            *(arg3 + 0x44) = *(iVar1 + 0xc);
            uVar5 = 0x600;
            *puVar8 = 0x600;
            if (*(arg1 + 0x2ad0) == 0xff) {
                uVar5 = 0x40000600;
            }
            *puVar8 = uVar5 | 0x80000000;
            puVar2 = *arg2;
            uVar3 = *(arg3 + 0x40);
            if ((*puVar2 == 0xff) && (puVar2[1] == 0xff)) {
                *(arg1 + 0x2e20) = *(arg1 + 0x2e20) + 1;
                *(arg1 + 0x2e28) = *(arg1 + 0x2e28) + uVar3;
            }
            else if ((*puVar2 & 1) == 0) {
                *(arg1 + 0x2e00) = *(arg1 + 0x2e00) + 1;
                *(arg1 + 0x2e08) = *(arg1 + 0x2e08) + uVar3;
            }
            else {
                *(arg1 + 0x2e10) = *(arg1 + 0x2e10) + 1;
                *(arg1 + 0x2e18) = *(arg1 + 0x2e18) + uVar3;
            }
            uVar7 = 0;
            *(arg1 + 0x2ad0) = *(arg1 + 0x2ad0) + 1U & 0xff;
code_r0x0001a27c:
            if (0x14 < *(arg1 + 0x2e81)) {
                *(arg1 + 0x2e81) = 0;
                fcn.00023840(arg1);
            }
            return uVar7;
        }
        *puVar8 = 0x600;
        uVar5 = 0x600;
        if (*(arg1 + 0x2ad0) == 0xff) {
            uVar5 = 0x40000600;
        }
        *puVar8 = uVar5 | 0x80000000;
        uVar4 = *(arg1 + 0x2ad0) + 1U & 0xff;
        *(arg1 + 0x2ad0) = uVar4;
    }
    *(arg1 + 0x2e81) = *(arg1 + 0x2e81) + '\x01';
    goto code_r0x0001a27c;
}


/* fcn.00018768 @ 0x18768 */

ulong fcn.00018768(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    
    fcn.000151ac(arg1,arg2,0xb0);
    fcn.000151ac(arg1,0x80002010,0xb4);
    iVar2 = 0;
    do {
        (**(*0x35158 + 0xf8))(100);
        iVar1 = fcn.0001511c(arg1,0xb4);
        if (-1 < iVar1) {
            return 0;
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
    return 0xff;
}


/* fcn.000191d4 @ 0x191d4 */

uchar fcn.000191d4(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uchar auStackX_10 [24];
    
    uVar1 = 0;
    if (*(arg1 + 0x2e5b) == '\x02') {
        (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),0,1,arg2 & 0xff,auStackX_10);
        return auStackX_10[0];
    }
    if (*(arg1 + 0x2e5b) == '\x03') {
        uVar1 = fcn.000151dc(arg1,arg2 & 0xff);
    }
    return uVar1;
}


/* fcn.000151dc @ 0x151dc */

uint64_t fcn.000151dc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = 0;
    uVar4 = arg2 & 3;
    fcn.000151ac(arg1,arg2 & 0xfffffffd | 0xf001,0x68);
    do {
        iVar1 = fcn.0001511c(arg1,0x68);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x14);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
        }
        uVar3 = uVar3 + 1;
    } while ((-1 < iVar1) && (uVar3 < 100000));
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    uVar2 = fcn.0001511c(arg1,100);
    if (uVar4 == 3) {
        uVar2 = uVar2 >> 0x18 & 0xff;
    }
    else if (uVar4 == 2) {
        uVar2 = uVar2 >> 0x10;
    }
    else if (uVar4 == 1) {
        uVar2 = uVar2 >> 8;
    }
    return uVar2;
}


/* fcn.00019208 @ 0x19208 */

void fcn.00019208(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    if (*(arg1 + 0x2e5b) == '\x02') {
        (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,1,arg3 & 0xffU,auStackX_10);
        return;
    }
    if (*(arg1 + 0x2e5b) == '\x03') {
        fcn.000152c0(arg1,arg3 & 0xffU,arg2 & 0xff);
    }
    return;
}


/* fcn.00015bb4 @ 0x15bb4 */

uint fcn.00015bb4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint auStackX_10 [6];
    
    uVar3 = 0;
    uVar1 = arg2 & 0xffffU;
    if ((arg2 & 0xf000U) != 0) {
        uVar1 = ((arg2 & 0xffffU) >> 0xc) << 0x14 | uVar1;
    }
    fcn.000151ac(arg1,(arg3 & 0xfff000 | 0xbc0) << 6 | arg3 & 0xfff | uVar1,0x74);
    do {
        uVar3 = uVar3 + 1;
        iVar2 = fcn.0001511c(arg1,0x74);
        if (iVar2 < 0) break;
    } while (uVar3 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),0,4,0x70,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00015e34 @ 0x15e34 */

void fcn.00015e34(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong uVar4;
    uint32_t uVar5;
    uint32_t in_stack_00000028;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    if (*(arg1_00 + 0x2b29) != '\0') {
        uVar4 = 0;
        uVar1 = fcn.000150bc(arg1_00,0x50);
        fcn.0001514c(arg1_00,CONCAT71(uVar4 >> 8,uVar1) | 0xc0,0x50);
    }
    fcn.000151ac(arg1_00,arg3,0x70);
    uVar3 = arg2 & 0xffffU;
    if ((arg2 & 0xf000U) != 0) {
        uVar3 = ((arg2 & 0xffffU) >> 0xc) << 0x14 | uVar3;
    }
    fcn.000151ac(arg1_00,(in_stack_00000028 & 0xfff000 | 0xfe000bc0) << 6 | in_stack_00000028 & 0xfff | uVar3,0x74);
    do {
        uVar5 = uVar5 + 1;
        iVar2 = fcn.0001511c(arg1_00,0x74);
        if (-1 < iVar2) break;
    } while (uVar5 < 100000);
    if (*(arg1_00 + 0x2b29) != '\0') {
        uVar4 = 0;
        uVar1 = fcn.000150bc(arg1_00,0x50);
        fcn.0001514c(arg1_00,CONCAT71(uVar4 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
    }
    if (*(arg1_00 + 0x2ace) == '0') {
        (**(arg1_00 + 0x2c68))(0x14);
    }
    else {
        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),0x14);
    }
    return;
}


/* fcn.000152c0 @ 0x152c0 */

void fcn.000152c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg2_00;
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = 0;
    arg2_00 = arg3;
    uVar2 = arg2 & 3;
    if (uVar2 == 3) {
        arg2_00 = arg2_00 << 0x18;
        uVar4 = 0x80008001;
    }
    else if (uVar2 == 2) {
        arg2_00 = arg2_00 << 0x10;
        uVar4 = 0x80004001;
    }
    else if (uVar2 == 1) {
        arg2_00 = arg2_00 << 8;
        uVar4 = 0x80002001;
    }
    else {
        uVar4 = 0x80001001;
    }
    fcn.000151ac(arg1,arg2_00,100);
    fcn.000151ac(arg1,arg2 & 0xfffffffc | uVar4,0x68);
    do {
        iVar1 = fcn.0001511c(arg1,0x68);
        uVar3 = uVar3 + 1;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x14);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
        }
    } while ((iVar1 < 0) && (uVar3 < 100000));
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.00030264 @ 0x30264 */

ulong fcn.00030264(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    char *arg1_00;
    int64_t iVar4;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar4 = fcn.000301dc(arg2,arg1);
                if (iVar4 == 0) {
code_r0x0003031b:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
                        for (; cVar1 = *arg1_00, cVar1 != '\0'; arg1_00 = arg1_00 + iVar4) {
                            iVar4 = 0;
                            do {
                                if (cVar1 == ';') break;
                                iVar4 = iVar4 + 1;
                                cVar1 = arg1_00[iVar4];
                            } while (cVar1 != '\0');
                            iVar3 = fcn.0002e618(arg1_00,arg1,iVar4);
                            if (iVar3 == 0) {
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x0003031b;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00030358 @ 0x30358 */

ulong fcn.00030358(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *arg2_00;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    char in_stack_00000028;
    
    iVar4 = 0;
    if (((arg1 == 0) || (arg4 == 0)) || (arg3 == 0)) {
code_r0x0003051c:
        uVar2 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg4 == 0) goto code_r0x0003051c;
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.000301dc(arg2,arg1);
                if (iVar5 == 0) {
code_r0x000303f3:
                    puVar6 = *arg3;
                    iVar5 = iVar4;
                    if (puVar6 != NULL) {
                        for (; arg2_00 = *puVar6, arg2_00 != NULL; puVar6 = puVar6 + 2) {
                            cVar1 = *arg2_00;
joined_r0x00030409:
                            if (cVar1 != '\0') {
                                cVar1 = *arg2_00;
                                iVar7 = iVar4;
                                while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                    iVar7 = iVar7 + 1;
                                    cVar1 = arg2_00[iVar7];
                                }
                                iVar3 = fcn.0002e618(arg1,arg2_00,iVar7);
                                if (iVar3 == 0) {
                                    return 0x8000000000000014;
                                }
                                arg2_00 = arg2_00 + iVar7;
                                cVar1 = *arg2_00;
                                if (cVar1 == '\0') goto code_r0x00030455;
                                do {
                                    if (cVar1 != ';') break;
                                    arg2_00 = arg2_00 + 1;
                                    cVar1 = *arg2_00;
                                } while (cVar1 != '\0');
                                goto joined_r0x00030409;
                            }
code_r0x00030455:
                            iVar5 = iVar5 + 1;
                        }
                    }
                    iVar4 = fcn.0002fea0();
                    if (iVar4 != 0) {
                        if (*arg3 != 0) {
                            fcn.0002e6bc(iVar4,*arg3,iVar5 << 4);
                        }
                        iVar7 = arg1;
                        iVar3 = fcn.0002e54c(arg1);
                        iVar7 = fcn.0002fef8(iVar7,iVar3,arg1);
                        *(iVar4 + iVar5 * 0x10) = iVar7;
                        if (iVar7 != 0) {
                            iVar7 = arg4;
                            iVar3 = fcn.0002e2b8(arg4);
                            iVar7 = fcn.0002fef8(iVar7,iVar3 * 2 + 2,arg4);
                            *(iVar4 + 8 + iVar5 * 0x10) = iVar7;
                            if (iVar7 != 0) {
                                *(iVar4 + 0x10 + iVar5 * 0x10) = 0;
                                *(iVar4 + 0x18 + iVar5 * 0x10) = 0;
                                if (*arg3 != 0) {
                                    fcn.0002ff70();
                                }
                                *arg3 = iVar4;
                                return 0;
                            }
                            fcn.0002ff70(*(iVar4 + iVar5 * 0x10));
                        }
                        fcn.0002ff70(iVar4);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x000303f3;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.000195d0 @ 0x195d0 */

ulong fcn.000195d0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t *in_stack_00000028;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x2ace) == '0') {
        if (*(iVar1 + 0x2c70) == NULL) {
            uVar2 = *(iVar1 + 0x178);
            *in_stack_00000028 = uVar2;
        }
        else {
            (**(iVar1 + 0x2c70))(arg2,in_stack_00000028);
            uVar2 = *in_stack_00000028;
        }
        if (0x100000000 < uVar2) {
            return 0xe;
        }
    }
    else if (*(iVar1 + 0x2ca8) == NULL) {
        if (0x100000000 < arg2) {
            return 0xe;
        }
        *in_stack_00000028 = arg2;
    }
    else {
        (**(iVar1 + 0x2ca8))(*(iVar1 + 0x2c50));
    }
    return 0;
}


/* fcn.00022ddc @ 0x22ddc */

void fcn.00022ddc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    iVar1 = *(arg1 + 0x178);
    iVar2 = *(arg1 + 0x180);
    *(arg1 + 0x2b00) = 7;
    *(arg1 + 0x2b04) = 7;
    *(arg1 + 0x2ab0) = 0x100;
    *(arg1 + 0x2ab4) = 0x100;
    *(arg1 + 0x288) = 0;
    uVar4 = iVar1 + 0xffU & 0xffffffffffffff00;
    *(arg1 + 0x278) = 0;
    uVar3 = iVar2 + 0xffU & 0xffffffffffffff00;
    *(arg1 + 0x280) = 0;
    *(arg1 + 0x2b2c) = 0;
    *(arg1 + 0x24c) = iVar1 + 0xffU >> 0x20;
    *(arg1 + 0x2b2a) = 0x700;
    *(arg1 + 0x244) = iVar2 + 0xffU >> 0x20;
    *(arg1 + 0x2b30) = 0x100;
    *(arg1 + 0x250) = uVar4 + 0x1000;
    *(arg1 + 600) = uVar3 + 0x1000;
    *(arg1 + 0x254) = uVar4 + 0x1000 >> 0x20;
    *(arg1 + 0x25c) = uVar3 + 0x1000 >> 0x20;
    *(arg1 + 0x2b0c) = 0x600;
    *(arg1 + 0x2a98) = iVar1 + 0x2000 + (uVar3 - iVar2);
    *(arg1 + 0x2aa0) = uVar3 + 0x2000;
    *(arg1 + 0x2e48) = uVar4 + 0x62040;
    *(arg1 + 0x2b08) = 0x700;
    *(arg1 + 0x2e50) = iVar2 + 0x62040 + (uVar4 - iVar1);
    *(arg1 + 0x2b14) = 0x3000000;
    *(arg1 + 0x2b10) = 0x3000700;
    *(arg1 + 0x228) = uVar4 - iVar1;
    *(arg1 + 0x230) = uVar3 - iVar2;
    *(arg1 + 0x248) = uVar4;
    *(arg1 + 0x240) = uVar3;
    return;
}


/* fcn.0002287c @ 0x2287c */

void fcn.0002287c(int64_t arg1)

{
    int iVar1;
    uint32_t auStackX_10 [6];
    
    *(arg1 + 0x2e30) = 0;
    iVar1 = *(arg1 + 0x2b18);
    if (iVar1 < 0x23) {
        if (iVar1 != 0x22) {
            if (iVar1 < 0x12) {
                if (iVar1 != 0x11) {
                    if (iVar1 < 10) {
                        if (iVar1 != 9) {
                            if (iVar1 == 0) goto code_r0x000228f8;
                            if (((iVar1 != 2) && (iVar1 != 3)) && ((iVar1 != 4 && (iVar1 != 5)))) {
                                if (iVar1 == 6) {
                                    *(arg1 + 0x2e31) = 1;
                                    return;
                                }
                                if ((iVar1 != 7) && (iVar1 != 8)) {
                                    return;
                                }
                            }
                        }
code_r0x000228e7:
                        *(arg1 + 0x2e30) = 0x101;
                        return;
                    }
                    if ((((iVar1 == 10) || (iVar1 == 0xb)) || (iVar1 == 0xc)) || (iVar1 = iVar1 + -0xd, iVar1 == 0))
                    goto code_r0x000228e7;
code_r0x0002292c:
                    if ((iVar1 != 1) && (iVar1 = iVar1 + -2, iVar1 != 0)) {
code_r0x000229e1:
                        if (iVar1 != 1) {
                            return;
                        }
                    }
                }
            }
            else if (iVar1 < 0x1b) {
                if (((iVar1 != 0x1a) && (iVar1 != 0x12)) &&
                   ((iVar1 != 0x13 && (((iVar1 != 0x14 && (iVar1 != 0x15)) && (iVar1 = iVar1 + -0x16, iVar1 != 0))))))
                goto code_r0x0002292c;
            }
            else if (((((iVar1 != 0x1b) && (iVar1 != 0x1c)) && (iVar1 != 0x1d)) && ((iVar1 != 0x1e && (iVar1 != 0x1f))))
                    && (iVar1 = iVar1 + -0x20, iVar1 != 0)) goto code_r0x00022a35;
        }
    }
    else {
        if (0x33 < iVar1) {
            if (iVar1 < 0x3d) {
                if (iVar1 == 0x3c) goto code_r0x000228f8;
                if ((((iVar1 == 0x34) || (iVar1 == 0x35)) || ((iVar1 == 0x36 || ((iVar1 == 0x37 || (iVar1 == 0x38))))))
                   || (iVar1 = iVar1 + -0x39, iVar1 == 0)) goto code_r0x000228f1;
            }
            else {
                if (((iVar1 == 0x3d) || (iVar1 == 0x3e)) || (iVar1 == 0x3f)) goto code_r0x000228f8;
                iVar1 = iVar1 + -0x41;
code_r0x00022997:
                if ((iVar1 == 0) || (iVar1 = iVar1 + -1, iVar1 == 0)) goto code_r0x000228f8;
            }
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto code_r0x000228f8;
code_r0x00022a35:
            if (iVar1 != 1) {
                return;
            }
            goto code_r0x000228f8;
        }
        if (iVar1 != 0x33) {
            if (iVar1 < 0x2c) {
                if (iVar1 == 0x2b) goto code_r0x000228f8;
                if ((iVar1 != 0x23) && (iVar1 != 0x24)) {
                    if ((iVar1 == 0x25) || (iVar1 == 0x26)) goto code_r0x000228f8;
                    iVar1 = iVar1 + -0x27;
                    goto code_r0x00022997;
                }
            }
            else if ((iVar1 != 0x2c) && (iVar1 != 0x2d)) {
                if ((iVar1 == 0x2e) || (((iVar1 == 0x2f || (iVar1 == 0x30)) || (iVar1 = iVar1 + -0x31, iVar1 == 0))))
                goto code_r0x000228f8;
                goto code_r0x000229e1;
            }
        }
    }
code_r0x000228f1:
    *(arg1 + 0x2e31) = 1;
code_r0x000228f8:
    auStackX_10[0] = *(arg1 + 0x2cd8) | 1;
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),CONCAT71(*(arg1 + 0x2cd8) >> 8,1),4,0x10,auStackX_10);
    return;
}


/* fcn.0002238c @ 0x2238c */

void fcn.0002238c(uint32_t arg1)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(arg1_00 + 0x2e30) == '\0') {
        *(arg1_00 + 0x2ce8) = 0;
        *(arg1_00 + 0x2cf0) = 0;
        *(arg1_00 + 0x2cf8) = 0;
        *(arg1_00 + 0x2d00) = 0;
        *(arg1_00 + 0x2d08) = 0;
        *(arg1_00 + 0x2d10) = 0;
        *(arg1_00 + 0x2d18) = 0;
        *(arg1_00 + 0x2d20) = 0;
        *(arg1_00 + 0x2d28) = 0;
        *(arg1_00 + 0x2d30) = 0;
        *(arg1_00 + 0x2d38) = 0;
        *(arg1_00 + 0x2d40) = 0;
    }
    else {
        fcn.000222f8(arg1_00);
        puVar1 = *(arg1_00 + 0x2ce0);
        *(arg1_00 + 0x2ce8) = *puVar1;
        *(arg1_00 + 0x2cf0) = puVar1[1];
        *(arg1_00 + 0x2cf8) = puVar1[2];
        *(arg1_00 + 0x2d00) = *(puVar1 + 3);
        *(arg1_00 + 0x2d08) = *(puVar1 + 0x1c);
        *(arg1_00 + 0x2d10) = *(puVar1 + 0x1e);
        *(arg1_00 + 0x2d18) = *(puVar1 + 4);
        *(arg1_00 + 0x2d20) = *(puVar1 + 0x24);
        *(arg1_00 + 0x2d28) = puVar1[5];
        *(arg1_00 + 0x2d30) = puVar1[6];
        *(arg1_00 + 0x2d38) = *(puVar1 + 7);
        *(arg1_00 + 0x2d40) = *(puVar1 + 0x3c);
        uVar2 = *(puVar1 + 0x3e);
    }
    *(arg1_00 + 0x2d48) = uVar2;
    return;
}


/* fcn.0001a2b8 @ 0x1a2b8 */

void fcn.0001a2b8(int64_t arg1)

{
    uchar uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t arg2;
    uchar *puVar4;
    uchar *puVar5;
    
    arg2 = 0;
    puVar5 = arg1 + 0x14;
    do {
        uVar1 = fcn.000150bc(arg1,arg2);
        *puVar5 = uVar1;
        uVar3 = arg2 + 1;
        arg2 = uVar3;
        puVar5 = puVar5 + 1;
    } while (uVar3 < 6);
    puVar5 = arg1 + 0x14;
    puVar4 = arg1 + 0x34;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
    }
    *(arg1 + 0x54) = 0xffffffff;
    iVar2 = 0x1a;
    *(arg1 + 0x58) = 0xffff;
    puVar5 = arg1 + 0x1a;
    do {
        puVar5[0x20] = 0;
        *puVar5 = 0;
        puVar5[0x40] = 0;
        puVar5 = puVar5 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(arg1 + 0x2e6d) = *(arg1 + 0x37);
    *(arg1 + 0x2e6e) = *(arg1 + 0x38);
    *(arg1 + 0x2e6f) = *(arg1 + 0x39);
    *(arg1 + 0x2e6a) = 0x3333;
    *(arg1 + 0x2e6c) = 0xff;
    return;
}


/* fcn.000153bc @ 0x153bc */

void fcn.000153bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStackX_18 [16];
    
    auStackX_18[0] = arg3;
    (**(*(arg1 + 0x2c58) + 0x38))(*(arg1 + 0x2c58),0,arg2 & 0xffffffff,1,auStackX_18);
    return;
}


/* fcn.000153ec @ 0x153ec */

void fcn.000153ec(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    uchar uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong uVar12;
    uint32_t uVar13;
    uint16_t uVar14;
    uint64_t arg3_00;
    char cVar15;
    uint64_t arg2_00;
    uint32_t uStackX_10;
    int32_t in_stack_00000068;
    
    arg3_00 = arg3;
    uVar13 = 0;
    uVar14 = arg3;
    uVar9 = arg2 & 0xff;
    uVar10 = *(arg1 + 0x2b18);
    uVar11 = uVar10;
    bVar4 = false;
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    if (uVar10 == 0x36) {
        bVar4 = true;
    }
    else if (uVar10 == 0x37) {
        bVar3 = true;
    }
    else {
        if ((uVar10 == 0x38) || (uVar10 == 0x39)) {
            bVar1 = true;
        }
        uVar11 = uVar10 - 0x36;
        if (uVar10 - 0x36 != 0) {
            uVar10 = uVar10 - 0x37;
            uVar11 = uVar10;
            if ((uVar10 != 0) && (uVar10 != 1)) {
                arg2_00 = 0xb8;
                goto code_r0x00015496;
            }
        }
    }
    bVar2 = bVar4;
    arg2_00 = 0x10;
    if (bVar3) {
        uVar11 = arg1;
        uVar6 = fcn.0002a6dc(arg1,0x10);
        if ((uVar6 >> 9 & 1) != 0) {
            arg3_00 = uVar6 & 0xfdff;
            uVar11 = arg1;
            fcn.0002ab04(arg1,0x10,arg3_00);
        }
    }
code_r0x00015496:
    cVar15 = arg2;
    if ((cVar15 != '\x1f') || (*(arg1 + 0x2b34) = uVar14, *(arg1 + 0x2b33) == '\0')) {
        if (bVar1) {
            uVar12 = 0;
            uVar5 = fcn.000150bc(arg1,0xd2);
            arg3_00 = 0;
            fcn.0001514c(arg1,CONCAT71(uVar12 >> 8,uVar5) & 0xfffffffffffffffd,0xd2);
            if (*(arg1 + 0x2ace) == '0') {
                uVar11 = 100;
                (**(arg1 + 0x2c68))();
            }
            else {
                uVar11 = *(arg1 + 0x2c50);
                (**(arg1 + 0x2c88))(uVar11,100);
            }
        }
        if (*(arg1 + 0x2b33) == '\0') {
            uStackX_10 = 0;
            uVar10 = (uVar9 | 0xffff8000) << 0x10 | arg3 & 0xffff;
            if (bVar2) {
                fcn.0002acb0(arg1,0x60,uVar10);
            }
            else {
                fcn.000151ac(arg1,uVar10,0x60);
            }
            do {
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(0x14);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
                }
                uVar11 = 0;
                if (bVar2) {
                    iVar8 = fcn.0002a84c(arg1,0x60);
                }
                else {
                    iVar8 = fcn.0001511c(arg1,0x60);
                }
                uStackX_10 = uStackX_10 + 1;
            } while ((iVar8 < 0) && (uStackX_10 < 0x14));
        }
        else {
            uVar6 = fcn.00016264(uVar11,*(arg1 + 0x2b34),CONCAT71(arg3_00 >> 8,cVar15));
            uVar11 = uVar6;
            if ((uVar6 & 1) == 0) {
                uVar6 = uVar14;
            }
            else {
                uVar7 = fcn.00016318(arg1,uVar11);
                fcn.000162a0(arg1,uVar6,uVar7 & 0xff | uVar14 << 8);
                uVar7 = fcn.00016318(arg1,uVar6 + 1);
                uVar11 = uVar6 + 1;
                uVar6 = uVar7 & 0xff00 | uVar14 >> 8;
            }
            fcn.000162a0(arg1,uVar11,uVar6);
        }
        if (bVar3) {
            uVar6 = fcn.0002a6dc(arg1,arg2_00);
            fcn.0002ab04(arg1,arg2_00,uVar6 | 0x200);
            fcn.0002ab04(arg1,arg2_00,uVar6 & 0xfdff);
            uVar11 = arg2_00;
        }
        if (bVar2) {
            uVar6 = fcn.00015768(arg1,CONCAT71(uVar11 >> 8,cVar15));
            if ((((uVar6 != uVar14) && (uVar14 != 0x1200)) && (uVar14 != 0x9000)) && (1 < cVar15 - 0x1eU)) {
                uVar10 = (uVar9 | 0xffff8000) << 0x10 | arg3 & 0xffff;
                fcn.000159b0(arg1,0xe8,uVar10,0,in_stack_00000068);
                fcn.0002acb0(arg1,0x60,uVar10);
                do {
                    if (*(arg1 + 0x2ace) == '0') {
                        (**(arg1 + 0x2c68))(100);
                    }
                    else {
                        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                    }
                    uVar13 = uVar13 + 1;
                    iVar8 = fcn.0002a84c(arg1,0x60);
                } while ((iVar8 < 0) && (uVar13 < 5));
            }
        }
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x14);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
        }
    }
    return;
}


/* fcn.0001b8c0 @ 0x1b8c0 */

void fcn.0001b8c0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t arg3;
    
    cVar1 = arg2;
    fcn.0001b878(arg1);
    iVar3 = CONCAT71(arg2 >> 8,0x1f);
    fcn.000153ec(arg1,iVar3,0);
    iVar4 = *(arg1 + 0x2b18);
    if ((((iVar4 == 0x1a) || (iVar4 == 0x1b)) || (iVar4 == 0x1c)) || ((iVar4 == 0x1d || (iVar4 == 0x1e)))) {
        iVar3 = CONCAT71(iVar3 >> 8,0x1f);
        fcn.000153ec(arg1,iVar3,4);
        iVar3 = CONCAT71(iVar3 >> 8,0x19);
        uVar2 = fcn.00015768(arg1,iVar3);
        iVar3 = CONCAT71(iVar3 >> 8,0x19);
        fcn.000153ec(arg1,iVar3,uVar2 | 0x40);
        iVar3 = CONCAT71(iVar3 >> 8,0x1f);
        fcn.000153ec(arg1,iVar3,0);
        iVar4 = *(arg1 + 0x2b18);
    }
    if (iVar4 < 0x31) {
        if (((((iVar4 != 0x30) && (iVar4 != 0)) && (iVar4 != 0x28)) && ((iVar4 != 0x29 && (iVar4 != 0x2a)))) &&
           ((iVar4 != 0x2b && (iVar4 != 0x2c)))) {
            iVar4 = iVar4 + -0x2d;
code_r0x0001b99d:
            if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) {
                iVar3 = 0;
                if (cVar1 == '\0') {
                    arg3 = 0x1200;
                }
                else {
                    arg3 = 0x9200;
                }
                fcn.000153ec(arg1,0,arg3);
                goto code_r0x0001b9d2;
            }
        }
    }
    else if (((iVar4 != 0x31) && (iVar4 != 0x3a)) && ((iVar4 != 0x3b && ((iVar4 != 0x3c && (iVar4 != 0x3d)))))) {
        iVar4 = iVar4 + -0x42;
        goto code_r0x0001b99d;
    }
    fcn.0001ba38(arg1);
code_r0x0001b9d2:
    iVar4 = *(arg1 + 0x2b18);
    if ((((iVar4 == 0x1a) || (iVar4 == 0x1b)) || (iVar4 == 0x1c)) || ((iVar4 == 0x1d || (iVar4 == 0x1e)))) {
        iVar3 = CONCAT71(iVar3 >> 8,0x1f);
        fcn.000153ec(arg1,iVar3,4);
        iVar3 = CONCAT71(iVar3 >> 8,0x19);
        uVar2 = fcn.00015768(arg1,iVar3);
        iVar3 = CONCAT71(iVar3 >> 8,0x19);
        fcn.000153ec(arg1,iVar3,uVar2 & 0xffbf);
        fcn.000153ec(arg1,CONCAT71(iVar3 >> 8,0x1f),0);
    }
    return;
}


/* fcn.00019a5c @ 0x19a5c */

void fcn.00019a5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    ulong uVar2;
    
    if (*(arg1 + 0x2b18) - 5U < 2) {
        uVar2 = 0;
        uVar1 = fcn.000150bc(arg1,0x50);
        fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) | 0xc0,0x50);
    }
    fcn.000151ac(arg1,arg2,8);
    fcn.000151ac(arg1,arg3,0xc);
    if (*(arg1 + 0x2b18) - 5U < 2) {
        uVar2 = 0;
        uVar1 = fcn.000150bc(arg1,0x50);
        fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
    }
    return;
}


/* fcn.00022498 @ 0x22498 */

void fcn.00022498(uint32_t arg1)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e31) == '\0') {
        fcn.000222f8(arg1_00);
        puVar1 = *(arg1_00 + 0x2ce0);
        if (*(arg1_00 + 0x2e30) == '\0') {
            *(arg1_00 + 0x2d50) = puVar1[3] + *(puVar1 + 0x1e) + *(puVar1 + 0x1c) + puVar1[1];
            *(arg1_00 + 0x2d58) = puVar1[1];
            *(arg1_00 + 0x2d60) = *(puVar1 + 0x1c);
            *(arg1_00 + 0x2d68) = puVar1[5];
            *(arg1_00 + 0x2d70) = puVar1[6];
            *(arg1_00 + 0x2d78) = puVar1[7];
            *(arg1_00 + 0x2d80) = *(puVar1 + 0x1e) + *(puVar1 + 0x1c);
            *(arg1_00 + 0x2d88) = *(puVar1 + 0x3e) + *(puVar1 + 0x3c) + puVar1[2] + *puVar1;
            *(arg1_00 + 0x2d90) = *puVar1;
            *(arg1_00 + 0x2db0) = *(puVar1 + 0x3e) + *(puVar1 + 0x3c) + puVar1[2];
            uVar4 = *(puVar1 + 0x24) + puVar1[4];
        }
        else {
            uVar4 = *(arg1_00 + 0x2ce8);
            uVar2 = *puVar1;
            if (uVar2 < uVar4) {
                iVar11 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar11 = uVar2 - uVar4;
            }
            uVar4 = *(arg1_00 + 0x2cf0);
            uVar2 = puVar1[1];
            if (uVar2 < uVar4) {
                iVar5 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar5 = uVar2 - uVar4;
            }
            uVar4 = *(arg1_00 + 0x2cf8);
            uVar2 = puVar1[2];
            if (uVar2 < uVar4) {
                iVar12 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar12 = uVar2 - uVar4;
            }
            uVar2 = puVar1[3];
            uVar4 = *(arg1_00 + 0x2d00);
            if (uVar2 < uVar4) {
                iVar13 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar13 = uVar2 - uVar4;
            }
            uVar2 = *(puVar1 + 0x1c);
            uVar4 = *(arg1_00 + 0x2d08);
            if (uVar2 < uVar4) {
                iVar10 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar10 = uVar2 - uVar4;
            }
            uVar2 = *(puVar1 + 0x1e);
            uVar4 = *(arg1_00 + 0x2d10);
            if (uVar2 < uVar4) {
                iVar3 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar3 = uVar2 - uVar4;
            }
            uVar2 = puVar1[4];
            uVar4 = *(arg1_00 + 0x2d18);
            if (uVar2 < uVar4) {
                iVar9 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar9 = uVar2 - uVar4;
            }
            uVar2 = *(puVar1 + 0x24);
            uVar4 = *(arg1_00 + 0x2d20);
            if (uVar2 < uVar4) {
                iVar8 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar8 = uVar2 - uVar4;
            }
            uVar4 = *(arg1_00 + 0x2d28);
            uVar2 = puVar1[5];
            if (uVar2 < uVar4) {
                iVar7 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar7 = uVar2 - uVar4;
            }
            uVar4 = *(arg1_00 + 0x2d30);
            uVar2 = puVar1[6];
            if (uVar2 < uVar4) {
                iVar15 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar15 = uVar2 - uVar4;
            }
            uVar2 = puVar1[7];
            uVar4 = *(arg1_00 + 0x2d38);
            if (uVar2 < uVar4) {
                iVar16 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar16 = uVar2 - uVar4;
            }
            uVar2 = *(puVar1 + 0x3c);
            uVar4 = *(arg1_00 + 0x2d40);
            if (uVar2 < uVar4) {
                iVar14 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar14 = uVar2 - uVar4;
            }
            uVar2 = *(puVar1 + 0x3e);
            uVar4 = *(arg1_00 + 0x2d48);
            if (uVar2 < uVar4) {
                iVar6 = ~(uVar4 - uVar2) + 1;
            }
            else {
                iVar6 = uVar2 - uVar4;
            }
            if (*(arg1_00 + 0x2e31) != '\0') {
                return;
            }
            *(arg1_00 + 0x2d58) = iVar5;
            *(arg1_00 + 0x2d60) = iVar10;
            *(arg1_00 + 0x2d68) = iVar7;
            *(arg1_00 + 0x2d50) = iVar3 + iVar10 + iVar13 + iVar5;
            iVar12 = iVar6 + iVar14 + iVar12;
            *(arg1_00 + 0x2d70) = iVar15;
            *(arg1_00 + 0x2d78) = iVar16;
            *(arg1_00 + 0x2d90) = iVar11;
            *(arg1_00 + 0x2db0) = iVar12;
            *(arg1_00 + 0x2d88) = iVar12 + iVar11;
            uVar4 = iVar8 + iVar9;
        }
        *(arg1_00 + 0x2db8) = uVar4;
    }
    else {
        *(arg1_00 + 0x2dc0) = *(arg1_00 + 0x2e28) + *(arg1_00 + 0x2e18) + *(arg1_00 + 0x2e08);
        iVar11 = *(arg1_00 + 0x2e00) + *(arg1_00 + 0x2e10) + *(arg1_00 + 0x2e20);
        *(arg1_00 + 0x2d68) = *(arg1_00 + 0x2e00);
        *(arg1_00 + 0x2d70) = *(arg1_00 + 0x2e20);
        *(arg1_00 + 0x2d50) = iVar11;
        *(arg1_00 + 0x2d58) = iVar11;
        *(arg1_00 + 0x2d88) = iVar11;
        *(arg1_00 + 0x2d78) = *(arg1_00 + 0x2e10);
        *(arg1_00 + 0x2d98) = *(arg1_00 + 0x2dd0);
        *(arg1_00 + 0x2da0) = *(arg1_00 + 0x2df0);
        *(arg1_00 + 0x2da8) = *(arg1_00 + 0x2de0);
        *(arg1_00 + 0x2d90) = *(arg1_00 + 0x2dd0) + *(arg1_00 + 0x2de0) + *(arg1_00 + 0x2df0);
        *(arg1_00 + 0x2dc8) = *(arg1_00 + 0x2df8) + *(arg1_00 + 0x2de8) + *(arg1_00 + 0x2dd8);
    }
    return;
}


/* fcn.00023410 @ 0x23410 */

void fcn.00023410(int64_t arg1)

{
    uchar uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    ulong uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    
    *(arg1 + 0x2e3c) = *(arg1 + 0x2e3c) & 0xffffffc0;
    fcn.000151ac(arg1,*(arg1 + 0x2e3c),0x44);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1000);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
    }
    iVar4 = *(arg1 + 0x2b18);
    uVar7 = 0;
    if (iVar4 < 0x23) {
        if (iVar4 == 0x22) goto code_r0x00023544;
        if (iVar4 < 0x12) {
            if (iVar4 == 0x11) goto code_r0x00023544;
            iVar8 = 10;
            if (iVar4 < 10) {
                if (iVar4 != 9) {
                    if (iVar4 == 0) goto code_r0x0002373e;
                    if (((((iVar4 != 2) && (iVar4 != 3)) && (iVar4 != 4)) && ((iVar4 != 5 && (iVar4 != 6)))) &&
                       ((iVar4 != 7 && (iVar4 != 8)))) {
                        return;
                    }
                }
code_r0x000234df:
                do {
                    fcn.000237b4(arg1);
                    if (*(arg1 + 0x2ace) == '0') {
                        (**(arg1 + 0x2c68))(100);
                    }
                    else {
                        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                    }
                    iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
                return;
            }
            if (((iVar4 == 10) || (iVar4 == 0xb)) || ((iVar4 == 0xc || (iVar4 = iVar4 + -0xd, iVar4 == 0))))
            goto code_r0x000234df;
        }
        else {
            if (0x1a < iVar4) {
                if ((((iVar4 == 0x1b) || (iVar4 == 0x1c)) || (iVar4 == 0x1d)) ||
                   (((iVar4 == 0x1e || (iVar4 == 0x1f)) || (iVar4 = iVar4 + -0x20, iVar4 == 0))))
                goto code_r0x00023544;
                goto code_r0x00023660;
            }
            if (((iVar4 == 0x1a) || (iVar4 == 0x12)) ||
               ((iVar4 == 0x13 || (((iVar4 == 0x14 || (iVar4 == 0x15)) || (iVar4 = iVar4 + -0x16, iVar4 == 0))))))
            goto code_r0x00023544;
        }
        if ((iVar4 == 1) || (iVar4 = iVar4 + -2, iVar4 == 0)) goto code_r0x00023544;
    }
    else {
        if (0x33 < iVar4) {
            if (iVar4 < 0x3d) {
                if (iVar4 == 0x3c) goto code_r0x0002373e;
                if ((iVar4 == 0x34) || (iVar4 == 0x35)) goto code_r0x00023544;
                if (((iVar4 == 0x36) || ((iVar4 == 0x37 || (iVar4 == 0x38)))) || (iVar4 = iVar4 + -0x39, iVar4 == 0)) {
                    iVar8 = 100;
                    do {
                        fcn.000237b4(arg1);
                        if (*(arg1 + 0x2ace) == '0') {
                            (**(arg1 + 0x2c68))(0x32);
                        }
                        else {
                            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
                        }
                        iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    uVar7 = 0;
                    do {
                        puVar5 = *(arg1 + 0x268);
                        uVar2 = 0;
                        do {
                            if ((*puVar5 & 0x8000) != 0) goto code_r0x000236e1;
                            uVar2 = uVar2 + 1;
                            puVar5 = puVar5 + 4;
                        } while (uVar2 < 0x100);
                        if ((uVar2 == 0x100) && (uVar3 = fcn.000150bc(arg1,0x38), (uVar3 & 0xc0) == 0)) {
                            return;
                        }
code_r0x000236e1:
                        if (*(arg1 + 0x2ace) == '0') {
                            (**(arg1 + 0x2c68))(100);
                        }
                        else {
                            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                        }
                        uVar7 = uVar7 + 1;
                        if (1999 < uVar7) {
                            return;
                        }
                    } while( true );
                }
            }
            else {
                if ((((iVar4 == 0x3d) || (iVar4 == 0x3e)) || (iVar4 == 0x3f)) || (iVar4 = iVar4 + -0x41, iVar4 == 0))
                goto code_r0x0002373e;
code_r0x000235d3:
                iVar4 = iVar4 + -1;
                if (iVar4 == 0) goto code_r0x0002373e;
            }
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto code_r0x0002373e;
code_r0x00023660:
            if (iVar4 != 1) {
                return;
            }
code_r0x0002373e:
            uVar6 = 0;
            uVar1 = fcn.000150bc(arg1,0x37);
            fcn.0001514c(arg1,CONCAT71(uVar6 >> 8,uVar1) | 0x80,0x37);
            do {
                uVar2 = fcn.0001511c(arg1,0x40);
                if ((uVar2 >> 0xb & 1) != 0) {
                    return;
                }
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(0x32);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 100);
            return;
        }
        if (iVar4 == 0x33) goto code_r0x00023544;
        if (iVar4 < 0x2c) {
            if (iVar4 == 0x2b) goto code_r0x0002373e;
            if (((iVar4 == 0x23) || (iVar4 == 0x24)) ||
               ((iVar4 == 0x25 || ((iVar4 == 0x26 || (iVar4 = iVar4 + -0x27, iVar4 == 0)))))) goto code_r0x00023544;
            goto code_r0x000235d3;
        }
        if (((((iVar4 == 0x2c) || (iVar4 == 0x2d)) || (iVar4 == 0x2e)) || ((iVar4 == 0x2f || (iVar4 == 0x30)))) ||
           (iVar4 = iVar4 + -0x31, iVar4 == 0)) goto code_r0x0002373e;
    }
    if (iVar4 != 1) {
        return;
    }
code_r0x00023544:
    uVar6 = 0;
    uVar1 = fcn.000150bc(arg1,0x37);
    fcn.0001514c(arg1,CONCAT71(uVar6 >> 8,uVar1) | 0x80,0x37);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1000);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
    }
    return;
}


/* fcn.00022b34 @ 0x22b34 */

ulong fcn.00022b34(uint32_t arg1)

{
    char cVar1;
    int iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong uVar3;
    uint16_t uVar4;
    int32_t in_stack_00000088;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e59) == '\0') goto code_r0x00022c08;
    iVar2 = *(arg1_00 + 0x2b18);
    if ((iVar2 == 0x36) || (iVar2 == 0x37)) {
        fcn.00015c64(arg1_00,0xe8,0,0);
        iVar2 = *(arg1_00 + 0x2b18);
    }
    if (iVar2 == 0x37) {
        fcn.000159b0(arg1_00,0xc0,0,0,in_stack_00000088);
        uVar3 = 0;
        fcn.0002b070(arg1,0);
        fcn.0002b070(arg1,CONCAT71(uVar3 >> 8,1));
        iVar2 = *(arg1_00 + 0x2b18);
    }
    if ((iVar2 != 0x36) && (iVar2 != 0x37)) goto code_r0x00022c08;
    uVar4 = 0;
    do {
        cVar1 = fcn.0002a5a0(arg1_00,0x34);
        if (cVar1 == '\0') {
            if (*(arg1_00 + 0x2e58) != '\0') goto code_r0x00022c08;
            uVar4 = 0;
            goto code_r0x00022be7;
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 10);
    goto code_r0x00022c01;
    while (uVar4 = uVar4 + 1, uVar4 < 10) {
code_r0x00022be7:
        cVar1 = fcn.0002a5a0(arg1_00,0x35);
        if (cVar1 == '\0') goto code_r0x00022c08;
    }
code_r0x00022c01:
    *(arg1_00 + 0x2e58) = 1;
code_r0x00022c08:
    fcn.0001514c(arg1_00,0,0x37);
    if ((*(arg1_00 + 0x2e59) != '\0') && ((*(arg1_00 + 0x2b18) == 0x36 || (*(arg1_00 + 0x2b18) == 0x37)))) {
        fcn.0002af8c(arg1_00);
    }
    return 0;
}


/* fcn.00023b94 @ 0x23b94 */

void fcn.00023b94(uint32_t arg1)

{
    int iVar1;
    uchar uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong uVar3;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2b32) != '\0') {
        iVar1 = *(arg1_00 + 0x2b18);
        if (iVar1 < 0x3b) {
            if (((iVar1 != 0x3a) && (iVar1 != 0x21)) &&
               ((iVar1 != 0x2c &&
                ((((iVar1 != 0x2d && (iVar1 != 0x2e)) && (iVar1 != 0x2f)) && ((iVar1 != 0x30 && (iVar1 != 0x31)))))))) {
                return;
            }
        }
        else if ((((iVar1 != 0x3b) && (iVar1 != 0x3c)) && (iVar1 != 0x3d)) &&
                (((iVar1 != 0x3e && (iVar1 != 0x3f)) && ((iVar1 != 0x41 && (iVar1 != 0x43)))))) {
            return;
        }
        uVar3 = 0;
        uVar2 = fcn.000150bc(arg1_00,0xf2);
        fcn.0001514c(arg1_00,CONCAT71(uVar3 >> 8,uVar2) & 0xfffffffffffffff7,0xf2);
    }
    return;
}


/* fcn.00016094 @ 0x16094 */

void fcn.00016094(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint64_t arg2_00;
    
    arg2_00 = arg2 & 0xffffffff;
    fcn.0001514c(arg1,CONCAT71(arg2 >> 8,0xc0),0x50);
    uVar1 = fcn.000150bc(arg1,arg2_00);
    fcn.0001514c(arg1,CONCAT71(arg2_00 >> 8,uVar1 & ~arg3),arg2 & 0xffffffff);
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,1,0x50,&stack0x00000010);
    return;
}


/* fcn.00023ab4 @ 0x23ab4 */

bool fcn.00023ab4(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    do {
        uVar2 = fcn.0001511c(arg1,0x40);
        if ((uVar2 >> 0xb & 1) != 0) break;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0x14);
    do {
        uVar1 = fcn.000150bc(arg1,0xd3);
        if ((uVar1 & 0x30) == 0x30) break;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0x14);
    if (*(arg1 + 0x2b32) != '\0') {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(2000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),2000);
        }
    }
    return uVar3 != 0x14;
}


/* fcn.00015b30 @ 0x15b30 */

uint fcn.00015b30(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint auStackX_10 [6];
    
    uVar2 = 0;
    fcn.000151ac(arg1,(arg3 & 0xff) << 0x10 | 0xf000 | arg2,0x74);
    do {
        uVar2 = uVar2 + 1;
        iVar1 = fcn.0001511c(arg1,0x74);
        if (iVar1 < 0) break;
    } while (uVar2 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),0,4,0x70,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00023a54 @ 0x23a54 */

bool fcn.00023a54(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    do {
        uVar1 = fcn.000150bc(arg1,0xd3);
        if ((uVar1 & 2) != 0) break;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
    return uVar2 != 0x14;
}


/* fcn.0001c7fc @ 0x1c7fc */

//WARNING: Variable defined which should be unmapped: var_2dh

void fcn.0001c7fc(int64_t arg1)

{
    uchar uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t in_RDX;
    uint64_t arg2;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong in_R8;
    unkbyte7 Var10;
    int64_t iVar9;
    int32_t var_2dh;
    int32_t in_stack_00000088;
    int32_t var_2dh_2;
    int32_t var_20h;
    int32_t var_bp_10h;
    int32_t var_bh;
    
    iVar8 = *(arg1 + 0x2b18);
    Var10 = in_R8 >> 8;
    if (iVar8 < 0x2a) {
        if (iVar8 != 0x29) {
            if (0x1f < iVar8) {
                if (iVar8 == 0x20) goto code_r0x0001cdd7;
                if (iVar8 == 0x21) goto code_r0x0001d0be;
                if ((iVar8 == 0x22) || (iVar8 == 0x23)) {
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x56);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x53);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
                    uVar4 = 0xd1;
                    uVar7 = 0;
                    uVar6 = uVar7;
                    uVar1 = fcn.000150bc(arg1,0xd1);
                    fcn.0001514c(arg1,CONCAT71(uVar6 >> 8,uVar1) | 0x82,0xd1);
                    uVar2 = fcn.000150bc(arg1,0xd1);
                    uVar2 = uVar2 | 0x82;
                    goto code_r0x0001cdc5;
                }
                if (iVar8 == 0x24) {
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x56);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x53);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0xd1);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0x82,0xd1);
                    uVar7 = 0;
                    uVar2 = fcn.000150bc(arg1,0xf3);
                    uVar2 = uVar2 | 4;
                    uVar5 = 0xf3;
                    goto code_r0x0001cdc8;
                }
                if (((iVar8 != 0x25) && (iVar8 != 0x26)) && (iVar8 != 0x27)) {
                    if (iVar8 == 0x28) {
                        fcn.000153bc(arg1,0x70f,CONCAT71(Var10,0x17));
                        fcn.0001517c(arg1,0x5f3,0xda);
                        fcn.000159b0(arg1,200,0x100002,0,in_stack_00000088);
                        fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000088);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x40);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0x80,0x40);
                        uVar4 = fcn.00015b30(arg1,0xdc,0);
                        fcn.000159b0(arg1,0xdc,uVar4 & 0xfffffffe,0,in_stack_00000088);
                        fcn.000159b0(arg1,0xdc,uVar4 | 1,0,in_stack_00000088);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x50);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x56);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x53);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0xf1);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0xf1);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x50);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
                        uVar3 = fcn.000150ec(arg1,0xe0);
                        fcn.0001517c(arg1,uVar3 & 0x2063,0xe0);
                        uVar4 = fcn.00015b30(arg1,0x1d0,0);
                        fcn.000159b0(arg1,0x1d0,uVar4 & 0xfffffffd,0,in_stack_00000088);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x1a);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff3,0x1a);
                        uVar4 = fcn.00015b30(arg1,0x1dc,0);
                        fcn.000159b0(arg1,0x1dc,uVar4 & 0xffffff00 | 100,0,in_stack_00000088);
                        uVar7 = 0;
                        uVar1 = fcn.000150bc(arg1,0x1b);
                        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff3,0x1b);
                        uVar2 = fcn.00015a50(arg1,0xd5,0);
                        in_RDX = 0;
                        fcn.00015c64(arg1,0xd5,uVar2 | 0xc,0);
                    }
                    goto code_r0x0001d7d0;
                }
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x50);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x56);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff6,0x56);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x53);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x50);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0xf3);
                arg2 = CONCAT71(uVar7 >> 8,uVar1) | 0x20;
                fcn.0001514c(arg1,arg2,0xf3);
                uVar5 = 0xf3;
                in_RDX = CONCAT71(arg2 >> 8,uVar1) & 0xffffffffffffffdf;
code_r0x0001cdca:
                fcn.0001514c(arg1,in_RDX,uVar5);
                goto code_r0x0001d7d0;
            }
            if (iVar8 == 0x1f) {
code_r0x0001cdd7:
                fcn.0001517c(arg1,0x5f3,0xda);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x50);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x56);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x53);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0xf1);
                iVar9 = 0xf1;
code_r0x0001c8d5:
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,iVar9);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x50);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0xf2);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0xf2);
                uVar7 = 0;
                uVar2 = fcn.000150bc(arg1,0xd0);
                uVar2 = uVar2 & 0xbf;
                uVar5 = 0xd0;
                goto code_r0x0001cdc8;
            }
            if (iVar8 == 5) {
                uVar2 = fcn.000150bc(arg1,0x53);
                in_RDX = 0xfffff;
                uVar4 = 0xfff00;
code_r0x0001c977:
                iVar9 = 0x7c;
                if ((uVar2 & 7) != 1) {
                    in_RDX = uVar4;
                }
            }
            else {
                if (iVar8 == 6) {
                    uVar2 = fcn.000150bc(arg1,0x53);
                    in_RDX = 0x3fffff;
                    uVar4 = 0x3fff00;
                    goto code_r0x0001c977;
                }
                if ((iVar8 != 0x17) && (iVar8 != 0x18)) {
                    if (((iVar8 != 0x1a) && ((iVar8 != 0x1b && (iVar8 != 0x1c)))) &&
                       ((iVar8 != 0x1d && (iVar8 != 0x1e)))) goto code_r0x0001d7d0;
                    fcn.0001517c(arg1,0x5f3,0xda);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x56);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x53);
                    iVar9 = 0x53;
                    goto code_r0x0001c8d5;
                }
                uVar2 = fcn.000150bc(arg1,0xf5);
                iVar9 = 0xf5;
                in_RDX = uVar2 | 4;
            }
            fcn.000151ac(arg1,in_RDX,iVar9);
            goto code_r0x0001d7d0;
        }
        fcn.000153bc(arg1,0x70f,CONCAT71(Var10,0x17));
        fcn.0001517c(arg1,0x5f3,0xda);
        fcn.000159b0(arg1,200,0x100002,0,in_stack_00000088);
        fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000088);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x40);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0x80,0x40);
        uVar4 = fcn.00015b30(arg1,0xdc,0);
        fcn.000159b0(arg1,0xdc,uVar4 & 0xfffffffe,0,in_stack_00000088);
        fcn.000159b0(arg1,0xdc,uVar4 | 1,0,in_stack_00000088);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x50);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x56);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x53);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0xf1);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0xf1);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x50);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
        uVar3 = fcn.000150ec(arg1,0xe0);
        fcn.0001517c(arg1,uVar3 & 0x2063,0xe0);
        uVar4 = fcn.00015b30(arg1,0x1d0,0);
        fcn.000159b0(arg1,0x1d0,uVar4 & 0xfffffffd,0,in_stack_00000088);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x1a);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff3,0x1a);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x1b);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff8,0x1b);
        uVar7 = 0;
        uVar1 = fcn.000150bc(arg1,0x53);
        fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffffdf,0x53);
        uVar2 = fcn.00015a50(arg1,0xd5,0);
        fcn.00015c64(arg1,0xd5,uVar2 | 0xc,0);
        fcn.00015b30(arg1,0x1b0,0);
        fcn.000159b0(arg1,0xcc,0x50,0,in_stack_00000088);
        in_RDX = 0xd0;
        uVar5 = 0x7ff0060;
    }
    else {
        if (iVar8 < 0x3c) {
            if (iVar8 == 0x3b) goto code_r0x0001d0be;
            if ((iVar8 != 0x2a) && (iVar8 != 0x2b)) {
                if (((iVar8 != 0x2c) && (((iVar8 != 0x2d && (iVar8 != 0x2e)) && (iVar8 != 0x2f)))) &&
                   (((iVar8 != 0x30 && (iVar8 != 0x31)) && (iVar8 != 0x3a)))) goto code_r0x0001d7d0;
                goto code_r0x0001d0be;
            }
            fcn.000153bc(arg1,0x70f,CONCAT71(Var10,0x17));
            fcn.0001517c(arg1,0x5f3,0xda);
            fcn.000159b0(arg1,200,0x100002,0,in_stack_00000088);
            fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000088);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x40);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0x80,0x40);
            uVar4 = fcn.00015b30(arg1,0xdc,0);
            fcn.000159b0(arg1,0xdc,uVar4 & 0xfffffffe,0,in_stack_00000088);
            fcn.000159b0(arg1,0xdc,uVar4 | 1,0,in_stack_00000088);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x50);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x56);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x53);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0xf1);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0xf1);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x50);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
            uVar3 = fcn.000150ec(arg1,0xe0);
            fcn.0001517c(arg1,uVar3 & 0x2063,0xe0);
            uVar2 = fcn.00015a50(arg1,0xd5,0);
            fcn.00015c64(arg1,0xd5,uVar2 | 0xc,0);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x1b);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff8,0x1b);
            uVar4 = fcn.00015b30(arg1,0x1d0,0);
            fcn.000159b0(arg1,0x1d0,uVar4 & 0xfffffffd,0,in_stack_00000088);
            uVar4 = fcn.00015b30(arg1,0x1b0,0);
            fcn.000159b0(arg1,0x1b0,uVar4 | 0x10,0,in_stack_00000088);
            fcn.000159b0(arg1,0xcc,0x50,0,in_stack_00000088);
            fcn.000159b0(arg1,0xd0,0x60,0,in_stack_00000088);
code_r0x0001d31a:
            uVar4 = fcn.00015b30(arg1,0x1d0,0);
            uVar4 = uVar4 | 0x10;
        }
        else {
            if ((((iVar8 != 0x3c) && (iVar8 != 0x3d)) && (iVar8 != 0x3e)) && ((iVar8 != 0x3f && (iVar8 != 0x41)))) {
                if (iVar8 == 0x42) {
                    fcn.000153bc(arg1,0x70f,CONCAT71(Var10,0x17));
                    fcn.0001517c(arg1,0x5f3,0xda);
                    fcn.000159b0(arg1,200,0x100002,0,in_stack_00000088);
                    fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000088);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x40);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0x80,0x40);
                    uVar4 = fcn.00015b30(arg1,0xdc,0);
                    fcn.000159b0(arg1,0xdc,uVar4 & 0xfffffffe,0,in_stack_00000088);
                    fcn.000159b0(arg1,0xdc,uVar4 | 1,0,in_stack_00000088);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x56);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x53);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0xf1);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0xf1);
                    uVar7 = 0;
                    uVar1 = fcn.000150bc(arg1,0x50);
                    fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
                    uVar3 = fcn.000150ec(arg1,0xe0);
                    fcn.0001517c(arg1,uVar3 & 0x2063,0xe0);
                    uVar2 = fcn.00015a50(arg1,0xd5,0);
                    fcn.00015c64(arg1,0xd5,uVar2 | 0xc,0);
                    uVar4 = fcn.00015b30(arg1,0x1b0,0);
                    fcn.000159b0(arg1,0x1b0,uVar4 | 0x10,0,in_stack_00000088);
                    fcn.000159b0(arg1,0xcc,0x50,0,in_stack_00000088);
                    fcn.000159b0(arg1,0xd0,0x60,0,in_stack_00000088);
                    goto code_r0x0001d31a;
                }
                if (iVar8 == 0x43) goto code_r0x0001d0be;
                if (iVar8 != 0x44) goto code_r0x0001d7d0;
                fcn.000153bc(arg1,0x70f,CONCAT71(Var10,0x17));
                fcn.0001517c(arg1,0x5f3,0xda);
                fcn.000159b0(arg1,200,0x100002,0,in_stack_00000088);
                fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000088);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x40);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0x80,0x40);
                uVar4 = fcn.00015b30(arg1,0xdc,0);
                fcn.000159b0(arg1,0xdc,uVar4 & 0xfffffffe,0,in_stack_00000088);
                fcn.000159b0(arg1,0xdc,uVar4 | 1,0,in_stack_00000088);
                uVar4 = 0x50;
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x50);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x56);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
                uVar7 = 0;
                uVar1 = fcn.000150bc(arg1,0x53);
                fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
                uVar7 = 0;
                uVar2 = fcn.000150bc(arg1,0x50);
                uVar2 = uVar2 & 0x3f;
code_r0x0001cdc5:
                uVar5 = uVar4;
code_r0x0001cdc8:
                in_RDX = CONCAT71(uVar7 >> 8,uVar2);
                goto code_r0x0001cdca;
            }
code_r0x0001d0be:
            fcn.000153bc(arg1,0x70f,CONCAT71(Var10,0x17));
            if (*(arg1 + 0x2e35) == '\0') {
                fcn.0001517c(arg1,0x5f2,0xda);
            }
            else {
                fcn.0001517c(arg1,0x400b,0xda);
                fcn.00016134(arg1,0xc140,0xffff);
                fcn.00016134(arg1,0xc142,0xffff);
            }
            uVar4 = fcn.00015b30(arg1,0xdc,0);
            fcn.000159b0(arg1,0xdc,uVar4 & 0xfffffffe,0,in_stack_00000088);
            fcn.000159b0(arg1,0xdc,uVar4 | 1,0,in_stack_00000088);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x50);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) | 0xc0,0x50);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x56);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x53);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0xf1);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff7f,0xf1);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x50);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
            if (*(arg1 + 0x2e35) == '\0') {
                uVar3 = fcn.000150ec(arg1,0xe0);
                fcn.0001517c(arg1,uVar3 & 0x2063,0xe0);
            }
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x54);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffffe,0x54);
            uVar7 = 0;
            uVar1 = fcn.000150bc(arg1,0x1b);
            fcn.0001514c(arg1,CONCAT71(uVar7 >> 8,uVar1) & 0xfffffffffffffff8,0x1b);
            if (*(arg1 + 0x2e35) == '\0') {
                fcn.000159b0(arg1,0x2f8,0x1d8f,0,in_stack_00000088);
            }
            uVar4 = fcn.00015b30(arg1,0x1d0,0);
            uVar4 = uVar4 & 0xfffffffd;
        }
        uVar5 = uVar4;
        in_RDX = 0x1d0;
    }
    fcn.000159b0(arg1,in_RDX,uVar5,0,in_stack_00000088);
code_r0x0001d7d0:
    fcn.0001514c(arg1,CONCAT71(in_RDX >> 8,0x10),0x37);
    iVar8 = 3000;
    do {
        uVar5 = fcn.000150bc(arg1,0x37);
        if ((uVar5 & 0x10) == 0) {
            return;
        }
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(10);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10);
        }
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return;
}


/* fcn.000222a8 @ 0x222a8 */

void fcn.000222a8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t auStackX_10 [6];
    
    *(arg1 + 0x2b10) = *(arg1 + 0x2b10) & 0xfffff8ff;
    uVar1 = (arg2 & 0xff) << 8;
    *(arg1 + 0x2b10) = *(arg1 + 0x2b10) | uVar1;
    *(arg1 + 0x2b08) = uVar1;
    uVar1 = fcn.0001511c(arg1,0x40);
    auStackX_10[0] = uVar1 & 0xfffff8ff | *(arg1 + 0x2b08);
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),CONCAT71(auStackX_10[0] >> 8,1),4,0x40,auStackX_10);
    return;
}


/* fcn.00016450 @ 0x16450 */

void fcn.00016450(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = fcn.00016318(arg1,arg2);
    uVar3 = 0;
    fcn.000151ac(arg1,(arg2 & 0xfffffffe) * 0x8000 + (uVar1 & ~arg3 | arg4) | 0x80000000,0xb8);
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
        }
        uVar3 = uVar3 + 1;
        iVar2 = fcn.0001511c(arg1,0xb8);
    } while ((iVar2 < 0) && (uVar3 < 100));
    return;
}


/* fcn.0001b878 @ 0x1b878 */

void fcn.0001b878(int64_t arg1)

{
    unkbyte7 in_RDX;
    
    if (*(arg1 + 0x2b18) - 2U < 3) {
        fcn.000153ec(arg1,CONCAT71(in_RDX,0x1f),1);
        fcn.000153ec(arg1,CONCAT71(in_RDX,0x10),0xf41b);
        fcn.000153ec(arg1,CONCAT71(in_RDX,0x1f),0);
    }
    return;
}


/* fcn.0001ba38 @ 0x1ba38 */

void fcn.0001ba38(int64_t arg1)

{
    int iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    iVar1 = *(arg1 + 0x2b18);
    uVar3 = 0;
    uVar4 = uVar3;
    if (iVar1 < 0x31) {
        if (iVar1 != 0x30) {
            if (((iVar1 == 0) || (iVar1 == 0x28)) || ((iVar1 == 0x29 || ((iVar1 == 0x2a || (iVar1 == 0x2b))))))
            goto code_r0x0001bacb;
            if ((((iVar1 != 0x2c) && (iVar1 != 0x2d)) && (iVar1 != 0x2e)) && (uVar4 = 0, iVar1 != 0x2f))
            goto code_r0x0001ba8d;
        }
    }
    else if (iVar1 != 0x31) {
        if (((iVar1 != 0x3a) && (iVar1 != 0x3b)) && (iVar1 != 0x3c)) {
            if (iVar1 == 0x3d) goto code_r0x0001ba80;
            if (iVar1 != 0x42) {
                if (iVar1 == 0x43) goto code_r0x0001ba80;
                if (iVar1 != 0x44) goto code_r0x0001ba8d;
            }
        }
code_r0x0001bacb:
        fcn.000153ec(arg1,0,0x9200);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(10000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50));
        }
        goto code_r0x0001ba8d;
    }
code_r0x0001ba80:
    fcn.000153ec(arg1,0,0x9200);
    uVar4 = uVar3;
code_r0x0001ba8d:
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(100);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50));
        }
        uVar4 = uVar4 + 1;
        iVar2 = fcn.00015768(arg1,0);
    } while ((iVar2 < 0) && (uVar4 < 1000));
    return;
}


/* fcn.0001b5c4 @ 0x1b5c4 */

void fcn.0001b5c4(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    ulong in_RDX;
    int64_t iVar3;
    unkbyte7 Var4;
    uint32_t uVar5;
    ulong in_R8;
    unkbyte6 Var8;
    uint64_t uVar6;
    ulong uVar7;
    
    iVar3 = CONCAT71(in_RDX >> 8,6);
    uVar2 = fcn.00015768(arg1,iVar3);
    iVar1 = *(arg1 + 0x2ae4);
    Var4 = iVar3 >> 8;
    Var8 = in_R8 >> 0x10;
    if ((iVar1 == 0) || (iVar1 == 1)) {
        iVar3 = CONCAT71(Var4,4);
        uVar6 = CONCAT62(Var8,-(*(arg1 + 0x2b31) != '\0')) & 0xffffffffffff0c00;
        uVar7 = CONCAT62(uVar6 >> 0x10,uVar6 + 0x1e1);
        fcn.000153ec(arg1,iVar3,uVar7);
        iVar3 = CONCAT71(iVar3 >> 8,9);
        fcn.000153ec(arg1,iVar3,CONCAT62(uVar7 >> 0x10,~-(*(arg1 + 0x2e38) != '\0')) & 0xffff0300);
        if (*(arg1 + 0x2b18) - 4U < 3) {
            iVar3 = CONCAT71(iVar3 >> 8,0xe);
            fcn.000153ec(arg1,iVar3,0);
            fcn.000153ec(arg1,CONCAT71(iVar3 >> 8,0x10),0x60);
            *(arg1 + 0x2b2c) = 0;
        }
        if (*(arg1 + 0x2e35) != '\x01') {
            return;
        }
        if (*(arg1 + 0xc) == -0x7e9e) {
            fcn.00016450(arg1,0xa5da,0x1000,0);
            return;
        }
        if (*(arg1 + 0x2b44) == 0xf) {
            if (*(arg1 + 0x2e59) == '\0') {
                uVar2 = fcn.00016318(arg1,0xa5d4);
                uVar2 = uVar2 | 0x80;
            }
            else {
                uVar2 = fcn.00016318(arg1,0xa5d4);
                uVar2 = uVar2 & 0xff7f;
            }
        }
        else {
            uVar2 = fcn.00016318(arg1,0xa5d4);
            uVar2 = uVar2 | 0x80;
        }
        fcn.000162a0(arg1,0xa5d4,uVar2);
        return;
    }
    if (iVar1 == 2) {
        uVar7 = 0;
        iVar3 = CONCAT71(Var4,9);
        fcn.000153ec(arg1,iVar3,0);
        uVar6 = CONCAT62(uVar7 >> 0x10,-(*(arg1 + 0x2b31) != '\0')) & 0xffffffffffff0c00;
        uVar5 = CONCAT62(uVar6 >> 0x10,uVar6 + 0x21);
code_r0x0001b6f6:
        iVar3 = CONCAT71(iVar3 >> 8,4);
        fcn.000153ec(arg1,iVar3,uVar5);
        if ((*(arg1 + 0x2b18) - 4U < 2) && (*(arg1 + 0x2b2c) = 0, (uVar2 & 8) != 0)) {
            iVar3 = CONCAT71(iVar3 >> 8,0x10);
            fcn.000153ec(arg1,iVar3,0);
            fcn.000153ec(arg1,CONCAT71(iVar3 >> 8,0xe),0x400);
            *(arg1 + 0x2b2c) = 1;
        }
        return;
    }
    if (iVar1 == 3) {
        uVar7 = 0;
        iVar3 = CONCAT71(Var4,9);
        fcn.000153ec(arg1,iVar3,0);
        uVar6 = CONCAT62(uVar7 >> 0x10,-(*(arg1 + 0x2b31) != '\0')) & 0xffffffffffff0c00;
        uVar5 = CONCAT62(uVar6 >> 0x10,uVar6 + 0x61);
        goto code_r0x0001b6f6;
    }
    if (iVar1 == 4) {
        uVar7 = 0;
        iVar3 = CONCAT71(Var4,9);
        fcn.000153ec(arg1,iVar3,0);
        uVar6 = CONCAT62(uVar7 >> 0x10,-(*(arg1 + 0x2b31) != '\0')) & 0xffffffffffff0c00;
        uVar5 = CONCAT62(uVar6 >> 0x10,uVar6 + 0xe1);
    }
    else {
        if (iVar1 != 5) {
            iVar3 = CONCAT71(Var4,4);
            uVar6 = CONCAT62(Var8,-(*(arg1 + 0x2b31) != '\0')) & 0xffffffffffff0c00;
            fcn.000153ec(arg1,iVar3,CONCAT62(uVar6 >> 0x10,uVar6 + 0x1e1));
            uVar5 = 0x300;
            iVar3 = CONCAT71(iVar3 >> 8,9);
            goto code_r0x0001b63f;
        }
        uVar7 = 0;
        iVar3 = CONCAT71(Var4,9);
        fcn.000153ec(arg1,iVar3,0);
        uVar6 = CONCAT62(uVar7 >> 0x10,-(*(arg1 + 0x2b31) != '\0')) & 0xffffffffffff0c00;
        uVar5 = CONCAT62(uVar6 >> 0x10,uVar6 + 0x1e1);
    }
    iVar3 = CONCAT71(iVar3 >> 8,4);
code_r0x0001b63f:
    fcn.000153ec(arg1,iVar3,uVar5);
    if (1 < *(arg1 + 0x2b18) - 4U) {
        return;
    }
    iVar3 = CONCAT71(iVar3 >> 8,0xe);
    fcn.000153ec(arg1,iVar3,0);
    fcn.000153ec(arg1,CONCAT71(iVar3 >> 8,0x10),0x60);
    *(arg1 + 0x2b2c) = 0;
    return;
}


/* fcn.0001bb40 @ 0x1bb40 */

void fcn.0001bb40(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    unkbyte7 Var4;
    int64_t arg2;
    unkuint7 Var5;
    uint32_t arg3;
    uint32_t arg3_00;
    ushort auStackX_10 [12];
    
    uVar3 = 0;
    uVar2 = fcn.000150bc(arg1,0x6c);
    Var4 = uVar3 >> 8;
    if ((uVar2 & 2) == 0) {
        if (*(arg1 + 0x2b18) - 2U < 2) {
            uVar3 = CONCAT71(Var4,0x17);
            fcn.000153ec(arg1,uVar3,0x2108);
        }
        uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
        arg2 = CONCAT71(Var4,6);
        uVar3 = fcn.00015768(arg1,arg2);
        Var5 = arg2 >> 8;
        if ((uVar3 & 1) == 0) {
            iVar1 = *(arg1 + 0x2ae4);
            if ((iVar1 == 1) || (iVar1 == 2)) {
code_r0x0001bbb1:
                arg3 = 0x1000;
code_r0x0001bbb6:
                if (*(arg1 + 0x2b18) - 2U < 2) {
                    arg3_00 = 0x2108;
code_r0x0001bbc4:
                    fcn.000153ec(arg1,CONCAT71(Var5,0x17),arg3_00);
                }
            }
            else {
                if (iVar1 == 3) {
                    arg3 = 0x100;
                    goto code_r0x0001bbb6;
                }
                if ((iVar1 == 4) || (iVar1 != 5)) goto code_r0x0001bbb1;
                arg3 = 0x2100;
                if (*(arg1 + 0x2b18) - 2U < 2) {
                    arg3_00 = 0x2138;
                    goto code_r0x0001bbc4;
                }
            }
            fcn.0001b878(arg1);
            fcn.000153ec(arg1,0,arg3);
            *(arg1 + 0x2b2d) = 0;
            goto code_r0x0001517c;
        }
        uVar3 = Var5 << 8;
        if (*(arg1 + 0x2b2c) != '\0') goto code_r0x0001517c;
        *(arg1 + 0x2b2d) = 1;
    }
    if ((*(arg1 + 0x2e32) == '\0') || (*(arg1 + 0x2e38) != '\0')) {
        uVar3 = CONCAT71(uVar3 >> 8,1);
    }
    fcn.0001b8c0(arg1,uVar3);
    *(arg1 + 0x2e5d) = 1;
code_r0x0001517c:
    auStackX_10[0] = 0x20;
    (**(arg1 + 0x2ca0))(*(arg1 + 0x2c50),1,2,0x3e,auStackX_10);
    return;
}


/* fcn.0002bc7c @ 0x2bc7c */

uint64_t fcn.0002bc7c(uint32_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    int iVar7;
    uint in_register_0000000c;
    int64_t arg1_00;
    unkbyte7 Var10;
    ulong uVar8;
    int64_t iVar9;
    uint64_t uVar11;
    uint16_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    bool bVar16;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2b37) == '\x01') {
code_r0x0002be6b:
        uVar6 = 0;
    }
    else {
        uVar8 = 0;
        uVar6 = fcn.000150bc(arg1_00,0x6c);
        if (*(arg1_00 + 0x2e39) == '\0') {
            if ((uVar6 & 2) == 0) {
                iVar7 = *(arg1_00 + 0x2b18);
                Var10 = uVar8 >> 8;
                if (iVar7 < 0x2d) {
                    if (iVar7 != 0x2c) {
                        if (iVar7 < 0x24) {
                            if (iVar7 != 0x23) {
                                if ((((iVar7 == 0x1a) || (iVar7 == 0x1b)) || (iVar7 == 0x1c)) ||
                                   ((iVar7 == 0x1d || (iVar7 == 0x1e)))) {
                                    iVar9 = CONCAT71(Var10,0x1f);
                                    fcn.000153ec(arg1_00,iVar9,2);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    fcn.000153ec(arg1_00,iVar9,0x6c6f);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x11);
                                    fcn.000153ec(arg1_00,iVar9,0x1481);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x12);
                                    fcn.000153ec(arg1_00,iVar9,0x14cb);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x13);
                                    fcn.000153ec(arg1_00,iVar9,0x3116);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x14);
                                    fcn.000153ec(arg1_00,iVar9,0xe4c);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x15);
                                    fcn.000153ec(arg1_00,iVar9,0x811b);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x16);
                                    fcn.000153ec(arg1_00,iVar9,0x6073);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                    fcn.000153ec(arg1_00,iVar9,0x38);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                    fcn.000153ec(arg1_00,iVar9,0x222b);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x19);
                                    fcn.000153ec(arg1_00,iVar9,0x42f);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x1a);
                                    fcn.000153ec(arg1_00,iVar9,0x3a67);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    fcn.000153ec(arg1_00,iVar9,uVar5 | 0x8000);
                                    uVar11 = 0;
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    uVar6 = uVar11;
                                    if ((uVar5 & 0x8000) != 0) {
                                        do {
                                            if (*(arg1_00 + 0x2ace) == '0') {
                                                (**(arg1_00 + 0x2c68))(100);
                                            }
                                            else {
                                                iVar9 = 0;
                                                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                            }
                                            if (20000 < uVar6) goto code_r0x0002c657;
                                            iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                            uVar15 = uVar6 + 1;
                                            uVar6 = uVar15;
                                            uVar5 = fcn.00015768(arg1,iVar9);
                                        } while ((uVar5 & 0x8000) != 0);
                                        if (20000 < uVar15) goto code_r0x0002c657;
                                    }
                                    iVar9 = CONCAT71(iVar9 >> 8,0x1c);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002c657:
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    fcn.000153ec(arg1_00,iVar9,uVar5 & 0x7fff);
                                    fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x1f),0);
                                    return uVar11;
                                }
                                if ((iVar7 == 0x1f) || (iVar7 == 0x20)) {
                                    iVar9 = CONCAT71(Var10,0x1f);
                                    fcn.000153ec(arg1_00,iVar9,0);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x12);
                                    fcn.000153ec(arg1_00,iVar9,0x712);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                    fcn.000153ec(arg1_00,iVar9,2);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    fcn.000153ec(arg1_00,iVar9,0x6cfa);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x11);
                                    fcn.000153ec(arg1_00,iVar9,0x1480);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x12);
                                    fcn.000153ec(arg1_00,iVar9,0xb0c9);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x13);
                                    fcn.000153ec(arg1_00,iVar9,0x812f);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x14);
                                    fcn.000153ec(arg1_00,iVar9,0xc4c);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x15);
                                    fcn.000153ec(arg1_00,iVar9,0x8214);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x16);
                                    fcn.000153ec(arg1_00,iVar9,0x616c);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                    fcn.000153ec(arg1_00,iVar9,0xa5);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                    fcn.000153ec(arg1_00,iVar9,0x224e);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x19);
                                    fcn.000153ec(arg1_00,iVar9,0xb82);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x1a);
                                    fcn.000153ec(arg1_00,iVar9,0x7a27);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    fcn.000153ec(arg1_00,iVar9,uVar5 | 0x8000);
                                    uVar11 = 0;
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    uVar6 = uVar11;
                                    if ((uVar5 & 0x8000) != 0) {
                                        do {
                                            if (*(arg1_00 + 0x2ace) == '0') {
                                                (**(arg1_00 + 0x2c68))(100);
                                            }
                                            else {
                                                iVar9 = 0;
                                                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                            }
                                            if (20000 < uVar6) goto code_r0x0002ce74;
                                            iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                            uVar15 = uVar6 + 1;
                                            uVar6 = uVar15;
                                            uVar5 = fcn.00015768(arg1,iVar9);
                                        } while ((uVar5 & 0x8000) != 0);
                                        if (20000 < uVar15) goto code_r0x0002ce74;
                                    }
                                    iVar9 = CONCAT71(iVar9 >> 8,0x1c);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002ce74:
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    uVar5 = fcn.00015768(arg1,iVar9);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                    fcn.000153ec(arg1_00,iVar9,uVar5 & 0x7fff);
                                    iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                    fcn.000153ec(arg1_00,iVar9,0);
                                    fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x12),0x12);
                                    return uVar11;
                                }
                                iVar7 = iVar7 + -0x21;
                                if (iVar7 != 0) goto code_r0x0002bd09;
                                goto code_r0x0002c974;
                            }
                        }
                        else if (iVar7 != 0x24) {
                            if (((iVar7 == 0x25) || (iVar7 == 0x26)) || (iVar7 == 0x27)) {
                                iVar9 = CONCAT71(Var10,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x23);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0x117);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,0);
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(20000);
                                }
                                else {
                                    iVar9 = 20000;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),20000);
                                }
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,2);
                                iVar9 = CONCAT71(iVar9 >> 8,5);
                                fcn.000153ec(arg1_00,iVar9,0xf568);
                                iVar9 = CONCAT71(iVar9 >> 8,8);
                                fcn.000153ec(arg1_00,iVar9,0x8030);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,3);
                                iVar9 = CONCAT71(iVar9 >> 8,1);
                                fcn.000153ec(arg1_00,iVar9,0x315e);
                                iVar9 = CONCAT71(iVar9 >> 8,2);
                                fcn.000153ec(arg1_00,iVar9,0x64b0);
                                iVar9 = CONCAT71(iVar9 >> 8,3);
                                fcn.000153ec(arg1_00,iVar9,0x995e);
                                iVar9 = CONCAT71(iVar9 >> 8,4);
                                fcn.000153ec(arg1_00,iVar9,300);
                                iVar9 = CONCAT71(iVar9 >> 8,5);
                                fcn.000153ec(arg1_00,iVar9,0x3032);
                                iVar9 = CONCAT71(iVar9 >> 8,0xd);
                                fcn.000153ec(arg1_00,iVar9,0x207);
                                iVar9 = CONCAT71(iVar9 >> 8,0xe);
                                fcn.000153ec(arg1_00,iVar9,0x300);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2c);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x5b);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0x1820);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x9bfc);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x1f),3);
                                uVar5 = fcn.00015768(arg1,0);
                                fcn.000153ec(arg1_00,0,uVar5 & 0xffc8);
                                uVar5 = fcn.00015768(arg1,0);
                                uVar8 = 0;
                                fcn.000153ec(arg1_00,0,uVar5 | 0x8000);
                                uVar11 = 0;
                                iVar9 = CONCAT71(uVar8 >> 8,0x1d);
                                uVar5 = fcn.00015768(arg1,iVar9);
                                uVar6 = uVar11;
                                if ((uVar5 >> 0xc & 1) == 0) {
                                    do {
                                        if (*(arg1_00 + 0x2ace) == '0') {
                                            (**(arg1_00 + 0x2c68))(100);
                                        }
                                        else {
                                            iVar9 = 0;
                                            (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                        }
                                        if (20000 < uVar6) goto code_r0x0002d11c;
                                        iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                        uVar15 = uVar6 + 1;
                                        uVar6 = uVar15;
                                        uVar5 = fcn.00015768(arg1,iVar9);
                                    } while ((uVar5 >> 0xc & 1) == 0);
                                    if (20000 < uVar15) goto code_r0x0002d11c;
                                }
                                iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                uVar5 = fcn.00015768(arg1,iVar9);
                                uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002d11c:
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x23);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0x116);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,2);
                                iVar9 = CONCAT71(iVar9 >> 8,5);
                                fcn.000153ec(arg1_00,iVar9,0x8568);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2c);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0xcb);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0x188f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x9bfb);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x1f),0);
                                return uVar11;
                            }
                            if ((iVar7 == 0x28) || (iVar7 == 0x29)) {
                                iVar9 = CONCAT71(Var10,0x1f);
                                fcn.000153ec(arg1_00,iVar9,0);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x15),6);
                                fcn.000153ec(arg1_00,0,0x9200);
                                uVar8 = 0;
                                uVar6 = fcn.00015768(arg1,0);
                                while ((uVar6 & 0x8000) != 0) {
                                    if (*(arg1_00 + 0x2ace) == '0') {
                                        (**(arg1_00 + 0x2c68))(100);
                                    }
                                    else {
                                        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50));
                                    }
                                    uVar8 = 0;
                                    uVar6 = fcn.00015768(arg1,0);
                                }
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(20000);
                                }
                                else {
                                    uVar8 = 20000;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),20000);
                                }
                                iVar9 = CONCAT71(uVar8 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0xd820);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x9bfc);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2c);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x5b);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2d);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0xf060);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,2);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,0);
                                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                fcn.000153ec(arg1_00,iVar9,0x12e);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,3);
                                iVar9 = CONCAT71(iVar9 >> 8,1);
                                fcn.000153ec(arg1_00,iVar9,0x368a);
                                iVar9 = CONCAT71(iVar9 >> 8,2);
                                fcn.000153ec(arg1_00,iVar9,0x5fd0);
                                iVar9 = CONCAT71(iVar9 >> 8,3);
                                fcn.000153ec(arg1_00,iVar9,0x9b84);
                                iVar9 = CONCAT71(iVar9 >> 8,4);
                                fcn.000153ec(arg1_00,iVar9,0x226);
                                iVar9 = CONCAT71(iVar9 >> 8,5);
                                fcn.000153ec(arg1_00,iVar9,0x307d);
                                iVar9 = CONCAT71(iVar9 >> 8,6);
                                fcn.000153ec(arg1_00,iVar9,0x2aee);
                                iVar9 = CONCAT71(iVar9 >> 8,0xd);
                                fcn.000153ec(arg1_00,iVar9,0x207);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0xe),800);
                                uVar5 = fcn.00015768(arg1,0);
                                fcn.000153ec(arg1_00,0,uVar5 & 0xffcc);
                                uVar5 = fcn.00015768(arg1,0);
                                uVar8 = 0;
                                fcn.000153ec(arg1_00,0,uVar5 | 0x8000);
                                uVar11 = 0;
                                iVar9 = CONCAT71(uVar8 >> 8,0x1d);
                                uVar5 = fcn.00015768(arg1,iVar9);
                                uVar6 = uVar11;
                                if ((uVar5 >> 0xc & 1) == 0) {
                                    do {
                                        if (*(arg1_00 + 0x2ace) == '0') {
                                            (**(arg1_00 + 0x2c68))(100);
                                        }
                                        else {
                                            iVar9 = 0;
                                            (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                        }
                                        if (20000 < uVar6) goto code_r0x0002c408;
                                        iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                        uVar15 = uVar6 + 1;
                                        uVar6 = uVar15;
                                        uVar5 = fcn.00015768(arg1,iVar9);
                                    } while ((uVar5 >> 0xc & 1) == 0);
                                    if (20000 < uVar15) goto code_r0x0002c408;
                                }
                                iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                uVar5 = fcn.00015768(arg1,iVar9);
                                uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002c408:
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,4);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0xd88f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x9bfb);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2c);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x8b);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2d);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0xf040);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,2);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,0);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x10),0x16e);
                                return uVar11;
                            }
                            if ((iVar7 == 0x2a) || (iVar7 == 0x2b)) {
                                iVar9 = CONCAT71(Var10,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0xd820);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x9bfc);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2c);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x4b);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2d);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0xf060);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,0);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x15),6);
                                fcn.000153ec(arg1_00,0,0x9200);
                                uVar8 = 0;
                                uVar6 = fcn.00015768(arg1,0);
                                while ((uVar6 & 0x8000) != 0) {
                                    if (*(arg1_00 + 0x2ace) == '0') {
                                        (**(arg1_00 + 0x2c68))(5000);
                                    }
                                    else {
                                        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50));
                                    }
                                    uVar8 = 0;
                                    uVar6 = fcn.00015768(arg1,0);
                                }
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(20000);
                                }
                                else {
                                    uVar8 = 20000;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),20000);
                                }
                                iVar9 = CONCAT71(uVar8 >> 8,0x10);
                                fcn.000153ec(arg1_00,iVar9,0x92e);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,3);
                                iVar9 = CONCAT71(iVar9 >> 8,1);
                                fcn.000153ec(arg1_00,iVar9,0x328a);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,6),0x2b00);
                                uVar5 = fcn.00015768(arg1,0);
                                fcn.000153ec(arg1_00,0,uVar5 & 0xffcc);
                                uVar5 = fcn.00015768(arg1,0);
                                uVar8 = 0;
                                fcn.000153ec(arg1_00,0,uVar5 | 0x8000);
                                uVar11 = 0;
                                iVar9 = CONCAT71(uVar8 >> 8,0x1d);
                                uVar5 = fcn.00015768(arg1,iVar9);
                                uVar6 = uVar11;
                                if ((uVar5 >> 0xc & 1) == 0) {
                                    do {
                                        if (*(arg1_00 + 0x2ace) == '0') {
                                            (**(arg1_00 + 0x2c68))(100);
                                        }
                                        else {
                                            iVar9 = 0;
                                            (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                        }
                                        if (20000 < uVar6) goto code_r0x0002c0a9;
                                        iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                        uVar15 = uVar6 + 1;
                                        uVar6 = uVar15;
                                        uVar5 = fcn.00015768(arg1,iVar9);
                                    } while ((uVar5 >> 0xc & 1) == 0);
                                    if (20000 < uVar15) goto code_r0x0002c0a9;
                                }
                                iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                uVar5 = fcn.00015768(arg1,iVar9);
                                uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002c0a9:
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,7);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x17);
                                fcn.000153ec(arg1_00,iVar9,0xd88f);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x9bfb);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2c);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0x8b);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                                fcn.000153ec(arg1_00,iVar9,0x2d);
                                iVar9 = CONCAT71(iVar9 >> 8,0x18);
                                fcn.000153ec(arg1_00,iVar9,0xf040);
                                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                                fcn.000153ec(arg1_00,iVar9,0);
                                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x10),0x96e);
                                return uVar11;
                            }
                            goto code_r0x0002be0c;
                        }
code_r0x0002d1fc:
                        iVar9 = CONCAT71(Var10,0x1f);
                        fcn.000153ec(arg1_00,iVar9,0);
                        iVar9 = CONCAT71(iVar9 >> 8,0x11);
                        fcn.000153ec(arg1_00,iVar9,0x401c);
                        iVar9 = CONCAT71(iVar9 >> 8,0xc);
                        fcn.000153ec(arg1_00,iVar9,6);
                        iVar9 = CONCAT71(iVar9 >> 8,0x14);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        iVar9 = CONCAT71(iVar9 >> 8,0x14);
                        fcn.000153ec(arg1_00,iVar9,uVar5 | 0x1000);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,5);
                        iVar9 = CONCAT71(iVar9 >> 8,9);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        iVar9 = CONCAT71(iVar9 >> 8,9);
                        fcn.000153ec(arg1_00,iVar9,uVar5 | 0x40);
                        fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x1f),3);
                        uVar5 = fcn.00015768(arg1,0);
                        fcn.000153ec(arg1_00,0,uVar5 & 0xffcc);
                        uVar5 = fcn.00015768(arg1,0);
                        uVar8 = 0;
                        fcn.000153ec(arg1_00,0,uVar5 | 0x8000);
                        uVar11 = 0;
                        iVar9 = CONCAT71(uVar8 >> 8,0x1d);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        uVar6 = uVar11;
                        if ((uVar5 & 0x1000) == 0) {
                            do {
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(100);
                                }
                                else {
                                    iVar9 = 0;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                }
                                if (20000 < uVar6) goto code_r0x0002d354;
                                iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                uVar15 = uVar6 + 1;
                                uVar6 = uVar15;
                                uVar5 = fcn.00015768(arg1,iVar9);
                            } while ((uVar5 & 0x1000) == 0);
                            if (20000 < uVar15) goto code_r0x0002d354;
                        }
                        iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002d354:
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,5);
                        iVar9 = CONCAT71(iVar9 >> 8,9);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        iVar9 = CONCAT71(iVar9 >> 8,9);
                        fcn.000153ec(arg1_00,iVar9,uVar5 & 0xffbf);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,0);
                        iVar9 = CONCAT71(iVar9 >> 8,0x14);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        iVar9 = CONCAT71(iVar9 >> 8,0x14);
                        fcn.000153ec(arg1_00,iVar9,uVar5 & 0xefff);
                        fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0xc),0x1006);
                        return uVar11;
                    }
                }
                else if (iVar7 < 0x3c) {
                    if (((iVar7 != 0x3b) && (iVar7 != 0x2d)) && ((iVar7 != 0x2e && (iVar7 != 0x2f)))) {
                        if ((iVar7 != 0x30) && (iVar7 != 0x31)) {
                            if ((iVar7 != 0x36) && ((iVar7 != 0x37 && (iVar7 = iVar7 + -0x38, iVar7 != 0)))) {
code_r0x0002bd09:
                                if (iVar7 != 1) {
code_r0x0002be0c:
                                    return *(arg1_00 + 0x2aec);
                                }
                            }
                            goto code_r0x0002d1fc;
                        }
code_r0x0002be4c:
                        uVar6 = fcn.0002db1c(arg1);
                        if (uVar6 == 3) {
                            iVar9 = CONCAT71(uVar8 >> 8,0x1f);
                            fcn.000153ec(arg1_00,iVar9,0xa43);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x8169);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0x18c1);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x816b);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0xc7b0);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x816d);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0x5933);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x816f);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0xb920);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x8171);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0xee07);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x8162);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0x1800);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x8173);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            fcn.000153ec(arg1_00,iVar9,0x304);
                            iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                            fcn.000153ec(arg1_00,iVar9,0xa42);
                            iVar9 = CONCAT71(iVar9 >> 8,0x11);
                            fcn.000153ec(arg1_00,iVar9,0);
                            iVar9 = CONCAT71(iVar9 >> 8,0x11);
                            uVar5 = fcn.00015768(arg1,iVar9);
                            iVar9 = CONCAT71(iVar9 >> 8,0x11);
                            fcn.000153ec(arg1_00,iVar9,uVar5 & 0xff1f | 0x10);
                            iVar9 = CONCAT71(iVar9 >> 8,0x11);
                            uVar5 = fcn.00015768(arg1,iVar9);
                            iVar9 = CONCAT71(iVar9 >> 8,0x11);
                            fcn.000153ec(arg1_00,iVar9,uVar5 | 1);
                            uVar11 = 0;
                            iVar9 = CONCAT71(iVar9 >> 8,0x11);
                            iVar4 = fcn.00015768(arg1,iVar9);
                            uVar6 = uVar11;
                            if (-1 < iVar4) {
                                do {
                                    if (*(arg1_00 + 0x2ace) == '0') {
                                        (**(arg1_00 + 0x2c68))(100);
                                    }
                                    else {
                                        iVar9 = 0;
                                        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                    }
                                    if (20000 < uVar6) goto code_r0x0002d5d6;
                                    iVar9 = CONCAT71(iVar9 >> 8,0x11);
                                    uVar15 = uVar6 + 1;
                                    uVar6 = uVar15;
                                    iVar4 = fcn.00015768(arg1,iVar9);
                                } while (-1 < iVar4);
                                if (20000 < uVar15) goto code_r0x0002d5d6;
                            }
                            iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                            fcn.000153ec(arg1_00,iVar9,0xa43);
                            iVar9 = CONCAT71(iVar9 >> 8,0x13);
                            fcn.000153ec(arg1_00,iVar9,0x802b);
                            iVar9 = CONCAT71(iVar9 >> 8,0x14);
                            iVar4 = fcn.00015768(arg1,iVar9);
                            uVar11 = iVar4 != 0x48;
code_r0x0002d5d6:
                            fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x1f),0);
                            return uVar11;
                        }
                        bVar16 = uVar6 == 2;
code_r0x0002be69:
                        if (!bVar16) {
                            return uVar6;
                        }
                        goto code_r0x0002be6b;
                    }
                }
                else if (iVar7 != 0x3c) {
                    if (iVar7 == 0x3d) goto code_r0x0002be4c;
                    if (((iVar7 == 0x3e) || (iVar7 == 0x3f)) || (iVar7 == 0x41)) {
                        uVar6 = fcn.0002db1c(arg1);
                        if (uVar6 == 1) {
                            uVar1 = fcn.0001620c(arg1_00,0xd440);
                            uVar5 = fcn.0001620c(arg1_00,0xd440);
                            uVar12 = uVar5 >> 0xe & 1;
                            uVar5 = fcn.0001620c(arg1_00,0xd440);
                            uVar3 = uVar5 >> 0xd & 1;
                            uVar5 = fcn.0001620c(arg1_00,0xd440);
                            uVar5 = uVar5 >> 0xc & 1;
                            uVar2 = fcn.0001620c(arg1_00,0xd440);
                            uVar6 = fcn.0001620c(arg1_00,0xd442);
                            if (((uVar6 & 0x20) != 0) || ((uVar2 & 0xf000) != 0xa000)) {
                                uVar6 = fcn.0001620c(arg1_00,0xd442);
                                if ((uVar6 & 0x20) == 0) {
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    fcn.00016450(arg1_00,0xa438,0x100,uVar5 << 8);
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    fcn.00016450(arg1_00,0xa438,0x200,uVar3 << 9);
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    fcn.00016450(arg1_00,0xa438,0x400,uVar12 << 10);
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    uVar5 = uVar1 >> 0xf;
                                }
                                else {
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    fcn.00016450(arg1_00,0xa438,0x100,(uVar1 >> 0xf) << 8);
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    fcn.00016450(arg1_00,0xa438,0x200,uVar12 << 9);
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                    fcn.00016450(arg1_00,0xa438,0x400,uVar3 << 10);
                                    fcn.000162a0(arg1_00,0xa436,0x8284);
                                }
                                fcn.00016450(arg1_00,0xa438,0x800,uVar5 << 0xb);
                            }
                            fcn.000162a0(arg1_00,0xa422,0);
                            uVar5 = fcn.00016318(arg1_00,0xa422);
                            fcn.000162a0(arg1_00,0xa422,uVar5 & 0xfe1f | 0x10);
                            uVar5 = fcn.00016318(arg1_00,0xa422);
                            fcn.000162a0(arg1_00,0xa422,uVar5 | 1);
                            uVar15 = 0;
                            uVar5 = fcn.00016318(arg1_00,0xa422);
                            while( true ) {
                                if ((uVar5 & 0x8000) != 0) {
                                    fcn.000162a0(arg1_00,0xa436,0x8027);
                                    iVar4 = fcn.00016318(arg1_00,0xa438);
                                    uVar5 = fcn.00016318(arg1_00,0xa400);
                                    fcn.000162a0(arg1_00,0xa400,uVar5 | 0x8000);
                                    return iVar4 != 0x48;
                                }
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(1000);
                                }
                                else {
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),1000);
                                }
                                uVar15 = uVar15 + 1;
                                if (5000 < uVar15) break;
                                uVar5 = fcn.00016318(arg1_00,0xa422);
                            }
                            return 0;
                        }
                        bVar16 = uVar6 == 0;
                        goto code_r0x0002be69;
                    }
                    if (iVar7 == 0x42) {
                        iVar9 = CONCAT71(Var10,0x1f);
                        fcn.000153ec(arg1_00,iVar9,7);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                        fcn.000153ec(arg1_00,iVar9,0x2f);
                        iVar9 = CONCAT71(iVar9 >> 8,0x17);
                        fcn.000153ec(arg1_00,iVar9,0xd820);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0x9bfc);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                        fcn.000153ec(arg1_00,iVar9,0x2c);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0x4b);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                        fcn.000153ec(arg1_00,iVar9,0x2d);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0xf060);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,0);
                        fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x15),6);
                        fcn.000153ec(arg1_00,0,0x9200);
                        uVar8 = 0;
                        uVar6 = fcn.00015768(arg1,0);
                        while ((uVar6 & 0x8000) != 0) {
                            if (*(arg1_00 + 0x2ace) == '0') {
                                (**(arg1_00 + 0x2c68))(100);
                            }
                            else {
                                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50));
                            }
                            uVar8 = 0;
                            uVar6 = fcn.00015768(arg1,0);
                        }
                        if (*(arg1_00 + 0x2ace) == '0') {
                            (**(arg1_00 + 0x2c68))(20000);
                        }
                        else {
                            uVar8 = 20000;
                            (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),20000);
                        }
                        iVar9 = CONCAT71(uVar8 >> 8,0x10);
                        fcn.000153ec(arg1_00,iVar9,0x92e);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,3);
                        fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,1),0x328a);
                        uVar5 = fcn.00015768(arg1,0);
                        fcn.000153ec(arg1_00,0,uVar5 & 0xffcc);
                        uVar5 = fcn.00015768(arg1,0);
                        uVar8 = 0;
                        fcn.000153ec(arg1_00,0,uVar5 | 0x8000);
                        uVar11 = 0;
                        iVar9 = CONCAT71(uVar8 >> 8,0x1d);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        uVar6 = uVar11;
                        if ((uVar5 >> 0xc & 1) == 0) {
                            do {
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(100);
                                }
                                else {
                                    iVar9 = 0;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                }
                                if (20000 < uVar6) goto code_r0x0002c8b7;
                                iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                                uVar15 = uVar6 + 1;
                                uVar6 = uVar15;
                                uVar5 = fcn.00015768(arg1,iVar9);
                            } while ((uVar5 >> 0xc & 1) == 0);
                            if (20000 < uVar15) goto code_r0x0002c8b7;
                        }
                        iVar9 = CONCAT71(iVar9 >> 8,0x1d);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002c8b7:
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,7);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                        fcn.000153ec(arg1_00,iVar9,0x2f);
                        iVar9 = CONCAT71(iVar9 >> 8,0x17);
                        fcn.000153ec(arg1_00,iVar9,0xd88f);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0x9bfb);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                        fcn.000153ec(arg1_00,iVar9,0x2c);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0x8b);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1e);
                        fcn.000153ec(arg1_00,iVar9,0x2d);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0xf040);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,0);
                        fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x10),0x96e);
                        return uVar11;
                    }
                    if (iVar7 != 0x43) {
                        if (iVar7 != 0x44) goto code_r0x0002be0c;
                        iVar9 = CONCAT71(Var10,0x1f);
                        fcn.000153ec(arg1_00,iVar9,0);
                        iVar9 = CONCAT71(iVar9 >> 8,0x12);
                        fcn.000153ec(arg1_00,iVar9,0x712);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0x310);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,2);
                        iVar9 = CONCAT71(iVar9 >> 8,0x10);
                        fcn.000153ec(arg1_00,iVar9,0x6cfa);
                        iVar9 = CONCAT71(iVar9 >> 8,0x11);
                        fcn.000153ec(arg1_00,iVar9,0x1480);
                        iVar9 = CONCAT71(iVar9 >> 8,0x12);
                        fcn.000153ec(arg1_00,iVar9,0xb0c9);
                        iVar9 = CONCAT71(iVar9 >> 8,0x13);
                        fcn.000153ec(arg1_00,iVar9,0x812f);
                        iVar9 = CONCAT71(iVar9 >> 8,0x14);
                        fcn.000153ec(arg1_00,iVar9,0xc4c);
                        iVar9 = CONCAT71(iVar9 >> 8,0x15);
                        fcn.000153ec(arg1_00,iVar9,0x8214);
                        iVar9 = CONCAT71(iVar9 >> 8,0x16);
                        fcn.000153ec(arg1_00,iVar9,0x616c);
                        iVar9 = CONCAT71(iVar9 >> 8,0x17);
                        fcn.000153ec(arg1_00,iVar9,0xa5);
                        iVar9 = CONCAT71(iVar9 >> 8,0x18);
                        fcn.000153ec(arg1_00,iVar9,0x224e);
                        iVar9 = CONCAT71(iVar9 >> 8,0x19);
                        fcn.000153ec(arg1_00,iVar9,0xb82);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1a);
                        fcn.000153ec(arg1_00,iVar9,0x7a27);
                        iVar9 = CONCAT71(iVar9 >> 8,0x10);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        iVar9 = CONCAT71(iVar9 >> 8,0x10);
                        fcn.000153ec(arg1_00,iVar9,uVar5 | 0x8000);
                        uVar11 = 0;
                        iVar9 = CONCAT71(iVar9 >> 8,0x10);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        uVar6 = uVar11;
                        if ((uVar5 & 0x8000) != 0) {
                            do {
                                if (*(arg1_00 + 0x2ace) == '0') {
                                    (**(arg1_00 + 0x2c68))(100);
                                }
                                else {
                                    iVar9 = 0;
                                    (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                                }
                                if (20000 < uVar6) goto code_r0x0002d7a0;
                                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                                uVar15 = uVar6 + 1;
                                uVar6 = uVar15;
                                uVar5 = fcn.00015768(arg1,iVar9);
                            } while ((uVar5 & 0x8000) != 0);
                            if (20000 < uVar15) goto code_r0x0002d7a0;
                        }
                        iVar9 = CONCAT71(iVar9 >> 8,0x1c);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        uVar11 = (uVar5 & 0xe00) != 0xa00;
code_r0x0002d7a0:
                        iVar9 = CONCAT71(iVar9 >> 8,0x10);
                        uVar5 = fcn.00015768(arg1,iVar9);
                        iVar9 = CONCAT71(iVar9 >> 8,0x10);
                        fcn.000153ec(arg1_00,iVar9,uVar5 & 0x7fff);
                        iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                        fcn.000153ec(arg1_00,iVar9,0);
                        fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x12),0x12);
                        return uVar11;
                    }
                }
code_r0x0002c974:
                iVar9 = CONCAT71(Var10,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xbce);
                iVar9 = CONCAT71(iVar9 >> 8,0x15);
                uVar5 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xbcc);
                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                uVar1 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x12);
                uVar2 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xbc4);
                iVar9 = CONCAT71(iVar9 >> 8,0x12);
                fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xa43);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x803a);
                iVar9 = CONCAT71(iVar9 >> 8,0x14);
                fcn.000153ec(arg1_00,iVar9,0x5cfa);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x803c);
                iVar9 = CONCAT71(iVar9 >> 8,0x14);
                fcn.000153ec(arg1_00,iVar9,0xeb1a);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x803e);
                iVar9 = CONCAT71(iVar9 >> 8,0x14);
                fcn.000153ec(arg1_00,iVar9,0xe1);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x8040);
                iVar9 = CONCAT71(iVar9 >> 8,0x14);
                fcn.000153ec(arg1_00,iVar9,0xfb12);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x8042);
                iVar9 = CONCAT71(iVar9 >> 8,0x14);
                fcn.000153ec(arg1_00,iVar9,0x1e0);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xc00);
                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                fcn.000153ec(arg1_00,iVar9,0x20);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x1c);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xa42);
                iVar9 = CONCAT71(iVar9 >> 8,0x11);
                fcn.000153ec(arg1_00,iVar9,0);
                iVar9 = CONCAT71(iVar9 >> 8,0x11);
                uVar3 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x11);
                fcn.000153ec(arg1_00,iVar9,uVar3 & 0xff1f | 0x10);
                iVar9 = CONCAT71(iVar9 >> 8,0x11);
                uVar3 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x11);
                fcn.000153ec(arg1_00,iVar9,uVar3 | 1);
                uVar15 = 0;
                iVar9 = CONCAT71(iVar9 >> 8,0x11);
                uVar14 = 0;
                iVar4 = fcn.00015768(arg1,iVar9);
                if (-1 < iVar4) {
                    do {
                        if (*(arg1_00 + 0x2ace) == '0') {
                            (**(arg1_00 + 0x2c68))(100);
                        }
                        else {
                            iVar9 = 0;
                            (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
                        }
                        uVar13 = 0;
                        if (20000 < uVar14) goto code_r0x0002cbe7;
                        iVar9 = CONCAT71(iVar9 >> 8,0x11);
                        uVar14 = uVar14 + 1;
                        iVar4 = fcn.00015768(arg1,iVar9);
                    } while (-1 < iVar4);
                    uVar13 = uVar15;
                    if (20000 < uVar14) goto code_r0x0002cbe7;
                }
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xa43);
                iVar9 = CONCAT71(iVar9 >> 8,0x13);
                fcn.000153ec(arg1_00,iVar9,0x802a);
                iVar9 = CONCAT71(iVar9 >> 8,0x14);
                iVar4 = fcn.00015768(arg1,iVar9);
                uVar13 = uVar15;
                if ((iVar4 != 0x48) && (iVar4 != 0x41)) {
                    uVar13 = 1;
                }
code_r0x0002cbe7:
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xc00);
                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                uVar3 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                fcn.000153ec(arg1_00,iVar9,uVar3 & 0xfff8);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xbce);
                iVar9 = CONCAT71(iVar9 >> 8,0x15);
                uVar3 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x15);
                fcn.000153ec(arg1_00,iVar9,uVar3 & 0xffe0 | uVar5 & 0x1f);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xbcc);
                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                uVar5 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x10);
                fcn.000153ec(arg1_00,iVar9,uVar5 & 0xffcf | uVar1 & 0x30);
                iVar9 = CONCAT71(iVar9 >> 8,0x12);
                uVar5 = fcn.00015768(arg1,iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,0x12);
                fcn.000153ec(arg1_00,iVar9,uVar5 & 0xff00 | uVar2 & 0xff);
                iVar9 = CONCAT71(iVar9 >> 8,0x1f);
                fcn.000153ec(arg1_00,iVar9,0xbc4);
                iVar9 = CONCAT71(iVar9 >> 8,0x12);
                fcn.00015768(arg1,iVar9);
                fcn.000153ec(arg1_00,CONCAT71(iVar9 >> 8,0x1f),0);
                return uVar13;
            }
        }
        else if ((uVar6 & 2) == 0) goto code_r0x0002be6b;
        uVar6 = 1;
    }
    return uVar6;
}


/* fcn.00022a64 @ 0x22a64 */

ulong fcn.00022a64(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    int32_t in_stack_00000088;
    
    iVar1 = *(arg1 + 0x2b18);
    if (iVar1 < 0x32) {
        if (iVar1 != 0x31) {
            if (iVar1 < 0x2d) {
                if ((iVar1 == 0x2c) || (iVar1 == 0x21)) goto code_r0x00022ab8;
                iVar1 = iVar1 + -0x28;
                bVar4 = iVar1 == 0;
            }
            else {
                iVar1 = iVar1 + -0x2d;
                bVar4 = iVar1 == 0;
            }
            goto code_r0x00022aa7;
        }
    }
    else {
        if (iVar1 < 0x40) {
            if ((iVar1 == 0x3f) || (iVar1 == 0x3a)) goto code_r0x00022ab8;
            iVar1 = iVar1 + -0x3b;
            bVar4 = iVar1 == 0;
        }
        else {
            iVar1 = iVar1 + -0x41;
            bVar4 = iVar1 == 0;
        }
code_r0x00022aa7:
        if ((!bVar4) && (iVar1 != 1)) {
            uVar2 = iVar1 - 2;
            uVar3 = uVar2;
            if ((uVar2 != 0) && (uVar2 != 1)) goto code_r0x00022af3;
        }
    }
code_r0x00022ab8:
    uVar2 = fcn.00015b30(arg1,0xdc,0);
    fcn.000159b0(arg1,0xdc,uVar2 & 0xfffffffe,0,in_stack_00000088);
    uVar3 = 0;
    fcn.000159b0(arg1,0xdc,uVar2 & 0xfffffffe | 1,0,in_stack_00000088);
code_r0x00022af3:
    fcn.0001a518(arg1);
    fcn.0001514c(arg1,CONCAT71(uVar3 >> 8,0xc),0x37);
    if (*(arg1 + 0x2b32) != '\0') {
        fcn.00023b94(arg1);
    }
    return 0;
}


/* fcn.0001a82c @ 0x1a82c */

ulong fcn.0001a82c(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint32_t arg1_00;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t arg2;
    unkbyte7 Var7;
    uint64_t uVar8;
    int64_t arg2_00;
    uint16_t uVar9;
    int64_t arg3;
    int64_t iVar10;
    ulong uVar11;
    bool bVar12;
    int32_t in_stack_00000078;
    
    arg2_00 = 0x5ef;
    uVar11 = 0;
    iVar10 = 0x5ef;
    fcn.0001517c(arg1,0x5ef,0xda);
    if (*(arg1 + 0x2e35) == '\0') {
        uVar11 = 0;
        iVar10 = CONCAT71(iVar10 >> 8,0x3f);
        fcn.0001514c(arg1,iVar10,0xec);
    }
    if (*(arg1 + 0x2b18) == 4) {
        if (*(arg1 + 0x2b2a) == '\0') {
            fcn.00016094(arg1,0x55,CONCAT71(uVar11 >> 8,1));
        }
        else {
            fcn.0001514c(arg1,CONCAT71(iVar10 >> 8,0xc0),0x50);
            uVar11 = 0;
            uVar1 = fcn.000150bc(arg1,0x55);
            fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar1) | 1,0x55);
            fcn.0001514c(arg1,0,0x50);
        }
        uVar2 = fcn.000150ec(arg1,0xe0);
        fcn.0001517c(arg1,uVar2 | 3,0xe0);
    }
    fcn.0001514c(arg1,0,0x44);
    if (*(arg1 + 0x2b32) != '\0') {
        iVar5 = *(arg1 + 0x2b18);
        if (iVar5 < 0x3b) {
            if ((((((iVar5 == 0x3a) || (iVar5 == 0x21)) || (iVar5 == 0x2c)) || ((iVar5 == 0x2d || (iVar5 == 0x2e)))) ||
                (iVar5 == 0x2f)) || ((iVar5 == 0x30 || (iVar5 == 0x31)))) goto code_r0x0001a97d;
        }
        else if (((iVar5 == 0x3b) || (((iVar5 == 0x3c || (iVar5 == 0x3d)) || (iVar5 == 0x3e)))) ||
                (((iVar5 == 0x3f || (iVar5 == 0x41)) || (iVar5 == 0x43)))) {
code_r0x0001a97d:
            uVar11 = 0;
            uVar1 = fcn.000150bc(arg1,0xf2);
            fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar1) | 8,0xf2);
        }
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(2000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),2000);
        }
        fcn.00023ab4(arg1);
    }
    iVar5 = *(arg1 + 0x2b18);
    arg1_00 = arg1;
    if (iVar5 < 0x32) {
        if (iVar5 == 0x31) {
code_r0x0001aa43:
            uVar11 = 0;
            uVar1 = fcn.000150bc(arg1,0xd3);
            fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar1) & 0xffffffffffffff7f,0xd3);
            uVar6 = fcn.00015b30(arg1,0xc0,0);
            fcn.000159b0(arg1,0xc0,uVar6 & 0xffff0000,0,in_stack_00000078);
            uVar6 = fcn.00015b30(arg1,0xb8,0);
            fcn.000159b0(arg1,0xb8,uVar6 & 0xffff0000,0,in_stack_00000078);
            iVar5 = *(arg1 + 0x2b18);
            goto code_r0x0001aab3;
        }
        if (iVar5 < 0x2d) {
            if ((iVar5 == 0x2c) || (iVar5 == 0x21)) goto code_r0x0001aa43;
            iVar4 = iVar5 + -0x28;
        }
        else {
            iVar4 = iVar5 + -0x2d;
        }
        if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || (iVar4 == 3)) goto code_r0x0001aa43;
code_r0x0001aaba:
        if ((((iVar5 != 0x21) && (iVar5 != 0x2c)) && ((iVar5 != 0x2d && ((iVar5 != 0x2e && (iVar5 != 0x2f)))))) &&
           (iVar5 != 0x30)) {
            bVar12 = iVar5 == 0x31;
code_r0x0001ab0a:
            if (!bVar12) goto code_r0x0001ab5d;
        }
code_r0x0001ab0c:
        uVar2 = fcn.0001620c(arg1,0xe8de);
        fcn.00016134(arg1_00,0xe8de,uVar2 & 0xbfff);
        fcn.00023a54(arg1);
        uVar2 = fcn.0001620c(arg1,0xe8de);
        fcn.00016134(arg1_00,0xe8de,uVar2 | 0x8000);
        fcn.00023a54(arg1);
    }
    else {
        if (iVar5 < 0x40) {
            if ((((iVar5 == 0x3f) || (iVar5 == 0x3a)) || ((iVar5 == 0x3b || ((iVar5 == 0x3c || (iVar5 == 0x3d)))))) ||
               (iVar5 == 0x3e)) goto code_r0x0001aa43;
code_r0x0001aab3:
            if (iVar5 < 0x3b) {
                if (iVar5 != 0x3a) goto code_r0x0001aaba;
                goto code_r0x0001ab0c;
            }
        }
        else if ((((iVar5 == 0x41) || (iVar5 == 0x42)) || (iVar5 == 0x43)) || (iVar5 == 0x44)) goto code_r0x0001aa43;
        if (((iVar5 == 0x3b) || (iVar5 == 0x3c)) || (iVar5 == 0x3d)) goto code_r0x0001ab0c;
        if ((iVar5 == 0x3e) || (iVar5 == 0x3f)) {
            uVar2 = fcn.0001620c(arg1,0xe8de);
            fcn.00016134(arg1_00,0xe8de,uVar2 & 0xbfff);
            fcn.00016134(arg1_00,0xc0aa,2000);
            iVar10 = 0xc0a6;
            arg3 = 0x150;
        }
        else {
            if (iVar5 != 0x41) {
                bVar12 = iVar5 == 0x43;
                goto code_r0x0001ab0a;
            }
            uVar2 = fcn.0001620c(arg1,0xe8de);
            fcn.00016134(arg1_00,0xe8de,uVar2 & 0xbfff);
            fcn.00016134(arg1_00,0xc0aa,2000);
            fcn.00016134(arg1_00,0xc0a6,0x1b5);
            iVar10 = 0xc01e;
            arg3 = 0x5555;
        }
        fcn.00016134(arg1_00,iVar10,arg3);
    }
code_r0x0001ab5d:
    uVar8 = 0;
    iVar5 = *(arg1 + 0x2b18);
    uVar6 = (*(arg1 + 0x2b04) << 5 | *(arg1 + 0x2b00)) << 8;
    *(arg1 + 0x2e3c) = uVar6;
    *(arg1 + 0x2e40) = 1;
    if (iVar5 < 0x29) {
        if (iVar5 == 0x28) {
code_r0x0001ae2a:
            fcn.000151ac(arg1,0xbf00,0x44);
            *(arg1 + 0x2e3c) = 0xbf00;
            fcn.000159b0(arg1,200,0x100002,0,in_stack_00000078);
            iVar10 = 0x100006;
code_r0x0001ae5e:
            fcn.000159b0(arg1,0xe8,iVar10,0,in_stack_00000078);
            goto code_r0x0001b10c;
        }
        if (iVar5 < 0x1b) {
            if (iVar5 != 0x1a) {
                if (0x13 < iVar5) {
                    iVar5 = iVar5 + -0x14;
                    goto code_r0x0001ac8a;
                }
                if ((iVar5 == 0x13) || (iVar5 == 0)) goto code_r0x0001aca9;
                if ((iVar5 == 0xe) || (((iVar5 == 0xf || (iVar5 == 0x10)) || (iVar5 = iVar5 + -0x11, iVar5 == 0))))
                goto code_r0x0001ae9d;
                goto code_r0x0001aca0;
            }
        }
        else {
            if (0x21 < iVar5) {
                if ((((iVar5 != 0x22) && (iVar5 != 0x23)) && ((iVar5 != 0x24 && ((iVar5 != 0x25 && (iVar5 != 0x26))))))
                   && (iVar5 != 0x27)) goto code_r0x0001b044;
                goto code_r0x0001ad11;
            }
            if (iVar5 == 0x21) goto code_r0x0001ad85;
            iVar5 = iVar5 + -0x1b;
code_r0x0001ac8a:
            if ((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) && ((iVar5 != 3 && (iVar5 = iVar5 + -4, iVar5 != 0))))
            {
code_r0x0001aca0:
                if (iVar5 != 1) goto code_r0x0001b044;
            }
        }
code_r0x0001aca9:
        uVar6 = fcn.0001511c(arg1,0x44);
        uVar6 = uVar6 & 0xfffff8c0 | *(arg1 + 0x2b00) << 8;
code_r0x0001acc7:
        fcn.000151ac(arg1,uVar6,0x44);
        *(arg1 + 0x2e3c) = uVar6;
    }
    else if (iVar5 < 0x37) {
        if (iVar5 == 0x36) {
code_r0x0001ad11:
            uVar6 = fcn.0001511c(arg1,0x44);
            uVar6 = uVar6 & 0xffff38c0 | *(arg1 + 0x2e40) << 0x11 | (*(arg1 + 0x2b00) | 0x80) << 8;
            goto code_r0x0001acc7;
        }
        if (iVar5 < 0x30) {
            if (iVar5 != 0x2f) {
                if (iVar5 == 0x29) goto code_r0x0001ae2a;
                if ((iVar5 == 0x2a) || (iVar5 == 0x2b)) goto code_r0x0001b08b;
                if ((iVar5 != 0x2c) && ((iVar5 != 0x2d && (iVar5 != 0x2e)))) goto code_r0x0001b044;
            }
        }
        else if ((iVar5 != 0x30) && (iVar5 != 0x31)) {
            if ((((iVar5 == 0x32) || (iVar5 == 0x33)) || (iVar5 == 0x34)) || (iVar5 == 0x35)) {
code_r0x0001ae9d:
                uVar6 = fcn.0001511c(arg1,0x44);
                uVar6 = uVar6 & 0xffff18c0 | (*(arg1 + 0x2b00) | 0x80) << 8;
                goto code_r0x0001acc7;
            }
code_r0x0001b044:
            fcn.000151ac(arg1,uVar6,0x44);
            goto code_r0x0001b10c;
        }
code_r0x0001ad85:
        fcn.000151ac(arg1,0x8f00,0x44);
        *(arg1 + 0x2e3c) = 0x8f00;
        uVar11 = 0;
        uVar1 = fcn.000150bc(arg1,0x40);
        fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar1) | 0x80,0x40);
        fcn.00015c64(arg1,200,2,0);
        fcn.00015c64(arg1,0xca,8,0);
        fcn.00015c64(arg1,0xcc,0x38,0);
        uVar6 = 0x48;
code_r0x0001adff:
        fcn.00015c64(arg1,0xd0,uVar6,0);
        fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000078);
    }
    else if (iVar5 < 0x3e) {
        if (iVar5 == 0x3d) {
            fcn.000151ac(arg1,0x8f00,0x44);
            uVar11 = 0;
            uVar1 = fcn.000150bc(arg1,0x40);
            fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar1) | 0x80,0x40);
            fcn.00015c64(arg1,200,2,0);
            fcn.00015c64(arg1,0xca,8,0);
            fcn.00015c64(arg1,0xcc,0x2f,0);
            uVar6 = 0x5f;
            goto code_r0x0001adff;
        }
        if (((iVar5 == 0x37) || (iVar5 == 0x38)) || (iVar5 == 0x39)) goto code_r0x0001ad11;
        if (((iVar5 != 0x3a) && (iVar5 != 0x3b)) && (iVar5 != 0x3c)) goto code_r0x0001b044;
        fcn.000151ac(arg1,0x8f00,0x44);
        *(arg1 + 0x2e3c) = 0x8f00;
        fcn.00015c64(arg1,200,2,0);
        fcn.00015c64(arg1,0xca,8,0);
        fcn.00015c64(arg1,0xcc,0x2f,0);
        fcn.00015c64(arg1,0xd0,0x5f,0);
        fcn.000159b0(arg1,0xe8,0x100006,0,in_stack_00000078);
        if (*(arg1 + 0x2b18) == 0x3c) {
            uVar2 = fcn.0001620c(arg1,0xd3e2);
            uVar9 = 0xf271;
            uVar3 = 0x271;
            goto code_r0x0001b0af;
        }
    }
    else {
        if (((iVar5 != 0x3e) && (iVar5 != 0x3f)) && (iVar5 != 0x41)) {
            if (iVar5 != 0x42) {
                if (iVar5 == 0x43) goto code_r0x0001ad85;
                if (iVar5 != 0x44) goto code_r0x0001b044;
                fcn.000151ac(arg1,0x8700,0x44);
                *(arg1 + 0x2e3c) = 0x8700;
                fcn.000159b0(arg1,200,2,0,in_stack_00000078);
                iVar10 = 6;
                goto code_r0x0001ae5e;
            }
code_r0x0001b08b:
            uVar6 = 0xbf00;
            goto code_r0x0001acc7;
        }
        uVar2 = fcn.0001620c(arg1,0xd3e2);
        uVar9 = 0xf3a9;
        uVar3 = 0x3a9;
code_r0x0001b0af:
        fcn.00016134(arg1_00,0xd3e2,uVar9 & uVar2 | uVar3);
        uVar2 = fcn.0001620c(arg1,0xd3e4);
        fcn.00016134(arg1_00,0xd3e4,uVar2 & 0xff00);
        uVar2 = fcn.0001620c(arg1,0xe860);
        fcn.00016134(arg1_00,0xe860,uVar2 | 0x80);
    }
code_r0x0001b10c:
    if (((*(arg1 + 0x2e32) != '\0') || (*(arg1 + 0x2e33) != '\0')) || (*(arg1 + 0x2e35) != '\0')) {
        fcn.00022c4c(arg1);
    }
    fcn.0001c7fc(arg1);
    fcn.000151ac(arg1,*(arg1 + 600),0x20);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
    }
    fcn.000151ac(arg1,*(arg1 + 0x25c),0x24);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50));
    }
    fcn.000151ac(arg1,0,0x28);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50));
    }
    fcn.000151ac(arg1,0,0x2c);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
    }
    fcn.000151ac(arg1,*(arg1 + 0x240),0xe4);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
    }
    fcn.000151ac(arg1,*(arg1 + 0x244),0xe8);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(1);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
    }
    iVar5 = *(arg1 + 0x2b18);
    if (iVar5 < 0x29) {
        if (iVar5 == 0x28) goto code_r0x0001b2bb;
        if (iVar5 < 0x1c) {
            if (iVar5 != 0x1b) {
                if (iVar5 < 0x15) {
                    if (iVar5 != 0x14) {
                        if (((iVar5 == 0xe) || (iVar5 == 0xf)) ||
                           ((iVar5 == 0x10 || (iVar5 = iVar5 + -0x11, iVar5 == 0)))) goto code_r0x0001b2bb;
                        goto code_r0x0001b2e9;
                    }
                }
                else if (((iVar5 != 0x15) && (iVar5 != 0x16)) &&
                        ((iVar5 != 0x17 && (iVar5 = iVar5 + -0x18, iVar5 != 0)))) {
code_r0x0001b2e9:
                    if ((iVar5 != 1) && (iVar5 != 2)) goto code_r0x0001b2bb;
                }
            }
        }
        else {
            if ((0x22 < iVar5) || (iVar5 == 0x22)) goto code_r0x0001b2bb;
            if ((iVar5 != 0x1c) &&
               ((((iVar5 != 0x1d && (iVar5 != 0x1e)) && (iVar5 != 0x1f)) && (iVar5 = iVar5 + -0x20, iVar5 != 0))))
            goto code_r0x0001b3c2;
        }
    }
    else {
        if (iVar5 < 0x37) {
            if (iVar5 != 0x36) {
                if (iVar5 < 0x30) {
                    if (iVar5 != 0x2f) {
                        iVar5 = iVar5 + -0x29;
                        goto code_r0x0001b352;
                    }
                }
                else if ((iVar5 != 0x30) && (iVar5 != 0x31)) goto code_r0x0001b2bb;
code_r0x0001b3cb:
                arg2_00 = 0x5f2;
                goto code_r0x0001b3d7;
            }
        }
        else if (iVar5 < 0x3e) {
            if (iVar5 != 0x3d) {
                iVar5 = iVar5 + -0x37;
code_r0x0001b352:
                if (((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) {
                    if ((iVar5 == 3) || (iVar5 = iVar5 + -4, iVar5 == 0)) goto code_r0x0001b3cb;
                    goto code_r0x0001b3c2;
                }
            }
        }
        else {
            if ((iVar5 == 0x3e) || ((iVar5 == 0x3f || (iVar5 == 0x41)))) {
                arg2_00 = 0x400b;
                goto code_r0x0001b3d7;
            }
            iVar5 = iVar5 + -0x42;
            if (iVar5 != 0) {
code_r0x0001b3c2:
                if (iVar5 == 1) goto code_r0x0001b3cb;
            }
        }
code_r0x0001b2bb:
        arg2_00 = 0x5f3;
    }
code_r0x0001b3d7:
    fcn.0001517c(arg1,arg2_00,0xda);
    iVar5 = *(arg1 + 0x2b18);
    Var7 = arg2_00 >> 8;
    if (((iVar5 == 7) || (iVar5 == 10)) || (iVar5 == 0xb)) {
        iVar10 = CONCAT71(Var7,5);
    }
    else if (iVar5 == 0x19) {
        iVar10 = CONCAT71(Var7,1);
    }
    else {
        iVar10 = CONCAT71(Var7,7);
    }
    fcn.000222a8(arg1,iVar10);
    uVar6 = fcn.0001511c(arg1,0x40);
    iVar5 = *(arg1 + 0x2b18);
    arg2 = uVar6 & 0xfff7ffff | 0x3000000;
    if (iVar5 < 0x32) {
        if (iVar5 != 0x31) {
            if (iVar5 < 0x2d) {
                if ((iVar5 == 0x2c) || (iVar5 == 0x21)) goto code_r0x0001b462;
                iVar5 = iVar5 + -0x28;
            }
            else {
                iVar5 = iVar5 + -0x2d;
            }
            if (iVar5 != 0) goto code_r0x0001b453;
        }
code_r0x0001b462:
        arg2 = uVar6 & 0xfff7ffff | 0x3000080;
    }
    else {
        if (iVar5 < 0x40) {
            if (iVar5 != 0x3f) {
                if (((iVar5 == 0x3a) || (iVar5 == 0x3b)) || ((iVar5 == 0x3c || (iVar5 == 0x3d)))) goto code_r0x0001b462;
                if (iVar5 != 0x3e) goto code_r0x0001b48f;
            }
        }
        else {
            iVar5 = iVar5 + -0x41;
            if (iVar5 != 0) {
code_r0x0001b453:
                if (((iVar5 != 1) && (iVar5 != 2)) && (iVar5 != 3)) goto code_r0x0001b48f;
                goto code_r0x0001b462;
            }
        }
        arg2 = 0x3f000700;
    }
code_r0x0001b48f:
    uVar11 = 0;
    fcn.000151ac(arg1,arg2,0x40);
    if ((*(arg1 + 0x2e59) != '\0') && (*(arg1 + 0x2b18) == 0x36)) {
        fcn.000151ac(arg1,0x70,0);
        fcn.000151ac(arg1,0x74,0x800010e8);
        fcn.000151ac(arg1,0xb0,1);
        uVar11 = 0x80001030;
        fcn.000151ac(arg1,0xb4,0x80001030);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(100);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
        }
        do {
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(10000);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10000);
            }
            uVar2 = fcn.0002a6dc(arg1,0x10);
        } while (((uVar2 >> 0xe & 1) == 0) && (uVar8 = uVar8 + 1, uVar8 < 10));
    }
    if (*(arg1 + 0x2e35) == '\0') {
        fcn.00016094(arg1,0x56,CONCAT71(uVar11 >> 8,0x10));
    }
    if (*(arg1 + 0x2b32) != '\0') {
        fcn.00023b94(arg1_00);
    }
    return 0;
}


/* fcn.0002b524 @ 0x2b524 */

uint fcn.0002b524(uint32_t arg1)

{
    char cVar1;
    int iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t in_RDX;
    uint32_t uVar3;
    int32_t in_stack_00000088;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*(arg1_00 + 0x2e41) != '\0') {
        do {
            cVar1 = fcn.0002b2f4(arg1_00);
            if (cVar1 != '\0') break;
            fcn.00023410(arg1_00);
            fcn.00022b34(arg1);
            fcn.0001a518(arg1_00);
            fcn.00022c4c(arg1_00);
            in_RDX = CONCAT71(in_RDX >> 8,0xc);
            fcn.0001514c(arg1_00,in_RDX,0x37);
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x32);
    }
    iVar2 = fcn.00015b30(arg1_00,0x1c,0);
    if (iVar2 != 100) {
        fcn.000159b0(arg1_00,0xec,uVar3,0,in_stack_00000088);
    }
    return 1;
}


/* fcn.0001bc64 @ 0x1bc64 */

void fcn.0001bc64(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint32_t arg1_00;
    char cVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    
    uVar9 = 0;
    cVar6 = arg2;
    if (*(arg1 + 0x2b18) - 4U < 2) {
        iVar7 = CONCAT71(arg2 >> 8,0xe);
        fcn.000153ec(arg1,iVar7,0);
        arg2 = CONCAT71(iVar7 >> 8,0x10);
        fcn.000153ec(arg1,arg2,0x60);
        *(arg1 + 0x2b2c) = 0;
        *(arg1 + 0x2b2f) = 1;
    }
    arg1_00 = arg1;
    if ((*(arg1 + 0x2ae4) == 1) && (*(arg1 + 0x2af0) == 1)) {
        uVar8 = 0;
        uVar1 = fcn.00015768(arg1_00,0);
        iVar7 = CONCAT71(uVar8 >> 8,4);
        uVar2 = fcn.00015768(arg1_00,iVar7);
        arg2 = CONCAT71(iVar7 >> 8,9);
        uVar3 = fcn.00015768(arg1_00,arg2);
        if (((uVar1 >> 0xc & 1) != 0) && (((uVar2 & 0x1e1) == 0x1e1 && ((uVar3 & 0x300) == 0x300)))) {
            if ((uVar1 >> 0xe & 1) != 0) {
                fcn.000153ec(arg1,0,uVar1 & 0xbfff);
                return;
            }
            return;
        }
    }
    if (*(arg1 + 0x2b18) == 2) {
        fcn.0001514c(arg1,CONCAT71(arg2 >> 8,1),0x82);
    }
    if (((cVar6 == '\0') && (*(arg1 + 0x2b37) == '\0')) && (fcn.0001b5c4(arg1), *(arg1 + 0x2b36) == '\0')) {
        fcn.0001bb40(arg1);
    }
    if (((*(arg1 + 0x2aae) == '\x01') && (cVar6 == '\x01')) && (iVar4 = fcn.0002bc7c(arg1_00), iVar4 == 1)) {
        if ((*(arg1 + 0x2b36) == '\0') && (*(arg1 + 0x2b38) == '\0')) {
            fcn.0001b5c4(arg1);
            fcn.0001bb40(arg1);
        }
        do {
            uVar5 = fcn.000150bc(arg1,0x6c);
            if ((uVar5 & 2) != 0) {
                return;
            }
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(50000);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),50000);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x1e0);
    }
    return;
}


/* fcn.00015a50 @ 0x15a50 */

uint64_t fcn.00015a50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar5 = 0;
    uVar4 = arg2 & 3;
    if (uVar4 == 3) {
        uVar1 = 0x8000;
    }
    else if (uVar4 == 2) {
        uVar1 = 0x4000;
    }
    else {
        uVar1 = 0x1000;
        if (uVar4 == 1) {
            uVar1 = 0x2000;
        }
    }
    fcn.000151ac(arg1,(arg3 & 0xff) << 0x10 | arg2 & 0xfffffffc | uVar1,0x74);
    do {
        uVar5 = uVar5 + 1;
        iVar2 = fcn.0001511c(arg1,0x74);
        if (iVar2 < 0) break;
    } while (uVar5 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    uVar3 = fcn.0001511c(arg1,0x70);
    if (uVar4 == 3) {
        uVar3 = uVar3 >> 0x18 & 0xff;
    }
    else if (uVar4 == 2) {
        uVar3 = uVar3 >> 0x10;
    }
    else if (uVar4 == 1) {
        uVar3 = uVar3 >> 8;
    }
    return uVar3;
}


/* fcn.0001d908 @ 0x1d908 */

void fcn.0001d908(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    unkbyte3 Var3;
    uint32_t uVar4;
    uint16_t uVar5;
    bool bVar6;
    
    uVar5 = 0;
    uVar1 = *arg2;
    do {
        if (uVar1 == 0) {
            return;
        }
        uVar4 = uVar1 & 0xff000000;
        Var3 = uVar1 >> 8;
        if ((uVar1 & 0xff000000) == 0) {
            uVar5 = fcn.00015768(arg1,CONCAT31(Var3,*(arg2 + 2)));
        }
        else if (uVar4 == 0x10000000) {
            uVar5 = uVar5 | *arg2;
        }
        else if (uVar4 == 0x20000000) {
            uVar5 = uVar5 & *arg2;
        }
        else if (uVar4 == 0x80000000) {
            uVar2 = *arg2;
code_r0x0001d97b:
            fcn.000153ec(arg1,CONCAT31(Var3,*(arg2 + 2)),uVar2);
        }
        else {
            if (uVar4 == 0xa0000000) {
                bVar6 = uVar5 == *arg2;
code_r0x0001d992:
                if (!bVar6) goto code_r0x0001d9c1;
            }
            else {
                if (uVar4 != 0xb0000000) {
                    uVar2 = uVar5;
                    if (uVar4 == 0xc0000000) goto code_r0x0001d97b;
                    bVar6 = uVar4 == 0xd0000000;
                    goto code_r0x0001d992;
                }
                if (uVar5 == *arg2) goto code_r0x0001d9c1;
            }
            arg2 = arg2 + (uVar1 >> 0x10 & 0xfff) * 4;
        }
code_r0x0001d9c1:
        arg2 = arg2 + 4;
        uVar1 = *arg2;
    } while( true );
}


/* fcn.0001d838 @ 0x1d838 */

uchar fcn.0001d838(int64_t arg1)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = *(arg1 + 0x2b18);
    uVar3 = 0;
    if (iVar2 < 0x1c) {
        if ((((iVar2 == 0x1b) || (iVar2 == 0x12)) || ((iVar2 == 0x13 || ((iVar2 == 0x14 || (iVar2 == 0x15)))))) ||
           (iVar2 == 0x16)) goto code_r0x0001d881;
        iVar2 = iVar2 + -0x17;
    }
    else {
        if ((((iVar2 == 0x1c) || (iVar2 == 0x22)) || (iVar2 == 0x23)) || (iVar2 == 0x24)) goto code_r0x0001d881;
        iVar2 = iVar2 + -0x36;
    }
    if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
        return 0;
    }
code_r0x0001d881:
    fcn.000151ac(arg1,0x100,0xdc);
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(100);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
        }
        uVar3 = uVar3 + 1;
        iVar2 = fcn.0001511c(arg1,0xdc);
    } while ((-1 < iVar2) && (uVar3 < 5));
    uVar1 = fcn.0001511c(arg1,0xdc);
    return uVar1;
}


/* fcn.000163fc @ 0x163fc */

void fcn.000163fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uchar uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t arg2_00;
    uint64_t uVar12;
    ulong uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t arg3_00;
    uint64_t arg2_01;
    int32_t in_stack_00000068;
    
    uVar1 = arg2;
    uVar9 = fcn.00015768(arg1,arg2);
    uVar9 = uVar9 & ~arg3 | arg4;
    uVar15 = uVar9;
    arg3_00 = uVar15;
    uVar14 = 0;
    uVar11 = *(arg1 + 0x2b18);
    uVar12 = uVar11;
    bVar5 = false;
    bVar3 = false;
    bVar2 = false;
    bVar4 = false;
    if (uVar11 == 0x36) {
        bVar5 = true;
    }
    else if (uVar11 == 0x37) {
        bVar4 = true;
    }
    else {
        if ((uVar11 == 0x38) || (uVar11 == 0x39)) {
            bVar2 = true;
        }
        uVar12 = uVar11 - 0x36;
        if (uVar11 - 0x36 != 0) {
            uVar11 = uVar11 - 0x37;
            uVar12 = uVar11;
            if ((uVar11 != 0) && (uVar11 != 1)) {
                arg2_01 = 0xb8;
                goto code_r0x00015496;
            }
        }
    }
    bVar3 = bVar5;
    arg2_01 = 0x10;
    if (bVar4) {
        uVar12 = arg1;
        uVar7 = fcn.0002a6dc(arg1,0x10);
        if ((uVar7 >> 9 & 1) != 0) {
            arg3_00 = uVar7 & 0xfdff;
            uVar12 = arg1;
            fcn.0002ab04(arg1,0x10,arg3_00);
        }
    }
code_r0x00015496:
    if ((uVar1 != 0x1f) || (*(arg1 + 0x2b34) = uVar9, *(arg1 + 0x2b33) == '\0')) {
        if (bVar2) {
            uVar13 = 0;
            uVar6 = fcn.000150bc(arg1,0xd2);
            arg3_00 = 0;
            fcn.0001514c(arg1,CONCAT71(uVar13 >> 8,uVar6) & 0xfffffffffffffffd,0xd2);
            if (*(arg1 + 0x2ace) == '0') {
                uVar12 = 100;
                (**(arg1 + 0x2c68))();
            }
            else {
                uVar12 = *(arg1 + 0x2c50);
                (**(arg1 + 0x2c88))(uVar12,100);
            }
        }
        if (*(arg1 + 0x2b33) == '\0') {
            uVar11 = 0;
            arg2_00 = (uVar1 | 0xffff8000) << 0x10 | uVar15;
            if (bVar3) {
                fcn.0002acb0(arg1,0x60,arg2_00);
            }
            else {
                fcn.000151ac(arg1,arg2_00,0x60);
            }
            do {
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(0x14);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
                }
                uVar12 = 0;
                if (bVar3) {
                    iVar10 = fcn.0002a84c(arg1,0x60);
                }
                else {
                    iVar10 = fcn.0001511c(arg1,0x60);
                }
                uVar11 = uVar11 + 1;
            } while ((iVar10 < 0) && (uVar11 < 0x14));
        }
        else {
            uVar7 = fcn.00016264(uVar12,*(arg1 + 0x2b34),CONCAT71(arg3_00 >> 8,uVar1));
            uVar12 = uVar7;
            if ((uVar7 & 1) == 0) {
                uVar7 = uVar9;
            }
            else {
                uVar8 = fcn.00016318(arg1,uVar12);
                fcn.000162a0(arg1,uVar7,uVar8 & 0xff | uVar9 << 8);
                uVar8 = fcn.00016318(arg1,uVar7 + 1);
                uVar12 = uVar7 + 1;
                uVar7 = uVar8 & 0xff00 | uVar9 >> 8;
            }
            fcn.000162a0(arg1,uVar12,uVar7);
        }
        if (bVar4) {
            uVar7 = fcn.0002a6dc(arg1,arg2_01);
            fcn.0002ab04(arg1,arg2_01,uVar7 | 0x200);
            fcn.0002ab04(arg1,arg2_01,uVar7 & 0xfdff);
            uVar12 = arg2_01;
        }
        if (bVar3) {
            uVar7 = fcn.00015768(arg1,CONCAT71(uVar12 >> 8,uVar1));
            if ((((uVar7 != uVar9) && (uVar9 != 0x1200)) && (uVar9 != 0x9000)) && (1 < uVar1 - 0x1e)) {
                uVar15 = (uVar1 | 0xffff8000) << 0x10 | uVar15;
                fcn.000159b0(arg1,0xe8,uVar15,0,in_stack_00000068);
                fcn.0002acb0(arg1,0x60,uVar15);
                do {
                    if (*(arg1 + 0x2ace) == '0') {
                        (**(arg1 + 0x2c68))(100);
                    }
                    else {
                        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                    }
                    uVar14 = uVar14 + 1;
                    iVar10 = fcn.0002a84c(arg1,0x60);
                } while ((iVar10 < 0) && (uVar14 < 5));
            }
        }
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x14);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
        }
    }
    return;
}


/* fcn.00029cf0 @ 0x29cf0 */

uchar fcn.00029cf0(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uchar uVar6;
    bool bVar7;
    
    uVar2 = *(arg1 + 0x2b18);
    uVar3 = uVar2;
    uVar6 = 1;
    if (uVar2 < 0x3b) {
        if (((uVar2 == 0x3a) || (uVar3 = uVar2 - 0x2c, uVar2 - 0x2c == 0)) ||
           ((uVar3 = uVar2 - 0x2d, uVar2 - 0x2d == 0 ||
            ((uVar3 = uVar2 - 0x2e, uVar2 - 0x2e == 0 || (uVar3 = uVar2 - 0x2f, uVar2 - 0x2f == 0))))))
        goto code_r0x00029d69;
        uVar2 = uVar2 - 0x30;
        uVar3 = uVar2;
        if (uVar2 == 0) goto code_r0x00029d69;
        bVar7 = uVar2 == 1;
    }
    else {
        uVar3 = uVar2 - 0x3b;
        if (((uVar2 - 0x3b == 0) || (uVar3 = uVar2 - 0x3c, uVar2 - 0x3c == 0)) ||
           (uVar3 = uVar2 - 0x3d, uVar2 - 0x3d == 0)) goto code_r0x00029d69;
        if (uVar2 == 0x3e) {
code_r0x00029de4:
            fcn.00016450(arg1,0xb820,0,0x10);
            uVar5 = 0;
            while( true ) {
                uVar1 = fcn.00016318(arg1,0xb800);
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(100);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                }
                uVar5 = uVar5 + 1;
                if ((uVar1 & 0x40) != 0) break;
                if (999 < uVar5) {
                    if (uVar5 != 1000) {
                        return 1;
                    }
                    return 0;
                }
            }
            return 1;
        }
        uVar2 = uVar2 - 0x3f;
        uVar3 = uVar2;
        if (uVar2 == 0) goto code_r0x00029de4;
        bVar7 = uVar2 == 4;
    }
    if (!bVar7) {
        return 1;
    }
code_r0x00029d69:
    iVar4 = CONCAT71(uVar3 >> 8,0x1f);
    fcn.000153ec(arg1,iVar4,0xb82);
    iVar4 = CONCAT71(iVar4 >> 8,0x10);
    fcn.000163fc(arg1,iVar4,0,0x10);
    iVar4 = CONCAT71(iVar4 >> 8,0x1f);
    fcn.000153ec(arg1,iVar4,0);
    iVar4 = CONCAT71(iVar4 >> 8,0x1f);
    fcn.000153ec(arg1,iVar4,0xb80);
    uVar5 = 0;
    do {
        iVar4 = CONCAT71(iVar4 >> 8,0x10);
        uVar1 = fcn.00015768(arg1,iVar4);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(100);
        }
        else {
            iVar4 = 0;
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
        }
        uVar5 = uVar5 + 1;
        if ((uVar1 & 0x40) != 0) goto code_r0x00029e80;
    } while (uVar5 < 1000);
    uVar6 = 1;
    if (uVar5 == 1000) {
        uVar6 = 0;
    }
code_r0x00029e80:
    fcn.000153ec(arg1,CONCAT71(iVar4 >> 8,0x1f),0);
    return uVar6;
}


/* fcn.00029eb0 @ 0x29eb0 */

uchar fcn.00029eb0(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uchar uVar6;
    bool bVar7;
    
    uVar2 = *(arg1 + 0x2b18);
    uVar3 = uVar2;
    uVar6 = 1;
    if (uVar2 < 0x3b) {
        if (((uVar2 == 0x3a) || (uVar3 = uVar2 - 0x2c, uVar2 - 0x2c == 0)) ||
           ((uVar3 = uVar2 - 0x2d, uVar2 - 0x2d == 0 ||
            ((uVar3 = uVar2 - 0x2e, uVar2 - 0x2e == 0 || (uVar3 = uVar2 - 0x2f, uVar2 - 0x2f == 0))))))
        goto code_r0x00029f21;
        uVar2 = uVar2 - 0x30;
        uVar3 = uVar2;
        if (uVar2 == 0) goto code_r0x00029f21;
        bVar7 = uVar2 == 1;
    }
    else {
        uVar3 = uVar2 - 0x3b;
        if (((uVar2 - 0x3b == 0) || (uVar3 = uVar2 - 0x3c, uVar2 - 0x3c == 0)) ||
           (uVar3 = uVar2 - 0x3d, uVar2 - 0x3d == 0)) goto code_r0x00029f21;
        if (uVar2 == 0x3e) {
code_r0x00029f89:
            fcn.00016450(arg1,0xb820,0x10,0);
            uVar5 = 0;
            while( true ) {
                uVar1 = fcn.00016318(arg1,0xb800);
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(100);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                }
                uVar5 = uVar5 + 1;
                if ((uVar1 & 0x40) != 0) break;
                if (999 < uVar5) {
                    if (uVar5 != 1000) {
                        return 1;
                    }
                    return 0;
                }
            }
            return 1;
        }
        uVar2 = uVar2 - 0x3f;
        uVar3 = uVar2;
        if (uVar2 == 0) goto code_r0x00029f89;
        bVar7 = uVar2 == 4;
    }
    if (!bVar7) {
        return 1;
    }
code_r0x00029f21:
    iVar4 = CONCAT71(uVar3 >> 8,0x1f);
    fcn.000153ec(arg1,iVar4,0xb82);
    iVar4 = CONCAT71(iVar4 >> 8,0x10);
    fcn.000163fc(arg1,iVar4,0x10,0);
    iVar4 = CONCAT71(iVar4 >> 8,0x1f);
    fcn.000153ec(arg1,iVar4,0xb80);
    uVar5 = 0;
    do {
        iVar4 = CONCAT71(iVar4 >> 8,0x10);
        uVar1 = fcn.00015768(arg1,iVar4);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(100);
        }
        else {
            iVar4 = 0;
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
        }
        uVar5 = uVar5 + 1;
        if ((uVar1 & 0x40) != 0) goto code_r0x0002a023;
    } while (uVar5 < 1000);
    uVar6 = 1;
    if (uVar5 == 1000) {
        uVar6 = 0;
    }
code_r0x0002a023:
    fcn.000153ec(arg1,CONCAT71(iVar4 >> 8,0x1f),0);
    return uVar6;
}


/* fcn.00024ce4 @ 0x24ce4 */

void fcn.00024ce4(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    
    uVar1 = fcn.00016318(arg1,0xb820);
    fcn.000162a0(arg1,0xb820,uVar1 | 0x10);
    uVar3 = 0;
    uVar2 = fcn.00016318(arg1,0xb800);
    uVar1 = uVar3;
    do {
        if ((uVar2 & 0x40) == 0x40) break;
        uVar1 = uVar1 + 1;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
        }
        uVar2 = fcn.00016318(arg1,0xb800);
    } while (uVar1 < 100);
    uVar1 = fcn.00016318(arg1,0xb820);
    fcn.000162a0(arg1,0xb820,uVar1 & 0xffef);
    uVar2 = 0;
    uVar1 = fcn.00016318(arg1,0xb800);
    do {
        if ((uVar1 & 0x40) == 0x40) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
        }
        uVar1 = fcn.00016318(arg1,0xb800);
    } while (uVar2 < 100);
    uVar1 = fcn.00016318(arg1,0xb820);
    fcn.000162a0(arg1,0xb820,uVar1 | 0x10);
    uVar1 = fcn.00016318(arg1,0xb800);
    do {
        if ((uVar1 & 0x40) == 0x40) break;
        uVar3 = uVar3 + 1;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
        }
        uVar1 = fcn.00016318(arg1,0xb800);
    } while (uVar3 < 100);
    fcn.000162a0(arg1,0xa436,0x8024);
    fcn.000162a0(arg1,0xa438,0x8600);
    fcn.000162a0(arg1,0xa436,0xb82e);
    fcn.000162a0(arg1,0xa438,1);
    uVar1 = fcn.00016318(arg1,0xb820);
    fcn.000162a0(arg1,0xb820,uVar1 | 0x80);
    fcn.000162a0(arg1,0xa436,0xa016);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa436,0xa012);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa436,0xa014);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8013);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8039);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80b4);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80c4);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80d1);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80d7);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80da);
    fcn.000162a0(arg1,0xa438,0xa088);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xa50);
    fcn.000162a0(arg1,0xa438,0x8008);
    fcn.000162a0(arg1,0xa438,0xd014);
    fcn.000162a0(arg1,0xa438,0xd1a3);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x401a);
    fcn.000162a0(arg1,0xa438,0xd707);
    fcn.000162a0(arg1,0xa438,0x40c2);
    fcn.000162a0(arg1,0xa438,0x60a6);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5f8b);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xa86);
    fcn.000162a0(arg1,0xa438,0xa040);
    fcn.000162a0(arg1,0xa438,0xd00c);
    fcn.000162a0(arg1,0xa438,0xd1a3);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x401a);
    fcn.000162a0(arg1,0xa438,0xd707);
    fcn.000162a0(arg1,0xa438,0x60c5);
    fcn.000162a0(arg1,0xa438,0x60a6);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5f8b);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xa86);
    fcn.000162a0(arg1,0xa438,0x8080);
    fcn.000162a0(arg1,0xa438,0xd019);
    fcn.000162a0(arg1,0xa438,0xd1a2);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x401a);
    fcn.000162a0(arg1,0xa438,0xd707);
    fcn.000162a0(arg1,0xa438,0x40c4);
    fcn.000162a0(arg1,0xa438,0x60a6);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5f8b);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xa86);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xa84);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x607b);
    fcn.000162a0(arg1,0xa438,0x40da);
    fcn.000162a0(arg1,0xa438,0xf00e);
    fcn.000162a0(arg1,0xa438,0x42da);
    fcn.000162a0(arg1,0xa438,0xf01e);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x615b);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1430);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x147e);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1496);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x5f2e);
    fcn.000162a0(arg1,0xa438,0xf01c);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1430);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x147e);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1496);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x5f2e);
    fcn.000162a0(arg1,0xa438,0xf024);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1430);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x147e);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1496);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x5f2e);
    fcn.000162a0(arg1,0xa438,0xf02c);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1430);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x147e);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1496);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x5f2e);
    fcn.000162a0(arg1,0xa438,0xf034);
    fcn.000162a0(arg1,0xa438,0xd719);
    fcn.000162a0(arg1,0xa438,0x4118);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac11);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,42000);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x4779);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac0f);
    fcn.000162a0(arg1,0xa438,0xae01);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x141e);
    fcn.000162a0(arg1,0xa438,0xf034);
    fcn.000162a0(arg1,0xa438,0xd719);
    fcn.000162a0(arg1,0xa438,0x4118);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac22);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xa420);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x4559);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac0f);
    fcn.000162a0(arg1,0xa438,0xae01);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x141e);
    fcn.000162a0(arg1,0xa438,0xf023);
    fcn.000162a0(arg1,0xa438,0xd719);
    fcn.000162a0(arg1,0xa438,0x4118);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac44);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xa440);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x4339);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac0f);
    fcn.000162a0(arg1,0xa438,0xae01);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x141e);
    fcn.000162a0(arg1,0xa438,0xf012);
    fcn.000162a0(arg1,0xa438,0xd719);
    fcn.000162a0(arg1,0xa438,0x4118);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac88);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xa480);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x4119);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0xac0f);
    fcn.000162a0(arg1,0xa438,0xae01);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x141e);
    fcn.000162a0(arg1,0xa438,0xf001);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x1430);
    fcn.000162a0(arg1,0xa438,0xd718);
    fcn.000162a0(arg1,0xa438,0x5fac);
    fcn.000162a0(arg1,0xa438,0xc48f);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x13f5);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x11fe);
    fcn.000162a0(arg1,0xa438,0xd707);
    fcn.000162a0(arg1,0xa438,0x6108);
    fcn.000162a0(arg1,0xa438,0x294d);
    fcn.000162a0(arg1,0xa438,0x1265);
    fcn.000162a0(arg1,0xa438,0xd704);
    fcn.000162a0(arg1,0xa438,0x38c1);
    fcn.000162a0(arg1,0xa438,0x1262);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1265);
    fcn.000162a0(arg1,0xa438,0xd705);
    fcn.000162a0(arg1,0xa438,0x3ef1);
    fcn.000162a0(arg1,0xa438,0x1260);
    fcn.000162a0(arg1,0xa438,0xd707);
    fcn.000162a0(arg1,0xa438,0x7ee9);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1265);
    fcn.000162a0(arg1,0xa438,0xd0ef);
    fcn.000162a0(arg1,0xa438,0xd1ea);
    fcn.000162a0(arg1,0xa438,0xd0f0);
    fcn.000162a0(arg1,0xa438,0xd189);
    fcn.000162a0(arg1,0xa438,0xd503);
    fcn.000162a0(arg1,0xa438,0xab01);
    fcn.000162a0(arg1,0xa438,0xd70c);
    fcn.000162a0(arg1,0xa438,0x6043);
    fcn.000162a0(arg1,0xa438,0xab02);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xc481);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xb7b);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x13cb);
    fcn.000162a0(arg1,0xa438,0xd503);
    fcn.000162a0(arg1,0xa438,0x8b02);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xbb6);
    fcn.000162a0(arg1,0xa438,0x8b03);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x14d7);
    fcn.000162a0(arg1,0xa438,0xd503);
    fcn.000162a0(arg1,0xa438,0x8970);
    fcn.000162a0(arg1,0xa438,0xc07);
    fcn.000162a0(arg1,0xa438,0x901);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xcf09);
    fcn.000162a0(arg1,0xa438,0xd705);
    fcn.000162a0(arg1,0xa438,0x4000);
    fcn.000162a0(arg1,0xa438,0xceff);
    fcn.000162a0(arg1,0xa438,0xaf0a);
    fcn.000162a0(arg1,0xa438,0xd504);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1213);
    fcn.000162a0(arg1,0xa436,0xa026);
    fcn.000162a0(arg1,0xa438,0x1206);
    fcn.000162a0(arg1,0xa436,0xa024);
    fcn.000162a0(arg1,0xa438,0x14d6);
    fcn.000162a0(arg1,0xa436,0xa022);
    fcn.000162a0(arg1,0xa438,0xbb4);
    fcn.000162a0(arg1,0xa436,0xa020);
    fcn.000162a0(arg1,0xa438,0xb75);
    fcn.000162a0(arg1,0xa436,0xa006);
    fcn.000162a0(arg1,0xa438,0x125c);
    fcn.000162a0(arg1,0xa436,0xa004);
    fcn.000162a0(arg1,0xa438,0x1185);
    fcn.000162a0(arg1,0xa436,0xa002);
    fcn.000162a0(arg1,0xa438,0xa60);
    fcn.000162a0(arg1,0xa436,0xa000);
    fcn.000162a0(arg1,0xa438,0xa4f);
    fcn.000162a0(arg1,0xa436,0xa008);
    fcn.000162a0(arg1,0xa438,0xff00);
    fcn.000162a0(arg1,0xa436,0xa016);
    fcn.000162a0(arg1,0xa438,0x10);
    fcn.000162a0(arg1,0xa436,0xa012);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa436,0xa014);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8066);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x807c);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8089);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x808e);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80a0);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80b2);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80c2);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x62db);
    fcn.000162a0(arg1,0xa438,0x655c);
    fcn.000162a0(arg1,0xa438,0xd73e);
    fcn.000162a0(arg1,0xa438,0x60e9);
    fcn.000162a0(arg1,0xa438,0x614a);
    fcn.000162a0(arg1,0xa438,0x61ab);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x501);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x503);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x505);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x509);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0x653c);
    fcn.000162a0(arg1,0xa438,0xd73e);
    fcn.000162a0(arg1,0xa438,0x60e9);
    fcn.000162a0(arg1,0xa438,0x614a);
    fcn.000162a0(arg1,0xa438,0x61ab);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x503);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x502);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x506);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x50a);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xd73e);
    fcn.000162a0(arg1,0xa438,0x60e9);
    fcn.000162a0(arg1,0xa438,0x614a);
    fcn.000162a0(arg1,0xa438,0x61ab);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x505);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x506);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x504);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x50c);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xd73e);
    fcn.000162a0(arg1,0xa438,0x60e9);
    fcn.000162a0(arg1,0xa438,0x614a);
    fcn.000162a0(arg1,0xa438,0x61ab);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x509);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x50a);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x50c);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x508);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x304);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xd73e);
    fcn.000162a0(arg1,0xa438,0x60e9);
    fcn.000162a0(arg1,0xa438,0x614a);
    fcn.000162a0(arg1,0xa438,0x61ab);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x501);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x321);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x502);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x321);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x504);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x321);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x508);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x321);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x346);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0x8208);
    fcn.000162a0(arg1,0xa438,0x609d);
    fcn.000162a0(arg1,0xa438,0xa50f);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1a);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x503);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1a);
    fcn.000162a0(arg1,0xa438,0x607d);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xab);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0xab);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x60fd);
    fcn.000162a0(arg1,0xa438,0xa50f);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xaa0f);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x17b);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x503);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0xa05);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x17b);
    fcn.000162a0(arg1,0xa438,0xd501);
    fcn.000162a0(arg1,0xa438,0xce01);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x60fd);
    fcn.000162a0(arg1,0xa438,0xa50f);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xaa0f);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1e0);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x503);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0xa05);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x1e0);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x60fd);
    fcn.000162a0(arg1,0xa438,0xa50f);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xaa0f);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x231);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0x503);
    fcn.000162a0(arg1,0xa438,0xce00);
    fcn.000162a0(arg1,0xa438,0xd500);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0xa05);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x231);
    fcn.000162a0(arg1,0xa436,0xa08e);
    fcn.000162a0(arg1,0xa438,0xffff);
    fcn.000162a0(arg1,0xa436,0xa08c);
    fcn.000162a0(arg1,0xa438,0x221);
    fcn.000162a0(arg1,0xa436,0xa08a);
    fcn.000162a0(arg1,0xa438,0x1ce);
    fcn.000162a0(arg1,0xa436,0xa088);
    fcn.000162a0(arg1,0xa438,0x169);
    fcn.000162a0(arg1,0xa436,0xa086);
    fcn.000162a0(arg1,0xa438,0xa6);
    fcn.000162a0(arg1,0xa436,0xa084);
    fcn.000162a0(arg1,0xa438,0xd);
    fcn.000162a0(arg1,0xa436,0xa082);
    fcn.000162a0(arg1,0xa438,0x308);
    fcn.000162a0(arg1,0xa436,0xa080);
    fcn.000162a0(arg1,0xa438,0x29f);
    fcn.000162a0(arg1,0xa436,0xa090);
    fcn.000162a0(arg1,0xa438,0x7f);
    fcn.000162a0(arg1,0xa436,0xa016);
    fcn.000162a0(arg1,0xa438,0x20);
    fcn.000162a0(arg1,0xa436,0xa012);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa436,0xa014);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8017);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8030);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x803d);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x806b);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x8071);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x808e);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x80f8);
    fcn.000162a0(arg1,0xa438,0x9430);
    fcn.000162a0(arg1,0xa438,0x9480);
    fcn.000162a0(arg1,0xa438,0xb408);
    fcn.000162a0(arg1,0xa438,0xd120);
    fcn.000162a0(arg1,0xa438,0xd057);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x64b);
    fcn.000162a0(arg1,0xa438,0x800a);
    fcn.000162a0(arg1,0xa438,0x8190);
    fcn.000162a0(arg1,0xa438,0x8204);
    fcn.000162a0(arg1,0xa438,0x8280);
    fcn.000162a0(arg1,0xa438,0x8404);
    fcn.000162a0(arg1,0xa438,0x8402);
    fcn.000162a0(arg1,0xa438,0x8708);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x210c);
    fcn.000162a0(arg1,0xa438,0x8027);
    fcn.000162a0(arg1,0xa438,0xd199);
    fcn.000162a0(arg1,0xa438,0xd04c);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7c0);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5fb4);
    fcn.000162a0(arg1,0xa438,0xa00a);
    fcn.000162a0(arg1,0xa438,0x8190);
    fcn.000162a0(arg1,0xa438,0x8204);
    fcn.000162a0(arg1,0xa438,0xa280);
    fcn.000162a0(arg1,0xa438,0xa404);
    fcn.000162a0(arg1,0xa438,0x8402);
    fcn.000162a0(arg1,0xa438,0x8708);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x3c9);
    fcn.000162a0(arg1,0xa438,0xcb94);
    fcn.000162a0(arg1,0xa438,0x8190);
    fcn.000162a0(arg1,0xa438,0x82a0);
    fcn.000162a0(arg1,0xa438,0x800a);
    fcn.000162a0(arg1,0xa438,0x8406);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0xa740);
    fcn.000162a0(arg1,0xa438,0x8dff);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7e4);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x773);
    fcn.000162a0(arg1,0xa438,0xcb91);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x4063);
    fcn.000162a0(arg1,0xa438,0xd139);
    fcn.000162a0(arg1,0xa438,0xf002);
    fcn.000162a0(arg1,0xa438,0xd140);
    fcn.000162a0(arg1,0xa438,0xd040);
    fcn.000162a0(arg1,0xa438,0xb404);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0xd00);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7dc);
    fcn.000162a0(arg1,0xa438,0xa610);
    fcn.000162a0(arg1,0xa438,0xa110);
    fcn.000162a0(arg1,0xa438,0xa2a0);
    fcn.000162a0(arg1,0xa438,0xa404);
    fcn.000162a0(arg1,0xa438,0xd704);
    fcn.000162a0(arg1,0xa438,0x4085);
    fcn.000162a0(arg1,0xa438,0xa180);
    fcn.000162a0(arg1,0xa438,0x8404);
    fcn.000162a0(arg1,0xa438,0x8280);
    fcn.000162a0(arg1,0xa438,0xd704);
    fcn.000162a0(arg1,0xa438,0x405d);
    fcn.000162a0(arg1,0xa438,0xa720);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x742);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7ec);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5f74);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x742);
    fcn.000162a0(arg1,0xa438,0xd702);
    fcn.000162a0(arg1,0xa438,0x7fb6);
    fcn.000162a0(arg1,0xa438,0x8190);
    fcn.000162a0(arg1,0xa438,0x82a0);
    fcn.000162a0(arg1,0xa438,0x8404);
    fcn.000162a0(arg1,0xa438,0x8610);
    fcn.000162a0(arg1,0xa438,0);
    fcn.000162a0(arg1,0xa438,0xc0f);
    fcn.000162a0(arg1,0xa438,0xd01);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7dc);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x64b);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7c0);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5fa7);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x481);
    fcn.000162a0(arg1,0xa438,0xa840);
    fcn.000162a0(arg1,0xa438,0x94bc);
    fcn.000162a0(arg1,0xa438,0x870c);
    fcn.000162a0(arg1,0xa438,0xd10a);
    fcn.000162a0(arg1,0xa438,0xd040);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7c0);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5fb4);
    fcn.000162a0(arg1,0xa438,0xa190);
    fcn.000162a0(arg1,0xa438,0xa00a);
    fcn.000162a0(arg1,0xa438,0xa280);
    fcn.000162a0(arg1,0xa438,0xa404);
    fcn.000162a0(arg1,0xa438,0xa220);
    fcn.000162a0(arg1,0xa438,0xd116);
    fcn.000162a0(arg1,0xa438,0xd041);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7c0);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5fb4);
    fcn.000162a0(arg1,0xa438,48000);
    fcn.000162a0(arg1,0xa438,0xd1c4);
    fcn.000162a0(arg1,0xa438,0xd074);
    fcn.000162a0(arg1,0xa438,0xa301);
    fcn.000162a0(arg1,0xa438,0xd704);
    fcn.000162a0(arg1,0xa438,0x604b);
    fcn.000162a0(arg1,0xa438,0xa90c);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x537);
    fcn.000162a0(arg1,0xa438,0xcb92);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x4063);
    fcn.000162a0(arg1,0xa438,0xd116);
    fcn.000162a0(arg1,0xa438,0xf002);
    fcn.000162a0(arg1,0xa438,0xd150);
    fcn.000162a0(arg1,0xa438,0xd040);
    fcn.000162a0(arg1,0xa438,0xd703);
    fcn.000162a0(arg1,0xa438,0x60a0);
    fcn.000162a0(arg1,0xa438,0x6241);
    fcn.000162a0(arg1,0xa438,0x63e2);
    fcn.000162a0(arg1,0xa438,0x6583);
    fcn.000162a0(arg1,0xa438,0xf054);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x611e);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x40da);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd10);
    fcn.000162a0(arg1,0xa438,0xa010);
    fcn.000162a0(arg1,0xa438,0x8740);
    fcn.000162a0(arg1,0xa438,0xf02f);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd50);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0xa740);
    fcn.000162a0(arg1,0xa438,0xf02a);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x611e);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x40da);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd20);
    fcn.000162a0(arg1,0xa438,0xa010);
    fcn.000162a0(arg1,0xa438,0x8740);
    fcn.000162a0(arg1,0xa438,0xf021);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd60);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0xa740);
    fcn.000162a0(arg1,0xa438,0xf01c);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x611e);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x40da);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd30);
    fcn.000162a0(arg1,0xa438,0xa010);
    fcn.000162a0(arg1,0xa438,0x8740);
    fcn.000162a0(arg1,0xa438,0xf013);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd70);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0xa740);
    fcn.000162a0(arg1,0xa438,0xf00e);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x611e);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x40da);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd40);
    fcn.000162a0(arg1,0xa438,0xa010);
    fcn.000162a0(arg1,0xa438,0x8740);
    fcn.000162a0(arg1,0xa438,0xf005);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd80);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0xa740);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7e4);
    fcn.000162a0(arg1,0xa438,0xa610);
    fcn.000162a0(arg1,0xa438,0xd704);
    fcn.000162a0(arg1,0xa438,0x405d);
    fcn.000162a0(arg1,0xa438,0xa720);
    fcn.000162a0(arg1,0xa438,0xd700);
    fcn.000162a0(arg1,0xa438,0x5ff4);
    fcn.000162a0(arg1,0xa438,0xa008);
    fcn.000162a0(arg1,0xa438,0xd704);
    fcn.000162a0(arg1,0xa438,0x4046);
    fcn.000162a0(arg1,0xa438,0xa002);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x742);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7f7);
    fcn.000162a0(arg1,0xa438,0xd703);
    fcn.000162a0(arg1,0xa438,0x7f6f);
    fcn.000162a0(arg1,0xa438,0x7f4e);
    fcn.000162a0(arg1,0xa438,0x7f2d);
    fcn.000162a0(arg1,0xa438,0x7f0c);
    fcn.000162a0(arg1,0xa438,0x800a);
    fcn.000162a0(arg1,0xa438,0xcf0);
    fcn.000162a0(arg1,0xa438,0xd00);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x7e4);
    fcn.000162a0(arg1,0xa438,0x8010);
    fcn.000162a0(arg1,0xa438,0xa740);
    fcn.000162a0(arg1,0xa438,0x1000);
    fcn.000162a0(arg1,0xa438,0x742);
    fcn.000162a0(arg1,0xa438,0xd702);
    fcn.000162a0(arg1,0xa438,0x7fb5);
    fcn.000162a0(arg1,0xa438,0xd701);
    fcn.000162a0(arg1,0xa438,0x3ad4);
    fcn.000162a0(arg1,0xa438,0x537);
    fcn.000162a0(arg1,0xa438,0x8610);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x64b);
    fcn.000162a0(arg1,0xa438,0x8301);
    fcn.000162a0(arg1,0xa438,0x800a);
    fcn.000162a0(arg1,0xa438,0x8190);
    fcn.000162a0(arg1,0xa438,0x82a0);
    fcn.000162a0(arg1,0xa438,0x8404);
    fcn.000162a0(arg1,0xa438,0xa70c);
    fcn.000162a0(arg1,0xa438,0x9402);
    fcn.000162a0(arg1,0xa438,0x890c);
    fcn.000162a0(arg1,0xa438,0x8840);
    fcn.000162a0(arg1,0xa438,0x1800);
    fcn.000162a0(arg1,0xa438,0x64b);
    fcn.000162a0(arg1,0xa436,0xa10e);
    fcn.000162a0(arg1,0xa438,0x642);
    fcn.000162a0(arg1,0xa436,0xa10c);
    fcn.000162a0(arg1,0xa438,0x686);
    fcn.000162a0(arg1,0xa436,0xa10a);
    fcn.000162a0(arg1,0xa438,0x788);
    fcn.000162a0(arg1,0xa436,0xa108);
    fcn.000162a0(arg1,0xa438,0x47b);
    fcn.000162a0(arg1,0xa436,0xa106);
    fcn.000162a0(arg1,0xa438,0x65c);
    fcn.000162a0(arg1,0xa436,0xa104);
    fcn.000162a0(arg1,0xa438,0x769);
    fcn.000162a0(arg1,0xa436,0xa102);
    fcn.000162a0(arg1,0xa438,0x3c7);
    fcn.000162a0(arg1,0xa436,0xa100);
    fcn.000162a0(arg1,0xa438,0x6f9);
    fcn.000162a0(arg1,0xa436,0xa110);
    fcn.000162a0(arg1,0xa438,0xff);
    fcn.000162a0(arg1,0xa436,0xb87c);
    fcn.000162a0(arg1,0xa438,0x8530);
    fcn.000162a0(arg1,0xa436,0xb87e);
    fcn.000162a0(arg1,0xa438,0xaf85);
    fcn.000162a0(arg1,0xa438,0x3caf);
    fcn.000162a0(arg1,0xa438,0x8593);
    fcn.000162a0(arg1,0xa438,0xaf85);
    fcn.000162a0(arg1,0xa438,0x9caf);
    fcn.000162a0(arg1,0xa438,0x85a5);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xd702);
    fcn.000162a0(arg1,0xa438,0x5afb);
    fcn.000162a0(arg1,0xa438,0xe083);
    fcn.000162a0(arg1,0xa438,0xfb0c);
    fcn.000162a0(arg1,0xa438,0x20d);
    fcn.000162a0(arg1,0xa438,0x21b);
    fcn.000162a0(arg1,0xa438,0x10bf);
    fcn.000162a0(arg1,0xa438,0x86d7);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x86da);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbe0);
    fcn.000162a0(arg1,0xa438,0x83fc);
    fcn.000162a0(arg1,0xa438,0xc02);
    fcn.000162a0(arg1,0xa438,0xd02);
    fcn.000162a0(arg1,0xa438,0x1b10);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xda02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xdd02);
    fcn.000162a0(arg1,0xa438,0x5afb);
    fcn.000162a0(arg1,0xa438,0xe083);
    fcn.000162a0(arg1,0xa438,0xfd0c);
    fcn.000162a0(arg1,0xa438,0x20d);
    fcn.000162a0(arg1,0xa438,0x21b);
    fcn.000162a0(arg1,0xa438,0x10bf);
    fcn.000162a0(arg1,0xa438,0x86dd);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x86e0);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbe0);
    fcn.000162a0(arg1,0xa438,0x83fe);
    fcn.000162a0(arg1,0xa438,0xc02);
    fcn.000162a0(arg1,0xa438,0xd02);
    fcn.000162a0(arg1,0xa438,0x1b10);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xe002);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xaf2f);
    fcn.000162a0(arg1,0xa438,0xbd02);
    fcn.000162a0(arg1,0xa438,0x2cac);
    fcn.000162a0(arg1,0xa438,0x286);
    fcn.000162a0(arg1,0xa438,0x65af);
    fcn.000162a0(arg1,0xa438,0x212b);
    fcn.000162a0(arg1,0xa438,0x22c);
    fcn.000162a0(arg1,0xa438,0x6002);
    fcn.000162a0(arg1,0xa438,0x86b6);
    fcn.000162a0(arg1,0xa438,0xaf21);
    fcn.000162a0(arg1,0xa438,0xcd1);
    fcn.000162a0(arg1,0xa438,0x3bf);
    fcn.000162a0(arg1,0xa438,0x8710);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x870d);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x8719);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x8716);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x871f);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x871c);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x8728);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x8725);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x8707);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbad);
    fcn.000162a0(arg1,0xa438,0x281c);
    fcn.000162a0(arg1,0xa438,0xd100);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0xa02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x1302);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x2202);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x2b02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xae1a);
    fcn.000162a0(arg1,0xa438,0xd101);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0xa02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x1302);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x2202);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x2b02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xd101);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x3402);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x3102);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x3d02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x3a02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x4302);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x4002);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x4c02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x4902);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xd100);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x2e02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x3702);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x4602);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xbf87);
    fcn.000162a0(arg1,0xa438,0x4f02);
    fcn.000162a0(arg1,0xa438,0x5ab7);
    fcn.000162a0(arg1,0xa438,0xaf35);
    fcn.000162a0(arg1,0xa438,0x7ff8);
    fcn.000162a0(arg1,0xa438,0xfaef);
    fcn.000162a0(arg1,0xa438,0x69bf);
    fcn.000162a0(arg1,0xa438,0x86e3);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbbf);
    fcn.000162a0(arg1,0xa438,0x86fb);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x86e6);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbbf);
    fcn.000162a0(arg1,0xa438,0x86fe);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x86e9);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbbf);
    fcn.000162a0(arg1,0xa438,0x8701);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x86ec);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xfbbf);
    fcn.000162a0(arg1,0xa438,0x8704);
    fcn.000162a0(arg1,0xa438,0x25a);
    fcn.000162a0(arg1,0xa438,0xb7bf);
    fcn.000162a0(arg1,0xa438,0x86ef);
    fcn.000162a0(arg1,0xa438,0x262);
    fcn.000162a0(arg1,0xa438,0x7cbf);
    fcn.000162a0(arg1,0xa438,0x86f2);
    fcn.000162a0(arg1,0xa438,0x262);
    fcn.000162a0(arg1,0xa438,0x7cbf);
    fcn.000162a0(arg1,0xa438,0x86f5);
    fcn.000162a0(arg1,0xa438,0x262);
    fcn.000162a0(arg1,0xa438,0x7cbf);
    fcn.000162a0(arg1,0xa438,0x86f8);
    fcn.000162a0(arg1,0xa438,0x262);
    fcn.000162a0(arg1,0xa438,0x7cef);
    fcn.000162a0(arg1,0xa438,0x96fe);
    fcn.000162a0(arg1,0xa438,0xfc04);
    fcn.000162a0(arg1,0xa438,0xf8fa);
    fcn.000162a0(arg1,0xa438,0xef69);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xef02);
    fcn.000162a0(arg1,0xa438,0x6273);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xf202);
    fcn.000162a0(arg1,0xa438,0x6273);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xf502);
    fcn.000162a0(arg1,0xa438,0x6273);
    fcn.000162a0(arg1,0xa438,0xbf86);
    fcn.000162a0(arg1,0xa438,0xf802);
    fcn.000162a0(arg1,0xa438,0x6273);
    fcn.000162a0(arg1,0xa438,0xef96);
    fcn.000162a0(arg1,0xa438,0xfefc);
    fcn.000162a0(arg1,0xa438,0x420);
    fcn.000162a0(arg1,0xa438,0xb540);
    fcn.000162a0(arg1,0xa438,0x53b5);
    fcn.000162a0(arg1,0xa438,0x4086);
    fcn.000162a0(arg1,0xa438,0xb540);
    fcn.000162a0(arg1,0xa438,0xb9b5);
    fcn.000162a0(arg1,0xa438,0x40c8);
    fcn.000162a0(arg1,0xa438,0xb03a);
    fcn.000162a0(arg1,0xa438,0xc8b0);
    fcn.000162a0(arg1,0xa438,0xbac8);
    fcn.000162a0(arg1,0xa438,0xb13a);
    fcn.000162a0(arg1,0xa438,0xc8b1);
    fcn.000162a0(arg1,0xa438,0xba77);
    fcn.000162a0(arg1,0xa438,0xbd26);
    fcn.000162a0(arg1,0xa438,0xffbd);
    fcn.000162a0(arg1,0xa438,0x2677);
    fcn.000162a0(arg1,0xa438,0xbd28);
    fcn.000162a0(arg1,0xa438,0xffbd);
    fcn.000162a0(arg1,0xa438,0x2840);
    fcn.000162a0(arg1,0xa438,0xbd26);
    fcn.000162a0(arg1,0xa438,0xc8bd);
    fcn.000162a0(arg1,0xa438,0x2640);
    fcn.000162a0(arg1,0xa438,0xbd28);
    fcn.000162a0(arg1,0xa438,0xc8bd);
    fcn.000162a0(arg1,0xa438,0x28bb);
    fcn.000162a0(arg1,0xa438,0xa430);
    fcn.000162a0(arg1,0xa438,0x98b0);
    fcn.000162a0(arg1,0xa438,0x1eba);
    fcn.000162a0(arg1,0xa438,0xb01e);
    fcn.000162a0(arg1,0xa438,0xdcb0);
    fcn.000162a0(arg1,0xa438,0x1e98);
    fcn.000162a0(arg1,0xa438,0xb09e);
    fcn.000162a0(arg1,0xa438,0xbab0);
    fcn.000162a0(arg1,0xa438,0x9edc);
    fcn.000162a0(arg1,0xa438,0xb09e);
    fcn.000162a0(arg1,0xa438,0x98b1);
    fcn.000162a0(arg1,0xa438,0x1eba);
    fcn.000162a0(arg1,0xa438,0xb11e);
    fcn.000162a0(arg1,0xa438,0xdcb1);
    fcn.000162a0(arg1,0xa438,0x1e98);
    fcn.000162a0(arg1,0xa438,0xb19e);
    fcn.000162a0(arg1,0xa438,0xbab1);
    fcn.000162a0(arg1,0xa438,0x9edc);
    fcn.000162a0(arg1,0xa438,0xb19e);
    fcn.000162a0(arg1,0xa438,0x11b0);
    fcn.000162a0(arg1,0xa438,0x1e22);
    fcn.000162a0(arg1,0xa438,0xb01e);
    fcn.000162a0(arg1,0xa438,0x33b0);
    fcn.000162a0(arg1,0xa438,0x1e11);
    fcn.000162a0(arg1,0xa438,0xb09e);
    fcn.000162a0(arg1,0xa438,0x22b0);
    fcn.000162a0(arg1,0xa438,0x9e33);
    fcn.000162a0(arg1,0xa438,0xb09e);
    fcn.000162a0(arg1,0xa438,0x11b1);
    fcn.000162a0(arg1,0xa438,0x1e22);
    fcn.000162a0(arg1,0xa438,0xb11e);
    fcn.000162a0(arg1,0xa438,0x33b1);
    fcn.000162a0(arg1,0xa438,0x1e11);
    fcn.000162a0(arg1,0xa438,0xb19e);
    fcn.000162a0(arg1,0xa438,0x22b1);
    fcn.000162a0(arg1,0xa438,0x9e33);
    fcn.000162a0(arg1,0xa438,0xb19e);
    fcn.000162a0(arg1,0xa436,0xb85e);
    fcn.000162a0(arg1,0xa438,0x2f71);
    fcn.000162a0(arg1,0xa436,0xb860);
    fcn.000162a0(arg1,0xa438,0x20d9);
    fcn.000162a0(arg1,0xa436,0xb862);
    fcn.000162a0(arg1,0xa438,0x2109);
    fcn.000162a0(arg1,0xa436,0xb864);
    fcn.000162a0(arg1,0xa438,0x34e7);
    fcn.000162a0(arg1,0xa436,0xb878);
    fcn.000162a0(arg1,0xa438,0xf);
    uVar1 = fcn.00016318(arg1,0xb820);
    fcn.000162a0(arg1,0xb820,uVar1 & 0xff7f);
    fcn.000162a0(arg1,0xa436,0);
    fcn.000162a0(arg1,0xa438,0);
    uVar1 = fcn.00016318(arg1,0xb82e);
    fcn.000162a0(arg1,0xb82e,uVar1 & 0xfffe);
    fcn.000162a0(arg1,0xa436,0x8024);
    fcn.000162a0(arg1,0xa438,0);
    uVar1 = fcn.00016318(arg1,0xb820);
    fcn.000162a0(arg1,0xb820,uVar1 & 0xffef);
    uVar2 = 0;
    uVar1 = fcn.00016318(arg1,0xb800);
    do {
        if ((uVar1 & 0x40) == 0x40) {
            return;
        }
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
        }
        uVar1 = fcn.00016318(arg1,0xb800);
    } while (uVar2 < 100);
    return;
}


/* fcn.00023e4c @ 0x23e4c */

//WARNING: Removing unreachable block (ram,0x0001615a)
//WARNING: Removing unreachable block (ram,0x0001617d)
//WARNING: Removing unreachable block (ram,0x0001619a)
//WARNING: Removing unreachable block (ram,0x000161c0)

void fcn.00023e4c(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    
    iVar1 = *(arg1 + 0x2b18);
    uVar6 = arg1;
    if (iVar1 == 0x2f) {
        uVar3 = 0x1ea;
        fcn.00015c64(arg1,0x1ea,0,0);
code_r0x00023fcc:
        iVar4 = CONCAT71(uVar3 >> 8,0x1f);
        fcn.000153ec(arg1,iVar4,0xa42);
        iVar4 = CONCAT71(iVar4 >> 8,0x16);
        uVar2 = fcn.00015768(uVar6,iVar4);
        iVar4 = CONCAT71(iVar4 >> 8,0x16);
        fcn.000153ec(arg1,iVar4,uVar2 & 0xfffd);
        uVar6 = 0;
        iVar4 = CONCAT71(iVar4 >> 8,0x1f);
    }
    else {
        if (iVar1 == 0x30) {
            uVar2 = fcn.0001620c(arg1,0xe052);
            uVar3 = 0xe052;
            fcn.00016134(uVar6,0xe052,uVar2 & 0xfffe);
            iVar4 = CONCAT71(uVar3 >> 8,0x1f);
            fcn.000153ec(arg1,iVar4,0xa43);
            iVar4 = CONCAT71(iVar4 >> 8,0x10);
            uVar2 = fcn.00015768(uVar6,iVar4);
            iVar4 = CONCAT71(iVar4 >> 8,0x10);
            fcn.000153ec(arg1,iVar4,uVar2 & 0x7fff);
            iVar4 = CONCAT71(iVar4 >> 8,0x1f);
            fcn.000153ec(arg1,iVar4,0xa44);
            iVar4 = CONCAT71(iVar4 >> 8,0x11);
            uVar2 = fcn.00015768(uVar6,iVar4);
            uVar5 = 0xafff;
        }
        else {
            if (iVar1 != 0x31) {
                if ((iVar1 == 0x3b) || (iVar1 == 0x3c)) {
                    uVar2 = fcn.0001620c(arg1,0xe052);
                    if (*(arg1 + 0x2e58) == '\0') {
                        fcn.000151ac(arg1,(uVar2 & 0xfffe) + 0x70290000 | 0x80000000,0xb0);
                    }
                    return;
                }
                if (iVar1 != 0x43) {
                    return;
                }
                uVar2 = fcn.0001620c(arg1,0xe052);
                uVar3 = 0xe052;
                fcn.00016134(uVar6,0xe052,uVar2 & 0xfffe);
                goto code_r0x00023fcc;
            }
            uVar2 = fcn.0001620c(arg1,0xe052);
            uVar3 = 0xe052;
            fcn.00016134(uVar6,0xe052,uVar2 & 0xfffe);
            iVar4 = CONCAT71(uVar3 >> 8,0x1f);
            fcn.000153ec(arg1,iVar4,0xa43);
            iVar4 = CONCAT71(iVar4 >> 8,0x10);
            uVar2 = fcn.00015768(uVar6,iVar4);
            iVar4 = CONCAT71(iVar4 >> 8,0x10);
            fcn.000153ec(arg1,iVar4,uVar2 & 0x7fff);
            iVar4 = CONCAT71(iVar4 >> 8,0x1f);
            fcn.000153ec(arg1,iVar4,0xa44);
            iVar4 = CONCAT71(iVar4 >> 8,0x11);
            uVar2 = fcn.00015768(uVar6,iVar4);
            uVar5 = 0x8fff;
        }
        uVar6 = uVar5 & uVar2;
        iVar4 = CONCAT71(iVar4 >> 8,0x11);
    }
    fcn.000153ec(arg1,iVar4,uVar6);
    return;
}


/* fcn.00023c24 @ 0x23c24 */

void fcn.00023c24(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    
    uVar2 = *(arg1 + 0x2b18);
    uVar4 = uVar2;
    arg1_00 = arg1;
    if (uVar2 < 0x2a) {
        if (uVar2 == 0x29) {
code_r0x00023ca7:
            iVar3 = CONCAT71(uVar4 >> 8,0x1f);
            fcn.000153ec(arg1,iVar3,4);
            iVar3 = CONCAT71(iVar3 >> 8,0x1f);
            fcn.000153ec(arg1,iVar3,7);
            iVar3 = CONCAT71(iVar3 >> 8,0x1e);
            fcn.000153ec(arg1,iVar3,0x2d);
            iVar3 = CONCAT71(iVar3 >> 8,0x18);
            uVar1 = fcn.00015768(arg1_00,iVar3);
            iVar3 = CONCAT71(iVar3 >> 8,0x18);
            fcn.000153ec(arg1,iVar3,uVar1 | 0x10);
            uVar2 = 2;
            iVar3 = CONCAT71(iVar3 >> 8,0x1f);
code_r0x00023d2b:
            fcn.000153ec(arg1,iVar3,uVar2);
            iVar3 = CONCAT71(iVar3 >> 8,0x1f);
            fcn.000153ec(arg1,iVar3,0);
            iVar3 = CONCAT71(iVar3 >> 8,0x14);
            uVar1 = fcn.00015768(arg1_00,iVar3);
            iVar3 = CONCAT71(iVar3 >> 8,0x14);
            uVar2 = uVar1 | 0x8000;
            goto code_r0x00023dc1;
        }
        if (0x22 < uVar2) {
            uVar4 = uVar2 - 0x23;
            if ((uVar2 - 0x23 != 0) && (uVar4 = uVar2 - 0x24, uVar2 - 0x24 != 0)) {
                uVar4 = uVar2 - 0x25;
                if ((uVar2 - 0x25 != 0) && (uVar4 = uVar2 - 0x26, uVar2 - 0x26 != 0)) {
                    uVar2 = uVar2 - 0x27;
                    uVar4 = uVar2;
                    if (uVar2 != 0) {
                        if (uVar2 != 1) {
                            return;
                        }
                        goto code_r0x00023ca7;
                    }
                }
code_r0x00023cfa:
                iVar3 = CONCAT71(uVar4 >> 8,0x1f);
                fcn.000153ec(arg1,iVar3,7);
                iVar3 = CONCAT71(iVar3 >> 8,0x1e);
                fcn.000153ec(arg1,iVar3,0x2d);
                iVar3 = CONCAT71(iVar3 >> 8,0x18);
                uVar1 = fcn.00015768(arg1_00,iVar3);
                iVar3 = CONCAT71(iVar3 >> 8,0x18);
                uVar2 = uVar1 | 0x10;
                goto code_r0x00023d2b;
            }
            goto code_r0x00023d84;
        }
        if (uVar2 == 0x22) goto code_r0x00023d84;
        uVar4 = uVar2 - 4;
        if (((uVar2 - 4 != 0) && (uVar4 = uVar2 - 5, uVar2 - 5 != 0)) && (uVar4 = uVar2 - 6, uVar2 - 6 != 0)) {
            uVar4 = uVar2 - 0xe;
            if ((uVar2 - 0xe != 0) && (uVar4 = uVar2 - 0xf, uVar2 - 0xf != 0)) {
                uVar2 = uVar2 - 0x10;
                goto code_r0x00023d7d;
            }
            goto code_r0x00023d84;
        }
        uVar2 = 0xf8a0;
    }
    else {
        if (uVar2 < 0x35) {
            if (uVar2 != 0x34) {
                uVar4 = uVar2 - 0x2a;
                if ((uVar2 - 0x2a == 0) || (uVar4 = uVar2 - 0x2b, uVar2 - 0x2b == 0)) goto code_r0x00023cfa;
                if ((uVar2 == 0x2c) || (uVar2 == 0x2d)) {
                    uVar5 = 0;
                    fcn.000153ec(arg1,0x1f,0xa44);
                    iVar3 = CONCAT71(uVar5 >> 8,0x11);
                    uVar1 = fcn.00015768(arg1_00,iVar3);
                    iVar3 = CONCAT71(iVar3 >> 8,0x11);
                    fcn.000153ec(arg1,iVar3,uVar1 | 0xc);
                    uVar2 = 0;
                    iVar3 = CONCAT71(iVar3 >> 8,0x1f);
                    goto code_r0x00023dc1;
                }
                uVar2 = uVar2 - 0x32;
code_r0x00023d7d:
                uVar4 = uVar2;
                if ((uVar2 != 0) && (uVar2 != 1)) {
                    return;
                }
            }
code_r0x00023d84:
            iVar3 = CONCAT71(uVar4 >> 8,0x1f);
            fcn.000153ec(arg1,iVar3,0);
            iVar3 = CONCAT71(iVar3 >> 8,0x14);
            uVar1 = fcn.00015768(arg1_00,iVar3);
            uVar2 = uVar1 | 0x20;
        }
        else {
            uVar4 = uVar2 - 0x35;
            if (uVar2 - 0x35 == 0) goto code_r0x00023d84;
            uVar4 = uVar2 - 0x36;
            if (((uVar2 - 0x36 != 0) && (uVar4 = uVar2 - 0x37, uVar2 - 0x37 != 0)) &&
               (uVar4 = uVar2 - 0x38, uVar2 - 0x38 != 0)) {
                uVar2 = uVar2 - 0x39;
                uVar4 = uVar2;
                if (uVar2 != 0) {
                    if (uVar2 != 9) {
                        return;
                    }
                    uVar4 = 0;
                    goto code_r0x00023cfa;
                }
            }
            iVar3 = CONCAT71(uVar4 >> 8,0x1f);
            fcn.000153ec(arg1,iVar3,0);
            iVar3 = CONCAT71(iVar3 >> 8,0x14);
            uVar1 = fcn.00015768(arg1_00,iVar3);
            uVar2 = uVar1 & 0xffdf | 0x40;
        }
        iVar3 = CONCAT71(iVar3 >> 8,0x14);
        fcn.000153ec(arg1,iVar3,uVar2);
        uVar4 = CONCAT71(iVar3 >> 8,0xd);
        uVar1 = fcn.00015768(arg1_00,uVar4);
        uVar2 = uVar1 | 0x20;
    }
    iVar3 = CONCAT71(uVar4 >> 8,0xd);
code_r0x00023dc1:
    fcn.000153ec(arg1,iVar3,uVar2);
    return;
}


/* fcn.0002a2cc @ 0x2a2cc */

void fcn.0002a2cc(int64_t arg1)

{
    uint16_t uVar1;
    ulong in_RDX;
    int64_t iVar2;
    unkbyte7 Var4;
    uint64_t uVar3;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t arg3;
    
    if ((*(arg1 + 0x2e78) - 1U & 0xfffffffd) != 0) {
        return;
    }
    iVar2 = CONCAT71(in_RDX >> 8,0x1f);
    fcn.000153ec(arg1,iVar2,0xa43);
    iVar2 = CONCAT71(iVar2 >> 8,0x11);
    uVar1 = fcn.00015768(arg1,iVar2);
    iVar2 = CONCAT71(iVar2 >> 8,0x11);
    fcn.000153ec(arg1,iVar2,uVar1 & 0xffbf);
    iVar2 = CONCAT71(iVar2 >> 8,0x1f);
    fcn.000176a4(arg1,iVar2,0xa43);
    uVar7 = 0;
    Var4 = iVar2 >> 8;
    if (*(arg1 + 0x2e78) == 1) {
        iVar2 = CONCAT71(Var4,0x19);
        uVar1 = fcn.0001691c(arg1,iVar2,0);
code_r0x0002a359:
        uVar8 = uVar1;
    }
    else {
        uVar8 = uVar7;
        if (*(arg1 + 0x2e78) == 3) {
            iVar2 = CONCAT71(Var4,0x19);
            uVar1 = fcn.00017214(arg1,iVar2,0);
            goto code_r0x0002a359;
        }
    }
    iVar2 = CONCAT71(iVar2 >> 8,0x19);
    fcn.000176a4(arg1,iVar2,uVar8 & 0xffffffffffffffbf);
    fcn.000176a4(arg1,CONCAT71(iVar2 >> 8,0x1f),0);
    if (*(arg1 + 0x2e78) == 1) {
        uVar1 = fcn.0001691c(arg1,0,0);
code_r0x0002a3a2:
        uVar8 = uVar1;
    }
    else {
        uVar8 = uVar7;
        if (*(arg1 + 0x2e78) == 3) {
            uVar1 = fcn.00017214(arg1,0,0);
            goto code_r0x0002a3a2;
        }
    }
    uVar8 = uVar8 | 0x8000;
    fcn.000176a4(arg1,0,uVar8);
    uVar6 = uVar7;
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
        }
        if (*(arg1 + 0x2e78) == 1) {
            uVar1 = fcn.0001691c(arg1,0,uVar8);
code_r0x0002a40c:
            uVar3 = uVar1;
        }
        else {
            uVar3 = uVar7;
            if (*(arg1 + 0x2e78) == 3) {
                uVar1 = fcn.00017214(arg1,0,uVar8);
                goto code_r0x0002a40c;
            }
        }
        uVar5 = uVar6 + 1;
        uVar6 = uVar5;
    } while ((uVar3 < 0) && (uVar5 < 0x14));
    arg3 = 0xdcc;
    iVar2 = CONCAT71(uVar3 >> 8,0x1f);
    fcn.000176a4(arg1,iVar2,0xdcc);
    Var4 = iVar2 >> 8;
    if (*(arg1 + 0x2e78) == 1) {
        iVar2 = CONCAT71(Var4,0x14);
        uVar1 = fcn.0001691c(arg1,iVar2,arg3);
    }
    else {
        if (*(arg1 + 0x2e78) != 3) goto code_r0x0002a454;
        iVar2 = CONCAT71(Var4,0x14);
        uVar1 = fcn.00017214(arg1,iVar2,arg3);
    }
    uVar7 = uVar1;
code_r0x0002a454:
    iVar2 = CONCAT71(iVar2 >> 8,0x14);
    fcn.000176a4(arg1,iVar2,uVar7 | 0x1c);
    iVar2 = CONCAT71(iVar2 >> 8,0x1f);
    fcn.000176a4(arg1,iVar2,0);
    if (*(arg1 + 0x2e7c) == '\x01') {
        iVar2 = CONCAT71(iVar2 >> 8,0x1f);
        fcn.000176a4(arg1,iVar2,0xd04);
        iVar2 = CONCAT71(iVar2 >> 8,0x10);
        fcn.000176a4(arg1,iVar2,0x625a);
        iVar2 = CONCAT71(iVar2 >> 8,0x12);
        fcn.000176a4(arg1,iVar2,0xabe6);
        fcn.000176a4(arg1,CONCAT71(iVar2 >> 8,0x1f),0);
    }
    return;
}


/* fcn.00020e70 @ 0x20e70 */

void fcn.00020e70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    fcn.000151ac(arg1,(arg2 & 0xff) << 0x10,0x80);
    do {
        uVar3 = uVar3 + 1;
        iVar2 = fcn.0001511c(arg1,0x80);
        if (iVar2 < 0) break;
    } while (uVar3 < 100000);
    uVar1 = fcn.0001511c(arg1,0x80);
    uVar3 = 0;
    fcn.000151ac(arg1,(arg2 | 0xffff8000) << 0x10 | ~arg3 & uVar1 | arg4,0x80);
    do {
        uVar3 = uVar3 + 1;
        iVar2 = fcn.0001511c(arg1,0x80);
        if (-1 < iVar2) break;
    } while (uVar3 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.00016018 @ 0x16018 */

void fcn.00016018(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    fcn.000151ac(arg1,(arg2 & 0xff | 0xffff8000) << 0x10 | arg3 & 0xffff,0x80);
    do {
        uVar2 = uVar2 + 1;
        iVar1 = fcn.0001511c(arg1,0x80);
        if (-1 < iVar1) break;
    } while (uVar2 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.0002a5a0 @ 0x2a5a0 */

uchar fcn.0002a5a0(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    ulong in_R8;
    
    uVar5 = 0;
    uVar1 = 0xff;
    if (*(arg1 + 0x2b3c) == '\x01') {
        uVar6 = arg2 & 3;
        if (uVar6 == 3) {
            uVar2 = 0x8000;
        }
        else if (uVar6 == 2) {
            uVar2 = 0x4000;
        }
        else {
            uVar2 = 0x1000;
            if (uVar6 == 1) {
                uVar2 = 0x2000;
            }
        }
        fcn.000151ac(arg1,arg2 & 0xfffc | uVar2,0xb4);
        fcn.000151ac(arg1,0,0x7c);
        do {
            iVar3 = fcn.0001511c(arg1,0xb4);
            uVar5 = uVar5 + 1;
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(1);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
            }
        } while ((-1 < iVar3) && (uVar5 < 100));
        if ((uVar5 == 100) && (-1 < iVar3)) {
            *(arg1 + 0x2e58) = 1;
        }
        else {
            uVar4 = fcn.0001511c(arg1,0xb0);
            uVar1 = uVar4;
            if (uVar6 == 3) {
                uVar1 = uVar4 >> 0x18;
            }
            else if (uVar6 == 2) {
                uVar1 = uVar4 >> 0x10;
            }
            else if (uVar6 == 1) {
                uVar1 = uVar4 >> 8;
            }
        }
    }
    else if (*(arg1 + 0x2b3c) == '\x02') {
        uVar1 = fcn.00015a50(arg1,arg2 & 0xffff,CONCAT71(in_R8 >> 8,2));
    }
    return uVar1;
}


/* fcn.0002a4cc @ 0x2a4cc */

ulong fcn.0002a4cc(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    
    if (*(arg1 + 0x2e74) == 1) {
        iVar5 = 0;
        iVar2 = 0;
        fcn.000164a4(arg1,0x1f,0,arg2);
        iVar4 = 0;
        iVar3 = 0;
        do {
            iVar2 = CONCAT71(iVar2 >> 8,2);
            iVar1 = fcn.0001691c(arg1,iVar2,iVar5);
            if (iVar1 != 0x1c) goto code_r0x0002a543;
            iVar2 = CONCAT71(iVar2 >> 8,3);
            iVar1 = fcn.0001691c(arg1,iVar2,iVar5);
            if (iVar1 != -0x36ea) goto code_r0x0002a543;
            iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
        if (iVar3 == 4) {
            return 1;
        }
code_r0x0002a543:
        iVar5 = 0;
        iVar2 = CONCAT71(iVar2 >> 8,0x1f);
        fcn.00016d84(arg1,iVar2,0,arg2);
        do {
            iVar2 = CONCAT71(iVar2 >> 8,2);
            iVar1 = fcn.00017214(arg1,iVar2,iVar5);
            if (iVar1 != 0x1c) {
                return 2;
            }
            iVar2 = CONCAT71(iVar2 >> 8,3);
            iVar1 = fcn.00017214(arg1,iVar2,iVar5);
            if (iVar1 != -0x36ea) {
                return 2;
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        if (iVar4 == 4) {
            return 3;
        }
    }
    else if (*(arg1 + 0x2e74) == 2) {
        return 1;
    }
    return 2;
}


/* fcn.000222f8 @ 0x222f8 */

void fcn.000222f8(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    fcn.000151ac(arg1,*(arg1 + 0x2cd8) >> 0x20,0x14);
    fcn.000151ac(arg1,*(arg1 + 0x2cd8) | 8,0x10);
    do {
        if (0x14 < uVar2) {
            return;
        }
        uVar1 = fcn.0001511c(arg1,0x10);
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(10);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10);
        }
    } while ((uVar1 & 8) != 0);
    return;
}


/* fcn.0002af8c @ 0x2af8c */

void fcn.0002af8c(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    int64_t arg2;
    uint32_t uVar3;
    uint64_t arg3;
    
    iVar1 = *(arg1 + 0x2b18);
    uVar3 = 0;
    if (((iVar1 == 0x36) || (iVar1 == 0x37)) || (arg2 = 0xb8, iVar1 == 0x38)) {
        arg2 = 0x10;
    }
    fcn.0002ae18(arg1);
    uVar2 = fcn.0002a6dc(arg1,arg2);
    arg3 = uVar2 & 0xbfff;
    fcn.0002ab04(arg1,arg2,arg3);
    fcn.0002af20(arg1);
    fcn.0002a930(arg1,0x30,CONCAT71(arg3 >> 8,1));
    do {
        fcn.0002ae18(arg1);
        uVar2 = fcn.0002a6dc(arg1,arg2);
        fcn.0002af20(arg1);
        if ((uVar2 >> 0xe & 1) != 0) {
            return;
        }
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(100);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 2000);
    return;
}


/* fcn.000237b4 @ 0x237b4 */

void fcn.000237b4(int64_t arg1)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    
    uVar2 = *(arg1 + 0x2ad0);
    uVar3 = 0;
    do {
        if (*(*(arg1 + 0x270) + uVar2 * 0x10) < 0) {
            return;
        }
        *(*(arg1 + 0x270) + uVar2 * 0x10) = 0x600;
        uVar2 = *(arg1 + 0x2ad0);
        if (uVar2 == 0xff) {
            puVar1 = *(arg1 + 0x270) + 0xff0;
            *puVar1 = *puVar1 | 0x40000000;
            uVar2 = *(arg1 + 0x2ad0);
        }
        uVar3 = uVar3 + 1;
        puVar1 = *(arg1 + 0x270) + uVar2 * 0x10;
        *puVar1 = *puVar1 | 0x80000000;
        uVar2 = *(arg1 + 0x2ad0) + 1U & 0xff;
        *(arg1 + 0x2ad0) = uVar2;
    } while (uVar3 < 0x100);
    return;
}


/* fcn.00022f48 @ 0x22f48 */

void fcn.00022f48(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar5;
    uint in_register_00000014;
    ulong uVar6;
    uchar uVar7;
    uint8_t uVar8;
    
    uVar6 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    uVar7 = 1;
    if (arg2 != 1) {
        if (arg2 != 0) {
            return;
        }
        if (*(arg1_00 + 0x2b18) == 0x36) {
            fcn.000153ec(arg1_00,CONCAT71(uVar6 >> 8,0x10),0x1ee);
        }
        fcn.00023410(arg1_00);
        fcn.00022b34(arg1);
        fcn.0001a518(arg1_00);
        fcn.00022c4c(arg1_00);
        if (*(arg1_00 + 0x2ace) == '0') {
            (**(arg1_00 + 0x2c68))(0xfa);
            return;
        }
        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),0xfa);
        return;
    }
    iVar4 = *(arg1_00 + 0x2b18);
    if ((((iVar4 == 0x28) || (iVar4 == 0x29)) || (iVar4 == 0x2a)) || ((iVar4 == 0x2b || (iVar4 == 0x42)))) {
        uVar8 = 0;
        do {
            uVar6 = 0x1ac;
            uVar1 = fcn.00015b30(arg1_00,0x1ac,0);
            if (*(arg1_00 + 0x2ace) == '0') {
                (**(arg1_00 + 0x2c68))(100);
            }
            else {
                uVar6 = 0;
                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),100);
            }
            uVar8 = uVar8 + 1;
        } while (((uVar1 & 0x20000000) != 0) && (uVar8 < 100));
    }
    if (*(arg1_00 + 0x2e34) != '\0') {
        fcn.00022a64(arg1_00);
    }
    iVar4 = *(arg1_00 + 0x2b18);
    if (((iVar4 == 7) || (iVar4 == 10)) || (iVar4 == 0xb)) {
        uVar7 = 5;
    }
    else if (iVar4 != 0x19) {
        uVar7 = 7;
    }
    fcn.000222a8(arg1_00,CONCAT71(uVar6 >> 8,uVar7));
    uVar1 = fcn.0001511c(arg1_00,0x40);
    iVar4 = *(arg1_00 + 0x2b18);
    uVar5 = uVar1 & 0xfff7ffff | 0x3000000;
    if (iVar4 < 0x32) {
        if (iVar4 != 0x31) {
            if (iVar4 < 0x2d) {
                if ((iVar4 == 0x2c) || (iVar4 == 0x21)) goto code_r0x0002306d;
                iVar4 = iVar4 + -0x28;
            }
            else {
                iVar4 = iVar4 + -0x2d;
            }
            if (iVar4 != 0) {
code_r0x0002305e:
                if (((iVar4 != 1) && (iVar4 != 2)) && (iVar4 != 3)) goto code_r0x0002309a;
            }
        }
code_r0x0002306d:
        uVar5 = uVar1 & 0xfff7ffff | 0x3000080;
    }
    else {
        if (iVar4 < 0x40) {
            if (iVar4 != 0x3f) {
                if (((iVar4 == 0x3a) || (iVar4 == 0x3b)) || ((iVar4 == 0x3c || (iVar4 == 0x3d)))) goto code_r0x0002306d;
                if (iVar4 == 0x3e) goto code_r0x00023095;
                goto code_r0x0002309a;
            }
        }
        else {
            iVar4 = iVar4 + -0x41;
            if (iVar4 != 0) goto code_r0x0002305e;
        }
code_r0x00023095:
        uVar5 = 0x3f000700;
    }
code_r0x0002309a:
    fcn.000151ac(arg1_00,uVar5,0x40);
    iVar4 = *(arg1_00 + 0x2b18);
    uVar1 = (*(arg1_00 + 0x2b04) << 5 | *(arg1_00 + 0x2b00)) << 8;
    *(arg1_00 + 0x2e3c) = uVar1;
    if (iVar4 < 0x29) {
        if (iVar4 == 0x28) goto code_r0x000231cd;
        if (iVar4 < 0x1b) {
            if (iVar4 != 0x1a) {
                if (0x13 < iVar4) {
                    iVar4 = iVar4 + -0x14;
                    goto code_r0x0002311b;
                }
                if ((iVar4 != 0x13) && (iVar4 != 0)) {
                    if ((iVar4 == 0xe) || (((iVar4 == 0xf || (iVar4 == 0x10)) || (iVar4 = iVar4 + -0x11, iVar4 == 0))))
                    goto code_r0x000231f9;
                    goto code_r0x00023131;
                }
            }
        }
        else {
            if (0x21 < iVar4) {
                if (((((iVar4 == 0x22) || (iVar4 == 0x23)) || (iVar4 == 0x24)) || ((iVar4 == 0x25 || (iVar4 == 0x26))))
                   || (iVar4 == 0x27)) goto code_r0x00023193;
code_r0x0002327b:
                fcn.000151ac(arg1_00,uVar1,0x44);
                goto code_r0x000232aa;
            }
            if (iVar4 == 0x21) goto code_r0x0002324e;
            iVar4 = iVar4 + -0x1b;
code_r0x0002311b:
            if (((iVar4 != 0) && (iVar4 != 1)) && ((iVar4 != 2 && ((iVar4 != 3 && (iVar4 = iVar4 + -4, iVar4 != 0))))))
            {
code_r0x00023131:
                if (iVar4 != 1) goto code_r0x0002327b;
            }
        }
        uVar1 = fcn.0001511c(arg1_00,0x44);
        uVar5 = *(arg1_00 + 0x2b00);
        uVar1 = uVar1 & 0xfffff8c0;
code_r0x00023157:
        uVar1 = uVar1 | uVar5 << 8;
    }
    else if (iVar4 < 0x37) {
        if (iVar4 == 0x36) {
code_r0x00023193:
            uVar1 = fcn.0001511c(arg1_00,0x44);
            uVar1 = uVar1 & 0xffff38c0;
code_r0x00023210:
            uVar5 = *(arg1_00 + 0x2b00) | 0x80;
            goto code_r0x00023157;
        }
        if (iVar4 < 0x30) {
            if (iVar4 != 0x2f) {
                if (((iVar4 != 0x29) && (iVar4 != 0x2a)) && (iVar4 = iVar4 + -0x2b, iVar4 != 0)) goto code_r0x0002323f;
                goto code_r0x000231cd;
            }
        }
        else if ((iVar4 != 0x30) && (iVar4 != 0x31)) {
            if ((iVar4 != 0x32) && (((iVar4 != 0x33 && (iVar4 != 0x34)) && (iVar4 != 0x35)))) goto code_r0x0002327b;
code_r0x000231f9:
            uVar1 = fcn.0001511c(arg1_00,0x44);
            uVar1 = uVar1 & 0xffff18c0;
            goto code_r0x00023210;
        }
code_r0x0002324e:
        uVar1 = 0x8f00;
    }
    else {
        if (iVar4 < 0x3e) {
            if (iVar4 != 0x3d) {
                if (((iVar4 == 0x37) || (iVar4 == 0x38)) || (iVar4 = iVar4 + -0x39, iVar4 == 0)) goto code_r0x00023193;
code_r0x0002323f:
                if (((iVar4 != 1) && (iVar4 != 2)) && (iVar4 != 3)) goto code_r0x0002327b;
            }
            goto code_r0x0002324e;
        }
        if (((iVar4 == 0x3e) || (iVar4 == 0x3f)) || (iVar4 == 0x41)) {
            uVar1 = 0xc400;
        }
        else {
            if (iVar4 != 0x42) {
                if (iVar4 == 0x43) goto code_r0x0002324e;
                if (iVar4 != 0x44) goto code_r0x0002327b;
            }
code_r0x000231cd:
            uVar1 = 0xbf00;
        }
    }
    fcn.000151ac(arg1_00,uVar1,0x44);
    *(arg1_00 + 0x2e3c) = uVar1;
code_r0x000232aa:
    if (((((*(arg1_00 + 0x2e32) != '\0') || (*(arg1_00 + 0x2e33) != '\0')) || (*(arg1_00 + 0x2e35) != '\0')) &&
        (fcn.00022c4c(arg1_00), *(arg1_00 + 0x2e32) != '\0')) ||
       ((*(arg1_00 + 0x2e33) != '\0' || (*(arg1_00 + 0x2e35) != '\0')))) {
        if (*(arg1_00 + 0x2e41) != '\0') {
            uVar2 = fcn.0001511c(arg1_00,0x40);
            fcn.000151ac(arg1_00,uVar2 & 0xfffbffff | 0x20000,0x40);
        }
        fcn.00022a64(arg1_00);
        if (*(arg1_00 + 0x2e41) != '\0') {
            fcn.0001511c(arg1_00,0x44);
            fcn.0002b524(arg1);
            fcn.000151ac(arg1_00,uVar2,0x40);
        }
    }
    uVar2 = fcn.0001511c(arg1_00,0x44);
    fcn.000151ac(arg1_00,uVar2 | 0xe,0x44);
    if (*(arg1_00 + 0x2b18) == 0x36) {
        uVar6 = 0;
        uVar3 = fcn.000150bc(arg1_00,0x6c);
        uVar2 = 0x4ee;
        if ((uVar3 & 4) == 0) {
            uVar2 = 0x1ee;
        }
        fcn.000153ec(arg1_00,CONCAT71(uVar6 >> 8,0x10),uVar2);
    }
    return;
}


/* fcn.0001c1f8 @ 0x1c1f8 */

bool fcn.0001c1f8(int64_t arg1)

{
    int *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uchar uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    
    uVar2 = fcn.0001511c(arg1,0x40);
    uVar9 = uVar2 & 0x700000;
    uVar3 = fcn.00015b30(arg1,0xe4,0);
    uVar4 = fcn.0001620c(arg1,0xdc00);
    piVar1 = arg1 + 0x2b18;
    *piVar1 = 0;
    uVar8 = uVar2 & 0x7c800000;
    if (uVar8 == 0) {
        *piVar1 = 1;
        goto code_r0x0001c7d6;
    }
    if (uVar8 == 0x800000) {
        *piVar1 = 2;
    }
    else if (uVar8 == 0x4000000) {
        *piVar1 = 3;
    }
    else if (uVar8 == 0x10000000) {
        *piVar1 = 4;
    }
    else {
        if (uVar8 == 0x18000000) {
            iVar5 = (uVar2 < 0) + 5;
code_r0x0001c2cd:
            *(arg1 + 0x2ad4) = 1;
code_r0x0001c2d9:
            *piVar1 = iVar5;
            goto code_r0x0001c7d6;
        }
        if (uVar8 != 0x30000000) {
            if (uVar8 == 0x30800000) {
                *piVar1 = 10;
                goto code_r0x0001c7d6;
            }
            if (uVar8 == 0x38000000) {
                iVar5 = (uVar9 != 0) + 8;
                goto code_r0x0001c2cd;
            }
            if (uVar8 == 0x38800000) {
                *piVar1 = 0xb;
                goto code_r0x0001c7d6;
            }
            if (uVar8 == 0x34000000) {
                iVar5 = (uVar9 != 0) + 0xc;
                goto code_r0x0001c2d9;
            }
            if (uVar8 == 0x3c000000) {
                *(arg1 + 0x2ad4) = 1;
                if (uVar9 != 0x400000) {
                    if (uVar9 == 0x300000) {
                        *piVar1 = 0x10;
                        goto code_r0x0001c7d6;
                    }
                    if (uVar9 == 0x200000) {
                        *piVar1 = 0xf;
                        goto code_r0x0001c7d6;
                    }
                    if (uVar9 == 0x100000) {
                        *piVar1 = 0xe;
                        goto code_r0x0001c7d6;
                    }
                }
                *piVar1 = 0x11;
                goto code_r0x0001c7d6;
            }
            if (uVar8 == 0x34800000) {
                if (uVar9 != 0x600000) {
                    if (uVar9 == 0x500000) {
code_r0x0001c3b4:
                        *piVar1 = 0x17;
                        goto code_r0x0001c7d6;
                    }
                    if ((uVar9 - 0x300000 & 0xffefffff) == 0) {
code_r0x0001c3cc:
                        *piVar1 = 0x16;
                        goto code_r0x0001c7d6;
                    }
                    if (uVar9 == 0x200000) {
code_r0x0001c3df:
                        *piVar1 = 0x15;
                        goto code_r0x0001c7d6;
                    }
                    if (uVar9 == 0x100000) {
code_r0x0001c3f2:
                        *piVar1 = 0x14;
                        goto code_r0x0001c7d6;
                    }
                    if (uVar9 == 0) {
                        *piVar1 = 0x12;
                        goto code_r0x0001c7d6;
                    }
                }
            }
            else {
                if (uVar8 != 0x24800000) {
                    if (uVar8 == 0x40800000) {
                        if (uVar9 == 0) {
                            *piVar1 = 0x1a;
                            goto code_r0x0001c7d6;
                        }
                        if (uVar9 == 0x100000) {
                            *piVar1 = 0x1b;
                            goto code_r0x0001c7d6;
                        }
                        if (uVar9 == 0x200000) {
                            *piVar1 = 0x1c;
                            goto code_r0x0001c7d6;
                        }
                        iVar5 = (uVar9 != 0x300000) + 0x1d;
                    }
                    else if (uVar8 == 0x44800000) {
                        iVar5 = (uVar9 != 0) + 0x1f;
                    }
                    else {
                        if (uVar8 == 0x3c800000) {
                            *(arg1 + 0x2ad4) = 1;
                            if (uVar9 != 0x300000) {
                                if (uVar9 == 0x200000) {
                                    *piVar1 = 0x34;
                                    goto code_r0x0001c7d6;
                                }
                                if (uVar9 == 0x100000) {
                                    *piVar1 = 0x33;
                                    goto code_r0x0001c7d6;
                                }
                                if (uVar9 == 0) {
                                    *piVar1 = 0x32;
                                    goto code_r0x0001c7d6;
                                }
                            }
                            *piVar1 = 0x35;
                            goto code_r0x0001c7d6;
                        }
                        if (uVar8 == 0x28000000) {
                            *(arg1 + 0x2ad4) = 1;
                            *(arg1 + 0x2ad4) = *(arg1 + 0xc) != -0x7ec9;
                            if ((uVar9 - 0x200000 & 0xffefffff) != 0) {
                                if (uVar9 == 0x100000) {
                                    *piVar1 = 0x23;
                                    goto code_r0x0001c7d6;
                                }
                                if (uVar9 == 0) {
                                    *piVar1 = 0x22;
                                    goto code_r0x0001c7d6;
                                }
                            }
                            *piVar1 = 0x24;
                            goto code_r0x0001c7d6;
                        }
                        if (uVar8 == 0x24000000) {
                            *piVar1 = 0x19;
                            goto code_r0x0001c7d6;
                        }
                        if (uVar8 != 0x28800000) {
                            uVar7 = 0;
                            if (uVar8 == 0x2c000000) {
                                *(arg1 + 0x2ad4) = 1;
                                if (uVar9 == 0) {
                                    *piVar1 = 0x25;
                                }
                                else {
                                    *piVar1 = (uVar9 != 0x100000) + 0x26;
                                }
                                uVar6 = fcn.000150bc(arg1,0xf1);
                                if ((uVar6 & 1) != 0) {
                                    *(arg1 + 0x2ad4) = 0;
                                }
                                goto code_r0x0001c7d6;
                            }
                            if (uVar8 == 0x2c800000) {
                                iVar5 = (uVar9 != 0) + 0x28;
                            }
                            else {
                                if (uVar8 != 0x48000000) {
                                    if (uVar8 != 0x4c000000) {
                                        if (uVar8 == 0x50800000) {
                                            iVar5 = 0x2f;
                                            if (uVar9 != 0x100000) {
                                                iVar5 = 0x2e;
                                            }
                                            *piVar1 = iVar5;
                                        }
                                        else {
                                            if (uVar8 == 0x48800000) {
                                                *piVar1 = 0x42;
                                                goto code_r0x0001c7d6;
                                            }
                                            if (uVar8 == 0x5c800000) {
                                                *piVar1 = 0x43;
                                                goto code_r0x0001c7d6;
                                            }
                                            if (uVar8 == 0x44000000) {
                                                *piVar1 = 0x44;
                                                goto code_r0x0001c7d6;
                                            }
                                            if (uVar8 == 0x50000000) {
                                                *(arg1 + 0x2ad4) = 1;
                                                if (uVar9 == 0) {
                                                    *piVar1 = 0x3a;
                                                    goto code_r0x0001c7d6;
                                                }
                                                iVar5 = (uVar9 != 0x100000) + 0x3b;
                                                goto code_r0x0001c2d9;
                                            }
                                            if (uVar8 != 0x54000000) {
                                                if (uVar8 == 0x54800000) {
                                                    *piVar1 = 0x3d;
                                                    if (((uVar3 & 0xff0000) == 0x10000) && ((uVar4 & 0x78) == 0x78)) {
                                                        uVar7 = 1;
                                                    }
                                                    *(arg1 + 0x2e39) = uVar7;
                                                }
                                                else if (uVar8 == 0x60800000) {
                                                    if (uVar9 == 0) {
                                                        *piVar1 = 0x3e;
                                                    }
                                                    else if (uVar9 == 0x100000) {
                                                        *piVar1 = 0x3f;
                                                    }
                                                    uVar2 = fcn.00015b30(arg1,0xe4,0);
                                                    if (((uVar2 & 0xff0000) - 0x20000 & 0xfffdffff) == 0) {
                                                        *(arg1 + 0x2b44) = 0xf;
                                                    }
                                                }
                                                else if ((uVar8 == 0x64000000) && (uVar9 == 0x100000)) {
                                                    *piVar1 = 0x41;
                                                }
                                                goto code_r0x0001c7d6;
                                            }
                                            *piVar1 = (uVar9 != 0) + 0x30;
                                        }
                                        uVar2 = fcn.00015b30(arg1,0xe4,0);
                                        *(arg1 + 0x2e38) = (uVar2 & 0xff0000) == 0x100000;
                                        goto code_r0x0001c7d6;
                                    }
                                    iVar5 = (uVar9 != 0) + 0x2c;
                                    goto code_r0x0001c2d9;
                                }
                                iVar5 = (uVar9 != 0) + 0x2a;
                            }
                            goto code_r0x0001c2cd;
                        }
                        *(arg1 + 0x2ad4) = 1;
                        if (uVar9 == 0) {
                            *piVar1 = 0x36;
                            goto code_r0x0001c7d6;
                        }
                        if (uVar9 == 0x100000) {
                            *piVar1 = 0x37;
                            goto code_r0x0001c7d6;
                        }
                        iVar5 = (uVar9 != 0x200000) + 0x38;
                    }
                    goto code_r0x0001c2d9;
                }
                if (uVar9 != 0x600000) {
                    if (uVar9 == 0x500000) goto code_r0x0001c3b4;
                    if ((uVar9 - 0x300000 & 0xffefffff) == 0) goto code_r0x0001c3cc;
                    if (uVar9 == 0x200000) goto code_r0x0001c3df;
                    if (uVar9 == 0x100000) goto code_r0x0001c3f2;
                    if (uVar9 == 0) {
                        *piVar1 = 0x13;
                        goto code_r0x0001c7d6;
                    }
                }
            }
            *piVar1 = 0x18;
            goto code_r0x0001c7d6;
        }
        *piVar1 = 7;
    }
    *(arg1 + 0x2ad4) = 1;
code_r0x0001c7d6:
    return *piVar1 != 0;
}


/* fcn.00021bdc @ 0x21bdc */

void fcn.00021bdc(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uchar uVar3;
    uint8_t extraout_AH;
    uint16_t uVar4;
    int iVar5;
    uint uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    ulong uVar11;
    uchar uVar12;
    uint64_t noname_2;
    bool bVar13;
    
    *(arg1 + 10) = *(arg1 + 0x74);
    *(arg1 + 0xc) = *(arg1 + 0x76);
    *(arg1 + 0xe) = *(arg1 + 0xa0);
    *(arg1 + 0x10) = *(arg1 + 0xa2);
    *(arg1 + 0x12) = *(arg1 + 0x7c);
    *(arg1 + 0x2e32) = 0;
    uVar12 = 0;
    *(arg1 + 0x2e34) = 0;
    iVar5 = *(arg1 + 0x2b18);
    if (iVar5 < 0x18) {
        if (iVar5 != 0x17) {
            if (iVar5 < 0xc) {
                if (iVar5 != 0xb) {
                    if (((((iVar5 != 1) && (iVar5 != 2)) && (iVar5 != 3)) && ((iVar5 != 4 && (iVar5 != 5)))) &&
                       (iVar5 != 6)) {
                        bVar13 = iVar5 == 10;
                        goto code_r0x00021ce3;
                    }
                    *(arg1 + 0x2e34) = 1;
                    goto code_r0x00021cfe;
                }
            }
            else if ((iVar5 != 0xc) && (iVar5 != 0xd)) {
                iVar9 = iVar5 + -0x12;
                goto code_r0x00021c97;
            }
        }
code_r0x00021cf7:
        *(arg1 + 0x2e32) = 1;
    }
    else {
        if (iVar5 < 0x20) {
            if (((iVar5 != 0x1f) && (iVar5 != 0x18)) && (iVar5 != 0x19)) {
                iVar9 = iVar5 + -0x1a;
code_r0x00021c97:
                if (((iVar9 != 0) && (iVar9 != 1)) && ((iVar9 != 2 && (iVar9 != 3)))) {
                    bVar13 = iVar9 == 4;
                    goto code_r0x00021ce3;
                }
            }
            goto code_r0x00021cf7;
        }
        if ((iVar5 == 0x20) || (iVar5 == 0x21)) goto code_r0x00021cf7;
        if ((iVar5 == 0x3e) || ((iVar5 == 0x3f || (iVar5 == 0x41)))) {
            *(arg1 + 0x2e35) = 1;
        }
        else {
            bVar13 = iVar5 == 0x44;
code_r0x00021ce3:
            if (bVar13) goto code_r0x00021cf7;
            *(arg1 + 0x2e33) = 1;
        }
    }
code_r0x00021cfe:
    *(arg1 + 0x2b28) = 1;
    if ((((iVar5 == 0x2a) || (iVar5 == 0x2b)) || (iVar5 == 0x42)) || (uVar3 = uVar12, iVar5 == 0x44)) {
        uVar3 = 1;
    }
    *(arg1 + 0x2b29) = uVar3;
    if (iVar5 < 0x3c) {
        if (iVar5 == 0x3b) goto code_r0x00021d48;
        if (((iVar5 == 0x36) || (iVar5 == 0x37)) || ((iVar5 == 0x38 || (iVar5 == 0x39)))) {
            *(arg1 + 0x2e5b) = 1;
            *(arg1 + 0x2b3c) = 1;
        }
        else if (iVar5 == 0x3a) goto code_r0x00021d48;
code_r0x00021d56:
        if (((iVar5 != 0x36) && (iVar5 != 0x37)) && (iVar5 != 0x38)) goto code_r0x00021d67;
        iVar5 = *(arg1 + 0x2b18);
        uVar3 = 1;
    }
    else {
        if (iVar5 == 0x3c) {
code_r0x00021d48:
            *(arg1 + 0x2b3c) = 2;
            *(arg1 + 0x2e5b) = 2;
            goto code_r0x00021d56;
        }
        if (iVar5 != 0x3d) {
            if (((iVar5 != 0x3e) && (iVar5 != 0x3f)) || (*(arg1 + 0x2b44) != 0xf)) goto code_r0x00021d56;
            goto code_r0x00021d48;
        }
        *(arg1 + 0x2e5b) = 3;
        *(arg1 + 0x2b3c) = 3;
code_r0x00021d67:
        uVar3 = uVar12;
    }
    *(arg1 + 0x2e41) = uVar3;
    if ((iVar5 == 0x3d) && ((*(arg1 + 0xe) == 0x1849 || (*(arg1 + 0x10) == -0x7e98)))) {
        fcn.000151ac(arg1,0x7f000,0x68);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(2000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),2000);
        }
        iVar5 = fcn.0001511c(arg1,100);
        if (iVar5 == -1) {
            *(arg1 + 0x2e5b) = 0;
        }
    }
    cVar1 = *(arg1 + 0x2e5b);
    if (cVar1 == '\0') {
        *(arg1 + 0x2e59) = 0;
    }
    else {
        if (cVar1 == '\x02') {
            uVar2 = fcn.0002a5a0(arg1,0x128);
        }
        else if (cVar1 == '\x01') {
            iVar5 = *(arg1 + 0x2b18);
            if (((iVar5 == 0x36) || (iVar5 == 0x37)) || (uVar4 = 0xb8, iVar5 == 0x38)) {
                uVar4 = 0x10;
            }
            fcn.0002a6dc(arg1,uVar4);
            uVar2 = extraout_AH >> 7;
        }
        else {
            if (cVar1 != '\x03') goto code_r0x00021e9d;
            uVar2 = fcn.0002a84c(arg1,0x128);
        }
        *(arg1 + 0x2e59) = uVar2 & 1;
    }
code_r0x00021e9d:
    if (*(arg1 + 0x2e59) != '\0') {
        *(arg1 + 0x2e41) = 0;
    }
    uVar10 = *(arg1 + 0x2b18);
    if (uVar10 < 0x3b) {
        if (((((uVar10 != 0x3a) && (uVar10 != 0x21)) && (uVar10 != 0x2c)) && ((uVar10 != 0x2d && (uVar10 != 0x2e)))) &&
           ((uVar10 != 0x2f && (uVar10 != 0x30)))) {
            bVar13 = uVar10 == 0x31;
            goto code_r0x00021f02;
        }
code_r0x00021f07:
        uVar3 = 1;
    }
    else {
        if (((uVar10 == 0x3b) || (uVar10 == 0x3c)) ||
           ((uVar10 == 0x3d || (((uVar10 == 0x3e || (uVar10 == 0x3f)) || (uVar10 == 0x41)))))) goto code_r0x00021f07;
        bVar13 = uVar10 == 0x43;
code_r0x00021f02:
        uVar3 = uVar12;
        if (bVar13) goto code_r0x00021f07;
    }
    *(arg1 + 0x2b32) = uVar3;
    *(arg1 + 0x2b34) = 0;
    if (uVar10 < 0x3b) {
        if (((uVar10 != 0x3a) && (uVar10 != 0x21)) &&
           ((((uVar10 != 0x2c && ((uVar10 != 0x2d && (uVar10 != 0x2e)))) && (uVar10 != 0x2f)) && (uVar10 != 0x30)))) {
            bVar13 = uVar10 == 0x31;
            goto code_r0x00021f65;
        }
code_r0x00021f6a:
        uVar3 = 1;
    }
    else {
        if ((((uVar10 == 0x3b) || (uVar10 == 0x3c)) || (uVar10 == 0x3d)) ||
           (((uVar10 == 0x3e || (uVar10 == 0x3f)) || (uVar10 == 0x41)))) goto code_r0x00021f6a;
        bVar13 = uVar10 == 0x43;
code_r0x00021f65:
        uVar3 = uVar12;
        if (bVar13) goto code_r0x00021f6a;
    }
    *(arg1 + 0x2b33) = uVar3;
    if (((uVar10 == 0x30) || (uVar10 == 0x31)) || (uVar10 == 0x3d)) {
        *(arg1 + 0x2b39) = 0x101;
    }
    else if (((uVar10 == 0x3e) || (uVar10 == 0x3f)) || (uVar10 == 0x41)) {
        *(arg1 + 0x2b39) = 0x201;
    }
    else {
        *(arg1 + 0x2b39) = 0;
    }
    if (((uVar10 == 0x2a) || (uVar10 == 0x2b)) || ((uVar10 == 0x42 || (uVar8 = uVar10, uVar10 == 0x44)))) {
        uVar8 = *(arg1 + 0x2b18);
        *(arg1 + 0x2b29) = 1;
    }
    if (((uVar10 == 0x3e) || (uVar10 == 0x3f)) || (uVar10 == 0x41)) {
        uVar4 = fcn.0001620c(arg1,0xeb58);
        fcn.00016134(arg1,0xeb58,uVar4 & 0xfffe);
        uVar11 = 0;
        uVar3 = fcn.000150bc(arg1,0x47);
        fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar3) & 0xfffffffffffffffe,0x47);
        uVar11 = 0;
        uVar3 = fcn.000150bc(arg1,0x46);
        fcn.0001514c(arg1,CONCAT71(uVar11 >> 8,uVar3) & 0xffffffffffffffdf,0x46);
        uVar8 = *(arg1 + 0x2b18);
        uVar10 = uVar8;
    }
    uVar7 = uVar10;
    *(arg1 + 0x2e70) = 0;
    uVar4 = *(arg1 + 0xe);
    noname_2 = uVar4;
    if ((uVar10 == 0x3d) && (uVar4 == 0x1849)) {
        if ((*(arg1 + 0x10) == -0x7e98) && (*(arg1 + 0x12) == 0x1a)) {
            *(arg1 + 0x2e70) = 1;
            uVar4 = 0x1849;
            goto code_r0x000220aa;
        }
    }
    else {
        if (uVar4 == 0x1170) {
            if (*(arg1 + 0x10) != 0x612) goto code_r0x0002213a;
            uVar8 = *(arg1 + 0x2b18);
            uVar10 = uVar8 - 0x30;
            uVar7 = uVar10;
            if ((uVar10 == 0) || (uVar10 == 1)) {
                *(arg1 + 0x2e74) = 1;
                goto code_r0x00022107;
            }
code_r0x00022227:
            if (uVar4 != 0x103c) goto code_r0x0002213a;
            if ((*(arg1 + 0x10) != 0x17e2) && (*(arg1 + 0x10) != 0x2344)) {
                bVar13 = *(arg1 + 0x10) == -0x7ba8;
code_r0x0002224c:
                if (!bVar13) goto code_r0x0002213a;
            }
        }
        else {
code_r0x000220aa:
            if (uVar4 == 0x1028) {
                if (*(arg1 + 0x10) != 0x80c) {
                    bVar13 = *(arg1 + 0x10) == 0xae8;
                    goto code_r0x0002224c;
                }
            }
            else {
code_r0x00022107:
                if (uVar4 != 0x1259) goto code_r0x00022227;
                uVar7 = 5;
                if (5 < *(arg1 + 0x10) + 0xcff0U) goto code_r0x0002213a;
            }
        }
        if ((uVar8 == 0x30) || (uVar8 == 0x31)) {
            *(arg1 + 0x2e74) = 1;
        }
    }
code_r0x0002213a:
    iVar5 = 0;
    if (*(arg1 + 0x2e74) != 0) {
        uVar6 = fcn.0002a4cc(arg1,uVar7,noname_2,0x103c);
        *(arg1 + 0x2e78) = uVar6;
        iVar5 = *(arg1 + 0x2e74);
    }
    if (iVar5 != 1) goto code_r0x00022180;
    if (*(arg1 + 0xe) == 0x103c) {
        if (((*(arg1 + 0x10) == 0x17e2) || (*(arg1 + 0x10) == 0x2344)) || (*(arg1 + 0x10) == -0x7ba8))
        goto code_r0x00022178;
    }
    else if (*(arg1 + 0xe) == 0x1259) {
code_r0x00022178:
        uVar12 = 1;
    }
    *(arg1 + 0x2e7c) = uVar12;
code_r0x00022180:
    iVar5 = *(arg1 + 0x2b18);
    uVar4 = 0xffff;
    *(arg1 + 0x2e88) = 0;
    if (((iVar5 == 0x3e) || (iVar5 == 0x3f)) || ((iVar5 == 0x40 || (iVar5 == 0x41)))) {
        fcn.000162a0(arg1,0xa436,0x801e);
        uVar4 = fcn.00016318(arg1,0xa438);
        iVar5 = *(arg1 + 0x2b18);
    }
    *(arg1 + 0x2e8c) = uVar4;
    if (*(arg1 + 0x2e8a) <= uVar4) {
        *(arg1 + 0x2e88) = 1;
    }
    *(arg1 + 0x2e80) = 0;
    if (iVar5 == 0x3f) {
        uVar7 = fcn.0001620c(arg1,0xd442);
        if (((uVar7 & 0x20) == 0) || (uVar7 = fcn.00016318(arg1,0xd068), (uVar7 & 2) == 0)) {
            *(arg1 + 0x2e80) = 0;
        }
        else {
            *(arg1 + 0x2e80) = 1;
        }
    }
    return;
}


/* fcn.000219cc @ 0x219cc */

void fcn.000219cc(int64_t arg1)

{
    uint16_t uVar1;
    uint8_t extraout_var;
    int iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    fcn.0001511c(arg1,0x8c);
    iVar2 = *(arg1 + 0x2b18);
    uVar5 = 0;
    if ((((iVar2 == 0x2a) || (iVar2 == 0x2b)) || (iVar2 == 0x42)) || (iVar2 == 0x44)) {
        *(arg1 + 0x2e7e) = extraout_var >> 4 & 1;
    }
    else {
        *(arg1 + 0x2e7e) = 0;
    }
    if (((iVar2 == 0x3a) || (iVar2 == 0x3b)) || ((iVar2 == 0x3c || (iVar2 == 0x3d)))) {
        *(arg1 + 0x2b36) = *(arg1 + 0x2e59) == '\x01';
    }
    fcn.000151ac(arg1,0xf02c,0x68);
    do {
        uVar5 = uVar5 + 1;
        iVar2 = fcn.0001511c(arg1,0x68);
        if (iVar2 < 0) break;
    } while (uVar5 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    uVar5 = fcn.0001511c(arg1,100);
    uVar4 = uVar5 >> 0x10;
    if (uVar5 == 0x1179) {
        if (uVar5 >> 0x10 == -0x700) {
            *(arg1 + 0x2b36) = 1;
        }
    }
    else if (uVar5 == 0x103c) {
        if (uVar4 < 0x8321) {
            if ((((uVar4 != 0x8320) && (uVar4 != 0x81e1)) && (uVar4 != 0x81e2)) &&
               ((uVar4 != 0x81e3 && (uVar4 != 0x81e4)))) {
                iVar2 = uVar4 - 0x81f1;
code_r0x00021af2:
                if (((iVar2 != 0) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) goto code_r0x00021b0a;
            }
        }
        else if (((uVar4 != 0x8321) && (uVar4 != 0x8322)) && (uVar4 != 0x8323)) {
            iVar2 = uVar4 - 0x832c;
            goto code_r0x00021af2;
        }
        *(arg1 + 0x2b3b) = 1;
    }
code_r0x00021b0a:
    iVar2 = *(arg1 + 0x2b18);
    if (iVar2 < 0x3b) {
        if (iVar2 == 0x3a) {
code_r0x00021b9d:
            uVar1 = fcn.0001620c(arg1,0xdc04);
            uVar3 = fcn.000150bc(arg1,0xf2);
            if ((uVar3 & 0x20) == 0) {
                return;
            }
            uVar1 = uVar1 >> 0xd;
            goto code_r0x00021bc3;
        }
        if (iVar2 < 0x2e) {
            if ((iVar2 != 0x2d) && (iVar2 != 0x28)) {
                iVar2 = iVar2 + -0x29;
                goto code_r0x00021b46;
            }
        }
        else {
            iVar2 = iVar2 + -0x2e;
code_r0x00021b46:
            if (iVar2 != 0) goto code_r0x00021b48;
        }
    }
    else {
        if (((((iVar2 == 0x3b) || (iVar2 == 0x3c)) || (iVar2 == 0x3d)) || ((iVar2 == 0x3e || (iVar2 == 0x3f)))) ||
           (iVar2 = iVar2 + -0x41, iVar2 == 0)) goto code_r0x00021b9d;
code_r0x00021b48:
        if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
            return;
        }
    }
    uVar1 = fcn.0001620c(arg1,0xdc04);
    uVar3 = fcn.000150bc(arg1,0xf2);
    if ((uVar3 & 0x20) == 0) {
        return;
    }
    uVar1 = uVar1 >> 9;
code_r0x00021bc3:
    if ((uVar1 & 1) == 0) {
        *(arg1 + 0x2b36) = 0x101;
    }
    return;
}


/* fcn.00024874 @ 0x24874 */

void fcn.00024874(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t uVar2;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(arg1_00 + 0x2b39) != '\0') {
        do {
            uVar1 = 0xff;
            if (*(arg1_00 + 0x2b39) != '\0') {
                if (*(arg1_00 + 0x2b3a) == '\x01') {
                    uVar1 = fcn.000163a4(arg1_00,0xa420);
                }
                else {
                    uVar1 = 0xff;
                    if (*(arg1_00 + 0x2b3a) != '\x02') goto code_r0x000248e3;
                    uVar1 = fcn.00016318(arg1_00,0xa420);
                }
                uVar1 = uVar1 & 7;
            }
code_r0x000248e3:
            if (*(arg1_00 + 0x2ace) == '0') {
                (**(arg1_00 + 0x2c68))(1000);
            }
            else {
                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),1000);
            }
            uVar2 = uVar2 + 2;
        } while ((uVar2 < 100) && (uVar1 != arg2));
    }
    return;
}


/* fcn.0002a054 @ 0x2a054 */

void fcn.0002a054(uint32_t arg1)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar3;
    int64_t iVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if ((*(arg1_00 + 0x2aec) == 0) && (*(arg1_00 + 0x2e70) == '\x01')) {
        uVar1 = fcn.000150ec(arg1_00,0x18);
        fcn.0001517c(arg1_00,0,0x18);
        fcn.000243a4(arg1_00);
        do {
            uVar3 = uVar3 + 1;
            (**(*0x35158 + 0xf8))(1000);
            uVar2 = fcn.000150bc(arg1_00,0x6c);
            if (1000 < uVar3) break;
        } while ((uVar2 & 2) == 0);
        iVar4 = 3000;
        do {
            if (*(arg1_00 + 0x2ace) == '0') {
                (**(arg1_00 + 0x2c68))(1000);
            }
            else {
                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),1000);
            }
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        fcn.0001517c(arg1_00,uVar1,0x18);
        fcn.00024518(arg1_00);
    }
    return;
}


/* fcn.00024938 @ 0x24938 */

void fcn.00024938(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = *(arg1 + 0x2b18);
    if (iVar1 < 0x3e) {
        if (iVar1 == 0x3d) {
code_r0x0002497c:
            fcn.00015d4c(arg1,0x174,0xff,0);
            fcn.00016134(arg1,0xe428,0x10);
            return;
        }
        if ((iVar1 == 0x2a) || (iVar1 == 0x2b)) {
            uVar2 = 0xe5a90000;
code_r0x00024a50:
            fcn.000151ac(arg1,uVar2,0xb0);
            uVar2 = 0xf2100010;
            goto code_r0x00024a5d;
        }
        if ((iVar1 != 0x2c) && (iVar1 != 0x2d)) {
            if ((iVar1 != 0x30) && (iVar1 != 0x31)) {
                return;
            }
            goto code_r0x0002497c;
        }
        fcn.000151ac(arg1,0x605e0000,0xb0);
        uVar2 = fcn.0001511c(arg1,0xb0);
        uVar2 = uVar2 & 0xfffe | 0xe05e0000;
    }
    else {
        if (((iVar1 == 0x3e) || (iVar1 == 0x3f)) || (iVar1 == 0x41)) goto code_r0x0002497c;
        if (iVar1 == 0x42) {
            fcn.000151ac(arg1,0xe5a90000,0xb0);
            uVar2 = 0xe4640000;
            goto code_r0x00024a50;
        }
        if (iVar1 != 0x43) {
            return;
        }
        uVar2 = 0xe05e00ff;
    }
    fcn.000151ac(arg1,uVar2,0xb0);
    fcn.000151ac(arg1,0xe9720000,0xb0);
    uVar2 = 0xf2140010;
code_r0x00024a5d:
    fcn.000151ac(arg1,uVar2,0xb0);
    return;
}


/* fcn.0002b100 @ 0x2b100 */

void fcn.0002b100(uint32_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong uVar9;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = 0;
    iVar4 = *(arg1_00 + 0x2b18);
    uVar7 = 0;
    if (((iVar4 == 0x36) || (iVar4 == 0x37)) || (iVar6 = 0xb8, iVar4 == 0x38)) {
        iVar6 = 0x10;
    }
    if (((iVar4 == 0x36) || (iVar4 == 0x37)) || ((iVar4 == 0x38 || (iVar4 == 0x39)))) {
        uVar9 = 0;
        fcn.00015c64(arg1_00,0xe8,5,0);
        fcn.0002a930(arg1_00,0x30,CONCAT71(uVar9 >> 8,1));
        do {
            if (*(arg1_00 + 0x2ace) == '0') {
                (**(arg1_00 + 0x2c68))(10);
            }
            else {
                (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),10);
            }
            uVar2 = fcn.0002a6dc(arg1_00,iVar6);
        } while (((uVar2 >> 0xb & 1) == 0) && (uVar7 = uVar7 + 1, uVar7 < 10));
    }
    if (*(arg1_00 + 0x2e59) != '\0') {
        iVar4 = *(arg1_00 + 0x2b18);
        if ((((iVar4 == 0x36) || (iVar4 == 0x37)) || (iVar4 == 0x38)) || (iVar4 == 0x39)) {
            iVar6 = CONCAT71(iVar4 >> 8,1);
            fcn.0002ad94(arg1,iVar6);
            fcn.0002b070(arg1,CONCAT71(iVar6 >> 8,1));
            iVar4 = *(arg1_00 + 0x2b18);
        }
        uVar7 = iVar4 - 0x36;
        uVar5 = uVar7;
        if ((uVar7 == 0) || (uVar7 == 1)) {
            fcn.0002af8c(arg1_00);
        }
        if (*(arg1_00 + 0x2e59) != '\0') {
            iVar4 = *(arg1_00 + 0x2b18);
            if (((iVar4 == 0x3a) || (iVar4 == 0x3b)) ||
               ((iVar4 == 0x3c || (((iVar4 == 0x3d || (iVar4 == 0x3e)) || (iVar4 == 0x3f)))))) {
                fcn.0002acb0(arg1_00,0x180,5);
                uVar7 = fcn.0002a84c(arg1_00,0x30);
                fcn.0002acb0(arg1_00,0x30,uVar7 | 1);
                do {
                    uVar5 = 0;
                    uVar3 = fcn.0002a84c(arg1_00,0x124);
                    if ((uVar3 & 1) != 0) break;
                    if (*(arg1_00 + 0x2ace) == '0') {
                        (**(arg1_00 + 0x2c68))(10000);
                    }
                    else {
                        uVar5 = 0;
                        (**(arg1_00 + 0x2c88))(*(arg1_00 + 0x2c50),10000);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < 10);
            }
            if (((*(arg1_00 + 0x2b18) == 0x3e) || (*(arg1_00 + 0x2b18) == 0x3f)) && (*(arg1_00 + 0x2b44) == 0xf)) {
                uVar1 = fcn.0002a5a0(arg1_00,CONCAT62(uVar5 >> 0x10,0x128));
                *(arg1_00 + 0x2b36) = uVar1 >> 4 & 1;
            }
        }
    }
    return;
}


/* fcn.00018434 @ 0x18434 */

ulong fcn.00018434(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    
    piVar1 = arg1 + 400;
    iVar9 = 4;
    (**(*(arg1 + 0x2c58) + 0x58))(*(arg1 + 0x2c58),0,4,1,piVar1,0);
    puVar2 = arg1 + 0x198;
    *(arg1 + 0x1b0) = 0x514;
    (**(*(arg1 + 0x2c58) + 0x48))(*(arg1 + 0x2c58),2,*piVar1,arg1 + 0x1b0,puVar2,arg1 + 0x1a8);
    *(arg1 + 0x208) = *piVar1;
    *puVar2 = *puVar2 + 0xff & 0xffffffffffffff00;
    fcn.0002e7c8(*piVar1,0x31c);
    *(arg1 + 0x218) = *piVar1;
    fcn.0002e7c8(*piVar1,0x378);
    iVar5 = *(arg1 + 0x2b18);
    if ((((iVar5 == 0x36) || (iVar5 == 0x37)) || (iVar5 == 0x38)) ||
       ((iVar5 == 0x39 || (((iVar5 != 0x3a && (iVar5 != 0x3b)) && ((iVar5 != 0x3c && (iVar5 != 0x3d)))))))) {
        piVar1 = arg1 + 0x1c8;
        uVar6 = (**(*(arg1 + 0x2c58) + 0x58))(*(arg1 + 0x2c58),0,4,1,piVar1,0);
        *(arg1 + 0x1e8) = 0x20e;
        (**(*(arg1 + 0x2c58) + 0x48))(*(arg1 + 0x2c58),2,*piVar1,arg1 + 0x1e8,arg1 + 0x1d0,arg1 + 0x1f0);
        iVar9 = *piVar1;
        *(arg1 + 0x1d0) = iVar9;
        *(arg1 + 0x1f8) = iVar9;
        fcn.0002e7c8(iVar9,0x10);
    }
    else {
        puVar3 = arg1 + 0x1c8;
        uVar6 = (**(*(arg1 + 0x2c58) + 0x58))(*(arg1 + 0x2c58),0,4,1,puVar3,0);
        puVar4 = arg1 + 0x1d0;
        *(arg1 + 0x1e8) = 0x998;
        (**(*(arg1 + 0x2c58) + 0x48))(*(arg1 + 0x2c58),2,*puVar3,arg1 + 0x1e8,puVar4,arg1 + 0x1f0);
        uVar10 = *puVar3 + 0xff & 0xffffffffffffff00;
        uVar8 = *puVar4 + 0xff & 0xffffffffffffff00;
        *puVar4 = uVar8;
        *puVar3 = uVar10;
        *(arg1 + 0x1f8) = uVar10;
        *(arg1 + 0x1e0) = uVar8 + 0x100;
        *(arg1 + 0x1d8) = uVar10 + 0x100;
        *(arg1 + 0x200) = uVar10 + 0x100;
        *(arg1 + 0x1c0) = uVar8 + 0x100;
        iVar7 = uVar10 + 0x100;
        *(arg1 + 0x1b8) = iVar7;
        *(arg1 + 0x210) = iVar7;
        fcn.0002e7c8(iVar7,0x51c);
        iVar7 = 0;
        iVar11 = iVar9;
        do {
            *(iVar7 + 4 + *(arg1 + 0x1f8)) = 0;
            *(iVar7 + 8 + *(arg1 + 0x1f8)) = *(arg1 + 0x1c0);
            *(iVar7 + 0xc + *(arg1 + 0x1f8)) = *(arg1 + 0x1c0) >> 0x20;
            *(iVar7 + *(arg1 + 0x1f8)) = 0x51c;
            iVar7 = iVar7 + 0x10;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        iVar7 = 0;
        do {
            *(iVar7 + 4 + *(arg1 + 0x200)) = 0;
            *(iVar7 + 8 + *(arg1 + 0x200)) = *puVar2;
            *(iVar7 + 0xc + *(arg1 + 0x200)) = *puVar2 >> 0x20;
            *(iVar7 + *(arg1 + 0x200)) = 0x80000514;
            iVar7 = iVar7 + 0x10;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(*(arg1 + 0x200) + 0x30) = 0xc0000000;
    }
    return uVar6;
}


/* fcn.000246d8 @ 0x246d8 */

void fcn.000246d8(uint32_t arg1)

{
    int iVar1;
    uint16_t extraout_AX;
    uint16_t extraout_AX_00;
    uint16_t extraout_AX_01;
    uint16_t extraout_AX_02;
    uint16_t extraout_AX_03;
    uint16_t extraout_AX_04;
    uint16_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar uVar3;
    unkbyte7 in_RDX;
    uint16_t uVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e7e) != '\0') {
        iVar1 = *(arg1_00 + 0x2b18);
        if (((iVar1 == 0x2a) || (iVar1 == 0x2b)) || (iVar1 == 0x42)) {
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1f),7);
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1e),0x2c);
            fcn.00015768(arg1,CONCAT71(in_RDX,0x16));
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x16),extraout_AX_03 | 0x400);
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1f),5);
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,5),0x8b80);
            fcn.00015768(arg1,CONCAT71(in_RDX,6));
            uVar4 = 0x80;
            uVar3 = 6;
            uVar2 = extraout_AX_04;
        }
        else {
            if (iVar1 != 0x44) {
                return;
            }
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1f),6);
            fcn.00015768(arg1,CONCAT71(in_RDX,0x1b));
            fcn.00015768(arg1,CONCAT71(in_RDX,0x1c));
            if ((extraout_AX != 0) && (extraout_AX_00 != 0xffff)) {
                fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x13),extraout_AX);
                fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x14),extraout_AX_00);
                fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1b),0);
                fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1c),0xffff);
            }
            fcn.00015768(arg1,CONCAT71(in_RDX,0x11));
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x11),extraout_AX_01 | 0x200);
            fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1f),1);
            fcn.00015768(arg1,CONCAT71(in_RDX,0x13));
            uVar4 = 0x8000;
            uVar3 = 0x13;
            uVar2 = extraout_AX_02;
        }
        fcn.000153ec(arg1_00,CONCAT71(in_RDX,uVar3),uVar4 | uVar2);
        fcn.000153ec(arg1_00,CONCAT71(in_RDX,0x1f),0);
    }
    return;
}


/* fcn.0001d9ec @ 0x1d9ec */

void fcn.0001d9ec(int64_t arg1)

{
    uint8_t uVar1;
    bool bVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t arg1_00;
    ulong uVar5;
    int64_t iVar6;
    
    uVar5 = 0;
    fcn.000150bc(arg1,0x6c);
    iVar6 = CONCAT71(uVar5 >> 8,0x1f);
    arg1_00 = arg1;
    if (*(arg1 + 0x2b33) == '\0') {
        fcn.000153ec(arg1,iVar6,0);
        iVar6 = CONCAT71(iVar6 >> 8,9);
        uVar3 = fcn.00015768(arg1_00,iVar6);
        iVar6 = CONCAT71(iVar6 >> 8,0x1f);
        fcn.000153ec(arg1,iVar6,0);
        iVar6 = CONCAT71(iVar6 >> 8,4);
        uVar4 = fcn.00015768(arg1_00,iVar6);
        if ((*(arg1 + 0x2e32) == '\0') && (*(arg1 + 0x2e38) == '\0')) {
            if (((uVar3 >> 9 & 1) == 0) || ((uVar4 & 0x1e0) == 0)) goto code_r0x0001daf7;
        }
        else if ((uVar4 & 0x1e0) != 0x1e0) {
            *(arg1 + 0x2b38) = 0;
            fcn.000153ec(arg1,CONCAT71(iVar6 >> 8,4),uVar4 | 0x1e0);
            return;
        }
        *(arg1 + 0x2b38) = 1;
    }
    else {
        fcn.000153ec(arg1,iVar6,0xa41);
        iVar6 = CONCAT71(iVar6 >> 8,0x11);
        uVar3 = fcn.00015768(arg1_00,iVar6);
        iVar6 = CONCAT71(iVar6 >> 8,0x1f);
        fcn.000153ec(arg1,iVar6,0xa40);
        iVar6 = CONCAT71(iVar6 >> 8,0x14);
        uVar4 = fcn.00015768(arg1_00,iVar6);
        if (((uVar3 >> 9 & 1) == 0) || ((uVar4 & 0x1e0) != 0x1e0)) {
            if ((*(arg1 + 0x2e38) == '\0') && (*(arg1 + 0x2e32) == '\0')) {
code_r0x0001daf7:
                *(arg1 + 0x2b38) = 0;
                return;
            }
            bVar2 = (uVar4 & 0x1e0) == 0x1e0;
        }
        else {
            *(arg1 + 0x2b38) = 1;
            if (*(arg1 + 0x2e35) != '\x01') {
                return;
            }
            uVar1 = fcn.00016318(arg1,CONCAT62(iVar6 >> 0x10,0xa5d4));
            bVar2 = uVar1 >> 7;
        }
        *(arg1 + 0x2b38) = bVar2;
    }
    return;
}


/* fcn.0001db38 @ 0x1db38 */

//WARNING: Variable defined which should be unmapped: var_1ah
//WARNING: Variable defined which should be unmapped: var_43h
//WARNING: Variable defined which should be unmapped: var_2h

void fcn.0001db38(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    char cVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint64_t in_RDX;
    unkbyte7 Var16;
    int64_t iVar14;
    ulong uVar15;
    uint64_t uVar17;
    uint64_t uVar18;
    int32_t var_ch;
    int32_t var_1ah;
    int32_t var_43h;
    int32_t in_stack_00000068;
    int32_t var_2h;
    
    iVar1 = *(arg1 + 0x2b18);
    Var16 = in_RDX >> 8;
    uVar12 = arg1;
    if (iVar1 < 0x27) {
        if (iVar1 != 0x26) {
            if (iVar1 < 0x18) {
                if (iVar1 == 0x17) {
code_r0x0001dd57:
                    in_RDX = 0x32d10;
                }
                else {
                    if (iVar1 < 0x11) {
                        if (iVar1 != 0x10) {
                            if (iVar1 == 7) {
                                in_RDX = 0x32f80;
                            }
                            else if ((iVar1 == 8) || (iVar1 == 9)) {
code_r0x0001dcbd:
                                in_RDX = 0x32e80;
                            }
                            else if (iVar1 == 10) {
                                in_RDX = 0x330d0;
                            }
                            else {
                                if (iVar1 == 0xb) goto code_r0x0001dcbd;
                                if (iVar1 != 0xe) {
                                    if (iVar1 != 0xf) goto code_r0x00020e16;
                                    fcn.0001d908(arg1,0x33000);
                                    fcn.0001d908(arg1,0x33120);
                                    fcn.0001d908(arg1,0x32e70);
                                    fcn.0001d908(arg1,0x32fe0);
                                    iVar14 = 0x32da0;
                                    goto code_r0x0001dc19;
                                }
                                fcn.0001d908(arg1,0x32ed0);
                                fcn.0001d908(arg1,0x33080);
                                fcn.0001d908(arg1,0x33120);
                                fcn.0001d908(arg1,0x330b0);
                                fcn.0001d908(arg1,0x32ec0);
                                fcn.0001d908(arg1,0x32d90);
                                in_RDX = 0x32f60;
                            }
                            goto code_r0x0001e41c;
                        }
                        fcn.0001d908(arg1,0x33000);
                        fcn.0001d908(arg1,0x33120);
                        fcn.0001d908(arg1,0x32e70);
                        iVar14 = 0x32fe0;
                    }
                    else {
                        if (iVar1 != 0x11) {
                            if (((iVar1 == 0x12) || (iVar1 == 0x13)) || ((iVar1 == 0x14 || (iVar1 == 0x15)))) {
                                fcn.0001d908(arg1,0x32d80);
                                iVar14 = 0x32fa0;
                            }
                            else {
                                if (iVar1 != 0x16) goto code_r0x00020e16;
                                iVar14 = 0x32d80;
                            }
                            fcn.0001d908(arg1,iVar14);
                            goto code_r0x0001dd57;
                        }
                        fcn.0001d908(arg1,0x33000);
                        fcn.0001d908(arg1,0x33120);
                        fcn.0001d908(arg1,0x32e70);
                        iVar14 = 0x330a0;
                    }
code_r0x0001dc19:
                    fcn.0001d908(arg1,iVar14);
                    fcn.0001d908(arg1,0x330f0);
                    fcn.0001d908(arg1,0x33020);
                    in_RDX = 0x32d70;
                }
code_r0x0001e41c:
                fcn.0001d908(arg1,in_RDX);
            }
            else {
                if (iVar1 < 0x20) {
                    if (iVar1 == 0x1f) goto code_r0x0001e429;
                    if (iVar1 == 0x18) goto code_r0x0001dd57;
                    in_RDX = iVar1 - 0x1aU;
                    if (((iVar1 - 0x1aU != 0) && (in_RDX = iVar1 - 0x1bU, iVar1 - 0x1bU != 0)) &&
                       (in_RDX = iVar1 - 0x1cU, iVar1 - 0x1cU != 0)) {
                        uVar13 = iVar1 - 0x1d;
                        in_RDX = uVar13;
                        if ((uVar13 != 0) && (uVar13 != 1)) goto code_r0x00020e16;
                    }
                    if (iVar1 == 0x1e) {
                        in_RDX = 0;
                        uVar2 = fcn.000150bc(arg1,0xef);
                        if ((uVar2 & 4) != 0) {
                            iVar14 = CONCAT71(in_RDX >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,1);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1b);
                            uVar4 = fcn.00015768(uVar12,iVar14);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1b);
                            fcn.000153ec(arg1,iVar14,uVar4 | 4);
                            in_RDX = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,in_RDX,0);
                        }
                    }
                    if (*(arg1 + 0x2b18) != 0x1a) {
                        iVar14 = CONCAT71(in_RDX >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1a);
                        uVar4 = fcn.00015768(uVar12,iVar14);
                        in_RDX = CONCAT71(iVar14 >> 8,0x1a);
                        fcn.000153ec(arg1,in_RDX,uVar4 & 0xbfff);
                    }
                    iVar14 = CONCAT71(in_RDX >> 8,0x1f);
                    fcn.000153ec(arg1,iVar14,0);
                    fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x18),0x310);
                    if (*(arg1 + 0x2ace) == '0') {
                        (**(arg1 + 0x2c68))(10000);
                    }
                    else {
                        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10000);
                    }
                    uVar12 = fcn.00015b30(arg1,0x1b0,0);
                    uVar15 = 0x1b0;
                    fcn.000159b0(arg1,0x1b0,uVar12 & 0xffff0000,0,in_stack_00000068);
                }
                else {
                    if (iVar1 != 0x20) {
                        if (iVar1 == 0x21) goto code_r0x0001e4f6;
                        if (iVar1 == 0x22) {
                            fcn.0001d908(arg1,0x32dd0);
                            fcn.0001d908(arg1,0x32ce0);
                            fcn.0001d908(arg1,0x32e98);
                            fcn.0001d908(arg1,0x32f18);
                            fcn.0001d908(arg1,0x32fc0);
                            in_RDX = 0x32f08;
                            goto code_r0x0001e41c;
                        }
                        if (iVar1 == 0x23) {
                            fcn.0001d908(arg1,0x33030);
                            fcn.0001d908(arg1,0x32ce0);
                            fcn.0001d908(arg1,0x32ef0);
                            fcn.0001d908(arg1,0x32f30);
                            uVar15 = 0x32f08;
                            fcn.0001d908(arg1,0x32f08);
                            cVar3 = fcn.0001d838(arg1);
                            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                            if (cVar3 == -0x4f) {
                                fcn.000153ec(arg1,iVar14,2);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x669a);
                                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                                fcn.000153ec(arg1,iVar14,5);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x8330);
                                iVar14 = CONCAT71(iVar14 >> 8,6);
                                fcn.000153ec(arg1,iVar14,0x669a);
                                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                                fcn.000153ec(arg1,iVar14,2);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                uVar4 = fcn.00015768(uVar12,iVar14);
                                if (uVar4 == 'l') goto code_r0x0001e3b2;
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff65 | 0x65);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff66 | 0x66);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff67 | 0x67);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff68 | 0x68);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff69 | 0x69);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff6a | 0x6a);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                fcn.000153ec(arg1,iVar14,uVar4 & 0xff6b | 0x6b);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                uVar12 = uVar4 & 0xff6c | 0x6c;
                            }
                            else {
                                fcn.000153ec(arg1,iVar14,2);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x6662);
                                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                                fcn.000153ec(arg1,iVar14,5);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x8330);
                                uVar12 = 0x6662;
                                iVar14 = CONCAT71(iVar14 >> 8,6);
                            }
                            fcn.000153ec(arg1,iVar14,uVar12);
                        }
                        else {
                            if (iVar1 != 0x24) {
                                if (iVar1 != 0x25) goto code_r0x00020e16;
                                goto code_r0x0001df66;
                            }
                            fcn.0001d908(arg1,0x33030);
                            fcn.0001d908(arg1,0x32ef0);
                            fcn.0001d908(arg1,0x32f30);
                            fcn.0001d908(arg1,0x32f08);
                            uVar15 = 0x32e20;
                            fcn.0001d908(arg1,0x32e20);
                            cVar3 = fcn.0001d838(arg1);
                            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                            if (cVar3 == -0x4f) {
                                fcn.000153ec(arg1,iVar14,2);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x669a);
                                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                                fcn.000153ec(arg1,iVar14,5);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x8330);
                                iVar14 = CONCAT71(iVar14 >> 8,6);
                                fcn.000153ec(arg1,iVar14,0x669a);
                                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                                fcn.000153ec(arg1,iVar14,2);
                                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                uVar4 = fcn.00015768(uVar12,iVar14);
                                if (uVar4 != 'l') {
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff65 | 0x65);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff66 | 0x66);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff67 | 0x67);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff68 | 0x68);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff69 | 0x69);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff6a | 0x6a);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    fcn.000153ec(arg1,iVar14,uVar4 & 0xff6b | 0x6b);
                                    iVar14 = CONCAT71(iVar14 >> 8,0xd);
                                    uVar12 = uVar4 & 0xff6c | 0x6c;
                                    goto code_r0x0001e1a3;
                                }
                            }
                            else {
                                fcn.000153ec(arg1,iVar14,2);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x2642);
                                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                                fcn.000153ec(arg1,iVar14,5);
                                iVar14 = CONCAT71(iVar14 >> 8,5);
                                fcn.000153ec(arg1,iVar14,0x8330);
                                uVar12 = 0x2642;
                                iVar14 = CONCAT71(iVar14 >> 8,6);
code_r0x0001e1a3:
                                fcn.000153ec(arg1,iVar14,uVar12);
                            }
                            fcn.0001d908(arg1,0x32d30);
                        }
code_r0x0001e3b2:
                        fcn.0001d908(arg1,0x32eb0);
                        in_RDX = 0x33090;
                        goto code_r0x0001e41c;
                    }
code_r0x0001e429:
                    fcn.000153ec(arg1,CONCAT71(Var16,0x1f),0);
                    fcn.000153ec(arg1,0x18,0x310);
                    if (*(arg1 + 0x2ace) == '0') {
                        (**(arg1 + 0x2c68))(10000);
                    }
                    else {
                        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10000);
                    }
                    uVar12 = fcn.00015b30(arg1,0x1b0,0);
                    uVar15 = 0x1b0;
                    fcn.000159b0(arg1,0x1b0,uVar12 & 0xffff0000,0,in_stack_00000068);
                }
                iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,4);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                fcn.000153ec(arg1,iVar14,0x401f);
                iVar14 = CONCAT71(iVar14 >> 8,0x19);
                fcn.000153ec(arg1,iVar14,0x7030);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
                uVar12 = fcn.00015b30(arg1,0x1d0,0);
                in_RDX = 0x1d0;
                fcn.000159b0(arg1,0x1d0,uVar12 & 0xffff0000,0,in_stack_00000068);
            }
            goto code_r0x00020e16;
        }
code_r0x0001df66:
        iVar14 = CONCAT71(Var16,0x1f);
        fcn.000153ec(arg1,iVar14,7);
        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
        fcn.000153ec(arg1,iVar14,0x23);
        iVar14 = CONCAT71(iVar14 >> 8,0x17);
        fcn.000153ec(arg1,iVar14,0x117);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(20000);
        }
        else {
            iVar14 = 20000;
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),20000);
        }
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,0);
        iVar14 = CONCAT71(iVar14 >> 8,0x15);
        fcn.000153ec(arg1,iVar14,6);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,7);
        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
        fcn.000153ec(arg1,iVar14,0x23);
        iVar14 = CONCAT71(iVar14 >> 8,0x17);
        uVar4 = fcn.00015768(uVar12,iVar14);
        iVar14 = CONCAT71(iVar14 >> 8,0x17);
        fcn.000153ec(arg1,iVar14,uVar4 & 0xfffe);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,0);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,5);
        iVar14 = CONCAT71(iVar14 >> 8,5);
        fcn.000153ec(arg1,iVar14,0x8b85);
        iVar14 = CONCAT71(iVar14 >> 8,6);
        uVar4 = fcn.00015768(uVar12,iVar14);
        iVar14 = CONCAT71(iVar14 >> 8,6);
        fcn.000153ec(arg1,iVar14,uVar4 & 0xdfff);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,7);
code_r0x0001e91e:
        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
        fcn.000153ec(arg1,iVar14,0x20);
        iVar14 = CONCAT71(iVar14 >> 8,0x15);
        uVar4 = fcn.00015768(uVar12,iVar14);
        iVar14 = CONCAT71(iVar14 >> 8,0x15);
        uVar12 = uVar4 & 0xeeff;
code_r0x0001f134:
        fcn.000153ec(arg1,iVar14,uVar12);
        in_RDX = CONCAT71(iVar14 >> 8,0x1f);
    }
    else {
        if (iVar1 < 0x36) {
            if (iVar1 == 0x35) {
                fcn.0001d908(arg1,0x32e40);
                fcn.0001d908(arg1,0x32f70);
                in_RDX = 0x32e00;
                goto code_r0x0001e41c;
            }
            if (iVar1 < 0x2f) {
                if (iVar1 != 0x2e) {
                    if (iVar1 == 0x27) goto code_r0x0001df66;
                    if ((iVar1 == 0x28) || (iVar1 == 0x29)) {
                        iVar14 = CONCAT71(Var16,0x1f);
                        fcn.000153ec(arg1,iVar14,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x15);
                        uVar4 = fcn.00015768(uVar12,iVar14);
                        if ((uVar4 >> 0xc & 1) != 0) {
                            fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
                            uVar15 = 0;
                            fcn.000153ec(arg1,0,0x1800);
                            iVar14 = CONCAT71(uVar15 >> 8,0x15);
                            uVar4 = fcn.00015768(uVar12,iVar14);
                            fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x15),uVar4 & 0xefff);
                            uVar15 = 0;
                            fcn.000153ec(arg1,0,0x4800);
                            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,7);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                            fcn.000153ec(arg1,iVar14,0x2f);
                            uVar18 = 0;
                            uVar17 = uVar18;
                            do {
                                iVar14 = CONCAT71(iVar14 >> 8,0x1c);
                                uVar4 = fcn.00015768(uVar12,iVar14);
                                if (*(arg1 + 0x2ace) == '0') {
                                    (**(arg1 + 0x2c68))(100);
                                }
                                else {
                                    iVar14 = 0;
                                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                                }
                                uVar17 = uVar17 + 1;
                            } while (((uVar4 & 0x80) == 0) && (uVar17 < 1000));
                            fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
                            uVar15 = 0;
                            fcn.000153ec(arg1,0,0x1800);
                            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,7);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                            fcn.000153ec(arg1,iVar14,0x23);
                            do {
                                iVar14 = CONCAT71(iVar14 >> 8,0x17);
                                uVar4 = fcn.00015768(uVar12,iVar14);
                                if (*(arg1 + 0x2ace) == '0') {
                                    (**(arg1 + 0x2c68))(100);
                                }
                                else {
                                    iVar14 = 0;
                                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),100);
                                }
                                uVar18 = uVar18 + 1;
                            } while (((uVar4 & 1) != 0) && (uVar18 < 200));
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,7);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                            fcn.000153ec(arg1,iVar14,0x23);
                            iVar14 = CONCAT71(iVar14 >> 8,0x17);
                            uVar4 = fcn.00015768(uVar12,iVar14);
                            iVar14 = CONCAT71(iVar14 >> 8,0x17);
                            fcn.000153ec(arg1,iVar14,uVar4 | 1);
                            fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
                            uVar15 = 0;
                            fcn.000153ec(arg1,0,0x1140);
                            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,7);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                            fcn.000153ec(arg1,iVar14,0x23);
                            iVar14 = CONCAT71(iVar14 >> 8,0x16);
                            fcn.000153ec(arg1,iVar14,6);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,2);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,0);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,0);
                            iVar14 = CONCAT71(iVar14 >> 8,0x15);
                            fcn.000153ec(arg1,iVar14,6);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,4);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,7);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                            fcn.000153ec(arg1,iVar14,0x23);
                            iVar14 = CONCAT71(iVar14 >> 8,0x16);
                            fcn.000153ec(arg1,iVar14,0x306);
                            iVar14 = CONCAT71(iVar14 >> 8,0x16);
                            fcn.000153ec(arg1,iVar14,0x300);
                            iVar14 = CONCAT71(iVar14 >> 8,0x17);
                            uVar4 = fcn.00015768(uVar12,iVar14);
                            iVar14 = CONCAT71(iVar14 >> 8,0x17);
                            fcn.000153ec(arg1,iVar14,uVar4 & 0xfffe);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,2);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,0);
                        }
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,5);
                        iVar14 = CONCAT71(iVar14 >> 8,5);
                        fcn.000153ec(arg1,iVar14,0x8b85);
                        iVar14 = CONCAT71(iVar14 >> 8,6);
                        uVar4 = fcn.00015768(uVar12,iVar14);
                        iVar14 = CONCAT71(iVar14 >> 8,6);
                        fcn.000153ec(arg1,iVar14,uVar4 & 0xdfff);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,7);
                        goto code_r0x0001e91e;
                    }
                    if ((iVar1 == 0x2a) || (iVar1 == 0x2b)) goto code_r0x0001fc7f;
                    if ((iVar1 != 0x2c) && (iVar1 != 0x2d)) goto code_r0x00020e16;
                }
code_r0x0001e4f6:
                iVar14 = CONCAT71(Var16,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                uVar4 = fcn.00015768(uVar12,iVar14);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x10),uVar4 & 0xfffb);
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(10000);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10000);
                }
                uVar13 = fcn.00015b30(arg1,0x1b0,0);
                uVar15 = 0x1b0;
                fcn.000159b0(arg1,0x1b0,uVar13 & 0xfffffffc,0,in_stack_00000068);
                iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                uVar4 = fcn.00015768(uVar12,iVar14);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                fcn.000153ec(arg1,iVar14,uVar4 & 0xffef);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa5d);
                uVar12 = 0;
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                goto code_r0x0001f134;
            }
            if (iVar1 == 0x2f) {
code_r0x0001f850:
                iVar14 = CONCAT71(Var16,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                uVar4 = fcn.00015768(uVar12,iVar14);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x10),uVar4 & 0xfffb);
                if (*(arg1 + 0x2ace) == '0') {
                    (**(arg1 + 0x2c68))(10000);
                }
                else {
                    (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),10000);
                }
                uVar13 = fcn.00015b30(arg1,0x1b0,0);
                uVar15 = 0x1b0;
                fcn.000159b0(arg1,0x1b0,uVar13 & 0xfffffffc,0,in_stack_00000068);
                iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                uVar4 = fcn.00015768(uVar12,iVar14);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                fcn.000153ec(arg1,iVar14,uVar4 & 0xffef);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa5d);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xbce);
                uVar12 = 0x8860;
                iVar14 = CONCAT71(iVar14 >> 8,0x12);
code_r0x0001f942:
                fcn.000153ec(arg1,iVar14,uVar12);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80f3);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x8b00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80f0);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x3a00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80ef);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x500);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80f6);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x6e00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80ec);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x6800);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80ed);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x7c00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80f2);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xf400);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80f4);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x8500);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8110);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xa800);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x810f);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x1d00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8111);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xf500);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8113);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x6100);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8115);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x9200);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x810e);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x400);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x810c);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x7c00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x810b);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x5a00);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80d1);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xff00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80cd);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x9e00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80d3);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xe00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80d5);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xca00);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80d7);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x8400);
            }
            else {
                if (iVar1 != 0x30) {
                    if (iVar1 == 0x31) {
                        iVar14 = CONCAT71(Var16,0x1f);
                        fcn.000153ec(arg1,iVar14,0xa43);
                        fcn.000163fc(arg1,CONCAT71(iVar14 >> 8,0x10),0,4);
                        uVar4 = fcn.0001620c(arg1,0xd422);
                        uVar15 = 0xd422;
                        fcn.00016134(uVar12,0xd422,uVar4 | 4);
                        iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0xa43);
                        iVar14 = CONCAT71(iVar14 >> 8,0x13);
                        fcn.000153ec(arg1,iVar14,0x808a);
                        iVar14 = CONCAT71(iVar14 >> 8,0x14);
                        fcn.000163fc(arg1,iVar14,0x3f,10);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0xc41);
                        iVar14 = CONCAT71(iVar14 >> 8,0x13);
                        fcn.000153ec(arg1,iVar14,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x13);
                        fcn.000153ec(arg1,iVar14,0x500);
                        fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
                        uVar12 = fcn.00015b30(arg1,0x1b0,0);
                        uVar15 = 0x1b0;
                        fcn.000159b0(arg1,0x1b0,uVar12 & 0xfffffffc,0,in_stack_00000068);
                        iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0xa43);
                        iVar14 = CONCAT71(iVar14 >> 8,0x11);
                        fcn.000163fc(arg1,iVar14,0x10,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0xa5d);
                        iVar14 = CONCAT71(iVar14 >> 8,0x10);
                        fcn.000153ec(arg1,iVar14,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0xa42);
                        iVar14 = CONCAT71(iVar14 >> 8,0x14);
                        fcn.000163fc(arg1,iVar14,0x80,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0xa4a);
                        in_RDX = CONCAT71(iVar14 >> 8,0x11);
                        fcn.000163fc(arg1,in_RDX,0x200,0);
                        goto code_r0x00020e16;
                    }
                    if (iVar1 == 0x32) {
                        fcn.0001d908(arg1,0x32ff0);
                        fcn.0001d908(arg1,0x32fb0);
                    }
                    else if ((iVar1 != 0x33) && (iVar1 != 0x34)) goto code_r0x00020e16;
                    fcn.0001d908(arg1,0x32d60);
                    fcn.0001d908(arg1,0x32e40);
                    in_RDX = 0x32f70;
                    goto code_r0x0001e41c;
                }
                iVar14 = CONCAT71(Var16,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                fcn.000163fc(arg1,CONCAT71(iVar14 >> 8,0x10),0,4);
                uVar4 = fcn.0001620c(arg1,0xd422);
                fcn.00016134(uVar12,0xd422,uVar4 | 4);
                uVar12 = fcn.00015b30(arg1,0x1b0,0);
                uVar15 = 0x1b0;
                fcn.000159b0(arg1,0x1b0,uVar12 & 0xfffffffc,0,in_stack_00000068);
                iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                fcn.000163fc(arg1,iVar14,0x10,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa5d);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa42);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x80,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa4a);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                fcn.000163fc(arg1,iVar14,0x200,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x809b);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xf800,0x8000);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80a2);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x8000);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80a4);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x8500);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x809c);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xbd00);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80ad);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xf800,0x7000);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80b4);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x5000);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x80ac);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x4000);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x808e);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x1200);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8090);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0xe500);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8092);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0xff00,0x9f00);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xbca);
                iVar14 = CONCAT71(iVar14 >> 8,0x17);
                fcn.000163fc(arg1,iVar14,0x3000,0x4000);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x803f);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8047);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x804f);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8057);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x805f);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x8067);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x806f);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000163fc(arg1,iVar14,0x3000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
            }
            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
            fcn.000153ec(arg1,iVar14,0xc41);
            iVar14 = CONCAT71(iVar14 >> 8,0x13);
            fcn.000153ec(arg1,iVar14,0);
            uVar12 = 0x500;
            iVar14 = CONCAT71(iVar14 >> 8,0x13);
            goto code_r0x0001f134;
        }
        if (iVar1 < 0x3e) {
            if (iVar1 == 0x3d) {
                iVar14 = CONCAT71(Var16,0x1f);
                if (*(arg1 + 0x2e39) == '\0') {
                    fcn.000153ec(arg1,iVar14,0xa43);
                    fcn.000163fc(arg1,CONCAT71(iVar14 >> 8,0x10),0,4);
                    uVar4 = fcn.0001620c(arg1,0xd422);
                    iVar14 = 0xd422;
                    fcn.00016134(uVar12,0xd422,uVar4 | 4);
                }
                else {
                    fcn.000153ec(arg1,iVar14,0xa43);
                    iVar14 = CONCAT71(iVar14 >> 8,0x10);
                    fcn.000163fc(arg1,iVar14,4,0);
                    if (*(arg1 + 0x2ace) == '0') {
                        (**(arg1 + 0x2c68))(30000);
                    }
                    else {
                        iVar14 = 30000;
                        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),30000);
                    }
                }
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xc41);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x500);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
                uVar13 = fcn.00015b30(arg1,0x1b0,0);
                uVar15 = 0x1b0;
                fcn.000159b0(arg1,0x1b0,uVar13 & 0xfffffffc,0,in_stack_00000068);
                iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                fcn.000163fc(arg1,iVar14,0x10,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa5d);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x10),0);
                uVar4 = fcn.0001620c(arg1,0xe052);
                uVar15 = 0xe052;
                fcn.00016134(uVar12,0xe052,uVar4 & 0xfffe);
                iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa43);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                fcn.000163fc(arg1,iVar14,0x8000,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0xa44);
                iVar14 = CONCAT71(iVar14 >> 8,0x11);
                fcn.000163fc(arg1,iVar14,0x2000,0);
                fcn.000163fc(arg1,CONCAT71(iVar14 >> 8,0x11),0x4000,0);
                uVar4 = fcn.0001620c(arg1,0xd422);
                fcn.00016134(uVar12,0xd422,uVar4 & 0xfe2d);
                uVar4 = fcn.0001620c(arg1,0xd420);
                in_RDX = 0xd420;
                fcn.00016134(uVar12,0xd420,uVar4 & 0xf77f);
                goto code_r0x00020e16;
            }
            if (iVar1 == 0x36) {
                iVar14 = CONCAT71(Var16,0x1f);
                fcn.000153ec(arg1,iVar14,2);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                fcn.000153ec(arg1,iVar14,8);
                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                fcn.000153ec(arg1,iVar14,0x6c);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,1);
                iVar14 = CONCAT71(iVar14 >> 8,0x17);
                fcn.000153ec(arg1,iVar14,0xcc0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,1);
                iVar14 = CONCAT71(iVar14 >> 8,0xb);
                fcn.000153ec(arg1,iVar14,0xa4d8);
                iVar14 = CONCAT71(iVar14 >> 8,9);
                fcn.000153ec(arg1,iVar14,0x281c);
                iVar14 = CONCAT71(iVar14 >> 8,7);
                fcn.000153ec(arg1,iVar14,0x2883);
                iVar14 = CONCAT71(iVar14 >> 8,10);
                fcn.000153ec(arg1,iVar14,0x6b35);
                iVar14 = CONCAT71(iVar14 >> 8,0x1d);
                fcn.000153ec(arg1,iVar14,0x3da4);
                iVar14 = CONCAT71(iVar14 >> 8,0x1c);
                fcn.000153ec(arg1,iVar14,0xeffd);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x14),0x7f52);
                uVar15 = 0;
                fcn.000153ec(arg1,0x18,0x7fc6);
                iVar14 = CONCAT71(uVar15 >> 8,8);
                fcn.000153ec(arg1,iVar14,0x601);
                iVar14 = CONCAT71(iVar14 >> 8,6);
                fcn.000153ec(arg1,iVar14,0x4063);
                iVar14 = CONCAT71(iVar14 >> 8,0x10);
                fcn.000153ec(arg1,iVar14,0xf074);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,3);
                iVar14 = CONCAT71(iVar14 >> 8,0x13);
                fcn.000153ec(arg1,iVar14,0x789);
                iVar14 = CONCAT71(iVar14 >> 8,0x12);
                fcn.000153ec(arg1,iVar14,0xf4bd);
                iVar14 = CONCAT71(iVar14 >> 8,0x1a);
                fcn.000153ec(arg1,iVar14,0x4fd);
                iVar14 = CONCAT71(iVar14 >> 8,0x14);
                fcn.000153ec(arg1,iVar14,0x84b0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,5);
                iVar14 = CONCAT71(iVar14 >> 8,1);
                fcn.000153ec(arg1,iVar14,0x340);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,1);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0x4000);
                iVar14 = CONCAT71(iVar14 >> 8,3);
                fcn.000153ec(arg1,iVar14,0x1d21);
                iVar14 = CONCAT71(iVar14 >> 8,2);
                fcn.000153ec(arg1,iVar14,0xc32);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,1),0x200);
                uVar15 = 0;
                fcn.000153ec(arg1,0,0x5554);
                iVar14 = CONCAT71(uVar15 >> 8,4);
                fcn.000153ec(arg1,iVar14,0x4800);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0x4000);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0xf000);
                iVar14 = CONCAT71(iVar14 >> 8,3);
                fcn.000153ec(arg1,iVar14,0xdf01);
                iVar14 = CONCAT71(iVar14 >> 8,2);
                fcn.000153ec(arg1,iVar14,0xdf20);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,1),0x101a);
                uVar15 = 0;
                fcn.000153ec(arg1,0,0xa0ff);
                iVar14 = CONCAT71(uVar15 >> 8,4);
                fcn.000153ec(arg1,iVar14,0xf800);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0xf000);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,7);
                iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                fcn.000153ec(arg1,iVar14,0x23);
                iVar14 = CONCAT71(iVar14 >> 8,0x16);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                uVar4 = fcn.00015768(uVar12,iVar14);
                iVar14 = CONCAT71(iVar14 >> 8,0xd);
                uVar13 = uVar4 | 0x20;
            }
            else {
                if (iVar1 != 0x37) {
                    if (iVar1 == 0x38) {
                        iVar14 = CONCAT71(Var16,0x1f);
                        fcn.000153ec(arg1,iVar14,1);
                        iVar14 = CONCAT71(iVar14 >> 8,0x17);
                        fcn.000153ec(arg1,iVar14,0xcc0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,2);
                        iVar14 = CONCAT71(iVar14 >> 8,0xc);
                        uVar4 = fcn.00015768(uVar12,iVar14);
                        iVar14 = CONCAT71(iVar14 >> 8,0xc);
                        fcn.000153ec(arg1,iVar14,uVar4 | 0x400);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,0);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,7);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                        fcn.000153ec(arg1,iVar14,0x2c);
                        iVar14 = CONCAT71(iVar14 >> 8,0x15);
                        fcn.000153ec(arg1,iVar14,0x35d);
                        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                        fcn.000153ec(arg1,iVar14,5);
                        uVar12 = 0x300;
                        iVar14 = CONCAT71(iVar14 >> 8,1);
                    }
                    else {
                        if (iVar1 != 0x39) {
                            if ((iVar1 != 0x3b) && (iVar1 != 0x3c)) goto code_r0x00020e16;
                            uVar13 = fcn.00015b30(arg1,0x1b0,0);
                            uVar15 = 0x1b0;
                            fcn.000159b0(arg1,0x1b0,uVar13 & 0xfffffffc,0,in_stack_00000068);
                            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,0xa43);
                            iVar14 = CONCAT71(iVar14 >> 8,0x11);
                            uVar4 = fcn.00015768(uVar12,iVar14);
                            iVar14 = CONCAT71(iVar14 >> 8,0x11);
                            fcn.000153ec(arg1,iVar14,uVar4 & 0xffef);
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            fcn.000153ec(arg1,iVar14,0xa5d);
                            iVar14 = CONCAT71(iVar14 >> 8,0x10);
                            fcn.000153ec(arg1,iVar14,0);
                            uVar12 = 0;
                            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                            goto code_r0x0001f942;
                        }
                        iVar14 = CONCAT71(Var16,0x1f);
                        fcn.000153ec(arg1,iVar14,2);
                        iVar14 = CONCAT71(iVar14 >> 8,0xc);
                        uVar4 = fcn.00015768(uVar12,iVar14);
                        iVar14 = CONCAT71(iVar14 >> 8,0xc);
                        uVar12 = uVar4 | 0x400;
                    }
                    goto code_r0x0001f134;
                }
                iVar14 = CONCAT71(Var16,0x1f);
                fcn.000153ec(arg1,iVar14,1);
                iVar14 = CONCAT71(iVar14 >> 8,0x17);
                fcn.000153ec(arg1,iVar14,0xcc0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,5);
                iVar14 = CONCAT71(iVar14 >> 8,1);
                fcn.000153ec(arg1,iVar14,0x340);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,1);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0x4000);
                iVar14 = CONCAT71(iVar14 >> 8,3);
                fcn.000153ec(arg1,iVar14,0x1d21);
                iVar14 = CONCAT71(iVar14 >> 8,2);
                fcn.000153ec(arg1,iVar14,0xc32);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,1),0x200);
                uVar15 = 0;
                fcn.000153ec(arg1,0,0x5554);
                iVar14 = CONCAT71(uVar15 >> 8,4);
                fcn.000153ec(arg1,iVar14,0x4800);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0x4000);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0xf000);
                iVar14 = CONCAT71(iVar14 >> 8,3);
                fcn.000153ec(arg1,iVar14,0xdf01);
                iVar14 = CONCAT71(iVar14 >> 8,2);
                fcn.000153ec(arg1,iVar14,0xdf20);
                fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,1),0x101a);
                uVar15 = 0;
                fcn.000153ec(arg1,0,0xa0ff);
                iVar14 = CONCAT71(uVar15 >> 8,4);
                fcn.000153ec(arg1,iVar14,0xf800);
                iVar14 = CONCAT71(iVar14 >> 8,4);
                fcn.000153ec(arg1,iVar14,0xf000);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,0);
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
                fcn.000153ec(arg1,iVar14,7);
                iVar14 = CONCAT71(iVar14 >> 8,0x1e);
                fcn.000153ec(arg1,iVar14,0x23);
                iVar14 = CONCAT71(iVar14 >> 8,0x16);
                fcn.000153ec(arg1,iVar14,0);
                uVar13 = 0;
                iVar14 = CONCAT71(iVar14 >> 8,0x1f);
            }
            fcn.000153ec(arg1,iVar14,uVar13);
            iVar14 = CONCAT71(iVar14 >> 8,0x1f);
            fcn.000153ec(arg1,iVar14,2);
            iVar14 = CONCAT71(iVar14 >> 8,0xc);
            uVar4 = fcn.00015768(uVar12,iVar14);
            iVar14 = CONCAT71(iVar14 >> 8,0xc);
            fcn.000153ec(arg1,iVar14,uVar4 | 0x400);
            in_RDX = CONCAT71(iVar14 >> 8,0x1f);
            fcn.000153ec(arg1,in_RDX,0);
            goto code_r0x00020e16;
        }
        if (iVar1 == 0x3e) {
            fcn.00024ce4(arg1);
            iVar14 = CONCAT71(in_RDX >> 8,0x1f);
            fcn.000153ec(arg1,iVar14,0xa43);
            fcn.000163fc(arg1,CONCAT71(iVar14 >> 8,0x10),4,0);
            uVar4 = fcn.0001620c(arg1,0xe040);
            fcn.00016134(uVar12,0xe040,uVar4 & 0xfffc);
            fcn.00016450(arg1,0xa432,0x10,0);
            fcn.00016450(arg1,0xa5d0,6,0);
            fcn.00016450(arg1,0xa6d4,1,0);
            fcn.00016450(arg1,0xa6d8,0x10,0);
            fcn.00016450(arg1,0xa428,0x80,0);
            fcn.00016450(arg1,0xa4a2,0x200,0);
            fcn.00016450(arg1,0xad4e,0,0x10);
            fcn.00016450(arg1,0xad16,0x3ff,6);
            fcn.00016450(arg1,0xad32,0x3f,6);
            fcn.00016450(arg1,0xac08,0x1000,0);
            fcn.00016450(arg1,0xac08,0x100,0);
            fcn.00016450(arg1,0xac8a,0xf000,0x7000);
            fcn.00016450(arg1,0xad18,0,0x400);
            fcn.00016450(arg1,0xad1a,0,0x3ff);
            fcn.00016450(arg1,0xad1c,0,0x3ff);
            fcn.000162a0(arg1,0xa436,0x80ea);
            fcn.00016450(arg1,0xa438,0xff00,0xc400);
            fcn.000162a0(arg1,0xa436,0x80eb);
            fcn.00016450(arg1,0xa438,0x700,0x300);
            fcn.000162a0(arg1,0xa436,0x80f8);
            fcn.00016450(arg1,0xa438,0xff00,0x1c00);
            fcn.000162a0(arg1,0xa436,0x80f1);
            fcn.00016450(arg1,0xa438,0xff00,0x3000);
            fcn.000162a0(arg1,0xa436,0x80fe);
            fcn.00016450(arg1,0xa438,0xff00,0xa500);
            fcn.000162a0(arg1,0xa436,0x8102);
            fcn.00016450(arg1,0xa438,0xff00,0x5000);
            fcn.000162a0(arg1,0xa436,0x8105);
            fcn.00016450(arg1,0xa438,0xff00,0x3300);
            fcn.000162a0(arg1,0xa436,0x8100);
            fcn.00016450(arg1,0xa438,0xff00,0x7000);
            fcn.000162a0(arg1,0xa436,0x8104);
            fcn.00016450(arg1,0xa438,0xff00,0xf000);
            fcn.000162a0(arg1,0xa436,0x8106);
            fcn.00016450(arg1,0xa438,0xff00,0x6500);
            fcn.000162a0(arg1,0xa436,0x80dc);
            fcn.00016450(arg1,0xa438,0xff00,0xed00);
            fcn.000162a0(arg1,0xa436,0x80df);
            fcn.00016450(arg1,0xa438,0,0x100);
            fcn.000162a0(arg1,0xa436,0x80e1);
            fcn.00016450(arg1,0xa438,0x100,0);
            fcn.00016450(arg1,0xbf06,0x3f,0x38);
            fcn.000162a0(arg1,0xa436,0x819f);
            fcn.000162a0(arg1,0xa438,0xd0b6);
            fcn.000162a0(arg1,0xbc34,0x5555);
            fcn.00016450(arg1,0xbf0a,0xe00,0xa00);
            uVar15 = 0xa442;
            fcn.00016450(arg1,0xa442,0,0x800);
            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
            fcn.000153ec(arg1,iVar14,0xa43);
            in_RDX = CONCAT71(iVar14 >> 8,0x10);
            fcn.000163fc(arg1,in_RDX,0,4);
            goto code_r0x00020e16;
        }
        if (iVar1 == 0x3f) {
            uVar4 = fcn.0001620c(arg1,0xe040);
            fcn.00016134(uVar12,0xe040,uVar4 & 0xfffc);
            uVar4 = fcn.0001620c(arg1,0xeb62);
            fcn.00016134(uVar12,0xeb62,uVar4 & 0xfff9);
            fcn.00016450(arg1,0xa432,0x10,0);
            fcn.00016450(arg1,0xa5d0,6,0);
            fcn.00016450(arg1,0xa6d4,1,0);
            fcn.00016450(arg1,0xa6d8,0x10,0);
            fcn.00016450(arg1,0xa428,0x80,0);
            fcn.00016450(arg1,0xa4a2,0x200,0);
            fcn.00016450(arg1,0xad4e,0,0x10);
            fcn.00016450(arg1,0xad16,0x3ff,0x3ff);
            fcn.00016450(arg1,0xad32,0x3f,6);
            fcn.00016450(arg1,0xac08,0x1000,0);
            fcn.00016450(arg1,0xac08,0x100,0);
            fcn.00016450(arg1,0xacc0,3,2);
            fcn.00016450(arg1,0xad40,0xe0,0x40);
            fcn.00016450(arg1,0xad40,7,4);
            fcn.00016450(arg1,0xac14,0x80,0);
            fcn.00016450(arg1,0xac80,0x300,0);
            fcn.00016450(arg1,0xac5e,7,2);
            fcn.000162a0(arg1,0xad4c,0xa8);
            fcn.000162a0(arg1,0xb87c,0x80a2);
            fcn.000162a0(arg1,0xb87e,0x153);
            fcn.000162a0(arg1,0xb87c,0x809c);
            fcn.000162a0(arg1,0xb87e,0x153);
            fcn.000162a0(arg1,0xa436,0x81b3);
            fcn.000162a0(arg1,0xa438,0x43);
            fcn.000162a0(arg1,0xa438,0xa7);
            fcn.000162a0(arg1,0xa438,0xd6);
            fcn.000162a0(arg1,0xa438,0xec);
            fcn.000162a0(arg1,0xa438,0xf6);
            fcn.000162a0(arg1,0xa438,0xfb);
            fcn.000162a0(arg1,0xa438,0xfd);
            fcn.000162a0(arg1,0xa438,0xff);
            fcn.000162a0(arg1,0xa438,0xbb);
            fcn.000162a0(arg1,0xa438,0x58);
            fcn.000162a0(arg1,0xa438,0x29);
            fcn.000162a0(arg1,0xa438,0x13);
            fcn.000162a0(arg1,0xa438,9);
            fcn.000162a0(arg1,0xa438,4);
            fcn.000162a0(arg1,0xa438,2);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa438,0);
            fcn.000162a0(arg1,0xa436,0x8257);
            fcn.000162a0(arg1,0xa438,0x20f);
            fcn.000162a0(arg1,0xa436,0x80ea);
            fcn.000162a0(arg1,0xa438,0x7843);
            if (*(arg1 + 0x2e59) == '\0') {
                fcn.00029cf0(arg1);
                fcn.00016450(arg1,0xb896,1,0);
                fcn.00016450(arg1,0xb892,0xff00,0);
                fcn.000162a0(arg1,0xb88e,0xc091);
                fcn.000162a0(arg1,0xb890,0x6e12);
                fcn.000162a0(arg1,0xb88e,0xc092);
                fcn.000162a0(arg1,0xb890,0x1214);
                fcn.000162a0(arg1,0xb88e,0xc094);
                fcn.000162a0(arg1,0xb890,0x1516);
                fcn.000162a0(arg1,0xb88e,0xc096);
                fcn.000162a0(arg1,0xb890,0x171b);
                fcn.000162a0(arg1,0xb88e,0xc098);
                fcn.000162a0(arg1,0xb890,0x1b1c);
                fcn.000162a0(arg1,0xb88e,0xc09a);
                fcn.000162a0(arg1,0xb890,0x1f1f);
                fcn.000162a0(arg1,0xb88e,0xc09c);
                fcn.000162a0(arg1,0xb890,0x2021);
                fcn.000162a0(arg1,0xb88e,0xc09e);
                fcn.000162a0(arg1,0xb890,0x2224);
                fcn.000162a0(arg1,0xb88e,0xc0a0);
                fcn.000162a0(arg1,0xb890,0x2424);
                fcn.000162a0(arg1,0xb88e,0xc0a2);
                fcn.000162a0(arg1,0xb890,0x2424);
                fcn.000162a0(arg1,0xb88e,0xc0a4);
                fcn.000162a0(arg1,0xb890,0x2424);
                fcn.000162a0(arg1,0xb88e,0xc018);
                fcn.000162a0(arg1,0xb890,0xaf2);
                fcn.000162a0(arg1,0xb88e,0xc01a);
                fcn.000162a0(arg1,0xb890,0xd4a);
                fcn.000162a0(arg1,0xb88e,0xc01c);
                fcn.000162a0(arg1,0xb890,0xf26);
                fcn.000162a0(arg1,0xb88e,0xc01e);
                fcn.000162a0(arg1,0xb890,0x118d);
                fcn.000162a0(arg1,0xb88e,0xc020);
                fcn.000162a0(arg1,0xb890,0x14f3);
                fcn.000162a0(arg1,0xb88e,0xc022);
                fcn.000162a0(arg1,0xb890,0x175a);
                fcn.000162a0(arg1,0xb88e,0xc024);
                fcn.000162a0(arg1,0xb890,0x19c0);
                fcn.000162a0(arg1,0xb88e,0xc026);
                fcn.000162a0(arg1,0xb890,0x1c26);
                fcn.000162a0(arg1,0xb88e,0xc089);
                fcn.000162a0(arg1,0xb890,0x6050);
                fcn.000162a0(arg1,0xb88e,0xc08a);
                fcn.000162a0(arg1,0xb890,0x5f6e);
                fcn.000162a0(arg1,0xb88e,0xc08c);
                fcn.000162a0(arg1,0xb890,0x6e6e);
                fcn.000162a0(arg1,0xb88e,0xc08e);
                fcn.000162a0(arg1,0xb890,0x6e6e);
                fcn.000162a0(arg1,0xb88e,0xc090);
                fcn.000162a0(arg1,0xb890,0x6e12);
                fcn.00016450(arg1,0xb896,0,1);
                fcn.00029eb0(arg1);
            }
            fcn.00016450(arg1,0xd068,0,0x2000);
            if (*(arg1 + 0x2e7d) == '\x01') {
                fcn.000162a0(arg1,0xa436,0x81a2);
                fcn.00016450(arg1,0xa438,0,0x100);
            }
            fcn.00016450(arg1,0xa454,1,0);
            uVar15 = 0xa442;
            fcn.00016450(arg1,0xa442,0,0x800);
            iVar14 = CONCAT71(uVar15 >> 8,0x1f);
            fcn.000153ec(arg1,iVar14,0xa43);
            in_RDX = CONCAT71(iVar14 >> 8,0x10);
            fcn.000163fc(arg1,in_RDX,0,4);
            if (*(arg1 + 0x2e80) == '\x01') {
                fcn.00016450(arg1,0xd068,7,1);
                fcn.00016450(arg1,0xd068,0x18,0);
                uVar4 = fcn.00016318(arg1,0xd06a);
                fcn.00016450(arg1,0xd068,0x18,8);
                uVar5 = fcn.00016318(arg1,0xd06a);
                fcn.00016450(arg1,0xd068,0x18,0x10);
                uVar6 = fcn.00016318(arg1,0xd06a);
                fcn.00016450(arg1,0xd068,0x18,0x18);
                uVar7 = fcn.00016318(arg1,0xd06a);
                fcn.00016450(arg1,0xd068,0x18,0);
                fcn.00016450(arg1,0xd06a,0x7ff,uVar7 & 0x7ff);
                fcn.00016450(arg1,0xd068,0x18,8);
                fcn.00016450(arg1,0xd06a,0x7ff,uVar6 & 0x7ff);
                fcn.00016450(arg1,0xd068,0x18,0x10);
                fcn.00016450(arg1,0xd06a,0x7ff,uVar5 & 0x7ff);
                fcn.00016450(arg1,0xd068,0x18,0x18);
                fcn.00016450(arg1,0xd06a,0x7ff,uVar4 & 0x7ff);
                uVar4 = fcn.00016318(arg1,0xbd5a);
                uVar5 = fcn.00016318(arg1,0xbd5a);
                uVar6 = fcn.00016318(arg1,0xbd5c);
                uVar7 = fcn.00016318(arg1,0xbd5c);
                uVar8 = fcn.00016318(arg1,0xbc18);
                uVar9 = fcn.00016318(arg1,0xbc18);
                uVar10 = fcn.00016318(arg1,0xbc1a);
                uVar11 = fcn.00016318(arg1,0xbc1a);
                fcn.00016450(arg1,0xbd5a,0x1f,(uVar7 & 0x1f00) >> 8);
                fcn.00016450(arg1,0xbd5a,0x1f00,(uVar6 & 0x1f) << 8);
                fcn.00016450(arg1,0xbd5c,0x1f,(uVar5 & 0x1f00) >> 8);
                fcn.00016450(arg1,0xbd5c,0x1f00,(uVar4 & 0x1f) << 8);
                fcn.00016450(arg1,0xbc18,0x1f,(uVar11 & 0x1f00) >> 8);
                fcn.00016450(arg1,0xbc18,0x1f00,(uVar10 & 0x1f) << 8);
                fcn.00016450(arg1,0xbc1a,0x1f,(uVar9 & 0x1f00) >> 8);
                in_RDX = 0xbc1a;
                fcn.00016450(arg1,0xbc1a,0x1f00,(uVar8 & 0x1f) << 8);
            }
            goto code_r0x00020e16;
        }
        if (iVar1 == 0x41) {
            in_RDX = 0xa430;
            fcn.00016450(arg1,0xa430,0,4);
            goto code_r0x00020e16;
        }
        if (iVar1 != 0x42) {
            if (iVar1 != 0x43) {
                if (iVar1 != 0x44) goto code_r0x00020e16;
                goto code_r0x0001e429;
            }
            goto code_r0x0001f850;
        }
code_r0x0001fc7f:
        iVar14 = CONCAT71(Var16,0x1f);
        fcn.000153ec(arg1,iVar14,7);
        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
        fcn.000153ec(arg1,iVar14,0x23);
        iVar14 = CONCAT71(iVar14 >> 8,0x18);
        fcn.000153ec(arg1,iVar14,1);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(20000);
        }
        else {
            iVar14 = 20000;
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),20000);
        }
        iVar14 = CONCAT71(iVar14 >> 8,0x16);
        fcn.000153ec(arg1,iVar14,6);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,0);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,0);
        iVar14 = CONCAT71(iVar14 >> 8,0x15);
        fcn.000153ec(arg1,iVar14,6);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,7);
        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
        fcn.000153ec(arg1,iVar14,0x23);
        iVar14 = CONCAT71(iVar14 >> 8,0x16);
        fcn.000153ec(arg1,iVar14,0x306);
        iVar14 = CONCAT71(iVar14 >> 8,0x16);
        fcn.000153ec(arg1,iVar14,0x300);
        iVar14 = CONCAT71(iVar14 >> 8,0x18);
        fcn.000153ec(arg1,iVar14,0);
        fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
        uVar13 = fcn.00015b30(arg1,0x1b0,0);
        uVar15 = 0x1b0;
        fcn.000159b0(arg1,0x1b0,uVar13 & 0xfffffffc,0,in_stack_00000068);
        iVar14 = CONCAT71(uVar15 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,5);
        iVar14 = CONCAT71(iVar14 >> 8,5);
        fcn.000153ec(arg1,iVar14,0x8b85);
        iVar14 = CONCAT71(iVar14 >> 8,6);
        uVar4 = fcn.00015768(uVar12,iVar14);
        iVar14 = CONCAT71(iVar14 >> 8,6);
        fcn.000153ec(arg1,iVar14,uVar4 & 0xdfff);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,7);
        iVar14 = CONCAT71(iVar14 >> 8,0x1e);
        fcn.000153ec(arg1,iVar14,0x20);
        iVar14 = CONCAT71(iVar14 >> 8,0x15);
        uVar4 = fcn.00015768(uVar12,iVar14);
        iVar14 = CONCAT71(iVar14 >> 8,0x15);
        fcn.000153ec(arg1,iVar14,uVar4 & 0xfeff);
        iVar14 = CONCAT71(iVar14 >> 8,0x1f);
        fcn.000153ec(arg1,iVar14,0);
        iVar14 = CONCAT71(iVar14 >> 8,0xd);
        fcn.000153ec(arg1,iVar14,7);
        iVar14 = CONCAT71(iVar14 >> 8,0xe);
        fcn.000153ec(arg1,iVar14,0x3c);
        iVar14 = CONCAT71(iVar14 >> 8,0xd);
        fcn.000153ec(arg1,iVar14,0x4007);
        iVar14 = CONCAT71(iVar14 >> 8,0xe);
        fcn.000153ec(arg1,iVar14,0);
        in_RDX = CONCAT71(iVar14 >> 8,0xd);
    }
    fcn.000153ec(arg1,in_RDX,0);
code_r0x00020e16:
    iVar14 = CONCAT71(in_RDX >> 8,0x1f);
    fcn.000153ec(arg1,iVar14,0);
    fcn.00023e4c(arg1);
    fcn.00023c24(arg1);
    fcn.000153ec(arg1,CONCAT71(iVar14 >> 8,0x1f),0);
    if (*(arg1 + 0x2e74) == 1) {
        fcn.0002a2cc(arg1);
    }
    return;
}


/* fcn.00020f04 @ 0x20f04 */

void fcn.00020f04(int64_t arg1)

{
    uint16_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t arg2;
    ulong uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    uint16_t uVar9;
    
    uVar4 = *(arg1 + 0x2b18);
    arg2 = uVar4;
    if (uVar4 < 0x22) {
        if (uVar4 == 0x21) {
            return;
        }
        if (0x12 < uVar4) {
            if (0x18 < uVar4) {
                if (uVar4 == 0x19) {
                    iVar5 = 0;
                    fcn.00016018(arg1,6,0xaf25);
                    iVar8 = 0x8e68;
code_r0x00021266:
                    iVar5 = CONCAT71(iVar5 >> 8,7);
                    goto code_r0x000219c0;
                }
                if ((uVar4 == 0x1a) || (uVar4 == 0x1b)) {
                    uVar6 = 0;
                    fcn.00020e70(arg1,7,0,0x4000);
                    iVar5 = CONCAT71(uVar6 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,0x200);
                    iVar5 = CONCAT71(iVar5 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,0x20);
                    iVar5 = CONCAT71(iVar5 >> 8,0x1e);
                    fcn.00020e70(arg1,iVar5,0,0x2000);
                    iVar5 = CONCAT71(iVar5 >> 8,3);
                    fcn.00020e70(arg1,iVar5,0,1);
                    iVar5 = CONCAT71(iVar5 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,0x100);
                    fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,0x19),0,4);
                    uVar9 = 0x20;
                    uVar3 = 10;
                }
                else {
                    if (uVar4 != 0x1c) {
                        return;
                    }
                    uVar6 = 0;
                    fcn.00020e70(arg1,7,0,0x4000);
                    iVar5 = CONCAT71(uVar6 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,0x200);
                    iVar5 = CONCAT71(iVar5 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,0x20);
                    iVar5 = CONCAT71(iVar5 >> 8,0x1e);
                    fcn.00020e70(arg1,iVar5,0,0x2000);
                    iVar5 = CONCAT71(iVar5 >> 8,3);
                    fcn.00020e70(arg1,iVar5,0,1);
                    iVar5 = CONCAT71(iVar5 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,0x100);
                    iVar5 = CONCAT71(iVar5 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0,4);
                    fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,10),0,0x20);
                    uVar9 = 0x8000;
                    uVar3 = 0x1e;
                }
                goto code_r0x00021944;
            }
            if (uVar4 != 0x18) {
                arg2 = uVar4 - 0x13;
                if (uVar4 - 0x13 == 0) goto code_r0x000210a7;
                if (uVar4 == 0x14) {
                    uVar6 = 0;
                    fcn.00016018(arg1,3,0xc0fb);
                    iVar8 = 0xaf35;
                    iVar5 = CONCAT71(uVar6 >> 8,6);
                    goto code_r0x00021084;
                }
                if (uVar4 == 0x15) {
                    fcn.00020e70(arg1,1,0,0x180);
                    uVar9 = 0x700;
                    uVar7 = 0xc022;
                    goto code_r0x00020fa5;
                }
                uVar4 = uVar4 - 0x16;
                arg2 = uVar4;
                if (uVar4 == 0) {
                    uVar6 = 0;
                    fcn.00020e70(arg1,1,0,0x180);
                    iVar5 = CONCAT71(uVar6 >> 8,3);
                    fcn.00020e70(arg1,iVar5,0xc022,0x700);
                    iVar8 = 0xaf35;
                    iVar5 = CONCAT71(iVar5 >> 8,6);
                    goto code_r0x000219c0;
                }
                if (uVar4 != 1) {
                    return;
                }
            }
            iVar5 = CONCAT71(arg2 >> 8,1);
            fcn.00016018(arg1,iVar5,0x6fe5);
            iVar5 = CONCAT71(iVar5 >> 8,3);
            fcn.00016018(arg1,iVar5,0x5d9);
            iVar8 = 0xec90;
            iVar5 = CONCAT71(iVar5 >> 8,0x19);
            goto code_r0x000219c0;
        }
        if (uVar4 == 0x12) {
code_r0x000210a7:
            iVar5 = CONCAT71(arg2 >> 8,1);
            fcn.00016018(arg1,iVar5,0x6e65);
            iVar5 = CONCAT71(iVar5 >> 8,2);
            fcn.00016018(arg1,iVar5,0x91f);
            iVar5 = CONCAT71(iVar5 >> 8,3);
            fcn.00016018(arg1,iVar5,0xc0fb);
            iVar5 = CONCAT71(iVar5 >> 8,6);
            fcn.00016018(arg1,iVar5,0xafb5);
            iVar5 = CONCAT71(iVar5 >> 8,7);
            fcn.00016018(arg1,iVar5,0xe00);
            iVar8 = 0xec80;
            iVar5 = CONCAT71(iVar5 >> 8,0x19);
code_r0x00021084:
            fcn.00016018(arg1,iVar5,iVar8);
            arg2 = CONCAT71(iVar5 >> 8,1);
            fcn.00016018(arg1,arg2,0x2e65);
            iVar8 = 0x6e65;
        }
        else {
            if (uVar4 < 0xd) {
                if ((((uVar4 != 0xc) && (arg2 = uVar4 - 7, uVar4 - 7 != 0)) && (arg2 = uVar4 - 8, uVar4 - 8 != 0)) &&
                   (arg2 = uVar4 - 9, uVar4 - 9 != 0)) {
                    uVar4 = uVar4 - 10;
                    arg2 = uVar4;
                    if ((uVar4 != 0) && (uVar4 != 1)) {
                        return;
                    }
                }
            }
            else {
                arg2 = uVar4 - 0xd;
                if (uVar4 - 0xd != 0) {
                    if (uVar4 == 0xe) {
                        uVar9 = 0;
                        uVar7 = 0x80;
                        uVar3 = 6;
                        goto code_r0x00020fb7;
                    }
                    if (uVar4 != 0xf) {
                        if (uVar4 != 0x10) {
                            return;
                        }
                        uVar9 = 0x220;
                        uVar7 = 0x400;
                        uVar3 = 2;
                        goto code_r0x00020fb7;
                    }
                    fcn.00020e70(arg1,1,0,1);
                    uVar9 = 0x20;
                    uVar7 = 0x400;
code_r0x00020fa5:
                    uVar3 = 3;
                    goto code_r0x00020fb7;
                }
            }
            iVar8 = 0x1bd3;
        }
code_r0x000219be:
        iVar5 = CONCAT71(arg2 >> 8,1);
code_r0x000219c0:
        fcn.00016018(arg1,iVar5,iVar8);
        return;
    }
    if (uVar4 < 0x30) {
        if (uVar4 == 0x2f) {
            uVar6 = 0;
            fcn.00020e70(arg1,0,8,0);
            iVar5 = CONCAT71(uVar6 >> 8,0xc);
            fcn.00020e70(arg1,iVar5,0x37d0,0x820);
            iVar5 = CONCAT71(iVar5 >> 8,0x1e);
            fcn.00020e70(arg1,iVar5,0,1);
            iVar5 = CONCAT71(iVar5 >> 8,0x19);
            fcn.00020e70(arg1,iVar5,0x8000,0);
            iVar5 = CONCAT71(iVar5 >> 8,0x19);
            fcn.00016018(arg1,iVar5,0x7c00);
            iVar5 = CONCAT71(iVar5 >> 8,0x1e);
            fcn.00016018(arg1,iVar5,0x20eb);
            fcn.00016018(arg1,CONCAT71(iVar5 >> 8,0xd),0x1666);
            uVar6 = 0;
            fcn.00020e70(arg1,0,0,0x80);
            iVar5 = CONCAT71(uVar6 >> 8,6);
            fcn.00016018(arg1,iVar5,0xf050);
            fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,4),0,0x10);
            uVar9 = 0;
            uVar7 = 0x4000;
            uVar3 = 0x1d;
            goto code_r0x00020fb7;
        }
        if (uVar4 < 0x29) {
            if (uVar4 == 0x28) {
                uVar6 = 0;
                fcn.00016018(arg1,6,0xf020);
                fcn.00016018(arg1,CONCAT71(uVar6 >> 8,7),0x1ff);
                uVar6 = 0;
                fcn.00016018(arg1,0,0x5027);
                iVar5 = CONCAT71(uVar6 >> 8,1);
                fcn.00016018(arg1,iVar5,3);
                iVar5 = CONCAT71(iVar5 >> 8,2);
                fcn.00016018(arg1,iVar5,0x2d16);
                iVar5 = CONCAT71(iVar5 >> 8,3);
                fcn.00016018(arg1,iVar5,0x6d49);
                iVar5 = CONCAT71(iVar5 >> 8,8);
                fcn.00016018(arg1,iVar5,6);
                iVar8 = 200;
            }
            else {
                if (uVar4 == 0x23) {
                    uVar6 = 0;
                    fcn.00016018(arg1,1,0x7c7f);
                    iVar5 = CONCAT71(uVar6 >> 8,2);
                    fcn.00016018(arg1,iVar5,0x11f);
                    iVar5 = CONCAT71(iVar5 >> 8,3);
                    fcn.00016018(arg1,iVar5,0x5fa);
                    iVar5 = CONCAT71(iVar5 >> 8,6);
                    fcn.00016018(arg1,iVar5,0xb271);
                    iVar8 = 0xce00;
                    goto code_r0x00021266;
                }
                if (uVar4 != 0x24) {
                    if (((uVar4 != 0x25) && (uVar4 != 0x26)) && (uVar4 != 0x27)) {
                        return;
                    }
                    fcn.00020e70(arg1,0,0x200,0x100);
                    uVar6 = 0;
                    fcn.00020e70(arg1,0,0,4);
                    iVar5 = CONCAT71(uVar6 >> 8,6);
                    fcn.00020e70(arg1,iVar5,2,0x31);
                    fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,7),0,0x2000);
                    uVar6 = 0;
                    fcn.00020e70(arg1,0,0,0x20);
                    fcn.00020e70(arg1,CONCAT71(uVar6 >> 8,3),0x5800,0x2000);
                    uVar9 = 0x1000;
                    uVar7 = 0x800;
                    uVar3 = 1;
                    goto code_r0x00020fb7;
                }
                uVar6 = 0;
                fcn.00016018(arg1,1,0x6c7f);
                iVar5 = CONCAT71(uVar6 >> 8,2);
                fcn.00016018(arg1,iVar5,0x11f);
                iVar5 = CONCAT71(iVar5 >> 8,3);
                fcn.00016018(arg1,iVar5,0x81b2);
                iVar5 = CONCAT71(iVar5 >> 8,0x1a);
                fcn.00016018(arg1,iVar5,0x546);
                iVar5 = CONCAT71(iVar5 >> 8,0x1c);
                fcn.00016018(arg1,iVar5,0x80c4);
                iVar5 = CONCAT71(iVar5 >> 8,0x1d);
                fcn.00016018(arg1,iVar5,0x78e5);
                iVar8 = 0x8100;
            }
            iVar5 = CONCAT71(iVar5 >> 8,10);
            goto code_r0x000219c0;
        }
        if (uVar4 == 0x2a) {
            fcn.00020e70(arg1,6,0xc0,0x20);
            uVar9 = 2;
            uVar3 = 8;
            uVar7 = 1;
            goto code_r0x00020fb7;
        }
        if ((uVar4 == 0x2c) || (uVar4 == 0x2d)) {
            uVar6 = 0;
            fcn.00020e70(arg1,0,8,0);
            iVar5 = CONCAT71(uVar6 >> 8,0xc);
            fcn.00020e70(arg1,iVar5,0x37d0,0x820);
            fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,0x1e),0,1);
            uVar9 = 0;
            uVar7 = 0x8000;
            uVar3 = 0x19;
            goto code_r0x00020fb7;
        }
        if (uVar4 != 0x2e) {
            return;
        }
        fcn.00020e70(arg1,0,0,8);
        uVar9 = 0x200;
        uVar7 = 0x3df0;
    }
    else {
        if ((uVar4 == 0x30) || (uVar4 == 0x31)) {
            uVar6 = 0;
            fcn.00020e70(arg1,0x1e,0x800,0);
            iVar5 = CONCAT71(uVar6 >> 8,0x1e);
            fcn.00020e70(arg1,iVar5,0,1);
            iVar5 = CONCAT71(iVar5 >> 8,0x1d);
            fcn.00020e70(arg1,iVar5,0,0x800);
            iVar5 = CONCAT71(iVar5 >> 8,5);
            fcn.00016018(arg1,iVar5,0x2089);
            iVar5 = CONCAT71(iVar5 >> 8,6);
            fcn.00016018(arg1,iVar5,0x5881);
            arg2 = CONCAT71(iVar5 >> 8,4);
            fcn.00016018(arg1,arg2,0x854a);
            iVar8 = 0x68b;
            goto code_r0x000219be;
        }
        if (uVar4 == 0x32) {
            uVar6 = 0;
            fcn.00020e70(arg1,1,0,1);
            iVar5 = CONCAT71(uVar6 >> 8,2);
            fcn.00020e70(arg1,iVar5,0x800,0x1000);
            iVar5 = CONCAT71(iVar5 >> 8,3);
            fcn.00020e70(arg1,iVar5,0,0x42);
            fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,6),0x80,0);
            uVar9 = 0x2000;
            uVar3 = 7;
code_r0x00021944:
            uVar7 = 0;
            goto code_r0x00020fb7;
        }
        if (uVar4 == 0x38) {
            uVar6 = 0;
            fcn.00020e70(arg1,0xb,0,0x48);
            fcn.00020e70(arg1,CONCAT71(uVar6 >> 8,0x19),0x20,0x50);
            uVar9 = 0x20;
            uVar7 = 0x100;
        }
        else if (uVar4 == 0x3a) {
            uVar6 = 0;
            fcn.00016018(arg1,0,0x10ab);
            iVar5 = CONCAT71(uVar6 >> 8,6);
            fcn.00016018(arg1,iVar5,0xf030);
            iVar5 = CONCAT71(iVar5 >> 8,8);
            fcn.00016018(arg1,iVar5,0x2006);
            iVar5 = CONCAT71(iVar5 >> 8,0xd);
            fcn.00016018(arg1,iVar5,0x1666);
            fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,0xc),0x1f0,0);
            uVar9 = 0;
            uVar7 = 0x3e00;
        }
        else {
            if (uVar4 == 0x3b) {
                uVar6 = 0;
                fcn.00016018(arg1,0,0x10a3);
                iVar5 = CONCAT71(uVar6 >> 8,0x19);
                fcn.00016018(arg1,iVar5,0xfc00);
                iVar8 = 0x20ea;
                iVar5 = CONCAT71(iVar5 >> 8,0x1e);
                goto code_r0x000219c0;
            }
            if (uVar4 != 0x3c) {
                if (uVar4 == 0x3f) {
                    uVar6 = 0;
                    fcn.00020e70(arg1,0x2a,0x7000,0x3000);
                    iVar5 = CONCAT71(uVar6 >> 8,0x19);
                    fcn.00020e70(arg1,iVar5,0x40,0);
                    iVar5 = CONCAT71(iVar5 >> 8,0x1b);
                    fcn.00020e70(arg1,iVar5,0,0xe00);
                    iVar5 = CONCAT71(iVar5 >> 8,0x1b);
                    fcn.00020e70(arg1,iVar5,0x7000,0);
                    iVar5 = CONCAT71(iVar5 >> 8,2);
                    fcn.00016018(arg1,iVar5,0x6042);
                    iVar5 = CONCAT71(iVar5 >> 8,6);
                    fcn.00016018(arg1,iVar5,0x14);
                    iVar5 = CONCAT71(iVar5 >> 8,0x6a);
                    fcn.00020e70(arg1,iVar5,0x7000,0x3000);
                    iVar5 = CONCAT71(iVar5 >> 8,0x59);
                    fcn.00020e70(arg1,iVar5,0x40,0);
                    iVar5 = CONCAT71(iVar5 >> 8,0x5b);
                    fcn.00020e70(arg1,iVar5,0,0xe00);
                    iVar5 = CONCAT71(iVar5 >> 8,0x5b);
                    fcn.00020e70(arg1,iVar5,0x7000,0);
                    iVar5 = CONCAT71(iVar5 >> 8,0x42);
                    fcn.00016018(arg1,iVar5,0x6042);
                    iVar8 = 0x14;
                    iVar5 = CONCAT71(iVar5 >> 8,0x46);
                    goto code_r0x000219c0;
                }
                if (uVar4 != 0x43) {
                    return;
                }
                uVar6 = 0;
                fcn.00020e70(arg1,0,8,0);
                iVar5 = CONCAT71(uVar6 >> 8,0xc);
                fcn.00020e70(arg1,iVar5,0x37d0,0x820);
                iVar5 = CONCAT71(iVar5 >> 8,0x1e);
                fcn.00020e70(arg1,iVar5,0,1);
                iVar5 = CONCAT71(iVar5 >> 8,0x19);
                fcn.00020e70(arg1,iVar5,0x8000,0);
                iVar5 = CONCAT71(iVar5 >> 8,0x19);
                fcn.00020e70(arg1,iVar5,0x21,0);
                iVar5 = CONCAT71(iVar5 >> 8,0x1e);
                fcn.00020e70(arg1,iVar5,0,0x2000);
                iVar5 = CONCAT71(iVar5 >> 8,0xd);
                fcn.00020e70(arg1,iVar5,0x100,0);
                fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,0xd),0,0x200);
                uVar6 = 0;
                fcn.00020e70(arg1,0,0,0x80);
                iVar5 = CONCAT71(uVar6 >> 8,6);
                fcn.00020e70(arg1,iVar5,0,0x10);
                fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,4),0,0x10);
                uVar9 = 0x4000;
                uVar3 = 0x1d;
                goto code_r0x00021944;
            }
            uVar6 = 0;
            fcn.00016018(arg1,0,0x10ab);
            iVar5 = CONCAT71(uVar6 >> 8,0x19);
            fcn.00016018(arg1,iVar5,0xfc00);
            iVar5 = CONCAT71(iVar5 >> 8,0x1e);
            fcn.00016018(arg1,iVar5,0x20eb);
            iVar5 = CONCAT71(iVar5 >> 8,0xd);
            fcn.00016018(arg1,iVar5,0x1666);
            iVar5 = CONCAT71(iVar5 >> 8,0xb);
            fcn.00020e70(arg1,iVar5,1,0);
            fcn.00020e70(arg1,CONCAT71(iVar5 >> 8,0x1d),0,0x4000);
            uVar9 = 0x210;
            uVar7 = 0x3de0;
        }
    }
    uVar3 = 0xc;
code_r0x00020fb7:
    uVar4 = 0;
    fcn.000151ac(arg1,uVar3 << 0x10,0x80);
    do {
        uVar4 = uVar4 + 1;
        iVar2 = fcn.0001511c(arg1,0x80);
        if (iVar2 < 0) break;
    } while (uVar4 < 100000);
    uVar1 = fcn.0001511c(arg1,0x80);
    uVar4 = 0;
    fcn.000151ac(arg1,(uVar3 | 0xffff8000) << 0x10 | ~uVar7 & uVar1 | uVar9,0x80);
    do {
        uVar4 = uVar4 + 1;
        iVar2 = fcn.0001511c(arg1,0x80);
        if (-1 < iVar2) break;
    } while (uVar4 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.00024a70 @ 0x24a70 */

void fcn.00024a70(int64_t arg1)

{
    uchar uVar1;
    int iVar2;
    ulong uVar3;
    bool bVar4;
    
    iVar2 = *(arg1 + 0x2b18);
    if (iVar2 < 0x2f) {
        if (iVar2 == 0x2e) goto code_r0x00024ab9;
        if (iVar2 < 0x20) {
            if ((((iVar2 == 0x1f) || (iVar2 == 0x1a)) || (iVar2 == 0x1b)) || (iVar2 == 0x1c)) goto code_r0x00024ab9;
            iVar2 = iVar2 + -0x1d;
            bVar4 = iVar2 == 0;
        }
        else {
            if ((iVar2 == 0x20) || (iVar2 == 0x21)) goto code_r0x00024ab9;
            iVar2 = iVar2 + -0x2c;
            bVar4 = iVar2 == 0;
        }
    }
    else {
        if ((((iVar2 == 0x2f) || (iVar2 == 0x30)) || (iVar2 == 0x31)) ||
           (((iVar2 == 0x3a || (iVar2 == 0x3b)) || ((iVar2 == 0x3c || (iVar2 == 0x3d)))))) goto code_r0x00024ab9;
        iVar2 = iVar2 + -0x43;
        bVar4 = iVar2 == 0;
    }
    if ((!bVar4) && (iVar2 != 1)) {
        return;
    }
code_r0x00024ab9:
    uVar3 = 0;
    uVar1 = fcn.000150bc(arg1,0x50);
    fcn.0001514c(arg1,CONCAT71(uVar3 >> 8,uVar1) | 0xc0,0x50);
    uVar3 = 0;
    uVar1 = fcn.000150bc(arg1,0x54);
    fcn.0001514c(arg1,CONCAT71(uVar3 >> 8,uVar1) & 0xfffffffffffffffd,0x54);
    uVar3 = 0;
    uVar1 = fcn.000150bc(arg1,0x50);
    fcn.0001514c(arg1,CONCAT71(uVar3 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
    return;
}


/* fcn.00024b48 @ 0x24b48 */

void fcn.00024b48(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    int32_t in_stack_00000088;
    
    iVar4 = *(arg1 + 0x2b18);
    if (iVar4 < 0x30) {
        if (((iVar4 == 0x2f) || (iVar4 == 0x21)) ||
           ((iVar4 == 0x28 || (((iVar4 == 0x29 || (iVar4 == 0x2a)) || (iVar4 == 0x2b)))))) goto code_r0x00024b9d;
        iVar4 = iVar4 + -0x2c;
    }
    else {
        if ((((iVar4 == 0x30) || (iVar4 == 0x31)) || (iVar4 == 0x3d)) || ((iVar4 == 0x3e || (iVar4 == 0x3f))))
        goto code_r0x00024b9d;
        iVar4 = iVar4 + -0x41;
    }
    if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) {
        return;
    }
code_r0x00024b9d:
    fcn.000159b0(arg1,0x1ae,0x100,0,in_stack_00000088);
    uVar5 = 0;
    uVar6 = 0;
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        uVar6 = uVar6 + 1;
        uVar3 = fcn.00015b30(arg1,0x1ae,0);
    } while (((uVar3 & 0x40) == 0) && (uVar6 < 200));
    fcn.000159b0(arg1,0x1ae,0x300,0,in_stack_00000088);
    uVar6 = 0;
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        uVar6 = uVar6 + 1;
        cVar1 = fcn.00015b30(arg1,0x1ae,0);
    } while ((-1 < cVar1) && (uVar6 < 200));
    fcn.000159b0(arg1,0x1ae,0x304,0,in_stack_00000088);
    do {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(0x32);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x32);
        }
        uVar5 = uVar5 + 1;
        uVar2 = fcn.00015b30(arg1,0x1ae,0);
    } while (((uVar2 >> 0xd & 1) != 0) && (uVar5 < 200));
    return;
}


/* fcn.0002a140 @ 0x2a140 */

//WARNING: Removing unreachable block (ram,0x0001615a)
//WARNING: Removing unreachable block (ram,0x0001617d)
//WARNING: Removing unreachable block (ram,0x0001619a)
//WARNING: Removing unreachable block (ram,0x000161c0)

void fcn.0002a140(int64_t arg1)

{
    uchar uVar1;
    uint32_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    uint16_t *puVar4;
    uint16_t uVar5;
    uint64_t arg2;
    
    uVar2 = 0;
    uVar1 = fcn.000150bc(arg1,0x50);
    fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) | 0xc0,0x50);
    uVar2 = 0;
    uVar1 = fcn.000150bc(arg1,0x56);
    fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) & 0xfffffffffffffffe,0x56);
    uVar2 = 0;
    uVar1 = fcn.000150bc(arg1,0x53);
    fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) & 0xffffffffffffff7f,0x53);
    uVar2 = 0;
    uVar1 = fcn.000150bc(arg1,0xf1);
    fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) & 0xffffffffffffff7f,0xf1);
    uVar2 = 0;
    uVar1 = fcn.000150bc(arg1,0x50);
    fcn.0001514c(arg1,CONCAT71(uVar2 >> 8,uVar1) & 0xffffffffffffff3f,0x50);
    arg1_00 = arg1;
    if (*(arg1 + 0x2b18) == 0x3c) {
        uVar5 = 0xfc28;
        do {
            fcn.00016134(arg1_00,uVar5,0);
            uVar5 = uVar5 + 2;
        } while (uVar5 < 0xfc38);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(3000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),3000);
        }
        fcn.00016134(arg1_00,0xfc26,0);
    }
    arg2 = 0xf800;
    puVar4 = 0x34000;
    iVar3 = 0x66;
    do {
        fcn.00016134(arg1_00,arg2,*puVar4);
        puVar4 = puVar4 + 1;
        arg2 = arg2 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    fcn.00016134(arg1_00,0xfc26,0x8000);
    fcn.00016134(arg1_00,0xfc28,0xbb3);
    if (*(arg1 + 0x2e58) == '\0') {
        fcn.000151ac(arg1,0xfe151fc7,0xb0);
    }
    return;
}


/* fcn.00015d4c @ 0x15d4c */

void fcn.00015d4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = 0;
    uVar2 = arg2 & 3;
    arg2_00 = arg3;
    if (uVar2 == 3) {
        arg2_00 = arg2_00 << 0x18;
        uVar4 = 0x80008000;
    }
    else if (uVar2 == 2) {
        arg2_00 = arg2_00 << 0x10;
        uVar4 = 0x8000c000;
    }
    else if (uVar2 == 1) {
        arg2_00 = arg2_00 << 8;
        uVar4 = 0x80006000;
    }
    else {
        uVar4 = 0x80003000;
    }
    fcn.000151ac(arg1,arg2_00,0x70);
    fcn.000151ac(arg1,(arg4 & 0xff) << 0x10 | arg2 & 0xfffffffc | uVar4,0x74);
    do {
        uVar3 = uVar3 + 1;
        iVar1 = fcn.0001511c(arg1,0x74);
        if (-1 < iVar1) break;
    } while (uVar3 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    return;
}


/* fcn.000243a4 @ 0x243a4 */

ulong fcn.000243a4(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t arg2;
    int64_t arg2_00;
    
    uVar3 = fcn.0001511c(arg1,0x40);
    iVar1 = *(arg1 + 0x2b18);
    *(arg1 + 0x2e64) = uVar3;
    if (iVar1 < 0x2d) {
        if (iVar1 != 0x2c) {
            if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 6)))) {
                arg2 = 0;
                uVar2 = fcn.000150bc(arg1,0x37);
                if ((uVar2 & 0xc) != 0xc) {
                    arg2 = CONCAT71(arg2 >> 8,0xc);
                    fcn.0001514c(arg1,arg2,0x37);
                }
                goto code_r0x00024467;
            }
            if ((iVar1 != 0x28) && (iVar1 != 0x29)) {
                uVar4 = iVar1 - 0x2a;
                arg2 = uVar4;
                if ((uVar4 != 0) && (uVar4 != 1)) goto code_r0x00024467;
            }
        }
    }
    else if ((((iVar1 != 0x2d) && (iVar1 != 0x2e)) && (iVar1 != 0x2f)) &&
            (((iVar1 != 0x30 && (iVar1 != 0x31)) && ((iVar1 != 0x3d && (iVar1 != 0x3e)))))) {
        uVar4 = iVar1 - 0x3f;
        arg2 = uVar4;
        if ((uVar4 != 0) && (uVar4 != 2)) goto code_r0x00024467;
    }
    arg2 = uVar3 | 0xe000;
    fcn.000151ac(arg1,uVar3 | 0xe000,0x40);
code_r0x00024467:
    iVar1 = *(arg1 + 0x2b18);
    if (((((iVar1 == 0x30) || (iVar1 == 0x31)) || (iVar1 == 0x3d)) ||
        (((iVar1 == 0x3e || (iVar1 == 0x3f)) || (iVar1 == 0x41)))) && (*(arg1 + 0x2e39) == '\0')) {
        arg2_00 = CONCAT71(arg2 >> 8,0x1f);
        fcn.000153ec(arg1,arg2_00,0xa43);
        fcn.000163fc(arg1,CONCAT71(arg2_00 >> 8,0x10),4,0);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(3000000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),3000000);
        }
    }
    uVar3 = fcn.0001511c(arg1,0x40);
    fcn.000151ac(arg1,uVar3 | 0x20000,0x40);
    if (*(arg1 + 0x2e39) == '\0') {
        *(arg1 + 0x2e68) = 1;
    }
    return 0;
}


/* fcn.00024518 @ 0x24518 */

ulong fcn.00024518(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t arg1_00;
    uint64_t uVar3;
    int64_t arg2;
    
    uVar3 = *(arg1 + 0x2e64);
    fcn.000151ac(arg1,*(arg1 + 0x2e64),0x40);
    iVar1 = *(arg1 + 0x2b18);
    *(arg1 + 0x2e68) = 0;
    arg1_00 = arg1;
    if (((((iVar1 == 0x30) || (iVar1 == 0x31)) || (iVar1 == 0x3d)) ||
        (((iVar1 == 0x3e || (iVar1 == 0x3f)) || (iVar1 == 0x41)))) && (*(arg1 + 0x2e39) == '\0')) {
        arg2 = CONCAT71(uVar3 >> 8,0x1f);
        fcn.000153ec(arg1,arg2,0xa43);
        fcn.000163fc(arg1,CONCAT71(arg2 >> 8,0x10),0,4);
        uVar2 = fcn.0001620c(arg1,0xd422);
        fcn.00016134(arg1_00,0xd422,uVar2 | 4);
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(3000000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),3000000);
        }
    }
    if (*(arg1 + 0x2e39) == '\x01') {
        fcn.00019678(arg1_00);
        fcn.00022b34(arg1_00);
        fcn.00022c4c(arg1);
        fcn.00022c4c(arg1);
        fcn.00022a64(arg1);
    }
    return 0;
}


/* fcn.000176a4 @ 0x176a4 */

//WARNING: Removing unreachable block (ram,0x0001615a)
//WARNING: Removing unreachable block (ram,0x0001617d)
//WARNING: Removing unreachable block (ram,0x0001619a)
//WARNING: Removing unreachable block (ram,0x000161c0)

void fcn.000176a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t arg1_00;
    int iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    int iVar9;
    int64_t iVar10;
    uint8_t uStackX_10;
    
    if (*(arg1 + 0x2e78) == 1) {
        fcn.000164a4(arg1,arg2,arg3,0);
    }
    else if (*(arg1 + 0x2e78) == 3) {
        uVar2 = fcn.0001620c(arg1,0xdc18);
        arg1_00 = arg1;
        fcn.00016134(arg1_00,0xdc18,uVar2 & 0xfdef);
        uVar2 = fcn.0001620c(arg1,0xdc06);
        fcn.00016134(arg1_00,0xdc06,uVar2 | 0x210);
        uVar2 = fcn.0001620c(arg1,0xdc06);
        uVar3 = fcn.0001620c(arg1,0xdc08);
        uVar4 = fcn.0001620c(arg1,0xdc0a);
        uVar8 = uVar4 & 0xfff;
        uVar4 = uVar4 | 0xf000;
        uVar7 = uVar3 & 0xf0ff;
        uVar3 = uVar3 | 0xf00;
        fcn.00016134(arg1_00,0xdc06,uVar2 | 0x200);
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar10 = 0x20;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            fcn.00016134(arg1_00,0xdc0a,uVar4);
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            fcn.00016134(arg1_00,0xdc0a,uVar8);
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            fcn.00016134(arg1_00,0xdc08,uVar7);
            fcn.00016134(arg1_00,0xdc0a,uVar4);
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar5 = 0;
        iVar9 = 0;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            uVar1 = uVar4;
            if (1U >> (4U - iVar9 & 0x1f) == 0) {
                uVar1 = uVar8;
            }
            fcn.00016134(arg1_00,0xdc0a,uVar1);
            iVar10 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar9 = iVar9 + 1;
        } while (iVar9 < 5);
        uStackX_10 = arg2 & 0x1f;
        iVar9 = 0;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            uVar1 = uVar4;
            if ((uStackX_10 >> (4U - iVar9 & 0x1f) & 1) == 0) {
                uVar1 = uVar8;
            }
            fcn.00016134(arg1_00,0xdc0a,uVar1);
            iVar10 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar9 = iVar9 + 1;
        } while (iVar9 < 5);
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar8);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar9 = 0;
        iVar10 = 7;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            uVar1 = uVar4;
            if (((arg3 >> 8) >> (7U - iVar9 & 0x1f) & 1) == 0) {
                uVar1 = uVar8;
            }
            fcn.00016134(arg1_00,0xdc0a,uVar1);
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar9 = iVar9 + 1;
        } while (iVar9 < 8);
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            uVar1 = uVar4;
            if ((arg3 >> (7U - iVar5 & 0x1f) & 1) == 0) {
                uVar1 = uVar8;
            }
            fcn.00016134(arg1_00,0xdc0a,uVar1);
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        do {
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar7);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar6 = 2;
            do {
                fcn.00016134(arg1_00,0xdc08,uVar3);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        if (*(arg1 + 0x2e58) == '\0') {
            fcn.000151ac(arg1,(uVar2 | 0x200) + 0x6e030000 | 0x80000000,0xb0);
        }
        return;
    }
    return;
}


/* fcn.00017214 @ 0x17214 */

//WARNING: Variable defined which should be unmapped: var_4h

int16_t fcn.00017214(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t arg1_00;
    int16_t iVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int iVar9;
    int64_t iVar10;
    int32_t var_4h;
    
    iVar5 = 0;
    uVar2 = fcn.0001620c(arg1,0xdc18);
    arg1_00 = arg1;
    fcn.00016134(arg1_00,0xdc18,uVar2 & 0xfdef);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x210);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    uVar3 = fcn.0001620c(arg1,0xdc08);
    uVar4 = fcn.0001620c(arg1,0xdc0a);
    uVar7 = uVar4 | 0xf000;
    uVar4 = uVar4 & 0xfff;
    uVar6 = uVar3 | 0xf00;
    uVar3 = uVar3 & 0xf0ff;
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x200);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar8 = 0x20;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        fcn.00016134(arg1_00,0xdc0a,uVar7);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar6);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar7);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar7);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar9 = 0;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        uVar1 = uVar7;
        if (1U >> (4U - iVar9 & 0x1f) == 0) {
            uVar1 = uVar4;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar8 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar6);
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar9 = iVar9 + 1;
    } while (iVar9 < 5);
    iVar9 = 0;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        uVar1 = uVar7;
        if (((arg2 & 0x1f) >> (4U - iVar9 & 0x1f) & 1) == 0) {
            uVar1 = uVar4;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar8 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar6);
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar9 = iVar9 + 1;
    } while (iVar9 < 5);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc08,uVar6);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    fcn.00016134(arg1_00,0xdc06,uVar2 & 0xfdff);
    iVar8 = 0x10;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        fcn.00016134(arg1_00,0xdc08,uVar3);
        uVar4 = fcn.0001620c(arg1,0xdc04);
        iVar5 = iVar5 * 2 + (uVar4 >> 9 & 1);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar6);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 7;
    do {
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar6);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x200);
    fcn.00016134(arg1_00,0xdc0a,uVar7);
    return iVar5;
}


/* fcn.0001691c @ 0x1691c */

int16_t fcn.0001691c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    uint16_t uVar9;
    int16_t iVar10;
    
    uVar6 = 0;
    iVar10 = 0;
    uVar2 = fcn.0001620c(arg1,0xdc18);
    arg1_00 = arg1;
    fcn.00016134(arg1_00,0xdc18,uVar2 & 0xffaf);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x50);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    uVar3 = fcn.0001620c(arg1,0xdc08);
    uVar4 = fcn.0001620c(arg1,0xdc0a);
    uVar9 = uVar4 & 0xfff0;
    uVar7 = uVar3 | 0xf00;
    uVar4 = uVar4 | 0xf;
    uVar3 = uVar3 & 0xf0ff;
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x40);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar9);
    iVar8 = 0x20;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar9);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar9);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 5;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        fcn.00016134(arg1_00,0xdc0a,uVar9);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        uVar1 = uVar4;
        if (((arg2 & 0x1f) >> (4U - uVar6 & 0x1f) & 1) == 0) {
            uVar1 = uVar9;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar8 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc08,uVar7);
    fcn.00016134(arg1_00,0xdc0a,uVar9);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc0a,uVar9);
    fcn.00016134(arg1_00,0xdc06,uVar2 & 0xffbf);
    iVar8 = 0x10;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc08,uVar3);
        uVar9 = fcn.0001620c(arg1,0xdc04);
        iVar10 = iVar10 * 2 + (uVar9 >> 6 & 1);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    iVar8 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 7;
    do {
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar3);
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x40);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    return iVar10;
}


/* fcn.00016d84 @ 0x16d84 */

//WARNING: Removing unreachable block (ram,0x0001615a)
//WARNING: Removing unreachable block (ram,0x0001617d)
//WARNING: Removing unreachable block (ram,0x0001619a)
//WARNING: Removing unreachable block (ram,0x000161c0)

void fcn.00016d84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t arg1_00;
    int iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    int iVar9;
    int64_t iVar10;
    uint8_t uStackX_10;
    
    uVar2 = fcn.0001620c(arg1,0xdc18);
    arg1_00 = arg1;
    fcn.00016134(arg1_00,0xdc18,uVar2 & 0xfdef);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x210);
    uVar2 = fcn.0001620c(arg1,0xdc06);
    uVar3 = fcn.0001620c(arg1,0xdc08);
    uVar4 = fcn.0001620c(arg1,0xdc0a);
    uVar8 = uVar4 & 0xfff;
    uVar4 = uVar4 | 0xf000;
    uVar7 = uVar3 & 0xf0ff;
    uVar3 = uVar3 | 0xf00;
    fcn.00016134(arg1_00,0xdc06,uVar2 | 0x200);
    fcn.00016134(arg1_00,0xdc08,uVar7);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar10 = 0x20;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar10 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar8);
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        fcn.00016134(arg1_00,0xdc08,uVar7);
        fcn.00016134(arg1_00,0xdc0a,uVar4);
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar5 = 0;
    iVar9 = 0;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        uVar1 = uVar4;
        if (1U >> (4U - iVar9 & 0x1f) == 0) {
            uVar1 = uVar8;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar9 = iVar9 + 1;
    } while (iVar9 < 5);
    uStackX_10 = arg2 & 0x1f;
    iVar9 = 0;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        uVar1 = uVar4;
        if ((uStackX_10 >> (4U - iVar9 & 0x1f) & 1) == 0) {
            uVar1 = uVar8;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar10 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar9 = iVar9 + 1;
    } while (iVar9 < 5);
    fcn.00016134(arg1_00,0xdc08,uVar7);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    iVar10 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar7);
    fcn.00016134(arg1_00,0xdc0a,uVar8);
    iVar10 = 2;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar3);
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar9 = 0;
    iVar10 = 7;
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        uVar1 = uVar4;
        if (((arg3 >> 8) >> (7U - iVar9 & 0x1f) & 1) == 0) {
            uVar1 = uVar8;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    do {
        fcn.00016134(arg1_00,0xdc08,uVar7);
        uVar1 = uVar4;
        if ((arg3 >> (7U - iVar5 & 0x1f) & 1) == 0) {
            uVar1 = uVar8;
        }
        fcn.00016134(arg1_00,0xdc0a,uVar1);
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    do {
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar7);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar6 = 2;
        do {
            fcn.00016134(arg1_00,0xdc08,uVar3);
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    fcn.00016134(arg1_00,0xdc08,uVar7);
    fcn.00016134(arg1_00,0xdc0a,uVar4);
    if (*(arg1 + 0x2e58) == '\0') {
        fcn.000151ac(arg1,(uVar2 | 0x200) + 0x6e030000 | 0x80000000,0xb0);
    }
    return;
}


/* fcn.00015f48 @ 0x15f48 */

uint64_t fcn.00015f48(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar5 = 0;
    uVar4 = arg2 & 3;
    if (uVar4 == 3) {
        uVar1 = 0x28000;
    }
    else if (uVar4 == 2) {
        uVar1 = 0x2c000;
    }
    else {
        uVar1 = 0x23000;
        if (uVar4 == 1) {
            uVar1 = 0x26000;
        }
    }
    fcn.000151ac(arg1,arg2 & 0xfffffffc | uVar1,0x74);
    do {
        uVar5 = uVar5 + 1;
        iVar2 = fcn.0001511c(arg1,0x74);
        if (iVar2 < 0) break;
    } while (uVar5 < 100000);
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(0x14);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),0x14);
    }
    uVar3 = fcn.0001511c(arg1,0x70);
    if (uVar4 == 3) {
        uVar3 = uVar3 >> 0x18 & 0xff;
    }
    else if (uVar4 == 2) {
        uVar3 = uVar3 >> 0x10;
    }
    else if (uVar4 == 1) {
        uVar3 = uVar3 >> 8;
    }
    return uVar3;
}


/* fcn.0002ae18 @ 0x2ae18 */

void fcn.0002ae18(int64_t arg1)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t arg2;
    ulong in_R8;
    ulong uVar5;
    uint32_t uVar6;
    
    iVar1 = *(arg1 + 0x2b18);
    if (((iVar1 == 0x36) || (iVar1 == 0x37)) || (iVar1 == 0x38)) {
        arg2 = 0x17;
        uVar4 = 0x16;
    }
    else if (((iVar1 == 0x3a) || (iVar1 == 0x3b)) || (iVar1 == 0x3c)) {
        uVar4 = 0x110;
        arg2 = 0x114;
    }
    else {
        arg2 = 7;
        uVar4 = 6;
    }
    fcn.0002a930(arg1,arg2,CONCAT71(in_R8 >> 8,1));
    uVar6 = 0;
    cVar2 = fcn.0002a5a0(arg1,uVar4);
    do {
        if (cVar2 == '\0') {
            return;
        }
        cVar2 = fcn.0002a5a0(arg1,0x9c);
        if (cVar2 != '\0') {
            uVar5 = 0;
            fcn.0002a930(arg1,arg2,0);
            uVar3 = 0;
            cVar2 = fcn.0002a5a0(arg1,0x9c);
            do {
                if (cVar2 == '\0') break;
                cVar2 = fcn.0002a5a0(arg1,0x9c);
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x7d1);
            fcn.0002a930(arg1,arg2,CONCAT71(uVar5 >> 8,1));
        }
        cVar2 = fcn.0002a5a0(arg1,uVar4);
        uVar6 = uVar6 + 1;
        if (2000 < uVar6) {
            return;
        }
    } while( true );
}


/* fcn.0002af20 @ 0x2af20 */

void fcn.0002af20(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    ulong in_R8;
    unkbyte7 in_R9;
    uint32_t uVar7;
    
    iVar2 = *(arg1 + 0x2b18);
    if (((iVar2 == 0x36) || (iVar2 == 0x37)) || (iVar2 == 0x38)) {
        uVar4 = 0x17;
    }
    else if (((iVar2 == 0x3a) || (iVar2 == 0x3b)) || (iVar2 == 0x3c)) {
        uVar4 = 0x114;
    }
    else {
        uVar4 = 7;
    }
    fcn.0002a930(arg1,0x9c,CONCAT71(in_R8 >> 8,1));
    uVar7 = 0;
    uVar1 = uVar4;
    if (*(arg1 + 0x2b3c) != '\x01') {
        if (*(arg1 + 0x2b3c) == '\x02') {
            fcn.00015c64(arg1,uVar1,0,CONCAT71(in_R9,2));
            return;
        }
        return;
    }
    if (uVar1 < 0x70) {
code_r0x0002aa1a:
        uVar3 = uVar4 & 3;
        if (uVar3 == 3) {
            uVar6 = 0x80008000;
        }
        else if (uVar3 == 2) {
            uVar6 = 0x80004000;
        }
        else if (uVar3 == 1) {
            uVar6 = 0x80002000;
        }
        else {
            uVar6 = 0x80001000;
        }
        fcn.000151ac(arg1,0,0xb0);
        fcn.000151ac(arg1,uVar1 & 0xfffffffc | uVar6,0xb4);
        fcn.000151ac(arg1,0,0x7c);
        do {
            iVar2 = fcn.0001511c(arg1,0xb4);
            uVar7 = uVar7 + 1;
            if (*(arg1 + 0x2ace) == '0') {
                (**(arg1 + 0x2c68))(1);
            }
            else {
                (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1);
            }
        } while ((iVar2 < 0) && (uVar7 < 100));
        if ((uVar7 == 100) && (iVar2 < 0)) {
            *(arg1 + 0x2e58) = 1;
        }
    }
    else {
        uVar5 = uVar4 & 0xfffc;
        uVar3 = uVar4 & 3;
        if ((uVar4 & 3) == 0) {
            uVar1 = fcn.0002a84c(arg1,uVar5);
            uVar1 = uVar1 & 0xffffff00;
        }
        else if (uVar3 == 1) {
            uVar1 = fcn.0002a84c(arg1,uVar5);
            uVar1 = uVar1 & 0xffff00ff;
        }
        else if (uVar3 == 2) {
            uVar1 = fcn.0002a84c(arg1,uVar5);
            uVar1 = uVar1 & 0xff00ffff;
        }
        else {
            if (uVar3 != 3) goto code_r0x0002aa1a;
            uVar1 = fcn.0002a84c(arg1,uVar5);
            uVar1 = uVar1 & 0xffffff;
        }
        fcn.0002acb0(arg1,uVar5,uVar1);
    }
    return;
}


/* fcn.0002b2f4 @ 0x2b2f4 */

ulong fcn.0002b2f4(int64_t arg1)

{
    char cVar1;
    uchar *arg1_00;
    uint16_t uVar2;
    uint uVar3;
    uchar *puVar4;
    uint64_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint16_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    char *pcVar14;
    uint64_t uVar15;
    uchar *puVar16;
    uchar *puStack_38;
    uint uStack_30;
    ushort uStack_2c;
    
    arg1_00 = *(arg1 + 0x2e48);
    puVar16 = arg1_00 + 0xe;
    fcn.0002e758(arg1_00,1000);
    iVar7 = 6;
    puVar4 = arg1_00;
    do {
        *puVar4 = puVar4[(arg1 - arg1_00) + 0x34];
        puVar4[6] = 0xff;
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar15 = 0;
    *(arg1_00 + 0xc) = 0x8888;
    uVar2 = 0;
    uVar10 = 0x2e;
    do {
        *puVar16 = uVar2;
        puVar16 = puVar16 + 1;
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x2e);
    uVar2 = *(arg1 + 0x260);
    uStack_2c = 0xe;
    uStack_30 = 0x3c;
    puStack_38 = arg1_00;
    fcn.00019da8(arg1,&puStack_38,0);
    uVar5 = uVar15;
    while( true ) {
        if (*(arg1 + 0x2ace) == '0') {
            (**(arg1 + 0x2c68))(1000);
        }
        else {
            (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),1000);
        }
        if (-1 < *(*(arg1 + 0x268) + uVar2 * 0x10)) break;
        uVar9 = uVar5 + 1;
        uVar5 = uVar9;
        if (9 < uVar9) {
            return 0;
        }
    }
    if (*(arg1 + 0x2ace) == '0') {
        (**(arg1 + 0x2c68))(4000);
    }
    else {
        (**(arg1 + 0x2c88))(*(arg1 + 0x2c50),4000);
    }
    uVar5 = uVar15;
    uVar8 = uVar15;
    do {
        iVar6 = uVar8;
        uVar2 = *(arg1 + 0x2ad0);
        iVar7 = *(arg1 + 0x270);
        uVar13 = uVar2;
        if (*(iVar7 + uVar13 * 0x10) < 0) {
            uVar5 = uVar5 + 1;
            if (uVar5 == 10) break;
        }
        else if ((*(iVar7 + uVar13 * 0x10) & 0x200000) == 0) {
            uVar12 = 0;
            pcVar14 = *(iVar7 + 8 + uVar13 * 0x10) + 0xe + (*(iVar7 + 0xc + uVar13 * 0x10) << 0x20);
            uVar9 = 0;
            if (uVar10 != 0) {
                do {
                    uVar12 = uVar9;
                    cVar1 = *pcVar14;
                    pcVar14 = pcVar14 + 1;
                    if (cVar1 != uVar8 + uVar12) break;
                    uVar11 = uVar12 + 1;
                    uVar12 = uVar11;
                    uVar9 = uVar12;
                } while (uVar11 < uVar10);
            }
            uVar3 = 0xc0000600;
            if (uVar2 != 0xff) {
                uVar3 = 0x80000600;
            }
            *(iVar7 + uVar13 * 0x10) = uVar3;
            *(arg1 + 0x2ad0) = *(arg1 + 0x2ad0) + 1U & 0xff;
            if (uVar12 != uVar10) break;
            uVar8 = iVar6 + 1;
            uVar10 = uVar10 + 1;
            uVar5 = uVar15;
        }
        else {
            uVar3 = 0xc0000600;
            if (uVar2 != 0xff) {
                uVar3 = 0x80000600;
            }
            *(iVar7 + uVar13 * 0x10) = uVar3;
            *(arg1 + 0x2ad0) = *(arg1 + 0x2ad0) + 1U & 0xff;
        }
        iVar6 = uVar8;
    } while (uVar10 < 0x2f);
    if (iVar6 != 1) {
        return 0;
    }
    return 1;
}


/* fcn.0002e58c @ 0x2e58c */

int64_t fcn.0002e58c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    
    iVar1 = fcn.0002e54c(arg1);
    if (iVar1 == 0) {
        fcn.0002fe18(0x343e0,0x2c0,0x34488);
    }
    iVar1 = fcn.0002e54c(arg2);
    if (iVar1 == 0) {
        fcn.0002fe18(0x343e0,0x2c1,0x344a8);
    }
    cVar2 = *arg1;
    if (cVar2 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if (cVar2 != *arg2) break;
            arg2 = arg2 + 1;
            cVar2 = *(arg2 + arg1);
        } while (cVar2 != '\0');
    }
    return cVar2 - *arg2;
}


/* fcn.0002b5b4 @ 0x2b5b4 */

ulong fcn.0002b5b4(uint32_t arg1)

{
    char cVar1;
    int iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int16_t iVar4;
    bool bVar5;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    bVar5 = *(arg1_00 + 2) != '\0';
    if (!bVar5) {
        *(arg1_00 + 0x2c50) = arg1_00;
        *(arg1_00 + 0x2c88) = 0x114a4;
        *(arg1_00 + 0x2c90) = 0;
        *(arg1_00 + 0x2ca0) = 0x114b4;
        *(arg1_00 + 0x2c98) = 0;
        *(arg1_00 + 0x2ca8) = 0;
        *(arg1_00 + 0x2cb0) = 0;
        *(arg1_00 + 0x2cb8) = 0;
        *(arg1_00 + 0x2ace) = 0x31;
        fcn.00019678(arg1);
        fcn.00022a64(arg1_00);
    }
    iVar2 = *(arg1_00 + 0x2af0);
    fcn.00022b34(arg1);
    fcn.00022c4c(arg1_00);
    fcn.000243a4(arg1_00);
    fcn.00022c4c(arg1_00);
    fcn.00022a64(arg1_00);
    if (bVar5) {
        if (iVar2 != 1) {
            cVar1 = *(arg1_00 + 0x2e69);
            for (uVar3 = 0; (cVar1 == '\0' && ((**(*0x35158 + 0xf8))(1000), uVar3 < 0x3e9)); uVar3 = uVar3 + 1) {
                cVar1 = *(arg1_00 + 0x2e69);
            }
        }
    }
    else {
        do {
            (**(*0x35158 + 0xf8))(1000);
            uVar3 = fcn.000150bc(arg1_00,0x6c);
        } while ((uVar3 & 2) == 0);
    }
    fcn.00019f74(arg1_00);
    uVar3 = *(arg1_00 + 0x2a90);
    if (*(arg1_00 + 0x2a90) != *(arg1_00 + 0x2a92)) {
        do {
            iVar4 = uVar3;
            uVar3 = 0;
            if (iVar4 != 0x1ff) {
                uVar3 = iVar4 + 1;
            }
        } while (uVar3 != *(arg1_00 + 0x2a92));
        *(arg1_00 + 0x2a90) = uVar3;
    }
    fcn.00024518(arg1_00);
    if (!bVar5) {
        *(arg1_00 + 2) = 0;
        fcn.0001a64c(arg1_00);
        *(arg1_00 + 0x2c88) = 0;
        *(arg1_00 + 0x2c90) = 0;
        *(arg1_00 + 0x2c98) = 0;
        *(arg1_00 + 0x2ca8) = 0;
        *(arg1_00 + 0x2cb0) = 0;
        *(arg1_00 + 0x2cb8) = 0;
        *(arg1_00 + 0x2ca0) = 0;
    }
    return 0;
}


/* fcn.0002b99c @ 0x2b99c */

ulong fcn.0002b99c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    char cVar2;
    
    cVar2 = arg1;
    iVar1 = arg1;
    if (iVar1 - 0x30U < 10) {
        cVar2 = cVar2 + -0x30;
    }
    else if (iVar1 - 0x41U < 6) {
        cVar2 = cVar2 + -0x37;
    }
    else {
        if (5 < iVar1 - 0x61U) {
            return 0x8000000000000002;
        }
        cVar2 = cVar2 + -0x57;
    }
    *arg2 = cVar2;
    return 0;
}


/* fcn.0002db1c @ 0x2db1c */

uint32_t fcn.0002db1c(uint32_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong in_RDX;
    int64_t arg2;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2e35) == '\0') {
        arg2 = CONCAT71(in_RDX >> 8,0x1f);
        fcn.000153ec(arg1_00,arg2,0xa43);
        uVar1 = fcn.00015768(arg1,CONCAT71(arg2 >> 8,0x12));
        uVar2 = (uVar1 ^ 0x4000 | 0x8000) >> 0xe;
    }
    else {
        uVar2 = fcn.0001620c(arg1_00,0xe908);
        uVar2 = uVar2 >> 7 & 1;
    }
    return uVar2;
}


/* fcn.0002db6c @ 0x2db6c */

uint64_t fcn.0002db6c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x7e,0x34190);
    }
    uVar1 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar1 = 0;
    }
    else if (*arg1 != 0) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(arg1 + uVar1 * 2) != 0);
    }
    return uVar1;
}


/* fcn.0002e54c @ 0x2e54c */

int64_t fcn.0002e54c(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        fcn.0002fe18(0x343e0,0x273,0x343c8);
    }
    iVar2 = 0;
    cVar1 = *arg1;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = *(iVar2 + arg1);
    }
    return iVar2 + 1;
}


/* fcn.0002e8e8 @ 0x2e8e8 */

ulong fcn.0002e8e8(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar uVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    uint in_R8;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint *puVar9;
    uint *puVar10;
    uchar *puVar11;
    uchar *puVar12;
    
    uVar6 = CONCAT44(in_R8,arg3);
    uVar4 = CONCAT44(in_register_0000000c,arg1) | arg2;
    if (((uVar4 & 7) == 0) && (7 < uVar6)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar7 = CONCAT44(in_register_0000000c,arg1);
            uVar4 = uVar6 >> 3;
            iVar5 = uVar6 + uVar4 * -8;
            do {
                uVar3 = *arg2;
                arg2 = arg2 + 8;
                *puVar7 = uVar3;
                puVar7 = puVar7 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            if (iVar5 != 0) {
                arg2 = arg2 - puVar7;
                do {
                    *puVar7 = *(arg2 + puVar7);
                    puVar7 = puVar7 + 1;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar7 = arg2 + uVar6;
            puVar8 = CONCAT44(in_register_0000000c,arg1) + uVar6;
            uVar4 = arg3 & 7;
            if ((arg3 & 7) != 0) {
                uVar6 = uVar6 - uVar4;
                do {
                    puVar7 = puVar7 + -1;
                    puVar8 = puVar8 + -1;
                    *puVar8 = *puVar7;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
                if (uVar6 == 0) goto code_r0x0002ea97;
            }
            iVar5 = (uVar6 - 1 >> 3) + 1;
            do {
                puVar7 = puVar7 + -1;
                puVar8 = puVar8 + -1;
                *puVar8 = *puVar7;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
    }
    else if (((uVar4 & 3) == 0) && (3 < uVar6)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar9 = CONCAT44(in_register_0000000c,arg1);
            uVar4 = uVar6 >> 2;
            iVar5 = uVar6 + uVar4 * -4;
            do {
                uVar2 = *arg2;
                arg2 = arg2 + 4;
                *puVar9 = uVar2;
                puVar9 = puVar9 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            if (iVar5 != 0) {
                arg2 = arg2 - puVar9;
                do {
                    *puVar9 = *(arg2 + puVar9);
                    puVar9 = puVar9 + 1;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar9 = arg2 + uVar6;
            puVar10 = CONCAT44(in_register_0000000c,arg1) + uVar6;
            uVar4 = arg3 & 3;
            if ((arg3 & 3) != 0) {
                uVar6 = uVar6 - uVar4;
                do {
                    puVar9 = puVar9 + -1;
                    puVar10 = puVar10 + -1;
                    *puVar10 = *puVar9;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
                if (uVar6 == 0) goto code_r0x0002ea97;
            }
            iVar5 = (uVar6 - 1 >> 2) + 1;
            do {
                puVar9 = puVar9 + -1;
                puVar10 = puVar10 + -1;
                *puVar10 = *puVar9;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
    }
    else if (CONCAT44(in_register_0000000c,arg1) < arg2) {
        puVar11 = CONCAT44(in_register_0000000c,arg1);
        if (uVar6 != 0) {
            do {
                *puVar11 = puVar11[arg2 - CONCAT44(in_register_0000000c,arg1)];
                puVar11 = puVar11 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
        puVar11 = (uVar6 - 1) + CONCAT44(in_register_0000000c,arg1);
        puVar12 = (uVar6 - 1) + arg2;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar1 = *puVar12;
            puVar12 = puVar12 + -1;
            *puVar11 = uVar1;
            puVar11 = puVar11 + -1;
        }
    }
code_r0x0002ea97:
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.0002ea9c @ 0x2ea9c */

int64_t fcn.0002ea9c(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    
    uVar1 = CONCAT44(in_register_00000014,arg2);
    puVar2 = arg1;
    if (((arg1 & 7U) == 0) && (7 < uVar1)) {
        uVar3 = uVar1 >> 3;
        uVar1 = uVar1 + uVar3 * -8;
        do {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    else if (((arg1 & 3U) == 0) && (3 < uVar1)) {
        uVar3 = uVar1 >> 2;
        uVar1 = uVar1 + uVar3 * -4;
        do {
            *puVar2 = 0;
            puVar2 = puVar2 + 4;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return arg1;
}


/* fcn.0002eee0 @ 0x2eee0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h_2

uint64_t fcn.0002eee0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_a0h,uint32_t arg_a8h)

{
    uint32_t arg2_00;
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t arg2_01;
    uint8_t *puVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    char *pcVar14;
    char *pcVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t *puVar18;
    int iVar19;
    uint64_t uVar20;
    bool bVar21;
    bool bVar22;
    int64_t var_18h_2;
    int64_t var_bp_20h;
    uint32_t var_28h_2;
    int64_t var_30h;
    char in_stack_00000030;
    uint32_t var_88h;
    int64_t var_90h;
    uint64_t uStack_f8;
    char *pcStack_f0;
    uint64_t uStack_e0;
    uint64_t *puStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    int64_t var_80h;
    uint32_t var_78h;
    uint32_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar16 = 0;
    uVar17 = arg3;
    puStack_d8 = NULL;
    iVar19 = 0;
    if (arg2 == 0) {
        if ((arg3 & 0x2000U) != 0) goto code_r0x0002ef4e;
code_r0x0002ef61:
        var_40h = uVar17 & 0x100;
        uStack_b0 = uVar17 & 0x40;
        uStack_b8 = (-(var_40h != 0) & 0xff00) + 0xff;
        iStack_a0 = ((arg3 & 0x100U) != 0) + 1;
        if ((arg3 & 0x2000U) == 0) {
            if (arg2 == 0) goto code_r0x0002ef42;
        }
        else {
            arg1 = arg1 & -(arg2 != 0);
        }
        uStack_f8 = 0;
        pcStack_f0 = NULL;
        pcStack_90 = NULL;
        if (arg1 != NULL) {
            pcStack_90 = arg1;
            iVar10 = (arg2 + -1) * 2;
            if ((uVar17 & 0x40) == 0) {
                iVar10 = arg2 + -1;
            }
            pcStack_f0 = arg1 + iVar10;
        }
        if (var_40h == 0) {
            iVar4 = iVar19;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uStack_d0 = (*arg4 | iVar4) & uStack_b8;
        if (uStack_d0 != 0) {
            do {
                uVar17 = arg3;
                if ((arg1 != NULL) && (pcStack_f0 <= arg1)) break;
                uVar20 = uVar17 & 0x2140;
                uStack_c8 = 0;
                uVar13 = 1;
                uStack_c0 = 1;
                cVar1 = '\0';
                bVar21 = false;
                in_stack_00000030 = '\0';
                uStack_e0 = 0;
                uStack_a8 = 0;
                iVar4 = 0;
                uVar12 = uVar16;
                var_bp_20h = uVar20;
                if (uStack_d0 == 10) {
                    pcVar14 = 0x3494c;
                    iVar3 = iVar19;
                    if (var_40h != 0) {
                        iVar3 = (arg4 + iStack_a0)[1] << 8;
                    }
                    uStack_d0 = (iVar3 | *(arg4 + iStack_a0)) & uStack_b8;
                    bVar22 = uStack_d0 == 0xd;
code_r0x0002f8ec:
                    puVar8 = arg4 + iStack_a0;
                    if (!bVar22) {
                        puVar8 = arg4;
                    }
code_r0x0002f8f0:
                    _var_28h_2 = puVar8;
                }
                else {
                    if (uStack_d0 == 0xd) {
                        iVar3 = iVar4;
                        if (var_40h != 0) {
                            iVar3 = (arg4 + iStack_a0)[1] << 8;
                        }
                        pcVar14 = 0x3494c;
                        uStack_d0 = (iVar3 | *(arg4 + iStack_a0)) & uStack_b8;
                        bVar22 = uStack_d0 == 10;
                        if (!bVar22) {
                            pcVar14 = 0x34950;
                        }
                        goto code_r0x0002f8ec;
                    }
                    _var_28h_2 = arg4;
                    if (uStack_d0 == 0x25) {
                        puVar11 = var_30h;
                        puVar18 = puStack_d8;
code_r0x0002f09f:
                        while( true ) {
                            _var_28h_2 = arg4 + iStack_a0;
                            if (var_40h == 0) {
                                iVar3 = iVar19;
                            }
                            else {
                                iVar3 = _var_28h_2[1] << 8;
                            }
                            uStack_d0 = (*_var_28h_2 | iVar3) & uStack_b8;
                            if (uStack_d0 < 0x33) break;
                            if ((((((uStack_d0 != 0x33) && (uStack_d0 != 0x34)) && (uStack_d0 != 0x35)) &&
                                 ((uStack_d0 != 0x36 && (uStack_d0 != 0x37)))) && (uStack_d0 != 0x38)) &&
                               (uStack_d0 != 0x39)) {
                                if ((uStack_d0 == 0x4c) || (uStack_d0 == 0x6c)) {
                                    uVar20 = uVar20 | 0x10;
                                    goto code_r0x0002f17f;
                                }
                                goto code_r0x0002f2c6;
                            }
code_r0x0002f128:
                            uStack_e0 = 0;
                            if (0x2f < uStack_d0) {
code_r0x0002f139:
                                uStack_e0 = uVar16;
                                do {
                                    if (0x39 < uStack_d0) break;
                                    _var_28h_2 = _var_28h_2 + iStack_a0;
                                    uStack_e0 = uStack_d0 + (uStack_e0 * 5 + -0x18) * 2;
                                    if (var_40h == 0) {
                                        iVar3 = iVar4;
                                    }
                                    else {
                                        iVar3 = _var_28h_2[1] << 8;
                                    }
                                    uStack_d0 = (*_var_28h_2 | iVar3) & uStack_b8;
                                } while (0x2f < uStack_d0);
                            }
                            arg4 = _var_28h_2 + -iStack_a0;
                            uVar12 = uStack_e0;
                            if ((uVar20 >> 0xb & 1) == 0) {
                                uVar20 = uVar20 | 0x200;
                                uStack_c8 = uStack_e0;
                                var_bp_20h = uVar20;
                            }
                            else {
                                uStack_c0 = uStack_e0;
                                uVar13 = uStack_e0;
                            }
                        }
                        if (uStack_d0 == 0x32) goto code_r0x0002f128;
                        if (uStack_d0 == 0) {
                            uVar13 = uVar16;
                            _var_28h_2 = arg4;
                            goto code_r0x0002f07f;
                        }
                        if (uStack_d0 == 0x20) {
                            uVar20 = uVar20 | 4;
                            goto code_r0x0002f17f;
                        }
                        if (uStack_d0 == 0x2a) {
                            if ((uVar20 >> 0xb & 1) == 0) {
                                uVar20 = uVar20 | 0x200;
                                if (puVar18 == NULL) {
                                    uStack_c8 = *puVar11;
                                    puVar11 = puVar11 + 1;
                                    var_30h = puVar11;
                                }
                                else {
                                    uStack_c8 = *puVar18;
                                    puVar18 = puVar18 + 1;
                                    puStack_d8 = puVar18;
                                }
                                arg4 = _var_28h_2;
                                var_bp_20h = uVar20;
                            }
                            else {
                                if (puVar18 == NULL) {
                                    uVar13 = *puVar11;
                                    puVar11 = puVar11 + 1;
                                    var_30h = puVar11;
                                }
                                else {
                                    uVar13 = *puVar18;
                                    puVar18 = puVar18 + 1;
                                    puStack_d8 = puVar18;
                                }
                                uStack_c0 = uVar13;
                                arg4 = _var_28h_2;
                            }
                            goto code_r0x0002f09f;
                        }
                        if (uStack_d0 == 0x2b) {
                            uVar20 = uVar20 | 2;
code_r0x0002f17f:
                            arg4 = _var_28h_2;
                            var_bp_20h = uVar20;
                            goto code_r0x0002f09f;
                        }
                        if (uStack_d0 == 0x2c) {
                            uVar20 = uVar20 | 8;
                            goto code_r0x0002f17f;
                        }
                        if (uStack_d0 == 0x2d) {
                            uVar20 = uVar20 | 1;
                            goto code_r0x0002f17f;
                        }
                        if (uStack_d0 == 0x2e) {
                            uVar20 = uVar20 | 0x800;
                            goto code_r0x0002f17f;
                        }
                        if (uStack_d0 == 0x30) {
                            if ((uVar20 >> 0xb & 1) != 0) goto code_r0x0002f128;
                            uVar20 = uVar20 | 0x20;
                            var_bp_20h = uVar20;
                            goto code_r0x0002f139;
                        }
                        if (uStack_d0 == 0x31) goto code_r0x0002f128;
code_r0x0002f2c6:
                        if (100 < uStack_d0) {
                            if (uStack_d0 == 0x67) {
                                if (puVar18 == NULL) {
                                    var_30h = puVar11 + 1;
                                    uVar7 = *puVar11;
                                }
                                else {
                                    uVar7 = *puVar18;
                                    puStack_d8 = puVar18 + 1;
                                }
                                if (uVar7 == 0) {
                                    pcVar14 = "<null guid>";
                                    goto code_r0x0002f8fb;
                                }
                                if (uVar7 == 0xfffffffffffffffc) {
                                    fcn.0002fe18(0x35060,0x1e,0x33a48);
                                }
                                if (uVar7 == 0xfffffffffffffffa) {
                                    fcn.0002fe18(0x35060,0x1e,0x33a48);
                                }
                                fcn.0002fd3c(&var_80h,0x26,0,0x348e0);
code_r0x0002f87d:
                                pcVar14 = &var_80h;
                                uVar13 = uStack_c0;
                            }
                            else {
                                if (uStack_d0 == 0x70) {
                                    uVar20 = uVar20 & 0xffffffffffffffd9 | 0x10;
code_r0x0002f5d1:
                                    uVar20 = uVar20 | 0x20;
code_r0x0002f5d5:
                                    uVar20 = uVar20 | 0x80;
code_r0x0002f5da:
                                    if (-1 < uVar20) {
                                        uVar20 = uVar20 & 0xfffffffffffffffd | 0x4000;
                                    }
                                    goto code_r0x0002f5e8;
                                }
                                if (uStack_d0 != 0x72) {
                                    if (uStack_d0 == 0x73) {
code_r0x0002f4d4:
                                        uVar7 = uVar20 | 0x400;
code_r0x0002f4d9:
                                        if (puVar18 == NULL) {
                                            puVar5 = *puVar11;
                                            var_30h = puVar11 + 1;
                                        }
                                        else {
                                            puVar5 = *puVar18;
                                            puStack_d8 = puVar18 + 1;
                                        }
                                        pcVar14 = "<null string>";
                                        if (puVar5 != NULL) {
                                            pcVar14 = puVar5;
                                        }
                                        uVar20 = uVar7 & 0xfffffffffffffbff;
                                        if (puVar5 != NULL) {
                                            uVar20 = uVar7;
                                        }
                                        uVar13 = uVar13 & -((uVar20 & 0x800) != 0);
                                        var_bp_20h = uVar20;
                                    }
                                    else {
                                        if (uStack_d0 != 0x74) {
                                            if (uStack_d0 != 0x75) {
                                                if (uStack_d0 != 0x78) goto code_r0x0002f07f;
                                                goto code_r0x0002f5d5;
                                            }
                                            goto code_r0x0002f5da;
                                        }
                                        if (puVar18 == NULL) {
                                            uVar7 = *puVar11;
                                            var_30h = puVar11 + 1;
                                        }
                                        else {
                                            uVar7 = *puVar18;
                                            puStack_d8 = puVar18 + 1;
                                        }
                                        if (uVar7 != 0) {
                                            fcn.0002fd3c(&var_80h,0x26,0,0x34928);
                                            uStack_c0 = uVar13;
                                            goto code_r0x0002f87d;
                                        }
                                        pcVar14 = "<null time>";
                                    }
                                    goto code_r0x0002f8fb;
                                }
                                if (puVar18 == NULL) {
                                    uVar7 = *puVar11;
                                    var_30h = puVar11 + 1;
                                }
                                else {
                                    uVar7 = *puVar18;
                                    puStack_d8 = puVar18 + 1;
                                }
                                pcVar14 = &var_80h;
                                if (uVar7 < 0) {
                                    if ((uVar7 & 0x7fffffffffffffff) - 1 < 0x21) {
                                        pcVar14 = (uVar7 & 0x7fffffffffffffff) * 0x15;
                                        iVar10 = 0x349eb;
                                        goto code_r0x0002f598;
                                    }
                                }
                                else if (uVar7 < 6) {
                                    iVar10 = uVar7 * 0x19;
                                    pcVar14 = "Success";
code_r0x0002f598:
                                    pcVar14 = pcVar14 + iVar10;
                                    if (pcVar14 != &var_80h) goto code_r0x0002f8fb;
                                }
                                fcn.0002fd3c(&var_80h,0x26,0,0x34944);
                            }
                            uVar12 = uStack_e0;
                            goto code_r0x0002f8fb;
                        }
                        if (uStack_d0 == 100) {
code_r0x0002f5e8:
                            if ((uVar20 & 0x10) == 0) {
                                if (puVar18 == NULL) {
                                    iVar3 = *puVar11;
                                    var_30h = puVar11 + 1;
                                }
                                else {
                                    iVar3 = *puVar18;
                                    puStack_d8 = puVar18 + 1;
                                }
                                uVar12 = iVar3;
                            }
                            else if (puVar18 == NULL) {
                                var_30h = puVar11 + 1;
                                uVar12 = *puVar11;
                            }
                            else {
                                uVar12 = *puVar18;
                                puStack_d8 = puVar18 + 1;
                            }
                            cVar1 = (uVar20 & 4) << 3;
                            if ((uVar20 & 2) != 0) {
                                cVar1 = '+';
                            }
                            bVar21 = (uVar20 & 8) != 0;
                            if (uVar20 < '\0') {
                                bVar21 = false;
                                iVar10 = 0x10;
                                if (((uVar20 & 0x10) == 0) && (uVar12 < 0)) {
code_r0x0002f6bc:
                                    uVar12 = uVar12 & 0xffffffff;
                                }
                            }
                            else {
                                iVar10 = 10;
                                if ((uVar20 & 8) != 0) {
                                    uVar20 = uVar20 & 0xffffffffffffffdf;
                                    uVar13 = 1;
                                }
                                if ((uVar12 < 0) && (uVar20 >> 0xe == 0)) {
                                    cVar1 = '-';
                                    uVar12 = -uVar12;
                                }
                                else if ((uVar20 & 0x4010) == 0x4000) goto code_r0x0002f6bc;
                            }
                            iVar10 = fcn.0002ecec(&var_80h,uVar12,iVar10);
                            uVar7 = iVar10 - &var_80h;
                            if ((uVar12 == 0) && (uVar13 == 0)) {
                                uStack_a8 = 0;
                                pcVar14 = &var_80h;
                                uVar7 = uVar16;
                            }
                            else {
                                pcVar14 = &var_80h + uVar7;
                                uStack_a8 = uVar7 % 3;
                                if (uVar7 % 3 != 0) {
                                    uStack_a8 = ((uVar7 / 3) * 3 - uVar7) + 3;
                                }
                            }
                            if ((bVar21) && (uVar7 != 0)) {
                                uVar7 = uVar7 + (uVar7 - 1) / 3;
                            }
                            if (cVar1 != '\0') {
                                uVar13 = uVar13 + 1;
                            }
                            in_stack_00000030 = '\x01';
                            uVar12 = uVar7 + 1;
                            if (cVar1 == '\0') {
                                uVar12 = uVar7;
                            }
                            uVar20 = uVar20 | 0x1000;
                            var_bp_20h = uVar20;
                            uStack_e0 = uVar12;
                            if ((uVar20 & 0xa21) == 0x220) {
                                uVar13 = uStack_c8;
                            }
                            goto code_r0x0002f8fb;
                        }
                        if (uStack_d0 == 10) {
                            pcVar14 = 0x3494c;
                            puVar9 = _var_28h_2 + iStack_a0;
                            iVar3 = iVar4;
                            if (var_40h != 0) {
                                iVar3 = puVar9[1] << 8;
                            }
                            uStack_d0 = (iVar3 | *puVar9) & uStack_b8;
                            puVar8 = _var_28h_2;
                            if (uStack_d0 == 0xd) {
                                puVar8 = puVar9;
                            }
                        }
                        else {
                            if (uStack_d0 != 0xd) {
                                if (uStack_d0 != 0x25) {
                                    if (uStack_d0 == 0x53) goto code_r0x0002f4d4;
                                    if (uStack_d0 == 0x58) goto code_r0x0002f5d1;
                                    uVar7 = uVar20;
                                    if (uStack_d0 == 0x61) goto code_r0x0002f4d9;
                                    if (uStack_d0 == 99) {
                                        if (puVar18 == NULL) {
                                            uVar2 = *puVar11;
                                            var_30h = puVar11 + 1;
                                        }
                                        else {
                                            uVar2 = *puVar18;
                                            puStack_d8 = puVar18 + 1;
                                        }
                                        pcVar14 = &var_58h;
                                        uVar20 = uVar20 | 0x400;
                                        var_58h = uVar2;
                                        var_bp_20h = uVar20;
                                        goto code_r0x0002f8fb;
                                    }
                                }
                                goto code_r0x0002f07f;
                            }
                            puVar8 = _var_28h_2 + iStack_a0;
                            iVar3 = iVar4;
                            if (var_40h != 0) {
                                iVar3 = puVar8[1] << 8;
                            }
                            pcVar14 = 0x3494c;
                            uStack_d0 = (iVar3 | *puVar8) & uStack_b8;
                            if (uStack_d0 != 10) {
                                pcVar14 = 0x34950;
                                puVar8 = _var_28h_2;
                            }
                        }
                        goto code_r0x0002f8f0;
                    }
code_r0x0002f07f:
                    uVar20 = uVar20 | 0x400;
                    pcVar14 = &uStack_d0;
                    var_bp_20h = uVar20;
                }
code_r0x0002f8fb:
                uVar17 = uVar20;
                iVar10 = ((uVar20 & 0x400) != 0) + 1;
                var_50h = (-((uVar20 & 0x400) != 0) & 0xff00) + 0xff;
                if ((uVar20 >> 0xc & 1) == 0) {
                    pcVar15 = pcVar14 + 1;
                    uVar12 = uVar16;
                    while (((pcVar15[-1] != '\0' || (((uVar20 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                           (((uVar12 < uVar13 || ((uVar20 >> 0xb & 1) == 0)) &&
                            ((var_50h & (*pcVar15 << 8 | pcVar15[-1])) != 0))))) {
                        uVar12 = uVar12 + 1;
                        pcVar15 = pcVar15 + iVar10;
                    }
                    uStack_e0 = uVar12;
                }
                else {
                    iVar10 = -iVar10;
                }
                if (uVar13 < uVar12) {
                    uVar13 = uVar12;
                }
                uStack_c0 = uVar13;
                var_48h = uVar17 & 0x201;
                arg2_00 = pcStack_f0;
                arg2_01 = arg2_00;
                if ((uVar17 & 0x201) == 0x200) {
                    uStack_f8 = uStack_f8 + ((uStack_b0 != 0) + 1) * (uStack_c8 - uVar13);
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.0002ecb8(arg1,arg2_00,uStack_c8 - uVar13,(uVar17 & 0x2000) + 0x20);
                    }
                }
                if (in_stack_00000030 == '\0') {
                    iVar6 = (uStack_b0 != 0) + 1;
                    uStack_f8 = uStack_f8 + (uVar13 - uVar12) * iVar6;
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.0002ecb8(arg1,arg2_01,uVar13 - uVar12,(uVar17 & 0x2000) + 0x20);
                    }
                    if ((((cVar1 != '\0') && (uStack_f8 = uStack_f8 + iVar6, (uVar20 & 0x2000) == 0)) && (arg1 != NULL)
                        ) && (arg1 < pcStack_f0)) {
                        *arg1 = cVar1;
                        if (uStack_b0 != 0) {
                            *(arg1 + 1) = '\0';
                        }
                        arg1 = arg1 + iVar6;
                    }
                }
                else {
                    if (cVar1 != '\0') {
                        iVar6 = (uStack_b0 != 0) + 1;
                        uStack_f8 = uStack_f8 + iVar6;
                        if ((((uVar20 & 0x2000) == 0) && (arg1 != NULL)) && (arg1 < pcStack_f0)) {
                            *arg1 = cVar1;
                            if (uStack_b0 != 0) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + iVar6;
                        }
                    }
                    iVar6 = (uStack_b0 != 0) + 1;
                    uStack_f8 = uStack_f8 + (uVar13 - uVar12) * iVar6;
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.0002ecb8(arg1,arg2_00,uVar13 - uVar12,(uVar17 & 0x2000) + 0x30);
                    }
                }
                arg3 = uVar20;
                if ((cVar1 != '\0') < uStack_e0) {
                    uVar13 = cVar1 != '\0';
                    uVar12 = uStack_a8;
                    do {
                        if ((*pcVar14 == '\0') && ((iVar10 < 2 || (*(pcVar14 + 1) == '\0')))) break;
                        uStack_f8 = uStack_f8 + iVar6;
                        uVar7 = *pcVar14 & var_50h;
                        if (((uVar20 & 0x2000) == 0) && ((arg1 != NULL && (arg1 < pcStack_f0)))) {
                            *arg1 = uVar7;
                            if (uStack_b0 != 0) {
                                *(arg1 + 1) = uVar7 >> 8;
                            }
                            arg1 = arg1 + iVar6;
                        }
                        pcVar14 = pcVar14 + iVar10;
                        uVar7 = uVar13 + 1;
                        if ((bVar21) && (uVar12 = uVar12 + 1, uVar12 == 3)) {
                            uVar7 = uVar13 + 2;
                            if (uStack_e0 <= uVar7) break;
                            uStack_f8 = uStack_f8 + iVar6;
                            uVar12 = uVar16;
                            if ((((uVar20 & 0x2000) == 0) && (arg1 != NULL)) && (uVar12 = 0, arg1 < pcStack_f0)) {
                                *arg1 = ',';
                                if (uStack_b0 != 0) {
                                    *(arg1 + 1) = '\0';
                                }
                                arg1 = arg1 + iVar6;
                            }
                        }
                        uVar13 = uVar7;
                    } while (uVar7 < uStack_e0);
                    arg3 = var_bp_20h;
                }
                uVar17 = arg3;
                if (var_48h == 0x201) {
                    uStack_f8 = uStack_f8 + iVar6 * (uStack_c8 - uStack_c0);
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.0002ecb8(arg1,arg2_00,uStack_c8 - uStack_c0,0x20);
                    }
                }
                arg4 = _var_28h_2 + iStack_a0;
                if (var_40h != 0) {
                    iVar4 = *(arg4 + 1) << 8;
                }
                uStack_d0 = (iVar4 | *arg4) & uStack_b8;
            } while (uStack_d0 != 0);
            uVar16 = uStack_f8;
        }
        uVar13 = uStack_b0;
        if ((uVar17 & 0x2000) == 0) {
            if (arg1 == NULL) {
                fcn.0002fe18(0x34828,0x4fc,0x33a48);
            }
            iVar10 = (uVar13 != 0) + 1;
            if ((arg1 < pcStack_f0 + iVar10) && (*arg1 = '\0', uVar13 != 0)) {
                *(arg1 + 1) = '\0';
            }
            uVar16 = (arg1 - pcStack_90) / iVar10;
        }
        else {
            uVar16 = uVar16 >> (uStack_b0 != 0);
        }
    }
    else {
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            pcVar14 = "(Buffer != ((void *) 0))";
            uVar17 = 0x24b;
        }
        else {
code_r0x0002ef4e:
            if (arg4 != 0) goto code_r0x0002ef61;
            pcVar14 = "(Format != ((void *) 0))";
            uVar17 = 0x253;
        }
        fcn.0002fe18(0x34828,uVar17,pcVar14);
code_r0x0002ef42:
        uVar16 = 0;
    }
    return uVar16;
}


/* fcn.0002ebc4 @ 0x2ebc4 */

void fcn.0002ebc4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x347a0,0xea,0x34778);
    }
    fcn.0002eee0(arg1,arg2 >> 1,0x40,arg3,in_stack_00000058,in_stack_00000060);
    return;
}


/* fcn.0002ed58 @ 0x2ed58 */

ulong fcn.0002ed58(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    char *pcVar2;
    uint64_t uVar3;
    uint32_t arg2_00;
    char *pcVar4;
    int64_t iVar5;
    bool bVar6;
    uint64_t in_stack_00000028;
    uchar auStack_38 [48];
    
    if (arg1 == 0) {
        pcVar4 = "(Buffer != ((void *) 0))";
        arg2_00 = 0x174;
    }
    else {
        if (in_stack_00000028 < 0x26) {
            bVar6 = in_stack_00000028 == 0;
            if (bVar6) {
                iVar5 = fcn.0002ecec(auStack_38,arg3,0x10);
                uVar3 = iVar5 - auStack_38;
                in_stack_00000028 = 0x25;
            }
            else {
                uVar3 = in_stack_00000028;
            }
            if (uVar3 < in_stack_00000028) {
                in_stack_00000028 = uVar3;
            }
            if (arg2 < in_stack_00000028 * 2 + 2) {
                fcn.0002fe18(0x34828,0x1c1,0x34878);
                return 0x8000000000000005;
            }
            pcVar4 = arg1 + in_stack_00000028 * 2;
            pcVar2 = fcn.0002ecec(auStack_38,arg3,0x10);
            iVar5 = pcVar2 - auStack_38;
            if (!bVar6) {
                arg1 = fcn.0002ecb8(arg1,pcVar4,in_stack_00000028 - iVar5,0x30);
            }
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                cVar1 = *pcVar2;
                if (arg1 < pcVar4) {
                    *(arg1 + 1) = cVar1 >> 7;
                    *arg1 = cVar1;
                    arg1 = arg1 + 2;
                }
                pcVar2 = pcVar2 + -1;
            }
            if (arg1 < pcVar4 + 2) {
                *(arg1 + 0) = '\0';
                *(arg1 + 1) = '\0';
            }
            return 0;
        }
        pcVar4 = "(Width < 38)";
        arg2_00 = 0x194;
    }
    fcn.0002fe18(0x34828,arg2_00,pcVar4);
    return 0x8000000000000002;
}


/* fcn.0002ecec @ 0x2ecec */

char * fcn.0002ecec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    *arg1 = 0;
    do {
        if (arg3 == 0) {
            fcn.0002fe18(0x35090,0x26,0x344c8);
        }
        arg1 = arg1 + 1;
        uVar1 = arg2 / (arg3 & 0xffffffffU);
        *arg1 = "0123456789ABCDEFFormat != ((void *) 0)"[arg2 % (arg3 & 0xffffffffU)];
        arg2 = uVar1;
    } while (uVar1 != 0);
    return arg1;
}


/* fcn.0002ecb8 @ 0x2ecb8 */

uchar * fcn.0002ecb8(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uint in_register_00000014;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (CONCAT44(in_register_00000014,arg2) <= puVar1) {
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


/* fcn.0002fd3c @ 0x2fd3c */

void fcn.0002fd3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    
    fcn.0002eee0(arg1,arg2,arg3,arg4,in_stack_00000058,in_stack_00000060);
    return;
}


/* fcn.0002ec38 @ 0x2ec38 */

void fcn.0002ec38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    fcn.0002ebc4(arg1,arg2,arg3,&iStackX_20);
    return;
}


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

{
    return;
}


/* fcn.0002ffb4 @ 0x2ffb4 */

bool fcn.0002ffb4(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    
    if (arg1 == 0) {
code_r0x0003004f:
        bVar5 = false;
    }
    else {
        uVar4 = 0;
        while( true ) {
            cVar2 = fcn.000300b0(arg1);
            if (cVar2 != '\0') break;
            uVar3 = fcn.00030068(arg1);
            if (((uVar3 < 4) || (~uVar4 < uVar3)) || (uVar4 = uVar4 + uVar3, 0xfffffffffffffffb < uVar4))
            goto code_r0x0003004f;
            if (arg1 == NULL) {
                fcn.0002fe18(0x34ef0,0x81,0x34ed8);
            }
            if (((*arg1 == '\x04') && (*(arg1 + 1) == '\x04')) && (*(arg1 + (uVar3 - 2)) != 0)) goto code_r0x0003004f;
            iVar1 = fcn.00030068(arg1);
            arg1 = arg1 + iVar1;
        }
        iVar1 = fcn.00030068(arg1);
        bVar5 = iVar1 == 4;
    }
    return bVar5;
}


/* fcn.0002e618 @ 0x2e618 */

int64_t fcn.0002e618(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (arg3 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.0002e54c(arg1);
        if (iVar1 == 0) {
            fcn.0002fe18(0x343e0,0x361,0x34488);
        }
        iVar1 = fcn.0002e54c(arg2);
        if (iVar1 == 0) {
            fcn.0002fe18(0x343e0,0x362,0x344a8);
        }
        for (; (((*arg1 != '\0' && (*arg2 != '\0')) && (*arg1 == *arg2)) && (1 < arg3)); arg3 = arg3 - 1) {
            arg1 = arg1 + 1;
            arg2 = arg2 + 1;
        }
        iVar1 = *arg1 - *arg2;
    }
    return iVar1;
}


/* fcn.000301dc @ 0x301dc */

ulong fcn.000301dc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    
    cVar1 = *arg1;
    do {
        do {
            if (cVar1 == '\0') {
                return 0x8000000000000003;
            }
            arg3 = 0;
            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                arg3 = arg3 + 1;
                cVar1 = *(arg1 + arg3);
            }
            iVar2 = fcn.0002e618(arg1,arg2,arg3);
            if ((iVar2 == 0) && (*(arg3 + arg2) == '\0')) {
                return 0;
            }
            arg1 = arg1 + arg3;
            cVar1 = *arg1;
        } while (cVar1 == '\0');
        do {
            if (cVar1 != ';') break;
            arg1 = arg1 + 1;
            cVar1 = *arg1;
        } while (cVar1 != '\0');
    } while( true );
}


/* fcn.0002fef8 @ 0x2fef8 */

void fcn.0002fef8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    if (arg2 == 0) {
        fcn.0002fe18(0x34dd0,0x239,0x33a48);
    }
    if (-arg2 < arg1) {
        fcn.0002fe18(0x34dd0,0x23a,0x34e20);
    }
    arg1_00 = fcn.0002fea0();
    if (arg1_00 != 0) {
        fcn.0002e6bc(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00030544 @ 0x30544 */

int64_t fcn.00030544(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 1;
        uVar3 = uVar2;
        do {
            while ((((iVar1 = *(arg1 + uVar2 * 2), iVar1 != -0x10 && (iVar1 != -0xf)) && (iVar1 != 0)) &&
                   ((uVar3 = uVar3 + iVar4, arg2 == '\0' || (uVar3 <= arg3))))) {
                uVar2 = uVar2 + 1;
            }
            iVar1 = *(arg1 + uVar2 * 2);
            if (iVar1 == 0) break;
            if ((arg2 != '\0') && (arg3 < uVar3)) {
                *arg4 = uVar2;
                break;
            }
            uVar2 = uVar2 + 1;
            iVar4 = (iVar1 != -0x10) + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
        iVar4 = uVar3 * 2;
    }
    return iVar4;
}


/* fcn.00030bd8 @ 0x30bd8 */

int64_t fcn.00030bd8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort *puVar1;
    uint64_t uVar2;
    
    if (arg2 != 0) {
        if (arg1 == 0) {
            fcn.0002fe18(0x350d0,0x34,0x33a48);
        }
        if (~arg1 < arg2 - 1U) {
            fcn.0002fe18(0x350d0,0x35,0x34620);
        }
        if ((arg1 & 1U) != 0) {
            fcn.0002fe18(0x350d0,0x36,0x34720);
        }
        if ((arg2 & 1U) != 0) {
            fcn.0002fe18(0x350d0,0x37,0x34750);
        }
        uVar2 = arg2 >> 1;
        if (uVar2 != 0) {
            puVar1 = arg1 + -2 + uVar2 * 2;
            do {
                *puVar1 = arg3;
                puVar1 = puVar1 + -1;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    return arg1;
}


/* fcn.0002dd60 @ 0x2dd60 */

ulong fcn.0002dd60(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    
    if ((arg1 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x13f,0x341f0);
    }
    if ((arg3 & 1U) != 0) {
        fcn.0002fe18(0x341b8,0x140,0x34218);
    }
    if (arg1 == 0) {
        iVar4 = 0x145;
    }
    else if (arg3 == 0) {
        iVar4 = 0x146;
    }
    else {
        if (arg2 != 0) {
            iVar4 = arg4;
            if (arg2 < arg4) {
                iVar4 = arg2;
            }
            uVar2 = fcn.0002db6c(arg3,iVar4);
            if ((arg2 <= arg4) && (arg2 <= uVar2)) {
                uVar3 = 0x8000000000000005;
                iVar4 = 0x15a;
                goto code_r0x0002dde7;
            }
            if (arg4 < uVar2) {
                uVar2 = arg4;
            }
            if (arg1 < arg3) {
code_r0x0002de9a:
                if (arg1 + arg2 * 2 <= arg3) {
code_r0x0002dec9:
                    if (uVar2 != 0) {
                        arg3 = arg3 - arg1;
                        do {
                            iVar1 = *(arg3 + arg1);
                            if (iVar1 == 0) break;
                            *arg1 = iVar1;
                            arg1 = arg1 + 2;
                            uVar2 = uVar2 - 1;
                        } while (uVar2 != 0);
                    }
                    *arg1 = 0;
                    return 0;
                }
            }
            else if (arg3 + 2 + uVar2 * 2 <= arg1) {
                if (arg3 < arg1) goto code_r0x0002dec9;
                goto code_r0x0002de9a;
            }
            uVar3 = 0x800000000000000f;
            iVar4 = 0x164;
            goto code_r0x0002dde7;
        }
        iVar4 = 0x153;
    }
    uVar3 = 0x8000000000000002;
code_r0x0002dde7:
    fcn.0002fd60(0x400000,0x34270,0x341b8,iVar4);
    return uVar3;
}


/* fcn.00030128 @ 0x30128 */

ulong fcn.00030128(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x35158 + 0x98))(param_1,0x30d00,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0003015c @ 0x3015c */

int64_t fcn.0003015c(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg1_00;
    
    iVar2 = 0;
    if ((arg1 != 0) && (cVar1 = fcn.0002ffb4(arg1), arg1_00 = arg1, cVar1 != '\0')) {
        while (cVar1 = fcn.000300b0(arg1_00), cVar1 == '\0') {
            if (arg1_00 == 0) {
                fcn.0002fe18(0x34ef0,200,0x34ed8);
            }
            iVar2 = fcn.00030068(arg1_00);
            arg1_00 = arg1_00 + iVar2;
        }
        iVar2 = fcn.00030068(arg1_00);
        iVar2 = iVar2 + (arg1_00 - arg1);
    }
    return iVar2;
}


/* fcn.0002ec58 @ 0x2ec58 */

void fcn.0002ec58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    
    if ((arg1 & 1U) != 0) {
        pcVar1 = "(((UINTN) (Buffer)) & 0x01) == 0";
        fcn.0002fe18(0x347a0,0x197,0x34800);
        arg3 = pcVar1;
    }
    fcn.0002ed58(arg1,arg2,arg3,arg4);
    return;
}


