// decompiled by r2ghidra: 0658_AmiTcgPlatformDxe.pe32
// functions: 57

/* entry0 @ 0x103e4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010400(arg1,in_RDX);
    fcn.00010564(arg1,in_RDX);
    return;
}


/* fcn.00010400 @ 0x10400 */

void fcn.00010400(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x161d8 = *(arg1 + 0x60);
    *0x161e0 = *(arg1 + 0x58);
    *0x161d0 = arg1;
    fcn.00014fa8();
    puVar4 = fcn.00014fa8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001045f:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010380();
                fcn.00010370();
                uVar2 = in(0x1808);
                fcn.00010350(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00010340();
                }
                fcn.00010350(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010370();
                }
                else {
                    fcn.00010360();
                }
code_r0x000104c8:
                (**(*0x161d8 + 0x140))(0x15950,0,0x161f8);
                (**(*0x161d8 + 0x140))(0x15940,0,0x16218);
                (**(*0x161d8 + 0x140))(0x158f0,0,0x16208);
                (**(*0x161d8 + 0x140))(0x15a30,0,0x16200);
    //WARNING: Could not recover jumptable at 0x0001055d. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x161d8 + 0x140))(0x15930,0,0x16210);
                return;
            }
            if ((*0x15a78 == *(puVar4 + 4)) && (*0x15a80 == *(puVar4 + 8))) goto code_r0x000104c8;
        }
        else if (uVar1 == 4) goto code_r0x0001045f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010564 @ 0x10564 */

ulong fcn.00010564(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t iStackX_10;
    ulong *apuStackX_18 [2];
    
    iStackX_10 = arg1;
    (**(*0x161d8 + 0x80))(&iStackX_10,88000,0,0x15a40);
    fcn.00014f48();
    iVar1 = (**(*0x161d8 + 0x118))(iStackX_10,0x15860,&uStackX_8,iStackX_10,0,2);
    if (-1 < iVar1) {
        iVar1 = (**(*0x161d8 + 0x140))(0x15940,0,apuStackX_18);
        if (-1 < iVar1) {
            (**apuStackX_18[0])(apuStackX_18[0],uStackX_8,0,0x168a0);
        }
    }
    fcn.000110b4();
    return 0;
}


/* fcn.00014f48 @ 0x14f48 */

ulong fcn.00014f48(void)

