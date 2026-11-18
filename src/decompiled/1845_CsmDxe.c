// decompiled by r2ghidra: 1845_CsmDxe.pe32
// functions: 101

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001037c(arg1,arg2);
    fcn.00010458(arg1,arg2);
    return;
}


/* fcn.0001037c @ 0x1037c */

ulong fcn.0001037c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x1c458 = *(arg1 + 0x60);
    *0x1c450 = arg1;
    fcn.0001aa08();
    puVar4 = fcn.0001aa08();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010300();
                }
                fcn.00010310(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010330();
                }
                else {
                    fcn.00010320();
                }
code_r0x00010439:
                uVar7 = 0;
                if (*(*0x1c450 + 0x68) != 0) {
                    piVar8 = *(*0x1c450 + 0x70);
                    do {
                        if ((*0x1b9f0 == *piVar8) && (*0x1b9f8 == piVar8[1])) {
                            *0x1c4b0 = (*(*0x1c450 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x1c450 + 0x68));
                }
                *0x1c4b0 = 0;
                return 0x800000000000000e;
            }
            if ((*0x1bd58 == *(puVar4 + 4)) && (*0x1bd60 == *(puVar4 + 8))) goto code_r0x00010439;
        }
        else if (uVar1 == 4) goto code_r0x000103d0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010458 @ 0x10458 */

int64_t fcn.00010458(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    char16_t *arg1_00;
    int64_t arg2_00;
    ulong uStackX_18;
    ushort auStackX_20 [4];
    int8_t var_be4h;
    uint32_t var_c70h;
    int16_t var_c78h;
    ulong uStack_d18;
    uchar auStack_d10 [8];
    ulong uStack_d08;
    uint auStack_d00 [2];
    ulong *puStack_cf8;
    ulong uStack_cf0;
    ulong auStack_ce8 [2];
    uchar auStack_cd8 [3152];
    int64_t var_80h;
    char cStack_74;
    
    auStack_ce8[0] = 0xca9;
    uStack_cf0 = 0;
    puStack_cf8 = NULL;
    if (*0x1c478 == 0) {
        *0x1c468 = *(arg2 + 0x60);
        *0x1c470 = *(arg2 + 0x58);
        *0x1c478 = arg2;
    }
    fcn.0001ab10(1,0x3058001);
    (**(*0x1c468 + 0x80))(&uStack_cf0,0x1b7e0,0,0);
    uStack_d18 = 1;
    iVar2 = (**(*0x1c470 + 0x48))(L"SecureBoot",0x1ba30,0,&uStack_d18,&uStackX_18);
    cVar1 = '\0';
    if ((iVar2 < 0) || (uStackX_18 == '\0')) {
        uStack_d18 = 0xca9;
        arg2_00 = 0x1bad0;
        iVar2 = (**(*0x1c470 + 0x48))(L"Setup",0x1bad0,0,&uStack_d18,auStack_cd8);
        if (iVar2 < 0) {
            cStack_74 = cVar1;
        }
        if (cStack_74 != '\0') {
            iVar2 = arg1;
            iVar3 = fcn.000188f8(arg1,arg2_00);
            if (iVar3 < 0) {
                return iVar3;
            }
            iVar2 = fcn.00018ae4(iVar2,arg2_00);
            if (iVar2 < 0) {
                return iVar2;
            }
            if ((*0x1c4a8 == 0) && (iVar2 = fcn.0001ac98(), iVar2 < 0)) {
                return iVar2;
            }
            iVar2 = (**(*0x1c468 + 0x40))(4,0x18bc,0x1c338);
            if (iVar2 < 0) {
                return iVar2;
            }
            (**(*0x1c468 + 0x168))(*0x1c338,0x18bc,0);
            (*0x1c338)[0x11] = arg1;
            iVar2 = (**(*0x1c468 + 0x140))(0x1b8e0,0,*0x1c338 + 0xc);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = (**(*0x1c468 + 0x140))(0x1b880,0,*0x1c338 + 0xd);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = (**(*0x1c468 + 0x140))(0x1b7d0,0,*0x1c338 + 0xf);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = (**(*0x1c468 + 0x140))(0x1b900,0,*0x1c338 + 0xe);
            if (iVar2 < 0) {
                return iVar2;
            }
            **0x1c338 = fcn.00017a80;
            (*0x1c338)[1] = fcn.00017c10;
            (*0x1c338)[2] = fcn.0001486c;
            (*0x1c338)[3] = fcn.0001542c;
            (*0x1c338)[8] = fcn.00011d3c;
            (*0x1c338)[4] = fcn.0001219c;
            (*0x1c338)[6] = 0x1193c;
            (*0x1c338)[7] = 0x161f8;
            (*0x1c338)[9] = fcn.00011b54;
            (*0x1c338)[10] = 0x11c80;
            (*0x1c338)[5] = fcn.00011990;
            iVar2 = (**(*0x1c338)[0xd])((*0x1c338)[0xd],8,0,0,0x1d620,0,0,0);
            if (iVar2 < 0) {
                *0x1d620 = 0xdffff;
            }
            iVar2 = fcn.00010f68(*0x1d620);
            if (iVar2 < 0) {
                return iVar2;
            }
            (**((*0x1c338)[0xf] + 8))((*0x1c338)[0xf],auStack_d10,0,0,0);
            auStackX_20[0] = 0xffff;
            (**((*0x1c338)[0xf] + 0x10))((*0x1c338)[0xf],auStackX_20,0,0,0);
            arg1_00 = L"Setup";
            iVar2 = (**(*0x1c470 + 0x48))(L"Setup",0x1bab0,0,auStack_ce8,0x1c960);
            if (iVar2 < 0) {
                arg1_00 = 0x1c960;
                (**(*0x1c468 + 0x168))(0x1c960,0xca9,0);
            }
            *0x1d618 = '\0';
            if (iVar2 == 0) {
                arg1_00 = 0x2;
                if (*0x1d5c5 == '\0') {
                    cVar1 = '\x02';
                }
                *0x1d618 = cVar1;
            }
            iVar2 = fcn.00011288(arg1_00,arg2);
            if (iVar2 < 0) {
                return iVar2;
            }
            (**((*0x1c338)[0xf] + 0x10))((*0x1c338)[0xf],auStack_d10,0,0,0);
            (**((*0x1c338)[0xd] + 0x10))((*0x1c338)[0xd],(*0x1c338)[0x14] + 0x3040);
            *0x1c940 = 0xc0000;
            (*0x1c338)[0x12] = 0;
            iVar2 = (**(*0x1c468 + 0x40))(4,0x520,0x1c320);
            if (iVar2 < 0) {
                return iVar2;
            }
            (**(*0x1c468 + 0x168))(*0x1c320,0x520,0);
            *0x1c320 = *0x1c320 + 0x29;
            iVar2 = (**(*0x1c468 + 0x40))(4,0x6c0,0x1c948);
            if (iVar2 < 0) {
                return iVar2;
            }
            (**(*0x1c468 + 0x168))(*0x1c948,0x6c0,0);
            *0x1c948 = *0x1c948 + 0x36;
            (*0x1c338)[0x10] = 0;
            iVar2 = (**(*0x1c468 + 0x148))(*0x1c338 + 0x10,0x1b890,*0x1c338,0x1b7a0,0x1ba40,0);
            if (iVar2 < 0) {
                return iVar2;
            }
            (**(*0x1c468 + 0x50))(0x200,0x10,0x10d54,0,&uStack_d08);
            (**(*0x1c468 + 0xa8))(0x1b870,uStack_d08,0x1d610);
            uStackX_18 = 0;
            iVar2 = (**(*0x1c468 + 0x50))(0x200,8,0x176a8,0,&uStack_d18);
            if (-1 < iVar2) {
                (**(*0x1c468 + 0xa8))(0x1b980,uStack_d18,&uStackX_18);
            }
            (**(*0x1c468 + 0x170))(0x200,8,0x17a30,0,0x1bd98,&uStack_d08);
            (**(*0x1c468 + 0x50))(0x200,0x10,fcn.00012d78,0,&uStack_d08);
            (**(*0x1c468 + 0xa8))(0x1bae0,uStack_d08,0x1d610);
            iVar2 = (**(*0x1c468 + 0x140))(0x1b940,0,&puStack_cf8);
            if (-1 < iVar2) {
                (**puStack_cf8)(0x12de0,0x1f);
            }
            return 0;
        }
    }
    else {
        uStack_d18 = 0xca9;
        iVar2 = (**(*0x1c470 + 0x48))(L"Setup",0x1bad0,auStack_d00,&uStack_d18,auStack_cd8);
        if (-1 < iVar2) {
            cStack_74 = 0;
            (**(*0x1c470 + 0x58))(L"Setup",0x1bad0,auStack_d00[0],uStack_d18,auStack_cd8);
        }
    }
    return -0x7ffffffffffffff1;
}


/* fcn.0001aa08 @ 0x1aa08 */

int64_t fcn.0001aa08(void)

{
    if (*0x1c460 == 0) {
        fcn.0001a92c(0x1b970,0x1c460);
    }
    return *0x1c460;
}


/* fcn.0001a92c @ 0x1a92c */

ulong fcn.0001a92c(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1c450;
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


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(void)

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


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.0001ab10 @ 0x1ab10 */

int64_t fcn.0001ab10(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x1c480 == '\0') {
        iVar1 = fcn.0001aa88();
        if (-1 < iVar1) {
            iVar1 = (***0x1c498)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x1c488 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x1c488)(*0x1c488,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.000188f8 @ 0x188f8 */

void fcn.000188f8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    iStackX_10 = arg2;
    iVar1 = (**(*0x1c468 + 0x40))(4,0x48,0x1c6b8);
    if (-1 < iVar1) {
        (**(*0x1c468 + 0x168))(*0x1c6b8,0x48);
        iVar1 = (**(*0x1c468 + 0x98))(arg1,0x1b780,auStackX_18);
        if (-1 < iVar1) {
            *0x1c900 = 0;
            *0x1c908 = 0;
            iVar1 = fcn.00012e10(0x1bd38,0x1c900,0x1c908);
            if (-1 < iVar1) {
                **0x1c6b8 = arg1;
                (*0x1c6b8)[2] = 0x18334;
                (*0x1c6b8)[3] = 0x1843c;
                (*0x1c6b8)[4] = 0x1857c;
                (*0x1c6b8)[5] = 0x1871c;
                (*0x1c6b8)[6] = 0x18734;
                (*0x1c6b8)[7] = 0x18828;
                (*0x1c6b8)[8] = 0x18850;
                iVar1 = (**(*0x1c468 + 0x50))(0x200,8,0x19924,*0x1c6b8 + 2,&iStackX_10);
                if (-1 < iVar1) {
                    (**(*0x1c468 + 0xa8))(0x1b8b0,iStackX_10,0x1c4d8);
                    *0x1c430 = 0;
                    *0x1c438 = 0;
                    (**(*0x1c468 + 0x80))(0x1c428,0x1b9a0,0,0x1c430);
                }
                (*0x1c6b8)[1] = 0;
                (**(*0x1c468 + 0x80))(*0x1c6b8 + 1,0x1b880,0,*0x1c6b8 + 2);
            }
        }
    }
    return;
}


/* fcn.00012e10 @ 0x12e10 */

int64_t fcn.00012e10(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_20 [8];
    uint64_t uStack_38;
    int64_t iStack_30;
    int64_t aiStack_28 [2];
    
    iVar1 = (**(*0x1c468 + 0x138))(2,0x1b8c0,0,&uStack_38,&iStack_30);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStack_38 != 0) {
            do {
                iVar1 = (**(*0x1c468 + 0x98))(*(iStack_30 + uVar2 * 8),0x1bd68,aiStack_28);
                if (-1 < iVar1) {
                    iVar1 = (**(aiStack_28[0] + 0x18))(aiStack_28[0],arg1,0x19,0,arg2,arg3,auStackX_20);
                    if (iVar1 == 0) break;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStack_38);
        }
        (**(*0x1c468 + 0x48))(iStack_30);
    }
    return iVar1;
}


/* fcn.00018ae4 @ 0x18ae4 */

int64_t fcn.00018ae4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong *puStackX_10;
    int64_t var_bp_20h;
    
    puStackX_10 = NULL;
    iStackX_8 = arg1;
    iVar1 = (**(*0x1c468 + 0x40))(4,0x78,&puStackX_10);
    if (-1 < iVar1) {
        (**(*0x1c468 + 0x168))(puStackX_10,0x78);
        *puStackX_10 = 0x18cb8;
        puStackX_10[1] = 0x18cbc;
        puStackX_10[2] = 0;
        puStackX_10[3] = 0x18cb8;
        puStackX_10[4] = 0x18e3c;
        puStackX_10[6] = 0x18e90;
        puStackX_10[7] = 0x18f88;
        puStackX_10[8] = 0x1905c;
        puStackX_10[5] = 0;
        puStackX_10[9] = 0x18cb8;
        puStackX_10[10] = 0x190e4;
        puStackX_10[0xc] = 0x18e90;
        puStackX_10[0xd] = 0x18f88;
        puStackX_10[0xe] = 0x1905c;
        puStackX_10[0xb] = 0;
        (**(*0x1c468 + 0x148))(0x1c420,0x1b910,puStackX_10,0x1b8f0,puStackX_10 + 3,0x1b950,puStackX_10 + 9,0);
        iVar1 = (**(*0x1c468 + 0x50))(0x200,8,0x18c80,0,&iStackX_8);
        if (-1 < iVar1) {
            (**(*0x1c468 + 0xa8))(0x1bd48,iStackX_8,&var_bp_20h);
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001ac98 @ 0x1ac98 */

void fcn.0001ac98(void)

{
    if (*0x1c4a8 == 0) {
        (**(*0x1c468 + 0x140))(0x1b8d0,0,0x1c4a8);
    }
    return;
}


/* fcn.00010f68 @ 0x10f68 */

//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00010f68(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int *piVar6;
    ushort *puVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar *puStackX_18;
    uint64_t uStackX_20;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uint uStack_d8;
    uint uStack_d4;
    uint uStack_d0;
    uint uStack_cc;
    int64_t iStack_c8;
    uchar auStack_c0 [24];
    uint64_t uStack_a8;
    uchar auStack_88 [7];
    int64_t var_79h;
    int32_t var_71h;
    int32_t var_6dh;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_49h;
    int64_t var_29h;
    
    iVar3 = *0x1c338;
    puStackX_18 = auStack_88;
    uStack_d8 = 0x26baccb1;
    uStack_d4 = 0x11d46f42;
    uStack_d0 = 0x8000e7bc;
    uStack_cc = 0x81883cc7;
    iStackX_8 = arg1;
    iVar5 = (**(*0x1c468 + 0x140))(&uStack_d8,0,&puStackX_18);
    if (iVar5 < 0) {
        return iVar5;
    }
    (**(puStackX_18 + 0x38))(puStackX_18,0xc0000,0x40000,0x1000);
    uStack_a8 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_c0);
    if ((uStack_a8 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_a8 & 0xffffffffffffdfff);
    }
    iStackX_10 = 0;
    iStack_c8 = 0;
    uStackX_20 = 0;
    iVar5 = fcn.0001746c(&iStackX_10,&iStack_c8,&uStackX_20);
    uVar4 = uStackX_20;
    if (-1 < iVar5) {
        uVar10 = 0;
        if (uStackX_20 != 0) {
            do {
                piVar6 = uVar10 * iStack_c8 + iStackX_10;
                if ((*piVar6 == 7) && (uVar1 = *(piVar6 + 2), uVar1 < 0xa0000)) {
                    iVar5 = *(piVar6 + 6) * 0x1000;
                    if (0xa0000 < uVar1 + iVar5) {
                        iVar5 = 0xa0000 - uVar1;
                    }
                    (**(*0x1c468 + 0x168))(uVar1,iVar5,0);
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < uVar4);
        }
        (**(*0x1c468 + 0x48))(iStackX_10);
        iVar5 = 0;
    }
    if ((uStack_a8 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    if (-1 < iVar5) {
        iStackX_8 = 0xa0000;
        iVar5 = (**(*0x1c468 + 0x28))(1,3,0x40,&iStackX_8);
        if (iVar5 < 0) {
            return iVar5;
        }
        iVar2 = iStackX_8;
        uVar9 = iVar2 + 0x40000;
        if (uVar9 < 0x48000) {
            return -0x7ffffffffffffff7;
        }
        *(iVar3 + 0x18b8) = iVar2;
        iStackX_8 = 0;
        (**(*0x1c468 + 0x28))(2,3,8,&iStackX_8);
        uStack_a8 = 0;
        *(iVar3 + 0xa0) = 0x1800;
        (**(*0x1c4b0 + 0x38))(0,auStack_c0);
        if ((uStack_a8 & 0x2000) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_a8 & 0xffffffffffffdfff);
        }
        *0x41a = 0x1e001e;
        *0x413 = (uVar9 >> 10) + -5;
        *0x440 = 0xff;
        *0x480 = 0x3e001e;
        *0x40e = (uVar9 >> 4) + -0x140;
        *0x490 = 7;
        *0x475 = 0;
        *(iVar2 + 0x3ec00) = 5;
        *0x415 = 0x80;
        if ((uStack_a8 & 0x2000) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000);
        }
        iStackX_10 = 0xffffffff;
        iVar5 = (**(*0x1c468 + 0x28))(1,4,5,&iStackX_10);
        iVar8 = *0x1c468;
        *(iVar3 + 0xac) = iStackX_10;
        (**(iVar8 + 0x168))(iStackX_10,0x4500,0);
        puVar7 = *(iVar3 + 0xac);
        iVar8 = 0x100;
        do {
            *puVar7 = 0xffff;
            puVar7 = puVar7 + 0x45;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        *(iVar3 + 0xb4) = 0x19;
    }
    return iVar5;
}


/* fcn.00011288 @ 0x11288 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_2ch

uint64_t fcn.00011288(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    char cVar1;
    uint64_t uVar2;
    int *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    char *pcVar7;
    char cVar8;
    uint32_t uVar9;
    int *piVar10;
    int *piVar11;
    uint16_t uVar12;
    uint32_t *puVar13;
    uint8_t uVar14;
    uint32_t uVar15;
    uint *puVar16;
    uint uVar17;
    uchar uStackX_8;
    unkbyte7 StackX_9;
    int64_t var_bp_20h;
    uint uStackX_20;
    int64_t var_bp_38h;
    int64_t var_b0h;
    int32_t var_b8h;
    uint64_t uVar18;
    ulong uVar19;
    uint uVar20;
    uint uVar21;
    int32_t arg_58h;
    char acStack_140 [8];
    char cStack_138;
    char cStack_137;
    char cStack_136;
    int64_t iStack_130;
    int *piStack_128;
    int64_t iStack_120;
    uint uStack_118;
    uint uStack_114;
    int *piStack_110;
    char acStack_108 [8];
    char cStack_100;
    uint auStack_f8 [2];
    uint auStack_f0 [2];
    uint auStack_e8 [2];
    uint16_t auStack_e0 [2];
    ushort uStack_dc;
    uint uStack_d8;
    uint16_t uStack_c4;
    uchar auStack_b0 [24];
    uint64_t uStack_98;
    int64_t var_80h;
    uint32_t var_bp_78h;
    char *var_bp_70h;
    int8_t var_bp_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_bp_50h;
    int64_t var_bp_48h;
    int32_t var_bp_40h;
    int16_t var_2ch;
    int64_t var_18h;
    
    arg1_00 = *0x1c338;
    piVar10 = NULL;
    piStack_128 = NULL;
    iStack_130 = 0;
    iStack_120 = 0;
    uVar17 = 0x5001b;
    if (*(*0x1c478 + 0x20) != 0) {
        uVar17 = *(*0x1c478 + 0x20);
    }
    uVar20 = 0xcdcf08cd;
    uVar21 = 0xacdcf09;
    arg_58h = -0x30f43231;
    _uStackX_8 = CONCAT71(arg1 >> 8,1);
    uStackX_20 = uVar17;
    uVar2 = (***(*0x1c338 + 0x60))(*(*0x1c338 + 0x60),0xc0000,0x40000,&var_bp_20h,&uStackX_8);
    if ((-1 < uVar2) &&
       (uVar2 = (**(*(arg1_00 + 0x60) + 0x18))(*(arg1_00 + 0x60),0xc0000,0x40000,&var_bp_20h), -1 < uVar2)) {
        (**(*0x1c468 + 0x168))(0xc0000,*0x1d620 + -0xbffff,0xff);
        (**(*0x1c468 + 0x168))(*0x1d620 + 1,0xfffff - *0x1d620,0);
        cVar1 = '\0';
        *(arg1_00 + 0xb5) = 0;
        uVar2 = (***(arg1_00 + 0x68))(*(arg1_00 + 0x68),5,&piStack_128,&iStack_130,0,0,0,0);
        if (-1 < uVar2) {
            (**(*0x1c468 + 0x160))(0x100000 - iStack_130,piStack_128);
            piStack_128 = 0x100000 - iStack_130;
            piVar11 = piStack_128;
            while( true ) {
                piVar6 = piVar10;
                if (iStack_130 + piStack_128 <= piVar11) goto code_r0x00011431;
                if (*piVar11 == 0x24454649) break;
                piVar11 = piVar11 + 4;
            }
            cVar8 = cVar1;
            if (*(piVar11 + 5) != '\0') {
                uVar2 = *(piVar11 + 5);
                piVar3 = piVar11;
                cVar8 = '\0';
                do {
                    cVar8 = cVar8 + *piVar3;
                    piVar3 = piVar3 + 1;
                    uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
            }
            if (cVar8 == '\0') {
                piVar6 = piVar11;
            }
code_r0x00011431:
            *(arg1_00 + 0x98) = piVar6;
            if (piVar6 == NULL) {
                uVar2 = 0x800000000000000e;
            }
            else {
                *(arg1_00 + 0xa8) = piVar6[3];
                *(arg1_00 + 0xaa) = *(piVar6 + 0xe);
                iVar4 = (***(arg1_00 + 0x68))(*(arg1_00 + 0x68),6,0,0,auStack_f8,0,0,0);
                if (iVar4 < 0) {
                    auStack_f8[0] = 0;
                }
                *(*(arg1_00 + 0x98) + 0x4e) = auStack_f8[0];
                *(*(arg1_00 + 0x98) + 0x14) = arg2;
                uVar2 = fcn.00017f44(arg1_00);
                if (-1 < uVar2) {
                    uVar15 = *(arg1_00 + 0xa0);
                    iVar4 = *(arg1_00 + 0xa0);
                    puVar13 = iVar4 + 0x3018;
                    *(iVar4 + 0x3030) = uVar15;
                    *(iVar4 + 0x3034) = 0x64b6;
                    *(iVar4 + 0x3038) = *(arg1_00 + 0x18b8);
                    *(iVar4 + 0x3024) = uVar15 >> 4;
                    *(iVar4 + 0x3026) = *(uVar15 + 4);
                    fcn.0001752c(iVar4 + 0x302c);
                    *(iVar4 + 0x3028) = 0;
                    (***(arg1_00 + 0x68))(*(arg1_00 + 0x68),7,0,auStack_f0,0,&uStack_118,0,0);
                    *(iVar4 + 0x303c) = auStack_f0[0];
                    iVar5 = fcn.00017944((CONCAT44(uStack_114,uStack_118) >> 0xc) + 1,auStack_e8);
                    if (iVar5 < 0) {
                        *(iVar4 + 0x301c) = 0;
                        fcn.0001ab10(0x40000002,0x3058001);
                    }
                    else {
                        *(iVar4 + 0x3020) = uStack_118;
                        *(iVar4 + 0x301c) = auStack_e8[0];
                    }
                    (**(*0x1c468 + 0x168))(auStack_e0,0x30);
                    auStack_e0[0] = 0;
                    uStack_dc = SUB82(puVar13,0);
                    uStack_d8 = 0x544d1808;
                    uStack_c4 = puVar13 >> 4 & 0xf000;
                    uVar19 = 0;
                    uVar18 = 0;
                    fcn.00017c10(arg1_00,*(arg1_00 + 0xa8),*(arg1_00 + 0xaa),auStack_e0,CONCAT44(uVar21,uVar20),
                                 arg_58h);
                    uVar2 = -(auStack_e0[0] != 0) & (auStack_e0[0] & 0x7fff | 0x8000000000000000);
                    if (-1 < uVar2) {
                        if ((*0xff500 == 0x42494d41) && (*0xff504 == 0x28534f49)) {
                            fcn.00010ba4(*puVar13);
                        }
                        fcn.00012acc(arg1_00);
                        if ((*0xff500 == 0x42494d41) && (*0xff504 == 0x28534f49)) {
                            cStack_138 = str.01_11_2024[8];
                            cStack_137 = str.01_11_2024[9];
                            cStack_136 = str.01_11_2024[10];
                            cStack_100 = str.13:55:26[8];
                            acStack_140[0] = str.01_11_2024[0];
                            acStack_140[1] = str.01_11_2024[1];
                            acStack_140[2] = str.01_11_2024[2];
                            acStack_140[3] = str.01_11_2024[3];
                            acStack_140[4] = str.01_11_2024[4];
                            acStack_140[5] = str.01_11_2024[5];
                            acStack_140[6] = str.01_11_2024[6];
                            acStack_140[7] = str.01_11_2024[7];
                            acStack_108[0] = str.13:55:26[0];
                            acStack_108[1] = str.13:55:26[1];
                            acStack_108[2] = str.13:55:26[2];
                            acStack_108[3] = str.13:55:26[3];
                            acStack_108[4] = str.13:55:26[4];
                            acStack_108[5] = str.13:55:26[5];
                            acStack_108[6] = str.13:55:26[6];
                            acStack_108[7] = str.13:55:26[7];
                            (**(*0x1c468 + 0x160))(0xff55b,acStack_140,6);
                            uVar20 = uVar18 >> 0x20;
                            *0xff561 = cStack_138;
                            *0xff562 = cStack_137;
                            (**(*0x1c468 + 0x160))(0xff564,acStack_108,8);
                            uVar18 = CONCAT44(uVar20,uVar17) & 0xffffffff0000ffff;
                            fcn.00019b80(0xff572,8,0x1bdf0,uStackX_20._2_2_);
                        }
                        iVar4 = *(arg1_00 + 0x98);
                        *(iVar4 + 4) = 0;
                        pcVar7 = *(*0x1c338 + 0x98);
                        if (*(iVar4 + 5) != '\0') {
                            uVar2 = *(iVar4 + 5);
                            cVar1 = '\0';
                            do {
                                cVar1 = cVar1 + *pcVar7;
                                pcVar7 = pcVar7 + 1;
                                uVar2 = uVar2 - 1;
                            } while (uVar2 != 0);
                        }
                        *(iVar4 + 4) = ~(cVar1 - 1U);
                        (**(*(arg1_00 + 0x60) + 8))(*(arg1_00 + 0x60),0xc0000,0x40000,&var_bp_20h,uVar18,uVar19);
                        (**(*0x1c468 + 0x168))(0x1d640,0x50);
                        (**(*0x1c468 + 0x160))(*(arg1_00 + 0xa0) + 0x3000,&stack0xfffffffffffffea8,0x18);
                        iVar4 = *(arg1_00 + 0xa0);
                        uVar12 = *(arg1_00 + 0xa0) + 0x3000;
                        (**(*(arg1_00 + 0x78) + 0x20))(*(arg1_00 + 0x78),0,0x1d690);
                        var_58h = 0;
                        (**(*0x1c4b0 + 0x38))(0,&var_bp_70h);
                        if ((var_58h & 0x2000U) != 0) {
                            (**(*0x1c4b0 + 0x40))(0,0x1000,var_58h & 0xffffffffffffdfff);
                        }
                        puVar16 = 0x1c920;
                        uVar15 = 0;
                        do {
                            uVar14 = uVar15 + 1;
                            uVar9 = uVar12;
                            uVar12 = uVar12 + 3;
                            *puVar16 = *(iStack_120 + (*0x1d690 + uVar15) * 4);
                            puVar16 = puVar16 + 1;
                            *(iStack_120 + (*0x1d690 + uVar15) * 4) = uVar9 | (iVar4 + 0x3000U >> 4 & 0xf000) << 4;
                            uVar15 = uVar14;
                        } while (uVar14 < 8);
                        if ((var_58h & 0x2000U) != 0) {
                            (**(*0x1c4b0 + 0x40))(0,0x1000);
                        }
                        piStack_110 = 0x3;
                        uStack_98 = 0;
                        (**(*0x1c4b0 + 0x38))(0,auStack_b0);
                        if ((uStack_98 & 0x2000) != 0) {
                            (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_98 & 0xffffffffffffdfff);
                        }
                        if (piStack_110 != NULL) {
                            do {
                                piVar11 = piVar10 + 1;
                                *(piVar10 * 5 + 0x1d640) = piVar10[0x6f4d];
                                *(piVar10 * 5 + 0x1d641) = *(iStack_120 + *(piVar10 + 0x6f4d) * 4);
                                piVar10 = piVar11;
                            } while (piVar11 < piStack_110);
                        }
                        if ((uStack_98 & 0x2000) != 0) {
                            (**(*0x1c4b0 + 0x40))(0,0x1000);
                        }
                        uVar2 = 0;
                    }
                }
            }
        }
    }
    return uVar2;
}


/* fcn.00013ed4 @ 0x13ed4 */

ulong fcn.00013ed4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong uVar6;
    int iVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    bool bVar11;
    uchar auStackX_10 [8];
    uint32_t *in_stack_00000028;
    
    uVar10 = 0;
    uVar5 = arg2 & 0xff;
    if (arg2 != '\0') {
        puVar3 = arg1;
        do {
            if (*puVar3 == arg4) break;
            uVar9 = uVar10 + 1;
            uVar10 = uVar9;
            puVar3 = puVar3 + 3;
        } while (uVar9 < uVar5);
    }
    if (uVar10 == uVar5) {
        return 0x8000000000000002;
    }
    cVar1 = *(arg1 + 8 + uVar10 * 0xc);
    if (cVar1 == '\0') {
        puVar8 = *(*0xfff4c + 0xf0000);
    }
    else if (cVar1 == '\x01') {
        puVar8 = (*0xfff4c + 0xf0000)[1];
    }
    else {
        if (cVar1 != '\x02') {
            return 0x8000000000000002;
        }
        puVar8 = 0xff674;
    }
    uVar2 = ~*0xf0000;
    bVar11 = *0xf0000 == uVar2;
    if ((bVar11) &&
       ((*0xf0000 = uVar2, iVar4 = (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),0xf0000,0x10000,auStackX_10),
        uVar2 = *0xf0000, iVar4 < 0 || (uVar2 = ~*0xf0000, *0xf0000 == ~*0xf0000)))) {
        *0xf0000 = uVar2;
        return 0x800000000000000f;
    }
    uVar6 = 0;
    iVar7 = arg3;
    if (iVar7 == 0) {
        if (in_stack_00000028 != NULL) {
            *in_stack_00000028 = (*(arg1 + 4 + uVar10 * 0xc) & *puVar8) != 0;
            goto code_r0x00014004;
        }
    }
    else {
        if (iVar7 == 1) {
            *puVar8 = *puVar8 | *(arg1 + 4 + uVar10 * 0xc);
            goto code_r0x00014004;
        }
        if (iVar7 == 2) {
            *puVar8 = *puVar8 & ~*(arg1 + 4 + uVar10 * 0xc);
            goto code_r0x00014004;
        }
    }
    uVar6 = 0x8000000000000002;
code_r0x00014004:
    if (bVar11) {
        (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),0xf0000,0x10000,auStackX_10);
    }
    return uVar6;
}


