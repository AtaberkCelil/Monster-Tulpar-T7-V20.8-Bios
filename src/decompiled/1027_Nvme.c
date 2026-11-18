// decompiled by r2ghidra: 1027_Nvme.pe32
// functions: 60

/* entry0 @ 0x10384 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103a0(arg1,in_RDX);
    fcn.00010474(arg1,in_RDX);
    return;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x17768 = *(arg1 + 0x60);
    *0x17770 = *(arg1 + 0x58);
    *0x17760 = arg1;
    fcn.00016170();
    puVar4 = fcn.00016170();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103ff:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010380();
                fcn.00010370();
                uVar2 = in(0x1808);
                fcn.00010350(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00010340();
                }
                fcn.00010350(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010370();
                }
                else {
                    fcn.00010360();
                }
                return;
            }
            if ((*0x175e8 == *(puVar4 + 4)) && (*0x175f0 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103ff;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010474 @ 0x10474 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010474(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    int64_t var_30h;
    int64_t var_38h;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t var_bp_20h;
    int64_t var_18h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    aiStackX_10[1] = 0;
    var_bp_20h._0_4_ = 0xe20939be;
    var_bp_20h._4_4_ = 0x41be32d4;
    var_18h._0_4_ = 0x7f8950a1;
    var_18h._4_4_ = 0x2998d485;
    aiStackX_10[2] = 1;
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x17768 + 0x40))(6,0x1358,0x17758);
    if (-1 < iVar1) {
        iVar1 = (**(*0x17768 + 0x40))(6,0x1000,0x17738);
        if (-1 < iVar1) {
            iVar1 = (**(*0x17768 + 0x40))(6,0x30,0x17730);
            if (-1 < iVar1) {
                iVar1 = (**(*0x17768 + 0x28))(0,0,1,0x17750);
                if (-1 < iVar1) {
                    iVar1 = (**(*0x17768 + 0x50))(0x200,8,0x14210,0,aiStackX_10);
                    if (-1 < iVar1) {
                        (**(*0x17768 + 0xa8))(0x17440,aiStackX_10[0],auStack_38);
                    }
                    *0x17598 = 0;
                    *0x17590 = arg1;
                    (**(*0x17768 + 0x148))(0x17598,0x174f0,0x17570,0x173e0,0x175d0,0);
                    (**(*0x17768 + 0x170))(0x200,8,0x14b4c,0,0x173c0,aiStackX_10 + 1);
                    iVar1 = (**(*0x17768 + 0x50))(0x200,8,0x13b70,0,0x17728);
                    if (-1 < iVar1) {
                        (**(*0x17768 + 0xa8))(0x17480,*0x17728,0x17718);
                    }
                    iVar1 = (**(*0x17768 + 0x170))(0x200,8,0x14ba0,0,0x17520,auStack_30);
                    if (-1 < iVar1) {
                        (**(*0x17770 + 0x48))
                                  (L"MemoryOverwriteRequestControl",&var_bp_20h,0,aiStackX_10 + 2,0x175b0);
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00016170 @ 0x16170 */

int64_t fcn.00016170(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x17780 == 0) {
        *0x17780 = 0;
        if (*(*0x17760 + 0x68) != 0) {
            piVar2 = *(*0x17760 + 0x70);
            do {
                if ((*0x174d0 == *piVar2) && (*0x174d8 == piVar2[1])) {
                    *0x17780 = (*(*0x17760 + 0x70))[uVar1 * 3 + 2];
                    return *0x17780;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x17760 + 0x68));
        }
    }
    return *0x17780;
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.0001623c @ 0x1623c */

ulong fcn.0001623c(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x17788 == NULL) {
        if ((*0x17768 != 0) && (*(*0x17768 + 0x140) != NULL)) {
            iVar1 = (**(*0x17768 + 0x140))(0x17390,0,0x17788);
            if (iVar1 < 0) {
                *0x17788 = NULL;
            }
            if (*0x17788 != NULL) goto code_r0x000162a5;
        }
        return 0x8000000000000003;
    }
code_r0x000162a5:
    //WARNING: Could not recover jumptable at 0x000162c2. Too many branches
    //WARNING: Treating indirect jump as call
    uVar2 = (***0x17788)(1,0x2080000,0,0x17540);
    return uVar2;
}


/* fcn.00011804 @ 0x11804 */