{
    ulong uVar1;
    
    if (*(*0x161d0 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (**(*0x161d8 + 0x170))(0x200,0x10,0x13de0,0,0x15840,0x168b0);
    }
    return uVar1;
}


/* fcn.000110b4 @ 0x110b4 */

//WARNING: Variable defined which should be unmapped: var_1fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_9h

ulong fcn.000110b4(void)

{
    char cVar1;
    ulong uVar2;
    char *pcVar3;
    uint64_t arg2;
    uint64_t uVar4;
    int32_t var_bh;
    char *var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_2fh;
    char *var_37h;
    int64_t var_67h;
    int64_t var_6fh;
    uint uStackY_78;
    uint uStackY_74;
    uint uStackY_70;
    uint uStackY_6c;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    char16_t *apcStack_50 [5];
    char16_t *pcStack_28;
    int64_t var_19h;
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    stack0x00000008 = 0;
    apcStack_50[0] = L"SecureBoot";
    apcStack_50[1] = 0x15ae8;
    apcStack_50[2] = 0x15af0;
    apcStack_50[3] = 0x15af8;
    apcStack_50[4] = 0x15b00;
    pcStack_28 = L"ImageExecTable";
    uVar5 = 0x80000001;
    uVar6 = 0x80000001;
    uVar7 = 0x80000001;
    uVar8 = 0x80000001;
    uVar2 = (**(*0x161d8 + 0x140))(0x159d0,0,&var_17h + 1);
    uVar4 = 0;
    do {
        if (uVar4 - 3 < 2) {
            uStackY_78 = *0x15aa0;
            uStackY_74 = *0x15aa4;
            uStackY_70 = *0x15aa8;
            uStackY_6c = *0x15aac;
        }
        else {
            uStackY_78 = *0x157f0;
            uStackY_74 = *0x157f4;
            uStackY_70 = *0x157f8;
            uStackY_6c = *0x157fc;
        }
        pcVar3 = fcn.00010f70(apcStack_50[uVar4],&uStackY_78,&var_fh + 1);
        if (pcVar3 != NULL) {
            if ((uVar4 == 0) && (*pcVar3 == '\0')) {
                *0x161b8 = '\x01';
            }
            if (*0x161b8 != '\x01') {
                cVar1 = fcn.00015074();
                arg2 = *(apcStack_50 + uVar4 * 4 + -0x18);
                if (cVar1 == '\0') {
                    uVar2 = fcn.00010614(7,arg2,apcStack_50[uVar4],&uStackY_78,CONCAT44(uVar6,uVar5),
                                         CONCAT44(uVar8,uVar7));
                }
                else {
                    uVar2 = fcn.000107fc(7,arg2,apcStack_50[uVar4],&uStackY_78,CONCAT44(uVar6,uVar5),
                                         CONCAT44(uVar8,uVar7));
                }
                if (*0x16220 != '\0') {
                    fcn.0001571c(1,0x3058a15);
                }
                (**(*0x161d8 + 0x48))(pcVar3);
            }
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 5);
    return uVar2;
}


/* fcn.00014fa8 @ 0x14fa8 */

int64_t fcn.00014fa8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x161f0 == 0) {
        *0x161f0 = 0;
        if (*(*0x161d0 + 0x68) != 0) {
            piVar2 = *(*0x161d0 + 0x70);
            do {
                if ((*0x159b0 == *piVar2) && (*0x159b8 == piVar2[1])) {
                    *0x161f0 = (*(*0x161d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x161f0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x161d0 + 0x68));
        }
    }
    return *0x161f0;
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00015014 @ 0x15014 */

void fcn.00015014(int64_t arg1)

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
            fcn.00010340();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00015074 @ 0x15074 */

int16_t fcn.00015074(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    while ((uVar1 = *0xfed40f00 >> 8, *(uVar2 + 0x15a88) != *0xfed40f00 || (*(uVar2 + 0x15a8a) != *0xfed40f02))) {
        uVar2 = uVar2 + 4;
        if (0xb < uVar2) {
            return uVar1 << 8;
        }
    }
    return CONCAT11(uVar1,1);
}


/* fcn.00010f70 @ 0x10f70 */

int64_t fcn.00010f70(char *arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    *arg3 = 0;
    iVar1 = (**(*0x161e0 + 0x48))(arg1,arg2,0,arg3,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = (**(*0x161d8 + 0x40))(4,*arg3,aiStackX_18);
        if (((aiStackX_18[0] != 0) && (-1 < iVar1)) &&
           (iVar1 = (**(*0x161e0 + 0x48))(arg1,arg2,0,arg3,aiStackX_18[0]), iVar1 < 0)) {
            (**(*0x161d8 + 0x48))(aiStackX_18[0]);
            aiStackX_18[0] = 0;
            *arg3 = 0;
        }
    }
    else {
        aiStackX_18[0] = 0;
    }
    return aiStackX_18[0];
}


/* fcn.000107fc @ 0x107fc */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000107fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    int16_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int16_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uchar auStackX_18 [8];
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    int64_t var_40h;
    uint *puStack_48;
    uint *puStack_40;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar7 = 0;
    iStack_38 = 0;
    puStack_40 = NULL;
    puStack_48 = NULL;
    (**(*0x161d8 + 0x140))(0x159d0,0,&iStack_38);
    iVar1 = *arg3;
    piVar5 = arg3;
    while (iVar1 != 0) {
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + 1;
        iVar1 = *piVar5;
    }
    uVar8 = in_stack_00000030 + 0x20 + iVar7 * 2;
    iVar6 = (**(*0x161d8 + 0x40))(4,uVar8 + 0x2c,&puStack_40);
    if ((-1 < iVar6) && (puStack_40 != NULL)) {
        *puStack_40 = arg1;
        puStack_40[1] = arg2;
        puStack_40[10] = uVar8;
        iVar6 = (**(*0x161d8 + 0x40))(4,uVar8,&puStack_48);
        if ((iVar6 < 0) || (puStack_48 == NULL)) {
            (**(*0x161d8 + 0x48))(puStack_40);
            iVar6 = -0x7ffffffffffffff7;
        }
        else {
            uVar2 = *(arg4 + 4);
            uVar3 = *(arg4 + 8);
            uVar4 = *(arg4 + 0xc);
            *puStack_48 = *arg4;
            puStack_48[1] = uVar2;
            puStack_48[2] = uVar3;
            puStack_48[3] = uVar4;
            *(puStack_48 + 4) = iVar7;
            *(puStack_48 + 6) = in_stack_00000030;
            (**(*0x161d8 + 0x160))(puStack_48 + 8,arg3,iVar7 * 2);
            (**(*0x161d8 + 0x160))(puStack_48 + iVar7 * 2 + 0x20,in_stack_00000028,in_stack_00000030);
            (**(*0x161d8 + 0x160))(puStack_40 + 0xb,puStack_48,puStack_40[10]);
            iVar6 = (**(iStack_38 + 0x20))
                              (iStack_38,puStack_48,puStack_40[10],4,puStack_40,auStackX_18,auStack_30);
            if (puStack_40 != NULL) {
                (**(*0x161d8 + 0x48))();
            }
            if (puStack_48 != NULL) {
                (**(*0x161d8 + 0x48))();
            }
        }
    }
    return iVar6;
}


/* fcn.00010614 @ 0x10614 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00010614(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    int16_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int16_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uchar auStackX_18 [8];
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    int64_t var_40h;
    uint *puStack_48;
    uint *puStack_40;
    int64_t iStack_38;
    uchar auStack_30 [8];
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar7 = 0;
    iStack_38 = 0;
    puStack_40 = NULL;
    puStack_48 = NULL;
    (**(*0x161d8 + 0x140))(0x159d0,0,&iStack_38);
    iVar1 = *arg3;
    piVar5 = arg3;
    while (iVar1 != 0) {
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + 1;
        iVar1 = *piVar5;
    }
    uVar8 = in_stack_00000030 + 0x20 + iVar7 * 2;
    iVar6 = (**(*0x161d8 + 0x40))(4,uVar8 + 0x20,&puStack_40);
    if ((-1 < iVar6) && (puStack_40 != NULL)) {
        *puStack_40 = arg1;
        puStack_40[1] = arg2;
        puStack_40[7] = uVar8;
        iVar6 = (**(*0x161d8 + 0x40))(4,uVar8,&puStack_48);
        if ((iVar6 < 0) || (puStack_48 == NULL)) {
            (**(*0x161d8 + 0x48))(puStack_40);
            iVar6 = -0x7ffffffffffffff7;
        }
        else {
            uVar2 = *(arg4 + 4);
            uVar3 = *(arg4 + 8);
            uVar4 = *(arg4 + 0xc);
            *puStack_48 = *arg4;
            puStack_48[1] = uVar2;
            puStack_48[2] = uVar3;
            puStack_48[3] = uVar4;
            *(puStack_48 + 4) = iVar7;
            *(puStack_48 + 6) = in_stack_00000030;
            (**(*0x161d8 + 0x160))(puStack_48 + 8,arg3,iVar7 * 2);
            (**(*0x161d8 + 0x160))(puStack_48 + iVar7 * 2 + 0x20,in_stack_00000028,in_stack_00000030);
            (**(*0x161d8 + 0x160))(puStack_40 + 8,puStack_48,puStack_40[7]);
            iVar6 = (**(iStack_38 + 0x20))(iStack_38,puStack_48,puStack_40[7],4,puStack_40,auStackX_18,auStack_30)
            ;
            if (puStack_40 != NULL) {
                (**(*0x161d8 + 0x48))();
            }
            if (puStack_48 != NULL) {
                (**(*0x161d8 + 0x48))();
            }
        }
    }
    return iVar6;
}


/* fcn.0001571c @ 0x1571c */

ulong fcn.0001571c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x16228 != NULL) {
code_r0x0001578c:
            uVar2 = (***0x16228)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,0x15a10,0);
            return uVar2;
        }
        if ((*0x161d8 != 0) && (*(*0x161d8 + 0x140) != NULL)) {
            iVar1 = (**(*0x161d8 + 0x140))(0x15800,0,0x16228);
            if (iVar1 < 0) {
                *0x16228 = NULL;
            }
            if (*0x16228 != NULL) goto code_r0x0001578c;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00011030 @ 0x11030 */

ulong fcn.00011030(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    
    iVar2 = fcn.00010f70(arg1,0x157f0,arg2);
    *arg3 = iVar2;
    if (iVar2 == 0) {
        uVar3 = 0x800000000000000e;
    }
    else {
        cVar1 = fcn.00015074();
        if (cVar1 == '\0') {
            uVar3 = fcn.00010614(1,0x80000002,arg1,0x157f0,unaff_RBX,unaff_RSI);
        }
        else {
            uVar3 = fcn.000107fc(1,0x80000002,arg1,0x157f0,unaff_RBX,unaff_RSI);
        }
    }
    return uVar3;
}


/* fcn.00013f68 @ 0x13f68 */

void fcn.00013f68(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013fcc(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013fcc @ 0x13fcc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013fcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001402b;
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
code_r0x0001402b:
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
        uVar21 = fcn.00013ed4(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00013de4(arg4,0xf4241);
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
            pcVar8 = 0x15de4;
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
code_r0x000143e6:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x15de4;
            }
            else {
                pcVar8 = 0x15de8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x0001417d:
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
                    goto code_r0x00014320;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00014337;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00014320;
                        }
                        goto code_r0x00014337;
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
code_r0x00014320:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x0001417d;
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
                        goto code_r0x0001417d;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00014337;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00014320;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00014337:
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
                        fcn.00014d34(&var_68h_2,0x26,0,0x15d78);
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
                            goto code_r0x000143e6;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000145cf;
                        if (uStack_a8 == 0x58) goto code_r0x000146c4;
                        if (uStack_a8 == 0x61) goto code_r0x000145d8;
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
                            goto code_r0x0001415e;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001415a;
                        goto code_r0x000146db;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x15de4;
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
                goto code_r0x00014908;
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
                            iVar12 = 0x15e7b;
                            goto code_r0x0001468b;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001468b:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00014908;
                    }
                    fcn.00014d34(&var_68h_2,0x26,0,0x15ddc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000145cf:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000145d8:
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
                            pcVar8 = 0x15d58;
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00014908;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001415a;
                            goto code_r0x000146c8;
                        }
                        goto code_r0x000146cd;
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
                        goto code_r0x00014908;
                    }
                    fcn.00014d34(&var_68h_2,0x26,0,0x15dc0);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00014908;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x000146c4:
            uVar21 = uVar21 | 0x20;
code_r0x000146c8:
            uVar21 = uVar21 | 0x80;
code_r0x000146cd:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000146db:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x0001471d;
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
code_r0x0001471d:
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
code_r0x000147a5:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x000147a5;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFP"[uVar10 % uVar16];
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
code_r0x0001415a:
            pcVar8 = &uStack_a8;
code_r0x0001415e:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00014908:
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
                arg1 = fcn.00013f98(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013f98(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00013f98(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00013f98(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.000114c8 @ 0x114c8 */

int64_t fcn.000114c8(void)

{
    int64_t iVar1;
    char acStackX_8 [8];
    uint auStackX_10 [2];
    ulong auStackX_18 [2];
    
    auStackX_10[0] = 7;
    acStackX_8[0] = '\0';
    auStackX_18[0] = 1;
    iVar1 = (**(*0x161e0 + 0x48))(L"MemoryOverwriteRequestControl",0x15920,auStackX_10,auStackX_18,acStackX_8);
    if ((iVar1 < 0) || (acStackX_8[0] != '\0')) {
        acStackX_8[0] = '\0';
        iVar1 = (**(*0x161e0 + 0x58))(L"MemoryOverwriteRequestControl",0x15920,7,1,acStackX_8);
    }
    if (*0x16220 != '\0') {
        fcn.0001571c(1,0x3058a2a);
    }
    return iVar1;
}


/* fcn.00010e7c @ 0x10e7c */

int64_t fcn.00010e7c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint *puStackX_8;
    uint auStackX_10 [2];
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_40h;
    
    auStackX_10[0] = arg2;
    puStackX_8 = NULL;
    (**(*0x161d8 + 0x140))(0x159d0,0,&iStackX_18);
    uVar3 = 0;
    cVar1 = *arg1;
    while (cVar1 != '\0') {
        uVar3 = uVar3 + 1;
        cVar1 = *(uVar3 + arg1);
    }
    iVar2 = (**(*0x161d8 + 0x40))(4,(uVar3 & 0xffffffff) + 0x2c,&puStackX_8);
    if ((-1 < iVar2) && (puStackX_8 != NULL)) {
        *puStackX_8 = 5;
        puStackX_8[1] = 0x80000007;
        puStackX_8[10] = uVar3;
        (**(*0x161d8 + 0x160))(puStackX_8 + 0xb,arg1,uVar3 & 0xffffffff);
        iVar2 = (**(iStackX_18 + 0x20))(iStackX_18,arg1,puStackX_8[10],4,puStackX_8,auStackX_10,&var_28h);
        if (puStackX_8 != NULL) {
            (**(*0x161d8 + 0x48))();
        }
    }
    return iVar2;
}


/* fcn.00010d88 @ 0x10d88 */

int64_t fcn.00010d88(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint *puStackX_8;
    uint auStackX_10 [2];
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_40h;
    
    auStackX_10[0] = arg2;
    puStackX_8 = NULL;
    (**(*0x161d8 + 0x140))(0x159d0,0,&iStackX_18);
    uVar3 = 0;
    cVar1 = *arg1;
    while (cVar1 != '\0') {
        uVar3 = uVar3 + 1;
        cVar1 = *(uVar3 + arg1);
    }
    iVar2 = (**(*0x161d8 + 0x40))(4,(uVar3 & 0xffffffff) + 0x20,&puStackX_8);
    if ((-1 < iVar2) && (puStackX_8 != NULL)) {
        *puStackX_8 = 5;
        puStackX_8[1] = 0x80000007;
        puStackX_8[7] = uVar3;
        (**(*0x161d8 + 0x160))(puStackX_8 + 8,arg1,uVar3 & 0xffffffff);
        iVar2 = (**(iStackX_18 + 0x20))(iStackX_18,arg1,puStackX_8[7],4,puStackX_8,auStackX_10,&var_28h);
        if (puStackX_8 != NULL) {
            (**(*0x161d8 + 0x48))();
        }
    }
    return iVar2;
}


/* fcn.0001123c @ 0x1123c */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001123c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong noname_1;
    uint64_t uVar2;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    char16_t acStack_38 [4];
    char16_t acStack_30 [4];
    int64_t var_20h_2;
    int32_t var_10h;
    
    iStackX_10 = 0;
    var_20h_2._0_4_ = str.BootOrder._16_4_;
    acStack_38 = str.BootOrder._0_8_;
    acStack_30 = str.BootOrder._8_8_;
    iVar1 = fcn.00011030(acStack_38,arg1,&uStackX_8,&var_20h);
    if (iVar1 != -0x7ffffffffffffff2) {
        if (iVar1 < 0) {
            return iVar1;
        }
        uStackX_8 = uStackX_8 >> 1;
        uVar2 = 0;
        if (uStackX_8 != 0) {
            do {
                noname_1 = 0x14;
                fcn.00013f68(acStack_38,0x14,0x15b40,*(_var_20h + uVar2 * 2));
                iVar1 = fcn.00011030(acStack_38,noname_1,&var_28h,&iStackX_10);
                if ((-1 < iVar1) && (iStackX_10 != 0)) {
                    (**(*0x161d8 + 0x48))();
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_8);
        }
        (**(*0x161d8 + 0x48))(_var_20h);
    }
    return 0;
}


/* fcn.00011574 @ 0x11574 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_14h

int64_t fcn.00011574(void)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint auStackX_8 [2];
    uchar auStackX_10 [8];
    uint32_t *puStackX_18;
    int32_t var_28h;
    int64_t var_30h_2;
    int64_t var_38h;
    int64_t var_40h;
    uchar auStack_58 [8];
    uint32_t auStack_50 [4];
    int64_t var_38h_2;
    int32_t var_30h;
    int32_t var_2ch;
    uchar auStack_30 [20];
    int32_t var_14h;
    int64_t var_10h;
    
    cVar1 = fcn.00015074();
    uVar3 = 0;
    if (cVar1 == '\0') {
        do {
            puStackX_18 = NULL;
            auStackX_8[0] = 0;
            iVar2 = (**(*0x161d8 + 0x140))(0x159d0,0,&puStackX_18);
            if (-1 < iVar2) {
                auStack_50[1] = 4;
                var_2ch = 4;
                auStack_50[0] = uVar3;
                (**(*0x161d8 + 0x160))(auStack_30,auStackX_8,4);
                iVar2 = (**(puStackX_18 + 8))(puStackX_18,auStackX_8,var_2ch,4,auStack_50,auStackX_10,&var_28h);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 8);
    }
    else {
        do {
            puStackX_18 = NULL;
            auStackX_8[0] = 0;
            (**(*0x161d8 + 0x140))(0x159d0,0,&var_28h);
            iVar2 = (**(*0x161d8 + 0x40))(4,0x30,&puStackX_18);
            if ((-1 < iVar2) && (puStackX_18 != NULL)) {
                *puStackX_18 = uVar3;
                puStackX_18[1] = 4;
                puStackX_18[10] = 4;
                (**(*0x161d8 + 0x160))(puStackX_18 + 0xb,auStackX_8,4);
                iVar2 = (**(_var_28h + 0x20))
                                  (_var_28h,auStackX_8,puStackX_18[10],4,puStackX_18,auStackX_10,auStack_58);
                if (puStackX_18 != NULL) {
                    (**(*0x161d8 + 0x48))();
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 8);
    }
    if (*0x16220 != '\0') {
        fcn.0001571c(1,0x3058a1a);
    }
    return iVar2;
}


/* fcn.00010b24 @ 0x10b24 */

uint fcn.00010b24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    ushort uStack_118;
    uint uStack_116;
    uint uStack_112;
    uchar auStack_10e [262];
    
    uStack_118 = 0xc100;
    iVar3 = arg3 + 10;
    uVar1 = iVar3 >> 0x10;
    uVar2 = arg2 >> 0x10;
    uStack_112 = CONCAT22(arg2 << 8 | arg2 >> 8,uVar2 << 8 | uVar2 >> 8);
    uStack_116 = CONCAT22(iVar3 << 8 | iVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
    (**(*0x161d8 + 0x160))(auStack_10e,arg4,arg3);
    (**(arg1 + 0x18))(arg1,iVar3,&uStack_118,0x400,0x16470);
    return *0x16476;
}


/* fcn.000112f8 @ 0x112f8 */

int64_t fcn.000112f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    char cVar2;
    int64_t iVar3;
    uint *puVar4;
    uchar auStackX_20 [8];
    int64_t var_bp_48h;
    int32_t *piVar5;
    uchar *puStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uchar auStack_c8 [16];
    int32_t aiStack_b8 [7];
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    ushort uStack_90;
    ushort uStack_8e;
    uchar auStack_8c [16];
    int32_t var_bp_74h;
    int32_t var_bp_70h;
    int32_t var_6ch;
    int16_t var_68h;
    int16_t var_66h;
    int64_t var_64h;
    int32_t var_50h;
    int32_t var_4ch;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    ushort uStack_44;
    ushort uStack_42;
    uchar auStack_40 [16];
    int32_t var_bp_28h;
    int32_t var_24h;
    int32_t var_bp_20h;
    int16_t var_1ch;
    int16_t var_1ah;
    int64_t var_18h;
    
    cVar2 = fcn.00015074();
    if (cVar2 == '\0') {
        iVar3 = (**(*0x161d8 + 0x140))(0x159d0,0,&iStack_d8);
        if (-1 < iVar3) {
            puStack_e8 = auStack_8c;
            aiStack_b8[0] = 2;
            aiStack_b8[1] = 6;
            uStack_98 = 7;
            uStack_94 = 0x18;
            uStack_9c = 0x20;
            uStack_90 = 0;
            uStack_e0 = 0x14;
            uStack_8e = arg3;
            iVar3 = (**(iStack_d8 + 8))(iStack_d8,arg1,arg2,4,&uStack_e0,&puStack_e8);
            if (iVar3 < 0) {
                return iVar3;
            }
            puVar4 = &uStack_98;
            piVar5 = aiStack_b8;
            uVar1 = uStack_9c;
code_r0x000114a5:
            iVar3 = (**(iStack_d8 + 0x20))(iStack_d8,puVar4,uVar1,4,piVar5,auStackX_20,auStack_c8);
            return iVar3;
        }
    }
    else {
        iVar3 = (**(*0x161d8 + 0x140))(0x159d0,0,&iStack_d0);
        if (-1 < iVar3) {
            puStack_e8 = auStack_40;
            var_bp_70h = 2;
            var_6ch = 6;
            uStack_4c = 7;
            uStack_48 = 0x24;
            uStack_50 = 0x2c;
            uStack_44 = 0;
            uStack_e0 = 0x20;
            uStack_42 = arg3;
            iVar3 = (**(iStack_d0 + 8))(iStack_d0,arg1,arg2,4,&uStack_e0,&puStack_e8);
            if (iVar3 < 0) {
                return iVar3;
            }
            puVar4 = &uStack_4c;
            piVar5 = &var_bp_70h;
            iStack_d8 = iStack_d0;
            uVar1 = uStack_50;
            goto code_r0x000114a5;
        }
    }
    return 0;
}


/* fcn.000150b0 @ 0x150b0 */

int64_t fcn.000150b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x161e0 + 0x58))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffe)) {
        iVar1 = (**(*0x161e0 + 0x58))(arg1,arg2,0,0,0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x161e0 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
        }
    }
    else if (iVar1 == -0x7ffffffffffffff2) {
        (**(*0x161e0 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
    }
    return iVar1;
}


/* fcn.00015184 @ 0x15184 */

void fcn.00015184(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    uint auStack_28 [2];
    uint32_t uStack_20;
    
    aiStackX_18[0] = 0x18;
    iVar1 = (**(*0x161e0 + 0x48))(L"AMITCGPPIVAR",0x158a0,0,aiStackX_18,auStack_28);
    if (-1 < iVar1) {
        auStack_28[0] = 0;
        uStack_20 = arg1;
        fcn.000150b0(0x15cf8,0x158a0,7,aiStackX_18[0]);
    }
    return;
}


/* fcn.00010bec @ 0x10bec */

void fcn.00010bec(int64_t arg1)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    ulong auStackX_10 [3];
    
    auStackX_8[0] = arg1;
    *0x16258 = 0;
    auStackX_10[0] = 4;
    iVar1 = (**(*0x161e0 + 0x48))(0x15ab0,0x158c0,0,auStackX_10,auStackX_8);
    if (-1 < iVar1) {
        (**(*0x161e0 + 0x58))(0x15ab0,0x158c0,1,0,auStackX_8);
    }
    (**(*0x161e0 + 0x68))(0,0,0,0);
    iVar1 = (**(*0x161d8 + 0x50))(0x200,8,0x10bd4,0x16258,0x16238);
    if (-1 < iVar1) {
        (**(*0x161d8 + 0xa8))(0x157d0,*0x16238,0x16260);
    }
    return;
}


