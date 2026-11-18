// decompiled by r2ghidra: 0513_S3SaveStateDxe.pe32
// functions: 51

/* entry0 @ 0x103b4 */

int64_t entry0(ulong param_1,int64_t param_2)

{
    char cVar1;
    int64_t iVar2;
    uchar auStackX_18 [16];
    
    fcn.00010454(param_1,param_2);
    iVar2 = fcn.00011e7c();
    cVar1 = (**(iVar2 + 0x30))(0x130a0,0x1100000);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        (**(*0x131c0 + 0x170))(0x200,8,0x11d20,0,0x130e0,auStackX_18);
        iVar2 = (**(*0x131c0 + 0x80))(0x131b0,0x13080,0,0x13100);
        if (-1 < iVar2) {
            return iVar2;
        }
    }
    fcn.00010520();
    return iVar2;
}


/* fcn.00010454 @ 0x10454 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00010454(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t noname_0_00;
    int64_t iStackX_10;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    ulong *puStack_38;
    ulong uStack_30;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    *0x131c0 = *(arg1 + 0x60);
    uStack_30 = 0x10475;
    *0x131b8 = arg1;
    fcn.000120b0();
    uStack_30 = 0x1047a;
    puVar5 = fcn.000120b0();
    do {
        uVar1 = *puVar5;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar5 = NULL;
code_r0x000104a8:
            if (puVar5 == NULL) {
                uStack_30 = 0x104c0;
                uVar6 = fcn.000103b0();
                uStack_30 = 0x104c8;
                fcn.000103a0();
                uVar3 = in(0x1808);
                uStack_30 = 0x104e1;
                fcn.00010380(noname_0_00,0x1808);
                while( true ) {
                    iVar7 = 0x1808;
                    iVar4 = in(0x1808);
                    uVar9 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
                    if ((uVar9 >> 0x17 & 1) != 0) break;
                    uStack_30 = 0x104fa;
                    func_0x00010370();
                }
                uStack_30 = 0x10501;
                fcn.00010380(uVar9,0x1808);
                if ((uVar6 >> 9 & 1) == 0) {
                    uStack_30 = 0x10511;
                    fcn.000103a0();
                }
                else {
                    uStack_30 = 0x1050a;
                    fcn.00010390();
                }
code_r0x00010511:
                iStackX_10 = iVar7;
                iVar7 = fcn.00011e7c();
                cVar2 = (**(iVar7 + 0x30))(0x130a0,0x1100000);
                if (cVar2 == '\0') {
                    *0x13160 = 0;
                }
                else {
                    iVar7 = fcn.00011e7c();
                    iVar7 = (**(iVar7 + 0x20))(0x130a0,0x30000);
                    if (iVar7 == 0) {
                        iStackX_20 = 0xffffffff;
                        (**(*0x131c0 + 0x28))(1,0,1,&stack0x00000020);
                        iVar7 = iStackX_20;
                        *0x131f0 = 1;
                        iVar8 = fcn.00011e7c();
                        (**(iVar8 + 0x58))(0x130a0,0x30000,iVar7);
                        fcn.000102b0(iVar7,0x20);
                        (**(*0x131c0 + 0x50))(0x200,8,fcn.000125c0,0,&stack0x00000018);
                        (**(*0x131c0 + 0xa8))(0x13030,uStackX_18,&stack0xffffffffffffffd0);
                        (**(*0x131c0 + 0x68))(uStackX_18);
                        *0x131f8 = uStackX_18;
                    }
                    *0x13220 = iVar7;
                    iVar7 = (**(*0x131c0 + 0x140))(0x130f0,0,&stack0xffffffffffffffc8);
                    if ((((-1 < iVar7) && (iVar7 = (**puStack_38)(puStack_38,&stack0x00000010), -1 < iVar7)) &&
                        (iStackX_10 != '\0')) && (iVar7 = (*puStack_38[1])(puStack_38,0x13200), -1 < iVar7)) {
                        iVar7 = fcn.00011e7c();
                        iVar7 = (**(iVar7 + 0x20))(0x130a0,0x30001);
                        if (iVar7 == 0) {
                            (**(*0x13200 + 0x50))(6,0x20,&stack0x00000008);
                            *0x13218 = 1;
                            iVar8 = fcn.00011e7c();
                            (**(iVar8 + 0x58))(0x130a0,0x30001,0);
                            fcn.000102b0(0,0x20);
                            (**(*0x13200 + 0xc0))(0x13040,0x126b0,0x13208);
                            (**(*0x13200 + 0xc0))(0x13010,0x126b0,0x131e8);
                        }
                        *0x13228 = iVar7;
                        (**(*0x13200 + 0xc0))(78000,0x12650,0x13210);
                    }
                }
                return 0;
            }
            if ((*0x13130 == *(puVar5 + 4)) && (iVar7 = *0x13138, *0x13138 == *(puVar5 + 8))) goto code_r0x00010511;
        }
        else if (uVar1 == 4) goto code_r0x000104a8;
        puVar5 = puVar5 + puVar5[1];
    } while( true );
}


/* fcn.00011e7c @ 0x11e7c */

int64_t fcn.00011e7c(void)

{
    if (*0x131c8 == 0) {
        (**(*0x131c0 + 0x140))(0x13070,0,0x131c8);
    }
    return *0x131c8;
}


/* fcn.00010520 @ 0x10520 */

void fcn.00010520(void)

{
    int64_t iVar1;
    
    if (*0x13160 != '\0') {
        if (*0x131f8 != 0) {
            (**(*0x131c0 + 0x70))();
        }
        if (*0x13200 != 0) {
            if (*0x13208 != 0) {
                (**(*0x13200 + 0xc0))(0x13040,0,0x13208);
            }
            if (*0x131e8 != 0) {
                (**(*0x13200 + 0xc0))(0x13010,0,0x131e8);
            }
            if (*0x13210 != 0) {
                (**(*0x13200 + 0xc0))(78000,0,0x13210);
            }
        }
        if (*0x131f0 != '\0') {
            (**(*0x131c0 + 0x30))(*0x13220,1);
            iVar1 = fcn.00011e7c();
            (**(iVar1 + 0x58))(0x130a0,0x30000,0);
        }
        if ((*0x13200 != 0) && (*0x13218 != '\0')) {
            (**(*0x13200 + 0x58))(*0x13228);
            iVar1 = fcn.00011e7c();
            (**(iVar1 + 0x58))(0x130a0,0x30001,0);
        }
    }
    return;
}


