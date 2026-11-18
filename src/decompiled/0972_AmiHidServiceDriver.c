// decompiled by r2ghidra: 0972_AmiHidServiceDriver.pe32
// functions: 19

/* entry0 @ 0x10334 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11b08 = *(arg2 + 0x60);
    *0x119f8 = 0;
    *0x119f0 = arg1;
    *0x11b00 = arg2;
    (**(*0x11b08 + 0x148))(0x119f8,0x119b0,0x119d0,0x119c0,0x11a00,0x11970,0x11a18,0);
    return;
}


/* fcn.00010ef8 @ 0x10ef8 */

void fcn.00010ef8(void)

{
    uint *puVar1;
    
    puVar1 = fcn.00010c70(0xc);
    if (puVar1 != NULL) {
        *puVar1 = 0xc0102;
    }
    return;
}


/* fcn.00010c70 @ 0x10c70 */

void fcn.00010c70(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010c40(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010c40 @ 0x10c40 */

ulong fcn.00010c40(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11b08 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* fcn.00010e1c @ 0x10e1c */

ulong fcn.00010e1c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x11ad0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00010cdc(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00010c9c(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00010c40(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x11ad0) {
                section..text(iVar4,0x11ad0,4);
            }
            uVar2 = fcn.00010d2c(arg1,iVar3);
            (**(*0x11b08 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.0001100c @ 0x1100c */

void fcn.0001100c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    
    iVar2 = 3;
    do {
        if (arg1 != NULL) {
            piVar1 = *arg1;
            piVar3 = **arg1;
            while (piVar1 != arg1) {
                if (piVar1 + -1 != NULL) {
                    if (*(piVar1 + 0x24) != 0) {
                        piVar4 = piVar1 + 5;
                        uVar5 = 0;
                        do {
                            (**(*0x11b08 + 0x48))(*piVar4);
                            piVar4 = piVar4 + 1;
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < *(piVar1 + 0x24));
                    }
                    *(*piVar1 + 8) = piVar1[1];
                    *piVar1[1] = *piVar1;
                    (**(*0x11b08 + 0x48))(piVar1 + -1);
                }
                piVar1 = piVar3;
                piVar3 = *piVar3;
            }
        }
        arg1 = arg1 + 0x10;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
}


/* fcn.00011590 @ 0x11590 */

int64_t fcn.00011590(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uint8_t *puVar1;
    ushort uVar2;
    uint uVar3;
    bool bVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    int64_t iVar11;
    unkbyte7 Var13;
    ulong uVar12;
    int64_t iVar14;
    ushort uStack_c38;
    uint8_t uStack_c36;
    uint8_t uStack_c35;
    uint8_t uStack_c34;
    uint8_t *puStack_c30;
    uint16_t auStack_c28 [146];
    uint32_t auStack_b04 [669];
    uint16_t uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    uint16_t auStack_68 [2];
    uint32_t auStack_64 [15];
    uint32_t uStack_28;
    int64_t iStack_20;
    
    puVar1 = arg1 + noname_1;
    iVar14 = 0;
    uVar12 = 0;
    fcn.000102e0(auStack_c28,0xc10,0);
    iVar7 = 3;
    iVar11 = arg2;
    do {
        *iVar11 = iVar11;
        *(iVar11 + 8) = iVar11;
        iVar11 = iVar11 + 0x10;
        iVar7 = iVar7 + -1;
        iVar8 = iVar14;
        iStack_20 = arg2;
    } while (iVar7 != 0);
code_r0x00011601:
    do {
        if (puVar1 == arg1 || puVar1 - arg1 < 0) {
            return iVar8;
        }
        uStack_c36 = *arg1;
        puVar10 = arg1 + 1;
        Var13 = uVar12 >> 8;
        uStack_c35 = uStack_c36 >> 2 & 3;
        uStack_c34 = uStack_c36 >> 4;
        uVar12 = CONCAT71(Var13,uStack_c34);
        if (uStack_c34 == 0xf) {
            uStack_c38 = 1;
            if (puVar1 - puVar10 < 2) {
                return iVar8;
            }
            uStack_c36 = *puVar10;
            uStack_c34 = *(arg1 + 2);
            uVar12 = CONCAT71(Var13,uStack_c34);
            puStack_c30 = arg1 + 3;
            if (puVar1 - puStack_c30 < uStack_c36) {
                return iVar8;
            }
            puVar10 = puStack_c30 + uStack_c36;
            bVar4 = true;
        }
        else {
            uStack_c36 = uStack_c36 & 3;
            uStack_c38 = 0;
            bVar4 = false;
            if (uStack_c36 != 0) {
                bVar4 = false;
                if (uStack_c36 == 1) {
                    if (puVar1 - puVar10 < 1) {
                        return iVar8;
                    }
                    uVar5 = *puVar10;
                    puVar10 = arg1 + 2;
                    puStack_c30 = CONCAT71(puStack_c30._1_7_,uVar5);
                }
                else if (uStack_c36 == 2) {
                    if (puVar1 - puVar10 < 2) {
                        return iVar8;
                    }
                    uVar2 = *puVar10;
                    puVar10 = arg1 + 3;
                    puStack_c30 = CONCAT62(puStack_c30._2_6_,uVar2);
                }
                else {
                    if (uStack_c36 != 3) {
                        return iVar8;
                    }
                    uStack_c36 = 4;
                    if (puVar1 - puVar10 < 4) {
                        return iVar8;
                    }
                    uVar3 = *puVar10;
                    puVar10 = arg1 + 5;
                    puStack_c30 = CONCAT44(puStack_c30._4_4_,uVar3);
                    bVar4 = false;
                }
            }
        }
        if (puVar10 == NULL) {
            return iVar8;
        }
        if (bVar4) {
            return -0x7ffffffffffffffd;
        }
        arg1 = puVar10;
        if (uStack_c35 == 0) {
            uVar5 = fcn.000110d0(&uStack_c38);
            uVar6 = uVar12 & 0xff;
            if (uVar6 == 8) {
                iVar11 = 0;
code_r0x00011903:
                iVar8 = fcn.000110f4(auStack_c28,iVar11,CONCAT71(uVar12 >> 8,uVar5));
            }
            else {
                if (uVar6 == 9) {
                    iVar11 = 1;
                    goto code_r0x00011903;
                }
                if (uVar6 == 10) {
                    if (uStack_28 == 8) {
                        iVar8 = -0x7ffffffffffffff7;
                    }
                    else {
                        uVar9 = uStack_28;
                        auStack_68[uVar9 * 4] = uVar5;
                        auStack_64[uVar9 * 2] = auStack_c28[0] << 0x10 | auStack_b04[0];
                        uStack_28 = uStack_28 + 1;
code_r0x000118f7:
                        iVar8 = iVar14;
                    }
                }
                else {
                    if (uVar6 == 0xb) {
                        iVar11 = 2;
                        goto code_r0x00011903;
                    }
                    if ((uVar6 == 0xc) && (uStack_28 != 0)) {
                        uStack_28 = uStack_28 - 1;
                        goto code_r0x000118f7;
                    }
                    iVar8 = -0x7ffffffffffffffe;
                }
            }
            uVar12 = 0;
            fcn.000102e0(auStack_b04,0xa9c,0);
        }
        else {
            if (uStack_c35 != 1) {
                if (uStack_c35 == 2) {
                    uVar6 = uVar12 & 0xff;
                    if (uVar6 < 6) {
                        if (uVar6 == 5) {
                            uStack_7c = fcn.000110d0(&uStack_c38);
                        }
                        else if (uVar12 == '\0') {
                            uVar6 = fcn.000110d0(&uStack_c38);
                            auStack_b04[uStack_90] = uVar6;
                            uStack_90 = uStack_90 + 1;
                        }
                        else if (uVar6 == 1) {
                            uStack_8c = fcn.000110d0(&uStack_c38);
                        }
                        else if (uVar6 == 2) {
                            uStack_88 = fcn.000110d0(&uStack_c38);
                        }
                        else if (uVar6 == 3) {
                            uStack_84 = fcn.000110d0(&uStack_c38);
                        }
                        else if (uVar6 == 4) {
                            uStack_80 = fcn.000110d0(&uStack_c38);
                        }
                    }
                    else if (uVar6 == 7) {
                        uStack_78 = fcn.000110d0(&uStack_c38);
                    }
                    else if (uVar6 == 8) {
                        uStack_74 = fcn.000110d0(&uStack_c38);
                    }
                    else if (uVar6 == 9) {
                        uStack_70 = fcn.000110d0(&uStack_c38);
                    }
                    else if (uVar6 == 10) {
                        uStack_6c = fcn.000110d0(&uStack_c38);
                    }
                }
                else if (uStack_c35 != 3) goto code_r0x00011924;
                iVar8 = iVar14;
                goto code_r0x00011601;
            }
            iVar8 = fcn.00011340(auStack_c28,&uStack_c38);
        }
code_r0x00011924:
        if (iVar8 < 0) {
            return iVar8;
        }
    } while( true );
}


/* fcn.0001047c @ 0x1047c */

int64_t fcn.0001047c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    ulong *puVar4;
    ulong uVar5;
    int64_t aiStackX_18 [2];
    uint8_t in_stack_00000028;
    uint uVar6;
    
    uVar1 = *(*arg3 + 0x10);
    uVar2 = *(*arg3 + 0x12);
    *(arg3 + 0x40) = *(arg3 + 0x40) + '\x01';
    if (*(arg3 + 0x40) != '\n') {
        iVar3 = (**(*0x11b08 + 0x118))(arg2,0x11990,aiStackX_18,arg1,arg2,2);
        if ((iVar3 < 0) || (iVar3 = fcn.00010ef8(), iVar3 == 0)) {
            return -0x7ffffffffffffffd;
        }
        *(iVar3 + 4) = CONCAT22(uVar1,uVar2);
        *(iVar3 + 8) = in_stack_00000028;
        arg1_00 = fcn.00010c40();
        if ((arg1_00 != 0) && (puVar4 = fcn.000102c0(arg1_00,0x20), puVar4 != NULL)) {
            puVar4[3] = arg3;
            *(puVar4 + 1) = arg4;
            *(puVar4 + 0xc) = in_stack_00000028;
            uVar5 = fcn.00010e1c(aiStackX_18[0],iVar3);
            uVar6 = 0;
            puVar4[2] = uVar5;
            iVar3 = (**(*0x11b08 + 0x148))(puVar4,0x11980,puVar4,0x11990,uVar5,0);
            if (-1 < iVar3) {
                iVar3 = (**(*0x11b08 + 0x118))(arg2,0x11960,arg3,arg1,*puVar4,CONCAT44(uVar6,8));
                if (iVar3 < 0) {
                    (**(*0x11b08 + 0x150))(*puVar4,0x11980,puVar4,0x11990,puVar4[2],0);
                    if (puVar4[2] != 0) {
                        (**(*0x11b08 + 0x48))();
                        puVar4[2] = 0;
                    }
                    (**(*0x11b08 + 0x48))(puVar4);
                }
                else {
                    (**(*0x11b08 + 0x108))(*puVar4,0,0,1);
                }
                return iVar3;
            }
            (**(*0x11b08 + 0x48))(puVar4);
            return iVar3;
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00010f78 @ 0x10f78 */

ulong fcn.00010f78(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00010fd8:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00010fd8;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 5856 named .text
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


/* fcn.00010f1c @ 0x10f1c */

bool fcn.00010f1c(uint32_t arg1)

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


/* fcn.00010cdc @ 0x10cdc */

char * fcn.00010cdc(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00010f1c(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00010c9c @ 0x10c9c */

void fcn.00010c9c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010c40();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010d2c @ 0x10d2c */

int64_t fcn.00010d2c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x11ad0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00010f1c(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00010f1c(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00010cdc(arg1);
        iVar4 = fcn.00010cdc(arg2);
        iVar2 = fcn.00010c40();
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
    iVar2 = fcn.00010cdc(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00010c9c(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.000110d0 @ 0x110d0 */

uint32_t fcn.000110d0(int64_t arg1)

{
    char cVar1;
    
    cVar1 = *(arg1 + 2);
    if (cVar1 == '\x01') {
        return *(arg1 + 8);
    }
    if (cVar1 != '\x02') {
        if (cVar1 != '\x04') {
            return 0;
        }
        return *(arg1 + 8);
    }
    return *(arg1 + 8);
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


/* fcn.00011340 @ 0x11340 */

ulong fcn.00011340(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uchar uVar3;
    ushort uVar4;
    uint uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int16_t iVar8;
    int iVar9;
    
    uVar1 = *(arg2 + 4);
    if (uVar1 < 7) {
        if (uVar1 == 6) {
            uVar4 = fcn.000110d0(arg2);
            *(arg1 + 0x18) = uVar4;
        }
        else {
            iVar9 = 0;
            if (uVar1 == 0) {
                cVar2 = *(arg2 + 2);
                if (cVar2 == '\x01') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x02') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x04') {
                    iVar9 = *(arg2 + 8);
                }
                *arg1 = iVar9;
            }
            else if (uVar1 == 1) {
                cVar2 = *(arg2 + 2);
                if (cVar2 == '\x01') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x02') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x04') {
                    iVar9 = *(arg2 + 8);
                }
                *(arg1 + 4) = iVar9;
            }
            else if (uVar1 == 2) {
                cVar2 = *(arg2 + 2);
                if (cVar2 == '\x01') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x02') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x04') {
                    iVar9 = *(arg2 + 8);
                }
                *(arg1 + 8) = iVar9;
            }
            else if (uVar1 == 3) {
                cVar2 = *(arg2 + 2);
                if (cVar2 == '\x01') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x02') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x04') {
                    iVar9 = *(arg2 + 8);
                }
                *(arg1 + 0xc) = iVar9;
            }
            else if (uVar1 == 4) {
                cVar2 = *(arg2 + 2);
                if (cVar2 == '\x01') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x02') {
                    iVar9 = *(arg2 + 8);
                }
                else if (cVar2 == '\x04') {
                    iVar9 = *(arg2 + 8);
                }
                *(arg1 + 0x10) = iVar9;
            }
            else if (uVar1 == 5) {
                uVar5 = fcn.000110d0(arg2);
                *(arg1 + 0x14) = uVar5;
            }
        }
    }
    else if (uVar1 == 7) {
        cVar2 = *(arg2 + 2);
        if (cVar2 == '\x01') {
            iVar8 = *(arg2 + 8);
        }
        else if (cVar2 == '\x02') {
            iVar8 = *(arg2 + 8);
        }
        else if (cVar2 == '\x04') {
            iVar8 = *(arg2 + 8);
        }
        else {
            iVar8 = 0;
        }
        *(arg1 + 0x1c) = iVar8;
    }
    else if (uVar1 == 8) {
        uVar3 = fcn.000110d0(arg2);
        *(arg1 + 0x1a) = uVar3;
    }
    else if (uVar1 == 9) {
        uVar4 = fcn.000110d0(arg2);
        *(arg1 + 0x1e) = uVar4;
    }
    else if (uVar1 == 10) {
        if (*(arg1 + 0x120) == 8) {
            return 0x8000000000000009;
        }
        iVar7 = (*(arg1 + 0x120) + 1) * 0x20 + arg1;
        if (iVar7 != arg1) {
            section..text(iVar7,arg1,0x20);
        }
        *(arg1 + 0x120) = *(arg1 + 0x120) + 1;
    }
    else if (uVar1 == 0xb) {
        if (*(arg1 + 0x120) == 0) {
            return 0x8000000000000009;
        }
        uVar6 = *(arg1 + 0x120) - 1;
        *(arg1 + 0x120) = uVar6;
        iVar7 = (uVar6 + 1) * 0x20 + arg1;
        if (arg1 != iVar7) {
            section..text(arg1,iVar7,0x20);
        }
    }
    return 0;
}


/* fcn.000110f4 @ 0x110f4 */

ulong fcn.000110f4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    uint uVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    ulong uVar5;
    int64_t *piVar6;
    uint64_t *puVar7;
    uint32_t uVar8;
    uint in_register_0000000c;
    uint16_t *puVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    int iVar13;
    uint32_t uVar14;
    int64_t iVar15;
    uint16_t uVar16;
    
    puVar9 = CONCAT44(in_register_0000000c,arg1);
    iVar13 = arg2;
    iVar15 = iVar13 * 0x10;
    piVar12 = NULL;
    piVar10 = *(puVar9 + 0x604) + iVar15;
    piVar6 = *piVar10;
    if (piVar6 != piVar10) {
        do {
            piVar4 = piVar6 + -1;
            if (piVar6[3] == puVar9[0xd]) goto code_r0x0001114c;
            piVar6 = *piVar6;
        } while (piVar6 != piVar10);
    }
    piVar4 = piVar12;
code_r0x0001114c:
    if (piVar4 == NULL) {
        arg1_00 = fcn.00010c40(piVar10,0x830);
        piVar4 = NULL;
        if (arg1_00 != 0) {
            piVar4 = fcn.000102c0(arg1_00,0x830);
        }
        if (piVar4 != NULL) {
            *piVar4 = 0x74707268;
            iVar1 = *(puVar9 + 0x5e2);
            *(piVar4 + 3) = iVar1;
            piVar6 = piVar12;
            do {
                if (iVar1 == *(piVar6 * 8 + 0x11a50)) {
                    uVar3 = *(piVar6 * 8 + 0x11a54);
                    goto code_r0x000111c3;
                }
                piVar6 = piVar6 + 1;
            } while (piVar6 < 0x8);
            uVar3 = 3;
code_r0x000111c3:
            *(piVar4 + 0x1c) = uVar3;
            piVar6 = piVar4 + 1;
            *(piVar4 + 4) = puVar9[0xd];
            *(piVar4 + 0x24) = iVar13;
            *(piVar4 + 5) = 0;
            iVar15 = *(puVar9 + 0x604) + iVar15;
            *piVar6 = iVar15;
            puVar2 = *(iVar15 + 8);
            piVar4[2] = puVar2;
            *puVar2 = piVar6;
            *(iVar15 + 8) = piVar6;
            if (piVar4[4] != '\0') {
                *(*(puVar9 + 0x604) + 0x30 + iVar13) = 1;
            }
            goto code_r0x00011206;
        }
code_r0x00011182:
        uVar5 = 0x8000000000000009;
    }
    else {
code_r0x00011206:
        iVar15 = piVar4[5];
        *(piVar4 + 5) = puVar9[0xf] * puVar9[0xe] + iVar15;
        if (*(puVar9 + 0x5d0) == 0) {
            if (puVar9[0x5cc] != 0) {
                uVar11 = puVar9[0x5cc];
                goto code_r0x00011241;
            }
        }
        else {
            uVar11 = (*(puVar9 + 0x5d0) - *(puVar9 + 0x5ce)) + 1;
code_r0x00011241:
            uVar14 = uVar11;
            if (uVar14 != 0) {
                puVar7 = fcn.00010c70(uVar11 * 4 + 0x40);
                if (puVar7 == NULL) goto code_r0x00011182;
                uVar16 = 0;
                *puVar7 = *(piVar4 + 0x2c);
                *(piVar4 + 0x2c) = *(piVar4 + 0x2c) + 1;
                *(puVar7 + 1) = arg3;
                *(puVar7 + 2) = iVar15;
                *(puVar7 + 0xc) = iVar13;
                *(puVar7 + 0x14) = puVar9[0xe];
                *(puVar7 + 0x16) = puVar9[0xf];
                *(puVar7 + 3) = *(puVar9 + 2);
                *(puVar7 + 0x1c) = *(puVar9 + 4);
                *(puVar7 + 4) = *(puVar9 + 6);
                *(puVar7 + 0x24) = *(puVar9 + 8);
                *(puVar7 + 5) = *(puVar9 + 10);
                *(puVar7 + 0x2c) = puVar9[0xc];
                puVar7[7] = puVar7 + 8;
                *(puVar7 + 6) = uVar14;
                if (uVar14 != 0) {
                    do {
                        if (*(puVar9 + 0x5d0) == 0) {
                            if (puVar9[0x5cc] == 0) {
                                uVar8 = 0;
                            }
                            else {
                                uVar8 = *(puVar9 + uVar16 * 2 + 0x92);
                            }
                        }
                        else {
                            uVar8 = piVar12 + *(puVar9 + 0x5ce);
                        }
                        uVar11 = uVar16;
                        uVar16 = uVar16 + 1;
                        *(puVar7[7] + uVar11 * 4) = *puVar9 << 0x10 | uVar8;
                        piVar12 = uVar16;
                    } while (uVar16 < uVar14);
                }
                piVar4[*puVar7 + 6] = puVar7;
            }
        }
        uVar5 = 0;
    }
    return uVar5;
}


