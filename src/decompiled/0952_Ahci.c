// decompiled by r2ghidra: 0952_Ahci.pe32
// functions: 66

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103f8(arg1,arg2);
    *0x17c48 = 0;
    if (*0x17e10 == 0) {
        *0x17e00 = *(arg2 + 0x60);
        *0x17e08 = *(arg2 + 0x58);
        *0x17e10 = arg2;
    }
    *0x17e60 = 0;
    *0x17e68 = 0;
    *0x17e70 = 0;
    *0x17c40 = arg1;
    (**(*0x17e00 + 0x148))(0x17c48,0x17b90,0x17c20,0x17a80,0x17c60,0);
    return;
}


/* fcn.000103f8 @ 0x103f8 */

void fcn.000103f8(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x17de8 = *(arg1 + 0x60);
    *0x17de0 = arg1;
    fcn.00017658();
    puVar4 = fcn.00017658();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001044c:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102e0();
                fcn.000102d0();
                uVar2 = in(0x1808);
                fcn.000102b0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102a0();
                }
                fcn.000102b0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102d0();
                }
                else {
                    fcn.000102c0();
                }
                return;
            }
            if ((*0x17c78 == *(puVar4 + 4)) && (*0x17c80 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001044c;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00017658 @ 0x17658 */

int64_t fcn.00017658(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x17df8 == 0) {
        *0x17df8 = 0;
        if (*(*0x17de0 + 0x68) != 0) {
            piVar2 = *(*0x17de0 + 0x70);
            do {
                if ((*0x17b70 == *piVar2) && (*0x17b78 == piVar2[1])) {
                    *0x17df8 = (*(*0x17de0 + 0x70))[uVar1 * 3 + 2];
                    return *0x17df8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x17de0 + 0x68));
        }
    }
    return *0x17df8;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(void)

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


/* fcn.000102d0 @ 0x102d0 */

void fcn.000102d0(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

uint64_t fcn.000102b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102a2 @ 0x102a2 */

void fcn.000102a2(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.0001774c @ 0x1774c */

int64_t fcn.0001774c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x17e18 == '\0') {
        iVar1 = fcn.000176c4();
        if (-1 < iVar1) {
            iVar1 = (***0x17e30)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x17e20 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x17e20)(*0x17e20,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.00011898 @ 0x11898 */

void fcn.00011898(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_8;
    uchar auStack_18 [10];
    char cStack_e;
    
    iStackX_8 = arg1;
    (**(*0x17e00 + 0x168))(arg2,0x118,0);
    *arg2 = iStackX_8;
    *(arg2 + 0x70) = arg3;
    *(arg2 + 0x78) = arg4;
    *(arg2 + 0x58) = 0;
    *(arg2 + 0x60) = 0;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x98) = fcn.00014970;
    *(arg2 + 0x91) = 1;
    *(arg2 + 0xa8) = 0x14b08;
    *(arg2 + 0xa0) = fcn.00014e98;
    *(arg2 + 0xb0) = fcn.00014d9c;
    *(arg2 + 0xb8) = fcn.00015160;
    *(arg2 + 0xc0) = fcn.00016268;
    *(arg2 + 200) = fcn.000168f0;
    *(arg2 + 0xd0) = 0x16b58;
    *(arg2 + 0xd8) = fcn.000153a0;
    iVar1 = (**(arg4 + 0x30))(arg4,0,0,0x10,auStack_18);
    if ((-1 < iVar1) && (cStack_e == '\x04')) {
        *(arg2 + 0x91) = 0;
    }
    *(arg2 + 0xe0) = 0;
    *(arg2 + 0xe4) = 0xffff;
    iVar1 = fcn.00011c4c(arg2);
    if (-1 < iVar1) {
        (**(*0x17e00 + 0x80))(&iStackX_8,0x17be0,0,arg2);
    }
    return;
}


/* fcn.00010b68 @ 0x10b68 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010b68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int8_t arg_58h,
                    int8_t arg_60h)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int64_t arg3_00;
    int64_t arg4_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t in_stack_00000028;
    char in_stack_00000030;
    char in_stack_00000038;
    int64_t var_48h;
    int64_t aiStack_38 [2];
    int64_t var_bp_10h;
    
    aiStack_38[0] = 0;
    piVar4 = *(arg4 + 0x58);
    if (piVar4 != NULL) {
        do {
            piVar1 = piVar4 + -0x73;
            if ((piVar4[-0x72] == in_stack_00000030) && (*(piVar4 + -0x38f) == in_stack_00000038)) break;
            piVar4 = *piVar4;
            piVar1 = NULL;
        } while (piVar4 != NULL);
        if ((piVar1 != NULL) && ((*(piVar1 + 0xb) - 2U & 0xfd) == 0)) {
            return 0;
        }
    }
    arg4_00 = CONCAT71(arg4 >> 8,in_stack_00000038);
    arg3_00 = CONCAT71(piVar4 >> 8,in_stack_00000030);
    iStackX_18 = arg3;
    iVar2 = fcn.00011f90(arg4,in_stack_00000028,arg3_00,arg4_00);
    piVar4 = *(arg4 + 0x58);
    if (piVar4 == NULL) {
        piVar1 = NULL;
    }
    else {
        do {
            piVar1 = piVar4 + -0x73;
            if ((piVar4[-0x72] == in_stack_00000030) && (*(piVar4 + -0x38f) == in_stack_00000038)) break;
            piVar4 = *piVar4;
            piVar1 = NULL;
        } while (piVar4 != NULL);
    }
    if (iVar2 < 0) {
        if (piVar1 == NULL) {
            return -0x7ffffffffffffff9;
        }
    }
    else {
        if (piVar1 == NULL) {
            return -0x7ffffffffffffff9;
        }
        *(piVar1 + 0xb) = 3;
        if (piVar1[3] == 2) {
            *(piVar1 + 0xb) = 4;
            iVar2 = fcn.00015824(piVar1,CONCAT71(in_stack_00000028 >> 8,0xf),CONCAT71(arg3_00 >> 8,2),&iStackX_18);
            *(piVar1 + 10) = iStackX_18;
            uVar3 = 0;
            if (piVar1[0x6a] != 0) {
                uVar3 = *(*(piVar1 + 1) * 0x80 + 0x118 + *(piVar1[0x6a] + 8));
            }
            if (piVar1[0x6a] != 0) {
                *(*(piVar1 + 1) * 0x80 + 0x118 + *(piVar1[0x6a] + 8)) = uVar3 | 0x20000;
            }
            return iVar2;
        }
        uVar3 = piVar1;
        iVar2 = fcn.000128f8(uVar3,aiStack_38);
        if ((iVar2 < 0) || (iVar2 = fcn.00012ecc(uVar3,aiStack_38[0]), iVar2 < 0)) {
            fcn.0001774c(0x80000002,0x2080005);
        }
        else {
            *(piVar1 + 0xb) = 4;
            iVar2 = fcn.0001284c(uVar3);
            if (iVar2 < 0) {
                return -0x7ffffffffffffff9;
            }
            iVar2 = fcn.00013ab0(arg1,arg2,uVar3,arg4_00);
            if (iVar2 < 0) {
                return -0x7ffffffffffffff9;
            }
            iVar2 = fcn.00013548(piVar1);
            if (-1 < iVar2) {
                iVar2 = (**(*0x17e00 + 0x40))(4,0x38,&iStackX_20);
                if (iVar2 < 0) {
                    return -0x7ffffffffffffff9;
                }
                piVar1[0x6d] = iStackX_20;
                *(iStackX_20 + 0x30) = piVar1;
                (**(*0x17e00 + 0x160))(iStackX_20,0x17b30,0x10);
                *(iStackX_20 + 0x10) = 0x13c90;
                *(iStackX_20 + 0x18) = 0x13d04;
                *(iStackX_20 + 0x20) = 0x13d80;
                *(iStackX_20 + 0x28) = 0x13d8c;
                iVar2 = (**(*0x17e00 + 0x148))(piVar1,0x17af0,piVar1[0x6b],0);
                if (-1 < iVar2) {
                    (**(*0x17e00 + 0x118))(arg2,0x17bb0,&stack0x00000028,*(arg1 + 0x28),*piVar1,8);
                    iVar2 = (**(*0x17e00 + 0x118))(*piVar1,0x17bd0,0,*(arg1 + 0x28),*piVar1,4);
                    if (iVar2 < 0) {
                        iVar2 = (**(*0x17e00 + 0x148))(piVar1,0x17a60,piVar1[0x6d],0);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        if ((*(arg4 + 0x91) != '\0') || (*(*0x17d80 + 1) != '\0')) {
                            (**(*0x17e00 + 0x148))(piVar1,0x17bd0,piVar1[0x6c],0);
                        }
                    }
                    return 0;
                }
            }
        }
    }
    *(piVar1 + 0xb) = 2;
    return -0x7ffffffffffffff9;
}


/* fcn.00010eb4 @ 0x10eb4 */

ulong fcn.00010eb4(int64_t arg1)

{
    ulong *arg1_00;
    ulong *puVar1;
    int64_t iVar2;
    
    *0x17e88 = 0;
    if (*0x17da8 == NULL) {
        (**(*0x17e00 + 0x140))(0x17b20,0,0x17da8);
    }
    if (*0x17d98 == NULL) {
        (**(*0x17e00 + 0x140))(0x17aa0,0,0x17d98);
    }
    if (*0x17d88 == NULL) {
        (**(*0x17e00 + 0x140))(0x17c00,0,0x17d88);
    }
    if (*0x17db0 == NULL) {
        (**(*0x17e00 + 0x140))(0x17c10,0,0x17db0);
    }
    puVar1 = *(arg1 + 0x58);
    iVar2 = *0x17e00;
    do {
        if (puVar1 == NULL) {
            *0x17e00 = iVar2;
            return 0;
        }
        arg1_00 = puVar1 + -0x73;
        *0x17e00 = iVar2;
        if ((*(puVar1 + -0x38d) == '\x04') && (*(puVar1 + -0x38c) == '\0')) {
            *(puVar1 + -0x38c) = 1;
            (**(iVar2 + 0x98))(*puVar1[-9],0x17a70,puVar1 + 8);
            if (*0x17d98 != NULL) {
                (***0x17d98)(arg1_00,1);
            }
            if (*0x17da8 == NULL) {
code_r0x00011017:
                if ((*0x17dc0 != NULL) || (iVar2 = (**(*0x17e00 + 0x140))(0x17bf0,0,0x17dc0), *0x17dc0 != NULL)) {
                    iVar2 = (***0x17dc0)(arg1_00,1);
                }
                if (((iVar2 < 0) && (*(puVar1 + -0x70) == 0)) && (*0x17dc8 == 0)) {
                    (**(*0x17e00 + 0x170))(0x200,8,0x14264,0,0x17cb0,0x17dc8);
                }
            }
            else {
                iVar2 = (***0x17da8)(arg1_00,1);
                if (*0x17e88 == 0) {
                    iVar2 = (**(*0x17e00 + 0x98))(*arg1_00,0x17a90,0x17e88);
                }
                if (iVar2 < 0) goto code_r0x00011017;
            }
            if (*0x17db0 != NULL) {
                (***0x17db0)(arg1_00,1);
            }
            if (*0x17d88 != NULL) {
                (*(*0x17d88)[2])(arg1_00,1);
                fcn.000159e0(arg1_00);
                if (*(*0x17d88 + 3) != '\0') {
                    (***0x17d88)(arg1_00,1);
                }
            }
        }
        puVar1 = *puVar1;
        iVar2 = *0x17e00;
    } while( true );
}


/* fcn.00011f90 @ 0x11f90 */

//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00011f90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char cVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t extraout_RAX;
    char cVar5;
    uint64_t uVar6;
    unkbyte7 Var7;
    int64_t *piStackX_8;
    int64_t var_bp_20h;
    
    Var7 = arg4 >> 8;
    piStackX_8 = NULL;
    cVar2 = arg4;
    uVar6 = arg3 & 0xff;
    iVar4 = arg3;
    fcn.0001774c(1,0x2080003);
    cVar5 = arg3;
    iVar4 = CONCAT71(iVar4 >> 8,cVar5);
    (**(arg2 + 8))(arg2,4,iVar4);
    piVar3 = *(arg1 + 0x58);
    if (piVar3 == NULL) {
        piStackX_8 = NULL;
    }
    else {
        do {
            piStackX_8 = piVar3 + -0x73;
            if ((piVar3[-0x72] == cVar5) && (*(piVar3 + -0x38f) == cVar2)) break;
            piVar3 = *piVar3;
            piStackX_8 = NULL;
        } while (piVar3 != NULL);
        if (piStackX_8 != NULL) goto code_r0x000120fc;
    }
    iVar4 = (**(*0x17e00 + 0x40))(4,0x3e0,&piStackX_8);
    if (iVar4 < 0) {
        return iVar4;
    }
    (**(*0x17e00 + 0x168))(piStackX_8,0x3e0,0);
    iVar4 = (uVar6 + 2) * 0x80;
    *(piStackX_8 + 1) = cVar5;
    *(piStackX_8 + 9) = cVar2;
    piStackX_8[0x6a] = arg1;
    *(piStackX_8 + 0xb) = 1;
    piStackX_8[0x68] = *(arg1 + 0x20);
    iVar4 = CONCAT44(*(iVar4 + 0xc + *(arg1 + 8)),*(iVar4 + 8 + *(arg1 + 8)));
    piStackX_8[0x7a] = iVar4;
    iVar4 = (iVar4 - *(arg1 + 0x100)) + *(arg1 + 0x40);
    piStackX_8[0x69] = iVar4;
    piVar3 = piStackX_8 + 0x73;
    *piVar3 = 0;
    piStackX_8[0x74] = *(arg1 + 0x60);
    if (*(arg1 + 0x58) == 0) {
        *(arg1 + 0x58) = piVar3;
    }
    else {
        **(arg1 + 0x60) = piVar3;
    }
    *(arg1 + 0x50) = *(arg1 + 0x50) + 1;
    *(arg1 + 0x60) = piVar3;
code_r0x000120fc:
    iVar4 = CONCAT71(iVar4 >> 8,cVar5);
    if (cVar2 == -1) {
        fcn.000122c4(piStackX_8,arg2,iVar4,CONCAT71(Var7,0xff));
        iVar4 = extraout_RAX;
    }
    else {
        iVar4 = fcn.000126a4(piStackX_8,arg2,iVar4,CONCAT71(Var7,cVar2));
    }
    if (iVar4 < 0) {
        (**(arg2 + 8))(arg2,5,arg3 & 0xff);
        if (*(piStackX_8 + 0xb) == '\x01') {
            *(uVar6 * 0x80 + 0x118 + *(arg1 + 8)) = *(uVar6 * 0x80 + 0x118 + *(arg1 + 8)) & 0xffffffef;
            piVar3 = piStackX_8 + 0x73;
            if (*(arg1 + 0x60) == piVar3) {
                *(arg1 + 0x60) = piStackX_8[0x74];
            }
            else {
                *(*piVar3 + 8) = piStackX_8[0x74];
            }
            if (*(arg1 + 0x58) == piVar3) {
                *(arg1 + 0x58) = *piVar3;
            }
            else {
                *piStackX_8[0x74] = *piVar3;
            }
            iVar4 = *0x17e00;
            *(arg1 + 0x50) = *(arg1 + 0x50) + -1;
            (**(iVar4 + 0x48))(piStackX_8);
        }
        iVar4 = -0x7ffffffffffffff9;
    }
    else {
        iVar1 = *(uVar6 * 0x80 + 0x124 + *(arg1 + 8));
        *(piStackX_8 + 2) = iVar1;
        if (iVar1 == 0x101) {
            *(piStackX_8 + 3) = 0;
        }
        else if (iVar1 == -0x6996feff) {
            *(piStackX_8 + 3) = 2;
            (**(*0x17e00 + 0xf8))(1000000);
        }
        else if (iVar1 == -0x14ebfeff) {
            *(piStackX_8 + 3) = 1;
        }
        else {
            iVar4 = -0x7ffffffffffffff9;
        }
        if ((*(arg1 + 0x91) == '\0') && (piStackX_8[3] == 0)) {
            piVar3 = piStackX_8 + 0x73;
            if (*(arg1 + 0x60) == piVar3) {
                *(arg1 + 0x60) = piStackX_8[0x74];
            }
            else {
                *(*piVar3 + 8) = piStackX_8[0x74];
            }
            if (*(arg1 + 0x58) == piVar3) {
                *(arg1 + 0x58) = *piVar3;
            }
            else {
                *piStackX_8[0x74] = *piVar3;
            }
            iVar4 = *0x17e00;
            *(arg1 + 0x50) = *(arg1 + 0x50) + -1;
            (**(iVar4 + 0x48))(piStackX_8);
            iVar4 = -0x7ffffffffffffff9;
        }
        (**(arg2 + 8))(arg2,5,arg3 & 0xff);
    }
    return iVar4;
}


/* fcn.00015824 @ 0x15824 */

int64_t fcn.00015824(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint32_t *arg2_00;
    int64_t arg4_00;
    int64_t iVar3;
    ulong uVar4;
    char in_stack_00000028;
    ulong uStack_a8;
    uint uStack_a0;
    uchar uStack_9c;
    uchar uStack_9b;
    uint16_t uStack_9a;
    uchar uStack_98;
    uchar uStack_97;
    uchar uStack_96;
    uchar uStack_95;
    uchar uStack_94;
    uchar uStack_93;
    uchar uStack_92;
    uchar uStack_91;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uchar uStack_78;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    uchar uStack_38;
    
    arg1_00 = *(arg1 + 0x350);
    iVar2 = *(arg1 + 0x348);
    uVar4 = 0;
    arg2_00 = *(arg1 + 0x340);
    arg4_00 = *(arg1_00 + 0x30);
    (**(*0x17e00 + 0x168))(&uStack_a8,0x31);
    uStack_91 = 0xe4;
    if (in_stack_00000028 != '\0') {
        uStack_9a = *arg4 & 0xff;
        uStack_91 = 0xe8;
        uVar1 = *arg4;
        uStack_98 = uVar1 >> 8;
        uStack_94 = uVar1 >> 0x18;
        uStack_96 = uVar1 >> 0x10;
    }
    uStack_9c = arg3;
    uStack_92 = arg2;
    iVar3 = fcn.00016458(arg1_00,arg1,CONCAT71(uVar4 >> 8,1));
    if (-1 < iVar3) {
        iVar3 = fcn.00016714(arg1);
        if (iVar3 < 0) {
            fcn.00016458(arg1_00,arg1,0);
        }
        else {
            fcn.00015f68(arg1,arg2_00,*(arg1_00 + 0xf8));
            uStack_60 = CONCAT26(uStack_9a,CONCAT15(uStack_9b,CONCAT14(uStack_9c,uStack_a0)));
            uStack_58 = CONCAT17(uStack_91,
                                 CONCAT16(uStack_92,
                                          CONCAT15(uStack_93,
                                                   CONCAT14(uStack_94,
                                                            CONCAT13(uStack_95,
                                                                     CONCAT12(uStack_96,CONCAT11(uStack_97,uStack_98))
                                                                    )))));
            uStack_68 = uStack_a8;
            uStack_38 = uStack_78;
            uStack_50 = uStack_90;
            uStack_48 = uStack_88;
            uStack_40 = uStack_80;
            fcn.00015fdc(arg1,&uStack_68,arg2_00,arg4_00);
            *arg2_00 = *arg2_00 & 0xffffffbf;
            *(arg4_00 + 1) = *(arg4_00 + 1) | 0x80;
            *arg2_00 = *arg2_00 | 0xf000;
            *(arg4_00 + 1) = *(arg4_00 + 1) | 0xf;
            fcn.00016170(arg1_00,arg1);
            iVar3 = fcn.00016268(arg1,0,1000);
            fcn.00016458(arg1_00,arg1,0);
            if ((in_stack_00000028 == '\0') && (*arg4 = 0, -1 < iVar3)) {
                *arg4 = *(iVar2 + 0x46) << 0x18 | *(iVar2 + 0x45) << 0x10 | *(iVar2 + 0x44) << 8 | *(iVar2 + 0x4c);
            }
        }
    }
    return iVar3;
}


/* fcn.000128f8 @ 0x128f8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_20h_2

int64_t fcn.000128f8(uint32_t arg1,int64_t arg2)

{
    uchar uVar1;
    char cVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t uVar9;
    uint32_t uVar10;
    int64_t in_R8;
    ulong uVar11;
    int64_t arg3;
    uint8_t *puVar12;
    ulong in_R9;
    uint16_t *puVar13;
    char cVar14;
    int64_t iVar15;
    uint auStackX_8 [2];
    int8_t var_20h;
    int64_t iStackX_20;
    int64_t var_bp_30h;
    int64_t var_bp_40h;
    int64_t var_bp_50h;
    int8_t var_bp_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int8_t var_a0h;
    uint32_t var_b0h;
    int16_t var_100h;
    int64_t var_150h;
    int32_t var_160h;
    int64_t var_168h;
    ulong uStack_218;
    uint uStack_210;
    uchar uStack_20c;
    uchar uStack_20b;
    uint16_t uStack_20a;
    unkbyte7 Stack_208;
    uchar uStack_201;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    uchar uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    uchar uStack_1a8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    uchar uStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    uchar uStack_128;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    uchar uStack_e8;
    ulong uStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uchar uStack_a8;
    uint16_t auStack_98 [8];
    int64_t var_80h_2;
    int64_t var_70h_2;
    ushort uStack_48;
    int8_t var_20h_2;
    int64_t var_bp_10h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = *(arg1_00 + 0x350);
    uVar1 = *(arg1_00 + 8);
    cVar2 = *(arg1_00 + 9);
    iVar3 = *(iVar7 + 0x70);
    _var_20h = 0x676e45;
    if (*(arg1_00 + 0x18) == 2) {
        return 0;
    }
    iStackX_20 = iVar7;
    iVar6 = fcn.000159e0(arg1_00);
    iVar15 = 0;
    if (iVar6 < 0) {
        return -0x7ffffffffffffff9;
    }
    if ((((*(arg1_00 + 0x18) == 1) && (uVar5 = *(arg1_00 + 0x23) & 0x1f00, uVar5 != 0x500)) && (uVar5 != 0)) &&
       (uVar5 != 0x700)) {
        return -0x7ffffffffffffffd;
    }
    if (((*(arg1_00 + 0x18) == 0) && (*(arg1_00 + 0xbb) != -1)) &&
       (((*(arg1_00 + 0xbf) & 0x40) != 0 && (((*(arg1_00 + 0xc1) & 0x40) != 0 && ((*(arg1_00 + 0x123) & 10) != 0)))))) {
        uVar11 = 0;
        (**(*0x17e00 + 0x168))(&uStack_218,0x31);
        uStack_20c = 0x90;
        uStack_20a = 6;
        uStack_1d0 = CONCAT26(6,CONCAT15(uStack_20b,CONCAT14(0x90,uStack_210)));
        uStack_201 = 0xef;
        uStack_1c8 = CONCAT17(0xef,Stack_208);
        uStack_1a8 = uStack_1e8;
        uStack_1d8 = uStack_218;
        uStack_1c0 = uStack_200;
        uStack_1b8 = uStack_1f8;
        uStack_1b0 = uStack_1f0;
        fcn.00014d9c(arg1_00,&uStack_1d8);
        in_R8 = CONCAT71(uVar11 >> 8,uVar1);
        fcn.000168f0(iVar7,arg1_00,in_R8,CONCAT71(in_R9 >> 8,cVar2));
    }
    if (((*(arg1_00 + 0x23) & 4) != 0) && ((*(arg1_00 + 0x27) == 0x37c8 || (*(arg1_00 + 0x27) == 0x738c)))) {
        in_R8 = 0;
        (**(*0x17e00 + 0x168))(&uStack_218,0x31);
        uStack_20c = 7;
        uStack_190 = CONCAT26(uStack_20a,CONCAT15(uStack_20b,CONCAT14(7,uStack_210)));
        uStack_201 = 0xef;
        uStack_188 = CONCAT17(0xef,Stack_208);
        uStack_168 = uStack_1e8;
        uStack_198 = uStack_218;
        uStack_180 = uStack_200;
        uStack_178 = uStack_1f8;
        uStack_170 = uStack_1f0;
        fcn.00014d9c(arg1_00,&uStack_198);
        iVar7 = fcn.000159e0(arg1_00);
        if (iVar7 < 0) {
            return -0x7ffffffffffffff9;
        }
    }
    cVar14 = cVar2;
    if (cVar2 == -1) {
        cVar14 = '\0';
    }
    uVar11 = CONCAT71(in_R8 >> 8,cVar14);
    iVar7 = (**(iVar3 + 0x10))(iVar3,uVar1,uVar11,arg1_00 + 0x23);
    if (iVar7 < 0) {
        return iVar7;
    }
    uVar11 = CONCAT71(uVar11 >> 8,cVar14);
    iVar7 = arg2;
    iVar6 = (**(iVar3 + 0x20))(iVar3,uVar1,uVar11,arg2);
    if ((iVar6 < 0) || (*arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    if (*(*arg2 + 0x24) != 0) {
        arg3 = CONCAT71(uVar11 >> 8,uVar1);
        iVar6 = arg1_00;
        iVar7 = fcn.000168f0(iStackX_20,arg1_00,arg3,CONCAT71(iVar7 >> 8,cVar2));
        if ((-1 < iVar7) && (cVar2 != -1)) {
            auStackX_8[0] = 0x7ff0f03;
            fcn.00015824(arg1_00,CONCAT71(iVar6 >> 8,cVar2),CONCAT71(arg3 >> 8,1),auStackX_8);
        }
    }
    iVar7 = (**(iVar3 + 0x28))(iVar3,uVar1,cVar14,*arg2);
    if (iVar7 < 0) {
        return iVar7;
    }
    *(arg1_00 + 0x1c) = 0xffffffff;
    if (**arg2 != '\0') {
        *(arg1_00 + 0x1c) = (*arg2)[4];
    }
    if (*(*arg2 + 8) != '\0') {
        *(arg1_00 + 0x1d) = *(*arg2 + 0xc);
    }
    if (*(*arg2 + 0x10) != '\0') {
        *(arg1_00 + 0x1e) = *(*arg2 + 0x14);
    }
    if (*(*arg2 + 0x18) != '\0') {
        *(arg1_00 + 0x1f) = *(*arg2 + 0x1c);
    }
    *(arg1_00 + 0x20) = *(arg1_00 + 0x85) >> 0xb & 1;
    if (((*(arg1_00 + 0x8d) & 2) != 0) && (**arg2 != '\0')) {
        if (*(arg1_00 + 0x1c) < 3) {
            uStack_20a = 0;
        }
        else {
            uStack_20a = *(arg1_00 + 0x1c) | 8;
        }
        (**(*0x17e00 + 0x168))(&uStack_218,0x31);
        uStack_20c = 3;
        uStack_150 = CONCAT26(uStack_20a,CONCAT15(uStack_20b,CONCAT14(3,uStack_210)));
        uStack_201 = 0xef;
        uStack_148 = CONCAT17(0xef,Stack_208);
        uStack_128 = uStack_1e8;
        uStack_158 = uStack_218;
        uStack_140 = uStack_200;
        uStack_138 = uStack_1f8;
        uStack_130 = uStack_1f0;
        iVar7 = fcn.00014d9c(arg1_00,&uStack_158);
        if (iVar7 < 0) {
            return -0x7ffffffffffffff9;
        }
    }
    fcn.0001730c(arg1,0);
    if (*(arg1_00 + 0x1f) == -1) {
        if (*(arg1_00 + 0x1e) == -1) goto code_r0x00012d6d;
        (**(*0x17e00 + 0x168))(&uStack_218,0x31);
        puVar8 = &uStack_d8;
        uVar4 = *(arg1_00 + 0x1e) | 0x20;
        uStack_d0 = CONCAT16(*(arg1_00 + 0x1e),CONCAT15(uStack_20b,CONCAT14(3,uStack_210))) | 0x20000000000000;
        uStack_c8 = CONCAT17(0xef,Stack_208);
        uStack_a8 = uStack_1e8;
        uStack_d8 = uStack_218;
        uStack_c0 = uStack_200;
        uStack_b8 = uStack_1f8;
        uStack_b0 = uStack_1f0;
    }
    else {
        (**(*0x17e00 + 0x168))(&uStack_218,0x31,0);
        puVar8 = &uStack_118;
        uVar4 = *(arg1_00 + 0x1f) | 0x40;
        uStack_110 = CONCAT16(*(arg1_00 + 0x1f),CONCAT15(uStack_20b,CONCAT14(3,uStack_210))) | 0x40000000000000;
        uStack_108 = CONCAT17(0xef,Stack_208);
        uStack_e8 = uStack_1e8;
        uStack_118 = uStack_218;
        uStack_100 = uStack_200;
        uStack_f8 = uStack_1f8;
        uStack_f0 = uStack_1f0;
    }
    uStack_20a = uVar4;
    uStack_201 = 0xef;
    uStack_20c = 3;
    fcn.00014d9c(arg1_00,puVar8);
code_r0x00012d6d:
    *(arg1_00 + 0x228) = 0;
    puVar12 = arg1_00 + 0x59;
    puVar13 = auStack_98;
    uVar10 = 0;
    do {
        uVar9 = uVar10 + 2;
        *puVar13 = *(arg1_00 + uVar10 + 1 + 0x59);
        puVar13 = puVar13 + 2;
        uVar4 = *puVar12;
        puVar12 = puVar12 + 2;
        auStack_98[uVar10 + 1] = uVar4;
        uVar10 = uVar9;
    } while (uVar9 < 0x28);
    uStack_48 = 0;
    uVar4 = 0x27;
    do {
        if (auStack_98[uVar4] != 0x20) break;
        auStack_98[uVar4] = 0;
        uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    puVar8 = fcn.000177f0(0x20);
    (**(*0x17e00 + 0x40))(4,4,puVar8);
    (**(*0x17e00 + 0x40))(4,0x52,puVar8 + 1);
    (**(*0x17e00 + 0x160))(*puVar8,&var_20h,4);
    (**(*0x17e00 + 0x160))(puVar8[1],auStack_98,0x52);
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(arg1_00 + 0x228) = puVar8;
    if (*(*0x17d80 + 5) != '\0') {
        fcn.00013068(arg1_00);
    }
    if (*(*0x17d80 + 7) != '\0') {
        fcn.00013120(arg1_00);
    }
    fcn.00013be4(arg1_00);
    iVar7 = fcn.000159e0(arg1_00);
    if (iVar7 < 0) {
        iVar15 = -0x7ffffffffffffff9;
    }
    return iVar15;
}


/* fcn.00012ecc @ 0x12ecc */

ulong fcn.00012ecc(uint32_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint8_t uVar6;
    char cVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(iVar5 + 8);
    cVar7 = *(iVar5 + 9);
    iVar3 = *(*(iVar5 + 0x350) + 0x70);
    if (*(iVar5 + 0x1f) == -1) {
        if (*(iVar5 + 0x1e) == -1) goto code_r0x00012fd7;
        uVar9 = *(iVar5 + 0xa2);
        uVar6 = 0;
        uVar8 = *(iVar5 + 0xa2);
        uVar4 = 0xff;
        do {
            if ((uVar8 & 1) != 0) {
                uVar4 = uVar6;
            }
            uVar8 = uVar8 >> 1;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x20);
        if (uVar4 == *(iVar5 + 0x1e)) goto code_r0x00012fd7;
        uVar4 = 0xff;
        uVar6 = 0;
        do {
            if ((uVar9 & 1) != 0) {
                uVar4 = uVar6;
            }
            uVar9 = uVar9 >> 1;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x20);
        *(iVar5 + 0x1e) = uVar4;
        *(arg2 + 0x14) = uVar4;
    }
    else {
        uVar9 = *(iVar5 + 0xd4);
        uVar6 = 0;
        uVar4 = 0xff;
        uVar8 = uVar9;
        do {
            if ((uVar8 & 1) != 0) {
                uVar4 = uVar6;
            }
            uVar8 = uVar8 >> 1;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x20);
        if (uVar4 == *(iVar5 + 0x1f)) goto code_r0x00012fd7;
        uVar4 = 0xff;
        uVar6 = 0;
        do {
            if ((uVar9 & 1) != 0) {
                uVar4 = uVar6;
            }
            uVar9 = uVar9 >> 1;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x20);
        *(iVar5 + 0x1f) = uVar4;
        *(arg2 + 0x1c) = uVar4;
    }
    if (cVar7 == -1) {
        cVar7 = '\0';
    }
    (**(iVar3 + 0x28))(iVar3,uVar1,cVar7,arg2);
code_r0x00012fd7:
    if (*(iVar5 + 0x18) == 0) {
        uVar2 = *(iVar5 + 0xc9);
        if ((*(iVar5 + 0x99) >> 8 & 1) == 0 || *(iVar5 + 0x99) == '\0') {
            if ((uVar2 & 0x400) == 0) {
                *(iVar5 + 0x21) = 0x3020;
            }
            else {
                *(iVar5 + 0x21) = 0x3424;
            }
        }
        else if ((uVar2 & 0x400) == 0) {
            *(iVar5 + 0x21) = 0xc5c4;
        }
        else {
            *(iVar5 + 0x21) = 0x3929;
        }
        if (((*(iVar5 + 0x1f) != -1) || (*(iVar5 + 0x1e) != -1)) && (*(iVar5 + 0x21) = 0xcac8, (uVar2 & 0x400) != 0)) {
            *(iVar5 + 0x21) = 0x3525;
        }
    }
    return 0;
}


/* fcn.0001284c @ 0x1284c */

ulong fcn.0001284c(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x18) == 1) {
        uVar1 = 0;
        if (*(iVar2 + 0x350) != 0) {
            uVar1 = *(*(iVar2 + 8) * 0x80 + 0x118 + *(*(iVar2 + 0x350) + 8));
        }
        if (*(iVar2 + 0x350) != 0) {
            *(*(iVar2 + 8) * 0x80 + 0x118 + *(*(iVar2 + 0x350) + 8)) = uVar1 | 0x1000000;
        }
    }
    if (*(*0x17d80 + 2) != '\0') {
        uVar1 = 0;
        if (*(iVar2 + 0x350) != 0) {
            uVar1 = *(*(iVar2 + 8) * 0x80 + 0x118 + *(*(iVar2 + 0x350) + 8));
        }
        if (*(iVar2 + 0x350) != 0) {
            *(*(iVar2 + 8) * 0x80 + 0x118 + *(*(iVar2 + 0x350) + 8)) = uVar1 | 0x2000000;
        }
    }
    return 0;
}


/* fcn.00013ab0 @ 0x13ab0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00013ab0(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    ulong uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint in_R8;
    int64_t iVar3;
    int64_t arg1_01;
    int64_t iStackX_20;
    int64_t var_48h;
    uint uStack_38;
    uint16_t uStack_34;
    uint16_t uStack_32;
    ushort uStack_30;
    int32_t var_10h;
    int16_t var_ch;
    int16_t var_ah;
    int16_t var_8h;
    
    iVar3 = CONCAT44(in_R8,arg3);
    iVar2 = 0;
    uStack_34 = *(iVar3 + 8);
    uStack_32 = 0xffff;
    uStack_38 = 0xa1203;
    if (*(iVar3 + 9) != -1) {
        uStack_32 = *(iVar3 + 9);
    }
    uStack_30 = 0;
    iStackX_20 = arg4;
    uVar1 = (**(*0x17e00 + 0x118))(arg2,0x17af0,&iStackX_20,*(arg1 + 0x28),arg2,2);
    arg2_00 = iStackX_20;
    if (iStackX_20 != 0) {
        iVar2 = fcn.00017830(iStackX_20);
        iVar2 = iVar2 + -4;
    }
    arg1_00 = fcn.000177c4(uStack_38._2_1_ + 4 + uStack_38._3_1_ * 0x100 + iVar2);
    arg1_01 = arg1_00;
    if (iVar2 != 0) {
        fcn.000179a0(arg1_00,arg2_00,iVar2);
        arg1_01 = arg1_00 + iVar2;
    }
    fcn.000179a0(arg1_01,&uStack_38,uStack_38._2_2_);
    *(uStack_38._2_1_ + uStack_38._3_1_ * 0x100 + arg1_01) = *0x17ca8;
    *(iVar3 + 0x358) = arg1_00;
    return uVar1;
}


/* fcn.00013548 @ 0x13548 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1fh
//WARNING: Variable defined which should be unmapped: var_2eh

int64_t fcn.00013548(int64_t arg1)

{
    uint16_t uVar1;
    uchar uVar2;
    uint uVar3;
    int64_t iVar4;
    uint *puVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int iVar8;
    uint32_t uVar9;
    uint8_t uVar10;
    uint16_t uStackX_10;
    unkbyte6 StackX_12;
    int64_t *piStackX_18;
    ulong uStackX_20;
    int16_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    ulong uStack_88;
    uchar auStack_80 [8];
    ulong uStack_78;
    uint32_t uStack_70;
    uchar uStack_66;
    uchar uStack_64;
    uchar uStack_61;
    int64_t var_50h_2;
    int64_t var_48h_2;
    int64_t var_40h;
    int32_t var_38h;
    int8_t var_2eh;
    int8_t var_2ch;
    int8_t var_29h;
    int8_t var_1fh;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_17h;
    
    uStackX_10 = 0;
    uVar10 = 0xff;
    iVar8 = 0x200;
    iVar4 = (**(*0x17e00 + 0x40))(4,0x38,&piStackX_18);
    if (iVar4 < 0) {
        return iVar4;
    }
    puVar5 = fcn.000177f0(0x30);
    if (puVar5 == NULL) {
        (**(*0x17e00 + 0x48))(piStackX_18);
code_r0x000135b3:
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        *(arg1 + 0x360) = piStackX_18;
        piStackX_18[6] = arg1;
        if (*(arg1 + 0x18) == 0) {
            uVar9 = *(*0x17e10 + 8);
            piStackX_18[1] = puVar5;
            *piStackX_18 = (-(uVar9 < 0x2001f) & 0xfffffffffffdffe2) + 0x2001f;
            piStackX_18[2] = 0x148b4;
            piStackX_18[3] = 0x14484;
            piStackX_18[4] = 0x144a4;
            piStackX_18[5] = 0x148b8;
            *puVar5 = 0;
            uVar10 = *(arg1 + 0x23);
            *(puVar5 + 5) = 1;
            *(puVar5 + 1) = uVar10 >> 7;
            if ((*(arg1 + 0xf7) & 0xd000) == 0x5000) {
                iVar8 = (*(arg1 + 0x10f) * 0x10000 + *(arg1 + 0x10d)) * 2;
            }
            puVar5[3] = iVar8;
            puVar5[4] = 2;
            if ((*(arg1 + 0xc9) & 0x400) == 0) {
                uVar6 = *(arg1 + 0x9b) - 1;
            }
            else {
                uVar6 = *(arg1 + 0xeb) - 1;
            }
            *(puVar5 + 6) = uVar6;
            if (0x2001e < *(*0x17e10 + 8)) {
                puVar5[0xb] = iVar8;
                uVar1 = *(arg1 + 0xf7);
                if (((uVar1 & 0xc000) == 0x4000) && ((uVar1 & 0x2000) != 0)) {
                    puVar5[10] = 1 << (uVar1 & 0xf);
                    *(puVar5 + 8) = *(arg1 + 0x1c5) & 0x3fff;
                }
                else {
                    *(puVar5 + 8) = 0;
code_r0x0001395c:
                    puVar5[10] = 1;
                }
            }
        }
        else {
            puVar7 = fcn.000177f0(0x28);
            if (puVar7 == NULL) goto code_r0x000135b3;
            *(arg1 + 0x230) = puVar7;
            iVar4 = (**(*0x17e00 + 0x40))(4,0x10,&uStack_88);
            if (iVar4 < 0) {
                return iVar4;
            }
            *puVar7 = uStack_88;
            *(puVar7 + 1) = *(arg1 + 0x24) & 0x1f;
            uVar2 = 0xc;
            if ((*(arg1 + 0x23) & 3) == 1) {
                uVar2 = 0x10;
            }
            *(puVar7 + 10) = uVar2;
            uVar9 = *(*0x17e10 + 8);
            piStackX_18[1] = puVar5;
            *piStackX_18 = (-(uVar9 < 0x2001f) & 0xfffffffffffdffe2) + 0x2001f;
            piStackX_18[2] = 0x148b4;
            piStackX_18[3] = 0x145e0;
            piStackX_18[4] = 0x14600;
            piStackX_18[5] = 0x148b8;
            iVar4 = *0x17e00;
            puVar5[3] = 0x800;
            iVar4 = (**(iVar4 + 0x40))(4,0x96);
            uStack_78 = uStackX_20;
            if (iVar4 < 0) {
                return iVar4;
            }
            (**(*0x17e00 + 0x168))(&uStack_78,0x31);
            uVar9 = 0x96;
            uStack_61 = 0xa0;
            uStack_70 = 0x96;
            uStack_66 = 0x96;
            var_50h_2._5_1_ = 0x96;
            uStack_64 = 0;
            var_50h_2._1_2_ = CONCAT11(var_50h_2._2_1_,0x12);
            iVar4 = fcn.00014e98(arg1,&uStack_78,0);
            if (-1 < iVar4) {
                uVar9 = uStack_70 & 0xffff;
            }
            puVar7[2] = uStackX_20;
            *(puVar7 + 3) = uVar9;
            iVar4 = (**(*0x17e00 + 0x40))(4,0x10,auStack_80);
            if ((-1 < iVar4) && (iVar4 = fcn.00015df8(arg1,&uStackX_10,auStack_80), -1 < iVar4)) {
                uVar3 = fcn.0001397c(uStackX_10);
                *(puVar7 + 0x1c) = uVar3;
            }
            iVar4 = (**(*0x17e00 + 0x40))(4,0x10);
            if (-1 < iVar4) {
                (**(*0x17e00 + 0x168))(&uStack_78,0x31);
                uStack_78 = CONCAT62(StackX_12,uStackX_10);
                uStack_70 = 0x10;
                uStack_61 = 0xa0;
                uStack_66 = 0x10;
                uStack_64 = 0;
                var_50h_2._1_2_ = 0x246;
                var_50h_2._4_1_ = 3;
                var_48h_2._1_1_ = 0x10;
                iVar4 = fcn.00014e98(arg1,&uStack_78,0);
                if (-1 < iVar4) {
                    uVar10 = *(CONCAT62(StackX_12,uStackX_10) + 0xc) >> 5;
                }
                (**(*0x17e00 + 0x48))();
            }
            if (iVar4 < 0) {
                *(puVar7 + 4) = 0xff;
            }
            else {
                *(puVar7 + 4) = uVar10;
            }
            uVar10 = *(arg1 + 0x23);
            *(puVar5 + 6) = 0;
            *(puVar5 + 1) = uVar10 >> 7;
            *(puVar5 + 2) = 0;
            puVar5[4] = 2;
            if (0x2001e < *(*0x17e10 + 8)) {
                *(puVar5 + 8) = 0;
                puVar5[0xb] = puVar5[3];
                goto code_r0x0001395c;
            }
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.000159e0 @ 0x159e0 */

int64_t fcn.000159e0(int64_t arg1)

{
    int64_t iVar1;
    uchar *puStack_248;
    int iStack_240;
    uchar uStack_232;
    char cStack_231;
    uchar auStack_208 [512];
    
    (**(*0x17e00 + 0x168))(&puStack_248,0x31);
    puStack_248 = auStack_208;
    iStack_240 = 0x200;
    uStack_232 = 0;
    cStack_231 = (-(*(arg1 + 0x18) != 0) & 0xb5U) - 0x14;
    iVar1 = fcn.00014e98(arg1,&puStack_248,0);
    if (iStack_240 != 0x200) {
        iVar1 = -0x7ffffffffffffff9;
    }
    if (-1 < iVar1) {
        (**(*0x17e00 + 0x160))(arg1 + 0x23,auStack_208,0x200);
    }
    return iVar1;
}


/* fcn.00014e98 @ 0x14e98 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00014e98(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t *arg2_00;
    int64_t arg4;
    uint8_t *puVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint in_register_00000014;
    int64_t *piVar7;
    char cVar8;
    uint64_t arg3_00;
    int64_t var_8h;
    uint64_t uStackX_8;
    int8_t var_17h;
    int64_t iStackX_10;
    int64_t iStackX_20;
    uint32_t var_67h;
    int64_t var_6fh;
    int64_t var_7fh;
    uchar *in_stack_ffffffffffffff28;
    int64_t *in_stack_ffffffffffffff30;
    int32_t in_stack_ffffffffffffff38;
    uint uStack_c4;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    uchar uStack_88;
    uchar auStack_78 [7];
    int64_t var_69h;
    uint uStack_68;
    uchar auStack_64 [3];
    int64_t var_59h;
    uint uStack_58;
    uchar auStack_54 [3];
    int64_t var_49h;
    uchar uStack_48;
    int64_t var_39h;
    int8_t var_29h;
    int64_t var_19h;
    int64_t var_9h;
    
    piVar7 = CONCAT44(in_register_00000014,arg2);
    iVar1 = *(arg1 + 0x350);
    arg2_00 = *(arg1 + 0x340);
    cVar8 = arg3;
    uStackX_8 = *(piVar7 + 1);
    arg4 = *(iVar1 + 0x30);
    iStackX_10 = 0;
    iStackX_20 = 0;
    if ((*(piVar7 + 0x17) == -0xc) && (*piVar7 == 0)) {
        return -0x7ffffffffffffffe;
    }
    if (((*(*0x17d80 + 9) != '\0') && (arg3 = *piVar7, arg3 != 0)) && (*(piVar7 + 1) != 0)) {
        in_stack_ffffffffffffff30 = &iStackX_10;
        in_stack_ffffffffffffff28 = &stack0xffffffffffffff38;
        iVar5 = (**(*(iVar1 + 0x78) + 0x48))(*(iVar1 + 0x78),cVar8 == '\0',arg3,&stack0x00000008);
        if ((iVar5 < 0) || (uStackX_8 != *(piVar7 + 1))) {
            return -0x7ffffffffffffffc;
        }
        iStackX_20 = *piVar7;
        *piVar7 = CONCAT44(uStack_c4,in_stack_ffffffffffffff38);
    }
    iVar5 = fcn.00016458(iVar1,arg1,CONCAT71(arg3 >> 8,1));
    if (iVar5 < 0) goto code_r0x0001511f;
    iVar5 = fcn.00016714(arg1);
    if (-1 < iVar5) {
        fcn.00015f68(arg1,arg2_00,*(iVar1 + 0xf8));
        iStack_b8 = *piVar7;
        iStack_b0 = piVar7[1];
        uStack_88 = piVar7[6];
        iStack_a8 = piVar7[2];
        iStack_a0 = piVar7[3];
        iStack_98 = piVar7[4];
        iStack_90 = piVar7[5];
        fcn.00015fdc(arg1,&iStack_b8,arg2_00,arg4);
        _auStack_78 = *piVar7;
        unique0x10000386 = piVar7[1];
        uStack_48 = piVar7[6];
        uStack_68 = piVar7[2];
        _auStack_64 = *(piVar7 + 0x14);
        var_59h._1_4_ = piVar7[3];
        unique0x100002ba = *(piVar7 + 0x1c);
        uStack_58 = piVar7[4];
        _auStack_54 = *(piVar7 + 0x24);
        var_49h._1_4_ = piVar7[5];
        unique0x100002fa = *(piVar7 + 0x2c);
        (**(*0x17e00 + 0x160))(arg4 + 0x40,&uStack_58 + 1,0x10);
        if (*(arg4 + 2) == -0x60) {
            *arg2_00 = *arg2_00 | 0x20;
        }
        iStack_b8 = *piVar7;
        iStack_b0 = piVar7[1];
        uStack_88 = piVar7[6];
        iStack_a8 = piVar7[2];
        iStack_a0 = piVar7[3];
        iStack_98 = piVar7[4];
        iStack_90 = piVar7[5];
        fcn.0001609c(arg1,&iStack_b8,arg2_00,arg4,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,
                     in_stack_ffffffffffffff38);
        if (cVar8 == '\0') {
            *arg2_00 = *arg2_00 & 0xffffffbf;
        }
        else {
            *arg2_00 = *arg2_00 | 0x40;
        }
        *(arg4 + 1) = *(arg4 + 1) | 0x80;
        fcn.00016170(iVar1,arg1);
        puVar2 = *piVar7;
        if ((puVar2 == NULL) || (*(piVar7 + 0x17) != -0xc)) {
            arg3_00 = *(piVar7 + 0x19);
            if (arg3_00 == 0) {
                arg3_00 = 30000;
            }
        }
        else {
            if ((*(arg1 + 0xc3) & 0x400) == 0) {
                if ((*puVar2 & 2) == 0) {
                    uVar3 = *(arg1 + 0xd5);
                }
                else {
                    uVar3 = *(arg1 + 0xd7);
                }
                uVar4 = uVar3;
code_r0x000150d2:
                uVar6 = 0xfe;
            }
            else {
                if ((*puVar2 & 2) == 0) {
                    uVar3 = *(arg1 + 0xd5);
                }
                else {
                    uVar3 = *(arg1 + 0xd7);
                }
                if (-1 < uVar3) {
                    uVar4 = uVar3;
                    goto code_r0x000150d2;
                }
                uVar4 = uVar3 & 0x7fff;
                uVar6 = 0x7ffe;
            }
            if (uVar6 < uVar4) {
                uVar4 = 0;
            }
            else {
                uVar4 = uVar4 * 120000;
            }
            arg3_00 = uVar4;
        }
        iVar5 = fcn.00016268(arg1,1,arg3_00);
        *(piVar7 + 1) = arg2_00[1];
    }
    fcn.00016458(iVar1,arg1,0);
code_r0x0001511f:
    if (iStackX_10 != 0) {
        iVar1 = *(*(arg1 + 0x350) + 0x78);
        (**(iVar1 + 0x50))(iVar1);
        *piVar7 = iStackX_20;
    }
    return iVar5;
}


/* fcn.00011c4c @ 0x11c4c */

int64_t fcn.00011c4c(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint8_t *puStackX_8;
    ulong uStackX_10;
    int64_t var_270h;
    int64_t var_278h;
    int64_t var_280h;
    int64_t var_300h;
    int64_t var_340h;
    int64_t var_348h;
    uchar auStack_408 [8];
    uint8_t uStack_400;
    uchar uStack_3ff;
    uchar uStack_3fd;
    ulong uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    int64_t iStack_38;
    
    uStackX_10 = 0;
    puStackX_8 = NULL;
    iVar3 = (**(*(arg1 + 0x78) + 0x80))(*(arg1 + 0x78),5,&uStackX_10,&puStackX_8);
    if (-1 < iVar3) {
        if (puStackX_8 == NULL) {
            return -0x7ffffffffffffffd;
        }
        if ((*puStackX_8 & 0x7f) != 0xf) {
            *(arg1 + 8) = *(puStackX_8 + 0xe);
            (**(*0x17e00 + 0x48))();
            if (*(arg1 + 8) != NULL) {
                iVar1 = **(arg1 + 8);
                *(arg1 + 0x14) = iVar1;
                if (iVar1 != -1) {
                    uVar5 = *(*(arg1 + 8) + 0xc);
                    *(arg1 + 0x18) = uVar5;
                    if (uVar5 == 0) {
                        return 0;
                    }
                    *(arg1 + 0x90) = 0;
                    do {
                        if ((uVar5 & 1) != 0) {
                            *(arg1 + 0x90) = *(arg1 + 0x90) + '\x01';
                        }
                        uVar5 = uVar5 >> 1;
                    } while (uVar5 != 0);
                    if (*(arg1 + 0x90) <= (*(arg1 + 0x14) & 0x1f) + 1) {
                        *(arg1 + 0x10) = *(*(arg1 + 8) + 0x10);
                        *(*(arg1 + 8) + 4) = *(*(arg1 + 8) + 4) | 0x80000000;
                        iVar3 = fcn.000119e8(arg1);
                        if (-1 < iVar3) {
                            uVar7 = 0;
                            uVar2 = 0;
                            for (uVar5 = *(arg1 + 0x18); uVar5 != 0; uVar5 = uVar5 >> 1) {
                                uVar9 = uVar2;
                                if ((uVar5 & 1) != 0) {
                                    uVar8 = 0x8000;
                                    iVar11 = uVar7 * 0x80;
                                    iVar3 = 0;
                                    iVar10 = (uVar7 + 2) * 0x80;
                                    *(iVar11 + 0x104 + *(arg1 + 8)) = *(arg1 + 0xf0) >> 0x20;
                                    *((uVar7 + 2) * 0x80 + *(arg1 + 8)) = *(arg1 + 0xf0);
                                    uVar9 = uVar2 + 1;
                                    *(iVar11 + 0x10c + *(arg1 + 8)) = uVar2 * 0x100 + *(arg1 + 0x100) >> 0x20;
                                    *(iVar11 + 0x108 + *(arg1 + 8)) = *(arg1 + 0x100) + uVar2 * 0x100;
                                    uVar6 = *(iVar10 + 0x18 + *(arg1 + 8)) & 0xfffffffe;
                                    *(iVar11 + 0x118 + *(arg1 + 8)) = uVar6;
                                    iVar4 = fcn.000134b4(arg1,CONCAT71(uVar6 >> 8,uVar7),0x18,0x8000);
                                    if (iVar4 < 0) {
                                        (**(*0x17e00 + 0x168))(auStack_408,0x3e0,0);
                                        uStack_c8 = *(arg1 + 0x20);
                                        uStack_3ff = 0xff;
                                        uStack_3fd = 1;
                                        iStack_38 = CONCAT44(*(iVar10 + 0xc + *(arg1 + 8)),*(iVar10 + 8 + *(arg1 + 8)))
                                        ;
                                        iStack_c0 = (*(arg1 + 0x40) - *(arg1 + 0x100)) + iStack_38;
                                        iVar3 = CONCAT71(iStack_38 >> 8,uVar7);
                                        uStack_400 = uVar7;
                                        iStack_b8 = arg1;
                                        fcn.000168f0(arg1,auStack_408,iVar3,CONCAT71(uVar8 >> 8,0xff));
                                    }
                                    uVar6 = *(iVar10 + 0x18 + *(arg1 + 8)) & 0xffffffef;
                                    *(iVar11 + 0x118 + *(arg1 + 8)) = uVar6;
                                    iVar3 = fcn.000134b4(arg1,CONCAT71(uVar6 >> 8,uVar7),CONCAT71(iVar3 >> 8,0x18),
                                                         0x4000);
                                    if (-1 < iVar3) {
                                        *(iVar11 + 0x130 + *(arg1 + 8)) = *(iVar10 + 0x30 + *(arg1 + 8)) | 0x7ff0f03;
                                    }
                                }
                                uVar7 = uVar7 + 1;
                                uVar2 = uVar9;
                            }
                            return 0;
                        }
                        return iVar3;
                    }
                }
                fcn.0001774c(0x80000002,0x2080006);
            }
            return -0x7ffffffffffffff9;
        }
    }
    if (puStackX_8 != NULL) {
        (**(*0x17e00 + 0x48))();
    }
    return -0x7ffffffffffffffd;
}


/* fcn.000119e8 @ 0x119e8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.000119e8(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    int64_t var_38h;
    uint32_t var_40h;
    int64_t var_48h;
    uint32_t var_50h;
    uint64_t uStack_48;
    uint64_t auStack_40 [2];
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = *(arg1 + 0x78);
    uVar2 = *(arg1 + 0x90) + 1;
    uStackX_10 = uVar2 * 0x100;
    uStackX_18 = 0;
    uStackX_8 = 0;
    uStack_48 = 0;
    auStack_40[0] = 0;
    iVar3 = (**(iVar1 + 0x58))(iVar1,0,4,((uStackX_10 & 0xfff) != 0) + (uVar2 >> 4),&uStackX_18,0);
    if (iVar3 < 0) {
        return iVar3;
    }
    (**(*0x17e00 + 0x168))(uStackX_18,uStackX_10,0);
    uStackX_20 = 0x1000;
    iVar3 = (**(iVar1 + 0x58))(iVar1,0,4,1,&uStackX_8,0);
    if (-1 < iVar3) {
        (**(*0x17e00 + 0x168))(uStackX_8,uStackX_20,0);
        *(arg1 + 0x80) = uStackX_18;
        *(arg1 + 0x88) = uStackX_8;
        if (*(*0x17d80 + 9) == '\0') {
            uStack_48 = uStackX_18;
            auStack_40[0] = uStackX_8;
code_r0x00011bcb:
            *(arg1 + 0x28) = 0x20;
            *(arg1 + 0x48) = uStackX_10 + uStackX_18;
            *(arg1 + 0x38) = 0x780;
            *(arg1 + 0x40) = (uStackX_18 & 0xffffffffffffff00) + 0x100;
            *(arg1 + 0x100) = (uStack_48 & 0xffffffffffffff00) + 0x100;
            *(arg1 + 0xf0) = (auStack_40[0] & 0xfffffffffffffc00) + 0x400;
            *(arg1 + 0x20) = (uStackX_8 & 0xfffffffffffffc00) + 0x400;
            *(arg1 + 0x30) = (uStackX_8 & 0xfffffffffffffc00) + 0x480;
            *(arg1 + 0xf8) = (auStack_40[0] & 0xfffffffffffffc00) + 0x480;
            return 0;
        }
        iVar3 = (**(iVar1 + 0x48))(iVar1,2,uStackX_18,&uStackX_10,&uStack_48,arg1 + 0x108);
        if ((-1 < iVar3) && (uStackX_10 == (*(arg1 + 0x90) + 1) * 0x100)) {
            iVar3 = (**(iVar1 + 0x48))(iVar1,2,uStackX_8,&uStackX_20,auStack_40,arg1 + 0x110);
            if ((-1 < iVar3) && (uStackX_20 == 0x1000)) goto code_r0x00011bcb;
            (**(iVar1 + 0x50))(iVar1,*(arg1 + 0x108));
        }
        (**(iVar1 + 0x60))(iVar1,((uStackX_20 & 0xfff) != 0) + (uStackX_20 >> 0xc),uStackX_8);
    }
    (**(iVar1 + 0x60))(iVar1,(uStackX_10 >> 0xc) + ((uStackX_10 & 0xfff) != 0),uStackX_18);
    return -0x7ffffffffffffff7;
}


/* fcn.000134b4 @ 0x134b4 */

ulong fcn.000134b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    int in_stack_00000028;
    
    do {
        cVar2 = '\n';
        do {
            uVar1 = 0;
            if (arg1 != 0) {
                uVar1 = *(((arg2 & 0xff) + 2) * 0x80 + *(arg1 + 8) + (arg3 & 0xffU));
            }
            if ((arg4 & uVar1) == 0) {
                return 0;
            }
            (**(*0x17e00 + 0xf8))(100);
            cVar2 = cVar2 + -1;
        } while (cVar2 != '\0');
        in_stack_00000028 = in_stack_00000028 + -1;
        if (in_stack_00000028 == 0) {
            return 0x8000000000000007;
        }
    } while( true );
}