/* fcn.00015458 @ 0x15458 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00015458(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    uVar5 = 0;
    piStackX_18 = NULL;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x161d8 + 0x140))(0x15990,0,&iStackX_20);
    if (iVar1 < 0) {
        return 0xa000000000000002;
    }
    arg1_00 = *(*0x161d0 + 0x70);
    for (iVar1 = *(*0x161d0 + 0x68); iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((arg1_00 == 0x15910) || (iVar2 = fcn.000102c0(arg1_00,0x15910,0x10), iVar2 == 0)) {
            uVar3 = *(arg1_00 + 0x10);
            goto code_r0x000154fb;
        }
        arg1_00 = arg1_00 + 0x18;
    }
    uVar3 = uVar5;
code_r0x000154fb:
    if (uVar3 == 0) {
        return 0xa000000000000002;
    }
    iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_48);
    uVar3 = uVar5;
    uVar6 = uVar5;
    if (-1 < iVar1) {
        do {
            if (*piStackX_18 == 0x50434146) {
                if (auStackX_10[0] == 2) {
                    uVar6 = piStackX_18[10];
                }
                if ((auStackX_10[0] & 0x1c) != 0) {
                    uVar3 = *(piStackX_18 + 0x23);
                }
            }
            if ((uVar6 != 0) && (uVar3 != 0)) goto code_r0x00015573;
            uVar5 = uVar5 + 1;
            iVar1 = (**(iStackX_20 + 8))(uVar5,&piStackX_18,auStackX_10,auStack_48);
        } while (-1 < iVar1);
        if (uVar3 != 0) {
code_r0x00015573:
            *arg1 = uVar3;
            return 0;
        }
        if (uVar6 != 0) {
            *arg1 = uVar6;
            iVar1 = 0;
        }
    }
    uVar4 = 0;
    if (iVar1 != 0) {
        uVar4 = 0xa000000000000002;
    }
    return uVar4;
}


/* fcn.000155bc @ 0x155bc */

