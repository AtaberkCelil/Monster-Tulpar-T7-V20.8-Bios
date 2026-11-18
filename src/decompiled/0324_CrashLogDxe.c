// decompiled by r2ghidra: 0324_CrashLogDxe.pe32
// functions: 21

/* entry0 @ 0x10304 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010318(arg1,in_RDX);
    fcn.0001080c(arg1,in_RDX);
    return;
}


/* fcn.00010318 @ 0x10318 */

void fcn.00010318(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x11018 = *(arg1 + 0x60);
    *0x11020 = *(arg1 + 0x58);
    *0x11010 = arg1;
    fcn.00010ce8();
    noname_0_00 = 0x10f70;
    iVar3 = fcn.00010d54(0x10f70);
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    //WARNING: Could not recover jumptable at 0x000103cc. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x11018 + 0x140))(0x10f30,0,0x11030);
    return;
}


/* fcn.0001080c @ 0x1080c */

int64_t fcn.0001080c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int64_t iVar4;
    int16_t *piVar5;
    int *piVar6;
    int16_t *piVar7;
    uint *puVar8;
    ulong uVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    ulong uStackX_8;
    int64_t aiStackX_10 [2];
    uchar auStack_ce8 [16];
    uchar auStack_cd8 [2136];
    char cStack_480;
    char cStack_47f;
    
    uStackX_8 = 0xca9;
    piVar12 = aiStackX_10;
    uVar10 = 0;
    aiStackX_10[0] = arg2;
    iVar4 = (**(*0x11020 + 0x48))(L"Setup",0x10f00,piVar12,&uStackX_8,auStack_cd8);
    if (iVar4 < 0) {
        return iVar4;
    }
    if (cStack_480 == '\0') {
        uVar9 = 0x10;
        fcn.000102a0(auStack_ce8,0x10);
        iVar4 = fcn.00010e00(0xfe000000,uVar9,CONCAT71(piVar12 >> 8,2));
        return iVar4;
    }
    cVar3 = fcn.00010754();
    if (cVar3 == '\0') {
        return -0x7ffffffffffffffd;
    }
    if ((*0x10ff6 != '\0') && (cStack_47f != '\0')) {
        uVar9 = 0x10;
        fcn.000102a0(auStack_ce8,0x10);
        fcn.00010e00(0xfe000000,uVar9,CONCAT71(piVar12 >> 8,5));
    }
    piVar5 = fcn.00010d54(0x10f10);
    if (piVar5 != NULL) {
        *0x11004 = 0;
        piVar7 = piVar5;
code_r0x0001093b:
        uVar1 = piVar7[1] - 0x18U >> 4;
        if (uVar1 != 0) {
            piVar6 = piVar7 + 0x10;
            uVar13 = uVar1;
            do {
                *0x11004 = *0x11004 + *piVar6;
                piVar6 = piVar6 + 4;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
        piVar7 = piVar7[1] + piVar7;
        do {
            if (*piVar7 == -1) {
                piVar7 = NULL;
code_r0x00010985:
                if (piVar7 == NULL) goto code_r0x0001099b;
                if ((*0x10f10 == *(piVar7 + 4)) && (*0x10f18 == *(piVar7 + 8))) goto code_r0x00010996;
            }
            else if (*piVar7 == 4) goto code_r0x00010985;
            piVar7 = piVar7 + piVar7[1];
        } while( true );
    }
    *0x10fe4 = '\0';
    uVar10 = 0;
code_r0x000109d3:
    cVar3 = *0x10fe4;
    iVar4 = fcn.00010d54(0x10f60);
    if (iVar4 != 0) {
        *0x10ffc = *(iVar4 + 0x18);
        *0x11000 = *(iVar4 + 0x30);
        *0x10fe0 = *(iVar4 + 0x20);
        *0x11008 = *(iVar4 + 0x38);
        *0x10ff0 = *(iVar4 + 0x28);
        *0x1100c = *(iVar4 + 0x40);
        *0x10ff8 = *0x11000 + *0x1100c + *0x10fe0;
    }
    if (*0x10fe0 == 0) {
        *0x10ff5 = 0;
        if (cVar3 == '\0') {
            *0x10ff5 = 0;
            return -0x7ffffffffffffffa;
        }
    }
    else {
        *0x10ff5 = 1;
        uVar2 = uVar10 + 1;
        if (*0x1100c != 0) {
            uVar2 = uVar10 + 2;
        }
        uVar10 = uVar2;
        if (*0x11000 != 0) {
            uVar10 = uVar10 + 1;
        }
    }
    puVar8 = fcn.00010c9c(4,0x30);
    *0x11038 = puVar8;
    if (puVar8 != NULL) {
        *puVar8 = 0x54524542;
        puVar8[1] = 0x30;
        *(puVar8 + 2) = 1;
        *(puVar8 + 0xe) = 0x204c;
        *(puVar8 + 4) = 0x20202020324b4445;
        iVar11 = *0x11004 + 0x14;
        *(puVar8 + 10) = 0x45544e49;
        puVar8[6] = 1;
        puVar8[7] = 0x4c544e49;
        uVar10 = iVar11 + uVar10 * 0x68 + *0x10ff8;
        puVar8[8] = 1;
        iVar4 = fcn.00010c9c(0,uVar10);
        puVar8 = *0x11038;
        *(*0x11038 + 10) = iVar4;
        if (iVar4 != 0) {
            puVar8[9] = uVar10;
            if ((*(iVar4 + 0xc) < uVar10) && (iVar4 = fcn.00010560(iVar4), -1 < iVar4)) {
                *0x10fe8 = NULL;
                (**(*0x11018 + 0x140))(0x10f40,0,0x10fe8);
                iVar4 = 0;
                if (*0x11038 == NULL) {
                    iVar4 = -0x7ffffffffffffffe;
                }
                else {
                    if (*0x10fe8 != NULL) {
                        aiStackX_10[1] = 0;
                        iVar4 = (***0x10fe8)(*0x10fe8,*0x11038,(*0x11038)[1],aiStackX_10 + 1);
                    }
                    if (*0x11038 != NULL) {
                        (**(*0x11018 + 0x48))();
                    }
                }
                return iVar4;
            }
            return -0x7ffffffffffffff2;
        }
    }
    return -0x7ffffffffffffff7;
code_r0x00010996:
    if (piVar7 == NULL) goto code_r0x0001099b;
    goto code_r0x0001093b;
code_r0x0001099b:
    if ((piVar5 != 0xffffffffffffffe8) && (*0x11004 != 0)) {
        *0x10fe4 = '\x01';
        uVar10 = piVar5[1] - 0x18U >> 4;
    }
    goto code_r0x000109d3;
}


/* fcn.00010ce8 @ 0x10ce8 */

int64_t fcn.00010ce8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11028 == 0) {
        *0x11028 = 0;
        if (*(*0x11010 + 0x68) != 0) {
            piVar2 = *(*0x11010 + 0x70);
            do {
                if ((*0x10f50 == *piVar2) && (*0x10f58 == piVar2[1])) {
                    *0x11028 = (*(*0x11010 + 0x70))[uVar1 * 3 + 2];
                    return *0x11028;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11010 + 0x68));
        }
    }
    return *0x11028;
}