/* fcn.000168f0 @ 0x168f0 */

int64_t fcn.000168f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    uint64_t uVar3;
    uchar uVar4;
    uchar uVar5;
    unkbyte7 Var6;
    char cVar7;
    int *arg4_00;
    int64_t iVar8;
    int64_t iVar9;
    int iVar10;
    int iVar11;
    int aiStackX_8 [2];
    uint8_t in_stack_00000028;
    uint8_t in_stack_00000030;
    
    uVar4 = arg3;
    Var6 = arg3 >> 8;
    cVar7 = arg4;
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = *(arg2 + 0x348);
        if ((iVar2 == 0) || (*0x17dd0 != '\0')) {
            iVar2 = -0x7ffffffffffffff9;
        }
        else {
            uVar5 = 0x18;
            *0x17dd0 = 1;
            iVar9 = (arg3 & 0xffU) * 0x80;
            iVar8 = ((arg3 & 0xffU) + 2) * 0x80;
            uVar3 = *(iVar8 + 0x18 + *(arg1 + 8)) & 0xfffffffe;
            *(*(arg1 + 8) + 0x118 + iVar9) = uVar3;
            fcn.000134b4(arg1,CONCAT71(uVar3 >> 8,uVar4),CONCAT71(Var6,0x18),0x8000);
            uVar3 = *(iVar8 + 0x30 + *(arg1 + 8)) | 0x7ff0f03;
            *(*(arg1 + 8) + 0x130 + iVar9) = uVar3;
            if (cVar7 != -1) {
                aiStackX_8[0] = 0x7ff0f03;
                uVar5 = 1;
                fcn.00015824(arg2,CONCAT71(uVar3 >> 8,cVar7),CONCAT71(Var6,1),aiStackX_8);
            }
            arg4_00 = 0x4000;
            *(*(arg1 + 8) + 0x110 + iVar9) = *(iVar8 + 0x10 + *(arg1 + 8)) | 0xffc000ff;
            uVar1 = *(iVar8 + 0x18 + *(arg1 + 8));
            *(*(arg1 + 8) + 0x118 + iVar9) = uVar1 | 0x10;
            uVar3 = CONCAT31(uVar1 >> 8,uVar4);
            fcn.00013420(arg1,uVar3,CONCAT71(Var6,uVar5),0x4000);
            iVar10 = in_stack_00000028 * 0x10;
            iVar11 = in_stack_00000030 * 0x100;
            *(iVar2 + 0x40) = 0;
            if (cVar7 == -1) {
                *(*(arg1 + 8) + 300 + iVar9) = iVar10 + 1 + iVar11 | *(iVar8 + 0x2c + *(arg1 + 8)) & 0xfffff000;
                (**(*0x17e00 + 0xf8))(1000);
                *(*(arg1 + 8) + 300 + iVar9) = *(iVar8 + 0x2c + *(arg1 + 8)) & 0xfffffff0;
            }
            else {
                aiStackX_8[0] = iVar11 + iVar10 + 1;
                iVar2 = CONCAT71(uVar3 >> 8,cVar7);
                fcn.00015824(arg2,iVar2,CONCAT71(Var6,2),aiStackX_8);
                (**(*0x17e00 + 0xf8))(1000);
                arg4_00 = aiStackX_8;
                aiStackX_8[0] = iVar11 + iVar10;
                fcn.00015824(arg2,CONCAT71(iVar2 >> 8,cVar7),CONCAT71(Var6,2),arg4_00);
            }
            (**(*0x17e00 + 0xf8))(5000);
            iVar8 = arg2;
            fcn.00016de4(arg1,arg2,CONCAT71(Var6,uVar4),CONCAT71(arg4_00 >> 8,cVar7));
            *(arg2 + 0x14) = iVar11 + iVar10;
            iVar2 = extraout_RAX;
            if (-1 < extraout_RAX) {
                iVar2 = fcn.0001730c(arg2,CONCAT71(iVar8 >> 8,1));
            }
            *0x17dd0 = '\0';
        }
    }
    return iVar2;
}