/* fcn.000120b0 @ 0x120b0 */

int64_t fcn.000120b0(void)

{
    if (*0x131d0 == 0) {
        fcn.00011eb8(0x130c0,0x131d0);
    }
    return *0x131d0;
}


/* fcn.00011eb8 @ 0x11eb8 */

ulong fcn.00011eb8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x131b8;
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


/* fcn.000103b0 @ 0x103b0 */

uint64_t fcn.000103b0(void)

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


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010372 @ 0x10372 */

void fcn.00010372(void)

{
    return;
}


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00012acc @ 0x12acc */

int64_t fcn.00012acc(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t auStackX_10 [3];
    
    iVar4 = 0;
    if (*0x13160 != '\0') {
        if (*(*0x13220 + 0x14) == '\0') {
            iVar4 = fcn.00012974(arg1);
            goto code_r0x00012b83;
        }
        if (*(*0x13220 + 0xe) != '\0') {
            piVar3 = *0x13220;
            if (*(*0x13220 + 0x15) != '\0') {
                auStackX_10[0] = *(*0x13220 + 2);
                arg1_00 = 0x13150;
                fcn.00012450(0x13150,**0x13220,auStackX_10);
                fcn.00012358(arg1_00,0,**0x13220,auStackX_10[0]);
                piVar3 = *0x13220;
                piVar1 = *0x13220 + 2;
                *(*0x13220 + 0x15) = 0;
                *(piVar3 + 1) = *piVar1 + -3;
            }
            uVar2 = *(piVar3 + 1);
            uVar5 = (arg1 & 0xff) + uVar2;
            if (uVar5 + 3 <= *(piVar3 + 0xc) << 0xc) {
                *(piVar3 + 1) = uVar5;
                iVar4 = uVar2 + *piVar3;
                fcn.00012558();
            }
            goto code_r0x00012b83;
        }
    }
    iVar4 = 0;
code_r0x00012b83:
    return iVar4;
}


/* fcn.000102f0 @ 0x102f0 */

uint32_t * fcn.000102f0(uint32_t *arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + arg3 + -1;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 2;
            puVar3 = puVar3 + 2;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00012b90 @ 0x12b90 */

void fcn.00012b90(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t arg1_00;
    int aiStackX_10 [6];
    
    if ((*(*0x13220 + 0x14) != '\0') && (*(*0x13220 + 0xe) != '\0')) {
        uVar1 = arg1 - **0x13220;
        arg1_00 = uVar1;
        aiStackX_10[0] = (*0x13220)[1] + 3;
        fcn.00012358(arg1_00,uVar1,**0x13220 + uVar1,aiStackX_10[0] - uVar1);
        fcn.00012358(arg1_00,5,aiStackX_10,4);
    }
    return;
}


/* fcn.00012358 @ 0x12358 */

ulong fcn.00012358(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    ulong uVar2;
    uint32_t *puVar3;
    uint32_t *arg1_00;
    int64_t iStackX_8;
    uint32_t auStack_68 [20];
    
    if ((arg3 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iStackX_8 = arg1;
        puVar1 = fcn.000120e0();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.00012130();
            arg1_00 = auStack_68;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x13090) {
                fcn.000102f0(arg1_00,0x13090,0x10);
            }
            arg1_00[4] = 0x38;
            arg1_00[5] = 0;
            arg1_00[8] = 0xffffffff;
            arg1_00[9] = 0xffffffff;
            arg1_00[6] = 2;
            arg1_00[7] = 0x38;
            if (arg1_00 + 10 != 0x13178) {
                fcn.000102f0(arg1_00 + 10,0x13178,0x10);
            }
            *(arg1_00 + 0xe) = arg2;
            *(arg1_00 + 0x10) = arg3;
            *(arg1_00 + 0x12) = arg4;
            iStackX_8 = 0x50;
            (**puVar1)(puVar1,arg1_00,&iStackX_8);
            uVar2 = *(arg1_00 + 8);
        }
    }
    return uVar2;
}


/* fcn.0001108c @ 0x1108c */

