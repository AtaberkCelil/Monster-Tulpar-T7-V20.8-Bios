// decompiled by r2ghidra: 1001_I2cBusDxe.pe32
// functions: 15

/* entry0 @ 0x1044c */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_8 [4];
    
    *0x117e8 = *(arg2 + 0x60);
    *0x117e0 = arg2;
    (**(*0x117e8 + 0x98))(arg1,0x11600,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10300;
    *0x11710 = 0;
    *0x11708 = arg1;
    (**(*0x117e8 + 0x148))(0x11710,0x11660,0x116e8,0x11670,0x116d0,0x11630,0x116b8,0);
    return;
}


/* fcn.0001155c @ 0x1155c */

ulong fcn.0001155c(int64_t arg1,int64_t arg2)

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
code_r0x000115bc:
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
            if (*pcVar2 == *pcVar1) goto code_r0x000115bc;
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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001064c @ 0x1064c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001064c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_50h)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    bool bVar6;
    int64_t var_30h;
    char *pcStack_48;
    uint64_t uStack_40;
    int64_t aiStack_38 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x117e8 + 0x128))(arg2,0x11610,aiStack_38,&uStack_40);
    if (-1 < iVar1) {
        uVar4 = 0;
        if (uStack_40 != 0) {
            iVar5 = 0;
            uVar3 = uStack_40;
code_r0x000106b8:
            if ((*(iVar5 + 0x10 + aiStack_38[0]) & 8) != 0) {
                iVar1 = (**(*0x117e8 + 0x118))
                                  (*(iVar5 + 8 + aiStack_38[0]),0x11640,&pcStack_48,*(arg1 + 0x28),arg2,2);
                if (-1 < iVar1) {
                    do {
                        if ((*pcStack_48 == '\x7f') && (pcStack_48[1] == -1)) goto code_r0x00010783;
                        if (((*pcStack_48 == '\x01') && (pcStack_48[1] == '\x04')) &&
                           ((pcStack_48 == arg3 || (iVar2 = fcn.000102c0(pcStack_48,arg3,0x14), iVar2 == 0)))) {
                            pcStack_48 = pcStack_48 + *(pcStack_48 + 2);
                            if ((*pcStack_48 == '\x01') && (pcStack_48[1] == '\x05')) {
                                if (arg4 == '\0') {
                                    bVar6 = *(pcStack_48 + 4) == 0;
                                }
                                else {
                                    bVar6 = *(pcStack_48 + 4) == var_30h;
                                }
                            }
                            else {
                                if (arg4 == '\0') goto code_r0x00010779;
                                bVar6 = var_30h == 0;
                            }
                            if (bVar6) goto code_r0x00010779;
                        }
                        pcStack_48 = pcStack_48 + *(pcStack_48 + 2);
                    } while( true );
                }
                goto code_r0x00010788;
            }
            goto code_r0x0001078c;
        }
code_r0x0001079c:
        (**(*0x117e8 + 0x48))(aiStack_38[0]);
    }
    return iVar1;
code_r0x00010779:
    iVar1 = -0x7ffffffffffffffd;
code_r0x00010783:
    if (iVar1 < 0) goto code_r0x0001079c;
code_r0x00010788:
    uVar3 = uStack_40;
code_r0x0001078c:
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 0x18;
    if (uVar3 <= uVar4) goto code_r0x0001079c;
    goto code_r0x000106b8;
}


/* fcn.00011274 @ 0x11274 */

ulong fcn.00011274(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x117e8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2)

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


/* fcn.00010e8c @ 0x10e8c */