/* fcn.0001826c @ 0x1826c */

ulong fcn.0001826c(int64_t arg1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    bool bVar5;
    
    uVar1 = 1;
    if (*0x1d5c9 == '\x01') {
        uVar1 = 3;
    }
    iVar4 = 0;
    bVar5 = *0x1c3e8 != 0;
    *arg1 = uVar1;
    if (bVar5) {
        piVar2 = 0x1c3e8;
        do {
            iVar3 = (**piVar2)(arg1);
            if (-1 < iVar3) {
                return 0;
            }
            iVar4 = iVar4 + 1;
            piVar2 = iVar4 * 8 + 0x1c3e8;
        } while (*piVar2 != 0);
    }
    return 0;
}


/* fcn.000182d0 @ 0x182d0 */

ulong fcn.000182d0(int64_t arg1)

{
    uint8_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    bool bVar5;
    
    uVar1 = in(0x61);
    iVar4 = 0;
    bVar5 = *0x1c3f0 != 0;
    *arg1 = (uVar1 & 0xc) == 0;
    if (bVar5) {
        piVar2 = 0x1c3f0;
        do {
            iVar3 = (**piVar2)(arg1);
            if (-1 < iVar3) {
                return 0;
            }
            iVar4 = iVar4 + 1;
            piVar2 = iVar4 * 8 + 0x1c3f0;
        } while (*piVar2 != 0);
    }
    return 0;
}


/* fcn.00013c10 @ 0x13c10 */

void fcn.00013c10(void)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if (*0x1c358 != 0) {
        do {
            (**(*0x1c468 + 0x108))(*(*0x1c370 + uVar1 * 8),0,0,1);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *0x1c358);
    }
    return;
}


/* fcn.00013d58 @ 0x13d58 */

int64_t fcn.00013d58(void)

{
    int64_t iVar1;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    if (*0x1c360 == 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else if (*0x1c378 == '\0') {
        iVar1 = -0x7ffffffffffffff0;
    }
    else {
        iVar1 = (**(*0x1c360 + 0x10))(*0x1c360,0x1be40);
        if (-1 < iVar1) {
            if ((*0x1d618 == '\x02') && (*0x1c368 != 0)) {
                uStack_30 = 0;
                (**(*0x1c4b0 + 0x38))(0,auStack_48);
                if ((uStack_30 >> 0xd & 1) != 0) {
                    (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
                }
                *0x24 = *0x1c368;
                if ((uStack_30 >> 0xd & 1) != 0) {
                    (**(*0x1c4b0 + 0x40))(0,0x1000);
                }
            }
            *0x1c378 = '\0';
        }
    }
    return iVar1;
}


/* fcn.000131d0 @ 0x131d0 */

uint64_t fcn.000131d0(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    uint64_t uVar3;
    char *pcVar4;
    int16_t iVar5;
    int16_t *piVar6;
    bool bVar7;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    uchar auStack_38 [16];
    
    uVar3 = 0;
    iStackX_18 = 0;
    iVar2 = (**(*0x1c468 + 0x138))(2,0x1b920,0,&uStackX_20,&iStackX_18);
    if (iVar2 < 0) {
        uVar3 = 0x800000000000000e;
    }
    else {
        bVar7 = false;
        bVar1 = false;
        if (uStackX_20 != 0) {
            do {
                bVar7 = bVar1;
                iVar2 = (**(*0x1c468 + 0x98))(*(iStackX_18 + uVar3 * 8),0x1b8a0,auStack_38);
                if ((((-1 < iVar2) && (pcVar4 = fcn.0001abf4(auStack_38._0_8_), *pcVar4 == '\x02')) &&
                    (pcVar4[1] == '\x01')) && (pcVar4[3] * 0x100 + pcVar4[2] == 0xc)) {
                    iVar2 = arg1 * 0x20;
                    piVar6 = *(iVar2 + 0x1bbb8);
                    iVar5 = *piVar6;
                    if (iVar5 != 0) {
                        do {
                            if (*(pcVar4 + 6) == iVar5) {
                                iVar2 = (**(iVar2 + 0x1bbc8))(*(iStackX_18 + uVar3 * 8));
                                bVar7 = -1 < iVar2;
                                if (bVar7) {
                                    *arg2 = *(iStackX_18 + uVar3 * 8);
                                }
                                break;
                            }
                            piVar6 = piVar6 + 1;
                            iVar5 = *piVar6;
                        } while (iVar5 != 0);
                        if (*piVar6 != 0) break;
                    }
                }
                uVar3 = uVar3 + 1;
                bVar1 = bVar7;
            } while (uVar3 < uStackX_20);
        }
        (**(*0x1c468 + 0x48))(iStackX_18);
        uVar3 = ~-bVar7 & 0x800000000000000e;
    }
    return uVar3;
}


/* fcn.00017174 @ 0x17174 */

void fcn.00017174(void)

{
    uint uVar1;
    int64_t iVar2;
    ushort uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint8_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint16_t *arg1;
    uint8_t uVar9;
    ulong unaff_R13;
    uint64_t uVar10;
    ulong uStackX_8;
    ulong *puStackX_10;
    
    uStackX_8 = 0;
    uVar10 = 0;
    iVar7 = *(*0x1c338 + 0xa0);
    iVar2 = *(*0x1c338 + 0xac);
    iVar4 = fcn.000169cc(&uStackX_8,iVar7 + 0x3081);
    if (-1 < iVar4) {
        fcn.00016e40(iVar7 + 0x3081);
        arg1 = iVar7 + 0x3096;
        uVar9 = 1;
        do {
            if ((*(arg1 + -0x15) & 0x6c) != 0) {
                iVar7 = (uVar9 + 1) * 0x45;
                iVar4 = uVar9 * 0x45;
                uVar1 = *(arg1 + -0x13);
                *(iVar7 + 2 + iVar2) = uVar1;
                *(iVar4 + 2 + iVar2) = uVar1;
                uVar1 = *(arg1 + -0xf);
                *(iVar7 + 6 + iVar2) = uVar1;
                *(iVar4 + 6 + iVar2) = uVar1;
                uVar1 = *(arg1 + -0xb);
                *(iVar7 + 10 + iVar2) = uVar1;
                *(iVar4 + 10 + iVar2) = uVar1;
                *(iVar7 + 0xe + iVar2) = 0x101;
                *(iVar4 + 0xe + iVar2) = 0x101;
                if (*(arg1 + -7) != 0) {
                    if ((*(arg1 + -0x15) & 0x24) != 0) {
                        *(iVar4 + iVar2) = 0xfffe;
                        if ((*(arg1 + -0x15) & 4) == 0) {
                            *(iVar4 + 0x14 + iVar2) = 2;
                        }
                        else {
                            uVar3 = 3;
                            if ((*arg1 & 0x1f00) != 0x500) {
                                uVar3 = 1;
                            }
                            *(iVar4 + 0x14 + iVar2) = uVar3;
                        }
                        fcn.00016fcc(arg1,*(arg1 + -0x15) & 0xffb7,*(*0x1c338 + 0xa0) + 0x61b6 + uVar10 * 0x20,
                                     iVar2 + 0x1c + iVar4,unaff_R13);
                        uVar10 = uVar10 + 1;
                        uVar8 = 0;
                        do {
                            if (*(uVar8 * 0x10 + 0x1c780) == arg1) {
                                uVar5 = *(uVar8 * 0x10 + 0x1c788);
                                goto code_r0x0001730a;
                            }
                            uVar6 = uVar8 + 1;
                            uVar8 = uVar6;
                        } while (uVar6 < 0x18);
                        uVar5 = 0;
code_r0x0001730a:
                        *(iVar4 + 0x3d + iVar2) = uVar5;
                    }
                    if ((*(arg1 + -0x15) & 0x48) != 0) {
                        iVar7 = (uVar9 + 1) * 0x45;
                        *(iVar7 + iVar2) = 0xfffe;
                        if ((*(arg1 + -0x15) & 8) == 0) {
                            *(iVar7 + 0x14 + iVar2) = 2;
                        }
                        else {
                            uVar3 = 3;
                            if ((arg1[0x100] & 0x1f00) != 0x500) {
                                uVar3 = 1;
                            }
                            *(iVar7 + 0x14 + iVar2) = uVar3;
                        }
                        fcn.00016fcc(arg1 + 0x100,*(arg1 + -0x15) & 0xffdb,*(*0x1c338 + 0xa0) + 0x61b6 + uVar10 * 0x20
                                     ,iVar2 + 0x1c + iVar7,unaff_R13);
                        uVar10 = uVar10 + 1;
                        uVar8 = 0;
                        do {
                            if (*(uVar8 * 0x10 + 0x1c780) == arg1 + 0x100) {
                                uVar5 = *(uVar8 * 0x10 + 0x1c788);
                                goto code_r0x000173f9;
                            }
                            uVar6 = uVar8 + 1;
                            uVar8 = uVar6;
                        } while (uVar6 < 0x18);
                        uVar5 = 0;
code_r0x000173f9:
                        *(iVar7 + 0x3d + iVar2) = uVar5;
                    }
                }
            }
            uVar9 = uVar9 + 2;
            arg1 = arg1 + 0x415;
        } while (uVar9 < 0x19);
    }
    iVar7 = (**(*0x1c468 + 0x140))(0x1b7c0,0,&puStackX_10);
    if (-1 < iVar7) {
        (**puStackX_10)();
    }
    return;
}


/* fcn.000164c4 @ 0x164c4 */

//WARNING: Variable defined which should be unmapped: var_28h

ulong fcn.000164c4(int64_t arg1)

{
    ushort uVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar *arg2;
    uint8_t uVar7;
    uint16_t uVar8;
    uchar auStackX_8 [8];
    ushort auStackX_10 [4];
    uint auStackX_18 [2];
    int64_t var_40h;
    int64_t var_48h;
    int32_t var_50h;
    uchar auStack_78 [24];
    uint64_t uStack_60;
    int64_t var_40h_2;
    int64_t var_28h;
    
    auStackX_18[0] = 0;
    *(arg1 + 0x3141) = *(*0x1c338 + 0xac);
    arg2 = NULL;
    *(arg1 + 0x313d) = *(*0x1c338 + 0xb4);
    cVar2 = fcn.00013350(4);
    if (cVar2 != '\0') {
        *(arg1 + 0x33) = 1;
    }
    uVar8 = cVar2 != '\0';
    uVar6 = 0;
    do {
        arg2 = CONCAT71(arg2 >> 8,uVar6);
        iVar5 = fcn.000133c8(0x501,arg2,auStackX_10,auStackX_8);
        uVar1 = auStackX_10[0];
        if (-1 < iVar5) {
            arg2 = auStack_78;
            uStack_60 = 0;
            *(arg1 + 0x10 + uVar6 * 4) = auStackX_10[0];
            *(arg1 + 0x12 + uVar6 * 4) = auStackX_8[0];
            *(arg1 + 0x13 + uVar6 * 4) = 0;
            (**(*0x1c4b0 + 0x38))(0);
            if ((uStack_60 & 0x2000) != 0) {
                arg2 = 0x1000;
                (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_60 & 0xffffffffffffdfff);
            }
            *(uVar6 * 2 + 0x400) = uVar1;
            if ((uStack_60 & 0x2000) != 0) {
                arg2 = 0x1000;
                (**(*0x1c4b0 + 0x40))(0);
            }
            uVar8 = uVar8 + 0x200;
        }
        uVar7 = uVar6 + 1;
        uVar6 = uVar7;
    } while (uVar7 < 4);
    cVar2 = fcn.00013350(3);
    if (cVar2 != '\0') {
        iVar5 = fcn.000133c8(0x400,0,auStackX_10,auStackX_8);
        if (iVar5 < 0) {
            iVar5 = fcn.000133c8(0x401,0,auStackX_10,auStackX_8);
            if (iVar5 < 0) goto code_r0x00016696;
        }
        *(arg1 + 0x20) = auStackX_10[0];
        *(arg1 + 0x22) = auStackX_8[0];
        *(arg1 + 0x24) = 0;
        uStack_60 = 0;
        (**(*0x1c4b0 + 0x38))(0,auStack_78);
        if ((uStack_60 & 0x2000) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_60 & 0xffffffffffffdfff);
        }
        *0x408 = auStackX_10[0];
        if ((uStack_60 & 0x2000) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000);
        }
        uVar8 = uVar8 | 0x4000;
    }
code_r0x00016696:
    uStack_60 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_78);
    if ((uStack_60 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_60 & 0xffffffffffffdfff);
    }
    if ((*0x410 & 4) == 0) {
        cVar2 = fcn.00013350(1);
        if (cVar2 == '\0') goto code_r0x000166fa;
    }
    uVar8 = uVar8 | 4;
    iVar5 = fcn.000131d0(1,auStackX_8);
    if (-1 < iVar5) {
        *(arg1 + 0x34) = 1;
    }