int64_t fcn.00011804(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int64_t iVar5;
    uint *puVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int iVar9;
    int64_t iStackX_8;
    uint *puStackX_20;
    ulong in_stack_ffffffffffffff50;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    uint32_t auStack_98 [2];
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t aiStack_78 [2];
    uchar auStack_68 [16];
    uint32_t uStack_58;
    uint32_t uStack_54;
    
    uVar4 = in_stack_ffffffffffffff50 >> 0x20;
    puStackX_20 = NULL;
    iStackX_8 = arg1;
    iVar5 = (**(*0x17768 + 0x40))(4,0x1c8,&puStackX_20);
    iVar7 = *0x17768;
    if (iVar5 < 0) {
        return iVar5;
    }
    *arg3 = puStackX_20;
    (**(iVar7 + 0x168))(puStackX_20,0x1c8,0);
    puVar6 = puStackX_20 + 100;
    *puVar6 = puVar6;
    *(puStackX_20 + 0x66) = puVar6;
    iVar7 = (**(*0x17768 + 0x118))(iStackX_8,0x17480,&iStack_a0,arg2,iStackX_8,CONCAT44(uVar4,2));
    if (iVar7 < 0) {
        return iVar7;
    }
    iVar7 = (**(iStack_a0 + 0x78))(iStack_a0,4,0,auStack_98);
    if (iVar7 < 0) {
        return iVar7;
    }
    iVar7 = (**(iStack_a0 + 0x78))(iStack_a0,2,auStack_98[0] & 0x8700,0);
    if (iVar7 < 0) {
        return iVar7;
    }
    iVar7 = (**(iStack_a0 + 0x30))(iStack_a0,0,0,0x40,auStack_68);
    if (iVar7 < 0) {
        return iVar7;
    }
    *puStackX_20 = 0x434d564e;
    *(puStackX_20 + 2) = (uStack_54 << 0x20) + (uStack_58 & 0xfffffff8);
    *(puStackX_20 + 4) = iStack_a0;
    *(puStackX_20 + 6) = iStackX_8;
    uVar2 = fcn.000172ac(puStackX_20,4);
    uVar3 = fcn.000172ac(puStackX_20,0);
    *(puStackX_20 + 8) = CONCAT44(uVar2,uVar3);
    puStackX_20[10] = (uVar3 & 0xffff) + 1;
    *(puStackX_20 + 0xb) = uVar3 >> 0x10 & 1;
    *(puStackX_20 + 0x2d) = CONCAT44(uVar2,uVar3) >> 0x11 & 3;
    *(puStackX_20 + 0x2e) = uVar3 >> 0x18;
    *(puStackX_20 + 0x2f) = uVar2 & 0xf;
    *(puStackX_20 + 0xc) = uVar2 >> 4 & 1;
    *(puStackX_20 + 0x31) = uVar2 >> 5;
    puStackX_20[0xd] = 1 << (uVar2 >> 0x10 & 0xf) + 0xc;
    puStackX_20[0xe] = 1 << (uVar2 >> 0x14 & 0xf) + 0xc;
    uVar4 = fcn.000172ac(puStackX_20,8);
    puStackX_20[0x68] = uVar4;
    if (((*(puStackX_20 + 0x31) & 1) == 0) || (0x1000 < puStackX_20[0xd])) {
        return -0x7ffffffffffffffd;
    }
    uVar1 = fcn.000172ac(puStackX_20,0x14);
    if ((uVar1 & 1) != 0) {
        uVar2 = fcn.000172ac(puStackX_20,0x14);
        fcn.00017308(puStackX_20,0x14,uVar2 & 0xfffffffe);
    }
    iVar9 = *(puStackX_20 + 0x2e) * 500;
    uVar1 = fcn.000172ac(puStackX_20,0x14);
    if ((uVar1 & 1) == 0) {
        do {
            uVar1 = fcn.000172ac(puStackX_20,0x1c);
            if ((uVar1 & 1) == 0) break;
            (**(*0x17768 + 0xf8))(1000);
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
    }
    if (iVar9 == 0) {
code_r0x00011ae5:
        iVar7 = -0x7ffffffffffffff9;
    }
    else {
        fcn.00017308(puStackX_20,0x14,0x460000);
        puStackX_20[0xf] = puStackX_20[0xd];
        if (*0x17790 != 0x17790) {
            iVar7 = (**(iStack_a0 + 0x70))(iStack_a0,aiStack_78,&iStack_80,&iStack_88,&iStack_90);
            if (iVar7 < 0) {
                return iVar7;
            }
            piVar8 = *0x17790;
            do {
                if ((((piVar8[2] == aiStack_78[0]) && (piVar8[3] == iStack_80)) && (piVar8[4] == iStack_88)) &&
                   (piVar8[5] == iStack_90)) {
                    *(puStackX_20 + 0x70) = piVar8;
                    *(puStackX_20 + 0x16) = piVar8[6];
                    *(puStackX_20 + 0x20) = piVar8[7];
                    *(puStackX_20 + 0x2e) = piVar8[8];
                    *(puStackX_20 + 0x38) = piVar8[9];
                    *(puStackX_20 + 0x56) = piVar8[0xb];
                    break;
                }
                piVar8 = *piVar8;
            } while (piVar8 != 0x17790);
            if (*(puStackX_20 + 0x16) != 0) {
                uStack_a8 = 0x1000;
                *(puStackX_20 + 0x1c) = 1;
                iVar7 = (**(*(puStackX_20 + 4) + 0x48))
                                  (*(puStackX_20 + 4),2,*(puStackX_20 + 0x16),&uStack_a8,puStackX_20 + 0x18,
                                   puStackX_20 + 0x1a);
                if (iVar7 < 0) {
                    return iVar7;
                }
                if (uStack_a8 < 0x1000) {
                    return iVar7;
                }
                *(puStackX_20 + 0x26) = ((uStack_a8 & 0xfff) != 0) + (uStack_a8 >> 0xc);
                iVar7 = (**(*(puStackX_20 + 4) + 0x48))
                                  (*(puStackX_20 + 4),2,*(puStackX_20 + 0x20),&uStack_a8,puStackX_20 + 0x22,
                                   puStackX_20 + 0x24);
                if (iVar7 < 0) {
                    return iVar7;
                }
                if (uStack_a8 < 0x1000) {
                    return iVar7;
                }
                uVar4 = 0x3f;
                *(puStackX_20 + 0xa2) = 0x3f;
                *(puStackX_20 + 0x28) = 0x3f;
                (**(*0x17768 + 0x168))(*(puStackX_20 + 0x16),uStack_a8,0);
                (**(*0x17768 + 0x168))(*(puStackX_20 + 0x20),uStack_a8,0);
                fcn.00017308(puStackX_20,0x24,puStackX_20[0x28]);
                fcn.00017308(puStackX_20,0x28,puStackX_20[0x18]);
                fcn.00017308(puStackX_20,0x2c,*(puStackX_20 + 0x18) >> 0x20);
                fcn.00017308(puStackX_20,0x30,puStackX_20[0x22]);
                fcn.00017308(puStackX_20,0x34,*(puStackX_20 + 0x22) >> 0x20);
                *(puStackX_20 + 0x2c) = ((uStack_a8 & 0xfff) != 0) + (uStack_a8 >> 0xc);
                iVar7 = (**(*(puStackX_20 + 4) + 0x48))
                                  (*(puStackX_20 + 4),2,*(puStackX_20 + 0x2e),&uStack_a8,puStackX_20 + 0x30,
                                   puStackX_20 + 0x32);
                if (iVar7 < 0) {
                    return iVar7;
                }
                if (uStack_a8 < 0x1000) {
                    return iVar7;
                }
                *(puStackX_20 + 0x36) = ((uStack_a8 & 0xfff) != 0) + (uStack_a8 >> 0xc);
                iVar7 = (**(*(puStackX_20 + 4) + 0x48))
                                  (*(puStackX_20 + 4),2,*(puStackX_20 + 0x38),&uStack_a8,puStackX_20 + 0x3a,
                                   puStackX_20 + 0x3c);
                if (iVar7 < 0) {
                    return iVar7;
                }
                if (uStack_a8 < 0x1000) {
                    return iVar7;
                }
                if (puStackX_20[10] < 0x3f) {
                    uVar4 = puStackX_20[10];
                }
                puStackX_20[0x3e] = uVar4;
                puStackX_20[0x3f] = uVar4;
                iVar7 = *0x17768;
                *(*(puStackX_20 + 0x56) + 0xc) = *(*(puStackX_20 + 0x56) + 0xc) & 0xfe;
                iVar7 = (**(iVar7 + 0x40))(4,0x48,puStackX_20 + 0x10);
                if (iVar7 < 0) {
                    return iVar7;
                }
                uVar2 = fcn.000172ac(puStackX_20,0x14);
                fcn.00017308(puStackX_20,0x14,uVar2 | 1);
                iVar9 = *(puStackX_20 + 0x2e) * 500;
                do {
                    uVar1 = fcn.000172ac(puStackX_20,0x1c);
                    if ((uVar1 & 1) != 0) break;
                    (**(*0x17768 + 0xf8))(1000);
                    iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
                if (iVar9 != 0) {
                    iVar7 = fcn.00017218(puStackX_20,*(puStackX_20 + 0x10));
                    if (-1 < iVar7) {
                        iVar7 = (**(*0x17768 + 0x148))(&iStackX_8,0x17550,puStackX_20,0);
                        return iVar7;
                    }
                    return iVar7;
                }
                goto code_r0x00011ae5;
            }
        }
        iVar7 = -0x7ffffffffffffff7;
    }
    return iVar7;
}


/* fcn.00011f38 @ 0x11f38 */

//WARNING: Variable defined which should be unmapped: var_30h_2
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00011f38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort *puVar1;
    int64_t iVar2;
    char cVar3;
    uchar *puStackX_8;
    int64_t var_30h;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t arg_60h;
    int64_t in_stack_ffffffffffffffc0;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    puVar1 = *(arg1 + 0x158);
    puStackX_8 = NULL;
    iStack_50 = 0;
    cVar3 = arg3;
    arg_60h = 0;
    if (((cVar3 == '\x01') || (cVar3 == '\x02')) || (cVar3 == '\0')) {
        iStack_58 = 0x1000;
        iVar2 = (**(*0x17768 + 0x40))(4,0x48,&puStackX_8);
        if (-1 < iVar2) {
            (**(*0x17768 + 0x168))(puStackX_8,0x48);
            iVar2 = (**(*(arg1 + 0x10) + 0x48))
                              (*(arg1 + 0x10),1,arg2,&iStack_58,&iStack_50,&stack0xffffffffffffffb8);
            if (-1 < iVar2) {
                *puStackX_8 = 6;
                puStackX_8[1] = puStackX_8[1] & 0xfc;
                puStackX_8[1] = puStackX_8[1] & 0x3f;
                *(puStackX_8 + 2) = *puVar1;
                *(puStackX_8 + 4) = arg4;
                iVar2 = fcn.000164c0(arg1,puStackX_8,iStack_58,iStack_50,arg_60h,in_stack_ffffffffffffffc0,
                                     var_30h_2,var_28h);
                if (-1 < iVar2) {
                    *(puStackX_8 + 0x28) = arg3 & 0xff;
                    puStackX_8[0x40] = 1;
                    *(puStackX_8 + 0x42) = 0;
                    *(puStackX_8 + 0x44) = 1000;
                    iVar2 = fcn.00016c54(arg1,puStackX_8,&var_30h_2);
                    (**(*(arg1 + 0x10) + 0x50))(*(arg1 + 0x10),arg_60h);
                    (**(*0x17768 + 0x48))(puStackX_8);
                    return iVar2;
                }
            }
            (**(*0x17768 + 0x48))(puStackX_8);
        }
    }
    else {
        iVar2 = -0x7ffffffffffffffd;
    }
    return iVar2;
}


/* fcn.00012aa4 @ 0x12aa4 */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_12h

int64_t fcn.00012aa4(int64_t arg1)

{
    uint8_t uVar1;
    int16_t *piVar2;
    int iVar3;
    uint16_t *puVar4;
    uint8_t *puVar5;
    int64_t iVar6;
    char acStackX_10 [4];
    char acStackX_14 [4];
    ulong *puStackX_18;
    int32_t var_28h;
    int16_t var_2ch;
    int64_t var_30h;
    uint16_t auStack_78 [8];
    int64_t var_60h;
    int16_t aiStack_2a [8];
    int64_t var_12h;
    
    acStackX_10 = str.en_US._0_4_;
    acStackX_14._0_2_ = str.en_US._4_2_;
    (**(*0x17768 + 0x168))(auStack_78,0x52);
    puVar4 = auStack_78;
    puVar5 = *(arg1 + 0x168) + 0x18;
    iVar6 = 0x28;
    do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar2 = aiStack_2a;
    aiStack_2a[1] = 0;
    iVar3 = 0x27;
    do {
        if (*piVar2 != 0x20) break;
        *piVar2 = 0;
        piVar2 = piVar2 + -1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar6 = (**(*0x17768 + 0x40))(4,0x20,&puStackX_18);
    if (-1 < iVar6) {
        (**(*0x17768 + 0x168))(puStackX_18,0x20,0);
        iVar6 = (**(*0x17768 + 0x40))(4,6,puStackX_18);
        if (-1 < iVar6) {
            iVar6 = (**(*0x17768 + 0x40))(4,0x52,puStackX_18 + 1);
            if (-1 < iVar6) {
                (**(*0x17768 + 0x160))(*puStackX_18,acStackX_10,6);
                (**(*0x17768 + 0x160))(puStackX_18[1],auStack_78,0x52);
                puStackX_18[2] = 0;
                puStackX_18[3] = 0;
                *(arg1 + 0x170) = puStackX_18;
            }
        }
    }
    return iVar6;
}


/* fcn.000162c8 @ 0x162c8 */

int64_t fcn.000162c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int iVar4;
    uchar auStack_28 [16];
    
    puVar1 = *(arg1 + 0x158);
    iVar2 = 0;
    if ((*(arg1 + 0xe0) == 0) || (*(arg1 + 0xb8) == 0)) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        fcn.00010280(arg2,0x48);
        uVar3 = *(arg1 + 0xfc) + 1;
        if (uVar3 != 0) {
            fcn.00010280(*(arg1 + 0xe0),uVar3 << 4);
        }
        if ((*(arg1 + 0x48) != 2) || (*(arg1 + 0x4d) == '\0')) {
            *(arg1 + 0x4d) = 1;
            *(arg2 + 1) = *(arg2 + 1) & 0x3c;
            *arg2 = 5;
            *(arg2 + 2) = *puVar1;
            *(arg2 + 4) = 0;
            iVar4 = arg4 * 0x10000 + arg3;
            *(arg2 + 0x18) = *(arg1 + 0xe8);
            *(arg2 + 0x20) = 0;
            *(arg2 + 0x28) = iVar4;
            *(arg2 + 0x2c) = 1;
            *(arg2 + 0x40) = 1;
            *(arg2 + 0x42) = 0;
            *(arg2 + 0x44) = 1000;
            iVar2 = fcn.00016c54(arg1,arg2,auStack_28);
            *(arg1 + 0x4d) = 0;
            if (-1 < iVar2) {
                fcn.00010280(arg2,0x48);
                uVar3 = *(arg1 + 0xf8) + 1;
                if (uVar3 != 0) {
                    fcn.00010280(*(arg1 + 0xb8),uVar3 << 6);
                }
                if ((*(arg1 + 0x48) != 2) || (*(arg1 + 0x4e) == '\0')) {
                    *(arg1 + 0x4e) = 1;
                    *(arg2 + 1) = *(arg2 + 1) & 0x3c;
                    *arg2 = 1;
                    *(arg2 + 2) = *puVar1;
                    *(arg2 + 4) = 0;
                    *(arg2 + 0x18) = *(arg1 + 0xc0);
                    *(arg2 + 0x20) = 0;
                    *(arg2 + 0x28) = iVar4;
                    *(arg2 + 0x2c) = ((arg3 & 0xffffU) << 0x10) + 1;
                    *(arg2 + 0x40) = 1;
                    *(arg2 + 0x42) = 0;
                    *(arg2 + 0x44) = 1000;
                    iVar2 = fcn.00016c54(arg1,arg2,auStack_28);
                    *(arg1 + 0x4e) = 0;
                }
            }
        }
        *(puVar1 + 0xb) = *(puVar1 + 0xb) & 0xfe;
        *(puVar1 + 7) = 0;
    }
    return iVar2;
}


/* fcn.00014818 @ 0x14818 */

//WARNING: Variable defined which should be unmapped: var_17h_2
//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.00014818(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t *arg2_00;
    int64_t iVar5;
    int64_t iVar6;
    int32_t var_fh;
    int32_t var_13h;
    int32_t var_17h_2;
    int32_t var_1bh;
    int32_t var_1fh;
    int32_t var_23h;
    int8_t var_27h;
    int32_t var_2bh;
    int64_t var_67h;
    int64_t var_77h;
    uint8_t auStack_88 [16];
    uchar auStack_78 [2];
    ushort uStack_76;
    uint uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uchar uStack_38;
    uchar auStack_34 [3];
    int64_t var_29h;
    int64_t var_19h;
    
    stack0x00000018 = 0;
    uVar4 = 0;
    stack0x00000008 = 0;
    arg2_00 = NULL;
    uVar3 = arg2;
    if (*(arg1 + 0x168) == 0) {
        return -0x7ffffffffffffff2;
    }
    if (*(*(arg1 + 0x168) + 0x110) == 0) {
        return -0x7ffffffffffffffd;
    }
    if (*(arg1 + 0x1a8) == 0) {
        if (uVar3 == 0) {
            return -0x7ffffffffffffffa;
        }
        iVar5 = 0;
    }
    else {
        arg2_00 = fcn.00015e48(4,0x1000);
        if (arg2_00 == NULL) {
            return -0x7ffffffffffffff7;
        }
        iVar5 = fcn.00014714(arg1,arg2_00,auStack_88);
        if (iVar5 < 0) {
code_r0x000148e6:
            (**(*0x17768 + 0x48))(arg2_00);
            return iVar5;
        }
        if ((auStack_88[0] & 1) == uVar3) {
            iVar5 = 0;
            goto code_r0x000148e6;
        }
    }
    if (uVar3 == 0) {
        iVar5 = stack0x00000008;
    }
    else {
        iVar1 = *(*(arg1 + 0x168) + 0x114);
        if (iVar1 == 0) {
            uVar4 = *(*(arg1 + 0x168) + 0x110) << 0xc;
            if (0x800000 < uVar4) {
                uVar4 = 0x800000;
            }
        }
        else {
            uVar4 = iVar1 << 0xc;
        }
        uVar4 = uVar4 / *(arg1 + 0x3c);
        *(arg1 + 0x1b8) = uVar4 + 1;
        iVar6 = fcn.00015dd4(*(arg1 + 0x3c),uVar4 + 1);
        *(arg1 + 0x1a8) = iVar6;
        if (iVar6 == 0) goto code_r0x00014aef;
        *0x8 = *(arg1 + 0x1b8) << 0xc;
        iVar5 = (**(*(arg1 + 0x10) + 0x48))(*(arg1 + 0x10),2,iVar6,&var_fh + 1,&var_1fh + 1,arg1 + 0x1b0);
        if (iVar5 < 0) goto code_r0x00014aef;
        piVar2 = *(arg1 + 0x1a8);
        *piVar2 = stack0x00000018 + 0x1000;
        *(piVar2 + 1) = uVar4;
        iVar5 = stack0x00000018;
    }
    fcn.00010280(auStack_78,0x48);
    auStack_78[0] = 9;
    uStack_76 = **(arg1 + 0x158);
    uStack_4c = arg2 & 0xff;
    uStack_50 = 0xd;
    uStack_38 = 1;
    _auStack_34 = 1000;
    if (uVar3 == 0) {
        uStack_48 = *arg2_00;
        uStack_44 = arg2_00[1];
        uStack_40 = arg2_00[2];
        uStack_3c = arg2_00[3];
        (**(*0x17768 + 0x48))(arg2_00);
    }
    else {
        uStack_44 = iVar5;
        uStack_40 = iVar5 >> 0x20;
        uStack_3c = 1;
        uStack_48 = uVar4;
    }
    iVar5 = fcn.00016c54(arg1,auStack_78,auStack_88);
    if (uVar3 == 0) {
        if (-1 < iVar5) goto code_r0x00014aef;
    }
    else if (-1 < iVar5) {
        if (*0x17720 == 0) {
            (**(*0x17768 + 0x170))(0x200,0x10,0x14660,0,0x17500,0x17720);
        }
        if (*0x176f0 == 0) {
            (**(*0x17768 + 0x170))(0x200,0x10,0x14660,0,0x173d0,0x176f0);
        }
        return 0;
    }
    if (uVar3 == 0) {
        return iVar5;
    }
