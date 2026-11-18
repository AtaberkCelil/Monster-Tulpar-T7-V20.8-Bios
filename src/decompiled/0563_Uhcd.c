// decompiled by r2ghidra: 0563_Uhcd.pe32
// functions: 110

/* entry0 @ 0x103a4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103c0(arg1,in_RDX);
    fcn.00011498(arg1,in_RDX);
    return;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x202a8 = *(arg1 + 0x60);
    *0x202b0 = *(arg1 + 0x58);
    *0x202a0 = arg1;
    fcn.0001e040();
    puVar4 = fcn.0001e040();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001041f:
            if (puVar4 == NULL) {
                uVar5 = fcn.000103a0();
                fcn.00010390();
                uVar2 = in(0x1808);
                fcn.00010370(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010360();
                }
                fcn.00010370(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010390();
                }
                else {
                    fcn.00010380();
                }
                return;
            }
            if ((*0x1f858 == *(puVar4 + 4)) && (*0x1f860 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001041f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00011498 @ 0x11498 */

//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00011498(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *puVar9;
    bool bVar10;
    int64_t aiStackX_8 [4];
    int64_t var_77h;
    int64_t var_7fh;
    ulong uVar11;
    uint uStack_f8;
    uint uStack_f4;
    uint uStack_f0;
    uint uStack_ec;
    uint uStack_e8;
    uint uStack_e4;
    uint uStack_e0;
    uint uStack_dc;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    uchar auStack_b8 [8];
    uchar auStack_b0 [8];
    uchar auStack_a8 [8];
    uchar auStack_a0 [8];
    uchar auStack_98 [8];
    uchar auStack_90 [8];
    char acStack_88 [3];
    int32_t var_7dh;
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    uint32_t var_29h;
    
    uStack_f8 = 0xec87d643;
    aiStackX_8[3] = 0;
    uStack_d8 = 0;
    uStack_f4 = 0x4bb5eba4;
    uStack_f0 = 0x3e3fe5a1;
    uStack_ec = 0xa90db236;
    uStack_c0 = 0;
    aiStackX_8[1] = 0x31;
    aiStackX_8[0] = arg1;
    iVar3 = (**(*0x202b0 + 0x48))(L"UsbSupport",&uStack_f8,0,aiStackX_8 + 1,acStack_88);
    if ((iVar3 == 0) && (acStack_88[0] == '\0')) {
        fcn.0001e4e4(0);
        iVar3 = -0x7ffffffffffffffd;
    }
    else {
        cVar1 = fcn.0001cd9c(0x1e9d0,0x6a);
        if (cVar1 != '\0') {
            cVar1 = fcn.0001cd9c(0x1e9d0,0x6e);
            if (cVar1 == '\0') {
                *0x1ea70 = 4;
            }
        }
        uVar2 = fcn.0001cd70(0x1e9d0,0x2a);
        fcn.00010660(uVar2);
        uVar4 = *0x20248;
        puVar9 = *0x20240;
        puVar6 = *0x20218;
        *(*0x20218 + 0x5a5) = 0xfffffffffffffffe;
        *puVar6 = 3;
        *puVar9 = uVar4;
        iVar3 = puVar6 + 0x756;
        *iVar3 = iVar3;
        *(puVar6 + 0x75e) = iVar3;
        fcn.00010adc();
        puVar6 = *0x20218;
        *0x203a0 = *0x20240 + 0x7a;
        *(*0x20218 + 0x1b1) = 1;
        *(puVar6 + 0x727) = 0;
        *(puVar6 + 0x729) = 0;
        *0x203a8 = 100;
        *0x203b0 = 0;
        *0x203b8 = 0;
        fcn.0001e4e4(puVar6);
        *0x20360 = *(*0x20240 + 0x3aa);
        *0x20378 = 0x10584;
        *0x20368 = 0;
        *0x20380 = 1;
        (**(*0x202a8 + 0x80))(aiStackX_8,0x1ea60,0,0x20360);
        **(*0x20240 + 0x3a2) = 1;
        *(*(*0x20240 + 0x3a2) + 2) = 0xe;
        *(*(*0x20240 + 0x3a2) + 4) = 100;
        *(*(*0x20240 + 0x3a2) + 6) = 0x14;
        *(*(*0x20240 + 0x3a2) + 8) = 0x32;
        *(*(*0x20240 + 0x3a2) + 10) = 10;
        *(*(*0x20240 + 0x3a2) + 0xc) = 100;
        *(*(*0x20240 + 0x3a2) + 0xe) = 2;
        *(*(*0x20240 + 0x3a2) + 0x10) = 10;
        *(*(*0x20240 + 0x3a2) + 0x12) = 100;
        *(*(*0x20240 + 0x3a2) + 0x14) = 0x32;
        *(*(*0x20240 + 0x3a2) + 0x16) = 0x32;
        uVar4 = 0;
        *(*(*0x20240 + 0x3a2) + 0x18) = 500;
        *(*(*0x20240 + 0x3a2) + 0x1a) = 100;
        iVar3 = (**(*0x202a8 + 0x80))(aiStackX_8,0x1e890,0,*(*0x20240 + 0x3a2));
        puVar6 = *0x20218;
        if (-1 < iVar3) {
            *(*0x20218 + 0x5ae) = uVar2;
            *(puVar6 + 0x5b2) = uVar2 << 4;
            iVar3 = fcn.00019400(uVar2 << 4,0x10);
            *(*0x20240 + 0x1a) = iVar3;
            if (*(*0x20218 + 0x5b2) != 0) {
                fcn.000102e0(iVar3,*(*0x20218 + 0x5b2),CONCAT71(uVar4 >> 8,0xff));
            }
            uVar2 = fcn.0001cd70(0x1e9d0,0xc);
            *(*0x20218 + 0x767) = uVar2 + 1;
            uVar4 = fcn.00019400((uVar2 + 1) * 0x10,0x10);
            *(*0x20240 + 0x39a) = uVar4;
            cVar1 = fcn.0001cd9c(0x1e9d0,0x6f);
            puVar6 = *0x20218;
            if (cVar1 == '\0') {
                *(*0x20218 + 0x6c6) = 0;
            }
            else if (*(*0x20218 + 0x6cf) != '\0') {
                cVar1 = in(100);
                *(*0x20218 + 0x6c6) = cVar1 != -1;
            }
            bVar10 = *0x1ea70 == 4;
            *(puVar6 + 0x74a) = 0xc0000000;
            *(puVar6 + 0x6a1) = *0x20240;
            if (bVar10) {
                *(puVar6 + 0x921) = *(puVar6 + 0x921) | 0x10;
            }
            else {
                cVar1 = fcn.0001cd9c(0x1e9d0,0x6a);
                if (cVar1 != '\0') {
                    aiStackX_8[2] = 0;
                    (**(*0x202a8 + 0x80))(aiStackX_8 + 2,0x1e8b0,0,0);
                }
                puVar6 = *0x20218;
            }
            puVar9 = *0x20230;
            uVar4 = 0x1e910;
            (*0x20230)[1] = fcn.000136a0;
            puVar9[2] = 0x13208;
            puVar9[3] = 0x13398;
            puVar9[4] = 0x13b44;
            puVar9[5] = 0x13b5c;
            puVar9[6] = 0x13b5c;
            puVar9[7] = 0x13b5c;
            puVar9[8] = 0x1e4c4;
            puVar9[0xc] = fcn.0001383c;
            puVar9[0xd] = 0x1e3b8;
            puVar9[0xe] = 0x13894;
            iVar3 = *0x202a8;
            *puVar9 = puVar6;
            iVar3 = (**(iVar3 + 0x80))(aiStackX_8 + 3,0x1e910,0);
            if (-1 < iVar3) {
                if ((*(*0x20218 + 0x921) & 0x20) == 0) {
                    *0x1eaa0 = aiStackX_8[0];
                    *0x1ea98 = aiStackX_8[0];
                    uVar11 = 0x1ebd8;
                    iVar3 = fcn.0001df84(aiStackX_8[0],uVar4,0x1ea78,aiStackX_8[0]);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    uVar8 = 0;
                    piVar5 = 0x1fa10;
                    do {
                        iVar3 = (**piVar5)(aiStackX_8[0],0);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        uVar8 = uVar8 + 1;
                        piVar5 = uVar8 * 8 + 0x1fa10;
                    } while (*piVar5 != 0);
                    puVar9 = NULL;
                    iVar3 = (**(*0x202a8 + 0x50))(0x200,8,0x11d70,0,&uStack_d0,uVar11);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    (**(*0x202a8 + 0xa8))(0x1e930,uStack_d0,&uStack_d8);
                }
                cVar1 = fcn.0001cd9c(0x1e9d0,0x6e);
                if (cVar1 != '\0') {
                    uStack_c8 = 0;
                    uStack_e8 = 0xc8bca618;
                    puVar9 = NULL;
                    iVar3 = 8;
                    uStack_e4 = 0x46b7bfc6;
                    uStack_e0 = 0x1483198d;
                    uStack_dc = 0xc16ee5e2;
                    (**(*0x202a8 + 0x170))(0x200,8,0x12ba8,0,&uStack_e8,auStack_b8);
                    fcn.0001df1c(0x1e9e0,iVar3,0x11d00,puVar9);
                    iVar7 = 0;
                    iVar3 = (**(*0x202a8 + 0x140))(0x1e900,0,&uStack_c8);
                    if (iVar3 < 0) {
                        fcn.0001df1c(0x1e900,iVar7,0x11d58,puVar9);
                    }
                    else {
                        **0x20218 = **0x20218 | 0x80000;
                    }
                }
                iVar7 = 0;
                iVar3 = (**(*0x202a8 + 0x140))(0x1e940,0,0x20228);
                if (iVar3 < 0) {
                    fcn.0001df1c(0x1e940,iVar7,0x11ce0,puVar9);
                }
                if (0x1ffff < *(*0x202a0 + 8)) {
                    (**(*0x202a8 + 0x170))(0x200,0x10,0x12674,0,0x1e880,auStack_b0);
                }
                (**(*0x202a8 + 0x50))(0x201,0x10,0x12490,0,auStack_a8);
                if ((*(*0x20218 + 0x921) & 0x20) == 0) {
                    if (((*(*0x20218 + 0x6c9) & 0x4000) == 0) && (*(*0x20218 + 0x6cf) != '\x01')) {
                        (**(*0x202a8 + 0x50))(0x80000200,0x10,0x10494,0,0x20210);
                        (**(*0x202a8 + 0x58))(*0x20210,1);
                    }
                    iVar3 = fcn.0001dfe0(8,0x128f8,0,auStack_a0);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    (**(*0x202a8 + 0x170))(0x200,8,0x1292c,0,0x1ea10,auStack_98);
                }
                iVar3 = (**(*0x202a8 + 0x170))(0x200,8,0x12958,0,0x1e8f0,auStack_90);
            }
        }
    }
    return iVar3;
}


/* fcn.0001e040 @ 0x1e040 */

int64_t fcn.0001e040(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x202c8 == 0) {
        *0x202c8 = 0;
        if (*(*0x202a0 + 0x68) != 0) {
            piVar2 = *(*0x202a0 + 0x70);
            do {
                if ((*0x1e9c0 == *piVar2) && (*0x1e9c8 == piVar2[1])) {
                    *0x202c8 = (*(*0x202a0 + 0x70))[uVar1 * 3 + 2];
                    return *0x202c8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x202a0 + 0x68));
        }
    }
    return *0x202c8;
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010362 @ 0x10362 */

void fcn.00010362(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.0001e150 @ 0x1e150 */

ulong fcn.0001e150(void)

{
    if ((*0x202d8 == 0) && ((**(*0x202a8 + 0x140))(0x1e870,0,0x202d8), *0x202d8 == 0)) {
        return 0x8000000000000003;
    }
    return 0;
}


/* section..text @ 0x10280 */

ulong * section..text(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    ulong *puVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    //[00] -r-x section size 58784 named .text
    uVar6 = 0;
    puVar4 = CONCAT44(in_register_00000014,arg2);
    puVar3 = puVar4 + arg3 + -1;
    if ((puVar4 < puVar1) && (puVar1 <= puVar3)) {
        puVar4 = puVar1 + arg3 + -1;
        uVar6 = 1;
        uVar5 = arg3;
    }
    else {
        uVar5 = arg3 & 7;
        puVar3 = puVar4;
        puVar4 = puVar1;
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
        }
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + uVar6 * -2 + 1;
        puVar4 = puVar4 + uVar6 * -2 + 1;
    }
    return puVar1;
}


/* fcn.0001cd70 @ 0x1cd70 */

void fcn.0001cd70(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001ccf8();
    //WARNING: Could not recover jumptable at 0x0001cd95. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 8))(arg1,arg2);
    return;
}


/* fcn.0001ccf8 @ 0x1ccf8 */

int64_t fcn.0001ccf8(void)

{
    if (*0x202b8 == 0) {
        (**(*0x202a8 + 0x140))(0x1e950,0,0x202b8);
    }
    return *0x202b8;
}


/* fcn.00019400 @ 0x19400 */

uint64_t fcn.00019400(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t auStackX_18 [2];
    
    if (arg1 != 0) {
        if (*0x1eba0 == '\0') {
            uVar3 = *0x20308 % (arg2 & 0xffffU);
            if (uVar3 != 0) {
                *0x20308 = ((arg2 & 0xffffU) - uVar3) + *0x20308;
            }
            uVar3 = *0x20308 + (arg1 & 0xffffffffU);
            uVar2 = -(uVar3 < *0x20318) & *0x20308;
            *0x20308 = uVar3;
            return uVar2;
        }
        uVar3 = arg1 >> 0xc & 0xfffff;
        auStackX_18[0] = 0xffffffff;
        *0x1eba0 = '\0';
        iVar1 = (**(*0x202a8 + 0x28))(1,*0x1ea70,uVar3,auStackX_18);
        if ((-1 < iVar1) || (iVar1 = (**(*0x202a8 + 0x28))(0,*0x1ea70,uVar3,auStackX_18), -1 < iVar1)) {
            uVar3 = uVar3 << 0xc;
            *0x20308 = auStackX_18[0];
            if (uVar3 != 0) {
                fcn.000102e0(auStackX_18[0],uVar3,0);
            }
            *0x20310 = *0x20308;
            *0x20318 = (uVar3 - 1) + *0x20308;
            return *0x20308;
        }
    }
    return 0;
}


/* fcn.0001cd9c @ 0x1cd9c */

void fcn.0001cd9c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001ccf8();
    //WARNING: Could not recover jumptable at 0x0001cdc1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x30))(arg1,arg2);
    return;
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


/* fcn.0001e4e4 @ 0x1e4e4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001e4e4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ushort auStackX_10 [4];
    uint auStackX_18 [2];
    int64_t iStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    uStack_58 = 0xec87d643;
    _var_30h = 0;
    _var_28h = 0;
    uVar5 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_54 = 0x4bb5eba4;
    uVar6 = (*(*0x20218 + 0x6c9) & 0x800 | 0x400) >> 9;
    uStack_50 = 0x3e3fe5a1;
    uStack_4c = 0xa90db236;
    auStackX_18[0] = 0;
    iStackX_20 = 4;
    iVar2 = (**(*0x202b0 + 0x58))(L"UsbControllerNum",&uStack_58,uVar6,4,auStackX_18);
    if (-1 < iVar2) {
        auStackX_10[0] = 0x100;
        iStackX_20 = 2;
        iVar2 = (**(*0x202b0 + 0x58))(L"UsbMassDevNum",&uStack_58,uVar6,2,auStackX_10);
        if (-1 < iVar2) {
            iVar2 = 0x20;
            iStackX_20 = 0x20;
            (**(*0x202b0 + 0x58))(L"UsbMassDevValid",&uStack_58,uVar6,0x20,&uStack_48);
            if (arg1 != 0) {
                iStackX_20 = 0x31;
                iVar3 = (**(*0x202b0 + 0x48))(L"UsbSupport",&uStack_58,0,&iStackX_20,*(*0x20240 + 0x3aa));
                if ((iVar3 < 0) || (iStackX_20 != 0x31)) {
                    fcn.000102e0(*(*0x20240 + 0x3aa),0x31,0);
                    iVar1 = *0x20240;
                    iVar3 = *0x20218;
                    **(*0x20240 + 0x3aa) = 1;
                    if ((*(iVar3 + 0x6c9) & 0x20) != 0) {
                        *(*(iVar1 + 0x3aa) + 4) = 3;
                    }
                    if ((*(iVar3 + 0x6c9) & 0x40) != 0) {
                        *(*(iVar1 + 0x3aa) + 5) = 3;
                    }
                    if ((*(iVar3 + 0x6c9) & 0x80) != 0) {
                        *(*(iVar1 + 0x3aa) + 6) = 3;
                    }
                    *(*(iVar1 + 0x3aa) + 8) = 1;
                    *(*(iVar1 + 0x3aa) + 9) = 0x14;
                    *(*(iVar1 + 0x3aa) + 0x2a) = 1;
                    *(*(iVar1 + 0x3aa) + 0x2e) = 1;
                    *(*(iVar1 + 0x3aa) + 0x2f) = 1;
                    iVar3 = (**(*0x202b0 + 0x58))(L"UsbSupport",&uStack_58,uVar6 | 1,0x31,*(iVar1 + 0x3aa));
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                }
                iVar3 = *0x20240;
                uVar4 = uVar5;
                do {
                    *(uVar4 + 0x72a + arg1) = *(uVar4 + 10 + *(iVar3 + 0x3aa));
                    uVar4 = uVar4 + 1;
                    iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                if (*(*(iVar3 + 0x3aa) + 1) == '\x01') {
                    *arg1 = *arg1 | 4;
                }
                *(arg1 + 0x6c0) = *(*(iVar3 + 0x3aa) + 9) * 1000;
                if (((*(*0x20218 + 0x6c9) & 8) != 0) && (*(*(iVar3 + 0x3aa) + 0x2a) == '\0')) {
                    *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) & 0xfffffff7;
                }
                if (*(*(iVar3 + 0x3aa) + 0x2c) != '\0') {
                    uVar5 = *(*(iVar3 + 0x3aa) + 0x2d);
                }
                *(arg1 + 0x6c8) = uVar5;
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00010660 @ 0x10660 */

uint64_t fcn.00010660(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    char cVar4;
    char cVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong noname_0;
    int64_t iVar10;
    int64_t iVar11;
    uint8_t uVar12;
    int iVar13;
    
    uVar1 = fcn.0001cd70(0x1e9d0,0xc);
    uVar2 = fcn.0001cd70(0x1e9d0,0x2e);
    cVar3 = fcn.0001cd70(0x1e9d0,0x2f);
    cVar4 = fcn.0001cd70(0x1e9d0,0x30);
    cVar5 = fcn.0001cd70(0x1e9d0,0x32);
    iVar13 = arg1 * 0x1000;
    uVar12 = cVar5 + cVar4 + cVar3 + uVar2;
    uVar9 = uVar12 * 0x1c0;
    iVar7 = fcn.00019400(uVar9 + (arg1 >> 3 & 0x1fffffff) + 0x14ee7 + iVar13 + uVar1 * 0x10 + uVar2 * 8,0x10);
    if (iVar7 == 0) {
        return 0x8000000000000009;
    }
    iVar7 = fcn.00019400(iVar13 + 0x10000,0x1000);
    if (iVar7 == 0) {
        return 0x8000000000000009;
    }
    iVar11 = (arg1 << 0xc) + iVar7;
    if (iVar11 == 0) {
        return 0x8000000000000009;
    }
    iVar10 = 0x1000;
    noname_0 = 0x400;
    iVar8 = fcn.00019400(0x400,0x1000);
    if (iVar8 == 0) {
        return 0x8000000000000009;
    }
    uVar6 = fcn.00010370(noname_0,iVar10);
    uVar6 = uVar6 & 0xf;
    if (uVar6 < 3) {
        *0x20240 = fcn.00019400(0x3da,0x10);
        if (*0x20240 == 0) {
            return 0x8000000000000009;
        }
        *0x20230 = fcn.00019400(0x88,0x10);
        if (*0x20230 == 0) {
            return 0x8000000000000009;
        }
        *0x20248 = fcn.00019400(0x1f,0x10);
        if (*0x20248 == 0) {
            return 0x8000000000000009;
        }
        iVar10 = fcn.00019400(0x92f,0x10);
        *0x20218 = iVar10;
    }
    else if (uVar6 < 6) {
        *0x20240 = fcn.00019400(0x3da,0x10);
        if (*0x20240 == 0) {
            return 0x8000000000000009;
        }
        *0x20218 = fcn.00019400(0x92f,0x10);
        if (*0x20218 == 0) {
            return 0x8000000000000009;
        }
        *0x20230 = fcn.00019400(0x88,0x10);
        if (*0x20230 == 0) {
            return 0x8000000000000009;
        }
        iVar10 = fcn.00019400(0x1f,0x10);
        *0x20248 = iVar10;
    }
    else {
        if (uVar6 < 9) {
            *0x20248 = fcn.00019400(0x1f,0x10);
            if (*0x20248 == 0) {
                return 0x8000000000000009;
            }
            *0x20240 = fcn.00019400(0x3da,0x10);
            if (*0x20240 == 0) {
                return 0x8000000000000009;
            }
            iVar10 = fcn.00019400(0x92f,0x10);
            *0x20218 = iVar10;
        }
        else {
            if (uVar6 < 0xc) {
                *0x20230 = fcn.00019400(0x88,0x10);
                if (*0x20230 == 0) {
                    return 0x8000000000000009;
                }
                *0x20248 = fcn.00019400(0x1f,0x10);
                if (*0x20248 == 0) {
                    return 0x8000000000000009;
                }
                *0x20218 = fcn.00019400(0x92f,0x10);
                if (*0x20218 == 0) {
                    return 0x8000000000000009;
                }
                *0x20240 = fcn.00019400(0x3da,0x10);
                if (*0x20240 == 0) {
                    return 0x8000000000000009;
                }
                goto code_r0x000109b3;
            }
            *0x20218 = fcn.00019400(0x92f,0x10);
            if (*0x20218 == 0) {
                return 0x8000000000000009;
            }
            *0x20240 = fcn.00019400(0x3da,0x10);
            if (*0x20240 == 0) {
                return 0x8000000000000009;
            }
            iVar10 = fcn.00019400(0x1f,0x10);
            *0x20248 = iVar10;
        }
        if (iVar10 == 0) {
            return 0x8000000000000009;
        }
        iVar10 = fcn.00019400(0x88,0x10);
        *0x20230 = iVar10;
    }
    if (iVar10 == 0) {
        return 0x8000000000000009;
    }
code_r0x000109b3:
    iVar10 = *0x20240;
    *(*0x20240 + 0x6a) = iVar11;
    *(iVar10 + 0x62) = iVar8;
    *(iVar10 + 0x12) = iVar7;
    iVar7 = fcn.00019400(0x2e,0x10);
    *(*0x20240 + 0x3a2) = iVar7;
    if (iVar7 != 0) {
        iVar7 = fcn.00019400(0x31,0x10);
        *(*0x20240 + 0x3aa) = iVar7;
        if (iVar7 != 0) {
            iVar7 = fcn.00019400(400,0x10);
            *(*0x20240 + 8) = iVar7;
            if (iVar7 != 0) {
                *0x20348 = iVar7;
                *(*0x20218 + 0x717) = uVar2;
                iVar11 = fcn.00019400(uVar2 << 3,0x10);
                *(*0x20240 + 0x4a) = iVar11;
                iVar7 = *0x20218;
                if (iVar11 != 0) {
                    *(*0x20218 + 0x718) = cVar3;
                    *(iVar7 + 0x719) = cVar4;
                    *(iVar7 + 0x716) = uVar12;
                    iVar7 = fcn.00019400(uVar9,0x10);
                    *(*0x20240 + 0x42) = iVar7;
                    if (iVar7 != 0) {
                        *0x20260 = fcn.00019400(0x100,0x10);
                        return ~-(*0x20260 != 0) & 0x8000000000000009;
                    }
                }
            }
        }
    }
    return 0x8000000000000009;
}