code_r0x000166fa:
    if ((uStack_60 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    uStack_60 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_78);
    if ((uStack_60 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_60 & 0xffffffffffffdfff);
    }
    *0x410 = uVar8 | 2;
    if ((uStack_60 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    fcn.0001752c(auStackX_18);
    *(arg1 + 0x3149) = auStackX_18[0];
    uVar6 = *(*0x1c338 + 0x18b6);
    *(arg1 + 0x3d) = *(*0x1c338 + 0x18b6);
    iVar3 = fcn.0001aa38(uVar6,0x1bd00);
    *(arg1 + 4) = iVar3;
    if (iVar3 == 0) {
        uVar4 = fcn.0001aa38(uVar6,0x1bce0);
        *(arg1 + 4) = uVar4;
    }
    uVar4 = fcn.0001aa38(uVar6,0x1bd10);
    *(arg1 + 8) = uVar4;
    return 0;
}


/* fcn.00017c10 @ 0x17c10 */

int64_t fcn.00017c10(ulong noname_0,uint32_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg_50h,int32_t arg_58h)

{
    int16_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    bool bVar5;
    bool bVar6;
    int64_t iVar7;
    code *pcVar8;
    int64_t iVar9;
    ulong uVar10;
    unkuint7 Var11;
    unkuint7 extraout_RAX;
    uint in_R9;
    int16_t *piVar12;
    ushort auStackX_10 [4];
    int64_t in_stack_00000028;
    int64_t var_38h;
    ushort auStack_78 [2];
    uchar auStack_74 [4];
    uchar auStack_70 [8];
    uchar auStack_68 [24];
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_28h;
    
    pcVar8 = *0x1c6c8;
    piVar12 = CONCAT44(in_R9,arg3);
    Var11 = *0x1c338 >> 8;
    bVar5 = false;
    if ((arg1 == *(*0x1c338 + 0xa8)) && (*(*0x1c338 + 0xaa) == arg2)) {
        bVar6 = true;
        if (*piVar12 == 3) {
            bVar5 = true;
            bVar6 = true;
        }
    }
    else {
        bVar6 = false;
    }
    if (*0x1c3b2 != '\0') goto code_r0x00017f1e;
    *0x1c3b2 = 1;
    if (bVar5) {
code_r0x00017cca:
        iVar9 = *0x1c3b8;
        if (*0x1c3b8 != 0) goto code_r0x00017ccf;
    }
    else {
        if (*0x1c3b8 == 0) {
            iVar9 = (**(*0x1c468 + 0x140))(0x1b860,0,0x1c3b8);
            if (iVar9 < 0) {
                *0x1c3b8 = 0;
            }
            goto code_r0x00017cca;
        }
code_r0x00017ccf:
        iVar9 = *0x1c3b8;
        (**(*0x1c3b8 + 0x18))(1);
    }
    pcVar8[0x42] = 0x1;
    *(pcVar8 + 8) = arg1;
    *(pcVar8 + 6) = arg2;
    if (in_stack_00000028 == 0) {
        *(pcVar8 + 0x3e) = 0;
    }
    else {
        *(pcVar8 + 0x3a) = in_stack_00000028;
        *(pcVar8 + 0x3e) = var_38h;
    }
    uVar10 = *(piVar12 + 4);
    *(pcVar8 + 10) = *piVar12;
    *(pcVar8 + 0x12) = uVar10;
    uVar10 = *(piVar12 + 0xc);
    *(pcVar8 + 0x1a) = *(piVar12 + 8);
    *(pcVar8 + 0x22) = uVar10;
    uVar10 = *(piVar12 + 0x14);
    *(pcVar8 + 0x2a) = *(piVar12 + 0x10);
    *(pcVar8 + 0x32) = uVar10;
    fcn.000184ec(pcVar8 + 6,CONCAT71(iVar9 >> 8,1));
    iVar1 = *piVar12;
    if (bVar6) {
        if (((iVar1 - 2U & 0xfffc) != 0) || (iVar1 == 4)) {
            (**(*0x1c6c0 + 8))(*0x1c6c0,auStack_70,0,0,0);
            auStackX_10[0] = 0xffff;
            (**(*0x1c6c0 + 0x10))(*0x1c6c0,auStackX_10,0,0,0);
        }
        if (iVar1 == 0) {
            (**(*0x1c6c0 + 8))(*0x1c6c0,0,0,auStack_74,0);
            auStack_78[0] = 0xffff;
            (**(*0x1c6c0 + 0x10))(*0x1c6c0,0,0,auStack_78,0);
        }
    }
    iVar9 = (**(*0x1c468 + 0x18))(0x1f);
    (**(*0x1c6c0 + 0x18))(*0x1c6c0,0,0);
    (**0x1c6c8)(*0x1c6c8);
    if (*0x1c3b8 != 0) {
        (**(*0x1c3b8 + 0x18))(0);
    }
    if ((bVar6) && (iVar1 == 0)) {
        (**(*0x1c6c0 + 0x10))(*0x1c6c0,0,0,auStack_74,0);
    }
    (**(*0x1c6c0 + 0x18))(*0x1c6c0,1,0);
    iVar7 = *0x1c468;
    uVar10 = *(pcVar8 + 0x12);
    *piVar12 = *(pcVar8 + 10);
    *(piVar12 + 4) = uVar10;
    uVar2 = *(pcVar8 + 0x1e);
    uVar3 = *(pcVar8 + 0x22);
    uVar4 = *(pcVar8 + 0x26);
    *(piVar12 + 8) = *(pcVar8 + 0x1a);
    *(piVar12 + 10) = uVar2;
    *(piVar12 + 0xc) = uVar3;
    *(piVar12 + 0xe) = uVar4;
    uVar2 = *(pcVar8 + 0x2e);
    uVar3 = *(pcVar8 + 0x32);
    uVar4 = *(pcVar8 + 0x36);
    *(piVar12 + 0x10) = *(pcVar8 + 0x2a);
    *(piVar12 + 0x12) = uVar2;
    *(piVar12 + 0x14) = uVar3;
    *(piVar12 + 0x16) = uVar4;
    (**(iVar7 + 0x20))(iVar9);
    if ((bVar6) && (((iVar1 - 2U & 0xfffc) != 0 || (iVar1 == 4)))) {
        (**(*0x1c6c0 + 0x10))(*0x1c6c0,auStack_70,0,0,0);
    }
    uVar10 = fcn.000184ec(pcVar8 + 6,0);
    if (iVar9 == 0x1f) {
        Var11 = uVar10 >> 8;
        *0x417 = *0x417 & 0x70;
    }
    else {
        var_48h = 0;
        uVar10 = (**(*0x1c4b0 + 0x38))(0,auStack_68);
        if ((var_48h & 0x2000U) != 0) {
            uVar10 = (**(*0x1c4b0 + 0x40))(0,0x1000,var_48h & 0xffffffffffffdfff);
        }
        Var11 = uVar10 >> 8;
        *0x417 = *0x417 & 0x70;
        if ((var_48h & 0x2000U) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000);
            Var11 = extraout_RAX;
        }
    }
    *0x1c3b2 = '\0';
code_r0x00017f1e:
    return Var11 << 8;
}


/* fcn.0001746c @ 0x1746c */

int64_t fcn.0001746c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    uint64_t uStackX_20;
    uchar auStack_18 [16];
    
    *arg1 = 0;
    uStackX_20 = 0;
    iVar1 = (**(*0x1c468 + 0x38))(&uStackX_20,0,auStack_18,arg2,auStackX_8);
    if (iVar1 == -0x7ffffffffffffffb) {
        uStackX_20 = uStackX_20 + 0x1000;
        (**(*0x1c468 + 0x40))(4,uStackX_20,arg1);
        iVar1 = (**(*0x1c468 + 0x38))(&uStackX_20,*arg1,auStack_18,arg2,auStackX_8);
        *arg3 = uStackX_20 / *arg2 & 0xffff;
    }
    return iVar1;
}


/* fcn.00017f44 @ 0x17f44 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00017f44(int64_t arg1)

{
    uint64_t arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_8 [8];
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t iStack_38;
    int64_t aiStack_30 [2];
    int64_t var_18h;
    int64_t var_10h;
    
    *0x1c6c0 = *(arg1 + 0x78);
    arg1_00 = *(arg1 + 0xa0);
    iStackX_10 = 0;
    var_28h = 0;
    iVar1 = (**(*0x1c468 + 0x138))(2,0x1b8c0,0,&uStackX_18,&iStack_38);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStackX_18 != 0) {
            do {
                iVar1 = (**(*0x1c468 + 0x98))(*(iStack_38 + uVar2 * 8),0x1bd68,aiStack_30);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(aiStack_30[0] + 0x18))
                                      (aiStack_30[0],0x1bd20,0x19,0,&iStackX_10,&var_28h,auStackX_8), iVar1 == 0)
                   ) {
                    fcn.0001b6d0(arg1_00,iStackX_10,var_28h);
                    (**(*0x1c468 + 0x48))(iStackX_10);
                    break;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_18);
        }
        (**(*0x1c468 + 0x48))(iStack_38);
    }
    if (-1 < iVar1) {
        *0x1c6c8 = arg1_00 & 0xffffffff;
        (*(*(*0x1c6c8 + 2) + *0x1c6c8))();
    }
    return iVar1;
}


/* fcn.0001752c @ 0x1752c */

void fcn.0001752c(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uStackX_8;
    uint32_t *puStackX_10;
    int64_t aiStackX_18 [2];
    
    uVar2 = 0;
    uStackX_8 = 0;
    iVar4 = 0x100000;
    iVar3 = 0x100000;
    fcn.0001746c(&puStackX_10,aiStackX_18,&uStackX_8);
    puVar1 = puStackX_10;
    if (uStackX_8 != 0) {
        do {
            iVar3 = iVar4;
            if (0xfffff < *(puVar1 + 2)) {
                if ((*puVar1 < 0xe) && ((0x3f61U >> (*puVar1 & 0x1f) & 1) != 0)) break;
                iVar4 = *(puVar1 + 6) * 0x1000 + *(puVar1 + 2);
            }
            iVar3 = iVar4;
            puVar1 = puVar1 + aiStackX_18[0];
            uVar2 = uVar2 + 1;
        } while (uVar2 < uStackX_8);
    }
    (**(*0x1c468 + 0x48))(puStackX_10);
    *arg1 = iVar3 + -0x100000;
    return;
}


/* fcn.00017944 @ 0x17944 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00017944(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t aiStackX_8 [2];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t var_10h;
    int64_t var_8h;
    
    iStackX_18 = 0;
    fcn.0001746c(&iStack_38,&iStack_30,&iStackX_18);
    piVar4 = &iStackX_20;
    piVar3 = aiStackX_8;
    iVar1 = fcn.000178c4(iStack_38,iStackX_18,iStack_30,arg1 << 2);
    if (iVar1 < 0) {
        piVar4 = &iStackX_20;
        piVar3 = aiStackX_8;
        iVar1 = fcn.000178c4(iStack_38,iStackX_18,iStack_30,arg1 * 2);
        if (iVar1 < 0) {
            iVar2 = aiStackX_8[0];
        }
        else {
            iVar2 = iStackX_20 << 0xc;
        }
    }
    else {
        iVar2 = iStackX_20 << 0xb;
    }
    (**(*0x1c468 + 0x48))(iStack_38);
    if (-1 < iVar1) {
        aiStackX_8[0] = aiStackX_8[0] + iVar2;
        iVar1 = (**(*0x1c468 + 0x28))(1,4,arg1 * 2,aiStackX_8,piVar3,piVar4);
        *arg2 = aiStackX_8[0];
    }
    return iVar1;
}


/* fcn.00010ba4 @ 0x10ba4 */

void fcn.00010ba4(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint16_t *puVar4;
    ulong in_RDX;
    int64_t arg2;
    ulong uVar5;
    uint *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uStackX_8;
    ulong uStackX_10;
    ulong uVar9;
    
    iVar3 = CONCAT71(in_RDX >> 8,0xe);
    uVar8 = 2;
    fcn.00013ed4(0x1bb00,iVar3,2,2);
    uVar7 = 1;
    iVar3 = CONCAT71(iVar3 >> 8,0xe);
    fcn.00013ed4(0x1bb00,iVar3,1,5);
    arg2 = CONCAT71(iVar3 >> 8,0xe);
    fcn.00013ed4(0x1bb00,arg2,1,6);
    iVar3 = fcn.0001826c(&uStackX_8);
    if (-1 < iVar3) {
        iVar3 = CONCAT71(arg2 >> 8,0xe);
        uVar1 = uVar7;
        if ((uStackX_8 & 1) == 0) {
            uVar1 = uVar8;
        }
        fcn.00013ed4(0x1bb00,iVar3,uVar1,7);
        arg2 = CONCAT71(iVar3 >> 8,0xe);
        uVar1 = uVar7;
        if ((uStackX_8 & 2) == 0) {
            uVar1 = uVar8;
        }
        fcn.00013ed4(0x1bb00,arg2,uVar1,8);
    }
    iVar3 = fcn.000182d0(&uStackX_8);
    if ((iVar3 < 0) || (uStackX_8 == 1)) {
        uVar8 = uVar7;
    }
    uVar9 = 0;
    fcn.00013ed4(0x1bb00,CONCAT71(arg2 >> 8,0xe),uVar8,9);
    puVar4 = *(arg1 + 0x1c) + 0xf0000;
    uVar2 = *0x1d620 + 1;
    *puVar4 = uVar2;
    puVar4[1] = ~uVar2;
    uStackX_10 = 0xffffffff;
    puVar6 = *(arg1 + 0x20) + 0xf0000;
    uVar5 = 0;
    (**(*0x1c468 + 0x28))(1,10,0x300,&uStackX_10,uVar9);
    *puVar6 = uStackX_10;
    iVar3 = CONCAT71(uVar5 >> 8,0xe);
    puVar6[1] = 0x300000;
    fcn.00013ed4(0x1bb00,iVar3,2,0);
    iVar3 = CONCAT71(iVar3 >> 8,0xe);
    fcn.00013ed4(0x1bb00,iVar3,2,0xc);
    uStackX_8 = *0x1d5c8;
    if (uStackX_8 == 1) {
        fcn.00013ed4(0x1bc60,CONCAT71(iVar3 >> 8,1),1,0x80);
    }
    return;
}


/* fcn.00012acc @ 0x12acc */

uint64_t fcn.00012acc(int64_t arg1)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    int64_t var_10h;
    int64_t var_bp_18h;
    int64_t var_30h;
    int16_t var_bp_28h;
    int16_t var_24h;
    int64_t in_stack_ffffffffffffffd8;
    int32_t in_stack_ffffffffffffffe0;
    int16_t var_eh;
    
    iVar2 = *(arg1 + 0x98);
    var_bp_18h = 0;
    uVar4 = fcn.00012e10(0x1ba10,&var_bp_18h,&var_10h);
    if (-1 < uVar4) {
        (**(*0x1c468 + 0x168))(&var_30h,0x30);
        var_30h._0_2_ = 6;
        var_30h._4_2_ = 2;
        var_bp_28h = var_10h;
        var_24h = 1;
        fcn.00017c10(arg1,*(arg1 + 0xa8),*(arg1 + 0xaa),&var_30h,in_stack_ffffffffffffffd8,
                     in_stack_ffffffffffffffe0);
        uVar4 = -(var_30h != 0) & (var_30h & 0x7fff | 0x8000000000000000);
        if (-1 < uVar4) {
            *0x1c340 = var_eh * 0x10 + var_30h._4_2_;
            (**(*0x1c468 + 0x160))(*0x1c340,var_bp_18h,CONCAT62(var_10h._2_6_,var_10h));
            piVar5 = fcn.00012c20(iVar2 + 0x3a);
            *0x1c348 = piVar5;
            *(iVar2 + 0x44) = piVar5;
            *(iVar2 + 0x42) = piVar5 >> 4 & 0xf000;
            iVar1 = *piVar5;
            piVar3 = piVar5;
            while (iVar1 != -1) {
                piVar3 = piVar3 + 2;
                iVar1 = *piVar3;
            }
            piVar5[-1] = *0x1c340 >> 4;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00019b80 @ 0x19b80 */

void fcn.00019b80(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00019bdc(noname_0,noname_1,0,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00019bdc @ 0x19bdc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00019bdc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00019c37;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00019c37:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.0001b588(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.0001b55c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x1bf3c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x00019fc1:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1bf3c;
                }
                else {
                    pcVar9 = 0x1bf40;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00019d80:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x00019f23;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00019f3a;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00019f23;
                                }
                                goto code_r0x00019f3a;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x00019f23:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00019d80;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x00019d80;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00019f3a;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00019f23;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00019f3a:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.0001a908(&var_68h_2,0x26,0,0x1bed0);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00019fc1;
                                if (uStack_a8 == 0x53) goto code_r0x0001a1d0;
                                if (uStack_a8 == 0x58) goto code_r0x0001a2c6;
                                if (uStack_a8 == 0x61) goto code_r0x0001a1d9;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00019d65;
                                }
                                if (uStack_a8 != 100) goto code_r0x00019d61;
                                goto code_r0x0001a2dd;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1bf3c;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x0001a4d8;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x1bfdb;
                                    goto code_r0x0001a28d;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x0001a28d:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x0001a4d8;
                            }
                            fcn.0001a908(&var_68h_2,0x26,0,0x1bf34);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x0001a1d0:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x0001a1d9:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x0001a4d8;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00019d61;
                                    goto code_r0x0001a2ca;
                                }
                                goto code_r0x0001a2cf;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x0001a4d8;
                            }
                            fcn.0001a908(&var_68h_2,0x26,0,0x1bf18);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x0001a4d8;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001a2c6:
                    uVar5 = uVar5 | 0x20;
code_r0x0001a2ca:
                    uVar5 = uVar5 | 0x80;
code_r0x0001a2cf:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x0001a2dd:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001a31f;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x0001a31f:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x0001a3a7:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001a3a7;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEFI"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x00019d61:
                    pcVar9 = &uStack_a8;
code_r0x00019d65:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x0001a4d8:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00019ba8(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00019ba8(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00019ba8(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00019ba8(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.000175b8 @ 0x175b8 */

void fcn.000175b8(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_00000014;
    int64_t *piVar1;
    int16_t *in_stack_00000028;
    
    piVar1 = *arg1;
    if ((piVar1[-3] + piVar1[-2] == CONCAT44(in_register_00000014,arg2)) && (piVar1[-1] == arg4)) {
        piVar1[-2] = piVar1[-2] + arg3;
        piVar1 = piVar1 + -3;
    }
    else {
        *piVar1 = CONCAT44(in_register_00000014,arg2);
        piVar1[1] = arg3;
        *(piVar1 + 2) = arg4;
        *in_stack_00000028 = *in_stack_00000028 + 1;
    }
    *(piVar1 + 0x14) = 1;
    *arg1 = piVar1 + 3;
    return;
}


/* fcn.00011a1c @ 0x11a1c */

int64_t fcn.00011a1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar auStackX_10 [8];
    ulong uVar2;
    ulong uVar3;
    int16_t aiStack_48 [2];
    uint16_t uStack_44;
    ushort uStack_40;
    ushort uStack_3c;
    int64_t in_stack_ffffffffffffffc8;
    int32_t in_stack_ffffffffffffffd0;
    uint16_t uStack_26;
    
    iVar1 = 0;
    (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_10);
    (**(*0x1c468 + 0x168))(aiStack_48,0x30,0);
    aiStack_48[0] = 6;
    uVar3 = 0;
    uVar2 = 0;
    uStack_44 = arg4;
    uStack_40 = arg2;
    uStack_3c = arg3;
    fcn.00017c10(*0x1c338,*(*0x1c338 + 0xa8),*(*0x1c338 + 0xaa),aiStack_48,in_stack_ffffffffffffffc8,
                 in_stack_ffffffffffffffd0);
    if (-1 < -(aiStack_48[0] != 0)) {
        iVar1 = uStack_26 * 0x10 + uStack_44;
        (**(*0x1c468 + 0x160))(iVar1,arg1,arg2 & 0xffff,*0x1c468,uVar2,uVar3);
    }
    (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_10);
    return iVar1;
}


/* fcn.0001375c @ 0x1375c */

int64_t fcn.0001375c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    
    iVar2 = arg2;
    iVar4 = arg1;
    iVar5 = 0;
    iVar6 = 0;
    if (iVar2 != 0) {
        iVar1 = (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),arg1 & 0xffffffff,arg2 & 0xffffffff,auStackX_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        uVar3 = (iVar2 + iVar4) % auStackX_8[0];
        if (uVar3 != 0) {
            iVar5 = auStackX_8[0] - uVar3;
        }
        iVar6 = (arg1 & 0xffffffffU) % auStackX_8[0];
        iVar4 = iVar4 - iVar6;
        iVar6 = iVar2 + iVar6 + iVar5;
    }
    if (arg3 != 0) {
        *arg3 = iVar4;
    }
    if (arg4 != 0) {
        *arg4 = iVar6;
    }
    (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_8);
    return 0;
}


/* fcn.00013818 @ 0x13818 */

ulong fcn.00013818(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uchar auStackX_10 [24];
    
    uVar1 = 0;
    if ((arg2 != 0) && (arg1 + arg2 < *0x1d620)) {
        uVar1 = (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),arg1 & 0xffffffff,arg2 & 0xffffffff,auStackX_10);
    }
    (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_10);
    return uVar1;
}


/* fcn.00017624 @ 0x17624 */

ulong fcn.00017624(int64_t arg1,int64_t arg2,int64_t arg3,int32_t arg_70h)

{
    uchar auStackX_8 [8];
    uint auStackX_18 [4];
    
    auStackX_18[0] = 0xe;
    (**(*arg3 + 0x30))(*arg3,0,0x70,1,auStackX_18);
    if (arg1 == '\0') {
        auStackX_8[0] = *arg2;
        (**(*arg3 + 0x30))(*arg3,0,0x71,1,auStackX_8);
    }
    else {
        (**(*arg3 + 0x28))(*arg3);
        *arg2 = auStackX_8[0];
    }
    return 0;
}


/* fcn.00013e38 @ 0x13e38 */

void fcn.00013e38(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_8 [32];
    
    iVar1 = (**(*0x1c468 + 0x138))(2,0x1b840,0,0x1c358,0x1c370);
    if ((-1 < iVar1) && (uVar2 = 0, *0x1c358 != 0)) {
        do {
            iVar1 = (**(*0x1c468 + 0x98))(*(*0x1c370 + uVar2 * 8),0x1b8a0,auStackX_8);
            if (-1 < iVar1) {
                (**(*0x1c468 + 0x110))(*(*0x1c370 + uVar2 * 8),0,0);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *0x1c358);
    }
    return;
}


/* fcn.0001a98c @ 0x1a98c */

int64_t fcn.0001a98c(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x1c458 + 0x170))(0x200,8,0x1aa04,0,arg1,auStackX_8);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1c458 + 0x68))(auStackX_8[0]);
            (**(*0x1c458 + 0x70))(auStackX_8[0]);
        }
    }
    return iVar1;
}


/* fcn.00011d3c @ 0x11d3c */