code_r0x00014aef:
    if (*(arg1 + 0x1b0) != 0) {
        (**(*(arg1 + 0x10) + 0x50))(*(arg1 + 0x10));
        *(arg1 + 0x1b0) = 0;
    }
    if (*(arg1 + 0x1a8) != 0) {
        (**(*0x17768 + 0x30))(*(arg1 + 0x1a8),*(arg1 + 0x1b8));
        *(arg1 + 0x1a8) = 0;
    }
    return iVar5;
}


/* fcn.000120e8 @ 0x120e8 */

int64_t fcn.000120e8(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint *puVar3;
    int64_t *piVar4;
    ulong *puVar5;
    uint *puStackX_8;
    int64_t var_bp_20h;
    int64_t var_30h;
    
    puVar1 = arg1 + 400;
    for (puVar5 = *puVar1; puVar5 != puVar1; puVar5 = *puVar5) {
        if (*(puVar5 + -0x10f4) == arg2) {
            return -0x7fffffffffffffec;
        }
    }
    puStackX_8 = NULL;
    iVar2 = (**(*0x17768 + 0x40))(4,0x1168,&puStackX_8);
    if (-1 < iVar2) {
        iVar2 = (**(*0x17768 + 0x40))(4,0x30);
        if (iVar2 < 0) {
            puVar3 = puStackX_8;
            if (puStackX_8 == NULL) {
                return iVar2;
            }
        }
        else {
            fcn.00010280(puStackX_8,0x1168);
            fcn.00010280(0,0x30);
            *(puStackX_8 + 0x442) = puStackX_8 + 0x442;
            *(puStackX_8 + 0x444) = puStackX_8 + 0x442;
            *puStackX_8 = 0x454d564e;
            *(puStackX_8 + 6) = arg1;
            *(puStackX_8 + 4) = 0;
            puStackX_8[5] = arg2;
            *(puStackX_8 + 0x410) = 0;
            _pe_dos_header = 0;
            iVar2 = fcn.00011f38(arg1,puStackX_8 + 0xe,0,puStackX_8[5]);
            if (-1 < iVar2) {
                piVar4 = puStackX_8 + 0x442;
                *piVar4 = puVar1;
                puVar1 = *(arg1 + 0x198);
                *(puStackX_8 + 0x444) = puVar1;
                *puVar1 = piVar4;
                *(arg1 + 0x198) = piVar4;
                if ((*(*(arg1 + 0x168) + 0x100) & 1) == 0) {
                    return iVar2;
                }
                *(puStackX_8 + 0x42a) = 0x13538;
                *(puStackX_8 + 0x428) = 0x13710;
                iVar2 = (**(*0x17768 + 0x148))(puStackX_8 + 2,0x17510,puStackX_8 + 0x428,0);
                return iVar2;
            }
            (**(*0x17768 + 0x48))();
            puVar3 = NULL;
        }
        (**(*0x17768 + 0x48))(puVar3);
        return iVar2;
    }
    return iVar2;
}


/* fcn.000122cc @ 0x122cc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000122cc(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint8_t uVar2;
    int16_t iVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong *puVar9;
    ulong *puStackX_10;
    ulong uStackX_18;
    uint64_t uStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uint uVar11;
    ulong *puVar10;
    uchar auStack_58 [8];
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    int64_t var_bp_20h;
    int32_t var_18h;
    int32_t var_14h;
    int64_t var_10h;
    
    iVar5 = 0;
    puVar1 = arg2 + 400;
    puVar9 = *puVar1;
    bVar4 = false;
    do {
        if (puVar9 == puVar1) {
            puStackX_10 = *puVar1;
            while (puStackX_10 != puVar1) {
                if (*(puStackX_10 + -0x21f) == '\0') {
                    fcn.000115d4(arg1,puStackX_10[-0x220],arg2,puStackX_10 + -0x221);
                }
                else {
                    puStackX_10 = *puStackX_10;
                }
            }
            if ((!bVar4) && (*(*(arg2 + 0x1c0) + 0x60) != 0)) {
                (**(*(arg2 + 0x10) + 0x60))(*(arg2 + 0x10),0x200);
                *(*(arg2 + 0x1c0) + 0x60) = 0;
            }
            return iVar5;
        }
        if (*(puVar9 + -0x21f) != '\x01') {
            uStackX_20 = *(arg2 + 0x3c);
            uVar6 = *(*(arg2 + 0x1c0) + 0x50);
            puVar10 = puVar9 + -0x21b;
            puVar9[-0x21d] = uVar6;
            iVar5 = (**(*(arg2 + 0x10) + 0x48))(*(arg2 + 0x10),2,uVar6,&uStackX_20,puVar9 + -0x21c,puVar10);
            uVar11 = puVar10 >> 0x20;
            if (-1 < iVar5) {
                (**(*0x17768 + 0x160))(puVar9 + -0x14,0x174e0,0x10);
                puVar9[-0x12] = 0x12a40;
                uStack_50 = 0x101703;
                puVar9[-0x11] = 0x12a4c;
                puVar9[-0x10] = 0x12a40;
                puVar9[-0xf] = 0x12a98;
                uStack_4c = *(puVar9 + -0x10f4);
                uStack_48 = puVar9[-0x20b];
                iVar5 = (**(*0x17768 + 0x118))
                                  (*(puVar9[-0x21e] + 0x18),0x17460,&puStackX_10,*(arg1 + 0x28),
                                   *(puVar9[-0x21e] + 0x18),CONCAT44(uVar11,2));
                uVar6 = fcn.00016094(puStackX_10,&uStack_50);
                puVar9[-0xe] = uVar6;
                if (-1 < iVar5) {
                    uVar11 = 0;
                    iVar5 = (**(*0x17768 + 0x148))(puVar9 + -0x220,0x17460,uVar6,0x173a0,puVar9 + -0x14,0);
                    if (-1 < iVar5) {
                        if (puVar9[-0x21a] != 0) {
                            if (puVar9[-0x19] == 0) {
                                iVar5 = (**(*0x17768 + 0x40))(4,0x30,&uStackX_18);
                                if (iVar5 < 0) goto code_r0x000126db;
                                (**(*0x17768 + 0x168))(uStackX_18,0x30,0);
                                puVar9[-0x19] = uStackX_18;
                            }
                            uVar7 = *(puVar9 + -0x10b6) & 0xf;
                            uVar2 = *(puVar9 + uVar7 * 4 + -0x104e);
                            iVar3 = *(puVar9 + uVar7 * 4 + -0x1050);
                            *puVar9[-0x19] = 0;
                            *(puVar9[-0x19] + 4) = 0;
                            *(puVar9[-0x19] + 5) = 1;
                            *(puVar9[-0x19] + 6) = 0;
                            *(puVar9[-0x19] + 7) = 0;
                            *(puVar9[-0x19] + 8) = 0;
                            *(puVar9[-0x19] + 0xc) = 1LL << (uVar2 & 0x3f);
                            *(puVar9[-0x19] + 0x10) = 4;
                            *(puVar9[-0x19] + 0x18) = puVar9[-0x21a] + -1;
                            *(puVar9[-0x19] + 0x20) = 0;
                            *(puVar9[-0x19] + 0x28) = 1;
                            *(puVar9[-0x19] + 0x2c) = *(puVar9[-0x19] + 0xc);
                            puVar9[-0x18] = 0x129a8;
                            puVar9[-0x1a] = 0x2001f;
                            puVar9[-0x17] = 0x128f4;
                            puVar9[-0x16] = 0x12920;
                            puVar9[-0x15] = 0x129ac;
                            iVar5 = (**(*0x17768 + 0x148))(puVar9 + -0x220,0x17530);
                            if (iVar5 < 0) goto code_r0x000126db;
                            if (iVar3 != 0) {
                                piVar8 = *(arg2 + 0x1c0) + 0x60;
                                if (*piVar8 == 0) {
                                    uVar11 = 0;
                                    iVar5 = (**(*(arg2 + 0x10) + 0x58))(*(arg2 + 0x10),0,6,0x200,piVar8,0x880);
                                    if (iVar5 < 0) goto code_r0x000126db;
                                }
                                if ((*(puVar9 + -0x10b6) & 0xf0) == 0) {
                                    if ((iVar3 != 8) || ((*(puVar9 + -0x10b3) & 7) == 0)) {
                                        puVar9[10] = 0x200000;
                                        puVar9[7] = *(*(arg2 + 0x1c0) + 0x60);
                                    }
                                }
                                else if ((iVar3 != 8) || ((*(puVar9 + -0x10b3) & 7) == 0)) {
                                    puVar9[5] = 0x200000;
                                    puVar9[2] = *(*(arg2 + 0x1c0) + 0x60);
                                }
                                bVar4 = true;
                            }
                        }
                        iVar5 = (**(*0x17768 + 0x118))
                                          (*(arg2 + 0x18),0x17480,auStack_58,*(arg1 + 0x28),puVar9[-0x220],
                                           CONCAT44(uVar11,8));
                        *(puVar9 + -0x21f) = 1;
                    }
                }
            }
        }
code_r0x000126db:
        puVar9 = *puVar9;
    } while( true );
}


/* fcn.00011150 @ 0x11150 */

