// decompiled by r2ghidra: 0603_NvmeDynamicSetup.pe32
// functions: 70

/* entry0 @ 0x10390 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103bc(arg1,arg2);
    fcn.00010518(arg1,arg2);
    return;
}


/* fcn.000103bc @ 0x103bc */

void fcn.000103bc(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x169d8 = *(arg1 + 0x60);
    *0x169d0 = arg1;
    fcn.000136b0();
    puVar4 = fcn.000136b0();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010410:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010380();
                fcn.00010370();
                uVar2 = in(0x1808);
                fcn.00010350(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010340();
                }
                fcn.00010350(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010370();
                }
                else {
                    fcn.00010360();
                }
code_r0x00010479:
                (**(*0x169d8 + 0x140))(0x15e40,0,0x169e8);
                (**(*0x169d8 + 0x140))(0x15e30,0,0x16a08);
                (**(*0x169d8 + 0x140))(0x15e10,0,0x169f8);
                (**(*0x169d8 + 0x140))(0x15e80,0,0x169f0);
    //WARNING: Could not recover jumptable at 0x0001050e. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x169d8 + 0x140))(0x15e20,0,0x16a00);
                return;
            }
            if ((*0x15f00 == *(puVar4 + 4)) && (*0x15f08 == *(puVar4 + 8))) goto code_r0x00010479;
        }
        else if (uVar1 == 4) goto code_r0x00010410;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010518 @ 0x10518 */

int64_t fcn.00010518(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg4;
    int64_t var_bp_20h;
    int64_t var_28h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_10h = 0x71202eee;
    var_ch = 0x40d95f53;
    var_bp_8h = 0xc9e3dab;
    var_4h = 0x5766d926;
    if (*0x16a20 == 0) {
        *0x16a10 = *(arg2 + 0x60);
        *0x16a18 = *(arg2 + 0x58);
        *0x16a20 = arg2;
    }
    arg4 = 4;
    iVar2 = 0x15e90;
    iVar1 = 2;
    (**(*0x16a18 + 0x58))(0x16070);
    iVar2 = fcn.000158f0(arg1,iVar2,iVar1,arg4);
    if (-1 < iVar2) {
        iVar1 = (**(*0x16a10 + 0x50))(0x200,8,0x12028,0,&var_bp_20h);
        if (-1 < iVar1) {
            (**(*0x16a10 + 0xa8))(&var_10h,var_bp_20h,&var_28h);
        }
        *0x169c8 = *0x15ec8;
    }
    return iVar2;
}


/* fcn.000136b0 @ 0x136b0 */

int64_t fcn.000136b0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x169e0 == 0) {
        *0x169e0 = 0;
        if (*(*0x169d0 + 0x68) != 0) {
            piVar2 = *(*0x169d0 + 0x70);
            do {
                if ((*0x15e60 == *piVar2) && (*0x15e68 == piVar2[1])) {
                    *0x169e0 = (*(*0x169d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x169e0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x169d0 + 0x68));
        }
    }
    return *0x169e0;
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


/* fcn.000158f0 @ 0x158f0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000158f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong **arg3_00;
    int64_t iStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t *piVar5;
    ulong in_stack_ffffffffffffffb0;
    uint uVar7;
    int64_t *piVar6;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    ulong *puStack_30;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    uVar7 = in_stack_ffffffffffffffb0 >> 0x20;
    puStackX_20 = NULL;
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iVar1 = (**(*0x16a10 + 0x98))(arg1,0x15f98,&iStack_38);
    if ((-1 < iVar1) &&
       (iVar1 = (**(*0x16a10 + 0x118))(arg1,0x16058,&iStackX_10,arg1,0,CONCAT44(uVar7,2)), -1 < iVar1)) {
        arg3_00 = &puStack_30;
        iVar1 = (**(*0x16a10 + 0x140))(0x15f28,0);
        if (-1 < iVar1) {
            iStackX_18 = 0;
            iStack_48 = 0;
            for (puVar4 = iStackX_10 + 0x14; (puVar4 < *(iStackX_10 + 0x10) + iStackX_10 && (*(puVar4 + 3) != '\x02'));
                puVar4 = puVar4 + (*puVar4 & 0xffffff)) {
            }
            piVar6 = &iStackX_18;
            piVar5 = &iStack_48;
            iVar2 = fcn.00015530(iStack_38,puVar4 + 1,arg3_00,arg1);
            iVar1 = iStackX_18;
            if (-1 < iVar2) {
                if (*0x16a28 == '\0') {
                    *0x16a50 = 0x16a50;
                    *0x16a58 = 0x16a50;
                    *0x16a28 = '\x01';
                }
                iVar2 = (**puStack_30)(puStack_30,iStackX_10,iStackX_18,&uStack_40,piVar5,piVar6);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar3 = (**(*0x16a10 + 0x40))(4,0x38,&puStackX_20);
                iVar2 = iStack_48;
                if (-1 < iVar3) {
                    puStackX_20[2] = *(iStack_48 + 8);
                    puStackX_20[3] = iVar1;
                    puStackX_20[4] = uStack_40;
                    (**(*0x16a10 + 0x160))(puStackX_20 + 5,puVar4 + 6,0x10);
                    *puStackX_20 = 0x16a50;
                    puStackX_20[1] = *0x16a58;
                    **0x16a58 = puStackX_20;
                    *0x16a58 = puStackX_20;
                }
                if (iVar2 != 0) {
                    *(iVar2 + 0x18) = uStack_40;
                }
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010654 @ 0x10654 */

int64_t fcn.00010654(int64_t arg1)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg1 = 0;
    }
    iVar1 = (**(*0x16a18 + 0x48))(L"PlatformLang",0x15dc0,0,arg1,*in_stack_00000028);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x16a10 + 0x48))();
        }
        iVar1 = (**(*0x16a10 + 0x40))(4,*arg1,in_stack_00000028);
        if ((iVar1 < 0) || (*in_stack_00000028 == 0)) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x16a18 + 0x48))(L"PlatformLang",0x15dc0,0,arg1,*in_stack_00000028);
        }
    }
    return iVar1;
}


/* fcn.00010924 @ 0x10924 */

void fcn.00010924(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uint8_t uStack_74;
    uint uStack_70;
    int iStack_64;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    uchar uStack_24;
    uint32_t *puStack_20;
    uchar *puStack_18;
    
    (**(*0x16a10 + 0x168))(&uStack_48,0x38);
    (**(*0x16a10 + 0x168))(&uStack_78,0x2c);
    (**(*0x16a10 + 0x168))(auStack_88,0x10);
    uStack_70 = 0;
    uStack_74 = uStack_74 | 4;
    uStack_78 = uStack_78 & 0xfffffc02 | 2;
    uStack_48 = 10000000;
    iStack_64 = ((*arg3 >> 2) + -1) * 0x10000 + 6;
    uStack_24 = 0;
    puStack_20 = &uStack_78;
    puStack_18 = auStack_88;
    uStack_38 = *arg3;
    iStack_40 = arg2;
    (**(arg1 + 8))(arg1,0,&uStack_48,0);
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
    //[00] -r-x section size 23296 named .text
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


/* fcn.000137fc @ 0x137fc */

int64_t fcn.000137fc(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    uint8_t uVar1;
    char in_stack_00000028;
    char in_stack_00000030;
    
    *arg1 = arg2;
    uVar1 = in_stack_00000028 + arg3 & 0x7fU | in_stack_00000030 << 7;
    *(arg1 + 1) = uVar1;
    arg1_00 = fcn.000137a0(noname_0,uVar1 & 0x7f);
    if ((arg3 != 0) && (arg1_00 != arg1)) {
        fcn.000102e0(arg1_00,arg1,arg3);
    }
    return arg1_00;
}


/* fcn.000137a0 @ 0x137a0 */

int64_t fcn.000137a0(int64_t arg1,int64_t arg2)

{
    uint64_t arg1_00;
    int64_t iVar1;
    ulong uVar2;
    
    arg1_00 = *(arg1 + 8);
    if (arg1_00 < *(arg1 + 0x10) + arg2) {
        uVar2 = fcn.00013620(arg1,arg1_00,arg2 + 0x200 + arg1_00,*arg1);
        *arg1 = uVar2;
        *(arg1 + 8) = *(arg1 + 8) + arg2 + 0x200;
    }
    iVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar1 + arg2;
    return *arg1 + iVar1;
}


/* fcn.00013620 @ 0x13620 */

int64_t fcn.00013620(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000135c4(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.000102e0(arg1_00,arg3,arg2);
            }
            (**(*0x169d8 + 0x48))(arg3);
        }
    }
    return arg1_00;
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


/* fcn.00012644 @ 0x12644 */

void fcn.00012644(int64_t noname_0,int64_t arg1,int64_t arg2,uint32_t *arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012838(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012838 @ 0x12838 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00012838(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00012897;
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
code_r0x00012897:
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
        uVar21 = fcn.00012618(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001247c(arg4,0xf4241);
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
            pcVar8 = 0x164c4;
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
code_r0x00012c52:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x164c4;
            }
            else {
                pcVar8 = 0x164c8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x000129e9:
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
                    goto code_r0x00012b8c;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00012ba3;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00012b8c;
                        }
                        goto code_r0x00012ba3;
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
code_r0x00012b8c:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x000129e9;
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
                        goto code_r0x000129e9;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00012ba3;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00012b8c;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00012ba3:
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
                        fcn.000135a0(&var_68h_2,0x26,0,0x16458);
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
                            goto code_r0x00012c52;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00012e3b;
                        if (uStack_a8 == 0x58) goto code_r0x00012f30;
                        if (uStack_a8 == 0x61) goto code_r0x00012e44;
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
                            goto code_r0x000129ca;
                        }
                        if (uStack_a8 != 100) goto code_r0x000129c6;
                        goto code_r0x00012f47;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x164c4;
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
                goto code_r0x00013174;
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
                            iVar12 = 0x1655b;
                            goto code_r0x00012ef7;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00012ef7:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00013174;
                    }
                    fcn.000135a0(&var_68h_2,0x26,0,0x164bc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00012e3b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00012e44:
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
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00013174;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000129c6;
                            goto code_r0x00012f34;
                        }
                        goto code_r0x00012f39;
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
                        goto code_r0x00013174;
                    }
                    fcn.000135a0(&var_68h_2,0x26,0,0x164a0);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00013174;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00012f30:
            uVar21 = uVar21 | 0x20;
