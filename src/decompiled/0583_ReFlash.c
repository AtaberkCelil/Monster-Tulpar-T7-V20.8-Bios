// decompiled by r2ghidra: 0583_ReFlash.pe32
// functions: 151

/* entry0 @ 0x104c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000104ec(arg1,arg2);
    fcn.00010bc4(arg1,arg2);
    return;
}


/* fcn.000104ec @ 0x104ec */

uint32_t * fcn.000104ec(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t arg2_00;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    ulong noname_0;
    uint64_t uVar9;
    int64_t iStackX_8;
    
    *0x1f0e8 = *(arg2 + 0x60);
    *0x1f0f0 = *(arg2 + 0x58);
    *0x1f0e0 = arg2;
    iStackX_8 = arg1;
    fcn.00016624();
    noname_0 = 0x1dde0;
    iVar4 = fcn.00016654(0x1dde0);
    if (iVar4 == 0) {
        uVar5 = fcn.000103e0();
        fcn.000103d0();
        uVar2 = in(0x1808);
        fcn.000103b0(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            fcn.000103a0();
        }
        fcn.000103b0(uVar8,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.000103d0();
        }
        else {
            fcn.000103c0();
        }
    }
    if ((*0x1f150 != NULL) || (iVar4 = (**(*0x1f0e8 + 0x140))(0x1d9d0,0,0x1f150), -1 < iVar4)) {
        (***0x1f150)(*0x1f150,0x1f158);
    }
    (**(*0x1f0e8 + 0x140))(0x1d980,0,0x1f160);
    (**(*0x1f0e8 + 0x140))(0x1d960,0,0x1f180);
    (**(*0x1f0e8 + 0x140))(0x1d8f0,0,0x1f170);
    (**(*0x1f0e8 + 0x140))(0x1da10,0,0x1f168);
    (**(*0x1f0e8 + 0x140))(0x1d940,0,0x1f178);
    fcn.00016734();
    fcn.00016560(0x1d9e0,0x1f198);
    iStackX_8 = 0;
    iVar4 = fcn.00016560(0x1d8b0,&iStackX_8);
    if (iVar4 < 0) {
        arg2_00 = fcn.00016654(0x1d8b0);
    }
    else {
        arg2_00 = iStackX_8;
    }
    if (arg2_00 != 0) {
        *0x1f1b4 = *(arg2_00 + 0x18);
        *0x1f1b8 = *(arg2_00 + 0x1c);
        *0x1f1b0 = ((*(arg2_00 + 2) - 0x28) / *(arg2_00 + 0x20)) * *(arg2_00 + 0x1c);
        iVar6 = fcn.00012ae8(*0x1f1b0);
        *0x1f1c0 = iVar6;
        if (iVar6 != 0) {
            uVar5 = arg2_00 + 0x28;
            if (uVar5 < *(arg2_00 + 2) + arg2_00) {
                uVar9 = *0x1f1b8;
                do {
                    (**(*0x1f0e8 + 0x160))(iVar6,uVar5 + 8,uVar9);
                    uVar9 = *0x1f1b8;
                    uVar5 = uVar5 + *(arg2_00 + 0x20);
                    iVar6 = iVar6 + uVar9;
                } while (uVar5 < *(arg2_00 + 2) + arg2_00);
            }
            if ((iVar4 < 0) && (iVar4 = fcn.00012b6c(6,*(arg2_00 + 2),arg2_00), iVar4 != 0)) {
                (**(*0x1f0e8 + 0xc0))(0x1d8b0,iVar4);
            }
        }
    }
    puVar7 = fcn.00016624();
    if ((((puVar7[3] == 0x12) || (puVar7[3] == 0x20)) &&
        (puVar7 = (**(*0x1f0e8 + 0x40))(6,0x1000,0x1f308), -1 < puVar7)) &&
       (puVar7 = (**(*0x1f0e8 + 0x40))(6,4,0x1f300), -1 < puVar7)) {
        **0x1f300 = 0;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = CONCAT44(0,*0x1f1b0);
        puVar7 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        uVar5 = CONCAT44(0,*0x1f1b0) / 0x28;
        if (uVar5 != 0) {
            puVar7 = *0x1f1c0 + 0x24;
            do {
                iVar4 = *(puVar7 + -5);
                if (((iVar4 == 0xff750000) || (iVar4 == 0xff7e0000)) ||
                   ((iVar4 == 0xff890000 || ((iVar4 == 0xff9e0000 || (iVar4 == 0xff9f0000)))))) {
                    *puVar7 = *puVar7 & 0xffffff7f;
                }
                puVar7 = puVar7 + 10;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
    }
    return puVar7;
}


/* fcn.00010bc4 @ 0x10bc4 */

ulong fcn.00010bc4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t arg1_00;
    char16_t *arg1_01;
    ulong noname_1;
    int iVar6;
    int64_t in_R9;
    int64_t arg4;
    ulong auStackX_8 [2];
    uint auStackX_18 [2];
    uint uStackX_20;
    uint16_t uStackX_24;
    uchar uStackX_26;
    int32_t var_30h_2;
    int32_t var_40h;
    uint32_t var_48h;
    int16_t var_4ch;
    int8_t var_4eh;
    int64_t *piVar7;
    ulong uStack_68;
    int64_t aiStack_60 [2];
    uchar uStack_50;
    uint32_t uStack_4f;
    int64_t var_40h_2;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    
    cVar2 = '\0';
    auStackX_18[0] = 2;
    aiStack_60[0] = 0;
    aiStack_60[1] = 0;
    iVar6 = 1;
    uStackX_20 = 0x1000000;
    auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,1);
    uStackX_24 = 0x101;
    uStackX_26 = 0;
    if (*0x1f140 == 0) {
        *0x1f130 = *(arg2 + 0x60);
        *0x1f138 = *(arg2 + 0x58);
        *0x1f140 = arg2;
    }
    iVar5 = *0x1f130;
    *0x1f368 = arg1;
    iVar3 = fcn.00016624();
    noname_1 = 0x10048;
    iVar1 = *(iVar3 + 0xc);
    (**(iVar5 + 0x40))(6,0x10048,0x1f050);
    uVar4 = fcn.000165c0(0x1d9c0,noname_1,0x10bbc,in_R9);
    iVar5 = fcn.00016654(0x1d860);
    if ((iVar5 == 0) || (*(iVar5 + 0x18) == 0)) {
        *0x1f070 = -0x7ffffffffffffff2;
    }
    else {
        *0x1f040 = *(iVar5 + 0x25);
        *0x1f060 = *(iVar5 + 0x29);
        cVar2 = *(iVar5 + 0x21);
        *0x1f048 = *(iVar5 + 0x18);
        *0x1f070 = fcn.00010b0c(iVar5);
    }
    if (iVar1 != 0x20) {
        if (iVar1 != 0x12) {
            aiStack_60[1] = 0;
            piVar7 = aiStack_60 + 1;
            fcn.000165c0(0x1d930,noname_1,0x11bcc,in_R9);
            auStackX_8[0] = 0;
            uVar4 = (**(*0x1f0e8 + 0x80))(auStackX_8,0x1d920,0,0x1dc20,piVar7);
            return uVar4;
        }
        uStack_68 = 0x1d;
        iVar5 = (**(*0x1f138 + 0x48))(L"AmiFlashUpd",0x1da38,0,&uStack_68,&uStack_50);
        if (-1 < iVar5) {
            uStackX_20 = CONCAT13(uStack_4f >> 2,uStackX_20) & 0x1ffffff;
            uStackX_24 = CONCAT11(uStack_4f >> 1,uStack_4f) & 0x101;
        }
    }
    iVar5 = (**(*0x1f130 + 0x140))(0x1d9f0,0,0x1f360);
    if (iVar5 < 0) {
        (**(*0x1f130 + 0x70))(uVar4);
        uVar4 = 0xa000000000000001;
    }
    else {
        uStackX_20._1_3_ = CONCAT12(uStackX_20._3_1_,CONCAT11(cVar2,*0x1f070));
        if ((cVar2 != '\0') || (uStackX_20._0_1_ = '\0', *0x1f070 != '\0')) {
            uStackX_20._0_1_ = '\x01';
        }
        if (*0x1f070 < 0) {
            uStackX_26 = 0;
        }
        else {
            uStackX_26 = fcn.00012370(auStackX_8);
            iVar6 = auStackX_8[0];
        }
        iVar5 = 0x1da70;
        arg4 = 7;
        uStack_68 = 7;
        iVar3 = 7;
        (**(*0x1f138 + 0x58))(0x1e2a0);
        if (*0x1f070 < 0) {
            (**(*0x1f130 + 0x48))(*0x1f050);
        }
        arg1_00 = *0x1f070;
        cVar2 = fcn.00011d38(*0x1f070);
        if (cVar2 == '\0') {
            fcn.00015f68(arg1_00,iVar5,iVar3,arg4);
            *0x1f068 = *0x1da68;
            arg1_01 = L"BootFlow";
            (**(*0x1f138 + 0x58))(L"BootFlow",0x1da20,2,4,auStackX_18);
            if (uStackX_20 == '\x01') {
                fcn.000109d8(arg1_01,&uStackX_20);
            }
            if (iVar6 != 0) {
                iVar5 = 0x2d;
                if (iVar6 != 1) {
                    iVar5 = 0x2e;
                }
                fcn.00010858(*0x1f068,iVar5,&uStack_68,aiStack_60);
                if (aiStack_60[0] != 0) {
                    fcn.00015c9c(*0x1f068,0x2c,aiStack_60[0]);
                    (**(*0x1f130 + 0x48))(aiStack_60[0]);
                }
            }
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00016624 @ 0x16624 */

int64_t fcn.00016624(void)

{
    if (*0x1f148 == 0) {
        fcn.00016560(0x1d9a0,0x1f148);
    }
    return *0x1f148;
}


/* fcn.00016560 @ 0x16560 */

ulong fcn.00016560(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1f0e0;
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


/* fcn.00016654 @ 0x16654 */

void fcn.00016654(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00016624();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00016682:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00016682;
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


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(void)

{
    return;
}


/* fcn.000103b0 @ 0x103b0 */

uint64_t fcn.000103b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000103a2 @ 0x103a2 */

void fcn.000103a2(void)

{
    return;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(void)

{
    return;
}


/* fcn.00016734 @ 0x16734 */

ulong fcn.00016734(void)

{
    ulong uVar1;
    char cVar2;
    ulong *puVar3;
    
    uVar1 = *0x1ddf0;
    puVar3 = 0x1eb20;
    do {
        if (*puVar3 == NULL) {
            return 0;
        }
        cVar2 = (**puVar3)(uVar1,0x1f188);
        puVar3 = puVar3 + 1;
    } while (cVar2 == '\0');
    return 0;
}


/* fcn.00012ae8 @ 0x12ae8 */

ulong fcn.00012ae8(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1f0e8 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00012b6c @ 0x12b6c */

int64_t fcn.00012b6c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x1f0e8 + 0x40))(noname_0,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* section..text @ 0x102c0 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 54688 named .text
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.00015b58 @ 0x15b58 */

int64_t fcn.00015b58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t noname_1;
    int64_t iVar2;
    
    if ((*0x1f128 != 0) || (iVar1 = (**(*0x1f130 + 0x140))(0x1dcb8,0,0x1f128), -1 < iVar1)) {
        iVar1 = fcn.000144ac();
        arg1_00 = fcn.000159d4(arg1);
        if (arg1_00 != 0) {
            iVar1 = fcn.000158b4(arg1_00,iVar1,0x1ead0,0x1ead0);
            if (iVar1 == 0) {
                iVar2 = -0x7ffffffffffffff2;
            }
            else {
                iVar2 = (**(*0x1f128 + 8))(*0x1f128,iVar1,arg1,arg2 & 0xffff,arg4,arg3,0);
                noname_1 = *0x1f130;
                (**(*0x1f130 + 0x48))(iVar1);
                if (iVar2 == -0x7fffffffffffffe0) {
                    iVar2 = fcn.00015a94(arg1_00,noname_1,arg1,arg2 & 0xffff);
                }
            }
            (**(*0x1f130 + 0x48))(arg1_00);
            return iVar2;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00015de4 @ 0x15de4 */

int64_t fcn.00015de4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t noname_0;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = 0;
    iStackX_18 = arg3;
    if (((*0x1f108 == 0) && (iVar1 = (**(*0x1f130 + 0x140))(0x1dce8,0,0x1f108), iVar1 < 0)) ||
       ((*0x1f110 == 0 && (iVar1 = (**(*0x1f130 + 0x140))(0x1dcc8,0,0x1f110), iVar1 < 0)))) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = (**(*0x1f108 + 8))(*0x1f108,&iStackX_20,0,1,0x1da70,0x1e2a0);
        iVar1 = iStackX_20;
        if (iVar2 == -0x7ffffffffffffffb) {
            noname_0 = fcn.000161ac(iStackX_20 + 0x70);
            iVar1 = fcn.00013260(noname_0,iVar1 + 0x70,0x1e4d0,0x1dd10);
            iVar2 = (**(*0x1f108 + 8))(*0x1f108,&iStackX_20,noname_0 + iVar1 * 2,1,0x1da70,0x1e2a0);
            if (-1 < iVar2) {
                iStackX_20 = *arg1;
                iVar2 = (**(*0x1f110 + 0x20))(*0x1f110,noname_0,arg2,arg1,&iStackX_18);
                *arg1 = iStackX_20;
            }
            (**(*0x1f130 + 0x48))(noname_0);
        }
    }
    return iVar2;
}


/* fcn.00010858 @ 0x10858 */

void fcn.00010858(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint in_R9;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_R9,arg4);
    if (*piVar2 == 0) {
        *arg3 = 0;
    }
    iVar1 = fcn.00015b58(arg1,arg2 & 0xffff,arg3,*piVar2);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*piVar2 != 0) {
            (**(*0x1f130 + 0x48))();
        }
        iVar1 = (**(*0x1f130 + 0x40))(4,*arg3,piVar2);
        if (-1 < iVar1) {
            fcn.00015b58(arg1,arg2 & 0xffff,arg3,*piVar2);
        }
    }
    return;
}


/* fcn.00013260 @ 0x13260 */

void fcn.00013260(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013454(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013454 @ 0x13454 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013454(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
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
    uint64_t uStack_98;
    int64_t iStack_90;
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
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000134b3;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x000134b3:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.00014444(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.000141e0(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x1e63c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x0001386e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1e63c;
            }
            else {
                pcVar8 = 0x1e640;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00013605:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x000137a8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000137bf;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000137a8;
                        }
                        goto code_r0x000137bf;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x000137a8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00013605;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x00013605;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000137bf;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000137a8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000137bf:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.000141bc(&var_68h_2,0x26,0,0x1e5d0);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x0001386e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00013a57;
                        if (uStack_a8 == 0x58) goto code_r0x00013b4c;
                        if (uStack_a8 == 0x61) goto code_r0x00013a60;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x000135e6;
                        }
                        if (uStack_a8 != 100) goto code_r0x000135e2;
                        goto code_r0x00013b63;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1e63c;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x00013d90;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x1e6db;
                            goto code_r0x00013b13;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00013b13:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00013d90;
                    }
                    fcn.000141bc(&var_68h_2,0x26,0,0x1e634);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00013a57:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00013a60:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00013d90;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000135e2;
                            goto code_r0x00013b50;
                        }
                        goto code_r0x00013b55;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00013d90;
                    }
                    fcn.000141bc(&var_68h_2,0x26,0,0x1e618);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00013d90;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00013b4c:
            uVar21 = uVar21 | 0x20;
code_r0x00013b50:
            uVar21 = uVar21 | 0x80;
code_r0x00013b55:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00013b63:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00013ba5;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x00013ba5:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x00013c2d:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00013c2d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFG"[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x000135e2:
            pcVar8 = &uStack_a8;
code_r0x000135e6:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00013d90:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013290(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013290(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013290(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013290(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.00015c9c @ 0x15c9c */

int64_t fcn.00015c9c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    int64_t iStackX_20;
    
    iStackX_20 = 0;
    if ((*0x1f128 == 0) && (iVar2 = (**(*0x1f130 + 0x140))(0x1dcb8,0,0x1f128), iVar2 < 0)) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = (**(*0x1f128 + 0x18))(*0x1f128,arg1,0,&iStackX_20);
        if (iVar2 == -0x7ffffffffffffffb) {
            pcVar3 = fcn.000161ac(iStackX_20);
            iVar2 = (**(*0x1f128 + 0x18))(*0x1f128,arg1,pcVar3,&iStackX_20);
            if ((-1 < iVar2) && (pcVar5 = pcVar3, pcVar4 = pcVar3, pcVar3 < pcVar3 + iStackX_20)) {
                do {
                    for (; (*pcVar5 != ';' && (*pcVar5 != '\0')); pcVar5 = pcVar5 + 1) {
                    }
                    cVar1 = *pcVar5;
                    *pcVar5 = '\0';
                    iVar2 = (**(*0x1f128 + 0x10))(*0x1f128,arg1,arg2 & 0xffff,pcVar4,arg3,0);
                    if (iVar2 < 0) break;
                    *pcVar5 = cVar1;
                    pcVar5 = pcVar5 + 1;
                    pcVar4 = pcVar5;
                } while (pcVar5 < pcVar3 + iStackX_20);
            }
            (**(*0x1f130 + 0x48))(pcVar3);
        }
    }
    return iVar2;
}


/* fcn.00011afc @ 0x11afc */

//WARNING: Variable defined which should be unmapped: var_1h

uint fcn.00011afc(int64_t arg1)

{
    int64_t iVar1;
    int64_t *in_RDX;
    int64_t *piVar2;
    bool bVar3;
    uint auStackX_10 [6];
    int64_t var_6fh;
    int16_t iStack_98;
    int16_t iStack_96;
    int16_t iStack_94;
    int16_t iStack_92;
    ushort uStack_90;
    int64_t aiStack_88 [4];
    char cStack_62;
    char cStack_61;
    char cStack_5f;
    char cStack_5e;
    int16_t var_39h;
    int16_t var_37h;
    int16_t var_35h;
    int16_t var_33h;
    int16_t var_31h;
    int64_t var_29h;
    int8_t var_3h;
    int8_t var_2h;
    int8_t var_1h;
    
    if (*0x1f238 == 0) {
        iVar1 = fcn.000119e8(aiStack_88);
    }
    else {
        piVar2 = arg1 + 0xfffff0;
        do {
            if (((*piVar2 == *0x1db50) && (*0x1db50 == *piVar2)) && (*0x1db58 == piVar2[1])) {
                in_RDX = piVar2 + 2;
                if (aiStack_88 != in_RDX) {
                    section..text(aiStack_88,in_RDX,0x78);
                }
                goto code_r0x00011b86;
            }
            in_RDX = piVar2 + -4;
            bVar3 = arg1 <= piVar2;
            piVar2 = in_RDX;
        } while (bVar3);
        iVar1 = -0x7ffffffffffffff2;
    }
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    else {
code_r0x00011b86:
        iStack_98 = cStack_62;
        iStack_96 = cStack_61;
        iStack_94 = cStack_5f;
        iStack_92 = cStack_5e;
        uStack_90 = 0;
        fcn.00014384(&iStack_98,in_RDX,auStackX_10);
    }
    return auStackX_10[0];
}


/* fcn.000165c0 @ 0x165c0 */

int64_t fcn.000165c0(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x1f0e8 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x1f0e8 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x1f0e8 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00010b0c @ 0x10b0c */

uint64_t fcn.00010b0c(int64_t arg1)

{
    uint64_t uVar1;
    uint uStackX_10;
    uint32_t uStackX_14;
    
    uStackX_10 = fcn.00011afc(*0x1f048);
    uStackX_14 = *(arg1 + 0x21);
    if ((uStackX_14 == 0) && ((*0xfe410490 & 1) == 0)) {
        if (*0xfe4104ab < 0x19) {
            uStackX_14 = 6;
        }
    }
    (**(*0x1f138 + 0x58))(L"AmiFwVersion",0x1da00,3,8,&uStackX_10);
    if (uStackX_14 == 0) {
        uVar1 = 0;
    }
    else if (uStackX_14 < 5) {
        uVar1 = *(arg1 + 0x20) | 0x8000000000000000;
        if (*(arg1 + 0x20) == 0) {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 0x800000000000000f;
    }
    return uVar1;
}


/* fcn.00012370 @ 0x12370 */

void fcn.00012370(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t aiStackX_8 [4];
    
    iVar2 = fcn.00016654(0x1d8b0);
    if ((iVar2 == 0) || (*(iVar2 + 0x24) != 0)) {
        iVar1 = 1;
    }
    else {
        if (*0x1f1c0 != 0) {
            *0x1f0c8 = *0x1f1c0;
            *0x1f258 = *0x1f1b8;
            *0x1f254 = *0x1f1b0;
        }
        if (*0x1f048 != 0) {
            fcn.00016a7c(*0x1f048,aiStackX_8);
        }
        *0x1f0b8 = fcn.00012ae8(*0x1f250);
        if ((*0x1f250 != 0) && (*0x1f0b8 != aiStackX_8[0])) {
            section..text(*0x1f0b8,aiStackX_8[0],*0x1f250);
        }
        if (*0x1f254 == *0x1f250) {
            if ((*0x1f250 == 0) || (*0x1f0c8 == *0x1f0b8)) {
                iVar2 = 0;
            }
            else {
                iVar2 = fcn.00010300(*0x1f0c8,*0x1f0b8,*0x1f250);
            }
            iVar1 = 0;
            if (iVar2 == 0) goto code_r0x0001244f;
        }
        iVar1 = 2;
    }
code_r0x0001244f:
    if (arg1 != 0) {
        *arg1 = iVar1;
    }
    *0x1f0c0 = iVar1 == 0;
    return;
}


/* fcn.00011d38 @ 0x11d38 */

ulong fcn.00011d38(int64_t arg1)

{
    int64_t *piVar1;
    int16_t *piVar2;
    int64_t iVar3;
    uint auStackX_10 [2];
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    auStackX_10[0] = 0xb;
    piVar2 = fcn.00016624();
    do {
        if (piVar2 == NULL) {
            return 0;
        }
        for (; *piVar2 != -1; piVar2 = piVar2 + piVar2[1]) {
            if (*piVar2 == 0xb) goto code_r0x00011d8b;
        }
        piVar2 = NULL;
code_r0x00011d8b:
        if (piVar2 == NULL) {
            return 0;
        }
        piVar1 = *(piVar2 + 4);
        if ((*piVar1 == *0x1db30) && (piVar1[1] == *0x1db38)) {
            if ((-1 < arg1) &&
               (*0x1f238 = piVar1, iVar3 = (**(*0x1f0e8 + 0x148))(auStackX_18,0x1d900,0x1db40,0), -1 < iVar3)) {
                (**(*0x1f0f0 + 0x58))(L"BootFlow",0x1db60,2,4,auStackX_10);
            }
            return 1;
        }
        piVar2 = piVar2 + piVar2[1];
    } while( true );
}


/* fcn.00015f68 @ 0x15f68 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00015f68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    ulong **arg3_00;
    int64_t iVar4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t *piVar5;
    ulong in_stack_ffffffffffffffb0;
    uint uVar7;
    int64_t *piVar6;
    ulong uStack_48;
    int64_t iStack_40;
    ulong *apuStack_38 [2];
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar4 = *0x1f368;
    uVar7 = in_stack_ffffffffffffffb0 >> 0x20;
    puStackX_20 = NULL;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iVar1 = (**(*0x1f130 + 0x98))(*0x1f368,0x1dcf8,&iStack_40);
    if ((-1 < iVar1) &&
       (iVar1 = (**(*0x1f130 + 0x118))(iVar4,0x1ddb8,&iStackX_10,iVar4,0,CONCAT44(uVar7,2)), -1 < iVar1)) {
        arg3_00 = apuStack_38;
        iVar1 = (**(*0x1f130 + 0x140))(0x1dc68,0);
        if (-1 < iVar1) {
            iStackX_18 = 0;
            iStackX_8 = 0;
            for (puVar3 = iStackX_10 + 0x14; (puVar3 < *(iStackX_10 + 0x10) + iStackX_10 && (*(puVar3 + 3) != '\x02'));
                puVar3 = puVar3 + (*puVar3 & 0xffffff)) {
            }
            piVar6 = &iStackX_18;
            piVar5 = &iStackX_8;
            iVar1 = fcn.00015704(iStack_40,puVar3 + 1,arg3_00,iVar4);
            iVar4 = iStackX_18;
            if (-1 < iVar1) {
                if (*0x1f100 == '\0') {
                    *0x1f350 = 0x1f350;
                    *0x1f358 = 0x1f350;
                    *0x1f100 = '\x01';
                }
                iVar1 = (**apuStack_38[0])(apuStack_38[0],iStackX_10,iStackX_18,&uStack_48,piVar5,piVar6);
                if (iVar1 < 0) {
                    return iVar1;
                }
                iVar2 = (**(*0x1f130 + 0x40))(4,0x38,&puStackX_20);
                iVar1 = iStackX_8;
                if (-1 < iVar2) {
                    puStackX_20[2] = *(iStackX_8 + 8);
                    puStackX_20[3] = iVar4;
                    puStackX_20[4] = uStack_48;
                    (**(*0x1f130 + 0x160))(puStackX_20 + 5,puVar3 + 6,0x10);
                    *puStackX_20 = 0x1f350;
                    puStackX_20[1] = *0x1f358;
                    **0x1f358 = puStackX_20;
                    *0x1f358 = puStackX_20;
                }
                if (iVar1 != 0) {
                    *(iVar1 + 0x18) = uStack_48;
                }
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.000109d8 @ 0x109d8 */

void fcn.000109d8(int64_t arg1,uint32_t *arg2)

{
    char cVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint32_t arg4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    int64_t var_6fh;
    int64_t var_77h;
    uchar auStack_e8 [208];
    
    arg1_00 = *0x1f068;
    iStackX_8 = 0;
    iStackX_10 = 0;
    fcn.00010858(*0x1f068,0x12,auStackX_18,&iStackX_8);
    cVar1 = *(arg2 + 2);
    if (cVar1 == '\x01') {
        iVar2 = 0x15;
    }
    else if (cVar1 == '\x02') {
        iVar2 = 0x16;
    }
    else {
        if (cVar1 != '\x03') {
            arg4 = &iStackX_10;
            if (cVar1 == '\x04') {
                iVar2 = 0x18;
            }
            else {
                iVar2 = 0x19;
            }
            goto code_r0x00010a64;
        }
        iVar2 = 0x17;
    }
    arg4 = &iStackX_10;
code_r0x00010a64:
    fcn.00010858(arg1_00,iVar2,auStackX_18,arg4);
    if ((iStackX_8 != 0) && (iStackX_10 != 0)) {
        fcn.00013260(auStack_e8,200,iStackX_8,iStackX_10);
        fcn.00015c9c(arg1_00,0x10,auStack_e8);
        (**(*0x1f130 + 0x48))(iStackX_8);
        (**(*0x1f130 + 0x48))(iStackX_10);
        iStackX_8 = 0;
    }
    iVar2 = 0xf;
    if (*(arg2 + 1) != '\0') {
        iVar2 = 0xe;
    }
    fcn.00010858(arg1_00,iVar2,auStackX_18,&iStackX_8);
    if (iStackX_8 != 0) {
        fcn.00015c9c(arg1_00,0x11,iStackX_8);
        (**(*0x1f130 + 0x48))(iStackX_8);
    }
    return;
}


/* fcn.00012178 @ 0x12178 */

int64_t fcn.00012178(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t arg3_00;
    
    arg3_00 = arg2 & 0xffffffff;
    arg1_00 = *0x1f050 + 0x48;
    if (((arg4 - 2U < 2) && (arg2 != 0)) && (arg1_00 != arg3)) {
        section..text(arg1_00,arg3,arg2 & 0xffffffff);
    }
    *(*0x1f050 + 0x28) = arg1;
    *(*0x1f050 + 0x30) = arg3_00;
    *(*0x1f050 + 0x38) = arg1_00;
    *(*0x1f050 + 0x40) = arg4;
    iVar1 = fcn.00011f98(5);
    if (((-1 < iVar1) && (arg4 == 0)) && ((arg3_00 != 0 && (arg3 != arg1_00)))) {
        section..text(arg3,arg1_00,arg3_00);
    }
    return iVar1;
}


/* fcn.0001206c @ 0x1206c */

void fcn.0001206c(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg3;
    int64_t iVar5;
    uint64_t arg1;
    
    uVar4 = 0x1000000;
    if (*0x1f060 < *0x1f048) {
        uVar4 = (*0x1f048 - *0x1f060) + 0x1000000;
    }
    iVar5 = 0;
    arg1 = *0x1f050 + 0x48;
    uVar2 = *0x1f060;
    for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - arg3) {
        arg3 = uVar3;
        if (0x10000 < uVar3) {
            arg3 = 0x10000;
        }
        if ((arg3 != 0) && (arg1 != uVar2)) {
            section..text(arg1,uVar2,arg3);
        }
        *(*0x1f050 + 0x28) = arg1;
        *(*0x1f050 + 0x30) = iVar5;
        *(*0x1f050 + 0x38) = arg3;
        iVar1 = fcn.00011f98(6);
        if (iVar1 < 0) goto code_r0x00012129;
        iVar5 = iVar5 + arg3;
        uVar2 = uVar2 + arg3;
    }
    iVar1 = 0;
code_r0x00012129:
    if (-1 < iVar1) {
        *(*0x1f050 + 0x28) = *0x1f060;
        *(*0x1f050 + 0x30) = uVar4;
        fcn.00011f98(4);
    }
    return;
}


/* fcn.000117dc @ 0x117dc */

int64_t fcn.000117dc(void)

{
    int iVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t *arg1;
    uint32_t arg3;
    uint64_t uVar10;
    uint64_t uVar11;
    
    uVar8 = 0;
    uVar7 = 0;
    bVar2 = true;
    uVar3 = uVar8;
    if (*0x1f0b8 == NULL) {
        if (*0x1f048 == 0) {
            uVar3 = 0x8000000000000002;
        }
        else {
            uVar3 = fcn.00016a7c(*0x1f048,0x1f0b8);
        }
    }
    uVar9 = *0x1f250;
    arg1 = *0x1f0b8;
    uVar11 = *0x1f270;
    if (uVar3 < 0) {
        iVar4 = -0x7fffffffffffffeb;
    }
    else {
        *0x1f230 = fcn.000122c8();
        fcn.00012720();
        uVar3 = uVar9 / uVar11;
        uVar10 = uVar8;
        if (uVar3 != 0) {
            uVar5 = uVar3;
            piVar6 = arg1;
            do {
                if ((piVar6[4] == 0) || ((*(piVar6 + 0x24) & 0x200) != 0)) {
                    uVar10 = uVar10 + 1;
                }
                piVar6 = piVar6 + uVar11;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        iVar1 = uVar10;
        iVar4 = (**(*0x1f130 + 0x40))(4,(iVar1 + 1) * 0x48,0x1f078);
        if (-1 < iVar4) {
            uVar9 = iVar1 - 2;
            fcn.0001169c(0,uVar10,5);
            uVar10 = uVar8;
            if (uVar3 != 0) {
                do {
                    if ((arg1[4] == 0) || ((*(arg1 + 0x24) & 0x200) != 0)) {
                        if ((*(arg1 + 0x24) & 0x83e) == 0) {
                            iVar4 = *arg1;
                            if (((iVar4 == *0x1db20) && (arg1[1] == *0x1db28)) ||
                               ((iVar4 == *0x1daf8 && (arg1[1] == *0x1db00)))) {
                                arg3 = 2;
                            }
                            else if ((iVar4 != *0x1db08) || (arg3 = 3, arg1[1] != *0x1db10)) {
                                arg3 = 4;
                            }
code_r0x0001198c:
                            fcn.0001169c(arg1,uVar9,arg3);
                            uVar9 = uVar9 - 1;
                        }
                        else if ((*(arg1 + 0x24) & 0x400) == 0) {
                            arg3 = 0;
                            if (!bVar2) goto code_r0x0001198c;
                            fcn.0001169c(arg1,iVar1 - 1,0);
                            bVar2 = false;
                        }
                        else {
                            fcn.0001169c(arg1,uVar10,1);
                            uVar10 = uVar10 + 1;
                        }
                    }
                    arg1 = arg1 + uVar11;
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            iVar1 = *(*0x1f078 + 0x24);
            while (iVar1 == 1) {
                uVar7 = uVar8 + 1;
                uVar8 = uVar7;
                iVar1 = *(*0x1f078 + 0x24 + uVar8 * 0x48);
            }
            *(*0x1f078 + 0x29 + (uVar7 - 1) * 0x48) = 1;
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.000108f4 @ 0x108f4 */

void fcn.000108f4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uchar auStackX_10 [3];
    uchar uStackX_13;
    uchar uStackX_14;
    char cStackX_16;
    ulong auStackX_18 [2];
    
    uVar3 = 0;
    auStackX_18[0] = 7;
    if (arg1 == '\0') {
        iVar2 = (**(*0x1f138 + 0x48))(0x1e2a0,0x1da70,0,auStackX_18,auStackX_10);
    }
    else {
        iVar2 = fcn.00015de4(auStackX_18,auStackX_10,arg2,arg3);
    }
    if ((-1 < iVar2) && (cStackX_16 != '\0')) {
        if (*(*0x1f078 + 0x24) != 5) {
            uVar4 = uVar3;
            do {
                iVar1 = *(uVar3 + 0x24 + *0x1f078);
                if (iVar1 == 1) {
                    *(uVar3 + 0x28 + *0x1f078) = uStackX_14;
                    if ((*0xc00fd0dc & *0xc00f80dc & 0x10) != 0) {
                        *(uVar3 + 0x28 + *0x1f078) = 1;
                    }
                }
                else if (iVar1 == 2) {
                    *(uVar3 + 0x28 + *0x1f078) = uStackX_13;
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar4 * 0x48;
            } while (*(uVar3 + 0x24 + *0x1f078) != 5);
        }
        *0x1da30 = uStackX_13;
    }
    return;
}


/* fcn.00011040 @ 0x11040 */

void fcn.00011040(int64_t arg1,int64_t arg2)

{
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    if (*0x1f080 != '\0') {
        (**(*0x1f090 + 0x10))(*0x1f090,0x1e348);
        (***(*0x1f140 + 0x30))(*(*0x1f140 + 0x30),0);
    }
    if ((*0x1db18 != '\0') && (*0x1f0a0 != 0)) {
        (**(*0x1f0a0 + 0x58))(arg1,arg2,0,auStackX_18);
    }
    return;
}


/* fcn.00012244 @ 0x12244 */

void fcn.00012244(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.00011ebc(0x1d910);
    if (iVar1 != 0) {
        if (arg1 < 2) {
            *(*0x1f050 + 0x28) = *(iVar1 + 0x18) + *0x1f048;
            uVar2 = *(iVar1 + 0x1c);
        }
        else {
            *(*0x1f050 + 0x28) = *(iVar1 + 0x10);
            *(*0x1f050 + 0x38) = *(iVar1 + 0x1c);
            iVar1 = fcn.00011ebc(0x1d880);
            uVar2 = *(iVar1 + 0x10);
        }
        *(*0x1f050 + 0x30) = uVar2;
        fcn.00011f98(arg1 & 0xffffffff);
    }
    return;
}


/* fcn.000110b8 @ 0x110b8 */

int64_t fcn.000110b8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    code *pcVar2;
    int64_t iVar3;
    char cVar4;
    uint64_t uVar5;
    int64_t in_R8;
    int64_t in_R9;
    
    cVar1 = arg2;
    cVar4 = arg1;
    if (*0x1f09c == '\0') {
        if (*0x1f048 == 0) {
            return -0x7fffffffffffffeb;
        }
        if (*0x1f058 != '\0') {
            *0x1f360 = 0x1dac8;
            *0x1f088 = fcn.0001206c();
            if (*0x1f088 < 0) {
                return *0x1f088;
            }
        }
        if (cVar1 == '\0') {
            in_R8 = 0x1f0a0;
            arg2 = 0;
            arg1 = 0x1dab8;
            *0x1f088 = (**(*0x1f130 + 0x140))(0x1dab8);
        }
        *0x1f088 = fcn.000117dc();
        if (*0x1f088 < 0) {
            return *0x1f088;
        }
        fcn.000108f4(CONCAT71(arg1 >> 8,cVar4),arg2,in_R8,in_R9);
        *0x1f088 = (**(*0x1f130 + 0x140))(0x1d8c0);
        if (-1 < *0x1f088) {
            (**(*0x1f090 + 0x10))(*0x1f090);
            *0x1f080 = 1;
        }
        if (cVar4 == '\0') {
            if (*0x1f070 < 0) {
                (**(*0x1f130 + 0xf8))(5000000);
                return -0x7fffffffffffffeb;
            }
            *0x1db18 = 0;
        }
        uVar5 = 0;
        pcVar2 = 0x1a100;
        while (pcVar2 != NULL) {
            (*pcVar2)();
            uVar5 = uVar5 + 1;
            pcVar2 = *(uVar5 * 8 + 0x1e320);
        }
        *0x1f0a8 = 0;
        uVar5 = 0;
        if (*(*0x1f078 + 0x24) == 1) {
            iVar3 = *0x1f078;
            do {
                if (*(iVar3 + 0x28) != '\0') {
                    *0x1f0a8 = *0x1f0a8 + *(iVar3 + 0x18) / *(iVar3 + 0x20);
                }
                uVar5 = uVar5 + 1;
                iVar3 = *0x1f078 + uVar5 * 0x48;
            } while (*(iVar3 + 0x24) == 1);
        }
        while (iVar3 = *0x1f078 + uVar5 * 0x48, *(iVar3 + 0x24) != 5) {
            if (*(iVar3 + 0x28) != '\0') {
                *0x1f0a8 = *0x1f0a8 + *(iVar3 + 0x18) / *(iVar3 + 0x20);
            }
            uVar5 = uVar5 + 1;
        }
        (**(*0x1f360 + 0x20))();
        *0x1f09c = '\x01';
    }
    return *0x1f088;
}


/* fcn.000112f8 @ 0x112f8 */

int64_t fcn.000112f8(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    if (*0x1f0ac == 0) {
        (**arg1)(arg1);
    }
    iVar5 = 0;
    if (*(*0x1f078 + 0x24) != 5) {
        iVar6 = 0;
        iVar3 = *0x1f078;
        do {
            if (*(iVar6 + 0x28 + iVar3) != '\0') {
                uVar4 = 0;
                uVar2 = *(iVar6 + 0x18 + iVar3) / *(iVar6 + 0x20 + iVar3);
                if (uVar2 != 0) {
                    do {
                        iVar3 = (**(iVar6 + 0x38 + iVar3))(iVar6 + iVar3);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        *0x1f0ac = *0x1f0ac + 1;
                        uVar1 = (*0x1f0ac * 100) / *0x1f0a8;
                        if (*0x1f098 < uVar1) {
                            (**(arg1 + 8))(arg1);
                            *0x1f098 = uVar1;
                        }
                        uVar4 = uVar4 + 1;
                        iVar3 = *0x1f078;
                    } while (uVar4 < uVar2);
                }
                if (*(iVar6 + 0x29 + iVar3) != '\0') {
                    if (*0x1f158 == '\x01') {
                        *0xfdc33414 = *0xfdc33414 & 0xfffffffe;
                    }
                    else {
                        out(0xb2,0xb4);
                    }
                    iVar3 = *0x1f078;
                }
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar5 * 0x48;
        } while (*(iVar6 + 0x24 + iVar3) != 5);
    }
    if (*0x1f230 == '\0') {
        if (*0x1da30 == '\0') {
            (**(*0x1f138 + 0x58))(L"AmiFwVersion",0x1da00,3,0,0);
            goto code_r0x0001144a;
        }
        iVar5 = 1;
    }
    else {
        iVar5 = 2;
    }
    fcn.00012244(iVar5);
code_r0x0001144a:
    if (*0x1f0ac == *0x1f0a8) {
        (**(arg1 + 0x10))(arg1);
    }
    return 0;
}


/* fcn.0001d75e @ 0x1d75e */

int64_t fcn.0001d75e(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00016a7c @ 0x16a7c */

ulong fcn.00016a7c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    
    if (arg2 == 0) {
        return 0x8000000000000002;
    }
    piVar1 = CONCAT44(in_register_0000000c,arg1) + 0xffffc4;
    if (piVar1 != CONCAT44(in_register_0000000c,arg1)) {
        do {
            if ((((*piVar1 == *0x1d8a0) && (*0x1d8a0 == *piVar1)) && (*0x1d8a8 == piVar1[1])) &&
               (((*0x1d8b0 == *(piVar1 + 0x1c) && (*0x1d8b8 == *(piVar1 + 0x24))) && (*(piVar1 + 0x2c) == 0x4c4d4f52))))
            {
                *0x1f270 = *(piVar1 + 0x34);
                *0x1f250 = piVar1[7] * *(piVar1 + 0x34);
                *arg2 = piVar1 + 0x3c;
                return 0;
            }
            piVar1 = piVar1 + -4;
        } while (piVar1 != CONCAT44(in_register_0000000c,arg1));
    }
    return 0x800000000000000e;
}


/* fcn.000122c8 @ 0x122c8 */

uchar fcn.000122c8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar uVar5;
    
    iVar1 = fcn.00011f4c(0x1d910);
    iVar2 = fcn.00011f4c(0x1d880);
    iVar3 = fcn.00011ebc(0x1d910);
    iVar4 = fcn.00011ebc(0x1d880);
    uVar5 = 0;
    if ((((iVar1 == 0) || (iVar2 == 0)) || (*(iVar1 + 0x10) != *(iVar3 + 0x10))) || (*(iVar2 + 0x10) != *(iVar4 + 0x10))
       ) {
        uVar5 = 1;
        fcn.00012244(0);
    }
    else {
        *(iVar3 + 0x20) = 1;
        *(iVar3 + 0x24) = *(iVar3 + 0x24) & 0xfffffdff;
        *(iVar4 + 0x24) = *(iVar4 + 0x24) & 0xfffffdff;
        *(iVar4 + 0x20) = 1;
    }
    return uVar5;
}


/* fcn.00012720 @ 0x12720 */

void fcn.00012720(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t arg1;
    
    if (*0x1f0c0 != '\0') {
        arg1 = 0x1da98;
        iVar8 = 2;
        do {
            uVar7 = 0;
            iVar1 = fcn.00012674(arg1,0);
            iVar2 = fcn.00012674(arg1,CONCAT71(uVar7 >> 8,1));
            if ((iVar2 != 0) && (iVar1 != 0)) {
                if ((*(iVar2 + 0x13) & 1) == 0) {
                    iVar3 = 0x18;
                    uVar5 = *(iVar2 + 0x14) - 0x18;
                }
                else {
                    iVar3 = 0x20;
                    uVar5 = *(iVar2 + 0x18) - 0x20;
                }
                if ((*(iVar1 + 0x13) & 1) == 0) {
                    iVar4 = 0x18;
                    uVar6 = *(iVar1 + 0x14) - 0x18;
                }
                else {
                    iVar4 = 0x20;
                    uVar6 = *(iVar1 + 0x18) - 0x20;
                }
                if (((uVar5 <= uVar6) && (uVar5 != 0)) && (iVar4 + iVar1 != iVar3 + iVar2)) {
                    section..text(iVar4 + iVar1,iVar3 + iVar2,uVar5);
                }
            }
            arg1 = arg1 + 0x10;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
    }
    return;
}


/* fcn.0001169c @ 0x1169c */

void fcn.0001169c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    ushort uVar2;
    ulong uVar3;
    
    uVar1 = arg2 & 0xffffffff;
    if (arg3 == 5) {
        fcn.0001d75e(*0x1f078 + uVar1 * 0x48,0x48,0);
        *(*0x1f078 + 0x24 + uVar1 * 0x48) = 5;
    }
    else {
        *(*0x1f078 + uVar1 * 0x48) = *(arg1 + 0x10);
        *(*0x1f078 + 0x10 + uVar1 * 0x48) = *(arg1 + 0x18);
        *(*0x1f078 + 0x18 + uVar1 * 0x48) = *(arg1 + 0x1c);
        *(*0x1f078 + 0x20 + uVar1 * 0x48) = 0x1000;
        *(*0x1f078 + 0x24 + uVar1 * 0x48) = arg3;
        *(*0x1f078 + 0x28 + uVar1 * 0x48) = 1;
        *(*0x1f078 + 0x29 + uVar1 * 0x48) = 0;
        if ((*(arg1 + 0x1c) + *(arg1 + 0x10) == 0x100000000) || (uVar3 = 0x11518, arg3 == 3)) {
            uVar3 = 0x115bc;
        }
        *(*0x1f078 + 0x38 + uVar1 * 0x48) = uVar3;
        uVar2 = 0x14;
        if (arg3 == 2) {
            uVar2 = 0x28;
        }
        if (arg3 == 0) {
            uVar2 = 0x27;
        }
        if (arg3 == 1) {
            uVar2 = 0x26;
        }
        *(*0x1f078 + 0x42 + uVar1 * 0x48) = uVar2;
        *(*0x1f078 + 8 + uVar1 * 0x48) = 0;
        *(*0x1f078 + 0x40 + uVar1 * 0x48) = 0;
        *(*0x1f078 + 0x30 + uVar1 * 0x48) = 0;
    }
    return;
}


/* fcn.000119e8 @ 0x119e8 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000119e8(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t aiStack_38 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x1f0e8 + 0x138))(2,0x1d8e0,0,&var_28h,aiStack_38);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (var_28h != 0) {
            do {
                iVar1 = (**(*0x1f0e8 + 0x98))(*(aiStack_38[0] + uVar2 * 8),0x1d8e0,&var_20h);
                if (-1 < iVar1) {
                    iStackX_18 = 0;
                    aiStack_38[1] = 0;
                    iVar1 = (**(var_20h + 0x18))(var_20h,0x1db90,0x18,0,&iStackX_18,aiStack_38 + 1,auStackX_10);
                    if (-1 < iVar1) {
                        iStackX_18 = iStackX_18 + 0x10;
                        if (arg1 != iStackX_18) {
                            section..text(arg1,iStackX_18,0x78);
                        }
                        iStackX_18 = iStackX_18 + -0x10;
                        (**(*0x1f0e8 + 0x48))();
                        return 0;
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < var_28h);
        }
        (**(*0x1f0e8 + 0x48))(aiStack_38[0]);
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.00014384 @ 0x14384 */

ulong fcn.00014384(int64_t arg1,ulong noname_1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    
    if (((arg1 == 0) || (arg2 == 0)) || (uVar2 = fcn.000141e0(arg1,0xf4241), 1000000 < uVar2)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        *arg2 = 0;
        for (; *arg1 - 0x30 < 10; arg1 = arg1 + 2) {
            if (~(*arg1 - 0x30) / 10 < *arg2) {
                *arg2 = 0xffffffffffffffff;
                return 0x8000000000000003;
            }
            *arg2 = (*arg1 - 0x30) + *arg2 * 10;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011f98 @ 0x11f98 */

int64_t fcn.00011f98(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint *puVar4;
    int64_t iVar5;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0x10048;
    if (*0x1dba1 != '\0') {
        *0x1dba1 = '\0';
        iVar5 = (**(*0x1f0e8 + 0x140))(0x1d870,0,0x1f0b0);
        if (iVar5 < 0) {
            *0x1f0b0 = NULL;
            return iVar5;
        }
    }
    puVar4 = *0x1f050;
    uVar3 = *0x1e47c;
    uVar2 = *0x1e478;
    uVar1 = *0x1e474;
    if (*0x1f0b0 == NULL) {
        iVar5 = -0x5ffffffffffffffe;
    }
    else {
        **0x1f050 = *0x1e470;
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        *(*0x1f050 + 4) = 0x30;
        *(*0x1f050 + 6) = arg1 & 0xffffffff;
        *(*0x1f050 + 8) = 0xa000000000000002;
        iVar5 = (***0x1f0b0)(*0x1f0b0,*0x1f050,auStackX_10);
        if (-1 < iVar5) {
            iVar5 = *(*0x1f050 + 8);
        }
    }
    return iVar5;
}


/* fcn.00011ebc @ 0x11ebc */

int64_t * fcn.00011ebc(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    
    uVar2 = 0;
    if (*0x1f0b8 == NULL) {
        if (*0x1f048 == 0) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            iVar1 = fcn.00016a7c(*0x1f048,0x1f0b8);
        }
        if (iVar1 < 0) {
            return NULL;
        }
    }
    if (*0x1f250 / *0x1f270 != 0) {
        piVar3 = *0x1f0b8;
        do {
            if ((*piVar3 == *arg1) && (piVar3[1] == *(arg1 + 8))) {
                return piVar3;
            }
            piVar3 = piVar3 + *0x1f270;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *0x1f250 / *0x1f270);
    }
    return NULL;
}


/* fcn.00011f4c @ 0x11f4c */

int64_t * fcn.00011f4c(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    if (*0x1f0c8 != NULL) {
        if (*0x1f254 / *0x1f258 != 0) {
            piVar1 = *0x1f0c8;
            do {
                if ((*piVar1 == *arg1) && (piVar1[1] == *(arg1 + 8))) {
                    return piVar1;
                }
                piVar1 = piVar1 + *0x1f258;
                uVar2 = uVar2 + 1;
            } while (uVar2 < *0x1f254 / *0x1f258);
        }
    }
    return NULL;
}


/* fcn.00012468 @ 0x12468 */

void fcn.00012468(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t *puVar10;
    int iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    int *piVar16;
    int64_t iVar17;
    
    if (arg1 == '\0') {
        piVar16 = 0x1f240;
        iVar6 = *0x1f0b8;
        uVar9 = *0x1f270;
        uVar5 = *0x1f250;
    }
    else {
        piVar16 = 0x1f260;
        iVar6 = *0x1f0c8;
        uVar9 = *0x1f258;
        uVar5 = *0x1f254;
    }
    uVar15 = uVar5 / uVar9;
    *piVar16 = uVar15;
    uVar3 = fcn.00012ae8(uVar15 * 0x18);
    iVar17 = 0;
    *(piVar16 + 2) = uVar3;
    if (uVar15 != 0) {
        puVar10 = iVar6 + 0x18;
        do {
            uVar12 = 0;
            if (arg1 == '\0') {
                iVar6 = *puVar10 + *0x1f048;
            }
            else {
                iVar6 = *(puVar10 + -2);
            }
            iVar11 = 0;
            *(iVar17 + *(piVar16 + 2)) = iVar6;
            iVar6 = *(piVar16 + 2);
            iVar2 = *(iVar17 + iVar6);
            if (*(iVar2 + 0x28) == 0x4856465f) {
                uVar1 = *(iVar2 + 0x34);
                uVar5 = *(iVar2 + 0x30);
                if (uVar1 != 0) {
                    uVar5 = uVar1 + *(uVar1 + 0x10 + iVar2);
                }
                uVar13 = uVar5;
                if ((uVar5 & 7) != 0) {
                    uVar5 = uVar5 + (8 - (uVar5 & 7));
                    uVar13 = uVar5;
                }
                while( true ) {
                    uVar8 = uVar5;
                    iVar11 = uVar12;
                    if ((*(iVar2 + 0x20) <= uVar8) ||
                       (((*(uVar8 + iVar2) == -1 && (*(uVar8 + 8 + iVar2) == -1)) && (*(uVar8 + 0x10 + iVar2) == -1))))
                    break;
                    uVar12 = iVar11 + 1;
                    if ((*(uVar8 + 0x13 + iVar2) & 1) == 0) {
                        uVar14 = CONCAT21(CONCAT11(*(uVar8 + 0x16 + iVar2),*(uVar8 + 0x15 + iVar2)),
                                          *(uVar8 + 0x14 + iVar2));
                    }
                    else {
                        uVar14 = *(uVar8 + 0x18 + iVar2);
                    }
                    uVar5 = uVar5 + uVar14;
                    if ((uVar5 & 7) != 0) {
                        uVar5 = uVar5 + (8 - (uVar5 & 7));
                    }
                }
                puVar4 = fcn.00012ae8(uVar12 << 3);
                if (puVar4 == NULL) {
                    iVar11 = 0;
                }
                else {
                    *(iVar17 + 0x10 + iVar6) = puVar4;
                    while ((uVar13 < *(iVar2 + 0x20) &&
                           (((piVar7 = uVar13 + iVar2, *piVar7 != -1 || (piVar7[1] != -1)) || (piVar7[2] != -1))))) {
                        *puVar4 = piVar7;
                        puVar4 = puVar4 + 1;
                        if ((*(piVar7 + 0x13) & 1) == 0) {
                            uVar5 = *(piVar7 + 0x14);
                        }
                        else {
                            uVar5 = *(piVar7 + 3);
                        }
                        uVar13 = uVar13 + uVar5;
                        if ((uVar13 & 7) != 0) {
                            uVar13 = uVar13 + (8 - (uVar13 & 7));
                        }
                    }
                }
            }
            puVar10 = puVar10 + uVar9;
            *(iVar17 + 8 + *(piVar16 + 2)) = iVar11;
            iVar17 = iVar17 + 0x18;
            uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
    }
    return;
}


/* fcn.00012674 @ 0x12674 */

int64_t * fcn.00012674(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    
    if (*0x1dba0 != '\0') {
        fcn.00012468(CONCAT71(arg1 >> 8,1));
        fcn.00012468(0);
        *0x1dba0 = '\0';
    }
    puVar2 = 0x1f240;
    if (arg2 != '\0') {
        puVar2 = 0x1f260;
    }
    uVar4 = 0;
    if (*puVar2 != 0) {
        do {
            uVar6 = 0;
            uVar3 = *(*(puVar2 + 2) + 8 + uVar4 * 0x18);
            piVar5 = *(*(puVar2 + 2) + 0x10 + uVar4 * 0x18);
            if (uVar3 != 0) {
                do {
                    piVar1 = *piVar5;
                    if ((*arg1 == *piVar1) && (*(arg1 + 8) == piVar1[1])) {
                        return piVar1;
                    }
                    uVar6 = uVar6 + 1;
                    piVar5 = piVar5 + 1;
                } while (uVar6 < uVar3);
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < *puVar2);
    }
    return NULL;
}


/* fcn.000168b8 @ 0x168b8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000168b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char16_t *pcVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iStackX_20;
    int64_t var_48h;
    ulong in_stack_ffffffffffffffa8;
    uint uVar9;
    ulong in_stack_ffffffffffffffb0;
    uint32_t uVar11;
    uint64_t uVar10;
    uchar auStack_38 [16];
    int64_t var_bp_10h;
    
    uVar9 = in_stack_ffffffffffffffa8 >> 0x20;
    uVar11 = in_stack_ffffffffffffffb0 >> 0x20;
    iVar4 = (**(*0x1f0e8 + 0x140))(0x1d990,0,&iStackX_20);
    if (iVar4 < 0) {
        return -0x7ffffffffffffff2;
    }
    iVar3 = (**(iStackX_20 + 0x50))();
    if (iVar3 == 2) {
        (**(*0x1f0e8 + 0x140))(0x1d950,0,0x1f280);
        iVar2 = *(*(*0x1f280 + 0x18) + 8);
        uVar1 = *(iVar2 + 4);
        uVar8 = *(iVar2 + 8);
        fcn.00016778(arg3);
        uVar10 = uVar11 << 0x20;
        uVar7 = uVar1 / 5;
        (**(iStackX_20 + 0x18))(L"Flash Update",uVar7,uVar8 - 0x50,9,CONCAT44(uVar9,0xffffff),uVar10);
        (**(iStackX_20 + 0x18))(0,uVar7,uVar8 - 0x3c,9,0xffffff,uVar10 & 0xffffffff00000000);
        return iVar4;
    }
    if (arg3 == 0) {
        if (iVar3 == 1) {
            (**(*(*0x1f0e0 + 0x40) + 0x30))(*(*0x1f0e0 + 0x40));
        }
        uVar5 = 1;
        arg3 = 0;
    }
    else {
        uVar5 = 2;
        if (arg3 == 100) {
            (**(iStackX_20 + 0x78))(2,L"Flash Update",0,0,100,0x1f1a0,auStack_38);
            pcVar6 = NULL;
            uVar5 = 3;
            arg3 = 100;
            goto code_r0x00016a58;
        }
    }
    pcVar6 = L"Flash Update";
code_r0x00016a58:
    (**(iStackX_20 + 0x78))(uVar5,pcVar6,0,0,arg3,0x1f1a0,auStack_38);
    return iVar4;
}


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00014470 @ 0x14470 */

int64_t fcn.00014470(void)

{
    if (*0x1f0f8 == 0) {
        (**(*0x1f0e8 + 0x140))(0x1d890,0,0x1f0f8);
    }
    return *0x1f0f8;
}


/* fcn.0001127c @ 0x1127c */

ulong fcn.0001127c(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    (**(*0x1f360 + 0x28))();
    uVar3 = 0;
    pcVar1 = 0x16b18;
    while (pcVar1 != NULL) {
        (*pcVar1)();
        uVar3 = uVar3 + 1;
        pcVar1 = *(uVar3 * 8 + 0x1e300);
    }
    if (arg1 == '\0') {
        uVar2 = 0;
    }
    else {
        fcn.00011040(0x1e3c8,0x1e350);
        (**(*0x1f138 + 0x68))(0,0,0,0);
        uVar2 = 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(int64_t arg1,int64_t arg2)

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


/* fcn.00012bcc @ 0x12bcc */

bool fcn.00012bcc(uint32_t arg1)

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


/* fcn.00016700 @ 0x16700 */

int64_t fcn.00016700(int64_t arg1,int64_t arg2)

{
    fcn.000166a0((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000166a0 @ 0x166a0 */

void fcn.000166a0(int64_t arg1)

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
            fcn.000103a0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00012dac @ 0x12dac */

ulong fcn.00012dac(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.00016700(0xf,uVar1);
            uVar2 = in(uVar1);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00012d24 @ 0x12d24 */

ulong fcn.00012d24(int64_t arg1)

{
    ushort uVar1;
    uint8_t uVar2;
    uchar uVar3;
    ushort uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 1) != 0) {
        do {
            if (0x1ffff < uVar5) {
                return 0x8000000000000007;
            }
            uVar4 = 0x60;
            if (arg1 != '`') {
                uVar4 = 0x62;
            }
            uVar3 = in(uVar4);
            out(0x80,uVar3);
            fcn.00016700(5000,0x80);
            uVar2 = in(uVar1);
            uVar5 = uVar5 + 1;
        } while ((uVar2 & 1) != 0);
        if (0x1ffff < uVar5) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00012cac @ 0x12cac */

ulong fcn.00012cac(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar4 = uVar1;
    uVar2 = in(uVar4);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.00016700(0xf,uVar1);
            uVar2 = in(uVar4);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    out(uVar4,arg2);
    return 0;
}


/* fcn.00012e10 @ 0x12e10 */

int64_t fcn.00012e10(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    ushort uVar8;
    
    uVar1 = arg2;
    cVar5 = arg1;
    iVar4 = fcn.00012dac(arg1);
    uVar7 = 0;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg1_00 = CONCAT71(arg1 >> 8,cVar5);
    fcn.00012d24(arg1_00);
    uVar6 = CONCAT71(arg1_00 >> 8,cVar5);
    fcn.00012cac(uVar6,CONCAT71(arg2 >> 8,uVar1));
    fcn.00012dac(CONCAT71(uVar6 >> 8,cVar5));
    uVar8 = 0x60;
    uVar2 = 100;
    uVar6 = 0;
    if (cVar5 != '`') {
        uVar2 = 0x66;
    }
    arg2_00 = uVar2;
    uVar3 = in(uVar2);
    if ((uVar3 & 2) != 0) {
        do {
            if (0x1ffff < uVar7) goto code_r0x00012eb2;
            uVar6 = 0;
            fcn.00016700(0xf,arg2_00);
            arg2_00 = uVar2;
            uVar3 = in(uVar2);
            uVar7 = uVar7 + 1;
        } while ((uVar3 & 2) != 0);
        if (0x1ffff < uVar7) goto code_r0x00012eb2;
    }
    if (cVar5 != '`') {
        uVar8 = 0x62;
    }
    out(uVar8,arg3);
code_r0x00012eb2:
    fcn.00012d24(CONCAT71(uVar6 >> 8,cVar5));
    return iVar4;
}


/* fcn.0001d750 @ 0x1d750 */

int64_t fcn.0001d750(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001614c @ 0x1614c */

ulong fcn.0001614c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x1f140 + 0x68);
    iVar2 = *(*0x1f140 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.0001644c(iVar2,arg1,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.000164c4 @ 0x164c4 */

ulong fcn.000164c4(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int16_t *piVar4;
    
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        piVar4 = *arg2;
        do {
            iVar1 = *piVar4;
            while( true ) {
                if (iVar1 == -1) {
                    return 0x800000000000000e;
                }
                piVar4 = piVar4 + piVar4[1];
                if (*piVar4 == 4) break;
                iVar1 = *piVar4;
            }
            iVar3 = fcn.0001644c(piVar4 + 8,arg1,0x10);
        } while (iVar3 != 0);
        *arg2 = piVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001644c @ 0x1644c */

int64_t fcn.0001644c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.0001d7b0 @ 0x1d7b0 */

int64_t fcn.0001d7b0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00016eb8 @ 0x16eb8 */

uchar fcn.00016eb8(ulong param_1,int64_t param_2)

{
    char extraout_AL;
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    uchar uVar4;
    int iVar5;
    int iVar6;
    ushort uStack_e8;
    uint uStack_e6;
    uint uStack_e2;
    ushort uStack_de;
    uchar auStack_d8 [6];
    int iStack_d2;
    ushort uStack_c8;
    uint uStack_c6;
    uint uStack_c2;
    ushort uStack_be;
    ushort uStack_b8;
    uint uStack_b6;
    uint uStack_b2;
    ushort uStack_a8;
    uint uStack_a6;
    uint uStack_a2;
    uint uStack_9e;
    uint uStack_9a;
    uint uStack_96;
    ushort uStack_90;
    uint uStack_8e;
    uint uStack_8a;
    uint uStack_86;
    uint uStack_82;
    uint uStack_7e;
    uchar auStack_78 [6];
    int iStack_72;
    uchar auStack_68 [6];
    int iStack_62;
    uchar auStack_58 [6];
    int iStack_52;
    char cStack_45;
    uchar auStack_40 [6];
    int iStack_3a;
    
    fcn.0001b264();
    if (((extraout_AL != '\0') || (*0xfed40000 == 0xff)) || (*0xfed40000 == 0)) {
        return 0;
    }
    uVar4 = 2;
    if ((*0xfed40000 & 0x20) == 0) {
        iVar5 = 30000;
        *0xfed40000 = 2;
        do {
            iVar6 = 5;
            do {
                fcn.00016700(0x1e,param_2);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
        } while ((((*0xfed40000 & 0x20) == 0) || (-1 < *0xfed40000)) && (iVar5 = iVar5 + -1, iVar5 != 0));
    }
    uStack_a6 = 0x16000000;
    uStack_a8 = 0xc100;
    cVar1 = fcn.0001b264();
    if (cVar1 == '\0') {
        uStack_a2 = 0x65000000;
        uStack_9e = 0x4000000;
        uStack_9a = 0x4000000;
        uStack_96 = 0x8010000;
        fcn.00016d18(&uStack_a8,0x16,auStack_40,0x24);
        if (iStack_3a == 0x26000000) {
            uStack_c8 = 0xc100;
            uStack_be = 0x100;
            uStack_c6 = 0xc000000;
            uStack_c2 = 0x99000000;
            fcn.0001d75e(auStack_78,10,0);
            fcn.00016d18(&uStack_c8,0xc,auStack_78,10);
            iStack_3a = iStack_72;
        }
        if (iStack_3a != 0) {
            return 2;
        }
    }
    uStack_e8 = 0xc100;
    uStack_de = 0x2000;
    uStack_e6 = 0xc000000;
    uStack_e2 = 0xa000040;
    fcn.0001d75e(auStack_d8,10,0);
    fcn.00016d18(&uStack_e8,0xc,auStack_d8,10);
    fcn.0001d75e(auStack_d8,10,0);
    uStack_de = 0x800;
    fcn.00016d18(&uStack_e8,0xc,auStack_d8,10);
    if (iStack_d2 != 0) {
        return 2;
    }
    uStack_90 = 0xc100;
    uStack_8e = 0x16000000;
    cVar1 = fcn.0001b264();
    if (cVar1 == '\0') {
        uStack_8a = 0x65000000;
        uStack_86 = 0x4000000;
        uStack_82 = 0x4000000;
        uStack_7e = 0x9010000;
        fcn.00016d18(&uStack_90,0x16,auStack_58,0x15);
        if (iStack_52 != 0) goto code_r0x000170d8;
    }
    if (cStack_45 != '\0') {
        return 3;
    }
code_r0x000170d8:
    uStack_b8 = 0xc100;
    uStack_b6 = 0xa000000;
    uStack_b2 = 0x5d000000;
    fcn.0001d75e(auStack_68,10,0);
    uVar3 = 0;
    fcn.00016d18(&uStack_b8,10,auStack_68,10);
    if (iStack_62 == 0) {
        uVar4 = 0;
    }
    else if (((iStack_62 + 0xfa000000U & 0xfeffffff) == 0) && (iVar2 = fcn.00016e04(), -1 < iVar2)) {
        uVar4 = 1;
    }
    iVar2 = CONCAT71(uVar3 >> 8,0x20);
    iVar5 = 0x1d4c;
    cVar1 = fcn.0001af30(0xfed40000,iVar2);
    if (cVar1 != '\0') {
        iVar2 = CONCAT71(iVar2 >> 8,0x20);
        *0xfed40000 = 0x20;
        cVar1 = fcn.0001af30(0xfed40000,iVar2);
        if (cVar1 != '\0') {
            do {
                iVar6 = 5;
                do {
                    fcn.00016700(0x1e,iVar2);
                    iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                iVar2 = CONCAT71(iVar2 >> 8,0x20);
                iVar5 = iVar5 + -1;
                cVar1 = fcn.0001af30(0xfed40000,iVar2);
            } while ((cVar1 != '\0') && (iVar5 != 0));
            fcn.0001af30(0xfed40000,CONCAT71(iVar2 >> 8,0x20));
        }
    }
    return uVar4;
}


/* fcn.00013290 @ 0x13290 */

uchar * fcn.00013290(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000141e0 @ 0x141e0 */

uint64_t fcn.000141e0(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00014444 @ 0x14444 */

uint64_t fcn.00014444(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.000141bc @ 0x141bc */

void fcn.000141bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013454(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001638c @ 0x1638c */

int64_t fcn.0001638c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x1f138 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x1f130 + 0x48))();
        }
        iVar1 = fcn.000161ac(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x1f138 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.000146cc @ 0x146cc */

void fcn.000146cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            if (uVar4 == arg2 - 1U) {
                cVar1 = *(arg1 + uVar4 * 2);
                cVar3 = '\0';
            }
            else {
                cVar3 = *(arg1 + uVar4 * 2);
                if (cVar3 - 0x30U < 10) {
                    cVar3 = cVar3 + -0x30;
                }
                else if (cVar3 + 0xbfU < 6) {
                    cVar3 = cVar3 + -0x37;
                }
                else {
                    cVar3 = cVar3 + -0x57;
                }
                cVar1 = *(arg1 + 2 + uVar4 * 2);
            }
            if (cVar1 - 0x30U < 10) {
                uVar2 = cVar1 - 0x30;
            }
            else if (cVar1 + 0xbfU < 6) {
                uVar2 = cVar1 - 0x37;
            }
            else {
                uVar2 = cVar1 + 0xa9;
            }
            uVar4 = uVar4 + 2;
            *arg3 = cVar3 << 4 | uVar2;
            arg3 = arg3 + 1;
        } while (uVar4 < arg2);
    }
    return;
}


/* fcn.00012c78 @ 0x12c78 */

ulong fcn.00012c78(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1f0e8 + 0x98))(param_1,0x1d8d0,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00012c28 @ 0x12c28 */

char * fcn.00012c28(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00012bcc(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00012b1c @ 0x12b1c */

int64_t fcn.00012b1c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x1f0e8 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010340(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00014214 @ 0x14214 */

ulong fcn.00014214(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    int16_t *piVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int16_t iVar4;
    
    iVar4 = 0;
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    piVar2 = 0x1e9c0;
    fcn.000141e0(0x1e9c0,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (piVar2 <= arg1) {
        if (arg1 < piVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (piVar2 < arg1) goto code_r0x00014285;
    }
    if (piVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00014285:
    if (*0x1e9c0 != 0) {
        iVar3 = piVar2 - arg1;
        iVar1 = *0x1e9c0;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(iVar3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = iVar4;
    return 0;
}


/* fcn.000132c4 @ 0x132c4 */

ulong fcn.000132c4(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = "0123456789ABCDEFG"[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = "0123456789ABCDEFG"[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00013290(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000142b4 @ 0x142b4 */

ulong fcn.000142b4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.000141e0(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000141e0(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00014355;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00014355:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.000148b4 @ 0x148b4 */

int16_t * fcn.000148b4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    uint16_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint16_t *puVar4;
    uint64_t arg1_00;
    uint64_t uVar5;
    int16_t *arg1_01;
    int64_t iVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    uint in_register_00000014;
    uint16_t *puVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    char16_t *pcVar12;
    
    puVar9 = CONCAT44(in_register_00000014,arg2);
    uVar8 = 0;
    uVar10 = uVar8;
    if (puVar9 != NULL) {
        uVar1 = *puVar9;
        uVar10 = 0;
        puVar4 = puVar9;
        while (uVar1 != 0) {
            puVar4 = puVar4 + 1;
            uVar10 = uVar10 + 1;
            uVar1 = *puVar4;
        }
    }
    arg1_00 = uVar8;
    uVar5 = uVar8;
    if (arg3 != 0) {
        arg1_00 = fcn.00012c78(arg3);
        if (arg1_00 == 0) {
            return NULL;
        }
        uVar5 = fcn.00012c28(arg1_00);
    }
    iVar6 = uVar5 + uVar10 * 2;
    arg2_00 = iVar6 * 2 + 0x32;
    arg1_01 = fcn.00012b1c(iVar6,arg2_00 * 2);
    if (arg1_01 != NULL) {
        fcn.00014214(arg1_01,arg2_00);
        iVar2 = *arg1_01;
        piVar11 = arg1_01;
        while (iVar2 != 0) {
            piVar11 = piVar11 + 1;
            uVar8 = uVar8 + 1;
            iVar2 = *piVar11;
        }
        piVar11 = arg1_01 + uVar8;
        if (arg1 != 0) {
            uVar10 = 0;
            do {
                fcn.000132c4(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,arg3,*(uVar10 + arg1));
                iVar6 = fcn.000141e0(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar10 < 0x10);
        }
        pcVar12 = L"&NAME=";
        fcn.000142b4(arg1_01,arg2_00,0x1ea20);
        uVar8 = 0;
        iVar2 = *piVar11;
        piVar7 = piVar11;
        uVar10 = uVar8;
        while (iVar2 != 0) {
            piVar7 = piVar7 + 1;
            uVar10 = uVar10 + 1;
            iVar2 = *piVar7;
        }
        piVar11 = piVar11 + uVar10;
        if (puVar9 != NULL) {
            for (; *puVar9 != 0; puVar9 = puVar9 + 1) {
                fcn.000132c4(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,pcVar12,*puVar9);
                iVar6 = fcn.000141e0(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                piVar11 = piVar11 + iVar6;
            }
        }
        pcVar12 = L"&PATH=";
        fcn.000142b4(arg1_01,arg2_00,0x1ea30);
        iVar2 = *piVar11;
        piVar7 = piVar11;
        uVar10 = uVar8;
        while (iVar2 != 0) {
            piVar7 = piVar7 + 1;
            uVar10 = uVar10 + 1;
            iVar2 = *piVar7;
        }
        piVar11 = piVar11 + uVar10;
        if (uVar5 != 0) {
            do {
                fcn.000132c4(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,pcVar12,*(uVar8 + arg1_00));
                iVar6 = fcn.000141e0(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar8 = uVar8 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar8 < uVar5);
        }
        *piVar11 = 0;
        bVar3 = false;
        iVar2 = *arg1_01;
        piVar11 = arg1_01;
        while (iVar2 != 0) {
            iVar2 = *piVar11;
            if (iVar2 == 0x3d) {
                bVar3 = true;
            }
            else if (iVar2 == 0x26) {
                bVar3 = false;
            }
            else if ((bVar3) && (iVar2 - 0x41U < 6)) {
                *piVar11 = iVar2 + 0x20;
            }
            piVar11 = piVar11 + 1;
            iVar2 = *piVar11;
        }
        return arg1_01;
    }
    return NULL;
}


/* fcn.00014b24 @ 0x14b24 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00014b24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    uint64_t arg2_00;
    uint8_t uVar1;
    int16_t iVar2;
    int16_t *noname_0;
    uint64_t uVar3;
    uint16_t *puVar4;
    int16_t *arg3_00;
    int64_t iVar5;
    uint16_t *puVar6;
    int64_t iVar7;
    uint16_t *puVar8;
    uint16_t uVar9;
    uint64_t uVar10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    int64_t var_50h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    puVar6 = arg3 + 0x16;
    uVar10 = 0;
    iStackX_18 = 0;
    uVar1 = *puVar6;
    uVar3 = 0;
    while (uVar1 != 0) {
        uVar3 = uVar3 + 1;
        uVar1 = *(puVar6 + uVar3);
    }
    arg2_00 = uVar3 + 1;
    iStackX_20 = arg4;
    puVar4 = fcn.00012b1c(0,arg2_00 * 2);
    uVar9 = 0;
    if (puVar4 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (((puVar6 == NULL) || (999999 < uVar3)) ||
       (puVar8 = puVar4, uVar3 = fcn.00014444(puVar6,arg2_00), arg2_00 <= uVar3)) goto code_r0x00014bec;
    if (puVar4 < puVar6) {
code_r0x00014bc9:
        if (puVar6 < puVar4 + arg2_00) goto code_r0x00014bec;
    }
    else {
        if (puVar4 < uVar3 + 1 + puVar6) goto code_r0x00014bec;
        if (puVar4 <= puVar6) goto code_r0x00014bc9;
    }
    for (; *puVar6 != 0; puVar6 = puVar6 + 1) {
        *puVar8 = *puVar6;
        puVar8 = puVar8 + 1;
    }
    *puVar8 = uVar9;
code_r0x00014bec:
    if (auStack_48 != arg3 + 2) {
        section..text(auStack_48,arg3 + 2,0x10);
    }
    arg3_00 = fcn.000148b4(auStack_48,puVar4,arg2);
    iVar5 = 0;
    iVar2 = *arg3_00;
    noname_0 = arg3_00;
    while (iVar2 != 0) {
        noname_0 = noname_0 + 1;
        iVar5 = iVar5 + 1;
        iVar2 = *noname_0;
    }
    iStackX_18 = iVar5 * 2 + 0x42;
    iVar5 = fcn.00012b1c(noname_0,iStackX_18);
    if (iVar5 == 0) {
        iVar7 = -0x7ffffffffffffff7;
        *in_stack_00000028 = 0;
        uVar10 = 0;
    }
    else {
        fcn.00013260(iVar5,iStackX_18,0x1ea40,arg3_00);
        iStackX_18 = 0;
        puVar6 = puVar4;
        iVar7 = (**(*0x1f138 + 0x48))(puVar4,auStack_48,0,&iStackX_18,0);
        if (iVar7 == -0x7ffffffffffffffb) {
            uVar10 = fcn.00012b1c(puVar6,iStackX_18);
            iVar7 = (**(*0x1f138 + 0x48))(puVar4,auStack_48,0,&iStackX_18,uVar10);
            if (-1 < iVar7) {
                iVar7 = (**(arg1 + 0x18))(arg1,iVar5,uVar10,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
            }
        }
    }
    (**(*0x1f0e8 + 0x48))(puVar4);
    if (uVar10 != 0) {
        (**(*0x1f0e8 + 0x48))(uVar10);
    }
    (**(*0x1f0e8 + 0x48))(arg3_00);
    if (iVar5 != 0) {
        (**(*0x1f0e8 + 0x48))(iVar5);
    }
    return iVar7;
}


/* fcn.00014d6c @ 0x14d6c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00014d6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    bool bVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    char *arg3_00;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t *in_stack_00000028;
    int16_t *piStack_70;
    int64_t *piStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int8_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar13 = 0;
    iStack_50 = 0;
    piStack_70 = NULL;
    bVar2 = false;
    uVar3 = (**(*0x1f130 + 0x140))(0x1dc68,0,0x1f120);
    if (uVar3 < 0) {
        return uVar3;
    }
    uVar3 = (**(*0x1f130 + 0x140))(0x1dcc8,0,&iStack_50);
    if (uVar3 < 0) {
        return uVar3;
    }
    iStack_60 = 0;
    iVar4 = (**(*0x1f120 + 0x18))(*0x1f120,0,0,&iStack_60,&var_38h);
    if ((iVar4 == -0x7ffffffffffffffb) && (piVar5 = fcn.00012b1c(0x8000000000000005,iStack_60 + 8), piVar5 != NULL)) {
        iVar4 = (**(*0x1f120 + 0x18))(*0x1f120,0,0,&iStack_60,piVar5);
        if (iVar4 < 0) {
            iVar4 = *0x1f0e8;
        }
        else {
            bVar1 = false;
            if (*piVar5 != 0) {
                piVar11 = piVar5;
                do {
                    (**(*0x1f120 + 0x50))(*0x1f120,*piVar11,&var_40h);
                    if ((_var_40h == arg2) && (*piVar11 == arg1)) {
                        bVar1 = true;
                        break;
                    }
                    uVar13 = uVar13 + 1;
                    piVar11 = piVar5 + uVar13;
                    bVar1 = false;
                } while (*piVar11 != 0);
            }
            (**(*0x1f130 + 0x48))(piVar5);
            if (!bVar1) {
                return 0x800000000000000e;
            }
            iVar4 = 0;
            piStack_68 = NULL;
            uVar3 = (**(*0x1f120 + 0x20))(*0x1f120,arg1,&stack0xffffffffffffffa8,0);
            if ((uVar3 < 0) && (uVar3 != 0x8000000000000005)) {
                return uVar3;
            }
            (**(*0x1f130 + 0x40))(4,iVar4,&piStack_68);
            if (piStack_68 == NULL) {
                return 0x8000000000000009;
            }
            (**(*0x1f120 + 0x20))(*0x1f120,arg1,&stack0xffffffffffffffa8);
            piVar5 = piStack_68;
            uVar3 = 0x14;
            bVar1 = false;
            if (0x14 < *(piStack_68 + 2)) {
                do {
                    bVar1 = bVar2;
                    if (bVar2) break;
                    puVar9 = uVar3 + piVar5;
                    uVar10 = *puVar9 & 0xffffff;
                    uVar14 = uVar3 + uVar10;
                    uVar3 = uVar14;
                    if ((*(puVar9 + 3) == '\x02') && (uVar13 = 4, 4 < uVar10)) {
                        do {
                            _var_40h = uVar13 + puVar9;
                            uVar12 = uVar13 + (_var_40h[1] & 0x7f);
                            uVar13 = uVar12;
                            if ((*_var_40h == '\x0e') && (iVar6 = fcn.0001644c(_var_40h + 2,arg3,0x10), iVar6 == 0))
                            {
                                bVar2 = true;
                                break;
                            }
                        } while (uVar12 < uVar10);
                    }
                    bVar1 = bVar2;
                } while (uVar14 < *(piVar5 + 2));
            }
            *arg4 = 0;
            *in_stack_00000028 = 0;
            if (bVar1) {
                do {
                    iVar6 = 0;
                    arg3_00 = _var_40h + (_var_40h[1] & 0x7f);
                    if (((*arg3_00 == '$') &&
                        (iVar7 = fcn.00014b24(iStack_50,arg2,arg3_00,&piStack_70,iVar4), -1 < iVar7)) &&
                       (piStack_70 != NULL)) {
                        piVar8 = *arg4;
                        if (piVar8 == NULL) {
                            *arg4 = piStack_70;
                        }
                        else {
                            iVar7 = iVar6;
                            for (; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar7 = iVar7 + 1;
                            }
                            for (piVar8 = piStack_70; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar6 = iVar6 + 1;
                            }
                            uVar3 = (iVar6 + iVar7) * 2 + 8;
                            iVar6 = fcn.00012b1c(iVar6,uVar3);
                            if (iVar6 == 0) {
                                return 0x8000000000000009;
                            }
                            uVar3 = uVar3 >> 1;
                            fcn.000142b4(iVar6,uVar3,*arg4);
                            fcn.000142b4(iVar6,uVar3,0x1ea74);
                            fcn.000142b4(iVar6,uVar3,piStack_70);
                            (**(*0x1f130 + 0x48))(*arg4);
                            (**(*0x1f130 + 0x48))(piStack_70);
                            *arg4 = iVar6;
                            *in_stack_00000028 = iVar6;
                            piStack_70 = NULL;
                        }
                    }
                    _var_40h = arg3_00;
                    if (*arg3_00 == ')') {
                        if (piStack_68 != NULL) {
                            (**(*0x1f130 + 0x48))();
                        }
                        return ~-(*arg4 != 0) & 0x800000000000000e;
                    }
                } while( true );
            }
            iVar4 = *0x1f130;
        }
        (**(iVar4 + 0x48))(piVar5);
    }
    return 0x800000000000000e;
}


/* fcn.00014520 @ 0x14520 */

void fcn.00014520(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    
    piVar6 = arg1 + 4;
    for (uVar5 = 0;
        ((((iVar2 = piVar6[-2], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
         (((iVar2 = piVar6[-1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) &&
          ((0x19 < iVar2 - 0x47U && ((iVar2 = *piVar6, iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)))))))) &&
        ((0x19 < iVar2 - 0x47U &&
         ((((iVar2 = piVar6[1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
          (uVar5 < *arg2 - 1U)))))); uVar5 = uVar5 + 1) {
        cVar1 = piVar6[-2];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 & 0xf) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[-1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = *piVar6;
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        piVar6 = piVar6 + 4;
        *(arg3 + uVar5 * 2) = uVar3 | uVar4;
    }
    *arg2 = uVar5;
    *(arg3 + uVar5 * 2) = 0;
    return;
}


/* fcn.000161d8 @ 0x161d8 */

int64_t fcn.000161d8(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.000161ac(arg1);
    if (iVar1 != 0) {
        (**(*0x1f130 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.000161ac @ 0x161ac */

ulong fcn.000161ac(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x1f130 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001474c @ 0x1474c */

uint64_t fcn.0001474c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcStackX_8;
    char *pcStackX_18;
    
    uVar4 = 0;
    pcStackX_8 = NULL;
    uVar6 = uVar4;
    piVar5 = arg1;
    while( true ) {
        iVar1 = *piVar5;
        while ((iVar1 != 0x26 && (iVar1 != 0))) {
            uVar6 = uVar6 + 1;
            iVar1 = *(arg1 + uVar6 * 2);
        }
        if (*(arg1 + uVar6 * 2) == 0) break;
        uVar6 = uVar6 + 1;
        piVar5 = arg1 + uVar6 * 2;
        iVar2 = fcn.0001644c(piVar5,*0x1eb10,10);
        if (iVar2 == 0) {
            arg1 = arg1 + uVar6 * 2;
            uVar6 = uVar4;
            for (piVar5 = arg1 + 10;
                ((iVar1 = *piVar5, iVar1 - 0x30U < 0x37 && (6 < iVar1 - 0x3aU)) && (0x19 < iVar1 - 0x47U));
                piVar5 = piVar5 + 1) {
                uVar6 = uVar6 + 1;
            }
            pcVar7 = uVar6 >> 1;
            uVar3 = (**(*0x1f130 + 0x40))(4,pcVar7,&pcStackX_8);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                pcVar7 = pcStackX_8;
            }
            else {
                fcn.000146cc(arg1 + 10,uVar6,pcStackX_8);
            }
            if (-1 < uVar4) {
                if (((pcStackX_8 == NULL) || (pcVar7 < 0x4)) ||
                   ((pcVar7 < *(pcStackX_8 + 2) || ((4 < *pcStackX_8 - 1U && (*pcStackX_8 != '\x7f')))))) {
                    uVar4 = 0x800000000000000e;
                }
                else {
                    pcStackX_18 = pcStackX_8;
                    uVar4 = (**(*0x1f130 + 0xb8))(0x1dda8,&pcStackX_18,arg2);
                }
                (**(*0x1f130 + 0x48))(pcStackX_8);
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001626c @ 0x1626c */

int64_t fcn.0001626c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x1ddd8;
        }
        arg1_00 = fcn.00016344(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.00016218(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.000161ac(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.0001d7b0(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.0001d7b0(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x1ddd8;
    }
    return arg1_00;
}


/* fcn.000144ac @ 0x144ac */

int64_t fcn.000144ac(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    if (*0x1f118 == 0x1ead0) {
        *0x1f118 = 0;
    }
    iVar1 = fcn.0001638c(0x1ea00,0x1dc78,0,auStackX_10);
    iVar2 = 0x1ead0;
    if (-1 < iVar1) {
        iVar2 = *0x1f118;
    }
    *0x1f118 = iVar2;
    return iVar2;
}


/* fcn.000159d4 @ 0x159d4 */

ulong fcn.000159d4(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((arg1 != 0) &&
       (((*0x1f128 != 0 || (iVar1 = (**(*0x1f130 + 0x140))(0x1dcb8,0,0x1f128), -1 < iVar1)) &&
        (iVar1 = (**(*0x1f128 + 0x18))(*0x1f128,arg1,0,&iStackX_8), iVar1 == -0x7ffffffffffffffb)))) {
        uVar2 = fcn.000161ac(iStackX_8);
        iVar1 = (**(*0x1f128 + 0x18))(*0x1f128,arg1,uVar2,&iStackX_8);
        if (-1 < iVar1) {
            return uVar2;
        }
        (**(*0x1f130 + 0x48))(uVar2);
    }
    return 0;
}


/* fcn.000158b4 @ 0x158b4 */

int64_t fcn.000158b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    char cVar2;
    char *pcVar3;
    int64_t arg1_00;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t arg3_00;
    char *arg2_00;
    char *pcVar7;
    int64_t *piVar8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg3;
    aiStackX_18[1] = arg4;
    pcVar6 = NULL;
    if ((arg1 != 0) && (arg2 != 0)) {
        piVar8 = &iStackX_10;
        pcVar5 = arg2;
        do {
            arg2_00 = NULL;
            pcVar3 = arg1;
            do {
                bVar1 = false;
                pcVar4 = pcVar3;
                pcVar7 = pcVar5;
                if (*pcVar5 != '\0') {
                    cVar2 = *pcVar5;
                    do {
                        if (cVar2 == ';') break;
                        if (cVar2 == '-') {
                            bVar1 = true;
                        }
                        if (cVar2 != *pcVar4) break;
                        if (*pcVar4 == '\0') goto code_r0x00015940;
                        if (*pcVar4 == ';') break;
                        pcVar7 = pcVar7 + 1;
                        pcVar4 = pcVar4 + 1;
                        cVar2 = *pcVar7;
                    } while (cVar2 != '\0');
                }
                for (; (*pcVar4 != '\0' && (*pcVar4 != ';')); pcVar4 = pcVar4 + 1) {
                }
code_r0x00015940:
                if ((((bVar1) || (*pcVar7 == '\0')) || (*pcVar7 == ';')) && (pcVar7 != pcVar5 && -1 < pcVar7 - pcVar5))
                {
                    pcVar6 = pcVar4;
                    arg2_00 = pcVar3;
                }
                pcVar3 = pcVar4 + 1;
                if (*pcVar4 != ';') {
                    pcVar3 = pcVar4;
                }
            } while (((*pcVar3 != '\0') && (*pcVar7 != '\0')) && (*pcVar7 != ';'));
            if (arg2_00 != NULL) {
                if (pcVar6 == NULL) {
                    return 0;
                }
                arg3_00 = pcVar6 - arg2_00;
                iStackX_10 = arg2;
                arg1_00 = fcn.000161ac(arg3_00 + 1);
                if (arg1_00 == 0) {
                    return 0;
                }
                fcn.0001d7b0(arg1_00,arg2_00,arg3_00);
                *(arg3_00 + arg1_00) = 0;
                return arg1_00;
            }
            piVar8 = piVar8 + 1;
            pcVar5 = *piVar8;
        } while (pcVar5 != NULL);
    }
    return 0;
}


/* fcn.00015a94 @ 0x15a94 */

int64_t fcn.00015a94(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char *pcVar5;
    
    iVar2 = *0x1f128;
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    cVar1 = *pcVar4;
    iVar3 = -0x7ffffffffffffffe;
    while( true ) {
        if (cVar1 == '\0') {
            return iVar3;
        }
        cVar1 = *pcVar4;
        pcVar5 = pcVar4;
        while ((cVar1 != ';' && (*pcVar5 != '\0'))) {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
        }
        cVar1 = *pcVar5;
        *pcVar5 = '\0';
        iVar3 = (**(iVar2 + 8))(iVar2,pcVar4,arg2,arg3 & 0xffff);
        if (iVar3 != -0x7fffffffffffffe0) break;
        if (cVar1 == '\0') {
            return -0x7fffffffffffffe0;
        }
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar4;
        iVar3 = -0x7fffffffffffffe0;
    }
    return iVar3;
}


/* fcn.00015704 @ 0x15704 */

int64_t fcn.00015704(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    iVar5 = 0;
    uStackX_18 = 0;
    piVar3 = 0x1da50;
    iVar4 = iVar5;
    iStackX_20 = arg4;
    do {
        if (*piVar3 != 0) {
            iVar1 = fcn.0001644c(arg2 + 2,*piVar3,0x10);
            if (iVar1 == 0) break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
    } while (iVar4 == 0);
    if (iVar4 == 1) {
        iVar1 = 0x1dd88;
    }
    else {
        iVar4 = iVar4 * 0x20;
        iVar1 = iVar4 + 0x1da50;
        piVar3 = *(iVar4 + 0x1da58);
        if (piVar3 == NULL) {
            *(iVar4 + 0x1da58) = 0x1dc88;
        }
        else {
            if (*piVar3 == 0) {
                *piVar3 = 0x15128;
            }
            if (*(*(iVar4 + 0x1da58) + 8) == 0) {
                *(*(iVar4 + 0x1da58) + 8) = 0x154a8;
            }
            if (*(*(iVar4 + 0x1da58) + 0x10) == 0) {
                *(*(iVar4 + 0x1da58) + 0x10) = 0x12958;
            }
        }
    }
    iVar4 = (**(*0x1f130 + 0x98))(*(arg1 + 0x18),0x1ddc8,&iStackX_20);
    if (iVar4 < 0) {
        iStackX_20 = iVar5;
    }
    iStackX_20 = fcn.0001626c(iStackX_20,*(arg1 + 0x20));
    *0x1dca4 = *(arg2 + 2);
    *0x1dcac = *(arg2 + 10);
    uVar2 = fcn.0001626c(iStackX_20,0x1dca0);
    (**(*0x1f130 + 0x48))(iStackX_20);
    iVar4 = (**(*0x1f130 + 0x148))(&uStackX_18,0x1ddc8,uVar2,0x1dcd8,*(iVar1 + 8),0);
    if (-1 < iVar4) {
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = uStackX_18;
        }
        if (in_stack_00000028 != NULL) {
            if (iVar1 == 0x1dd88) {
                iVar1 = iVar5;
            }
            *in_stack_00000028 = iVar1;
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00016344 @ 0x16344 */

int64_t fcn.00016344(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.00016218(arg1);
    arg1_01 = fcn.000161ac(arg1_00);
    fcn.0001d7b0(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.00016218 @ 0x16218 */

int64_t fcn.00016218(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        return 0;
    }
    iVar2 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
        if ((*arg1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    }
    return iVar2;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00016778 @ 0x16778 */

int64_t fcn.00016778(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar3 = 0;
    if ((*0x1f278 != 0) || (iVar3 = (**(*0x1f0e8 + 0x140))(0x1d990,0,0x1f278), -1 < iVar3)) {
        iVar2 = (**(*0x1f278 + 0x50))();
        if (iVar2 < 4) {
            if (arg1 == 0) {
                iVar3 = (**(*0x1f0e8 + 0x140))(0x1d950,0,0x1f280);
                if (*0x1f280 != 0) {
                    iVar1 = *(*(*0x1f280 + 0x18) + 8);
                    uVar4 = *(iVar1 + 4);
                    (**(*0x1f278 + 0x40))(uVar4 / 5,*(iVar1 + 8) - 0x28,(uVar4 * 3) / 5,10,100);
                }
                *0x1f1a8 = 0;
            }
            if (*0x1f1a8 < arg1) {
                arg1 = arg1 - *0x1f1a8;
                do {
                    (**(*0x1f278 + 0x48))();
                    *0x1f1a8 = *0x1f1a8 + 1;
                    arg1 = arg1 + -1;
                } while (arg1 != 0);
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.0001afe8 @ 0x1afe8 */

ulong fcn.0001afe8(ulong param_1,ulong param_2)

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
    cVar1 = fcn.0001af30(0xfed40000,CONCAT71(Var4,0x20));
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
                    fcn.00016700(0x1e,CONCAT71(Var4,uVar3));
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


/* fcn.0001b090 @ 0x1b090 */

uint64_t fcn.0001b090(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

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
            fcn.0001af8c(noname_0_00,CONCAT71(Var5,uVar4));
            uVar3 = extraout_RAX;
            noname_0_00 = extraout_RAX & 0xffff;
            if (uVar3 == 0) {
                return 0x8000000000000012;
            }
            while (uVar3 != 0) {
                if (iVar6 == 0) goto code_r0x0001b12e;
                *0xfed40024 = *arg1;
                iVar6 = iVar6 + -1;
                arg1 = arg1 + 1;
                uVar3 = noname_0_00 - 1;
                noname_0_00 = uVar3;
            }
        }
code_r0x0001b12e:
        if (cVar1 == '\0') {
            return 0;
        }
        if ((noname_0_00 == 0) && (iVar2 = fcn.0001af8c(noname_0_00,CONCAT71(Var5,uVar4)), iVar2 == 0)) {
            return 0x8000000000000012;
        }
        cVar1 = fcn.0001af30(0xfed40018,CONCAT71(Var5,8));
        if (cVar1 != '\0') {
            *0xfed40024 = *arg1;
            cVar1 = fcn.0001af30(0xfed40018,CONCAT71(Var5,8));
            if (cVar1 == '\0') {
                *0xfed40018 = 0x20;
                return 0;
            }
        }
    }
    return 0x8000000000000015;
}


/* fcn.0001af30 @ 0x1af30 */

uint8_t fcn.0001af30(int64_t arg1,int64_t arg2)

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
            fcn.00016700(0x1e,CONCAT71(Var2,uVar1));
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


/* fcn.0001b1a0 @ 0x1b1a0 */

uint64_t fcn.0001b1a0(ulong noname_0,uint32_t arg1,int64_t arg2)

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
            cVar1 = fcn.0001af30(0xfed40018,CONCAT44(in_register_00000014,arg1));
            if (cVar1 == '\0') break;
            iVar2 = fcn.0001af8c(noname_0_00,CONCAT44(in_register_00000014,arg1));
            if (iVar2 == 0) {
                return 0x8000000000000012;
            }
            do {
                if (puVar4 <= puVar3) goto code_r0x0001b21a;
                arg1 = CONCAT31(arg1 >> 8,0x10);
                cVar1 = fcn.0001af30(0xfed40018,CONCAT44(in_register_00000014,arg1));
                if (cVar1 == '\0') break;
                *puVar3 = *0xfed40024;
                puVar3 = puVar3 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            if (puVar4 <= puVar3) break;
        }
    }
code_r0x0001b21a:
    *arg2 = puVar3 + (*arg2 - puVar4);
    cVar1 = fcn.0001af30(0xfed40018,CONCAT44(in_register_00000014,CONCAT31(arg1 >> 8,0x10)));
    return -(cVar1 != '\0') & 0x8000000000000005;
}


/* fcn.00016d18 @ 0x16d18 */

int64_t fcn.00016d18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    bool bVar2;
    char cVar3;
    int64_t noname_0;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t aiStack_28 [4];
    
    iVar4 = 1;
    aiStack_28[0] = arg1;
    aiStack_28[1] = arg2;
    aiStack_28[2] = arg3;
    aiStack_28[3] = arg4;
    noname_0 = fcn.0001afe8();
    bVar2 = false;
    if (noname_0 < 0) {
        noname_0 = -0x7ffffffffffffff9;
    }
    else {
        piVar5 = aiStack_28;
        bVar1 = bVar2;
        do {
            if (bVar1) break;
            arg2 = *piVar5;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) {
                arg4 = CONCAT71(arg4 >> 8,1);
            }
            else {
                arg4 = 0;
            }
            noname_0 = fcn.0001b090(noname_0,arg2,piVar5[1],arg4);
            bVar1 = true;
            piVar5 = piVar5 + 2;
        } while (-1 < noname_0);
        if (-1 < noname_0) {
            do {
                arg2 = CONCAT71(arg2 >> 8,0x10);
                cVar3 = fcn.0001af30(0xfed40018,arg2);
            } while (cVar3 == '\0');
            piVar5 = aiStack_28;
            noname_0 = -0x7ffffffffffffffb;
            do {
                piVar5 = piVar5 + 2;
                if (bVar2) break;
                noname_0 = fcn.0001b1a0(noname_0,*piVar5,piVar5 + 1);
                bVar2 = true;
            } while (noname_0 == -0x7ffffffffffffffb);
        }
        *0xfed40018 = 0x40;
    }
    return noname_0;
}


/* fcn.0001b264 @ 0x1b264 */

int16_t fcn.0001b264(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    while ((uVar1 = *0xfed40f00 >> 8, *(uVar2 + 0x1e1f0) != *0xfed40f00 || (*(uVar2 + 0x1e1f2) != *0xfed40f02))) {
        uVar2 = uVar2 + 4;
        if (0xb < uVar2) {
            return uVar1 << 8;
        }
    }
    return CONCAT11(uVar1,1);
}


/* fcn.00016e04 @ 0x16e04 */

ulong fcn.00016e04(void)

{
    int64_t iVar1;
    int64_t var_30h;
    int16_t var_20h;
    int32_t var_1eh;
    int32_t var_1ah;
    int16_t var_bp_10h;
    int32_t var_eh;
    int32_t var_ah;
    int8_t var_6h;
    
    var_1eh = 0xa000000;
    var_1ah = 0x6f000000;
    var_20h = -0x3f00;
    fcn.0001d75e(&var_30h,10,0);
    iVar1 = fcn.00016d18(&var_20h,10,&var_30h,10);
    if ((-1 < iVar1) && (stack0xffffffffffffffce == 0)) {
        var_bp_10h = -0x3f00;
        var_eh = 0xb000000;
        var_ah = 0x72000000;
        var_6h = 0;
        fcn.0001d75e(&var_30h,10,0);
        fcn.00016d18(&var_bp_10h,0xb,&var_30h,10);
        if (stack0xffffffffffffffce == 0) {
            return 0;
        }
    }
    return 0x800000000000001a;
}


/* fcn.00018fdc @ 0x18fdc */

ulong fcn.00018fdc(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char cVar6;
    char cVar8;
    char cVar7;
    uint64_t uVar9;
    uint8_t uVar10;
    ulong in_R8;
    uchar auStack_28 [32];
    
    uVar9 = 0;
    if (((*0x1f1d0 != 0) && (*0x1f1c8 != 0)) && (iVar4 = *0x1f1d0, iVar3 = fcn.00018f7c(), -1 < iVar3)) {
        if ((*(iVar4 + 0x2c) & 0x800) == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = CONCAT71(in_R8 >> 8,0xff);
        }
        fcn.00010320(auStack_28,0x18,iVar4);
        if ((auStack_28 == arg1) || (iVar4 = fcn.00010300(auStack_28,arg1,0x18), iVar4 == 0)) {
            return 0x800000000000000e;
        }
        cVar7 = '\0';
        cVar6 = '\0';
        cVar1 = *(arg1 + 0x17);
        uVar10 = *(arg1 + 0x13) & 1;
        cVar8 = *(arg1 + 0x11);
        *(arg1 + 0x17) = 0;
        *(arg1 + 0x11) = 0;
        uVar5 = uVar9;
        do {
            cVar6 = cVar6 + *(uVar5 + arg1);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x18);
        *(arg1 + 0x17) = cVar1;
        *(arg1 + 0x11) = cVar8;
        if (cVar6 == '\0') {
            if ((*(arg1 + 0x13) & 0x40) == 0) {
                if (cVar8 != -0x56) {
                    return 0x8000000000000015;
                }
            }
            else {
                if (arg1 + 0x14 == NULL) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(arg1 + 0x14) & 0xffffff;
                }
                uVar2 = uVar2 - (-(uVar10 != 0) & 2);
                uVar5 = uVar9;
                cVar8 = '\0';
                if (uVar2 != 0) {
                    do {
                        cVar7 = cVar8 + *(uVar5 + arg1);
                        uVar5 = uVar5 + 1;
                        cVar8 = cVar7;
                    } while (uVar5 < uVar2);
                }
                if (cVar7 != cVar1) {
                    return 0x8000000000000015;
                }
            }
            if (uVar10 != 0) {
                if (arg1 + 0x14 != NULL) {
                    uVar9 = *(arg1 + 0x14) & 0xffffff;
                }
                if (*(arg1 + 0x10) != ~*((uVar9 - 2) + arg1)) {
                    return 0x8000000000000015;
                }
            }
            return 0;
        }
    }
    return 0x8000000000000015;
}


/* fcn.00018ec4 @ 0x18ec4 */

ulong fcn.00018ec4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    
    if (arg3 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = fcn.00018fdc(arg1);
        if (iVar2 < 0) {
            uVar1 = 0x8000000000000015;
        }
        else {
            iVar2 = 0;
            puVar3 = arg1 + 0x18;
            while( true ) {
                if (arg1 + 0x14 == NULL) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = *(arg1 + 0x14) & 0xffffff;
                }
                if (uVar4 + arg1 <= puVar3) {
                    *arg4 = 0;
                    return 0x800000000000000e;
                }
                if (*(puVar3 + 3) == arg2) {
                    iVar2 = iVar2 + 1;
                }
                if (iVar2 == arg3) break;
                puVar3 = puVar3 + (*puVar3 & 0xffffff) + 3 & 0xfffffffffffffffc;
            }
            *arg4 = puVar3;
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.0001b7cc @ 0x1b7cc */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.0001b7cc(int64_t arg1)

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
    iVar3 = fcn.0001b2a0(arg1,auStack_138);
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
code_r0x0001b86f:
            *(arg1 + 0x7c) = 1;
            goto code_r0x0001b879;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x0001b86f;
    *(arg1 + 0x7c) = 0;
code_r0x0001b879:
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
                if (iVar4 < 0) goto code_r0x0001b9b5;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x0001b9bd;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x0001b93e;
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
                if (iVar4 < 0) goto code_r0x0001b9b5;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x0001b9bd;
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
                    if (iVar4 < 0) goto code_r0x0001b9ac;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x0001b9bd;
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
code_r0x0001b9b5:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x0001b9bd;
code_r0x0001b93e:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x0001b9ac;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x0001b9bd;
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
    goto code_r0x0001b93e;
code_r0x0001b9ac:
    bVar12 = iStackX_8 == 0x1c;
code_r0x0001b9bd:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.0001bdd8 @ 0x1bdd8 */

//WARNING: Variable defined which should be unmapped: var_3h

int64_t fcn.0001bdd8(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint in_register_0000000c;
    int64_t *piVar6;
    int16_t *piVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    bool bVar16;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int32_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    uint32_t var_7fh;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    uint32_t var_79h;
    int64_t var_71h;
    int16_t iStack_5e;
    char cStack_5c;
    uint32_t var_3h;
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    *(piVar6 + 0xd) = 0;
    if (&iStack_d8 != piVar6) {
        section..text(&iStack_d8,arg1,0x90);
    }
    iVar2 = fcn.0001b7cc(&iStack_d8);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (piVar6[1] < uStack_d0) {
        *(piVar6 + 0xd) = 6;
        return -0x7ffffffffffffffb;
    }
    if (*piVar6 == 0) {
code_r0x0001be4e:
        *(piVar6 + 0xd) = 5;
        return -0x7ffffffffffffffe;
    }
    if (cStack_5c != '\0') {
        if (iStack_5e == 0xc) {
            *(piVar6 + 0xd) = 4;
            return -0x7fffffffffffffff;
        }
        if (iStack_d8 != *piVar6) goto code_r0x0001be4e;
    }
    if (*(piVar6 + 0x7d) == '\0') {
        iStackX_18 = (*piVar6[4])();
        iVar9 = *(piVar6 + 0x3c) + *piVar6;
        uStackX_20 = *(iVar9 + 6);
        iVar2 = *piVar6 + 0x18 + *(iVar9 + 0x14) + *(piVar6 + 0x3c);
        uVar14 = uVar10;
    }
    else {
        iStackX_18 = (*piVar6[4])(piVar6[5],0,piVar6 + 0xb);
        iVar9 = *piVar6;
        iVar2 = iVar9 + 0x28;
        uStackX_20 = *(iVar9 + 4);
        uVar14 = *(iVar9 + 6) - 0x28;
    }
    if (iStackX_18 < 0) {
        *(piVar6 + 0xd) = 1;
        return -0x7fffffffffffffff;
    }
    uVar13 = uVar10;
    if (uStackX_20 != 0) {
        do {
            uStackX_10 = *(iVar2 + 8);
            if ((uStackX_10 == 0) || (*(iVar2 + 0x10) < uStackX_10)) {
                uStackX_10 = *(iVar2 + 0x10);
            }
            if (*(iVar2 + 0xc) < piVar6[1] + uVar14) {
                uVar4 = (*(iVar2 + 0xc) - uVar14) + *piVar6;
            }
            else {
                *(piVar6 + 0xd) = 5;
                uVar4 = uVar10;
            }
            uVar11 = *(iVar2 + 0xc) + -1 + *(iVar2 + 8);
            if (uVar11 < piVar6[1] + uVar14) {
                uVar11 = (uVar11 - uVar14) + *piVar6;
            }
            else {
                *(piVar6 + 0xd) = 5;
                uVar11 = uVar10;
            }
            if ((uStackX_10 != 0) && ((uVar4 == 0 || (uVar11 == 0)))) {
                *(piVar6 + 0xd) = 8;
                return -0x7fffffffffffffff;
            }
            if ((*(iVar2 + 0x10) != 0) &&
               (iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar2 + 0x14) - uVar14,&uStackX_10,uVar4), iStackX_18 < 0))
            goto code_r0x0001c152;
            if ((uStackX_10 < *(iVar2 + 8)) && (iVar3 = *(iVar2 + 8) - uStackX_10, iVar3 != 0)) {
                fcn.00010340(uVar4 + uStackX_10,iVar3);
            }
            iVar2 = iVar2 + 0x28;
            uVar13 = uVar13 + 1;
        } while (uVar13 < uStackX_20);
    }
    uVar13 = piVar6[1];
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x28) < uVar13) {
            uVar4 = *piVar6 + *(iVar9 + 0x28);
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar4 = uVar10;
        }
        piVar6[3] = uVar4;
    }
    else {
        if (*(iVar9 + 8) < uVar13 + uVar14) {
            uVar4 = (*(iVar9 + 8) - uVar14) + *piVar6;
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar4 = uVar10;
        }
        piVar6[3] = uVar4;
    }
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x18) == 0x10b) {
            uVar12 = *(iVar9 + 0x74);
            iVar3 = 0xa4;
        }
        else {
            uVar12 = *(iVar9 + 0x84);
            iVar3 = 0xb4;
        }
        if (5 < uVar12) {
            uVar12 = *(iVar3 + iVar9);
            goto code_r0x0001c082;
        }
        piVar6[0xe] = 0;
    }
    else {
        uVar12 = *(iVar9 + 0x1c);
code_r0x0001c082:
        piVar6[0xe] = (uVar12 >> 1) << 3;
    }
    piVar6[6] = 0;
    if (piVar6[8] != 0) {
        if (uVar13 + uVar14 <= *(piVar6 + 8)) {
            *(piVar6 + 0xd) = 5;
            goto code_r0x0001c0be;
        }
        iVar3 = (*piVar6 - uVar14) + *(piVar6 + 8);
        if (iVar3 == 0) goto code_r0x0001c0be;
        uVar12 = *(iVar3 + 0x14);
        if (uVar12 == 0) {
            if (*(iVar3 + 0x18) != 0) {
                if (*(iVar2 + -0x18) < *(iVar2 + -0x20)) {
                    uVar12 = *(iVar2 + -0x1c) + *(iVar2 + -0x20);
                }
                else {
                    uVar12 = *(iVar2 + -0x1c) + *(iVar2 + -0x18);
                }
            }
            if (uVar12 == 0) goto code_r0x0001c1c3;
        }
        if (uVar12 < uVar13 + uVar14) {
            uVar13 = (*piVar6 - uVar14) + uVar12;
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar13 = uVar10;
        }
        piVar6[9] = uVar13;
        if (uVar13 == 0) {
code_r0x0001c0be:
            *(piVar6 + 0xd) = 9;
            return -0x7fffffffffffffff;
        }
        if (*(iVar3 + 0x14) == 0) {
            uStackX_10 = *(iVar3 + 0x10);
            iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar3 + 0x18) - uVar14,&uStackX_10);
            if (iStackX_18 < 0) {
                iStackX_18 = -0x7fffffffffffffff;
code_r0x0001c152:
                *(piVar6 + 0xd) = 1;
                return iStackX_18;
            }
            *(iVar3 + 0x14) = uVar12;
        }
        piVar5 = piVar6[9];
        if (*piVar5 == 0x3031424e) {
            if (*(iVar3 + 0x10) < 0x10) goto code_r0x0001c19f;
            piVar5 = piVar5 + 4;
        }
        else if (*piVar5 == 0x434f544d) {
            if (*(iVar3 + 0x10) < 0x14) goto code_r0x0001c19f;
            piVar5 = piVar5 + 5;
        }
        else {
            if (*piVar5 != 0x53445352) goto code_r0x0001c1c3;
            if (*(iVar3 + 0x10) < 0x18) goto code_r0x0001c19f;
            piVar5 = piVar5 + 6;
        }
        piVar6[10] = piVar5;
    }
code_r0x0001c1c3:
    piVar6[0x10] = 0;
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x18) == 0x10b) {
            uVar12 = *(iVar9 + 0x74);
            iVar2 = 0x88;
        }
        else {
            uVar12 = *(iVar9 + 0x84);
            iVar2 = 0x98;
        }
        if ((2 < uVar12) && (uVar12 = *(iVar2 + 4 + iVar9), uVar12 != 0)) {
            if (*(iVar2 + iVar9) < piVar6[1]) {
                iVar2 = *(iVar2 + iVar9) + *piVar6;
                if (iVar2 != 0) {
                    puVar15 = iVar2 + 0xc;
                    if (uVar12 < (*(iVar2 + 0xe) + *puVar15) * 8 + 0x10) {
code_r0x0001c19f:
                        *(piVar6 + 0xd) = 0xb;
                        return -0x7ffffffffffffffd;
                    }
                    puVar8 = iVar2 + 0x10;
                    bVar16 = *puVar15 != 0;
                    uVar14 = uVar10;
                    while (bVar16) {
                        uVar1 = *puVar8;
                        if (0x7fffffff < uVar1) {
                            if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x0001c19f;
                            piVar7 = (uVar1 & 0x7fffffff) + iVar2;
                            if ((((*piVar7 == 3) && (piVar7[1] == 0x48)) && (piVar7[2] == 0x49)) && (piVar7[3] == 0x49))
                            {
                                uVar1 = puVar8[1];
                                if (0x7fffffff < uVar1) {
                                    if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x0001c19f;
                                    uVar13 = uVar1 & 0x7fffffff;
                                    puVar15 = iVar2 + 0xc + uVar13;
                                    if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + 2 + *(uVar13 + 0xe + iVar2)) * 8)
                                    goto code_r0x0001c19f;
                                    puVar8 = iVar2 + 0x10 + uVar13;
                                    uVar1 = puVar8[1];
                                    if (0x7fffffff < uVar1) {
                                        if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x0001c19f;
                                        uVar13 = uVar1 & 0x7fffffff;
                                        puVar15 = uVar13 + 0xc + iVar2;
                                        if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + *(uVar13 + 0xe + iVar2) + 2) * 8
                                           ) goto code_r0x0001c19f;
                                        puVar8 = uVar13 + 0x10 + iVar2;
                                    }
                                }
                                if (puVar8[1] < 0x80000000) {
                                    if (puVar8[1] < uVar12) {
                                        uVar14 = *(puVar8[1] + iVar2);
                                        if (uVar14 < piVar6[1]) {
                                            uVar10 = uVar14 + *piVar6;
                                        }
                                        else {
                                            *(piVar6 + 0xd) = 5;
                                        }
                                        piVar6[0x10] = uVar10;
                                        return iStackX_18;
                                    }
                                    goto code_r0x0001c19f;
                                }
                            }
                        }
                        puVar8 = puVar8 + 2;
                        uVar14 = uVar14 + 1;
                        bVar16 = uVar14 < *puVar15;
                    }
                }
            }
            else {
                *(piVar6 + 0xd) = 5;
            }
        }
    }
    return iStackX_18;
}


/* fcn.0001bb20 @ 0x1bb20 */

ulong fcn.0001bb20(uint32_t arg1)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    int64_t *piVar13;
    int *piVar14;
    int64_t iVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar11 = NULL;
    *(piVar5 + 0xd) = 0;
    if (*(piVar5 + 0x7c) == '\0') {
        iVar6 = piVar5[2];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        if (*(piVar5 + 0x7d) == '\0') {
            iVar3 = *(piVar5 + 0x3c) + *piVar5;
            if (*(iVar3 + 0x18) == 0x10b) {
                iVar15 = iVar6 - *(iVar3 + 0x34);
                if (iVar15 != 0) {
                    *(iVar3 + 0x34) = iVar6;
                }
                uVar10 = *(iVar3 + 0x74);
                iVar6 = 0xa0;
            }
            else {
                iVar15 = iVar6 - *(iVar3 + 0x30);
                if (iVar15 != 0) {
                    *(iVar3 + 0x30) = iVar6;
                }
                uVar10 = *(iVar3 + 0x84);
                iVar6 = 0xb0;
            }
            puVar9 = puVar11;
            puVar18 = puVar11;
            if (4 < uVar10) {
                puVar9 = iVar6 + iVar3;
            }
        }
        else {
            iVar3 = *piVar5;
            puVar18 = *(iVar3 + 6) - 0x28;
            iVar15 = (iVar6 - *(iVar3 + 0x10)) - puVar18;
            if (iVar15 != 0) {
                *(iVar3 + 0x10) = iVar6 - puVar18;
            }
            puVar9 = iVar3 + 0x18;
        }
        puVar16 = puVar11;
        if ((puVar9 != NULL) && (puVar9[1] != 0)) {
            if (*puVar9 < piVar5[1] + puVar18) {
                puVar11 = (*piVar5 - puVar18) + *puVar9;
            }
            else {
                *(piVar5 + 0xd) = 5;
            }
            uVar7 = puVar9[1] + (*puVar9 - 1);
            if (uVar7 < piVar5[1] + puVar18) {
                puVar16 = (*piVar5 - puVar18) + uVar7;
            }
            else {
                *(piVar5 + 0xd) = 5;
            }
            if ((puVar11 == NULL) || (puVar16 == NULL)) {
code_r0x0001bc36:
                *(piVar5 + 0xd) = 9;
                return 0x8000000000000001;
            }
            if (puVar16 < puVar11) goto code_r0x0001bc36;
        }
        if (iVar15 != 0) {
            piVar13 = piVar5[6];
            puVar12 = puVar11;
            while (puVar12 < puVar16) {
                puVar17 = puVar12 + 2;
                if (((puVar12[1] == 0) || (~puVar12[1] < puVar12)) ||
                   (puVar1 = puVar12[1] + puVar12, puVar9[1] + puVar11 < puVar1)) goto code_r0x0001bc36;
                if (piVar5[1] + puVar18 <= *puVar12) {
                    *(piVar5 + 0xd) = 5;
                    goto code_r0x0001bc36;
                }
                if ((*piVar5 - puVar18) + *puVar12 == 0) goto code_r0x0001bc36;
                for (; puVar17 < puVar1; puVar17 = puVar17 + 2) {
                    uVar7 = (*puVar17 & 0xfff) + *puVar12;
                    if (puVar18 + piVar5[1] <= uVar7) {
                        *(piVar5 + 0xd) = 5;
code_r0x0001bd8c:
                        uVar4 = 0x8000000000000001;
code_r0x0001bd96:
                        *(piVar5 + 0xd) = 9;
                        return uVar4;
                    }
                    piVar8 = (*piVar5 - puVar18) + uVar7;
                    if (piVar8 == NULL) goto code_r0x0001bd8c;
                    uVar2 = *puVar17 >> 0xc;
                    if (uVar2 != 0) {
                        if (uVar2 == 1) {
                            *piVar8 = *piVar8 + (iVar15 >> 0x10);
                        }
                        else {
                            if (uVar2 != 2) {
                                if (uVar2 == 3) {
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar14 = piVar13 + (-piVar13 & 3);
                                        *piVar14 = *piVar8;
                                        piVar13 = piVar14 + 1;
                                    }
                                }
                                else {
                                    if (uVar2 != 10) {
                                        uVar4 = 0x8000000000000003;
                                        goto code_r0x0001bd96;
                                    }
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar13 = piVar13 + (-piVar13 & 7);
                                        *piVar13 = *piVar8;
                                        piVar13 = piVar13 + 1;
                                    }
                                }
                                goto code_r0x0001bd61;
                            }
                            *piVar8 = *piVar8 + iVar15;
                        }
                        if (piVar13 != NULL) {
                            *piVar13 = *piVar8;
                            piVar13 = piVar13 + 2;
                        }
                    }
code_r0x0001bd61:
                }
                puVar12 = puVar1;
            }
            if (piVar5[2] != 0) {
                piVar5[3] = piVar5[3] + (piVar5[2] - *piVar5);
            }
        }
    }
    return 0;
}


/* fcn.000171bc @ 0x171bc */

void fcn.000171bc(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint64_t uVar2;
    char cVar3;
    uint64_t uVar4;
    
    uVar1 = *(arg1 + 0x17);
    uVar2 = 0;
    *(arg1 + 0x10) = 0;
    cVar3 = '\0';
    *(arg1 + 0x17) = 0;
    uVar4 = uVar2;
    do {
        cVar3 = cVar3 + *(uVar4 + arg1);
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x18);
    *(arg1 + 0x10) = -cVar3;
    if ((*(arg1 + 0x13) & 0x40) == 0) {
        *(arg1 + 0x11) = 0xaa;
    }
    else {
        uVar4 = uVar2;
        if (arg2 != 0) {
            do {
                uVar2 = uVar2 + *(uVar4 + arg1);
                uVar4 = uVar4 + 1;
            } while (uVar4 < arg2);
        }
        *(arg1 + 0x11) = -uVar2;
    }
    *(arg1 + 0x17) = uVar1;
    return;
}


/* fcn.00017234 @ 0x17234 */

ulong fcn.00017234(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int *piVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    *(piVar3 + 0xd) = 0;
    if (*(piVar3 + 0x7c) == '\0') {
        iVar4 = piVar3[2];
        if (iVar4 == 0) {
            iVar4 = *piVar3;
        }
        if (*(piVar3 + 0x7d) == '\0') {
            uVar15 = 0;
            iVar2 = *(piVar3 + 0x3c) + *piVar3;
            if (*(iVar2 + 0x18) == 0x10b) {
                iVar13 = iVar4 - *(iVar2 + 0x34);
                if (iVar13 != 0) {
                    *(iVar2 + 0x34) = iVar4;
                }
                uVar7 = *(iVar2 + 0x74);
                iVar4 = 0xa0;
            }
            else {
                iVar13 = iVar4 - *(iVar2 + 0x30);
                if (iVar13 != 0) {
                    *(iVar2 + 0x30) = iVar4;
                }
                uVar7 = *(iVar2 + 0x84);
                iVar4 = 0xb0;
            }
            puVar10 = NULL;
            if (4 < uVar7) {
                puVar10 = iVar4 + iVar2;
            }
        }
        else {
            iVar2 = *piVar3;
            uVar15 = *(iVar2 + 6) - 0x28;
            iVar13 = (iVar4 - *(iVar2 + 0x10)) - uVar15;
            if (arg2 != 0) {
                iVar13 = arg2;
            }
            if (iVar13 != 0) {
                *(iVar2 + 0x10) = iVar4 - uVar15;
            }
            puVar10 = iVar2 + 0x18;
        }
        if ((puVar10 == NULL) || (puVar10[1] == 0)) {
            puVar14 = NULL;
            puVar12 = NULL;
        }
        else {
            if (*puVar10 < piVar3[1] + uVar15) {
                puVar12 = (*piVar3 - uVar15) + *puVar10;
            }
            else {
                *(piVar3 + 0xd) = 5;
                puVar12 = NULL;
            }
            uVar5 = puVar10[1] + (*puVar10 - 1);
            if (uVar5 < piVar3[1] + uVar15) {
                puVar14 = (*piVar3 - uVar15) + uVar5;
            }
            else {
                *(piVar3 + 0xd) = 5;
                puVar14 = NULL;
            }
            if ((puVar12 == NULL) || (puVar14 == NULL)) {
                return 0x8000000000000001;
            }
        }
        if (iVar13 != 0) {
            piVar8 = piVar3[6];
            while (puVar12 < puVar14) {
                uVar7 = puVar12[1];
                puVar11 = puVar12 + 2;
                if ((uVar7 == 0) || (puVar10[1] < uVar7)) {
                    *(piVar3 + 0xd) = 9;
                    return 0x8000000000000001;
                }
                if (uVar15 + piVar3[1] <= *puVar12) {
                    *(piVar3 + 0xd) = 5;
                    return 0x8000000000000001;
                }
                iVar4 = (*piVar3 - uVar15) + *puVar12;
                if (iVar4 == 0) {
                    return 0x8000000000000001;
                }
                for (; puVar11 < puVar12 + uVar7; puVar11 = puVar11 + 2) {
                    uVar1 = *puVar11 >> 0xc;
                    piVar6 = (*puVar11 & 0xfff) + iVar4;
                    if (uVar1 != 0) {
                        if (uVar1 == 1) {
                            *piVar6 = *piVar6 + (iVar13 >> 0x10);
                        }
                        else {
                            if (uVar1 != 2) {
                                if (uVar1 == 3) {
                                    *piVar6 = *piVar6 + iVar13;
                                    if (piVar8 != NULL) {
                                        piVar9 = piVar8 + (-piVar8 & 3);
                                        *piVar9 = *piVar6;
                                        piVar8 = piVar9 + 1;
                                    }
                                }
                                else {
                                    if (uVar1 != 10) {
                                        *(piVar3 + 0xd) = 9;
                                        return 0x8000000000000003;
                                    }
                                    *piVar6 = *piVar6 + iVar13;
                                    if (piVar8 != NULL) {
                                        piVar8 = piVar8 + (-piVar8 & 7);
                                        *piVar8 = *piVar6;
                                        piVar8 = piVar8 + 1;
                                    }
                                }
                                goto code_r0x00017452;
                            }
                            *piVar6 = *piVar6 + iVar13;
                        }
                        if (piVar8 != NULL) {
                            *piVar8 = *piVar6;
                            piVar8 = piVar8 + 2;
                        }
                    }
code_r0x00017452:
                }
                puVar12 = puVar12 + uVar7;
            }
            if (piVar3[2] != 0) {
                piVar3[3] = piVar3[3] + (piVar3[2] - *piVar3);
            }
        }
    }
    return 0;
}


/* fcn.00018d88 @ 0x18d88 */

ulong fcn.00018d88(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t arg1_00;
    uint32_t uVar5;
    uint64_t uVar6;
    
    uVar6 = *0x1f1c8;
    if (*0x1f1c8 == 0) {
        return 0x8000000000000015;
    }
    if (arg2 == 0) {
        return 0x8000000000000002;
    }
    iVar2 = fcn.00018f7c();
    if (iVar2 < 0) {
        return 0x8000000000000015;
    }
    if (arg1 == 0) {
        arg1_00 = *(*0x1f1d0 + 0x30) + *0x1f1d0;
        iVar2 = fcn.00018fdc(arg1_00);
        if (-1 < iVar2) {
            uVar6 = 0;
            if (arg1_00 + 0x14 != NULL) {
                uVar6 = *(arg1_00 + 0x14) & 0xffffff;
            }
            if (uVar6 + arg1_00 <= *0x1f1c8 + *0x1f1d0) {
                *arg2 = arg1_00;
                return 0;
            }
        }
    }
    else {
        if (arg1 < *(*0x1f1d0 + 0x30) + *0x1f1d0) {
            return 0x8000000000000002;
        }
        puVar1 = arg1 + 0x14;
        if (puVar1 == NULL) {
            uVar5 = 0;
        }
        else {
            uVar5 = *puVar1 & 0xffffff;
        }
        uVar6 = uVar6 + *0x1f1d0;
        if (uVar6 < uVar5 + arg1) {
            return 0x8000000000000002;
        }
        if (puVar1 == NULL) {
            uVar4 = 0;
        }
        else {
            uVar4 = *puVar1 & 0xffffff;
        }
        uVar4 = arg1 + 7U + uVar4 & 0xfffffffffffffff8;
        *arg2 = uVar4;
        if (uVar4 + 0x18 < uVar6) {
            uVar3 = 0;
            if (uVar4 + 0x14 != NULL) {
                uVar3 = *(uVar4 + 0x14) & 0xffffff;
            }
            if ((uVar3 + uVar4 <= uVar6) && (iVar2 = fcn.00018fdc(uVar4), -1 < iVar2)) {
                return 0;
            }
        }
    }
    *arg2 = 0;
    return 0;
}


/* fcn.000174c4 @ 0x174c4 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_30h
//WARNING: Type propagation algorithm not settling

int64_t fcn.000174c4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    bool bVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    char cVar10;
    uint8_t uVar11;
    uint in_register_0000000c;
    ulong *******arg1_00;
    ulong *******pppppppuVar12;
    ulong *******pppppppuVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    uint64_t uVar19;
    uint8_t uStackX_8;
    uint32_t var_d8h;
    uint32_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint32_t *puStack_180;
    ulong *******pppppppuStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    ulong uStack_158;
    uint64_t uStack_150;
    uint32_t uStack_140;
    uint32_t uStack_13c;
    uint8_t uStack_fc;
    char cStack_fb;
    int64_t iStack_e8;
    uchar auStack_d8 [140];
    uint32_t var_44h;
    int64_t var_bp_30h;
    int64_t var_bp_20h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStack_190 = 0;
    if (arg1_00 != NULL) {
        pppppppuVar12 = arg2;
        iVar6 = fcn.00018fdc(arg1_00);
        if (-1 < iVar6) {
            if ((5 < *(arg1_00 + 0x12) - 3U) && (*(arg1_00 + 0x12) != '\v')) {
                return 0;
            }
            if (arg1_00 + 0x14U == NULL) {
                uStack_198 = 0;
            }
            else {
                uStack_198 = *(arg1_00 + 0x14U) & 0xffffff;
            }
            uStack_188 = 1;
            while( true ) {
                bVar2 = false;
                uVar16 = CONCAT71(pppppppuVar12 >> 8,0x10);
                iVar6 = fcn.00018ec4(arg1_00,uVar16,uStack_188,&puStack_180);
                puVar15 = puStack_180;
                if (iVar6 < 0) break;
                if (puStack_180 == NULL) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = *puStack_180 & 0xffffff;
                }
                fcn.0001d75e(&pppppppuStack_178,0x90,0);
                iVar6 = 8;
                if (uVar4 != 0xffffff) {
                    iVar6 = 4;
                }
                uStack_150 = iVar6 + puVar15;
                uStack_158 = 0x17210;
                iStack_e8 = iVar6;
                iVar7 = fcn.0001b7cc(&pppppppuStack_178);
                if (iVar7 < 0) {
                    return iVar7;
                }
                pppppppuVar12 = &pppppppuStack_178;
                fcn.0001d7b0(auStack_d8,pppppppuVar12,0x90);
                uVar11 = *(arg1_00 + 0x12);
                iVar7 = uStack_13c + iVar6;
                if (uVar11 < 3) {
                    return 0;
                }
                if (uVar11 < 5) {
code_r0x00017623:
                    if (*(puVar15 + iVar7 + 0x38) != *(puVar15 + iVar7 + 0x3c)) {
                        return -0x7fffffffffffffeb;
                    }
                    if (uStack_fc != 0) {
                        bVar2 = true;
                        if (arg1_00 + 0x14U == NULL) {
                            uVar4 = 0;
                        }
                        else {
                            uVar4 = *(arg1_00 + 0x14U) & 0xffffff;
                        }
                        uStack_190 = fcn.000161ac(uVar4);
                        pppppppuVar12 = arg1_00;
                        fcn.0001d7b0(uStack_190,arg1_00,uVar4);
                        uStack_150 = uStack_190;
                        iVar8 = fcn.0001b7cc(&pppppppuStack_178);
                        if (iVar8 < 0) {
                            return iVar8;
                        }
                        uStack_fc = 0;
                    }
                }
                else {
                    if (uVar11 != 5) {
                        if (uVar11 != 6) {
                            if (uVar11 == 7) goto code_r0x0001764a;
                            if (uVar11 != 8) {
                                return 0;
                            }
                        }
                        goto code_r0x00017623;
                    }
code_r0x0001764a:
                    if (*(puVar15 + iVar7 + 0x38) != *(puVar15 + iVar7 + 0x3c)) {
                        return -0x7fffffffffffffeb;
                    }
                }
                iVar6 = puVar15 + arg2 + (iVar6 - arg1_00);
                if (uStack_fc == 0) {
                    iVar8 = fcn.000161ac(uStack_140 + iStack_170);
                    if (iVar8 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    fcn.0001d75e(iVar8,uStack_140 + iStack_170,0);
                    pppppppuVar12 = (uStack_140 - 1) + iVar8 & ~(uStack_140 - 1);
                    pppppppuStack_178 = pppppppuVar12;
                    iVar9 = fcn.0001bdd8(&pppppppuStack_178);
                    if (iVar9 < 0) {
code_r0x0001789d:
                        (**(*0x1f130 + 0x48))(iVar8);
                        return iVar9;
                    }
                    iStack_168 = iVar6;
                    iVar9 = fcn.0001bb20(&pppppppuStack_178);
                    iVar3 = iStack_e8;
                    uVar16 = 0;
                    if (iVar9 < 0) goto code_r0x0001789d;
                    uStack_188 = 0;
                    if (*(puVar15 + iVar7 + 6) != 0) {
                        puVar18 = puVar15 + *(puVar15 + iVar7 + 0x14) + iVar7 + 0x24;
                        do {
                            pppppppuVar12 = *puVar18 + pppppppuStack_178;
                            fcn.0001d7b0(puVar18[2] + iVar3 + puVar15,pppppppuVar12,puVar18[1]);
                            puVar18 = puVar18 + 10;
                            uVar16 = uVar16 + 1;
                        } while (uVar16 < *(puVar15 + iVar7 + 6));
                        uStack_188 = uVar16;
                    }
                    puVar18 = arg1_00 + 0x14;
                    (**(*0x1f130 + 0x48))(iVar8);
                    if (uStack_190 != 0) {
                        (**(*0x1f130 + 0x48))(uStack_190);
                        uStack_190 = 0;
                    }
                    if (*(puVar15 + iVar7 + 0x18) == 0x10b) {
                        *(puVar15 + iVar7 + 0x34) = iVar6;
                    }
                    else {
                        if (*(puVar15 + iVar7 + 0x18) != 0x20b) {
                            return -0x7fffffffffffffeb;
                        }
                        *(puVar15 + iVar7 + 0x30) = iVar6;
                    }
                    pppppppuVar13 = NULL;
                    cVar10 = '\0';
                    uVar4 = 0;
                    if (bVar2) {
                        *(arg1_00 + 0x13U) = *(arg1_00 + 0x13U) | 4;
                        if (puVar18 != NULL) {
                            uVar4 = *puVar18 & 0xffffff;
                        }
                        pppppppuVar12 = uVar4;
                        fcn.000171bc(arg1_00,pppppppuVar12);
                    }
                    else if ((*(arg1_00 + 0x13) & 0x40) != 0) {
                        uVar1 = *(arg1_00 + 0x17);
                        *(arg1_00 + 0x17) = 0;
                        *(arg1_00 + 0x11) = 0;
                        if (puVar18 != NULL) {
                            uVar4 = *puVar18 & 0xffffff;
                        }
                        if (uVar4 - uStack_198 != 0) {
                            cVar10 = '\0';
                            do {
                                cVar10 = cVar10 + *(arg1_00 + uStack_198 + pppppppuVar13);
                                pppppppuVar13 = pppppppuVar13 + 1;
                            } while (pppppppuVar13 < uVar4 - uStack_198);
                        }
                        *(arg1_00 + 0x17) = uVar1;
                        *(arg1_00 + 0x11) = -cVar10;
                        pppppppuVar12 = pppppppuVar13;
                    }
                }
                uStack_188 = uStack_188 + 1;
            }
            if ((*(arg1_00 + 0x12) < 0xc) && ((0x958U >> (*(arg1_00 + 0x12) & 0x1f) & 1) != 0)) {
                iVar6 = 1;
                uVar14 = 0;
                while( true ) {
                    uStackX_8 = uVar14;
                    iVar6 = fcn.00018ec4(arg1_00,CONCAT71(uVar16 >> 8,0x12),iVar6,&puStack_180);
                    if (iVar6 < 0) break;
                    uVar5 = uVar14;
                    uVar4 = uVar5;
                    if (puStack_180 != NULL) {
                        uVar4 = *puStack_180 & 0xffffff;
                    }
                    iVar6 = 8;
                    if (uVar4 != 0xffffff) {
                        iVar6 = 4;
                    }
                    uVar17 = iVar6 + puStack_180;
                    fcn.0001d75e(&pppppppuStack_178,0x90,0);
                    uStack_158 = 0x17210;
                    uStack_150 = uVar17;
                    iVar6 = fcn.0001b7cc(&pppppppuStack_178);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    fcn.0001d7b0(auStack_d8,&pppppppuStack_178,0x90);
                    iVar6 = arg2 + 0x28 + ((uVar17 - *(uVar17 + 6)) - arg1_00);
                    if (uStack_fc != uStackX_8) {
                        uStackX_8 = 1;
                        if (arg1_00 + 0x14U != NULL) {
                            uVar5 = *(arg1_00 + 0x14U) & 0xffffff;
                        }
                        uStack_190 = fcn.000161ac(uVar5);
                        fcn.0001d7b0(uStack_190,arg1_00,uVar5);
                        uStack_150 = uStack_190;
                        iVar7 = fcn.0001b7cc(&pppppppuStack_178);
                        uVar14 = 0;
                        if (iVar7 < 0) {
                            return iVar7;
                        }
                        uStack_fc = 0;
                    }
                    uVar11 = *(uVar17 + 4);
                    if (uVar11 != 0) {
                        puVar15 = uVar17 + 0x38;
                        uVar16 = uVar14;
                        do {
                            if (uVar16 == uVar11 - 1) {
                                uVar14 = *puVar15 + 0x28 + (puVar15[1] - *(uVar17 + 6));
                            }
                            uVar16 = uVar16 + 1;
                            puVar15 = puVar15 + 10;
                        } while (uVar16 < uVar11);
                    }
                    if (uVar14 < uStack_140 + iStack_170) {
                        uVar14 = uStack_140 + iStack_170;
                    }
                    pppppppuVar12 = fcn.000161ac(uVar14);
                    uVar19 = 0;
                    if (pppppppuVar12 == NULL) {
                        return -0x7ffffffffffffff7;
                    }
                    fcn.0001d75e(pppppppuVar12,uVar14,0);
                    pppppppuStack_178 = pppppppuVar12;
                    iVar7 = fcn.0001bdd8(&pppppppuStack_178);
                    if (iVar7 < 0) {
code_r0x00017bc8:
                        (**(*0x1f130 + 0x48))(pppppppuVar12);
                        return iVar7;
                    }
                    uVar16 = arg3;
                    iStack_168 = iVar6;
                    iVar7 = fcn.00017234(&pppppppuStack_178,arg3);
                    if (iVar7 < 0) goto code_r0x00017bc8;
                    if (*(uVar17 + 4) != '\0') {
                        puVar15 = uVar17 + 0x34;
                        do {
                            if (cStack_fb == '\0') {
                                uVar16 = *puVar15;
                                iVar7 = puVar15[2] - *(uVar17 + 6);
                            }
                            else {
                                uVar16 = (*puVar15 - *(uVar17 + 6)) + 0x28;
                                iVar7 = puVar15[2] - *(uVar17 + 6);
                            }
                            uVar16 = uVar16 + pppppppuStack_178;
                            fcn.0001d7b0(iVar7 + 0x28 + uVar17,uVar16,puVar15[1]);
                            uVar19 = uVar19 + 1;
                            puVar15 = puVar15 + 10;
                        } while (uVar19 < *(uVar17 + 4));
                    }
                    puVar15 = arg1_00 + 0x14;
                    (**(*0x1f130 + 0x48))(pppppppuVar12);
                    if (uStack_190 != 0) {
                        (**(*0x1f130 + 0x48))(uStack_190);
                        uStack_190 = 0;
                    }
                    *(uVar17 + 0x10) = iVar6;
                    uVar11 = uStack_190;
                    uVar4 = uStack_190;
                    if (uStackX_8 == uVar11) {
                        if ((*(arg1_00 + 0x13) & 0x40) != 0) {
                            uVar1 = *(arg1_00 + 0x17);
                            *(arg1_00 + 0x17) = uVar11;
                            *(arg1_00 + 0x11) = uVar11;
                            if (puVar15 != NULL) {
                                uVar4 = *puVar15 & 0xffffff;
                            }
                            uVar14 = uStack_190 & 0xff;
                            uVar16 = uStack_190;
                            if (uVar4 - uStack_198 != 0) {
                                do {
                                    uVar11 = uVar14 + *(arg1_00 + uVar16 + uStack_198);
                                    uVar14 = uVar11;
                                    uVar16 = uVar16 + 1;
                                } while (uVar16 < uVar4 - uStack_198);
                            }
                            *(arg1_00 + 0x17) = uVar1;
                            *(arg1_00 + 0x11) = -uVar11;
                        }
                    }
                    else {
                        *(arg1_00 + 0x13U) = *(arg1_00 + 0x13U) | 4;
                        if (puVar15 != NULL) {
                            uVar4 = *puVar15 & 0xffffff;
                        }
                        uVar16 = uVar4;
                        fcn.000171bc(arg1_00,uVar16);
                    }
                    iVar6 = uVar19 + 1;
                    uVar14 = uStack_190;
                }
            }
            return 0;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00017bf0 @ 0x17bf0 */

ulong fcn.00017bf0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t arg1_01;
    int iStackX_8;
    int iStackX_c;
    int64_t iStackX_10;
    int iStackX_18;
    int64_t iStackX_20;
    uint32_t in_stack_00000028;
    uint32_t *puStack_a8;
    int64_t iStack_a0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uchar auStack_88 [32];
    uint64_t uStack_68;
    
    uStack_98 = 0x1ba0062e;
    uStack_94 = 0x4582c779;
    uStack_90 = 0x6a336685;
    uStack_8c = 0x98ff7e8;
    uVar5 = 0;
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.0001d7b0(auStack_88,arg1,0x38);
    fcn.0001d7b0(&iStackX_8,arg1 + 0x38,8);
    if (iStackX_8 != 0) {
        uVar5 = iStackX_c * iStackX_8;
    }
    arg1_01 = uVar5;
    if ((uStack_68 != arg1_01) || (arg1_00 = fcn.000161ac(arg1_01), arg1_00 == 0)) {
        return 0x8000000000000015;
    }
    fcn.0001d7b0(arg1_00,arg1,arg1_01);
    iStack_a0 = 0x70;
    if (arg3 != -0x820000) {
        iStack_a0 = 0;
    }
    if (iStack_a0 + arg1_00 != 0) {
        *0x1f1c8 = uVar5;
        *0x1f1d0 = iStack_a0 + arg1_00;
    }
    if (*0x1f1d0 == 0) {
        iVar2 = -0x7fffffffffffffeb;
    }
    else {
        arg1 = &iStackX_10;
        iVar2 = fcn.00018d88(0,arg1);
    }
    if (iVar2 < 0) {
        return 0x8000000000000015;
    }
    if (iStackX_10 != 0) {
        iVar2 = iStackX_10;
        do {
            if ((((iVar2 != 0) && (iVar3 = fcn.00018fdc(iVar2), -1 < iVar3)) && (*(iVar2 + 0x12) == '\x01')) &&
               (iVar3 = fcn.00018ec4(iVar2,CONCAT71(arg1 >> 8,0x19),1,&puStack_a8), -1 < iVar3)) {
                if (puStack_a8 == NULL) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = *puStack_a8 & 0xffffff;
                }
                uVar1 = 8;
                if (uVar4 != 0xffffff) {
                    uVar1 = 4;
                }
                if (*(uVar1 + puStack_a8) == 0x48505346) {
                    (uVar1 + puStack_a8)[7] = iStackX_18 + iStack_a0;
                }
            }
            iVar3 = fcn.000174c4(iVar2,((arg3 & 0xffffffffU) - arg1_00) + iVar2,iStackX_20);
            if (iVar3 < 0) {
                return 0x8000000000000015;
            }
            if (*0x1f1d0 == 0) {
                iVar3 = -0x7fffffffffffffeb;
            }
            else {
                iVar3 = fcn.00018d88(iVar2,&iStackX_10);
                iVar2 = iStackX_10;
            }
            if (iVar3 < 0) {
                return 0x8000000000000015;
            }
            arg1 = &uStack_98;
            iVar3 = fcn.0001644c(iVar2,arg1,0x10);
        } while ((iVar3 != 0) && (iVar2 != 0));
    }
    if (uVar5 < in_stack_00000028) {
        *0x1f288 = fcn.000161ac(in_stack_00000028);
        (**(*0x1f130 + 0x168))(*0x1f288,in_stack_00000028,0xff);
    }
    else {
        *0x1f288 = fcn.000161ac(arg1_01);
    }
    fcn.0001d7b0(*0x1f288,arg1_00,arg1_01);
    (**(*0x1f130 + 0x48))(arg1_00);
    return 0;
}


/* fcn.00018f7c @ 0x18f7c */

ulong fcn.00018f7c(void)

{
    int16_t *piVar1;
    int16_t iVar2;
    uint64_t uVar3;
    
    iVar2 = 0;
    if (*0x1f1d0 == NULL) {
        return 0x8000000000000002;
    }
    if (*(*0x1f1d0 + 0x14) != 0x4856465f) {
        return 0x800000000000000a;
    }
    if ((*0x1f1d0)[0x18] >> 1 != 0) {
        uVar3 = (*0x1f1d0)[0x18] >> 1;
        piVar1 = *0x1f1d0;
        do {
            iVar2 = iVar2 + *piVar1;
            piVar1 = piVar1 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        if (iVar2 != 0) {
            return 0x8000000000000015;
        }
    }
    return 0;
}


/* fcn.00012ed8 @ 0x12ed8 */

int64_t fcn.00012ed8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t extraout_RAX;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    unkbyte7 Var7;
    
    Var7 = arg2 >> 8;
    iVar5 = CONCAT71(arg1 >> 8,0xa3);
    iVar4 = CONCAT71(noname_0 >> 8,0x62);
    uVar6 = 0;
    fcn.00012e10(iVar4,iVar5,CONCAT71(Var7,4));
    iVar3 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar5 = CONCAT71(iVar5 >> 8,0xa2);
        iVar4 = CONCAT71(iVar4 >> 8,0x62);
        iVar3 = fcn.00012e10(iVar4,iVar5,CONCAT71(Var7,arg1));
        if ((-1 < iVar3) && (iVar3 = fcn.00012cac(CONCAT71(iVar4 >> 8,0x62),CONCAT71(iVar5 >> 8,0xa4)), -1 < iVar3))
        {
            uVar1 = in(0x66);
            if ((uVar1 & 1) == 0) {
                do {
                    if (0x1ffff < uVar6) {
                        return -0x7ffffffffffffff9;
                    }
                    fcn.00016700(0xf,0x66);
                    uVar1 = in(0x66);
                    uVar6 = uVar6 + 1;
                } while ((uVar1 & 1) == 0);
                if (0x1ffff < uVar6) {
                    return -0x7ffffffffffffff9;
                }
            }
            uVar2 = in(0x62);
            *arg2 = uVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00019124 @ 0x19124 */

int fcn.00019124(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    int iVar4;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((*(CONCAT44(in_register_0000000c,arg1) + 0x20) == 0x6de000) &&
       (iVar2 = (**(*0x1f130 + 0x28))(0,4,0x6df,&iStackX_8), -1 < iVar2)) {
        fcn.0001d7b0(iStackX_8,CONCAT44(in_register_0000000c,arg1),0x6de000);
        iVar4 = iStackX_8;
        uVar3 = *(iStackX_8 + 0x30) + iVar4;
        do {
            uVar1 = uVar3;
            iVar2 = fcn.0001644c(uVar1,arg2,0x10);
            if (iVar2 == 0) {
                *0x1f2a0 = (*(uVar3 + 0x14) & 0xffffff) - 0x18;
                return uVar1 + 0x18;
            }
            uVar3 = uVar1 + (*(uVar3 + 0x14) & 0xffffff) + 7 & 0xfffffff8;
        } while (((uVar3 - iVar4 < 0x6de000) && (uVar1 = *(uVar3 + 0x14) & 0xffffff, uVar1 != 0xffffff)) &&
                (uVar1 != 0));
    }
    return 0;
}


/* fcn.00019698 @ 0x19698 */

ulong fcn.00019698(ulong param_1)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,0xdc);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 1) == 0);
    cVar2 = in(0x62);
    if (cVar2 == '3') {
        iVar3 = fcn.000195ac();
        if (iVar3 == 0) {
            fcn.00019f14();
            do {
                uVar1 = in(0x66);
            } while ((uVar1 & 2) != 0);
            out(0x66,1);
            do {
                uVar1 = in(0x66);
            } while ((uVar1 & 2) != 0);
            iVar3 = CONCAT71(param_1 >> 8,6);
            fcn.00019ec4(iVar3);
            do {
                uVar1 = in(0x66);
            } while ((uVar1 & 2) != 0);
            out(0x66,1);
            do {
                uVar1 = in(0x66);
            } while ((uVar1 & 2) != 0);
            fcn.00019f80();
            if (*0x1f2d9 == -0x41) {
                do {
                    uVar1 = in(0x66);
                } while ((uVar1 & 2) != 0);
                out(0x66,1);
                do {
                    uVar1 = in(0x66);
                } while ((uVar1 & 2) != 0);
                iVar3 = CONCAT71(iVar3 >> 8,0x50);
                fcn.00019ec4(iVar3);
            }
            do {
                uVar1 = in(0x66);
            } while ((uVar1 & 2) != 0);
            out(0x66,1);
            do {
                uVar1 = in(0x66);
            } while ((uVar1 & 2) != 0);
            fcn.00019ec4(CONCAT71(iVar3 >> 8,1));
            fcn.00019eec(0);
            fcn.00019f14();
            return 0;
        }
        do {
            uVar1 = in(0x66);
        } while ((uVar1 & 2) != 0);
        out(0x66,0xfc);
        do {
            uVar1 = in(0x66);
        } while ((uVar1 & 2) != 0);
    }
    return 0x8000000000000007;
}


/* fcn.00019c08 @ 0x19c08 */

uint64_t fcn.00019c08(void)

{
    uchar auVar1 [16];
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint uStackX_8;
    
    uVar8 = 0;
    uVar5 = 1;
    if (*0x1f1f0 != 0) {
        (**(*0x1f1f0 + 0x78))(1,L"Updating EC Firmware",0,0,0,0x1f2e8,0x1f2e0);
    }
    *0x1f2f0 = 0x40000 / *0x1f2cc;
    if (100 < *0x1f2f0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *0x1f2f0;
        iVar6 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
        uVar5 = ((*0x1f2f0 - iVar6 >> 1) + iVar6 >> 6) + 1;
    }
    uStackX_8 = 0;
    uVar7 = uVar8;
    *0x1f2d0 = uVar8;
    *0x1f2c0 = uVar5;
    do {
        *0x1f2d0 = *0x1f2d0 + 1;
        uVar5 = *0x1f2c0;
        if ((*0x1f2d0 == *0x1f2c0) && (*0x1f1f0 != 0)) {
            uVar4 = uVar7 * 100;
            *0x1f2f8 = uVar4 >> 0x12;
            uVar5 = CONCAT31(uVar4 >> 0x1a,2);
            (**(*0x1f1f0 + 0x78))(uVar5,L"Updating EC Firmware"," ",0,*0x1f2f8,0x1f2e8,0x1f2e0);
            *0x1f2d0 = 0;
        }
        fcn.0001a0a4();
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        out(0x66,1);
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        if ((*0x1f2d8 != -1) || (uVar5 = CONCAT71(uVar5 >> 8,0xd7), *0x1f2d9 != -0x10001)) {
            uVar5 = CONCAT71(uVar5 >> 8,0x52);
        }
        fcn.00019ec4(uVar5);
        iVar6 = CONCAT71(uVar5 >> 8,uStackX_8._2_1_);
        fcn.00019eec(iVar6);
        iVar6 = CONCAT71(iVar6 >> 8,uStackX_8._1_1_);
        fcn.00019eec(iVar6);
        uVar5 = CONCAT71(iVar6 >> 8,uVar7);
        fcn.00019eec(uVar5);
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        out(0x66,5);
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        fcn.00019f14();
        fcn.00019fec();
        uStackX_8 = uVar7 + *0x1f2cc;
        uVar7 = uStackX_8;
    } while (uStackX_8 < 0x40000);
    uStackX_8 = 0;
    uVar7 = uVar8;
    do {
        iVar9 = uVar7;
        fcn.00019f14();
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        out(0x66,1);
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        iVar6 = CONCAT71(uVar5 >> 8,0xb);
        fcn.00019ec4(iVar6);
        iVar6 = CONCAT71(iVar6 >> 8,uStackX_8._2_1_);
        fcn.00019eec(iVar6);
        iVar6 = CONCAT71(iVar6 >> 8,uStackX_8._1_1_);
        fcn.00019eec(iVar6);
        fcn.00019eec(CONCAT71(iVar6 >> 8,iVar9));
        uVar5 = 0;
        fcn.00019eec(0);
        do {
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 2) != 0);
            out(0x66,4);
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 2) != 0);
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 1) == 0);
            cVar3 = in(0x62);
            if (cVar3 != -1) {
                uVar8 = 0x8000000000000007;
                goto code_r0x00019e55;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x100);
        uStackX_8 = iVar9 + 0x100;
        uVar7 = uStackX_8;
        if (0x3ffff < uStackX_8) {
code_r0x00019e55:
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 2) != 0);
            out(0x66,5);
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 2) != 0);
            if (*0x1f1f0 != 0) {
                (**(*0x1f1f0 + 0x78))(3,L"Updating EC Firmware",0,0,0,0x1f2e8,0x1f2e0);
            }
            return uVar8;
        }
    } while( true );
}


/* fcn.0001998c @ 0x1998c */

ulong fcn.0001998c(int64_t arg1)

{
    uchar auVar1 [16];
    int64_t iVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    iVar2 = *0x1f1e8;
    if (*0x1f1f0 != 0) {
        (**(*0x1f1f0 + 0x78))();
    }
    *0x1f2f0 = 0x40000 / *0x1f2c8;
    *0x1f1e4 = *0x1f1e4 & -(*0x1f1e4 < 0x40000);
    *0x1f2d0 = 0;
    if (*0x1f2f0 < 0x65) {
        *0x1f2c0 = 1;
    }
    else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *0x1f2f0;
        iVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
        *0x1f2c0 = ((*0x1f2f0 - iVar4 >> 1) + iVar4 >> 6) + 1;
    }
    uVar5 = 0;
    do {
        *0x1f2d0 = *0x1f2d0 + 1;
        iVar4 = *0x1f2c0;
        if ((*0x1f2d0 == *0x1f2c0) && (*0x1f1f0 != 0)) {
            iVar4 = CONCAT71(*0x1f2c0 >> 8,2);
            *0x1f2f8 = uVar5 * 100 >> 0x12;
            (**(*0x1f1f0 + 0x78))
                      (iVar4,L"Updating EC Firmware",L"                Programming...            ",0,*0x1f2f8,
                       0x1f2e8,0x1f2e0);
            *0x1f2d0 = 0;
        }
        fcn.0001a0a4();
        do {
            uVar3 = in(0x66);
        } while ((uVar3 & 2) != 0);
        out(0x66,1);
        do {
            uVar3 = in(0x66);
        } while ((uVar3 & 2) != 0);
        if ((*0x1f2d8 != -1) || (iVar4 = CONCAT71(iVar4 >> 8,0xad), *0x1f2d9 != -0x10001)) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
        }
        fcn.00019ec4(iVar4);
        iVar4 = CONCAT71(iVar4 >> 8,*0x1f1e6);
        fcn.00019eec(iVar4);
        iVar4 = CONCAT71(iVar4 >> 8,*0x1f1e5);
        fcn.00019eec(iVar4);
        iVar4 = CONCAT71(iVar4 >> 8,*0x1f1e4);
        fcn.00019eec(iVar4);
        uVar6 = 0;
        if (*0x1f2c8 != 0) {
            do {
                iVar4 = CONCAT71(iVar4 >> 8,*(uVar5 + iVar2 + uVar6));
                fcn.00019eec(iVar4);
                if ((((uVar6 & 1) != 0) && (*0x1f2d8 == -1)) && (*0x1f2d9 == -0x10001)) {
                    fcn.00019f14();
                    do {
                        uVar3 = in(0x66);
                    } while ((uVar3 & 2) != 0);
                    out(0x66,1);
                    do {
                        uVar3 = in(0x66);
                    } while ((uVar3 & 2) != 0);
                    iVar4 = CONCAT71(iVar4 >> 8,0xad);
                    fcn.00019ec4(iVar4);
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < *0x1f2c8);
        }
        fcn.00019f14();
        fcn.00019fec();
        *0x1f1e4 = *0x1f1e4 + *0x1f2c8;
        uVar5 = uVar5 + *0x1f2c8;
    } while (uVar5 < 0x40000);
    do {
        uVar3 = in(0x66);
    } while ((uVar3 & 2) != 0);
    out(0x66,5);
    do {
        uVar3 = in(0x66);
    } while ((uVar3 & 2) != 0);
    if (*0x1f1f0 != 0) {
        (**(*0x1f1f0 + 0x78))(0x1f203,L"Updating EC Firmware",0,0,0,0x1f2e8,0x1f2e0);
    }
    return 0;
}


/* fcn.0001978c @ 0x1978c */

ulong fcn.0001978c(void)

{
    int64_t iVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong uVar7;
    
    iVar1 = *0x1f1e8;
    uVar5 = 0;
    if (*0x1f1f0 != 0) {
        (**(*0x1f1f0 + 0x78))(0x1f201,L"Updating EC Firmware",0,0,0,0x1f2e8,0x1f2e0);
    }
    uVar7 = 0x40000;
    uVar6 = -(*0x1f1e0 < 0x40000);
    *0x1f1e0 = *0x1f1e0 & -(*0x1f1e0 < 0x40000);
    fcn.00019f14();
    do {
        uVar2 = in(0x66);
    } while ((uVar2 & 2) != 0);
    out(0x66,1);
    do {
        uVar2 = in(0x66);
    } while ((uVar2 & 2) != 0);
    iVar4 = CONCAT71(uVar6 >> 8,0xb);
    fcn.00019ec4(iVar4);
    iVar4 = CONCAT71(iVar4 >> 8,*0x1f1e2);
    fcn.00019eec(iVar4);
    iVar4 = CONCAT71(iVar4 >> 8,*0x1f1e1);
    fcn.00019eec(iVar4);
    fcn.00019eec(CONCAT71(iVar4 >> 8,*0x1f1e0));
    fcn.00019eec(0);
    *0x1f2d0 = 0;
    iVar4 = 0;
    uVar6 = 0;
    *0x1f2c0 = 0xa3e;
    *0x1f2f0 = uVar7;
    while( true ) {
        *0x1f2d0 = *0x1f2d0 + 1;
        if ((*0x1f2d0 == *0x1f2c0) && (*0x1f1f0 != 0)) {
            *0x1f2f8 = uVar6 >> 0x12;
            (**(*0x1f1f0 + 0x78))
                      (0x1f202,L"Updating EC Firmware",L"                Verifying...              ",0,*0x1f2f8,
                       0x1f2e8,0x1f2e0);
            *0x1f2d0 = 0;
        }
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        out(0x66,4);
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 2) != 0);
        do {
            uVar2 = in(0x66);
        } while ((uVar2 & 1) == 0);
        cVar3 = in(0x62);
        if (*(iVar4 + iVar1) != cVar3) break;
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 + 100;
        if (0x18fffff < uVar6) {
code_r0x00019918:
            *0x1f1e0 = *0x1f1e0 + iVar4;
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 2) != 0);
            out(0x66,5);
            do {
                uVar2 = in(0x66);
            } while ((uVar2 & 2) != 0);
            if (*0x1f1f0 != 0) {
                (**(*0x1f1f0 + 0x78))(3,L"Updating EC Firmware",0,0,0,0x1f2e8,0x1f2e0);
            }
            return uVar5;
        }
    }
    uVar5 = 0x8000000000000007;
    goto code_r0x00019918;
}


/* fcn.00019f14 @ 0x19f14 */

void fcn.00019f14(ulong param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    ushort uVar3;
    uint8_t uVar4;
    
    uVar3 = 0x66;
    uVar4 = 2;
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,1);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    uVar2 = 5;
    fcn.00019ec4(CONCAT71(param_1 >> 8,5));
    do {
        do {
            uVar1 = in(uVar3);
        } while ((uVar4 & uVar1) != 0);
        out(uVar3,4);
        do {
            uVar1 = in(uVar3);
        } while ((uVar4 & uVar1) != 0);
        do {
            uVar1 = in(uVar3);
        } while ((uVar1 & 1) == 0);
        uVar1 = in(0x62);
    } while ((uVar1 & 1) != 0);
    do {
        uVar1 = in(uVar3);
    } while ((uVar4 & uVar1) != 0);
    out(uVar3,uVar2);
    do {
        uVar1 = in(uVar3);
    } while ((uVar4 & uVar1) != 0);
    return;
}


/* fcn.00019ec4 @ 0x19ec4 */

void fcn.00019ec4(int64_t arg1)

{
    uint8_t uVar1;
    
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,2);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,arg1);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    return;
}


/* fcn.000195ac @ 0x195ac */

uint64_t fcn.000195ac(ulong param_1)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uchar uVar4;
    uint64_t uVar5;
    ushort uVar6;
    uint8_t uVar7;
    
    uVar7 = 0;
    fcn.00019f14();
    uVar6 = 0x66;
    do {
        uVar2 = in(0x66);
    } while ((uVar2 & 2) != 0);
    out(0x66,1);
    do {
        uVar2 = in(0x66);
    } while ((uVar2 & 2) != 0);
    fcn.00019ec4(CONCAT71(param_1 >> 8,0x9f));
    uVar2 = uVar7;
    do {
        do {
            uVar3 = in(uVar6);
        } while ((uVar3 & 2) != 0);
        out(uVar6,4);
        do {
            uVar3 = in(uVar6);
        } while ((uVar3 & 2) != 0);
        do {
            uVar3 = in(uVar6);
        } while ((uVar3 & 1) == 0);
        uVar4 = in(0x62);
        uVar5 = uVar2;
        uVar2 = uVar2 + 1;
        *(uVar5 + 0x1f2d9) = uVar4;
    } while (uVar2 < 4);
    uVar2 = uVar7;
    do {
        cVar1 = *(uVar2 * 0xc + 0x1e0e0);
        if (*0x1f2d9 == cVar1) {
            uVar7 = 1;
            *0x1f2cc = *(uVar2 * 0xc + 0x1e0e4);
            *0x1f2c8 = *(uVar2 * 0xc + 0x1e0e8);
            *0x1f2d8 = cVar1;
            break;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0xc);
    do {
        uVar2 = in(uVar6);
    } while ((uVar2 & 2) != 0);
    out(uVar6,5);
    do {
        uVar2 = in(uVar6);
    } while ((uVar2 & 2) != 0);
    return ~-(uVar7 != 0) & 0x8000000000000007;
}


/* fcn.00019f80 @ 0x19f80 */

void fcn.00019f80(ulong param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    ushort uVar3;
    uint8_t uVar4;
    
    uVar3 = 0x66;
    uVar4 = 2;
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,1);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    uVar2 = 5;
    fcn.00019ec4(CONCAT71(param_1 >> 8,5));
    do {
        do {
            uVar1 = in(uVar3);
        } while ((uVar4 & uVar1) != 0);
        out(uVar3,4);
        do {
            uVar1 = in(uVar3);
        } while ((uVar4 & uVar1) != 0);
        do {
            uVar1 = in(uVar3);
        } while ((uVar1 & 1) == 0);
        uVar1 = in(0x62);
    } while ((uVar4 & uVar1) == 0);
    do {
        uVar1 = in(uVar3);
    } while ((uVar4 & uVar1) != 0);
    out(uVar3,uVar2);
    do {
        uVar1 = in(uVar3);
    } while ((uVar4 & uVar1) != 0);
    return;
}


/* fcn.00019eec @ 0x19eec */

void fcn.00019eec(int64_t arg1)

{
    uint8_t uVar1;
    
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,3);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,arg1);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    return;
}


/* fcn.0001a0a4 @ 0x1a0a4 */

void fcn.0001a0a4(ulong param_1)

{
    uint8_t uVar1;
    unkbyte7 Var2;
    ushort uVar3;
    
    Var2 = param_1 >> 8;
    fcn.00019f14();
    uVar3 = 0x66;
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,1);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    fcn.00019ec4(CONCAT71(Var2,6));
    do {
        uVar1 = in(uVar3);
    } while ((uVar1 & 2) != 0);
    out(uVar3,1);
    do {
        uVar1 = in(uVar3);
    } while ((uVar1 & 2) != 0);
    fcn.00019f80();
    do {
        uVar1 = in(uVar3);
    } while ((uVar1 & 2) != 0);
    out(uVar3,5);
    do {
        uVar1 = in(uVar3);
    } while ((uVar1 & 2) != 0);
    return;
}


/* fcn.00019fec @ 0x19fec */

void fcn.00019fec(ulong param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    unkbyte7 Var3;
    uint8_t uVar4;
    ushort uVar5;
    
    Var3 = param_1 >> 8;
    fcn.00019f14();
    uVar4 = 2;
    uVar5 = 0x66;
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    out(0x66,1);
    do {
        uVar1 = in(0x66);
    } while ((uVar1 & 2) != 0);
    fcn.00019ec4(CONCAT71(Var3,4));
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    out(uVar5,1);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    out(uVar5,1);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    uVar2 = 5;
    fcn.00019ec4(CONCAT71(Var3,5));
    do {
        do {
            uVar1 = in(uVar5);
        } while ((uVar4 & uVar1) != 0);
        out(uVar5,4);
        do {
            uVar1 = in(uVar5);
        } while ((uVar4 & uVar1) != 0);
        do {
            uVar1 = in(uVar5);
        } while ((uVar1 & 1) == 0);
        uVar1 = in(0x62);
    } while ((uVar4 & uVar1) != 0);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    out(uVar5,uVar2);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    out(uVar5,uVar2);
    do {
        uVar1 = in(uVar5);
    } while ((uVar4 & uVar1) != 0);
    return;
}


/* fcn.0001cdc8 @ 0x1cdc8 */

ulong fcn.0001cdc8(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    
    arg2 = 0;
    *0x1e298 = *0xc00fd010 & 0xfffff000;
    *(*0x1e298 + 8) = 0;
    *(*0x1e298 + 6) = 0x20d;
    fcn.0001c538(0x201,0);
    fcn.00016700(arg2 + 10,arg2);
    *arg1 = *(*0x1e298 + 0x10) & 0xffffff;
    return 1;
}


/* fcn.0001c538 @ 0x1c538 */

void fcn.0001c538(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x1e298 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x1e298 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x1e298 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x1e298 + 0xa0) = 0x1c;
    }
    return;
}


/* fcn.0001cd80 @ 0x1cd80 */

void fcn.0001cd80(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    *0x1e298 = *0xc00fd010 & 0xfffff000;
    iVar3 = fcn.0001c8d4();
    if (iVar3 < 0) {
        fcn.0001c9e0(arg1);
    }
    fcn.0001cbfc();
    fcn.0001d3e0(0);
    uVar1 = *0x1e298;
    *(*0x1e298 + 0xb4) = 0;
    if (*(uVar1 + 0xb8) == 0xff0a55a) {
        *(uVar1 + 0xb4) = 4;
        uVar5 = 0;
        *(uVar1 + 0xb4) = 0x1000;
        uVar6 = *(uVar1 + 0xb8);
        iVar4 = 0;
        uVar7 = *(uVar1 + 0xb8) >> 8 & 3;
        if (uVar7 != 0xffffffff) {
            do {
                uVar2 = uVar6 & 7;
                if (uVar2 == 0) {
                    iVar4 = iVar4 + 0x80000;
                }
                else if (uVar2 == 1) {
                    iVar4 = iVar4 + 0x100000;
                }
                else if (uVar2 == 2) {
                    iVar4 = iVar4 + 0x200000;
                }
                else if (uVar2 == 3) {
                    iVar4 = iVar4 + 0x400000;
                }
                else if (uVar2 == 4) {
                    iVar4 = iVar4 + 0x800000;
                }
                else if (uVar2 == 5) {
                    iVar4 = iVar4 + 0x1000000;
                }
                else if (uVar2 == 6) {
                    iVar4 = iVar4 + 0x2000000;
                }
                else if (uVar2 == 7) {
                    iVar4 = iVar4 + 0x4000000;
                }
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 >> 4;
            } while (uVar5 < uVar7 + 1);
        }
        if (iVar4 != *0x1e21a) {
            *0x1e21a = iVar4;
        }
    }
    return;
}


/* fcn.0001a3e8 @ 0x1a3e8 */

ulong fcn.0001a3e8(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (0x19 < uVar1) {
        if (uVar1 == 0x1a) {
            return 0x4000000;
        }
        if (uVar1 != 0x1b) {
            if (uVar1 == 0x20) {
                return 0x4000000;
            }
            if (uVar1 != 0x21) {
                if (uVar1 == 0x36) {
                    return 0x400000;
                }
                if (uVar1 == 0x37) {
                    return 0x800000;
                }
                if (uVar1 != 0x38) {
                    if (uVar1 == 0x39) {
                        return 0x2000000;
                    }
                    if (uVar1 == 0x3a) {
                        return 0x4000000;
                    }
                }
                return 0x1000000;
            }
        }
        return 0x8000000;
    }
    if (uVar1 == 0x19) {
        return 0x2000000;
    }
    if (uVar1 == 0x10) {
        return 0x10000;
    }
    if (uVar1 == 0x11) {
        return 0x20000;
    }
    if (uVar1 != 0x12) {
        if (uVar1 == 0x13) {
            return 0x80000;
        }
        if (uVar1 == 0x14) {
            return 0x100000;
        }
        if (uVar1 == 0x15) {
            return 0x200000;
        }
        if (uVar1 == 0x16) {
            return 0x400000;
        }
        if (uVar1 == 0x17) {
            return 0x800000;
        }
        return 0x1000000;
    }
    return 0x40000;
}


/* fcn.0001a498 @ 0x1a498 */

ulong fcn.0001a498(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 == 0x12) {
        return 0x80000;
    }
    if (uVar1 == 0x13) {
        return 0x100000;
    }
    if (uVar1 == 0x14) {
        return 0x200000;
    }
    if (uVar1 == 0x15) {
        return 0x400000;
    }
    if (uVar1 == 0x16) {
        return 0x800000;
    }
    if (uVar1 != 0x17) {
        if (uVar1 == 0x20) {
            return 0x4000000;
        }
        if (uVar1 == 0x46) {
            return 0x400000;
        }
    }
    return 0x1000000;
}


/* fcn.0001a4f0 @ 0x1a4f0 */

ulong fcn.0001a4f0(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            return 0x400000;
        }
        if (uVar1 != 0x41) {
            if (uVar1 != 0x43) {
                if (uVar1 == 0x4a) {
                    return 0x400000;
                }
                if (uVar1 != 0x4b) {
                    if (uVar1 == 0x8c) {
                        return 0x40000;
                    }
                    if (uVar1 == 0x8d) {
                        return 0x80000;
                    }
                    if (uVar1 == 0x8e) {
                        return 0x100000;
                    }
                    return 0x1000000;
                }
            }
            return 0x800000;
        }
    }
    return 0x200000;
}


/* fcn.0001af8c @ 0x1af8c */

void fcn.0001af8c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = 0x1d4c;
    do {
        iVar2 = 5;
        do {
            fcn.00016700(0x1e,arg1);
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar1 = iVar1 + -1;
    } while ((*0xfed40019 == 0) && (iVar1 != 0));
    return;
}


/* fcn.0001b2a0 @ 0x1b2a0 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.0001b2a0(int64_t arg1,int64_t arg2)

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
        goto code_r0x0001b7a6;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x0001b7a6;
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
        goto code_r0x0001b7a6;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x0001b7a6;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x0001b386;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x0001b7a6;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x0001b386;
            goto code_r0x0001b66d;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x0001b78a:
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
code_r0x0001b386:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x0001b7a6;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x0001b386;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x0001b624:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x0001b3f3;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x0001b7a6;
                }
code_r0x0001b651:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x0001b66d:
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
                            goto code_r0x0001b7a6;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x0001b7a6;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x0001b386;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x0001b3f3;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x0001b7a6;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x0001b78a;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x0001b386;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x0001b7a6;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x0001b386;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x0001b624;
                }
                goto code_r0x0001b651;
            }
        }
    }
code_r0x0001b3f3:
    bVar9 = iStackX_18 == 1;
code_r0x0001b7a6:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.0001c3a4 @ 0x1c3a4 */

ulong fcn.0001c3a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x1e298 < 0) {
                uVar2 = (*0x1e298)[0x1b];
            }
            else {
                uVar2 = (*0x1e298)[0x16];
            }
        }
        else {
            uVar2 = (*0x1e298)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x1e298)[iVar1 + -0xc + 0x38];
    }
    if (uVar2 == 0x7fff) {
        return 0x8000000000000003;
    }
    if (arg2 != 0) {
        *arg2 = (uVar2 & 0xffff) << 0xc;
    }
    if (arg3 != 0) {
        *arg3 = (uVar2 | 0xfff0) >> 4;
    }
    return 0;
}


/* fcn.0001d2d8 @ 0x1d2d8 */

void fcn.0001d2d8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int iVar4;
    uint *arg2_00;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint auStack_28 [4];
    
    iVar6 = 0;
    *0x1e298 = *0xc00fd010 & 0xfffff000;
    if (arg4 == '\x01') {
        arg2_00 = auStack_28;
        iVar2 = fcn.0001c7a0(arg1,arg2_00);
        if (iVar2 < 0) {
            return;
        }
    }
    else {
        arg2_00 = arg2;
        auStack_28[0] = arg1;
    }
    uVar1 = auStack_28[0];
    uVar7 = 0x100 - (auStack_28[0] & 0xff);
    uVar8 = uVar7;
    if (0x40 < uVar7) {
        uVar8 = 0x40;
    }
    if (*arg3 < uVar8) {
        uVar8 = *arg3;
    }
    fcn.0001c538(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
    uVar7 = uVar8;
    iVar4 = (uVar8 & 0xffff) * 0x100;
    *(*0x1e298 + 8) = uVar1;
    iVar3 = iVar4 + -0xff;
    *(*0x1e298 + 6) = iVar3;
    fcn.0001c538(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
    if (uVar7 != 0) {
        uVar5 = uVar7;
        do {
            *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x1e298);
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    *arg3 = *arg3 - uVar7;
    return;
}


/* fcn.0001c428 @ 0x1c428 */

ulong fcn.0001c428(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t auStackX_10 [2];
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [16];
    
    auStackX_10[0] = arg1;
    uVar5 = 0;
    uVar4 = arg2 & 0xffffffff;
    iVar6 = 0xff0a55a;
    *0x1e298 = *0xc00fd010 & 0xfffff000;
    *(*0x1e298 + 0xb4) = 0;
    if ((((*(*0x1e298 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.0001c3a4(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
        (uVar3 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
       ((*(*0x1e298 + 0xb4) = uVar5, *(*0x1e298 + 0xb8) == iVar6 &&
        (iVar1 = fcn.0001c3a4(1,0,auStack_18), -1 < iVar1)))) {
        auStackX_10[0] = uVar3;
        if (uVar3 != 0) {
            do {
                fcn.0001d2d8((uVar5 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                             (uVar5 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                uVar5 = uVar3 - auStackX_10[0];
            } while (uVar3 - auStackX_10[0] < uVar3);
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.0001c8d4 @ 0x1c8d4 */

int64_t fcn.0001c8d4(void)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t auStack_48 [16];
    
    puVar4 = auStack_48;
    iVar2 = 0x40;
    fcn.00010320(puVar4,0x40,0);
    iVar2 = fcn.0001c428(puVar4,iVar2,0xefc,4);
    if ((-1 < iVar2) && (auStack_48[0] - 1 < 0xfffffffe)) {
        uVar8 = 0;
        uVar6 = auStack_48[0] >> 6 & 0x3fc;
        if (uVar6 != 0) {
            do {
                puVar4 = auStack_48;
                iVar2 = 0x40;
                fcn.00010320(puVar4,0x40,0);
                uVar7 = uVar6 - uVar8;
                if (0x3f < uVar6 - uVar8) {
                    uVar7 = 0x40;
                }
                iVar2 = fcn.0001c428(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x1e21e) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x1e298 + 0xc4) = uVar1;
                            *(*0x1e298 + 200) = uVar1;
                            return 0;
                        }
                        uVar3 = uVar5 + 8;
                        uVar5 = uVar3;
                    } while (uVar3 < uVar7);
                }
                uVar8 = uVar8 + 0x40;
            } while (uVar8 < uVar6);
        }
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.0001c9e0 @ 0x1c9e0 */

void fcn.0001c9e0(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uStackX_8;
    uint32_t uStack_108;
    uchar uStack_104;
    char acStack_fe [246];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *(iVar4 + 4) << 8;
    if (*(iVar4 + 0x16) == 0x1000) {
        uVar3 = uVar3 | 1;
    }
    else if (*(iVar4 + 0x16) == 0x2000) {
        uVar3 = uVar3 | 2;
    }
    else if (*(iVar4 + 0x16) == 0x10000) {
        uVar3 = uVar3 | 3;
    }
    uVar1 = uVar3 | 4;
    if (*(iVar4 + 0x12) == 1) {
        uVar1 = uVar3;
    }
    uVar3 = uVar1 | 8;
    if (*(iVar4 + 0xe) != 'P') {
        uVar3 = uVar1;
    }
    uVar1 = uVar3 | 0x10;
    if (*(iVar4 + 0xe) != '9') {
        uVar1 = uVar3;
    }
    fcn.00010320(&uStack_108,0x100,0);
    uVar3 = 0;
    do {
        iVar4 = 0;
        *(*0x1e298 + 8) = uVar3;
        *(*0x1e298 + 6) = 0x3f0b;
        fcn.0001c538(0x3f01,0);
        fcn.00016700(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x1e298);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x1e298 + 0xcc) = 0;
                fcn.00016700(1,iVar4);
                if (*(*0x1e298 + 0xd4) == 0x50444653) goto code_r0x0001cb30;
                goto code_r0x0001cb98;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x0001cb30:
        uVar3 = *0x1e21e & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x1e21e & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x1e21e >> 8 != '@') goto code_r0x0001cb98;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x0001cb98;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x0001cb98;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x0001cb98;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x0001cb98:
    *(*0x1e298 + 0xc4) = uVar2;
    *(*0x1e298 + 200) = uVar2;
    return;
}


/* fcn.0001cbfc @ 0x1cbfc */

void fcn.0001cbfc(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x1e223 == '\x01') {
        uVar1 = *(*0x1e298 + 0xaf);
        uVar2 = *(*0x1e298 + 0xa7);
        *(*0x1e298 + 0xaf) = 0x98;
        if (*(*0x1e298 + 0xaf) == -0x68) {
            *(*0x1e298 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x1e298 + 0xa1) = 0x72;
            fcn.0001c538(0,CONCAT71(param_2 >> 8,1));
            *(*0x1e298 + 0xaf) = uVar1;
            *(*0x1e298 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.0001d3e0 @ 0x1d3e0 */

void fcn.0001d3e0(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.0001c5a0(arg1);
    uVar3 = *0x1e21e & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x0001d51b;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x1e21e & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x1e21a < 0x800000;
                goto code_r0x0001d513;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x0001d51b;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x1e21e & 0xffff) != 0x609d) {
            bVar4 = (*0x1e21e & 0xffff) == 0x709d;
code_r0x0001d4de:
            if (!bVar4) goto code_r0x0001d51b;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x0001d51b;
        if (uVar3 == 0xc2) {
            uVar3 = *0x1e21e & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x0001d4de;
                }
                goto code_r0x0001d515;
            }
            bVar4 = *0x1e21a < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x1e21e & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x0001d51b;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x1e21e & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x0001d51b;
            bVar4 = *0x1e21a < 0x2000000;
        }
code_r0x0001d513:
        if (bVar4) goto code_r0x0001d51b;
    }
code_r0x0001d515:
    uVar2 = 0x3c;
code_r0x0001d51b:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.0001c5a0(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.0001c538(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x1e298 + 0x10) = uVar1;
        *(*0x1e298 + 8) = arg1;
        if ((*(*0x1e298 + 4) & 0x800) == 0) {
            *(*0x1e298 + 6) = 0xf;
            fcn.0001c538(CONCAT71(arg1_01 >> 8,1),0);
            fcn.0001c5dc();
        }
    }
    return;
}


/* fcn.0001c7a0 @ 0x1c7a0 */

ulong fcn.0001c7a0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t auStackX_8 [2];
    uint64_t uStackX_18;
    ulong uStackX_20;
    
    iVar6 = arg1;
    uStackX_20 = *0x1f210;
    uStackX_18 = *0x1f220;
    if (*0x1f220 != 0) goto code_r0x0001c898;
    *(*0x1e298 + 0xb4) = 0;
    if (*(*0x1e298 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.0001c3a4(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x0001c870;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x1e298 + 0xb4) = 0;
            if (*(*0x1e298 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.0001c3a4(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x0001c870:
        uVar4 = *0x1e21a - 1U;
        uStackX_18 = *0x1e21a - 1U;
    }
    *0x1f210 = uStackX_20;
    *0x1f208 = uVar4;
    *0x1f220 = uStackX_18;
code_r0x0001c898:
    if (*0x1f218 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x1ddf0);
    }
    uVar1 = *0x1f220 + 1 + iVar6;
    if (*0x1f208 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001c620 @ 0x1c620 */

ulong fcn.0001c620(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t arg4_00;
    uint32_t uVar9;
    uint32_t auStackX_20 [2];
    char in_stack_00000028;
    int32_t var_48h;
    char acStack_68 [32];
    uint32_t var_40h;
    
    arg4_00 = arg4;
    uVar7 = arg3;
    uVar1 = arg4;
    uVar5 = arg3 & 0xffffffff;
    if ((((uVar1 != 0) && (*0x1f220 != 0)) && (*0x1f218 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x1f210 + (0xffffffff - *0x1f208) <= arg1) && (arg1 <= *0x1f220 + (0xffffffff - *0x1f208))) {
                uVar1 = 0;
            }
        }
        else if (*0x1f210 <= arg1) {
            uVar1 = -(*0x1f220 < arg1) & uVar1;
        }
    }
    uVar6 = 0;
    auStackX_20[0] = uVar7;
    if (uVar7 != 0) {
        do {
            fcn.00010320(acStack_68,0x40,0);
            uVar9 = uVar5;
            if (uVar1 == 0) {
                if (uVar9 < 0x41) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = uVar9 - 0x40;
                }
                auStackX_20[0] = uVar5;
                if ((uVar9 - auStackX_20[0] != 0) && (acStack_68 != uVar6 + arg1)) {
                    section..text(acStack_68,uVar6 + arg1,uVar9 - auStackX_20[0]);
                }
            }
            else {
                arg4_00 = CONCAT31(arg4_00 >> 8,in_stack_00000028);
                fcn.0001d2d8(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
                uVar5 = auStackX_20[0];
            }
            uVar8 = 0;
            uVar4 = uVar5;
            if (uVar9 != uVar4) {
                iVar2 = 0;
                do {
                    if (arg2 == 0) {
                        cVar3 = -1;
                    }
                    else {
                        cVar3 = *(uVar6 + iVar2 + arg2);
                    }
                    if (acStack_68[iVar2] != cVar3) {
                        return 0;
                    }
                    uVar8 = uVar8 + 1;
                    iVar2 = iVar2 + 1;
                } while (uVar8 < uVar9 - uVar4);
            }
            uVar6 = uVar7 - uVar4;
        } while (uVar7 - uVar4 < uVar7);
    }
    return 1;
}


/* fcn.0001c5dc @ 0x1c5dc */

void fcn.0001c5dc(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x1e298 + 6) = 0x11;
        fcn.0001c538(1,0);
        if ((*(*0x1e298 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.0001d678 @ 0x1d678 */

int64_t fcn.0001d678(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.00010420(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.00010450();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.00010460(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.0001ce2c @ 0x1ce2c */

ulong fcn.0001ce2c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    uint64_t arg2_01;
    uint32_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    int64_t arg4;
    ushort uVar8;
    ulong unaff_R15;
    uint32_t auStackX_20 [2];
    int64_t iStackY_38;
    
    *0x1e298 = *0xc00fd010 & 0xfffff000;
    uVar5 = arg2;
    if ((arg2 & 0xffffffffU) % *(*0x1f188 + 0x54) == 0) {
        uVar2 = *0x1e290;
        uVar6 = 0;
        if (*0x1e290 == 1) {
            uVar2 = *(*0x1e298 + 0xc4) >> 0x1d & 0xffffff01;
            *0x1e290 = uVar2;
        }
        if (uVar5 != 0) {
            arg4 = *0x1f188;
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar5 - uVar6 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.0001c7a0(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x0001ce74;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.0001c620(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.0001c538(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x1e298 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x1f188 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x1e298 + 6) = uVar8;
                        fcn.0001c538(CONCAT71(iVar4 >> 8,1),0);
                        fcn.0001c5dc();
                        if ((*0x1f210 <= auStackX_20[0]) && (auStackX_20[0] <= *0x1f220)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x1f188 + 0x54);
                                if (arg2_01 == 0) goto code_r0x0001cfe4;
                            }
                            fcn.0001d678((auStackX_20[0] - *0x1f220) + 0xffffffff,arg2_01);
                        }
code_r0x0001cfe4:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.0001c620(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x1e290 = 0;
                    }
                    else {
                        fcn.00016700(10,arg2_00);
                    }
                }
                uVar6 = uVar6 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar5 <= uVar6) break;
                uVar2 = *0x1e290;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x0001ce74:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.0001c5a0 @ 0x1c5a0 */

uchar fcn.0001c5a0(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x1e298 + 8) = arg1;
    }
    *(*0x1e298 + 6) = 0x11;
    fcn.0001c538(1,0);
    return *(*0x1e298 + 0x10);
}


/* fcn.00010420 @ 0x10420 */

uint64_t fcn.00010420(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010450 @ 0x10450 */

void fcn.00010450(void)

{
    return;
}


/* fcn.00010460 @ 0x10460 */

int64_t fcn.00010460(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


