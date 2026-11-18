// decompiled by r2ghidra: 1692_FastBootRuntime.pe32
// functions: 14

/* entry0 @ 0x11110 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.0001113c(arg1,arg2);
    iVar1 = fcn.000113ac(arg1,arg2);
    if (iVar1 < 0) {
        fcn.0001133c();
    }
    return iVar1;
}


/* fcn.0001113c @ 0x1113c */

void fcn.0001113c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x12190 = *(arg1 + 0x58);
    *0x12188 = *(arg1 + 0x60);
    *0x12180 = arg1;
    *0x12198 = *0x12190;
    *0x121b0 = *0x12188;
    (**(*0x12188 + 0x50))(0x201,8,0x11864,0,0x121a0);
    (**(*0x121b0 + 0x50))(0x60000202,8,0x11870,0,0x121a8);
    fcn.00011898();
    puVar4 = fcn.00011898();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000111f5:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011040();
                fcn.00011030();
                uVar2 = in(0x1808);
                fcn.00011010(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00011000();
                }
                fcn.00011010(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011030();
                }
                else {
                    fcn.00011020();
                }
code_r0x0001125e:
                *0x12208 = *0x12190;
                (**(*0x12188 + 0x50))(0x60000202,0x10,0x11908,0,0x12200);
                (**(*0x12188 + 0x50))(0x201,0x10,0x11904,0,0x12210);
                fcn.0001191c();
                (**(*0x12188 + 0x170))(0x200,0x10,0x1197c,0,0x12030,0x121f0);
                (**(*0x12188 + 0x170))(0x200,0x10,0x119a4,0,0x12020,0x121f8);
                return;
            }
            if ((*0x120b8 == *(puVar4 + 4)) && (*0x120c0 == *(puVar4 + 8))) goto code_r0x0001125e;
        }
        else if (uVar1 == 4) goto code_r0x000111f5;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113ac @ 0x113ac */

ulong fcn.000113ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    if (*0x121e8 == 0) {
        *0x121d8 = *(arg2 + 0x60);
        *0x121e0 = *(arg2 + 0x58);
        *0x121e8 = arg2;
    }
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x12188 + 0x140))(0x12068,0,auStackX_18);
    if (iVar1 < 0) {
        iVar1 = (**(*0x121d8 + 0x50))(0x200,8,fcn.00011654,0,aiStackX_8);
        if (-1 < iVar1) {
            (**(*0x121d8 + 0xa8))(0x12068,aiStackX_8[0],auStackX_20);
        }
    }
    else {
        fcn.00011654(0,0);
    }
    return 0;
}


/* fcn.0001133c @ 0x1133c */

void fcn.0001133c(void)

{
    (**(*0x12188 + 0x70))(*0x121f0);
    (**(*0x12188 + 0x70))(*0x121f8);
    (**(*0x12188 + 0x70))(*0x12200);
    (**(*0x12188 + 0x70))(*0x12210);
    (**(*0x121b0 + 0x70))(*0x121a0);
    //WARNING: Could not recover jumptable at 0x000113a7. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x121b0 + 0x70))(*0x121a8);
    return;
}


/* fcn.00011898 @ 0x11898 */

int64_t fcn.00011898(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x121c0 == 0) {
        *0x121c0 = 0;
        if (*(*0x12180 + 0x68) != 0) {
            piVar2 = *(*0x12180 + 0x70);
            do {
                if ((*0x12010 == *piVar2) && (*0x12018 == piVar2[1])) {
                    *0x121c0 = (*(*0x12180 + 0x70))[uVar1 * 3 + 2];
                    return *0x121c0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12180 + 0x68));
        }
    }
    return *0x121c0;
}


/* fcn.00011040 @ 0x11040 */

uint64_t fcn.00011040(void)

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


/* fcn.00011030 @ 0x11030 */

void fcn.00011030(void)

{
    return;
}


/* fcn.00011010 @ 0x11010 */

