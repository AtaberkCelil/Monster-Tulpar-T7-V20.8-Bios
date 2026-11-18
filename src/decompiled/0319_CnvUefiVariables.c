// decompiled by r2ghidra: 0319_CnvUefiVariables.pe32
// functions: 19

/* entry0 @ 0x103d4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103e8(arg1,in_RDX);
    fcn.00010c70(arg1,in_RDX);
    return;
}


/* fcn.000103e8 @ 0x103e8 */

ulong fcn.000103e8(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    
    *0x113a8 = *(arg1 + 0x60);
    *0x113b0 = *(arg1 + 0x58);
    *0x113a0 = arg1;
    fcn.00011188();
    iVar3 = fcn.000111b8();
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
    uVar4 = 0;
    if (*(*0x113a0 + 0x68) != 0) {
        piVar6 = *(*0x113a0 + 0x70);
        do {
            if ((*0x11280 == *piVar6) && (*0x11288 == piVar6[1])) {
                *0x113c0 = (*(*0x113a0 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x113a0 + 0x68));
    }
    *0x113c0 = 0;
    return 0x800000000000000e;
}


/* fcn.00010c70 @ 0x10c70 */

void fcn.00010c70(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    int64_t iStackX_8;
    ulong uStackX_10;
    ulong auStackX_18 [2];
    int8_t var_cbah;
    int8_t var_cbbh;
    int8_t var_cbch;
    int8_t var_cbdh;
    int8_t var_cbeh;
    int8_t var_cbfh;
    int64_t var_cc0h;
    uchar uStack_d78;
    ulong uStack_d77;
    uint uStack_d6f;
    uchar uStack_d6b;
    uchar uStack_d6a;
    uchar uStack_d69;
    uchar uStack_d68;
    uchar uStack_d67;
    uchar uStack_d66;
    uchar auStack_d58 [7];
    uchar uStack_d51;
    uchar uStack_d50;
    uchar uStack_d4f;
    uchar uStack_d4e;
    char cStack_d4d;
    ushort uStack_d4c;
    uchar uStack_d42;
    uchar uStack_d41;
    uchar uStack_d40;
    uchar uStack_d0d;
    uchar uStack_d0c;
    uchar uStack_d0b;
    uchar uStack_d0a;
    uchar uStack_d09;
    uchar uStack_d08;
    uchar uStack_cd6;
    uchar uStack_cd5;
    uchar uStack_cd4;
    uchar uStack_cd3;
    uchar uStack_cd2;
    uchar uStack_cd1;
    uchar uStack_cd0;
    uchar uStack_ccf;
    uint uStack_cce;
    uchar uStack_cca;
    uchar uStack_cc9;
    uchar auStack_cc8 [3145];
    int8_t var_77h;
    int8_t var_76h;
    int8_t var_75h;
    int8_t var_74h;
    int8_t var_73h;
    int8_t var_72h;
    int8_t var_6eh;
    int8_t var_6dh;
    int8_t var_6ch;
    int8_t var_6bh;
    int8_t var_6ah;
    int8_t var_69h;
    int8_t var_bp_65h;
    int8_t var_bp_64h;
    int8_t var_bp_63h;
    int8_t var_bp_62h;
    int8_t var_bp_61h;
    int8_t var_bp_60h;
    int8_t var_2eh;
    int8_t var_2dh;
    int8_t var_2ch;
    int8_t var_2bh;
    int8_t var_2ah;
    int8_t var_29h;
    int8_t var_28h;
    int8_t var_27h;
    int32_t var_26h;
    int8_t var_22h;
    int8_t var_21h;
    int64_t var_20h;
    
    auStackX_18[0] = 0;
    iStackX_8 = arg1;
    uStackX_10 = arg2;
    fcn.00010260(auStack_d58,0x90);
    fcn.00010260(auStack_cc8,0xca9);
    iStackX_8 = 0xca9;
    iVar3 = (**(*0x113b0 + 0x48))(L"Setup",0x11250,0,&iStackX_8,auStack_cc8);
    if (iVar3 < 0) {
        arg2_00 = 0;
    }
    else {
        arg2_00 = auStack_cc8;
    }
    fcn.00010494(auStack_d58,arg2_00);
    uStack_d78 = 0;
    if (auStack_d58[0] == '\a') {
        uStack_d77 = CONCAT44(auStack_d58._3_4_,auStack_d58._1_2_);
    }
    iVar4 = fcn.00010a18(9,0x112b0,0x11260,&uStack_d78);
    iVar3 = uStackX_10;
    if (iVar4 < 0) {
        return;
    }
    uStackX_10._4_4_ = SUB84(iVar3,4);
    uStackX_10._0_4_ = CONCAT13(uStack_d50,CONCAT12(uStack_d51,uStackX_10));
    uStackX_10._7_1_ = SUB81(iVar3,7);
    uStackX_10._0_7_ = CONCAT16(uStack_d4e,CONCAT15(uStack_d4f,uStackX_10));
    uStackX_10 = uStackX_10 & 0xffffffffffffff00;
    iVar3 = fcn.00010a18(7,0x112c0,0x11260,&uStackX_10);
    if (iVar3 < 0) {
        return;
    }
    uVar1 = uStackX_10 >> 0x18;
    if (cStack_d4d == '\a') {
        uStackX_10._1_2_ = uStack_d4c;
    }
    uStackX_10 = CONCAT52(uVar1,uStackX_10._1_2_) << 8;
    iVar3 = fcn.00010a18(3,0x112d0,0x11260,&uStackX_10);
    if (iVar3 < 0) {
        return;
    }
    uStack_d6f._0_3_ = CONCAT12(uStack_d40,CONCAT11(uStack_d41,uStack_d42));
    uStack_d78 = 0;
    iVar3 = fcn.00010a18(0xc,0x112e0,0x11260,&uStack_d78);
    if (iVar3 < 0) {
        return;
    }
    uStackX_10 = CONCAT16(uStack_ccf,
                          CONCAT15(uStack_cd0,
                                   CONCAT14(uStack_cd1,
                                            CONCAT13(uStack_cd2,CONCAT12(uStack_cd3,CONCAT11(uStack_cd4,uStack_cd5)))
                                           ))) << 8;
    iVar3 = fcn.00010a18(8,0x112f0,0x11240,&uStackX_10);
    if (iVar3 < 0) {
        return;
    }
    iVar3 = fcn.00010b80(auStack_d58);
    if (iVar3 < 0) {
        return;
    }
    uStack_d6b = uStack_d0d;
    uStack_d6a = uStack_d0c;
    uStack_d69 = uStack_d0b;
    uStack_d68 = uStack_d0a;
    uStack_d67 = uStack_d09;
    uStack_d66 = uStack_d08;
    uStack_d78 = 0;
    iVar3 = fcn.00010a18(0x13,0x11310,0x11260,&uStack_d78);
    if (-1 < iVar3) {
        uStackX_10 = CONCAT61(uStackX_10._2_6_,uStack_cd6) << 8;
        iVar3 = fcn.00010a18(2,0x11320,0x11260,&uStackX_10);
        if (-1 < iVar3) {
            iVar3 = fcn.00010a18(2,0x11320,0x11240,&uStackX_10);
        }
        if (-1 < iVar3) {
            uStack_d78 = 0;
            uStack_d77 = 0;
            uStack_d6f = 0;
            iVar3 = fcn.00010a18(0xd,0x11368,0x11260,&uStack_d78);
            if (-1 < iVar3) {
                iVar3 = fcn.00010a18(0xd,0x11368,0x11240,&uStack_d78);
            }
            if (-1 < iVar3) {
                iVar2 = fcn.000110cc();
                if (((iVar2 == 0xb0670) || (iVar2 = fcn.000110cc(), iVar2 == 0xb06f0)) ||
                   (iVar2 = fcn.000110cc(), iVar2 == 0xb06a0)) {
                    uStackX_10 = CONCAT71(CONCAT16(uStackX_10._7_1_,
                                                   CONCAT15(uStack_cc9,CONCAT14(uStack_cca,uStack_cce))),1);
                    iVar3 = fcn.00010a18(7,0x11330,0x11220,&uStackX_10);
                    if (iVar3 < 0) {
                        return;
                    }
                }
                (**(*0x113a8 + 0x148))(auStackX_18,0x11290,0,0);
                return;
            }
            return;
        }
        return;
    }
    return;
}


/* fcn.00011188 @ 0x11188 */

int64_t fcn.00011188(void)

{
    if (*0x113b8 == 0) {
        fcn.00011128(0x11270,0x113b8);
    }
    return *0x113b8;
}


/* fcn.00011128 @ 0x11128 */

ulong fcn.00011128(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x113a0;
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


/* fcn.000111b8 @ 0x111b8 */

void fcn.000111b8(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011188();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000111ef:
            if ((piVar1 == NULL) || ((*0x112a0 == *(piVar1 + 4) && (*0x112a8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000111ef;
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


/* fcn.000110f8 @ 0x110f8 */

ulong fcn.000110f8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x113a8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 4032 named .text
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


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010a18 @ 0x10a18 */

int64_t fcn.00010a18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    int64_t iStackX_8;
    ulong *apuStack_38 [2];
    
    iStackX_8 = arg1;
    arg1_00 = fcn.000110f8(arg1,arg1);
    if (arg1_00 == 0) {
        return -0x7ffffffffffffff7;
    }
    if (arg1 != 0) {
        arg1_00 = fcn.00010260(arg1_00,arg1);
    }
    if (arg1_00 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar1 = (**(*0x113b0 + 0x48))(arg2,arg3,0,&iStackX_8,arg1_00);
    bVar3 = iVar1 == -0x7ffffffffffffff2;
    if (bVar3) {
        iVar1 = 0;
    }
    if (iVar1 < 0) goto code_r0x00010b49;
    if (bVar3) {
code_r0x00010af0:
        iVar1 = (**(*0x113b0 + 0x58))(arg2,arg3,7,iStackX_8,arg4);
    }
    else {
        if ((iStackX_8 == 0) || (arg1_00 == arg4)) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.00010280(arg1_00,arg4,iStackX_8);
        }
        if (iVar2 != 0) {
            if (iStackX_8 != arg1) {
                iVar1 = -0x7ffffffffffffffe;
                goto code_r0x00010b49;
            }
            goto code_r0x00010af0;
        }
    }
    if ((-1 < iVar1) && (iVar1 = (**(*0x113a8 + 0x140))(0x11230,0,apuStack_38), -1 < iVar1)) {
        iVar1 = (**apuStack_38[0])(apuStack_38[0],arg2,arg3);
    }
code_r0x00010b49:
    (**(*0x113a8 + 0x48))(arg1_00);
    return iVar1;
}


/* fcn.00010494 @ 0x10494 */

void fcn.00010494(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    
    if (CONCAT44(in_register_00000014,arg2) != 0) {
        *arg1 = *(CONCAT44(in_register_00000014,arg2) + 0x73c);
        *(arg1 + 1) = *(CONCAT44(in_register_00000014,arg2) + 0x73d);
        *(arg1 + 3) = *(CONCAT44(in_register_00000014,arg2) + 0x73f);
        *(arg1 + 7) = *(CONCAT44(in_register_00000014,arg2) + 0x743);
        *(arg1 + 8) = *(CONCAT44(in_register_00000014,arg2) + 0x744);
        *(arg1 + 9) = *(CONCAT44(in_register_00000014,arg2) + 0x745);
        *(arg1 + 10) = *(CONCAT44(in_register_00000014,arg2) + 0x746);
        *(arg1 + 0xb) = *(CONCAT44(in_register_00000014,arg2) + 0x747);
        *(arg1 + 0xc) = *(CONCAT44(in_register_00000014,arg2) + 0x748);
        *(arg1 + 0xe) = *(CONCAT44(in_register_00000014,arg2) + 0x74d);
        *(arg1 + 0xf) = *(CONCAT44(in_register_00000014,arg2) + 0x74e);
        *(arg1 + 0x10) = *(CONCAT44(in_register_00000014,arg2) + 0x74f);
        *(arg1 + 0x11) = *(CONCAT44(in_register_00000014,arg2) + 0x750);
        *(arg1 + 0x12) = *(CONCAT44(in_register_00000014,arg2) + 0x751);
        *(arg1 + 0x13) = *(CONCAT44(in_register_00000014,arg2) + 0x752);
        *(arg1 + 0x14) = *(CONCAT44(in_register_00000014,arg2) + 0x753);
        *(arg1 + 0x15) = *(CONCAT44(in_register_00000014,arg2) + 0x754);
        *(arg1 + 0x16) = *(CONCAT44(in_register_00000014,arg2) + 0x755);
        *(arg1 + 0x17) = *(CONCAT44(in_register_00000014,arg2) + 0x756);
        *(arg1 + 0x18) = *(CONCAT44(in_register_00000014,arg2) + 0x757);
        *(arg1 + 0x19) = *(CONCAT44(in_register_00000014,arg2) + 0x758);
        *(arg1 + 0x1a) = *(CONCAT44(in_register_00000014,arg2) + 0x759);
        *(arg1 + 0x1b) = *(CONCAT44(in_register_00000014,arg2) + 0x75a);
        *(arg1 + 0x1c) = *(CONCAT44(in_register_00000014,arg2) + 0x75b);
        *(arg1 + 0x1d) = *(CONCAT44(in_register_00000014,arg2) + 0x75c);
        *(arg1 + 0x1e) = *(CONCAT44(in_register_00000014,arg2) + 0x75d);
        *(arg1 + 0x1f) = *(CONCAT44(in_register_00000014,arg2) + 0x75e);
        *(arg1 + 0x20) = *(CONCAT44(in_register_00000014,arg2) + 0x75f);
        *(arg1 + 0x21) = *(CONCAT44(in_register_00000014,arg2) + 0x760);
        *(arg1 + 0x22) = *(CONCAT44(in_register_00000014,arg2) + 0x761);
        *(arg1 + 0x23) = *(CONCAT44(in_register_00000014,arg2) + 0x762);
        *(arg1 + 0x24) = *(CONCAT44(in_register_00000014,arg2) + 0x763);
        *(arg1 + 0x25) = *(CONCAT44(in_register_00000014,arg2) + 0x764);
        *(arg1 + 0x26) = *(CONCAT44(in_register_00000014,arg2) + 0x765);
        *(arg1 + 0x27) = *(CONCAT44(in_register_00000014,arg2) + 0x766);
        *(arg1 + 0x28) = *(CONCAT44(in_register_00000014,arg2) + 0x767);
        *(arg1 + 0x29) = *(CONCAT44(in_register_00000014,arg2) + 0x768);
        *(arg1 + 0x2a) = *(CONCAT44(in_register_00000014,arg2) + 0x769);
        *(arg1 + 0x2b) = *(CONCAT44(in_register_00000014,arg2) + 0x76a);
        *(arg1 + 0x2c) = *(CONCAT44(in_register_00000014,arg2) + 0x76b);
        *(arg1 + 0x2d) = *(CONCAT44(in_register_00000014,arg2) + 0x76c);
        *(arg1 + 0x2e) = *(CONCAT44(in_register_00000014,arg2) + 0x76d);
        *(arg1 + 0x2f) = *(CONCAT44(in_register_00000014,arg2) + 0x76e);
        *(arg1 + 0x30) = *(CONCAT44(in_register_00000014,arg2) + 0x76f);
        *(arg1 + 0x31) = *(CONCAT44(in_register_00000014,arg2) + 0x770);
        *(arg1 + 0x32) = *(CONCAT44(in_register_00000014,arg2) + 0x771);
        *(arg1 + 0x33) = *(CONCAT44(in_register_00000014,arg2) + 0x772);
        *(arg1 + 0x34) = *(CONCAT44(in_register_00000014,arg2) + 0x773);
        *(arg1 + 0x35) = *(CONCAT44(in_register_00000014,arg2) + 0x774);
        *(arg1 + 0x36) = *(CONCAT44(in_register_00000014,arg2) + 0x775);
        *(arg1 + 0x37) = *(CONCAT44(in_register_00000014,arg2) + 0x776);
        *(arg1 + 0x38) = *(CONCAT44(in_register_00000014,arg2) + 0x777);
        *(arg1 + 0x39) = *(CONCAT44(in_register_00000014,arg2) + 0x778);
        *(arg1 + 0x3a) = *(CONCAT44(in_register_00000014,arg2) + 0x779);
        *(arg1 + 0x3b) = *(CONCAT44(in_register_00000014,arg2) + 0x77a);
        *(arg1 + 0x3c) = *(CONCAT44(in_register_00000014,arg2) + 0x77b);
        *(arg1 + 0x3d) = *(CONCAT44(in_register_00000014,arg2) + 0x77c);
        *(arg1 + 0x3e) = *(CONCAT44(in_register_00000014,arg2) + 0x77d);
        *(arg1 + 0x3f) = *(CONCAT44(in_register_00000014,arg2) + 0xa23);
        *(arg1 + 0x40) = *(CONCAT44(in_register_00000014,arg2) + 0xa24);
        *(arg1 + 0x41) = *(CONCAT44(in_register_00000014,arg2) + 0xa25);
        *(arg1 + 0x42) = *(CONCAT44(in_register_00000014,arg2) + 0x77e);
        *(arg1 + 0x43) = *(CONCAT44(in_register_00000014,arg2) + 0x77f);
        *(arg1 + 0x44) = *(CONCAT44(in_register_00000014,arg2) + 0x780);
        *(arg1 + 0x45) = *(CONCAT44(in_register_00000014,arg2) + 0x781);
        *(arg1 + 0x46) = *(CONCAT44(in_register_00000014,arg2) + 0x782);
        *(arg1 + 0x47) = *(CONCAT44(in_register_00000014,arg2) + 0x783);
        *(arg1 + 0x48) = *(CONCAT44(in_register_00000014,arg2) + 0xa26);
        *(arg1 + 0x49) = *(CONCAT44(in_register_00000014,arg2) + 0xa27);
        *(arg1 + 0x4a) = *(CONCAT44(in_register_00000014,arg2) + 0xa28);
        *(arg1 + 0x4b) = *(CONCAT44(in_register_00000014,arg2) + 0x784);
        *(arg1 + 0x4c) = *(CONCAT44(in_register_00000014,arg2) + 0x785);
        *(arg1 + 0x4d) = *(CONCAT44(in_register_00000014,arg2) + 0x786);
        *(arg1 + 0x4e) = *(CONCAT44(in_register_00000014,arg2) + 0x787);
        *(arg1 + 0x4f) = *(CONCAT44(in_register_00000014,arg2) + 0x788);
        *(arg1 + 0x50) = *(CONCAT44(in_register_00000014,arg2) + 0x789);
        *(arg1 + 0x51) = *(CONCAT44(in_register_00000014,arg2) + 0xa29);
        *(arg1 + 0x52) = *(CONCAT44(in_register_00000014,arg2) + 0xa2a);
        *(arg1 + 0x53) = *(CONCAT44(in_register_00000014,arg2) + 0xa2b);
        *(arg1 + 0x54) = *(CONCAT44(in_register_00000014,arg2) + 0xb5b);
        *(arg1 + 0x55) = *(CONCAT44(in_register_00000014,arg2) + 0xb5c);
        *(arg1 + 0x56) = *(CONCAT44(in_register_00000014,arg2) + 0xb5d);
        *(arg1 + 0x57) = *(CONCAT44(in_register_00000014,arg2) + 0xb5e);
        *(arg1 + 0x58) = *(CONCAT44(in_register_00000014,arg2) + 0xb5f);
        *(arg1 + 0x59) = *(CONCAT44(in_register_00000014,arg2) + 0xb60);
        *(arg1 + 0x5a) = *(CONCAT44(in_register_00000014,arg2) + 0xb61);
        *(arg1 + 0x5b) = *(CONCAT44(in_register_00000014,arg2) + 0xb62);
        *(arg1 + 0x5c) = *(CONCAT44(in_register_00000014,arg2) + 0xb63);
        *(arg1 + 0x5d) = *(CONCAT44(in_register_00000014,arg2) + 0xb64);
        *(arg1 + 0x5e) = *(CONCAT44(in_register_00000014,arg2) + 0xb65);
        *(arg1 + 0x5f) = *(CONCAT44(in_register_00000014,arg2) + 0xb66);
        *(arg1 + 0x60) = *(CONCAT44(in_register_00000014,arg2) + 0xb67);
        *(arg1 + 0x61) = *(CONCAT44(in_register_00000014,arg2) + 0xb68);
        *(arg1 + 0x62) = *(CONCAT44(in_register_00000014,arg2) + 0xb69);
        *(arg1 + 99) = *(CONCAT44(in_register_00000014,arg2) + 0xb6a);
        *(arg1 + 100) = *(CONCAT44(in_register_00000014,arg2) + 0xb6b);
        *(arg1 + 0x65) = *(CONCAT44(in_register_00000014,arg2) + 0xb6c);
        *(arg1 + 0x66) = *(CONCAT44(in_register_00000014,arg2) + 0xb6d);
        *(arg1 + 0x67) = *(CONCAT44(in_register_00000014,arg2) + 0xb6e);
        *(arg1 + 0x68) = *(CONCAT44(in_register_00000014,arg2) + 0xb6f);
        *(arg1 + 0x69) = *(CONCAT44(in_register_00000014,arg2) + 0xb70);
        *(arg1 + 0x6a) = *(CONCAT44(in_register_00000014,arg2) + 0xb71);
        *(arg1 + 0x6b) = *(CONCAT44(in_register_00000014,arg2) + 0xb72);
        *(arg1 + 0x6c) = *(CONCAT44(in_register_00000014,arg2) + 0xb73);
        *(arg1 + 0x6d) = *(CONCAT44(in_register_00000014,arg2) + 0xb74);
        *(arg1 + 0x6e) = *(CONCAT44(in_register_00000014,arg2) + 0xb75);
        *(arg1 + 0x6f) = *(CONCAT44(in_register_00000014,arg2) + 0xb76);
        *(arg1 + 0x70) = *(CONCAT44(in_register_00000014,arg2) + 0xb77);
        *(arg1 + 0x71) = *(CONCAT44(in_register_00000014,arg2) + 0xb78);
        *(arg1 + 0x72) = *(CONCAT44(in_register_00000014,arg2) + 0xb79);
        *(arg1 + 0x73) = *(CONCAT44(in_register_00000014,arg2) + 0xb7a);
        *(arg1 + 0x74) = *(CONCAT44(in_register_00000014,arg2) + 0xb7b);
        *(arg1 + 0x75) = *(CONCAT44(in_register_00000014,arg2) + 0xb7c);
        *(arg1 + 0x76) = *(CONCAT44(in_register_00000014,arg2) + 0xb7d);
        *(arg1 + 0x77) = *(CONCAT44(in_register_00000014,arg2) + 0xb7e);
        *(arg1 + 0x78) = *(CONCAT44(in_register_00000014,arg2) + 0xb7f);
        *(arg1 + 0x79) = *(CONCAT44(in_register_00000014,arg2) + 0xb80);
        *(arg1 + 0x7a) = *(CONCAT44(in_register_00000014,arg2) + 0xb81);
        *(arg1 + 0x7b) = *(CONCAT44(in_register_00000014,arg2) + 0xb82);
        *(arg1 + 0x7c) = *(CONCAT44(in_register_00000014,arg2) + 0xb83);
        *(arg1 + 0x7d) = *(CONCAT44(in_register_00000014,arg2) + 0xb84);
        *(arg1 + 0x7e) = *(CONCAT44(in_register_00000014,arg2) + 0xb85);
        *(arg1 + 0x7f) = *(CONCAT44(in_register_00000014,arg2) + 0xb86);
        *(arg1 + 0x80) = *(CONCAT44(in_register_00000014,arg2) + 0xb87);
        *(arg1 + 0x81) = *(CONCAT44(in_register_00000014,arg2) + 0xb5a);
        *(arg1 + 0x82) = *(CONCAT44(in_register_00000014,arg2) + 0x793);
        *(arg1 + 0x83) = *(CONCAT44(in_register_00000014,arg2) + 0x78c);
        *(arg1 + 0x84) = *(CONCAT44(in_register_00000014,arg2) + 0x78d);
        *(arg1 + 0x85) = *(CONCAT44(in_register_00000014,arg2) + 0x78e);
        *(arg1 + 0x86) = *(CONCAT44(in_register_00000014,arg2) + 0x78f);
        *(arg1 + 0x87) = *(CONCAT44(in_register_00000014,arg2) + 0x790);
        *(arg1 + 0x88) = *(CONCAT44(in_register_00000014,arg2) + 0x791);
        *(arg1 + 0x89) = *(CONCAT44(in_register_00000014,arg2) + 0x792);
        *(arg1 + 0x8a) = *(CONCAT44(in_register_00000014,arg2) + 0x81f) != '\0';
        *(arg1 + 0x8e) = *(CONCAT44(in_register_00000014,arg2) + 0xb58);
        *(arg1 + 0x8f) = *(CONCAT44(in_register_00000014,arg2) + 0xb59);
        return;
    }
    *arg1 = 7;
    *(arg1 + 1) = 2000;
    *(arg1 + 3) = 30000;
    *(arg1 + 7) = 0x32323232;
    *(arg1 + 0xb) = 7;
    *(arg1 + 0xc) = 0x4150;
    *(arg1 + 0x14) = 0;
    *(arg1 + 0x1c) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x38) = 0xff00;
    *(arg1 + 0x3c) = 0xff;
    *(arg1 + 0x3e) = 0;
    *(arg1 + 0x42) = 0xff0000ff;
    *(arg1 + 0x46) = 0;
    *(arg1 + 0x4b) = 0xff0000ff;
    *(arg1 + 0x4f) = 0;
    *(arg1 + 0x82) = 2;
    *(arg1 + 0x86) = 0;
    *(arg1 + 0x8e) = 0xf0f;
    return;
}


/* fcn.00010b80 @ 0x10b80 */

void fcn.00010b80(uint32_t *arg1)

{
    int64_t var_30h;
    int8_t var_28h;
    int8_t var_27h;
    int8_t var_26h;
    int8_t var_25h;
    int8_t var_24h;
    int8_t var_23h;
    int8_t var_22h;
    int8_t var_21h;
    int8_t var_20h;
    int8_t var_1fh;
    int8_t var_1eh;
    int8_t var_1dh;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_1ah;
    int8_t var_19h;
    int8_t var_18h;
    int8_t var_17h;
    int8_t var_16h;
    int8_t var_15h;
    int8_t var_14h;
    int8_t var_13h;
    int8_t var_12h;
    int8_t var_11h;
    int8_t var_10h;
    
    var_30h._1_1_ = *(arg1 + 0x19);
    var_30h._2_1_ = *(arg1 + 0x1a);
    var_30h._3_1_ = *(arg1 + 0x1b);
    var_30h._4_1_ = arg1[7];
    var_30h._5_1_ = *(arg1 + 0x1d);
    var_30h._6_1_ = *(arg1 + 0x1e);
    var_30h._7_1_ = *(arg1 + 0x1f);
    var_28h = arg1[8];
    var_27h = *(arg1 + 0x21);
    var_26h = *(arg1 + 0x22);
    var_25h = *(arg1 + 0x23);
    var_24h = arg1[9];
    var_23h = *(arg1 + 0x25);
    var_22h = *(arg1 + 0x26);
    var_21h = *(arg1 + 0x27);
    var_20h = arg1[10];
    var_1fh = *(arg1 + 0x29);
    var_1eh = *(arg1 + 0x2a);
    var_1dh = *(arg1 + 0x2b);
    var_1ch = arg1[0xb];
    var_1bh = *(arg1 + 0x2d);
    var_1ah = *(arg1 + 0x2e);
    var_19h = *(arg1 + 0x2f);
    var_18h = arg1[0xc];
    var_17h = *(arg1 + 0x31);
    var_16h = *(arg1 + 0x32);
    var_15h = *(arg1 + 0x33);
    var_14h = arg1[0xd];
    var_13h = *(arg1 + 0x35);
    var_12h = *(arg1 + 0x36);
    var_11h = *(arg1 + 0x37);
    var_10h = arg1[0xe];
    var_30h._0_1_ = 0;
    fcn.00010a18(0x21,0x11300,0x11260,&var_30h);
    return;
}


/* fcn.000110cc @ 0x110cc */

uint32_t fcn.000110cc(void)

{
    uint32_t auStackX_8 [8];
    
    fcn.00010310(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
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
    if (arg2 != 0) {
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


