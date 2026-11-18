// decompiled by r2ghidra: 0503_ACPI.pe32
// functions: 34

/* entry0 @ 0x10350 */

void entry0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t arg1_00;
    
    *0x12d28 = *(arg1 + 0x60);
    *0x12d30 = *(arg1 + 0x58);
    *0x12d20 = arg1;
    fcn.00011728();
    arg1_00 = 0x129e0;
    iVar3 = fcn.00011794(0x129e0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010340();
        fcn.00010330();
        uVar1 = in(0x1808);
        fcn.00010310(arg1_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            arg1_00 = uVar5;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010300();
        }
        fcn.00010310(arg1_00,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010330();
        }
        else {
            fcn.00010320();
        }
    }
    fcn.00010764(arg1_00,arg1);
    return;
}


/* fcn.00011728 @ 0x11728 */

int64_t fcn.00011728(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12d38 == 0) {
        *0x12d38 = 0;
        if (*(*0x12d20 + 0x68) != 0) {
            piVar2 = *(*0x12d20 + 0x70);
            do {
                if ((*0x12940 == *piVar2) && (*0x12948 == piVar2[1])) {
                    *0x12d38 = (*(*0x12d20 + 0x70))[uVar1 * 3 + 2];
                    return *0x12d38;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12d20 + 0x68));
        }
    }
    return *0x12d38;
}


/* fcn.00011794 @ 0x11794 */