void fcn.00011150(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t arg1_00;
    int iVar4;
    ulong *puStackX_8;
    int64_t iStackX_18;
    ulong uStackX_20;
    uint32_t auStack_38 [4];
    
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x173f0,0,*(arg1 + 0x28),arg2,4);
    if ((iVar2 == 0) && (*0x176f8 != 0)) {
        (**(*0x176f8 + 8))(arg3,2);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17430,0,*(arg1 + 0x28),arg2,4);
    if (((iVar2 == 0) && (*0x17708 != 0)) && (*(*0x17708 + 0x18) != '\0')) {
        (**(*0x17708 + 8))(arg3);
    }
    fcn.00014818(arg3,0);
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17550,0,*(arg1 + 0x28),arg2,4);
    if (-1 < iVar2) {
        iVar4 = *(arg3 + 0x2e) * 500;
        arg1_00 = arg3;
        uVar3 = fcn.000172ac(arg1_00,0x14);
        if ((uVar3 & 1) != 0) {
            uVar1 = fcn.000172ac(arg1_00,0x14);
            fcn.00017308(arg1_00,0x14,uVar1 & 0xfffffffe);
            do {
                uVar3 = fcn.000172ac(arg1_00,0x1c);
                if ((uVar3 & 1) == 0) break;
                (**(*0x17768 + 0xf8))(1000);
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
        }
        (**(*0x17768 + 0x150))(arg2,0x17550,arg3,0);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17420,&uStackX_20,*(arg1 + 0x28),arg2,2);
    if (-1 < iVar2) {
        (**(*0x17768 + 0x150))(arg2,0x17420,uStackX_20,0);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17450,&puStackX_8,*(arg1 + 0x28),arg2,2);
    if (-1 < iVar2) {
        (**(*0x17768 + 0x150))(arg2,0x17450,puStackX_8,0);
        (**(*0x17768 + 0x48))(*puStackX_8);
        (**(*0x17768 + 0x48))(puStackX_8);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17480,&iStackX_18,*(arg1 + 0x28),arg2,2);
    if (-1 < iVar2) {
        (**(iStackX_18 + 0x78))(iStackX_18,4,0,auStack_38);
        (**(iStackX_18 + 0x78))(iStackX_18,3,auStack_38[0] & 0x8700);
    }
    (**(*0x17768 + 0x120))(arg2,0x17480,*(arg1 + 0x28),arg2);
    (**(*0x17768 + 0x120))(arg2,0x17460,*(arg1 + 0x28),arg2);
    if (*(arg3 + 0x168) != 0) {
        (**(*0x17768 + 0x48))();
    }
    if (*(arg3 + 0x178) != 0) {
        (**(*0x17768 + 0x30))(*(arg3 + 0x178),2);
    }
    if (*(arg3 + 0x68) != 0) {
        (**(*(arg3 + 0x10) + 0x50))(*(arg3 + 0x10));
    }
    if (*(arg3 + 0x90) != 0) {
        (**(*(arg3 + 0x10) + 0x50))(*(arg3 + 0x10));
    }
    if (*(arg3 + 200) != 0) {
        (**(*(arg3 + 0x10) + 0x50))(*(arg3 + 0x10));
    }
    if (*(arg3 + 0xf0) != 0) {
        (**(*(arg3 + 0x10) + 0x50))(*(arg3 + 0x10));
    }
    if ((*(arg3 + 0x58) != 0) && (iVar2 = *(arg3 + 0x70) << 0xc, iVar2 != 0)) {
        fcn.00010280(*(arg3 + 0x58),iVar2);
    }
    if ((*(arg3 + 0x80) != 0) && (iVar2 = *(arg3 + 0x98) << 0xc, iVar2 != 0)) {
        fcn.00010280(*(arg3 + 0x80),iVar2);
    }
    if ((*(arg3 + 0xb8) != 0) && (iVar2 = *(arg3 + 0xb0) << 0xc, iVar2 != 0)) {
        fcn.00010280(*(arg3 + 0xb8),iVar2);
    }
    if ((*(arg3 + 0xe0) != 0) && (iVar2 = *(arg3 + 0xd8) << 0xc, iVar2 != 0)) {
        fcn.00010280(*(arg3 + 0xe0),iVar2);
    }
    if (*(arg3 + 0x158) != 0) {
        fcn.00010280(*(arg3 + 0x158),0x18);
    }
    if (*(arg3 + 0x40) != 0) {
        (**(*0x17768 + 0x48))();
    }
    if (*(arg3 + 0x170) != NULL) {
        (**(*0x17768 + 0x48))(**(arg3 + 0x170));
        (**(*0x17768 + 0x48))(*(*(arg3 + 0x170) + 8));
        (**(*0x17768 + 0x48))(*(arg3 + 0x170));
    }
    (**(*0x17768 + 0x48))(arg3);
    if (*0x17748 != 0) {
        (**(*0x17768 + 0x70))();
        *0x17748 = 0;
    }
    return;
}


/* fcn.00012774 @ 0x12774 */

int64_t fcn.00012774(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    int64_t iStackX_8;
    ulong uStackX_10;
    
    uStackX_10 = 0x200;
    if ((*(*(arg1 + 0x168) + 0x100) & 1) != 0) {
        iVar3 = (**(*0x17768 + 0x40))(4,0x200,&iStackX_8);
        uVar6 = 0;
        if (iVar3 < 0) {
            return -0x7ffffffffffffff7;
        }
        (**(*0x17768 + 0x168))(iStackX_8,uStackX_10,0);
        piVar2 = *(arg1 + 400);
        uVar4 = piVar2 + -0x221;
        if (piVar2 == arg1 + 400) {
            uVar4 = uVar6;
        }
        if (uVar4 != 0) {
            puVar1 = uVar4 + 0x10a0;
            iVar3 = (**puVar1)(puVar1,0,100000000,0,0,0x200,iStackX_8,&uStackX_10);
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar5 = CONCAT11(*(iStackX_8 + 6),*(iStackX_8 + 7));
            if (uVar5 != 0) {
                do {
                    if (uVar5 <= uVar6) {
code_r0x000128d4:
                        (**(*0x17768 + 0x48))(iStackX_8);
                        return iVar3;
                    }
                    if (*(uVar6 + 8 + iStackX_8) == '\x02') {
                        uStackX_10 = 0x200;
                        (**(*0x17768 + 0x168))(iStackX_8,0x200,0);
                        iVar3 = (**(uVar4 + 0x10a8))(puVar1,0,0,2,0x400,uStackX_10,&iStackX_8);
                        goto code_r0x000128d4;
                    }
                    uVar6 = uVar6 + 1;
                } while( true );
            }
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.000115d4 @ 0x115d4 */

void fcn.000115d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *in_stack_00000028;
    
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17530,0,*(arg1 + 0x28),arg2,4);
    if (iVar2 == 0) {
        (**(*0x17768 + 0x150))(arg2,0x17530,arg4 + 0x1038,0);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17510,0,*(arg1 + 0x28),arg2,4);
    if (iVar2 == 0) {
        (**(*0x17768 + 0x150))(arg2,0x17510,arg4 + 0x10a0,0);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x175a0,0,0,0,4);
    if ((iVar2 == 0) && (*0x17740 != 0)) {
        (**(*0x17740 + 8))(arg3,2);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x173a0,0,*(arg1 + 0x28),arg2,4);
    if (iVar2 == 0) {
        (**(*0x17768 + 0x150))(arg2,0x173a0,arg4 + 0x1068,0);
    }
    iVar2 = (**(*0x17768 + 0x118))(arg2,0x17460,0,*(arg1 + 0x28),arg2,4);
    if (iVar2 == 0) {
        (**(*0x17768 + 0x150))(arg2,0x17460,*(arg4 + 0x1098),0);
    }
    if (*(arg4 + 0x30) != 0) {
        (**(*(arg3 + 0x10) + 0x50))(*(arg3 + 0x10));
    }
    if (*(arg4 + 0x1040) != 0) {
        (**(*0x17768 + 0x48))();
    }
    if (*(arg4 + 0x1098) != 0) {
        (**(*0x17768 + 0x48))();
    }
    piVar1 = *in_stack_00000028;
    *(*piVar1 + 8) = piVar1[1];
    *piVar1[1] = *piVar1;
    *in_stack_00000028 = *piVar1;
    //WARNING: Could not recover jumptable at 0x000117ff. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x17768 + 0x48))(arg4);
    return;
}


/* fcn.000172ac @ 0x172ac */

uint fcn.000172ac(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint auStackX_8 [8];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    auStackX_8[0] = 0;
    if (iVar2 == 0) {
        auStackX_8[0] = 0;
    }
    else if ((*(iVar2 + 0x160) == '\0') && (iVar1 = *(iVar2 + 0x10), iVar1 != 0)) {
        (**(iVar1 + 0x10))(iVar1,2,0,arg2,1,auStackX_8);
    }
    else {
        auStackX_8[0] = *(arg2 + *(iVar2 + 8));
    }
    return auStackX_8[0];
}


/* fcn.00017308 @ 0x17308 */

void fcn.00017308(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t aiStackX_18 [2];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 != 0) {
        if ((*(iVar2 + 0x160) == '\0') && (iVar1 = *(iVar2 + 0x10), iVar1 != 0)) {
            aiStackX_18[0] = arg3;
            (**(iVar1 + 0x18))(iVar1,2,0,arg2,1,aiStackX_18);
        }
        else {
            *(arg2 + *(iVar2 + 8)) = arg3;
        }
    }
    return;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 28896 named .text
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


/* fcn.00017218 @ 0x17218 */

ulong fcn.00017218(uint32_t arg1,int64_t arg2)

{
    ushort *puVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uchar auStack_18 [16];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = *(iVar3 + 0x158);
    if ((*(iVar3 + 0x48) == 2) && (*(iVar3 + 0x4c) != '\0')) {
        uVar2 = 0;
    }
    else {
        *(iVar3 + 0x4c) = 1;
        fcn.00010280(arg2,0x48);
        *arg2 = 9;
        *(arg2 + 2) = *puVar1;
        *(arg2 + 0x28) = 7;
        *(arg2 + 0x2c) = 0x10001;
        *(arg2 + 0x40) = 1;
        *(arg2 + 0x42) = 0;
        *(arg2 + 0x44) = 1000;
        uVar2 = fcn.00016c54(arg1,arg2,auStack_18);
        *(iVar3 + 0x4c) = 0;
    }
    return uVar2;
}


/* fcn.000164c0 @ 0x164c0 */

int64_t fcn.000164c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                    int64_t arg_70h,int64_t arg_78h)

