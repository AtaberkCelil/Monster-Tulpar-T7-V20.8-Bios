// decompiled by r2ghidra: 1892_ArpDxe.pe32
// functions: 25

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x12f18 = *(arg2 + 0x60);
    *0x12f20 = *(arg2 + 0x58);
    *0x12f10 = arg2;
    (**(*0x12f18 + 0x140))(0x12d40,0,0x12f28);
    arg2_00 = 0x12ce0;
    (**(*0x12f18 + 0x98))(arg1,0x12ce0,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010560(arg1,arg2_00);
    return;
}


/* fcn.00010560 @ 0x10560 */

ulong fcn.00010560(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    iVar1 = (**(*0x12f20 + 0x48))(L"NetworkStackVar",0x12d50,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x12da0 = arg1;
        *0x12da8 = arg1;
        uVar2 = (**(*0x12f18 + 0x148))(0x12da8,0x12d10,0x12d80,0x12d30,0x12dc8,0x12cf0,0x12db0,0);
    }
    return uVar2;
}


/* fcn.00012960 @ 0x12960 */

void fcn.00012960(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012930(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00012930 @ 0x12930 */

ulong fcn.00012930(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12f18 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.0001061c @ 0x1061c */

int64_t fcn.0001061c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *puStackX_8;
    
    *arg3 = 0x53505241;
    iVar2 = arg3 + 0x300;
    *iVar2 = iVar2;
    *(arg3 + 0x308) = iVar2;
    iVar2 = arg3 + 0x310;
    *iVar2 = iVar2;
    *(arg3 + 0x318) = iVar2;
    iVar2 = arg3 + 800;
    *iVar2 = iVar2;
    *(arg3 + 0x328) = iVar2;
    iVar2 = arg3 + 0x330;
    *iVar2 = iVar2;
    *(arg3 + 0x338) = iVar2;
    *(arg3 + 8) = 0x10b5c;
    *(arg3 + 0x10) = 0x10d18;
    iVar2 = *0x12f18;
    *(arg3 + 0x20) = arg1;
    *(arg3 + 0x28) = arg2;
    iVar2 = (**(iVar2 + 0x118))(arg2,0x12d00,&puStackX_8,arg1,arg2,2);
    if (-1 < iVar2) {
        iVar2 = (**puStackX_8)(puStackX_8,arg3 + 0x18);
        if (-1 < iVar2) {
            piVar1 = arg3 + 0x30;
            iVar2 = (**(*0x12f18 + 0x118))(*(arg3 + 0x18),0x12d60,piVar1,arg1,arg2,0x10);
            if (-1 < iVar2) {
                iVar2 = (***piVar1)(*piVar1,0,arg3 + 0x68);
                if ((iVar2 == -0x7fffffffffffffed) || (-1 < iVar2)) {
                    if (*(arg3 + 0x2f0) == '\x01') {
                        *(arg3 + 0x38) = 0;
                        *(arg3 + 0x3c) = 0;
                        *(arg3 + 0x40) = 0x10806;
                        *(arg3 + 0x44) = 0x10001;
                        *(arg3 + 0x48) = 0;
                        iVar2 = (**(*piVar1 + 8))(*piVar1);
                        if (-1 < iVar2) {
                            iVar2 = (**(*0x12f18 + 0x50))(0x200,0x10,0x112a4,arg3,arg3 + 0x50);
                            if (-1 < iVar2) {
                                iVar2 = (**(*0x12f18 + 0x50))(0x80000200,8,0x11330,arg3,arg3 + 0x340);
                                if (-1 < iVar2) {
                                    iVar2 = (**(*0x12f18 + 0x58))(*(arg3 + 0x340),1,5000000);
                                }
                            }
                        }
                    }
                    else {
                        iVar2 = -0x7ffffffffffffffd;
                    }
                }
            }
        }
    }
    return iVar2;
}


/* fcn.0001080c @ 0x1080c */

void fcn.0001080c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    
    if (*(arg1 + 0x340) != 0) {
        (**(*0x12f18 + 0x58))(*(arg1 + 0x340),0,0);
        (**(*0x12f18 + 0x70))(*(arg1 + 0x340));
    }
    if (*(arg1 + 0x50) != 0) {
        (**(*(arg1 + 0x30) + 0x30))(*(arg1 + 0x30),0);
        (**(*0x12f18 + 0x70))(*(arg1 + 0x50));
    }
    iVar1 = *(arg1 + 0x30);
    if (iVar1 != 0) {
        (**(iVar1 + 8))(iVar1,0);
        (**(*0x12f18 + 0x120))(*(arg1 + 0x18),0x12d60,*(arg1 + 0x20),*(arg1 + 0x28));
    }
    iVar1 = *(arg1 + 0x18);
    if (iVar1 != 0) {
        iVar2 = (**(*0x12f18 + 0x118))(*(arg1 + 0x28),0x12d00,&iStackX_8,*(arg1 + 0x20),*(arg1 + 0x28),2);
        if (-1 < iVar2) {
            (**(iStackX_8 + 8))(iStackX_8,iVar1);
        }
    }
    return;
}


/* fcn.00012b58 @ 0x12b58 */

int64_t fcn.00012b58(int64_t arg1,ulong noname_1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    if (arg1 == 0) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar3 = 0;
code_r0x00012b8b:
        do {
            for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
                if ((puVar4 == NULL) || (arg2 == 0)) {
                    iVar2 = -0x7ffffffffffffffe;
                }
                else {
                    iVar2 = (**(arg2 + 8))(arg2,puVar4[-8]);
                }
                if (iVar2 < 0) {
                    return iVar2;
                }
                for (puVar1 = *arg1; puVar1 != arg1; puVar1 = *puVar1) {
                    if (puVar1 == puVar4) goto code_r0x00012bcf;
                }
                if (puVar1 != puVar4) goto code_r0x00012b8b;
code_r0x00012bcf:
            }
            iVar2 = 0;
            for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
                iVar2 = iVar2 + 1;
            }
            bVar5 = iVar2 != iVar3;
            iVar3 = iVar2;
        } while (bVar5);
        iVar3 = 0;
    }
    return iVar3;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 10848 named .text
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


