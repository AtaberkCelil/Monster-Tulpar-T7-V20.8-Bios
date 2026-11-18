// decompiled by r2ghidra: 1870_CsmVideo.pe32
// functions: 33

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001037c(arg1,arg2);
    fcn.00010444(arg1,arg2);
    return;
}


/* fcn.0001037c @ 0x1037c */

void fcn.0001037c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x14078 = *(arg1 + 0x60);
    *0x14070 = arg1;
    fcn.000139ec();
    puVar4 = fcn.000139ec();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010300();
                }
                fcn.00010310(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010330();
                }
                else {
                    fcn.00010320();
                }
                return;
            }
            if ((*0x13f18 == *(puVar4 + 4)) && (*0x13f20 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010444 @ 0x10444 */

void fcn.00010444(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    if (*0x140a0 == 0) {
        *0x14090 = *(arg2 + 0x60);
        *0x14098 = *(arg2 + 0x58);
        *0x140a0 = arg2;
    }
    *0x13de8 = arg1;
    *0x13df0 = arg1;
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x14090 + 0x148))(0x13df0,0x13d00,0x13dc8,0x13d20,0x13f00,0x13d10,0,0);
    if (-1 < iVar1) {
        if (*0x140a0 == 0) {
            *0x14090 = *(arg2 + 0x60);
            *0x14098 = *(arg2 + 0x58);
            *0x140a0 = arg2;
        }
        *0x13e20 = 0;
        *0x13e18 = 0;
        (**(*0x14090 + 0x148))(0x13e20,0x13d00,0x13df8,0);
        (**(*0x14090 + 0x148))(aiStackX_8,0x13c80,0x13db8,0);
    }
    return;
}


/* fcn.000139ec @ 0x139ec */

int64_t fcn.000139ec(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14088 == 0) {
        *0x14088 = 0;
        if (*(*0x14070 + 0x68) != 0) {
            piVar2 = *(*0x14070 + 0x70);
            do {
                if ((*0x13cf0 == *piVar2) && (*0x13cf8 == piVar2[1])) {
                    *0x14088 = (*(*0x14070 + 0x70))[uVar1 * 3 + 2];
                    return *0x14088;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14070 + 0x68));
        }
    }
    return *0x14088;
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


/* fcn.00013600 @ 0x13600 */

ulong fcn.00013600(ulong noname_0,ulong noname_1,int64_t arg1)