/* fcn.00010adc @ 0x10adc */

void fcn.00010adc(void)

{
    char cVar1;
    uchar uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    ushort uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    uint16_t uVar11;
    uint8_t *puVar12;
    
    cVar1 = fcn.0001cd9c(0x1e9d0,6);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x40000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,10);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x8000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0xb);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x10000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x46);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x200000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x47);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x400000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x48);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x800000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,1);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 1;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,2);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 2;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,3);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 4;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,4);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 8;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0xe);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x10;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0xf);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x20;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x10);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x40;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x11);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x80;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x15);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x100;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x17);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x200;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x1a);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x400;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x1d);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x800;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x1f);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x1000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x20);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x2000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x21);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x4000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x22);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x8000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x23);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x10000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x2c);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x20000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x2d);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x40000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x36);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x100000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x38);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x200000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x3c);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x400000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x3d);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x800000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x3e);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x1000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x3f);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x2000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x40);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x4000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x41);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x8000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x42);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x10000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x43);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x20000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x44);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x40000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x45);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x6c9) = *(*0x20218 + 0x6c9) | 0x80000000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x4b);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x921) = *(*0x20218 + 0x921) | 1;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x6d);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x921) = *(*0x20218 + 0x921) | 0x20;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x67);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x921) = *(*0x20218 + 0x921) | 2;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x68);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x921) = *(*0x20218 + 0x921) | 8;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x70);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x921) = *(*0x20218 + 0x921) | 0x40;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x25);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x711) = *(*0x20218 + 0x711) | 1;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x26);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x711) = *(*0x20218 + 0x711) | 2;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x27);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x711) = *(*0x20218 + 0x711) | 4;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x28);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x711) = *(*0x20218 + 0x711) | 8;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,0x29);
    if (cVar1 != '\0') {
        *(*0x20218 + 0x711) = *(*0x20218 + 0x711) | 0x10;
    }
    uVar2 = fcn.0001cd70(0x1e9d0,0xd);
    *(*0x20218 + 0x6cd) = uVar2;
    uVar2 = fcn.0001cd70(0x1e9d0,0x14);
    *(*0x20218 + 0x6c7) = uVar2;
    uVar2 = fcn.0001cd70(0x1e9d0,0x16);
    *(*0x20218 + 0x6ce) = uVar2;
    uVar2 = fcn.0001cd70(0x1e9d0,0x18);
    *(*0x20218 + 0x6cf) = uVar2;
    uVar2 = fcn.0001cd70(0x1e9d0,0x2b);
    *(*0x20218 + 0x715) = uVar2;
    uVar2 = fcn.0001cd70(0x1e9d0,0x37);
    *(*0x20218 + 0x71a) = uVar2;
    iVar6 = fcn.0001ccf8();
    uVar5 = (**(iVar6 + 0x10))(0x1e9d0,0x3b);
    *(*0x20218 + 0x725) = uVar5;
    iVar6 = fcn.0001ccf8();
    uVar5 = (**(iVar6 + 0x10))(0x1e9d0,0x3a);
    puVar8 = *0x20218;
    *(*0x20218 + 0x723) = uVar5;
    *(puVar8 + 0x92d) = 0x1800;
    iVar6 = fcn.0001ccf8();
    uVar7 = (**(iVar6 + 0x20))(0x1e9d0,0x19);
    *(*0x20218 + 0x1b4) = uVar7;
    iVar6 = fcn.0001ccf8();
    uVar7 = (**(iVar6 + 0x20))(0x1e9d0,0x39);
    *(*0x20218 + 0x71b) = uVar7;
    iVar6 = fcn.0001ccf8();
    uVar7 = (**(iVar6 + 0x20))(0x1e9d0,0x69);
    *(*0x20218 + 0x925) = uVar7;
    cVar1 = fcn.0001cd9c(0x1e9d0,5);
    if (cVar1 == '\0') {
        cVar1 = fcn.0001cd9c(0x1e9d0,9);
        if (cVar1 != '\0') {
            **0x20218 = **0x20218 | 0x20000;
        }
    }
    else {
        **0x20218 = **0x20218 | 0x1000;
    }
    cVar1 = fcn.0001cd9c(0x1e9d0,7);
    if (cVar1 != '\0') {
        **0x20218 = **0x20218 | 0x2000;
        cVar1 = fcn.0001cd9c(0x1e9d0,8);
        puVar8 = *0x20218;
        if (cVar1 != '\0') {
            **0x20218 = **0x20218 | 0x4000;
            goto code_r0x0001127f;
        }
    }
    puVar8 = *0x20218;
code_r0x0001127f:
    if (*(puVar8 + 0x6c7) == '\0') {
        uVar3 = fcn.0001cd70(0x1e9d0,0x13);
        uVar4 = fcn.0001cd70(0x1e9d0,0x12);
        uVar11 = (uVar4 + uVar3 * 0x10) * 4;
    }
    else {
        uVar3 = fcn.0001cd70(0x1e9d0,0x13);
        uVar4 = fcn.0001cd70(0x1e9d0,0x12);
        uVar11 = (uVar4 + uVar3 * 8) * 2;
    }
    *(*0x20218 + 0x66e) = *(*0x20218 + 0x66e) | uVar11;
    iVar6 = fcn.0001ccf8();
    puVar9 = (**(iVar6 + 0x28))(0x1e9d0,0x1b);
    iVar6 = 0;
    fcn.000102e0(0x20350,0xf,0);
    uVar3 = *puVar9;
    if (3 < uVar3) {
        uVar3 = 3;
    }
    if (((uVar3 != 0) && (iVar6 = uVar3 * 5, iVar6 != 0)) && (puVar9 + 1 != 0x20350)) {
        section..text(0x20350,puVar9 + 1,iVar6);
    }
    iVar10 = fcn.0001ccf8();
    puVar9 = (**(iVar10 + 0x28))(0x1e9d0,0x1c);
    fcn.000102e0(*0x20218 + 0x1b6,0xc,CONCAT71(iVar6 >> 8,0xff));
    uVar3 = *puVar9;
    if (3 < uVar3) {
        uVar3 = 3;
    }
    if (uVar3 != 0) {
        if ((uVar3 != 0) && (*0x20218 + 0x1b6 != puVar9 + 1)) {
            section..text(*0x20218 + 0x1b6,puVar9 + 1,uVar3 << 2);
        }
    }
    iVar6 = fcn.0001ccf8();
    puVar9 = (**(iVar6 + 0x28))(0x1e9d0,0x1e);
    fcn.000102e0(*(*0x20240 + 0x3a2) + 0x1c,0x12,0);
    uVar3 = *puVar9;
    if (3 < uVar3) {
        uVar3 = 3;
    }
    if (uVar3 != 0) {
        puVar12 = *(*0x20240 + 0x3a2) + 0x1c;
        if ((uVar3 * 6 != 0) && (puVar12 != puVar9 + 1)) {
            section..text(puVar12,puVar9 + 1,uVar3 * 6);
        }
    }
    iVar6 = fcn.0001ccf8();
    puVar9 = (**(iVar6 + 0x28))(0x1e9d0,0x24);
    fcn.000102e0(*0x20218 + 0x1b9,0x2d,0);
    uVar3 = *puVar9;
    if (5 < uVar3) {
        uVar3 = 5;
    }
    if (uVar3 != 0) {
        if ((uVar3 * 9 != 0) && (*0x20218 + 0x1b9 != puVar9 + 1)) {
            section..text(*0x20218 + 0x1b9,puVar9 + 1,uVar3 * 9);
        }
    }
    return;
}


/* fcn.0001df84 @ 0x1df84 */

void fcn.0001df84(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000030;
    
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    if (in_stack_00000030 != 0) {
        (**(*0x202a8 + 0x148))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x0001dfd6. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x202a8 + 0x148))(arg2 + 0x28,0x1e9f0,arg2,0);
    return;
}


/* fcn.0001df1c @ 0x1df1c */

void fcn.0001df1c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t aiStackX_10 [2];
    ulong ***pppuStackX_20;
    ulong ***in_stack_00000028;
    
    aiStackX_10[0] = arg2;
    pppuStackX_20 = arg3;
    (**(*0x202a8 + 0x50))(0x200,8,noname_2,0,aiStackX_10);
    pppuStackX_20 = &pppuStackX_20;
    if (in_stack_00000028 != NULL) {
        pppuStackX_20 = in_stack_00000028;
    }
    (**(*0x202a8 + 0xa8))(arg1,aiStackX_10[0]);
    return;
}


/* fcn.0001dfe0 @ 0x1dfe0 */

ulong fcn.0001dfe0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    
    if (*(*0x202a0 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        iVar2 = 0x1df80;
        if (arg2 != 0) {
            iVar2 = arg2;
        }
        uVar1 = (**(*0x202a8 + 0x170))(0x200,arg1,iVar2,arg3,0x1e860,arg4);
    }
    return uVar1;
}


/* fcn.0001e1f4 @ 0x1e1f4 */

ulong fcn.0001e1f4(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    char *pcVar3;
    uchar uStackX_8;
    char cStackX_9;
    char cStackX_a;
    char *pcStackX_10;
    ulong uStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    
    uStackX_18 = 0;
    var_28h = 0;
    pcVar3 = arg1;
    while( true ) {
        if ((*pcVar3 == '\x7f') && (pcVar3[1] == -1)) {
            return 0;
        }
        if ((*pcVar3 == '\x01') && (pcVar3[1] == '\x01')) break;
        pcVar3 = pcVar3 + *(pcVar3 + 2);
    }
    pcStackX_10 = pcVar3;
    pcVar1 = fcn.0001dcf4(arg1);
    if (pcVar1 != NULL) {
        pcVar3 = pcVar3 + pcVar1 + (*(pcVar3 + 2) - arg1);
        *pcVar3 = '\x7f';
        pcVar3[1] = -1;
        pcVar3[2] = '\x04';
        pcVar3[3] = '\0';
        pcStackX_10 = pcVar1;
        iVar2 = (**(*0x202a8 + 0xb8))(0x1e930,&pcStackX_10,&uStackX_18);
        (**(*0x202a8 + 0x48))(pcVar1);
        if ((((-1 < iVar2) && (iVar2 = (**(*0x202a8 + 0x98))(uStackX_18,0x1e930,&var_28h), -1 < iVar2)) &&
            (iVar2 = (**(var_28h + 0x30))(var_28h,0,9,3,&uStackX_8), -1 < iVar2)) &&
           ((cStackX_a == '\x06' && (cStackX_9 == '\x04')))) {
            return 1;
        }
    }
    return 0;
}


/* fcn.000138e4 @ 0x138e4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000138e4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_00000014;
    char *pcVar4;
    char *pcVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    ulong uStackX_10;
    ulong uStackX_18;
    int64_t iStackX_20;
    uint32_t var_3ah;
    int64_t var_40h_2;
    int64_t var_48h;
    ulong uStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uint32_t var_30h;
    uint32_t var_bp_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    uStack_68 = 0;
    uStackX_18 = 0;
    cVar1 = *arg3;
    pcVar4 = arg3;
    pcVar5 = NULL;
    while ((cVar1 != '\x7f' || (pcVar4[1] != -1))) {
        pcVar4 = pcVar4 + *(pcVar4 + 2);
        cVar1 = *pcVar4;
        if ((cVar1 == '\x01') && (pcVar4[1] == '\x01')) {
            pcVar5 = pcVar4;
        }
    }
    if ((pcVar5 != NULL) && (iVar2 = fcn.0001dcf4(arg3), iVar2 != 0)) {
        pcVar4 = pcVar5 + (iVar2 - arg3);
        pcVar4[0] = '\x7f';
        pcVar4[1] = -1;
        pcVar4[2] = '\x04';
        pcVar4[3] = '\0';
        iStackX_20 = iVar2;
        iVar3 = (**(*0x202a8 + 0xb8))(0x1e920,&iStackX_20,&uStack_68);
        (**(*0x202a8 + 0x48))(iVar2);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar2 = fcn.0001dcf4(arg3);
        if (iVar2 != 0) {
            uVar7 = pcVar5[4];
            pcVar5 = pcVar5 + (iVar2 - arg3);
code_r0x00013b11:
            uVar7 = uVar7 + 1;
            if (7 < uVar7) {
                (**(*0x202a8 + 0x48))(iVar2);
                return 0;
            }
            pcVar5[4] = uVar7;
            uVar6 = 0;
            do {
                iStackX_20 = iVar2;
                iVar3 = (**(*0x202a8 + 0xb8))(0x1e930,&iStackX_20,&uStackX_18);
                if (-1 < iVar3) {
                    iVar3 = (**(*0x202a8 + 0x118))(uStackX_18,0x1e930,&iStack_60,*(arg1 + 0x28),uStackX_18,1);
                    if ((iVar3 < 0) ||
                       (iVar3 = (**(iStack_60 + 0x70))(iStack_60,&var_38h,&var_40h,&uStack_58,&uStack_50),
                       iVar3 < 0)) goto code_r0x00013b11;
                    if ((uStack_58 == pcVar5[5]) && (uStack_50 == pcVar5[4])) {
                        iVar3 = (**(iStack_60 + 0x30))(iStack_60,0,9,3,&uStackX_10);
                        if ((((-1 < iVar3) && (uStackX_10._2_1_ == '\f')) && (uStackX_10._1_1_ == '\x03')) &&
                           ((uStackX_10 == ' ' &&
                            (iVar3 = (**(*0x202a8 + 0x118))
                                               (uStackX_18,0x1e850,&var_30h,*(arg1 + 0x28),uStackX_18,1),
                            iVar3 < 0)))) {
                            (**(*0x202a8 + 0x108))(uStackX_18,0,0,0);
                        }
                        goto code_r0x00013b11;
                    }
                }
                iVar3 = (**(*0x202a8 + 0x108))(uStack_68,0,pcVar5,0);
                if ((iVar3 < 0) || (uVar6 = uVar6 + 1, 1 < uVar6)) goto code_r0x00013b11;
            } while( true );
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.0001e308 @ 0x1e308 */