code_r0x00012f34:
            uVar21 = uVar21 | 0x80;
code_r0x00012f39:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00012f47:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00012f89;
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
code_r0x00012f89:
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
code_r0x00013011:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00013011;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFG"[uVar10 % uVar16];
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
code_r0x000129c6:
            pcVar8 = &uStack_a8;
code_r0x000129ca:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00013174:
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
                arg1 = fcn.00012674(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012674(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00012674(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00012674(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00010b00 @ 0x10b00 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.00010b00(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t iVar2;
    char *pcStackX_20;
    int64_t var_38h;
    ulong auStack_28 [2];
    int64_t var_bp_10h;
    
    pcStackX_20 = NULL;
    auStack_28[0] = 0;
    if ((*0x169b8 != NULL) || (iVar2 = (**(*0x16a10 + 0x140))(0x15e40,0,0x169b8), -1 < iVar2)) {
        if (*0x169c0 == NULL) {
            iVar2 = (*(*0x169b8)[3])(*0x169b8,arg1,pcStackX_20,auStack_28);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar2 = (**(*0x16a10 + 0x40))(4,auStack_28[0],&pcStackX_20);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = (*(*0x169b8)[3])(*0x169b8,arg1,pcStackX_20,auStack_28);
                if (iVar2 < 0) {
                    return;
                }
            }
        }
        else {
            pcStackX_20 = *0x169c0;
        }
        *0x169c0 = pcStackX_20;
        pcVar1 = pcStackX_20;
        if (pcStackX_20 != NULL) {
            while( true ) {
                while (*pcStackX_20 == ';') {
                    *pcStackX_20 = '\0';
                    if (*arg3 == 0) {
                        iVar2 = (***0x169b8)(*0x169b8,arg1,arg3,pcVar1,0,arg2,0);
                    }
                    else {
                        iVar2 = (*(*0x169b8)[2])(*0x169b8,arg1,*arg3,pcVar1,arg2,0);
                    }
                    *pcStackX_20 = ';';
                    pcStackX_20 = pcStackX_20 + 1;
                    if (iVar2 < 0) {
                        return;
                    }
                    pcVar1 = pcStackX_20;
                }
                if (*pcStackX_20 == '\0') break;
                pcStackX_20 = pcStackX_20 + 1;
            }
            if (*arg3 == 0) {
                (***0x169b8)(*0x169b8,arg1,arg3,pcVar1,0,arg2,0);
            }
            else {
                (*(*0x169b8)[2])(*0x169b8,arg1,*arg3,pcVar1,arg2,0);
            }
        }
    }
    return;
}


/* fcn.00015ac8 @ 0x15ac8 */

void fcn.00015ac8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auVar1 [16];
    int64_t iVar2;
    
    auVar1._8_8_ = 0;
    auVar1._0_8_ = arg1;
    iVar2 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar1,8);
    if (arg3 != 0) {
        *arg3 = arg1 + ((arg1 - iVar2 >> 1) + iVar2 >> 0x1d) * -1000000000;
    }
    return;
}


/* fcn.00010850 @ 0x10850 */

void fcn.00010850(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uint8_t uStack_74;
    int iStack_70;
    uint uStack_64;
    ulong uStack_48;
    ulong uStack_40;
    uint uStack_38;
    uchar uStack_24;
    uint32_t *puStack_20;
    uchar *puStack_18;
    
    (**(*0x16a10 + 0x168))(&uStack_48,0x38);
    (**(*0x16a10 + 0x168))(&uStack_78,0x2c);
    (**(*0x16a10 + 0x168))(auStack_88,0x10);
    uStack_64 = arg2;
    uStack_48 = 10000000;
    iStack_70 = -(arg3 != '\0');
    uStack_74 = uStack_74 | 4;
    uStack_24 = 0;
    uStack_78 = uStack_78 & 0xfffffc14 | 0x14;
    uStack_40 = 0;
    puStack_20 = &uStack_78;
    uStack_38 = 0;
    puStack_18 = auStack_88;
    (**(arg1 + 8))(arg1,0,&uStack_48,0);
    return;
}


/* fcn.0001060c @ 0x1060c */

void fcn.0001060c(void)

{
    uchar auStackX_8 [32];
    
    if (*0x169b0 != 0) {
        (**(*0x169b0 + 0x78))(0x16a03,L"Running Device SelfTest",L"Progress Update",0,0,0x16a60,auStackX_8);
    }
    return;
}


/* fcn.00010718 @ 0x10718 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00010718(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    ulong auStack_38 [2];
    int64_t var_10h;
    
    uVar1 = *0x169c8;
    uStackX_18 = 0;
    uStackX_20 = 0;
    auStack_38[0] = 0;
    if ((*0x169b8 == 0) && (iVar2 = (**(*0x16a10 + 0x140))(0x15e40,0,0x169b8), iVar2 < 0)) {
        return 0;
    }
    iVar2 = fcn.00010654(auStack_38);
    if (-1 < iVar2) {
        iVar2 = (**(*0x169b8 + 8))(*0x169b8,0,uVar1,arg2 & 0xffff,uStackX_18,&uStackX_20,0);
        if ((iVar2 == -0x7ffffffffffffffb) && (iVar2 = (**(*0x16a10 + 0x40))(4,uStackX_20,&uStackX_18), -1 < iVar2))
        {
            iVar2 = (**(*0x169b8 + 8))(*0x169b8,0,uVar1,arg2 & 0xffff,uStackX_18,&uStackX_20,0);
        }
        (**(*0x16a10 + 0x48))(0);
    }
    if (iVar2 < 0) {
        uStackX_18 = 0;
    }
    return uStackX_18;
}


/* fcn.00010a08 @ 0x10a08 */

ulong fcn.00010a08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    ulong noname_1;
    uint8_t uVar6;
    int64_t aiStack_18 [2];
    
    noname_1 = 0x400;
    aiStack_18[1] = 0x400;
    iVar4 = (**(*0x16a10 + 0x40))(4,0x400,aiStack_18);
    if (-1 < iVar4) {
        iVar4 = fcn.00010924(*arg4,noname_1,aiStack_18[0],aiStack_18 + 1);
        if (-1 < iVar4) {
            uVar6 = 0;
            if (aiStack_18[0] != 0) {
                puVar5 = aiStack_18[0] + 4;
                while ((*puVar5 & 0xf) != 0xf) {
                    if (*puVar5 >> 4 == arg1) {
                        *arg3 = *puVar5 & 0xf;
                        if (arg2 != 0) {
                            uVar1 = *(puVar5 + 4);
                            uVar2 = *(puVar5 + 8);
                            uVar3 = *(puVar5 + 0xc);
                            *arg2 = *puVar5;
                            *(arg2 + 4) = uVar1;
                            *(arg2 + 8) = uVar2;
                            *(arg2 + 0xc) = uVar3;
                            *(arg2 + 0x10) = *(puVar5 + 0x10);
                            *(arg2 + 0x18) = *(puVar5 + 0x18);
                        }
                        break;
                    }
                    puVar5 = puVar5 + 0x1c;
                    uVar6 = uVar6 + 1;
                    if (0x13 < uVar6) break;
                }
                (**(*0x16a10 + 0x48))(aiStack_18[0]);
            }
            return 0;
        }
        (**(*0x16a10 + 0x48))(aiStack_18[0]);
    }
    return 0x800000000000000e;
}


/* fcn.000135f4 @ 0x135f4 */

void fcn.000135f4(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000135c4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.000135c4 @ 0x135c4 */

ulong fcn.000135c4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x169d8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000156e0 @ 0x156e0 */

int64_t fcn.000156e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    int64_t aiStackX_8 [2];
    int16_t *piStackX_18;
    uint64_t uStackX_20;
    
    uStackX_20 = 0;
    aiStackX_8[0] = arg1;
    piStackX_18 = arg3;
    if (((*0x16a30 == 0) && (iVar3 = (**(*0x16a10 + 0x140))(0x15f88,0,0x16a30), iVar3 < 0)) ||
       ((*0x16a38 == 0 && (iVar3 = (**(*0x16a10 + 0x140))(0x15f68,0,0x16a38), iVar3 < 0)))) {
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        iVar3 = (**(*0x16a30 + 8))(*0x16a30,&uStackX_20,0,1,0x15e90,0x16070);
        if (iVar3 == -0x7ffffffffffffffb) {
            iVar3 = uStackX_20 + 0x70;
            arg1_00 = fcn.00013fc0(iVar3);
            iVar3 = fcn.00012644(arg1_00,iVar3,0x16228,L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00&");
            iVar3 = (**(*0x16a30 + 8))(*0x16a30,&uStackX_20,arg1_00 + iVar3 * 2,1,0x15e90,0x16070);
            if (iVar3 < 0) {
                (**(*0x16a10 + 0x48))();
            }
            else {
                fcn.000145f4(arg1_00);
                iVar3 = (**(*0x16a38 + 0x18))(*0x16a38,arg1_00,arg2,4,&piStackX_18,aiStackX_8);
                if (-1 < iVar3) {
                    uVar4 = 2;
                    iVar1 = *piStackX_18;
                    piVar2 = piStackX_18;
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        uVar4 = uVar4 + 2;
                        iVar1 = *piVar2;
                    }
                    uStackX_20 = uVar4;
                    iVar3 = (**(*0x16a30 + 8))(*0x16a30,&uStackX_20,piStackX_18,0,0x15e90,0x16070);
                    (**(*0x16a10 + 0x48))(piStackX_18);
                }
                (**(*0x16a10 + 0x48))(arg1_00);
            }
        }
    }
    return iVar3;
}


