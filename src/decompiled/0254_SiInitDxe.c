// decompiled by r2ghidra: 0254_SiInitDxe.pe32
// functions: 53

/* entry0 @ 0x10384 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010398(arg1,in_RDX);
    fcn.00010448(arg1,in_RDX);
    return;
}


/* fcn.00010398 @ 0x10398 */

void fcn.00010398(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x27d40 = *(arg1 + 0x60);
    *0x27d38 = arg1;
    fcn.000107e0();
    noname_0_00 = 0x16a20;
    iVar3 = fcn.0001084c(0x16a20);
    if (iVar3 == 0) {
        uVar4 = fcn.00010320();
        fcn.00010310();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010310();
        }
        else {
            fcn.00010300();
        }
    }
    //WARNING: Could not recover jumptable at 0x00010441. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x27d40 + 0x140))(0x16980,0,0x27d50);
    return;
}


/* fcn.00010448 @ 0x10448 */

ulong fcn.00010448(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [2];
    uchar auStackX_18 [16];
    
    aiStackX_8[1] = 0;
    aiStackX_8[0] = arg1;
    (**(*0x27d40 + 0x80))(aiStackX_8 + 1,0x16940,0,0x16a00);
    iVar1 = (**(*0x27d40 + 0x140))(0x16950,0,auStackX_18);
    if (iVar1 < 0) {
        (**(*0x27d40 + 0x50))(0x200,8,fcn.00010560,0,aiStackX_8);
        (**(*0x27d40 + 0xa8))(0x16950,aiStackX_8[0],0x27d80);
    }
    else {
        fcn.00010560(0);
    }
    uVar2 = (**(*0x27d40 + 0x170))(0x200,8,0x105a4,0,0x169d0,0x27d88);
    (**(*0x27d40 + 0x80))(0x27d30,0x16900,0,0x16a18);
    return uVar2;
}


/* fcn.000107e0 @ 0x107e0 */

int64_t fcn.000107e0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x27d48 == 0) {
        *0x27d48 = 0;
        if (*(*0x27d38 + 0x68) != 0) {
            piVar2 = *(*0x27d38 + 0x70);
            do {
                if ((*0x16990 == *piVar2) && (*0x16998 == piVar2[1])) {
                    *0x27d48 = (*(*0x27d38 + 0x70))[uVar1 * 3 + 2];
                    return *0x27d48;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x27d38 + 0x68));
        }
    }
    return *0x27d48;
}


/* fcn.0001084c @ 0x1084c */

void fcn.0001084c(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000107e0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001087a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001087a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00010560 @ 0x10560 */

void fcn.00010560(int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    if (arg1 != 0) {
        (**(*0x27d40 + 0x70))();
    }
    iVar1 = (**(*0x27d40 + 0x140))(0x16950,0,aiStackX_8);
    if (-1 < iVar1) {
        fcn.000108c8(aiStackX_8[0]);
    }
    return;
}


/* fcn.000108c8 @ 0x108c8 */

int64_t fcn.000108c8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uchar auStackX_10 [24];
    
    iVar1 = fcn.0001084c(0x169a0);
    uVar3 = 0;
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        *0x27d70 = iVar1 + 0x18;
        iVar1 = (**(*0x27d40 + 0x140))(0x16960,0,auStackX_10);
        if (-1 < iVar1) {
            iVar1 = 0;
            iVar2 = (**(*0x27d40 + 0x140))(0x16960,0,0x27d68);
            if ((-1 < iVar2) && (uVar4 = 0, iVar1 = *0x27d68, *(*0x27d68 + 0x1e) != 0)) {
                do {
                    if (*(*0x27d68 + 2) < uVar3 + 0x24) break;
                    iVar2 = *0x27d68 + 0x24 + uVar3;
                    if ((*(iVar2 + 8) == *0x16920) && (*(iVar2 + 0x10) == *0x16928)) {
                        *0x27d58 = iVar2;
                        break;
                    }
                    uVar4 = uVar4 + 1;
                    uVar3 = uVar3 + *(iVar2 + 2);
                } while (uVar4 < *(*0x27d68 + 0x1e));
            }
            fcn.00010c1c(arg1,iVar1);
            fcn.00010e14(arg1);
            iVar1 = fcn.00010b30(arg1);
        }
    }
    return iVar1;
}


/* fcn.000118a0 @ 0x118a0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.000118a0(int64_t arg1)

{
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *arg1_00;
    uchar auStackX_10 [8];
    ushort auStackX_18 [4];
    char *pcStackX_20;
    int8_t var_38h;
    int16_t var_40h;
    int64_t var_48h;
    int64_t iStack_38;
    char *pcStack_30;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    iVar4 = (**(*0x27d40 + 0x140))(0x16950,0);
    if ((iStack_38 == 0) || (iVar4 < 0)) {
        uVar6 = 0x8000000000000003;
    }
    else {
        auStackX_18[0] = 0xfffe;
        do {
            iVar4 = (**(iStack_38 + 0x18))(iStack_38,auStackX_18,0,&pcStack_30,0);
            pcVar3 = pcStack_30;
            if (iVar4 < 0) break;
            if (*pcStack_30 == arg1) {
                pcVar1 = pcStack_30 + 5;
                arg1_00 = pcStack_30 + pcStack_30[1];
                iVar5 = 0;
                do {
                    iVar7 = iVar5 + 1;
                    pcVar2 = iVar5 + 0x23931;
                    iVar5 = iVar7;
                } while (*pcVar2 != '\0');
                pcStackX_20 = arg1_00;
                iVar5 = fcn.0001654c(arg1_00,0x23930,iVar7);
                if (iVar5 == 0) {
                    fcn.000117a8(pcVar1,&pcStackX_20);
                    arg1_00 = pcStackX_20;
                }
                iVar5 = 0;
                do {
                    iVar7 = iVar5 + 1;
                    pcVar1 = iVar5 + 0x23951;
                    iVar5 = iVar7;
                } while (*pcVar1 != '\0');
                iVar5 = fcn.0001654c(arg1_00,0x23950,iVar7);
                if (iVar5 == 0) {
                    auStackX_10[0] = *0xc0000008;
                    iVar5 = fcn.000164ec();
                    iVar5 = (**(iVar5 + 0x20))(0x169f0,0x200002);
                    fcn.00010898(0,iVar5 + 8,iVar7,auStackX_10);
                    pcVar3[0x34] = -1;
                    pcVar3[0x35] = -1;
                }
            }
        } while (iVar4 == 0);
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.000107a0 @ 0x107a0 */