uint64_t fcn.00011010(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011002 @ 0x11002 */

void fcn.00011002(void)

{
    return;
}


/* fcn.00011020 @ 0x11020 */

void fcn.00011020(void)

{
    return;
}


/* fcn.0001191c @ 0x1191c */

void fcn.0001191c(void)

{
    int64_t iVar1;
    
    if ((((*0x121d0 == 0) && (*0x121c8 == '\0')) && (*0x12188 != 0)) && (*(*0x12188 + 0x140) != NULL)) {
        iVar1 = (**(*0x12188 + 0x140))(0x12000,0,0x121d0);
        if (iVar1 < 0) {
            *0x121d0 = 0;
        }
    }
    return;
}


/* fcn.00011654 @ 0x11654 */

void fcn.00011654(void)

{
    int64_t iVar1;
    ulong uVar2;
    int aiStackX_18 [2];
    uint auStackX_20 [2];
    int32_t var_c40h;
    int64_t var_c48h;
    ulong uStack_cf8;
    uint uStack_cf0;
    uchar auStack_cec [4];
    ulong uStack_ce8;
    uchar auStack_ce0 [40];
    uchar auStack_cb8 [4];
    char cStack_cb4;
    
    aiStackX_18[0] = 0;
    uStack_ce8 = 0;
    uStack_cf8 = 0xca9;
    (**(*0x12188 + 0x168))(0x12220,0x4d);
    (**(*0x12188 + 0x80))(&uStack_ce8,0x120a8,0,0x12220);
    iVar1 = (**(*0x12190 + 0x48))(L"Setup",0x12048,auStack_cec,&uStack_cf8,auStack_cb8);
    if ((iVar1 < 0) || (cStack_cb4 == '\0')) {
        *0x12220 = '\0';
    }
    else if (cStack_cb4 == '\x01') {
        *0x12220 = cStack_cb4;
    }
    uStack_cf8 = 0x26;
    iVar1 = (**(*0x12190 + 0x48))(L"LastBoot",0x12058,auStackX_20,&uStack_cf8,auStack_ce0);
    *0x1222f = -1 < iVar1;
    fcn.00011458(auStack_cb8,auStack_ce0);
    if ((*0x12220 != '\0') && (*0x1222f != '\0')) {
        uStack_cf8 = 4;
        iVar1 = (**(*0x12190 + 0x48))(L"LastBootFailed",0x12058,&uStack_cf0,&uStack_cf8,aiStackX_18);
        if ((iVar1 < 0) || (aiStackX_18[0] == 0)) {
            uVar2 = 4;
            aiStackX_18[0] = 0x55aa55aa;
            uStack_cf0 = 7;
        }
        else {
            if (aiStackX_18[0] == 0x55aa55aa) {
                aiStackX_18[0] = 1;
            }
            else {
                aiStackX_18[0] = aiStackX_18[0] + 1;
                if (aiStackX_18[0] == 5) {
                    (**(*0x12190 + 0x58))(L"LastBoot",0x12058,auStackX_20[0],0,auStack_ce0);
                    *0x1222f = '\0';
                    aiStackX_18[0] = 0x55aa55aa;
                }
            }
            uVar2 = uStack_cf8;
        }
        (**(*0x12190 + 0x58))(L"LastBootFailed",0x12058,uStack_cf0,uVar2,aiStackX_18);
    }
    return;
}


/* fcn.000119bc @ 0x119bc */

ulong fcn.000119bc(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x121d8 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00011458 @ 0x11458 */

//WARNING: Variable defined which should be unmapped: var_fh

void fcn.00011458(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t var_fh;
    int64_t aiStackX_10 [3];
    int64_t var_6fh;
    int64_t var_77h;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    int16_t aiStack_78 [20];
    int16_t aiStack_50 [15];
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    uint32_t var_19h;
    
    *0x12221 = *(arg2 + 2) & 3;
    uStack_88 = 0xc811fa38;
    *0x12222 = *arg2;
    uVar3 = 0;
    *0x1223d = 1;
    *0x12224 = *(arg2 + 0xb);
    *0x1223e = 1;
    *0x12230 = *(arg2 + 7);
    aiStackX_10[0] = 0;
    uStack_84 = 0x457942c8;
    uStack_80 = 0xe960bba9;
    uStack_7c = 0x34fbdd4e;
    aiStackX_10[1] = 0x51;
    iVar1 = (**(*0x12190 + 0x48))(L"AMITSESetup",&uStack_88,0,aiStackX_10 + 1,aiStack_78);
    if (-1 < iVar1) {
        uVar2 = uVar3;
        do {
            if (aiStack_78[uVar2] != 0) {
                *0x1226a = 1;
                break;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x14);
        uVar2 = uVar3;
        do {
            if (aiStack_50[uVar2] != 0) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x14);
    }
    aiStackX_10[0] = 0;
    iVar1 = (**(*0x121e0 + 0x48))(L"FastBootOption",0x12058,0,aiStackX_10,0);
    if (iVar1 < 0) {
        if (iVar1 == -0x7ffffffffffffffb) {
            uVar3 = fcn.000119bc(aiStackX_10[0]);
            if (uVar3 == 0) {
                return;
            }
            iVar1 = (**(*0x121e0 + 0x48))(L"FastBootOption",0x12058,0,aiStackX_10,uVar3);
        }
        if (iVar1 < 0) {
            return;
        }
    }
    *0x1226b = 0;
    *0x12262 = 4;
    *0x1225a = 0x12040;
    *0x12259 = *(arg1 + 0xd);
    *0x12258 = *(arg1 + 0xc);
    *0x12257 = *(arg1 + 0xb);
    *0x12256 = *(arg1 + 10);
    *0x12253 = *(arg1 + 9);
    *0x12252 = *(arg1 + 8);
    *0x1224a = 3;
    *0x12242 = 0x12078;
    *0x12241 = *(arg1 + 7);
    *0x12240 = *(arg1 + 6);
    *0x1223f = *(arg1 + 5);
    *0x1223c = 1;
    *0x12226 = uVar3;
    return;
}