{
    uint64_t arg3;
    uint64_t uVar1;
    ulong uVar2;
    ushort *puStackX_20;
    ushort auStack_218 [264];
    
    arg3 = fcn.000137d0(arg1);
    if (arg3 < 0x1ed) {
        puStackX_20 = auStack_218;
code_r0x000136be:
        *puStackX_20 = 0x14;
        puStackX_20[1] = arg3;
        *(puStackX_20 + 2) = *0x13c40;
        *(puStackX_20 + 6) = *0x13c48;
        if (((arg1 != 0) && (arg3 != 0)) && (puStackX_20 + 10 != arg1)) {
            section..text(puStackX_20 + 10,arg1,arg3);
        }
        uVar2 = fcn.0001356c(0x13d30);
        if (puStackX_20 != auStack_218) {
            (**(*0x14078 + 0x48))();
        }
    }
    else {
        if (((*0x14078 == 0) || (*(*0x14078 + 0x40) == 0)) || (*(*0x14078 + 0x48) == 0)) {
            return 0x8000000000000003;
        }
        uVar1 = (**(*0x14078 + 0x18))(0x1f);
        (**(*0x14078 + 0x20))(uVar1);
        if (uVar1 < 0x11) {
            puStackX_20 = NULL;
            (**(*0x14078 + 0x40))(4,arg3 + 0x14,&puStackX_20);
            if (puStackX_20 != NULL) goto code_r0x000136be;
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.00010be0 @ 0x10be0 */

int64_t fcn.00010be0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    bool bVar3;
    int64_t in_stack_00000028;
    uint *in_stack_00000030;
    ulong in_stack_00000038;
    uint uVar4;
    ulong *puStack_68;
    uint uStack_60;
    uint uStack_5c;
    uchar auStack_58 [9];
    char cStack_4f;
    char cStack_4e;
    char cStack_4d;
    
    iVar1 = (**(*0x14090 + 0x40))(4,0x108,&puStack_68);
    if (iVar1 < 0) goto code_r0x00010f3d;
    (**(*0x14090 + 0x168))(puStack_68,0x108,0);
    uVar2 = 2;
    noname_0 = arg3;
    iVar1 = (**(arg3 + 0x30))(arg3,2,0,0x10,auStack_58);
    if (iVar1 < 0) {
        fcn.00013600(noname_0,uVar2,in_stack_00000028);
    }
    else {
        *(puStack_68 + 0x11) = 0;
        if (cStack_4d == '\0') {
            if (cStack_4e == '\x01') {
                *(puStack_68 + 0x11) = 1;
                goto code_r0x00010ca7;
            }
        }
        else {
code_r0x00010ca7:
            if (((cStack_4d == '\x03') && (cStack_4e == '\0')) && (cStack_4f == '\0')) {
                *(puStack_68 + 0x11) = 1;
            }
        }
        bVar3 = *0x13fe0 == '\0';
        *puStack_68 = 0x704d5642;
        puStack_68[1] = 0;
        *(puStack_68 + 0x8a) = 1;
        puStack_68[0x12] = 0;
        puStack_68[0x13] = 0;
        puStack_68[0x15] = 0;
        puStack_68[0x14] = 0;
        *(puStack_68 + 0x89) = 1;
        puStack_68[3] = arg4;
        puStack_68[2] = arg3;
        puStack_68[0x1f] = in_stack_00000038;
        *(puStack_68 + 0x20) = 1;
        if (bVar3) {
            if (in_stack_00000030 == NULL) {
                (**(*0x14090 + 0x168))(&uStack_60,8,0);
                in_stack_00000030 = &uStack_60;
                uStack_60 = 0x80302;
                uStack_5c = 0x80010100;
            }
            uVar2 = fcn.00013910(in_stack_00000028,in_stack_00000030);
            puStack_68[0x1e] = uVar2;
            (**(*0x14090 + 0x148))(puStack_68 + 1,0x13ca0,puStack_68[0x1e],0);
            iVar1 = fcn.00011738(puStack_68,auStack_58);
            if (iVar1 < 0) {
                (**(*0x14090 + 0x150))(puStack_68[1],0x13ca0,puStack_68[0x1e],0);
                goto code_r0x00010df6;
            }
        }
        else {
code_r0x00010df6:
            *(puStack_68 + 0x89) = 0;
            *(puStack_68 + 0x83) = 2;
        }
        if (*(puStack_68 + 0x89) == '\0') {
            puStack_68[0xc] = 0x12ad8;
            puStack_68[0xd] = 0xb8000;
            puStack_68[0xe] = 0x3d4;
            puStack_68[0xf] = 0x3d5;
            *(puStack_68 + 0x10) = 0xff;
            *(puStack_68 + 0x81) = 0xff;
            *(puStack_68 + 0x82) = 0xff;
            puStack_68[1] = arg2;
            iVar1 = (**(*0x14090 + 0x148))(puStack_68 + 1,0x13cd0,puStack_68 + 0xc,0);
        }
        else {
            uVar4 = 0;
            iVar1 = (**(*0x14090 + 0x148))
                              (puStack_68 + 1,0x13cc0,puStack_68 + 4,0x13c60,puStack_68 + 8,0x13ce0,
                               puStack_68 + 10,0);
            if (iVar1 < 0) goto code_r0x00010f3d;
            iVar1 = (**(*0x14090 + 0x118))
                              (arg2,0x13cb0,puStack_68 + 2,*(arg1 + 0x28),puStack_68[1],CONCAT44(uVar4,8));
        }
    }
    if (-1 < iVar1) {
        *0x13fe0 = *(puStack_68 + 0x89) == '\0';
        *0x14068 = arg2;
        return iVar1;
    }
code_r0x00010f3d:
    fcn.000111a0(puStack_68);
    return iVar1;
}


/* fcn.00010568 @ 0x10568 */

uchar fcn.00010568(ulong param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    uVar2 = 0;
    iStackX_10 = 0;
    iVar3 = (**(*0x14090 + 0x128))(param_1,0x13cb0,aiStackX_18,&iStackX_10);
    if (iVar3 < 0) {
        uVar2 = 0;
    }
    else {
        if (iStackX_10 != 0) {
            puVar4 = aiStackX_18[0] + 0x10;
            iVar3 = iStackX_10;
            do {
                uVar1 = *puVar4;
                puVar4 = puVar4 + 0x18;
                if ((uVar1 & 8) != 0) {
                    uVar2 = 1;
                }
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        (**(*0x14090 + 0x48))();
    }
    return uVar2;
}


/* fcn.00011018 @ 0x11018 */

int64_t fcn.00011018(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_20;
    ulong in_stack_ffffffffffffff80;
    uint uVar2;
    uchar auStack_58 [8];
    ushort auStack_50 [2];
    uchar uStack_4c;
    
    uVar2 = in_stack_ffffffffffffff80 >> 0x20;
    iVar1 = fcn.00010f6c(arg1,arg3,&iStackX_20);
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        (**(*0x14090 + 0x120))(arg2,0x13cb0,*(arg1 + 0x28),arg3);
        if (*(iStackX_20 + 0x89) == '\0') {
            iVar1 = (**(*0x14090 + 0x150))(*(iStackX_20 + 8),0x13cd0,iStackX_20 + 0x60,0);
        }
        else {
            uVar2 = 0;
            iVar1 = (**(*0x14090 + 0x150))
                              (*(iStackX_20 + 8),0x13ca0,*(iStackX_20 + 0xf0),0x13cc0,iStackX_20 + 0x20,0x13c60,
                               iStackX_20 + 0x40,0x13ce0,iStackX_20 + 0x50,0);
        }
        if (iVar1 < 0) {
            (**(*0x14090 + 0x118))(arg2,0x13cb0,auStack_58,*(arg1 + 0x28),arg3,CONCAT44(uVar2,8));
        }
        else {
            auStack_50[0] = 3;
            (***(iStackX_20 + 0x18))(*(iStackX_20 + 0x18),0x10,auStack_50);
            auStack_50[0] = 0x1114;
            uStack_4c = 0;
            (***(iStackX_20 + 0x18))(*(iStackX_20 + 0x18),0x10,auStack_50);
            fcn.000111a0(iStackX_20);
            *0x14068 = 0;
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010f6c @ 0x10f6c */

int64_t fcn.00010f6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x14090 + 0x118))(arg2,0x13cc0,&iStackX_8,*(arg1 + 0x28),arg2,2);
    if (iVar1 < 0) {
        iVar1 = (**(*0x14090 + 0x118))(arg2,0x13cd0,&iStackX_20,*(arg1 + 0x28),arg2,2);
        if (iVar1 < 0) {
            return iVar1;
        }
        iStackX_8 = iStackX_20 + -0x60;
    }
    else {
        iStackX_8 = iStackX_8 + -0x20;
    }
    *arg3 = iStackX_8;
    return iVar1;
}


/* fcn.00013910 @ 0x13910 */

ulong fcn.00013910(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x13fb8;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.000137d0(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00013a88(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00013a58(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x13fb8) {
                section..text(iVar4,0x13fb8,4);
            }
            uVar2 = fcn.00013820(arg1,iVar3);
            (**(*0x14078 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00011738 @ 0x11738 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_dh
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00011738(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint8_t *puVar2;
    int64_t *piVar3;
    uint *puVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    int64_t iVar9;
    char cVar10;
    uint16_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int *piVar14;
    uint8_t uVar15;
    uint64_t uVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    uint8_t *puVar19;
    int64_t iVar20;
    uint32_t uVar21;
    uint16_t *puVar22;
    int aiStackX_20 [2];
    int8_t var_67h;
    uint32_t var_77h;
    uint32_t var_7fh;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    ulong *puStack_88;
    int16_t aiStack_80 [4];
    uint16_t uStack_78;
    ushort uStack_6c;
    uint16_t uStack_64;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    uint32_t var_21h;
    int16_t var_19h;
    int16_t var_dh;
    int16_t var_5h;
    
    iVar12 = *0x14090;
    iStack_a0 = 0;
    piVar14 = arg2 + 0x14;
    bVar5 = false;
    uVar16 = 0;
    do {
        if (((*(piVar14 + -1) & 4) != 0) && (*piVar14 != 0)) {
            bVar8 = true;
            goto code_r0x0001178d;
        }
        uVar16 = uVar16 + 1;
        piVar14 = piVar14 + 1;
    } while (uVar16 < 5);
    bVar8 = false;
code_r0x0001178d:
    piVar3 = arg1 + 0xb8;
    *(arg1 + 0xb0) = 1;
    *piVar3 = 0xfffff;
    iVar12 = (**(iVar12 + 0x28))(1,4,1,piVar3);
    if (iVar12 < 0) {
        return iVar12;
    }
    *(arg1 + 0xe0) = 0;
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0x28) = fcn.00012254;
    piVar1 = arg1 + 0x38;
    *piVar1 = 0;
    *(arg1 + 0x30) = 0x12454;
    iVar12 = *piVar3;
    *(arg1 + 0xc0) = iVar12;
    *(arg1 + 200) = iVar12 + 0x200;
    *(arg1 + 0xd0) = iVar12 + 0x300;
    *(arg1 + 0xd8) = iVar12 + 0x300;
    iVar12 = *0x14090;
    *(arg1 + 0x20) = 0x1200c;
    (**(iVar12 + 0x168))(aiStack_80,0x30);
    aiStack_80[0] = 0x4f00;
    (**(*0x14090 + 0x168))(*(arg1 + 0xc0),0x200,0);
    **(arg1 + 0xc0) = 0x32454256;
    uStack_64 = *(arg1 + 0xc0) >> 4 & 0xf000;
    uStack_6c = *(arg1 + 0xc0);
    (***(arg1 + 0x18))(*(arg1 + 0x18),0x10,aiStack_80);
    if (((aiStack_80[0] != 0x4f) || (**(arg1 + 0xc0) != 0x41534556)) || (*(*(arg1 + 0xc0) + 1) < 0x200)) {
        return -0x7ffffffffffffff9;
    }
    iStack_a8 = 0;
    aiStackX_20[0] = 0xff;
    iVar12 = (**(*0x14090 + 0x140))(0x13d40,0,&puStack_88);
    if (iVar12 < 0) {
code_r0x0001195a:
        iVar13 = fcn.00011610(arg1);
        iVar12 = *0x14090;
        if (-1 < iVar13) {
            piVar3 = arg1 + 0x48;
            *(arg1 + 0x40) = 0x80;
            iVar12 = (**(iVar12 + 0x40))(4,0x80,piVar3);
            if (iVar12 < 0) goto code_r0x00011f9f;
            (**(*0x14090 + 0x160))(*piVar3,*(arg1 + 0xd0),0x80);
            iVar13 = 0x80;
            iVar20 = *piVar3;
            goto code_r0x000119c1;
        }
        if (bVar5) goto code_r0x000119bd;
        *(arg1 + 0x50) = 0;
        *(arg1 + 0x58) = 0;
        bVar5 = false;
    }
    else {
        iVar12 = (**(*0x14090 + 0x40))(4,0x100,&iStack_a0);
        if (iVar12 < 0) goto code_r0x00011f9f;
        iVar12 = (**puStack_88)(puStack_88,*(arg1 + 8),aiStackX_20,&iStack_a8,&iStack_a0);
        if (((iVar12 < 0) || (iStack_a8 == 0)) || (bVar5 = true, aiStackX_20[0] == 1)) goto code_r0x0001195a;
code_r0x000119bd:
        iVar13 = iStack_a8;
        iVar20 = iStack_a0;
code_r0x000119c1:
        bVar5 = true;
        cVar10 = fcn.000112fc(iVar20);
        iVar12 = *0x14090;
        if (cVar10 == '\x01') {
            *(arg1 + 0x50) = iVar13;
            iVar12 = (**(iVar12 + 0x40))(4,iVar13,arg1 + 0x58);
            if (iVar12 < 0) goto code_r0x00011f9f;
            (**(*0x14090 + 0x160))(*(arg1 + 0x58),iVar20,iVar13);
        }
    }
    uVar16 = 0;
    uVar21 = *(*(arg1 + 0xc0) + 0xe);
    puVar22 = uVar21 >> 0xc & 0xffff0 | uVar21 & 0xffff;
    uVar11 = *puVar22;
    if (uVar11 != 0xffff) {
        iVar13 = 0;
        do {
            iVar20 = iVar13;
            if ((uVar11 & 0x100) != 0) {
                (**(*0x14090 + 0x168))(aiStack_80,0x30);
                aiStack_80[0] = 0x4f01;
                uStack_78 = *puVar22;
                (**(*0x14090 + 0x168))(*(arg1 + 200),0x100,0);
                uStack_64 = *(arg1 + 200) >> 4 & 0xf000;
                uStack_6c = *(arg1 + 200);
                (***(arg1 + 0x18))(*(arg1 + 0x18),0x10);
                if (((aiStack_80[0] == 0x4f) && (puVar19 = *(arg1 + 200), (*puVar19 & 0x99) == 0x99)) &&
                   ((puVar19[0x19] - 0x18 < 9 && (((puVar19[0x19] & 7) == 0 && (*(puVar19 + 0x28) != 0)))))) {
                    bVar6 = false;
                    if (bVar5) {
                        piVar14 = 0x13ff0;
                        uVar21 = 0;
                        do {
                            if (CONCAT22(*(puVar19 + 0x12),*(puVar19 + 0x14)) == *piVar14) {
                                bVar6 = true;
                                break;
                            }
                            uVar21 = uVar21 + 1;
                            piVar14 = piVar14 + 1;
                        } while (uVar21 < 0x1d);
                    }
                    puVar17 = 0x13f40;
                    bVar7 = false;
                    do {
                        if ((puVar17[-1] == *(puVar19 + 0x12)) && (*puVar17 == *(puVar19 + 0x14))) {
                            bVar7 = true;
                        }
                        puVar17 = puVar17 + 5;
                    } while (puVar17 < 0x13f90);
                    if ((bVar6) || (bVar7)) {
                        uVar18 = 0;
                        if (uVar16 != 0) {
                            puVar17 = *(arg1 + 0x90) + 0x1c;
                            do {
                                if ((puVar17[-1] == *(puVar19 + 0x12)) && (*puVar17 == *(puVar19 + 0x14)))
                                goto code_r0x00011eed;
                                puVar17 = puVar17 + 0x12;
                                uVar18 = uVar18 + 1;
                            } while (uVar18 < uVar16);
                        }
                        iVar20 = iVar13 + 0x48;
                        uVar16 = uVar16 + 1;
                        iVar12 = (**(*0x14090 + 0x40))(4,iVar20,&iStack_98);
                        if (iVar12 < 0) goto code_r0x00011f9f;
                        if (1 < uVar16) {
                            (**(*0x14090 + 0x160))(iStack_98,*(arg1 + 0x90),iVar13);
                        }
                        if (*(arg1 + 0x90) != 0) {
                            (**(*0x14090 + 0x48))();
                            *(arg1 + 0x90) = 0;
                        }
                        iVar9 = iStack_98;
                        *(iVar13 + iStack_98) = *puVar22;
                        puVar19 = iStack_98 + -0x1f + iVar20;
                        if (*(*(arg1 + 0xc0) + 4) < 0x300) {
                            *(iVar13 + 2 + iStack_98) = *(*(arg1 + 200) + 0x10);
                            *(iVar13 + 0x28 + iStack_98) = *(*(arg1 + 200) + 0x20);
                            *puVar19 = ('\x01' << (*(*(arg1 + 200) + 0x1f) & 0x1f)) - 1;
                            *(iVar13 + 0x2c + iStack_98) = *(*(arg1 + 200) + 0x24);
                            *(iVar13 + 0x2d + iStack_98) = ('\x01' << (*(*(arg1 + 200) + 0x23) & 0x1f)) + -1;
                            *(iVar13 + 0x2a + iStack_98) = *(*(arg1 + 200) + 0x22);
                            *(iVar13 + 0x2b + iStack_98) = ('\x01' << (*(*(arg1 + 200) + 0x21) & 0x1f)) + -1;
                            *(iVar13 + 0x2e + iStack_98) = *(*(arg1 + 200) + 0x26);
                            uVar15 = *(*(arg1 + 200) + 0x25);
                        }
                        else {
                            *(iVar13 + 2 + iStack_98) = *(*(arg1 + 200) + 0x32);
                            *(iVar13 + 0x28 + iStack_98) = *(*(arg1 + 200) + 0x37);
                            *puVar19 = ('\x01' << (*(*(arg1 + 200) + 0x36) & 0x1f)) - 1;
                            *(iVar13 + 0x2c + iStack_98) = *(*(arg1 + 200) + 0x3b);
                            *(iVar13 + 0x2d + iStack_98) = ('\x01' << (*(*(arg1 + 200) + 0x3a) & 0x1f)) + -1;
                            *(iVar13 + 0x2a + iStack_98) = *(*(arg1 + 200) + 0x39);
                            *(iVar13 + 0x2b + iStack_98) = ('\x01' << (*(*(arg1 + 200) + 0x38) & 0x1f)) + -1;
                            *(iVar13 + 0x2e + iStack_98) = *(*(arg1 + 200) + 0x3d);
                            uVar15 = *(*(arg1 + 200) + 0x3c);
                        }
                        *(iVar13 + 0x2f + iStack_98) = ('\x01' << (uVar15 & 0x1f)) + -1;
                        if ((((*(*(arg1 + 200) + 0x19) == ' ') && (*puVar19 == 0xff)) &&
                            (*(iVar13 + 0x2b + iStack_98) == -1)) && (*(iVar13 + 0x2d + iStack_98) == -1)) {
                            if ((*(iVar13 + 0x28 + iStack_98) == '\0') && (*(iVar13 + 0x2a + iStack_98) == '\b')) {
                                *(iVar13 + 0x30 + iStack_98) = 0;
                            }
                            else if ((*(iVar13 + 0x2c + iStack_98) == '\0') && (*(iVar13 + 0x2a + iStack_98) == '\b')) {
                                *(iVar13 + 0x30 + iStack_98) = 1;
                            }
                        }
                        else {
                            *(iVar13 + 0x30 + iStack_98) = 2;
                        }
                        iVar12 = 4;
                        piVar14 = iStack_98 + -0x14 + iVar20;
                        do {
                            puVar2 = puVar19 + -1;
                            uVar15 = *puVar19;
                            puVar19 = puVar19 + 2;
                            *piVar14 = uVar15 << (*puVar2 & 0x1f);
                            piVar14 = piVar14 + 1;
                            iVar12 = iVar12 + -1;
                        } while (iVar12 != 0);
                        uVar18 = *(*(arg1 + 200) + 0x28);
                        if (bVar8) {
                            uStack_90 = uVar18;
                            iVar12 = fcn.000114f8(*(arg1 + 0x10),&uStack_90,arg2);
                            if (iVar12 < 0) goto code_r0x00011f9f;
                            *(iVar13 + 8 + iVar9) = uStack_90;
                        }
                        else {
                            *(iVar13 + 8 + iStack_98) = uVar18;
                        }
                        *(iVar13 + 0x18 + iVar9) = *(*(arg1 + 200) + 0x12);
                        *(iVar13 + 0x1c + iVar9) = *(*(arg1 + 200) + 0x14);
                        uVar21 = *(*(arg1 + 200) + 0x19);
                        *(iVar13 + 0x24 + iVar9) = uVar21;
                        if (*(iVar13 + 0x30 + iVar9) < 2) {
                            *(iVar13 + 0x10 + iVar9) =
                                 ((*(iVar13 + 2 + iVar9) << 3) / uVar21) * *(iVar13 + 0x1c + iVar9) << 2;
                        }
                        else {
                            *(iVar13 + 0x10 + iVar9) = *(*(arg1 + 0xc0) + 0x12) << 0x10;
                        }
                        *(iVar13 + 0x20 + iVar9) = 0x3c;
                        *(arg1 + 0x90) = iStack_98;
                    }
                }
            }
code_r0x00011eed:
            puVar22 = puVar22 + 1;
            uVar11 = *puVar22;
            iVar13 = iVar20;
        } while (uVar11 != 0xffff);
        if (uVar16 != 0) {
            iVar12 = (**(*0x14090 + 0x40))(4,0x28,piVar1);
            if (-1 < iVar12) {
                puVar4 = *piVar1;
                iVar12 = (**(*0x14090 + 0x40))(4,0x24,puVar4 + 2);
                if (-1 < iVar12) {
                    *puVar4 = uVar16;
                    puVar4[1] = 0xffff;
                    fcn.00012104(arg1);
                    iVar12 = fcn.00012254(arg1 + 0x20,0);
                    if (-1 < iVar12) {
                        return iVar12;
                    }
                    uVar18 = 0;
                    if (uVar16 != 0) {
                        do {
                            iVar12 = fcn.00012254(arg1 + 0x20,uVar18 & 0xffffffff);
                            if (-1 < iVar12) {
                                return iVar12;
                            }
                            uVar18 = uVar18 + 1;
                        } while (uVar18 < uVar16);
                    }
                }
            }
            goto code_r0x00011f9f;
        }
    }
    iVar12 = -0x7ffffffffffffff9;
code_r0x00011f9f:
    if (*(arg1 + 0x90) != 0) {
        (**(*0x14090 + 0x48))();
        *(arg1 + 0x90) = 0;
    }
    if (*piVar1 != 0) {
        if (*(*piVar1 + 8) != 0) {
            (**(*0x14090 + 0x48))();
            *(*piVar1 + 8) = 0;
        }
        (**(*0x14090 + 0x48))(*piVar1);
        *piVar1 = 0;
    }
    return iVar12;
}


/* fcn.000111a0 @ 0x111a0 */

void fcn.000111a0(int64_t arg1)

{
    if (arg1 != 0) {
        if (*(arg1 + 0xa8) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0xa8) = 0;
        }
        if (*(arg1 + 0xa0) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0xa0) = 0;
        }
        if (*(arg1 + 0x98) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0x98) = 0;
        }
        if (*(arg1 + 0x90) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0x90) = 0;
        }
        if (*(arg1 + 0xb8) != 0) {
            (**(*0x14090 + 0x30))(*(arg1 + 0xb8),*(arg1 + 0xb0));
        }
        if (*(arg1 + 0xe0) != 0) {
            (**(*0x14090 + 0x30))(*(arg1 + 0xe8));
        }
        if (*(arg1 + 0x38) != 0) {
            if (*(*(arg1 + 0x38) + 8) != 0) {
                (**(*0x14090 + 0x48))();
                *(*(arg1 + 0x38) + 8) = 0;
            }
            (**(*0x14090 + 0x48))(*(arg1 + 0x38));
            *(arg1 + 0x38) = 0;
        }
        if (*(arg1 + 0x48) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0x48) = 0;
        }
        if (*(arg1 + 0x58) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0x58) = 0;
        }
        if (*(arg1 + 0xf0) != 0) {
            (**(*0x14090 + 0x48))();
            *(arg1 + 0xf0) = 0;
        }
        (**(*0x14090 + 0x48))(arg1);
    }
    return;
}


/* fcn.00011610 @ 0x11610 */

ulong fcn.00011610(int64_t arg1)

{
    ulong uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int16_t aiStack_48 [2];
    ushort uStack_44;
    uint16_t uStack_40;
    uint16_t uStack_3c;
    uint32_t var_30h;
    int16_t var_2ch;
    int16_t var_28h;
    int16_t var_24h;
    int16_t var_1ch;
    int16_t var_14h;
    
    (**(*0x14090 + 0x168))(aiStack_48,0x30,0);
    aiStack_48[0] = 0x4f15;
    uStack_44 = 0x10;
    (***(arg1 + 0x18))(*(arg1 + 0x18),0x10,aiStack_48);
    uVar1 = 0;
    uVar3 = 1;
    if ((aiStack_48[0] == 0x4f) && (uVar3 = uStack_3c, uStack_3c == 0)) {
        uVar3 = 1;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
        do {
            (**(*0x14090 + 0x168))(aiStack_48,0x30);
            uStack_44 = 1;
            aiStack_48[0] = 0x4f15;
            var_24h = *(arg1 + 0xd0) >> 4 & 0xf000;
            var_2ch = *(arg1 + 0xd0);
            uStack_3c = 0;
            uStack_40 = uVar2;
            (***(arg1 + 0x18))(*(arg1 + 0x18),0x10);
            if (aiStack_48[0] == 0x4f) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
    }
    if (uVar2 == uVar3) {
        uVar1 = 0x800000000000000e;
    }
    return uVar1;
}


/* fcn.000112fc @ 0x112fc */

int64_t fcn.000112fc(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    char *pcVar11;
    char *pcVar12;
    char *pcVar13;
    char *pcVar14;
    char *pcVar15;
    char *pcVar16;
    uint8_t uVar17;
    int16_t iVar18;
    char *pcVar19;
    unkbyte7 Var21;
    uint64_t uVar20;
    uint16_t uVar22;
    int64_t iVar23;
    uint32_t uVar24;
    uint16_t uVar25;
    uint16_t *puVar26;
    int iVar27;
    uint *puVar28;
    uint8_t *puVar29;
    uchar in_XMM1_Ba;
    char cVar30;
    uchar in_XMM1_Bb;
    char cVar31;
    uchar in_XMM1_Bc;
    char cVar32;
    uchar in_XMM1_Bd;
    char cVar33;
    uchar in_XMM1_Be;
    char cVar34;
    uchar in_XMM1_Bf;
    char cVar35;
    uchar in_XMM1_Bg;
    char cVar36;
    uchar in_XMM1_Bh;
    char cVar37;
    uchar in_XMM1_Bi;
    char cVar38;
    uchar in_XMM1_Bj;
    char cVar39;
    uchar in_XMM1_Bk;
    char cVar40;
    uchar in_XMM1_Bl;
    char cVar41;
    uchar in_XMM1_Bm;
    char cVar42;
    uchar in_XMM1_Bn;
    char cVar43;
    uchar in_XMM1_Bo;
    char cVar44;
    uchar in_XMM1_Bp;
    char cVar45;
    
    iVar23 = 8;
    uVar24 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
             CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
    cVar30 = uVar24;
    cVar31 = uVar24 >> 8;
    cVar32 = uVar24 >> 0x10;
    cVar33 = uVar24 >> 0x18;
    uVar24 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
             CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
    cVar34 = uVar24;
    cVar35 = uVar24 >> 8;
    cVar36 = uVar24 >> 0x10;
    cVar37 = uVar24 >> 0x18;
    uVar24 = CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ^
             CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)));
    cVar38 = uVar24;
    cVar39 = uVar24 >> 8;
    cVar40 = uVar24 >> 0x10;
    cVar41 = uVar24 >> 0x18;
    uVar24 = CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ^
             CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)));
    cVar42 = uVar24;
    cVar43 = uVar24 >> 8;
    cVar44 = uVar24 >> 0x10;
    cVar45 = uVar24 >> 0x18;
    pcVar19 = arg1;
    do {
        cVar1 = *pcVar19;
        pcVar2 = pcVar19 + 1;
        pcVar3 = pcVar19 + 2;
        pcVar4 = pcVar19 + 3;
        pcVar5 = pcVar19 + 4;
        pcVar6 = pcVar19 + 5;
        pcVar7 = pcVar19 + 6;
        pcVar8 = pcVar19 + 7;
        pcVar9 = pcVar19 + 8;
        pcVar10 = pcVar19 + 9;
        pcVar11 = pcVar19 + 10;
        pcVar12 = pcVar19 + 0xb;
        pcVar13 = pcVar19 + 0xc;
        pcVar14 = pcVar19 + 0xd;
        pcVar15 = pcVar19 + 0xe;
        pcVar16 = pcVar19 + 0xf;
        pcVar19 = pcVar19 + 0x10;
        cVar30 = cVar30 + cVar1;
        cVar31 = cVar31 + *pcVar2;
        cVar32 = cVar32 + *pcVar3;
        cVar33 = cVar33 + *pcVar4;
        cVar34 = cVar34 + *pcVar5;
        cVar35 = cVar35 + *pcVar6;
        cVar36 = cVar36 + *pcVar7;
        cVar37 = cVar37 + *pcVar8;
        cVar38 = cVar38 + *pcVar9;
        cVar39 = cVar39 + *pcVar10;
        cVar40 = cVar40 + *pcVar11;
        cVar41 = cVar41 + *pcVar12;
        cVar42 = cVar42 + *pcVar13;
        cVar43 = cVar43 + *pcVar14;
        cVar44 = cVar44 + *pcVar15;
        cVar45 = cVar45 + *pcVar16;
        iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    cVar32 = cVar32 + cVar40 + cVar36 + cVar44;
    cVar37 = cVar33 + cVar41 + cVar37 + cVar45;
    cVar41 = cVar34 + cVar42 + cVar38;
    cVar31 = cVar31 + cVar39 + cVar35 + cVar43 + cVar37;
    cVar33 = cVar32 + cVar41;
    cVar37 = cVar37 + cVar35 + cVar43 + cVar39;
    cVar30 = cVar30 + cVar38 + cVar34 + cVar42 + cVar32 + cVar31;
    if (cVar30 == '\0') {
        puVar26 = 0x13d52;
        iVar27 = 0;
        puVar28 = 0x13ff0;
        uVar20 = 0;
        uVar24 = ((*(arg1 + 0x25) & 0x80) * 2 | *(arg1 + 0x24)) << 8 | *(arg1 + 0x23);
        iVar23 = 0x11;
        do {
            if ((uVar24 & 1) != 0) {
                uVar20 = *puVar26;
                *puVar28 = CONCAT22(puVar26[-1],*puVar26);
                iVar27 = iVar27 + 1;
            }
            uVar24 = uVar24 >> 1;
            puVar26 = puVar26 + 3;
            puVar28 = puVar28 + 1;
            iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        puVar29 = arg1 + 0x26;
        uVar24 = 0;
        do {
            if ((*puVar29 != 1) && (puVar29[1] != 1)) {
                uVar25 = *puVar29 + 0x1f;
                uVar17 = puVar29[1] >> 6;
                if (uVar17 == 0) {
                    iVar18 = (uVar25 >> 1) * 10;
                }
                else {
                    if (uVar17 == 1) {
code_r0x00011435:
                        uVar22 = uVar25 * 2;
                        iVar18 = uVar25 * 4;
                    }
                    else {
                        if (uVar17 == 2) {
                            iVar18 = (uVar25 * 8) / 5 << 2;
                            goto code_r0x00011459;
                        }
                        if (uVar17 != 3) goto code_r0x00011435;
                        uVar22 = uVar25 >> 1;
                        iVar18 = uVar22 << 3;
                    }
                    iVar18 = uVar22 + iVar18;
                }
code_r0x00011459:
                uVar20 = uVar24 + 0x11;
                *(uVar20 * 4 + 0x13ff0) = CONCAT22(uVar25 * 8,iVar18);
                iVar27 = iVar27 + 1;
            }
            puVar29 = puVar29 + 2;
            uVar24 = uVar24 + 1;
        } while (uVar24 < 8);
        if ((*(arg1 + 0x18) & 2) != 0) {
            puVar29 = arg1 + 0x3a;
            uVar24 = 0;
            do {
                Var21 = uVar20 >> 8;
                uVar20 = CONCAT71(Var21,puVar29[-4] | puVar29[-3]);
                if (((puVar29[-4] | puVar29[-3]) != 0) &&
                   (uVar17 = *puVar29 & 0xf0 | puVar29[-2], uVar20 = CONCAT71(Var21,uVar17), uVar17 != 0)) {
                    uVar20 = uVar24 + 0x19;
                    iVar27 = iVar27 + 1;
                    *(uVar20 * 4 + 0x13ff0) =
                         ((*puVar29 & 0xf0) << 4 | puVar29[-2]) << 0x10 | (puVar29[3] & 0xf0) << 4 | puVar29[1];
                }
                uVar24 = uVar24 + 1;
                puVar29 = puVar29 + 0x12;
            } while (uVar24 < 4);
        }
        iVar23 = CONCAT71(uVar20 >> 8,iVar27 != 0);
    }
    else {
        iVar23 = (CONCAT13(cVar37 + cVar41 + cVar36 + cVar44 + cVar40,
                           CONCAT12(cVar33 + cVar37,CONCAT11(cVar31 + cVar33,cVar30))) >> 8) << 8;
    }
    return iVar23;
}


/* fcn.000114f8 @ 0x114f8 */

int64_t fcn.000114f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint8_t *puStackX_20;
    uint64_t uStack_28;
    ulong uStack_20;
    
    puStackX_20 = NULL;
    uVar6 = 0;
    do {
        if (puStackX_20 != NULL) {
            (**(*0x14090 + 0x48))();
            puStackX_20 = NULL;
        }
        iVar4 = (**(arg1 + 0x80))(arg1,uVar6 & 0xff,0,&puStackX_20);
        if (iVar4 < 0) {
            return iVar4;
        }
        if (((puStackX_20 != NULL) && ((*puStackX_20 & 0x7f) != 0xf)) && (0x3f < *(puStackX_20 + 6))) {
            uStack_20 = *arg2;
            uVar2 = *(puStackX_20 + 0xe);
            uVar3 = *(puStackX_20 + 0x16);
            (**(*0x14090 + 0x48))();
            puVar5 = arg3 + 0x10;
            puStackX_20 = NULL;
            uVar7 = 0;
            do {
                uVar1 = *puVar5;
                if ((uVar1 & 4) != 0) {
                    puVar5 = puVar5 + 1;
                    uVar7 = uVar7 + 1;
                    uStack_28 = CONCAT44(*puVar5,uVar1) & 0xfffffffffffffff0;
                    uStack_20 = CONCAT44(*puVar5,uStack_20);
                    if (uVar2 == uStack_28) {
                        if ((uVar2 <= uStack_20) && (uStack_20 < uVar3)) {
                            *arg2 = uStack_20;
                            return 0;
                        }
                        break;
                    }
                }
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 1;
            } while (uVar7 < 5);
        }
        uVar6 = uVar6 + 1;
        if (5 < uVar6) {
            return 0;
        }
    } while( true );
}