/* fcn.000122c4 @ 0x122c4 */

int64_t fcn.000122c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    uint64_t arg4_00;
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uchar uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint uVar11;
    
    arg1_00 = *(arg1 + 0x350);
    uVar6 = arg3;
    uVar5 = arg3 & 0xff;
    if (arg1_00 != 0) {
        iVar10 = (arg3 & 0xffU) * 0x80;
        iVar9 = ((arg3 & 0xffU) + 2) * 0x80;
        *(iVar10 + 300 + *(arg1_00 + 8)) = *(iVar9 + 0x2c + *(arg1_00 + 8)) | 0x300;
        *(iVar10 + 0x130 + *(arg1_00 + 8)) = *(iVar9 + 0x30 + *(arg1_00 + 8)) | 0x7ff0f03;
        *(iVar10 + 0x110 + *(arg1_00 + 8)) = *(iVar9 + 0x10 + *(arg1_00 + 8)) | 0xffc000ff;
    }
    uVar3 = 0;
    if (arg1_00 != 0) {
        uVar3 = **(arg1_00 + 8);
    }
    uVar2 = 0;
    uVar4 = uVar3 >> 0x14 & 0xffffffffffffff0f;
    if (arg1_00 != 0) {
        uVar2 = *(uVar5 * 0x80 + 300 + *(arg1_00 + 8));
    }
    uVar1 = uVar2 >> 4 & 0xf;
    if ((uVar2 >> 4 & 0xf) == 0) {
        arg4_00 = CONCAT71(arg4 >> 8,uVar4);
    }
    else {
        arg4_00 = uVar3 >> 0x14 & 0xf;
        if (uVar1 <= uVar4) {
            arg4_00 = uVar1;
        }
    }
    uVar1 = 0;
    if (arg1_00 != 0) {
        uVar1 = *(uVar5 * 0x80 + 0x128 + *(arg1_00 + 8));
    }
    uVar7 = arg3;
    if ((uVar1 & 0xf) == 3) {
        uVar3 = 0;
        if (arg1_00 != 0) {
            uVar3 = *(uVar5 * 0x80 + 0x128 + *(arg1_00 + 8));
        }
        if ((uVar3 >> 4 & 0xf) <= arg4_00) goto code_r0x00012459;
        arg4_00 = CONCAT71(arg4_00 >> 8,arg4);
        uVar4 = arg1;
        iVar9 = fcn.000168f0(arg1_00,arg1,arg3,arg4_00);
        if (-1 < iVar9) goto code_r0x00012459;
code_r0x0001240c:
        iVar9 = -0x7ffffffffffffff9;
    }
    else {
        if (arg1_00 != 0) {
            uVar4 = *(uVar5 * 0x80 + 300 + *(arg1_00 + 8)) & 0xffffff0f | (arg4_00 & 0xff) << 4;
            uVar7 = uVar5 * 0x80;
            *(uVar7 + 300 + *(arg1_00 + 8)) = uVar4;
        }
code_r0x00012459:
        uVar3 = 0;
        if (arg1_00 != 0) {
            uVar3 = **(arg1_00 + 8);
        }
        if ((uVar3 >> 0x1b & 1) != 0) {
            uVar1 = 0;
            if (arg1_00 != 0) {
                uVar1 = *(uVar5 * 0x80 + 0x128 + *(arg1_00 + 8));
            }
            if ((uVar1 & 0xf) == 3) {
                if (arg1_00 != 0) {
                    uVar4 = *(uVar5 * 0x80 + 0x118 + *(arg1_00 + 8)) | 2;
                    uVar7 = uVar5 * 0x80;
                    *(uVar7 + 0x118 + *(arg1_00 + 8)) = uVar4;
                }
            }
            else {
                if (arg1_00 != 0) {
                    uVar4 = *(uVar5 * 0x80 + 0x118 + *(arg1_00 + 8)) | 0x10;
                    uVar7 = uVar5 * 0x80;
                    *(uVar7 + 0x118 + *(arg1_00 + 8)) = uVar4;
                }
                uVar8 = 0x4000;
                uVar11 = 0x4000;
                fcn.00013420(arg1_00,CONCAT71(uVar4 >> 8,uVar6),uVar7,0x4000);
                if (arg1_00 != 0) {
                    uVar7 = uVar5 * 0x80;
                    *(uVar7 + 0x118 + *(arg1_00 + 8)) = *(uVar5 * 0x80 + 0x118 + *(arg1_00 + 8)) | 2;
                }
                iVar9 = CONCAT71(uVar7 >> 8,uVar6);
                arg4_00 = fcn.00016de4(arg1_00,arg1,iVar9,CONCAT71(uVar8 >> 8,0xff));
                if (arg1_00 != 0) {
                    iVar9 = uVar5 * 0x80;
                    *(iVar9 + 0x118 + *(arg1_00 + 8)) = *(uVar5 * 0x80 + 0x118 + *(arg1_00 + 8)) & 0xffffffef;
                }
                if (arg4_00 < 0) goto code_r0x0001240c;
                uVar7 = CONCAT71(iVar9 >> 8,uVar6);
                uVar4 = 0;
                (**(arg2 + 8))(arg2,5,uVar7,arg4_00,uVar11);
            }
        }
        uVar1 = 0;
        if (arg1_00 != 0) {
            uVar1 = *(uVar5 * 0x80 + 0x128 + *(arg1_00 + 8));
        }
        if ((uVar1 & 0xf) == 3) {
            uVar3 = 0;
            if (arg1_00 != 0) {
                uVar3 = *(uVar5 * 0x80 + 0x118 + *(arg1_00 + 8));
            }
            if (((uVar3 >> 0x14 & 1) != 0) && (arg1_00 != 0)) {
                uVar7 = *(uVar5 * 0x80 + 0x118 + *(arg1_00 + 8)) | 4;
                arg4_00 = uVar5 * 0x80;
                *(arg4_00 + 0x118 + *(arg1_00 + 8)) = uVar7;
            }
        }
        iVar9 = fcn.0001714c(arg1,CONCAT71(uVar4 >> 8,uVar6),uVar7);
        if (iVar9 < 0) {
            uVar8 = CONCAT71(uVar7 >> 8,uVar6);
            (**(arg2 + 8))(arg2,2,uVar8);
            iVar9 = fcn.000168f0(arg1_00,arg1,CONCAT71(uVar8 >> 8,uVar6),CONCAT71(arg4_00 >> 8,arg4));
            (**(arg2 + 8))(arg2,3,arg3 & 0xff);
        }
    }
    return iVar9;
}