uint64_t fcn.00011d3c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    uint32_t arg2_00;
    uint uVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t arg4;
    uint64_t arg4_00;
    int64_t iStackY_f8;
    uint32_t uStackY_f0;
    uint32_t uStackY_ec;
    uint64_t uVar9;
    int32_t in_stack_ffffffffffffff20;
    uint uStack_dc;
    int64_t iStack_d8;
    uint16_t auStack_d0 [2];
    int16_t iStack_cc;
    uint16_t uStack_b4;
    uchar auStack_a0 [24];
    uint64_t uStack_88;
    uchar auStack_68 [24];
    uint64_t uStack_50;
    
    iStackY_f8 = *0x1c338 + 0xb6;
    uVar8 = 0;
    uVar9 = 0;
    fcn.0001746c(&stack0xffffffffffffff20,&iStack_d8,&stack0xffffffffffffff18);
    uVar7 = *0x40e * -0x10 + 0xa0000 >> 10 & 0xff;
    arg2_00 = (0x280 - uVar7) * 0x400;
    fcn.000175b8(&iStackY_f8,0,arg2_00,1);
    arg4 = 2;
    fcn.000175b8(&iStackY_f8,arg2_00,uVar7 << 10,2);
    fcn.000175b8(&iStackY_f8,0xe0000,0x20000,arg4);
    puVar5 = CONCAT44(uStack_dc,in_stack_ffffffffffffff20);
    if (uVar9 != 0) {
        do {
            if (0xfffff < *(puVar5 + 2)) {
                if (*puVar5 == 0) {
code_r0x00011e85:
                    arg4_00 = arg4 & 0xffffffff;
                }
                else {
                    if (*puVar5 < 5) goto code_r0x00011e7d;
                    if ((*puVar5 < 7) || (*puVar5 == 8)) goto code_r0x00011e85;
                    if (*puVar5 == 9) {
                        arg4_00 = 3;
                    }
                    else if (*puVar5 == 10) {
                        arg4_00 = 4;
                    }
                    else {
                        if (10 < *puVar5) {
                            if (*puVar5 < 0xe) goto code_r0x00011e85;
                            if (*puVar5 == 0xe) {
                                arg4_00 = 7;
                                goto code_r0x00011e88;
                            }
                        }
code_r0x00011e7d:
                        arg4_00 = 1;
                    }
                }
code_r0x00011e88:
                fcn.000175b8(&iStackY_f8,*(puVar5 + 2),*(puVar5 + 6) << 0xc,arg4_00);
            }
            puVar5 = puVar5 + iStack_d8;
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
    }
    (**(*0x1c468 + 0x48))(CONCAT44(uStack_dc,in_stack_ffffffffffffff20));
    *(*0x1c338 + 0x18b6) = 0;
    fcn.000164c4(*(*0x1c338 + 0xa0) + 0x3040);
    uVar4 = fcn.00011a1c(*0x1c338 + 0xb6,*(*0x1c338 + 0x18b6) * 0x18,0,0);
    fcn.0001375c(0xc0000,*0x1c940 + -0xc0000,&uStackY_ec,&uStackY_f0);
    *(*(*0x1c338 + 0x98) + 0x22) = uVar4;
    *(*(*0x1c338 + 0x98) + 0x26) = (*(*0x1c338 + 0x18b6) + *(*0x1c338 + 0x18b6) * 2) * 8;
    piVar6 = *0x1c320 + -0x29;
    iVar2 = *piVar6;
    while (iVar2 != 0) {
        puVar3 = *piVar6;
        uVar1 = *puVar3;
        *puVar3 = ~uVar1;
        iVar2 = *0x1c468;
        if (uVar1 != *puVar3) {
            *puVar3 = uVar1;
            (**(iVar2 + 0x160))(*piVar6,piVar6[1],*(piVar6[1] + 2) << 9);
            if (piVar6[3] != 0) {
                if (*(piVar6 + 0x24) != '\0') {
                    piVar6[3] = *0x40e * 0x10 + *(piVar6 + 0x25);
                }
                (**(*0x1c468 + 0x160))(piVar6[3],piVar6[2],piVar6[4]);
            }
        }
        piVar6 = piVar6 + -0x29;
        iVar2 = *piVar6;
    }
    uStack_88 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_a0);
    if ((uStack_88 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_88 & 0xffffffffffffdfff);
    }
    *0x475 = 0;
    if ((uStack_88 & 0x2000) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    (**(*0x1c468 + 0x168))(auStack_d0,0x30);
    auStack_d0[0] = 2;
    uStack_b4 = *(*0x1c338 + 0xa0) + 0x3040U >> 4 & 0xf000;
    iStack_cc = *(*0x1c338 + 0xa0) + 0x3040;
    fcn.00017c10(*0x1c338,*(*0x1c338 + 0xa8),*(*0x1c338 + 0xaa),auStack_d0,uVar9,in_stack_ffffffffffffff20);
    uVar9 = fcn.00013818(uStackY_ec,uStackY_f0);
    if (auStack_d0[0] != 0) {
        uVar9 = auStack_d0[0] & 0x7fff | 0x8000000000000000;
    }
    if (-1 < uVar9) {
        uStack_50 = 0;
        *arg1 = *(*0x1c338 + 0xb4);
        *arg2 = *(*0x1c338 + 0xac);
        (**(*0x1c4b0 + 0x38))(0,auStack_68);
        if ((uStack_50 & 0x2000) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_50 & 0xffffffffffffdfff);
        }
        *0x41a = 0x1e001e;
        if ((uStack_50 & 0x2000) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000);
        }
        uVar9 = 0;
    }
    return uVar9;
}


/* fcn.00013bbc @ 0x13bbc */

void fcn.00013bbc(int64_t arg1,int64_t arg2)

{
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    (**(*0x1c468 + 0x80))(auStackX_18,arg1,0,arg2);
    (**(*0x1c468 + 0x90))(auStackX_18[0],arg1,arg2);
    return;
}


/* fcn.00011990 @ 0x11990 */

ulong fcn.00011990(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    cVar1 = arg1;
    uStack_30 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_48);
    if ((uStack_30 >> 0xd & 1) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
    }
    *0x417 = cVar1 << 4 | *0x417 & 0x8f;
    *0x497 = cVar1;
    if ((uStack_30 >> 0xd & 1) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    return 0;
}


/* fcn.0001ac24 @ 0x1ac24 */

int64_t fcn.0001ac24(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1 = arg1 & 7;
    piVar2 = piVar1;
    if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
        iVar3 = 8 - arg1;
        for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 1;
            iVar3 = iVar3 + -1;
        }
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
        arg2 = arg2 + 8;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00012c20 @ 0x12c20 */

uint16_t * fcn.00012c20(int64_t arg1)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint16_t *puVar3;
    uint16_t *puVar4;
    uchar auStack_58 [24];
    uint64_t uStack_40;
    
    puVar3 = *0x1c340;
    *(arg1 + 2) = 0;
    uVar2 = puVar3 >> 4;
    *arg1 = uVar2;
    if (*puVar3 != 0xffff) {
        puVar4 = puVar3;
        while( true ) {
            uVar1 = puVar3[1];
            uStack_40 = 0;
            (**(*0x1c4b0 + 0x38))(0,auStack_58);
            if ((uStack_40 >> 0xd & 1) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_40 & 0xffffffffffffdfff);
            }
            *(puVar4 + (uVar1 - 4)) = *(*puVar3 * 4);
            *(*puVar3 * 4) = puVar3[1] + uVar2 * 0x10000;
            if ((uStack_40 >> 0xd & 1) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000);
            }
            puVar3 = puVar3 + 2;
            if (*puVar3 == 0xffff) break;
            puVar4 = *0x1c340;
        }
    }
    return puVar3 + 2;
}


/* fcn.00012d78 @ 0x12d78 */

void fcn.00012d78(void)

{
    if ((*0x1c388 != '\0') && (*0x1d618 == '\x01')) {
        if (*0x1c380 != 0) {
            (**(*0x1c468 + 0x110))(*0x1c380,0,0);
            (**(*0x1c468 + 0x108))(*0x1c380,0,0,1);
            fcn.00013c10();
            *0x1c388 = '\0';
        }
        fcn.00013d58();
    }
    return;
}


/* fcn.000147c0 @ 0x147c0 */

ulong fcn.000147c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int *piVar5;
    int aiStackX_8 [2];
    int64_t iStackX_20;
    
    piVar5 = *(arg1 + 0x18) + arg1;
    if ((*piVar5 == 0x52494350) && (piVar5[3] == '\x03')) {
        uVar4 = 0;
        if (arg3 != 0) {
            iVar1 = (**(*0x1c468 + 0x98))(arg3,0x1b8b0,&iStackX_20);
            if (iVar1 < 0) goto code_r0x0001485a;
            (**(iStackX_20 + 0x30))(iStackX_20,2,0,1,aiStackX_8);
            do {
                if (*(uVar4 * 4 + 0x1be50) == aiStackX_8[0]) goto code_r0x0001485a;
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
            } while (uVar3 < 4);
        }
        uVar2 = 1;
        *arg2 = *(piVar5 + 0x16) << 9;
    }
    else {
code_r0x0001485a:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001abf4 @ 0x1abf4 */

char * fcn.0001abf4(uint32_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    uint in_register_0000000c;
    char *pcVar4;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    if (pcVar4 != NULL) {
        cVar1 = *pcVar4;
        pcVar3 = NULL;
        while (pcVar2 = pcVar4, cVar1 != '\x7f') {
            pcVar4 = pcVar2 + pcVar2[3] * 0x100 + pcVar2[2];
            pcVar3 = pcVar2;
            cVar1 = pcVar2[pcVar2[3] * 0x100 + pcVar2[2]];
        }
        return pcVar3;
    }
    return NULL;
}


/* fcn.00014244 @ 0x14244 */

int64_t fcn.00014244(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    uint8_t *in_stack_00000028;
    uint8_t uVar4;
    unkbyte7 in_stack_ffffffffffffff19;
    int64_t iVar5;
    int *piStack_d8;
    uint64_t uStack_d0;
    uchar auStack_c8 [24];
    uint64_t uStack_b0;
    uchar auStack_90 [20];
    ushort uStack_7c;
    ushort uStack_74;
    uchar auStack_60 [24];
    uint64_t uStack_48;
    
    uVar2 = 0;
    iVar5 = 0;
    iVar3 = 0;
    if (*0x1c3a8 == 0) {
        (**(*0x1c468 + 0x140))(0x1b7a0,0,0x1c3a8);
    }
    iVar1 = (**(*0x1c3a8 + 0x60))(*0x1c3a8,5,&piStack_d8,&uStack_d0,0,0,0,0);
    if (-1 < iVar1) {
        if ((uStack_d0 == 0) || (*piStack_d8 != -1)) {
            if (uStack_d0 != 0) {
                do {
                    if (*arg2 == piStack_d8[uVar2]) goto code_r0x000142f6;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uStack_d0);
            }
            uVar4 = *(arg2 + 0x3c);
            if (uVar4 - 1 < 0xe) {
                (**(*(arg1 + 0x78) + 0x20))(*(arg1 + 0x78),uVar4,&stack0xffffffffffffff18);
                uStack_48 = 0;
                (**(*0x1c4b0 + 0x38))(0,auStack_60);
                if ((uStack_48 & 0x2000) != 0) {
                    (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_48 & 0xffffffffffffdfff);
                }
                iVar3 = *(iVar5 + uVar4 * 4);
                if ((uStack_48 & 0x2000) != 0) {
                    (**(*0x1c4b0 + 0x40))(0,0x1000);
                }
            }
            (**(*0x1c468 + 0x168))(auStack_90,0x30);
            uStack_74 = *(*(arg1 + 0x98) + 0x10);
            uStack_7c = *(*(arg1 + 0x98) + 0x12);
            fcn.00017c10(arg1,arg3,arg4,auStack_90,CONCAT71(in_stack_ffffffffffffff19,uVar4),iVar5);
            uStack_b0 = 0;
            (**(*0x1c4b0 + 0x38))(0,auStack_c8);
            if ((uStack_b0 & 0x2000) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_b0 & 0xffffffffffffdfff);
            }
            if ((iVar3 != 0) && (*(iVar5 + uVar4 * 4) != iVar3)) {
                *in_stack_00000028 = *in_stack_00000028 | 0x40;
            }
            if ((uStack_b0 & 0x2000) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000);
            }
            iVar1 = 0;
        }
        else {
code_r0x000142f6:
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.00014074 @ 0x14074 */

int64_t fcn.00014074(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int *piVar2;
    unkuint7 Var3;
    uint32_t uVar4;
    int64_t iVar5;
    int16_t *piVar6;
    char cVar7;
    uint8_t uVar8;
    
    piVar6 = *arg1;
    uVar8 = 0;
    piVar2 = *arg2;
    cVar7 = '\0';
    piVar1 = piVar6 + piVar2;
    do {
        if (piVar1 <= piVar6) break;
        piVar2 = 0xaa55;
        if (*piVar6 == -0x55ab) {
            piVar2 = piVar6[0xc] + piVar6;
            Var3 = piVar2 >> 8;
            if (*piVar2 != 0x52494350) {
code_r0x00014131:
                return Var3 << 8;
            }
            uVar8 = *(piVar2 + 0x15) & 0x80;
            if (piVar2[5] == '\0') {
                if ((piVar2[3] != '\x03') && (cVar7 != '\0')) {
code_r0x0001412d:
                    return CONCAT71(Var3,1);
                }
                uVar4 = *(piVar2 + 4) << 9;
                if (uVar4 < 0x1fe01) {
                    iVar5 = *(piVar2 + 4) << 9;
                    if (uVar4 < *(piVar6 + 1) << 9) {
                        iVar5 = *(piVar6 + 1) << 9;
                    }
                }
                else {
                    iVar5 = 0;
                }
                if (iVar5 == 0) goto code_r0x00014131;
                *arg1 = piVar6;
                *arg2 = iVar5;
                if (piVar2[3] == '\x03') goto code_r0x0001412d;
                cVar7 = '\x01';
            }
            else {
                iVar5 = *(piVar2 + 4) << 9;
            }
        }
        else {
            iVar5 = 0x200;
        }
        piVar6 = piVar6 + iVar5;
    } while (uVar8 == 0);
    return CONCAT71(piVar2 >> 8,cVar7);
}


/* fcn.00012ef8 @ 0x12ef8 */

int64_t fcn.00012ef8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint16_t *puVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint16_t *puVar7;
    uint64_t uVar8;
    uint16_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    bool bVar14;
    uint64_t *in_stack_00000028;
    uchar auStack_38 [16];
    
    uVar13 = 0;
    uVar9 = arg3;
    uVar6 = arg2;
    if (*0x1c3c0 != 0) {
        piVar12 = 0x1c3c0;
        uVar8 = uVar13;
        do {
            iVar3 = (**piVar12)(arg1 & 0xffff,arg2 & 0xffff,arg3 & 0xffff,arg4);
            if (-1 < iVar3) {
                return iVar3;
            }
            uVar8 = uVar8 + 1;
            piVar12 = uVar8 * 8 + 0x1c3c0;
        } while (*piVar12 != 0);
        if (-1 < iVar3) {
            return iVar3;
        }
    }
    bVar14 = *0x1c900 < *0x1c908 + *0x1c900;
    puVar7 = *0x1c900;
    while( true ) {
        if (!bVar14) {
            bVar14 = *0x1c900 < *0x1c908 + *0x1c900;
            puVar7 = *0x1c900;
            do {
                if (!bVar14) {
                    return -0x7ffffffffffffff2;
                }
                if ((*puVar7 & 0xff00) == 0xa000) {
                    uVar5 = (*puVar7 + *puVar7 * 2) * 2;
                }
                else {
                    uVar5 = 0;
                }
                *arg4 = uVar5 + 10 + puVar7;
                *in_stack_00000028 = *(puVar7 + 3);
                if ((((**arg4 == -0x55ab) && (cVar2 = fcn.000147c0(*arg4,auStack_38,0), cVar2 != '\0')) &&
                    (iVar3 = *(*arg4 + 0x18) + *arg4, *(iVar3 + 4) == uVar6)) && (*(iVar3 + 8) != 0)) {
                    for (puVar4 = *(iVar3 + 8) + iVar3; *puVar4 != 0; puVar4 = puVar4 + 1) {
                        if (*puVar4 == uVar9) {
                            return 0;
                        }
                    }
                }
                *arg4 = 0;
                *in_stack_00000028 = 0;
                puVar7 = puVar7 + *(puVar7 + 3) + uVar5 + 10;
                bVar14 = puVar7 < *0x1c900 + *0x1c908;
            } while( true );
        }
        if (((*puVar7 == arg1) && (puVar7[1] == uVar6)) && (puVar7[2] == uVar9)) break;
        if ((*puVar7 & 0xff00) == 0xa000) {
            uVar1 = *puVar7;
            uVar5 = (uVar1 + uVar1 * 2) * 2;
            uVar8 = uVar5;
            if ((puVar7[1] == uVar6) && (puVar7[2] == uVar9)) {
code_r0x0001305b:
                *arg4 = uVar5 + 10 + puVar7;
                goto code_r0x0001304e;
            }
            puVar4 = puVar7 + 5;
            uVar11 = uVar13;
            if (uVar1 != 0) {
                do {
                    if (((*puVar4 == arg1) && (puVar4[1] == uVar6)) && (puVar4[2] == uVar9)) goto code_r0x0001305b;
                    puVar4 = puVar4 + 3;
                    uVar10 = uVar11 + 1;
                    uVar11 = uVar10;
                } while (uVar10 < uVar1);
            }
        }
        else {
            uVar8 = uVar13;
        }
        *arg4 = 0;
        *in_stack_00000028 = 0;
        puVar7 = puVar7 + *(puVar7 + 3) + 10 + uVar8;
        bVar14 = puVar7 < *0x1c908 + *0x1c900;
    }
    *arg4 = puVar7 + 5;
code_r0x0001304e:
    *in_stack_00000028 = *(puVar7 + 3);
    return 0;
}


/* fcn.00013c54 @ 0x13c54 */

int64_t fcn.00013c54(void)

{
    int64_t iVar1;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    if ((*0x1c360 != 0) || (iVar1 = (**(*0x1c468 + 0x140))(0x1b820,0,0x1c360), -1 < iVar1)) {
        if (*0x1c378 == '\0') {
            iVar1 = (**(*0x1c360 + 0x10))(*0x1c360,0x1be40);
            if (-1 < iVar1) {
                if (*0x1d618 == '\x02') {
                    uStack_30 = 0;
                    (**(*0x1c4b0 + 0x38))(0,auStack_48);
                    if ((uStack_30 >> 0xd & 1) != 0) {
                        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
                    }
                    *0x1c368 = *0x24;
                    *0x24 = 0xf000eef3;
                    if ((uStack_30 >> 0xd & 1) != 0) {
                        (**(*0x1c4b0 + 0x40))(0,0x1000);
                    }
                }
                *0x1c378 = '\x01';
            }
        }
        else {
            iVar1 = -0x7ffffffffffffff0;
        }
    }
    return iVar1;
}


/* fcn.00018068 @ 0x18068 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00018068(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    bool bVar6;
    uchar auStackX_10 [2];
    char cStackX_12;
    char cStackX_13;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    uint32_t var_58h;
    uchar auStack_48 [16];
    int64_t var_10h;
    
    iVar4 = 0;
    bVar6 = *0x1c410 != 0;
    *arg3 = arg2 & 0xffffU;
    if (bVar6) {
        piVar1 = 0x1c410;
        do {
            iVar2 = (**piVar1)(arg1,arg2 & 0xffffU,arg3);
            if (-1 < iVar2) break;
            iVar4 = iVar4 + 1;
            piVar1 = iVar4 * 8 + 0x1c410;
        } while (*piVar1 != 0);
    }
    if (*0x1c380 != 0) goto code_r0x00018127;
    bVar6 = false;
    if (arg1 == 0) {
code_r0x00018114:
        *arg3 = 2;
    }
    else {
        (**(arg1 + 0x30))(arg1,0,8,4,auStackX_10);
        if (cStackX_13 == '\0') {
            if (cStackX_12 != '\x01') goto code_r0x00018114;
            bVar6 = true;
        }
        if ((cStackX_13 == '\x03') && (cStackX_12 == '\0')) {
            bVar6 = true;
        }
        if (!bVar6) goto code_r0x00018114;
    }
    if (*0x1c380 == 0) {
        return 0;
    }
code_r0x00018127:
    (**(*0x1c468 + 0x128))(*0x1c380,0x1b8b0,&iStackX_18,&uStackX_20);
    uVar5 = 0;
    if (uStackX_20 != 0) {
        iVar4 = 0;
        uVar3 = uStackX_20;
        do {
            if ((*(iVar4 + 0x10 + iStackX_18) & 8) != 0) {
                iVar2 = (**(*0x1c468 + 0x98))(*(iVar4 + 8 + iStackX_18),0x1b930,auStack_48);
                if (-1 < iVar2) {
                    iVar4 = *(iStackX_18 + uVar5 * 0x18);
                    goto code_r0x00018191;
                }
                uVar3 = uStackX_20;
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + 0x18;
        } while (uVar5 < uVar3);
    }
    iVar4 = iStackX_18;
code_r0x00018191:
    (**(*0x1c468 + 0x48))(iStackX_18);
    if ((uVar5 < uStackX_20) && (iVar4 = (**(*0x1c468 + 0x98))(iVar4,0x1b9b0,auStack_48), iVar4 < 0)) {
        *arg3 = 2;
    }
    return 0;
}


/* fcn.00017a80 @ 0x17a80 */

uint64_t fcn.00017a80(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *arg1_00;
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    uchar auStackX_20 [8];
    
    pcVar1 = *0x1c6c8;
    arg1_00 = *0x1c6c8 + 6;
    pcVar4 = *0x1c6c8;
    if (*0x1c3b2 != '\0') goto code_r0x00017bf8;
    (*0x1c6c8)[0x43] = SUB81(arg1,0);
    pcVar1[0x42] = 0x0;
    *(pcVar1 + 0x3e) = 0;
    uVar3 = *(arg2 + 8);
    *0x1c3b2 = 1;
    *(pcVar1 + 10) = *arg2;
    *(pcVar1 + 0x12) = uVar3;
    uVar3 = *(arg2 + 0x18);
    *(pcVar1 + 0x1a) = *(arg2 + 0x10);
    *(pcVar1 + 0x22) = uVar3;
    uVar3 = *(arg2 + 0x28);
    *(pcVar1 + 0x2a) = *(arg2 + 0x20);
    *(pcVar1 + 0x32) = uVar3;
    fcn.000184ec(arg1_00,CONCAT71(arg1 >> 8,1));
    if (*0x1c3b8 == 0) {
        iVar2 = (**(*0x1c468 + 0x140))(0x1b860,0,0x1c3b8);
        if (iVar2 < 0) {
            *0x1c3b8 = 0;
        }
        if (*0x1c3b8 != 0) goto code_r0x00017b27;
    }
    else {
code_r0x00017b27:
        (**(*0x1c3b8 + 0x18))(1);
    }
    uVar3 = (**(*0x1c468 + 0x18))(0x1f);
    (**(*0x1c6c0 + 0x18))(*0x1c6c0,0,0);
    (**(*0x1c6c0 + 8))(*0x1c6c0,auStackX_20,0,0,0);
    (**0x1c6c8)(*0x1c6c8);
    if (*0x1c3b8 != 0) {
        (**(*0x1c3b8 + 0x18))(0);
    }
    (**(*0x1c6c0 + 0x10))(*0x1c6c0,auStackX_20,0,0,0);
    (**(*0x1c6c0 + 0x18))(*0x1c6c0,1,0);
    (**(*0x1c468 + 0x20))(uVar3);
    pcVar4 = fcn.000184ec(arg1_00,0);
    uVar3 = *(pcVar1 + 0x12);
    *0x1c3b2 = '\0';
    *arg2 = *(pcVar1 + 10);
    *(arg2 + 8) = uVar3;
    uVar3 = *(pcVar1 + 0x22);
    *(arg2 + 0x10) = *(pcVar1 + 0x1a);
    *(arg2 + 0x18) = uVar3;
    uVar3 = *(pcVar1 + 0x32);
    *(arg2 + 0x20) = *(pcVar1 + 0x2a);
    *(arg2 + 0x28) = uVar3;
code_r0x00017bf8:
    return pcVar4 & 0xffffffffffffff00;
}


/* fcn.00014138 @ 0x14138 */

void fcn.00014138(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint in_stack_00000028;
    
    iVar1 = *(arg1 + 2) << 9;
    if (*(arg1 + 2) != 0) {
        (**(*0x1c468 + 0x40))(4,iVar1,*0x1c320 + 1);
        (**(*0x1c468 + 0x160))((*0x1c320)[1],arg1,iVar1);
        **0x1c320 = arg1;
        if (arg3 != 0) {
            (*0x1c320)[3] = arg2;
            *(*0x1c320 + 4) = arg3;
            *(*0x1c320 + 0x24) = arg4;
            *(*0x1c320 + 0x25) = in_stack_00000028;
            (**(*0x1c468 + 0x40))(4,arg3 & 0xffffffff,*0x1c320 + 2);
            (**(*0x1c468 + 0x160))((*0x1c320)[2],arg2,arg3 & 0xffffffff);
        }
        *0x1c320 = *0x1c320 + 0x29;
    }
    return;
}


/* fcn.00014c1c @ 0x14c1c */

int64_t * fcn.00014c1c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    (**(arg1 + 0x70))(arg1,&iStackX_8,&iStackX_10,&iStackX_18,&iStackX_20);
    piVar5 = *0x1c948;
    do {
        piVar4 = piVar5 + -0x36;
        piVar1 = piVar5 + -0x2e;
        piVar2 = piVar5 + -0x26;
        piVar3 = piVar5 + -0x1e;
        if (((*piVar4 == 0 && *piVar1 == 0) && *piVar2 == 0) && *piVar3 == 0) {
            return NULL;
        }
        piVar5 = piVar4;
    } while ((((*piVar4 != iStackX_8) || (*piVar1 != iStackX_10)) || (*piVar2 != iStackX_18)) || (*piVar3 != iStackX_20)
            );
    return piVar4;
}