{
    ulong uVar1;
    char cVar2;
    int64_t iVar3;
    char cVar4;
    uint64_t uVar5;
    char cVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong uStackX_8;
    uint64_t uStackX_10;
    char acStackX_18 [8];
    int64_t in_stack_00000028;
    ulong *in_stack_00000030;
    int32_t var_40h;
    int8_t var_44h;
    int32_t var_48h;
    int8_t var_4ch;
    int32_t var_50h;
    int8_t var_54h;
    
    *(arg2 + 0x18) = arg4;
    uVar5 = *(arg1 + 0x3c);
    uVar8 = 0;
    uVar9 = uVar5 - (uVar5 - 1 & arg4);
    if (arg3 <= uVar9) {
        uVar9 = arg3;
    }
    uVar10 = arg3 - uVar9;
    uVar12 = uVar8;
    if (uVar10 != 0) {
        if (uVar5 < uVar10) {
            cVar6 = '\n';
            cVar4 = '\t';
            uStackX_10 = CONCAT35(uStackX_10._5_3_,0xff00000000);
            cVar2 = '\x06';
            acStackX_18[4] = 0xff;
            uStackX_8 = CONCAT35(uStackX_8._5_3_,0xff00000000);
            uStackX_10 = CONCAT44(uStackX_10._4_4_,0x8281020a);
            acStackX_18[0] = '\t';
            acStackX_18[1] = '\x11';
            acStackX_18[2] = '\r';
            acStackX_18[3] = '\x15';
            uStackX_8 = CONCAT44(uStackX_8._4_4_,0xd150906);
            if (*(arg2 + 0x40) != '\0') {
                uVar13 = 0;
                do {
                    if (*arg2 == cVar2) goto code_r0x000165f7;
                    uVar13 = uVar13 + 1;
                    cVar2 = *(&uStackX_8 + uVar13);
                } while (cVar2 != -1);
            }
            if (*(arg1 + 0x1a0) < 0x10101) {
                if (*(arg2 + 0x40) == '\0') {
                    uVar13 = 0;
                    do {
                        if (*arg2 == cVar4) goto code_r0x000165f7;
                        uVar13 = uVar13 + 1;
                        cVar4 = acStackX_18[uVar13];
                    } while (cVar4 != -1);
                }
                else {
                    uVar13 = 0;
                    do {
                        if (*arg2 == cVar6) {
code_r0x000165f7:
                            *_var_48h = uVar5 + uVar9;
                            return -0x7ffffffffffffffc;
                        }
                        uVar13 = uVar13 + 1;
                        cVar6 = acStackX_18[uVar13 - 8];
                    } while (cVar6 != -1);
                }
            }
            if (in_stack_00000028 == 0) {
                uVar1 = *(*(arg1 + 0x1c0) + 0x50);
                *in_stack_00000030 = uVar1;
                uStackX_10 = uVar5;
                iVar3 = (**(*(arg1 + 0x10) + 0x48))(*(arg1 + 0x10),2,uVar1,&uStackX_10,&uStackX_8);
                if (iVar3 < 0) {
                    return iVar3;
                }
            }
            else {
                *in_stack_00000030 = *(in_stack_00000028 + 0x20);
                uStackX_8 = *(in_stack_00000028 + 0x28);
            }
            uVar5 = *(arg1 + 0x3c);
            arg4 = uVar9 + arg4;
            piVar7 = *in_stack_00000030;
            uVar13 = *(arg1 + 0x3c) >> 3;
            do {
                *piVar7 = arg4;
                piVar7 = piVar7 + 1;
                if (uVar10 < uVar5) {
                    uVar14 = uVar10 & 0xffffffff;
                    uVar11 = uVar8;
                }
                else {
                    uVar11 = uVar10 - uVar5;
                    uVar14 = uVar5;
                    uVar10 = uVar5;
                }
                arg4 = arg4 + uVar10;
                uVar12 = uVar12 + uVar14;
                uVar13 = uVar13 - 1;
            } while ((uVar13 != 0) && (uVar10 = uVar11, uVar11 != 0));
            *(arg2 + 0x20) = uStackX_8;
        }
        else {
            *(arg2 + 0x20) = uVar9 + arg4;
            uVar12 = uVar10;
        }
    }
    *_var_48h = uVar12 + uVar9;
    return 0;
}


/* fcn.00016c54 @ 0x16c54 */

