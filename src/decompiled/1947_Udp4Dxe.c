// decompiled by r2ghidra: 1947_Udp4Dxe.pe32
// functions: 66

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x16700 = *(arg2 + 0x60);
    *0x16708 = *(arg2 + 0x58);
    *0x166f8 = arg2;
    (**(*0x16700 + 0x140))(0x16040,0,0x16718);
    arg2_00 = 0x15fa0;
    (**(*0x16700 + 0x98))(arg1,0x15fa0,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010560(arg1,arg2_00);
    return;
}


/* fcn.00010560 @ 0x10560 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010560(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_10;
    char acStackX_18 [8];
    int16_t aiStackX_20 [4];
    uint32_t var_30h;
    int64_t var_bp_38h;
    int16_t aiStack_28 [2];
    uchar uStack_23;
    uchar uStack_22;
    uint16_t uStack_20;
    int64_t var_bp_10h;
    int32_t var_8h;
    
    uStackX_10 = 8;
    iVar1 = (**(*0x16708 + 0x48))(L"NetworkStackVar",0x16050,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        *0x16080 = arg1;
        *0x16088 = arg1;
        iVar1 = (**(*0x16700 + 0x148))(0x16088,0x16000,0x16060,0x16030,0x160a8,0x15fb0,0x16090,0);
        if (-1 < iVar1) {
            (**(*0x16708 + 0x18))(aiStack_28,0);
            (**(*0x16700 + 0xf0))(aiStackX_20);
            *0x16720 = ((CONCAT11(uStack_23,uStack_22) ^ aiStack_28[0] << 7 ^ uStack_20) + aiStackX_20[0] & 0x3ff) +
                       0x400;
        }
    }
    return iVar1;
}


/* fcn.00013dd0 @ 0x13dd0 */

ulong fcn.00013dd0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16700 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011024 @ 0x11024 */

int64_t fcn.00011024(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iStackX_8;
    uchar auStack_68 [3];
    uchar uStack_65;
    int64_t iStack_30;
    ulong uStack_28;
    ulong uStack_20;
    ulong uStack_18;
    
    fcn.000102c0(arg1,0x50);
    *(arg1 + 0x38) = 0;
    uVar2 = *0x16158;
    uVar1 = *0x16150;
    iVar3 = arg1 + 0x28;
    *arg1 = 0x34706455;
    *(arg1 + 0x18) = arg2;
    *(arg1 + 8) = uVar1;
    *(arg1 + 0x10) = uVar2;
    *(arg1 + 0x20) = arg3;
    *iVar3 = iVar3;
    *(arg1 + 0x30) = iVar3;
    iVar3 = fcn.00013e00(0xa0);
    if (iVar3 != 0) {
        iVar4 = iVar3 + 0x60;
        *iVar4 = iVar4;
        *(iVar3 + 0x68) = iVar4;
        iVar4 = iVar3 + 0x10;
        *iVar4 = iVar4;
        *(iVar3 + 0x18) = iVar4;
        iVar4 = *0x16700;
        *(iVar3 + 0x20) = arg3;
        *(iVar3 + 0x28) = arg2;
        *(iVar3 + 0x90) = 4;
        iStackX_8 = 0;
        iVar5 = iVar3;
        iVar4 = (**(iVar4 + 0x50))(0x200,0x10,0x14ddc,iVar3,&iStackX_8);
        if (-1 < iVar4) {
            *(iVar3 + 0x48) = iStackX_8;
            iVar4 = fcn.000142ec(arg3,arg2,iVar3 + 0x30,CONCAT71(iVar5 >> 8,4));
            if (-1 < iVar4) goto code_r0x0001113e;
        }
        if (iStackX_8 != 0) {
            (**(*0x16700 + 0x70))();
        }
        (**(*0x16700 + 0x48))(iVar3);
    }
    iVar3 = 0;
code_r0x0001113e:
    *(arg1 + 0x40) = iVar3;
    if (iVar3 == 0) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        section..text(auStack_68,0x16120,0x1c);
        uStack_28 = 0;
        uStack_20 = 0x11950;
        uStack_18 = 0x1190c;
        uStack_65 = 1;
        iStack_30 = arg1;
        if (*(arg1 + 0x40) == 0) {
            iVar3 = -0x7ffffffffffffffe;
        }
        else {
            iVar3 = fcn.00014df8(*(arg1 + 0x40),auStack_68);
        }
        if (-1 < iVar3) {
            iVar3 = (**(*0x16700 + 0x50))(0x80000200,8,0x1124c,arg1,arg1 + 0x48);
            if ((-1 < iVar3) && (iVar3 = (**(*0x16700 + 0x58))(*(arg1 + 0x48),1,500000), -1 < iVar3)) {
                return 0;
            }
        }
        if (*(arg1 + 0x48) != 0) {
            (**(*0x16700 + 0x70))();
        }
        fcn.00014fa4(*(arg1 + 0x40));
    }
    return iVar3;
}


/* fcn.00014fa4 @ 0x14fa4 */