/* fcn.00011cc4 @ 0x11cc4 */

int64_t fcn.00011cc4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    unkbyte7 Var3;
    
    Var3 = arg2 >> 8;
    iVar2 = *(arg1 + 8);
    iVar1 = fcn.00011be0(iVar2 + 800,arg2,*(arg1 + 0x60),arg3);
    iVar2 = fcn.00011be0(iVar2 + 0x330,CONCAT71(Var3,arg2),*(arg1 + 0x60),arg3);
    return iVar2 + iVar1;
}


/* fcn.00011be0 @ 0x11be0 */

int64_t fcn.00011be0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    char in_stack_00000028;
    
    iVar6 = 0;
    piVar4 = **arg1;
    piVar3 = *arg1;
    do {
        piVar2 = piVar4;
        if (piVar3 == arg1) {
            return iVar6;
        }
        if ((*(piVar3 + 0x14) != 0) || (in_stack_00000028 != '\0')) {
            if (arg2 == '\0') {
                if (arg4 != 0) {
                    uVar1 = *(piVar3 + 0x22);
                    iVar5 = piVar3[5];
code_r0x00011c52:
                    if ((uVar1 == 0) || (arg4 == iVar5)) {
                        iVar5 = 0;
                    }
                    else {
                        iVar5 = fcn.000102e0(arg4,iVar5,uVar1);
                    }
                    if (iVar5 != 0) goto code_r0x00011c92;
                }
            }
            else {
                if (arg3 != piVar3[10]) goto code_r0x00011c92;
                if (arg4 != 0) {
                    uVar1 = *(piVar3 + 0x52);
                    iVar5 = piVar3[0xb];
                    goto code_r0x00011c52;
                }
            }
            *(*piVar3 + 8) = piVar3[1];
            *piVar3[1] = *piVar3;
            (**(*0x12f18 + 0x48))(piVar3);
            iVar6 = iVar6 + 1;
        }
code_r0x00011c92:
        piVar4 = *piVar2;
        piVar3 = piVar2;
    } while( true );
}


/* fcn.00012a20 @ 0x12a20 */