int64_t fcn.00016c54(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ushort *puVar1;
    ushort uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    char cVar6;
    int64_t iVar7;
    bool bVar8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = *(arg1_00 + 0x158);
    cVar6 = '\0';
    if (*(arg1_00 + 0x48) == 1) {
        return -0x7ffffffffffffff9;
    }
    while( true ) {
        iVar7 = -0x7ffffffffffffff9;
        if (*(arg2 + 0x40) == '\0') {
            uVar2 = puVar1[1];
        }
        else {
            uVar2 = *puVar1;
        }
        *(arg2 + 2) = uVar2;
        iVar5 = *(arg1_00 + 0x158);
        if (*(arg2 + 0x40) == '\0') {
            if (*(iVar5 + 0x12) == 0) {
                bVar8 = *(iVar5 + 0x14) == *(arg1_00 + 0xf8);
            }
            else {
                bVar8 = *(iVar5 + 0x14) - 1 == *(iVar5 + 0x12);
            }
            if ((bVar8) && (iVar4 = fcn.00017050(arg1), iVar4 < 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *(iVar5 + 0x14) * 0x40 + *(arg1_00 + 0xb8);
            if (iVar4 != arg2) {
                fcn.000102c0(iVar4,arg2,0x40);
            }
            *(iVar5 + 0x14) = *(iVar5 + 0x14) + 1;
            if (*(arg1_00 + 0xf8) < *(iVar5 + 0x14)) {
                *(iVar5 + 0x14) = 0;
            }
        }
        else {
            if (*(iVar5 + 8) == 0) {
                bVar8 = *(iVar5 + 10) == *(arg1_00 + 0xa0);
            }
            else {
                bVar8 = *(iVar5 + 10) - 1 == *(iVar5 + 8);
            }
            if ((bVar8) && (iVar4 = fcn.00017050(arg1), iVar4 < 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *(iVar5 + 10) * 0x40 + *(arg1_00 + 0x58);
            if (iVar4 != arg2) {
                fcn.000102c0(iVar4,arg2,0x40);
            }
            *(iVar5 + 10) = *(iVar5 + 10) + 1;
            if (*(arg1_00 + 0xa0) < *(iVar5 + 10)) {
                *(iVar5 + 10) = 0;
            }
        }
        if (*(arg2 + 0x40) == '\0') {
            uVar3 = puVar1[10];
        }
        else {
            uVar3 = puVar1[5];
        }
        fcn.00017308(arg1,(4 << (*(arg1_00 + 0x2f) & 0x1f)) * *(arg2 + 0x42) * 2 + 0x1000,uVar3);
        if (*arg2 == '\f') {
            return 0;
        }
        iVar5 = fcn.00016e84(arg1_00,arg2,arg3);
        if (((iVar5 == -0x7fffffffffffffeb) || (iVar5 == -0x7fffffffffffffee)) && (*(arg1_00 + 0x48) == 0)) {
            iVar7 = fcn.00017050(arg1);
            *(arg1_00 + 0x48) = iVar7 < 0;
        }
        if (-1 < iVar5) break;
        if (iVar7 < 0) {
            return iVar5;
        }
        bVar8 = cVar6 == '\0';
        cVar6 = cVar6 + -1;
        if (bVar8) {
            return iVar5;
        }
    }
    return iVar5;
}


/* fcn.00016094 @ 0x16094 */

ulong fcn.00016094(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x176cc;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00015f54(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00015e94(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00015e14(uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.000102c0(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x176cc) {
                fcn.000102c0(iVar4,0x176cc,4);
            }
            uVar2 = fcn.00015fa4(arg1,iVar3);
            (**(*0x17768 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00016690 @ 0x16690 */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00016690(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t *puVar2;
    char *arg1_00;
    uchar auVar3 [16];
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t arg2_00;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t arg1_01;
    uint16_t uVar13;
    uint16_t uVar14;
    uint64_t uStackX_8;
    uint16_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    uint64_t in_stack_00000028;
    int64_t in_stack_00000030;
    char in_stack_00000038;
    int64_t var_4fh;
    int16_t var_57h;
    uint64_t uStack_a0;
    int64_t arg_60h;
    uint64_t uVar15;
    uchar auStack_70 [7];
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    
    arg1_01 = *(arg1 + 0x18);
    puVar2 = *(arg1 + 0x1040);
    uVar15 = 0;
    arg_60h = 0;
    unique0x00023e00 = *(arg1_01 + 0x158);
    arg1_00 = *(arg1_01 + 0x40);
    iVar4 = &var_51h + 1;
    if (*puVar2 == arg2) {
        if (arg4 == 0) {
            iVar4 = 0;
        }
        else {
            if ((puVar2[4] < 2) || (in_stack_00000028 % puVar2[4] == 0)) {
                if (arg4 % puVar2[3] != 0) {
                    return -0x7ffffffffffffffc;
                }
                if ((arg3 <= *(puVar2 + 6)) && (arg4 / puVar2[3] + arg3 <= *(puVar2 + 6) + 1)) {
                    uVar13 = *(arg1 + 0xb8 + (*(arg1 + 0x52) & 0xf) * 4);
                    uStackX_8 = arg4;
                    uStackX_10 = uVar13;
                    iStackX_18 = arg3;
                    uStackX_20 = arg4;
                    iVar10 = arg1_01;
                    if (*(arg1_01 + 0x160) == '\0') {
                        if (*(arg1 + 0x1140) != 0) {
                            *(arg1 + 0x1160) = *(arg1 + 0x1158);
                            iVar5 = (**(*(arg1_01 + 0x10) + 0x48))(*(arg1_01 + 0x10));
                            if (iVar5 < 0) {
                                return iVar5;
                            }
                        }
                        if (*(arg1 + 0x1118) != 0) {
                            *(arg1 + 0x1138) = *(arg1 + 0x1130);
                            iVar5 = (**(*(arg1_01 + 0x10) + 0x48))(*(arg1_01 + 0x10));
                            if (iVar5 < 0) {
                                return iVar5;
                            }
                        }
                    }
                    while( true ) {
                        uVar1 = *(*(arg1_01 + 0x168) + 0x4d);
                        if (uVar1 == 0) {
                            uVar6 = puVar2[3] << 10;
                        }
                        else {
                            uVar6 = *(arg1_01 + 0x34) << (uVar1 & 0x3f);
                        }
                        if (uVar6 < uStackX_8) {
                            uStackX_8 = uVar6;
                        }
                        if (*(arg1 + 0x1118) == 0) {
                            uStack_a0 = in_stack_00000028;
                            if (*(arg1 + 0x1140) != 0) {
                                if (*(arg1 + 0x1160) < uStackX_8) {
                                    uStackX_8 = *(arg1 + 0x1160);
                                }
                            }
                        }
                        else {
                            arg_60h = (uStackX_8 / puVar2[3]) * uVar13;
                            uVar15 = uStackX_8 + arg_60h;
                            if (*(arg1 + 0x1138) < uStackX_8 + arg_60h) {
                                uVar15 = *(arg1 + 0x1138);
                            }
                            uStack_a0 = *(arg1 + 0x1120);
                            uStackX_8 = uVar15;
                            uVar15 = in_stack_00000028;
                        }
                        if (((*(arg1_01 + 0x160) == '\0') && (*(arg1 + 0x1118) == 0)) &&
                           (iVar5 = (**(*(arg1_01 + 0x10) + 0x48))
                                              (*(arg1_01 + 0x10),in_stack_00000038 == '\x02',in_stack_00000028,
                                               &uStackX_8,&uStack_a0,auStack_70), iVar5 < 0)) {
                            return iVar5;
                        }
                        fcn.000102a0(arg1_00,0x48,0);
                        *arg1_00 = in_stack_00000038;
                        arg1_00[0x40] = '\0';
                        iVar5 = fcn.000164c0(arg1_01,arg1_00,uStackX_8,uStack_a0,arg_60h,uVar15,iVar4,iVar10);
                        if (iVar5 < 0) goto code_r0x00016bfe;
                        uVar9 = puVar2[3];
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = stack0xffffffffffffff98 - arg_60h;
                        uVar7 = SUB168(auVar3 / ZEXT416(uVar9),0);
                        uVar14 = uVar13;
                        uVar6 = uVar15;
                        if ((in_stack_00000038 - 1U & 0xfb) == 0) {
                            if (*(arg1 + 0x1118) == 0) {
                                if ((*(arg1 + 0x1140) != 0) && (uVar7 != 0)) {
                                    uVar12 = uVar13;
                                    iVar5 = 0;
                                    uVar11 = uVar7;
                                    do {
                                        if (uVar12 != 0) {
                                            fcn.000102a0(*(arg1 + 0x1140) + iVar5,uVar12,0);
                                        }
                                        iVar5 = iVar5 + uVar12;
                                        uVar11 = uVar11 - 1;
                                        uVar14 = uStackX_10;
                                        uVar6 = uVar15;
                                    } while (uVar11 != 0);
                                }
                            }
                            else {
                                uVar11 = 0;
                                if (uVar7 != 0) {
                                    arg1_01 = iVar10;
                                    do {
                                        uVar12 = puVar2[3];
                                        iVar5 = uVar12 * uVar11 + uVar15;
                                        iVar10 = (uVar13 + puVar2[3]) * uVar11 + *(arg1 + 0x1118);
                                        if ((uVar12 != 0) && (iVar10 != iVar5)) {
                                            fcn.000102c0(iVar10,iVar5,uVar12);
                                        }
                                        if (uVar13 != 0) {
                                            fcn.000102a0((puVar2[3] + uVar13) * uVar11 + puVar2[3] + *(arg1 + 0x1118),
                                                         uVar13,0);
                                        }
                                        uVar11 = uVar11 + 1;
                                        uVar14 = uStackX_10;
                                        iVar10 = arg1_01;
                                    } while (uVar11 < uVar7);
                                }
                            }
                        }
                        arg1_00[1] = arg1_00[1] & 0x3c;
                        *(arg1_00 + 2) = *(stack0xffffffffffffffa0 + 2);
                        *(arg1_00 + 4) = *(arg1 + 0x14);
                        if (*(arg1 + 0x1140) == 0) {
                            uVar8 = 0;
                        }
                        else {
                            uVar8 = *(arg1 + 0x1148);
                        }
                        arg1_00[0x34] = '\0';
                        arg1_00[0x35] = '\0';
                        arg1_00[0x36] = '\0';
                        arg1_00[0x37] = '\0';
                        uVar9 = SUB164(auVar3 / ZEXT416(uVar9),0) + 0x7fffffff;
                        arg1_00[0x38] = '\0';
                        arg1_00[0x39] = '\0';
                        arg1_00[0x3a] = '\0';
                        arg1_00[0x3b] = '\0';
                        *(arg1_00 + 0x10) = uVar8;
                        *(arg1_00 + 0x28) = iStackX_18;
                        *(arg1_00 + 0x2c) = iStackX_18 >> 0x20;
                        *(arg1_00 + 0x30) = uVar9;
                        *(arg1_00 + 0x42) = *(arg1_01 + 0xa4);
                        if (in_stack_00000030 != 0) {
                            iVar4 = in_stack_00000030;
                        }
                        arg1_00[0x44] = -0x18;
                        arg1_00[0x45] = '\x03';
                        arg1_00[0x46] = '\0';
                        arg1_00[0x47] = '\0';
                        if ((*(arg1 + 0x55) & 7) != 0) {
                            *(arg1_00 + 0x30) = uVar9 | 0x20000000;
                        }
                        iVar5 = fcn.00016c54(arg1_01,arg1_00,iVar4);
                        if (iVar5 < 0) break;
                        uVar15 = uVar6;
                        if ((*(arg1 + 0x1118) != 0) && (uStackX_8 = uStackX_8 - arg_60h, in_stack_00000038 == '\x02'))
                        {
                            uVar11 = 0;
                            if (uVar7 != 0) {
                                do {
                                    arg1_01 = iVar10;
                                    uVar12 = puVar2[3];
                                    iVar10 = uVar12 * uVar11 + uVar6;
                                    arg2_00 = (puVar2[3] + uVar14) * uVar11 + *(arg1 + 0x1118);
                                    if ((uVar12 != 0) && (iVar10 != arg2_00)) {
                                        fcn.000102c0(iVar10,arg2_00,uVar12);
                                    }
                                    uVar11 = uVar11 + 1;
                                    iVar10 = arg1_01;
                                } while (uVar11 < uVar7);
                            }
                        }
                        iStackX_18 = iStackX_18 + uVar7;
                        uStackX_8 = uStackX_8 - puVar2[3] * uVar7;
                        uStackX_20 = uStackX_20 - puVar2[3] * uVar7;
                        in_stack_00000028 = in_stack_00000028 + puVar2[3] * uVar7;
                        if (uStackX_8 == 0) {
                            uStackX_8 = uStackX_20;
                        }
                        if ((*(arg1_01 + 0x160) == '\0') && (*(arg1 + 0x1118) == 0)) {
                            (**(*(arg1_01 + 0x10) + 0x50))(*(arg1_01 + 0x10));
                        }
                        if (uStackX_8 == 0) goto code_r0x00016bfe;
                        uVar13 = uStackX_10;
                    }
                    if (*(arg1_01 + 0x160) != '\0') {
                        return iVar5;
                    }
                    if (*(arg1 + 0x1118) == 0) {
                        (**(*(arg1_01 + 0x10) + 0x50))(*(arg1_01 + 0x10),_auStack_70);
                    }
code_r0x00016bfe:
                    if (*(arg1_01 + 0x160) == '\0') {
                        if (*(arg1 + 0x1140) != 0) {
                            (**(*(arg1_01 + 0x10) + 0x50))(*(arg1_01 + 0x10),*(arg1 + 0x1150));
                        }
                        if (*(arg1 + 0x1118) != 0) {
                            (**(*(arg1_01 + 0x10) + 0x50))(*(arg1_01 + 0x10),*(arg1 + 0x1128));
                        }
                    }
                    return iVar5;
                }
            }
            iVar4 = -0x7ffffffffffffffe;
        }
    }
    else {
        iVar4 = -0x7ffffffffffffff3;
    }
    return iVar4;
}


/* fcn.00013120 @ 0x13120 */

int64_t fcn.00013120(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint16_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t *piVar8;
    ulong uStackX_8;
    uchar auStack_38 [8];
    uint16_t uStack_30;
    
    uStackX_8 = 0x10;
    iVar6 = -0x7ffffffffffffffd;
    if ((*(*(arg1 + 0x168) + 0x100) & 1) != 0) {
        piVar8 = *(arg1 + 400);
        iVar4 = piVar8 + -0x221;
        if (piVar8 == arg1 + 400) {
            iVar4 = 0;
        }
        if ((iVar4 != 0) && (puVar1 = iVar4 + 0x10a0, arg2 != 0)) {
            (**(*0x17768 + 0x168))(arg2,4);
            piVar8 = arg1 + 0x150;
            if (*piVar8 == 0) {
                iVar6 = (**(*0x17768 + 0x40))(4,0x200,piVar8);
                if (iVar6 < 0) {
                    return iVar6;
                }
                iVar6 = fcn.00013064(arg1,*piVar8);
                if (iVar6 < 0) {
                    return iVar6;
                }
            }
            iVar4 = *piVar8;
            uVar5 = CONCAT11(*(iVar4 + 6),*(iVar4 + 7));
            if (uVar5 != 0) {
                if (uVar5 != NULL) {
                    pcVar7 = iVar4 + 8;
                    do {
                        if (((*pcVar7 == -0x11) && (*0x176f8 == 0)) &&
                           (cVar3 = fcn.00012c18(*(arg1 + 0x18),0x175a0), cVar3 == '\0')) {
                            (**(*0x17768 + 0x168))(auStack_38,0x10,0);
                            iVar6 = (**puVar1)(puVar1,0,100000000,0xef,0,0x10,auStack_38,&uStackX_8);
                            if (-1 < iVar6) {
                                *arg2 = uStack_30 << 8 | uStack_30 >> 8;
                            }
                        }
                        if (((*pcVar7 == '\x01') && (*0x17740 == 0)) &&
                           (cVar3 = fcn.00012c18(*(arg1 + 0x18),0x173f0), cVar3 == '\0')) {
                            piVar8 = *(arg1 + 0x148);
                            if (piVar8 == NULL) {
                                iVar6 = (**(*0x17768 + 0x40))(4,0x73);
                                if (iVar6 < 0) {
                                    return iVar6;
                                }
                                piVar8 = *(arg1 + 0x148);
                                (**(*0x17768 + 0x168))(piVar8,0x73);
                                *piVar8 = puVar1;
                            }
                            iVar6 = fcn.00012f4c(arg1,piVar8);
                            if (-1 < iVar6) {
                                uVar2 = *(piVar8 + 0x19);
                                *(arg2 + 2) = uVar2;
                                if ((*(piVar8 + 0x52) & 2) != 0) {
                                    *(arg2 + 2) = uVar2 | 8;
                                }
                            }
                        }
                        pcVar7 = pcVar7 + 1;
                    } while (pcVar7 + (-8 - iVar4) < uVar5);
                }
                return iVar6;
            }
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00012c18 @ 0x12c18 */

bool fcn.00012c18(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x17768 + 0x118))(param_1,param_2,0,0,0,4);
    return -1 < iVar1;
}


/* fcn.00012e84 @ 0x12e84 */

void fcn.00012e84(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int16_t iVar3;
    uint16_t *puVar4;
    
    uVar2 = *arg2;
    puVar4 = arg2 + 0x30;
    do {
        uVar1 = *puVar4;
        iVar3 = uVar1 * 0x100 + (uVar1 >> 8);
        if (iVar3 == 2) {
            *(arg1 + 0x19) = puVar4[2];
        }
        else if (iVar3 == 0x402) {
            *(arg1 + 0x4e) = uVar1 * 0x100 + (uVar1 >> 8);
            *(arg1 + 0x52) = *(arg1 + 0x52) ^ (puVar4[2] ^ *(arg1 + 0x52)) & 1;
            *(arg1 + 0x52) = *(arg1 + 0x52) ^ (puVar4[2] ^ *(arg1 + 0x52)) & 2;
            *(arg1 + 0x53) = *(arg1 + 0x53) ^ (*(puVar4 + 5) ^ *(arg1 + 0x53)) & 1;
        }
        puVar4 = puVar4 + *(puVar4 + 3) + 4;
    } while (puVar4 < (uVar2 >> 0x18) + 4 + ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 8 & 0xff00) + arg2)
    ;
    return;
}


/* fcn.00013064 @ 0x13064 */

ulong fcn.00013064(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uStackX_8;
    
    uStackX_8 = 0x200;
    if ((*(*(arg1 + 0x168) + 0x100) & 1) != 0) {
        piVar1 = *(arg1 + 400);
        iVar2 = piVar1 + -0x221;
        if (piVar1 == arg1 + 400) {
            iVar2 = 0;
        }
        if ((iVar2 != 0) && (arg2 != 0)) {
            (**(*0x17768 + 0x168))(arg2,0x200,0);
            uVar3 = (**(iVar2 + 0x10a0))(iVar2 + 0x10a0,0,100000000,0,0,0x200,arg2,&uStackX_8);
            return uVar3;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00012f4c @ 0x12f4c */

int64_t fcn.00012f4c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    ulong uStackX_18;
    
    iStackX_8 = 0;
    uStackX_18 = 0x200;
    if ((*(*(arg1 + 0x168) + 0x100) & 1) != 0) {
        piVar1 = *(arg1 + 400);
        if (piVar1 == arg1 + 400) {
            iVar3 = 0;
        }
        else {
            iVar3 = piVar1 + -0x221;
        }
        if ((iVar3 != 0) && (arg2 != 0)) {
            iVar2 = (**(*0x17768 + 0x40))(4,0x200,&iStackX_8);
            if (iVar2 < 0) {
                return -0x7ffffffffffffff7;
            }
            (**(*0x17768 + 0x168))(iStackX_8,uStackX_18,0);
            iVar3 = (**(iVar3 + 0x10a0))(iVar3 + 0x10a0,0,100000000,1,0x100,0x200,iStackX_8,&uStackX_18);
            if (-1 < iVar3) {
                fcn.00012e84(arg2,iStackX_8);
            }
            (**(*0x17768 + 0x48))(iStackX_8);
            return iVar3;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00015d98 @ 0x15d98 */

int64_t fcn.00015d98(void)

{
    if (*0x17778 == 0) {
        (**(*0x17768 + 0x140))(0x17400,0,0x17778);
    }
    return *0x17778;
}


/* fcn.00012c5c @ 0x12c5c */

void fcn.00012c5c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    char *pcVar7;
    uint8_t auStackX_8 [8];
    uchar *puStackX_18;
    
    puStackX_18 = NULL;
    if ((*(*(arg1 + 0x168) + 0x100) & 1) != 0) {
        piVar1 = *(arg1 + 400);
        if (piVar1 == arg1 + 400) {
            iVar6 = 0;
        }
        else {
            iVar6 = piVar1 + -0x221;
        }
        if (iVar6 != 0) {
            iVar4 = fcn.00013120(arg1,auStackX_8);
            iVar2 = *(arg1 + 0x150);
            if (((iVar2 != 0) && (-1 < iVar4)) && (pcVar7 = CONCAT11(*(iVar2 + 6),*(iVar2 + 7)), pcVar7 != NULL)) {
                pcVar5 = iVar2 + 8;
                do {
                    if (((*pcVar5 == -0x11) && (*0x176f8 == 0)) &&
                       (cVar3 = fcn.00012c18(*(iVar6 + 8),0x175a0), cVar3 == '\0')) {
                        if ((auStackX_8[0] & 0xc) == 0) {
                            (**(iVar6 + 0x10a8))(iVar6 + 0x10a0,0,100000000,0xef,0x500,0,0);
                            goto code_r0x00012d62;
                        }
                    }
                    else {
code_r0x00012d62:
                        if (((*pcVar5 == '\x01') && (arg2 != '\0')) &&
                           ((*0x17740 == 0 &&
                            ((((cVar3 = fcn.00012c18(*(arg1 + 0x18),0x173f0), cVar3 == '\0' &&
                               (iVar4 = *(arg1 + 0x148), iVar4 != 0)) && (*(iVar4 + 0x4e) == 0x402)) &&
                             (((*(iVar4 + 0x52) & 3) == 0 && ((*(iVar4 + 0x19) & 4) == 0)))))))) {
                            iVar4 = (**(*0x17768 + 0x40))(4,0x200,&puStackX_18);
                            if (iVar4 < 0) {
                                return;
                            }
                            (**(*0x17768 + 0x168))(puStackX_18,0x200,0);
                            *puStackX_18 = 1;
                            (**(iVar6 + 0x10a8))(iVar6 + 0x10a0,0,100000000,2,0x500,0x200,puStackX_18);
                            (**(*0x17768 + 0x48))(puStackX_18);
                        }
                    }
                    pcVar5 = pcVar5 + 1;
                } while (pcVar5 + (-8 - iVar2) < pcVar7);
            }
        }
    }
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00013f0c @ 0x13f0c */

int64_t fcn.00013f0c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    int iVar5;
    uint64_t arg2_00;
    uint8_t *puVar6;
    char cVar7;
    uint8_t uVar8;
    int64_t iStackX_10;
    
    puVar4 = NULL;
    *(arg1 + 0x10ca) = 1;
    *(arg1 + 0x10b4) = 0;
    uVar1 = *(*(arg1 + 0x1040) + 0xc);
    iStackX_10 = arg2;
    iVar2 = (**(*0x17768 + 0x28))(0,4,(uVar1 >> 0xc) + ((uVar1 & 0xfff) != 0),&iStackX_10);
    if (iVar2 < 0) {
        return iVar2;
    }
    uVar1 = **(arg1 + 0x1040);
    arg2_00 = uVar1;
    fcn.00016690(arg1,uVar1,0,(*(arg1 + 0x1040))[3]);
    if (*(iStackX_10 + 0x1fe) == -0x55ab) {
        uVar8 = 0;
        cVar7 = '\0';
        puVar6 = iStackX_10 + 0x1be;
        do {
            if (((*puVar6 & 0x7f) != 0) || (*(arg1 + 0x10c0) < *(puVar6 + 8))) goto code_r0x000140b0;
            cVar7 = cVar7 + '\x01';
            if ((*puVar6 < '\0') && (puVar4 == NULL)) {
                puVar4 = puVar6;
            }
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 0x10;
        } while (uVar8 < 4);
        if (cVar7 != '\0') {
            if (puVar4 == NULL) {
                puVar4 = iStackX_10 + 0x1be;
            }
            uVar1 = *(puVar4 + 8);
            *(arg1 + 0x10b4) = uVar1;
            iVar2 = fcn.00016690(arg1,**(arg1 + 0x1040),uVar1,(*(arg1 + 0x1040))[3]);
            if (iVar2 < 0) {
                uVar1 = *(*(arg1 + 0x1040) + 0xc);
                iVar5 = (uVar1 >> 0xc) + ((uVar1 & 0xfff) != 0);
                goto code_r0x00013fca;
            }
            iVar2 = iStackX_10;
            iVar3 = fcn.00014140(arg1,iStackX_10);
            if (iVar3 != 0) {
                fcn.000140e4(arg1,iVar2);
                *(arg1 + 0x10b4) = 0;
            }
        }
code_r0x000140b0:
        uVar1 = *(*(arg1 + 0x1040) + 0xc);
        (**(*0x17768 + 0x30))(iStackX_10,(uVar1 >> 0xc) + ((uVar1 & 0xfff) != 0));
        iVar2 = 0;
    }
    else {
        fcn.000140e4(arg1,arg2_00);
        uVar1 = *(*(arg1 + 0x1040) + 0xc);
        iVar5 = (uVar1 >> 0xc) + ((uVar1 & 0xfff) != 0);
code_r0x00013fca:
        (**(*0x17768 + 0x30))(iStackX_10,iVar5);
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00015d14 @ 0x15d14 */

ulong fcn.00015d14(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int16_t iVar2;
    
    iVar2 = 0;
    if ((arg2 == 0) || (arg1 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00015ce8(arg1);
    if (0xff < uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00015d87;
    }
    if (arg1 < arg2 + 0x100) {
        return 0x800000000000000f;
    }
code_r0x00015d87:
    for (; *arg1 != iVar2; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = iVar2;
    return 0;
}


/* fcn.000140e4 @ 0x140e4 */

ulong fcn.000140e4(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    int64_t iVar2;
    uint32_t uVar3;
    
    *(arg1 + 0x10b5) = 0xffff;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(arg1 + 0x10c0);
    iVar2 = SUB168(ZEXT816(0x515565a6aabafc1) * auVar1,8);
    *(arg1 + 0x10bc) = 0x3f3f;
    uVar3 = (*(arg1 + 0x10c0) - iVar2 >> 1) + iVar2 >> 0xd;
    if (uVar3 < 2) {
        uVar3 = uVar3 + 1;
    }
    if (0x3ff < uVar3) {
        uVar3 = 0x3ff;
    }
    *(arg1 + 0x10b8) = uVar3;
    *(arg1 + 0x10ba) = uVar3;
    return 0;
}


/* fcn.00014140 @ 0x14140 */

ulong fcn.00014140(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    int64_t iVar4;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    if ((*(iVar4 + 0x1fe) == -0x55ab) &&
       ((((*(iVar4 + 3) == 0x4f44534d || (*(iVar4 + 3) == 0x4957534d)) || (*(iVar4 + 3) == 0x5346544e)) ||
        ((*(iVar4 + 0x39) = 0x20, *(iVar4 + 0x36) == 0x20544146 || (*(iVar4 + 0x52) == 0x33544146)))))) {
        uVar1 = *(iVar4 + 0x18);
        uVar2 = *(iVar4 + 0x1a);
        if (uVar1 * uVar2 != 0) {
            if (*(iVar4 + 0x13) != 0) {
                *(arg1 + 0x10c0) = *(iVar4 + 0x13);
            }
            *(arg1 + 0x10b5) = uVar2;
            *(arg1 + 0x10b6) = uVar2;
            *(arg1 + 0x10bc) = uVar1;
            *(arg1 + 0x10bd) = uVar1;
            uVar3 = *(arg1 + 0x10c0) / (uVar1 * uVar2);
            if (uVar3 < 2) {
                uVar3 = uVar3 + 1;
            }
            if (0x3ff < uVar3) {
                uVar3 = 0x3ff;
            }
            *(arg1 + 0x10b8) = uVar3;
            *(arg1 + 0x10ba) = uVar3;
            return 0;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00013c4c @ 0x13c4c */

void fcn.00013c4c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    ulong *puStackX_10;
    
    iStackX_8 = arg1 + 0x18;
    iVar2 = (**(*0x17768 + 0x140))(0x17380,0,&puStackX_10);
    iVar1 = *0x17758;
    if (-1 < iVar2) {
        (**(*0x17768 + 0x160))(*0x17758,0x174c0,0x10);
        *(iVar1 + 0x10) = arg1;
        (**puStackX_10)(puStackX_10,*0x17758,&iStackX_8);
    }
    return;
}


/* fcn.00013ccc @ 0x13ccc */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00013ccc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    ushort *puStackX_10;
    ulong *puStackX_18;
    int64_t var_28h;
    int64_t var_30h_2;
    int64_t var_38h;
    ulong *puStack_48;
    int64_t iStack_40;
    uint32_t var_30h;
    int64_t var_28h_2;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    puStack_48 = NULL;
    puStackX_18 = NULL;
    puStackX_10 = NULL;
    var_28h = 0;
    if (((*(*(arg2 + 0x1040) + 0xc) == 0x200) && (iVar1 = (**(*0x17768 + 0x140))(0x173b0,0,&puStack_48), -1 < iVar1))
       && (puStack_48 != NULL)) {
        iVar1 = (**(*0x17768 + 0x40))(4,0x1d,&puStackX_18);
        if ((-1 < iVar1) && (iVar1 = (**(*0x17768 + 0x40))(4,0x12,&puStackX_10), -1 < iVar1)) {
            arg2_00 = 0x100;
            iVar1 = (**(*0x17768 + 0x40))(4,0x100,&var_28h);
            if (-1 < iVar1) {
                *(arg2 + 0x10c0) = *(*(arg2 + 0x1040) + 0x18);
                fcn.00013f0c(arg2,arg2_00);
                *puStackX_10 = *(*(arg2 + 0x1040) + 0xc);
                *(puStackX_10 + 1) = *(arg2 + 0x10c0);
                *(puStackX_10 + 5) = *(arg2 + 0x10b5);
                *(puStackX_10 + 0xb) = *(arg2 + 0x10bc);
                puStackX_10[6] = *(arg2 + 0x10b8);
                *(puStackX_10 + 7) = *(arg2 + 0x10b6);
                *(puStackX_10 + 0xf) = *(arg2 + 0x10bd);
                puStackX_10[8] = *(arg2 + 0x10ba);
                (**(*(arg1 + 0x10) + 0x70))(*(arg1 + 0x10),&var_20h,&iStack_40,&var_30h,&var_28h_2);
                fcn.00015d14(*(*(arg1 + 0x170) + 8),var_28h);
                *(puStackX_18 + 0x12) = (iStack_40 << 8) + (_var_30h << 3) + var_28h_2;
                *(puStackX_18 + 0x14) = var_28h;
                *puStackX_18 = puStackX_10;
                *(arg2 + 0x10b0) = *0x175c8;
                *(puStackX_18 + 1) = *0x175c8;
                *0x175c8 = *0x175c8 + 1;
                *(puStackX_18 + 0x1c) = 1;
                *(puStackX_18 + 10) = *(arg2 + 8);
                (**puStack_48)(puStackX_18);
                return;
            }
        }
        if (var_28h != 0) {
            (**(*0x17768 + 0x48))();
        }
        if (puStackX_10 != NULL) {
            (**(*0x17768 + 0x48))();
        }
        if (puStackX_18 != NULL) {
            (**(*0x17768 + 0x48))();
        }
    }
    return;
}


/* fcn.00015e48 @ 0x15e48 */

int64_t fcn.00015e48(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x17768 + 0x40))(noname_0,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010280(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00014714 @ 0x14714 */

int64_t fcn.00014714(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t iStackX_20;
    int64_t aiStack_68 [2];
    uchar in_stack_ffffffffffffffa9;
    uint in_stack_ffffffffffffffac;
    int64_t in_stack_ffffffffffffffb0;
    int64_t in_stack_ffffffffffffffb8;
    int64_t in_stack_ffffffffffffffc0;
    
    iStackX_8 = 0;
    aiStack_68[0] = 0;
    iStackX_20 = 0x1000;
    iVar1 = (**(*(arg1 + 0x10) + 0x48))(*(arg1 + 0x10),1,arg2,&iStackX_20,&iStackX_8,aiStack_68);
    if (-1 < iVar1) {
        fcn.00010280(&stack0xffffffffffffffa8,0x48);
        iVar1 = fcn.000164c0(arg1,&stack0xffffffffffffffa8,iStackX_20,iStackX_8,
                             CONCAT44(in_stack_ffffffffffffffac,
                                      CONCAT22(**(arg1 + 0x158),CONCAT11(in_stack_ffffffffffffffa9,10))),
                             in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
        if ((-1 < iVar1) && (iVar1 = fcn.00016c54(arg1,&stack0xffffffffffffffa8,arg3), aiStack_68[0] != 0)) {
            (**(*(arg1 + 0x10) + 0x50))(*(arg1 + 0x10));
        }
    }
    return iVar1;
}


/* fcn.00015dd4 @ 0x15dd4 */

ulong fcn.00015dd4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (arg1 == 0) {
        auStackX_10[0] = 0;
    }
    else {
        iVar1 = (**(*0x17768 + 0x28))(0,4,arg1,auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    return auStackX_10[0];
}


/* fcn.00014458 @ 0x14458 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00014458(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar *puStackX_8;
    int64_t iStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    uint32_t auStack_28 [4];
    int64_t var_10h;
    
    uVar2 = 0;
    iStackX_10 = 0;
    puStackX_8 = NULL;
    iVar1 = (**(*0x17768 + 0x138))(2,0x17550,0,&var_bp_20h,&var_28h);
    if ((-1 < iVar1) && (var_bp_20h != 0)) {
        iVar1 = (**(*0x17768 + 0x40))(4,0x48,&puStackX_8);
        if (-1 < iVar1) {
            if (var_bp_20h != 0) {
                do {
                    iVar1 = (**(*0x17768 + 0x98))(*(var_28h + uVar2 * 8),0x17550);
                    if ((-1 < iVar1) && ((*(*(iStackX_10 + 0x168) + 0x208) & 0x10) != 0)) {
                        fcn.000102a0(puStackX_8,0x48,0);
                        *puStackX_8 = 10;
                        *(puStackX_8 + 2) = **(iStackX_10 + 0x158);
                        *(puStackX_8 + 4) = 0;
                        *(puStackX_8 + 0x28) = 0x380;
                        puStackX_8[0x40] = 1;
                        *(puStackX_8 + 0x42) = 0;
                        *(puStackX_8 + 0x44) = 1000;
                        iVar1 = fcn.00016c54(iStackX_10,puStackX_8,auStack_28);
                        if ((-1 < iVar1) && ((auStack_28[0] & 1) != 0)) {
                            *puStackX_8 = 10;
                            *(puStackX_8 + 2) = **(iStackX_10 + 0x158);
                            *(puStackX_8 + 4) = 0;
                            *(puStackX_8 + 0x28) = 0x80;
                            puStackX_8[0x40] = 1;
                            *(puStackX_8 + 0x42) = 0;
                            *(puStackX_8 + 0x44) = 1000;
                            iVar1 = fcn.00016c54(iStackX_10,puStackX_8,auStack_28);
                            if ((-1 < iVar1) && (auStack_28[0] != -1)) {
                                *puStackX_8 = 9;
                                *(puStackX_8 + 0x28) = 0x80000080;
                                *(puStackX_8 + 0x2c) = auStack_28[0] + 1;
                                fcn.00016c54(iStackX_10,puStackX_8,auStack_28);
                            }
                        }
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < var_bp_20h);
            }
            (**(*0x17768 + 0x48))(var_28h);
            var_28h = puStackX_8;
        }
        (**(*0x17768 + 0x48))(var_28h);
    }
    return;
}


/* fcn.00014dfc @ 0x14dfc */

ulong fcn.00014dfc(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    (**(noname_0 + 0x58))(noname_0,0,6,((arg2 & 0xfffU) != 0) + (arg2 >> 0xc),arg1,0x880);
    return 0;
}


/* fcn.00014e38 @ 0x14e38 */

void fcn.00014e38(int64_t arg1,int64_t arg2)

{
    if (arg2 != 0) {
        if (*(arg2 + 0x30) != 0) {
            (**(arg1 + 0x60))(arg1,1);
        }
        if (*(arg2 + 0x38) != 0) {
            (**(arg1 + 0x60))(arg1,1);
        }
        if (*(arg2 + 0x40) != 0) {
            (**(arg1 + 0x60))(arg1,1);
        }
        if (*(arg2 + 0x48) != 0) {
            (**(arg1 + 0x60))(arg1,1);
        }
        if (*(arg2 + 0x50) != 0) {
            (**(arg1 + 0x60))(arg1,1);
        }
        if (*(arg2 + 0x60) != 0) {
            (**(arg1 + 0x60))(arg1,0x200);
        }
        if (*(arg2 + 0x58) != 0) {
            (**(*0x17768 + 0x48))();
        }
        (**(*0x17768 + 0x48))(arg2);
    }
    return;
}


/* fcn.00016488 @ 0x16488 */

ulong * fcn.00016488(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    
    if (arg1 != 0) {
        for (puVar1 = *(arg1 + 400); puVar1 != arg1 + 400; puVar1 = *puVar1) {
            if ((arg2 == -1) || (*(puVar1 + -0x10f4) == arg2)) {
                return puVar1 + -0x221;
            }
        }
    }
    return NULL;
}


/* fcn.00015ce8 @ 0x15ce8 */

uint64_t fcn.00015ce8(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (0xfe < uVar1) {
                return 0x100;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.00015ef8 @ 0x15ef8 */

bool fcn.00015ef8(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00015f54 @ 0x15f54 */

char * fcn.00015f54(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00015ef8(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00015e94 @ 0x15e94 */

int64_t fcn.00015e94(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x17768 + 0x40))(4,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = fcn.000102c0(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.00015e14 @ 0x15e14 */

ulong fcn.00015e14(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x17768 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00015fa4 @ 0x15fa4 */

int64_t fcn.00015fa4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x176cc;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00015ef8(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00015ef8(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00015f54(arg1);
        iVar4 = fcn.00015f54(arg2);
        iVar2 = fcn.00015e14(iVar4 + -4 + iVar3);
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.000102c0(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.000102c0(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00015f54(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00015e94(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.00017050 @ 0x17050 */

int64_t fcn.00017050(uint32_t arg1)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    int iVar5;
    uchar auStack_68 [80];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = *(arg1_00 + 0x158);
    if ((*(arg1_00 + 0x160) == '\0') && (*(arg1_00 + 0x48) != 2)) {
        *(arg1_00 + 0x48) = 2;
        uVar3 = fcn.000172ac(arg1,0x14);
        iVar5 = *(arg1_00 + 0x2e) * 500;
        uVar2 = fcn.000172ac(arg1,0x14);
        if ((uVar2 & 1) != 0) {
            fcn.00017308(arg1,0x14,0);
            do {
                uVar2 = fcn.000172ac(arg1,0x1c);
                if ((uVar2 & 1) == 0) break;
                fcn.000161dc(0xdfb);
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
        if (iVar5 != 0) {
            fcn.00017308(arg1,0x24,*(arg1_00 + 0xa0));
            fcn.00017308(arg1,0x28,*(arg1_00 + 0x60));
            fcn.00017308(arg1,0x2c,*(arg1_00 + 0x60) >> 0x20);
            fcn.00017308(arg1,0x30,*(arg1_00 + 0x88));
            fcn.00017308(arg1,0x34,*(arg1_00 + 0x88) >> 0x20);
            fcn.00017308(arg1,0x14,uVar3 | 1);
            iVar5 = *(arg1_00 + 0x2e) * 500;
            do {
                uVar2 = fcn.000172ac(arg1,0x1c);
                if ((uVar2 & 1) != 0) break;
                fcn.000161dc(0xdfb);
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            if (iVar5 != 0) {
                puVar1 = iVar4 + 0xc;
                *puVar1 = *puVar1 & 0xfe;
                *(iVar4 + 4) = 0;
                iVar4 = fcn.00017218(arg1,auStack_68);
                if (iVar4 < 0) {
                    return iVar4;
                }
                if (*(arg1_00 + 0xa4) != 1) {
                    return iVar4;
                }
                iVar4 = fcn.000162c8(arg1_00,auStack_68,1,*(arg1_00 + 0xf8));
                return iVar4;
            }
        }
    }
    return -0x7ffffffffffffff9;
}


/* fcn.00016e84 @ 0x16e84 */

ulong fcn.00016e84(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    
    uVar6 = 0;
    piVar3 = *(arg1 + 0x158);
    iVar8 = *(arg2 + 0x44) * 100;
    if (*(arg2 + 0x40) == '\0') {
        iVar2 = piVar3[1];
        iVar7 = *(arg1 + 0xe0);
        uVar5 = piVar3[7];
    }
    else {
        iVar2 = *piVar3;
        iVar7 = *(arg1 + 0x80);
        uVar5 = piVar3[2];
    }
    if (uVar5 == 0) {
        if (*(arg2 + 0x40) == '\0') {
            *(piVar3 + 0xb) = *(piVar3 + 0xb) ^ (~*(piVar3 + 0xb) ^ *(piVar3 + 0xb)) & 1;
        }
        else {
            *(piVar3 + 6) = *(piVar3 + 6) ^ (~*(piVar3 + 6) ^ *(piVar3 + 6)) & 1;
        }
    }
    iVar7 = uVar5 * 0x10 + iVar7;
    do {
        if ((*(iVar7 + 0xc) == iVar2) && (*(iVar7 + 10) == *(arg2 + 0x42))) {
            if (*(arg2 + 0x40) == '\0') {
                uVar1 = *(piVar3 + 0xb);
            }
            else {
                uVar1 = *(piVar3 + 6);
            }
            if ((*(iVar7 + 0xe) & 1) == (uVar1 & 1)) {
                if (iVar8 == 0) {
                    return 0x8000000000000012;
                }
                uVar5 = *(iVar7 + 8);
                if (*(arg2 + 0x40) == '\0') {
                    piVar3[9] = uVar5;
                    piVar3[7] = uVar5;
                }
                else {
                    piVar3[4] = uVar5;
                    piVar3[2] = uVar5;
                }
                fcn.00017308(arg1,(4 << (*(arg1 + 0x2f) & 0x1f)) * (*(arg2 + 0x42) * 2 + 1) + 0x1000,uVar5);
                if (((*(iVar7 + 0xe) & 0x1fe) != 0) || ((*(iVar7 + 0xe) & 0xe00) != 0)) {
                    uVar6 = 0x8000000000000007;
                }
                if (arg3 != iVar7) {
                    fcn.000102c0(arg3,iVar7,0x10);
                }
                if (*(arg2 + 0x40) == '\0') {
                    piVar3[1] = piVar3[1] + 1;
                }
                else {
                    *piVar3 = *piVar3 + 1;
                }
                return uVar6;
            }
        }
        uVar4 = fcn.000172ac(arg1,0x1c);
        if ((uVar4 & 2) != 0) {
            return 0x8000000000000015;
        }
        fcn.000161dc(0x23);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return 0x8000000000000012;
}


/* fcn.000161dc @ 0x161dc */

void fcn.000161dc(int64_t arg1)

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
            fcn.00010340();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