/* fcn.000126a4 @ 0x126a4 */

ulong fcn.000126a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t arg2_00;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uVar4;
    unkbyte7 Var5;
    uchar uVar6;
    uint *arg4_00;
    int64_t iVar7;
    ulong uVar8;
    uint32_t auStackX_8 [2];
    uint auStack_38 [4];
    
    iVar2 = *(arg1 + 0x350);
    uVar6 = arg4;
    arg4_00 = auStack_38;
    iVar1 = CONCAT71(arg2 >> 8,uVar6);
    uVar3 = 0;
    auStack_38[0] = 0;
    uVar4 = 0;
    uVar8 = 0x8000000000000007;
    fcn.00015824(arg1,iVar1,0,arg4_00);
    *(arg1 + 0x14) = 0x300;
    Var5 = uVar4 >> 8;
    if ((auStack_38[0] & 0xf) == 3) {
        auStackX_8[0] = 0x300;
        arg2_00 = CONCAT71(iVar1 >> 8,uVar6);
        fcn.00015824(arg1,arg2_00,CONCAT71(Var5,2),auStackX_8);
    }
    else {
        uVar8 = CONCAT71(Var5,arg3);
        (**(arg2 + 8))(arg2,2,uVar8);
        if (iVar2 != 0) {
            uVar3 = *((arg3 & 0xffU) * 0x80 + 300 + *(iVar2 + 8));
        }
        auStackX_8[0] = uVar3 & 0xff0;
        uVar8 = fcn.000168f0(iVar2,arg1,CONCAT71(uVar8 >> 8,arg3),CONCAT71(arg4_00 >> 8,uVar6));
        (**(arg2 + 8))(arg2,3,arg3 & 0xff);
        arg2_00 = *0x17e00;
        (**(*0x17e00 + 0xf8))(1000000);
    }
    if (iVar2 != 0) {
        iVar7 = (arg3 & 0xffU) * 0x80;
        iVar1 = ((arg3 & 0xffU) + 2) * 0x80;
        *(*(iVar2 + 8) + 0x130 + iVar7) = *(*(iVar2 + 8) + 0x30 + iVar1) | 0x7ff0f03;
        arg2_00 = *(*(iVar2 + 8) + 0x10 + iVar1) | 0xffc000ff;
        *(*(iVar2 + 8) + 0x110 + iVar7) = arg2_00;
    }
    auStackX_8[0] = 0x7ff0f03;
    iVar2 = CONCAT71(arg2_00 >> 8,uVar6);
    fcn.00015824(arg1,iVar2,0x7ff0f01,auStackX_8);
    auStackX_8[0] = 0;
    fcn.00015824(arg1,CONCAT71(iVar2 >> 8,uVar6),0,auStackX_8);
    uVar4 = 0;
    if ((auStackX_8[0] & 0xf) != 3) {
        uVar4 = uVar8;
    }
    return uVar4;
}


/* fcn.00013420 @ 0x13420 */

ulong fcn.00013420(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    uint32_t in_stack_00000028;
    
    iVar2 = 500;
    do {
        cVar3 = '\n';
        do {
            uVar1 = 0;
            if (arg1 != 0) {
                uVar1 = *((arg2 & 0xffU) * 0x80 + 0x118 + *(arg1 + 8));
            }
            if ((uVar1 & arg3) == in_stack_00000028) {
                return 0;
            }
            (**(*0x17e00 + 0xf8))(100);
            cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
            return 0x8000000000000007;
        }
    } while( true );
}


/* fcn.00016de4 @ 0x16de4 */