/* fcn.00010d54 @ 0x10d54 */

void fcn.00010d54(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010ce8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010d82:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010d82;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3232 named .text
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


/* fcn.000104a0 @ 0x104a0 */

void fcn.000104a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t arg1_00;
    ulong *in_stack_00000028;
    
    arg1_00 = arg1 + 0x14 + *(arg1 + 0xc);
    fcn.000102a0(arg1_00,0x68);
    if (arg1_00 != 0x10f20) {
        section..text(arg1_00,0x10f20,0x10);
    }
    *(arg1_00 + 0x10) = 1;
    *(arg1_00 + 0x14) = 0x300;
    *(arg1_00 + 0x16) = 0;
    *(arg1_00 + 0x18) = arg4 + 0x20;
    *(arg1_00 + 0x48) = 0x202;
    uVar2 = in_stack_00000028[1];
    *(arg1_00 + 0x58) = *in_stack_00000028;
    *(arg1_00 + 0x60) = uVar2;
    *(arg1 + 0xc) = *(arg1 + 0xc) + arg4 + 0x68;
    uVar1 = *arg1;
    *arg2 = arg1_00;
    *arg1 = *arg1 ^ ((uVar1 & 0xfffffff0) + 0x10 ^ *arg1) & 0x3ff0;
    *arg3 = arg1_00 + 0x68;
    return;
}