ulong fcn.000155bc(int64_t arg1,int64_t arg2,char **arg3,int64_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    int *piVar3;
    char *pcVar4;
    int *piVar5;
    uint32_t uVar6;
    int64_t iVar7;
    
    do {
        iVar7 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            iVar7 = iVar7 + 1;
            cVar1 = *(iVar7 + arg3);
        }
        (**(*0x161d8 + 0x160))();
        uVar6 = 0;
        if (arg2 != NULL) {
            pcVar4 = NULL;
            do {
                piVar5 = pcVar4 + arg1;
                if (*piVar5 == 0x5f5f5f5f) goto code_r0x0001562f;
                uVar6 = uVar6 + 1;
                pcVar4 = uVar6;
            } while (pcVar4 < arg2);
        }
        piVar5 = NULL;
code_r0x0001562f:
        if (piVar5 == NULL) {
            return 0x800000000000000e;
        }
        piVar3 = piVar5;
        if ((*(piVar5 + -1) + 0xa4U & 0xfd) == 0) {
            piVar3 = piVar5 + -1;
        }
        if (*(piVar3 + -1) == '\b') {
            uVar2 = *(piVar5 + 1);
            if (uVar2 < 2) {
                if (1 < arg4) {
                    return 0x8000000000000002;
                }
                *(piVar5 + 1) = arg4;
            }
            else if (uVar2 == 10) {
                *(piVar5 + 5) = arg4;
            }
            else if (uVar2 == 0xb) {
                *(piVar5 + 5) = arg4;
            }
            else if (uVar2 == 0xc) {
                *(piVar5 + 5) = arg4;
            }
            else {
                if (uVar2 != 0xe) {
                    return 0x8000000000000002;
                }
                *(piVar5 + 5) = arg4;
            }
            return 0;
        }
        arg2 = arg1 + arg2 + (4 - piVar5);
        arg1 = piVar5 + 1;
    } while( true );
}


/* fcn.00010ccc @ 0x10ccc */

int64_t fcn.00010ccc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ushort uStack_128;
    uint uStack_126;
    uint uStack_122;
    uint uStack_11e;
    uint uStack_11a;
    uint uStack_116;
    uchar auStack_108 [256];
    
    uStack_126 = 0x16000000;
    uStack_128 = 0xc100;
    cVar1 = fcn.00015074();
    uStack_11e = 0x4000000;
    uStack_116 = 0x8010000;
    uStack_122 = 0x65800000;
    if (cVar1 == '\0') {
        uStack_122 = 0x65000000;
    }
    uStack_11a = 0x4000000;
    iVar2 = (**(arg1 + 0x18))(arg1,0x16,&uStack_128,0x100,auStack_108);
    if (-1 < iVar2) {
        (**(*0x161d8 + 0x160))(arg2,auStack_108,0x24);
    }
    return iVar2;
}


/* fcn.00012520 @ 0x12520 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.00012520(int64_t arg1)

{
    char *arg1_00;
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t arg2;
    ulong uStackX_18;
    ulong uStackX_20;
    int32_t var_30h;
    int8_t var_34h;
    char *var_38h;
    ulong uStack_58;
    ulong uStack_50;
    char *var_40h;
    char *var_38h_2;
    char *var_30h_2;
    char *var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    var_30h_2 = NULL;
    uStackX_18._0_4_ = str.TPMF._0_4_;
    uStackX_18._4_1_ = str.TPMF[4];
    uStackX_20._0_4_ = str.TPMM._0_4_;
    uStackX_20._4_1_ = str.TPMM[4];
    uStack_58._0_4_ = str.TTDP._0_4_;
    uStack_58._4_1_ = str.TTDP[4];
    uStack_50._0_4_ = str.TTPF._0_4_;
    uStack_50._4_1_ = str.TTPF[4];
    var_40h._0_4_ = str.TCMF._0_4_;
    var_40h._4_1_ = str.TCMF[4];
    var_38h_2._0_4_ = str.PPIV._0_4_;
    var_38h_2._4_1_ = str.PPIV[4];
    iVar3 = (**(*0x161d8 + 0x140))(0x15980,0,&var_28h);
    if (-1 < iVar3) {
        arg2 = 0;
        iVar3 = (**(*0x161d8 + 0x140))(0x15a00,0,&var_20h);
        if (-1 < iVar3) {
            iVar3 = fcn.00015458(&var_30h_2,arg2);
            pcVar1 = var_30h_2;
            if (-1 < iVar3) {
                if (*var_30h_2 == 0x54445344) {
                    arg1_00 = var_30h_2 + 0x24;
                    fcn.000155bc(arg1_00,*(var_30h_2 + 4) - 0x25,&uStackX_18,*0x161b9);
                    if (*pcVar1 == 0x54445344) {
                        fcn.000155bc(arg1_00,*(pcVar1 + 4) - 0x25,&uStackX_20,0xfed40000);
                        if (*pcVar1 == 0x54445344) {
                            fcn.000155bc(arg1_00,*(pcVar1 + 4) - 0x25,&uStack_58,0);
                            if (*pcVar1 == 0x54445344) {
                                fcn.000155bc(arg1_00,*(pcVar1 + 4) - 0x25,&uStack_50,1);
                            }
                        }
                    }
                }
                cVar2 = fcn.00015074();
                if (*pcVar1 == 0x54445344) {
                    fcn.000155bc(pcVar1 + 0x24,*(pcVar1 + 4) - 0x25,&var_40h,cVar2 != '\0');
                    if (*pcVar1 == 0x54445344) {
                        fcn.000155bc(pcVar1 + 0x24,*(pcVar1 + 4) - 0x25,&var_38h_2,0);
                    }
                }
            }
            if (arg1 != 0) {
                (**(*0x161d8 + 0x70))(arg1);
            }
        }
    }
    return;
}


/* fcn.00011b38 @ 0x11b38 */

