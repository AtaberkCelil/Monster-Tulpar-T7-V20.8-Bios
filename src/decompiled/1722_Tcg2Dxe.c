// decompiled by r2ghidra: 1722_Tcg2Dxe.pe32
// functions: 83

/* entry0 @ 0x103a4 */

void entry0(int64_t arg1)

{
    uint32_t in_EDX;
    uint in_register_00000014;
    
    fcn.000103c0(arg1,CONCAT44(in_register_00000014,in_EDX));
    fcn.000149ec(arg1,in_EDX);
    return;
}


/* fcn.000103c0 @ 0x103c0 */

ulong fcn.000103c0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    int64_t *piVar6;
    
    *0x1e908 = *(arg1 + 0x60);
    *0x1e910 = *(arg1 + 0x58);
    *0x1e900 = arg1;
    fcn.00015658();
    noname_0_00 = 0x1e448;
    iVar3 = fcn.00015688(0x1e448);
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010370(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010360();
        }
        fcn.00010370(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    uVar4 = 0;
    if (*(*0x1e900 + 0x68) != 0) {
        piVar6 = *(*0x1e900 + 0x70);
        do {
            if ((*0x1e310 == *piVar6) && (*0x1e318 == piVar6[1])) {
                *0x1e928 = (*(*0x1e900 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x1e900 + 0x68));
    }
    *0x1e928 = 0;
    return 0x800000000000000e;
}


/* fcn.000149ec @ 0x149ec */

//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000149ec(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    uint in_register_00000014;
    int8_t var_9h;
    int8_t var_ah;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    uchar auStackX_18 [8];
    uint auStackX_20 [2];
    int64_t var_ce0h;
    int64_t var_ce8h;
    int64_t iStack_d88;
    uchar auStack_d80 [5];
    char cStack_d7b;
    char cStack_d7a;
    uchar uStack_d79;
    ushort uStack_d75;
    uchar uStack_d6e;
    uchar uStack_d6a;
    uint32_t uStack_d69;
    ulong uStack_d60;
    ulong uStack_d58;
    ulong uStack_d50;
    uint uStack_d48;
    uint auStack_d40 [2];
    ulong uStack_d38;
    int64_t iStack_d30;
    ulong uStack_d28;
    ulong *puStack_d20;
    ulong uStack_d18;
    ulong uStack_d10;
    ulong uStack_d08;
    ulong uStack_d00;
    uchar auStack_cf8 [16];
    uchar auStack_ce8 [41];
    uchar uStack_cbf;
    uchar uStack_cbe;
    int32_t var_80h;
    int32_t var_78h;
    int64_t var_70h;
    int64_t var_bp_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_bp_48h;
    int64_t var_bp_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_bp_20h;
    
    uStack_d60 = 0xca9;
    uStackX_10 = CONCAT44(in_register_00000014,arg2) & 0xffffffffffffff00;
    uStack_d00 = 0;
    auStack_d40[0] = 7;
    uStack_d28 = 0x18;
    uStack_d08 = 1;
    iStackX_8 = arg1;
    iVar2 = (**(*0x1e908 + 0x140))(0x1e270,0,&iStack_d88);
    if (iVar2 < 0) {
        return iVar2;
    }
    (**(*0x1e908 + 0x160))(auStack_d80,iStack_d88 + 1,0x1b);
    iVar2 = (**(*0x1e908 + 0x40))(10,0x1c,0x1e8b8);
    if (-1 < iVar2) {
        fcn.000102c0(*0x1e8b8,0x1c);
        iStack_d30 = *0x1e8b8;
        iVar2 = (**(*0x1e908 + 0x50))(0x200,8,0x14754,0,&uStack_d38);
        if ((iVar2 < 0) || (iVar2 = (**(*0x1e908 + 0xa8))(0x1e1f0,uStack_d38,0x1e9c8), iVar2 < 0)) {
            (**(*0x1e908 + 0x48))(*0x1e8b8);
            return iVar2;
        }
        fcn.00014680(0x1e570,0x1e1d0,6,8);
        pcVar3 = fcn.0001c6e4(*(*0x1e900 + 0x68),*(*0x1e900 + 0x70),0x1e260);
        if ((pcVar3 != NULL) && (*pcVar3 == '\x01')) {
            uStack_d58 = 0;
            uStack_d50 = 0;
            uStack_d48 = 0;
            iVar2 = (**(*0x1e910 + 0x48))(L"AMITCGPPIVAR",0x1e1c0,auStack_d40,&uStack_d28,&uStack_d58);
            if ((iVar2 < 0) || (uStack_d58 != 0)) {
                uStack_d58 = 0;
                uStack_d50 = 0;
                uStack_d48 = 0;
                fcn.00014680(0x1e4e8,0x1e1c0,7,0x18);
            }
        }
        iVar2 = (**(*0x1e908 + 0x140))(0x1e190,0,&puStack_d20);
        if (iVar2 < 0) {
            iVar2 = (**(*0x1e908 + 0x50))(0x200,8,0x1462c,0,&uStack_d18);
            if (-1 < iVar2) {
                (**(*0x1e908 + 0xa8))(0x1e190,uStack_d18,0x1e9b0);
            }
        }
        else {
            (**puStack_d20)(puStack_d20,L"TpmServFlags",0x1e1d0);
        }
    }
    if (cStack_d7a == '\0') {
        uStack_d6e = 0;
        (**(iStack_d88 + 0x20))(auStack_d80,0);
        return 0;
    }
    if (*(iStack_d88 + 1) == '\0') {
        (**(*0x1e908 + 0x80))(&iStackX_8,0x1e2d0,0,0x1e3d0);
        return 0;
    }
    cVar1 = fcn.0001070c();
    if (cVar1 == '\0') {
        uStack_d6e = 0;
        (**(iStack_d88 + 0x20))(auStack_d80);
        fcn.0001ddc4(0x40000002,0x3058a02);
        if (*0xfed40000 != -1) {
            return 0;
        }
code_r0x00014cf4:
        fcn.0001ddc4(0x40000002,0x3058a04);
        return 0;
    }
    uStack_d6e = 1;
    uStack_d6a = *(*0x1e8e8 + 1);
    (**(iStack_d88 + 0x20))(auStack_d80,0);
    auStackX_18[0] = 0;
    uStack_d10 = 1;
    (**(*0x1e910 + 0x48))(L"MemoryOverwriteRequestControl",0x1e240,0,&uStack_d10,auStackX_18);
    fcn.00010908();
    iVar2 = fcn.000147f8(iStackX_8);
    if (iVar2 < 0) goto code_r0x00014cf4;
    (**(*0x1e908 + 0x140))(0x1e270,0,&iStack_d88);
    (**(*0x1e908 + 0x160))(auStack_d80,iStack_d88 + 1,0x1b);
    if (cStack_d7b == '\x01') {
        if ((uStack_d69 & 1) != 0) goto code_r0x00014e99;
        uStack_d69 = uStack_d69 | 1;
        (**(iStack_d88 + 0x20))(auStack_d80,1);
        iVar2 = (**(*0x1e910 + 0x48))(L"Setup",0x1e220,auStackX_20,&uStack_d60,auStack_ce8);
        if (iVar2 < 0) goto code_r0x00014e99;
        uStack_cbf = 1;
    }
    else {
        if (uStack_d69 != 0) goto code_r0x00014e99;
        uStack_d69 = 2;
        (**(iStack_d88 + 0x20))(auStack_d80,1);
        iVar2 = (**(*0x1e910 + 0x48))(L"Setup",0x1e220,auStackX_20,&uStack_d60,auStack_ce8);
        if (iVar2 < 0) goto code_r0x00014e99;
        uStack_cbe = 2;
    }
    (**(*0x1e910 + 0x58))(L"Setup",0x1e220,auStackX_20[0],uStack_d60,auStack_ce8);
code_r0x00014e99:
    iVar2 = (**(*0x1e910 + 0x48))(L"Tpm20PCRallocateReset",0x1e2b0,0,&uStack_d08,&uStackX_10);
    if ((iVar2 < 0) || (uStackX_10 == '\0')) {
        if (((uStack_d69 & *0x1e890 & *0x1e8ac) != (uStack_d69 & *0x1e8ac | *0x1e890)) &&
           (iVar2 = fcn.00010d04(uStack_d69,*0x1e890,*0x1e8ac,auStackX_18), -1 < iVar2)) {
            uStackX_10 = CONCAT71(uStackX_10._1_7_,1);
            iVar2 = (**(*0x1e910 + 0x58))(L"Tpm20PCRallocateReset",0x1e2b0,3,1,&uStackX_10);
            if (-1 < iVar2) {
                iVar2 = (**(*0x1e908 + 0x140))(0x1e0e0,0,&uStack_d00);
                if (iVar2 == 0) {
                    (**(*0x1e910 + 0x68))(0,0,0,0);
                }
                (**(*0x1e908 + 0x50))(0x200,8,0x10cec,0,0x1e9f0);
                (**(*0x1e908 + 0xa8))(0x1e0e0,*0x1e9f0,0x1e9b8);
            }
        }
    }
    if (uStackX_10 == '\x01') {
        uStackX_10 = uStackX_10 & 0xffffffffffffff00;
        (**(*0x1e910 + 0x58))(L"Tpm20PCRallocateReset",0x1e2b0,3,1,&uStackX_10);
    }
    uStack_d69 = *0x1e890;
    *0x1e440 = iStackX_8;
    *0x1e438 = iStackX_8;
    (**(*0x1e908 + 0x148))(0x1e440,0x1e2c0,0x1e418,0x1e2f0,0x1e400,0x1e160,0x1e3e8,0);
    fcn.000123ac(*0x1ea10,*0x1ea00);
    (**(*0x1e908 + 0x140))(0x1e270,0,&iStack_d88);
    (**(*0x1e908 + 0x160))(auStack_d80,iStack_d88 + 1,0x1b);
    uStack_d75 = 1;
    uStack_d79 = 0;
    (**(iStack_d88 + 0x20))(auStack_d80,1);
    if (*(*0x1e900 + 8) < 0x20000) {
        return 0;
    }
    iVar2 = (**(*0x1e908 + 0x170))(0x200,8,0x14624,0,0x1e150,auStack_cf8);
    if (iVar2 < 0) {
        return 0;
    }
    (**(*0x1e908 + 0x170))(0x200,8,0x10c48,0,0x1e100,0x1e9a8);
    return 0;
}


/* fcn.00015658 @ 0x15658 */

int64_t fcn.00015658(void)

{
    if (*0x1e920 == 0) {
        fcn.000155f8(0x1e290,0x1e920);
    }
    return *0x1e920;
}


/* fcn.000155f8 @ 0x155f8 */

ulong fcn.000155f8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1e900;
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


/* fcn.00015688 @ 0x15688 */

void fcn.00015688(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00015658();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000156b6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000156b6;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.000168f8 @ 0x168f8 */

void fcn.000168f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    uVar2 = *(arg1 + 0x14) >> 3 & 0x3f;
    uVar3 = uVar2;
    uVar1 = arg3;
    uVar5 = *(arg1 + 0x14) + uVar1 * 8;
    *(arg1 + 0x14) = uVar5;
    if (uVar5 < uVar1 << 3) {
        *(arg1 + 0x18) = *(arg1 + 0x18) + 1;
    }
    *(arg1 + 0x18) = *(arg1 + 0x18) + ((arg3 & 0xffffffffU) >> 0x1d);
    if (uVar2 + uVar1 < 0x40) {
        uVar5 = 0;
    }
    else {
        uVar5 = -uVar2 + 0x40;
        iVar4 = arg1 + 0x1c + uVar3;
        if ((uVar5 != 0) && (iVar4 != arg2)) {
            section..text(iVar4,arg2,uVar5);
        }
        fcn.00015768(arg1,arg1 + 0x1c);
        for (uVar2 = -uVar2 + 0x7f; uVar2 < uVar1; uVar2 = uVar2 + 0x40) {
            fcn.00015768(arg1,uVar5 + arg2);
            uVar5 = uVar5 + 0x40;
        }
        uVar3 = 0;
    }
    iVar4 = arg1 + 0x1c + uVar3;
    if ((uVar1 - uVar5 != 0) && (iVar4 != uVar5 + arg2)) {
        section..text(iVar4,uVar5 + arg2,uVar1 - uVar5);
    }
    return;
}


/* fcn.000169d8 @ 0x169d8 */

void fcn.000169d8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar auStackX_10 [8];
    
    uVar3 = 0;
    puVar6 = auStackX_10;
    uVar5 = uVar3;
    do {
        uVar2 = uVar5;
        uVar1 = uVar5;
        uVar4 = uVar2 + 1;
        uVar5 = uVar4;
        *puVar6 = *((-(uVar2 < 4) & 4) + 0x14 + arg2) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        puVar6 = puVar6 + 1;
    } while (uVar4 < 8);
    fcn.000168f8(arg2,0x1e5d0,1);
    while ((*(arg2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.000168f8(arg2,0x1e5d4,1);
    }
    fcn.000168f8(arg2,auStackX_10,8);
    uVar5 = uVar3;
    do {
        uVar1 = uVar3;
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
        uVar1 = ('\x03' - (uVar1 & 3)) * '\b' & 0x1f;
        *arg1 = *(arg2 + (uVar5 & 0xfffffffffffffffc)) >> uVar1;
        arg1 = arg1 + 1;
        uVar5 = uVar5 + 1;
    } while (uVar2 < 0x14);
    uVar2 = 0 >> uVar1;
    fcn.00010300(arg2 + 0x1c,uVar2 + 0x40,uVar2);
    fcn.00010300(arg2,0x14,0);
    fcn.00010300(arg2 + 0x14,8,0);
    fcn.00010300(auStackX_10,8,0);
    return;
}


/* fcn.0001c6a0 @ 0x1c6a0 */

void fcn.0001c6a0(ulong noname_0,uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uchar *puVar2;
    uint in_register_00000014;
    uchar *puVar3;
    
    puVar2 = CONCAT44(in_register_00000014,arg1);
    if (arg2 < puVar2) {
        puVar2 = puVar2 + arg3 + -1;
        puVar3 = arg3 + -1 + arg2;
        if (arg3 != 0) {
            do {
                uVar1 = *puVar3;
                puVar3 = puVar3 + -1;
                *puVar2 = uVar1;
                puVar2 = puVar2 + -1;
                arg3 = arg3 + -1;
            } while (arg3 != 0);
            return;
        }
    }
    else if (arg3 != 0) {
        arg2 = arg2 - puVar2;
        do {
            *puVar2 = puVar2[arg2];
            puVar2 = puVar2 + 1;
            arg3 = arg3 + -1;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.000190ac @ 0x190ac */

ulong fcn.000190ac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = arg3;
    uVar5 = arg3 & 0xffffffff;
    do {
        uVar4 = uVar5;
        if (iVar1 == 0) {
            return 0;
        }
        if ((*(arg1 + 0x28) == 0) && (0x3f < uVar4)) {
            iVar2 = arg1 + 0x2c;
            if (iVar2 != arg2) {
                section..text(iVar2,arg2,0x40);
            }
            iVar1 = fcn.00016b00(arg1,iVar2);
            if (iVar1 < 0) {
                return 0xffffffff;
            }
            *arg1 = *arg1 + 0x200;
            arg2 = arg2 + 0x40;
            uVar5 = uVar4 - 0x40;
        }
        else {
            uVar3 = 0x40 - *(arg1 + 0x28);
            if (uVar4 < uVar3) {
                uVar3 = uVar4;
            }
            iVar2 = arg1 + 0x2c + *(arg1 + 0x28);
            if ((uVar3 != 0) && (iVar2 != arg2)) {
                section..text(iVar2,arg2,uVar3);
            }
            *(arg1 + 0x28) = *(arg1 + 0x28) + uVar3;
            arg2 = arg2 + uVar3;
            uVar5 = uVar4 - uVar3;
            if (*(arg1 + 0x28) == 0x40) {
                iVar1 = fcn.00016b00(arg1,arg1 + 0x2c);
                if (iVar1 < 0) {
                    return 0xffffffff;
                }
                *arg1 = *arg1 + 0x200;
                *(arg1 + 0x28) = 0;
            }
        }
        iVar1 = uVar5;
    } while( true );
}


/* fcn.0001919c @ 0x1919c */

ulong fcn.0001919c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    *arg1 = *arg1 + (*(arg1 + 0x28) << 3);
    *(*(arg1 + 0x28) + 0x2c + arg1) = 0x80;
    *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
    uVar1 = *(arg1 + 0x28);
    if (0x38 < uVar1) {
        while (uVar1 < 0x40) {
            *(uVar1 + 0x2c + arg1) = 0;
            *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
            uVar1 = *(arg1 + 0x28);
        }
        fcn.00016b00(arg1,arg1 + 0x2c);
        *(arg1 + 0x28) = 0;
    }
    while (*(arg1 + 0x28) < 0x38) {
        *(*(arg1 + 0x28) + 0x2c + arg1) = 0;
        *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
    }
    *(arg1 + 100) = *(arg1 + 7);
    *(arg1 + 0x65) = *(arg1 + 6);
    *(arg1 + 0x66) = *arg1 >> 0x28;
    *(arg1 + 0x67) = *arg1 >> 0x20;
    *(arg1 + 0x68) = *arg1 >> 0x18;
    *(arg1 + 0x69) = *arg1 >> 0x10;
    *(arg1 + 0x6a) = *arg1 >> 8;
    *(arg1 + 0x6b) = *arg1;
    fcn.00016b00(arg1,arg1 + 0x2c);
    *arg2 = *(arg1 + 0xb);
    *(arg2 + 1) = *(arg1 + 10);
    *(arg2 + 2) = *(arg1 + 9);
    *(arg2 + 3) = *(arg1 + 8);
    *(arg2 + 4) = *(arg1 + 0xf);
    *(arg2 + 5) = *(arg1 + 0xe);
    *(arg2 + 6) = *(arg1 + 0xd);
    *(arg2 + 7) = *(arg1 + 0xc);
    *(arg2 + 8) = *(arg1 + 0x13);
    *(arg2 + 9) = *(arg1 + 0x12);
    *(arg2 + 10) = *(arg1 + 0x11);
    *(arg2 + 0xb) = *(arg1 + 0x10);
    *(arg2 + 0xc) = *(arg1 + 0x17);
    *(arg2 + 0xd) = *(arg1 + 0x16);
    *(arg2 + 0xe) = *(arg1 + 0x15);
    *(arg2 + 0xf) = *(arg1 + 0x14);
    *(arg2 + 0x10) = *(arg1 + 0x1b);
    *(arg2 + 0x11) = *(arg1 + 0x1a);
    *(arg2 + 0x12) = *(arg1 + 0x19);
    *(arg2 + 0x13) = *(arg1 + 0x18);
    *(arg2 + 0x14) = *(arg1 + 0x1f);
    *(arg2 + 0x15) = *(arg1 + 0x1e);
    *(arg2 + 0x16) = *(arg1 + 0x1d);
    *(arg2 + 0x17) = *(arg1 + 0x1c);
    *(arg2 + 0x18) = *(arg1 + 0x23);
    *(arg2 + 0x19) = *(arg1 + 0x22);
    *(arg2 + 0x1a) = *(arg1 + 0x21);
    *(arg2 + 0x1b) = *(arg1 + 0x20);
    *(arg2 + 0x1c) = *(arg1 + 0x27);
    *(arg2 + 0x1d) = *(arg1 + 0x26);
    *(arg2 + 0x1e) = *(arg1 + 0x25);
    *(arg2 + 0x1f) = *(arg1 + 0x24);
    return 0;
}


/* fcn.00019318 @ 0x19318 */

ulong fcn.00019318(int64_t arg1)

{
    *(arg1 + 0x48) = 0;
    *arg1 = 0;
    *(arg1 + 8) = 0xcbbb9d5dc1059ed8;
    *(arg1 + 0x10) = 0x629a292a367cd507;
    *(arg1 + 0x18) = 0x9159015a3070dd17;
    *(arg1 + 0x20) = 0x152fecd8f70e5939;
    *(arg1 + 0x28) = 0x67332667ffc00b31;
    *(arg1 + 0x30) = 0x8eb44a8768581511;
    *(arg1 + 0x38) = 0xdb0c2e0d64f98fa7;
    *(arg1 + 0x40) = 0x47b5481dbefa4fa4;
    return 0;
}


/* fcn.0001c498 @ 0x1c498 */

ulong fcn.0001c498(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    int64_t arg1_01;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = arg3;
    uVar5 = arg3 & 0xffffffff;
    if ((arg2 == 0) || (0x80 < *(arg1_00 + 9))) {
        uVar1 = 0xffffffff;
    }
    else {
        while (uVar3 = uVar5, iVar4 != 0) {
            if ((arg1_00[9] == 0) && (0x7f < uVar3)) {
                uVar1 = fcn.0001bec4(arg1_00,arg2);
                if (uVar1 != 0) {
                    return uVar1;
                }
                *arg1_00 = *arg1_00 + 0x400;
                arg2 = arg2 + 0x80;
                uVar5 = uVar3 - 0x80;
            }
            else {
                uVar2 = 0x80 - arg1_00[9];
                if (uVar3 < uVar2) {
                    uVar2 = uVar3;
                }
                arg1_01 = arg1_00 + *(arg1_00 + 9) + 0x4c;
                if ((uVar2 != 0) && (arg1_01 != arg2)) {
                    section..text(arg1_01,arg2,uVar2);
                }
                *(arg1_00 + 9) = arg1_00[9] + uVar2;
                arg2 = arg2 + uVar2;
                uVar5 = uVar3 - uVar2;
                if (arg1_00[9] == 0x80) {
                    uVar1 = fcn.0001bec4(arg1_00,arg1_00 + 0x4c);
                    if (uVar1 != 0) {
                        return uVar1;
                    }
                    *arg1_00 = *arg1_00 + 0x400;
                    *(arg1_00 + 9) = 0;
                }
            }
            iVar4 = uVar5;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00019394 @ 0x19394 */

ulong fcn.00019394(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    uchar auStack_48 [64];
    
    if ((arg2 == 0) || (0x7f < *(CONCAT44(in_register_0000000c,arg1) + 0x48))) {
        uVar1 = 0xffffffff;
    }
    else {
        fcn.0001c57c(arg1,auStack_48);
        if (arg2 != auStack_48) {
            section..text(arg2,auStack_48,0x30);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000193e0 @ 0x193e0 */

ulong fcn.000193e0(int64_t arg1)

{
    fcn.00010300(arg1,0x6c,0);
    *arg1 = 0x7380166f;
    *(arg1 + 4) = 0x4914b2b9;
    *(arg1 + 8) = 0x172442d7;
    *(arg1 + 0xc) = 0xda8a0600;
    *(arg1 + 0x10) = 0xa96f30bc;
    *(arg1 + 0x14) = 0x163138aa;
    *(arg1 + 0x18) = 0xe38dee4d;
    *(arg1 + 0x1c) = 0xb0fb0e4e;
    return 1;
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


/* fcn.0001bb78 @ 0x1bb78 */

ulong fcn.0001bb78(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t arg3_00;
    
    uVar1 = *(arg1 + 0x20) + arg3 * 8;
    if (uVar1 < *(arg1 + 0x20)) {
        *(arg1 + 0x24) = *(arg1 + 0x24) + 1;
    }
    uVar2 = *(arg1 + 0x68);
    *(arg1 + 0x24) = *(arg1 + 0x24) + (arg3 >> 0x1d);
    *(arg1 + 0x20) = uVar1;
    if (uVar2 != 0) {
        arg2_00 = arg1 + 0x28;
        if ((arg3 < 0x40) && (uVar2 + arg3 < 0x40)) {
            if (arg2_00 + uVar2 != arg2) {
                section..text(arg2_00 + uVar2,arg2,arg3);
            }
            *(arg1 + 0x68) = *(arg1 + 0x68) + arg3;
            return 1;
        }
        arg3_00 = 0x40 - uVar2;
        if ((arg3_00 != 0) && (arg2_00 + uVar2 != arg2)) {
            section..text(arg2_00 + uVar2,arg2,arg3_00);
        }
        fcn.00019438(arg1,arg2_00,1);
        *(arg1 + 0x68) = 0;
        arg2 = arg2 + arg3_00;
        arg3 = arg3 - arg3_00;
        fcn.00010300(arg2_00,0x40,0);
    }
    uVar2 = arg3 >> 6;
    if (uVar2 != 0) {
        fcn.00019438(arg1,arg2,uVar2);
        arg2 = arg2 + uVar2 * 0x40;
        arg3 = arg3 + uVar2 * -0x40;
    }
    if (arg3 != 0) {
        *(arg1 + 0x68) = arg3;
        if (arg1 + 0x28 != arg2) {
            section..text(arg1 + 0x28,arg2,arg3);
        }
    }
    return 1;
}


/* fcn.0001bc90 @ 0x1bc90 */

//WARNING: Variable defined which should be unmapped: var_3fh

ulong fcn.0001bc90(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    uint32_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    int64_t var_3fh;
    int32_t var_3fh_3;
    int64_t var_3fh_2;
    
    uVar1 = *(arg2 + 0x68);
    arg2_00 = arg2 + 0x28;
    *(uVar1 + arg2_00) = 0x80;
    uVar3 = uVar1 + 1;
    if (0x38 < uVar3) {
        if (0x40 - uVar3 != 0) {
            fcn.00010300(uVar3 + arg2_00,0x40 - uVar3,0);
        }
        uVar3 = 0;
        fcn.00019438(arg2,arg2_00,1);
    }
    if (0x38 - uVar3 != 0) {
        fcn.00010300(uVar3 + arg2_00,0x38 - uVar3,0);
    }
    *(arg2 + 0x60) = *(arg2 + 0x27);
    *(arg2 + 0x61) = *(arg2 + 0x26);
    *(arg2 + 0x62) = *(arg2 + 0x25);
    *(arg2 + 99) = *(arg2 + 0x24);
    *(arg2 + 100) = *(arg2 + 0x23);
    *(arg2 + 0x65) = *(arg2 + 0x22);
    *(arg2 + 0x66) = *(arg2 + 0x21);
    *(arg2 + 0x67) = *(arg2 + 0x20);
    fcn.00019438(arg2,arg2 + 0x28,1);
    *(arg2 + 0x68) = 0;
    fcn.00010300(arg2 + 0x28,0x40,0);
    uVar2 = *arg2;
    *arg1 = uVar2 >> 0x18;
    *(arg1 + 1) = uVar2 >> 0x10;
    *(arg1 + 2) = uVar2 >> 8;
    *(arg1 + 3) = uVar2;
    uVar2 = *(arg2 + 4);
    *(arg1 + 4) = uVar2 >> 0x18;
    *(arg1 + 5) = uVar2 >> 0x10;
    *(arg1 + 6) = uVar2 >> 8;
    *(arg1 + 7) = uVar2;
    uVar2 = *(arg2 + 8);
    *(arg1 + 8) = uVar2 >> 0x18;
    *(arg1 + 9) = uVar2 >> 0x10;
    *(arg1 + 10) = uVar2 >> 8;
    *(arg1 + 0xb) = uVar2;
    uVar2 = *(arg2 + 0xc);
    *(arg1 + 0xc) = uVar2 >> 0x18;
    *(arg1 + 0xd) = uVar2 >> 0x10;
    *(arg1 + 0xe) = uVar2 >> 8;
    *(arg1 + 0xf) = uVar2;
    uVar2 = *(arg2 + 0x10);
    *(arg1 + 0x10) = uVar2 >> 0x18;
    *(arg1 + 0x11) = uVar2 >> 0x10;
    *(arg1 + 0x12) = uVar2 >> 8;
    *(arg1 + 0x13) = uVar2;
    uVar2 = *(arg2 + 0x14);
    *(arg1 + 0x14) = uVar2 >> 0x18;
    *(arg1 + 0x15) = uVar2 >> 0x10;
    *(arg1 + 0x16) = uVar2 >> 8;
    *(arg1 + 0x17) = uVar2;
    uVar2 = *(arg2 + 0x18);
    *(arg1 + 0x18) = uVar2 >> 0x18;
    *(arg1 + 0x19) = uVar2 >> 0x10;
    *(arg1 + 0x1a) = uVar2 >> 8;
    *(arg1 + 0x1b) = uVar2;
    uVar2 = *(arg2 + 0x1c);
    *(arg1 + 0x1c) = uVar2 >> 0x18;
    *(arg1 + 0x1d) = uVar2 >> 0x10;
    *(arg1 + 0x1e) = uVar2 >> 8;
    *(arg1 + 0x1f) = uVar2;
    return 1;
}


/* fcn.0001c6e4 @ 0x1c6e4 */

int16_t * fcn.0001c6e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int64_t arg1_00;
    int64_t iVar5;
    int16_t *piStackX_8;
    
    if (arg1 != 0) {
        iVar5 = arg2 + arg1 * 0x18;
        do {
            arg1 = arg1 + -1;
            arg1_00 = iVar5 + -0x18;
            if ((arg1_00 == 0x1e290) || (iVar2 = fcn.000102e0(arg1_00,0x1e290,0x10), iVar2 == 0)) {
                piVar3 = *(iVar5 + -8);
                iVar5 = -0x7ffffffffffffff2;
                while (iVar1 = *piVar3, iVar1 != -1) {
                    piVar4 = piVar3;
                    do {
                        if (iVar1 == 4) break;
                        piVar4 = piVar4 + piVar4[1];
                        iVar1 = *piVar4;
                    } while (iVar1 != -1);
                    if (*piVar4 == -1) {
                        piVar4 = piVar3;
                    }
                    if ((*piVar4 == 4) &&
                       ((arg3 == piVar4 + 4 || (iVar2 = fcn.000102e0(arg3,piVar4 + 4,0x10), iVar2 == 0)))) {
                        iVar5 = 0;
                        piStackX_8 = piVar4 + 0xc;
                    }
                    piVar3 = piVar4[1] + piVar4;
                    if (-1 < iVar5) {
                        return piStackX_8;
                    }
                }
            }
            iVar5 = arg1_00;
        } while (arg1 != 0);
    }
    return NULL;
}


/* fcn.0001dce0 @ 0x1dce0 */

int64_t fcn.0001dce0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ushort uStack_438;
    uint uStack_436;
    uint uStack_432;
    uint uStack_42e;
    uint uStack_42a;
    uint uStack_426;
    uchar auStack_418 [10];
    uchar uStack_40e;
    uchar auStack_40d [1029];
    
    uStack_432 = 0x7a010000;
    uStack_438 = 0x180;
    uStack_42e = 0x6000000;
    uVar1 = arg1 >> 0x10;
    uStack_42a = CONCAT22(arg1 << 8 | arg1 >> 8,uVar1 << 8 | uVar1 >> 8);
    uStack_426 = 0x1000000;
    uStack_436 = 0x16000000;
    iVar2 = (**(*arg4 + 0x18))(*arg4,0x16,&uStack_438,0x40b,auStack_418);
    if (-1 < iVar2) {
        if (CONCAT22(auStack_418._6_4_ << 8 | auStack_418._6_4_ >> 8,
                     SUB42(auStack_418._6_4_,2) << 8 | SUB42(auStack_418._6_4_,2) >> 8) == 0) {
            *arg2 = uStack_40e;
            (**(*0x1e908 + 0x160))(arg3,auStack_40d,0x400);
            iVar2 = 0;
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.0001538c @ 0x1538c */

int64_t fcn.0001538c(int64_t arg1)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    
    pcVar3 = "en-US";
    cVar2 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar2 = cVar2 + -0x20;
    }
    cVar1 = 'E';
    if (*arg1 != '\0') {
        do {
            if ((*pcVar3 == '\0') || (cVar2 != cVar1)) break;
            pcVar3 = pcVar3 + 1;
            cVar2 = pcVar3[arg1 + -0x1e488];
            if (cVar2 + 0x9fU < 0x1a) {
                cVar2 = cVar2 + -0x20;
            }
            cVar1 = *pcVar3;
            if (cVar1 + 0x9fU < 0x1a) {
                cVar1 = cVar1 + -0x20;
            }
        } while (pcVar3[arg1 + -0x1e488] != '\0');
    }
    return cVar2 - cVar1;
}


/* fcn.0001070c @ 0x1070c */

uchar fcn.0001070c(void)

{
    *0x1e8e8 = fcn.0001c6e4(*(*0x1e900 + 0x68),*(*0x1e900 + 0x70),0x1e2a0);
    if (*0x1e8e8 != NULL) {
        *0x1e8f8 = *(*0x1e8e8 + 3);
        *0x1e898 = *(*0x1e8e8 + 7);
        if (**0x1e8e8 == '\x01') {
            return 1;
        }
    }
    return 0;
}


/* fcn.0001c89c @ 0x1c89c */

uint64_t fcn.0001c89c(ulong param_1,int64_t param_2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int iVar3;
    int iVar4;
    
    if ((*0xfed40000 & 0x20) == 0) {
        *0xfed40000 = 2;
        iVar4 = 30000;
        do {
            iVar3 = 5;
            do {
                fcn.00015734(0x1e,param_2);
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            if (((*0xfed40000 & 0x20) != 0) && (*0xfed40000 < '\0')) {
                uVar1 = *0xfed40000 & 0x20;
                goto code_r0x0001c8e9;
            }
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar1 = 0;
code_r0x0001c8e9:
        uVar2 = ~-(uVar1 != 0) & 0x8000000000000006;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001cc24 @ 0x1cc24 */

int64_t fcn.0001cc24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t noname_0;
    ulong noname_0_00;
    int64_t arg1_00;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t arg3_00;
    
    uVar3 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        noname_0 = arg1;
        arg1_00 = arg2;
        arg3_00 = arg4;
        iVar2 = fcn.0001c9a8();
        if (iVar2 < 0) {
            iVar2 = -0x7ffffffffffffff9;
        }
        else {
            uVar4 = uVar3;
            do {
                if (arg1 <= uVar4) break;
                arg1_00 = *arg2;
                arg4 = arg4 + -1;
                if (arg4 == 0) {
                    arg3_00 = CONCAT71(arg3_00 >> 8,1);
                }
                else {
                    arg3_00 = 0;
                }
                iVar2 = fcn.0001ca50(noname_0,arg1_00,*(arg2 + 8),arg3_00);
                uVar4 = uVar4 + 1;
                arg2 = arg2 + 0x10;
            } while (-1 < iVar2);
            if (-1 < iVar2) {
                do {
                    arg1_00 = CONCAT71(arg1_00 >> 8,0x10);
                    noname_0_00 = 0xfed40018;
                    cVar1 = fcn.0001c7e4(0xfed40018,arg1_00);
                } while (cVar1 == '\0');
                iVar2 = -0x7ffffffffffffffb;
                do {
                    if (uVar3 != 0) break;
                    iVar2 = fcn.0001cb60(noname_0_00,*arg3,arg3 + 8);
                    uVar3 = 1;
                    arg3 = arg3 + 0x10;
                } while (iVar2 == -0x7ffffffffffffffb);
            }
            *0xfed40018 = 0x40;
        }
    }
    return iVar2;
}


/* fcn.0001ddc4 @ 0x1ddc4 */

ulong fcn.0001ddc4(int64_t param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    
    if (*0x1e930 == '\0') {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = fcn.0001dea0(param_1,param_2,param_3,0x1e320);
    }
    return uVar1;
}


/* fcn.0001c914 @ 0x1c914 */

ulong fcn.0001c914(ulong param_1,ulong param_2)

{
    char cVar1;
    ulong uVar2;
    uchar uVar3;
    unkbyte7 Var4;
    int iVar5;
    int iVar6;
    
    Var4 = param_2 >> 8;
    iVar6 = 0x1d4c;
    cVar1 = fcn.0001c7e4(0xfed40000,CONCAT71(Var4,0x20));
    if (cVar1 == '\0') {
code_r0x0001c93a:
        uVar2 = 0x8000000000000007;
    }
    else {
        uVar3 = 0x20;
        *0xfed40000 = 0x20;
        cVar1 = fcn.0001c7e4(0xfed40000,CONCAT71(Var4,0x20));
        if (cVar1 != '\0') {
            do {
                iVar5 = 5;
                do {
                    fcn.00015734(0x1e,CONCAT71(Var4,uVar3));
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                uVar3 = 0x20;
                iVar6 = iVar6 + -1;
                cVar1 = fcn.0001c7e4(0xfed40000,CONCAT71(Var4,0x20));
            } while ((cVar1 != '\0') && (iVar6 != 0));
            cVar1 = fcn.0001c7e4(0xfed40000,CONCAT71(Var4,0x20));
            if (cVar1 != '\0') goto code_r0x0001c93a;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001d17c @ 0x1d17c */

int64_t fcn.0001d17c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if ((arg2 == 0) || (arg1 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if ((*0xfed40030 - 1 < 0xfffffffe) && ((*0xfed40030 & 0x4000) != 0)) {
        iVar1 = fcn.0001ce20(noname_0,arg1);
        if (-1 < iVar1) {
            iVar1 = fcn.0001cfa0(arg2,arg3);
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00015350 @ 0x15350 */

int64_t fcn.00015350(void)

{
    if (*0x1e918 == 0) {
        (**(*0x1e908 + 0x140))(0x1e1a0,0,0x1e918);
    }
    return *0x1e918;
}


/* fcn.000122c0 @ 0x122c0 */

int64_t fcn.000122c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    int64_t in_stack_00000028;
    uchar auStack_28 [8];
    uint64_t uStack_20;
    int64_t iStack_18;
    uint64_t uStack_10;
    
    if (((arg1 == 0) || (arg3 == 0)) || (in_stack_00000028 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (*(*0x1e8e8 + 1) == '\x01') {
        fcn.0001c89c();
        uStack_20 = arg4 & 0xffffffff;
        iStack_18 = arg3;
        uStack_10 = arg2 & 0xffffffffU;
        iVar1 = fcn.0001cc24(1,&iStack_18,auStack_28,1);
        if (iVar1 < 0) {
            fcn.0001ddc4(0x80000002,0x3058a19);
        }
        fcn.0001c914();
    }
    else {
        auStackX_8[0] = arg4;
        iVar1 = fcn.0001d17c(arg3,arg2 & 0xffffffffU,in_stack_00000028,auStackX_8);
        if (iVar1 < 0) {
            fcn.0001ddc4(0x80000002,0x3058a19);
        }
    }
    return iVar1;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 56928 named .text
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


/* fcn.0001075c @ 0x1075c */

int64_t fcn.0001075c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_18 [8];
    ulong uStackX_20;
    int64_t var_350h;
    int64_t var_358h;
    ulong auStack_418 [2];
    uchar auStack_408 [1024];
    
    uStackX_20 = 0;
    iVar2 = (**(*0x1e908 + 0x140))(0x1e1b0,0,&uStackX_20);
    if (-1 < iVar2) {
        iVar2 = fcn.0001dce0(0x11e,auStackX_18,auStack_408,&uStackX_20);
        iVar1 = *0x1e908;
        if (-1 < iVar2) {
            auStack_418[0] = 0;
            *arg1 = CONCAT22(auStack_408._12_4_ << 8 | auStack_408._12_4_ >> 8,
                             SUB42(auStack_408._12_4_,2) << 8 | SUB42(auStack_408._12_4_,2) >> 8);
            iVar2 = (**(iVar1 + 0x140))(0x1e1b0,0,auStack_418);
            if (-1 < iVar2) {
                iVar2 = fcn.0001dce0(0x11f,auStackX_18,auStack_408,auStack_418);
                if (-1 < iVar2) {
                    *arg2 = CONCAT22(auStack_408._12_4_ << 8 | auStack_408._12_4_ >> 8,
                                     SUB42(auStack_408._12_4_,2) << 8 | SUB42(auStack_408._12_4_,2) >> 8);
                    iVar2 = 0;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00015274 @ 0x15274 */

int64_t fcn.00015274(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint *puVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint32_t *puStackX_8;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    if ((puVar4[1] == 3) && (puVar4 == *0x1e9c0)) {
        uVar6 = puVar4 + puVar4[7] + 0x20;
        *arg2 = uVar6;
        if ((((*(uVar6 + 4) == 0) && (*(uVar6 + 0x1c) == 0)) || (*0x1e8a0 < uVar6)) || (uVar6 - puVar4 >> 5 < 0)) {
            iVar2 = 0xffffffff;
        }
        else {
            iVar2 = 0;
        }
    }
    else {
        *arg3 = *puVar4;
        puStackX_8 = puVar4 + 2;
        *(arg3 + 4) = puVar4[1];
        iVar3 = fcn.0001516c(puStackX_8,&puStackX_8,arg3,arg3 + 8);
        iVar2 = *0x1e908;
        if (iVar3 == 0xffffffff) {
            iVar2 = 0xffffffff;
        }
        else {
            uVar1 = *puStackX_8;
            puVar5 = puStackX_8 + 1;
            *(arg3 + 0x1c) = uVar1;
            (**(iVar2 + 0x160))(arg3 + 0x20,puVar5,uVar1);
            *arg2 = uVar1 + puVar5;
            iVar2 = uVar1 + 0x20;
        }
    }
    return iVar2;
}


/* fcn.00010470 @ 0x10470 */

ulong fcn.00010470(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uchar *puVar2;
    ulong *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    bool bVar7;
    int64_t *in_stack_00000028;
    uchar auStack_128 [64];
    ulong uStack_e8;
    uint uStack_e0;
    uint uStack_dc;
    uint uStack_d8;
    uint uStack_d4;
    uint uStack_d0;
    uint uStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    uint32_t uStack_c0;
    
    iVar5 = 0;
    bVar7 = (arg1 & 1U) != 0;
    iVar1 = arg2;
    if (bVar7) {
        uStack_d0 = 0;
        uStack_d4 = 0;
        uStack_e8 = 0xefcdab8967452301;
        uStack_e0 = 0x98badcfe;
        uStack_dc = 0x10325476;
        uStack_d8 = 0xc3d2e1f0;
        fcn.000168f8(&uStack_e8,arg3,arg4 & 0xffffffff);
        puVar2 = auStack_128;
        fcn.000169d8(puVar2,&uStack_e8);
        iVar5 = 0x14;
        fcn.0001c6a0(puVar2,iVar1 + 6,auStack_128,0x14);
        *(arg2 + 4) = 4;
    }
    uVar4 = bVar7;
    if ((arg1 & 2U) != 0) {
        uStack_c0 = 0;
        puVar3 = &uStack_e8;
        uStack_e8 = 0;
        uStack_e0 = 0x6a09e667;
        uStack_dc = 0xbb67ae85;
        uStack_d8 = 0x3c6ef372;
        uStack_d4 = 0xa54ff53a;
        uStack_d0 = 0x510e527f;
        uStack_cc = 0x9b05688c;
        uStack_c8 = 0x1f83d9ab;
        uStack_c4 = 0x5be0cd19;
        fcn.000190ac(puVar3,arg3,arg4 & 0xffffffff);
        if (uStack_c0 < 0x40) {
            puVar3 = &uStack_e8;
            fcn.0001919c(puVar3,auStack_128);
        }
        iVar6 = uVar4 * 0x42;
        fcn.0001c6a0(puVar3,iVar1 + 6 + iVar6,auStack_128,0x20);
        iVar5 = iVar5 + 0x20;
        *(iVar6 + 4 + arg2) = 0xb;
        uVar4 = uVar4 + 1;
    }
    if ((arg1 & 4U) != 0) {
        fcn.00019318(&uStack_e8);
        fcn.0001c498(&uStack_e8,arg3,arg4 & 0xffffffff);
        puVar3 = &uStack_e8;
        fcn.00019394(puVar3,auStack_128);
        iVar6 = uVar4 * 0x42;
        fcn.0001c6a0(puVar3,iVar1 + 6 + iVar6,auStack_128,0x30);
        iVar5 = iVar5 + 0x30;
        *(iVar6 + 4 + arg2) = 0xc;
        uVar4 = uVar4 + 1;
    }
    if ((arg1 & 8U) != 0) {
        fcn.00019318(&uStack_e8);
        fcn.0001c498(&uStack_e8,arg3,arg4 & 0xffffffff);
        puVar3 = &uStack_e8;
        fcn.00019394(puVar3,auStack_128);
        iVar6 = uVar4 * 0x42;
        fcn.0001c6a0(puVar3,iVar1 + 6 + iVar6,auStack_128,0x40);
        iVar5 = iVar5 + 0x40;
        *(iVar6 + 4 + arg2) = 0xd;
        uVar4 = uVar4 + 1;
    }
    if ((arg1 & 0x10U) != 0) {
        fcn.000193e0(&uStack_e8);
        if (arg4 != 0) {
            fcn.0001bb78(&uStack_e8,arg3,arg4);
        }
        puVar2 = auStack_128;
        fcn.0001bc90(puVar2,&uStack_e8);
        iVar6 = uVar4 * 0x42;
        fcn.0001c6a0(puVar2,iVar1 + 6 + iVar6,auStack_128,0x20);
        iVar5 = iVar5 + 0x20;
        *(iVar6 + 4 + arg2) = 0x12;
        uVar4 = uVar4 + 1;
    }
    *arg2 = uVar4;
    *in_stack_00000028 = iVar5;
    return 0;
}


/* fcn.00011748 @ 0x11748 */

void fcn.00011748(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    uint64_t noname_0;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint in_R8;
    uint32_t *puVar7;
    uint64_t uVar8;
    int iVar9;
    uint16_t *puVar10;
    ushort uStack_2a8;
    uint uStack_2a6;
    uint uStack_2a2;
    uint uStack_29e;
    uint uStack_29a;
    uint uStack_296;
    uint16_t uStack_292;
    uchar uStack_290;
    ushort auStack_28f [235];
    uchar auStack_b8 [160];
    
    puVar7 = CONCAT44(in_R8,arg3);
    uVar4 = 0;
    uStack_2a2 = 0x82010000;
    uStack_296 = 0x9000040;
    uStack_292 = 0;
    uStack_2a8 = 0x280;
    uStack_290 = 0;
    uVar1 = arg2 >> 0x10;
    uVar5 = 0;
    uStack_29e = CONCAT22(arg2 << 8 | arg2 >> 8,uVar1 << 8 | uVar1 >> 8);
    auStack_28f[0] = 0;
    uVar3 = (auStack_28f - &uStack_296) + 2;
    uVar1 = uVar3 >> 0x10;
    uStack_29a = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
    uVar1 = *puVar7 >> 0x10;
    uVar2 = *puVar7;
    *(&uStack_296 + uVar3) = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
    puVar10 = &uStack_292 + uVar3;
    if (*puVar7 != 0) {
        puVar6 = puVar7 + 1;
        do {
            *puVar10 = *puVar6 << 8 | *puVar6 >> 8;
            puVar10 = puVar10 + 1;
            uVar3 = *puVar6;
            if (uVar3 == 4) {
                uVar4 = 0x14;
                noname_0 = 0;
            }
            else {
                noname_0 = uVar3 - 0xb;
                if (uVar3 - 0xb == 0) {
code_r0x00011846:
                    uVar4 = 0x20;
                }
                else if (uVar3 == 0xc) {
                    uVar4 = 0x30;
                    noname_0 = 0;
                }
                else {
                    uVar3 = uVar3 - 0xd;
                    noname_0 = uVar3;
                    if (uVar3 == 0) {
                        uVar4 = 0x40;
                    }
                    else if (uVar3 == 5) goto code_r0x00011846;
                }
            }
            uVar8 = uVar4;
            fcn.0001c6a0(noname_0,puVar10,puVar6 + 2,uVar4);
            puVar10 = puVar10 + uVar8;
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 0x42;
        } while (uVar5 < *puVar7);
    }
    iVar9 = puVar10 - &uStack_2a8;
    uVar1 = iVar9 >> 0x10;
    uStack_2a6 = CONCAT22(iVar9 << 8 | iVar9 >> 8,uVar1 << 8 | uVar1 >> 8);
    (**(arg1 + 0x18))(arg1,iVar9,&uStack_2a8,0x93,auStack_b8);
    return;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.0001d98c @ 0x1d98c */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.0001d98c(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    bool bVar12;
    int64_t iStackX_8;
    int64_t var_bp_18h;
    int64_t var_28h;
    uint32_t var_b0h;
    uchar auStack_188 [12];
    int iStack_17c;
    uint32_t uStack_178;
    int iStack_174;
    int iStack_170;
    uchar auStack_168 [8];
    int iStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_154;
    uchar auStack_138 [4];
    uint8_t uStack_134;
    uint16_t uStack_132;
    uint uStack_128;
    uint16_t uStack_124;
    uint8_t uStack_122;
    uchar uStack_121;
    int iStack_120;
    int iStack_11c;
    uint32_t uStack_118;
    uint32_t uStack_114;
    uint uStack_108;
    uint32_t uStack_104;
    uint32_t uStack_c4;
    uint32_t uStack_b4;
    uint32_t auStack_90 [2];
    int64_t var_80h;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_bp_70h;
    uint32_t var_6ch;
    int64_t var_60h;
    int32_t var_1ch;
    int32_t var_ch;
    
    uVar6 = 0;
    *(arg1 + 0x68) = 0;
    iVar3 = fcn.0001d460(arg1,auStack_138);
    if (iVar3 < 0) {
        return iVar3;
    }
    cVar1 = *(arg1 + 0x7d);
    if (cVar1 == '\0') {
        uVar7 = 0;
        if (iStack_120 == 0x10b) {
            uVar8 = uStack_104;
            uVar7 = uVar6;
        }
        else {
            uVar8 = CONCAT44(uStack_104,uStack_108);
        }
    }
    else {
        uVar7 = uStack_132 - 0x28;
        uVar8 = uVar7 + CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
    }
    *arg1 = uVar8;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x50) = 0;
    if (cVar1 == '\0') {
        if ((uStack_122 & 1) != 0) {
code_r0x0001da2f:
            *(arg1 + 0x7c) = 1;
            goto code_r0x0001da39;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x0001da2f;
    *(arg1 + 0x7c) = 0;
code_r0x0001da39:
    if (cVar1 == '\0') {
        if (iStack_120 == 0x10b) {
            puVar10 = auStack_90;
        }
        else {
            puVar10 = &var_78h;
            uStack_c4 = uStack_b4;
        }
        if (6 < uStack_c4) {
            uVar2 = *puVar10;
            uVar7 = uVar2;
            iVar3 = uStack_124 + 0x18 + *(arg1 + 0x3c);
            bVar12 = uStack_132 != 0;
            uVar8 = uVar6;
            while (bVar12) {
                iStackX_8 = 0x28;
                iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar3,&iStackX_8,auStack_168);
                if (iVar4 < 0) goto code_r0x0001db75;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x0001db7d;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x0001dafe;
                }
                iVar3 = iVar3 + 0x28;
                uVar8 = uVar8 + 1;
                bVar12 = uVar8 < uStack_132;
            }
        }
    }
    else {
        iVar3 = 0x28;
        uVar9 = uStack_118;
        uVar8 = uVar6;
        uVar11 = uVar6;
        if (uStack_134 != 0) {
            do {
                iStackX_8 = 0x28;
                iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar3,&iStackX_8,auStack_168);
                if (iVar4 < 0) goto code_r0x0001db75;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x0001db7d;
                if (((uVar9 < uStack_15c) || (iStack_160 + uStack_15c <= uVar9)) ||
                   (uVar11 = ((uStack_154 - uVar7) - uStack_15c) + uVar9, uStack_134 - 1 <= uVar8)) {
                    uVar5 = uVar8 + 1;
                    if (uVar5 == uStack_134) {
                        *(arg1 + 8) = uStack_15c + (iStack_160 - uVar7);
                    }
                    iVar3 = iVar3 + 0x28;
                }
                else {
                    uVar5 = uStack_134 - 1;
                    iVar3 = iVar3 + (uVar5 - uVar8) * 0x28;
                }
                uVar8 = uVar5;
            } while (uVar5 < uStack_134);
            if ((uVar11 != 0) && (uStack_114 != 0)) {
                do {
                    iStackX_8 = 0x1c;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + uVar11,&iStackX_8,auStack_188);
                    if (iVar4 < 0) goto code_r0x0001db6c;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x0001db7d;
                    if (iStack_17c == 2) {
                        *(arg1 + 0x40) = uStack_118 + uVar6;
                        return 0;
                    }
                    uVar6 = uVar6 + 0x1c;
                } while (uVar6 < uStack_114);
            }
        }
    }
    return 0;
code_r0x0001db75:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x0001db7d;
code_r0x0001dafe:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x0001db6c;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x0001db7d;
    if (iStack_17c == 2) {
        *(arg1 + 0x40) = uVar2 + uVar6;
        if (iStack_174 != 0) {
            return 0;
        }
        if (iStack_170 == 0) {
            return 0;
        }
        *(arg1 + 8) = *(arg1 + 8) + uStack_178;
        return 0;
    }
    uVar6 = uVar6 + 0x1c;
    if (puVar10[1] <= uVar6) {
        return 0;
    }
    goto code_r0x0001dafe;
code_r0x0001db6c:
    bVar12 = iStackX_8 == 0x1c;
code_r0x0001db7d:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.000132e4 @ 0x132e4 */

int64_t fcn.000132e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    int16_t iVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t arg3_00;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t uVar11;
    int *arg2_00;
    uint64_t uVar12;
    uint32_t *puVar13;
    bool bVar14;
    int64_t in_stack_00000028;
    uint64_t *in_stack_00000030;
    uint64_t uStack_350;
    int64_t iStack_330;
    uint uStack_328;
    uint uStack_324;
    uint uStack_320;
    uint uStack_31c;
    uint uStack_318;
    ulong uStack_314;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    ulong uStack_2b8;
    uint uStack_2b0;
    uint uStack_2ac;
    uint uStack_2a8;
    uint uStack_2a4;
    uint uStack_2a0;
    uint uStack_29c;
    uint uStack_298;
    ulong uStack_294;
    uchar auStack_248 [112];
    uchar auStack_1d8 [208];
    uchar auStack_108 [208];
    
    uVar12 = 0;
    uStack_350 = 0;
    iStack_330 = 0;
    if (*arg1 == 0x5a4d) {
        uVar12 = *(arg1 + 0x3c);
    }
    piVar1 = uVar12 + arg1;
    if (*piVar1 != 0x4550) {
        return 0;
    }
    if (arg3 == 1) {
        uStack_328 = 0x67452301;
        uStack_324 = 0xefcdab89;
        uStack_320 = 0x98badcfe;
        uStack_31c = 0x10325476;
        uStack_318 = 0xc3d2e1f0;
        uStack_314 = 0;
    }
    uStack_2c0 = arg2;
    if (arg3 == 2) {
        bVar14 = (arg4 & 1U) != 0;
        if (bVar14) {
            uStack_328 = 0x67452301;
            uStack_324 = 0xefcdab89;
            uStack_320 = 0x98badcfe;
            uStack_31c = 0x10325476;
            uStack_318 = 0xc3d2e1f0;
            uStack_314 = 0;
        }
        uStack_350 = bVar14;
        if ((arg4 & 2U) != 0) {
            uStack_350 = bVar14 + 1;
            uStack_294 = 0x5be0cd19;
            uStack_2b8 = 0;
            uStack_2b0 = 0x6a09e667;
            uStack_2ac = 0xbb67ae85;
            uStack_2a8 = 0x3c6ef372;
            uStack_2a4 = 0xa54ff53a;
            uStack_2a0 = 0x510e527f;
            uStack_29c = 0x9b05688c;
            uStack_298 = 0x1f83d9ab;
        }
        if ((arg4 & 4U) != 0) {
            fcn.00019318(auStack_1d8);
            uStack_350 = uStack_350 + 1;
        }
        if ((arg4 & 8U) != 0) {
            fcn.0001c41c(auStack_108);
            uStack_350 = uStack_350 + 1;
        }
        if ((arg4 & 0x10U) != 0) {
            iVar5 = fcn.000193e0(auStack_248);
            iStack_330 = iVar5;
            uStack_350 = uStack_350 + 1;
        }
    }
    iVar2 = piVar1[6];
    uVar7 = uVar12 + 0x58;
    if (iVar2 == 0x10b) {
        uVar11 = piVar1[0x1d];
    }
    else {
        uVar11 = piVar1[0x21];
    }
    if (arg3 == 1) {
        fcn.000168f8(&uStack_328,arg1,uVar7 & 0xffffffff);
    }
    if (arg3 == 2) {
        if ((arg4 & 1U) != 0) {
            fcn.000168f8(&uStack_328,arg1,uVar7 & 0xffffffff);
        }
        if (((arg4 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
            fcn.000190ac(&uStack_2b8,arg1,uVar7 & 0xffffffff);
        }
        if ((arg4 & 4U) != 0) {
            fcn.0001c498(auStack_1d8,arg1,uVar7 & 0xffffffff);
        }
        if ((arg4 & 8U) != 0) {
            fcn.0001c498(auStack_108,arg1,uVar7 & 0xffffffff);
        }
        if (((arg4 & 0x10U) != 0) && (uVar7 != 0)) {
            fcn.0001bb78(auStack_248,arg1,uVar7);
        }
    }
    arg2_00 = piVar1 + 0x17;
    if (4 < uVar11) {
        if (iVar2 == 0x10b) {
            iVar6 = 0x98 - arg2_00;
        }
        else {
            iVar6 = 0xa8 - arg2_00;
        }
        uVar7 = piVar1 + iVar6;
        if (uVar7 != 0) {
            if (arg3 == 1) {
                fcn.000168f8(&uStack_328,arg2_00,uVar7 & 0xffffffff);
            }
            if (arg3 == 2) {
                if ((arg4 & 1U) != 0) {
                    fcn.000168f8(&uStack_328,arg2_00,uVar7 & 0xffffffff);
                }
                if (((arg4 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
                    fcn.000190ac(&uStack_2b8,arg2_00,uVar7 & 0xffffffff);
                }
                if ((arg4 & 4U) != 0) {
                    fcn.0001c498(auStack_1d8,arg2_00,uVar7 & 0xffffffff);
                }
                if ((arg4 & 8U) != 0) {
                    fcn.0001c498(auStack_108,arg2_00,uVar7 & 0xffffffff);
                }
                if ((arg4 & 0x10U) != 0) {
                    fcn.0001bb78(auStack_248,arg2_00,uVar7);
                }
            }
        }
        arg2_00 = piVar1 + 0x28;
        if (iVar2 != 0x10b) {
            arg2_00 = piVar1 + 0x2c;
        }
    }
    uVar7 = (piVar1[0x15] - arg2_00) + arg1;
    if (uVar7 != 0) {
        if (arg3 == 1) {
            fcn.000168f8(&uStack_328,arg2_00,uVar7 & 0xffffffff);
        }
        if (arg3 == 2) {
            if ((arg4 & 1U) != 0) {
                fcn.000168f8(&uStack_328,arg2_00,uVar7 & 0xffffffff);
            }
            if (((arg4 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
                fcn.000190ac(&uStack_2b8,arg2_00,uVar7 & 0xffffffff);
            }
            if ((arg4 & 4U) != 0) {
                fcn.0001c498(auStack_1d8,arg2_00,uVar7 & 0xffffffff);
            }
            if ((arg4 & 8U) != 0) {
                fcn.0001c498(auStack_108,arg2_00,uVar7 & 0xffffffff);
            }
            if ((arg4 & 0x10U) != 0) {
                fcn.0001bb78(auStack_248,arg2_00,uVar7);
            }
        }
    }
    uVar3 = *(piVar1 + 6);
    uVar4 = piVar1[0x15];
    uStack_2c8 = uVar4;
    iVar6 = fcn.000153ec();
    if (iVar6 == 0) {
        return -0x7ffffffffffffff7;
    }
    if (uVar3 * 5 != 0) {
        iVar6 = fcn.000102c0(iVar6,uVar3 * 0x28);
    }
    uVar7 = 0;
    if (iVar6 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar9 = arg1 + 0x18 + *(piVar1 + 5) + uVar12;
    uVar12 = uVar4;
    if (*(piVar1 + 6) != 0) {
        iVar10 = iVar6 + -0x28;
        do {
            uVar12 = uVar7;
            if (uVar7 != 0) {
                iVar8 = iVar10;
                do {
                    if (*(iVar8 + 0x14) <= *(iVar9 + 0x14)) break;
                    if (iVar8 + 0x28 != iVar8) {
                        section..text(iVar8 + 0x28,iVar8,0x28);
                    }
                    iVar8 = iVar8 + -0x28;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            iVar8 = iVar6 + uVar12 * 0x28;
            if (iVar8 != iVar9) {
                section..text(iVar8,iVar9,0x28);
            }
            iVar9 = iVar9 + 0x28;
            uVar7 = uVar7 + 1;
            iVar10 = iVar10 + 0x28;
        } while (uVar7 < *(piVar1 + 6));
        uVar12 = uStack_2c8;
    }
    uVar7 = 0;
    if (*(piVar1 + 6) != 0) {
        puVar13 = iVar6 + 0x10;
        do {
            if (*puVar13 != 0) {
                iVar9 = puVar13[1] + arg1;
                arg3_00 = *puVar13;
                if (arg3 == 1) {
                    fcn.000168f8(&uStack_328,iVar9,arg3_00);
                }
                if (arg3 == 2) {
                    if ((arg4 & 1U) != 0) {
                        fcn.000168f8(&uStack_328,iVar9,arg3_00);
                    }
                    if (((arg4 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
                        fcn.000190ac(&uStack_2b8,iVar9,arg3_00);
                    }
                    if ((arg4 & 4U) != 0) {
                        fcn.0001c498(auStack_1d8,iVar9,arg3_00);
                    }
                    if ((arg4 & 8U) != 0) {
                        fcn.0001c498(auStack_108,iVar9,arg3_00);
                    }
                    if (((arg4 & 0x10U) != 0) && (arg3_00 != 0)) {
                        fcn.0001bb78(auStack_248,iVar9,arg3_00);
                    }
                }
                uVar12 = uVar12 + arg3_00;
            }
            uVar7 = uVar7 + 1;
            puVar13 = puVar13 + 10;
        } while (uVar7 < *(piVar1 + 6));
    }
    if (uVar12 < uStack_2c0) {
        arg1 = arg1 + uVar12;
        if (uVar11 < 5) {
            uVar11 = 0;
        }
        else if (iVar2 == 0x10b) {
            uVar11 = piVar1[0x27];
        }
        else {
            uVar11 = piVar1[0x2b];
        }
        uVar7 = uVar11 + uVar12;
        if (uStack_2c0 <= uVar7) {
            if (uStack_2c0 < uVar7) goto code_r0x00013a30;
            goto code_r0x0001399a;
        }
        uVar12 = (uStack_2c0 - uVar11) - uVar12;
        if (arg3 == 1) {
            fcn.000168f8(&uStack_328,arg1,uVar12 & 0xffffffff);
        }
        if (arg3 != 2) goto code_r0x0001399a;
        if ((arg4 & 1U) != 0) {
            fcn.000168f8(&uStack_328,arg1,uVar12 & 0xffffffff);
        }
        if (((arg4 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
            fcn.000190ac(&uStack_2b8,arg1,uVar12 & 0xffffffff);
        }
        if ((arg4 & 4U) != 0) {
            fcn.0001c498(auStack_1d8,arg1,uVar12 & 0xffffffff);
        }
        if ((arg4 & 8U) != 0) {
            fcn.0001c498(auStack_108,arg1,uVar12 & 0xffffffff);
        }
        if (((arg4 & 0x10U) != 0) && (uVar12 != 0)) {
            fcn.0001bb78(auStack_248,arg1,uVar12);
            goto code_r0x0001399a;
        }
code_r0x000139b3:
        if ((arg4 & 1U) != 0) {
            fcn.000169d8(in_stack_00000028,&uStack_328);
        }
        if (((arg4 & 2U) != 0) && (uStack_294._4_4_ < 0x40)) {
            fcn.0001919c(&uStack_2b8,in_stack_00000028 + 0x14);
        }
        if ((arg4 & 4U) != 0) {
            fcn.00019394(auStack_1d8,in_stack_00000028 + 0x34);
        }
        if ((arg4 & 8U) != 0) {
            fcn.0001c57c(auStack_108,in_stack_00000028 + 100);
        }
        if ((arg4 & 0x10U) != 0) {
            fcn.0001bc90(in_stack_00000028 + 0xa4,auStack_248);
        }
    }
    else {
code_r0x0001399a:
        if (arg3 == 1) {
            fcn.000169d8(in_stack_00000028,&uStack_328);
        }
        if (arg3 == 2) goto code_r0x000139b3;
    }
    *in_stack_00000030 = uStack_350;
code_r0x00013a30:
    (**(*0x1e908 + 0x48))(iVar6);
    return iStack_330;
}


/* fcn.000118f0 @ 0x118f0 */

int64_t fcn.000118f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t *arg2_00;
    bool bVar8;
    uint32_t *in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    
    iStack_50 = 0;
    iStack_58 = 0;
    iVar4 = 0;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*0x1e3e4 == 0xffffffff) {
        iStack_50 = (**(*0x1e908 + 0x140))(0x1e270,0,aiStack_48);
        if (-1 < iStack_50) {
            *0x1e8c0 = *(aiStack_48[0] + 0x18);
            *0x1e3e4 = *(aiStack_48[0] + 6);
            goto code_r0x00011997;
        }
        *0x1e3e4 = 1;
code_r0x000119a4:
        *0x1e8c0 = 1;
    }
    else {
code_r0x00011997:
        if (*0x1e3e4 == 1) goto code_r0x000119a4;
    }
    uVar7 = *0x1e8c0;
    if ((arg2 == 0) || (arg4 == 0)) {
        bVar8 = (*0x1e8c0 & 1) != 0;
        iStack_58 = 0;
        if (bVar8) {
            iStack_58 = 0x14;
        }
        uVar5 = bVar8;
        if ((*0x1e8c0 & 2) != 0) {
            iStack_58 = iStack_58 + 0x20;
            uVar5 = uVar5 + 1;
        }
        if ((*0x1e8c0 & 4) != 0) {
            iStack_58 = iStack_58 + 0x30;
            uVar5 = uVar5 + 1;
        }
        if ((*0x1e8c0 & 8) != 0) {
            iStack_58 = iStack_58 + 0x40;
            uVar5 = uVar5 + 1;
        }
        if ((*0x1e8c0 & 0x10) != 0) {
            iStack_58 = iStack_58 + 0x20;
            uVar5 = uVar5 + 1;
        }
        in_stack_00000028[2] = uVar5;
    }
    else {
        fcn.00010470(*0x1e8c0,in_stack_00000028 + 2,arg2,arg4);
        uVar7 = *0x1e8c0;
    }
    arg2_00 = in_stack_00000028 + 2;
    puVar1 = in_stack_00000028 + 0x156;
    if (*0x1e9c0 + 0x10000U < *0x1e8a0 + iStack_58 + (*arg2_00 + 8) * 2 + *puVar1) {
        *0x1e8b4 = '\x01';
    }
    if (in_stack_00000028[1] == 3) {
        bVar8 = (uVar7 & 1) != 0;
        if (bVar8) {
            fcn.00010300(in_stack_00000028 + 0xe,0x14,0);
            uVar7 = *0x1e8c0;
            *(in_stack_00000028 + 3) = 4;
        }
        uVar6 = bVar8;
        if ((uVar7 & 2) != 0) {
            fcn.00010300(in_stack_00000028 + uVar6 * 0x42 + 0xe,0x20,0);
            uVar7 = *0x1e8c0;
            *(uVar6 * 0x42 + 0xc + in_stack_00000028) = 0xb;
            uVar6 = bVar8 + 1;
        }
        if ((uVar7 & 4) != 0) {
            fcn.00010300(in_stack_00000028 + uVar6 * 0x42 + 0xe,0x30,0);
            uVar7 = *0x1e8c0;
            *(uVar6 * 0x42 + 0xc + in_stack_00000028) = 0xc;
            uVar6 = uVar6 + 1;
        }
        if ((uVar7 & 8) != 0) {
            fcn.00010300(in_stack_00000028 + uVar6 * 0x42 + 0xe,0x40,0);
            uVar7 = *0x1e8c0;
            *(uVar6 * 0x42 + 0xc + in_stack_00000028) = 0xd;
            uVar6 = uVar6 + 1;
        }
        if ((uVar7 & 0x10) != 0) {
            fcn.00010300(in_stack_00000028 + uVar6 * 0x42 + 0xe,0x20,0);
            uVar7 = *0x1e8c0;
            *(uVar6 * 0x42 + 0xc + in_stack_00000028) = 0x12;
        }
        if (in_stack_00000028[1] == 3) goto code_r0x00011bb6;
    }
    iStack_50 = fcn.00011748(arg1,*in_stack_00000028,arg2_00);
    uVar7 = *0x1e8c0;
code_r0x00011bb6:
    if (*0x1e8b4 == '\0') {
        if (((arg3 & 1U) == 0) || (in_stack_00000028[1] == 3)) {
            if (*0x1e8a0 == NULL) {
                iStack_50 = -0x7fffffffffffffeb;
            }
            else {
                *0x1e8c8 = *0x1e8a0;
                if (*0x1e8a0 != in_stack_00000028) {
                    section..text(*0x1e8a0,in_stack_00000028,8);
                    uVar7 = *0x1e8c0;
                }
                iVar3 = 8;
                if (*0x1e3e4 == 1) {
                    (**(*0x1e908 + 0x160))(*0x1e8a0 + 2,in_stack_00000028 + 0xe,0x14);
                    iVar3 = 0x1c;
                }
                else if (*0x1e3e4 == 2) {
                    if (*0x1e8a0 + 2 != arg2_00) {
                        section..text(*0x1e8a0 + 2,arg2_00,4);
                        uVar7 = *0x1e8c0;
                    }
                    iVar3 = 0xc;
                    uVar6 = 0;
                    if ((uVar7 & 1) != 0) {
                        iVar4 = 0x16;
                        if (*0x1e8a0 + 3 != in_stack_00000028 + 3) {
                            section..text(*0x1e8a0 + 3,in_stack_00000028 + 3,0x16);
                            uVar7 = *0x1e8c0;
                        }
                        iVar3 = 0x22;
                        uVar6 = 1;
                    }
                    if ((uVar7 & 2) != 0) {
                        iVar2 = uVar6 * 0x42 + 0xc + in_stack_00000028;
                        if (*0x1e8a0 + iVar3 != iVar2) {
                            section..text(*0x1e8a0 + iVar3,iVar2,0x22);
                            uVar7 = *0x1e8c0;
                        }
                        iVar3 = iVar3 + 0x22;
                        iVar4 = iVar4 + 0x22;
                        uVar6 = uVar6 + 1;
                    }
                    if ((uVar7 & 4) != 0) {
                        iVar2 = uVar6 * 0x42 + 0xc + in_stack_00000028;
                        if (*0x1e8a0 + iVar3 != iVar2) {
                            section..text(*0x1e8a0 + iVar3,iVar2,0x32);
                            uVar7 = *0x1e8c0;
                        }
                        iVar3 = iVar3 + 0x32;
                        iVar4 = iVar4 + 0x32;
                        uVar6 = uVar6 + 1;
                    }
                    if ((uVar7 & 8) != 0) {
                        iVar2 = uVar6 * 0x42 + 0xc + in_stack_00000028;
                        if (*0x1e8a0 + iVar3 != iVar2) {
                            section..text(*0x1e8a0 + iVar3,iVar2,0x42);
                            uVar7 = *0x1e8c0;
                        }
                        iVar3 = iVar3 + 0x42;
                        iVar4 = iVar4 + 0x42;
                        uVar6 = uVar6 + 1;
                    }
                    if ((uVar7 & 0x10) != 0) {
                        iVar2 = uVar6 * 0x42 + 0xc + in_stack_00000028;
                        if (*0x1e8a0 + iVar3 != iVar2) {
                            section..text(*0x1e8a0 + iVar3,iVar2,0x22);
                        }
                        iVar3 = iVar3 + 0x22;
                        iVar4 = iVar4 + 0x22;
                    }
                }
                (**(*0x1e908 + 0x160))(*0x1e8a0 + iVar3,puVar1,4);
                iVar2 = *0x1e8a0 + iVar3 + 4;
                if ((*puVar1 != 0) && (iVar2 != in_stack_00000030)) {
                    section..text(iVar2,in_stack_00000030,*puVar1);
                }
                *0x1e894 = *0x1e894 + '\x01';
                *0x1e8a0 = *0x1e8c8 + iVar3 + 4 + *puVar1;
                if (*0x1e8d8 != NULL) {
                    iVar4 = *puVar1 + 0x10 + iVar4;
                    if ((iVar4 != 0) && (*0x1e8d8 != *0x1e8c8)) {
                        section..text(*0x1e8d8,*0x1e8c8,iVar4);
                    }
                    *0x1e8d8 = *0x1e8d8 + iVar4;
                    *(*0x1e9f8 + 8) = *(*0x1e9f8 + 8) + 1;
                }
                iStack_50 = 0;
            }
        }
    }
    else {
        iStack_50 = -0x7ffffffffffffff5;
    }
    return iStack_50;
}


/* fcn.0001d1f8 @ 0x1d1f8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001d1f8(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    uVar5 = 0;
    piStackX_18 = NULL;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x1e908 + 0x140))(0x1e280,0,&iStackX_20);
    if (iVar1 < 0) {
        return 0xa000000000000002;
    }
    arg1_00 = *(*0x1e900 + 0x70);
    for (iVar1 = *(*0x1e900 + 0x68); iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((arg1_00 == 0x1e230) || (iVar2 = fcn.000102e0(arg1_00,0x1e230,0x10), iVar2 == 0)) {
            uVar3 = *(arg1_00 + 0x10);
            goto code_r0x0001d29b;
        }
        arg1_00 = arg1_00 + 0x18;
    }
    uVar3 = uVar5;
code_r0x0001d29b:
    if (uVar3 == 0) {
        return 0xa000000000000002;
    }
    iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_48);
    uVar3 = uVar5;
    uVar6 = uVar5;
    if (-1 < iVar1) {
        do {
            if (*piStackX_18 == 0x50434146) {
                if (auStackX_10[0] == 2) {
                    uVar6 = piStackX_18[10];
                }
                if ((auStackX_10[0] & 0x1c) != 0) {
                    uVar3 = *(piStackX_18 + 0x23);
                }
            }
            if ((uVar6 != 0) && (uVar3 != 0)) goto code_r0x0001d313;
            uVar5 = uVar5 + 1;
            iVar1 = (**(iStackX_20 + 8))(uVar5,&piStackX_18,auStackX_10,auStack_48);
        } while (-1 < iVar1);
        if (uVar3 != 0) {
code_r0x0001d313:
            *arg1 = uVar3;
            return 0;
        }
        if (uVar6 != 0) {
            *arg1 = uVar6;
            iVar1 = 0;
        }
    }
    uVar4 = 0;
    if (iVar1 != 0) {
        uVar4 = 0xa000000000000002;
    }
    return uVar4;
}


/* fcn.0001d35c @ 0x1d35c */

ulong fcn.0001d35c(int64_t arg1,int64_t arg2,char **arg3,int64_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    int *piVar3;
    char *pcVar4;
    int *piVar5;
    uint32_t uVar6;
    int64_t iVar7;
    
    do {
        iVar7 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            iVar7 = iVar7 + 1;
            cVar1 = *(iVar7 + arg3);
        }
        (**(*0x1e908 + 0x160))();
        uVar6 = 0;
        if (arg2 != NULL) {
            pcVar4 = NULL;
            do {
                piVar5 = pcVar4 + arg1;
                if (*piVar5 == 0x5f5f5f5f) goto code_r0x0001d3cf;
                uVar6 = uVar6 + 1;
                pcVar4 = uVar6;
            } while (pcVar4 < arg2);
        }
        piVar5 = NULL;
code_r0x0001d3cf:
        if (piVar5 == NULL) {
            return 0x800000000000000e;
        }
        piVar3 = piVar5;
        if ((*(piVar5 + -1) + 0xa4U & 0xfd) == 0) {
            piVar3 = piVar5 + -1;
        }
        if (*(piVar3 + -1) == '\b') {
            uVar2 = *(piVar5 + 1);
            if (uVar2 < 2) {
                if (1 < arg4) {
                    return 0x8000000000000002;
                }
                *(piVar5 + 1) = arg4;
            }
            else if (uVar2 == 10) {
                *(piVar5 + 5) = arg4;
            }
            else if (uVar2 == 0xb) {
                *(piVar5 + 5) = arg4;
            }
            else if (uVar2 == 0xc) {
                *(piVar5 + 5) = arg4;
            }
            else {
                if (uVar2 != 0xe) {
                    return 0x8000000000000002;
                }
                *(piVar5 + 5) = arg4;
            }
            return 0;
        }
        arg2 = arg1 + arg2 + (4 - piVar5);
        arg1 = piVar5 + 1;
    } while( true );
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00012640 @ 0x12640 */

//WARNING: Variable defined which should be unmapped: var_25h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

ulong fcn.00012640(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int64_t iVar4;
    int16_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    uchar *arg1_00;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int *piStackX_18;
    uint *puStackX_20;
    int64_t var_77h;
    int64_t var_7fh;
    uchar auStack_b8 [32];
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    ulong uStack_84;
    int64_t var_59h;
    int64_t var_39h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int64_t var_25h;
    
    iVar7 = 0;
    piStackX_18 = NULL;
    puStackX_20 = NULL;
    if ((*0x1e8f0 == 0) && (iVar4 = (**(*0x1e908 + 0x140))(0x1e1b0,0,0x1e8f0), iVar4 < 0)) {
        return 0x800000000000000e;
    }
    piVar5 = 0x1e554;
    do {
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + 1;
    } while (*piVar5 != 0);
    uVar11 = arg1 + 0x20 + iVar7 * 2;
    iVar4 = (**(*0x1e908 + 0x40))(4,uVar11 + 0x12,&piStackX_18);
    if ((-1 < iVar4) && (piStackX_18 != NULL)) {
        if (*0x1e8b5 == '\0') {
            iVar4 = 5;
            iVar9 = 0x1e940;
            do {
                (**(*0x1e908 + 0x168))(iVar9,0x14);
                iVar9 = iVar9 + 0x14;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            (**(*0x1e908 + 0x168))(0x1e9d8,0x14,0);
            *0x1e8b5 = '\x01';
        }
        uVar8 = 0;
        *piStackX_18 = uVar11 + 0x12;
        piStackX_18[1] = 0xe;
        *(piStackX_18 + 2) = 1;
        *(piStackX_18 + 10) = 7;
        *(piStackX_18 + 0xe) = 0x800000e0;
        iVar4 = (**(*0x1e908 + 0x40))(4,uVar11,&puStackX_20);
        uVar3 = *0x1e18c;
        uVar2 = *0x1e188;
        uVar1 = *0x1e184;
        if ((puStackX_20 != NULL) && (-1 < iVar4)) {
            *puStackX_20 = *0x1e180;
            puStackX_20[1] = uVar1;
            puStackX_20[2] = uVar2;
            puStackX_20[3] = uVar3;
            *(puStackX_20 + 4) = iVar7;
            *(puStackX_20 + 6) = arg1;
            (**(*0x1e908 + 0x160))(puStackX_20 + 8,0x1e554,iVar7 * 2);
            (**(*0x1e908 + 0x160))(puStackX_20 + iVar7 * 2 + 0x20,arg2,arg1);
            uStack_84 = 0;
            uStack_98 = 0x67452301;
            uStack_94 = 0xefcdab89;
            uStack_90 = 0x98badcfe;
            uStack_8c = 0x10325476;
            uStack_88 = 0xc3d2e1f0;
            fcn.000168f8(&uStack_98,puStackX_20,uVar11);
            fcn.000169d8(auStack_b8,&uStack_98);
            arg1_00 = 0x1e940;
            uVar10 = uVar8;
            do {
                if ((arg1_00 == auStack_b8) || (iVar7 = fcn.000102e0(arg1_00,auStack_b8,0x14), iVar7 == 0)) {
                    (**(*0x1e908 + 0x48))(piStackX_18);
                    (**(*0x1e908 + 0x48))(puStackX_20);
                    return 0;
                }
                if ((arg1_00 == 0x1e9d8) || (iVar7 = fcn.000102e0(arg1_00,0x1e9d8,0x14), iVar7 == 0)) break;
                uVar10 = uVar10 + 1;
                uVar8 = uVar8 + 0x14;
                arg1_00 = arg1_00 + 0x14;
            } while (uVar8 < 100);
            if (uVar10 < 5) {
                (**(*0x1e908 + 0x160))(uVar10 * 0x14 + 0x1e940,auStack_b8,0x14);
            }
            (**(*0x1e908 + 0x160))(piStackX_18 + 0x12,puStackX_20,uVar11);
            uVar6 = (**(*0x1e8f0 + 0x10))(*0x1e8f0,0,puStackX_20,uVar11,piStackX_18);
            fcn.0001ddc4(1,0x3058a16);
            if (puStackX_20 != NULL) {
                (**(*0x1e908 + 0x48))();
            }
            if (piStackX_18 != NULL) {
                (**(*0x1e908 + 0x48))();
            }
            return uVar6;
        }
        (**(*0x1e908 + 0x48))(piStackX_18);
    }
    return 0x8000000000000009;
}


/* fcn.0001c41c @ 0x1c41c */

ulong fcn.0001c41c(int64_t arg1)

{
    *(arg1 + 0x48) = 0;
    *arg1 = 0;
    *(arg1 + 8) = 0x6a09e667f3bcc908;
    *(arg1 + 0x10) = 0xbb67ae8584caa73b;
    *(arg1 + 0x18) = 0x3c6ef372fe94f82b;
    *(arg1 + 0x20) = 0xa54ff53a5f1d36f1;
    *(arg1 + 0x28) = 0x510e527fade682d1;
    *(arg1 + 0x30) = 0x9b05688c2b3e6c1f;
    *(arg1 + 0x38) = 0x1f83d9abfb41bd6b;
    *(arg1 + 0x40) = 0x5be0cd19137e2179;
    return 0;
}


/* fcn.0001c57c @ 0x1c57c */

ulong fcn.0001c57c(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uchar *puVar3;
    int64_t iVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 == 0) || (0x7f < *(arg1_00 + 9))) {
        uVar2 = 0xffffffff;
    }
    else {
        *arg1_00 = *arg1_00 + *(arg1_00 + 9) * 8;
        *(*(arg1_00 + 9) + 0x4c + arg1_00) = 0x80;
        *(arg1_00 + 9) = arg1_00[9] + 1;
        uVar1 = *(arg1_00 + 9);
        if (0x70 < uVar1) {
            while (uVar1 < 0x80) {
                *(uVar1 + 0x4c + arg1_00) = 0;
                *(arg1_00 + 9) = arg1_00[9] + 1;
                uVar1 = *(arg1_00 + 9);
            }
            fcn.0001bec4(arg1_00,arg1_00 + 0x4c);
            *(arg1_00 + 9) = 0;
        }
        while (*(arg1_00 + 9) < 0x78) {
            *(*(arg1_00 + 9) + 0x4c + arg1_00) = 0;
            *(arg1_00 + 9) = arg1_00[9] + 1;
        }
        *(arg1_00 + 0xc4) = *(arg1_00 + 7);
        *(arg1_00 + 0xc5) = *(arg1_00 + 6);
        *(arg1_00 + 0xc6) = *(arg1_00 + 5);
        *(arg1_00 + 199) = *(arg1_00 + 4);
        *(arg1_00 + 0x19) = *(arg1_00 + 3);
        *(arg1_00 + 0xc9) = *(arg1_00 + 2);
        *(arg1_00 + 0xca) = *(arg1_00 + 1);
        *(arg1_00 + 0xcb) = *arg1_00;
        fcn.0001bec4(arg1_00,arg1_00 + 0x4c);
        puVar3 = arg1_00 + 0xe;
        arg2 = arg2 - arg1_00;
        iVar4 = 8;
        do {
            puVar3[arg2 + -0xe] = puVar3[1];
            puVar3[arg2 + -0xd] = *puVar3;
            puVar3[arg2 + -0xc] = puVar3[-1];
            puVar3[arg2 + -0xb] = puVar3[-2];
            puVar3[arg2 + -10] = puVar3[-3];
            puVar3[arg2 + -9] = puVar3[-4];
            puVar3[arg2 + -8] = puVar3[-5];
            puVar3[arg2 + -7] = puVar3[-6];
            puVar3 = puVar3 + 8;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000153ec @ 0x153ec */

ulong fcn.000153ec(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1e908 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001545c @ 0x1545c */

char * fcn.0001545c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001559c(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000154ac @ 0x154ac */

int64_t fcn.000154ac(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1e5cc;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.0001559c(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.0001559c(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.0001545c(arg1);
        iVar4 = fcn.0001545c(arg2);
        iVar2 = fcn.000153ec();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.0001545c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001541c(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.00012ae4 @ 0x12ae4 */

ulong fcn.00012ae4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint64_t arg3_00;
    uint64_t uVar3;
    int64_t iVar4;
    bool bVar5;
    uint64_t uStackX_10;
    uint64_t *in_stack_00000028;
    uint32_t *puStack_328;
    uint64_t uStack_320;
    uint uStack_318;
    uint uStack_314;
    uint uStack_310;
    uint uStack_30c;
    uint uStack_308;
    ulong uStack_304;
    ulong uStack_2b8;
    uint uStack_2b0;
    uint uStack_2ac;
    uint uStack_2a8;
    uint uStack_2a4;
    uint uStack_2a0;
    uint uStack_29c;
    uint uStack_298;
    ulong uStack_294;
    uchar auStack_248 [112];
    uchar auStack_1d8 [208];
    uchar auStack_108 [208];
    
    uStackX_10 = 0;
    if (arg2 == 1) {
        uStack_318 = 0x67452301;
        uStack_314 = 0xefcdab89;
        uStack_310 = 0x98badcfe;
        uStack_30c = 0x10325476;
        uStack_308 = 0xc3d2e1f0;
        uStack_304 = 0;
    }
    if (arg2 == 2) {
        bVar5 = (arg3 & 1U) != 0;
        if (bVar5) {
            uStack_318 = 0x67452301;
            uStack_314 = 0xefcdab89;
            uStack_310 = 0x98badcfe;
            uStack_30c = 0x10325476;
            uStack_308 = 0xc3d2e1f0;
            uStack_304 = 0;
        }
        uStackX_10 = bVar5;
        if ((arg3 & 2U) != 0) {
            uStackX_10 = bVar5 + 1;
            uStack_294 = 0x5be0cd19;
            uStack_2b8 = 0;
            uStack_2b0 = 0x6a09e667;
            uStack_2ac = 0xbb67ae85;
            uStack_2a8 = 0x3c6ef372;
            uStack_2a4 = 0xa54ff53a;
            uStack_2a0 = 0x510e527f;
            uStack_29c = 0x9b05688c;
            uStack_298 = 0x1f83d9ab;
        }
        if ((arg3 & 4U) != 0) {
            fcn.00019318(auStack_1d8);
            uStackX_10 = uStackX_10 + 1;
        }
        if ((arg3 & 8U) != 0) {
            fcn.0001c41c(auStack_108);
            uStackX_10 = uStackX_10 + 1;
        }
        if ((arg3 & 0x10U) != 0) {
            fcn.000193e0(auStack_248);
            uStackX_10 = uStackX_10 + 1;
        }
    }
    iVar4 = *arg1;
    iVar1 = *(iVar4 + 4) + 1;
    arg3_00 = iVar1 * 0x28;
    if (arg2 == 1) {
        fcn.000168f8(&uStack_318,iVar4,arg3_00);
    }
    if (arg2 == 2) {
        if ((arg3 & 1U) != 0) {
            fcn.000168f8(&uStack_318,iVar4,arg3_00);
        }
        if (((arg3 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
            fcn.000190ac(&uStack_2b8,iVar4,arg3_00);
        }
        if ((arg3 & 4U) != 0) {
            fcn.0001c498(auStack_1d8,iVar4,arg3_00);
        }
        if ((arg3 & 8U) != 0) {
            fcn.0001c498(auStack_108,iVar4,arg3_00);
        }
        if (((arg3 & 0x10U) != 0) && (arg3_00 != 0)) {
            fcn.0001bb78(auStack_248,iVar4,arg3_00);
        }
    }
    uStack_320 = *(iVar4 + 4);
    uVar3 = (*(iVar4 + 0x3c) - *(iVar4 + 6)) + iVar1 * -0x28 + 0x28;
    if (uVar3 != 0) {
        iVar1 = iVar4 + (uStack_320 + 1) * 0x28;
        if (arg2 == 1) {
            fcn.000168f8(&uStack_318,iVar1,uVar3 & 0xffffffff);
        }
        if (arg2 == 2) {
            if ((arg3 & 1U) != 0) {
                fcn.000168f8(&uStack_318,iVar1,uVar3 & 0xffffffff);
            }
            if (((arg3 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
                fcn.000190ac(&uStack_2b8,iVar1,uVar3 & 0xffffffff);
            }
            if ((arg3 & 4U) != 0) {
                fcn.0001c498(auStack_1d8,iVar1,uVar3 & 0xffffffff);
            }
            if ((arg3 & 8U) != 0) {
                fcn.0001c498(auStack_108,iVar1,uVar3 & 0xffffffff);
            }
            if ((arg3 & 0x10U) != 0) {
                fcn.0001bb78(auStack_248,iVar1,uVar3);
            }
        }
        arg3_00 = arg3_00 + uVar3;
    }
    if (uStack_320 != 0) {
        puVar2 = iVar4 + 0x38;
        puStack_328 = puVar2;
        do {
            if (*puVar2 != 0) {
                uVar3 = *puVar2;
                iVar1 = *arg1 + 0x28 + (puVar2[1] - *(iVar4 + 6));
                if (arg2 == 1) {
                    fcn.000168f8(&uStack_318,iVar1,uVar3);
                    puVar2 = puStack_328;
                }
                if (arg2 == 2) {
                    if ((arg3 & 1U) != 0) {
                        fcn.000168f8(&uStack_318,iVar1,uVar3);
                    }
                    if (((arg3 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
                        fcn.000190ac(&uStack_2b8,iVar1,uVar3);
                    }
                    if ((arg3 & 4U) != 0) {
                        fcn.0001c498(auStack_1d8,iVar1,uVar3);
                    }
                    if ((arg3 & 8U) != 0) {
                        fcn.0001c498(auStack_108,iVar1,uVar3);
                    }
                    if (((arg3 & 0x10U) != 0) && (uVar3 != 0)) {
                        fcn.0001bb78(auStack_248,iVar1,uVar3);
                    }
                    puVar2 = puStack_328;
                }
                puVar2 = puVar2 + 10;
                arg3_00 = arg3_00 + uVar3;
                puStack_328 = puVar2;
            }
            uStack_320 = uStack_320 - 1;
        } while (uStack_320 != 0);
    }
    if (arg3_00 < *(arg1 + 8)) {
        uVar3 = *(arg1 + 8) - arg3_00;
        iVar4 = *arg1 + arg3_00;
        if (arg2 == 1) {
            fcn.000168f8(&uStack_318,iVar4,uVar3 & 0xffffffff);
        }
        if (arg2 != 2) goto code_r0x00012f38;
        if ((arg3 & 1U) != 0) {
            fcn.000168f8(&uStack_318,iVar4,uVar3 & 0xffffffff);
        }
        if (((arg3 & 2U) != 0) && (uStack_294._4_4_ < 0x41)) {
            fcn.000190ac(&uStack_2b8,iVar4,uVar3 & 0xffffffff);
        }
        if ((arg3 & 4U) != 0) {
            fcn.0001c498(auStack_1d8,iVar4,uVar3 & 0xffffffff);
        }
        if ((arg3 & 8U) != 0) {
            fcn.0001c498(auStack_108,iVar4,uVar3 & 0xffffffff);
        }
        if (((arg3 & 0x10U) != 0) && (uVar3 != 0)) {
            fcn.0001bb78(auStack_248,iVar4,uVar3);
            goto code_r0x00012f38;
        }
    }
    else {
code_r0x00012f38:
        if (arg2 == 1) {
            fcn.000169d8(arg4,&uStack_318);
        }
        if (arg2 != 2) goto code_r0x00012fc2;
    }
    if ((arg3 & 1U) != 0) {
        fcn.000169d8(arg4,&uStack_318);
    }
    if (((arg3 & 2U) != 0) && (uStack_294._4_4_ < 0x40)) {
        fcn.0001919c(&uStack_2b8,arg4 + 0x14);
    }
    if ((arg3 & 4U) != 0) {
        fcn.00019394(auStack_1d8,arg4 + 0x34);
    }
    if ((arg3 & 8U) != 0) {
        fcn.0001c57c(auStack_108,arg4 + 100);
    }
    if ((arg3 & 0x10U) != 0) {
        fcn.0001bc90(arg4 + 0xa4,auStack_248);
    }
code_r0x00012fc2:
    *in_stack_00000028 = uStackX_10;
    return 0;
}


/* fcn.000129bc @ 0x129bc */

int64_t fcn.000129bc(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    ulong uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    iStackX_8 = 0;
    uStackX_10 = 0;
    iVar1 = (**(*0x1e910 + 0x48))(0x1e554,0x1e180,0,&uStackX_10,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        var_20h = 0;
        iVar2 = fcn.000155f8(0x1e130,&var_20h);
        iVar1 = var_20h;
        if ((var_20h != 0) && (-1 < iVar2)) {
            if (*(var_20h + 4) == 0) {
                return -0x7ffffffffffffffa;
            }
            iVar2 = (**(*0x1e908 + 0x40))(4,uStackX_10,&iStackX_8);
            if ((iStackX_8 == 0) || (iVar2 < 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = (**(*0x1e910 + 0x48))(0x1e554,0x1e180,0,&uStackX_10,iStackX_8);
            if (-1 < iVar2) {
                fcn.00012640(*(iVar1 + 4),*iVar1 + iStackX_8);
                if (iStackX_8 != 0) {
                    (**(*0x1e908 + 0x48))();
                }
                return iVar2;
            }
            (**(*0x1e908 + 0x48))(iStackX_8);
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0001df50 @ 0x1df50 */

ulong fcn.0001df50(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    ushort **in_R8;
    ushort *puStackX_20;
    ushort *in_stack_00000030;
    ushort **in_stack_00000038;
    ushort auStack_218 [264];
    
    if (in_stack_00000038 < 0x1ed) {
        puStackX_20 = auStack_218;
code_r0x0001e010:
        *puStackX_20 = 0x14;
        puStackX_20[1] = in_stack_00000038;
        *(puStackX_20 + 2) = *0x1e250;
        *(puStackX_20 + 6) = *0x1e258;
        if (((in_stack_00000030 != NULL) && (in_stack_00000038 != NULL)) && (puStackX_20 + 10 != in_stack_00000030)) {
            section..text(puStackX_20 + 10,in_stack_00000030,in_stack_00000038);
            in_R8 = in_stack_00000038;
        }
        uVar2 = fcn.0001dea0(1,0x3058a18,in_R8,0x1e320);
        if (puStackX_20 != auStack_218) {
            (**(*0x1e908 + 0x48))();
        }
    }
    else {
        if (((*0x1e908 == 0) || (*(*0x1e908 + 0x40) == 0)) || (*(*0x1e908 + 0x48) == 0)) {
            return 0x8000000000000003;
        }
        puStackX_20 = arg1;
        uVar1 = (**(*0x1e908 + 0x18))(0x1f);
        (**(*0x1e908 + 0x20))(uVar1);
        if (uVar1 < 0x11) {
            puStackX_20 = NULL;
            in_R8 = &puStackX_20;
            (**(*0x1e908 + 0x40))(4,in_stack_00000038 + 0x14);
            if (puStackX_20 != NULL) goto code_r0x0001e010;
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.0001dea0 @ 0x1dea0 */

ulong fcn.0001dea0(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x1e938 != NULL) {
code_r0x0001df18:
            uVar2 = (***0x1e938)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,arg3,in_stack_00000028);
            return uVar2;
        }
        if ((*0x1e908 != 0) && (*(*0x1e908 + 0x140) != NULL)) {
            iVar1 = (**(*0x1e908 + 0x140))(0x1e120,0,0x1e938);
            if (iVar1 < 0) {
                *0x1e938 = NULL;
            }
            if (*0x1e938 != NULL) goto code_r0x0001df18;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00014680 @ 0x14680 */

int64_t fcn.00014680(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x1e910 + 0x58))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffe)) {
        iVar1 = (**(*0x1e910 + 0x58))(arg1,arg2,0,0,0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1e910 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
        }
    }
    else if (iVar1 == -0x7ffffffffffffff2) {
        (**(*0x1e910 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
    }
    return iVar1;
}


/* fcn.00010908 @ 0x10908 */

void fcn.00010908(void)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint auStackX_8 [2];
    int64_t var_390h;
    int64_t var_7b0h;
    uint32_t uStack_878;
    uint32_t uStack_874;
    uint uStack_870;
    uint uStack_86c;
    uint uStack_868;
    ushort uStack_860;
    uint uStack_85e;
    uint uStack_85a;
    uint uStack_856;
    uint uStack_852;
    uint uStack_84e;
    uchar *puStack_848;
    ulong uStack_840;
    ushort *puStack_838;
    ulong uStack_830;
    uchar auStack_828 [11];
    uchar auStack_81d [1029];
    uchar auStack_418 [4];
    uchar auStack_414 [7];
    uchar auStack_40d [901];
    int64_t var_80h;
    int64_t var_75h;
    
    uVar7 = 0;
    uStack_85a = 0x7a010000;
    uStack_852 = 0;
    uStack_860 = 0x180;
    uStack_856 = 0x5000000;
    uStack_84e = 0x7f000000;
    uStack_85e = 0x16000000;
    if (*(*0x1e8e8 + 1) == '\x01') {
        fcn.0001c89c();
        puStack_838 = &uStack_860;
        uStack_830 = 0x16;
        puStack_848 = auStack_828;
        uStack_840 = 0x40b;
        iVar3 = fcn.0001cc24(1,&puStack_838,&puStack_848,1);
        if (iVar3 < 0) {
            fcn.0001ddc4(0x80000002,0x3058a19);
        }
        fcn.0001c914();
code_r0x000109fe:
        if (-1 < iVar3) goto code_r0x00010a07;
    }
    else {
        auStackX_8[0] = 0x40b;
        iVar3 = fcn.0001d17c(&uStack_860,0x16,auStack_828,auStackX_8);
        if (iVar3 < 0) {
            fcn.0001ddc4(0x80000002,0x3058a19);
            goto code_r0x000109fe;
        }
code_r0x00010a07:
        if (CONCAT22(auStack_828._6_4_ << 8 | auStack_828._6_4_ >> 8,
                     SUB42(auStack_828._6_4_,2) << 8 | SUB42(auStack_828._6_4_,2) >> 8) == 0) {
            auStack_414._0_4_ = auStack_414._2_4_;
            (**(*0x1e908 + 0x160))(auStack_418,auStack_81d);
            uVar6 = CONCAT22(auStack_414._0_4_ << 8 | auStack_414._0_4_ >> 8,
                             SUB42(auStack_414._0_4_,2) << 8 | SUB42(auStack_414._0_4_,2) >> 8);
            uStack_874 = *0x1e890;
            if (uVar6 != 0) {
                puVar5 = auStack_40d;
                do {
                    uVar2 = *(puVar5 + -3) << 8 | *(puVar5 + -3) >> 8;
                    if (uVar2 == 4) {
                        iVar3 = fcn.00015350();
                        cVar1 = (**(iVar3 + 0x30))(10);
                        if (cVar1 != '\0') {
                            uVar7 = uVar7 | 1;
                        }
                        uVar4 = 0;
                        if (puVar5[-1] != 0) {
                            do {
                                if (puVar5[uVar4] != '\0') {
                                    *0x1e890 = *0x1e890 | 1;
                                    goto code_r0x00010b4f;
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < puVar5[-1]);
                        }
                        uStack_874 = *0x1e890;
                    }
                    else if (uVar2 == 0xb) {
                        uVar7 = uVar7 | 2;
                        uVar4 = 0;
                        if (puVar5[-1] != 0) {
                            do {
                                if (puVar5[uVar4] != '\0') {
                                    *0x1e890 = uStack_874 | 2;
                                    goto code_r0x00010b4f;
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < puVar5[-1]);
                        }
                    }
                    else if (uVar2 == 0xc) {
                        uVar7 = uVar7 | 4;
                        uVar4 = 0;
                        if (puVar5[-1] != 0) {
                            do {
                                if (puVar5[uVar4] != '\0') {
                                    *0x1e890 = uStack_874 | 4;
                                    goto code_r0x00010b4f;
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < puVar5[-1]);
                        }
                    }
                    else if (uVar2 == 0xd) {
                        uVar7 = uVar7 | 8;
                        uVar4 = 0;
                        if (puVar5[-1] != 0) {
code_r0x00010af3:
                            if (puVar5[uVar4] == '\0') goto code_r0x00010af9;
                            *0x1e890 = uStack_874 | 8;
code_r0x00010b4f:
                            uStack_874 = *0x1e890;
                        }
                    }
                    else if (uVar2 == 0x12) {
                        uVar4 = 0;
                        if (puVar5[-1] != 0) {
                            do {
                                if (puVar5[uVar4] != '\0') {
                                    *0x1e890 = uStack_874 | 0x10;
                                    uStack_874 = *0x1e890;
                                    break;
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < puVar5[-1]);
                        }
                        uVar7 = uVar7 | 0x10;
                    }
code_r0x00010b8a:
                    puVar5 = puVar5 + 6;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            *0x1e8b0 = 0;
            uVar6 = 0;
            do {
                if ((uVar7 & 1 << (uVar6 & 0x1f)) != 0) {
                    *0x1e8b0 = *0x1e8b0 + 1;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x10);
            uStack_86c = *0x1e8f8;
            uStack_868 = *0x1e898;
            *0x1e8ac = uVar7;
            uStack_878 = uVar7;
            goto code_r0x00010c04;
        }
    }
    uStack_878 = 1;
    uStack_874 = 1;
code_r0x00010c04:
    uStack_870 = 0;
    (**(*0x1e910 + 0x58))(L"PCRBitmap",0x1e2b0,3,0x14,&uStack_878);
    return;
code_r0x00010af9:
    uVar4 = uVar4 + 1;
    if (puVar5[-1] <= uVar4) goto code_r0x00010b8a;
    goto code_r0x00010af3;
}


/* fcn.000147f8 @ 0x147f8 */

int64_t fcn.000147f8(int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    int64_t iStackX_8;
    
    iStackX_8 = arg1;
    iVar1 = (**(*0x1e908 + 0x28))(0,10,0x10,0x1e9c0);
    if (-1 < iVar1) {
        iVar1 = (**(*0x1e908 + 0x28))(0,10,0x10,0x1e9d0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1e908 + 0x28))(0,10,0x10,0x1e9f8);
            if (-1 < iVar1) {
                (**(*0x1e908 + 0x168))(*0x1e9f8,0x10000,0);
                **0x1e9f8 = 1;
                (*0x1e9f8)[1] = 0;
                (**(*0x1e908 + 0xc0))(0x1e140,*0x1e9f8);
                (**(*0x1e908 + 0x168))(*0x1e9c0,0x10000,0);
                (**(*0x1e908 + 0x168))(*0x1e9d0,0x10000,0);
                puVar2 = fcn.0001c6e4(*(*0x1e900 + 0x68),*(*0x1e900 + 0x70),0x1e210);
                iVar1 = *0x1e908;
                if (puVar2 == NULL) {
                    iVar1 = -0x7ffffffffffffff2;
                }
                else {
                    *puVar2 = 0x10000;
                    (**(iVar1 + 0x160))(*0x1e9c0,puVar2,0x28);
                    (**(*0x1e908 + 0x160))(*0x1e9c0,puVar2 + 10,puVar2[1]);
                    *0x1e8a0 = puVar2[1] + *0x1e9c0;
                    iVar1 = (**(*0x1e908 + 0x148))
                                      (&iStackX_8,0x1e1b0,0x1e390,0x1e110,0x1e340,0x1e170,0x1e358,0x1e0f0,
                                       0x1e378,0);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00010d04 @ 0x10d04 */

int64_t fcn.00010d04(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    bool bVar9;
    int iStack_1b8;
    ushort uStack_1b4;
    uchar uStack_1b2;
    ushort uStack_1b1;
    uchar auStack_1af [31];
    int64_t iStack_190;
    ushort uStack_188;
    uint uStack_186;
    uint uStack_182;
    uint uStack_17e;
    uint uStack_17a;
    uint uStack_176;
    ushort uStack_172;
    uchar uStack_170;
    ushort uStack_16f;
    uchar auStack_16d [4];
    uchar auStack_169 [161];
    uchar auStack_c8 [14];
    char cStack_ba;
    
    iStack_190 = 0;
    iVar2 = (**(*0x1e908 + 0x140))(0x1e1b0,0,&iStack_190);
    if (-1 < iVar2) {
        (**(*0x1e908 + 0x168))(&uStack_188,0xbd,0);
        (**(*0x1e908 + 0x168))(auStack_c8,0x9c,0);
        uStack_186 = 0xbd000000;
        uStack_188 = 0x280;
        uStack_182 = 0x2b010000;
        uStack_17e = 0xc000040;
        uStack_176 = 0x9000040;
        iVar5 = (auStack_16d - &uStack_17a) + -4;
        uStack_172 = 0;
        uStack_170 = 0;
        uVar1 = iVar5 >> 0x10;
        uVar4 = iVar5;
        uVar3 = arg1 & arg3;
        uStack_17a = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
        uStack_16f = 0;
        bVar9 = (uVar3 & 1) != 0;
        if (bVar9) {
            uStack_1b1 = 0xffff;
            uStack_1b4 = 0x400;
            auStack_1af[0] = 0xff;
            uStack_1b2 = 3;
        }
        uVar8 = bVar9;
        uVar7 = uVar8;
        if ((uVar3 & 2) != 0) {
            (&uStack_1b4)[uVar8 * 3] = 0xb00;
            *(auStack_1af + uVar8 * 6 + -2) = 0xffff;
            auStack_1af[uVar8 * 6] = 0xff;
            uVar7 = bVar9 + 1;
            (&uStack_1b2)[uVar8 * 6] = 3;
        }
        uVar8 = uVar7;
        if (((uVar3 & 4) != 0) && (uVar7 < 5)) {
            (&uStack_1b4)[uVar7 * 3] = 0xc00;
            *(auStack_1af + uVar7 * 6 + -2) = 0xffff;
            auStack_1af[uVar7 * 6] = 0xff;
            uVar8 = uVar7 + 1;
            (&uStack_1b2)[uVar7 * 6] = 3;
        }
        uVar7 = uVar8;
        if (((uVar3 & 8) != 0) && (uVar8 < 5)) {
            (&uStack_1b4)[uVar8 * 3] = 0xd00;
            *(auStack_1af + uVar8 * 6 + -2) = 0xffff;
            auStack_1af[uVar8 * 6] = 0xff;
            uVar7 = uVar8 + 1;
            (&uStack_1b2)[uVar8 * 6] = 3;
        }
        uVar8 = uVar7;
        if (((uVar3 & 0x10) != 0) && (uVar7 < 5)) {
            (&uStack_1b4)[uVar7 * 3] = 0x1200;
            *(auStack_1af + uVar7 * 6 + -2) = 0xffff;
            auStack_1af[uVar7 * 6] = 0xff;
            uVar8 = uVar7 + 1;
            (&uStack_1b2)[uVar7 * 6] = 3;
        }
        uVar7 = uVar8;
        if ((((arg2 & 1U) != 0) && ((arg1 & 1U) == 0)) && (uVar8 < 5)) {
            uVar7 = uVar8 + 1;
            (&uStack_1b4)[uVar8 * 3] = 0x400;
            *(auStack_1af + uVar8 * 6 + -2) = 0;
            auStack_1af[uVar8 * 6] = 0;
            (&uStack_1b2)[uVar8 * 6] = 3;
        }
        uVar8 = uVar7;
        if ((((arg2 & 2U) != 0) && ((arg1 & 2U) == 0)) && (uVar7 < 5)) {
            uVar8 = uVar7 + 1;
            (&uStack_1b4)[uVar7 * 3] = 0xb00;
            *(auStack_1af + uVar7 * 6 + -2) = 0;
            auStack_1af[uVar7 * 6] = 0;
            (&uStack_1b2)[uVar7 * 6] = 3;
        }
        uVar7 = uVar8;
        if ((((arg2 & 4U) != 0) && ((arg1 & 4U) == 0)) && (uVar8 < 5)) {
            uVar7 = uVar8 + 1;
            (&uStack_1b4)[uVar8 * 3] = 0xc00;
            *(auStack_1af + uVar8 * 6 + -2) = 0;
            auStack_1af[uVar8 * 6] = 0;
            (&uStack_1b2)[uVar8 * 6] = 3;
        }
        uVar8 = uVar7;
        if ((((arg2 & 8U) != 0) && ((arg1 & 8U) == 0)) && (uVar7 < 5)) {
            uVar8 = uVar7 + 1;
            (&uStack_1b4)[uVar7 * 3] = 0xd00;
            *(auStack_1af + uVar7 * 6 + -2) = 0;
            auStack_1af[uVar7 * 6] = 0;
            (&uStack_1b2)[uVar7 * 6] = 3;
        }
        uVar3 = uVar8;
        if ((((arg2 & 0x10U) != 0) && ((arg1 & 0x10U) == 0)) && (uVar3 < 5)) {
            uVar3 = uVar3 + 1;
            (&uStack_1b4)[uVar8 * 3] = 0x1200;
            *(auStack_1af + uVar8 * 6 + -2) = 0;
            auStack_1af[uVar8 * 6] = 0;
            (&uStack_1b2)[uVar8 * 6] = 3;
        }
        iStack_1b8 = uVar3 << 0x18;
        section..text(auStack_16d,&iStack_1b8,4);
        if (uVar3 * 6 != 0) {
            section..text(auStack_169,&uStack_1b4,uVar3 * 6);
        }
        uVar6 = (uVar3 * 6 - &uStack_188) + auStack_169;
        uVar1 = uVar6 >> 0x10;
        uStack_186 = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar1 << 8 | uVar1 >> 8);
        iVar2 = fcn.000122c0(iStack_190,uVar6,&uStack_188,0x9c);
        if (((iVar2 < 0) ||
            (iVar5 = CONCAT22(auStack_c8._6_4_ << 8 | auStack_c8._6_4_ >> 8,
                              SUB42(auStack_c8._6_4_,2) << 8 | SUB42(auStack_c8._6_4_,2) >> 8), *arg4 = iVar5,
            iVar5 != 0)) ||
           ((CONCAT22(auStack_c8._2_4_ << 8 | auStack_c8._2_4_ >> 8,
                      SUB42(auStack_c8._2_4_,2) << 8 | SUB42(auStack_c8._2_4_,2) >> 8) < 0xc || (cStack_ba != '\x01'))
           )) {
            if ((arg1 & 1U) != 0) {
                fcn.0001ddc4(0x80000002,0x3058a05);
            }
            if ((arg1 & 2U) != 0) {
                fcn.0001ddc4(0x80000002,0x3058a06);
            }
            if ((arg1 & 4U) != 0) {
                fcn.0001ddc4(0x80000002,0x3058a07);
            }
            if ((arg1 & 8U) != 0) {
                fcn.0001ddc4(0x80000002,0x3058a08);
            }
            if ((arg1 & 0x10U) != 0) {
                fcn.0001ddc4(0x80000002,0x3058a09);
            }
            iVar2 = -0x7ffffffffffffff9;
        }
        else {
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.000123ac @ 0x123ac */

void fcn.000123ac(int64_t arg1,int64_t arg2)

{
    int *arg1_00;
    int *piVar1;
    int *piVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t arg4;
    uint auStackX_18 [2];
    ulong uStackX_20;
    int32_t var_c50h;
    int32_t var_c58h;
    int8_t var_c5ch;
    ulong uStack_d08;
    ulong uStack_d00;
    ulong uStack_cf8;
    int *piStack_cf0;
    ulong auStack_ce8 [2];
    uchar auStack_cd8 [47];
    uint8_t uStack_ca9;
    int8_t var_71h;
    
    piStack_cf0 = NULL;
    auStackX_18[0] = 0;
    uStackX_20._0_4_ = str.TCMF._0_4_;
    uStackX_20._4_1_ = str.TCMF[4];
    uStack_d08._0_4_ = str.TTDP._0_4_;
    uStack_d08._4_1_ = str.TTDP[4];
    uStack_cf8._0_4_ = str.PPIV._0_4_;
    uStack_cf8._4_1_ = str.PPIV[4];
    uStack_d00._0_4_ = str.TTPF._0_4_;
    uStack_d00._4_1_ = str.TTPF[4];
    auStack_ce8[0] = 0xca9;
    iVar4 = fcn.0001d1f8(&piStack_cf0,arg2);
    piVar1 = piStack_cf0;
    if (iVar4 < 0) {
        if (((iVar4 == -0x5ffffffffffffffe) && (*0x1e89d == '\0')) &&
           (iVar4 = (**(*0x1e908 + 0x170))(0x200,8,fcn.000123ac,0,0x1e230,0x1ea10), -1 < iVar4)) {
            *0x1e89d = '\x01';
        }
    }
    else {
        uVar5 = 0;
        do {
            arg4 = 1;
            if ((*(uVar5 + 0x1e458) == *0xfed40f00) && (*(uVar5 + 0x1e45a) == *0xfed40f02)) {
                if (*piStack_cf0 != 0x54445344) {
                    return;
                }
                iVar4 = fcn.0001d35c(piStack_cf0 + 9,piStack_cf0[1] - 0x25,&uStackX_20,1);
                if (iVar4 < 0) {
                    return;
                }
                break;
            }
            uVar5 = uVar5 + 4;
        } while (uVar5 < 0xc);
        cVar3 = fcn.0001070c();
        if (*piVar1 == 0x54445344) {
            arg1_00 = piVar1 + 9;
            iVar4 = fcn.0001d35c(arg1_00,piVar1[1] - 0x25,&uStack_d08,cVar3 != '\0');
            piVar2 = piStack_cf0;
            if (-1 < iVar4) {
                if (((0xfffffffd < *0xfed40030 - 1U) || (0xfffffffd < *0xfed40030 - 1U)) ||
                   (uVar6 = 1, (*0xfed40030 & 0xf) != 1)) {
                    uVar6 = 0;
                }
                if (*piStack_cf0 == 0x54445344) {
                    fcn.0001d35c(arg1_00,piVar1[1] - 0x25,&uStack_d00,uVar6 ^ 1);
                }
                iVar4 = (**(*0x1e910 + 0x48))(L"Setup",0x1e220,auStackX_18,auStack_ce8,auStack_cd8);
                if (-1 < iVar4) {
                    arg4 = uStack_ca9;
                }
                if (*piVar2 == 0x54445344) {
                    fcn.0001d35c(arg1_00,piVar1[1] - 0x25,&uStack_cf8,arg4);
                }
                if (arg1 != 0) {
                    (**(*0x1e908 + 0x70))(arg1);
                }
            }
        }
    }
    return;
}


/* fcn.00015234 @ 0x15234 */

void fcn.00015234(int64_t arg1,int64_t arg2)

{
    if (*arg1 == 4) {
        (**(*0x1e908 + 0x160))(arg2,arg1 + 2,0x14);
    }
    else if (*arg1 != 0xb) {
        return;
    }
    return;
}


/* fcn.0001516c @ 0x1516c */

int64_t fcn.0001516c(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint in_register_0000000c;
    uint32_t *puVar4;
    uint32_t *arg1_00;
    uint64_t uVar5;
    int64_t iVar6;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = *puVar4;
    puVar3 = puVar4 + 1;
    uVar5 = 0;
    arg1_00 = puVar3;
    if (uVar2 != 0) {
        do {
            iVar1 = *arg1_00;
            if (iVar1 == 4) {
                iVar6 = 0x14;
            }
            else if (iVar1 == 0xb) {
code_r0x000151c3:
                iVar6 = 0x20;
            }
            else if (iVar1 == 0xc) {
                iVar6 = 0x30;
            }
            else {
                if (iVar1 != 0xd) {
                    if (iVar1 != 0x12) {
                        return 0xffffffff;
                    }
                    goto code_r0x000151c3;
                }
                iVar6 = 0x40;
            }
            fcn.00015234(arg1_00,arg3);
            puVar3 = arg1_00 + iVar6 + 2;
            if (puVar3 - arg1_00 == 0xffffffff) {
                return 0xffffffff;
            }
            uVar5 = uVar5 + 1;
            arg1_00 = puVar3;
        } while (uVar5 < uVar2);
    }
    *arg2 = puVar3;
    return puVar3 - puVar4;
}


/* fcn.0001559c @ 0x1559c */

bool fcn.0001559c(uint32_t arg1)

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


/* fcn.0001541c @ 0x1541c */

void fcn.0001541c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000153ec();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.000156d4 @ 0x156d4 */

void fcn.000156d4(int64_t arg1)

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
            fcn.00010360();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00015768 @ 0x15768 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.00015768(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    int32_t var_6fh;
    int32_t var_77h;
    int32_t var_7fh;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uint32_t uStack_88;
    uchar auStack_84 [3];
    int32_t var_79h;
    int32_t var_75h;
    int32_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    int32_t var_61h;
    int32_t var_5dh;
    int32_t var_59h;
    int32_t var_55h;
    int32_t var_51h;
    int32_t var_4dh;
    int32_t var_49h;
    int32_t var_45h;
    int64_t var_39h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int32_t var_11h;
    int32_t var_dh;
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    if (&uStack_98 != CONCAT44(in_register_00000014,arg2)) {
        section..text(&uStack_98,CONCAT44(in_register_00000014,arg2),0x40);
    }
    uVar3 = *(arg1 + 8);
    uVar13 = *(arg1 + 0xc);
    uVar1 = uStack_98 >> 8 & 0xff00ff00 | uStack_98 << 0x18 | (uStack_98 & 0xff00) << 8 | uStack_98 >> 0x18;
    uVar11 = uVar1 + 0x5a827999 +
             ((uVar13 ^ uVar3) & *(arg1 + 4) ^ uVar13) + (*arg1 << 5 | *arg1 >> 0x1b) + *(arg1 + 0x10);
    uVar2 = *(arg1 + 4) >> 2 | *(arg1 + 4) << 0x1e;
    uVar8 = uStack_94 >> 8 & 0xff00ff00 | uStack_94 << 0x18 | (uStack_94 & 0xff00) << 8 | uStack_94 >> 0x18;
    uVar9 = *arg1 >> 2 | *arg1 << 0x1e;
    uVar13 = ((uVar3 ^ uVar2) & *arg1 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar8 + uVar13 + 0x5a827999;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar17 = uStack_90 >> 8 & 0xff00ff00 | uStack_90 << 0x18 | (uStack_90 & 0xff00) << 8 | uStack_90 >> 0x18;
    uVar18 = uVar17 + (uVar13 * 0x20 | uVar13 >> 0x1b) + ((uVar2 ^ uVar9) & uVar11 ^ uVar2) + uVar3 + 0x5a827999;
    uVar11 = uStack_8c >> 8 & 0xff00ff00 | uStack_8c << 0x18 | (uStack_8c & 0xff00) << 8 | uStack_8c >> 0x18;
    uVar3 = uVar2 + 0x5a827999 + ((uVar12 ^ uVar9) & uVar13 ^ uVar9) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar11;
    uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar4 = uStack_88 >> 8 & 0xff00ff00 | uStack_88 << 0x18 | (uStack_88 & 0xff00) << 8 | uStack_88 >> 0x18;
    uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar2 = uVar9 + 0x5a827999 + ((uVar12 ^ uVar14) & uVar18 ^ uVar12) + (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar4;
    uVar9 = _auStack_84 >> 8 & 0xff00ff00 | _auStack_84 << 0x18 | (_auStack_84 & 0xff00) << 8 | _auStack_84 >> 0x18;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = uVar12 + ((uVar14 ^ uVar19) & uVar3 ^ uVar14) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar9 + 0x5a827999;
    uVar18 = stack0xffffffffffffff80 >> 8 & 0xff00ff00 | stack0xffffffffffffff80 << 0x18 |
             (stack0xffffffffffffff80 & 0xff00) << 8 | stack0xffffffffffffff80 >> 0x18;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar14 = uVar14 + ((uVar19 ^ uVar13) & uVar2 ^ uVar19) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar18 + 0x5a827999;
    uVar5 = stack0xffffffffffffff84 >> 8 & 0xff00ff00 | stack0xffffffffffffff84 << 0x18 |
            (stack0xffffffffffffff84 & 0xff00) << 8 | stack0xffffffffffffff84 >> 0x18;
    uVar2 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar19 = uVar19 + ((uVar13 ^ uVar10) & uVar12 ^ uVar13) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x5a827999 + uVar5;
    uVar6 = stack0xffffffffffffff88 >> 8 & 0xff00ff00 | stack0xffffffffffffff88 << 0x18 |
            (stack0xffffffffffffff88 & 0xff00) << 8 | stack0xffffffffffffff88 >> 0x18;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar13 = uVar13 + ((uVar2 ^ uVar10) & uVar14 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar6;
    uVar7 = stack0xffffffffffffff8c >> 8 & 0xff00ff00 | stack0xffffffffffffff8c << 0x18 |
            (stack0xffffffffffffff8c & 0xff00) << 8 | stack0xffffffffffffff8c >> 0x18;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar10 = uVar10 + ((uVar2 ^ uVar15) & uVar19 ^ uVar2) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar7;
    uVar12 = stack0xffffffffffffff90 >> 8 & 0xff00ff00 | stack0xffffffffffffff90 << 0x18 |
             (stack0xffffffffffffff90 & 0xff00) << 8 | stack0xffffffffffffff90 >> 0x18;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar12 + (uVar10 * 0x20 | uVar10 >> 0x1b) + ((uVar15 ^ uVar20) & uVar13 ^ uVar15) + uVar2 + 0x5a827999;
    uVar22 = stack0xffffffffffffff94 >> 8 & 0xff00ff00 | stack0xffffffffffffff94 << 0x18 |
             (stack0xffffffffffffff94 & 0xff00) << 8 | stack0xffffffffffffff94 >> 0x18;
    uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = ((uVar20 ^ uVar3) & uVar10 ^ uVar20) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar22 + uVar15 + 0x5a827999;
    uVar27 = stack0xffffffffffffff98 >> 8 & 0xff00ff00 | stack0xffffffffffffff98 << 0x18 |
             (stack0xffffffffffffff98 & 0xff00) << 8 | stack0xffffffffffffff98 >> 0x18;
    uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = ((uVar3 ^ uVar14) & uVar13 ^ uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar27 + uVar20 + 0x5a827999;
    uVar25 = stack0xffffffffffffff9c >> 8 & 0xff00ff00 | stack0xffffffffffffff9c << 0x18 |
             (stack0xffffffffffffff9c & 0xff00) << 8 | stack0xffffffffffffff9c >> 0x18;
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = ((uVar10 ^ uVar14) & uVar2 ^ uVar14) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar25 + uVar3 + 0x5a827999;
    uVar16 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar2 = stack0xffffffffffffffa0 >> 8 & 0xff00ff00 | stack0xffffffffffffffa0 << 0x18 |
            (stack0xffffffffffffffa0 & 0xff00) << 8 | stack0xffffffffffffffa0 >> 0x18;
    uVar3 = uVar2 + (uVar20 * 0x20 | uVar20 >> 0x1b) + ((uVar10 ^ uVar19) & uVar13 ^ uVar10) + uVar14 + 0x5a827999;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar15 = stack0xffffffffffffffa4 >> 8 & 0xff00ff00 | stack0xffffffffffffffa4 << 0x18 |
             (stack0xffffffffffffffa4 & 0xff00) << 8 | stack0xffffffffffffffa4 >> 0x18;
    uVar1 = uVar25 ^ uVar6 ^ uVar17 ^ uVar1;
    uVar14 = uVar1 << 1 | uVar1 < 0;
    uVar13 = uVar15 + (uVar3 * 0x20 | uVar3 >> 0x1b) + ((uVar19 ^ uVar16) & uVar20 ^ uVar19) + uVar10 + 0x5a827999;
    uVar19 = uVar19 + ((uVar16 ^ uVar21) & uVar3 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar14;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar8 = uVar2 ^ uVar7 ^ uVar11 ^ uVar8;
    uVar17 = uVar15 ^ uVar12 ^ uVar4 ^ uVar17;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar1 = uVar22 ^ uVar9 ^ uVar11 ^ uVar14;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar16 + ((uVar21 ^ uVar3) & uVar13 ^ uVar21) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar8;
    uVar23 = uVar1 << 1 | uVar1 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + ((uVar11 ^ uVar3) & uVar19 ^ uVar3) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x5a827999 + uVar17;
    uVar13 = uVar27 ^ uVar18 ^ uVar4 ^ uVar8;
    uVar4 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar3 = uVar3 + ((uVar11 ^ uVar20) & uVar16 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999 + uVar23;
    uVar13 = uVar25 ^ uVar5 ^ uVar9 ^ uVar17;
    uVar9 = uVar13 << 1 | uVar13 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar20 ^ uVar19 ^ uVar21) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar20 = uVar20 + (uVar19 ^ uVar16 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar1 = uVar12 ^ uVar6 ^ uVar9 ^ uVar14;
    uVar18 = uVar2 ^ uVar6 ^ uVar18 ^ uVar23;
    uVar5 = uVar15 ^ uVar7 ^ uVar5 ^ uVar4;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar10 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = uVar18 << 1 | uVar18 < 0;
    uVar28 = uVar5 << 1 | uVar5 < 0;
    uVar5 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar19 + (uVar11 ^ uVar16 ^ uVar13) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar26;
    uVar3 = uVar22 ^ uVar7 ^ uVar26 ^ uVar8;
    uVar24 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar16 = uVar16 + (uVar10 ^ uVar20 ^ uVar13) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar28;
    uVar6 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar13 = uVar13 + (uVar10 ^ uVar11 ^ uVar19) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar7 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar10 = uVar10 + (uVar11 ^ uVar6 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x6ed9eba1 + uVar24;
    uVar3 = uVar27 ^ uVar12 ^ uVar28 ^ uVar17;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar11 + (uVar6 ^ uVar7 ^ uVar13) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar3 + 0x6ed9eba1;
    uVar1 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar25 ^ uVar22 ^ uVar5 ^ uVar23;
    uVar18 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar6 + (uVar10 ^ uVar7 ^ uVar1) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar18 + 0x6ed9eba1;
    uVar13 = uVar2 ^ uVar27 ^ uVar24 ^ uVar4;
    uVar12 = uVar13 << 1 | uVar13 < 0;
    uVar20 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar7 = uVar7 + (uVar19 ^ uVar11 ^ uVar1) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar12 + 0x6ed9eba1;
    uVar13 = uVar15 ^ uVar25 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar21 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar1 = uVar1 + (uVar19 ^ uVar20 ^ uVar6) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar13 + 0x6ed9eba1;
    uVar2 = uVar2 ^ uVar18 ^ uVar26 ^ uVar14;
    uVar10 = uVar2 << 1 | uVar2 < 0;
    uVar25 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar19 = uVar19 + (uVar20 ^ uVar21 ^ uVar7) + (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar10 + 0x6ed9eba1;
    uVar2 = uVar15 ^ uVar12 ^ uVar28 ^ uVar8;
    uVar6 = uVar2 << 1 | uVar2 < 0;
    uVar20 = uVar20 + (uVar21 ^ uVar25 ^ uVar1) + (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar6 + 0x6ed9eba1;
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar14 = uVar13 ^ uVar5 ^ uVar17 ^ uVar14;
    uVar7 = uVar14 << 1 | uVar14 < 0;
    uVar14 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + (uVar19 ^ uVar25 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar7 + 0x6ed9eba1;
    uVar8 = uVar10 ^ uVar24 ^ uVar23 ^ uVar8;
    uVar15 = uVar8 << 1 | uVar8 < 0;
    uVar16 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar25 = uVar25 + (uVar14 ^ uVar20 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar15 + 0x6ed9eba1;
    uVar17 = uVar6 ^ uVar3 ^ uVar4 ^ uVar17;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar22 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar14 ^ uVar16 ^ uVar21) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar17;
    uVar1 = uVar18 ^ uVar9 ^ uVar23 ^ uVar7;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar14 = uVar14 + (uVar16 ^ uVar22 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar1 + 0x6ed9eba1;
    uVar2 = uVar12 ^ uVar26 ^ uVar4 ^ uVar15;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar16 = uVar16 + (uVar22 ^ uVar23 ^ uVar11) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar4 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar19 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar11 = uVar13 ^ uVar28 ^ uVar9 ^ uVar17;
    uVar11 = uVar11 << 1 | uVar11 < 0;
    uVar22 = uVar22 + (uVar14 ^ uVar23 ^ uVar4) + (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar11 + 0x6ed9eba1;
    uVar9 = uVar10 ^ uVar5 ^ uVar26 ^ uVar1;
    uVar8 = uVar9 << 1 | uVar9 < 0;
    uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar23 + (uVar19 ^ uVar16 ^ uVar4) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar8 + 0x6ed9eba1;
    uVar9 = uVar6 ^ uVar24 ^ uVar28 ^ uVar2;
    uVar14 = uVar9 << 1 | uVar9 < 0;
    uVar9 = (uVar19 ^ uVar20 ^ uVar22) + (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar14 + uVar4 + 0x6ed9eba1;
    uVar22 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar4 = uVar3 ^ uVar5 ^ uVar11 ^ uVar7;
    uVar26 = uVar4 << 1 | uVar4 < 0;
    uVar4 = uVar18 ^ uVar24 ^ uVar8 ^ uVar15;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar19 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar23) & uVar20 | uVar21 & uVar23) + uVar26 + uVar19;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar12 ^ uVar3 ^ uVar14 ^ uVar17;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar9) & uVar21 | uVar22 & uVar9) + uVar4 + uVar20;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar9 = uVar13 ^ uVar18 ^ uVar26 ^ uVar1;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar19 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar5) & uVar22 | uVar19 & uVar5) + uVar3 + uVar21;
    uVar21 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar5 | uVar20 & uVar16) + uVar9 + uVar22;
    uVar18 = uVar10 ^ uVar12 ^ uVar4 ^ uVar2;
    uVar18 = uVar18 << 1 | uVar18 < 0;
    uVar22 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar12 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar19) & uVar20 | uVar21 & uVar19) + uVar18 + uVar5;
    uVar13 = uVar6 ^ uVar13 ^ uVar3 ^ uVar11;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar19 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar16) & uVar21 | uVar22 & uVar16) + uVar13 + uVar20;
    uVar5 = uVar10 ^ uVar9 ^ uVar8 ^ uVar7;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar7 = uVar13 ^ uVar26 ^ uVar17 ^ uVar7;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar25 | uVar12) & uVar22 | uVar25 & uVar12) + uVar5 + uVar21;
    uVar12 = uVar6 ^ uVar18 ^ uVar14 ^ uVar15;
    uVar12 = uVar12 << 1 | uVar12 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar10) & uVar25 | uVar19 & uVar10) + uVar12 + uVar22;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar22 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar10 | uVar20 & uVar16) + uVar7 + uVar25;
    uVar15 = uVar5 ^ uVar4 ^ uVar1 ^ uVar15;
    uVar6 = uVar15 << 1 | uVar15 < 0;
    uVar10 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21) + uVar6 + uVar10;
    uVar17 = uVar12 ^ uVar3 ^ uVar2 ^ uVar17;
    uVar2 = uVar18 ^ uVar8 ^ uVar2 ^ uVar6;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar15 = uVar13 ^ uVar14 ^ uVar11 ^ uVar17;
    uVar25 = uVar2 << 1 | uVar2 < 0;
    uVar24 = uVar15 << 1 | uVar15 < 0;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar2 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x8f1bbcdc +
            ((uVar16 | uVar22) & uVar19 | uVar16 & uVar22) + uVar17 + uVar20;
    uVar1 = uVar9 ^ uVar11 ^ uVar1 ^ uVar7;
    uVar11 = uVar1 << 1 | uVar1 < 0;
    uVar1 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar10) & uVar16 | uVar21 & uVar10) + uVar11 + uVar19;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = uVar16 + ((uVar2 | uVar1) & uVar21 | uVar2 & uVar1) + 0x8f1bbcdc + uVar25 +
             (uVar15 * 0x20 | uVar15 >> 0x1b);
    uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar2 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
            ((uVar10 | uVar15) & uVar1 | uVar10 & uVar15) + uVar24 + uVar21 + 0x8f1bbcdc;
    uVar8 = uVar5 ^ uVar26 ^ uVar8 ^ uVar11;
    uVar16 = uVar8 << 1 | uVar8 < 0;
    uVar8 = uVar12 ^ uVar4 ^ uVar14 ^ uVar25;
    uVar22 = uVar8 << 1 | uVar8 < 0;
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar4 = uVar9 ^ uVar4 ^ uVar16 ^ uVar6;
    uVar21 = uVar4 << 1 | uVar4 < 0;
    uVar4 = (uVar2 * 0x20 | uVar2 >> 0x1b) +
            ((uVar19 | uVar20) & uVar10 | uVar19 & uVar20) + uVar16 + uVar1 + 0x8f1bbcdc;
    uVar8 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar15 | uVar2) & uVar19 | uVar15 & uVar2) + uVar22 + uVar10 + 0x8f1bbcdc
    ;
    uVar2 = uVar3 ^ uVar26 ^ uVar24 ^ uVar7;
    uVar14 = uVar2 << 1 | uVar2 < 0;
    uVar10 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar19 + ((uVar8 | uVar4) & uVar15 | uVar8 & uVar4) + 0x8f1bbcdc + uVar14 + (uVar1 * 0x20 | uVar1 >> 0x1b);
    uVar3 = uVar18 ^ uVar3 ^ uVar22 ^ uVar17;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar1 | uVar10) & uVar8 | uVar1 & uVar10) + uVar21 + uVar15 + 0x8f1bbcdc;
    uVar26 = uVar3 << 1 | uVar3 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar8 = (uVar1 * 0x20 | uVar1 >> 0x1b) + ((uVar2 | uVar4) & uVar10 | uVar2 & uVar4) + uVar26 + uVar8 + 0x8f1bbcdc;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar13 ^ uVar9 ^ uVar14 ^ uVar11;
    uVar20 = uVar3 << 1 | uVar3 < 0;
    uVar4 = uVar5 ^ uVar18 ^ uVar21 ^ uVar25;
    uVar3 = uVar5 ^ uVar20 ^ uVar16 ^ uVar7;
    uVar23 = uVar4 << 1 | uVar4 < 0;
    uVar18 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar1 = (uVar8 * 0x20 | uVar8 >> 0x1b) + ((uVar15 | uVar1) & uVar2 | uVar15 & uVar1) + uVar20 + uVar10 + 0x8f1bbcdc;
    uVar4 = uVar3 << 1 | uVar3 < 0;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar15 ^ uVar19 ^ uVar8) + uVar23 + uVar2 + 0xca62c1d6;
    uVar13 = uVar12 ^ uVar13 ^ uVar26 ^ uVar24;
    uVar8 = uVar13 << 1 | uVar13 < 0;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar19 ^ uVar18 ^ uVar1) + uVar8 + uVar15;
    uVar5 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar18 ^ uVar2) + uVar4 + uVar19;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar13 = uVar12 ^ uVar23 ^ uVar22 ^ uVar6;
    uVar6 = uVar4 ^ uVar21 ^ uVar11 ^ uVar6;
    uVar1 = uVar13 << 1 | uVar13 < 0;
    uVar18 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar2) + uVar1 + uVar18;
    uVar7 = uVar8 ^ uVar14 ^ uVar17 ^ uVar7;
    uVar17 = uVar1 ^ uVar26 ^ uVar25 ^ uVar17;
    uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
    uStack_98 = uVar7 << 1 | uVar7 < 0;
    uStack_94 = uVar6 << 1 | uVar6 < 0;
    uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
    uStack_90 = uVar17 << 1 | uVar17 < 0;
    uVar13 = uVar20 ^ uVar24 ^ uVar11 ^ uStack_98;
    uStack_8c = uVar13 << 1 | uVar13 < 0;
    uVar13 = (uVar18 * 0x20 | uVar18 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar5) + uStack_98 + uVar2;
    uVar5 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar3 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar12 ^ uVar18) + uStack_94 + uVar3;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar5 ^ uVar13) + uStack_90 + uVar9;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar5 ^ uVar11) + uStack_8c + uVar12;
    uVar13 = uVar23 ^ uVar16 ^ uVar25 ^ uStack_94;
    uVar18 = uVar8 ^ uVar22 ^ uVar24 ^ uStack_90;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar2 = uVar4 ^ uVar14 ^ uVar16 ^ uStack_8c;
    _auStack_84 = uVar18 << 1 | uVar18 < 0;
    uStack_88 = uVar13 << 1 | uVar13 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    *0x38 = uVar2 << 1 | uVar2 < 0;
    uVar13 = uVar1 ^ uVar21 ^ uVar22 ^ uStack_88;
    *0xa8 = uVar13 << 1 | uVar13 < 0;
    uVar9 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar11) + uStack_88 + uVar5;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar2 = uVar11 + (uVar3 ^ uVar18 ^ uVar12) + 0xca62c1d6 + _auStack_84 + (uVar9 * 0x20 | uVar9 >> 0x1b);
    uVar13 = uVar26 ^ uVar14 ^ _auStack_84 ^ uStack_98;
    uVar3 = (uVar2 * 0x20 | uVar2 >> 0x1b) + (uVar18 ^ uVar10 ^ uVar9) + *0x38 + uVar3 + 0xca62c1d6;
    *0x10 = uVar13 << 1 | uVar13 < 0;
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar10 ^ uVar5 ^ uVar2) + *0xa8 + uVar18 + 0xca62c1d6;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar3 ^ uVar5 ^ uVar11) + *0x10 + uVar10 + 0xca62c1d6;
    uVar3 = uVar20 ^ uVar21 ^ *0x38 ^ uStack_94;
    *0x88 = uVar3 << 1 | uVar3 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar23 ^ uVar26 ^ *0xa8 ^ uStack_90;
    *0x98 = uVar3 << 1 | uVar3 < 0;
    uVar2 = uVar4 ^ uVar23 ^ *0x88 ^ uStack_88;
    uVar3 = (uVar12 * 0x20 | uVar12 >> 0x1b) + (uVar13 ^ uVar9 ^ uVar11) + 0xca62c1d6 + *0x88 + uVar5;
    *0x90 = uVar2 << 1 | uVar2 < 0;
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar2 = uVar8 ^ uVar20 ^ *0x10 ^ uStack_8c;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar13 ^ uVar18 ^ uVar12) + *0x98 + uVar11 + 0xca62c1d6;
    *0x80 = uVar2 << 1 | uVar2 < 0;
    uVar2 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar11 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar18 ^ uVar5 ^ uVar3) + *0x80 + uVar13 + 0xca62c1d6;
    uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar5 ^ uVar2 ^ uVar9) + *0x90 + uVar18 + 0xca62c1d6;
    uVar3 = uVar1 ^ uVar8 ^ *0x98 ^ _auStack_84;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar9 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar11 = (uVar13 * 0x20 | uVar13 >> 0x1b) + (uVar11 ^ uVar2 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar5;
    uVar3 = uVar4 ^ *0x80 ^ *0x38 ^ uStack_98;
    uVar1 = uVar1 ^ *0x90 ^ *0xa8 ^ uStack_94;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar9 ^ uVar13 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar2;
    *0xa0 = uVar1 << 1 | uVar1 < 0;
    *(arg1 + 4) = *(arg1 + 4) + uVar13;
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar3;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar9;
    *(arg1 + 8) = *(arg1 + 8) + (uVar11 >> 2 | uVar11 * 0x40000000);
    *arg1 = (uVar9 ^ uVar3 ^ uVar11) + *arg1 + *0xa0 + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar12 + 0xca62c1d6;
    fcn.00010300(&uStack_98,0x40,0);
    return;
}


/* fcn.00016b00 @ 0x16b00 */

ulong fcn.00016b00(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    uint16_t uVar14;
    unkuint3 Var15;
    uint16_t uVar16;
    unkuint3 Var17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    int iVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    int iVar43;
    uint32_t uVar44;
    uint32_t uVar45;
    uint32_t uVar46;
    
    iVar43 = CONCAT31(CONCAT21(CONCAT11(*arg2,*(arg2 + 1)),*(arg2 + 2)),*(arg2 + 3));
    uVar1 = CONCAT11(*(arg2 + 4),*(arg2 + 5));
    uVar45 = CONCAT31(CONCAT21(uVar1,*(arg2 + 6)),*(arg2 + 7));
    uVar2 = CONCAT11(*(arg2 + 8),*(arg2 + 9));
    uVar41 = CONCAT31(CONCAT21(uVar2,*(arg2 + 10)),*(arg2 + 0xb));
    uVar3 = CONCAT11(*(arg2 + 0xc),*(arg2 + 0xd));
    uVar42 = CONCAT31(CONCAT21(uVar3,*(arg2 + 0xe)),*(arg2 + 0xf));
    uVar4 = CONCAT11(*(arg2 + 0x10),*(arg2 + 0x11));
    uVar18 = CONCAT31(CONCAT21(uVar4,*(arg2 + 0x12)),*(arg2 + 0x13));
    uVar5 = CONCAT11(*(arg2 + 0x14),*(arg2 + 0x15));
    uVar19 = CONCAT31(CONCAT21(uVar5,*(arg2 + 0x16)),*(arg2 + 0x17));
    uVar6 = CONCAT11(*(arg2 + 0x18),*(arg2 + 0x19));
    uVar20 = CONCAT31(CONCAT21(uVar6,*(arg2 + 0x1a)),*(arg2 + 0x1b));
    uVar7 = CONCAT11(*(arg2 + 0x1c),*(arg2 + 0x1d));
    uVar21 = CONCAT31(CONCAT21(uVar7,*(arg2 + 0x1e)),*(arg2 + 0x1f));
    uVar8 = CONCAT11(*(arg2 + 0x20),*(arg2 + 0x21));
    uVar22 = CONCAT31(CONCAT21(uVar8,*(arg2 + 0x22)),*(arg2 + 0x23));
    uVar9 = CONCAT11(*(arg2 + 0x24),*(arg2 + 0x25));
    uVar23 = CONCAT31(CONCAT21(uVar9,*(arg2 + 0x26)),*(arg2 + 0x27));
    uVar10 = CONCAT11(*(arg2 + 0x28),*(arg2 + 0x29));
    uVar24 = CONCAT31(CONCAT21(uVar10,*(arg2 + 0x2a)),*(arg2 + 0x2b));
    uVar11 = CONCAT11(*(arg2 + 0x2c),*(arg2 + 0x2d));
    uVar25 = CONCAT31(CONCAT21(uVar11,*(arg2 + 0x2e)),*(arg2 + 0x2f));
    uVar12 = CONCAT11(*(arg2 + 0x30),*(arg2 + 0x31));
    uVar26 = CONCAT31(CONCAT21(uVar12,*(arg2 + 0x32)),*(arg2 + 0x33));
    uVar13 = CONCAT11(*(arg2 + 0x34),*(arg2 + 0x35));
    uVar27 = CONCAT31(CONCAT21(uVar13,*(arg2 + 0x36)),*(arg2 + 0x37));
    uVar14 = CONCAT11(*(arg2 + 0x38),*(arg2 + 0x39));
    Var15 = CONCAT21(uVar14,*(arg2 + 0x3a));
    uVar28 = CONCAT31(Var15,*(arg2 + 0x3b));
    uVar32 = *(arg1 + 8);
    uVar33 = *(arg1 + 0x18);
    uVar31 = *(arg1 + 0x20);
    uVar34 = *(arg1 + 0x1c);
    uVar38 = *(arg1 + 0xc);
    uVar16 = CONCAT11(*(arg2 + 0x3c),*(arg2 + 0x3d));
    Var17 = CONCAT21(uVar16,*(arg2 + 0x3e));
    uVar29 = CONCAT31(Var17,*(arg2 + 0x3f));
    iVar30 = ((uVar33 >> 0xb | uVar33 << 0x15) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ (uVar33 >> 6 | uVar33 << 0x1a)) +
             *(arg1 + 0x24) + ((uVar31 ^ uVar34) & uVar33 ^ uVar31) + 0x428a2f98 + iVar43;
    uVar36 = *(arg1 + 0x14) + iVar30;
    uVar40 = ((uVar38 | uVar32) & *(arg1 + 0x10) | uVar38 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 << 0x13) ^ (uVar32 << 10 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 << 0x1e));
    iVar30 = uVar31 + 0x71374491 +
             ((uVar34 ^ uVar33) & uVar36 ^ uVar34) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar45;
    uVar37 = *(arg1 + 0x10) + iVar30;
    uVar31 = ((uVar40 | uVar32) & uVar38 | uVar40 & uVar32) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar30 = uVar34 + 0xb5c0fbcf +
             ((uVar33 ^ uVar36) & uVar37 ^ uVar33) +
             ((uVar37 >> 6 | uVar37 * 0x4000000) ^
             (uVar37 >> 0xb | uVar37 * 0x200000) ^ (uVar37 * 0x80 | uVar37 >> 0x19)) + uVar41;
    uVar38 = uVar38 + iVar30;
    uVar35 = ((uVar40 | uVar31) & uVar32 | uVar40 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar30 = uVar33 + 0xe9b5dba5 +
             ((uVar36 ^ uVar37) & uVar38 ^ uVar36) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar42;
    uVar32 = uVar32 + iVar30;
    uVar34 = ((uVar31 | uVar35) & uVar40 | uVar31 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar30 = uVar36 + 0x3956c25b +
             ((uVar37 ^ uVar38) & uVar32 ^ uVar37) +
             uVar18 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar36 = ((uVar35 | uVar34) & uVar31 | uVar35 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    iVar30 = uVar37 + 0x59f111f1 +
             ((uVar38 ^ uVar32) & uVar40 ^ uVar38) +
             uVar19 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar37 = ((uVar34 | uVar36) & uVar35 | uVar34 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    iVar30 = uVar38 + 0x923f82a4 +
             ((uVar40 ^ uVar32) & uVar31 ^ uVar32) +
             uVar20 + ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19) ^
                      (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar35 = uVar35 + iVar30;
    uVar39 = ((uVar36 | uVar37) & uVar34 | uVar36 & uVar37) +
             iVar30 + ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 * 0x400 | uVar37 >> 0x16) ^
                      (uVar37 >> 2 | uVar37 * 0x40000000));
    iVar30 = uVar32 + 0xab1c5ed5 +
             ((uVar40 ^ uVar31) & uVar35 ^ uVar40) +
             uVar21 + ((uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19) ^
                      (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar34 = uVar34 + iVar30;
    uVar33 = ((uVar37 | uVar39) & uVar36 | uVar37 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    iVar30 = uVar40 + 0xd807aa98 +
             ((uVar31 ^ uVar35) & uVar34 ^ uVar31) +
             uVar22 + ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19) ^
                      (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar36 = uVar36 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar37 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    iVar30 = uVar31 + 0x12835b01 +
             ((uVar35 ^ uVar34) & uVar36 ^ uVar35) +
             uVar23 + ((uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19) ^
                      (uVar36 >> 6 | uVar36 * 0x4000000));
    uVar37 = uVar37 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar30 = uVar35 + 0x243185be +
             ((uVar34 ^ uVar36) & uVar37 ^ uVar34) +
             uVar24 + ((uVar37 >> 0xb | uVar37 * 0x200000) ^ (uVar37 * 0x80 | uVar37 >> 0x19) ^
                      (uVar37 >> 6 | uVar37 * 0x4000000));
    uVar39 = uVar39 + iVar30;
    uVar38 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    iVar30 = uVar34 + 0x550c7dc3 +
             ((uVar36 ^ uVar37) & uVar39 ^ uVar36) +
             uVar25 + ((uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19) ^
                      (uVar39 >> 6 | uVar39 * 0x4000000));
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar38) & uVar40 | uVar32 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    iVar30 = uVar36 + 0x72be5d74 +
             ((uVar37 ^ uVar39) & uVar33 ^ uVar37) +
             uVar26 + ((uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19) ^
                      (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar35 = ((uVar38 | uVar31) & uVar32 | uVar38 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar30 = uVar37 + 0x80deb1fe +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             uVar27 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar32 = uVar32 + iVar30;
    uVar36 = ((uVar31 | uVar35) & uVar38 | uVar31 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar30 = uVar39 + 0x9bdc06a7 +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             uVar28 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar38 = uVar38 + iVar30;
    uVar39 = ((uVar35 | uVar36) & uVar31 | uVar35 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    iVar30 = uVar33 + 0xc19bf174 +
             ((uVar40 ^ uVar32) & uVar38 ^ uVar40) +
             uVar29 + ((uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19) ^
                      (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar36 | uVar39) & uVar35 | uVar36 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar37 = iVar43 + ((uVar45 << 0xe | uVar1 >> 2) ^ (uVar45 >> 7 | uVar45 << 0x19) ^ uVar45 >> 3) +
                      uVar23 + ((uVar28 << 0xf | uVar14 >> 1) ^ (uVar28 << 0xd | uVar14 >> 3) ^ Var15 >> 2);
    iVar30 = uVar40 + 0xe49b69c1 +
             ((uVar32 ^ uVar38) & uVar31 ^ uVar32) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar37;
    uVar35 = uVar35 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar36 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar45 = uVar45 + ((uVar41 << 0xe | uVar2 >> 2) ^ (uVar41 >> 7 | uVar41 << 0x19) ^ uVar41 >> 3) +
                      uVar24 + ((uVar29 << 0xf | uVar16 >> 1) ^ (uVar29 << 0xd | uVar16 >> 3) ^ Var17 >> 2);
    iVar30 = uVar32 + 0xefbe4786 +
             ((uVar38 ^ uVar31) & uVar35 ^ uVar38) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar45;
    uVar36 = uVar36 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar41 = uVar41 + ((uVar42 << 0xe | uVar3 >> 2) ^ (uVar42 >> 7 | uVar42 << 0x19) ^ uVar42 >> 3) +
                      uVar25 + ((uVar37 * 0x8000 | uVar37 >> 0x11) ^ (uVar37 * 0x2000 | uVar37 >> 0x13) ^ uVar37 >> 10);
    iVar30 = uVar38 + 0xfc19dc6 +
             ((uVar31 ^ uVar35) & uVar36 ^ uVar31) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar41;
    uVar39 = uVar39 + iVar30;
    uVar34 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar42 = uVar42 + ((uVar18 << 0xe | uVar4 >> 2) ^ (uVar18 >> 7 | uVar18 << 0x19) ^ uVar18 >> 3) +
                      uVar26 + ((uVar45 * 0x8000 | uVar45 >> 0x11) ^ (uVar45 * 0x2000 | uVar45 >> 0x13) ^ uVar45 >> 10);
    iVar30 = uVar31 + 0x240ca1cc +
             ((uVar35 ^ uVar36) & uVar39 ^ uVar35) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar42;
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar34) & uVar40 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar18 = uVar18 + ((uVar19 << 0xe | uVar5 >> 2) ^ (uVar19 >> 7 | uVar19 << 0x19) ^ uVar19 >> 3) +
                      uVar27 + ((uVar41 * 0x8000 | uVar41 >> 0x11) ^ (uVar41 * 0x2000 | uVar41 >> 0x13) ^ uVar41 >> 10);
    iVar30 = uVar35 + 0x2de92c6f +
             ((uVar36 ^ uVar39) & uVar33 ^ uVar36) +
             uVar18 + ((uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19) ^
                      (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar38 = ((uVar34 | uVar31) & uVar32 | uVar34 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar19 = uVar19 + ((uVar20 << 0xe | uVar6 >> 2) ^ (uVar20 >> 7 | uVar20 << 0x19) ^ uVar20 >> 3) +
                      uVar28 + ((uVar42 * 0x8000 | uVar42 >> 0x11) ^ (uVar42 * 0x2000 | uVar42 >> 0x13) ^ uVar42 >> 10);
    iVar30 = uVar36 + 0x4a7484aa +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             uVar19 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar32 = uVar32 + iVar30;
    uVar35 = ((uVar31 | uVar38) & uVar34 | uVar31 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar20 = uVar20 + ((uVar21 << 0xe | uVar7 >> 2) ^ (uVar21 >> 7 | uVar21 << 0x19) ^ uVar21 >> 3) +
                      uVar29 + ((uVar18 * 0x8000 | uVar18 >> 0x11) ^ (uVar18 * 0x2000 | uVar18 >> 0x13) ^ uVar18 >> 10);
    iVar30 = uVar39 + 0x5cb0a9dc +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             uVar20 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar34 = uVar34 + iVar30;
    uVar36 = ((uVar38 | uVar35) & uVar31 | uVar38 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar21 = uVar21 + ((uVar22 << 0xe | uVar8 >> 2) ^ (uVar22 >> 7 | uVar22 << 0x19) ^ uVar22 >> 3) +
                      uVar37 + ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10);
    iVar30 = uVar33 + 0x76f988da +
             ((uVar40 ^ uVar32) & uVar34 ^ uVar40) +
             uVar21 + ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19) ^
                      (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar35 | uVar36) & uVar38 | uVar35 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar22 = uVar22 + ((uVar23 << 0xe | uVar9 >> 2) ^ (uVar23 >> 7 | uVar23 << 0x19) ^ uVar23 >> 3) +
                      uVar45 + ((uVar20 * 0x8000 | uVar20 >> 0x11) ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ uVar20 >> 10);
    iVar30 = uVar40 + 0x983e5152 +
             ((uVar32 ^ uVar34) & uVar31 ^ uVar32) +
             uVar22 + ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19) ^
                      (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar38 = uVar38 + iVar30;
    uVar40 = ((uVar36 | uVar33) & uVar35 | uVar36 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar23 = uVar23 + ((uVar24 << 0xe | uVar10 >> 2) ^ (uVar24 >> 7 | uVar24 << 0x19) ^ uVar24 >> 3) +
                      uVar41 + ((uVar21 * 0x8000 | uVar21 >> 0x11) ^ (uVar21 * 0x2000 | uVar21 >> 0x13) ^ uVar21 >> 10);
    iVar30 = uVar32 + 0xa831c66d +
             ((uVar34 ^ uVar31) & uVar38 ^ uVar34) +
             uVar23 + ((uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19) ^
                      (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar35 = uVar35 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar36 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar24 = uVar24 + ((uVar25 << 0xe | uVar11 >> 2) ^ (uVar25 >> 7 | uVar25 << 0x19) ^ uVar25 >> 3) +
                      ((uVar22 * 0x8000 | uVar22 >> 0x11) ^ (uVar22 * 0x2000 | uVar22 >> 0x13) ^ uVar22 >> 10) + uVar42;
    iVar30 = uVar34 + 0xb00327c8 +
             ((uVar31 ^ uVar38) & uVar35 ^ uVar31) +
             uVar24 + ((uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19) ^
                      (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar36 = uVar36 + iVar30;
    uVar34 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar25 = uVar25 + ((uVar26 << 0xe | uVar12 >> 2) ^ (uVar26 >> 7 | uVar26 << 0x19) ^ uVar26 >> 3) +
                      uVar18 + ((uVar23 * 0x8000 | uVar23 >> 0x11) ^ (uVar23 * 0x2000 | uVar23 >> 0x13) ^ uVar23 >> 10);
    iVar30 = uVar31 + 0xbf597fc7 +
             ((uVar38 ^ uVar35) & uVar36 ^ uVar38) +
             uVar25 + ((uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19) ^
                      (uVar36 >> 6 | uVar36 * 0x4000000));
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar34) & uVar40 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar26 = uVar26 + ((uVar27 << 0xe | uVar13 >> 2) ^ (uVar27 >> 7 | uVar27 << 0x19) ^ uVar27 >> 3) +
                      uVar19 + ((uVar24 * 0x8000 | uVar24 >> 0x11) ^ (uVar24 * 0x2000 | uVar24 >> 0x13) ^ uVar24 >> 10);
    iVar30 = uVar38 + 0xc6e00bf3 +
             ((uVar35 ^ uVar36) & uVar33 ^ uVar35) +
             uVar26 + ((uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19) ^
                      (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar38 = ((uVar34 | uVar31) & uVar32 | uVar34 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar27 = uVar27 + ((uVar28 << 0xe | uVar14 >> 2) ^ (uVar28 >> 7 | uVar28 << 0x19) ^ uVar28 >> 3) +
                      uVar20 + ((uVar25 * 0x8000 | uVar25 >> 0x11) ^ (uVar25 * 0x2000 | uVar25 >> 0x13) ^ uVar25 >> 10);
    iVar30 = uVar35 + 0xd5a79147 +
             ((uVar36 ^ uVar33) & uVar40 ^ uVar36) +
             uVar27 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar32 = uVar32 + iVar30;
    uVar35 = ((uVar31 | uVar38) & uVar34 | uVar31 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar28 = uVar28 + ((uVar29 << 0xe | uVar16 >> 2) ^ (uVar29 >> 7 | uVar29 << 0x19) ^ uVar29 >> 3) +
                      uVar21 + ((uVar26 * 0x8000 | uVar26 >> 0x11) ^ (uVar26 * 0x2000 | uVar26 >> 0x13) ^ uVar26 >> 10);
    iVar30 = uVar36 + 0x6ca6351 +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             uVar28 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar34 = uVar34 + iVar30;
    uVar39 = ((uVar38 | uVar35) & uVar31 | uVar38 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar29 = uVar29 + ((uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^ uVar37 >> 3) +
                      uVar22 + ((uVar27 * 0x8000 | uVar27 >> 0x11) ^ (uVar27 * 0x2000 | uVar27 >> 0x13) ^ uVar27 >> 10);
    iVar30 = uVar33 + 0x14292967 +
             ((uVar40 ^ uVar32) & uVar34 ^ uVar40) +
             uVar29 + ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19) ^
                      (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar35 | uVar39) & uVar38 | uVar35 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar37 = uVar37 + ((uVar45 * 0x4000 | uVar45 >> 0x12) ^ (uVar45 >> 7 | uVar45 * 0x2000000) ^ uVar45 >> 3) +
                      uVar23 + ((uVar28 * 0x8000 | uVar28 >> 0x11) ^ (uVar28 * 0x2000 | uVar28 >> 0x13) ^ uVar28 >> 10);
    iVar30 = uVar40 + 0x27b70a85 +
             ((uVar32 ^ uVar34) & uVar31 ^ uVar32) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar37;
    uVar38 = uVar38 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar35 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar45 = uVar45 + ((uVar41 * 0x4000 | uVar41 >> 0x12) ^ (uVar41 >> 7 | uVar41 * 0x2000000) ^ uVar41 >> 3) +
                      uVar24 + ((uVar29 * 0x8000 | uVar29 >> 0x11) ^ (uVar29 * 0x2000 | uVar29 >> 0x13) ^ uVar29 >> 10);
    iVar30 = uVar32 + 0x2e1b2138 +
             ((uVar34 ^ uVar31) & uVar38 ^ uVar34) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar45;
    uVar35 = uVar35 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar41 = ((uVar42 * 0x4000 | uVar42 >> 0x12) ^ (uVar42 >> 7 | uVar42 * 0x2000000) ^ uVar42 >> 3) +
             uVar25 + ((uVar37 * 0x8000 | uVar37 >> 0x11) ^ (uVar37 * 0x2000 | uVar37 >> 0x13) ^ uVar37 >> 10) + uVar41;
    iVar30 = uVar34 + 0x4d2c6dfc +
             ((uVar31 ^ uVar38) & uVar35 ^ uVar31) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar41;
    uVar39 = uVar39 + iVar30;
    uVar34 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar42 = ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^ uVar18 >> 3) +
             uVar26 + ((uVar45 * 0x8000 | uVar45 >> 0x11) ^ (uVar45 * 0x2000 | uVar45 >> 0x13) ^ uVar45 >> 10) + uVar42;
    iVar30 = uVar31 + 0x53380d13 +
             ((uVar38 ^ uVar35) & uVar39 ^ uVar38) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar42;
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar34) & uVar40 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar18 = uVar18 + ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) +
                      ((uVar41 * 0x8000 | uVar41 >> 0x11) ^ (uVar41 * 0x2000 | uVar41 >> 0x13) ^ uVar41 >> 10) + uVar27;
    iVar30 = uVar38 + 0x650a7354 +
             ((uVar35 ^ uVar39) & uVar33 ^ uVar35) +
             ((uVar33 >> 6 | uVar33 * 0x4000000) ^
             (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19)) + uVar18;
    uVar40 = uVar40 + iVar30;
    uVar38 = ((uVar34 | uVar31) & uVar32 | uVar34 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar19 = uVar19 + ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^ uVar20 >> 3) +
                      uVar28 + ((uVar42 * 0x8000 | uVar42 >> 0x11) ^ (uVar42 * 0x2000 | uVar42 >> 0x13) ^ uVar42 >> 10);
    iVar30 = uVar35 + 0x766a0abb +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             ((uVar40 >> 6 | uVar40 * 0x4000000) ^
             (uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19)) + uVar19;
    uVar32 = uVar32 + iVar30;
    uVar36 = ((uVar31 | uVar38) & uVar34 | uVar31 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar20 = uVar20 + ((uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000) ^ uVar21 >> 3) +
                      uVar29 + ((uVar18 * 0x8000 | uVar18 >> 0x11) ^ (uVar18 * 0x2000 | uVar18 >> 0x13) ^ uVar18 >> 10);
    iVar30 = uVar39 + 0x81c2c92e +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             ((uVar32 >> 6 | uVar32 * 0x4000000) ^
             (uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19)) + uVar20;
    uVar34 = uVar34 + iVar30;
    uVar39 = ((uVar38 | uVar36) & uVar31 | uVar38 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar21 = uVar21 + ((uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000) ^ uVar22 >> 3) +
                      uVar37 + ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10);
    iVar30 = uVar33 + 0x92722c85 +
             ((uVar40 ^ uVar32) & uVar34 ^ uVar40) +
             ((uVar34 >> 6 | uVar34 * 0x4000000) ^
             (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19)) + uVar21;
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar36 | uVar39) & uVar38 | uVar36 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar22 = uVar22 + ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^ uVar23 >> 3) +
                      uVar45 + ((uVar20 * 0x8000 | uVar20 >> 0x11) ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ uVar20 >> 10);
    iVar30 = uVar40 + 0xa2bfe8a1 +
             ((uVar32 ^ uVar34) & uVar31 ^ uVar32) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar22;
    uVar38 = uVar38 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar36 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar23 = uVar23 + ((uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000) ^ uVar24 >> 3) +
                      uVar41 + ((uVar21 * 0x8000 | uVar21 >> 0x11) ^ (uVar21 * 0x2000 | uVar21 >> 0x13) ^ uVar21 >> 10);
    iVar30 = uVar32 + 0xa81a664b +
             ((uVar34 ^ uVar31) & uVar38 ^ uVar34) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar23;
    uVar36 = uVar36 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar24 = uVar24 + ((uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000) ^ uVar25 >> 3) +
                      uVar42 + ((uVar22 * 0x8000 | uVar22 >> 0x11) ^ (uVar22 * 0x2000 | uVar22 >> 0x13) ^ uVar22 >> 10);
    iVar30 = uVar34 + 0xc24b8b70 +
             ((uVar31 ^ uVar38) & uVar36 ^ uVar31) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar24;
    uVar39 = uVar39 + iVar30;
    uVar35 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar25 = uVar25 + ((uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000) ^ uVar26 >> 3) +
                      uVar18 + ((uVar23 * 0x8000 | uVar23 >> 0x11) ^ (uVar23 * 0x2000 | uVar23 >> 0x13) ^ uVar23 >> 10);
    iVar30 = uVar31 + 0xc76c51a3 +
             ((uVar38 ^ uVar36) & uVar39 ^ uVar38) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar25;
    uVar33 = uVar33 + iVar30;
    uVar34 = ((uVar32 | uVar35) & uVar40 | uVar32 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar26 = uVar26 + ((uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000) ^ uVar27 >> 3) +
                      uVar19 + ((uVar24 * 0x8000 | uVar24 >> 0x11) ^ (uVar24 * 0x2000 | uVar24 >> 0x13) ^ uVar24 >> 10);
    iVar30 = uVar38 + 0xd192e819 +
             ((uVar36 ^ uVar39) & uVar33 ^ uVar36) +
             ((uVar33 >> 6 | uVar33 * 0x4000000) ^
             (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19)) + uVar26;
    uVar40 = uVar40 + iVar30;
    uVar44 = ((uVar35 | uVar34) & uVar32 | uVar35 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar27 = uVar27 + ((uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 >> 7 | uVar28 * 0x2000000) ^ uVar28 >> 3) +
                      uVar20 + ((uVar25 * 0x8000 | uVar25 >> 0x11) ^ (uVar25 * 0x2000 | uVar25 >> 0x13) ^ uVar25 >> 10);
    iVar30 = uVar36 + 0xd6990624 +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             ((uVar40 >> 6 | uVar40 * 0x4000000) ^
             (uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19)) + uVar27;
    uVar32 = uVar32 + iVar30;
    uVar46 = ((uVar34 | uVar44) & uVar35 | uVar34 & uVar44) +
             iVar30 + ((uVar44 >> 0xd | uVar44 * 0x80000) ^ (uVar44 * 0x400 | uVar44 >> 0x16) ^
                      (uVar44 >> 2 | uVar44 * 0x40000000));
    uVar28 = uVar28 + ((uVar29 * 0x4000 | uVar29 >> 0x12) ^ (uVar29 >> 7 | uVar29 * 0x2000000) ^ uVar29 >> 3) +
                      uVar21 + ((uVar26 * 0x8000 | uVar26 >> 0x11) ^ (uVar26 * 0x2000 | uVar26 >> 0x13) ^ uVar26 >> 10);
    iVar30 = ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
             (uVar32 >> 6 | uVar32 * 0x4000000)) + uVar28 + ((uVar40 ^ uVar33) & uVar32 ^ uVar33) + 0xf40e3585 + uVar39;
    uVar35 = uVar35 + iVar30;
    uVar39 = ((uVar44 | uVar46) & uVar34 | uVar44 & uVar46) +
             iVar30 + ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 * 0x400 | uVar46 >> 0x16) ^
                      (uVar46 >> 2 | uVar46 * 0x40000000));
    uVar29 = uVar29 + ((uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^ uVar37 >> 3) +
                      uVar22 + ((uVar27 * 0x8000 | uVar27 >> 0x11) ^ (uVar27 * 0x2000 | uVar27 >> 0x13) ^ uVar27 >> 10);
    iVar30 = uVar33 + 0x106aa070 +
             ((uVar40 ^ uVar32) & uVar35 ^ uVar40) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar29;
    uVar34 = uVar34 + iVar30;
    uVar38 = ((uVar46 | uVar39) & uVar44 | uVar46 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar37 = ((uVar45 * 0x4000 | uVar45 >> 0x12) ^ (uVar45 >> 7 | uVar45 * 0x2000000) ^ uVar45 >> 3) +
             uVar23 + ((uVar28 * 0x8000 | uVar28 >> 0x11) ^ (uVar28 * 0x2000 | uVar28 >> 0x13) ^ uVar28 >> 10) + uVar37;
    iVar30 = uVar40 + 0x19a4c116 +
             ((uVar32 ^ uVar35) & uVar34 ^ uVar32) +
             ((uVar34 >> 6 | uVar34 * 0x4000000) ^
             (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19)) + uVar37;
    uVar44 = uVar44 + iVar30;
    uVar40 = ((uVar39 | uVar38) & uVar46 | uVar39 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar45 = ((uVar41 * 0x4000 | uVar41 >> 0x12) ^ (uVar41 >> 7 | uVar41 * 0x2000000) ^ uVar41 >> 3) +
             uVar24 + ((uVar29 * 0x8000 | uVar29 >> 0x11) ^ (uVar29 * 0x2000 | uVar29 >> 0x13) ^ uVar29 >> 10) + uVar45;
    iVar30 = uVar32 + 0x1e376c08 +
             ((uVar35 ^ uVar34) & uVar44 ^ uVar35) +
             ((uVar44 >> 6 | uVar44 * 0x4000000) ^
             (uVar44 >> 0xb | uVar44 * 0x200000) ^ (uVar44 * 0x80 | uVar44 >> 0x19)) + uVar45;
    uVar46 = uVar46 + iVar30;
    uVar31 = ((uVar40 | uVar38) & uVar39 | uVar40 & uVar38) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar41 = ((uVar42 * 0x4000 | uVar42 >> 0x12) ^ (uVar42 >> 7 | uVar42 * 0x2000000) ^ uVar42 >> 3) +
             uVar25 + ((uVar37 * 0x8000 | uVar37 >> 0x11) ^ (uVar37 * 0x2000 | uVar37 >> 0x13) ^ uVar37 >> 10) + uVar41;
    iVar30 = uVar35 + 0x2748774c +
             ((uVar34 ^ uVar44) & uVar46 ^ uVar34) +
             ((uVar46 >> 6 | uVar46 * 0x4000000) ^
             (uVar46 >> 0xb | uVar46 * 0x200000) ^ (uVar46 * 0x80 | uVar46 >> 0x19)) + uVar41;
    uVar39 = uVar39 + iVar30;
    uVar36 = ((uVar40 | uVar31) & uVar38 | uVar40 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar42 = uVar42 + ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^ uVar18 >> 3) +
                      uVar26 + ((uVar45 * 0x8000 | uVar45 >> 0x11) ^ (uVar45 * 0x2000 | uVar45 >> 0x13) ^ uVar45 >> 10);
    iVar30 = uVar34 + 0x34b0bcb5 +
             ((uVar44 ^ uVar46) & uVar39 ^ uVar44) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar42;
    uVar38 = uVar38 + iVar30;
    uVar35 = ((uVar31 | uVar36) & uVar40 | uVar31 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar18 = uVar18 + ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) +
                      uVar27 + ((uVar41 * 0x8000 | uVar41 >> 0x11) ^ (uVar41 * 0x2000 | uVar41 >> 0x13) ^ uVar41 >> 10);
    iVar30 = uVar44 + 0x391c0cb3 +
             ((uVar46 ^ uVar39) & uVar38 ^ uVar46) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar18;
    uVar40 = uVar40 + iVar30;
    uVar32 = ((uVar36 | uVar35) & uVar31 | uVar36 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar19 = (uVar20 >> 3 ^ (uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000)) +
             uVar28 + ((uVar42 * 0x8000 | uVar42 >> 0x11) ^ (uVar42 * 0x2000 | uVar42 >> 0x13) ^ uVar42 >> 10) + uVar19;
    iVar30 = uVar46 + 0x4ed8aa4a +
             ((uVar39 ^ uVar38) & uVar40 ^ uVar39) +
             ((uVar40 >> 6 | uVar40 * 0x4000000) ^
             (uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19)) + uVar19;
    uVar31 = uVar31 + iVar30;
    uVar34 = ((uVar35 | uVar32) & uVar36 | uVar35 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar20 = (uVar21 >> 3 ^ (uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000)) +
             uVar29 + ((uVar18 * 0x8000 | uVar18 >> 0x11) ^ (uVar18 * 0x2000 | uVar18 >> 0x13) ^ uVar18 >> 10) + uVar20;
    iVar30 = uVar39 + 0x5b9cca4f +
             ((uVar40 ^ uVar38) & uVar31 ^ uVar38) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar20;
    uVar36 = uVar36 + iVar30;
    uVar33 = ((uVar32 | uVar34) & uVar35 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar21 = (uVar22 >> 3 ^ (uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000)) +
             uVar37 + ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar21;
    iVar30 = uVar38 + 0x682e6ff3 +
             ((uVar40 ^ uVar31) & uVar36 ^ uVar40) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar21;
    uVar35 = uVar35 + iVar30;
    uVar38 = ((uVar34 | uVar33) & uVar32 | uVar34 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar22 = ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^ uVar23 >> 3) +
             uVar45 + ((uVar20 * 0x8000 | uVar20 >> 0x11) ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ uVar20 >> 10) + uVar22;
    iVar30 = uVar40 + 0x748f82ee +
             ((uVar31 ^ uVar36) & uVar35 ^ uVar31) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar22;
    uVar32 = uVar32 + iVar30;
    uVar45 = ((uVar33 | uVar38) & uVar34 | uVar33 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar23 = (uVar24 >> 3 ^ (uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000)) +
             uVar41 + ((uVar21 * 0x8000 | uVar21 >> 0x11) ^ (uVar21 * 0x2000 | uVar21 >> 0x13) ^ uVar21 >> 10) + uVar23;
    iVar30 = uVar31 + 0x78a5636f +
             ((uVar36 ^ uVar35) & uVar32 ^ uVar36) +
             ((uVar32 >> 6 | uVar32 * 0x4000000) ^
             (uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19)) + uVar23;
    uVar34 = uVar34 + iVar30;
    uVar31 = ((uVar45 | uVar38) & uVar33 | uVar45 & uVar38) +
             iVar30 + ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 * 0x400 | uVar45 >> 0x16) ^
                      (uVar45 >> 2 | uVar45 * 0x40000000));
    uVar24 = (uVar25 >> 3 ^ (uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000)) +
             uVar42 + ((uVar22 * 0x8000 | uVar22 >> 0x11) ^ (uVar22 * 0x2000 | uVar22 >> 0x13) ^ uVar22 >> 10) + uVar24;
    iVar30 = uVar36 + 0x84c87814 +
             ((uVar35 ^ uVar32) & uVar34 ^ uVar35) +
             ((uVar34 >> 6 | uVar34 * 0x4000000) ^
             (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19)) + uVar24;
    uVar33 = uVar33 + iVar30;
    uVar36 = ((uVar45 | uVar31) & uVar38 | uVar45 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar25 = (uVar26 >> 3 ^ (uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000)) +
             uVar18 + ((uVar23 * 0x8000 | uVar23 >> 0x11) ^ (uVar23 * 0x2000 | uVar23 >> 0x13) ^ uVar23 >> 10) + uVar25;
    iVar30 = uVar35 + 0x8cc70208 +
             ((uVar32 ^ uVar34) & uVar33 ^ uVar32) +
             ((uVar33 >> 6 | uVar33 * 0x4000000) ^
             (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19)) + uVar25;
    uVar38 = uVar38 + iVar30;
    uVar18 = ((uVar31 | uVar36) & uVar45 | uVar31 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar26 = (uVar27 >> 3 ^ (uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000)) +
             uVar19 + ((uVar24 * 0x8000 | uVar24 >> 0x11) ^ (uVar24 * 0x2000 | uVar24 >> 0x13) ^ uVar24 >> 10) + uVar26;
    iVar30 = uVar32 + 0x90befffa +
             ((uVar34 ^ uVar33) & uVar38 ^ uVar34) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar26;
    uVar45 = uVar45 + iVar30;
    uVar23 = ((uVar36 | uVar18) & uVar31 | uVar36 & uVar18) +
             iVar30 + ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 * 0x400 | uVar18 >> 0x16) ^
                      (uVar18 >> 2 | uVar18 * 0x40000000));
    uVar27 = (uVar28 >> 3 ^ (uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 >> 7 | uVar28 * 0x2000000)) +
             uVar20 + ((uVar25 * 0x8000 | uVar25 >> 0x11) ^ (uVar25 * 0x2000 | uVar25 >> 0x13) ^ uVar25 >> 10) + uVar27;
    iVar30 = uVar34 + 0xa4506ceb +
             ((uVar33 ^ uVar38) & uVar45 ^ uVar33) +
             ((uVar45 >> 6 | uVar45 * 0x4000000) ^
             (uVar45 >> 0xb | uVar45 * 0x200000) ^ (uVar45 * 0x80 | uVar45 >> 0x19)) + uVar27;
    uVar31 = uVar31 + iVar30;
    uVar20 = ((uVar18 | uVar23) & uVar36 | uVar18 & uVar23) +
             iVar30 + ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
                      (uVar23 >> 2 | uVar23 * 0x40000000));
    iVar30 = uVar33 + 0xbef9a3f7 +
             ((uVar45 ^ uVar38) & uVar31 ^ uVar38) +
             ((uVar29 * 0x4000 | uVar29 >> 0x12) ^ (uVar29 >> 7 | uVar29 * 0x2000000) ^ uVar29 >> 3) + uVar21 +
             ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19) ^
             (uVar31 >> 6 | uVar31 * 0x4000000)) +
             ((uVar26 * 0x8000 | uVar26 >> 0x11) ^ (uVar26 * 0x2000 | uVar26 >> 0x13) ^ uVar26 >> 10) + uVar28;
    uVar36 = uVar36 + iVar30;
    uVar19 = ((uVar23 | uVar20) & uVar18 | uVar23 & uVar20) +
             iVar30 + ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
                      (uVar20 >> 2 | uVar20 * 0x40000000));
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar19;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar20;
    *(arg1 + 0x14) = *(arg1 + 0x14) + uVar23;
    iVar30 = uVar38 + 0xc67178f2 +
             ((uVar45 ^ uVar31) & uVar36 ^ uVar45) +
             ((uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^ uVar37 >> 3) + uVar22 +
             ((uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19) ^
             (uVar36 >> 6 | uVar36 * 0x4000000)) +
             ((uVar27 * 0x8000 | uVar27 >> 0x11) ^ (uVar27 * 0x2000 | uVar27 >> 0x13) ^ uVar27 >> 10) + uVar29;
    *(arg1 + 0x1c) = *(arg1 + 0x1c) + uVar36;
    *(arg1 + 0x20) = *(arg1 + 0x20) + uVar31;
    *(arg1 + 0x24) = *(arg1 + 0x24) + uVar45;
    *(arg1 + 8) = ((uVar20 | uVar19) & uVar23 | uVar20 & uVar19) +
                  *(arg1 + 8) +
                  ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 * 0x400 | uVar19 >> 0x16) ^
                  (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar30;
    *(arg1 + 0x18) = *(arg1 + 0x18) + iVar30 + uVar18;
    return 0;
}


/* fcn.00019438 @ 0x19438 */

void fcn.00019438(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint8_t *puVar7;
    uint8_t *puVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    uint32_t uVar43;
    uint32_t uVar44;
    uint32_t uVar45;
    uint32_t uStack_6c;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    
    if (arg3 != 0) {
        uStack_54 = *(arg1 + 4);
        uStack_6c = *(arg1 + 8);
        uStack_5c = *(arg1 + 0x14);
        uVar33 = *(arg1 + 0x10);
        uStack_64 = *(arg1 + 0x18);
        uStack_60 = *(arg1 + 0xc);
        uStack_58 = *(arg1 + 0x1c);
        do {
            arg3 = arg3 + -1;
            puVar1 = arg2 + 0x10;
            puVar2 = arg2 + 0x14;
            puVar3 = arg2 + 0x18;
            puVar4 = arg2 + 0x1c;
            uVar38 = *arg2 << 0x18 | *(arg2 + 1) << 0x10 | *(arg2 + 2) << 8 | *(arg2 + 3);
            uVar29 = *(arg2 + 4) << 0x18 | *(arg2 + 5) << 0x10 | *(arg2 + 6) << 8 | *(arg2 + 7);
            uVar14 = *(arg2 + 8) << 0x18 | *(arg2 + 9) << 0x10 | *(arg2 + 10) << 8 | *(arg2 + 0xb);
            puVar5 = arg2 + 0xc;
            uVar15 = *puVar5 << 0x18 | *(arg2 + 0xd) << 0x10 | *(arg2 + 0xe) << 8 | *(arg2 + 0xf);
            uVar34 = *puVar1 << 0x18 | *(arg2 + 0x11) << 0x10 | *(arg2 + 0x12) << 8 | *(arg2 + 0x13);
            uVar41 = *puVar2 << 0x18 | *(arg2 + 0x15) << 0x10 | *(arg2 + 0x16) << 8 | *(arg2 + 0x17);
            uVar40 = *puVar3 << 0x18 | *(arg2 + 0x19) << 0x10 | *(arg2 + 0x1a) << 8 | *(arg2 + 0x1b);
            puVar6 = arg2 + 0x20;
            puVar7 = arg2 + 0x24;
            uVar39 = *puVar4 << 0x18 | *(arg2 + 0x1d) << 0x10 | *(arg2 + 0x1e) << 8 | *(arg2 + 0x1f);
            puVar8 = arg2 + 0x28;
            puVar9 = arg2 + 0x34;
            uVar44 = *puVar6 << 0x18 | *(arg2 + 0x21) << 0x10 | *(arg2 + 0x22) << 8 | *(arg2 + 0x23);
            uVar16 = *puVar7 << 0x18 | *(arg2 + 0x25) << 0x10 | *(arg2 + 0x26) << 8 | *(arg2 + 0x27);
            puVar10 = arg2 + 0x2c;
            uVar36 = *puVar8 << 0x18 | *(arg2 + 0x29) << 0x10 | *(arg2 + 0x2a) << 8 | *(arg2 + 0x2b);
            uVar17 = *puVar10 << 0x18 | *(arg2 + 0x2d) << 0x10 | *(arg2 + 0x2e) << 8 | *(arg2 + 0x2f);
            puVar11 = arg2 + 0x30;
            uVar18 = *puVar11 << 0x18 | *(arg2 + 0x31) << 0x10 | *(arg2 + 0x32) << 8 | *(arg2 + 0x33);
            uVar25 = *puVar9 << 0x18 | *(arg2 + 0x35) << 0x10;
            puVar12 = arg2 + 0x38;
            uVar26 = uVar25 | *(arg2 + 0x36) << 8 | *(arg2 + 0x37);
            uVar19 = *puVar12 << 0x18 | *(arg2 + 0x39) << 0x10;
            uVar20 = uVar19 | *(arg2 + 0x3a) << 8 | *(arg2 + 0x3b);
            puVar13 = arg2 + 0x3c;
            uVar21 = *puVar13 << 0x18 | *(arg2 + 0x3d) << 0x10;
            uVar22 = uVar21 | *(arg2 + 0x3e) << 8 | *(arg2 + 0x3f);
            arg2 = arg2 + 0x40;
            uVar23 = *arg1 << 0xc | *arg1 >> 0x14;
            uVar30 = uVar33 + 0x79cc4519 + uVar23;
            uVar31 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar27 = (uVar34 ^ uVar38) + (uVar31 ^ uVar23) + uStack_60 + (uStack_6c ^ uStack_54 ^ *arg1);
            uVar30 = uVar26 << 0xf | uVar25 >> 0x11;
            uVar25 = (uVar33 ^ uStack_64 ^ uStack_5c) + uStack_58 + uVar31 + uVar38;
            uVar35 = uStack_54 << 9 | uStack_54 >> 0x17;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar31 = uStack_5c >> 0xd | uStack_5c << 0x13;
            uVar23 = uVar30 ^ uVar39 ^ uVar38;
            uVar38 = uVar38 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar15 << 7 | *puVar5 >> 1) ^ uVar30 ^ uVar36 ^ uVar39;
            uVar23 = uVar27 * 0x1000 | uVar27 >> 0x14;
            uVar30 = uVar25 + 0xf3988a32 + uVar23;
            uVar30 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar42 = (uVar41 ^ uVar29) + (uVar30 ^ uVar23) + uStack_6c + (uVar27 ^ uVar35 ^ *arg1);
            uVar30 = (uVar33 ^ uVar25 ^ uVar31) + uStack_64 + uVar30 + uVar29;
            uVar24 = uVar20 << 0xf | uVar19 >> 0x11;
            uVar19 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar37 = *arg1 << 9 | *arg1 >> 0x17;
            uVar23 = uVar24 ^ uVar44 ^ uVar29;
            uVar28 = uVar27 * 0x200 | uVar27 >> 0x17;
            uVar29 = uVar29 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar34 << 7 | *puVar1 >> 1) ^ uVar24 ^ uVar17 ^ uVar44;
            uVar23 = uVar42 * 0x1000 | uVar42 >> 0x14;
            uVar24 = uVar30 + 0xe7311465 + uVar23;
            uVar32 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar24 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar21 = uVar22 << 0xf | uVar21 >> 0x11;
            uVar45 = (uVar40 ^ uVar14) + (uVar32 ^ uVar23) + uVar35 + (uVar42 ^ uVar27 ^ uVar37);
            uVar31 = (uVar25 ^ uVar30 ^ uVar19) + uVar32 + uVar14 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar23 = uVar21 ^ uVar16 ^ uVar14;
            uVar14 = uVar14 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar41 << 7 | *puVar2 >> 1) ^ uVar21 ^ uVar18 ^ uVar16;
            uVar23 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar21 = uVar31 + 0xce6228cb + uVar23;
            uVar27 = uVar21 * 0x80 | uVar21 >> 0x19;
            uVar35 = uVar42 * 0x200 | uVar42 >> 0x17;
            uVar21 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar25 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar32 = (uVar39 ^ uVar15) + (uVar27 ^ uVar23) + uVar37 + (uVar45 ^ uVar42 ^ uVar28);
            uVar19 = (uVar24 ^ uVar30 ^ uVar31) + uVar27 + uVar15 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar23 = uVar25 ^ uVar36 ^ uVar15;
            uVar15 = uVar15 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar40 << 7 | *puVar3 >> 1) ^ uVar25 ^ uVar26 ^ uVar36;
            uVar42 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar23 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar25 = uVar19 + 0x9cc45197 + uVar23;
            uVar27 = uVar25 * 0x80 | uVar25 >> 0x19;
            uVar30 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar25 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar24 = (uVar21 ^ uVar31 ^ uVar19) + uVar27 + uVar34 + uVar24;
            uVar27 = (uVar44 ^ uVar34) + (uVar27 ^ uVar23) + uVar28 + (uVar32 ^ uVar45 ^ uVar35);
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar23 = uVar30 ^ uVar17 ^ uVar34;
            uVar34 = uVar34 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar39 << 7 | *puVar4 >> 1) ^ uVar30 ^ uVar20 ^ uVar17;
            uVar37 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar23 = uVar27 * 0x1000 | uVar27 >> 0x14;
            uVar30 = uVar24 + 0x3988a32f + uVar23;
            uVar30 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar32 = (uVar16 ^ uVar41) + (uVar30 ^ uVar23) + uVar35 + (uVar27 ^ uVar32 ^ uVar42);
            uVar21 = (uVar24 ^ uVar25 ^ uVar19) + uVar30 + uVar41 + uVar21;
            uVar30 = uVar14 << 0xf | uVar14 >> 0x11;
            uVar31 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar23 = uVar30 ^ uVar18 ^ uVar41;
            uVar41 = uVar41 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar44 << 7 | *puVar6 >> 1) ^ uVar30 ^ uVar22 ^ uVar18;
            uVar23 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar19 = uVar21 + 0x7311465e + uVar23;
            uVar19 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar28 = (uVar36 ^ uVar40) + (uVar19 ^ uVar23) + uVar42 + (uVar32 ^ uVar27 ^ uVar37);
            uVar25 = (uVar24 ^ uVar21 ^ uVar31) + uVar19 + uVar40 + uVar25;
            uVar27 = uVar27 * 0x200 | uVar27 >> 0x17;
            uVar24 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar19 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar35 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar23 = uVar19 ^ uVar26 ^ uVar40;
            uVar30 = uVar28 * 0x1000 | uVar28 >> 0x14;
            uVar40 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar16 << 7 | *puVar7 >> 1) ^
                     uVar19 ^ uVar26 ^ uVar40 ^ uVar38;
            uVar23 = uVar25 + 0xe6228cbc + uVar30;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar45 = (uVar17 ^ uVar39) + (uVar23 ^ uVar30) + uVar37 + (uVar28 ^ uVar32 ^ uVar27);
            uVar30 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar31 = (uVar24 ^ uVar21 ^ uVar25) + uVar23 + uVar39 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar19 = uVar34 << 0xf | uVar34 >> 0x11;
            uVar23 = uVar19 ^ uVar20 ^ uVar39;
            uVar21 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar42 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar36 << 7 | *puVar8 >> 1) ^
                     uVar19 ^ uVar20 ^ uVar39 ^ uVar29;
            uVar23 = uVar31 + 0xcc451979 + uVar21;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar37 = uVar28 * 0x200 | uVar28 >> 0x17;
            uVar32 = (uVar18 ^ uVar44) + (uVar23 ^ uVar21) + uVar27 + (uVar45 ^ uVar28 ^ uVar35);
            uVar27 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar43 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar24 = (uVar30 ^ uVar25 ^ uVar31) + uVar23 + uVar44 + uVar24;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar19 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar23 = uVar19 ^ uVar22 ^ uVar44;
            uVar21 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar44 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar17 << 7 | *puVar10 >> 1) ^
                     uVar19 ^ uVar22 ^ uVar44 ^ uVar14;
            uVar23 = uVar24 + 0x988a32f3 + uVar21;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar39 = (uVar26 ^ uVar16) + (uVar23 ^ uVar21) + uVar35 + (uVar32 ^ uVar45 ^ uVar37);
            uVar21 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar30 = (uVar24 ^ uVar27 ^ uVar31) + uVar23 + uVar16 + uVar30;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar19 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar23 = uVar19 ^ uVar16 ^ uVar38;
            uVar28 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar18 << 7 | *puVar11 >> 1) ^
                     uVar19 ^ uVar16 ^ uVar15 ^ uVar38;
            uVar23 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar16 = uVar30 + 0x311465e7 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar35 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar25 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar37 = (uVar20 ^ uVar36) + (uVar16 ^ uVar23) + uVar37 + (uVar39 ^ uVar32 ^ uVar43);
            uVar27 = (uVar24 ^ uVar30 ^ uVar21) + uVar16 + uVar36 + uVar27;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar16 = uVar42 << 0xf | uVar42 >> 0x11;
            uVar23 = uVar16 ^ uVar36 ^ uVar29;
            uVar19 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar31 = uVar27 + 0x6228cbce + uVar19;
            uVar24 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar26 << 7 | *puVar9 >> 1) ^
                     uVar16 ^ uVar36 ^ uVar34 ^ uVar29;
            uVar23 = uVar31 * 0x80 | uVar31 >> 0x19;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar45 = (uVar22 ^ uVar17) + (uVar23 ^ uVar19) + uVar43 + (uVar37 ^ uVar39 ^ uVar35);
            uVar31 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar21 = (uVar25 ^ uVar30 ^ uVar27) + uVar23 + uVar17 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar16 = uVar44 << 0xf | uVar44 >> 0x11;
            uVar23 = uVar16 ^ uVar17 ^ uVar14;
            uVar19 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar30 = uVar21 + 0xc451979c + uVar19;
            uVar32 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar20 << 7 | *puVar12 >> 1) ^
                     uVar16 ^ uVar17 ^ uVar41 ^ uVar14;
            uVar23 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar39 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar30 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar19 = (uVar18 ^ uVar38) + (uVar23 ^ uVar19) + uVar35 + (uVar45 ^ uVar37 ^ uVar36);
            uVar25 = (uVar31 ^ uVar27 ^ uVar21) + uVar23 + uVar18 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar16 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar23 = uVar16 ^ uVar18 ^ uVar15;
            uVar17 = uVar19 * 0x1000 | uVar19 >> 0x14;
            uVar35 = uVar25 + 0x88a32f39 + uVar17;
            uVar27 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar22 << 7 | *puVar13 >> 1) ^
                     uVar16 ^ uVar18 ^ uVar40 ^ uVar15;
            uVar23 = uVar35 * 0x80 | uVar35 >> 0x19;
            uVar35 = (uVar26 ^ uVar29) + (uVar23 ^ uVar17) + uVar36 + (uVar19 ^ uVar45 ^ uVar39);
            uVar36 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar17 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar31 = (uVar25 ^ uVar30 ^ uVar21) + uVar23 + uVar26 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar23 = uVar16 ^ uVar26 ^ uVar34;
            uVar26 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar38 << 7 | uVar38 >> 0x19)
                     ^ uVar16 ^ uVar26 ^ uVar42 ^ uVar34;
            uVar21 = uVar19 * 0x200 | uVar19 >> 0x17;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar31 + 0x11465e73 + uVar23;
            uVar18 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar39 = (uVar16 ^ uVar23) + (uVar20 ^ uVar14) + uVar39 + (uVar35 ^ uVar19 ^ uVar36);
            uVar30 = (uVar25 ^ uVar31 ^ uVar17) + uVar16 + uVar20 + uVar30;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar16 = uVar32 << 0xf | uVar32 >> 0x11;
            uVar23 = uVar16 ^ uVar20 ^ uVar41;
            uVar25 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar16 ^ uVar20 ^ uVar44 ^ uVar41;
            uVar23 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar16 = uVar30 + 0x228cbce6 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar35 = (uVar16 ^ uVar23) + (uVar22 ^ uVar15) + uVar36 + (uVar39 ^ uVar35 ^ uVar21);
            uVar19 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar17 = (uVar18 ^ uVar31 ^ uVar30) + uVar16 + uVar22 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar16 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar23 = uVar16 ^ uVar22 ^ uVar40;
            uVar31 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar14 << 7 | uVar14 >> 0x19)
                     ^ uVar16 ^ uVar22 ^ uVar28 ^ uVar40;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar17 + 0x9d8a7a87 + uVar23;
            uVar20 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar16 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar22 = (uVar34 ^ uVar38) + (uVar20 ^ uVar23) + uVar21 + ((uVar35 | uVar39) & uVar37 | uVar35 & uVar39);
            uVar18 = ((uVar19 ^ uVar30) & uVar17 ^ uVar19) + uVar20 + uVar38 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar20 = uVar26 << 0xf | uVar26 >> 0x11;
            uVar23 = uVar20 ^ uVar42 ^ uVar38;
            uVar38 = uVar38 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar15 << 7 | uVar15 >> 0x19) ^ uVar20 ^ uVar24 ^ uVar42;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar23 = uVar22 * 0x1000 | uVar22 >> 0x14;
            uVar20 = uVar18 + 0x3b14f50f + uVar23;
            uVar30 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar35 = (uVar41 ^ uVar29) + (uVar30 ^ uVar23) + uVar37 + ((uVar22 | uVar35) & uVar36 | uVar22 & uVar35);
            uVar21 = uVar25 << 0xf | uVar25 >> 0x11;
            uVar20 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar19 = ((uVar16 ^ uVar17) & uVar18 ^ uVar16) + uVar30 + uVar29 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar23 = uVar21 ^ uVar44 ^ uVar29;
            uVar29 = uVar29 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar34 << 7 | uVar34 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar44;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar17 = uVar19 + 0x7629ea1e + uVar23;
            uVar37 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar30 = uVar22 * 0x200 | uVar22 >> 0x17;
            uVar36 = (uVar40 ^ uVar14) + (uVar37 ^ uVar23) + uVar36 + ((uVar35 | uVar22) & uVar39 | uVar35 & uVar22);
            uVar21 = uVar31 << 0xf | uVar31 >> 0x11;
            uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar16 = ((uVar18 ^ uVar20) & uVar19 ^ uVar20) + uVar37 + uVar14 + uVar16;
            uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
            uVar23 = uVar21 ^ uVar28 ^ uVar14;
            uVar14 = uVar14 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar41 << 7 | uVar41 >> 0x19) ^ uVar21 ^ uVar27 ^ uVar28;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar18 = uVar16 + 0xec53d43c + uVar23;
            uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar21 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar20 = ((uVar17 ^ uVar19) & uVar16 ^ uVar17) + uVar22 + uVar15 + uVar20;
            uVar39 = (uVar42 ^ uVar15) + (uVar22 ^ uVar23) + uVar39 + ((uVar36 | uVar35) & uVar30 | uVar36 & uVar35);
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar23 = uVar21 ^ uVar24 ^ uVar15;
            uVar15 = uVar15 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar40 << 7 | uVar40 >> 0x19) ^ uVar21 ^ uVar26 ^ uVar24;
            uVar23 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar19 = uVar20 + 0xd8a7a879 + uVar23;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar35 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar19 = uVar16 >> 0xd | uVar16 << 0x13;
            uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar22 = (uVar44 ^ uVar34) + (uVar35 ^ uVar23) + uVar30 + ((uVar39 | uVar36) & uVar37 | uVar39 & uVar36);
            uVar17 = ((uVar18 ^ uVar16) & uVar20 ^ uVar18) + uVar35 + uVar34 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar23 = uVar21 ^ uVar32 ^ uVar34;
            uVar34 = uVar34 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar25 ^ uVar32;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar23 = uVar22 * 0x1000 | uVar22 >> 0x14;
            uVar16 = uVar17 + 0xb14f50f3 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar35 = (uVar28 ^ uVar41) + (uVar16 ^ uVar23) + uVar37 + ((uVar22 | uVar39) & uVar45 | uVar22 & uVar39);
            uVar18 = ((uVar19 ^ uVar20) & uVar17 ^ uVar19) + uVar16 + uVar41 + uVar18;
            uVar20 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar23 = uVar16 ^ uVar27 ^ uVar41;
            uVar41 = uVar41 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar44 << 7 | uVar44 >> 0x19) ^ uVar16 ^ uVar31 ^ uVar27;
            uVar37 = uVar22 * 0x200 | uVar22 >> 0x17;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar18 + 0x629ea1e7 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar30 = (uVar24 ^ uVar40) + (uVar16 ^ uVar23) + uVar45 + ((uVar35 | uVar22) & uVar36 | uVar35 & uVar22);
            uVar19 = ((uVar17 ^ uVar20) & uVar18 ^ uVar20) + uVar16 + uVar40 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar23 = uVar16 ^ uVar26 ^ uVar40;
            uVar17 = uVar30 * 0x1000 | uVar30 >> 0x14;
            uVar40 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar28 << 7 | uVar28 >> 0x19)
                     ^ uVar16 ^ uVar26 ^ uVar40 ^ uVar38;
            uVar23 = uVar19 + 0xc53d43ce + uVar17;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar22 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar36 = (uVar32 ^ uVar42) + (uVar23 ^ uVar17) + uVar36 + ((uVar30 | uVar35) & uVar37 | uVar30 & uVar35);
            uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + uVar23 + uVar42 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar16 = uVar34 << 0xf | uVar34 >> 0x11;
            uVar23 = uVar16 ^ uVar25 ^ uVar42;
            uVar35 = uVar30 * 0x200 | uVar30 >> 0x17;
            uVar42 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar16 ^ uVar25 ^ uVar42 ^ uVar29;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar16 = uVar20 + 0x8a7a879d + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar21 = ((uVar22 ^ uVar19) & uVar20 ^ uVar22) + uVar16 + uVar44 + uVar21;
            uVar19 = (uVar27 ^ uVar44) + (uVar16 ^ uVar23) + uVar37 + ((uVar36 | uVar30) & uVar39 | uVar36 & uVar30);
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar16 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar23 = uVar16 ^ uVar31 ^ uVar44;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar44 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar32 << 7 | uVar32 >> 0x19)
                     ^ uVar16 ^ uVar31 ^ uVar44 ^ uVar14;
            uVar23 = uVar19 * 0x1000 | uVar19 >> 0x14;
            uVar16 = uVar21 + 0x14f50f3b + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar18 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar37 = (uVar26 ^ uVar28) + (uVar16 ^ uVar23) + uVar39 + ((uVar19 | uVar36) & uVar35 | uVar19 & uVar36);
            uVar22 = ((uVar17 ^ uVar20) & uVar21 ^ uVar17) + uVar16 + uVar28 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar23 = uVar16 ^ uVar28 ^ uVar38;
            uVar30 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar16 ^ uVar28 ^ uVar15 ^ uVar38;
            uVar23 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar16 = uVar22 + 0x29ea1e76 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar35 = (uVar25 ^ uVar24) + (uVar23 ^ uVar16) + uVar35 + ((uVar37 | uVar19) & uVar45 | uVar37 & uVar19);
            uVar39 = uVar19 * 0x200 | uVar19 >> 0x17;
            uVar19 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar17 = ((uVar21 ^ uVar18) & uVar22 ^ uVar18) + uVar16 + uVar24 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar16 = uVar42 << 0xf | uVar42 >> 0x11;
            uVar23 = uVar16 ^ uVar24 ^ uVar29;
            uVar24 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar26 << 7 | uVar26 >> 0x19)
                     ^ uVar16 ^ uVar24 ^ uVar34 ^ uVar29;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar17 + 0x53d43cec + uVar23;
            uVar36 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar20 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar45 = (uVar31 ^ uVar32) + (uVar16 ^ uVar23) + uVar45 + ((uVar37 | uVar35) & uVar39 | uVar37 & uVar35);
            uVar18 = ((uVar19 ^ uVar22) & uVar17 ^ uVar19) + uVar16 + uVar32 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar16 = uVar44 << 0xf | uVar44 >> 0x11;
            uVar23 = uVar16 ^ uVar32 ^ uVar14;
            uVar28 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar25 << 7 | uVar25 >> 0x19)
                     ^ uVar16 ^ uVar32 ^ uVar41 ^ uVar14;
            uVar23 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar16 = uVar18 + 0xa7a879d8 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar35 = (uVar27 ^ uVar38) + (uVar16 ^ uVar23) + uVar39 + ((uVar45 | uVar35) & uVar36 | uVar45 & uVar35);
            uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + uVar16 + uVar27 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar23 = uVar16 ^ uVar27 ^ uVar15;
            uVar27 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar31 << 7 | uVar31 >> 0x19)
                     ^ uVar16 ^ uVar27 ^ uVar40 ^ uVar15;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar19 + 0x4f50f3b1 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar43 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + uVar16 + uVar26 + uVar20;
            uVar36 = (uVar26 ^ uVar29) + (uVar16 ^ uVar23) + uVar36 + ((uVar35 | uVar45) & uVar37 | uVar35 & uVar45);
            uVar18 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar23 = uVar16 ^ uVar26 ^ uVar34;
            uVar32 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar38 << 7 | uVar38 >> 0x19)
                     ^ uVar16 ^ uVar26 ^ uVar42 ^ uVar34;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar16 = uVar20 + 0x9ea1e762 + uVar23;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar22 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar35 = (uVar25 ^ uVar14) + (uVar16 ^ uVar23) + uVar37 + ((uVar36 | uVar35) & uVar43 | uVar36 & uVar35);
            uVar21 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar16 + uVar25 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar16 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar23 = uVar16 ^ uVar25 ^ uVar41;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar19 = uVar21 + 0x3d43cec5 + uVar17;
            uVar26 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar16 ^ uVar25 ^ uVar44 ^ uVar41;
            uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar37 = (uVar31 ^ uVar15) + (uVar23 ^ uVar17) + uVar43 + ((uVar35 | uVar36) & uVar39 | uVar35 & uVar36);
            uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + uVar23 + uVar31 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar16 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar23 = uVar16 ^ uVar31 ^ uVar40;
            uVar31 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar14 << 7 | uVar14 >> 0x19)
                     ^ uVar16 ^ uVar31 ^ uVar30 ^ uVar40;
            uVar23 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar16 = uVar18 + 0x7a879d8a + uVar23;
            uVar20 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar25 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar17 = uVar32 << 0xf | uVar32 >> 0x11;
            uVar35 = (uVar34 ^ uVar38) + (uVar20 ^ uVar23) + uVar39 + ((uVar37 | uVar35) & uVar45 | uVar37 & uVar35);
            uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + uVar20 + uVar38 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar23 = uVar17 ^ uVar42 ^ uVar38;
            uVar38 = uVar38 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar15 << 7 | uVar15 >> 0x19) ^ uVar17 ^ uVar24 ^ uVar42;
            uVar36 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar17 = uVar22 + 0xf50f3b14 + uVar23;
            uVar21 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar20 = uVar26 << 0xf | uVar26 >> 0x11;
            uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar19 = ((uVar16 ^ uVar18) & uVar22 ^ uVar16) + uVar21 + uVar29 + uVar19;
            uVar21 = (uVar41 ^ uVar29) + (uVar21 ^ uVar23) + uVar45 + ((uVar35 | uVar37) & uVar25 | uVar35 & uVar37);
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar23 = uVar20 ^ uVar44 ^ uVar29;
            uVar29 = uVar29 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar34 << 7 | uVar34 >> 0x19) ^ uVar20 ^ uVar28 ^ uVar44;
            uVar23 = uVar21 * 0x1000 | uVar21 >> 0x14;
            uVar18 = uVar19 + 0xea1e7629 + uVar23;
            uVar39 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar25 = (uVar40 ^ uVar14) + (uVar39 ^ uVar23) + uVar25 + ((uVar21 | uVar35) & uVar36 | uVar21 & uVar35);
            uVar20 = uVar31 << 0xf | uVar31 >> 0x11;
            uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar16 = ((uVar22 ^ uVar17) & uVar19 ^ uVar17) + uVar39 + uVar14 + uVar16;
            uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
            uVar23 = uVar20 ^ uVar30 ^ uVar14;
            uVar14 = uVar14 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar41 << 7 | uVar41 >> 0x19) ^ uVar20 ^ uVar27 ^ uVar30;
            uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
            uVar23 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar20 = uVar16 + 0xd43cec53 + uVar23;
            uVar35 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar36 = (uVar42 ^ uVar15) + (uVar35 ^ uVar23) + uVar36 + ((uVar25 | uVar21) & uVar37 | uVar25 & uVar21);
            uVar21 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar20 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar17 = ((uVar18 ^ uVar19) & uVar16 ^ uVar18) + uVar35 + uVar15 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar23 = uVar21 ^ uVar24 ^ uVar15;
            uVar15 = uVar15 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar40 << 7 | uVar40 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar24;
            uVar35 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar19 = uVar17 + 0xa879d8a7 + uVar23;
            uVar39 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar25 = (uVar44 ^ uVar34) + (uVar39 ^ uVar23) + uVar37 + ((uVar36 | uVar25) & uVar22 | uVar36 & uVar25);
            uVar19 = uVar16 >> 0xd | uVar16 << 0x13;
            uVar18 = ((uVar20 ^ uVar16) & uVar17 ^ uVar20) + uVar39 + uVar34 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar23 = uVar21 ^ uVar28 ^ uVar34;
            uVar34 = uVar34 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar26 ^ uVar28;
            uVar23 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar16 = uVar18 + 0x50f3b14f + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar37 = (uVar30 ^ uVar41) + (uVar16 ^ uVar23) + uVar22 + ((uVar25 | uVar36) & uVar35 | uVar25 & uVar36);
            uVar20 = ((uVar19 ^ uVar17) & uVar18 ^ uVar19) + uVar16 + uVar41 + uVar20;
            uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
            uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar23 = uVar16 ^ uVar27 ^ uVar41;
            uVar41 = uVar41 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar44 << 7 | uVar44 >> 0x19) ^ uVar16 ^ uVar31 ^ uVar27;
            uVar36 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar23 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar16 = uVar20 + 0xa1e7629e + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar22 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar35 = (uVar24 ^ uVar40) + (uVar16 ^ uVar23) + uVar35 + ((uVar37 | uVar25) & uVar45 | uVar37 & uVar25);
            uVar19 = ((uVar18 ^ uVar21) & uVar20 ^ uVar21) + uVar16 + uVar40 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar23 = uVar16 ^ uVar32 ^ uVar40;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar23 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar30 << 7 | uVar30 >> 0x19)
                     ^ uVar16 ^ uVar32 ^ uVar40 ^ uVar38;
            uVar16 = uVar19 + 0x43cec53d + uVar17;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar39 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar25 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar40 = (uVar28 ^ uVar42) + (uVar16 ^ uVar17) + uVar45 + ((uVar35 | uVar37) & uVar36 | uVar35 & uVar37);
            uVar21 = ((uVar22 ^ uVar20) & uVar19 ^ uVar22) + uVar16 + uVar42 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar17 = uVar34 << 0xf | uVar34 >> 0x11;
            uVar16 = uVar17 ^ uVar26 ^ uVar42;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar45 = (uVar16 << 0xf | uVar16 >> 0x11) ^ (uVar16 >> 9 | uVar16 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar17 ^ uVar26 ^ uVar42 ^ uVar29;
            uVar16 = uVar40 * 0x1000 | uVar40 >> 0x14;
            uVar17 = uVar21 + 0x879d8a7a + uVar16;
            uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar20 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar35 = (uVar27 ^ uVar44) + (uVar17 ^ uVar16) + uVar36 + ((uVar40 | uVar35) & uVar39 | uVar40 & uVar35);
            uVar22 = ((uVar25 ^ uVar19) & uVar21 ^ uVar25) + uVar17 + uVar44 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar17 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar16 = uVar17 ^ uVar31 ^ uVar44;
            uVar18 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = (uVar16 << 0xf | uVar16 >> 0x11) ^ (uVar16 >> 9 | uVar16 << 0x17) ^ (uVar28 << 7 | uVar28 >> 0x19)
                     ^ uVar17 ^ uVar31 ^ uVar44 ^ uVar14;
            uVar17 = uVar22 + 0xf3b14f5 + uVar18;
            uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar42 = uVar40 * 0x200 | uVar40 >> 0x17;
            uVar19 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar39 = (uVar32 ^ uVar30) + (uVar17 ^ uVar18) + uVar39 + ((uVar35 | uVar40) & uVar37 | uVar35 & uVar40);
            uVar25 = ((uVar20 ^ uVar21) & uVar22 ^ uVar20) + uVar17 + uVar30 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar18 = uVar23 << 0xf | uVar23 >> 0x11;
            uVar17 = uVar18 ^ uVar30 ^ uVar38;
            uVar30 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar18 ^ uVar30 ^ uVar15 ^ uVar38;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar18 = uVar25 + 0x1e7629ea + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar40 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar35 = (uVar26 ^ uVar24) + (uVar18 ^ uVar17) + uVar37 + ((uVar39 | uVar35) & uVar42 | uVar39 & uVar35);
            uVar21 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar20 = ((uVar22 ^ uVar19) & uVar25 ^ uVar19) + uVar18 + uVar24 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar18 = uVar45 << 0xf | uVar45 >> 0x11;
            uVar17 = uVar18 ^ uVar24 ^ uVar29;
            uVar24 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar32 << 7 | uVar32 >> 0x19)
                     ^ uVar18 ^ uVar24 ^ uVar34 ^ uVar29;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar18 = uVar20 + 0x3cec53d4 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar22 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar39 = (uVar31 ^ uVar28) + (uVar18 ^ uVar17) + uVar42 + ((uVar35 | uVar39) & uVar40 | uVar35 & uVar39);
            uVar19 = ((uVar21 ^ uVar25) & uVar20 ^ uVar21) + uVar18 + uVar28 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar18 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar17 = uVar18 ^ uVar28 ^ uVar14;
            uVar28 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar26 << 7 | uVar26 >> 0x19)
                     ^ uVar18 ^ uVar28 ^ uVar41 ^ uVar14;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar18 = uVar19 + 0x79d8a7a8 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar25 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar35 = (uVar27 ^ uVar38) + (uVar18 ^ uVar17) + uVar40 + ((uVar39 | uVar35) & uVar36 | uVar39 & uVar35);
            uVar21 = ((uVar22 ^ uVar20) & uVar19 ^ uVar22) + uVar18 + uVar27 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar18 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar17 = uVar18 ^ uVar27 ^ uVar15;
            uVar40 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar31 << 7 | uVar31 >> 0x19)
                     ^ uVar18 ^ uVar27 ^ uVar23 ^ uVar15;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar18 = uVar21 + 0xf3b14f50 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar42 = (uVar32 ^ uVar29) + (uVar18 ^ uVar17) + uVar36 + ((uVar35 | uVar39) & uVar37 | uVar35 & uVar39);
            uVar20 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar22 = ((uVar25 ^ uVar19) & uVar21 ^ uVar25) + uVar18 + uVar32 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar18 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar17 = uVar18 ^ uVar32 ^ uVar34;
            uVar27 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar38 << 7 | uVar38 >> 0x19)
                     ^ uVar18 ^ uVar32 ^ uVar45 ^ uVar34;
            uVar17 = uVar42 * 0x1000 | uVar42 >> 0x14;
            uVar18 = uVar22 + 0xe7629ea1 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar19 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar35 = (uVar26 ^ uVar14) + (uVar18 ^ uVar17) + uVar37 + ((uVar42 | uVar35) & uVar36 | uVar42 & uVar35);
            uVar25 = ((uVar21 ^ uVar20) & uVar22 ^ uVar20) + uVar18 + uVar26 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar18 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar17 = uVar18 ^ uVar26 ^ uVar41;
            uVar32 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar18 ^ uVar26 ^ uVar16 ^ uVar41;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar18 = uVar25 + 0xcec53d43 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar44 = uVar42 * 0x200 | uVar42 >> 0x17;
            uVar21 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar26 = (uVar31 ^ uVar15) + (uVar18 ^ uVar17) + uVar36 + ((uVar35 | uVar42) & uVar39 | uVar35 & uVar42);
            uVar20 = ((uVar19 ^ uVar22) & uVar25 ^ uVar19) + uVar18 + uVar31 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar18 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar17 = uVar18 ^ uVar31 ^ uVar23;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar36 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar14 << 7 | uVar14 >> 0x19)
                     ^ uVar18 ^ uVar31 ^ uVar30 ^ uVar23;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar18 = uVar20 + 0x9d8a7a87 + uVar17;
            uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar18 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar35 = (uVar34 ^ uVar38) + (uVar22 ^ uVar17) + uVar39 + ((uVar26 | uVar35) & uVar44 | uVar26 & uVar35);
            uVar19 = ((uVar21 ^ uVar25) & uVar20 ^ uVar21) + uVar22 + uVar38 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar22 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar17 = uVar22 ^ uVar45 ^ uVar38;
            uVar38 = uVar38 ^ (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^
                              (uVar15 << 7 | uVar15 >> 0x19) ^ uVar22 ^ uVar24 ^ uVar45;
            uVar25 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar22 = uVar19 + 0x3b14f50f + uVar17;
            uVar31 = uVar22 * 0x80 | uVar22 >> 0x19;
            uVar22 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar26 = (uVar41 ^ uVar29) + (uVar31 ^ uVar17) + uVar44 + ((uVar35 | uVar26) & uVar37 | uVar35 & uVar26);
            uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + uVar31 + uVar29 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar20 = uVar21 + 0x7629ea1e + uVar17;
            uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar31 = (uVar23 ^ uVar14) + (uVar20 ^ uVar17) + uVar37 + ((uVar26 | uVar35) & uVar25 | uVar26 & uVar35);
            uVar18 = ((uVar19 ^ uVar22) & uVar21 ^ uVar22) + uVar20 + uVar14 + uVar18;
            uVar19 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar17 = uVar31 * 0x1000 | uVar31 >> 0x14;
            uVar35 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar20 = uVar18 + 0xec53d43c + uVar17;
            uVar37 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar25 = (uVar45 ^ uVar15) + (uVar37 ^ uVar17) + uVar25 + ((uVar31 | uVar26) & uVar39 | uVar31 & uVar26);
            uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + uVar37 + uVar15 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar26 = uVar31 * 0x200 | uVar31 >> 0x17;
            uVar17 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar21 = uVar22 + 0xd8a7a879 + uVar17;
            uVar37 = uVar21 * 0x80 | uVar21 >> 0x19;
            uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar19 = ((uVar20 ^ uVar18) & uVar22 ^ uVar20) + uVar37 + uVar34 + uVar19;
            uVar39 = (uVar16 ^ uVar34) + (uVar37 ^ uVar17) + uVar39 + ((uVar25 | uVar31) & uVar35 | uVar25 & uVar31);
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar18 = uVar19 + 0xb14f50f3 + uVar17;
            uVar37 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar31 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar35 = (uVar30 ^ uVar41) + (uVar37 ^ uVar17) + uVar35 + ((uVar25 | uVar39) & uVar26 | uVar25 & uVar39);
            uVar20 = ((uVar21 ^ uVar22) & uVar19 ^ uVar21) + uVar37 + uVar41 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar42 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar22 = uVar20 + 0x629ea1e7 + uVar17;
            uVar25 = uVar22 * 0x80 | uVar22 >> 0x19;
            uVar22 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar26 = (uVar24 ^ uVar23) + (uVar25 ^ uVar17) + uVar26 + ((uVar35 | uVar39) & uVar31 | uVar35 & uVar39);
            uVar21 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar25 + uVar23 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar19 = uVar21 + 0xc53d43ce + uVar17;
            uVar19 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar25 = (uVar28 ^ uVar45) + (uVar19 ^ uVar17) + uVar31 + ((uVar26 | uVar35) & uVar42 | uVar26 & uVar35);
            uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + uVar19 + uVar45 + uVar18;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar17 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar35 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar20 = uVar18 + 0x8a7a879d + uVar17;
            uVar31 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar39 = (uVar40 ^ uVar16) + (uVar31 ^ uVar17) + uVar42 + ((uVar25 | uVar26) & uVar37 | uVar25 & uVar26);
            uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + uVar31 + uVar16 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar31 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar21 = uVar22 + 0x14f50f3b + uVar17;
            uVar26 = uVar21 * 0x80 | uVar21 >> 0x19;
            uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar42 = (uVar27 ^ uVar30) + (uVar26 ^ uVar17) + uVar37 + ((uVar39 | uVar25) & uVar35 | uVar39 & uVar25);
            uVar19 = ((uVar20 ^ uVar18) & uVar22 ^ uVar20) + uVar26 + uVar30 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar17 = uVar42 * 0x1000 | uVar42 >> 0x14;
            uVar18 = uVar19 + 0x29ea1e76 + uVar17;
            uVar25 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar37 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar26 = (uVar32 ^ uVar24) + (uVar25 ^ uVar17) + uVar35 + ((uVar42 | uVar39) & uVar31 | uVar42 & uVar39);
            uVar20 = ((uVar22 ^ uVar21) & uVar19 ^ uVar21) + uVar25 + uVar24 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar39 = uVar42 * 0x200 | uVar42 >> 0x17;
            uVar22 = uVar20 + 0x53d43cec + uVar17;
            uVar25 = uVar22 * 0x80 | uVar22 >> 0x19;
            uVar22 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar31 = (uVar36 ^ uVar28) + (uVar25 ^ uVar17) + uVar31 + ((uVar26 | uVar42) & uVar37 | uVar26 & uVar42);
            uVar21 = ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + uVar25 + uVar28 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar17 = uVar31 * 0x1000 | uVar31 >> 0x14;
            uVar19 = uVar21 + 0xa7a879d8 + uVar17;
            uVar19 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar37 = (uVar40 ^ uVar38) + (uVar19 ^ uVar17) + uVar37 + ((uVar31 | uVar26) & uVar39 | uVar31 & uVar26);
            uVar25 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar35 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + uVar19 + uVar40 + uVar18;
            uVar20 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar19 = uVar32 << 0xf | uVar32 >> 0x11;
            uVar17 = uVar19 ^ uVar16 ^ uVar29;
            uVar26 = uVar18 + 0x4f50f3b1 + uVar20;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar42 = uVar31 * 0x200 | uVar31 >> 0x17;
            uVar17 = (uVar26 ^ uVar20) +
                     ((uVar37 | uVar31) & uVar35 | uVar37 & uVar31) + uVar39 +
                     ((uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar34 << 7 | uVar34 >> 0x19)
                      ^ uVar19 ^ uVar27 ^ uVar28 ^ uVar16 ^ uVar29);
            uVar19 = uVar17 * 0x1000 | uVar17 >> 0x14;
            uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar22 = ((uVar25 ^ uVar21) & uVar18 ^ uVar25) + uVar26 + uVar27 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar29 = uVar36 << 0xf | uVar36 >> 0x11;
            uVar34 = uVar29 ^ uVar30 ^ uVar14;
            uVar20 = uVar22 + 0x9ea1e762 + uVar19;
            uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar21 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar41 = (uVar20 ^ uVar19) +
                     ((uVar17 | uVar37) & uVar42 | uVar17 & uVar37) + uVar35 +
                     ((uVar34 << 0xf | uVar34 >> 0x11) ^ (uVar34 >> 9 | uVar34 << 0x17) ^ (uVar41 << 7 | uVar41 >> 0x19)
                      ^ uVar29 ^ uVar32 ^ uVar40 ^ uVar30 ^ uVar14);
            uVar19 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar14 = uVar41 * 0x1000 | uVar41 >> 0x14;
            uVar25 = ((uVar18 ^ uVar16) & uVar22 ^ uVar16) + uVar20 + uVar32 + uVar25;
            uVar34 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar29 = uVar34 ^ uVar24 ^ uVar15;
            uVar18 = uVar25 + 0x3d43cec5 + uVar14;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar16 = ((uVar19 ^ uVar22) & uVar25 ^ uVar19) + uVar18 + uVar36 + uVar16;
            uStack_54 = uStack_54 ^ uVar41;
            *arg1 = *arg1 ^ (uVar18 ^ uVar14) +
                            ((uVar41 | uVar17) & uVar21 | uVar41 & uVar17) + uVar42 +
                            ((uVar29 << 0xf | uVar29 >> 0x11) ^ (uVar29 >> 9 | uVar29 << 0x17) ^
                             (uVar23 << 7 | uVar23 >> 0x19) ^ uVar34 ^ uVar36 ^ uVar27 ^ uVar24 ^ uVar15);
            *(arg1 + 4) = uStack_54;
            uStack_6c = uStack_6c ^ (uVar17 * 0x200 | uVar17 >> 0x17);
            *(arg1 + 8) = uStack_6c;
            uStack_60 = uStack_60 ^ uVar21;
            *(arg1 + 0xc) = uStack_60;
            uStack_5c = uStack_5c ^ uVar25;
            uVar33 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar33 ^ uVar16;
            *(arg1 + 0x14) = uStack_5c;
            uStack_64 = uStack_64 ^ (uVar22 >> 0xd | uVar22 << 0x13);
            *(arg1 + 0x18) = uStack_64;
            uStack_58 = uStack_58 ^ uVar19;
            *(arg1 + 0x10) = uVar33;
            *(arg1 + 0x1c) = uStack_58;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.0001bec4 @ 0x1bec4 */

ulong fcn.0001bec4(int64_t arg1,int64_t arg2)

{
    int64_t *arg2_00;
    uchar *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t aiStack_2f0 [4];
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [8];
    uint64_t auStack_2a8 [14];
    uint64_t auStack_238 [66];
    
    piVar3 = arg1 + 8;
    piVar5 = aiStack_2f0;
    iVar12 = 8;
    do {
        piVar5 = piVar5 + 1;
        arg2_00 = (piVar3 - (aiStack_2f0 + 1)) + piVar5;
        if (piVar5 != arg2_00) {
            section..text(piVar5,arg2_00,8);
        }
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar1 = arg2 + 2;
    iVar12 = 0x10;
    do {
        *(puVar1 + auStack_2b0 + (6 - arg2)) =
             CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(puVar1[-2],puVar1[-1]),*puVar1),puVar1[1]
                                                         ),puVar1[2]),puVar1[3]),puVar1[4]),puVar1[5]);
        puVar1 = puVar1 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar8 = auStack_238;
    iVar12 = 0x40;
    do {
        uVar4 = puVar8[-0xd];
        uVar6 = *puVar8;
        puVar8[2] = ((uVar4 >> 8 | uVar4 << 0x38) ^ (uVar4 >> 1 | ((uVar4 & 1) != 0) << 0x3f) ^ uVar4 >> 7) +
                    ((uVar6 >> 0x13 | uVar6 << 0x2d) ^ (uVar6 << 3 | uVar6 >> 0x3d) ^ uVar6 >> 6) + puVar8[-0xe] +
                    puVar8[-5];
        puVar8 = puVar8 + 1;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    iVar12 = 0;
    do {
        iVar2 = ((uStack_2c8 << 0x17 | uStack_2c8 >> 0x29) ^ (uStack_2c8 >> 0x12 | uStack_2c8 << 0x2e) ^
                (uStack_2c8 >> 0xe | uStack_2c8 << 0x32)) + ((uStack_2c0 ^ uStack_2b8) & uStack_2c8 ^ uStack_2b8) +
                *(iVar12 + 0x1e5e0) + *(auStack_2a8 + iVar12) + auStack_2b0;
        uVar6 = uStack_2d0 + iVar2;
        uVar7 = ((aiStack_2f0[2] | aiStack_2f0[1]) & aiStack_2f0[3] | aiStack_2f0[2] & aiStack_2f0[1]) +
                iVar2 + ((aiStack_2f0[1] << 0x1e | aiStack_2f0[1] >> 0x22) ^
                         (aiStack_2f0[1] >> 0x1c | aiStack_2f0[1] << 0x24) ^
                        (aiStack_2f0[1] << 0x19 | aiStack_2f0[1] >> 0x27));
        iVar2 = ((uVar6 * 0x800000 | uVar6 >> 0x29) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32))
                + ((uStack_2c0 ^ uStack_2c8) & uVar6 ^ uStack_2c0) + *(iVar12 + 0x1e5e8) + *(auStack_2a8 + iVar12 + 8) +
                uStack_2b8;
        uVar4 = aiStack_2f0[3] + iVar2;
        uVar9 = ((aiStack_2f0[1] | uVar7) & aiStack_2f0[2] | aiStack_2f0[1] & uVar7) +
                iVar2 + ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                        (uVar7 * 0x2000000 | uVar7 >> 0x27));
        iVar2 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^ (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32))
                + ((uVar6 ^ uStack_2c8) & uVar4 ^ uStack_2c8) + *(auStack_2a8 + iVar12 + 0x10) + *(iVar12 + 0x1e5f0) +
                uStack_2c0;
        uVar13 = aiStack_2f0[2] + iVar2;
        uVar10 = ((uVar7 | uVar9) & aiStack_2f0[1] | uVar7 & uVar9) +
                 iVar2 + ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                         (uVar9 * 0x2000000 | uVar9 >> 0x27));
        iVar2 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
                (uVar13 >> 0xe | uVar13 << 0x32)) + ((uVar4 ^ uVar6) & uVar13 ^ uVar6) + *(auStack_2a8 + iVar12 + 0x18)
                + *(iVar12 + 0x1e5f8) + uStack_2c8;
        uVar14 = aiStack_2f0[1] + iVar2;
        uVar11 = ((uVar10 | uVar9) & uVar7 | uVar10 & uVar9) +
                 iVar2 + ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                         (uVar10 * 0x2000000 | uVar10 >> 0x27));
        iVar2 = ((uVar14 * 0x800000 | uVar14 >> 0x29) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
                (uVar14 >> 0xe | uVar14 << 0x32)) + ((uVar4 ^ uVar13) & uVar14 ^ uVar4) + *(auStack_2a8 + iVar12 + 0x20)
                + *(iVar12 + 0x1e600) + uVar6;
        auStack_2b0 = uVar7 + iVar2;
        uStack_2d0 = ((uVar10 | uVar11) & uVar9 | uVar10 & uVar11) +
                     iVar2 + ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                             (uVar11 * 0x2000000 | uVar11 >> 0x27));
        iVar2 = ((auStack_2b0 * 0x800000 | auStack_2b0 >> 0x29) ^ (auStack_2b0 >> 0x12 | auStack_2b0 << 0x2e) ^
                (auStack_2b0 >> 0xe | auStack_2b0 << 0x32)) + ((uVar13 ^ uVar14) & auStack_2b0 ^ uVar13) +
                *(iVar12 + 0x1e608) + *(auStack_2a8 + iVar12 + 0x28) + uVar4;
        uStack_2b8 = uVar9 + iVar2;
        aiStack_2f0[3] =
             ((uStack_2d0 | uVar11) & uVar10 | uStack_2d0 & uVar11) +
             iVar2 + ((uStack_2d0 * 0x40000000 | uStack_2d0 >> 0x22) ^ (uStack_2d0 >> 0x1c | uStack_2d0 << 0x24) ^
                     (uStack_2d0 * 0x2000000 | uStack_2d0 >> 0x27));
        iVar2 = ((uStack_2b8 * 0x800000 | uStack_2b8 >> 0x29) ^ (uStack_2b8 >> 0x12 | uStack_2b8 << 0x2e) ^
                (uStack_2b8 >> 0xe | uStack_2b8 << 0x32)) + ((uVar14 ^ auStack_2b0) & uStack_2b8 ^ uVar14) +
                *(iVar12 + 0x1e610) + *(auStack_2a8 + iVar12 + 0x30) + uVar13;
        uStack_2c0 = uVar10 + iVar2;
        aiStack_2f0[2] =
             ((aiStack_2f0[3] | uStack_2d0) & uVar11 | aiStack_2f0[3] & uStack_2d0) +
             iVar2 + ((aiStack_2f0[3] * 0x40000000 | aiStack_2f0[3] >> 0x22) ^
                      (aiStack_2f0[3] >> 0x1c | aiStack_2f0[3] << 0x24) ^
                     (aiStack_2f0[3] * 0x2000000 | aiStack_2f0[3] >> 0x27));
        piVar5 = iVar12 + 0x1e618;
        iVar2 = iVar12 + 0x38;
        iVar12 = iVar12 + 0x40;
        iVar2 = ((uStack_2c0 * 0x800000 | uStack_2c0 >> 0x29) ^ (uStack_2c0 >> 0x12 | uStack_2c0 << 0x2e) ^
                (uStack_2c0 >> 0xe | uStack_2c0 << 0x32)) + ((auStack_2b0 ^ uStack_2b8) & uStack_2c0 ^ auStack_2b0) +
                *piVar5 + *(auStack_2a8 + iVar2) + uVar14;
        uStack_2c8 = uVar11 + iVar2;
        aiStack_2f0[1] =
             ((aiStack_2f0[3] | aiStack_2f0[2]) & uStack_2d0 | aiStack_2f0[3] & aiStack_2f0[2]) +
             iVar2 + ((aiStack_2f0[2] * 0x40000000 | aiStack_2f0[2] >> 0x22) ^
                      (aiStack_2f0[2] >> 0x1c | aiStack_2f0[2] << 0x24) ^
                     (aiStack_2f0[2] * 0x2000000 | aiStack_2f0[2] >> 0x27));
    } while (iVar12 < 0x280);
    iVar12 = 8;
    do {
        *piVar3 = *piVar3 + *((aiStack_2f0 - arg1) + piVar3);
        piVar3 = piVar3 + 1;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    return 0;
}


/* fcn.00015734 @ 0x15734 */

int64_t fcn.00015734(int64_t arg1,int64_t arg2)

{
    fcn.000156d4((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.0001c7e4 @ 0x1c7e4 */

uint8_t fcn.0001c7e4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    unkbyte7 Var2;
    int iVar3;
    int iVar4;
    
    Var2 = arg2 >> 8;
    iVar4 = 30000;
    uVar1 = arg2;
    while( true ) {
        iVar3 = 5;
        do {
            fcn.00015734(0x1e,CONCAT71(Var2,uVar1));
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        if (*arg1 < '\0') {
            return *arg1 & arg2;
        }
    }
    return 0;
}


/* fcn.0001c840 @ 0x1c840 */

void fcn.0001c840(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = 0x1d4c;
    do {
        iVar2 = 5;
        do {
            fcn.00015734(0x1e,arg1);
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar1 = iVar1 + -1;
    } while ((*0xfed40019 == 0) && (iVar1 != 0));
    return;
}


/* fcn.0001c9a8 @ 0x1c9a8 */

ulong fcn.0001c9a8(ulong param_1,ulong param_2)

{
    char cVar1;
    ulong uVar2;
    uchar uVar3;
    unkbyte7 Var4;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    
    Var4 = param_2 >> 8;
    uVar3 = 0x20;
    cVar1 = fcn.0001c7e4(0xfed40000,CONCAT71(Var4,0x20));
    uVar2 = 0;
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000013;
    }
    else {
        iVar5 = 2;
        do {
            iVar7 = 30000;
            *0xfed40018 = 0x40;
            do {
                iVar7 = iVar7 + -1;
                iVar6 = 5;
                do {
                    fcn.00015734(0x1e,CONCAT71(Var4,uVar3));
                    iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
            } while (((*0xfed40018 & 0x40) == 0) && (iVar7 != 0));
        } while ((iVar7 == 0) && (iVar5 = iVar5 + -1, iVar5 != 0));
        if (iVar7 == 0) {
            uVar2 = 0x8000000000000007;
        }
    }
    return uVar2;
}


/* fcn.0001ca50 @ 0x1ca50 */

uint64_t fcn.0001ca50(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint64_t extraout_RAX;
    uint16_t uVar3;
    uint64_t noname_0_00;
    uchar uVar4;
    unkbyte7 Var5;
    int64_t iVar6;
    
    cVar1 = arg3;
    uVar4 = arg1;
    Var5 = arg1 >> 8;
    noname_0_00 = 0;
    if (arg2 == 0) {
        return -(cVar1 != '\0') & 0x8000000000000002;
    }
    if ((*0xfed40000 & 0x20) != 0) {
        iVar6 = arg2 + -1;
        if (cVar1 == '\0') {
            iVar6 = arg2;
        }
        while (iVar6 != 0) {
            fcn.0001c840(noname_0_00,CONCAT71(Var5,uVar4));
            uVar3 = extraout_RAX;
            noname_0_00 = extraout_RAX & 0xffff;
            if (uVar3 == 0) {
                return 0x8000000000000012;
            }
            while (uVar3 != 0) {
                if (iVar6 == 0) goto code_r0x0001caee;
                *0xfed40024 = *arg1;
                iVar6 = iVar6 + -1;
                arg1 = arg1 + 1;
                uVar3 = noname_0_00 - 1;
                noname_0_00 = uVar3;
            }
        }
code_r0x0001caee:
        if (cVar1 == '\0') {
            return 0;
        }
        if ((noname_0_00 == 0) && (iVar2 = fcn.0001c840(noname_0_00,CONCAT71(Var5,uVar4)), iVar2 == 0)) {
            return 0x8000000000000012;
        }
        cVar1 = fcn.0001c7e4(0xfed40018,CONCAT71(Var5,8));
        if (cVar1 != '\0') {
            *0xfed40024 = *arg1;
            cVar1 = fcn.0001c7e4(0xfed40018,CONCAT71(Var5,8));
            if (cVar1 == '\0') {
                *0xfed40018 = 0x20;
                return 0;
            }
        }
    }
    return 0x8000000000000015;
}


/* fcn.0001cb60 @ 0x1cb60 */

uint64_t fcn.0001cb60(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    ulong noname_0_00;
    uint in_register_00000014;
    uchar *puVar3;
    uchar *puVar4;
    
    puVar4 = *arg2 + CONCAT44(in_register_00000014,arg1);
    puVar3 = CONCAT44(in_register_00000014,arg1);
    if (CONCAT44(in_register_00000014,arg1) < puVar4) {
        while( true ) {
            arg1 = CONCAT31(arg1 >> 8,0x10);
            noname_0_00 = 0xfed40018;
            cVar1 = fcn.0001c7e4(0xfed40018,CONCAT44(in_register_00000014,arg1));
            if (cVar1 == '\0') break;
            iVar2 = fcn.0001c840(noname_0_00,CONCAT44(in_register_00000014,arg1));
            if (iVar2 == 0) {
                return 0x8000000000000012;
            }
            do {
                if (puVar4 <= puVar3) goto code_r0x0001cbda;
                arg1 = CONCAT31(arg1 >> 8,0x10);
                cVar1 = fcn.0001c7e4(0xfed40018,CONCAT44(in_register_00000014,arg1));
                if (cVar1 == '\0') break;
                *puVar3 = *0xfed40024;
                puVar3 = puVar3 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            if (puVar4 <= puVar3) break;
        }
    }
code_r0x0001cbda:
    *arg2 = puVar3 + (*arg2 - puVar4);
    cVar1 = fcn.0001c7e4(0xfed40018,CONCAT44(in_register_00000014,CONCAT31(arg1 >> 8,0x10)));
    return -(cVar1 != '\0') & 0x8000000000000005;
}


/* fcn.0001ddf4 @ 0x1ddf4 */

ulong fcn.0001ddf4(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    
    if ((*0xfed30800 & 0x70000) != 0x70000) {
        return 0x800000000000000e;
    }
    iVar1 = fcn.00015688(0x1e2e0);
    if (iVar1 == 0) {
        uVar2 = *0xfed40000;
    }
    else {
        uVar2 = *(iVar1 + 0x18);
    }
    if (arg1 != 0) {
        if (arg1 == 1) {
            if (iVar1 == 0) {
                return 0;
            }
            *(iVar1 + 0x18) = *0xfed40000;
            return 0;
        }
        if (arg1 != 2) {
            return 0;
        }
        iVar1 = fcn.00015658();
        if (*(iVar1 + 0xc) == 0x11) {
            return 0;
        }
    }
    if (((uVar2 & 0x1c) == 0) && ((uVar2 & 2) != 0)) {
        *arg2 = 1;
    }
    return 0;
}


/* fcn.0001cd20 @ 0x1cd20 */

int64_t fcn.0001cd20(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uStackX_8;
    char acStackX_10 [8];
    
    iVar2 = 0;
    uStackX_8 = arg1 & 0xffffffffffffff00;
    iVar1 = fcn.0001ddf4(0,arg2,&uStackX_8);
    if ((iVar1 < 0) || (uStackX_8 == '\0')) {
        do {
            if (((*0xfed40000 & 0x1c) == 0) && (((*0xfed40000 & 2) != 0 && (*0xfed40000 < '\0')))) {
                acStackX_10[0] = '\0';
                iVar1 = fcn.0001ddf4(1,arg2,acStackX_10);
                if ((-1 < iVar1) && (acStackX_10[0] != '\0')) {
                    return iVar1;
                }
                return 0;
            }
            *0xfed40008 = 1;
            fcn.00015734(0x32,arg2);
            iVar2 = iVar2 + 1;
        } while (iVar2 != 15000);
        iVar1 = -0x7ffffffffffffff9;
    }
    return iVar1;
}


/* fcn.0001cdc4 @ 0x1cdc4 */

ulong fcn.0001cdc4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = 0;
    if (*0xfed4004c != 0) {
        do {
            fcn.00015734(0x32,arg1);
            if (iVar1 == 1200000) {
                return 0x8000000000000007;
            }
            iVar1 = iVar1 + 1;
        } while (*0xfed4004c != 0);
        if (iVar1 == 1200000) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.0001ce20 @ 0x1ce20 */

int64_t fcn.0001ce20(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t noname_0;
    int64_t arg2_00;
    uint64_t arg1_00;
    
    noname_0 = arg2 & 0xffffffff;
    if ((*0xfed40030 - 1 < 0xfffffffe) && ((*0xfed40030 & 0x4000) != 0)) {
        arg2_00 = arg2;
        iVar1 = fcn.0001cd20(0x4000,arg2);
        if (-1 < iVar1) {
            iVar1 = 0;
            if (((*0xfed40044 & 1) != 0) || ((*0xfed40044 & 2) != 0)) {
                do {
                    *0xfed40040 = 1;
                    fcn.00015734(0x32,arg2_00);
                    if (iVar1 == 15000) {
                        return -0x7ffffffffffffff9;
                    }
                    iVar1 = iVar1 + 1;
                } while (((*0xfed40044 & 1) == 0) && ((*0xfed40044 & 2) != 0));
                if (iVar1 == 15000) {
                    return -0x7ffffffffffffff9;
                }
            }
            if (*0xfed4005c == 0) {
                *0xfed4005c = 0xfed40080;
                *0xfed40058 = 0x500;
                *0xfed40068 = 0xfed40080;
                *0xfed40064 = 0x500;
            }
            if (*0xfed4005c == 0) {
                iVar1 = -0x7fffffffffffffeb;
            }
            else {
                arg1_00 = *0xfed4005c;
                if (arg2 != 0) {
                    arg1_00 = arg1_00 - arg1;
                    uVar2 = noname_0;
                    do {
                        *(arg1 + arg1_00) = *arg1;
                        arg1 = arg1 + 1;
                        uVar2 = uVar2 - 1;
                        noname_0 = 0;
                    } while (uVar2 != 0);
                }
                iVar1 = fcn.0001cdc4(noname_0,arg1_00);
                if (-1 < iVar1) {
                    *0xfed4004c = 1;
                    iVar1 = 0;
                }
            }
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.0001cfa0 @ 0x1cfa0 */

int64_t fcn.0001cfa0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t arg2_00;
    int64_t iVar6;
    char acStackX_18 [8];
    uint16_t auStackX_20 [4];
    uchar auStack_28 [16];
    
    if ((0xfffffffd < *0xfed40030 - 1) || ((*0xfed40030 & 0x4000) == 0)) {
        return -0x7ffffffffffffffd;
    }
    iVar2 = fcn.0001cdc4(0x4000,arg2);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (*0xfed40068 == 0) {
        return -0x7fffffffffffffeb;
    }
    iVar2 = 0xc;
    iVar6 = *0xfed40068 - arg1;
    puVar3 = arg1;
    do {
        *puVar3 = puVar3[iVar6];
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (auStackX_20 != arg1) {
        section..text(auStackX_20,arg1,2);
    }
    if ((auStackX_20[0] << 8 | auStackX_20[0] >> 8) == 0xc4) {
        return -0x7ffffffffffffff9;
    }
    if (auStack_28 != arg1 + 2) {
        section..text(auStack_28,arg1 + 2,4);
    }
    uVar1 = *0xfed40064;
    uVar5 = CONCAT22(auStack_28._0_4_ << 8 | auStack_28._0_4_ >> 8,
                     SUB42(auStack_28._0_4_,2) << 8 | SUB42(auStack_28._0_4_,2) >> 8);
    arg2_00 = uVar5;
    *arg2 = uVar5;
    if (uVar1 < uVar5) {
        return -0x7ffffffffffffffb;
    }
    if (uVar5 < 10) {
        return -0x7ffffffffffffff9;
    }
    uVar4 = uVar5;
    if (uVar5 != 0) {
        do {
            *arg1 = *(arg1 + iVar6);
            arg1 = arg1 + 1;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    iVar6 = 0;
    acStackX_18[0] = '\0';
    iVar2 = fcn.0001ddf4(2,arg2_00,acStackX_18);
    if ((iVar2 < 0) || (acStackX_18[0] == '\0')) {
        if (((*0xfed40044 & 1) == 0) && ((*0xfed40044 & 2) != 0)) {
            return 0;
        }
        do {
            *0xfed40040 = 2;
            fcn.00015734(0x32,arg2_00);
            if (iVar6 == 15000) {
                return -0x7ffffffffffffff9;
            }
            iVar6 = iVar6 + 1;
        } while (((*0xfed40044 & 1) == 0) && ((*0xfed40044 & 2) == 0));
        if (iVar6 == 15000) {
            return -0x7ffffffffffffff9;
        }
        iVar2 = 0;
    }
    if (-1 < iVar2) {
        return 0;
    }
    return iVar2;
}


/* fcn.0001d460 @ 0x1d460 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.0001d460(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint uVar3;
    int64_t iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    bool bVar9;
    uchar auStackX_8 [8];
    int *piStackX_10;
    int32_t var_23h;
    int64_t iStackX_18;
    int64_t var_67h;
    uint32_t var_77h;
    uchar auStack_a8 [12];
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uint32_t uStack_94;
    int16_t aiStack_78 [19];
    int64_t var_49h;
    int32_t var_3dh;
    int32_t var_39h;
    int32_t var_35h;
    uint32_t var_19h;
    
    iStackX_18 = 0x40;
    piStackX_10 = arg2;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),0,&stack0x00000018,aiStack_78);
    if (iVar4 < 0) {
        bVar9 = iStackX_18 == 0x40;
        goto code_r0x0001d966;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x0001d966;
    *(arg1 + 0x3c) = 0;
    uVar3 = *(arg1 + 0x3c);
    if (aiStack_78[0] == 0x5a4d) {
        uVar3 = stack0xffffffffffffffc4;
    }
    *(arg1 + 0x3c) = uVar3;
    iStackX_18 = 0x108;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar3,&stack0x00000018,piStackX_10);
    if (iVar4 < 0) {
        bVar9 = iStackX_18 == 0x108;
        goto code_r0x0001d966;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x0001d966;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x0001d546;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x0001d966;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x0001d546;
            goto code_r0x0001d82d;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x0001d94a:
            *(arg1 + 0x68) = 3;
            return -0x7ffffffffffffffd;
        }
        *(arg1 + 0x7d) = 0;
        *(arg1 + 0x78) = piStackX_10[1];
        if (piStackX_10[6] == 0x10b) {
            if ((((0x10 < piStackX_10[0x1d]) || (*(piStackX_10 + 5) - 0x60 != piStackX_10[0x1d] << 3)) ||
                (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
               ((((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)) ||
                ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))))) {
code_r0x0001d546:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x0001d966;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x0001d546;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x0001d7e4:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x0001d5b3;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x0001d966;
                }
code_r0x0001d811:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x0001d82d:
                iVar2 = *(arg1 + 0x78);
                if ((((iVar2 != -0x799c) && (iVar2 != 0xebc)) && (iVar2 != 0x14c)) && (iVar2 != -0x559c)) {
                    return -0x7ffffffffffffffd;
                }
                if (*(arg1 + 0x7d) == '\0') {
                    uVar7 = *(piStackX_10 + 6);
                    iVar6 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5);
                }
                else {
                    uVar7 = *(piStackX_10 + 1);
                    iVar6 = 0x28;
                }
                uVar8 = 0;
                if (uVar7 != 0) {
                    do {
                        iStackX_18 = 0x28;
                        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6,&stack0x00000018,auStack_a8);
                        if (iVar4 < 0) {
                            bVar9 = iStackX_18 == 0x28;
                            goto code_r0x0001d966;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x0001d966;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x0001d546;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x0001d5b3;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x0001d966;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x0001d94a;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x0001d546;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x0001d966;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x0001d546;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x0001d7e4;
                }
                goto code_r0x0001d811;
            }
        }
    }
code_r0x0001d5b3:
    bVar9 = iStackX_18 == 1;
code_r0x0001d966:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


