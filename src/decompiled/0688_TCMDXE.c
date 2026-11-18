// decompiled by r2ghidra: 0688_TCMDXE.pe32
// functions: 18

/* entry0 @ 0x10324 */

ulong entry0(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong auStackX_18 [2];
    
    fcn.00010380(param_1,param_2);
    if (*(*0x10d18 + 0xf00) == 0x1b4e) {
        auStackX_18[0] = 0;
        uVar1 = (**(*0x10d58 + 0x80))(auStackX_18,0x10cd0,0,0x10ce0);
    }
    else {
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10d58 = *(arg1 + 0x60);
    *0x10d50 = arg1;
    fcn.00010be4();
    puVar4 = fcn.00010be4();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d4:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
                return;
            }
            if ((*0x10d20 == *(puVar4 + 4)) && (*0x10d28 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d4;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010be4 @ 0x10be4 */

int64_t fcn.00010be4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10d60 == 0) {
        *0x10d60 = 0;
        if (*(*0x10d50 + 0x68) != 0) {
            piVar2 = *(*0x10d50 + 0x70);
            do {
                if ((*0x10cc0 == *piVar2) && (*0x10cc8 == piVar2[1])) {
                    *0x10d60 = (*(*0x10d50 + 0x70))[uVar1 * 3 + 2];
                    return *0x10d60;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10d50 + 0x68));
        }
    }
    return *0x10d60;
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


/* fcn.00010bac @ 0x10bac */

int64_t fcn.00010bac(int64_t arg1)

{
    int iVar1;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    int64_t in_stack_00000008;
    
    iVar1 = fcn.00010934(CONCAT71(&stack0x00000028 >> 8,arg1 - 0xfed40000U >> 0xc),in_RDX,in_R8,in_R9,
                         in_stack_00000008);
    return iVar1;
}


/* fcn.00010934 @ 0x10934 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.00010934(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    uchar *puVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    char *pcVar5;
    unkbyte7 Var6;
    int64_t arg2_00;
    uint32_t *arg2_01;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong uVar11;
    uint64_t arg1_00;
    uint32_t uVar12;
    int64_t iVar13;
    uchar uVar14;
    uint32_t *in_stack_00000028;
    int64_t var_48h;
    uint16_t auStack_38 [2];
    uint32_t uStack_34;
    uint32_t auStack_30 [2];
    uint32_t var_10h;
    int32_t var_ch;
    int64_t var_8h;
    
    if (*0xfed40000 == -1) {
        return 3;
    }
    uVar14 = arg1;
    pcVar5 = ((arg1 & 0xffU) + 0xfed40) * 0x1000;
    if (*pcVar5 == -1) {
        return 6;
    }
    *pcVar5 = '\x02';
    arg2_00 = CONCAT71(arg2 >> 8,0xa0);
    uVar12 = (arg1 & 0xff) * 0x1000;
    uStack_34 = uVar12;
    uVar3 = fcn.00010840(uVar12 + 0xfed40000,arg2_00,0);
    uVar8 = 0;
    if (uVar3 != 0) {
        return uVar3;
    }
    iVar13 = (arg1 & 0xffU) * 0x1000;
    arg1_00 = uVar12 + 0xfed40018;
    uVar11 = 0;
    arg2_01 = CONCAT71(arg2_00 >> 8,0x40);
    *(iVar13 + 0xfed40018) = 0x40;
    uVar3 = arg1_00;
    uVar4 = fcn.00010840(arg1_00,arg2_01,0);
    if (uVar4 != 0) {
        return uVar4;
    }
    uVar7 = arg3;
    if (uVar7 != 0) {
        do {
            arg2_01 = auStack_38;
            iVar2 = fcn.000108a8(CONCAT71(uVar3 >> 8,uVar14),arg2_01);
            if (iVar2 != 0) goto code_r0x00010b63;
            uVar3 = auStack_38[0];
            if (auStack_38[0] != 0) {
                arg2_01 = 0xfed40024;
                do {
                    if (uVar7 <= uVar8) goto code_r0x00010a2d;
                    puVar1 = uVar8 + arg2;
                    uVar8 = uVar8 + 1;
                    *(iVar13 + 0xfed40024) = *puVar1;
                    auStack_38[0] = uVar3 - 1;
                    uVar3 = auStack_38[0];
                } while (auStack_38[0] != 0);
            }
        } while (uVar8 < uVar7);
    }
code_r0x00010a2d:
    arg2_01 = CONCAT71(arg2_01 >> 8,0x80);
    iVar2 = fcn.00010840(uVar12 + 0xfed40018,arg2_01,CONCAT71(uVar11 >> 8,8));
    if (iVar2 == 0) {
        arg2_01 = CONCAT71(arg2_01 >> 8,0x90);
        *(iVar13 + 0xfed40018) = 0x20;
        uVar3 = arg1_00;
        iVar2 = fcn.00010840(arg1_00,arg2_01,0);
        if (iVar2 == 0) {
            uVar8 = 0;
            auStack_38[0] = 0;
            do {
                arg2_01 = auStack_38;
                uVar3 = CONCAT71(uVar3 >> 8,uVar14);
                iVar2 = fcn.000108a8(uVar3,arg2_01);
                if (iVar2 != 0) goto code_r0x00010b63;
                if (auStack_38[0] != 0) {
                    do {
                        uVar3 = uVar8;
                        uVar12 = uVar3 + 1;
                        uVar8 = uVar12;
                        *(uVar3 + arg4) = *(iVar13 + 0xfed40024);
                        if (uVar12 == 10) break;
                        auStack_38[0] = auStack_38[0] - 1;
                    } while (auStack_38[0] != 0);
                    arg1_00 = uStack_34 + 0xfed40018;
                    uVar12 = uStack_34;
                }
                uVar7 = uVar8;
            } while (uVar7 < 10);
            arg2_01 = arg4 + 2;
            (**(*0x10d58 + 0x160))(auStack_30,arg2_01);
            uVar3 = auStack_30[0] << 0x10;
            uVar9 = (auStack_30[0] & 0xff0000 | auStack_30[0] >> 0x10) >> 8 |
                    (auStack_30[0] & 0xff00 | auStack_30[0] << 0x10) << 8;
            if (*in_stack_00000028 < uVar9) {
                uVar10 = 5;
                goto code_r0x00010b68;
            }
            *in_stack_00000028 = uVar9;
            do {
                uVar10 = 0;
                if (uVar9 <= uVar7) goto code_r0x00010b68;
                while( true ) {
                    Var6 = uVar3 >> 8;
                    uVar7 = uVar8;
                    if (auStack_38[0] == 0) break;
                    uVar3 = CONCAT71(Var6,*(iVar13 + 0xfed40024));
                    *(uVar8 + arg4) = *(iVar13 + 0xfed40024);
                    if (uVar7 + 1 == uVar9) {
                        uVar10 = 0;
                        arg2_01 = arg4;
                        goto code_r0x00010b68;
                    }
                    auStack_38[0] = auStack_38[0] - 1;
                    uVar8 = uVar7 + 1;
                }
                arg2_01 = auStack_38;
                uVar3 = CONCAT71(Var6,uVar14);
                iVar2 = fcn.000108a8(uVar3,arg2_01);
            } while (iVar2 == 0);
        }
code_r0x00010b63:
        uVar10 = 1;
    }
    else {
        uVar10 = 4;
    }
code_r0x00010b68:
    *(uVar12 + 0xfed40018) = 0x40;
    fcn.00010840(arg1_00,CONCAT71(arg2_01 >> 8,0x40),0);
    *(uVar12 + 0xfed40000) = 0x20;
    return uVar10;
}


/* fcn.00010448 @ 0x10448 */

int64_t fcn.00010448(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int16_t iStack_28;
    
    iVar1 = fcn.00010bac(*0x10d18);
    if ((iVar1 == 0) && (iStack_28 != -0x3c00)) {
        iVar1 = -0x7ffffffffffffff0;
    }
    return iVar1;
}


/* fcn.000104b8 @ 0x104b8 */

int64_t fcn.000104b8(void)

{
    int64_t iVar1;
    int16_t iStack_18;
    
    iVar1 = fcn.00010bac(*0x10d18);
    if ((iVar1 == 0) && (iStack_18 != -0x3c00)) {
        iVar1 = -0x7ffffffffffffff0;
    }
    return iVar1;
}


/* fcn.0001051c @ 0x1051c */

int64_t fcn.0001051c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int16_t iStack_28;
    
    iVar1 = fcn.00010bac(*0x10d18);
    if ((iVar1 == 0) && (iStack_28 != -0x3c00)) {
        iVar1 = -0x7ffffffffffffff0;
    }
    return iVar1;
}


/* fcn.00010584 @ 0x10584 */

int64_t fcn.00010584(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    int16_t iStack_30;
    uchar auStack_22 [26];
    
    iVar1 = fcn.00010bac(*0x10d18);
    (**(*0x10d58 + 0x160))(in_stack_00000028,auStack_22,arg3 & 0xffffffff);
    if ((iVar1 == 0) && (iStack_30 != -0x3c00)) {
        iVar1 = -0x7ffffffffffffff0;
    }
    return iVar1;
}


/* fcn.00010c50 @ 0x10c50 */

void fcn.00010c50(int64_t arg1)

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
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010840 @ 0x10840 */

ulong fcn.00010840(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    while (((*(arg1 & 0xffffffff) & arg2) != arg2 || ((arg3 & *(arg1 & 0xffffffff)) != 0))) {
        fcn.00010c50(0x6b);
        uVar1 = uVar1 + 1;
        if (49999 < uVar1) {
            return 1;
        }
    }
    return 0;
}


/* fcn.000108a8 @ 0x108a8 */

ulong fcn.000108a8(int64_t arg1,uint32_t *arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int16_t iVar3;
    
    uVar1 = 0;
    iVar2 = (arg1 & 0xff) << 0xc;
    do {
        iVar3 = *(iVar2 + 0xfed4001a) * 0x100 + *(iVar2 + 0xfed40019);
        *arg2 = iVar3;
        if (iVar3 != 0) {
            return 0;
        }
        fcn.00010c50(0x6b);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 50000);
    return 1;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