ulong fcn.0001e308(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t auStackX_10 [2];
    uint64_t uStackX_20;
    
    iVar1 = (**(arg2 + 0x78))(arg2,4,0,&uStackX_20);
    if ((-1 < iVar1) && (iVar1 = (**(arg2 + 0x30))(arg2,2,8,1,auStackX_10), -1 < iVar1)) {
        auStackX_10[0] = auStackX_10[0] >> 8;
        if (auStackX_10[0] != 0xc0330) {
            uStackX_20 = uStackX_20 & 0xffffffffffff7fff;
        }
        iVar1 = (**(arg2 + 0x78))(arg2,2,uStackX_20 & 0x8700);
        if (-1 < iVar1) {
            *arg1 = *arg3;
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00012c44 @ 0x12c44 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

char * fcn.00012c44(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    int64_t iVar3;
    int64_t *piVar4;
    char *arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    int64_t var_fh;
    int64_t var_17h;
    uint8_t auStackX_18 [8];
    char acStackX_20 [8];
    uint32_t var_77h;
    int64_t var_7fh;
    int64_t iStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint16_t auStack_70 [4];
    int64_t iStack_68;
    ulong uStack_60;
    uchar auStack_58 [7];
    int64_t var_49h;
    int64_t var_41h;
    uint32_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    uVar6 = 0;
    iStack_a0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    iVar3 = (**(*0x202a8 + 0x118))(arg1,0x1e930,&iStack_a8,0,0,1);
    if (iVar3 < 0) {
        return NULL;
    }
    iVar3 = (**(iStack_a8 + 0x70))(iStack_a8,&iStack_68,&iStack_80,&iStack_78,auStack_70);
    if (iVar3 < 0) {
        return NULL;
    }
    iVar3 = (**(iStack_a8 + 0x30))(iStack_a8,0,9,1,auStackX_18);
    if (iVar3 < 0) {
        return NULL;
    }
    iVar3 = (**(iStack_a8 + 0x30))(iStack_a8,0,0x3c,1,acStackX_20);
    if (iVar3 < 0) {
        return NULL;
    }
    if (auStackX_18[0] == 0x30) {
        if (*0x20240 == 0) {
            return NULL;
        }
        if (*(*0x20240 + 0x3c2) == 0) {
            return NULL;
        }
        if ((*(*0x20218 + 0x6c9) & 8) == 0) {
            return NULL;
        }
        uVar9 = *(*0x20240 + 0x3ca);
        if (uVar9 != 0) {
            piVar4 = *(*0x20240 + 0x3c2) + uVar9 * 8;
            do {
                if ((*piVar4 == arg1) && (piVar4[0x41] == 0)) {
                    return NULL;
                }
                uVar6 = uVar6 + 1;
                piVar4 = piVar4 + 0x43;
            } while (uVar6 < uVar9);
        }
    }
    uVar6 = 0;
    iVar3 = *0x20240;
    if (*(*0x20240 + 0x10) != '\0') {
        do {
            iVar5 = *(*0x20348 + uVar6 * 8);
            if (((iVar5 != 0) && ((*(iVar5 + 0x58) & 4) == 0)) &&
               (cVar2 = fcn.00012bcc(*(iVar5 + 0x70),arg2), iVar3 = *0x20240, cVar2 != '\0')) break;
            uVar7 = uVar6 + 1;
            uVar6 = uVar7;
        } while (uVar7 < *(iVar3 + 0x10));
    }
    if (uVar6 == *(iVar3 + 0x10)) {
        uVar7 = *(iVar3 + 0x10) + 1;
        uVar6 = 0;
        *(iVar3 + 0x10) = uVar7;
        if (uVar7 != 0) {
            do {
                if (*(*0x20348 + uVar6 * 8) == 0) break;
                uVar8 = uVar6 + 1;
                uVar6 = uVar8;
            } while (uVar8 < uVar7);
        }
        if (uVar6 == uVar7) {
            return NULL;
        }
        arg1_00 = fcn.00019400(0xd8,0x10);
        if (arg1_00 == NULL) {
            return NULL;
        }
    }
    else {
        arg1_00 = *(*0x20348 + uVar6 * 8);
    }
    *(*0x20348 + uVar6 * 8) = arg1_00;
    *(arg1_00 + 0x58) = *(arg1_00 + 0x58) | 4;
    iVar3 = *0x20208;
    *arg1_00 = uVar6 + '\x01';
    *(arg1_00 + 0x2a) = iStack_80 << 8 | iStack_78 << 3 | auStack_70[0];
    arg1_00[1] = auStackX_18[0] + 0x10;
    if (iVar3 != 0) {
        *(arg1_00 + 0x30) = *(iVar3 + iStack_68 * 8);
    }
    *(arg1_00 + 0x68) = arg1;
    arg1_00[0x38] = acStackX_20[0];
    *(arg1_00 + 0x70) = arg2;
    *(arg1_00 + 0x80) = iStack_a8;
    iVar3 = (**(iStack_a8 + 0x30))(iStack_a8,1,0,1,arg1_00 + 0x88);
    if (iVar3 < 0) {
        return NULL;
    }
    iVar3 = (**(iStack_a8 + 0x30))(iStack_a8,1,2,1,arg1_00 + 0x8a);
    if (iVar3 < 0) {
        return NULL;
    }
    iVar5 = (**(iStack_a8 + 0x80))(iStack_a8,0,&var_41h + 1,&iStack_a0);
    iVar3 = *0x202a8;
    if (-1 < iVar5) {
        *(arg1_00 + 0x20) = *(iStack_a0 + 0x26);
        (**(iVar3 + 0x48))(iStack_a0);
    }
    uVar6 = 0;
    do {
        iVar3 = uVar6 * 5;
        if ((*(iVar3 + 0x20350) == 0) && (*(iVar3 + 0x20352) == 0)) break;
        if ((*(iVar3 + 0x20350) == *(arg1_00 + 0x88)) && (*(iVar3 + 0x20352) == *(arg1_00 + 0x8a))) {
            *(arg1_00 + 0x58) = *(arg1_00 + 0x58) | 1 << (*(iVar3 + 0x20354) & 0x3f);
        }
        uVar7 = uVar6 + 1;
        uVar6 = uVar7;
    } while (uVar7 < 3);
    iVar5 = (auStackX_18[0] >> 4) * 0x20;
    iVar3 = (**(iVar5 + 0x1fa40))(arg1,arg1_00);
    if (iVar3 < 0) {
code_r0x00012f8c:
        fcn.000102e0(arg1_00,0xd8,0);
    }
    else {
        uVar1 = *(iVar5 + 0x1fa38);
        if (uVar1 == 0) goto code_r0x000130cc;
        if (*(arg1_00 + 0x10) == 0) {
            iVar3 = fcn.00019500(iStack_a8,(uVar1 >> 0xc) + ((uVar1 & 0xfff) != 0),*(iVar5 + 0x1fa3a));
            *(arg1_00 + 0x10) = iVar3;
            if (iVar3 == 0) goto code_r0x00012f8c;
        }
        iVar3 = fcn.00019688(*(arg1_00 + 0x68),*(arg1_00 + 0x10),
                             (*(iVar5 + 0x1fa38) >> 0xc) + ((*(iVar5 + 0x1fa38) & 0xfff) != 0));
        if (-1 < iVar3) {
            if (*(iVar5 + 0x1fa38) != 0) {
                fcn.000102e0(*(arg1_00 + 0x10),*(iVar5 + 0x1fa38),0);
            }
            if (((**0x20218 & 0x1100000) == 0x1000000) && (*(arg1_00 + 0xb0) == 0)) {
                uStack_98 = *(iVar5 + 0x1fa38);
                iVar3 = (**(iStack_a8 + 0x48))(iStack_a8,2,*(arg1_00 + 0x10),&uStack_98,&uStack_60,auStack_58);
                if ((iVar3 < 0) || (uStack_98 != *(iVar5 + 0x1fa38))) {
                    *(arg1_00 + 0xa8) = *(arg1_00 + 0x10);
                    arg1_00[0xb0] = '\0';
                    arg1_00[0xb1] = '\0';
                    arg1_00[0xb2] = '\0';
                    arg1_00[0xb3] = '\0';
                    arg1_00[0xb4] = '\0';
                    arg1_00[0xb5] = '\0';
                    arg1_00[0xb6] = '\0';
                    arg1_00[0xb7] = '\0';
                }
                else {
                    *(arg1_00 + 0xa8) = uStack_60;
                    *(arg1_00 + 0xb0) = _auStack_58;
                }
            }
code_r0x000130cc:
            uVar6 = 0;
            if (*0x20368 != 0) {
                do {
                    iVar3 = *(*0x20370 + uVar6 * 8);
                    cVar2 = fcn.00012bcc(*(iVar3 + 8),*(arg1_00 + 0x70));
                    if (cVar2 != '\0') {
                        *(arg1_00 + 0x90) = *(iVar3 + 0x10);
                        if ((*(iVar3 + 0x18) & 1) != 0) {
                            *(arg1_00 + 0x58) = *(arg1_00 + 0x58) | 0x100;
                        }
                        break;
                    }
                    uVar7 = uVar6 + 1;
                    uVar6 = uVar7;
                } while (uVar7 < *0x20368);
            }
            if ((*(arg1_00 + 0x90) == 0) && (cVar2 = fcn.0001e1f4(arg2), cVar2 != '\0')) {
                *(arg1_00 + 0x58) = *(arg1_00 + 0x58) | 0x10;
            }
            if ((*(*0x20218 + 0x6c9) & 0x4000) != 0) {
                *(arg1_00 + 0x58) = *(arg1_00 + 0x58) | 0x80;
            }
            if ((**0x20218 & 0x1100000) == 0x1000000) {
                *NULL = *(*0x20218 + 0x5ae) * 0x1000 + 0x10400;
                iVar3 = (**(iStack_a8 + 0x48))(iStack_a8,2,*(*0x20240 + 0x12),&var_49h + 1,&uStack_90,&uStack_88);
                if (iVar3 < 0) {
                    *(arg1_00 + 200) = *(*0x20240 + 0x12);
                    arg1_00[0xd0] = '\0';
                    arg1_00[0xd1] = '\0';
                    arg1_00[0xd2] = '\0';
                    arg1_00[0xd3] = '\0';
                    arg1_00[0xd4] = '\0';
                    arg1_00[0xd5] = '\0';
                    arg1_00[0xd6] = '\0';
                    arg1_00[0xd7] = '\0';
                }
                else {
                    *(arg1_00 + 200) = uStack_90;
                    *(arg1_00 + 0xd0) = uStack_88;
                }
            }
            *(*0x20240 + 0x11) = *(*0x20240 + 0x11) + '\x01';
            return arg1_00;
        }
    }
    return NULL;
}


/* fcn.0001ce20 @ 0x1ce20 */

ulong fcn.0001ce20(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = 9;
    uVar1 = fcn.0001cdf4(arg2,9);
    if (uVar2 < uVar1) {
        uVar1 = uVar2;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + uVar1 + 1) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x0001ce86;
    }
    if (arg2 < arg1 + 0xf) {
        return 0x800000000000000f;
    }
code_r0x0001ce86:
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


/* fcn.00013b6c @ 0x13b6c */

void fcn.00013b6c(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg1;
    auStackX_8[0] = 1;
    if (*(*0x20218 + 0x6cf) != '\0') {
        if (*0x20258 == NULL) {
            iVar1 = (**(*0x202a8 + 0x140))(0x1e990,0,0x20258);
            if (iVar1 < 0) {
                return;
            }
            if (*0x20258 == NULL) {
                return;
            }
        }
        (***0x20258)(*0x20258,auStackX_10,auStackX_8,0,0);
    }
    return;
}


/* fcn.00013be0 @ 0x13be0 */

void fcn.00013be0(ulong param_1)

{
    ulong uVar1;
    ulong uVar2;
    
    uVar1 = *0x20248;
    if (*(*0x20230 + 0x78) == 0) {
        fcn.00013b6c(CONCAT71(param_1 >> 8,*(*0x20218 + 0x71a)));
    }
    else {
        uVar2 = (**(*0x202a8 + 0x18))(0x10);
        (**(*0x20230 + 0x78))(uVar1);
        (**(*0x202a8 + 0x20))(uVar2);
    }
    return;
}


/* fcn.00015b58 @ 0x15b58 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00015b58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puVar2;
    int16_t iVar3;
    ulong uStackX_8;
    int64_t iStackX_10;
    uint32_t var_30h;
    int64_t var_38h;
    ulong *apuStack_38 [2];
    int64_t var_10h;
    
    uStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x202a8 + 0x40))(4,0x108,apuStack_38);
    if (-1 < iVar1) {
        apuStack_38[0][0x1c] = arg4;
        apuStack_38[0][0x1d] = arg3;
        puVar2 = apuStack_38[0] + 0x1e;
        *puVar2 = puVar2;
        apuStack_38[0][0x1f] = puVar2;
        apuStack_38[0][0x20] = 0;
        *apuStack_38[0] = 0x14484;
        apuStack_38[0][1] = 0x144bc;
        apuStack_38[0][2] = 0x144c8;
        apuStack_38[0][3] = 0x144d4;
        apuStack_38[0][4] = 0x14540;
        apuStack_38[0][5] = 0x145cc;
        apuStack_38[0][6] = 0x14644;
        apuStack_38[0][7] = 0x13b5c;
        apuStack_38[0][8] = 0x13b5c;
        apuStack_38[0][9] = 0x146b0;
        apuStack_38[0][10] = 0x146d0;
        apuStack_38[0][0xb] = 0x1479c;
        apuStack_38[0][0xc] = 0x147e0;
        if ((*(arg4 + 1) - 0x10U & 0xef) == 0) {
            *(apuStack_38[0] + 0xd) = 1;
            *(apuStack_38[0] + 0x6a) = 1;
        }
        else if (*(arg4 + 1) == '0') {
            *(apuStack_38[0] + 0xd) = 2;
            *(apuStack_38[0] + 0x6a) = 0;
        }
        else if (*(arg4 + 1) == '@') {
            *(apuStack_38[0] + 0xd) = 3;
            *(apuStack_38[0] + 0x6a) = 0;
            iVar3 = *(*(arg4 + 0x60) + 0x1a) << 2;
            while( true ) {
                iVar1 = (**(arg3 + 0x10))(arg3,2,0,iVar3,1,&uStackX_8);
                if (iVar1 < 0) break;
                if ((uStackX_8 == '\x02') && (uStackX_8._3_1_ == '\x03')) {
                    *(apuStack_38[0] + 0x6a) = uStackX_8._2_1_;
                    break;
                }
                if (uStackX_8._1_1_ == 0) break;
                iVar3 = iVar3 + uStackX_8._1_1_ * 4;
            }
        }
        apuStack_38[0][0xe] = 0x14824;
        apuStack_38[0][0xf] = 0x1488c;
        apuStack_38[0][0x10] = fcn.000148d0;
        apuStack_38[0][0x11] = 0x14908;
        apuStack_38[0][0x12] = fcn.0001587c;
        apuStack_38[0][0x13] = fcn.00014b58;
        apuStack_38[0][0x14] = fcn.00014df4;
        apuStack_38[0][0x15] = fcn.000151b0;
        apuStack_38[0][0x16] = 0x15468;
        apuStack_38[0][0x17] = 0x15680;
        apuStack_38[0][0x18] = 0x15af8;
        apuStack_38[0][0x19] = 0x15b04;
        apuStack_38[0][0x1a] = 0x15b10;
        *(apuStack_38[0] + 0x1b) = *(apuStack_38[0] + 0xd);
        *(apuStack_38[0] + 0xda) = *(apuStack_38[0] + 0x6a);
        (**(*0x202a8 + 0x80))(&iStackX_10,0x1e850,0,apuStack_38[0]);
        (**(*0x202a8 + 0x80))(&iStackX_10,str.Rt_,0,apuStack_38[0] + 0xe);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001e0ac @ 0x1e0ac */

ulong fcn.0001e0ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x202d0 != NULL) {
code_r0x0001e11c:
            uVar2 = (***0x202d0)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,0x1ea30,0);
            return uVar2;
        }
        if ((*0x202a8 != 0) && (*(*0x202a8 + 0x140) != NULL)) {
            iVar1 = (**(*0x202a8 + 0x140))(0x1e830,0,0x202d0);
            if (iVar1 < 0) {
                *0x202d0 = NULL;
            }
            if (*0x202d0 != NULL) goto code_r0x0001e11c;
        }
    }
    return 0x8000000000000003;
}


/* fcn.000189d4 @ 0x189d4 */

void fcn.000189d4(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t *arg1_00;
    uint32_t *puVar7;
    int64_t iVar8;
    
    puVar7 = *(*0x20218 + 0x716) * 0x1c0 + *(*0x20240 + 0x42);
    if (arg1 != 0) {
        (**(*0x202a8 + 0x58))(arg1,0,80000);
    }
    uVar3 = (**(*0x202a8 + 0x18))(0x1f);
    cVar2 = *0x2028c;
    *0x2028c = 1;
    (**(*0x202a8 + 0x20))(uVar3);
    if (cVar2 == '\0') {
        arg1_00 = *(*0x20240 + 0x42) + 0x1c0;
        if (arg1_00 != puVar7) {
            iVar8 = *(*0x20240 + 0x42) + 0x1cb;
            do {
                if (*(iVar8 + 0x1ad) == 0) {
                    uVar1 = *arg1_00;
                    if ((uVar1 >> 0xb & 1) == 0) {
                        if (((uVar1 & 0x100) == 0) &&
                           ((((uVar1 & 3) == 1 && ((uVar1 & 0x40) != 0)) || ((uVar1 & 0x43) == 3)))) {
                            iVar6 = *0x20338;
                            iVar4 = fcn.000161f0(*0x20338,0x16360,iVar8);
                            if (iVar4 != 0) {
                                fcn.000162f8(iVar6,arg1_00);
                                *arg1_00 = *arg1_00 | 0x100;
                            }
                        }
                    }
                    else {
                        iVar6 = *0x20338;
                        iVar4 = fcn.000161f0(*0x20338,0x16360,iVar8);
                        if (iVar4 != 0) {
                            fcn.000162f8(iVar6,arg1_00);
                            *arg1_00 = *arg1_00 & 0xfffff7ff | 0x100;
                        }
                    }
                }
                arg1_00 = arg1_00 + 0x70;
                iVar8 = iVar8 + 0x1c0;
            } while (arg1_00 != puVar7);
        }
        do {
            do {
                while( true ) {
                    uVar3 = (**(*0x202a8 + 0x18))(0x1f);
                    if (*0x203b8 == *0x203b0) {
                        puVar7 = NULL;
                    }
                    else {
                        puVar7 = *(*0x203a0 + *0x203b8 * 8);
                        *0x203b8 = *0x203b8 + 1;
                        if (*0x203b8 == *0x203a8) {
                            *0x203b8 = *0x203b8 - *0x203a8;
                        }
                    }
                    (**(*0x202a8 + 0x20))(uVar3);
                    if (puVar7 == NULL) goto code_r0x00018c34;
                    *puVar7 = *puVar7 & 0xfffffeff;
                    if ((*puVar7 & 0x23) != 3) break;
                    *0x20280 = *0x20280 + 1;
                    iVar8 = fcn.000161f0(*0x20338,0x16360,puVar7 + 0xb);
                    if (iVar8 != 0) {
                        if (-1 < puVar7[3]) {
                            iVar8 = fcn.00016248(*(iVar8 + 0x18),0x163a4,puVar7 + 3);
                            if (iVar8 == 0) goto code_r0x00018c06;
                            iVar8 = *(iVar8 + 0x18);
                        }
                        piVar5 = fcn.000161f0(*(iVar8 + 0x18),0x163c8,puVar7);
                        if ((piVar5 != NULL) && (*piVar5 != 0)) {
                            fcn.0001896c(*(*piVar5 + 0x20));
                        }
                    }
code_r0x00018c06:
                    fcn.00017e6c(puVar7);
                }
            } while ((*puVar7 & 0x23) != 1);
            *0x20280 = *0x20280 + 1;
            iVar8 = fcn.0001896c(puVar7);
        } while (-1 < iVar8);
code_r0x00018c34:
        *0x2028c = 0;
        if (arg1 != 0) {
            (**(*0x202a8 + 0x58))(arg1,1,80000);
        }
    }
    return;
}


/* fcn.000136a0 @ 0x136a0 */

void fcn.000136a0(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    char cVar3;
    int64_t *piVar4;
    char cVar5;
    char cVar6;
    char cVar7;
    char cVar8;
    char cVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char cVar12;
    char cVar13;
    char cVar14;
    char cVar15;
    uint8_t *puVar16;
    char cStackX_10;
    
    cVar5 = '\0';
    cVar14 = '\0';
    cStackX_10 = '\0';
    cVar7 = '\0';
    cVar13 = '\0';
    cVar15 = '\0';
    cVar12 = '\0';
    cVar6 = '\0';
    cVar9 = '\0';
    cVar8 = '\0';
    if (1 < *(*0x20218 + 0x716)) {
        iVar1 = *(*0x20240 + 0x42);
        cVar14 = '\0';
        iVar11 = 0x1c0;
        uVar10 = *(*0x20218 + 0x716) - 1;
        puVar16 = iVar1 + 0x2e8;
        cVar7 = '\0';
        cVar15 = '\0';
        do {
            if ((*(iVar11 + iVar1) & 3) == 3) {
                cVar2 = *(iVar11 + 4 + iVar1);
                if (cVar2 == '\x01') {
                    cVar2 = cVar7 + '\x01';
                    if ((*(iVar11 + 0x128 + iVar1) & 1) == 0) {
                        cVar2 = cVar7;
                    }
                    cVar3 = cVar15 + '\x01';
                    if ((*(iVar11 + 0x128 + iVar1) & 2) == 0) {
                        cVar3 = cVar15;
                    }
                    cVar5 = cStackX_10;
                    cVar7 = cVar2;
                    cVar15 = cVar3;
                    if ((*puVar16 & 4) != 0) {
                        cVar14 = cVar14 + '\x01';
                    }
                }
                else if (cVar2 == '\x03') {
                    cVar13 = cVar13 + '\x01';
                }
                else if (cVar2 == '\x04') {
                    cStackX_10 = cVar5 + '\x01';
                    cVar5 = cStackX_10;
                }
            }
            iVar11 = iVar11 + 0x1c0;
            puVar16 = puVar16 + 0x1c0;
            uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
    }
    if (*(*0x20240 + 0x10) != 0) {
        uVar10 = *(*0x20240 + 0x10);
        piVar4 = *0x20348;
        do {
            iVar1 = *piVar4;
            if ((iVar1 != 0) && ((*(iVar1 + 0x58) & 4) != 0)) {
                cVar5 = *(iVar1 + 1);
                if (cVar5 == '\x10') {
                    cVar12 = cVar12 + '\x01';
                }
                else if (cVar5 == ' ') {
                    cVar6 = cVar6 + '\x01';
                }
                else if (cVar5 == '0') {
                    cVar9 = cVar9 + '\x01';
                }
                else if (cVar5 == '@') {
                    cVar8 = cVar8 + '\x01';
                }
            }
            piVar4 = piVar4 + 1;
            uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
    }
    *(arg1 + 6) = cVar6;
    *(arg1 + 3) = cStackX_10;
    *arg1 = cVar7;
    *(arg1 + 1) = cVar15;
    *(arg1 + 2) = cVar14;
    *(arg1 + 4) = cVar13;
    *(arg1 + 5) = cVar12;
    *(arg1 + 7) = cVar9;
    *(arg1 + 8) = cVar8;
    *(arg1 + 9) = 0x1e;
    return;
}


/* fcn.0001383c @ 0x1383c */

void fcn.0001383c(void)

{
    if (*0x1ea74 != '\0') {
        *0x1ea74 = '\0';
        (**(*0x202a8 + 0x168))(*0x20248,0x1f);
        **0x20248 = 0x21;
        fcn.00013be0();
        if (*0x20278 != 0) {
            fcn.000189d4(*0x20278);
        }
    }
    return;
}


/* fcn.0001cd34 @ 0x1cd34 */

int64_t fcn.0001cd34(void)

{
    if (*0x202c0 == 0) {
        (**(*0x202a8 + 0x140))(0x1e8c0,0,0x202c0);
    }
    return *0x202c0;
}


/* fcn.0001dca4 @ 0x1dca4 */

char * fcn.0001dca4(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001dec0(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
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


/* fcn.00012bcc @ 0x12bcc */

bool fcn.00012bcc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        if (arg2 == 0) {
            return true;
        }
    }
    else if (arg2 != 0) {
        iVar1 = fcn.0001dca4(arg2);
        iVar2 = fcn.0001dca4(arg1);
        if (iVar2 == iVar1) {
            if ((iVar1 == 0) || (arg1 == arg2)) {
                iVar1 = 0;
            }
            else {
                iVar1 = fcn.000102c0(arg1,arg2,iVar1);
            }
            return iVar1 == 0;
        }
    }
    return false;
}


/* fcn.00019500 @ 0x19500 */

uint64_t fcn.00019500(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uStackX_10;
    
    if (arg2 != 0) {
        if (arg3 < 0x1001) {
            uStackX_10 = 0xffffffff;
            iVar1 = (**(arg1 + 0x58))(arg1,1,*0x1ea70,arg2,&uStackX_10,0);
            if ((-1 < iVar1) || (iVar1 = (**(arg1 + 0x58))(arg1,0,*0x1ea70,arg2,&uStackX_10,0), -1 < iVar1)) {
                return uStackX_10;
            }
        }
        else {
            iVar4 = (arg3 >> 0xc) + ((arg3 & 0xfffU) != 0) + arg2;
            uStackX_10 = 0xffffffff;
            iVar1 = (**(arg1 + 0x58))(arg1,1,*0x1ea70,iVar4,&uStackX_10,0);
            if ((-1 < iVar1) || (iVar1 = (**(arg1 + 0x58))(arg1,0,*0x1ea70,iVar4,&uStackX_10,0), -1 < iVar1)) {
                uVar3 = uStackX_10 + (arg3 - 1U) & ~(arg3 - 1U);
                iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
                if ((iVar1 == 0) || (iVar2 = (**(arg1 + 0x60))(arg1,iVar1), -1 < iVar2)) {
                    uStackX_10 = arg2 * 0x1000 + uVar3;
                    arg2 = (iVar4 - iVar1) - arg2;
                    if (arg2 == 0) {
                        return uVar3;
                    }
                    iVar1 = (**(arg1 + 0x60))(arg1,arg2);
                    if (-1 < iVar1) {
                        return uVar3;
                    }
                }
            }
        }
    }
    return 0;
}


/* fcn.00019688 @ 0x19688 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00019688(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t *piStackX_20;
    int64_t var_38h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    piStackX_20 = NULL;
    uStack_28 = 0x3279a703;
    uStack_24 = 0x4cbcba93;
    uStack_20 = 0x2a5c11ad;
    uStack_1c = 0x804ac982;
    iStackX_8 = arg1;
    iVar1 = (**(*0x202a8 + 0x98))(arg1,&uStack_28,&piStackX_20);
    if (iVar1 < 0) {
        iVar1 = (**(*0x202a8 + 0x40))(4,0x10);
        if (iVar1 < 0) {
            return iVar1;
        }
        fcn.000102e0(piStackX_20,0x10,0);
        *piStackX_20 = arg2;
        piStackX_20[1] = arg3;
        iVar1 = (**(*0x202a8 + 0x80))(&iStackX_8,&uStack_28,0,piStackX_20);
        if (iVar1 < 0) {
            (**(*0x202a8 + 0x48))(piStackX_20);
        }
    }
    return iVar1;
}


/* fcn.000132e4 @ 0x132e4 */

uchar * fcn.000132e4(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar *puVar4;
    uchar *puVar5;
    
    fcn.000102e0(*0x20218 + 0x5e6,0x80,0);
    iVar2 = *0x20240;
    iVar1 = *0x20218;
    iVar3 = *0x20218 + 0x5e6;
    *(*0x20240 + 0x22) = iVar3;
    *(iVar2 + 0x2a) = iVar3;
    fcn.000102e0(iVar1 + 0x5d6,0x10,0);
    iVar3 = *0x20218;
    *(*0x20240 + 0x32) = *0x20218 + 0x5d6;
    fcn.000102e0(iVar3 + 0x5c6,0x10,0);
    fcn.000102e0(*0x20218 + 0x5b6,0x10,0);
    puVar4 = *0x20218 + 0x674;
    puVar5 = puVar4;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
    }
    return puVar4;
}


/* fcn.0001e198 @ 0x1e198 */

ulong fcn.0001e198(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0001e150();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xc0 + *0x202d8), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.000162f8 @ 0x162f8 */

void fcn.000162f8(ulong noname_0,int64_t arg1)

{
    *(*0x203a0 + *0x203b0 * 8) = arg1;
    *0x203b0 = *0x203b0 + 1;
    if (*0x203b0 == *0x203a8) {
        *0x203b0 = *0x203b0 - *0x203a8;
    }
    if (*0x203b0 == *0x203b8) {
        *0x203b8 = *0x203b8 + 1;
        if (*0x203b8 == *0x203a8) {
            *0x203b8 = *0x203b8 - *0x203a8;
        }
    }
    return;
}


/* fcn.0001dcf4 @ 0x1dcf4 */

ulong fcn.0001dcf4(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t noname_0;
    
    noname_0 = arg1;
    arg1_00 = fcn.0001dca4(arg1);
    uVar1 = 0;
    if (arg1_00 != 0) {
        uVar1 = fcn.0001e7dc(noname_0,arg1_00,arg1);
    }
    return uVar1;
}


/* fcn.0001e7dc @ 0x1e7dc */

void fcn.0001e7dc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001e7ac();
    if (((iVar1 != 0) && (arg1 != 0)) && (iVar1 != arg2)) {
        section..text(iVar1,arg2,arg1);
    }
    return;
}


/* fcn.0001e7ac @ 0x1e7ac */