/* fcn.00012104 @ 0x12104 */

int64_t fcn.00012104(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    
    uVar6 = 0;
    uVar5 = 0;
    if (**(arg1 + 0x38) != 0) {
        uVar4 = **(arg1 + 0x38);
        puVar2 = *(arg1 + 0x90) + 0x1c;
        uVar5 = 0;
        do {
            if (uVar6 < *(puVar2 + -0x1a)) {
                uVar6 = *(puVar2 + -0x1a);
            }
            if (uVar5 < *puVar2) {
                uVar5 = *puVar2;
            }
            puVar2 = puVar2 + 0x12;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    piVar1 = arg1 + 0x98;
    iVar3 = (**(*0x14090 + 0x40))(4,uVar6);
    if (iVar3 < 0) {
        *piVar1 = 0;
    }
    else {
        fcn.00013b2e(*piVar1,uVar6,0);
        iVar3 = (**(*0x14090 + 0x40))(4,0x25800);
        if (iVar3 < 0) {
            (**(*0x14090 + 0x48))(*piVar1);
            *piVar1 = 0;
        }
        else {
            fcn.00013b2e(*(arg1 + 0xa8),0x25800,0);
            iVar3 = (**(*0x14090 + 0x40))(4,uVar6 * uVar5);
            if (iVar3 < 0) {
                (**(*0x14090 + 0x48))(*piVar1);
                *piVar1 = 0;
            }
            else {
                fcn.00013b2e(*(arg1 + 0xa0),uVar6 * uVar5,0);
            }
        }
    }
    return iVar3;
}


/* fcn.00012254 @ 0x12254 */

ulong fcn.00012254(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint16_t auStack_38 [2];
    uint16_t uStack_34;
    ushort uStack_24;
    uint16_t uStack_1c;
    
    uVar5 = arg2 & 0xffffffff;
    if (arg1 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else if (arg2 < **(arg1 + 0x18)) {
        iVar2 = *(arg1 + 0x70);
        (**(*0x14090 + 0x168))(auStack_38,0x30);
        auStack_38[0] = *(iVar2 + uVar5 * 0x48);
        if (auStack_38[0] < 0x100) {
            (***(arg1 + -8))(*(arg1 + -8));
        }
        else {
            auStack_38[0] = 0x4f02;
            uStack_34 = *(iVar2 + uVar5 * 0x48) | 0x4000;
            (**(*0x14090 + 0x168))(*(arg1 + 0xb8),0x3b);
            uStack_1c = *(arg1 + 0xb8) >> 4 & 0xf000;
            uStack_24 = *(arg1 + 0xb8);
            (***(arg1 + -8))(*(arg1 + -8));
            if (auStack_38[0] != 0x4f) {
                return 0x8000000000000007;
            }
        }
        *(*(arg1 + 0x18) + 4) = arg2;
        **(*(arg1 + 0x18) + 8) = 0;
        *(*(*(arg1 + 0x18) + 8) + 4) = *(iVar2 + 0x18 + uVar5 * 0x48);
        *(*(*(arg1 + 0x18) + 8) + 8) = *(iVar2 + 0x1c + uVar5 * 0x48);
        *(*(*(arg1 + 0x18) + 8) + 0xc) = *(iVar2 + 0x30 + uVar5 * 0x48);
        puVar1 = iVar2 + 0x34 + uVar5 * 0x48;
        uVar4 = puVar1[1];
        iVar3 = *(*(arg1 + 0x18) + 8);
        *(iVar3 + 0x10) = *puVar1;
        *(iVar3 + 0x18) = uVar4;
        *(*(*(arg1 + 0x18) + 8) + 0x20) = (*(iVar2 + 2 + uVar5 * 0x48) << 3) / *(iVar2 + 0x24 + uVar5 * 0x48);
        *(*(arg1 + 0x18) + 0x10) = 0x24;
        *(*(arg1 + 0x18) + 0x18) = *(iVar2 + 8 + uVar5 * 0x48);
        *(*(arg1 + 0x18) + 0x20) = *(iVar2 + 0x10 + uVar5 * 0x48);
        fcn.00013b2e(*(arg1 + 0x80),*(iVar2 + 2 + uVar5 * 0x48) * *(iVar2 + 0x1c + uVar5 * 0x48),0);
        (**(*0x14090 + 0x160))
                  (*(iVar2 + 8 + uVar5 * 0x48),*(arg1 + 0x80),
                   *(iVar2 + 2 + uVar5 * 0x48) * *(iVar2 + 0x1c + uVar5 * 0x48));
        uVar4 = 0;
        *(arg1 + 0x6a) = 0;
    }
    else {
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00013b2e @ 0x13b2e */

int64_t fcn.00013b2e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.000134fc @ 0x134fc */

uint64_t fcn.000134fc(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    uint16_t uVar2;
    uint16_t *puVar3;
    
    uVar2 = (arg1 & 0xff00) + 0xdf00;
    puVar3 = uVar2;
    if ((uVar2 & 0xfbff) == 0) {
        puVar3 = 0x13e30;
        uVar2 = *0x13e30;
        while (uVar2 != 0) {
            if (arg1 == uVar2) {
                if (arg2 != 0) {
                    puVar1 = puVar3 + 1;
                    puVar3 = CONCAT71(puVar3 >> 8,*puVar1);
                    *arg2 = *puVar1;
                }
                return CONCAT71(puVar3 >> 8,1);
            }
            puVar3 = puVar3 + 2;
            uVar2 = *puVar3;
        }
    }
    return puVar3 & 0xffffffffffffff00;
}


/* fcn.0001341c @ 0x1341c */

void fcn.0001341c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong unaff_RBX;
    
    fcn.00013484(arg1,0xe,(arg3 & 0xffU) * (arg4 & 0xffU) + (arg2 & 0xffU) >> 8);
    (**(*(arg1 + 0x80) + 0x28))
              (*(arg1 + 0x80),0,CONCAT31((arg4 & 0xffU) * (arg3 & 0xffU) >> 8,*(*(arg1 + 0x78) + 0x21)),
               *(*(arg1 + 0x78) + 0x10),1,&stack0x00000010,unaff_RBX);
    (**(*(arg1 + 0x80) + 0x28))
              (*(arg1 + 0x80),0,*(*(arg1 + 0x78) + 0x22),*(*(arg1 + 0x78) + 0x18),1,&stack0x00000018);
    return;
}


/* fcn.00013484 @ 0x13484 */

void fcn.00013484(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort auStackX_10 [4];
    uchar auStackX_18 [16];
    
    auStackX_18[0] = arg3;
    auStackX_10[0] = arg2;
    (**(*(arg1 + 0x80) + 0x28))(*(arg1 + 0x80),0,*(*(arg1 + 0x78) + 0x21),*(*(arg1 + 0x78) + 0x10),1,auStackX_10);
    (**(*(arg1 + 0x80) + 0x28))(*(arg1 + 0x80),0,*(*(arg1 + 0x78) + 0x22),*(*(arg1 + 0x78) + 0x18),1,auStackX_18);
    return;
}


/* fcn.000137d0 @ 0x137d0 */

char * fcn.000137d0(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00013774(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 14752 named .text
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


/* fcn.0001356c @ 0x1356c */

ulong fcn.0001356c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if (*0x14080 == NULL) {
        if ((*0x14078 != 0) && (*(*0x14078 + 0x140) != NULL)) {
            iVar1 = (**(*0x14078 + 0x140))(0x13c50,0,0x14080);
            if (iVar1 < 0) {
                *0x14080 = NULL;
            }
            if (*0x14080 != NULL) goto code_r0x000135d8;
        }
        uVar2 = 0x8000000000000003;
    }
    else {
code_r0x000135d8:
        uVar2 = (***0x14080)(0x40000002,0x1030006,0,arg1,in_stack_00000028);
    }
    return uVar2;
}


/* fcn.00013774 @ 0x13774 */

bool fcn.00013774(uint32_t arg1)

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


/* fcn.00013a88 @ 0x13a88 */

void fcn.00013a88(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013a58();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00013a58 @ 0x13a58 */

ulong fcn.00013a58(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14078 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00013820 @ 0x13820 */

int64_t fcn.00013820(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x13fb8;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00013774(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00013774(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.000137d0(arg1);
        iVar4 = fcn.000137d0(arg2);
        iVar2 = fcn.00013a58();
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
    iVar2 = fcn.000137d0(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00013a88(iVar4,iVar2,arg1);
    }
    return iVar3;
}


