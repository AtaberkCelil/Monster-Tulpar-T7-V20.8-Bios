// decompiled by r2ghidra: 1687_TpvDxe.pe32
// functions: 25

/* entry0 @ 0x10440 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001045c(arg1,arg2);
    fcn.0001052c(arg1,arg2);
    return;
}


/* fcn.0001045c @ 0x1045c */

void fcn.0001045c(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x128d8 = *(arg1 + 0x60);
    *0x128d0 = arg1;
    fcn.000120e8();
    iVar3 = fcn.00012154();
    if (iVar3 == 0) {
        uVar4 = fcn.00010380();
        fcn.00010370();
        uVar1 = in(0x1808);
        fcn.00010350(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010340();
        }
        fcn.00010350(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010370();
        }
        else {
            fcn.00010360();
        }
    }
    if ((*0x12908 != NULL) || (iVar3 = (**(*0x128d8 + 0x140))(0x127a0,0,0x12908), -1 < iVar3)) {
        (***0x12908)(*0x12908,0x12910);
    }
    return;
}


/* fcn.0001052c @ 0x1052c */

//WARNING: Variable defined which should be unmapped: var_fh

ulong fcn.0001052c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t auStackX_8 [2];
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_4f0h;
    int64_t var_4f8h;
    uchar auStack_5a8 [16];
    uchar auStack_598 [177];
    char cStack_4e7;
    uint32_t var_fh;
    
    uStackX_20 = 0;
    auStackX_8[0] = arg1 & 0xffffffff00000000;
    if (*0x128f8 == 0) {
        *0x128e8 = *(arg2 + 0x60);
        *0x128f0 = *(arg2 + 0x58);
        *0x128f8 = arg2;
    }
    iVar1 = (**(*0x128e8 + 0x50))(0x200,8,0x10724,0,&uStackX_18);
    if (-1 < iVar1) {
        (**(*0x128e8 + 0xa8))(0x126e0,uStackX_18,auStack_5a8);
    }
    (**(*0x128e8 + 0x170))(0x200,8,0x106c4,0,0x12790,&uStackX_18);
    (**(*0x128e8 + 0x170))(0x200,8,0x11e64,0,0x12790,&uStackX_18);
    uStackX_20 = 0x578;
    fcn.00010260(auStack_598,0x578);
    (**(*0x128f0 + 0x48))(L"SaSetup",0x12780,auStackX_8,&uStackX_20,auStack_598);
    if (((cStack_4e7 - 1U & 0xfc) == 0) && (cStack_4e7 != '\x02')) {
        (**(*0x128e8 + 0x170))(0x200,8,0x11a34,0,0x12790,&uStackX_18);
    }
    return 0;
}


/* fcn.000120e8 @ 0x120e8 */

