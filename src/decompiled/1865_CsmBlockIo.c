// decompiled by r2ghidra: 1865_CsmBlockIo.pe32
// functions: 22

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103f4(arg1,arg2);
    if (*0x12ba0 == 0) {
        *0x12b98 = *(arg2 + 0x60);
        *0x12ba8 = *(arg2 + 0x58);
        *0x12ba0 = arg2;
    }
    *0x12ab0 = arg1;
    *0x12ab8 = arg1;
    (**(*0x12b98 + 0x148))(0x12ab8,0x12a00,0x12a90,0x12a30,0x12ac0,0x12a10,0,0);
    return;
}


/* fcn.000103f4 @ 0x103f4 */

ulong fcn.000103f4(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x12b88 = *(arg1 + 0x60);
    *0x12b80 = arg1;
    fcn.00012660();
    puVar4 = fcn.00012660();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010448:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102e0();
                fcn.000102d0();
                uVar2 = in(0x1808);
                fcn.000102b0(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102a0();
                }
                fcn.000102b0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102d0();
                }
                else {
                    fcn.000102c0();
                }
code_r0x000104b1:
                uVar7 = 0;
                if (*(*0x12b80 + 0x68) != 0) {
                    piVar8 = *(*0x12b80 + 0x70);
                    do {
                        if ((*0x12a50 == *piVar8) && (*0x12a58 == piVar8[1])) {
                            *0x12bb0 = (*(*0x12b80 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x12b80 + 0x68));
                }
                *0x12bb0 = 0;
                return 0x800000000000000e;
            }
            if ((*0x12ad8 == *(puVar4 + 4)) && (*0x12ae0 == *(puVar4 + 8))) goto code_r0x000104b1;
        }
        else if (uVar1 == 4) goto code_r0x00010448;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00012660 @ 0x12660 */

int64_t fcn.00012660(void)

{
    if (*0x12b90 == 0) {
        fcn.00012600(0x129f0,0x12b90);
    }
    return *0x12b90;
}


/* fcn.00012600 @ 0x12600 */