void fcn.000107a0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010770(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010770 @ 0x10770 */

ulong fcn.00010770(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x27d40 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00010c1c @ 0x10c1c */

void fcn.00010c1c(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    uint16_t uVar11;
    int64_t iStackX_10;
    
    iStackX_10 = 2;
    *0x16a56 = (-(*(*0x27d70 + 0xd) != '\0') & 2U) + 3;
    uVar5 = 0;
    piVar10 = *(*0x27d58 + 0x38);
    uVar9 = 0;
    *0x16a5d = 0;
    uVar8 = uVar5;
    do {
        uVar7 = 0;
        uVar11 = *0x16a5d;
        do {
            uVar1 = uVar7 >> 1;
            uVar2 = uVar7 & 1;
            iVar4 = uVar1 * 0x1c5 + uVar2 * 0x40 + uVar5;
            if (((*(iVar4 + 0x1ca + *0x27d70) == '\x02') && (iVar3 = *(iVar4 + 0x1cc + *0x27d70), iVar3 != 0)) &&
               ((*(iVar4 + 0x1e7 + *0x27d70) == -0xf || ((*(iVar4 + 0x1e8 + *0x27d70) & 0xf) == 0xe)))) {
                uVar8 = uVar8 + iVar3 * 0x400;
                uVar9 = uVar9 + 1;
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
            *0x16a5d = uVar11 + 1;
            if ((*(*piVar10 + uVar1) & 1 << uVar2) == 0) {
                *0x16a5d = uVar11;
            }
            uVar11 = *0x16a5d;
        } while (uVar6 < 8);
        piVar10 = piVar10 + 1;
        uVar5 = uVar5 + 0x719;
        iStackX_10 = iStackX_10 + -1;
    } while (iStackX_10 != 0);
    iVar3 = 0x1000000;
    if (*(*0x27d70 + 3) != '\x1a') {
        iVar3 = 0x1000000;
        if (*(*0x27d70 + 3) != '\"') {
            iVar3 = 0x400000;
        }
    }
    *0x16a57 = uVar8 + (*0x16a5d - uVar9) * iVar3 * 2;
    if (0x7fffffff < *0x16a57) {
        *0x16a5f = *0x16a57 << 10;
        *0x16a57 = 0x80000000;
    }
    fcn.000109c8(0x16a50,0,0,arg1);
    return;
}


/* fcn.00010e14 @ 0x10e14 */

int64_t fcn.00010e14(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    uint8_t uVar6;
    char *arg1_00;
    int64_t iVar7;
    uint8_t uVar8;
    unkbyte7 Var10;
    int64_t iVar9;
    int16_t iVar11;
    int64_t iVar12;
    ulong noname_1;
    uint16_t *puVar13;
    char *arg1_01;
    uint8_t *puVar14;
    uint16_t uVar15;
    uint64_t in_R8;
    unkbyte7 Var17;
    uchar *puVar16;
    uint64_t arg3;
    uint64_t uVar18;
    uint8_t uVar19;
    ushort uVar20;
    char *arg1_02;
    uint8_t uStackX_18;
    uchar auStack_70 [8];
    uint16_t *puStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    iVar7 = 0;
    uVar20 = 0;
    arg1_00 = fcn.000107a0(100);
    if (arg1_00 == NULL) {
        iVar7 = -0x7ffffffffffffff7;
    }
    else {
        *0x16aa4 = *0x27d60;
        uStackX_18 = 0;
        do {
            uVar18 = 0;
            iStack_58 = uStackX_18 * 0x719;
            do {
                uVar19 = uVar18;
                Var17 = in_R8 >> 8;
                in_R8 = CONCAT71(Var17,uVar19) & 0xffffffffffffff01;
                iStack_60 = (uVar18 >> 1) * 0x1c5 + (uVar19 & 1) * 0x40 + iStack_58;
                Var10 = *0x27d70 >> 8;
                if ((*(iStack_60 + 0x1ca + *0x27d70) == '\x02') && (*(iStack_60 + 0x1cc + *0x27d70) != 0)) {
                    cVar1 = *(iStack_60 + 0x1e7 + *0x27d70);
                    uVar8 = *(iStack_60 + 0x1e8 + *0x27d70);
                    uVar2 = *(iStack_60 + 0x209 + *0x27d70);
                    uVar3 = *(iStack_60 + 0x1e9 + *0x27d70);
                    puVar13 = *0x27d70 + 0x1ea + iStack_60;
                    puStack_68 = puVar13;
                    *0x16a68 = fcn.00010da4(CONCAT71(Var10,uStackX_18),CONCAT71(iStack_58 >> 8,uVar19),
                                            CONCAT71(Var17,uVar2));
                    if ((*(*0x27d58 + 0x30) == NULL) ||
                       (*0x16a70 = (**(*0x27d58 + 0x30))(*0x27d58,uStackX_18,uVar18,uVar2), *0x16a70 == 0)) {
                        *0x16a70 = *((uVar18 >> 1) * 8 + 0x234f0);
                    }
                    iVar7 = 0;
                    bVar5 = false;
                    if (*0x16b00 != 0xff) {
                        iVar9 = iVar7;
                        iVar12 = iVar7;
                        uVar6 = *0x16b00;
                        do {
                            if ((uVar6 == (*puVar13 & 0x7f)) && (*(iVar12 + 0x16b01) == *(puVar13 + 1))) {
                                bVar5 = true;
                                *0x16a78 = *(iVar9 * 0x10 + 0x16b08);
                                break;
                            }
                            iVar9 = iVar9 + 1;
                            iVar12 = iVar9 * 0x10;
                            uVar6 = *(iVar12 + 0x16b00);
                        } while (uVar6 != 0xff);
                    }
                    iVar9 = 100;
                    arg1_02 = arg1_00;
                    if (!bVar5) {
                        puVar16 = 0x1c164;
                        noname_1 = 100;
                        fcn.000165fc(arg1_00,100,0x1c164);
                        uVar15 = 0;
                        do {
                            if (uVar15 == 0) {
                                uVar18 = *puVar13 & 0x7f;
                            }
                            else {
                                uVar18 = *(uVar15 + puVar13);
                            }
                            fcn.00015680(auStack_70,noname_1,puVar16,uVar18);
                            puVar16 = auStack_70;
                            noname_1 = 100;
                            fcn.00016720(arg1_00,100,puVar16);
                            uVar15 = uVar15 + 1;
                        } while (uVar15 < 2);
                        cVar4 = *arg1_00;
                        iVar9 = iVar7;
                        while (cVar4 != '\0') {
                            iVar9 = iVar9 + 1;
                            cVar4 = arg1_00[iVar9];
                        }
                        iVar9 = 99 - iVar9;
                        cVar4 = *arg1_00;
                        while (cVar4 != '\0') {
                            iVar7 = iVar7 + 1;
                            cVar4 = arg1_00[iVar7];
                        }
                        arg1_02 = arg1_00 + iVar7 + 1;
                        *0x16a78 = arg1_00;
                    }
                    puVar16 = 0x1c167;
                    iVar7 = iVar9;
                    fcn.000165fc(arg1_02,iVar9,0x1c167);
                    puVar14 = puVar13 + 5;
                    iVar12 = 4;
                    do {
                        fcn.00015680(auStack_70,iVar7,puVar16,*puVar14);
                        puVar16 = auStack_70;
                        iVar7 = iVar9;
                        fcn.00016720(arg1_02,iVar9,puVar16);
                        puVar14 = puVar14 + 1;
                        iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                    iVar12 = 0;
                    cVar4 = *arg1_02;
                    iVar7 = iVar12;
                    while (cVar4 != '\0') {
                        iVar7 = iVar7 + 1;
                        cVar4 = arg1_02[iVar7];
                    }
                    iVar9 = iVar9 + (-1 - iVar7);
                    cVar4 = *arg1_02;
                    while (cVar4 != '\0') {
                        iVar12 = iVar12 + 1;
                        cVar4 = arg1_02[iVar12];
                    }
                    arg1_01 = arg1_02 + iVar12 + 1;
                    *0x16a80 = arg1_02;
                    fcn.000165fc(arg1_01,iVar9,0x1c167);
                    iVar7 = 0x14;
                    puVar14 = puStack_68 + 9;
                    do {
                        fcn.00015624(auStack_70,4,0x1c168,*puVar14);
                        fcn.00016720(arg1_01,iVar9,auStack_70);
                        puVar14 = puVar14 + 1;
                        iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    *0x16ab7 = 0x403;
                    *0x16ab9 = 0x605;
                    iVar11 = (1 << (uVar3 & 7)) * 8;
                    *0x16aa8 = CONCAT22(iVar11,(uVar3 & 0x18) + iVar11);
                    *0x16abc = *(iStack_60 + 0x1cc + *0x27d70);
                    arg3 = *0x16abc;
                    if (*0x16abc < 0x7fff) {
                        *0x16aac = *0x16abc;
                        *0x16abc = 0;
                    }
                    else {
                        *0x16aac = 0x7fff;
                    }
                    uVar8 = uVar8 & 0xf;
                    if (uVar8 == 1) {
code_r0x0001122e:
                        *0x16aae = '\f';
                    }
                    else if (uVar8 == 3) {
code_r0x00011218:
                        *0x16aae = '\r';
                        if (cVar1 == -0xf) {
                            *0x16aae = '\v';
                        }
                    }
                    else {
                        if (uVar8 == 5) goto code_r0x0001122e;
                        if (uVar8 == 9) goto code_r0x00011218;
                        if (uVar8 == 0xe) {
                            if ((cVar1 - 0x11U & 0xfd) != 0) goto code_r0x000111f8;
                            *0x16aae = '\v';
                        }
                        else if (uVar8 == 0xf) {
code_r0x000111f8:
                            *0x16aae = (cVar1 != '\x12') + '\b';
                        }
                        else {
                            *0x16aae = '\t';
                        }
                    }
                    if (cVar1 == '\v') {
                        *0x16ab2 = 0x18;
                    }
                    else if (cVar1 == '\f') {
                        *0x16ab2 = 0x1a;
                    }
                    else if (cVar1 == '\x0f') {
code_r0x0001127e:
                        *0x16ab2 = 0x1d;
                    }
                    else if (cVar1 == '\x12') {
                        *0x16ab2 = 0x22;
                    }
                    else if (cVar1 == '\x13') {
                        *0x16ab2 = 0x23;
                    }
                    else {
                        if (cVar1 == -0xf) goto code_r0x0001127e;
                        *0x16ab2 = 0x1e;
                    }
                    if (*0x16aae == '\f') {
                        *0x16ab3 = *0x16ab3 | 0x40;
                    }
                    else {
                        *0x16ab3 = *0x16ab3 & 0xffbf;
                    }
                    *0x16ab3 = *0x16ab3 | 0x80;
                    *0x16ab5 = *(iStack_60 + 0x207 + *0x27d70);
                    *0x16abb = *(iStack_60 + 0x1e6 + *0x27d70) & 0xf;
                    *0x16ac0 = *(*0x27d70 + 6);
                    *0x16ac6 = *(*0x27d70 + 0x2c + *(*0x27d70 + 0xe) * 4);
                    *0x16acb = 0;
                    *0x16ac8 = 3;
                    *0x16ac9 = 8;
                    *0x16acc = *puStack_68;
                    *0x16a90 = arg1_01;
                    *0x16adc = arg3 << 0x14;
code_r0x0001146d:
                    uVar20 = *0x16ac9;
                    *0x16a98 = 0;
                    *0x16ad4 = 0;
                    *0x16ac2 = 0;
                    in_R8 = CONCAT71(arg3 >> 8,7);
                    *0x16ae4 = *0x16ad4;
                    *0x16aec = *0x16ad4;
                    iVar7 = fcn.000109c8(0x16aa0,0x16a68,in_R8,arg1);
                    if (iVar7 < 0) goto code_r0x000114dd;
                }
                else if ((1 << (uVar19 & 1) & *((uVar18 >> 1) + *(*(*0x27d58 + 0x38) + uStackX_18 * 8))) != 0) {
                    arg3 = CONCAT71(Var17,1);
                    *0x16a68 = fcn.00010da4(CONCAT71(Var10,uStackX_18),CONCAT71(*(*0x27d58 + 0x38) >> 8,uVar19),arg3
                                           );
                    if (*(*0x27d58 + 0x30) == NULL) {
code_r0x000113c7:
                        *0x16a70 = *((uVar18 >> 1) * 8 + 0x234f0);
                    }
                    else {
                        arg3 = CONCAT71(arg3 >> 8,uVar19);
                        *0x16a70 = (**(*0x27d58 + 0x30))(*0x27d58,uStackX_18,arg3,1);
                        if (*0x16a70 == 0) goto code_r0x000113c7;
                    }
                    *0x16ab5 = 0;
                    *0x16ab7 = 0;
                    *0x16ab9 = 0;
                    *0x16aa8 = 0;
                    *0x16ab3 = *0x16ab3 & 0xff3f;
                    *0x16acc = 0;
                    *0x16a78 = NULL;
                    *0x16a80 = NULL;
                    *0x16aac = 0;
                    *0x16a90 = NULL;
                    *0x16aae = '\x02';
                    *0x16ab2 = 2;
                    *0x16abb = 0;
                    *0x16abc = 0;
                    *0x16ac0 = *0x16aac;
                    *0x16ac6 = *0x16aac;
                    *0x16ac8 = *0x16abb;
                    *0x16ac9 = uVar20;
                    *0x16adc = 0;
                    goto code_r0x0001146d;
                }
                uVar18 = uVar19 + 1;
            } while (uVar19 + 1 < 8);
            uStackX_18 = uStackX_18 + 1;
        } while (uStackX_18 < 2);
code_r0x000114dd:
        (**(*0x27d40 + 0x48))(arg1_00);
    }
    return iVar7;
}


/* fcn.00010b30 @ 0x10b30 */

void fcn.00010b30(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int64_t iVar5;
    
    *0x16a3e = '\0';
    uVar3 = *(*0x27d70 + 0x10) * 0x400;
    iVar5 = 0;
    iVar2 = 2;
    do {
        uVar4 = 0;
        do {
            iVar1 = (uVar4 & 1) * 0x40 + (uVar4 >> 1) * 0x1c5 + iVar5;
            if ((*(iVar1 + 0x1ca + *0x27d70) == '\x02') && (*(iVar1 + 0x1cc + *0x27d70) != 0)) {
                *0x16a3e = *0x16a3e + '\x01';
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
        iVar5 = iVar5 + 0x719;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (uVar3 < 0x100000000) {
        *0x16a34 = CONCAT44(uVar3 - 1,*0x16a34);
    }
    else {
        *0x16a34 = 0xffffffffffffffff;
        *0x16a47 = uVar3 * 0x400 + -1;
    }
    *0x16a3c = *0x27d60;
    fcn.000109c8(0x16a30,0,0,arg1);
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
    
    //[00] -r-x section size 26208 named .text
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


/* fcn.000165fc @ 0x165fc */

ulong fcn.000165fc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.000165d0(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001666d;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x0001666d:
    cVar1 = *arg3;
    if (cVar1 != '\0') {
        arg3 = arg3 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg3);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.000109c8 @ 0x109c8 */

ulong fcn.000109c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t arg1_00;
    int64_t arg1_01;
    uint64_t uVar8;
    ushort *in_stack_00000028;
    
    uVar8 = *(arg1 + 1);
    if (arg2 != 0) {
        uVar3 = 0;
        if (arg3 != '\0') {
            do {
                pcVar2 = *(arg2 + uVar3 * 8);
                if (pcVar2 != NULL) {
                    iVar6 = 0;
                    cVar1 = *pcVar2;
                    while (cVar1 != '\0') {
                        iVar6 = iVar6 + 1;
                        cVar1 = pcVar2[iVar6];
                    }
                    uVar8 = uVar8 + 1 + iVar6;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < (arg3 & 0xffU));
        }
    }
    arg1_01 = (uVar8 == *(arg1 + 1)) + 1 + uVar8;
    iVar6 = fcn.000107a0(arg1_01);
    if (iVar6 == 0) {
        uVar4 = 0x8000000000000009;
    }
    else {
        if ((*(arg1 + 1) != 0) && (iVar6 != arg1)) {
            section..text(iVar6,arg1,*(arg1 + 1));
        }
        arg1_00 = *(arg1 + 1) + iVar6;
        if (arg2 != 0) {
            uVar8 = 0;
            if ((arg3 & 0xffU) != 0) {
                do {
                    iVar5 = *(arg2 + uVar8 * 8);
                    if (iVar5 != 0) {
                        fcn.000165fc(arg1_00,arg1_01 - *(arg1 + 1),iVar5);
                        pcVar2 = *(arg2 + uVar8 * 8);
                        iVar5 = 0;
                        cVar1 = *pcVar2;
                        while (cVar1 != '\0') {
                            iVar5 = iVar5 + 1;
                            cVar1 = pcVar2[iVar5];
                        }
                        iVar7 = 0;
                        arg1_00 = arg1_00 + 1 + iVar5;
                        cVar1 = *pcVar2;
                        while (cVar1 != '\0') {
                            iVar7 = iVar7 + 1;
                            cVar1 = pcVar2[iVar7];
                        }
                        arg1_01 = arg1_01 + (-1 - iVar7);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < (arg3 & 0xffU));
            }
        }
        *in_stack_00000028 = 0xfffe;
        uVar4 = (**arg4)(arg4,0,in_stack_00000028,iVar6);
        (**(*0x27d40 + 0x48))(iVar6);
    }
    return uVar4;
}


/* fcn.00010da4 @ 0x10da4 */

int64_t fcn.00010da4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if ((*(*0x27d58 + 0x28) != NULL) && (iVar1 = (**(*0x27d58 + 0x28))(*0x27d58,arg1,arg2,arg3), iVar1 != 0)) {
        return iVar1;
    }
    iVar1 = (arg2 & 0xffU) + (arg1 & 0xffU) * 8;
    if (arg3 == '\0') {
        iVar1 = *(iVar1 * 8 + 0x23590);
    }
    else {
        iVar1 = *(iVar1 * 8 + 0x23510);
    }
    return iVar1;
}


/* fcn.00015680 @ 0x15680 */

ulong fcn.00015680(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    char cStack_38;
    char acStack_37 [47];
    
    if (arg1 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        cStack_38 = '\0';
        pcVar8 = &cStack_38;
        do {
            pcVar8 = pcVar8 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = arg2;
            uVar4 = SUB168(auVar2 / ZEXT416(0x10),0);
            *pcVar8 = "0123456789ABCDEF"[arg2 % 0x10];
            arg2 = uVar4;
        } while (uVar4 != 0);
        iVar7 = pcVar8 - &cStack_38;
        pcVar5 = fcn.0001564c(arg1,arg1 + 2,(SUB164(auVar2 / ZEXT416(0x10),0) + 2) - iVar7,0x30);
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            cVar1 = *pcVar8;
            pcVar6 = pcVar5;
            do {
                if (arg1 + 2 <= pcVar6) break;
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 1;
            } while (pcVar6 - pcVar5 < 1);
            pcVar8 = pcVar8 + -1;
            pcVar5 = pcVar6;
        }
        pcVar8 = pcVar5;
        do {
            if (arg1 + 3 <= pcVar8) break;
            *pcVar8 = '\0';
            pcVar8 = pcVar8 + 1;
        } while (pcVar8 - pcVar5 < 1);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00016720 @ 0x16720 */

ulong fcn.00016720(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t arg2_00;
    char *pcVar3;
    uint64_t uVar4;
    
    pcVar3 = arg1;
    uVar4 = arg2;
    iVar1 = fcn.000165d0(arg1,arg2);
    arg2_00 = arg2 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < uVar4)) || (uVar4 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000165d0(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= pcVar3) {
        if (pcVar3 < arg3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < pcVar3) goto code_r0x000167b5;
    }
    if (arg3 < pcVar3 + uVar4) {
        return 0x800000000000000f;
    }
code_r0x000167b5:
    pcVar3 = pcVar3 + iVar1;
    for (; *arg3 != '\0'; arg3 = arg3 + 1) {
        *pcVar3 = *arg3;
        pcVar3 = pcVar3 + 1;
    }
    *pcVar3 = '\0';
    return 0;
}


/* fcn.00015624 @ 0x15624 */

void fcn.00015624(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00015758(noname_0,noname_1,0,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00015758 @ 0x15758 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00015758(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
    int64_t iVar10;
    int64_t iVar11;
    uint64_t *puVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    uint8_t *puVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    uint64_t uStack_d8;
    char *pcStack_d0;
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
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000157b6;
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
code_r0x000157b6:
    uVar17 = 1000000;
    uVar20 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar20;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar20 = fcn.000165d0(arg4,0xf4241);
        if (uVar17 < uVar20) {
            return 0;
        }
        uVar20 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.000165a4(arg4);
        if (uVar17 < uVar5) {
            return 0;
        }
        uStack_98 = 0xffff;
    }
    var_78h = uVar20;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d8 = 0;
    pcStack_d0 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d0 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar20 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d0 <= arg1)))) break;
        uStack_a0 = 0;
        uVar20 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar17 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar17;
        if (uStack_a8 == 10) {
            puVar21 = puStackX_20 + var_78h;
            pcVar8 = 0x2798c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar21[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar21) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar21 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar21[1] << 8;
            }
            uVar5 = iVar4 | *puVar21;
code_r0x00015b73:
            uStack_a8 = uVar5 & uStack_98;
            if ((uVar5 & uStack_98) == 10) {
                pcVar8 = 0x2798c;
            }
            else {
                pcVar8 = 0x27990;
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar12 = puStack_b0;
            puVar18 = in_stack_00000028;
            puVar21 = puStackX_20;
code_r0x0001590b:
            while( true ) {
                puStackX_20 = puVar21 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar17 = uVar17 | 0x800;
                    goto code_r0x00015aae;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar17 & 0x800) == 0) {
                        uVar17 = uVar17 | 0x20;
                        uStackX_18 = uVar17;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00015ac5;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar17 = uVar17 | 0x10;
                            goto code_r0x00015aae;
                        }
                        goto code_r0x00015ac5;
                    }
                }
                uVar20 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar20 = uStack_a8 + (uVar20 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar20;
                }
                puVar21 = puStackX_20 + -var_78h;
                uVar20 = uStack_c0;
                if ((uVar17 & 0x800) == 0) {
                    uVar17 = uVar17 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar17;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar17 = uVar17 | 1;
code_r0x00015aae:
                puVar21 = puStackX_20;
                uStackX_18 = uVar17;
                goto code_r0x0001590b;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar17 = uVar17 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar17 & 0x800) == 0) {
                            uVar17 = uVar17 | 0x200;
                            if (puVar12 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar12;
                                puVar12 = puVar12 + 1;
                                puStack_b0 = puVar12;
                            }
                            puVar21 = puStackX_20;
                            uStackX_18 = uVar17;
                        }
                        else {
                            if (puVar12 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar12;
                                puVar12 = puVar12 + 1;
                                puStack_b0 = puVar12;
                            }
                            puVar21 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x0001590b;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar17 = uVar17 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00015ac5;
                        uVar17 = uVar17 | 8;
                    }
                }
                goto code_r0x00015aae;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar21;
code_r0x00015ac5:
            puVar21 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar12 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.000164c8(&var_68h_2,0x26,0,0x27920);
                        pcVar8 = &var_68h_2;
                        uVar20 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar21 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar21[1] << 8;
                            }
                            uVar5 = iVar4 | *puVar21;
                            goto code_r0x00015b73;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00015d5b;
                        if (uStack_a8 == 0x58) goto code_r0x00015e51;
                        if (uStack_a8 == 0x61) goto code_r0x00015d64;
                        if (uStack_a8 == 99) {
                            if (puVar12 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar12;
                                puStack_b0 = puVar12 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x000158ec;
                        }
                        if (uStack_a8 != 100) goto code_r0x000158e8;
                        goto code_r0x00015e68;
                    }
                    puVar21 = puStackX_20 + var_78h;
                    pcVar8 = 0x2798c;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar21[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar21) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar21 = puStackX_20;
                    }
                }
                goto code_r0x00016095;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar12 == NULL) {
                        uVar5 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar5 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar5 < 0) {
                        if ((uVar5 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar5 & 0x7fffffffffffffff) * 0x15;
                            iVar11 = 0x27a2b;
                            goto code_r0x00015e18;
                        }
                    }
                    else if (uVar5 < 6) {
                        iVar11 = uVar5 * 0x19;
                        pcVar8 = "Success";
code_r0x00015e18:
                        pcVar8 = pcVar8 + iVar11;
                        if (pcVar8 != &var_68h_2) goto code_r0x00016095;
                    }
                    fcn.000164c8(&var_68h_2,0x26,0,0x27984);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00015d5b:
                        uVar17 = uVar17 | 0x400;
                        uStackX_18 = uVar17;
code_r0x00015d64:
                        if (puVar12 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            puStack_b0 = puVar12 + 1;
                            pcVar8 = *puVar12;
                        }
                        if (pcVar8 == NULL) {
                            uVar17 = uVar17 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar17;
                        }
                        uVar22 = uVar22 & -((uVar17 & 0x800) != 0);
                        goto code_r0x00016095;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000158e8;
                            goto code_r0x00015e55;
                        }
                        goto code_r0x00015e5a;
                    }
                    if (puVar12 == NULL) {
                        in_stack_00000028 = puVar18 + 1;
                        uVar5 = *puVar18;
                    }
                    else {
                        uVar5 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    if (uVar5 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00016095;
                    }
                    fcn.000164c8(&var_68h_2,0x26,0,0x27968);
                    pcVar8 = &var_68h_2;
                }
                uVar20 = uStack_c0;
                goto code_r0x00016095;
            }
            uVar17 = uVar17 & 0xffffffffffffffd9 | 0x10;
code_r0x00015e51:
            uVar17 = uVar17 | 0x20;
code_r0x00015e55:
            uVar17 = uVar17 | 0x80;