ulong fcn.0001e7ac(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x202a8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00013c7c @ 0x13c7c */

ulong fcn.00013c7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    uchar auStackX_8 [8];
    int64_t aiStackX_10 [3];
    
    iVar2 = *0x20260;
    aiStackX_10[0] = arg2;
    aiStackX_10[1] = arg3;
    aiStackX_10[2] = arg4;
    if (*0x20260 == 0) {
        uVar3 = 0xff;
    }
    else {
        uVar4 = 0;
        uVar5 = *((arg1 & 0xffU) * 4 + 0x1fab0) >> 3;
        if (uVar5 != 0) {
            puVar6 = auStackX_8;
            do {
                puVar6 = puVar6 + 1;
                *(iVar2 + uVar4 * 8) = *puVar6;
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
        }
        auStackX_8[0] = arg1;
        (**(*0x202a8 + 0x168))(*0x20248,0x1f);
        iVar2 = *0x20260;
        puVar1 = *0x20248;
        *(*0x20248 + 0xf) = 0;
        *(puVar1 + 3) = iVar2;
        *(puVar1 + 0xb) = *((arg1 & 0xffU) * 4 + 0x1fab0);
        *puVar1 = 0x2e;
        puVar1[1] = arg1;
        puVar1[2] = 0xff;
        fcn.00013be0();
        uVar3 = *(*0x20248 + 0xf);
    }
    return uVar3;
}


/* fcn.00013e70 @ 0x13e70 */

ulong fcn.00013e70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char32_t cVar1;
    uchar *puVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    iVar3 = *0x20260;
    aiStackX_18[0] = arg3;
    aiStackX_18[1] = arg4;
    if (*0x20260 == 0) {
        uVar4 = 0xff;
    }
    else {
        uVar5 = 0;
        cVar1 = L"\b\b\b\b\b\b\x18\x10\x108(00\x10\x10\x18\b\b \x10\x10\x18\b\x10Đ"[arg1 & 0xffU];
        if (cVar1 >> 3 != 0) {
            puVar6 = auStackX_10;
            do {
                puVar6 = puVar6 + 1;
                *(iVar3 + uVar5 * 8) = *puVar6;
                uVar5 = uVar5 + 1;
            } while (uVar5 < cVar1 >> 3);
        }
        auStackX_10[0] = arg2;
        (**(*0x202a8 + 0x168))(*0x20248,0x1f);
        iVar3 = *0x20260;
        puVar2 = *0x20248;
        *(*0x20248 + 0x10) = 0;
        *(puVar2 + 3) = iVar3;
        *(puVar2 + 0xc) = L"\b\b\b\b\b\b\x18\x10\x108(00\x10\x10\x18\b\b \x10\x10\x18\b\x10Đ"[arg1 & 0xffU];
        *puVar2 = 0x2d;
        puVar2[1] = arg1;
        puVar2[2] = 0xff;
        puVar2[0xb] = arg2;
        fcn.00013be0();
        uVar4 = *(*0x20248 + 0x10);
    }
    return uVar4;
}


/* fcn.0001587c @ 0x1587c */

uint64_t fcn.0001587c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t *arg2_00;
    uint64_t uVar5;
    ulong uVar6;
    uint8_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint8_t *in_stack_00000028;
    uint32_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint64_t *in_stack_00000040;
    ushort in_stack_00000048;
    uint32_t *in_stack_00000058;
    
    iVar8 = *(arg1 + 0x70);
    iVar9 = arg4;
    iVar4 = fcn.00014414(0,arg2,iVar8);
    uVar7 = arg3;
    if (((uVar7 < 4) && (iVar4 != 0)) && (in_stack_00000030 < 3)) {
        if (in_stack_00000030 == 2) {
            if (in_stack_00000038 != 0) {
                return 0x8000000000000002;
            }
            if (*in_stack_00000040 != 0) {
                return 0x8000000000000002;
            }
        }
        else {
            if (in_stack_00000038 == 0) {
                return 0x8000000000000002;
            }
            if (*in_stack_00000040 == 0) {
                return 0x8000000000000002;
            }
        }
        if ((in_stack_00000028 != NULL) && (in_stack_00000058 != NULL)) {
            if (uVar7 == 1) {
                if (arg4 == 8) {
code_r0x00015970:
                    arg2_00 = fcn.00013c7c(3,1,iVar8,iVar9);
                    if (arg2_00 != NULL) {
                        *arg2_00 = *arg2_00 | 0x20;
                        *(arg2_00 + 1) = 7;
                    }
                    *(arg2_00 + 10) = arg2;
                    *(arg2_00 + 0xb) = **(arg1 + 0x70);
                    *(arg2_00 + 4) = arg4;
                    *(arg2_00 + 0xe) = *((arg3 & 0xffU) + 0x1fb30);
                    *(arg2_00 + 3) = *(iVar4 + 0xc);
                    *(arg2_00 + 0xd) = *(iVar4 + 0xd);
                    *(arg2_00 + 0x3e) = *(iVar4 + 0xf8);
                    uVar5 = (**(*0x202a8 + 0x18))(0x1f);
                    (**(*0x202a8 + 0x20))(uVar5);
                    if (uVar5 < 0x11) {
                        uVar5 = 0x10;
                    }
                    uVar6 = (**(*0x202a8 + 0x18))(uVar5);
                    uVar1 = *(*0x20218 + 0x6c0);
                    *(*0x20218 + 0x6c0) = in_stack_00000048;
                    arg2_00[0x6f] = 0;
                    uVar2 = fcn.00013f38(*(arg1 + 0x70),arg2_00,
                                         in_stack_00000028[1] << 8 | ~-(in_stack_00000030 != 0) & 0x80 |
                                         *in_stack_00000028,*(in_stack_00000028 + 4));
                    uVar3 = fcn.00013c4c(arg2_00);
                    iVar9 = *0x202a8;
                    iVar8 = *0x20218;
                    *in_stack_00000058 = uVar3;
                    *(iVar8 + 0x6c0) = uVar1;
                    (**(iVar9 + 0x20))(uVar6);
                    uVar5 = -((*in_stack_00000058 & 0x40) != 0) & 0x8000000000000012;
                    uVar3 = *in_stack_00000058;
                    *in_stack_00000040 = uVar2;
                    if ((uVar3 & 0xffffffbf) != 0) {
                        uVar5 = 0x8000000000000007;
                    }
                    *arg2_00 = *arg2_00 & 0xffffefdc;
                    return uVar5;
                }
            }
            else if ((((arg3 & 0xfdU) != 0) ||
                     ((arg4 - 8U < 0x39 && ((0x100000001000101U >> (arg4 - 8U & 0x3f) & 1) != 0)))) &&
                    ((uVar7 != 3 || (arg4 == 0x200)))) goto code_r0x00015970;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00014b58 @ 0x14b58 */

uint64_t fcn.00014b58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t *arg2_00;
    ulong uVar7;
    uint8_t uVar8;
    char cVar9;
    int64_t iVar10;
    int64_t arg4_00;
    uint8_t uVar11;
    bool bVar12;
    bool bVar13;
    uint64_t in_stack_00000028;
    int64_t *in_stack_00000038;
    uint64_t *in_stack_00000040;
    uint8_t *in_stack_00000048;
    ushort in_stack_00000050;
    uint32_t *in_stack_00000060;
    
    iVar10 = *(arg1 + 0x70);
    arg4_00 = arg4;
    iVar5 = fcn.00014414(0,arg2,iVar10);
    uVar8 = arg3 & 0xf;
    uVar11 = uVar8 - 1;
    if ((((((iVar5 == 0) || (in_stack_00000038 == NULL)) || (*in_stack_00000038 == 0)) ||
         ((1 < *in_stack_00000048 || (cVar9 = arg4, (arg4 & 0xfcU) != 0)))) ||
        ((cVar9 == '\x01' || ((*in_stack_00000040 == 0 || (in_stack_00000060 == NULL)))))) || (in_stack_00000028 == 0))
    {
code_r0x00014c05:
        uVar6 = 0x8000000000000002;
    }
    else {
        if (cVar9 == '\x03') {
            bVar12 = in_stack_00000028 < 0x400;
            bVar13 = in_stack_00000028 == 0x400;
code_r0x00014c03:
            if (!bVar12 && !bVar13) goto code_r0x00014c05;
        }
        else {
            if (cVar9 == '\x02') {
                bVar12 = in_stack_00000028 < 0x200;
                bVar13 = in_stack_00000028 == 0x200;
                goto code_r0x00014c03;
            }
            if ((cVar9 == '\0') && (0x40 < in_stack_00000028)) goto code_r0x00014c05;
        }
        arg2_00 = fcn.00013c7c(3,1,iVar10,arg4_00);
        if (arg2_00 == NULL) {
            uVar6 = 0x8000000000000009;
        }
        else {
            *arg2_00 = *arg2_00 | 0x20;
            *(arg2_00 + 1) = 7;
            *(arg2_00 + 10) = arg2;
            *(arg2_00 + 0xb) = **(arg1 + 0x70);
            *(arg2_00 + 0xe) = *((arg4 & 0xffU) + 0x1fb30);
            *(arg2_00 + 3) = *(iVar5 + 0xc);
            *(arg2_00 + 0xd) = *(iVar5 + 0xd);
            *(arg2_00 + 0x3e) = *(iVar5 + 0xf8);
            if (arg3 < '\0') {
                *(arg2_00 + 0x55) = uVar8;
                cVar9 = -0x80;
                *(arg2_00 + 0x1e) = in_stack_00000028;
                *(arg2_00 + 0x12) = *in_stack_00000048 << (uVar11 & 0x1f);
            }
            else {
                *(arg2_00 + 0x56) = uVar8;
                cVar9 = '\0';
                *(arg2_00 + 0x7a) = in_stack_00000028;
                *(arg2_00 + 0x4a) = *in_stack_00000048 << (uVar11 & 0x1f);
            }
            uVar6 = (**(*0x202a8 + 0x18))(0x1f);
            (**(*0x202a8 + 0x20))(uVar6);
            if (uVar6 < 0x11) {
                uVar6 = 0x10;
            }
            uVar7 = (**(*0x202a8 + 0x18))(uVar6);
            uVar1 = *(*0x20218 + 0x6c0);
            *(*0x20218 + 0x6c0) = in_stack_00000050;
            arg2_00[0x6f] = 0;
            uVar3 = fcn.00014104(*(arg1 + 0x70),arg2_00,CONCAT71(iVar10 >> 8,cVar9),*in_stack_00000038);
            uVar4 = fcn.00013c4c(arg2_00);
            iVar10 = *0x20218;
            *in_stack_00000060 = uVar4;
            *(iVar10 + 0x6c0) = uVar1;
            (**(*0x202a8 + 0x20))(uVar7);
            *in_stack_00000040 = uVar3;
            if (cVar9 == '\0') {
                uVar2 = *(arg2_00 + 0x4a);
            }
            else {
                uVar2 = arg2_00[0x12];
            }
            *in_stack_00000048 = uVar2 >> (uVar11 & 0x1f) & 1;
            *arg2_00 = *arg2_00 & 0xffffefdc;
            if ((*in_stack_00000060 & 0x40) == 0) {
                uVar6 = -(*in_stack_00000060 != 0) & 0x8000000000000007;
            }
            else {
                uVar6 = 0x8000000000000012;
            }
        }
    }
    return uVar6;
}


/* fcn.00014df4 @ 0x14df4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.00014df4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int16_t arg_68h,uint32_t arg_70h,
                     int64_t arg_78h,int64_t arg_80h,int64_t arg_88h,int64_t arg_98h,int64_t arg_a0h)

{
    int64_t iVar1;
    uint32_t *puVar2;
    char cVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint32_t *arg4_00;
    uint8_t uVar7;
    char *arg3_00;
    uint8_t uVar8;
    ushort in_stack_00000028;
    char in_stack_00000030;
    uint8_t *in_stack_00000038;
    int64_t var_48h;
    int8_t var_50h;
    int8_t var_58h;
    int8_t var_60h;
    unkbyte6 in_stack_00000062;
    int8_t var_18h;
    int64_t var_10h;
    
    uVar7 = arg3;
    arg3_00 = *(arg1 + 0x70);
    puVar4 = fcn.00014414(0,arg2,arg3_00);
    uVar8 = (uVar7 & 0xf) - 1;
    puVar6 = *(*0x20218 + 0x716) * 0x1c0 + *(*0x20240 + 0x42);
    if (((arg4 < 4) && (uVar7 < '\0')) && (puVar4 != NULL)) {
        puVar2 = *(*0x20240 + 0x42) + 0x1c0;
        for (arg4_00 = puVar2; arg4_00 != puVar6; arg4_00 = arg4_00 + 0x70) {
            if ((((*arg4_00 & 0x23) == 0x23) && (*(arg4_00 + 0xb) == *arg3_00)) &&
               ((*(arg4_00 + 0xd) == *(puVar4 + 0xd) && ((arg4_00[3] == puVar4[3] && (arg4_00[0x14] == uVar7))))))
            goto code_r0x00014eca;
        }
        arg4_00 = NULL;
code_r0x00014eca:
        if (in_stack_00000030 == '\0') {
            if ((arg4_00 == NULL) || (*(arg4_00 + 0x2a) == 0)) {
                while (arg4_00 = puVar2, arg4_00 != puVar6) {
                    if ((*arg4_00 & 0x1021) == 0x1021) goto code_r0x00015114;
                    puVar2 = arg4_00 + 0x70;
                }
                goto code_r0x000150f9;
            }
code_r0x00015114:
            iVar1 = *(arg4_00 + 0x2a);
            arg4_00[0x2a] = 0;
            arg4_00[0x2b] = 0;
            cVar3 = fcn.00013e70(0xd,*(*(arg1 + 0x70) + 1),*(arg1 + 0x70),arg4_00);
            if (in_stack_00000038 != NULL) {
                *in_stack_00000038 = arg4_00[0x12] >> (uVar8 & 0x1f) & 1;
            }
            (**(*0x202a8 + 0x58))(*(iVar1 + 0x38),0,0);
            (**(*0x202a8 + 0x70))(*(iVar1 + 0x38));
            (**(*0x202a8 + 0x48))(iVar1);
            *arg4_00 = *arg4_00 & 0xffffefdc;
        }
        else {
            if ((((_var_50h == 0) || (1 < *in_stack_00000038)) || (0xfe < var_48h - 1U)) ||
               ((_var_60h == 0 || (arg4_00 != NULL)))) goto code_r0x000150f9;
            puVar6 = fcn.00013c7c(3,1,arg3_00,0);
            if (puVar6 != NULL) {
                *puVar6 = *puVar6 | 0x20;
                *(puVar6 + 1) = 7;
            }
            if (puVar6 != puVar4) {
                section..text(puVar6,puVar4,0x1c0);
            }
            *(puVar6 + 0x14) = uVar7;
            *(puVar6 + 0xe) = *((arg4 & 0xffU) + 0x1fb30);
            *(puVar6 + 0x4e) = in_stack_00000028;
            if (arg4 < 2) {
                cVar3 = var_48h;
            }
            else {
                cVar3 = '\0';
                for (uVar5 = var_48h; uVar5 != 0; uVar5 = uVar5 >> 1) {
                    cVar3 = cVar3 + '\x01';
                }
                cVar3 = cVar3 + '\x02';
            }
            *(puVar6 + 0x4c) = cVar3;
            *(puVar6 + 3) = puVar4[3];
            *(puVar6 + 0xd) = *(puVar4 + 0xd);
            *(puVar6 + 10) = arg2;
            *(puVar6 + 0x132) = _var_50h;
            iVar1 = _var_50h * 10 + 0x58;
            (**(*0x202a8 + 0x40))(4,iVar1);
            if (iVar1 != 0) {
                fcn.000102e0(0,iVar1,0);
            }
            puVar6[0x2a] = 0;
            puVar6[0x2b] = 0;
            _pe_dos_header = 0x52;
            *0x20 = _var_50h;
            *0x40 = 0x40;
            *0x48 = 0x40;
            *0x8 = _var_50h * 10;
            *0x51 = uVar7;
            *puVar6 = *puVar6 | 0x20;
            uVar5 = (**(*0x202a8 + 0x50))(0x80000200,8,0x149b4,0,0x38);
            if (uVar5 < 0) {
                return uVar5;
            }
            if (var_48h < 0x20) {
                var_48h = 0x20;
            }
            uVar5 = (**(*0x202a8 + 0x58))(*0x38,1,var_48h * 10000);
            if (uVar5 < 0) {
                return uVar5;
            }
            *0x30 = CONCAT62(in_stack_00000062,arg_68h);
            *0x28 = _var_60h;
            *(puVar6 + 0x12) = *in_stack_00000038 << (uVar8 & 0x1f);
            cVar3 = fcn.00013e70(0xe,*(*(arg1 + 0x70) + 1),*(arg1 + 0x70),puVar6);
        }
        uVar5 = -(cVar3 != '\0') & 0x8000000000000007;
    }
    else {
code_r0x000150f9:
        uVar5 = 0x8000000000000002;
    }
    return uVar5;
}


/* fcn.000151b0 @ 0x151b0 */

uint64_t fcn.000151b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    uint32_t uVar2;
    uchar uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint32_t *arg2_00;
    uint64_t uVar7;
    ulong uVar8;
    uint8_t uVar9;
    ulong uVar10;
    uint8_t uVar11;
    int64_t iVar12;
    uint8_t uVar13;
    uint64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint64_t *in_stack_00000038;
    uint8_t *in_stack_00000040;
    ushort in_stack_00000048;
    uint32_t *in_stack_00000058;
    
    uVar9 = arg3;
    uVar11 = arg4;
    iVar12 = arg4;
    iVar6 = fcn.00014414(0,arg2,*(arg1 + 0x70));
    uVar13 = (uVar9 & 0xf) - 1;
    if (((uVar11 < 4) &&
        ((((uVar10 = 0, (*(*0x20218 + 0x6c9) & 0x40000000) != 0 || (uVar9 < '\0')) && (in_stack_00000030 != 0)) &&
         ((in_stack_00000038 != NULL && (*in_stack_00000038 != 0)))))) && (in_stack_00000058 != NULL)) {
        if (uVar11 == 1) {
            if (in_stack_00000028 != 8) {
                return 0x8000000000000002;
            }
        }
        else if (uVar11 == 0) {
            if (0x38 < in_stack_00000028 - 8) {
                return 0x8000000000000002;
            }
            if ((0x100000001000101U >> (in_stack_00000028 - 8 & 0x3f) & 1) == 0) {
                return 0x8000000000000002;
            }
        }
        else if ((uVar11 == 2) && (0xc00 < in_stack_00000028)) {
            return 0x8000000000000002;
        }
        if ((*in_stack_00000040 < 2) && (iVar6 != 0)) {
            arg2_00 = fcn.00013c7c(3,1,0,iVar12);
            if (arg2_00 != NULL) {
                *arg2_00 = *arg2_00 | 0x20;
                *(arg2_00 + 1) = 7;
            }
            *(arg2_00 + 10) = arg2;
            *(arg2_00 + 0xb) = **(arg1 + 0x70);
            *(arg2_00 + 0xe) = *((arg4 & 0xffU) + 0x1fb30);
            if (uVar11 < 2) {
                uVar3 = 1;
            }
            else {
                uVar3 = 3;
            }
            *(arg2_00 + 0x4c) = uVar3;
            *(arg2_00 + 3) = *(iVar6 + 0xc);
            *(arg2_00 + 0xd) = *(iVar6 + 0xd);
            *(arg2_00 + 0x3e) = *(iVar6 + 0xf8);
            uVar2 = 0x4a;
            if (uVar9 < '\0') {
                uVar2 = 0x48;
            }
            *(uVar2 + arg2_00) = *in_stack_00000040 << (uVar13 & 0x1f);
            uVar7 = (**(*0x202a8 + 0x18))(0x1f);
            (**(*0x202a8 + 0x20))(uVar7);
            if (uVar7 < 0x11) {
                uVar7 = 0x10;
            }
            uVar8 = (**(*0x202a8 + 0x18))(uVar7);
            uVar1 = *(*0x20218 + 0x6c0);
            *(*0x20218 + 0x6c0) = in_stack_00000048;
            arg2_00[0x6f] = 0;
            uVar4 = fcn.00014278(*(arg1 + 0x70),arg2_00,CONCAT71(uVar10 >> 8,uVar9),in_stack_00000028 & 0xffff);
            uVar5 = fcn.00013c4c(arg2_00);
            iVar12 = *0x20218;
            *in_stack_00000058 = uVar5;
            *(iVar12 + 0x6c0) = uVar1;
            (**(*0x202a8 + 0x20))(uVar8);
            *in_stack_00000038 = uVar4;
            *in_stack_00000040 = *(uVar2 + arg2_00) >> (uVar13 & 0x1f) & 1;
            *arg2_00 = *arg2_00 & 0xffffefdc;
            if ((*in_stack_00000058 & 0x40) == 0) {
                return -(*in_stack_00000058 != 0) & 0x8000000000000007;
            }
            return 0x8000000000000012;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000148d0 @ 0x148d0 */

ulong fcn.000148d0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    if (arg2 == 0) {
        return 0x8000000000000002;
    }
    uVar1 = *(*(arg1 + 0x70) + 0x58);
    if ((uVar1 & 1) == 0) {
        if ((uVar1 & 2) == 0) {
            *arg2 = 0;
        }
        else {
            *arg2 = 2;
        }
    }
    else {
        *arg2 = 1;
    }
    return 0;
}


/* fcn.000162c4 @ 0x162c4 */

int64_t fcn.000162c4(int64_t arg1)

{
    int64_t iVar1;
    
    if (*(arg1 + 0x10) < *(arg1 + 0x18)) {
        iVar1 = *(arg1 + 0x10) + (*(arg1 + 8) - *(arg1 + 0x18));
    }
    else {
        iVar1 = *(arg1 + 0x10) - *(arg1 + 0x18);
    }
    return iVar1;
}


/* fcn.00014414 @ 0x14414 */

uint * fcn.00014414(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_R8;
    
    if (arg1 == 0) {
        arg1 = *(*0x20240 + 0x42) + 0x1c0;
    }
    while( true ) {
        if (arg1 == *(*0x20218 + 0x716) * 0x1c0 + *(*0x20240 + 0x42)) {
            return NULL;
        }
        if ((((*arg1 & 0x21) == 1) && (*(*0x20348 + (*(arg1 + 0xb) - 1) * 8) == CONCAT44(in_R8,arg3))) &&
           (*(arg1 + 10) == arg2)) break;
        arg1 = arg1 + 0x1c0;
    }
    return arg1;
}


/* fcn.00014104 @ 0x14104 */

uint fcn.00014104(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg3_00;
    uint32_t in_stack_00000028;
    
    arg3_00 = in_stack_00000028;
    iVar3 = arg4;
    if ((arg4 & 0xffffffff00000000U) == 0) goto code_r0x00014214;
    if (*0x20270 == 0) {
code_r0x00014172:
        *0x20270 = 0xffffffff;
        *0x20268 = (in_stack_00000028 >> 0xc) + ((in_stack_00000028 & 0xfff) != 0);
        iVar2 = (**(*0x202a8 + 0x28))();
        if (iVar2 < 0) {
            *0x20268 = 0;
            *0x20270 = 0;
        }
        else if (*0x20268 << 0xc != 0) {
            fcn.000102e0(*0x20270,*0x20268 << 0xc,0);
        }
    }
    else if (*0x20268 << 0xc < arg3_00) {
        (**(*0x202a8 + 0x30))();
        goto code_r0x00014172;
    }
    if ((((*0x20270 != 0) && (iVar3 = *0x20270, *0x20270 != arg4)) && (-1 < arg3)) && (in_stack_00000028 != 0)) {
        section..text(*0x20270,arg4,arg3_00);
    }
code_r0x00014214:
    uVar1 = fcn.00013e70(10,*(arg1 + 1),arg1,arg2);
    if (((iVar3 != arg4) && (arg3 < '\0')) && (in_stack_00000028 != 0)) {
        section..text(arg4,iVar3,arg3_00);
    }
    return uVar1;
}


/* fcn.00013c4c @ 0x13c4c */

uint32_t fcn.00013c4c(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    
    puVar1 = 0x1ead0;
    uVar3 = 0;
    iVar2 = 10;
    do {
        if ((puVar1[1] & *(arg1 + 0x1bc)) != 0) {
            uVar3 = uVar3 | *puVar1;
        }
        puVar1 = puVar1 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return -(*(arg1 + 0x1bc) != 0) & uVar3;
}


/* fcn.00014278 @ 0x14278 */

ushort fcn.00014278(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t in_stack_00000028;
    uint16_t in_stack_00000030;
    
    uVar3 = in_stack_00000028;
    if ((in_stack_00000028 & 0xffffffff00000000) == 0) goto code_r0x00014399;
    if (*0x20270 == 0) {
code_r0x000142e8:
        *0x20270 = 0xffffffff;
        *0x20268 = (in_stack_00000030 >> 0xc) + ((in_stack_00000030 & 0xfff) != 0);
        iVar2 = (**(*0x202a8 + 0x28))();
        if (iVar2 < 0) {
            *0x20268 = 0;
            *0x20270 = 0;
        }
        else if (*0x20268 << 0xc != 0) {
            fcn.000102e0(*0x20270,*0x20268 << 0xc,0);
        }
    }
    else if (*0x20268 << 0xc < in_stack_00000030) {
        (**(*0x202a8 + 0x30))();
        goto code_r0x000142e8;
    }
    if ((((*0x20270 != 0) && (uVar3 = *0x20270, *0x20270 != in_stack_00000028)) && (-1 < arg3)) &&
       (in_stack_00000030 != 0)) {
        section..text(*0x20270,in_stack_00000028,in_stack_00000030);
    }
code_r0x00014399:
    uVar1 = fcn.00013e70(0xc,*(arg1 + 1),arg1,arg2);
    if (((uVar3 != in_stack_00000028) && (arg3 < '\0')) && (in_stack_00000030 != 0)) {
        section..text(in_stack_00000028,uVar3,in_stack_00000030);
    }
    return uVar1;
}


/* fcn.00013f38 @ 0x13f38 */

ushort fcn.00013f38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t in_stack_00000030;
    uint16_t in_stack_00000038;
    
    uVar3 = in_stack_00000030;
    if ((in_stack_00000030 & 0xffffffff00000000) == 0) goto code_r0x0001406f;
    if (*0x20270 == 0) {
code_r0x00013faf:
        *0x20270 = 0xffffffff;
        *0x20268 = (in_stack_00000038 >> 0xc) + ((in_stack_00000038 & 0xfff) != 0);
        iVar2 = (**(*0x202a8 + 0x28))();
        if (iVar2 < 0) {
            *0x20268 = 0;
            *0x20270 = 0;
        }
        else if (*0x20268 << 0xc != 0) {
            fcn.000102e0(*0x20270,*0x20268 << 0xc,0);
        }
    }
    else if (*0x20268 << 0xc < in_stack_00000038) {
        (**(*0x202a8 + 0x30))();
        goto code_r0x00013faf;
    }
    if ((((*0x20270 != 0) && (uVar3 = *0x20270, *0x20270 != in_stack_00000030)) && (-1 < arg3)) &&
       (in_stack_00000038 != 0)) {
        section..text(*0x20270,in_stack_00000030,in_stack_00000038);
    }
code_r0x0001406f:
    uVar1 = fcn.00013e70(9,*(arg1 + 1),arg1,arg2);
    if (((uVar3 != in_stack_00000030) && (arg3 < '\0')) && (in_stack_00000038 != 0)) {
        section..text(in_stack_00000030,uVar3,in_stack_00000038);
    }
    return uVar1;
}


/* fcn.00016248 @ 0x16248 */

ulong * fcn.00016248(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    char cVar3;
    ulong *puVar4;
    
    while( true ) {
        if (arg1 == NULL) {
            return NULL;
        }
        iVar1 = *(arg1 + 0x18);
        puVar2 = *(arg1 + 8);
        cVar3 = (*arg2)(*arg1,arg3);
        if (cVar3 != '\0') break;
        if ((iVar1 != 0) && (puVar4 = fcn.00016248(*(arg1 + 0x18),arg2,arg3), puVar4 != NULL)) {
            return puVar4;
        }
        arg1 = puVar2;
    }
    return arg1;
}


/* fcn.00016480 @ 0x16480 */

int64_t fcn.00016480(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg2_00;
    int16_t iVar1;
    uint8_t uVar2;
    uint16_t in_stack_00000030;
    
    arg1_00 = *(arg1 + 0x28);
    uVar2 = 0;
    arg2_00 = *(arg1 + 0x20);
    while( true ) {
        iVar1 = fcn.00013f38(arg1_00,arg2_00,0x680,in_stack_00000030);
        if (iVar1 != 0) {
            return arg2;
        }
        if ((*(arg2_00 + 0x1bc) & 0x40) != 0) break;
        (**(*0x202a8 + 0xf8))(10000);
        uVar2 = uVar2 + 1;
        if (2 < uVar2) {
            return 0;
        }
    }
    return 0;
}


/* fcn.00016944 @ 0x16944 */

ulong fcn.00016944(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uStackX_8;
    
    iVar4 = **(arg1 + 0x170);
    uVar3 = *(*(arg1 + 0x20) + 0x14);
    uVar6 = 1 << (uVar3 & 0x1f);
    if ((*(arg1 + 0xe0) & uVar6) == 0) {
        uVar7 = uVar3;
        *(uVar7 + 0x39 + arg1) = *(iVar4 + 0x270);
        *(uVar7 + 0x49 + arg1) = *(iVar4 + 0x270);
        iVar8 = **(arg1 + 0x170);
        if ((*(iVar8 + 0x279) == '\0') || (*(iVar8 + 0x274) == -1)) {
            iVar8 = 0;
        }
        else {
            iVar8 = *(*(iVar8 + 0x68) + *(iVar8 + 0x274) * 8);
        }
        if (iVar8 == 0) {
            return 0x800000000000000e;
        }
        uVar5 = 0;
        do {
            if (*(iVar8 + 2) <= uVar5) {
                return 0;
            }
            if (*(uVar5 + iVar8) == 0) {
                return 0;
            }
            uVar5 = uVar5 + *(uVar5 + iVar8);
            if (*(iVar8 + 2) <= uVar5) {
                return 0;
            }
            iVar1 = uVar5 + iVar8;
        } while (((*(iVar1 + 1) != '\x04') || (*(iVar1 + 2) != *(*(arg1 + 0x20) + 0x13))) || (*(iVar1 + 3) != uVar3));
        uVar9 = 0;
        *(arg1 + 0x60 + uVar7 * 8) = iVar1;
        if (*(iVar1 + 4) != '\0') {
            while (((uVar5 < *(iVar8 + 2) && (*(uVar5 + iVar8) != 0)) &&
                   (uVar5 = uVar5 + *(uVar5 + iVar8), uVar5 < *(iVar8 + 2)))) {
                iVar2 = uVar5 + iVar8;
                if (*(iVar2 + 1) == '\x05') {
                    *(iVar4 + 0x70 + *(iVar4 + 0x270) * 8) = iVar2;
                    *(iVar4 + 0x270) = *(iVar4 + 0x270) + '\x01';
                    uVar9 = uVar9 + 1;
                    *(iVar4 + 0x170 + (*(iVar2 + 2) & 0xf) * 8) = iVar2;
                }
                if ((*(iVar2 + 1) == '\x04') || (*(iVar1 + 4) <= uVar9)) break;
            }
        }
        *(uVar7 + 0x49 + arg1) = *(iVar4 + 0x270);
        *(arg1 + 0xe0) = *(arg1 + 0xe0) | uVar6;
        if ((uVar3 != 0) && ((*(*(arg1 + 0x20) + 0x57) != '\t' && (uStackX_8 = 0, *(*(arg1 + 0x28) + 1) == '@')))) {
            if (*(*(arg1 + 0x20) + 0x188) == 0) {
                iVar4 = (**(*0x202a8 + 0x28))(0,4,0x20,&uStackX_8);
                if (iVar4 < 0) {
                    return 0;
                }
                *(*(arg1 + 0x20) + 0x188) = uStackX_8;
            }
            fcn.00013e70(0xf,*(*(arg1 + 0x28) + 1),*(arg1 + 0x28),*(arg1 + 0x20));
        }
    }
    return 0;
}


/* fcn.00013d38 @ 0x13d38 */

int64_t fcn.00013d38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg4;
    
    arg4 = arg3;
    if ((arg3 & 0xffffffff00000000U) == 0) goto code_r0x00013e13;
    if (*0x20270 == 0) {
code_r0x00013da0:
        *0x20268 = 1;
        *0x20270 = 0xffffffff;
        iVar1 = (**(*0x202a8 + 0x28))(1,4,1,0x20270);
        if (iVar1 < 0) {
            *0x20268 = 0;
            *0x20270 = 0;
        }
        else if (*0x20268 << 0xc != 0) {
            fcn.000102e0(*0x20270,*0x20268 << 0xc,0);
        }
    }
    else if (*0x20268 << 0xc < 0x12) {
        (**(*0x202a8 + 0x30))();
        goto code_r0x00013da0;
    }
    if (*0x20270 != 0) {
        arg4 = *0x20270;
    }
code_r0x00013e13:
    iVar2 = fcn.00013c7c(0,arg1,arg2,arg4);
    iVar1 = 0;
    if (iVar2 != 0) {
        if (arg4 != arg3) {
            section..text(arg3,arg4,0x12);
        }
        iVar1 = arg3;
    }
    return iVar1;
}


/* fcn.00016534 @ 0x16534 */

uint8_t * fcn.00016534(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t extraout_RAX;
    uchar uVar1;
    unkbyte6 Var2;
    uint8_t *apuStack_118 [2];
    uint8_t uStack_108;
    char cStack_107;
    
    uVar1 = arg3 >> 8;
    Var2 = arg3 >> 0x10;
    fcn.000102e0(&uStack_108,0xff,0);
    fcn.00016480(arg1,&uStack_108,0xff,CONCAT62(Var2,CONCAT11(uVar1,3)));
    if (((extraout_RAX == 0) || (cStack_107 != '\x03')) || (uStack_108 == 0)) {
        apuStack_118[0] = NULL;
    }
    else {
        (**(*0x202a8 + 0x40))(4,uStack_108,apuStack_118);
        if ((uStack_108 != 0) && (apuStack_118[0] != &uStack_108)) {
            section..text(apuStack_118[0],&uStack_108,uStack_108);
        }
    }
    return apuStack_118[0];
}


/* fcn.00017650 @ 0x17650 */

ulong fcn.00017650(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    
    uVar2 = (**(*0x202a8 + 0x18))(0x10);
    uVar3 = 0;
    if (arg2 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar1 = *(arg1 + -0x88 + *(*(arg1 + -200) + 0x14) * 8);
        if (iVar1 == 0) {
            uVar3 = 0x800000000000000e;
        }
        else if (arg2 != iVar1) {
            section..text(arg2,iVar1,9);
        }
    }
    (**(*0x202a8 + 0x20))(uVar2);
    return uVar3;
}


/* fcn.000177dc @ 0x177dc */

ulong fcn.000177dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t *noname_1;
    ulong uVar3;
    uint8_t *puVar4;
    uint16_t uVar5;
    ulong uVar6;
    char cVar7;
    
    cVar7 = arg3;
    uVar3 = (**(*0x202a8 + 0x18))(0x10);
    iVar2 = **(arg1 + 0x88);
    if ((cVar7 == '\0') || (noname_1 = *(iVar2 + 0x30), noname_1 == NULL)) goto code_r0x00017949;
    uVar1 = *noname_1;
    uVar5 = 0;
    if (uVar1 != 0) {
        do {
            if (arg2 == *(noname_1 + uVar5 * 2 + 2)) break;
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
    }
    if (uVar5 == uVar1) goto code_r0x00017949;
    if (arg2 == 0x409) {
        if (cVar7 == *(iVar2 + 0x60)) {
            puVar4 = *(iVar2 + 0x48);
        }
        else if (cVar7 == *(iVar2 + 0x5f)) {
            puVar4 = *(iVar2 + 0x40);
        }
        else {
            if (cVar7 != *(iVar2 + 0x5e)) goto code_r0x000178a9;
            puVar4 = *(iVar2 + 0x38);
        }
        if (puVar4 != NULL) goto code_r0x000178c4;
    }
code_r0x000178a9:
    puVar4 = fcn.00016534(arg1 + -0xe8,noname_1,arg3 & 0xff,arg2 & 0xffff);
    if (puVar4 == NULL) {
code_r0x00017949:
        (**(*0x202a8 + 0x20))(uVar3);
        return 0x800000000000000e;
    }
code_r0x000178c4:
    uVar6 = 0x800000000000000e;
    if ((2 < *puVar4) && (puVar4[1] == 3)) {
        if (arg4 != 0) {
            (**(*0x202a8 + 0x40))(4,*puVar4);
            if (*puVar4 != 0) {
                fcn.000102e0(*arg4,*puVar4,0);
            }
            if ((*puVar4 - 2 != 0) && (*arg4 != puVar4 + 2)) {
                section..text(*arg4,puVar4 + 2,*puVar4 - 2);
            }
        }
        uVar6 = 0;
    }
    if (((puVar4 != *(iVar2 + 0x48)) && (puVar4 != *(iVar2 + 0x40))) && (puVar4 != *(iVar2 + 0x38))) {
        (**(*0x202a8 + 0x48))(puVar4);
    }
    (**(*0x202a8 + 0x20))(uVar3);
    return uVar6;
}


/* fcn.0001753c @ 0x1753c */

ulong fcn.0001753c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulong uVar5;
    ulong uVar6;
    
    uVar5 = (**(*0x202a8 + 0x18))(0x10);
    uVar6 = 0;
    iVar1 = **(arg1 + 0x88);
    if (arg2 == 0) {
        uVar6 = 0x8000000000000002;
    }
    else if (*(iVar1 + 0x279) == '\0') {
        uVar6 = 0x800000000000000e;
    }
    else {
        uVar2 = *(iVar1 + 0x54);
        uVar3 = *(iVar1 + 0x58);
        uVar4 = *(iVar1 + 0x5c);
        *arg2 = *(iVar1 + 0x50);
        *(arg2 + 4) = uVar2;
        *(arg2 + 8) = uVar3;
        *(arg2 + 0xc) = uVar4;
        *(arg2 + 0x10) = *(iVar1 + 0x60);
    }
    (**(*0x202a8 + 0x20))(uVar5);
    return uVar6;
}