uint64_t fcn.00011b38(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    char16_t *arg1_00;
    int64_t iVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uchar *arg4;
    bool bVar10;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uint32_t uStackX_20;
    int8_t var_98h;
    int8_t var_a0h;
    int32_t var_a8h;
    char16_t *pcStack_158;
    char16_t *pcStack_150;
    ushort uStack_148;
    uint uStack_146;
    uint uStack_142;
    uint uStack_13e;
    uint uStack_13a;
    uint uStack_136;
    uint uStack_132;
    uint uStack_12e;
    uchar auStack_128 [6];
    uint64_t uStack_122;
    
    auStackX_10[0] = 0;
    uStackX_20 = 0;
    uVar9 = 0;
    auStackX_18[0] = 1;
    iVar4 = (**(*0x161d8 + 0x140))(0x159c0,0,&pcStack_150);
    if (iVar4 < 0) {
        return 0xfff1;
    }
    arg1_00 = 0x159d0;
    iVar4 = (**(*0x161d8 + 0x140))(0x159d0,0);
    if (iVar4 < 0) {
        return 0xfff1;
    }
    cVar1 = fcn.00015074();
    if (cVar1 == '\0') {
        arg1_00 = pcStack_150;
        (**pcStack_150)();
    }
    cVar1 = fcn.00015074();
    uVar2 = arg1;
    if (cVar1 != '\0') {
        if (uVar2 < 9) {
            if (uVar2 == 8) {
                arg4 = auStackX_18;
                iVar4 = 0x8071;
                goto code_r0x000124f3;
            }
            if (uVar2 == 1) {
                arg4 = NULL;
                iVar4 = 0x806f;
                iVar7 = 0;
            }
            else {
                if (uVar2 == 2) goto code_r0x00012258;
                if (uVar2 == 3) goto code_r0x00012287;
                if (uVar2 == 4) {
                    arg4 = auStackX_18;
                    iVar4 = 0x8072;
                    goto code_r0x000124f3;
                }
                if (uVar2 != 5) {
                    if (uVar2 == 6) goto code_r0x00012268;
                    bVar10 = uVar2 == 7;
                    uVar9 = 0;
                    goto code_r0x0001222f;
                }
                arg4 = NULL;
                iVar4 = 0x805d;
                iVar7 = 0;
            }
code_r0x000124f6:
            uVar2 = fcn.00010b24(pcStack_158,iVar4,iVar7,arg4);
            uVar9 = uVar2;
            arg1_00 = pcStack_158;
            goto code_r0x00012502;
        }
        if (uVar2 == 9) {
            iVar4 = 0x8071;
code_r0x000124ec:
            arg4 = auStackX_10;
            goto code_r0x000124f3;
        }
        if (uVar2 == 10) {
            iVar3 = fcn.00010b24(pcStack_158,0x806f,0,0);
            if (iVar3 == 0) {
                fcn.00010b24(pcStack_158,0x8072,1,auStackX_10);
            }
            iVar4 = 0x8071;
            goto code_r0x00012467;
        }
        if (uVar2 == 0xb) {
            arg1_00 = pcStack_158;
            uVar2 = fcn.00010b24(pcStack_158,0x8071,1,auStackX_10);
            uVar9 = uVar2;
            bVar10 = uVar2 == 0;
code_r0x0001222f:
            if (!bVar10) goto code_r0x00012502;
            arg1_00 = pcStack_158;
            uVar2 = fcn.00010b24(pcStack_158,0x8072,1,auStackX_18);
            uVar9 = uVar2;
            if (uVar2 != 0) goto code_r0x00012502;
code_r0x00012258:
            arg4 = NULL;
            iVar4 = 0x8070;
            iVar7 = 0;
            goto code_r0x000124f6;
        }
        if (uVar2 == 0xe) {
            arg1_00 = pcStack_158;
            uVar2 = fcn.00010b24(pcStack_158,0x805d,0,0);
            uVar9 = uVar2;
            if (uVar2 != 0) goto code_r0x00012502;
code_r0x00012268:
            arg1_00 = pcStack_158;
            uVar2 = fcn.00010b24(pcStack_158,0x806f,0,0);
            uVar9 = uVar2;
            if (uVar2 != 0) goto code_r0x00012502;
code_r0x00012287:
            iVar4 = 0x8072;
            goto code_r0x000124ec;
        }
        uVar6 = uVar2 - 0x15;
        arg1_00 = uVar6;
        if (uVar6 == 0) {
            uVar6 = fcn.00010b24(pcStack_158,0x806f,0,0);
            uVar9 = uVar6;
            if (uVar6 == 0) {
                uVar6 = fcn.00010b24(pcStack_158,0x8072,1,auStackX_10);
                uVar9 = uVar6;
            }
            goto code_r0x00012393;
        }
        if (uVar6 != 1) goto code_r0x00012502;
        uVar6 = fcn.00010b24(pcStack_158,0x806f,0,0);
        uVar9 = uVar6;
        if (uVar6 == 0) {
            uVar6 = fcn.00010b24(pcStack_158,0x8072,1,auStackX_10);
            uVar9 = uVar6;
            if (uVar6 == 0) {
                uVar6 = fcn.00010b24(pcStack_158,0x805d,0,0);
                uVar9 = uVar6;
            }
        }
code_r0x00012355:
        uStackX_20 = uVar2 << 4 | 6;
code_r0x00012399:
        pcStack_158 = L"TcgINTPPI";
        fcn.000150b0(0x15bf8,0x159e0,3,4);
code_r0x000123c8:
        cVar1 = fcn.00015074();
        if (cVar1 == '\0') {
            (**(pcStack_150 + 4))();
            pcStack_158 = pcStack_150;
        }
        uVar8 = uVar9 >> 0x10;
        uVar8 = uVar8 << 8 | uVar8 >> 8;
code_r0x000124db:
        fcn.00015184(pcStack_158,uVar8);
        fcn.00010bec(pcStack_158);
        arg1_00 = pcStack_158;
        goto code_r0x00012502;
    }
    if (uVar2 < 9) {
        if (uVar2 == 8) {
            arg4 = auStackX_18;
            iVar4 = 0x71;
code_r0x000124f3:
            iVar7 = 1;
            goto code_r0x000124f6;
        }
        if (uVar2 != 1) {
            if (uVar2 == 2) {
code_r0x0001213e:
                uVar2 = fcn.00010b24(pcStack_158,0x70,0,0);
                uVar9 = uVar2;
                arg1_00 = pcStack_158;
                if (uVar2 != 0) {
code_r0x00011c8b:
                    if (*0x16220 == '\0') goto code_r0x00012502;
                    iVar4 = 0x3058a16;
                    goto code_r0x00011d2d;
                }
code_r0x00011c72:
                arg1_00 = pcStack_158;
                if (*0x16220 == '\0') goto code_r0x00012502;
                iVar4 = 0x3058a0c;
            }
            else {
                if (uVar2 == 3) {
                    uVar2 = fcn.00010b24(pcStack_158,0x72,1,auStackX_10);
                    uVar9 = uVar2;
                    if (uVar2 != 0) {
                        arg1_00 = pcStack_158;
                        if (*0x16220 == '\0') goto code_r0x00012502;
                        iVar4 = 0x3058a15;
                        goto code_r0x00011d2d;
                    }
                    goto code_r0x00011dd3;
                }
                if (uVar2 == 4) {
                    uVar2 = fcn.00010b24(pcStack_158,0x72,1,auStackX_18);
                    uVar9 = uVar2;
                    arg1_00 = pcStack_158;
                    if (*0x16220 == '\0') goto code_r0x00012502;
                    iVar4 = 0x3058a0d;
                }
                else {
                    if (uVar2 != 5) {
                        if (uVar2 != 6) {
                            uVar9 = 0;
                            if (uVar2 != 7) goto code_r0x00012502;
                            arg1_00 = pcStack_158;
                            uVar2 = fcn.00010b24(pcStack_158,0x72,1,auStackX_18);
                            uVar9 = uVar2;
                            if (*0x16220 != '\0') {
                                arg1_00 = 0x1;
                                fcn.0001571c(1,0x3058a0d);
                            }
                            if (uVar2 != 0) goto code_r0x00011c8b;
                            uVar2 = fcn.00010b24(pcStack_158,0x70,0,0);
                            uVar9 = uVar2;
                            goto code_r0x00011c72;
                        }
                        arg1_00 = pcStack_158;
                        uVar2 = fcn.00010b24(pcStack_158,0x6f,0,0);
                        uVar9 = uVar2;
                        if (*0x16220 != '\0') {
                            arg1_00 = 0x1;
                            fcn.0001571c(1,0x3058a0a);
                        }
                        if (uVar2 != 0) goto code_r0x00011d22;
                        uVar2 = fcn.00010b24(pcStack_158,0x72,1,auStackX_10);
                        uVar9 = uVar2;
                        if (*0x16220 != '\0') {
                            pcStack_158 = 0x1;
                            fcn.0001571c(1,0x3058a0b);
                        }
                        if (uVar2 == 0) goto code_r0x00011dd3;
                        arg1_00 = pcStack_158;
                        if (*0x16220 == '\0') goto code_r0x00012502;
                        iVar4 = 0x3008a15;
                        goto code_r0x00011d2d;
                    }
                    uVar2 = fcn.00010b24(pcStack_158,0x5d,0,0);
                    uVar9 = uVar2;
                    arg1_00 = pcStack_158;
                    if (*0x16220 == '\0') goto code_r0x00012502;
                    iVar4 = 0x3058a0e;
                }
            }
            goto code_r0x00011e18;
        }
        uVar2 = fcn.00010b24(pcStack_158,0x6f,0,0);
        uVar9 = uVar2;
        arg1_00 = pcStack_158;
        if (uVar2 == 0) {
            if (*0x16220 == '\0') goto code_r0x00012502;
            iVar4 = 0x3058a0a;
            goto code_r0x00011e18;
        }
code_r0x00011d22:
        if (*0x16220 == '\0') goto code_r0x00012502;
        iVar4 = 0x3058a14;
code_r0x00011d2d:
        arg1_00 = 0x80000002;
    }
    else {
        if (uVar2 == 9) {
            iVar4 = 0x71;
            goto code_r0x000124ec;
        }
        if (uVar2 == 10) {
            iVar3 = fcn.00010b24(pcStack_158,0x6f,0,0);
            if (*0x16220 != '\0') {
                fcn.0001571c(1,0x3058a0a);
            }
            if (iVar3 == 0) {
                iVar3 = fcn.00010b24(pcStack_158,0x72,1,auStackX_10);
                if (iVar3 == 0) {
                    if (*0x16220 != '\0') {
                        iVar4 = 0x3058a0b;
                        iVar7 = 1;
                        goto code_r0x000121e9;
                    }
                }
                else if (*0x16220 != '\0') {
                    iVar4 = 0x3058a15;
                    goto code_r0x000121e4;
                }
            }
            else if (*0x16220 != '\0') {
                iVar4 = 0x3058a14;
code_r0x000121e4:
                iVar7 = 0x80000002;
code_r0x000121e9:
                fcn.0001571c(iVar7,iVar4);
            }
            iVar4 = 0x71;
code_r0x00012467:
            uVar6 = fcn.00010b24(pcStack_158,iVar4,1,auStackX_18);
            uVar9 = uVar6;
            uVar8 = uVar6 >> 0x10;
            uVar8 = uVar8 << 8 | uVar8 >> 8;
            arg1_00 = pcStack_158;
            if ((uVar6 >> 0x18 & 6) != 6) goto code_r0x00012502;
            uStackX_20 = uVar2 << 4 | 8;
            pcStack_158 = L"TcgINTPPI";
            fcn.000150b0(0x15bf8,0x159e0,3,4);
            cVar1 = fcn.00015074();
            if (cVar1 == '\0') {
                (**(pcStack_150 + 4))();
                pcStack_158 = pcStack_150;
            }
            goto code_r0x000124db;
        }
        if (uVar2 == 0xb) {
            arg1_00 = pcStack_158;
            uVar5 = fcn.00010b24(pcStack_158,0x71,1,auStackX_10);
            uVar9 = uVar5 & 0xffffffff;
            if (uVar5 != 0) goto code_r0x00012502;
            arg1_00 = pcStack_158;
            uVar2 = fcn.00010b24(pcStack_158,0x72,1,auStackX_18);
            uVar9 = uVar2;
            if (*0x16220 != '\0') {
                arg1_00 = 0x1;
                fcn.0001571c(1,0x3058a0d);
            }
            if (uVar2 != 0) goto code_r0x00012502;
            goto code_r0x0001213e;
        }
        if (uVar2 == 0xc) {
            uStack_146 = 0x1e000000;
            uStack_148 = 0xc100;
            uStack_142 = 0x3f000000;
            uStack_13e = 0x4000000;
            uStack_13a = 0x4000000;
            uStack_132 = 0x4000000;
            uStack_136 = 0x6000000;
            uStack_12e = 0x1000000;
            (**(pcStack_158 + 0xc))(pcStack_158,0x1e,&uStack_148,0x100,auStack_128);
            uVar9 = uStack_122;
            goto code_r0x000123c8;
        }
        if (uVar2 != 0xe) {
            uVar6 = uVar2 - 0x15;
            if (uVar6 != 0) {
                arg1_00 = uVar6;
                if (uVar6 != 1) goto code_r0x00012502;
                uVar6 = fcn.00010b24(pcStack_158,0x6f,0,0);
                uVar9 = uVar6;
                if (*0x16220 != '\0') {
                    fcn.0001571c(1,0x3058a0a);
                }
                if (uVar6 == 0) {
                    uVar6 = fcn.00010b24(pcStack_158,0x72,1,auStackX_10);
                    uVar9 = uVar6;
                    if (uVar6 != 0) {
                        if (*0x16220 != '\0') {
                            iVar4 = 0x3058a15;
                            goto code_r0x00011ef0;
                        }
                        goto code_r0x00011efa;
                    }
                    if (*0x16220 != '\0') {
                        iVar4 = 0x3058a0b;
                        iVar7 = 1;
                        goto code_r0x00011ef5;
                    }
                }
                else {
                    if (*0x16220 != '\0') {
                        iVar4 = 0x3058a14;
code_r0x00011ef0:
                        iVar7 = 0x80000002;
code_r0x00011ef5:
                        fcn.0001571c(iVar7,iVar4);
                    }
code_r0x00011efa:
                    if (uVar9 != 0) goto code_r0x00012355;
                }
                uVar6 = fcn.00010b24(pcStack_158,0x5d,0,0);
                uVar9 = uVar6;
                if (*0x16220 != '\0') {
                    fcn.0001571c(1,0x3058a0e);
                }
                goto code_r0x00012355;
            }
            uVar6 = fcn.00010b24(pcStack_158,0x6f,0,0);
            uVar9 = uVar6;
            if (*0x16220 != '\0') {
                fcn.0001571c(1,0x3058a0a);
            }
            if (uVar6 == 0) {
                uVar6 = fcn.00010b24(pcStack_158,0x72,1,auStackX_10);
                uVar9 = uVar6;
                if (uVar6 == 0) {
                    if (*0x16220 != '\0') {
                        iVar4 = 0x3058a0b;
                        iVar7 = 1;
                        goto code_r0x00011fc5;
                    }
                }
                else if (*0x16220 != '\0') {
                    iVar4 = 0x3058a15;
                    goto code_r0x00011fc0;
                }
            }
            else if (*0x16220 != '\0') {
                iVar4 = 0x3058a14;
code_r0x00011fc0:
                iVar7 = 0x80000002;
code_r0x00011fc5:
                fcn.0001571c(iVar7,iVar4);
            }
code_r0x00012393:
            uStackX_20 = uVar2 << 4 | 5;
            goto code_r0x00012399;
        }
        arg1_00 = pcStack_158;
        uVar2 = fcn.00010b24(pcStack_158,0x5d,0,0);
        uVar9 = uVar2;
        if (*0x16220 != '\0') {
            arg1_00 = 0x1;
            fcn.0001571c(1,0x3058a0e);
        }
        if (uVar2 == 0) {
            arg1_00 = pcStack_158;
            uVar2 = fcn.00010b24(pcStack_158,0x6f,0,0);
            uVar9 = uVar2;
            if (uVar2 != 0) {
                if (*0x16220 != '\0') {
                    iVar4 = 0x3058a15;
                    goto code_r0x00012049;
                }
                goto code_r0x00012053;
            }
            if (*0x16220 != '\0') {
                iVar4 = 0x3058a0b;
                arg1_00 = 0x1;
                goto code_r0x0001204e;
            }
        }
        else {
            if (*0x16220 != '\0') {
                iVar4 = 0x3058a14;
code_r0x00012049:
                arg1_00 = 0x80000002;
code_r0x0001204e:
                fcn.0001571c(arg1_00,iVar4);
            }
code_r0x00012053:
            if (uVar9 != 0) goto code_r0x00012502;
        }
        uVar2 = fcn.00010b24(pcStack_158,0x72,1,auStackX_10);
        uVar9 = uVar2;
code_r0x00011dd3:
        arg1_00 = pcStack_158;
        if (*0x16220 == '\0') goto code_r0x00012502;
        iVar4 = 0x3058a0b;
code_r0x00011e18:
        arg1_00 = 0x1;
    }
    fcn.0001571c(arg1_00,iVar4);
code_r0x00012502:
    uVar8 = uVar9 >> 0x10;
    fcn.00015184(arg1_00,uVar8 << 8 | uVar8 >> 8);
    return uVar9 & 0xffffffff;
}