/* fcn.00014c98 @ 0x14c98 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_1ah
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h

ulong fcn.00014c98(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t var_fh;
    uint32_t var_1ah;
    int aiStackX_18 [2];
    int64_t iStackX_20;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    uchar auStack_68 [8];
    uchar auStack_60 [8];
    uchar auStack_58 [7];
    int64_t var_49h;
    uint32_t var_41h;
    char cStack_45;
    int64_t var_39h;
    uint32_t var_31h;
    uint32_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    uint32_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar3 = *0x1c948;
    (**(*0x1c468 + 0x138))(2,0x1b8b0,0,&uStack_88,&iStack_80);
    uVar4 = 0;
    if (*0x1c3e0 != 0) {
        piVar1 = 0x1c3e0;
        uVar5 = uVar4;
        do {
            iVar2 = (**piVar1)(arg1,iVar3 + -0x36);
            if (-1 < iVar2) break;
            uVar5 = uVar5 + 1;
            piVar1 = uVar5 * 8 + 0x1c3e0;
        } while (*piVar1 != 0);
        if (iVar2 == 0) {
            return 0x8000000000000014;
        }
    }
    if (*0x1c3c8 != 0) {
        piVar1 = 0x1c3c8;
        uVar5 = uVar4;
        do {
            iVar3 = (**piVar1)(arg1);
            if (-1 < iVar3) break;
            uVar5 = uVar5 + 1;
            piVar1 = uVar5 * 8 + 0x1c3c8;
        } while (*piVar1 != 0);
        if (iVar3 == 0) {
            return 0;
        }
    }
    (**(arg1 + 0x70))(arg1,auStack_60,&iStack_a8,&iStack_98,&iStack_78);
    if (uStack_88 != 0) {
        do {
            (**(*0x1c468 + 0x98))(*(iStack_80 + uVar4 * 8),0x1b8b0,&iStackX_20);
            (**(iStackX_20 + 0x70))(iStackX_20,auStack_58,&iStack_a0,&iStack_90,&iStack_70);
            if (((iStack_a0 != iStack_a8) || (iStack_90 != iStack_98)) || (iStack_70 != iStack_78)) {
                (**(iStackX_20 + 0x30))(iStackX_20,2,0,1,aiStackX_18);
                (**(iStackX_20 + 0x30))(iStackX_20,0,0,0x28,&var_49h + 1);
                if ((cStack_45 != '\x03') &&
                   (((iStack_a0 == iStack_a8 && (iStack_90 == iStack_98)) || (*arg2 == aiStackX_18[0])))) {
                    (**(iStackX_20 + 0x78))(iStackX_20,4,0,auStack_68);
                    (**(iStackX_20 + 0x78))(iStackX_20,2,auStack_68._0_4_ & 0x700);
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_88);
    }
    return 0;
}


/* fcn.00016390 @ 0x16390 */

uint64_t fcn.00016390(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    ulong uStack_28;
    int64_t iStack_20;
    char cStack_18;
    int64_t iStack_10;
    
    iVar1 = 0;
    uStackX_8 = 0;
    if ((arg1 != 0) && (iVar1 = (**(*0x1c468 + 0x98))(arg1,0x1b8b0,&uStackX_8), iVar1 < 0)) {
        return 0x8000000000000015;
    }
    cStack_18 = '\x01';
    uStack_28 = uStackX_8;
    iStack_20 = arg2;
    iStack_10 = arg1;
    if (*0x1c3a0 == 0) {
        iVar1 = (**(*0x1c468 + 0x140))(0x1b9c0,0,0x1c3a0);
    }
    if (-1 < iVar1) {
        (**(*0x1c3a0 + 8))(&uStack_28);
    }
    fcn.00013bbc(0x1b800,&uStack_28);
    return ~-(cStack_18 != '\0') & 0x8000000000000015;
}


/* fcn.00014b40 @ 0x14b40 */

int64_t fcn.00014b40(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uchar auStackX_10 [3];
    char cStackX_13;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t aiStack_28 [2];
    
    iVar3 = -0x7ffffffffffffff2;
    iVar1 = (**(*0x1c468 + 0x138))(2,0x1b8b0,0,&uStackX_20,&iStackX_18);
    if (-1 < iVar1) {
        uVar2 = 0;
        iVar1 = iVar3;
        if (uStackX_20 != 0) {
            do {
                iVar3 = (**(*0x1c468 + 0x98))(*(iStackX_18 + uVar2 * 8),0x1b8b0,aiStack_28);
                if ((iVar3 < 0) || (iVar3 = (**(aiStack_28[0] + 0x30))(aiStack_28[0],2,8,1,auStackX_10), iVar3 < 0)
                   ) break;
                if (cStackX_13 == '\x03') {
                    *arg1 = *(iStackX_18 + uVar2 * 8);
                    iVar1 = 0;
                    break;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_20);
        }
        (**(*0x1c468 + 0x48))(iStackX_18);
    }
    return iVar1;
}


/* fcn.0001542c @ 0x1542c */

int64_t fcn.0001542c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint uVar5;
    bool bVar6;
    bool bVar7;
    int iVar8;
    char cVar9;
    uint8_t uVar10;
    char cVar11;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t *piVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int16_t *arg1_00;
    uint64_t uVar18;
    unkbyte7 Var19;
    uint8_t *in_stack_00000028;
    char *in_stack_00000030;
    uint64_t *in_stack_00000038;
    uint *in_stack_00000040;
    char cStack_177;
    int64_t *piStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint32_t uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int16_t *piStack_118;
    uint32_t uStack_110;
    uint32_t uStack_10c;
    int64_t iStack_108;
    uchar auStack_100 [8];
    uint64_t uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [8];
    uchar auStack_d8 [10];
    char cStack_ce;
    char cStack_cd;
    uchar auStack_98 [24];
    uint64_t uStack_80;
    uchar auStack_60 [24];
    uint64_t uStack_48;
    
    uStack_158 = 0;
    uStack_f8 = 0;
    bVar7 = false;
    uStack_148 = 0;
    piStack_170 = 0x1c380;
    iStack_168 = 0;
    bVar6 = false;
    uStack_150 = 0;
    uStack_140 = 0;
    iStack_160 = 0;
    if (arg2 == 0) {
        uStack_f0 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
code_r0x00015617:
        if ((*0x1c398 != '\0') && (!bVar7)) {
            return -0x7ffffffffffffffd;
        }
        iVar12 = fcn.00016390(arg2,arg3);
        if (-1 < iVar12) {
            iVar12 = 0;
            if (bVar7) {
                if (*(arg1 + 0x90) == 0) {
                    iVar12 = (**(*(arg1 + 0x68) + 8))(*(arg1 + 0x68),0,0,&piStack_170,auStack_e0,0);
                    if ((iVar12 < 0) || (arg2 == *piStack_170)) goto code_r0x0001578b;
                    goto code_r0x0001585e;
                }
            }
            else {
                if (((*(arg1 + 0x90) == 0) && (iStack_108 = 0, *0x1c3b0 == '\0')) &&
                   ((iVar12 = (**(*(arg1 + 0x68) + 8))(*(arg1 + 0x68),0,0,&piStack_170,auStack_e0,0), -1 < iVar12
                    || (iVar12 = fcn.00014b40(piStack_170), -1 < iVar12)))) {
                    (**(*0x1c468 + 0x98))(*piStack_170,0x1b8b0,&iStack_108);
                    (**(iStack_108 + 0x78))(iStack_108,4,0,auStack_100);
                    (**(iStack_108 + 0x78))(iStack_108,2);
                    *0x1c3b0 = '\x01';
                    fcn.0001542c(arg1,*piStack_170,0,arg4);
                }
code_r0x0001578b:
                piStack_170 = 0x1c380;
                if (bVar7) {
                    (**(iStack_168 + 0x78))(iStack_168,0,0,auStack_100);
                    (**(iStack_168 + 0x78))(iStack_168,2);
                    *(arg1 + 0x90) = arg2;
                    *piStack_170 = arg2;
                }
                if (arg2 == 0) {
                    arg1_00 = *arg3;
                    uVar16 = *(arg1_00 + 1) << 9;
                    uStack_138 = uVar16;
                    piStack_118 = arg1_00;
                    if (*(arg1_00 + 1) != 0) {
                        if (*arg1_00 == -0x55ab) {
                            cVar9 = fcn.000147c0(arg1_00,&uStack_f8,0);
                            goto code_r0x00015899;
                        }
                        cVar9 = '\0';
code_r0x00015913:
                        fcn.0001ab10(1,0x3051000);
                        uVar18 = *0x1c940;
                        uVar17 = uVar16;
                        if (cVar9 != '\0') {
                            uVar18 = uStack_158;
                            uVar17 = uStack_150;
                        }
                        uStack_150 = uVar18;
                        if (uVar17 + *0x1c940 < 0xe8000) {
                            fcn.0001375c(*0x1c940,uVar17,&uStack_10c,&uStack_110);
                            *(*0x1c940 + 2) = 0;
                            (**(*0x1c468 + 0x160))(uStack_150,arg1_00,uVar16);
                            uStack_80 = 0;
                            (**(*0x1c4b0 + 0x38))(0,auStack_98);
                            if ((uStack_80 & 0x2000) != 0) {
                                (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_80 & 0xffffffffffffdfff);
                            }
                            uVar10 = *0x475 + 0x80;
                            if ((uStack_80 & 0x2000) != 0) {
                                (**(*0x1c4b0 + 0x40))(0,0x1000);
                            }
                            iVar12 = *(arg1 + 0xa0);
                            *(iVar12 + 24999) = *(*(arg1 + 0x98) + 0x10);
                            *(iVar12 + 0x61a9) = *(*(arg1 + 0x98) + 0x12);
                            if (cVar9 == '\0') {
                                *(iVar12 + 0x61ab) = *0x1c940 >> 4;
                                *(iVar12 + 0x61b4) = 0;
                            }
                            else {
                                *(iVar12 + 0x61ab) = uStack_158 >> 4;
                                *(iVar12 + 0x61b4) = *0x1c940 >> 4;
                            }
                            *(iVar12 + 0x61ad) = uStack_130;
                            *(iVar12 + 0x61ae) = uStack_128 << 3 | uStack_120;
                            *(iVar12 + 0x61af) = *(arg1 + 0xb4);
                            *(iVar12 + 0x61b0) = *(arg1 + 0xac);
                            uStack_48 = 0;
                            (**(*0x1c4b0 + 0x38))(0,auStack_60);
                            if ((uStack_48 >> 0xd & 1) != 0) {
                                (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_48 & 0xffffffffffffdfff);
                            }
                            uStack_150 = CONCAT44(uStack_150._4_4_,*(iStack_160 + 100));
                            uVar5 = *(iStack_160 + 0x60);
                            uVar16 = *0x1c940;
                            fcn.00014fdc(arg1,arg2,iVar12 + 24999,*0x1c940);
                            iVar8 = uStack_150;
                            *0x1c398 = uStack_150 != *(iStack_160 + 100);
                            if (cStack_177 != '\0') {
                                piStack_118 = NULL;
                                uVar16 = uVar16 & 0xffffffffffffff00;
                                if (*0x1c389 == '\0') {
                                    uVar16 = uStack_130;
                                    fcn.00014478(arg1,*0x1c940,auStack_d8,uStack_130);
                                }
                            }
                            *(iStack_160 + 0x60) = uVar5;
                            *(iStack_160 + 100) = iVar8;
                            cVar11 = (uVar10 & 0xc0) + *0x475;
                            if ((uStack_48 >> 0xd & 1) != 0) {
                                (**(*0x1c4b0 + 0x40))(0,0x1000);
                            }
                            fcn.00016470();
                            uVar15 = uStack_148;
                            uVar17 = uStack_148;
                            if (cVar9 == '\0') {
                                if (uVar17 < uStack_138) {
                                    (**(*0x1c468 + 0x168))(uVar17 + *0x1c940,uStack_138 - uVar17,0xff);
                                }
                            }
                            else {
                                (**(*0x1c468 + 0x30))(uStack_158,uStack_140);
                            }
                            fcn.00013818(uStack_10c,uStack_110);
                            uVar13 = uVar15 & 0x7ff;
                            if (uVar13 != 0) {
                                uVar17 = uVar15 + (0x800 - uVar13);
                            }
                            Var19 = uVar16 >> 8;
                            if (in_stack_00000028 != NULL) {
                                *in_stack_00000028 = uVar10;
                            }
                            if (in_stack_00000030 != NULL) {
                                *in_stack_00000030 = cVar11;
                            }
                            if (in_stack_00000038 != NULL) {
                                *in_stack_00000038 = *0x1c940;
                            }
                            if (in_stack_00000040 != NULL) {
                                *in_stack_00000040 = uVar17;
                            }
                            if (arg2 != 0) {
                                **0x1c948 = uStack_f0;
                                (*0x1c948)[1] = uStack_130;
                                (*0x1c948)[2] = uStack_128;
                                (*0x1c948)[3] = uStack_120;
                                (*0x1c948)[4] = *arg4;
                                *(*0x1c948 + 5) = uVar10;
                                *(*0x1c948 + 0x29) = cVar11;
                                *(*0x1c948 + 0x2a) = *0x1c940;
                                *(*0x1c948 + 0x32) = uVar17;
                                *0x1c948 = *0x1c948 + 0x36;
                            }
                            *0x1c940 = *0x1c940 + uVar17;
                            if (((*0x1c398 != '\0') && (!bVar6)) && (*0x1d5c6 == '\x01')) {
                                if (*0x1d618 == '\x01') {
                                    if (*0x1c380 != 0) {
                                        (**(*0x1c468 + 0x110))(*0x1c380,0,0);
                                        (**(*0x1c468 + 0x108))(*0x1c380,0,0,CONCAT71(Var19,1));
                                        fcn.00013c10();
                                    }
                                    fcn.00013d58();
                                }
                                iVar12 = (**(*0x1c468 + 0x170))(0x200,8,0x1aa04,0,0x1bd98,&uStack_e8);
                                if (-1 < iVar12) {
                                    (**(*0x1c468 + 0x68))(uStack_e8);
                                    (**(*0x1c468 + 0x70))(uStack_e8);
                                }
                                fcn.0001219c(arg1,0x1bcca,0x27,0x1bcb0);
                                (**(*0x1c470 + 0x68))(0,0,0,0);
                            }
                            return 0;
                        }
                        goto code_r0x00015954;
                    }
                }
                else {
                    iVar12 = fcn.0001486c(arg1,arg2,&piStack_118,&uStack_138);
                    arg1_00 = piStack_118;
                    if ((-1 < iVar12) && (piStack_118 != NULL)) {
                        if (*piStack_118 != -0x55ab) {
                            cVar9 = '\0';
                            uVar16 = uStack_138;
                            goto code_r0x00015913;
                        }
                        cVar9 = fcn.000147c0(piStack_118,&uStack_f8,arg2);
                        uVar16 = uStack_138;
code_r0x00015899:
                        if (cVar9 == '\0') {
code_r0x0001590a:
                            uStack_150 = uStack_f8;
                            goto code_r0x00015913;
                        }
                        uStack_158 = 0xa0000;
                        uStack_140 = uVar16 >> 0xc;
                        if ((uVar16 & 0xfff) != 0) {
                            uStack_140 = uStack_140 + 1;
                        }
                        iVar12 = (**(*0x1c468 + 0x28))(1,4,uStack_140,&uStack_158);
                        if (iVar12 < 0) {
                            fcn.00016470();
                            fcn.0001ab10(0x80000002,0x3051000);
                            goto code_r0x00015576;
                        }
                        if (0x7fff < uStack_158) goto code_r0x0001590a;
code_r0x00015954:
                        fcn.00016470();
                        fcn.0001ab10(0x80000002,0x3051000);
                        if (uStack_140 != 0) {
                            (**(*0x1c468 + 0x30))(uStack_158,uStack_140);
                        }
                        goto code_r0x00015576;
                    }
                }
code_r0x0001585e:
                iVar12 = -0x7ffffffffffffffd;
            }
        }
        fcn.00016470();
    }
    else {
        (**(*0x1c468 + 0x98))(arg2,0x1b8b0);
        iVar12 = fcn.00014c1c(iStack_168);
        if (iVar12 != 0) {
            *arg4 = *(iVar12 + 0x20);
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = *(iVar12 + 0x28);
            }
            if (in_stack_00000030 != NULL) {
                *in_stack_00000030 = *(iVar12 + 0x29);
            }
            if (in_stack_00000038 != NULL) {
                *in_stack_00000038 = *(iVar12 + 0x2a);
            }
            if (in_stack_00000040 == NULL) {
                return 0;
            }
            *in_stack_00000040 = *(iVar12 + 0x32);
            return 0;
        }
        uVar15 = 0;
        piVar14 = *0x1c948 + -0x36;
        if (((*(*0x1c948 + -0x1e) == 0 && *(*0x1c948 + -0x26) == 0) && *(*0x1c948 + -0x2e) == 0) && *piVar14 == 0) {
code_r0x00015585:
            (**(iStack_168 + 0x30))(iStack_168,0,0,0x40,auStack_d8);
            if (cStack_cd == '\0') {
                if (cStack_ce == '\x01') {
                    bVar7 = true;
                    bVar6 = true;
                    goto code_r0x000155be;
                }
            }
            else {
code_r0x000155be:
                if ((cStack_cd == '\x03') && (bVar6 = bVar7, cStack_ce == '\0')) {
                    bVar6 = true;
                    bVar7 = bVar6;
                }
            }
            iVar12 = fcn.00014c98(iStack_168,auStack_d8);
            if (iVar12 < 0) {
                return iVar12;
            }
            (**(iStack_168 + 0x70))(iStack_168,&uStack_f0,&uStack_130,&uStack_128,&uStack_120);
            goto code_r0x00015617;
        }
        do {
            piVar1 = piVar14 + -0x36;
            uVar15 = uVar15 + 1;
            piVar2 = piVar14 + -0x1e;
            piVar3 = piVar14 + -0x26;
            piVar4 = piVar14 + -0x2e;
            piVar14 = piVar1;
        } while (((*piVar2 != 0 || *piVar3 != 0) || *piVar4 != 0) || *piVar1 != 0);
        if (uVar15 < 0x20) goto code_r0x00015585;
code_r0x00015576:
        iVar12 = -0x7ffffffffffffff7;
    }
    return iVar12;
}


/* fcn.0001486c @ 0x1486c */

ulong fcn.0001486c(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    char cVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t noname_0_00;
    int64_t iVar7;
    ulong noname_0_01;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t *in_stack_00000028;
    int64_t iStack_c8;
    ulong uStack_c0;
    uint16_t uStack_b8;
    uint16_t uStack_b6;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    char acStack_90 [8];
    int64_t iStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    char cStack_70;
    uchar auStack_68 [16];
    uchar auStack_58 [10];
    char cStack_4e;
    char cStack_4d;
    
    iVar7 = *0x1c948;
    uStack_c0 = 0;
    iVar8 = 0;
    piVar10 = *0x1c948 + -0x36;
    iVar5 = (**(*0x1c468 + 0x98))(arg1,0x1b8b0,&iStack_b0);
    if (iVar5 < 0) {
        return 0x8000000000000003;
    }
    iStack_c8 = *(iStack_b0 + 0x98);
    (**(iStack_b0 + 0x30))(iStack_b0,2,0,1,&uStack_b8);
    if (iStack_c8 != 0) {
        uStack_c0 = *(iStack_b0 + 0x90);
        cVar4 = fcn.00014074(uStack_c0,&iStack_c8,&uStack_c0);
        iStack_80 = iStack_c8;
        uStack_78 = uStack_c0;
        acStack_90[0] = '\0';
        iStack_88 = arg1;
        cStack_70 = cVar4;
        fcn.00013bbc(0x1bca0,acStack_90);
        if (acStack_90[0] != '\0') {
            iStack_c8 = iStack_80;
            uStack_c0 = uStack_78;
            cVar4 = cStack_70;
        }
        iVar8 = (cVar4 != '\0') + 1;
        if (cVar4 != '\0') goto code_r0x00014ae9;
    }
    iVar5 = iStack_b0;
    iVar9 = 0;
    if (*0x1c3f8 == 0) {
code_r0x000149ba:
        noname_0_00 = 0x20;
        iVar5 = fcn.00012ef8(0x20,uStack_b8,uStack_b6,&iStack_c8);
        if (-1 < iVar5) goto code_r0x000149df;
    }
    else {
        piVar6 = 0x1c3f8;
        do {
            noname_0_00 = (**piVar6)(iVar5,&iStack_c8,&uStack_c0);
            if (-1 < noname_0_00) goto code_r0x000149df;
            iVar9 = iVar9 + 1;
            piVar6 = iVar9 * 8 + 0x1c3f8;
        } while (*piVar6 != 0);
        if (noname_0_00 < 0) goto code_r0x000149ba;
code_r0x000149df:
        cVar4 = fcn.00014074(noname_0_00,&iStack_c8,&uStack_c0);
        iVar8 = (cVar4 != '\0') + 1;
        if (cVar4 != '\0') goto code_r0x00014ae9;
    }
    iVar5 = (**(iStack_b0 + 0x70))(iStack_b0,&iStack_98,&iStack_a0,&iStack_a8,auStack_68);
    if (iVar5 < 0) {
        return 0x8000000000000003;
    }
    iVar5 = *piVar10;
    piVar6 = piVar10;
    if (((*(iVar7 + -0x1e) != 0 || *(iVar7 + -0x26) != 0) || *(iVar7 + -0x2e) != 0) || iVar5 != 0) {
        do {
            if (((iVar5 == iStack_98) && (piVar10[1] == iStack_a0)) && (piVar6 = piVar10, piVar10[2] == iStack_a8))
            break;
            piVar1 = piVar10 + -0x1e;
            piVar6 = piVar10 + -0x36;
            piVar2 = piVar10 + -0x2e;
            iVar5 = *piVar6;
            piVar3 = piVar10 + -0x26;
            piVar10 = piVar6;
        } while (((*piVar1 != 0 || *piVar2 != 0) || iVar5 != 0) || *piVar3 != 0);
    }
    if (((piVar6[3] == 0 && piVar6[2] == 0) && piVar6[1] == 0) && *piVar6 == 0) {
        iVar7 = (**(iStack_b0 + 0x30))(iStack_b0,2,0,0x10,auStack_58);
        if (iVar7 < 0) {
            return 0x8000000000000003;
        }
        if ((cStack_4e == '\x05') && (cStack_4d == '\b')) {
            noname_0_01 = 1;
            iVar7 = fcn.00012ef8(1,0,4,&iStack_c8);
            if (-1 < iVar7) {
                cVar4 = fcn.00014074(noname_0_01,&iStack_c8,&uStack_c0);
                iVar8 = (cVar4 != '\0') + 1;
            }
        }
    }
code_r0x00014ae9:
    *in_stack_00000028 = iVar8;
    if (iVar8 != 2) {
        return 0x8000000000000003;
    }
    if (arg2 != 0) {
        *arg2 = iStack_c8;
    }
    if (arg3 != 0) {
        *arg3 = uStack_c0;
    }
    return 0;
}