/* fcn.000161f0 @ 0x161f0 */

ulong * fcn.000161f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    char cVar2;
    
    do {
        puVar1 = arg1;
        if (puVar1 == NULL) {
            return NULL;
        }
        arg1 = puVar1[1];
        cVar2 = (*arg2)(*puVar1,arg3);
    } while (cVar2 == '\0');
    return puVar1;
}


/* fcn.00016780 @ 0x16780 */

void fcn.00016780(uint32_t arg1)

{
    int64_t *piVar1;
    char *pcVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uint64_t arg3;
    unkbyte7 in_R9;
    uchar uStack_18;
    char cStack_17;
    uint16_t uStack_16;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = arg1_00 + 0x68;
    iVar3 = *(arg1_00 + 0x20) + 0x198;
    *piVar1 = 0;
    if (arg1_00 + 0x50 != iVar3) {
        section..text(arg1_00 + 0x50,iVar3,0x12);
    }
    iVar3 = *0x202a8;
    *(arg1_00 + 0x278) = *(arg1_00 + 0x61);
    *(arg1_00 + 0x279) = 1;
    (**(iVar3 + 0x40))(4,*(arg1_00 + 0x61) << 3);
    if (*(arg1_00 + 0x278) != 0) {
        fcn.000102e0(*piVar1,*(arg1_00 + 0x278) << 3,0);
    }
    *(arg1_00 + 0x274) = 0xffffffff;
    uVar5 = 0;
    if (*(arg1_00 + 0x278) != '\0') {
        do {
            fcn.000102e0(&uStack_18,9,0);
            fcn.00016480(arg1_00,&uStack_18,9,CONCAT71(in_R9,2));
            if (extraout_RAX == 0) {
                return;
            }
            if (cStack_17 == '\0') {
                return;
            }
            (**(*0x202a8 + 0x40))(4,uStack_16,*piVar1 + uVar5 * 8);
            arg3 = 0;
            if (uStack_16 != 0) {
                fcn.000102e0(*(*piVar1 + uVar5 * 8),uStack_16,0);
                arg3 = uStack_16;
            }
            fcn.00016480(arg1_00,*(*piVar1 + uVar5 * 8),arg3,CONCAT71(in_R9,2));
            if ((extraout_RAX_00 == 0) || (pcVar2 = *(*piVar1 + uVar5 * 8), pcVar2[1] == '\0')) {
                (**(*0x202a8 + 0x48))(*(*piVar1 + uVar5 * 8));
                *(*piVar1 + uVar5 * 8) = 0;
                return;
            }
            if (*pcVar2 == '\0') {
                *pcVar2 = '\t';
            }
            if (*(*(*piVar1 + uVar5 * 8) + 5) == *(*(arg1_00 + 0x20) + 0x12)) {
                *(arg1_00 + 0x274) = uVar5;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *(arg1_00 + 0x278));
    }
    return;
}


/* fcn.000165f4 @ 0x165f4 */

int64_t fcn.000165f4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    
    if (*(arg1 + 0x278) != 0) {
        piVar5 = *(arg1 + 0x68);
        uVar6 = *(arg1 + 0x278);
        do {
            iVar1 = *piVar5;
            uVar3 = 0;
            while ((((iVar1 != 0 && (uVar3 < *(iVar1 + 2))) && (*(uVar3 + iVar1) != 0)) &&
                   (uVar3 = uVar3 + *(uVar3 + iVar1), uVar3 < *(iVar1 + 2)))) {
                if (*(uVar3 + 1 + iVar1) == '\v') {
                    *(arg1 + 0x2a8) = *(arg1 + 0x2a8) + '\x01';
                }
            }
            piVar5 = piVar5 + 1;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    if (*(arg1 + 0x2a8) == 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (**(*0x202a8 + 0x40))(4,*(arg1 + 0x2a8) * 0x38);
        if (-1 < iVar1) {
            iVar1 = *(arg1 + 0x2a8) * 0x38;
            if (iVar1 != 0) {
                fcn.000102e0(*(arg1 + 0x2b0),iVar1,0);
            }
            puVar7 = *(arg1 + 0x2b0);
            uVar4 = 0;
            if (*(arg1 + 0x278) != '\0') {
                do {
                    uVar6 = 0;
                    iVar1 = *(*(arg1 + 0x68) + uVar4 * 8);
                    while (((iVar1 != 0 && (uVar6 < *(iVar1 + 2))) &&
                           ((*(uVar6 + iVar1) != 0 && (uVar6 = uVar6 + *(uVar6 + iVar1), uVar6 < *(iVar1 + 2)))))) {
                        iVar2 = uVar6 + iVar1;
                        if (*(iVar2 + 1) == '\v') {
                            *(puVar7 + 8) = iVar2;
                            *puVar7 = uVar4;
                            iVar2 = (**(*0x202a8 + 0x40))(4,*(iVar2 + 3) << 4);
                            if (iVar2 < 0) {
                                return iVar2;
                            }
                            if (*(*(puVar7 + 8) + 3) != 0) {
                                fcn.000102e0(*(puVar7 + 0x30),*(*(puVar7 + 8) + 3) << 4,0);
                            }
                            puVar7 = puVar7 + 0x38;
                        }
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < *(arg1 + 0x278));
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.0001ddf8 @ 0x1ddf8 */

ulong fcn.0001ddf8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x20160;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        uVar2 = fcn.0001dcf4(iVar3);
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.0001e7ac(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x20160) {
                section..text(iVar4,0x20160,4);
            }
            uVar2 = fcn.0001dd1c(arg1,iVar3);
            (**(*0x202a8 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00017c5c @ 0x17c5c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00017c5c(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    int64_t *piVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    uint64_t uVar13;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    uStack_28 = 0xa18976f;
    uVar6 = 0;
    uStack_24 = 0x405b6ca6;
    uStack_20 = 0xb8274baf;
    uStack_1c = 0x98dbf6f7;
    if (*(arg1 + 0x2a8) == '\0') {
        uVar6 = 0x800000000000000e;
    }
    else {
        puVar10 = *(arg1 + 0x2b0);
        uVar12 = 0;
        uVar13 = 0;
        if (*(arg1 + 0x2a8) != '\0') {
            do {
                iVar4 = *(*(arg1 + 0x68) + *puVar10 * 8);
                uVar12 = uVar13;
                if ((*(iVar4 + 5) == *(*(arg2 + 0x20) + 0x12)) && (*(puVar10 + 0x10) == 0)) {
                    uVar2 = *(*(arg2 + 0x60) + 2);
                    iVar5 = *(uVar13 * 0x38 + 8 + *(arg1 + 0x2b0));
                    if ((*(iVar5 + 2) <= uVar2) && (uVar2 <= *(iVar5 + 3) + -1 + *(iVar5 + 2))) {
                        piVar9 = (uVar2 - *(iVar5 + 2)) * 0x10 + *(puVar10 + 0x30);
                        if (*piVar9 != 0) {
                            return 0x8000000000000007;
                        }
                        *piVar9 = *(arg2 + 8);
                        uVar11 = *(arg2 + 0x60) - *(*(arg1 + 0x68) + *puVar10 * 8);
                        uVar7 = uVar11;
                        while (((uVar7 < *(iVar4 + 2) && (*(uVar7 + iVar4) != '\0')) &&
                               (uVar7 = uVar7 + *(uVar7 + iVar4), uVar7 < *(iVar4 + 2)))) {
                            cVar3 = *(uVar7 + 1 + iVar4);
                            if (((cVar3 == '\x04') && (*(uVar7 + 3 + iVar4) == '\0')) || (cVar3 == '\v')) break;
                        }
                        piVar9[1] = uVar7 - uVar11;
                        uVar7 = 0;
                        uVar8 = 0;
                        uVar2 = *(*(uVar13 * 0x38 + 8 + *(arg1 + 0x2b0)) + 3);
                        if (uVar2 != 0) {
                            do {
                                uVar8 = uVar7;
                                if (*(*(puVar10 + 0x30) + uVar7 * 0x10) == 0) break;
                                uVar8 = uVar8 + 1;
                                uVar7 = uVar8;
                            } while (uVar8 < uVar2);
                        }
                        if (uVar8 == uVar2) {
                            puVar1 = puVar10 + 0x18;
                            puVar1[0] = 0x34;
                            puVar1[1] = 0x7b;
                            puVar1[2] = 1;
                            puVar1[3] = 0;
                            puVar1[4] = 0;
                            puVar1[5] = 0;
                            puVar1[6] = 0;
                            puVar1[7] = 0;
                            puVar10[0x28] = 0xa0;
                            puVar10[0x29] = 0x7b;
                            puVar10[0x2a] = 1;
                            puVar10[0x2b] = 0;
                            puVar10[0x2c] = 0;
                            puVar10[0x2d] = 0;
                            puVar10[0x2e] = 0;
                            puVar10[0x2f] = 0;
                            puVar10[0x20] = 0x5c;
                            puVar10[0x21] = 0x7b;
                            puVar10[0x22] = 1;
                            puVar10[0x23] = 0;
                            puVar10[0x24] = 0;
                            puVar10[0x25] = 0;
                            puVar10[0x26] = 0;
                            puVar10[0x27] = 0;
                            (**(*0x202a8 + 0x148))(puVar10 + 0x10,&uStack_28,puVar1,0);
                            (**(*0x202a8 + 0x108))(*(puVar10 + 0x10),0,0,1);
                            break;
                        }
                    }
                }
                uVar12 = uVar12 + 1;
                uVar13 = uVar12;
                puVar10 = puVar10 + 0x38;
            } while (uVar12 < *(arg1 + 0x2a8));
        }
        if (uVar12 == *(arg1 + 0x2a8)) {
            uVar6 = 0x800000000000000e;
        }
    }
    return uVar6;
}


/* fcn.0001855c @ 0x1855c */

ulong fcn.0001855c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    uint8_t uVar4;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = **(arg1 + 0x170);
    var_10h = 0xa18976f;
    var_ch = 0x405b6ca6;
    var_8h = -0x47d8b451;
    var_4h = -0x67240909;
    if ((iVar1 == 0) || (*(iVar1 + 0x2a8) == '\0')) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar4 = 0;
        if (*(iVar1 + 0x2a8) != '\0') {
            puVar3 = *(iVar1 + 0x2b0) + 0x10;
            do {
                (**(*0x202a8 + 0x110))(*puVar3,0,0);
                (**(*0x202a8 + 0x48))(puVar3[4]);
                (**(*0x202a8 + 0x150))(*puVar3,&var_10h,puVar3 + 1,0);
                uVar4 = uVar4 + 1;
                puVar3 = puVar3 + 7;
            } while (uVar4 < *(iVar1 + 0x2a8));
        }
        (**(*0x202a8 + 0x48))(*(iVar1 + 0x2b0));
        *(iVar1 + 0x2b0) = 0;
        uVar2 = 0;
        *(iVar1 + 0x2a8) = 0;
    }
    return uVar2;
}


/* fcn.000161a4 @ 0x161a4 */

void fcn.000161a4(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 8);
    if (iVar1 != 0) {
        *(iVar1 + 0x10) = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
    }
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
    if (iVar1 != 0) {
        *(iVar1 + 8) = *(CONCAT44(in_register_0000000c,arg1) + 8);
    }
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
    if ((iVar1 != 0) && (*(iVar1 + 0x18) == CONCAT44(in_register_0000000c,arg1))) {
        *(iVar1 + 0x18) = *(CONCAT44(in_register_0000000c,arg1) + 8);
    }
    *(CONCAT44(in_register_0000000c,arg1) + 0x10) = 0;
    *(CONCAT44(in_register_0000000c,arg1) + 8) = 0;
    *(CONCAT44(in_register_0000000c,arg1) + 0x20) = 0;
    return;
}


/* fcn.0001865c @ 0x1865c */

int64_t fcn.0001865c(int64_t arg1)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong noname_0;
    int64_t iStackX_8;
    
    if (*(*0x20218 + 0x6c9) < 0) {
        fcn.0001855c(arg1);
    }
    iVar3 = fcn.000161f0(*(arg1 + 0x168),0x18848,&iStackX_8);
    if (iVar3 == 0) {
        noname_0 = (**(*0x202a8 + 0x18))(0x1f);
        (**(*0x202a8 + 0x20))(8);
        iStackX_8 = (**(*0x202a8 + 0x110))(*(arg1 + 8),0,0);
        (**(*0x202a8 + 0x18))(0x1f);
        (**(*0x202a8 + 0x20))();
        if (-1 < iStackX_8) {
            if (*(arg1 + 0x178) != '\0') {
                iStackX_8 = (**(arg1 + 0xf8))(arg1 + 0xe8,*(arg1 + 0x178),0,0,0,0,0);
                *(arg1 + 0x178) = 0;
            }
            iStackX_8 = (**(*0x202a8 + 0x120))(*(*(arg1 + 0x28) + 0x68),str.Rt_,*0x1eb98,*(arg1 + 8));
            if (iStackX_8 < 0) {
                return iStackX_8;
            }
            iStackX_8 = (**(*0x202a8 + 0x150))(*(arg1 + 8),0x1e980,arg1 + 0xe8,0x1e920,*(arg1 + 0x10),0);
            if (iStackX_8 < 0) {
                return iStackX_8;
            }
            **(arg1 + 0x20) = **(arg1 + 0x20) & 0xffffffbf;
            uVar1 = **(arg1 + 0x20);
            if ((uVar1 & 6) == 0) {
                **(arg1 + 0x20) = uVar1 & 0xfffffffe;
            }
            puVar2 = *(*(arg1 + 0x20) + 0x188);
            if (puVar2 != NULL) {
                (**(*0x202a8 + 0x30))(*puVar2,0x20);
                *(*(arg1 + 0x20) + 0x188) = 0;
            }
            fcn.000161a4(arg1 + 0x150);
            if (*(arg1 + 0x30) != 0) {
                (**(*0x202a8 + 0x48))();
            }
            (**(*0x202a8 + 0x48))(arg1);
            return 0;
        }
        fcn.000162f8(noname_0,*(arg1 + 0x20));
        **(arg1 + 0x20) = **(arg1 + 0x20) | 0x100;
    }
    return iStackX_8;
}


/* fcn.00018848 @ 0x18848 */

ulong fcn.00018848(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    char *arg1_00;
    uint8_t uVar2;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*arg1_00 == '\x02') {
        fcn.000161f0(*(arg1_00 + 0x298),0x18848,arg2);
        if (*arg2 < 0) {
            return 1;
        }
        fcn.000161a4(arg1 + 0x280);
        if (*(arg1_00 + 0x68) != 0) {
            uVar2 = 0;
            if (arg1_00[0x278] != '\0') {
                do {
                    if (*(*(arg1_00 + 0x68) + uVar2 * 8) != 0) {
                        (**(*0x202a8 + 0x48))();
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < arg1_00[0x278]);
            }
            (**(*0x202a8 + 0x48))(*(arg1_00 + 0x68));
        }
        if ((*(*0x20218 + 0x6c9) < 0) && (*(arg1_00 + 0x2b0) != 0)) {
            (**(*0x202a8 + 0x48))();
        }
        if (*(arg1_00 + 0x38) != 0) {
            (**(*0x202a8 + 0x48))();
        }
        if (*(arg1_00 + 0x40) != 0) {
            (**(*0x202a8 + 0x48))();
        }
        if (*(arg1_00 + 0x48) != 0) {
            (**(*0x202a8 + 0x48))();
        }
        (**(*0x202a8 + 0x48))(arg1_00);
    }
    else if (*arg1_00 == '\x01') {
        iVar1 = fcn.0001865c(arg1_00);
        *arg2 = iVar1;
        if (iVar1 < 0) {
            return 1;
        }
    }
    return 0;
}


/* fcn.0001896c @ 0x1896c */

ulong fcn.0001896c(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong auStackX_8 [4];
    
    iVar1 = fcn.000161f0(*0x20338,0x16360,arg1 + 0xb);
    if ((iVar1 != 0) && (puVar2 = fcn.00016248(*(iVar1 + 0x18),0x163a4,arg1 + 10), puVar2 != NULL)) {
        auStackX_8[0] = 0;
        fcn.00018848(*puVar2,auStackX_8);
        return auStackX_8[0];
    }
    return 0x800000000000000e;
}


/* fcn.00017e6c @ 0x17e6c */

void fcn.00017e6c(int64_t arg1)

{
    ulong *puVar1;
    uint8_t uVar2;
    char cVar3;
    uchar uVar4;
    ushort uVar5;
    uint8_t *puVar6;
    int64_t *piVar7;
    ulong *puVar8;
    ulong uVar9;
    int64_t iVar10;
    uint16_t uVar11;
    uint64_t noname_1;
    uint64_t arg2;
    int64_t *piVar12;
    uint uStackX_8;
    char cStackX_c;
    uint uStackX_10;
    char cStackX_14;
    uchar uStackX_15;
    uchar *puStackX_18;
    uchar *puStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint uVar13;
    
    piVar7 = fcn.000161f0(*0x20338,0x16360,arg1 + 0xb);
    piVar12 = NULL;
    if (piVar7 != NULL) {
        if (*(arg1 + 0xc) < '\0') {
            piVar12 = piVar7;
        }
        else {
            iVar10 = fcn.00016248(piVar7[3],0x163a4,arg1 + 0xc);
            if (iVar10 != 0) {
                piVar12 = *(iVar10 + 0x18);
            }
            if (piVar12 == NULL) {
                return;
            }
        }
        puVar8 = fcn.000161f0(piVar12[3],0x163a4,arg1 + 10);
        if (puVar8 == NULL) {
            (**(*0x202a8 + 0x40))(4,0x2b8);
            uVar9 = 0x2b8;
            fcn.000102e0(puStackX_20,0x2b8,0);
            *(puStackX_20 + 0x20) = arg1;
            *(puStackX_20 + 0x18) = *(*piVar7 + 0x18);
            *(puStackX_20 + 0x28) = *(*piVar7 + 0x20);
            puStackX_20[0x279] = 0;
            *(puStackX_20 + 0x68) = 0;
            puStackX_20[0x278] = 0;
            *(puStackX_20 + 0x38) = 0;
            *(puStackX_20 + 0x40) = 0;
            *(puStackX_20 + 0x48) = 0;
            *puStackX_20 = 2;
            *(puStackX_20 + 0x274) = 0;
            fcn.00016780(puStackX_20);
            if ((puStackX_20[0x279] == '\0') || (*(puStackX_20 + 0x274) == -1)) {
                *(*(puStackX_20 + 0x20) + 0x1b8) = *(*(puStackX_20 + 0x20) + 0x1b8) | 1;
                return;
            }
            if (*(*0x20218 + 0x6c9) < 0) {
                puStackX_20[0x2a8] = 0;
                *(puStackX_20 + 0x2b0) = 0;
                if (((puStackX_20[0x54] == -0x11) && (puStackX_20[0x55] == '\x02')) && (puStackX_20[0x56] == '\x01')) {
                    fcn.000165f4(puStackX_20);
                }
            }
            if (((puStackX_20[0x5e] != '\0') || (puStackX_20[0x5f] != '\0')) || (puStackX_20[0x60] != '\0')) {
                uVar9 = fcn.00016534(puStackX_20,uVar9,0,0);
                *(puStackX_20 + 0x30) = uVar9;
                puVar6 = *(puStackX_20 + 0x30);
                if ((puVar6 != NULL) && (*puVar6 != 0)) {
                    *puVar6 = *puVar6 - 2 >> 1;
                    noname_1 = 0;
                    uVar2 = **(puStackX_20 + 0x30);
                    if (uVar2 != 0) {
                        do {
                            if (*(*(puStackX_20 + 0x30) + noname_1 * 2 + 2) == 0x409) break;
                            uVar11 = noname_1 + 1;
                            noname_1 = uVar11;
                        } while (uVar11 < uVar2);
                    }
                    if (noname_1 != uVar2) {
                        uVar5 = *(*0x20218 + 0x6c0);
                        *(*0x20218 + 0x6c0) = 100;
                        arg2 = puStackX_20[0x5e];
                        if (puStackX_20[0x5e] != 0) {
                            uVar9 = fcn.00016534(puStackX_20,noname_1,arg2,0x409);
                            *(puStackX_20 + 0x38) = uVar9;
                        }
                        iVar10 = CONCAT71(arg2 >> 8,puStackX_20[0x5f]);
                        if (puStackX_20[0x5f] != '\0') {
                            uVar9 = fcn.00016534(puStackX_20,noname_1,iVar10,0x409);
                            *(puStackX_20 + 0x40) = uVar9;
                        }
                        if (puStackX_20[0x60] != '\0') {
                            *(*0x20218 + 0x6c0) = 3000;
                            uVar9 = fcn.00016534(puStackX_20,noname_1,CONCAT71(iVar10 >> 8,puStackX_20[0x60]),0x409)
                            ;
                            *(puStackX_20 + 0x48) = uVar9;
                        }
                        *(*0x20218 + 0x6c0) = uVar5;
                    }
                }
            }
            puVar8 = puStackX_20 + 0x280;
            *(puStackX_20 + 0x288) = 0;
            *puVar8 = puStackX_20;
            *(puStackX_20 + 0x298) = 0;
            *(puStackX_20 + 0x290) = 0;
            *(puStackX_20 + 0x2a0) = 0;
            iVar10 = piVar12[3];
            piVar12[3] = puVar8;
            *(puStackX_20 + 0x288) = iVar10;
            if (iVar10 != 0) {
                *(iVar10 + 0x10) = puVar8;
            }
            *(puStackX_20 + 0x290) = 0;
            *(puStackX_20 + 0x2a0) = piVar12;
        }
        else {
            iVar10 = fcn.000161f0(puVar8[3],0x163fc,arg1);
            if (iVar10 != 0) {
                *(arg1 + 0x1b8) = *(arg1 + 0x1b8) | 4;
                return;
            }
            puStackX_20 = *puVar8;
        }
        (**(*0x202a8 + 0x40))(4,0x180);
        if (puStackX_18 != NULL) {
            fcn.000102e0(puStackX_18,0x180,0);
            *puStackX_18 = 1;
            puVar1 = puStackX_18 + 0x150;
            *(puStackX_18 + 0x158) = 0;
            *puVar1 = puStackX_18;
            *(puStackX_18 + 0x168) = 0;
            *(puStackX_18 + 0x160) = 0;
            *(puStackX_18 + 0x170) = 0;
            iVar10 = puVar8[3];
            puVar8[3] = puVar1;
            *(puStackX_18 + 0x158) = iVar10;
            if (iVar10 != 0) {
                *(iVar10 + 0x10) = puVar1;
            }
            *(puStackX_18 + 0x160) = 0;
            *(puStackX_18 + 0x170) = puVar8;
            *(puStackX_18 + 0x20) = arg1;
            *(puStackX_18 + 0x18) = *(*piVar7 + 0x18);
            *(puStackX_18 + 0x28) = *(*piVar7 + 0x20);
            puStackX_18[0x38] = 0;
            iVar10 = fcn.00016944(puStackX_18);
            if (iVar10 < 0) {
                *(*(puStackX_18 + 0x20) + 0x1b8) = *(*(puStackX_18 + 0x20) + 0x1b8) | 2;
            }
            else {
                cVar3 = *(*(puStackX_18 + 0x20) + 0xe);
                if (cVar3 == '\0') {
                    puStackX_18[0xe4] = 2;
                }
                else if (cVar3 == '\x01') {
                    puStackX_18[0xe4] = 1;
                }
                else if (cVar3 == '\x02') {
                    puStackX_18[0xe4] = 0;
                }
                else if (cVar3 == '\x04') {
                    puStackX_18[0xe4] = 3;
                }
                else if (cVar3 == '@') {
                    puStackX_18[0xe4] = 4;
                }
                cVar3 = *(arg1 + 0xd);
                uVar4 = *(arg1 + 0x13);
                iVar10 = *(*piVar12 + 0x10);
                fcn.000102e0(&uStackX_10,6,0);
                uStackX_10 = 0x60503;
                cStackX_14 = cVar3 + -1;
                uStackX_15 = uVar4;
                iVar10 = fcn.0001ddf8(iVar10,&uStackX_10);
                *(puStackX_18 + 0x10) = iVar10;
                cVar3 = *(arg1 + 0xf);
                if (cVar3 != '\0') {
                    fcn.000102e0(&uStackX_8,5,0);
                    uStackX_8 = 0x51103;
                    cStackX_c = cVar3;
                    uVar9 = fcn.0001ddf8(iVar10,&uStackX_8);
                    *(puStackX_18 + 0x10) = uVar9;
                }
                uVar13 = 0;
                *(puStackX_18 + 0xe8) = 0x16b34;
                *(puStackX_18 + 0xf0) = 0x16c78;
                *(puStackX_18 + 0xf8) = 0x16e5c;
                *(puStackX_18 + 0x100) = 0x1703c;
                *(puStackX_18 + 0x108) = 0x171fc;
                *(puStackX_18 + 0x110) = 95000;
                *(puStackX_18 + 0x118) = fcn.0001753c;
                *(puStackX_18 + 0x120) = 0x175bc;
                *(puStackX_18 + 0x128) = fcn.00017650;
                *(puStackX_18 + 0x130) = 0x176ec;
                *(puStackX_18 + 0x138) = fcn.000177dc;
                *(puStackX_18 + 0x140) = 0x17978;
                *(puStackX_18 + 0x148) = 0x17448;
                (**(*0x202a8 + 0x148))(puStackX_18 + 8,0x1e980,puStackX_18 + 0xe8,0x1e920,*(puStackX_18 + 0x10),0);
                *(*(puStackX_18 + 0x20) + 0xb0) = *(puStackX_18 + 8);
                **(puStackX_18 + 0x20) = **(puStackX_18 + 0x20) | 0x40;
                (**(*0x202a8 + 0x118))
                          (*(*(puStackX_18 + 0x28) + 0x68),str.Rt_,&uStackX_8,*0x1eb98,*(puStackX_18 + 8),
                           CONCAT44(uVar13,8));
                fcn.0001e0ac(1,0x2020006);
                uVar9 = (**(*0x202a8 + 0x18))(0x1f);
                (**(*0x202a8 + 0x20))(8);
                iVar10 = (**(*0x202a8 + 0x108))(*(puStackX_18 + 8),0,0,1);
                (**(*0x202a8 + 0x18))(0x1f);
                (**(*0x202a8 + 0x20))(uVar9);
                if (-1 < iVar10) {
                    puStackX_18[0x38] = 1;
                }
                if (*(*0x20218 + 0x6c9) < 0) {
                    fcn.00017c5c(puStackX_20,puStackX_18);
                }
            }
        }
    }
    return;
}


/* fcn.000179fc @ 0x179fc */

int64_t fcn.000179fc(int64_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_30h_2;
    uchar auStack_48 [8];
    char cStack_40;
    int64_t var_30h;
    int8_t var_28h_2;
    char cStack_29;
    int64_t var_20h;
    int8_t var_11h;
    
    iVar5 = **(arg1 + 0x170);
    iStackX_10 = 0;
    var_20h_2 = 0;
    fcn.000102e0(auStack_48,9,0);
    uVar8 = 0;
    fcn.000102e0(&var_30h,0x12,0);
    uVar7 = 0;
    do {
        uVar6 = uVar7;
        if (*(uVar7 + 0xb8 + *(arg1 + 0x20)) != '\0') break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
    } while (uVar6 < 0x40);
    if (uVar6 == 0x40) {
        pcVar3 = *(iVar5 + 0x30);
        if ((pcVar3 != NULL) && (*pcVar3 != '\0')) {
            uVar2 = *(pcVar3 + 2);
            arg1 = arg1 + 0xe8;
            fcn.00017650(arg1,auStack_48);
            iVar5 = CONCAT71(uVar8 >> 8,cStack_40);
            if ((cStack_40 != '\0') && (iVar4 = fcn.000177dc(arg1,uVar2,iVar5,&iStackX_10), -1 < iVar4)) {
                return iStackX_10;
            }
            fcn.0001753c(arg1,&var_30h);
            if ((cStack_29 != '\0') &&
               (iVar5 = fcn.000177dc(arg1,uVar2,CONCAT71(iVar5 >> 8,cStack_29),&var_20h_2), -1 < iVar5)) {
                return var_20h_2;
            }
        }
        iStackX_8 = 0;
    }
    else {
        (**(*0x202a8 + 0x40))(4,0x80);
        fcn.000102e0(iStackX_8,0x80,0);
        iVar5 = *(arg1 + 0x20);
        uVar6 = 0;
        do {
            uVar7 = uVar6;
            uVar1 = *(uVar7 + 0xb8 + iVar5);
            if (uVar1 == 0) break;
            uVar6 = uVar6 + 1;
            *(iStackX_8 + uVar7 * 2) = uVar1;
        } while (uVar6 < 0x40);
    }
    return iStackX_8;
}


/* fcn.00015b1c @ 0x15b1c */

int64_t fcn.00015b1c(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (*(*0x20240 + 0x10) != 0) {
        do {
            iVar1 = *(*0x20348 + uVar2 * 8);
            if (((iVar1 != 0) && ((*(iVar1 + 0x58) & 4) != 0)) &&
               (*(iVar1 + 0x68) == CONCAT44(in_register_0000000c,arg1))) {
                return iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*0x20240 + 0x10));
    }
    return 0;
}


/* fcn.00018c78 @ 0x18c78 */

void fcn.00018c78(int64_t arg1)

{
    int64_t noname_0;
    uint32_t *arg1_00;
    int16_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    
    fcn.0001e0ac(1,0x2020003);
    fcn.000189d4(0);
    uVar2 = 1;
    if (1 < *(*0x20218 + 0x716)) {
        piVar4 = *0x20240 + 0x42;
        iVar3 = *0x20218;
        do {
            iVar1 = uVar2;
            iVar5 = uVar2 * 0x1c0;
            arg1_00 = *piVar4 + iVar5;
            if (((((*arg1_00 & 99) == 3) && (noname_0 = *(arg1_00 + 0xb) - 1, arg1 == *(*0x20348 + noname_0 * 8))) &&
                (arg1_00[0x6e] == 0)) && ((*arg1_00 & 0x100) == 0)) {
                fcn.000162f8(noname_0,arg1_00);
                iVar3 = *0x20218;
                piVar4 = *0x20240 + 0x42;
                *(*piVar4 + iVar5) = *(*piVar4 + iVar5) | 0x100;
            }
            uVar2 = iVar1 + 1U;
        } while (iVar1 + 1U < *(iVar3 + 0x716));
    }
    return;
}


/* fcn.0001ceb0 @ 0x1ceb0 */

void fcn.0001ceb0(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001cf10(noname_0,noname_1,0x100,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001cf10 @ 0x1cf10 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001cf10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001cf6e;
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
code_r0x0001cf6e:
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
        uVar20 = fcn.0001cdf4(arg4,0xf4241);
        if (uVar17 < uVar20) {
            return 0;
        }
        uVar20 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001cdc8(arg4);
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
            pcVar8 = 0x1fde4;
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
code_r0x0001d32b:
            uStack_a8 = uVar5 & uStack_98;
            if ((uVar5 & uStack_98) == 10) {
                pcVar8 = 0x1fde4;
            }
            else {
                pcVar8 = 0x1fde8;
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar12 = puStack_b0;
            puVar18 = in_stack_00000028;
            puVar21 = puStackX_20;
code_r0x0001d0c3:
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
                    goto code_r0x0001d266;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar17 & 0x800) == 0) {
                        uVar17 = uVar17 | 0x20;
                        uStackX_18 = uVar17;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x0001d27d;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar17 = uVar17 | 0x10;
                            goto code_r0x0001d266;
                        }
                        goto code_r0x0001d27d;
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
code_r0x0001d266:
                puVar21 = puStackX_20;
                uStackX_18 = uVar17;
                goto code_r0x0001d0c3;
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
                        goto code_r0x0001d0c3;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar17 = uVar17 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x0001d27d;
                        uVar17 = uVar17 | 8;
                    }
                }
                goto code_r0x0001d266;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar21;
code_r0x0001d27d:
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
                        fcn.0001dc80(&var_68h_2,0x26,0,0x1fd78);
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
                            goto code_r0x0001d32b;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001d513;
                        if (uStack_a8 == 0x58) goto code_r0x0001d609;
                        if (uStack_a8 == 0x61) goto code_r0x0001d51c;
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
                            goto code_r0x0001d0a4;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001d0a0;
                        goto code_r0x0001d620;
                    }
                    puVar21 = puStackX_20 + var_78h;
                    pcVar8 = 0x1fde4;
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
                goto code_r0x0001d84d;
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
                            iVar11 = 0x1fe7b;
                            goto code_r0x0001d5d0;
                        }
                    }
                    else if (uVar5 < 6) {
                        iVar11 = uVar5 * 0x19;
                        pcVar8 = "Success";
code_r0x0001d5d0:
                        pcVar8 = pcVar8 + iVar11;
                        if (pcVar8 != &var_68h_2) goto code_r0x0001d84d;
                    }
                    fcn.0001dc80(&var_68h_2,0x26,0,0x1fddc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001d513:
                        uVar17 = uVar17 | 0x400;
                        uStackX_18 = uVar17;
code_r0x0001d51c:
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
                        goto code_r0x0001d84d;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001d0a0;
                            goto code_r0x0001d60d;
                        }
                        goto code_r0x0001d612;
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
                        goto code_r0x0001d84d;
                    }
                    fcn.0001dc80(&var_68h_2,0x26,0,0x1fdc0);
                    pcVar8 = &var_68h_2;
                }
                uVar20 = uStack_c0;
                goto code_r0x0001d84d;
            }
            uVar17 = uVar17 & 0xffffffffffffffd9 | 0x10;