/* fcn.0001371c @ 0x1371c */

int64_t * fcn.0001371c(ulong param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.000135c4(param_1,0x18);
    if (piVar1 != NULL) {
        iVar2 = fcn.000135c4();
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            piVar1[2] = 0;
            piVar1[1] = 0x200;
            return piVar1;
        }
        (**(*0x169d8 + 0x48))(piVar1);
    }
    return NULL;
}


/* fcn.0001394c @ 0x1394c */

void fcn.0001394c(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStack_28 [2];
    ulong uStack_26;
    ulong uStack_1e;
    
    fcn.000102c0(auStack_28,0x12);
    uStack_26 = *0x15dd0;
    uStack_1e = *0x15dd8;
    fcn.000137fc(arg1,auStack_28,CONCAT71(in_R8,0x5f),0x12);
    return;
}


/* fcn.00010cb8 @ 0x10cb8 */

void fcn.00010cb8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t iVar2;
    int16_t iVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    uint uVar6;
    uint uVar7;
    uchar auStackX_20 [2];
    int16_t iStackX_22;
    int16_t iStackX_24;
    int16_t iStackX_26;
    
    if (arg3 != 0) {
        uVar4 = arg3 & 0xffffffff;
        piVar5 = arg2 + 4;
        do {
            iVar1 = piVar5[-2];
            if ((iVar1 != 0) || (*piVar5 != 0)) {
                iVar2 = *piVar5;
                iVar3 = piVar5[-1];
                fcn.000102c0(auStackX_20,8);
                uVar7 = arg3 >> 0x20;
                uVar6 = CONCAT31(arg3 >> 8,3);
                iStackX_22 = iVar1;
                iStackX_24 = iVar3;
                iStackX_26 = iVar2;
                fcn.000137fc(arg1,auStackX_20,CONCAT44(uVar7,uVar6),8);
                arg3 = CONCAT44(uVar7,uVar6);
            }
            piVar5 = piVar5 + 3;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return;
}


/* fcn.000139a8 @ 0x139a8 */

void fcn.000139a8(int64_t arg1,int64_t arg2)

{
    unkbyte7 in_R8;
    uchar auStack_18 [2];
    ushort uStack_16;
    ushort uStack_14;
    uchar uStack_12;
    
    fcn.000102c0(auStack_18,7);
    uStack_14 = 0x1c;
    uStack_12 = 0;
    uStack_16 = arg2;
    fcn.000137fc(arg1,auStack_18,CONCAT71(in_R8,2),7);
    return;
}


/* fcn.000138cc @ 0x138cc */

void fcn.000138cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uchar auStack_28 [2];
    ushort uStack_26;
    uint8_t uStack_24;
    uchar uStack_23;
    uchar auStack_22 [26];
    
    fcn.000102c0(auStack_28,0x1c);
    uStack_26 = arg2;
    uStack_24 = arg3 & 0x30;
    uStack_23 = 0;
    uVar1 = 0;
    fcn.000102e0(auStack_22,&stack0x00000028,1);
    fcn.000137fc(arg1,auStack_28,CONCAT71(uVar1 >> 8,9),7);
    return;
}


/* fcn.00013a04 @ 0x13a04 */

int64_t fcn.00013a04(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *in_stack_00000048;
    uchar auStack_38 [6];
    ushort uStack_32;
    ushort uStack_30;
    ushort uStack_2e;
    ushort uStack_2c;
    
    fcn.000102c0(auStack_38,0x26);
    iVar1 = *(arg1 + 0x10);
    uStack_30 = 0x29e2;
    uStack_2c = 4;
    uStack_32 = arg2;
    uStack_2e = arg3;
    fcn.000137fc(arg1,auStack_38,CONCAT71(noname_2 >> 8,5),0x11);
    fcn.00013868(arg1,*in_stack_00000048,in_stack_00000048[2]);
    fcn.000138a4(arg1);
    return *arg1 + iVar1;
}


/* fcn.00013868 @ 0x13868 */

void fcn.00013868(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000137a0(arg1,arg3);
    if ((arg3 != 0) && (arg1_00 != arg2)) {
        fcn.000102e0(arg1_00,arg2,arg3);
    }
    return;
}


/* fcn.000138a4 @ 0x138a4 */

void fcn.000138a4(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStackX_10 [24];
    
    fcn.000137fc(arg1,auStackX_10,CONCAT71(in_R8,0x29),2);
    return;
}


/* fcn.00013d80 @ 0x13d80 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.00013d80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    bool bVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t *arg2_00;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint64_t *arg1_00;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t *arg1_01;
    int64_t unaff_R15;
    uint64_t uStackX_10;
    uint16_t uStackX_18;
    int64_t iStackX_20;
    uint32_t var_48h;
    int64_t var_50h;
    int16_t var_58h;
    int64_t var_60h;
    uint64_t *puStackY_68;
    uint64_t *puStackY_60;
    ulong uStackY_58;
    int64_t in_stack_ffffffffffffffb8;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    uVar3 = *0x169c8;
    uStackX_18 = arg3;
    puVar5 = NULL;
    uStackY_58 = *0x169c8;
    puStackY_68 = NULL;
    puVar6 = NULL;
    uStackX_10 = arg2;
    iStackX_20 = arg4;
    iVar4 = (**(*0x16a08 + 0x20))(*0x16a08,*0x169c8,&puStackY_68,0);
    if (iVar4 != -0x7ffffffffffffffb) {
        return iVar4;
    }
    arg2_00 = fcn.000135c4(0x8000000000000005,puStackY_68);
    if (arg2_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    iVar4 = (**(*0x16a08 + 0x20))(*0x16a08,uVar3,&puStackY_68,arg2_00);
    if (-1 < iVar4) {
        puStackY_68 = puStackY_68 + *(arg4 + 0x10);
        puVar5 = fcn.000135f4(puStackY_68);
        puStackY_60 = puVar5;
        if ((puVar5 == NULL) || (arg1_00 = puStackY_68, puVar6 = fcn.000135f4(puStackY_68), puVar6 == NULL)) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            uVar9 = 0x14;
            if (puVar5 != arg2_00) {
                arg1_00 = puVar5;
                fcn.000102e0(puVar5,arg2_00,0x14);
            }
            iVar4 = iStackX_20;
            uVar2 = arg2_00[2];
            arg1_01 = puVar5 + 0x14;
            bVar1 = false;
            if (0x14 < uVar2) {
                do {
                    puVar5 = uVar9 + arg2_00;
                    if (&uStackX_10 != puVar5) {
                        arg1_00 = &uStackX_10;
                        fcn.000102e0(arg1_00,puVar5,4);
                    }
                    uVar8 = uVar9 + (*puVar5 & 0xffffff);
                    uVar9 = uVar8;
                    if ((*(puVar5 + 3) == '\x02') &&
                       (iVar7 = fcn.00013abc(arg1_00,uStackX_18,puVar5,iVar4,in_stack_ffffffffffffffb8,unaff_R15),
                       -1 < iVar7)) {
                        bVar1 = true;
                        puVar5 = puVar6;
                    }
                    if (&uStackX_10 != puVar5) {
                        arg1_00 = &uStackX_10;
                        fcn.000102e0(arg1_00,puVar5,4);
                    }
                    if (((uStackX_10 & 0xffffff) != 0) && (arg1_01 != puVar5)) {
                        arg1_00 = arg1_01;
                        fcn.000102e0(arg1_01,puVar5,uStackX_10 & 0xffffff);
                    }
                    puVar5 = puStackY_60;
                    arg1_01 = arg1_01 + (uStackX_10 & 0xffffff);
                } while (uVar8 < uVar2);
                if (bVar1) {
                    puStackY_68 = arg1_01 - puStackY_60;
                    *(puStackY_60 + 2) = puStackY_68;
                    iVar4 = (**(*0x16a08 + 0x10))(*0x16a08,uStackY_58,puStackY_60);
                    goto code_r0x00013f78;
                }
            }
            iVar4 = -0x7ffffffffffffff2;
        }
    }
code_r0x00013f78:
    (**(*0x169d8 + 0x48))(arg2_00);
    if (puVar5 != NULL) {
        (**(*0x169d8 + 0x48))(puVar5);
    }
    if (puVar6 != NULL) {
        (**(*0x169d8 + 0x48))(puVar6);
    }
    return iVar4;
}


/* fcn.00013770 @ 0x13770 */

void fcn.00013770(int64_t arg1)