/* fcn.00016470 @ 0x16470 */

ulong fcn.00016470(void)

{
    if (*0x1c3a0 == 0) {
        (**(*0x1c468 + 0x140))(0x1b9c0,0,0x1c3a0);
        if (*0x1c3a0 == 0) goto code_r0x000164ae;
    }
    (**(*0x1c3a0 + 8))(0);
code_r0x000164ae:
    fcn.00013bbc(0x1b800,0);
    return 0;
}


/* fcn.00014fdc @ 0x14fdc */

//WARNING: Variable defined which should be unmapped: var_1dh
//WARNING: Variable defined which should be unmapped: var_39h

ulong fcn.00014fdc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t arg2_00;
    uchar uVar10;
    uint32_t uVar11;
    int *piVar12;
    uint32_t uVar13;
    int16_t iStackX_8;
    unkbyte6 StackX_a;
    uint16_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    char in_stack_00000028;
    uint32_t *in_stack_00000030;
    uchar *in_stack_00000038;
    uint32_t var_4fh;
    int16_t var_57h;
    ulong uVar14;
    ulong uVar15;
    uint uStack_a8;
    int64_t iStack_a0;
    uint64_t in_stack_ffffffffffffff68;
    int32_t arg_58h;
    uint32_t auStack_88 [2];
    ushort auStack_80 [2];
    int16_t iStack_7c;
    int32_t var_61h;
    uint16_t uStack_64;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int16_t var_1dh;
    
    arg2_00 = 0;
    uStack_a8 = 0;
    iStack_a0 = 0;
    uVar6 = 2;
    uVar10 = 1;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    if (in_stack_00000028 == '\0') {
        iVar7 = arg2;
        fcn.00013c54();
        if (arg2 != 0) {
            iVar7 = 0x1b8b0;
            (**(*0x1c468 + 0x98))(arg2,0x1b8b0,&iStack_a0);
        }
        if (*0x1d618 != 2) {
            iVar7 = 0;
            uVar6 = in_stack_ffffffffffffff68;
            iVar4 = fcn.00018068(iStack_a0,0,&stack0xffffffffffffff68);
            if (iVar4 < 0) {
                uVar6 = 0;
            }
        }
        *0x1d618 = uVar6;
        in_stack_ffffffffffffff68 = uVar6;
        if ((*0x1c388 == '\0') || (*0x1d618 == 0)) {
            fcn.00013e38();
            uVar6 = *0x1d618;
        }
        uVar5 = uVar6;
        if ((*0x1c388 == '\0') && (uVar5 == 1)) {
            auStack_80[0] = 3;
            fcn.00017a80(arg1,CONCAT71(iVar7 >> 8,0x10),auStack_80);
            uVar5 = *0x1d618;
        }
        *0x1c388 = '\x01';
        if (uVar5 == 0) {
            (**(*0x1c468 + 0x110))(*0x1c380,0,0);
            (**(*0x1c468 + 0x98))(*0x1c380,0x1b8b0,&iStack_a0);
            (**(iStack_a0 + 0x78))(iStack_a0,4,0,auStack_88);
            (**(iStack_a0 + 0x78))(iStack_a0,2,auStack_88[0] & 0x700 | 0x18,0);
            uVar5 = *0x1d618;
        }
        if (uVar5 == 2) {
            uStack_a8 = *0x40;
            *0x40 = 0xf000f065;
        }
    }
    iVar7 = *(arg3 + 4) * 0x10;
    piVar12 = *(iVar7 + 0x18) + iVar7;
    if ((((*piVar12 == 0x52494350) && (2 < *(piVar12 + 3))) && (*(piVar12 + 0x1a) != 0)) && (arg2 != 0)) {
        (**(*0x1c468 + 0x40))(4,0x14,&iStackX_8);
        *CONCAT62(StackX_a,iStackX_8) = arg2;
        *(CONCAT62(StackX_a,iStackX_8) + 8) = *(arg3 + 4);
        *(CONCAT62(StackX_a,iStackX_8) + 10) = *(piVar12 + 0x1a);
        *(CONCAT62(StackX_a,iStackX_8) + 0xc) = 0x14eb0;
        (**(*0x1c468 + 0x80))(&stack0xffffffffffffff70,0x1bc90,0,CONCAT62(StackX_a,iStackX_8));
    }
    uVar1 = *0x40e;
    arg_58h = arg2;
    uVar5 = *(*0x40e << 4);
    uStackX_10 = *0x413;
    (**(*0x1c468 + 0x168))(auStack_80,0x30);
    auStack_80[0] = 5;
    uVar15 = 0;
    uStack_64 = arg3 >> 4 & 0xf000;
    iStack_7c = arg3;
    uVar14 = 0;
    fcn.00017c10(arg1,*(arg1 + 0xa8),*(arg1 + 0xaa),auStack_80,in_stack_ffffffffffffff68,arg_58h);
    uVar2 = *0x40e;
    iStackX_8 = iStack_7c;
    iVar7 = *(iStackX_20 + 2) << 9;
    uVar11 = 0;
    if (*0x40e < uVar1) {
        uVar11 = *(*0x40e << 4) * 0x400 + uVar5 * -0x400;
        piVar8 = *0x1c320;
        if (*0x1c320 != NULL) {
            while( true ) {
                piVar9 = piVar8;
                piVar8 = piVar9 + -0x29;
                if (*piVar8 == 0) break;
                if (*(piVar9 + -5) != '\0') {
                    if (*(piVar9 + -0x11) != 0) {
                        *(piVar9 + -0x11) = *(piVar9 + -0x11) - ((uVar1 - uVar2) * 0x10 & 0xffffffff);
                    }
                }
            }
        }
    }
    uVar13 = 0;
    if (iVar7 != 0x1fe00) {
        uVar13 = iVar7;
    }
    if (in_stack_00000038 != NULL) {
        if ((iStack_7c != 0) || (uVar3 = uVar10, uVar13 == 0)) {
            uVar3 = 0;
        }
        *in_stack_00000038 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar13;
    }
    if (in_stack_00000028 == '\0') {
        if (*0x1d618 != 1) {
            fcn.00013d58();
        }
        if (*0x1d618 == 2) {
            *0x40 = uStack_a8;
        }
        if (*0x1d618 == 0) {
            (**(*0x1c468 + 0x110))(*0x1c380,0,0);
            iVar7 = CONCAT71(iVar7 >> 8,1);
            (**(*0x1c468 + 0x108))(*0x1c380,0,0,iVar7,uVar14,uVar15);
        }
        if (*0x1d618 != 1) {
            fcn.00013c10();
        }
        if (*(arg1 + 0xb4) != *(iStackX_18 + 8)) {
            *(arg1 + 0xb4) = *(iStackX_18 + 8);
        }
        if ((iStackX_8 == 0) && (uVar13 != 0)) {
            if (uVar11 == 0) {
                uVar10 = 0;
                uVar11 = (uStackX_10 - *0x413) * 0x400;
                if (uVar11 != 0) {
                    arg2_00 = *0x413 << 10;
                }
            }
            else {
                arg2_00 = uVar2 * 0x10 + uVar5 * 0x400;
            }
            fcn.00014138(iStackX_20,arg2_00,uVar11,CONCAT71(iVar7 >> 8,uVar10));
        }
    }
    return 0;
}


/* fcn.00014478 @ 0x14478 */

void fcn.00014478(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    ushort *puVar2;
    char cVar3;
    int16_t iVar4;
    ushort *puVar5;
    uint16_t uVar6;
    int *piVar7;
    char cVar8;
    int16_t iVar9;
    int64_t iVar10;
    int *piVar11;
    ushort uVar12;
    uint64_t uVar13;
    uint8_t uVar14;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    char in_stack_00000040;
    char in_stack_00000048;
    int64_t in_stack_00000050;
    uchar auStack_78 [24];
    uint64_t uStack_60;
    
    puVar2 = *(arg1 + 0xac);
    uVar14 = *(arg1 + 0xb4);
    *0x1c38a = 1;
    if ((arg4 == 0 && in_stack_00000028 == 0) && in_stack_00000030 == 0) {
code_r0x00014522:
        iVar9 = 6;
    }
    else {
        cVar3 = *(arg3 + 0xb);
        if (cVar3 != '\x01') {
            if ((cVar3 == '\x02') || (cVar3 == '\x06')) goto code_r0x00014522;
            if (cVar3 == '\b') {
                iVar9 = 2;
                if (*(arg3 + 10) != '\x05') {
                    iVar9 = 0xff;
                }
                goto code_r0x0001452a;
            }
            if (cVar3 == '\f') {
                iVar9 = 0x80;
                goto code_r0x0001452a;
            }
            if (cVar3 != '\x0e') {
                iVar9 = 0xff;
                goto code_r0x0001452a;
            }
        }
        iVar9 = 2;
    }
code_r0x0001452a:
    uVar6 = *(arg2 + 0x1a);
    cVar3 = *0x1c389;
    do {
        if ((cVar3 != '\0') || (piVar11 = uVar6 + arg2, *piVar11 != 0x506e5024)) {
            *(arg1 + 0xb4) = uVar14;
            *0x1c38a = 0;
            return;
        }
        cVar8 = '\0';
        uStack_60 = 0x20;
        piVar7 = piVar11;
        do {
            cVar8 = cVar8 + *piVar7;
            piVar7 = piVar7 + 1;
            uStack_60 = uStack_60 - 1;
        } while (uStack_60 != 0);
        if ((cVar8 == '\0') &&
           ((((iVar1 = *(piVar11 + 0x16), iVar1 != 0 || (*(piVar11 + 0x1a) != 0)) || (in_stack_00000040 != '\0')) ||
            (in_stack_00000048 != '\0')))) {
            iVar4 = iVar9;
            if (iVar9 == 2) {
                if (iVar1 == 0) {
                    if (*(piVar11 + 0x1a) != 0) {
                        iVar4 = 3;
                    }
                    goto code_r0x000145ae;
                }
code_r0x000145b3:
                iVar4 = 2;
            }
            else {
code_r0x000145ae:
                if (iVar1 != 0) goto code_r0x000145b3;
            }
            uVar13 = uVar14;
            iVar10 = uVar13 * 0x45;
            *(iVar10 + 0x14 + puVar2) = iVar4;
            *(iVar10 + 6 + puVar2) = in_stack_00000028;
            *(iVar10 + 10 + puVar2) = in_stack_00000030;
            *(iVar10 + 2 + puVar2) = arg4;
            *(iVar10 + 0xe + puVar2) = *(arg3 + 0xb);
            *(iVar10 + 0xf + puVar2) = *(arg3 + 10);
            uVar12 = arg2 >> 4;
            *(iVar10 + 0x1e + puVar2) = uVar12;
            *(iVar10 + 0x1c + puVar2) = piVar11[4];
            *(iVar10 + 0x12 + puVar2) = uVar12;
            *(iVar10 + 0x10 + puVar2) = *(piVar11 + 0xe);
            *(iVar10 + puVar2) = 0xfffe;
            *(iVar10 + 0x1a + puVar2) = uVar12;
            (**(*0x1c4b0 + 0x38))(0,auStack_78);
            if ((uStack_60 >> 0xd & 1) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_60 & 0xffffffffffffdfff);
            }
            if (in_stack_00000040 != '\0') {
                *(iVar10 + 0x28 + puVar2) = *(in_stack_00000050 + 0x60);
                *(iVar10 + 0x18 + puVar2) = *(in_stack_00000050 + 0x60);
            }
            if (in_stack_00000048 != '\0') {
                *(iVar10 + 0x2c + puVar2) = *(in_stack_00000050 + 100);
                *(iVar10 + 0x18 + puVar2) = *(in_stack_00000050 + 100);
            }
            if ((uStack_60 >> 0xd & 1) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000);
            }
            if (*(piVar11 + 0x16) != 0) {
                *(iVar10 + 0x18 + puVar2) = *(piVar11 + 0x16);
                fcn.00014244(arg1,arg3,arg2 >> 4 & 0xffff,*(piVar11 + 0x16));
            }
            if (((*(piVar11 + 0x1a) != 0) && (in_stack_00000040 == '\0')) && (in_stack_00000048 == '\0')) {
                *(iVar10 + 0x18 + puVar2) = *(piVar11 + 0x1a);
            }
            if ((*0x1d5c6 == '\0') && (in_stack_00000048 != '\0')) {
                if (uVar14 != 0) {
                    puVar5 = puVar2;
                    do {
                        *puVar5 = 0xffff;
                        puVar5 = puVar5 + 0x45;
                        uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                }
                *0x1c389 = '\x01';
            }
            uVar14 = uVar14 + 1;
            cVar3 = *0x1c389;
        }
        uVar6 = *(piVar11 + 6);
    } while( true );
}


/* fcn.0001219c @ 0x1219c */