code_r0x0001d609:
            uVar17 = uVar17 | 0x20;
code_r0x0001d60d:
            uVar17 = uVar17 | 0x80;
code_r0x0001d612:
            if (-1 < uVar17) {
                uVar17 = uVar17 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x0001d620:
            if ((uVar17 & 0x10) == 0) {
                if (puVar12 != NULL) {
                    uVar20 = *puVar12;
                    goto code_r0x0001d662;
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
code_r0x0001d662:
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
code_r0x0001d6ea:
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
                    if ((uVar17 & 0x4010) == 0x4000) goto code_r0x0001d6ea;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar5 = uVar20;
            do {
                uVar6 = uVar5 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar5 % uVar16];
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
code_r0x0001d0a0:
            pcVar8 = &uStack_a8;
code_r0x0001d0a4:
            uVar17 = uVar17 | 0x400;
            uStackX_18 = uVar17;
            puVar21 = puStackX_20;
        }
code_r0x0001d84d:
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
                arg1 = fcn.0001cedc(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001cedc(arg1,pcVar15,uVar22 - uVar20,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.0001cedc(arg1,pcStack_d0,uVar22 - uVar20,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.0001cedc(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
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


/* fcn.00019c70 @ 0x19c70 */

uint64_t fcn.00019c70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int *piVar3;
    int64_t iVar4;
    ushort *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    bool bVar11;
    int64_t iStackX_18;
    uint64_t in_stack_00000028;
    char in_stack_00000030;
    uint64_t uStack_48;
    int64_t iStack_40;
    
    iVar4 = *0x202a8;
    puVar5 = *0x20248;
    uVar7 = 0;
    piVar3 = *(arg1 + 8);
    iStack_40 = 0;
    if (*piVar3 != arg2) {
        return 0x800000000000000d;
    }
    if (in_stack_00000030 == '\x01') {
code_r0x00019d1d:
        *(piVar3 + 5) = 1;
        (**(iVar4 + 0x168))(puVar5,0x1f);
        puVar5 = *0x20248;
        **0x20248 = 0xa27;
        *(puVar5 + 3) = *(arg1 + 0x70);
        *(puVar5 + 2) = 0;
        fcn.00013be0();
        puVar5 = *0x20248;
        iVar4 = *(arg1 + 0x68);
        if ((((*(*0x20248 + 2) & 1) == 0) || (*(iVar4 + 0x60) == 0)) || (*(iVar4 + 0x5e) == 0)) {
            *(*(arg1 + 8) + 0x18) = 0;
            if ((in_stack_00000030 == '\x01') && ((*(puVar5 + 2) & 2) != 0)) {
                return 0x800000000000000d;
            }
        }
        else {
            piVar3 = *(arg1 + 8);
            if (((*(iVar4 + 0x5e) != piVar3[3]) || (*(iVar4 + 0x60) + -1 != *(piVar3 + 6))) ||
               ((*(*0x20248 + 2) & 2) != 0)) {
                *piVar3 = *piVar3 + 1;
                *(*(arg1 + 8) + 7) = 0;
                *(*(arg1 + 8) + 0x18) = *(iVar4 + 0x60) + -1;
                *(*(arg1 + 8) + 0xc) = *(iVar4 + 0x5e);
            }
        }
        if ((*(puVar5 + 2) & 1) != 0) {
            piVar3 = *(arg1 + 8);
            uVar10 = *(piVar3 + 6);
            if ((uVar10 != 0) && (piVar3[3] != 0)) {
                if (arg2 != *piVar3) {
                    return 0x800000000000000d;
                }
                if (in_stack_00000030 == '\x01') {
                    if (arg4 == 0) {
                        return 0;
                    }
                    if ((in_stack_00000028 == 0) || ((1 < piVar3[4] && (in_stack_00000028 % piVar3[4] != 0))))
                    goto code_r0x00019cde;
                    if ((**(arg1 + 0x68) & 2) == 0) {
                        return 0x8000000000000007;
                    }
                }
                if ((arg3 <= uVar10) && (uVar2 = *(*(arg1 + 0x68) + 0x5e), arg3 + -1 + arg4 / uVar2 <= uVar10)) {
                    if (arg4 % uVar2 != 0) {
                        return 0x8000000000000004;
                    }
                    uStack_48 = in_stack_00000028;
                    if ((in_stack_00000028 & 0xffffffff00000000) != 0) {
                        iStack_40 = ((arg4 & 0xfffU) != 0) + (arg4 >> 0xc);
                        uStack_48 = 0xffffffff;
                        uVar7 = (**(*0x202a8 + 0x28))(1);
                        if (uVar7 < 0) {
                            uStack_48 = in_stack_00000028;
                        }
                        else if (((in_stack_00000030 == '\0') && (arg4 != 0)) && (in_stack_00000028 != 0xffffffff)) {
                            section..text(0xffffffff,in_stack_00000028,arg4);
                        }
                    }
                    uVar10 = arg4 & 0xffffffff;
                    if (arg4 != 0) {
                        uVar8 = uStack_48;
                        iStackX_18 = arg3;
                        do {
                            uVar9 = uVar10;
                            uVar6 = uVar9;
                            if (0x10000 < uVar9) {
                                uVar6 = 0x10000;
                            }
                            (**(*0x202a8 + 0x168))(*0x20248);
                            puVar5 = *0x20248;
                            *(*0x20248 + 1) = (in_stack_00000030 != '\x01') + '\f';
                            uVar7 = 0;
                            *puVar5 = 0x27;
                            *(puVar5 + 3) = *(arg1 + 0x70);
                            *(puVar5 + 4) = iStackX_18;
                            uVar2 = *(*(arg1 + 0x68) + 0x5e);
                            *(puVar5 + 9) = 0;
                            puVar5[8] = uVar6 / uVar2;
                            *(puVar5 + 0xb) = uVar8;
                            fcn.00013be0();
                            uVar1 = *(*0x20248 + 1);
                            if (uVar1 < 0x12) {
                                if ((uVar1 < 0x10) && (uVar1 != 2)) {
                                    if (uVar1 != 3) {
                                        if ((uVar1 != 4) && (uVar1 != 7)) {
                                            bVar11 = uVar1 == 10;
                                            goto code_r0x0001a00f;
                                        }
                                        goto code_r0x0001a011;
                                    }
                                    uVar7 = -(in_stack_00000030 != '\x01') & 0x8000000000000008;
                                    if (in_stack_00000030 != '\x01') {
                                        *(*(arg1 + 8) + 7) = 1;
                                    }
                                }
                                else {
code_r0x0001a011:
                                    uVar7 = 0x8000000000000007;
                                }
                                if (uVar7 < 0) break;
                            }
                            else {
                                if (uVar1 == 0x20) goto code_r0x0001a011;
                                if (uVar1 == 0x31) {
                                    uVar7 = 0x800000000000000c;
                                    *(*(arg1 + 8) + 5) = 0;
                                    break;
                                }
                                if (uVar1 == 0x80) goto code_r0x0001a011;
                                bVar11 = uVar1 == 0xaa;
code_r0x0001a00f:
                                if (bVar11) goto code_r0x0001a011;
                            }
                            uVar10 = uVar9 - uVar6;
                            uVar8 = uVar8 + uVar6;
                            iStackX_18 = iStackX_18 + uVar6 / *(*(arg1 + 0x68) + 0x5e);
                        } while (uVar9 - uVar6 != 0);
                    }
                    if (uStack_48 != in_stack_00000028) {
                        if ((in_stack_00000030 == '\x01') && (arg4 - uVar10 != 0)) {
                            section..text(in_stack_00000028,uStack_48,arg4 - uVar10);
                        }
                        (**(*0x202a8 + 0x30))(uStack_48,iStack_40);
                    }
                    return uVar7;
                }
                goto code_r0x00019cde;
            }
        }
        *(*(arg1 + 8) + 5) = 0;
        *(*(arg1 + 8) + 0x18) = 0;
        uVar7 = 0x800000000000000c;
    }
    else {
        if (arg4 == 0) {
            return 0;
        }
        if ((in_stack_00000028 != 0) && ((piVar3[4] < 2 || (in_stack_00000028 % piVar3[4] == 0)))) {
            if ((**(arg1 + 0x68) & 2) == 0) {
                return 0x8000000000000007;
            }
            goto code_r0x00019d1d;
        }
code_r0x00019cde:
        uVar7 = 0x8000000000000002;
    }
    return uVar7;
}


/* fcn.0001642c @ 0x1642c */

uint * fcn.0001642c(uint32_t arg1)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    uint *puVar2;
    
    uVar1 = 0;
    if (*(*0x20218 + 0x716) != 0) {
        puVar2 = *(*0x20240 + 0x42);
        do {
            if (((*puVar2 & 3) == 3) && (CONCAT44(in_register_0000000c,arg1) == *(puVar2 + 0x2c))) {
                return *(*0x20240 + 0x42) + uVar1 * 0x70;
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 0x70;
        } while (uVar1 < *(*0x20218 + 0x716));
    }
    return NULL;
}


/* fcn.0001975c @ 0x1975c */

ulong fcn.0001975c(uint32_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    ushort *puVar6;
    ulong uVar7;
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t iVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    ulong *puStackX_10;
    int64_t var_28h;
    uchar auStack_38 [16];
    int64_t var_bp_20h;
    
    iVar8 = CONCAT44(in_register_00000014,arg2);
    if ((((*(iVar8 + 0xa0) & 1) != 0) || ((**0x20218 & 0x2000) == 0)) ||
       (((**0x20218 & 0x4000) != 0 && (*(iVar8 + 0x58) == '\x04')))) {
        uVar1 = *(*0x20218 + 0x716);
        uVar10 = 1;
        if (1 < uVar1) {
            do {
                uVar9 = uVar10;
                if (uVar10 * 0x1c0 + *(*0x20240 + 0x42) == iVar8) break;
                uVar9 = uVar9 + 1;
                uVar10 = uVar9;
            } while (uVar9 < uVar1);
            if (uVar9 < uVar1) {
                (**(*0x202a8 + 0x168))(*0x20248,0x1f);
                puVar6 = *0x20248;
                **0x20248 = 0xa27;
                *(puVar6 + 3) = uVar9;
                *(puVar6 + 2) = 0;
                fcn.00013be0();
                (**(*0x202a8 + 0x40))(4,0xa0,&puStackX_10);
                *puStackX_10 = 0x73616d75;
                puStackX_10[0xe] = iVar8;
                puStackX_10[0x10] = CONCAT44(in_register_0000000c,arg1);
                puStackX_10[0x12] = iVar8 + 0xb8;
                *(puStackX_10 + 0x13) = *(iVar8 + 0x4c);
                (**(*0x202a8 + 0x40))(4,0x30,puStackX_10 + 0xd);
                *puStackX_10[0xd] = 0;
                *(puStackX_10[0xd] + 6) = 0;
                if (*(puStackX_10 + 0x13) == '\x02') {
                    *(puStackX_10[0xd] + 7) = 1;
                }
                else {
                    *(puStackX_10[0xd] + 7) = 0;
                }
                *(puStackX_10[0xd] + 8) = 0;
                *(puStackX_10[0xd] + 0xc) = *(iVar8 + 0x5e);
                *(puStackX_10[0xd] + 0x10) = 0;
                if ((*(iVar8 + 0xa0) & 8) == 0) {
                    *(puStackX_10[0xd] + 4) = 0;
                }
                else {
                    *(puStackX_10[0xd] + 4) = 1;
                }
                if ((((*(iVar8 + 0xa0) & 1) == 0) || (*(iVar8 + 0x60) == 0)) || (*(iVar8 + 0x5e) == 0)) {
                    *(puStackX_10[0xd] + 0x18) = 0;
                    *(puStackX_10[0xd] + 5) = 0;
                }
                else {
                    *(puStackX_10[0xd] + 0x18) = *(iVar8 + 0x60) + -1;
                    *(puStackX_10[0xd] + 5) = 1;
                }
                if (*(*0x202a0 + 8) < 0x2001f) {
                    puStackX_10[1] = 1;
                }
                else {
                    puStackX_10[1] = "Already started";
                    *(puStackX_10[0xd] + 0x28) = 1;
                    *(puStackX_10[0xd] + 0x20) = 0;
                    *(puStackX_10[0xd] + 0x2c) = *(puStackX_10[0xd] + 0xc);
                }
                uVar5 = *0x1f87c;
                uVar4 = *0x1f878;
                uVar3 = *0x1f874;
                uVar2 = *0x1f870;
                puStackX_10[2] = puStackX_10[0xd];
                puStackX_10[3] = 0x13b68;
                puStackX_10[4] = 0x1a0d4;
                puStackX_10[5] = 0x1a158;
                puStackX_10[6] = 0x13b68;
                *(puStackX_10 + 7) = uVar2;
                *(puStackX_10 + 0x3c) = uVar3;
                *(puStackX_10 + 8) = uVar4;
                *(puStackX_10 + 0x44) = uVar5;
                puStackX_10[9] = 0x19ae8;
                puStackX_10[10] = 0x19b98;
                puStackX_10[0xb] = 0x19c64;
                puStackX_10[0xc] = 0x13b5c;
                *(puStackX_10 + 0xf) = uVar9;
                *(puStackX_10 + 0x11) = *(*(*0x20348 + (*(iVar8 + 0xb) - 1) * 8) + 0x2a);
                uVar7 = (**(*0x202a8 + 0x148))
                                  (puStackX_10 + 0x10,0x1ea20,puStackX_10 + 1,0x1e840,puStackX_10 + 7,0);
                fcn.0001ceb0(auStack_38,0x1e,0x1fb38,*(iVar8 + 6));
                fcn.0001ceb0(auStack_38,0x1e,0x1fb68,*(iVar8 + 6));
                return uVar7;
            }
        }
    }
    return 0x8000000000000007;
}


/* fcn.00018d40 @ 0x18d40 */

ulong fcn.00018d40(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar2 = (**(*0x202a8 + 0x118))(arg1,str.Rt_,0,*0x1eb98,arg1,4);
    if ((iVar2 == 0) || (iVar2 == -0x7fffffffffffffec)) {
        if (arg2 == 0) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            iVar2 = (**(*0x202a8 + 0x98))(arg2,0x1e980,aiStackX_18);
        }
    }
    else {
        iVar2 = (**(*0x202a8 + 0x118))(arg1,0x1e980,aiStackX_18,*0x1eb98,arg1,2);
    }
    iVar1 = aiStackX_18[0];
    if ((iVar2 < 0) || (aiStackX_18[0] == 0)) {
        uVar3 = 0;
    }
    else {
        if (*(aiStackX_18[0] + -0xb8) == 0) {
            uVar3 = fcn.000179fc(aiStackX_18[0] + -0xe8);
            *(iVar1 + -0xb8) = uVar3;
        }
        uVar3 = *(iVar1 + -0xb8);
    }
    return uVar3;
}


/* fcn.0001bafc @ 0x1bafc */

//WARNING: Variable defined which should be unmapped: var_bp_28h

int64_t fcn.0001bafc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,ulong noname_5,
                    int64_t arg_40h)

{
    int64_t *arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_20h;
    int64_t var_bp_28h;
    int64_t var_30h;
    uchar auStack_38 [16];
    int64_t var_20h_2;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    var_20h = arg3;
    fcn.0001e0ac(1,0x1010000);
    iVar1 = (**(*0x202a8 + 0x40))(4,0xd0);
    if (-1 < iVar1) {
        fcn.000102e0(var_20h,0xd0,0);
        iVar1 = var_20h;
        iStackX_8 = 0;
        *var_20h = 0x64626b75;
        *(var_20h + 0x90) = var_30h;
        *(var_20h + 0x98) = arg4;
        arg1_00 = var_20h + 0xb8;
        if ((arg1_00 != NULL) && (iVar2 = (**(*0x202a8 + 0x40))(4,0x380,&iStackX_8), -1 < iVar2)) {
            *arg1_00 = iStackX_8;
            *(iVar1 + 0xc2) = 0x20;
            *(iVar1 + 0xc4) = 0x14;
            fcn.0001b194(arg1_00);
        }
        (**(*0x202a8 + 0x50))(0x80000200,0x10,0x1b914,var_20h,var_20h + 0xa0);
        (**(*0x202a8 + 0x50))(0x80000200,0x10,0x1b820,var_20h,var_20h + 0xa8);
        fcn.0001b2a8(var_20h);
        (**(*0x202a8 + 0x58))(*(var_20h + 0xa0),1,100000);
        *(var_20h + 8) = 0x1c1e4;
        *(var_20h + 0x10) = 0x1c260;
        (**(*0x202a8 + 0x50))(0x100,0x10,0x1c7fc,var_20h,var_20h + 0x18);
        *(var_20h + 0x20) = 0x1c338;
        *(var_20h + 0x28) = 0x1c344;
        *(var_20h + 0x38) = 0x1c414;
        *(var_20h + 0x40) = 0x1c4a4;
        *(var_20h + 0x48) = 0x1c644;
        *(var_20h + 0x50) = 0x1c7bc;
        *(var_20h + 0x58) = 0x1c6f0;
        *(var_20h + 0x68) = 0x1c7c8;
        *(var_20h + 0x70) = 0x1c7e4;
        *(var_20h + 0x78) = 0x1c7f0;
        iVar1 = var_20h + 0x80;
        *iVar1 = iVar1;
        *(var_20h + 0x88) = iVar1;
        (**(*0x202a8 + 0x50))(0x100,0x10,0x1c7fc,var_20h,var_20h + 0x30);
        (**(*0x202a8 + 0x50))(0x100,0x10,0x1c7fc,var_20h,var_20h + 0x60);
        if ((*(*0x20218 + 0x6c9) & 0x2000000) != 0) {
            fcn.0001dfe0(0x10,0x1b9bc,var_20h,var_20h + 0xb0);
        }
        iVar1 = (**(*0x202a8 + 0x148))
                          (&iStackX_10,0x1e970,var_20h + 8,0x1e960,var_20h + 0x20,0x1e9b0,var_20h + 0x50,0);
        fcn.0001ceb0(auStack_38,0x1e,0x1fc98,*(arg4 + 6));
        fcn.0001ceb0(auStack_38,0x1e,0x1fcc8,*(arg4 + 6));
        if (iVar1 == 0) {
            return 0;
        }
    }
    fcn.0001e0ac(0x40000002,0x1010006);
    return iVar1;
}


/* fcn.0001acd4 @ 0x1acd4 */

void fcn.0001acd4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t var_28h;
    int64_t var_bp_20h;
    
    iStackX_8 = arg1;
    iVar1 = (**(*0x202a8 + 0x40))(4);
    if (-1 < iVar1) {
        fcn.0001e0ac(1,0x1020000);
        fcn.000102e0(var_28h,0x70,0);
        *var_28h = 0x756f6d75;
        *(var_28h + 0x28) = 0x1af90;
        *(var_28h + 0x20) = fcn.0001af40;
        *(var_28h + 0x38) = var_28h + 0x40;
        *(var_28h + 8) = 2;
        *(var_28h + 0x14) = 0x7f;
        *(var_28h + 0xc) = 0x7f;
        *(var_28h + 0x18) = 0xffffff81;
        *(var_28h + 0x10) = 0xffffff81;
        *(var_28h + 0x58) = 1;
        *(var_28h + 0x59) = 1;
        *(var_28h + 0x40) = 8;
        *(var_28h + 0x48) = 8;
        *(var_28h + 0x50) = 1;
        *(var_28h + 0x68) = arg2;
        *(var_28h + 0x60) = *(arg3 + 0x50);
        fcn.0001af40(0,0);
        fcn.0001e0ac(1,0x1020003);
        (**(*0x202a8 + 0x50))(0x100,0x10,0x1b168,var_28h,var_28h + 0x30);
        (**(*0x202a8 + 0x80))(&iStackX_8,0x1e8e0,0,var_28h + 0x20);
        fcn.0001ceb0(&var_bp_20h,0x1e,0x1fc48,*(arg3 + 6));
        fcn.0001ceb0(&var_bp_20h,0x1e,0x1fc70,*(arg3 + 6));
        fcn.0001e0ac(1,0x1020004);
    }
    return;
}


/* fcn.0001af40 @ 0x1af40 */

ulong fcn.0001af40(void)

{
    fcn.0001e0ac(1,0x1020001);
    fcn.000102e0(0x202f0,0x10,0);
    *0x20301 = 0;
    fcn.000102e0(*0x20218 + 0x687,0xd,0);
    return 0;
}


/* fcn.0001c90c @ 0x1c90c */

int64_t fcn.0001c90c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong *puStackX_18;
    int64_t var_30h;
    uchar auStack_38 [16];
    int64_t var_bp_20h;
    
    iStackX_8 = arg1;
    iVar1 = (**(*0x202a8 + 0x40))(4,0x90);
    if (-1 < iVar1) {
        fcn.000102e0(puStackX_18,0x90,0);
        *puStackX_18 = 0x73626175;
        puStackX_18[2] = 0x1cb3c;
        puStackX_18[1] = 0x1caac;
        puStackX_18[4] = puStackX_18 + 9;
        *(puStackX_18 + 0xf) = 2;
        puStackX_18[9] = 0;
        puStackX_18[10] = 0;
        puStackX_18[0xb] = 0;
        puStackX_18[0xc] = *(arg2 + 0x112);
        puStackX_18[0xd] = *(arg2 + 0x114);
        puStackX_18[0xe] = 0;
        puStackX_18[0x11] = arg2;
        fcn.000102e0(puStackX_18 + 5,0x20,0);
        fcn.000102e0(arg2 + 0x158,0xe,0);
        *(puStackX_18 + 0x10) = 0;
        (**(*0x202a8 + 0x50))(0x100,0x10,0x1cc68,puStackX_18,puStackX_18 + 3);
        iVar1 = (**(*0x202a8 + 0x80))(&iStackX_8,0x1ea50,0,puStackX_18 + 1);
        fcn.0001ceb0(auStack_38,0x1e,0x1fcf8,*(arg2 + 6));
        fcn.0001ceb0(auStack_38,0x1e,0x1fd28,*(arg2 + 6));
    }
    return iVar1;
}


/* fcn.0001be6c @ 0x1be6c */

int64_t fcn.0001be6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong uStackX_18;
    int64_t iStackX_20;
    
    uStackX_18 = 0;
    iStackX_20 = 0;
    iVar3 = (**(*0x202a8 + 0x118))(arg2,0x1e970,&uStackX_18,*(arg1 + 0x28),arg2,2);
    if (-1 < iVar3) {
        iVar3 = (**(*0x202a8 + 0x118))(arg2,0x1e960,&iStackX_20,*(arg1 + 0x28),arg2,2);
        if (-1 < iVar3) {
            fcn.0001e0ac(1,0x1010002);
            iVar2 = iStackX_20;
            (**(*0x202a8 + 0x58))(*(iStackX_20 + 0x80),0,0);
            (**(*0x202a8 + 0x58))(*(iVar2 + 0x88),0,0);
            iVar3 = (**(*0x202a8 + 0x150))(arg2,0x1e970,iVar2 + -0x18,0x1e960,iVar2,0x1e9b0,iVar2 + 0x30,0);
            if (-1 < iVar3) {
                (**(*0x202a8 + 0x70))(*(iVar2 + 0x80));
                (**(*0x202a8 + 0x70))(*(iVar2 + 0x88));
                (**(*0x202a8 + 0x70))(*(iVar2 + -8));
                (**(*0x202a8 + 0x70))(*(iVar2 + 0x10));
                (**(*0x202a8 + 0x70))(*(iVar2 + 0x40));
                piVar4 = *(iVar2 + 0x60);
                while (piVar4 != iVar2 + 0x60) {
                    *(*piVar4 + 8) = piVar4[1];
                    *piVar4[1] = *piVar4;
                    piVar1 = *piVar4;
                    (**(*0x202a8 + 0x70))(piVar4[5]);
                    (**(*0x202a8 + 0x48))(piVar4);
                    piVar4 = piVar1;
                }
                if ((*(*0x20218 + 0x6c9) & 0x2000000) != 0) {
                    (**(*0x202a8 + 0x70))(*(iVar2 + 0x90));
                }
                piVar4 = iVar2 + 0x98;
                if ((piVar4 != NULL) && (*piVar4 != 0)) {
                    (**(*0x202a8 + 0x48))();
                    fcn.000102e0(piVar4,0x10,0);
                }
                (**(*0x202a8 + 0x48))(iVar2 + -0x20);
            }
        }
    }
    return iVar3;
}