uint64_t fcn.00016de4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uchar uVar7;
    int64_t iVar8;
    char cVar9;
    uint32_t uVar10;
    uint uVar11;
    
    cVar9 = arg4;
    uVar7 = arg3;
    uVar6 = 0;
    iVar8 = arg3;
    while( true ) {
        uVar11 = arg4 >> 0x20;
        uVar10 = CONCAT31(arg4 >> 8,cVar9);
        iVar8 = CONCAT71(iVar8 >> 8,uVar7);
        uVar2 = fcn.0001706c(arg1,arg2,iVar8,uVar10);
        if (((uVar2 & 0xf) - 1 & 0xfffffffd) == 0) break;
        (**(*0x17e00 + 0xf8))(1000);
        arg4 = CONCAT44(uVar11,uVar10);
        uVar6 = uVar6 + 1;
        if (9 < uVar6) {
            return 0x8000000000000007;
        }
    }
    uVar6 = 0;
    do {
        uVar10 = CONCAT31(uVar10 >> 8,cVar9);
        iVar8 = CONCAT71(iVar8 >> 8,uVar7);
        uVar4 = fcn.0001706c(arg1,arg2,iVar8,uVar10);
        if ((uVar4 & 0xf) == 0) {
            return 0x8000000000000007;
        }
        uVar10 = CONCAT31(uVar10 >> 8,cVar9);
        iVar8 = CONCAT71(iVar8 >> 8,uVar7);
        uVar2 = fcn.0001706c(arg1,arg2,iVar8,uVar10);
        if ((uVar2 >> 0x1a & 1) != 0) break;
        (**(*0x17e00 + 0xf8))(1000);
        iVar3 = 1;
        if (cVar9 != -1) {
            iVar3 = 100;
        }
        uVar6 = uVar6 + iVar3;
    } while (uVar6 < 30000);
    if (uVar6 < 30000) {
        iVar1 = *(arg2 + 0x348);
        uVar6 = 0;
        do {
            uVar10 = CONCAT31(uVar10 >> 8,cVar9);
            iVar8 = CONCAT71(iVar8 >> 8,uVar7);
            uVar4 = fcn.0001706c(arg1,arg2,iVar8,uVar10);
            if ((uVar4 & 0x7fa0f00) != 0) {
                uVar10 = CONCAT31(uVar10 >> 8,cVar9);
                iVar8 = CONCAT71(iVar8 >> 8,uVar7);
                fcn.000170e0(arg1,arg2,iVar8,CONCAT44(uVar11,uVar10));
            }
            if (*(iVar1 + 0x40) == '4') break;
            (**(*0x17e00 + 0xf8))(1000);
            iVar3 = 1;
            if (cVar9 != -1) {
                iVar3 = 100;
            }
            uVar6 = uVar6 + iVar3;
        } while (uVar6 < 30000);
        if (uVar6 < 30000) {
            uVar6 = 0;
            do {
                uVar10 = CONCAT31(uVar10 >> 8,cVar9);
                iVar8 = CONCAT71(iVar8 >> 8,uVar7);
                fcn.000170e0(arg1,arg2,iVar8,CONCAT44(uVar11,uVar10));
                uVar5 = 0;
                if (arg1 != 0) {
                    uVar5 = *((arg3 & 0xffU) * 0x80 + 0x120 + *(arg1 + 8));
                }
                if (((*(iVar1 + 0x42) ^ uVar5) & 0x89) == 0) break;
                (**(*0x17e00 + 0xf8))(100);
                uVar6 = uVar6 + 1;
            } while (uVar6 < 100);
            uVar6 = 0;
            uVar4 = -((*(iVar1 + 0x42) & 0x81) != 0) & 0x8000000000000007;
            if (arg1 != 0) {
                uVar6 = *((arg3 & 0xffU) * 0x80 + 0x110 + *(arg1 + 8));
            }
            if ((uVar6 & 0x7c000000) != 0) {
                uVar4 = 0x8000000000000007;
            }
            fcn.000170e0(arg1,arg2,CONCAT71(iVar8 >> 8,uVar7),CONCAT44(uVar11,CONCAT31(uVar10 >> 8,cVar9)));
            if ((arg1 != 0) &&
               (*((arg3 & 0xffU) * 0x80 + 0x110 + *(arg1 + 8)) =
                     *((arg3 & 0xffU) * 0x80 + 0x110 + *(arg1 + 8)) | 0xffc000ff, arg1 != 0)) {
                iVar3 = *((arg3 & 0xffU) * 0x80 + 0x124 + *(arg1 + 8));
                if (iVar3 == 0x101) {
                    return uVar4;
                }
                if (iVar3 == -0x14ebfeff) {
                    return uVar4;
                }
                if (iVar3 == -0x6996feff) {
                    return uVar4;
                }
            }
            return 0x8000000000000007;
        }
    }
    return 0x8000000000000007;
}


/* fcn.0001714c @ 0x1714c */

uint64_t fcn.0001714c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t arg1_00;
    uint8_t uVar2;
    int16_t iVar3;
    int64_t iVar4;
    uchar uVar5;
    uint64_t uVar6;
    int64_t arg2_00;
    uint32_t uVar7;
    uint64_t uVar8;
    
    arg1_00 = *(arg1 + 0x350);
    uVar2 = 0;
    iVar4 = *(arg1 + 0x348);
    uVar5 = arg2;
    uVar8 = arg2 & 0xff;
    if (arg1_00 != 0) {
        uVar2 = *((arg2 & 0xffU) * 0x80 + 0x128 + *(arg1_00 + 8));
    }
    if ((uVar2 & 0xf) == 3) {
        uVar6 = arg2;
        if (arg1_00 != 0) {
            arg3 = uVar8 * 0x80;
            *(arg3 + 0x138 + *(arg1_00 + 8)) = 0;
            uVar6 = *((uVar8 + 2) * 0x80 + 0x18 + *(arg1_00 + 8)) | 0x11;
            *(arg3 + 0x118 + *(arg1_00 + 8)) = uVar6;
        }
        arg2_00 = CONCAT71(uVar6 >> 8,uVar5);
        fcn.00013420(arg1_00,arg2_00,arg3,0x4000);
        uVar6 = CONCAT71(arg2_00 >> 8,uVar5);
        fcn.00013420(arg1_00,uVar6,arg3,0x8000);
        uVar7 = 0;
        do {
            iVar3 = 0;
            if (arg1_00 != 0) {
                iVar3 = *((arg2 & 0xffU) * 0x80 + 0x124 + *(arg1_00 + 8));
            }
            if ((iVar3 == 0x101) || (*(iVar4 + 0x40) == '4')) break;
            (**(*0x17e00 + 0xf8))(1000);
            uVar7 = uVar7 + 1;
        } while (uVar7 < 30000);
        if (arg1_00 != 0) {
            uVar6 = *(uVar8 * 0x80 + 0x118 + *(arg1_00 + 8)) & 0xfffffffe;
            arg3 = uVar8 * 0x80;
            *(arg3 + 0x118 + *(arg1_00 + 8)) = uVar6;
        }
        fcn.000134b4(arg1_00,CONCAT71(uVar6 >> 8,uVar5),CONCAT71(arg3 >> 8,0x18),0x8000);
        if (arg1_00 != 0) {
            iVar4 = ((arg2 & 0xffU) + 2) * 0x80;
            iVar1 = *(iVar4 + 0x24 + *(arg1_00 + 8));
            if (((iVar1 == 0x101) || (iVar1 == -0x14ebfeff)) || (iVar1 == -0x6996feff)) {
                return -((*(iVar4 + 0x20 + *(arg1_00 + 8)) & 0x88) != 0) & 0x8000000000000007;
            }
        }
    }
    return 0x8000000000000007;
}


/* fcn.00014d9c @ 0x14d9c */

int64_t fcn.00014d9c(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    int64_t arg1_00;
    uint32_t *arg2_00;
    int64_t iVar2;
    ulong in_R8;
    int64_t iVar3;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    uchar uStack_28;
    
    arg1_00 = *(arg1 + 0x350);
    arg2_00 = *(arg1 + 0x340);
    iVar3 = *(arg1_00 + 0x30);
    iVar2 = fcn.00016458(arg1_00,arg1,CONCAT71(in_R8 >> 8,1));
    if (-1 < iVar2) {
        iVar2 = fcn.00016714(arg1);
        if (-1 < iVar2) {
            fcn.00015f68(arg1,arg2_00,*(arg1_00 + 0xf8));
            uStack_58 = *arg2;
            uStack_50 = *(arg2 + 8);
            uStack_28 = *(arg2 + 0x30);
            uStack_48 = *(arg2 + 0x10);
            uStack_40 = *(arg2 + 0x18);
            uStack_38 = *(arg2 + 0x20);
            uStack_30 = *(arg2 + 0x28);
            fcn.00015fdc(arg1,&uStack_58,arg2_00,iVar3);
            *arg2_00 = *arg2_00 & 0xffffffbf;
            puVar1 = iVar3 + 1;
            *puVar1 = *puVar1 | 0x80;
            fcn.00016170(arg1_00,arg1);
            iVar3 = *(arg2 + 0x19);
            if (iVar3 == 0) {
                iVar3 = 30000;
            }
            iVar2 = fcn.00016268(arg1,0,iVar3);
        }
        fcn.00016458(arg1_00,arg1,0);
    }
    return iVar2;
}


/* fcn.00016458 @ 0x16458 */

int64_t fcn.00016458(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    char cVar7;
    int64_t arg3_00;
    uint32_t uVar8;
    
    uVar1 = *(arg2 + 8);
    cVar7 = arg3;
    uVar2 = *(arg2 + 9);
    uVar4 = *(arg2 + 0x3d0);
    iVar5 = *(arg1 + 0xf0);
    if (cVar7 != '\0') {
        uVar6 = uVar1;
        uVar3 = *(uVar6 * 0x80 + 0x104 + *(arg1 + 8));
        arg3 = uVar3;
        if (CONCAT44(uVar3,*((uVar6 + 2) * 0x80 + *(arg1 + 8))) != iVar5) {
            *0x17dd8 = CONCAT44(*(uVar1 * 0x80 + 0x104 + *(arg1 + 8)),*((uVar6 + 2) * 0x80 + *(arg1 + 8)));
            uVar8 = uVar1;
            uVar3 = *(uVar6 * 0x80 + 0x10c + *(arg1 + 8));
            arg3 = uVar3;
            *0x17e40 = CONCAT44(uVar3,*(uVar8 * 0x80 + 0x108 + *(arg1 + 8)));
            *(uVar8 * 0x80 + 0x104 + *(arg1 + 8)) = iVar5 >> 0x20;
            *((uVar1 + 2) * 0x80 + *(arg1 + 8)) = iVar5;
            *(uVar8 * 0x80 + 0x10c + *(arg1 + 8)) = uVar4 >> 0x20;
            *(uVar6 * 0x80 + 0x108 + *(arg1 + 8)) = uVar4;
        }
    }
    arg3_00 = CONCAT71(arg3 >> 8,0x18);
    uVar6 = *(uVar1 * 0x80 + 0x118 + *(arg1 + 8)) & 0xfffffffe;
    *(uVar1 * 0x80 + 0x118 + *(arg1 + 8)) = uVar6;
    iVar5 = fcn.000134b4(arg1,CONCAT71(uVar6 >> 8,uVar1),arg3_00,0x8000);
    if (iVar5 < 0) {
        iVar5 = fcn.000168f0(arg1,arg2,CONCAT71(arg3_00 >> 8,uVar1),CONCAT71(iVar5 >> 8,uVar2));
    }
    *(uVar1 * 0x80 + 0x130 + *(arg1 + 8)) = *(uVar1 * 0x80 + 0x130 + *(arg1 + 8)) | 0x7ff0f03;
    *(uVar1 * 0x80 + 0x110 + *(arg1 + 8)) = *(uVar1 * 0x80 + 0x110 + *(arg1 + 8)) | 0xffc000ff;
    if ((cVar7 == '\0') && (*0x17dd8 != 0)) {
        *(uVar1 * 0x80 + 0x104 + *(arg1 + 8)) = *0x17dd8 >> 0x20;
        *((uVar1 + 2) * 0x80 + *(arg1 + 8)) = *0x17dd8;
        uVar4 = *0x17e40;
        *(uVar1 * 0x80 + 0x10c + *(arg1 + 8)) = *0x17e40 >> 0x20;
        *0x17dd8 = 0;
        *(uVar1 * 0x80 + 0x108 + *(arg1 + 8)) = uVar4;
    }
    return iVar5;
}


/* fcn.00016714 @ 0x16714 */

int64_t fcn.00016714(int64_t arg1)

{
    uint8_t uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    uint8_t uVar7;
    ulong in_R8;
    ulong uVar8;
    unkbyte7 Var9;
    int64_t arg3;
    ulong in_R9;
    uint *arg4;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    
    arg1_00 = *(arg1 + 0x350);
    iVar2 = 0;
    auStackX_10[0] = 0;
    uVar7 = 0;
    uVar1 = *(arg1 + 8);
    if (arg1_00 != 0) {
        uVar7 = *(uVar1 * 0x80 + 0x120 + *(arg1_00 + 8));
    }
    if ((uVar7 & 0x88) != 0) {
        iVar4 = arg1;
        iVar2 = fcn.000168f0(arg1_00,arg1,CONCAT71(in_R8 >> 8,uVar1),CONCAT71(in_R9 >> 8,0xff));
        if (iVar2 < 0) {
            return iVar2;
        }
        piVar3 = *(arg1_00 + 0x58);
        if (piVar3 != NULL) {
            do {
                piVar5 = piVar3 + -0x73;
                if ((*(piVar3 + -0x72) == uVar1) && (*(piVar3 + -0x38f) == -1)) break;
                piVar3 = *piVar3;
                piVar5 = NULL;
            } while (piVar3 != NULL);
            if (piVar5 != NULL) {
                if ((piVar5[3] == 2) && (uVar7 = 0, *(piVar5 + 10) != '\0')) {
                    do {
                        piVar3 = *(arg1_00 + 0x58);
                        if (piVar3 != NULL) {
                            do {
                                piVar6 = piVar3 + -0x73;
                                if ((*(piVar3 + -0x72) == uVar1) && (*(piVar3 + -0x38f) == uVar7)) break;
                                piVar3 = *piVar3;
                                piVar6 = NULL;
                            } while (piVar3 != NULL);
                            if (piVar6 != NULL) {
                                arg4 = auStackX_10;
                                uVar8 = 0;
                                iVar4 = CONCAT71(iVar4 >> 8,uVar7);
                                fcn.00015824(arg1,iVar4,0,arg4);
                                Var9 = uVar8 >> 8;
                                if ((auStackX_10[0] & 0xf) == 3) {
                                    auStackX_8[0] = *(piVar6 + 0x14);
                                    arg3 = CONCAT71(Var9,2);
                                    iVar4 = CONCAT71(iVar4 >> 8,uVar7);
                                    fcn.00015824(arg1,iVar4,arg3,auStackX_8);
                                }
                                else {
                                    arg3 = CONCAT71(Var9,uVar1);
                                    iVar4 = arg1;
                                    fcn.000168f0(arg1_00,arg1,arg3,CONCAT71(arg4 >> 8,uVar7));
                                }
                                auStackX_8[0] = 0x7ff0f03;
                                iVar4 = CONCAT71(iVar4 >> 8,uVar7);
                                fcn.00015824(arg1,iVar4,CONCAT71(arg3 >> 8,1),auStackX_8);
                            }
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(piVar5 + 10));
                }
                goto code_r0x000168cd;
            }
        }
        iVar2 = -0x7ffffffffffffff9;
    }
code_r0x000168cd:
    return iVar2;
}


/* fcn.00015f68 @ 0x15f68 */

ulong fcn.00015f68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    
    (**(*0x17e00 + 0x168))(arg2,0x20);
    *arg2 = *arg2 & 0xfffff47f;
    uVar1 = 0;
    if (*(arg1 + 9) != -1) {
        uVar1 = *(arg1 + 9);
    }
    *(arg2 + 8) = arg3;
    *arg2 = *arg2 ^ (uVar1 << 0xc ^ *arg2) & 0xf000;
    *(arg2 + 0xc) = arg3 >> 0x20;
    *(arg2 + 2) = 0;
    *(arg2 + 4) = 0;
    return 0;
}


/* fcn.00015fdc @ 0x15fdc */

ulong fcn.00015fdc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    
    (**(*0x17e00 + 0x168))(arg4,0x90,0);
    *arg4 = 0x27;
    if (*(arg1 + 9) == -1) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(arg1 + 9);
    }
    *(arg4 + 1) = *(arg4 + 1) & 0xf0;
    *(arg4 + 1) = *(arg4 + 1) | uVar1 & 0xf;
    *(arg4 + 2) = *(arg2 + 0x17);
    *(arg4 + 3) = *(arg2 + 0xc);
    *(arg4 + 0xb) = *(arg2 + 0xd);
    *(arg4 + 4) = *(arg2 + 0x10);
    *(arg4 + 8) = *(arg2 + 0x11);
    *(arg4 + 5) = *(arg2 + 0x12);
    *(arg4 + 9) = *(arg2 + 0x13);
    *(arg4 + 6) = *(arg2 + 0x14);
    *(arg4 + 10) = *(arg2 + 0x15);
    *(arg4 + 0xc) = *(arg2 + 0xe);
    *(arg4 + 0xd) = *(arg2 + 0xf);
    *(arg4 + 7) = *(arg2 + 0x16);
    *(arg4 + 0xf) = *(arg2 + 0x18);
    *arg3 = *arg3 & 0xffffffe5;
    *arg3 = *arg3 | 5;
    return 0;
}


/* fcn.00016170 @ 0x16170 */

ulong fcn.00016170(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *(arg2 + 8);
    if (arg1 != 0) {
        uVar2 = uVar1;
        *(uVar1 * 0x80 + 0x130 + *(arg1 + 8)) = *(uVar2 * 0x80 + 0x130 + *(arg1 + 8)) | 0x7ff0f03;
        *(uVar2 * 0x80 + 0x110 + *(arg1 + 8)) = *(uVar2 * 0x80 + 0x110 + *(arg1 + 8)) | 0xffc000ff;
    }
    (**(*0x17e00 + 0x168))(*(arg2 + 0x348),0x100,0);
    if (arg1 != 0) {
        *(uVar1 * 0x80 + 0x118 + *(arg1 + 8)) = *(uVar1 * 0x80 + 0x118 + *(arg1 + 8)) | 1;
        *(uVar1 * 0x80 + 0x138 + *(arg1 + 8)) = *(uVar1 * 0x80 + 0x138 + *(arg1 + 8)) | 1;
    }
    return 0;
}


/* fcn.00016268 @ 0x16268 */

//WARNING: Variable defined which should be unmapped: var_5h