{
    if (*arg1 != 0) {
        (**(*0x169d8 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x0001379a. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x169d8 + 0x48))(arg1);
    return;
}


/* fcn.00015cb0 @ 0x15cb0 */

int64_t fcn.00015cb0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010d5c @ 0x10d5c */

//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00010d5c(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uchar *arg2;
    uint32_t *arg3;
    ushort *puVar4;
    int64_t arg3_00;
    uint64_t uVar5;
    int64_t *piVar6;
    int8_t var_8h;
    ushort auStackX_8 [4];
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_bp_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    ushort *puVar7;
    ulong uVar8;
    ulong uVar9;
    int64_t iStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t auStack_110 [3];
    uchar auStack_f8 [112];
    uint uStack_88;
    uchar uStack_60;
    uint32_t var_bp_20h;
    
    *0x16a70 = 0x16a70;
    *0x16a78 = 0x16a70;
    iStackX_10 = 0;
    iStackX_18 = 0;
    uStack_120 = 0;
    iVar2 = (**(*0x16a10 + 0x138))(2,0x15e70,0,auStack_110,&iStackX_20);
    if (-1 < iVar2) {
        uStack_118 = 0;
        if (auStack_110[0] != 0) {
            do {
                uVar5 = uStack_118;
                arg3 = NULL;
                iVar2 = (**(*0x16a10 + 0x98))(*(iStackX_20 + uStack_118 * 8),0x15e70,&iStackX_18);
                if (-1 < iVar2) {
                    iVar2 = (**(*0x16a10 + 0x98))(*(iStackX_20 + uVar5 * 8),0x15e00,&iStack_128);
                    if (-1 < iVar2) {
                        iVar2 = (**(*0x16a10 + 0x40))(4,0x70,&iStackX_10);
                        if (-1 < iVar2) {
                            (**(*0x16a10 + 0x168))(iStackX_10,0x70);
                            iVar2 = (**(*0x16a10 + 0x40))(4,*(*(iStackX_18 + 0x168) + 0x204) * 6,iStackX_10 + 0x58);
                            if (-1 < iVar2) {
                                (**(*0x16a10 + 0x168))(*(iStackX_10 + 0x58),*(*(iStackX_18 + 0x168) + 0x204) * 6,0);
                                *(iStackX_10 + 0x3e) = 5;
                                *(iStackX_10 + 0x38) = 7;
                                *(iStackX_10 + 0x44) = 6;
                                *(iStackX_10 + 0x4a) = 8;
                                *(iStackX_10 + 0x50) = 9;
                                *(iStackX_10 + 0x30) = *(iStackX_20 + uVar5 * 8);
                                (**(*0x16a10 + 0x168))(&uStack_88,0x32);
                                (**(*0x16a10 + 0x160))(&uStack_88,*(iStackX_18 + 0x168) + 0x18,0x28);
                                iVar2 = 0x27;
                                uStack_60 = 0;
                                do {
                                    if (*(&uStack_88 + iVar2) != ' ') break;
                                    *(&uStack_88 + iVar2) = 0;
                                    iVar2 = iVar2 + -1;
                                } while (iVar2 != 0);
                                (**(*0x16a10 + 0x168))(auStack_f8,100,0);
                                fcn.00012644(auStack_f8,100,0x16104,&uStack_88);
                                fcn.00010b00(*0x169c8,auStack_f8,iStackX_10 + 0x42);
                                iVar2 = (**(iStack_128 + 0x70))
                                                  (iStack_128,iStackX_10 + 0x18,iStackX_10,iStackX_10 + 8,
                                                   iStackX_10 + 0x10);
                                if (-1 < iVar2) {
                                    (**(*0x16a10 + 0x168))(auStack_f8,100,0);
                                    uVar9 = *(iStackX_10 + 0x10);
                                    uVar8 = *(iStackX_10 + 8);
                                    fcn.00012644(auStack_f8,100,0x16110,*(iStackX_10 + 0x18));
                                    fcn.00010b00(*0x169c8,auStack_f8,iStackX_10 + 0x3c);
                                    puVar7 = auStackX_8;
                                    iVar2 = (**(iStack_128 + 0x30))(iStack_128,2,0,1,puVar7,uVar8,uVar9);
                                    if (-1 < iVar2) {
                                        *(iStackX_10 + 0x20) = auStackX_8[0];
                                        *(iStackX_10 + 0x22) = SUB42(auStackX_8._0_4_,2);
                                        (**(*0x16a10 + 0x168))(auStack_f8,100,0);
                                        fcn.00012644(auStack_f8,100,0x16138,*(iStackX_10 + 0x20));
                                        fcn.00010b00(*0x169c8,auStack_f8,iStackX_10 + 0x4e);
                                        (**(*0x16a10 + 0x168))(auStack_f8,100,0);
                                        fcn.00012644(auStack_f8,100,0x16138,*(iStackX_10 + 0x22));
                                        arg2 = auStack_f8;
                                        fcn.00010b00(*0x169c8,arg2,iStackX_10 + 0x54);
                                        arg3_00 = *(iStackX_10 + 0x58);
                                        piVar6 = *(iStackX_18 + 400);
                                        if (piVar6 != iStackX_18 + 400) {
                                            do {
                                                uVar1 = fcn.00015ac8(*(piVar6[-0x19] + 0xc) * piVar6[-0x21a],arg2,
                                                                     &uStack_120);
                                                arg3 = arg3 + uVar1;
                                                puVar4 = uStack_120 / 100000000;
                                                (**(*0x16a10 + 0x168))(auStack_f8,100,0,*0x16a10,puVar7);
                                                fcn.00012644(auStack_f8,100,0x16148,*(piVar6 + -0x10f4));
                                                fcn.00010b00(*0x169c8,auStack_f8,arg3_00);
                                                (**(*0x16a10 + 0x168))(auStack_f8,100);
                                                fcn.00012644(auStack_f8,100,0x16168,uVar1);
                                                arg2 = auStack_f8;
                                                fcn.00010b00(*0x169c8,arg2,arg3_00 + 4);
                                                arg3_00 = arg3_00 + 6;
                                                *(iStackX_10 + 0x24) = *(iStackX_10 + 0x24) + 1;
                                                piVar6 = *piVar6;
                                                puVar7 = puVar4;
                                            } while (piVar6 != iStackX_18 + 400);
                                            uVar5 = uStack_118;
                                        }
                                        fcn.00012644(auStack_f8,100,0x16188,arg3);
                                        fcn.00010b00(*0x169c8,auStack_f8,iStackX_10 + 0x48);
                                        *(iStackX_10 + 0x28) = *(*(iStackX_18 + 0x168) + 0x100) >> 4 & 1;
                                        *(iStackX_10 + 0x2a) = *(*(iStackX_18 + 0x168) + 0x13c);
                                        puVar3 = iStackX_10 + 0x60;
                                        *puVar3 = 0x16a70;
                                        *(iStackX_10 + 0x68) = *0x16a78;
                                        **0x16a78 = puVar3;
                                        *0x16a78 = puVar3;
                                    }
                                }
                            }
                        }
                    }
                }
                uStack_118 = uVar5 + 1;
            } while (uStack_118 < auStack_110[0]);
        }
        if (iStackX_20 != 0) {
            (**(*0x16a10 + 0x48))();
        }
    }
    return iVar2;
}


/* fcn.00011b1c @ 0x11b1c */

//WARNING: Variable defined which should be unmapped: var_4h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00011b1c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint *puVar7;
    ushort *puVar8;
    ushort *arg1_00;
    uchar uVar9;
    int16_t iVar10;
    uint64_t arg3;
    ulong uVar11;
    int16_t iVar12;
    uint32_t uVar13;
    ushort auStackX_10 [4];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int8_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uchar auStack_48 [2];
    uint uStack_46;
    int16_t iStack_42;
    uint in_stack_ffffffffffffffc0;
    uchar in_stack_ffffffffffffffc4;
    ushort in_stack_ffffffffffffffc5;
    uchar in_stack_ffffffffffffffc7;
    int64_t var_10h;
    int8_t var_4h;
    int16_t var_3h;
    
    uVar13 = arg1 & 0xffff;
    iVar10 = 0;
    iVar2 = fcn.0001371c();
    iVar3 = fcn.0001371c();
    if (iVar2 != 0) {
        iVar4 = fcn.0001394c(iVar2);
        iVar5 = fcn.0001394c(iVar3);
        if ((iVar4 != 0) && (iVar5 != 0)) {
            *(iVar4 + 0x12) = 0;
            *(iVar5 + 0x12) = 0;
            *(iVar4 + 0x13) = 0x2000;
            *(iVar5 + 0x13) = 0x2001;
            piVar1 = *0x16a70;
            if (*0x16a70 != 0x16a70) {
                do {
                    piVar6 = piVar1;
                    iVar12 = arg1;
                    if (iVar10 == iVar12) break;
                    iVar10 = iVar10 + 1;
                    piVar1 = *piVar6;
                } while (*piVar6 != 0x16a70);
                if (piVar6 != 0x60) {
                    fcn.00010cb8(iVar2,piVar6 + -5,5);
                    fcn.000139a8(iVar2,0x1c);
                    arg3 = *(piVar6 + -0x3c);
                    puVar8 = piVar6[-1];
                    iVar4 = iVar2;
                    fcn.00010cb8(iVar2,puVar8,arg3);
                    if (*(piVar6 + -0x3c) == 0) {
                        puVar8 = 0x1d;
                        iVar4 = iVar2;
                        fcn.000139a8(iVar2,0x1d);
                    }
                    if (piVar6[-7] != '\0') {
                        fcn.000139a8(iVar2,0x1c);
                        fcn.000139a8(iVar2,10);
                        iVar4 = fcn.0001371c();
                        fcn.000138cc(iVar4,0x19,CONCAT71(arg3 >> 8,0x30));
                        fcn.000138cc(iVar4,0x1a,0);
                        uVar11 = 0;
                        fcn.00013a04(iVar2,uVar13 + 0x2962,0x18,0);
                        (**(*0x169d8 + 0x48))(iVar4);
                        iVar4 = fcn.0001371c();
                        fcn.000138cc(iVar4,0x15,CONCAT71(uVar11 >> 8,0x30));
                        fcn.000138cc(iVar4,0x16,0);
                        fcn.00013a04(iVar2,uVar13 + 0x29c2,0x13,1);
                        (**(*0x169d8 + 0x48))(iVar4);
                        fcn.000102c0(auStack_48,0xf);
                        iStack_42 = iVar12 + 0x2942;
                        uStack_46 = 0x120011;
                        in_stack_ffffffffffffffc4 = 4;
                        in_stack_ffffffffffffffc5 = 0;
                        fcn.000137fc(iVar2,auStack_48,0xc,0xf);
                        fcn.000139a8(iVar2,0x1c);
                        *0x15ea0 = 1;
                        iVar4 = piVar6[-6];
                        auStackX_10[0] = CONCAT11(auStackX_10[0]._1_1_,0xf);
                        iVar5 = (**(*0x16a10 + 0x98))(iVar4,0x15de0,auStackX_18);
                        uVar9 = 0xf;
                        if (-1 < iVar5) {
                            fcn.00010a08(CONCAT71(iVar4 >> 8,1),0,auStackX_10,auStackX_18);
                            uVar9 = auStackX_10[0];
                        }
                        *0x15ea2 = uVar9;
                        iVar4 = piVar6[-6];
                        auStackX_10[0] = CONCAT11(auStackX_10[0]._1_1_,0xf);
                        iVar5 = (**(*0x16a10 + 0x98))(iVar4);
                        uVar9 = 0xf;
                        if (-1 < iVar5) {
                            fcn.00010a08(CONCAT71(iVar4 >> 8,2),0,auStackX_10,auStackX_20);
                            uVar9 = auStackX_10[0];
                        }
                        *0x15ea3 = uVar9;
                        iVar4 = fcn.0001371c();
                        fcn.000138cc(iVar4,0xd,0);
                        fcn.000138cc(iVar4,0xf,0);
                        uVar11 = 0;
                        fcn.000138cc(iVar4,0xe,0);
                        iVar5 = CONCAT71(uVar11 >> 8,0x30);
                        fcn.000138cc(iVar4,0x10,iVar5);
                        puVar7 = fcn.000135f4(4);
                        if (puVar7 != NULL) {
                            iVar5 = 4;
                            *puVar7 = 0x2468219;
                            fcn.00013868(iVar2,puVar7,4);
                        }
                        fcn.00013a04(iVar2,uVar13 + 0x2982,iVar5,2);
                        auStackX_10[0] = 0x229;
                        puVar8 = fcn.000137a0(iVar2,2);
                        if (puVar8 != auStackX_10) {
                            fcn.000102e0(puVar8,auStackX_10,2);
                        }
                        (**(*0x169d8 + 0x48))(iVar4);
                        iVar4 = fcn.0001371c();
                        fcn.000138cc(iVar4,0xd,0);
                        fcn.000138cc(iVar4,0xf,0);
                        uVar11 = 0;
                        fcn.000138cc(iVar4,0xe,0);
                        iVar5 = CONCAT71(uVar11 >> 8,0x30);
                        fcn.000138cc(iVar4,0x10,iVar5);
                        puVar7 = fcn.000135f4(4);
                        if (puVar7 != NULL) {
                            iVar5 = 4;
                            *puVar7 = 0x2468219;
                            fcn.00013868(iVar2,puVar7,4);
                        }
                        fcn.00013a04(iVar2,iVar12 + 0x29a2,iVar5,3);
                        puVar8 = 0x2;
                        auStackX_10[0] = 0x229;
                        arg1_00 = fcn.000137a0(iVar2,2);
                        if (arg1_00 != auStackX_10) {
                            puVar8 = auStackX_10;
                            fcn.000102e0(arg1_00,puVar8,2);
                        }
                        (**(*0x169d8 + 0x48))();
                    }
                    fcn.00013d80(iVar4,puVar8,2,iVar2,
                                 CONCAT17(in_stack_ffffffffffffffc7,
                                          CONCAT25(in_stack_ffffffffffffffc5,
                                                   CONCAT14(in_stack_ffffffffffffffc4,in_stack_ffffffffffffffc0))));
                    fcn.00013770(iVar2);
                    fcn.00013770(iVar3);
                    iVar4 = 4;
                    iVar3 = 2;
                    iVar2 = 0x16070;
                    (**(*0x16a18 + 0x58))(0x16070,0x15e90,2,4,0x15ea0);
                    fcn.000156e0(iVar2,0x15ea0,iVar3,iVar4);
                }
            }
        }
    }
    return;
}


