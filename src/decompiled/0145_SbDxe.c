// decompiled by r2ghidra: 0145_SbDxe.pe32
// functions: 39

/* entry0 @ 0x10480 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000104ac(arg1,arg2);
    fcn.0001147c(arg1,arg2);
    return;
}


/* fcn.000104ac @ 0x104ac */

void fcn.000104ac(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x12a28 = *(arg1 + 0x60);
    *0x12a20 = arg1;
    fcn.00011da0();
    noname_0_00 = 0x12910;
    iVar3 = fcn.00011dd0(0x12910);
    if (iVar3 == 0) {
        uVar4 = fcn.000103e0();
        fcn.00010370();
        uVar1 = in(0x1808);
        fcn.00010350(noname_0_00,0x1808);
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
    if ((*0x12a48 != NULL) || (iVar3 = (**(*0x12a28 + 0x140))(0x127b0,0,0x12a48), -1 < iVar3)) {
        (***0x12a48)(*0x12a48,0x12a50);
    }
    return;
}


/* fcn.0001147c @ 0x1147c */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

ulong fcn.0001147c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uchar uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *arg2_00;
    int64_t iVar8;
    int64_t var_fh;
    int64_t var_17h;
    ulong uStackX_18;
    ulong uStackX_20;
    uint32_t var_67h;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_d8;
    uint uStack_d0;
    uint uStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uchar auStack_b8 [8];
    int64_t aiStack_b0 [3];
    ulong uStack_98;
    ulong *puStack_90;
    char16_t acStack_88 [2];
    char16_t cStack_84;
    char16_t cStack_82;
    int64_t var_79h;
    int32_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    int32_t var_61h;
    int32_t var_5dh;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_19h;
    int32_t var_11h;
    int16_t var_dh;
    int64_t var_9h;
    int64_t var_1h;
    
    uStack_c8 = 0x524ed3ca;
    uStackX_20 = 0;
    aiStack_b0[1] = 0;
    uStack_c4 = 0x49f5b250;
    uStack_c0 = 0xbaa2d994;
    uStack_bc = 0x140ec7ff;
    if (*0x12a68 == 0) {
        *0x12a58 = *(arg2 + 0x60);
        *0x12a60 = *(arg2 + 0x58);
        *0x12a68 = arg2;
    }
    fcn.00011ee4(1,0x61008);
    arg2_00 = &uStackX_18;
    var_69h._1_2_ = str.SbWarmResetVar[0xc];
    stack0xffffffffffffff92 = str.SbWarmResetVar[0xd];
    var_65h._1_2_ = str.SbWarmResetVar[0xe];
    uVar7 = 0;
    iStack_d8 = 0x4aa94593b8cafa84;
    uStack_d0 = 0x688ef7ae;
    uStack_cc = 0x2073b06e;
    acStack_88[0] = str.SbWarmResetVar[0];
    acStack_88[1] = str.SbWarmResetVar[1];
    cStack_84 = str.SbWarmResetVar[2];
    cStack_82 = str.SbWarmResetVar[3];
    var_79h._1_2_ = str.SbWarmResetVar[4];
    var_79h._3_2_ = str.SbWarmResetVar[5];
    var_79h._5_2_ = str.SbWarmResetVar[6];
    stack0xffffffffffffff86 = str.SbWarmResetVar[7];
    stack0x00000008 = stack0x0000000c << 0x20;
    var_71h._1_2_ = str.SbWarmResetVar[8];
    stack0xffffffffffffff8a = str.SbWarmResetVar[9];
    var_6dh._1_2_ = str.SbWarmResetVar[10];
    stack0xffffffffffffff8e = str.SbWarmResetVar[0xb];
    uStackX_18 = 4;
    iVar3 = (**(*0x12a60 + 0x48))(acStack_88,&iStack_d8,0,arg2_00,&var_fh + 1);
    if ((-1 < iVar3) && (var_fh._1_4_ == 0x49735752)) {
        stack0x00000008 = CONCAT44(stack0x0000000c,0xb68ca8ad);
        uVar7 = 0;
        arg2_00 = NULL;
        (**(*0x12a60 + 0x58))(acStack_88,&iStack_d8,7,0,&var_fh + 1);
        iVar3 = fcn.00011e1c();
        if ((iVar3 != 0) && (*(iVar3 + 0xc) == 0)) {
            *(iVar3 + 0xc) = 2;
        }
    }
    iVar3 = fcn.00011c64();
    uVar5 = 0x1100000;
    cVar1 = (**(iVar3 + 0x30))();
    if (cVar1 != '\0') {
        uVar7 = 0x1143c;
        fcn.00011d3c(0x126e0,uVar5,0x1143c,arg2_00);
    }
    uStackX_18 = CONCAT62(uStackX_18._2_6_,0xffff);
    stack0x00000008 = stack0x00000008 & 0xffffffffffff0000;
    iStack_d8 = arg1;
    cVar1 = fcn.00012470();
    fcn.000124a0();
    fcn.00011004(0,CONCAT71(uVar5 >> 8,0x58),CONCAT71(uVar7 >> 8,0x70));
    fcn.00011140(0,1,&uStackX_18,&var_fh + 1);
    (**(*0x12a58 + 0x80))(&iStack_d8,0x12630,0,0x128b0);
    if (cVar1 != '\0') {
        fcn.00012490();
    }
    stack0x00000008 = 0;
    (**(*0x12a58 + 0x50))(0x80000200,0x10,0x10f54,0,0x12aa8);
    uVar7 = 0;
    (**(*0x12a58 + 0x80))(&var_fh + 1,0x12640,0,0x12890);
    out(0x43,0x36);
    out(0x40,0);
    out(0x40,0);
    if (*0x129e0 != NULL) {
        var_fh._1_1_ = 0x36;
        (***0x129e0)(*0x129e0,0,0,0x43,1,&var_fh + 1);
        stack0x00000008 = stack0x00000009 << 8;
        (***0x129e0)(*0x129e0,0,0,0x40,1,&var_fh + 1);
        uVar7 = 0;
        (***0x129e0)(*0x129e0,0,0,0x40,1,&var_fh + 1);
    }
    out(0x43,0x54);
    out(0x41,0x12);
    if (*0x129e0 != NULL) {
        var_fh._1_1_ = 0x54;
        (***0x129e0)(*0x129e0,0,0,0x43,1,&var_fh + 1);
        stack0x00000008 = CONCAT71(stack0x00000009,0x12);
        uVar7 = 0;
        (***0x129e0)(*0x129e0,0,0,0x41,1,&var_fh + 1);
    }
    fcn.00011ee4(1,0x6100a);
    fcn.00012044(0x12720,0x10580,uVar7,0x12ad8);
    iVar3 = (**(*0x12a58 + 0x140))(0x12720,0,&var_fh + 1);
    if (-1 < iVar3) {
        (**(*0x12a58 + 0x68))(*0x12ad8);
    }
    iVar3 = fcn.00011dd0(&uStack_c8);
    uVar6 = 0;
    while( true ) {
        cVar1 = fcn.00011c2c();
        if (cVar1 == '\0') {
            cVar1 = fcn.00011bf0();
            uVar4 = 8;
            if ((cVar1 != '\x01') && (cVar1 = fcn.00011bf0(), cVar1 != '\x04')) {
                cVar1 = fcn.00011bf0();
                uVar4 = (cVar1 != '\x04') - 1U & 8;
            }
        }
        else {
            uVar4 = 2;
        }
        if (uVar4 <= uVar6) goto code_r0x00011854;
        if ((*(iVar3 + 0x3aa3 + (uVar6 & 0xff) * 8) & 0x40) != 0) break;
        uVar6 = uVar6 + 1;
    }
    *0x12887 = 0x101;
code_r0x00011854:
    iVar8 = 0x12880;
    uVar7 = 0x12780;
    iVar3 = (**(*0x12a58 + 0x80))(aiStack_b0 + 1,0x12780,0);
    if (iVar3 != 0) {
        uVar7 = 0x61002;
        fcn.00011ee4(0x80000002,0x61002);
    }
    uVar5 = 0x107b4;
    fcn.00011d3c(0x12700,uVar7,0x107b4,iVar8);
    iVar3 = fcn.00012044(0x126a0,0x10814,uVar5,auStack_b8);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = fcn.00012044(0x12650,0x109a4,uVar5,auStack_b8);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = fcn.00012044(0x126c0,0x10e6c,uVar5,auStack_b8);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = &var_61h + 1;
    iVar8 = fcn.00012044(0x12690,0x10df8,uVar5,aiStack_b0 + 2);
    if (iVar8 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    if (-1 < iVar8) {
        (**(*0x12a58 + 0x68))(aiStack_b0[2]);
    }
    aiStack_b0[0] = 0xffffffff;
    (**(*0x12a58 + 0x28))(1,10,1,aiStack_b0,iVar3);
    *0x12ac8 = aiStack_b0[0];
    fcn.000102e0(aiStack_b0[0],8,0);
    uStack_98 = 0;
    (**(*0x12a58 + 0x148))(&uStack_98,0x12770,0x12ac8,0);
    iVar3 = (**(*0x12a58 + 0x170))(0x200,8,0x10af4,0,0x127a0,&var_59h + 1);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = (**(*0x12a58 + 0x170))(0x200,0x10,0x10cfc,0,0x12950,&var_51h + 1);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = (**(*0x12a58 + 0x170))(0x200,8,0x113c4,0,0x12920,&var_49h + 1);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    uVar7 = 0x113e8;
    iVar3 = (**(*0x12a58 + 0x50))(0x201,8,0x113e8,0,&var_41h + 1);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = fcn.00012044(0x126f0,0x10e34,uVar7,auStack_b8);
    if (iVar3 != 0) {
        fcn.00011ee4(0x80000002,0x61002);
    }
    iVar3 = (**(*0x12a58 + 0x140))(0x12680,0,&puStack_90);
    if (iVar3 < 0) {
        if (iVar3 != 0) {
            fcn.00011ee4(0x80000002,0x61002);
        }
    }
    else {
        iVar3 = fcn.00011ca0();
        uVar2 = (**(iVar3 + 8))(1);
        **puStack_90 = uVar2;
    }
    return 0;
}


/* fcn.00011da0 @ 0x11da0 */

int64_t fcn.00011da0(void)

{
    if (*0x12a40 == 0) {
        fcn.00011cdc(0x12760,0x12a40);
    }
    return *0x12a40;
}


/* fcn.00011cdc @ 0x11cdc */

ulong fcn.00011cdc(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x12a20;
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


/* fcn.00011dd0 @ 0x11dd0 */

void fcn.00011dd0(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011da0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011dfe:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011dfe;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103e0 @ 0x103e0 */

uint64_t fcn.000103e0(void)

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


/* fcn.00010688 @ 0x10688 */

ulong fcn.00010688(ulong param_1,uint32_t param_2)

{
    char cVar1;
    ulong uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint8_t uVar7;
    int64_t arg1;
    uint32_t uVar8;
    uint8_t uVar9;
    uchar uStackX_8;
    uint32_t *apuStackX_10 [2];
    uchar auStack_a8 [32];
    uint32_t auStack_88 [28];
    
    uVar2 = fcn.0001209c(apuStackX_10,param_2);
    cVar1 = fcn.00011bf0();
    if (cVar1 == '\x03') {
code_r0x000106c8:
        uVar9 = 0xc;
code_r0x000106cb:
        if (uVar9 == 0) goto code_r0x00010732;
    }
    else {
        if (cVar1 != '\x04') {
            if (cVar1 == '\x05') goto code_r0x000106c8;
            uVar9 = 0;
            goto code_r0x000106cb;
        }
        uVar9 = 0x1c;
    }
    uVar7 = 0;
    arg1 = 0;
    puVar6 = auStack_88;
    do {
        fcn.00011b64(arg1);
        uVar7 = uVar7 + 1;
        auStack_a8[arg1] = uStackX_8;
        arg1 = arg1 + 1;
        *puVar6 = ((uVar7 + (uVar7 / 10) * -10) * 0x100 | uVar7 / 10) << 0x10 | 0x30305052;
        puVar6 = puVar6 + 1;
    } while (uVar7 < uVar9);
code_r0x00010732:
    uVar7 = 0;
    puVar6 = apuStackX_10[0];
    if (apuStackX_10[0] < apuStackX_10[0][1] + apuStackX_10[0]) {
        do {
            uVar4 = 0;
            if (uVar9 != 0) {
                uVar8 = *puVar6;
                puVar5 = puVar6;
                do {
                    puVar6 = puVar5;
                    if (uVar8 == auStack_88[uVar4]) {
                        puVar6 = puVar5 + 5;
                        uVar8 = *puVar6;
                        if (uVar8 == 0x5244415f) {
                            puVar6 = puVar5 + 10;
                            uVar7 = uVar7 + 1;
                            *puVar6 = auStack_a8[uVar4];
                            break;
                        }
                    }
                    uVar3 = uVar4 + 1;
                    uVar4 = uVar3;
                    puVar5 = puVar6;
                } while (uVar3 < uVar9);
            }
        } while ((uVar7 < uVar9) && (puVar6 = puVar6 + 1, puVar6 < apuStackX_10[0][1] + apuStackX_10[0]));
    }
    return uVar2;
}


/* fcn.0001209c @ 0x1209c */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001209c(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_38 [16];
    int64_t var_bp_10h;
    
    iVar2 = 0;
    piStackX_18 = NULL;
    uVar3 = 0;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x12a58 + 0x140))(0x12960,0,&iStackX_20);
    if (iVar1 < 0) {
        iVar1 = -0x5ffffffffffffffe;
    }
    else {
        iVar4 = 0;
        iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_38);
        if (-1 < iVar1) {
            do {
                if (*piStackX_18 == 0x50434146) {
                    if (auStackX_10[0] == 2) {
                        uVar3 = piStackX_18[10];
                    }
                    if ((auStackX_10[0] & 0x1c) != 0) {
                        iVar2 = *(piStackX_18 + 0x23);
                    }
                }
                if ((uVar3 != 0) && (iVar2 != 0)) goto code_r0x0001214f;
                iVar4 = iVar4 + 1;
                iVar1 = (**(iStackX_20 + 8))(iVar4,&piStackX_18,auStackX_10,auStack_38);
            } while (-1 < iVar1);
            if (iVar2 == 0) {
                if (uVar3 == 0) {
                    return iVar1;
                }
                *arg1 = uVar3;
            }
            else {
code_r0x0001214f:
                *arg1 = iVar2;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00011bf0 @ 0x11bf0 */

void fcn.00011bf0(void)

{
    if (*0x1290a == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x1290a = '\x05';
        }
        else {
            *0x1290a = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00011b64 @ 0x11b64 */

ulong fcn.00011b64(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t *in_RDX;
    uint64_t *in_R8;
    
    cVar2 = fcn.00011bf0();
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            uVar3 = 0x1c;
            goto code_r0x00011b8b;
        }
        if (cVar2 != '\x05') {
            return 0x8000000000000002;
        }
    }
    uVar3 = 0xc;
code_r0x00011b8b:
    if (uVar3 <= arg1) {
        return 0x8000000000000002;
    }
    iVar1 = (arg1 >> 2) * 3;
    cVar2 = *(iVar1 + 0x128fa);
    *in_RDX = *(iVar1 + 0x128f8);
    *in_R8 = *((*(iVar1 + 0x128f9) | 0xfd00) << 0x10) >> ((arg1 - cVar2) * '\x04' & 0x3fU) & 7;
    return 0;
}


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 9088 named .text
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


/* fcn.000121e8 @ 0x121e8 */

void fcn.000121e8(void)

{
    (**(*0x12a28 + 0x140))(0x12730,0,0x12a98);
    //WARNING: Could not recover jumptable at 0x00012224. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12a28 + 0x140))(0x12720,0,0x12aa0);
    return;
}


/* fcn.0001222c @ 0x1222c */

int64_t fcn.0001222c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    ulong uStackX_20;
    int *apiStack_18 [2];
    
    iVar1 = arg1;
    if ((*0x12aa0 == NULL) && (fcn.000121e8(), *0x12aa0 == NULL)) {
        return -0x7ffffffffffffffa;
    }
    uStackX_20 = 0;
    iVar1 = fcn.0001235c(iVar1,apiStack_18,&uStackX_20);
    if (-1 < iVar1) {
        if (apiStack_18[0] != NULL) {
            for (piVar2 = apiStack_18[0]; piVar2 < apiStack_18[0][1] + apiStack_18[0]; piVar2 = piVar2 + 1) {
                if ((*piVar2 == arg1) && (*(piVar2 + -1) == '\b')) {
                    if (((arg3 == 2) && (piVar2[1] == '\v')) || ((arg3 == 4 && (piVar2[1] == '\f')))) {
                        if (piVar2 + 5 != arg2) {
                            section..text(piVar2 + 5,arg2,arg3);
                        }
                        (*(*0x12aa0)[1])(*0x12aa0,uStackX_20);
                        uStackX_20 = 0;
                        iVar1 = (***0x12aa0)(*0x12aa0,apiStack_18[0],apiStack_18[0][1],&uStackX_20);
                    }
                    else {
                        iVar1 = -0x7ffffffffffffffc;
                    }
                    (**(*0x12a28 + 0x48))(apiStack_18[0]);
                    return iVar1;
                }
            }
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.00011f88 @ 0x11f88 */

int64_t fcn.00011f88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x12a60 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x12a58 + 0x48))();
        }
        iVar1 = fcn.00011f5c(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x12a60 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.000105c4 @ 0x105c4 */

void fcn.000105c4(void)

{
    int64_t iVar1;
    int *piVar2;
    uint64_t uVar3;
    int *piVar4;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = 0;
    iVar1 = fcn.00011cdc(0x126d0,aiStackX_8);
    if ((iVar1 < 0) || (aiStackX_8[0] == 0)) {
        piVar4 = NULL;
    }
    else {
        piVar2 = *(aiStackX_8[0] + 0x18);
        if ((piVar2 == NULL) || (*piVar2 != 0x54445358)) {
            piVar2 = *(aiStackX_8[0] + 0x10);
            if (piVar2 == NULL) {
                return;
            }
            if (*piVar2 != 0x54445352) {
                return;
            }
        }
        uVar3 = 0x24;
        if (piVar2[1] < 0x25) {
            return;
        }
        do {
            piVar4 = *(uVar3 + piVar2);
            if (*piVar4 == 0x544c484e) goto code_r0x0001063e;
            uVar3 = uVar3 + 4;
        } while (uVar3 < piVar2[1]);
        if (*piVar4 != 0x544c484e) {
            return;
        }
    }
code_r0x0001063e:
    if ((piVar4 != NULL) && ((*0x12a08 != NULL || (iVar1 = (**(*0x12a58 + 0x140))(0x12710,0,0x12a08), -1 < iVar1))))
    {
        *(**0x12a08 + 0x76) = piVar4;
    }
    return;
}


/* fcn.00011ee4 @ 0x11ee4 */

int64_t fcn.00011ee4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x12a70 == '\0') {
        iVar1 = fcn.00011e5c();
        if (-1 < iVar1) {
            iVar1 = (***0x12a88)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x12a78 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x12a78)(*0x12a78,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.00011e1c @ 0x11e1c */

ulong fcn.00011e1c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*0x12a68 + 0x68);
    iVar3 = *(*0x12a68 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.0001216c(iVar3);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.00011c64 @ 0x11c64 */

int64_t fcn.00011c64(void)

{
    if (*0x12a30 == 0) {
        (**(*0x12a28 + 0x140))(0x126b0,0,0x12a30);
    }
    return *0x12a30;
}


/* fcn.00011d3c @ 0x11d3c */

int64_t fcn.00011d3c(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x12a28 + 0x50))(0x200,0x10,noname_2,0,&iStackX_20);
    (**(*0x12a28 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x12a28 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00012470 @ 0x12470 */

ushort fcn.00012470(void)

{
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t in_NT;
    
    return CONCAT11((in_NT & 1) * '@' | (in_IF & 1) * '\x02' | in_TF & 1,(in_IF & 1) != 0);
}


/* fcn.000124a0 @ 0x124a0 */

void fcn.000124a0(void)

{
    return;
}


/* fcn.00011004 @ 0x11004 */

ulong fcn.00011004(ulong noname_0,uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    
    cVar1 = arg1;
    if (cVar1 != *0x12ab8) {
        out(0x20,0x11);
        out(0x21,cVar1);
        out(0x21,4);
        out(0x21,1);
        *0x12ab8 = cVar1;
    }
    cVar1 = arg2;
    if (cVar1 != *0x12ad0) {
        out(0xa0,0x11);
        out(0xa1,cVar1);
        out(0xa1,2);
        out(0xa1,1);
        *0x12ad0 = cVar1;
    }
    return 0;
}


/* fcn.00011140 @ 0x11140 */

ulong fcn.00011140(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    
    iVar1 = arg1;
    if (1 < iVar1) {
        return 0x8000000000000002;
    }
    *0x12878 = arg1;
    if (arg2 != 0) {
        *(iVar1 * 2 + 0x128a8) = *arg2;
    }
    if (arg3 != 0) {
        *(iVar1 * 2 + 0x12a18) = *arg3;
    }
    out(0x21,*((arg1 & 0xffU) * 2 + 0x128a8));
    out(0xa1,*(*0x12878 * 2 + 0x128a9));
    out(0x4d0,*(*0x12878 * 2 + 0x12a18));
    out(0x4d1,*(*0x12878 * 2 + 0x12a19));
    return 0;
}


/* fcn.00012490 @ 0x12490 */

void fcn.00012490(void)

{
    return;
}


/* fcn.00012044 @ 0x12044 */

void fcn.00012044(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x12a58 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x12a58 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00011c2c @ 0x11c2c */

ulong fcn.00011c2c(void)

{
    char cVar1;
    
    cVar1 = fcn.00011bf0();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00011bf0(), cVar1 != '\x05')) && (cVar1 = fcn.00011bf0(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00011bf0(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011ca0 @ 0x11ca0 */

int64_t fcn.00011ca0(void)

{
    if (*0x12a38 == 0) {
        (**(*0x12a28 + 0x140))(0x12670,0,0x12a38);
    }
    return *0x12a38;
}


/* fcn.0001216c @ 0x1216c */

int64_t fcn.0001216c(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x12850;
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


/* fcn.00011e5c @ 0x11e5c */

ulong fcn.00011e5c(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x12a70 == '\0') {
        if (*0x12a88 == 0) {
            if (*0x12a80 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x12a58 + 0x140))(0x12930,0,0x12a88);
        }
    }
    else if (*0x12a78 == 0) {
        if ((*0x12a80 == '\0') && (*0x12a90 != 0)) {
    //WARNING: Could not recover jumptable at 0x00011e9b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x12a90 + 0xd0))(0x12940,0,0x12a78);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011f5c @ 0x11f5c */

ulong fcn.00011f5c(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x12a58 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001235c @ 0x1235c */

int64_t fcn.0001235c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x12a98 == 0) && (fcn.000121e8(), *0x12a98 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x12a98 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x000123ef;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x54445344);
        uVar2 = fcn.0001242c(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x000123ef:
    return iVar1;
}


/* fcn.0001242c @ 0x1242c */

void fcn.0001242c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000123fc();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000123fc @ 0x123fc */

ulong fcn.000123fc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12a28 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