ulong fcn.00012600(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x12b80;
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


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(void)

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


/* fcn.000102d0 @ 0x102d0 */

void fcn.000102d0(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

uint64_t fcn.000102b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102a2 @ 0x102a2 */

void fcn.000102a2(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00012880 @ 0x12880 */

int64_t fcn.00012880(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000113cc @ 0x113cc */

uint64_t fcn.000113cc(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    *(arg1 + 8) = arg1 + 0x40;
    *arg1 = (-(*(*0x12ba0 + 8) < 0x2001f) & 0xfffffffffffdffe2) + 0x2001f;
    uVar2 = fcn.0001150c(arg1,arg1 + 0x88);
    if (uVar2 != '\0') {
        cVar1 = fcn.000115e0(arg1,arg1 + 0x88);
        if (cVar1 == '\0') {
            *(arg1 + 0x4c) = 0x200;
            uVar2 = *(arg1 + 0xa3) * (*(arg1 + 0xa4) + 1) * (*(arg1 + 0xa2) + 1) + -1;
            *(arg1 + 0x58) = uVar2;
        }
        else {
            *(arg1 + 0x58) = *(arg1 + 0xb8) + -1;
            uVar2 = *(arg1 + 0xc0);
            *(arg1 + 0x4c) = *(arg1 + 0xc0);
            if ((*(arg1 + 0xaa) & 4) != 0) {
                *(arg1 + 0x44) = 1;
            }
        }
        if (*(arg1 + 0x4c) == 0x200) {
            *(arg1 + 0x46) = 0;
            *(arg1 + 0x48) = 0;
            *(arg1 + 0x45) = 1;
            *(arg1 + 0x10) = 0x118c4;
            *(arg1 + 0x28) = 0x118c0;
            if (*(arg1 + 0x8b) == '\0') {
                *(arg1 + 0x18) = 0x11ee8;
                uVar3 = 0x121cc;
            }
            else {
                *(arg1 + 0x18) = 0x1195c;
                uVar3 = 0x11c10;
            }
            *(arg1 + 0x20) = uVar3;
            *(arg1 + 0x46) = 0;
            *(arg1 + 0x48) = 0;
            if (0x2001e < *(*0x12ba0 + 8)) {
                *(arg1 + 0x60) = 0;
                *(arg1 + 0x6c) = *(arg1 + 0x4c);
                *(arg1 + 0x68) = 1;
            }
            return CONCAT71(uVar3 >> 8,1);
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    int iVar3;
    char *pcVar4;
    uint in_register_00000014;
    int64_t iVar5;
    int *piVar6;
    int *piVar7;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int64_t var_3ch;
    uint uStack_3c;
    uint var_30h;
    int8_t var_2ch;
    unkbyte3 Stack_33;
    
    iVar5 = CONCAT44(in_register_00000014,arg2);
    if (((*(iVar5 + 2) == '0') && (0x1a < *(iVar5 + 0x20))) && (piVar7 = iVar5 + 0x48, *piVar7 != 0)) {
        cVar1 = *(iVar5 + 0x53);
        pcVar4 = "ATAPI";
        piVar6 = piVar7;
        do {
            if (*pcVar4 != *piVar6) {
                iVar3 = *pcVar4 - *piVar6;
                goto code_r0x00011168;
            }
            pcVar4 = pcVar4 + 1;
            piVar6 = piVar6 + 1;
        } while (pcVar4 < "");
        iVar3 = 0;
code_r0x00011168:
        if (iVar3 != 0) {
            pcVar4 = 0x12af8;
            piVar6 = piVar7;
            do {
                if (*pcVar4 != *piVar6) {
                    iVar3 = *pcVar4 - *piVar6;
                    goto code_r0x000111a2;
                }
                pcVar4 = pcVar4 + 1;
                piVar6 = piVar6 + 1;
            } while (pcVar4 < 0x12afb);
            iVar3 = 0;
code_r0x000111a2:
            if (iVar3 != 0) {
                if (cVar1 != '\0') {
                    var_40h = 0x80501;
                    var_3ch._1_1_ = 0;
                    var_3ch._2_2_ = 0;
                    var_3ch._0_1_ = cVar1;
                    uVar2 = fcn.00012710(arg1,&var_40h);
                    *arg3 = uVar2;
                }
                pcVar4 = "SCSI";
                piVar6 = piVar7;
                do {
                    if (*pcVar4 != *piVar6) {
                        iVar3 = *pcVar4 - *piVar6;
                        goto code_r0x000111fb;
                    }
                    pcVar4 = pcVar4 + 1;
                    piVar6 = piVar6 + 1;
                } while (pcVar4 < "");
                iVar3 = 0;
code_r0x000111fb:
                if (iVar3 == 0) {
                    var_3ch._2_2_ = *(iVar5 + 0x5a);
                    var_3ch._0_1_ = *(iVar5 + 0x58);
                    var_3ch._1_1_ = *(iVar5 + 0x58) >> 8;
                    var_40h = 0x80203;
                    goto code_r0x00011328;
                }
                pcVar4 = 0x12b04;
                piVar6 = piVar7;
                do {
                    if (*pcVar4 != *piVar6) {
                        iVar3 = *pcVar4 - *piVar6;
                        goto code_r0x0001124d;
                    }
                    pcVar4 = pcVar4 + 1;
                    piVar6 = piVar6 + 1;
                } while (pcVar4 < 0x12b07);
                iVar3 = 0;
code_r0x0001124d:
                if (iVar3 == 0) {
                    var_40h = 0x60503;
                    var_3ch._0_1_ = *(iVar5 + 0x60);
                    goto code_r0x00011328;
                }
                pcVar4 = "1394";
                piVar6 = piVar7;
                do {
                    if (*pcVar4 != *piVar6) {
                        iVar3 = *pcVar4 - *piVar6;
                        goto code_r0x00011295;
                    }
                    pcVar4 = pcVar4 + 1;
                    piVar6 = piVar6 + 1;
                } while (pcVar4 < "");
                iVar3 = 0;
code_r0x00011295:
                if (iVar3 == 0) {
                    var_3ch._4_4_ = *(iVar5 + 0x58);
                    uStack_3c = *(iVar5 + 0x58) >> 0x20;
                    var_40h = 0x100403;
                    goto code_r0x00011328;
                }
                pcVar4 = "FIBRE";
                do {
                    if (*pcVar4 != *piVar7) {
                        iVar3 = *pcVar4 - *piVar7;
                        goto code_r0x000112d9;
                    }
                    pcVar4 = pcVar4 + 1;
                    piVar7 = piVar7 + 1;
                } while (pcVar4 < "");
                iVar3 = 0;
code_r0x000112d9:
                if (iVar3 == 0) {
                    var_3ch._4_4_ = *(iVar5 + 0x58);
                    uStack_3c = *(iVar5 + 0x58) >> 0x20;
                    var_30h = *(iVar5 + 0x60);
                    _var_2ch = *(iVar5 + 0x60) >> 0x20;
                    var_40h = 0x180303;
                    goto code_r0x00011328;
                }
                goto code_r0x00011312;
            }
        }
        var_3ch._1_1_ = *(iVar5 + 0x58);
        var_3ch._2_2_ = *(iVar5 + 0x59);
        var_40h = 0x80103;
        var_3ch._0_1_ = cVar1;
    }
    else {
code_r0x00011312:
        var_40h = 0x150401;
        var_3ch._0_1_ = -0x3b;
        var_3ch._1_1_ = 0xfa;
        var_3ch._2_2_ = 0xcf31;
        var_3ch._4_4_ = 0x11d2c24e;
        uStack_3c = 0xa000f385;
        var_30h = 0x3bc93ec9;
        _var_2ch = CONCAT31(Stack_33,*(iVar5 + 1));
    }
code_r0x00011328:
    uVar2 = fcn.00012710(arg1,&var_40h);
    *arg3 = uVar2;
    return;
}


/* fcn.00012710 @ 0x12710 */

int64_t fcn.00012710(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x12ae8;
        }
        arg1_00 = fcn.000127e8(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.000126bc(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00012690(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.000128e0(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.000128e0(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x12ae8;
    }
    return arg1_00;
}


/* fcn.0001150c @ 0x1150c */

int64_t fcn.0001150c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    unkuint7 Var3;
    int64_t iVar2;
    unkuint7 Var4;
    uchar var_30h;
    int8_t var_2fh;
    char var_2ch;
    int8_t var_28h;
    int8_t var_27h;
    int8_t var_24h;
    int8_t var_23h;
    int8_t var_18h;
    
    var_24h = *(arg2 + 1);
    var_2fh = 8;
    fcn.000124d8(arg1);
    (***(arg1 + 0x80))(*(arg1 + 0x80),0x13,&var_30h);
    uVar1 = fcn.00012578(arg1);
    Var3 = uVar1 >> 8;
    if (((var_18h & 1U) == 0) && (var_2fh == 0)) {
        if (*(arg2 + 0x18) == '\0') {
            *(arg2 + 0x1a) = var_23h & 0x3f;
            *(arg2 + 0x1c) = ((var_23h & 0xc0) << 2 | var_28h & 0xc0) * 4 + var_27h;
            *(arg2 + 0x1b) = var_28h & 0x3f;
        }
        else if (var_2ch == '\x10') {
            *(arg2 + 0x19) = 1;
        }
        else {
            *(arg2 + 0x1a) = var_23h;
            Var4 = 0;
            Var3 = 0;
            *(arg2 + 0x1c) = var_27h;
            *(arg2 + 0x1b) = var_28h;
            if (var_28h == 0) goto code_r0x000115cd;
        }
        iVar2 = CONCAT71(Var3,1);
    }
    else {
        *(arg2 + 8) = var_2fh;
        Var4 = Var3;
code_r0x000115cd:
        iVar2 = Var4 << 8;
    }
    return iVar2;
}


/* fcn.000115e0 @ 0x115e0 */

ulong fcn.000115e0(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    ulong uVar2;
    uchar uStack_38;
    uchar uStack_37;
    int16_t iStack_34;
    uint8_t uStack_30;
    uchar uStack_2c;
    uint8_t uStack_20;
    
    uStack_37 = 0x41;
    iStack_34 = 0x55aa;
    uStack_2c = *(arg2 + 1);
    fcn.000124d8(arg1);
    (***(arg1 + 0x80))(*(arg1 + 0x80),0x13,&uStack_38);
    fcn.00012578(arg1);
    if (((uStack_20 & 1) == 0) && (iStack_34 == -0x55ab)) {
        *(arg2 + 2) = uStack_37;
        *(arg2 + 4) = uStack_30 >> 1 & 1;
        *(arg2 + 6) = uStack_30 & 8;
        *(arg2 + 5) = uStack_30 >> 2 & 1;
        *(arg2 + 3) = uStack_30 & 1;
        uVar1 = fcn.0001168c(arg1,arg2);
        *(arg2 + 7) = uVar1;
        uVar2 = 1;
    }
    else {
        uVar2 = 0;
        *(arg2 + 3) = 0;
        *(arg2 + 5) = 0;
    }
    return uVar2;
}


/* fcn.000124d8 @ 0x124d8 */

void fcn.000124d8(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0xf8) != '\0') {
        uStack_30 = 0;
        (**(*0x12bb0 + 0x38))(0,auStack_48);
        if ((uStack_30 >> 0xd & 1) != 0) {
            (**(*0x12bb0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
        }
        *0x12bb8 = *(*(iVar1 + 0xf8) * 4);
        *(*(iVar1 + 0xf8) * 4) = *(iVar1 + 0xfc);
        if ((uStack_30 >> 0xd & 1) != 0) {
            (**(*0x12bb0 + 0x40))(0,0x1000);
        }
    }
    return;
}


/* fcn.00012578 @ 0x12578 */

void fcn.00012578(uint32_t arg1)

{
    uint in_register_0000000c;
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0xf8) != '\0') {
        uStack_30 = 0;
        (**(*0x12bb0 + 0x38))(0,auStack_48);
        if ((uStack_30 >> 0xd & 1) != 0) {
            (**(*0x12bb0 + 0x40))(0,0x1000,uStack_30 & 0xffffffffffffdfff);
        }
        *(*(CONCAT44(in_register_0000000c,arg1) + 0xf8) * 4) = *0x12bb8;
        if ((uStack_30 >> 0xd & 1) != 0) {
            (**(*0x12bb0 + 0x40))(0,0x1000);
        }
    }
    return;
}


/* fcn.0001168c @ 0x1168c */

//WARNING: Variable defined which should be unmapped: var_16h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.0001168c(int64_t arg1,int64_t arg2)

{
    ushort *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t arg1_00;
    uint8_t auStack_88 [32];
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int8_t var_40h;
    uint32_t var_37h;
    int8_t var_2ch;
    int16_t var_28h;
    int8_t var_20h;
    int16_t var_16h;
    
    var_4ch._0_1_ = *(arg2 + 1);
    auStack_88[0] = 1;
    auStack_88[1] = 9;
    auStack_88[2] = 0x4f;
    auStack_88[3] = 1;
    auStack_88[4] = 0x12;
    auStack_88[5] = 0x4f;
    auStack_88[6] = 0;
    auStack_88[7] = 1;
    puVar1 = *0x12bd0 + 0x20;
    auStack_88[8] = 0;
    auStack_88[9] = 1;
    auStack_88[10] = 0x24;
    auStack_88[0xb] = 0x4f;
    var_48h._0_2_ = *0x12bd0 + 0x20;
    auStack_88[0xc] = 0;
    auStack_88[0xd] = 1;
    auStack_88[0xe] = 0;
    auStack_88[0xf] = 0;
    *puVar1 = 0x4a;
    var_37h._1_2_ = puVar1 >> 4 & 0xf000;
    auStack_88[0x10] = 1;
    auStack_88[0x11] = 0;
    auStack_88[0x12] = 0;
    auStack_88[0x13] = 1;
    auStack_88[0x14] = 0;
    auStack_88[0x15] = 0;
    auStack_88[0x16] = 1;
    auStack_88[0x17] = 0;
    auStack_88[0x18] = 0;
    auStack_88[0x19] = 1;
    auStack_88[0x1a] = 0;
    auStack_88[0x1b] = 1;
    auStack_88[0x1c] = 9;
    auStack_88[0x1d] = 0x27;
    auStack_88[0x1e] = 1;
    auStack_88[0x1f] = 0xf;
    var_60h._0_1_ = 0x4f;
    var_58h._1_1_ = 'H';
    arg1_00 = arg1;
    fcn.000124d8(arg1_00);
    (***(arg1 + 0x80))(*(arg1 + 0x80),0x13,&var_58h);
    if (((var_40h & 1U) != 0) || (var_58h._1_1_ != '\0')) {
        fcn.00012578(arg1_00);
        *(arg2 + 8) = var_58h._1_1_;
        (**(*0x12b98 + 0x168))(arg2 + 0x20,0x4a,0xaf);
        return 0;
    }
    (**(*0x12b98 + 0x168))(arg2 + 0x20,0x4a,0);
    (**(*0x12b98 + 0x160))(arg2 + 0x20,*0x12bd0 + 0x20,0x4a);
    if (*(arg2 + 0x19) == '\0') goto code_r0x00011851;
    var_4ch._0_1_ = *(arg2 + 1);
    var_58h._1_1_ = ' ';
    (***(arg1 + 0x80))(*(arg1 + 0x80),0x13,&var_58h);
    if (((var_40h & 1U) == 0) && (*(arg2 + 0x1a) = 0x100, var_58h != '\n')) {
        if (var_58h - 3U < 0xb) {
            uVar2 = (var_58h + -3) * '\x03';
            *(arg2 + 0x1a) = auStack_88[uVar2];
            *(arg2 + 0x1b) = auStack_88[uVar2 + 1];
            uVar3 = auStack_88[uVar2 + 2];
code_r0x0001181d:
            *(arg2 + 0x1c) = uVar3;
        }
    }
    else {
        if ((*(arg2 + 0x22) & 2) != 0) {
            *(arg2 + 0x1a) = *(arg2 + 0x28) + -1;
            *(arg2 + 0x1b) = *(arg2 + 0x2c);
            uVar3 = *(arg2 + 0x24) - 1;
            goto code_r0x0001181d;
        }
        *(arg2 + 0x1a) = 0x100;
    }
    *(arg2 + 0x30) = *(arg2 + 0x1b) * (*(arg2 + 0x1a) + 1) * (*(arg2 + 0x1c) + 1);
    *(arg2 + 0x38) = 0x200;
code_r0x00011851:
    *(arg2 + 0x10) = (*(arg2 + 0x3a) >> 4 & 0xf000) * 0x10 + *(arg2 + 0x3a);
    fcn.00012578(arg1_00);
    return 1;
}


/* fcn.000127e8 @ 0x127e8 */

int64_t fcn.000127e8(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.000126bc(arg1);
    arg1_01 = fcn.00012690(arg1_00);
    fcn.000128e0(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.000126bc @ 0x126bc */

int64_t fcn.000126bc(int64_t arg1)

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


/* fcn.00012690 @ 0x12690 */

ulong fcn.00012690(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x12b98 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000128e0 @ 0x128e0 */

int64_t fcn.000128e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


