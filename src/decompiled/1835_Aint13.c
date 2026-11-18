// decompiled by r2ghidra: 1835_Aint13.pe32
// functions: 16

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iStackX_8;
    
    fcn.00010390(arg1,arg2);
    if (*0x11608 == 0) {
        *0x115f8 = *(arg2 + 0x60);
        *0x11600 = *(arg2 + 0x58);
        *0x11608 = arg2;
    }
    *0x11610 = 0x10504;
    iStackX_8 = arg1;
    (**(*0x115f8 + 0x80))(&iStackX_8,0x11530,0,0x11610);
    return;
}


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x115e8 = *(arg1 + 0x60);
    *0x115e0 = arg1;
    fcn.00011340();
    puVar4 = fcn.00011340();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103e4:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102c0();
                }
                fcn.000102d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
                return;
            }
            if ((*0x11570 == *(puVar4 + 4)) && (*0x11578 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103e4;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00011340 @ 0x11340 */

int64_t fcn.00011340(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x115f0 == 0) {
        *0x115f0 = 0;
        if (*(*0x115e0 + 0x68) != 0) {
            piVar2 = *(*0x115e0 + 0x70);
            do {
                if ((*0x11550 == *piVar2) && (*0x11558 == piVar2[1])) {
                    *0x115f0 = (*(*0x115e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x115f0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x115e0 + 0x68));
        }
    }
    return *0x115f0;
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


/* fcn.00010458 @ 0x10458 */

int16_t fcn.00010458(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int16_t iVar3;
    uint64_t uVar4;
    int64_t iStackX_10;
    
    uVar4 = 0;
    iVar3 = 0;
    if (arg2 != 0) {
        do {
            iVar1 = (**(*0x115f8 + 0x98))(*(arg1 + uVar4 * 8),0x11560,&iStackX_10);
            if (iVar1 < 0) {
                return iVar3;
            }
            for (puVar2 = *(iStackX_10 + 0x58); puVar2 != NULL; puVar2 = *puVar2) {
                if ((*(puVar2 + -0x38d) == '\x04') && (*(puVar2 + -0x70) < 2)) {
                    if (arg3 != NULL) {
                        *arg3 = puVar2 + -0x73;
                        arg3 = arg3 + 8;
                    }
                    iVar3 = iVar3 + 1;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < arg2);
    }
    return iVar3;
}


/* fcn.00010f14 @ 0x10f14 */

//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_2fh

int64_t fcn.00010f14(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    uint uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg2_00;
    int64_t arg3;
    uchar *puVar7;
    uint32_t auStackX_10 [2];
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    ulong uStack_d8;
    ushort auStack_d0 [4];
    int64_t iStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    uchar auStack_a8 [4];
    uchar auStack_a4 [4];
    uint64_t uStack_a0;
    uchar auStack_98 [10];
    char cStack_8e;
    uchar auStack_88 [7];
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_39h;
    uint32_t var_2fh;
    int64_t var_29h;
    
    iStack_c8 = 0;
    uStack_d8 = 0;
    if (arg2 != 0) {
        iVar3 = (**(*0x115f8 + 0x140))(0x11540,0,&iStack_c8);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = (**(*0x115f8 + 0x140))(0x11520,0,0x115d8);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar4 = (***0x115d8)(1,0,1,0x11630,&uStack_d8);
        iVar3 = *0x11630;
        if (iVar4 < 0) {
            return iVar4;
        }
        (**(*0x115f8 + 0x168))(*0x11630,0xd08,0);
        puVar7 = iVar3 + 0x76a;
        (**(*0x115f8 + 0x168))(puVar7,0x180,0xff);
        iVar4 = (**(iStack_c8 + 0x48))(iStack_c8,uStack_d8,2,0x10,0x11618);
        if (iVar4 < 0) {
            return iVar4;
        }
        (*(*0x115d8)[4])(*0x115d8,5,auStack_a8,0x11620);
        *(iVar3 + 0x8eb) = *(iVar3 + 0x8eb) | 8;
        (*(*0x115d8)[4])(*0x115d8,1,auStack_a4,auStack_d0);
        iVar4 = (*(*0x115d8)[7])(7,auStackX_10);
        if (iVar4 < 0) {
            return iVar4;
        }
        *(iVar3 + 0x904) = *(auStackX_10[0] + 2) + auStackX_10[0];
        uVar1 = *(auStackX_10[0] + 4);
        *(iVar3 + 0x8fc) = *(auStackX_10[0] + 6) + uVar1;
        *(iVar3 + 0x8fe) = auStackX_10[0] - uVar1 >> 4;
        *(iVar3 + 0x900) = *(auStackX_10[0] + 8) + uVar1;
        *(iVar3 + 0x902) = auStackX_10[0] - uVar1 >> 4;
        (*(*0x115d8)[5])(auStackX_10[0] >> 4 & 0xf000,0,auStackX_20,auStackX_18);
        *(auStackX_10[0] + 10) = auStack_d0[0];
        (*(*0x115d8)[6])(auStackX_20[0],auStackX_18[0]);
        uVar2 = *0x11620;
        *(iVar3 + 0x8eb) = *(iVar3 + 0x8eb) | 1;
        *(iVar3 + 0x8ed) = uVar2;
        (*(*0x115d8)[5])(*0x11618,uStack_d8,auStackX_20,auStackX_18);
        *0x115c0 = *0xfff4c + 0xf0000;
        (**(*0x115f8 + 0x40))(4,0x1000,0x11628);
        uStack_a0 = arg2 & 0xffff;
        iStack_c0 = 0;
        uStack_b0 = 0;
        if (uStack_a0 != 0) {
            iVar4 = iVar3 + 0x908;
            arg3 = iVar3 + 0x200;
            arg2_00 = iVar3;
            iStack_b8 = iVar4;
            do {
                arg1_00 = *arg1;
                if ((*(arg1_00 + 0x18) != 0) || (*(*(*(arg1_00 + 0x360) + 8) + 0xc) == 0x200)) {
                    fcn.00010b5c(arg1_00,arg2_00,arg3,puVar7);
                    uVar6 = 0;
                    iVar5 = (**(*0x115d0 + 0x30))(*0x115d0,0,0,0x10,auStack_98);
                    if (-1 < iVar5) {
                        if ((cStack_8e != '\x04') || (*(arg1_00 + 0x18) == 1)) {
                            fcn.00010d9c(arg1_00,iVar4,auStack_88,CONCAT71(uVar6 >> 8,*puVar7));
                            uVar6 = (**(*0x115f8 + 0x18))(0x1f);
                            iVar4 = (*(*0x115d8)[1])(auStack_88);
                            (**(*0x115f8 + 0x20))(uVar6);
                            if (iVar4 == -0x7ffffffffffffff1) goto code_r0x00011301;
                            iVar4 = iStack_b8;
                        }
                        iVar4 = iVar4 + 0x20;
                        iStack_c0 = iStack_c0 + 1;
                        arg3 = arg3 + 0x2a;
                        arg2_00 = arg2_00 + 0x10;
                        puVar7 = puVar7 + 0xc;
                        iStack_b8 = iVar4;
                        if (iStack_c0 == 0x20) break;
                    }
                }
                arg1 = arg1 + 8;
                uStack_b0 = uStack_b0 + 1;
            } while (uStack_b0 < uStack_a0);
        }
        iVar4 = *0x115f8;
        uVar1 = *(iVar3 + 0xd08);
        iVar3 = *0x11618 << 0xc;
        puVar7 = *(*0x115c0 + 0xe) + 0xf000a;
        *puVar7 = 0x9a;
        *(puVar7 + 1) = uVar1 + iVar3;
        (**(iVar4 + 0x160))(*0x11618,*0x11630,uStack_d8);
code_r0x00011301:
        (*(*0x115d8)[6])(auStackX_20[0],auStackX_18[0]);
        (**(*0x115f8 + 0x48))(*0x11628);
    }
    return 0;
}


/* fcn.000105c4 @ 0x105c4 */

void fcn.000105c4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    
    uVar1 = *arg2;
    uVar2 = *arg3;
    uVar3 = *arg1;
    if (arg4 < 0xfc000) {
        if (((uVar3 < 0x401) && (uVar1 < 0x11)) && (uVar2 < 0x40)) goto code_r0x00010682;
        uVar1 = 0x20;
        uVar3 = (arg4 >> 5) * 0x3f;
        if (0x400 < uVar3) {
            uVar3 = 0x400;
            uVar1 = 0x40;
        }
    }
    else {
        uVar1 = 0x20;
        if (((0x1f7fff < arg4) && (uVar1 = 0x40, 0x3effff < arg4)) && (uVar1 = 0x80, 0x7dffff < arg4)) {
            uVar1 = 0xff;
        }
        uVar3 = (arg4 / uVar1) * 0x3f;
        if (((0x400 < uVar3) && (uVar3 = 0x400, uVar1 != 0xff)) && (uVar1 = uVar1 * '\x02', uVar1 == 0)) {
            uVar1 = 0xff;
        }
    }
    uVar2 = 0x3f;
code_r0x00010682:
    *arg2 = uVar1;
    *arg1 = uVar3;
    *arg3 = uVar2;
    return;
}


/* fcn.000109b4 @ 0x109b4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.000109b4(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    int64_t iVar3;
    ushort uVar4;
    ushort *puVar5;
    uint8_t uVar6;
    int16_t iVar7;
    uint32_t auStackX_20 [2];
    int32_t var_38h;
    uint32_t auStack_38 [2];
    int64_t iStack_30;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    auStackX_20[0] = 0;
    uVar6 = 0;
    if (*0x115c8 != 0) {
        do {
            if (*(uVar6 * 3 + 0x11640) == arg3) {
                *(arg2 + 9) = *(uVar6 * 3 + 0x11642);
                return;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *0x115c8);
    }
    if (*0x115c8 < 8) {
        *(*0x115c8 * 3 + 0x11640) = arg3;
        *(*0x115c8 * 3 + 0x11642) = *0x115c8;
        *(arg2 + 9) = *0x115c8;
        *0x115c8 = *0x115c8 + 1;
        *0x115d0 = *(*(arg1 + 0x350) + 0x78);
        iVar3 = (**(*0x115d8 + 0x38))(7,auStackX_20);
        iVar1 = *0x115d0;
        auStackX_20[0] = auStackX_20[0] + *(auStackX_20[0] + 2);
        if (-1 < iVar3) {
            uVar4 = 0xffff;
            var_20h = 0;
            iStack_30 = 0;
            puVar5 = (auStackX_20[0] >> 4 & 0xf000) * 0x10 + *(arg2 + 9) * 10 + (auStackX_20[0] & 0xffff);
            *(puVar5 + 3) = *(*(arg1 + 0x350) + 8);
            (**(iVar1 + 0x30))(iVar1,2,0x20,1,auStack_38);
            (**(iVar1 + 0x80))(iVar1,5,&var_20h,&iStack_30);
            if ((auStack_38[0] & 0xffffffe0) == 0) {
                iVar7 = auStackX_20[0];
            }
            else {
                auStackX_20[0]._0_2_ = auStack_38[0] & 0xffffffe0;
                iVar7 = auStackX_20[0] + 0x10;
                auStackX_20[0]._0_2_ = auStackX_20[0] + 0x14;
                out(iVar7,0);
                uVar2 = in(auStackX_20[0]);
                if (**(iStack_30 + 0xe) == uVar2) {
                    uVar4 = 0xfffe;
                }
            }
            *puVar5 = uVar4;
            puVar5[1] = iVar7;
            puVar5[2] = auStackX_20[0];
        }
    }
    else {
        *(arg2 + 9) = 8;
    }
    return;
}


/* fcn.00010880 @ 0x10880 */

void fcn.00010880(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    ushort uVar2;
    ushort uVar3;
    ushort uVar4;
    int iVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint uVar10;
    uint32_t uVar11;
    char *pcVar12;
    char *pcVar13;
    uint8_t uVar14;
    uint8_t uVar15;
    char cVar16;
    uint16_t uVar17;
    char *pcVar18;
    int64_t iStackX_20;
    uint8_t *in_stack_00000028;
    
    uVar2 = *(arg1 + 0x29);
    cVar16 = '\0';
    uVar3 = *(arg1 + 0x2f);
    *(arg3 + 0x29) = *(arg1 + 0xa3);
    *(arg3 + 0x28) = *(arg1 + 0xd3);
    uVar4 = *(arg1 + 0x25);
    *(arg2 + 2) = uVar2;
    *arg2 = uVar4;
    uVar17 = 0;
    *(arg2 + 0xe) = uVar3;
    uVar10 = *(arg1 + 0x9b);
    if ((*(arg1 + 0xcf) & 0x400) != 0) {
        uVar10 = *(arg1 + 0xeb);
        uVar17 = *(arg1 + 0xef);
    }
    *(arg3 + 0x1c) = uVar10;
    *(arg3 + 0x20) = uVar17;
    uVar6 = *in_stack_00000028 | 0x80;
    *in_stack_00000028 = *in_stack_00000028 + 1;
    *(arg3 + 4) = uVar6;
    *arg4 = uVar6;
    *(arg4 + 2) = *(arg1 + 9);
    *(arg4 + 3) = *(arg1 + 8);
    *(arg4 + 4) = (*0x11618 * 0x1000 - *0x11630) + arg2;
    *(arg4 + 8) = (*0x11618 * 0x1000 - *0x11630) + arg3;
    *(arg3 + 0x16) = *(arg3 + 0x16) | 0xe0;
    if ((*(arg1 + 0xcf) & 0x400) != 0) {
        *(arg3 + 0x18) = *(arg3 + 0x18) | 2;
    }
    if ((*(arg1 + 0xf7) & 0xd000) == 0x5000) {
        for (uVar11 = (*(arg1 + 0x10f) * 0x10000 + *(arg1 + 0x10d)) * 2; 1 < uVar11; uVar11 = uVar11 >> 1) {
            cVar16 = cVar16 + '\x01';
        }
        *(arg3 + 0x19) = cVar16;
    }
    *(arg3 + 0x18) = *(arg3 + 0x18) & 0xfb;
    iVar9 = *(arg1 + 0x360);
    if (iVar9 == 0) {
        return;
    }
    iStackX_20 = arg4;
    iVar8 = (**(iVar9 + 0x18))(iVar9,**(iVar9 + 8),0,0x200,*0x11628);
    if ((-1 < iVar8) && (*(*0x11628 + 0x1fe) == -0x55ab)) {
        pcVar12 = *0x11628 + 0x1be;
        uVar6 = 0;
        pcVar18 = NULL;
        do {
            pcVar13 = pcVar12;
            if (*pcVar12 == -0x80) goto code_r0x0001073e;
            pcVar13 = pcVar18;
            if (((*(pcVar12 + 5) & 0x3f00) != 0) && (pcVar18 == NULL)) {
                pcVar13 = pcVar12;
            }
            uVar6 = uVar6 + 1;
            pcVar12 = pcVar12 + 0x10;
            pcVar18 = pcVar13;
        } while (uVar6 < 4);
        if (pcVar13 != NULL) {
code_r0x0001073e:
            iVar9 = (**(iVar9 + 0x18))(iVar9,**(iVar9 + 8),*(pcVar13 + 8),0x200,*0x11628 + 0x800);
            if (((-1 < iVar9) && (*(*0x11628 + 0x9fe) == -0x55ab)) &&
               (((iVar5 = *(*0x11628 + 0x803), iVar5 == 0x4f44534d ||
                 (((iVar5 == 0x4957534d || (iVar5 == 0x5346544e)) ||
                  (*(*0x11628 + 0x839) = 0x20, *(*0x11628 + 0x836) == 0x20544146)))) ||
                (*(*0x11628 + 0x852) == 0x33544146)))) {
                uVar6 = *(*0x11628 + 0x818);
                uVar1 = *(*0x11628 + 0x81a);
                if (uVar6 * uVar1 != 0) {
                    uVar17 = *arg2;
                    uVar15 = *(arg2 + 2);
                    uVar14 = *(arg2 + 0xe);
                    uVar7 = (uVar17 * uVar15 * uVar14) / (uVar6 * uVar1);
                    iStackX_20._0_1_ = uVar1;
                    if (0x400 < uVar7) {
                        uVar7 = 0x400;
                    }
                    goto code_r0x00010853;
                }
            }
        }
    }
    uVar15 = *(arg2 + 2);
    uVar7 = *arg2;
    uVar6 = *(arg2 + 0xe);
    iStackX_20 = CONCAT71(iStackX_20._1_7_,uVar15);
    fcn.000105c4(&stack0x00000008,&iStackX_20,&stack0x00000010,uVar7 * uVar6 * uVar15);
    uVar14 = uVar6;
    uVar17 = uVar7;
code_r0x00010853:
    *(arg2 + 9) = uVar17;
    *(arg2 + 0xb) = uVar15;
    *(arg2 + 4) = uVar14;
    *arg2 = uVar7;
    *(arg2 + 2) = iStackX_20;
    *(arg2 + 0xe) = uVar6;
    if (8 < iStackX_20) {
        *(arg2 + 8) = 8;
    }
    return;
}


/* fcn.00010cd8 @ 0x10cd8 */

void fcn.00010cd8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint32_t var_20h;
    int64_t var_1ch;
    int64_t var_13h;
    int64_t var_bh;
    int16_t var_3h;
    int8_t var_1h;
    
    var_1ch._0_1_ = str.xP_:[4];
    var_20h = CONCAT31(SUB43(str.xP_:._0_4_,1),arg3 + '0');
    stack0xffffffffffffffdd = 0;
    var_13h = 0;
    var_bh = 0;
    var_3h = 0;
    var_1h = 0;
    (**(*0x115f8 + 0x160))(&var_1ch,arg2 + 0x36);
    puVar5 = &var_20h;
    uVar4 = 0;
    do {
        uVar1 = *puVar5;
        uVar3 = uVar4 + 2;
        *puVar5 = *(&var_20h + uVar4 + 1);
        puVar5 = puVar5 + 2;
        *(&var_20h + uVar4 + 1) = uVar1;
        uVar4 = uVar3;
    } while (uVar3 < 0x20);
    var_1h = 0;
    uVar2 = 0x1e;
    do {
        uVar4 = uVar2;
        if (*(&var_20h + uVar2) != ' ') break;
        uVar3 = uVar2 - 1;
        uVar2 = uVar3;
        uVar4 = uVar3;
    } while (uVar3 != 0);
    *(&var_20h + uVar4 + 1) = 0;
    (**(*0x115f8 + 0x160))(arg1,&var_20h,uVar4 + 1);
    return;
}


/* fcn.00010b5c @ 0x10b5c */

void fcn.00010b5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uchar auStackX_8 [8];
    int16_t aiStackX_18 [8];
    char *in_stack_00000028;
    int16_t aiStack_48 [4];
    int16_t aiStack_40 [4];
    uchar auStack_38 [16];
    
    uVar5 = *(arg1 + 8);
    iVar4 = *(*(arg1 + 0x350) + 0x78);
    *(arg3 + 6) = uVar5;
    *(arg3 + 5) = *(arg1 + 9);
    iVar3 = (**(iVar4 + 0x30))(iVar4,0,0x3c,1,auStackX_8);
    if (-1 < iVar3) {
        *(arg3 + 0x17) = auStackX_8[0];
        iVar4 = (**(iVar4 + 0x70))(iVar4,auStack_38,aiStackX_18,aiStack_48,aiStack_40);
        if (-1 < iVar4) {
            uVar6 = (aiStackX_18[0] * 0x20 + aiStack_48[0]) * 8 + aiStack_40[0];
            *(arg3 + 7) = uVar6;
            fcn.000109b4(arg1,arg3,uVar6);
            *(arg3 + 0xe) = *(*(arg1 + 0x350) + 0x14);
            *(arg3 + 0x16) = 0xa0;
            *(arg3 + 0x19) = 9;
            iVar2 = *(*(arg1 + 0x350) + 8);
            *(arg3 + 10) = iVar2;
            *(arg3 + 0x12) = (uVar5 + 2) * 0x80 + iVar2;
            if (*(arg1 + 0x18) == 1) {
                *(arg3 + 0x18) = *(arg3 + 0x18) | 0x80;
                cVar1 = *in_stack_00000028;
                *in_stack_00000028 = cVar1 + '\x01';
                uVar5 = cVar1 + 0x10U | 0x80;
                *(arg3 + 4) = uVar5;
                *arg4 = uVar5;
                *(arg4 + 2) = *(arg1 + 9);
                *(arg4 + 3) = *(arg1 + 8);
                *(arg4 + 4) = (*0x11618 * 0x1000 - *0x11630) + arg2;
                *(arg4 + 8) = (*0x11618 * 0x1000 - *0x11630) + arg3;
            }
            else {
                fcn.00010880(arg1,arg2,arg3,arg4);
            }
        }
    }
    return;
}


/* fcn.00010d9c @ 0x10d9c */

int64_t fcn.00010d9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    uchar auStackX_8 [2];
    uchar uStackX_a;
    uchar uStackX_b;
    int16_t in_stack_00000028;
    uint auStack_38 [2];
    uint auStack_30 [2];
    uint auStack_28 [2];
    uchar auStack_20 [8];
    
    (**(*0x115f8 + 0x168))(arg3,0x45);
    iVar1 = *(*(arg1 + 0x350) + 0x78);
    iVar2 = (**(iVar1 + 0x70))(iVar1,auStack_20,auStack_38,auStack_30,auStack_28);
    if (-1 < iVar2) {
        *(arg3 + 2) = auStack_38[0];
        *(arg3 + 6) = auStack_30[0];
        *(arg3 + 10) = auStack_28[0];
        uVar4 = 0;
        iVar2 = (**(iVar1 + 0x30))(iVar1,2,8,1,auStackX_8);
        if (-1 < iVar2) {
            *(arg3 + 0xe) = uStackX_b;
            *(arg3 + 0xf) = uStackX_a;
            fcn.00010cd8(arg2,arg1 + 0x23,CONCAT71(uVar4 >> 8,*(arg1 + 8)));
            *(arg3 + 0x1e) = *0x11618 >> 4;
            *(arg3 + 0x1c) = arg2 - *0x11630;
            if (*(arg1 + 0x18) == 1) {
                *(arg3 + 0x14) = 3;
                *(arg3 + 0x1a) = 0xf000;
                *(arg3 + 0x18) = *(*0x115c0 + 0xc);
                iVar3 = 0x30000;
            }
            else {
                *(arg3 + 0x14) = 2;
                *(arg3 + 0x1a) = *0x11618 >> 4;
                *(arg3 + 0x18) = (arg4 & 0x7f) * 4 + in_stack_00000028;
                iVar3 = 0x10000;
            }
            *(arg3 + 0x20) = ((arg4 & 0xff) + iVar3) * 0x100 + 1;
            *(arg3 + 0x3d) = *arg1;
            iVar2 = 0;
        }
    }
    return iVar2;
}