int64_t fcn.00016268(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t arg1_00;
    bool bVar2;
    uint32_t uVar3;
    int64_t extraout_RAX;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int iVar7;
    unkbyte7 Var8;
    uint64_t uVar9;
    int32_t var_5h;
    
    Var8 = arg3 >> 8;
    arg1_00 = *(arg1 + 0x350);
    uVar6 = 0;
    uVar1 = *(arg1 + 8);
    iVar4 = *(arg1 + 0x348);
    uVar9 = arg3 != 0;
    bVar2 = false;
    iVar5 = arg2;
    do {
        (**(*0x17e00 + 0xf8))(500);
        uVar3 = 0;
        if (arg1_00 != 0) {
            uVar3 = *(uVar1 * 0x80 + 0x130 + *(arg1_00 + 8));
        }
        if ((uVar3 & 0x7fa0f00) != 0) {
code_r0x000163ce:
            if (arg1_00 != 0) {
                *(uVar1 * 0x80 + 0x130 + *(arg1_00 + 8)) = *(uVar1 * 0x80 + 0x130 + *(arg1_00 + 8)) | 0x7ff0f03;
                *(uVar1 * 0x80 + 0x110 + *(arg1_00 + 8)) = *(uVar1 * 0x80 + 0x110 + *(arg1_00 + 8)) | 0xffc000ff;
            }
            return -0x7ffffffffffffff9;
        }
        uVar3 = 0;
        if (arg1_00 != 0) {
            uVar3 = *(uVar1 * 0x80 + 0x110 + *(arg1_00 + 8));
        }
        if ((uVar3 & 0xf9800050) != 0) goto code_r0x000163ce;
        iVar7 = arg2;
        if ((0 < iVar7) && (((iVar7 < 3 || (iVar7 - 5U < 2)) && (*(iVar4 + 0x20) == '_')))) {
            *(iVar4 + 0x20) = 0;
            bVar2 = true;
        }
        if (*(iVar4 + 0x40) == '4') break;
        if ((iVar7 == 1) && (bVar2)) {
            uVar3 = 0;
            if (arg1_00 != 0) {
                uVar3 = *(uVar1 * 0x80 + 0x120 + *(arg1_00 + 8));
            }
            if ((uVar3 & 0x88) == 0) break;
        }
        uVar3 = uVar9 + 1;
        if (arg3 == 0) {
            uVar3 = uVar9;
        }
        uVar9 = uVar3;
    } while (uVar9 <= arg3 * 2);
    fcn.000134b4(arg1_00,CONCAT71(iVar5 >> 8,uVar1),CONCAT71(Var8,0x38),0xffff);
    iVar4 = extraout_RAX;
    if (extraout_RAX < 0) {
        iVar4 = -0x7fffffffffffffee;
    }
    if (arg1_00 != 0) {
        uVar6 = *(uVar1 * 0x80 + 0x120 + *(arg1_00 + 8));
    }
    if ((uVar6 & 9) != 0) {
        iVar4 = -0x7ffffffffffffff9;
    }
    return iVar4;
}


/* fcn.0001730c @ 0x1730c */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_7h

int64_t fcn.0001730c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t var_17h;
    int64_t var_27h;
    int64_t var_37h;
    int8_t var_47h;
    ulong uStack_88;
    unkbyte6 Stack_80;
    uint16_t uStack_7a;
    unkbyte7 Stack_78;
    uchar uStack_71;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uchar uStack_58;
    ulong uStack_48;
    uint64_t uStack_40;
    uchar auStack_38 [7];
    int64_t var_29h;
    int16_t var_1bh;
    ulong uStack_28;
    int8_t var_12h;
    ulong uStack_20;
    uchar uStack_18;
    int64_t var_9h;
    int8_t var_7h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    if (*(arg1_00 + 0x10) == 0x101) {
        if ((arg2 != '\0') && (iVar1 = fcn.000159e0(arg1_00), iVar1 < 0)) {
            return iVar1;
        }
        if ((*(arg1_00 + 0x99) >> 8 & 1) == 0 || *(arg1_00 + 0x99) == '\0') {
            uVar2 = *(arg1_00 + 0x81);
            if ((*(arg1_00 + 0x81) & 2) != 0) {
                uVar2 = 2;
            }
            if ((uVar2 & 4) != 0) {
                uVar2 = 4;
            }
            if ((uVar2 & 8) != 0) {
                uVar2 = 8;
            }
            if ((uVar2 & 0x10) != 0) {
                uVar2 = 0x10;
            }
            if ((uVar2 & 0x20) != 0) {
                uVar2 = 0x20;
            }
            if ((uVar2 & 0x40) != 0) {
                uVar2 = 0x40;
            }
            if (uVar2 < '\0') {
                uVar2 = 0x80;
            }
            if (1 < uVar2) {
                (**(*0x17e00 + 0x168))(&uStack_88,0x31,0);
                uStack_7a = uVar2;
                uStack_40 = CONCAT16(uVar2,Stack_80);
                uStack_71 = 0xc6;
                _auStack_38 = CONCAT17(0xc6,Stack_78);
                uStack_18 = uStack_58;
                uStack_48 = uStack_88;
                stack0xffffffffffffffd0 = uStack_70;
                uStack_28 = uStack_68;
                uStack_20 = uStack_60;
                iVar1 = fcn.00014d9c(arg1_00,&uStack_48);
            }
        }
    }
    return iVar1;
}


/* fcn.000177f0 @ 0x177f0 */