void fcn.00011794(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011728();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000117c2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000117c2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(void)

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


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.00010764 @ 0x10764 */

int64_t fcn.00010764(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    uchar auStackX_18 [16];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x12d28 + 0x140))(0x12920,0,0x12ca0);
    if (((-1 < iVar1) && (iVar1 = (**(*0x12d28 + 0x140))(0x12930,0,77000), -1 < iVar1)) &&
       (iVar1 = fcn.000123bc(), -1 < iVar1)) {
        if (*0x12d68 == 0) {
            *0x12d58 = *(arg2 + 0x60);
            *0x12d60 = *(arg2 + 0x58);
            *0x12d68 = arg2;
        }
        (**(*0x12d58 + 0x170))(0x200,8,0x10914,0,0x12a30,0x12d00);
        *0x12d70 = fcn.00011670(0x50);
        if (*0x12d70 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            if (0x1ffff < *(*0x12d20 + 8)) {
                iVar1 = fcn.000116e0(0x12068,*0x12d70,aiStackX_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
                *0x12cc0 = 0;
                *0x12ca8 = 0x10404;
                *0x12cb0 = 0x10488;
                *0x12cb8 = 0x10500;
                fcn.00010520();
                (**(*0x12d28 + 0x148))(0x12cc0,0x12960,0x12ca8,0);
                if (0x1ffff < *(*0x12d20 + 8)) {
                    iVar1 = fcn.000116e0(0x106b4,0,auStackX_18);
                    return iVar1;
                }
            }
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.0001169c @ 0x1169c */

void fcn.0001169c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011640();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011640 @ 0x11640 */

ulong fcn.00011640(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12d28 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 9792 named .text
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


/* fcn.00011b58 @ 0x11b58 */

void fcn.00011b58(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar *puVar1;
    int64_t iVar2;
    uint in_R8;
    
    *arg2 = arg1;
    if (arg1 == 0x43495041) {
        *(arg2 + 8) = 5;
code_r0x00011bfa:
        if (arg1 == 0x54445344) goto code_r0x00011ba8;
        if (arg1 != 0x54445352) goto code_r0x00011b93;
code_r0x00011c0a:
        *(arg2 + 0x1c) = 0x5446534d;
    }
    else {
        if (arg1 == 0x50434146) {
            *(arg2 + 8) = 3;
            if (2 < CONCAT44(in_R8,arg3)) {
                *(arg2 + 8) = 4;
            }
        }
        else {
            if ((arg1 != 0x52435053) && (arg1 != 0x54444345)) {
                if (arg1 == 0x54445352) {
                    *(arg2 + 8) = 1;
                    goto code_r0x00011c0a;
                }
                if ((arg1 != 0x54445358) && (arg1 != 0x54534253)) goto code_r0x00011bfa;
            }
            *(arg2 + 8) = 1;
        }
code_r0x00011b93:
        *(arg2 + 0x1c) = 0x20494d41;
    }
    *(arg2 + 0x20) = 0x10013;
    *(arg2 + 0x18) = 0x1072009;
code_r0x00011ba8:
    *(arg2 + 10) = str.ALASKA._0_4_;
    puVar1 = arg2 + 0x10;
    *(arg2 + 0xe) = str.ALASKA._4_2_;
    iVar2 = 8;
    do {
        *puVar1 = puVar1[0x12a88 - arg2];
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
}


/* fcn.000123bc @ 0x123bc */

ulong fcn.000123bc(void)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    char *arg2;
    uint64_t uVar4;
    uint *puVar5;
    char cVar6;
    ulong uVar7;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    
    uVar1 = _str.A_M_I;
    uVar7 = 0;
    iStackX_8 = 0;
    iVar2 = fcn.00012590();
    (**(iVar2 + 0x90))(0x163,uVar1);
    iVar3 = fcn.00011c14(4,&iStackX_8);
    iVar2 = iStackX_8;
    if (-1 < iVar3) {
        iVar3 = (***0x12ca0)(*0x12ca0,iStackX_8,*(iStackX_8 + 4),auStackX_10);
        (**(*0x12d28 + 0x48))(iVar2);
        if (-1 < iVar3) {
            iStackX_8 = 0;
            iVar2 = (**(*0x12d28 + 0x140))(0x12910,0,&iStackX_8);
            if ((iVar2 < 0) || (arg2 = fcn.00011670(*(*(iStackX_8 + 0x28) + 4)), arg2 == NULL)) {
                return 0x8000000000000015;
            }
            (**(*0x12d28 + 0x160))(arg2,*(iStackX_8 + 0x28),*(*(iStackX_8 + 0x28) + 4));
            fcn.00011b58(0x54445344,arg2,2);
            cVar6 = *arg2;
            uVar4 = 1;
            arg2[9] = '\0';
            if (1 < *(arg2 + 4)) {
                do {
                    cVar6 = cVar6 + arg2[uVar4];
                    uVar4 = uVar4 + 1;
                } while (uVar4 < *(arg2 + 4));
            }
            arg2[9] = -cVar6;
            iVar2 = (***0x12ca0)(*0x12ca0,arg2,*(arg2 + 4),auStackX_10);
            (**(*0x12d28 + 0x48))(arg2);
            if (-1 < iVar2) {
                puVar5 = fcn.00011670(0x40);
                if (puVar5 != NULL) {
                    *0x13210 = puVar5;
                    *puVar5 = 0x53434146;
                    puVar5[1] = 0x40;
                    puVar5[5] = 0;
                    *(puVar5 + 8) = 2;
                }
                iVar2 = (***0x12ca0)(*0x12ca0,puVar5,puVar5[1],auStackX_10);
                (**(*0x12d28 + 0x48))(puVar5);
                if (iVar2 < 0) {
                    uVar7 = 0x8000000000000009;
                }
                return uVar7;
            }
        }
    }
    return 0x8000000000000009;
}


/* fcn.00011670 @ 0x11670 */

void fcn.00011670(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011640(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102e0(arg1_00,arg1);
    }
    return;
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


/* fcn.000116e0 @ 0x116e0 */

void fcn.000116e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x116dc;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    (**(*0x12d28 + 0x170))(0x200,8,iVar1,arg2,76000,arg3);
    return;
}


/* fcn.00010520 @ 0x10520 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h

void fcn.00010520(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_67h;
    int32_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    uchar auStack_40 [8];
    uchar auStack_38 [7];
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int32_t var_11h;
    int32_t var_dh;
    int64_t var_9h;
    uint32_t var_1h;
    
    iVar4 = 0;
    uStack_74 = 0x43bd1bcd;
    iStack_68 = 0;
    uStack_48 = 0;
    var_17h._1_4_ = 0;
    uStack_78 = 0x709e6472;
    uStack_88 = 0x709e6472;
    uStack_70 = 0x2dcd6b8b;
    uStack_6c = 0x67b9086d;
    uStack_84 = 0x43bd1bcd;
    uStack_80 = 0x2dcd6b8b;
    uStack_7c = 0x67b9086d;
    iVar1 = (**(*0x12d28 + 0x138))(2,0x12900,0,&uStack_60,&iStack_50);
    if (iVar1 < 0) {
        iVar3 = stack0x00000008;
    }
    else {
        uVar2 = 0;
        if (uStack_60 != 0) {
            do {
                (**(*0x12d28 + 0x98))(*(iStack_50 + uVar2 * 8),0x12900,&iStack_58);
                iVar1 = (**(iStack_58 + 0x10))
                                  (iStack_58,&uStack_88,0,auStack_40,&var_fh + 1,&var_1fh + 1,&var_17h + 1);
                if (iVar1 == 0) {
                    iVar3 = iStack_58;
                    goto code_r0x00010613;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStack_60);
        }
        iVar3 = stack0x00000008;
code_r0x00010613:
        (**(*0x12d28 + 0x48))(iStack_50);
    }
    if (-1 < iVar1) {
        while (iVar1 == 0) {
            iVar1 = (**(iVar3 + 0x18))(iVar3,&uStack_78,0x19,iVar4,&iStack_68,auStack_38,&var_27h + 1);
            if (-1 < iVar1) {
                uStack_48 = 0;
                iVar1 = (***0x12ca0)(*0x12ca0,iStack_68,*(iStack_68 + 4),&uStack_48);
                (**(*0x12d28 + 0x48))(iStack_68);
                if (iVar1 < 0) {
                    return;
                }
                iVar4 = iVar4 + 1;
                iStack_68 = 0;
            }
        }
    }
    return;
}


/* fcn.00010a64 @ 0x10a64 */

void fcn.00010a64(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    if (*0x12ce8 == '\0') {
        iVar1 = (**(*0x12d58 + 0x40))(4,0x1000,0x12ce0);
        if (iVar1 < 0) {
            return;
        }
        *0x12d0c = *0x12d0c + 0x2c;
        *0x12cd0 = *0x12ce0 + 0x800;
        *0x12cf0 = *0x12ce0 + 0x2c;
        *0x12cd8 = *0x12cd0;
        iVar1 = fcn.000119cc(aiStackX_18,auStackX_10,auStackX_8);
        if (-1 < iVar1) {
            fcn.00012810(*0x12cf0,aiStackX_18[0],auStackX_8[0]);
            *0x12d18 = *0x12d18 + auStackX_10[0];
            *0x12d0c = *0x12d0c + auStackX_10[0] * 0x14;
            *0x12cf0 = *0x12cf0 + auStackX_10[0] * 0x14;
            (**(*0x12d58 + 0x48))(aiStackX_18[0]);
        }
        iVar1 = *0x12cf0;
        uVar2 = 0;
        fcn.00011198();
        uVar4 = 0;
        if (*0x12d1b != 0) {
            iVar1 = iVar1 + 2;
            do {
                *(iVar1 + -2) = 1;
                *(iVar1 + -1) = *(uVar4 * 4 + 0x12d90);
                fcn.00012810(iVar1,*(*(uVar4 * 4 + 0x12d92) * 8 + 0x12b40),6);
                iVar1 = iVar1 + 8;
                uVar2 = uVar2 + 1;
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
            } while (uVar3 < *0x12d1b);
        }
        *0x12d18 = *0x12d18 + uVar2;
        *0x12cf0 = *0x12cf0 + uVar2 * 8;
        *0x12d0c = *0x12d0c + uVar2 * 8;
        uVar3 = fcn.00010e28();
        *0x12d18 = *0x12d18 + uVar3;
        *0x12cf0 = *0x12cf0 + uVar3 * 8;
        *0x12d0c = *0x12d0c + uVar3 * 8;
        uVar3 = fcn.00010fdc();
        *0x12cf0 = *0x12cf0 + uVar3 * 8;
        **0x12cf0 = 0x304;
        (*0x12cf0)[1] = 0xff0000;
        (*0x12cf0)[2] = 0x104;
        (*0x12cf0)[3] = 0x1ff0000;
        *0x12d0c = *0x12d0c + uVar3 * 8 + 0x10;
        *0x12d18 = *0x12d18 + 2 + uVar3;
        *0x12cf0 = *0x12cf0 + 4;
        fcn.00012810(*0x12cf0,*0x12cd0,*0x12d1c);
        *0x12cd0 = *0x12cf0;
        *0x12ce8 = '\x01';
    }
    fcn.00010ca8();
    return;
}


/* fcn.000109a8 @ 0x109a8 */

void fcn.000109a8(void)

{
    uint64_t uVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iStackX_8;
    
    *0x12d84 = *0x12ce0;
    cVar3 = '_';
    uVar1 = 1;
    *0x12d80 = 0x5f504d5f;
    do {
        cVar3 = cVar3 + *(uVar1 + 0x12d80);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    *0x12d88 = CONCAT12(-cVar3,0x401);
    iVar2 = (**(*0x12d58 + 0x140))(0x129d0,0,&iStackX_8);
    if (-1 < iVar2) {
        iVar2 = (**(iStackX_8 + 0x48))(iStackX_8,0x10,1,0x10,0x12d10);
        if (-1 < iVar2) {
            (**(iStackX_8 + 0x50))(iStackX_8,0x10,*0x12d10,0x12d80);
        }
    }
    return;
}


/* fcn.000119cc @ 0x119cc */

void fcn.000119cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uchar *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t var_28h;
    int64_t var_bp_10h;
    
    if ((((*0x12d48 == NULL) && (iVar1 = (**(*0x12d28 + 0x140))(0x12a10,0,0x12d48), iVar1 < 0)) || (**0x12d48 < 3))
       || (iVar1 = (**(*0x12d48 + 0xe))(*0x12d48,&var_bp_10h), iVar1 < 0)) {
        fcn.000117e0(arg1,arg2,arg3);
    }
    else {
        *arg2 = 0;
        if (var_28h != 0) {
            uVar4 = var_28h;
            piVar2 = var_bp_10h;
            do {
                if ((*piVar2 == 0) && (piVar2[6] == 0)) {
                    *arg2 = *arg2 + 1;
                }
                piVar2 = piVar2 + 0x12;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        *arg3 = *arg2 * 0x14;
        puVar3 = fcn.00011640();
        uVar4 = 0;
        *arg1 = puVar3;
        if (var_28h != 0) {
            do {
                if ((*(var_bp_10h + uVar4 * 0x48) == 0) && (*(var_bp_10h + 0x18 + uVar4 * 0x48) == 0)) {
                    *puVar3 = 0;
                    puVar3[1] = *(var_bp_10h + 0x1c + uVar4 * 0x48);
                    puVar3[2] = *(var_bp_10h + 0x20 + uVar4 * 0x48);
                    puVar3[3] = puVar3[3] ^ (*(var_bp_10h + 8 + uVar4 * 0x48) ^ puVar3[3]) & 1;
                    puVar3[3] = (*(var_bp_10h + 0xc + uVar4 * 0x48) & 1) * '\x02' | puVar3[3] & 1;
                    *(puVar3 + 4) = *(var_bp_10h + 0x24 + uVar4 * 0x48);
                    *(puVar3 + 8) = *(var_bp_10h + 0x28 + uVar4 * 0x48);
                    *(puVar3 + 0xc) = 0;
                    *(puVar3 + 0x10) = 0;
                    puVar3 = puVar3 + 0x14;
                }
                uVar5 = uVar4 + 1;
                uVar4 = uVar5;
            } while (uVar5 < var_28h);
        }
    }
    return;
}


/* fcn.00012810 @ 0x12810 */

int64_t fcn.00012810(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011198 @ 0x11198 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

void fcn.00011198(void)

{
    uint8_t uVar1;
    uchar uVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    int16_t iVar7;
    uchar *puVar8;
    ushort *puVar9;
    ushort *puVar10;
    uint64_t uVar11;
    uchar *puVar12;
    uint8_t uVar13;
    uint64_t uVar14;
    uchar uStackX_8;
    uchar uStackX_9;
    uint8_t uStackX_a;
    char cStackX_b;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_40h_2;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_78;
    char *pcStack_70;
    char *pcStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [8];
    uchar auStack_50 [8];
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar4 = (**(*0x12d58 + 0x138))(2,0x129b0,0,&uStackX_10,&iStackX_18);
    if (-1 < iVar4) {
        uVar11 = 0;
        puVar12 = 0x12d90;
        if (uStackX_10 != 0) {
            do {
                (**(*0x12d58 + 0x98))(*(iStackX_18 + uVar11 * 8),0x129b0,&iStackX_20);
                (**(iStackX_20 + 0x88))(iStackX_20,&pcStack_70);
                (**(iStackX_20 + 0x78))(iStackX_20,&uStack_60,0);
                uVar14 = uStack_60;
                puVar10 = *0x12cd8;
                for (; (*pcStack_70 == -0x76 && (pcStack_70[3] != '\x02')); pcStack_70 = pcStack_70 + 0x2e) {
                }
                uVar5 = *0x12d1b;
                *(uVar5 * 4 + 0x12d90) = pcStack_70[0xe];
                *(uVar5 * 4 + 0x12d91) = 0xcff;
                *(uVar5 * 4 + 0x12d93) = uStack_60;
                uVar1 = *(uVar5 * 4 + 0x12d90);
                if (*0x12d08 <= uVar1) {
                    *0x12d08 = uVar1;
                }
                bVar3 = false;
                (**(iStackX_20 + 0x88))(iStackX_20,&pcStack_68);
                if ((uVar14 & 3) != 0) {
                    *(puVar10 + 2) = 0;
                    *puVar10 = 0x1480;
                    *(puVar10 + 1) = uVar1;
                    *(puVar10 + 3) = 0;
                    *(puVar10 + 6) = 0x1000;
                    puVar10 = puVar10 + 10;
                    *0x12d1c = *0x12d1c + 0x14;
                }
                iVar7 = *0x12d1c;
                for (; *pcStack_68 == -0x76; pcStack_68 = pcStack_68 + 0x2e) {
                    if ((pcStack_68[3] != '\x02') && (*(pcStack_68 + 0x26) != 0)) {
                        if (pcStack_68[3] == '\x01') {
                            *(puVar10 + 3) = 0;
                        }
                        else if ((pcStack_68[5] & 6U) == 0) {
                            *(puVar10 + 3) = 1;
                        }
                        else {
                            *(puVar10 + 3) = 2;
                        }
                        puVar9 = puVar10;
                        if (((*(puVar10 + 3) == '\x01') && ((uVar14 & 0x1c) != 0)) && (!bVar3)) {
                            *puVar10 = 0x1480;
                            bVar3 = true;
                            *(puVar10 + 1) = uVar1;
                            *(puVar10 + 3) = 1;
                            *(puVar10 + 2) = 0xa0000;
                            *(puVar10 + 6) = 0x20000;
                            puVar9 = puVar10 + 10;
                            iVar7 = iVar7 + 0x14;
                            *(puVar10 + 0x17) = 1;
                        }
                        *puVar9 = 0x1480;
                        *(puVar9 + 1) = uVar1;
                        *(puVar9 + 2) = *(pcStack_68 + 0xe);
                        *(puVar9 + 6) = *(pcStack_68 + 0x26);
                        puVar10 = puVar9 + 10;
                        *0x12d1c = iVar7 + 0x14;
                        iVar7 = *0x12d1c;
                    }
                }
                *0x12d1b = *0x12d1b + 1;
                uVar11 = uVar11 + 1;
                *0x12cd8 = puVar10;
            } while (uVar11 < uStackX_10);
        }
        (**(*0x12d58 + 0x48))(iStackX_18);
        iVar4 = (**(*0x12d58 + 0x138))(2,0x12970,0,&uStackX_10,&iStackX_18);
        if (-1 < iVar4) {
            uVar11 = 0;
            if (uStackX_10 != 0) {
                do {
                    iVar4 = (**(*0x12d58 + 0x98))(*(iStackX_18 + uVar11 * 8),0x12970,&iStack_78);
                    if (((-1 < iVar4) && (iVar4 = (**(iStack_78 + 0x30))(iStack_78,2,8,1,&uStackX_8), -1 < iVar4))
                       && ((cStackX_b == '\x06' && (uStackX_a - 1 < 6)))) {
                        uVar14 = *0x12d1b;
                        *(uVar14 * 4 + 0x12d92) = *(uStackX_a + 0x12b30);
                        if (uStackX_a == 4) {
                            *(uVar14 * 4 + 0x12d93) = uStackX_9;
                            (**(iStack_78 + 0x30))(iStack_78,2,0x18,1,&uStackX_8);
                            uVar14 = *0x12d1b;
                            *(uVar14 * 4 + 0x12d90) = uStackX_9;
                            *(uVar14 * 4 + 0x12d91) = uStackX_8;
                            uVar1 = *(uVar14 * 4 + 0x12d90);
                            if (*0x12d08 <= uVar1) {
                                *0x12d08 = uVar1;
                            }
                        }
                        else {
                            *(uVar14 * 4 + 0x12d93) = 1;
                            *(uVar14 * 4 + 0x12d90) = 0xff;
                            (**(iStack_78 + 0x70))(iStack_78,auStack_50,auStack_58,&var_40h,&var_38h);
                            *(*0x12d1b * 4 + 0x12d91) = auStack_58[0];
                        }
                        *0x12d1b = *0x12d1b + 1;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uStackX_10);
            }
            (**(*0x12d58 + 0x48))();
            uVar1 = *0x12d1b;
            uVar11 = 0;
            uVar14 = *0x12d1b;
            if (*0x12d1b != 0) {
                uVar6 = *0x12d08;
                uVar13 = *0x12d1a;
                do {
                    if (*(uVar11 * 4 + 0x12d90) == -1) {
                        uVar6 = uVar6 + 1;
                        if (*(uVar11 * 4 + 0x12d92) == '\x05') {
                            uVar13 = uVar6;
                        }
                        *(uVar11 * 4 + 0x12d90) = uVar6;
                        *0x12d08 = uVar6;
                        *0x12d1a = uVar13;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar14);
            }
            if (uVar1 != 0) {
                puVar8 = 0x12d90;
                uVar11 = uVar14;
                do {
                    if ((puVar8[1] != -1) && (puVar8[2] != '\f')) {
                        **0x12cd8 = 0x881;
                        *(*0x12cd8 + 1) = *puVar8;
                        *(*0x12cd8 + 3) = puVar8[3];
                        *(*0x12cd8 + 2) = puVar8[1];
                        *(*0x12cd8 + 5) = 0;
                        *(*0x12cd8 + 7) = 0;
                        *0x12cd8 = *0x12cd8 + 4;
                        *0x12d1c = *0x12d1c + 8;
                    }
                    puVar8 = puVar8 + 4;
                    uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                if (uVar1 != 0) {
                    do {
                        if (puVar12[1] == -1) {
                            **0x12cd8 = 0x882;
                            uVar2 = *puVar12;
                            *(*0x12cd8 + 2) = 0;
                            *(*0x12cd8 + 1) = uVar2;
                            *(*0x12cd8 + 3) = (puVar12[3] & 3) == 0;
                            (*0x12cd8)[4] = 0x882;
                            *(*0x12cd8 + 5) = *puVar12;
                            *(*0x12cd8 + 6) = 1;
                            *(*0x12cd8 + 0xb) = (puVar12[3] & 0x1c) == 0;
                            *0x12cd8 = *0x12cd8 + 8;
                            *0x12d1c = *0x12d1c + 0x10;
                        }
                        puVar12 = puVar12 + 4;
                        uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                }
            }
        }
    }
    return;
}


/* fcn.00010e28 @ 0x10e28 */

uint64_t fcn.00010e28(void)

{
    uint *puVar1;
    uint8_t *arg2;
    uint uVar2;
    bool bVar3;
    int64_t iVar4;
    uchar *puVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    char *pcVar9;
    uchar *puVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint32_t auStackX_8 [2];
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    
    iVar12 = *0x12cf0;
    uVar7 = 0;
    iStackX_18 = *0x12cf0;
    pcVar9 = 0xfec00000;
    uVar6 = *0x12ce9;
    do {
        if (*pcVar9 != -1) {
            if (pcVar9 == 0) {
                iVar4 = (**0x30)(0,2,0x10,1,auStackX_8);
                if ((iVar4 < 0) || (auStackX_8[0] == 0)) {
                    uVar6 = *0x12ce9;
                    goto code_r0x00010ee4;
                }
            }
            else {
                auStackX_8[0] = pcVar9;
            }
            puVar5 = auStackX_8[0];
            *puVar5 = 0;
            *(*0x12ce9 * 8 + 0x13190) = *(puVar5 + 0x10) >> 0x18 & 0xf;
            *puVar5 = 1;
            uVar2 = *(puVar5 + 0x10);
            uVar11 = *0x12ce9;
            *(uVar11 * 8 + 0x13191) = uVar2;
            *(uVar11 * 8 + 0x13193) = uVar2 >> 0x10;
            *(uVar11 * 8 + 0x13192) = 1;
            *(uVar11 * 8 + 0x13194) = auStackX_8[0];
            uVar6 = *0x12ce9 + 1;
            *0x12ce9 = uVar6;
        }
code_r0x00010ee4:
        pcVar9 = pcVar9 + 0x1000;
    } while (pcVar9 < 0xfed00000);
    if (1 < uVar6) {
        do {
            bVar3 = false;
            uVar11 = 0;
            if (uVar6 - 1 < 1) break;
            do {
                arg2 = uVar11 * 8 + 0x13190;
                iVar12 = uVar11 * 8;
                if (*(iVar12 + 0x13198) < *arg2) {
                    bVar3 = true;
                    fcn.00012810(auStackX_10,arg2,8);
                    fcn.00012810(arg2,iVar12 + 0x13198,8);
                    fcn.00012810(iVar12 + 0x13198,auStackX_10,8);
                    uVar6 = *0x12ce9;
                }
                uVar8 = uVar11 + 1;
                uVar11 = uVar8;
            } while (uVar8 < uVar6 - 1);
        } while (bVar3);
        iVar12 = iStackX_18;
    }
    if (uVar6 != 0) {
        uVar7 = uVar6;
        puVar5 = iVar12 + 2;
        puVar10 = 0x13191;
        uVar11 = uVar7;
        do {
            puVar5[-2] = 2;
            puVar5[-1] = puVar10[-1];
            *puVar5 = *puVar10;
            puVar5[1] = puVar10[1];
            puVar1 = puVar10 + 3;
            puVar10 = puVar10 + 8;
            *(puVar5 + 2) = *puVar1;
            puVar5 = puVar5 + 8;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    return uVar7;
}


/* fcn.00010fdc @ 0x10fdc */

int16_t fcn.00010fdc(void)

{
    uchar uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char *pcVar5;
    uint *puVar6;
    uint8_t uVar7;
    int16_t iVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    int64_t iVar12;
    uint16_t auStackX_8 [4];
    ulong uStackX_10;
    
    puVar6 = *0x12cf0;
    uStackX_10 = 2;
    iVar8 = 0;
    iVar2 = (**(*0x12d60 + 0x48))(L"IsaIrqMask",0x12a20,0,&uStackX_10,auStackX_8);
    uVar1 = *0x12d1a;
    uVar9 = *0x12ce9;
    if (iVar2 < 0) {
        iVar8 = 0;
    }
    else {
        uVar7 = 0;
        uVar4 = uVar7;
        do {
            if (((auStackX_8[0] & 1) != 0) && (uVar4 != 2)) {
                *puVar6 = 3;
                *(puVar6 + 2) = *(uVar4 * 4 + 0x12a41);
                *(puVar6 + 1) = uVar1;
                *(puVar6 + 5) = uVar4;
                uVar10 = *(uVar4 * 4 + 0x12a42);
                uVar3 = uVar7;
                if (uVar9 != 0) {
                    do {
                        uVar11 = *(uVar3 * 8 + 0x13193);
                        if (uVar10 < uVar11) {
                            *(puVar6 + 6) = *(uVar3 * 8 + 0x13190);
                            *(puVar6 + 7) = uVar10;
                            break;
                        }
                        uVar10 = uVar10 - uVar11;
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar9);
                }
                puVar6 = puVar6 + 2;
                iVar8 = iVar8 + 1;
            }
            auStackX_8[0] = auStackX_8[0] >> 1;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x10);
        uVar10 = *(*0x12cf8 + 0x68) / 0xb;
        iVar2 = *(*0x12cf8 + 0x60);
        uVar9 = uVar7;
        if (uVar10 != 0) {
            do {
                iVar12 = uVar9 * 0xb;
                pcVar5 = iVar2 + 2 + iVar12;
                uVar4 = uVar7;
                do {
                    if ((*pcVar5 != '\0') || (pcVar5[1] != '\0')) {
                        *puVar6 = 3;
                        uVar1 = *(iVar12 + iVar2);
                        *(puVar6 + 5) = *(puVar6 + 5) & 0xfc;
                        *(puVar6 + 1) = uVar1;
                        *(puVar6 + 5) = *(puVar6 + 5) | uVar4 & 3;
                        *(puVar6 + 5) = (*(iVar12 + 1 + iVar2) & 0x1f) << 2 | *(puVar6 + 5) & 3;
                        *(puVar6 + 6) = pcVar5[1];
                        *(puVar6 + 7) = *pcVar5;
                        puVar6 = puVar6 + 2;
                        iVar8 = iVar8 + 1;
                    }
                    uVar4 = uVar4 + 1;
                    pcVar5 = pcVar5 + 2;
                } while (uVar4 < 4);
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
        }
    }
    return iVar8;
}


/* fcn.00010ca8 @ 0x10ca8 */

int64_t fcn.00010ca8(void)

{
    char *pcVar1;
    ushort uVar2;
    char *pcVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    char cVar7;
    uint64_t uVar8;
    int64_t iStackX_8;
    char *pcStackX_10;
    
    pcVar3 = *0x12ce0;
    uVar2 = *0x12d0c;
    iStackX_8 = 0;
    pcVar1 = *0x12ce0 + 8;
    pcVar3[0] = 'P';
    pcVar3[1] = 'C';
    pcVar3[2] = 'M';
    pcVar3[3] = 'P';
    *(pcVar3 + 4) = uVar2;
    pcVar3[6] = '\x04';
    pcVar3[7] = '\0';
    fcn.00012810(pcVar1,0x129c0,8);
    fcn.00012810(pcVar3 + 0x10,0x129a0,0xc);
    pcVar1 = *0x12cd0;
    uVar5 = 1;
    *(pcVar3 + 0x22) = *0x12d18;
    uVar8 = *0x12d1c;
    *(pcVar3 + 0x28) = *0x12d1c;
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = -0x20;
    pcVar3[0x27] = -2;
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    cVar7 = *pcVar1;
    uVar4 = uVar5;
    if (1 < uVar8) {
        do {
            cVar7 = cVar7 + pcVar1[uVar4];
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar8);
    }
    uVar4 = *0x12d0c;
    pcVar3[0x2a] = -cVar7;
    iVar6 = *0x12d58;
    cVar7 = **0x12ce0;
    if (1 < uVar4) {
        do {
            cVar7 = cVar7 + (*0x12ce0)[uVar5];
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
    }
    pcVar3[7] = -cVar7;
    iVar6 = (**(iVar6 + 0x140))(0x129d0,0,&iStackX_8);
    if ((-1 < iVar6) && (iStackX_8 != 0)) {
        iVar6 = (**(iStackX_8 + 0x48))(iStackX_8,*0x12d1c + *0x12d0c,1,0x10,&pcStackX_10);
        if (-1 < iVar6) {
            iVar6 = (**(iStackX_8 + 0x50))(iStackX_8,*0x12d1c + *0x12d0c,pcStackX_10,*0x12ce0);
            (**(*0x12d58 + 0x48))(*0x12ce0);
            *0x12ce0 = pcStackX_10;
        }
    }
    return iVar6;
}


/* fcn.000117e0 @ 0x117e0 */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.000117e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uchar *puVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    bool bVar11;
    bool bVar12;
    int64_t iStackX_20;
    int64_t aiStack_38 [2];
    int32_t var_1h;
    
    if ((*0x12d50 == 0) && (*0x12d50 = fcn.00011794(0x12a00), *0x12d50 == 0)) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else if ((*0x12d40 != NULL) || (iVar2 = (**(*0x12d28 + 0x140))(0x129f0,0,0x12d40), -1 < iVar2)) {
        puVar3 = *0x12d40;
        *arg2 = 0;
        iVar7 = 0;
        while (iVar2 = (**puVar3)(puVar3,iVar7,&iStackX_20), -1 < iVar2) {
            uVar1 = *(iStackX_20 + 0x19);
            uVar9 = *(iStackX_20 + 0x1a);
            if (*(iStackX_20 + 0x1a) == 0) {
                uVar9 = 1;
            }
            *arg2 = *arg2 + uVar1;
            iVar7 = iVar7 + uVar9 * uVar1;
            puVar3 = *0x12d40;
        }
        *arg3 = *arg2 * 0x14;
        puVar4 = fcn.00011640();
        *arg1 = puVar4;
        uVar9 = 0;
        while (iVar5 = (***0x12d40)(*0x12d40,uVar9,aiStack_38), iVar2 = *0x12d50, -1 < iVar5) {
            uVar6 = *(aiStack_38[0] + 0x1a);
            if (*(aiStack_38[0] + 0x1a) == 0) {
                uVar6 = 1;
            }
            uVar10 = *(aiStack_38[0] + 0x19) * uVar6;
            if (uVar10 != 0) {
                uVar8 = uVar9;
                do {
                    *puVar4 = 0;
                    iVar5 = uVar8 * 0x1f;
                    puVar4[1] = *(iVar5 + 99 + iVar2);
                    puVar4[2] = *(iVar5 + 0x65 + iVar2);
                    bVar11 = *(iVar5 + 0x4e + iVar2) == '\0';
                    puVar4[3] = bVar11 | puVar4[3] & 0xfe;
                    bVar12 = uVar8 == *(iVar2 + 0x19);
                    uVar8 = uVar8 + uVar6;
                    puVar4[3] = bVar12 * '\x02' | bVar11;
                    *(puVar4 + 4) = *(iVar5 + 0x4f + iVar2);
                    *(puVar4 + 8) = *(iVar5 + 0x53 + iVar2);
                    *(puVar4 + 0xc) = 0;
                    *(puVar4 + 0x10) = 0;
                    puVar4 = puVar4 + 0x14;
                } while (uVar8 - uVar9 < uVar10);
            }
            uVar9 = uVar9 + uVar10;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.000125f0 @ 0x125f0 */

int * fcn.000125f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int *piVar1;
    int iVar2;
    int aiStackX_8 [2];
    
    arg3_00 = fcn.000125cc(arg2);
    aiStackX_8[0] = 0x5f5f5f5f;
    iVar2 = 0x5f5f5f5f;
    if ((arg3_00 != 0) && (aiStackX_8 != arg2)) {
        section..text(aiStackX_8,arg2,arg3_00);
        iVar2 = aiStackX_8[0];
    }
    if (arg3 != 0) {
        piVar1 = arg1;
        do {
            if (*piVar1 == iVar2) {
                return piVar1;
            }
            piVar1 = piVar1 + 1;
        } while (piVar1 - arg1 < arg3);
    }
    return NULL;
}


/* fcn.000126fc @ 0x126fc */

int64_t fcn.000126fc(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RCX;
    int64_t in_RDX;
    int64_t in_R8;
    uint8_t *puStack_28;
    
    iVar1 = fcn.00012664(in_RCX,in_RDX,in_R8);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (*puStack_28 < 2) {
        if (1 < arg1) {
            return -0x7ffffffffffffffe;
        }
        *puStack_28 = arg1;
    }
    else if (*puStack_28 == 10) {
        puStack_28[1] = arg1;
    }
    else if (*puStack_28 == 0xb) {
        *(puStack_28 + 1) = arg1;
    }
    else if (*puStack_28 == 0xc) {
        *(puStack_28 + 1) = arg1;
    }
    else {
        if (*puStack_28 != 0xe) {
            return -0x7ffffffffffffffe;
        }
        *(puStack_28 + 1) = arg1;
    }
    return 0;
}


/* fcn.00011e38 @ 0x11e38 */

int64_t fcn.00011e38(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uchar *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int *piVar6;
    uint64_t uVar7;
    
    iVar4 = 0;
    uVar7 = 0;
    do {
        if (uVar7 == 0) {
            piVar6 = *(arg1 + 8);
        }
        else {
            piVar6 = *arg1;
        }
        if (piVar6 != NULL) {
            if ((*(arg1 + 0x42) == '\0') &&
               (puVar3 = fcn.000125f0(piVar6 + 9,0x12be8,piVar6[1] - 0x25), puVar3 != NULL)) {
                *puVar3 = 0x58;
            }
            if ((*(arg1 + 0x40) == '\0') &&
               (puVar3 = fcn.000125f0(piVar6 + 9,0x12bec,piVar6[1] - 0x25), puVar3 != NULL)) {
                *puVar3 = 0x58;
            }
            if ((*(arg1 + 0x43) == '\0') &&
               (puVar3 = fcn.000125f0(piVar6 + 9,0x12bf0,piVar6[1] - 0x25), puVar3 != NULL)) {
                *puVar3 = 0x58;
            }
            if (*piVar6 != 0x54445344) {
                return -0x7ffffffffffffffe;
            }
            iVar4 = fcn.000126fc(*(arg1 + 0x48));
            if (iVar4 < 0) {
                return iVar4;
            }
            if (*piVar6 != 0x54445344) {
                return -0x7ffffffffffffffe;
            }
            iVar4 = fcn.000126fc(*(arg1 + 0x4c));
            if (iVar4 < 0) {
                return iVar4;
            }
            if (*piVar6 != 0x54445344) {
                return -0x7ffffffffffffffe;
            }
            iVar4 = fcn.000126fc(*(arg1 + 0x43));
            if (iVar4 < 0) {
                return iVar4;
            }
            if (*piVar6 != 0x54445344) {
                return -0x7ffffffffffffffe;
            }
            iVar4 = fcn.000126fc(*(arg1 + 0x42));
            if (iVar4 < 0) {
                return iVar4;
            }
            if (*piVar6 != 0x54445344) {
                return -0x7ffffffffffffffe;
            }
            iVar4 = fcn.000126fc(*(arg1 + 0x41));
            if (iVar4 < 0) {
                return iVar4;
            }
            if (*piVar6 != 0x54445344) {
                return -0x7ffffffffffffffe;
            }
            iVar4 = fcn.000126fc(*(arg1 + 0x40));
            if (iVar4 < 0) {
                return iVar4;
            }
            cVar2 = *piVar6;
            uVar5 = 1;
            *(piVar6 + 9) = 0;
            iVar1 = *0x13210;
            if (1 < piVar6[1]) {
                do {
                    cVar2 = cVar2 + *(uVar5 + piVar6);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < piVar6[1]);
            }
            *(piVar6 + 9) = -cVar2;
            *(iVar1 + 8) = -cVar2;
        }
        uVar7 = uVar7 + 1;
        if (1 < uVar7) {
            return iVar4;
        }
    } while( true );
}


/* fcn.00012590 @ 0x12590 */

int64_t fcn.00012590(void)

{
    if (*0x12d78 == 0) {
        (**(*0x12d28 + 0x140))(0x128f0,0,0x12d78);
    }
    return *0x12d78;
}


/* fcn.00011c14 @ 0x11c14 */

ulong fcn.00011c14(uint32_t arg1,int64_t arg2)

{
    char *pcVar1;
    ulong uVar2;
    int64_t arg2_00;
    char cVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t arg1_00;
    
    uVar4 = CONCAT44(in_register_0000000c,arg1);
    if (uVar4 < 5) {
        arg1_00 = 0x114;
        if (uVar4 == 1) {
            arg1_00 = 0x84;
        }
        arg2_00 = fcn.00011670(arg1_00);
        uVar2 = 0;
        *arg2 = arg2_00;
        if (arg2_00 == 0) {
            uVar2 = 0x8000000000000009;
        }
        else {
            if (uVar4 == 1) {
                fcn.00011b58(0x50434146,arg2_00,2);
                *(arg2_00 + 8) = 2;
            }
            else {
                fcn.00011b58(0x50434146,arg2_00,arg1);
            }
            pcVar1 = *arg2;
            uVar5 = 1;
            pcVar1[0x6d] = '\x03';
            pcVar1[0x6e] = '\0';
            cVar3 = *pcVar1;
            pcVar1[0x40] = '\x04';
            pcVar1[0x41] = '\x18';
            pcVar1[0x42] = '\0';
            pcVar1[0x43] = '\0';
            pcVar1[0x44] = '\0';
            pcVar1[0x45] = '\0';
            pcVar1[0x46] = '\0';
            pcVar1[0x47] = '\0';
            pcVar1[0x48] = 'P';
            pcVar1[0x49] = '\x18';
            pcVar1[0x4a] = '\0';
            pcVar1[0x4b] = '\0';
            pcVar1[0x4c] = '\b';
            pcVar1[0x4d] = '\x18';
            pcVar1[0x4e] = '\0';
            pcVar1[0x4f] = '\0';
            pcVar1[0x2c] = '\0';
            pcVar1[0x2d] = '\x02';
            pcVar1[0x2e] = '\t';
            pcVar1[0x2f] = '\0';
            pcVar1[0x30] = -0x4e;
            pcVar1[0x31] = '\0';
            pcVar1[0x32] = '\0';
            pcVar1[0x33] = '\0';
            pcVar1[0x34] = -0x60;
            pcVar1[0x35] = -0x5f;
            pcVar1[0x36] = '\0';
            pcVar1[0x37] = '\0';
            pcVar1[0x38] = '\0';
            pcVar1[0x39] = '\x18';
            pcVar1[0x3a] = '\0';
            pcVar1[0x3b] = '\0';
            pcVar1[0x3c] = '\0';
            pcVar1[0x3d] = '\0';
            pcVar1[0x3e] = '\0';
            pcVar1[0x3f] = '\0';
            pcVar1[0x50] = '`';
            pcVar1[0x51] = '\x18';
            pcVar1[0x52] = '\0';
            pcVar1[0x53] = '\0';
            pcVar1[0x54] = '\0';
            pcVar1[0x55] = '\0';
            pcVar1[0x56] = '\0';
            pcVar1[0x57] = '\0';
            pcVar1[0x5a] = '\x01';
            pcVar1[0x5b] = '\x04';
            pcVar1[0x5c] = ' ';
            pcVar1[0x5d] = '\0';
            pcVar1[0x5e] = '\x10';
            pcVar1[0x5f] = '\0';
            pcVar1[0x60] = 'e';
            pcVar1[0x61] = '\0';
            pcVar1[0x58] = '\x04';
            pcVar1[0x59] = '\x02';
            pcVar1[0x62] = -0x17;
            pcVar1[99] = '\x03';
            pcVar1[100] = '\0';
            pcVar1[0x65] = '\x04';
            pcVar1[0x66] = '\x10';
            pcVar1[0x67] = '\0';
            pcVar1[0x68] = '\0';
            pcVar1[0x69] = '\0';
            pcVar1[0x6a] = '\r';
            pcVar1[0x6b] = '\0';
            pcVar1[0x6c] = '2';
            pcVar1[0x74] = '\x01';
            pcVar1[0x75] = '\b';
            pcVar1[0x76] = uVar2;
            pcVar1[0x78] = -7;
            pcVar1[0x79] = '\f';
            pcVar1[0x7a] = '\0';
            pcVar1[0x7b] = '\0';
            pcVar1[0x7c] = '\0';
            pcVar1[0x7d] = '\0';
            pcVar1[0x7e] = '\0';
            pcVar1[0x7f] = '\0';
            pcVar1[0x80] = '\x06';
            pcVar1[0x70] = -0x1b;
            pcVar1[0x71] = -0x3a;
            pcVar1[0x72] = '\x03';
            pcVar1[0x73] = '\0';
            if (uVar4 == 1) {
                pcVar1[4] = -0x7c;
                pcVar1[5] = '\0';
                pcVar1[6] = '\0';
                pcVar1[7] = '\0';
                pcVar1[9] = uVar2;
                do {
                    cVar3 = cVar3 + pcVar1[uVar5];
                    uVar5 = uVar5 + 1;
                } while (uVar5 < 0x84);
            }
            else {
                pcVar1[0x94] = '\x01';
                pcVar1[0x95] = ' ';
                pcVar1[0x96] = '\0';
                pcVar1[0x97] = '\x02';
                pcVar1[0x98] = '\0';
                pcVar1[0x99] = '\x18';
                pcVar1[0x9a] = '\0';
                pcVar1[0x9b] = '\0';
                pcVar1[0x9c] = '\0';
                pcVar1[0x9d] = '\0';
                pcVar1[0x9e] = '\0';
                pcVar1[0x9f] = '\0';
                pcVar1[0xac] = '\x01';
                pcVar1[0xad] = '\x10';
                pcVar1[0xae] = '\0';
                pcVar1[0xaf] = '\x02';
                pcVar1[0xb0] = '\x04';
                pcVar1[0xb1] = '\x18';
                pcVar1[0xb2] = '\0';
                pcVar1[0xb3] = '\0';
                pcVar1[0xb4] = '\0';
                pcVar1[0xb5] = '\0';
                pcVar1[0xb6] = '\0';
                pcVar1[0xb7] = '\0';
                pcVar1[0xa0] = '\x01';
                pcVar1[0xa1] = '\0';
                pcVar1[0xa2] = '\0';
                pcVar1[0xa3] = '\x02';
                *(pcVar1 + 0xa4) = uVar2;
                pcVar1[0xb8] = '\x01';
                pcVar1[0xb9] = '\0';
                pcVar1[0xba] = '\0';
                pcVar1[0xbb] = '\x02';
                *(pcVar1 + 0xbc) = uVar2;
                pcVar1[0xc4] = '\x01';
                pcVar1[0xc5] = '\b';
                pcVar1[0xc6] = '\0';
                pcVar1[199] = '\x01';
                pcVar1[200] = 'P';
                pcVar1[0xc9] = '\x18';
                pcVar1[0xca] = '\0';
                pcVar1[0xcb] = '\0';
                pcVar1[0xcc] = '\0';
                pcVar1[0xcd] = '\0';
                pcVar1[0xce] = '\0';
                pcVar1[0xcf] = '\0';
                pcVar1[0xd0] = '\x01';
                pcVar1[0xd1] = ' ';
                pcVar1[0xd2] = '\0';
                pcVar1[0xd3] = '\x03';
                pcVar1[0xd4] = '\b';
                pcVar1[0xd5] = '\x18';
                pcVar1[0xd6] = '\0';
                pcVar1[0xd7] = '\0';
                pcVar1[0xd8] = '\0';
                pcVar1[0xd9] = '\0';
                pcVar1[0xda] = '\0';
                pcVar1[0xdb] = '\0';
                pcVar1[0xdc] = '\x01';
                pcVar1[0xdd] = '\0';
                pcVar1[0xde] = '\0';
                pcVar1[0xdf] = '\x01';
                pcVar1[0xe0] = '`';
                pcVar1[0xe1] = '\x18';
                pcVar1[0xe2] = '\0';
                pcVar1[0xe3] = '\0';
                pcVar1[0xe4] = '\0';
                pcVar1[0xe5] = '\0';
                pcVar1[0xe6] = '\0';
                pcVar1[0xe7] = '\0';
                pcVar1[0xe8] = '\x01';
                pcVar1[0xe9] = '\0';
                pcVar1[0xea] = '\0';
                pcVar1[0xeb] = '\x01';
                *(pcVar1 + 0xec) = uVar2;
                pcVar1[8] = '\x06';
                pcVar1[9] = '\0';
                *(pcVar1 + 0x81) = uVar2;
                pcVar1[0x83] = '\x04';
                *(pcVar1 + 4) = arg1_00;
                if (1 < arg1_00) {
                    do {
                        cVar3 = cVar3 + pcVar1[uVar5];
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < arg1_00);
                }
            }
            pcVar1[9] = -cVar3;
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.000125cc @ 0x125cc */

uint64_t fcn.000125cc(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 3) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 4;
    }
    return uVar1;
}


/* fcn.00012664 @ 0x12664 */

ulong fcn.00012664(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char *pcVar2;
    int64_t *in_stack_00000028;
    
    while( true ) {
        pcVar1 = fcn.000125f0(arg1,arg3,arg2);
        if (pcVar1 == NULL) {
            return 0x800000000000000e;
        }
        pcVar2 = pcVar1;
        if ((pcVar1[-1] + 0xa4U & 0xfd) == 0) {
            pcVar2 = pcVar1 + -1;
        }
        if (pcVar2[-1] == '\b') break;
        arg2 = arg1 + arg2 + (4 - pcVar1);
        arg1 = pcVar1 + 4;
    }
    in_stack_00000028[4] = 0;
    in_stack_00000028[2] = pcVar1 + 4;
    *in_stack_00000028 = pcVar2 + -1;
    in_stack_00000028[1] = pcVar2;
    *(in_stack_00000028 + 3) = 3;
    return 0;
}