/* fcn.0001ae98 @ 0x1ae98 */

int64_t fcn.0001ae98(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_20;
    
    iStackX_20 = arg3;
    iVar2 = (**(*0x202a8 + 0x118))(arg2,0x1e8e0,&iStackX_20,*(arg1 + 0x28),arg2,2);
    if (-1 < iVar2) {
        fcn.0001e0ac(1,0x1020002);
        iVar1 = iStackX_20;
        iVar2 = (**(*0x202a8 + 0x90))(arg2,0x1e8e0,iStackX_20);
        if (-1 < iVar2) {
            iVar2 = (**(*0x202a8 + 0x70))(*(iVar1 + 0x10));
            if (-1 < iVar2) {
                (**(*0x202a8 + 0x48))(iVar1 + -0x20);
            }
        }
    }
    return iVar2;
}


/* fcn.0001aff8 @ 0x1aff8 */

ulong fcn.0001aff8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint32_t *puVar7;
    uint8_t uVar8;
    uchar uStackX_18;
    char cStackX_19;
    char cStackX_1a;
    uchar auStackX_20 [8];
    ulong auStack_18 [2];
    
    puVar7 = *0x20218;
    if (((**0x20218 & 0x8000) != 0) && (arg1 != 0)) {
        auStack_18[0] = 4;
        iVar5 = (**(*(arg1 + 0x48) + 0x18))
                          (*(arg1 + 0x48),CONCAT71(arg2 >> 8,*(arg1 + 0x40)) | 0x80,&uStackX_18,auStack_18,0,
                           auStackX_20);
        puVar7 = *0x20218;
        if (iVar5 < 0) {
            return 0x8000000000000007;
        }
        *(*0x20218 + 0x687) = uStackX_18;
        puVar7[0x1a2] = puVar7[0x1a2] + cStackX_19;
        puVar7[0x1a3] = puVar7[0x1a3] + cStackX_1a;
    }
    uVar6 = *(puVar7 + 0x687);
    uVar1 = puVar7[0x1a4];
    uVar4 = uVar6 & 7;
    uVar2 = puVar7[0x1a2];
    uVar3 = puVar7[0x1a3];
    uVar8 = uVar6 & 1;
    uVar6 = (uVar6 & 7) >> 1 & 1;
    if (*0x20301 == '\0') {
        if ((((uVar2 == 0) && (uVar3 == 0)) && (-uVar1 == 0)) && (uVar4 == *0x20300)) {
            return 0x8000000000000006;
        }
        *0x20301 = '\x01';
    }
    puVar7[0x1a2] = 0;
    puVar7[0x1a3] = 0;
    puVar7[0x1a4] = 0;
    *0x202f0 = *0x202f0 + uVar2;
    *0x202f4 = *0x202f4 + uVar3;
    *0x202f8 = *0x202f8 + -uVar1;
    *0x202fc = uVar8;
    *0x202fd = uVar6;
    *0x20300 = uVar4;
    if (arg2 != 0) {
        if (arg2 != 0x202f0) {
            section..text(arg2,0x202f0,0x10);
        }
        *0x202f0 = 0;
        *0x202f4 = 0;
        *0x202f8 = 0;
        *0x20301 = '\0';
    }
    return 0;
}