code_r0x00015e5a:
            if (-1 < uVar17) {
                uVar17 = uVar17 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00015e68:
            if ((uVar17 & 0x10) == 0) {
                if (puVar12 != NULL) {
                    uVar20 = *puVar12;
                    goto code_r0x00015eaa;
                }
                uVar20 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar12 == NULL) {
                uVar20 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar20 = *puVar12;
code_r0x00015eaa:
                puStack_b0 = puVar12 + 1;
            }
            cVar3 = (uVar17 & 4) << 3;
            if ((uVar17 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar17 & 8) != 0;
            if (uVar17 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar17 & 0x10) == 0) && (uVar2 = 0x10, uVar20 < 0)) {
code_r0x00015f32:
                    uVar16 = uVar2;
                    uVar20 = uVar20 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar17 & 8) != 0) {
                    uVar17 = uVar17 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar20 < 0) && (uVar17 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar20 = -uVar20;
                }
                else {
                    uVar2 = 10;
                    if ((uVar17 & 0x4010) == 0x4000) goto code_r0x00015f32;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar5 = uVar20;
            do {
                uVar6 = uVar5 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF"[uVar5 % uVar16];
                uVar5 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar20 == 0) {
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
            uVar17 = uVar17 | 0x1000;
            cVar13 = '\x01';
            uVar20 = uStack_c0;
            uStackX_18 = uVar17;
            if ((uVar17 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x000158e8:
            pcVar8 = &uStack_a8;
code_r0x000158ec:
            uVar17 = uVar17 | 0x400;
            uStackX_18 = uVar17;
            puVar21 = puStackX_20;
        }
code_r0x00016095:
        puStackX_20 = puVar21;
        uVar16 = uVar17;
        iVar11 = ((uVar17 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar17 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar17 >> 0xc & 1) == 0) {
            uVar20 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar17 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar20 < uVar22 || ((uVar17 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar20 = uVar20 + 1;
                pcVar15 = pcVar15 + iVar11;
            }
            uStack_c0 = uVar20;
        }
        else {
            iVar11 = -iVar11;
        }
        if (uVar22 < uVar20) {
            uVar22 = uVar20;
        }
        uVar5 = uVar16 & 0x201;
        var_40h = uVar5;
        pcVar15 = pcStack_d0;
        if (uVar5 == 0x200) {
            uStack_d8 = uStack_d8 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001564c(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001564c(arg1,pcVar15,uVar22 - uVar20,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d8 = uStack_d8 + uVar6, (uVar17 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d0 <= arg1) break;
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
            if (((cVar3 != '\0') && (uStack_d8 = uStack_d8 + uVar14, (uVar17 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d0 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001564c(arg1,pcStack_d0,uVar22 - uVar20,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar17;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar20 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar11 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d8 = uStack_d8 + uVar6;
                uVar5 = *pcVar8 & _cStack0000000000000030;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar10 = 0;
                    do {
                        if (pcStack_d0 <= arg1) break;
                        *arg1 = uVar5;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar5 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar10 = iVar10 + 1;
                    } while (iVar10 < 1);
                }
                pcVar8 = pcVar8 + iVar11;
                uVar5 = uVar20 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar10 = 0;
                    uVar5 = uVar20 + 2;
                    if (uStack_c0 <= uVar5) break;
                    uStack_d8 = uStack_d8 + uVar6;
                    iVar9 = iVar10;
                    if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar10;
                            if (pcStack_d0 <= arg1) break;
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
                uVar20 = uVar5;
            } while (uVar5 < uStack_c0);
            arg3 = uStackX_18;
            uVar5 = var_40h;
        }
        if (uVar5 == 0x201) {
            uStack_d8 = uStack_d8 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001564c(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
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
    }
    iVar11 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d8 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d0 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar11 = iVar11 + 1;
    } while (iVar11 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.000167f4 @ 0x167f4 */

void fcn.000167f4(void)

{
    bool bVar1;
    uint32_t uVar2;
    ulong noname_2;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    
    uVar2 = 0;
    do {
        if ((*0xfe0010b0 & 1) == 0) break;
        bVar1 = uVar2 < 0x1000001;
        uVar2 = uVar2 + 1;
    } while (bVar1);
    *0xfe001030 = 1;
    uVar2 = 0;
    do {
        if ((*0xfe0010b0 & 1) == 0) break;
        bVar1 = uVar2 < 0x1000001;
        uVar2 = uVar2 + 1;
    } while (bVar1);
    auStackX_10[0] = 0;
    auStackX_8[0] = 1;
    noname_2 = 2;
    (***0x27d50)(*0x27d50,0xe,2,0xfe0010b0,auStackX_10,auStackX_8,0xa000000);
    fcn.00010898(2,0xfe001030,noname_2,0xfe001030);
    (***0x27d50)(*0x27d50,0xe,2,0xfe0010b0,auStackX_10,auStackX_8,0xa000000);
    return;
}


/* fcn.00010898 @ 0x10898 */

void fcn.00010898(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    (***0x27d50)(*0x27d50,2,arg1 & 0xffffffff,arg2,1,arg3);
    return;
}


/* fcn.00016690 @ 0x16690 */

ulong fcn.00016690(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = 9;
    uVar1 = fcn.000165d0(arg2,9);
    if (uVar2 < uVar1) {
        uVar1 = uVar2;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + uVar1 + 1) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x000166f6;
    }
    if (arg2 < arg1 + 0x40) {
        return 0x800000000000000f;
    }
code_r0x000166f6:
    if (uVar1 != 0) {
        arg2 = arg2 - arg1;
        do {
            if (*(arg1 + arg2) == '\0') break;
            *arg1 = *(arg1 + arg2);
            arg1 = arg1 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.0001654c @ 0x1654c */

int64_t fcn.0001654c(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.000117a8 @ 0x117a8 */

void fcn.000117a8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char16_t cVar2;
    int16_t iVar3;
    bool bVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    char16_t *pcVar10;
    int16_t *piVar11;
    ulong noname_1;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t unaff_RBP;
    int64_t unaff_RSI;
    int16_t *piVar14;
    ulong in_R8;
    int64_t iStackX_20;
    ulong *puStack_78;
    int16_t *piStack_70;
    int64_t iStack_68;
    char16_t acStack_60 [8];
    char16_t acStack_50 [4];
    char16_t acStack_48 [6];
    char16_t acStack_3c [2];
    char16_t acStack_38 [4];
    ulong uStack_30;
    
    uStack_30 = 0x117ce;
    iVar7 = fcn.0001084c(0x169e0);
    uStack_30 = 0x117dd;
    iVar8 = fcn.0001084c(0x169b0);
    *(arg1 + 0x13) = *(iVar8 + 0x2d) & 0xff;
    if (((*(iVar8 + 0x2d) & 0x10000) == 0) || ((*(iVar7 + 0x30) & 1) == 0)) {
        uVar5 = *(iVar8 + 0x2d) & 0xff;
    }
    else {
        uStack_30 = 0x11804;
        fcn.000167f4();
        uVar5 = *(iVar8 + 0x2e);
    }
    *(arg1 + 0x1a) = uVar5;
    noname_1 = 0xfe001030;
    *0xfe001030 = *0xfe001030 | 0x80000000;
    uStack_30 = 0x11836;
    fcn.00010898(2,0xfe001030,in_R8,0xfe001030);
    if (1 < *(arg1 + 8)) {
        pcVar9 = *arg2;
        uVar12 = *(arg1 + 8) - 1;
        do {
            iVar7 = 0;
            cVar1 = *pcVar9;
            while (cVar1 != '\0') {
                iVar7 = iVar7 + 1;
                cVar1 = pcVar9[iVar7];
            }
            pcVar9 = pcVar9 + iVar7 + 1;
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        *arg2 = pcVar9;
        noname_1 = 0;
    }
    pcVar9 = "Enabled ";
    if (*(arg1 + 0x13) == *(arg1 + 0x1a)) {
        pcVar9 = "Disabled";
    }
    uStack_30 = 0x11884;
    fcn.00016690(*arg2,noname_1,pcVar9);
    acStack_50[0] = str.Intel_RST[8];
    acStack_50[1] = str.Intel_RST[9];
    uVar12 = 0;
    uStack_30 = CONCAT62(uStack_30._2_6_,str.Intel_R__RST[0xc]);
    acStack_38[0] = str.Intel_R__RST[8];
    acStack_38[1] = str.Intel_R__RST[9];
    acStack_38[2] = str.Intel_R__RST[10];
    acStack_38[3] = str.Intel_R__RST[0xb];
    bVar4 = false;
    acStack_60[0] = str.Intel_RST[0];
    acStack_60[1] = str.Intel_RST[1];
    acStack_60[2] = str.Intel_RST[2];
    acStack_60[3] = str.Intel_RST[3];
    acStack_60[4] = str.Intel_RST[4];
    acStack_60[5] = str.Intel_RST[5];
    acStack_60[6] = str.Intel_RST[6];
    acStack_60[7] = str.Intel_RST[7];
    acStack_48[0] = str.Intel_R__RST[0];
    acStack_48[1] = str.Intel_R__RST[1];
    acStack_48[2] = str.Intel_R__RST[2];
    acStack_48[3] = str.Intel_R__RST[3];
    acStack_48[4] = str.Intel_R__RST[4];
    acStack_48[5] = str.Intel_R__RST[5];
    acStack_3c[0] = str.Intel_R__RST[6];
    acStack_3c[1] = str.Intel_R__RST[7];
    iVar7 = (**(*0x27d40 + 0x138))(2,0x16930,0,&stack0x00000010,&stack0x00000018);
    if ((-1 < iVar7) && (uVar13 = uVar12, unaff_RBP != 0)) {
        do {
            iVar7 = (**(*0x27d40 + 0x98))(*(unaff_RSI + uVar13 * 8),0x16930,&stack0x00000020);
            if (((-1 < iVar7) &&
                (((piVar14 = *(iStackX_20 + 0x98), piVar14 != NULL && (uVar5 = piVar14[0xc], *piVar14 == -0x55ab)) &&
                 (*(piVar14 + uVar5 + 0xd) == '\0')))) &&
               ((*(piVar14 + uVar5 + 0xe) == '\x04' && (*(piVar14 + uVar5 + 0xf) == '\x01')))) {
                bVar4 = true;
                *(arg1 + 0x1e) = *(piVar14 + uVar5 + 0x13);
                *(arg1 + 0x1f) = *(piVar14 + uVar5 + 0x12);
                *(arg1 + 0x20) = 0;
                *(arg1 + 0x21) = 0;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < unaff_RBP);
        if (bVar4) {
            return;
        }
    }
    iVar7 = (**(*0x27d40 + 0x138))(2,0x168e0,0,&stack0x00000010,&stack0x00000018);
    if ((-1 < iVar7) && (uVar13 = uVar12, unaff_RBP != 0)) {
        do {
            iVar7 = (**(*0x27d40 + 0x98))(*(unaff_RSI + uVar13 * 8),0x168f0,&stack0xffffffffffffff88);
            if ((-1 < iVar7) && (iVar7 = (**puStack_78)(puStack_78,"en-US",&stack0xffffffffffffff90), -1 < iVar7)) {
                pcVar10 = &stack0xffffffffffffffa0;
                uVar6 = uVar12;
                cVar2 = acStack_60[0];
                while (cVar2 != L'\0') {
                    pcVar10 = pcVar10 + 1;
                    uVar6 = uVar6 + 1;
                    cVar2 = *pcVar10;
                }
                piVar14 = &stack0xffffffffffffffa0;
                if (uVar6 != 0) {
                    iVar3 = *piStack_70;
                    piVar11 = piStack_70;
                    for (; (((iVar3 != 0 && (*piVar14 != 0)) && (*piVar11 == *piVar14)) && (1 < uVar6));
                        uVar6 = uVar6 - 1) {
                        piVar11 = piVar11 + 1;
                        piVar14 = piVar14 + 1;
                        iVar3 = *piVar11;
                    }
                    if (*piVar11 != *piVar14) {
                        pcVar10 = &stack0xffffffffffffffb8;
                        uVar6 = uVar12;
                        cVar2 = acStack_48[0];
                        while (cVar2 != L'\0') {
                            pcVar10 = pcVar10 + 1;
                            uVar6 = uVar6 + 1;
                            cVar2 = *pcVar10;
                        }
                        piVar14 = &stack0xffffffffffffffb8;
                        piVar11 = piStack_70;
                        if (uVar6 != 0) {
                            for (; ((*piVar11 != 0 && (*piVar14 != 0)) && ((*piVar11 == *piVar14 && (1 < uVar6))));
                                uVar6 = uVar6 - 1) {
                                piVar14 = piVar14 + 1;
                                piVar11 = piVar11 + 1;
                            }
                            if (*piVar11 != *piVar14) goto code_r0x0001178b;
                        }
                    }
                }
                (**(*0x27d40 + 0x98))(*(unaff_RSI + uVar13 * 8),0x168e0,&stack0xffffffffffffff98);
                *(arg1 + 0x1e) = *(iStack_68 + 6);
                *(arg1 + 0x1f) = *(iStack_68 + 4);
                *(arg1 + 0x20) = 0;
                *(arg1 + 0x21) = 0;
            }
code_r0x0001178b:
            uVar13 = uVar13 + 1;
        } while (uVar13 < unaff_RBP);
    }
    return;
}


/* fcn.000164ec @ 0x164ec */

int64_t fcn.000164ec(void)

{
    if (*0x27d78 == 0) {
        (**(*0x27d40 + 0x140))(0x16970,0,0x27d78);
    }
    return *0x27d78;
}


/* fcn.00011f44 @ 0x11f44 */

uint32_t fcn.00011f44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = 0;
    iVar3 = 0;
    do {
        uVar1 = (**(arg1 + 0x38))((1 << (arg3 >> 0x18 & 7) | (arg3 & 0xffffffffU) >> 6 & 0x3fff) & arg2 & 0xffffffffU,
                                  iVar3);
        uVar2 = uVar2 ^ uVar1;
        iVar3 = iVar3 + 1;
    } while (iVar3 < 0xe);
    return uVar2 & 1;
}


/* fcn.00011fb0 @ 0x11fb0 */

uint32_t fcn.00011fb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = arg3 >> 0x18 & 7;
    uVar2 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar3 + 1);
    uVar1 = (**(arg1 + 0x38))(uVar2 & arg2,1);
    uVar3 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar3);
    return ~uVar3 & arg2 | uVar1;
}


/* fcn.00011aec @ 0x11aec */

int fcn.00011aec(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    bool bVar5;
    int in_stack_00000028;
    int in_stack_00000030;
    char in_stack_00000038;
    char in_stack_00000040;
    char in_stack_00000048;
    uint32_t in_stack_00000050;
    
    iVar1 = arg1;
    if (iVar1 == 0) {
        if (in_stack_00000038 == '\0') {
            if (arg4 == 2) {
                bVar5 = in_stack_00000030 == 8;
                iVar4 = 0xe;
                iVar1 = 0x18;
                goto code_r0x00011f2e;
            }
            if (arg4 == 3) {
                if (in_stack_00000028 == 2) {
                    if (in_stack_00000030 != 0x10) {
                        return (-(in_stack_00000048 != '\0') & 10) + 0x10;
                    }
                    uVar2 = -(in_stack_00000048 != '\0') & 6;
                    goto code_r0x00011e92;
                }
                if (in_stack_00000030 == 0x10) {
                    uVar2 = -(in_stack_00000048 != '\0') & 7;
                    goto code_r0x00011eb2;
                }
                uVar2 = -(in_stack_00000048 != '\0') & 0xd;
                goto code_r0x00011e52;
            }
            if (arg4 != 4) {
                return 0;
            }
            bVar5 = in_stack_00000030 == 8;
            iVar4 = 0x15;
            iVar1 = 0x19;
        }
        else {
            if (in_stack_00000030 != 8) {
                if (arg3 == 1) {
                    if (arg4 == 1) {
                        return 0x13;
                    }
                    if (arg4 != 2) {
                        return 0;
                    }
                    return 0x15;
                }
                if (arg3 != 2) {
                    return 0;
                }
                if (arg4 == 2) {
                    uVar2 = in_stack_00000048 != '\0';
code_r0x00011eb2:
                    return uVar2 + 0x13;
                }
                if (arg4 != 3) {
                    if (arg4 != 4) {
                        return 0;
                    }
                    uVar2 = in_stack_00000048 != '\0';
code_r0x00011e92:
                    return uVar2 + 0x15;
                }
                bVar5 = in_stack_00000028 == 2;
                iVar4 = 0x15;
                iVar1 = 0x17;
code_r0x00011f2e:
                iVar3 = 0x13;
                if (bVar5) {
                    iVar3 = iVar4;
                }
                if (in_stack_00000048 != '\0') {
                    iVar3 = iVar1;
                }
                return iVar3;
            }
            if (arg3 == 1) {
                if (arg4 == 1) {
                    return 0xe;
                }
                if (arg4 != 2) {
                    return 0;
                }
                return 0x10;
            }
            if (arg3 != 2) {
                return 0;
            }
            if (arg4 == 2) {
                uVar2 = in_stack_00000048 != '\0';
code_r0x00011e52:
                return uVar2 + 0xe;
            }
            if (arg4 != 3) {
                if (arg4 != 4) {
                    return 0;
                }
                return (in_stack_00000048 != '\0') + 0x10;
            }
            bVar5 = in_stack_00000028 == 2;
            iVar4 = 0xe;
            iVar1 = 0x12;
        }
        if (bVar5) {
            iVar4 = 0x10;
        }
        if (in_stack_00000048 != '\0') {
            iVar4 = iVar1;
        }
        return iVar4;
    }
    if (iVar1 != 1) {
        if (iVar1 == 2) {
            if (arg3 != 1) {
                if (arg3 != 2) {
                    return 0;
                }
                if (arg4 != 2) {
                    if (arg4 != 4) {
                        return 0;
                    }
                    return (-((in_stack_00000050 & 0xfffffffd) != 0) & 0xfffffff8) + 0x32;
                }
                return (-((in_stack_00000050 & 0xfffffffd) != 0) & 0xfffffff8) + 0x31;
            }
            if (arg4 == 1) {
                return (-((in_stack_00000050 & 0xfffffffd) != 0) & 0xfffffffc) + 0x2f;
            }
            if (arg4 != 2) {
                return 0;
            }
            return (-((in_stack_00000050 & 0xfffffffd) != 0) & 0xfffffffc) + 0x30;
        }
        if (iVar1 != 3) {
            return 0;
        }
        if (arg2 == 0x20) {
            if (arg3 == 1) {
                if (arg4 == 1) {
                    return 0x37;
                }
                if (arg4 != 2) {
                    if ((arg4 != 3) && (arg4 != 4)) {
                        return 0;
                    }
                    return 0x4a;
                }
                return 0x38;
            }
            if (arg3 != 2) {
                return 0;
            }
            if (arg4 == 2) {
                return (-(in_stack_00000048 != '\0') & 2) + 0x37;
            }
            if (arg4 == 4) {
                return (-(in_stack_00000048 != '\0') & 2) + 0x38;
            }
            if ((arg4 != 6) && (arg4 != 8)) {
                return 0;
            }
            return (in_stack_00000048 != '\0') + 0x4a;
        }
        if (arg2 != 0x10) {
            return 0;
        }
        if (arg3 == 1) {
            if (arg4 == 1) {
                return 0x3d;
            }
            if (arg4 != 2) {
                return 0;
            }
            return 0x3e;
        }
        if (arg3 != 2) {
            return 0;
        }
        if (arg4 == 2) {
            return 0x3b;
        }
        if (arg4 == 4) {
            return 0x3c;
        }
        if (arg4 != 8) {
            return 0;
        }
        return 0x49;
    }
    if (in_stack_00000030 != 8) {
        if (in_stack_00000030 != 0x10) {
            return 0;
        }
        if (arg3 == 2) {
            if (arg4 == 3) {
                arg4 = in_stack_00000028 * 2;
                goto code_r0x00011d3c;
            }
        }
        else {
code_r0x00011d3c:
            if (arg3 == 1) {
                if (arg4 == 1) {
                    return (-(in_stack_00000040 != '\0') & 0xfffffff6) + 0x2aaa;
                }
                if (arg4 != 2) {
                    return 0;
                }
                return (-(in_stack_00000040 != '\0') & 0xfffffff6) + 0x2abe;
            }
        }
        if (arg4 == 2) {
            iVar4 = (-(in_stack_00000048 != '\0') & 0x50) + 0x2aa0;
            iVar1 = (-(in_stack_00000048 != '\0') & 0x1e) + 0x2aaa;
        }
        else {
            if (arg4 != 4) {
                return 0;
            }
            iVar4 = (-(in_stack_00000048 != '\0') & 0x50) + 0x2ab4;
            iVar1 = (-(in_stack_00000048 != '\0') & 0x1e) + 0x2abe;
        }
        goto code_r0x00011d10;
    }
    if (arg3 == 2) {
        if (arg4 == 3) {
            arg4 = in_stack_00000028 * 2;
            goto code_r0x00011c8a;
        }
    }
    else {
code_r0x00011c8a:
        if (arg3 == 1) {
            if (arg4 == 1) {
                return (-(in_stack_00000040 != '\0') & 0xfffffff6) + 0x2aa9;
            }
            if (arg4 != 2) {
                return 0;
            }
            return (-(in_stack_00000040 != '\0') & 0xfffffff6) + 0x2abd;
        }
    }
    if (arg4 == 2) {
        iVar4 = (-(in_stack_00000048 != '\0') & 0x50) + 0x2a9f;
        iVar1 = (-(in_stack_00000048 != '\0') & 0x1e) + 0x2aa9;
    }
    else {
        if (arg4 != 4) {
            return 0;
        }
        iVar4 = (-(in_stack_00000048 != '\0') & 0x50) + 0x2ab3;
        iVar1 = (-(in_stack_00000048 != '\0') & 0x1e) + 0x2abd;
    }
code_r0x00011d10:
    if (in_stack_00000040 != '\0') {
        iVar1 = iVar4;
    }
    return iVar1;
}


/* fcn.000119ec @ 0x119ec */

void fcn.000119ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    
    piVar3 = 0x24220;
    uVar2 = 0;
    do {
        iVar1 = arg3;
        if (arg4 == '\0') {
            if (iVar1 < 0x2711) {
                if (iVar1 <= *piVar3) {
                    iVar1 = iVar1 + 1;
code_r0x00011a38:
                    if (*piVar3 < iVar1) break;
                }
            }
            else if (iVar1 <= *piVar3) {
                iVar1 = iVar1 + 10;
                goto code_r0x00011a38;
            }
        }
        else if (*piVar3 == iVar1) break;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0x27;
    } while (uVar2 < 0x59);
    //WARNING: Could not recover jumptable at 0x00011a6b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x20))(arg2,uVar2 * 0x9c + 0x24220,0x9c);
    return;
}


/* fcn.00011a70 @ 0x11a70 */

void fcn.00011a70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int16_t *piVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    piVar3 = 0x23b20;
    do {
        iVar1 = arg3;
        if (arg4 == '\0') {
            iVar2 = *piVar3;
            if (iVar1 < 0x2711) {
                if (iVar1 <= iVar2) {
                    iVar1 = iVar1 + 1;
code_r0x00011aba:
                    if (iVar2 < iVar1) break;
                }
            }
            else if (iVar1 <= iVar2) {
                iVar1 = iVar1 + 10;
                goto code_r0x00011aba;
            }
        }
        else if (*piVar3 == iVar1) break;
        uVar4 = uVar5 + 1;
        uVar5 = uVar4;
        piVar3 = piVar3 + 10;
    } while (uVar4 < 0x59);
    //WARNING: Could not recover jumptable at 0x00011ae6. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x20))(arg2,uVar5 * 0x14 + 0x23b20,0x14);
    return;
}


/* fcn.00012014 @ 0x12014 */

void fcn.00012014(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    int in_stack_00000038;
    
    if (in_stack_00000038 == 0) {
        iVar2 = 0x23ae0 - in_stack_00000030;
        iVar3 = 4;
        do {
            if (*(in_stack_00000030 + iVar2) != 0) {
                uVar1 = (**(arg1 + 0x38))(arg3);
                *in_stack_00000030 = uVar1 & 1;
                in_stack_00000028[arg4 & 0xffffffff] = in_stack_00000028[arg4 & 0xffffffff] ^ uVar1 & 1;
            }
            in_stack_00000030 = in_stack_00000030 + 1;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    else if (in_stack_00000038 == 2) {
        iVar2 = 0x23ae0 - in_stack_00000030;
        iVar3 = 4;
        do {
            if (*(iVar2 + in_stack_00000030) != 0) {
                uVar1 = (**(arg1 + 0x38))(arg3);
                *in_stack_00000030 = uVar1 & 1;
                *in_stack_00000028 = *in_stack_00000028 ^ uVar1 & 1;
            }
            in_stack_00000030 = in_stack_00000030 + 1;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    else if (in_stack_00000038 == 3) {
        iVar2 = 4;
        iVar3 = (arg2 & 0xffffffffU) * 0x10 - in_stack_00000030;
        do {
            if (*(iVar3 + 0x23ac0 + in_stack_00000030) != 0) {
                uVar1 = (**(arg1 + 0x38))(arg3);
                *in_stack_00000030 = uVar1 & 1;
                in_stack_00000028[arg2 & 0xffffffffU] = in_stack_00000028[arg2 & 0xffffffffU] ^ uVar1 & 1;
            }
            in_stack_00000030 = in_stack_00000030 + 1;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
    }
    return;
}


/* fcn.00012138 @ 0x12138 */

uint8_t fcn.00012138(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    
    uVar4 = arg4;
    if (arg2 == 0) {
        uVar1 = (**(arg1 + 0x38))(arg3,0x11);
        uVar3 = 0xe;
    }
    else {
        if (arg2 != 1) {
            uVar1 = (**(arg1 + 0x38))(arg3,*((arg2 & 0xffffffffU) * 0x10 + 0x23af0));
            return uVar1 & *((arg2 & 0xffffffffU) * 0x10 + 0x23af0) != 0 & uVar4 < 2;
        }
        uVar1 = (**(arg1 + 0x38))(arg3,0x10);
        uVar3 = 0xd;
        uVar1 = uVar1 & uVar4 < 2;
    }
    uVar2 = (**(arg1 + 0x38))(arg3,uVar3);
    return uVar2 & uVar4 == 0 ^ uVar1 & 1;
}


/* fcn.00016530 @ 0x16530 */

uint64_t fcn.00016530(int64_t arg1,int64_t arg2)

{
    out(arg1,arg2);
    return arg2 & 0xffffffff;
}


/* fcn.00016528 @ 0x16528 */

uint fcn.00016528(int64_t arg1)

{
    uint uVar1;
    
    uVar1 = in(arg1);
    return uVar1;
}


/* fcn.00016538 @ 0x16538 */

uint fcn.00016538(int64_t arg1)

{
    return *arg1;
}


/* fcn.000167d8 @ 0x167d8 */

int64_t fcn.000167d8(int64_t arg1,int64_t arg2)

{
    return arg1 << (arg2 & 0x3f);
}


/* fcn.0001653c @ 0x1653c */

ulong fcn.0001653c(int64_t arg1)

{
    return *arg1;
}


/* fcn.0001371c @ 0x1371c */

ulong fcn.0001371c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint64_t in_stack_00000038;
    uint64_t in_stack_00000040;
    uint64_t in_stack_00000048;
    uint32_t *in_stack_00000058;
    uint64_t *in_stack_00000060;
    
    uVar6 = (in_stack_00000040 - in_stack_00000038) + 1;
    iVar3 = arg2;
    if ((uVar6 & -(in_stack_00000038 < in_stack_00000040)) == 0) goto code_r0x000137ad;
    uVar2 = in_stack_00000030;
    if ((arg2 < in_stack_00000038) || (in_stack_00000040 < arg2)) {
        if ((arg2 < uVar2) || ((-(in_stack_00000038 < in_stack_00000040) & uVar6) + uVar2 <= arg2))
        goto code_r0x0001378a;
        *arg3 = 0;
        iVar3 = 0;
    }
    else {
        iVar3 = (uVar2 - in_stack_00000038) + arg2;
code_r0x0001378a:
        if (iVar3 != 0) goto code_r0x000137ad;
    }
    if (arg2 != 0) {
        return 0;
    }
code_r0x000137ad:
    uVar6 = (**(arg1 + 0x38))(iVar3,6);
    if (in_stack_00000048 <= uVar6) {
        return 0;
    }
    uVar5 = arg4;
    if (((arg4 & 0xffffffffU) >> 8 & 1) == 0) {
        uVar4 = (**(arg1 + 0x30))(uVar5 & 0xff000,0xb);
        uVar2 = (**(arg1 + 0x30))(uVar4,1);
        if (uVar6 < uVar2) {
            if ((in_stack_00000028 >> 0x1c & 1) == 0) {
                uVar1 = uVar6 & 1;
                uVar6 = (**(arg1 + 0x38))(uVar6,1);
            }
            else {
                uVar1 = fcn.00011f44(arg1,uVar6,in_stack_00000028);
                uVar7 = fcn.00011fb0(arg1,uVar6,in_stack_00000028);
                uVar6 = uVar7;
            }
        }
        else {
            uVar1 = 0;
            iVar3 = (**(arg1 + 0x30))(uVar5 & 0xff000,0xb);
            uVar6 = uVar6 - iVar3;
        }
    }
    else {
        uVar7 = uVar5 >> 0x18 & 7;
        uVar2 = (**(arg1 + 0x30))(0x1000000,uVar7);
        uVar1 = uVar2 <= uVar6 ^ 1;
        if ((arg4 >> 9 & 1) == 0) {
            uVar1 = uVar2 <= uVar6;
        }
        uVar2 = (**(arg1 + 0x30))(0x1000000,uVar7);
        if (uVar2 <= uVar6) {
            iVar3 = (**(arg1 + 0x30))(0x1000000,uVar7);
            uVar6 = uVar6 - iVar3;
        }
        uVar6 = uVar6 & 0xffffffff;
    }
    *in_stack_00000058 = uVar5 >> 4 & 1 ^ uVar1;
    uVar6 = (**(arg1 + 0x30))(uVar6,6);
    *in_stack_00000060 = uVar6 | arg2 & 0x3f;
    return 1;
}


/* fcn.000121f0 @ 0x121f0 */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.000121f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    ulong uVar18;
    uint8_t uVar19;
    uint32_t uVar20;
    int iVar21;
    uint64_t uVar22;
    uint32_t *puVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    int iVar26;
    int *piVar27;
    uint64_t uVar28;
    int *piVar29;
    char cVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    int64_t var_8h;
    int64_t var_bp_10h;
    int64_t iStackX_18;
    int64_t var_28h_2;
    uint32_t uStack0000000000000028;
    int64_t var_38h;
    uint32_t in_stack_00000038;
    int64_t var_48h;
    int32_t var_50h_2;
    int32_t var_5ch;
    uint32_t in_stack_00000058;
    uint32_t uStack0000000000000060;
    int32_t var_6ch;
    int64_t var_70h;
    uint32_t in_stack_00000070;
    uint32_t *in_stack_00000078;
    int32_t var_88h;
    uint32_t *in_stack_00000088;
    uint32_t *in_stack_00000090;
    int64_t var_a0h;
    uint32_t *in_stack_000000a0;
    int *in_stack_000000a8;
    uint32_t *in_stack_000000b0;
    int64_t var_d0h;
    int32_t var_f8h;
    int64_t var_100h;
    int32_t var_108h;
    int32_t var_10ch;
    int32_t var_118h;
    int64_t var_124h;
    int64_t var_16ch;
    int64_t var_1a0h;
    int64_t var_1f0h;
    uint32_t var_280h;
    int32_t var_298h;
    int64_t iStack_320;
    int64_t iStack_310;
    uint32_t uStack_300;
    uint32_t auStack_2f0 [4];
    uint32_t auStack_2e0 [4];
    uint32_t uStack_2d0;
    uint32_t uStack_2c8;
    uint32_t uStack_2c4;
    uint32_t uStack_2c0;
    uint32_t uStack_2bc;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    int iStack_2a0;
    int iStack_29c;
    int iStack_298;
    uint32_t uStack_294;
    uint32_t auStack_290 [6];
    uint64_t uStack_278;
    int aiStack_270 [2];
    uint32_t auStack_268 [6];
    int aiStack_250 [4];
    int aiStack_240 [4];
    uchar auStack_230 [4];
    int iStack_22c;
    int iStack_228;
    int aiStack_224 [7];
    int aiStack_208 [6];
    uint uStack_1f0;
    int aiStack_1e4 [15];
    int aiStack_1a8 [10];
    int iStack_180;
    uchar auStack_178 [4];
    int iStack_174;
    int iStack_170;
    int aiStack_16c [24];
    int aiStack_10c [13];
    uint32_t auStack_d8 [20];
    int32_t var_80h;
    int32_t var_bp_7ch;
    int64_t var_bp_78h;
    int64_t var_68h;
    int32_t var_58h;
    int64_t var_50h;
    int32_t var_48h_2;
    int32_t var_44h;
    int64_t var_38h_2;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_18h;
    int32_t var_ch;
    
    var_bp_10h._0_4_ = 0;
    uStack_300 = 0;
    iStackX_18 = arg3;
    (**(arg1 + 0x28))(auStack_290,8,0);
    (**(arg1 + 0x28))(auStack_268,8,0);
    (**(arg1 + 0x28))(auStack_178,0x9c,0);
    (**(arg1 + 0x28))(auStack_230,0x28,0);
    (**(arg1 + 0x28))(&iStack_2a0,4,0);
    (**(arg1 + 0x28))(aiStack_270,4,0);
    (**(arg1 + 0x28))(auStack_290 + 2,0xc,0);
    (**(arg1 + 0x28))(auStack_268 + 2,0xc,0);
    (**(arg1 + 0x28))(&var_80h,0x48,0);
    (**(arg1 + 0x28))(aiStack_208,0x30,0);
    (**(arg1 + 0x28))(&iStack_29c,4,0);
    (**(arg1 + 0x28))(&iStack_298,4,0);
    (**(arg1 + 0x28))(aiStack_240,0xc,0);
    (**(arg1 + 0x28))(aiStack_250,0xc,0);
    (**(arg1 + 0x28))(aiStack_1a8,0x30,0);
    (**(arg1 + 0x28))(&stack0x00000070,4,0);
    (**(arg1 + 0x28))(&iStackX_18,4,0);
    (**(arg1 + 0x28))(auStack_2f0,0xc,0);
    (**(arg1 + 0x28))(auStack_2e0,0xc,0);
    (**(arg1 + 0x28))(auStack_d8,0x48,0);
    (**(arg1 + 0x28))(aiStack_1e4 + 3,0x30,0);
    (**(arg1 + 0x28))(&uStack_2c8,0x18,0);
    uVar24 = var_48h & 7;
    uVar3 = ((var_48h >> 0x1b & 3) + 1) * 0x10;
    var_28h_2._0_4_ = uVar24;
    uVar4 = (**(arg1 + 0x38))(var_70h,0x2f);
    uStack_2b0 = uVar4 & 3;
    iVar11 = (**(arg1 + 0x30))(var_48h & 0xff000,0xb);
    uVar4 = auStack_290[var_48h >> 4 & 1];
    uVar12 = (**(arg1 + 0x30))(uVar4 & 0x7f,0x17);
    (**(arg1 + 0x30))(uVar12,6);
    uVar12 = (**(arg1 + 0x30))(uVar4 & 0x7f0000,7);
    (**(arg1 + 0x30))(uVar12,6);
    (**(arg1 + 0x30))(iVar11,6);
    uVar13 = (**(arg1 + 0x38))(_uStack0000000000000028,6);
    uVar4 = in_stack_00000058 >> 0x1e;
    if (in_stack_00000058 >> 0x1e != 0) {
        var_bp_10h._0_4_ = uVar4 & 1;
        uStack_300 = in_stack_00000058 >> 0x1f;
    }
    uVar14 = (**(arg1 + 0x38))(arg2,0x1d);
    uVar20 = (arg4 & 0xffffffffU) >> 4 & 0x1ff;
    if ((((uVar14 >> 1 & 0x7fffffff) < uVar20) || ((arg4 & 1U) == 0)) && ((arg4 >> 0xd & 1) == 0)) {
        if ((arg4 & 1U) == 0) goto code_r0x0001252b;
        uVar20 = arg4 >> 1 & 7;
        uVar14 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar20 + 7);
        uVar14 = (**(arg1 + 0x38))(uVar14 & arg2,1);
        uVar15 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar20 + 6);
        uStack_278 = ~uVar15 & arg2 | uVar14;
        uVar14 = (**(arg1 + 0x38))(uStack_278,6);
    }
    else {
        arg2 = uVar14 - uVar20 << 0x1d | arg2 & 0x1fffffff;
code_r0x0001252b:
        uStack_278 = arg2;
        uVar14 = (**(arg1 + 0x38))(arg2,6);
    }
    if (((var_48h >> 8 & 1) != 0) && (uVar13 <= uVar14)) {
        return 0;
    }
    uVar15 = (**(arg1 + 0x30))(iVar11,1);
    if (uVar14 < uVar15) {
        if ((var_38h >> 0x1c & 1) == 0) {
            uVar20 = uVar14 & 1;
            uVar14 = (**(arg1 + 0x38))(uVar14,1);
        }
        else {
            uVar20 = fcn.00011f44(arg1,uVar14,var_38h);
            uVar5 = fcn.00011fb0(arg1,uVar14,var_38h);
            uVar14 = uVar5;
        }
    }
    else {
        if (uVar13 <= uVar14) {
            return 0;
        }
        uVar20 = 0;
        uVar14 = uVar14 - iVar11;
    }
    uVar20 = var_48h >> 4 & 1 ^ uVar20;
    *in_stack_00000078 = uVar20;
    uVar5 = auStack_290[uVar20];
    uVar20 = auStack_268[uVar20];
    uStack_2a8 = (**(arg1 + 0x30))(uVar5 & 0x7f,0x17);
    uVar31 = uVar5 & 0x7f0000;
    uVar13 = (**(arg1 + 0x30))(uVar31,7);
    uStack_2d0 = -(uStack_2a8 != 0) & (uVar13 != 0) + 1;
    if (uStack_2a8 == 0) {
        iVar21 = 0;
    }
    else {
        iVar21 = (uVar5 >> 9 & 3) + 1;
    }
    if (uVar13 == 0) {
        iVar6 = 0;
    }
    else {
        iVar6 = (uVar5 >> 0x1a & 3) + 1;
    }
    uVar9 = iVar6 + iVar21;
    uVar32 = uVar5 >> 7;
    uStack_294 = uVar5 >> 0xc;
    uVar25 = uVar5 >> 9;
    uStack0000000000000028 = uVar25 & 3;
    uVar7 = fcn.00011aec(uVar24,uVar3,uStack_2d0,uVar9);
    fcn.000119ec(arg1,auStack_178,uVar7,0);
    if ((uVar20 & 0x100) != 0) {
        fcn.00011a70(arg1,auStack_230,uVar7,0);
    }
    iStack_2a0 = iStack_174 + -6;
    if ((uVar20 & 0x100) != 0) {
        iStack_29c = iStack_22c + -6;
    }
    uVar15 = (**(arg1 + 0x30))(uVar13,1);
    if (uVar14 < uVar15) {
        if ((in_stack_00000038 >> 0x1c & 1) == 0) {
            in_stack_00000070 = (**(arg1 + 0x38))(uVar14,iStack_2a0);
            in_stack_00000070 = in_stack_00000070 & 1;
            if (((uVar20 & 0x100) != 0) && (iStack_29c != -6)) {
                uVar7 = (**(arg1 + 0x38))(uVar14);
                in_stack_00000070 = in_stack_00000070 ^ uVar7 & 1;
            }
            uStack0000000000000060 = in_stack_00000070 & 0xff;
            (**(arg1 + 0x38))(0xffffffff,0x26 - in_stack_00000070);
            (**(arg1 + 0x38))(0xffffffff,0x26 - in_stack_00000070);
            (**(arg1 + 0x38))(uVar14,1);
            uVar15 = uVar14;
        }
        else {
            uVar7 = in_stack_00000038 >> 0x18 & 7;
            uStack0000000000000060 = 0;
            uVar24 = uStack0000000000000060;
            do {
                uVar8 = (**(arg1 + 0x38))((1 << uVar7 | in_stack_00000038 >> 6 & 0x3fff) & uVar14,uVar24);
                uStack0000000000000060 = uStack0000000000000060 ^ uVar8;
                uVar24 = uVar24 + 1;
            } while (uVar24 < 0xe);
            uStack0000000000000060 = uStack0000000000000060 & 1;
            uVar15 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar7 + 1);
            uVar16 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar7);
            uVar16 = (**(arg1 + 0x30))(~uVar16 & uVar14,1);
            uVar15 = uVar16 | uStack0000000000000060 | uVar15 & uVar14;
            uVar24 = var_28h_2;
        }
        var_48h._0_4_ = fcn.00011aec(uVar24,uVar3,uStack_2d0,uVar9);
        uVar12 = 0;
        fcn.000119ec(arg1,auStack_178,var_48h,0);
        if ((uVar20 & 0x100) != 0) {
            uVar12 = 0;
            fcn.00011a70(arg1,auStack_230,var_48h,0);
        }
    }
    else {
        if (uStack_2a8 + uVar13 <= uVar14) {
            return 0;
        }
        var_48h._0_4_ = fcn.00011aec(uVar24,uVar3,uStack_2d0,uVar9);
        uVar12 = 0;
        fcn.000119ec(arg1,auStack_178,var_48h,0);
        if ((uVar20 & 0x100) != 0) {
            uVar12 = 0;
            fcn.00011a70(arg1,auStack_230,var_48h,0);
        }
        uStack0000000000000060 = 0;
        uVar15 = uVar14 - uVar13;
    }
    *_var_88h = uVar20 & 1 ^ uStack0000000000000060;
    if (uStack0000000000000060 != 0) {
        uStack_2a8 = uVar13;
    }
    uStack_2a8 = uStack_2a8 & 0xffffffff;
    uVar24 = uVar25;
    if (uStack0000000000000060 != 0) {
        uVar24 = uVar5 >> 0x1a;
    }
    uVar24 = uVar24 & 3;
    uVar3 = uVar24 + 1;
    if (uStack0000000000000060 == 0) {
        uVar9 = uVar5 >> 0xb;
    }
    else {
        uVar9 = uVar5 >> 0x1c;
        uVar32 = uVar5 >> 0x18;
    }
    uVar32 = uVar32 & 3;
    if (uVar32 < 2) {
        iVar21 = uVar32 * 8 + 8;
    }
    else {
        iVar21 = uVar32 * 8 + 0x10;
    }
    uVar7 = uVar5 >> 0x1c & 3;
    iVar11 = (**(arg1 + 0x30))(uVar31,7);
    iVar17 = (**(arg1 + 0x30))(uVar31,7);
    uVar31 = iVar17 == 0 && uStack0000000000000028 == 0;
    if (var_48h < 0x1e) {
        if (var_48h == 0x1d) {
            if (((uVar9 & 1) == 0) || (iVar21 != 8)) {
                var_48h._0_4_ = 0x2833;
            }
            else {
                var_48h._0_4_ = 0x2834;
            }
        }
        else if (var_48h == 0x12) {
            var_48h._0_4_ = 0x27c6 - (uVar24 != 1);
        }
        else if (var_48h == 0x17) {
            var_48h._0_4_ = 0x27f8 - (uVar24 != 1);
        }
        else if (var_48h == 0x18) {
            var_48h._0_4_ = (iVar21 != 8) + 0x2801;
        }
        else if (var_48h == 0x19) {
            var_48h._0_4_ = (iVar21 != 8) + 0x280b;
        }
        else if (var_48h == 0x1a) {
            var_48h._0_4_ = 0x2816 - (iVar21 != 8);
        }
        else if (var_48h == 0x1b) {
            var_48h._0_4_ = (iVar21 != 8) + 0x281f;
        }
        else if (var_48h == 0x1c) {
            var_48h._0_4_ = (iVar21 != 8) + 0x2829;
        }
    }
    else if (var_48h == 0x50) {
        var_48h._0_4_ = 0x2a32 - (uVar24 != 1);
    }
    else if (var_48h == 0x55) {
        var_48h._0_4_ = 0x2a64 - (uVar24 != 1);
    }
    else if (var_48h == 0x56) {
        var_48h._0_4_ = (iVar21 != 8) + 0x2a6d;
    }
    else if (var_48h == 0x57) {
        var_48h._0_4_ = (iVar21 != 8) + 0x2a77;
    }
    else if (var_48h == 0x58) {
        var_48h._0_4_ = 0x2a82 - (iVar21 != 8);
    }
    else if (var_48h == 0x59) {
        var_48h._0_4_ = (iVar21 != 8) + 0x2a8b;
    }
    else if (var_48h == 0x5a) {
        var_48h._0_4_ = (iVar21 != 8) + 0x2a95;
    }
    iVar17 = CONCAT71(uVar12 >> 8,1);
    fcn.000119ec(arg1,auStack_178,var_48h,iVar17);
    if ((uVar20 & 0x100) != 0) {
        fcn.00011a70(arg1,auStack_230,var_48h,CONCAT71(iVar17 >> 8,1));
    }
    uVar28 = 0;
    iVar6 = iStack_170 + -6;
    aiStack_270[0] = iVar6;
    iStack_298 = iStack_228 + -6;
    uVar13 = uVar28;
    uVar16 = uVar28;
    do {
        uVar22 = 2 - uVar13;
        uVar9 = uVar13 + 1;
        uVar13 = uVar9;
        auStack_290[uVar22 + 2] = *(aiStack_16c + uVar16) - 6;
        aiStack_240[uVar22] = *(aiStack_224 + uVar16) + -6;
        uVar16 = uVar16 + 4;
    } while (uVar9 < 3);
    uVar13 = uVar28;
    uVar16 = uVar28;
    do {
        uVar22 = 2 - uVar13;
        uVar9 = uVar13 + 1;
        uVar13 = uVar9;
        auStack_268[uVar22 + 2] = *(aiStack_16c + uVar16 + 0xc) - 6;
        aiStack_250[uVar22] = *(aiStack_224 + uVar16 + 0xc) + -6;
        uVar16 = uVar16 + 4;
    } while (uVar9 < 3);
    piVar29 = aiStack_16c + 6;
    uVar13 = uVar28;
    do {
        iVar1 = *piVar29;
        iVar26 = uVar13;
        piVar29 = piVar29 + 1;
        uVar9 = iVar26 + 1;
        uVar13 = uVar9;
        (&var_80h)[0x11 - iVar26] = iVar1 + -6;
    } while (uVar9 < 0x12);
    piVar29 = aiStack_10c;
    piVar27 = aiStack_1a8;
    for (iVar17 = 0xc; uVar13 = uVar28, iVar17 != 0; iVar17 = iVar17 + -1) {
        *piVar27 = -6;
        piVar27 = piVar27 + 1;
    }
    do {
        iVar1 = *piVar29;
        iVar26 = uVar13;
        piVar29 = piVar29 + 1;
        uVar9 = iVar26 + 1;
        uVar13 = uVar9;
        aiStack_208[0xb - iVar26] = iVar1 + -6;
    } while (uVar9 < 0xc);
    iStack_180 = aiStack_224[6] + -6;
    if (uVar3 == 3) {
        uVar13 = (uStack_2a8 & 0xffffffff) / 3;
        uVar9 = 2 - (uVar15 < uVar13 * 2);
        if (uVar15 < uVar13) {
            uVar9 = 0;
        }
        *in_stack_00000088 = uVar9;
    }
    else {
        if (iVar6 != -6) {
            uVar9 = (**(arg1 + 0x38))(uVar15,iVar6);
            uVar28 = uVar9 & 1;
        }
        uVar9 = uVar28;
        iStackX_18 = CONCAT44(iStackX_18._4_4_,uVar9);
        if (((uVar20 & 0x100) != 0) && (iStack_298 != -6)) {
            uVar9 = (**(arg1 + 0x38))(uVar15);
            uVar9 = iStackX_18 ^ uVar9 & 1;
            iStackX_18 = CONCAT44(iStackX_18._4_4_,uVar9);
        }
        *in_stack_00000088 = uVar9;
    }
    uVar2 = uStack_1f0;
    uVar9 = var_28h_2;
    iVar17 = 0;
    if (var_28h_2 < 2) {
        if (uVar7 == 1) {
            iVar17 = 5;
code_r0x00012ee1:
            if (uVar7 == 0) goto code_r0x00012ef4;
        }
        else {
            if (uVar7 != 2) goto code_r0x00012ee1;
            iVar17 = 6;
        }
        iVar6 = aiStack_208[iVar17];
        aiStack_208[iVar17] = auStack_290[2];
        auStack_290[2] = iVar6;
    }
code_r0x00012ef4:
    if (((var_28h_2 == 2) && (uVar7 == 1)) && ((uStack_2b0 & 0xfffffffd) == 0)) {
        uStack_1f0 = auStack_290[3];
        auStack_290[3] = uVar2;
    }
    uVar13 = 0;
    iVar17 = 0;
    do {
        if (*(auStack_290 + iVar17 + 8) == -6) {
            *(auStack_2f0 + iVar17) = 0;
        }
        else {
            uVar7 = (**(arg1 + 0x38))(uVar15);
            *(auStack_2f0 + iVar17) = uVar7 & 1;
        }
        iVar6 = uVar13;
        if ((uVar20 & 0x100) != 0) {
            if (*(aiStack_240 + iVar17) != -6) {
                uVar7 = (**(arg1 + 0x38))(uVar15);
                uVar7 = uVar7 & 1 ^ *(auStack_2f0 + iVar17);
                *(auStack_2f0 + iVar17) = uVar7;
                if ((iVar6 == 0) && (uVar9 < 2)) {
                    uVar32 = (**(arg1 + 0x38))(uVar15);
                    *(auStack_2f0 + iVar17) = uVar32 & 1 ^ uVar7;
                }
            }
            if (uVar4 != 0) {
                if (uVar9 == 0) {
                    if ((iVar21 == 8) && (iVar6 == 1)) {
                        if (var_bp_10h != 0) {
                            fcn.00012014(arg1,0,uVar14,uVar13);
                        }
                        if (uStack_300 != 0) {
                            uVar7 = uVar14 >> 0xf & uVar31;
                            *(auStack_2f0 + iVar17) = *(auStack_2f0 + iVar17) ^ uVar7;
                            uStack_2c8 = uVar7;
                        }
                    }
                }
                else if (uVar9 == 1) {
                    if (iVar6 != 0) {
                        puVar23 = &uStack_2c8;
                        iStack_310 = 6;
                        do {
                            iVar1 = *((((iVar6 - 1) + (uVar24 + (iVar21 == 8) * 2) * 2) * 0x18 - &uStack_2c8) + 0x23a00
                                     + puVar23);
                            *puVar23 = 0;
                            if (iVar1 != 0) {
                                uVar7 = (**(arg1 + 0x38))(uVar14);
                                *(auStack_2f0 + iVar17) = *(auStack_2f0 + iVar17) ^ uVar7 & 1;
                                *puVar23 = uVar7 & 1;
                            }
                            puVar23 = puVar23 + 1;
                            iStack_310 = iStack_310 + -1;
                        } while (iStack_310 != 0);
                    }
                }
                else if (((uVar9 == 2) && (iVar6 == 0)) && ((uStack_2b0 & 0xfffffffd) == 0)) {
                    if (var_bp_10h != 0) {
                        fcn.00012014(arg1,2,uVar14,0);
                    }
                    if (uStack_300 != 0) {
                        (**(arg1 + 0x38))(uVar14,0xf);
                        auStack_2f0[0] = auStack_2f0[0] ^ uStack_2c8;
                    }
                }
            }
        }
        uVar7 = var_28h_2;
        uVar16 = 0;
        uVar13 = iVar6 + 1U;
        iVar17 = iVar17 + 4;
    } while (iVar6 + 1U < 3);
    puVar23 = auStack_2f0;
    *in_stack_00000090 = 0;
    uVar13 = uVar16;
    do {
        uVar9 = *puVar23;
        puVar23 = puVar23 + 1;
        uVar19 = uVar13;
        uVar32 = uVar13 + 1;
        uVar13 = uVar32;
        *in_stack_00000090 = *in_stack_00000090 + (uVar9 << (uVar19 & 0x1f));
    } while (uVar32 < 3);
    uVar9 = 0;
    uVar13 = uVar16;
    do {
        uVar8 = uVar16;
        if (auStack_268[uVar13 + 2] == 0xfffffffa) {
            auStack_2e0[uVar13] = 0;
        }
        else {
            uVar10 = (**(arg1 + 0x38))(uVar15);
            auStack_2e0[uVar13] = uVar10 & 1;
        }
        if (((uVar20 & 0x100) != 0) && (aiStack_250[uVar13] != -6)) {
            uVar10 = (**(arg1 + 0x38))(uVar15);
            auStack_2e0[uVar13] = auStack_2e0[uVar13] ^ uVar10 & 1;
            if (uVar4 != 0) {
                if (uVar7 == 1) {
                    if (uVar8 != 2) {
                        puVar23 = &uStack_2c8;
                        iStack_320 = 5;
                        do {
                            iVar6 = *(puVar23 +
                                     ((uVar13 + (uVar24 + (iVar21 == 8) * 2) * 2) * 0x14 - &uStack_2c8) + 0x27860);
                            *puVar23 = 0;
                            if (iVar6 != 0) {
                                uVar9 = (**(arg1 + 0x38))(uVar14,iVar6);
                                auStack_2e0[uVar13] = auStack_2e0[uVar13] ^ uVar9 & 1;
                                *puVar23 = uVar9 & 1;
                            }
                            puVar23 = puVar23 + 1;
                            iStack_320 = iStack_320 + -1;
                        } while (iStack_320 != 0);
                    }
                }
                else {
                    if (var_bp_10h != 0) {
                        if ((uVar7 == 0) && (uVar8 == 2)) goto code_r0x0001340c;
                        fcn.00012014(arg1,uVar16,uVar14,uVar32);
                    }
                    if (uStack_300 != 0) {
                        if (uVar7 == 2) {
                            if ((uStack_2b0 & 0xfffffffd) == 0) {
                                if (uVar8 == 2) goto code_r0x0001340c;
                                goto code_r0x00013241;
                            }
                        }
                        else {
code_r0x00013241:
                            if (1 < uVar7 - 2) {
                                if ((uVar7 == 0) && ((uVar8 == 0 || (uVar8 == 1)))) {
                                    iVar17 = uVar13 + (iVar21 != 8) * 3;
                                    uVar8 = (**(arg1 + 0x38))(uVar14);
                                    uStack_2c8 = uVar8 & *(iVar17 * 0x10 + 0x239a0) != 0 &
                                                 (iVar11 != 0 & uStack0000000000000028 ^ 1);
                                    uVar8 = (**(arg1 + 0x38))(uVar14);
                                    uStack_2c4 = uVar8 & *(iVar17 * 0x10 + 0x239a4) != 0 & uVar31;
                                    uStack_2c0 = (**(arg1 + 0x38))(uVar14);
                                    uStack_2c0 = uStack_2c0 & *(iVar17 * 0x10 + 0x239a8) != 0;
                                    uStack_2bc = (**(arg1 + 0x38))(uVar14,*(iVar17 * 0x10 + 0x239ac));
                                    uStack_2bc = uStack_2bc & *(iVar17 * 0x10 + 0x239ac) != 0;
                                    auStack_2e0[uVar13] =
                                         auStack_2e0[uVar13] ^ uStack_2bc ^ uStack_2c0 ^ uStack_2c4 ^ uStack_2c8;
                                    uVar8 = uVar9;
                                }
                                goto code_r0x0001340c;
                            }
                        }
                        uVar9 = fcn.00012138(arg1,uVar16,uVar14,uVar25 & 3);
                        auStack_2e0[uVar13] = auStack_2e0[uVar13] ^ uVar9;
                    }
                }
            }
        }
code_r0x0001340c:
        uVar28 = 0;
        uVar9 = uVar8 + 1;
        uVar16 = uVar9;
        uVar13 = uVar13 + 1;
    } while (uVar9 < 3);
    puVar23 = auStack_2e0;
    *var_a0h = 0;
    uVar13 = uVar28;
    do {
        uVar4 = *puVar23;
        puVar23 = puVar23 + 1;
        uVar19 = uVar13;
        uVar24 = uVar13 + 1;
        uVar13 = uVar24;
        *var_a0h = *var_a0h + (uVar4 << (uVar19 & 0x1f));
    } while (uVar24 < 3);
    iVar11 = 0x12;
    do {
        if (*(&var_80h + uVar28) == -6) {
            *(auStack_d8 + uVar28) = 0;
        }
        else {
            uVar4 = (**(arg1 + 0x38))(uVar15);
            *(auStack_d8 + uVar28) = uVar4 & 1;
        }
        uVar13 = uStack_278;
        uVar14 = 0;
        uVar28 = uVar28 + 4;
        iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar23 = auStack_d8;
    *in_stack_000000a0 = 0;
    uVar16 = uVar14;
    do {
        uVar4 = *puVar23;
        puVar23 = puVar23 + 1;
        uVar19 = uVar16;
        uVar24 = uVar16 + 1;
        uVar16 = uVar24;
        *in_stack_000000a0 = *in_stack_000000a0 + (uVar4 << (uVar19 & 0x1f));
    } while (uVar24 < 0x12);
    if (uVar3 == 3) {
        *in_stack_00000090 = *in_stack_00000090 & 1;
        iVar6 = 9 - (uStack_2d0 != 2);
        uVar12 = (**(arg1 + 0x38))(uVar15,iVar6);
        uVar18 = (**(arg1 + 0x48))(uVar12,3,0);
        iVar21 = (**(arg1 + 0x40))(uVar18,3);
        *in_stack_00000090 = *in_stack_00000090 + (uVar12 - iVar21 & 2U);
        *in_stack_00000088 = *in_stack_00000088 & 2;
        uVar12 = (**(arg1 + 0x38))(uVar15,iVar6);
        uVar18 = (**(arg1 + 0x48))(uVar12,3,0);
        iVar21 = (**(arg1 + 0x40))(uVar18,3);
        *in_stack_00000088 = *in_stack_00000088 + (uVar12 - iVar21 & 1U);
        *in_stack_000000a0 = 0;
        uVar12 = (**(arg1 + 0x38))(uVar15,iVar6);
        uVar4 = (**(arg1 + 0x48))(uVar12,3,0);
        *in_stack_000000a0 = uVar4 >> 1;
        *var_a0h = *var_a0h & 3;
        uVar12 = (**(arg1 + 0x38))(uVar15,iVar6);
        return uVar12;
    }
    if (uVar7 != 0) {
        if (uVar7 != 1) {
            cVar30 = '\t';
            if ((uVar7 != 2) && (cVar30 = '\0', uVar7 == 3)) {
                cVar30 = '\b';
            }
            goto code_r0x0001361b;
        }
        if (uStack0000000000000060 == 0) {
            uVar5 = uStack_294 & 0xff;
        }
        else {
            uVar5 = uVar5 >> 0xb;
        }
        if ((uVar5 & 1) != 0) {
            cVar30 = '\n' - (iVar21 != 8);
            goto code_r0x0001361b;
        }
    }
    cVar30 = '\v' - (iVar21 != 8);
code_r0x0001361b:
    iVar11 = 0xc;
    *in_stack_000000a0 = *in_stack_000000a0 & (uStack_2a8 >> ((uVar3 >> 1) + cVar30 & 0x1fU)) - 1;
    do {
        iVar21 = *(aiStack_208 + uVar14);
        if (iVar21 == -6) {
            *(aiStack_1e4 + uVar14 + 0xc) = 0;
        }
        else {
            if (iVar21 < 0) {
                *(aiStack_208 + uVar14) = iVar21 + 6;
                uVar16 = uVar13;
            }
            else {
                uVar16 = uVar15;
            }
            uVar4 = (**(arg1 + 0x38))(uVar16);
            *(aiStack_1e4 + uVar14 + 0xc) = uVar4 & 1;
        }
        if (((uVar20 & 0x100) != 0) && (*(aiStack_1a8 + uVar14) != -6)) {
            uVar4 = (**(arg1 + 0x38))(uVar15);
            puVar23 = aiStack_1e4 + uVar14 + 0xc;
            *puVar23 = *puVar23 ^ uVar4 & 1;
        }
        uVar4 = 0;
        uVar14 = uVar14 + 4;
        iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    piVar29 = aiStack_1e4 + 3;
    *in_stack_000000a8 = 0;
    do {
        iVar21 = *piVar29;
        piVar29 = piVar29 + 1;
        uVar19 = uVar4;
        uVar4 = uVar4 + 1;
        *in_stack_000000a8 = *in_stack_000000a8 + (iVar21 << (uVar19 & 0x1f));
    } while (uVar4 < 0xc);
    if (2 < uVar3) {
        *in_stack_00000088 = *in_stack_00000088 | *in_stack_00000090 & 2;
        *in_stack_00000090 = 0;
    }
    *in_stack_000000b0 = var_48h;
    return 1;
}


/* fcn.00013ab8 @ 0x13ab8 */

uint64_t fcn.00013ab8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    int iVar15;
    uint64_t uVar16;
    int *piVar17;
    uint32_t *puVar18;
    int *piVar19;
    int64_t iVar20;
    uint32_t uVar21;
    int iVar22;
    uint64_t uVar23;
    bool bVar24;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint32_t in_stack_00000038;
    uint32_t in_stack_00000040;
    uint32_t in_stack_00000048;
    uint32_t in_stack_00000050;
    uint32_t in_stack_00000058;
    uint32_t in_stack_00000060;
    uint32_t in_stack_00000078;
    ulong in_stack_00000088;
    uint32_t uStack0000000000000090;
    char cStack0000000000000098;
    uint64_t *in_stack_000000a0;
    uchar *in_stack_000000a8;
    uint uStack_2c8;
    int aiStack_2c0 [2];
    int *piStack_2b8;
    uint32_t auStack_2b0 [4];
    uint32_t uStack_2a0;
    uint32_t auStack_298 [6];
    uint32_t uStack_280;
    uint32_t uStack_27c;
    uint32_t uStack_278;
    uint32_t uStack_274;
    uint32_t uStack_270;
    int iStack_26c;
    uint32_t uStack_268;
    int iStack_264;
    uint32_t *puStack_260;
    int aiStack_258 [4];
    uint32_t auStack_248 [4];
    uint32_t uStack_238;
    uint32_t uStack_234;
    int iStack_230;
    uint32_t uStack_22c;
    uint32_t uStack_228;
    uint64_t uStack_220;
    uint64_t uStack_218;
    uint32_t auStack_210 [4];
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    int aiStack_1e8 [4];
    int aiStack_1d8 [4];
    int64_t iStack_1c8;
    int aiStack_1c0 [4];
    int aiStack_1b0 [12];
    uchar auStack_180 [4];
    int iStack_17c;
    int iStack_178;
    int aiStack_174 [7];
    int aiStack_158 [10];
    int iStack_130;
    int iStack_12c;
    uchar auStack_128 [4];
    int iStack_124;
    int iStack_120;
    int aiStack_11c [24];
    int aiStack_bc [13];
    int aiStack_88 [20];
    
    uVar14 = arg4;
    cStack0000000000000098 = '\0';
    uStack0000000000000090 = 0;
    *in_stack_000000a0 = 0;
    uStack_274 = 0;
    (**(arg1 + 0x28))(auStack_2b0,0xc);
    (**(arg1 + 0x28))(auStack_248,0xc);
    (**(arg1 + 0x28))(auStack_298,0x18);
    (**(arg1 + 0x28))(&uStack_2c8,8);
    (**(arg1 + 0x28))(auStack_210,8);
    (**(arg1 + 0x28))(auStack_128,0x9c);
    (**(arg1 + 0x28))(auStack_180,0x28);
    (**(arg1 + 0x28))(aiStack_2c0,4);
    (**(arg1 + 0x28))(&iStack_26c,4);
    (**(arg1 + 0x28))(aiStack_258,0xc);
    (**(arg1 + 0x28))(aiStack_1e8,0xc);
    (**(arg1 + 0x28))(aiStack_88,0x48);
    (**(arg1 + 0x28))(aiStack_1b0,0x30);
    (**(arg1 + 0x28))(&iStack_264,4);
    (**(arg1 + 0x28))(&iStack_230,4);
    (**(arg1 + 0x28))(aiStack_1d8,0xc);
    (**(arg1 + 0x28))(aiStack_1c0,0xc);
    (**(arg1 + 0x28))(aiStack_158,0x30);
    uVar21 = in_stack_00000060 & 7;
    uStack_228 = ((in_stack_00000060 >> 0x1b & 3) + 1) * 0x10;
    uVar1 = (**(arg1 + 0x38))(in_stack_00000088,0x2f);
    uStack_1f8 = uVar1 & 3;
    uStack_1f0 = (**(arg1 + 0x30))(in_stack_00000060 & 0xff000,0xb);
    uVar1 = (&uStack_2c8)[in_stack_00000060 >> 4 & 1];
    uVar6 = (**(arg1 + 0x30))(uVar1 & 0x7f,0x17);
    (**(arg1 + 0x30))(uVar6,6);
    uVar6 = (**(arg1 + 0x30))(uVar1 & 0x7f0000,7);
    (**(arg1 + 0x30))(uVar6,6);
    (**(arg1 + 0x30))(uStack_1f0,6);
    uVar1 = in_stack_00000078 >> 0x1e;
    if (in_stack_00000078 >> 0x1e != 0) {
        uStack0000000000000090 = uVar1 & 1;
        uStack_274 = in_stack_00000078 >> 0x1f;
    }
    uVar9 = 0xfffffffe;
    if (((arg2 & 0xfffffffeU) != 0) || ((arg3 & 0xfffffffeU) != 0)) goto code_r0x00013e71;
    uVar16 = arg2 & 0xffffffff;
    uStack_218 = uVar16;
    uVar23 = auStack_210[uVar16] & 1 ^ arg3 & 0xffffffffU;
    if (uVar23 == 0) {
        uVar12 = (&uStack_2c8)[uVar16] & 0x7f;
        uVar6 = 0x17;
    }
    else {
        uVar12 = (&uStack_2c8)[uVar16] & 0x7f0000;
        uVar6 = 7;
    }
    uStack_220 = uVar23;
    uVar7 = (**(arg1 + 0x30))(uVar12,uVar6);
    uVar9 = uVar7;
    if ((uVar7 == 0) || ((arg4 & 0xfffffffcU) != 0)) goto code_r0x00013e71;
    uVar12 = (&uStack_2c8)[uVar16];
    if (uVar23 == 0) {
        uVar2 = uVar12 >> 9;
    }
    else {
        uVar2 = uVar12 >> 0x1a;
    }
    uStack_200 = uVar2;
    uVar2 = uVar2 & 3;
    if (uVar23 == 0) {
        uVar3 = uVar12 >> 7 & 3;
        iVar22 = uVar3 * 8 + 8;
        if (1 < uVar3) goto code_r0x00013dcc;
    }
    else {
        uVar3 = uVar12 >> 0x18 & 3;
        if (uVar3 < 2) {
            iVar22 = uVar3 * 8 + 8;
        }
        else {
code_r0x00013dcc:
            iVar22 = uVar3 * 8 + 0x10;
        }
    }
    uStack_280 = uVar12 >> 0x1c & 3;
    uStack_27c = uVar12 >> 9 & 3;
    uStack_2a0 = uVar2 + 1;
    iVar8 = (**(arg1 + 0x30))(uVar12 & 0x7f0000,7);
    uStack_238 = iVar8 != 0 & uStack_27c;
    uStack_278 = uStack_27c == 0;
    iVar8 = (**(arg1 + 0x30))((&uStack_2c8)[uStack_218] & 0x7f0000,7);
    uStack_270 = iVar8 == 0 & uStack_278;
    uVar9 = 0;
    uStack_234 = iVar22 == 8;
    if (uVar2 + 1 < uVar14) goto code_r0x00013e71;
    uVar9 = 0;
    if (uVar21 == 0) {
        if (iVar22 == 0x10) {
            uVar12 = in_stack_00000028 & 0xfffffffe;
            goto joined_r0x00013ea2;
        }
    }
    else if ((uVar21 == 1) && (iVar22 == 0x10)) {
        uVar12 = in_stack_00000028 & 0xfffffffc;
joined_r0x00013ea2:
        if (uVar12 != 0) goto code_r0x00013e71;
    }
    if ((in_stack_00000030 & 0xfffffff8) != 0) goto code_r0x00013e71;
    iVar15 = 0xb - (uVar21 != 2);
    uVar6 = (**(arg1 + 0x38))(uVar7,iVar15 + (uVar21 - 2 < 2) * -2);
    if (uStack_2a0 == 3) {
        uVar2 = 3;
    }
    uVar6 = (**(arg1 + 0x48))(uVar6,uVar2 + 1);
    if (uVar21 == 0) {
        if (iVar22 == 8) {
            uVar6 = (**(arg1 + 0x38))(uVar6,1);
            goto code_r0x00013f02;
        }
    }
    else {
code_r0x00013f02:
        if ((uVar21 == 1) && (iVar22 == 0x10)) {
            uVar6 = (**(arg1 + 0x30))(uVar6,1);
        }
    }
    uVar16 = uStack_218;
    uVar12 = ~(uVar6 - 1U);
    uVar9 = uVar12;
    if (((in_stack_00000038 & uVar12) == 0) &&
       (uVar12 = ~((1 << (iVar15 & 0x1f)) - 1U), uVar9 = uVar12, (in_stack_00000040 & uVar12) == 0)) {
        uVar12 = auStack_210[uStack_218];
        iVar8 = (**(arg1 + 0x30))((&uStack_2c8)[uStack_218] & 0x7f,0x17);
        piStack_2b8 = (**(arg1 + 0x30))((&uStack_2c8)[uVar16] & 0x7f0000,7);
        uStack_268 = -(iVar8 != 0) & (piStack_2b8 != NULL) + 1;
        if (iVar8 == 0) {
            iVar15 = 0;
        }
        else {
            iVar15 = ((&uStack_2c8)[uVar16] >> 9 & 3) + 1;
        }
        if (piStack_2b8 == NULL) {
            iVar4 = 0;
        }
        else {
            iVar4 = ((&uStack_2c8)[uVar16] >> 0x1a & 3) + 1;
        }
        uStack_22c = iVar4 + iVar15;
        if (piStack_2b8 != NULL) {
            uVar3 = (&uStack_2c8)[uVar16];
            uVar6 = (**(arg1 + 0x30))(piStack_2b8,6);
            uVar5 = *(&uStack_2c8 + uVar16 * 4 + 3) & 3;
            uVar2 = uVar5 * 8 + 8;
            if (1 < uVar5) {
                uVar2 = uVar5 * 8 + 0x10;
            }
            (**(arg1 + 0x48))(uVar6,(0x40 / uVar2) * ((uVar3 >> 0x1a & 3) + 1) * 0x1000,0);
        }
        if (uStack_220 == 0) {
            uVar2 = (&uStack_2c8)[uVar16] >> 0xc;
        }
        else {
            uVar2 = (&uStack_2c8)[uVar16] >> 0xb;
        }
        auStack_210[2] = uVar2 & 0xffffff01;
        iStack_1c8 = -0x30 - auStack_298;
        do {
            uVar9 = uStack_1f8;
            uVar16 = uStack_22c;
            uVar3 = uStack_2a0;
            uVar2 = fcn.00011aec(uVar21,uStack_228,uStack_268,uStack_22c);
            if (uVar2 < 0x51) {
                if (uVar2 == 0x50) {
                    uVar2 = 0x2a32 - (uVar3 != 2);
                }
                else if (uVar2 == 0x12) {
                    uVar2 = 0x27c6 - (uVar3 != 2);
                }
                else if (uVar2 == 0x17) {
                    uVar2 = 0x27f8 - (uVar3 != 2);
                }
                else if (uVar2 == 0x18) {
                    uVar2 = (iVar22 != 8) + 0x2801;
                }
                else if (uVar2 == 0x19) {
                    uVar2 = (iVar22 != 8) + 0x280b;
                }
                else if (uVar2 == 0x1a) {
                    uVar2 = 0x2816 - (iVar22 != 8);
                }
                else if (uVar2 == 0x1b) {
                    uVar2 = (iVar22 != 8) + 0x281f;
                }
                else if (uVar2 == 0x1c) {
                    uVar2 = (iVar22 != 8) + 0x2829;
                }
            }
            else if (uVar2 == 0x55) {
                uVar2 = 0x2a64 - (uVar3 != 2);
            }
            else if (uVar2 == 0x56) {
                uVar2 = (iVar22 != 8) + 0x2a6d;
            }
            else if (uVar2 == 0x57) {
                uVar2 = (iVar22 != 8) + 0x2a77;
            }
            else if (uVar2 == 0x58) {
                uVar2 = 0x2a82 - (iVar22 != 8);
            }
            else if (uVar2 == 0x59) {
                uVar2 = (iVar22 != 8) + 0x2a8b;
            }
            else if (uVar2 == 0x5a) {
                uVar2 = (iVar22 != 8) + 0x2a95;
            }
            if (cStack0000000000000098 != '\0') {
                if (uVar2 == 0x12) {
                    uVar2 = 0xe;
                    uVar5 = 0x10;
                }
                else if (uVar2 == 0x17) {
                    uVar2 = 0x13;
                    uVar5 = 0x15;
                }
                else if (uVar2 == 0x50) {
                    uVar2 = 0x4c;
                    uVar5 = 0x4e;
                }
                else {
                    if (uVar2 != 0x55) goto code_r0x000142e8;
                    uVar2 = 0x51;
                    uVar5 = 0x53;
                }
                if (uVar3 == 2) {
                    uVar2 = uVar5;
                }
            }
code_r0x000142e8:
            iVar8 = CONCAT71(uVar16 >> 8,1);
            fcn.000119ec(arg1,auStack_128,uVar2,iVar8);
            if ((uVar12 & 0x100) != 0) {
                fcn.00011a70(arg1,auStack_180,uVar2,CONCAT71(iVar8 >> 8,1));
            }
            uVar2 = 0;
            aiStack_2c0[0] = iStack_124 + -6;
            iStack_264 = iStack_17c + -6;
            iStack_26c = iStack_120 + -6;
            iStack_230 = iStack_178 + -6;
            iVar8 = 0;
            do {
                uVar3 = 2 - uVar2;
                uVar2 = uVar2 + 1;
                aiStack_258[uVar3] = *(aiStack_11c + iVar8) + -6;
                aiStack_1d8[uVar3] = *(aiStack_174 + iVar8) + -6;
                iVar8 = iVar8 + 4;
            } while (uVar2 < 3);
            uVar2 = 0;
            iVar8 = 0;
            do {
                uVar3 = 2 - uVar2;
                uVar2 = uVar2 + 1;
                aiStack_1e8[uVar3] = *(aiStack_11c + iVar8 + 0xc) + -6;
                aiStack_1c0[uVar3] = *(aiStack_174 + iVar8 + 0xc) + -6;
                iVar8 = iVar8 + 4;
            } while (uVar2 < 3);
            uVar2 = 0;
            piVar17 = aiStack_11c + 6;
            do {
                iVar15 = *piVar17;
                uVar3 = 0x11 - uVar2;
                piVar17 = piVar17 + 1;
                uVar2 = uVar2 + 1;
                aiStack_88[uVar3] = iVar15 + -6;
            } while (uVar2 < 0x12);
            uVar2 = 0;
            piVar17 = aiStack_bc;
            piVar19 = aiStack_158;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar19 = -6;
                piVar19 = piVar19 + 1;
            }
            do {
                iVar15 = *piVar17;
                uVar3 = 0xb - uVar2;
                piVar17 = piVar17 + 1;
                uVar2 = uVar2 + 1;
                aiStack_1b0[uVar3] = iVar15 + -6;
            } while (uVar2 < 0xc);
            iStack_130 = aiStack_174[6] + -6;
            if ((uVar21 < 2) && (uStack_280 != 0)) {
                if (uStack_280 == 1) {
                    iVar8 = 5;
                }
                else {
                    iVar8 = 0;
                    if (uStack_280 == 2) {
                        iVar8 = 6;
                    }
                }
                iVar15 = aiStack_1b0[iVar8];
                aiStack_1b0[iVar8] = aiStack_258[0];
                aiStack_258[0] = iVar15;
            }
            iVar15 = aiStack_1b0[6];
            if (((uVar21 == 2) && (uStack_280 == 1)) && ((uVar9 & 0xfffffffd) == 0)) {
                aiStack_1b0[6] = aiStack_258[1];
                aiStack_258[1] = iVar15;
            }
            uVar16 = 0;
            uVar2 = 0;
            iVar8 = 0;
            do {
                iVar15 = *(aiStack_1b0 + iVar8);
                if (iVar15 != -6) {
                    if (iVar15 < 0) {
                        *(aiStack_1b0 + iVar8) = iVar15 + 6;
                        *in_stack_000000a0 =
                             *in_stack_000000a0 | (in_stack_00000040 >> (uVar2 & 0x1f) & 1) << (iVar15 + 6 & 0x1f);
                    }
                    else if (((uVar12 & 0x100) == 0) || (*(aiStack_158 + iVar8) == -6)) {
                        uVar16 = uVar16 | (in_stack_00000040 >> (uVar2 & 0x1f) & 1) << (iVar15 & 0x1f);
                    }
                    else {
                        uVar3 = (**(arg1 + 0x38))(uVar16);
                        uVar16 = uVar16 ^ (uVar3 & 1) << (*(aiStack_1b0 + iVar8) & 0x1f);
                    }
                }
                uVar2 = uVar2 + 1;
                iVar8 = iVar8 + 4;
            } while (uVar2 < 0xb);
            piVar17 = aiStack_88;
            uVar2 = 0;
            do {
                if (*piVar17 != -6) {
                    uVar16 = uVar16 | (in_stack_00000038 >> (uVar2 & 0x1f) & 1) << (*piVar17 & 0x1f);
                }
                uVar2 = uVar2 + 1;
                piVar17 = piVar17 + 1;
            } while (uVar2 < 0x12);
            uVar9 = (**(arg1 + 0x30))(piStack_2b8,1);
            if (((uVar16 < uVar9) && (cStack0000000000000098 == '\0')) && (aiStack_2c0[0] != -6)) {
                uVar2 = (**(arg1 + 0x38))(uStack_220,0);
                uVar9 = uVar2 & 1;
                if ((uVar12 & 0x100) == 0) {
                    uVar9 = (**(arg1 + 0x30))(uVar9,aiStack_2c0[0]);
                }
                else if (iStack_264 != -6) {
                    uVar3 = (**(arg1 + 0x38))(uVar16);
                    uVar9 = uVar2 & 1 ^ uVar3 & 1;
                }
                uVar16 = uVar16 | uVar9;
            }
            uVar2 = 0;
            iVar8 = 0;
            piStack_2b8 = 0x23af0;
            do {
                piVar17 = piStack_2b8;
                iVar15 = aiStack_1e8[iVar8];
                uVar3 = in_stack_00000030 >> (uVar2 & 0x1f) & 1;
                auStack_2b0[iVar8] = uVar3;
                if (iVar15 != -6) {
                    if ((uVar12 & 0x100) != 0) {
                        if (uVar1 != 0) {
                            if (uVar21 == 1) {
                                puStack_260 = auStack_298;
                                piStack_2b8 = 0x5;
                                piVar19 = (iVar8 + ((uStack_200 & 3) + uStack_234 * 2) * 2) * 0x14 + 0x27860;
                                do {
                                    if (*piVar19 != 0) {
                                        uVar3 = (**(arg1 + 0x38))(uVar16,*piVar19);
                                        auStack_2b0[iVar8] = auStack_2b0[iVar8] ^ uVar3 & 1;
                                        *puStack_260 = uVar3 & 1;
                                    }
                                    puStack_260 = puStack_260 + 1;
                                    piVar19 = piVar19 + 1;
                                    piStack_2b8 = piStack_2b8 + -1;
                                } while (piStack_2b8 != NULL);
                            }
                            else {
                                if (uStack0000000000000090 != 0) {
                                    if ((uVar21 == 0) && (uVar2 == 2)) goto code_r0x000148bd;
                                    puVar18 = auStack_298;
                                    iVar10 = iStack_1c8 + piStack_2b8;
                                    iVar20 = 4;
                                    do {
                                        uVar3 = (**(arg1 + 0x38))(uVar16,*(puVar18 + iVar10));
                                        auStack_2b0[iVar8] = auStack_2b0[iVar8] ^ uVar3 & 1;
                                        *puVar18 = uVar3 & 1;
                                        puVar18 = puVar18 + 1;
                                        iVar20 = iVar20 + -1;
                                    } while (iVar20 != 0);
                                }
                                piVar17 = piStack_2b8;
                                if (uStack_274 != 0) {
                                    if (uVar21 - 2 < 2) {
                                        if (uVar2 == 0) {
                                            auStack_298[0] = (**(arg1 + 0x38))(uVar16,*piStack_2b8);
                                            bVar24 = *piVar17 != 0;
                                        }
                                        else {
                                            if (uVar2 != 1) {
                                                if (uVar2 == 2) {
                                                    uVar3 = (**(arg1 + 0x38))(uVar16,*piStack_2b8);
                                                    uVar3 = uVar3 & *piVar17 != 0 & uStack_27c < 2;
                                                    auStack_2b0[iVar8] = auStack_2b0[iVar8] ^ uVar3;
                                                    auStack_298[0] = uVar3;
                                                }
                                                goto code_r0x00014885;
                                            }
                                            auStack_298[0] = (**(arg1 + 0x38))(uVar16,*piStack_2b8);
                                            auStack_298[0] = auStack_298[0] & *piVar17 != 0;
                                            bVar24 = uStack_27c < 2;
                                        }
                                        auStack_298[0] = auStack_298[0] & bVar24;
                                        uVar3 = (**(arg1 + 0x38))(uVar16,piVar17[1]);
                                        auStack_298[1] = uVar3 & piVar17[1] != 0 & uStack_278;
                                        uVar3 = auStack_2b0[iVar8] ^ auStack_298[1];
                                    }
                                    else {
                                        if ((uVar21 != 0) || ((uVar2 != 0 && (uVar2 != 1)))) goto code_r0x00014885;
                                        iVar10 = iVar8 + (iVar22 != 8) * 3;
                                        uVar3 = (**(arg1 + 0x38))(uVar16,*(iVar10 * 0x10 + 0x239a0));
                                        auStack_298[0] = uVar3 & *(iVar10 * 0x10 + 0x239a0) != 0 & (uStack_238 ^ 1);
                                        uVar3 = (**(arg1 + 0x38))(uVar16,*(iVar10 * 0x10 + 0x239a4));
                                        auStack_298[1] = uVar3 & *(iVar10 * 0x10 + 0x239a4) != 0 & uStack_270;
                                        auStack_298[2] = (**(arg1 + 0x38))(uVar16,*(iVar10 * 0x10 + 0x239a8));
                                        auStack_298[2] = auStack_298[2] & *(iVar10 * 0x10 + 0x239a8) != 0;
                                        auStack_298[3] = (**(arg1 + 0x38))(uVar16,*(iVar10 * 0x10 + 0x239ac));
                                        auStack_298[3] = auStack_298[3] & *(iVar10 * 0x10 + 0x239ac) != 0;
                                        uVar3 = auStack_2b0[iVar8] ^ auStack_298[3] ^ auStack_298[2] ^ auStack_298[1];
                                    }
                                    auStack_2b0[iVar8] = uVar3 ^ auStack_298[0];
                                }
                            }
                        }
code_r0x00014885:
                        uVar3 = (**(arg1 + 0x38))(uVar16,aiStack_1c0[iVar8]);
                        iVar15 = aiStack_1e8[iVar8];
                        uVar3 = (uVar3 ^ auStack_2b0[iVar8]) & 1;
                    }
                    uVar16 = uVar16 | uVar3 << (iVar15 & 0x1f);
                }
code_r0x000148bd:
                uVar2 = uVar2 + 1;
                iVar8 = iVar8 + 1;
                piStack_2b8 = piVar17 + 4;
            } while (uVar2 < 3);
            if ((uVar21 < 2) || ((uVar21 == 2 && ((uStack_1f8 & 0xfffffffd) == 0)))) {
                uVar2 = 0;
                iVar8 = 0;
                do {
                    if (*(aiStack_258 + iVar8) != -6) {
                        if ((uVar12 & 0x100) == 0) {
                            uVar3 = in_stack_00000028 >> (uVar2 & 0x1f) & 1;
                        }
                        else {
                            uVar3 = in_stack_00000028 >> (uVar2 & 0x1f) & 1;
                            *(auStack_248 + iVar8) = uVar3;
                            if (uVar1 == 0) goto code_r0x000149d3;
                            if (uVar21 == 0) {
                                if ((iVar22 != 8) || (uVar2 != 1)) goto code_r0x00014940;
                                if (uStack0000000000000090 != 0) {
                                    iVar20 = 0;
                                    iVar10 = 4;
                                    do {
                                        if (*(iVar20 + 0x23ae0) != 0) {
                                            uVar3 = (**(arg1 + 0x38))(uVar16);
                                            *(auStack_248 + iVar8) = *(auStack_248 + iVar8) ^ uVar3 & 1;
                                            *(auStack_298 + iVar20) = uVar3 & 1;
                                        }
                                        iVar20 = iVar20 + 4;
                                        iVar10 = iVar10 + -1;
                                    } while (iVar10 != 0);
                                }
                                if (uStack_274 != 0) {
                                    uVar3 = (**(arg1 + 0x38))(uVar16,0xf);
                                    auStack_298[0] = uVar3 & uStack_270 & 1;
                                    *(auStack_248 + iVar8) = *(auStack_248 + iVar8) ^ auStack_298[0];
                                }
                            }
                            else {
                                if (uVar21 == 1) {
code_r0x00014940:
                                    if (uVar2 != 0) {
                                        puVar18 = auStack_298;
                                        piStack_2b8 = ((uVar2 - 1) + ((uStack_200 & 3) + uStack_234 * 2) * 2) * 0x18 +
                                                      0x23a00;
                                        puStack_260 = 0x6;
                                        do {
                                            puVar13 = puStack_260;
                                            *puVar18 = 0;
                                            if (*piStack_2b8 != 0) {
                                                uVar3 = (**(arg1 + 0x38))(uVar16);
                                                *puVar18 = uVar3 & 1;
                                                uVar3 = uVar3 & 1 ^ *(auStack_248 + iVar8);
                                                *(auStack_248 + iVar8) = uVar3;
                                                puVar13 = puStack_260;
                                            }
                                            piStack_2b8 = piStack_2b8 + 1;
                                            puVar18 = puVar18 + 1;
                                            puStack_260 = puVar13 + -1;
                                        } while (puVar13 + -1 != NULL);
                                        goto code_r0x000149d3;
                                    }
                                }
                                else {
code_r0x000149d3:
                                    if (uVar2 != 0) goto code_r0x000149f2;
                                }
                                if (uVar21 < 2) {
                                    uVar5 = (**(arg1 + 0x38))(uVar16,5);
                                    *(auStack_248 + iVar8) = uVar5 & 1 ^ uVar3;
                                }
                            }
code_r0x000149f2:
                            uVar3 = (**(arg1 + 0x38))(uVar16,*(aiStack_1d8 + iVar8));
                            uVar3 = uVar3 & 1 ^ *(auStack_248 + iVar8);
                        }
                        uVar16 = uVar16 | uVar3 << (*(aiStack_258 + iVar8) & 0x1f);
                    }
                    uVar2 = uVar2 + 1;
                    iVar8 = iVar8 + 4;
                } while (uVar2 < 3);
            }
            if (iStack_26c != -6) {
                if ((uVar12 & 0x100) == 0) {
                    uVar2 = uVar14;
                }
                else {
                    uVar2 = (**(arg1 + 0x38))(uVar16,iStack_230);
                    uVar2 = uVar2 ^ uVar14;
                }
                uVar16 = uVar16 | (uVar2 & 1) << (iStack_26c & 0x1f);
            }
            uVar2 = uStack_2a0;
            if ((2 < uStack_2a0) && (aiStack_258[1] != -6)) {
                if ((uVar12 & 0x100) == 0) {
                    uVar3 = uVar14 >> 1;
                }
                else {
                    uVar3 = (**(arg1 + 0x38))(uVar16,aiStack_1d8[1]);
                    uVar3 = uVar14 >> 1 ^ uVar3;
                }
                uVar16 = uVar16 | (uVar3 & 1) << (aiStack_258[1] & 0x1f);
            }
            if (aiStack_1b0[0xb] != -6) {
                if (aiStack_1b0[0xb] < 0) {
                    aiStack_1b0[0xb] = aiStack_1b0[0xb] + 6;
                    *in_stack_000000a0 =
                         *in_stack_000000a0 | (in_stack_00000040 >> 0xb & 1) << (aiStack_1b0[0xb] & 0x1f);
                }
                else {
                    if (((uVar12 & 0x100) == 0) || (iStack_12c == -6)) {
                        uVar3 = in_stack_00000040 >> 0xb;
                    }
                    else {
                        uVar3 = (**(arg1 + 0x38))(uVar16);
                        uVar3 = in_stack_00000040 >> 0xb ^ uVar3;
                    }
                    uVar16 = uVar16 | (uVar3 & 1) << (aiStack_1b0[0xb] & 0x1f);
                }
            }
            if (uVar2 == 3) {
                uVar9 = (**(arg1 + 0x30))(0xffffffffffffffff,9 - (uStack_268 != 2));
                uVar16 = uVar16 & ~uVar9 |
                         (in_stack_00000030 >> 2 & 1 | in_stack_00000038 * 2) * 3 + (uVar14 & 1 | in_stack_00000028 & 2)
                         << (9U - (uStack_268 != 2) & 0x1f);
            }
            uVar9 = uStack_218;
            uVar23 = (**(arg1 + 0x30))((&uStack_2c8)[uStack_218] & 0x7f,0x17);
            iVar8 = (**(arg1 + 0x30))((&uStack_2c8)[uVar9] & 0x7f0000,7);
            piStack_2b8 = iVar8;
            uVar7 = (**(arg1 + 0x30))(iVar8,1);
            uVar9 = CONCAT71(uVar7 >> 8,cStack0000000000000098);
            if ((uVar16 < uVar7) && (cStack0000000000000098 == '\0')) {
                if ((in_stack_00000058 >> 0x1c & 1) == 0) {
                    if (aiStack_2c0[0] != -6) {
                        uVar1 = (**(arg1 + 0x38))(uStack_220,0);
                        uVar9 = uVar1 & 1;
                        if ((uVar12 & 0x100) == 0) {
                            uVar9 = (**(arg1 + 0x30))(uVar9,aiStack_2c0[0]);
                        }
                        else if (iStack_264 != -6) {
                            uVar14 = (**(arg1 + 0x38))(uVar16);
                            uVar9 = uVar1 & 1 ^ uVar14 & 1;
                        }
                        uVar16 = uVar9 | uVar16;
                    }
                }
                else {
                    uVar9 = (**(arg1 + 0x38))(uVar16,1);
                    uVar21 = in_stack_00000058 >> 0x18 & 7;
                    uVar16 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar21);
                    uVar23 = (**(arg1 + 0x30))();
                    uVar14 = 0;
                    uVar16 = (uVar16 & uVar9) * 2 | ~uVar23 & uVar9;
                    uVar1 = 0;
                    do {
                        uVar11 = uVar1;
                        uVar1 = uVar1 + 1;
                        uVar14 = uVar14 ^ (in_stack_00000058 >> 6 & uVar16 & 0x3fff) >> (uVar11 & 0x1f);
                    } while (uVar1 < 0xe);
                    uVar16 = uVar16 | (uVar14 & 1 ^ uStack_220) << uVar21;
                }
                goto code_r0x00014d6a;
            }
            if (cStack0000000000000098 != '\0') goto code_r0x00014d61;
            cStack0000000000000098 = '\x01';
        } while( true );
    }
code_r0x00013e71:
    return uVar9 & 0xffffffffffffff00;
code_r0x00014d61:
    bVar24 = uVar16 <= uVar23;
    uVar16 = iVar8 + uVar16;
    if (bVar24) {
code_r0x00014d6a:
        bVar24 = (in_stack_00000060 >> 4 & 1) != arg2;
        uVar9 = bVar24;
        if (uVar16 < uStack_1f0) {
            if ((in_stack_00000050 >> 0x1c & 1) == 0) {
                uVar23 = (**(arg1 + 0x30))(uVar16,1);
            }
            else {
                uVar21 = in_stack_00000050 >> 0x18 & 7;
                uVar9 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar21);
                uVar23 = (**(arg1 + 0x30))(uVar9 & uVar16,1);
                uVar9 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar21);
                uVar14 = 0;
                uVar23 = uVar23 | ~uVar9 & uVar16;
                uVar1 = 0;
                do {
                    uVar11 = uVar1;
                    uVar1 = uVar1 + 1;
                    uVar14 = uVar14 ^ (in_stack_00000050 >> 6 & uVar23 & 0x3fff) >> (uVar11 & 0x1f);
                } while (uVar1 < 0xe);
                uVar9 = (uVar14 & 1 ^ bVar24) << uVar21;
            }
            uVar23 = uVar23 | uVar9;
        }
        else {
            uVar23 = uStack_1f0 + uVar16;
        }
        uVar9 = (**(arg1 + 0x30))(uVar23,6);
        *in_stack_000000a0 = uVar9;
        *in_stack_000000a8 = 0;
        if (uStack_228 == 0x20) {
            uVar6 = 2;
        }
        else {
            uVar6 = 1;
            if (uStack_228 != 0x10) {
                uVar6 = 3;
            }
        }
        uVar1 = (**(arg1 + 0x30))(in_stack_00000040,uVar6);
        *in_stack_000000a0 = *in_stack_000000a0 | uVar1 & 0x3f;
        uVar9 = *in_stack_000000a0;
        (**(arg1 + 0x38))(uVar9,0x1e);
        uVar1 = (**(arg1 + 0x38))(uVar9,0x1d);
        uVar14 = in_stack_00000048 >> 4 & 0x1ff;
        uVar16 = uVar14;
        if (((uVar1 < uVar14) || ((in_stack_00000048 & 1) == 0)) && ((in_stack_00000048 >> 0xd & 1) == 0)) {
            if ((in_stack_00000048 & 1) != 0) {
                uVar1 = in_stack_00000048 >> 1 & 7;
                uVar16 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar1 + 6);
                uVar16 = (**(arg1 + 0x30))(uVar16 & uVar9,1);
                uVar23 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar1 + 6);
                uVar16 = ~uVar23 & uVar9 | uVar16;
                *in_stack_000000a0 = uVar16;
            }
        }
        else {
            uVar23 = (**(arg1 + 0x30))(uVar1 + uVar14,0x1d);
            uVar16 = uVar9 & 0x1fffffff;
            *in_stack_000000a0 = uVar23 | uVar16;
        }
        *in_stack_000000a0 = uVar9;
        return CONCAT71(uVar16 >> 8,1);
    }
    goto code_r0x00013e71;
}


/* fcn.000138ec @ 0x138ec */

ulong fcn.000138ec(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    char cVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    bool bVar12;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint64_t in_stack_00000038;
    uint64_t in_stack_00000040;
    uint64_t *in_stack_00000050;
    char *in_stack_00000058;
    
    bVar12 = (arg4 >> 4 & 1) != arg2;
    uVar5 = bVar12;
    uVar10 = bVar12;
    uVar2 = (**(arg1 + 0x38))(arg3,6);
    if ((arg4 & 0x100U) == 0) {
        uVar7 = arg4 & 0xff000;
        uVar3 = (**(arg1 + 0x30))(uVar7,0xb);
        uVar4 = (**(arg1 + 0x30))(uVar3,1);
        if (uVar4 <= uVar2) {
            iVar6 = (**(arg1 + 0x30))(uVar7,0xb);
            uVar2 = uVar2 + iVar6;
            goto code_r0x00013a24;
        }
        if ((in_stack_00000028 >> 0x1c & 1) == 0) {
            uVar2 = (**(arg1 + 0x30))(uVar2,1);
        }
        else {
            uVar9 = in_stack_00000028 >> 0x18 & 7;
            uVar5 = (**(arg1 + 0x30))(0xffffffffffffffff,uVar9);
            uVar2 = (**(arg1 + 0x30))(uVar2 & uVar5,1);
            (**(arg1 + 0x30))(0xffffffffffffffff,uVar9);
            uVar7 = 0;
            uVar11 = 0;
            do {
                uVar1 = (**(arg1 + 0x38))(in_stack_00000028 >> 6 & uVar2 & 0x3fff,uVar11);
                uVar7 = uVar7 ^ uVar1;
                uVar11 = uVar11 + 1;
            } while (uVar11 < 0xe);
            uVar5 = (uVar7 & 1 ^ uVar10) << uVar9;
        }
    }
    else {
        uVar7 = uVar10 ^ 1;
        if (((arg4 & 0xffffffffU) >> 9 & 1) == 0) {
            uVar7 = uVar10;
        }
        uVar5 = uVar7 << (arg4 >> 0x18 & 7) + 0x18;
    }
    uVar2 = uVar2 | uVar5;
code_r0x00013a24:
    uVar2 = (**(arg1 + 0x30))(uVar2,6);
    if ((in_stack_00000040 < uVar2) || (uVar2 < in_stack_00000038)) {
        cVar8 = '\0';
    }
    else {
        cVar8 = '\x01';
    }
    *in_stack_00000058 = cVar8;
    if ((cVar8 == '\0') && (in_stack_00000038 < in_stack_00000040)) {
        uVar5 = in_stack_00000030;
        if ((uVar2 <= (uVar5 - in_stack_00000038) + in_stack_00000040) && (uVar5 <= uVar2)) {
            uVar2 = (uVar2 - uVar5) + in_stack_00000038;
        }
    }
    *in_stack_00000050 = arg3 & 0x3f | uVar2;
    return 1;
}


/* fcn.0001564c @ 0x1564c */

uchar * fcn.0001564c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000165a4 @ 0x165a4 */

uint64_t fcn.000165a4(uint32_t arg1)

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


/* fcn.000165d0 @ 0x165d0 */

uint64_t fcn.000165d0(uint32_t arg1,int64_t arg2)

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


/* fcn.000164c8 @ 0x164c8 */

void fcn.000164c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00015758(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