int64_t fcn.000120e8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12900 == 0) {
        *0x12900 = 0;
        if (*(*0x128d0 + 0x68) != 0) {
            piVar2 = *(*0x128d0 + 0x70);
            do {
                if ((*0x12770 == *piVar2) && (*0x12778 == piVar2[1])) {
                    *0x12900 = (*(*0x128d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x12900;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x128d0 + 0x68));
        }
    }
    return *0x12900;
}


/* fcn.00012154 @ 0x12154 */

void fcn.00012154(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000120e8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001218b:
            if ((piVar1 == NULL) || ((*0x127d0 == *(piVar1 + 4) && (*0x127d8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001218b;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 9344 named .text
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


/* fcn.00012360 @ 0x12360 */

void fcn.00012360(void)

{
    (**(*0x128d8 + 0x140))(0x12760,0,0x12918);
    //WARNING: Could not recover jumptable at 0x0001239c. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x128d8 + 0x140))(0x12750,0,0x12920);
    return;
}


/* fcn.000123a4 @ 0x123a4 */

int64_t fcn.000123a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    ulong uStackX_20;
    int *apiStack_18 [2];
    
    iVar1 = arg1;
    if ((*0x12920 == NULL) && (fcn.00012360(), *0x12920 == NULL)) {
        return -0x7ffffffffffffffa;
    }
    uStackX_20 = 0;
    iVar1 = fcn.000124d4(iVar1,apiStack_18,&uStackX_20);
    if (-1 < iVar1) {
        if (apiStack_18[0] != NULL) {
            for (piVar2 = apiStack_18[0]; piVar2 < apiStack_18[0][1] + apiStack_18[0]; piVar2 = piVar2 + 1) {
                if ((*piVar2 == arg1) && (*(piVar2 + -1) == '\b')) {
                    if (((arg3 == 2) && (piVar2[1] == '\v')) || ((arg3 == 4 && (piVar2[1] == '\f')))) {
                        if (piVar2 + 5 != arg2) {
                            fcn.000102a0(piVar2 + 5,arg2,arg3);
                        }
                        (*(*0x12920)[1])(*0x12920,uStackX_20);
                        uStackX_20 = 0;
                        iVar1 = (***0x12920)(*0x12920,apiStack_18[0],apiStack_18[0][1],&uStackX_20);
                    }
                    else {
                        iVar1 = -0x7ffffffffffffffc;
                    }
                    (**(*0x128d8 + 0x48))(apiStack_18[0]);
                    return iVar1;
                }
            }
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001203c @ 0x1203c */

int64_t fcn.0001203c(void)

{
    if (*0x128e0 == 0) {
        (**(*0x128d8 + 0x140))(0x12720,0,76000);
    }
    return *0x128e0;
}


/* fcn.0001147c @ 0x1147c */

int64_t fcn.0001147c(void)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x128e8 + 0x40))(10,0x2d,0x12930);
    if (-1 < iVar1) {
        (**(*0x128e8 + 0x168))(CONCAT44(*0x12934,*0x12930),0x2d,0);
        *(**0x12950 + 0x15) = 0x100;
        *(**0x12950 + 0x19) = 0x400;
        *(**0x12950 + 0x19) = 0x80010400;
        *(**0x12950 + 0x1d) = (*(*0x12960 + 8) & 0xff00) << 10 | 0x300;
        *(**0x12950 + 0x21) = (*(*0x12960 + 0xc) & 0xff00) << 10 | 0x301;
        *(**0x12950 + 0x25) = (*(*0x12960 + 0x10) & 0xff00) << 10 | 0x302;
        *(**0x12950 + 0x29) = (*(*0x12960 + 0x14) & 0xff00) << 10 | 0x303;
        *(**0x12950 + 0x2d) = (*(*0x12960 + 0x18) & 0xff00) << 10 | 0x304;
        *(**0x12950 + 0x31) = 0x305;
        *(**0x12950 + 0x14) = 7;
        *(**0x12950 + 0xcc) = *0x12930;
        (**(*0x128e8 + 0x160))(CONCAT44(*0x12934,*0x12930),"NVSG-IGD-DSM-VAR",0x11);
        *(CONCAT44(*0x12934,*0x12930) + 0x10) = 1;
        *(CONCAT44(*0x12934,*0x12930) + 0x14) = 0x201;
        *(CONCAT44(*0x12934,*0x12930) + 0x28) = *(**0x12950 + 8);
        *(CONCAT44(*0x12934,*0x12930) + 0x2b) = *(*(*0x12960 + 0x20) + 0x10);
        iVar1 = (**(*0x128e8 + 0x40))(10,0x300ec,0x12938);
        if (iVar1 < 0) {
            (**(*0x128e8 + 0x48))(CONCAT44(*0x12934,*0x12930));
        }
        else {
            (**(*0x128e8 + 0x168))(CONCAT44(*0x1293c,*0x12938),0x300ec,0);
            *(**0x12950 + 0xd0) = *0x12938;
            *(*0x12960 + 0x30) = 1;
            (**(*0x128e8 + 0x160))(CONCAT44(*0x1293c,*0x12938),"NvSwitchable_Gfx",0x11);
            *(CONCAT44(*0x1293c,*0x12938) + 0x10) = 0xc1;
            *(CONCAT44(*0x1293c,*0x12938) + 0x14) = 0x201;
            *(CONCAT44(*0x1293c,*0x12938) + 0x18) = *0x12938;
            *(CONCAT44(*0x1293c,*0x12938) + 0x1c) = *(*0x12960 + 0x24);
            (**(*0x128e8 + 0x160))(CONCAT44(*0x1293c,*0x12938) + 0x20,*(*0x12960 + 0x28),*(*0x12960 + 0x24));
            *(*0x12960 + 0x28) = *0x12938 + 0x20;
            if (iVar1 != 0) {
                (**(*0x128e8 + 0x48))(CONCAT44(*0x12934,*0x12930));
                (**(*0x128e8 + 0x48))(CONCAT44(*0x1293c,*0x12938));
            }
        }
    }
    return iVar1;
}


/* fcn.00011784 @ 0x11784 */

int64_t fcn.00011784(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar2 = (**(*0x128e8 + 0x40))(10,0x10053,0x12948);
    if (-1 < iVar2) {
        (**(*0x128e8 + 0x168))(CONCAT44(*0x1294c,*0x12948),0x10053,0);
        *(**0x12950 + 0xd4) = *0x12948;
        *(CONCAT44(*0x1294c,*0x12948) + 0x18) = *0x12948;
        *(**0x12950 + 0x15) = 0x100;
        *(**0x12950 + 0x19) = 0x400;
        *(**0x12950 + 0x1d) = 0x300;
        *(**0x12950 + 0x21) = 0x301;
        *(**0x12950 + 0x25) = 0x302;
        *(**0x12950 + 0x29) = 0x303;
        *(**0x12950 + 0x2d) = 0x304;
        *(**0x12950 + 0x31) = 0x305;
        iVar1 = *0x128e8;
        *(**0x12950 + 0x14) = 7;
        (**(iVar1 + 0x160))(CONCAT44(*0x1294c,*0x12948),"AMD--PowerXpress",0x11);
        *(CONCAT44(*0x1294c,*0x12948) + 0x10) = 0x81;
        *(CONCAT44(*0x1294c,*0x12948) + 0x14) = 0x201;
        *(CONCAT44(*0x1294c,*0x12948) + 0x20) = 0xf;
        *(CONCAT44(*0x1294c,*0x12948) + 0x22) = 2;
        *(CONCAT44(*0x1294c,*0x12948) + 0x24) = 1;
        *(CONCAT44(*0x1294c,*0x12948) + 0x26) = 8;
        *(CONCAT44(*0x1294c,*0x12948) + 0x28) = 0x80;
        *(CONCAT44(*0x1294c,*0x12948) + 0x2a) = 0x200;
        *(CONCAT44(*0x1294c,*0x12948) + 0x2c) = 0x400;
        *(CONCAT44(*0x1294c,*0x12948) + 0x2e) = 0x800;
        *(CONCAT44(*0x1294c,*0x12948) + 0x30) = 3;
        *(CONCAT44(*0x1294c,*0x12948) + 0x32) = 9;
        *(CONCAT44(*0x1294c,*0x12948) + 0x34) = 0x81;
        *(CONCAT44(*0x1294c,*0x12948) + 0x36) = 0x201;
        *(CONCAT44(*0x1294c,*0x12948) + 0x38) = 0x401;
        *(CONCAT44(*0x1294c,*0x12948) + 0x3a) = 0x801;
        *(CONCAT44(*0x1294c,*0x12948) + 0x3c) = 0;
        *(CONCAT44(*0x1294c,*0x12948) + 0x3e) = 0;
        *(CONCAT44(*0x1294c,*0x12948) + 0x4e) = *(**0x12950 + 8);
        *(CONCAT44(*0x1294c,*0x12948) + 0x51) = *(*(*0x12960 + 0x20) + 0x10);
        *(CONCAT44(*0x1294c,*0x12948) + 0x1c) = *(*0x12960 + 0x24);
        (**(*0x128e8 + 0x160))(CONCAT44(*0x1294c,*0x12948) + 0x53,*(*0x12960 + 0x28),*(*0x12960 + 0x24));
        *(*0x12960 + 0x28) = *0x12948 + 0x53;
    }
    return iVar2;
}


/* fcn.000121a4 @ 0x121a4 */

ulong fcn.000121a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    bool bVar2;
    ulong uVar3;
    uint8_t uVar4;
    char cVar5;
    unkbyte7 Var6;
    int64_t iVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uint32_t *in_stack_00000028;
    uchar *in_stack_00000030;
    
    auStackX_8[0] = 0;
    auStackX_10[0] = 0;
    uVar4 = arg2;
    uVar10 = arg1;
    do {
        if (uVar4 < uVar10) {
            return 0x800000000000000e;
        }
        uVar9 = 0;
        do {
            bVar2 = false;
            arg2 = arg2 & 0xffffffffffffff00;
            do {
                cVar5 = arg2;
                if ((cVar5 != '\0') && (!bVar2)) break;
                iVar7 = ((arg2 & 0xffU) + (uVar10 * 0x20 + uVar9) * 8) * 0x1000;
                Var6 = arg2 >> 8;
                if (*(iVar7 + 0xc0000000) != -1) {
                    uVar8 = *(iVar7 + 0xc000000e);
                    if ((cVar5 == '\0') && (uVar8 < '\0')) {
                        bVar2 = true;
                    }
                    if ((uVar8 & 3) == 0) {
                        if (*(iVar7 + 0xc000000b) == '\x03') {
                            iVar1 = *(((arg2 & 0xffU) + ((uVar10 + 0xc00) * 0x20 + uVar9) * 8) * 0x1000);
                            if ((iVar1 != 0x10de) && (iVar1 != 0x1002)) {
                                return 0x800000000000000e;
                            }
                            *arg3 = uVar10;
                            *arg4 = uVar9;
                            *in_stack_00000028 = arg2 & 0xff;
                            return 0;
                        }
                    }
                    else if ((uVar8 & 3) == 1) {
                        *in_stack_00000030 = 1;
                        uVar3 = fcn.000121a4(uVar10 + 1,CONCAT71(Var6,uVar4),auStackX_8,auStackX_10);
                        *arg3 = auStackX_8[0];
                        *arg4 = auStackX_10[0];
                        *in_stack_00000028 = 0;
                        return uVar3;
                    }
                }
                arg2 = CONCAT71(Var6,cVar5 + 1U);
            } while (cVar5 + 1U < 8);
            uVar8 = uVar9 + 1;
            uVar9 = uVar8;
        } while (uVar8 < 0x20);
        if (uVar10 == uVar4) {
            return 0x800000000000000e;
        }
        uVar10 = uVar10 + 1;
    } while( true );
}


/* fcn.00010a28 @ 0x10a28 */

void fcn.00010a28(uint32_t arg1)

{
    int64_t iVar1;
    int aiStackX_8 [2];
    ulong auStackX_10 [3];
    int8_t var_642h;
    int64_t var_c00h;
    int64_t var_c08h;
    uint uStack_cc8;
    uint uStack_cc4;
    uint uStack_cc0;
    uint uStack_cbc;
    uchar auStack_cb8 [1794];
    char cStack_5b6;
    
    uStack_cc8 = 0x7a09bc55;
    uStack_cc4 = 0x4d4d83e8;
    uStack_cc0 = 0xd889b093;
    uStack_cbc = 0x20b7ed0e;
    if (arg1 == 0x10de) {
        auStackX_10[0] = 0xca9;
        iVar1 = (**(*0x128f0 + 0x48))(L"Setup",0x12710,0,auStackX_10,auStack_cb8);
        if (-1 < iVar1) {
            aiStackX_8[0] = (-(cStack_5b6 != '\0') & 5) + 0x30;
            (**(*0x128f0 + 0x58))(L"PCIEPowerControl",&uStack_cc8,6,4,aiStackX_8);
        }
    }
    return;
}


/* fcn.00010aec @ 0x10aec */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

void fcn.00010aec(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uchar auStackX_10 [8];
    uint auStackX_18 [2];
    uchar auStackX_20 [8];
    int64_t var_38h_2;
    int64_t var_40h_2;
    int64_t var_48h;
    int64_t iStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uint32_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iStack_68 = 0;
    iStack_60 = 0;
    (**(*0x128e8 + 0x138))(2,0x12700,0,&uStack_58,&iStack_50);
    uVar4 = 0;
    if (uStack_58 != 0) {
        do {
            (**(*0x128e8 + 0x98))(*(iStack_50 + uVar4 * 8),0x12700,&iStack_68);
            if (iStack_68 == 0) {
                return;
            }
            var_40h = 0;
            auStackX_18[0] = 0;
            iVar2 = (**(iStack_68 + 0x10))(iStack_68,arg1,0,&var_40h,auStackX_10,auStackX_20,auStackX_18);
        } while ((iVar2 < 0) && (uVar4 = uVar4 + 1, uVar4 < uStack_58));
    }
    (**(*0x128e8 + 0x48))(iStack_50);
    iVar2 = (**(*0x128e8 + 0x140))(0x12750,0,&var_30h);
    if ((iStack_68 == 0) || (iVar5 = 0, iVar2 != 0)) {
        return;
    }
    do {
        iVar3 = (**(iStack_68 + 0x18))(iStack_68,arg1,0x19,iVar5,&iStack_60,&var_40h,auStackX_18);
        iVar2 = iStack_60;
        if (-1 < iVar3) {
            bVar1 = false;
            if (*(iStack_60 + 0x10) == 0x54764e6d654f) {
                bVar1 = true;
                iVar3 = fcn.0001147c();
                if (iVar3 < 0) {
                    return;
                }
            }
            if (*(iVar2 + 0x10) == 0x5431764e6d654f) {
                bVar1 = true;
                iVar3 = fcn.0001147c();
                if (iVar3 < 0) {
                    return;
                }
            }
            if (*(iVar2 + 0x10) == 0x5432764e6d654f) {
                bVar1 = true;
                iVar3 = fcn.0001147c();
                if (iVar3 < 0) {
                    return;
                }
            }
            if (*(iVar2 + 0x10) == 0x6974416d654f) {
                bVar1 = true;
                iVar3 = fcn.00011784();
                if (iVar3 < 0) {
                    return;
                }
            }
            if (*(iVar2 + 0x10) == 0x4442697441637344) {
                bVar1 = true;
                iVar3 = fcn.00011784();
                if (iVar3 < 0) {
                    return;
                }
            }
            if (bVar1) {
                var_38h = 0;
                (**_var_30h)(_var_30h,iVar2,*(iStack_60 + 4),&var_38h);
                return;
            }
            iStack_60 = 0;
            iVar5 = iVar5 + 1;
        }
        if (iVar3 != 0) {
            return;
        }
    } while( true );
}


/* fcn.00012330 @ 0x12330 */

uint fcn.00012330(uint32_t arg1)

{
    uint *puVar1;
    
    puVar1 = 0x127e0;
    while( true ) {
        if ((*(puVar1 + 1) == 0) && (*(puVar1 + 6) == 0)) {
            return 0xff;
        }
        if ((*(puVar1 + 1) <= arg1) && (arg1 <= *(puVar1 + 6))) break;
        puVar1 = puVar1 + 2;
    }
    return *puVar1;
}


/* fcn.00012078 @ 0x12078 */

ulong fcn.00012078(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x128d8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000124d4 @ 0x124d4 */

int64_t fcn.000124d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x12918 == 0) && (fcn.00012360(), *0x12918 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x12918 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x00012567;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x54445344);
        uVar2 = fcn.000120a8(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x00012567:
    return iVar1;
}


/* fcn.000120a8 @ 0x120a8 */

void fcn.000120a8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012078();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


