// decompiled by r2ghidra: 0915_PartitionDxe.pe32
// functions: 22

/* entry0 @ 0x10364 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x12f20 = *(arg2 + 0x60);
    *0x12e00 = arg1;
    *0x12e08 = arg1;
    *0x12f18 = arg2;
    (**(*0x12f20 + 0x148))(0x12e08,0x12d90,0x12de0,0x12da0,0x12e28,0x12d20,0x12e10,0);
    return;
}


/* fcn.000116d0 @ 0x116d0 */

void fcn.000116d0(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint in_register_00000014;
    char *pcVar4;
    int64_t iVar5;
    
    pcVar4 = CONCAT44(in_register_00000014,arg2);
    while( true ) {
        if ((*pcVar4 == '\x7f') && (pcVar4[1] == -1)) {
            return;
        }
        if ((*pcVar4 == '\x04') && (pcVar4[1] == '\x01')) break;
        pcVar4 = pcVar4 + *(pcVar4 + 2);
    }
    iVar2 = *(pcVar4 + 8);
    iVar5 = iVar2 + -1 + *(pcVar4 + 0x10);
    if (((iVar2 != 0) || (iVar5 != 0)) && (uVar3 = 0, *0x12f10 != 0)) {
        do {
            iVar1 = uVar3 * 0x20;
            if ((((*(iVar1 + 0x12f40) == arg1) && (*(iVar1 + 0x12f58) != '\0')) && (*(iVar1 + 0x12f48) == iVar2)) &&
               (*(iVar1 + 0x12f50) == iVar5)) {
                iVar2 = uVar3 * 0x20;
                *(iVar2 + 0x12f40) = 0;
                *(iVar2 + 0x12f48) = 0;
                *(iVar2 + 0x12f50) = 0;
                *(iVar2 + 0x12f58) = 0;
                return;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *0x12f10);
    }
    return;
}


/* fcn.00012968 @ 0x12968 */

ulong fcn.00012968(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12f20 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010cd4 @ 0x10cd4 */

int64_t fcn.00010cd4(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uchar auStackX_8 [32];
    
    iVar1 = (**(arg1 + 0x10))(arg1,noname_1,0,0,1,auStackX_8);
    if (1 < iVar1 + 0x7ffffffffffffff4U) {
        iVar1 = arg2;
    }
    return iVar1;
}


/* fcn.00010d70 @ 0x10d70 */

int64_t fcn.00010d70(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = fcn.00012968(arg1,0x18);
    if (iVar1 != 0) {
        iVar2 = (**(*0x12f20 + 0x50))(0x200,0x10,0x10d2c,iVar1,iVar1);
        if (-1 < iVar2) {
            *(iVar1 + 0x10) = arg1;
            return iVar1;
        }
        (**(*0x12f20 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00012998 @ 0x12998 */

void fcn.00012998(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012968(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102d0(arg1_00,arg1);
    }
    return;
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t arg2)

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


/* fcn.00010290 @ 0x10290 */

int64_t fcn.00010290(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012ba0 @ 0x12ba0 */

ulong fcn.00012ba0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x12ed8;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00012a60(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.000129c4(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00012968(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.00010290(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x12ed8) {
                fcn.00010290(iVar4,0x12ed8,4);
            }
            uVar2 = fcn.00012ab0(arg1,iVar3);
            (**(*0x12f20 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00012c7c @ 0x12c7c */

ulong fcn.00012c7c(int64_t arg1,int64_t arg2)

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
code_r0x00012cdc:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00012cdc;
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


/* fcn.00011780 @ 0x11780 */

uint64_t fcn.00011780(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uchar uVar7;
    int64_t iVar8;
    int iVar9;
    
    uVar2 = 0xaa55;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x1fe) == -0x55ab) {
        uVar7 = 0;
        iVar8 = 1;
        pcVar3 = CONCAT44(in_register_0000000c,arg1) + 0x1c2;
        do {
            if (*pcVar3 != '\0') {
                uVar2 = 0;
                if (*(pcVar3 + 8) != 0) {
                    uVar7 = 1;
                    uVar6 = (*(pcVar3 + 4) - 1) + *(pcVar3 + 8);
                    uVar2 = uVar6;
                    if (arg2 < uVar2) goto code_r0x000117a4;
                    if (iVar8 < 4) {
                        pcVar4 = pcVar3 + 0x1b;
                        iVar5 = iVar8;
                        do {
                            if (pcVar4[-0xb] != '\0') {
                                uVar2 = 0;
                                iVar9 = CONCAT31(CONCAT21(CONCAT11(*pcVar4,pcVar4[-1]),pcVar4[-2]),pcVar4[-3]);
                                if (iVar9 != 0) {
                                    uVar1 = iVar9 + -1 + *(pcVar4 + -7);
                                    uVar2 = uVar1;
                                    if ((*(pcVar3 + 4) <= uVar1) && (*(pcVar4 + -7) <= uVar6)) goto code_r0x000117a4;
                                }
                            }
                            iVar5 = iVar5 + 1;
                            pcVar4 = pcVar4 + 0x10;
                        } while (iVar5 < 4);
                    }
                }
            }
            pcVar3 = pcVar3 + 0x10;
            iVar8 = iVar8 + 1;
        } while (iVar8 < 5);
        uVar2 = CONCAT71(uVar2 >> 8,uVar7);
    }
    else {
code_r0x000117a4:
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    return uVar2;
}


/* fcn.000115c8 @ 0x115c8 */

ulong fcn.000115c8(int64_t arg1)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    if (0x31 < *0x12f10) {
        if (*0x12f10 != 0) {
            do {
                if (*(uVar2 * 0x20 + 0x12f58) == '\0') break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < *0x12f10);
        }
        if (uVar2 == *0x12f10) {
            return 0;
        }
    }
    uVar3 = 0;
    if (*0x12f10 != 0) {
        do {
            iVar1 = uVar3 * 0x20;
            if ((((*(iVar1 + 0x12f40) == *arg1) && (*(iVar1 + 0x12f58) != '\0')) && (*(arg1 + 8) <= *(iVar1 + 0x12f50)))
               && (*(iVar1 + 0x12f48) <= *(arg1 + 0x10))) {
                return 0;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < *0x12f10);
    }
    return 1;
}


/* fcn.000110c4 @ 0x110c4 */

int64_t fcn.000110c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    ulong *puVar2;
    uint32_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t aiStackX_18 [2];
    uint64_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t in_stack_00000040;
    ulong *in_stack_00000048;
    int64_t in_stack_00000050;
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    ulong *in_stack_00000068;
    uint uVar6;
    ulong *puVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong *puVar11;
    
    aiStackX_18[0] = arg3;
    puVar4 = fcn.00012998(0x1a8);
    if (puVar4 != NULL) {
        puVar1 = puVar4 + 3;
        *puVar4 = 0x74726150;
        puVar4[0x30] = *(in_stack_00000028[1] + 0xc) * in_stack_00000050;
        uVar3 = *(in_stack_00000028[1] + 0xc);
        *(puVar4 + 0x32) = in_stack_00000060;
        puVar4[0x31] = uVar3 * (in_stack_00000058 + 1);
        puVar8 = puVar4 + 0xe;
        puVar4[0x2e] = in_stack_00000028;
        puVar4[0x2f] = in_stack_00000030;
        puVar4[0x2d] = arg4;
        puVar4[0x2c] = aiStackX_18[0];
        *puVar1 = *in_stack_00000028;
        puVar4[4] = puVar8;
        if (puVar8 != in_stack_00000028[1]) {
            fcn.00010290(puVar8,in_stack_00000028[1],0x30);
        }
        puVar4[5] = 0x10ba4;
        puVar4[6] = 0x10bf4;
        puVar4[7] = 0x10c5c;
        puVar4[8] = 0x10cc4;
        if (puVar4[0x2d] != 0) {
            puVar8 = puVar4 + 0x14;
            puVar4[9] = puVar8;
            if (puVar8 != *in_stack_00000030) {
                fcn.00010290(puVar8,*in_stack_00000030,0x30);
            }
            puVar4[10] = 0x10d1c;
            puVar4[0xb] = 0x10ddc;
            puVar4[0xc] = 0x10f0c;
            puVar4[0xd] = 0x1103c;
        }
        *(puVar4 + 0x10) = 0;
        *(puVar4 + 0x76) = 1;
        uVar3 = *(in_stack_00000028[1] + 0xc);
        *(puVar4 + 0x7c) = in_stack_00000060;
        *(puVar4 + 0x16) = 0;
        iVar5 = (((in_stack_00000058 - in_stack_00000050) + 1) * uVar3) / in_stack_00000060 - 1;
        *(puVar4 + 0xa6) = 1;
        puVar4[0x11] = iVar5;
        puVar4[0x17] = iVar5;
        *(puVar4 + 0xac) = in_stack_00000060;
        if (0x20000 < *puVar1) {
            puVar4[0x12] = 0;
            *(puVar4 + 0x13) = 0;
            puVar4[0x18] = 0;
            *(puVar4 + 0x19) = 0;
            if (0x2001e < *puVar1) {
                *(puVar4 + 0x9c) = 0;
                *(puVar4 + 0xcc) = 0;
            }
        }
        iVar5 = fcn.00012ba0(in_stack_00000038,in_stack_00000040);
        puVar4[2] = iVar5;
        if (iVar5 != 0) {
            puVar8 = puVar4 + 0x1a;
            if (puVar8 != in_stack_00000048) {
                fcn.00010290(puVar8,in_stack_00000048,0x90);
            }
            if (in_stack_00000068 == NULL) {
                fcn.000102d0(puVar4 + 0x33,0x10);
            }
            else {
                puVar4[0x33] = *in_stack_00000068;
                puVar4[0x34] = in_stack_00000068[1];
            }
            puVar2 = puVar4 + 1;
            *puVar2 = 0;
            if (puVar4[0x2d] == 0) {
                puVar11 = NULL;
                puVar10 = NULL;
                uVar6 = 0;
                iVar5 = (**(*0x12f20 + 0x148))
                                  (puVar2,0x12d50,puVar4[2],0x12db0,puVar1,0x12d60,puVar8,in_stack_00000068,0,0
                                  );
            }
            else {
                puVar7 = puVar4 + 9;
                puVar9 = 0x12d60;
                uVar6 = 0;
                puVar10 = puVar8;
                puVar11 = in_stack_00000068;
                iVar5 = (**(*0x12f20 + 0x148))(puVar2);
                puVar8 = puVar7;
                in_stack_00000068 = puVar9;
            }
            if (iVar5 < 0) {
                (**(*0x12f20 + 0x48))(puVar4[2]);
                (**(*0x12f20 + 0x48))(puVar4);
                if (iVar5 == -0x7fffffffffffffec) {
                    iVar5 = 0;
                }
            }
            else {
                iVar5 = (**(*0x12f20 + 0x118))
                                  (arg2,0x12d40,aiStackX_18,*(arg1 + 0x28),*puVar2,CONCAT44(uVar6,8),puVar8,
                                   in_stack_00000068,puVar10,puVar11);
            }
            return iVar5;
        }
        (**(*0x12f20 + 0x48))(puVar4);
    }
    return -0x7ffffffffffffff7;
}


/* fcn.0001165c @ 0x1165c */

void fcn.0001165c(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    
    uVar3 = 0;
    if (*0x12f10 != 0) {
        do {
            uVar1 = *0x12f10;
            if (*(uVar3 * 0x20 + 0x12f58) == '\0') goto code_r0x000116a4;
            uVar3 = uVar3 + 1;
        } while (uVar3 < *0x12f10);
    }
    uVar1 = *0x12f10 + 1;
    uVar3 = *0x12f10;
code_r0x000116a4:
    *0x12f10 = uVar1;
    iVar2 = uVar3 * 0x20;
    *(iVar2 + 0x12f40) = *arg1;
    *(iVar2 + 0x12f48) = *(arg1 + 8);
    *(iVar2 + 0x12f50) = *(arg1 + 0x10);
    *(iVar2 + 0x12f58) = 1;
    return;
}


/* fcn.00012280 @ 0x12280 */

ulong fcn.00012280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint uVar2;
    char cVar3;
    int64_t *arg2_00;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t arg1_00;
    uint64_t uStackX_18;
    
    uVar1 = (*(arg1 + 8))[3];
    arg1_00 = uVar1;
    uVar2 = **(arg1 + 8);
    uStackX_18 = arg3;
    arg2_00 = fcn.00012998(arg1_00);
    if (arg2_00 != NULL) {
        iVar4 = (**(arg2 + 8))(arg2,uVar2,uVar1,uVar1,arg2_00);
        iVar5 = *0x12f20;
        if ((-1 < iVar4) && (*arg2_00 == 0x5452415020494645)) {
            uVar6 = *(arg2_00 + 0xc);
            uStackX_18 = uStackX_18 & 0xffffffff00000000;
            if ((uVar6 != 0) && ((arg1_00 == 0 || (uVar6 <= arg1_00)))) {
                iVar4 = arg2_00[2];
                *(arg2_00 + 2) = 0;
                iVar5 = (**(iVar5 + 0x158))(arg2_00,uVar6,&uStackX_18);
                if (-1 < iVar5) {
                    *(arg2_00 + 2) = uStackX_18;
                    if ((((iVar4 == uStackX_18) && (arg2_00[3] == 1)) && (0x7f < *(arg2_00 + 0x54))) &&
                       (*(arg2_00 + 10) <= 0xffffffffffffffff / *(arg2_00 + 0x54))) {
                        if (arg4 != arg2_00) {
                            fcn.00010290(arg4,arg2_00,0x5c);
                        }
                        cVar3 = fcn.000123c8(arg1,arg2,arg4);
                        if (cVar3 != '\0') {
                            (**(*0x12f20 + 0x48))();
                            return 1;
                        }
                    }
                }
            }
        }
        (**(*0x12f20 + 0x48))(arg2_00);
    }
    return 0;
}


/* fcn.00012484 @ 0x12484 */

void fcn.00012484(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uint64_t uVar7;
    uchar *puVar8;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    if (*(iVar3 + 0x50) != 0) {
        puVar6 = arg3 + 2;
        do {
            piVar4 = *(iVar3 + 0x54) * uVar7 + arg2;
            if ((*piVar4 != *0x12f00) || (piVar4[1] != *0x12f08)) {
                uVar1 = piVar4[4];
                uVar2 = piVar4[5];
                if (((uVar2 < uVar1) ||
                    (((uVar1 < *(iVar3 + 0x28) || (*(iVar3 + 0x30) < uVar1)) || (uVar2 < *(iVar3 + 0x28))))) ||
                   (*(iVar3 + 0x30) < uVar2)) {
                    puVar6[-2] = 1;
                }
                else {
                    if ((*(piVar4 + 6) & 2) != 0) {
                        *puVar6 = 1;
                    }
                    uVar5 = uVar7 + 1;
                    if (uVar5 < *(iVar3 + 0x50)) {
                        puVar8 = puVar6 + 2;
                        do {
                            piVar4 = *(iVar3 + 0x54) * uVar5 + arg2;
                            if (((*piVar4 != *0x12f00) || (piVar4[1] != *0x12f08)) &&
                               ((uVar1 <= piVar4[5] && (piVar4[4] <= uVar2)))) {
                                puVar6[-1] = 1;
                                *puVar8 = 1;
                            }
                            uVar5 = uVar5 + 1;
                            puVar8 = puVar8 + 3;
                        } while (uVar5 < *(iVar3 + 0x50));
                    }
                }
            }
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 3;
        } while (uVar7 < *(iVar3 + 0x50));
    }
    return;
}


/* fcn.000123c8 @ 0x123c8 */

uint64_t fcn.000123c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int aiStackX_18 [2];
    
    iVar1 = fcn.00012968(arg1,*(arg3 + 0x50) * *(arg3 + 0x54));
    uVar3 = 0;
    if (iVar1 != 0) {
        iVar2 = (**(arg2 + 8))(arg2,**(arg1 + 8),(*(arg1 + 8))[3] * *(arg3 + 0x48),*(arg3 + 0x50) * *(arg3 + 0x54),
                               iVar1);
        if ((-1 < iVar2) &&
           (iVar2 = (**(*0x12f20 + 0x158))(iVar1,*(arg3 + 0x50) * *(arg3 + 0x54),aiStackX_18), -1 < iVar2)) {
            (**(*0x12f20 + 0x48))(iVar1);
            return CONCAT31(aiStackX_18[0] >> 8,*(arg3 + 0x58) == aiStackX_18[0]);
        }
        uVar3 = (**(*0x12f20 + 0x48))();
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012a04 @ 0x12a04 */

bool fcn.00012a04(uint32_t arg1)

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


/* fcn.00012a60 @ 0x12a60 */

char * fcn.00012a60(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00012a04(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000129c4 @ 0x129c4 */

void fcn.000129c4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012968();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00010290(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00012ab0 @ 0x12ab0 */

int64_t fcn.00012ab0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x12ed8;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00012a04(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00012a04(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00012a60(arg1);
        iVar4 = fcn.00012a60(arg2);
        iVar2 = fcn.00012968();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.00010290(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.00010290(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00012a60(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.000129c4(iVar4,iVar2,arg1);
    }
    return iVar3;
}