int64_t fcn.0001219c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint uVar2;
    int64_t iVar3;
    int *piVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint16_t uVar12;
    uint16_t *puVar13;
    uint64_t uVar14;
    uint *puVar15;
    uint8_t uStack_138;
    uint8_t uStack_137;
    char acStack_136 [2];
    uchar auStack_134 [2];
    char cStack_132;
    char cStack_131;
    uchar auStack_130 [8];
    int64_t in_stack_fffffffffffffed8;
    int32_t in_stack_fffffffffffffee0;
    uint uStack_11c;
    int64_t iStack_118;
    uint64_t uStack_110;
    int32_t in_stack_fffffffffffffef8;
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    uchar auStack_d8 [8];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar auStack_c0 [8];
    uchar auStack_b8 [8];
    uchar auStack_b0 [8];
    uchar auStack_a8 [4];
    uint8_t uStack_a4;
    uint8_t uStack_a3;
    uint8_t uStack_a2;
    uchar auStack_98 [8];
    ushort auStack_90 [24];
    uchar auStack_60 [24];
    uint64_t uStack_48;
    
    uVar14 = 0;
    iStack_f8 = 0;
    fcn.0001ab10(1,0x3051002);
    uStack_e0 = 1;
    iVar3 = (**(*0x1c470 + 0x48))(L"SecureBoot",0x1ba20,0,&uStack_e0,acStack_136);
    if ((iVar3 < 0) || (acStack_136[0] == '\0')) {
        iVar3 = (**(*0x1c468 + 0x138))(2,0x1b810,0,&uStack_110,&iStack_118);
        if ((-1 < iVar3) && (uVar11 = 0, uStack_110 != 0)) {
            do {
                iVar3 = (**(*0x1c468 + 0x98))(*(iStack_118 + uVar11 * 8),0x1b8a0,auStack_d8);
                if (-1 < iVar3) {
                    iVar3 = (**(*0x1c468 + 0xb8))(0x1b8b0,auStack_d8,&iStack_d0);
                    if ((iVar3 < 0) || (iStack_d0 != (*0x1c338)[0x12])) {
                        (**(*0x1c468 + 0x98))(*(iStack_118 + uVar11 * 8),0x1b810,&iStack_c8);
                        (**(iStack_c8 + 0x30))(iStack_c8);
                    }
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < uStack_110);
        }
        if (*0x449 != '\x03') {
            auStack_90[0] = 3;
            (***0x1c338)(*0x1c338,0x10,auStack_90);
        }
        (**(*0x1c470 + 0x18))(auStack_a8,0);
        *0x470 = 0;
        uVar7 = 0x1b790;
        *0x46c = (((uStack_a4 * 0x3c + uStack_a3) * 0x3c + uStack_a2 + 1) * 0xb6) / 10;
        *0x478 = 0x14141414;
        *0x47c = 0x1010101;
        iVar3 = (**(*0x1c468 + 0x140))(0x1b790,0,auStack_c0);
        if (-1 < iVar3) {
            fcn.00017624(CONCAT71(uVar7 >> 8,1),&uStack_137,auStack_c0,in_stack_fffffffffffffef8);
        }
        uStack_137 = uStack_137 & 0xf0;
        iVar3 = (**(*0x1c468 + 0x140))(0x1b790,0,auStack_b8);
        if (-1 < iVar3) {
            fcn.00017624(0,&uStack_137,auStack_b8,in_stack_fffffffffffffef8);
        }
        iVar3 = (**(*0x1c468 + 0x140))(0x1b790,0,&stack0xfffffffffffffed8);
        if (-1 < iVar3) {
            (**(in_stack_fffffffffffffed8 + 0x28))(in_stack_fffffffffffffed8,0,0x61,1,&uStack_138);
            uStack_138 = uStack_138 & 0xf3;
            (**(in_stack_fffffffffffffed8 + 0x30))(in_stack_fffffffffffffed8,0,0x61,1,&uStack_138);
            uStack_138 = 0xd;
            (**(in_stack_fffffffffffffed8 + 0x30))(in_stack_fffffffffffffed8,0,0x70,1,&uStack_138);
        }
        uStack_48 = 0;
        (**(*0x1c4b0 + 0x38))(0,auStack_60);
        if ((uStack_48 >> 0xd & 1) != 0) {
            (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_48 & 0xffffffffffffdfff);
        }
        uVar11 = 0;
        if (*0x1d641 != 0) {
            piVar4 = 0x1d641;
            uVar8 = uVar14;
            do {
                uVar11 = uVar11 + 1;
                *(iStack_f8 + *(uVar8 + 0x1d640) * 4) = *piVar4;
                uVar8 = uVar11 * 5;
                piVar4 = uVar8 + 0x1d641;
            } while (*piVar4 != 0);
        }
        (**(arg1 + 0x38))(arg1);
        if (*0x1c330 == 0) {
            (**(*0x1c468 + 0x40))(4,*(*0x1c338 + 0xb4) * 0x45,0x1c330);
            uVar6 = 0;
            uVar1 = *(*0x1c338 + 0xb4);
            uVar11 = uVar1;
            if (uVar1 != 0) {
                puVar13 = *(*0x1c338 + 0xac);
                do {
                    if ((uVar6 < *puVar13) && (*puVar13 < 0xfffc)) {
                        uVar6 = *puVar13;
                    }
                    puVar13 = puVar13 + 0x45;
                    uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
            }
            uVar11 = 0;
            puVar9 = *0x1c338;
            if (uVar1 != 0) {
                do {
                    if (*(uVar11 * 0x45 + *(puVar9 + 0xac)) == -2) {
                        uVar6 = uVar6 + 1;
                        *(uVar11 * 0x45 + *(puVar9 + 0xac)) = uVar6;
                        puVar9 = *0x1c338;
                    }
                    uVar12 = uVar11 + 1;
                    uVar11 = uVar12;
                } while (uVar12 < *(puVar9 + 0xb4));
            }
            uVar1 = *(puVar9 + 0xb4);
            iVar3 = *0x1c330;
            iVar10 = *(puVar9 + 0xac);
        }
        else {
            uVar6 = 0xffff;
            uVar8 = 0;
            uVar11 = *0x40e;
            uVar5 = 0;
            if (*(*0x1c338 + 0xb4) != 0) {
                puVar13 = *(*0x1c338 + 0xac);
                do {
                    if (*puVar13 < uVar6) {
                        uVar8 = uVar5;
                        uVar6 = *puVar13;
                    }
                    uVar12 = uVar5 + 1;
                    uVar5 = uVar12;
                    puVar13 = puVar13 + 0x45;
                } while (uVar12 < *(*0x1c338 + 0xb4));
            }
            *(uVar11 * 0x10 + 0x90) = *(uVar8 * 0x45 + *0x1c330);
            *(uVar11 * 0x10 + 0xf8) = 0;
            uVar1 = *(*0x1c338 + 0xb4);
            iVar3 = *(*0x1c338 + 0xac);
            iVar10 = *0x1c330;
        }
        (**(*0x1c468 + 0x160))(iVar3,iVar10,uVar1 * 0x45);
        (**(*0x1c468 + 0x138))(2,0x1b8b0,0,&stack0xfffffffffffffef8,&iStack_100);
        uVar11 = uVar14;
        if (CONCAT44(uStack_104,in_stack_fffffffffffffef8) != 0) {
            do {
                (**(*0x1c468 + 0x98))(*(iStack_100 + uVar11 * 8),0x1b8b0,&stack0xfffffffffffffee0);
                (**(CONCAT44(uStack_11c,in_stack_fffffffffffffee0) + 0x30))
                          (CONCAT44(uStack_11c,in_stack_fffffffffffffee0),2,8,1,auStack_134);
                if ((((cStack_131 != '\x03') || (cStack_132 != '\0')) &&
                    ((cStack_131 != '\0' || (cStack_132 != '\x01')))) &&
                   ((cStack_131 != '\x01' || (cStack_132 != '\x01')))) {
                    (**(CONCAT44(uStack_11c,in_stack_fffffffffffffee0) + 0x78))
                              (CONCAT44(uStack_11c,in_stack_fffffffffffffee0),4,0,auStack_b0);
                    (**(CONCAT44(uStack_11c,in_stack_fffffffffffffee0) + 0x78))
                              (CONCAT44(uStack_11c,in_stack_fffffffffffffee0),2,auStack_b0._0_4_ & 0x700);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < CONCAT44(uStack_104,in_stack_fffffffffffffef8));
        }
        (**(*0x1c468 + 0x48))(iStack_100);
        (**(*0x1c468 + 0x140))(0x1b960,0,&iStack_f0);
        fcn.00013e38();
        fcn.0001a98c(0x1b990);
        fcn.0001a98c(0x1b7f0);
        (**(iStack_f0 + 8))(iStack_f0,0);
        (**((*0x1c338)[0xd] + 0x30))
                  ((*0x1c338)[0xd],arg2,*(*0x1c338 + 0xac),arg3 & 0xffffffff,arg4,(*0x1c338)[0x14] + 0x3040);
        fcn.00011d3c(arg1,auStack_130,auStack_98);
        (**((*0x1c338)[0xc] + 0x10))((*0x1c338)[0xc],0xc0000,0x40000,0);
        uVar7 = 0;
        fcn.00013bbc(0x1b850,0);
        fcn.00011990(arg1,CONCAT71(uVar7 >> 8,-(*0x1c960 != '\0')) & 0xffffffffffffff02);
        (**((*0x1c338)[0xf] + 8))((*0x1c338)[0xf],0,0,0x1baf0,0);
        *0x1c328 = (**(*0x1c468 + 0x18))(0x1f);
        puVar15 = 0x1c920;
        iVar3 = 8;
        do {
            iVar10 = *0x1d690 + uVar14;
            uVar2 = *puVar15;
            uVar14 = uVar14 + 1;
            puVar15 = puVar15 + 1;
            *(iStack_f8 + iVar10 * 4) = uVar2;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        (**(*0x1c338)[0xf])((*0x1c338)[0xf],CONCAT71(iVar10 >> 8,8),CONCAT71(uVar14 >> 8,0x70));
        iVar3 = fcn.0001ac24(arg2 + 4,0x1ba00);
        if (iVar3 == 0) {
            if ((uStack_48 >> 0xd & 1) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000);
            }
            iVar3 = -0x7ffffffffffffff2;
        }
        else {
            (**(*0x1c468 + 0x168))(auStack_90,0x30);
            uVar7 = 0;
            auStack_90[0] = 3;
            fcn.00017c10(*0x1c338,*(*0x1c338 + 0x15),*(*0x1c338 + 0xaa),auStack_90,in_stack_fffffffffffffed8,
                         in_stack_fffffffffffffee0);
            (**(*0x1c468 + 0x18))(0x1f);
            (**(*0x1c338)[0xf])((*0x1c338)[0xf],0x58,0x70);
            (**((*0x1c338)[0xf] + 0x10))((*0x1c338)[0xf],0,0,0x1baf0,0,uVar7);
            (**(*0x1c468 + 0x20))(*0x1c328);
            if ((uStack_48 >> 0xd & 1) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000);
            }
            (**(iStack_f0 + 8))(iStack_f0,10000);
            iVar3 = (**(*0x1c468 + 0x170))(0x200,8,0x1aa04,0,0x1bac0,&uStack_e8);
            if (-1 < iVar3) {
                (**(*0x1c468 + 0x68))(uStack_e8);
                (**(*0x1c468 + 0x70))(uStack_e8);
                if (*0x1c380 != 0) {
                    (**(*0x1c468 + 0x110))(*0x1c380,0,0);
                    (**(*0x1c468 + 0x108))(*0x1c380,0,0,1);
                }
                fcn.00013c10();
                (**(*0x1c468 + 0x160))(*(*0x1c338 + 0xac),*0x1c330,*(*0x1c338 + 0xb4) * 0x45);
                iVar3 = 0;
            }
        }
    }
    else {
        iVar3 = -0x7fffffffffffffe6;
    }
    return iVar3;
}


/* fcn.0001b670 @ 0x1b670 */

int64_t fcn.0001b670(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00013350 @ 0x13350 */

uint8_t fcn.00013350(int64_t arg1)

{
    int64_t iVar1;
    uint8_t auStackX_10 [8];
    ulong uStackX_18;
    uchar auStackX_20 [8];
    
    uStackX_18 = 2;
    iVar1 = (**(*0x1c470 + 0x48))(L"SIO_DEV_STATUS_VAR",0x1bc78,0,&uStackX_18,auStackX_10);
    if (iVar1 < 0) {
        iVar1 = fcn.000131d0(arg1 & 0xffffffff,auStackX_20);
        auStackX_10[0] = -1 < iVar1;
    }
    else {
        auStackX_10[0] = '\x01' << (*(arg1 * 0x20 + 0x1bbc0) & 0x1f) & auStackX_10[0];
    }
    return auStackX_10[0];
}


/* fcn.000133c8 @ 0x133c8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

uint64_t fcn.000133c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    ushort uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint8_t *puVar7;
    uint64_t uVar8;
    char cVar9;
    char *pcStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_58;
    uint8_t *puStack_50;
    uint64_t auStack_48 [2];
    int64_t var_bp_20h;
    int64_t var_18h;
    uint32_t var_10h;
    
    iVar4 = *0x1c468;
    *arg3 = 0;
    *arg4 = 0;
    iStackX_20 = 0;
    pcStackX_18 = NULL;
    iStack_58 = 0;
    cVar9 = -1;
    uVar3 = (**(iVar4 + 0x138))(2,0x1b920,0,auStack_48,&iStackX_20);
    if (-1 < uVar3) {
        uVar8 = 0;
        if (auStack_48[0] != 0) {
            do {
                iVar4 = (**(*0x1c468 + 0x98))(*(iStackX_20 + uVar8 * 8),0x1b8a0,&pcStackX_18);
                if ((-1 < iVar4) && (pcStackX_18 != NULL)) {
                    for (; *pcStackX_18 != '\x7f'; pcStackX_18 = pcStackX_18 + pcStackX_18[3] * 0x100 + pcStackX_18[2])
                    {
                        if (((((*pcStackX_18 == '\x02') && (pcStackX_18[1] == '\x01')) &&
                             (*(pcStackX_18 + 4) == ((arg1 & 0xffffU) << 0x10 | 0x41d0))) &&
                            ((arg1 != 0x501 || (cVar9 = cVar9 + '\x01', cVar9 == arg2)))) &&
                           (iVar4 = (**(*0x1c468 + 0x98))(*(iStackX_20 + uVar8 * 8),0x1b920,&iStack_58), -1 < iVar4))
                        {
                            puStack_50 = NULL;
                            iVar4 = (**(iStack_58 + 8))(iStack_58,&puStack_50);
                            if ((-1 < iVar4) && (puVar7 = puStack_50, puStack_50 != NULL)) {
                                for (; uVar1 = *puVar7, uVar1 != 0x79; puVar7 = puVar7 + (uVar1 & 7) + 1) {
                                    uVar5 = uVar1 >> 3 & 0xf;
                                    if (uVar5 == 4) {
                                        if (*arg4 == '\0') {
                                            uVar6 = 0;
                                            do {
                                                if ((*(puVar7 + 1) >> (uVar6 & 0xf) & 1) != 0) {
                                                    *arg4 = uVar6;
                                                    break;
                                                }
                                                uVar5 = uVar6 + 1;
                                                uVar6 = uVar5;
                                            } while (uVar5 < 0x10);
                                        }
code_r0x00013558:
                                        if (*arg3 != 0) goto code_r0x0001355d;
                                    }
                                    else {
                                        if (uVar5 == 8) {
                                            if (*arg3 == 0) {
                                                uVar2 = *(puVar7 + 2);
code_r0x00013526:
                                                *arg3 = uVar2;
                                                goto code_r0x00013558;
                                            }
                                        }
                                        else {
                                            if (uVar5 != 9) goto code_r0x00013558;
                                            if (*arg3 == 0) {
                                                uVar2 = *(puVar7 + 1);
                                                goto code_r0x00013526;
                                            }
                                        }
code_r0x0001355d:
                                        uVar3 = 0;
                                        if (*arg4 != '\0') goto code_r0x000135b4;
                                    }
                                }
                            }
                        }
                    }
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < auStack_48[0]);
        }
        uVar3 = 0x800000000000000e;
code_r0x000135b4:
        (**(*0x1c468 + 0x48))(iStackX_20);
    }
    return uVar3;
}


/* fcn.0001aa38 @ 0x1aa38 */

ulong fcn.0001aa38(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*0x1c478 + 0x68);
    iVar3 = *(*0x1c478 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.0001ac24(iVar3,arg1);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.000167d8 @ 0x167d8 */

ulong fcn.000167d8(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint16_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    ulong uVar8;
    uint16_t auStack_48 [2];
    ushort uStack_44;
    int64_t in_stack_ffffffffffffffc8;
    int32_t in_stack_ffffffffffffffd0;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    iVar1 = *(*0x1c338 + 0xa0);
    uVar5 = (*(iVar4 + 2) << 5 | *(iVar4 + 6)) << 3 | *(iVar4 + 10);
    do {
        uVar6 = uVar7;
        if (*(uVar7 * 2 + 0x1c740) == 0) break;
        if (uVar5 == *(uVar7 * 2 + 0x1c740)) goto code_r0x000169b5;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
    } while (uVar6 < 0x18);
    if (uVar6 == 0x18) {
        uVar3 = 0x8000000000000009;
    }
    else {
        *(iVar1 + 0x6191) = *(iVar4 + 2);
        *(iVar1 + 0x6192) = *(iVar4 + 6) << 3 | *(iVar4 + 10);
        *(iVar1 + 0x6193) = 0x100;
        *(iVar1 + 0x6195) = 1;
        uVar2 = 0x8a;
        if (*(iVar4 + 0x14) != '\x0e') {
            uVar2 = 0x8f;
        }
        *(iVar1 + 0x6196) = uVar2;
        *(iVar1 + 0x6197) = *(iVar4 + 0x14);
        *(iVar1 + 0x6198) = 0;
        *(iVar1 + 0x6199) = *(iVar4 + 0x10);
        *(iVar1 + 0x619b) = *(iVar4 + 0xe);
        *(iVar1 + 0x619d) = *(iVar4 + 0x12);
        *(iVar1 + 0x619f) = *(arg2 + 0x14);
        *(iVar1 + 0x61a0) = 0;
        *(iVar1 + 0x61a1) = *(arg2 + 0x10);
        *(iVar1 + 0x61a3) = *(arg2 + 0xe);
        *(iVar1 + 0x61a5) = *(arg2 + 0x12);
        (**(*0x1c468 + 0x168))(auStack_48,0x30);
        uStack_44 = SUB82(iVar1 + 0x6191,0);
        auStack_48[0] = 8;
        (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_18);
        uVar8 = 0;
        uVar3 = 0;
        fcn.00017c10(*0x1c338,*(*0x1c338 + 0xa8),*(*0x1c338 + 0xaa),auStack_48,in_stack_ffffffffffffffc8,
                     in_stack_ffffffffffffffd0);
        if (-1 < ((auStack_48[0] & 0x7fff | 0x8000000000000000) & -(auStack_48[0] != 0))) {
            *(uVar6 * 2 + 0x1c740) = uVar5;
        }
        (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_18,uVar3,uVar8);
code_r0x000169b5:
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011b54 @ 0x11b54 */

//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_28h_2
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_eh

uint64_t fcn.00011b54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t *noname_4,ulong noname_5,
                     int64_t arg_40h)

{
    uint32_t uVar1;
    bool bVar2;
    uchar auStackX_10 [8];
    int64_t var_28h;
    ulong uVar3;
    ulong uVar4;
    uint16_t auStack_48 [2];
    uint16_t uStack_44;
    ushort uStack_40;
    ushort uStack_3c;
    int64_t var_30h;
    int16_t var_28h_2;
    int16_t var_24h;
    uint16_t uStack_26;
    int16_t var_eh;
    
    (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_10);
    (**(*0x1c468 + 0x168))(auStack_48,0x30);
    uVar4 = 0;
    uVar3 = 0;
    auStack_48[0] = 6;
    uStack_44 = arg3;
    uStack_40 = arg2;
    uStack_3c = arg4;
    fcn.00017c10(arg1,*(*0x1c338 + 0xa8),*(*0x1c338 + 0xaa),auStack_48,var_30h,_var_28h_2);
    uVar1 = auStack_48[0];
    bVar2 = auStack_48[0] != 0;
    *noname_4 = uStack_26 * 0x10 + uStack_44;
    (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),*0x1d620 + 1,0xfffff - *0x1d620,auStackX_10,uVar3,uVar4);
    return -bVar2 & (uVar1 & 0x7fff | 0x8000000000000000);
}


/* fcn.000169cc @ 0x169cc */

//WARNING: Variable defined which should be unmapped: var_3h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_bp_30h
//WARNING: Variable defined which should be unmapped: var_39h

ulong fcn.000169cc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int16_t *piVar3;
    char *pcVar4;
    int16_t iVar5;
    uint16_t uVar6;
    uint16_t *puVar7;
    uint16_t *puVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint uVar12;
    uint uVar13;
    uchar uVar14;
    uchar uVar15;
    uint16_t uVar16;
    uint uVar17;
    int aiStackX_18 [2];
    int aiStackX_20 [2];
    uint32_t var_77h;
    uint32_t var_7fh;
    uint auStack_f8 [2];
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [8];
    int16_t iStack_d8;
    unkbyte6 Stack_d6;
    int16_t iStack_d0;
    unkbyte6 Stack_ce;
    int16_t iStack_c8;
    unkbyte6 Stack_c6;
    int64_t *piStack_c0;
    uint64_t uStack_b8;
    ulong uStack_b0;
    int64_t aiStack_a8 [2];
    uchar auStack_98 [9];
    uint8_t uStack_8f;
    char cStack_8e;
    char cStack_8d;
    uint16_t uStack_88;
    uint16_t uStack_84;
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    uint32_t var_59h;
    uchar uStack_5c;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_39h;
    int8_t var_bp_30h;
    int8_t var_2fh;
    uint32_t var_2eh;
    int16_t var_29h;
    int16_t var_25h;
    int16_t var_21h;
    int16_t var_1dh;
    int16_t var_19h;
    int8_t var_3h;
    
    auStack_f8[0] = 0x200;
    piStack_c0 = 0x1c780;
    (**(*0x1c468 + 0x168))(0x1c780,0x180);
    iVar1 = (**(*0x1c468 + 0x138))(2,0x1b7b0,0,&uStack_b8,arg1);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar9 = 0;
        if (uStack_b8 != 0) {
            do {
                (**(*0x1c468 + 0x98))(*(*arg1 + uVar9 * 8),0x1b7b0,&iStack_f0);
                iVar1 = fcn.0001ac24(iStack_f0,0x1bcf0);
                if ((iVar1 == 0) &&
                   (iVar1 = (**(*0x1c468 + 0x98))(*(*arg1 + uVar9 * 8),0x1b9e0,aiStack_a8), -1 < iVar1)) {
                    (**(*0x1c468 + 0x98))(*(*arg1 + uVar9 * 8),0x1b8a0,auStack_e0);
                    iVar1 = (**(*0x1c468 + 0xb8))(0x1b8b0,auStack_e0,&uStack_b0);
                    if (-1 < iVar1) {
                        (**(*0x1c468 + 0x98))(uStack_b0,0x1b8b0,&iStack_e8);
                        (**(iStack_f0 + 0x28))(iStack_f0,aiStackX_18,aiStackX_20);
                        (**(iStack_e8 + 0x70))(iStack_e8,&var_51h + 1,&iStack_c8,&iStack_d0,&iStack_d8);
                        uVar11 = 0;
                        iVar5 = (iStack_c8 * 0x20 + iStack_d0) * 8 + iStack_d8;
                        if (*0x1c3b1 != 0) {
                            piVar3 = 0x1c6e0;
                            do {
                                if (*piVar3 == iVar5) goto code_r0x00016bb4;
                                uVar11 = uVar11 + 1;
                                piVar3 = piVar3 + 3;
                            } while (uVar11 < *0x1c3b1);
                        }
                        iVar1 = *0x1c3b1 * 3;
                        *(iVar1 + 0x1c6e0) = iVar5;
                        *(iVar1 + 0x1c6e2) = *0x1c3b1;
                        *0x1c3b1 = *0x1c3b1 + 1;
code_r0x00016bb4:
                        (**(iStack_e8 + 0x30))(iStack_e8,2,0,0x10,auStack_98);
                        if (((cStack_8d == '\x01') && (cStack_8e != '\x04')) &&
                           ((cStack_8e != '\x06' ||
                            ((pcVar4 = fcn.0001abf4(auStack_e0._0_4_), *pcVar4 != '\x03' || (pcVar4[1] != '\x12'))))))
                        {
                            if ((uStack_8f & 1) == 0) {
                                uVar10 = 0x1f0;
                                uVar6 = 0x3f6;
                                uVar15 = 0xe;
                                uVar14 = 0xf;
                                uVar16 = 0x170;
                                iVar5 = 0x376;
                            }
                            else {
                                uVar6 = (uStack_84 & 0xfffe) + 2;
                                uVar10 = uStack_88 & 0xfffe;
                                uVar16 = var_79h._1_2_ & 0xfffe;
                                iVar5 = (var_79h._5_2_ & 0xfffe) + 2;
                                uVar14 = uStack_5c;
                                uVar15 = uStack_5c;
                            }
                            uVar11 = 0;
                            puVar7 = arg2;
                            do {
                                if (((*(puVar7 + 1) == 0) && (*(puVar7 + 3) == 0)) && (*(puVar7 + 5) == 0)) {
                                    puVar7[9] = var_71h._1_2_ & 0xfffe;
                                    *(puVar7 + 10) = uVar15;
                                    *puVar7 = 1;
                                    uVar17 = CONCAT62(Stack_c6,iStack_c8);
                                    *(puVar7 + 1) = uVar17;
                                    uVar13 = CONCAT62(Stack_ce,iStack_d0);
                                    *(puVar7 + 3) = uVar13;
                                    uVar12 = CONCAT62(Stack_d6,iStack_d8);
                                    *(puVar7 + 5) = uVar12;
                                    puVar7[7] = uVar10;
                                    puVar7[8] = uVar6;
                                    *(puVar7 + 0x429) = uVar14;
                                    *(puVar7 + 0x415) = 2;
                                    *(puVar7 + 0x417) = uVar17;
                                    *(puVar7 + 0x41b) = uVar13;
                                    *(puVar7 + 0x41f) = uVar12;
                                    *(puVar7 + 0x423) = uVar16;
                                    *(puVar7 + 0x425) = iVar5;
                                    *(puVar7 + 0x427) = (var_71h._1_2_ & 0xfffe) + 8;
                                    puVar8 = puVar7 + 0x415;
                                    if (aiStackX_18[0] == 0) {
                                        puVar8 = puVar7;
                                    }
                                    goto code_r0x00016cc3;
                                }
                                if (((CONCAT62(Stack_c6,iStack_c8) == *(puVar7 + 1)) &&
                                    (CONCAT62(Stack_ce,iStack_d0) == *(puVar7 + 3))) &&
                                   (CONCAT62(Stack_d6,iStack_d8) == *(puVar7 + 5))) {
                                    puVar8 = puVar7;
                                    if (aiStackX_18[0] == 1) {
                                        puVar8 = puVar7 + 0x415;
                                    }
                                    goto code_r0x00016cc3;
                                }
                                uVar11 = uVar11 + 1;
                                puVar7 = puVar7 + 0x415;
                            } while (uVar11 < 0xc);
                            puVar8 = puVar7;
code_r0x00016cc3:
                            puVar7 = puVar8 + 0x15;
                            if (aiStackX_20[0] != 0) {
                                puVar7 = puVar8 + 0x215;
                            }
                            (**(iStack_f0 + 0x18))(iStack_f0,puVar7,auStack_f8);
                            uVar6 = *puVar7 & 0xc000;
                            if ((uVar6 == 0x8000) || (*(*(aiStack_a8[0] + 8) + 0xc) == 0x200)) {
                                *piStack_c0 = puVar7;
                                piStack_c0[1] = *(*arg1 + uVar9 * 8);
                                piStack_c0 = piStack_c0 + 2;
                                if (aiStackX_18[0] == 0) {
                                    *puVar8 = *puVar8 | 1;
                                }
                                else {
                                    *puVar8 = *puVar8 | 2;
                                }
                                if (aiStackX_20[0] == 0) {
                                    if (uVar6 != 0x8000) {
                                        *puVar8 = *puVar8 | 0x20;
                                    }
                                    else {
                                        *puVar8 = *puVar8 | 4;
                                    }
                                }
                                else if (uVar6 != 0x8000) {
                                    *puVar8 = *puVar8 | 0x40;
                                }
                                else {
                                    *puVar8 = *puVar8 | 8;
                                }
                                *(*0x1c338 + 0xb5) = *(*0x1c338 + 0xb5) + '\x01';
                            }
                        }
                    }
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < uStack_b8);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00016e40 @ 0x16e40 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Removing unreachable block (ram,0x00016ed1)
//WARNING: Removing unreachable block (ram,0x00016ef3)

ulong fcn.00016e40(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    uint8_t *arg2;
    uint8_t uVar3;
    uint32_t uStackX_8;
    int64_t var_17h;
    uchar *apuStackX_18 [2];
    int64_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    ulong in_stack_ffffffffffffff60;
    int64_t in_stack_ffffffffffffff68;
    uchar auStack_60 [24];
    uchar auStack_48 [7];
    int64_t var_39h;
    int64_t var_21h;
    int64_t var_1h;
    
    bVar1 = false;
    arg2 = arg1 + 0x415;
    uVar3 = 0;
    do {
        if (((arg2[-0x415] & 0x6c) != 0) || ((*arg2 & 0x6c) != 0)) {
            iVar2 = fcn.000167d8(arg2 + -0x415,arg2);
            if ((arg2[-0x401] == 7) || (arg2[0x14] == 7)) {
                bVar1 = true;
            }
            if (iVar2 < 0) break;
        }
        arg2 = arg2 + 0x82a;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    if (bVar1) {
        (**(*0x1c4b0 + 0x38))(0,&stack0xffffffffffffff68);
        iVar2 = fcn.00011b54(*0x1c338,5,2,0x10,apuStackX_18,in_stack_ffffffffffffff60,in_stack_ffffffffffffff68);
        if (-1 < iVar2) {
            fcn.0001375c(apuStackX_18[0],5,&var_17h + 1,&uStackX_8);
            _auStack_48 = 0;
            *apuStackX_18[0] = 0xea;
            *(apuStackX_18[0] + 1) = *0x3c;
            (**(*0x1c4b0 + 0x38))(0,auStack_60);
            if ((_auStack_48 & 0x2000) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000,_auStack_48 & 0xffffffffffffdfff);
            }
            *0x3c = (apuStackX_18[0] >> 4 & 0xf000) << 0x10 | apuStackX_18[0] & 0xffff;
            if ((_auStack_48 & 0x2000) != 0) {
                (**(*0x1c4b0 + 0x40))(0,0x1000);
            }
            fcn.00013818(var_17h._1_4_,uStackX_8);
        }
    }
    return 0;
}


/* fcn.00016fcc @ 0x16fcc */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00016fcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    char cVar1;
    uint16_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    uint32_t uVar7;
    uint64_t in_stack_00000028;
    char acStack_48 [33];
    int64_t var_1fh;
    int64_t var_17h;
    int64_t var_fh;
    int32_t var_7h;
    int16_t var_3h;
    int8_t var_1h;
    
    uVar2 = *(arg1 + 0x98);
    acStack_48[1] = '\0';
    acStack_48[2] = '\0';
    acStack_48[3] = '\0';
    acStack_48[4] = '\0';
    acStack_48[5] = '\0';
    acStack_48[6] = '\0';
    acStack_48[7] = '\0';
    acStack_48[8] = '\0';
    acStack_48[9] = '\0';
    acStack_48[10] = '\0';
    acStack_48[0xb] = '\0';
    acStack_48[0xc] = '\0';
    acStack_48[0xd] = '\0';
    acStack_48[0xe] = '\0';
    acStack_48[0xf] = '\0';
    acStack_48[0x10] = '\0';
    acStack_48[0x11] = '\0';
    acStack_48[0x12] = '\0';
    acStack_48[0x13] = '\0';
    acStack_48[0x14] = '\0';
    acStack_48[0x15] = '\0';
    acStack_48[0x16] = '\0';
    acStack_48[0x17] = '\0';
    acStack_48[0x18] = '\0';
    acStack_48[0x19] = '\0';
    acStack_48[0x1a] = '\0';
    acStack_48[0x1b] = '\0';
    acStack_48[0x1c] = '\0';
    acStack_48[0x1d] = '\0';
    acStack_48[0x1e] = '\0';
    acStack_48[0x1f] = 0;
    iVar5 = 0;
    acStack_48[0] = '\0';
    if (*0x1c3b1 < 2) {
        (**(*0x1c468 + 0x160))(acStack_48,"APAT     :",10);
    }
    else {
        (**(*0x1c468 + 0x160))(acStack_48,0x1be60,0xe);
        iVar5 = 4;
        uVar4 = 0;
        if (*0x1c3b1 != 0) {
            do {
                if (*(uVar4 * 3 + 0x1c6e0) == in_stack_00000028) {
                    acStack_48[0] = *(uVar4 * 3 + 0x1c6e2) + '0';
                    break;
                }
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
            } while (uVar3 < *0x1c3b1);
        }
    }
    if ((uVar2 != 0xffff) && ((uVar2 & 6) != 0)) {
        acStack_48[iVar5 + 1] = 'S';
    }
    if ((arg2 & 1U) == 0) {
        if ((arg2 & 2U) == 0) goto code_r0x000170dc;
        acStack_48[iVar5 + 7] = 'S';
    }
    else {
        acStack_48[iVar5 + 7] = 'P';
    }
    acStack_48[iVar5 + 6] = (-((arg2 & 0x24U) != 0) & 0xfaU) + 0x53;
code_r0x000170dc:
    (**(*0x1c468 + 0x160))(acStack_48 + iVar5 + 10,arg1 + 0x36,0x15 - iVar5);
    pcVar6 = acStack_48;
    uVar7 = 0;
    do {
        cVar1 = *pcVar6;
        uVar3 = uVar7 + 2;
        *pcVar6 = acStack_48[uVar7 + 1];
        pcVar6 = pcVar6 + 2;
        acStack_48[uVar7 + 1] = cVar1;
        uVar7 = uVar3;
    } while (uVar3 < 0x10);
    (**(*0x1c468 + 0x160))(arg3,acStack_48,0x20);
    *arg4 = arg3;
    *(arg4 + 2) = arg3 >> 4 & 0xf000;
    return;
}


/* fcn.000178c4 @ 0x178c4 */

uint64_t fcn.000178c4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    uint in_R9;
    uint64_t uVar2;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    uVar2 = 0;
    uVar1 = uVar2;
    if (arg2 != 0) {
        do {
            if (((*(arg1 + 8) - 0x100000U < 0x7ff00000) && (*arg1 == 7)) && (CONCAT44(in_R9,arg4) <= *(arg1 + 0x18))) {
                *in_stack_00000028 = *(arg1 + 8);
                *in_stack_00000030 = *(arg1 + 0x18);
                break;
            }
            arg1 = arg1 + arg3;
            uVar1 = uVar1 + 1;
        } while (uVar1 < arg2);
    }
    if (uVar1 == arg2) {
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.000184ec @ 0x184ec */

ulong fcn.000184ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    ulong uStack_18;
    uint uStack_10;
    ushort uStack_c;
    
    uStack_48 = *arg1;
    uStack_40 = *(arg1 + 8);
    iVar1 = 0;
    pcVar2 = 0x1b3f8;
    uStack_38 = *(arg1 + 0x10);
    uStack_30 = *(arg1 + 0x18);
    uStack_28 = *(arg1 + 0x20);
    uStack_24 = *(arg1 + 0x24);
    uStack_20 = *(arg1 + 0x28);
    uStack_1c = *(arg1 + 0x2c);
    uStack_18 = *(arg1 + 0x30);
    uStack_10 = *(arg1 + 0x38);
    uStack_c = *(arg1 + 0x3c);
    do {
        (*pcVar2)(&uStack_48,arg2);
        iVar1 = iVar1 + 1;
        pcVar2 = *(iVar1 * 8 + 0x1be90);
    } while (pcVar2 != NULL);
    return 0;
}


/* fcn.0001b6d0 @ 0x1b6d0 */

int64_t fcn.0001b6d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00019260 @ 0x19260 */

int64_t fcn.00019260(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    int64_t iStackX_8;
    int64_t iStackX_20;
    uint8_t *in_stack_00000028;
    uchar *in_stack_00000030;
    ushort *in_stack_00000038;
    
    uVar6 = *0x1c688;
    uVar7 = 0;
    uVar5 = *in_stack_00000028;
    if (*0x1c418 == '\0') {
        return -0x7ffffffffffffffa;
    }
    if (3 < uVar5) {
        return -0x7ffffffffffffffe;
    }
    uVar4 = 0;
    puVar3 = *0x1c698;
    if (*0x1c688 != 0) {
        do {
            if ((arg2 == *puVar3) && (arg3 << 3 == puVar3[1])) {
                uVar7 = puVar3[uVar5 * 3 + 2];
                if (in_stack_00000038 != NULL) {
                    *in_stack_00000038 = *(puVar3 + uVar5 * 3 + 3);
                }
                break;
            }
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 0x10;
        } while (uVar4 < *0x1c688);
    }
    uVar1 = *0x1c680;
    if (uVar4 == uVar6) {
        if (*0x1c680 != 0) {
            uVar6 = 0;
            uVar4 = 0;
            if (*0x1c680 != 0) {
                do {
                    uVar4 = uVar6;
                    if (*(uVar6 * 0xd + 0x1c4e0) == arg2) {
                        iVar2 = uVar6 * 0xd + (arg3 + uVar5 & 3) * 3;
                        uVar7 = *(iVar2 + 0x1c4e1);
                        if (in_stack_00000038 != NULL) {
                            *in_stack_00000038 = *(iVar2 + 0x1c4e2);
                        }
                        break;
                    }
                    uVar4 = uVar4 + 1;
                    uVar6 = uVar4;
                } while (uVar4 < *0x1c680);
            }
            if (uVar4 != uVar1) goto code_r0x00019398;
        }
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
code_r0x00019398:
        uVar6 = 0;
        do {
            uVar5 = uVar6;
            if (*(uVar6 + 0x1c2d8) == uVar7) break;
            uVar5 = uVar5 + 1;
            uVar6 = uVar5;
        } while (uVar5 < 8);
        if ((uVar5 == 8) || (uVar5 == 0xff)) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            iStackX_8 = arg1;
            iStackX_20 = arg4;
            iVar2 = (**(*0x1c468 + 0x140))(0x1b900,0,&iStackX_8);
            if ((-1 < iVar2) && (iVar2 = (**(iStackX_8 + 0x10))(iStackX_8,uVar5,&iStackX_20), -1 < iVar2)) {
                *in_stack_00000028 = uVar5;
                *in_stack_00000030 = iStackX_20;
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00018cc8 @ 0x18cc8 */

ulong fcn.00018cc8(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    uStack_30 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_48);
    if ((uStack_30 >> 0xd & 1) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
    }
    uVar1 = *0x417;
    if ((uStack_30 >> 0xd & 1) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    *arg1 = 0xc0;
    uVar2 = *arg1;
    if ((uVar1 & 0x10) != 0) {
        uVar2 = 0xc1;
    }
    *arg1 = uVar2;
    if ((uVar1 & 0x20) != 0) {
        *arg1 = *arg1 | 2;
    }
    if ((uVar1 & 0x40) != 0) {
        *arg1 = *arg1 | 4;
    }
    return 0;
}


/* fcn.00018d68 @ 0x18d68 */

ulong fcn.00018d68(int64_t arg1)

{
    uint16_t uVar1;
    uint uVar2;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    uStack_30 = 0;
    (**(*0x1c4b0 + 0x38))(0,auStack_48);
    if ((uStack_30 >> 0xd & 1) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
    }
    uVar1 = *0x417;
    if ((uStack_30 >> 0xd & 1) != 0) {
        (**(*0x1c4b0 + 0x40))(0,0x1000);
    }
    *arg1 = 0x80000000;
    uVar2 = *arg1;
    if ((uVar1 & 1) != 0) {
        uVar2 = 0x80000001;
    }
    *arg1 = uVar2;
    if ((uVar1 & 2) != 0) {
        *arg1 = *arg1 | 2;
    }
    if ((uVar1 & 4) != 0) {
        if ((uVar1 & 0x100) == 0) {
            *arg1 = *arg1 | 4;
        }
        else {
            *arg1 = *arg1 | 8;
        }
    }
    if ((uVar1 & 8) != 0) {
        if ((uVar1 & 0x200) == 0) {
            *arg1 = *arg1 | 0x10;
        }
        else {
            *arg1 = *arg1 | 0x20;
        }
    }
    if ((uVar1 & 0x400) != 0) {
        *arg1 = *arg1 | 0x200;
    }
    return 0;
}


/* fcn.00019420 @ 0x19420 */

ulong fcn.00019420(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    
    iVar1 = *0x1c468;
    uVar3 = 0;
    if (*0x1c680 != 0) {
        do {
            if (*(uVar3 * 0xd + 0x1c4e0) == arg1) {
                return 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *0x1c680);
    }
    uVar2 = *0x1c680;
    *(uVar2 * 0xd + 0x1c4e0) = arg1;
    (**(iVar1 + 0x160))(uVar2 * 0xd + 0x1c4e1,noname_1,0xc);
    *0x1c680 = *0x1c680 + 1;
    return 0;
}


/* fcn.00019488 @ 0x19488 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.00019488(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t uVar5;
    uint8_t *puVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint32_t arg2_00;
    uchar auStackX_8 [8];
    int16_t aiStackX_20 [4];
    int64_t var_30h;
    uint32_t var_48h;
    char acStack_48 [16];
    uint8_t auStack_38 [16];
    int64_t var_bp_20h;
    int64_t var_bp_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    (**(arg1 + 0x30))(arg1,1,10,1,aiStackX_20);
    if (aiStackX_20[0] == 0x604) {
        uVar5 = 0;
        (**(arg1 + 0x30))(arg1,0,0x19,1,auStackX_8);
        uVar5 = uVar5 & 0xffffffffffffff00;
        pcVar4 = *0x1c698;
        if (*0x1c688 != 0) {
            do {
                arg2_00 = uVar5;
                if ((*pcVar4 == arg2) && (uVar2 = (arg3 & 0xff) << 3, pcVar3 = uVar2, pcVar4[1] == uVar2)) {
                    pcVar4 = pcVar4 + 2;
                    goto code_r0x00019571;
                }
                uVar8 = uVar5 + 1;
                uVar5 = CONCAT71(uVar5 >> 8,uVar8);
                pcVar4 = pcVar4 + 0x10;
            } while (uVar8 < *0x1c688);
        }
        if (*0x1c680 != 0) {
            uVar5 = 0;
            do {
                if (*(uVar5 * 0xd + 0x1c4e0) == arg2) {
                    auStack_38[0] = 0;
                    auStack_38[1] = 1;
                    auStack_38[2] = 2;
                    auStack_38[3] = 3;
                    pcVar4 = acStack_48;
                    auStack_38[4] = 1;
                    auStack_38[5] = 2;
                    auStack_38[6] = 3;
                    auStack_38[7] = 0;
                    iVar7 = 4;
                    auStack_38[8] = 2;
                    auStack_38[9] = 3;
                    auStack_38[10] = 0;
                    auStack_38[0xb] = 1;
                    puVar6 = auStack_38 + (arg3 & 3) * 4;
                    auStack_38[0xc] = 3;
                    auStack_38[0xd] = 0;
                    auStack_38[0xe] = 1;
                    auStack_38[0xf] = 2;
                    do {
                        arg2_00 = 3;
                        pcVar3 = pcVar4;
                        (**(*0x1c468 + 0x160))(pcVar4,*puVar6 + uVar5 * 0xd + *puVar6 * 2 + 0x1c4e1);
                        puVar6 = puVar6 + 1;
                        pcVar4 = pcVar4 + 3;
                        iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    pcVar4 = acStack_48;
code_r0x00019571:
                    uVar1 = fcn.00019420(CONCAT71(pcVar3 >> 8,auStackX_8[0]),pcVar4,arg2_00);
                    return uVar1;
                }
                uVar8 = uVar5 + 1;
                uVar5 = uVar8;
            } while (uVar8 < *0x1c680);
        }
    }
    return 0x800000000000000e;
}


/* fcn.000181e8 @ 0x181e8 */

int64_t fcn.000181e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    bool bVar4;
    
    iVar2 = 0;
    bVar4 = *0x1c400 != 0;
    *arg3 = arg2 & 0xffffU;
    iVar3 = -0x7ffffffffffffffd;
    if (bVar4) {
        piVar1 = 0x1c400;
        do {
            iVar3 = (**piVar1)(arg1,arg2 & 0xffffU,arg3);
            if (-1 < iVar3) {
                return iVar3;
            }
            iVar2 = iVar2 + 1;
            piVar1 = iVar2 * 8 + 0x1c400;
        } while (*piVar1 != 0);
    }
    return iVar3;
}


/* fcn.00019128 @ 0x19128 */

int64_t fcn.00019128(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    unkbyte7 Var8;
    uint16_t uVar9;
    char acStackX_18 [8];
    int64_t iStackX_20;
    
    uVar6 = 0;
    iVar3 = (**(*0x1c468 + 0x140))(0x1b900,0,&iStackX_20);
    if (-1 < iVar3) {
        uVar7 = CONCAT71(uVar6 >> 8,arg1);
        iVar3 = (**(iStackX_20 + 0x10))(iStackX_20,uVar7,acStackX_18);
        if (-1 < iVar3) {
            uVar4 = 0;
            cVar2 = '\v';
            do {
                if (acStackX_18[0] == cVar2) {
                    return -0x7fffffffffffffeb;
                }
                uVar4 = uVar4 + 1;
                cVar2 = *(uVar4 + 0x1bea0);
            } while (cVar2 != '\0');
            uVar9 = ~arg3 | *0x1c4d0;
            uVar4 = 0;
            do {
                if ((uVar9 >> (*(uVar4 + 0x1bea0) & 0x1f) & 1) == 0) {
                    uVar7 = uVar7 & 0xffffffffffffff00;
                    while( true ) {
                        if (((uVar9 >> (*((uVar7 & 0xff) + 0x1bea0) & 0x1f) & 1) == 0) &&
                           (*((uVar7 & 0xff) + 0x1c440) < *(uVar4 + 0x1c440))) break;
                        Var8 = uVar7 >> 8;
                        uVar5 = uVar7 + 1;
                        uVar7 = CONCAT71(Var8,uVar5);
                        if (8 < uVar5) {
                            if (uVar4 < 9) {
                                acStackX_18[0] = *(uVar4 + 0x1bea0);
                                pcVar1 = uVar4 + 0x1c440;
                                *pcVar1 = *pcVar1 + '\x01';
                                iVar3 = (**(iStackX_20 + 0x18))(iStackX_20,CONCAT71(Var8,arg1));
                                if (iVar3 < 0) {
                                    return iVar3;
                                }
                                *arg2 = acStackX_18[0];
                                return 0;
                            }
                            goto code_r0x00019238;
                        }
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 9);
code_r0x00019238:
            iVar3 = -0x7ffffffffffffff2;
        }
    }
    return iVar3;
}


/* fcn.0001abb4 @ 0x1abb4 */

int64_t fcn.0001abb4(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001ab88(arg1);
    if (iVar1 != 0) {
        (**(*0x1c468 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.0001ab88 @ 0x1ab88 */

ulong fcn.0001ab88(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x1c468 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001b67e @ 0x1b67e */

int64_t fcn.0001b67e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00019780 @ 0x19780 */

void fcn.00019780(void)

{
    uint16_t uVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t arg1;
    uint64_t uVar7;
    bool bVar8;
    uchar auStackX_8 [8];
    
    uVar6 = 0;
    iVar3 = fcn.0001abb4(*(*0x1c4a8 + 0x58) + 0x20);
    fcn.0001b6d0(iVar3,*0x1c690,0x20);
    (**(*0x1c468 + 0x48))(*0x1c690);
    *0x1c690 = iVar3;
    fcn.0001b6d0(iVar3 + 0x20,*(*0x1c4a8 + 0x50),*(*0x1c4a8 + 0x58));
    arg1 = *0x1c690;
    *0x1c688 = *(*0x1c4a8 + 0x58) >> 4;
    bVar8 = *0x1c3d0 != 0;
    *0x1c698 = iVar3 + 0x20;
    *(*0x1c690 + 6) = *(*0x1c4a8 + 0x58) + 0x20;
    iVar3 = *0x1c338;
    if (bVar8) {
        piVar4 = 0x1c3d0;
        uVar7 = uVar6;
        do {
            iVar5 = (**piVar4)(iVar3,arg1);
            if (-1 < iVar5) break;
            uVar7 = uVar7 + 1;
            piVar4 = uVar7 * 8 + 0x1c3d0;
        } while (*piVar4 != 0);
        arg1 = *0x1c690;
    }
    uVar1 = *(arg1 + 6);
    uVar7 = uVar6;
    if (uVar1 != 0) {
        do {
            uVar7 = uVar7 + *(arg1 + uVar6);
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
    }
    *0x1c418 = 1;
    *(arg1 + 0x1f) = ~uVar7 + 1;
    uVar2 = fcn.00011a1c(arg1,uVar1,1,1);
    (**(*(*0x1c338 + 0x60) + 0x18))(*(*0x1c338 + 0x60),0xf0000,0x10000,auStackX_8);
    iVar3 = *0x1c690;
    *(*(*0x1c338 + 0x98) + 0x2a) = uVar2;
    *(*(*0x1c338 + 0x98) + 0x2e) = *(iVar3 + 6);
    (**(*(*0x1c338 + 0x60) + 8))(*(*0x1c338 + 0x60),0xf0000,0x10000,auStackX_8);
    return;
}


/* fcn.000195f8 @ 0x195f8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.000195f8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t arg4;
    uint8_t auStackX_8 [8];
    int64_t iStackX_10;
    uint16_t auStackX_18 [4];
    uint16_t auStackX_20 [4];
    int64_t var_30h_2;
    int64_t var_38h;
    uint8_t *puVar5;
    uint16_t *puVar6;
    uint16_t auStack_48 [4];
    uchar uStack_40;
    unkbyte7 Stack_3f;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    piVar4 = &var_30h;
    piVar3 = &var_18h;
    iStackX_10 = arg2;
    iVar1 = (**(arg1 + 0x70))(arg1,piVar3,piVar4,&uStack_40,&var_bp_20h);
    if (-1 < iVar1) {
        fcn.00019488(arg1,CONCAT71(piVar3 >> 8,var_30h),CONCAT71(piVar4 >> 8,uStack_40));
        arg4 = 1;
        iVar1 = arg1;
        iVar2 = (**(arg1 + 0x30))(arg1,0,0x3d,1,&iStackX_10);
        if ((-1 < iVar2) && (iStackX_10 != '\0')) {
            iStackX_10 = CONCAT71(iStackX_10._1_7_,iStackX_10 + -1);
            puVar6 = auStack_48;
            puVar5 = auStackX_8;
            iVar1 = fcn.00019260(iVar1,CONCAT71(var_30h._1_7_,var_30h),CONCAT71(Stack_3f,uStack_40),arg4);
            if (-1 < iVar1) {
                iVar1 = arg1;
                iVar2 = fcn.000181e8(arg1,auStack_48[0],&var_28h);
                if (-1 < iVar2) {
                    auStack_48[0] = auStack_48[0] & var_28h;
                }
                fcn.00019128(CONCAT71(iVar1 >> 8,iStackX_10),auStackX_8,auStack_48[0]);
                iVar1 = (**(arg1 + 0x38))(arg1,0,0x3c,1,auStackX_8,puVar5,puVar6);
                if (-1 < iVar1) {
                    (**(*0x1c4c8 + 8))(*0x1c4c8,auStackX_20,auStackX_18,0,0);
                    auStackX_20[0] = auStackX_20[0] & ~(1 << (auStackX_8[0] & 0xf));
                    auStackX_18[0] = auStackX_18[0] | 1 << (auStackX_8[0] & 0xf);
                    (**(*0x1c4c8 + 0x10))(*0x1c4c8,auStackX_20,auStackX_18,0,0);
                    *0x1c438 = auStackX_8[0];
                    *0x1c430 = arg1;
                    (**(*0x1c468 + 0x88))(*0x1c428,0x1b9a0,0x1c430,0x1c430);
                }
            }
        }
    }
    return;
}


/* fcn.0001b55c @ 0x1b55c */

uint64_t fcn.0001b55c(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.0001b588 @ 0x1b588 */

uint64_t fcn.0001b588(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.0001a908 @ 0x1a908 */

void fcn.0001a908(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00019bdc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00019ba8 @ 0x19ba8 */

uchar * fcn.00019ba8(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
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


/* fcn.0001aa88 @ 0x1aa88 */

ulong fcn.0001aa88(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x1c480 == '\0') {
        if (*0x1c498 == 0) {
            if (*0x1c490 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x1c468 + 0x140))(0x1bd78,0,0x1c498);
        }
    }
    else if (*0x1c488 == 0) {
        if ((*0x1c490 == '\0') && (*0x1c4a0 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001aac7. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x1c4a0 + 0xd0))(0x1bd88,0,0x1c488);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.0001b5ac @ 0x1b5ac */

ulong fcn.0001b5ac(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t *noname_0;
    
    noname_0 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *noname_0;
    if (noname_0[1] < uVar1) {
        if (noname_0[2] == 0) {
            uVar1 = fcn.0001b4a0(uVar1 << 3);
            noname_0[2] = uVar1;
            if (uVar1 == 0) {
                return 0x8000000000000009;
            }
        }
    }
    else {
        uVar2 = fcn.0001b4cc(noname_0,noname_0[1] << 3,(uVar1 + 10) * 8,noname_0[2]);
        if (uVar2 == 0) {
            return 0x8000000000000009;
        }
        noname_0[2] = uVar2;
        *noname_0 = uVar1 + 10;
    }
    return 0;
}


/* fcn.0001b470 @ 0x1b470 */

ulong fcn.0001b470(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1c458 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 46304 named .text
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


/* fcn.0001b4a0 @ 0x1b4a0 */

void fcn.0001b4a0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001b470(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102e0(arg1_00,arg1);
    }
    return;
}


/* fcn.0001b4cc @ 0x1b4cc */

int64_t fcn.0001b4cc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001b470(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102e0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                section..text(arg1_00,arg3,arg2);
            }
            (**(*0x1c458 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