uint64_t fcn.00010e8c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *arg1_00;
    uint64_t uVar6;
    char *pcVar7;
    uchar uVar8;
    int iStackX_8;
    int64_t *piStackX_18;
    int64_t *piStackX_20;
    int32_t var_48h;
    int64_t var_58h;
    int64_t var_60h;
    uint uVar9;
    
    iStackX_8 = 0;
    uVar8 = 1;
    if (arg3 != 0) {
        uVar6 = *(arg3 + 2);
        if ((*(uVar6 + arg3) == '\x01') && (*(uVar6 + 1 + arg3) == '\x05')) {
            iStackX_8 = *(uVar6 + 4 + arg3);
        }
        else {
            uVar8 = 0;
        }
    }
    piStackX_18 = NULL;
    iVar3 = (***arg1)(*arg1,&piStackX_18);
    do {
        if ((iVar3 < 0) || (piStackX_18 == NULL)) {
            return -(arg3 != 0) & 0x800000000000000e;
        }
        piVar1 = *piStackX_18;
        if ((piVar1 != NULL) && ((*(piStackX_18 + 0x14) != 0 && (piStackX_18[3] != 0)))) {
            if (arg3 == 0) {
                if (piStackX_18[1] == 0) {
                    piStackX_20 = NULL;
                    iVar4 = (***arg1)(*arg1,&piStackX_20);
                    iVar3 = 0;
                    if (-1 < iVar4) {
                        do {
                            iVar4 = iVar3;
                            if (piStackX_20 == NULL) break;
                            if ((**piStackX_18 == **piStackX_20) && ((*piStackX_18)[1] == (*piStackX_20)[1])) {
                                bVar2 = true;
                            }
                            else {
                                bVar2 = false;
                            }
                            iVar4 = iVar3 + 1;
                            if (!bVar2) {
                                iVar4 = iVar3;
                            }
                            iVar5 = (***arg1)(*arg1,&piStackX_20);
                            iVar3 = iVar4;
                        } while (-1 < iVar5);
                        if (iVar4 == 1) {
                            uVar8 = 0;
                        }
                    }
                }
            }
            else if (((*(arg3 + 4) != *piVar1) || (*(arg3 + 0xc) != piVar1[1])) || (iStackX_8 != piStackX_18[1]))
            goto code_r0x000110fe;
            pcVar7 = NULL;
            arg1_00 = fcn.00011274();
            if (arg1_00 != NULL) {
                if (arg1_00 != "I2CD") {
                    pcVar7 = "I2CD";
                    arg1_00 = section..text(arg1_00,0x11730,0x48);
                }
                if (arg1_00 != NULL) {
                    *(arg1_00 + 0x40) = arg1;
                    *(arg1_00 + 0x38) = piStackX_18;
                    *(arg1_00 + 0x18) = *piStackX_18;
                    *(arg1_00 + 0x20) = piStackX_18[1];
                    *(arg1_00 + 0x24) = *(piStackX_18 + 0xc);
                    *(arg1_00 + 0x28) = *(*(arg1 + 8) + 8);
                    iVar3 = fcn.000111c8(arg1_00,CONCAT71(pcVar7 >> 8,uVar8));
                    if (-1 < iVar3) {
                        uVar9 = 0;
                        pcVar7 = arg1_00 + 8;
                        iVar3 = (**(*0x117e8 + 0x148))(pcVar7,0x11620,arg1_00 + 0x10,0x11640,*(arg1_00 + 0x30),0);
                        if (-1 < iVar3) {
                            uVar6 = (**(*0x117e8 + 0x118))
                                              (arg2,0x11610,arg1 + 8,*(arg1 + 0x20),*pcVar7,CONCAT44(uVar9,8));
                            if (-1 < uVar6) {
                                if (arg3 != 0) {
                                    return uVar6;
                                }
                                goto code_r0x000110fe;
                            }
                            (**(*0x117e8 + 0x150))(*pcVar7,0x11640,*(arg1_00 + 0x30),0x11620,arg1_00 + 0x10,0);
                        }
                        fcn.00011194(arg1_00);
                    }
                }
            }
        }
code_r0x000110fe:
        iVar3 = (***arg1)(*arg1,&piStackX_18);
    } while( true );
}


/* fcn.00011194 @ 0x11194 */

void fcn.00011194(int64_t arg1)

{
    if (arg1 != 0) {
        if (*(arg1 + 0x30) != 0) {
            (**(*0x117e8 + 0x48))();
        }
        (**(*0x117e8 + 0x48))(arg1);
    }
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 4992 named .text
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


/* fcn.000111c8 @ 0x111c8 */

ulong fcn.000111c8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (**(arg1 + 0x38) != 0x1171c) {
        section..text(0x1171c,**(arg1 + 0x38),0x10);
    }
    iVar1 = fcn.00011480(*(*(arg1 + 0x40) + 0x18),0x11718);
    *(arg1 + 0x30) = iVar1;
    if (iVar1 == 0) {
code_r0x0001121b:
        uVar2 = 0x8000000000000009;
    }
    else {
        if (arg2 != '\0') {
            *0x116b4 = *(*(arg1 + 0x38) + 8);
            uVar2 = fcn.00011480(*(arg1 + 0x30),0x116b0);
            *(arg1 + 0x30) = uVar2;
            (**(*0x117e8 + 0x48))(iVar1);
            if (*(arg1 + 0x30) == 0) goto code_r0x0001121b;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00011480 @ 0x11480 */

ulong fcn.00011480(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x117b0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00011340(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.000112a4(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00011274(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x117b0) {
                section..text(iVar4,0x117b0,4);
            }
            uVar2 = fcn.00011390(arg1,iVar3);
            (**(*0x117e8 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.000112e4 @ 0x112e4 */

bool fcn.000112e4(uint32_t arg1)

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


/* fcn.00011340 @ 0x11340 */

char * fcn.00011340(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000112e4(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000112a4 @ 0x112a4 */

void fcn.000112a4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011274();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011390 @ 0x11390 */

int64_t fcn.00011390(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x117b0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.000112e4(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.000112e4(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00011340(arg1);
        iVar4 = fcn.00011340(arg2);
        iVar2 = fcn.00011274();
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
    iVar2 = fcn.00011340(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.000112a4(iVar4,iVar2,arg1);
    }
    return iVar3;
}