ulong fcn.0001108c(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t *arg1_00;
    ulong uVar2;
    uchar auStack_18 [16];
    
    uVar1 = *arg1;
    arg1_00 = fcn.00012acc(CONCAT71(arg1 >> 8,0xb));
    uVar2 = 0;
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        auStack_18[2] = 0xb;
        auStack_18._0_2_ = 7;
        auStack_18._3_8_ = uVar1;
        if (arg1_00 != auStack_18) {
            fcn.000102f0(arg1_00,auStack_18,0xb);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar2;
}


/* fcn.00010eac @ 0x10eac */

uint64_t fcn.00010eac(int64_t arg1)

{
    int iVar1;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg3;
    uint64_t uVar5;
    uint64_t uVar6;
    char cVar7;
    uint32_t uStackX_8;
    uchar auStack_48 [11];
    int iStack_3d;
    uint uStack_39;
    
    iVar1 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x28);
    uVar5 = *(arg1 + 8) & 0xff;
    uVar3 = 0;
    uVar2 = -(*(arg1 + 0x18) != '\0') & 0x400000;
    uVar6 = (uVar5 << 7 | (uStackX_8 ^ (*arg1 ^ uStackX_8) & 0x7f) & 0x7f) * 2 | uVar2;
    if (*(arg1 + 0x20) == NULL) {
        arg3 = uVar3;
    }
    else {
        arg3 = **(arg1 + 0x20);
    }
    uVar4 = 2;
    if (iVar1 < 8) {
        if (iVar1 < 6) {
            if (iVar1 < 0) {
code_r0x00010faf:
                uVar3 = 0x8000000000000002;
            }
            else {
                if (1 < iVar1) {
                    if (iVar1 < 4) {
                        if (uVar5 != 0) {
                            return 0x8000000000000003;
                        }
                    }
                    else if (5 < iVar1) goto code_r0x00010faf;
                    uVar4 = 1;
                    goto code_r0x00010f5d;
                }
                if ((uVar2 != 0) || (uVar5 != 0)) {
                    return 0x8000000000000003;
                }
            }
        }
        else {
code_r0x00010f5d:
            if (arg2 == NULL) goto code_r0x0001105c;
            uVar3 = -(arg3 < uVar4) & 0x8000000000000005;
            arg3 = uVar4;
        }
code_r0x00010fd2:
        if (-1 < uVar3) {
            if (arg3 < 0xed) {
                cVar7 = arg3 + '\x13';
                arg1_00 = fcn.00012acc(CONCAT71(uVar3 >> 8,cVar7));
                if (arg1_00 != NULL) {
                    auStack_48._0_2_ = 6;
                    uStack_39 = arg3;
                    auStack_48[2] = cVar7;
                    auStack_48._3_8_ = uVar6;
                    iStack_3d = iVar1;
                    if (arg1_00 != auStack_48) {
                        fcn.000102f0(arg1_00,auStack_48,0x13);
                    }
                    if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                        fcn.000102f0(arg1_00 + 0x13,arg2,arg3);
                    }
                    fcn.00012b90(arg1_00);
                    return 0;
                }
            }
            return 0x8000000000000009;
        }
    }
    else {
        if (9 < iVar1) {
            if (iVar1 == 10) goto code_r0x00010f5d;
            if (iVar1 != 0xb) goto code_r0x00010faf;
        }
        if ((arg2 != NULL) && (arg3 - 1 < 0x20)) goto code_r0x00010fd2;
code_r0x0001105c:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00010b38 @ 0x10b38 */

ulong fcn.00010b38(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uchar auStack_38 [7];
    ulong uStack_31;
    
    iVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    puVar3 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    if (((iVar1 - 3U & 0xfffffff3) == 0) && (iVar1 != 0xf)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        uVar6 = '\x01' << (iVar1 & 3);
        uVar5 = uVar6 * '\x02' + 0xf;
        arg1_00 = fcn.00012acc(uVar5);
        uVar4 = 0;
        if (arg1_00 == NULL) {
            uVar4 = 0x8000000000000009;
        }
        else {
            auStack_38._0_2_ = 5;
            auStack_38[2] = uVar5;
            auStack_38._3_4_ = iVar1;
            uStack_31 = uVar2;
            if (arg1_00 != auStack_38) {
                fcn.000102f0(arg1_00,auStack_38,0xf);
            }
            if ((uVar6 != 0) && (arg1_00 + 0xf != puVar3)) {
                fcn.000102f0(arg1_00 + 0xf,puVar3,uVar6);
            }
            puVar3 = uVar6 + 0xf + arg1_00;
            if ((uVar6 != 0) && (puVar3 != arg2)) {
                fcn.000102f0(puVar3,arg2,uVar6);
            }
            fcn.00012b90(arg1_00);
        }
    }
    return uVar4;
}


/* fcn.00010a20 @ 0x10a20 */

ulong fcn.00010a20(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar3;
    ulong uVar4;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    
    iVar1 = *arg1;
    uVar4 = *(arg1 + 8);
    uVar2 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    if (((iVar1 - 3U & 0xfffffff3) == 0) && (iVar1 != 0xf)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        uVar3 = '\x01' << (iVar1 & 3);
        if ((uVar2 < 0x100) && (arg3 = uVar3 * uVar2, arg3 < 0xed)) {
            uVar3 = uVar2 * uVar3 + 0x13;
            arg1_00 = fcn.00012acc(uVar3);
            if (arg1_00 != NULL) {
                auStack_48._0_2_ = 4;
                uStack_41 = uVar2;
                auStack_48[2] = uVar3;
                auStack_48._3_4_ = iVar1;
                uStack_3d = uVar4;
                if (arg1_00 != auStack_48) {
                    fcn.000102f0(arg1_00,auStack_48,0x13);
                }
                if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                    fcn.000102f0(arg1_00 + 0x13,arg2,arg3);
                }
                fcn.00012b90(arg1_00);
                return 0;
            }
        }
        uVar4 = 0x8000000000000009;
    }
    return uVar4;
}


/* fcn.00010928 @ 0x10928 */