/* fcn.00011364 @ 0x11364 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_24h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

void fcn.00011364(uint32_t arg1)

{
    uint8_t uVar1;
    int16_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    uint32_t uVar9;
    uint64_t arg1_00;
    int16_t iVar10;
    ulong uVar11;
    uint8_t uVar12;
    ulong uStackX_10;
    uchar auStackX_18 [8];
    int16_t *piStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int16_t *piStack_78;
    int16_t aiStack_70 [4];
    ulong uStack_68;
    uint8_t uStack_60;
    uint8_t uStack_5f;
    uint8_t uStack_5e;
    uint32_t *puStack_5c;
    uint32_t uStack_54;
    uint32_t *puStack_50;
    int64_t var_40h;
    uint32_t var_38h;
    int64_t var_30h;
    int8_t var_28h;
    int8_t var_27h;
    int8_t var_26h;
    int64_t var_24h;
    int32_t var_1ch;
    int64_t var_18h;
    int8_t var_10h;
    int8_t var_fh;
    
    iVar6 = 0;
    iVar10 = 0;
    piVar3 = *0x16a70;
    if (*0x16a70 != 0x16a70) {
        do {
            piVar4 = piVar3;
            if (iVar10 == arg1) break;
            iVar10 = iVar10 + 1;
            piVar3 = *piVar4;
        } while (*piVar4 != 0x16a70);
        if ((piVar4 != 0x60) && (iVar5 = (**(*0x16a10 + 0x98))(piVar4[-6],0x15de0,&piStack_78), -1 < iVar5)) {
            uVar11 = 0x169b0;
            (**(*0x169d8 + 0x140))(0x15e50,0,0x169b0);
            piVar8 = piStack_78;
            iVar5 = fcn.00010850(piStack_78,*0x15ea0,CONCAT71(uVar11 >> 8,*0x15ea1));
            if (-1 < iVar5) {
                iVar5 = (**(*0x16a10 + 0x40))(4,0x400,&piStackX_20);
                if (iVar5 < 0) {
                    return;
                }
                if (piStackX_20 == NULL) {
                    return;
                }
                if (*0x169b0 != 0) {
                    (**(*0x169b0 + 0x78))
                              (CONCAT71(&uStack_68 >> 8,1),L"Running Device SelfTest",L"Progress Update",0,0,
                               0x16a60,&uStack_68);
                }
                piVar2 = piStackX_20;
                uVar11 = 0x400;
                (**(*0x16a10 + 0x168))(piStackX_20,0x400,0);
                uStackX_10 = 0x400;
                iVar5 = fcn.00010924(piStack_78,uVar11,piStackX_20,&uStackX_10);
                piVar8 = piStackX_20;
                while (-1 < iVar5) {
                    aiStack_70[0] = 0;
                    piStackX_20 = piVar8;
                    if ((*0x169b0 != 0) &&
                       ((**(*0x169b0 + 0x78))
                                  (0x16a02,L"Running Device SelfTest",L"Progress Update",0,*(piVar2 + 1),0x16a60,
                                   aiStack_70), aiStack_70[0] == 0x17)) {
                        fcn.00010850(piStack_78,0xf,0);
code_r0x00011614:
                        if (piStackX_20 != NULL) {
                            (**(*0x16a10 + 0x48))();
                            piStackX_20 = NULL;
                        }
                        fcn.0001060c();
                        uVar1 = *0x15ea0;
                        iVar5 = piVar4[-6];
                        uStackX_10 = CONCAT71(uStackX_10._1_7_,0xf);
                        iVar7 = (**(*0x16a10 + 0x98))(iVar5,0x15de0,&uStack_68);
                        uVar12 = 0xf;
                        if (-1 < iVar7) {
                            fcn.00010a08(CONCAT71(iVar5 >> 8,uVar1),&uStack_60,&uStackX_10,&uStack_68);
                            uVar12 = uStackX_10;
                        }
                        if (*0x169b0 == 0) goto code_r0x00011ac8;
                        arg1_00 = uVar12;
                        iVar5 = 0xe;
                        if (uVar12 != 0) {
                            uVar9 = uVar12 - 1;
                            arg1_00 = uVar9;
                            if ((uVar9 != 0) && (uVar9 != 0xe)) {
                                iVar5 = 0x800;
                                piStackX_20 = fcn.000135f4(0x800);
                                if (piStackX_20 == NULL) {
                                    return;
                                }
                                iVar7 = fcn.00010718(iVar5,0x1b);
                                fcn.00012644(piStackX_20,0x800,0x161e8,L"Status                  : FAILED");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"Device Self-Test Status : ");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16230,uStack_60 & 0xf);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"Segment Number          : ");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16280,uStack_5f);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"Valid Diagnostic Info   : ");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16280,uStack_5e);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"Power On Hours :");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x162f8,puStack_5c);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"NSID                    : ");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16340,uStack_54);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"Failing LBA : ");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x162f8,puStack_50);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"StatusCode Type         : ");
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16280,var_40h);
                                iVar10 = *piStackX_20;
                                iVar5 = iVar6;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar5,0x800,0x16228,L"StatusCode              : ");
                                iVar10 = *piStackX_20;
                                piVar8 = piStackX_20;
                                while (iVar10 != 0) {
                                    piVar8 = piVar8 + 1;
                                    iVar6 = iVar6 + 1;
                                    iVar10 = *piVar8;
                                }
                                fcn.00012644(piStackX_20 + iVar6,0x800,0x16280,var_40h._1_1_);
                                (**(*0x169b0 + 0x20))(iVar7,piStackX_20,1,auStackX_18);
                                if (iVar7 != 0) {
                                    (**(*0x169d8 + 0x48))(iVar7);
                                }
                                piVar8 = piStackX_20;
                                if (piStackX_20 != NULL) {
code_r0x00011abe:
                                    (**(*0x169d8 + 0x48))(piVar8);
                                }
code_r0x00011ac8:
                                if (*0x15ea0 == 1) {
                                    *0x15ea2 = uVar12;
                                }
                                else {
                                    *0x15ea3 = uVar12;
                                }
                                iVar7 = 4;
                                iVar5 = 2;
                                iVar6 = 0x16070;
                                (**(*0x16a18 + 0x58))(0x16070,0x15e90,2,4,0x15ea0);
                                fcn.000156e0(iVar6,0x15ea0,iVar5,iVar7);
                                return;
                            }
                        }
                        iVar6 = fcn.00010718(arg1_00,0x1b);
                        if (uVar12 == 0) {
                            iVar5 = 0xd;
                        }
                        else if (uVar12 == 1) {
                            iVar5 = 0xf;
                        }
                        else if (uVar12 == 0xf) {
                            iVar5 = 0x10;
                        }
                        piVar8 = fcn.00010718(arg1_00,iVar5);
                        (**(*0x169b0 + 0x20))(iVar6,piVar8,1,0);
                        if (iVar6 != 0) {
                            (**(*0x169d8 + 0x48))(iVar6);
                        }
                        if (piVar8 == NULL) goto code_r0x00011ac8;
                        goto code_r0x00011abe;
                    }
                    if (*piVar2 == '\0') goto code_r0x00011614;
                    (**(*0x169d8 + 0xf8))(1000000);
                    uVar11 = uStackX_10;
                    (**(*0x16a10 + 0x168))(piStackX_20,uStackX_10,0);
                    uStackX_10 = 0x400;
                    iVar5 = fcn.00010924(piStack_78,uVar11,piStackX_20,&uStackX_10);
                    piVar8 = piStackX_20;
                }
                if (piVar8 != NULL) {
                    (**(*0x16a10 + 0x48))();
                }
                fcn.0001060c();
            }
            if (*0x169b0 != 0) {
                iVar6 = fcn.00010718(piVar8,0x1b);
                iVar5 = fcn.00010718(piVar8,0xe);
                (**(*0x169b0 + 0x20))(iVar6,iVar5,1,0);
                if (iVar6 != 0) {
                    (**(*0x169d8 + 0x48))(iVar6);
                }
                if (iVar5 != 0) {
                    (**(*0x169d8 + 0x48))(iVar5);
                }
            }
        }
    }
    return;
}


/* fcn.0001247c @ 0x1247c */