ulong fcn.00012a20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.0001298c(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00012b25:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x00012b1b:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x00012b33:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00012b33;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x00012b1b;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00012b25;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00011584 @ 0x11584 */

void fcn.00011584(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_00000014;
    
    if (((CONCAT44(in_register_00000014,arg2) != 0) && (*(CONCAT44(in_register_00000014,arg2) + 8) != 0)) &&
       (iVar1 = fcn.00011498(arg1 + 800,0,1,arg2), iVar1 != 0)) {
        return;
    }
    if ((arg3 != 0) && (*(arg3 + 8) != 0)) {
        fcn.00011498(arg1 + 800,0,2,0);
    }
    return;
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


/* fcn.00011498 @ 0x11498 */

int64_t * fcn.00011498(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    int16_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint in_R9;
    int16_t *in_stack_00000028;
    
    piVar2 = CONCAT44(in_R9,arg4);
    piVar3 = arg1;
    if (arg2 != 0) {
        piVar3 = arg2;
    }
    piVar3 = *piVar3;
    if (piVar3 != arg1) {
        do {
            if ((arg3 & 1U) == 0) {
code_r0x00011518:
                if ((arg3 & 2U) == 0) {
                    return piVar3;
                }
                if ((*in_stack_00000028 == piVar3[4]) && (uVar1 = *(in_stack_00000028 + 1), uVar1 == *(piVar3 + 0x22)))
                {
                    iVar4 = *(in_stack_00000028 + 4);
                    if (iVar4 == 0) {
                        return piVar3;
                    }
                    if ((uVar1 == 0) || (iVar4 == piVar3[5])) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = fcn.000102e0(iVar4,piVar3[5],uVar1);
                    }
                    if (iVar4 == 0) {
                        return piVar3;
                    }
                }
            }
            else if ((*piVar2 == piVar3[10]) && (uVar1 = *(piVar2 + 1), uVar1 == *(piVar3 + 0x52))) {
                iVar4 = *(piVar2 + 4);
                if (iVar4 != 0) {
                    if ((uVar1 == 0) || (iVar4 == piVar3[0xb])) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = fcn.000102e0(iVar4,piVar3[0xb],uVar1);
                    }
                    if (iVar4 != 0) goto code_r0x00011557;
                }
                goto code_r0x00011518;
            }
code_r0x00011557:
            piVar3 = *piVar3;
        } while (piVar3 != arg1);
    }
    return NULL;
}


/* fcn.00011768 @ 0x11768 */