/* fcn.00015200 @ 0x15200 */

int64_t fcn.00015200(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iVar6 = arg1;
    iStackX_18 = arg3;
    arg1_00 = fcn.000153cc(arg1);
    if (arg1_00 != NULL) {
        fcn.00014d58(iVar6,aiStack_38,arg3);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x1617a;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.00014e14(arg1_00,0,0x1617a,iVar3);
                if (iVar3 == 0) goto code_r0x0001537c;
                iStackX_18 = 0;
                iVar4 = (**(*0x161f8 + 8))(*0x161f8,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.000156f0(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x161f8 + 8))(*0x161f8,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x161d8 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x0001537c;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x0001537c;
                if (iVar6 == 0) break;
                (**(*0x161d8 + 0x48))(iVar6);
                iVar6 = 0;
            }
            for (; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
            }
            cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            pcVar7 = NULL;
            if (cVar2 == ';') {
                pcVar7 = pcVar1;
            }
        } while (pcVar7 != NULL);
code_r0x0001537c:
        (**(*0x161d8 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x161d8 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x161d8 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.00013e18 @ 0x13e18 */

ulong fcn.00013e18(uint32_t *arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    uint32_t *puVar5;
    
    iVar4 = 0x100;
    puVar5 = arg1;
    iVar1 = fcn.00013de4(arg1,0x100);
    arg2_00 = iVar4 - iVar1;
    if ((arg1 == NULL) || (arg2 == NULL)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00013de4(arg2,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= puVar5) {
        if (puVar5 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < puVar5) goto code_r0x00013ea8;
    }
    if (arg2 < puVar5 + 0x80) {
        return 0x800000000000000f;
    }
code_r0x00013ea8:
    piVar3 = puVar5 + iVar1 * 2;
    for (; *arg2 != 0; arg2 = arg2 + 2) {
        *piVar3 = *arg2;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00011a94 @ 0x11a94 */

uint fcn.00011a94(uint32_t arg1)

{
    uint32_t uVar1;
    
    if (arg1 != '\0') {
        uVar1 = arg1 & 0xff;
        if (uVar1 < 9) {
            if (uVar1 == 8) {
                return 0x10;
            }
            arg1 = arg1 & 0xff;
            if (arg1 == 1) {
                return 1;
            }
            if (arg1 == 2) {
                return 2;
            }
            if (arg1 == 3) {
                return 4;
            }
            if (arg1 == 4) {
                return 8;
            }
            if (arg1 == 5) {
                return 0x40;
            }
            if (arg1 == 6) {
                return 5;
            }
            if (arg1 == 7) {
                return 10;
            }
        }
        else {
            if (uVar1 == 9) {
                return 0x20;
            }
            if (uVar1 == 10) {
                return 0x15;
            }
            if (uVar1 == 0xb) {
                return 0x2a;
            }
            if ((uVar1 == 0xe) || (uVar1 == 0x15)) {
                return 0x45;
            }
            if (uVar1 == 0x16) {
                return 0x545;
            }
        }
    }
    return 0;
}


/* fcn.00012b28 @ 0x12b28 */

void fcn.00012b28(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    char cVar4;
    ulong noname_1;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    cVar4 = arg1;
    noname_1 = 2;
    iVar3 = fcn.00015200(*0x168a0,2,arg3,arg4);
    if (cVar4 == '\x10') {
        iVar6 = 0;
        iVar1 = *arg2;
        piVar2 = arg2;
        iVar5 = iVar6;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar2;
        }
        iVar7 = iVar3;
        iVar5 = fcn.00013e18(arg2 + iVar5 * 2,iVar5,iVar3);
        (**(*0x161d8 + 0x48))(iVar3);
        if (iVar5 < 0) {
            return;
        }
        iVar3 = fcn.00015200(*0x168a0,0x12,iVar7,arg4);
        iVar1 = *arg2;
        piVar2 = arg2;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
    }
    else {
        if (cVar4 != '\x12') {
            if (cVar4 != '\x14') {
                return;
            }
            iVar5 = 0;
            iVar1 = *arg2;
            piVar2 = arg2;
            iVar6 = iVar5;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar6 = iVar6 + 1;
                iVar1 = *piVar2;
            }
            iVar7 = iVar3;
            iVar6 = fcn.00013e18(arg2 + iVar6 * 2,noname_1,iVar3);
            (**(*0x161d8 + 0x48))(iVar3);
            if (iVar6 < 0) {
                return;
            }
            iVar3 = fcn.00015200(*0x168a0,0x19,iVar7,arg4);
            iVar1 = *arg2;
            piVar2 = arg2;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar5 = iVar5 + 1;
                iVar1 = *piVar2;
            }
            fcn.00013e18(arg2 + iVar5 * 2,iVar5,iVar3);
            goto code_r0x00012cb7;
        }
        iVar6 = 0;
        iVar1 = *arg2;
        piVar2 = arg2;
        iVar5 = iVar6;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar2;
        }
        iVar7 = iVar3;
        iVar5 = fcn.00013e18(arg2 + iVar5 * 2,noname_1,iVar3);
        (**(*0x161d8 + 0x48))(iVar3);
        if (iVar5 < 0) {
            return;
        }
        iVar3 = fcn.00015200(*0x168a0,0x14,iVar7,arg4);
        iVar1 = *arg2;
        piVar2 = arg2;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
    }
    fcn.00013e18(arg2 + iVar6 * 2,iVar6,iVar3);
code_r0x00012cb7:
    (**(*0x161d8 + 0x48))(iVar3);
    return;
}


/* fcn.00012a08 @ 0x12a08 */

void fcn.00012a08(int64_t arg1,uint32_t arg2,uint32_t *arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int16_t iVar2;
    char16_t *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    char16_t *arg2_00;
    char16_t *arg3_00;
    int iVar7;
    int iVar8;
    
    iVar7 = 0;
    arg2_00 = L" and ";
    if (arg2 != 2) {
        arg2_00 = 0x15c54;
    }
    uVar6 = arg1 & 0xffffffff;
    arg3_00 = arg3;
    iVar8 = iVar7;
    do {
        iVar5 = 0;
        pcVar3 = arg2_00;
        if ((uVar6 & 3) != 0) {
            pcVar3 = fcn.00015200(*0x168a0,*(((~uVar6 & 1) + iVar7) * 2 + 0x15d40),arg3_00,arg4);
            iVar2 = *arg3;
            puVar1 = arg3;
            while (iVar2 != 0) {
                puVar1 = puVar1 + 2;
                iVar5 = iVar5 + 1;
                iVar2 = *puVar1;
            }
            arg3_00 = pcVar3;
            iVar4 = fcn.00013e18(arg3 + iVar5 * 2,iVar5,pcVar3);
            iVar8 = iVar8 + 1;
            iVar5 = *0x161d8;
            (**(*0x161d8 + 0x48))(pcVar3);
            if (iVar4 < 0) {
                return;
            }
            iVar4 = 0;
            if (iVar8 < arg2) {
                iVar2 = *arg3;
                puVar1 = arg3;
                while (iVar2 != 0) {
                    puVar1 = puVar1 + 2;
                    iVar4 = iVar4 + 1;
                    iVar2 = *puVar1;
                }
                arg3_00 = arg2_00;
                iVar5 = fcn.00013e18(arg3 + iVar4 * 2,iVar5,arg2_00);
                if (iVar5 < 0) {
                    return;
                }
            }
            pcVar3 = L", and ";
            if (iVar8 != arg2 - 2) {
                pcVar3 = arg2_00;
            }
        }
        iVar7 = iVar7 + 2;
        uVar6 = uVar6 >> 2;
        arg2_00 = pcVar3;
        if (10 < iVar7) {
            return;
        }
    } while( true );
}


/* fcn.00013f2c @ 0x13f2c */

int64_t fcn.00013f2c(void)

{
    if (*0x161e8 == 0) {
        (**(*0x161d8 + 0x140))(0x15890,0,0x161e8);
    }
    return *0x161e8;
}


/* fcn.00012cdc @ 0x12cdc */

void fcn.00012cdc(int64_t arg1)

{
    ushort uVar1;
    int16_t iVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t *piVar9;
    uint32_t arg2;
    int iVar10;
    uint *puVar11;
    uint64_t uVar12;
    ulong uVar13;
    uint64_t uVar14;
    int iVar15;
    uint64_t arg3;
    uint32_t *puVar16;
    uint64_t uVar17;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_130h;
    uint32_t var_180h;
    int64_t var_1d8h;
    int64_t var_1e0h;
    int64_t var_1e8h;
    uint uStack_298;
    uint32_t auStack_294 [127];
    uchar auStack_98 [80];
    char cStack_48;
    
    uVar12 = 0;
    cVar3 = arg1;
    uVar4 = fcn.00011a94(arg1);
    (**(*0x161d8 + 0x168))(&uStack_298,0x200,0);
    iVar5 = (**(*0x161d8 + 0x140))(0x15960,0,0x161c0);
    if (iVar5 < 0) {
        return;
    }
    (**(*0x161c0 + 0x28))();
    iStackX_18 = 0x51;
    iVar6 = (**(*0x161e0 + 0x48))(L"AMITSESetup",0x15870,0,&iStackX_18,auStack_98);
    iVar5 = 6;
    uVar14 = uVar4;
    uVar17 = uVar12;
    do {
        arg3 = uVar14 >> 2;
        arg2 = uVar17 + 1;
        if ((uVar14 & 3) == 0) {
            arg2 = uVar17;
        }
        uVar17 = arg2;
        iVar5 = iVar5 + -1;
        uVar14 = arg3;
    } while (iVar5 != 0);
    if ((iVar6 == 0) && (cStack_48 == '\0')) {
        (**(*0x161c0 + 8))(&uStack_298);
    }
    (**(*0x161c0 + 0x38))(&iStackX_20,&iStackX_10);
    iStackX_10 = iStackX_10 + -1;
    iStackX_20 = 0;
    (**(*0x161c0 + 0x30))(0);
    uVar13 = 0x1b;
    iVar6 = fcn.00015200(*0x168a0,0x1b,arg3,iVar5);
    iVar7 = fcn.00013e18(&uStack_298,uVar13,iVar6);
    (**(*0x161d8 + 0x48))(iVar6);
    if (iVar7 < 0) {
        return;
    }
    (**(*0x161c0 + 8))(&uStack_298);
    puVar11 = &uStack_298;
    iVar6 = 0;
    (**(*0x161d8 + 0x168))(puVar11,0x200);
    if (cVar3 - 0xfU < 6) {
        fcn.00012b28(CONCAT71(puVar11 >> 8,cVar3),&uStack_298,iVar6,iVar5);
    }
    else {
        iVar6 = fcn.00015200(*0x168a0,2,iVar6,iVar5);
        piVar9 = &uStack_298;
        uVar14 = uVar12;
        iVar2 = uStack_298;
        while (iVar2 != 0) {
            piVar9 = piVar9 + 1;
            uVar14 = uVar14 + 1;
            iVar2 = *piVar9;
        }
        iVar7 = fcn.00013e18(auStack_294 + (uVar14 - 2) * 2,uVar14,iVar6);
        (**(*0x161d8 + 0x48))(iVar6);
        if (iVar7 < 0) {
            return;
        }
        puVar16 = &uStack_298;
        fcn.00012a08(uVar4,arg2,puVar16,iVar5);
        iVar7 = fcn.00015200(*0x168a0,3,puVar16,iVar5);
        piVar9 = &uStack_298;
        uVar14 = uVar12;
        iVar2 = uStack_298;
        while (iVar2 != 0) {
            piVar9 = piVar9 + 1;
            uVar14 = uVar14 + 1;
            iVar2 = *piVar9;
        }
        iVar6 = iVar7;
        iVar8 = fcn.00013e18(auStack_294 + (uVar14 - 2) * 2,uVar14,iVar7);
        (**(*0x161d8 + 0x48))(iVar7);
        if (iVar8 < 0) {
            return;
        }
    }
    piVar9 = &uStack_298;
    iVar15 = 0x4f;
    if (uStack_298 == 0) {
code_r0x00012fb9:
        puVar11 = &uStack_298;
    }
    else {
        do {
            piVar9 = piVar9 + 1;
            uVar12 = uVar12 + 1;
        } while (*piVar9 != 0);
        if (uVar12 < 0x50) goto code_r0x00012fb9;
        iVar10 = 0x4f;
        iVar7 = 0x4f;
        do {
            if (*(auStack_294 + (iVar7 + -2) * 2) == 0x20) break;
            iVar10 = iVar10 + -1;
            iVar7 = iVar7 + -1;
        } while (1 < iVar7);
        puVar11 = auStack_294 + (iVar10 + 1 + -2) * 2;
        uVar1 = *puVar11;
        *puVar11 = 0;
        (**(*0x161c0 + 8))(&uStack_298);
        *puVar11 = uVar1;
    }
    (**(*0x161c0 + 8))(puVar11);
    if ((*0x16248 - 6 & 0xfb) == 0) {
        uVar13 = fcn.00015200(*0x168a0,0x16,iVar6,iVar5);
        (**(*0x161c0 + 8))(uVar13);
        (**(*0x161d8 + 0x48))(uVar13);
    }
    if ((*0x16248 - 7 & 0xfb) == 0) {
        uVar13 = fcn.00015200(*0x168a0,0x17,iVar6,iVar5);
        (**(*0x161c0 + 8))(uVar13);
        (**(*0x161d8 + 0x48))(uVar13);
    }
    if ((*0x16248 - 0xe & 0xf7) == 0) {
        uVar13 = fcn.00015200(*0x168a0,0x18,iVar6,iVar5);
        (**(*0x161c0 + 8))(uVar13);
        (**(*0x161d8 + 0x48))(uVar13);
    }
    uVar13 = fcn.00015200(*0x168a0,0x1b,iVar6,iVar5);
    (**(*0x161c0 + 8))(uVar13);
    (**(*0x161d8 + 0x48))(uVar13);
    if ((*0x16248 - 0xe & 0xf7) == 0) {
        uVar13 = fcn.00015200(*0x168a0,6,iVar6,iVar5);
        (**(*0x161c0 + 8))(uVar13);
        (**(*0x161d8 + 0x48))(uVar13);
    }
    if ((*0x16248 - 5 & 0xef) == 0) {
        uVar13 = fcn.00015200(*0x168a0,7,iVar6,iVar5);
        (**(*0x161c0 + 8))(uVar13);
        (**(*0x161d8 + 0x48))(uVar13);
    }
    if ((*0x16248 < 0xc) && ((0x894U >> (*0x16248 & 0x1f) & 1) != 0)) {
        uVar13 = fcn.00015200(*0x168a0,8,iVar6,iVar5);
        (**(*0x161c0 + 8))(uVar13);
        (**(*0x161d8 + 0x48))(uVar13);
    }
    uVar13 = fcn.00015200(*0x168a0,0x1b,iVar6,iVar5);
    (**(*0x161c0 + 8))(uVar13);
    (**(*0x161d8 + 0x48))(uVar13);
    iVar6 = 0;
    (**(*0x161d8 + 0x168))(&uStack_298,0x200);
    (**(*0x161c0 + 8))(&uStack_298);
    if ((0x16 < *0x16248) || (iVar7 = 4, (0x624020U >> (*0x16248 & 0x1f) & 1) == 0)) {
        iVar7 = 5;
    }
    iVar7 = fcn.00015200(*0x168a0,iVar7,iVar6,iVar5);
    iVar6 = 0;
    piVar9 = &uStack_298;
    iVar2 = uStack_298;
    while (iVar2 != 0) {
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = *piVar9;
    }
    iVar8 = iVar7;
    iVar6 = fcn.00013e18(auStack_294 + (iVar6 + -2) * 2,0,iVar7);
    (**(*0x161d8 + 0x48))(iVar7);
    if (iVar6 < 0) {
        return;
    }
    if (cVar3 - 0xfU < 6) {
        if (cVar3 == '\x10') {
            iVar7 = fcn.00015200(*0x168a0,0x13,iVar8,iVar5);
            iVar6 = 0;
            piVar9 = &uStack_298;
            iVar2 = uStack_298;
            while (iVar2 != 0) {
                piVar9 = piVar9 + 1;
                iVar6 = iVar6 + 1;
                iVar2 = *piVar9;
            }
            goto code_r0x000132a8;
        }
        if (cVar3 == '\x12') {
            iVar7 = fcn.00015200(*0x168a0,0x15,iVar8,iVar5);
            piVar9 = &uStack_298;
            iVar6 = 0;
            iVar2 = uStack_298;
            while (iVar2 != 0) {
                piVar9 = piVar9 + 1;
                iVar6 = iVar6 + 1;
                iVar2 = *piVar9;
            }
            goto code_r0x000132a8;
        }
        if (cVar3 == '\x14') {
            iVar7 = fcn.00015200(*0x168a0,0x1a,iVar8,iVar5);
            iVar6 = 0;
            piVar9 = &uStack_298;
            iVar2 = uStack_298;
            while (iVar2 != 0) {
                piVar9 = piVar9 + 1;
                iVar6 = iVar6 + 1;
                iVar2 = *piVar9;
            }
            iVar8 = iVar7;
            iVar6 = fcn.00013e18(auStack_294 + (iVar6 + -2) * 2,iVar6,iVar7);
            (**(*0x161d8 + 0x48))(iVar7);
            goto joined_r0x000132cc;
        }
    }
    else {
        puVar16 = &uStack_298;
        fcn.00012a08(uVar4,arg2,puVar16,iVar5);
        iVar7 = fcn.00015200(*0x168a0,3,puVar16,iVar5);
        iVar6 = 0;
        piVar9 = &uStack_298;
        iVar2 = uStack_298;
        while (iVar2 != 0) {
            piVar9 = piVar9 + 1;
            iVar6 = iVar6 + 1;
            iVar2 = *piVar9;
        }
code_r0x000132a8:
        iVar8 = iVar7;
        iVar6 = fcn.00013e18(auStack_294 + (iVar6 + -2) * 2,iVar6,iVar7);
        (**(*0x161d8 + 0x48))(iVar7);
joined_r0x000132cc:
        if (iVar6 < 0) {
            return;
        }
    }
    uVar12 = 0;
    piVar9 = &uStack_298;
    if (uStack_298 != 0) {
        do {
            piVar9 = piVar9 + 1;
            uVar12 = uVar12 + 1;
        } while (*piVar9 != 0);
        if (0x4f < uVar12) {
            iVar6 = 0x4f;
            do {
                if (*(auStack_294 + (iVar6 + -2) * 2) == 0x20) break;
                iVar15 = iVar15 + -1;
                iVar6 = iVar6 + -1;
            } while (1 < iVar6);
            puVar11 = auStack_294 + (iVar15 + 1 + -2) * 2;
            uVar1 = *puVar11;
            *puVar11 = 0;
            (**(*0x161c0 + 8))(&uStack_298);
            *puVar11 = uVar1;
            goto code_r0x000133fa;
        }
    }
    puVar11 = &uStack_298;
code_r0x000133fa:
    (**(*0x161c0 + 8))(puVar11);
    uVar13 = fcn.00015200(*0x168a0,9,iVar8,iVar5);
    (**(*0x161c0 + 8))(uVar13);
    (**(*0x161d8 + 0x48))(uVar13);
    (**(*0x161d8 + 0x168))(&uStack_298,0x200,0);
    (**(*0x161c0 + 8))(&uStack_298);
    return;
}


/* fcn.000109e4 @ 0x109e4 */

uchar fcn.000109e4(void)

{
    uchar uVar1;
    int16_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    bool bVar6;
    uchar auStackX_8 [8];
    ulong *puStackX_10;
    
    uVar4 = 0;
    uVar5 = 0;
    iVar3 = (**(*0x161d8 + 0x140))(0x159a0,0,&puStackX_10);
    if (iVar3 < 0) {
        if (*(*0x161d0 + 0x30) != 0) {
            uVar1 = 1;
            do {
                uVar4 = (**(*0x161d8 + 0x18))(0x1f);
                (**(*0x161d8 + 0x20))(4);
                iVar3 = (**(*0x161d8 + 0x78))(*(*(*0x161d0 + 0x30) + 0x10));
                if (iVar3 != -0x7ffffffffffffffa) {
                    iVar3 = (**(*(*0x161d0 + 0x30) + 8))(*(*0x161d0 + 0x30),auStackX_8);
                    if (iVar3 == 0) {
                        iVar2 = auStackX_8._0_4_;
                        if ((*0x16248 < 0x17) && ((0x624020U >> (*0x16248 & 0x1f) & 1) != 0)) {
                            bVar6 = iVar2 == 0x16;
                        }
                        else {
                            bVar6 = iVar2 == 0x14;
                        }
                        if (bVar6) goto code_r0x00010af0;
                        if (iVar2 == 0x17) break;
                    }
                }
                fcn.00015014(0x117a6);
                uVar5 = uVar5 + 1;
            } while (uVar5 < 15000);
        }
        uVar1 = 0;
code_r0x00010af0:
        (**(*0x161d8 + 0x18))(0x1f);
        (**(*0x161d8 + 0x20))(uVar4);
    }
    else {
        uVar1 = (**puStackX_10)(*0x16248,0);
    }
    return uVar1;
}


/* fcn.00013de4 @ 0x13de4 */

uint64_t fcn.00013de4(uint32_t arg1,int64_t arg2)

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


/* fcn.00013ed4 @ 0x13ed4 */

uint64_t fcn.00013ed4(uint32_t arg1)

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


/* fcn.00014d34 @ 0x14d34 */

void fcn.00014d34(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013fcc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013f98 @ 0x13f98 */

uchar * fcn.00013f98(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000156c0 @ 0x156c0 */

ulong fcn.000156c0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x161d8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00013ef8 @ 0x13ef8 */

int64_t fcn.00013ef8(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.000156f0 @ 0x156f0 */

void fcn.000156f0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000156c0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010320(arg1_00,arg1);
    }
    return;
}


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t arg2)

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


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.000153cc @ 0x153cc */

int64_t fcn.000153cc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x161f8 + 0x18))(*0x161f8,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.000156f0(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x161f8 + 0x18))(*0x161f8,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x161d8 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00014d58 @ 0x14d58 */

int64_t fcn.00014d58(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x161e0 + 0x48))(0x16160,0x157f0,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000156c0();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x161e0 + 0x48))(0x16160,0x157f0,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x161d8 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00014e14 @ 0x14e14 */

char * fcn.00014e14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00014e64:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x00014e64;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x00014eff;
                }
            }
            else {
code_r0x00014eff:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    pcVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar5 != '\0' && (*pcVar5 == ';')); pcVar5 = pcVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar5[arg3_00];
                            }
                            if (uVar4 <= arg3_00) goto code_r0x00014ecc;
                        }
                        else {
code_r0x00014ecc:
                            iVar3 = fcn.00013ef8(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.000156f0(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = fcn.000102e0(arg1_00,pcVar5,arg3_00);
                                        return pcVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        pcVar5 = pcVar5 + arg3_00;
                        cVar2 = *pcVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x00014f04;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x00014eff;
                }
            }
code_r0x00014f04:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    //[00] -r-x section size 21760 named .text
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