ulong fcn.00010928(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint8_t uVar6;
    uchar auStack_38 [7];
    ulong uStack_31;
    
    uVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    puVar3 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    uVar6 = '\x01' << (uVar1 & 3);
    uVar4 = uVar6 * '\x02' + 0xf;
    arg1_00 = fcn.00012acc(uVar4);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        auStack_38._0_2_ = 3;
        auStack_38[2] = uVar4;
        auStack_38._3_4_ = uVar1;
        uStack_31 = uVar2;
        if (arg1_00 != auStack_38) {
            fcn.000102f0(arg1_00,auStack_38,0xf);
        }
        if ((uVar6 != 0) && (arg1_00 + 0xf != puVar3)) {
            fcn.000102f0(arg1_00 + 0xf,puVar3,uVar6);
        }
        puVar3 = uVar6 + 0xf + arg1_00;
        if ((uVar6 != 0) && (puVar3 != arg2)) {
            fcn.000102f0(puVar3,arg2,uVar6);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar5;
}


/* fcn.0001082c @ 0x1082c */

ulong fcn.0001082c(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar4;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    
    uVar2 = *(arg1 + 0x10);
    uVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    arg2 = *(arg1 + 0x18);
    uVar4 = '\x01' << (uVar1 & 3);
    if ((uVar2 < 0x100) && (arg3 = uVar4 * uVar2, arg3 < 0xed)) {
        uVar4 = uVar2 * uVar4 + 0x13;
        arg1_00 = fcn.00012acc(uVar4);
        if (arg1_00 != NULL) {
            auStack_48._0_2_ = 2;
            uStack_41 = uVar2;
            auStack_48[2] = uVar4;
            auStack_48._3_4_ = uVar1;
            uStack_3d = uVar3;
            if (arg1_00 != auStack_48) {
                fcn.000102f0(arg1_00,auStack_48,0x13);
            }
            if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                fcn.000102f0(arg1_00 + 0x13,arg2,arg3);
            }
            fcn.00012b90(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00010734 @ 0x10734 */

ulong fcn.00010734(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint8_t uVar6;
    uchar auStack_38 [7];
    ulong uStack_31;
    
    uVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    puVar3 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    uVar6 = '\x01' << (uVar1 & 3);
    uVar4 = uVar6 * '\x02' + 0xf;
    arg1_00 = fcn.00012acc(uVar4);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        auStack_38._0_2_ = 1;
        auStack_38[2] = uVar4;
        auStack_38._3_4_ = uVar1;
        uStack_31 = uVar2;
        if (arg1_00 != auStack_38) {
            fcn.000102f0(arg1_00,auStack_38,0xf);
        }
        if ((uVar6 != 0) && (arg1_00 + 0xf != puVar3)) {
            fcn.000102f0(arg1_00 + 0xf,puVar3,uVar6);
        }
        puVar3 = uVar6 + 0xf + arg1_00;
        if ((uVar6 != 0) && (puVar3 != arg2)) {
            fcn.000102f0(puVar3,arg2,uVar6);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar5;
}


/* fcn.0001063c @ 0x1063c */

ulong fcn.0001063c(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar4;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    
    uVar2 = *(arg1 + 0x10);
    uVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    arg2 = *(arg1 + 0x18);
    uVar4 = '\x01' << (uVar1 & 3);
    if ((uVar2 < 0x100) && (arg3 = uVar4 * uVar2, arg3 < 0xed)) {
        uVar4 = uVar2 * uVar4 + 0x13;
        arg1_00 = fcn.00012acc(uVar4);
        if (arg1_00 != NULL) {
            auStack_48._0_2_ = 0;
            uStack_41 = uVar2;
            auStack_48[2] = uVar4;
            auStack_48._3_4_ = uVar1;
            uStack_3d = uVar3;
            if (arg1_00 != auStack_48) {
                fcn.000102f0(arg1_00,auStack_48,0x13);
            }
            if ((arg3 != 0) && (arg1_00 + 0x13 != arg2)) {
                fcn.000102f0(arg1_00 + 0x13,arg2,arg3);
            }
            fcn.00012b90(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00011108 @ 0x11108 */

ulong fcn.00011108(int64_t arg1)

{
    ulong uVar1;
    uint32_t *arg1_00;
    ulong uVar2;
    uchar auStack_18 [16];
    
    uVar1 = *arg1;
    arg1_00 = fcn.00012acc(CONCAT71(arg1 >> 8,0xb));
    uVar2 = 0;
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        auStack_18[2] = 0xb;
        auStack_18._0_2_ = 8;
        auStack_18._3_8_ = uVar1;
        if (arg1_00 != auStack_18) {
            fcn.000102f0(arg1_00,auStack_18,0xb);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar2;
}


/* fcn.00011584 @ 0x11584 */

ulong fcn.00011584(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *arg2;
    ulong uVar4;
    uint32_t *arg1_00;
    uint32_t *puVar5;
    ulong uVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    uchar auStack_58 [7];
    ulong uStack_51;
    ushort uStack_49;
    ulong uStack_47;
    
    uVar3 = *(arg1 + 0x10);
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    puVar5 = *(arg1 + 0x18);
    arg2 = *(arg1 + 0x20);
    uVar4 = *(arg1 + 0x28);
    if (((iVar2 - 3U & 0xfffffff3) == 0) && (iVar2 != 0xf)) {
        uVar6 = 0x8000000000000002;
    }
    else {
        uVar7 = '\x01' << (iVar2 & 3);
        uVar8 = uVar7 * '\x02' + 0x19;
        arg1_00 = fcn.00012acc(uVar8);
        uVar6 = 0;
        if (arg1_00 == NULL) {
            uVar6 = 0x8000000000000009;
        }
        else {
            auStack_58._0_2_ = 0x10;
            auStack_58[2] = uVar8;
            auStack_58._3_4_ = iVar2;
            uStack_51 = uVar3;
            uStack_49 = uVar1;
            uStack_47 = uVar4;
            if (arg1_00 != auStack_58) {
                fcn.000102f0(arg1_00,auStack_58,0x19);
            }
            if ((uVar7 != 0) && (arg1_00 + 0x19 != puVar5)) {
                fcn.000102f0(arg1_00 + 0x19,puVar5,uVar7);
            }
            puVar5 = uVar7 + 0x19 + arg1_00;
            if ((uVar7 != 0) && (puVar5 != arg2)) {
                fcn.000102f0(puVar5,arg2,uVar7);
            }
            fcn.00012b90(arg1_00);
        }
    }
    return uVar6;
}


/* fcn.00011454 @ 0x11454 */

ulong fcn.00011454(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uchar auStack_48 [7];
    ulong uStack_41;
    ulong uStack_39;
    
    uVar2 = *(arg1 + 0x20);
    iVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    puVar4 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    if (((iVar1 - 3U & 0xfffffff3) == 0) && (iVar1 != 0xf)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar6 = '\x01' << (iVar1 & 3);
        uVar7 = uVar6 * '\x02' + 0x17;
        arg1_00 = fcn.00012acc(uVar7);
        uVar5 = 0;
        if (arg1_00 == NULL) {
            uVar5 = 0x8000000000000009;
        }
        else {
            auStack_48._0_2_ = 0xf;
            auStack_48[2] = uVar7;
            auStack_48._3_4_ = iVar1;
            uStack_41 = uVar3;
            uStack_39 = uVar2;
            if (arg1_00 != auStack_48) {
                fcn.000102f0(arg1_00,auStack_48,0x17);
            }
            if ((uVar6 != 0) && (arg1_00 + 0x17 != puVar4)) {
                fcn.000102f0(arg1_00 + 0x17,puVar4,uVar6);
            }
            puVar4 = uVar6 + 0x17 + arg1_00;
            if ((uVar6 != 0) && (puVar4 != arg2)) {
                fcn.000102f0(puVar4,arg2,uVar6);
            }
            fcn.00012b90(arg1_00);
        }
    }
    return uVar5;
}


/* fcn.00011184 @ 0x11184 */

ulong fcn.00011184(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong uVar2;
    uint32_t *arg2_00;
    uint32_t *arg1_00;
    uint32_t *puVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uchar auStack_58 [7];
    ulong uStack_51;
    ulong uStack_49;
    uint64_t uStack_41;
    
    uVar2 = *(arg1 + 8);
    uVar1 = *arg1;
    puVar3 = *(arg1 + 0x10);
    arg2_00 = *(arg1 + 0x18);
    uVar6 = *(arg1 + 0x20) / 10;
    if (*(arg1 + 0x20) != uVar6 * 10) {
        uVar6 = uVar6 + 1;
    }
    uVar7 = '\x01' << (uVar1 & 3);
    uVar4 = uVar7 * '\x02' + 0x1f;
    arg1_00 = fcn.00012acc(uVar4);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        auStack_58._0_2_ = 0xe;
        uStack_49 = 1;
        auStack_58[2] = uVar4;
        auStack_58._3_4_ = uVar1;
        uStack_51 = uVar2;
        uStack_41 = uVar6;
        if ((uVar7 != 0) && (arg1_00 + 0x1f != puVar3)) {
            fcn.000102f0(arg1_00 + 0x1f,puVar3,uVar7);
        }
        puVar3 = uVar7 + 0x1f + arg1_00;
        if ((uVar7 != 0) && (puVar3 != arg2_00)) {
            fcn.000102f0(puVar3,arg2_00,uVar7);
        }
        if (arg1_00 != auStack_58) {
            fcn.000102f0(arg1_00,auStack_58,0x1f);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar5;
}


/* fcn.00011348 @ 0x11348 */

ulong fcn.00011348(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    uint8_t uVar5;
    ulong uVar6;
    uint8_t uVar7;
    uchar auStack_48 [7];
    ulong uStack_41;
    ulong uStack_39;
    
    uVar2 = *(arg1 + 0x20);
    uVar1 = *arg1;
    uVar3 = *(arg1 + 8);
    puVar4 = *(arg1 + 0x10);
    arg2 = *(arg1 + 0x18);
    uVar7 = '\x01' << (uVar1 & 3);
    uVar5 = uVar7 * '\x02' + 0x17;
    arg1_00 = fcn.00012acc(uVar5);
    uVar6 = 0;
    if (arg1_00 == NULL) {
        uVar6 = 0x8000000000000009;
    }
    else {
        auStack_48._0_2_ = 0xd;
        auStack_48[2] = uVar5;
        auStack_48._3_4_ = uVar1;
        uStack_41 = uVar3;
        uStack_39 = uVar2;
        if (arg1_00 != auStack_48) {
            fcn.000102f0(arg1_00,auStack_48,0x17);
        }
        if ((uVar7 != 0) && (arg1_00 + 0x17 != puVar4)) {
            fcn.000102f0(arg1_00 + 0x17,puVar4,uVar7);
        }
        puVar4 = uVar7 + 0x17 + arg1_00;
        if ((uVar7 != 0) && (puVar4 != arg2)) {
            fcn.000102f0(puVar4,arg2,uVar7);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar6;
}


/* fcn.00010d7c @ 0x10d7c */

ulong fcn.00010d7c(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uchar auStack_48 [7];
    ulong uStack_41;
    ushort uStack_39;
    
    uVar3 = *(arg1 + 0x10);
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    puVar4 = *(arg1 + 0x18);
    arg2 = *(arg1 + 0x20);
    if (((iVar2 - 3U & 0xfffffff3) == 0) && (iVar2 != 0xf)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar7 = '\x01' << (iVar2 & 3);
        uVar6 = uVar7 * '\x02' + 0x11;
        arg1_00 = fcn.00012acc(uVar6);
        uVar5 = 0;
        if (arg1_00 == NULL) {
            uVar5 = 0x8000000000000009;
        }
        else {
            auStack_48._0_2_ = 0xc;
            auStack_48[2] = uVar6;
            auStack_48._3_4_ = iVar2;
            uStack_41 = uVar3;
            uStack_39 = uVar1;
            if (arg1_00 != auStack_48) {
                fcn.000102f0(arg1_00,auStack_48,0x11);
            }
            if ((uVar7 != 0) && (arg1_00 + 0x11 != puVar4)) {
                fcn.000102f0(arg1_00 + 0x11,puVar4,uVar7);
            }
            puVar4 = uVar7 + 0x11 + arg1_00;
            if ((uVar7 != 0) && (puVar4 != arg2)) {
                fcn.000102f0(puVar4,arg2,uVar7);
            }
            fcn.00012b90(arg1_00);
        }
    }
    return uVar5;
}


/* fcn.00010c4c @ 0x10c4c */

ulong fcn.00010c4c(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t *arg2;
    uint32_t *arg1_00;
    uint8_t uVar4;
    ulong uVar5;
    uint64_t arg3;
    uchar auStack_48 [7];
    uint uStack_41;
    ulong uStack_3d;
    ushort uStack_35;
    
    uVar5 = *(arg1 + 0x10);
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    uVar3 = *(arg1 + 0x18);
    arg2 = *(arg1 + 0x20);
    if (((iVar2 - 3U & 0xfffffff3) == 0) && (iVar2 != 0xf)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar4 = '\x01' << (iVar2 & 3);
        if ((uVar3 < 0x100) && (arg3 = uVar4 * uVar3, arg3 < 0xeb)) {
            uVar4 = uVar3 * uVar4 + 0x15;
            arg1_00 = fcn.00012acc(uVar4);
            if (arg1_00 != NULL) {
                auStack_48._0_2_ = 0xb;
                uStack_41 = uVar3;
                auStack_48[2] = uVar4;
                auStack_48._3_4_ = iVar2;
                uStack_3d = uVar5;
                uStack_35 = uVar1;
                if (arg1_00 != auStack_48) {
                    fcn.000102f0(arg1_00,auStack_48,0x15);
                }
                if ((arg3 != 0) && (arg1_00 + 0x15 != arg2)) {
                    fcn.000102f0(arg1_00 + 0x15,arg2,arg3);
                }
                fcn.00012b90(arg1_00);
                return 0;
            }
        }
        uVar5 = 0x8000000000000009;
    }
    return uVar5;
}


/* fcn.000112b8 @ 0x112b8 */

ulong fcn.000112b8(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t *arg1_00;
    ulong uVar3;
    uchar auStack_28 [11];
    ulong uStack_1d;
    
    uVar1 = *arg1;
    uVar2 = *(arg1 + 8);
    arg1_00 = fcn.00012acc(CONCAT71(arg1 >> 8,0x13));
    uVar3 = 0;
    if (arg1_00 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        auStack_28[2] = 0x13;
        auStack_28._0_2_ = 9;
        auStack_28._3_8_ = uVar1;
        uStack_1d = uVar2;
        if (arg1_00 != auStack_28) {
            fcn.000102f0(arg1_00,auStack_28,0x13);
        }
        fcn.00012b90(arg1_00);
    }
    return uVar3;
}


/* fcn.00012be4 @ 0x12be4 */

ulong fcn.00012be4(uint32_t arg1,int64_t arg2)

{
    uint32_t *arg1_00;
    uint in_register_0000000c;
    char cVar1;
    uchar auStackX_18 [8];
    
    if (arg1 < 0xf9) {
        cVar1 = arg1 + '\a';
        arg1_00 = fcn.00012acc(CONCAT71(CONCAT44(in_register_0000000c,arg1) >> 8,cVar1));
        if (arg1_00 != NULL) {
            auStackX_18._0_2_ = 10;
            auStackX_18[2] = cVar1;
            auStackX_18._3_4_ = arg1;
            if (arg1_00 != auStackX_18) {
                fcn.000102f0(arg1_00,auStackX_18,7);
            }
            if ((arg1 != 0) && (arg1_00 + 7 != arg2)) {
                fcn.000102f0(arg1_00 + 7,arg2,arg1);
            }
            fcn.00012b90(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00012d68 @ 0x12d68 */

ulong fcn.00012d68(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t *arg1_00;
    uint32_t *arg2_00;
    uint32_t *arg2_01;
    uint64_t arg3;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int16_t iStackX_10;
    uint8_t uStackX_12;
    uint32_t *apuStackX_18 [2];
    uint32_t var_368h;
    int64_t var_370h;
    uint32_t auStack_438 [256];
    
    bVar2 = false;
    bVar1 = false;
    if (arg2 == 0) {
        puVar6 = NULL;
    }
    else {
        puVar6 = *arg2;
    }
    iVar3 = fcn.00012acc(0);
    if (iVar3 == 0) {
        uVar4 = 0x8000000000000009;
    }
    else {
        arg2_00 = **0x13220 + 0xd;
        puVar5 = (*0x13220)[2] + **0x13220;
        arg1_00 = *0x13220;
        arg2_01 = arg2_00;
        apuStackX_18[0] = arg2_00;
        if (arg2_00 < puVar5) {
            do {
                if (&iStackX_10 != arg2_00) {
                    arg1_00 = &iStackX_10;
                    fcn.000102f0(arg1_00,arg2_00,7);
                }
                if (puVar6 != NULL) {
                    bVar1 = bVar2;
                    if (puVar6 == arg2_00) {
                        bVar2 = true;
                        bVar1 = true;
                    }
                }
                if (iStackX_10 != 0xff) {
                    arg2_01 = arg2_00;
                }
                arg2_00 = arg2_00 + uStackX_12;
            } while (arg2_00 < puVar5);
            apuStackX_18[0] = arg2_00;
        }
        if ((puVar6 == NULL) || (bVar1)) {
            if (&iStackX_10 != arg2_01) {
                arg1_00 = &iStackX_10;
                fcn.000102f0(arg1_00,arg2_01,7);
            }
            arg3 = uStackX_12;
            if ((arg3 != 0) && (auStack_438 != arg2_01)) {
                arg1_00 = auStack_438;
                fcn.000102f0(arg1_00,arg2_01,arg3);
            }
            fcn.00012c8c(CONCAT71(arg1_00 >> 8,uStackX_12),puVar6,CONCAT71(arg3 >> 8,arg1),apuStackX_18);
            puVar6 = apuStackX_18[0];
            if ((uStackX_12 != 0) && (apuStackX_18[0] != auStack_438)) {
                fcn.000102f0(apuStackX_18[0],auStack_438,uStackX_12);
            }
            fcn.00012b90(puVar6);
            if (arg2 != 0) {
                *arg2 = puVar6;
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000002;
        }
    }
    return uVar4;
}


/* fcn.00012f0c @ 0x12f0c */

ulong fcn.00012f0c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg1_00;
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    uchar auStack_28 [16];
    
    uVar3 = arg3;
    if (uVar3 < 0xf9) {
        cVar2 = arg3 + '\a';
        arg1_00 = fcn.00012acc(CONCAT71(arg1 >> 8,cVar2));
        if (arg1_00 != NULL) {
            auStack_28._0_2_ = 0xfe;
            auStack_28[2] = cVar2;
            auStack_28._3_4_ = uVar3;
            if (arg1_00 != auStack_28) {
                fcn.000102f0(arg1_00,auStack_28,7);
            }
            if ((uVar3 != 0) && (arg1_00 + 7 != arg4)) {
                fcn.000102f0(arg1_00 + 7,arg4,arg3 & 0xffffffff);
            }
            fcn.00012b90(arg1_00);
            uVar1 = fcn.00012d68(CONCAT71(arg1_00 >> 8,arg1),arg2);
            return uVar1;
        }
    }
    return 0x8000000000000009;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10280 */

uint64_t section..text(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *in_stack_00000028;
    
    //[00] -r-x section size 11616 named .text
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != NULL) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00011bd0 @ 0x11bd0 */

int64_t fcn.00011bd0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = 0xffffffff;
    (**(*0x131c0 + 0x28))(1,0,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc),aiStackX_10);
    iVar1 = aiStackX_10[0];
    if (arg1 != 0) {
        fcn.000102b0(aiStackX_10[0],arg1);
    }
    return iVar1;
}


/* fcn.0001200c @ 0x1200c */

int64_t fcn.0001200c(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t arg4;
    int64_t aiStackX_18 [2];
    
    if (arg3 != 0) {
        *arg3 = 0;
    }
    aiStackX_18[0] = 0;
    arg4 = arg3;
    iVar2 = fcn.00011eb8(arg1,aiStackX_18);
    iVar3 = aiStackX_18[0];
    if ((-1 < iVar2) && (aiStackX_18[0] != 0)) {
        if (1 < *(aiStackX_18[0] + 0xf)) {
            uVar1 = fcn.00011f18(*(aiStackX_18[0] + 0x18),8,0x50434146,arg4);
            iVar2 = fcn.00011fb8(uVar1);
            if (iVar2 != 0) {
                return iVar2;
            }
        }
        if ((arg3 == 0) || (*arg3 == '\0')) {
            uVar1 = fcn.00011f18(*(iVar3 + 0x10),4,0x50434146,arg4);
            iVar3 = fcn.00011fb8(uVar1);
            return iVar3;
        }
    }
    return 0;
}


/* fcn.000121ac @ 0x121ac */

ulong fcn.000121ac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    uint32_t *puVar3;
    uint32_t *arg1_00;
    ulong uStackX_8;
    uint32_t auStack_68 [20];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puVar1 = fcn.000120e0();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.00012130();
            arg1_00 = auStack_68;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x13090) {
                fcn.000102f0(arg1_00,0x13090,0x10);
            }
            arg1_00[4] = 0x30;
            arg1_00[5] = 0;
            arg1_00[8] = 0xffffffff;
            arg1_00[9] = 0xffffffff;
            arg1_00[6] = 1;
            arg1_00[7] = 0x30;
            if (arg1_00 + 10 != arg1) {
                fcn.000102f0(arg1_00 + 10,arg1,0x10);
            }
            *(arg1_00 + 0xe) = arg2;
            *(arg1_00 + 0x10) = arg3;
            uStackX_8 = 0x48;
            (**puVar1)(puVar1,arg1_00,&uStackX_8);
            uVar2 = *(arg1_00 + 8);
        }
    }
    return uVar2;
}


/* fcn.000122a0 @ 0x122a0 */

ulong fcn.000122a0(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uint32_t *puVar3;
    uint32_t *arg1_00;
    ulong uStackX_10;
    uint32_t auStack_48 [16];
    
    puVar1 = fcn.000120e0();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.00012130();
        arg1_00 = auStack_48;
        if (puVar3 != NULL) {
            arg1_00 = puVar3;
        }
        if (arg1_00 != 0x13090) {
            fcn.000102f0(arg1_00,0x13090,0x10);
        }
        arg1_00[4] = 0x28;
        arg1_00[5] = 0;
        arg1_00[8] = 0xffffffff;
        arg1_00[9] = 0xffffffff;
        arg1_00[6] = 4;
        arg1_00[7] = 0x28;
        if (arg1_00 + 10 != arg1) {
            fcn.000102f0(arg1_00 + 10,arg1,0x10);
        }
        arg1_00[0xe] = 1;
        arg1_00[0xf] = 0;
        uStackX_10 = 0x40;
        (**puVar1)(puVar1,arg1_00,&uStackX_10);
        uVar2 = *(arg1_00 + 8);
    }
    return uVar2;
}


/* fcn.00011c3c @ 0x11c3c */

void fcn.00011c3c(int64_t arg1)

{
    int16_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t auStackX_10 [6];
    
    for (piVar1 = fcn.000120b0(); *piVar1 != -1; piVar1 = piVar1 + piVar1[1]) {
        if (*piVar1 == 6) goto code_r0x00011c69;
    }
    piVar1 = NULL;
code_r0x00011c69:
    if (piVar1 == NULL) {
        section..text(0x80000000,auStackX_10,0,0);
        if (auStackX_10[0] < 0x80000008) {
            auStackX_10[0]._0_1_ = 0x24;
        }
        else {
            section..text(0x80000008,auStackX_10,0,0);
        }
    }
    else {
        auStackX_10[0]._0_1_ = *(piVar1 + 4);
    }
    if (0x30 < auStackX_10[0]) {
        auStackX_10[0]._0_1_ = 0x30;
    }
    uVar3 = 1;
    if (arg1 == '\0') {
        auStackX_10[0]._0_1_ = 0x20;
    }
    if (auStackX_10[0] < 0x28) {
        uVar2 = 1 << (auStackX_10[0] - 0x1e & 0x3f);
    }
    else {
        uVar2 = 0x200;
        uVar3 = 1 << (auStackX_10[0] - 0x27 & 0x3f);
    }
    fcn.00011bd0(uVar3 + 1,(uVar2 * uVar3 + uVar3 + 1 + (~-(arg1 != '\0') & 8)) * 0x1000);
    return;
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011f18 @ 0x11f18 */

int * fcn.00011f18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int **arg2_00;
    uint64_t uVar2;
    int *piStackX_20;
    uchar *in_stack_00000028;
    
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = 0;
    }
    if (arg1 != 0) {
        uVar2 = 0;
        uVar1 = (*(arg1 + 4) - 0x24) / arg2;
        if (uVar1 != 0) {
            arg2_00 = arg1 + 0x24;
            do {
                piStackX_20 = NULL;
                if ((((arg2 != 0) && (&piStackX_20 != arg2_00)) &&
                    (fcn.000102f0(&piStackX_20,arg2_00,arg2), piStackX_20 != NULL)) && (*piStackX_20 == arg3)) {
                    return piStackX_20;
                }
                uVar2 = uVar2 + 1;
                arg2_00 = arg2_00 + arg2;
            } while (uVar2 < uVar1);
        }
    }
    return NULL;
}


/* fcn.00011fb8 @ 0x11fb8 */

uint64_t fcn.00011fb8(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t auStackX_8 [4];
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (iVar1 == 0) {
        auStackX_8[0] = 0;
    }
    else if (*(iVar1 + 8) < 3) {
        auStackX_8[0] = *(iVar1 + 0x24);
    }
    else {
        if (auStackX_8 != iVar1 + 0x84) {
            fcn.000102f0(auStackX_8,iVar1 + 0x84,8);
        }
        if (auStackX_8[0] == 0) {
            auStackX_8[0] = *(iVar1 + 0x24);
        }
    }
    return auStackX_8[0];
}


/* fcn.000120e0 @ 0x120e0 */

int64_t fcn.000120e0(void)

{
    int64_t iVar1;
    
    if (*0x131e0 == 0) {
        iVar1 = (**(*0x131c0 + 0x140))(0x12ff0,0,0x131e0);
        if (iVar1 < 0) {
            *0x131e0 = 0;
        }
    }
    return *0x131e0;
}


/* fcn.00012130 @ 0x12130 */

uint64_t fcn.00012130(void)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_8 [4];
    
    uVar4 = 0;
    if (*0x131d8 == 0) {
        iVar1 = fcn.00011eb8(0x12fe0,aiStackX_8);
        *0x131d8 = uVar4;
        if (-1 < iVar1) {
            uVar3 = 0;
            piVar2 = aiStackX_8[0] + 0x10;
            if (*(aiStackX_8[0] + 4) != 0) {
                do {
                    uVar3 = uVar4;
                    if ((*piVar2 == 7) && (0x4f < *(piVar2 + 6) << 0xc)) break;
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar3;
                    piVar2 = piVar2 + *(aiStackX_8[0] + 8);
                } while (uVar3 < *(aiStackX_8[0] + 4));
            }
            if (uVar3 < *(aiStackX_8[0] + 4)) {
                *0x131d8 = *(piVar2 + 2);
            }
        }
    }
    return *0x131d8;
}


/* fcn.00012558 @ 0x12558 */

int64_t fcn.00012558(void)

{
    int64_t iVar1;
    uint uStackX_8;
    
    iVar1 = **0x13220;
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        uStackX_8._2_1_ = 3;
        uStackX_8._0_2_ = 0xff;
        if (*(*0x13220 + 1) + iVar1 != &uStackX_8) {
            fcn.000102f0(*(*0x13220 + 1) + iVar1,&uStackX_8,3);
        }
        *(**0x13220 + 5) = (*0x13220)[1] + 3;
    }
    return iVar1;
}


/* fcn.000125c0 @ 0x125c0 */

void fcn.000125c0(void)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uchar auStackX_18 [16];
    
    iVar3 = (**(*0x131c0 + 0x140))(0x13030,0,auStackX_18);
    if ((-1 < iVar3) && (*(*0x13220 + 0x14) == '\0')) {
        fcn.00012558();
        piVar2 = *0x13220;
        puVar1 = *0x13220 + 0xc;
        *(*0x13220 + 0x14) = 1;
        fcn.000121ac(0x13178,*piVar2,*puVar1 << 0xc);
        fcn.000122a0(0x13178);
        fcn.000121ac(0x13168,*0x13220,8);
        fcn.000122a0(0x13168);
    }
    return;
}


/* fcn.00012450 @ 0x12450 */

ulong fcn.00012450(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint32_t *puVar2;
    uint32_t *arg1_00;
    ulong uStackX_8;
    uint32_t auStack_68 [20];
    
    if (arg1 != 0) {
        if (arg2 == 0) {
            if (arg3 == 0) {
code_r0x0001249e:
                puVar1 = fcn.000120e0();
                if (puVar1 == NULL) {
                    return 0x8000000000000013;
                }
                puVar2 = fcn.00012130();
                arg1_00 = auStack_68;
                if (puVar2 != NULL) {
                    arg1_00 = puVar2;
                }
                if (arg1_00 != 0x13090) {
                    fcn.000102f0(arg1_00,0x13090,0x10);
                }
                arg1_00[4] = 0x30;
                arg1_00[5] = 0;
                arg1_00[8] = 0xffffffff;
                arg1_00[9] = 0xffffffff;
                arg1_00[6] = 3;
                arg1_00[7] = 0x30;
                if (arg1_00 + 10 != arg1) {
                    fcn.000102f0(arg1_00 + 10,arg1,0x10);
                }
                *(arg1_00 + 0xe) = arg2;
                if (arg3 == 0) {
                    arg1_00[0x10] = 0;
                    arg1_00[0x11] = 0;
                }
                else {
                    *(arg1_00 + 0x10) = *arg3;
                }
                uStackX_8 = 0x48;
                (**puVar1)(puVar1,arg1_00,&uStackX_8);
                if (arg3 != 0) {
                    *arg3 = *(arg1_00 + 0x10);
                }
                return *(arg1_00 + 8);
            }
        }
        else if (arg3 != 0) goto code_r0x0001249e;
    }
    return 0x8000000000000002;
}


/* fcn.00012974 @ 0x12974 */

int64_t fcn.00012974(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    uint32_t *puStackX_10;
    uint32_t *puStackX_18;
    int64_t var_38h;
    uint32_t var_40h;
    
    puStackX_10 = **0x13220;
    piVar6 = *0x13220;
    if (puStackX_10 == NULL) {
        puStackX_10 = 0xffffffff;
        iVar3 = (**(*0x131c0 + 0x28))(1,0,6,&puStackX_10);
        piVar6 = *0x13220;
        if (-1 < iVar3) {
            *(puStackX_10 + 5) = 0;
            *puStackX_10 = 0xaa;
            *(puStackX_10 + 2) = 0xd;
            *(puStackX_10 + 3) = 1;
            *(piVar6 + 1) = 0xd;
            *piVar6 = puStackX_10;
            *(piVar6 + 0xc) = 6;
            goto code_r0x00012a0d;
        }
code_r0x000129d2:
        iVar3 = 0;
    }
    else {
code_r0x00012a0d:
        iVar1 = *(piVar6 + 0xc);
        uVar2 = *(piVar6 + 1);
        uVar4 = iVar1 - 4;
        uVar5 = arg1 + uVar2;
        if (uVar4 << 0xc < uVar5 + 3) {
            puStackX_18 = 0xffffffff;
            iVar3 = (**(*0x131c0 + 0x28))(1,0,uVar4 + 6,&puStackX_18);
            if (iVar3 < 0) goto code_r0x000129d2;
            if ((uVar2 != 0) && (puStackX_18 != puStackX_10)) {
                fcn.000102f0(puStackX_18,puStackX_10,uVar2);
            }
            (**(*0x131c0 + 0x30))(puStackX_10,*(*0x13220 + 0xc));
            piVar6 = *0x13220;
            **0x13220 = puStackX_18;
            *(piVar6 + 0xc) = iVar1 + 2;
        }
        *(piVar6 + 1) = uVar5;
        iVar3 = uVar2 + *piVar6;
    }
    return iVar3;
}


/* fcn.00012c8c @ 0x12c8c */

void fcn.00012c8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint uStackX_10;
    
    iVar2 = **0x13220;
    uVar3 = (*0x13220)[1] - (arg1 & 0xff);
    if (arg2 == 0) {
        if (arg3 == '\0') {
            *arg4 = uVar3 + iVar2;
        }
        else {
            iVar5 = uVar3 - 0xd;
            puVar4 = iVar2 + 0xd + (arg1 & 0xffU);
            puVar1 = iVar2 + 0xd;
            if ((iVar5 != 0) && (puVar4 != puVar1)) {
                fcn.000102f0(puVar4,puVar1,iVar5);
            }
            *arg4 = puVar1;
        }
    }
    else {
        iVar5 = arg2 - iVar2;
        if (arg3 == '\0') {
            if (&uStackX_10 != arg2) {
                fcn.000102f0(&uStackX_10,arg2,7);
            }
            iVar5 = iVar5 + uStackX_10._2_1_;
        }
        puVar1 = iVar5 + iVar2;
        puVar4 = (arg1 & 0xffU) + iVar5 + iVar2;
        if ((uVar3 - iVar5 != 0) && (puVar4 != puVar1)) {
            fcn.000102f0(puVar4,puVar1,uVar3 - iVar5);
        }
        *arg4 = puVar1;
    }
    return;
}