void fcn.00011768(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    ushort *puVar2;
    int64_t arg2_00;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t aiStack_18 [2];
    
    aiStack_18[0] = arg2;
    piVar5 = aiStack_18;
    aiStack_18[1] = arg3;
    piVar3 = arg1 + 0x28;
    iVar4 = 2;
    do {
        puVar2 = *piVar5;
        if (puVar2 != NULL) {
            *(piVar3 + -1) = *puVar2;
            uVar1 = *(puVar2 + 1);
            *(piVar3 + -6) = uVar1;
            arg2_00 = *(puVar2 + 4);
            if (arg2_00 == 0) {
                if (uVar1 != 0) {
                    fcn.000102c0(*piVar3,uVar1);
                }
            }
            else if ((uVar1 != 0) && (*piVar3 != arg2_00)) {
                section..text(*piVar3,arg2_00,uVar1);
            }
        }
        piVar3 = piVar3 + 6;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000115f4 @ 0x115f4 */

int64_t fcn.000115f4(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    
    iVar2 = fcn.00012930(arg1,0x90);
    if (iVar2 != 0) {
        *iVar2 = iVar2;
        piVar4 = iVar2 + 0x28;
        *(iVar2 + 8) = iVar2;
        iVar5 = 2;
        iVar3 = iVar2 + 0x80;
        *iVar3 = iVar3;
        *(iVar2 + 0x88) = iVar3;
        do {
            *piVar4 = piVar4 + 1;
            piVar4 = piVar4 + 6;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        fcn.000102c0(*(iVar2 + 0x28),0x20);
        if (arg1 == 0) {
            uVar1 = 4000000000;
            *(iVar2 + 0x10) = 2;
            *(iVar2 + 0x14) = 4000000000;
            *(iVar2 + 0x1c) = 50000;
        }
        else {
            *(iVar2 + 0x10) = *(arg1 + 0x74);
            *(iVar2 + 0x1c) = *(arg1 + 0x78);
            *(iVar2 + 0x14) = *(arg1 + 0x70);
            uVar1 = *(arg1 + 0x70);
        }
        *(iVar2 + 0x18) = uVar1;
    }
    return iVar2;
}


/* fcn.00011690 @ 0x11690 */

int64_t fcn.00011690(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = *(arg1 + 0x80);
    iVar3 = 0;
    piVar2 = *piVar1;
    while (piVar1 != arg1 + 0x80) {
        if (((arg2 == 0) || (piVar1[2] == arg2)) && ((arg3 == 0 || (piVar1[3] == arg3)))) {
            if ((*(arg1 + 0x22) != 0) && (piVar1[4] != *(arg1 + 0x28))) {
                section..text(piVar1[4],*(arg1 + 0x28),*(arg1 + 0x22));
            }
            (**(*0x12f18 + 0x68))(piVar1[3]);
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            (**(*0x12f18 + 0x48))(piVar1);
            iVar3 = iVar3 + 1;
        }
        piVar1 = piVar2;
        piVar2 = *piVar2;
    }
    (**(*0x12f28 + 8))(*0x12f28);
    return iVar3;
}


/* fcn.0001196c @ 0x1196c */

void fcn.0001196c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort *arg2_00;
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t arg1_00;
    ushort *puVar6;
    uint16_t uVar7;
    uint64_t arg3_00;
    
    uVar7 = arg3;
    piVar3 = fcn.00012930(arg1,0x18);
    iVar4 = *0x12f18;
    if (piVar3 != NULL) {
        *piVar3 = 0;
        iVar4 = (**(iVar4 + 0x50))(0x200,0x10,0x11314,piVar3,piVar3);
        if ((-1 < iVar4) && (puVar5 = fcn.00012930(), puVar5 != NULL)) {
            iVar1 = *(arg1 + 8);
            iVar2 = *(iVar1 + 0x70) + (*(arg1 + 0x62) + 4 + *(iVar1 + 0x6c)) * 2;
            arg1_00 = fcn.00012930(*(iVar1 + 0x70),iVar2);
            iVar4 = iVar1 + 0x2b0;
            if (uVar7 != 1) {
                iVar4 = *(arg2 + 0x28);
            }
            if ((*(iVar1 + 0x6c) != 0) && (arg1_00 != iVar4)) {
                section..text(arg1_00,iVar4,*(iVar1 + 0x6c));
            }
            arg3_00 = *(iVar1 + 0x6c);
            arg2_00 = iVar1 + 0x290;
            puVar6 = arg3_00 + arg1_00;
            if ((arg3_00 != 0) && (puVar6 != arg2_00)) {
                section..text(puVar6,arg2_00,arg3_00);
            }
            puVar6 = puVar6 + *(iVar1 + 0x6c);
            *puVar6 = 0x608;
            puVar6[1] = *(iVar1 + 0x2f0) << 8;
            puVar6[2] = *(arg1 + 0x60) << 8 | *(arg1 + 0x60) >> 8;
            *(puVar6 + 3) = *(iVar1 + 0x6c);
            *(puVar6 + 7) = *(arg1 + 0x62);
            puVar6[4] = uVar7 << 8 | uVar7 >> 8;
            puVar6 = puVar6 + 5;
            if ((*(iVar1 + 0x6c) != 0) && (puVar6 != arg2_00)) {
                section..text(puVar6,arg2_00,*(iVar1 + 0x6c));
            }
            iVar4 = puVar6 + *(iVar1 + 0x6c);
            if ((*(arg1 + 0x62) != 0) && (iVar4 != *(arg1 + 0x68))) {
                section..text(iVar4,*(arg1 + 0x68),*(arg1 + 0x62));
            }
            iVar4 = iVar4 + *(arg1 + 0x62);
            if ((*(iVar1 + 0x6c) != 0) && (iVar4 != *(arg2 + 0x28))) {
                section..text(iVar4,*(arg2 + 0x28),*(iVar1 + 0x6c));
            }
            iVar4 = iVar4 + *(iVar1 + 0x6c);
            if ((*(arg1 + 0x62) != 0) && (iVar4 != *(arg2 + 0x58))) {
                section..text(iVar4,*(arg2 + 0x58),*(arg1 + 0x62));
            }
            *puVar5 = 0;
            puVar5[1] = 0;
            *(puVar5 + 2) = 0;
            *(puVar5 + 0x14) = iVar2 - *(iVar1 + 0x70);
            *(puVar5 + 3) = *(iVar1 + 0x70);
            *(puVar5 + 0x1a) = 1;
            *(puVar5 + 4) = iVar2;
            puVar5[5] = arg1_00;
            piVar3[1] = -0x7ffffffffffffffa;
            piVar3[2] = puVar5;
            iVar4 = (**(*(iVar1 + 0x30) + 0x20))(*(iVar1 + 0x30),piVar3);
            if (-1 < iVar4) {
                return;
            }
            if (arg1_00 != 0) {
                (**(*0x12f18 + 0x48))(arg1_00);
            }
            (**(*0x12f18 + 0x48))(puVar5);
        }
        if (*piVar3 != 0) {
            (**(*0x12f18 + 0x70))();
        }
        (**(*0x12f18 + 0x48))(piVar3);
    }
    return;
}


/* fcn.00012c78 @ 0x12c78 */

ulong fcn.00012c78(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.00012c10(arg1);
    if (piVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        piVar2[2] = arg2;
        piVar2[3] = arg3;
        *piVar2 = arg1;
        piVar1 = *(arg1 + 8);
        piVar2[1] = piVar1;
        *piVar1 = piVar2;
        *(arg1 + 8) = piVar2;
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000117f0 @ 0x117f0 */

ulong fcn.000117f0(uint32_t arg1,uint32_t arg2)

{
    int16_t *arg1_00;
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint in_register_00000014;
    int16_t *arg2_00;
    int aiStackX_8 [2];
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    arg1_00 = iVar4 + 0x60;
    if (arg2_00 == NULL) {
        if (*(iVar4 + 0x80) != '\0') {
            (**(iVar4 + 0x48))(iVar4 + 0x18,0,0);
            (**(*0x12f18 + 0x48))(*(iVar4 + 0x68));
        }
        *(iVar4 + 0x80) = 0;
    }
    else {
        if (*(iVar4 + 0x80) == '\0') {
            if (*arg2_00 == 0x800) {
                if (aiStackX_8 != *(arg2_00 + 4)) {
                    section..text(aiStackX_8,*(arg2_00 + 4),4);
                }
                if ((aiStackX_8[0] + 1U & 0xfffffffe) == 0) {
                    return 0x8000000000000002;
                }
            }
            if (arg1_00 != arg2_00) {
                section..text(arg1_00,arg2_00,0x20);
            }
            iVar3 = fcn.00012930();
            *(iVar4 + 0x68) = iVar3;
            if (iVar3 == 0) {
                return 0x8000000000000009;
            }
            if ((*(iVar4 + 0x62) != 0) && (iVar3 != *(arg2_00 + 4))) {
                section..text(iVar3,*(arg2_00 + 4),*(iVar4 + 0x62));
            }
            *(iVar4 + 0x80) = 1;
        }
        else {
            if ((*arg1_00 != *arg2_00) || (uVar1 = *(iVar4 + 0x62), uVar1 != *(arg2_00 + 1))) {
                return 0x800000000000000f;
            }
            if ((uVar1 == 0) || (*(iVar4 + 0x68) == *(arg2_00 + 4))) {
                iVar3 = 0;
            }
            else {
                iVar3 = fcn.000102e0(*(iVar4 + 0x68),*(arg2_00 + 4),uVar1);
            }
            if (iVar3 != 0) {
                return 0x800000000000000f;
            }
        }
        iVar2 = *(arg2_00 + 8);
        if (iVar2 == 0) {
            iVar2 = -0x1194d800;
        }
        *(iVar4 + 0x70) = iVar2;
        iVar2 = *(arg2_00 + 10);
        if (iVar2 == 0) {
            iVar2 = 2;
        }
        *(iVar4 + 0x74) = iVar2;
        iVar2 = *(arg2_00 + 0xc);
        if (iVar2 == 0) {
            iVar2 = 50000;
        }
        *(iVar4 + 0x78) = iVar2;
    }
    return 0;
}


/* fcn.00011e10 @ 0x11e10 */

//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

ulong fcn.00011e10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t ***arg1_00;
    uint8_t uVar1;
    int64_t iVar2;
    int64_t ***pppiVar3;
    int64_t ***pppiVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int iVar7;
    int64_t **arg1_01;
    int64_t ****ppppiVar8;
    int iVar9;
    ulong uVar10;
    uint32_t uVar11;
    int64_t ****ppppiVar12;
    int *in_stack_00000028;
    int64_t *in_stack_00000030;
    char in_stack_00000038;
    int64_t var_4fh;
    int64_t ****ppppiStack_98;
    int64_t ****ppppiStack_90;
    int64_t ****ppppiStack_88;
    int64_t ****ppppiStack_80;
    int64_t iStack_78;
    uint16_t uStack_70;
    uchar uStack_6e;
    int64_t iStack_68;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    uint32_t var_31h;
    int16_t var_29h;
    int8_t var_27h;
    int64_t var_21h;
    
    iVar2 = *(arg1 + 8);
    ppppiStack_98 = &ppppiStack_98;
    uVar10 = 0;
    iStack_78 = 0;
    ppppiStack_90 = &ppppiStack_98;
    ppppiStack_88 = &ppppiStack_88;
    ppppiStack_80 = &ppppiStack_88;
    if (arg2 == '\0') {
        uVar11 = 2;
        uStack_70 = *(iVar2 + 0x2f0);
        uStack_6e = *(iVar2 + 0x6c);
    }
    else {
        uStack_70 = *(arg1 + 0x60);
        uVar11 = 1;
        uStack_6e = *(arg1 + 0x62);
    }
    arg1_00 = iVar2 + 800;
    iVar5 = 0;
    iStack_68 = arg3;
    while (iVar5 = fcn.00011498(arg1_00,iVar5,uVar11,&uStack_70), iVar5 != 0) {
        fcn.00012c78(&ppppiStack_98,iVar5,arg1_00);
        if (in_stack_00000038 != '\0') {
            *(iVar5 + 0x18) = *(iVar5 + 0x14);
        }
    }
    iVar5 = 0;
    while (iVar5 = fcn.00011498(iVar2 + 0x330,iVar5,uVar11,&uStack_70), iVar5 != 0) {
        fcn.00012c78(&ppppiStack_98,iVar5,iVar2 + 0x330);
        if (in_stack_00000038 != '\0') {
            *(iVar5 + 0x18) = *(iVar5 + 0x14);
        }
    }
    iVar9 = iStack_78;
    if (iVar9 == 0) {
        uVar10 = 0x800000000000000e;
    }
    else {
        iVar7 = *(arg1 + 0x62) + 0xf;
        uVar11 = *(iVar2 + 0x6c) + iVar7 & 0xfffffffc;
        if (arg4 != 0) {
            *arg4 = uVar11;
        }
        if (in_stack_00000028 != NULL) {
            *in_stack_00000028 = iVar9;
        }
        if (in_stack_00000030 != NULL) {
            puVar6 = fcn.00012930(iVar7,iVar9 * uVar11);
            if (puVar6 == NULL) {
                uVar10 = 0x8000000000000009;
            }
            else {
                *in_stack_00000030 = puVar6;
                if (iStack_78 != 0) {
                    do {
                        ppppiVar8 = ppppiStack_98;
                        (*ppppiStack_98)[1] = ppppiStack_98[1];
                        *ppppiStack_98[1] = *ppppiStack_98;
                        iStack_78 = iStack_78 + -1;
                        *ppppiStack_98 = ppppiStack_88;
                        ppppiVar8[1] = &ppppiStack_88;
                        (*ppppiVar8)[1] = ppppiVar8;
                        ppppiStack_88 = ppppiVar8;
                        pppiVar3 = ppppiVar8[3];
                        pppiVar4 = ppppiVar8[2];
                        *puVar6 = uVar11;
                        *(puVar6 + 1) = pppiVar3 == arg1_00;
                        *(puVar6 + 5) = *(pppiVar4 + 0x14) == 0;
                        *(puVar6 + 6) = *(iVar2 + 0x2f0);
                        *(puVar6 + 2) = *(arg1 + 0x60);
                        *(puVar6 + 10) = *(iVar2 + 0x6c);
                        uVar1 = *(arg1 + 0x62);
                        *(puVar6 + 0xb) = uVar1;
                        if ((uVar1 != 0) && (puVar6 + 3 != pppiVar4[0xb])) {
                            section..text(puVar6 + 3,pppiVar4[0xb],uVar1);
                        }
                        arg1_01 = puVar6 + *(puVar6 + 0xb) + 0xc;
                        if ((*(puVar6 + 10) != 0) && (arg1_01 != pppiVar4[5])) {
                            section..text(arg1_01,pppiVar4[5],*(puVar6 + 10));
                        }
                        puVar6 = puVar6 + uVar11;
                    } while (iStack_78 != 0);
                }
            }
        }
    }
    ppppiVar8 = ppppiStack_98;
    ppppiVar12 = *ppppiStack_98;
    while (ppppiVar8 != &ppppiStack_98) {
        (*ppppiVar8)[1] = ppppiVar8[1];
        *ppppiVar8[1] = *ppppiVar8;
        iStack_78 = iStack_78 + -1;
        (**(*0x12f18 + 0x48))();
        ppppiVar8 = ppppiVar12;
        ppppiVar12 = *ppppiVar12;
    }
    ppppiVar8 = ppppiStack_88;
    ppppiVar12 = *ppppiStack_88;
    while (ppppiVar8 != &ppppiStack_88) {
        (*ppppiVar8)[1] = ppppiVar8[1];
        *ppppiVar8[1] = *ppppiVar8;
        (**(*0x12f18 + 0x48))();
        ppppiVar8 = ppppiVar12;
        ppppiVar12 = *ppppiVar12;
    }
    return uVar10;
}


/* fcn.00011d40 @ 0x11d40 */

int64_t fcn.00011d40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *arg1_00;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    iVar2 = 0;
    piVar4 = *(arg1 + 8) + 0x310;
    arg1_00 = *piVar4;
    piVar3 = *arg1_00;
    do {
        if (arg1_00 == piVar4) {
            return iVar2;
        }
        if (arg2 == 0) {
code_r0x00011da4:
            iVar1 = fcn.00011690(arg1_00,arg1,arg3);
            iVar2 = iVar2 + iVar1;
            if (arg1_00[0x10] == arg1_00 + 0x10) {
                *(*arg1_00 + 8) = arg1_00[1];
                *arg1_00[1] = *arg1_00;
                (**(*0x12f18 + 0x48))(arg1_00);
            }
        }
        else {
            if ((*(arg1_00 + 0x52) == 0) || (arg2 == arg1_00[0xb])) {
                iVar1 = 0;
            }
            else {
                iVar1 = fcn.000102e0(arg2,arg1_00[0xb],*(arg1_00 + 0x52));
            }
            if (iVar1 == 0) goto code_r0x00011da4;
        }
        arg1_00 = piVar3;
        piVar3 = *piVar3;
    } while( true );
}


/* fcn.0001298c @ 0x1298c */

ulong fcn.0001298c(int64_t arg1,int64_t arg2)

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
code_r0x000129ec:
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
            if (*pcVar2 == *pcVar1) goto code_r0x000129ec;
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


/* fcn.00012c10 @ 0x12c10 */

int64_t * fcn.00012c10(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.00012930(arg1,0x20);
            if (piVar2 == NULL) {
                if (uVar3 == 0) {
                    return NULL;
                }
                break;
            }
            arg1 = *piVar1;
            uVar3 = uVar3 + 1;
            *piVar2 = arg1;
            piVar2[1] = piVar1;
            *(arg1 + 8) = piVar2;
            *piVar1 = piVar2;
        } while (uVar3 < 0x40);
    }
    piVar2 = *piVar1;
    if (piVar2 != piVar1) {
        *piVar1 = *piVar2;
        *(*piVar2 + 8) = piVar1;
    }
    return piVar2;
}