int64_t fcn.00014fa4(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint in_R9D;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        if (arg1_00[8] != '\0') {
            *(*arg1_00 + 8) = arg1_00[1];
            *arg1_00[1] = *arg1_00;
            iVar2 = (**(arg1_00[7] + 8))(arg1_00[7],0);
            if (iVar2 < 0) {
                return iVar2;
            }
            *(arg1_00 + 8) = 0;
            piVar1 = arg1_00 + 2;
            while (*piVar1 != piVar1) {
                fcn.00015480(arg1_00,*piVar1 + -0x18);
            }
            (**(*0x16700 + 0x70))(arg1_00[9]);
        }
        iVar2 = fcn.00014418(arg1_00[4],arg1_00[5],arg1_00[6],CONCAT31(in_R9D >> 8,arg1_00[0x12]));
        if (-1 < iVar2) {
            (**(*0x16700 + 0x48))(arg1_00);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00010698 @ 0x10698 */

ulong fcn.00010698(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar2 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = *(arg2 + 8);
        if (((uVar1 != 0) && (*(arg2 + 0x10) != 0)) && (uVar1 != 0)) {
            do {
                if (*(arg1 + 0x80) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x000106da. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar3 = (**(*arg2 + 8))(*arg2);
                    return uVar3;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00014274 @ 0x14274 */

ulong fcn.00014274(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x166f0;
    if (*0x166f0 != NULL) {
        iVar2 = 0;
        if (**0x166f0 != 0) {
            piVar3 = *0x166f0;
            do {
                (**(*0x16700 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x16700 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x16700 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.00013e00 @ 0x13e00 */

void fcn.00013e00(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013dd0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
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


/* fcn.000112d0 @ 0x112d0 */

void fcn.000112d0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    *arg2 = 0x49706455;
    iVar2 = arg2 + 0x98;
    iVar1 = arg2 + 8;
    *iVar1 = iVar1;
    iVar3 = arg2 + 0xc0;
    *(arg2 + 0x10) = iVar1;
    iVar1 = arg2 + 0x110;
    *iVar1 = iVar1;
    *(arg2 + 0x118) = iVar1;
    iVar1 = arg2 + 0x120;
    *iVar1 = iVar1;
    *(arg2 + 0x128) = iVar1;
    iVar1 = arg2 + 0xa8;
    *iVar2 = iVar2;
    *(arg2 + 0xa0) = iVar2;
    *iVar1 = iVar1;
    *(arg2 + 0xb0) = iVar1;
    iVar1 = arg2 + 0xd0;
    *(arg2 + 0xb8) = 0;
    *iVar3 = iVar3;
    *(arg2 + 200) = iVar3;
    *iVar1 = iVar1;
    *(arg2 + 0xd8) = iVar1;
    *(arg2 + 0xe0) = 0;
    iVar2 = arg2 + 0xe8;
    *iVar2 = iVar2;
    iVar1 = arg2 + 0xf8;
    *(arg2 + 0xf0) = iVar2;
    *iVar1 = iVar1;
    *(arg2 + 0x100) = iVar1;
    *(arg2 + 0x108) = 0;
    *(arg2 + 0x18) = arg1;
    if (arg2 + 0x20 != 0x160e0) {
        section..text(arg2 + 0x20,0x160e0,0x40);
    }
    *(arg2 + 0x138) = 0;
    *(arg2 + 0x90) = 0;
    *(arg2 + 0x148) = 0;
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 23840 named .text
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


/* fcn.0001513c @ 0x1513c */

int64_t fcn.0001513c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uchar uVar3;
    int64_t arg1_00;
    int64_t iVar4;
    int64_t iVar5;
    ulong in_R9;
    ulong uStackX_10;
    
    arg1_00 = fcn.00013dd0(arg1,0x60);
    if (arg1_00 != 0) {
        piVar1 = arg1_00 + 0x18;
        piVar2 = arg1_00 + 0x28;
        *piVar1 = piVar1;
        *(arg1_00 + 0x20) = piVar1;
        *piVar2 = 0;
        fcn.000102c0(arg1_00,0x10);
        fcn.000102c0(arg1_00 + 0x10,4);
        *(arg1_00 + 0x50) = 1;
        uVar3 = *(arg1 + 0x90);
        *(arg1_00 + 0x58) = uVar3;
        iVar4 = fcn.000142ec(*(arg1 + 0x20),*(arg1 + 0x28),piVar2,CONCAT71(in_R9 >> 8,uVar3));
        if (-1 < iVar4) {
            iVar4 = arg1_00;
            iVar5 = (**(*0x16700 + 0x50))(0x200,0x10,0x14af0,arg1_00,&uStackX_10);
            if (-1 < iVar5) {
                *(arg1_00 + 0x38) = uStackX_10;
                *piVar1 = arg1 + 0x10;
                piVar2 = *(arg1 + 0x18);
                *(arg1_00 + 0x20) = piVar2;
                *piVar2 = piVar1;
                *(arg1 + 0x18) = piVar1;
                return arg1_00;
            }
            fcn.00014418(*(arg1 + 0x20),*(arg1 + 0x28),*piVar2,CONCAT71(iVar4 >> 8,*(arg1_00 + 0x58)));
        }
        (**(*0x16700 + 0x48))(arg1_00);
    }
    return 0;
}


/* fcn.000142ec @ 0x142ec */

int64_t fcn.000142ec(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong in_stack_00000028;
    ulong *apuStack_18 [2];
    
    if (arg4 == '\x04') {
        uVar3 = 0x15fd0;
        uVar4 = 0x15ff0;
    }
    else {
        if (arg4 != '\x06') {
            return -0x7ffffffffffffffd;
        }
        uVar3 = 0x15fe0;
        uVar4 = 0x16020;
    }
    iVar1 = (**(*0x16700 + 0x118))(arg1,uVar3,apuStack_18,arg2,arg1,2);
    if (((-1 < iVar1) && (iVar1 = (**apuStack_18[0])(apuStack_18[0],arg3), -1 < iVar1)) &&
       (iVar1 = (**(*0x16700 + 0x118))(*arg3,uVar4,in_stack_00000028,arg2,arg1,0x10), iVar1 < 0)) {
        uVar4 = *arg3;
        iVar2 = (**(*0x16700 + 0x118))(arg1,uVar3,apuStack_18,arg2,arg1,2);
        if (-1 < iVar2) {
            (*apuStack_18[0][1])(apuStack_18[0],uVar4);
        }
    }
    return iVar1;
}


/* fcn.00014418 @ 0x14418 */

int64_t fcn.00014418(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t aiStack_18 [2];
    
    if (arg4 == '\x04') {
        uVar3 = 0x15fd0;
        uVar2 = 0x15ff0;
    }
    else {
        if (arg4 != '\x06') {
            return -0x7ffffffffffffffd;
        }
        uVar3 = 0x15fe0;
        uVar2 = 0x16020;
    }
    iVar1 = (**(*0x16700 + 0x120))(arg3,uVar2,arg2,arg1);
    if ((-1 < iVar1) && (iVar1 = (**(*0x16700 + 0x118))(arg1,uVar3,aiStack_18,arg2,arg1,2), -1 < iVar1)) {
        iVar1 = (**(aiStack_18[0] + 8))(aiStack_18[0],arg3);
    }
    return iVar1;
}


/* fcn.00015480 @ 0x15480 */

void fcn.00015480(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint in_R9D;
    uint32_t arg4;
    
    if (((arg1 != 0) && (arg2 != 0)) && (*(arg2 + 0x50) = *(arg2 + 0x50) + -1, *(arg2 + 0x50) < 1)) {
        cVar1 = *(arg1 + 0x90);
        *(*(arg2 + 0x18) + 8) = *(arg2 + 0x20);
        **(arg2 + 0x20) = *(arg2 + 0x18);
        iVar2 = *(arg2 + 0x30);
        if (cVar1 == '\x04') {
            (**(iVar2 + 8))(iVar2,0);
            arg4 = CONCAT31(in_R9D >> 8,4);
        }
        else {
            (**(iVar2 + 8))(iVar2,0);
            arg4 = CONCAT31(in_R9D >> 8,6);
        }
        fcn.00014418(*(arg1 + 0x20),*(arg1 + 0x28),*(arg2 + 0x28),arg4);
        (**(*0x16700 + 0x70))(*(arg2 + 0x38));
        (**(*0x16700 + 0x48))(arg2);
    }
    return;
}


/* fcn.00015558 @ 0x15558 */

void fcn.00015558(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = *piVar2;
    piVar4 = **piVar2;
    while (piVar3 != piVar2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        iVar1 = *0x16700;
        piVar2[4] = piVar2[4] + -1;
        (**(iVar1 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    piVar3 = piVar2[2];
    piVar4 = *piVar3;
    while (piVar3 != piVar2 + 2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        (**(*0x16700 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    return;
}


/* fcn.00013f00 @ 0x13f00 */

ulong fcn.00013f00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.00013e6c(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00014005:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x00013ffb:
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
code_r0x00014013:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00014013;
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
                            goto code_r0x00013ffb;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00014005;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.0001301c @ 0x1301c */

void fcn.0001301c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013080(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013080 @ 0x13080 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013080(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
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
    int64_t iStack_98;
    uint64_t uStack_90;
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
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000130db;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x000130db:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00015f7c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00015f50(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x162a4;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x00013465:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x162a4;
                }
                else {
                    pcVar9 = 0x162a8;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00013224:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x000133c7;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x000133de;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x000133c7;
                                }
                                goto code_r0x000133de;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x000133c7:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00013224;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x00013224;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x000133de;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x000133c7;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x000133de:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00013dac(&var_68h_2,0x26,0,0x16238);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00013465;
                                if (uStack_a8 == 0x53) goto code_r0x00013674;
                                if (uStack_a8 == 0x58) goto code_r0x0001376a;
                                if (uStack_a8 == 0x61) goto code_r0x0001367d;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00013209;
                                }
                                if (uStack_a8 != 100) goto code_r0x00013205;
                                goto code_r0x00013781;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x162a4;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x0001397c;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x1633b;
                                    goto code_r0x00013731;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00013731:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x0001397c;
                            }
                            fcn.00013dac(&var_68h_2,0x26,0,0x1629c);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00013674:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x0001367d:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x0001397c;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00013205;
                                    goto code_r0x0001376e;
                                }
                                goto code_r0x00013773;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x0001397c;
                            }
                            fcn.00013dac(&var_68h_2,0x26,0,0x16280);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x0001397c;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001376a:
                    uVar5 = uVar5 | 0x20;
code_r0x0001376e:
                    uVar5 = uVar5 | 0x80;
code_r0x00013773:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00013781:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x000137c3;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x000137c3:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x0001384b:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001384b;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x00013205:
                    pcVar9 = &uStack_a8;
code_r0x00013209:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x0001397c:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001304c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001304c(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001304c(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001304c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.00014038 @ 0x14038 */

ulong fcn.00014038(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    char *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint in_R8;
    int16_t *arg2_00;
    uint32_t *puVar13;
    uint64_t uVar14;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    uVar11 = 0;
    if (arg2_00 == NULL) {
code_r0x00014257:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x00014257;
            if (arg4 == '\0') {
                iVar7 = fcn.00013e6c(arg2,arg1);
                if (iVar7 == 0) {
code_r0x000140b9:
                    uVar12 = uVar11;
                    puVar5 = *0x166f0;
                    if (*0x166f0 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x0001415f:
                            cVar3 = *pcVar9;
                            if (cVar3 != '\0') {
                                uVar10 = uVar11;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    uVar10 = uVar10 + 1;
                                    cVar3 = pcVar9[uVar10];
                                }
                                if (uVar10 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar3 = *arg1;
                                pcVar8 = arg1;
                                pcVar6 = pcVar9;
                                for (uVar14 = uVar10;
                                    (((cVar3 != '\0' && (*pcVar6 != '\0')) && (*pcVar8 == *pcVar6)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    pcVar8 = pcVar8 + 1;
                                    pcVar6 = pcVar6 + 1;
                                    cVar3 = *pcVar8;
                                }
                                arg2 = *pcVar8 - *pcVar6;
                                if (*pcVar8 - *pcVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar9 = pcVar9 + uVar10;
                                cVar3 = *pcVar9;
                                if (cVar3 == '\0') goto code_r0x00014165;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x0001415f;
                            }
code_r0x00014165:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00013dd0();
                    if (puVar5 != NULL) {
                        if (((*0x166f0 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x166f0)) {
                            arg2 = puVar5;
                            section..text(puVar5,*0x166f0,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.00013e2c(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00013e2c(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x166f0 != NULL) {
                                    (**(*0x16700 + 0x48))();
                                }
                                *0x166f0 = puVar5;
                                return 0;
                            }
                            (**(*0x16700 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x16700 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x000140b9;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00010e1c @ 0x10e1c */

int64_t fcn.00010e1c(int64_t arg1)

{
    int64_t iVar1;
    uint64_t arg3;
    uchar auStack_b8 [26];
    uint16_t uStack_9e;
    uchar auStack_88 [136];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        arg3 = 0;
        iVar1 = (**arg1)(arg1,auStack_b8,0,0,0);
        if (iVar1 < 0) {
            if (iVar1 != -0x7fffffffffffffed) {
                return iVar1;
            }
            fcn.0001301c(auStack_88,0x80,0x161f0,arg3);
        }
        else {
            arg3 = uStack_9e;
            fcn.0001301c(auStack_88,0x80,0x161b0,arg3);
        }
        if (*0x166f0 != 0) {
            fcn.00014274();
            *0x166f0 = 0;
        }
        iVar1 = fcn.00014038(0x16160,*0x160b8,auStack_88,CONCAT71(arg3 >> 8,1));
        if (-1 < iVar1) {
            iVar1 = fcn.00014038(0x16164,*0x160a0,auStack_88,0);
        }
    }
    return iVar1;
}


/* fcn.00014df8 @ 0x14df8 */

int64_t fcn.00014df8(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    ulong *puVar4;
    uint16_t uVar5;
    uint in_register_00000014;
    uchar *puVar6;
    
    puVar6 = CONCAT44(in_register_00000014,arg2);
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    if (puVar6 == NULL) {
        return -0x7ffffffffffffffe;
    }
    if (*(puVar4 + 8) != '\0') {
        return -0x7ffffffffffffff1;
    }
    cVar1 = *(puVar4 + 0x12);
    if (cVar1 == '\x04') {
        if (puVar6[0x11] != '\0') {
            return -0x7ffffffffffffffd;
        }
        if (puVar6[5] == '\0') {
            uVar2 = *(puVar6 + 6) >> 0x10;
            uVar5 = *(puVar6 + 6);
            *(puVar4 + 0x94) = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar2 << 8 | uVar2 >> 8);
            uVar2 = *(puVar6 + 10) >> 0x10;
            uVar5 = *(puVar6 + 10);
            *(puVar4 + 0x13) = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar2 << 8 | uVar2 >> 8);
        }
        iVar3 = puVar4[7];
    }
    else {
        iVar3 = puVar4[7];
    }
    iVar3 = (**(iVar3 + 8))(iVar3,puVar6);
    if (-1 < iVar3) {
        if (((cVar1 == '\x04') && (iVar3 = (**(puVar4[7] + 0x18))(puVar4[7],1,0x16710,0x16710,0x16710), iVar3 < 0))
           && (iVar3 != -0x7ffffffffffffff2)) {
            return iVar3;
        }
        puVar4[0x10] = *(puVar6 + 0x48);
        puVar4[0x11] = *(puVar6 + 0x50);
        puVar4[0xe] = *(puVar6 + 0x38);
        puVar4[0xf] = *(puVar6 + 0x40);
        *(puVar4 + 0x41) = *puVar6;
        iVar3 = puVar4[7];
        if (cVar1 == '\x04') {
            iVar3 = (**(iVar3 + 0x28))();
            if (iVar3 < 0) {
                (**(puVar4[7] + 8))(puVar4[7],0);
                return iVar3;
            }
        }
        else {
            iVar3 = (**(iVar3 + 0x30))(iVar3,puVar4 + 9);
            if (iVar3 < 0) {
                (**(puVar4[7] + 8))(puVar4[7],0);
                return iVar3;
            }
        }
        *(puVar4 + 8) = 1;
        *puVar4 = 0x16140;
        puVar4[1] = *0x16148;
        **0x16148 = puVar4;
        *0x16148 = puVar4;
        return iVar3;
    }
    return iVar3;
}


/* fcn.00011c5c @ 0x11c5c */

void fcn.00011c5c(ulong noname_0,int64_t arg1)

{
    *(*arg1 + 8) = *(arg1 + 8);
    **(arg1 + 8) = *arg1;
    fcn.000158ac(*(arg1 + 0x10));
    (**(*0x16700 + 0x70))(*(arg1 + 0x30));
    //WARNING: Could not recover jumptable at 0x00011ca0. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16700 + 0x48))(arg1);
    return;
}


/* fcn.000158ac @ 0x158ac */

void fcn.000158ac(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00015838(*(arg1 + 0x78));
        (**(*0x16700 + 0x48))(arg1);
    }
    return;
}


/* fcn.00015838 @ 0x15838 */

void fcn.00015838(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x16700 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x16700 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x16700 + 0x48))(arg1);
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


/* fcn.000113a0 @ 0x113a0 */

uchar fcn.000113a0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    puVar2 = *CONCAT44(in_register_0000000c,arg1);
    while( true ) {
        if (puVar2 == CONCAT44(in_register_0000000c,arg1)) {
            return 0;
        }
        if ((((*(puVar2 + 0x11) != '\0') && (*(puVar2 + 0x5a) == '\0')) &&
            ((puVar2 + 0x69 == arg2 || (iVar1 = fcn.000102e0(puVar2 + 0x69,arg2,4), iVar1 == 0)))) &&
           (*(puVar2 + 0x72) == arg3)) break;
        puVar2 = *puVar2;
    }
    return 1;
}


/* fcn.0001551c @ 0x1551c */

uint64_t fcn.0001551c(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar1 = arg1 - 1;
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffe) {
        uVar2 = 0;
        do {
            if (arg2 == *(uVar2 * 4 + 0x16620)) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x21);
        if (uVar2 < 0x1f) {
            uVar1 = ~arg2 & arg1;
            uVar2 = uVar1;
            if ((uVar1 == ~arg2) || (uVar1 == 0)) goto code_r0x00015553;
        }
        return CONCAT71(uVar2 >> 8,1);
    }
code_r0x00015553:
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00015e8c @ 0x15e8c */

uint32_t fcn.00015e8c(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    uVar4 = 0;
    uVar2 = 0;
    if (*(arg1 + 0x80) != 0) {
        puVar5 = arg1 + 0xa8;
        uVar3 = *(arg1 + 0x80);
        do {
            if (*puVar5 != 0) {
                uVar1 = fcn.00015e48(*(puVar5 + -4),*puVar5);
                if ((uVar4 & 1) != 0) {
                    uVar1 = uVar1 << 8 | uVar1 >> 8;
                }
                uVar2 = uVar1 + (uVar2 & 0xffff);
                if ((uVar2 & 0xffff0000) != 0) {
                    uVar2 = (uVar2 & 0xffff) + 1;
                }
                uVar4 = uVar4 + *puVar5;
            }
            puVar5 = puVar5 + 10;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return uVar2 & 0xffff;
}


/* fcn.000118ac @ 0x118ac */

ulong fcn.000118ac(uint32_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    uint in_register_00000014;
    int64_t *piVar4;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    for (piVar4 = *piVar3; piVar4 != piVar3; piVar4 = *piVar4) {
        if (piVar4[2] == CONCAT44(in_register_00000014,arg2)) goto code_r0x000118c8;
    }
    piVar4 = NULL;
code_r0x000118c8:
    if (piVar4 == NULL) {
        return 0x800000000000000e;
    }
    *(*piVar4 + 8) = piVar4[1];
    *piVar4[1] = *piVar4;
    piVar1 = piVar3 + 2;
    piVar3[4] = piVar3[4] + -1;
    iVar2 = *piVar1;
    *piVar4 = iVar2;
    piVar4[1] = piVar1;
    *(iVar2 + 8) = piVar4;
    *piVar1 = piVar4;
    return 0;
}


/* fcn.00011f5c @ 0x11f5c */

void fcn.00011f5c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint16_t *arg3_00;
    int64_t iVar3;
    ulong *puVar4;
    uint in_R8;
    int64_t arg1_00;
    uchar auStack_58 [24];
    uchar auStack_40 [4];
    uint16_t uStack_3c;
    uchar auStack_3a [4];
    uint16_t uStack_36;
    uint uStack_34;
    
    arg1_00 = CONCAT44(in_R8,arg3);
    if (*(arg1_00 + 0x84) < 8) {
code_r0x00011f8a:
        fcn.000158ac(arg1_00);
    }
    else {
        arg3_00 = fcn.000158d8(arg3,0,0);
        if (arg3_00[3] != 0) {
            uVar1 = fcn.00015f04(*arg2,*(arg2 + 0x10));
            iVar2 = fcn.0001184c(arg1_00,uVar1);
            if (iVar2 != 0) goto code_r0x00011f8a;
        }
        uStack_3c = *arg3_00 << 8 | *arg3_00 >> 8;
        uStack_36 = arg3_00[1] << 8 | arg3_00[1] >> 8;
        if (auStack_40 != arg2) {
            section..text(auStack_40,arg2,4);
        }
        if (auStack_3a != arg2 + 0x10) {
            section..text(auStack_3a,arg2 + 0x10,4);
        }
        fcn.00015c64(arg1_00,8);
        uStack_34 = *(arg1_00 + 0x84);
        iVar3 = fcn.00011ca4(arg1,arg1_00,auStack_58);
        if (iVar3 == 0) {
            fcn.000120a8(*(arg1 + 0x40),arg2,arg3_00);
        }
        fcn.000158ac(arg1_00);
        if (iVar3 != 0) {
            for (puVar4 = *(arg1 + 0x28); puVar4 != arg1 + 0x28; puVar4 = *puVar4) {
                if (*(puVar4 + 0x11) != '\0') {
                    fcn.00011dcc(puVar4 - 8);
                }
            }
        }
    }
    return;
}


/* fcn.000122a0 @ 0x122a0 */

void fcn.000122a0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    uint16_t *puVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    uint in_R9;
    uchar auStack_18 [4];
    uint16_t uStack_14;
    uchar auStack_12 [4];
    uint16_t uStack_e;
    
    uVar3 = arg2 & 0xff;
    if (7 < *(CONCAT44(in_R9,arg4) + 0x84)) {
        puVar2 = fcn.000158d8(arg4,0,0);
        if (auStack_18 != arg3) {
            section..text(auStack_18,arg3,4);
        }
        if (auStack_12 != arg3 + 0x10) {
            section..text(auStack_12,arg3 + 0x10,4);
        }
        uStack_14 = puVar2[1] << 8 | puVar2[1] >> 8;
        uStack_e = *puVar2 << 8 | *puVar2 >> 8;
        for (puVar5 = *(arg1 + 0x28); puVar5 != arg1 + 0x28; puVar5 = *puVar5) {
            if (*(puVar5 + 0x11) != '\0') {
                cVar1 = fcn.00011ae4(puVar5 - 8,auStack_18);
                if (cVar1 != '\0') {
                    uVar4 = 0x8000000000000016;
                    if (uVar3 < 4) {
                        if (uVar3 == 3) {
                            uVar4 = 0x8000000000000067;
                        }
                        else if (arg2 == 0) {
                            uVar4 = 0x8000000000000064;
                        }
                        else {
                            if (uVar3 == 1) goto code_r0x0001240c;
                            if (uVar3 != 2) goto code_r0x000123c7;
                            uVar4 = 0x8000000000000066;
                        }
                    }
                    else if (uVar3 < 4) {
code_r0x000123c7:
                        uVar4 = 0x8000000000000003;
                    }
                    else if (5 < uVar3) {
                        if (uVar3 < 8) {
code_r0x0001240c:
                            uVar4 = 0x8000000000000065;
                        }
                        else if (9 < uVar3) goto code_r0x000123c7;
                    }
                    if (3 < arg2) {
                        uVar4 = 0x8000000000000016;
                    }
                    puVar5[0x26] = uVar4;
                    fcn.00012420(puVar5 + -8);
                    break;
                }
            }
        }
    }
    fcn.000158ac(CONCAT44(in_R9,arg4));
    return;
}


/* fcn.00011ae4 @ 0x11ae4 */

ulong fcn.00011ae4(uint32_t arg1,uint32_t arg2)

{
    uint32_t *arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint in_register_00000014;
    uint32_t *arg1_01;
    uint32_t auStackX_8 [2];
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar5 + 0x61) == '\0') {
        if ((*(iVar5 + 0x62) == '\0') && (*(iVar3 + 10) != *(iVar5 + 0x7a))) {
            return 0;
        }
        if ((*(iVar5 + 0x80) != 0) && (*(iVar3 + 4) != *(iVar5 + 0x80))) {
            return 0;
        }
        iVar2 = iVar5 + 0x7c;
        if ((((iVar2 != 0x16710) && (iVar1 = fcn.000102e0(iVar2,0x16710,4), iVar1 != 0)) && (iVar2 != iVar3)) &&
           (iVar2 = fcn.000102e0(iVar2,iVar3,4), iVar2 != 0)) {
            return 0;
        }
        arg1_00 = iVar5 + 0x71;
        if (((arg1_00 != 0x16710) && (iVar2 = fcn.000102e0(arg1_00,0x16710,4), iVar2 != 0)) &&
           ((arg1_01 = iVar3 + 6, arg1_01 != arg1_00 && (iVar3 = fcn.000102e0(arg1_01,arg1_00,4), iVar3 != 0)))) {
            if (auStackX_8 != arg1_01) {
                section..text(auStackX_8,arg1_01,4);
            }
            if ((auStackX_8[0] != 0xffffffff) || (*(iVar5 + 0x60) == '\0')) {
                if ((auStackX_8[0] & 0xf0) == 0xe0) {
                    for (puVar4 = *(iVar5 + 0xe8); puVar4 != iVar5 + 0xe8; puVar4 = *puVar4) {
                        if (puVar4[2] == auStackX_8[0]) goto code_r0x00011c37;
                    }
                    puVar4 = NULL;
code_r0x00011c37:
                    if (puVar4 != NULL) {
                        return 1;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}


/* fcn.000157a8 @ 0x157a8 */

int64_t fcn.000157a8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.00015704(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.00013dd0();
        if (iVar3 != 0) {
            iVar1 = *(iVar2 + 0x78);
            *(iVar1 + 0x24) = arg1;
            *(iVar1 + 0x38) = iVar3;
            *(iVar1 + 0x30) = arg1;
            *(iVar2 + 0xa8) = 0;
            *(iVar2 + 0x90) = (arg1 & 0xffffffffU) + iVar3;
            *(iVar2 + 0x88) = iVar3;
            *(iVar2 + 0x98) = iVar3;
            *(iVar2 + 0xa0) = iVar3;
            return iVar2;
        }
        (**(*0x16700 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.00015b24 @ 0x15b24 */

int64_t fcn.00015b24(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_18 [4];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar5 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    iVar4 = arg2;
    if (arg3 == '\0') {
        if (*(iVar3 + 0x84) != 0) {
            fcn.000158d8(arg1,*(iVar3 + 0x84) - 1,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((*(iVar3 + 0x90 + uVar6 * 0x28) - *(iVar3 + 0xa0 + uVar6 * 0x28) < uVar5) &&
               (auStackX_18[0] < *(iVar3 + 0x80) - 1U)) {
                uVar6 = auStackX_18[0] + 1;
            }
        }
        iVar2 = *(iVar3 + 0xa0 + uVar6 * 0x28);
        if (uVar5 <= *(iVar3 + 0x90 + uVar6 * 0x28) - iVar2) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0xa0 + uVar6 * 0x28) = uVar5 + iVar2;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return iVar2;
        }
    }
    else {
        if (*(iVar3 + 0x84) != 0) {
            fcn.000158d8(arg1,0,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((auStackX_18[0] != 0) && (*(iVar3 + 0x98 + uVar6 * 0x28) - *(iVar3 + 0x88 + uVar6 * 0x28) < uVar5)) {
                uVar6 = auStackX_18[0] - 1;
            }
        }
        iVar2 = *(iVar3 + 0x98 + uVar6 * 0x28);
        if (uVar5 <= iVar2 - *(iVar3 + 0x88 + uVar6 * 0x28)) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0x98 + uVar6 * 0x28) = iVar2 - uVar5;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return *(iVar3 + 0x98 + uVar6 * 0x28);
        }
    }
    return 0;
}


/* fcn.00015cd8 @ 0x15cd8 */

uint32_t fcn.00015cd8(int64_t arg1,ulong noname_1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    if ((arg2 == 0) || (uVar3 = *(arg1 + 0x84), uVar3 == 0)) {
        uVar3 = 0;
    }
    else {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if ((*piVar2 != 0) && (*piVar2 != 0)) break;
                uVar3 = uVar5 + 1;
                uVar5 = uVar3;
                piVar2 = piVar2 + 10;
            } while (uVar3 < *(arg1 + 0x80));
        }
        uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
        iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar3 < arg2) {
            if ((uVar3 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,uVar3);
            }
            arg3 = arg3 + uVar3;
            arg2 = arg2 - uVar3;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (arg2 <= uVar4) {
                    uVar3 = uVar3 + arg2;
                    iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((arg2 != 0) && (arg3 != iVar1)) {
                        section..text(arg3,iVar1,arg2);
                    }
                    break;
                }
                iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                arg2 = arg2 - uVar4;
                uVar3 = uVar3 + uVar4;
                if ((uVar4 != 0) && (arg3 != iVar1)) {
                    section..text(arg3,iVar1,uVar4);
                }
                arg3 = arg3 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((arg2 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,arg2);
            }
            uVar3 = arg2;
        }
    }
    return uVar3;
}


/* fcn.00015ab0 @ 0x15ab0 */

ulong fcn.00015ab0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint in_R8;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar5 = 0;
    if (*(iVar1 + 0x80) != 0) {
        do {
            if (*(iVar1 + 0xa8 + uVar5 * 0x28) != 0) {
                if (*CONCAT44(in_R8,arg3) <= uVar3) {
                    return 0x8000000000000005;
                }
                uVar2 = uVar3;
                uVar3 = uVar3 + 1;
                *(arg2 + 8 + uVar2 * 0x10) = *(iVar1 + 0x98 + uVar5 * 0x28);
                *(arg2 + uVar2 * 0x10) = *(iVar1 + 0xa8 + uVar5 * 0x28);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *(iVar1 + 0x80));
    }
    *CONCAT44(in_R8,arg3) = uVar3;
    return 0;
}


/* fcn.000158d8 @ 0x158d8 */

int64_t fcn.000158d8(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 < *(iVar3 + 0x84)) {
        uVar4 = 0;
        if (*(iVar3 + 0x80) != 0) {
            piVar5 = iVar3 + 0xa8;
            uVar6 = 0;
            do {
                iVar1 = *piVar5;
                if (arg2 < iVar1 + uVar6) {
                    if (arg3 != 0) {
                        *arg3 = uVar4;
                    }
                    return (arg2 - uVar6) + *(iVar3 + 0x98 + uVar4 * 0x28);
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                piVar5 = piVar5 + 10;
                uVar6 = iVar1 + uVar6;
            } while (uVar2 < *(iVar3 + 0x80));
        }
    }
    return 0;
}


/* fcn.00015f04 @ 0x15f04 */

void fcn.00015f04(int64_t arg1,int64_t arg2)

{
    uint uStack_18;
    uint uStack_14;
    uchar uStack_f;
    ushort uStack_e;
    
    fcn.000102c0(&uStack_18,0xc);
    uStack_18 = arg1;
    uStack_14 = arg2;
    uStack_f = 0x11;
    uStack_e = 0;
    fcn.00015e48(&uStack_18,0xc);
    return;
}


/* fcn.00015e48 @ 0x15e48 */

uint32_t fcn.00015e48(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    if ((arg2 & 1) != 0) {
        uVar3 = *((arg2 - 1) + arg1);
    }
    if (1 < arg2) {
        uVar2 = (arg2 - 2 >> 1) + 1;
        do {
            uVar1 = *arg1;
            arg1 = arg1 + 2;
            uVar3 = uVar3 + uVar1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    for (; uVar3 >> 0x10 != 0; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
    }
    return uVar3 & 0xffff;
}


/* fcn.0001184c @ 0x1184c */

uint16_t fcn.0001184c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    
    uVar1 = fcn.00015e8c(arg1);
    uVar2 = uVar1 + (arg2 & 0xffff);
    if ((uVar2 & 0xffff0000) != 0) {
        uVar2 = (uVar2 & 0xffff) + 1;
    }
    uVar2 = (*(arg1 + 0x84) << 8 | *(arg1 + 0x84) >> 8) + (uVar2 & 0xffff);
    if ((uVar2 & 0xffff0000) != 0) {
        uVar2 = (uVar2 & 0xffff) + 1;
    }
    return ~uVar2;
}


/* fcn.00015c64 @ 0x15c64 */

int fcn.00015c64(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int iVar7;
    
    uVar3 = *(arg1 + 0x84);
    uVar6 = arg2 & 0xffffffff;
    if (uVar3 == 0) {
        return 0;
    }
    if (uVar3 < arg2) {
        uVar6 = uVar3;
    }
    iVar7 = 0;
    *(arg1 + 0x84) = uVar3 - uVar6;
    uVar4 = 0;
    do {
        uVar3 = *(arg1 + 0xa8 + uVar4 * 0x28);
        if (uVar3 != 0) {
            uVar5 = uVar6;
            if (uVar5 <= uVar3) {
                piVar2 = arg1 + 0x98 + uVar4 * 0x28;
                *piVar2 = *piVar2 + uVar6;
                piVar1 = arg1 + 0xa8 + uVar4 * 0x28;
                *piVar1 = *piVar1 - uVar5;
                return uVar5 + iVar7;
            }
            piVar1 = arg1 + 0xa8 + uVar4 * 0x28;
            *piVar1 = *piVar1 - uVar3;
            uVar6 = uVar5 - uVar3;
            iVar7 = iVar7 + uVar3;
            piVar2 = arg1 + 0x98 + uVar4 * 0x28;
            *piVar2 = *piVar2 + uVar3;
        }
        uVar4 = uVar4 + 1;
    } while( true );
}


/* fcn.00011ca4 @ 0x11ca4 */

int64_t fcn.00011ca4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    char cVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *puVar6;
    
    iVar5 = 0;
    for (puVar6 = *(arg1 + 0x28); puVar6 != arg1 + 0x28; puVar6 = *puVar6) {
        if (*(puVar6 + 0x11) != '\0') {
            cVar2 = fcn.00011ae4(puVar6 - 8,arg3 + 0x18);
            if (cVar2 != '\0') {
                piVar3 = fcn.00013dd0();
                if (piVar3 != NULL) {
                    *piVar3 = piVar3;
                    piVar3[1] = piVar3;
                    if (piVar3 + 4 != arg3) {
                        section..text(piVar3 + 4,arg3,0x40);
                    }
                    iVar4 = (**(*0x16700 + 0x50))(0x200,0x10,fcn.00011c5c,piVar3,piVar3 + 6);
                    if (iVar4 < 0) {
                        (**(*0x16700 + 0x48))(piVar3);
                    }
                    else {
                        piVar3[2] = arg2;
                        *(piVar3 + 3) = *(puVar6 + 0xc);
                        *(arg2 + 8) = *(arg2 + 8) + 1;
                        *piVar3 = puVar6 + 0x21;
                        iVar5 = iVar5 + 1;
                        puVar1 = puVar6[0x22];
                        piVar3[1] = puVar1;
                        *puVar1 = piVar3;
                        puVar6[0x22] = piVar3;
                    }
                }
            }
        }
    }
    return iVar5;
}


/* fcn.000120a8 @ 0x120a8 */

void fcn.000120a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *arg2_00;
    int64_t arg1_00;
    uint32_t uVar1;
    char cVar2;
    ulong *puVar3;
    uint8_t *puVar4;
    uint16_t uVar5;
    ulong *puVar6;
    ulong *arg1_01;
    int64_t iVar7;
    uint64_t arg3_00;
    ulong uStack_38;
    uint uStack_30;
    
    cVar2 = *(arg2 + 0x2c);
    arg2_00 = arg2 + 0x10;
    if (arg2_00 == NULL) {
        arg1_01 = NULL;
code_r0x00012176:
        if (arg1_01 != NULL) {
            puVar4 = *(arg2 + 0x20);
            uVar1 = (*puVar4 & 0xf) * 4 + 0x10;
            iVar7 = fcn.000157a8(uVar1);
            if (iVar7 != 0) {
                puVar6 = fcn.00015b24(iVar7,uVar1,0);
                *puVar6 = 0x303;
                arg3_00 = (*puVar4 & 0xf) << 2;
                if ((arg3_00 != 0) && (puVar6 + 1 != puVar4)) {
                    section..text(puVar6 + 1,puVar4,arg3_00);
                }
                arg1_00 = puVar6 + ((*puVar4 & 0xf) + 2) * 4;
                if (arg1_00 != arg3) {
                    section..text(arg1_00,arg3,8);
                }
                uVar5 = fcn.00015e8c(iVar7);
                *(puVar6 + 2) = ~uVar5;
                uStack_30 = 0xff0001;
                if (&uStack_38 != arg2_00) {
                    section..text(&uStack_38,arg2_00,4);
                }
                fcn.000102c0(&uStack_38 + 4,4);
                if (arg1 != NULL) {
                    fcn.0001506c(arg1,iVar7,arg1_01);
                }
                fcn.000158ac(iVar7);
            }
        }
    }
    else if ((cVar2 - 4U & 0xfd) == 0) {
        for (puVar6 = *0x16140; puVar6 != 0x16140; puVar6 = *puVar6) {
            if (((arg1 == 0) || (arg1 == puVar6)) && (*(puVar6 + 0x12) == cVar2)) {
                for (puVar3 = puVar6[2]; puVar3 != puVar6 + 2; puVar3 = *puVar3) {
                    arg1_01 = puVar3 + -3;
                    if (*(puVar3 + 8) != '\x04') {
                        if (arg1_01 != arg2_00) {
                            iVar7 = 0x10;
                            goto code_r0x00012144;
                        }
code_r0x00012168:
                        arg1 = puVar6;
                        goto code_r0x00012176;
                    }
                    if (arg1_01 == arg2_00) goto code_r0x00012168;
                    iVar7 = 4;
code_r0x00012144:
                    iVar7 = fcn.000102e0(arg1_01,arg2_00,iVar7);
                    if (iVar7 == 0) goto code_r0x00012168;
                }
            }
        }
    }
    return;
}


/* fcn.00011dcc @ 0x11dcc */

void fcn.00011dcc(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *puVar5;
    ulong *puVar6;
    int64_t iVar7;
    int64_t arg3;
    ulong uVar8;
    uint in_register_0000000c;
    int64_t iVar9;
    uint64_t arg2;
    
    iVar9 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = iVar9 + 0x110;
    if ((*piVar1 != piVar1) && (*(iVar9 + 0xe0) != 0)) {
        piVar2 = *piVar1;
        iVar3 = piVar2[2];
        if ((1 < *(iVar3 + 8)) || (1 < *(*(iVar3 + 0x78) + 8))) {
            iVar7 = fcn.000157a8(*(iVar3 + 0x84));
            if (iVar7 == 0) {
                return;
            }
            if (iVar7 + 0x38 != iVar3 + 0x38) {
                section..text(iVar7 + 0x38,iVar3 + 0x38,0x40);
            }
            arg2 = *(iVar3 + 0x84);
            arg3 = fcn.00015b24(iVar7,arg2,0);
            fcn.00015cd8(iVar3,arg2,*(iVar3 + 0x84),arg3);
            fcn.000158ac(piVar2[2]);
            piVar2[2] = iVar7;
        }
        piVar4 = *piVar1;
        if (piVar4 != piVar1) {
            *piVar1 = *piVar4;
            *(*piVar4 + 8) = piVar1;
        }
        piVar4 = *(iVar9 + 0xc0);
        *(*piVar4 + 8) = piVar4[1];
        *piVar4[1] = *piVar4;
        piVar1 = iVar9 + 0xd0;
        *(iVar9 + 0xe0) = *(iVar9 + 0xe0) + -1;
        iVar3 = *piVar1;
        *piVar4 = iVar3;
        piVar4[1] = piVar1;
        *(iVar3 + 8) = piVar4;
        *piVar1 = piVar4;
        puVar5 = piVar4[2];
        *(piVar2 + 9) = *(piVar2[2] + 0x80);
        fcn.00015ab0(piVar2[2],piVar2 + 10,piVar2 + 9);
        iVar3 = *0x16700;
        puVar5[1] = 0;
        puVar5[2] = piVar2 + 4;
        uVar8 = (**(iVar3 + 0x18))(0x10);
        iVar3 = *0x16700;
        *piVar2 = iVar9 + 0x120;
        puVar6 = *(iVar9 + 0x128);
        piVar2[1] = puVar6;
        *puVar6 = piVar2;
        *(iVar9 + 0x128) = piVar2;
        (**(iVar3 + 0x20))(uVar8);
        (**(*0x16700 + 0x68))(*puVar5);
    }
    return;
}


/* fcn.0001506c @ 0x1506c */

int64_t fcn.0001506c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t in_R9;
    int64_t in_stack_00000030;
    
    if ((arg2 == 0) || ((*(arg1 + 0x90) == '\x04' && (in_stack_00000030 == 0)))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (*(arg1 + 0x40) == '\0') {
        iVar1 = -0x7fffffffffffffed;
    }
    else {
        if (arg3 == 0) {
            iVar1 = *(arg1 + 0x38);
        }
        else {
            iVar1 = *(arg3 + 0x30);
        }
        arg1_00 = fcn.00014764(arg1,arg2,iVar1,in_R9);
        if (arg1_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            if (*(arg1 + 0x90) == '\x04') {
                iVar1 = (**(iVar1 + 0x20))();
            }
            else {
                iVar1 = (**(iVar1 + 0x28))(iVar1,arg1_00 + 0x38);
            }
            if (iVar1 < 0) {
                fcn.00014980(arg1_00);
            }
        }
    }
    return iVar1;
}


/* fcn.00012420 @ 0x12420 */

void fcn.00012420(int arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar5 + 0xe0) != 0) && (*(iVar5 + 0x138) < 0)) {
        piVar2 = *(iVar5 + 0xc0);
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        piVar1 = iVar5 + 0xd0;
        *(iVar5 + 0xe0) = *(iVar5 + 0xe0) + -1;
        iVar3 = *piVar1;
        *piVar2 = iVar3;
        piVar2[1] = piVar1;
        *(iVar3 + 8) = piVar2;
        *piVar1 = piVar2;
        puVar4 = piVar2[2];
        if (puVar4 != NULL) {
            puVar4[1] = *(iVar5 + 0x138);
            (**(*0x16700 + 0x68))(*puVar4);
            *(iVar5 + 0x138) = 0;
        }
    }
    return;
}


/* fcn.00011520 @ 0x11520 */

uint64_t fcn.00011520(uint32_t arg1,int64_t arg2)

{
    char *arg1_00;
    char cVar1;
    uint64_t in_RAX;
    unkbyte7 Var4;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar5;
    
    pcVar5 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg2 + 2) == pcVar5[2]) {
        Var4 = in_RAX >> 8;
        in_RAX = CONCAT71(Var4,*pcVar5);
        if ((((*arg2 == *pcVar5) && (*(arg2 + 1) == pcVar5[1])) &&
            (in_RAX = CONCAT71(Var4,pcVar5[3]), *(arg2 + 3) == pcVar5[3])) &&
           ((*(arg2 + 2) != '\0' || (in_RAX = *(pcVar5 + 0x1a), *(arg2 + 0x1a) == *(pcVar5 + 0x1a))))) {
            uVar2 = in_RAX;
            if (*(arg2 + 1) == '\0') {
                cVar1 = *(arg2 + 0x10);
                in_RAX = CONCAT71(in_RAX >> 8,cVar1);
                if (cVar1 != pcVar5[0x10]) goto code_r0x0001160a;
                uVar2 = in_RAX;
                if (cVar1 == '\0') {
                    if (arg2 + 0x11 != pcVar5 + 0x11) {
                        in_RAX = fcn.000102e0(arg2 + 0x11,pcVar5 + 0x11,4);
                        uVar2 = 0;
                        if (in_RAX != 0) goto code_r0x0001160a;
                    }
                    if (arg2 + 0x15 != pcVar5 + 0x15) {
                        in_RAX = fcn.000102e0(arg2 + 0x15,pcVar5 + 0x15,4);
                        uVar2 = 0;
                        if (in_RAX != 0) goto code_r0x0001160a;
                    }
                }
            }
            arg1_00 = arg2 + 0x1c;
            if (arg1_00 != pcVar5 + 0x1c) {
                in_RAX = fcn.000102e0(arg1_00,pcVar5 + 0x1c,4);
                uVar2 = 0;
                if (in_RAX != 0) goto code_r0x0001160a;
            }
            in_RAX = uVar2;
            if (arg1_00 != 0x16710) {
                iVar3 = fcn.000102e0(arg1_00,0x16710,4);
                in_RAX = 0;
                if ((iVar3 != 0) && (in_RAX = *(pcVar5 + 0x20), *(arg2 + 0x20) != *(pcVar5 + 0x20)))
                goto code_r0x0001160a;
            }
            return CONCAT71(in_RAX >> 8,1);
        }
    }
code_r0x0001160a:
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00015254 @ 0x15254 */

int64_t fcn.00015254(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uchar *arg1_00;
    uchar auStack_118 [28];
    uchar auStack_fc [32];
    char cStack_dc;
    int64_t iStack_d0;
    int64_t iStack_c0;
    int64_t iStack_b0;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_80;
    uchar auStack_78 [14];
    uchar auStack_6a [4];
    uchar auStack_66 [78];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (1 < *(arg1_00 + 0x50)) {
        return 0;
    }
    puVar1 = *(arg1_00 + 0x30);
    iVar2 = (*puVar1[1])(puVar1);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (arg2 == 0) {
        fcn.000102c0(arg1_00,0x10);
        fcn.000102c0(arg1_00 + 0x10,4);
        return iVar2;
    }
    if (arg1_00[0x58] == '\x04') {
        if (*(arg2 + 5) != '\0') {
            iVar2 = (**puVar1)(puVar1,auStack_78,0,0);
            if (iVar2 < 0) goto code_r0x0001542e;
            if (arg2 + 6 != auStack_6a) {
                section..text(arg2 + 6,auStack_6a,4);
            }
            if (arg2 + 10 != auStack_66) {
                section..text(arg2 + 10,auStack_66,4);
            }
        }
        if (arg1_00 != arg2 + 6) {
            section..text(arg1_00,arg2 + 6,4);
        }
        if (arg1_00 + 0x10 != arg2 + 10) {
            section..text(arg1_00 + 0x10,arg2 + 10,4);
        }
        iVar2 = (*puVar1[5])(puVar1,arg1_00 + 0x38);
    }
    else {
        iVar2 = (**puVar1)(puVar1,auStack_118,0,0);
        if (iVar2 < 0) goto code_r0x0001542e;
        if (cStack_dc == '\0') {
            return -0x7fffffffffffffef;
        }
        if (arg2 + 0x14 != auStack_fc) {
            section..text(arg2 + 0x14,auStack_fc,0x10);
        }
        if (iStack_d0 != 0) {
            (**(*0x16700 + 0x48))();
        }
        if (iStack_c0 != 0) {
            (**(*0x16700 + 0x48))();
        }
        if (iStack_b0 != 0) {
            (**(*0x16700 + 0x48))();
        }
        if (iStack_a0 != 0) {
            (**(*0x16700 + 0x48))();
        }
        if (iStack_90 != 0) {
            (**(*0x16700 + 0x48))();
        }
        if (iStack_80 != 0) {
            (**(*0x16700 + 0x48))();
        }
        if (arg1_00 != auStack_fc) {
            section..text(arg1_00,auStack_fc,0x10);
        }
        iVar2 = (*puVar1[6])(puVar1,arg1_00 + 0x38);
    }
    if (-1 < iVar2) {
        return iVar2;
    }
code_r0x0001542e:
    (*puVar1[1])(puVar1,0);
    return iVar2;
}


/* fcn.0001141c @ 0x1141c */

ulong fcn.0001141c(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    uint in_register_00000014;
    int64_t iVar3;
    
    uVar1 = *0x16720;
    iVar3 = CONCAT44(in_register_00000014,arg2);
    if (*(iVar3 + 2) == '\0') {
        if (*(iVar3 + 0x1a) == 0) {
            if (*(iVar3 + 3) == '\0') {
                while (cVar2 = fcn.000113a0(arg1,iVar3 + 0x11,*0x16720), cVar2 != '\0') {
                    *0x16720 = *0x16720 + 1;
                    if (*0x16720 == 0) {
                        *0x16720 = 0x400;
                    }
                    if (*0x16720 == uVar1) {
                        return 0x8000000000000009;
                    }
                }
                *(iVar3 + 0x1a) = *0x16720;
            }
            else {
                *(iVar3 + 0x1a) = *0x16720;
            }
            *0x16720 = *0x16720 + 1;
            if (*0x16720 == 0) {
                *0x16720 = 0x400;
            }
        }
        else if ((*(iVar3 + 3) == '\0') && (cVar2 = fcn.000113a0(arg1,iVar3 + 0x11,*(iVar3 + 0x1a)), cVar2 != '\0'))
        {
            return 0x800000000000000f;
        }
    }
    return 0;
}


/* fcn.00015644 @ 0x15644 */

ulong fcn.00015644(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.000155dc(arg1);
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


/* fcn.000156a8 @ 0x156a8 */

int64_t fcn.000156a8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t *piVar4;
    bool bVar5;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = *piVar3;
    if (piVar1 != piVar3) {
        piVar4 = *piVar1;
        do {
            iVar2 = (*arg2)(piVar3,piVar1,arg3);
            if (iVar2 < 0) {
                return iVar2;
            }
            bVar5 = piVar4 != piVar3;
            piVar1 = piVar4;
            piVar4 = *piVar4;
        } while (bVar5);
    }
    return 0;
}


/* fcn.00011624 @ 0x11624 */

uint64_t fcn.00011624(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    uchar *puVar2;
    int *piVar3;
    char cVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint in_register_00000014;
    uint32_t uVar11;
    uchar auStackX_10 [8];
    int aiStackX_18 [2];
    
    uVar10 = 0;
    if (((*CONCAT44(in_register_00000014,arg2) != 0) &&
        (piVar1 = CONCAT44(in_register_00000014,arg2)[2], piVar1 != NULL)) && (*(piVar1 + 0x14) != 0)) {
        piVar8 = piVar1 + 3;
        uVar11 = uVar10;
        do {
            if (piVar8[1] == 0) {
                return 0x8000000000000002;
            }
            if (*piVar8 == 0) {
                return 0x8000000000000002;
            }
            uVar10 = uVar10 + *piVar8;
            uVar11 = uVar11 + 1;
            piVar8 = piVar8 + 2;
        } while (uVar11 < *(piVar1 + 0x14));
        if (uVar10 == *(piVar1 + 2)) {
            puVar2 = piVar1[1];
            if (puVar2 != NULL) {
                if (auStackX_10 != puVar2) {
                    section..text(auStackX_10,puVar2,4);
                }
                if (*(arg1 + 0x70) == '\0') {
                    uVar5 = *(arg1 + 0x75) >> 0x10;
                    uVar6 = *(arg1 + 0x75);
                    if ((CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar5 << 8 | uVar5 >> 8) != 0) &&
                       (cVar4 = fcn.0001551c(CONCAT22(auStackX_10._0_4_ << 8 | auStackX_10._0_4_ >> 8,
                                                      SUB42(auStackX_10._0_4_,2) << 8 |
                                                      SUB42(auStackX_10._0_4_,2) >> 8),
                                             CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar5 << 8 | uVar5 >> 8)), cVar4 == '\0'
                       )) {
                        return 0x8000000000000002;
                    }
                }
            }
            piVar3 = *piVar1;
            if (piVar3 == NULL) {
                arg1 = arg1 + 0x7c;
            }
            else {
                if (aiStackX_18 != piVar3) {
                    section..text(aiStackX_18,piVar3,4);
                }
                if ((aiStackX_18[0] != 0) && (*(arg1 + 0x70) == '\0')) {
                    uVar5 = *(arg1 + 0x75) >> 0x10;
                    uVar6 = *(arg1 + 0x75);
                    if ((CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar5 << 8 | uVar5 >> 8) != 0) &&
                       (uVar7 = aiStackX_18[0] >> 0x10,
                       cVar4 = fcn.0001551c(CONCAT22(aiStackX_18[0] << 8 | aiStackX_18[0] >> 8,uVar7 << 8 | uVar7 >> 8)
                                            ,CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar5 << 8 | uVar5 >> 8)),
                       cVar4 == '\0')) {
                        return 0x8000000000000002;
                    }
                }
                if ((*(piVar3 + 10) == 0) && (*(arg1 + 0x80) == 0)) {
                    return 0x8000000000000002;
                }
                arg1 = piVar3 + 6;
            }
            if ((arg1 != 0x16710) && (iVar9 = fcn.000102e0(arg1,0x16710,4), iVar9 != 0)) {
                return -(0xffe3 < *(piVar1 + 2)) & 0x8000000000000004;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00015934 @ 0x15934 */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.00015934(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t arg1_00;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    int32_t var_1h;
    
    uVar7 = 0;
    uVar10 = arg3;
    uVar8 = arg3 & 0xffffffff;
    uVar9 = arg2 & 0xffffffff;
    uVar6 = 0;
    arg1_00 = arg2 & 0xffffffff;
    uVar3 = uVar7;
    uVar11 = uVar6;
    if (uVar10 != 0) {
        uVar3 = fcn.00013dd0(arg1_00,uVar8);
        if (uVar3 == 0) {
            return 0;
        }
        arg1_00 = arg2 + 1;
        uVar11 = uVar10;
    }
    iVar4 = fcn.00015704(arg1_00,arg1_00);
    if (iVar4 == 0) {
        if (uVar3 != 0) {
            (**(*0x16700 + 0x48))(uVar3);
        }
        return 0;
    }
    iVar1 = *(iVar4 + 0x78);
    *(iVar1 + 0x10) = in_stack_00000028;
    *(iVar1 + 0x18) = in_stack_00000030;
    *(iVar1 + 0x20) = uVar11 != 0;
    if (uVar11 != 0) {
        iVar2 = *(iVar4 + 0x78);
        *(iVar2 + 0x30) = uVar10;
        *(iVar2 + 0x38) = uVar3;
        *(iVar4 + 0x90) = uVar8 + uVar3;
        *(iVar4 + 0xa0) = uVar8 + uVar3;
        *(iVar4 + 0x88) = uVar3;
        *(iVar4 + 0x98) = uVar3;
        *(iVar4 + 0xa8) = uVar10;
        *(iVar4 + 0x98) = *(iVar4 + 0x98) + uVar8;
        *(iVar4 + 0xa8) = 0;
    }
    if (arg2 != 0) {
        uVar3 = uVar11 != 0;
        do {
            uVar11 = *arg1;
            iVar2 = *(arg1 + 8);
            puVar5 = (uVar3 + 3) * 0x10 + *(iVar4 + 0x78);
            *puVar5 = uVar11;
            *(puVar5 + 2) = iVar2;
            *(iVar4 + 0x90 + uVar3 * 0x28) = iVar2 + uVar11;
            *(iVar4 + 0xa0 + uVar3 * 0x28) = iVar2 + uVar11;
            *(iVar4 + 0x88 + uVar3 * 0x28) = iVar2;
            *(iVar4 + 0x98 + uVar3 * 0x28) = iVar2;
            *(iVar4 + 0xa8 + uVar3 * 0x28) = uVar11;
            uVar6 = uVar7 + *arg1;
            uVar7 = uVar6;
            arg1 = arg1 + 0x10;
            uVar9 = uVar9 - 1;
            uVar3 = uVar3 + 1;
        } while (uVar9 != 0);
    }
    *(iVar1 + 0x24) = uVar6 + uVar10;
    *(iVar4 + 0x84) = uVar6;
    return iVar4;
}


/* fcn.00015f50 @ 0x15f50 */

uint64_t fcn.00015f50(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00015f7c @ 0x15f7c */

uint64_t fcn.00015f7c(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00013dac @ 0x13dac */

void fcn.00013dac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013080(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001304c @ 0x1304c */

uchar * fcn.0001304c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00013e6c @ 0x13e6c */

ulong fcn.00013e6c(int64_t arg1,int64_t arg2)

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
code_r0x00013ecc:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00013ecc;
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


/* fcn.00013e2c @ 0x13e2c */

void fcn.00013e2c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013dd0();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00014980 @ 0x14980 */

void fcn.00014980(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    cVar1 = *(*(arg1 + 0x10) + 0x90);
    if (cVar1 == '\x04') {
        iVar3 = *(arg1 + 0x48);
        iVar2 = *(iVar3 + 8);
    }
    else {
        if (cVar1 != '\x06') {
            return;
        }
        iVar3 = *(arg1 + 0x48);
        iVar2 = *(iVar3 + 0x10);
    }
    (**(*0x16700 + 0x70))(*(arg1 + 0x38));
    (**(*0x16700 + 0x48))(iVar3);
    if (iVar2 != 0) {
        (**(*0x16700 + 0x48))(iVar2);
    }
    fcn.000158ac(*(arg1 + 0x30));
    *(*arg1 + 8) = *(arg1 + 8);
    **(arg1 + 8) = *arg1;
    (**(*0x16700 + 0x48))(arg1);
    return;
}


/* fcn.000144d8 @ 0x144d8 */

ulong fcn.000144d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char cVar2;
    char *pcVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    
    if (*(arg2 + 0x84) < 0x1c) {
        return 0x8000000000000015;
    }
    pcVar3 = *(arg2 + 0x98);
    uVar1 = pcVar3[8];
    if (*(arg2 + 0x84) < (uVar1 & 0xf) * 4 + 0xc) {
        return 0x8000000000000015;
    }
    cVar2 = *pcVar3;
    uVar5 = pcVar3[1];
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            if (uVar5 != 0) {
                return 0x8000000000000015;
            }
            uVar5 = 8;
        }
        else if (cVar2 == '\v') {
            if (1 < uVar5) {
                return 0x8000000000000015;
            }
            uVar5 = uVar5 + 6;
        }
        else {
            if (cVar2 != '\f') {
                return 0x8000000000000015;
            }
            if (1 < uVar5) {
                return 0x8000000000000015;
            }
            uVar5 = 9;
        }
        goto code_r0x00014596;
    }
    if (uVar5 < 9) {
        if (6 < uVar5) goto code_r0x00014614;
        if (uVar5 < 4) goto code_r0x00014596;
        if (uVar5 == 4) {
            uVar5 = 4;
            goto code_r0x00014596;
        }
        if (uVar5 == 5) goto code_r0x00014596;
        if (uVar5 != 6) {
            return 0x8000000000000015;
        }
    }
    else if (uVar5 != 9) {
        if (uVar5 != 10) {
            if (uVar5 == 0xb) goto code_r0x00014593;
            if (uVar5 != 0xc) {
                return 0x8000000000000015;
            }
        }
code_r0x00014614:
        uVar5 = 1;
        goto code_r0x00014596;
    }
code_r0x00014593:
    uVar5 = 0;
code_r0x00014596:
    uVar4 = ((uVar1 & 0xf) * 4 - pcVar3) + pcVar3 + 8;
    if (uVar4 != 0) {
        fcn.00015c64(arg2,uVar4);
    }
    if (*(arg2 + 0x84) != 0) {
        (**(arg1 + 0x80))(0x8000000000000016,uVar5,arg3,arg2,*(arg1 + 0x70));
    }
    return 0;
}


/* fcn.0001461c @ 0x1461c */

ulong fcn.0001461c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char *pcVar2;
    char cVar3;
    uint32_t uVar4;
    uint in_register_00000014;
    int64_t arg1_00;
    char *pcVar5;
    char cVar6;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    if (*(arg1_00 + 0x84) < 0x30) {
        return 0x8000000000000015;
    }
    pcVar2 = *(arg1_00 + 0x98);
    cVar6 = *pcVar2;
    uVar1 = pcVar2[1];
    if (cVar6 != '\x01') {
        if (cVar6 == '\x02') {
            if (uVar1 != 0) {
                return 0x8000000000000015;
            }
            cVar6 = '\x04';
        }
        else if (cVar6 == '\x03') {
            if (1 < uVar1) {
                return 0x8000000000000015;
            }
            cVar6 = uVar1 + 5;
        }
        else {
            if (cVar6 != '\x04') {
                return 0x8000000000000015;
            }
            if (3 < uVar1) {
                return 0x8000000000000015;
            }
            cVar6 = uVar1 + 7;
        }
        goto code_r0x000146bc;
    }
    if (uVar1 == 0) {
code_r0x000146b9:
        cVar6 = '\0';
    }
    else {
        if (uVar1 != 1) {
            if (uVar1 == 2) goto code_r0x000146b9;
            if (uVar1 != 3) {
                if (uVar1 == 4) {
                    cVar6 = '\x03';
                    goto code_r0x000146bc;
                }
                if (uVar1 != 5) {
                    if (uVar1 != 6) {
                        return 0x8000000000000015;
                    }
                    goto code_r0x000146b9;
                }
            }
        }
        cVar6 = '\x01';
    }
code_r0x000146bc:
    cVar3 = pcVar2[0xe];
    pcVar5 = pcVar2 + 0x30;
    do {
        if (cVar3 == '\0') {
code_r0x000146ed:
            cVar3 = *pcVar5;
            pcVar5 = pcVar5 + pcVar5[1] * 8;
        }
        else {
            if (((cVar3 == '\x01') || (cVar3 == '\x06')) || (cVar3 == '\x11')) {
code_r0x0001470b:
                uVar4 = pcVar5 - pcVar2;
                if (uVar4 != 0) {
                    fcn.00015c64(arg1_00,uVar4);
                }
                if (*(arg1_00 + 0x84) != 0) {
                    (**(arg1 + 0x80))(0x8000000000000016,cVar6,arg3,arg1_00,*(arg1 + 0x70));
                }
                return 0;
            }
            if (cVar3 != ',') {
                if (cVar3 == ';') goto code_r0x0001470b;
                if (cVar3 != '<') {
                    return 0x8000000000000015;
                }
                goto code_r0x000146ed;
            }
            cVar3 = *pcVar5;
        }
        pcVar5 = pcVar5 + 8;
    } while( true );
}


/* fcn.00014764 @ 0x14764 */

int64_t * fcn.00014764(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t arg1_00;
    uint auStackX_8 [2];
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t aiStack_38 [2];
    
    if ((*(arg1 + 0x90) - 4U & 0xfd) == 0) {
        aiStack_38[0] = 0;
        arg1_00 = 0;
        piVar4 = fcn.00013dd0(arg1,0x50);
        if (piVar4 != NULL) {
            iVar5 = (**(*0x16700 + 0x50))(0x200,0x10,0x14a6c,piVar4,aiStack_38);
            if (-1 < iVar5) {
                auStackX_8[0] = *(arg2 + 0x80);
                iVar5 = fcn.00013dd0();
                if (iVar5 != 0) {
                    uVar3 = 0x38;
                    if (*(arg1 + 0x90) == '\x04') {
                        uVar3 = 0x28;
                    }
                    fcn.00015ab0(arg2,uVar3 + iVar5,auStackX_8);
                    if (in_stack_00000038 == 0) {
code_r0x000148a3:
                        if (*(arg1 + 0x90) == '\x04') {
                            if (iVar5 != in_stack_00000030) {
                                section..text(iVar5,in_stack_00000030,4);
                            }
                            *(iVar5 + 0x10) = 0;
                            *(iVar5 + 0x18) = 0;
                            *(iVar5 + 8) = arg1_00;
                            *(iVar5 + 0x20) = *(arg2 + 0x84);
                            *(iVar5 + 0x24) = auStackX_8[0];
                        }
                        else {
                            if (in_stack_00000030 == 0) {
                                fcn.000102c0(iVar5,0x10);
                            }
                            else if (iVar5 != in_stack_00000030) {
                                section..text(iVar5,in_stack_00000030,0x10);
                            }
                            *(iVar5 + 0x10) = arg1_00;
                            uVar1 = *(arg2 + 0x84);
                            *(iVar5 + 0x18) = 0;
                            *(iVar5 + 0x20) = 0;
                            *(iVar5 + 0x2c) = uVar1;
                            *(iVar5 + 0x30) = auStackX_8[0];
                        }
                        piVar4[7] = aiStack_38[0];
                        piVar4[9] = iVar5;
                        piVar4[2] = arg1;
                        piVar4[5] = arg3;
                        piVar4[4] = in_stack_00000028;
                        piVar4[3] = arg4;
                        piVar4[6] = arg2;
                        *(arg2 + 8) = *(arg2 + 8) + 1;
                        *piVar4 = arg1 + 0x60;
                        puVar2 = *(arg1 + 0x68);
                        piVar4[1] = puVar2;
                        *puVar2 = piVar4;
                        *(arg1 + 0x68) = piVar4;
                        return piVar4;
                    }
                    arg1_00 = fcn.00013dd0();
                    if ((arg1_00 != 0) && (arg1_00 != in_stack_00000038)) {
                        arg1_00 = section..text(arg1_00,in_stack_00000038,0xc);
                    }
                    if (arg1_00 != 0) goto code_r0x000148a3;
                    (**(*0x16700 + 0x48))(iVar5);
                }
            }
            (**(*0x16700 + 0x48))(piVar4);
            if (aiStack_38[0] != 0) {
                (**(*0x16700 + 0x70))();
            }
        }
    }
    return NULL;
}


/* fcn.000155dc @ 0x155dc */

int64_t * fcn.000155dc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.00013dd0(arg1,0x20);
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


/* fcn.00015704 @ 0x15704 */

uint * fcn.00015704(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.00013e00((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x00015796;
        puVar2 = fcn.00013e00(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x00015796;
        }
        (**(*0x16700 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x00015796:
    return puVar1;
}