int64_t fcn.000177f0(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.000177c4(arg1);
    if (iVar1 != 0) {
        (**(*0x17e00 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.000177c4 @ 0x177c4 */

ulong fcn.000177c4(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x17e00 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00013068 @ 0x13068 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_7h

void fcn.00013068(int64_t arg1)

{
    int64_t var_17h;
    int64_t var_27h;
    int64_t var_37h;
    int8_t var_47h;
    ulong uStack_88;
    uint uStack_80;
    uchar uStack_7c;
    uchar uStack_7b;
    ushort uStack_7a;
    unkbyte7 Stack_78;
    uchar uStack_71;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uchar uStack_58;
    ulong uStack_48;
    ulong uStack_40;
    uchar auStack_38 [7];
    int64_t var_29h;
    int8_t var_1dh;
    int16_t var_1bh;
    ulong uStack_28;
    int8_t var_12h;
    ulong uStack_20;
    uchar uStack_18;
    int64_t var_9h;
    int8_t var_7h;
    
    (**(*0x17e00 + 0x168))(&uStack_88,0x31);
    uStack_71 = 0xef;
    uStack_7a = 3;
    if (((*(*(arg1 + 0x350) + 0x14) & 0x4000000) != 0) && ((*(arg1 + 0xbf) & 8) != 0)) {
        if (*(*0x17d80 + 6) == '\0') {
            if ((*(arg1 + 0xc1) & 8) == 0) {
                return;
            }
            uStack_7c = 0x90;
        }
        else {
            if ((*(arg1 + 0xc1) & 8) != 0) {
                return;
            }
            uStack_7c = 0x10;
        }
        uStack_40 = CONCAT26(3,CONCAT15(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
        _auStack_38 = CONCAT17(0xef,Stack_78);
        uStack_18 = uStack_58;
        uStack_48 = uStack_88;
        stack0xffffffffffffffd0 = uStack_70;
        uStack_28 = uStack_68;
        uStack_20 = uStack_60;
        fcn.00014d9c(arg1,&uStack_48);
    }
    return;
}


/* fcn.00013120 @ 0x13120 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h

void fcn.00013120(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    int64_t var_17h;
    int8_t var_27h;
    int64_t var_67h;
    ulong uStack_e8;
    uint uStack_e0;
    uchar uStack_dc;
    uchar uStack_db;
    ushort uStack_da;
    uchar uStack_d8;
    uchar uStack_d7;
    uchar uStack_d6;
    uint uStack_d5;
    uchar uStack_d1;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    uchar uStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int8_t var_7dh;
    int16_t var_7bh;
    ulong uStack_88;
    int8_t var_72h;
    ulong uStack_80;
    uchar uStack_78;
    int64_t var_69h;
    ulong uStack_68;
    int8_t var_59h;
    ulong uStack_60;
    uchar auStack_58 [7];
    int64_t var_49h;
    uchar auStack_48 [7];
    int64_t var_39h;
    uchar uStack_38;
    int64_t var_29h;
    int8_t var_19h;
    int64_t var_9h;
    
    iVar2 = *(arg1 + 0x350);
    uVar6 = 0x14;
    uVar3 = 0;
    uVar1 = *(arg1 + 8);
    if (iVar2 != 0) {
        uVar3 = *(*(iVar2 + 8) + 0x24);
    }
    if ((uVar3 & 0x10) != 0) {
        uVar3 = 0;
        if (iVar2 != 0) {
            uVar3 = *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8));
        }
        if ((uVar3 & 2) != 0) {
            if (iVar2 != 0) {
                *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8)) = *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8)) & 0xfffffffe;
            }
            if (((*(arg1 + 0xbf) & 0x100) != 0) && ((*(arg1 + 0xbd) & 0x80) != 0)) {
                if (*(*0x17d80 + 8) == '\0') {
                    if ((*(arg1 + 0xc1) & 0x100) != 0) {
                        (**(*0x17e00 + 0x168))(&uStack_e8,0x31);
                        uStack_dc = 0x90;
                        uStack_da = 9;
                        uStack_60 = CONCAT26(9,CONCAT15(uStack_db,CONCAT14(0x90,uStack_e0)));
                        uStack_d1 = 0xef;
                        _auStack_58 = CONCAT17(0xef,CONCAT43(uStack_d5,
                                                              CONCAT12(uStack_d6,CONCAT11(uStack_d7,uStack_d8))));
                        uStack_38 = uStack_b8;
                        uStack_68 = uStack_e8;
                        stack0xffffffffffffffb0 = uStack_d0;
                        _auStack_48 = uStack_c8;
                        stack0xffffffffffffffc0 = uStack_c0;
                        fcn.00014d9c(arg1,&stack0xffffffffffffff98);
                    }
                }
                else {
                    if ((*(arg1 + 0xc1) & 0x100) == 0) {
                        (**(*0x17e00 + 0x168))(&uStack_e8,0x31,0);
                        uStack_dc = 0x10;
                        uStack_da = 9;
                        uStack_a0 = CONCAT26(9,CONCAT15(uStack_db,CONCAT14(0x10,uStack_e0)));
                        uStack_d1 = 0xef;
                        uStack_98 = CONCAT17(0xef,CONCAT43(uStack_d5,
                                                            CONCAT12(uStack_d6,CONCAT11(uStack_d7,uStack_d8))));
                        uStack_78 = uStack_b8;
                        uStack_a8 = uStack_e8;
                        uStack_90 = uStack_d0;
                        uStack_88 = uStack_c8;
                        uStack_80 = uStack_c0;
                        fcn.00014d9c(arg1,&uStack_a8);
                    }
                    (**(*0x17e00 + 0x40))(4,0x200);
                    (**(*0x17e00 + 0x168))(0,0x200);
                    (**(*0x17e00 + 0x168))(&uStack_e8,0x31);
                    uStack_e8 = 0;
                    uStack_d1 = 0x2f;
                    uStack_da = 1;
                    uStack_d6 = 8;
                    uStack_d8 = 0x30;
                    uStack_e0 = 0x200;
                    iVar4 = fcn.00014e98(arg1,&uStack_e8,0);
                    uVar3 = 10;
                    if (-1 < iVar4) {
                        uVar6 = 0x14;
                        if (*0x31 != 0) {
                            uVar6 = *0x31;
                        }
                        if ((*0x30 & 0x1f) != 0) {
                            uVar3 = *0x30 & 0x1f;
                        }
                    }
                    uVar5 = 0;
                    if (iVar2 != 0) {
                        uVar5 = *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8));
                    }
                    if (iVar2 != 0) {
                        *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8)) =
                             uVar5 & 0xe1ff8003 | uVar3 * 0x400 + (uVar6 + 0x7800000) * 4 |
                             *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8));
                        *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8)) = *(uVar1 * 0x80 + 0x144 + *(iVar2 + 8)) | 1;
                    }
                    (**(*0x17e00 + 0x48))(0);
                }
            }
        }
    }
    return;
}


/* fcn.00013be4 @ 0x13be4 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_7h

ulong fcn.00013be4(int64_t arg1)

{
    ulong uVar1;
    int64_t var_17h;
    int64_t var_27h;
    int64_t var_37h;
    int8_t var_47h;
    ulong uStack_88;
    uint uStack_80;
    uint uStack_7c;
    unkbyte7 Stack_78;
    uchar uStack_71;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uchar uStack_58;
    ulong uStack_48;
    ulong uStack_40;
    uchar auStack_38 [7];
    int64_t var_29h;
    int8_t var_1dh;
    ulong uStack_28;
    int8_t var_12h;
    ulong uStack_20;
    uchar uStack_18;
    int64_t var_9h;
    int8_t var_7h;
    
    uVar1 = 0;
    if (((*(*0x17d80 + 3) != '\0') && ((*(arg1 + 0xc9) & 0x20) != 0)) && ((*(arg1 + 0xcf) & 0x20) != *(*0x17d80 + 4))) {
        (**(*0x17e00 + 0x168))(&uStack_88,0x31);
        uStack_71 = 0xef;
        _auStack_38 = CONCAT17(0xef,Stack_78);
        stack0xffffffffffffffd0 = uStack_70;
        uStack_7c = CONCAT31(uStack_7c._1_3_,(-(*(*0x17d80 + 4) != '\0') & 0x80U) + 0x86);
        uStack_40 = CONCAT44(uStack_7c,uStack_80);
        uStack_18 = uStack_58;
        uStack_48 = uStack_88;
        uStack_28 = uStack_68;
        uStack_20 = uStack_60;
        uVar1 = fcn.00014d9c(arg1,&uStack_48);
    }
    return uVar1;
}


/* fcn.00015df8 @ 0x15df8 */

int64_t fcn.00015df8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uStack_48;
    uint uStack_40;
    uchar uStack_36;
    uchar uStack_34;
    uchar uStack_31;
    ushort uStack_27;
    uchar uStack_24;
    uchar uStack_1f;
    
    (**(*0x17e00 + 0x168))(&uStack_48,0x31);
    uStack_48 = *arg3;
    uStack_40 = 0x10;
    uStack_31 = 0xa0;
    uStack_36 = 0x10;
    uStack_34 = 0;
    uStack_27 = 0x246;
    uStack_24 = 0;
    uStack_1f = 0x10;
    iVar1 = fcn.00014e98(arg1,&uStack_48,0);
    if (-1 < iVar1) {
        *arg2 = CONCAT11(*(*arg3 + 0xc),*(*arg3 + 0xd));
    }
    (**(*0x17e00 + 0x48))(*arg3);
    return iVar1;
}


/* fcn.0001397c @ 0x1397c */

uint fcn.0001397c(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 & 0xffff;
    if (uVar1 < 0x41) {
        if (uVar1 == 0x40) {
            return 0x10;
        }
        if (uVar1 < 0x13) {
            if (uVar1 == 0x12) {
                return 7;
            }
            if (uVar1 == 1) {
                return 0;
            }
            if (uVar1 == 2) {
                return 1;
            }
            if (2 < uVar1) {
                if (uVar1 < 6) {
                    return 0;
                }
                if (uVar1 == 8) {
                    return 2;
                }
                if (uVar1 == 9) {
                    return 3;
                }
                if (uVar1 == 10) {
                    return 4;
                }
                if (uVar1 == 0x10) {
                    return 5;
                }
                if (uVar1 == 0x11) {
                    return 6;
                }
            }
        }
        else {
            if (uVar1 == 0x13) {
                return 8;
            }
            if (uVar1 == 0x15) {
                return 9;
            }
            if (uVar1 == 0x16) {
                return 0xb;
            }
            if (uVar1 == 0x17) {
                return 0xc;
            }
            if (uVar1 == 0x18) {
                return 0xd;
            }
            if (uVar1 == 0x1a) {
                return 0xe;
            }
            if (uVar1 == 0x1b) {
                return 0xf;
            }
        }
    }
    else {
        if (uVar1 == 0x41) {
            return 0x11;
        }
        if (uVar1 == 0x42) {
            return 0x12;
        }
        if (uVar1 == 0x43) {
            return 0x13;
        }
        if (uVar1 == 0x50) {
            return 0x14;
        }
        if (uVar1 == 0x51) {
            return 0x15;
        }
        if (uVar1 == 0x52) {
            return 0x16;
        }
        if (uVar1 == 0x53) {
            return 0x17;
        }
        if (uVar1 == 0x58) {
            return 0x18;
        }
        if (uVar1 == 0x5a) {
            return 0x19;
        }
    }
    return 0x1a;
}


/* fcn.00017830 @ 0x17830 */

int64_t fcn.00017830(int64_t arg1)

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


/* fcn.000179a0 @ 0x179a0 */

int64_t fcn.000179a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013db0 @ 0x13db0 */

ulong fcn.00013db0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    int16_t *piVar3;
    int16_t iVar4;
    
    if (arg3 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar1 = *arg1;
        piVar3 = arg1 + 0x30;
        do {
            iVar4 = *(piVar3 + 1) + *piVar3 * 0x100;
            if ((iVar4 == 0x402) && (arg2 == 0x402)) {
                (**(*0x17e00 + 0x160))(arg3,piVar3,0x10);
                *arg3 = 0x402;
                return 0;
            }
            if ((iVar4 == 2) && (arg2 == 2)) {
                (**(*0x17e00 + 0x160))(arg3,piVar3,0x10);
                *arg3 = 2;
                return 0;
            }
            piVar3 = piVar3 + *(piVar3 + 3) + 4;
        } while (piVar3 < (uVar1 >> 0x18) + 4 + ((uVar1 & 0xff00) + uVar1 * 0x10000) * 0x100 + (uVar1 >> 8 & 0xff00) +
                          arg1);
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.0001761c @ 0x1761c */

int64_t fcn.0001761c(void)

{
    if (*0x17df0 == 0) {
        (**(*0x17de8 + 0x140))(0x17ab0,0,0x17df0);
    }
    return *0x17df0;
}


/* fcn.00017940 @ 0x17940 */

int64_t fcn.00017940(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00014130 @ 0x14130 */

//WARNING: Variable defined which should be unmapped: var_10h

uchar fcn.00014130(void)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar auStackX_8 [8];
    ulong *puStackX_10;
    int8_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint *puStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_20h_2;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    uStack_30 = 0x7d3dceee;
    _var_20h = 0;
    uStack_2c = 0x4ea7cbce;
    var_20h_2._0_4_ = 0x556e0987;
    var_20h_2._4_4_ = 0xdedb1e2f;
    var_28h = 8;
    puStackX_10 = NULL;
    auStackX_8[0] = 0x35;
    if (*0x17d90 != '\0') {
        return *0x17c5a;
    }
    iVar2 = fcn.0001761c();
    cVar1 = (**(iVar2 + 0x30))(0x1dc);
    if (cVar1 == '\0') {
        iVar2 = (**(*0x17e00 + 0x140))(0x17ad0,0,&var_20h);
        if (-1 < iVar2) {
            iVar3 = (**(*0x17e08 + 0x48))(L"TpmServFlags",&uStack_30,0,&var_28h,&puStack_38);
            iVar2 = *0x17e00;
            if (-1 < iVar3) {
                puStack_38[3] = 8;
                *puStack_38 = 0x60;
                iVar2 = (**(iVar2 + 0x140))(0x17b50,0,&puStackX_10);
                if (-1 < iVar2) {
                    (**puStackX_10)(puStackX_10,auStackX_8,0,0,0);
                    if (puStack_38[6] != 0) {
                        *0x17c5a = 0;
                    }
                    *0x17d90 = 1;
                    return *0x17c5a;
                }
            }
        }
    }
    else {
        *0x17c5a = 0;
    }
    *0x17d90 = 1;
    return *0x17c5a;
}


/* fcn.00013ea8 @ 0x13ea8 */

int64_t fcn.00013ea8(int64_t arg1)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uchar *puStackX_8;
    int64_t aiStackX_10 [2];
    int64_t var_1a0h;
    int64_t var_1a8h;
    int64_t var_1b0h;
    int16_t aiStack_258 [2];
    uint8_t uStack_254;
    int16_t aiStack_248 [2];
    uint8_t uStack_244;
    uchar auStack_238 [6];
    uint16_t uStack_232;
    char acStack_230 [504];
    
    aiStackX_10[0] = 0;
    puStackX_8 = NULL;
    iVar4 = -0x7ffffffffffffffd;
    if (arg1 == 0) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        aiStackX_10[1] = 0x200;
        uVar2 = 0;
        iVar1 = (**arg1)(arg1,0,0,0,0,0x200,auStack_238,aiStackX_10 + 1);
        if ((-1 < iVar1) && (uVar3 = uStack_232 * 0x100 + (uStack_232 >> 8), uVar3 != 0)) {
            do {
                if (acStack_230[uVar2] == '\x02') {
                    iVar4 = (**(*0x17e00 + 0x40))(4,0x200,aiStackX_10);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    iVar1 = -0x7ffffffffffffffe;
                    aiStackX_10[1] = 0x200;
                    if (aiStackX_10[0] == 0) {
                        iVar4 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar4 = (**arg1)(arg1,0,0,1,0x100,0x200,aiStackX_10[0],aiStackX_10 + 1);
                    }
                    if (-1 < iVar4) {
                        if (aiStackX_10[0] == 0) {
                            iVar4 = -0x7ffffffffffffffe;
                        }
                        else {
                            iVar4 = fcn.00013db0(aiStackX_10[0],0x402,aiStack_258);
                        }
                        if (-1 < iVar4) {
                            if (aiStack_258[0] != 0x402) {
                                return -0x7ffffffffffffffd;
                            }
                            if (((uStack_254 & 2) != 0) || ((uStack_254 & 1) != 0)) {
                                return 0;
                            }
                            if (aiStackX_10[0] != 0) {
                                iVar1 = fcn.00013db0(aiStackX_10[0],2,aiStack_248);
                            }
                            if (((-1 < iVar1) && (aiStack_248[0] == 2)) && ((uStack_244 & 4) != 0)) {
                                return 0;
                            }
                            iVar4 = (**(*0x17e00 + 0x40))(4,0x200,&puStackX_8);
                            if (iVar4 < 0) {
                                return iVar4;
                            }
                            (**(*0x17e00 + 0x168))(puStackX_8,0x200,0);
                            *puStackX_8 = 1;
                            iVar4 = (**(arg1 + 8))(arg1,0,0,2,0x500,0x200,puStackX_8);
                            (**(*0x17e00 + 0x48))(puStackX_8);
                        }
                    }
                    (**(*0x17e00 + 0x48))(aiStackX_10[0]);
                    break;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar3);
        }
    }
    return iVar4;
}


/* fcn.000144c4 @ 0x144c4 */

ulong fcn.000144c4(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t arg1_00;
    ulong uVar2;
    uint in_R8;
    uint64_t arg4_00;
    int8_t in_stack_00000008;
    int8_t in_stack_00000010;
    int8_t in_stack_00000018;
    int8_t in_stack_00000020;
    uint64_t in_stack_00000028;
    
    arg4_00 = CONCAT44(in_R8,arg3);
    puVar1 = *(arg1 + 8);
    arg1_00 = *(arg1 + 0x30);
    if (*puVar1 == arg2) {
        if (arg4 == 0) {
            uVar2 = 0;
        }
        else {
            if ((puVar1[4] < 2) || (in_stack_00000028 % puVar1[4] == 0)) {
                if (arg4 % puVar1[3] != 0) {
                    return 0x8000000000000004;
                }
                if ((arg4_00 <= *(puVar1 + 6)) && (arg4 / puVar1[3] + arg4_00 <= *(puVar1 + 6) + 1)) {
                    if (((*(arg1_00 + 0x18) != 1) || ((*(arg1_00 + 0x85) & 0x100) != 0)) &&
                       ((*(arg1_00 + 0x1f) != -1 || (*(arg1_00 + 0x1e) != -1)))) {
                        uVar2 = fcn.00014c10(arg1_00,in_stack_00000028,arg4,arg4_00,in_stack_00000018,
                                             in_stack_00000020);
                        return uVar2;
                    }
                    uVar2 = fcn.00014970(arg1_00,in_stack_00000028,arg4,arg4_00,in_stack_00000008,in_stack_00000010
                                        );
                    return uVar2;
                }
            }
            uVar2 = 0x8000000000000002;
        }
    }
    else {
        uVar2 = 0x800000000000000d;
    }
    return uVar2;
}


/* fcn.00014970 @ 0x14970 */

int64_t fcn.00014970(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4,int8_t arg_50h,int8_t arg_58h)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint in_R8;
    ulong uVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    int64_t var_30h;
    uchar in_stack_00000030;
    int64_t iStack_68;
    uint32_t uStack_60;
    ushort uStack_5a;
    uchar uStack_58;
    uint8_t uStack_57;
    uchar uStack_56;
    uchar uStack_55;
    uchar uStack_54;
    uchar uStack_53;
    uint8_t uStack_52;
    int64_t var_40h;
    int32_t var_38h;
    int16_t var_32h;
    int8_t var_30h_2;
    int8_t var_2fh;
    int8_t var_2eh;
    int8_t var_2dh;
    int8_t var_2ch;
    int8_t var_2bh;
    int8_t var_2ah;
    int8_t var_29h;
    
    uVar4 = 0x200;
    if ((0x39 < var_30h) || (iVar8 = 0x10000, (0x230023000000000U >> (var_30h & 0x3f) & 1) == 0)) {
        iVar8 = 0x100;
    }
    if ((*(arg1 + 0xf7) & 0xd000) == 0x5000) {
        uVar4 = *(arg1 + 0x10d) * 2;
    }
    if (CONCAT44(in_R8,arg3) < uVar4) {
        uVar4 = arg3;
    }
    uVar2 = CONCAT44(in_R8,arg3) / uVar4;
    while( true ) {
        if (uVar2 < 1) {
            return 0;
        }
        iVar6 = uVar2;
        iVar7 = iVar6;
        if (iVar8 < uVar2) {
            iVar7 = 0;
        }
        uVar5 = 0;
        (**(*0x17e00 + 0x168))(&iStack_68,0x31);
        uVar1 = arg4 >> 0x18;
        if ((var_30h < 0x3a) && ((0x230023000000000U >> (var_30h & 0x3f) & 1) != 0)) {
            uStack_52 = 0x40;
            uStack_55 = arg4 >> 0x20;
            uStack_53 = arg4 >> 0x28;
            uStack_57 = uVar1;
        }
        else {
            uStack_52 = uVar1 & 0xf | 0x40;
        }
        uStack_5a = iVar7;
        uStack_56 = arg4 >> 8;
        uStack_54 = arg4 >> 0x10;
        if (iVar7 == 0) {
            iVar6 = iVar8;
        }
        uStack_58 = arg4;
        uStack_60 = iVar6 * uVar4;
        iStack_68 = arg2;
        iVar3 = fcn.00014e98(arg1,&iStack_68,CONCAT71(uVar5 >> 8,in_stack_00000030));
        if (iVar3 < 0) break;
        arg2 = arg2 + uStack_60;
        uVar2 = uVar2 - iVar8;
        arg4 = arg4 + uStack_60 / uVar4;
    }
    return iVar3;
}


/* fcn.00014c10 @ 0x14c10 */

//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00014c10(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4,int8_t arg_60h,int8_t arg_68h)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint in_R8;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iStackX_8;
    uint8_t in_stack_00000028;
    uchar in_stack_00000030;
    int64_t var_40h;
    int64_t var_48h;
    int64_t iStack_78;
    uint32_t uStack_70;
    ushort uStack_6a;
    uchar uStack_68;
    uint8_t uStack_67;
    uchar uStack_66;
    uchar uStack_65;
    uchar uStack_64;
    uchar uStack_63;
    uint8_t uStack_62;
    int64_t var_40h_2;
    int32_t var_38h;
    int16_t var_32h;
    int8_t var_30h;
    int8_t var_2fh;
    int8_t var_2eh;
    int8_t var_2dh;
    int8_t var_2ch;
    int8_t var_2bh;
    int8_t var_2ah;
    int8_t var_29h;
    
    uVar6 = 0x200;
    if ((0x39 < in_stack_00000028) || (uVar8 = 0x10000, (0x230023000000000U >> (in_stack_00000028 & 0x3f) & 1) == 0)) {
        uVar8 = 0x100;
    }
    if ((*(arg1 + 0xf7) & 0xd000) == 0x5000) {
        uVar6 = *(arg1 + 0x10d) * 2;
    }
    if (CONCAT44(in_R8,arg3) < uVar6) {
        uVar6 = arg3;
    }
    uVar3 = CONCAT44(in_R8,arg3) / uVar6;
    iStackX_8 = arg2;
    do {
        uVar5 = uVar3;
        if (uVar8 < uVar3) {
            uVar5 = 0;
        }
        uVar7 = 0;
        (**(*0x17e00 + 0x168))(&iStack_78,0x31);
        iStack_78 = iStackX_8;
        iVar2 = uVar5;
        if (uVar5 == 0) {
            iVar2 = uVar8;
        }
        uStack_70 = iVar2 * uVar6;
        uVar1 = arg4 >> 0x18;
        if ((in_stack_00000028 < 0x3a) && ((0x230023000000000U >> (in_stack_00000028 & 0x3f) & 1) != 0)) {
            uStack_62 = 0x40;
            uStack_65 = arg4 >> 0x20;
            uStack_63 = arg4 >> 0x28;
            uStack_67 = uVar1;
        }
        else {
            uStack_62 = uVar1 & 0xf | 0x40;
        }
        uStack_6a = uVar5;
        uStack_66 = arg4 >> 8;
        uStack_64 = arg4 >> 0x10;
        uStack_68 = arg4;
        iVar4 = fcn.00015160(arg1,&iStack_78,CONCAT71(uVar7 >> 8,in_stack_00000030));
        if (iVar4 < 0) {
            return iVar4;
        }
        iStackX_8 = iStackX_8 + uStack_70;
        uVar5 = uStack_70 / uVar6;
        if (uVar5 == 0) {
            uVar5 = uVar8;
        }
        arg4 = arg4 + uVar5;
        uVar3 = uVar3 - uVar5;
    } while (uVar3 != 0);
    return 0;
}


/* fcn.00014620 @ 0x14620 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_1fh

int64_t fcn.00014620(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int8_t arg_58h)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t var_30h;
    char in_stack_00000030;
    int64_t iStack_68;
    uint32_t uStack_60;
    int64_t var_40h;
    int32_t var_38h;
    int8_t var_1fh;
    int8_t var_1eh;
    int8_t var_1dh;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_1ah;
    int8_t var_bp_18h;
    int8_t var_17h;
    
    iVar2 = *(arg1 + 0x30);
    iVar8 = -0x7ffffffffffffff9;
    puVar1 = *(arg1 + 8);
    iVar6 = -0x7ffffffffffffff9;
    iVar4 = *(iVar2 + 0x230);
    if (*(puVar1 + 5) == '\0') {
        iVar2 = fcn.00015a90(iVar2);
        if (iVar2 != 0) {
            if (iVar2 == -0x7ffffffffffffff4) {
                iVar8 = -0x7ffffffffffffff4;
            }
            return iVar8;
        }
    }
    else if (*puVar1 == arg2) {
        if (((arg4 == 0) || (var_30h == 0)) || (*(puVar1 + 6) < arg3)) {
            iVar4 = fcn.00015ea8(iVar2);
            if ((iVar4 != 0) || (arg3 <= *(puVar1 + 6))) {
                if (*(*(iVar2 + 0x230) + 0xf) != '\x01') {
                    return -0x7ffffffffffffff3;
                }
                *(*(*(iVar2 + 0x360) + 8) + 5) = 0;
                return -0x7ffffffffffffff4;
            }
        }
        else if ((puVar1[4] < 2) || (var_30h % puVar1[4] == 0)) {
            if (arg4 % puVar1[3] != 0) {
                return -0x7ffffffffffffffc;
            }
            if (arg4 / puVar1[3] + arg3 <= *(puVar1 + 6) + 1) {
                uVar3 = arg4 / *(iVar4 + 0xc);
                while( true ) {
                    if (uVar3 < 1) {
                        return iVar6;
                    }
                    uVar5 = 0;
                    (**(*0x17e00 + 0x168))(&iStack_68,0x31);
                    uVar9 = uVar3;
                    if (0xffff < uVar3) {
                        uVar9 = 0xffff;
                    }
                    uVar7 = *(iVar4 + 0xc) * uVar9;
                    if (in_stack_00000030 == '\0') {
                        var_40h._1_1_ = *(iVar2 + 0x21);
                    }
                    else {
                        var_40h._1_1_ = *(iVar2 + 0x22);
                    }
                    var_40h._2_1_ = *(iVar4 + 9) << 5;
                    var_40h._3_1_ = arg3 >> 0x18;
                    var_40h._4_1_ = arg3 >> 0x10;
                    var_40h._5_1_ = arg3 >> 8;
                    var_38h._0_1_ = uVar9 >> 8;
                    var_40h._6_1_ = arg3;
                    var_38h._1_1_ = uVar9;
                    uStack_60 = uVar7;
                    iStack_68 = var_30h;
                    iVar6 = fcn.000153a0(iVar2,&iStack_68,CONCAT71(uVar5 >> 8,in_stack_00000030));
                    if (iVar6 != 0) break;
                    if (uStack_60 != uVar7) {
                        return -0x7ffffffffffffff9;
                    }
                    var_30h = var_30h + uVar7;
                    arg3 = arg3 + uVar9;
                    uVar3 = uVar3 - uVar9;
                    iVar6 = 0;
                }
                if (*(iVar4 + 0xf) == '\x02') {
                    iVar6 = fcn.00015ea8(iVar2);
                }
                if (iVar6 != -0x7ffffffffffffff3) {
                    return iVar6;
                }
                iVar4 = fcn.00015a90(iVar2);
                if (iVar4 == 0) {
                    return -0x7ffffffffffffff3;
                }
                if (iVar4 != -0x7ffffffffffffff4) {
                    return iVar4;
                }
                *(*(*(iVar2 + 0x360) + 8) + 5) = 0;
                return -0x7ffffffffffffff4;
            }
        }
        return -0x7ffffffffffffffe;
    }
    return -0x7ffffffffffffff3;
}


/* fcn.00015a90 @ 0x15a90 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_1fh

int64_t fcn.00015a90(int64_t arg1)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    int64_t iVar5;
    int *piVar6;
    bool bVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint8_t uVar10;
    uchar *puStackX_8;
    int64_t var_30h;
    uchar auStack_68 [8];
    uint32_t uStack_60;
    int64_t var_40h;
    uint32_t var_38h;
    uint32_t var_1fh;
    int16_t var_bp_18h;
    
    iVar5 = *(arg1 + 0x230);
    bVar7 = false;
    piVar6 = *(*(arg1 + 0x360) + 8);
    (**(*0x17e00 + 0x168))(auStack_68,0x31);
    *(piVar6 + 5) = 0;
    piVar6[6] = 0x100;
    piVar6[7] = 0;
    *(arg1 + 0x21) = 0x2a28;
    iVar8 = fcn.00015ea8(arg1);
    if (((iVar8 == -0x7ffffffffffffff3) || (iVar8 == 0)) && (iVar8 = (**(*0x17e00 + 0x40))(4,0x100), -1 < iVar8)) {
        if (*(iVar5 + 8) == '\x05') {
            piVar6[3] = 0x800;
            uVar9 = 8;
            *(iVar5 + 0xc) = piVar6[3];
            var_40h._1_1_ = '%';
            var_40h._2_1_ = *(iVar5 + 9);
        }
        else {
            piVar6[3] = 0x200;
            uVar9 = 0x100;
            *(iVar5 + 0xc) = piVar6[3];
            var_40h._1_1_ = '#';
            var_40h._2_1_ = *(iVar5 + 9);
            var_38h._0_2_ = 1;
        }
        var_40h._2_1_ = var_40h._2_1_ << 5;
        uVar10 = 0;
        do {
            (**(*0x17e00 + 0x168))(puStackX_8,uVar9);
            uStack_60 = uVar9;
            iVar8 = fcn.000153a0(arg1,auStack_68,0);
            if ((var_40h._1_1_ == '#') && (*(iVar5 + 0xf) == '\a')) {
                (**(*0x17e00 + 0x168))(auStack_68,0x31);
                piVar6[3] = 0x800;
                uVar9 = 8;
                bVar7 = true;
                *(iVar5 + 0xc) = piVar6[3];
                var_40h._1_1_ = '%';
                var_40h._2_1_ = *(iVar5 + 9) << 5;
            }
        } while ((1 < *(iVar5 + 0xf)) && (uVar10 = uVar10 + 1, uVar10 < 5));
        if (iVar8 == 0) {
            if (bVar7) {
                uVar1 = *puStackX_8;
                uVar2 = puStackX_8[1];
                uVar3 = puStackX_8[2];
                uVar4 = puStackX_8[3];
                *piVar6 = *piVar6 + 1;
                *(piVar6 + 5) = 1;
                *(piVar6 + 6) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
                uVar9 = puStackX_8[4] << 0x18 | puStackX_8[5] << 0x10 | puStackX_8[6] << 8 | puStackX_8[7];
                piVar6[3] = uVar9;
                *(iVar5 + 0xc) = uVar9;
                *(piVar6 + 7) = 0;
            }
            else if (*(iVar5 + 8) == '\x05') {
                uVar1 = *puStackX_8;
                uVar2 = puStackX_8[1];
                uVar3 = puStackX_8[2];
                uVar4 = puStackX_8[3];
                piVar6[3] = 0x800;
                *(piVar6 + 6) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
                *(iVar5 + 0xc) = piVar6[3];
                *piVar6 = *piVar6 + 1;
                *(piVar6 + 5) = 1;
                *(piVar6 + 7) = 1;
            }
            else if (puStackX_8[8] != '\x03') {
                uVar1 = puStackX_8[5];
                uVar2 = puStackX_8[4];
                uVar3 = puStackX_8[6];
                uVar4 = puStackX_8[7];
                *piVar6 = *piVar6 + 1;
                *(piVar6 + 5) = 1;
                *(piVar6 + 6) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
                uVar9 = puStackX_8[9] << 0x10 | puStackX_8[10] << 8 | puStackX_8[0xb];
                *(piVar6 + 7) = 0;
                piVar6[3] = uVar9;
                *(iVar5 + 0xc) = uVar9;
            }
            if (*(iVar5 + 8) != '\x05') {
                (**(*0x17e00 + 0x168))(puStackX_8,0x100);
                (**(*0x17e00 + 0x168))(auStack_68,0x31);
                var_40h._1_1_ = 'Z';
                var_40h._3_1_ = 0x3f;
                var_38h._0_2_ = 1;
                uStack_60 = 0x100;
                iVar8 = fcn.000153a0(arg1,auStack_68,0);
                if ((iVar8 == 0) && (8 < uStack_60)) {
                    *(piVar6 + 7) = puStackX_8[3] >> 7;
                }
            }
        }
        (**(*0x17e00 + 0x48))(puStackX_8);
    }
    return iVar8;
}


/* fcn.000153a0 @ 0x153a0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.000153a0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint32_t *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint in_R8;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uStackX_10;
    char cStackX_18;
    int64_t iStackX_20;
    int8_t var_50h;
    uint32_t var_58h;
    int64_t var_68h;
    uchar *in_stack_fffffffffffffed8;
    int64_t *in_stack_fffffffffffffee0;
    int32_t in_stack_fffffffffffffee8;
    uint uStack_114;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    uchar uStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    uint uStack_b8;
    uint uStack_b4;
    uint uStack_b0;
    uint uStack_ac;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uchar uStack_98;
    int64_t var_80h;
    ulong uStack_80;
    int64_t var_bp_70h;
    ulong uStack_70;
    uchar var_bp_60h;
    int64_t var_5fh;
    int8_t var_50h_2;
    int64_t var_bp_40h;
    int64_t var_30h;
    int64_t var_20h;
    int8_t var_10h;
    
    iVar4 = CONCAT44(in_R8,arg3);
    cStackX_18 = arg3;
    iVar2 = *(arg1 + 0x230);
    arg1_00 = *(arg1 + 0x350);
    uVar7 = 0;
    arg2_00 = *(arg1 + 0x340);
    uVar1 = *(arg1 + 8);
    iVar6 = *(arg1_00 + 0x30);
    uVar5 = *(arg2 + 8);
    iStackX_20 = 0;
    uStackX_10 = uVar5;
    if (((*(*0x17d80 + 9) != '\0') && (iVar4 = *arg2, iVar4 != 0)) && (*(arg2 + 8) != 0)) {
        in_stack_fffffffffffffee0 = &iStackX_20;
        in_stack_fffffffffffffed8 = &stack0xfffffffffffffee8;
        iVar3 = (**(*(arg1_00 + 0x78) + 0x48))(*(arg1_00 + 0x78),cStackX_18 == '\0',iVar4,&uStackX_10);
        if ((iVar3 < 0) || (uVar5 = *(arg2 + 8), uStackX_10 != uVar5)) {
            return -0x7ffffffffffffffc;
        }
        uVar7 = *arg2;
        *arg2 = CONCAT44(uStack_114,in_stack_fffffffffffffee8);
    }
    *(arg2 + 0x14) = uVar5 >> 8;
    *(arg2 + 0x12) = *(arg2 + 8);
    *(arg2 + 0x17) = 0xa0;
    iVar4 = fcn.00016458(arg1_00,arg1,CONCAT71(iVar4 >> 8,1));
    if (-1 < iVar4) {
        iVar4 = fcn.00016714(arg1);
        if (-1 < iVar4) {
            fcn.00015f68(arg1,arg2_00,*(arg1_00 + 0xf8));
            uStack_108 = *arg2;
            uStack_100 = *(arg2 + 8);
            uStack_d8 = *(arg2 + 0x30);
            uStack_f8 = *(arg2 + 0x10);
            uStack_f0 = *(arg2 + 0x18);
            uStack_e8 = *(arg2 + 0x20);
            uStack_e0 = *(arg2 + 0x28);
            fcn.00015fdc(arg1,&uStack_108,arg2_00,iVar6);
            uStack_c8 = *arg2;
            uStack_c0 = *(arg2 + 8);
            uStack_98 = *(arg2 + 0x30);
            uStack_b8 = *(arg2 + 0x10);
            uStack_b4 = *(arg2 + 0x14);
            uStack_b0 = *(arg2 + 0x18);
            uStack_ac = *(arg2 + 0x1c);
            uStack_a8 = *(arg2 + 0x20);
            uStack_a4 = *(arg2 + 0x24);
            uStack_a0 = *(arg2 + 0x28);
            uStack_9c = *(arg2 + 0x2c);
            (**(*0x17e00 + 0x160))(iVar6 + 0x40,&uStack_a8 + 1,0x10);
            if (*(iVar6 + 2) == -0x60) {
                *arg2_00 = *arg2_00 | 0x20;
            }
            var_80h = *arg2;
            uStack_80 = *(arg2 + 8);
            var_50h_2 = *(arg2 + 0x30);
            var_bp_70h = *(arg2 + 0x10);
            uStack_70 = *(arg2 + 0x18);
            _var_bp_60h = *(arg2 + 0x20);
            unique0x100003f5 = *(arg2 + 0x28);
            fcn.0001609c(arg1,&var_80h,arg2_00,iVar6,in_stack_fffffffffffffed8,in_stack_fffffffffffffee0,
                         in_stack_fffffffffffffee8);
            if (cStackX_18 == '\0') {
                *arg2_00 = *arg2_00 & 0xffffffbf;
            }
            else {
                *arg2_00 = *arg2_00 | 0x40;
            }
            *(iVar6 + 1) = *(iVar6 + 1) | 0x80;
            fcn.00016170(arg1_00,arg1);
            iVar6 = *(arg2 + 0x19);
            if (iVar6 == 0) {
                iVar6 = 30000;
            }
            iVar4 = fcn.00016268(arg1,1,iVar6);
            if (((iVar4 < 0) && (*(arg1 + 0x18) == 1)) && ((*(uVar1 * 0x80 + 0x120 + *(arg1_00 + 8)) & 1) != 0)) {
                if (*(arg2 + 0x21) != '\x03') {
                    iVar4 = fcn.00015628(arg1);
                }
                goto code_r0x000155f1;
            }
            *(iVar2 + 0xf) = 0;
            *(arg2 + 8) = arg2_00[1];
        }
        fcn.00016458(arg1_00,arg1,0);
    }
code_r0x000155f1:
    if (iStackX_20 != 0) {
        iVar2 = *(*(arg1 + 0x350) + 0x78);
        (**(iVar2 + 0x50))(iVar2);
        *arg2 = uVar7;
    }
    return iVar4;
}


/* fcn.00015ea8 @ 0x15ea8 */

int64_t fcn.00015ea8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint16_t uVar3;
    ulong uStack_48;
    uint uStack_40;
    uchar uStack_27;
    char cStack_26;
    
    iVar1 = *(arg1 + 0x230);
    (**(*0x17e00 + 0x168))(&uStack_48,0x31);
    uStack_27 = 0;
    uVar3 = 0;
    cStack_26 = *(iVar1 + 9) << 5;
    uStack_48 = 0;
    uStack_40 = 0x100;
    while( true ) {
        iVar2 = fcn.000153a0(arg1,&uStack_48,0);
        if (iVar2 == 0) {
            return 0;
        }
        if ((*(iVar1 + 0xf) - 1U & 0xfd) == 0) break;
        (**(*0x17e00 + 0xf8))(10000);
        uVar3 = uVar3 + 1;
        if (999 < uVar3) {
            return iVar2;
        }
    }
    return iVar2;
}


/* fcn.00015160 @ 0x15160 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_7h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00015160(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint32_t *arg2_00;
    int64_t iVar2;
    int64_t iVar3;
    uint in_R8;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    char cStackX_18;
    ulong uStackX_20;
    uint32_t var_67h;
    int64_t var_6fh;
    int64_t var_7fh;
    ulong *in_stack_ffffffffffffff28;
    int64_t *in_stack_ffffffffffffff30;
    int64_t var_69h;
    uint uStack_68;
    uchar auStack_64 [3];
    int64_t var_59h;
    uchar uStack_58;
    int64_t var_49h;
    int8_t var_39h;
    int64_t var_29h;
    int64_t var_19h;
    int64_t var_8h;
    int8_t var_7h;
    
    iVar3 = CONCAT44(in_R8,arg3);
    cStackX_18 = arg3;
    iVar1 = *(arg1 + 0x350);
    uVar5 = 0;
    arg2_00 = *(arg1 + 0x340);
    uStackX_8 = *(arg2 + 8);
    iVar4 = *(iVar1 + 0x30);
    iStackX_10 = 0;
    if (((*(*0x17d80 + 9) != '\0') && (iVar3 = *arg2, iVar3 != 0)) && (*(arg2 + 8) != 0)) {
        in_stack_ffffffffffffff30 = &iStackX_10;
        in_stack_ffffffffffffff28 = &uStackX_20;
        iVar2 = (**(*(iVar1 + 0x78) + 0x48))(*(iVar1 + 0x78),cStackX_18 == '\0',iVar3,&uStackX_8);
        if ((iVar2 < 0) || (uStackX_8 != *(arg2 + 8))) {
            return -0x7ffffffffffffffc;
        }
        uVar5 = *arg2;
        *arg2 = uStackX_20;
    }
    iVar3 = fcn.00016458(iVar1,arg1,CONCAT71(iVar3 >> 8,1));
    if (-1 < iVar3) {
        iVar3 = fcn.00016714(arg1);
        if (iVar3 < 0) {
            fcn.00016458(iVar1,arg1,0);
        }
        else {
            fcn.00015f68(arg1,arg2_00,*(iVar1 + 0xf8));
            fcn.00015fdc(arg1,&stack0xffffffffffffff38,arg2_00,iVar4);
            uStack_58 = *(arg2 + 0x30);
            uStack_68 = *(arg2 + 0x20);
            _auStack_64 = *(arg2 + 0x24);
            var_59h._1_4_ = *(arg2 + 0x28);
            unique0x10000306 = *(arg2 + 0x2c);
            (**(*0x17e00 + 0x160))(iVar4 + 0x40,&uStack_68 + 1,0x10);
            if (*(iVar4 + 2) == -0x60) {
                *arg2_00 = *arg2_00 | 0x20;
            }
            fcn.0001609c(arg1,&stack0xffffffffffffff38,arg2_00,iVar4,in_stack_ffffffffffffff28,
                         in_stack_ffffffffffffff30,*arg2);
            if (cStackX_18 == '\0') {
                *arg2_00 = *arg2_00 & 0xffffffbf;
            }
            else {
                *arg2_00 = *arg2_00 | 0x40;
            }
            *(iVar4 + 1) = *(iVar4 + 1) | 0x80;
            fcn.00016170(iVar1,arg1);
            iVar4 = *(arg2 + 0x19);
            if (iVar4 == 0) {
                iVar4 = 30000;
            }
            iVar3 = fcn.00016268(arg1,3,iVar4);
            if ((-1 < iVar3) && (arg2_00[1] != *(arg2 + 8))) {
                iVar3 = -0x7ffffffffffffff9;
            }
            fcn.00016458(iVar1,arg1,0);
            *(arg2 + 8) = arg2_00[1];
        }
    }
    if (iStackX_10 != 0) {
        iVar1 = *(*(arg1 + 0x350) + 0x78);
        (**(iVar1 + 0x50))(iVar1);
        *arg2 = uVar5;
    }
    return iVar3;
}


/* fcn.0001609c @ 0x1609c */

ulong fcn.0001609c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4,ulong noname_4,ulong noname_5,
                  int32_t arg_10h)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint in_R9;
    uint *puVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    
    uVar7 = *(arg2 + 8);
    iVar2 = *(arg1 + 0x350);
    puVar5 = CONCAT44(in_R9,arg4) + 0x80;
    uVar6 = 0;
    while (uVar7 != 0) {
        puVar5[3] = puVar5[3] & 0xffc00000;
        iVar3 = *arg2;
        *puVar5 = *arg2;
        puVar5[1] = iVar3 >> 0x20;
        uVar4 = uVar7 - 1;
        if (0x3fffff < uVar7) {
            uVar4 = 0x3fffff;
        }
        uVar6 = uVar6 + 0x10;
        puVar5[3] = puVar5[3] | uVar4 & 0x3fffff;
        uVar4 = puVar5[3];
        puVar5[3] = puVar5[3] & 0x7fffffff;
        puVar1 = puVar5 + 3;
        uVar7 = uVar7 + (-1 - (uVar4 & 0x3fffff));
        if (*(iVar2 + 0x38) <= uVar6 + 0x80) break;
        puVar5 = puVar5 + 4;
        *arg2 = iVar3 + 1 + (*puVar1 & 0x3fffff);
    }
    puVar5[-1] = puVar5[-1] | 0x80000000;
    *(arg3 + 2) = uVar6 >> 4;
    return 0;
}


/* fcn.00015628 @ 0x15628 */

int64_t fcn.00015628(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    char *pcStack_158;
    uint uStack_150;
    uchar uStack_137;
    uchar uStack_133;
    char acStack_118 [2];
    uint8_t uStack_116;
    char cStack_10c;
    char cStack_10b;
    
    iVar5 = *0x17e00;
    iVar2 = *(arg1 + 0x230);
    iVar3 = *(arg1 + 0x350);
    uVar1 = *(arg1 + 8);
    *(iVar2 + 0xf) = 4;
    uVar6 = 0;
    (**(iVar5 + 0x168))(acStack_118,0x100);
    (**(*0x17e00 + 0x168))(&pcStack_158,0x31);
    pcStack_158 = acStack_118;
    uStack_137 = 3;
    uStack_133 = 0xff;
    uStack_150 = 0x100;
    iVar5 = fcn.000153a0(arg1,&pcStack_158,0);
    if ((iVar5 < 0) && (iVar3 != 0)) {
        uVar6 = *(uVar1 * 0x80 + 0x120 + *(iVar3 + 8));
    }
    *(arg1 + 0x338) = 0;
    if (((uVar6 & 0x21) == 0) && (-1 < iVar5)) {
        (**(*0x17e00 + 0x160))(arg1 + 0x238,acStack_118,0x100);
        *(arg1 + 0x338) = uStack_150;
        iVar5 = -0x7ffffffffffffff9;
        *(iVar2 + 0xf) = 4;
        if (((uStack_116 & 0xf) == 2) && (cStack_10c == ':')) {
            *(iVar2 + 0xf) = 1;
            iVar5 = -0x7ffffffffffffff4;
        }
        if ((((uStack_116 & 0xf) == 2) && (cStack_10c == '\x04')) && (cStack_10b == '\x01')) {
            *(iVar2 + 0xf) = 2;
            iVar5 = -0x7ffffffffffffff3;
        }
        if (((uStack_116 & 0xf) == 6) && (cStack_10c == '(')) {
            *(iVar2 + 0xf) = 3;
            iVar5 = -0x7ffffffffffffff3;
        }
        if (((uStack_116 & 0xf) == 7) && (cStack_10c == '\'')) {
            *(iVar2 + 0xf) = 5;
            iVar5 = -0x7ffffffffffffff8;
        }
        if ((uStack_116 & 0xf) == 6) {
            uVar4 = *(iVar2 + 0xf);
            if (cStack_10c == ')') {
                uVar4 = 6;
            }
            *(iVar2 + 0xf) = uVar4;
        }
        if ((uStack_116 & 0xf) == 5) {
            uVar4 = *(iVar2 + 0xf);
            if (acStack_118[0] == 'p') {
                uVar4 = 7;
            }
            *(iVar2 + 0xf) = uVar4;
        }
    }
    return iVar5;
}


/* fcn.0001706c @ 0x1706c */

uint fcn.0001706c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint uVar2;
    uint auStackX_20 [2];
    char in_stack_00000028;
    
    uVar2 = 0;
    auStackX_20[0] = 0;
    if (arg4 == -1) {
        uVar1 = 0x28;
        if (in_stack_00000028 == '\x01') {
            uVar1 = 0x30;
        }
        if (arg1 != 0) {
            uVar2 = *(((arg3 & 0xff) + 2) * 0x80 + *(arg1 + 8) + uVar1);
        }
    }
    else {
        fcn.00015824(arg2,CONCAT71(arg2 >> 8,arg4),CONCAT71(arg3 >> 8,in_stack_00000028),auStackX_20);
        uVar2 = auStackX_20[0];
    }
    return uVar2;
}