/* fcn.000103d4 @ 0x103d4 */

ulong fcn.000103d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x10ff8 == 0) {
        return 0x800000000000000e;
    }
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        if (*0x10fe0 != 0) {
            iVar1 = *0x10ffc - arg1;
            uVar2 = (*0x10fe0 - 1U >> 2) + 1;
            do {
                *arg1 = *(iVar1 + arg1);
                arg1 = arg1 + 4;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        if (*0x1100c != 0) {
            iVar1 = *0x11008 - arg2;
            uVar2 = (*0x1100c - 1U >> 2) + 1;
            do {
                *arg2 = *(iVar1 + arg2);
                arg2 = arg2 + 4;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        if (*0x11000 != 0) {
            iVar1 = *0x10ff0 - arg3;
            uVar2 = (*0x11000 - 1U >> 2) + 1;
            do {
                *arg3 = *(iVar1 + arg3);
                arg3 = arg3 + 4;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00010e00 @ 0x10e00 */

int64_t fcn.00010e00(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    iVar1 = arg1;
    uVar3 = 0;
    *(iVar1 + 0x80) = *in_stack_00000028;
    *(iVar1 + 0x84) = in_stack_00000028[1];
    *(iVar1 + 0x88) = in_stack_00000028[2];
    *(iVar1 + 0x8c) = in_stack_00000028[3];
    *(arg1 & 0xffffffff) = (arg2 & 0xff) << 0xc | 0x400a6;
    do {
        if ((*(iVar1 + 4) & 1) == 0) {
            iVar2 = 0;
code_r0x00010e88:
            if ((*(iVar1 + 4) & 2) != 0) {
                iVar2 = -0x7ffffffffffffff9;
            }
            if ((-1 < iVar2) && (in_stack_00000030 != NULL)) {
                *in_stack_00000030 = *(iVar1 + 0x90);
                in_stack_00000030[1] = *(iVar1 + 0x94);
                in_stack_00000030[2] = *(iVar1 + 0x98);
                in_stack_00000030[3] = *(iVar1 + 0x9c);
            }
            return iVar2;
        }
        if (100000 < uVar3) {
            iVar2 = -0x7fffffffffffffee;
            goto code_r0x00010e88;
        }
        fcn.00010da0(0x23);
        uVar3 = uVar3 + 1;
    } while( true );
}


/* fcn.00010bd0 @ 0x10bd0 */

ulong fcn.00010bd0(int64_t arg1)

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


/* fcn.00010754 @ 0x10754 */

uchar fcn.00010754(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t extraout_RAX;
    int64_t iVar1;
    ulong noname_1;
    uchar uVar2;
    unkbyte7 Var3;
    uchar auStackX_8 [32];
    uint32_t auStack_38 [4];
    uchar auStack_28 [32];
    
    Var3 = param_3 >> 8;
    uVar2 = 0;
    fcn.000102a0(auStackX_8,8);
    fcn.000102a0(auStack_28,0x10);
    noname_1 = 0x10;
    fcn.000102a0(auStack_38,0x10);
    fcn.00010e00(0xfe000000,noname_1,CONCAT71(Var3,1));
    if ((-1 < extraout_RAX) && ((auStack_38[0] & 1) != 0)) {
        if ((auStack_38[0] >> 2 & 3) == 0) {
            if ((auStack_38[0] & 2) != 0) goto code_r0x000107e9;
        }
        else if (((auStack_38[0] >> 2 & 3) != 1) || (auStack_38[0] < 0)) goto code_r0x000107e9;
        *0x10ff6 = 1;
        uVar2 = 1;
    }
code_r0x000107e9:
    iVar1 = fcn.00010bd0(auStack_28);
    if (-1 < iVar1) {
        *0x10ff4 = 1;
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00010c9c @ 0x10c9c */

int64_t fcn.00010c9c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x11018 + 0x40))(noname_0,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.000102a0(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00010560 @ 0x10560 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.00010560(int64_t arg1)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint32_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint64_t uVar8;
    char cVar9;
    uint32_t *puVar10;
    uint *puVar11;
    bool bVar12;
    uint *puStackX_8;
    uint *puStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_30h_2;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    ulong uStack_58;
    ulong uStack_50;
    ulong auStack_48 [2];
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_10h;
    
    puVar11 = NULL;
    aiStackX_18[1] = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auStack_48[0] = 0;
    aiStackX_18[0] = 0;
    puStackX_8 = NULL;
    puStackX_10 = NULL;
    if (arg1 == 0) {
code_r0x0001059b:
        uVar2 = 0x800000000000000e;
    }
    else {
        *arg1 = *arg1 & 0xffffc00f;
        bVar12 = *0x10ff4 != '\0';
        *(arg1 + 4) = 0;
        *(arg1 + 0x10) = 1;
        *(arg1 + 0xc) = 0;
        if ((bVar12) && (*0x10ff5 != '\0')) {
            puVar7 = puVar11;
            puVar4 = puVar11;
            if (*0x10fe0 != 0) {
                var_30h = *0x10fb0;
                var_28h = *0x10fb8;
                fcn.000104a0(arg1,aiStackX_18 + 1,aiStackX_18,*0x10fe0);
                if (*0x1100c != 0) {
                    var_30h = *0x10f90;
                    var_28h = *0x10f98;
                    fcn.000104a0(arg1,&uStack_58,&puStackX_8,*0x1100c);
                    puVar4 = puStackX_8;
                }
                puVar7 = NULL;
                if (*0x11000 != 0) {
                    var_30h = *0x10fa0;
                    var_28h = *0x10fa8;
                    fcn.000104a0(arg1,&uStack_50,&puStackX_10,*0x11000);
                    puVar7 = puStackX_10;
                }
            }
            fcn.000103d4(aiStackX_18[0],puVar4,puVar7);
        }
        cVar9 = *0x10ff6;
        if (*0x10ff6 == '\0') {
code_r0x00010727:
            if (*0x10ff4 == '\0') goto code_r0x0001059b;
        }
        else {
            if (*0x10fe4 != '\0') {
                iVar3 = fcn.00010d54(0x10f10);
                uVar1 = *(iVar3 + 2) - 0x18U >> 4;
                if (uVar1 != 0) {
                    puVar10 = iVar3 + 0x20;
                    uVar8 = uVar1;
                    do {
                        var_30h = *0x10fb0;
                        var_28h = *0x10fb8;
                        fcn.000104a0(arg1,auStack_48,&puStackX_8,*puVar10);
                        puVar7 = *(puVar10 + -2);
                        puVar4 = puStackX_8;
                        puVar6 = puVar11;
                        if (*puVar10 != 0) {
                            do {
                                uVar5 = puVar6 + 4;
                                puVar6 = uVar5;
                                *puVar4 = *puVar7;
                                puVar7 = puVar7 + 1;
                                puVar4 = puVar4 + 1;
                            } while (uVar5 < *puVar10);
                        }
                        puVar10 = puVar10 + 4;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                    cVar9 = *0x10ff6;
                }
            }
            if (cVar9 == '\0') goto code_r0x00010727;
        }
        iVar3 = *0x11038;
        *arg1 = *arg1 | 5;
        *(iVar3 + 0x24) = *(arg1 + 0xc) + 0x14;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00010da0 @ 0x10da0 */

void fcn.00010da0(int64_t arg1)

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
            fcn.000102c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