uint64_t fcn.0001247c(uint32_t arg1,int64_t arg2)

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


/* fcn.00012674 @ 0x12674 */

uchar * fcn.00012674(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012618 @ 0x12618 */

uint64_t fcn.00012618(uint32_t arg1,int64_t arg2)

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


/* fcn.000135a0 @ 0x135a0 */

void fcn.000135a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012838(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013abc @ 0x13abc */

ulong fcn.00013abc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

{
    char *pcVar1;
    bool bVar2;
    bool bVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *arg2_00;
    char *pcVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iStackX_8;
    ushort auStackX_10 [4];
    ulong *in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_58h;
    
    piVar4 = in_stack_00000030;
    auStackX_10[0] = arg2;
    uVar10 = 4;
    iStackX_8 = arg1;
    if (in_stack_00000030 != arg3) {
        fcn.000102e0(in_stack_00000030,arg3,4);
    }
    iVar9 = 4;
    pcVar7 = piVar4 + 4;
    if (&iStackX_8 != arg3) {
        fcn.000102e0(&iStackX_8,arg3,4);
    }
    arg2_00 = arg3 + 4;
    bVar2 = false;
    bVar3 = false;
    uVar5 = iStackX_8;
    do {
        if ((uVar5 & 0xffffff) <= uVar10) {
            return 0x800000000000000e;
        }
        if (((arg2_00[1] & 0x7fU) != 0) && (pcVar7 != arg2_00)) {
            fcn.000102e0(pcVar7,arg2_00,arg2_00[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        pcVar7 = pcVar7 + (arg2_00[1] & 0x7f);
        iVar9 = iVar9 + (arg2_00[1] & 0x7f);
        if (*arg2_00 == '\x0e') {
            if ((*(arg2_00 + 2) == *0x15ed0) && (*(arg2_00 + 10) == *0x15ed8)) {
                bVar2 = true;
            }
            else {
                bVar2 = false;
            }
        }
        else if ((*arg2_00 == '\x01') || (*arg2_00 == ']')) {
            if (arg2_00 + 2 != auStackX_10) {
                iVar6 = fcn.00010320(arg2_00 + 2,auStackX_10,2);
                uVar5 = iStackX_8;
                if (iVar6 != 0) {
                    bVar3 = false;
                    goto code_r0x00013bc8;
                }
            }
            bVar3 = true;
        }
code_r0x00013bc8:
        if (((bVar2) && (bVar3)) && (pcVar1 = *arg4, ((arg2_00[1] ^ pcVar1[1]) & 0x7fU) == 0)) {
            if (((pcVar1[1] & 0x7fU) == 0) || (arg2_00 == pcVar1)) {
                iVar6 = 0;
            }
            else {
                iVar6 = fcn.00010320(arg2_00,pcVar1,pcVar1[1] & 0x7f);
                uVar5 = iStackX_8;
            }
            if (iVar6 == 0) {
                if (in_stack_00000028 == NULL) goto code_r0x00013c91;
                pcVar1 = *in_stack_00000028;
                break;
            }
        }
        uVar10 = uVar10 + (arg2_00[1] & 0x7f);
        arg2_00 = arg2_00 + (arg2_00[1] & 0x7f);
    } while( true );
    while( true ) {
        if (((pcVar1[1] & 0x7fU) == 0) || (arg2_00 == pcVar1)) {
            iVar6 = 0;
        }
        else {
            iVar6 = fcn.00010320(arg2_00,pcVar1,pcVar1[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        if (iVar6 == 0) break;
        do {
            uVar10 = uVar10 + (arg2_00[1] & 0x7f);
            arg2_00 = arg2_00 + (arg2_00[1] & 0x7f);
            if ((uVar5 & 0xffffff) <= uVar10) goto code_r0x00013c83;
        } while (((arg2_00[1] ^ pcVar1[1]) & 0x7fU) != 0);
    }
code_r0x00013c83:
    if ((uVar5 & 0xffffff) <= uVar10) {
        return 0x800000000000000e;
    }
code_r0x00013c91:
    uVar11 = *(*arg4 + 1) & 0x7f;
    pcVar1 = *arg4 + uVar11;
    iVar6 = *(arg4 + 0x10) - uVar11;
    if ((iVar6 != 0) && (pcVar7 != pcVar1)) {
        fcn.000102e0(pcVar7,pcVar1,iVar6);
        uVar5 = iStackX_8;
    }
    iVar6 = *(arg4 + 0x10) - uVar11;
    pcVar7 = pcVar7 + iVar6;
    iVar8 = iVar9 + iVar6;
    if (in_stack_00000028 != NULL) {
        if (((arg2_00[1] & 0x7fU) != 0) && (pcVar7 != arg2_00)) {
            fcn.000102e0(pcVar7,arg2_00,arg2_00[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        pcVar7 = pcVar7 + (arg2_00[1] & 0x7f);
        iVar8 = iVar8 + (arg2_00[1] & 0x7f);
    }
    iVar6 = uVar10 + (arg2_00[1] & 0x7f);
    iVar9 = (uVar5 & 0xffffff) - iVar6;
    if ((iVar9 != 0) && (pcVar7 != iVar6 + arg3)) {
        fcn.000102e0(pcVar7,iVar6 + arg3,iVar9);
        uVar5 = iStackX_8;
    }
    iStackX_8 = CONCAT44(iStackX_8._4_4_,uVar5 ^ (iVar8 + ((uVar5 & 0xffffff) - iVar6) ^ uVar5) & 0xffffff);
    if (in_stack_00000030 != &iStackX_8) {
        fcn.000102e0(in_stack_00000030,&iStackX_8,4);
    }
    return 0;
}


/* fcn.00013fc0 @ 0x13fc0 */

ulong fcn.00013fc0(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x16a10 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00014158 @ 0x14158 */

int64_t fcn.00014158(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.0001402c(arg1);
    arg1_01 = fcn.00013fc0(arg1_00);
    fcn.00015d10(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.0001402c @ 0x1402c */

int64_t fcn.0001402c(int64_t arg1)

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


/* fcn.00015d10 @ 0x15d10 */

int64_t fcn.00015d10(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00015afc @ 0x15afc */

int64_t fcn.00015afc(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.0001440c @ 0x1440c */

void fcn.0001440c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            if (uVar4 == arg2 - 1U) {
                cVar1 = *(arg1 + uVar4 * 2);
                cVar3 = '\0';
            }
            else {
                cVar3 = *(arg1 + uVar4 * 2);
                if (cVar3 - 0x30U < 10) {
                    cVar3 = cVar3 + -0x30;
                }
                else if (cVar3 + 0xbfU < 6) {
                    cVar3 = cVar3 + -0x37;
                }
                else {
                    cVar3 = cVar3 + -0x57;
                }
                cVar1 = *(arg1 + 2 + uVar4 * 2);
            }
            if (cVar1 - 0x30U < 10) {
                uVar2 = cVar1 - 0x30;
            }
            else if (cVar1 + 0xbfU < 6) {
                uVar2 = cVar1 - 0x37;
            }
            else {
                uVar2 = cVar1 + 0xa9;
            }
            uVar4 = uVar4 + 2;
            *arg3 = cVar3 << 4 | uVar2;
            arg3 = arg3 + 1;
        } while (uVar4 < arg2);
    }
    return;
}


/* fcn.00015bd0 @ 0x15bd0 */

ulong fcn.00015bd0(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x169d8 + 0x98))(param_1,0x15df0,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00015c04 @ 0x15c04 */

char * fcn.00015c04(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00015b74(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000124b0 @ 0x124b0 */

ulong fcn.000124b0(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    int16_t *piVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int16_t iVar4;
    
    iVar4 = 0;
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    piVar2 = 0x16840;
    fcn.0001247c(0x16840,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (piVar2 <= arg1) {
        if (arg1 < piVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (piVar2 < arg1) goto code_r0x00012521;
    }
    if (piVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00012521:
    iVar1 = 0x47;
    iVar3 = piVar2 - arg1;
    do {
        *arg1 = iVar1;
        arg1 = arg1 + 2;
        iVar1 = *(iVar3 + arg1);
    } while (iVar1 != 0);
    *arg1 = iVar4;
    return 0;
}


/* fcn.000126a8 @ 0x126a8 */

ulong fcn.000126a8(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = "0123456789ABCDEFG"[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = "0123456789ABCDEFG"[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00012674(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00012548 @ 0x12548 */

ulong fcn.00012548(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.0001247c(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.0001247c(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x000125e9;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x000125e9:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.000146d4 @ 0x146d4 */

int16_t * fcn.000146d4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    uint16_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint16_t *puVar4;
    uint64_t arg1_00;
    uint64_t uVar5;
    int16_t *arg1_01;
    int64_t iVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    uint in_register_00000014;
    uint16_t *puVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    ulong uVar12;
    
    puVar9 = CONCAT44(in_register_00000014,arg2);
    uVar8 = 0;
    uVar10 = uVar8;
    if (puVar9 != NULL) {
        uVar1 = *puVar9;
        uVar10 = 0;
        puVar4 = puVar9;
        while (uVar1 != 0) {
            puVar4 = puVar4 + 1;
            uVar10 = uVar10 + 1;
            uVar1 = *puVar4;
        }
    }
    arg1_00 = uVar8;
    uVar5 = uVar8;
    if (arg3 != 0) {
        arg1_00 = fcn.00015bd0(arg3);
        if (arg1_00 == 0) {
            return NULL;
        }
        uVar5 = fcn.00015c04(arg1_00);
    }
    arg2_00 = (uVar5 + uVar10 * 2) * 2 + 0x32;
    arg1_01 = fcn.000135f4(arg2_00 * 2);
    if (arg1_01 != NULL) {
        fcn.000124b0(arg1_01,arg2_00);
        iVar2 = *arg1_01;
        piVar11 = arg1_01;
        while (iVar2 != 0) {
            piVar11 = piVar11 + 1;
            uVar8 = uVar8 + 1;
            iVar2 = *piVar11;
        }
        piVar11 = arg1_01 + uVar8;
        if (arg1 != 0) {
            uVar10 = 0;
            do {
                fcn.000126a8(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,arg3,*(uVar10 + arg1));
                iVar6 = fcn.0001247c(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar10 < 0x10);
        }
        uVar12 = 0x16850;
        fcn.00012548(arg1_01,arg2_00,0x16850);
        uVar8 = 0;
        iVar2 = *piVar11;
        piVar7 = piVar11;
        uVar10 = uVar8;
        while (iVar2 != 0) {
            piVar7 = piVar7 + 1;
            uVar10 = uVar10 + 1;
            iVar2 = *piVar7;
        }
        piVar11 = piVar11 + uVar10;
        if (puVar9 != NULL) {
            for (; *puVar9 != 0; puVar9 = puVar9 + 1) {
                fcn.000126a8(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,uVar12,*puVar9);
                iVar6 = fcn.0001247c(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                piVar11 = piVar11 + iVar6;
            }
        }
        uVar12 = 0x16860;
        fcn.00012548(arg1_01,arg2_00,0x16860);
        iVar2 = *piVar11;
        piVar7 = piVar11;
        uVar10 = uVar8;
        while (iVar2 != 0) {
            piVar7 = piVar7 + 1;
            uVar10 = uVar10 + 1;
            iVar2 = *piVar7;
        }
        piVar11 = piVar11 + uVar10;
        if (uVar5 != 0) {
            do {
                fcn.000126a8(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,uVar12,*(uVar8 + arg1_00));
                iVar6 = fcn.0001247c(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar8 = uVar8 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar8 < uVar5);
        }
        *piVar11 = 0;
        bVar3 = false;
        iVar2 = *arg1_01;
        piVar11 = arg1_01;
        while (iVar2 != 0) {
            iVar2 = *piVar11;
            if (iVar2 == 0x3d) {
                bVar3 = true;
            }
            else if (iVar2 == 0x26) {
                bVar3 = false;
            }
            else if ((bVar3) && (iVar2 - 0x41U < 6)) {
                *piVar11 = iVar2 + 0x20;
            }
            piVar11 = piVar11 + 1;
            iVar2 = *piVar11;
        }
        return arg1_01;
    }
    return NULL;
}


/* fcn.00014944 @ 0x14944 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00014944(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    uint64_t arg2_00;
    uint32_t *puVar1;
    uint8_t uVar2;
    int16_t iVar3;
    uint64_t uVar4;
    uint16_t *puVar5;
    uint32_t *arg3_00;
    int64_t iVar6;
    uint16_t *puVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    int64_t iStackX_18;
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    int64_t var_50h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    puVar7 = arg3 + 0x16;
    uVar11 = 0;
    iStackX_18 = 0;
    uVar2 = *puVar7;
    uVar4 = 0;
    while (uVar2 != 0) {
        uVar4 = uVar4 + 1;
        uVar2 = *(puVar7 + uVar4);
    }
    arg2_00 = uVar4 + 1;
    iStackX_20 = arg4;
    puVar5 = fcn.000135f4(arg2_00 * 2);
    uVar10 = 0;
    if (puVar5 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (((puVar7 == NULL) || (999999 < uVar4)) ||
       (puVar9 = puVar5, uVar4 = fcn.00012618(puVar7,arg2_00), arg2_00 <= uVar4)) goto code_r0x00014a0c;
    if (puVar5 < puVar7) {
code_r0x000149e9:
        if (puVar7 < puVar5 + arg2_00) goto code_r0x00014a0c;
    }
    else {
        if (puVar5 < uVar4 + 1 + puVar7) goto code_r0x00014a0c;
        if (puVar5 <= puVar7) goto code_r0x000149e9;
    }
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
    }
    *puVar9 = uVar10;
code_r0x00014a0c:
    if (auStack_48 != arg3 + 2) {
        fcn.000102e0(auStack_48,arg3 + 2,0x10);
    }
    arg3_00 = fcn.000146d4(auStack_48,puVar5,arg2);
    iVar6 = 0;
    iVar3 = *arg3_00;
    puVar1 = arg3_00;
    while (iVar3 != 0) {
        puVar1 = puVar1 + 2;
        iVar6 = iVar6 + 1;
        iVar3 = *puVar1;
    }
    iStackX_18 = iVar6 * 2 + 0x42;
    iVar6 = fcn.000135f4(iStackX_18);
    if (iVar6 == 0) {
        iVar8 = -0x7ffffffffffffff7;
        *in_stack_00000028 = 0;
        uVar11 = 0;
    }
    else {
        fcn.00012644(iVar6,iStackX_18,0x16880,arg3_00);
        iStackX_18 = 0;
        iVar8 = (**(*0x16a18 + 0x48))(puVar5,auStack_48,0,&iStackX_18,0);
        if (iVar8 == -0x7ffffffffffffffb) {
            uVar11 = fcn.000135f4(iStackX_18);
            iVar8 = (**(*0x16a18 + 0x48))(puVar5,auStack_48,0,&iStackX_18,uVar11);
            if (-1 < iVar8) {
                iVar8 = (**(arg1 + 0x18))(arg1,iVar6,uVar11,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
            }
        }
    }
    (**(*0x169d8 + 0x48))(puVar5);
    if (uVar11 != 0) {
        (**(*0x169d8 + 0x48))(uVar11);
    }
    (**(*0x169d8 + 0x48))(arg3_00);
    if (iVar6 != 0) {
        (**(*0x169d8 + 0x48))(iVar6);
    }
    return iVar8;
}


/* fcn.00014b8c @ 0x14b8c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00014b8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    bool bVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    char *arg3_00;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t *in_stack_00000028;
    int16_t *piStack_70;
    int64_t *piStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int8_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar13 = 0;
    iStack_50 = 0;
    piStack_70 = NULL;
    bVar2 = false;
    uVar3 = (**(*0x16a10 + 0x140))(0x15f28,0,0x16a40);
    if (uVar3 < 0) {
        return uVar3;
    }
    uVar3 = (**(*0x16a10 + 0x140))(0x15f68,0,&iStack_50);
    if (uVar3 < 0) {
        return uVar3;
    }
    iStack_60 = 0;
    iVar4 = (**(*0x16a40 + 0x18))(*0x16a40,0,0,&iStack_60,&var_38h);
    if ((iVar4 == -0x7ffffffffffffffb) && (piVar5 = fcn.000135f4(iStack_60 + 8), piVar5 != NULL)) {
        iVar4 = (**(*0x16a40 + 0x18))(*0x16a40,0,0,&iStack_60,piVar5);
        if (iVar4 < 0) {
            iVar4 = *0x169d8;
        }
        else {
            bVar1 = false;
            if (*piVar5 != 0) {
                piVar11 = piVar5;
                do {
                    (**(*0x16a40 + 0x50))(*0x16a40,*piVar11,&var_40h);
                    if ((_var_40h == arg2) && (*piVar11 == arg1)) {
                        bVar1 = true;
                        break;
                    }
                    uVar13 = uVar13 + 1;
                    piVar11 = piVar5 + uVar13;
                    bVar1 = false;
                } while (*piVar11 != 0);
            }
            (**(*0x16a10 + 0x48))(piVar5);
            if (!bVar1) {
                return 0x800000000000000e;
            }
            iVar4 = 0;
            piStack_68 = NULL;
            uVar3 = (**(*0x16a40 + 0x20))(*0x16a40,arg1,&stack0xffffffffffffffa8,0);
            if ((uVar3 < 0) && (uVar3 != 0x8000000000000005)) {
                return uVar3;
            }
            (**(*0x16a10 + 0x40))(4,iVar4,&piStack_68);
            if (piStack_68 == NULL) {
                return 0x8000000000000009;
            }
            (**(*0x16a40 + 0x20))(*0x16a40,arg1,&stack0xffffffffffffffa8);
            piVar5 = piStack_68;
            uVar3 = 0x14;
            bVar1 = false;
            if (0x14 < *(piStack_68 + 2)) {
                do {
                    bVar1 = bVar2;
                    if (bVar2) break;
                    puVar9 = uVar3 + piVar5;
                    uVar10 = *puVar9 & 0xffffff;
                    uVar14 = uVar3 + uVar10;
                    uVar3 = uVar14;
                    if ((*(puVar9 + 3) == '\x02') && (uVar13 = 4, 4 < uVar10)) {
                        do {
                            _var_40h = uVar13 + puVar9;
                            uVar12 = uVar13 + (_var_40h[1] & 0x7f);
                            uVar13 = uVar12;
                            if ((*_var_40h == '\x0e') && (iVar6 = fcn.00015afc(_var_40h + 2,arg3,0x10), iVar6 == 0))
                            {
                                bVar2 = true;
                                break;
                            }
                        } while (uVar12 < uVar10);
                    }
                    bVar1 = bVar2;
                } while (uVar14 < *(piVar5 + 2));
            }
            *arg4 = 0;
            *in_stack_00000028 = 0;
            if (bVar1) {
                do {
                    iVar6 = 0;
                    arg3_00 = _var_40h + (_var_40h[1] & 0x7f);
                    if (((*arg3_00 == '$') &&
                        (iVar7 = fcn.00014944(iStack_50,arg2,arg3_00,&piStack_70,iVar4), -1 < iVar7)) &&
                       (piStack_70 != NULL)) {
                        piVar8 = *arg4;
                        if (piVar8 == NULL) {
                            *arg4 = piStack_70;
                        }
                        else {
                            iVar7 = iVar6;
                            for (; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar7 = iVar7 + 1;
                            }
                            for (piVar8 = piStack_70; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar6 = iVar6 + 1;
                            }
                            uVar3 = (iVar6 + iVar7) * 2 + 8;
                            iVar6 = fcn.000135f4(uVar3);
                            if (iVar6 == 0) {
                                return 0x8000000000000009;
                            }
                            uVar3 = uVar3 >> 1;
                            fcn.00012548(iVar6,uVar3,*arg4);
                            fcn.00012548(iVar6,uVar3,0x1687c);
                            fcn.00012548(iVar6,uVar3,piStack_70);
                            (**(*0x16a10 + 0x48))(*arg4);
                            (**(*0x16a10 + 0x48))(piStack_70);
                            *arg4 = iVar6;
                            *in_stack_00000028 = iVar6;
                            piStack_70 = NULL;
                        }
                    }
                    _var_40h = arg3_00;
                    if (*arg3_00 == ')') {
                        if (piStack_68 != NULL) {
                            (**(*0x16a10 + 0x48))();
                        }
                        return ~-(*arg4 != 0) & 0x800000000000000e;
                    }
                } while( true );
            }
            iVar4 = *0x16a10;
        }
        (**(iVar4 + 0x48))(piVar5);
    }
    return 0x800000000000000e;
}


/* fcn.00014260 @ 0x14260 */

void fcn.00014260(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    
    piVar6 = arg1 + 4;
    for (uVar5 = 0;
        ((((iVar2 = piVar6[-2], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
         (((iVar2 = piVar6[-1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) &&
          ((0x19 < iVar2 - 0x47U && ((iVar2 = *piVar6, iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)))))))) &&
        ((0x19 < iVar2 - 0x47U &&
         ((((iVar2 = piVar6[1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
          (uVar5 < *arg2 - 1U)))))); uVar5 = uVar5 + 1) {
        cVar1 = piVar6[-2];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 & 0xf) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[-1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = *piVar6;
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        piVar6 = piVar6 + 4;
        *(arg3 + uVar5 * 2) = uVar3 | uVar4;
    }
    *arg2 = uVar5;
    *(arg3 + uVar5 * 2) = 0;
    return;
}


/* fcn.000141a0 @ 0x141a0 */

int64_t fcn.000141a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x16a18 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x16a10 + 0x48))();
        }
        iVar1 = fcn.00013fc0(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x16a18 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.00013fec @ 0x13fec */

int64_t fcn.00013fec(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00013fc0(arg1);
    if (iVar1 != 0) {
        (**(*0x16a10 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.0001448c @ 0x1448c */

uint64_t fcn.0001448c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcStackX_8;
    char *pcStackX_18;
    
    uVar4 = 0;
    pcStackX_8 = NULL;
    uVar6 = uVar4;
    piVar5 = arg1;
    while( true ) {
        iVar1 = *piVar5;
        while ((iVar1 != 0x26 && (iVar1 != 0))) {
            uVar6 = uVar6 + 1;
            iVar1 = *(arg1 + uVar6 * 2);
        }
        if (*(arg1 + uVar6 * 2) == 0) break;
        uVar6 = uVar6 + 1;
        piVar5 = arg1 + uVar6 * 2;
        iVar2 = fcn.00015afc(piVar5,*0x16978,10);
        if (iVar2 == 0) {
            arg1 = arg1 + uVar6 * 2;
            uVar6 = uVar4;
            for (piVar5 = arg1 + 10;
                ((iVar1 = *piVar5, iVar1 - 0x30U < 0x37 && (6 < iVar1 - 0x3aU)) && (0x19 < iVar1 - 0x47U));
                piVar5 = piVar5 + 1) {
                uVar6 = uVar6 + 1;
            }
            pcVar7 = uVar6 >> 1;
            uVar3 = (**(*0x16a10 + 0x40))(4,pcVar7,&pcStackX_8);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                pcVar7 = pcStackX_8;
            }
            else {
                fcn.0001440c(arg1 + 10,uVar6,pcStackX_8);
            }
            if (-1 < uVar4) {
                if (((pcStackX_8 == NULL) || (pcVar7 < 0x4)) ||
                   ((pcVar7 < *(pcStackX_8 + 2) || ((4 < *pcStackX_8 - 1U && (*pcStackX_8 != '\x7f')))))) {
                    uVar4 = 0x800000000000000e;
                }
                else {
                    pcStackX_18 = pcStackX_8;
                    uVar4 = (**(*0x16a10 + 0xb8))(0x16048,&pcStackX_18,arg2);
                }
                (**(*0x16a10 + 0x48))(pcStackX_8);
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00014080 @ 0x14080 */

int64_t fcn.00014080(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x15f10;
        }
        arg1_00 = fcn.00014158(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.0001402c(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00013fc0(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00015d10(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00015d10(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x15f10;
    }
    return arg1_00;
}


/* fcn.000145f4 @ 0x145f4 */

void fcn.000145f4(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong in_RDX;
    int64_t iVar4;
    int16_t iVar5;
    int64_t aiStackX_18 [2];
    
    iVar4 = 0;
    iVar1 = (**(*0x16a10 + 0x40))(4,in_RDX,aiStackX_18);
    if (-1 < iVar1) {
        iVar5 = *arg1;
        iVar1 = iVar4;
        if (iVar5 != 0) {
            piVar2 = arg1;
            do {
                if ((iVar5 == 0x26) && (iVar3 = fcn.00015afc(piVar2 + 2,*0x16988,0xc), iVar3 == 0)) {
                    do {
                        iVar4 = iVar4 + 1;
                        iVar5 = *(arg1 + iVar4 * 2);
                        if (iVar5 == 0x26) break;
                    } while (iVar5 != 0);
                    iVar5 = *(arg1 + iVar4 * 2);
                    if (iVar5 == 0) break;
                }
                iVar4 = iVar4 + 1;
                *(aiStackX_18[0] + iVar1 * 2) = iVar5;
                piVar2 = arg1 + iVar4 * 2;
                iVar5 = *piVar2;
                iVar1 = iVar1 + 1;
            } while (iVar5 != 0);
        }
        *(aiStackX_18[0] + iVar1 * 2) = 0;
        fcn.00015d10(arg1,aiStackX_18[0],iVar1 * 2 + 2);
        (**(*0x16a10 + 0x48))(aiStackX_18[0]);
    }
    return;
}


/* fcn.00015530 @ 0x15530 */

int64_t fcn.00015530(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    iVar5 = 0;
    uStackX_18 = 0;
    piVar3 = 0x15eb0;
    iVar4 = iVar5;
    iStackX_20 = arg4;
    do {
        if (*piVar3 != 0) {
            iVar1 = fcn.00015afc(arg2 + 2,*piVar3,0x10);
            if (iVar1 == 0) break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
    } while (iVar4 == 0);
    if (iVar4 == 1) {
        iVar1 = 0x16028;
    }
    else {
        iVar4 = iVar4 * 0x20;
        iVar1 = iVar4 + 0x15eb0;
        piVar3 = *(iVar4 + 0x15eb8);
        if (piVar3 == NULL) {
            *(iVar4 + 0x15eb8) = 0x15f38;
        }
        else {
            if (*piVar3 == 0) {
                *piVar3 = 0x14f48;
            }
            if (*(*(iVar4 + 0x15eb8) + 8) == 0) {
                *(*(iVar4 + 0x15eb8) + 8) = 0x152c8;
            }
            if (*(*(iVar4 + 0x15eb8) + 0x10) == 0) {
                *(*(iVar4 + 0x15eb8) + 0x10) = 0x15524;
            }
        }
    }
    iVar4 = (**(*0x16a10 + 0x98))(*(arg1 + 0x18),0x15f18,&iStackX_20);
    if (iVar4 < 0) {
        iStackX_20 = iVar5;
    }
    iStackX_20 = fcn.00014080(iStackX_20,*(arg1 + 0x20));
    *0x15f54 = *(arg2 + 2);
    *0x15f5c = *(arg2 + 10);
    uVar2 = fcn.00014080(iStackX_20,0x15f50);
    (**(*0x16a10 + 0x48))(iStackX_20);
    iVar4 = (**(*0x16a10 + 0x148))(&uStackX_18,0x15f18,uVar2,0x15f78,*(iVar1 + 8),0);
    if (-1 < iVar4) {
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = uStackX_18;
        }
        if (in_stack_00000028 != NULL) {
            if (iVar1 == 0x16028) {
                iVar1 = iVar5;
            }
            *in_stack_00000028 = iVar1;
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00015b74 @ 0x15b74 */

bool fcn.00015b74(uint32_t arg1)

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