/* fcn.000170e0 @ 0x170e0 */

ulong fcn.000170e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint auStack_18 [6];
    
    auStack_18[0] = 0x7ff0f03;
    if (arg4 == -1) {
        if (arg1 != 0) {
            *((arg3 & 0xffU) * 0x80 + 0x130 + *(arg1 + 8)) = *((arg3 & 0xffU) * 0x80 + 0x130 + *(arg1 + 8)) | 0x7ff0f03;
        }
    }
    else {
        fcn.00015824(arg2,CONCAT71(arg2 >> 8,arg4),CONCAT71(arg3 >> 8,1),auStack_18);
    }
    return 0;
}


/* fcn.00017884 @ 0x17884 */

ulong fcn.00017884(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t in_RAX;
    char cVar2;
    unkbyte7 Var3;
    char cVar4;
    bool bVar5;
    char *pcVar6;
    
    Var3 = arg1 >> 8;
    pcVar6 = "en-US";
    bVar5 = false;
    cVar4 = *arg1;
    while (cVar4 != '\0') {
        cVar2 = *pcVar6;
        if (cVar4 != cVar2) {
            if (0x19 < cVar4 + 0xbfU) {
                if (cVar4 + 0x9fU < 0x1a) {
                    cVar4 = cVar4 + -0x20;
                }
                else {
                    cVar4 = -1;
                }
            }
            uVar1 = CONCAT71(Var3,cVar2) - 0x41;
            in_RAX = uVar1;
            if (0x19 < uVar1) {
                uVar1 = CONCAT71(Var3,cVar2) - 0x61;
                in_RAX = uVar1;
                if (uVar1 < 0x1a) {
                    cVar2 = cVar2 + -0x20;
                }
                else {
                    cVar2 = '\0';
                }
            }
            if (cVar4 != cVar2) goto code_r0x000178ec;
        }
        arg1 = arg1 + 1;
        pcVar6 = pcVar6 + 1;
        cVar4 = *arg1;
    }
    in_RAX = CONCAT71(in_RAX >> 8,*pcVar6);
    bVar5 = *arg1 == *pcVar6;
code_r0x000178ec:
    return CONCAT71(in_RAX >> 8,bVar5);
}


/* fcn.000176c4 @ 0x176c4 */

ulong fcn.000176c4(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x17e18 == '\0') {
        if (*0x17e30 == 0) {
            if (*0x17e28 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x17e00 + 0x140))(0x17c88,0,0x17e30);
        }
    }
    else if (*0x17e20 == 0) {
        if ((*0x17e28 == '\0') && (*0x17e38 != 0)) {
    //WARNING: Could not recover jumptable at 0x00017703. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x17e38 + 0xd0))(0x17c98,0,0x17e20);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


