// decompiled by r2ghidra: 1591_SaInitDxe.pe32
// functions: 69

/* entry0 @ 0x10434 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010450(arg1,in_RDX);
    fcn.0001056c(arg1,in_RDX);
    return;
}


/* fcn.00010450 @ 0x10450 */

ulong fcn.00010450(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    ulong noname_0_00;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    
    *0x146e8 = *(arg1 + 0x60);
    *0x146e0 = arg1;
    fcn.00011c00();
    noname_0_00 = 0x14610;
    iVar4 = fcn.00011c30(0x14610);
    if (iVar4 == 0) {
        cVar1 = fcn.000143a4();
        uVar2 = in(0x1808);
        fcn.00010330(noname_0_00,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x00010320();
        }
        fcn.00010330(uVar6,0x1808);
        if (cVar1 == '\0') {
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    (**(*0x146e8 + 0x140))(0x144c0,0,0x14700);
    iVar4 = fcn.00011c30(0x144d0);
    if ((iVar4 != 0) && ((*(iVar4 + 0x18) & 1) != 0)) {
        uVar2 = *(iVar4 + 0x2c);
        iVar8 = 0;
        uVar5 = 0;
        uVar7 = 0;
        do {
            *(uVar7 + 0x14620) = 0;
            *(uVar7 + 0x14623) = uVar2 >> (uVar5 & 0x1f) & 7;
            if (*(iVar4 + 0x30 + iVar8) == '\0') {
                *(uVar7 + 0x14624) = 0;
            }
            else {
                *(uVar7 + 0x14624) = 1;
            }
            iVar8 = iVar8 + 1;
            uVar7 = uVar7 + 5;
            uVar5 = uVar5 + 3;
        } while (uVar7 < 0x14);
    }
    uVar7 = 0;
    if (*(*0x146e0 + 0x68) != 0) {
        piVar9 = *(*0x146e0 + 0x70);
        do {
            if ((*0x145a0 == *piVar9) && (*0x145a8 == piVar9[1])) {
                *0x14710 = (*(*0x146e0 + 0x70))[uVar7 * 3 + 2];
                return 0;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 3;
        } while (uVar7 < *(*0x146e0 + 0x68));
    }
    *0x14710 = 0;
    return 0x800000000000000e;
}


/* fcn.0001056c @ 0x1056c */

ulong fcn.0001056c(int64_t arg1,int64_t arg2)

{
    int64_t in_R9;
    uchar auStackX_18 [16];
    
    if ((*0xc0070002 != -1) && ((*0xc0070010 & 0xfffffff0) != 0)) {
        *0xc0070004 = 0;
        *0xc0070010 = 0;
        *0xc0070018 = 0;
        *0xc0070020 = 0;
    }
    fcn.00011c30(0x14440);
    fcn.00010efc(arg1);
    fcn.00011ba0(in_R9);
    if (0x1ffff < *(*0x146e0 + 8)) {
        (**(*0x146e8 + 0x170))(0x200,8,0x107ac,0,0x14410,auStackX_18);
    }
    return 0;
}


/* fcn.00011c00 @ 0x11c00 */

int64_t fcn.00011c00(void)

{
    if (*0x146f8 == 0) {
        fcn.00011b40(0x14540,0x146f8);
    }
    return *0x146f8;
}


/* fcn.00011b40 @ 0x11b40 */

ulong fcn.00011b40(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x146e0;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00011c30 @ 0x11c30 */

void fcn.00011c30(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011c00();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011c5e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011c5e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000143a4 @ 0x143a4 */

uint8_t fcn.000143a4(void)

{
    unkuint7 extraout_RAX;
    
    fcn.00010360();
    fcn.00010350();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.00010efc @ 0x10efc */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_29h

ulong fcn.00010efc(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar uVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    uint8_t uVar11;
    int64_t iVar12;
    uchar auStackX_8 [7];
    int64_t var_17h;
    int64_t *piStackX_18;
    int64_t *piStackX_20;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t *piStack_d8;
    int64_t iStack_d0;
    int64_t *piStack_c8;
    uint32_t auStack_c0 [2];
    uint8_t auStack_b8 [8];
    uint8_t auStack_b0 [8];
    int64_t iStack_a8;
    uchar auStack_a0 [8];
    uchar auStack_98 [16];
    uchar auStack_88 [7];
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_29h;
    int64_t var_19h;
    int64_t var_9h;
    
    _auStackX_8 = arg1;
    section..text(1,&var_17h + 1,0,0);
    (**(*0x146e8 + 0x140))(0x14488,0,0x14770);
    (**(*0x146e8 + 0x40))(10,0x1b7,0x14778);
    fcn.00010290(*0x14778,0x1b7);
    iVar5 = fcn.000115f0();
    uVar4 = (**(iVar5 + 0x20))(0x145e8,0x200002);
    *(*0x14778 + 0xc6) = uVar4;
    *(*0x14778 + 0xf4) = var_17h._1_4_;
    fcn.00010ce0();
    iVar5 = fcn.00011c30(0x144f0);
    if (iVar5 != 0) {
        *(*0x14778 + 0x17e) = *(iVar5 + 0x7f1);
        if (*(iVar5 + 0x7e5) != 0) {
            if ((*(iVar5 + 0x7e5) & 1) != 0) {
                *(*0x14778 + 0x171) = 1;
            }
            if ((*(iVar5 + 0x7e5) & 2) != 0) {
                *(*0x14778 + 0x172) = 1;
            }
            if ((*(iVar5 + 0x7e5) & 4) != 0) {
                *(*0x14778 + 0x173) = 1;
            }
            if ((*(iVar5 + 0x7e5) & 8) != 0) {
                *(*0x14778 + 0x174) = 1;
            }
        }
        cVar3 = fcn.00011928();
        if (((cVar3 == '\0') || (cVar3 == '\x01')) || (uVar7 = 1, cVar3 != '\x02')) {
            uVar7 = 3;
        }
        *(*0x14778 + 0x18e) = uVar7;
    }
    *(*0x14778 + 0x133) = *0xc00000fc == '\x04';
    (**(*0x146e8 + 0x148))(auStackX_8,0x14420,0x14778,0);
    *0x14768 = CONCAT44(*0xc000004c,*0xc0000048);
    *0x14768 = *0x14768 & 0xfffffffffffffffe;
    fcn.00011820(*0x14770,0x14468,&iStack_d0);
    (**(*0x146e8 + 0x140))(0x14420,0,&piStackX_18);
    *(*piStackX_18 + 0x80) = *(iStack_d0 + 0x29);
    if ((*0xc0000054 & 0x10) == 0) {
        *(*piStackX_18 + 5) = 0;
    }
    else {
        *(*piStackX_18 + 5) = 1;
    }
    iVar5 = 0;
    *(*piStackX_18 + 0x7f) = 100;
    *(*piStackX_18 + 6) = *(iStack_d0 + 0x2b);
    do {
        *(*piStackX_18 + 7 + iVar5) = *(iStack_d0 + 0x50 + iVar5);
        uVar9 = *0x14768;
        iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    *(*piStackX_18 + 0xb) = 0;
    *0x14758 = 0;
    *(*piStackX_18 + 0xc) = *(uVar9 + 0xc0f) & 7;
    *(*piStackX_18 + 0xd) = 0;
    *(*piStackX_18 + 4) = *(iStack_d0 + 0x54);
    *(*piStackX_18 + 0x86) = 0;
    *0x14750 = fcn.00011c30(0x14550);
    if (*0x14750 != 0) {
        *0x14758 = *(*0x14750 + 0x27);
    }
    piVar8 = 0x14420;
    iVar5 = (**(*0x146e8 + 0x140))(0x14420,0,&piStack_d8);
    if (-1 < iVar5) {
        if (*0x14750 != 0) {
            piVar8 = *piStack_d8;
            *(piVar8 + 0x10c) = *(*0x14750 + 0x18);
        }
        uVar11 = 0;
        iVar5 = 0;
        do {
            uVar4 = fcn.00014294(CONCAT71(piVar8 >> 8,uVar11));
            uVar11 = uVar11 + 1;
            *(iVar5 + 0x10d + *piStack_d8) = uVar4;
            piVar8 = piStack_d8;
            iVar5 = iVar5 + 4;
        } while (uVar11 < 3);
        *(*piStack_d8 + 0x129) = *0xc0010000;
        *(*piStack_d8 + 299) = *0xc0028000;
    }
    fcn.0001249c();
    (**(*0x146e8 + 0x170))(0x200,8,0x10c64,0,0x14590,auStack_a0);
    _auStack_88 = *0x14640;
    stack0xffffffffffffff80 = *0x14648;
    fcn.00010ae4(auStack_88,0x20746473536153);
    (**(*0x146e8 + 0x140))(0x14488,0,auStack_c0);
    fcn.00011820(auStack_c0[0],0x145c0,&iStack_a8);
    iVar5 = (**(*0x146e8 + 0x140))(0x14420,0,&piStackX_20);
    if (iVar5 == 0) {
        uVar9 = 0;
        iVar5 = 0x1a4;
        while( true ) {
            cVar3 = fcn.00011928();
            if (((cVar3 == '\0') || (cVar3 == '\x01')) || (uVar6 = 1, cVar3 != '\x02')) {
                uVar6 = 3;
            }
            if (uVar6 <= uVar9) break;
            fcn.0001177c(uVar9,auStack_b8,auStack_b0);
            uVar9 = uVar9 + 1;
            *(iVar5 + *piStackX_20) = auStack_b8[0] << 0x10 | auStack_b0[0];
            iVar5 = iVar5 + 4;
        }
        *(*piStackX_20 + 0xd8) = *(iStack_a8 + 0x29);
        *(*piStackX_20 + 0xd9) = *(iStack_a8 + 0x28);
        *(*piStackX_20 + 0xda) = *(iStack_a8 + 0x31);
        *(*piStackX_20 + 0xdb) = *(iStack_a8 + 0x30);
        *(*piStackX_20 + 0xdc) = *(iStack_a8 + 0x39);
        *(*piStackX_20 + 0xdd) = *(iStack_a8 + 0x38);
        *(*piStackX_20 + 0xde) = *(iStack_a8 + 0x41);
        *(*piStackX_20 + 0xdf) = *(iStack_a8 + 0x40);
        *(*piStackX_20 + 0xe0) = 0x846;
        *(*piStackX_20 + 0xe2) = 0x846;
    }
    stack0xffffffffffffff88 = *0x14650;
    stack0xffffffffffffff90 = *0x14658;
    fcn.00010ae4(&var_71h + 1,0x7464735378666749);
    if ((*0xc0068000 != -1) && (iVar5 = fcn.00011c30(0x144d0), iVar5 != 0)) {
        if ((*(iVar5 + 0x18) & 2) != 0) {
            stack0xffffffffffffff98 = *0x14670;
            stack0xffffffffffffffa0 = *0x14678;
            fcn.00010ae4(&var_61h + 1,0x74647353676553);
        }
        stack0xffffffffffffffa8 = *0x14660;
        stack0xffffffffffffffb0 = *0x14668;
        fcn.00010ae4(&var_51h + 1,0x7464735373736354);
        fcn.00012028();
    }
    if (*0xc0028000 != -1) {
        stack0xffffffffffffffb8 = *0x14680;
        stack0xffffffffffffffc0 = *0x14688;
        fcn.00010ae4(&var_41h + 1,0x74647353757049);
        iVar5 = (**(*0x146e8 + 0x140))(0x14420,0,&piStack_c8);
        if ((iVar5 == 0) && (iVar5 = fcn.00011c30(0x14560), iVar5 != 0)) {
            puVar10 = iVar5 + 0x21;
            iVar12 = 8;
            *(*piStack_c8 + 0x85) = *(iVar5 + 0x18);
            uVar11 = 0;
            iVar5 = iVar5 - puVar10;
            do {
                *(*piStack_c8 + 0x186) = *(*piStack_c8 + 0x186) + (puVar10[iVar5 + 0x19] << (uVar11 & 0x3f));
                uVar1 = *puVar10;
                puVar10 = puVar10 + 1;
                uVar2 = uVar11 & 0x3f;
                uVar11 = uVar11 + 4;
                *(*piStack_c8 + 0x18a) = *(*piStack_c8 + 0x18a) + (uVar1 << uVar2);
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
        }
    }
    *0x14748 = fcn.00011c30(0x14430);
    if (*0x14748 != 0) {
        *0x14740 = 1;
        *0x14741 = 0;
        *0x14738 = 0x8000;
        if (*0xc0008000 != -1) {
            (**(*0x146e8 + 0x170))(0x200,8,0x13750,0,0x14590,auStack_98);
        }
    }
    return 0;
}


/* fcn.00011ba0 @ 0x11ba0 */

int64_t fcn.00011ba0(int64_t arg1)

{
    ulong in_R8;
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg1;
    (**(*0x146e8 + 0x50))(0x200,8,in_R8,0,&iStackX_20);
    (**(*0x146e8 + 0xa8))(0x144e0,iStackX_20,in_stack_00000028);
    (**(*0x146e8 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00011928 @ 0x11928 */

ulong fcn.00011928(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    section..text(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x00011a43;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x00011a43;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x00011987;
                    }
                }
code_r0x00011985:
                uVar3 = 2;
                goto code_r0x00011987;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x00011985;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x00011987;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x00011987;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x00011987;
            goto code_r0x00011985;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x00011987;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x00011987;
        }
    }
code_r0x00011a43:
    uVar3 = 0;
code_r0x00011987:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.0001177c @ 0x1177c */

ulong fcn.0001177c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00011928();
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar2 = 1, cVar1 != '\x02')) {
        uVar2 = 3;
    }
    if (uVar2 < arg1) {
        return 0x8000000000000002;
    }
    if (arg1 != 0) {
        if (arg1 == 1) {
            *arg2 = 1;
            *arg3 = 0;
            return 0;
        }
        if (arg1 == 2) {
            cVar1 = fcn.00011928();
            if (cVar1 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x00011801;
        }
    }
    *arg3 = 0;
code_r0x00011801:
    *arg2 = 6;
    return 0;
}


/* fcn.0001162c @ 0x1162c */

uint64_t fcn.0001162c(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    
    uVar2 = arg1 + 6U & 0xffffffff;
    uVar3 = *((arg1 + 6U >> 4 & 0x10000000 | uVar2) + 0xc0000000);
    uVar2 = CONCAT71(uVar2 >> 8,uVar3);
    if ((uVar3 & 0x10) != 0) {
        uVar5 = 0;
        uVar1 = 0x14;
        if ((*((arg1 + 0xeU >> 4 & 0x10000000 | arg1 + 0xeU & 0xffffffff) + 0xc0000000) & 0x7f) != 2) {
            uVar1 = 0x34;
        }
        uVar2 = uVar1 + arg1 & 0xffffffff;
        uVar3 = *((uVar1 + arg1 >> 4 & 0x10000000 | uVar2) + 0xc0000000) & 0xfc;
        uVar4 = uVar3;
        while ((uVar3 != 0 && (uVar5 != -1))) {
            uVar2 = uVar4 + arg1 & 0xffffffff;
            uVar5 = *((uVar4 + arg1 >> 4 & 0x10000000 | uVar2) + 0xc0000000);
            if (uVar5 == '\x10') {
                uVar3 = 0;
                if (0x3f < uVar4) {
                    uVar3 = uVar4;
                }
                return CONCAT71(uVar2 >> 8,uVar3);
            }
            uVar4 = uVar5 >> 8;
            uVar3 = uVar5 >> 8;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00010638 @ 0x10638 */

void fcn.00010638(void)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    
    uVar6 = 0;
    do {
        cVar1 = fcn.00011928();
        if (cVar1 == '\0') {
code_r0x00010682:
            uVar3 = 3;
        }
        else if ((cVar1 == '\x01') || (uVar3 = 1, cVar1 != '\x02')) goto code_r0x00010682;
        if (uVar3 <= uVar6) {
            return;
        }
        if (uVar6 == 0) {
code_r0x000106ac:
            fcn.0001177c(uVar6,auStackX_8,auStackX_10);
            uVar4 = ((auStackX_8[0] & 0x1f) << 3 | auStackX_10[0] & 7) << 0xc;
            uVar2 = fcn.0001162c(uVar4);
            uVar3 = 0x87;
            if (uVar6 != 2) {
                uVar3 = 0x4e;
            }
            uVar5 = uVar3 << 0x10;
            if (((*(uVar4 + uVar2 + 0xc0000010) & 3) - 1 & 0xfffd) == 0) {
                *(uVar5 | 0xfb000fd8) = 0x3a2024a0;
                *(uVar5 | 0xfb000d0c) = 0x3a2024a0;
                *(uVar5 | 0xfb001d0c) = 0x3a2024a0;
                *(uVar5 | 0xfb002d0c) = 0x3a2024a0;
                *(uVar5 | 0xfb003d0c) = 0x3a2024a0;
            }
            else {
                *(uVar5 | 0xfb000fd8) = 0x3a202fa0;
                *(uVar5 | 0xfb000d0c) = 0x3a202fa0;
                *(uVar5 | 0xfb001d0c) = 0x3a202fa0;
                *(uVar5 | 0xfb002d0c) = 0x3a202fa0;
                *(uVar5 | 0xfb003d0c) = 0x3a202fa0;
            }
        }
        else if (uVar6 != 1) {
            if (uVar6 == 2) {
                cVar1 = fcn.00011928();
                if (cVar1 == '\x01') goto code_r0x00010790;
            }
            goto code_r0x000106ac;
        }
code_r0x00010790:
        uVar6 = uVar6 + 1;
    } while( true );
}


/* fcn.00011d68 @ 0x11d68 */

void fcn.00011d68(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    ulong uVar2;
    int32_t var_bp_10h;
    
    var_bp_10h = *0xc0010010 & 0xfffffff0;
    iVar1 = fcn.000115f0();
    uVar2 = 0x145e8;
    iVar1 = (**(iVar1 + 0x20))(0x145e8,0x200002);
    fcn.00011c7c(uVar2,iVar1 + 0x10010,param_3,&var_bp_10h);
    var_bp_10h = *0xc0010014;
    iVar1 = fcn.000115f0();
    uVar2 = 0x145e8;
    iVar1 = (**(iVar1 + 0x20))(0x145e8,0x200002);
    fcn.00011c7c(uVar2,iVar1 + 0x10014,param_3,&var_bp_10h);
    var_bp_10h = *0xc0010018;
    iVar1 = fcn.000115f0();
    uVar2 = 0x145e8;
    iVar1 = (**(iVar1 + 0x20))(0x145e8,0x200002);
    fcn.00011c7c(uVar2,iVar1 + 0x10018,param_3,&var_bp_10h);
    var_bp_10h = *0xc001001c;
    iVar1 = fcn.000115f0();
    uVar2 = 0x145e8;
    iVar1 = (**(iVar1 + 0x20))(0x145e8,0x200002);
    fcn.00011c7c(uVar2,iVar1 + 0x1001c,param_3,&var_bp_10h);
    var_bp_10h = *0xc0010020;
    iVar1 = fcn.000115f0();
    uVar2 = 0x145e8;
    iVar1 = (**(iVar1 + 0x20))(0x145e8,0x200002);
    fcn.00011c7c(uVar2,iVar1 + 0x10020,param_3,&var_bp_10h);
    var_bp_10h = *0xc0010004;
    iVar1 = fcn.000115f0();
    uVar2 = 0x145e8;
    iVar1 = (**(iVar1 + 0x20))(0x145e8,0x200002);
    fcn.00011c7c(uVar2,iVar1 + 0x10004,param_3,&var_bp_10h);
    return;
}


/* fcn.000115f0 @ 0x115f0 */

int64_t fcn.000115f0(void)

{
    if (*0x146f0 == 0) {
        (**(*0x146e8 + 0x140))(0x144a8,0,0x146f0);
    }
    return *0x146f0;
}


/* fcn.00011c7c @ 0x11c7c */

void fcn.00011c7c(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    (***0x14700)(*0x14700,2,2,arg1,1,arg2);
    return;
}


/* fcn.00011a4c @ 0x11a4c */

uint fcn.00011a4c(void)

{
    uint32_t auStackX_8 [8];
    
    section..text(1,auStackX_8,0,0);
    auStackX_8[0] = auStackX_8[0] & 0xfff0ff0;
    if (auStackX_8[0] != 0x906a0) {
        if (auStackX_8[0] == 0xb06a0) {
            return 1;
        }
        if (auStackX_8[0] != 0xb06e0) {
            return 0xff;
        }
    }
    return 0;
}


/* fcn.000142d8 @ 0x142d8 */

ulong fcn.000142d8(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    int16_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    
    uVar1 = *0xc0050100;
    if (*0xc0050000 != -1) {
        iVar4 = 0x50100;
        *arg1 = *0xc0050100;
        uVar2 = *0xc0050108;
        if (uVar1 == 0x23) {
            *(arg1 + 0xc) = *0xc0050108;
            iVar3 = uVar2;
            while( true ) {
                if (iVar3 == 4) {
                    *(arg1 + 0x10) = *(iVar4 + 0xc000000c);
                    return 0;
                }
                if ((*arg1 < 0x100000) || ((*arg1 & 0xfff00000) == 0xfff00000)) break;
                uVar5 = *arg1 >> 0x14;
                iVar4 = uVar5 + 0x50000;
                *arg1 = *(uVar5 + 0xc0050000);
                uVar1 = *(uVar5 + 0xc0050008);
                *(arg1 + 0xc) = uVar1;
                iVar3 = uVar1;
            }
        }
    }
    return 0x8000000000000003;
}


/* fcn.00012f18 @ 0x12f18 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00012f18(void)

{
    int64_t iVar1;
    int64_t arg2;
    int *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uchar auStackX_8 [8];
    uint auStackX_10 [2];
    uchar auStackX_18 [8];
    int64_t var_28h_2;
    int64_t var_30h_2;
    int64_t var_38h_2;
    int64_t var_40h;
    int *piStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    int64_t var_38h;
    uint32_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    if (*0x14718 == '\0') {
        var_28h_2 = 0;
        _var_30h = NULL;
        *0x14718 = '\x01';
        if ((*(*0x14750 + 0x18) != '\x01') && ((*0xc00000e4 >> 0x17 & 1) == 0)) {
            (**(*0x146e8 + 0x140))(0x14520,0,&var_30h);
            iVar1 = (**(*0x146e8 + 0x138))(2,0x14478,0,&uStack_50,&iStack_48);
            uVar3 = 0;
            if (uStack_50 != 0) {
                do {
                    (**(*0x146e8 + 0x98))(*(iStack_48 + uVar3 * 8),0x14478,&var_28h_2);
                    var_38h = 0;
                    auStackX_10[0] = 0;
                    iVar1 = (**(var_28h_2 + 0x10))
                                      (var_28h_2,0x145b0,0,&var_38h,auStackX_8,auStackX_18,auStackX_10);
                    if (iVar1 == 0) break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uStack_50);
            }
            (**(*0x146e8 + 0x48))(iStack_48);
            if (var_28h_2 != 0) {
                piStack_58 = NULL;
                iVar4 = 0;
                piVar2 = NULL;
                if (iVar1 == 0) {
                    do {
                        arg2 = 0x145b0;
                        iVar1 = (**(var_28h_2 + 0x18))
                                          (var_28h_2,0x145b0,0x19,iVar4,&piStack_58,&var_38h,auStackX_10);
                        piVar2 = piStack_58;
                        if (-1 < iVar1) {
                            if ((piStack_58 != NULL) && (*piStack_58 == 0x52414d44)) {
                                fcn.00012c74(piStack_58,arg2);
                                break;
                            }
                            iVar4 = iVar4 + 1;
                            if (piStack_58 != NULL) {
                                (**(*0x146e8 + 0x48))();
                                piStack_58 = NULL;
                            }
                        }
                        piVar2 = NULL;
                    } while (iVar1 == 0);
                }
                var_28h = 0;
                if (piVar2 != NULL) {
                    (**_var_30h)(_var_30h,piVar2,piVar2[1],&var_28h);
                    (**(*0x146e8 + 0x48))(piVar2);
                }
            }
        }
    }
    return;
}


/* fcn.0001098c @ 0x1098c */

void fcn.0001098c(void)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int16_t *piVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    
    iVar3 = fcn.00011c30(0x14440);
    if ((iVar3 == 0) || (*(iVar3 + 0x18) != '\x01')) {
        iVar3 = fcn.00011c30(0x145d0);
        if ((iVar3 == 0) || (*(iVar3 + 0x20) < 3)) {
            bVar1 = false;
            goto code_r0x000109db;
        }
    }
    bVar1 = true;
code_r0x000109db:
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = *0xc00000bc & 0xfff00000;
    iVar3 = fcn.000115f0();
    iVar2 = (**(iVar3 + 0x20))(0x145e8,0x200002);
    for (piVar4 = fcn.00011c00(); *piVar4 != -1; piVar4 = piVar4 + piVar4[1]) {
        if (*piVar4 == 6) goto code_r0x00010a2c;
    }
    piVar4 = NULL;
code_r0x00010a2c:
    if (piVar4 != NULL) {
        uVar7 = *(piVar4 + 4);
        uVar5 = 1LL << (uVar7 & 0x3f);
    }
    *(*0x14778 + 0xf8) = uVar6;
    *(*0x14778 + 0xfc) = iVar2 - uVar6;
    if (bVar1) {
        if ((uVar7 == 0) || ((uVar5 & 0x3fffffffff) != 0)) {
            *(*0x14778 + 0xe4) = 0x4000000000;
            *(*0x14778 + 0xec) = 0x4000000000;
        }
        else {
            *(*0x14778 + 0xe4) = 0x4000000000;
            *(*0x14778 + 0xec) = uVar5 - 0x4000000000;
        }
    }
    return;
}


/* fcn.00011cac @ 0x11cac */

ulong fcn.00011cac(void)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int16_t *piStackX_8;
    uint32_t auStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    iVar3 = 0;
    piStackX_8 = NULL;
    (**(*0x146e8 + 0x140))(0x14488,0,auStackX_10);
    fcn.00011820(auStackX_10[0],0x14468,aiStackX_18);
    iVar2 = (**(*0x146e8 + 0x140))(0x14570,0,0x14708);
    if ((-1 < iVar2) && (iVar2 = (**(*0x14708 + 8))(*0x14708,0x14690,&piStackX_8), -1 < iVar2)) {
        iVar1 = *piStackX_8;
        while (iVar1 != 0) {
            iVar3 = iVar3 + 1;
            iVar1 = piStackX_8[iVar3];
        }
        iVar3 = iVar3 * 2 + 2;
        if ((iVar3 != 0) && (aiStackX_18[0] + 0x30 != piStackX_8)) {
            fcn.000102b0(aiStackX_18[0] + 0x30,piStackX_8,iVar3);
        }
    }
    return 0;
}


/* fcn.0001234c @ 0x1234c */

int64_t fcn.0001234c(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t arg1;
    uint64_t arg3;
    bool bVar3;
    int64_t iStackX_8;
    uint32_t auStackX_10 [2];
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    
    iStackX_8 = 0;
    iVar1 = (**(*0x146e8 + 0x140))(0x14488,0,auStackX_10);
    if (-1 < iVar1) {
        fcn.00011820(auStackX_10[0],0x14468,&iStackX_20);
        iVar1 = (**(*0x146e8 + 0x140))(0x14488,0,auStackX_18);
        if ((-1 < iVar1) && (fcn.000122cc(&iStackX_8,auStackX_18), iVar1 = iStackX_8, iStackX_8 != 0)) {
            if (*0x14760 + 100 != iStackX_20 + 0x30) {
                fcn.000102b0(*0x14760 + 100,iStackX_20 + 0x30,0x20);
            }
            *(*0x14760 + 0x3ba) = 0;
            *(*0x14760 + 0x3c2) = 0;
            if (*(iVar1 + 0x18) < 0x1801) {
                arg3 = *(iVar1 + 0x18);
                arg1 = *0x14760 + 0x400;
                bVar3 = arg3 == 0;
            }
            else {
                *(*0x14760 + 0x3ba) = 0x2000;
                uVar2 = (*(iVar1 + 0x18) & 0xfffffe00) + 0x200;
                bVar3 = uVar2 == 0;
                arg3 = uVar2;
                *(*0x14760 + 0x3c2) = uVar2;
                arg1 = *0x14760 + 0x2000;
            }
            if ((!bVar3) && (arg1 != iVar1)) {
                fcn.000102b0(arg1,iVar1,arg3);
            }
            return 0;
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.0001273c @ 0x1273c */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h

int64_t fcn.0001273c(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t var_12h;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_67h;
    uint32_t var_6fh;
    uint32_t var_77h;
    int64_t var_7fh;
    ulong uStack_78;
    ulong uStack_70;
    uchar auStack_68 [16];
    uchar auStack_58 [11];
    char cStack_4d;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    
    iStackX_10 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    *(*0x14760 + 0x60) = *(*0x14760 + 0x60) | 0x100;
    *(*0x14760 + 0x60) = *(*0x14760 + 0x60) & 0xffffff7f;
    iVar1 = (**(*0x146e8 + 0x138))(2,0x14458,0,&uStackX_18,&iStackX_20);
    if ((-1 < iVar1) && (uVar2 = 0, uStackX_18 != 0)) {
        do {
            iVar1 = (**(*0x146e8 + 0x98))(*(iStackX_20 + uVar2 * 8),0x14458,&stack0x00000008);
            if (((-1 < iVar1) &&
                (((iVar1 = (**(iStackX_8 + 0x30))(iStackX_8,2,0,0x10,auStack_58), -1 < iVar1 &&
                  (cStack_4d == '\x03')) &&
                 (iVar1 = (**(iStackX_8 + 0x70))(iStackX_8,auStack_68,&iStackX_10,&uStack_70,&uStack_78),
                 -1 < iVar1)))) && (iStackX_10 != 0)) {
                *(*0x14760 + 0x60) = *(*0x14760 + 0x60) | 0x80;
                break;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uStackX_18);
    }
    if (iStackX_20 != 0) {
        (**(*0x146e8 + 0x48))();
    }
    return iVar1;
}


/* fcn.0001312c @ 0x1312c */

int64_t fcn.0001312c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    ulong uStackX_20;
    int *apiStack_18 [2];
    
    iVar1 = arg1;
    if ((*0x14728 == NULL) && (fcn.000130e8(), *0x14728 == NULL)) {
        return -0x7ffffffffffffffa;
    }
    uStackX_20 = 0;
    iVar1 = fcn.0001325c(iVar1,apiStack_18,&uStackX_20);
    if (-1 < iVar1) {
        if (apiStack_18[0] != NULL) {
            for (piVar2 = apiStack_18[0]; piVar2 < apiStack_18[0][1] + apiStack_18[0]; piVar2 = piVar2 + 1) {
                if ((*piVar2 == arg1) && (*(piVar2 + -1) == '\b')) {
                    if (((arg3 == 2) && (piVar2[1] == '\v')) || ((arg3 == 4 && (piVar2[1] == '\f')))) {
                        if (piVar2 + 5 != arg2) {
                            fcn.000102b0(piVar2 + 5,arg2,arg3);
                        }
                        (*(*0x14728)[1])(*0x14728,uStackX_20);
                        uStackX_20 = 0;
                        iVar1 = (***0x14728)(*0x14728,apiStack_18[0],apiStack_18[0][1],&uStackX_20);
                    }
                    else {
                        iVar1 = -0x7ffffffffffffffc;
                    }
                    (**(*0x146e8 + 0x48))(apiStack_18[0]);
                    return iVar1;
                }
            }
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.000118fc @ 0x118fc */

uint32_t fcn.000118fc(void)

{
    uint32_t auStackX_8 [8];
    
    section..text(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* section..text @ 0x10260 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    //[00] -r-x section size 16768 named .text
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != 0) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00010290 @ 0x10290 */

int64_t fcn.00010290(int64_t arg1,int64_t arg2)

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


/* fcn.00010ce0 @ 0x10ce0 */

void fcn.00010ce0(void)

{
    int16_t iVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    
    iVar5 = fcn.00011c30(0x145f8);
    iVar1 = *0xc0070002;
    if (iVar5 != 0) {
        *(*0x14778 + 0x175) = *0xc0070002 != -1;
        if (iVar1 != -1) {
            *(*0x14778 + 0x183) = 0;
            *(*0x14778 + 0x184) = 0;
            *(*0x14778 + 0x17f) = 0;
            *(*0x14778 + 0x180) = 0;
            *(*0x14778 + 0x181) = 0;
            uVar3 = fcn.00011a4c();
            iVar4 = fcn.000118fc();
            pcVar6 = iVar5 + 0x1e;
            iVar5 = 0x1f;
            do {
                if (pcVar6[2] == '\0') goto code_r0x00010ee1;
                if (*pcVar6 == '\x17') {
                    *(*0x14778 + 0x183) = 0xff;
                }
                if (uVar3 < 3) {
                    if (iVar4 != 0x90670) {
                        if ((((iVar4 - 0x906a0U & 0xfffdffff) == 0) && (*pcVar6 == '\x06')) && (pcVar6[1] == '\x02')) {
                            *(*0x14778 + 0x184) = *(*0x14778 + 0x184) | 0x10;
                        }
                        goto code_r0x00010e02;
                    }
                    cVar2 = *pcVar6;
                    if (cVar2 == '\x01') {
                        if (pcVar6[1] == '\x01') {
                            *(*0x14778 + 0x184) = *(*0x14778 + 0x184) | 2;
                        }
                        goto code_r0x00010e02;
                    }
code_r0x00010e3d:
                    if ((cVar2 == '\x06') && (pcVar6[1] == '\0')) {
                        *(*0x14778 + 0x184) = *(*0x14778 + 0x184) | 8;
                    }
                    else if (cVar2 == '\x1c') {
                        *(*0x14778 + 0x17f) = *(*0x14778 + 0x17f) | 1 << (pcVar6[1] & 0x1f);
                    }
                    else if (cVar2 == '\x1d') {
                        *(*0x14778 + 0x180) = *(*0x14778 + 0x180) | 1 << (pcVar6[1] & 0x1f);
                    }
                    else if (cVar2 == '\x1b') {
                        *(*0x14778 + 0x181) = *(*0x14778 + 0x181) | 1 << (pcVar6[1] & 0x1f);
                    }
                    else if (cVar2 == -1) {
                        *(*0x14778 + 0x182) = *(*0x14778 + 0x182) | 1 << (pcVar6[1] & 0x1f);
                    }
                }
                else {
code_r0x00010e02:
                    cVar2 = *pcVar6;
                    if (cVar2 != '\x01') goto code_r0x00010e3d;
                    if (pcVar6[1] == '\0') {
                        *(*0x14778 + 0x184) = *(*0x14778 + 0x184) | 1;
                    }
                    else {
                        if (pcVar6[1] != '\x02') goto code_r0x00010e3d;
                        *(*0x14778 + 0x184) = *(*0x14778 + 0x184) | 4;
                    }
                }
code_r0x00010ee1:
                pcVar6 = pcVar6 + 0xc;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
    }
    return;
}


/* fcn.00011820 @ 0x11820 */

ulong fcn.00011820(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar4 = 0;
    if (*(iVar1 + 0x1e) != 0) {
        do {
            if (*(iVar1 + 2) < uVar3 + 0x24) {
                return 0x800000000000000e;
            }
            iVar2 = iVar1 + 0x24 + uVar3;
            if ((*(iVar2 + 8) == *arg2) && (*(iVar2 + 0x10) == *(arg2 + 8))) {
                *arg3 = iVar2;
                return 0;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar4 < *(iVar1 + 0x1e));
    }
    return 0x800000000000000e;
}


/* fcn.00014294 @ 0x14294 */

uint32_t fcn.00014294(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar1 = arg1 & 0xff;
    uVar2 = *0xc0000048 & 0xfffffffe;
    if (arg1 == '\0') {
        uVar1 = *(uVar2 + 0x5400);
    }
    else if (uVar1 == 1) {
        uVar1 = *(uVar2 + 0x7880);
    }
    else {
        if (uVar1 != 2) {
            return 0;
        }
        uVar1 = *(uVar2 + 0x5410);
    }
    return uVar1 & 0xfffffffe;
}


/* fcn.0001249c @ 0x1249c */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.0001249c(void)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    char *arg1;
    ulong noname_0;
    uint16_t uVar4;
    int64_t iVar5;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    int64_t *piStackX_18;
    int64_t var_28h_2;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uchar auStack_48 [8];
    int64_t aiStack_40 [2];
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    iVar2 = (**(*0x146e8 + 0x140))(0x14488,0,&var_28h_2);
    if (-1 < iVar2) {
        fcn.00011820(var_28h_2,0x14468,aiStack_40);
        iStackX_10 = 0;
        uVar4 = 0;
        iVar3 = (**(*0x146e8 + 0x140))(0x14488,0,auStack_48);
        iVar2 = 0;
        if (-1 < iVar3) {
            fcn.000122cc(&iStackX_10,auStack_48);
            iVar2 = iStackX_10;
        }
        (**(*0x146e8 + 0x140))(0x14420,0,&piStackX_18);
        if ((iVar2 != 0) && (0x1800 < *(iVar2 + 0x18))) {
            uVar4 = (*(iVar2 + 0x18) & 0xfe00) + 0x200;
        }
        iVar2 = (**(*0x146e8 + 0x40))(10,uVar4 + 0x2000);
        fcn.00010370(CONCAT44(*0x14764,*0x14760),uVar4 + 0x2000,0);
        **piStackX_18 = *0x14760;
        if (*0xc0010000 != -1) {
            arg1 = CONCAT44(*0x14764,*0x14760);
            if (arg1 != "IntelGraphicsMem") {
                fcn.000102b0(arg1,0x14698,0x11);
                arg1 = CONCAT44(*0x14764,*0x14760);
            }
            iVar5 = 0x14;
            arg1[0x10] = '\b';
            arg1[0x11] = '\0';
            arg1[0x12] = '\0';
            arg1[0x13] = '\0';
            *(CONCAT44(*0x14764,*0x14760) + 0x14) = 0x2010000;
            *(CONCAT44(*0x14764,*0x14760) + 0x58) = 0x1d;
            *(CONCAT44(*0x14764,*0x14760) + 0x60) = *(aiStack_40[0] + 0x28);
            puVar1 = CONCAT44(*0x14764,*0x14760) + 0x60;
            *puVar1 = *puVar1 | 2;
            *(CONCAT44(*0x14764,*0x14760) + 0x310) = 0xff;
            *(CONCAT44(*0x14764,*0x14760) + 0x314) = 0x80000006;
            *(CONCAT44(*0x14764,*0x14760) + 0x39e) = (*(*piStackX_18 + 4) & 0x1f) * 2;
            iVar3 = 0x31c;
            *(CONCAT44(*0x14764,*0x14760) + 0x318) = 0x80000064;
            do {
                *(iVar3 + CONCAT44(*0x14764,*0x14760)) = *(aiStack_40[0] + -0x2c4 + iVar3);
                iVar3 = iVar3 + 2;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            *(CONCAT44(*0x14764,*0x14760) + 0x3a6) = 0;
            if (-1 < iVar2) {
                *(CONCAT44(*0x14764,*0x14760) + 0x3a6) = *(aiStack_40[0] + 0x2c);
            }
            *0xc00100fc = *0x14760;
            noname_0 = 0x8000;
            *0xc00100e8 = *0xc00100e8 & 0xfffffffe | 0x8000;
            auStackX_8[0] = *0x14760;
            fcn.00011c7c(0x8000,0xc00100fc,aiStack_40[0],auStackX_8);
            auStackX_8[0] = *0xc00100e8;
            fcn.00011c7c(noname_0,0xc00100e8,aiStack_40[0],auStackX_8);
            aiStack_40[1] = 0;
            (**(*0x146e8 + 0x148))(aiStack_40 + 1,0x143e0,0x14760,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00010ae4 @ 0x10ae4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00010ae4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uchar auStackX_18 [8];
    uint auStackX_20 [2];
    int64_t var_30h_2;
    int64_t var_38h_2;
    uchar auStack_58 [8];
    int64_t iStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    iStack_50 = 0;
    var_40h = 0;
    (**(*0x146e8 + 0x138))(2,0x14478,0,&var_38h,&var_30h);
    uVar3 = 0;
    if (var_38h != 0) {
        do {
            (**(*0x146e8 + 0x98))(*(var_30h + uVar3 * 8),0x14478,&iStack_50);
            if (iStack_50 == 0) goto code_r0x00010c40;
            _var_28h = 0;
            auStackX_20[0] = 0;
            iVar1 = (**(iStack_50 + 0x10))(iStack_50,arg1,0,&var_28h,auStackX_18,auStack_58,auStackX_20);
        } while ((iVar1 < 0) && (uVar3 = uVar3 + 1, uVar3 < var_38h));
    }
    (**(*0x146e8 + 0x48))(var_30h);
    iVar1 = (**(*0x146e8 + 0x140))(0x14520,0,&var_18h);
    if (iStack_50 == 0) {
code_r0x00010c40:
        uVar2 = 0x800000000000000e;
    }
    else {
        iVar4 = 0;
        if (iVar1 == 0) {
            do {
                iVar1 = (**(iStack_50 + 0x18))(iStack_50,arg1,0x19,iVar4,&var_40h,&var_28h,auStackX_20);
                if (-1 < iVar1) {
                    if (*(var_40h + 0x10) == arg2) {
                        var_20h = 0;
                        iVar1 = (**var_18h)(var_18h,var_40h,*(var_40h + 4),&var_20h);
                    }
                    var_40h = 0;
                    iVar4 = iVar4 + 1;
                }
            } while (iVar1 == 0);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012028 @ 0x12028 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Removing unreachable block (ram,0x00012257)

void fcn.00012028(void)

{
    uint8_t *arg1;
    uchar uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    bool bVar12;
    int64_t *apiStackX_8 [2];
    int64_t var_bp_20h;
    int64_t var_28h;
    
    uVar5 = 0;
    iVar2 = fcn.00011c30(0x144d0);
    if ((iVar2 != 0) && (iVar3 = (**(*0x146e8 + 0x140))(0x14420,0,apiStackX_8), iVar3 == 0)) {
        iVar3 = 2;
        uVar4 = uVar5;
        do {
            *(*apiStackX_8[0] + 0x150 + uVar4) = *(iVar2 + 0x38 + uVar4);
            uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
        uVar4 = uVar5;
        do {
            *(*apiStackX_8[0] + 0x134 + uVar4) = *(iVar2 + 0x34 + uVar4);
            uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
        puVar6 = iVar2 + 0x30;
        iVar8 = 4;
        *(*apiStackX_8[0] + 0x16f) = *(iVar2 + 0x18) & 1;
        *(*apiStackX_8[0] + 0x170) = *(iVar2 + 0x40);
        *(*apiStackX_8[0] + 0x152) = *(iVar2 + 0x3a);
        uVar4 = uVar5;
        do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            *(*apiStackX_8[0] + 0x138 + uVar4) = uVar1;
            uVar4 = uVar4 + 1;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar8 = 0x13c;
        uVar4 = uVar5;
        puVar7 = iVar2 + 0x48;
        uVar9 = uVar5;
        uVar11 = uVar5;
        do {
            uVar10 = uVar11 + 3;
            *(iVar8 + *apiStackX_8[0]) = *(iVar2 + 0x2c) >> (uVar11 & 0x1f) & 7 | 0x70000;
            iVar8 = iVar8 + 4;
            *(*apiStackX_8[0] + 0x15b + uVar4) = puVar7[-6];
            uVar4 = uVar4 + 1;
            arg1 = puVar7 + 0xf;
            *(*apiStackX_8[0] + 0x15f + uVar9) = *puVar7 << 10 | *(puVar7 + 1);
            *(*apiStackX_8[0] + 0x167 + uVar9) = puVar7[4] << 10 | *(puVar7 + 5);
            uVar9 = uVar9 + 2;
            puVar7 = arg1;
            uVar11 = uVar10;
        } while (uVar10 < 0xc);
        puVar6 = iVar2 + 0x36;
        do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            *(*apiStackX_8[0] + 0x136 + uVar5) = uVar1;
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(*apiStackX_8[0] + 0x1b4) = 0x7110;
        fcn.00011ba0(arg1);
        if (*0xc0069000 != -1) {
            uVar5 = *0xc0069010 & 0xfffffff0;
            if ((*0xc0069010 & 6) == 4) {
                uVar5 = uVar5 + (*0xc0069014 << 0x20);
            }
            bVar12 = uVar5 == 0;
            if (bVar12) {
                *0xc0069010 = 0xfe600000;
                uVar5 = 0xfe600000;
            }
            *(*apiStackX_8[0] + 0x14c) = *(uVar5 + 0xc110);
            if (bVar12) {
                *0xc0069010 = 0;
                *0xc0069014 = 0;
            }
        }
    }
    return;
}


/* fcn.00011888 @ 0x11888 */

void fcn.00011888(void)

{
    if (*0x14608 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x14608 = '\x05';
        }
        else {
            *0x14608 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = puVar1[3];
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00011ad0 @ 0x11ad0 */

ulong fcn.00011ad0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x146e8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00014180 @ 0x14180 */

void fcn.00014180(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint32_t arg1_01;
    uint64_t uVar4;
    uint32_t auStackX_18 [2];
    
    arg1_01 = arg1;
    uVar2 = arg1_01;
    arg1_00 = fcn.0001395c(arg1);
    cVar1 = fcn.00014244(uVar2);
    if (cVar1 != '\0') {
        if (0xffffff < uVar2) {
            iVar3 = fcn.0001395c(arg1 & 0xffffffff);
            uVar4 = (arg1_01 >> 0x18) + 0x28 + iVar3;
            uVar4 = uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff;
            *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) | 0x400;
        }
        cVar1 = fcn.00013a20(arg1 & 0xffffffff,auStackX_18);
        if (cVar1 != '\0') {
            uVar2 = fcn.000139b8(arg1_01);
            while( true ) {
                cVar1 = fcn.00013b3c(uVar2,auStackX_18);
                if (cVar1 == '\0') break;
                fcn.00014180(auStackX_18[0],arg2 & 0xffffffff);
            }
        }
        fcn.00013a8c(arg1_00,arg2 & 0xffffffff);
    }
    return;
}


/* fcn.00013e6c @ 0x13e6c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h

uint64_t fcn.00013e6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    uint32_t arg1_00;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t arg1_01;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint8_t uStackX_10;
    uint32_t auStackX_20 [2];
    int64_t var_40h;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t var_bp_18h;
    int32_t var_14h;
    int32_t var_bp_10h;
    int32_t var_ch;
    
    uStackX_10 = arg2;
    arg1_01 = arg1;
    uVar10 = arg2 & 0xff;
    arg1_00 = fcn.000139b8(arg1_01);
    if (arg1_00 == 2) {
        uStackX_10 = uStackX_10 + 1;
        uVar10 = uStackX_10;
    }
    uVar13 = 0;
    iVar8 = fcn.0001395c(arg1 & 0xffffffff);
    uVar11 = (arg1_01 >> 0x18) + 0xc + iVar8;
    uVar9 = iVar8 + 4 + (arg1_01 >> 0x18);
    uVar6 = *((uVar11 >> 4 & 0x10000000 | uVar11 & 0xffffffff) + 0xc0000000);
    uVar14 = *((uVar9 >> 4 & 0x10000000 | uVar9 & 0xffffffff) + 0xc0000000);
    uVar9 = uVar14;
    if ((uVar14 >> 0xf & 1) != 0) {
        uVar13 = uVar6 >> 10 & 1;
    }
    uVar14 = uVar6 >> 0xf & 7;
    uVar13 = (uVar6 & 0x7000) * 2 | uVar6 >> 10 & 2 | uVar13;
    puVar12 = uVar13;
    if (uVar14 < 7) {
        uVar6 = 1 << uVar14;
    }
    else {
        uVar6 = 0xff;
    }
    uVar14 = 0xff;
    uVar13 = (uVar6 & 0xff) << 0x10 | uVar13;
    iVar7 = fcn.000139b8(arg1_01);
    if (iVar7 == 1) {
        uVar6 = uVar9 >> 9 & 7;
        if (uVar6 < 7) {
            uVar14 = 1 << uVar6;
        }
        uStack_34 = (uVar14 & 0xff) << 5 | uVar9 >> 4 & 0x1c | uVar13;
    }
    else {
        uStack_34 = uVar13 | 0x1ffc;
    }
    if (arg3 != 0) {
        puVar12 = &uStack_34;
        fcn.00013d0c(arg1 & 0xffffffff,puVar12,arg3);
    }
    uVar6 = uStack_34;
    if (arg1_00 == 1) {
        uVar10 = fcn.00013cb4(uStack_34,CONCAT71(puVar12 >> 8,-uVar10));
    }
    else {
        cVar5 = fcn.00013a20(arg1 & 0xffffffff,auStackX_20);
        if (cVar5 != '\0') {
            puVar12 = auStackX_20;
            cVar5 = fcn.00013b3c(arg1_00,puVar12);
            if (cVar5 != '\0') {
                uVar14 = arg1_01;
                do {
                    uVar13 = fcn.00013e6c(auStackX_20[0],CONCAT71(puVar12 >> 8,uVar10),arg3);
                    if (arg1_00 == 3) {
                        uStack_34 = uVar13 >> 5;
                        uStack_2c = uVar13 >> 2;
                        uStack_30 = uVar6 >> 2;
                        uVar4 = uVar13;
                        if (uVar13 >> 0x10 < uVar6 >> 0x10) {
                            uVar4 = uVar6;
                        }
                        uVar1 = uVar13 >> 0xd;
                        if ((uVar13 >> 0xd & 7) < (uVar6 >> 0xd & 7)) {
                            uVar1 = uVar6 >> 0xd;
                        }
                        uVar2 = uStack_34;
                        if (uVar6 >> 5 < uStack_34) {
                            uVar2 = uVar6 >> 5;
                        }
                        uVar10 = uStackX_10;
                        uVar3 = uStack_2c;
                        if ((uStack_30 & 7) < (uStack_2c & 7)) {
                            uVar3 = uStack_30;
                        }
                        uVar6 = ((((uVar4 >> 0x10 & 0xff) << 3 | uVar1 & 7) << 8 | uVar2 & 0xff) << 3 | uVar3 & 7) << 2
                                | uVar13 & uVar6 & 3;
                    }
                    else {
                        uVar4 = uVar13 >> 5;
                        if (uVar6 >> 5 < uVar13 >> 5) {
                            uVar4 = uVar6 >> 5;
                        }
                        uVar1 = uVar13 >> 2;
                        if ((uVar6 >> 2 & 7) < (uVar13 >> 2 & 7)) {
                            uVar1 = uVar6 >> 2;
                        }
                        uVar6 = ((uVar4 & 0xff) << 3 | uVar1 & 7) << 2 | uVar6 & 0xffe003;
                    }
                    puVar12 = auStackX_20;
                    uVar6 = uVar6 | uVar14 & 0xff000000;
                    cVar5 = fcn.00013b3c(arg1_00,puVar12);
                    uVar14 = uVar6;
                } while (cVar5 != '\0');
            }
            if (arg1_00 == 3) {
                while( true ) {
                    fcn.00013ddc(arg1_01,uVar6);
                    cVar5 = fcn.00013b3c(3,auStackX_20);
                    if (cVar5 == '\0') break;
                    arg1_01 = auStackX_20[0];
                }
                if ((((uVar6 & 2) == 0) || ((uVar6 & 0x1fe0) < (uVar6 >> 0xb & 0x1fe0))) && ((uVar6 & 0x1fe0) != 0x1fe0)
                   ) {
                    uVar6 = uVar6 ^ ((uVar6 & 0xffffffe0) + 0x20 ^ uVar6) & 0x1fe0;
                }
            }
        }
        uVar10 = uVar6;
    }
    return uVar10;
}


/* fcn.00011e84 @ 0x11e84 */

void fcn.00011e84(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint16_t *puVar10;
    uint32_t auStackX_8 [2];
    
    iVar5 = fcn.00011c30(0x144d0);
    fcn.00010290(auStackX_8,4);
    uVar2 = *0xc000007c;
    puVar10 = iVar5 + 0x49;
    uVar9 = 0;
    uVar1 = *((*0xc0000048 & 0xfffffffe) + 0x7090);
    do {
        if ((uVar1 >> (uVar9 & 0x1f) & 1) != 0) {
            uVar8 = uVar2 >> (uVar9 * '\x03' & 0x1fU) & 7;
            if (iVar5 != 0) {
                auStackX_8[0] = auStackX_8[0] ^ (*(puVar10 + -1) << 10 ^ auStackX_8[0]) & 0x1c00;
                auStackX_8[0] = auStackX_8[0] ^ (*puVar10 ^ auStackX_8[0]) & 0x3ff;
                auStackX_8[0] = auStackX_8[0] ^ (*(puVar10 + 3) << 0x17 ^ auStackX_8[0]) & 0x3800000;
                auStackX_8[0] = auStackX_8[0] ^ (puVar10[2] << 0xd ^ auStackX_8[0]) & 0x7fe000;
            }
            uVar3 = auStackX_8[0];
            uVar6 = uVar8 | 0x38;
            if (*(uVar6 * 0x1000 + 0xc0000000) != -1) {
                uVar4 = fcn.0001162c(uVar6 << 0xc);
                uVar7 = (uVar4 << 3 | uVar8) << 0x15 | 0x70000;
                fcn.00014180(uVar7,uVar3);
                fcn.00013e6c(uVar7,0,0);
            }
        }
        uVar8 = uVar9 + 1;
        uVar9 = uVar8;
        puVar10 = puVar10 + 0xf;
    } while (uVar8 < 4);
    return;
}


/* fcn.000122cc @ 0x122cc */

ulong fcn.000122cc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int *piVar3;
    int64_t aiStackX_18 [2];
    
    fcn.00011820(*arg2,0x14468,aiStackX_18);
    piVar3 = *(aiStackX_18[0] + 0x20);
    uVar1 = *(aiStackX_18[0] + 0x1c);
    if (piVar3 != NULL) {
        iVar2 = *piVar3;
        *arg1 = piVar3;
        if (iVar2 != 0x54425624) {
            (**(*0x146e8 + 0x48))();
            *arg1 = 0;
            return 0x8000000000000003;
        }
        if (uVar1 != 0) {
            if (uVar1 < *(piVar3 + 6)) {
                *(piVar3 + 6) = uVar1;
            }
            return 0;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00010370 @ 0x10370 */

int64_t fcn.00010370(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011a9c @ 0x11a9c */

uint32_t fcn.00011a9c(void)

{
    uint32_t uStackX_8;
    
    fcn.000102f0(7,0,0,0);
    return uStackX_8 >> 0xd & 0xffffff01;
}


/* fcn.00012874 @ 0x12874 */

void fcn.00012874(int64_t arg1)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    uVar3 = *(arg1 + 2);
    uVar2 = 0;
    do {
        iVar1 = 0xff;
        if (*(uVar2 * 4 + 0x146b0) == CONCAT11(*(arg1 + 0x16),*(arg1 + 0x17))) {
            iVar1 = *(uVar2 * 4 + 0x146b2);
            break;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    if ((((iVar1 == 0xff) || (*(arg1 + 8) == 0)) ||
        ((iVar1 == 0x80 && (*(((*(arg1 + 0x16) & 0x1f) << 3 | *(arg1 + 0x17) & 7) * 0x1000 + 0xc0000000) == -1)))) ||
       ((((*(arg1 + 0x16) == '\x02' && (*(arg1 + 0x17) == '\0')) && (*0xc0010000 != -1)) &&
        (((*0xc0010002 == 0x469f || (*0xc0010002 == 0x46ff)) || ((*0xc0010002 == -0x5861 || (*0xc0010002 == -0x5801)))))
        ))) {
        uVar3 = uVar3 - 8;
    }
    if ((uVar3 < 0x11) && (*(arg1 + 4) != '\x01')) {
        *(arg1 + 2) = 0;
    }
    else {
        *(arg1 + 2) = uVar3;
    }
    return;
}


/* fcn.0001299c @ 0x1299c */

void fcn.0001299c(int64_t arg1)

{
    int64_t arg2;
    uint uVar1;
    uint32_t uVar2;
    bool bVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t arg1_00;
    
    uVar6 = *(arg1 + 2);
    uVar8 = uVar6 - 0x10 >> 3;
    iVar4 = fcn.00011c30(0x14580);
    if ((iVar4 != 0) && (iVar4 != -0x18)) {
        uVar7 = 0;
        if (uVar8 != 0) {
            arg1_00 = arg1 + 0x10;
            do {
                if (*0x14758 == '\0') {
                    bVar3 = false;
                    if (uVar7 < 2) {
                        bVar3 = true;
                    }
                }
                else {
                    if (uVar7 == 0) {
                        uVar1 = *(iVar4 + 0x29);
                        *(arg1 + 0x15) = *(iVar4 + 0x2b);
                        uVar5 = uVar1 >> 0x18;
                        *(arg1 + 0x16) = uVar5 & 0x1f;
                        *(arg1 + 0x17) = uVar5 >> 5;
                        *0xfec00000 = 0;
                        *(arg1 + 0x14) = *0xfec00010 >> 0x18;
                    }
                    bVar3 = false;
                    if (uVar7 == 1) {
                        uVar2 = *(iVar4 + 0x29);
                        *(arg1 + 0x1d) = *(iVar4 + 0x29);
                        *(arg1 + 0x1f) = uVar2 >> 0xd & 7;
                        *(arg1 + 0x1e) = uVar2 >> 8 & 0x1f;
                        bVar3 = false;
                    }
                }
                arg2 = arg1 + 0x10 + uVar7 * 8;
                if (arg1_00 != arg2) {
                    fcn.000102b0(arg1_00,arg2,8);
                }
                if (bVar3) {
                    uVar6 = uVar6 - 8;
                }
                else {
                    arg1_00 = arg1_00 + 8;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
        }
        if ((uVar6 < 0x11) && (*(arg1 + 4) != '\x01')) {
            *(arg1 + 2) = 0;
        }
        else {
            *(arg1 + 2) = uVar6;
        }
    }
    return;
}


/* fcn.00012b04 @ 0x12b04 */

void fcn.00012b04(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    int16_t iVar7;
    uint8_t *arg1_00;
    
    uVar6 = *(arg1 + 2);
    uVar5 = uVar6 - 0x18 >> 3;
    if (uVar5 != 0) {
        arg1_00 = arg1 + 0x18;
        puVar4 = arg1 + 0x1f;
        do {
            uVar3 = 0;
            do {
                iVar7 = 0xff;
                if (*(uVar3 * 4 + 0x146b0) == CONCAT11(puVar4[-1],*puVar4)) {
                    iVar7 = *(uVar3 * 4 + 0x146b2);
                    break;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < 4);
            bVar2 = true;
            bVar1 = bVar2;
            if ((iVar7 != 0xff) &&
               (((iVar7 != 0x80 || (*(((puVar4[-1] & 0x1f) << 3 | *puVar4 & 7) * 0x1000 + 0xc0000000) != -1)) &&
                (bVar1 = false, iVar7 == 0x8f)))) {
                bVar1 = *(arg1 + 8) == 0;
            }
            if (arg1_00 != puVar4 + -7) {
                fcn.000102b0(arg1_00,puVar4 + -7,8);
            }
            if (*(arg1 + 0x10) == 0) {
                bVar1 = bVar2;
            }
            if (bVar1) {
                uVar6 = uVar6 - 8;
            }
            else {
                arg1_00 = arg1_00 + 8;
            }
            puVar4 = puVar4 + 8;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    if (uVar6 < 0x19) {
        *(arg1 + 2) = 0;
    }
    else {
        *(arg1 + 2) = uVar6;
    }
    return;
}


/* fcn.00012c74 @ 0x12c74 */

void fcn.00012c74(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uchar *arg1_00;
    uint64_t uVar6;
    uint64_t uVar7;
    uchar auStackX_8 [8];
    int64_t iStackX_10;
    uchar auStack_b8 [4];
    int iStack_b4;
    char cStack_af;
    uchar auStack_88 [2];
    uint16_t uStack_86;
    uchar auStack_70 [2];
    uint16_t uStack_6e;
    uchar auStack_58 [2];
    uint16_t uStack_56;
    uchar auStack_38 [2];
    uint16_t uStack_36;
    
    iStackX_10 = arg2;
    (**(*0x146e8 + 0x140))(0x14488,0,&iStackX_10);
    iVar4 = fcn.00011820(iStackX_10,0x14400,auStackX_8);
    if (-1 < iVar4) {
        if (*0x14758 != '\0') {
            *(arg1 + 0x25) = *(arg1 + 0x25) | 1;
        }
        iVar4 = *0x14750;
        if (*(*0x14750 + 0x25) == '\x01') {
            *(arg1 + 0x25) = *(arg1 + 0x25) | 2;
        }
        else {
            *(arg1 + 0x25) = *(arg1 + 0x25) & 0xfd;
        }
        if (*(iVar4 + 0x26) == '\x01') {
            *(arg1 + 0x25) = *(arg1 + 0x25) | 4;
        }
        if (arg1 + 10 != 0x14498) {
            fcn.000102b0(arg1 + 10,0x14498,6);
        }
        *(arg1 + 0x10) = *0x144b8;
        *(arg1 + 0x18) = *0x145e0;
        *(arg1 + 0x1c) = *0x14450;
        *(arg1 + 0x20) = *0x144a0;
        cVar1 = fcn.00011a9c();
        if ((cVar1 == '\x01') && (uVar5 = rdmsr(0x982), (uVar5 & 3) == 3)) {
            *(arg1 + 0x24) = 0x2d;
        }
        else {
            *(arg1 + 0x24) = 0x26;
        }
        uVar2 = *0xc0000050 >> 8;
        if (uVar2 < 0xf0) {
            uVar7 = uVar2 << 0x19;
        }
        else {
            uVar7 = uVar2 * 0x400000 - 0x3bc00000;
        }
        uVar2 = *0xc0000050 >> 6;
        uVar5 = 0;
        uVar6 = *0xc00000b4;
        *(arg1 + 0x88) = uVar6 & 0xfffffffe;
        *(arg1 + 0x90) = (((1 << (uVar2 & 3)) << 0x14) - 1) + (uVar7 & 0xffffffff) + (uVar6 & 0xfffffffe);
        uVar3 = fcn.00014294(0);
        iVar4 = CONCAT71(uVar5 >> 8,1);
        *(arg1 + 0x38) = uVar3;
        uVar3 = fcn.00014294(iVar4);
        *(arg1 + 0x50) = uVar3;
        uVar3 = fcn.00014294(CONCAT71(iVar4 >> 8,2));
        *(arg1 + 0x68) = uVar3;
        if (auStack_b8 != arg1) {
            fcn.000102b0(auStack_b8,arg1,0xa0);
        }
        fcn.00012874(auStack_88);
        fcn.00012874(auStack_70);
        fcn.0001299c(auStack_58);
        fcn.00012b04(auStack_38);
        arg1_00 = auStack_88;
        if (uStack_86 != 0) {
            arg1_00 = auStack_88 + uStack_86;
        }
        if (uStack_6e != 0) {
            if ((uStack_6e != 0) && (arg1_00 != auStack_70)) {
                fcn.000102b0(arg1_00,auStack_70,uStack_6e);
            }
            arg1_00 = arg1_00 + uStack_6e;
        }
        if (uStack_56 != 0) {
            if ((uStack_56 != 0) && (arg1_00 != auStack_58)) {
                fcn.000102b0(arg1_00,auStack_58,uStack_56);
            }
            arg1_00 = arg1_00 + uStack_56;
        }
        if (uStack_36 != 0) {
            if ((uStack_36 != 0) && (arg1_00 != auStack_38)) {
                fcn.000102b0(arg1_00,auStack_38,uStack_36);
            }
            arg1_00 = arg1_00 + uStack_36;
        }
        uVar7 = arg1_00 - auStack_b8;
        cVar1 = iStack_b4 - uVar7;
        iStack_b4 = uVar7;
        cStack_af = cStack_af + cVar1;
        if ((iStack_b4 != 0) && (arg1 != auStack_b8)) {
            fcn.000102b0(arg1,auStack_b8,uVar7 & 0xffffffff);
        }
    }
    return;
}


/* fcn.000130e8 @ 0x130e8 */

void fcn.000130e8(void)

{
    (**(*0x146e8 + 0x140))(0x14530,0,0x14720);
    //WARNING: Could not recover jumptable at 0x00013124. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x146e8 + 0x140))(0x14520,0,0x14728);
    return;
}


/* fcn.0001325c @ 0x1325c */

int64_t fcn.0001325c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x14720 == 0) && (fcn.000130e8(), *0x14720 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x14720 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x000132ef;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x54445344);
        uVar2 = fcn.00011b00(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x000132ef:
    return iVar1;
}


/* fcn.00011b00 @ 0x11b00 */

void fcn.00011b00(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011ad0();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102b0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000137c8 @ 0x137c8 */

int64_t fcn.000137c8(void)

{
    char cVar1;
    char cVar2;
    uchar uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    int64_t *apiStackX_18 [2];
    
    cVar2 = *0x14741;
    cVar1 = *0x14740;
    iVar4 = (**(*0x146e8 + 0x140))(0x14420,0,apiStackX_18);
    if (-1 < iVar4) {
        if ((*(*0x14730 * 0x100000 + 0xc0000000) != -0x7f7a) && (*((*0x14730 << 0x14 | 0xb) + 0xc0000000) == '\x06')) {
            if (cVar1 == '\x01') {
                if (cVar2 == '\0') {
                    *(*apiStackX_18[0] + 0x1a1) = 1;
                }
                else if (cVar2 == '\x01') {
                    *(*apiStackX_18[0] + 0x1a2) = 1;
                }
                else if (cVar2 == '\x02') {
                    *(*apiStackX_18[0] + 0x1a3) = 1;
                }
            }
            uVar5 = *0x14730;
            if (*0x14730 != 0xff) {
                do {
                    *0x14730 = *((*0x14730 << 0x14 | 0x19) + 0xc0000000);
                    if (*((*0x14730 << 0x14 | 0x19) + 0xc0000000) == '\0') break;
                    uVar5 = uVar5 + 1;
                } while (uVar5 != 0xff);
            }
        }
        uVar3 = fcn.0001162c(*0x14730 << 0x14);
        if ((cVar1 == '\x01') && (cVar2 == '\0')) {
            *(*apiStackX_18[0] + 0xc5) = uVar3;
        }
    }
    return iVar4;
}


/* fcn.000118c4 @ 0x118c4 */

ulong fcn.000118c4(void)

{
    char cVar1;
    
    cVar1 = fcn.00011888();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00011888(), cVar1 != '\x05')) && (cVar1 = fcn.00011888(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00011888(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000132fc @ 0x132fc */

int64_t fcn.000132fc(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t var_bp_10h;
    
    iVar1 = (**(*0x146e8 + 0x140))(0x14420,0,&var_bp_10h);
    iVar3 = *0x14748;
    iVar2 = 0;
    if (-1 < iVar1) {
        *(*var_bp_10h + 0x87) = *(*var_bp_10h + 0x87) | *(*0x14748 + 0x18);
        *(*var_bp_10h + 0x89) = *(iVar3 + 0x1d);
        *(*var_bp_10h + 0x96) = *(iVar3 + 0x2e);
        *(*var_bp_10h + 0xa3) = *(iVar3 + 0x3f);
        *(*var_bp_10h + 0xb0) = *(iVar3 + 0x50);
        *(*var_bp_10h + 0xc1) = *(iVar3 + 0x61);
        *(*var_bp_10h + 0xc3) = *(iVar3 + 99);
        *(*var_bp_10h + 0x12d) = *(iVar3 + 0x1c);
        *(*var_bp_10h + 0x12e) = (*0x14741 + *0x14740 * 8) * 0x1000 + -0x40000000;
        if (*(iVar3 + 0x1d) != '\0') {
            *(*var_bp_10h + 0x8a) = *(iVar3 + 0x1e);
            *(*var_bp_10h + 0x8b) = *(iVar3 + 0x1f);
            iVar1 = iVar2;
            do {
                *(*var_bp_10h + 0x8f + iVar1) = *(iVar3 + 0x23 + iVar1);
                iVar1 = iVar1 + 1;
            } while (iVar1 < 2);
            *(*var_bp_10h + 0x91) = *(iVar3 + 0x25);
            *(*var_bp_10h + 0x95) = *(iVar3 + 0x29);
            iVar1 = fcn.000137c8();
            iVar3 = *0x14748;
        }
        if (*(iVar3 + 0x2e) != '\0') {
            *(*var_bp_10h + 0x97) = *(iVar3 + 0x2f);
            *(*var_bp_10h + 0x98) = *(iVar3 + 0x30);
            iVar1 = iVar2;
            do {
                *(*var_bp_10h + 0x9c + iVar1) = *(iVar3 + 0x34 + iVar1);
                iVar1 = iVar1 + 1;
            } while (iVar1 < 2);
            *(*var_bp_10h + 0x9e) = *(iVar3 + 0x36);
            *(*var_bp_10h + 0xa2) = *(iVar3 + 0x3a);
            iVar1 = fcn.000137c8();
            iVar3 = *0x14748;
        }
        if (*(iVar3 + 0x3f) != '\0') {
            *(*var_bp_10h + 0xa4) = *(iVar3 + 0x40);
            *(*var_bp_10h + 0xa5) = *(iVar3 + 0x41);
            do {
                *(*var_bp_10h + 0xa9 + iVar2) = *(iVar3 + 0x45 + iVar2);
                iVar2 = iVar2 + 1;
            } while (iVar2 < 2);
            *(*var_bp_10h + 0xab) = *(iVar3 + 0x47);
            *(*var_bp_10h + 0xaf) = *(iVar3 + 0x4b);
            iVar1 = fcn.000137c8();
        }
    }
    return iVar1;
}


/* fcn.00013558 @ 0x13558 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00013558(void)

{
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uchar auStackX_8 [8];
    uint auStackX_10 [2];
    uchar auStackX_18 [8];
    int64_t var_28h;
    int64_t var_30h_2;
    int64_t var_38h;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t var_40h;
    uint32_t var_38h_2;
    int64_t var_30h;
    int64_t var_28h_2;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    var_28h = 0;
    iStack_58 = 0;
    var_bp_20h._0_4_ = *0x14510;
    var_bp_20h._4_4_ = str.9_IK._0_4_;
    var_18h._0_4_ = *0x14518;
    var_18h._4_4_ = *0x1451c;
    cVar2 = fcn.000118c4();
    if (cVar2 != '\0') {
        var_bp_20h._0_4_ = *0x14500;
        var_bp_20h._4_1_ = str._ni_rN[0];
        var_bp_20h._5_1_ = str._ni_rN[1];
        var_bp_20h._6_1_ = str._ni_rN[2];
        var_bp_20h._7_1_ = str._ni_rN[3];
        var_18h._0_4_ = *0x14508;
        var_18h._4_4_ = *0x1450c;
    }
    (**(*0x146e8 + 0x138))(2,0x14478,0,&uStack_50,&var_40h);
    uVar5 = 0;
    if (uStack_50 != 0) {
        do {
            (**(*0x146e8 + 0x98))(*(var_40h + uVar5 * 8),0x14478,&var_28h);
            if (var_28h == 0) goto code_r0x00013735;
            _var_38h_2 = 0;
            auStackX_10[0] = 0;
            iVar3 = (**(var_28h + 0x10))(var_28h,&var_bp_20h,0,&var_38h_2,auStackX_8,auStackX_18,auStackX_10);
        } while ((iVar3 < 0) && (uVar5 = uVar5 + 1, uVar5 < uStack_50));
    }
    (**(*0x146e8 + 0x48))(var_40h);
    iVar3 = (**(*0x146e8 + 0x140))(0x14520,0,&var_28h_2);
    if (var_28h == 0) {
code_r0x00013735:
        uVar4 = 0x800000000000000e;
    }
    else {
        iVar6 = 0;
        if (iVar3 == 0) {
            do {
                iVar3 = (**(var_28h + 0x18))(var_28h,&var_bp_20h,0x19,iVar6,&iStack_58,&var_38h_2,auStackX_10);
                if (-1 < iVar3) {
                    bVar1 = false;
                    if (((CONCAT44(str.9_IK._0_4_,*0x14510) == CONCAT44(var_bp_20h._4_4_,var_bp_20h)) &&
                        (CONCAT44(*0x1451c,*0x14518) == CONCAT44(var_18h._4_4_,var_18h))) &&
                       (bVar1 = false, *(iStack_58 + 0x10) == 0x6765506748)) {
                        bVar1 = true;
                    }
                    if (((CONCAT44(str._ni_rN._0_4_,*0x14500) == CONCAT44(var_bp_20h._4_4_,var_bp_20h)) &&
                        (CONCAT44(*0x1450c,*0x14508) == CONCAT44(var_18h._4_4_,var_18h))) &&
                       (*(iStack_58 + 0x10) == 0x7464735370526748)) {
                        bVar1 = true;
                    }
                    if (bVar1) {
                        var_30h = 0;
                        iVar3 = (**var_28h_2)(var_28h_2,iStack_58,*(iStack_58 + 4),&var_30h);
                    }
                    iVar6 = iVar6 + 1;
                    iStack_58 = 0;
                }
            } while (iVar3 == 0);
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001395c @ 0x1395c */

uint64_t fcn.0001395c(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar1 = arg1;
    uVar2 = arg1 >> 8 & 0xe000;
    if (arg1 == '\0') {
        uVar3 = (uVar2 | uVar1 & 0x1f0000) >> 1 | (uVar1 & 0xff00) << 0xc;
    }
    else {
        uVar3 = (uVar2 | uVar1 & 0x1f0000) >> 1 | (uVar1 & 0xff00) << 0xc | (arg1 & 0xffU) << 0x20;
    }
    return uVar3;
}


/* fcn.000116f8 @ 0x116f8 */

uint16_t fcn.000116f8(int64_t arg1)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint64_t uVar3;
    
    iVar2 = 0;
    uVar1 = 0x100;
    while( true ) {
        if (iVar2 == -1) {
            return 0;
        }
        uVar3 = uVar1 + arg1;
        iVar2 = *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000);
        if (iVar2 == 0x18) break;
        uVar1 = *((uVar3 + 2 >> 4 & 0x10000000 | uVar3 + 2 & 0xffffffff) + 0xc0000000) >> 4 & 0xffc;
        if (uVar1 == 0) {
            return 0;
        }
    }
    return uVar1;
}


/* fcn.000139b8 @ 0x139b8 */

int fcn.000139b8(uint32_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    uVar4 = arg1;
    if (arg1 < 0x1000000) {
        iVar2 = 0;
    }
    else {
        iVar3 = fcn.0001395c(uVar4);
        uVar4 = (uVar4 >> 0x18) + iVar3 + 2;
        uVar1 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) >> 4;
        if (uVar1 == 5) {
            iVar2 = 2;
        }
        else {
            iVar2 = (-((uVar1 - 4 & 0xfd) != 0) & 0xfffffffe) + 3;
        }
    }
    return iVar2;
}


/* fcn.00013d0c @ 0x13d0c */

void fcn.00013d0c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    int16_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    
    uVar4 = fcn.0001395c(arg1);
    iVar2 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000);
    iVar3 = *((uVar4 + 2 >> 4 & 0x10000000 | uVar4 + 2 & 0xffffffff) + 0xc0000000);
    cVar1 = *((uVar4 + 8 >> 4 & 0x10000000 | uVar4 + 8 & 0xffffffff) + 0xc0000000);
    if (*arg3 != 0) {
        uVar4 = *arg3;
        pcVar5 = *(arg3 + 8) + 4;
        do {
            if (((((pcVar5[4] & 1U) != 0) && (*(pcVar5 + -4) == iVar2)) && (*(pcVar5 + -2) == iVar3)) &&
               ((*pcVar5 == cVar1 || (*pcVar5 == -1)))) {
                if ((*arg2 & 1) != 0) {
                    *arg2 = *arg2 ^ (pcVar5[3] ^ *arg2) & 1;
                }
                if ((*arg2 & 2) != 0) {
                    *arg2 = *arg2 ^ (pcVar5[3] ^ *arg2) & 2;
                }
            }
            pcVar5 = pcVar5 + 0x18;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return;
}


/* fcn.00013cb4 @ 0x13cb4 */

uint64_t fcn.00013cb4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    
    uVar1 = arg1;
    if ((uVar1 & 0x1fe0) != 0x1fe0) {
        cVar2 = arg2;
        if (cVar2 < '\x01') {
            if (-cVar2 < (arg1 >> 5 & 0xff)) {
                arg1 = uVar1 ^ (cVar2 * 0x20 + uVar1 ^ uVar1) & 0x1fe0;
            }
            else {
                arg1 = uVar1 & 0xffffe01f;
            }
        }
        else {
            arg1 = uVar1 ^ (cVar2 * 0x20 + uVar1 ^ uVar1) & 0x1fe0;
        }
    }
    return arg1 & 0xffffffff;
}


/* fcn.00013a20 @ 0x13a20 */

uint64_t fcn.00013a20(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    char cVar2;
    uint64_t uVar3;
    
    *arg2 = arg1;
    *arg2 = *arg2 | 0xff0000;
    uVar3 = fcn.0001395c(arg1);
    if (*((uVar3 + 0xb >> 4 & 0x10000000 | uVar3 + 0xb & 0xffffffff) + 0xc0000000) == '\x06') {
        uVar1 = *((uVar3 + 0x18 >> 4 & 0x10000000 | uVar3 + 0x18 & 0xffffffff) + 0xc0000000);
        cVar2 = uVar1 >> 8;
        *(arg2 + 1) = cVar2;
        uVar3 = CONCAT21(uVar1 >> 0x10,cVar2 != '\0');
    }
    else {
        uVar3 = uVar3 & 0xffffffffffffff00;
    }
    return uVar3;
}


/* fcn.00013b3c @ 0x13b3c */

ulong fcn.00013b3c(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    iVar5 = 0xc0000000;
    do {
        if (arg1 == 1) {
            return 0;
        }
        uVar3 = *arg2;
        if (uVar3 == '\0') {
            uVar4 = uVar3 >> 1 & 0xf8000 | (uVar3 & 0xff00) << 0xc;
        }
        else {
            uVar4 = (uVar3 & 0xff00) << 0xc | (uVar3 & 0xff) << 0x20 | uVar3 >> 1 & 0xf8000;
        }
        if (((uVar3 & 0x1f0000) == 0x1f0000) && ((uVar3 & 0xe00000) == 0xe00000)) {
            uVar3 = uVar3 & 0xff00ffff;
code_r0x00013c47:
            *arg2 = uVar3;
        }
        else {
            if (((uVar3 & 0xe00000) == 0xe00000) ||
               (((uVar3 & 0xe00000) == 0 &&
                ((cVar1 = *((uVar4 + 0xe >> 4 & 0x10000000 | uVar4 + 0xe & 0xffffffff) + iVar5), cVar1 == -1 ||
                 (-1 < cVar1)))))) {
                uVar2 = 0x1f;
                if (arg1 != 2) {
                    uVar2 = 0;
                }
                if ((uVar3 >> 0x10 & 0x1f) == uVar2) {
                    *arg2 = *arg2 | 0xff0000;
                    return 0;
                }
                uVar3 = (uVar3 & 0xffff0000) + 0x10000 & 0x1f0000 | *arg2 & 0xff00ffff;
                goto code_r0x00013c47;
            }
            *arg2 = ((uVar3 & 0xffe00000) + 0x200000 ^ uVar3) & 0xe00000 ^ uVar3;
        }
        uVar4 = fcn.0001395c(*arg2);
        if (*((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + iVar5) != -1) {
            cVar1 = fcn.0001162c(uVar4);
            iVar5 = 0xc0000000;
            if (cVar1 != '\0') {
                *(arg2 + 3) = cVar1;
                return 1;
            }
        }
    } while( true );
}


/* fcn.00013ddc @ 0x13ddc */

void fcn.00013ddc(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    uVar3 = 0;
    uVar2 = arg1 & 0xffffffff;
    if (((arg2 & 1) != 0) && ((arg2 >> 0xb & 0x1c) <= (arg2 & 0x1c))) {
        uVar3 = 1;
    }
    if (((arg2 & 2) != 0) && ((arg2 >> 0xb & 0x1fe0) <= (arg2 & 0x1fe0))) {
        uVar3 = uVar3 | 2;
    }
    iVar1 = fcn.0001395c(uVar2);
    uVar2 = (uVar2 >> 0x18) + iVar1 + 0x10;
    uVar2 = uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff;
    *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfffc | uVar3;
    return;
}


/* fcn.00014244 @ 0x14244 */

uint64_t fcn.00014244(uint32_t arg1)

{
    uint64_t in_RAX;
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg1;
    if (arg1 < 0x1000000) {
        uVar2 = in_RAX & 0xffffffffffffff00;
    }
    else {
        iVar1 = fcn.0001395c(uVar2);
        uVar2 = (uVar2 >> 0x18) + iVar1 + 0x24;
        uVar2 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) >> 0xb & 1;
    }
    return uVar2;
}


/* fcn.00013a8c @ 0x13a8c */

void fcn.00013a8c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar1 = fcn.000116f8(arg1);
    if (uVar1 != 0) {
        uVar2 = arg1 + 4 + uVar1;
        uVar3 = arg1 + 6 + uVar1;
        *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) = (arg2 >> 10 & 7) << 10 | arg2 & 0x3ff;
        *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) =
             ((arg2 >> 0x10) >> 7 & 7) << 10 | arg2 >> 0xd & 0x3ff;
    }
    return;
}