/* fcn.0001b2a8 @ 0x1b2a8 */

ulong fcn.0001b2a8(int64_t arg1)

{
    ushort *puVar1;
    uint8_t auStackX_8 [32];
    
    fcn.000102e0(auStackX_8,1,0);
    auStackX_8[0] = auStackX_8[0] ^ (*(arg1 + 0xcc) ^ auStackX_8[0]) & 7;
    (**(*0x202a8 + 0x168))(*0x20248,0x1f);
    puVar1 = *0x20248;
    *(*0x20248 + 3) = auStackX_8;
    *(puVar1 + 0xb) = *(arg1 + 0x98);
    *puVar1 = 0x2b;
    fcn.00013be0();
    return 0;
}


/* fcn.0001b258 @ 0x1b258 */

void fcn.0001b258(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if ((*arg1 != 0) && (*(arg1 + 9) != *(arg1 + 8))) {
        iVar1 = *(*arg1 + *(arg1 + 9) * 8);
        if ((*(arg1 + 0xc) != 0) && (arg2 != iVar1)) {
            section..text(arg2,iVar1,*(arg1 + 0xc));
        }
        *(arg1 + 9) = (*(arg1 + 9) + 1) % *(arg1 + 10);
    }
    return;
}


/* fcn.0001b320 @ 0x1b320 */

//WARNING: Variable defined which should be unmapped: var_fh

ulong fcn.0001b320(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    int16_t iStack_38;
    int16_t iStack_36;
    uint32_t uStack_34;
    uint8_t uStack_30;
    int iStack_2c;
    uint32_t var_20h;
    int32_t var_1ch;
    int8_t var_bp_18h;
    uint32_t var_14h;
    int8_t var_fh;
    
    fcn.000102e0(&iStack_38,0x14,0);
    uVar5 = 0;
    uVar7 = 0;
    while( true ) {
        iVar3 = uVar7 * 0x18;
        if (*(iVar3 + 0x1ec70) == *arg2) break;
        uVar6 = uVar7 + 1;
        uVar7 = uVar6;
        if (0x7e < uVar6) {
            return 0x8000000000000006;
        }
    }
    if (iVar3 + 0x1ec70 == NULL) {
        return 0x8000000000000006;
    }
    uVar6 = *(arg1 + 0xcd);
    uVar1 = *(iVar3 + 0x1ec84);
    if (*(arg2 + 1) != '\0') {
        *(arg1 + 200) = *(arg1 + 200) | *(iVar3 + 0x1ec80);
        *(arg1 + 0xcd) = *(iVar3 + 0x1ec84) | uVar6;
        uVar6 = uVar1 & uVar6 ^ *(iVar3 + 0x1ec84);
        if (uVar6 != 0) {
            *(arg1 + 0xcc) = *(arg1 + 0xcc) ^ uVar6;
            fcn.0001b2a8(arg1);
        }
        iStack_2c = *(iVar3 + 0x1ec78);
        uVar2 = *(arg1 + 200);
        uVar6 = *(arg1 + 0xcc);
        iStack_38 = *(iVar3 + 0x1ec72);
        iStack_36 = *(iVar3 + 0x1ec74);
        var_20h._1_1_ = *(iVar3 + 0x1ec7c);
        uStack_34 = uVar2 | 0x80000000;
        uStack_30 = uVar6 | 0x80;
        if ((uVar2 & 3) != 0) {
            iStack_36 = *(iVar3 + 0x1ec76);
        }
        if ((uVar6 & 4) != 0) {
            if (iStack_36 - 0x61U < 0x1a) {
                iStack_36 = *(iVar3 + 0x1ec76);
            }
            else if (iStack_36 - 0x41U < 0x1a) {
                iStack_36 = *(iVar3 + 0x1ec74);
            }
        }
        if (((uVar2 & 0xc) != 0 && (uVar2 & 0x30) != 0) && (iStack_38 == 8)) {
            iStack_36 = 0;
        }
        if ((iStack_38 != 0) && (iStack_36 != 0)) {
            if ((uVar6 & 2) == 0) {
                iStack_36 = 0;
            }
            else {
                iStack_38 = 0;
            }
        }
        if ((*0x202e0 == NULL) && (iVar4 = (**(*0x202a8 + 0x140))(0x1ea00,0,0x202e0), iVar4 < 0)) {
            iVar4 = -0x7ffffffffffffff2;
        }
        else {
            iVar4 = (***0x202e0)(*0x202e0,&iStack_38);
        }
        uVar6 = *(arg1 + 0xcc) & 2;
        if ((uVar6 == 0) && (iStack_2c == 0x2d)) {
            iStack_36 = 0;
        }
        if ((((*(arg1 + 200) & 3) != 0) && (*(iVar3 + 0x1ec76) != *(iVar3 + 0x1ec74))) &&
           ((*(iVar3 + 0x1ec72) == 0 || (uVar6 != 0)))) {
            uStack_34 = uStack_34 & 0xfffffffc;
        }
        if ((((iStack_38 == 0) && (iStack_36 == 0)) && (*(iVar3 + 0x1ec84) == '\0')) &&
           (((uStack_34 & 0x7fffffff) != 0 && ((uStack_30 & 0x40) == 0)))) {
            *(arg1 + 0xce) = 0;
            return 0x8000000000000003;
        }
        if (arg3 != &iStack_38) {
            section..text(arg3,&iStack_38,0x14);
        }
        if (iVar4 == 5) {
            uVar5 = 5;
        }
        return uVar5;
    }
    *(arg1 + 200) = *(arg1 + 200) & ~*(iVar3 + 0x1ec80);
    *(arg1 + 0xcd) = ~*(iVar3 + 0x1ec84) & uVar6;
    return 0x8000000000000006;
}


/* fcn.0001b59c @ 0x1b59c */

ulong fcn.0001b59c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong *puVar2;
    
    for (puVar2 = *(arg1 + 0x80); puVar2 != arg1 + 0x80; puVar2 = *puVar2) {
        if (((puVar2 + 2 != NULL) && (arg2 != 0)) &&
           (((iVar1 = *(puVar2 + 2), iVar1 == 0 &&
             (((*(puVar2 + 0x12) == 0 && (*(puVar2 + 0x14) == 0)) && (*(puVar2 + 3) == '\0')))) ||
            ((((iVar1 == *arg2 && (*(puVar2 + 0x12) == *(arg2 + 2))) &&
              ((-1 < *(puVar2 + 0x14) || (*(puVar2 + 0x14) == *(arg2 + 4))))) &&
             ((-1 < *(puVar2 + 3) || (((*(arg2 + 8) ^ *(puVar2 + 3)) & 0x87) == 0)))))))) {
            if (puVar2 + 6 != arg2) {
                section..text(puVar2 + 6,arg2,0xc);
            }
            (**(*0x202a8 + 0x68))(puVar2[5]);
        }
    }
    return 0;
}


/* fcn.0001b204 @ 0x1b204 */

void fcn.0001b204(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    uint in_register_00000014;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar3 != 0) {
        iVar1 = *(*piVar3 + *(piVar3 + 1) * 8);
        if ((*(piVar3 + 0xc) != 0) && (iVar1 != CONCAT44(in_register_00000014,arg2))) {
            section..text(iVar1,arg2,*(piVar3 + 0xc));
        }
        cVar2 = (*(piVar3 + 1) + 1) % *(piVar3 + 10);
        *(piVar3 + 1) = cVar2;
        if (cVar2 == *(piVar3 + 9)) {
            *(piVar3 + 9) = (*(piVar3 + 9) + 1) % *(piVar3 + 10);
        }
    }
    return;
}


/* fcn.0001b194 @ 0x1b194 */

void fcn.0001b194(int64_t arg1)

{
    int64_t noname_1;
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    if ((arg1 != 0) && (iVar3 = *arg1, iVar3 != 0)) {
        noname_1 = *(arg1 + 10) * *(arg1 + 0xc) + *(arg1 + 10) * 8;
        if (noname_1 != 0) {
            fcn.000102e0(iVar3,noname_1,0);
        }
        uVar2 = 0;
        iVar3 = iVar3 + *(arg1 + 10) * 8;
        if (*(arg1 + 10) != 0) {
            do {
                *(*arg1 + uVar2 * 8) = iVar3;
                uVar1 = uVar2 + 1;
                uVar2 = uVar1;
                iVar3 = iVar3 + *(arg1 + 0xc);
            } while (uVar1 < *(arg1 + 10));
        }
        *(arg1 + 8) = 0;
    }
    return;
}


/* fcn.0001b924 @ 0x1b924 */

void fcn.0001b924(int64_t arg1)

{
    (**(*0x202a8 + 0x58))(*(arg1 + 0xa0),0,0);
    (**(*0x202a8 + 0x58))(*(arg1 + 0xa8),0,0);
    *(arg1 + 0xcd) = 0;
    *(arg1 + 200) = 0;
    fcn.0001b194(*(arg1 + 0x98) + 0x138);
    fcn.0001b194(*(arg1 + 0x98) + 0x148);
    fcn.0001b194(arg1 + 0xb8);
    //WARNING: Could not recover jumptable at 0x0001b9b8. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x202a8 + 0x58))(*(arg1 + 0xa0),1,100000);
    return;
}


/* fcn.0001b660 @ 0x1b660 */

int64_t fcn.0001b660(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    char cStackX_10;
    char cStackX_11;
    int64_t var_28h;
    uchar auStack_38 [16];
    int64_t var_20h;
    
    iVar3 = -0x7ffffffffffffffa;
    if (*0x20299 == '\0') {
        fcn.000102e0(&cStackX_10,2,0);
        fcn.000102e0(auStack_38,0x14,0);
        *0x20299 = 1;
        if (*(*(arg1 + 0x98) + 0x151) != *(*(arg1 + 0x98) + 0x150)) {
            do {
                iVar3 = *(arg1 + 0x98) + 0x148;
                if (iVar3 != 0) {
                    fcn.0001b258(iVar3,&cStackX_10);
                }
                if ((cStackX_11 == '\0') && (*(arg1 + 0xce) == cStackX_10)) {
                    *(arg1 + 0xce) = 0;
                }
                iVar3 = fcn.0001b320(arg1,&cStackX_10,auStack_38);
                if ((-1 < iVar3) || (iVar3 == 5)) {
                    fcn.0001b59c(arg1,auStack_38);
                    iVar1 = arg1 + 0xb8;
                    if (iVar1 != 0) {
                        fcn.0001b204(iVar1,auStack_38);
                    }
                    *(arg1 + 0xce) = cStackX_10;
                    if (iVar3 == 5) {
                        iVar3 = fcn.0001b320(arg1,&cStackX_10,auStack_38);
                        if (-1 < iVar3) {
                            fcn.0001b59c(arg1,auStack_38);
                            if (iVar1 != 0) {
                                fcn.0001b204(iVar1,auStack_38);
                            }
                            *(arg1 + 0xce) = cStackX_10;
                        }
                    }
                }
            } while (*(*(arg1 + 0x98) + 0x151) != *(*(arg1 + 0x98) + 0x150));
            if (*(arg1 + 0xce) != '\0') {
                puVar2 = arg1 + 0xa8;
                (**(*0x202a8 + 0x70))(*puVar2);
                (**(*0x202a8 + 0x50))(0x80000200,0x10,0x1b820,arg1,puVar2);
                (**(*0x202a8 + 0x58))(*puVar2,2,5000000);
            }
        }
        *0x20299 = '\0';
    }
    return iVar3;
}


/* fcn.0001ba44 @ 0x1ba44 */

ulong fcn.0001ba44(int64_t arg1)

{
    fcn.0001e0ac(1,0x1011001);
    (**(*0x202a8 + 0x58))(*(arg1 + 0xa0),0,0);
    (**(*0x202a8 + 0x58))(*(arg1 + 0xa8),0,0);
    *(arg1 + 0xcd) = 0;
    *(arg1 + 200) = 0;
    *(arg1 + 0xcc) = 0;
    fcn.0001b2a8(arg1);
    fcn.0001b194(*(arg1 + 0x98) + 0x138);
    fcn.0001b194(*(arg1 + 0x98) + 0x148);
    fcn.0001b194(arg1 + 0xb8);
    (**(*0x202a8 + 0x58))(*(arg1 + 0xa0),1,100000);
    return 0;
}


/* fcn.0001c090 @ 0x1c090 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.0001c090(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int16_t iStack_38;
    int16_t iStack_36;
    uint32_t uStack_34;
    uint8_t uStack_30;
    int64_t var_20h;
    int8_t var_18h;
    int8_t var_10h;
    int8_t var_eh;
    
    *0x20298 = 1;
    if ((**(arg1 + 0x98) & 2) == 0) {
        *0x20298 = 0;
        return 0x8000000000000007;
    }
    fcn.000102e0(&iStack_38,0x14,0);
    if ((*(arg1 + 0xc1) == *(arg1 + 0xc0)) && (iVar1 = fcn.0001b660(arg1), iVar1 < 0)) {
        if (*(arg1 + 200) == 0) {
            *0x20298 = 0;
            return 0x8000000000000006;
        }
        if (((*(arg1 + 0xc1) == *(arg1 + 0xc0)) && (iStack_36 == 0)) && (iStack_38 == 0)) {
            *0x20298 = 0;
            return 0x8000000000000006;
        }
        uStack_34 = *(arg1 + 200) | 0x80000000;
    }
    else {
        if (arg1 + 0xb8 != 0) {
            fcn.0001b258(arg1 + 0xb8,&iStack_38);
        }
        var_20h._0_1_ = 1;
        var_20h._2_1_ = 1;
    }
    uStack_30 = *(arg1 + 0xcc) | 0x80;
    if (((iStack_36 == 0) && (iStack_38 == 0)) && (((uStack_34 & 0x7fffffff) != 0 && ((*(arg1 + 0xcc) & 0x40) == 0)))) {
        uVar2 = 0x8000000000000003;
    }
    else {
        uVar2 = 0;
        if ((arg3 != '\0') && (arg2 != &iStack_38)) {
            section..text(arg2,&iStack_38,arg3 & 0xff);
            uVar2 = 0;
        }
    }
    *0x20298 = 0;
    return uVar2;
}


/* fcn.0001cdf4 @ 0x1cdf4 */

uint64_t fcn.0001cdf4(uint32_t arg1,int64_t arg2)

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


/* fcn.0001cdc8 @ 0x1cdc8 */

uint64_t fcn.0001cdc8(uint32_t arg1)

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


/* fcn.0001dc80 @ 0x1dc80 */

void fcn.0001dc80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001cf10(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001cedc @ 0x1cedc */

uchar * fcn.0001cedc(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001dec0 @ 0x1dec0 */

bool fcn.0001dec0(uint32_t arg1)

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


/* fcn.0001dd1c @ 0x1dd1c */

int64_t fcn.0001dd1c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t iVar3;
    
    if (arg1 == 0) {
        arg1 = 0x20160;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.0001dec0(arg1);
        if (cVar1 != '\0') {
            cVar1 = fcn.0001dec0(arg2);
            if (cVar1 != '\0') {
                iVar2 = fcn.0001dca4(arg1);
                arg3 = fcn.0001dca4(arg2);
                iVar3 = fcn.0001e7ac();
                if (iVar3 == 0) {
                    return 0;
                }
                if ((iVar2 != 0) && (iVar3 != arg1)) {
                    iVar3 = section..text(iVar3,arg1,iVar2);
                }
                iVar2 = iVar2 + -4 + iVar3;
                if (arg3 == 0) {
                    return iVar3;
                }
                if (iVar2 == arg2) {
                    return iVar3;
                }
                section..text(iVar2,arg2,arg3);
                return iVar3;
            }
        }
        return 0;
    }
    iVar2 = fcn.0001dcf4(arg1);
    return iVar2;
}


